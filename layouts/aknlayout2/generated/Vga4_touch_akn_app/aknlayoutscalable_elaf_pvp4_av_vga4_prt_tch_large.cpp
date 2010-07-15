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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00042395 };

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
0x6319,	// (0x000486ae) Screen

0x6325,	// (0x000486ba) application_window_ParamLimits

0x6325,	// (0x000486ba) application_window

0x0723,	// (0x00042ab8) screen_g1

0x6381,	// (0x00048716) area_bottom_pane_ParamLimits

0x6381,	// (0x00048716) area_bottom_pane

0x6441,	// (0x000487d6) area_top_pane_ParamLimits

0x6441,	// (0x000487d6) area_top_pane

0x64d5,	// (0x0004886a) main_pane_ParamLimits

0x64d5,	// (0x0004886a) main_pane

0x072d,	// (0x00042ac2) misc_graphics

0x9249,	// (0x0004b5de) battery_pane_ParamLimits

0x9249,	// (0x0004b5de) battery_pane

0x9f03,	// (0x0004c298) bg_status_flat_pane_g8

0x9f0b,	// (0x0004c2a0) bg_status_flat_pane_g9

0x930b,	// (0x0004b6a0) context_pane_ParamLimits

0x930b,	// (0x0004b6a0) context_pane

0x942f,	// (0x0004b7c4) navi_pane_ParamLimits

0x942f,	// (0x0004b7c4) navi_pane

0x94bf,	// (0x0004b854) signal_pane_ParamLimits

0x94bf,	// (0x0004b854) signal_pane

0x0008,

0xf87e,	// (0x00051c13) bg_status_flat_pane_g

0x952c,	// (0x0004b8c1) status_pane_g1_ParamLimits

0x952c,	// (0x0004b8c1) status_pane_g1

0x9538,	// (0x0004b8cd) status_pane_g2_ParamLimits

0x9538,	// (0x0004b8cd) status_pane_g2

0x9544,	// (0x0004b8d9) status_pane_g3_ParamLimits

0x9544,	// (0x0004b8d9) status_pane_g3

0x0004,

0xf7a5,	// (0x00051b3a) status_pane_g_ParamLimits

0xf7a5,	// (0x00051b3a) status_pane_g

0x9578,	// (0x0004b90d) title_pane_ParamLimits

0x9578,	// (0x0004b90d) title_pane

0x95b7,	// (0x0004b94c) uni_indicator_pane_ParamLimits

0x95b7,	// (0x0004b94c) uni_indicator_pane

0x9173,	// (0x0004b508) bg_list_pane_ParamLimits

0x9173,	// (0x0004b508) bg_list_pane

0x9193,	// (0x0004b528) find_pane

0x919b,	// (0x0004b530) listscroll_app_pane_ParamLimits

0x919b,	// (0x0004b530) listscroll_app_pane

0x91a7,	// (0x0004b53c) listscroll_form_pane

0x74af,	// (0x00049844) listscroll_gen_pane_ParamLimits

0x74af,	// (0x00049844) listscroll_gen_pane

0x74c3,	// (0x00049858) listscroll_set_pane

0x6bc9,	// (0x00048f5e) main_idle_act_pane

0x482e,	// (0x00046bc3) main_idle_trad_pane

0x482e,	// (0x00046bc3) main_list_empty_pane

0x919b,	// (0x0004b530) main_midp_pane

0x91c1,	// (0x0004b556) main_pane_g1_ParamLimits

0x91c1,	// (0x0004b556) main_pane_g1

0x74cb,	// (0x00049860) popup_ai_message_window_ParamLimits

0x74cb,	// (0x00049860) popup_ai_message_window

0x757f,	// (0x00049914) popup_fep_china_uni_window_ParamLimits

0x757f,	// (0x00049914) popup_fep_china_uni_window

0x75df,	// (0x00049974) popup_fep_japan_candidate_window_ParamLimits

0x75df,	// (0x00049974) popup_fep_japan_candidate_window

0x7609,	// (0x0004999e) popup_fep_japan_predictive_window_ParamLimits

0x7609,	// (0x0004999e) popup_fep_japan_predictive_window

0x763f,	// (0x000499d4) popup_find_window

0x764c,	// (0x000499e1) popup_grid_graphic_window_ParamLimits

0x764c,	// (0x000499e1) popup_grid_graphic_window

0x767a,	// (0x00049a0f) popup_large_graphic_colour_window

0x76a0,	// (0x00049a35) popup_menu_window_ParamLimits

0x76a0,	// (0x00049a35) popup_menu_window

0x786a,	// (0x00049bff) popup_note_image_window

0x7854,	// (0x00049be9) popup_note_wait_window_ParamLimits

0x7854,	// (0x00049be9) popup_note_wait_window

0x7854,	// (0x00049be9) popup_note_window_ParamLimits

0x7854,	// (0x00049be9) popup_note_window

0x78d0,	// (0x00049c65) popup_query_code_window_ParamLimits

0x78d0,	// (0x00049c65) popup_query_code_window

0x78e6,	// (0x00049c7b) popup_query_data_code_window_ParamLimits

0x78e6,	// (0x00049c7b) popup_query_data_code_window

0x7909,	// (0x00049c9e) popup_query_data_window_ParamLimits

0x7909,	// (0x00049c9e) popup_query_data_window

0x792b,	// (0x00049cc0) popup_query_sat_info_window_ParamLimits

0x792b,	// (0x00049cc0) popup_query_sat_info_window

0x796a,	// (0x00049cff) popup_snote_single_graphic_window_ParamLimits

0x796a,	// (0x00049cff) popup_snote_single_graphic_window

0x796a,	// (0x00049cff) popup_snote_single_text_window_ParamLimits

0x796a,	// (0x00049cff) popup_snote_single_text_window

0x7981,	// (0x00049d16) popup_sub_window_general

0x7ac7,	// (0x00049e5c) popup_window_general_ParamLimits

0x7ac7,	// (0x00049e5c) popup_window_general

0x91cf,	// (0x0004b564) power_save_pane

0x7339,	// (0x000496ce) control_pane_g1_ParamLimits

0x7339,	// (0x000496ce) control_pane_g1

0x7362,	// (0x000496f7) control_pane_g2_ParamLimits

0x7362,	// (0x000496f7) control_pane_g2

0x9136,	// (0x0004b4cb) control_pane_g3_ParamLimits

0x9136,	// (0x0004b4cb) control_pane_g3

0x0007,

0xf78d,	// (0x00051b22) control_pane_g_ParamLimits

0xf78d,	// (0x00051b22) control_pane_g

0x73ae,	// (0x00049743) control_pane_t1_ParamLimits

0x73ae,	// (0x00049743) control_pane_t1

0x7408,	// (0x0004979d) control_pane_t2_ParamLimits

0x7408,	// (0x0004979d) control_pane_t2

0x0002,

0xf79e,	// (0x00051b33) control_pane_t_ParamLimits

0xf79e,	// (0x00051b33) control_pane_t

0x7329,	// (0x000496be) navi_navi_volume_pane_cp1

0x7331,	// (0x000496c6) status_small_icon_pane

0x49f8,	// (0x00046d8d) status_small_pane_g1_ParamLimits

0x49f8,	// (0x00046d8d) status_small_pane_g1

0x909f,	// (0x0004b434) status_small_pane_g2_ParamLimits

0x909f,	// (0x0004b434) status_small_pane_g2

0x90ab,	// (0x0004b440) status_small_pane_g3_ParamLimits

0x90ab,	// (0x0004b440) status_small_pane_g3

0x90b7,	// (0x0004b44c) status_small_pane_g4_ParamLimits

0x90b7,	// (0x0004b44c) status_small_pane_g4

0x90c3,	// (0x0004b458) status_small_pane_g5_ParamLimits

0x90c3,	// (0x0004b458) status_small_pane_g5

0x90d1,	// (0x0004b466) status_small_pane_g6_ParamLimits

0x90d1,	// (0x0004b466) status_small_pane_g6

0x0007,

0xf77c,	// (0x00051b11) status_small_pane_g_ParamLimits

0xf77c,	// (0x00051b11) status_small_pane_g

0x9100,	// (0x0004b495) status_small_pane_t1

0x9122,	// (0x0004b4b7) status_small_wait_pane_ParamLimits

0x9122,	// (0x0004b4b7) status_small_wait_pane

0x6f55,	// (0x000492ea) aid_levels_signal_ParamLimits

0x6f55,	// (0x000492ea) aid_levels_signal

0x6f64,	// (0x000492f9) signal_pane_g1_ParamLimits

0x6f64,	// (0x000492f9) signal_pane_g1

0x6f79,	// (0x0004930e) signal_pane_g2_ParamLimits

0x6f79,	// (0x0004930e) signal_pane_g2

0x0003,

0xf70d,	// (0x00051aa2) signal_pane_g_ParamLimits

0xf70d,	// (0x00051aa2) signal_pane_g

0x12e6,	// (0x0004367b) context_pane_g1

0x6734,	// (0x00048ac9) title_pane_g1

0x6766,	// (0x00048afb) title_pane_t1

0x0743,	// (0x00042ad8) title_pane_t2

0x0769,	// (0x00042afe) title_pane_t3

0x0002,

0xf557,	// (0x000518ec) title_pane_t

0x95cf,	// (0x0004b964) aid_levels_battery_ParamLimits

0x95cf,	// (0x0004b964) aid_levels_battery

0x95e0,	// (0x0004b975) battery_pane_g1_ParamLimits

0x95e0,	// (0x0004b975) battery_pane_g1

0x95f6,	// (0x0004b98b) battery_pane_g2_ParamLimits

0x95f6,	// (0x0004b98b) battery_pane_g2

0x0001,

0xf7b0,	// (0x00051b45) battery_pane_g_ParamLimits

0xf7b0,	// (0x00051b45) battery_pane_g

0xa84d,	// (0x0004cbe2) uni_indicator_pane_g1

0xa860,	// (0x0004cbf5) uni_indicator_pane_g2

0xa872,	// (0x0004cc07) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00051cbb) uni_indicator_pane_g

0x46a8,	// (0x00046a3d) navi_icon_pane_ParamLimits

0x46a8,	// (0x00046a3d) navi_icon_pane

0x45ef,	// (0x00046984) navi_midp_pane

0x46c4,	// (0x00046a59) navi_navi_pane

0x46ce,	// (0x00046a63) navi_text_pane_ParamLimits

0x46ce,	// (0x00046a63) navi_text_pane

0x0723,	// (0x00042ab8) status_small_wait_pane_g1

0x0a8a,	// (0x00042e1f) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00051cb6) status_small_wait_pane_g

0xa560,	// (0x0004c8f5) navi_navi_icon_text_pane

0xa568,	// (0x0004c8fd) navi_navi_pane_g1_ParamLimits

0xa568,	// (0x0004c8fd) navi_navi_pane_g1

0xa57a,	// (0x0004c90f) navi_navi_pane_g2_ParamLimits

0xa57a,	// (0x0004c90f) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00051c84) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00051c84) navi_navi_pane_g

0xa58c,	// (0x0004c921) navi_navi_tabs_pane

0xa595,	// (0x0004c92a) navi_navi_text_pane

0xa560,	// (0x0004c8f5) navi_navi_volume_pane

0xa53c,	// (0x0004c8d1) navi_text_pane_t1

0xa530,	// (0x0004c8c5) navi_icon_pane_g1

0xa483,	// (0x0004c818) navi_navi_text_pane_t1

0x7d94,	// (0x0004a129) navi_navi_volume_pane_g1

0x7d9c,	// (0x0004a131) volume_small_pane

0xa3e9,	// (0x0004c77e) navi_navi_icon_text_pane_g1

0xa3f1,	// (0x0004c786) navi_navi_icon_text_pane_t1

0x46c4,	// (0x00046a59) navi_tabs_2_long_pane

0x46c4,	// (0x00046a59) navi_tabs_2_pane

0x46c4,	// (0x00046a59) navi_tabs_3_long_pane

0x46c4,	// (0x00046a59) navi_tabs_3_pane

0x46c4,	// (0x00046a59) navi_tabs_4_pane

0x7d74,	// (0x0004a109) tabs_2_active_pane_ParamLimits

0x7d74,	// (0x0004a109) tabs_2_active_pane

0x7d84,	// (0x0004a119) tabs_2_passive_pane_ParamLimits

0x7d84,	// (0x0004a119) tabs_2_passive_pane

0x7d42,	// (0x0004a0d7) tabs_3_active_pane_ParamLimits

0x7d42,	// (0x0004a0d7) tabs_3_active_pane

0x7d52,	// (0x0004a0e7) tabs_3_passive_pane_ParamLimits

0x7d52,	// (0x0004a0e7) tabs_3_passive_pane

0x7d63,	// (0x0004a0f8) tabs_3_passive_pane_cp_ParamLimits

0x7d63,	// (0x0004a0f8) tabs_3_passive_pane_cp

0x7cf6,	// (0x0004a08b) tabs_4_active_pane_ParamLimits

0x7cf6,	// (0x0004a08b) tabs_4_active_pane

0x7d09,	// (0x0004a09e) tabs_4_passive_pane_ParamLimits

0x7d09,	// (0x0004a09e) tabs_4_passive_pane

0x7d1a,	// (0x0004a0af) tabs_4_passive_pane_cp_ParamLimits

0x7d1a,	// (0x0004a0af) tabs_4_passive_pane_cp

0x7d2b,	// (0x0004a0c0) tabs_4_passive_pane_cp2_ParamLimits

0x7d2b,	// (0x0004a0c0) tabs_4_passive_pane_cp2

0x7cd2,	// (0x0004a067) tabs_2_long_active_pane_ParamLimits

0x7cd2,	// (0x0004a067) tabs_2_long_active_pane

0x7ce4,	// (0x0004a079) tabs_2_long_passive_pane_ParamLimits

0x7ce4,	// (0x0004a079) tabs_2_long_passive_pane

0x7c93,	// (0x0004a028) tabs_3_long_active_pane_ParamLimits

0x7c93,	// (0x0004a028) tabs_3_long_active_pane

0x7ca6,	// (0x0004a03b) tabs_3_long_passive_pane_ParamLimits

0x7ca6,	// (0x0004a03b) tabs_3_long_passive_pane

0x7cbf,	// (0x0004a054) tabs_3_long_passive_pane_cp_ParamLimits

0x7cbf,	// (0x0004a054) tabs_3_long_passive_pane_cp

0x7c39,	// (0x00049fce) volume_small_pane_g1

0x7c42,	// (0x00049fd7) volume_small_pane_g2

0x7c4b,	// (0x00049fe0) volume_small_pane_g3

0x7c54,	// (0x00049fe9) volume_small_pane_g4

0x7c5d,	// (0x00049ff2) volume_small_pane_g5

0x7c66,	// (0x00049ffb) volume_small_pane_g6

0x7c6f,	// (0x0004a004) volume_small_pane_g7

0x7c78,	// (0x0004a00d) volume_small_pane_g8

0x7c81,	// (0x0004a016) volume_small_pane_g9

0x7c8a,	// (0x0004a01f) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00051c50) volume_small_pane_g

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp2_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp2

0x67ce,	// (0x00048b63) tabs_3_active_pane_g1

0x67d6,	// (0x00048b6b) tabs_3_active_pane_t1

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp2_ParamLimits

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp2

0x67ce,	// (0x00048b63) tabs_3_passive_pane_g1

0x67d6,	// (0x00048b6b) tabs_3_passive_pane_t1

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp3_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp3

0x67e8,	// (0x00048b7d) tabs_4_active_pane_g1

0x67f0,	// (0x00048b85) tabs_4_active_pane_t1

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp3_ParamLimits

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp3

0x67e8,	// (0x00048b7d) tabs_4_1_passive_pane_g1

0x67f0,	// (0x00048b85) tabs_4_1_passive_pane_t1

0x919b,	// (0x0004b530) list_highlight_pane_cp2

0xaabb,	// (0x0004ce50) list_set_pane_ParamLimits

0xaabb,	// (0x0004ce50) list_set_pane

0xab7d,	// (0x0004cf12) main_pane_set_t1_ParamLimits

0xab7d,	// (0x0004cf12) main_pane_set_t1

0xab9d,	// (0x0004cf32) main_pane_set_t2_ParamLimits

0xab9d,	// (0x0004cf32) main_pane_set_t2

0xabb1,	// (0x0004cf46) main_pane_set_t3_ParamLimits

0xabb1,	// (0x0004cf46) main_pane_set_t3

0xabc5,	// (0x0004cf5a) main_pane_set_t4_ParamLimits

0xabc5,	// (0x0004cf5a) main_pane_set_t4

0x0003,

0xf98b,	// (0x00051d20) main_pane_set_t_ParamLimits

0xf98b,	// (0x00051d20) main_pane_set_t

0xabd9,	// (0x0004cf6e) setting_code_pane

0xabe3,	// (0x0004cf78) setting_slider_graphic_pane

0xabe3,	// (0x0004cf78) setting_slider_pane

0xabe3,	// (0x0004cf78) setting_text_pane

0xabe3,	// (0x0004cf78) setting_volume_pane

0x6802,	// (0x00048b97) volume_set_pane

0x0789,	// (0x00042b1e) bg_set_opt_pane_cp

0x680c,	// (0x00048ba1) setting_slider_pane_t1

0x6825,	// (0x00048bba) setting_slider_pane_t2

0x683f,	// (0x00048bd4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000518f3) setting_slider_pane_t

0x6857,	// (0x00048bec) slider_set_pane

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp2

0x0797,	// (0x00042b2c) setting_slider_graphic_pane_g1

0x686d,	// (0x00048c02) setting_slider_graphic_pane_t1

0x687d,	// (0x00048c12) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000518fa) setting_slider_graphic_pane_t

0x688d,	// (0x00048c22) slider_set_pane_cp

0x072d,	// (0x00042ac2) input_focus_pane_cp1

0xaa7c,	// (0x0004ce11) list_set_text_pane

0x0723,	// (0x00042ab8) setting_text_pane_g1

0x072d,	// (0x00042ac2) input_focus_pane_cp2

0x0723,	// (0x00042ab8) setting_code_pane_g1

0x07a0,	// (0x00042b35) setting_code_pane_t1

0x540b,	// (0x000477a0) set_text_pane_t1_ParamLimits

0x540b,	// (0x000477a0) set_text_pane_t1

0x0e1f,	// (0x000431b4) set_opt_bg_pane_g1

0x0e27,	// (0x000431bc) set_opt_bg_pane_g2

0xaa54,	// (0x0004cde9) set_opt_bg_pane_g3

0x0e37,	// (0x000431cc) set_opt_bg_pane_g4

0x0e3f,	// (0x000431d4) set_opt_bg_pane_g5

0x0e47,	// (0x000431dc) set_opt_bg_pane_g6

0xaa5e,	// (0x0004cdf3) set_opt_bg_pane_g7

0xaa68,	// (0x0004cdfd) set_opt_bg_pane_g8

0xaa72,	// (0x0004ce07) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00051d0d) set_opt_bg_pane_g

0xaa47,	// (0x0004cddc) slider_set_pane_g1

0x7e1d,	// (0x0004a1b2) slider_set_pane_g2

0x0006,

0xf969,	// (0x00051cfe) slider_set_pane_g

0x7da5,	// (0x0004a13a) volume_set_pane_g1

0x7daf,	// (0x0004a144) volume_set_pane_g2

0x7db9,	// (0x0004a14e) volume_set_pane_g3

0x7dc3,	// (0x0004a158) volume_set_pane_g4

0x7dcd,	// (0x0004a162) volume_set_pane_g5

0x7dd7,	// (0x0004a16c) volume_set_pane_g6

0x7de1,	// (0x0004a176) volume_set_pane_g7

0x7deb,	// (0x0004a180) volume_set_pane_g8

0x7df5,	// (0x0004a18a) volume_set_pane_g9

0x7dff,	// (0x0004a194) volume_set_pane_g10

0x0009,

0xf941,	// (0x00051cd6) volume_set_pane_g

0x6895,	// (0x00048c2a) indicator_pane_ParamLimits

0x6895,	// (0x00048c2a) indicator_pane

0x68a1,	// (0x00048c36) main_idle_pane_g2_ParamLimits

0x68a1,	// (0x00048c36) main_idle_pane_g2

0x68c9,	// (0x00048c5e) main_pane_idle_g1_ParamLimits

0x68c9,	// (0x00048c5e) main_pane_idle_g1

0x07ae,	// (0x00042b43) popup_clock_digital_analogue_window_ParamLimits

0x07ae,	// (0x00042b43) popup_clock_digital_analogue_window

0x68d7,	// (0x00048c6c) soft_indicator_pane_ParamLimits

0x68d7,	// (0x00048c6c) soft_indicator_pane

0x68e5,	// (0x00048c7a) wallpaper_pane_ParamLimits

0x68e5,	// (0x00048c7a) wallpaper_pane

0x0723,	// (0x00042ab8) wallpaper_pane_g1

0x68f1,	// (0x00048c86) indicator_pane_g1_ParamLimits

0x68f1,	// (0x00048c86) indicator_pane_g1

0xaebe,	// (0x0004d253) navi_navi_icon_text_pane_srt_g1

0x07dc,	// (0x00042b71) soft_indicator_pane_t1

0x07f6,	// (0x00042b8b) aid_ps_area_pane

0x68fd,	// (0x00048c92) aid_ps_clock_pane

0x0807,	// (0x00042b9c) aid_ps_indicator_pane

0x0813,	// (0x00042ba8) indicator_ps_pane_ParamLimits

0x0813,	// (0x00042ba8) indicator_ps_pane

0x0822,	// (0x00042bb7) power_save_pane_g1_ParamLimits

0x0822,	// (0x00042bb7) power_save_pane_g1

0x082e,	// (0x00042bc3) power_save_pane_g2_ParamLimits

0x082e,	// (0x00042bc3) power_save_pane_g2

0x6335,	// (0x000486ca) aid_navinavi_width_pane

0x07f6,	// (0x00042b8b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000518ff) power_save_pane_g_ParamLimits

0xf56a,	// (0x000518ff) power_save_pane_g

0x083c,	// (0x00042bd1) power_save_pane_t1_ParamLimits

0x083c,	// (0x00042bd1) power_save_pane_t1

0x68fd,	// (0x00048c92) aid_ps_clock_pane_ParamLimits

0x0807,	// (0x00042b9c) aid_ps_indicator_pane_ParamLimits

0x084e,	// (0x00042be3) power_save_pane_t4_ParamLimits

0x084e,	// (0x00042be3) power_save_pane_t4

0x0001,

0xf56f,	// (0x00051904) power_save_pane_t_ParamLimits

0xf56f,	// (0x00051904) power_save_pane_t

0x0878,	// (0x00042c0d) power_save_t3_ParamLimits

0x0878,	// (0x00042c0d) power_save_t3

0x0863,	// (0x00042bf8) power_save_t2_ParamLimits

0x0863,	// (0x00042bf8) power_save_t2

0x088d,	// (0x00042c22) indicator_ps_pane_g1

0x690b,	// (0x00048ca0) ai_gene_pane_ParamLimits

0x690b,	// (0x00048ca0) ai_gene_pane

0x6917,	// (0x00048cac) ai_links_pane_ParamLimits

0x6917,	// (0x00048cac) ai_links_pane

0x6923,	// (0x00048cb8) indicator_pane_cp1_ParamLimits

0x6923,	// (0x00048cb8) indicator_pane_cp1

0x692f,	// (0x00048cc4) main_pane_idle_g1_cp_ParamLimits

0x692f,	// (0x00048cc4) main_pane_idle_g1_cp

0x0896,	// (0x00042c2b) popup_ai_links_title_window

0x693b,	// (0x00048cd0) soft_indicator_pane_cp1_ParamLimits

0x693b,	// (0x00048cd0) soft_indicator_pane_cp1

0xa83b,	// (0x0004cbd0) ai_links_pane_g1

0xa844,	// (0x0004cbd9) grid_ai_links_pane

0xa820,	// (0x0004cbb5) ai_gene_pane_1

0xa829,	// (0x0004cbbe) ai_gene_pane_2

0xa832,	// (0x0004cbc7) list_highlight_pane_cp4

0xa800,	// (0x0004cb95) cell_ai_link_pane_ParamLimits

0xa800,	// (0x0004cb95) cell_ai_link_pane

0xa7f8,	// (0x0004cb8d) cell_ai_link_pane_g1

0x0a8a,	// (0x00042e1f) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00051cb1) cell_ai_link_pane_g

0x072d,	// (0x00042ac2) grid_highlight_cp2

0x072d,	// (0x00042ac2) bg_popup_sub_pane_cp1

0x08ad,	// (0x00042c42) popup_ai_links_title_window_t1

0xa744,	// (0x0004cad9) ai_gene_pane_1_g1_ParamLimits

0xa744,	// (0x0004cad9) ai_gene_pane_1_g1

0xa750,	// (0x0004cae5) ai_gene_pane_1_g2_ParamLimits

0xa750,	// (0x0004cae5) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00051ca7) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00051ca7) ai_gene_pane_1_g

0xa75d,	// (0x0004caf2) ai_gene_pane_1_t1_ParamLimits

0xa75d,	// (0x0004caf2) ai_gene_pane_1_t1

0xa791,	// (0x0004cb26) grid_ai_soft_ind_pane

0xa72f,	// (0x0004cac4) ai_gene_pane_2_t1_ParamLimits

0xa72f,	// (0x0004cac4) ai_gene_pane_2_t1

0x6947,	// (0x00048cdc) main_pane_empty_t1_ParamLimits

0x6947,	// (0x00048cdc) main_pane_empty_t1

0x695f,	// (0x00048cf4) main_pane_empty_t2_ParamLimits

0x695f,	// (0x00048cf4) main_pane_empty_t2

0x6974,	// (0x00048d09) main_pane_empty_t3_ParamLimits

0x6974,	// (0x00048d09) main_pane_empty_t3

0x6986,	// (0x00048d1b) main_pane_empty_t4_ParamLimits

0x6986,	// (0x00048d1b) main_pane_empty_t4

0x6998,	// (0x00048d2d) main_pane_empty_t5_ParamLimits

0x6998,	// (0x00048d2d) main_pane_empty_t5

0x0004,

0xf574,	// (0x00051909) main_pane_empty_t_ParamLimits

0xf574,	// (0x00051909) main_pane_empty_t

0x0e70,	// (0x00043205) bg_popup_window_pane_ParamLimits

0x0e70,	// (0x00043205) bg_popup_window_pane

0xa491,	// (0x0004c826) find_popup_pane_cp2_ParamLimits

0xa491,	// (0x0004c826) find_popup_pane_cp2

0xa49d,	// (0x0004c832) heading_pane_ParamLimits

0xa49d,	// (0x0004c832) heading_pane

0x072d,	// (0x00042ac2) bg_popup_sub_pane

0xa40b,	// (0x0004c7a0) bg_popup_window_pane_g1_ParamLimits

0xa40b,	// (0x0004c7a0) bg_popup_window_pane_g1

0xa417,	// (0x0004c7ac) bg_popup_window_pane_g2_ParamLimits

0xa417,	// (0x0004c7ac) bg_popup_window_pane_g2

0xa423,	// (0x0004c7b8) bg_popup_window_pane_g3_ParamLimits

0xa423,	// (0x0004c7b8) bg_popup_window_pane_g3

0xa42f,	// (0x0004c7c4) bg_popup_window_pane_g4_ParamLimits

0xa42f,	// (0x0004c7c4) bg_popup_window_pane_g4

0xa43b,	// (0x0004c7d0) bg_popup_window_pane_g5_ParamLimits

0xa43b,	// (0x0004c7d0) bg_popup_window_pane_g5

0xa447,	// (0x0004c7dc) bg_popup_window_pane_g6_ParamLimits

0xa447,	// (0x0004c7dc) bg_popup_window_pane_g6

0xa453,	// (0x0004c7e8) bg_popup_window_pane_g7_ParamLimits

0xa453,	// (0x0004c7e8) bg_popup_window_pane_g7

0xa45f,	// (0x0004c7f4) bg_popup_window_pane_g8_ParamLimits

0xa45f,	// (0x0004c7f4) bg_popup_window_pane_g8

0xa46b,	// (0x0004c800) bg_popup_window_pane_g9_ParamLimits

0xa46b,	// (0x0004c800) bg_popup_window_pane_g9

0xa477,	// (0x0004c80c) bg_popup_window_pane_g10_ParamLimits

0xa477,	// (0x0004c80c) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00051c6f) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00051c6f) bg_popup_window_pane_g

0xa3a0,	// (0x0004c735) bg_popup_heading_pane_ParamLimits

0xa3a0,	// (0x0004c735) bg_popup_heading_pane

0x7ee5,	// (0x0004a27a) tabs_4_passive_pane_cp_srt_ParamLimits

0x7ee5,	// (0x0004a27a) tabs_4_passive_pane_cp_srt

0x7ef7,	// (0x0004a28c) tabs_4_passive_pane_srt_ParamLimits

0xa3b4,	// (0x0004c749) heading_pane_g2

0x7ef7,	// (0x0004a28c) tabs_4_passive_pane_srt

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp3_srt_ParamLimits

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp3_srt

0xa3bc,	// (0x0004c751) heading_pane_t1_ParamLimits

0xa3bc,	// (0x0004c751) heading_pane_t1

0xa3d3,	// (0x0004c768) heading_pane_t2_ParamLimits

0xa3d3,	// (0x0004c768) heading_pane_t2

0x0001,

0xf8d5,	// (0x00051c6a) heading_pane_t_ParamLimits

0xf8d5,	// (0x00051c6a) heading_pane_t

0x9ecb,	// (0x0004c260) bg_popup_heading_pane_g1

0x9f7a,	// (0x0004c30f) bg_popup_heading_pane_g2

0x9f84,	// (0x0004c319) bg_popup_heading_pane_g3

0x9f8e,	// (0x0004c323) bg_popup_heading_pane_g4

0x9f98,	// (0x0004c32d) bg_popup_heading_pane_g5

0x9fa2,	// (0x0004c337) bg_popup_heading_pane_g6

0x9faa,	// (0x0004c33f) bg_popup_heading_pane_g7

0x9fb2,	// (0x0004c347) bg_popup_heading_pane_g8

0x9fbc,	// (0x0004c351) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00051c26) bg_popup_heading_pane_g

0x96cb,	// (0x0004ba60) bg_popup_sub_pane_g1

0x96d3,	// (0x0004ba68) bg_popup_sub_pane_g2

0x96db,	// (0x0004ba70) bg_popup_sub_pane_g3

0x96e3,	// (0x0004ba78) bg_popup_sub_pane_g4

0x96eb,	// (0x0004ba80) bg_popup_sub_pane_g5

0x96f3,	// (0x0004ba88) bg_popup_sub_pane_g6

0x96fb,	// (0x0004ba90) bg_popup_sub_pane_g7

0x9703,	// (0x0004ba98) bg_popup_sub_pane_g8

0x970b,	// (0x0004baa0) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00051c00) bg_popup_sub_pane_g

0x077b,	// (0x00042b10) bg_popup_window_pane_cp5_ParamLimits

0x077b,	// (0x00042b10) bg_popup_window_pane_cp5

0x08ca,	// (0x00042c5f) popup_note_window_g1_ParamLimits

0x08ca,	// (0x00042c5f) popup_note_window_g1

0x08d6,	// (0x00042c6b) popup_note_window_t1_ParamLimits

0x08d6,	// (0x00042c6b) popup_note_window_t1

0x08ec,	// (0x00042c81) popup_note_window_t2_ParamLimits

0x08ec,	// (0x00042c81) popup_note_window_t2

0x0902,	// (0x00042c97) popup_note_window_t3_ParamLimits

0x0902,	// (0x00042c97) popup_note_window_t3

0x0918,	// (0x00042cad) popup_note_window_t4_ParamLimits

0x0918,	// (0x00042cad) popup_note_window_t4

0x0940,	// (0x00042cd5) popup_note_window_t5_ParamLimits

0x0940,	// (0x00042cd5) popup_note_window_t5

0x0004,

0xf57f,	// (0x00051914) popup_note_window_t_ParamLimits

0xf57f,	// (0x00051914) popup_note_window_t

0x098a,	// (0x00042d1f) bg_popup_window_pane_cp6_ParamLimits

0x098a,	// (0x00042d1f) bg_popup_window_pane_cp6

0x9e47,	// (0x0004c1dc) popup_note_image_window_g1_ParamLimits

0x9e47,	// (0x0004c1dc) popup_note_image_window_g1

0x9e53,	// (0x0004c1e8) popup_note_image_window_g2_ParamLimits

0x9e53,	// (0x0004c1e8) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00051bf4) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00051bf4) popup_note_image_window_g

0x9e6c,	// (0x0004c201) popup_note_image_window_t1_ParamLimits

0x9e6c,	// (0x0004c201) popup_note_image_window_t1

0x9e85,	// (0x0004c21a) popup_note_image_window_t2_ParamLimits

0x9e85,	// (0x0004c21a) popup_note_image_window_t2

0x9e9e,	// (0x0004c233) popup_note_image_window_t3_ParamLimits

0x9e9e,	// (0x0004c233) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00051bf9) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00051bf9) popup_note_image_window_t

0x9d07,	// (0x0004c09c) bg_popup_window_pane_cp7_ParamLimits

0x9d07,	// (0x0004c09c) bg_popup_window_pane_cp7

0x9d37,	// (0x0004c0cc) popup_note_wait_window_g1_ParamLimits

0x9d37,	// (0x0004c0cc) popup_note_wait_window_g1

0x9d43,	// (0x0004c0d8) popup_note_wait_window_g2_ParamLimits

0x9d43,	// (0x0004c0d8) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00051be2) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00051be2) popup_note_wait_window_g

0x9d5b,	// (0x0004c0f0) popup_note_wait_window_t1_ParamLimits

0x9d5b,	// (0x0004c0f0) popup_note_wait_window_t1

0x9d82,	// (0x0004c117) popup_note_wait_window_t2_ParamLimits

0x9d82,	// (0x0004c117) popup_note_wait_window_t2

0x9da0,	// (0x0004c135) popup_note_wait_window_t3_ParamLimits

0x9da0,	// (0x0004c135) popup_note_wait_window_t3

0x9db3,	// (0x0004c148) popup_note_wait_window_t4_ParamLimits

0x9db3,	// (0x0004c148) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00051be9) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00051be9) popup_note_wait_window_t

0x9dd8,	// (0x0004c16d) wait_bar_pane_ParamLimits

0x9dd8,	// (0x0004c16d) wait_bar_pane

0x072d,	// (0x00042ac2) wait_anim_pane

0x072d,	// (0x00042ac2) wait_border_pane

0x0723,	// (0x00042ab8) wait_anim_pane_g1

0x0723,	// (0x00042ab8) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00051a9d) wait_anim_pane_g

0x9cab,	// (0x0004c040) wait_border_pane_g1

0x9cb6,	// (0x0004c04b) wait_border_pane_g2

0x9cbf,	// (0x0004c054) wait_border_pane_g3

0x0002,

0xf846,	// (0x00051bdb) wait_border_pane_g

0x9b15,	// (0x0004beaa) bg_popup_window_pane_cp16_ParamLimits

0x9b15,	// (0x0004beaa) bg_popup_window_pane_cp16

0x9c15,	// (0x0004bfaa) indicator_popup_pane_cp4_ParamLimits

0x9c15,	// (0x0004bfaa) indicator_popup_pane_cp4

0x9c29,	// (0x0004bfbe) popup_query_data_window_t1_ParamLimits

0x9c29,	// (0x0004bfbe) popup_query_data_window_t1

0x9c3b,	// (0x0004bfd0) popup_query_data_window_t2_ParamLimits

0x9c3b,	// (0x0004bfd0) popup_query_data_window_t2

0x9c54,	// (0x0004bfe9) popup_query_data_window_t3_ParamLimits

0x9c54,	// (0x0004bfe9) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00051bd4) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00051bd4) popup_query_data_window_t

0x9c6e,	// (0x0004c003) query_popup_data_pane_ParamLimits

0x9c6e,	// (0x0004c003) query_popup_data_pane

0x9c82,	// (0x0004c017) query_popup_data_pane_cp1_ParamLimits

0x9c82,	// (0x0004c017) query_popup_data_pane_cp1

0x9b15,	// (0x0004beaa) bg_popup_window_pane_cp10_ParamLimits

0x9b15,	// (0x0004beaa) bg_popup_window_pane_cp10

0x9b47,	// (0x0004bedc) indicator_popup_pane_ParamLimits

0x9b47,	// (0x0004bedc) indicator_popup_pane

0x9b69,	// (0x0004befe) popup_query_code_window_t1_ParamLimits

0x9b69,	// (0x0004befe) popup_query_code_window_t1

0x9b83,	// (0x0004bf18) popup_query_code_window_t2_ParamLimits

0x9b83,	// (0x0004bf18) popup_query_code_window_t2

0x9bcc,	// (0x0004bf61) popup_query_code_window_t3_ParamLimits

0x9bcc,	// (0x0004bf61) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00051bcd) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00051bcd) popup_query_code_window_t

0x9bfb,	// (0x0004bf90) query_popup_pane_ParamLimits

0x9bfb,	// (0x0004bf90) query_popup_pane

0x098a,	// (0x00042d1f) bg_popup_window_pane_cp15_ParamLimits

0x098a,	// (0x00042d1f) bg_popup_window_pane_cp15

0x09aa,	// (0x00042d3f) indicator_popup_pane_cp1_ParamLimits

0x09aa,	// (0x00042d3f) indicator_popup_pane_cp1

0x09bd,	// (0x00042d52) indicator_popup_pane_cp2_ParamLimits

0x09bd,	// (0x00042d52) indicator_popup_pane_cp2

0x09d8,	// (0x00042d6d) popup_query_data_code_window_g1_ParamLimits

0x09d8,	// (0x00042d6d) popup_query_data_code_window_g1

0x09eb,	// (0x00042d80) popup_query_data_code_window_t1_ParamLimits

0x09eb,	// (0x00042d80) popup_query_data_code_window_t1

0x09fd,	// (0x00042d92) popup_query_data_code_window_t2_ParamLimits

0x09fd,	// (0x00042d92) popup_query_data_code_window_t2

0x0a0f,	// (0x00042da4) popup_query_data_code_window_t3_ParamLimits

0x0a0f,	// (0x00042da4) popup_query_data_code_window_t3

0x0a25,	// (0x00042dba) popup_query_data_code_window_t4_ParamLimits

0x0a25,	// (0x00042dba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005191f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005191f) popup_query_data_code_window_t

0x4664,	// (0x000469f9) list_single_midp_graphic_pane_g3

0x0a3f,	// (0x00042dd4) query_popup_data_pane_cp2_ParamLimits

0x0a52,	// (0x00042de7) query_popup_pane_cp2_ParamLimits

0x0a52,	// (0x00042de7) query_popup_pane_cp2

0x072d,	// (0x00042ac2) bg_popup_window_pane_cp11

0x9b01,	// (0x0004be96) heading_pane_cp5

0x0aeb,	// (0x00042e80) listscroll_popup_info_pane

0x072d,	// (0x00042ac2) input_focus_pane_cp3

0x0a6d,	// (0x00042e02) query_popup_pane_t1

0x0a7b,	// (0x00042e10) list_popup_info_pane_ParamLimits

0x0a7b,	// (0x00042e10) list_popup_info_pane

0x0a8a,	// (0x00042e1f) listscroll_popup_info_pane_g1

0x0a92,	// (0x00042e27) scroll_pane_cp7

0x0a9c,	// (0x00042e31) popup_info_list_pane_t1_ParamLimits

0x0a9c,	// (0x00042e31) popup_info_list_pane_t1

0x0ab6,	// (0x00042e4b) popup_info_list_pane_t2_ParamLimits

0x0ab6,	// (0x00042e4b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00051928) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00051928) popup_info_list_pane_t

0x072d,	// (0x00042ac2) bg_popup_window_pane_cp12

0xaed8,	// (0x0004d26d) find_popup_pane

0x0789,	// (0x00042b1e) bg_popup_window_pane_cp3

0x0ad0,	// (0x00042e65) heading_pane_cp3

0x0adc,	// (0x00042e71) listscroll_popup_graphic_pane

0x072d,	// (0x00042ac2) bg_popup_window_pane_cp4

0x69fa,	// (0x00048d8f) heading_pane_cp4

0x0aeb,	// (0x00042e80) listscroll_popup_colour_pane

0x6a04,	// (0x00048d99) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a04,	// (0x00048d99) cell_large_graphic_colour_none_popup_pane

0x6a18,	// (0x00048dad) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a18,	// (0x00048dad) grid_large_graphic_colour_popup_pane

0x6a44,	// (0x00048dd9) listscroll_popup_colour_pane_g1_ParamLimits

0x6a44,	// (0x00048dd9) listscroll_popup_colour_pane_g1

0x6a5b,	// (0x00048df0) listscroll_popup_colour_pane_g2_ParamLimits

0x6a5b,	// (0x00048df0) listscroll_popup_colour_pane_g2

0x6a72,	// (0x00048e07) listscroll_popup_colour_pane_g3_ParamLimits

0x6a72,	// (0x00048e07) listscroll_popup_colour_pane_g3

0x6a82,	// (0x00048e17) listscroll_popup_colour_pane_g4_ParamLimits

0x6a82,	// (0x00048e17) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005192d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005192d) listscroll_popup_colour_pane_g

0x0af3,	// (0x00042e88) scroll_pane_cp6_ParamLimits

0x0af3,	// (0x00042e88) scroll_pane_cp6

0x6a96,	// (0x00048e2b) cell_large_graphic_colour_popup_pane_ParamLimits

0x6a96,	// (0x00048e2b) cell_large_graphic_colour_popup_pane

0x0b05,	// (0x00042e9a) cell_large_graphic_colour_none_popup_pane_t1

0x072d,	// (0x00042ac2) grid_highlight_pane_cp5

0x0b14,	// (0x00042ea9) cell_large_graphic_colour_popup_pane_g1

0x0b1c,	// (0x00042eb1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00051936) cell_large_graphic_colour_popup_pane_g

0x0b24,	// (0x00042eb9) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b2d,	// (0x00042ec2) grid_highlight_pane_cp4

0x0b35,	// (0x00042eca) bg_popup_window_pane_cp8_ParamLimits

0x0b35,	// (0x00042eca) bg_popup_window_pane_cp8

0x0b50,	// (0x00042ee5) popup_snote_single_text_window_g1_ParamLimits

0x0b50,	// (0x00042ee5) popup_snote_single_text_window_g1

0x0b62,	// (0x00042ef7) popup_snote_single_text_window_t1_ParamLimits

0x0b62,	// (0x00042ef7) popup_snote_single_text_window_t1

0x0b75,	// (0x00042f0a) popup_snote_single_text_window_t2_ParamLimits

0x0b75,	// (0x00042f0a) popup_snote_single_text_window_t2

0x0b88,	// (0x00042f1d) popup_snote_single_text_window_t3_ParamLimits

0x0b88,	// (0x00042f1d) popup_snote_single_text_window_t3

0x0bc1,	// (0x00042f56) popup_snote_single_text_window_t4_ParamLimits

0x0bc1,	// (0x00042f56) popup_snote_single_text_window_t4

0x0bf5,	// (0x00042f8a) popup_snote_single_text_window_t5_ParamLimits

0x0bf5,	// (0x00042f8a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005193b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005193b) popup_snote_single_text_window_t

0x0c24,	// (0x00042fb9) bg_popup_window_pane_cp9_ParamLimits

0x0c24,	// (0x00042fb9) bg_popup_window_pane_cp9

0x0b50,	// (0x00042ee5) popup_snote_single_graphic_window_g1_ParamLimits

0x0b50,	// (0x00042ee5) popup_snote_single_graphic_window_g1

0x0c32,	// (0x00042fc7) popup_snote_single_graphic_window_g2_ParamLimits

0x0c32,	// (0x00042fc7) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00051946) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00051946) popup_snote_single_graphic_window_g

0x0c3e,	// (0x00042fd3) popup_snote_single_graphic_window_t1_ParamLimits

0x0c3e,	// (0x00042fd3) popup_snote_single_graphic_window_t1

0x0c51,	// (0x00042fe6) popup_snote_single_graphic_window_t2_ParamLimits

0x0c51,	// (0x00042fe6) popup_snote_single_graphic_window_t2

0x0c64,	// (0x00042ff9) popup_snote_single_graphic_window_t3_ParamLimits

0x0c64,	// (0x00042ff9) popup_snote_single_graphic_window_t3

0x0c9d,	// (0x00043032) popup_snote_single_graphic_window_t4_ParamLimits

0x0c9d,	// (0x00043032) popup_snote_single_graphic_window_t4

0x0cd1,	// (0x00043066) popup_snote_single_graphic_window_t5_ParamLimits

0x0cd1,	// (0x00043066) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005194b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005194b) popup_snote_single_graphic_window_t

0xae16,	// (0x0004d1ab) grid_graphic_popup_pane_ParamLimits

0xae16,	// (0x0004d1ab) grid_graphic_popup_pane

0xae44,	// (0x0004d1d9) listscroll_popup_graphic_pane_g1_ParamLimits

0xae44,	// (0x0004d1d9) listscroll_popup_graphic_pane_g1

0xae58,	// (0x0004d1ed) listscroll_popup_graphic_pane_g2_ParamLimits

0xae58,	// (0x0004d1ed) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00051d4a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00051d4a) listscroll_popup_graphic_pane_g

0xae6c,	// (0x0004d201) scroll_pane_cp5

0xadab,	// (0x0004d140) cell_graphic_popup_pane_ParamLimits

0xadab,	// (0x0004d140) cell_graphic_popup_pane

0xad8c,	// (0x0004d121) cell_graphic_popup_pane_g1

0xad94,	// (0x0004d129) cell_graphic_popup_pane_g2

0x0b24,	// (0x00042eb9) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00051d43) cell_graphic_popup_pane_g

0xad9d,	// (0x0004d132) cell_graphic_popup_pane_t2

0x0b2d,	// (0x00042ec2) grid_highlight_pane_cp3

0x0d12,	// (0x000430a7) list_gen_pane_ParamLimits

0x0d12,	// (0x000430a7) list_gen_pane

0x0d3a,	// (0x000430cf) scroll_pane

0xace4,	// (0x0004d079) bg_list_pane_g1_ParamLimits

0xace4,	// (0x0004d079) bg_list_pane_g1

0xad01,	// (0x0004d096) bg_list_pane_g2_ParamLimits

0xad01,	// (0x0004d096) bg_list_pane_g2

0xad16,	// (0x0004d0ab) bg_list_pane_g3_ParamLimits

0xad16,	// (0x0004d0ab) bg_list_pane_g3

0xad2a,	// (0x0004d0bf) bg_list_pane_g4_ParamLimits

0xad2a,	// (0x0004d0bf) bg_list_pane_g4

0xad3e,	// (0x0004d0d3) bg_list_pane_g5_ParamLimits

0xad3e,	// (0x0004d0d3) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00051d38) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00051d38) bg_list_pane_g

0x7e81,	// (0x0004a216) list_double2_graphic_large_graphic_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double2_graphic_large_graphic_pane

0x7e81,	// (0x0004a216) list_double2_graphic_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double2_graphic_pane

0x7e81,	// (0x0004a216) list_double2_large_graphic_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double2_large_graphic_pane

0x7e81,	// (0x0004a216) list_double2_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double2_pane

0x7e81,	// (0x0004a216) list_double_graphic_heading_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_graphic_heading_pane

0x7e81,	// (0x0004a216) list_double_graphic_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_graphic_pane

0x7e81,	// (0x0004a216) list_double_heading_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_heading_pane

0x7e81,	// (0x0004a216) list_double_large_graphic_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_large_graphic_pane

0x7e81,	// (0x0004a216) list_double_number_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_number_pane

0x7e81,	// (0x0004a216) list_double_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_pane

0x7e81,	// (0x0004a216) list_double_time_pane_ParamLimits

0x7e81,	// (0x0004a216) list_double_time_pane

0x7e81,	// (0x0004a216) list_setting_number_pane_ParamLimits

0x7e81,	// (0x0004a216) list_setting_number_pane

0x7e81,	// (0x0004a216) list_setting_pane_ParamLimits

0x7e81,	// (0x0004a216) list_setting_pane

0xacb4,	// (0x0004d049) list_single_2graphic_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_2graphic_pane

0xacb4,	// (0x0004d049) list_single_graphic_heading_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_graphic_heading_pane

0xacb4,	// (0x0004d049) list_single_graphic_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_graphic_pane

0xacb4,	// (0x0004d049) list_single_heading_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_heading_pane

0x7ea9,	// (0x0004a23e) list_single_large_graphic_pane_ParamLimits

0x7ea9,	// (0x0004a23e) list_single_large_graphic_pane

0xacb4,	// (0x0004d049) list_single_number_heading_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_number_heading_pane

0xacb4,	// (0x0004d049) list_single_number_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_number_pane

0xacb4,	// (0x0004d049) list_single_pane_ParamLimits

0xacb4,	// (0x0004d049) list_single_pane

0x072d,	// (0x00042ac2) list_highlight_pane_cp1

0x2698,	// (0x00044a2d) list_single_pane_g1_ParamLimits

0x2698,	// (0x00044a2d) list_single_pane_g1

0x6ac5,	// (0x00048e5a) list_single_pane_g2_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00051967) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00051967) list_single_pane_g

0x5d89,	// (0x0004811e) list_single_pane_t1_ParamLimits

0x5d89,	// (0x0004811e) list_single_pane_t1

0x2698,	// (0x00044a2d) list_single_number_pane_g1_ParamLimits

0x2698,	// (0x00044a2d) list_single_number_pane_g1

0x6ac5,	// (0x00048e5a) list_single_number_pane_g2_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00051967) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00051967) list_single_number_pane_g

0x5d2b,	// (0x000480c0) list_single_number_pane_t1_ParamLimits

0x5d2b,	// (0x000480c0) list_single_number_pane_t1

0x5d41,	// (0x000480d6) list_single_number_pane_t2_ParamLimits

0x5d41,	// (0x000480d6) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00051cf9) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00051cf9) list_single_number_pane_t

0x5424,	// (0x000477b9) list_single_graphic_pane_g1_ParamLimits

0x5424,	// (0x000477b9) list_single_graphic_pane_g1

0x2698,	// (0x00044a2d) list_single_graphic_pane_g2_ParamLimits

0x2698,	// (0x00044a2d) list_single_graphic_pane_g2

0x6ac5,	// (0x00048e5a) list_single_graphic_pane_g3_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00051956) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00051956) list_single_graphic_pane_g

0x5430,	// (0x000477c5) list_single_graphic_pane_t1_ParamLimits

0x5430,	// (0x000477c5) list_single_graphic_pane_t1

0x5446,	// (0x000477db) list_single_heading_pane_g1_ParamLimits

0x5446,	// (0x000477db) list_single_heading_pane_g1

0x6ac5,	// (0x00048e5a) list_single_heading_pane_g2_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005195d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005195d) list_single_heading_pane_g

0x5459,	// (0x000477ee) list_single_heading_pane_t1_ParamLimits

0x5459,	// (0x000477ee) list_single_heading_pane_t1

0x6ad1,	// (0x00048e66) list_single_heading_pane_t2_ParamLimits

0x6ad1,	// (0x00048e66) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00051962) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00051962) list_single_heading_pane_t

0x2698,	// (0x00044a2d) list_single_number_heading_pane_g1_ParamLimits

0x2698,	// (0x00044a2d) list_single_number_heading_pane_g1

0x6ac5,	// (0x00048e5a) list_single_number_heading_pane_g2_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00051967) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00051967) list_single_number_heading_pane_g

0x546f,	// (0x00047804) list_single_number_heading_pane_t1_ParamLimits

0x546f,	// (0x00047804) list_single_number_heading_pane_t1

0x5485,	// (0x0004781a) list_single_number_heading_pane_t2_ParamLimits

0x5485,	// (0x0004781a) list_single_number_heading_pane_t2

0x5497,	// (0x0004782c) list_single_number_heading_pane_t3_ParamLimits

0x5497,	// (0x0004782c) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005196c) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005196c) list_single_number_heading_pane_t

0x54a9,	// (0x0004783e) list_single_graphic_heading_pane_g1_ParamLimits

0x54a9,	// (0x0004783e) list_single_graphic_heading_pane_g1

0x6ae3,	// (0x00048e78) list_single_graphic_heading_pane_g4_ParamLimits

0x6ae3,	// (0x00048e78) list_single_graphic_heading_pane_g4

0x6ac5,	// (0x00048e5a) list_single_graphic_heading_pane_g5_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00051973) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00051973) list_single_graphic_heading_pane_g

0x546f,	// (0x00047804) list_single_graphic_heading_pane_t1_ParamLimits

0x546f,	// (0x00047804) list_single_graphic_heading_pane_t1

0x54c1,	// (0x00047856) list_single_graphic_heading_pane_t2_ParamLimits

0x54c1,	// (0x00047856) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005197a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005197a) list_single_graphic_heading_pane_t

0x6af4,	// (0x00048e89) list_single_large_graphic_pane_g1_ParamLimits

0x6af4,	// (0x00048e89) list_single_large_graphic_pane_g1

0x6b00,	// (0x00048e95) list_single_large_graphic_pane_g2_ParamLimits

0x6b00,	// (0x00048e95) list_single_large_graphic_pane_g2

0x6b0c,	// (0x00048ea1) list_single_large_graphic_pane_g3_ParamLimits

0x6b0c,	// (0x00048ea1) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005197f) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005197f) list_single_large_graphic_pane_g

0x9cb6,	// (0x0004c04b) wait_border_pane_g2_copy1

0x6b18,	// (0x00048ead) list_single_large_graphic_pane_g4_cp2

0x54d9,	// (0x0004786e) list_single_large_graphic_pane_t1_ParamLimits

0x54d9,	// (0x0004786e) list_single_large_graphic_pane_t1

0x54ef,	// (0x00047884) list_double_pane_g1_ParamLimits

0x54ef,	// (0x00047884) list_double_pane_g1

0x54fb,	// (0x00047890) list_double_pane_g2_ParamLimits

0x54fb,	// (0x00047890) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00051986) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00051986) list_double_pane_g

0x5507,	// (0x0004789c) list_double_pane_t1_ParamLimits

0x5507,	// (0x0004789c) list_double_pane_t1

0x551d,	// (0x000478b2) list_double_pane_t2_ParamLimits

0x551d,	// (0x000478b2) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005198b) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005198b) list_double_pane_t

0x552f,	// (0x000478c4) list_double2_pane_g1_ParamLimits

0x552f,	// (0x000478c4) list_double2_pane_g1

0x5540,	// (0x000478d5) list_double2_pane_g2_ParamLimits

0x5540,	// (0x000478d5) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00051990) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00051990) list_double2_pane_g

0x554c,	// (0x000478e1) list_double2_pane_t1_ParamLimits

0x554c,	// (0x000478e1) list_double2_pane_t1

0x5562,	// (0x000478f7) list_double2_pane_t2_ParamLimits

0x5562,	// (0x000478f7) list_double2_pane_t2

0x0001,

0xf600,	// (0x00051995) list_double2_pane_t_ParamLimits

0xf600,	// (0x00051995) list_double2_pane_t

0x54ef,	// (0x00047884) list_double_number_pane_g1_ParamLimits

0x54ef,	// (0x00047884) list_double_number_pane_g1

0x54fb,	// (0x00047890) list_double_number_pane_g2_ParamLimits

0x54fb,	// (0x00047890) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00051986) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00051986) list_double_number_pane_g

0x5574,	// (0x00047909) list_double_number_pane_t1_ParamLimits

0x5574,	// (0x00047909) list_double_number_pane_t1

0x5586,	// (0x0004791b) list_double_number_pane_t2_ParamLimits

0x5586,	// (0x0004791b) list_double_number_pane_t2

0x559c,	// (0x00047931) list_double_number_pane_t3_ParamLimits

0x559c,	// (0x00047931) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005199a) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005199a) list_double_number_pane_t

0x55ae,	// (0x00047943) list_double_graphic_pane_g1_ParamLimits

0x55ae,	// (0x00047943) list_double_graphic_pane_g1

0x55ba,	// (0x0004794f) list_double_graphic_pane_g2_ParamLimits

0x55ba,	// (0x0004794f) list_double_graphic_pane_g2

0x55c9,	// (0x0004795e) list_double_graphic_pane_g3_ParamLimits

0x55c9,	// (0x0004795e) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000519a1) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000519a1) list_double_graphic_pane_g

0x55e1,	// (0x00047976) list_double_graphic_pane_t1_ParamLimits

0x55e1,	// (0x00047976) list_double_graphic_pane_t1

0x55f7,	// (0x0004798c) list_double_graphic_pane_t2_ParamLimits

0x55f7,	// (0x0004798c) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000519aa) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000519aa) list_double_graphic_pane_t

0x5609,	// (0x0004799e) list_double2_graphic_pane_g1_ParamLimits

0x5609,	// (0x0004799e) list_double2_graphic_pane_g1

0x5615,	// (0x000479aa) list_double2_graphic_pane_g2_ParamLimits

0x5615,	// (0x000479aa) list_double2_graphic_pane_g2

0x6b20,	// (0x00048eb5) list_double2_graphic_pane_g3_ParamLimits

0x6b20,	// (0x00048eb5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000519af) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000519af) list_double2_graphic_pane_g

0x5621,	// (0x000479b6) list_double2_graphic_pane_t1_ParamLimits

0x5621,	// (0x000479b6) list_double2_graphic_pane_t1

0x5637,	// (0x000479cc) list_double2_graphic_pane_t2_ParamLimits

0x5637,	// (0x000479cc) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000519b6) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000519b6) list_double2_graphic_pane_t

0x5649,	// (0x000479de) list_double_large_graphic_pane_g1_ParamLimits

0x5649,	// (0x000479de) list_double_large_graphic_pane_g1

0x5668,	// (0x000479fd) list_double_large_graphic_pane_g2_ParamLimits

0x5668,	// (0x000479fd) list_double_large_graphic_pane_g2

0x54fb,	// (0x00047890) list_double_large_graphic_pane_g3_ParamLimits

0x54fb,	// (0x00047890) list_double_large_graphic_pane_g3

0x567e,	// (0x00047a13) list_double_large_graphic_pane_g4_ParamLimits

0x567e,	// (0x00047a13) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000519bb) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000519bb) list_double_large_graphic_pane_g

0x5691,	// (0x00047a26) list_double_large_graphic_pane_t1_ParamLimits

0x5691,	// (0x00047a26) list_double_large_graphic_pane_t1

0x56aa,	// (0x00047a3f) list_double_large_graphic_pane_t2_ParamLimits

0x56aa,	// (0x00047a3f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000519c6) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000519c6) list_double_large_graphic_pane_t

0x56bc,	// (0x00047a51) list_double2_large_graphic_pane_g1_ParamLimits

0x56bc,	// (0x00047a51) list_double2_large_graphic_pane_g1

0x6b41,	// (0x00048ed6) list_double2_large_graphic_pane_g2_ParamLimits

0x6b41,	// (0x00048ed6) list_double2_large_graphic_pane_g2

0x6b20,	// (0x00048eb5) list_double2_large_graphic_pane_g3_ParamLimits

0x6b20,	// (0x00048eb5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000519cb) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000519cb) list_double2_large_graphic_pane_g

0x56c8,	// (0x00047a5d) list_double2_large_graphic_pane_t1_ParamLimits

0x56c8,	// (0x00047a5d) list_double2_large_graphic_pane_t1

0x56de,	// (0x00047a73) list_double2_large_graphic_pane_t2_ParamLimits

0x56de,	// (0x00047a73) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000519d2) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000519d2) list_double2_large_graphic_pane_t

0x56f0,	// (0x00047a85) list_double_heading_pane_g1_ParamLimits

0x56f0,	// (0x00047a85) list_double_heading_pane_g1

0x5701,	// (0x00047a96) list_double_heading_pane_g2_ParamLimits

0x5701,	// (0x00047a96) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000519d7) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000519d7) list_double_heading_pane_g

0x570d,	// (0x00047aa2) list_double_heading_pane_t1_ParamLimits

0x570d,	// (0x00047aa2) list_double_heading_pane_t1

0x5723,	// (0x00047ab8) list_double_heading_pane_t2_ParamLimits

0x5723,	// (0x00047ab8) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000519dc) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000519dc) list_double_heading_pane_t

0x5609,	// (0x0004799e) list_double_graphic_heading_pane_g1_ParamLimits

0x5609,	// (0x0004799e) list_double_graphic_heading_pane_g1

0x56f0,	// (0x00047a85) list_double_graphic_heading_pane_g2_ParamLimits

0x56f0,	// (0x00047a85) list_double_graphic_heading_pane_g2

0x5701,	// (0x00047a96) list_double_graphic_heading_pane_g3_ParamLimits

0x5701,	// (0x00047a96) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000519e1) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000519e1) list_double_graphic_heading_pane_g

0x5735,	// (0x00047aca) list_double_graphic_heading_pane_t1_ParamLimits

0x5735,	// (0x00047aca) list_double_graphic_heading_pane_t1

0x574b,	// (0x00047ae0) list_double_graphic_heading_pane_t2_ParamLimits

0x574b,	// (0x00047ae0) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000519e8) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000519e8) list_double_graphic_heading_pane_t

0x575d,	// (0x00047af2) list_double_time_pane_g1_ParamLimits

0x575d,	// (0x00047af2) list_double_time_pane_g1

0x576e,	// (0x00047b03) list_double_time_pane_g2_ParamLimits

0x576e,	// (0x00047b03) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000519ed) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000519ed) list_double_time_pane_g

0x577a,	// (0x00047b0f) list_double_time_pane_t1_ParamLimits

0x577a,	// (0x00047b0f) list_double_time_pane_t1

0x5790,	// (0x00047b25) list_double_time_pane_t2_ParamLimits

0x5790,	// (0x00047b25) list_double_time_pane_t2

0x57a2,	// (0x00047b37) list_double_time_pane_t3_ParamLimits

0x57a2,	// (0x00047b37) list_double_time_pane_t3

0x57b4,	// (0x00047b49) list_double_time_pane_t4_ParamLimits

0x57b4,	// (0x00047b49) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000519f2) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000519f2) list_double_time_pane_t

0x57c6,	// (0x00047b5b) list_setting_pane_g1_ParamLimits

0x57c6,	// (0x00047b5b) list_setting_pane_g1

0x57d2,	// (0x00047b67) list_setting_pane_g2_ParamLimits

0x57d2,	// (0x00047b67) list_setting_pane_g2

0x0001,

0xf666,	// (0x000519fb) list_setting_pane_g_ParamLimits

0xf666,	// (0x000519fb) list_setting_pane_g

0x57de,	// (0x00047b73) list_setting_pane_t1_ParamLimits

0x57de,	// (0x00047b73) list_setting_pane_t1

0x57f8,	// (0x00047b8d) list_setting_pane_t2_ParamLimits

0x57f8,	// (0x00047b8d) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00051a00) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00051a00) list_setting_pane_t

0x5837,	// (0x00047bcc) set_value_pane_cp_ParamLimits

0x5837,	// (0x00047bcc) set_value_pane_cp

0x5845,	// (0x00047bda) list_setting_number_pane_g1_ParamLimits

0x5845,	// (0x00047bda) list_setting_number_pane_g1

0x5851,	// (0x00047be6) list_setting_number_pane_g2_ParamLimits

0x5851,	// (0x00047be6) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00051a07) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00051a07) list_setting_number_pane_g

0x585d,	// (0x00047bf2) list_setting_number_pane_t1_ParamLimits

0x585d,	// (0x00047bf2) list_setting_number_pane_t1

0x5876,	// (0x00047c0b) list_setting_number_pane_t2_ParamLimits

0x5876,	// (0x00047c0b) list_setting_number_pane_t2

0x5890,	// (0x00047c25) list_setting_number_pane_t3_ParamLimits

0x5890,	// (0x00047c25) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00051a0c) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00051a0c) list_setting_number_pane_t

0x5837,	// (0x00047bcc) set_value_pane_ParamLimits

0x5837,	// (0x00047bcc) set_value_pane

0x0d6e,	// (0x00043103) bg_set_opt_pane_ParamLimits

0x0d6e,	// (0x00043103) bg_set_opt_pane

0x58d3,	// (0x00047c68) set_value_pane_t1

0x0d8f,	// (0x00043124) slider_set_pane_cp3

0x0d98,	// (0x0004312d) volume_small_pane_cp

0x0da1,	// (0x00043136) list_form_gen_pane

0x0daa,	// (0x0004313f) scroll_pane_cp8

0x58e9,	// (0x00047c7e) form_field_data_pane_ParamLimits

0x58e9,	// (0x00047c7e) form_field_data_pane

0x5911,	// (0x00047ca6) form_field_data_wide_pane_ParamLimits

0x5911,	// (0x00047ca6) form_field_data_wide_pane

0x5938,	// (0x00047ccd) form_field_popup_pane_ParamLimits

0x5938,	// (0x00047ccd) form_field_popup_pane

0x595a,	// (0x00047cef) form_field_popup_wide_pane_ParamLimits

0x595a,	// (0x00047cef) form_field_popup_wide_pane

0x597b,	// (0x00047d10) form_field_slider_pane_ParamLimits

0x597b,	// (0x00047d10) form_field_slider_pane

0x598e,	// (0x00047d23) form_field_slider_wide_pane_ParamLimits

0x598e,	// (0x00047d23) form_field_slider_wide_pane

0x0dbb,	// (0x00043150) data_form_pane

0x59ab,	// (0x00047d40) form_field_data_pane_t1

0x0dc7,	// (0x0004315c) input_focus_pane

0x59c5,	// (0x00047d5a) data_form_wide_pane

0x59e2,	// (0x00047d77) form_field_data_wide_pane_t1

0x0b42,	// (0x00042ed7) input_focus_pane_cp6

0x5a04,	// (0x00047d99) form_field_popup_pane_t1

0x0dc7,	// (0x0004315c) input_focus_pane_cp7

0x0df5,	// (0x0004318a) list_form_pane

0x5a26,	// (0x00047dbb) form_field_popup_wide_pane_t1

0x0dc7,	// (0x0004315c) input_focus_pane_cp8

0x0e01,	// (0x00043196) list_form_wide_pane

0x5a43,	// (0x00047dd8) form_field_slider_pane_t1_ParamLimits

0x5a43,	// (0x00047dd8) form_field_slider_pane_t1

0x5a5b,	// (0x00047df0) form_field_slider_pane_t2_ParamLimits

0x5a5b,	// (0x00047df0) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00051a1c) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00051a1c) form_field_slider_pane_t

0x077b,	// (0x00042b10) input_focus_pane_cp9_ParamLimits

0x077b,	// (0x00042b10) input_focus_pane_cp9

0x5a70,	// (0x00047e05) slider_cont_pane_ParamLimits

0x5a70,	// (0x00047e05) slider_cont_pane

0x0e0d,	// (0x000431a2) form_field_slider_wide_pane_t1_ParamLimits

0x0e0d,	// (0x000431a2) form_field_slider_wide_pane_t1

0x5a84,	// (0x00047e19) form_field_slider_wide_pane_t2_ParamLimits

0x5a84,	// (0x00047e19) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00051a21) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00051a21) form_field_slider_wide_pane_t

0x077b,	// (0x00042b10) input_focus_pane_cp10_ParamLimits

0x077b,	// (0x00042b10) input_focus_pane_cp10

0x5a96,	// (0x00047e2b) slider_cont_pane_cp1_ParamLimits

0x5a96,	// (0x00047e2b) slider_cont_pane_cp1

0x5aaa,	// (0x00047e3f) slider_form_pane_cp

0x0e1f,	// (0x000431b4) input_focus_pane_g1

0x0e27,	// (0x000431bc) input_focus_pane_g2

0x0e2f,	// (0x000431c4) input_focus_pane_g3

0x0e37,	// (0x000431cc) input_focus_pane_g4

0x0e3f,	// (0x000431d4) input_focus_pane_g5

0x0e47,	// (0x000431dc) input_focus_pane_g6

0x0e4f,	// (0x000431e4) input_focus_pane_g7

0x0e57,	// (0x000431ec) input_focus_pane_g8

0x0e5f,	// (0x000431f4) input_focus_pane_g9

0x0723,	// (0x00042ab8) input_focus_pane_g10

0x0009,

0xf691,	// (0x00051a26) input_focus_pane_g

0x9cbf,	// (0x0004c054) wait_border_pane_g3_copy1

0x5ab2,	// (0x00047e47) data_form_pane_t1

0x0723,	// (0x00042ab8) wait_anim_pane_g1_copy1

0x5d53,	// (0x000480e8) data_form_wide_pane_t1

0x5ad1,	// (0x00047e66) list_form_graphic_pane_cp_ParamLimits

0x5ad1,	// (0x00047e66) list_form_graphic_pane_cp

0xac0b,	// (0x0004cfa0) slider_form_pane_g1

0xac14,	// (0x0004cfa9) slider_form_pane_g2

0x0006,

0xf994,	// (0x00051d29) slider_form_pane_g

0x5ad1,	// (0x00047e66) list_form_graphic_pane_ParamLimits

0x5ad1,	// (0x00047e66) list_form_graphic_pane

0x5ae3,	// (0x00047e78) list_form_graphic_pane_g1

0x5aeb,	// (0x00047e80) list_form_graphic_pane_t1_ParamLimits

0x5aeb,	// (0x00047e80) list_form_graphic_pane_t1

0x0789,	// (0x00042b1e) list_highlight_pane_cp5_ParamLimits

0x0789,	// (0x00042b1e) list_highlight_pane_cp5

0x5b00,	// (0x00047e95) find_pane_g1

0x0e67,	// (0x000431fc) input_find_pane

0x5b09,	// (0x00047e9e) input_find_pane_g1_ParamLimits

0x5b09,	// (0x00047e9e) input_find_pane_g1

0x5b15,	// (0x00047eaa) input_find_pane_t1_ParamLimits

0x5b15,	// (0x00047eaa) input_find_pane_t1

0x5b2a,	// (0x00047ebf) input_find_pane_t2_ParamLimits

0x5b2a,	// (0x00047ebf) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00051a3b) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00051a3b) input_find_pane_t

0x0e70,	// (0x00043205) input_focus_pane_cp5_ParamLimits

0x0e70,	// (0x00043205) input_focus_pane_cp5

0x0e7e,	// (0x00043213) bg_popup_window_pane_cp2_ParamLimits

0x0e7e,	// (0x00043213) bg_popup_window_pane_cp2

0x0e8b,	// (0x00043220) listscroll_menu_pane_ParamLimits

0x0e8b,	// (0x00043220) listscroll_menu_pane

0x6b5e,	// (0x00048ef3) popup_submenu_window_ParamLimits

0x6b5e,	// (0x00048ef3) popup_submenu_window

0x0e97,	// (0x0004322c) find_popup_pane_g1

0x0e9f,	// (0x00043234) input_popup_find_pane_cp

0x0e70,	// (0x00043205) input_focus_pane_cp4_ParamLimits

0x0e70,	// (0x00043205) input_focus_pane_cp4

0x0ea9,	// (0x0004323e) input_popup_find_pane_t1_ParamLimits

0x0ea9,	// (0x0004323e) input_popup_find_pane_t1

0x072d,	// (0x00042ac2) bg_popup_sub_pane_cp

0x0ed7,	// (0x0004326c) listscroll_popup_sub_pane

0x0edf,	// (0x00043274) list_submenu_pane_ParamLimits

0x0edf,	// (0x00043274) list_submenu_pane

0x0ef0,	// (0x00043285) scroll_pane_cp4

0x0ef8,	// (0x0004328d) list_single_popup_submenu_pane_ParamLimits

0x0ef8,	// (0x0004328d) list_single_popup_submenu_pane

0x0f0d,	// (0x000432a2) list_single_popup_submenu_pane_g1

0x0f15,	// (0x000432aa) list_single_popup_submenu_pane_t1_ParamLimits

0x0f15,	// (0x000432aa) list_single_popup_submenu_pane_t1

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp1_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp1

0x6b9c,	// (0x00048f31) tabs_2_active_pane_g1

0x6ba4,	// (0x00048f39) tabs_2_active_pane_t1

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp1_ParamLimits

0x0789,	// (0x00042b1e) bg_passive_tab_pane_cp1

0x6b9c,	// (0x00048f31) tabs_2_passive_pane_g1

0x6ba4,	// (0x00048f39) tabs_2_passive_pane_t1

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp4

0x6bb6,	// (0x00048f4b) tabs_2_long_active_pane_t1

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp4

0x7b41,	// (0x00049ed6) list_single_midp_graphic_pane_g4_ParamLimits

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp5

0x6bd5,	// (0x00048f6a) tabs_3_long_active_pane_t1

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp5

0x7b41,	// (0x00049ed6) list_single_midp_graphic_pane_g4

0x0789,	// (0x00042b1e) bg_popup_window_pane_cp13_ParamLimits

0x0789,	// (0x00042b1e) bg_popup_window_pane_cp13

0x0f33,	// (0x000432c8) listscroll_popup_fast_pane_ParamLimits

0x0f33,	// (0x000432c8) listscroll_popup_fast_pane

0x0f42,	// (0x000432d7) grid_popup_fast_pane_ParamLimits

0x0f42,	// (0x000432d7) grid_popup_fast_pane

0x0f54,	// (0x000432e9) scroll_pane_cp9_ParamLimits

0x0f54,	// (0x000432e9) scroll_pane_cp9

0xc53b,	// (0x0004e8d0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc53b,	// (0x0004e8d0) list_single_graphic_hl_pane_t1_cp2

0x0f78,	// (0x0004330d) input_focus_pane_cp20_ParamLimits

0x0f78,	// (0x0004330d) input_focus_pane_cp20

0x0f86,	// (0x0004331b) query_popup_data_pane_t1_ParamLimits

0x0f86,	// (0x0004331b) query_popup_data_pane_t1

0x0f99,	// (0x0004332e) query_popup_data_pane_t2_ParamLimits

0x0f99,	// (0x0004332e) query_popup_data_pane_t2

0x0fdf,	// (0x00043374) query_popup_data_pane_t3_ParamLimits

0x0fdf,	// (0x00043374) query_popup_data_pane_t3

0x1020,	// (0x000433b5) query_popup_data_pane_t4_ParamLimits

0x1020,	// (0x000433b5) query_popup_data_pane_t4

0x105c,	// (0x000433f1) query_popup_data_pane_t5_ParamLimits

0x105c,	// (0x000433f1) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00051a40) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00051a40) query_popup_data_pane_t

0x0e1f,	// (0x000431b4) bg_set_opt_pane_g1

0x0e27,	// (0x000431bc) bg_set_opt_pane_g2

0x0e2f,	// (0x000431c4) bg_set_opt_pane_g3

0x0e37,	// (0x000431cc) bg_set_opt_pane_g4

0x0e3f,	// (0x000431d4) bg_set_opt_pane_g5

0x0e47,	// (0x000431dc) bg_set_opt_pane_g6

0x0e4f,	// (0x000431e4) bg_set_opt_pane_g7

0x0e57,	// (0x000431ec) bg_set_opt_pane_g8

0x0e5f,	// (0x000431f4) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00051a4b) bg_set_opt_pane_g

0x7066,	// (0x000493fb) control_top_pane_stacon_ParamLimits

0x7066,	// (0x000493fb) control_top_pane_stacon

0x70b9,	// (0x0004944e) signal_pane_stacon_ParamLimits

0x70b9,	// (0x0004944e) signal_pane_stacon

0x4408,	// (0x0004679d) stacon_top_pane_g1_ParamLimits

0x4408,	// (0x0004679d) stacon_top_pane_g1

0x70de,	// (0x00049473) title_pane_stacon_ParamLimits

0x70de,	// (0x00049473) title_pane_stacon

0x7108,	// (0x0004949d) uni_indicator_pane_stacon_ParamLimits

0x7108,	// (0x0004949d) uni_indicator_pane_stacon

0x711d,	// (0x000494b2) battery_pane_stacon_ParamLimits

0x711d,	// (0x000494b2) battery_pane_stacon

0x7161,	// (0x000494f6) control_bottom_pane_stacon_ParamLimits

0x7161,	// (0x000494f6) control_bottom_pane_stacon

0x7184,	// (0x00049519) navi_pane_stacon_ParamLimits

0x7184,	// (0x00049519) navi_pane_stacon

0x44f3,	// (0x00046888) stacon_bottom_pane_g1_ParamLimits

0x44f3,	// (0x00046888) stacon_bottom_pane_g1

0x6be7,	// (0x00048f7c) aid_levels_signal_lsc_ParamLimits

0x6be7,	// (0x00048f7c) aid_levels_signal_lsc

0x6bfe,	// (0x00048f93) signal_pane_stacon_g1_ParamLimits

0x6bfe,	// (0x00048f93) signal_pane_stacon_g1

0x6c12,	// (0x00048fa7) signal_pane_stacon_g2_ParamLimits

0x6c12,	// (0x00048fa7) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00051a5e) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00051a5e) signal_pane_stacon_g

0x6c47,	// (0x00048fdc) title_pane_stacon_t1_ParamLimits

0x6c47,	// (0x00048fdc) title_pane_stacon_t1

0x10b4,	// (0x00043449) uni_indicator_pane_stacon_g1

0x10be,	// (0x00043453) uni_indicator_pane_stacon_g2

0x10a0,	// (0x00043435) uni_indicator_pane_stacon_g3

0x10aa,	// (0x0004343f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00051a6a) uni_indicator_pane_stacon_g

0x6c6c,	// (0x00049001) control_top_pane_stacon_g1

0x6c74,	// (0x00049009) control_top_pane_stacon_t1_ParamLimits

0x6c74,	// (0x00049009) control_top_pane_stacon_t1

0x6cab,	// (0x00049040) aid_levels_battery_lsc_ParamLimits

0x6cab,	// (0x00049040) aid_levels_battery_lsc

0x6cc3,	// (0x00049058) battery_pane_stacon_g1_ParamLimits

0x6cc3,	// (0x00049058) battery_pane_stacon_g1

0x6cd6,	// (0x0004906b) battery_pane_stacon_g2_ParamLimits

0x6cd6,	// (0x0004906b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00051a73) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00051a73) battery_pane_stacon_g

0x6d14,	// (0x000490a9) navi_icon_pane_stacon

0x6d28,	// (0x000490bd) navi_navi_pane_stacon

0x6d14,	// (0x000490a9) navi_text_pane_stacon

0x6c6c,	// (0x00049001) control_bottom_pane_stacon_g1

0x6d3e,	// (0x000490d3) control_bottom_pane_stacon_t1_ParamLimits

0x6d3e,	// (0x000490d3) control_bottom_pane_stacon_t1

0x6d75,	// (0x0004910a) grid_app_pane_ParamLimits

0x6d75,	// (0x0004910a) grid_app_pane

0x6d97,	// (0x0004912c) scroll_pane_cp15_ParamLimits

0x6d97,	// (0x0004912c) scroll_pane_cp15

0x6daa,	// (0x0004913f) cell_app_pane_ParamLimits

0x6daa,	// (0x0004913f) cell_app_pane

0x6dd6,	// (0x0004916b) cell_app_pane_g1_ParamLimits

0x6dd6,	// (0x0004916b) cell_app_pane_g1

0x10e2,	// (0x00043477) cell_app_pane_g2_ParamLimits

0x10e2,	// (0x00043477) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00051a78) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00051a78) cell_app_pane_g

0x6dfa,	// (0x0004918f) cell_app_pane_t1_ParamLimits

0x6dfa,	// (0x0004918f) cell_app_pane_t1

0x10ee,	// (0x00043483) grid_highlight_pane_ParamLimits

0x10ee,	// (0x00043483) grid_highlight_pane

0x0e1f,	// (0x000431b4) cell_highlight_pane_g1

0x0e27,	// (0x000431bc) cell_highlight_pane_g2

0x0e2f,	// (0x000431c4) cell_highlight_pane_g3

0x0e37,	// (0x000431cc) cell_highlight_pane_g4

0x0e3f,	// (0x000431d4) cell_highlight_pane_g5

0x0e47,	// (0x000431dc) cell_highlight_pane_g6

0x0e4f,	// (0x000431e4) cell_highlight_pane_g7

0x0e57,	// (0x000431ec) cell_highlight_pane_g8

0x0e5f,	// (0x000431f4) cell_highlight_pane_g9

0x0723,	// (0x00042ab8) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00051a26) cell_highlight_pane_g

0x10ff,	// (0x00043494) bg_scroll_pane

0x6e24,	// (0x000491b9) scroll_handle_pane

0x1146,	// (0x000434db) scroll_bg_pane_g1

0x115b,	// (0x000434f0) scroll_bg_pane_g2

0x1173,	// (0x00043508) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00051a7d) scroll_bg_pane_g

0x1188,	// (0x0004351d) scroll_handle_focus_pane_ParamLimits

0x1188,	// (0x0004351d) scroll_handle_focus_pane

0x1146,	// (0x000434db) scroll_handle_pane_g1

0x1195,	// (0x0004352a) scroll_handle_pane_g2

0x1173,	// (0x00043508) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00051a84) scroll_handle_pane_g

0x0e70,	// (0x00043205) bg_popup_sub_pane_cp21_ParamLimits

0x0e70,	// (0x00043205) bg_popup_sub_pane_cp21

0x11a9,	// (0x0004353e) popup_fep_japan_predictive_window_t1_ParamLimits

0x11a9,	// (0x0004353e) popup_fep_japan_predictive_window_t1

0x11c0,	// (0x00043555) popup_fep_japan_predictive_window_t2_ParamLimits

0x11c0,	// (0x00043555) popup_fep_japan_predictive_window_t2

0x11f3,	// (0x00043588) popup_fep_japan_predictive_window_t3_ParamLimits

0x11f3,	// (0x00043588) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00051a8b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00051a8b) popup_fep_japan_predictive_window_t

0x072d,	// (0x00042ac2) bg_popup_sub_pane_cp23

0x122a,	// (0x000435bf) listscroll_japin_cand_pane

0x1232,	// (0x000435c7) popup_fep_japan_candidate_window_t1

0x1240,	// (0x000435d5) candidate_pane_ParamLimits

0x1240,	// (0x000435d5) candidate_pane

0x1252,	// (0x000435e7) scroll_pane_cp30

0x125c,	// (0x000435f1) list_single_popup_jap_candidate_pane_ParamLimits

0x125c,	// (0x000435f1) list_single_popup_jap_candidate_pane

0x072d,	// (0x00042ac2) list_highlight_pane_cp30

0x1270,	// (0x00043605) list_single_popup_jap_candidate_pane_t1

0x6e4d,	// (0x000491e2) level_1_signal

0x6e5a,	// (0x000491ef) level_2_signal

0x6e67,	// (0x000491fc) level_3_signal

0x6e74,	// (0x00049209) level_4_signal

0x6e81,	// (0x00049216) level_5_signal

0x6e8e,	// (0x00049223) level_6_signal

0x6e9b,	// (0x00049230) level_7_signal

0x6e4d,	// (0x000491e2) level_1_battery

0x6e5a,	// (0x000491ef) level_2_battery

0x6e67,	// (0x000491fc) level_3_battery

0x6e74,	// (0x00049209) level_4_battery

0x6e81,	// (0x00049216) level_5_battery

0x6e8e,	// (0x00049223) level_6_battery

0x6e9b,	// (0x00049230) level_7_battery

0x1297,	// (0x0004362c) list_menu_pane_ParamLimits

0x1297,	// (0x0004362c) list_menu_pane

0x12ad,	// (0x00043642) scroll_pane_cp25_ParamLimits

0x12ad,	// (0x00043642) scroll_pane_cp25

0x12c6,	// (0x0004365b) list_double2_graphic_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double2_graphic_pane_cp2

0x12c6,	// (0x0004365b) list_double2_large_graphic_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double2_large_graphic_pane_cp2

0x12c6,	// (0x0004365b) list_double2_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double2_pane_cp2

0x12c6,	// (0x0004365b) list_double_graphic_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double_graphic_pane_cp2

0x12c6,	// (0x0004365b) list_double_large_graphic_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double_large_graphic_pane_cp2

0x12c6,	// (0x0004365b) list_double_number_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double_number_pane_cp2

0x12c6,	// (0x0004365b) list_double_pane_cp2_ParamLimits

0x12c6,	// (0x0004365b) list_double_pane_cp2

0x6edd,	// (0x00049272) list_single_2graphic_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_2graphic_pane_cp2

0x6edd,	// (0x00049272) list_single_graphic_heading_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_graphic_heading_pane_cp2

0x6edd,	// (0x00049272) list_single_graphic_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_graphic_pane_cp2

0x6edd,	// (0x00049272) list_single_heading_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_heading_pane_cp2

0x12d6,	// (0x0004366b) list_single_large_graphic_pane_cp2_ParamLimits

0x12d6,	// (0x0004366b) list_single_large_graphic_pane_cp2

0x6edd,	// (0x00049272) list_single_number_heading_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_number_heading_pane_cp2

0x6edd,	// (0x00049272) list_single_number_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_number_pane_cp2

0x6edd,	// (0x00049272) list_single_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_pane_cp2

0x12ef,	// (0x00043684) bg_popup_sub_pane_cp22

0x6fb9,	// (0x0004934e) popup_side_volume_key_window_g1

0x6fe3,	// (0x00049378) popup_side_volume_key_window_t1

0x7001,	// (0x00049396) volume_small_pane_cp1

0x077b,	// (0x00042b10) bg_popup_sub_pane_cp24_ParamLimits

0x077b,	// (0x00042b10) bg_popup_sub_pane_cp24

0x1305,	// (0x0004369a) fep_china_uni_candidate_pane_ParamLimits

0x1305,	// (0x0004369a) fep_china_uni_candidate_pane

0x1319,	// (0x000436ae) fep_china_uni_entry_pane

0x1329,	// (0x000436be) popup_fep_china_uni_window_g1

0x1345,	// (0x000436da) fep_china_uni_entry_pane_g1

0x134f,	// (0x000436e4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00051abc) fep_china_uni_entry_pane_g

0x1359,	// (0x000436ee) fep_entry_item_pane

0x1363,	// (0x000436f8) fep_candidate_item_pane

0x136b,	// (0x00043700) fep_china_uni_candidate_pane_g1

0x1375,	// (0x0004370a) fep_china_uni_candidate_pane_g2

0x137d,	// (0x00043712) fep_china_uni_candidate_pane_g3

0x1385,	// (0x0004371a) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00051ac1) fep_china_uni_candidate_pane_g

0x0723,	// (0x00042ab8) fep_entry_item_pane_g1

0x138f,	// (0x00043724) fep_entry_item_pane_t1_ParamLimits

0x138f,	// (0x00043724) fep_entry_item_pane_t1

0x13a5,	// (0x0004373a) fep_candidate_item_pane_t1_ParamLimits

0x13a5,	// (0x0004373a) fep_candidate_item_pane_t1

0x13ba,	// (0x0004374f) fep_candidate_item_pane_t2_ParamLimits

0x13ba,	// (0x0004374f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00051aca) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00051aca) fep_candidate_item_pane_t

0x0789,	// (0x00042b1e) list_highlight_pane_cp31_ParamLimits

0x0789,	// (0x00042b1e) list_highlight_pane_cp31

0x13cc,	// (0x00043761) level_1_signal_lsc

0x13d5,	// (0x0004376a) level_2_signal_lsc

0x13de,	// (0x00043773) level_3_signal_lsc

0x13e7,	// (0x0004377c) level_4_signal_lsc

0x13f0,	// (0x00043785) level_5_signal_lsc

0x13f9,	// (0x0004378e) level_6_signal_lsc

0x1402,	// (0x00043797) level_7_signal_lsc

0x1402,	// (0x00043797) level_1_battery_lsc

0x140b,	// (0x000437a0) level_2_battery_lsc

0x1414,	// (0x000437a9) level_3_battery_lsc

0x141d,	// (0x000437b2) level_4_battery_lsc

0x1426,	// (0x000437bb) level_5_battery_lsc

0x142f,	// (0x000437c4) level_6_battery_lsc

0x13cc,	// (0x00043761) level_7_battery_lsc

0x1438,	// (0x000437cd) scroll_handle_focus_pane_g1

0x1441,	// (0x000437d6) scroll_handle_focus_pane_g2

0x144a,	// (0x000437df) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00051acf) scroll_handle_focus_pane_g

0x5b3f,	// (0x00047ed4) list_single_2graphic_pane_g1_ParamLimits

0x5b3f,	// (0x00047ed4) list_single_2graphic_pane_g1

0x6ae3,	// (0x00048e78) list_single_2graphic_pane_g2_ParamLimits

0x6ae3,	// (0x00048e78) list_single_2graphic_pane_g2

0x6ac5,	// (0x00048e5a) list_single_2graphic_pane_g3_ParamLimits

0x6ac5,	// (0x00048e5a) list_single_2graphic_pane_g3

0x7009,	// (0x0004939e) list_single_2graphic_pane_g4_ParamLimits

0x7009,	// (0x0004939e) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00051ad6) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00051ad6) list_single_2graphic_pane_g

0x5b4b,	// (0x00047ee0) list_single_2graphic_pane_t1_ParamLimits

0x5b4b,	// (0x00047ee0) list_single_2graphic_pane_t1

0x5b79,	// (0x00047f0e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b79,	// (0x00047f0e) list_double2_graphic_large_graphic_pane_g1

0x6b41,	// (0x00048ed6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6b41,	// (0x00048ed6) list_double2_graphic_large_graphic_pane_g2

0x6b20,	// (0x00048eb5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6b20,	// (0x00048eb5) list_double2_graphic_large_graphic_pane_g3

0x5b8b,	// (0x00047f20) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b8b,	// (0x00047f20) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00051adf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00051adf) list_double2_graphic_large_graphic_pane_g

0x5b97,	// (0x00047f2c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b97,	// (0x00047f2c) list_double2_graphic_large_graphic_pane_t1

0x5bad,	// (0x00047f42) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5bad,	// (0x00047f42) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00051ae8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00051ae8) list_double2_graphic_large_graphic_pane_t

0x45b3,	// (0x00046948) popup_fast_swap_window_ParamLimits

0x45b3,	// (0x00046948) popup_fast_swap_window

0x45d1,	// (0x00046966) popup_side_volume_key_window

0x45ef,	// (0x00046984) stacon_top_pane

0x45f9,	// (0x0004698e) status_pane_ParamLimits

0x45f9,	// (0x0004698e) status_pane

0x71a7,	// (0x0004953c) status_small_pane

0x072d,	// (0x00042ac2) control_pane

0x072d,	// (0x00042ac2) stacon_bottom_pane

0x0daa,	// (0x0004313f) scroll_pane_cp121

0x0da1,	// (0x00043136) set_content_pane

0x701a,	// (0x000493af) bg_active_tab_pane_g1_cp1

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp1

0x7023,	// (0x000493b8) bg_active_tab_pane_g3_cp1

0x701a,	// (0x000493af) bg_passive_tab_pane_g1_cp1

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp1

0x7023,	// (0x000493b8) bg_passive_tab_pane_g3_cp1

0x702c,	// (0x000493c1) bg_active_tab_pane_g1_cp2

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp2

0x7035,	// (0x000493ca) bg_active_tab_pane_g3_cp2

0x702c,	// (0x000493c1) bg_passive_tab_pane_g1_cp2

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp2

0x7035,	// (0x000493ca) bg_passive_tab_pane_g3_cp2

0x703e,	// (0x000493d3) bg_active_tab_pane_g1_cp3

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp3

0x7047,	// (0x000493dc) bg_active_tab_pane_g3_cp3

0x703e,	// (0x000493d3) bg_passive_tab_pane_g1_cp3

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp3

0x7047,	// (0x000493dc) bg_passive_tab_pane_g3_cp3

0x7050,	// (0x000493e5) bg_active_tab_pane_g1_cp4

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp4

0x705b,	// (0x000493f0) bg_active_tab_pane_g3_cp4

0x7050,	// (0x000493e5) bg_passive_tab_pane_g1_cp4

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp4

0x705b,	// (0x000493f0) bg_passive_tab_pane_g3_cp4

0x4518,	// (0x000468ad) bg_active_tab_pane_g1_cp5

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp5

0x450f,	// (0x000468a4) bg_active_tab_pane_g3_cp5

0x4518,	// (0x000468ad) bg_passive_tab_pane_g1_cp5

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp5

0x450f,	// (0x000468a4) bg_passive_tab_pane_g3_cp5

0x4521,	// (0x000468b6) list_set_graphic_pane_ParamLimits

0x4521,	// (0x000468b6) list_set_graphic_pane

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp4

0x4534,	// (0x000468c9) list_set_graphic_pane_g1_ParamLimits

0x4534,	// (0x000468c9) list_set_graphic_pane_g1

0x4540,	// (0x000468d5) list_set_graphic_pane_g2_ParamLimits

0x4540,	// (0x000468d5) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00051aed) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00051aed) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00051e6e) volume_small_pane_cp_g

0x4564,	// (0x000468f9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4564,	// (0x000468f9) list_double2_large_graphic_pane_g1_cp2

0x4572,	// (0x00046907) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4572,	// (0x00046907) list_double2_large_graphic_pane_g2_cp2

0x4583,	// (0x00046918) list_double2_large_graphic_pane_g3_cp2

0x458b,	// (0x00046920) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x458b,	// (0x00046920) list_double2_large_graphic_pane_t1_cp2

0x45a1,	// (0x00046936) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x45a1,	// (0x00046936) list_double2_large_graphic_pane_t2_cp2

0xa7a3,	// (0x0004cb38) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa7a3,	// (0x0004cb38) list_double_large_graphic_pane_g1_cp2

0xa7b6,	// (0x0004cb4b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7b6,	// (0x0004cb4b) list_double_large_graphic_pane_g2_cp2

0x4717,	// (0x00046aac) list_double_large_graphic_pane_g3_cp2

0xa7c7,	// (0x0004cb5c) list_double_large_graphic_pane_g4_cp

0xa7cf,	// (0x0004cb64) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7cf,	// (0x0004cb64) list_double_large_graphic_pane_t1_cp2

0xa7e6,	// (0x0004cb7b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7e6,	// (0x0004cb7b) list_double_large_graphic_pane_t2_cp2

0x4607,	// (0x0004699c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4607,	// (0x0004699c) list_double2_graphic_pane_g1_cp2

0x4615,	// (0x000469aa) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4615,	// (0x000469aa) list_double2_graphic_pane_g2_cp2

0x4626,	// (0x000469bb) list_double2_graphic_pane_g3_cp2

0x4630,	// (0x000469c5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4630,	// (0x000469c5) list_double2_graphic_pane_t1_cp2

0x4646,	// (0x000469db) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4646,	// (0x000469db) list_double2_graphic_pane_t2_cp2

0x4658,	// (0x000469ed) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4658,	// (0x000469ed) list_single_number_heading_pane_g1_cp2

0x4664,	// (0x000469f9) list_single_number_heading_pane_g2_cp2

0x466c,	// (0x00046a01) list_single_number_heading_pane_t1_cp2_ParamLimits

0x466c,	// (0x00046a01) list_single_number_heading_pane_t1_cp2

0x4682,	// (0x00046a17) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4682,	// (0x00046a17) list_single_number_heading_pane_t2_cp2

0x4696,	// (0x00046a2b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4696,	// (0x00046a2b) list_single_number_heading_pane_t3_cp2

0x4658,	// (0x000469ed) list_single_heading_pane_g1_cp2_ParamLimits

0x4658,	// (0x000469ed) list_single_heading_pane_g1_cp2

0x4664,	// (0x000469f9) list_single_heading_pane_g2_cp2

0x466c,	// (0x00046a01) list_single_heading_pane_t1_cp2_ParamLimits

0x466c,	// (0x00046a01) list_single_heading_pane_t1_cp2

0xa59d,	// (0x0004c932) list_single_heading_pane_t2_cp2_ParamLimits

0xa59d,	// (0x0004c932) list_single_heading_pane_t2_cp2

0xa4e5,	// (0x0004c87a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4e5,	// (0x0004c87a) list_double_graphic_pane_g1_cp2

0xa4f1,	// (0x0004c886) list_double_graphic_pane_g2_cp2_ParamLimits

0xa4f1,	// (0x0004c886) list_double_graphic_pane_g2_cp2

0xa500,	// (0x0004c895) list_double_graphic_pane_g3_cp2

0xa508,	// (0x0004c89d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa508,	// (0x0004c89d) list_double_graphic_pane_t1_cp2

0xa51e,	// (0x0004c8b3) list_double_graphic_pane_t2_cp2_ParamLimits

0xa51e,	// (0x0004c8b3) list_double_graphic_pane_t2_cp2

0x470b,	// (0x00046aa0) list_double_number_pane_g1_cp2_ParamLimits

0x470b,	// (0x00046aa0) list_double_number_pane_g1_cp2

0x4717,	// (0x00046aac) list_double_number_pane_g2_cp2

0xa4a9,	// (0x0004c83e) list_double_number_pane_t1_cp2_ParamLimits

0xa4a9,	// (0x0004c83e) list_double_number_pane_t1_cp2

0xa4bd,	// (0x0004c852) list_double_number_pane_t2_cp2_ParamLimits

0xa4bd,	// (0x0004c852) list_double_number_pane_t2_cp2

0xa4d3,	// (0x0004c868) list_double_number_pane_t3_cp2_ParamLimits

0xa4d3,	// (0x0004c868) list_double_number_pane_t3_cp2

0xa392,	// (0x0004c727) list_single_graphic_pane_g1_cp2_ParamLimits

0xa392,	// (0x0004c727) list_single_graphic_pane_g1_cp2

0x2698,	// (0x00044a2d) list_single_graphic_pane_g2_cp2_ParamLimits

0x2698,	// (0x00044a2d) list_single_graphic_pane_g2_cp2

0x4771,	// (0x00046b06) list_single_graphic_pane_g3_cp2

0xa368,	// (0x0004c6fd) list_single_graphic_pane_t1_cp2_ParamLimits

0xa368,	// (0x0004c6fd) list_single_graphic_pane_t1_cp2

0x2698,	// (0x00044a2d) list_single_number_pane_g1_cp2_ParamLimits

0x2698,	// (0x00044a2d) list_single_number_pane_g1_cp2

0x4771,	// (0x00046b06) list_single_number_pane_g2_cp2

0xa368,	// (0x0004c6fd) list_single_number_pane_t1_cp2_ParamLimits

0xa368,	// (0x0004c6fd) list_single_number_pane_t1_cp2

0xa37e,	// (0x0004c713) list_single_number_pane_t2_cp2_ParamLimits

0xa37e,	// (0x0004c713) list_single_number_pane_t2_cp2

0x4572,	// (0x00046907) list_double2_pane_g1_cp2_ParamLimits

0x4572,	// (0x00046907) list_double2_pane_g1_cp2

0x4583,	// (0x00046918) list_double2_pane_g2_cp2

0x46e3,	// (0x00046a78) list_double2_pane_t1_cp2_ParamLimits

0x46e3,	// (0x00046a78) list_double2_pane_t1_cp2

0x46f9,	// (0x00046a8e) list_double2_pane_t2_cp2_ParamLimits

0x46f9,	// (0x00046a8e) list_double2_pane_t2_cp2

0x470b,	// (0x00046aa0) list_double_pane_g1_cp2_ParamLimits

0x470b,	// (0x00046aa0) list_double_pane_g1_cp2

0x4717,	// (0x00046aac) list_double_pane_g2_cp2

0x471f,	// (0x00046ab4) list_double_pane_t1_cp2_ParamLimits

0x471f,	// (0x00046ab4) list_double_pane_t1_cp2

0x4735,	// (0x00046aca) list_double_pane_t2_cp2_ParamLimits

0x4735,	// (0x00046aca) list_double_pane_t2_cp2

0x4761,	// (0x00046af6) list_single_pane_cp2_g3

0x2698,	// (0x00044a2d) list_single_pane_g1_cp2_ParamLimits

0x2698,	// (0x00044a2d) list_single_pane_g1_cp2

0x4771,	// (0x00046b06) list_single_pane_g2_cp2

0x4779,	// (0x00046b0e) list_single_pane_t1_cp2_ParamLimits

0x4779,	// (0x00046b0e) list_single_pane_t1_cp2

0x4791,	// (0x00046b26) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4791,	// (0x00046b26) list_single_large_graphic_pane_g1_cp2

0x479f,	// (0x00046b34) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x479f,	// (0x00046b34) list_single_large_graphic_pane_g2_cp2

0x47ab,	// (0x00046b40) list_single_large_graphic_pane_g3_cp2

0x47b3,	// (0x00046b48) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x47b3,	// (0x00046b48) list_single_large_graphic_pane_g4_cp1

0x47cd,	// (0x00046b62) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x47cd,	// (0x00046b62) list_single_large_graphic_pane_t1_cp2

0xa332,	// (0x0004c6c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa332,	// (0x0004c6c7) list_single_graphic_heading_pane_g1_cp2

0xa2ff,	// (0x0004c694) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa2ff,	// (0x0004c694) list_single_graphic_heading_pane_g4_cp2

0x4771,	// (0x00046b06) list_single_graphic_heading_pane_g5_cp2

0xa33e,	// (0x0004c6d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa33e,	// (0x0004c6d3) list_single_graphic_heading_pane_t1_cp2

0xa354,	// (0x0004c6e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa354,	// (0x0004c6e9) list_single_graphic_heading_pane_t2_cp2

0xa2f3,	// (0x0004c688) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa2f3,	// (0x0004c688) list_single_2graphic_pane_g1_cp2

0xa2ff,	// (0x0004c694) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa2ff,	// (0x0004c694) list_single_2graphic_pane_g2_cp2

0x4771,	// (0x00046b06) list_single_2graphic_pane_g3_cp2

0xa310,	// (0x0004c6a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa310,	// (0x0004c6a5) list_single_2graphic_pane_g4_cp2

0xa31c,	// (0x0004c6b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa31c,	// (0x0004c6b1) list_single_2graphic_pane_t1_cp2

0x0723,	// (0x00042ab8) list_highlight_pane_g10_cp1

0x9ecb,	// (0x0004c260) list_highlight_pane_g1_cp1

0x9ed3,	// (0x0004c268) list_highlight_pane_g2_cp1

0x9edb,	// (0x0004c270) list_highlight_pane_g3_cp1

0x9ee3,	// (0x0004c278) list_highlight_pane_g4_cp1

0x9eeb,	// (0x0004c280) list_highlight_pane_g5_cp1

0x9ef3,	// (0x0004c288) list_highlight_pane_g6_cp1

0x9efb,	// (0x0004c290) list_highlight_pane_g7_cp1

0x9f03,	// (0x0004c298) list_highlight_pane_g8_cp1

0x9f0b,	// (0x0004c2a0) list_highlight_pane_g9_cp1

0x9deb,	// (0x0004c180) form_field_slider_pane_t3

0x9df9,	// (0x0004c18e) form_field_slider_pane_t4

0x9e07,	// (0x0004c19c) slider_form_pane_ParamLimits

0x9e07,	// (0x0004c19c) slider_form_pane

0x072d,	// (0x00042ac2) control_abbreviations

0x072d,	// (0x00042ac2) control_conventions

0x072d,	// (0x00042ac2) control_definitions

0x072d,	// (0x00042ac2) format_table_attribute

0xa5f3,	// (0x0004c988) bg_popup_preview_window_pane_g9

0x072d,	// (0x00042ac2) format_table_data2

0x072d,	// (0x00042ac2) format_table_data3

0x072d,	// (0x00042ac2) format_table_data_example

0x0008,

0x072d,	// (0x00042ac2) intro_purpose

0xf8f4,	// (0x00051c89) bg_popup_preview_window_pane_g

0x072d,	// (0x00042ac2) texts_category

0x072d,	// (0x00042ac2) texts_graphics

0x47e3,	// (0x00046b78) text_digital

0x47f2,	// (0x00046b87) text_primary

0x4801,	// (0x00046b96) text_primary_small

0x4810,	// (0x00046ba5) text_secondary

0x481f,	// (0x00046bb4) text_title

0xad60,	// (0x0004d0f5) bg_passive_tab_pane_g1_cp3_srt

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp3_srt

0xad69,	// (0x0004d0fe) bg_passive_tab_pane_g3_cp3_srt

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp3_srt_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp3_srt

0xad72,	// (0x0004d107) tabs_4_active_pane_srt_g1

0xad7a,	// (0x0004d10f) tabs_4_active_pane_srt_t1_ParamLimits

0xad7a,	// (0x0004d10f) tabs_4_active_pane_srt_t1

0xad60,	// (0x0004d0f5) bg_active_tab_pane_g1_cp3_copy1

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp3_copy1

0xad69,	// (0x0004d0fe) bg_active_tab_pane_g3_cp3_copy1

0x0789,	// (0x00042b1e) tabs_2_long_active_pane_srt_ParamLimits

0x0789,	// (0x00042b1e) tabs_2_long_active_pane_srt

0x0789,	// (0x00042b1e) tabs_2_long_passive_pane_srt_ParamLimits

0x0789,	// (0x00042b1e) tabs_2_long_passive_pane_srt

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp4_srt

0xaa22,	// (0x0004cdb7) bg_passive_tab_pane_g1_cp4_srt

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp4_srt

0xaa2b,	// (0x0004cdc0) bg_passive_tab_pane_g3_cp4_srt

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp4_srt_ParamLimits

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp4_srt

0xaa34,	// (0x0004cdc9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa34,	// (0x0004cdc9) tabs_2_long_active_pane_srt_t1

0xaa22,	// (0x0004cdb7) bg_active_tab_pane_g1_cp4_srt

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp4_srt

0xaa2b,	// (0x0004cdc0) bg_active_tab_pane_g3_cp4_srt

0x077b,	// (0x00042b10) tabs_3_long_active_pane_srt_ParamLimits

0x077b,	// (0x00042b10) tabs_3_long_active_pane_srt

0x077b,	// (0x00042b10) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x077b,	// (0x00042b10) tabs_3_long_passive_pane_cp_srt

0x077b,	// (0x00042b10) tabs_3_long_passive_pane_srt_ParamLimits

0x077b,	// (0x00042b10) tabs_3_long_passive_pane_srt

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp5_srt

0x4518,	// (0x000468ad) bg_passive_tab_pane_g1_cp5_srt

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp5_srt

0x450f,	// (0x000468a4) bg_passive_tab_pane_g3_cp5_srt

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp5_srt_ParamLimits

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp5_srt

0xaa10,	// (0x0004cda5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaa10,	// (0x0004cda5) tabs_3_long_active_pane_srt_t1

0x4518,	// (0x000468ad) bg_active_tab_pane_g1_cp5_srt

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp5_srt

0x450f,	// (0x000468a4) bg_active_tab_pane_g3_cp5_srt

0xaa02,	// (0x0004cd97) navi_text_pane_srt_t1

0xa9fa,	// (0x0004cd8f) navi_icon_pane_srt_g1

0x49d2,	// (0x00046d67) midp_editing_number_pane_srt

0x482e,	// (0x00046bc3) midp_ticker_pane_srt

0x49da,	// (0x00046d6f) midp_ticker_pane_srt_g1

0x49e2,	// (0x00046d77) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00051b0c) midp_ticker_pane_srt_g

0x49ea,	// (0x00046d7f) midp_ticker_pane_srt_t1

0xa9eb,	// (0x0004cd80) midp_editing_number_pane_t1_copy1

0x71b2,	// (0x00049547) listscroll_midp_pane

0x71b2,	// (0x00049547) midp_form_pane

0x4836,	// (0x00046bcb) midp_info_popup_window_ParamLimits

0x4836,	// (0x00046bcb) midp_info_popup_window

0x0e70,	// (0x00043205) bg_popup_sub_pane_cp50_ParamLimits

0x0e70,	// (0x00043205) bg_popup_sub_pane_cp50

0x9af5,	// (0x0004be8a) listscroll_midp_info_pane_ParamLimits

0x9af5,	// (0x0004be8a) listscroll_midp_info_pane

0x9ad5,	// (0x0004be6a) listscroll_form_midp_pane_ParamLimits

0x9ad5,	// (0x0004be6a) listscroll_form_midp_pane

0x9ae1,	// (0x0004be76) scroll_bar_cp050

0x9ab5,	// (0x0004be4a) list_midp_pane

0xb7d8,	// (0x0004db6d) signal_pane_g2_cp

0x99ef,	// (0x0004bd84) listscroll_midp_info_pane_t1_ParamLimits

0x99ef,	// (0x0004bd84) listscroll_midp_info_pane_t1

0x9a07,	// (0x0004bd9c) listscroll_midp_info_pane_t2_ParamLimits

0x9a07,	// (0x0004bd9c) listscroll_midp_info_pane_t2

0x9a45,	// (0x0004bdda) listscroll_midp_info_pane_t3_ParamLimits

0x9a45,	// (0x0004bdda) listscroll_midp_info_pane_t3

0x9a7f,	// (0x0004be14) listscroll_midp_info_pane_t4_ParamLimits

0x9a7f,	// (0x0004be14) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00051bc4) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00051bc4) listscroll_midp_info_pane_t

0x0ef0,	// (0x00043285) scroll_pane_cp21

0x9989,	// (0x0004bd1e) form_midp_field_choice_group_pane

0x9992,	// (0x0004bd27) form_midp_field_text_pane

0x99d5,	// (0x0004bd6a) form_midp_field_time_pane

0x99dd,	// (0x0004bd72) form_midp_gauge_slider_pane

0x99e6,	// (0x0004bd7b) form_midp_gauge_wait_pane

0x072d,	// (0x00042ac2) form_midp_image_pane

0x5d0c,	// (0x000480a1) list_single_midp_pane_ParamLimits

0x5d0c,	// (0x000480a1) list_single_midp_pane

0x994d,	// (0x0004bce2) form_midp_field_text_pane_t1

0x973f,	// (0x0004bad4) input_focus_pane_cp050

0x9978,	// (0x0004bd0d) list_midp_form_text_pane

0x991c,	// (0x0004bcb1) form_midp_field_choice_group_pane_t1

0x992a,	// (0x0004bcbf) input_focus_pane_cp051

0x993e,	// (0x0004bcd3) list_midp_choice_pane

0x072d,	// (0x00042ac2) status_idle_pane

0x9900,	// (0x0004bc95) form_midp_field_time_pane_t1

0x0723,	// (0x00042ab8) wait_anim_pane_g2_copy1

0x990e,	// (0x0004bca3) form_midp_field_time_pane_t2

0x0001,

0x4891,	// (0x00046c26) aid_navinavi_width_2_pane

0xf82a,	// (0x00051bbf) form_midp_field_time_pane_t

0x072d,	// (0x00042ac2) input_focus_pane_cp052

0x072d,	// (0x00042ac2) bg_input_focus_pane_cp040

0x98c0,	// (0x0004bc55) form_midp_gauge_slider_pane_t1

0x98ce,	// (0x0004bc63) form_midp_gauge_slider_pane_t2

0x98dc,	// (0x0004bc71) form_midp_gauge_slider_pane_t3

0x98ea,	// (0x0004bc7f) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00051bb6) form_midp_gauge_slider_pane_t

0x98f8,	// (0x0004bc8d) form_midp_slider_pane

0x0789,	// (0x00042b1e) bg_input_focus_pane_cp041_ParamLimits

0x0789,	// (0x00042b1e) bg_input_focus_pane_cp041

0x988d,	// (0x0004bc22) form_midp_gauge_wait_pane_t1_ParamLimits

0x988d,	// (0x0004bc22) form_midp_gauge_wait_pane_t1

0x989f,	// (0x0004bc34) form_midp_gauge_wait_pane_t2_ParamLimits

0x989f,	// (0x0004bc34) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00051bb1) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00051bb1) form_midp_gauge_wait_pane_t

0x98b1,	// (0x0004bc46) form_midp_wait_pane_ParamLimits

0x98b1,	// (0x0004bc46) form_midp_wait_pane

0x9855,	// (0x0004bbea) form_midp_image_pane_g1

0x985e,	// (0x0004bbf3) form_midp_image_pane_t1

0x986d,	// (0x0004bc02) form_midp_image_pane_t2

0x987c,	// (0x0004bc11) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00051baa) form_midp_image_pane_t

0x984c,	// (0x0004bbe1) list_single_midp_pane_g1

0x5cfd,	// (0x00048092) list_single_midp_pane_t1

0x9832,	// (0x0004bbc7) list_midp_form_item_pane_ParamLimits

0x9832,	// (0x0004bbc7) list_midp_form_item_pane

0x484b,	// (0x00046be0) list_midp_form_item_pane_t1

0x485a,	// (0x00046bef) midp_ticker_pane_g1

0x4866,	// (0x00046bfb) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00051af2) midp_ticker_pane_g

0x7264,	// (0x000495f9) midp_ticker_pane_t1

0xac58,	// (0x0004cfed) midp_editing_number_pane_t1

0xac36,	// (0x0004cfcb) midp_editing_number_pane

0xac45,	// (0x0004cfda) midp_ticker_pane

0xa9db,	// (0x0004cd70) ai_message_heading_pane

0x072d,	// (0x00042ac2) bg_popup_window_pane_cp14

0xa9e3,	// (0x0004cd78) listscroll_ai_message_pane

0xa961,	// (0x0004ccf6) ai_message_heading_pane_g1_ParamLimits

0xa961,	// (0x0004ccf6) ai_message_heading_pane_g1

0xa96d,	// (0x0004cd02) ai_message_heading_pane_g2_ParamLimits

0xa96d,	// (0x0004cd02) ai_message_heading_pane_g2

0xa97b,	// (0x0004cd10) ai_message_heading_pane_g3_ParamLimits

0xa97b,	// (0x0004cd10) ai_message_heading_pane_g3

0xa987,	// (0x0004cd1c) ai_message_heading_pane_g4_ParamLimits

0xa987,	// (0x0004cd1c) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00051ceb) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00051ceb) ai_message_heading_pane_g

0xa993,	// (0x0004cd28) ai_message_heading_pane_t1_ParamLimits

0xa993,	// (0x0004cd28) ai_message_heading_pane_t1

0xa9ad,	// (0x0004cd42) ai_message_heading_pane_t2_ParamLimits

0xa9ad,	// (0x0004cd42) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00051cf4) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00051cf4) ai_message_heading_pane_t

0xa9c1,	// (0x0004cd56) bg_popup_heading_pane_cp1_ParamLimits

0xa9c1,	// (0x0004cd56) bg_popup_heading_pane_cp1

0xa94f,	// (0x0004cce4) list_ai_message_pane_ParamLimits

0xa94f,	// (0x0004cce4) list_ai_message_pane

0x0ef0,	// (0x00043285) scroll_pane_cp10

0xa8eb,	// (0x0004cc80) list_ai_message_pane_g1

0xa8f3,	// (0x0004cc88) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00051cc8) list_ai_message_pane_g

0xa8fb,	// (0x0004cc90) list_ai_message_pane_t1_ParamLimits

0xa8fb,	// (0x0004cc90) list_ai_message_pane_t1

0xa910,	// (0x0004cca5) list_ai_message_pane_t2_ParamLimits

0xa910,	// (0x0004cca5) list_ai_message_pane_t2

0xa925,	// (0x0004ccba) list_ai_message_pane_t3_ParamLimits

0xa925,	// (0x0004ccba) list_ai_message_pane_t3

0xa93a,	// (0x0004cccf) list_ai_message_pane_t4_ParamLimits

0xa93a,	// (0x0004cccf) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00051ccd) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00051ccd) list_ai_message_pane_t

0xa8d4,	// (0x0004cc69) cell_ai_soft_ind_pane_ParamLimits

0xa8d4,	// (0x0004cc69) cell_ai_soft_ind_pane

0x4872,	// (0x00046c07) cell_ai_soft_ind_pane_g1_ParamLimits

0x4872,	// (0x00046c07) cell_ai_soft_ind_pane_g1

0x072d,	// (0x00042ac2) grid_highlight_cp1

0x487f,	// (0x00046c14) text_secondary_cp56_ParamLimits

0x487f,	// (0x00046c14) text_secondary_cp56

0xa8a9,	// (0x0004cc3e) example_general_pane_ParamLimits

0xa8a9,	// (0x0004cc3e) example_general_pane

0xa8b5,	// (0x0004cc4a) example_parent_pane_g1_ParamLimits

0xa8b5,	// (0x0004cc4a) example_parent_pane_g1

0xa8c1,	// (0x0004cc56) example_parent_pane_t1_ParamLimits

0xa8c1,	// (0x0004cc56) example_parent_pane_t1

0x7878,	// (0x00049c0d) popup_preview_text_window_ParamLimits

0x7878,	// (0x00049c0d) popup_preview_text_window

0x4769,	// (0x00046afe) list_single_pane_cp2_g4

0x098a,	// (0x00042d1f) bg_popup_preview_window_pane_ParamLimits

0x098a,	// (0x00042d1f) bg_popup_preview_window_pane

0xa5fd,	// (0x0004c992) popup_preview_text_window_t1_ParamLimits

0xa5fd,	// (0x0004c992) popup_preview_text_window_t1

0xa61b,	// (0x0004c9b0) popup_preview_text_window_t2_ParamLimits

0xa61b,	// (0x0004c9b0) popup_preview_text_window_t2

0xa664,	// (0x0004c9f9) popup_preview_text_window_t3_ParamLimits

0xa664,	// (0x0004c9f9) popup_preview_text_window_t3

0xa6a9,	// (0x0004ca3e) popup_preview_text_window_t4_ParamLimits

0xa6a9,	// (0x0004ca3e) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00051c9c) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00051c9c) popup_preview_text_window_t

0xa727,	// (0x0004cabc) scroll_pane_cp11

0x96cb,	// (0x0004ba60) bg_popup_preview_window_pane_g1

0xa5b1,	// (0x0004c946) bg_popup_preview_window_pane_g2

0xa5bb,	// (0x0004c950) bg_popup_preview_window_pane_g3

0xa5c5,	// (0x0004c95a) bg_popup_preview_window_pane_g4

0xa5cf,	// (0x0004c964) bg_popup_preview_window_pane_g5

0xa5d9,	// (0x0004c96e) bg_popup_preview_window_pane_g6

0xa5e1,	// (0x0004c976) bg_popup_preview_window_pane_g7

0xa5e9,	// (0x0004c97e) bg_popup_preview_window_pane_g8

0x6341,	// (0x000486d6) aid_popup_width_pane

0x7854,	// (0x00049be9) popup_midp_note_alarm_window_ParamLimits

0x7854,	// (0x00049be9) popup_midp_note_alarm_window

0x0dbb,	// (0x00043150) data_form_pane_ParamLimits

0x59a1,	// (0x00047d36) form_field_data_pane_g1

0x59ab,	// (0x00047d40) form_field_data_pane_t1_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_ParamLimits

0x59c5,	// (0x00047d5a) data_form_wide_pane_ParamLimits

0x59d6,	// (0x00047d6b) form_field_data_wide_pane_g1

0x59e2,	// (0x00047d77) form_field_data_wide_pane_t1_ParamLimits

0x0b42,	// (0x00042ed7) input_focus_pane_cp6_ParamLimits

0x6b8e,	// (0x00048f23) input_popup_find_pane_g1_ParamLimits

0x6b8e,	// (0x00048f23) input_popup_find_pane_g1

0x6ce7,	// (0x0004907c) aid_navi_side_left_pane

0x6cfc,	// (0x00049091) aid_navi_side_right_pane

0x9fc6,	// (0x0004c35b) bg_popup_window_pane_cp30_ParamLimits

0x9fc6,	// (0x0004c35b) bg_popup_window_pane_cp30

0xa040,	// (0x0004c3d5) popup_midp_note_alarm_window_g1_ParamLimits

0xa040,	// (0x0004c3d5) popup_midp_note_alarm_window_g1

0xa070,	// (0x0004c405) popup_midp_note_alarm_window_t1_ParamLimits

0xa070,	// (0x0004c405) popup_midp_note_alarm_window_t1

0xa111,	// (0x0004c4a6) popup_midp_note_alarm_window_t2_ParamLimits

0xa111,	// (0x0004c4a6) popup_midp_note_alarm_window_t2

0xa1bf,	// (0x0004c554) popup_midp_note_alarm_window_t3_ParamLimits

0xa1bf,	// (0x0004c554) popup_midp_note_alarm_window_t3

0xa1f1,	// (0x0004c586) popup_midp_note_alarm_window_t4_ParamLimits

0xa1f1,	// (0x0004c586) popup_midp_note_alarm_window_t4

0xa217,	// (0x0004c5ac) popup_midp_note_alarm_window_t5_ParamLimits

0xa217,	// (0x0004c5ac) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00051c39) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00051c39) popup_midp_note_alarm_window_t

0xa2c3,	// (0x0004c658) wait_bar_pane_cp1_ParamLimits

0xa2c3,	// (0x0004c658) wait_bar_pane_cp1

0x072d,	// (0x00042ac2) wait_anim_pane_copy1

0x072d,	// (0x00042ac2) wait_border_pane_copy1

0x9cab,	// (0x0004c040) wait_border_pane_g1_copy1

0x59fc,	// (0x00047d91) form_field_popup_pane_g1

0x5a04,	// (0x00047d99) form_field_popup_pane_t1_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_cp7_ParamLimits

0x0df5,	// (0x0004318a) list_form_pane_ParamLimits

0x5a1e,	// (0x00047db3) form_field_popup_wide_pane_g1

0x5a26,	// (0x00047dbb) form_field_popup_wide_pane_t1_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_cp8_ParamLimits

0x0e01,	// (0x00043196) list_form_wide_pane_ParamLimits

0xadfe,	// (0x0004d193) aid_size_cell_graphic_pane

0x5ab2,	// (0x00047e47) data_form_pane_t1_ParamLimits

0x5d53,	// (0x000480e8) data_form_wide_pane_t1_ParamLimits

0x928a,	// (0x0004b61f) bg_status_flat_pane

0x6766,	// (0x00048afb) title_pane_t1_ParamLimits

0x0743,	// (0x00042ad8) title_pane_t2_ParamLimits

0x0769,	// (0x00042afe) title_pane_t3_ParamLimits

0xf557,	// (0x000518ec) title_pane_t_ParamLimits

0x6e4d,	// (0x000491e2) level_1_signal_ParamLimits

0x6e5a,	// (0x000491ef) level_2_signal_ParamLimits

0x6e67,	// (0x000491fc) level_3_signal_ParamLimits

0x6e74,	// (0x00049209) level_4_signal_ParamLimits

0x6e81,	// (0x00049216) level_5_signal_ParamLimits

0x6e8e,	// (0x00049223) level_6_signal_ParamLimits

0x6e9b,	// (0x00049230) level_7_signal_ParamLimits

0x6e4d,	// (0x000491e2) level_1_battery_ParamLimits

0x6e5a,	// (0x000491ef) level_2_battery_ParamLimits

0x6e67,	// (0x000491fc) level_3_battery_ParamLimits

0x6e74,	// (0x00049209) level_4_battery_ParamLimits

0x6e81,	// (0x00049216) level_5_battery_ParamLimits

0x6e8e,	// (0x00049223) level_6_battery_ParamLimits

0x6e9b,	// (0x00049230) level_7_battery_ParamLimits

0x9ecb,	// (0x0004c260) bg_status_flat_pane_g1

0x9ed3,	// (0x0004c268) bg_status_flat_pane_g2

0x9edb,	// (0x0004c270) bg_status_flat_pane_g3

0x9ee3,	// (0x0004c278) bg_status_flat_pane_g4

0x9eeb,	// (0x0004c280) bg_status_flat_pane_g5

0x9ef3,	// (0x0004c288) bg_status_flat_pane_g6

0x9efb,	// (0x0004c290) bg_status_flat_pane_g7

0x67d6,	// (0x00048b6b) tabs_3_active_pane_t1_ParamLimits

0x67d6,	// (0x00048b6b) tabs_3_passive_pane_t1_ParamLimits

0x67f0,	// (0x00048b85) tabs_4_active_pane_t1_ParamLimits

0x67f0,	// (0x00048b85) tabs_4_1_passive_pane_t1_ParamLimits

0x6ba4,	// (0x00048f39) tabs_2_active_pane_t1_ParamLimits

0x6ba4,	// (0x00048f39) tabs_2_passive_pane_t1_ParamLimits

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp4_ParamLimits

0x6bb6,	// (0x00048f4b) tabs_2_long_active_pane_t1_ParamLimits

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp4_ParamLimits

0x7b68,	// (0x00049efd) list_single_midp_graphic_pane_t1_ParamLimits

0x2a8b,	// (0x00044e20) bg_active_tab_pane_cp5_ParamLimits

0x6bd5,	// (0x00048f6a) tabs_3_long_active_pane_t1_ParamLimits

0x6bc9,	// (0x00048f5e) bg_passive_tab_pane_cp5_ParamLimits

0x7b68,	// (0x00049efd) list_single_midp_graphic_pane_t1

0x928a,	// (0x0004b61f) bg_status_flat_pane_ParamLimits

0x934f,	// (0x0004b6e4) indicator_pane_cp2_ParamLimits

0x934f,	// (0x0004b6e4) indicator_pane_cp2

0x9492,	// (0x0004b827) navi_pane_srt_ParamLimits

0x9492,	// (0x0004b827) navi_pane_srt

0x94b6,	// (0x0004b84b) popup_clock_digital_analogue_window_cp1

0x07cd,	// (0x00042b62) indicator_pane_t1

0x482e,	// (0x00046bc3) copy_highlight_pane

0x482e,	// (0x00046bc3) cursor_graphics_pane

0x482e,	// (0x00046bc3) graphic_within_text_pane

0x482e,	// (0x00046bc3) link_highlight_pane

0xa6ea,	// (0x0004ca7f) popup_preview_text_window_t5_ParamLimits

0xa6ea,	// (0x0004ca7f) popup_preview_text_window_t5

0x489b,	// (0x00046c30) cursor_digital_pane

0x489b,	// (0x00046c30) cursor_primary_pane

0x48ac,	// (0x00046c41) cursor_primary_small_pane

0x48b4,	// (0x00046c49) cursor_secondary_pane

0x48bc,	// (0x00046c51) cursor_title_pane

0x489b,	// (0x00046c30) link_highlight_digital_pane

0x48a3,	// (0x00046c38) link_highlight_primary_pane

0x48ac,	// (0x00046c41) link_highlight_primary_small_pane

0x48b4,	// (0x00046c49) link_highlight_secondary_pane

0x48bc,	// (0x00046c51) link_highlight_title_pane

0x489b,	// (0x00046c30) copy_highlight_digital_pane

0x489b,	// (0x00046c30) copy_highlight_primary_pane

0x48ac,	// (0x00046c41) copy_highlight_primary_small_pane

0x48b4,	// (0x00046c49) copy_highlight_secondary_pane

0x48bc,	// (0x00046c51) copy_highlight_title_pane

0x48b4,	// (0x00046c49) graphic_text_digital_pane

0x9f69,	// (0x0004c2fe) graphic_text_primary_pane

0x9f72,	// (0x0004c307) graphic_text_primary_small_pane

0x48ac,	// (0x00046c41) graphic_text_secondary_pane

0x489b,	// (0x00046c30) graphic_text_title_pane

0x7276,	// (0x0004960b) cursor_primary_pane_g1

0x9f5b,	// (0x0004c2f0) cursor_text_primary_t1

0x9f43,	// (0x0004c2d8) cursor_primary_small_pane_g1

0x9f4d,	// (0x0004c2e2) cursor_text_primary_small_t1

0x9f2b,	// (0x0004c2c0) cursor_primary_small_pane_g1_copy1

0x9f35,	// (0x0004c2ca) cursor_text_primary_small_t1_copy1

0x9f13,	// (0x0004c2a8) cursor_text_title_t1

0x9f21,	// (0x0004c2b6) cursor_title_pane_g1

0x7276,	// (0x0004960b) cursor_digital_pane_g1

0x48c4,	// (0x00046c59) cursor_text_digital_t1

0x48d2,	// (0x00046c67) link_highlight_primary_pane_g1

0x9ebc,	// (0x0004c251) link_highlight_primary_pane_t1

0x48d2,	// (0x00046c67) link_highlight_primary_small_pane_g1

0x48da,	// (0x00046c6f) link_highlight_primary_small_pane_t1

0x48e9,	// (0x00046c7e) link_highlight_secondary_pane_g1

0x48f1,	// (0x00046c86) link_highlight_secondary_pane_t1

0x9e30,	// (0x0004c1c5) link_highlight_title_pane_g1

0x9e38,	// (0x0004c1cd) link_highlight_title_pane_t1

0x9e19,	// (0x0004c1ae) link_highlight_digital_pane_g1

0x9e21,	// (0x0004c1b6) link_highlight_digital_pane_t1

0x9ce1,	// (0x0004c076) copy_highlight_primary_pane_g1

0x9cf8,	// (0x0004c08d) copy_highlight_primary_pane_t1

0x9ce1,	// (0x0004c076) copy_highlight_primary_small_pane_g1

0x9ce9,	// (0x0004c07e) copy_highlight_primary_small_pane_t1

0x4900,	// (0x00046c95) copy_highlight_secondary_pane_g1

0x4908,	// (0x00046c9d) copy_highlight_secondary_pane_t1

0x9cca,	// (0x0004c05f) copy_highlight_title_pane_g1

0x9cd2,	// (0x0004c067) copy_highlight_title_pane_t1

0x9ce1,	// (0x0004c076) copy_highlight_digital_pane_g1

0xafd0,	// (0x0004d365) copy_highlight_digital_pane_t1

0xaf24,	// (0x0004d2b9) graphic_text_primary_pane_g1

0xafb4,	// (0x0004d349) graphic_text_primary_pane_t1

0xafc2,	// (0x0004d357) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00051d68) graphic_text_primary_pane_t

0xaf90,	// (0x0004d325) graphic_text_primary_small_pane_g1

0xaf98,	// (0x0004d32d) graphic_text_primary_small_pane_t1

0xafa6,	// (0x0004d33b) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00051d63) graphic_text_primary_small_pane_t

0xaf6c,	// (0x0004d301) graphic_text_secondary_pane_g1

0xaf74,	// (0x0004d309) graphic_text_secondary_pane_t1

0xaf82,	// (0x0004d317) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00051d5e) graphic_text_secondary_pane_t

0xaf48,	// (0x0004d2dd) graphic_text_title_pane_g1

0xaf50,	// (0x0004d2e5) graphic_text_title_pane_t1

0xaf5e,	// (0x0004d2f3) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00051d59) graphic_text_title_pane_t

0xaf24,	// (0x0004d2b9) graphic_text_digital_pane_g1

0xaf2c,	// (0x0004d2c1) graphic_text_digital_pane_t1

0xaf3a,	// (0x0004d2cf) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00051d54) graphic_text_digital_pane_t

0x0789,	// (0x00042b1e) navi_icon_pane_srt_ParamLimits

0x0789,	// (0x00042b1e) navi_icon_pane_srt

0x072d,	// (0x00042ac2) navi_midp_pane_srt

0x072d,	// (0x00042ac2) navi_navi_pane_srt

0x0789,	// (0x00042b1e) navi_text_pane_srt_ParamLimits

0x0789,	// (0x00042b1e) navi_text_pane_srt

0xaeef,	// (0x0004d284) navi_navi_icon_text_pane_srt

0xaef7,	// (0x0004d28c) navi_navi_pane_srt_g1_ParamLimits

0xaef7,	// (0x0004d28c) navi_navi_pane_srt_g1

0xaf09,	// (0x0004d29e) navi_navi_pane_srt_g2_ParamLimits

0xaf09,	// (0x0004d29e) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00051d4f) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00051d4f) navi_navi_pane_srt_g

0xaf1b,	// (0x0004d2b0) navi_navi_tabs_pane_srt

0xaeef,	// (0x0004d284) navi_navi_text_pane_srt

0xaeef,	// (0x0004d284) navi_navi_volume_pane_srt

0xaee0,	// (0x0004d275) navi_navi_text_pane_srt_t1

0x7f5c,	// (0x0004a2f1) navi_navi_volume_pane_srt_g1

0x7f64,	// (0x0004a2f9) volume_small_pane_srt_ParamLimits

0x7f64,	// (0x0004a2f9) volume_small_pane_srt

0x7280,	// (0x00049615) volume_small_pane_srt_g1_ParamLimits

0x7280,	// (0x00049615) volume_small_pane_srt_g1

0x7290,	// (0x00049625) volume_small_pane_srt_g2_ParamLimits

0x7290,	// (0x00049625) volume_small_pane_srt_g2

0x72a1,	// (0x00049636) volume_small_pane_srt_g3_ParamLimits

0x72a1,	// (0x00049636) volume_small_pane_srt_g3

0x72b2,	// (0x00049647) volume_small_pane_srt_g4_ParamLimits

0x72b2,	// (0x00049647) volume_small_pane_srt_g4

0x72c3,	// (0x00049658) volume_small_pane_srt_g5_ParamLimits

0x72c3,	// (0x00049658) volume_small_pane_srt_g5

0x72d4,	// (0x00049669) volume_small_pane_srt_g6_ParamLimits

0x72d4,	// (0x00049669) volume_small_pane_srt_g6

0x72e5,	// (0x0004967a) volume_small_pane_srt_g7_ParamLimits

0x72e5,	// (0x0004967a) volume_small_pane_srt_g7

0x72f6,	// (0x0004968b) volume_small_pane_srt_g8_ParamLimits

0x72f6,	// (0x0004968b) volume_small_pane_srt_g8

0x7307,	// (0x0004969c) volume_small_pane_srt_g9_ParamLimits

0x7307,	// (0x0004969c) volume_small_pane_srt_g9

0x7318,	// (0x000496ad) volume_small_pane_srt_g10_ParamLimits

0x7318,	// (0x000496ad) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00051af7) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00051af7) volume_small_pane_srt_g

0x0a3f,	// (0x00042dd4) query_popup_data_pane_cp2

0xaec6,	// (0x0004d25b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaec6,	// (0x0004d25b) navi_navi_icon_text_pane_srt_t1

0x9f69,	// (0x0004c2fe) navi_tabs_2_long_pane_srt

0x9f69,	// (0x0004c2fe) navi_tabs_2_pane_srt

0x9f69,	// (0x0004c2fe) navi_tabs_3_long_pane_srt

0x9f69,	// (0x0004c2fe) navi_tabs_3_pane_srt

0x9f69,	// (0x0004c2fe) navi_tabs_4_pane_srt

0x7f3c,	// (0x0004a2d1) tabs_2_active_pane_srt_ParamLimits

0x7f3c,	// (0x0004a2d1) tabs_2_active_pane_srt

0x7f4c,	// (0x0004a2e1) tabs_2_passive_pane_srt_ParamLimits

0x7f4c,	// (0x0004a2e1) tabs_2_passive_pane_srt

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp1_srt_ParamLimits

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp1_srt

0xae92,	// (0x0004d227) bg_passive_tab_pane_g1_cp1_srt

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp1_srt

0xae9b,	// (0x0004d230) bg_passive_tab_pane_g3_cp1_srt

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp1_srt_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp1_srt

0xaea4,	// (0x0004d239) tabs_2_active_pane_srt_g1

0xaeac,	// (0x0004d241) tabs_2_active_pane_srt_t1_ParamLimits

0xaeac,	// (0x0004d241) tabs_2_active_pane_srt_t1

0xae92,	// (0x0004d227) bg_active_tab_pane_g1_cp1_srt

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp1_srt

0xae9b,	// (0x0004d230) bg_active_tab_pane_g3_cp1_srt

0x7f09,	// (0x0004a29e) tabs_3_active_pane_srt_ParamLimits

0x7f09,	// (0x0004a29e) tabs_3_active_pane_srt

0x7f1a,	// (0x0004a2af) tabs_3_passive_pane_cp_srt_ParamLimits

0x7f1a,	// (0x0004a2af) tabs_3_passive_pane_cp_srt

0x7f2b,	// (0x0004a2c0) tabs_3_passive_pane_srt_ParamLimits

0x7f2b,	// (0x0004a2c0) tabs_3_passive_pane_srt

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp2_srt_ParamLimits

0x919b,	// (0x0004b530) bg_passive_tab_pane_cp2_srt

0x49c9,	// (0x00046d5e) bg_passive_tab_pane_g1_cp2_srt

0x4387,	// (0x0004671c) bg_passive_tab_pane_g2_cp2_srt

0x49c0,	// (0x00046d55) bg_passive_tab_pane_g3_cp2_srt

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp2_srt_ParamLimits

0x0789,	// (0x00042b1e) bg_active_tab_pane_cp2_srt

0xae78,	// (0x0004d20d) tabs_3_active_pane_srt_g1

0xae80,	// (0x0004d215) tabs_3_active_pane_srt_t1_ParamLimits

0xae80,	// (0x0004d215) tabs_3_active_pane_srt_t1

0x49c9,	// (0x00046d5e) bg_active_tab_pane_g1_cp2_srt

0x4387,	// (0x0004671c) bg_active_tab_pane_g2_cp2_srt

0x49c0,	// (0x00046d55) bg_active_tab_pane_g3_cp2_srt

0x7ec1,	// (0x0004a256) tabs_4_active_pane_srt_ParamLimits

0x7ec1,	// (0x0004a256) tabs_4_active_pane_srt

0x7ed3,	// (0x0004a268) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7ed3,	// (0x0004a268) tabs_4_passive_pane_cp2_srt

0x74a7,	// (0x0004983c) aid_size_cell_toolbar

0x6bc9,	// (0x00048f5e) main_idle_act_pane_ParamLimits

0x767a,	// (0x00049a0f) popup_large_graphic_colour_window_ParamLimits

0x7a21,	// (0x00049db6) popup_toolbar_window_ParamLimits

0x7a21,	// (0x00049db6) popup_toolbar_window

0xac67,	// (0x0004cffc) list_single_graphic_2heading_pane_ParamLimits

0xac67,	// (0x0004cffc) list_single_graphic_2heading_pane

0x10c8,	// (0x0004345d) aid_size_cell_apps_grid_lsc_pane

0x10da,	// (0x0004346f) aid_size_cell_apps_grid_prt_pane

0x919b,	// (0x0004b530) bg_wml_button_pane_cp1_ParamLimits

0x919b,	// (0x0004b530) bg_wml_button_pane_cp1

0x994d,	// (0x0004bce2) form_midp_field_text_pane_t1_ParamLimits

0x973f,	// (0x0004bad4) input_focus_pane_cp050_ParamLimits

0x9978,	// (0x0004bd0d) list_midp_form_text_pane_ParamLimits

0x992a,	// (0x0004bcbf) input_focus_pane_cp051_ParamLimits

0x993e,	// (0x0004bcd3) list_midp_choice_pane_ParamLimits

0x97f8,	// (0x0004bb8d) list_single_2graphic_pane_cp3_ParamLimits

0x97f8,	// (0x0004bb8d) list_single_2graphic_pane_cp3

0x980e,	// (0x0004bba3) list_single_midp_graphic_pane_ParamLimits

0x980e,	// (0x0004bba3) list_single_midp_graphic_pane

0x5bd7,	// (0x00047f6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bd7,	// (0x00047f6c) list_single_graphic_2heading_pane_g1

0x5be3,	// (0x00047f78) list_single_graphic_2heading_pane_g4_ParamLimits

0x5be3,	// (0x00047f78) list_single_graphic_2heading_pane_g4

0x5bef,	// (0x00047f84) list_single_graphic_2heading_pane_g5_ParamLimits

0x5bef,	// (0x00047f84) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00051b4a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00051b4a) list_single_graphic_2heading_pane_g

0x5bfb,	// (0x00047f90) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bfb,	// (0x00047f90) list_single_graphic_2heading_pane_t1

0x5c0f,	// (0x00047fa4) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c0f,	// (0x00047fa4) list_single_graphic_2heading_pane_t2

0x5c2b,	// (0x00047fc0) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c2b,	// (0x00047fc0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00051b51) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00051b51) list_single_graphic_2heading_pane_t

0x9609,	// (0x0004b99e) bg_popup_sub_pane_cp2

0x9633,	// (0x0004b9c8) grid_toobar_pane

0x7ae0,	// (0x00049e75) cell_toolbar_pane_ParamLimits

0x7ae0,	// (0x00049e75) cell_toolbar_pane

0x966f,	// (0x0004ba04) cell_toolbar_pane_g1_ParamLimits

0x966f,	// (0x0004ba04) cell_toolbar_pane_g1

0x9683,	// (0x0004ba18) cell_toolbar_pane_g2_ParamLimits

0x9683,	// (0x0004ba18) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00051b5f) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00051b5f) cell_toolbar_pane_g

0x96a5,	// (0x0004ba3a) grid_highlight_pane_cp2_ParamLimits

0x96a5,	// (0x0004ba3a) grid_highlight_pane_cp2

0x96bf,	// (0x0004ba54) toolbar_button_pane

0x96cb,	// (0x0004ba60) toolbar_button_pane_g1

0x96d3,	// (0x0004ba68) toolbar_button_pane_g2

0x96db,	// (0x0004ba70) toolbar_button_pane_g3

0x96e3,	// (0x0004ba78) toolbar_button_pane_g4

0x96eb,	// (0x0004ba80) toolbar_button_pane_g5

0x96f3,	// (0x0004ba88) toolbar_button_pane_g6

0x96fb,	// (0x0004ba90) toolbar_button_pane_g7

0x9703,	// (0x0004ba98) toolbar_button_pane_g8

0x970b,	// (0x0004baa0) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00051b64) toolbar_button_pane_g

0x7b24,	// (0x00049eb9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7b24,	// (0x00049eb9) list_single_2graphic_pane_g1_cp3

0x7b30,	// (0x00049ec5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7b30,	// (0x00049ec5) list_single_2graphic_pane_g2_cp3

0x4664,	// (0x000469f9) list_single_2graphic_pane_g3_cp3

0x7b41,	// (0x00049ed6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7b41,	// (0x00049ed6) list_single_2graphic_pane_g4_cp3

0x7b4d,	// (0x00049ee2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7b4d,	// (0x00049ee2) list_single_2graphic_pane_t1_cp3

0x4658,	// (0x000469ed) list_single_midp_graphic_pane_g2_ParamLimits

0x4658,	// (0x000469ed) list_single_midp_graphic_pane_g2

0x5bbf,	// (0x00047f54) aid_zoom_text_primary

0x5bc7,	// (0x00047f5c) aid_zoom_text_secondary

0x90dd,	// (0x0004b472) status_small_pane_g7_ParamLimits

0x90dd,	// (0x0004b472) status_small_pane_g7

0x9100,	// (0x0004b495) status_small_pane_t1_ParamLimits

0x6741,	// (0x00048ad6) title_pane_g2

0x0003,

0xf54e,	// (0x000518e3) title_pane_g

0x69aa,	// (0x00048d3f) aid_size_cell_colour_1_pane_ParamLimits

0x69aa,	// (0x00048d3f) aid_size_cell_colour_1_pane

0x69be,	// (0x00048d53) aid_size_cell_colour_2_pane_ParamLimits

0x69be,	// (0x00048d53) aid_size_cell_colour_2_pane

0x69d2,	// (0x00048d67) aid_size_cell_colour_3_pane_ParamLimits

0x69d2,	// (0x00048d67) aid_size_cell_colour_3_pane

0x69e6,	// (0x00048d7b) aid_size_cell_colour_4_pane_ParamLimits

0x69e6,	// (0x00048d7b) aid_size_cell_colour_4_pane

0x6c23,	// (0x00048fb8) title_pane_stacon_g1_ParamLimits

0x6c23,	// (0x00048fb8) title_pane_stacon_g1

0x9d4f,	// (0x0004c0e4) popup_note_wait_window_g3_ParamLimits

0x9d4f,	// (0x0004c0e4) popup_note_wait_window_g3

0x9dc6,	// (0x0004c15b) popup_note_wait_window_t5_ParamLimits

0x9dc6,	// (0x0004c15b) popup_note_wait_window_t5

0x072d,	// (0x00042ac2) main_feb_china_hwr_fs_writing_pane

0x7541,	// (0x000498d6) popup_feb_china_hwr_fs_window_ParamLimits

0x7541,	// (0x000498d6) popup_feb_china_hwr_fs_window

0x7b96,	// (0x00049f2b) aid_size_cell_hwr_fs_ParamLimits

0x7b96,	// (0x00049f2b) aid_size_cell_hwr_fs

0x973f,	// (0x0004bad4) bg_popup_sub_pane_cp3_ParamLimits

0x973f,	// (0x0004bad4) bg_popup_sub_pane_cp3

0x7bab,	// (0x00049f40) grid_hwr_fs_pane_ParamLimits

0x7bab,	// (0x00049f40) grid_hwr_fs_pane

0x7bc3,	// (0x00049f58) linegrid_hwr_fs_pane_ParamLimits

0x7bc3,	// (0x00049f58) linegrid_hwr_fs_pane

0x7bd3,	// (0x00049f68) cell_hwr_fs_pane_ParamLimits

0x7bd3,	// (0x00049f68) cell_hwr_fs_pane

0x974b,	// (0x0004bae0) linegrid_hwr_fs_pane_g1_ParamLimits

0x974b,	// (0x0004bae0) linegrid_hwr_fs_pane_g1

0x9757,	// (0x0004baec) linegrid_hwr_fs_pane_g2_ParamLimits

0x9757,	// (0x0004baec) linegrid_hwr_fs_pane_g2

0x9769,	// (0x0004bafe) linegrid_hwr_fs_pane_g3_ParamLimits

0x9769,	// (0x0004bafe) linegrid_hwr_fs_pane_g3

0x7bf7,	// (0x00049f8c) linegrid_hwr_fs_pane_g4_ParamLimits

0x7bf7,	// (0x00049f8c) linegrid_hwr_fs_pane_g4

0x7c15,	// (0x00049faa) linegrid_hwr_fs_pane_g5_ParamLimits

0x7c15,	// (0x00049faa) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00051b8f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00051b8f) linegrid_hwr_fs_pane_g

0x9775,	// (0x0004bb0a) cell_hwr_fs_pane_g1_ParamLimits

0x9775,	// (0x0004bb0a) cell_hwr_fs_pane_g1

0x9544,	// (0x0004b8d9) cell_hwr_fs_pane_g2_ParamLimits

0x9544,	// (0x0004b8d9) cell_hwr_fs_pane_g2

0x978b,	// (0x0004bb20) cell_hwr_fs_pane_g3_ParamLimits

0x978b,	// (0x0004bb20) cell_hwr_fs_pane_g3

0x9798,	// (0x0004bb2d) cell_hwr_fs_pane_g4_ParamLimits

0x9798,	// (0x0004bb2d) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00051b9a) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00051b9a) cell_hwr_fs_pane_g

0x7c2b,	// (0x00049fc0) cell_hwr_fs_pane_t1

0x072d,	// (0x00042ac2) grid_highlight_pane_cp6

0x072d,	// (0x00042ac2) main_idle_act2_pane

0x0ed7,	// (0x0004326c) aid_inside_area_popup_secondary

0xa3ff,	// (0x0004c794) aid_inside_area_window_primary_ParamLimits

0xa3ff,	// (0x0004c794) aid_inside_area_window_primary

0xafdf,	// (0x0004d374) ai2_news_ticker_pane

0xafe7,	// (0x0004d37c) aid_size_cell_ai1_link_ParamLimits

0xafe7,	// (0x0004d37c) aid_size_cell_ai1_link

0xb001,	// (0x0004d396) popup_ai2_data_window_ParamLimits

0xb001,	// (0x0004d396) popup_ai2_data_window

0xb01f,	// (0x0004d3b4) popup_ai2_link_window_ParamLimits

0xb01f,	// (0x0004d3b4) popup_ai2_link_window

0x973f,	// (0x0004bad4) bg_popup_sub_pane_cp4_ParamLimits

0x973f,	// (0x0004bad4) bg_popup_sub_pane_cp4

0xb035,	// (0x0004d3ca) grid_ai2_link_pane_ParamLimits

0xb035,	// (0x0004d3ca) grid_ai2_link_pane

0xb04c,	// (0x0004d3e1) popup_ai2_link_window_g1_ParamLimits

0xb04c,	// (0x0004d3e1) popup_ai2_link_window_g1

0xb058,	// (0x0004d3ed) popup_ai2_link_window_g2_ParamLimits

0xb058,	// (0x0004d3ed) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00051d6d) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00051d6d) popup_ai2_link_window_g

0xb069,	// (0x0004d3fe) ai2_mp_button_pane

0xb071,	// (0x0004d406) ai2_mp_volume_pane

0x992a,	// (0x0004bcbf) bg_popup_sub_pane_cp5_ParamLimits

0x992a,	// (0x0004bcbf) bg_popup_sub_pane_cp5

0xb079,	// (0x0004d40e) heading_ai2_gene_pane_ParamLimits

0xb079,	// (0x0004d40e) heading_ai2_gene_pane

0xb085,	// (0x0004d41a) list_ai2_gene_pane_ParamLimits

0xb085,	// (0x0004d41a) list_ai2_gene_pane

0xb0cd,	// (0x0004d462) cell_ai2_link_pane_ParamLimits

0xb0cd,	// (0x0004d462) cell_ai2_link_pane

0xb0e3,	// (0x0004d478) cell_ai2_link_pane_g1

0x072d,	// (0x00042ac2) grid_highlight_pane_cp7

0x7f79,	// (0x0004a30e) ai2_mp_volume_pane_g1

0xb1b6,	// (0x0004d54b) ai2_mp_volume_pane_g2

0xb12b,	// (0x0004d4c0) list_ai2_gene_pane_t1

0xb1be,	// (0x0004d553) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00051d86) ai2_mp_volume_pane_g

0x7f81,	// (0x0004a316) volume_small_pane_cp3

0xb1c6,	// (0x0004d55b) aid_size_cell_ai2_button

0xb1ce,	// (0x0004d563) grid_ai2_button_pane

0xb1d7,	// (0x0004d56c) cell_ai2_button_pane_ParamLimits

0xb1d7,	// (0x0004d56c) cell_ai2_button_pane

0x0723,	// (0x00042ab8) cell_ai2_button_pane_g1

0x072d,	// (0x00042ac2) grid_highlight_pane_cp8

0xb176,	// (0x0004d50b) ai2_gene_pane_t1_ParamLimits

0xb176,	// (0x0004d50b) ai2_gene_pane_t1

0x749d,	// (0x00049832) aid_height_parent_landscape

0xaa84,	// (0x0004ce19) aid_height_set_list

0xaa95,	// (0x0004ce2a) aid_size_parent

0xadfe,	// (0x0004d193) aid_size_cell_graphic_pane_ParamLimits

0xb095,	// (0x0004d42a) popup_ai2_data_window_g1_ParamLimits

0xb095,	// (0x0004d42a) popup_ai2_data_window_g1

0xb0a1,	// (0x0004d436) ai2_news_ticker_pane_g1

0xb0a9,	// (0x0004d43e) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00051d72) ai2_news_ticker_pane_g

0xb0b1,	// (0x0004d446) ai2_news_ticker_pane_t1

0xb0bf,	// (0x0004d454) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00051d77) ai2_news_ticker_pane_t

0xb0ec,	// (0x0004d481) heading_ai2_gene_pane_g1

0xb0f4,	// (0x0004d489) heading_ai2_gene_pane_t1_ParamLimits

0xb0f4,	// (0x0004d489) heading_ai2_gene_pane_t1

0xb109,	// (0x0004d49e) list_highlight_pane_cp6

0xb111,	// (0x0004d4a6) ai2_gene_pane_ParamLimits

0xb111,	// (0x0004d4a6) ai2_gene_pane

0xb139,	// (0x0004d4ce) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00051d7c) list_ai2_gene_pane_t

0xb147,	// (0x0004d4dc) list_highlight_pane_cp8_ParamLimits

0xb147,	// (0x0004d4dc) list_highlight_pane_cp8

0xb158,	// (0x0004d4ed) ai2_gene_pane_g1_ParamLimits

0xb158,	// (0x0004d4ed) ai2_gene_pane_g1

0xb16a,	// (0x0004d4ff) ai2_gene_pane_g2_ParamLimits

0xb16a,	// (0x0004d4ff) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00051d81) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00051d81) ai2_gene_pane_g

0x0d5d,	// (0x000430f2) scroll_pane_cp12

0x745a,	// (0x000497ef) control_pane_t3_ParamLimits

0x745a,	// (0x000497ef) control_pane_t3

0x90f1,	// (0x0004b486) status_small_pane_g8_ParamLimits

0x90f1,	// (0x0004b486) status_small_pane_g8

0x763f,	// (0x000499d4) popup_find_window_ParamLimits

0x786a,	// (0x00049bff) popup_note_image_window_ParamLimits

0x5c43,	// (0x00047fd8) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c43,	// (0x00047fd8) list_double2_graphic_pane_vc_g1

0x479f,	// (0x00046b34) list_double2_graphic_pane_vc_g2_ParamLimits

0x479f,	// (0x00046b34) list_double2_graphic_pane_vc_g2

0x7b10,	// (0x00049ea5) list_double2_graphic_pane_vc_g3_ParamLimits

0x7b10,	// (0x00049ea5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00051b58) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00051b58) list_double2_graphic_pane_vc_g

0x5c4f,	// (0x00047fe4) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c4f,	// (0x00047fe4) list_double2_graphic_pane_vc_t1

0x479f,	// (0x00046b34) list_single_heading_pane_vc_g1_ParamLimits

0x479f,	// (0x00046b34) list_single_heading_pane_vc_g1

0x7b10,	// (0x00049ea5) list_single_heading_pane_vc_g2_ParamLimits

0x7b10,	// (0x00049ea5) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051b79) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051b79) list_single_heading_pane_vc_g

0x5c65,	// (0x00047ffa) list_single_heading_pane_vc_t1_ParamLimits

0x5c65,	// (0x00047ffa) list_single_heading_pane_vc_t1

0x5c7b,	// (0x00048010) list_single_heading_pane_vc_t2_ParamLimits

0x5c7b,	// (0x00048010) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00051b7e) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00051b7e) list_single_heading_pane_vc_t

0x7b7e,	// (0x00049f13) list_setting_number_pane_vc_g1_ParamLimits

0x7b7e,	// (0x00049f13) list_setting_number_pane_vc_g1

0x7b8a,	// (0x00049f1f) list_setting_number_pane_vc_g2_ParamLimits

0x7b8a,	// (0x00049f1f) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051b83) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051b83) list_setting_number_pane_vc_g

0x5c8d,	// (0x00048022) list_setting_number_pane_vc_t1_ParamLimits

0x5c8d,	// (0x00048022) list_setting_number_pane_vc_t1

0x5ca1,	// (0x00048036) list_setting_number_pane_vc_t2_ParamLimits

0x5ca1,	// (0x00048036) list_setting_number_pane_vc_t2

0x5cbd,	// (0x00048052) list_setting_number_pane_vc_t3_ParamLimits

0x5cbd,	// (0x00048052) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00051b88) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00051b88) list_setting_number_pane_vc_t

0x5ceb,	// (0x00048080) set_value_pane_vc_ParamLimits

0x5ceb,	// (0x00048080) set_value_pane_vc

0xac67,	// (0x0004cffc) list_double2_graphic_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double2_graphic_pane_vc

0xac67,	// (0x0004cffc) list_double2_large_graphic_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double2_large_graphic_pane_vc

0xac67,	// (0x0004cffc) list_double2_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double2_pane_vc

0xac67,	// (0x0004cffc) list_double_graphic_heading_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_graphic_heading_pane_vc

0xac67,	// (0x0004cffc) list_double_graphic_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_graphic_pane_vc

0xac67,	// (0x0004cffc) list_double_heading_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_heading_pane_vc

0xac7b,	// (0x0004d010) list_double_large_graphic_pane_vc_ParamLimits

0xac7b,	// (0x0004d010) list_double_large_graphic_pane_vc

0xac67,	// (0x0004cffc) list_double_number_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_number_pane_vc

0xac67,	// (0x0004cffc) list_double_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_pane_vc

0xac67,	// (0x0004cffc) list_double_time_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_double_time_pane_vc

0xac67,	// (0x0004cffc) list_setting_number_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_setting_number_pane_vc

0xac67,	// (0x0004cffc) list_setting_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_setting_pane_vc

0xac67,	// (0x0004cffc) list_single_graphic_heading_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_single_graphic_heading_pane_vc

0xac67,	// (0x0004cffc) list_single_heading_pane_vc_ParamLimits

0xac67,	// (0x0004cffc) list_single_heading_pane_vc

0xac9d,	// (0x0004d032) list_single_number_heading_pane_vc_ParamLimits

0xac9d,	// (0x0004d032) list_single_number_heading_pane_vc

0x5c43,	// (0x00047fd8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c43,	// (0x00047fd8) list_double_graphic_heading_pane_vc_g1

0x7f8a,	// (0x0004a31f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7f8a,	// (0x0004a31f) list_double_graphic_heading_pane_vc_g2

0x7f96,	// (0x0004a32b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7f96,	// (0x0004a32b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00051d8d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00051d8d) list_double_graphic_heading_pane_vc_g

0x5d9f,	// (0x00048134) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d9f,	// (0x00048134) list_double_graphic_heading_pane_vc_t1

0x5db5,	// (0x0004814a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5db5,	// (0x0004814a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00051d94) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00051d94) list_double_graphic_heading_pane_vc_t

0x7b7e,	// (0x00049f13) list_setting_pane_vc_g1_ParamLimits

0x7b7e,	// (0x00049f13) list_setting_pane_vc_g1

0x7b8a,	// (0x00049f1f) list_setting_pane_vc_g2_ParamLimits

0x7b8a,	// (0x00049f1f) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051b83) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051b83) list_setting_pane_vc_g

0x5dd3,	// (0x00048168) list_setting_pane_vc_t1_ParamLimits

0x5dd3,	// (0x00048168) list_setting_pane_vc_t1

0x5def,	// (0x00048184) list_setting_pane_vc_t2_ParamLimits

0x5def,	// (0x00048184) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00051dc2) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00051dc2) list_setting_pane_vc_t

0x5ceb,	// (0x00048080) set_value_pane_cp_vc_ParamLimits

0x5ceb,	// (0x00048080) set_value_pane_cp_vc

0x479f,	// (0x00046b34) list_single_number_heading_pane_vc_g1_ParamLimits

0x479f,	// (0x00046b34) list_single_number_heading_pane_vc_g1

0x7b10,	// (0x00049ea5) list_single_number_heading_pane_vc_g2_ParamLimits

0x7b10,	// (0x00049ea5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051b79) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051b79) list_single_number_heading_pane_vc_g

0x5e0b,	// (0x000481a0) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e0b,	// (0x000481a0) list_single_number_heading_pane_vc_t1

0x5e21,	// (0x000481b6) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e21,	// (0x000481b6) list_single_number_heading_pane_vc_t2

0x5e33,	// (0x000481c8) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e33,	// (0x000481c8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00051dc7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00051dc7) list_single_number_heading_pane_vc_t

0x5c43,	// (0x00047fd8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c43,	// (0x00047fd8) list_single_graphic_heading_pane_vc_g1

0x479f,	// (0x00046b34) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x479f,	// (0x00046b34) list_single_graphic_heading_pane_vc_g4

0x7b10,	// (0x00049ea5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7b10,	// (0x00049ea5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00051b58) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00051b58) list_single_graphic_heading_pane_vc_g

0x5e45,	// (0x000481da) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5e45,	// (0x000481da) list_single_graphic_heading_pane_vc_t1

0x5e5b,	// (0x000481f0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e5b,	// (0x000481f0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00051dce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00051dce) list_single_graphic_heading_pane_vc_t

0x479f,	// (0x00046b34) list_double2_pane_vc_g1_ParamLimits

0x479f,	// (0x00046b34) list_double2_pane_vc_g1

0x7b10,	// (0x00049ea5) list_double2_pane_vc_g2_ParamLimits

0x7b10,	// (0x00049ea5) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051b79) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051b79) list_double2_pane_vc_g

0x5e6d,	// (0x00048202) list_double2_pane_vc_t1_ParamLimits

0x5e6d,	// (0x00048202) list_double2_pane_vc_t1

0x7fa2,	// (0x0004a337) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7fa2,	// (0x0004a337) list_double2_large_graphic_pane_vc_g1

0x479f,	// (0x00046b34) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x479f,	// (0x00046b34) list_double2_large_graphic_pane_vc_g2

0x7b10,	// (0x00049ea5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7b10,	// (0x00049ea5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00051dd3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00051dd3) list_double2_large_graphic_pane_vc_g

0x5e83,	// (0x00048218) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e83,	// (0x00048218) list_double2_large_graphic_pane_vc_t1

0x7fae,	// (0x0004a343) list_double_time_pane_vc_g1_ParamLimits

0x7fae,	// (0x0004a343) list_double_time_pane_vc_g1

0x7fba,	// (0x0004a34f) list_double_time_pane_vc_g2_ParamLimits

0x7fba,	// (0x0004a34f) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00051dda) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00051dda) list_double_time_pane_vc_g

0x5e99,	// (0x0004822e) list_double_time_pane_vc_t1_ParamLimits

0x5e99,	// (0x0004822e) list_double_time_pane_vc_t1

0x5ec3,	// (0x00048258) list_double_time_pane_vc_t2_ParamLimits

0x5ec3,	// (0x00048258) list_double_time_pane_vc_t2

0x5f0c,	// (0x000482a1) list_double_time_pane_vc_t3_ParamLimits

0x5f0c,	// (0x000482a1) list_double_time_pane_vc_t3

0x5f1e,	// (0x000482b3) list_double_time_pane_vc_t4_ParamLimits

0x5f1e,	// (0x000482b3) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00051ddf) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00051ddf) list_double_time_pane_vc_t

0x479f,	// (0x00046b34) list_double_pane_vc_g1_ParamLimits

0x479f,	// (0x00046b34) list_double_pane_vc_g1

0x7b10,	// (0x00049ea5) list_double_pane_vc_g2_ParamLimits

0x7b10,	// (0x00049ea5) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051b79) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051b79) list_double_pane_vc_g

0x5f32,	// (0x000482c7) list_double_pane_vc_t1_ParamLimits

0x5f32,	// (0x000482c7) list_double_pane_vc_t1

0x5f46,	// (0x000482db) list_double_pane_vc_t2_ParamLimits

0x5f46,	// (0x000482db) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00051de8) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00051de8) list_double_pane_vc_t

0x479f,	// (0x00046b34) list_double_number_pane_vc_g1_ParamLimits

0x479f,	// (0x00046b34) list_double_number_pane_vc_g1

0x7b10,	// (0x00049ea5) list_double_number_pane_vc_g2_ParamLimits

0x7b10,	// (0x00049ea5) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051b79) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051b79) list_double_number_pane_vc_g

0x5f5c,	// (0x000482f1) list_double_number_pane_vc_t1_ParamLimits

0x5f5c,	// (0x000482f1) list_double_number_pane_vc_t1

0x5f6e,	// (0x00048303) list_double_number_pane_vc_t2_ParamLimits

0x5f6e,	// (0x00048303) list_double_number_pane_vc_t2

0x5f46,	// (0x000482db) list_double_number_pane_vc_t3_ParamLimits

0x5f46,	// (0x000482db) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00051ded) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00051ded) list_double_number_pane_vc_t

0x7fc6,	// (0x0004a35b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7fc6,	// (0x0004a35b) list_double_large_graphic_pane_vc_g1

0x7fe8,	// (0x0004a37d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7fe8,	// (0x0004a37d) list_double_large_graphic_pane_vc_g2

0x7ffc,	// (0x0004a391) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7ffc,	// (0x0004a391) list_double_large_graphic_pane_vc_g3

0x5f82,	// (0x00048317) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f82,	// (0x00048317) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00051df4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00051df4) list_double_large_graphic_pane_vc_g

0x5f91,	// (0x00048326) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f91,	// (0x00048326) list_double_large_graphic_pane_vc_t1

0x5fad,	// (0x00048342) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5fad,	// (0x00048342) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00051dfd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00051dfd) list_double_large_graphic_pane_vc_t

0x7f8a,	// (0x0004a31f) list_double_heading_pane_vc_g1_ParamLimits

0x7f8a,	// (0x0004a31f) list_double_heading_pane_vc_g1

0x7f96,	// (0x0004a32b) list_double_heading_pane_vc_g2_ParamLimits

0x7f96,	// (0x0004a32b) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00051e02) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00051e02) list_double_heading_pane_vc_g

0x5fcd,	// (0x00048362) list_double_heading_pane_vc_t1_ParamLimits

0x5fcd,	// (0x00048362) list_double_heading_pane_vc_t1

0x5fdf,	// (0x00048374) list_double_heading_pane_vc_t2_ParamLimits

0x5fdf,	// (0x00048374) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00051e07) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00051e07) list_double_heading_pane_vc_t

0x5ff7,	// (0x0004838c) list_double_graphic_pane_vc_g1_ParamLimits

0x5ff7,	// (0x0004838c) list_double_graphic_pane_vc_g1

0x800b,	// (0x0004a3a0) list_double_graphic_pane_vc_g2_ParamLimits

0x800b,	// (0x0004a3a0) list_double_graphic_pane_vc_g2

0x479f,	// (0x00046b34) list_double_graphic_pane_vc_g3_ParamLimits

0x479f,	// (0x00046b34) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00051e0c) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00051e0c) list_double_graphic_pane_vc_g

0x6003,	// (0x00048398) list_double_graphic_pane_vc_t1_ParamLimits

0x6003,	// (0x00048398) list_double_graphic_pane_vc_t1

0x602d,	// (0x000483c2) list_double_graphic_pane_vc_t2_ParamLimits

0x602d,	// (0x000483c2) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00051e15) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00051e15) list_double_graphic_pane_vc_t

0x634d,	// (0x000486e2) aid_size_cell_fastswap

0x6355,	// (0x000486ea) aid_size_cell_touch_ParamLimits

0x6355,	// (0x000486ea) aid_size_cell_touch

0x65b6,	// (0x0004894b) popup_fast_swap_wide_window_ParamLimits

0x65b6,	// (0x0004894b) popup_fast_swap_wide_window

0x66d4,	// (0x00048a69) touch_pane_ParamLimits

0x66d4,	// (0x00048a69) touch_pane

0x0db3,	// (0x00043148) button_value_adjust_pane_cp2

0x58e1,	// (0x00047c76) button_value_adjust_pane_cp4

0x5909,	// (0x00047c9e) form_field_data_pane_cp2

0x592e,	// (0x00047cc3) form_field_data_wide_pane_cp2

0x10ff,	// (0x00043494) bg_scroll_pane_ParamLimits

0x6e24,	// (0x000491b9) scroll_handle_pane_ParamLimits

0x6e38,	// (0x000491cd) scroll_sc2_down_pane_ParamLimits

0x6e38,	// (0x000491cd) scroll_sc2_down_pane

0x1130,	// (0x000434c5) scroll_sc2_up_pane_ParamLimits

0x1130,	// (0x000434c5) scroll_sc2_up_pane

0xb8c0,	// (0x0004dc55) grid_wheel_folder_pane_g1_ParamLimits

0xb8c0,	// (0x0004dc55) grid_wheel_folder_pane_g1

0x713f,	// (0x000494d4) clock_nsta_pane_cp2_ParamLimits

0x713f,	// (0x000494d4) clock_nsta_pane_cp2

0x71b2,	// (0x00049547) listscroll_midp_pane_ParamLimits

0x71be,	// (0x00049553) midp_canvas_pane

0x916b,	// (0x0004b500) nsta_clock_indic_pane

0x91a7,	// (0x0004b53c) listscroll_form_pane_vc

0x91af,	// (0x0004b544) listscroll_set_pane_vc_ParamLimits

0x91af,	// (0x0004b544) listscroll_set_pane_vc

0x92a6,	// (0x0004b63b) clock_nsta_pane

0x931d,	// (0x0004b6b2) indicator_nsta_pane

0x9609,	// (0x0004b99e) bg_popup_sub_pane_cp2_ParamLimits

0x961d,	// (0x0004b9b2) find_pane_cp2_ParamLimits

0x961d,	// (0x0004b9b2) find_pane_cp2

0x9633,	// (0x0004b9c8) grid_toobar_pane_ParamLimits

0x9713,	// (0x0004baa8) list_form_gen_pane_vc_ParamLimits

0x9713,	// (0x0004baa8) list_form_gen_pane_vc

0x9729,	// (0x0004babe) scroll_pane_cp8_vc_ParamLimits

0x9729,	// (0x0004babe) scroll_pane_cp8_vc

0x97a5,	// (0x0004bb3a) data_form_wide_pane_vc_ParamLimits

0x97a5,	// (0x0004bb3a) data_form_wide_pane_vc

0x97b1,	// (0x0004bb46) form_field_data_wide_pane_vc_g1

0x97b9,	// (0x0004bb4e) form_field_data_wide_pane_vc_t1_ParamLimits

0x97b9,	// (0x0004bb4e) form_field_data_wide_pane_vc_t1

0x0dc7,	// (0x0004315c) input_focus_pane_cp6_vc_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_cp6_vc

0x9ab5,	// (0x0004be4a) list_midp_pane_ParamLimits

0x9ac1,	// (0x0004be56) scroll_pane_cp16_ParamLimits

0x9ac1,	// (0x0004be56) scroll_pane_cp16

0x9b23,	// (0x0004beb8) button_value_adjust_pane_ParamLimits

0x9b23,	// (0x0004beb8) button_value_adjust_pane

0xaaa7,	// (0x0004ce3c) button_value_adjust_pane_cp6_ParamLimits

0xaaa7,	// (0x0004ce3c) button_value_adjust_pane_cp6

0xabef,	// (0x0004cf84) settings_code_pane_cp_ParamLimits

0xabef,	// (0x0004cf84) settings_code_pane_cp

0x0723,	// (0x00042ab8) cell_touch_pane_g1

0x0723,	// (0x00042ab8) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00051a9d) cell_touch_pane_g

0xb1e9,	// (0x0004d57e) cell_touch_pane_cp_ParamLimits

0xb1e9,	// (0x0004d57e) cell_touch_pane_cp

0xb1f9,	// (0x0004d58e) cell_touch_pane_ParamLimits

0xb1f9,	// (0x0004d58e) cell_touch_pane

0x0723,	// (0x00042ab8) scroll_sc2_down_pane_g1

0x0723,	// (0x00042ab8) scroll_sc2_up_pane_g1

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp4_vc

0xb20a,	// (0x0004d59f) list_set_graphic_pane_vc_g1_ParamLimits

0xb20a,	// (0x0004d59f) list_set_graphic_pane_vc_g1

0xb216,	// (0x0004d5ab) list_set_graphic_pane_vc_g2_ParamLimits

0xb216,	// (0x0004d5ab) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00051d99) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00051d99) list_set_graphic_pane_vc_g

0xb222,	// (0x0004d5b7) text_primary_small_cp13_vc_ParamLimits

0xb222,	// (0x0004d5b7) text_primary_small_cp13_vc

0x4521,	// (0x000468b6) list_set_graphic_pane_vc_ParamLimits

0x4521,	// (0x000468b6) list_set_graphic_pane_vc

0x072d,	// (0x00042ac2) input_focus_pane_cp2_vc

0x0723,	// (0x00042ab8) setting_code_pane_vc_g1

0x07a0,	// (0x00042b35) setting_code_pane_vc_t1

0xb23a,	// (0x0004d5cf) set_text_pane_vc_t1_ParamLimits

0xb23a,	// (0x0004d5cf) set_text_pane_vc_t1

0x072d,	// (0x00042ac2) input_focus_pane_cp1_vc

0xb258,	// (0x0004d5ed) list_set_text_pane_vc

0x0723,	// (0x00042ab8) setting_text_pane_vc_g1

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp2_vc

0x0797,	// (0x00042b2c) setting_slider_graphic_pane_vc_g1

0xb262,	// (0x0004d5f7) setting_slider_graphic_pane_vc_t1

0xb274,	// (0x0004d609) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00051d9e) setting_slider_graphic_pane_vc_t

0xb286,	// (0x0004d61b) slider_set_pane_cp_vc

0xb290,	// (0x0004d625) slider_set_pane_vc_g1

0xb299,	// (0x0004d62e) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00051da3) slider_set_pane_vc_g

0x0e1f,	// (0x000431b4) set_opt_bg_pane_g1_copy1

0x0e27,	// (0x000431bc) set_opt_bg_pane_g2_copy1

0xb2c5,	// (0x0004d65a) set_opt_bg_pane_g3_copy1

0x0e37,	// (0x000431cc) set_opt_bg_pane_g4_copy1

0x0e3f,	// (0x000431d4) set_opt_bg_pane_g5_copy1

0x0e47,	// (0x000431dc) set_opt_bg_pane_g6_copy1

0xb2cf,	// (0x0004d664) set_opt_bg_pane_g7_copy1

0xb2d9,	// (0x0004d66e) set_opt_bg_pane_g8_copy1

0xb2e3,	// (0x0004d678) set_opt_bg_pane_g9_copy1

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp_vc

0xb2ed,	// (0x0004d682) setting_slider_pane_vc_t1

0xb2fc,	// (0x0004d691) setting_slider_pane_vc_t2

0xb30e,	// (0x0004d6a3) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00051db2) setting_slider_pane_vc_t

0xb320,	// (0x0004d6b5) slider_set_pane_vc

0x7c39,	// (0x00049fce) volume_set_pane_vc_g1

0x7c42,	// (0x00049fd7) volume_set_pane_vc_g2

0x7c4b,	// (0x00049fe0) volume_set_pane_vc_g3

0x7c54,	// (0x00049fe9) volume_set_pane_vc_g4

0x7c5d,	// (0x00049ff2) volume_set_pane_vc_g5

0x7c66,	// (0x00049ffb) volume_set_pane_vc_g6

0x7c6f,	// (0x0004a004) volume_set_pane_vc_g7

0x7c78,	// (0x0004a00d) volume_set_pane_vc_g8

0x7c81,	// (0x0004a016) volume_set_pane_vc_g9

0x7c8a,	// (0x0004a01f) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00051c50) volume_set_pane_vc_g

0xb328,	// (0x0004d6bd) volume_set_pane_vc

0xb332,	// (0x0004d6c7) button_value_adjust_pane_cp1_vc

0xb33c,	// (0x0004d6d1) list_highlight_pane_cp2_vc

0xb345,	// (0x0004d6da) list_set_pane_vc_ParamLimits

0xb345,	// (0x0004d6da) list_set_pane_vc

0xb3b3,	// (0x0004d748) main_pane_set_vc_t1_ParamLimits

0xb3b3,	// (0x0004d748) main_pane_set_vc_t1

0xb3c8,	// (0x0004d75d) main_pane_set_vc_t2_ParamLimits

0xb3c8,	// (0x0004d75d) main_pane_set_vc_t2

0xb3da,	// (0x0004d76f) main_pane_set_vc_t3_ParamLimits

0xb3da,	// (0x0004d76f) main_pane_set_vc_t3

0xb3ee,	// (0x0004d783) main_pane_set_vc_t4_ParamLimits

0xb3ee,	// (0x0004d783) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00051db9) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00051db9) main_pane_set_vc_t

0xb402,	// (0x0004d797) setting_code_pane_vc_ParamLimits

0xb402,	// (0x0004d797) setting_code_pane_vc

0xb413,	// (0x0004d7a8) setting_slider_graphic_pane_vc

0xb413,	// (0x0004d7a8) setting_slider_pane_vc

0xb413,	// (0x0004d7a8) setting_text_pane_vc

0xb413,	// (0x0004d7a8) setting_volume_pane_vc

0xb41d,	// (0x0004d7b2) scroll_pane_cp121_vc

0x0da1,	// (0x00043136) set_content_pane_vc

0xb425,	// (0x0004d7ba) button_value_adjust_pane_g1

0xb42e,	// (0x0004d7c3) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00051e1a) button_value_adjust_pane_g

0xb437,	// (0x0004d7cc) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb437,	// (0x0004d7cc) form_field_slider_wide_pane_vc_t1

0xb449,	// (0x0004d7de) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb449,	// (0x0004d7de) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00051e1f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00051e1f) form_field_slider_wide_pane_vc_t

0x077b,	// (0x00042b10) input_focus_pane_cp10_vc_ParamLimits

0x077b,	// (0x00042b10) input_focus_pane_cp10_vc

0xb475,	// (0x0004d80a) slider_cont_pane_cp1_vc_ParamLimits

0xb475,	// (0x0004d80a) slider_cont_pane_cp1_vc

0xb487,	// (0x0004d81c) slider_form_pane_g1_cp2

0xb299,	// (0x0004d62e) slider_form_pane_g2_cp2

0xb4b4,	// (0x0004d849) form_field_slider_pane_vc_t3

0xb4c2,	// (0x0004d857) form_field_slider_pane_vc_t4

0xb4d0,	// (0x0004d865) slider_form_pane_vc_ParamLimits

0xb4d0,	// (0x0004d865) slider_form_pane_vc

0xb4dd,	// (0x0004d872) form_field_slider_pane_vc_t1_ParamLimits

0xb4dd,	// (0x0004d872) form_field_slider_pane_vc_t1

0xb449,	// (0x0004d7de) form_field_slider_pane_vc_t2_ParamLimits

0xb449,	// (0x0004d7de) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00051e31) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00051e31) form_field_slider_pane_vc_t

0x077b,	// (0x00042b10) input_focus_pane_cp9_vc_ParamLimits

0x077b,	// (0x00042b10) input_focus_pane_cp9_vc

0xb4f3,	// (0x0004d888) slider_cont_pane_vc_ParamLimits

0xb4f3,	// (0x0004d888) slider_cont_pane_vc

0xb507,	// (0x0004d89c) list_form_graphic_pane_cp_vc_ParamLimits

0xb507,	// (0x0004d89c) list_form_graphic_pane_cp_vc

0x97b1,	// (0x0004bb46) form_field_popup_wide_pane_vc_g1

0xb51c,	// (0x0004d8b1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb51c,	// (0x0004d8b1) form_field_popup_wide_pane_vc_t1

0x0dc7,	// (0x0004315c) input_focus_pane_cp8_vc_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_cp8_vc

0xb561,	// (0x0004d8f6) list_form_wide_pane_vc_ParamLimits

0xb561,	// (0x0004d8f6) list_form_wide_pane_vc

0xb56d,	// (0x0004d902) list_form_graphic_pane_vc_g1

0xb575,	// (0x0004d90a) list_form_graphic_pane_vc_t1_ParamLimits

0xb575,	// (0x0004d90a) list_form_graphic_pane_vc_t1

0x0789,	// (0x00042b1e) list_highlight_pane_cp5_vc_ParamLimits

0x0789,	// (0x00042b1e) list_highlight_pane_cp5_vc

0xb591,	// (0x0004d926) list_form_graphic_pane_vc_ParamLimits

0xb591,	// (0x0004d926) list_form_graphic_pane_vc

0x97b1,	// (0x0004bb46) form_field_popup_pane_vc_g1

0xb5a7,	// (0x0004d93c) form_field_popup_pane_vc_t1_ParamLimits

0xb5a7,	// (0x0004d93c) form_field_popup_pane_vc_t1

0x0dc7,	// (0x0004315c) input_focus_pane_cp7_vc_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_cp7_vc

0xb5be,	// (0x0004d953) list_form_pane_vc_ParamLimits

0xb5be,	// (0x0004d953) list_form_pane_vc

0xb5ca,	// (0x0004d95f) data_form_pane_vc_t1_ParamLimits

0xb5ca,	// (0x0004d95f) data_form_pane_vc_t1

0x0e1f,	// (0x000431b4) input_focus_pane_vc_g1

0x0e27,	// (0x000431bc) input_focus_pane_vc_g2

0x0e2f,	// (0x000431c4) input_focus_pane_vc_g3

0x0e37,	// (0x000431cc) input_focus_pane_vc_g4

0x0e3f,	// (0x000431d4) input_focus_pane_vc_g5

0x0e47,	// (0x000431dc) input_focus_pane_vc_g6

0x0e4f,	// (0x000431e4) input_focus_pane_vc_g7

0x0e57,	// (0x000431ec) input_focus_pane_vc_g8

0x0e5f,	// (0x000431f4) input_focus_pane_vc_g9

0x0723,	// (0x00042ab8) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00051a26) input_focus_pane_vc_g

0x97a5,	// (0x0004bb3a) data_form_pane_vc_ParamLimits

0x97a5,	// (0x0004bb3a) data_form_pane_vc

0x97b1,	// (0x0004bb46) form_field_data_pane_vc_g1

0xb5e7,	// (0x0004d97c) form_field_data_pane_vc_t1_ParamLimits

0xb5e7,	// (0x0004d97c) form_field_data_pane_vc_t1

0x0dc7,	// (0x0004315c) input_focus_pane_vc_ParamLimits

0x0dc7,	// (0x0004315c) input_focus_pane_vc

0xb601,	// (0x0004d996) button_value_adjust_pane_cp3_vc

0xb609,	// (0x0004d99e) button_value_adjust_pane_cp5_vc

0xb611,	// (0x0004d9a6) form_field_data_pane_vc_ParamLimits

0xb611,	// (0x0004d9a6) form_field_data_pane_vc

0xb62c,	// (0x0004d9c1) form_field_data_pane_vc_cp2

0xb634,	// (0x0004d9c9) form_field_data_wide_pane_vc_ParamLimits

0xb634,	// (0x0004d9c9) form_field_data_wide_pane_vc

0xb64e,	// (0x0004d9e3) form_field_data_wide_pane_vc_cp2

0xb656,	// (0x0004d9eb) form_field_popup_pane_vc_ParamLimits

0xb656,	// (0x0004d9eb) form_field_popup_pane_vc

0xb671,	// (0x0004da06) form_field_popup_wide_pane_vc_ParamLimits

0xb671,	// (0x0004da06) form_field_popup_wide_pane_vc

0xb68b,	// (0x0004da20) form_field_slider_pane_vc_ParamLimits

0xb68b,	// (0x0004da20) form_field_slider_pane_vc

0xb69e,	// (0x0004da33) form_field_slider_wide_pane_vc_ParamLimits

0xb69e,	// (0x0004da33) form_field_slider_wide_pane_vc

0xb6b1,	// (0x0004da46) grid_touch_1_pane_ParamLimits

0xb6b1,	// (0x0004da46) grid_touch_1_pane

0xb6bd,	// (0x0004da52) grid_touch_2_pane_ParamLimits

0xb6bd,	// (0x0004da52) grid_touch_2_pane

0x9136,	// (0x0004b4cb) touch_pane_g1_ParamLimits

0x9136,	// (0x0004b4cb) touch_pane_g1

0xb6d7,	// (0x0004da6c) cell_app_pane_cp_wide_ParamLimits

0xb6d7,	// (0x0004da6c) cell_app_pane_cp_wide

0xb6e8,	// (0x0004da7d) grid_popup_fast_wide_pane_ParamLimits

0xb6e8,	// (0x0004da7d) grid_popup_fast_wide_pane

0xb6fc,	// (0x0004da91) scroll_pane_cp19_ParamLimits

0xb6fc,	// (0x0004da91) scroll_pane_cp19

0x072d,	// (0x00042ac2) bg_popup_window_pane_cp20

0xb710,	// (0x0004daa5) listscroll_popup_fast_wide_pane

0x0789,	// (0x00042b1e) grid_indicator_nsta_pane

0xb718,	// (0x0004daad) clock_nsta_pane_g1

0xb721,	// (0x0004dab6) clock_nsta_pane_t1

0xb73d,	// (0x0004dad2) cell_indicator_nsta_pane_ParamLimits

0xb73d,	// (0x0004dad2) cell_indicator_nsta_pane

0xb76e,	// (0x0004db03) cell_indicator_nsta_pane_g1

0xb77c,	// (0x0004db11) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00051e42) cell_indicator_nsta_pane_g

0xb789,	// (0x0004db1e) clock_nsta_pane_cp

0xb792,	// (0x0004db27) indicator_nsta_pane_cp

0xb79a,	// (0x0004db2f) nsta_clock_indic_pane_g1

0x07c5,	// (0x00042b5a) grid_indicator_pane

0x1222,	// (0x000435b7) scroll_pane_cp29

0x708e,	// (0x00049423) indicator_nsta_pane_cp2_ParamLimits

0x708e,	// (0x00049423) indicator_nsta_pane_cp2

0x0789,	// (0x00042b1e) main_apps_wheel_pane

0x9992,	// (0x0004bd27) form_midp_field_text_pane_ParamLimits

0x9ae1,	// (0x0004be76) scroll_bar_cp050_ParamLimits

0xb7ea,	// (0x0004db7f) cell_indicator_pane_ParamLimits

0xb7ea,	// (0x0004db7f) cell_indicator_pane

0xb802,	// (0x0004db97) cell_indicator_pane_g1

0xb80c,	// (0x0004dba1) grid_wheel_folder_pane_ParamLimits

0xb80c,	// (0x0004dba1) grid_wheel_folder_pane

0xb820,	// (0x0004dbb5) list_wheel_apps_pane_ParamLimits

0xb820,	// (0x0004dbb5) list_wheel_apps_pane

0xb833,	// (0x0004dbc8) main_apps_wheel_pane_g1_ParamLimits

0xb833,	// (0x0004dbc8) main_apps_wheel_pane_g1

0xb84f,	// (0x0004dbe4) main_apps_wheel_pane_g2_ParamLimits

0xb84f,	// (0x0004dbe4) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00051e5e) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00051e5e) main_apps_wheel_pane_g

0xb86b,	// (0x0004dc00) main_apps_wheel_pane_t1_ParamLimits

0xb86b,	// (0x0004dc00) main_apps_wheel_pane_t1

0xb894,	// (0x0004dc29) list_wheel_apps_pane_g1

0xb89c,	// (0x0004dc31) list_wheel_apps_pane_g2

0xb8a4,	// (0x0004dc39) list_wheel_apps_pane_g3

0xb8ac,	// (0x0004dc41) list_wheel_apps_pane_g4

0xb8b6,	// (0x0004dc4b) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00051e63) list_wheel_apps_pane_g

0x46b6,	// (0x00046a4b) navi_icon_text_pane

0x91d7,	// (0x0004b56c) aid_fill_nsta

0xb8d7,	// (0x0004dc6c) navi_icon_text_pane_g1

0xb8e3,	// (0x0004dc78) navi_icon_text_pane_t1

0x454c,	// (0x000468e1) list_set_graphic_pane_t1_ParamLimits

0x454c,	// (0x000468e1) list_set_graphic_pane_t1

0xa246,	// (0x0004c5db) popup_midp_note_alarm_window_t6_ParamLimits

0xa246,	// (0x0004c5db) popup_midp_note_alarm_window_t6

0xa258,	// (0x0004c5ed) popup_midp_note_alarm_window_t7_ParamLimits

0xa258,	// (0x0004c5ed) popup_midp_note_alarm_window_t7

0xa26a,	// (0x0004c5ff) popup_midp_note_alarm_window_t8_ParamLimits

0xa26a,	// (0x0004c5ff) popup_midp_note_alarm_window_t8

0xa27c,	// (0x0004c611) popup_midp_note_alarm_window_t9_ParamLimits

0xa27c,	// (0x0004c611) popup_midp_note_alarm_window_t9

0xa28e,	// (0x0004c623) popup_midp_note_alarm_window_t10_ParamLimits

0xa28e,	// (0x0004c623) popup_midp_note_alarm_window_t10

0xa2a0,	// (0x0004c635) popup_midp_note_alarm_window_t11_ParamLimits

0xa2a0,	// (0x0004c635) popup_midp_note_alarm_window_t11

0xa2b2,	// (0x0004c647) scroll_pane_cp17_ParamLimits

0xa2b2,	// (0x0004c647) scroll_pane_cp17

0x7c39,	// (0x00049fce) volume_small_pane_cp_g1

0x8028,	// (0x0004a3bd) volume_small_pane_cp_g2

0x8031,	// (0x0004a3c6) volume_small_pane_cp_g3

0x803a,	// (0x0004a3cf) volume_small_pane_cp_g4

0x8043,	// (0x0004a3d8) volume_small_pane_cp_g5

0x804c,	// (0x0004a3e1) volume_small_pane_cp_g6

0x8055,	// (0x0004a3ea) volume_small_pane_cp_g7

0x805e,	// (0x0004a3f3) volume_small_pane_cp_g8

0x8067,	// (0x0004a3fc) volume_small_pane_cp_g9

0x8070,	// (0x0004a405) volume_small_pane_cp_g10

0x485a,	// (0x00046bef) midp_ticker_pane_g1_ParamLimits

0x4866,	// (0x00046bfb) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00051af2) midp_ticker_pane_g_ParamLimits

0x7264,	// (0x000495f9) midp_ticker_pane_t1_ParamLimits

0x91ed,	// (0x0004b582) aid_fill_nsta_2

0x9acd,	// (0x0004be62) list_form2_midp_pane

0xac36,	// (0x0004cfcb) midp_editing_number_pane_ParamLimits

0xac45,	// (0x0004cfda) midp_ticker_pane_ParamLimits

0xb8f5,	// (0x0004dc8a) form2_midp_field_pane

0xb919,	// (0x0004dcae) scroll_pane_cp51

0xb939,	// (0x0004dcce) form2_midp_button_pane_ParamLimits

0xb939,	// (0x0004dcce) form2_midp_button_pane

0xb94b,	// (0x0004dce0) form2_midp_content_pane_ParamLimits

0xb94b,	// (0x0004dce0) form2_midp_content_pane

0xb965,	// (0x0004dcfa) form2_midp_field_choice_group_pane

0xb96d,	// (0x0004dd02) form2_midp_field_pane_g1

0xb975,	// (0x0004dd0a) form2_midp_field_pane_g2

0xb97d,	// (0x0004dd12) form2_midp_field_pane_g3

0xb985,	// (0x0004dd1a) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00051e88) form2_midp_field_pane_g

0xb98d,	// (0x0004dd22) form2_midp_gauge_slider_pane

0xb995,	// (0x0004dd2a) form2_midp_gauge_wait_pane

0xb99d,	// (0x0004dd32) form2_midp_image_pane_ParamLimits

0xb99d,	// (0x0004dd32) form2_midp_image_pane

0xb9b8,	// (0x0004dd4d) form2_midp_label_pane_ParamLimits

0xb9b8,	// (0x0004dd4d) form2_midp_label_pane

0xb9d7,	// (0x0004dd6c) form2_midp_label_pane_cp_ParamLimits

0xb9d7,	// (0x0004dd6c) form2_midp_label_pane_cp

0xb9f8,	// (0x0004dd8d) form2_midp_string_pane_ParamLimits

0xb9f8,	// (0x0004dd8d) form2_midp_string_pane

0x604b,	// (0x000483e0) form2_midp_text_pane_ParamLimits

0x604b,	// (0x000483e0) form2_midp_text_pane

0xba0a,	// (0x0004dd9f) form2_midp_time_pane

0xba1a,	// (0x0004ddaf) input_focus_pane_cp51_ParamLimits

0xba1a,	// (0x0004ddaf) input_focus_pane_cp51

0xba32,	// (0x0004ddc7) form2_midp_label_pane_t1_ParamLimits

0xba32,	// (0x0004ddc7) form2_midp_label_pane_t1

0x606e,	// (0x00048403) form2_mdip_text_pane_t1_ParamLimits

0x606e,	// (0x00048403) form2_mdip_text_pane_t1

0x608d,	// (0x00048422) form2_midp_time_pane_t1

0xba80,	// (0x0004de15) form2_midp_gauge_slider_pane_t1

0xba92,	// (0x0004de27) form2_midp_gauge_slider_pane_t2

0xbaa4,	// (0x0004de39) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00051e91) form2_midp_gauge_slider_pane_t

0xbab6,	// (0x0004de4b) form2_midp_slider_pane

0xbac2,	// (0x0004de57) form2_midp_gauge_wait_pane_t1

0xbad0,	// (0x0004de65) form2_midp_wait_pane_ParamLimits

0xbad0,	// (0x0004de65) form2_midp_wait_pane

0xbafb,	// (0x0004de90) list_single_2graphic_pane_cp4_ParamLimits

0xbafb,	// (0x0004de90) list_single_2graphic_pane_cp4

0x980e,	// (0x0004bba3) list_single_midp_graphic_pane_cp_ParamLimits

0x980e,	// (0x0004bba3) list_single_midp_graphic_pane_cp

0x072d,	// (0x00042ac2) list_highlight_pane_cp20

0xbb14,	// (0x0004dea9) list_single_2graphic_pane_g1_cp4

0xb0ec,	// (0x0004d481) list_single_2graphic_pane_g2_cp4

0xbb1c,	// (0x0004deb1) list_single_2graphic_pane_t1_cp4

0x0789,	// (0x00042b1e) list_highlight_pane_cp21

0xbb2b,	// (0x0004dec0) list_single_midp_graphic_pane_g4_cp

0xbb3a,	// (0x0004decf) list_single_midp_graphic_pane_t1_cp

0xbb4f,	// (0x0004dee4) form2_mdip_string_pane_t1_ParamLimits

0xbb4f,	// (0x0004dee4) form2_mdip_string_pane_t1

0x072d,	// (0x00042ac2) bg_wml_button_pane_cp2

0x0723,	// (0x00042ab8) form2_midp_image_pane_g1

0x6b2c,	// (0x00048ec1) list_double_large_graphic_pane_g5_ParamLimits

0x6b2c,	// (0x00048ec1) list_double_large_graphic_pane_g5

0x71b2,	// (0x00049547) midp_form_pane_ParamLimits

0x0789,	// (0x00042b1e) main_apps_wheel_pane_ParamLimits

0x7892,	// (0x00049c27) popup_preview_window_ParamLimits

0x7892,	// (0x00049c27) popup_preview_window

0x7a79,	// (0x00049e0e) popup_touch_info_window_ParamLimits

0x7a79,	// (0x00049e0e) popup_touch_info_window

0x7a9b,	// (0x00049e30) popup_touch_menu_window_ParamLimits

0x7a9b,	// (0x00049e30) popup_touch_menu_window

0x0719,	// (0x00042aae) bg_popup_sub_pane_cp6

0xbbeb,	// (0x0004df80) list_touch_menu_pane

0xbbf3,	// (0x0004df88) list_single_touch_menu_pane_ParamLimits

0xbbf3,	// (0x0004df88) list_single_touch_menu_pane

0xbc0b,	// (0x0004dfa0) list_single_touch_menu_pane_t1

0x0789,	// (0x00042b1e) bg_popup_sub_pane_cp7_ParamLimits

0x0789,	// (0x00042b1e) bg_popup_sub_pane_cp7

0xbc19,	// (0x0004dfae) heading_sub_pane

0xbc21,	// (0x0004dfb6) list_touch_info_pane_ParamLimits

0xbc21,	// (0x0004dfb6) list_touch_info_pane

0xbc30,	// (0x0004dfc5) list_single_touch_info_pane_ParamLimits

0xbc30,	// (0x0004dfc5) list_single_touch_info_pane

0xbc42,	// (0x0004dfd7) list_single_touch_info_pane_t1

0xbc50,	// (0x0004dfe5) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00051e9f) list_single_touch_info_pane_t

0x482e,	// (0x00046bc3) bg_popup_heading_pane_cp

0xbc5e,	// (0x0004dff3) heading_sub_pane_t1

0x973f,	// (0x0004bad4) bg_popup_preview_window_pane_cp_ParamLimits

0x973f,	// (0x0004bad4) bg_popup_preview_window_pane_cp

0xbc19,	// (0x0004dfae) heading_preview_pane

0xbc21,	// (0x0004dfb6) list_preview_pane_ParamLimits

0xbc21,	// (0x0004dfb6) list_preview_pane

0xbc6c,	// (0x0004e001) popup_preview_window_g1

0xbc30,	// (0x0004dfc5) list_single_preview_pane_ParamLimits

0xbc30,	// (0x0004dfc5) list_single_preview_pane

0xbc74,	// (0x0004e009) list_single_preview_pane_g1

0xbc7c,	// (0x0004e011) list_single_preview_pane_t1

0xbc42,	// (0x0004dfd7) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00051ea4) list_single_preview_pane_t

0xbc8a,	// (0x0004e01f) bg_popup_heading_pane_cp2_ParamLimits

0xbc8a,	// (0x0004e01f) bg_popup_heading_pane_cp2

0xbca0,	// (0x0004e035) heading_preview_pane_g1

0xbca8,	// (0x0004e03d) heading_preview_pane_t1_ParamLimits

0xbca8,	// (0x0004e03d) heading_preview_pane_t1

0x07dc,	// (0x00042b71) soft_indicator_pane_t1_ParamLimits

0x0d3a,	// (0x000430cf) scroll_pane_ParamLimits

0x1127,	// (0x000434bc) scroll_sc2_left_pane

0x111e,	// (0x000434b3) scroll_sc2_right_pane

0x1146,	// (0x000434db) scroll_bg_pane_g1_ParamLimits

0x115b,	// (0x000434f0) scroll_bg_pane_g2_ParamLimits

0x1173,	// (0x00043508) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00051a7d) scroll_bg_pane_g_ParamLimits

0x1146,	// (0x000434db) scroll_handle_pane_g1_ParamLimits

0x1195,	// (0x0004352a) scroll_handle_pane_g2_ParamLimits

0x1173,	// (0x00043508) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00051a84) scroll_handle_pane_g_ParamLimits

0x74d9,	// (0x0004986e) popup_choice_list_window_ParamLimits

0x74d9,	// (0x0004986e) popup_choice_list_window

0x9615,	// (0x0004b9aa) choice_list_pane

0x9697,	// (0x0004ba2c) cell_toolbar_pane_t1

0x96bf,	// (0x0004ba54) toolbar_button_pane_ParamLimits

0xa77c,	// (0x0004cb11) ai_gene_pane_1_t2_ParamLimits

0xa77c,	// (0x0004cb11) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00051cac) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00051cac) ai_gene_pane_1_t

0xbcc5,	// (0x0004e05a) scroll_sc2_left_pane_g1

0xbcc5,	// (0x0004e05a) scroll_sc2_right_pane_g1

0x919b,	// (0x0004b530) bg_popup_sub_pane_cp10

0xbccf,	// (0x0004e064) list_choice_list_pane

0xaccc,	// (0x0004d061) list_single_choice_list_pane_ParamLimits

0xaccc,	// (0x0004d061) list_single_choice_list_pane

0xbce8,	// (0x0004e07d) list_single_choice_list_pane_g1

0x0f15,	// (0x000432aa) list_single_choice_list_pane_t1_ParamLimits

0x0f15,	// (0x000432aa) list_single_choice_list_pane_t1

0xbcf0,	// (0x0004e085) choice_list_pane_g1

0xbcf8,	// (0x0004e08d) choice_list_pane_t1

0x0719,	// (0x00042aae) input_focus_pane_cp11

0x1093,	// (0x00043428) title_pane_stacon_g2_ParamLimits

0x1093,	// (0x00043428) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00051a63) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00051a63) title_pane_stacon_g

0x482e,	// (0x00046bc3) cursor_press_pane

0x7593,	// (0x00049928) popup_fep_hwr_window_ParamLimits

0x7593,	// (0x00049928) popup_fep_hwr_window

0x761d,	// (0x000499b2) popup_fep_vkb_window_ParamLimits

0x761d,	// (0x000499b2) popup_fep_vkb_window

0xbd06,	// (0x0004e09b) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00051ecd) fep_vkb_side_pane_g_ParamLimits

0x80b2,	// (0x0004a447) fep_hwr_candidate_pane_ParamLimits

0x80b2,	// (0x0004a447) fep_hwr_candidate_pane

0x80dc,	// (0x0004a471) fep_hwr_side_pane_ParamLimits

0x80dc,	// (0x0004a471) fep_hwr_side_pane

0x80fe,	// (0x0004a493) fep_hwr_top_pane_ParamLimits

0x80fe,	// (0x0004a493) fep_hwr_top_pane

0x8116,	// (0x0004a4ab) fep_hwr_write_pane_ParamLimits

0x8116,	// (0x0004a4ab) fep_hwr_write_pane

0xfb38,	// (0x00051ecd) fep_vkb_side_pane_g

0xbd0e,	// (0x0004e0a3) fep_hwr_top_pane_g1

0xbd20,	// (0x0004e0b5) fep_hwr_top_pane_g2

0x8142,	// (0x0004a4d7) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00051ea9) fep_hwr_top_pane_g

0x8157,	// (0x0004a4ec) fep_hwr_top_text_pane

0x128f,	// (0x00043624) fep_hwr_top_text_pane_g1

0xbd56,	// (0x0004e0eb) fep_hwr_top_text_pane_t1

0x8261,	// (0x0004a5f6) fep_hwr_candidate_pane_g1

0xbfa1,	// (0x0004e336) fep_vkb_keypad_pane_g3_ParamLimits

0xbfa1,	// (0x0004e336) fep_vkb_keypad_pane_g3

0xbfcd,	// (0x0004e362) fep_vkb_keypad_pane_g4_ParamLimits

0xbfcd,	// (0x0004e362) fep_vkb_keypad_pane_g4

0xc044,	// (0x0004e3d9) fep_vkb_bottom_pane_g2_ParamLimits

0xc044,	// (0x0004e3d9) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00051ed4) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00051ed4) fep_vkb_bottom_pane_g

0xbcc5,	// (0x0004e05a) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00051ede) cell_vkb_side_pane_g

0xc0cf,	// (0x0004e464) cell_vkb_side_pane_t1

0xc0dd,	// (0x0004e472) cell_vkb_side_pane_t1_copy1

0xbcc5,	// (0x0004e05a) bg_fep_vkb_candidate_pane_g2

0xc221,	// (0x0004e5b6) cell_vkb_candidate_pane_ParamLimits

0xbd64,	// (0x0004e0f9) aid_size_cell_vkb_ParamLimits

0xbd64,	// (0x0004e0f9) aid_size_cell_vkb

0xc221,	// (0x0004e5b6) cell_vkb_candidate_pane

0x827b,	// (0x0004a610) bg_popup_fep_shadow_pane_g1

0xbdf6,	// (0x0004e18b) fep_vkb_bottom_pane_ParamLimits

0xbdf6,	// (0x0004e18b) fep_vkb_bottom_pane

0xbe33,	// (0x0004e1c8) fep_vkb_candidate_pane_ParamLimits

0xbe33,	// (0x0004e1c8) fep_vkb_candidate_pane

0xbe4f,	// (0x0004e1e4) fep_vkb_keypad_pane_ParamLimits

0xbe4f,	// (0x0004e1e4) fep_vkb_keypad_pane

0xbe82,	// (0x0004e217) fep_vkb_side_pane_ParamLimits

0xbe82,	// (0x0004e217) fep_vkb_side_pane

0xbebe,	// (0x0004e253) fep_vkb_top_pane_ParamLimits

0xbebe,	// (0x0004e253) fep_vkb_top_pane

0xbefa,	// (0x0004e28f) fep_vkb_top_pane_g1_ParamLimits

0xbefa,	// (0x0004e28f) fep_vkb_top_pane_g1

0xbf09,	// (0x0004e29e) fep_vkb_top_pane_g2_ParamLimits

0xbf09,	// (0x0004e29e) fep_vkb_top_pane_g2

0xbf18,	// (0x0004e2ad) fep_vkb_top_pane_g3_ParamLimits

0xbf18,	// (0x0004e2ad) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00051ec4) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00051ec4) fep_vkb_top_pane_g

0xbf36,	// (0x0004e2cb) fep_vkb_top_text_pane_ParamLimits

0xbf36,	// (0x0004e2cb) fep_vkb_top_text_pane

0xbf47,	// (0x0004e2dc) fep_vkb_side_pane_g1_ParamLimits

0xbf47,	// (0x0004e2dc) fep_vkb_side_pane_g1

0xbf90,	// (0x0004e325) grid_vkb_side_pane_ParamLimits

0xbf90,	// (0x0004e325) grid_vkb_side_pane

0x8283,	// (0x0004a618) bg_popup_fep_shadow_pane_g2

0x828c,	// (0x0004a621) bg_popup_fep_shadow_pane_g3

0x8294,	// (0x0004a629) bg_popup_fep_shadow_pane_g4

0x829d,	// (0x0004a632) bg_popup_fep_shadow_pane_g5

0x82a7,	// (0x0004a63c) bg_popup_fep_shadow_pane_g6

0x82af,	// (0x0004a644) bg_popup_fep_shadow_pane_g7

0x0e3f,	// (0x000431d4) bg_popup_fep_shadow_pane_g8

0xbfef,	// (0x0004e384) grid_vkb_keypad_number_pane_ParamLimits

0xbfef,	// (0x0004e384) grid_vkb_keypad_number_pane

0xc003,	// (0x0004e398) grid_vkb_keypad_pane_ParamLimits

0xc003,	// (0x0004e398) grid_vkb_keypad_pane

0xc029,	// (0x0004e3be) fep_vkb_bottom_pane_g1_ParamLimits

0xc029,	// (0x0004e3be) fep_vkb_bottom_pane_g1

0xc052,	// (0x0004e3e7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc052,	// (0x0004e3e7) grid_vkb_keypad_bottom_left_pane

0xc067,	// (0x0004e3fc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc067,	// (0x0004e3fc) grid_vkb_keypad_bottom_right_pane

0xc07c,	// (0x0004e411) fep_vkb_top_text_pane_g1

0xc097,	// (0x0004e42c) fep_vkb_top_text_pane_t1

0xc0ac,	// (0x0004e441) cell_vkb_side_pane_ParamLimits

0xc0ac,	// (0x0004e441) cell_vkb_side_pane

0xbcc5,	// (0x0004e05a) cell_vkb_side_pane_g1

0xc0eb,	// (0x0004e480) cell_vkb_keypad_pane_ParamLimits

0xc0eb,	// (0x0004e480) cell_vkb_keypad_pane

0xc178,	// (0x0004e50d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00051ef1) bg_popup_fep_shadow_pane_g

0xbcc5,	// (0x0004e05a) cell_hwr_side_pane_g1

0xbcc5,	// (0x0004e05a) cell_hwr_side_pane_g2

0xc182,	// (0x0004e517) cell_vkb_keypad_pane_t1

0xc190,	// (0x0004e525) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc190,	// (0x0004e525) cell_vkb_keypad_bottom_left_pane

0xc1ad,	// (0x0004e542) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ad,	// (0x0004e542) cell_vkb_keypad_bottom_right_pane

0xbcc5,	// (0x0004e05a) cell_vkb_keypad_bottom_left_pane_g1

0xbcc5,	// (0x0004e05a) cell_vkb_keypad_bottom_right_pane_g1

0xc1e6,	// (0x0004e57b) cell_vkb_keypad_number_pane_ParamLimits

0xc1e6,	// (0x0004e57b) cell_vkb_keypad_number_pane

0xc205,	// (0x0004e59a) cell_vkb_keypad_number_pane_g1

0xc20f,	// (0x0004e5a4) cell_vkb_keypad_number_pane_g2

0xc218,	// (0x0004e5ad) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00051ee3) cell_vkb_keypad_number_pane_g

0xc182,	// (0x0004e517) cell_vkb_keypad_number_pane_t1

0xc242,	// (0x0004e5d7) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00051ede) cell_hwr_side_pane_g

0xc25b,	// (0x0004e5f0) cell_hwr_side_pane_t1

0x82c1,	// (0x0004a656) cell_hwr_side_pane_t1_copy1

0xbf28,	// (0x0004e2bd) cell_hwr_candidate_pane_g1

0x82cf,	// (0x0004a664) cell_hwr_candidate_pane_t1

0xbcc5,	// (0x0004e05a) cell_vkb_candidate_pane_g2

0xc2e1,	// (0x0004e676) cell_vkb_candidate_pane_t1

0x8079,	// (0x0004a40e) bg_popup_fep_shadow_pane_ParamLimits

0x8079,	// (0x0004a40e) bg_popup_fep_shadow_pane

0x248b,	// (0x00044820) bg_fep_hwr_top_pane_g4

0xbd32,	// (0x0004e0c7) bg_hwr_side_pane_g1_ParamLimits

0xbd32,	// (0x0004e0c7) bg_hwr_side_pane_g1

0x8195,	// (0x0004a52a) cell_hwr_side_pane_ParamLimits

0x8195,	// (0x0004a52a) cell_hwr_side_pane

0x81d2,	// (0x0004a567) fep_hwr_write_pane_g1_ParamLimits

0x81d2,	// (0x0004a567) fep_hwr_write_pane_g1

0x81df,	// (0x0004a574) fep_hwr_write_pane_g2_ParamLimits

0x81df,	// (0x0004a574) fep_hwr_write_pane_g2

0x81ec,	// (0x0004a581) fep_hwr_write_pane_g3_ParamLimits

0x81ec,	// (0x0004a581) fep_hwr_write_pane_g3

0x81fa,	// (0x0004a58f) fep_hwr_write_pane_g4_ParamLimits

0x81fa,	// (0x0004a58f) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00051eb0) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00051eb0) fep_hwr_write_pane_g

0x248b,	// (0x00044820) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x248b,	// (0x00044820) bg_fep_hwr_candidate_pane_g2

0x820f,	// (0x0004a5a4) cell_hwr_candidate_pane_ParamLimits

0x820f,	// (0x0004a5a4) cell_hwr_candidate_pane

0x8261,	// (0x0004a5f6) fep_hwr_candidate_pane_g1_ParamLimits

0xbd92,	// (0x0004e127) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd92,	// (0x0004e127) bg_popup_fep_shadow_pane_cp2

0xbf28,	// (0x0004e2bd) fep_vkb_top_pane_g4_ParamLimits

0xbf28,	// (0x0004e2bd) fep_vkb_top_pane_g4

0xbf6e,	// (0x0004e303) fep_vkb_side_pane_g2_ParamLimits

0xbf6e,	// (0x0004e303) fep_vkb_side_pane_g2

0x580c,	// (0x00047ba1) list_setting_pane_t4_ParamLimits

0x580c,	// (0x00047ba1) list_setting_pane_t4

0x58a8,	// (0x00047c3d) list_setting_number_pane_t5_ParamLimits

0x58a8,	// (0x00047c3d) list_setting_number_pane_t5

0x6ec7,	// (0x0004925c) list_double_heading_pane_cp2_ParamLimits

0x6ec7,	// (0x0004925c) list_double_heading_pane_cp2

0xc2ef,	// (0x0004e684) list_double_heading_pane_g1_cp2_ParamLimits

0xc2ef,	// (0x0004e684) list_double_heading_pane_g1_cp2

0xc2fb,	// (0x0004e690) list_double_heading_pane_g2_cp2_ParamLimits

0xc2fb,	// (0x0004e690) list_double_heading_pane_g2_cp2

0xc30f,	// (0x0004e6a4) list_double_heading_pane_t1_cp2_ParamLimits

0xc30f,	// (0x0004e6a4) list_double_heading_pane_t1_cp2

0xc325,	// (0x0004e6ba) list_double_heading_pane_t2_cp2_ParamLimits

0xc325,	// (0x0004e6ba) list_double_heading_pane_t2_cp2

0xe19e,	// (0x00050533) aid_value_unit2

0x6614,	// (0x000489a9) popup_preview_fixed_window

0x08bc,	// (0x00042c51) bg_popup_preview_window_pane_cp02

0xc337,	// (0x0004e6cc) list_preview_fixed_pane

0xc37d,	// (0x0004e712) list_empty_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_empty_pane_fp

0xc37d,	// (0x0004e712) list_single_cale_day_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_cale_day_pane_fp

0xc37d,	// (0x0004e712) list_single_graphic_heading_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_graphic_heading_pane_fp

0xc37d,	// (0x0004e712) list_single_graphic_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_graphic_pane_fp

0xc37d,	// (0x0004e712) list_single_heading_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_heading_pane_fp

0xc37d,	// (0x0004e712) list_single_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_pane_fp

0xc396,	// (0x0004e72b) list_single_pane_fp_g1_ParamLimits

0xc396,	// (0x0004e72b) list_single_pane_fp_g1

0xc2ef,	// (0x0004e684) list_single_pane_fp_g2_ParamLimits

0xc2ef,	// (0x0004e684) list_single_pane_fp_g2

0xc2fb,	// (0x0004e690) list_single_pane_fp_g3_ParamLimits

0xc2fb,	// (0x0004e690) list_single_pane_fp_g3

0xc3a2,	// (0x0004e737) list_single_pane_fp_g4_ParamLimits

0xc3a2,	// (0x0004e737) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00051f12) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00051f12) list_single_pane_fp_g

0x60a0,	// (0x00048435) list_single_pane_fp_t1_ParamLimits

0x60a0,	// (0x00048435) list_single_pane_fp_t1

0x60b7,	// (0x0004844c) list_single_graphic_pane_fp_g1_ParamLimits

0x60b7,	// (0x0004844c) list_single_graphic_pane_fp_g1

0xc396,	// (0x0004e72b) list_single_graphic_pane_fp_g2_ParamLimits

0xc396,	// (0x0004e72b) list_single_graphic_pane_fp_g2

0xc2ef,	// (0x0004e684) list_single_graphic_pane_fp_g3_ParamLimits

0xc2ef,	// (0x0004e684) list_single_graphic_pane_fp_g3

0xc2fb,	// (0x0004e690) list_single_graphic_pane_fp_g4_ParamLimits

0xc2fb,	// (0x0004e690) list_single_graphic_pane_fp_g4

0xc3a2,	// (0x0004e737) list_single_graphic_pane_fp_g5_ParamLimits

0xc3a2,	// (0x0004e737) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00051f1b) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00051f1b) list_single_graphic_pane_fp_g

0x60c3,	// (0x00048458) list_single_graphic_pane_fp_t1_ParamLimits

0x60c3,	// (0x00048458) list_single_graphic_pane_fp_t1

0x60b7,	// (0x0004844c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x60b7,	// (0x0004844c) list_single_graphic_heading_pane_fp_g1

0xc396,	// (0x0004e72b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc396,	// (0x0004e72b) list_single_graphic_heading_pane_fp_g2

0xc2ef,	// (0x0004e684) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc2ef,	// (0x0004e684) list_single_graphic_heading_pane_fp_g3

0xc2fb,	// (0x0004e690) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc2fb,	// (0x0004e690) list_single_graphic_heading_pane_fp_g4

0xc3a2,	// (0x0004e737) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc3a2,	// (0x0004e737) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00051f1b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00051f1b) list_single_graphic_heading_pane_fp_g

0x60d9,	// (0x0004846e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x60d9,	// (0x0004846e) list_single_graphic_heading_pane_fp_t1

0x60ef,	// (0x00048484) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x60ef,	// (0x00048484) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00051f26) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00051f26) list_single_graphic_heading_pane_fp_t

0x6101,	// (0x00048496) list_single_cale_day_pane_fp_g1_ParamLimits

0x6101,	// (0x00048496) list_single_cale_day_pane_fp_g1

0xc3ae,	// (0x0004e743) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3ae,	// (0x0004e743) list_single_cale_day_pane_fp_g2

0x82ed,	// (0x0004a682) list_single_cale_day_pane_fp_g3_ParamLimits

0x82ed,	// (0x0004a682) list_single_cale_day_pane_fp_g3

0x8315,	// (0x0004a6aa) list_single_cale_day_pane_fp_g4_ParamLimits

0x8315,	// (0x0004a6aa) list_single_cale_day_pane_fp_g4

0x8339,	// (0x0004a6ce) list_single_cale_day_pane_fp_g5_ParamLimits

0x8339,	// (0x0004a6ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00051f2b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00051f2b) list_single_cale_day_pane_fp_g

0x6139,	// (0x000484ce) list_single_cale_day_pane_fp_t1_ParamLimits

0x6139,	// (0x000484ce) list_single_cale_day_pane_fp_t1

0x615f,	// (0x000484f4) list_single_cale_day_pane_fp_t2_ParamLimits

0x615f,	// (0x000484f4) list_single_cale_day_pane_fp_t2

0x6178,	// (0x0004850d) list_single_cale_day_pane_fp_t3_ParamLimits

0x6178,	// (0x0004850d) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00051f36) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00051f36) list_single_cale_day_pane_fp_t

0xc396,	// (0x0004e72b) list_empty_pane_fp_g1_ParamLimits

0xc396,	// (0x0004e72b) list_empty_pane_fp_g1

0x6191,	// (0x00048526) list_empty_pane_fp_t1

0x619f,	// (0x00048534) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00051f3d) list_empty_pane_fp_t

0xc396,	// (0x0004e72b) list_single_heading_pane_fp_g1_ParamLimits

0xc396,	// (0x0004e72b) list_single_heading_pane_fp_g1

0xc2ef,	// (0x0004e684) list_single_heading_pane_fp_g2_ParamLimits

0xc2ef,	// (0x0004e684) list_single_heading_pane_fp_g2

0xc2fb,	// (0x0004e690) list_single_heading_pane_fp_g3_ParamLimits

0xc2fb,	// (0x0004e690) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00051f42) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00051f42) list_single_heading_pane_fp_g

0x61ad,	// (0x00048542) list_single_heading_pane_fp_t1_ParamLimits

0x61ad,	// (0x00048542) list_single_heading_pane_fp_t1

0x61bf,	// (0x00048554) list_single_heading_pane_fp_t2_ParamLimits

0x61bf,	// (0x00048554) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00051f49) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00051f49) list_single_heading_pane_fp_t

0x0f2a,	// (0x000432bf) aid_size_cell_fast

0x089f,	// (0x00042c34) soft_indicator_pane_cp1_t1

0x0f67,	// (0x000432fc) cell_app_pane_cp2_ParamLimits

0x0f67,	// (0x000432fc) cell_app_pane_cp2

0x809b,	// (0x0004a430) fep_hwr_candidate_drop_down_list_pane

0x2499,	// (0x0004482e) fep_hwr_candidate_pane_g3_ParamLimits

0x2499,	// (0x0004482e) fep_hwr_candidate_pane_g3

0x24a6,	// (0x0004483b) fep_hwr_candidate_pane_g4_ParamLimits

0x24a6,	// (0x0004483b) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00051ebd) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00051ebd) fep_hwr_candidate_pane_g

0xbe22,	// (0x0004e1b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe22,	// (0x0004e1b7) fep_vkb_candidate_drop_down_list_pane

0xc24a,	// (0x0004e5df) fep_vkb_candidate_pane_g3

0xc252,	// (0x0004e5e7) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00051eea) fep_vkb_candidate_pane_g

0xbf28,	// (0x0004e2bd) cell_hwr_candidate_pane_g1_ParamLimits

0xc269,	// (0x0004e5fe) cell_hwr_candidate_pane_g3_ParamLimits

0xc269,	// (0x0004e5fe) cell_hwr_candidate_pane_g3

0xc28a,	// (0x0004e61f) cell_hwr_candidate_pane_g4_ParamLimits

0xc28a,	// (0x0004e61f) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00051f04) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00051f04) cell_hwr_candidate_pane_g

0xc2ab,	// (0x0004e640) cell_vkb_candidate_pane_g3_ParamLimits

0xc2ab,	// (0x0004e640) cell_vkb_candidate_pane_g3

0xc2c6,	// (0x0004e65b) cell_vkb_candidate_pane_g4_ParamLimits

0xc2c6,	// (0x0004e65b) cell_vkb_candidate_pane_g4

0xc3ba,	// (0x0004e74f) cell_app_pane_cp2_g1_ParamLimits

0xc3ba,	// (0x0004e74f) cell_app_pane_cp2_g1

0xc3d8,	// (0x0004e76d) cell_app_pane_cp2_g2_ParamLimits

0xc3d8,	// (0x0004e76d) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00051f4e) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00051f4e) cell_app_pane_cp2_g

0xc3e4,	// (0x0004e779) cell_app_pane_cp2_t1_ParamLimits

0xc3e4,	// (0x0004e779) cell_app_pane_cp2_t1

0x0dc7,	// (0x0004315c) grid_highlight_pane_cp1_ParamLimits

0x0dc7,	// (0x0004315c) grid_highlight_pane_cp1

0x835d,	// (0x0004a6f2) cell_hwr_candidate_pane_cp1_ParamLimits

0x835d,	// (0x0004a6f2) cell_hwr_candidate_pane_cp1

0xbf28,	// (0x0004e2bd) fep_hwr_candidate_drop_down_list_pane_g1

0xc3f6,	// (0x0004e78b) fep_hwr_candidate_drop_down_list_pane_g2

0xc403,	// (0x0004e798) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00051f53) fep_hwr_candidate_drop_down_list_pane_g

0x8381,	// (0x0004a716) fep_hwr_candidate_drop_down_list_scroll_pane

0x838a,	// (0x0004a71f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x838a,	// (0x0004a71f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8397,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8397,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x83a4,	// (0x0004a739) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x83a4,	// (0x0004a739) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc2ab,	// (0x0004e640) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2ab,	// (0x0004e640) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc2c6,	// (0x0004e65b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2c6,	// (0x0004e65b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x83b1,	// (0x0004a746) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x83b1,	// (0x0004a746) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x83cc,	// (0x0004a761) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x83cc,	// (0x0004a761) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x83e7,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x83e7,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00051f5a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00051f5a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc410,	// (0x0004e7a5) cell_vkb_candidate_pane_cp1_ParamLimits

0xc410,	// (0x0004e7a5) cell_vkb_candidate_pane_cp1

0xbf28,	// (0x0004e2bd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) fep_vkb_candidate_drop_down_list_pane_g1

0xc3f6,	// (0x0004e78b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc3f6,	// (0x0004e78b) fep_vkb_candidate_drop_down_list_pane_g2

0xc403,	// (0x0004e798) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc403,	// (0x0004e798) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00051f53) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00051f53) fep_vkb_candidate_drop_down_list_pane_g

0xc436,	// (0x0004e7cb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc436,	// (0x0004e7cb) fep_vkb_candidate_drop_down_list_scroll_pane

0xc443,	// (0x0004e7d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc443,	// (0x0004e7d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc450,	// (0x0004e7e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc450,	// (0x0004e7e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc45c,	// (0x0004e7f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc45c,	// (0x0004e7f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc269,	// (0x0004e5fe) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc269,	// (0x0004e5fe) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc28a,	// (0x0004e61f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc28a,	// (0x0004e61f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc468,	// (0x0004e7fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc468,	// (0x0004e7fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc489,	// (0x0004e81e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc489,	// (0x0004e81e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc4aa,	// (0x0004e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc4aa,	// (0x0004e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00051f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00051f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6734,	// (0x00048ac9) title_pane_g1_ParamLimits

0x6741,	// (0x00048ad6) title_pane_g2_ParamLimits

0xf54e,	// (0x000518e3) title_pane_g_ParamLimits

0x1287,	// (0x0004361c) aid_call2_pane

0x127f,	// (0x00043614) aid_call_pane

0x128f,	// (0x00043624) popup_clock_analogue_window_g1

0x128f,	// (0x00043624) popup_clock_analogue_window_g2

0x6ea8,	// (0x0004923d) popup_clock_analogue_window_g3

0x6eb1,	// (0x00049246) popup_clock_analogue_window_g4

0x0723,	// (0x00042ab8) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00051a92) popup_clock_analogue_window_g

0x6eb9,	// (0x0004924e) popup_clock_analogue_window_t1

0x6efa,	// (0x0004928f) clock_digital_number_pane_ParamLimits

0x6efa,	// (0x0004928f) clock_digital_number_pane

0x6f06,	// (0x0004929b) clock_digital_number_pane_cp02_ParamLimits

0x6f06,	// (0x0004929b) clock_digital_number_pane_cp02

0x6f12,	// (0x000492a7) clock_digital_number_pane_cp03_ParamLimits

0x6f12,	// (0x000492a7) clock_digital_number_pane_cp03

0x6f1e,	// (0x000492b3) clock_digital_number_pane_cp04_ParamLimits

0x6f1e,	// (0x000492b3) clock_digital_number_pane_cp04

0x6f2a,	// (0x000492bf) clock_digital_separator_pane_ParamLimits

0x6f2a,	// (0x000492bf) clock_digital_separator_pane

0x6f36,	// (0x000492cb) popup_clock_digital_window_t1_ParamLimits

0x6f36,	// (0x000492cb) popup_clock_digital_window_t1

0x0723,	// (0x00042ab8) clock_digital_number_pane_g1

0x0723,	// (0x00042ab8) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00051a9d) clock_digital_number_pane_g

0x0723,	// (0x00042ab8) clock_digital_separator_pane_g1

0x0723,	// (0x00042ab8) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00051a9d) clock_digital_separator_pane_g

0x91d7,	// (0x0004b56c) aid_fill_nsta_ParamLimits

0x931d,	// (0x0004b6b2) indicator_nsta_pane_ParamLimits

0x94ae,	// (0x0004b843) popup_clock_analogue_window

0x94ae,	// (0x0004b843) popup_clock_digital_window

0x0789,	// (0x00042b1e) grid_indicator_nsta_pane_ParamLimits

0xb72f,	// (0x0004dac4) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00051e3d) clock_nsta_pane_t

0x6e11,	// (0x000491a6) aid_size_max_handle

0x6e1b,	// (0x000491b0) aid_size_min_handle

0x482e,	// (0x00046bc3) editor_scroll_pane

0xc4c5,	// (0x0004e85a) ex_editor_pane

0x0ef0,	// (0x00043285) scroll_pane_cp13

0x0d66,	// (0x000430fb) scroll_pane_cp14

0x12be,	// (0x00043653) scroll_pane_cp36

0x6edd,	// (0x00049272) list_single_graphic_hl_pane_cp2_ParamLimits

0x6edd,	// (0x00049272) list_single_graphic_hl_pane_cp2

0xac67,	// (0x0004cffc) list_single_graphic_hl_pane_ParamLimits

0xac67,	// (0x0004cffc) list_single_graphic_hl_pane

0x61d5,	// (0x0004856a) aid_size_min_hl_cp1

0xc4cd,	// (0x0004e862) list_highlight_pane_cp34_ParamLimits

0xc4cd,	// (0x0004e862) list_highlight_pane_cp34

0xc4de,	// (0x0004e873) list_single_graphic_hl_pane_g1_ParamLimits

0xc4de,	// (0x0004e873) list_single_graphic_hl_pane_g1

0x61de,	// (0x00048573) list_single_graphic_hl_pane_g2_ParamLimits

0x61de,	// (0x00048573) list_single_graphic_hl_pane_g2

0x61de,	// (0x00048573) list_single_graphic_hl_pane_g3_ParamLimits

0x61de,	// (0x00048573) list_single_graphic_hl_pane_g3

0x7f8a,	// (0x0004a31f) list_single_graphic_hl_pane_g4_ParamLimits

0x7f8a,	// (0x0004a31f) list_single_graphic_hl_pane_g4

0x8402,	// (0x0004a797) list_single_graphic_hl_pane_g5_ParamLimits

0x8402,	// (0x0004a797) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00051f7c) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00051f7c) list_single_graphic_hl_pane_g

0x61ea,	// (0x0004857f) list_single_graphic_hl_pane_t1_ParamLimits

0x61ea,	// (0x0004857f) list_single_graphic_hl_pane_t1

0xc4eb,	// (0x0004e880) aid_size_min_hl_cp2

0xc4f4,	// (0x0004e889) list_highlight_pane_cp34_cp2_ParamLimits

0xc4f4,	// (0x0004e889) list_highlight_pane_cp34_cp2

0xc4de,	// (0x0004e873) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc4de,	// (0x0004e873) list_single_graphic_hl_pane_g1_cp2

0xc501,	// (0x0004e896) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc501,	// (0x0004e896) list_single_graphic_hl_pane_g2_cp2

0xc50d,	// (0x0004e8a2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc50d,	// (0x0004e8a2) list_single_graphic_hl_pane_g3_cp2

0xc51b,	// (0x0004e8b0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc51b,	// (0x0004e8b0) list_single_graphic_hl_pane_g4_cp2

0xc527,	// (0x0004e8bc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc527,	// (0x0004e8bc) list_single_graphic_hl_pane_g5_cp2

0x738b,	// (0x00049720) control_pane_g4_ParamLimits

0x738b,	// (0x00049720) control_pane_g4

0x919b,	// (0x0004b530) bg_popup_sub_pane_cp10_ParamLimits

0xbccf,	// (0x0004e064) list_choice_list_pane_ParamLimits

0xbcde,	// (0x0004e073) scroll_pane_cp23

0x08bc,	// (0x00042c51) bg_popup_preview_window_pane_cp02_ParamLimits

0xc337,	// (0x0004e6cc) list_preview_fixed_pane_ParamLimits

0xc34d,	// (0x0004e6e2) list_preview_fixed_pane_cp_ParamLimits

0xc34d,	// (0x0004e6e2) list_preview_fixed_pane_cp

0xc359,	// (0x0004e6ee) popup_preview_fixed_window_g1_ParamLimits

0xc359,	// (0x0004e6ee) popup_preview_fixed_window_g1

0xc365,	// (0x0004e6fa) popup_preview_fixed_window_g2_ParamLimits

0xc365,	// (0x0004e6fa) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00051f0b) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00051f0b) popup_preview_fixed_window_g

0x6ce7,	// (0x0004907c) aid_navi_side_left_pane_ParamLimits

0x6cfc,	// (0x00049091) aid_navi_side_right_pane_ParamLimits

0x6d14,	// (0x000490a9) navi_icon_pane_stacon_ParamLimits

0x6d28,	// (0x000490bd) navi_navi_pane_stacon_ParamLimits

0x6d14,	// (0x000490a9) navi_text_pane_stacon_ParamLimits

0x0719,	// (0x00042aae) main_text_info_pane

0xc551,	// (0x0004e8e6) listscroll_text_info_pane

0xc559,	// (0x0004e8ee) list_text_info_pane_ParamLimits

0xc559,	// (0x0004e8ee) list_text_info_pane

0xc568,	// (0x0004e8fd) scroll_pane_cp24_ParamLimits

0xc568,	// (0x0004e8fd) scroll_pane_cp24

0xc586,	// (0x0004e91b) list_text_info_pane_t1_ParamLimits

0xc586,	// (0x0004e91b) list_text_info_pane_t1

0x74fb,	// (0x00049890) popup_fast_swap2_window_ParamLimits

0x74fb,	// (0x00049890) popup_fast_swap2_window

0xc5ab,	// (0x0004e940) aid_size_cell_fast2

0x0719,	// (0x00042aae) bg_popup_window_pane_cp17

0x9b01,	// (0x0004be96) heading_pane_cp2

0x0aeb,	// (0x00042e80) listscroll_fast2_pane

0xc5b5,	// (0x0004e94a) grid_fast2_pane

0xc5bf,	// (0x0004e954) listscroll_fast2_pane_g1

0xc5c9,	// (0x0004e95e) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00051f87) listscroll_fast2_pane_g

0x0ef0,	// (0x00043285) scroll_pane_cp26

0xc5d3,	// (0x0004e968) cell_fast2_pane_ParamLimits

0xc5d3,	// (0x0004e968) cell_fast2_pane

0xc5ea,	// (0x0004e97f) cell_fast2_pane_g1

0xc5f3,	// (0x0004e988) cell_fast2_pane_g2

0xc5fc,	// (0x0004e991) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00051f8c) cell_fast2_pane_g

0x0b2d,	// (0x00042ec2) grid_highlight_pane_cp9

0x0b42,	// (0x00042ed7) main_eswt_pane_ParamLimits

0x0b42,	// (0x00042ed7) main_eswt_pane

0xc57d,	// (0x0004e912) list_single_text_info_pane

0xc604,	// (0x0004e999) eswt_ctrl_button_pane

0xc604,	// (0x0004e999) eswt_ctrl_canvas_pane

0xc60c,	// (0x0004e9a1) eswt_ctrl_combo_pane

0xc604,	// (0x0004e999) eswt_ctrl_default_pane

0xc604,	// (0x0004e999) eswt_ctrl_label_pane

0xc614,	// (0x0004e9a9) eswt_ctrl_wait_pane

0xc61c,	// (0x0004e9b1) eswt_shell_pane

0x0719,	// (0x00042aae) listscroll_eswt_app_pane

0xc63c,	// (0x0004e9d1) popup_eswt_tasktip_window_ParamLimits

0xc63c,	// (0x0004e9d1) popup_eswt_tasktip_window

0x973f,	// (0x0004bad4) bg_popup_window_pane_cp18

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_ParamLimits

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_ParamLimits

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_ParamLimits

0xc667,	// (0x0004e9fc) eswt_control_pane_g3

0xc674,	// (0x0004ea09) eswt_control_pane_g4_ParamLimits

0xc674,	// (0x0004ea09) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00051f93) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00051f93) eswt_control_pane_g

0x0dc7,	// (0x0004315c) bg_button_pane_ParamLimits

0x0dc7,	// (0x0004315c) bg_button_pane

0x0b42,	// (0x00042ed7) common_borders_pane_copy2_ParamLimits

0x0b42,	// (0x00042ed7) common_borders_pane_copy2

0xc681,	// (0x0004ea16) control_button_pane_g1_ParamLimits

0xc681,	// (0x0004ea16) control_button_pane_g1

0xc68d,	// (0x0004ea22) control_button_pane_g2_ParamLimits

0xc68d,	// (0x0004ea22) control_button_pane_g2

0xc699,	// (0x0004ea2e) control_button_pane_g3_ParamLimits

0xc699,	// (0x0004ea2e) control_button_pane_g3

0x0002,

0xfc07,	// (0x00051f9c) control_button_pane_g_ParamLimits

0xfc07,	// (0x00051f9c) control_button_pane_g

0xc6ad,	// (0x0004ea42) control_button_pane_t1

0xc6bb,	// (0x0004ea50) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00051fa3) control_button_pane_t

0x96cb,	// (0x0004ba60) bg_button_pane_g1

0x96d3,	// (0x0004ba68) bg_button_pane_g2

0x96db,	// (0x0004ba70) bg_button_pane_g3

0x96e3,	// (0x0004ba78) bg_button_pane_g4

0x96eb,	// (0x0004ba80) bg_button_pane_g5

0x96f3,	// (0x0004ba88) bg_button_pane_g6

0x96fb,	// (0x0004ba90) bg_button_pane_g7

0x9703,	// (0x0004ba98) bg_button_pane_g8

0x970b,	// (0x0004baa0) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00051c00) bg_button_pane_g

0xbc8a,	// (0x0004e01f) common_borders_pane_ParamLimits

0xbc8a,	// (0x0004e01f) common_borders_pane

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy1_ParamLimits

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy1

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy1_ParamLimits

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy1

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy1_ParamLimits

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy1

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy1_ParamLimits

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy1

0xbcc5,	// (0x0004e05a) bg_eswt_ctrl_canvas_pane_g1

0xbc8a,	// (0x0004e01f) common_borders_pane_cp2_ParamLimits

0xbc8a,	// (0x0004e01f) common_borders_pane_cp2

0xbc8a,	// (0x0004e01f) common_borders_pane_cp3_ParamLimits

0xbc8a,	// (0x0004e01f) common_borders_pane_cp3

0xc6c9,	// (0x0004ea5e) separator_horizontal_pane

0xc6d1,	// (0x0004ea66) separator_vertical_pane

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy2_ParamLimits

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy2

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy2_ParamLimits

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy2

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy2_ParamLimits

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy2

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy2_ParamLimits

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy2

0x0719,	// (0x00042aae) common_borders_pane_cp4

0xc6da,	// (0x0004ea6f) separator_horizontal_pane_g1

0xc6e3,	// (0x0004ea78) separator_horizontal_pane_g2

0xc6ec,	// (0x0004ea81) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00051fa8) separator_horizontal_pane_g

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy3_ParamLimits

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy3

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy3_ParamLimits

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy3

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy3_ParamLimits

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy3

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy3_ParamLimits

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy3

0x0719,	// (0x00042aae) common_borders_pane_cp5

0xc6f5,	// (0x0004ea8a) separator_vertical_pane_g1

0xc6fe,	// (0x0004ea93) separator_vertical_pane_g2

0xc707,	// (0x0004ea9c) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00051faf) separator_vertical_pane_g

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy4_ParamLimits

0xc64d,	// (0x0004e9e2) eswt_control_pane_g1_copy4

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy4_ParamLimits

0xc65a,	// (0x0004e9ef) eswt_control_pane_g2_copy4

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy4_ParamLimits

0xc667,	// (0x0004e9fc) eswt_control_pane_g3_copy4

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy4_ParamLimits

0xc674,	// (0x0004ea09) eswt_control_pane_g4_copy4

0xc710,	// (0x0004eaa5) eswt_ctrl_combo_button_pane

0xc718,	// (0x0004eaad) eswt_ctrl_input_pane

0xc720,	// (0x0004eab5) popup_choice_list_window_cp70

0xc728,	// (0x0004eabd) eswt_ctrl_input_pane_t1

0x0719,	// (0x00042aae) input_focus_pane_cp70

0xbc8a,	// (0x0004e01f) bg_button_pane_cp70_ParamLimits

0xbc8a,	// (0x0004e01f) bg_button_pane_cp70

0xc736,	// (0x0004eacb) eswt_ctrl_combo_button_pane_g1

0xc73e,	// (0x0004ead3) wait_bar_pane_cp70

0x973f,	// (0x0004bad4) bg_popup_window_pane_cp70_ParamLimits

0x973f,	// (0x0004bad4) bg_popup_window_pane_cp70

0xc746,	// (0x0004eadb) popup_eswt_tasktip_window_t1

0xc75c,	// (0x0004eaf1) wait_bar_pane_cp71_ParamLimits

0xc75c,	// (0x0004eaf1) wait_bar_pane_cp71

0xc768,	// (0x0004eafd) grid_eswt_app_pane

0x111e,	// (0x000434b3) scroll_pane_cp70

0xc771,	// (0x0004eb06) cell_eswt_app_pane_ParamLimits

0xc771,	// (0x0004eb06) cell_eswt_app_pane

0xc7a3,	// (0x0004eb38) cell_eswt_app_pane_g1_ParamLimits

0xc7a3,	// (0x0004eb38) cell_eswt_app_pane_g1

0xc7d2,	// (0x0004eb67) cell_eswt_app_pane_g2_ParamLimits

0xc7d2,	// (0x0004eb67) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00051fb6) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00051fb6) cell_eswt_app_pane_g

0xc7fb,	// (0x0004eb90) cell_eswt_app_pane_t1_ParamLimits

0xc7fb,	// (0x0004eb90) cell_eswt_app_pane_t1

0xc82d,	// (0x0004ebc2) grid_highlight_pane_cp70_ParamLimits

0xc82d,	// (0x0004ebc2) grid_highlight_pane_cp70

0x470b,	// (0x00046aa0) set_content_pane_g1

0x911a,	// (0x0004b4af) status_small_volume_pane

0x8416,	// (0x0004a7ab) status_small_volume_pane_g1

0x841e,	// (0x0004a7b3) volume_small2_pane

0x8427,	// (0x0004a7bc) volume_small2_pane_g1

0x8430,	// (0x0004a7c5) volume_small2_pane_g2

0x8439,	// (0x0004a7ce) volume_small2_pane_g3

0x8442,	// (0x0004a7d7) volume_small2_pane_g4

0x844b,	// (0x0004a7e0) volume_small2_pane_g5

0x8454,	// (0x0004a7e9) volume_small2_pane_g6

0x845d,	// (0x0004a7f2) volume_small2_pane_g7

0x8466,	// (0x0004a7fb) volume_small2_pane_g8

0x846f,	// (0x0004a804) volume_small2_pane_g9

0x8478,	// (0x0004a80d) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00051fbb) volume_small2_pane_g

0xc07c,	// (0x0004e411) fep_vkb_top_text_pane_g1_ParamLimits

0xc097,	// (0x0004e42c) fep_vkb_top_text_pane_t1_ParamLimits

0xc371,	// (0x0004e706) popup_preview_fixed_window_g3_ParamLimits

0xc371,	// (0x0004e706) popup_preview_fixed_window_g3

0x7a0c,	// (0x00049da1) popup_toolbar_trans_pane

0xaa84,	// (0x0004ce19) aid_height_set_list_ParamLimits

0xaa95,	// (0x0004ce2a) aid_size_parent_ParamLimits

0x919b,	// (0x0004b530) list_highlight_pane_cp2_ParamLimits

0x470b,	// (0x00046aa0) set_content_pane_g1_ParamLimits

0x7e95,	// (0x0004a22a) list_single_image_pane_ParamLimits

0x7e95,	// (0x0004a22a) list_single_image_pane

0xc839,	// (0x0004ebce) aid_size_cell_image_ParamLimits

0xc839,	// (0x0004ebce) aid_size_cell_image

0xc846,	// (0x0004ebdb) grid_single_image_pane_ParamLimits

0xc846,	// (0x0004ebdb) grid_single_image_pane

0x0dd5,	// (0x0004316a) list_single_image_pane_g1_ParamLimits

0x0dd5,	// (0x0004316a) list_single_image_pane_g1

0x0de1,	// (0x00043176) list_single_image_pane_g2_ParamLimits

0x0de1,	// (0x00043176) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00051fd0) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00051fd0) list_single_image_pane_g

0xc854,	// (0x0004ebe9) list_single_image_pane_t1_ParamLimits

0xc854,	// (0x0004ebe9) list_single_image_pane_t1

0xc86a,	// (0x0004ebff) cell_image_list_pane_ParamLimits

0xc86a,	// (0x0004ebff) cell_image_list_pane

0xc880,	// (0x0004ec15) cell_image_list_pane_g1

0xc889,	// (0x0004ec1e) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00051fd5) cell_image_list_pane_g

0xc892,	// (0x0004ec27) aid_size_cell_tb_trans_pane

0x0dc7,	// (0x0004315c) bg_tb_trans_pane

0xc8a4,	// (0x0004ec39) grid_tb_trans_pane

0x96cb,	// (0x0004ba60) bg_tb_trans_pane_g1

0x96d3,	// (0x0004ba68) bg_tb_trans_pane_g2

0x96db,	// (0x0004ba70) bg_tb_trans_pane_g3

0x96e3,	// (0x0004ba78) bg_tb_trans_pane_g4

0x96eb,	// (0x0004ba80) bg_tb_trans_pane_g5

0x9703,	// (0x0004ba98) bg_tb_trans_pane_g6

0x970b,	// (0x0004baa0) bg_tb_trans_pane_g7

0x96f3,	// (0x0004ba88) bg_tb_trans_pane_g8

0x96fb,	// (0x0004ba90) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00051fda) bg_tb_trans_pane_g

0xc8b8,	// (0x0004ec4d) cell_toolbar_trans_pane_ParamLimits

0xc8b8,	// (0x0004ec4d) cell_toolbar_trans_pane

0xbcc5,	// (0x0004e05a) cell_toolbar_trans_pane_g1

0xb8fd,	// (0x0004dc92) list_form2_midp_pane_t1

0xb90b,	// (0x0004dca0) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00051e83) list_form2_midp_pane_t

0xb919,	// (0x0004dcae) scroll_pane_cp51_ParamLimits

0xbae0,	// (0x0004de75) form2_midp_wait_pane_g1

0xbae9,	// (0x0004de7e) form2_midp_wait_pane_g2

0xbaf2,	// (0x0004de87) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00051e98) form2_midp_wait_pane_g

0x0789,	// (0x00042b1e) list_highlight_pane_cp21_ParamLimits

0xbb2b,	// (0x0004dec0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb3a,	// (0x0004decf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac9d,	// (0x0004d032) list_single_2graphic_im_pane_ParamLimits

0xac9d,	// (0x0004d032) list_single_2graphic_im_pane

0xc8de,	// (0x0004ec73) list_single_2graphic_im_pane_g1_ParamLimits

0xc8de,	// (0x0004ec73) list_single_2graphic_im_pane_g1

0xc8ef,	// (0x0004ec84) list_single_2graphic_im_pane_g2_ParamLimits

0xc8ef,	// (0x0004ec84) list_single_2graphic_im_pane_g2

0xc8fb,	// (0x0004ec90) list_single_2graphic_im_pane_g3_ParamLimits

0xc8fb,	// (0x0004ec90) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00051fed) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00051fed) list_single_2graphic_im_pane_g

0xc91b,	// (0x0004ecb0) list_single_2graphic_im_pane_t1_ParamLimits

0xc91b,	// (0x0004ecb0) list_single_2graphic_im_pane_t1

0xc37d,	// (0x0004e712) list_single_graphic_2heading_pane_fp_ParamLimits

0xc37d,	// (0x0004e712) list_single_graphic_2heading_pane_fp

0x60b7,	// (0x0004844c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x60b7,	// (0x0004844c) list_single_graphic_2heading_pane_fp_g1

0xc396,	// (0x0004e72b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc396,	// (0x0004e72b) list_single_graphic_2heading_pane_fp_g2

0xc2ef,	// (0x0004e684) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc2ef,	// (0x0004e684) list_single_graphic_2heading_pane_fp_g3

0xc2fb,	// (0x0004e690) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc2fb,	// (0x0004e690) list_single_graphic_2heading_pane_fp_g4

0xc3a2,	// (0x0004e737) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc3a2,	// (0x0004e737) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00051f1b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00051f1b) list_single_graphic_2heading_pane_fp_g

0x6200,	// (0x00048595) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6200,	// (0x00048595) list_single_graphic_2heading_pane_fp_t1

0x60ef,	// (0x00048484) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x60ef,	// (0x00048484) list_single_graphic_2heading_pane_fp_t2

0x6216,	// (0x000485ab) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6216,	// (0x000485ab) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00051ff6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00051ff6) list_single_graphic_2heading_pane_fp_t

0xbd3e,	// (0x0004e0d3) fep_hwr_write_pane_g5_ParamLimits

0xbd3e,	// (0x0004e0d3) fep_hwr_write_pane_g5

0xbd4a,	// (0x0004e0df) fep_hwr_write_pane_g6_ParamLimits

0xbd4a,	// (0x0004e0df) fep_hwr_write_pane_g6

0xc61c,	// (0x0004e9b1) eswt_shell_pane_ParamLimits

0x973f,	// (0x0004bad4) bg_popup_window_pane_cp18_ParamLimits

0xa9db,	// (0x0004cd70) heading_pane_cp70

0xc746,	// (0x0004eadb) popup_eswt_tasktip_window_t1_ParamLimits

0x922e,	// (0x0004b5c3) aid_touch_tab_arrow_left

0x923a,	// (0x0004b5cf) aid_touch_tab_arrow_right

0x675a,	// (0x00048aef) title_pane_g3_ParamLimits

0x675a,	// (0x00048aef) title_pane_g3

0x0d86,	// (0x0004311b) set_value_pane_g1

0x7a0c,	// (0x00049da1) popup_toolbar_trans_pane_ParamLimits

0xc892,	// (0x0004ec27) aid_size_cell_tb_trans_pane_ParamLimits

0x0dc7,	// (0x0004315c) bg_tb_trans_pane_ParamLimits

0xc8a4,	// (0x0004ec39) grid_tb_trans_pane_ParamLimits

0x08bc,	// (0x00042c51) cont_note_pane_ParamLimits

0x08bc,	// (0x00042c51) cont_note_pane

0x0b42,	// (0x00042ed7) cont_snote2_single_text_pane_ParamLimits

0x0b42,	// (0x00042ed7) cont_snote2_single_text_pane

0x0b42,	// (0x00042ed7) cont_snote2_single_graphic_pane_ParamLimits

0x0b42,	// (0x00042ed7) cont_snote2_single_graphic_pane

0x9d29,	// (0x0004c0be) cont_note_wait_pane_ParamLimits

0x9d29,	// (0x0004c0be) cont_note_wait_pane

0x9d29,	// (0x0004c0be) cont_note_image_pane_ParamLimits

0x9d29,	// (0x0004c0be) cont_note_image_pane

0xc94c,	// (0x0004ece1) popup_note2_window_g1_ParamLimits

0xc94c,	// (0x0004ece1) popup_note2_window_g1

0xc97d,	// (0x0004ed12) popup_note2_window_t1_ParamLimits

0xc97d,	// (0x0004ed12) popup_note2_window_t1

0xc9c2,	// (0x0004ed57) popup_note2_window_t2_ParamLimits

0xc9c2,	// (0x0004ed57) popup_note2_window_t2

0xca07,	// (0x0004ed9c) popup_note2_window_t3_ParamLimits

0xca07,	// (0x0004ed9c) popup_note2_window_t3

0xca4c,	// (0x0004ede1) popup_note2_window_t4_ParamLimits

0xca4c,	// (0x0004ede1) popup_note2_window_t4

0x0940,	// (0x00042cd5) popup_note2_window_t5_ParamLimits

0x0940,	// (0x00042cd5) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00052002) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00052002) popup_note2_window_t

0xca7b,	// (0x0004ee10) popup_note2_image_window_g1_ParamLimits

0xca7b,	// (0x0004ee10) popup_note2_image_window_g1

0xca87,	// (0x0004ee1c) popup_note2_image_window_g2_ParamLimits

0xca87,	// (0x0004ee1c) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005200d) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005200d) popup_note2_image_window_g

0xca99,	// (0x0004ee2e) popup_note2_image_window_t1_ParamLimits

0xca99,	// (0x0004ee2e) popup_note2_image_window_t1

0xcab1,	// (0x0004ee46) popup_note2_image_window_t2_ParamLimits

0xcab1,	// (0x0004ee46) popup_note2_image_window_t2

0xcac9,	// (0x0004ee5e) popup_note2_image_window_t3_ParamLimits

0xcac9,	// (0x0004ee5e) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00052012) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00052012) popup_note2_image_window_t

0x9d37,	// (0x0004c0cc) popup_note2_wait_window_g1_ParamLimits

0x9d37,	// (0x0004c0cc) popup_note2_wait_window_g1

0xcae5,	// (0x0004ee7a) popup_note2_wait_window_g2_ParamLimits

0xcae5,	// (0x0004ee7a) popup_note2_wait_window_g2

0x9d4f,	// (0x0004c0e4) popup_note2_wait_window_g3_ParamLimits

0x9d4f,	// (0x0004c0e4) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00052019) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00052019) popup_note2_wait_window_g

0xcaf1,	// (0x0004ee86) popup_note2_wait_window_t1_ParamLimits

0xcaf1,	// (0x0004ee86) popup_note2_wait_window_t1

0xcb0f,	// (0x0004eea4) popup_note2_wait_window_t2_ParamLimits

0xcb0f,	// (0x0004eea4) popup_note2_wait_window_t2

0xcb2d,	// (0x0004eec2) popup_note2_wait_window_t3_ParamLimits

0xcb2d,	// (0x0004eec2) popup_note2_wait_window_t3

0xcb3f,	// (0x0004eed4) popup_note2_wait_window_t4_ParamLimits

0xcb3f,	// (0x0004eed4) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00052020) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00052020) popup_note2_wait_window_t

0xcb51,	// (0x0004eee6) wait_bar2_pane_ParamLimits

0xcb51,	// (0x0004eee6) wait_bar2_pane

0xcb69,	// (0x0004eefe) popup_snote2_single_text_window_g1_ParamLimits

0xcb69,	// (0x0004eefe) popup_snote2_single_text_window_g1

0xcb91,	// (0x0004ef26) popup_snote2_single_text_window_t1_ParamLimits

0xcb91,	// (0x0004ef26) popup_snote2_single_text_window_t1

0xcbdd,	// (0x0004ef72) popup_snote2_single_text_window_t2_ParamLimits

0xcbdd,	// (0x0004ef72) popup_snote2_single_text_window_t2

0xcc29,	// (0x0004efbe) popup_snote2_single_text_window_t3_ParamLimits

0xcc29,	// (0x0004efbe) popup_snote2_single_text_window_t3

0xcc6a,	// (0x0004efff) popup_snote2_single_text_window_t4_ParamLimits

0xcc6a,	// (0x0004efff) popup_snote2_single_text_window_t4

0xcca0,	// (0x0004f035) popup_snote2_single_text_window_t5_ParamLimits

0xcca0,	// (0x0004f035) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00052029) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00052029) popup_snote2_single_text_window_t

0xcccb,	// (0x0004f060) popup_snote2_single_graphic_window_g1_ParamLimits

0xcccb,	// (0x0004f060) popup_snote2_single_graphic_window_g1

0xccf3,	// (0x0004f088) popup_snote2_single_graphic_window_g2_ParamLimits

0xccf3,	// (0x0004f088) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00052034) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00052034) popup_snote2_single_graphic_window_g

0xcd1b,	// (0x0004f0b0) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd1b,	// (0x0004f0b0) popup_snote2_single_graphic_window_t1

0xcd67,	// (0x0004f0fc) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd67,	// (0x0004f0fc) popup_snote2_single_graphic_window_t2

0xcc29,	// (0x0004efbe) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc29,	// (0x0004efbe) popup_snote2_single_graphic_window_t3

0xcc6a,	// (0x0004efff) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc6a,	// (0x0004efff) popup_snote2_single_graphic_window_t4

0xcca0,	// (0x0004f035) popup_snote2_single_graphic_window_t5_ParamLimits

0xcca0,	// (0x0004f035) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00052039) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00052039) popup_snote2_single_graphic_window_t

0xb7c9,	// (0x0004db5e) clock_nsta_pane_cp2_t1

0xb7c9,	// (0x0004db5e) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00051e59) clock_nsta_pane_cp2_t

0x59d6,	// (0x00047d6b) form_field_data_wide_pane_g1_ParamLimits

0x0dd5,	// (0x0004316a) form_field_data_wide_pane_g2_ParamLimits

0x0dd5,	// (0x0004316a) form_field_data_wide_pane_g2

0x0de1,	// (0x00043176) form_field_data_wide_pane_g3_ParamLimits

0x0de1,	// (0x00043176) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00051a15) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00051a15) form_field_data_wide_pane_g

0xb6cb,	// (0x0004da60) grid_touch_3_pane_ParamLimits

0xb6cb,	// (0x0004da60) grid_touch_3_pane

0xcdb3,	// (0x0004f148) cell_touch_3_pane_ParamLimits

0xcdb3,	// (0x0004f148) cell_touch_3_pane

0xbcc5,	// (0x0004e05a) cell_touch_3_pane_g1

0xbcc5,	// (0x0004e05a) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00051ede) cell_touch_3_pane_g

0x0998,	// (0x00042d2d) cont_query_data_pane

0x09a0,	// (0x00042d35) cont_query_data_pane_cp1

0xcde6,	// (0x0004f17b) button_value_adjust_pane_cp7

0xcdee,	// (0x0004f183) query_popup_pane_cp3

0x12ef,	// (0x00043684) bg_popup_sub_pane_cp22_ParamLimits

0x6faa,	// (0x0004933f) navi_navi_volume_pane_cp2

0x6fc5,	// (0x0004935a) popup_side_volume_key_window_g2

0x6fd4,	// (0x00049369) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00051aab) popup_side_volume_key_window_g

0x6ff1,	// (0x00049386) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00051ab2) popup_side_volume_key_window_t

0x45d1,	// (0x00046966) popup_side_volume_key_window_ParamLimits

0x55d5,	// (0x0004796a) list_double_graphic_pane_g4_ParamLimits

0x55d5,	// (0x0004796a) list_double_graphic_pane_g4

0xaccc,	// (0x0004d061) list_single_2heading_msg_pane_ParamLimits

0xaccc,	// (0x0004d061) list_single_2heading_msg_pane

0x8481,	// (0x0004a816) list_single_2heading_msg_pane_g1_ParamLimits

0x8481,	// (0x0004a816) list_single_2heading_msg_pane_g1

0xc51b,	// (0x0004e8b0) list_single_2heading_msg_pane_g2_ParamLimits

0xc51b,	// (0x0004e8b0) list_single_2heading_msg_pane_g2

0x848d,	// (0x0004a822) list_single_2heading_msg_pane_g3_ParamLimits

0x848d,	// (0x0004a822) list_single_2heading_msg_pane_g3

0x8499,	// (0x0004a82e) list_single_2heading_msg_pane_g4_ParamLimits

0x8499,	// (0x0004a82e) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00052044) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00052044) list_single_2heading_msg_pane_g

0x6236,	// (0x000485cb) list_single_2heading_msg_pane_t1_ParamLimits

0x6236,	// (0x000485cb) list_single_2heading_msg_pane_t1

0x625e,	// (0x000485f3) list_single_2heading_msg_pane_t2_ParamLimits

0x625e,	// (0x000485f3) list_single_2heading_msg_pane_t2

0x628d,	// (0x00048622) list_single_2heading_msg_pane_t3_ParamLimits

0x628d,	// (0x00048622) list_single_2heading_msg_pane_t3

0x62c6,	// (0x0004865b) list_single_2heading_msg_pane_t4_ParamLimits

0x62c6,	// (0x0004865b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005204d) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005204d) list_single_2heading_msg_pane_t

0x0737,	// (0x00042acc) title_pane_g4_ParamLimits

0x0737,	// (0x00042acc) title_pane_g4

0x6c37,	// (0x00048fcc) title_pane_stacon_g3_ParamLimits

0x6c37,	// (0x00048fcc) title_pane_stacon_g3

0xc90f,	// (0x0004eca4) list_single_2graphic_im_pane_g4_ParamLimits

0xc90f,	// (0x0004eca4) list_single_2graphic_im_pane_g4

0xa799,	// (0x0004cb2e) popup_side_volume_key_window_cp

0xaff3,	// (0x0004d388) main_idle_act2_pane_t1

0x7b1c,	// (0x00049eb1) toolbar_button_pane_g10

0x6abb,	// (0x00048e50) popup_toolbar_window_cp1

0xb7ba,	// (0x0004db4f) clock_nsta_pane_cp_t1

0xb7ba,	// (0x0004db4f) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00051e54) clock_nsta_pane_cp_t

0x6faa,	// (0x0004933f) navi_navi_volume_pane_cp2_ParamLimits

0x6fb9,	// (0x0004934e) popup_side_volume_key_window_g1_ParamLimits

0x6fc5,	// (0x0004935a) popup_side_volume_key_window_g2_ParamLimits

0x6fd4,	// (0x00049369) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00051aab) popup_side_volume_key_window_g_ParamLimits

0x8087,	// (0x0004a41c) fep_hwr_aid_pane

0x248b,	// (0x00044820) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd0e,	// (0x0004e0a3) fep_hwr_top_pane_g1_ParamLimits

0xbd20,	// (0x0004e0b5) fep_hwr_top_pane_g2_ParamLimits

0x8142,	// (0x0004a4d7) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00051ea9) fep_hwr_top_pane_g_ParamLimits

0x8157,	// (0x0004a4ec) fep_hwr_top_text_pane_ParamLimits

0xa54e,	// (0x0004c8e3) aid_touch_tab_arrow_arrow_2

0xa557,	// (0x0004c8ec) aid_touch_tab_arrow_left_2

0x809b,	// (0x0004a430) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x80d2,	// (0x0004a467) fep_hwr_prediction_pane

0xbe76,	// (0x0004e20b) fep_vkb_prediction_pane

0xbf7c,	// (0x0004e311) fep_vkb_side_pane_g3_ParamLimits

0xbf7c,	// (0x0004e311) fep_vkb_side_pane_g3

0xbf28,	// (0x0004e2bd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc3f6,	// (0x0004e78b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc403,	// (0x0004e798) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00051f53) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce15,	// (0x0004f1aa) fep_hwr_prediction_pane_g1

0x84b1,	// (0x0004a846) fep_hwr_prediction_pane_g2

0x84b9,	// (0x0004a84e) fep_hwr_prediction_pane_g3

0x84c1,	// (0x0004a856) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00052056) fep_hwr_prediction_pane_g

0xce15,	// (0x0004f1aa) fep_vkb_prediction_pane_g1

0xce1f,	// (0x0004f1b4) fep_vkb_prediction_pane_g2

0xce27,	// (0x0004f1bc) fep_vkb_prediction_pane_g3

0xce2f,	// (0x0004f1c4) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005205f) fep_vkb_prediction_pane_g

0x7e29,	// (0x0004a1be) slider_set_pane_g3

0x7e3d,	// (0x0004a1d2) slider_set_pane_g4

0x7e55,	// (0x0004a1ea) slider_set_pane_g5

0x7e29,	// (0x0004a1be) slider_set_pane_g6

0x7e6b,	// (0x0004a200) slider_set_pane_g7

0xac14,	// (0x0004cfa9) slider_form_pane_g3

0xac1d,	// (0x0004cfb2) slider_form_pane_g4

0xac25,	// (0x0004cfba) slider_form_pane_g5

0xac14,	// (0x0004cfa9) slider_form_pane_g6

0xac2d,	// (0x0004cfc2) slider_form_pane_g7

0xb2a1,	// (0x0004d636) slider_set_pane_vc_g3

0xb2aa,	// (0x0004d63f) slider_set_pane_vc_g4

0xb2b3,	// (0x0004d648) slider_set_pane_vc_g5

0xb2a1,	// (0x0004d636) slider_set_pane_vc_g6

0xb2bc,	// (0x0004d651) slider_set_pane_vc_g7

0xb490,	// (0x0004d825) slider_form_pane_vc_g1

0xb499,	// (0x0004d82e) slider_form_pane_vc_g2

0xb4a2,	// (0x0004d837) slider_form_pane_vc_g3

0xb490,	// (0x0004d825) slider_form_pane_vc_g4

0xb4ab,	// (0x0004d840) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00051e26) slider_form_pane_vc_g

0x0719,	// (0x00042aae) main_idle_act3_pane

0xce37,	// (0x0004f1cc) ai3_links_pane

0xce40,	// (0x0004f1d5) popup_ai3_data_window_ParamLimits

0xce40,	// (0x0004f1d5) popup_ai3_data_window

0x0719,	// (0x00042aae) grid_ai3_links_pane

0xce5e,	// (0x0004f1f3) cell_ai3_links_pane_ParamLimits

0xce5e,	// (0x0004f1f3) cell_ai3_links_pane

0xce78,	// (0x0004f20d) bg_popup_sub_pane_cp11

0xce85,	// (0x0004f21a) cell_ai3_links_pane_g1

0x0719,	// (0x00042aae) bg_popup_sub_pane_cp12

0xceaa,	// (0x0004f23f) heading_ai3_data_pane

0xceb2,	// (0x0004f247) list_ai3_gene_pane

0xcebe,	// (0x0004f253) popup_ai3_data_window_g1

0xcec6,	// (0x0004f25b) heading_ai3_data_pane_g1

0xcece,	// (0x0004f263) heading_ai3_data_pane_t1

0xcedc,	// (0x0004f271) list_double_ai3_gene_pane_ParamLimits

0xcedc,	// (0x0004f271) list_double_ai3_gene_pane

0xcee9,	// (0x0004f27e) list_single_ai3_gene_pane_ParamLimits

0xcee9,	// (0x0004f27e) list_single_ai3_gene_pane

0xbc8a,	// (0x0004e01f) list_highlight_pane_cp7_ParamLimits

0xbc8a,	// (0x0004e01f) list_highlight_pane_cp7

0xcef6,	// (0x0004f28b) list_single_a13_gene_pane_t1_ParamLimits

0xcef6,	// (0x0004f28b) list_single_a13_gene_pane_t1

0xcf0d,	// (0x0004f2a2) list_single_ai3_gene_pane_g1

0xcf16,	// (0x0004f2ab) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00052068) list_single_ai3_gene_pane_g

0xcf1e,	// (0x0004f2b3) list_double_ai3_gene_pane_g1_ParamLimits

0xcf1e,	// (0x0004f2b3) list_double_ai3_gene_pane_g1

0xcf2a,	// (0x0004f2bf) list_double_ai3_gene_pane_t1_ParamLimits

0xcf2a,	// (0x0004f2bf) list_double_ai3_gene_pane_t1

0xcf46,	// (0x0004f2db) list_double_ai3_gene_pane_t2_ParamLimits

0xcf46,	// (0x0004f2db) list_double_ai3_gene_pane_t2

0xcf5b,	// (0x0004f2f0) list_double_ai3_gene_pane_t3_ParamLimits

0xcf5b,	// (0x0004f2f0) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005206d) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005206d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x622c,	// (0x000485c1) aid_size_min_col_2

0xcdff,	// (0x0004f194) aid_size_min_msg_ParamLimits

0xcdff,	// (0x0004f194) aid_size_min_msg

0xc088,	// (0x0004e41d) fep_vkb_top_text_pane_g2_ParamLimits

0xc088,	// (0x0004e41d) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00051ed9) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00051ed9) fep_vkb_top_text_pane_g

0x0719,	// (0x00042aae) main_hc_apps_shell_pane

0xcf78,	// (0x0004f30d) grid_hc_apps_pane_ParamLimits

0xcf78,	// (0x0004f30d) grid_hc_apps_pane

0xcf87,	// (0x0004f31c) list_hc_apps_pane

0xcf8f,	// (0x0004f324) scroll_pane_cp37_ParamLimits

0xcf8f,	// (0x0004f324) scroll_pane_cp37

0xcf9b,	// (0x0004f330) cell_hc_apps_pane_ParamLimits

0xcf9b,	// (0x0004f330) cell_hc_apps_pane

0xd053,	// (0x0004f3e8) cell_hc_apps_pane_g1_ParamLimits

0xd053,	// (0x0004f3e8) cell_hc_apps_pane_g1

0xd084,	// (0x0004f419) cell_hc_apps_pane_g2_ParamLimits

0xd084,	// (0x0004f419) cell_hc_apps_pane_g2

0xd0a0,	// (0x0004f435) cell_hc_apps_pane_g3_ParamLimits

0xd0a0,	// (0x0004f435) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00052074) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00052074) cell_hc_apps_pane_g

0xd0c2,	// (0x0004f457) cell_hc_apps_pane_t1_ParamLimits

0xd0c2,	// (0x0004f457) cell_hc_apps_pane_t1

0x08bc,	// (0x00042c51) grid_highlight_pane_cp10_ParamLimits

0x08bc,	// (0x00042c51) grid_highlight_pane_cp10

0xd102,	// (0x0004f497) list_single_hc_apps_pane_ParamLimits

0xd102,	// (0x0004f497) list_single_hc_apps_pane

0xd141,	// (0x0004f4d6) list_single_hc_apps_pane_g1

0x84c9,	// (0x0004a85e) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005207b) list_single_hc_apps_pane_g

0x84e2,	// (0x0004a877) list_single_hc_apps_pane_g2_copy1

0x62eb,	// (0x00048680) list_single_hc_apps_pane_t1

0x0789,	// (0x00042b1e) bg_set_opt_pane_cp_ParamLimits

0x680c,	// (0x00048ba1) setting_slider_pane_t1_ParamLimits

0x6825,	// (0x00048bba) setting_slider_pane_t2_ParamLimits

0x683f,	// (0x00048bd4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000518f3) setting_slider_pane_t_ParamLimits

0x6857,	// (0x00048bec) slider_set_pane_ParamLimits

0x739f,	// (0x00049734) control_pane_g5_ParamLimits

0x739f,	// (0x00049734) control_pane_g5

0xaa47,	// (0x0004cddc) slider_set_pane_g1_ParamLimits

0x7e1d,	// (0x0004a1b2) slider_set_pane_g2_ParamLimits

0x7e29,	// (0x0004a1be) slider_set_pane_g3_ParamLimits

0x7e3d,	// (0x0004a1d2) slider_set_pane_g4_ParamLimits

0x7e55,	// (0x0004a1ea) slider_set_pane_g5_ParamLimits

0x7e29,	// (0x0004a1be) slider_set_pane_g6_ParamLimits

0x7e6b,	// (0x0004a200) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00051cfe) slider_set_pane_g_ParamLimits

0x46b6,	// (0x00046a4b) navi_icon_text_pane_ParamLimits

0x91ed,	// (0x0004b582) aid_fill_nsta_2_ParamLimits

0x922e,	// (0x0004b5c3) aid_touch_tab_arrow_left_ParamLimits

0x923a,	// (0x0004b5cf) aid_touch_tab_arrow_right_ParamLimits

0x92a6,	// (0x0004b63b) clock_nsta_pane_ParamLimits

0xa530,	// (0x0004c8c5) navi_icon_pane_g1_ParamLimits

0xa53c,	// (0x0004c8d1) navi_text_pane_t1_ParamLimits

0xb8d7,	// (0x0004dc6c) navi_icon_text_pane_g1_ParamLimits

0xb8e3,	// (0x0004dc78) navi_icon_text_pane_t1_ParamLimits

0xd141,	// (0x0004f4d6) list_single_hc_apps_pane_g1_ParamLimits

0x84c9,	// (0x0004a85e) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005207b) list_single_hc_apps_pane_g_ParamLimits

0x84e2,	// (0x0004a877) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x62eb,	// (0x00048680) list_single_hc_apps_pane_t1_ParamLimits

0x6640,	// (0x000489d5) popup_toolbar2_fixed_window_ParamLimits

0x6640,	// (0x000489d5) popup_toolbar2_fixed_window

0x7a02,	// (0x00049d97) popup_toolbar2_float_window

0x0719,	// (0x00042aae) bg_popup_sub_pane_cp27

0xd15a,	// (0x0004f4ef) grid_toolbar2_float_pane

0x0719,	// (0x00042aae) bg_popup_sub_pane_cp26

0xd15a,	// (0x0004f4ef) grid_toolbar2_fixed_pane

0xd162,	// (0x0004f4f7) cell_toolbar2_fixed_pane_ParamLimits

0xd162,	// (0x0004f4f7) cell_toolbar2_fixed_pane

0xd172,	// (0x0004f507) cell_toolbar2_fixed_pane_g1

0xd17b,	// (0x0004f510) toolbar2_fixed_button_pane

0x96cb,	// (0x0004ba60) toolbar2_fixed_button_pane_g1

0x96d3,	// (0x0004ba68) toolbar2_fixed_button_pane_g2

0x96db,	// (0x0004ba70) toolbar2_fixed_button_pane_g3

0x96e3,	// (0x0004ba78) toolbar2_fixed_button_pane_g4

0x96eb,	// (0x0004ba80) toolbar2_fixed_button_pane_g5

0x96f3,	// (0x0004ba88) toolbar2_fixed_button_pane_g6

0x96fb,	// (0x0004ba90) toolbar2_fixed_button_pane_g7

0x9703,	// (0x0004ba98) toolbar2_fixed_button_pane_g8

0x970b,	// (0x0004baa0) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00051c00) toolbar2_fixed_button_pane_g

0xd183,	// (0x0004f518) cell_toolbar2_float_pane_ParamLimits

0xd183,	// (0x0004f518) cell_toolbar2_float_pane

0xd194,	// (0x0004f529) cell_toolbar2_float_pane_g1

0xd17b,	// (0x0004f510) toolbar2_fixed_button_pane_cp

0xbde4,	// (0x0004e179) fep_vkb_accented_list_pane_ParamLimits

0xbde4,	// (0x0004e179) fep_vkb_accented_list_pane

0x82b9,	// (0x0004a64e) bg_popup_fep_shadow_pane_g9

0x482e,	// (0x00046bc3) bg_popup_fep_shadow_pane_cp3

0x0ed7,	// (0x0004326c) list_accented_list_pane

0xd19d,	// (0x0004f532) list_single_accented_list_pane_ParamLimits

0xd19d,	// (0x0004f532) list_single_accented_list_pane

0x482e,	// (0x00046bc3) list_highlight_pane_cp10

0xd1ae,	// (0x0004f543) list_single_accented_list_pane_t1

0x7948,	// (0x00049cdd) popup_slider_window_ParamLimits

0x7948,	// (0x00049cdd) popup_slider_window

0xcdf6,	// (0x0004f18b) aid_indentation_list_msg

0xd27e,	// (0x0004f613) bg_popup_window_pane_cp19

0xd2ea,	// (0x0004f67f) popup_slider_window_g1

0xd306,	// (0x0004f69b) popup_slider_window_g2

0xd322,	// (0x0004f6b7) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00052080) popup_slider_window_g

0xd388,	// (0x0004f71d) popup_slider_window_t1

0xd3fc,	// (0x0004f791) small_volume_slider_vertical_pane

0xbcc5,	// (0x0004e05a) small_volume_slider_vertical_pane_g1

0xbcc5,	// (0x0004e05a) small_volume_slider_vertical_pane_g2

0xd418,	// (0x0004f7ad) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00052092) small_volume_slider_vertical_pane_g

0x63f8,	// (0x0004878d) area_side_right_pane_ParamLimits

0x63f8,	// (0x0004878d) area_side_right_pane

0x84fe,	// (0x0004a893) aid_size_side_button_ParamLimits

0x84fe,	// (0x0004a893) aid_size_side_button

0x8512,	// (0x0004a8a7) grid_sctrl_middle_pane_ParamLimits

0x8512,	// (0x0004a8a7) grid_sctrl_middle_pane

0x8531,	// (0x0004a8c6) sctrl_sk_bottom_pane

0x8542,	// (0x0004a8d7) sctrl_sk_top_pane

0x8554,	// (0x0004a8e9) aid_touch_sctrl_top

0x08bc,	// (0x00042c51) bg_sctrl_sk_pane_ParamLimits

0x08bc,	// (0x00042c51) bg_sctrl_sk_pane

0x8561,	// (0x0004a8f6) sctrl_sk_top_pane_g1

0x856e,	// (0x0004a903) sctrl_sk_top_pane_t1

0x8554,	// (0x0004a8e9) aid_touch_sctrl_bottom

0x08bc,	// (0x00042c51) bg_sctrl_sk_pane_cp_ParamLimits

0x08bc,	// (0x00042c51) bg_sctrl_sk_pane_cp

0x8589,	// (0x0004a91e) sctrl_sk_bottom_pane_g1

0x856e,	// (0x0004a903) sctrl_sk_bottom_pane_t1

0x8592,	// (0x0004a927) cell_sctrl_middle_pane_ParamLimits

0x8592,	// (0x0004a927) cell_sctrl_middle_pane

0x85af,	// (0x0004a944) aid_touch_sctrl_middle_ParamLimits

0x85af,	// (0x0004a944) aid_touch_sctrl_middle

0x0dc7,	// (0x0004315c) bg_sctrl_middle_pane_ParamLimits

0x0dc7,	// (0x0004315c) bg_sctrl_middle_pane

0xbf28,	// (0x0004e2bd) cell_sctrl_middle_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) cell_sctrl_middle_pane_g1

0x85c1,	// (0x0004a956) cell_sctrl_middle_pane_g2_ParamLimits

0x85c1,	// (0x0004a956) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005209e) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005209e) cell_sctrl_middle_pane_g

0x96cb,	// (0x0004ba60) bg_sctrl_middle_pane_g1

0x96d3,	// (0x0004ba68) bg_sctrl_middle_pane_g2

0x96db,	// (0x0004ba70) bg_sctrl_middle_pane_g3

0x96e3,	// (0x0004ba78) bg_sctrl_middle_pane_g4

0x96eb,	// (0x0004ba80) bg_sctrl_middle_pane_g5

0x96f3,	// (0x0004ba88) bg_sctrl_middle_pane_g6

0x96fb,	// (0x0004ba90) bg_sctrl_middle_pane_g7

0x9703,	// (0x0004ba98) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x000520a3) bg_sctrl_middle_pane_g

0x970b,	// (0x0004baa0) bg_sctrl_middle_pane_g8_copy1

0x96cb,	// (0x0004ba60) bg_sctrl_sk_pane_g1

0x96d3,	// (0x0004ba68) bg_sctrl_sk_pane_g2

0x96db,	// (0x0004ba70) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00051c00) bg_sctrl_sk_pane_g

0x0d00,	// (0x00043095) aid_size_touch_scroll_bar

0x96e3,	// (0x0004ba78) bg_sctrl_sk_pane_g4

0x96eb,	// (0x0004ba80) bg_sctrl_sk_pane_g5

0x96f3,	// (0x0004ba88) bg_sctrl_sk_pane_g6

0x96fb,	// (0x0004ba90) bg_sctrl_sk_pane_g7

0x9703,	// (0x0004ba98) bg_sctrl_sk_pane_g8

0x970b,	// (0x0004baa0) bg_sctrl_sk_pane_g9

0x755f,	// (0x000498f4) popup_fep_china_hwr2_fs_candidate_window

0x7569,	// (0x000498fe) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7569,	// (0x000498fe) popup_fep_china_hwr2_fs_control_window

0xbf28,	// (0x0004e2bd) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00052099) sctrl_sk_top_pane_g

0xd421,	// (0x0004f7b6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd421,	// (0x0004f7b6) aid_fep_china_hwr2_fs_cell

0xd434,	// (0x0004f7c9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd434,	// (0x0004f7c9) bg_popup_fep_shadow_pane_cp4

0xd44d,	// (0x0004f7e2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd44d,	// (0x0004f7e2) bg_popup_fep_shadow_pane_cp5

0xd45f,	// (0x0004f7f4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd45f,	// (0x0004f7f4) popup_fep_china_hwr2_fs_control_bar_grid

0xd46f,	// (0x0004f804) popup_fep_china_hwr2_fs_control_funtion_grid

0xd477,	// (0x0004f80c) aid_fep_china_hwr2_fs_candi_cell

0x0719,	// (0x00042aae) bg_popup_fep_shadow_pane_cp6

0xd481,	// (0x0004f816) popup_fep_china_hwr2_fs_candidate_grid

0xd48b,	// (0x0004f820) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd48b,	// (0x0004f820) cell_fep_china_hwr2_fs_funtion_grid

0xbcc5,	// (0x0004e05a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4a3,	// (0x0004f838) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4a3,	// (0x0004f838) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4b1,	// (0x0004f846) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4b1,	// (0x0004f846) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x000520b4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x000520b4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4c7,	// (0x0004f85c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4c7,	// (0x0004f85c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd4dc,	// (0x0004f871) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd4dc,	// (0x0004f871) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x000520b9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x000520b9) cell_fep_china_hwr2_fs_funtion_grid_t

0xd4f8,	// (0x0004f88d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd500,	// (0x0004f895) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd508,	// (0x0004f89d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x000520be) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd510,	// (0x0004f8a5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd510,	// (0x0004f8a5) cell_fep_china_hwr2_fs_candidate_grid

0xd52f,	// (0x0004f8c4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd537,	// (0x0004f8cc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcc5,	// (0x0004e05a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcc5,	// (0x0004e05a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00051ede) cell_fep_china_hwr2_fs_candidate_grid_g

0xd53f,	// (0x0004f8d4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x92b3,	// (0x0004b648) clock_nsta_pane_cp_24_ParamLimits

0x92b3,	// (0x0004b648) clock_nsta_pane_cp_24

0x9333,	// (0x0004b6c8) indicator_nsta_pane_cp_24_ParamLimits

0x9333,	// (0x0004b6c8) indicator_nsta_pane_cp_24

0xa3ac,	// (0x0004c741) heading_pane_g1

0x0001,

0xf8d0,	// (0x00051c65) heading_pane_g

0xae3a,	// (0x0004d1cf) grid_sct_catagory_button_pane

0xae6c,	// (0x0004d201) scroll_pane_cp5_ParamLimits

0xb925,	// (0x0004dcba) button_value_adjust_pane_cp5_ParamLimits

0xb925,	// (0x0004dcba) button_value_adjust_pane_cp5

0xba0a,	// (0x0004dd9f) form2_midp_time_pane_ParamLimits

0xd54d,	// (0x0004f8e2) cell_sct_catagory_button_pane_ParamLimits

0xd54d,	// (0x0004f8e2) cell_sct_catagory_button_pane

0xbc8a,	// (0x0004e01f) bg_button_pane_cp01_ParamLimits

0xbc8a,	// (0x0004e01f) bg_button_pane_cp01

0xbcc5,	// (0x0004e05a) cell_sct_catagory_button_pane_g1

0x7989,	// (0x00049d1e) popup_tb_extension_window

0xd55f,	// (0x0004f8f4) aid_size_cell_ext_ParamLimits

0xd55f,	// (0x0004f8f4) aid_size_cell_ext

0x08bc,	// (0x00042c51) bg_tb_trans_pane_cp1_ParamLimits

0x08bc,	// (0x00042c51) bg_tb_trans_pane_cp1

0xd57f,	// (0x0004f914) grid_tb_ext_pane_ParamLimits

0xd57f,	// (0x0004f914) grid_tb_ext_pane

0xd5ad,	// (0x0004f942) cell_tb_ext_pane_ParamLimits

0xd5ad,	// (0x0004f942) cell_tb_ext_pane

0xd5c4,	// (0x0004f959) cell_tb_ext_pane_g1_ParamLimits

0xd5c4,	// (0x0004f959) cell_tb_ext_pane_g1

0xd5e1,	// (0x0004f976) cell_tb_ext_pane_t1

0x08bc,	// (0x00042c51) list_highlight_pane_cp11_ParamLimits

0x08bc,	// (0x00042c51) list_highlight_pane_cp11

0x665f,	// (0x000489f4) popup_uni_indicator_window_ParamLimits

0x665f,	// (0x000489f4) popup_uni_indicator_window

0x0dc7,	// (0x0004315c) bg_popup_sub_pane_cp14

0xd5fc,	// (0x0004f991) list_uniindi_pane

0xd608,	// (0x0004f99d) uniindi_top_pane

0x08bc,	// (0x00042c51) bg_uniindi_top_pane

0xd629,	// (0x0004f9be) uniindi_top_pane_g1

0xd63f,	// (0x0004f9d4) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x000520c5) uniindi_top_pane_g

0xd669,	// (0x0004f9fe) uniindi_top_pane_t1

0xd695,	// (0x0004fa2a) list_single_uniindi_pane_ParamLimits

0xd695,	// (0x0004fa2a) list_single_uniindi_pane

0xbcc5,	// (0x0004e05a) bg_uniindi_top_pane_g1

0xd6a7,	// (0x0004fa3c) list_single_uniindi_pane_g1

0xd6ba,	// (0x0004fa4f) list_single_uniindi_pane_t1

0x0719,	// (0x00042aae) control_bg_pane

0xd6df,	// (0x0004fa74) bg_sctrl_sk_pane_cp1

0xd6e8,	// (0x0004fa7d) bg_sctrl_sk_pane_cp2

0xd6f1,	// (0x0004fa86) control_bg_pane_g1

0xd6fa,	// (0x0004fa8f) control_bg_pane_g2

0x0001,

0xfd39,	// (0x000520ce) control_bg_pane_g

0xb76e,	// (0x0004db03) cell_indicator_nsta_pane_g1_ParamLimits

0xb77c,	// (0x0004db11) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00051e42) cell_indicator_nsta_pane_g_ParamLimits

0x608d,	// (0x00048422) form2_midp_time_pane_t1_ParamLimits

0x0b42,	// (0x00042ed7) main_idle_act4_pane_ParamLimits

0x0b42,	// (0x00042ed7) main_idle_act4_pane

0x7989,	// (0x00049d1e) popup_tb_extension_window_ParamLimits

0xd59f,	// (0x0004f934) tb_ext_find_pane_ParamLimits

0xd59f,	// (0x0004f934) tb_ext_find_pane

0xd703,	// (0x0004fa98) ai_gene_pane_1_cp1

0x48b4,	// (0x00046c49) ai_gene_pane_2_cp1

0xd70b,	// (0x0004faa0) list_single_idle_plugin_calendar_pane

0xd714,	// (0x0004faa9) list_single_idle_plugin_notification_pane

0xd71d,	// (0x0004fab2) list_single_idle_plugin_player_pane

0xd726,	// (0x0004fabb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd726,	// (0x0004fabb) list_single_idle_plugin_shortcut_pane

0xd748,	// (0x0004fadd) main_idle_act4_pane_t1

0xd75a,	// (0x0004faef) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x000520d3) main_idle_act4_pane_t

0xd76c,	// (0x0004fb01) middle_sk_idle_act4_pane_ParamLimits

0xd76c,	// (0x0004fb01) middle_sk_idle_act4_pane

0xd782,	// (0x0004fb17) popup_clock_digital_analogue_window_cp2

0xd79c,	// (0x0004fb31) shortcut_wheel_idle_act4_pane_ParamLimits

0xd79c,	// (0x0004fb31) shortcut_wheel_idle_act4_pane

0xbcc5,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g1

0xbcc5,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g2

0xbcc5,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g3

0xbcc5,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g4

0xbcc5,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g5

0xd7b0,	// (0x0004fb45) shortcut_wheel_idle_act4_pane_g6

0xd7b8,	// (0x0004fb4d) shortcut_wheel_idle_act4_pane_g7

0xd7c0,	// (0x0004fb55) shortcut_wheel_idle_act4_pane_g8

0xd7c8,	// (0x0004fb5d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x000520d8) shortcut_wheel_idle_act4_pane_g

0xbf28,	// (0x0004e2bd) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) middle_sk_idle_act4_pane_g1

0xd82c,	// (0x0004fbc1) middle_sk_idle_act4_pane_g2_ParamLimits

0xd82c,	// (0x0004fbc1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x000520fb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x000520fb) middle_sk_idle_act4_pane_g

0xd838,	// (0x0004fbcd) middle_sk_idle_act4_pane_t1_ParamLimits

0xd838,	// (0x0004fbcd) middle_sk_idle_act4_pane_t1

0xd855,	// (0x0004fbea) grid_ai_shortcut_pane_ParamLimits

0xd855,	// (0x0004fbea) grid_ai_shortcut_pane

0xd86e,	// (0x0004fc03) list_highlight_pane_cp16_ParamLimits

0xd86e,	// (0x0004fc03) list_highlight_pane_cp16

0xd87b,	// (0x0004fc10) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd87b,	// (0x0004fc10) list_single_idle_plugin_shortcut_pane_g1

0xd887,	// (0x0004fc1c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd887,	// (0x0004fc1c) list_single_idle_plugin_shortcut_pane_g2

0xd8a1,	// (0x0004fc36) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8a1,	// (0x0004fc36) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00052100) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00052100) list_single_idle_plugin_shortcut_pane_g

0xd8b4,	// (0x0004fc49) cell_ai_shortcut_pane_ParamLimits

0xd8b4,	// (0x0004fc49) cell_ai_shortcut_pane

0xd8d7,	// (0x0004fc6c) cell_ai_shortcut_pane_g1_ParamLimits

0xd8d7,	// (0x0004fc6c) cell_ai_shortcut_pane_g1

0xd703,	// (0x0004fa98) ai_gene_pane_1_cp2

0xd8f9,	// (0x0004fc8e) ai_gene_pane_2_cp2

0xd901,	// (0x0004fc96) list_highlight_pane_cp15

0xd90a,	// (0x0004fc9f) list_single_idle_plugin_calendar_pane_g1

0xd901,	// (0x0004fc96) list_highlight_pane_cp17

0xd912,	// (0x0004fca7) list_single_idle_plugin_calendar_pane_g1_copy1

0xd91a,	// (0x0004fcaf) list_single_idle_plugin_player_pane_g1

0xb0a1,	// (0x0004d436) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00052107) list_single_idle_plugin_player_pane_g

0xd922,	// (0x0004fcb7) list_single_idle_plugin_player_pane_t1

0xd930,	// (0x0004fcc5) list_single_idle_plugin_player_pane_t2

0xd93e,	// (0x0004fcd3) list_single_idle_plugin_player_pane_t3

0xd94c,	// (0x0004fce1) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005210c) list_single_idle_plugin_player_pane_t

0xd95a,	// (0x0004fcef) wait_bar_pane_cp15

0xd962,	// (0x0004fcf7) grid_ai_notification_pane

0xb0a1,	// (0x0004d436) list_single_idle_plugin_notification_pane_g1

0xd96b,	// (0x0004fd00) cell_ai_notification_pane_ParamLimits

0xd96b,	// (0x0004fd00) cell_ai_notification_pane

0xd978,	// (0x0004fd0d) cell_ai_notification_pane_g1

0xd980,	// (0x0004fd15) cell_ai_notification_pane_t1

0xd98e,	// (0x0004fd23) tb_ext_find_button_pane

0xd996,	// (0x0004fd2b) tb_ext_find_pane_g1

0xd99e,	// (0x0004fd33) tb_ext_find_pane_t1

0x128f,	// (0x00043624) tb_ext_find_button_pane_g1

0xd9ac,	// (0x0004fd41) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00052115) tb_ext_find_button_pane_g

0xd748,	// (0x0004fadd) main_idle_act4_pane_t1_ParamLimits

0xd75a,	// (0x0004faef) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x000520d3) main_idle_act4_pane_t_ParamLimits

0xd782,	// (0x0004fb17) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd790,	// (0x0004fb25) sat_plugin_idle_act4_pane_ParamLimits

0xd790,	// (0x0004fb25) sat_plugin_idle_act4_pane

0xd9b5,	// (0x0004fd4a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9b5,	// (0x0004fd4a) sat_plugin_idle_act4_pane_t1

0xd9c8,	// (0x0004fd5d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9c8,	// (0x0004fd5d) sat_plugin_idle_act4_pane_t2

0xd9db,	// (0x0004fd70) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9db,	// (0x0004fd70) sat_plugin_idle_act4_pane_t3

0xd9ee,	// (0x0004fd83) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9ee,	// (0x0004fd83) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005211a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005211a) sat_plugin_idle_act4_pane_t

0x6590,	// (0x00048925) popup_battery_window_ParamLimits

0x6590,	// (0x00048925) popup_battery_window

0x08bc,	// (0x00042c51) bg_popup_sub_pane_cp25_ParamLimits

0x08bc,	// (0x00042c51) bg_popup_sub_pane_cp25

0xda01,	// (0x0004fd96) popup_battery_window_g1_ParamLimits

0xda01,	// (0x0004fd96) popup_battery_window_g1

0xda0d,	// (0x0004fda2) popup_battery_window_t1_ParamLimits

0xda0d,	// (0x0004fda2) popup_battery_window_t1

0xda1f,	// (0x0004fdb4) popup_battery_window_t2_ParamLimits

0xda1f,	// (0x0004fdb4) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00052123) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00052123) popup_battery_window_t

0x71be,	// (0x00049553) midp_canvas_pane_ParamLimits

0x7221,	// (0x000495b6) midp_keypad_pane_ParamLimits

0x7221,	// (0x000495b6) midp_keypad_pane

0x919b,	// (0x0004b530) main_midp_pane_ParamLimits

0xb7d8,	// (0x0004db6d) signal_pane_g2_cp_ParamLimits

0xda3c,	// (0x0004fdd1) aid_size_cell_midp_keypad_ParamLimits

0xda3c,	// (0x0004fdd1) aid_size_cell_midp_keypad

0xda56,	// (0x0004fdeb) midp_keyp_game_grid_pane_ParamLimits

0xda56,	// (0x0004fdeb) midp_keyp_game_grid_pane

0xda76,	// (0x0004fe0b) midp_keyp_rocker_pane_ParamLimits

0xda76,	// (0x0004fe0b) midp_keyp_rocker_pane

0xdaa5,	// (0x0004fe3a) midp_keyp_sk_left_pane_ParamLimits

0xdaa5,	// (0x0004fe3a) midp_keyp_sk_left_pane

0xdb01,	// (0x0004fe96) midp_keyp_sk_right_pane_ParamLimits

0xdb01,	// (0x0004fe96) midp_keyp_sk_right_pane

0x0719,	// (0x00042aae) bg_button_pane_cp03

0xdb5d,	// (0x0004fef2) midp_keyp_sk_left_pane_g1

0x0719,	// (0x00042aae) bg_button_pane_cp04

0xdb5d,	// (0x0004fef2) midp_keyp_sk_right_pane_g1

0xbcc5,	// (0x0004e05a) midp_keyp_rocker_pane_g1

0xdb65,	// (0x0004fefa) keyp_game_cell_pane_ParamLimits

0xdb65,	// (0x0004fefa) keyp_game_cell_pane

0x0719,	// (0x00042aae) bg_button_pane_cp02

0xdb78,	// (0x0004ff0d) keyp_game_cell_pane_g1

0x65da,	// (0x0004896f) popup_fep_vkb2_window_ParamLimits

0x65da,	// (0x0004896f) popup_fep_vkb2_window

0x85df,	// (0x0004a974) aid_size_cell_vkb2_ParamLimits

0x85df,	// (0x0004a974) aid_size_cell_vkb2

0x8633,	// (0x0004a9c8) popup_fep_vkb2_window_g1_ParamLimits

0x8633,	// (0x0004a9c8) popup_fep_vkb2_window_g1

0x867b,	// (0x0004aa10) vkb2_area_bottom_pane_ParamLimits

0x867b,	// (0x0004aa10) vkb2_area_bottom_pane

0x86cf,	// (0x0004aa64) vkb2_area_keypad_pane_ParamLimits

0x86cf,	// (0x0004aa64) vkb2_area_keypad_pane

0x8715,	// (0x0004aaaa) vkb2_area_top_pane_ParamLimits

0x8715,	// (0x0004aaaa) vkb2_area_top_pane

0x878f,	// (0x0004ab24) vkb2_top_entry_pane_ParamLimits

0x878f,	// (0x0004ab24) vkb2_top_entry_pane

0x87b9,	// (0x0004ab4e) vkb2_top_grid_left_pane_ParamLimits

0x87b9,	// (0x0004ab4e) vkb2_top_grid_left_pane

0x87d7,	// (0x0004ab6c) vkb2_top_grid_right_pane_ParamLimits

0x87d7,	// (0x0004ab6c) vkb2_top_grid_right_pane

0x87f5,	// (0x0004ab8a) vkb2_cell_keypad_pane_ParamLimits

0x87f5,	// (0x0004ab8a) vkb2_cell_keypad_pane

0x88c6,	// (0x0004ac5b) vkb2_area_bottom_grid_pane_ParamLimits

0x88c6,	// (0x0004ac5b) vkb2_area_bottom_grid_pane

0x88ec,	// (0x0004ac81) vkb2_area_bottom_pane_g1_ParamLimits

0x88ec,	// (0x0004ac81) vkb2_area_bottom_pane_g1

0x8910,	// (0x0004aca5) vkb2_area_bottom_pane_g2_ParamLimits

0x8910,	// (0x0004aca5) vkb2_area_bottom_pane_g2

0x893e,	// (0x0004acd3) vkb2_area_bottom_pane_g3_ParamLimits

0x893e,	// (0x0004acd3) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00052128) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00052128) vkb2_area_bottom_pane_g

0x899f,	// (0x0004ad34) vkb2_top_cell_left_pane_ParamLimits

0x899f,	// (0x0004ad34) vkb2_top_cell_left_pane

0xdb89,	// (0x0004ff1e) vkb2_top_entry_pane_g1_ParamLimits

0xdb89,	// (0x0004ff1e) vkb2_top_entry_pane_g1

0xdb97,	// (0x0004ff2c) vkb2_top_entry_pane_t1_ParamLimits

0xdb97,	// (0x0004ff2c) vkb2_top_entry_pane_t1

0xdbc9,	// (0x0004ff5e) vkb2_top_entry_pane_t2_ParamLimits

0xdbc9,	// (0x0004ff5e) vkb2_top_entry_pane_t2

0xdbfb,	// (0x0004ff90) vkb2_top_entry_pane_t3_ParamLimits

0xdbfb,	// (0x0004ff90) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005212f) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005212f) vkb2_top_entry_pane_t

0x89ec,	// (0x0004ad81) vkb2_top_grid_right_pane_g1_ParamLimits

0x89ec,	// (0x0004ad81) vkb2_top_grid_right_pane_g1

0x8a02,	// (0x0004ad97) vkb2_top_grid_right_pane_g2_ParamLimits

0x8a02,	// (0x0004ad97) vkb2_top_grid_right_pane_g2

0x8a1a,	// (0x0004adaf) vkb2_top_grid_right_pane_g3_ParamLimits

0x8a1a,	// (0x0004adaf) vkb2_top_grid_right_pane_g3

0x8a32,	// (0x0004adc7) vkb2_top_grid_right_pane_g4_ParamLimits

0x8a32,	// (0x0004adc7) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00052136) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00052136) vkb2_top_grid_right_pane_g

0x8a48,	// (0x0004addd) vkb2_top_cell_left_pane_g1

0x8a5f,	// (0x0004adf4) vkb2_cell_keypad_pane_g1_ParamLimits

0x8a5f,	// (0x0004adf4) vkb2_cell_keypad_pane_g1

0xdc1f,	// (0x0004ffb4) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc1f,	// (0x0004ffb4) vkb2_cell_keypad_pane_t1

0x8a6d,	// (0x0004ae02) vkb2_cell_bottom_grid_pane_ParamLimits

0x8a6d,	// (0x0004ae02) vkb2_cell_bottom_grid_pane

0x8aa6,	// (0x0004ae3b) vkb2_cell_bottom_grid_pane_g1

0xd7d0,	// (0x0004fb65) aid_call2_pane_cp02

0xd7d8,	// (0x0004fb6d) aid_call_pane_cp02

0xd7e0,	// (0x0004fb75) clock_digital_number_pane_cp10

0xd7e8,	// (0x0004fb7d) clock_digital_number_pane_cp11

0xd7f0,	// (0x0004fb85) clock_digital_number_pane_cp12

0xd7f8,	// (0x0004fb8d) clock_digital_number_pane_cp13

0xd800,	// (0x0004fb95) clock_digital_separator_pane_cp10

0x128f,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g1

0x128f,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g2

0xd808,	// (0x0004fb9d) popup_clock_digital_analogue_window_cp2_g3

0x128f,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g4

0xd808,	// (0x0004fb9d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x000520eb) popup_clock_digital_analogue_window_cp2_g

0xd810,	// (0x0004fba5) popup_clock_digital_analogue_window_cp2_t1

0xd81e,	// (0x0004fbb3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x000520f6) popup_clock_digital_analogue_window_cp2_t

0xbcc5,	// (0x0004e05a) clock_digital_number_pane_cp10_g1

0xbcc5,	// (0x0004e05a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00051ede) clock_digital_number_pane_cp10_g

0xbcc5,	// (0x0004e05a) clock_digital_separator_pane_cp10_g1

0xbcc5,	// (0x0004e05a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00051ede) clock_digital_separator_pane_cp10_g

0xd64b,	// (0x0004f9e0) uniindi_top_pane_g3

0xd65c,	// (0x0004f9f1) uniindi_top_pane_g4

0x8880,	// (0x0004ac15) vkb2_row_keypad_pane_ParamLimits

0x8880,	// (0x0004ac15) vkb2_row_keypad_pane

0x8ac2,	// (0x0004ae57) vkb2_cell_t_keypad_pane_ParamLimits

0x8ac2,	// (0x0004ae57) vkb2_cell_t_keypad_pane

0x8ad2,	// (0x0004ae67) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8ad2,	// (0x0004ae67) vkb2_cell_t_keypad_pane_cp08

0x8ae7,	// (0x0004ae7c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8ae7,	// (0x0004ae7c) vkb2_cell_t_keypad_pane_cp09

0x8afb,	// (0x0004ae90) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8afb,	// (0x0004ae90) vkb2_cell_t_keypad_pane_cp01

0x8b0c,	// (0x0004aea1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8b0c,	// (0x0004aea1) vkb2_cell_t_keypad_pane_cp02

0x8b1d,	// (0x0004aeb2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8b1d,	// (0x0004aeb2) vkb2_cell_t_keypad_pane_cp03

0x8b2e,	// (0x0004aec3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8b2e,	// (0x0004aec3) vkb2_cell_t_keypad_pane_cp04

0x8b3f,	// (0x0004aed4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8b3f,	// (0x0004aed4) vkb2_cell_t_keypad_pane_cp05

0x8b50,	// (0x0004aee5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8b50,	// (0x0004aee5) vkb2_cell_t_keypad_pane_cp06

0x8b63,	// (0x0004aef8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8b63,	// (0x0004aef8) vkb2_cell_t_keypad_pane_cp07

0x8b78,	// (0x0004af0d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8b78,	// (0x0004af0d) vkb2_cell_t_keypad_pane_cp10

0xbf28,	// (0x0004e2bd) vkb2_cell_t_keypad_pane_g1

0xdc36,	// (0x0004ffcb) vkb2_cell_t_keypad_pane_t1

0x0719,	// (0x00042aae) popup_grid_graphic2_window

0xdc48,	// (0x0004ffdd) aid_size_cell_graphic2_ParamLimits

0xdc48,	// (0x0004ffdd) aid_size_cell_graphic2

0xdc80,	// (0x00050015) bg_popup_window_pane_cp21_ParamLimits

0xdc80,	// (0x00050015) bg_popup_window_pane_cp21

0xdc8e,	// (0x00050023) graphic2_pages_pane_ParamLimits

0xdc8e,	// (0x00050023) graphic2_pages_pane

0xdcd4,	// (0x00050069) grid_graphic2_control_pane_ParamLimits

0xdcd4,	// (0x00050069) grid_graphic2_control_pane

0xdd12,	// (0x000500a7) grid_graphic2_pane_ParamLimits

0xdd12,	// (0x000500a7) grid_graphic2_pane

0xdd88,	// (0x0005011d) cell_graphic2_pane

0x0719,	// (0x00042aae) main_comp_mode_pane

0xceb2,	// (0x0004f247) list_ai3_gene_pane_ParamLimits

0xd27e,	// (0x0004f613) bg_popup_window_pane_cp19_ParamLimits

0xd28a,	// (0x0004f61f) bg_touch_area_indi_pane_ParamLimits

0xd28a,	// (0x0004f61f) bg_touch_area_indi_pane

0xd2a0,	// (0x0004f635) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2a0,	// (0x0004f635) bg_touch_area_indi_pane_cp01

0xd2b6,	// (0x0004f64b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2b6,	// (0x0004f64b) bg_touch_area_indi_pane_cp02

0xd2d0,	// (0x0004f665) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2d0,	// (0x0004f665) bg_touch_area_indi_pane_cp03

0xd2ea,	// (0x0004f67f) popup_slider_window_g1_ParamLimits

0xd306,	// (0x0004f69b) popup_slider_window_g2_ParamLimits

0xd322,	// (0x0004f6b7) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00052080) popup_slider_window_g_ParamLimits

0xd388,	// (0x0004f71d) popup_slider_window_t1_ParamLimits

0xd3fc,	// (0x0004f791) small_volume_slider_vertical_pane_ParamLimits

0xdd88,	// (0x0005011d) cell_graphic2_pane_ParamLimits

0xdddd,	// (0x00050172) bg_button_pane_cp10_ParamLimits

0xdddd,	// (0x00050172) bg_button_pane_cp10

0xddf2,	// (0x00050187) bg_button_pane_cp11_ParamLimits

0xddf2,	// (0x00050187) bg_button_pane_cp11

0xde07,	// (0x0005019c) graphic2_pages_pane_g1_ParamLimits

0xde07,	// (0x0005019c) graphic2_pages_pane_g1

0xde22,	// (0x000501b7) graphic2_pages_pane_g2_ParamLimits

0xde22,	// (0x000501b7) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00052144) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00052144) graphic2_pages_pane_g

0xde3a,	// (0x000501cf) graphic2_pages_pane_t1_ParamLimits

0xde3a,	// (0x000501cf) graphic2_pages_pane_t1

0xde50,	// (0x000501e5) cell_graphic2_control_pane_ParamLimits

0xde50,	// (0x000501e5) cell_graphic2_control_pane

0xde70,	// (0x00050205) cell_graphic2_pane_g1_ParamLimits

0xde70,	// (0x00050205) cell_graphic2_pane_g1

0xde7d,	// (0x00050212) cell_graphic2_pane_g2_ParamLimits

0xde7d,	// (0x00050212) cell_graphic2_pane_g2

0xde8a,	// (0x0005021f) cell_graphic2_pane_g3_ParamLimits

0xde8a,	// (0x0005021f) cell_graphic2_pane_g3

0xde97,	// (0x0005022c) cell_graphic2_pane_g4_ParamLimits

0xde97,	// (0x0005022c) cell_graphic2_pane_g4

0xdea4,	// (0x00050239) cell_graphic2_pane_g5_ParamLimits

0xdea4,	// (0x00050239) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00052149) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00052149) cell_graphic2_pane_g

0xdebf,	// (0x00050254) cell_graphic2_pane_t1_ParamLimits

0xdebf,	// (0x00050254) cell_graphic2_pane_t1

0x973f,	// (0x0004bad4) grid_highlight_pane_cp11_ParamLimits

0x973f,	// (0x0004bad4) grid_highlight_pane_cp11

0x08bc,	// (0x00042c51) bg_button_pane_cp05

0xdef6,	// (0x0005028b) cell_graphic2_control_pane_g1

0xbcc5,	// (0x0004e05a) bg_touch_area_indi_pane_g1

0xdf1e,	// (0x000502b3) aid_cmod_rocker_key_size

0xdf28,	// (0x000502bd) aid_cmode_itu_key_size

0xdf32,	// (0x000502c7) main_cmode_video_pane

0xdf3c,	// (0x000502d1) main_comp_mode_itu_pane

0xdf48,	// (0x000502dd) main_comp_mode_rocker_pane

0xdf54,	// (0x000502e9) cell_cmode_rocker_pane_ParamLimits

0xdf54,	// (0x000502e9) cell_cmode_rocker_pane

0xdf68,	// (0x000502fd) cell_cmode_itu_pane_ParamLimits

0xdf68,	// (0x000502fd) cell_cmode_itu_pane

0x0dc7,	// (0x0004315c) bg_button_pane_cp06_ParamLimits

0x0dc7,	// (0x0004315c) bg_button_pane_cp06

0xbf28,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) cell_cmode_rocker_pane_g1

0xd4a3,	// (0x0004f838) cell_cmode_rocker_pane_g2_ParamLimits

0xd4a3,	// (0x0004f838) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00052159) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00052159) cell_cmode_rocker_pane_g

0x0719,	// (0x00042aae) bg_button_pane_cp07

0xdf7f,	// (0x00050314) cell_cmode_itu_pane_g1

0xdf88,	// (0x0005031d) cell_cmode_itu_pane_t1

0xdf96,	// (0x0005032b) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005215e) cell_cmode_itu_pane_t

0xd6cf,	// (0x0004fa64) aid_touch_ctrl_left

0xd6d7,	// (0x0004fa6c) aid_touch_ctrl_right

0x0719,	// (0x00042aae) compa_mode_pane

0xdfa4,	// (0x00050339) aid_cmod_rocker_key_size_cp

0xdfae,	// (0x00050343) aid_cmode_itu_key_size_cp

0xdfb8,	// (0x0005034d) compa_mode_pane_g1

0xdfc0,	// (0x00050355) compa_mode_pane_g2

0xdfc8,	// (0x0005035d) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00052163) compa_mode_pane_g

0xdfd0,	// (0x00050365) main_comp_mode_itu_pane_cp

0xdfd8,	// (0x0005036d) main_comp_mode_rocker_pane_cp

0xdfe0,	// (0x00050375) cell_cmode_itu_pane_cp_ParamLimits

0xdfe0,	// (0x00050375) cell_cmode_itu_pane_cp

0xdff5,	// (0x0005038a) cell_cmode_rocker_pane_cp_ParamLimits

0xdff5,	// (0x0005038a) cell_cmode_rocker_pane_cp

0x0dc7,	// (0x0004315c) bg_button_pane_cp06_cp_ParamLimits

0x0dc7,	// (0x0004315c) bg_button_pane_cp06_cp

0xbf28,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf28,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_cp

0xbcc5,	// (0x0004e05a) cell_cmode_rocker_pane_g2_cp

0x0719,	// (0x00042aae) bg_button_pane_cp07_cp

0xe007,	// (0x0005039c) cell_cmode_itu_pane_g1_cp

0xe010,	// (0x000503a5) cell_cmode_itu_pane_t1_cp

0xe010,	// (0x000503a5) cell_cmode_itu_pane_t2_cp

0xac03,	// (0x0004cf98) settings_code_pane_cp2

0x0789,	// (0x00042b1e) bg_popup_window_pane_cp3_ParamLimits

0x0ad0,	// (0x00042e65) heading_pane_cp3_ParamLimits

0x0adc,	// (0x00042e71) listscroll_popup_graphic_pane_ParamLimits

0x8087,	// (0x0004a41c) fep_hwr_aid_pane_ParamLimits

0x8554,	// (0x0004a8e9) aid_touch_sctrl_top_ParamLimits

0x8561,	// (0x0004a8f6) sctrl_sk_top_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00052099) sctrl_sk_top_pane_g_ParamLimits

0x856e,	// (0x0004a903) sctrl_sk_top_pane_t1_ParamLimits

0x8554,	// (0x0004a8e9) aid_touch_sctrl_bottom_ParamLimits

0x856e,	// (0x0004a903) sctrl_sk_bottom_pane_t1_ParamLimits

0xd615,	// (0x0004f9aa) aid_area_touch_clock

0x8757,	// (0x0004aaec) aid_vkb2_area_top_pane_cell_ParamLimits

0x8757,	// (0x0004aaec) aid_vkb2_area_top_pane_cell

0x88a2,	// (0x0004ac37) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x88a2,	// (0x0004ac37) aid_vkb2_area_bottom_pane_cell

0xdb81,	// (0x0004ff16) popup_char_count_window

0xe01e,	// (0x000503b3) popup_char_count_window_g1

0xe027,	// (0x000503bc) popup_char_count_window_g2

0xe030,	// (0x000503c5) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005216a) popup_char_count_window_g

0xe039,	// (0x000503ce) popup_char_count_window_t1

0x8611,	// (0x0004a9a6) popup_fep_char_preview_window_ParamLimits

0x8611,	// (0x0004a9a6) popup_fep_char_preview_window

0x8775,	// (0x0004ab0a) vkb2_top_candi_pane_ParamLimits

0x8775,	// (0x0004ab0a) vkb2_top_candi_pane

0xe047,	// (0x000503dc) cell_vkb2_top_candi_pane_ParamLimits

0xe047,	// (0x000503dc) cell_vkb2_top_candi_pane

0x9d29,	// (0x0004c0be) bg_popup_fep_char_preview_window_ParamLimits

0x9d29,	// (0x0004c0be) bg_popup_fep_char_preview_window

0x8b8d,	// (0x0004af22) popup_fep_char_preview_window_t1_ParamLimits

0x8b8d,	// (0x0004af22) popup_fep_char_preview_window_t1

0xe098,	// (0x0005042d) bg_popup_fep_char_preview_window_g1

0xe0a0,	// (0x00050435) bg_popup_fep_char_preview_window_g2

0xe0a8,	// (0x0005043d) bg_popup_fep_char_preview_window_g3

0xe0b0,	// (0x00050445) bg_popup_fep_char_preview_window_g4

0xe0b8,	// (0x0005044d) bg_popup_fep_char_preview_window_g5

0x8bc7,	// (0x0004af5c) bg_popup_fep_char_preview_window_g6

0xe0c0,	// (0x00050455) bg_popup_fep_char_preview_window_g7

0xe0c8,	// (0x0005045d) bg_popup_fep_char_preview_window_g8

0xe0d0,	// (0x00050465) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00052171) bg_popup_fep_char_preview_window_g

0xbf28,	// (0x0004e2bd) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbf28,	// (0x0004e2bd) cell_vkb2_top_candi_pane_g1

0xc269,	// (0x0004e5fe) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc269,	// (0x0004e5fe) cell_vkb2_top_candi_pane_g2

0xc28a,	// (0x0004e61f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc28a,	// (0x0004e61f) cell_vkb2_top_candi_pane_g3

0x8bcf,	// (0x0004af64) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8bcf,	// (0x0004af64) cell_vkb2_top_candi_pane_g4

0xe0d8,	// (0x0005046d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe0d8,	// (0x0005046d) cell_vkb2_top_candi_pane_g5

0xd4a3,	// (0x0004f838) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4a3,	// (0x0004f838) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00052184) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00052184) cell_vkb2_top_candi_pane_g

0x8bf0,	// (0x0004af85) cell_vkb2_top_candi_pane_t1

0x7e09,	// (0x0004a19e) aid_size_touch_slider_mark_ParamLimits

0x7e09,	// (0x0004a19e) aid_size_touch_slider_mark

0xdcc4,	// (0x00050059) grid_graphic2_catg_pane_ParamLimits

0xdcc4,	// (0x00050059) grid_graphic2_catg_pane

0xdd62,	// (0x000500f7) popup_grid_graphic2_window_t1_ParamLimits

0xdd62,	// (0x000500f7) popup_grid_graphic2_window_t1

0xdd74,	// (0x00050109) popup_grid_graphic2_window_t2_ParamLimits

0xdd74,	// (0x00050109) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005213f) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005213f) popup_grid_graphic2_window_t

0x08bc,	// (0x00042c51) bg_button_pane_cp05_ParamLimits

0xdef6,	// (0x0005028b) cell_graphic2_control_pane_g1_ParamLimits

0xe0f9,	// (0x0005048e) cell_graphic2_catg_pane_ParamLimits

0xe0f9,	// (0x0005048e) cell_graphic2_catg_pane

0x0719,	// (0x00042aae) bg_button_pane_cp12

0xe10b,	// (0x000504a0) cell_graphic2_catg_pane_g1

0xd5e1,	// (0x0004f976) cell_tb_ext_pane_t1_ParamLimits

0x89bf,	// (0x0004ad54) vkb2_top_cell_right_narrow_pane_ParamLimits

0x89bf,	// (0x0004ad54) vkb2_top_cell_right_narrow_pane

0x89d7,	// (0x0004ad6c) vkb2_top_cell_right_wide_pane_ParamLimits

0x89d7,	// (0x0004ad6c) vkb2_top_cell_right_wide_pane

0x8079,	// (0x0004a40e) bg_vkb2_func_pane_ParamLimits

0x8079,	// (0x0004a40e) bg_vkb2_func_pane

0x8a48,	// (0x0004addd) vkb2_top_cell_left_pane_g1_ParamLimits

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp03

0x8aa6,	// (0x0004ae3b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x96d3,	// (0x0004ba68) bg_vkb2_func_pane_g1

0x96db,	// (0x0004ba70) bg_vkb2_func_pane_g2

0x96eb,	// (0x0004ba80) bg_vkb2_func_pane_g3

0x96e3,	// (0x0004ba78) bg_vkb2_func_pane_g4

0x96f3,	// (0x0004ba88) bg_vkb2_func_pane_g5

0x96fb,	// (0x0004ba90) bg_vkb2_func_pane_g6

0x9703,	// (0x0004ba98) bg_vkb2_func_pane_g7

0x970b,	// (0x0004baa0) bg_vkb2_func_pane_g8

0x96cb,	// (0x0004ba60) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00052191) bg_vkb2_func_pane_g

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp01

0x8a48,	// (0x0004addd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8a48,	// (0x0004addd) vkb2_top_cell_right_wide_pane_g1

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8079,	// (0x0004a40e) bg_vkb2_fuc_pane_cp02

0x8aa6,	// (0x0004ae3b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8aa6,	// (0x0004ae3b) vkb2_top_cell_right_narrow_pane_g1

0xd1f8,	// (0x0004f58d) aid_touch_area_decrease_ParamLimits

0xd1f8,	// (0x0004f58d) aid_touch_area_decrease

0xd21c,	// (0x0004f5b1) aid_touch_area_increase_ParamLimits

0xd21c,	// (0x0004f5b1) aid_touch_area_increase

0xd234,	// (0x0004f5c9) aid_touch_area_mute_ParamLimits

0xd234,	// (0x0004f5c9) aid_touch_area_mute

0xd250,	// (0x0004f5e5) aid_touch_area_slider_ParamLimits

0xd250,	// (0x0004f5e5) aid_touch_area_slider

0xd33e,	// (0x0004f6d3) popup_slider_window_g4_ParamLimits

0xd33e,	// (0x0004f6d3) popup_slider_window_g4

0xd356,	// (0x0004f6eb) popup_slider_window_g5_ParamLimits

0xd356,	// (0x0004f6eb) popup_slider_window_g5

0xd378,	// (0x0004f70d) popup_slider_window_g6_ParamLimits

0xd378,	// (0x0004f70d) popup_slider_window_g6

0xd3b6,	// (0x0004f74b) popup_slider_window_t2_ParamLimits

0xd3b6,	// (0x0004f74b) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005208d) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005208d) popup_slider_window_t

0xd3ce,	// (0x0004f763) slider_pane_ParamLimits

0xd3ce,	// (0x0004f763) slider_pane

0xe114,	// (0x000504a9) slider_pane_g1_ParamLimits

0xe114,	// (0x000504a9) slider_pane_g1

0xe128,	// (0x000504bd) slider_pane_g2_ParamLimits

0xe128,	// (0x000504bd) slider_pane_g2

0xe13e,	// (0x000504d3) slider_pane_g3_ParamLimits

0xe13e,	// (0x000504d3) slider_pane_g3

0x0003,

0xfe0f,	// (0x000521a4) slider_pane_g_ParamLimits

0xfe0f,	// (0x000521a4) slider_pane_g

0x79eb,	// (0x00049d80) popup_tb_float_extension_window_ParamLimits

0x79eb,	// (0x00049d80) popup_tb_float_extension_window

0xe16a,	// (0x000504ff) aid_size_cell_tb_float_ext

0x0719,	// (0x00042aae) bg_popup_sub_window_cp28

0xe176,	// (0x0005050b) grid_tb_float_ext_pane

0xe182,	// (0x00050517) cell_tb_float_ext_pane_ParamLimits

0xe182,	// (0x00050517) cell_tb_float_ext_pane

0xe1a6,	// (0x0005053b) cell_tb_float_ext_pane_g1

0xe1af,	// (0x00050544) grid_highlight_pane_cp12

0x81c0,	// (0x0004a555) cell_last_hwr_side_pane_ParamLimits

0x81c0,	// (0x0004a555) cell_last_hwr_side_pane

0xbcc5,	// (0x0004e05a) cell_last_hwr_side_pane_g1

0xe1b8,	// (0x0005054d) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x000521ad) cell_last_hwr_side_pane_g

0x896e,	// (0x0004ad03) vkb2_area_bottom_space_btn_pane_ParamLimits

0x896e,	// (0x0004ad03) vkb2_area_bottom_space_btn_pane

0xbf28,	// (0x0004e2bd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc36,	// (0x0004ffcb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8bf0,	// (0x0004af85) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8c0e,	// (0x0004afa3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8c0e,	// (0x0004afa3) vkb2_area_bottom_space_btn_pane_g1

0x8c48,	// (0x0004afdd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8c48,	// (0x0004afdd) vkb2_area_bottom_space_btn_pane_g2

0x8c7e,	// (0x0004b013) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8c7e,	// (0x0004b013) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x000521b2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x000521b2) vkb2_area_bottom_space_btn_pane_g

0x8130,	// (0x0004a4c5) cel_fep_hwr_func_pane_ParamLimits

0x8130,	// (0x0004a4c5) cel_fep_hwr_func_pane

0x816c,	// (0x0004a501) cell_hwr_side_button_pane_ParamLimits

0x816c,	// (0x0004a501) cell_hwr_side_button_pane

0xd615,	// (0x0004f9aa) aid_area_touch_clock_ParamLimits

0x08bc,	// (0x00042c51) bg_uniindi_top_pane_ParamLimits

0xd629,	// (0x0004f9be) uniindi_top_pane_g1_ParamLimits

0xd63f,	// (0x0004f9d4) uniindi_top_pane_g2_ParamLimits

0xd64b,	// (0x0004f9e0) uniindi_top_pane_g3_ParamLimits

0xd65c,	// (0x0004f9f1) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x000520c5) uniindi_top_pane_g_ParamLimits

0xd669,	// (0x0004f9fe) uniindi_top_pane_t1_ParamLimits

0x08bc,	// (0x00042c51) bg_vkb2_func_pane_cp01_ParamLimits

0x08bc,	// (0x00042c51) bg_vkb2_func_pane_cp01

0xe1c1,	// (0x00050556) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1c1,	// (0x00050556) cel_fep_hwr_func_pane_g1

0x08bc,	// (0x00042c51) bg_vkb2_func_pane_cp02_ParamLimits

0x08bc,	// (0x00042c51) bg_vkb2_func_pane_cp02

0xe1c1,	// (0x00050556) cell_hwr_side_button_pane_g1_ParamLimits

0xe1c1,	// (0x00050556) cell_hwr_side_button_pane_g1

0x9550,	// (0x0004b8e5) status_pane_g4_ParamLimits

0x9550,	// (0x0004b8e5) status_pane_g4

0x956a,	// (0x0004b8ff) status_pane_t1

0xba78,	// (0x0004de0d) form2_midp_gauge_slider_cont_pane

0xba80,	// (0x0004de15) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba92,	// (0x0004de27) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbaa4,	// (0x0004de39) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00051e91) form2_midp_gauge_slider_pane_t_ParamLimits

0xbab6,	// (0x0004de4b) form2_midp_slider_pane_ParamLimits

0x85d1,	// (0x0004a966) aid_size_cell_func_vkb2_ParamLimits

0x85d1,	// (0x0004a966) aid_size_cell_func_vkb2

0xe156,	// (0x000504eb) slider_pane_g4_ParamLimits

0xe156,	// (0x000504eb) slider_pane_g4

0x8cc8,	// (0x0004b05d) form2_midp_gauge_slider_pane_t2_cp01

0x8cd6,	// (0x0004b06b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8cd6,	// (0x0004b06b) form2_midp_gauge_slider_pane_t3_cp01

0x8cf3,	// (0x0004b088) form2_midp_slider_pane_cp01

0x0719,	// (0x00042aae) navi_smil_pane

0xe1fa,	// (0x0005058f) navi_smil_pane_g1

0xe202,	// (0x00050597) navi_smil_pane_t1

0xe1cf,	// (0x00050564) form2_midp_slider_pane_g1

0xe1d8,	// (0x0005056d) form2_midp_slider_pane_g2

0xe1e0,	// (0x00050575) form2_midp_slider_pane_g3

0xe1cf,	// (0x00050564) form2_midp_slider_pane_g4

0xe1e8,	// (0x0005057d) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x000521bb) form2_midp_slider_pane_g

0x8cb8,	// (0x0004b04d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8cb8,	// (0x0004b04d) vkb2_area_bottom_space_btn_pane_g4

0x936f,	// (0x0004b704) lc0_navi_pane_ParamLimits

0x936f,	// (0x0004b704) lc0_navi_pane

0x93eb,	// (0x0004b780) lc0_stat_indi_pane_ParamLimits

0x93eb,	// (0x0004b780) lc0_stat_indi_pane

0x9402,	// (0x0004b797) ls0_title_pane_ParamLimits

0x9402,	// (0x0004b797) ls0_title_pane

0x0dc7,	// (0x0004315c) bg_popup_sub_pane_cp14_ParamLimits

0xd5fc,	// (0x0004f991) list_uniindi_pane_ParamLimits

0xd608,	// (0x0004f99d) uniindi_top_pane_ParamLimits

0xd6a7,	// (0x0004fa3c) list_single_uniindi_pane_g1_ParamLimits

0xd6ba,	// (0x0004fa4f) list_single_uniindi_pane_t1_ParamLimits

0x8cfc,	// (0x0004b091) lc0_stat_clock_pane_ParamLimits

0x8cfc,	// (0x0004b091) lc0_stat_clock_pane

0xe210,	// (0x000505a5) lc0_stat_indi_pane_g1_ParamLimits

0xe210,	// (0x000505a5) lc0_stat_indi_pane_g1

0xe21d,	// (0x000505b2) lc0_stat_indi_pane_g2_ParamLimits

0xe21d,	// (0x000505b2) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x000521c6) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x000521c6) lc0_stat_indi_pane_g

0x8d09,	// (0x0004b09e) lc0_uni_indicator_pane_ParamLimits

0x8d09,	// (0x0004b09e) lc0_uni_indicator_pane

0xe22a,	// (0x000505bf) ls0_title_pane_g1_ParamLimits

0xe22a,	// (0x000505bf) ls0_title_pane_g1

0xe23e,	// (0x000505d3) ls0_title_pane_t1_ParamLimits

0xe23e,	// (0x000505d3) ls0_title_pane_t1

0x8d16,	// (0x0004b0ab) lc0_uni_indicator_pane_g1_ParamLimits

0x8d16,	// (0x0004b0ab) lc0_uni_indicator_pane_g1

0xe274,	// (0x00050609) lc0_stat_clock_pane_t1

0x0719,	// (0x00042aae) main_ai5_pane

0xe282,	// (0x00050617) ai5_sk_pane_ParamLimits

0xe282,	// (0x00050617) ai5_sk_pane

0xe28f,	// (0x00050624) cell_ai5_widget_pane_ParamLimits

0xe28f,	// (0x00050624) cell_ai5_widget_pane

0xe831,	// (0x00050bc6) aid_size_cell_widget_grid

0xe83f,	// (0x00050bd4) bg_ai5_widget_pane_ParamLimits

0xe83f,	// (0x00050bd4) bg_ai5_widget_pane

0xe8b7,	// (0x00050c4c) cell_ai5_widget_pane_g2

0xe8cb,	// (0x00050c60) cell_ai5_widget_pane_g3

0xe8e5,	// (0x00050c7a) cell_ai5_widget_pane_g4

0xe8f5,	// (0x00050c8a) cell_ai5_widget_pane_g5

0xe905,	// (0x00050c9a) cell_ai5_widget_pane_g6

0xe911,	// (0x00050ca6) cell_ai5_widget_pane_g7

0xe959,	// (0x00050cee) cell_ai5_widget_pane_t1_ParamLimits

0xe959,	// (0x00050cee) cell_ai5_widget_pane_t1

0xe976,	// (0x00050d0b) cell_ai5_widget_pane_t2_ParamLimits

0xe976,	// (0x00050d0b) cell_ai5_widget_pane_t2

0xe98e,	// (0x00050d23) cell_ai5_widget_pane_t3_ParamLimits

0xe98e,	// (0x00050d23) cell_ai5_widget_pane_t3

0xe9a6,	// (0x00050d3b) cell_ai5_widget_pane_t4_ParamLimits

0xe9a6,	// (0x00050d3b) cell_ai5_widget_pane_t4

0xe9cc,	// (0x00050d61) cell_ai5_widget_pane_t5_ParamLimits

0xe9cc,	// (0x00050d61) cell_ai5_widget_pane_t5

0xe9ec,	// (0x00050d81) cell_ai5_widget_pane_t6_ParamLimits

0xe9ec,	// (0x00050d81) cell_ai5_widget_pane_t6

0xe9fe,	// (0x00050d93) cell_ai5_widget_pane_t7_ParamLimits

0xe9fe,	// (0x00050d93) cell_ai5_widget_pane_t7

0xea17,	// (0x00050dac) cell_ai5_widget_pane_t8_ParamLimits

0xea17,	// (0x00050dac) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x000521e0) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x000521e0) cell_ai5_widget_pane_t

0xea76,	// (0x00050e0b) grid_ai5_widget_pane

0x0dc7,	// (0x0004315c) highlight_cell_ai5_widget_pane_ParamLimits

0x0dc7,	// (0x0004315c) highlight_cell_ai5_widget_pane

0xea84,	// (0x00050e19) ai5_sk_left_pane

0xea8e,	// (0x00050e23) ai5_sk_middle_pane

0xea98,	// (0x00050e2d) ai5_sk_right_pane

0xeaa2,	// (0x00050e37) bg_ai5_widget_pane_g1_ParamLimits

0xeaa2,	// (0x00050e37) bg_ai5_widget_pane_g1

0xeaae,	// (0x00050e43) bg_ai5_widget_pane_g2_ParamLimits

0xeaae,	// (0x00050e43) bg_ai5_widget_pane_g2

0xeaba,	// (0x00050e4f) bg_ai5_widget_pane_g3_ParamLimits

0xeaba,	// (0x00050e4f) bg_ai5_widget_pane_g3

0xeac6,	// (0x00050e5b) bg_ai5_widget_pane_g4_ParamLimits

0xeac6,	// (0x00050e5b) bg_ai5_widget_pane_g4

0xead2,	// (0x00050e67) bg_ai5_widget_pane_g5_ParamLimits

0xead2,	// (0x00050e67) bg_ai5_widget_pane_g5

0xeade,	// (0x00050e73) bg_ai5_widget_pane_g6_ParamLimits

0xeade,	// (0x00050e73) bg_ai5_widget_pane_g6

0xeaea,	// (0x00050e7f) bg_ai5_widget_pane_g7_ParamLimits

0xeaea,	// (0x00050e7f) bg_ai5_widget_pane_g7

0xeaf6,	// (0x00050e8b) bg_ai5_widget_pane_g8_ParamLimits

0xeaf6,	// (0x00050e8b) bg_ai5_widget_pane_g8

0xeb02,	// (0x00050e97) bg_ai5_widget_pane_g9_ParamLimits

0xeb02,	// (0x00050e97) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x000521f5) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x000521f5) bg_ai5_widget_pane_g

0xeb3a,	// (0x00050ecf) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb3a,	// (0x00050ecf) cell_shortcut_ai5_widget_pane

0x482e,	// (0x00046bc3) bg_cell_shortcut_ai5_widget_pane

0xeb4d,	// (0x00050ee2) cell_grid_ai5_widget_pane_g1

0x482e,	// (0x00046bc3) highlight_cell_shortcut_ai5_widget_pane

0x96db,	// (0x0004ba70) ai5_sk_left_pane_g1

0xeb56,	// (0x00050eeb) ai5_sk_left_pane_g2

0xeb5e,	// (0x00050ef3) ai5_sk_left_pane_g3

0xeb66,	// (0x00050efb) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00052208) ai5_sk_left_pane_g

0xeb6e,	// (0x00050f03) ai5_sk_left_pane_t1

0x96d3,	// (0x0004ba68) ai5_sk_right_pane_g1

0xeb7c,	// (0x00050f11) ai5_sk_right_pane_g2

0xeb84,	// (0x00050f19) ai5_sk_right_pane_g3

0xeb8c,	// (0x00050f21) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00052211) ai5_sk_right_pane_g

0xeb94,	// (0x00050f29) ai5_sk_right_pane_t1

0x96d3,	// (0x0004ba68) ai5_sk_middle_pane_g1

0x96db,	// (0x0004ba70) ai5_sk_middle_pane_g2

0x96f3,	// (0x0004ba88) ai5_sk_middle_pane_g3

0xeb84,	// (0x00050f19) ai5_sk_middle_pane_g4

0xeb5e,	// (0x00050ef3) ai5_sk_middle_pane_g5

0xeba2,	// (0x00050f37) ai5_sk_middle_pane_g6

0xebaa,	// (0x00050f3f) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005221a) ai5_sk_middle_pane_g

0x91fb,	// (0x0004b590) aid_touch_area_size_lc0_ParamLimits

0x91fb,	// (0x0004b590) aid_touch_area_size_lc0

0x82cf,	// (0x0004a664) cell_hwr_candidate_pane_t1_ParamLimits

0x9219,	// (0x0004b5ae) aid_touch_navi_pane

0x9502,	// (0x0004b897) status_dt_navi_pane_ParamLimits

0x9502,	// (0x0004b897) status_dt_navi_pane

0x950f,	// (0x0004b8a4) status_dt_sta_pane_ParamLimits

0x950f,	// (0x0004b8a4) status_dt_sta_pane

0xebb2,	// (0x00050f47) dt_sta_controll_pane

0xebbf,	// (0x00050f54) dt_sta_indi_pane

0xebd0,	// (0x00050f65) dt_sta_title_pane

0x08bc,	// (0x00042c51) bg_dt_sta_indi_pane_ParamLimits

0x08bc,	// (0x00042c51) bg_dt_sta_indi_pane

0xebe3,	// (0x00050f78) dt_sta_battery_pane

0xebeb,	// (0x00050f80) dt_sta_indi_pane_g1

0xebf4,	// (0x00050f89) dt_sta_indi_pane_g2

0xebfd,	// (0x00050f92) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00052229) dt_sta_indi_pane_g

0xec06,	// (0x00050f9b) dt_sta_signal_pane

0x0dc7,	// (0x0004315c) bg_dt_sta_title_pane_ParamLimits

0x0dc7,	// (0x0004315c) bg_dt_sta_title_pane

0xec0f,	// (0x00050fa4) dt_sta_title_pane_g1

0xec17,	// (0x00050fac) dt_sta_title_pane_t1_ParamLimits

0xec17,	// (0x00050fac) dt_sta_title_pane_t1

0x0719,	// (0x00042aae) bg_dt_sta_control_pane

0xec2c,	// (0x00050fc1) dt_sta_controll_pane_g1

0xec35,	// (0x00050fca) bg_dt_sta_title_pane_g1

0xec3e,	// (0x00050fd3) bg_dt_sta_title_pane_g2

0xec47,	// (0x00050fdc) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00052230) bg_dt_sta_title_pane_g

0xbcc5,	// (0x0004e05a) bg_dt_sta_indi_pane_g1

0xec50,	// (0x00050fe5) dt_sta_signal_pane_g1

0xec58,	// (0x00050fed) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00052237) dt_sta_signal_pane_g

0xec60,	// (0x00050ff5) dt_sta_battery_pane_g1

0xec69,	// (0x00050ffe) dt_sta_battery_pane_t1

0xbcc5,	// (0x0004e05a) bg_dt_sta_control_pane_g1

0x1311,	// (0x000436a6) fep_china_uni_eep_pane

0x1319,	// (0x000436ae) fep_china_uni_entry_pane_ParamLimits

0x1329,	// (0x000436be) popup_fep_china_uni_window_g1_ParamLimits

0x1339,	// (0x000436ce) popup_fep_china_uni_window_g2_ParamLimits

0x1339,	// (0x000436ce) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00051ab7) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00051ab7) popup_fep_china_uni_window_g

0xec78,	// (0x0005100d) fep_china_uni_eep_pane_g1

0xec80,	// (0x00051015) fep_china_uni_eep_pane_t1

0xe1f1,	// (0x00050586) aid_touch_area_size_smil_player

0x9367,	// (0x0004b6fc) lc0_clock_pane

0x955e,	// (0x0004b8f3) status_pane_g5_ParamLimits

0x955e,	// (0x0004b8f3) status_pane_g5

0x7670,	// (0x00049a05) popup_keymap_window

0x9524,	// (0x0004b8b9) status_icon_pane

0xe8cb,	// (0x00050c60) cell_ai5_widget_pane_g3_ParamLimits

0xe8e5,	// (0x00050c7a) cell_ai5_widget_pane_g4_ParamLimits

0xe8f5,	// (0x00050c8a) cell_ai5_widget_pane_g5_ParamLimits

0xe91d,	// (0x00050cb2) cell_ai5_widget_pane_g8_ParamLimits

0xe91d,	// (0x00050cb2) cell_ai5_widget_pane_g8

0xe931,	// (0x00050cc6) cell_ai5_widget_pane_g9_ParamLimits

0xe931,	// (0x00050cc6) cell_ai5_widget_pane_g9

0xe945,	// (0x00050cda) cell_ai5_widget_pane_g10_ParamLimits

0xe945,	// (0x00050cda) cell_ai5_widget_pane_g10

0xec8f,	// (0x00051024) status_icon_pane_g1

0x0719,	// (0x00042aae) bg_popup_sub_pane_cp13

0xec97,	// (0x0005102c) popup_keymap_window_t1

0x9144,	// (0x0004b4d9) control_pane_g6_ParamLimits

0x9144,	// (0x0004b4d9) control_pane_g6

0x9151,	// (0x0004b4e6) control_pane_g7_ParamLimits

0x9151,	// (0x0004b4e6) control_pane_g7

0x915e,	// (0x0004b4f3) control_pane_g8_ParamLimits

0x915e,	// (0x0004b4f3) control_pane_g8

0xebb2,	// (0x00050f47) dt_sta_controll_pane_ParamLimits

0xebbf,	// (0x00050f54) dt_sta_indi_pane_ParamLimits

0xebd0,	// (0x00050f65) dt_sta_title_pane_ParamLimits

0x0d09,	// (0x0004309e) aid_size_touch_scroll_bar_cale

0x65a8,	// (0x0004893d) popup_discreet_window_ParamLimits

0x65a8,	// (0x0004893d) popup_discreet_window

0x6636,	// (0x000489cb) popup_sk_window

0x9d29,	// (0x0004c0be) bg_popup_sub_pane_cp28_ParamLimits

0x9d29,	// (0x0004c0be) bg_popup_sub_pane_cp28

0xeca5,	// (0x0005103a) popup_discreet_window_g1_ParamLimits

0xeca5,	// (0x0005103a) popup_discreet_window_g1

0xecc5,	// (0x0005105a) popup_discreet_window_t1_ParamLimits

0xecc5,	// (0x0005105a) popup_discreet_window_t1

0xece3,	// (0x00051078) popup_discreet_window_t2_ParamLimits

0xece3,	// (0x00051078) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005223c) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005223c) popup_discreet_window_t

0x8d29,	// (0x0004b0be) popup_sk_window_g1

0x8d33,	// (0x0004b0c8) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00052243) popup_sk_window_g

0x8d3b,	// (0x0004b0d0) popup_sk_window_t1

0x8d49,	// (0x0004b0de) popup_sk_window_t1_copy1

0xe8b7,	// (0x00050c4c) cell_ai5_widget_pane_g2_ParamLimits

0xea29,	// (0x00050dbe) cell_ai5_widget_pane_t9_ParamLimits

0xea29,	// (0x00050dbe) cell_ai5_widget_pane_t9

0x0719,	// (0x00042aae) main_fep_fshwr2_pane

0x8d57,	// (0x0004b0ec) aid_fshwr2_btn_pane

0x8d63,	// (0x0004b0f8) aid_fshwr2_syb_pane

0x8d75,	// (0x0004b10a) aid_fshwr2_txt_pane

0x8d81,	// (0x0004b116) fshwr2_func_candi_pane

0x8d97,	// (0x0004b12c) fshwr2_hwr_syb_pane

0x8dab,	// (0x0004b140) fshwr2_icf_pane

0x0719,	// (0x00042aae) fshwr2_icf_bg_pane

0x8ddf,	// (0x0004b174) fshwr2_icf_pane_t1_ParamLimits

0x8ddf,	// (0x0004b174) fshwr2_icf_pane_t1

0x128f,	// (0x00043624) fshwr2_func_candi_pane_g1

0xed35,	// (0x000510ca) fshwr2_func_candi_row_pane_ParamLimits

0xed35,	// (0x000510ca) fshwr2_func_candi_row_pane

0x8df7,	// (0x0004b18c) cell_fshwr2_syb_pane_ParamLimits

0x8df7,	// (0x0004b18c) cell_fshwr2_syb_pane

0xe1c1,	// (0x00050556) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe1c1,	// (0x00050556) fshwr2_hwr_syb_pane_g1

0x0719,	// (0x00042aae) bg_popup_call_pane_cp01

0x8e18,	// (0x0004b1ad) fshwr2_func_candi_cell_pane_ParamLimits

0x8e18,	// (0x0004b1ad) fshwr2_func_candi_cell_pane

0xed58,	// (0x000510ed) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed58,	// (0x000510ed) fshwr2_func_candi_cell_bg_pane

0x8e69,	// (0x0004b1fe) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8e69,	// (0x0004b1fe) fshwr2_func_candi_cell_pane_g1

0x8e89,	// (0x0004b21e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8e89,	// (0x0004b21e) fshwr2_func_candi_cell_pane_t1

0x0719,	// (0x00042aae) bg_button_pane_cp08

0xed64,	// (0x000510f9) cell_fshwr2_syb_bg_pane

0x8e9c,	// (0x0004b231) cell_fshwr2_syb_bg_pane_g1

0x8eb0,	// (0x0004b245) cell_fshwr2_syb_bg_pane_t1

0x0dc7,	// (0x0004315c) main_tmo_pane

0xa84d,	// (0x0004cbe2) uni_indicator_pane_g1_ParamLimits

0xa860,	// (0x0004cbf5) uni_indicator_pane_g2_ParamLimits

0xa872,	// (0x0004cc07) uni_indicator_pane_g3_ParamLimits

0xa881,	// (0x0004cc16) uni_indicator_pane_g4_ParamLimits

0xa881,	// (0x0004cc16) uni_indicator_pane_g4

0xa895,	// (0x0004cc2a) uni_indicator_pane_g5_ParamLimits

0xa895,	// (0x0004cc2a) uni_indicator_pane_g5

0xa895,	// (0x0004cc2a) uni_indicator_pane_g6_ParamLimits

0xa895,	// (0x0004cc2a) uni_indicator_pane_g6

0xf926,	// (0x00051cbb) uni_indicator_pane_g_ParamLimits

0xd1c8,	// (0x0004f55d) popup_tmo_note_window_ParamLimits

0xd1c8,	// (0x0004f55d) popup_tmo_note_window

0x0dc7,	// (0x0004315c) fshwr2_bg_pane

0x8e7a,	// (0x0004b20f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8e7a,	// (0x0004b20f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00052248) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00052248) fshwr2_func_candi_cell_pane_g

0xbcc5,	// (0x0004e05a) bg_popup_window_pane_cp01

0x8ec6,	// (0x0004b25b) bg_popup_window_pane_g1_cp01

0xed70,	// (0x00051105) bg_popup_window_pane_cp22_ParamLimits

0xed70,	// (0x00051105) bg_popup_window_pane_cp22

0xed7e,	// (0x00051113) listscroll_tmo_link_pane_ParamLimits

0xed7e,	// (0x00051113) listscroll_tmo_link_pane

0xedbe,	// (0x00051153) popup_tmo_note_window_g1_ParamLimits

0xedbe,	// (0x00051153) popup_tmo_note_window_g1

0xedcb,	// (0x00051160) tmo_note_info_pane_ParamLimits

0xedcb,	// (0x00051160) tmo_note_info_pane

0xede5,	// (0x0005117a) list_tmo_note_info_pane_g1_ParamLimits

0xede5,	// (0x0005117a) list_tmo_note_info_pane_g1

0xedfc,	// (0x00051191) list_tmo_note_info_pane_g2_ParamLimits

0xedfc,	// (0x00051191) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005224d) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005224d) list_tmo_note_info_pane_g

0xee18,	// (0x000511ad) list_tmo_note_info_text_pane_ParamLimits

0xee18,	// (0x000511ad) list_tmo_note_info_text_pane

0xee9d,	// (0x00051232) list_tmo_link_pane

0xeeaa,	// (0x0005123f) scroll_pane_cp20

0xeeb7,	// (0x0005124c) list_single_tmo_link_pane_ParamLimits

0xeeb7,	// (0x0005124c) list_single_tmo_link_pane

0xeec7,	// (0x0005125c) list_single_tmo_link_pane_t1

0xeed5,	// (0x0005126a) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed5,	// (0x0005126a) list_tmo_note_info_text_pane_t1

0x6b52,	// (0x00048ee7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b52,	// (0x00048ee7) aid_size_touch_scroll_bar_cp01

0x5a3b,	// (0x00047dd0) aid_size_touch_slider_marker

0x661e,	// (0x000489b3) popup_settings_window_ParamLimits

0x661e,	// (0x000489b3) popup_settings_window

0x5bcf,	// (0x00047f64) popup_candi_list_indi_window

0x9219,	// (0x0004b5ae) aid_touch_navi_pane_ParamLimits

0x8528,	// (0x0004a8bd) rs_clock_indi_pane

0x8531,	// (0x0004a8c6) sctrl_sk_bottom_pane_ParamLimits

0x8542,	// (0x0004a8d7) sctrl_sk_top_pane_ParamLimits

0x862b,	// (0x0004a9c0) popup_fep_tooltip_window

0xe831,	// (0x00050bc6) aid_size_cell_widget_grid_ParamLimits

0xe8a2,	// (0x00050c37) cell_ai5_widget_pane_g1_ParamLimits

0xe8a2,	// (0x00050c37) cell_ai5_widget_pane_g1

0xe905,	// (0x00050c9a) cell_ai5_widget_pane_g6_ParamLimits

0xe911,	// (0x00050ca6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x000521cb) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x000521cb) cell_ai5_widget_pane_g

0xea58,	// (0x00050ded) cell_ai5_widget_pane_t10_ParamLimits

0xea58,	// (0x00050ded) cell_ai5_widget_pane_t10

0xea76,	// (0x00050e0b) grid_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x00050ea3) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x00050ea3) cell_contacts_ai5_widget_pane

0xecf8,	// (0x0005108d) popup_discreet_window_t3_ParamLimits

0xecf8,	// (0x0005108d) popup_discreet_window_t3

0x8dc7,	// (0x0004b15c) popup_fshwr2_char_preview_window_ParamLimits

0x8dc7,	// (0x0004b15c) popup_fshwr2_char_preview_window

0xee36,	// (0x000511cb) tmo_note_info_pane_t1

0xee4b,	// (0x000511e0) tmo_note_info_pane_t2

0xee64,	// (0x000511f9) tmo_note_info_pane_t3

0xee79,	// (0x0005120e) tmo_note_info_pane_t4

0xee8b,	// (0x00051220) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00052252) tmo_note_info_pane_t

0xee9d,	// (0x00051232) list_tmo_link_pane_ParamLimits

0xeeaa,	// (0x0005123f) scroll_pane_cp20_ParamLimits

0x0719,	// (0x00042aae) bg_popup_fep_char_preview_window_cp01

0xeeee,	// (0x00051283) popup_fshwr2_char_preview_window_t1

0xeefc,	// (0x00051291) popup_candi_list_indi_window_g1

0xef05,	// (0x0005129a) bg_cell_contacts_ai5_widget_pane

0xef11,	// (0x000512a6) cell_contacts_ai5_widget_pane_g1

0xef26,	// (0x000512bb) cell_contacts_ai5_widget_pane_g2

0xef32,	// (0x000512c7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005225d) cell_contacts_ai5_widget_pane_g

0xef3e,	// (0x000512d3) cell_contacts_ai5_widget_pane_t1

0x0dc7,	// (0x0004315c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb5,	// (0x0005134a) settings_container_pane

0x482e,	// (0x00046bc3) listscroll_set_pane_copy1

0xb41d,	// (0x0004d7b2) scroll_pane_cp121_copy1

0xefc1,	// (0x00051356) set_content_pane_copy1

0xefc9,	// (0x0005135e) aid_height_set_list_copy1_ParamLimits

0xefc9,	// (0x0005135e) aid_height_set_list_copy1

0xaa95,	// (0x0004ce2a) aid_size_parent_copy1_ParamLimits

0xaa95,	// (0x0004ce2a) aid_size_parent_copy1

0xefd5,	// (0x0005136a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd5,	// (0x0005136a) button_value_adjust_pane_cp6_copy1

0x919b,	// (0x0004b530) list_highlight_pane_cp2_copy1_ParamLimits

0x919b,	// (0x0004b530) list_highlight_pane_cp2_copy1

0xefe9,	// (0x0005137e) list_set_pane_copy1_ParamLimits

0xefe9,	// (0x0005137e) list_set_pane_copy1

0xef50,	// (0x000512e5) main_pane_set_t1_copy1_ParamLimits

0xef50,	// (0x000512e5) main_pane_set_t1_copy1

0xef8a,	// (0x0005131f) main_pane_set_t2_copy1_ParamLimits

0xef8a,	// (0x0005131f) main_pane_set_t2_copy1

0xf0aa,	// (0x0005143f) main_pane_set_t3_copy1

0xf0b8,	// (0x0005144d) main_pane_set_t4_copy1

0xefa9,	// (0x0005133e) set_content_pane_g1_copy1_ParamLimits

0xefa9,	// (0x0005133e) set_content_pane_g1_copy1

0xf0c6,	// (0x0005145b) setting_code_pane_copy1

0xf0ce,	// (0x00051463) setting_slider_graphic_pane_copy1

0xf0ce,	// (0x00051463) setting_slider_pane_copy1

0xf0ce,	// (0x00051463) setting_text_pane_copy1

0xf0ce,	// (0x00051463) setting_volume_pane_copy1

0xf0c6,	// (0x0005145b) settings_code_pane_cp2_copy1

0xf0d6,	// (0x0005146b) settings_code_pane_cp_copy1_ParamLimits

0xf0d6,	// (0x0005146b) settings_code_pane_cp_copy1

0x8ecf,	// (0x0004b264) volume_set_pane_copy1

0xf0ea,	// (0x0005147f) volume_set_pane_g10_copy1

0xf0f6,	// (0x0005148b) volume_set_pane_g1_copy1

0xf100,	// (0x00051495) volume_set_pane_g2_copy1

0xf10a,	// (0x0005149f) volume_set_pane_g3_copy1

0xf114,	// (0x000514a9) volume_set_pane_g4_copy1

0xf11e,	// (0x000514b3) volume_set_pane_g5_copy1

0xf128,	// (0x000514bd) volume_set_pane_g6_copy1

0xf132,	// (0x000514c7) volume_set_pane_g7_copy1

0xf13c,	// (0x000514d1) volume_set_pane_g8_copy1

0xf146,	// (0x000514db) volume_set_pane_g9_copy1

0x0789,	// (0x00042b1e) bg_set_opt_pane_cp_copy1_ParamLimits

0x0789,	// (0x00042b1e) bg_set_opt_pane_cp_copy1

0x8edb,	// (0x0004b270) setting_slider_pane_t1_copy1_ParamLimits

0x8edb,	// (0x0004b270) setting_slider_pane_t1_copy1

0x8ef9,	// (0x0004b28e) setting_slider_pane_t2_copy1_ParamLimits

0x8ef9,	// (0x0004b28e) setting_slider_pane_t2_copy1

0x8f13,	// (0x0004b2a8) setting_slider_pane_t3_copy1_ParamLimits

0x8f13,	// (0x0004b2a8) setting_slider_pane_t3_copy1

0x8f2b,	// (0x0004b2c0) slider_set_pane_copy1_ParamLimits

0x8f2b,	// (0x0004b2c0) slider_set_pane_copy1

0x0e1f,	// (0x000431b4) set_opt_bg_pane_g1_copy2

0x0e27,	// (0x000431bc) set_opt_bg_pane_g2_copy2

0xf150,	// (0x000514e5) set_opt_bg_pane_g3_copy2

0x0e37,	// (0x000431cc) set_opt_bg_pane_g4_copy2

0x0e3f,	// (0x000431d4) set_opt_bg_pane_g5_copy2

0x0e47,	// (0x000431dc) set_opt_bg_pane_g6_copy2

0xf15a,	// (0x000514ef) set_opt_bg_pane_g7_copy2

0xf164,	// (0x000514f9) set_opt_bg_pane_g8_copy2

0xf16e,	// (0x00051503) set_opt_bg_pane_g9_copy2

0x8f41,	// (0x0004b2d6) aid_size_touch_slider_mark_copy1_ParamLimits

0x8f41,	// (0x0004b2d6) aid_size_touch_slider_mark_copy1

0xf178,	// (0x0005150d) slider_set_pane_g1_copy1

0x8f55,	// (0x0004b2ea) slider_set_pane_g2_copy1

0x7e29,	// (0x0004a1be) slider_set_pane_g3_copy1_ParamLimits

0x7e29,	// (0x0004a1be) slider_set_pane_g3_copy1

0x7e3d,	// (0x0004a1d2) slider_set_pane_g4_copy1_ParamLimits

0x7e3d,	// (0x0004a1d2) slider_set_pane_g4_copy1

0x7e55,	// (0x0004a1ea) slider_set_pane_g5_copy1_ParamLimits

0x7e55,	// (0x0004a1ea) slider_set_pane_g5_copy1

0x7e29,	// (0x0004a1be) slider_set_pane_g6_copy1_ParamLimits

0x7e29,	// (0x0004a1be) slider_set_pane_g6_copy1

0x8f5d,	// (0x0004b2f2) slider_set_pane_g7_copy1_ParamLimits

0x8f5d,	// (0x0004b2f2) slider_set_pane_g7_copy1

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp2_copy1

0xf181,	// (0x00051516) setting_slider_graphic_pane_g1_copy1

0xf18a,	// (0x0005151f) setting_slider_graphic_pane_t1_copy1

0xf19a,	// (0x0005152f) setting_slider_graphic_pane_t2_copy1

0xf1aa,	// (0x0005153f) slider_set_pane_cp_copy1

0xf1ba,	// (0x0005154f) input_focus_pane_cp1_copy1

0xf1c3,	// (0x00051558) list_set_text_pane_copy1

0xf1cb,	// (0x00051560) setting_text_pane_g1_copy1

0x540b,	// (0x000477a0) set_text_pane_t1_copy1

0xf1ba,	// (0x0005154f) input_focus_pane_cp2_copy1

0xf1cb,	// (0x00051560) setting_code_pane_g1_copy1

0xf1d4,	// (0x00051569) setting_code_pane_t1_copy1

0x4521,	// (0x000468b6) list_set_graphic_pane_copy1

0x072d,	// (0x00042ac2) bg_set_opt_pane_cp4_copy1

0x4534,	// (0x000468c9) list_set_graphic_pane_g1_copy1_ParamLimits

0x4534,	// (0x000468c9) list_set_graphic_pane_g1_copy1

0xf1e2,	// (0x00051577) list_set_graphic_pane_g2_copy1

0x454c,	// (0x000468e1) list_set_graphic_pane_t1_copy1_ParamLimits

0x454c,	// (0x000468e1) list_set_graphic_pane_t1_copy1

0xbcc5,	// (0x0004e05a) rs_clock_indi_pane_g1

0xf1ea,	// (0x0005157f) rs_clock_indi_pane_t1

0xf1f8,	// (0x0005158d) rs_indi_pane

0xf200,	// (0x00051595) rs_indi_pane_g1

0xf209,	// (0x0005159e) rs_indi_pane_g2

0xf212,	// (0x000515a7) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00052264) rs_indi_pane_g

0x482e,	// (0x00046bc3) bg_popup_preview_window_pane_cp03

0xf21b,	// (0x000515b0) popup_fep_tooltip_window_t1

0xc970,	// (0x0004ed05) popup_note2_window_g2_ParamLimits

0xc970,	// (0x0004ed05) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00051ffd) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00051ffd) popup_note2_window_g

0xce78,	// (0x0004f20d) bg_popup_sub_pane_cp11_ParamLimits

0xce85,	// (0x0004f21a) cell_ai3_links_pane_g1_ParamLimits

0xce9c,	// (0x0004f231) cell_ai3_links_pane_t1

0x540b,	// (0x000477a0) set_text_pane_t1_copy1_ParamLimits

0x4747,	// (0x00046adc) cell_graphic_popup_pane_cp2_ParamLimits

0x4747,	// (0x00046adc) cell_graphic_popup_pane_cp2

0xf229,	// (0x000515be) cell_graphic_popup_pane_g1_cp2

0x0b1c,	// (0x00042eb1) cell_graphic_popup_pane_g2_cp2

0xf231,	// (0x000515c6) cell_graphic_popup_pane_g3_cp2

0xf239,	// (0x000515ce) cell_graphic_popup_pane_t2_cp2

0x0b2d,	// (0x00042ec2) grid_highlight_pane_cp3_cp2

0x10c8,	// (0x0004345d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dc7,	// (0x0004315c) main_tmo_pane_ParamLimits

0xd1bc,	// (0x0004f551) popup_tmo_big_image_note_window

0xe891,	// (0x00050c26) cell_ai5_widget_list_pane

0xe899,	// (0x00050c2e) cell_ai5_widget_lrg_icon_pane

0xee36,	// (0x000511cb) tmo_note_info_pane_t1_ParamLimits

0xee4b,	// (0x000511e0) tmo_note_info_pane_t2_ParamLimits

0xee64,	// (0x000511f9) tmo_note_info_pane_t3_ParamLimits

0xee79,	// (0x0005120e) tmo_note_info_pane_t4_ParamLimits

0xee8b,	// (0x00051220) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00052252) tmo_note_info_pane_t_ParamLimits

0xefb5,	// (0x0005134a) settings_container_pane_ParamLimits

0xf1b2,	// (0x00051547) indicator_popup_pane_cp5

0xf1b2,	// (0x00051547) indicator_popup_pane_cp6

0x4521,	// (0x000468b6) list_set_graphic_pane_copy1_ParamLimits

0x0719,	// (0x00042aae) bg_popup_window_pane_cp23

0xf247,	// (0x000515dc) popup_tmo_big_image_note_window_g1

0xf253,	// (0x000515e8) popup_tmo_big_image_note_window_t1

0xf263,	// (0x000515f8) popup_tmo_big_image_note_window_t2

0xf273,	// (0x00051608) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005226b) popup_tmo_big_image_note_window_t

0xbcc5,	// (0x0004e05a) cell_ai5_widget_lrg_icon_pane_g1

0xf283,	// (0x00051618) cell_ai5_widget_lrg_icon_pane_t1

0xf291,	// (0x00051626) cell_ai5_widget_list_row_pane_ParamLimits

0xf291,	// (0x00051626) cell_ai5_widget_list_row_pane

0xf2a9,	// (0x0005163e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a9,	// (0x0005163e) cell_ai5_widget_list_row_pane_g1

0xf2b6,	// (0x0005164b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2b6,	// (0x0005164b) cell_ai5_widget_list_row_pane_t1

0xf2e1,	// (0x00051676) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e1,	// (0x00051676) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x00052272) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00052272) cell_ai5_widget_list_row_pane_t

0x0719,	// (0x00042aae) main_fep_vtchi_ss_pane

0xf329,	// (0x000516be) popup_fep_char_pre_window

0xf331,	// (0x000516c6) popup_fep_ituss_window

0xf356,	// (0x000516eb) popup_fep_vkbss_window

0xf37b,	// (0x00051710) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x00051710) grid_vkbss_keypad_pane

0xf38b,	// (0x00051720) ituss_keypad_pane

0x8f7f,	// (0x0004b314) aid_vkbss_key_offset_ParamLimits

0x8f7f,	// (0x0004b314) aid_vkbss_key_offset

0x8f8b,	// (0x0004b320) cell_vkbss_key_pane_ParamLimits

0x8f8b,	// (0x0004b320) cell_vkbss_key_pane

0xf39a,	// (0x0005172f) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x0005172f) bg_cell_vkbss_key_g1

0xf3a6,	// (0x0005173b) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x0005173b) cell_vkbss_key_3p_pane

0xf3ba,	// (0x0005174f) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x0005174f) cell_vkbss_key_g1

0xf3ce,	// (0x00051763) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x00051763) cell_vkbss_key_t1

0x8fa1,	// (0x0004b336) cell_ituss_key_pane_ParamLimits

0x8fa1,	// (0x0004b336) cell_ituss_key_pane

0xf3f9,	// (0x0005178e) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x0005178e) bg_cell_ituss_key_g1

0xf405,	// (0x0005179a) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x0005179a) cell_ituss_key_pane_g1

0x8fb2,	// (0x0004b347) cell_ituss_key_pane_g2_ParamLimits

0x8fb2,	// (0x0004b347) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x00052279) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x00052279) cell_ituss_key_pane_g

0x8fde,	// (0x0004b373) cell_ituss_key_t1_ParamLimits

0x8fde,	// (0x0004b373) cell_ituss_key_t1

0x9018,	// (0x0004b3ad) cell_ituss_key_t2_ParamLimits

0x9018,	// (0x0004b3ad) cell_ituss_key_t2

0x9049,	// (0x0004b3de) cell_ituss_key_t3_ParamLimits

0x9049,	// (0x0004b3de) cell_ituss_key_t3

0x9018,	// (0x0004b3ad) cell_ituss_key_t4_ParamLimits

0x9018,	// (0x0004b3ad) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x00052280) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x00052280) cell_ituss_key_t

0xf42b,	// (0x000517c0) cell_vkbss_key_3p_pane_g1

0xf433,	// (0x000517c8) cell_vkbss_key_3p_pane_g2

0xf43b,	// (0x000517d0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005228b) cell_vkbss_key_3p_pane_g

0x482e,	// (0x00046bc3) bg_popup_fep_char_preview_window_cp02

0xf443,	// (0x000517d8) popup_fep_char_pre_window_t1

0xe81e,	// (0x00050bb3) main_ai5_sk_pane

0xef05,	// (0x0005129a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef11,	// (0x000512a6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef26,	// (0x000512bb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef32,	// (0x000512c7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005225d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3e,	// (0x000512d3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dc7,	// (0x0004315c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf451,	// (0x000517e6) main_ai5_sk_pane_g1

0x9b61,	// (0x0004bef6) popup_query_code_window_g1

0xf347,	// (0x000516dc) popup_fep_vkb_icf_pane

0xf365,	// (0x000516fa) popup_fep_vtchi_icf_pane

0xf45a,	// (0x000517ef) bg_icf_pane

0xf466,	// (0x000517fb) list_vkb_icf_pane

0xf475,	// (0x0005180a) bg_icf_pane_cp01

0xf488,	// (0x0005181d) vtchi_icf_list_pane

0xf498,	// (0x0005182d) list_vkb_icf_pane_t1_ParamLimits

0xf498,	// (0x0005182d) list_vkb_icf_pane_t1

0xf4b6,	// (0x0005184b) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x0005184b) vtchi_icf_list_pane_t1

0xf331,	// (0x000516c6) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x000516fa) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x00051720) ituss_keypad_pane_ParamLimits

0x8f73,	// (0x0004b308) ituss_sks_pane

0xf45a,	// (0x000517ef) bg_icf_pane_ParamLimits

0xf309,	// (0x0005169e) icf_edit_indi_pane_ParamLimits

0xf309,	// (0x0005169e) icf_edit_indi_pane

0xf466,	// (0x000517fb) list_vkb_icf_pane_ParamLimits

0xf475,	// (0x0005180a) bg_icf_pane_cp01_ParamLimits

0xf31c,	// (0x000516b1) icf_edit_indi_pane_cp01_ParamLimits

0xf31c,	// (0x000516b1) icf_edit_indi_pane_cp01

0xf490,	// (0x00051825) vtchi_query_pane

0xe1c1,	// (0x00050556) icf_edit_indi_pane_g1_ParamLimits

0xe1c1,	// (0x00050556) icf_edit_indi_pane_g1

0xf525,	// (0x000518ba) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x000518ba) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x000522a3) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x000522a3) icf_edit_indi_pane_g

0xf537,	// (0x000518cc) icf_edit_indi_pane_t1

0xf4ce,	// (0x00051863) bg_input_focus_pane_cp042

0x0d00,	// (0x00043095) vtchi_button_pane

0xf4d7,	// (0x0005186c) vtchi_query_pane_t1

0xf4e5,	// (0x0005187a) vtchi_query_pane_t2

0xf4f3,	// (0x00051888) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00052292) vtchi_query_pane_t

0x0719,	// (0x00042aae) bg_button_pane_cp13

0xf501,	// (0x00051896) vtchi_button_pane_g1

0x908c,	// (0x0004b421) ituss_sks_pane_g1

0x9097,	// (0x0004b42c) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00052299) ituss_sks_pane_g

0xf509,	// (0x0005189e) ituss_sks_pane_t1

0xf517,	// (0x000518ac) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005229e) ituss_sks_pane_t

0xb7a2,	// (0x0004db37) indicator_nsta_pane_cp_g1

0xb7aa,	// (0x0004db3f) indicator_nsta_pane_cp_g2

0xb7b2,	// (0x0004db47) indicator_nsta_pane_cp_g3

0xb7a2,	// (0x0004db37) indicator_nsta_pane_cp_g4

0xb7aa,	// (0x0004db3f) indicator_nsta_pane_cp_g5

0xb7b2,	// (0x0004db47) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00051e47) indicator_nsta_pane_cp_g

0xdee3,	// (0x00050278) cell_graphic2_pane_t2_ParamLimits

0xdee3,	// (0x00050278) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00052154) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00052154) cell_graphic2_pane_t

0xdf10,	// (0x000502a5) cell_graphic2_control_pane_t1

0x6f8b,	// (0x00049320) signal_pane_g3_ParamLimits

0x6f8b,	// (0x00049320) signal_pane_g3

0x6f9a,	// (0x0004932f) signal_pane_g4_ParamLimits

0x6f9a,	// (0x0004932f) signal_pane_g4

0xf2f3,	// (0x00051688) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f3,	// (0x00051688) cell_ai5_widget_list_row_pane_t3

0xf419,	// (0x000517ae) cell_ituss_key_pane_t1_ParamLimits

0xf419,	// (0x000517ae) cell_ituss_key_pane_t1

0x97d0,	// (0x0004bb65) form_field_data_wide_pane_vc_t2_ParamLimits

0x97d0,	// (0x0004bb65) form_field_data_wide_pane_vc_t2

0x97e4,	// (0x0004bb79) form_field_data_wide_pane_vc_t3_ParamLimits

0x97e4,	// (0x0004bb79) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00051ba3) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00051ba3) form_field_data_wide_pane_vc_t

0xb45d,	// (0x0004d7f2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb45d,	// (0x0004d7f2) form_field_slider_wide_pane_vc_t3

0xb533,	// (0x0004d8c8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb533,	// (0x0004d8c8) form_field_popup_wide_pane_vc_t2

0xb54a,	// (0x0004d8df) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb54a,	// (0x0004d8df) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00051e36) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00051e36) form_field_popup_wide_pane_vc_t

0x8d57,	// (0x0004b0ec) aid_fshwr2_btn_pane_ParamLimits

0x8d63,	// (0x0004b0f8) aid_fshwr2_syb_pane_ParamLimits

0x8d75,	// (0x0004b10a) aid_fshwr2_txt_pane_ParamLimits

0x0dc7,	// (0x0004315c) fshwr2_bg_pane_ParamLimits

0x8d81,	// (0x0004b116) fshwr2_func_candi_pane_ParamLimits

0x8d97,	// (0x0004b12c) fshwr2_hwr_syb_pane_ParamLimits

0x8dab,	// (0x0004b140) fshwr2_icf_pane_ParamLimits

0x801c,	// (0x0004a3b1) list_double_graphic_pane_vc_g4_ParamLimits

0x801c,	// (0x0004a3b1) list_double_graphic_pane_vc_g4

0x8fd2,	// (0x0004b367) cell_ituss_key_pane_g3_ParamLimits

0x8fd2,	// (0x0004b367) cell_ituss_key_pane_g3

0x907a,	// (0x0004b40f) cell_ituss_key_t5_ParamLimits

0x907a,	// (0x0004b40f) cell_ituss_key_t5

0xf356,	// (0x000516eb) popup_fep_vkbss_window_ParamLimits

0xe828,	// (0x00050bbd) aid_cell_ai5_quarter

0xf537,	// (0x000518cc) icf_edit_indi_pane_t1_ParamLimits

0x0964,	// (0x00042cf9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0964,	// (0x00042cf9) aid_tch_indicator_popup_pane_cp2

0x0977,	// (0x00042d0c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0977,	// (0x00042d0c) aid_tch_query_popup_data_pane_cp2

0x9b09,	// (0x0004be9e) aid_tch_query_popup_pane_ParamLimits

0x9b09,	// (0x0004be9e) aid_tch_query_popup_pane

0x9b09,	// (0x0004be9e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9b09,	// (0x0004be9e) aid_tch_query_popup_data_pane_cp1

0xed64,	// (0x000510f9) cell_fshwr2_syb_bg_pane_ParamLimits

0x8e9c,	// (0x0004b231) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8eb0,	// (0x0004b245) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf347,	// (0x000516dc) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

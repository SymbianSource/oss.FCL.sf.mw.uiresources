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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002eed6 };

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
0xb459,	// (0x0003a32f) Screen

0xb465,	// (0x0003a33b) application_window_ParamLimits

0xb465,	// (0x0003a33b) application_window

0x2cb3,	// (0x00031b89) screen_g1

0xb49d,	// (0x0003a373) area_bottom_pane_ParamLimits

0xb49d,	// (0x0003a373) area_bottom_pane

0x0219,	// (0x0002f0ef) area_top_pane_ParamLimits

0x0219,	// (0x0002f0ef) area_top_pane

0x02b7,	// (0x0002f18d) main_pane_ParamLimits

0x02b7,	// (0x0002f18d) main_pane

0x2cbd,	// (0x00031b93) misc_graphics

0xd3e4,	// (0x0003c2ba) battery_pane_ParamLimits

0xd3e4,	// (0x0003c2ba) battery_pane

0x5910,	// (0x000347e6) bg_status_flat_pane_g8

0x5918,	// (0x000347ee) bg_status_flat_pane_g9

0x4cbf,	// (0x00033b95) context_pane_ParamLimits

0x4cbf,	// (0x00033b95) context_pane

0xd54f,	// (0x0003c425) navi_pane_ParamLimits

0xd54f,	// (0x0003c425) navi_pane

0xd5c6,	// (0x0003c49c) signal_pane_ParamLimits

0xd5c6,	// (0x0003c49c) signal_pane

0x0008,

0xf885,	// (0x0003e75b) bg_status_flat_pane_g

0xd656,	// (0x0003c52c) status_pane_g1_ParamLimits

0xd656,	// (0x0003c52c) status_pane_g1

0xd66c,	// (0x0003c542) status_pane_g2_ParamLimits

0xd66c,	// (0x0003c542) status_pane_g2

0x4edf,	// (0x00033db5) status_pane_g3_ParamLimits

0x4edf,	// (0x00033db5) status_pane_g3

0x0004,

0xf7b8,	// (0x0003e68e) status_pane_g_ParamLimits

0xf7b8,	// (0x0003e68e) status_pane_g

0xd678,	// (0x0003c54e) title_pane_ParamLimits

0xd678,	// (0x0003c54e) title_pane

0xd6d9,	// (0x0003c5af) uni_indicator_pane_ParamLimits

0xd6d9,	// (0x0003c5af) uni_indicator_pane

0x458e,	// (0x00033464) bg_list_pane_ParamLimits

0x458e,	// (0x00033464) bg_list_pane

0xccc0,	// (0x0003bb96) find_pane

0xccc8,	// (0x0003bb9e) listscroll_app_pane_ParamLimits

0xccc8,	// (0x0003bb9e) listscroll_app_pane

0x45ba,	// (0x00033490) listscroll_form_pane

0xccd4,	// (0x0003bbaa) listscroll_gen_pane_ParamLimits

0xccd4,	// (0x0003bbaa) listscroll_gen_pane

0x45ba,	// (0x00033490) listscroll_set_pane

0x64b9,	// (0x0003538f) main_idle_act_pane

0x426e,	// (0x00033144) main_idle_trad_pane

0x426e,	// (0x00033144) main_list_empty_pane

0x45d4,	// (0x000334aa) main_midp_pane

0x45e0,	// (0x000334b6) main_pane_g1_ParamLimits

0x45e0,	// (0x000334b6) main_pane_g1

0xcce8,	// (0x0003bbbe) popup_ai_message_window_ParamLimits

0xcce8,	// (0x0003bbbe) popup_ai_message_window

0xcd79,	// (0x0003bc4f) popup_fep_china_uni_window_ParamLimits

0xcd79,	// (0x0003bc4f) popup_fep_china_uni_window

0x46ec,	// (0x000335c2) popup_fep_japan_candidate_window_ParamLimits

0x46ec,	// (0x000335c2) popup_fep_japan_candidate_window

0x470c,	// (0x000335e2) popup_fep_japan_predictive_window_ParamLimits

0x470c,	// (0x000335e2) popup_fep_japan_predictive_window

0xcdd5,	// (0x0003bcab) popup_find_window

0xcdf2,	// (0x0003bcc8) popup_grid_graphic_window_ParamLimits

0xcdf2,	// (0x0003bcc8) popup_grid_graphic_window

0x4771,	// (0x00033647) popup_large_graphic_colour_window

0xce8a,	// (0x0003bd60) popup_menu_window_ParamLimits

0xce8a,	// (0x0003bd60) popup_menu_window

0xd044,	// (0x0003bf1a) popup_note_image_window

0xd00a,	// (0x0003bee0) popup_note_wait_window_ParamLimits

0xd00a,	// (0x0003bee0) popup_note_wait_window

0xd05c,	// (0x0003bf32) popup_note_window_ParamLimits

0xd05c,	// (0x0003bf32) popup_note_window

0xd102,	// (0x0003bfd8) popup_query_code_window_ParamLimits

0xd102,	// (0x0003bfd8) popup_query_code_window

0x49b9,	// (0x0003388f) popup_query_data_code_window_ParamLimits

0x49b9,	// (0x0003388f) popup_query_data_code_window

0xd13c,	// (0x0003c012) popup_query_data_window_ParamLimits

0xd13c,	// (0x0003c012) popup_query_data_window

0xd1b2,	// (0x0003c088) popup_query_sat_info_window_ParamLimits

0xd1b2,	// (0x0003c088) popup_query_sat_info_window

0xd249,	// (0x0003c11f) popup_snote_single_graphic_window_ParamLimits

0xd249,	// (0x0003c11f) popup_snote_single_graphic_window

0xd249,	// (0x0003c11f) popup_snote_single_text_window_ParamLimits

0xd249,	// (0x0003c11f) popup_snote_single_text_window

0x4a40,	// (0x00033916) popup_sub_window_general

0x4b70,	// (0x00033a46) popup_window_general_ParamLimits

0x4b70,	// (0x00033a46) popup_window_general

0x4b85,	// (0x00033a5b) power_save_pane

0xbbfa,	// (0x0003aad0) control_pane_g1_ParamLimits

0xbbfa,	// (0x0003aad0) control_pane_g1

0x116b,	// (0x00030041) control_pane_g2_ParamLimits

0x116b,	// (0x00030041) control_pane_g2

0x4537,	// (0x0003340d) control_pane_g3_ParamLimits

0x4537,	// (0x0003340d) control_pane_g3

0x0007,

0xf7a0,	// (0x0003e676) control_pane_g_ParamLimits

0xf7a0,	// (0x0003e676) control_pane_g

0xbc39,	// (0x0003ab0f) control_pane_t1_ParamLimits

0xbc39,	// (0x0003ab0f) control_pane_t1

0xbc97,	// (0x0003ab6d) control_pane_t2_ParamLimits

0xbc97,	// (0x0003ab6d) control_pane_t2

0x0002,

0xf7b1,	// (0x0003e687) control_pane_t_ParamLimits

0xf7b1,	// (0x0003e687) control_pane_t

0x4458,	// (0x0003332e) navi_navi_volume_pane_cp1

0x4461,	// (0x00033337) status_small_icon_pane

0x4469,	// (0x0003333f) status_small_pane_g1_ParamLimits

0x4469,	// (0x0003333f) status_small_pane_g1

0x449d,	// (0x00033373) status_small_pane_g2_ParamLimits

0x449d,	// (0x00033373) status_small_pane_g2

0x44a9,	// (0x0003337f) status_small_pane_g3_ParamLimits

0x44a9,	// (0x0003337f) status_small_pane_g3

0x44b5,	// (0x0003338b) status_small_pane_g4_ParamLimits

0x44b5,	// (0x0003338b) status_small_pane_g4

0x44c1,	// (0x00033397) status_small_pane_g5_ParamLimits

0x44c1,	// (0x00033397) status_small_pane_g5

0x44d0,	// (0x000333a6) status_small_pane_g6_ParamLimits

0x44d0,	// (0x000333a6) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003e665) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003e665) status_small_pane_g

0x4500,	// (0x000333d6) status_small_pane_t1

0x4523,	// (0x000333f9) status_small_wait_pane_ParamLimits

0x4523,	// (0x000333f9) status_small_wait_pane

0xcb16,	// (0x0003b9ec) aid_levels_signal_ParamLimits

0xcb16,	// (0x0003b9ec) aid_levels_signal

0xcb2e,	// (0x0003ba04) signal_pane_g1_ParamLimits

0xcb2e,	// (0x0003ba04) signal_pane_g1

0xcb49,	// (0x0003ba1f) signal_pane_g2_ParamLimits

0xcb49,	// (0x0003ba1f) signal_pane_g2

0x0001,

0xf724,	// (0x0003e5fa) signal_pane_g_ParamLimits

0xf724,	// (0x0003e5fa) signal_pane_g

0x3d4d,	// (0x00032c23) context_pane_g1

0xc5ee,	// (0x0003b4c4) title_pane_g1

0xc623,	// (0x0003b4f9) title_pane_t1

0x2d65,	// (0x00031c3b) title_pane_t2

0x2d8b,	// (0x00031c61) title_pane_t3

0x0002,

0xf573,	// (0x0003e449) title_pane_t

0xd701,	// (0x0003c5d7) aid_levels_battery_ParamLimits

0xd701,	// (0x0003c5d7) aid_levels_battery

0xd71d,	// (0x0003c5f3) battery_pane_g1_ParamLimits

0xd71d,	// (0x0003c5f3) battery_pane_g1

0xd73a,	// (0x0003c610) battery_pane_g2_ParamLimits

0xd73a,	// (0x0003c610) battery_pane_g2

0x0001,

0xf7c3,	// (0x0003e699) battery_pane_g_ParamLimits

0xf7c3,	// (0x0003e699) battery_pane_g

0xd967,	// (0x0003c83d) uni_indicator_pane_g1

0xd97c,	// (0x0003c852) uni_indicator_pane_g2

0xd991,	// (0x0003c867) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0003e803) uni_indicator_pane_g

0x40e0,	// (0x00032fb6) navi_icon_pane_ParamLimits

0x40e0,	// (0x00032fb6) navi_icon_pane

0x4029,	// (0x00032eff) navi_midp_pane

0x40fc,	// (0x00032fd2) navi_navi_pane

0x4106,	// (0x00032fdc) navi_text_pane_ParamLimits

0x4106,	// (0x00032fdc) navi_text_pane

0x2cb3,	// (0x00031b89) status_small_wait_pane_g1

0x31ba,	// (0x00032090) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0003e7fe) status_small_wait_pane_g

0x5f7d,	// (0x00034e53) navi_navi_icon_text_pane

0x5f85,	// (0x00034e5b) navi_navi_pane_g1_ParamLimits

0x5f85,	// (0x00034e5b) navi_navi_pane_g1

0x5f97,	// (0x00034e6d) navi_navi_pane_g2_ParamLimits

0x5f97,	// (0x00034e6d) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0003e7cc) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0003e7cc) navi_navi_pane_g

0x5fa9,	// (0x00034e7f) navi_navi_tabs_pane

0x5fb2,	// (0x00034e88) navi_navi_text_pane

0x5f7d,	// (0x00034e53) navi_navi_volume_pane

0xd928,	// (0x0003c7fe) navi_text_pane_t1

0xd91c,	// (0x0003c7f2) navi_icon_pane_g1

0x5e9a,	// (0x00034d70) navi_navi_text_pane_t1

0xbefe,	// (0x0003add4) navi_navi_volume_pane_g1

0xbf06,	// (0x0003addc) volume_small_pane

0xd850,	// (0x0003c726) navi_navi_icon_text_pane_g1

0xd858,	// (0x0003c72e) navi_navi_icon_text_pane_t1

0x40fc,	// (0x00032fd2) navi_tabs_2_long_pane

0x40fc,	// (0x00032fd2) navi_tabs_2_pane

0x40fc,	// (0x00032fd2) navi_tabs_3_long_pane

0x40fc,	// (0x00032fd2) navi_tabs_3_pane

0x40fc,	// (0x00032fd2) navi_tabs_4_pane

0xbede,	// (0x0003adb4) tabs_2_active_pane_ParamLimits

0xbede,	// (0x0003adb4) tabs_2_active_pane

0xbeee,	// (0x0003adc4) tabs_2_passive_pane_ParamLimits

0xbeee,	// (0x0003adc4) tabs_2_passive_pane

0xbeac,	// (0x0003ad82) tabs_3_active_pane_ParamLimits

0xbeac,	// (0x0003ad82) tabs_3_active_pane

0xbebc,	// (0x0003ad92) tabs_3_passive_pane_ParamLimits

0xbebc,	// (0x0003ad92) tabs_3_passive_pane

0xbecd,	// (0x0003ada3) tabs_3_passive_pane_cp_ParamLimits

0xbecd,	// (0x0003ada3) tabs_3_passive_pane_cp

0xbe68,	// (0x0003ad3e) tabs_4_active_pane_ParamLimits

0xbe68,	// (0x0003ad3e) tabs_4_active_pane

0xbe79,	// (0x0003ad4f) tabs_4_passive_pane_ParamLimits

0xbe79,	// (0x0003ad4f) tabs_4_passive_pane

0xbe8a,	// (0x0003ad60) tabs_4_passive_pane_cp_ParamLimits

0xbe8a,	// (0x0003ad60) tabs_4_passive_pane_cp

0xbe9b,	// (0x0003ad71) tabs_4_passive_pane_cp2_ParamLimits

0xbe9b,	// (0x0003ad71) tabs_4_passive_pane_cp2

0xbe48,	// (0x0003ad1e) tabs_2_long_active_pane_ParamLimits

0xbe48,	// (0x0003ad1e) tabs_2_long_active_pane

0xbe58,	// (0x0003ad2e) tabs_2_long_passive_pane_ParamLimits

0xbe58,	// (0x0003ad2e) tabs_2_long_passive_pane

0xbe15,	// (0x0003aceb) tabs_3_long_active_pane_ParamLimits

0xbe15,	// (0x0003aceb) tabs_3_long_active_pane

0xbe26,	// (0x0003acfc) tabs_3_long_passive_pane_ParamLimits

0xbe26,	// (0x0003acfc) tabs_3_long_passive_pane

0xbe37,	// (0x0003ad0d) tabs_3_long_passive_pane_cp_ParamLimits

0xbe37,	// (0x0003ad0d) tabs_3_long_passive_pane_cp

0x13db,	// (0x000302b1) volume_small_pane_g1

0xbdc4,	// (0x0003ac9a) volume_small_pane_g2

0xbdcd,	// (0x0003aca3) volume_small_pane_g3

0xbdd6,	// (0x0003acac) volume_small_pane_g4

0xbddf,	// (0x0003acb5) volume_small_pane_g5

0xbde8,	// (0x0003acbe) volume_small_pane_g6

0xbdf1,	// (0x0003acc7) volume_small_pane_g7

0xbdfa,	// (0x0003acd0) volume_small_pane_g8

0xbe03,	// (0x0003acd9) volume_small_pane_g9

0xbe0c,	// (0x0003ace2) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0003e798) volume_small_pane_g

0x3018,	// (0x00031eee) bg_active_tab_pane_cp2_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp2

0xc6af,	// (0x0003b585) tabs_3_active_pane_g1

0xc6b7,	// (0x0003b58d) tabs_3_active_pane_t1

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp2_ParamLimits

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp2

0xc6af,	// (0x0003b585) tabs_3_passive_pane_g1

0xc6b7,	// (0x0003b58d) tabs_3_passive_pane_t1

0x3018,	// (0x00031eee) bg_active_tab_pane_cp3_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp3

0xc6c9,	// (0x0003b59f) tabs_4_active_pane_g1

0xc6d1,	// (0x0003b5a7) tabs_4_active_pane_t1

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp3_ParamLimits

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp3

0xc6c9,	// (0x0003b59f) tabs_4_1_passive_pane_g1

0xc6d1,	// (0x0003b5a7) tabs_4_1_passive_pane_t1

0x45d4,	// (0x000334aa) list_highlight_pane_cp2

0xda1a,	// (0x0003c8f0) list_set_pane_ParamLimits

0xda1a,	// (0x0003c8f0) list_set_pane

0xdab4,	// (0x0003c98a) main_pane_set_t1_ParamLimits

0xdab4,	// (0x0003c98a) main_pane_set_t1

0xdad4,	// (0x0003c9aa) main_pane_set_t2_ParamLimits

0xdad4,	// (0x0003c9aa) main_pane_set_t2

0xdae8,	// (0x0003c9be) main_pane_set_t3_ParamLimits

0xdae8,	// (0x0003c9be) main_pane_set_t3

0xdafa,	// (0x0003c9d0) main_pane_set_t4_ParamLimits

0xdafa,	// (0x0003c9d0) main_pane_set_t4

0x0003,

0xf992,	// (0x0003e868) main_pane_set_t_ParamLimits

0xf992,	// (0x0003e868) main_pane_set_t

0xdb0c,	// (0x0003c9e2) setting_code_pane

0xdb16,	// (0x0003c9ec) setting_slider_graphic_pane

0xdb16,	// (0x0003c9ec) setting_slider_pane

0xdb16,	// (0x0003c9ec) setting_text_pane

0xdb16,	// (0x0003c9ec) setting_volume_pane

0x04fc,	// (0x0002f3d2) volume_set_pane

0x2d9d,	// (0x00031c73) bg_set_opt_pane_cp

0x0504,	// (0x0002f3da) setting_slider_pane_t1

0x051d,	// (0x0002f3f3) setting_slider_pane_t2

0x0537,	// (0x0002f40d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003e450) setting_slider_pane_t

0x054f,	// (0x0002f425) slider_set_pane

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp2

0x2ddf,	// (0x00031cb5) setting_slider_graphic_pane_g1

0x0565,	// (0x0002f43b) setting_slider_graphic_pane_t1

0x0575,	// (0x0002f44b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003e457) setting_slider_graphic_pane_t

0x0585,	// (0x0002f45b) slider_set_pane_cp

0x2cbd,	// (0x00031b93) input_focus_pane_cp1

0x64a0,	// (0x00035376) list_set_text_pane

0x2cb3,	// (0x00031b89) setting_text_pane_g1

0x2cbd,	// (0x00031b93) input_focus_pane_cp2

0x2cb3,	// (0x00031b89) setting_code_pane_g1

0x2de8,	// (0x00031cbe) setting_code_pane_t1

0x058d,	// (0x0002f463) set_text_pane_t1_ParamLimits

0x058d,	// (0x0002f463) set_text_pane_t1

0x3670,	// (0x00032546) set_opt_bg_pane_g1

0x3678,	// (0x0003254e) set_opt_bg_pane_g2

0x647a,	// (0x00035350) set_opt_bg_pane_g3

0x3688,	// (0x0003255e) set_opt_bg_pane_g4

0x3690,	// (0x00032566) set_opt_bg_pane_g5

0x3698,	// (0x0003256e) set_opt_bg_pane_g6

0x6484,	// (0x0003535a) set_opt_bg_pane_g7

0x648c,	// (0x00035362) set_opt_bg_pane_g8

0x6496,	// (0x0003536c) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0003e855) set_opt_bg_pane_g

0x646d,	// (0x00035343) slider_set_pane_g1

0x15a3,	// (0x00030479) slider_set_pane_g2

0x0006,

0xf970,	// (0x0003e846) slider_set_pane_g

0x153f,	// (0x00030415) volume_set_pane_g1

0x1547,	// (0x0003041d) volume_set_pane_g2

0x154f,	// (0x00030425) volume_set_pane_g3

0x1557,	// (0x0003042d) volume_set_pane_g4

0x155f,	// (0x00030435) volume_set_pane_g5

0x1567,	// (0x0003043d) volume_set_pane_g6

0x156f,	// (0x00030445) volume_set_pane_g7

0x1577,	// (0x0003044d) volume_set_pane_g8

0x157f,	// (0x00030455) volume_set_pane_g9

0x1587,	// (0x0003045d) volume_set_pane_g10

0x0009,

0xf948,	// (0x0003e81e) volume_set_pane_g

0xc6e3,	// (0x0003b5b9) indicator_pane_ParamLimits

0xc6e3,	// (0x0003b5b9) indicator_pane

0xc70b,	// (0x0003b5e1) main_idle_pane_g2_ParamLimits

0xc70b,	// (0x0003b5e1) main_idle_pane_g2

0xc743,	// (0x0003b619) main_pane_idle_g1_ParamLimits

0xc743,	// (0x0003b619) main_pane_idle_g1

0x2e37,	// (0x00031d0d) popup_clock_digital_analogue_window_ParamLimits

0x2e37,	// (0x00031d0d) popup_clock_digital_analogue_window

0xc76a,	// (0x0003b640) soft_indicator_pane_ParamLimits

0xc76a,	// (0x0003b640) soft_indicator_pane

0xc784,	// (0x0003b65a) wallpaper_pane_ParamLimits

0xc784,	// (0x0003b65a) wallpaper_pane

0x2cb3,	// (0x00031b89) wallpaper_pane_g1

0xc796,	// (0x0003b66c) indicator_pane_g1_ParamLimits

0xc796,	// (0x0003b66c) indicator_pane_g1

0x6870,	// (0x00035746) navi_navi_icon_text_pane_srt_g1

0x2e89,	// (0x00031d5f) soft_indicator_pane_t1

0x2ea3,	// (0x00031d79) aid_ps_area_pane

0xc7ac,	// (0x0003b682) aid_ps_clock_pane

0x2ec2,	// (0x00031d98) aid_ps_indicator_pane

0x2ece,	// (0x00031da4) indicator_ps_pane_ParamLimits

0x2ece,	// (0x00031da4) indicator_ps_pane

0x2edd,	// (0x00031db3) power_save_pane_g1_ParamLimits

0x2edd,	// (0x00031db3) power_save_pane_g1

0x2ee9,	// (0x00031dbf) power_save_pane_g2_ParamLimits

0x2ee9,	// (0x00031dbf) power_save_pane_g2

0x010d,	// (0x0002efe3) aid_navinavi_width_pane

0x2ea3,	// (0x00031d79) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003e45c) power_save_pane_g_ParamLimits

0xf586,	// (0x0003e45c) power_save_pane_g

0x2ef7,	// (0x00031dcd) power_save_pane_t1_ParamLimits

0x2ef7,	// (0x00031dcd) power_save_pane_t1

0xc7ac,	// (0x0003b682) aid_ps_clock_pane_ParamLimits

0x2ec2,	// (0x00031d98) aid_ps_indicator_pane_ParamLimits

0x2f09,	// (0x00031ddf) power_save_pane_t4_ParamLimits

0x2f09,	// (0x00031ddf) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003e461) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003e461) power_save_pane_t

0x2f33,	// (0x00031e09) power_save_t3_ParamLimits

0x2f33,	// (0x00031e09) power_save_t3

0x2f1e,	// (0x00031df4) power_save_t2_ParamLimits

0x2f1e,	// (0x00031df4) power_save_t2

0x2f48,	// (0x00031e1e) indicator_ps_pane_g1

0xc7ba,	// (0x0003b690) ai_gene_pane_ParamLimits

0xc7ba,	// (0x0003b690) ai_gene_pane

0xc7d1,	// (0x0003b6a7) ai_links_pane_ParamLimits

0xc7d1,	// (0x0003b6a7) ai_links_pane

0xc7e9,	// (0x0003b6bf) indicator_pane_cp1_ParamLimits

0xc7e9,	// (0x0003b6bf) indicator_pane_cp1

0xc7f8,	// (0x0003b6ce) main_pane_idle_g1_cp_ParamLimits

0xc7f8,	// (0x0003b6ce) main_pane_idle_g1_cp

0x2f81,	// (0x00031e57) popup_ai_links_title_window

0xc810,	// (0x0003b6e6) soft_indicator_pane_cp1_ParamLimits

0xc810,	// (0x0003b6e6) soft_indicator_pane_cp1

0x6246,	// (0x0003511c) ai_links_pane_g1

0x624f,	// (0x00035125) grid_ai_links_pane

0xd95e,	// (0x0003c834) ai_gene_pane_1

0x6234,	// (0x0003510a) ai_gene_pane_2

0x623d,	// (0x00035113) list_highlight_pane_cp4

0xd93a,	// (0x0003c810) cell_ai_link_pane_ParamLimits

0xd93a,	// (0x0003c810) cell_ai_link_pane

0x6205,	// (0x000350db) cell_ai_link_pane_g1

0x31ba,	// (0x00032090) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0003e7f9) cell_ai_link_pane_g

0x2cbd,	// (0x00031b93) grid_highlight_cp2

0x2cbd,	// (0x00031b93) bg_popup_sub_pane_cp1

0x2fa4,	// (0x00031e7a) popup_ai_links_title_window_t1

0x6153,	// (0x00035029) ai_gene_pane_1_g1_ParamLimits

0x6153,	// (0x00035029) ai_gene_pane_1_g1

0x615f,	// (0x00035035) ai_gene_pane_1_g2_ParamLimits

0x615f,	// (0x00035035) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0003e7ef) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0003e7ef) ai_gene_pane_1_g

0x616c,	// (0x00035042) ai_gene_pane_1_t1_ParamLimits

0x616c,	// (0x00035042) ai_gene_pane_1_t1

0x61a0,	// (0x00035076) grid_ai_soft_ind_pane

0x613e,	// (0x00035014) ai_gene_pane_2_t1_ParamLimits

0x613e,	// (0x00035014) ai_gene_pane_2_t1

0xc824,	// (0x0003b6fa) main_pane_empty_t1_ParamLimits

0xc824,	// (0x0003b6fa) main_pane_empty_t1

0xc83c,	// (0x0003b712) main_pane_empty_t2_ParamLimits

0xc83c,	// (0x0003b712) main_pane_empty_t2

0xc851,	// (0x0003b727) main_pane_empty_t3_ParamLimits

0xc851,	// (0x0003b727) main_pane_empty_t3

0xc863,	// (0x0003b739) main_pane_empty_t4_ParamLimits

0xc863,	// (0x0003b739) main_pane_empty_t4

0xc875,	// (0x0003b74b) main_pane_empty_t5_ParamLimits

0xc875,	// (0x0003b74b) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003e466) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003e466) main_pane_empty_t

0x36c1,	// (0x00032597) bg_popup_window_pane_ParamLimits

0x36c1,	// (0x00032597) bg_popup_window_pane

0x5ea8,	// (0x00034d7e) find_popup_pane_cp2_ParamLimits

0x5ea8,	// (0x00034d7e) find_popup_pane_cp2

0x5eb4,	// (0x00034d8a) heading_pane_ParamLimits

0x5eb4,	// (0x00034d8a) heading_pane

0x2cbd,	// (0x00031b93) bg_popup_sub_pane

0xd875,	// (0x0003c74b) bg_popup_window_pane_g1_ParamLimits

0xd875,	// (0x0003c74b) bg_popup_window_pane_g1

0xd884,	// (0x0003c75a) bg_popup_window_pane_g2_ParamLimits

0xd884,	// (0x0003c75a) bg_popup_window_pane_g2

0xd890,	// (0x0003c766) bg_popup_window_pane_g3_ParamLimits

0xd890,	// (0x0003c766) bg_popup_window_pane_g3

0xd8c4,	// (0x0003c79a) bg_popup_window_pane_g4_ParamLimits

0xd8c4,	// (0x0003c79a) bg_popup_window_pane_g4

0xd8d3,	// (0x0003c7a9) bg_popup_window_pane_g5_ParamLimits

0xd8d3,	// (0x0003c7a9) bg_popup_window_pane_g5

0xd8e3,	// (0x0003c7b9) bg_popup_window_pane_g6_ParamLimits

0xd8e3,	// (0x0003c7b9) bg_popup_window_pane_g6

0xd8ef,	// (0x0003c7c5) bg_popup_window_pane_g7_ParamLimits

0xd8ef,	// (0x0003c7c5) bg_popup_window_pane_g7

0xd8fe,	// (0x0003c7d4) bg_popup_window_pane_g8_ParamLimits

0xd8fe,	// (0x0003c7d4) bg_popup_window_pane_g8

0xd90d,	// (0x0003c7e3) bg_popup_window_pane_g9_ParamLimits

0xd90d,	// (0x0003c7e3) bg_popup_window_pane_g9

0x5e8e,	// (0x00034d64) bg_popup_window_pane_g10_ParamLimits

0x5e8e,	// (0x00034d64) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0003e7b7) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0003e7b7) bg_popup_window_pane_g

0x5db7,	// (0x00034c8d) bg_popup_heading_pane_ParamLimits

0x5db7,	// (0x00034c8d) bg_popup_heading_pane

0x162b,	// (0x00030501) tabs_4_passive_pane_cp_srt_ParamLimits

0x162b,	// (0x00030501) tabs_4_passive_pane_cp_srt

0x163d,	// (0x00030513) tabs_4_passive_pane_srt_ParamLimits

0x5dcb,	// (0x00034ca1) heading_pane_g2

0x163d,	// (0x00030513) tabs_4_passive_pane_srt

0x515a,	// (0x00034030) bg_passive_tab_pane_cp3_srt_ParamLimits

0x515a,	// (0x00034030) bg_passive_tab_pane_cp3_srt

0x5dd3,	// (0x00034ca9) heading_pane_t1_ParamLimits

0x5dd3,	// (0x00034ca9) heading_pane_t1

0x5dea,	// (0x00034cc0) heading_pane_t2_ParamLimits

0x5dea,	// (0x00034cc0) heading_pane_t2

0x0001,

0xf8dc,	// (0x0003e7b2) heading_pane_t_ParamLimits

0xf8dc,	// (0x0003e7b2) heading_pane_t

0x58d8,	// (0x000347ae) bg_popup_heading_pane_g1

0x5987,	// (0x0003485d) bg_popup_heading_pane_g2

0x5991,	// (0x00034867) bg_popup_heading_pane_g3

0x599b,	// (0x00034871) bg_popup_heading_pane_g4

0x59a5,	// (0x0003487b) bg_popup_heading_pane_g5

0x59af,	// (0x00034885) bg_popup_heading_pane_g6

0x59b7,	// (0x0003488d) bg_popup_heading_pane_g7

0x59bf,	// (0x00034895) bg_popup_heading_pane_g8

0x59c9,	// (0x0003489f) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0003e76e) bg_popup_heading_pane_g

0x506a,	// (0x00033f40) bg_popup_sub_pane_g1

0x507a,	// (0x00033f50) bg_popup_sub_pane_g2

0x5072,	// (0x00033f48) bg_popup_sub_pane_g3

0x508a,	// (0x00033f60) bg_popup_sub_pane_g4

0x5082,	// (0x00033f58) bg_popup_sub_pane_g5

0x5092,	// (0x00033f68) bg_popup_sub_pane_g6

0x509a,	// (0x00033f70) bg_popup_sub_pane_g7

0x50aa,	// (0x00033f80) bg_popup_sub_pane_g8

0x50a2,	// (0x00033f78) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0003e748) bg_popup_sub_pane_g

0x3018,	// (0x00031eee) bg_popup_window_pane_cp5_ParamLimits

0x3018,	// (0x00031eee) bg_popup_window_pane_cp5

0x3034,	// (0x00031f0a) popup_note_window_g1_ParamLimits

0x3034,	// (0x00031f0a) popup_note_window_g1

0x3040,	// (0x00031f16) popup_note_window_t1_ParamLimits

0x3040,	// (0x00031f16) popup_note_window_t1

0x3056,	// (0x00031f2c) popup_note_window_t2_ParamLimits

0x3056,	// (0x00031f2c) popup_note_window_t2

0x306c,	// (0x00031f42) popup_note_window_t3_ParamLimits

0x306c,	// (0x00031f42) popup_note_window_t3

0x3082,	// (0x00031f58) popup_note_window_t4_ParamLimits

0x3082,	// (0x00031f58) popup_note_window_t4

0x30aa,	// (0x00031f80) popup_note_window_t5_ParamLimits

0x30aa,	// (0x00031f80) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003e471) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003e471) popup_note_window_t

0x30ce,	// (0x00031fa4) bg_popup_window_pane_cp6_ParamLimits

0x30ce,	// (0x00031fa4) bg_popup_window_pane_cp6

0x5854,	// (0x0003472a) popup_note_image_window_g1_ParamLimits

0x5854,	// (0x0003472a) popup_note_image_window_g1

0x5860,	// (0x00034736) popup_note_image_window_g2_ParamLimits

0x5860,	// (0x00034736) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0003e73c) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0003e73c) popup_note_image_window_g

0x5879,	// (0x0003474f) popup_note_image_window_t1_ParamLimits

0x5879,	// (0x0003474f) popup_note_image_window_t1

0x5892,	// (0x00034768) popup_note_image_window_t2_ParamLimits

0x5892,	// (0x00034768) popup_note_image_window_t2

0x58ab,	// (0x00034781) popup_note_image_window_t3_ParamLimits

0x58ab,	// (0x00034781) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0003e741) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0003e741) popup_note_image_window_t

0x5715,	// (0x000345eb) bg_popup_window_pane_cp7_ParamLimits

0x5715,	// (0x000345eb) bg_popup_window_pane_cp7

0x5745,	// (0x0003461b) popup_note_wait_window_g1_ParamLimits

0x5745,	// (0x0003461b) popup_note_wait_window_g1

0x5751,	// (0x00034627) popup_note_wait_window_g2_ParamLimits

0x5751,	// (0x00034627) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0003e72a) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0003e72a) popup_note_wait_window_g

0x5769,	// (0x0003463f) popup_note_wait_window_t1_ParamLimits

0x5769,	// (0x0003463f) popup_note_wait_window_t1

0x5790,	// (0x00034666) popup_note_wait_window_t2_ParamLimits

0x5790,	// (0x00034666) popup_note_wait_window_t2

0x57ad,	// (0x00034683) popup_note_wait_window_t3_ParamLimits

0x57ad,	// (0x00034683) popup_note_wait_window_t3

0x57c0,	// (0x00034696) popup_note_wait_window_t4_ParamLimits

0x57c0,	// (0x00034696) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0003e731) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0003e731) popup_note_wait_window_t

0x57e5,	// (0x000346bb) wait_bar_pane_ParamLimits

0x57e5,	// (0x000346bb) wait_bar_pane

0x2cbd,	// (0x00031b93) wait_anim_pane

0x2cbd,	// (0x00031b93) wait_border_pane

0x2cb3,	// (0x00031b89) wait_anim_pane_g1

0x2cb3,	// (0x00031b89) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0003e5f5) wait_anim_pane_g

0x56b9,	// (0x0003458f) wait_border_pane_g1

0x56c4,	// (0x0003459a) wait_border_pane_g2

0x56cd,	// (0x000345a3) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0003e723) wait_border_pane_g

0x5524,	// (0x000343fa) bg_popup_window_pane_cp16_ParamLimits

0x5524,	// (0x000343fa) bg_popup_window_pane_cp16

0x5624,	// (0x000344fa) indicator_popup_pane_cp4_ParamLimits

0x5624,	// (0x000344fa) indicator_popup_pane_cp4

0x5638,	// (0x0003450e) popup_query_data_window_t1_ParamLimits

0x5638,	// (0x0003450e) popup_query_data_window_t1

0x564a,	// (0x00034520) popup_query_data_window_t2_ParamLimits

0x564a,	// (0x00034520) popup_query_data_window_t2

0x5663,	// (0x00034539) popup_query_data_window_t3_ParamLimits

0x5663,	// (0x00034539) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0003e71c) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0003e71c) popup_query_data_window_t

0x567d,	// (0x00034553) query_popup_data_pane_ParamLimits

0x567d,	// (0x00034553) query_popup_data_pane

0x5691,	// (0x00034567) query_popup_data_pane_cp1_ParamLimits

0x5691,	// (0x00034567) query_popup_data_pane_cp1

0x5524,	// (0x000343fa) bg_popup_window_pane_cp10_ParamLimits

0x5524,	// (0x000343fa) bg_popup_window_pane_cp10

0x5556,	// (0x0003442c) indicator_popup_pane_ParamLimits

0x5556,	// (0x0003442c) indicator_popup_pane

0x5578,	// (0x0003444e) popup_query_code_window_t1_ParamLimits

0x5578,	// (0x0003444e) popup_query_code_window_t1

0x5592,	// (0x00034468) popup_query_code_window_t2_ParamLimits

0x5592,	// (0x00034468) popup_query_code_window_t2

0x55db,	// (0x000344b1) popup_query_code_window_t3_ParamLimits

0x55db,	// (0x000344b1) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0003e715) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0003e715) popup_query_code_window_t

0x560a,	// (0x000344e0) query_popup_pane_ParamLimits

0x560a,	// (0x000344e0) query_popup_pane

0x30ce,	// (0x00031fa4) bg_popup_window_pane_cp15_ParamLimits

0x30ce,	// (0x00031fa4) bg_popup_window_pane_cp15

0x30ec,	// (0x00031fc2) indicator_popup_pane_cp1_ParamLimits

0x30ec,	// (0x00031fc2) indicator_popup_pane_cp1

0x30ff,	// (0x00031fd5) indicator_popup_pane_cp2_ParamLimits

0x30ff,	// (0x00031fd5) indicator_popup_pane_cp2

0x3112,	// (0x00031fe8) popup_query_data_code_window_g1_ParamLimits

0x3112,	// (0x00031fe8) popup_query_data_code_window_g1

0x3125,	// (0x00031ffb) popup_query_data_code_window_t1_ParamLimits

0x3125,	// (0x00031ffb) popup_query_data_code_window_t1

0x3137,	// (0x0003200d) popup_query_data_code_window_t2_ParamLimits

0x3137,	// (0x0003200d) popup_query_data_code_window_t2

0x3149,	// (0x0003201f) popup_query_data_code_window_t3_ParamLimits

0x3149,	// (0x0003201f) popup_query_data_code_window_t3

0x315f,	// (0x00032035) popup_query_data_code_window_t4_ParamLimits

0x315f,	// (0x00032035) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003e47c) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003e47c) popup_query_data_code_window_t

0x12ec,	// (0x000301c2) list_single_midp_graphic_pane_g3

0x3177,	// (0x0003204d) query_popup_data_pane_cp2_ParamLimits

0x318a,	// (0x00032060) query_popup_pane_cp2_ParamLimits

0x318a,	// (0x00032060) query_popup_pane_cp2

0x2cbd,	// (0x00031b93) bg_popup_window_pane_cp11

0x551c,	// (0x000343f2) heading_pane_cp5

0x3272,	// (0x00032148) listscroll_popup_info_pane

0x2cbd,	// (0x00031b93) input_focus_pane_cp3

0x319d,	// (0x00032073) query_popup_pane_t1

0x31ab,	// (0x00032081) list_popup_info_pane_ParamLimits

0x31ab,	// (0x00032081) list_popup_info_pane

0x31ba,	// (0x00032090) listscroll_popup_info_pane_g1

0x31c2,	// (0x00032098) scroll_pane_cp7

0x31cc,	// (0x000320a2) popup_info_list_pane_t1_ParamLimits

0x31cc,	// (0x000320a2) popup_info_list_pane_t1

0x31e6,	// (0x000320bc) popup_info_list_pane_t2_ParamLimits

0x31e6,	// (0x000320bc) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003e485) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003e485) popup_info_list_pane_t

0x2cbd,	// (0x00031b93) bg_popup_window_pane_cp12

0x688a,	// (0x00035760) find_popup_pane

0x2d9d,	// (0x00031c73) bg_popup_window_pane_cp3

0x3200,	// (0x000320d6) heading_pane_cp3

0x320c,	// (0x000320e2) listscroll_popup_graphic_pane

0x2cbd,	// (0x00031b93) bg_popup_window_pane_cp4

0xc8d7,	// (0x0003b7ad) heading_pane_cp4

0x3272,	// (0x00032148) listscroll_popup_colour_pane

0xc8df,	// (0x0003b7b5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc8df,	// (0x0003b7b5) cell_large_graphic_colour_none_popup_pane

0xc8f3,	// (0x0003b7c9) grid_large_graphic_colour_popup_pane_ParamLimits

0xc8f3,	// (0x0003b7c9) grid_large_graphic_colour_popup_pane

0xc917,	// (0x0003b7ed) listscroll_popup_colour_pane_g1_ParamLimits

0xc917,	// (0x0003b7ed) listscroll_popup_colour_pane_g1

0xc92e,	// (0x0003b804) listscroll_popup_colour_pane_g2_ParamLimits

0xc92e,	// (0x0003b804) listscroll_popup_colour_pane_g2

0xc945,	// (0x0003b81b) listscroll_popup_colour_pane_g3_ParamLimits

0xc945,	// (0x0003b81b) listscroll_popup_colour_pane_g3

0xc955,	// (0x0003b82b) listscroll_popup_colour_pane_g4_ParamLimits

0xc955,	// (0x0003b82b) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003e48a) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003e48a) listscroll_popup_colour_pane_g

0x330c,	// (0x000321e2) scroll_pane_cp6_ParamLimits

0x330c,	// (0x000321e2) scroll_pane_cp6

0xc965,	// (0x0003b83b) cell_large_graphic_colour_popup_pane_ParamLimits

0xc965,	// (0x0003b83b) cell_large_graphic_colour_popup_pane

0x333d,	// (0x00032213) cell_large_graphic_colour_none_popup_pane_t1

0x2cbd,	// (0x00031b93) grid_highlight_pane_cp5

0x334c,	// (0x00032222) cell_large_graphic_colour_popup_pane_g1

0x3354,	// (0x0003222a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003e493) cell_large_graphic_colour_popup_pane_g

0x335c,	// (0x00032232) cell_large_graphic_colour_popup_pane_g2_copy1

0x3365,	// (0x0003223b) grid_highlight_pane_cp4

0x336d,	// (0x00032243) bg_popup_window_pane_cp8_ParamLimits

0x336d,	// (0x00032243) bg_popup_window_pane_cp8

0x3388,	// (0x0003225e) popup_snote_single_text_window_g1_ParamLimits

0x3388,	// (0x0003225e) popup_snote_single_text_window_g1

0x339a,	// (0x00032270) popup_snote_single_text_window_t1_ParamLimits

0x339a,	// (0x00032270) popup_snote_single_text_window_t1

0x33ad,	// (0x00032283) popup_snote_single_text_window_t2_ParamLimits

0x33ad,	// (0x00032283) popup_snote_single_text_window_t2

0x33c0,	// (0x00032296) popup_snote_single_text_window_t3_ParamLimits

0x33c0,	// (0x00032296) popup_snote_single_text_window_t3

0x33f9,	// (0x000322cf) popup_snote_single_text_window_t4_ParamLimits

0x33f9,	// (0x000322cf) popup_snote_single_text_window_t4

0x342d,	// (0x00032303) popup_snote_single_text_window_t5_ParamLimits

0x342d,	// (0x00032303) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003e498) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003e498) popup_snote_single_text_window_t

0x345c,	// (0x00032332) bg_popup_window_pane_cp9_ParamLimits

0x345c,	// (0x00032332) bg_popup_window_pane_cp9

0x3388,	// (0x0003225e) popup_snote_single_graphic_window_g1_ParamLimits

0x3388,	// (0x0003225e) popup_snote_single_graphic_window_g1

0x346a,	// (0x00032340) popup_snote_single_graphic_window_g2_ParamLimits

0x346a,	// (0x00032340) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003e4a3) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003e4a3) popup_snote_single_graphic_window_g

0x3476,	// (0x0003234c) popup_snote_single_graphic_window_t1_ParamLimits

0x3476,	// (0x0003234c) popup_snote_single_graphic_window_t1

0x3489,	// (0x0003235f) popup_snote_single_graphic_window_t2_ParamLimits

0x3489,	// (0x0003235f) popup_snote_single_graphic_window_t2

0x349c,	// (0x00032372) popup_snote_single_graphic_window_t3_ParamLimits

0x349c,	// (0x00032372) popup_snote_single_graphic_window_t3

0x34d5,	// (0x000323ab) popup_snote_single_graphic_window_t4_ParamLimits

0x34d5,	// (0x000323ab) popup_snote_single_graphic_window_t4

0x3509,	// (0x000323df) popup_snote_single_graphic_window_t5_ParamLimits

0x3509,	// (0x000323df) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003e4a8) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003e4a8) popup_snote_single_graphic_window_t

0x67ce,	// (0x000356a4) grid_graphic_popup_pane_ParamLimits

0x67ce,	// (0x000356a4) grid_graphic_popup_pane

0x67f6,	// (0x000356cc) listscroll_popup_graphic_pane_g1_ParamLimits

0x67f6,	// (0x000356cc) listscroll_popup_graphic_pane_g1

0xdc22,	// (0x0003caf8) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc22,	// (0x0003caf8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0003e892) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0003e892) listscroll_popup_graphic_pane_g

0x681e,	// (0x000356f4) scroll_pane_cp5

0xdbe6,	// (0x0003cabc) cell_graphic_popup_pane_ParamLimits

0xdbe6,	// (0x0003cabc) cell_graphic_popup_pane

0x6758,	// (0x0003562e) cell_graphic_popup_pane_g1

0x6760,	// (0x00035636) cell_graphic_popup_pane_g2

0x335c,	// (0x00032232) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0003e88b) cell_graphic_popup_pane_g

0x6769,	// (0x0003563f) cell_graphic_popup_pane_t2

0x3365,	// (0x0003223b) grid_highlight_pane_cp3

0x354a,	// (0x00032420) list_gen_pane_ParamLimits

0x354a,	// (0x00032420) list_gen_pane

0x357c,	// (0x00032452) scroll_pane

0xdba1,	// (0x0003ca77) bg_list_pane_g1_ParamLimits

0xdba1,	// (0x0003ca77) bg_list_pane_g1

0x66d5,	// (0x000355ab) bg_list_pane_g2_ParamLimits

0x66d5,	// (0x000355ab) bg_list_pane_g2

0x66e8,	// (0x000355be) bg_list_pane_g3_ParamLimits

0x66e8,	// (0x000355be) bg_list_pane_g3

0x66fa,	// (0x000355d0) bg_list_pane_g4_ParamLimits

0x66fa,	// (0x000355d0) bg_list_pane_g4

0xdbbc,	// (0x0003ca92) bg_list_pane_g5_ParamLimits

0xdbbc,	// (0x0003ca92) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0003e880) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0003e880) bg_list_pane_g

0xdb58,	// (0x0003ca2e) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double2_graphic_large_graphic_pane

0xdb58,	// (0x0003ca2e) list_double2_graphic_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double2_graphic_pane

0xdb58,	// (0x0003ca2e) list_double2_large_graphic_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double2_large_graphic_pane

0xdb58,	// (0x0003ca2e) list_double2_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double2_pane

0xdb58,	// (0x0003ca2e) list_double_graphic_heading_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_graphic_heading_pane

0xdb58,	// (0x0003ca2e) list_double_graphic_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_graphic_pane

0xdb58,	// (0x0003ca2e) list_double_heading_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_heading_pane

0xdb58,	// (0x0003ca2e) list_double_large_graphic_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_large_graphic_pane

0xdb58,	// (0x0003ca2e) list_double_number_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_number_pane

0xdb58,	// (0x0003ca2e) list_double_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_pane

0xdb58,	// (0x0003ca2e) list_double_time_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_double_time_pane

0xdb58,	// (0x0003ca2e) list_setting_number_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_setting_number_pane

0xdb58,	// (0x0003ca2e) list_setting_pane_ParamLimits

0xdb58,	// (0x0003ca2e) list_setting_pane

0xdb6a,	// (0x0003ca40) list_single_2graphic_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_2graphic_pane

0xdb6a,	// (0x0003ca40) list_single_graphic_heading_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_graphic_heading_pane

0xdb6a,	// (0x0003ca40) list_single_graphic_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_graphic_pane

0xdb6a,	// (0x0003ca40) list_single_heading_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_heading_pane

0xdb6a,	// (0x0003ca40) list_single_large_graphic_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_large_graphic_pane

0xdb6a,	// (0x0003ca40) list_single_number_heading_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_number_heading_pane

0xdb6a,	// (0x0003ca40) list_single_number_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_number_pane

0xdb6a,	// (0x0003ca40) list_single_pane_ParamLimits

0xdb6a,	// (0x0003ca40) list_single_pane

0x2cbd,	// (0x00031b93) list_highlight_pane_cp1

0x24ee,	// (0x000313c4) list_single_pane_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_pane_g1

0x24fa,	// (0x000313d0) list_single_pane_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_pane_g

0x26ef,	// (0x000315c5) list_single_pane_t1_ParamLimits

0x26ef,	// (0x000315c5) list_single_pane_t1

0x24ee,	// (0x000313c4) list_single_number_pane_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_number_pane_g1

0x24fa,	// (0x000313d0) list_single_number_pane_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_number_pane_g

0x24d8,	// (0x000313ae) list_single_number_pane_t1_ParamLimits

0x24d8,	// (0x000313ae) list_single_number_pane_t1

0xbf0f,	// (0x0003ade5) list_single_number_pane_t2_ParamLimits

0xbf0f,	// (0x0003ade5) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0003e841) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0003e841) list_single_number_pane_t

0x2acc,	// (0x000319a2) list_single_graphic_pane_g1_ParamLimits

0x2acc,	// (0x000319a2) list_single_graphic_pane_g1

0x24ee,	// (0x000313c4) list_single_graphic_pane_g2_ParamLimits

0x24ee,	// (0x000313c4) list_single_graphic_pane_g2

0x24fa,	// (0x000313d0) list_single_graphic_pane_g3_ParamLimits

0x24fa,	// (0x000313d0) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003e4b3) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003e4b3) list_single_graphic_pane_g

0xb616,	// (0x0003a4ec) list_single_graphic_pane_t1_ParamLimits

0xb616,	// (0x0003a4ec) list_single_graphic_pane_t1

0x24ee,	// (0x000313c4) list_single_heading_pane_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_heading_pane_g1

0x24fa,	// (0x000313d0) list_single_heading_pane_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_heading_pane_g

0x2711,	// (0x000315e7) list_single_heading_pane_t1_ParamLimits

0x2711,	// (0x000315e7) list_single_heading_pane_t1

0xb62c,	// (0x0003a502) list_single_heading_pane_t2_ParamLimits

0xb62c,	// (0x0003a502) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003e4bf) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003e4bf) list_single_heading_pane_t

0x24ee,	// (0x000313c4) list_single_number_heading_pane_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_number_heading_pane_g1

0x24fa,	// (0x000313d0) list_single_number_heading_pane_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_number_heading_pane_g

0x2711,	// (0x000315e7) list_single_number_heading_pane_t1_ParamLimits

0x2711,	// (0x000315e7) list_single_number_heading_pane_t1

0xb63e,	// (0x0003a514) list_single_number_heading_pane_t2_ParamLimits

0xb63e,	// (0x0003a514) list_single_number_heading_pane_t2

0x26c9,	// (0x0003159f) list_single_number_heading_pane_t3_ParamLimits

0x26c9,	// (0x0003159f) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0003e4c4) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0003e4c4) list_single_number_heading_pane_t

0x24b4,	// (0x0003138a) list_single_graphic_heading_pane_g1_ParamLimits

0x24b4,	// (0x0003138a) list_single_graphic_heading_pane_g1

0xb650,	// (0x0003a526) list_single_graphic_heading_pane_g4_ParamLimits

0xb650,	// (0x0003a526) list_single_graphic_heading_pane_g4

0x24fa,	// (0x000313d0) list_single_graphic_heading_pane_g5_ParamLimits

0x24fa,	// (0x000313d0) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0003e4cb) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0003e4cb) list_single_graphic_heading_pane_g

0x2711,	// (0x000315e7) list_single_graphic_heading_pane_t1_ParamLimits

0x2711,	// (0x000315e7) list_single_graphic_heading_pane_t1

0xb661,	// (0x0003a537) list_single_graphic_heading_pane_t2_ParamLimits

0xb661,	// (0x0003a537) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0003e4d2) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0003e4d2) list_single_graphic_heading_pane_t

0x2705,	// (0x000315db) list_single_large_graphic_pane_g1_ParamLimits

0x2705,	// (0x000315db) list_single_large_graphic_pane_g1

0x24ee,	// (0x000313c4) list_single_large_graphic_pane_g2_ParamLimits

0x24ee,	// (0x000313c4) list_single_large_graphic_pane_g2

0x24fa,	// (0x000313d0) list_single_large_graphic_pane_g3_ParamLimits

0x24fa,	// (0x000313d0) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003e4d7) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003e4d7) list_single_large_graphic_pane_g

0x56c4,	// (0x0003459a) wait_border_pane_g2_copy1

0xb673,	// (0x0003a549) list_single_large_graphic_pane_g4_cp2

0x2711,	// (0x000315e7) list_single_large_graphic_pane_t1_ParamLimits

0x2711,	// (0x000315e7) list_single_large_graphic_pane_t1

0x28fe,	// (0x000317d4) list_double_pane_g1_ParamLimits

0x28fe,	// (0x000317d4) list_double_pane_g1

0xb67b,	// (0x0003a551) list_double_pane_g2_ParamLimits

0xb67b,	// (0x0003a551) list_double_pane_g2

0x0001,

0xf608,	// (0x0003e4de) list_double_pane_g_ParamLimits

0xf608,	// (0x0003e4de) list_double_pane_g

0xb687,	// (0x0003a55d) list_double_pane_t1_ParamLimits

0xb687,	// (0x0003a55d) list_double_pane_t1

0xb69d,	// (0x0003a573) list_double_pane_t2_ParamLimits

0xb69d,	// (0x0003a573) list_double_pane_t2

0x0001,

0xf60d,	// (0x0003e4e3) list_double_pane_t_ParamLimits

0xf60d,	// (0x0003e4e3) list_double_pane_t

0xb6af,	// (0x0003a585) list_double2_pane_g1_ParamLimits

0xb6af,	// (0x0003a585) list_double2_pane_g1

0x08e5,	// (0x0002f7bb) list_double2_pane_g2_ParamLimits

0x08e5,	// (0x0002f7bb) list_double2_pane_g2

0x0001,

0xf612,	// (0x0003e4e8) list_double2_pane_g_ParamLimits

0xf612,	// (0x0003e4e8) list_double2_pane_g

0xb6c0,	// (0x0003a596) list_double2_pane_t1_ParamLimits

0xb6c0,	// (0x0003a596) list_double2_pane_t1

0xb6d6,	// (0x0003a5ac) list_double2_pane_t2_ParamLimits

0xb6d6,	// (0x0003a5ac) list_double2_pane_t2

0x0001,

0xf617,	// (0x0003e4ed) list_double2_pane_t_ParamLimits

0xf617,	// (0x0003e4ed) list_double2_pane_t

0x28fe,	// (0x000317d4) list_double_number_pane_g1_ParamLimits

0x28fe,	// (0x000317d4) list_double_number_pane_g1

0xb67b,	// (0x0003a551) list_double_number_pane_g2_ParamLimits

0xb67b,	// (0x0003a551) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0003e4de) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0003e4de) list_double_number_pane_g

0xb6e8,	// (0x0003a5be) list_double_number_pane_t1_ParamLimits

0xb6e8,	// (0x0003a5be) list_double_number_pane_t1

0xb6fa,	// (0x0003a5d0) list_double_number_pane_t2_ParamLimits

0xb6fa,	// (0x0003a5d0) list_double_number_pane_t2

0xb710,	// (0x0003a5e6) list_double_number_pane_t3_ParamLimits

0xb710,	// (0x0003a5e6) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0003e4f2) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0003e4f2) list_double_number_pane_t

0xb722,	// (0x0003a5f8) list_double_graphic_pane_g1_ParamLimits

0xb722,	// (0x0003a5f8) list_double_graphic_pane_g1

0xb72e,	// (0x0003a604) list_double_graphic_pane_g2_ParamLimits

0xb72e,	// (0x0003a604) list_double_graphic_pane_g2

0xb73d,	// (0x0003a613) list_double_graphic_pane_g3_ParamLimits

0xb73d,	// (0x0003a613) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0003e4f9) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0003e4f9) list_double_graphic_pane_g

0xb755,	// (0x0003a62b) list_double_graphic_pane_t1_ParamLimits

0xb755,	// (0x0003a62b) list_double_graphic_pane_t1

0xb76b,	// (0x0003a641) list_double_graphic_pane_t2_ParamLimits

0xb76b,	// (0x0003a641) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e502) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e502) list_double_graphic_pane_t

0xb77d,	// (0x0003a653) list_double2_graphic_pane_g1_ParamLimits

0xb77d,	// (0x0003a653) list_double2_graphic_pane_g1

0xb789,	// (0x0003a65f) list_double2_graphic_pane_g2_ParamLimits

0xb789,	// (0x0003a65f) list_double2_graphic_pane_g2

0x08e5,	// (0x0002f7bb) list_double2_graphic_pane_g3_ParamLimits

0x08e5,	// (0x0002f7bb) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e507) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e507) list_double2_graphic_pane_g

0xb795,	// (0x0003a66b) list_double2_graphic_pane_t1_ParamLimits

0xb795,	// (0x0003a66b) list_double2_graphic_pane_t1

0xb7ab,	// (0x0003a681) list_double2_graphic_pane_t2_ParamLimits

0xb7ab,	// (0x0003a681) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e50e) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e50e) list_double2_graphic_pane_t

0xb7bd,	// (0x0003a693) list_double_large_graphic_pane_g1_ParamLimits

0xb7bd,	// (0x0003a693) list_double_large_graphic_pane_g1

0xb7e8,	// (0x0003a6be) list_double_large_graphic_pane_g2_ParamLimits

0xb7e8,	// (0x0003a6be) list_double_large_graphic_pane_g2

0xb67b,	// (0x0003a551) list_double_large_graphic_pane_g3_ParamLimits

0xb67b,	// (0x0003a551) list_double_large_graphic_pane_g3

0xb7f9,	// (0x0003a6cf) list_double_large_graphic_pane_g4_ParamLimits

0xb7f9,	// (0x0003a6cf) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0003e513) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0003e513) list_double_large_graphic_pane_g

0xb80b,	// (0x0003a6e1) list_double_large_graphic_pane_t1_ParamLimits

0xb80b,	// (0x0003a6e1) list_double_large_graphic_pane_t1

0xb824,	// (0x0003a6fa) list_double_large_graphic_pane_t2_ParamLimits

0xb824,	// (0x0003a6fa) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0003e51e) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0003e51e) list_double_large_graphic_pane_t

0xb836,	// (0x0003a70c) list_double2_large_graphic_pane_g1_ParamLimits

0xb836,	// (0x0003a70c) list_double2_large_graphic_pane_g1

0xb6af,	// (0x0003a585) list_double2_large_graphic_pane_g2_ParamLimits

0xb6af,	// (0x0003a585) list_double2_large_graphic_pane_g2

0x08e5,	// (0x0002f7bb) list_double2_large_graphic_pane_g3_ParamLimits

0x08e5,	// (0x0002f7bb) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0003e523) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0003e523) list_double2_large_graphic_pane_g

0xb842,	// (0x0003a718) list_double2_large_graphic_pane_t1_ParamLimits

0xb842,	// (0x0003a718) list_double2_large_graphic_pane_t1

0xb858,	// (0x0003a72e) list_double2_large_graphic_pane_t2_ParamLimits

0xb858,	// (0x0003a72e) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0003e52a) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0003e52a) list_double2_large_graphic_pane_t

0xb86a,	// (0x0003a740) list_double_heading_pane_g1_ParamLimits

0xb86a,	// (0x0003a740) list_double_heading_pane_g1

0x06f0,	// (0x0002f5c6) list_double_heading_pane_g2_ParamLimits

0x06f0,	// (0x0002f5c6) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0003e52f) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0003e52f) list_double_heading_pane_g

0xb87b,	// (0x0003a751) list_double_heading_pane_t1_ParamLimits

0xb87b,	// (0x0003a751) list_double_heading_pane_t1

0xb6d6,	// (0x0003a5ac) list_double_heading_pane_t2_ParamLimits

0xb6d6,	// (0x0003a5ac) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0003e534) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0003e534) list_double_heading_pane_t

0xb722,	// (0x0003a5f8) list_double_graphic_heading_pane_g1_ParamLimits

0xb722,	// (0x0003a5f8) list_double_graphic_heading_pane_g1

0xb86a,	// (0x0003a740) list_double_graphic_heading_pane_g2_ParamLimits

0xb86a,	// (0x0003a740) list_double_graphic_heading_pane_g2

0x06f0,	// (0x0002f5c6) list_double_graphic_heading_pane_g3_ParamLimits

0x06f0,	// (0x0002f5c6) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0003e539) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0003e539) list_double_graphic_heading_pane_g

0xb891,	// (0x0003a767) list_double_graphic_heading_pane_t1_ParamLimits

0xb891,	// (0x0003a767) list_double_graphic_heading_pane_t1

0xb7ab,	// (0x0003a681) list_double_graphic_heading_pane_t2_ParamLimits

0xb7ab,	// (0x0003a681) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0003e540) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0003e540) list_double_graphic_heading_pane_t

0xb7e8,	// (0x0003a6be) list_double_time_pane_g1_ParamLimits

0xb7e8,	// (0x0003a6be) list_double_time_pane_g1

0xb67b,	// (0x0003a551) list_double_time_pane_g2_ParamLimits

0xb67b,	// (0x0003a551) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0003e545) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0003e545) list_double_time_pane_g

0xb8a7,	// (0x0003a77d) list_double_time_pane_t1_ParamLimits

0xb8a7,	// (0x0003a77d) list_double_time_pane_t1

0xb8bd,	// (0x0003a793) list_double_time_pane_t2_ParamLimits

0xb8bd,	// (0x0003a793) list_double_time_pane_t2

0xb8cf,	// (0x0003a7a5) list_double_time_pane_t3_ParamLimits

0xb8cf,	// (0x0003a7a5) list_double_time_pane_t3

0xb8e1,	// (0x0003a7b7) list_double_time_pane_t4_ParamLimits

0xb8e1,	// (0x0003a7b7) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0003e54a) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0003e54a) list_double_time_pane_t

0xb8f3,	// (0x0003a7c9) list_setting_pane_g1_ParamLimits

0xb8f3,	// (0x0003a7c9) list_setting_pane_g1

0xb8ff,	// (0x0003a7d5) list_setting_pane_g2_ParamLimits

0xb8ff,	// (0x0003a7d5) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0003e553) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0003e553) list_setting_pane_g

0xb90b,	// (0x0003a7e1) list_setting_pane_t1_ParamLimits

0xb90b,	// (0x0003a7e1) list_setting_pane_t1

0xb925,	// (0x0003a7fb) list_setting_pane_t2_ParamLimits

0xb925,	// (0x0003a7fb) list_setting_pane_t2

0x0002,

0xf682,	// (0x0003e558) list_setting_pane_t_ParamLimits

0xf682,	// (0x0003e558) list_setting_pane_t

0xb964,	// (0x0003a83a) set_value_pane_cp_ParamLimits

0xb964,	// (0x0003a83a) set_value_pane_cp

0xb970,	// (0x0003a846) list_setting_number_pane_g1_ParamLimits

0xb970,	// (0x0003a846) list_setting_number_pane_g1

0xb97c,	// (0x0003a852) list_setting_number_pane_g2_ParamLimits

0xb97c,	// (0x0003a852) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0003e55f) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0003e55f) list_setting_number_pane_g

0xb988,	// (0x0003a85e) list_setting_number_pane_t1_ParamLimits

0xb988,	// (0x0003a85e) list_setting_number_pane_t1

0xb9a1,	// (0x0003a877) list_setting_number_pane_t2_ParamLimits

0xb9a1,	// (0x0003a877) list_setting_number_pane_t2

0xb9bb,	// (0x0003a891) list_setting_number_pane_t3_ParamLimits

0xb9bb,	// (0x0003a891) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0003e564) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0003e564) list_setting_number_pane_t

0xb964,	// (0x0003a83a) set_value_pane_ParamLimits

0xb964,	// (0x0003a83a) set_value_pane

0x35b0,	// (0x00032486) bg_set_opt_pane_ParamLimits

0x35b0,	// (0x00032486) bg_set_opt_pane

0x0a6e,	// (0x0002f944) set_value_pane_t1

0x35d1,	// (0x000324a7) slider_set_pane_cp3

0x35da,	// (0x000324b0) volume_small_pane_cp

0x35e3,	// (0x000324b9) list_form_gen_pane

0x35ec,	// (0x000324c2) scroll_pane_cp8

0xb9fe,	// (0x0003a8d4) form_field_data_pane_ParamLimits

0xb9fe,	// (0x0003a8d4) form_field_data_pane

0xba15,	// (0x0003a8eb) form_field_data_wide_pane_ParamLimits

0xba15,	// (0x0003a8eb) form_field_data_wide_pane

0xba35,	// (0x0003a90b) form_field_popup_pane_ParamLimits

0xba35,	// (0x0003a90b) form_field_popup_pane

0xba4d,	// (0x0003a923) form_field_popup_wide_pane_ParamLimits

0xba4d,	// (0x0003a923) form_field_popup_wide_pane

0x0b02,	// (0x0002f9d8) form_field_slider_pane_ParamLimits

0x0b02,	// (0x0002f9d8) form_field_slider_pane

0x0b15,	// (0x0002f9eb) form_field_slider_wide_pane_ParamLimits

0x0b15,	// (0x0002f9eb) form_field_slider_wide_pane

0x35fd,	// (0x000324d3) data_form_pane

0xba6e,	// (0x0003a944) form_field_data_pane_t1

0x3609,	// (0x000324df) input_focus_pane

0x3617,	// (0x000324ed) data_form_wide_pane

0x0b56,	// (0x0002fa2c) form_field_data_wide_pane_t1

0x337a,	// (0x00032250) input_focus_pane_cp6

0xba88,	// (0x0003a95e) form_field_popup_pane_t1

0x3609,	// (0x000324df) input_focus_pane_cp7

0x3643,	// (0x00032519) list_form_pane

0x0b98,	// (0x0002fa6e) form_field_popup_wide_pane_t1

0x3609,	// (0x000324df) input_focus_pane_cp8

0x364f,	// (0x00032525) list_form_wide_pane

0xbaaa,	// (0x0003a980) form_field_slider_pane_t1_ParamLimits

0xbaaa,	// (0x0003a980) form_field_slider_pane_t1

0xbac2,	// (0x0003a998) form_field_slider_pane_t2_ParamLimits

0xbac2,	// (0x0003a998) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0003e574) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0003e574) form_field_slider_pane_t

0x3018,	// (0x00031eee) input_focus_pane_cp9_ParamLimits

0x3018,	// (0x00031eee) input_focus_pane_cp9

0xbad7,	// (0x0003a9ad) slider_cont_pane_ParamLimits

0xbad7,	// (0x0003a9ad) slider_cont_pane

0x365e,	// (0x00032534) form_field_slider_wide_pane_t1_ParamLimits

0x365e,	// (0x00032534) form_field_slider_wide_pane_t1

0x0bf4,	// (0x0002faca) form_field_slider_wide_pane_t2_ParamLimits

0x0bf4,	// (0x0002faca) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0003e579) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0003e579) form_field_slider_wide_pane_t

0x3018,	// (0x00031eee) input_focus_pane_cp10_ParamLimits

0x3018,	// (0x00031eee) input_focus_pane_cp10

0xbaeb,	// (0x0003a9c1) slider_cont_pane_cp1_ParamLimits

0xbaeb,	// (0x0003a9c1) slider_cont_pane_cp1

0xbaff,	// (0x0003a9d5) slider_form_pane_cp

0x3670,	// (0x00032546) input_focus_pane_g1

0x3678,	// (0x0003254e) input_focus_pane_g2

0x3680,	// (0x00032556) input_focus_pane_g3

0x3688,	// (0x0003255e) input_focus_pane_g4

0x3690,	// (0x00032566) input_focus_pane_g5

0x3698,	// (0x0003256e) input_focus_pane_g6

0x36a0,	// (0x00032576) input_focus_pane_g7

0x36a8,	// (0x0003257e) input_focus_pane_g8

0x36b0,	// (0x00032586) input_focus_pane_g9

0x2cb3,	// (0x00031b89) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0003e57e) input_focus_pane_g

0x56cd,	// (0x000345a3) wait_border_pane_g3_copy1

0xbb07,	// (0x0003a9dd) data_form_pane_t1

0x2cb3,	// (0x00031b89) wait_anim_pane_g1_copy1

0xbf21,	// (0x0003adf7) data_form_wide_pane_t1

0xc98e,	// (0x0003b864) list_form_graphic_pane_cp_ParamLimits

0xc98e,	// (0x0003b864) list_form_graphic_pane_cp

0x6615,	// (0x000354eb) slider_form_pane_g1

0x661e,	// (0x000354f4) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0003e871) slider_form_pane_g

0xc98e,	// (0x0003b864) list_form_graphic_pane_ParamLimits

0xc98e,	// (0x0003b864) list_form_graphic_pane

0x0c72,	// (0x0002fb48) list_form_graphic_pane_g1

0x0c7a,	// (0x0002fb50) list_form_graphic_pane_t1_ParamLimits

0x0c7a,	// (0x0002fb50) list_form_graphic_pane_t1

0x2d9d,	// (0x00031c73) list_highlight_pane_cp5_ParamLimits

0x2d9d,	// (0x00031c73) list_highlight_pane_cp5

0xbb21,	// (0x0003a9f7) find_pane_g1

0x36b8,	// (0x0003258e) input_find_pane

0xbb2a,	// (0x0003aa00) input_find_pane_g1_ParamLimits

0xbb2a,	// (0x0003aa00) input_find_pane_g1

0xbb36,	// (0x0003aa0c) input_find_pane_t1_ParamLimits

0xbb36,	// (0x0003aa0c) input_find_pane_t1

0xbb4b,	// (0x0003aa21) input_find_pane_t2_ParamLimits

0xbb4b,	// (0x0003aa21) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0003e593) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0003e593) input_find_pane_t

0x36c1,	// (0x00032597) input_focus_pane_cp5_ParamLimits

0x36c1,	// (0x00032597) input_focus_pane_cp5

0xc9ac,	// (0x0003b882) bg_popup_window_pane_cp2_ParamLimits

0xc9ac,	// (0x0003b882) bg_popup_window_pane_cp2

0xc9b9,	// (0x0003b88f) listscroll_menu_pane_ParamLimits

0xc9b9,	// (0x0003b88f) listscroll_menu_pane

0xc9c5,	// (0x0003b89b) popup_submenu_window_ParamLimits

0xc9c5,	// (0x0003b89b) popup_submenu_window

0x371e,	// (0x000325f4) find_popup_pane_g1

0x3726,	// (0x000325fc) input_popup_find_pane_cp

0x36c1,	// (0x00032597) input_focus_pane_cp4_ParamLimits

0x36c1,	// (0x00032597) input_focus_pane_cp4

0x373c,	// (0x00032612) input_popup_find_pane_t1_ParamLimits

0x373c,	// (0x00032612) input_popup_find_pane_t1

0x2cbd,	// (0x00031b93) bg_popup_sub_pane_cp

0x376a,	// (0x00032640) listscroll_popup_sub_pane

0x3772,	// (0x00032648) list_submenu_pane_ParamLimits

0x3772,	// (0x00032648) list_submenu_pane

0x3783,	// (0x00032659) scroll_pane_cp4

0x378b,	// (0x00032661) list_single_popup_submenu_pane_ParamLimits

0x378b,	// (0x00032661) list_single_popup_submenu_pane

0x379f,	// (0x00032675) list_single_popup_submenu_pane_g1

0x37a7,	// (0x0003267d) list_single_popup_submenu_pane_t1_ParamLimits

0x37a7,	// (0x0003267d) list_single_popup_submenu_pane_t1

0x3018,	// (0x00031eee) bg_active_tab_pane_cp1_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp1

0xc9fd,	// (0x0003b8d3) tabs_2_active_pane_g1

0xca05,	// (0x0003b8db) tabs_2_active_pane_t1

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp1_ParamLimits

0x3018,	// (0x00031eee) bg_passive_tab_pane_cp1

0xc9fd,	// (0x0003b8d3) tabs_2_passive_pane_g1

0xca05,	// (0x0003b8db) tabs_2_passive_pane_t1

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp4

0xca17,	// (0x0003b8ed) tabs_2_long_active_pane_t1

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp4

0x12f4,	// (0x000301ca) list_single_midp_graphic_pane_g4_ParamLimits

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp5

0xca2a,	// (0x0003b900) tabs_3_long_active_pane_t1

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp5

0x12f4,	// (0x000301ca) list_single_midp_graphic_pane_g4

0x2d9d,	// (0x00031c73) bg_popup_window_pane_cp13_ParamLimits

0x2d9d,	// (0x00031c73) bg_popup_window_pane_cp13

0x381e,	// (0x000326f4) listscroll_popup_fast_pane_ParamLimits

0x381e,	// (0x000326f4) listscroll_popup_fast_pane

0x382d,	// (0x00032703) grid_popup_fast_pane_ParamLimits

0x382d,	// (0x00032703) grid_popup_fast_pane

0x383f,	// (0x00032715) scroll_pane_cp9_ParamLimits

0x383f,	// (0x00032715) scroll_pane_cp9

0x7edc,	// (0x00036db2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7edc,	// (0x00036db2) list_single_graphic_hl_pane_t1_cp2

0x3863,	// (0x00032739) input_focus_pane_cp20_ParamLimits

0x3863,	// (0x00032739) input_focus_pane_cp20

0x3871,	// (0x00032747) query_popup_data_pane_t1_ParamLimits

0x3871,	// (0x00032747) query_popup_data_pane_t1

0x3884,	// (0x0003275a) query_popup_data_pane_t2_ParamLimits

0x3884,	// (0x0003275a) query_popup_data_pane_t2

0x38ca,	// (0x000327a0) query_popup_data_pane_t3_ParamLimits

0x38ca,	// (0x000327a0) query_popup_data_pane_t3

0x390b,	// (0x000327e1) query_popup_data_pane_t4_ParamLimits

0x390b,	// (0x000327e1) query_popup_data_pane_t4

0x3947,	// (0x0003281d) query_popup_data_pane_t5_ParamLimits

0x3947,	// (0x0003281d) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0003e598) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0003e598) query_popup_data_pane_t

0x3670,	// (0x00032546) bg_set_opt_pane_g1

0x3678,	// (0x0003254e) bg_set_opt_pane_g2

0x3680,	// (0x00032556) bg_set_opt_pane_g3

0x3688,	// (0x0003255e) bg_set_opt_pane_g4

0x3690,	// (0x00032566) bg_set_opt_pane_g5

0x3698,	// (0x0003256e) bg_set_opt_pane_g6

0x36a0,	// (0x00032576) bg_set_opt_pane_g7

0x36a8,	// (0x0003257e) bg_set_opt_pane_g8

0x36b0,	// (0x00032586) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0003e5a3) bg_set_opt_pane_g

0x0f58,	// (0x0002fe2e) control_top_pane_stacon_ParamLimits

0x0f58,	// (0x0002fe2e) control_top_pane_stacon

0x0fab,	// (0x0002fe81) signal_pane_stacon_ParamLimits

0x0fab,	// (0x0002fe81) signal_pane_stacon

0x3f07,	// (0x00032ddd) stacon_top_pane_g1_ParamLimits

0x3f07,	// (0x00032ddd) stacon_top_pane_g1

0x0fd0,	// (0x0002fea6) title_pane_stacon_ParamLimits

0x0fd0,	// (0x0002fea6) title_pane_stacon

0x0ffa,	// (0x0002fed0) uni_indicator_pane_stacon_ParamLimits

0x0ffa,	// (0x0002fed0) uni_indicator_pane_stacon

0x100f,	// (0x0002fee5) battery_pane_stacon_ParamLimits

0x100f,	// (0x0002fee5) battery_pane_stacon

0x1053,	// (0x0002ff29) control_bottom_pane_stacon_ParamLimits

0x1053,	// (0x0002ff29) control_bottom_pane_stacon

0x1076,	// (0x0002ff4c) navi_pane_stacon_ParamLimits

0x1076,	// (0x0002ff4c) navi_pane_stacon

0x3f29,	// (0x00032dff) stacon_bottom_pane_g1_ParamLimits

0x3f29,	// (0x00032dff) stacon_bottom_pane_g1

0x0cb9,	// (0x0002fb8f) aid_levels_signal_lsc_ParamLimits

0x0cb9,	// (0x0002fb8f) aid_levels_signal_lsc

0x0cd0,	// (0x0002fba6) signal_pane_stacon_g1_ParamLimits

0x0cd0,	// (0x0002fba6) signal_pane_stacon_g1

0x0ce4,	// (0x0002fbba) signal_pane_stacon_g2_ParamLimits

0x0ce4,	// (0x0002fbba) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0003e5b6) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0003e5b6) signal_pane_stacon_g

0x0d19,	// (0x0002fbef) title_pane_stacon_t1_ParamLimits

0x0d19,	// (0x0002fbef) title_pane_stacon_t1

0x398b,	// (0x00032861) uni_indicator_pane_stacon_g1

0x3995,	// (0x0003286b) uni_indicator_pane_stacon_g2

0x399f,	// (0x00032875) uni_indicator_pane_stacon_g3

0x39a9,	// (0x0003287f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0003e5c2) uni_indicator_pane_stacon_g

0x0d3e,	// (0x0002fc14) control_top_pane_stacon_g1

0x0d46,	// (0x0002fc1c) control_top_pane_stacon_t1_ParamLimits

0x0d46,	// (0x0002fc1c) control_top_pane_stacon_t1

0x0d7d,	// (0x0002fc53) aid_levels_battery_lsc_ParamLimits

0x0d7d,	// (0x0002fc53) aid_levels_battery_lsc

0x0d95,	// (0x0002fc6b) battery_pane_stacon_g1_ParamLimits

0x0d95,	// (0x0002fc6b) battery_pane_stacon_g1

0x0da8,	// (0x0002fc7e) battery_pane_stacon_g2_ParamLimits

0x0da8,	// (0x0002fc7e) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0003e5cb) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0003e5cb) battery_pane_stacon_g

0x0de6,	// (0x0002fcbc) navi_icon_pane_stacon

0x0dfa,	// (0x0002fcd0) navi_navi_pane_stacon

0x0de6,	// (0x0002fcbc) navi_text_pane_stacon

0x0d3e,	// (0x0002fc14) control_bottom_pane_stacon_g1

0x0e0e,	// (0x0002fce4) control_bottom_pane_stacon_t1_ParamLimits

0x0e0e,	// (0x0002fce4) control_bottom_pane_stacon_t1

0xca3c,	// (0x0003b912) grid_app_pane_ParamLimits

0xca3c,	// (0x0003b912) grid_app_pane

0xca74,	// (0x0003b94a) scroll_pane_cp15_ParamLimits

0xca74,	// (0x0003b94a) scroll_pane_cp15

0xca8d,	// (0x0003b963) cell_app_pane_ParamLimits

0xca8d,	// (0x0003b963) cell_app_pane

0xcad2,	// (0x0003b9a8) cell_app_pane_g1_ParamLimits

0xcad2,	// (0x0003b9a8) cell_app_pane_g1

0x3a4e,	// (0x00032924) cell_app_pane_g2_ParamLimits

0x3a4e,	// (0x00032924) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0003e5d0) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0003e5d0) cell_app_pane_g

0x3a5a,	// (0x00032930) cell_app_pane_t1_ParamLimits

0x3a5a,	// (0x00032930) cell_app_pane_t1

0x3a71,	// (0x00032947) grid_highlight_pane_ParamLimits

0x3a71,	// (0x00032947) grid_highlight_pane

0x3670,	// (0x00032546) cell_highlight_pane_g1

0x3678,	// (0x0003254e) cell_highlight_pane_g2

0x3680,	// (0x00032556) cell_highlight_pane_g3

0x3688,	// (0x0003255e) cell_highlight_pane_g4

0x3690,	// (0x00032566) cell_highlight_pane_g5

0x3698,	// (0x0003256e) cell_highlight_pane_g6

0x36a0,	// (0x00032576) cell_highlight_pane_g7

0x36a8,	// (0x0003257e) cell_highlight_pane_g8

0x36b0,	// (0x00032586) cell_highlight_pane_g9

0x2cb3,	// (0x00031b89) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0003e57e) cell_highlight_pane_g

0x3a82,	// (0x00032958) bg_scroll_pane

0x0e58,	// (0x0002fd2e) scroll_handle_pane

0x3ac9,	// (0x0003299f) scroll_bg_pane_g1

0x3ade,	// (0x000329b4) scroll_bg_pane_g2

0x3af6,	// (0x000329cc) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0003e5d5) scroll_bg_pane_g

0x3b0b,	// (0x000329e1) scroll_handle_focus_pane_ParamLimits

0x3b0b,	// (0x000329e1) scroll_handle_focus_pane

0x3ac9,	// (0x0003299f) scroll_handle_pane_g1

0x3b18,	// (0x000329ee) scroll_handle_pane_g2

0x3af6,	// (0x000329cc) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0003e5dc) scroll_handle_pane_g

0x36c1,	// (0x00032597) bg_popup_sub_pane_cp21_ParamLimits

0x36c1,	// (0x00032597) bg_popup_sub_pane_cp21

0x3b2c,	// (0x00032a02) popup_fep_japan_predictive_window_t1_ParamLimits

0x3b2c,	// (0x00032a02) popup_fep_japan_predictive_window_t1

0x3b46,	// (0x00032a1c) popup_fep_japan_predictive_window_t2_ParamLimits

0x3b46,	// (0x00032a1c) popup_fep_japan_predictive_window_t2

0x3b79,	// (0x00032a4f) popup_fep_japan_predictive_window_t3_ParamLimits

0x3b79,	// (0x00032a4f) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0003e5e3) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0003e5e3) popup_fep_japan_predictive_window_t

0x2cbd,	// (0x00031b93) bg_popup_sub_pane_cp23

0x3bb0,	// (0x00032a86) listscroll_japin_cand_pane

0x3bb8,	// (0x00032a8e) popup_fep_japan_candidate_window_t1

0x3bc6,	// (0x00032a9c) candidate_pane_ParamLimits

0x3bc6,	// (0x00032a9c) candidate_pane

0x3bd8,	// (0x00032aae) scroll_pane_cp30

0x3be0,	// (0x00032ab6) list_single_popup_jap_candidate_pane_ParamLimits

0x3be0,	// (0x00032ab6) list_single_popup_jap_candidate_pane

0x2cbd,	// (0x00031b93) list_highlight_pane_cp30

0x3bf5,	// (0x00032acb) list_single_popup_jap_candidate_pane_t1

0x3c04,	// (0x00032ada) level_1_signal

0x3c11,	// (0x00032ae7) level_2_signal

0x3c1e,	// (0x00032af4) level_3_signal

0x3c2b,	// (0x00032b01) level_4_signal

0x3c38,	// (0x00032b0e) level_5_signal

0x3c45,	// (0x00032b1b) level_6_signal

0x3c52,	// (0x00032b28) level_7_signal

0x3c04,	// (0x00032ada) level_1_battery

0x3c11,	// (0x00032ae7) level_2_battery

0x3c1e,	// (0x00032af4) level_3_battery

0x3c2b,	// (0x00032b01) level_4_battery

0x3c38,	// (0x00032b0e) level_5_battery

0x3c45,	// (0x00032b1b) level_6_battery

0x3c52,	// (0x00032b28) level_7_battery

0x3c99,	// (0x00032b6f) list_menu_pane_ParamLimits

0x3c99,	// (0x00032b6f) list_menu_pane

0x3caa,	// (0x00032b80) scroll_pane_cp25_ParamLimits

0x3caa,	// (0x00032b80) scroll_pane_cp25

0x3cc3,	// (0x00032b99) list_double2_graphic_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double2_graphic_pane_cp2

0x3cc3,	// (0x00032b99) list_double2_large_graphic_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double2_large_graphic_pane_cp2

0x3cc3,	// (0x00032b99) list_double2_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double2_pane_cp2

0x3cc3,	// (0x00032b99) list_double_graphic_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double_graphic_pane_cp2

0x3cc3,	// (0x00032b99) list_double_large_graphic_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double_large_graphic_pane_cp2

0x3cc3,	// (0x00032b99) list_double_number_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double_number_pane_cp2

0x3cc3,	// (0x00032b99) list_double_pane_cp2_ParamLimits

0x3cc3,	// (0x00032b99) list_double_pane_cp2

0xcb05,	// (0x0003b9db) list_single_2graphic_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_2graphic_pane_cp2

0xcb05,	// (0x0003b9db) list_single_graphic_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_graphic_heading_pane_cp2

0xcb05,	// (0x0003b9db) list_single_graphic_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_graphic_pane_cp2

0xcb05,	// (0x0003b9db) list_single_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_heading_pane_cp2

0x3d00,	// (0x00032bd6) list_single_large_graphic_pane_cp2_ParamLimits

0x3d00,	// (0x00032bd6) list_single_large_graphic_pane_cp2

0xcb05,	// (0x0003b9db) list_single_number_heading_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_number_heading_pane_cp2

0xcb05,	// (0x0003b9db) list_single_number_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_number_pane_cp2

0xcb05,	// (0x0003b9db) list_single_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_pane_cp2

0x3d56,	// (0x00032c2c) bg_popup_sub_pane_cp22

0x0f0a,	// (0x0002fde0) popup_side_volume_key_window_g1

0x0f34,	// (0x0002fe0a) popup_side_volume_key_window_t1

0x0f50,	// (0x0002fe26) volume_small_pane_cp1

0x3018,	// (0x00031eee) bg_popup_sub_pane_cp24_ParamLimits

0x3018,	// (0x00031eee) bg_popup_sub_pane_cp24

0x3d6c,	// (0x00032c42) fep_china_uni_candidate_pane_ParamLimits

0x3d6c,	// (0x00032c42) fep_china_uni_candidate_pane

0x3d80,	// (0x00032c56) fep_china_uni_entry_pane

0x3d90,	// (0x00032c66) popup_fep_china_uni_window_g1

0x3dac,	// (0x00032c82) fep_china_uni_entry_pane_g1

0x3db4,	// (0x00032c8a) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003e610) fep_china_uni_entry_pane_g

0x3dbc,	// (0x00032c92) fep_entry_item_pane

0x3dc6,	// (0x00032c9c) fep_candidate_item_pane

0x3dce,	// (0x00032ca4) fep_china_uni_candidate_pane_g1

0x3dd6,	// (0x00032cac) fep_china_uni_candidate_pane_g2

0x3dde,	// (0x00032cb4) fep_china_uni_candidate_pane_g3

0x3de6,	// (0x00032cbc) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0003e615) fep_china_uni_candidate_pane_g

0x2cb3,	// (0x00031b89) fep_entry_item_pane_g1

0x3dee,	// (0x00032cc4) fep_entry_item_pane_t1_ParamLimits

0x3dee,	// (0x00032cc4) fep_entry_item_pane_t1

0x3e04,	// (0x00032cda) fep_candidate_item_pane_t1_ParamLimits

0x3e04,	// (0x00032cda) fep_candidate_item_pane_t1

0x3e19,	// (0x00032cef) fep_candidate_item_pane_t2_ParamLimits

0x3e19,	// (0x00032cef) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003e61e) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003e61e) fep_candidate_item_pane_t

0x2d9d,	// (0x00031c73) list_highlight_pane_cp31_ParamLimits

0x2d9d,	// (0x00031c73) list_highlight_pane_cp31

0x3e2b,	// (0x00032d01) level_1_signal_lsc

0x3e34,	// (0x00032d0a) level_2_signal_lsc

0x3e3d,	// (0x00032d13) level_3_signal_lsc

0x3e46,	// (0x00032d1c) level_4_signal_lsc

0x3e4f,	// (0x00032d25) level_5_signal_lsc

0x3e58,	// (0x00032d2e) level_6_signal_lsc

0x3e61,	// (0x00032d37) level_7_signal_lsc

0x3e61,	// (0x00032d37) level_1_battery_lsc

0x3e6a,	// (0x00032d40) level_2_battery_lsc

0x3e73,	// (0x00032d49) level_3_battery_lsc

0x3e7c,	// (0x00032d52) level_4_battery_lsc

0x3e85,	// (0x00032d5b) level_5_battery_lsc

0x3e8e,	// (0x00032d64) level_6_battery_lsc

0x3e2b,	// (0x00032d01) level_7_battery_lsc

0x3e97,	// (0x00032d6d) scroll_handle_focus_pane_g1

0x3ea0,	// (0x00032d76) scroll_handle_focus_pane_g2

0x3ea9,	// (0x00032d7f) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0003e623) scroll_handle_focus_pane_g

0xbb69,	// (0x0003aa3f) list_single_2graphic_pane_g1_ParamLimits

0xbb69,	// (0x0003aa3f) list_single_2graphic_pane_g1

0xb650,	// (0x0003a526) list_single_2graphic_pane_g2_ParamLimits

0xb650,	// (0x0003a526) list_single_2graphic_pane_g2

0x24fa,	// (0x000313d0) list_single_2graphic_pane_g3_ParamLimits

0x24fa,	// (0x000313d0) list_single_2graphic_pane_g3

0xbb75,	// (0x0003aa4b) list_single_2graphic_pane_g4_ParamLimits

0xbb75,	// (0x0003aa4b) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0003e62a) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0003e62a) list_single_2graphic_pane_g

0xbb86,	// (0x0003aa5c) list_single_2graphic_pane_t1_ParamLimits

0xbb86,	// (0x0003aa5c) list_single_2graphic_pane_t1

0xbbb4,	// (0x0003aa8a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbb4,	// (0x0003aa8a) list_double2_graphic_large_graphic_pane_g1

0xb6af,	// (0x0003a585) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb6af,	// (0x0003a585) list_double2_graphic_large_graphic_pane_g2

0x08e5,	// (0x0002f7bb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x08e5,	// (0x0002f7bb) list_double2_graphic_large_graphic_pane_g3

0xbbc6,	// (0x0003aa9c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbc6,	// (0x0003aa9c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0003e633) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0003e633) list_double2_graphic_large_graphic_pane_g

0xbbd2,	// (0x0003aaa8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbd2,	// (0x0003aaa8) list_double2_graphic_large_graphic_pane_t1

0xbbe8,	// (0x0003aabe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbe8,	// (0x0003aabe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003e63c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003e63c) list_double2_graphic_large_graphic_pane_t

0x3ff1,	// (0x00032ec7) popup_fast_swap_window_ParamLimits

0x3ff1,	// (0x00032ec7) popup_fast_swap_window

0x400d,	// (0x00032ee3) popup_side_volume_key_window

0x4029,	// (0x00032eff) stacon_top_pane

0x4033,	// (0x00032f09) status_pane_ParamLimits

0x4033,	// (0x00032f09) status_pane

0x4029,	// (0x00032eff) status_small_pane

0x2cbd,	// (0x00031b93) control_pane

0x2cbd,	// (0x00031b93) stacon_bottom_pane

0x35ec,	// (0x000324c2) scroll_pane_cp121

0x35e3,	// (0x000324b9) set_content_pane

0x3ecd,	// (0x00032da3) bg_active_tab_pane_g1_cp1

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp1

0x3ed6,	// (0x00032dac) bg_active_tab_pane_g3_cp1

0x3ecd,	// (0x00032da3) bg_passive_tab_pane_g1_cp1

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp1

0x3ed6,	// (0x00032dac) bg_passive_tab_pane_g3_cp1

0xcb65,	// (0x0003ba3b) bg_active_tab_pane_g1_cp2

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp2

0xcb6e,	// (0x0003ba44) bg_active_tab_pane_g3_cp2

0xcb65,	// (0x0003ba3b) bg_passive_tab_pane_g1_cp2

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp2

0xcb6e,	// (0x0003ba44) bg_passive_tab_pane_g3_cp2

0xcb77,	// (0x0003ba4d) bg_active_tab_pane_g1_cp3

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp3

0xcb80,	// (0x0003ba56) bg_active_tab_pane_g3_cp3

0xcb77,	// (0x0003ba4d) bg_passive_tab_pane_g1_cp3

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp3

0xcb80,	// (0x0003ba56) bg_passive_tab_pane_g3_cp3

0xcb89,	// (0x0003ba5f) bg_active_tab_pane_g1_cp4

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp4

0xcb92,	// (0x0003ba68) bg_active_tab_pane_g3_cp4

0xcb89,	// (0x0003ba5f) bg_passive_tab_pane_g1_cp4

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp4

0xcb92,	// (0x0003ba68) bg_passive_tab_pane_g3_cp4

0x3f45,	// (0x00032e1b) bg_active_tab_pane_g1_cp5

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp5

0x3f4e,	// (0x00032e24) bg_active_tab_pane_g3_cp5

0x3f45,	// (0x00032e1b) bg_passive_tab_pane_g1_cp5

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp5

0x3f4e,	// (0x00032e24) bg_passive_tab_pane_g3_cp5

0xc98e,	// (0x0003b864) list_set_graphic_pane_ParamLimits

0xc98e,	// (0x0003b864) list_set_graphic_pane

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp4

0xcb9b,	// (0x0003ba71) list_set_graphic_pane_g1_ParamLimits

0xcb9b,	// (0x0003ba71) list_set_graphic_pane_g1

0xcba7,	// (0x0003ba7d) list_set_graphic_pane_g2_ParamLimits

0xcba7,	// (0x0003ba7d) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003e641) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003e641) list_set_graphic_pane_g

0x0009,

0xfae5,	// (0x0003e9bb) volume_small_pane_cp_g

0x3fa4,	// (0x00032e7a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3fa4,	// (0x00032e7a) list_double2_large_graphic_pane_g1_cp2

0x3fb0,	// (0x00032e86) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3fb0,	// (0x00032e86) list_double2_large_graphic_pane_g2_cp2

0x3fc1,	// (0x00032e97) list_double2_large_graphic_pane_g3_cp2

0x3fc9,	// (0x00032e9f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3fc9,	// (0x00032e9f) list_double2_large_graphic_pane_t1_cp2

0x3fdf,	// (0x00032eb5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3fdf,	// (0x00032eb5) list_double2_large_graphic_pane_t2_cp2

0x61b2,	// (0x00035088) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x61b2,	// (0x00035088) list_double_large_graphic_pane_g1_cp2

0x61c3,	// (0x00035099) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x61c3,	// (0x00035099) list_double_large_graphic_pane_g2_cp2

0x414f,	// (0x00033025) list_double_large_graphic_pane_g3_cp2

0x61d4,	// (0x000350aa) list_double_large_graphic_pane_g4_cp

0x61dc,	// (0x000350b2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x61dc,	// (0x000350b2) list_double_large_graphic_pane_t1_cp2

0x61f3,	// (0x000350c9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x61f3,	// (0x000350c9) list_double_large_graphic_pane_t2_cp2

0x4041,	// (0x00032f17) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4041,	// (0x00032f17) list_double2_graphic_pane_g1_cp2

0x404f,	// (0x00032f25) list_double2_graphic_pane_g2_cp2_ParamLimits

0x404f,	// (0x00032f25) list_double2_graphic_pane_g2_cp2

0x4060,	// (0x00032f36) list_double2_graphic_pane_g3_cp2

0x406a,	// (0x00032f40) list_double2_graphic_pane_t1_cp2_ParamLimits

0x406a,	// (0x00032f40) list_double2_graphic_pane_t1_cp2

0x4080,	// (0x00032f56) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4080,	// (0x00032f56) list_double2_graphic_pane_t2_cp2

0x4092,	// (0x00032f68) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4092,	// (0x00032f68) list_single_number_heading_pane_g1_cp2

0x409e,	// (0x00032f74) list_single_number_heading_pane_g2_cp2

0x40a6,	// (0x00032f7c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x40a6,	// (0x00032f7c) list_single_number_heading_pane_t1_cp2

0x40bc,	// (0x00032f92) list_single_number_heading_pane_t2_cp2_ParamLimits

0x40bc,	// (0x00032f92) list_single_number_heading_pane_t2_cp2

0x40ce,	// (0x00032fa4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x40ce,	// (0x00032fa4) list_single_number_heading_pane_t3_cp2

0x4092,	// (0x00032f68) list_single_heading_pane_g1_cp2_ParamLimits

0x4092,	// (0x00032f68) list_single_heading_pane_g1_cp2

0x409e,	// (0x00032f74) list_single_heading_pane_g2_cp2

0x40a6,	// (0x00032f7c) list_single_heading_pane_t1_cp2_ParamLimits

0x40a6,	// (0x00032f7c) list_single_heading_pane_t1_cp2

0x5fba,	// (0x00034e90) list_single_heading_pane_t2_cp2_ParamLimits

0x5fba,	// (0x00034e90) list_single_heading_pane_t2_cp2

0x5efc,	// (0x00034dd2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5efc,	// (0x00034dd2) list_double_graphic_pane_g1_cp2

0x5f08,	// (0x00034dde) list_double_graphic_pane_g2_cp2_ParamLimits

0x5f08,	// (0x00034dde) list_double_graphic_pane_g2_cp2

0x5f17,	// (0x00034ded) list_double_graphic_pane_g3_cp2

0x5f1f,	// (0x00034df5) list_double_graphic_pane_t1_cp2_ParamLimits

0x5f1f,	// (0x00034df5) list_double_graphic_pane_t1_cp2

0x5f35,	// (0x00034e0b) list_double_graphic_pane_t2_cp2_ParamLimits

0x5f35,	// (0x00034e0b) list_double_graphic_pane_t2_cp2

0x4143,	// (0x00033019) list_double_number_pane_g1_cp2_ParamLimits

0x4143,	// (0x00033019) list_double_number_pane_g1_cp2

0x414f,	// (0x00033025) list_double_number_pane_g2_cp2

0x5ec0,	// (0x00034d96) list_double_number_pane_t1_cp2_ParamLimits

0x5ec0,	// (0x00034d96) list_double_number_pane_t1_cp2

0x5ed4,	// (0x00034daa) list_double_number_pane_t2_cp2_ParamLimits

0x5ed4,	// (0x00034daa) list_double_number_pane_t2_cp2

0x5eea,	// (0x00034dc0) list_double_number_pane_t3_cp2_ParamLimits

0x5eea,	// (0x00034dc0) list_double_number_pane_t3_cp2

0x5da9,	// (0x00034c7f) list_single_graphic_pane_g1_cp2_ParamLimits

0x5da9,	// (0x00034c7f) list_single_graphic_pane_g1_cp2

0x41a7,	// (0x0003307d) list_single_graphic_pane_g2_cp2_ParamLimits

0x41a7,	// (0x0003307d) list_single_graphic_pane_g2_cp2

0x41b3,	// (0x00033089) list_single_graphic_pane_g3_cp2

0x5d7f,	// (0x00034c55) list_single_graphic_pane_t1_cp2_ParamLimits

0x5d7f,	// (0x00034c55) list_single_graphic_pane_t1_cp2

0x41a7,	// (0x0003307d) list_single_number_pane_g1_cp2_ParamLimits

0x41a7,	// (0x0003307d) list_single_number_pane_g1_cp2

0x41b3,	// (0x00033089) list_single_number_pane_g2_cp2

0x5d7f,	// (0x00034c55) list_single_number_pane_t1_cp2_ParamLimits

0x5d7f,	// (0x00034c55) list_single_number_pane_t1_cp2

0x5d95,	// (0x00034c6b) list_single_number_pane_t2_cp2_ParamLimits

0x5d95,	// (0x00034c6b) list_single_number_pane_t2_cp2

0x3fb0,	// (0x00032e86) list_double2_pane_g1_cp2_ParamLimits

0x3fb0,	// (0x00032e86) list_double2_pane_g1_cp2

0x3fc1,	// (0x00032e97) list_double2_pane_g2_cp2

0x411b,	// (0x00032ff1) list_double2_pane_t1_cp2_ParamLimits

0x411b,	// (0x00032ff1) list_double2_pane_t1_cp2

0x4131,	// (0x00033007) list_double2_pane_t2_cp2_ParamLimits

0x4131,	// (0x00033007) list_double2_pane_t2_cp2

0x4143,	// (0x00033019) list_double_pane_g1_cp2_ParamLimits

0x4143,	// (0x00033019) list_double_pane_g1_cp2

0x414f,	// (0x00033025) list_double_pane_g2_cp2

0x4157,	// (0x0003302d) list_double_pane_t1_cp2_ParamLimits

0x4157,	// (0x0003302d) list_double_pane_t1_cp2

0x416d,	// (0x00033043) list_double_pane_t2_cp2_ParamLimits

0x416d,	// (0x00033043) list_double_pane_t2_cp2

0x4197,	// (0x0003306d) list_single_pane_cp2_g3

0x41a7,	// (0x0003307d) list_single_pane_g1_cp2_ParamLimits

0x41a7,	// (0x0003307d) list_single_pane_g1_cp2

0x41b3,	// (0x00033089) list_single_pane_g2_cp2

0x41bb,	// (0x00033091) list_single_pane_t1_cp2_ParamLimits

0x41bb,	// (0x00033091) list_single_pane_t1_cp2

0x41d3,	// (0x000330a9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x41d3,	// (0x000330a9) list_single_large_graphic_pane_g1_cp2

0x41df,	// (0x000330b5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x41df,	// (0x000330b5) list_single_large_graphic_pane_g2_cp2

0x41eb,	// (0x000330c1) list_single_large_graphic_pane_g3_cp2

0x41f3,	// (0x000330c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x41f3,	// (0x000330c9) list_single_large_graphic_pane_g4_cp1

0x420d,	// (0x000330e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x420d,	// (0x000330e3) list_single_large_graphic_pane_t1_cp2

0x5d4b,	// (0x00034c21) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5d4b,	// (0x00034c21) list_single_graphic_heading_pane_g1_cp2

0x5d18,	// (0x00034bee) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5d18,	// (0x00034bee) list_single_graphic_heading_pane_g4_cp2

0x41b3,	// (0x00033089) list_single_graphic_heading_pane_g5_cp2

0x5d57,	// (0x00034c2d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5d57,	// (0x00034c2d) list_single_graphic_heading_pane_t1_cp2

0x5d6d,	// (0x00034c43) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5d6d,	// (0x00034c43) list_single_graphic_heading_pane_t2_cp2

0x5d0c,	// (0x00034be2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5d0c,	// (0x00034be2) list_single_2graphic_pane_g1_cp2

0x5d18,	// (0x00034bee) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5d18,	// (0x00034bee) list_single_2graphic_pane_g2_cp2

0x41b3,	// (0x00033089) list_single_2graphic_pane_g3_cp2

0x5d29,	// (0x00034bff) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5d29,	// (0x00034bff) list_single_2graphic_pane_g4_cp2

0x5d35,	// (0x00034c0b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5d35,	// (0x00034c0b) list_single_2graphic_pane_t1_cp2

0x2cb3,	// (0x00031b89) list_highlight_pane_g10_cp1

0x58d8,	// (0x000347ae) list_highlight_pane_g1_cp1

0x58e0,	// (0x000347b6) list_highlight_pane_g2_cp1

0x58e8,	// (0x000347be) list_highlight_pane_g3_cp1

0x58f0,	// (0x000347c6) list_highlight_pane_g4_cp1

0x58f8,	// (0x000347ce) list_highlight_pane_g5_cp1

0x5900,	// (0x000347d6) list_highlight_pane_g6_cp1

0x5908,	// (0x000347de) list_highlight_pane_g7_cp1

0x5910,	// (0x000347e6) list_highlight_pane_g8_cp1

0x5918,	// (0x000347ee) list_highlight_pane_g9_cp1

0xd816,	// (0x0003c6ec) form_field_slider_pane_t3

0xd824,	// (0x0003c6fa) form_field_slider_pane_t4

0x5814,	// (0x000346ea) slider_form_pane_ParamLimits

0x5814,	// (0x000346ea) slider_form_pane

0x2cbd,	// (0x00031b93) control_abbreviations

0x2cbd,	// (0x00031b93) control_conventions

0x2cbd,	// (0x00031b93) control_definitions

0x2cbd,	// (0x00031b93) format_table_attribute

0x6004,	// (0x00034eda) bg_popup_preview_window_pane_g9

0x2cbd,	// (0x00031b93) format_table_data2

0x2cbd,	// (0x00031b93) format_table_data3

0x2cbd,	// (0x00031b93) format_table_data_example

0x0008,

0x2cbd,	// (0x00031b93) intro_purpose

0xf8fb,	// (0x0003e7d1) bg_popup_preview_window_pane_g

0x2cbd,	// (0x00031b93) texts_category

0x2cbd,	// (0x00031b93) texts_graphics

0x4223,	// (0x000330f9) text_digital

0x4232,	// (0x00033108) text_primary

0x4241,	// (0x00033117) text_primary_small

0x4250,	// (0x00033126) text_secondary

0x425f,	// (0x00033135) text_title

0x672c,	// (0x00035602) bg_passive_tab_pane_g1_cp3_srt

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp3_srt

0x6735,	// (0x0003560b) bg_passive_tab_pane_g3_cp3_srt

0x3018,	// (0x00031eee) bg_active_tab_pane_cp3_srt_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp3_srt

0x673e,	// (0x00035614) tabs_4_active_pane_srt_g1

0xdbd0,	// (0x0003caa6) tabs_4_active_pane_srt_t1_ParamLimits

0xdbd0,	// (0x0003caa6) tabs_4_active_pane_srt_t1

0x672c,	// (0x00035602) bg_active_tab_pane_g1_cp3_copy1

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp3_copy1

0x6735,	// (0x0003560b) bg_active_tab_pane_g3_cp3_copy1

0x2d9d,	// (0x00031c73) tabs_2_long_active_pane_srt_ParamLimits

0x2d9d,	// (0x00031c73) tabs_2_long_active_pane_srt

0x2d9d,	// (0x00031c73) tabs_2_long_passive_pane_srt_ParamLimits

0x2d9d,	// (0x00031c73) tabs_2_long_passive_pane_srt

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp4_srt

0x6448,	// (0x0003531e) bg_passive_tab_pane_g1_cp4_srt

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp4_srt

0x6451,	// (0x00035327) bg_passive_tab_pane_g3_cp4_srt

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp4_srt

0xd9de,	// (0x0003c8b4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9de,	// (0x0003c8b4) tabs_2_long_active_pane_srt_t1

0x6448,	// (0x0003531e) bg_active_tab_pane_g1_cp4_srt

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp4_srt

0x6451,	// (0x00035327) bg_active_tab_pane_g3_cp4_srt

0x3018,	// (0x00031eee) tabs_3_long_active_pane_srt_ParamLimits

0x3018,	// (0x00031eee) tabs_3_long_active_pane_srt

0x3018,	// (0x00031eee) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3018,	// (0x00031eee) tabs_3_long_passive_pane_cp_srt

0x3018,	// (0x00031eee) tabs_3_long_passive_pane_srt_ParamLimits

0x3018,	// (0x00031eee) tabs_3_long_passive_pane_srt

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp5_srt

0x3f45,	// (0x00032e1b) bg_passive_tab_pane_g1_cp5_srt

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp5_srt

0x3f4e,	// (0x00032e24) bg_passive_tab_pane_g3_cp5_srt

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp5_srt

0xd9c8,	// (0x0003c89e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9c8,	// (0x0003c89e) tabs_3_long_active_pane_srt_t1

0x3f45,	// (0x00032e1b) bg_active_tab_pane_g1_cp5_srt

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp5_srt

0x3f4e,	// (0x00032e24) bg_active_tab_pane_g3_cp5_srt

0x6428,	// (0x000352fe) navi_text_pane_srt_t1

0x6420,	// (0x000352f6) navi_icon_pane_srt_g1

0x4432,	// (0x00033308) midp_editing_number_pane_srt

0x426e,	// (0x00033144) midp_ticker_pane_srt

0x443a,	// (0x00033310) midp_ticker_pane_srt_g1

0x4442,	// (0x00033318) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003e660) midp_ticker_pane_srt_g

0x444a,	// (0x00033320) midp_ticker_pane_srt_t1

0x6411,	// (0x000352e7) midp_editing_number_pane_t1_copy1

0xcbcb,	// (0x0003baa1) listscroll_midp_pane

0xcbcb,	// (0x0003baa1) midp_form_pane

0x42e4,	// (0x000331ba) midp_info_popup_window_ParamLimits

0x42e4,	// (0x000331ba) midp_info_popup_window

0x36c1,	// (0x00032597) bg_popup_sub_pane_cp50_ParamLimits

0x36c1,	// (0x00032597) bg_popup_sub_pane_cp50

0x5510,	// (0x000343e6) listscroll_midp_info_pane_ParamLimits

0x5510,	// (0x000343e6) listscroll_midp_info_pane

0x54f8,	// (0x000343ce) listscroll_form_midp_pane_ParamLimits

0x54f8,	// (0x000343ce) listscroll_form_midp_pane

0x5504,	// (0x000343da) scroll_bar_cp050

0xd80a,	// (0x0003c6e0) list_midp_pane

0x7148,	// (0x0003601e) signal_pane_g2_cp

0x5412,	// (0x000342e8) listscroll_midp_info_pane_t1_ParamLimits

0x5412,	// (0x000342e8) listscroll_midp_info_pane_t1

0x542a,	// (0x00034300) listscroll_midp_info_pane_t2_ParamLimits

0x542a,	// (0x00034300) listscroll_midp_info_pane_t2

0x5468,	// (0x0003433e) listscroll_midp_info_pane_t3_ParamLimits

0x5468,	// (0x0003433e) listscroll_midp_info_pane_t3

0x54a2,	// (0x00034378) listscroll_midp_info_pane_t4_ParamLimits

0x54a2,	// (0x00034378) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0003e70c) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0003e70c) listscroll_midp_info_pane_t

0x3783,	// (0x00032659) scroll_pane_cp21

0x53b0,	// (0x00034286) form_midp_field_choice_group_pane

0x53b9,	// (0x0003428f) form_midp_field_text_pane

0x53f8,	// (0x000342ce) form_midp_field_time_pane

0x5400,	// (0x000342d6) form_midp_gauge_slider_pane

0x5409,	// (0x000342df) form_midp_gauge_wait_pane

0x2cbd,	// (0x00031b93) form_midp_image_pane

0xbdaa,	// (0x0003ac80) list_single_midp_pane_ParamLimits

0xbdaa,	// (0x0003ac80) list_single_midp_pane

0xd7e8,	// (0x0003c6be) form_midp_field_text_pane_t1

0x515a,	// (0x00034030) input_focus_pane_cp050

0x539f,	// (0x00034275) list_midp_form_text_pane

0x5337,	// (0x0003420d) form_midp_field_choice_group_pane_t1

0x5345,	// (0x0003421b) input_focus_pane_cp051

0x5359,	// (0x0003422f) list_midp_choice_pane

0x2cbd,	// (0x00031b93) status_idle_pane

0x531b,	// (0x000341f1) form_midp_field_time_pane_t1

0x2cb3,	// (0x00031b89) wait_anim_pane_g2_copy1

0x5329,	// (0x000341ff) form_midp_field_time_pane_t2

0x0001,

0x4392,	// (0x00033268) aid_navinavi_width_2_pane

0xf831,	// (0x0003e707) form_midp_field_time_pane_t

0x2cbd,	// (0x00031b93) input_focus_pane_cp052

0x2cbd,	// (0x00031b93) bg_input_focus_pane_cp040

0x52db,	// (0x000341b1) form_midp_gauge_slider_pane_t1

0x52e9,	// (0x000341bf) form_midp_gauge_slider_pane_t2

0xd7cc,	// (0x0003c6a2) form_midp_gauge_slider_pane_t3

0xd7da,	// (0x0003c6b0) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0003e6fe) form_midp_gauge_slider_pane_t

0x5313,	// (0x000341e9) form_midp_slider_pane

0x2d9d,	// (0x00031c73) bg_input_focus_pane_cp041_ParamLimits

0x2d9d,	// (0x00031c73) bg_input_focus_pane_cp041

0x52a8,	// (0x0003417e) form_midp_gauge_wait_pane_t1_ParamLimits

0x52a8,	// (0x0003417e) form_midp_gauge_wait_pane_t1

0x52ba,	// (0x00034190) form_midp_gauge_wait_pane_t2_ParamLimits

0x52ba,	// (0x00034190) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0003e6f9) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0003e6f9) form_midp_gauge_wait_pane_t

0x52cc,	// (0x000341a2) form_midp_wait_pane_ParamLimits

0x52cc,	// (0x000341a2) form_midp_wait_pane

0x5272,	// (0x00034148) form_midp_image_pane_g1

0x527b,	// (0x00034151) form_midp_image_pane_t1

0x528a,	// (0x00034160) form_midp_image_pane_t2

0x5299,	// (0x0003416f) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0003e6f2) form_midp_image_pane_t

0x5269,	// (0x0003413f) list_single_midp_pane_g1

0x2530,	// (0x00031406) list_single_midp_pane_t1

0xd7b7,	// (0x0003c68d) list_midp_form_item_pane_ParamLimits

0xd7b7,	// (0x0003c68d) list_midp_form_item_pane

0x433a,	// (0x00033210) list_midp_form_item_pane_t1

0x4349,	// (0x0003321f) midp_ticker_pane_g1

0x4355,	// (0x0003322b) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0003e646) midp_ticker_pane_g

0xcc73,	// (0x0003bb49) midp_ticker_pane_t1

0xdb49,	// (0x0003ca1f) midp_editing_number_pane_t1

0x6640,	// (0x00035516) midp_editing_number_pane

0x664f,	// (0x00035525) midp_ticker_pane

0x6401,	// (0x000352d7) ai_message_heading_pane

0x2cbd,	// (0x00031b93) bg_popup_window_pane_cp14

0x6409,	// (0x000352df) listscroll_ai_message_pane

0x638b,	// (0x00035261) ai_message_heading_pane_g1_ParamLimits

0x638b,	// (0x00035261) ai_message_heading_pane_g1

0x6397,	// (0x0003526d) ai_message_heading_pane_g2_ParamLimits

0x6397,	// (0x0003526d) ai_message_heading_pane_g2

0x63a3,	// (0x00035279) ai_message_heading_pane_g3_ParamLimits

0x63a3,	// (0x00035279) ai_message_heading_pane_g3

0x63af,	// (0x00035285) ai_message_heading_pane_g4_ParamLimits

0x63af,	// (0x00035285) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0003e833) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0003e833) ai_message_heading_pane_g

0x63bb,	// (0x00035291) ai_message_heading_pane_t1_ParamLimits

0x63bb,	// (0x00035291) ai_message_heading_pane_t1

0x63d5,	// (0x000352ab) ai_message_heading_pane_t2_ParamLimits

0x63d5,	// (0x000352ab) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0003e83c) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0003e83c) ai_message_heading_pane_t

0x63e7,	// (0x000352bd) bg_popup_heading_pane_cp1_ParamLimits

0x63e7,	// (0x000352bd) bg_popup_heading_pane_cp1

0x6379,	// (0x0003524f) list_ai_message_pane_ParamLimits

0x6379,	// (0x0003524f) list_ai_message_pane

0x3783,	// (0x00032659) scroll_pane_cp10

0x6315,	// (0x000351eb) list_ai_message_pane_g1

0x631d,	// (0x000351f3) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0003e810) list_ai_message_pane_g

0x6325,	// (0x000351fb) list_ai_message_pane_t1_ParamLimits

0x6325,	// (0x000351fb) list_ai_message_pane_t1

0x633a,	// (0x00035210) list_ai_message_pane_t2_ParamLimits

0x633a,	// (0x00035210) list_ai_message_pane_t2

0x634f,	// (0x00035225) list_ai_message_pane_t3_ParamLimits

0x634f,	// (0x00035225) list_ai_message_pane_t3

0x6364,	// (0x0003523a) list_ai_message_pane_t4_ParamLimits

0x6364,	// (0x0003523a) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0003e815) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0003e815) list_ai_message_pane_t

0xd9a7,	// (0x0003c87d) cell_ai_soft_ind_pane_ParamLimits

0xd9a7,	// (0x0003c87d) cell_ai_soft_ind_pane

0x4373,	// (0x00033249) cell_ai_soft_ind_pane_g1_ParamLimits

0x4373,	// (0x00033249) cell_ai_soft_ind_pane_g1

0x2cbd,	// (0x00031b93) grid_highlight_cp1

0x4380,	// (0x00033256) text_secondary_cp56_ParamLimits

0x4380,	// (0x00033256) text_secondary_cp56

0x62d5,	// (0x000351ab) example_general_pane_ParamLimits

0x62d5,	// (0x000351ab) example_general_pane

0x62e1,	// (0x000351b7) example_parent_pane_g1_ParamLimits

0x62e1,	// (0x000351b7) example_parent_pane_g1

0x62ed,	// (0x000351c3) example_parent_pane_t1_ParamLimits

0x62ed,	// (0x000351c3) example_parent_pane_t1

0xd08e,	// (0x0003bf64) popup_preview_text_window_ParamLimits

0xd08e,	// (0x0003bf64) popup_preview_text_window

0x419f,	// (0x00033075) list_single_pane_cp2_g4

0x30ce,	// (0x00031fa4) bg_popup_preview_window_pane_ParamLimits

0x30ce,	// (0x00031fa4) bg_popup_preview_window_pane

0x600c,	// (0x00034ee2) popup_preview_text_window_t1_ParamLimits

0x600c,	// (0x00034ee2) popup_preview_text_window_t1

0x602a,	// (0x00034f00) popup_preview_text_window_t2_ParamLimits

0x602a,	// (0x00034f00) popup_preview_text_window_t2

0x6073,	// (0x00034f49) popup_preview_text_window_t3_ParamLimits

0x6073,	// (0x00034f49) popup_preview_text_window_t3

0x60b8,	// (0x00034f8e) popup_preview_text_window_t4_ParamLimits

0x60b8,	// (0x00034f8e) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0003e7e4) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0003e7e4) popup_preview_text_window_t

0x6136,	// (0x0003500c) scroll_pane_cp11

0x506a,	// (0x00033f40) bg_popup_preview_window_pane_g1

0x5fcc,	// (0x00034ea2) bg_popup_preview_window_pane_g2

0x5fd4,	// (0x00034eaa) bg_popup_preview_window_pane_g3

0x5fdc,	// (0x00034eb2) bg_popup_preview_window_pane_g4

0x5fe4,	// (0x00034eba) bg_popup_preview_window_pane_g5

0x5fec,	// (0x00034ec2) bg_popup_preview_window_pane_g6

0x5ff4,	// (0x00034eca) bg_popup_preview_window_pane_g7

0x5ffc,	// (0x00034ed2) bg_popup_preview_window_pane_g8

0x0119,	// (0x0002efef) aid_popup_width_pane

0xd00a,	// (0x0003bee0) popup_midp_note_alarm_window_ParamLimits

0xd00a,	// (0x0003bee0) popup_midp_note_alarm_window

0x35fd,	// (0x000324d3) data_form_pane_ParamLimits

0xba64,	// (0x0003a93a) form_field_data_pane_g1

0xba6e,	// (0x0003a944) form_field_data_pane_t1_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_ParamLimits

0x3617,	// (0x000324ed) data_form_wide_pane_ParamLimits

0x0b4a,	// (0x0002fa20) form_field_data_wide_pane_g1

0x0b56,	// (0x0002fa2c) form_field_data_wide_pane_t1_ParamLimits

0x337a,	// (0x00032250) input_focus_pane_cp6_ParamLimits

0xc9ef,	// (0x0003b8c5) input_popup_find_pane_g1_ParamLimits

0xc9ef,	// (0x0003b8c5) input_popup_find_pane_g1

0x0db9,	// (0x0002fc8f) aid_navi_side_left_pane

0x0dce,	// (0x0002fca4) aid_navi_side_right_pane

0x59d3,	// (0x000348a9) bg_popup_window_pane_cp30_ParamLimits

0x59d3,	// (0x000348a9) bg_popup_window_pane_cp30

0x5a4d,	// (0x00034923) popup_midp_note_alarm_window_g1_ParamLimits

0x5a4d,	// (0x00034923) popup_midp_note_alarm_window_g1

0x5a7d,	// (0x00034953) popup_midp_note_alarm_window_t1_ParamLimits

0x5a7d,	// (0x00034953) popup_midp_note_alarm_window_t1

0x5b1e,	// (0x000349f4) popup_midp_note_alarm_window_t2_ParamLimits

0x5b1e,	// (0x000349f4) popup_midp_note_alarm_window_t2

0x5bcc,	// (0x00034aa2) popup_midp_note_alarm_window_t3_ParamLimits

0x5bcc,	// (0x00034aa2) popup_midp_note_alarm_window_t3

0x5bfe,	// (0x00034ad4) popup_midp_note_alarm_window_t4_ParamLimits

0x5bfe,	// (0x00034ad4) popup_midp_note_alarm_window_t4

0x5c24,	// (0x00034afa) popup_midp_note_alarm_window_t5_ParamLimits

0x5c24,	// (0x00034afa) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0003e781) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0003e781) popup_midp_note_alarm_window_t

0x5cdc,	// (0x00034bb2) wait_bar_pane_cp1_ParamLimits

0x5cdc,	// (0x00034bb2) wait_bar_pane_cp1

0x2cbd,	// (0x00031b93) wait_anim_pane_copy1

0x2cbd,	// (0x00031b93) wait_border_pane_copy1

0x56b9,	// (0x0003458f) wait_border_pane_g1_copy1

0x0b70,	// (0x0002fa46) form_field_popup_pane_g1

0xba88,	// (0x0003a95e) form_field_popup_pane_t1_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_cp7_ParamLimits

0x3643,	// (0x00032519) list_form_pane_ParamLimits

0x0b90,	// (0x0002fa66) form_field_popup_wide_pane_g1

0x0b98,	// (0x0002fa6e) form_field_popup_wide_pane_t1_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_cp8_ParamLimits

0x364f,	// (0x00032525) list_form_wide_pane_ParamLimits

0x67b8,	// (0x0003568e) aid_size_cell_graphic_pane

0xbb07,	// (0x0003a9dd) data_form_pane_t1_ParamLimits

0xbf21,	// (0x0003adf7) data_form_wide_pane_t1_ParamLimits

0xd443,	// (0x0003c319) bg_status_flat_pane

0xc623,	// (0x0003b4f9) title_pane_t1_ParamLimits

0x2d65,	// (0x00031c3b) title_pane_t2_ParamLimits

0x2d8b,	// (0x00031c61) title_pane_t3_ParamLimits

0xf573,	// (0x0003e449) title_pane_t_ParamLimits

0x3c04,	// (0x00032ada) level_1_signal_ParamLimits

0x3c11,	// (0x00032ae7) level_2_signal_ParamLimits

0x3c1e,	// (0x00032af4) level_3_signal_ParamLimits

0x3c2b,	// (0x00032b01) level_4_signal_ParamLimits

0x3c38,	// (0x00032b0e) level_5_signal_ParamLimits

0x3c45,	// (0x00032b1b) level_6_signal_ParamLimits

0x3c52,	// (0x00032b28) level_7_signal_ParamLimits

0x3c04,	// (0x00032ada) level_1_battery_ParamLimits

0x3c11,	// (0x00032ae7) level_2_battery_ParamLimits

0x3c1e,	// (0x00032af4) level_3_battery_ParamLimits

0x3c2b,	// (0x00032b01) level_4_battery_ParamLimits

0x3c38,	// (0x00032b0e) level_5_battery_ParamLimits

0x3c45,	// (0x00032b1b) level_6_battery_ParamLimits

0x3c52,	// (0x00032b28) level_7_battery_ParamLimits

0x58d8,	// (0x000347ae) bg_status_flat_pane_g1

0x58e0,	// (0x000347b6) bg_status_flat_pane_g2

0x58e8,	// (0x000347be) bg_status_flat_pane_g3

0x58f0,	// (0x000347c6) bg_status_flat_pane_g4

0x58f8,	// (0x000347ce) bg_status_flat_pane_g5

0x5900,	// (0x000347d6) bg_status_flat_pane_g6

0x5908,	// (0x000347de) bg_status_flat_pane_g7

0xc6b7,	// (0x0003b58d) tabs_3_active_pane_t1_ParamLimits

0xc6b7,	// (0x0003b58d) tabs_3_passive_pane_t1_ParamLimits

0xc6d1,	// (0x0003b5a7) tabs_4_active_pane_t1_ParamLimits

0xc6d1,	// (0x0003b5a7) tabs_4_1_passive_pane_t1_ParamLimits

0xca05,	// (0x0003b8db) tabs_2_active_pane_t1_ParamLimits

0xca05,	// (0x0003b8db) tabs_2_passive_pane_t1_ParamLimits

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp4_ParamLimits

0xca17,	// (0x0003b8ed) tabs_2_long_active_pane_t1_ParamLimits

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp4_ParamLimits

0x1328,	// (0x000301fe) list_single_midp_graphic_pane_t1_ParamLimits

0x2d9d,	// (0x00031c73) bg_active_tab_pane_cp5_ParamLimits

0xca2a,	// (0x0003b900) tabs_3_long_active_pane_t1_ParamLimits

0x45d4,	// (0x000334aa) bg_passive_tab_pane_cp5_ParamLimits

0x1328,	// (0x000301fe) list_single_midp_graphic_pane_t1

0xd443,	// (0x0003c319) bg_status_flat_pane_ParamLimits

0x4d01,	// (0x00033bd7) indicator_pane_cp2_ParamLimits

0x4d01,	// (0x00033bd7) indicator_pane_cp2

0xd5ba,	// (0x0003c490) navi_pane_srt_ParamLimits

0xd5ba,	// (0x0003c490) navi_pane_srt

0x4e49,	// (0x00033d1f) popup_clock_digital_analogue_window_cp1

0x2e7a,	// (0x00031d50) indicator_pane_t1

0x426e,	// (0x00033144) copy_highlight_pane

0x426e,	// (0x00033144) cursor_graphics_pane

0x426e,	// (0x00033144) graphic_within_text_pane

0x426e,	// (0x00033144) link_highlight_pane

0x60f9,	// (0x00034fcf) popup_preview_text_window_t5_ParamLimits

0x60f9,	// (0x00034fcf) popup_preview_text_window_t5

0x439a,	// (0x00033270) cursor_digital_pane

0x439a,	// (0x00033270) cursor_primary_pane

0x43ab,	// (0x00033281) cursor_primary_small_pane

0x43b3,	// (0x00033289) cursor_secondary_pane

0x43bb,	// (0x00033291) cursor_title_pane

0x439a,	// (0x00033270) link_highlight_digital_pane

0x43a2,	// (0x00033278) link_highlight_primary_pane

0x43ab,	// (0x00033281) link_highlight_primary_small_pane

0x43b3,	// (0x00033289) link_highlight_secondary_pane

0x43bb,	// (0x00033291) link_highlight_title_pane

0x439a,	// (0x00033270) copy_highlight_digital_pane

0x439a,	// (0x00033270) copy_highlight_primary_pane

0x43ab,	// (0x00033281) copy_highlight_primary_small_pane

0x43b3,	// (0x00033289) copy_highlight_secondary_pane

0x43bb,	// (0x00033291) copy_highlight_title_pane

0x43b3,	// (0x00033289) graphic_text_digital_pane

0x5976,	// (0x0003484c) graphic_text_primary_pane

0x597f,	// (0x00034855) graphic_text_primary_small_pane

0x43ab,	// (0x00033281) graphic_text_secondary_pane

0x439a,	// (0x00033270) graphic_text_title_pane

0xcc85,	// (0x0003bb5b) cursor_primary_pane_g1

0x5968,	// (0x0003483e) cursor_text_primary_t1

0xd846,	// (0x0003c71c) cursor_primary_small_pane_g1

0x595a,	// (0x00034830) cursor_text_primary_small_t1

0xd83c,	// (0x0003c712) cursor_primary_small_pane_g1_copy1

0x5942,	// (0x00034818) cursor_text_primary_small_t1_copy1

0x5920,	// (0x000347f6) cursor_text_title_t1

0xd832,	// (0x0003c708) cursor_title_pane_g1

0xcc85,	// (0x0003bb5b) cursor_digital_pane_g1

0x43cd,	// (0x000332a3) cursor_text_digital_t1

0x43f2,	// (0x000332c8) link_highlight_primary_pane_g1

0x58c9,	// (0x0003479f) link_highlight_primary_pane_t1

0x43db,	// (0x000332b1) link_highlight_primary_small_pane_g1

0x43e3,	// (0x000332b9) link_highlight_primary_small_pane_t1

0x43f2,	// (0x000332c8) link_highlight_secondary_pane_g1

0x43fa,	// (0x000332d0) link_highlight_secondary_pane_t1

0x583d,	// (0x00034713) link_highlight_title_pane_g1

0x5845,	// (0x0003471b) link_highlight_title_pane_t1

0x5826,	// (0x000346fc) link_highlight_digital_pane_g1

0x582e,	// (0x00034704) link_highlight_digital_pane_t1

0x56fe,	// (0x000345d4) copy_highlight_primary_pane_g1

0x5706,	// (0x000345dc) copy_highlight_primary_pane_t1

0x56d8,	// (0x000345ae) copy_highlight_primary_small_pane_g1

0x56ef,	// (0x000345c5) copy_highlight_primary_small_pane_t1

0x4409,	// (0x000332df) copy_highlight_secondary_pane_g1

0x4411,	// (0x000332e7) copy_highlight_secondary_pane_t1

0x56d8,	// (0x000345ae) copy_highlight_title_pane_g1

0x56e0,	// (0x000345b6) copy_highlight_title_pane_t1

0x56fe,	// (0x000345d4) copy_highlight_digital_pane_g1

0x6982,	// (0x00035858) copy_highlight_digital_pane_t1

0x68d6,	// (0x000357ac) graphic_text_primary_pane_g1

0x6966,	// (0x0003583c) graphic_text_primary_pane_t1

0x6974,	// (0x0003584a) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0003e8b0) graphic_text_primary_pane_t

0x6942,	// (0x00035818) graphic_text_primary_small_pane_g1

0x694a,	// (0x00035820) graphic_text_primary_small_pane_t1

0x6958,	// (0x0003582e) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0003e8ab) graphic_text_primary_small_pane_t

0x691e,	// (0x000357f4) graphic_text_secondary_pane_g1

0x6926,	// (0x000357fc) graphic_text_secondary_pane_t1

0x6934,	// (0x0003580a) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0003e8a6) graphic_text_secondary_pane_t

0x68fa,	// (0x000357d0) graphic_text_title_pane_g1

0x6902,	// (0x000357d8) graphic_text_title_pane_t1

0x6910,	// (0x000357e6) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0003e8a1) graphic_text_title_pane_t

0x68d6,	// (0x000357ac) graphic_text_digital_pane_g1

0x68de,	// (0x000357b4) graphic_text_digital_pane_t1

0x68ec,	// (0x000357c2) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0003e89c) graphic_text_digital_pane_t

0x2d9d,	// (0x00031c73) navi_icon_pane_srt_ParamLimits

0x2d9d,	// (0x00031c73) navi_icon_pane_srt

0x2cbd,	// (0x00031b93) navi_midp_pane_srt

0x2cbd,	// (0x00031b93) navi_navi_pane_srt

0x2d9d,	// (0x00031c73) navi_text_pane_srt_ParamLimits

0x2d9d,	// (0x00031c73) navi_text_pane_srt

0x68a1,	// (0x00035777) navi_navi_icon_text_pane_srt

0x68a9,	// (0x0003577f) navi_navi_pane_srt_g1_ParamLimits

0x68a9,	// (0x0003577f) navi_navi_pane_srt_g1

0x68bb,	// (0x00035791) navi_navi_pane_srt_g2_ParamLimits

0x68bb,	// (0x00035791) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0003e897) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0003e897) navi_navi_pane_srt_g

0x68cd,	// (0x000357a3) navi_navi_tabs_pane_srt

0x68a1,	// (0x00035777) navi_navi_text_pane_srt

0x68a1,	// (0x00035777) navi_navi_volume_pane_srt

0x6892,	// (0x00035768) navi_navi_text_pane_srt_t1

0x16a2,	// (0x00030578) navi_navi_volume_pane_srt_g1

0x16aa,	// (0x00030580) volume_small_pane_srt_ParamLimits

0x16aa,	// (0x00030580) volume_small_pane_srt

0x1099,	// (0x0002ff6f) volume_small_pane_srt_g1_ParamLimits

0x1099,	// (0x0002ff6f) volume_small_pane_srt_g1

0x10a9,	// (0x0002ff7f) volume_small_pane_srt_g2_ParamLimits

0x10a9,	// (0x0002ff7f) volume_small_pane_srt_g2

0x10ba,	// (0x0002ff90) volume_small_pane_srt_g3_ParamLimits

0x10ba,	// (0x0002ff90) volume_small_pane_srt_g3

0x10cb,	// (0x0002ffa1) volume_small_pane_srt_g4_ParamLimits

0x10cb,	// (0x0002ffa1) volume_small_pane_srt_g4

0x10dc,	// (0x0002ffb2) volume_small_pane_srt_g5_ParamLimits

0x10dc,	// (0x0002ffb2) volume_small_pane_srt_g5

0x10ed,	// (0x0002ffc3) volume_small_pane_srt_g6_ParamLimits

0x10ed,	// (0x0002ffc3) volume_small_pane_srt_g6

0x10fe,	// (0x0002ffd4) volume_small_pane_srt_g7_ParamLimits

0x10fe,	// (0x0002ffd4) volume_small_pane_srt_g7

0x110f,	// (0x0002ffe5) volume_small_pane_srt_g8_ParamLimits

0x110f,	// (0x0002ffe5) volume_small_pane_srt_g8

0x1120,	// (0x0002fff6) volume_small_pane_srt_g9_ParamLimits

0x1120,	// (0x0002fff6) volume_small_pane_srt_g9

0x1131,	// (0x00030007) volume_small_pane_srt_g10_ParamLimits

0x1131,	// (0x00030007) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003e64b) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003e64b) volume_small_pane_srt_g

0x3177,	// (0x0003204d) query_popup_data_pane_cp2

0x6878,	// (0x0003574e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6878,	// (0x0003574e) navi_navi_icon_text_pane_srt_t1

0x5976,	// (0x0003484c) navi_tabs_2_long_pane_srt

0x5976,	// (0x0003484c) navi_tabs_2_pane_srt

0x5976,	// (0x0003484c) navi_tabs_3_long_pane_srt

0x5976,	// (0x0003484c) navi_tabs_3_pane_srt

0x5976,	// (0x0003484c) navi_tabs_4_pane_srt

0x1682,	// (0x00030558) tabs_2_active_pane_srt_ParamLimits

0x1682,	// (0x00030558) tabs_2_active_pane_srt

0x1692,	// (0x00030568) tabs_2_passive_pane_srt_ParamLimits

0x1692,	// (0x00030568) tabs_2_passive_pane_srt

0x515a,	// (0x00034030) bg_passive_tab_pane_cp1_srt_ParamLimits

0x515a,	// (0x00034030) bg_passive_tab_pane_cp1_srt

0x6844,	// (0x0003571a) bg_passive_tab_pane_g1_cp1_srt

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp1_srt

0x684d,	// (0x00035723) bg_passive_tab_pane_g3_cp1_srt

0x3018,	// (0x00031eee) bg_active_tab_pane_cp1_srt_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp1_srt

0x6856,	// (0x0003572c) tabs_2_active_pane_srt_g1

0xdc4c,	// (0x0003cb22) tabs_2_active_pane_srt_t1_ParamLimits

0xdc4c,	// (0x0003cb22) tabs_2_active_pane_srt_t1

0x6844,	// (0x0003571a) bg_active_tab_pane_g1_cp1_srt

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp1_srt

0x684d,	// (0x00035723) bg_active_tab_pane_g3_cp1_srt

0x164f,	// (0x00030525) tabs_3_active_pane_srt_ParamLimits

0x164f,	// (0x00030525) tabs_3_active_pane_srt

0x1660,	// (0x00030536) tabs_3_passive_pane_cp_srt_ParamLimits

0x1660,	// (0x00030536) tabs_3_passive_pane_cp_srt

0x1671,	// (0x00030547) tabs_3_passive_pane_srt_ParamLimits

0x1671,	// (0x00030547) tabs_3_passive_pane_srt

0x515a,	// (0x00034030) bg_passive_tab_pane_cp2_srt_ParamLimits

0x515a,	// (0x00034030) bg_passive_tab_pane_cp2_srt

0x4420,	// (0x000332f6) bg_passive_tab_pane_g1_cp2_srt

0x3ebb,	// (0x00032d91) bg_passive_tab_pane_g2_cp2_srt

0x4429,	// (0x000332ff) bg_passive_tab_pane_g3_cp2_srt

0x3018,	// (0x00031eee) bg_active_tab_pane_cp2_srt_ParamLimits

0x3018,	// (0x00031eee) bg_active_tab_pane_cp2_srt

0x682a,	// (0x00035700) tabs_3_active_pane_srt_g1

0xdc36,	// (0x0003cb0c) tabs_3_active_pane_srt_t1_ParamLimits

0xdc36,	// (0x0003cb0c) tabs_3_active_pane_srt_t1

0x4420,	// (0x000332f6) bg_active_tab_pane_g1_cp2_srt

0x3ebb,	// (0x00032d91) bg_active_tab_pane_g2_cp2_srt

0x4429,	// (0x000332ff) bg_active_tab_pane_g3_cp2_srt

0x1607,	// (0x000304dd) tabs_4_active_pane_srt_ParamLimits

0x1607,	// (0x000304dd) tabs_4_active_pane_srt

0x1619,	// (0x000304ef) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1619,	// (0x000304ef) tabs_4_passive_pane_cp2_srt

0x457e,	// (0x00033454) aid_size_cell_toolbar

0x64b9,	// (0x0003538f) main_idle_act_pane_ParamLimits

0x4771,	// (0x00033647) popup_large_graphic_colour_window_ParamLimits

0xd30e,	// (0x0003c1e4) popup_toolbar_window_ParamLimits

0xd30e,	// (0x0003c1e4) popup_toolbar_window

0x668c,	// (0x00035562) list_single_graphic_2heading_pane_ParamLimits

0x668c,	// (0x00035562) list_single_graphic_2heading_pane

0x39b3,	// (0x00032889) aid_size_cell_apps_grid_lsc_pane

0x39c5,	// (0x0003289b) aid_size_cell_apps_grid_prt_pane

0x45d4,	// (0x000334aa) bg_wml_button_pane_cp1_ParamLimits

0x45d4,	// (0x000334aa) bg_wml_button_pane_cp1

0xd7e8,	// (0x0003c6be) form_midp_field_text_pane_t1_ParamLimits

0x515a,	// (0x00034030) input_focus_pane_cp050_ParamLimits

0x539f,	// (0x00034275) list_midp_form_text_pane_ParamLimits

0x5345,	// (0x0003421b) input_focus_pane_cp051_ParamLimits

0x5359,	// (0x0003422f) list_midp_choice_pane_ParamLimits

0xd783,	// (0x0003c659) list_single_2graphic_pane_cp3_ParamLimits

0xd783,	// (0x0003c659) list_single_2graphic_pane_cp3

0xd797,	// (0x0003c66d) list_single_midp_graphic_pane_ParamLimits

0xd797,	// (0x0003c66d) list_single_midp_graphic_pane

0x00a1,	// (0x0002ef77) list_single_graphic_2heading_pane_g1_ParamLimits

0x00a1,	// (0x0002ef77) list_single_graphic_2heading_pane_g1

0x00ad,	// (0x0002ef83) list_single_graphic_2heading_pane_g4_ParamLimits

0x00ad,	// (0x0002ef83) list_single_graphic_2heading_pane_g4

0x00b9,	// (0x0002ef8f) list_single_graphic_2heading_pane_g5_ParamLimits

0x00b9,	// (0x0002ef8f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003e69e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003e69e) list_single_graphic_2heading_pane_g

0x00c5,	// (0x0002ef9b) list_single_graphic_2heading_pane_t1_ParamLimits

0x00c5,	// (0x0002ef9b) list_single_graphic_2heading_pane_t1

0x00d9,	// (0x0002efaf) list_single_graphic_2heading_pane_t2_ParamLimits

0x00d9,	// (0x0002efaf) list_single_graphic_2heading_pane_t2

0x00f5,	// (0x0002efcb) list_single_graphic_2heading_pane_t3_ParamLimits

0x00f5,	// (0x0002efcb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003e6a5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003e6a5) list_single_graphic_2heading_pane_t

0x4fa8,	// (0x00033e7e) bg_popup_sub_pane_cp2

0x4fd2,	// (0x00033ea8) grid_toobar_pane

0x1297,	// (0x0003016d) cell_toolbar_pane_ParamLimits

0x1297,	// (0x0003016d) cell_toolbar_pane

0x500e,	// (0x00033ee4) cell_toolbar_pane_g1_ParamLimits

0x500e,	// (0x00033ee4) cell_toolbar_pane_g1

0x5022,	// (0x00033ef8) cell_toolbar_pane_g2_ParamLimits

0x5022,	// (0x00033ef8) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0003e6b3) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0003e6b3) cell_toolbar_pane_g

0x5044,	// (0x00033f1a) grid_highlight_pane_cp2_ParamLimits

0x5044,	// (0x00033f1a) grid_highlight_pane_cp2

0x505e,	// (0x00033f34) toolbar_button_pane

0x506a,	// (0x00033f40) toolbar_button_pane_g1

0x5072,	// (0x00033f48) toolbar_button_pane_g2

0x507a,	// (0x00033f50) toolbar_button_pane_g3

0x5082,	// (0x00033f58) toolbar_button_pane_g4

0x508a,	// (0x00033f60) toolbar_button_pane_g5

0x5092,	// (0x00033f68) toolbar_button_pane_g6

0x509a,	// (0x00033f70) toolbar_button_pane_g7

0x50a2,	// (0x00033f78) toolbar_button_pane_g8

0x50aa,	// (0x00033f80) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0003e6b8) toolbar_button_pane_g

0x12cf,	// (0x000301a5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x12cf,	// (0x000301a5) list_single_2graphic_pane_g1_cp3

0xbd38,	// (0x0003ac0e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd38,	// (0x0003ac0e) list_single_2graphic_pane_g2_cp3

0x12ec,	// (0x000301c2) list_single_2graphic_pane_g3_cp3

0x12f4,	// (0x000301ca) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12f4,	// (0x000301ca) list_single_2graphic_pane_g4_cp3

0x1300,	// (0x000301d6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1300,	// (0x000301d6) list_single_2graphic_pane_t1_cp3

0x131c,	// (0x000301f2) list_single_midp_graphic_pane_g2_ParamLimits

0x131c,	// (0x000301f2) list_single_midp_graphic_pane_g2

0x4586,	// (0x0003345c) aid_zoom_text_primary

0x2488,	// (0x0003135e) aid_zoom_text_secondary

0x44dd,	// (0x000333b3) status_small_pane_g7_ParamLimits

0x44dd,	// (0x000333b3) status_small_pane_g7

0x4500,	// (0x000333d6) status_small_pane_t1_ParamLimits

0xc5ff,	// (0x0003b4d5) title_pane_g2

0x0003,

0xf56a,	// (0x0003e440) title_pane_g

0xc887,	// (0x0003b75d) aid_size_cell_colour_1_pane_ParamLimits

0xc887,	// (0x0003b75d) aid_size_cell_colour_1_pane

0xc89b,	// (0x0003b771) aid_size_cell_colour_2_pane_ParamLimits

0xc89b,	// (0x0003b771) aid_size_cell_colour_2_pane

0xc8af,	// (0x0003b785) aid_size_cell_colour_3_pane_ParamLimits

0xc8af,	// (0x0003b785) aid_size_cell_colour_3_pane

0xc8c3,	// (0x0003b799) aid_size_cell_colour_4_pane_ParamLimits

0xc8c3,	// (0x0003b799) aid_size_cell_colour_4_pane

0x0cf5,	// (0x0002fbcb) title_pane_stacon_g1_ParamLimits

0x0cf5,	// (0x0002fbcb) title_pane_stacon_g1

0x575d,	// (0x00034633) popup_note_wait_window_g3_ParamLimits

0x575d,	// (0x00034633) popup_note_wait_window_g3

0x57d3,	// (0x000346a9) popup_note_wait_window_t5_ParamLimits

0x57d3,	// (0x000346a9) popup_note_wait_window_t5

0x2cbd,	// (0x00031b93) main_feb_china_hwr_fs_writing_pane

0xcd40,	// (0x0003bc16) popup_feb_china_hwr_fs_window_ParamLimits

0xcd40,	// (0x0003bc16) popup_feb_china_hwr_fs_window

0xbd49,	// (0x0003ac1f) aid_size_cell_hwr_fs_ParamLimits

0xbd49,	// (0x0003ac1f) aid_size_cell_hwr_fs

0x515a,	// (0x00034030) bg_popup_sub_pane_cp3_ParamLimits

0x515a,	// (0x00034030) bg_popup_sub_pane_cp3

0xbd5e,	// (0x0003ac34) grid_hwr_fs_pane_ParamLimits

0xbd5e,	// (0x0003ac34) grid_hwr_fs_pane

0x136b,	// (0x00030241) linegrid_hwr_fs_pane_ParamLimits

0x136b,	// (0x00030241) linegrid_hwr_fs_pane

0xbd76,	// (0x0003ac4c) cell_hwr_fs_pane_ParamLimits

0xbd76,	// (0x0003ac4c) cell_hwr_fs_pane

0x5166,	// (0x0003403c) linegrid_hwr_fs_pane_g1_ParamLimits

0x5166,	// (0x0003403c) linegrid_hwr_fs_pane_g1

0xd757,	// (0x0003c62d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd757,	// (0x0003c62d) linegrid_hwr_fs_pane_g2

0x5184,	// (0x0003405a) linegrid_hwr_fs_pane_g3_ParamLimits

0x5184,	// (0x0003405a) linegrid_hwr_fs_pane_g3

0x139d,	// (0x00030273) linegrid_hwr_fs_pane_g4_ParamLimits

0x139d,	// (0x00030273) linegrid_hwr_fs_pane_g4

0x13b7,	// (0x0003028d) linegrid_hwr_fs_pane_g5_ParamLimits

0x13b7,	// (0x0003028d) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0003e6de) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0003e6de) linegrid_hwr_fs_pane_g

0x5190,	// (0x00034066) cell_hwr_fs_pane_g1_ParamLimits

0x5190,	// (0x00034066) cell_hwr_fs_pane_g1

0x4edf,	// (0x00033db5) cell_hwr_fs_pane_g2_ParamLimits

0x4edf,	// (0x00033db5) cell_hwr_fs_pane_g2

0xd769,	// (0x0003c63f) cell_hwr_fs_pane_g3_ParamLimits

0xd769,	// (0x0003c63f) cell_hwr_fs_pane_g3

0xd776,	// (0x0003c64c) cell_hwr_fs_pane_g4_ParamLimits

0xd776,	// (0x0003c64c) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0003e6e9) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0003e6e9) cell_hwr_fs_pane_g

0xbd9c,	// (0x0003ac72) cell_hwr_fs_pane_t1

0x2cbd,	// (0x00031b93) grid_highlight_pane_cp6

0x2cbd,	// (0x00031b93) main_idle_act2_pane

0x376a,	// (0x00032640) aid_inside_area_popup_secondary

0xd866,	// (0x0003c73c) aid_inside_area_window_primary_ParamLimits

0xd866,	// (0x0003c73c) aid_inside_area_window_primary

0x6991,	// (0x00035867) ai2_news_ticker_pane

0x6999,	// (0x0003586f) aid_size_cell_ai1_link_ParamLimits

0x6999,	// (0x0003586f) aid_size_cell_ai1_link

0xdc62,	// (0x0003cb38) popup_ai2_data_window_ParamLimits

0xdc62,	// (0x0003cb38) popup_ai2_data_window

0x69c9,	// (0x0003589f) popup_ai2_link_window_ParamLimits

0x69c9,	// (0x0003589f) popup_ai2_link_window

0x515a,	// (0x00034030) bg_popup_sub_pane_cp4_ParamLimits

0x515a,	// (0x00034030) bg_popup_sub_pane_cp4

0x69dd,	// (0x000358b3) grid_ai2_link_pane_ParamLimits

0x69dd,	// (0x000358b3) grid_ai2_link_pane

0x69f4,	// (0x000358ca) popup_ai2_link_window_g1_ParamLimits

0x69f4,	// (0x000358ca) popup_ai2_link_window_g1

0x6a00,	// (0x000358d6) popup_ai2_link_window_g2_ParamLimits

0x6a00,	// (0x000358d6) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0003e8b5) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0003e8b5) popup_ai2_link_window_g

0x6a0f,	// (0x000358e5) ai2_mp_button_pane

0x6a17,	// (0x000358ed) ai2_mp_volume_pane

0x5345,	// (0x0003421b) bg_popup_sub_pane_cp5_ParamLimits

0x5345,	// (0x0003421b) bg_popup_sub_pane_cp5

0x6a1f,	// (0x000358f5) heading_ai2_gene_pane_ParamLimits

0x6a1f,	// (0x000358f5) heading_ai2_gene_pane

0x6a2b,	// (0x00035901) list_ai2_gene_pane_ParamLimits

0x6a2b,	// (0x00035901) list_ai2_gene_pane

0x6a73,	// (0x00035949) cell_ai2_link_pane_ParamLimits

0x6a73,	// (0x00035949) cell_ai2_link_pane

0x6a89,	// (0x0003595f) cell_ai2_link_pane_g1

0x2cbd,	// (0x00031b93) grid_highlight_pane_cp7

0x16bf,	// (0x00030595) ai2_mp_volume_pane_g1

0x6b59,	// (0x00035a2f) ai2_mp_volume_pane_g2

0xdc8c,	// (0x0003cb62) list_ai2_gene_pane_t1

0x6b61,	// (0x00035a37) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0003e8ce) ai2_mp_volume_pane_g

0x16c7,	// (0x0003059d) volume_small_pane_cp3

0x6b69,	// (0x00035a3f) aid_size_cell_ai2_button

0x6b71,	// (0x00035a47) grid_ai2_button_pane

0x6b7a,	// (0x00035a50) cell_ai2_button_pane_ParamLimits

0x6b7a,	// (0x00035a50) cell_ai2_button_pane

0x2cb3,	// (0x00031b89) cell_ai2_button_pane_g1

0x2cbd,	// (0x00031b93) grid_highlight_pane_cp8

0x6b19,	// (0x000359ef) ai2_gene_pane_t1_ParamLimits

0x6b19,	// (0x000359ef) ai2_gene_pane_t1

0xccb6,	// (0x0003bb8c) aid_height_parent_landscape

0xd9f5,	// (0x0003c8cb) aid_height_set_list

0x64b9,	// (0x0003538f) aid_size_parent

0x67b8,	// (0x0003568e) aid_size_cell_graphic_pane_ParamLimits

0x6a3b,	// (0x00035911) popup_ai2_data_window_g1_ParamLimits

0x6a3b,	// (0x00035911) popup_ai2_data_window_g1

0x6a47,	// (0x0003591d) ai2_news_ticker_pane_g1

0x6a4f,	// (0x00035925) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0003e8ba) ai2_news_ticker_pane_g

0x6a57,	// (0x0003592d) ai2_news_ticker_pane_t1

0x6a65,	// (0x0003593b) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0003e8bf) ai2_news_ticker_pane_t

0x6a92,	// (0x00035968) heading_ai2_gene_pane_g1

0x6a9a,	// (0x00035970) heading_ai2_gene_pane_t1_ParamLimits

0x6a9a,	// (0x00035970) heading_ai2_gene_pane_t1

0x6aaf,	// (0x00035985) list_highlight_pane_cp6

0xdc76,	// (0x0003cb4c) ai2_gene_pane_ParamLimits

0xdc76,	// (0x0003cb4c) ai2_gene_pane

0xdc9a,	// (0x0003cb70) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0003e8c4) list_ai2_gene_pane_t

0x6aea,	// (0x000359c0) list_highlight_pane_cp8_ParamLimits

0x6aea,	// (0x000359c0) list_highlight_pane_cp8

0x6afb,	// (0x000359d1) ai2_gene_pane_g1_ParamLimits

0x6afb,	// (0x000359d1) ai2_gene_pane_g1

0x6b0d,	// (0x000359e3) ai2_gene_pane_g2_ParamLimits

0x6b0d,	// (0x000359e3) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0003e8c9) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0003e8c9) ai2_gene_pane_g

0x359f,	// (0x00032475) scroll_pane_cp12

0xbcf5,	// (0x0003abcb) control_pane_t3_ParamLimits

0xbcf5,	// (0x0003abcb) control_pane_t3

0x44f1,	// (0x000333c7) status_small_pane_g8_ParamLimits

0x44f1,	// (0x000333c7) status_small_pane_g8

0xcdd5,	// (0x0003bcab) popup_find_window_ParamLimits

0xd044,	// (0x0003bf1a) popup_note_image_window_ParamLimits

0x24b4,	// (0x0003138a) list_double2_graphic_pane_vc_g1_ParamLimits

0x24b4,	// (0x0003138a) list_double2_graphic_pane_vc_g1

0x24c0,	// (0x00031396) list_double2_graphic_pane_vc_g2_ParamLimits

0x24c0,	// (0x00031396) list_double2_graphic_pane_vc_g2

0x24cc,	// (0x000313a2) list_double2_graphic_pane_vc_g3_ParamLimits

0x24cc,	// (0x000313a2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003e6ac) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003e6ac) list_double2_graphic_pane_vc_g

0x24d8,	// (0x000313ae) list_double2_graphic_pane_vc_t1_ParamLimits

0x24d8,	// (0x000313ae) list_double2_graphic_pane_vc_t1

0x24ee,	// (0x000313c4) list_single_heading_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_heading_pane_vc_g1

0x24fa,	// (0x000313d0) list_single_heading_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_heading_pane_vc_g

0x2506,	// (0x000313dc) list_single_heading_pane_vc_t1_ParamLimits

0x2506,	// (0x000313dc) list_single_heading_pane_vc_t1

0x251c,	// (0x000313f2) list_single_heading_pane_vc_t2_ParamLimits

0x251c,	// (0x000313f2) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0003e6cd) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0003e6cd) list_single_heading_pane_vc_t

0x50b2,	// (0x00033f88) list_setting_number_pane_vc_g1_ParamLimits

0x50b2,	// (0x00033f88) list_setting_number_pane_vc_g1

0x50be,	// (0x00033f94) list_setting_number_pane_vc_g2_ParamLimits

0x50be,	// (0x00033f94) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e6d2) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e6d2) list_setting_number_pane_vc_g

0x50ca,	// (0x00033fa0) list_setting_number_pane_vc_t1_ParamLimits

0x50ca,	// (0x00033fa0) list_setting_number_pane_vc_t1

0x50de,	// (0x00033fb4) list_setting_number_pane_vc_t2_ParamLimits

0x50de,	// (0x00033fb4) list_setting_number_pane_vc_t2

0x50fa,	// (0x00033fd0) list_setting_number_pane_vc_t3_ParamLimits

0x50fa,	// (0x00033fd0) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0003e6d7) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0003e6d7) list_setting_number_pane_vc_t

0x5120,	// (0x00033ff6) set_value_pane_vc_ParamLimits

0x5120,	// (0x00033ff6) set_value_pane_vc

0x668c,	// (0x00035562) list_double2_graphic_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double2_graphic_pane_vc

0x668c,	// (0x00035562) list_double2_large_graphic_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double2_large_graphic_pane_vc

0x668c,	// (0x00035562) list_double2_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double2_pane_vc

0x668c,	// (0x00035562) list_double_graphic_heading_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_graphic_heading_pane_vc

0x668c,	// (0x00035562) list_double_graphic_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_graphic_pane_vc

0x668c,	// (0x00035562) list_double_heading_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_heading_pane_vc

0x668c,	// (0x00035562) list_double_large_graphic_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_large_graphic_pane_vc

0x668c,	// (0x00035562) list_double_number_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_number_pane_vc

0x668c,	// (0x00035562) list_double_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_pane_vc

0x668c,	// (0x00035562) list_double_time_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_double_time_pane_vc

0x668c,	// (0x00035562) list_setting_number_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_setting_number_pane_vc

0x668c,	// (0x00035562) list_setting_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_setting_pane_vc

0x668c,	// (0x00035562) list_single_graphic_heading_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_single_graphic_heading_pane_vc

0x668c,	// (0x00035562) list_single_heading_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_single_heading_pane_vc

0x668c,	// (0x00035562) list_single_number_heading_pane_vc_ParamLimits

0x668c,	// (0x00035562) list_single_number_heading_pane_vc

0x2695,	// (0x0003156b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2695,	// (0x0003156b) list_double_graphic_heading_pane_vc_g1

0x24ee,	// (0x000313c4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x24ee,	// (0x000313c4) list_double_graphic_heading_pane_vc_g2

0x24fa,	// (0x000313d0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x24fa,	// (0x000313d0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0003e8d5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0003e8d5) list_double_graphic_heading_pane_vc_g

0x26a1,	// (0x00031577) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x26a1,	// (0x00031577) list_double_graphic_heading_pane_vc_t1

0x2506,	// (0x000313dc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2506,	// (0x000313dc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0003e8dc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0003e8dc) list_double_graphic_heading_pane_vc_t

0x50b2,	// (0x00033f88) list_setting_pane_vc_g1_ParamLimits

0x50b2,	// (0x00033f88) list_setting_pane_vc_g1

0x50be,	// (0x00033f94) list_setting_pane_vc_g2_ParamLimits

0x50be,	// (0x00033f94) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e6d2) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e6d2) list_setting_pane_vc_g

0x6db2,	// (0x00035c88) list_setting_pane_vc_t1_ParamLimits

0x6db2,	// (0x00035c88) list_setting_pane_vc_t1

0x6dc6,	// (0x00035c9c) list_setting_pane_vc_t2_ParamLimits

0x6dc6,	// (0x00035c9c) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x0003e91f) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x0003e91f) list_setting_pane_vc_t

0x5120,	// (0x00033ff6) set_value_pane_cp_vc_ParamLimits

0x5120,	// (0x00033ff6) set_value_pane_cp_vc

0x24ee,	// (0x000313c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_single_number_heading_pane_vc_g1

0x24fa,	// (0x000313d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_single_number_heading_pane_vc_g

0x2506,	// (0x000313dc) list_single_number_heading_pane_vc_t1_ParamLimits

0x2506,	// (0x000313dc) list_single_number_heading_pane_vc_t1

0x26b5,	// (0x0003158b) list_single_number_heading_pane_vc_t2_ParamLimits

0x26b5,	// (0x0003158b) list_single_number_heading_pane_vc_t2

0x26c9,	// (0x0003159f) list_single_number_heading_pane_vc_t3_ParamLimits

0x26c9,	// (0x0003159f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x0003e924) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003e924) list_single_number_heading_pane_vc_t

0x24b4,	// (0x0003138a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x24b4,	// (0x0003138a) list_single_graphic_heading_pane_vc_g1

0x24ee,	// (0x000313c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x24ee,	// (0x000313c4) list_single_graphic_heading_pane_vc_g4

0x24fa,	// (0x000313d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x24fa,	// (0x000313d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa55,	// (0x0003e92b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa55,	// (0x0003e92b) list_single_graphic_heading_pane_vc_g

0x2506,	// (0x000313dc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2506,	// (0x000313dc) list_single_graphic_heading_pane_vc_t1

0x26db,	// (0x000315b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x26db,	// (0x000315b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003e932) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003e932) list_single_graphic_heading_pane_vc_t

0x24ee,	// (0x000313c4) list_double2_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_double2_pane_vc_g1

0x24fa,	// (0x000313d0) list_double2_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_double2_pane_vc_g

0x26ef,	// (0x000315c5) list_double2_pane_vc_t1_ParamLimits

0x26ef,	// (0x000315c5) list_double2_pane_vc_t1

0x2705,	// (0x000315db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2705,	// (0x000315db) list_double2_large_graphic_pane_vc_g1

0x24ee,	// (0x000313c4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x24ee,	// (0x000313c4) list_double2_large_graphic_pane_vc_g2

0x24fa,	// (0x000313d0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x24fa,	// (0x000313d0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0003e4d7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0003e4d7) list_double2_large_graphic_pane_vc_g

0x2711,	// (0x000315e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2711,	// (0x000315e7) list_double2_large_graphic_pane_vc_t1

0x2727,	// (0x000315fd) list_double_time_pane_vc_g1_ParamLimits

0x2727,	// (0x000315fd) list_double_time_pane_vc_g1

0x2733,	// (0x00031609) list_double_time_pane_vc_g2_ParamLimits

0x2733,	// (0x00031609) list_double_time_pane_vc_g2

0x0001,

0xfa61,	// (0x0003e937) list_double_time_pane_vc_g_ParamLimits

0xfa61,	// (0x0003e937) list_double_time_pane_vc_g

0x273f,	// (0x00031615) list_double_time_pane_vc_t1_ParamLimits

0x273f,	// (0x00031615) list_double_time_pane_vc_t1

0x2758,	// (0x0003162e) list_double_time_pane_vc_t2_ParamLimits

0x2758,	// (0x0003162e) list_double_time_pane_vc_t2

0x2793,	// (0x00031669) list_double_time_pane_vc_t3_ParamLimits

0x2793,	// (0x00031669) list_double_time_pane_vc_t3

0x27ab,	// (0x00031681) list_double_time_pane_vc_t4_ParamLimits

0x27ab,	// (0x00031681) list_double_time_pane_vc_t4

0x0003,

0xfa66,	// (0x0003e93c) list_double_time_pane_vc_t_ParamLimits

0xfa66,	// (0x0003e93c) list_double_time_pane_vc_t

0x24ee,	// (0x000313c4) list_double_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_double_pane_vc_g1

0x24fa,	// (0x000313d0) list_double_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_double_pane_vc_g

0x27bf,	// (0x00031695) list_double_pane_vc_t1_ParamLimits

0x27bf,	// (0x00031695) list_double_pane_vc_t1

0x27d1,	// (0x000316a7) list_double_pane_vc_t2_ParamLimits

0x27d1,	// (0x000316a7) list_double_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003e945) list_double_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003e945) list_double_pane_vc_t

0x24ee,	// (0x000313c4) list_double_number_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_double_number_pane_vc_g1

0x24fa,	// (0x000313d0) list_double_number_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_double_number_pane_vc_g

0x27e9,	// (0x000316bf) list_double_number_pane_vc_t1_ParamLimits

0x27e9,	// (0x000316bf) list_double_number_pane_vc_t1

0x27fd,	// (0x000316d3) list_double_number_pane_vc_t2_ParamLimits

0x27fd,	// (0x000316d3) list_double_number_pane_vc_t2

0x27d1,	// (0x000316a7) list_double_number_pane_vc_t3_ParamLimits

0x27d1,	// (0x000316a7) list_double_number_pane_vc_t3

0x0002,

0xfa74,	// (0x0003e94a) list_double_number_pane_vc_t_ParamLimits

0xfa74,	// (0x0003e94a) list_double_number_pane_vc_t

0x280f,	// (0x000316e5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x280f,	// (0x000316e5) list_double_large_graphic_pane_vc_g1

0x281b,	// (0x000316f1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x281b,	// (0x000316f1) list_double_large_graphic_pane_vc_g2

0x24fa,	// (0x000313d0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x24fa,	// (0x000313d0) list_double_large_graphic_pane_vc_g3

0x282a,	// (0x00031700) list_double_large_graphic_pane_vc_g4_ParamLimits

0x282a,	// (0x00031700) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7b,	// (0x0003e951) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0003e951) list_double_large_graphic_pane_vc_g

0x2836,	// (0x0003170c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2836,	// (0x0003170c) list_double_large_graphic_pane_vc_t1

0x2848,	// (0x0003171e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2848,	// (0x0003171e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0003e95a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0003e95a) list_double_large_graphic_pane_vc_t

0x24ee,	// (0x000313c4) list_double_heading_pane_vc_g1_ParamLimits

0x24ee,	// (0x000313c4) list_double_heading_pane_vc_g1

0x24fa,	// (0x000313d0) list_double_heading_pane_vc_g2_ParamLimits

0x24fa,	// (0x000313d0) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e4ba) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e4ba) list_double_heading_pane_vc_g

0x2861,	// (0x00031737) list_double_heading_pane_vc_t1_ParamLimits

0x2861,	// (0x00031737) list_double_heading_pane_vc_t1

0x2506,	// (0x000313dc) list_double_heading_pane_vc_t2_ParamLimits

0x2506,	// (0x000313dc) list_double_heading_pane_vc_t2

0x0001,

0xfa89,	// (0x0003e95f) list_double_heading_pane_vc_t_ParamLimits

0xfa89,	// (0x0003e95f) list_double_heading_pane_vc_t

0x2875,	// (0x0003174b) list_double_graphic_pane_vc_g1_ParamLimits

0x2875,	// (0x0003174b) list_double_graphic_pane_vc_g1

0x2885,	// (0x0003175b) list_double_graphic_pane_vc_g2_ParamLimits

0x2885,	// (0x0003175b) list_double_graphic_pane_vc_g2

0x2894,	// (0x0003176a) list_double_graphic_pane_vc_g3_ParamLimits

0x2894,	// (0x0003176a) list_double_graphic_pane_vc_g3

0x0002,

0xfa8e,	// (0x0003e964) list_double_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x0003e964) list_double_graphic_pane_vc_g

0x28a0,	// (0x00031776) list_double_graphic_pane_vc_t1_ParamLimits

0x28a0,	// (0x00031776) list_double_graphic_pane_vc_t1

0x27d1,	// (0x000316a7) list_double_graphic_pane_vc_t2_ParamLimits

0x27d1,	// (0x000316a7) list_double_graphic_pane_vc_t2

0x0001,

0xfa95,	// (0x0003e96b) list_double_graphic_pane_vc_t_ParamLimits

0xfa95,	// (0x0003e96b) list_double_graphic_pane_vc_t

0x0125,	// (0x0002effb) aid_size_cell_fastswap

0xb475,	// (0x0003a34b) aid_size_cell_touch_ParamLimits

0xb475,	// (0x0003a34b) aid_size_cell_touch

0x0392,	// (0x0002f268) popup_fast_swap_wide_window_ParamLimits

0x0392,	// (0x0002f268) popup_fast_swap_wide_window

0xb5c0,	// (0x0003a496) touch_pane_ParamLimits

0xb5c0,	// (0x0003a496) touch_pane

0x35f5,	// (0x000324cb) button_value_adjust_pane_cp2

0x0a7c,	// (0x0002f952) button_value_adjust_pane_cp4

0x0a9c,	// (0x0002f972) form_field_data_pane_cp2

0xba2b,	// (0x0003a901) form_field_data_wide_pane_cp2

0x3a82,	// (0x00032958) bg_scroll_pane_ParamLimits

0x0e58,	// (0x0002fd2e) scroll_handle_pane_ParamLimits

0x0e6c,	// (0x0002fd42) scroll_sc2_down_pane_ParamLimits

0x0e6c,	// (0x0002fd42) scroll_sc2_down_pane

0x3ab3,	// (0x00032989) scroll_sc2_up_pane_ParamLimits

0x3ab3,	// (0x00032989) scroll_sc2_up_pane

0xddc5,	// (0x0003cc9b) grid_wheel_folder_pane_g1_ParamLimits

0xddc5,	// (0x0003cc9b) grid_wheel_folder_pane_g1

0x1031,	// (0x0002ff07) clock_nsta_pane_cp2_ParamLimits

0x1031,	// (0x0002ff07) clock_nsta_pane_cp2

0xcbcb,	// (0x0003baa1) listscroll_midp_pane_ParamLimits

0xcbdc,	// (0x0003bab2) midp_canvas_pane

0x456c,	// (0x00033442) nsta_clock_indic_pane

0x45ba,	// (0x00033490) listscroll_form_pane_vc

0x45c2,	// (0x00033498) listscroll_set_pane_vc_ParamLimits

0x45c2,	// (0x00033498) listscroll_set_pane_vc

0xd46b,	// (0x0003c341) clock_nsta_pane

0xd495,	// (0x0003c36b) indicator_nsta_pane

0x4fa8,	// (0x00033e7e) bg_popup_sub_pane_cp2_ParamLimits

0x4fbc,	// (0x00033e92) find_pane_cp2_ParamLimits

0x4fbc,	// (0x00033e92) find_pane_cp2

0x4fd2,	// (0x00033ea8) grid_toobar_pane_ParamLimits

0x512e,	// (0x00034004) list_form_gen_pane_vc_ParamLimits

0x512e,	// (0x00034004) list_form_gen_pane_vc

0x5144,	// (0x0003401a) scroll_pane_cp8_vc_ParamLimits

0x5144,	// (0x0003401a) scroll_pane_cp8_vc

0x51c0,	// (0x00034096) data_form_wide_pane_vc_ParamLimits

0x51c0,	// (0x00034096) data_form_wide_pane_vc

0x51cc,	// (0x000340a2) form_field_data_wide_pane_vc_g1

0x51d4,	// (0x000340aa) form_field_data_wide_pane_vc_t1_ParamLimits

0x51d4,	// (0x000340aa) form_field_data_wide_pane_vc_t1

0x3609,	// (0x000324df) input_focus_pane_cp6_vc_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_cp6_vc

0xd80a,	// (0x0003c6e0) list_midp_pane_ParamLimits

0x681e,	// (0x000356f4) scroll_pane_cp16_ParamLimits

0x681e,	// (0x000356f4) scroll_pane_cp16

0x5532,	// (0x00034408) button_value_adjust_pane_ParamLimits

0x5532,	// (0x00034408) button_value_adjust_pane

0xda06,	// (0x0003c8dc) button_value_adjust_pane_cp6_ParamLimits

0xda06,	// (0x0003c8dc) button_value_adjust_pane_cp6

0xdb20,	// (0x0003c9f6) settings_code_pane_cp_ParamLimits

0xdb20,	// (0x0003c9f6) settings_code_pane_cp

0x2cb3,	// (0x00031b89) cell_touch_pane_g1

0x2cb3,	// (0x00031b89) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0003e5f5) cell_touch_pane_g

0xdca8,	// (0x0003cb7e) cell_touch_pane_cp_ParamLimits

0xdca8,	// (0x0003cb7e) cell_touch_pane_cp

0xdcc4,	// (0x0003cb9a) cell_touch_pane_ParamLimits

0xdcc4,	// (0x0003cb9a) cell_touch_pane

0x2cb3,	// (0x00031b89) scroll_sc2_down_pane_g1

0x2cb3,	// (0x00031b89) scroll_sc2_up_pane_g1

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp4_vc

0x6bae,	// (0x00035a84) list_set_graphic_pane_vc_g1_ParamLimits

0x6bae,	// (0x00035a84) list_set_graphic_pane_vc_g1

0x6bba,	// (0x00035a90) list_set_graphic_pane_vc_g2_ParamLimits

0x6bba,	// (0x00035a90) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0003e8e1) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0003e8e1) list_set_graphic_pane_vc_g

0x6bc6,	// (0x00035a9c) text_primary_small_cp13_vc_ParamLimits

0x6bc6,	// (0x00035a9c) text_primary_small_cp13_vc

0x6bde,	// (0x00035ab4) list_set_graphic_pane_vc_ParamLimits

0x6bde,	// (0x00035ab4) list_set_graphic_pane_vc

0x2cbd,	// (0x00031b93) input_focus_pane_cp2_vc

0x2cb3,	// (0x00031b89) setting_code_pane_vc_g1

0x6bf2,	// (0x00035ac8) setting_code_pane_vc_t1

0x6c00,	// (0x00035ad6) set_text_pane_vc_t1_ParamLimits

0x6c00,	// (0x00035ad6) set_text_pane_vc_t1

0x2cbd,	// (0x00031b93) input_focus_pane_cp1_vc

0x6c1b,	// (0x00035af1) list_set_text_pane_vc

0x2cb3,	// (0x00031b89) setting_text_pane_vc_g1

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp2_vc

0x6c25,	// (0x00035afb) setting_slider_graphic_pane_vc_g1

0x6c2d,	// (0x00035b03) setting_slider_graphic_pane_vc_t1

0x6c3b,	// (0x00035b11) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0003e8e6) setting_slider_graphic_pane_vc_t

0x6c49,	// (0x00035b1f) slider_set_pane_cp_vc

0x6c51,	// (0x00035b27) slider_set_pane_vc_g1

0x6c5a,	// (0x00035b30) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0003e8eb) slider_set_pane_vc_g

0x3670,	// (0x00032546) set_opt_bg_pane_g1_copy1

0x3678,	// (0x0003254e) set_opt_bg_pane_g2_copy1

0x6c86,	// (0x00035b5c) set_opt_bg_pane_g3_copy1

0x3688,	// (0x0003255e) set_opt_bg_pane_g4_copy1

0x3690,	// (0x00032566) set_opt_bg_pane_g5_copy1

0x3698,	// (0x0003256e) set_opt_bg_pane_g6_copy1

0x6c90,	// (0x00035b66) set_opt_bg_pane_g7_copy1

0x6c98,	// (0x00035b6e) set_opt_bg_pane_g8_copy1

0x6ca2,	// (0x00035b78) set_opt_bg_pane_g9_copy1

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp_vc

0x6cac,	// (0x00035b82) setting_slider_pane_vc_t1

0x6c2d,	// (0x00035b03) setting_slider_pane_vc_t2

0x6c3b,	// (0x00035b11) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0003e8fa) setting_slider_pane_vc_t

0x6c49,	// (0x00035b1f) slider_set_pane_vc

0x13db,	// (0x000302b1) volume_set_pane_vc_g1

0x13e4,	// (0x000302ba) volume_set_pane_vc_g2

0x13ed,	// (0x000302c3) volume_set_pane_vc_g3

0x13f6,	// (0x000302cc) volume_set_pane_vc_g4

0x13ff,	// (0x000302d5) volume_set_pane_vc_g5

0x1408,	// (0x000302de) volume_set_pane_vc_g6

0x1411,	// (0x000302e7) volume_set_pane_vc_g7

0x141a,	// (0x000302f0) volume_set_pane_vc_g8

0x1423,	// (0x000302f9) volume_set_pane_vc_g9

0x142c,	// (0x00030302) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x0003e901) volume_set_pane_vc_g

0x6cbb,	// (0x00035b91) volume_set_pane_vc

0x6cc3,	// (0x00035b99) button_value_adjust_pane_cp1_vc

0x6ccd,	// (0x00035ba3) list_highlight_pane_cp2_vc

0x6cd6,	// (0x00035bac) list_set_pane_vc_ParamLimits

0x6cd6,	// (0x00035bac) list_set_pane_vc

0x6d40,	// (0x00035c16) main_pane_set_vc_t1_ParamLimits

0x6d40,	// (0x00035c16) main_pane_set_vc_t1

0x6d55,	// (0x00035c2b) main_pane_set_vc_t2_ParamLimits

0x6d55,	// (0x00035c2b) main_pane_set_vc_t2

0x6d67,	// (0x00035c3d) main_pane_set_vc_t3_ParamLimits

0x6d67,	// (0x00035c3d) main_pane_set_vc_t3

0x6d7b,	// (0x00035c51) main_pane_set_vc_t4_ParamLimits

0x6d7b,	// (0x00035c51) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x0003e916) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x0003e916) main_pane_set_vc_t

0x6d8f,	// (0x00035c65) setting_code_pane_vc_ParamLimits

0x6d8f,	// (0x00035c65) setting_code_pane_vc

0x6da0,	// (0x00035c76) setting_slider_graphic_pane_vc

0x6da0,	// (0x00035c76) setting_slider_pane_vc

0x6da0,	// (0x00035c76) setting_text_pane_vc

0x6da0,	// (0x00035c76) setting_volume_pane_vc

0x6daa,	// (0x00035c80) scroll_pane_cp121_vc

0x35e3,	// (0x000324b9) set_content_pane_vc

0x6de8,	// (0x00035cbe) button_value_adjust_pane_g1

0x6df1,	// (0x00035cc7) button_value_adjust_pane_g2

0x0001,

0xfa9a,	// (0x0003e970) button_value_adjust_pane_g

0x6dfa,	// (0x00035cd0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6dfa,	// (0x00035cd0) form_field_slider_wide_pane_vc_t1

0x6e0e,	// (0x00035ce4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e0e,	// (0x00035ce4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003e975) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003e975) form_field_slider_wide_pane_vc_t

0x3018,	// (0x00031eee) input_focus_pane_cp10_vc_ParamLimits

0x3018,	// (0x00031eee) input_focus_pane_cp10_vc

0x6e20,	// (0x00035cf6) slider_cont_pane_cp1_vc_ParamLimits

0x6e20,	// (0x00035cf6) slider_cont_pane_cp1_vc

0x6c51,	// (0x00035b27) slider_form_pane_g1_cp2

0x6c5a,	// (0x00035b30) slider_form_pane_g2_cp2

0x6e39,	// (0x00035d0f) form_field_slider_pane_vc_t3

0x6e47,	// (0x00035d1d) form_field_slider_pane_vc_t4

0x6e55,	// (0x00035d2b) slider_form_pane_vc_ParamLimits

0x6e55,	// (0x00035d2b) slider_form_pane_vc

0x6e62,	// (0x00035d38) form_field_slider_pane_vc_t1_ParamLimits

0x6e62,	// (0x00035d38) form_field_slider_pane_vc_t1

0x6e0e,	// (0x00035ce4) form_field_slider_pane_vc_t2_ParamLimits

0x6e0e,	// (0x00035ce4) form_field_slider_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003e985) form_field_slider_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003e985) form_field_slider_pane_vc_t

0x3018,	// (0x00031eee) input_focus_pane_cp9_vc_ParamLimits

0x3018,	// (0x00031eee) input_focus_pane_cp9_vc

0x6e7e,	// (0x00035d54) slider_cont_pane_vc_ParamLimits

0x6e7e,	// (0x00035d54) slider_cont_pane_vc

0x6e90,	// (0x00035d66) list_form_graphic_pane_cp_vc_ParamLimits

0x6e90,	// (0x00035d66) list_form_graphic_pane_cp_vc

0x51cc,	// (0x000340a2) form_field_popup_wide_pane_vc_g1

0x6ea5,	// (0x00035d7b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ea5,	// (0x00035d7b) form_field_popup_wide_pane_vc_t1

0x3609,	// (0x000324df) input_focus_pane_cp8_vc_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_cp8_vc

0x6ebc,	// (0x00035d92) list_form_wide_pane_vc_ParamLimits

0x6ebc,	// (0x00035d92) list_form_wide_pane_vc

0x6ec8,	// (0x00035d9e) list_form_graphic_pane_vc_g1

0x6ed0,	// (0x00035da6) list_form_graphic_pane_vc_t1_ParamLimits

0x6ed0,	// (0x00035da6) list_form_graphic_pane_vc_t1

0x2d9d,	// (0x00031c73) list_highlight_pane_cp5_vc_ParamLimits

0x2d9d,	// (0x00031c73) list_highlight_pane_cp5_vc

0x6eec,	// (0x00035dc2) list_form_graphic_pane_vc_ParamLimits

0x6eec,	// (0x00035dc2) list_form_graphic_pane_vc

0x51cc,	// (0x000340a2) form_field_popup_pane_vc_g1

0x6f02,	// (0x00035dd8) form_field_popup_pane_vc_t1_ParamLimits

0x6f02,	// (0x00035dd8) form_field_popup_pane_vc_t1

0x3609,	// (0x000324df) input_focus_pane_cp7_vc_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_cp7_vc

0x6f19,	// (0x00035def) list_form_pane_vc_ParamLimits

0x6f19,	// (0x00035def) list_form_pane_vc

0x6f25,	// (0x00035dfb) data_form_pane_vc_t1_ParamLimits

0x6f25,	// (0x00035dfb) data_form_pane_vc_t1

0x3670,	// (0x00032546) input_focus_pane_vc_g1

0x3678,	// (0x0003254e) input_focus_pane_vc_g2

0x3680,	// (0x00032556) input_focus_pane_vc_g3

0x3688,	// (0x0003255e) input_focus_pane_vc_g4

0x3690,	// (0x00032566) input_focus_pane_vc_g5

0x3698,	// (0x0003256e) input_focus_pane_vc_g6

0x36a0,	// (0x00032576) input_focus_pane_vc_g7

0x36a8,	// (0x0003257e) input_focus_pane_vc_g8

0x36b0,	// (0x00032586) input_focus_pane_vc_g9

0x2cb3,	// (0x00031b89) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0003e57e) input_focus_pane_vc_g

0x51c0,	// (0x00034096) data_form_pane_vc_ParamLimits

0x51c0,	// (0x00034096) data_form_pane_vc

0x51cc,	// (0x000340a2) form_field_data_pane_vc_g1

0x6f40,	// (0x00035e16) form_field_data_pane_vc_t1_ParamLimits

0x6f40,	// (0x00035e16) form_field_data_pane_vc_t1

0x3609,	// (0x000324df) input_focus_pane_vc_ParamLimits

0x3609,	// (0x000324df) input_focus_pane_vc

0x6f5a,	// (0x00035e30) button_value_adjust_pane_cp3_vc

0x6f62,	// (0x00035e38) button_value_adjust_pane_cp5_vc

0x6f6a,	// (0x00035e40) form_field_data_pane_vc_ParamLimits

0x6f6a,	// (0x00035e40) form_field_data_pane_vc

0x6f81,	// (0x00035e57) form_field_data_pane_vc_cp2

0x6f89,	// (0x00035e5f) form_field_data_wide_pane_vc_ParamLimits

0x6f89,	// (0x00035e5f) form_field_data_wide_pane_vc

0x6f9f,	// (0x00035e75) form_field_data_wide_pane_vc_cp2

0x6fa7,	// (0x00035e7d) form_field_popup_pane_vc_ParamLimits

0x6fa7,	// (0x00035e7d) form_field_popup_pane_vc

0x6fbe,	// (0x00035e94) form_field_popup_wide_pane_vc_ParamLimits

0x6fbe,	// (0x00035e94) form_field_popup_wide_pane_vc

0x6fd4,	// (0x00035eaa) form_field_slider_pane_vc_ParamLimits

0x6fd4,	// (0x00035eaa) form_field_slider_pane_vc

0x6fe7,	// (0x00035ebd) form_field_slider_wide_pane_vc_ParamLimits

0x6fe7,	// (0x00035ebd) form_field_slider_wide_pane_vc

0xdce2,	// (0x0003cbb8) grid_touch_1_pane_ParamLimits

0xdce2,	// (0x0003cbb8) grid_touch_1_pane

0xdcf6,	// (0x0003cbcc) grid_touch_2_pane_ParamLimits

0xdcf6,	// (0x0003cbcc) grid_touch_2_pane

0x70bc,	// (0x00035f92) touch_pane_g1_ParamLimits

0x70bc,	// (0x00035f92) touch_pane_g1

0x701e,	// (0x00035ef4) cell_app_pane_cp_wide_ParamLimits

0x701e,	// (0x00035ef4) cell_app_pane_cp_wide

0x702f,	// (0x00035f05) grid_popup_fast_wide_pane_ParamLimits

0x702f,	// (0x00035f05) grid_popup_fast_wide_pane

0x7043,	// (0x00035f19) scroll_pane_cp19_ParamLimits

0x7043,	// (0x00035f19) scroll_pane_cp19

0x2cbd,	// (0x00031b93) bg_popup_window_pane_cp20

0x7057,	// (0x00035f2d) listscroll_popup_fast_wide_pane

0x37d6,	// (0x000326ac) grid_indicator_nsta_pane

0x705f,	// (0x00035f35) clock_nsta_pane_g1

0x7068,	// (0x00035f3e) clock_nsta_pane_t1

0xdd20,	// (0x0003cbf6) cell_indicator_nsta_pane_ParamLimits

0xdd20,	// (0x0003cbf6) cell_indicator_nsta_pane

0x70bc,	// (0x00035f92) cell_indicator_nsta_pane_g1

0xdd39,	// (0x0003cc0f) cell_indicator_nsta_pane_g2

0x0001,

0xfab9,	// (0x0003e98f) cell_indicator_nsta_pane_g

0x70e0,	// (0x00035fb6) clock_nsta_pane_cp

0x70e8,	// (0x00035fbe) indicator_nsta_pane_cp

0x70f1,	// (0x00035fc7) nsta_clock_indic_pane_g1

0x2e66,	// (0x00031d3c) grid_indicator_pane

0x3ba8,	// (0x00032a7e) scroll_pane_cp29

0x0f80,	// (0x0002fe56) indicator_nsta_pane_cp2_ParamLimits

0x0f80,	// (0x0002fe56) indicator_nsta_pane_cp2

0x2d9d,	// (0x00031c73) main_apps_wheel_pane

0x53b9,	// (0x0003428f) form_midp_field_text_pane_ParamLimits

0x5504,	// (0x000343da) scroll_bar_cp050_ParamLimits

0x715a,	// (0x00036030) cell_indicator_pane_ParamLimits

0x715a,	// (0x00036030) cell_indicator_pane

0x7171,	// (0x00036047) cell_indicator_pane_g1

0xdd4f,	// (0x0003cc25) grid_wheel_folder_pane_ParamLimits

0xdd4f,	// (0x0003cc25) grid_wheel_folder_pane

0xdd5d,	// (0x0003cc33) list_wheel_apps_pane_ParamLimits

0xdd5d,	// (0x0003cc33) list_wheel_apps_pane

0xdd6b,	// (0x0003cc41) main_apps_wheel_pane_g1_ParamLimits

0xdd6b,	// (0x0003cc41) main_apps_wheel_pane_g1

0xdd77,	// (0x0003cc4d) main_apps_wheel_pane_g2_ParamLimits

0xdd77,	// (0x0003cc4d) main_apps_wheel_pane_g2

0x0001,

0xfad5,	// (0x0003e9ab) main_apps_wheel_pane_g_ParamLimits

0xfad5,	// (0x0003e9ab) main_apps_wheel_pane_g

0xdd85,	// (0x0003cc5b) main_apps_wheel_pane_t1_ParamLimits

0xdd85,	// (0x0003cc5b) main_apps_wheel_pane_t1

0xdd99,	// (0x0003cc6f) list_wheel_apps_pane_g1

0xdda1,	// (0x0003cc77) list_wheel_apps_pane_g2

0xdda9,	// (0x0003cc7f) list_wheel_apps_pane_g3

0xddb1,	// (0x0003cc87) list_wheel_apps_pane_g4

0xddbb,	// (0x0003cc91) list_wheel_apps_pane_g5

0x0004,

0xfada,	// (0x0003e9b0) list_wheel_apps_pane_g

0x40ee,	// (0x00032fc4) navi_icon_text_pane

0xd366,	// (0x0003c23c) aid_fill_nsta

0xddd2,	// (0x0003cca8) navi_icon_text_pane_g1

0xddde,	// (0x0003ccb4) navi_icon_text_pane_t1

0xcbb3,	// (0x0003ba89) list_set_graphic_pane_t1_ParamLimits

0xcbb3,	// (0x0003ba89) list_set_graphic_pane_t1

0x5c53,	// (0x00034b29) popup_midp_note_alarm_window_t6_ParamLimits

0x5c53,	// (0x00034b29) popup_midp_note_alarm_window_t6

0x5c65,	// (0x00034b3b) popup_midp_note_alarm_window_t7_ParamLimits

0x5c65,	// (0x00034b3b) popup_midp_note_alarm_window_t7

0x5c77,	// (0x00034b4d) popup_midp_note_alarm_window_t8_ParamLimits

0x5c77,	// (0x00034b4d) popup_midp_note_alarm_window_t8

0x5c89,	// (0x00034b5f) popup_midp_note_alarm_window_t9_ParamLimits

0x5c89,	// (0x00034b5f) popup_midp_note_alarm_window_t9

0x5c9b,	// (0x00034b71) popup_midp_note_alarm_window_t10_ParamLimits

0x5c9b,	// (0x00034b71) popup_midp_note_alarm_window_t10

0x5cad,	// (0x00034b83) popup_midp_note_alarm_window_t11_ParamLimits

0x5cad,	// (0x00034b83) popup_midp_note_alarm_window_t11

0x5ccb,	// (0x00034ba1) scroll_pane_cp17_ParamLimits

0x5ccb,	// (0x00034ba1) scroll_pane_cp17

0x13db,	// (0x000302b1) volume_small_pane_cp_g1

0x16d0,	// (0x000305a6) volume_small_pane_cp_g2

0x16d9,	// (0x000305af) volume_small_pane_cp_g3

0x16e2,	// (0x000305b8) volume_small_pane_cp_g4

0x16eb,	// (0x000305c1) volume_small_pane_cp_g5

0x16f4,	// (0x000305ca) volume_small_pane_cp_g6

0x16fd,	// (0x000305d3) volume_small_pane_cp_g7

0x1706,	// (0x000305dc) volume_small_pane_cp_g8

0x170f,	// (0x000305e5) volume_small_pane_cp_g9

0x1718,	// (0x000305ee) volume_small_pane_cp_g10

0x4349,	// (0x0003321f) midp_ticker_pane_g1_ParamLimits

0x4355,	// (0x0003322b) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0003e646) midp_ticker_pane_g_ParamLimits

0xcc73,	// (0x0003bb49) midp_ticker_pane_t1_ParamLimits

0xd386,	// (0x0003c25c) aid_fill_nsta_2

0x54f0,	// (0x000343c6) list_form2_midp_pane

0x6640,	// (0x00035516) midp_editing_number_pane_ParamLimits

0x664f,	// (0x00035525) midp_ticker_pane_ParamLimits

0x7258,	// (0x0003612e) form2_midp_field_pane

0x727c,	// (0x00036152) scroll_pane_cp51

0x729c,	// (0x00036172) form2_midp_button_pane_ParamLimits

0x729c,	// (0x00036172) form2_midp_button_pane

0x72ae,	// (0x00036184) form2_midp_content_pane_ParamLimits

0x72ae,	// (0x00036184) form2_midp_content_pane

0x72c8,	// (0x0003619e) form2_midp_field_choice_group_pane

0x72d0,	// (0x000361a6) form2_midp_field_pane_g1

0x72d8,	// (0x000361ae) form2_midp_field_pane_g2

0x72e0,	// (0x000361b6) form2_midp_field_pane_g3

0x72e8,	// (0x000361be) form2_midp_field_pane_g4

0x0003,

0xfaff,	// (0x0003e9d5) form2_midp_field_pane_g

0x72f0,	// (0x000361c6) form2_midp_gauge_slider_pane

0x72f8,	// (0x000361ce) form2_midp_gauge_wait_pane

0x7300,	// (0x000361d6) form2_midp_image_pane_ParamLimits

0x7300,	// (0x000361d6) form2_midp_image_pane

0x731b,	// (0x000361f1) form2_midp_label_pane_ParamLimits

0x731b,	// (0x000361f1) form2_midp_label_pane

0xde0c,	// (0x0003cce2) form2_midp_label_pane_cp_ParamLimits

0xde0c,	// (0x0003cce2) form2_midp_label_pane_cp

0x7355,	// (0x0003622b) form2_midp_string_pane_ParamLimits

0x7355,	// (0x0003622b) form2_midp_string_pane

0x28b2,	// (0x00031788) form2_midp_text_pane_ParamLimits

0x28b2,	// (0x00031788) form2_midp_text_pane

0x7367,	// (0x0003623d) form2_midp_time_pane

0x7377,	// (0x0003624d) input_focus_pane_cp51_ParamLimits

0x7377,	// (0x0003624d) input_focus_pane_cp51

0x738f,	// (0x00036265) form2_midp_label_pane_t1_ParamLimits

0x738f,	// (0x00036265) form2_midp_label_pane_t1

0x28cd,	// (0x000317a3) form2_mdip_text_pane_t1_ParamLimits

0x28cd,	// (0x000317a3) form2_mdip_text_pane_t1

0x28eb,	// (0x000317c1) form2_midp_time_pane_t1

0x73d8,	// (0x000362ae) form2_midp_gauge_slider_pane_t1

0xde2d,	// (0x0003cd03) form2_midp_gauge_slider_pane_t2

0xde3f,	// (0x0003cd15) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb08,	// (0x0003e9de) form2_midp_gauge_slider_pane_t

0x740e,	// (0x000362e4) form2_midp_slider_pane

0x741a,	// (0x000362f0) form2_midp_gauge_wait_pane_t1

0x7428,	// (0x000362fe) form2_midp_wait_pane_ParamLimits

0x7428,	// (0x000362fe) form2_midp_wait_pane

0xde51,	// (0x0003cd27) list_single_2graphic_pane_cp4_ParamLimits

0xde51,	// (0x0003cd27) list_single_2graphic_pane_cp4

0xd797,	// (0x0003c66d) list_single_midp_graphic_pane_cp_ParamLimits

0xd797,	// (0x0003c66d) list_single_midp_graphic_pane_cp

0x2cbd,	// (0x00031b93) list_highlight_pane_cp20

0x7482,	// (0x00036358) list_single_2graphic_pane_g1_cp4

0x748a,	// (0x00036360) list_single_2graphic_pane_g2_cp4

0x7492,	// (0x00036368) list_single_2graphic_pane_t1_cp4

0x2d9d,	// (0x00031c73) list_highlight_pane_cp21

0x74a1,	// (0x00036377) list_single_midp_graphic_pane_g4_cp

0x74b0,	// (0x00036386) list_single_midp_graphic_pane_t1_cp

0xde66,	// (0x0003cd3c) form2_mdip_string_pane_t1_ParamLimits

0xde66,	// (0x0003cd3c) form2_mdip_string_pane_t1

0x2cbd,	// (0x00031b93) bg_wml_button_pane_cp2

0x2cb3,	// (0x00031b89) form2_midp_image_pane_g1

0x084f,	// (0x0002f725) list_double_large_graphic_pane_g5_ParamLimits

0x084f,	// (0x0002f725) list_double_large_graphic_pane_g5

0xcbcb,	// (0x0003baa1) midp_form_pane_ParamLimits

0x2d9d,	// (0x00031c73) main_apps_wheel_pane_ParamLimits

0xd0c2,	// (0x0003bf98) popup_preview_window_ParamLimits

0xd0c2,	// (0x0003bf98) popup_preview_window

0x4b30,	// (0x00033a06) popup_touch_info_window_ParamLimits

0x4b30,	// (0x00033a06) popup_touch_info_window

0x4b4e,	// (0x00033a24) popup_touch_menu_window_ParamLimits

0x4b4e,	// (0x00033a24) popup_touch_menu_window

0x2ca9,	// (0x00031b7f) bg_popup_sub_pane_cp6

0x75be,	// (0x00036494) list_touch_menu_pane

0x75c6,	// (0x0003649c) list_single_touch_menu_pane_ParamLimits

0x75c6,	// (0x0003649c) list_single_touch_menu_pane

0x75dd,	// (0x000364b3) list_single_touch_menu_pane_t1

0x2d9d,	// (0x00031c73) bg_popup_sub_pane_cp7_ParamLimits

0x2d9d,	// (0x00031c73) bg_popup_sub_pane_cp7

0x75eb,	// (0x000364c1) heading_sub_pane

0x75f3,	// (0x000364c9) list_touch_info_pane_ParamLimits

0x75f3,	// (0x000364c9) list_touch_info_pane

0x7602,	// (0x000364d8) list_single_touch_info_pane_ParamLimits

0x7602,	// (0x000364d8) list_single_touch_info_pane

0x7614,	// (0x000364ea) list_single_touch_info_pane_t1

0x7622,	// (0x000364f8) list_single_touch_info_pane_t2

0x0001,

0xfb16,	// (0x0003e9ec) list_single_touch_info_pane_t

0x426e,	// (0x00033144) bg_popup_heading_pane_cp

0x7630,	// (0x00036506) heading_sub_pane_t1

0x515a,	// (0x00034030) bg_popup_preview_window_pane_cp_ParamLimits

0x515a,	// (0x00034030) bg_popup_preview_window_pane_cp

0x75eb,	// (0x000364c1) heading_preview_pane

0x75f3,	// (0x000364c9) list_preview_pane_ParamLimits

0x75f3,	// (0x000364c9) list_preview_pane

0x763e,	// (0x00036514) popup_preview_window_g1

0x7602,	// (0x000364d8) list_single_preview_pane_ParamLimits

0x7602,	// (0x000364d8) list_single_preview_pane

0x7646,	// (0x0003651c) list_single_preview_pane_g1

0x764e,	// (0x00036524) list_single_preview_pane_t1

0x7614,	// (0x000364ea) list_single_preview_pane_t2

0x0001,

0xfb1b,	// (0x0003e9f1) list_single_preview_pane_t

0x765c,	// (0x00036532) bg_popup_heading_pane_cp2_ParamLimits

0x765c,	// (0x00036532) bg_popup_heading_pane_cp2

0x7672,	// (0x00036548) heading_preview_pane_g1

0x767a,	// (0x00036550) heading_preview_pane_t1_ParamLimits

0x767a,	// (0x00036550) heading_preview_pane_t1

0x2e89,	// (0x00031d5f) soft_indicator_pane_t1_ParamLimits

0x357c,	// (0x00032452) scroll_pane_ParamLimits

0x3aa1,	// (0x00032977) scroll_sc2_left_pane

0x3aaa,	// (0x00032980) scroll_sc2_right_pane

0x3ac9,	// (0x0003299f) scroll_bg_pane_g1_ParamLimits

0x3ade,	// (0x000329b4) scroll_bg_pane_g2_ParamLimits

0x3af6,	// (0x000329cc) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0003e5d5) scroll_bg_pane_g_ParamLimits

0x3ac9,	// (0x0003299f) scroll_handle_pane_g1_ParamLimits

0x3b18,	// (0x000329ee) scroll_handle_pane_g2_ParamLimits

0x3af6,	// (0x000329cc) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0003e5dc) scroll_handle_pane_g_ParamLimits

0x45fc,	// (0x000334d2) popup_choice_list_window_ParamLimits

0x45fc,	// (0x000334d2) popup_choice_list_window

0x4fb4,	// (0x00033e8a) choice_list_pane

0x5036,	// (0x00033f0c) cell_toolbar_pane_t1

0x505e,	// (0x00033f34) toolbar_button_pane_ParamLimits

0x618b,	// (0x00035061) ai_gene_pane_1_t2_ParamLimits

0x618b,	// (0x00035061) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0003e7f4) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0003e7f4) ai_gene_pane_1_t

0x7697,	// (0x0003656d) scroll_sc2_left_pane_g1

0x7697,	// (0x0003656d) scroll_sc2_right_pane_g1

0x45d4,	// (0x000334aa) bg_popup_sub_pane_cp10

0x76a1,	// (0x00036577) list_choice_list_pane

0x76b8,	// (0x0003658e) list_single_choice_list_pane_ParamLimits

0x76b8,	// (0x0003658e) list_single_choice_list_pane

0x76cc,	// (0x000365a2) list_single_choice_list_pane_g1

0x76d4,	// (0x000365aa) list_single_choice_list_pane_t1_ParamLimits

0x76d4,	// (0x000365aa) list_single_choice_list_pane_t1

0x76e9,	// (0x000365bf) choice_list_pane_g1

0x76f1,	// (0x000365c7) choice_list_pane_t1

0x2ca9,	// (0x00031b7f) input_focus_pane_cp11

0x397e,	// (0x00032854) title_pane_stacon_g2_ParamLimits

0x397e,	// (0x00032854) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0003e5bb) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003e5bb) title_pane_stacon_g

0x426e,	// (0x00033144) cursor_press_pane

0xcd8d,	// (0x0003bc63) popup_fep_hwr_window_ParamLimits

0xcd8d,	// (0x0003bc63) popup_fep_hwr_window

0x471e,	// (0x000335f4) popup_fep_vkb_window_ParamLimits

0x471e,	// (0x000335f4) popup_fep_vkb_window

0x76ff,	// (0x000365d5) cursor_press_pane_g1

0x0002,

0xfb44,	// (0x0003ea1a) fep_vkb_side_pane_g_ParamLimits

0x175a,	// (0x00030630) fep_hwr_candidate_pane_ParamLimits

0x175a,	// (0x00030630) fep_hwr_candidate_pane

0x1784,	// (0x0003065a) fep_hwr_side_pane_ParamLimits

0x1784,	// (0x0003065a) fep_hwr_side_pane

0x17a4,	// (0x0003067a) fep_hwr_top_pane_ParamLimits

0x17a4,	// (0x0003067a) fep_hwr_top_pane

0x17bc,	// (0x00030692) fep_hwr_write_pane_ParamLimits

0x17bc,	// (0x00030692) fep_hwr_write_pane

0xfb44,	// (0x0003ea1a) fep_vkb_side_pane_g

0x7707,	// (0x000365dd) fep_hwr_top_pane_g1

0x7719,	// (0x000365ef) fep_hwr_top_pane_g2

0x17f6,	// (0x000306cc) fep_hwr_top_pane_g3

0x0002,

0xfb20,	// (0x0003e9f6) fep_hwr_top_pane_g

0x180b,	// (0x000306e1) fep_hwr_top_text_pane

0x3c91,	// (0x00032b67) fep_hwr_top_text_pane_g1

0x774f,	// (0x00036625) fep_hwr_top_text_pane_t1

0x1901,	// (0x000307d7) fep_hwr_candidate_pane_g1

0x79a2,	// (0x00036878) fep_vkb_keypad_pane_g3_ParamLimits

0x79a2,	// (0x00036878) fep_vkb_keypad_pane_g3

0x79ca,	// (0x000368a0) fep_vkb_keypad_pane_g4_ParamLimits

0x79ca,	// (0x000368a0) fep_vkb_keypad_pane_g4

0x7a39,	// (0x0003690f) fep_vkb_bottom_pane_g2_ParamLimits

0x7a39,	// (0x0003690f) fep_vkb_bottom_pane_g2

0x0001,

0xfb4b,	// (0x0003ea21) fep_vkb_bottom_pane_g_ParamLimits

0xfb4b,	// (0x0003ea21) fep_vkb_bottom_pane_g

0x7697,	// (0x0003656d) cell_vkb_side_pane_g2

0x0001,

0xfb55,	// (0x0003ea2b) cell_vkb_side_pane_g

0x7ac4,	// (0x0003699a) cell_vkb_side_pane_t1

0x7ad2,	// (0x000369a8) cell_vkb_side_pane_t1_copy1

0x7697,	// (0x0003656d) bg_fep_vkb_candidate_pane_g2

0x7bfe,	// (0x00036ad4) cell_vkb_candidate_pane_ParamLimits

0x775d,	// (0x00036633) aid_size_cell_vkb_ParamLimits

0x775d,	// (0x00036633) aid_size_cell_vkb

0x7bfe,	// (0x00036ad4) cell_vkb_candidate_pane

0x1928,	// (0x000307fe) bg_popup_fep_shadow_pane_g1

0xdef4,	// (0x0003cdca) fep_vkb_bottom_pane_ParamLimits

0xdef4,	// (0x0003cdca) fep_vkb_bottom_pane

0x7821,	// (0x000366f7) fep_vkb_candidate_pane_ParamLimits

0x7821,	// (0x000366f7) fep_vkb_candidate_pane

0xdf19,	// (0x0003cdef) fep_vkb_keypad_pane_ParamLimits

0xdf19,	// (0x0003cdef) fep_vkb_keypad_pane

0xdf55,	// (0x0003ce2b) fep_vkb_side_pane_ParamLimits

0xdf55,	// (0x0003ce2b) fep_vkb_side_pane

0xdf91,	// (0x0003ce67) fep_vkb_top_pane_ParamLimits

0xdf91,	// (0x0003ce67) fep_vkb_top_pane

0x78fb,	// (0x000367d1) fep_vkb_top_pane_g1_ParamLimits

0x78fb,	// (0x000367d1) fep_vkb_top_pane_g1

0x790a,	// (0x000367e0) fep_vkb_top_pane_g2_ParamLimits

0x790a,	// (0x000367e0) fep_vkb_top_pane_g2

0x7919,	// (0x000367ef) fep_vkb_top_pane_g3_ParamLimits

0x7919,	// (0x000367ef) fep_vkb_top_pane_g3

0x0003,

0xfb3b,	// (0x0003ea11) fep_vkb_top_pane_g_ParamLimits

0xfb3b,	// (0x0003ea11) fep_vkb_top_pane_g

0x7937,	// (0x0003680d) fep_vkb_top_text_pane_ParamLimits

0x7937,	// (0x0003680d) fep_vkb_top_text_pane

0xdfcd,	// (0x0003cea3) fep_vkb_side_pane_g1_ParamLimits

0xdfcd,	// (0x0003cea3) fep_vkb_side_pane_g1

0x7991,	// (0x00036867) grid_vkb_side_pane_ParamLimits

0x7991,	// (0x00036867) grid_vkb_side_pane

0x1930,	// (0x00030806) bg_popup_fep_shadow_pane_g2

0x1939,	// (0x0003080f) bg_popup_fep_shadow_pane_g3

0x1941,	// (0x00030817) bg_popup_fep_shadow_pane_g4

0x194a,	// (0x00030820) bg_popup_fep_shadow_pane_g5

0x1954,	// (0x0003082a) bg_popup_fep_shadow_pane_g6

0x195c,	// (0x00030832) bg_popup_fep_shadow_pane_g7

0x3688,	// (0x0003255e) bg_popup_fep_shadow_pane_g8

0x79e8,	// (0x000368be) grid_vkb_keypad_number_pane_ParamLimits

0x79e8,	// (0x000368be) grid_vkb_keypad_number_pane

0x79f8,	// (0x000368ce) grid_vkb_keypad_pane_ParamLimits

0x79f8,	// (0x000368ce) grid_vkb_keypad_pane

0x7a1e,	// (0x000368f4) fep_vkb_bottom_pane_g1_ParamLimits

0x7a1e,	// (0x000368f4) fep_vkb_bottom_pane_g1

0x7a47,	// (0x0003691d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a47,	// (0x0003691d) grid_vkb_keypad_bottom_left_pane

0x7a5c,	// (0x00036932) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a5c,	// (0x00036932) grid_vkb_keypad_bottom_right_pane

0x7a71,	// (0x00036947) fep_vkb_top_text_pane_g1

0xe014,	// (0x0003ceea) fep_vkb_top_text_pane_t1

0xe026,	// (0x0003cefc) cell_vkb_side_pane_ParamLimits

0xe026,	// (0x0003cefc) cell_vkb_side_pane

0x7697,	// (0x0003656d) cell_vkb_side_pane_g1

0x7ae0,	// (0x000369b6) cell_vkb_keypad_pane_ParamLimits

0x7ae0,	// (0x000369b6) cell_vkb_keypad_pane

0x7b55,	// (0x00036a2b) cell_vkb_keypad_pane_g1

0x0008,

0xfb68,	// (0x0003ea3e) bg_popup_fep_shadow_pane_g

0x196e,	// (0x00030844) cell_hwr_side_pane_g1

0x196e,	// (0x00030844) cell_hwr_side_pane_g2

0x7b5f,	// (0x00036a35) cell_vkb_keypad_pane_t1

0xe03c,	// (0x0003cf12) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe03c,	// (0x0003cf12) cell_vkb_keypad_bottom_left_pane

0xe051,	// (0x0003cf27) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe051,	// (0x0003cf27) cell_vkb_keypad_bottom_right_pane

0x7697,	// (0x0003656d) cell_vkb_keypad_bottom_left_pane_g1

0x7697,	// (0x0003656d) cell_vkb_keypad_bottom_right_pane_g1

0x7bc3,	// (0x00036a99) cell_vkb_keypad_number_pane_ParamLimits

0x7bc3,	// (0x00036a99) cell_vkb_keypad_number_pane

0x7be2,	// (0x00036ab8) cell_vkb_keypad_number_pane_g1

0x7bec,	// (0x00036ac2) cell_vkb_keypad_number_pane_g2

0x7bf5,	// (0x00036acb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5a,	// (0x0003ea30) cell_vkb_keypad_number_pane_g

0x7b5f,	// (0x00036a35) cell_vkb_keypad_number_pane_t1

0x7c19,	// (0x00036aef) fep_vkb_candidate_pane_g1

0x0001,

0xfb7b,	// (0x0003ea51) cell_hwr_side_pane_g

0x7c32,	// (0x00036b08) cell_hwr_side_pane_t1

0x1978,	// (0x0003084e) cell_hwr_side_pane_t1_copy1

0x1986,	// (0x0003085c) cell_hwr_candidate_pane_g1

0x19b5,	// (0x0003088b) cell_hwr_candidate_pane_t1

0x7697,	// (0x0003656d) cell_vkb_candidate_pane_g2

0x7c97,	// (0x00036b6d) cell_vkb_candidate_pane_t1

0x1721,	// (0x000305f7) bg_popup_fep_shadow_pane_ParamLimits

0x1721,	// (0x000305f7) bg_popup_fep_shadow_pane

0x17d6,	// (0x000306ac) bg_fep_hwr_top_pane_g4

0x772b,	// (0x00036601) bg_hwr_side_pane_g1_ParamLimits

0x772b,	// (0x00036601) bg_hwr_side_pane_g1

0xbf77,	// (0x0003ae4d) cell_hwr_side_pane_ParamLimits

0xbf77,	// (0x0003ae4d) cell_hwr_side_pane

0x1882,	// (0x00030758) fep_hwr_write_pane_g1_ParamLimits

0x1882,	// (0x00030758) fep_hwr_write_pane_g1

0x188f,	// (0x00030765) fep_hwr_write_pane_g2_ParamLimits

0x188f,	// (0x00030765) fep_hwr_write_pane_g2

0x189c,	// (0x00030772) fep_hwr_write_pane_g3_ParamLimits

0x189c,	// (0x00030772) fep_hwr_write_pane_g3

0xbf97,	// (0x0003ae6d) fep_hwr_write_pane_g4_ParamLimits

0xbf97,	// (0x0003ae6d) fep_hwr_write_pane_g4

0x0005,

0xfb27,	// (0x0003e9fd) fep_hwr_write_pane_g_ParamLimits

0xfb27,	// (0x0003e9fd) fep_hwr_write_pane_g

0x17d6,	// (0x000306ac) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x17d6,	// (0x000306ac) bg_fep_hwr_candidate_pane_g2

0x18bf,	// (0x00030795) cell_hwr_candidate_pane_ParamLimits

0x18bf,	// (0x00030795) cell_hwr_candidate_pane

0x1901,	// (0x000307d7) fep_hwr_candidate_pane_g1_ParamLimits

0x778b,	// (0x00036661) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x778b,	// (0x00036661) bg_popup_fep_shadow_pane_cp2

0x7929,	// (0x000367ff) fep_vkb_top_pane_g4_ParamLimits

0x7929,	// (0x000367ff) fep_vkb_top_pane_g4

0x796f,	// (0x00036845) fep_vkb_side_pane_g2_ParamLimits

0x796f,	// (0x00036845) fep_vkb_side_pane_g2

0xb939,	// (0x0003a80f) list_setting_pane_t4_ParamLimits

0xb939,	// (0x0003a80f) list_setting_pane_t4

0xb9d3,	// (0x0003a8a9) list_setting_number_pane_t5_ParamLimits

0xb9d3,	// (0x0003a8a9) list_setting_number_pane_t5

0xcaf6,	// (0x0003b9cc) list_double_heading_pane_cp2_ParamLimits

0xcaf6,	// (0x0003b9cc) list_double_heading_pane_cp2

0x3623,	// (0x000324f9) list_double_heading_pane_g1_cp2_ParamLimits

0x3623,	// (0x000324f9) list_double_heading_pane_g1_cp2

0x362f,	// (0x00032505) list_double_heading_pane_g2_cp2_ParamLimits

0x362f,	// (0x00032505) list_double_heading_pane_g2_cp2

0x7ca5,	// (0x00036b7b) list_double_heading_pane_t1_cp2_ParamLimits

0x7ca5,	// (0x00036b7b) list_double_heading_pane_t1_cp2

0x7cbb,	// (0x00036b91) list_double_heading_pane_t2_cp2_ParamLimits

0x7cbb,	// (0x00036b91) list_double_heading_pane_t2_cp2

0x2c91,	// (0x00031b67) aid_value_unit2

0x03ec,	// (0x0002f2c2) popup_preview_fixed_window

0x3026,	// (0x00031efc) bg_popup_preview_window_pane_cp02

0x7ccd,	// (0x00036ba3) list_preview_fixed_pane

0x7d13,	// (0x00036be9) list_empty_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_empty_pane_fp

0x7d13,	// (0x00036be9) list_single_cale_day_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_cale_day_pane_fp

0x7d13,	// (0x00036be9) list_single_graphic_heading_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_graphic_heading_pane_fp

0x7d13,	// (0x00036be9) list_single_graphic_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_graphic_pane_fp

0x7d13,	// (0x00036be9) list_single_heading_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_heading_pane_fp

0x7d13,	// (0x00036be9) list_single_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_pane_fp

0x7d28,	// (0x00036bfe) list_single_pane_fp_g1_ParamLimits

0x7d28,	// (0x00036bfe) list_single_pane_fp_g1

0x28fe,	// (0x000317d4) list_single_pane_fp_g2_ParamLimits

0x28fe,	// (0x000317d4) list_single_pane_fp_g2

0x290a,	// (0x000317e0) list_single_pane_fp_g3_ParamLimits

0x290a,	// (0x000317e0) list_single_pane_fp_g3

0x7d34,	// (0x00036c0a) list_single_pane_fp_g4_ParamLimits

0x7d34,	// (0x00036c0a) list_single_pane_fp_g4

0x0003,

0xfb8e,	// (0x0003ea64) list_single_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003ea64) list_single_pane_fp_g

0x291e,	// (0x000317f4) list_single_pane_fp_t1_ParamLimits

0x291e,	// (0x000317f4) list_single_pane_fp_t1

0x2935,	// (0x0003180b) list_single_graphic_pane_fp_g1_ParamLimits

0x2935,	// (0x0003180b) list_single_graphic_pane_fp_g1

0x7d28,	// (0x00036bfe) list_single_graphic_pane_fp_g2_ParamLimits

0x7d28,	// (0x00036bfe) list_single_graphic_pane_fp_g2

0x28fe,	// (0x000317d4) list_single_graphic_pane_fp_g3_ParamLimits

0x28fe,	// (0x000317d4) list_single_graphic_pane_fp_g3

0x290a,	// (0x000317e0) list_single_graphic_pane_fp_g4_ParamLimits

0x290a,	// (0x000317e0) list_single_graphic_pane_fp_g4

0x7d34,	// (0x00036c0a) list_single_graphic_pane_fp_g5_ParamLimits

0x7d34,	// (0x00036c0a) list_single_graphic_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ea6d) list_single_graphic_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ea6d) list_single_graphic_pane_fp_g

0x2941,	// (0x00031817) list_single_graphic_pane_fp_t1_ParamLimits

0x2941,	// (0x00031817) list_single_graphic_pane_fp_t1

0x2935,	// (0x0003180b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2935,	// (0x0003180b) list_single_graphic_heading_pane_fp_g1

0x7d28,	// (0x00036bfe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d28,	// (0x00036bfe) list_single_graphic_heading_pane_fp_g2

0x28fe,	// (0x000317d4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x28fe,	// (0x000317d4) list_single_graphic_heading_pane_fp_g3

0x290a,	// (0x000317e0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x290a,	// (0x000317e0) list_single_graphic_heading_pane_fp_g4

0x7d34,	// (0x00036c0a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d34,	// (0x00036c0a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ea6d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ea6d) list_single_graphic_heading_pane_fp_g

0x2957,	// (0x0003182d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2957,	// (0x0003182d) list_single_graphic_heading_pane_fp_t1

0x296d,	// (0x00031843) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x296d,	// (0x00031843) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba2,	// (0x0003ea78) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba2,	// (0x0003ea78) list_single_graphic_heading_pane_fp_t

0x297f,	// (0x00031855) list_single_cale_day_pane_fp_g1_ParamLimits

0x297f,	// (0x00031855) list_single_cale_day_pane_fp_g1

0x7d40,	// (0x00036c16) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d40,	// (0x00036c16) list_single_cale_day_pane_fp_g2

0x29b7,	// (0x0003188d) list_single_cale_day_pane_fp_g3_ParamLimits

0x29b7,	// (0x0003188d) list_single_cale_day_pane_fp_g3

0x29df,	// (0x000318b5) list_single_cale_day_pane_fp_g4_ParamLimits

0x29df,	// (0x000318b5) list_single_cale_day_pane_fp_g4

0x2a03,	// (0x000318d9) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a03,	// (0x000318d9) list_single_cale_day_pane_fp_g5

0x0004,

0xfba7,	// (0x0003ea7d) list_single_cale_day_pane_fp_g_ParamLimits

0xfba7,	// (0x0003ea7d) list_single_cale_day_pane_fp_g

0x2a27,	// (0x000318fd) list_single_cale_day_pane_fp_t1_ParamLimits

0x2a27,	// (0x000318fd) list_single_cale_day_pane_fp_t1

0x2a4d,	// (0x00031923) list_single_cale_day_pane_fp_t2_ParamLimits

0x2a4d,	// (0x00031923) list_single_cale_day_pane_fp_t2

0x2a66,	// (0x0003193c) list_single_cale_day_pane_fp_t3_ParamLimits

0x2a66,	// (0x0003193c) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb2,	// (0x0003ea88) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb2,	// (0x0003ea88) list_single_cale_day_pane_fp_t

0x7d28,	// (0x00036bfe) list_empty_pane_fp_g1_ParamLimits

0x7d28,	// (0x00036bfe) list_empty_pane_fp_g1

0x2a7f,	// (0x00031955) list_empty_pane_fp_t1

0x2a8d,	// (0x00031963) list_empty_pane_fp_t2

0x0001,

0xfbb9,	// (0x0003ea8f) list_empty_pane_fp_t

0x7d28,	// (0x00036bfe) list_single_heading_pane_fp_g1_ParamLimits

0x7d28,	// (0x00036bfe) list_single_heading_pane_fp_g1

0x28fe,	// (0x000317d4) list_single_heading_pane_fp_g2_ParamLimits

0x28fe,	// (0x000317d4) list_single_heading_pane_fp_g2

0x290a,	// (0x000317e0) list_single_heading_pane_fp_g3_ParamLimits

0x290a,	// (0x000317e0) list_single_heading_pane_fp_g3

0x0002,

0xfbbe,	// (0x0003ea94) list_single_heading_pane_fp_g_ParamLimits

0xfbbe,	// (0x0003ea94) list_single_heading_pane_fp_g

0x2a9b,	// (0x00031971) list_single_heading_pane_fp_t1_ParamLimits

0x2a9b,	// (0x00031971) list_single_heading_pane_fp_t1

0x2aad,	// (0x00031983) list_single_heading_pane_fp_t2_ParamLimits

0x2aad,	// (0x00031983) list_single_heading_pane_fp_t2

0x0001,

0xfbc5,	// (0x0003ea9b) list_single_heading_pane_fp_t_ParamLimits

0xfbc5,	// (0x0003ea9b) list_single_heading_pane_fp_t

0x3815,	// (0x000326eb) aid_size_cell_fast

0x2f96,	// (0x00031e6c) soft_indicator_pane_cp1_t1

0x3852,	// (0x00032728) cell_app_pane_cp2_ParamLimits

0x3852,	// (0x00032728) cell_app_pane_cp2

0x1743,	// (0x00030619) fep_hwr_candidate_drop_down_list_pane

0x191b,	// (0x000307f1) fep_hwr_candidate_pane_g3_ParamLimits

0x191b,	// (0x000307f1) fep_hwr_candidate_pane_g3

0xea67,	// (0x0003d93d) fep_hwr_candidate_pane_g4_ParamLimits

0xea67,	// (0x0003d93d) fep_hwr_candidate_pane_g4

0x0002,

0xfb34,	// (0x0003ea0a) fep_hwr_candidate_pane_g_ParamLimits

0xfb34,	// (0x0003ea0a) fep_hwr_candidate_pane_g

0x7810,	// (0x000366e6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7810,	// (0x000366e6) fep_vkb_candidate_drop_down_list_pane

0x7c21,	// (0x00036af7) fep_vkb_candidate_pane_g3

0x7c29,	// (0x00036aff) fep_vkb_candidate_pane_g4

0x0002,

0xfb61,	// (0x0003ea37) fep_vkb_candidate_pane_g

0x1986,	// (0x0003085c) cell_hwr_candidate_pane_g1_ParamLimits

0x1994,	// (0x0003086a) cell_hwr_candidate_pane_g3_ParamLimits

0x1994,	// (0x0003086a) cell_hwr_candidate_pane_g3

0x9491,	// (0x00038367) cell_hwr_candidate_pane_g4_ParamLimits

0x9491,	// (0x00038367) cell_hwr_candidate_pane_g4

0x0002,

0xfb80,	// (0x0003ea56) cell_hwr_candidate_pane_g_ParamLimits

0xfb80,	// (0x0003ea56) cell_hwr_candidate_pane_g

0x7c40,	// (0x00036b16) cell_vkb_candidate_pane_g3_ParamLimits

0x7c40,	// (0x00036b16) cell_vkb_candidate_pane_g3

0x7c5b,	// (0x00036b31) cell_vkb_candidate_pane_g4_ParamLimits

0x7c5b,	// (0x00036b31) cell_vkb_candidate_pane_g4

0x7d4c,	// (0x00036c22) cell_app_pane_cp2_g1_ParamLimits

0x7d4c,	// (0x00036c22) cell_app_pane_cp2_g1

0x7d6a,	// (0x00036c40) cell_app_pane_cp2_g2_ParamLimits

0x7d6a,	// (0x00036c40) cell_app_pane_cp2_g2

0x0001,

0xfbca,	// (0x0003eaa0) cell_app_pane_cp2_g_ParamLimits

0xfbca,	// (0x0003eaa0) cell_app_pane_cp2_g

0x7d76,	// (0x00036c4c) cell_app_pane_cp2_t1_ParamLimits

0x7d76,	// (0x00036c4c) cell_app_pane_cp2_t1

0x3609,	// (0x000324df) grid_highlight_pane_cp1_ParamLimits

0x3609,	// (0x000324df) grid_highlight_pane_cp1

0x19d3,	// (0x000308a9) cell_hwr_candidate_pane_cp1_ParamLimits

0x19d3,	// (0x000308a9) cell_hwr_candidate_pane_cp1

0x1986,	// (0x0003085c) fep_hwr_candidate_drop_down_list_pane_g1

0x19f2,	// (0x000308c8) fep_hwr_candidate_drop_down_list_pane_g2

0x19ff,	// (0x000308d5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0003eaa5) fep_hwr_candidate_drop_down_list_pane_g

0x1a0c,	// (0x000308e2) fep_hwr_candidate_drop_down_list_scroll_pane

0x1a15,	// (0x000308eb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1a15,	// (0x000308eb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1a22,	// (0x000308f8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1a22,	// (0x000308f8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1a2f,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1a2f,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1a3c,	// (0x00030912) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a3c,	// (0x00030912) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1a57,	// (0x0003092d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a57,	// (0x0003092d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a72,	// (0x00030948) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a72,	// (0x00030948) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a8d,	// (0x00030963) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a8d,	// (0x00030963) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1aa8,	// (0x0003097e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1aa8,	// (0x0003097e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0003eaac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0003eaac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d88,	// (0x00036c5e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d88,	// (0x00036c5e) cell_vkb_candidate_pane_cp1

0x7929,	// (0x000367ff) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7929,	// (0x000367ff) fep_vkb_candidate_drop_down_list_pane_g1

0x7da8,	// (0x00036c7e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7da8,	// (0x00036c7e) fep_vkb_candidate_drop_down_list_pane_g2

0x7db5,	// (0x00036c8b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7db5,	// (0x00036c8b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe7,	// (0x0003eabd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe7,	// (0x0003eabd) fep_vkb_candidate_drop_down_list_pane_g

0x7dc2,	// (0x00036c98) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7dc2,	// (0x00036c98) fep_vkb_candidate_drop_down_list_scroll_pane

0x7dcf,	// (0x00036ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7dcf,	// (0x00036ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ddc,	// (0x00036cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ddc,	// (0x00036cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7de8,	// (0x00036cbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7de8,	// (0x00036cbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c76,	// (0x00036b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c76,	// (0x00036b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7df4,	// (0x00036cca) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7df4,	// (0x00036cca) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e15,	// (0x00036ceb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e15,	// (0x00036ceb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e36,	// (0x00036d0c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e36,	// (0x00036d0c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e57,	// (0x00036d2d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e57,	// (0x00036d2d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbee,	// (0x0003eac4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbee,	// (0x0003eac4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc5ee,	// (0x0003b4c4) title_pane_g1_ParamLimits

0xc5ff,	// (0x0003b4d5) title_pane_g2_ParamLimits

0xf56a,	// (0x0003e440) title_pane_g_ParamLimits

0x3c81,	// (0x00032b57) aid_call2_pane

0x3c89,	// (0x00032b5f) aid_call_pane

0x3c91,	// (0x00032b67) popup_clock_analogue_window_g1

0x3c91,	// (0x00032b67) popup_clock_analogue_window_g2

0x0e81,	// (0x0002fd57) popup_clock_analogue_window_g3

0x0e8a,	// (0x0002fd60) popup_clock_analogue_window_g4

0x2cb3,	// (0x00031b89) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0003e5ea) popup_clock_analogue_window_g

0x0e92,	// (0x0002fd68) popup_clock_analogue_window_t1

0x0ea0,	// (0x0002fd76) clock_digital_number_pane_ParamLimits

0x0ea0,	// (0x0002fd76) clock_digital_number_pane

0x0eac,	// (0x0002fd82) clock_digital_number_pane_cp02_ParamLimits

0x0eac,	// (0x0002fd82) clock_digital_number_pane_cp02

0x0eb8,	// (0x0002fd8e) clock_digital_number_pane_cp03_ParamLimits

0x0eb8,	// (0x0002fd8e) clock_digital_number_pane_cp03

0x0ec4,	// (0x0002fd9a) clock_digital_number_pane_cp04_ParamLimits

0x0ec4,	// (0x0002fd9a) clock_digital_number_pane_cp04

0x0ed0,	// (0x0002fda6) clock_digital_separator_pane_ParamLimits

0x0ed0,	// (0x0002fda6) clock_digital_separator_pane

0x0edc,	// (0x0002fdb2) popup_clock_digital_window_t1_ParamLimits

0x0edc,	// (0x0002fdb2) popup_clock_digital_window_t1

0x2cb3,	// (0x00031b89) clock_digital_number_pane_g1

0x2cb3,	// (0x00031b89) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0003e5f5) clock_digital_number_pane_g

0x2cb3,	// (0x00031b89) clock_digital_separator_pane_g1

0x2cb3,	// (0x00031b89) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0003e5f5) clock_digital_separator_pane_g

0xd366,	// (0x0003c23c) aid_fill_nsta_ParamLimits

0xd495,	// (0x0003c36b) indicator_nsta_pane_ParamLimits

0x4e41,	// (0x00033d17) popup_clock_analogue_window

0x4e41,	// (0x00033d17) popup_clock_digital_window

0x37d6,	// (0x000326ac) grid_indicator_nsta_pane_ParamLimits

0x7076,	// (0x00035f4c) clock_nsta_pane_t2

0x0001,

0xfab4,	// (0x0003e98a) clock_nsta_pane_t

0x0e45,	// (0x0002fd1b) aid_size_max_handle

0xbb60,	// (0x0003aa36) aid_size_min_handle

0x426e,	// (0x00033144) editor_scroll_pane

0x7e72,	// (0x00036d48) ex_editor_pane

0x3783,	// (0x00032659) scroll_pane_cp13

0x35a8,	// (0x0003247e) scroll_pane_cp14

0x3cbb,	// (0x00032b91) scroll_pane_cp36

0xcb05,	// (0x0003b9db) list_single_graphic_hl_pane_cp2_ParamLimits

0xcb05,	// (0x0003b9db) list_single_graphic_hl_pane_cp2

0xbf4d,	// (0x0003ae23) list_single_graphic_hl_pane_ParamLimits

0xbf4d,	// (0x0003ae23) list_single_graphic_hl_pane

0x2ac3,	// (0x00031999) aid_size_min_hl_cp1

0x7e7a,	// (0x00036d50) list_highlight_pane_cp34_ParamLimits

0x7e7a,	// (0x00036d50) list_highlight_pane_cp34

0x7e8b,	// (0x00036d61) list_single_graphic_hl_pane_g1_ParamLimits

0x7e8b,	// (0x00036d61) list_single_graphic_hl_pane_g1

0xbfac,	// (0x0003ae82) list_single_graphic_hl_pane_g2_ParamLimits

0xbfac,	// (0x0003ae82) list_single_graphic_hl_pane_g2

0xbfac,	// (0x0003ae82) list_single_graphic_hl_pane_g3_ParamLimits

0xbfac,	// (0x0003ae82) list_single_graphic_hl_pane_g3

0xbfb8,	// (0x0003ae8e) list_single_graphic_hl_pane_g4_ParamLimits

0xbfb8,	// (0x0003ae8e) list_single_graphic_hl_pane_g4

0xbfc4,	// (0x0003ae9a) list_single_graphic_hl_pane_g5_ParamLimits

0xbfc4,	// (0x0003ae9a) list_single_graphic_hl_pane_g5

0x0004,

0xfbff,	// (0x0003ead5) list_single_graphic_hl_pane_g_ParamLimits

0xfbff,	// (0x0003ead5) list_single_graphic_hl_pane_g

0xbfd8,	// (0x0003aeae) list_single_graphic_hl_pane_t1_ParamLimits

0xbfd8,	// (0x0003aeae) list_single_graphic_hl_pane_t1

0x7e98,	// (0x00036d6e) aid_size_min_hl_cp2

0x7ea1,	// (0x00036d77) list_highlight_pane_cp34_cp2_ParamLimits

0x7ea1,	// (0x00036d77) list_highlight_pane_cp34_cp2

0x7e8b,	// (0x00036d61) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e8b,	// (0x00036d61) list_single_graphic_hl_pane_g1_cp2

0x7eae,	// (0x00036d84) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7eae,	// (0x00036d84) list_single_graphic_hl_pane_g2_cp2

0x7eba,	// (0x00036d90) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7eba,	// (0x00036d90) list_single_graphic_hl_pane_g3_cp2

0x5cbf,	// (0x00034b95) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5cbf,	// (0x00034b95) list_single_graphic_hl_pane_g4_cp2

0x7ec8,	// (0x00036d9e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ec8,	// (0x00036d9e) list_single_graphic_hl_pane_g5_cp2

0xbc23,	// (0x0003aaf9) control_pane_g4_ParamLimits

0xbc23,	// (0x0003aaf9) control_pane_g4

0x45d4,	// (0x000334aa) bg_popup_sub_pane_cp10_ParamLimits

0x76a1,	// (0x00036577) list_choice_list_pane_ParamLimits

0x76b0,	// (0x00036586) scroll_pane_cp23

0x3026,	// (0x00031efc) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ccd,	// (0x00036ba3) list_preview_fixed_pane_ParamLimits

0x7ce3,	// (0x00036bb9) list_preview_fixed_pane_cp_ParamLimits

0x7ce3,	// (0x00036bb9) list_preview_fixed_pane_cp

0x7cef,	// (0x00036bc5) popup_preview_fixed_window_g1_ParamLimits

0x7cef,	// (0x00036bc5) popup_preview_fixed_window_g1

0x7cfb,	// (0x00036bd1) popup_preview_fixed_window_g2_ParamLimits

0x7cfb,	// (0x00036bd1) popup_preview_fixed_window_g2

0x0002,

0xfb87,	// (0x0003ea5d) popup_preview_fixed_window_g_ParamLimits

0xfb87,	// (0x0003ea5d) popup_preview_fixed_window_g

0x0db9,	// (0x0002fc8f) aid_navi_side_left_pane_ParamLimits

0x0dce,	// (0x0002fca4) aid_navi_side_right_pane_ParamLimits

0x0de6,	// (0x0002fcbc) navi_icon_pane_stacon_ParamLimits

0x0dfa,	// (0x0002fcd0) navi_navi_pane_stacon_ParamLimits

0x0de6,	// (0x0002fcbc) navi_text_pane_stacon_ParamLimits

0x2ca9,	// (0x00031b7f) main_text_info_pane

0x7ef2,	// (0x00036dc8) listscroll_text_info_pane

0x7efa,	// (0x00036dd0) list_text_info_pane_ParamLimits

0x7efa,	// (0x00036dd0) list_text_info_pane

0x7f09,	// (0x00036ddf) scroll_pane_cp24_ParamLimits

0x7f09,	// (0x00036ddf) scroll_pane_cp24

0xe06c,	// (0x0003cf42) list_text_info_pane_t1_ParamLimits

0xe06c,	// (0x0003cf42) list_text_info_pane_t1

0xcd00,	// (0x0003bbd6) popup_fast_swap2_window_ParamLimits

0xcd00,	// (0x0003bbd6) popup_fast_swap2_window

0x7f58,	// (0x00036e2e) aid_size_cell_fast2

0x2ca9,	// (0x00031b7f) bg_popup_window_pane_cp17

0x551c,	// (0x000343f2) heading_pane_cp2

0x3272,	// (0x00032148) listscroll_fast2_pane

0x7f62,	// (0x00036e38) grid_fast2_pane

0x7f6c,	// (0x00036e42) listscroll_fast2_pane_g1

0x7f74,	// (0x00036e4a) listscroll_fast2_pane_g2

0x0001,

0xfc0a,	// (0x0003eae0) listscroll_fast2_pane_g

0x3783,	// (0x00032659) scroll_pane_cp26

0x7f7e,	// (0x00036e54) cell_fast2_pane_ParamLimits

0x7f7e,	// (0x00036e54) cell_fast2_pane

0x7f93,	// (0x00036e69) cell_fast2_pane_g1

0x7f9c,	// (0x00036e72) cell_fast2_pane_g2

0x7fa5,	// (0x00036e7b) cell_fast2_pane_g3

0x0002,

0xfc0f,	// (0x0003eae5) cell_fast2_pane_g

0x3365,	// (0x0003223b) grid_highlight_pane_cp9

0x337a,	// (0x00032250) main_eswt_pane_ParamLimits

0x337a,	// (0x00032250) main_eswt_pane

0x7f1e,	// (0x00036df4) list_single_text_info_pane

0x7fad,	// (0x00036e83) eswt_ctrl_button_pane

0x7fad,	// (0x00036e83) eswt_ctrl_canvas_pane

0x7fb5,	// (0x00036e8b) eswt_ctrl_combo_pane

0x7fad,	// (0x00036e83) eswt_ctrl_default_pane

0x7fad,	// (0x00036e83) eswt_ctrl_label_pane

0x7fbd,	// (0x00036e93) eswt_ctrl_wait_pane

0x7fc5,	// (0x00036e9b) eswt_shell_pane

0x2ca9,	// (0x00031b7f) listscroll_eswt_app_pane

0x7fe5,	// (0x00036ebb) popup_eswt_tasktip_window_ParamLimits

0x7fe5,	// (0x00036ebb) popup_eswt_tasktip_window

0x515a,	// (0x00034030) bg_popup_window_pane_cp18

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_ParamLimits

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1

0x8003,	// (0x00036ed9) eswt_control_pane_g2_ParamLimits

0x8003,	// (0x00036ed9) eswt_control_pane_g2

0x8010,	// (0x00036ee6) eswt_control_pane_g3_ParamLimits

0x8010,	// (0x00036ee6) eswt_control_pane_g3

0x801d,	// (0x00036ef3) eswt_control_pane_g4_ParamLimits

0x801d,	// (0x00036ef3) eswt_control_pane_g4

0x0003,

0xfc16,	// (0x0003eaec) eswt_control_pane_g_ParamLimits

0xfc16,	// (0x0003eaec) eswt_control_pane_g

0x3609,	// (0x000324df) bg_button_pane_ParamLimits

0x3609,	// (0x000324df) bg_button_pane

0x337a,	// (0x00032250) common_borders_pane_copy2_ParamLimits

0x337a,	// (0x00032250) common_borders_pane_copy2

0x802a,	// (0x00036f00) control_button_pane_g1_ParamLimits

0x802a,	// (0x00036f00) control_button_pane_g1

0x8036,	// (0x00036f0c) control_button_pane_g2_ParamLimits

0x8036,	// (0x00036f0c) control_button_pane_g2

0x8042,	// (0x00036f18) control_button_pane_g3_ParamLimits

0x8042,	// (0x00036f18) control_button_pane_g3

0x0002,

0xfc1f,	// (0x0003eaf5) control_button_pane_g_ParamLimits

0xfc1f,	// (0x0003eaf5) control_button_pane_g

0x8056,	// (0x00036f2c) control_button_pane_t1

0x8064,	// (0x00036f3a) control_button_pane_t2

0x0001,

0xfc26,	// (0x0003eafc) control_button_pane_t

0x506a,	// (0x00033f40) bg_button_pane_g1

0x507a,	// (0x00033f50) bg_button_pane_g2

0x5072,	// (0x00033f48) bg_button_pane_g3

0x508a,	// (0x00033f60) bg_button_pane_g4

0x5082,	// (0x00033f58) bg_button_pane_g5

0x5092,	// (0x00033f68) bg_button_pane_g6

0x509a,	// (0x00033f70) bg_button_pane_g7

0x50aa,	// (0x00033f80) bg_button_pane_g8

0x50a2,	// (0x00033f78) bg_button_pane_g9

0x0008,

0xf872,	// (0x0003e748) bg_button_pane_g

0x765c,	// (0x00036532) common_borders_pane_ParamLimits

0x765c,	// (0x00036532) common_borders_pane

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy1_ParamLimits

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy1

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy1_ParamLimits

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy1

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy1_ParamLimits

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy1

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy1_ParamLimits

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy1

0x7697,	// (0x0003656d) bg_eswt_ctrl_canvas_pane_g1

0x765c,	// (0x00036532) common_borders_pane_cp2_ParamLimits

0x765c,	// (0x00036532) common_borders_pane_cp2

0x765c,	// (0x00036532) common_borders_pane_cp3_ParamLimits

0x765c,	// (0x00036532) common_borders_pane_cp3

0x8072,	// (0x00036f48) separator_horizontal_pane

0x807a,	// (0x00036f50) separator_vertical_pane

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy2_ParamLimits

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy2

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy2_ParamLimits

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy2

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy2_ParamLimits

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy2

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy2_ParamLimits

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy2

0x2ca9,	// (0x00031b7f) common_borders_pane_cp4

0x8083,	// (0x00036f59) separator_horizontal_pane_g1

0x808c,	// (0x00036f62) separator_horizontal_pane_g2

0x8095,	// (0x00036f6b) separator_horizontal_pane_g3

0x0002,

0xfc2b,	// (0x0003eb01) separator_horizontal_pane_g

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy3_ParamLimits

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy3

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy3_ParamLimits

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy3

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy3_ParamLimits

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy3

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy3_ParamLimits

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy3

0x2ca9,	// (0x00031b7f) common_borders_pane_cp5

0x809e,	// (0x00036f74) separator_vertical_pane_g1

0x80a7,	// (0x00036f7d) separator_vertical_pane_g2

0x80b0,	// (0x00036f86) separator_vertical_pane_g3

0x0002,

0xfc32,	// (0x0003eb08) separator_vertical_pane_g

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy4_ParamLimits

0x7ff6,	// (0x00036ecc) eswt_control_pane_g1_copy4

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy4_ParamLimits

0x8003,	// (0x00036ed9) eswt_control_pane_g2_copy4

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy4_ParamLimits

0x8010,	// (0x00036ee6) eswt_control_pane_g3_copy4

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy4_ParamLimits

0x801d,	// (0x00036ef3) eswt_control_pane_g4_copy4

0xe087,	// (0x0003cf5d) eswt_ctrl_combo_button_pane

0xe08f,	// (0x0003cf65) eswt_ctrl_input_pane

0xe097,	// (0x0003cf6d) popup_choice_list_window_cp70

0xe09f,	// (0x0003cf75) eswt_ctrl_input_pane_t1

0x2ca9,	// (0x00031b7f) input_focus_pane_cp70

0x765c,	// (0x00036532) bg_button_pane_cp70_ParamLimits

0x765c,	// (0x00036532) bg_button_pane_cp70

0xe0ad,	// (0x0003cf83) eswt_ctrl_combo_button_pane_g1

0x80e7,	// (0x00036fbd) wait_bar_pane_cp70

0x515a,	// (0x00034030) bg_popup_window_pane_cp70_ParamLimits

0x515a,	// (0x00034030) bg_popup_window_pane_cp70

0x80ef,	// (0x00036fc5) popup_eswt_tasktip_window_t1

0x8105,	// (0x00036fdb) wait_bar_pane_cp71_ParamLimits

0x8105,	// (0x00036fdb) wait_bar_pane_cp71

0x8111,	// (0x00036fe7) grid_eswt_app_pane

0x3aa1,	// (0x00032977) scroll_pane_cp70

0xe0b5,	// (0x0003cf8b) cell_eswt_app_pane_ParamLimits

0xe0b5,	// (0x0003cf8b) cell_eswt_app_pane

0xe0df,	// (0x0003cfb5) cell_eswt_app_pane_g1_ParamLimits

0xe0df,	// (0x0003cfb5) cell_eswt_app_pane_g1

0xe10e,	// (0x0003cfe4) cell_eswt_app_pane_g2_ParamLimits

0xe10e,	// (0x0003cfe4) cell_eswt_app_pane_g2

0x0001,

0xfc39,	// (0x0003eb0f) cell_eswt_app_pane_g_ParamLimits

0xfc39,	// (0x0003eb0f) cell_eswt_app_pane_g

0xe137,	// (0x0003d00d) cell_eswt_app_pane_t1_ParamLimits

0xe137,	// (0x0003d00d) cell_eswt_app_pane_t1

0x81d4,	// (0x000370aa) grid_highlight_pane_cp70_ParamLimits

0x81d4,	// (0x000370aa) grid_highlight_pane_cp70

0x4143,	// (0x00033019) set_content_pane_g1

0x451a,	// (0x000333f0) status_small_volume_pane

0x1ac3,	// (0x00030999) status_small_volume_pane_g1

0x1acb,	// (0x000309a1) volume_small2_pane

0x1ad4,	// (0x000309aa) volume_small2_pane_g1

0x1add,	// (0x000309b3) volume_small2_pane_g2

0x1ae6,	// (0x000309bc) volume_small2_pane_g3

0x1aef,	// (0x000309c5) volume_small2_pane_g4

0x1af8,	// (0x000309ce) volume_small2_pane_g5

0x1b01,	// (0x000309d7) volume_small2_pane_g6

0x1b0a,	// (0x000309e0) volume_small2_pane_g7

0x1b13,	// (0x000309e9) volume_small2_pane_g8

0x1b1c,	// (0x000309f2) volume_small2_pane_g9

0x1b25,	// (0x000309fb) volume_small2_pane_g10

0x0009,

0xfc3e,	// (0x0003eb14) volume_small2_pane_g

0x7a71,	// (0x00036947) fep_vkb_top_text_pane_g1_ParamLimits

0xe014,	// (0x0003ceea) fep_vkb_top_text_pane_t1_ParamLimits

0x7d07,	// (0x00036bdd) popup_preview_fixed_window_g3_ParamLimits

0x7d07,	// (0x00036bdd) popup_preview_fixed_window_g3

0xd2f9,	// (0x0003c1cf) popup_toolbar_trans_pane

0xd9f5,	// (0x0003c8cb) aid_height_set_list_ParamLimits

0x64b9,	// (0x0003538f) aid_size_parent_ParamLimits

0x45d4,	// (0x000334aa) list_highlight_pane_cp2_ParamLimits

0x4143,	// (0x00033019) set_content_pane_g1_ParamLimits

0xdb90,	// (0x0003ca66) list_single_image_pane_ParamLimits

0xdb90,	// (0x0003ca66) list_single_image_pane

0x81e0,	// (0x000370b6) aid_size_cell_image_ParamLimits

0x81e0,	// (0x000370b6) aid_size_cell_image

0xe169,	// (0x0003d03f) grid_single_image_pane_ParamLimits

0xe169,	// (0x0003d03f) grid_single_image_pane

0x3c5f,	// (0x00032b35) list_single_image_pane_g1_ParamLimits

0x3c5f,	// (0x00032b35) list_single_image_pane_g1

0x81fb,	// (0x000370d1) list_single_image_pane_g2_ParamLimits

0x81fb,	// (0x000370d1) list_single_image_pane_g2

0x0001,

0xfc53,	// (0x0003eb29) list_single_image_pane_g_ParamLimits

0xfc53,	// (0x0003eb29) list_single_image_pane_g

0x3c6b,	// (0x00032b41) list_single_image_pane_t1_ParamLimits

0x3c6b,	// (0x00032b41) list_single_image_pane_t1

0xe177,	// (0x0003d04d) cell_image_list_pane_ParamLimits

0xe177,	// (0x0003d04d) cell_image_list_pane

0x8222,	// (0x000370f8) cell_image_list_pane_g1

0x822b,	// (0x00037101) cell_image_list_pane_g2

0x0001,

0xfc58,	// (0x0003eb2e) cell_image_list_pane_g

0x8234,	// (0x0003710a) aid_size_cell_tb_trans_pane

0x3609,	// (0x000324df) bg_tb_trans_pane

0x8246,	// (0x0003711c) grid_tb_trans_pane

0x506a,	// (0x00033f40) bg_tb_trans_pane_g1

0x507a,	// (0x00033f50) bg_tb_trans_pane_g2

0x5072,	// (0x00033f48) bg_tb_trans_pane_g3

0x508a,	// (0x00033f60) bg_tb_trans_pane_g4

0x5082,	// (0x00033f58) bg_tb_trans_pane_g5

0x50aa,	// (0x00033f80) bg_tb_trans_pane_g6

0x50a2,	// (0x00033f78) bg_tb_trans_pane_g7

0x5092,	// (0x00033f68) bg_tb_trans_pane_g8

0x509a,	// (0x00033f70) bg_tb_trans_pane_g9

0x0008,

0xfc5d,	// (0x0003eb33) bg_tb_trans_pane_g

0x825a,	// (0x00037130) cell_toolbar_trans_pane_ParamLimits

0x825a,	// (0x00037130) cell_toolbar_trans_pane

0x7697,	// (0x0003656d) cell_toolbar_trans_pane_g1

0xddf0,	// (0x0003ccc6) list_form2_midp_pane_t1

0xddfe,	// (0x0003ccd4) list_form2_midp_pane_t2

0x0001,

0xfafa,	// (0x0003e9d0) list_form2_midp_pane_t

0x727c,	// (0x00036152) scroll_pane_cp51_ParamLimits

0x7438,	// (0x0003630e) form2_midp_wait_pane_g1

0x7441,	// (0x00036317) form2_midp_wait_pane_g2

0x744a,	// (0x00036320) form2_midp_wait_pane_g3

0x0002,

0xfb0f,	// (0x0003e9e5) form2_midp_wait_pane_g

0x2d9d,	// (0x00031c73) list_highlight_pane_cp21_ParamLimits

0x74a1,	// (0x00036377) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74b0,	// (0x00036386) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x668c,	// (0x00035562) list_single_2graphic_im_pane_ParamLimits

0x668c,	// (0x00035562) list_single_2graphic_im_pane

0xe18d,	// (0x0003d063) list_single_2graphic_im_pane_g1_ParamLimits

0xe18d,	// (0x0003d063) list_single_2graphic_im_pane_g1

0xe19e,	// (0x0003d074) list_single_2graphic_im_pane_g2_ParamLimits

0xe19e,	// (0x0003d074) list_single_2graphic_im_pane_g2

0xe1aa,	// (0x0003d080) list_single_2graphic_im_pane_g3_ParamLimits

0xe1aa,	// (0x0003d080) list_single_2graphic_im_pane_g3

0x0003,

0xfc70,	// (0x0003eb46) list_single_2graphic_im_pane_g_ParamLimits

0xfc70,	// (0x0003eb46) list_single_2graphic_im_pane_g

0xe1be,	// (0x0003d094) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x0003d094) list_single_2graphic_im_pane_t1

0x7d13,	// (0x00036be9) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d13,	// (0x00036be9) list_single_graphic_2heading_pane_fp

0x2935,	// (0x0003180b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2935,	// (0x0003180b) list_single_graphic_2heading_pane_fp_g1

0x7d28,	// (0x00036bfe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d28,	// (0x00036bfe) list_single_graphic_2heading_pane_fp_g2

0x28fe,	// (0x000317d4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x28fe,	// (0x000317d4) list_single_graphic_2heading_pane_fp_g3

0x290a,	// (0x000317e0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x290a,	// (0x000317e0) list_single_graphic_2heading_pane_fp_g4

0x7d34,	// (0x00036c0a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d34,	// (0x00036c0a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ea6d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ea6d) list_single_graphic_2heading_pane_fp_g

0x2b02,	// (0x000319d8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b02,	// (0x000319d8) list_single_graphic_2heading_pane_fp_t1

0x296d,	// (0x00031843) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x296d,	// (0x00031843) list_single_graphic_2heading_pane_fp_t2

0x2b18,	// (0x000319ee) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2b18,	// (0x000319ee) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc79,	// (0x0003eb4f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc79,	// (0x0003eb4f) list_single_graphic_2heading_pane_fp_t

0x7737,	// (0x0003660d) fep_hwr_write_pane_g5_ParamLimits

0x7737,	// (0x0003660d) fep_hwr_write_pane_g5

0x7743,	// (0x00036619) fep_hwr_write_pane_g6_ParamLimits

0x7743,	// (0x00036619) fep_hwr_write_pane_g6

0x7fc5,	// (0x00036e9b) eswt_shell_pane_ParamLimits

0x515a,	// (0x00034030) bg_popup_window_pane_cp18_ParamLimits

0x6401,	// (0x000352d7) heading_pane_cp70

0x80ef,	// (0x00036fc5) popup_eswt_tasktip_window_t1_ParamLimits

0xd3ba,	// (0x0003c290) aid_touch_tab_arrow_left

0xd3d0,	// (0x0003c2a6) aid_touch_tab_arrow_right

0xc617,	// (0x0003b4ed) title_pane_g3_ParamLimits

0xc617,	// (0x0003b4ed) title_pane_g3

0x35c8,	// (0x0003249e) set_value_pane_g1

0xd2f9,	// (0x0003c1cf) popup_toolbar_trans_pane_ParamLimits

0x8234,	// (0x0003710a) aid_size_cell_tb_trans_pane_ParamLimits

0x3609,	// (0x000324df) bg_tb_trans_pane_ParamLimits

0x8246,	// (0x0003711c) grid_tb_trans_pane_ParamLimits

0x3026,	// (0x00031efc) cont_note_pane_ParamLimits

0x3026,	// (0x00031efc) cont_note_pane

0x337a,	// (0x00032250) cont_snote2_single_text_pane_ParamLimits

0x337a,	// (0x00032250) cont_snote2_single_text_pane

0x337a,	// (0x00032250) cont_snote2_single_graphic_pane_ParamLimits

0x337a,	// (0x00032250) cont_snote2_single_graphic_pane

0x5737,	// (0x0003460d) cont_note_wait_pane_ParamLimits

0x5737,	// (0x0003460d) cont_note_wait_pane

0x5737,	// (0x0003460d) cont_note_image_pane_ParamLimits

0x5737,	// (0x0003460d) cont_note_image_pane

0x82ee,	// (0x000371c4) popup_note2_window_g1_ParamLimits

0x82ee,	// (0x000371c4) popup_note2_window_g1

0x831f,	// (0x000371f5) popup_note2_window_t1_ParamLimits

0x831f,	// (0x000371f5) popup_note2_window_t1

0x8364,	// (0x0003723a) popup_note2_window_t2_ParamLimits

0x8364,	// (0x0003723a) popup_note2_window_t2

0x83a9,	// (0x0003727f) popup_note2_window_t3_ParamLimits

0x83a9,	// (0x0003727f) popup_note2_window_t3

0x83ee,	// (0x000372c4) popup_note2_window_t4_ParamLimits

0x83ee,	// (0x000372c4) popup_note2_window_t4

0x30aa,	// (0x00031f80) popup_note2_window_t5_ParamLimits

0x30aa,	// (0x00031f80) popup_note2_window_t5

0x0004,

0xfc85,	// (0x0003eb5b) popup_note2_window_t_ParamLimits

0xfc85,	// (0x0003eb5b) popup_note2_window_t

0x841d,	// (0x000372f3) popup_note2_image_window_g1_ParamLimits

0x841d,	// (0x000372f3) popup_note2_image_window_g1

0x8429,	// (0x000372ff) popup_note2_image_window_g2_ParamLimits

0x8429,	// (0x000372ff) popup_note2_image_window_g2

0x0001,

0xfc90,	// (0x0003eb66) popup_note2_image_window_g_ParamLimits

0xfc90,	// (0x0003eb66) popup_note2_image_window_g

0x843b,	// (0x00037311) popup_note2_image_window_t1_ParamLimits

0x843b,	// (0x00037311) popup_note2_image_window_t1

0x8453,	// (0x00037329) popup_note2_image_window_t2_ParamLimits

0x8453,	// (0x00037329) popup_note2_image_window_t2

0x846b,	// (0x00037341) popup_note2_image_window_t3_ParamLimits

0x846b,	// (0x00037341) popup_note2_image_window_t3

0x0002,

0xfc95,	// (0x0003eb6b) popup_note2_image_window_t_ParamLimits

0xfc95,	// (0x0003eb6b) popup_note2_image_window_t

0x5745,	// (0x0003461b) popup_note2_wait_window_g1_ParamLimits

0x5745,	// (0x0003461b) popup_note2_wait_window_g1

0x8495,	// (0x0003736b) popup_note2_wait_window_g2_ParamLimits

0x8495,	// (0x0003736b) popup_note2_wait_window_g2

0x575d,	// (0x00034633) popup_note2_wait_window_g3_ParamLimits

0x575d,	// (0x00034633) popup_note2_wait_window_g3

0x0002,

0xfc9c,	// (0x0003eb72) popup_note2_wait_window_g_ParamLimits

0xfc9c,	// (0x0003eb72) popup_note2_wait_window_g

0x84a1,	// (0x00037377) popup_note2_wait_window_t1_ParamLimits

0x84a1,	// (0x00037377) popup_note2_wait_window_t1

0x84bf,	// (0x00037395) popup_note2_wait_window_t2_ParamLimits

0x84bf,	// (0x00037395) popup_note2_wait_window_t2

0x84dd,	// (0x000373b3) popup_note2_wait_window_t3_ParamLimits

0x84dd,	// (0x000373b3) popup_note2_wait_window_t3

0x84ef,	// (0x000373c5) popup_note2_wait_window_t4_ParamLimits

0x84ef,	// (0x000373c5) popup_note2_wait_window_t4

0x0003,

0xfca3,	// (0x0003eb79) popup_note2_wait_window_t_ParamLimits

0xfca3,	// (0x0003eb79) popup_note2_wait_window_t

0x8501,	// (0x000373d7) wait_bar2_pane_ParamLimits

0x8501,	// (0x000373d7) wait_bar2_pane

0x8519,	// (0x000373ef) popup_snote2_single_text_window_g1_ParamLimits

0x8519,	// (0x000373ef) popup_snote2_single_text_window_g1

0x8541,	// (0x00037417) popup_snote2_single_text_window_t1_ParamLimits

0x8541,	// (0x00037417) popup_snote2_single_text_window_t1

0x858d,	// (0x00037463) popup_snote2_single_text_window_t2_ParamLimits

0x858d,	// (0x00037463) popup_snote2_single_text_window_t2

0x85d9,	// (0x000374af) popup_snote2_single_text_window_t3_ParamLimits

0x85d9,	// (0x000374af) popup_snote2_single_text_window_t3

0x861a,	// (0x000374f0) popup_snote2_single_text_window_t4_ParamLimits

0x861a,	// (0x000374f0) popup_snote2_single_text_window_t4

0x8650,	// (0x00037526) popup_snote2_single_text_window_t5_ParamLimits

0x8650,	// (0x00037526) popup_snote2_single_text_window_t5

0x0004,

0xfcac,	// (0x0003eb82) popup_snote2_single_text_window_t_ParamLimits

0xfcac,	// (0x0003eb82) popup_snote2_single_text_window_t

0x867b,	// (0x00037551) popup_snote2_single_graphic_window_g1_ParamLimits

0x867b,	// (0x00037551) popup_snote2_single_graphic_window_g1

0x86a3,	// (0x00037579) popup_snote2_single_graphic_window_g2_ParamLimits

0x86a3,	// (0x00037579) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb7,	// (0x0003eb8d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb7,	// (0x0003eb8d) popup_snote2_single_graphic_window_g

0x86cb,	// (0x000375a1) popup_snote2_single_graphic_window_t1_ParamLimits

0x86cb,	// (0x000375a1) popup_snote2_single_graphic_window_t1

0x8717,	// (0x000375ed) popup_snote2_single_graphic_window_t2_ParamLimits

0x8717,	// (0x000375ed) popup_snote2_single_graphic_window_t2

0x85d9,	// (0x000374af) popup_snote2_single_graphic_window_t3_ParamLimits

0x85d9,	// (0x000374af) popup_snote2_single_graphic_window_t3

0x861a,	// (0x000374f0) popup_snote2_single_graphic_window_t4_ParamLimits

0x861a,	// (0x000374f0) popup_snote2_single_graphic_window_t4

0x8650,	// (0x00037526) popup_snote2_single_graphic_window_t5_ParamLimits

0x8650,	// (0x00037526) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbc,	// (0x0003eb92) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbc,	// (0x0003eb92) popup_snote2_single_graphic_window_t

0x7139,	// (0x0003600f) clock_nsta_pane_cp2_t1

0x7139,	// (0x0003600f) clock_nsta_pane_cp2_t2

0x0001,

0xfad0,	// (0x0003e9a6) clock_nsta_pane_cp2_t

0x0b4a,	// (0x0002fa20) form_field_data_wide_pane_g1_ParamLimits

0x3623,	// (0x000324f9) form_field_data_wide_pane_g2_ParamLimits

0x3623,	// (0x000324f9) form_field_data_wide_pane_g2

0x362f,	// (0x00032505) form_field_data_wide_pane_g3_ParamLimits

0x362f,	// (0x00032505) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0003e56d) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0003e56d) form_field_data_wide_pane_g

0xdd0a,	// (0x0003cbe0) grid_touch_3_pane_ParamLimits

0xdd0a,	// (0x0003cbe0) grid_touch_3_pane

0xe1ef,	// (0x0003d0c5) cell_touch_3_pane_ParamLimits

0xe1ef,	// (0x0003d0c5) cell_touch_3_pane

0x7697,	// (0x0003656d) cell_touch_3_pane_g1

0x7697,	// (0x0003656d) cell_touch_3_pane_g2

0x0001,

0xfb55,	// (0x0003ea2b) cell_touch_3_pane_g

0x30dc,	// (0x00031fb2) cont_query_data_pane

0x30e4,	// (0x00031fba) cont_query_data_pane_cp1

0x8791,	// (0x00037667) button_value_adjust_pane_cp7

0x8799,	// (0x0003766f) query_popup_pane_cp3

0x3d56,	// (0x00032c2c) bg_popup_sub_pane_cp22_ParamLimits

0x0efb,	// (0x0002fdd1) navi_navi_volume_pane_cp2

0x0f16,	// (0x0002fdec) popup_side_volume_key_window_g2

0x0f25,	// (0x0002fdfb) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003e5ff) popup_side_volume_key_window_g

0x0f42,	// (0x0002fe18) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0003e606) popup_side_volume_key_window_t

0x400d,	// (0x00032ee3) popup_side_volume_key_window_ParamLimits

0xb749,	// (0x0003a61f) list_double_graphic_pane_g4_ParamLimits

0xb749,	// (0x0003a61f) list_double_graphic_pane_g4

0xdb7d,	// (0x0003ca53) list_single_2heading_msg_pane_ParamLimits

0xdb7d,	// (0x0003ca53) list_single_2heading_msg_pane

0xbfee,	// (0x0003aec4) list_single_2heading_msg_pane_g1_ParamLimits

0xbfee,	// (0x0003aec4) list_single_2heading_msg_pane_g1

0xbffa,	// (0x0003aed0) list_single_2heading_msg_pane_g2_ParamLimits

0xbffa,	// (0x0003aed0) list_single_2heading_msg_pane_g2

0xc00d,	// (0x0003aee3) list_single_2heading_msg_pane_g3_ParamLimits

0xc00d,	// (0x0003aee3) list_single_2heading_msg_pane_g3

0xc019,	// (0x0003aeef) list_single_2heading_msg_pane_g4_ParamLimits

0xc019,	// (0x0003aeef) list_single_2heading_msg_pane_g4

0x0003,

0xfcc7,	// (0x0003eb9d) list_single_2heading_msg_pane_g_ParamLimits

0xfcc7,	// (0x0003eb9d) list_single_2heading_msg_pane_g

0xc031,	// (0x0003af07) list_single_2heading_msg_pane_t1_ParamLimits

0xc031,	// (0x0003af07) list_single_2heading_msg_pane_t1

0xc059,	// (0x0003af2f) list_single_2heading_msg_pane_t2_ParamLimits

0xc059,	// (0x0003af2f) list_single_2heading_msg_pane_t2

0xc0c4,	// (0x0003af9a) list_single_2heading_msg_pane_t3_ParamLimits

0xc0c4,	// (0x0003af9a) list_single_2heading_msg_pane_t3

0x2bfd,	// (0x00031ad3) list_single_2heading_msg_pane_t4_ParamLimits

0x2bfd,	// (0x00031ad3) list_single_2heading_msg_pane_t4

0x0003,

0xfcd0,	// (0x0003eba6) list_single_2heading_msg_pane_t_ParamLimits

0xfcd0,	// (0x0003eba6) list_single_2heading_msg_pane_t

0x2cf1,	// (0x00031bc7) title_pane_g4_ParamLimits

0x2cf1,	// (0x00031bc7) title_pane_g4

0x0d09,	// (0x0002fbdf) title_pane_stacon_g3_ParamLimits

0x0d09,	// (0x0002fbdf) title_pane_stacon_g3

0x82b1,	// (0x00037187) list_single_2graphic_im_pane_g4_ParamLimits

0x82b1,	// (0x00037187) list_single_2graphic_im_pane_g4

0x61a8,	// (0x0003507e) popup_side_volume_key_window_cp

0x69a5,	// (0x0003587b) main_idle_act2_pane_t1

0x12c7,	// (0x0003019d) toolbar_button_pane_g10

0xc984,	// (0x0003b85a) popup_toolbar_window_cp1

0x712a,	// (0x00036000) clock_nsta_pane_cp_t1

0x712a,	// (0x00036000) clock_nsta_pane_cp_t2

0x0001,

0xfacb,	// (0x0003e9a1) clock_nsta_pane_cp_t

0x0efb,	// (0x0002fdd1) navi_navi_volume_pane_cp2_ParamLimits

0x0f0a,	// (0x0002fde0) popup_side_volume_key_window_g1_ParamLimits

0x0f16,	// (0x0002fdec) popup_side_volume_key_window_g2_ParamLimits

0x0f25,	// (0x0002fdfb) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003e5ff) popup_side_volume_key_window_g_ParamLimits

0x172f,	// (0x00030605) fep_hwr_aid_pane

0x17d6,	// (0x000306ac) bg_fep_hwr_top_pane_g4_ParamLimits

0x7707,	// (0x000365dd) fep_hwr_top_pane_g1_ParamLimits

0x7719,	// (0x000365ef) fep_hwr_top_pane_g2_ParamLimits

0x17f6,	// (0x000306cc) fep_hwr_top_pane_g3_ParamLimits

0xfb20,	// (0x0003e9f6) fep_hwr_top_pane_g_ParamLimits

0x180b,	// (0x000306e1) fep_hwr_top_text_pane_ParamLimits

0x5f6b,	// (0x00034e41) aid_touch_tab_arrow_arrow_2

0x5f74,	// (0x00034e4a) aid_touch_tab_arrow_left_2

0x1743,	// (0x00030619) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x177a,	// (0x00030650) fep_hwr_prediction_pane

0x7879,	// (0x0003674f) fep_vkb_prediction_pane

0xdff4,	// (0x0003ceca) fep_vkb_side_pane_g3_ParamLimits

0xdff4,	// (0x0003ceca) fep_vkb_side_pane_g3

0x1986,	// (0x0003085c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x19f2,	// (0x000308c8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x19ff,	// (0x000308d5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcf,	// (0x0003eaa5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1b2e,	// (0x00030a04) fep_hwr_prediction_pane_g1

0x1b38,	// (0x00030a0e) fep_hwr_prediction_pane_g2

0x1b40,	// (0x00030a16) fep_hwr_prediction_pane_g3

0x1b48,	// (0x00030a1e) fep_hwr_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0003ebaf) fep_hwr_prediction_pane_g

0x87be,	// (0x00037694) fep_vkb_prediction_pane_g1

0x87c8,	// (0x0003769e) fep_vkb_prediction_pane_g2

0x87d0,	// (0x000376a6) fep_vkb_prediction_pane_g3

0x87d8,	// (0x000376ae) fep_vkb_prediction_pane_g4

0x0003,

0xfce2,	// (0x0003ebb8) fep_vkb_prediction_pane_g

0x15af,	// (0x00030485) slider_set_pane_g3

0x15c3,	// (0x00030499) slider_set_pane_g4

0x15db,	// (0x000304b1) slider_set_pane_g5

0x15af,	// (0x00030485) slider_set_pane_g6

0x15f1,	// (0x000304c7) slider_set_pane_g7

0x661e,	// (0x000354f4) slider_form_pane_g3

0x6627,	// (0x000354fd) slider_form_pane_g4

0x662f,	// (0x00035505) slider_form_pane_g5

0x661e,	// (0x000354f4) slider_form_pane_g6

0xdb40,	// (0x0003ca16) slider_form_pane_g7

0x6c62,	// (0x00035b38) slider_set_pane_vc_g3

0x6c6b,	// (0x00035b41) slider_set_pane_vc_g4

0x6c74,	// (0x00035b4a) slider_set_pane_vc_g5

0x6c62,	// (0x00035b38) slider_set_pane_vc_g6

0x6c7d,	// (0x00035b53) slider_set_pane_vc_g7

0x6c62,	// (0x00035b38) slider_form_pane_vc_g1

0x6c6b,	// (0x00035b41) slider_form_pane_vc_g2

0x6c74,	// (0x00035b4a) slider_form_pane_vc_g3

0x6c62,	// (0x00035b38) slider_form_pane_vc_g4

0x6e30,	// (0x00035d06) slider_form_pane_vc_g5

0x0004,

0xfaa4,	// (0x0003e97a) slider_form_pane_vc_g

0x2ca9,	// (0x00031b7f) main_idle_act3_pane

0x87e0,	// (0x000376b6) ai3_links_pane

0xe238,	// (0x0003d10e) popup_ai3_data_window_ParamLimits

0xe238,	// (0x0003d10e) popup_ai3_data_window

0x2ca9,	// (0x00031b7f) grid_ai3_links_pane

0xe252,	// (0x0003d128) cell_ai3_links_pane_ParamLimits

0xe252,	// (0x0003d128) cell_ai3_links_pane

0x881b,	// (0x000376f1) bg_popup_sub_pane_cp11

0x8828,	// (0x000376fe) cell_ai3_links_pane_g1

0x2ca9,	// (0x00031b7f) bg_popup_sub_pane_cp12

0x884d,	// (0x00037723) heading_ai3_data_pane

0x8855,	// (0x0003772b) list_ai3_gene_pane

0x8861,	// (0x00037737) popup_ai3_data_window_g1

0x8869,	// (0x0003773f) heading_ai3_data_pane_g1

0x8871,	// (0x00037747) heading_ai3_data_pane_t1

0x887f,	// (0x00037755) list_double_ai3_gene_pane_ParamLimits

0x887f,	// (0x00037755) list_double_ai3_gene_pane

0x888c,	// (0x00037762) list_single_ai3_gene_pane_ParamLimits

0x888c,	// (0x00037762) list_single_ai3_gene_pane

0x765c,	// (0x00036532) list_highlight_pane_cp7_ParamLimits

0x765c,	// (0x00036532) list_highlight_pane_cp7

0x8899,	// (0x0003776f) list_single_a13_gene_pane_t1_ParamLimits

0x8899,	// (0x0003776f) list_single_a13_gene_pane_t1

0x88b0,	// (0x00037786) list_single_ai3_gene_pane_g1

0x88b9,	// (0x0003778f) list_single_ai3_gene_pane_g2

0x0001,

0xfceb,	// (0x0003ebc1) list_single_ai3_gene_pane_g

0x88c1,	// (0x00037797) list_double_ai3_gene_pane_g1_ParamLimits

0x88c1,	// (0x00037797) list_double_ai3_gene_pane_g1

0x88cd,	// (0x000377a3) list_double_ai3_gene_pane_t1_ParamLimits

0x88cd,	// (0x000377a3) list_double_ai3_gene_pane_t1

0x88e9,	// (0x000377bf) list_double_ai3_gene_pane_t2_ParamLimits

0x88e9,	// (0x000377bf) list_double_ai3_gene_pane_t2

0x88ff,	// (0x000377d5) list_double_ai3_gene_pane_t3_ParamLimits

0x88ff,	// (0x000377d5) list_double_ai3_gene_pane_t3

0x0002,

0xfcf0,	// (0x0003ebc6) list_double_ai3_gene_pane_t_ParamLimits

0xfcf0,	// (0x0003ebc6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2b2e,	// (0x00031a04) aid_size_min_col_2

0xe222,	// (0x0003d0f8) aid_size_min_msg_ParamLimits

0xe222,	// (0x0003d0f8) aid_size_min_msg

0xe008,	// (0x0003cede) fep_vkb_top_text_pane_g2_ParamLimits

0xe008,	// (0x0003cede) fep_vkb_top_text_pane_g2

0x0001,

0xfb50,	// (0x0003ea26) fep_vkb_top_text_pane_g_ParamLimits

0xfb50,	// (0x0003ea26) fep_vkb_top_text_pane_g

0x2ca9,	// (0x00031b7f) main_hc_apps_shell_pane

0x891c,	// (0x000377f2) grid_hc_apps_pane_ParamLimits

0x891c,	// (0x000377f2) grid_hc_apps_pane

0x892b,	// (0x00037801) list_hc_apps_pane

0x8933,	// (0x00037809) scroll_pane_cp37_ParamLimits

0x8933,	// (0x00037809) scroll_pane_cp37

0xe26c,	// (0x0003d142) cell_hc_apps_pane_ParamLimits

0xe26c,	// (0x0003d142) cell_hc_apps_pane

0xe32a,	// (0x0003d200) cell_hc_apps_pane_g1_ParamLimits

0xe32a,	// (0x0003d200) cell_hc_apps_pane_g1

0x8a1e,	// (0x000378f4) cell_hc_apps_pane_g2_ParamLimits

0x8a1e,	// (0x000378f4) cell_hc_apps_pane_g2

0x8a3a,	// (0x00037910) cell_hc_apps_pane_g3_ParamLimits

0x8a3a,	// (0x00037910) cell_hc_apps_pane_g3

0x0002,

0xfcf7,	// (0x0003ebcd) cell_hc_apps_pane_g_ParamLimits

0xfcf7,	// (0x0003ebcd) cell_hc_apps_pane_g

0xe357,	// (0x0003d22d) cell_hc_apps_pane_t1_ParamLimits

0xe357,	// (0x0003d22d) cell_hc_apps_pane_t1

0x3026,	// (0x00031efc) grid_highlight_pane_cp10_ParamLimits

0x3026,	// (0x00031efc) grid_highlight_pane_cp10

0xe395,	// (0x0003d26b) list_single_hc_apps_pane_ParamLimits

0xe395,	// (0x0003d26b) list_single_hc_apps_pane

0xe3c2,	// (0x0003d298) list_single_hc_apps_pane_g1

0xc132,	// (0x0003b008) list_single_hc_apps_pane_g2

0x0001,

0xfcfe,	// (0x0003ebd4) list_single_hc_apps_pane_g

0xc14b,	// (0x0003b021) list_single_hc_apps_pane_g2_copy1

0xc167,	// (0x0003b03d) list_single_hc_apps_pane_t1

0x2d9d,	// (0x00031c73) bg_set_opt_pane_cp_ParamLimits

0x0504,	// (0x0002f3da) setting_slider_pane_t1_ParamLimits

0x051d,	// (0x0002f3f3) setting_slider_pane_t2_ParamLimits

0x0537,	// (0x0002f40d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003e450) setting_slider_pane_t_ParamLimits

0x054f,	// (0x0002f425) slider_set_pane_ParamLimits

0x11a3,	// (0x00030079) control_pane_g5_ParamLimits

0x11a3,	// (0x00030079) control_pane_g5

0x646d,	// (0x00035343) slider_set_pane_g1_ParamLimits

0x15a3,	// (0x00030479) slider_set_pane_g2_ParamLimits

0x15af,	// (0x00030485) slider_set_pane_g3_ParamLimits

0x15c3,	// (0x00030499) slider_set_pane_g4_ParamLimits

0x15db,	// (0x000304b1) slider_set_pane_g5_ParamLimits

0x15af,	// (0x00030485) slider_set_pane_g6_ParamLimits

0x15f1,	// (0x000304c7) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0003e846) slider_set_pane_g_ParamLimits

0x40ee,	// (0x00032fc4) navi_icon_text_pane_ParamLimits

0xd386,	// (0x0003c25c) aid_fill_nsta_2_ParamLimits

0xd3ba,	// (0x0003c290) aid_touch_tab_arrow_left_ParamLimits

0xd3d0,	// (0x0003c2a6) aid_touch_tab_arrow_right_ParamLimits

0xd46b,	// (0x0003c341) clock_nsta_pane_ParamLimits

0xd91c,	// (0x0003c7f2) navi_icon_pane_g1_ParamLimits

0xd928,	// (0x0003c7fe) navi_text_pane_t1_ParamLimits

0xddd2,	// (0x0003cca8) navi_icon_text_pane_g1_ParamLimits

0xddde,	// (0x0003ccb4) navi_icon_text_pane_t1_ParamLimits

0xe3c2,	// (0x0003d298) list_single_hc_apps_pane_g1_ParamLimits

0xc132,	// (0x0003b008) list_single_hc_apps_pane_g2_ParamLimits

0xfcfe,	// (0x0003ebd4) list_single_hc_apps_pane_g_ParamLimits

0xc14b,	// (0x0003b021) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc167,	// (0x0003b03d) list_single_hc_apps_pane_t1_ParamLimits

0xb5ab,	// (0x0003a481) popup_toolbar2_fixed_window_ParamLimits

0xb5ab,	// (0x0003a481) popup_toolbar2_fixed_window

0xd2ef,	// (0x0003c1c5) popup_toolbar2_float_window

0x2ca9,	// (0x00031b7f) bg_popup_sub_pane_cp27

0x8b11,	// (0x000379e7) grid_toolbar2_float_pane

0x2ca9,	// (0x00031b7f) bg_popup_sub_pane_cp26

0x8b11,	// (0x000379e7) grid_toolbar2_fixed_pane

0xe3db,	// (0x0003d2b1) cell_toolbar2_fixed_pane_ParamLimits

0xe3db,	// (0x0003d2b1) cell_toolbar2_fixed_pane

0xe3f6,	// (0x0003d2cc) cell_toolbar2_fixed_pane_g1

0x8b32,	// (0x00037a08) toolbar2_fixed_button_pane

0x506a,	// (0x00033f40) toolbar2_fixed_button_pane_g1

0x507a,	// (0x00033f50) toolbar2_fixed_button_pane_g2

0x5072,	// (0x00033f48) toolbar2_fixed_button_pane_g3

0x508a,	// (0x00033f60) toolbar2_fixed_button_pane_g4

0x5082,	// (0x00033f58) toolbar2_fixed_button_pane_g5

0x5092,	// (0x00033f68) toolbar2_fixed_button_pane_g6

0x509a,	// (0x00033f70) toolbar2_fixed_button_pane_g7

0x50aa,	// (0x00033f80) toolbar2_fixed_button_pane_g8

0x50a2,	// (0x00033f78) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0003e748) toolbar2_fixed_button_pane_g

0x8b3a,	// (0x00037a10) cell_toolbar2_float_pane_ParamLimits

0x8b3a,	// (0x00037a10) cell_toolbar2_float_pane

0x8b4b,	// (0x00037a21) cell_toolbar2_float_pane_g1

0x8b32,	// (0x00037a08) toolbar2_fixed_button_pane_cp

0xdee2,	// (0x0003cdb8) fep_vkb_accented_list_pane_ParamLimits

0xdee2,	// (0x0003cdb8) fep_vkb_accented_list_pane

0x1966,	// (0x0003083c) bg_popup_fep_shadow_pane_g9

0x426e,	// (0x00033144) bg_popup_fep_shadow_pane_cp3

0x376a,	// (0x00032640) list_accented_list_pane

0x8b54,	// (0x00037a2a) list_single_accented_list_pane_ParamLimits

0x8b54,	// (0x00037a2a) list_single_accented_list_pane

0x426e,	// (0x00033144) list_highlight_pane_cp10

0x8b65,	// (0x00037a3b) list_single_accented_list_pane_t1

0xd219,	// (0x0003c0ef) popup_slider_window_ParamLimits

0xd219,	// (0x0003c0ef) popup_slider_window

0x87a1,	// (0x00037677) aid_indentation_list_msg

0xe4ef,	// (0x0003d3c5) bg_popup_window_pane_cp19

0x8c89,	// (0x00037b5f) popup_slider_window_g1

0x8ca5,	// (0x00037b7b) popup_slider_window_g2

0x8cc1,	// (0x00037b97) popup_slider_window_g3

0x0005,

0xfd03,	// (0x0003ebd9) popup_slider_window_g

0x8d1d,	// (0x00037bf3) popup_slider_window_t1

0x8d91,	// (0x00037c67) small_volume_slider_vertical_pane

0x7697,	// (0x0003656d) small_volume_slider_vertical_pane_g1

0x7697,	// (0x0003656d) small_volume_slider_vertical_pane_g2

0x8dad,	// (0x00037c83) small_volume_slider_vertical_pane_g3

0x0002,

0xfd15,	// (0x0003ebeb) small_volume_slider_vertical_pane_g

0xb519,	// (0x0003a3ef) area_side_right_pane_ParamLimits

0xb519,	// (0x0003a3ef) area_side_right_pane

0xc195,	// (0x0003b06b) aid_size_side_button_ParamLimits

0xc195,	// (0x0003b06b) aid_size_side_button

0xc1ae,	// (0x0003b084) grid_sctrl_middle_pane_ParamLimits

0xc1ae,	// (0x0003b084) grid_sctrl_middle_pane

0x1b84,	// (0x00030a5a) sctrl_sk_bottom_pane

0x1b95,	// (0x00030a6b) sctrl_sk_top_pane

0x1ba7,	// (0x00030a7d) aid_touch_sctrl_top

0x1bb4,	// (0x00030a8a) bg_sctrl_sk_pane_ParamLimits

0x1bb4,	// (0x00030a8a) bg_sctrl_sk_pane

0x1bc2,	// (0x00030a98) sctrl_sk_top_pane_g1

0x1bcf,	// (0x00030aa5) sctrl_sk_top_pane_t1

0x1ba7,	// (0x00030a7d) aid_touch_sctrl_bottom

0x1bb4,	// (0x00030a8a) bg_sctrl_sk_pane_cp_ParamLimits

0x1bb4,	// (0x00030a8a) bg_sctrl_sk_pane_cp

0x1bea,	// (0x00030ac0) sctrl_sk_bottom_pane_g1

0x1bcf,	// (0x00030aa5) sctrl_sk_bottom_pane_t1

0xc1c8,	// (0x0003b09e) cell_sctrl_middle_pane_ParamLimits

0xc1c8,	// (0x0003b09e) cell_sctrl_middle_pane

0xc1d9,	// (0x0003b0af) aid_touch_sctrl_middle_ParamLimits

0xc1d9,	// (0x0003b0af) aid_touch_sctrl_middle

0xc1e6,	// (0x0003b0bc) bg_sctrl_middle_pane_ParamLimits

0xc1e6,	// (0x0003b0bc) bg_sctrl_middle_pane

0x225a,	// (0x00031130) cell_sctrl_middle_pane_g1_ParamLimits

0x225a,	// (0x00031130) cell_sctrl_middle_pane_g1

0xc1f4,	// (0x0003b0ca) cell_sctrl_middle_pane_g2_ParamLimits

0xc1f4,	// (0x0003b0ca) cell_sctrl_middle_pane_g2

0x0001,

0xfd21,	// (0x0003ebf7) cell_sctrl_middle_pane_g_ParamLimits

0xfd21,	// (0x0003ebf7) cell_sctrl_middle_pane_g

0x506a,	// (0x00033f40) bg_sctrl_middle_pane_g1

0x5072,	// (0x00033f48) bg_sctrl_middle_pane_g2

0x507a,	// (0x00033f50) bg_sctrl_middle_pane_g3

0x5082,	// (0x00033f58) bg_sctrl_middle_pane_g4

0x508a,	// (0x00033f60) bg_sctrl_middle_pane_g5

0x5092,	// (0x00033f68) bg_sctrl_middle_pane_g6

0x509a,	// (0x00033f70) bg_sctrl_middle_pane_g7

0x50a2,	// (0x00033f78) bg_sctrl_middle_pane_g8

0x0007,

0xfd26,	// (0x0003ebfc) bg_sctrl_middle_pane_g

0x50aa,	// (0x00033f80) bg_sctrl_middle_pane_g8_copy1

0x506a,	// (0x00033f40) bg_sctrl_sk_pane_g1

0x507a,	// (0x00033f50) bg_sctrl_sk_pane_g2

0x5072,	// (0x00033f48) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0003e748) bg_sctrl_sk_pane_g

0x3538,	// (0x0003240e) aid_size_touch_scroll_bar

0x508a,	// (0x00033f60) bg_sctrl_sk_pane_g4

0x5082,	// (0x00033f58) bg_sctrl_sk_pane_g5

0x5092,	// (0x00033f68) bg_sctrl_sk_pane_g6

0x509a,	// (0x00033f70) bg_sctrl_sk_pane_g7

0x50aa,	// (0x00033f80) bg_sctrl_sk_pane_g8

0x50a2,	// (0x00033f78) bg_sctrl_sk_pane_g9

0x4674,	// (0x0003354a) popup_fep_china_hwr2_fs_candidate_window

0xcd5d,	// (0x0003bc33) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcd5d,	// (0x0003bc33) popup_fep_china_hwr2_fs_control_window

0x1986,	// (0x0003085c) sctrl_sk_top_pane_g2

0x0001,

0xfd1c,	// (0x0003ebf2) sctrl_sk_top_pane_g

0xe5a7,	// (0x0003d47d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5a7,	// (0x0003d47d) aid_fep_china_hwr2_fs_cell

0xe5bb,	// (0x0003d491) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5bb,	// (0x0003d491) bg_popup_fep_shadow_pane_cp4

0xe5d2,	// (0x0003d4a8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5d2,	// (0x0003d4a8) bg_popup_fep_shadow_pane_cp5

0xe5e4,	// (0x0003d4ba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5e4,	// (0x0003d4ba) popup_fep_china_hwr2_fs_control_bar_grid

0xe5f8,	// (0x0003d4ce) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e09,	// (0x00037cdf) aid_fep_china_hwr2_fs_candi_cell

0x2ca9,	// (0x00031b7f) bg_popup_fep_shadow_pane_cp6

0x8e13,	// (0x00037ce9) popup_fep_china_hwr2_fs_candidate_grid

0xe600,	// (0x0003d4d6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe600,	// (0x0003d4d6) cell_fep_china_hwr2_fs_funtion_grid

0x7697,	// (0x0003656d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e35,	// (0x00037d0b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e35,	// (0x00037d0b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e43,	// (0x00037d19) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e43,	// (0x00037d19) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd37,	// (0x0003ec0d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd37,	// (0x0003ec0d) cell_fep_china_hwr2_fs_funtion_grid_g

0xe618,	// (0x0003d4ee) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe618,	// (0x0003d4ee) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe62d,	// (0x0003d503) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe62d,	// (0x0003d503) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3c,	// (0x0003ec12) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3c,	// (0x0003ec12) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e8a,	// (0x00037d60) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e92,	// (0x00037d68) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e9a,	// (0x00037d70) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd41,	// (0x0003ec17) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8ea2,	// (0x00037d78) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8ea2,	// (0x00037d78) cell_fep_china_hwr2_fs_candidate_grid

0x8ebb,	// (0x00037d91) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ec3,	// (0x00037d99) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7697,	// (0x0003656d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7697,	// (0x0003656d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb55,	// (0x0003ea2b) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ecb,	// (0x00037da1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c67,	// (0x00033b3d) clock_nsta_pane_cp_24_ParamLimits

0x4c67,	// (0x00033b3d) clock_nsta_pane_cp_24

0x4ce5,	// (0x00033bbb) indicator_nsta_pane_cp_24_ParamLimits

0x4ce5,	// (0x00033bbb) indicator_nsta_pane_cp_24

0x5dc3,	// (0x00034c99) heading_pane_g1

0x0001,

0xf8d7,	// (0x0003e7ad) heading_pane_g

0x67ee,	// (0x000356c4) grid_sct_catagory_button_pane

0x681e,	// (0x000356f4) scroll_pane_cp5_ParamLimits

0x7288,	// (0x0003615e) button_value_adjust_pane_cp5_ParamLimits

0x7288,	// (0x0003615e) button_value_adjust_pane_cp5

0x7367,	// (0x0003623d) form2_midp_time_pane_ParamLimits

0x8ed9,	// (0x00037daf) cell_sct_catagory_button_pane_ParamLimits

0x8ed9,	// (0x00037daf) cell_sct_catagory_button_pane

0x765c,	// (0x00036532) bg_button_pane_cp01_ParamLimits

0x765c,	// (0x00036532) bg_button_pane_cp01

0x7697,	// (0x0003656d) cell_sct_catagory_button_pane_g1

0xd292,	// (0x0003c168) popup_tb_extension_window

0xe649,	// (0x0003d51f) aid_size_cell_ext_ParamLimits

0xe649,	// (0x0003d51f) aid_size_cell_ext

0x337a,	// (0x00032250) bg_tb_trans_pane_cp1_ParamLimits

0x337a,	// (0x00032250) bg_tb_trans_pane_cp1

0xe66f,	// (0x0003d545) grid_tb_ext_pane_ParamLimits

0xe66f,	// (0x0003d545) grid_tb_ext_pane

0xe6aa,	// (0x0003d580) cell_tb_ext_pane_ParamLimits

0xe6aa,	// (0x0003d580) cell_tb_ext_pane

0xe6d2,	// (0x0003d5a8) cell_tb_ext_pane_g1_ParamLimits

0xe6d2,	// (0x0003d5a8) cell_tb_ext_pane_g1

0x8f6d,	// (0x00037e43) cell_tb_ext_pane_t1

0x3026,	// (0x00031efc) list_highlight_pane_cp11_ParamLimits

0x3026,	// (0x00031efc) list_highlight_pane_cp11

0x0437,	// (0x0002f30d) popup_uni_indicator_window_ParamLimits

0x0437,	// (0x0002f30d) popup_uni_indicator_window

0x3609,	// (0x000324df) bg_popup_sub_pane_cp14

0x8f88,	// (0x00037e5e) list_uniindi_pane

0x8f94,	// (0x00037e6a) uniindi_top_pane

0x3026,	// (0x00031efc) bg_uniindi_top_pane

0x8fb3,	// (0x00037e89) uniindi_top_pane_g1

0x8fc9,	// (0x00037e9f) uniindi_top_pane_g2

0x0003,

0xfd48,	// (0x0003ec1e) uniindi_top_pane_g

0x8ff3,	// (0x00037ec9) uniindi_top_pane_t1

0x901d,	// (0x00037ef3) list_single_uniindi_pane_ParamLimits

0x901d,	// (0x00037ef3) list_single_uniindi_pane

0x7697,	// (0x0003656d) bg_uniindi_top_pane_g1

0x9030,	// (0x00037f06) list_single_uniindi_pane_g1

0x9043,	// (0x00037f19) list_single_uniindi_pane_t1

0x02ad,	// (0x0002f183) control_bg_pane

0x9068,	// (0x00037f3e) bg_sctrl_sk_pane_cp1

0x9071,	// (0x00037f47) bg_sctrl_sk_pane_cp2

0x907a,	// (0x00037f50) control_bg_pane_g1

0x9083,	// (0x00037f59) control_bg_pane_g2

0x0001,

0xfd51,	// (0x0003ec27) control_bg_pane_g

0x70bc,	// (0x00035f92) cell_indicator_nsta_pane_g1_ParamLimits

0xdd39,	// (0x0003cc0f) cell_indicator_nsta_pane_g2_ParamLimits

0xfab9,	// (0x0003e98f) cell_indicator_nsta_pane_g_ParamLimits

0x28eb,	// (0x000317c1) form2_midp_time_pane_t1_ParamLimits

0x8487,	// (0x0003735d) main_idle_act4_pane_ParamLimits

0x8487,	// (0x0003735d) main_idle_act4_pane

0xd292,	// (0x0003c168) popup_tb_extension_window_ParamLimits

0xe691,	// (0x0003d567) tb_ext_find_pane_ParamLimits

0xe691,	// (0x0003d567) tb_ext_find_pane

0x908c,	// (0x00037f62) ai_gene_pane_1_cp1

0x43b3,	// (0x00033289) ai_gene_pane_2_cp1

0x9094,	// (0x00037f6a) list_single_idle_plugin_calendar_pane

0x909d,	// (0x00037f73) list_single_idle_plugin_notification_pane

0x90a6,	// (0x00037f7c) list_single_idle_plugin_player_pane

0xe6ef,	// (0x0003d5c5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6ef,	// (0x0003d5c5) list_single_idle_plugin_shortcut_pane

0xe717,	// (0x0003d5ed) main_idle_act4_pane_t1

0xe72d,	// (0x0003d603) main_idle_act4_pane_t2

0x0001,

0xfd56,	// (0x0003ec2c) main_idle_act4_pane_t

0xe743,	// (0x0003d619) middle_sk_idle_act4_pane_ParamLimits

0xe743,	// (0x0003d619) middle_sk_idle_act4_pane

0xe75f,	// (0x0003d635) popup_clock_digital_analogue_window_cp2

0xe787,	// (0x0003d65d) shortcut_wheel_idle_act4_pane_ParamLimits

0xe787,	// (0x0003d65d) shortcut_wheel_idle_act4_pane

0x7697,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g1

0x7697,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g2

0x7697,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g3

0x7697,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g4

0x7697,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g5

0x9139,	// (0x0003800f) shortcut_wheel_idle_act4_pane_g6

0x9141,	// (0x00038017) shortcut_wheel_idle_act4_pane_g7

0x9149,	// (0x0003801f) shortcut_wheel_idle_act4_pane_g8

0x9151,	// (0x00038027) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5b,	// (0x0003ec31) shortcut_wheel_idle_act4_pane_g

0xd89c,	// (0x0003c772) middle_sk_idle_act4_pane_g1_ParamLimits

0xd89c,	// (0x0003c772) middle_sk_idle_act4_pane_g1

0xe804,	// (0x0003d6da) middle_sk_idle_act4_pane_g2_ParamLimits

0xe804,	// (0x0003d6da) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7e,	// (0x0003ec54) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7e,	// (0x0003ec54) middle_sk_idle_act4_pane_g

0xe81c,	// (0x0003d6f2) middle_sk_idle_act4_pane_t1_ParamLimits

0xe81c,	// (0x0003d6f2) middle_sk_idle_act4_pane_t1

0xe84b,	// (0x0003d721) grid_ai_shortcut_pane_ParamLimits

0xe84b,	// (0x0003d721) grid_ai_shortcut_pane

0xe868,	// (0x0003d73e) list_highlight_pane_cp16_ParamLimits

0xe868,	// (0x0003d73e) list_highlight_pane_cp16

0xe875,	// (0x0003d74b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe875,	// (0x0003d74b) list_single_idle_plugin_shortcut_pane_g1

0xe881,	// (0x0003d757) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe881,	// (0x0003d757) list_single_idle_plugin_shortcut_pane_g2

0xe89d,	// (0x0003d773) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe89d,	// (0x0003d773) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd83,	// (0x0003ec59) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd83,	// (0x0003ec59) list_single_idle_plugin_shortcut_pane_g

0xe8b2,	// (0x0003d788) cell_ai_shortcut_pane_ParamLimits

0xe8b2,	// (0x0003d788) cell_ai_shortcut_pane

0xe8c8,	// (0x0003d79e) cell_ai_shortcut_pane_g1_ParamLimits

0xe8c8,	// (0x0003d79e) cell_ai_shortcut_pane_g1

0x908c,	// (0x00037f62) ai_gene_pane_1_cp2

0x9281,	// (0x00038157) ai_gene_pane_2_cp2

0x9289,	// (0x0003815f) list_highlight_pane_cp15

0x9292,	// (0x00038168) list_single_idle_plugin_calendar_pane_g1

0x9289,	// (0x0003815f) list_highlight_pane_cp17

0x929a,	// (0x00038170) list_single_idle_plugin_calendar_pane_g1_copy1

0x92a2,	// (0x00038178) list_single_idle_plugin_player_pane_g1

0x6a47,	// (0x0003591d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8a,	// (0x0003ec60) list_single_idle_plugin_player_pane_g

0x92aa,	// (0x00038180) list_single_idle_plugin_player_pane_t1

0x92b8,	// (0x0003818e) list_single_idle_plugin_player_pane_t2

0x92c6,	// (0x0003819c) list_single_idle_plugin_player_pane_t3

0x92d4,	// (0x000381aa) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8f,	// (0x0003ec65) list_single_idle_plugin_player_pane_t

0x92e2,	// (0x000381b8) wait_bar_pane_cp15

0x92ea,	// (0x000381c0) grid_ai_notification_pane

0x6a47,	// (0x0003591d) list_single_idle_plugin_notification_pane_g1

0xe8ea,	// (0x0003d7c0) cell_ai_notification_pane_ParamLimits

0xe8ea,	// (0x0003d7c0) cell_ai_notification_pane

0x9300,	// (0x000381d6) cell_ai_notification_pane_g1

0x9308,	// (0x000381de) cell_ai_notification_pane_t1

0xe8f7,	// (0x0003d7cd) tb_ext_find_button_pane

0xe8ff,	// (0x0003d7d5) tb_ext_find_pane_g1

0xe907,	// (0x0003d7dd) tb_ext_find_pane_t1

0x3c91,	// (0x00032b67) tb_ext_find_button_pane_g1

0x9334,	// (0x0003820a) tb_ext_find_button_pane_g2

0x0001,

0xfd98,	// (0x0003ec6e) tb_ext_find_button_pane_g

0xe717,	// (0x0003d5ed) main_idle_act4_pane_t1_ParamLimits

0xe72d,	// (0x0003d603) main_idle_act4_pane_t2_ParamLimits

0xfd56,	// (0x0003ec2c) main_idle_act4_pane_t_ParamLimits

0xe75f,	// (0x0003d635) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe777,	// (0x0003d64d) sat_plugin_idle_act4_pane_ParamLimits

0xe777,	// (0x0003d64d) sat_plugin_idle_act4_pane

0xe915,	// (0x0003d7eb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe915,	// (0x0003d7eb) sat_plugin_idle_act4_pane_t1

0xe92d,	// (0x0003d803) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe92d,	// (0x0003d803) sat_plugin_idle_act4_pane_t2

0xe945,	// (0x0003d81b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe945,	// (0x0003d81b) sat_plugin_idle_act4_pane_t3

0xe95d,	// (0x0003d833) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe95d,	// (0x0003d833) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9d,	// (0x0003ec73) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9d,	// (0x0003ec73) sat_plugin_idle_act4_pane_t

0x0372,	// (0x0002f248) popup_battery_window_ParamLimits

0x0372,	// (0x0002f248) popup_battery_window

0x3026,	// (0x00031efc) bg_popup_sub_pane_cp25_ParamLimits

0x3026,	// (0x00031efc) bg_popup_sub_pane_cp25

0x9389,	// (0x0003825f) popup_battery_window_g1_ParamLimits

0x9389,	// (0x0003825f) popup_battery_window_g1

0x9395,	// (0x0003826b) popup_battery_window_t1_ParamLimits

0x9395,	// (0x0003826b) popup_battery_window_t1

0x93a7,	// (0x0003827d) popup_battery_window_t2_ParamLimits

0x93a7,	// (0x0003827d) popup_battery_window_t2

0x0001,

0xfda6,	// (0x0003ec7c) popup_battery_window_t_ParamLimits

0xfda6,	// (0x0003ec7c) popup_battery_window_t

0xcbdc,	// (0x0003bab2) midp_canvas_pane_ParamLimits

0xcc37,	// (0x0003bb0d) midp_keypad_pane_ParamLimits

0xcc37,	// (0x0003bb0d) midp_keypad_pane

0x45d4,	// (0x000334aa) main_midp_pane_ParamLimits

0x7148,	// (0x0003601e) signal_pane_g2_cp_ParamLimits

0xe975,	// (0x0003d84b) aid_size_cell_midp_keypad_ParamLimits

0xe975,	// (0x0003d84b) aid_size_cell_midp_keypad

0xe993,	// (0x0003d869) midp_keyp_game_grid_pane_ParamLimits

0xe993,	// (0x0003d869) midp_keyp_game_grid_pane

0xe9ba,	// (0x0003d890) midp_keyp_rocker_pane_ParamLimits

0xe9ba,	// (0x0003d890) midp_keyp_rocker_pane

0xea13,	// (0x0003d8e9) midp_keyp_sk_left_pane_ParamLimits

0xea13,	// (0x0003d8e9) midp_keyp_sk_left_pane

0xea74,	// (0x0003d94a) midp_keyp_sk_right_pane_ParamLimits

0xea74,	// (0x0003d94a) midp_keyp_sk_right_pane

0x2ca9,	// (0x00031b7f) bg_button_pane_cp03

0xeac8,	// (0x0003d99e) midp_keyp_sk_left_pane_g1

0x2ca9,	// (0x00031b7f) bg_button_pane_cp04

0xeac8,	// (0x0003d99e) midp_keyp_sk_right_pane_g1

0x7697,	// (0x0003656d) midp_keyp_rocker_pane_g1

0xead1,	// (0x0003d9a7) keyp_game_cell_pane_ParamLimits

0xead1,	// (0x0003d9a7) keyp_game_cell_pane

0x2ca9,	// (0x00031b7f) bg_button_pane_cp02

0xeaf5,	// (0x0003d9cb) keyp_game_cell_pane_g1

0xb55b,	// (0x0003a431) popup_fep_vkb2_window_ParamLimits

0xb55b,	// (0x0003a431) popup_fep_vkb2_window

0xc200,	// (0x0003b0d6) aid_size_cell_vkb2_ParamLimits

0xc200,	// (0x0003b0d6) aid_size_cell_vkb2

0xc236,	// (0x0003b10c) popup_fep_vkb2_window_g1_ParamLimits

0xc236,	// (0x0003b10c) popup_fep_vkb2_window_g1

0xc286,	// (0x0003b15c) vkb2_area_bottom_pane_ParamLimits

0xc286,	// (0x0003b15c) vkb2_area_bottom_pane

0xc2da,	// (0x0003b1b0) vkb2_area_keypad_pane_ParamLimits

0xc2da,	// (0x0003b1b0) vkb2_area_keypad_pane

0xc322,	// (0x0003b1f8) vkb2_area_top_pane_ParamLimits

0xc322,	// (0x0003b1f8) vkb2_area_top_pane

0xc3a8,	// (0x0003b27e) vkb2_top_entry_pane_ParamLimits

0xc3a8,	// (0x0003b27e) vkb2_top_entry_pane

0xc3d5,	// (0x0003b2ab) vkb2_top_grid_left_pane_ParamLimits

0xc3d5,	// (0x0003b2ab) vkb2_top_grid_left_pane

0xc3f5,	// (0x0003b2cb) vkb2_top_grid_right_pane_ParamLimits

0xc3f5,	// (0x0003b2cb) vkb2_top_grid_right_pane

0x1e59,	// (0x00030d2f) vkb2_cell_keypad_pane_ParamLimits

0x1e59,	// (0x00030d2f) vkb2_cell_keypad_pane

0xc43b,	// (0x0003b311) vkb2_area_bottom_grid_pane_ParamLimits

0xc43b,	// (0x0003b311) vkb2_area_bottom_grid_pane

0xc465,	// (0x0003b33b) vkb2_area_bottom_pane_g1_ParamLimits

0xc465,	// (0x0003b33b) vkb2_area_bottom_pane_g1

0xc48b,	// (0x0003b361) vkb2_area_bottom_pane_g2_ParamLimits

0xc48b,	// (0x0003b361) vkb2_area_bottom_pane_g2

0xc4bc,	// (0x0003b392) vkb2_area_bottom_pane_g3_ParamLimits

0xc4bc,	// (0x0003b392) vkb2_area_bottom_pane_g3

0x0002,

0xfdab,	// (0x0003ec81) vkb2_area_bottom_pane_g_ParamLimits

0xfdab,	// (0x0003ec81) vkb2_area_bottom_pane_g

0x2003,	// (0x00030ed9) vkb2_top_cell_left_pane_ParamLimits

0x2003,	// (0x00030ed9) vkb2_top_cell_left_pane

0xeafe,	// (0x0003d9d4) vkb2_top_entry_pane_g1_ParamLimits

0xeafe,	// (0x0003d9d4) vkb2_top_entry_pane_g1

0xeb0c,	// (0x0003d9e2) vkb2_top_entry_pane_t1_ParamLimits

0xeb0c,	// (0x0003d9e2) vkb2_top_entry_pane_t1

0x9579,	// (0x0003844f) vkb2_top_entry_pane_t2_ParamLimits

0x9579,	// (0x0003844f) vkb2_top_entry_pane_t2

0x95ab,	// (0x00038481) vkb2_top_entry_pane_t3_ParamLimits

0x95ab,	// (0x00038481) vkb2_top_entry_pane_t3

0x0002,

0xfdb2,	// (0x0003ec88) vkb2_top_entry_pane_t_ParamLimits

0xfdb2,	// (0x0003ec88) vkb2_top_entry_pane_t

0xc526,	// (0x0003b3fc) vkb2_top_grid_right_pane_g1_ParamLimits

0xc526,	// (0x0003b3fc) vkb2_top_grid_right_pane_g1

0x2066,	// (0x00030f3c) vkb2_top_grid_right_pane_g2_ParamLimits

0x2066,	// (0x00030f3c) vkb2_top_grid_right_pane_g2

0x207e,	// (0x00030f54) vkb2_top_grid_right_pane_g3_ParamLimits

0x207e,	// (0x00030f54) vkb2_top_grid_right_pane_g3

0xc53c,	// (0x0003b412) vkb2_top_grid_right_pane_g4_ParamLimits

0xc53c,	// (0x0003b412) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb9,	// (0x0003ec8f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb9,	// (0x0003ec8f) vkb2_top_grid_right_pane_g

0x20ac,	// (0x00030f82) vkb2_top_cell_left_pane_g1

0x20c3,	// (0x00030f99) vkb2_cell_keypad_pane_g1_ParamLimits

0x20c3,	// (0x00030f99) vkb2_cell_keypad_pane_g1

0x95cf,	// (0x000384a5) vkb2_cell_keypad_pane_t1_ParamLimits

0x95cf,	// (0x000384a5) vkb2_cell_keypad_pane_t1

0x20d1,	// (0x00030fa7) vkb2_cell_bottom_grid_pane_ParamLimits

0x20d1,	// (0x00030fa7) vkb2_cell_bottom_grid_pane

0x210a,	// (0x00030fe0) vkb2_cell_bottom_grid_pane_g1

0xe7a8,	// (0x0003d67e) aid_call2_pane_cp02

0xe7b0,	// (0x0003d686) aid_call_pane_cp02

0xe7b8,	// (0x0003d68e) clock_digital_number_pane_cp10

0xe7c0,	// (0x0003d696) clock_digital_number_pane_cp11

0xe7c8,	// (0x0003d69e) clock_digital_number_pane_cp12

0xe7d0,	// (0x0003d6a6) clock_digital_number_pane_cp13

0xe7d8,	// (0x0003d6ae) clock_digital_separator_pane_cp10

0x3c91,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g1

0x3c91,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g2

0xe7e0,	// (0x0003d6b6) popup_clock_digital_analogue_window_cp2_g3

0x3c91,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g4

0xe7e0,	// (0x0003d6b6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6e,	// (0x0003ec44) popup_clock_digital_analogue_window_cp2_g

0xe7e8,	// (0x0003d6be) popup_clock_digital_analogue_window_cp2_t1

0xe7f6,	// (0x0003d6cc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd79,	// (0x0003ec4f) popup_clock_digital_analogue_window_cp2_t

0x7697,	// (0x0003656d) clock_digital_number_pane_cp10_g1

0x7697,	// (0x0003656d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb55,	// (0x0003ea2b) clock_digital_number_pane_cp10_g

0x7697,	// (0x0003656d) clock_digital_separator_pane_cp10_g1

0x7697,	// (0x0003656d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb55,	// (0x0003ea2b) clock_digital_separator_pane_cp10_g

0x8fd5,	// (0x00037eab) uniindi_top_pane_g3

0x8fe6,	// (0x00037ebc) uniindi_top_pane_g4

0x1ee4,	// (0x00030dba) vkb2_row_keypad_pane_ParamLimits

0x1ee4,	// (0x00030dba) vkb2_row_keypad_pane

0x2126,	// (0x00030ffc) vkb2_cell_t_keypad_pane_ParamLimits

0x2126,	// (0x00030ffc) vkb2_cell_t_keypad_pane

0x2136,	// (0x0003100c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2136,	// (0x0003100c) vkb2_cell_t_keypad_pane_cp08

0x2149,	// (0x0003101f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2149,	// (0x0003101f) vkb2_cell_t_keypad_pane_cp09

0x215d,	// (0x00031033) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x215d,	// (0x00031033) vkb2_cell_t_keypad_pane_cp01

0x216e,	// (0x00031044) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x216e,	// (0x00031044) vkb2_cell_t_keypad_pane_cp02

0x217f,	// (0x00031055) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x217f,	// (0x00031055) vkb2_cell_t_keypad_pane_cp03

0x2190,	// (0x00031066) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2190,	// (0x00031066) vkb2_cell_t_keypad_pane_cp04

0x21a1,	// (0x00031077) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x21a1,	// (0x00031077) vkb2_cell_t_keypad_pane_cp05

0x21b2,	// (0x00031088) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x21b2,	// (0x00031088) vkb2_cell_t_keypad_pane_cp06

0x21c3,	// (0x00031099) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x21c3,	// (0x00031099) vkb2_cell_t_keypad_pane_cp07

0x21d4,	// (0x000310aa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x21d4,	// (0x000310aa) vkb2_cell_t_keypad_pane_cp10

0x1986,	// (0x0003085c) vkb2_cell_t_keypad_pane_g1

0x95e6,	// (0x000384bc) vkb2_cell_t_keypad_pane_t1

0x02ad,	// (0x0002f183) popup_grid_graphic2_window

0xeb45,	// (0x0003da1b) aid_size_cell_graphic2_ParamLimits

0xeb45,	// (0x0003da1b) aid_size_cell_graphic2

0x5737,	// (0x0003460d) bg_popup_window_pane_cp21_ParamLimits

0x5737,	// (0x0003460d) bg_popup_window_pane_cp21

0xeb77,	// (0x0003da4d) graphic2_pages_pane_ParamLimits

0xeb77,	// (0x0003da4d) graphic2_pages_pane

0xebcd,	// (0x0003daa3) grid_graphic2_control_pane_ParamLimits

0xebcd,	// (0x0003daa3) grid_graphic2_control_pane

0xec01,	// (0x0003dad7) grid_graphic2_pane_ParamLimits

0xec01,	// (0x0003dad7) grid_graphic2_pane

0xec74,	// (0x0003db4a) cell_graphic2_pane

0x2ca9,	// (0x00031b7f) main_comp_mode_pane

0x8855,	// (0x0003772b) list_ai3_gene_pane_ParamLimits

0xe4ef,	// (0x0003d3c5) bg_popup_window_pane_cp19_ParamLimits

0x8c2b,	// (0x00037b01) bg_touch_area_indi_pane_ParamLimits

0x8c2b,	// (0x00037b01) bg_touch_area_indi_pane

0x8c41,	// (0x00037b17) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c41,	// (0x00037b17) bg_touch_area_indi_pane_cp01

0x8c57,	// (0x00037b2d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c57,	// (0x00037b2d) bg_touch_area_indi_pane_cp02

0x8c6f,	// (0x00037b45) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c6f,	// (0x00037b45) bg_touch_area_indi_pane_cp03

0x8c89,	// (0x00037b5f) popup_slider_window_g1_ParamLimits

0x8ca5,	// (0x00037b7b) popup_slider_window_g2_ParamLimits

0x8cc1,	// (0x00037b97) popup_slider_window_g3_ParamLimits

0xfd03,	// (0x0003ebd9) popup_slider_window_g_ParamLimits

0x8d1d,	// (0x00037bf3) popup_slider_window_t1_ParamLimits

0x8d91,	// (0x00037c67) small_volume_slider_vertical_pane_ParamLimits

0xec74,	// (0x0003db4a) cell_graphic2_pane_ParamLimits

0xeccf,	// (0x0003dba5) bg_button_pane_cp10_ParamLimits

0xeccf,	// (0x0003dba5) bg_button_pane_cp10

0xece2,	// (0x0003dbb8) bg_button_pane_cp11_ParamLimits

0xece2,	// (0x0003dbb8) bg_button_pane_cp11

0xecf5,	// (0x0003dbcb) graphic2_pages_pane_g1_ParamLimits

0xecf5,	// (0x0003dbcb) graphic2_pages_pane_g1

0xed10,	// (0x0003dbe6) graphic2_pages_pane_g2_ParamLimits

0xed10,	// (0x0003dbe6) graphic2_pages_pane_g2

0x0001,

0xfdc7,	// (0x0003ec9d) graphic2_pages_pane_g_ParamLimits

0xfdc7,	// (0x0003ec9d) graphic2_pages_pane_g

0xed28,	// (0x0003dbfe) graphic2_pages_pane_t1_ParamLimits

0xed28,	// (0x0003dbfe) graphic2_pages_pane_t1

0xed40,	// (0x0003dc16) cell_graphic2_control_pane_ParamLimits

0xed40,	// (0x0003dc16) cell_graphic2_control_pane

0xed5a,	// (0x0003dc30) cell_graphic2_pane_g1_ParamLimits

0xed5a,	// (0x0003dc30) cell_graphic2_pane_g1

0xd8aa,	// (0x0003c780) cell_graphic2_pane_g2_ParamLimits

0xd8aa,	// (0x0003c780) cell_graphic2_pane_g2

0xea67,	// (0x0003d93d) cell_graphic2_pane_g3_ParamLimits

0xea67,	// (0x0003d93d) cell_graphic2_pane_g3

0xd8b7,	// (0x0003c78d) cell_graphic2_pane_g4_ParamLimits

0xd8b7,	// (0x0003c78d) cell_graphic2_pane_g4

0xed67,	// (0x0003dc3d) cell_graphic2_pane_g5_ParamLimits

0xed67,	// (0x0003dc3d) cell_graphic2_pane_g5

0x0004,

0xfdcc,	// (0x0003eca2) cell_graphic2_pane_g_ParamLimits

0xfdcc,	// (0x0003eca2) cell_graphic2_pane_g

0xed87,	// (0x0003dc5d) cell_graphic2_pane_t1_ParamLimits

0xed87,	// (0x0003dc5d) cell_graphic2_pane_t1

0x5db7,	// (0x00034c8d) grid_highlight_pane_cp11_ParamLimits

0x5db7,	// (0x00034c8d) grid_highlight_pane_cp11

0x3609,	// (0x000324df) bg_button_pane_cp05

0xedbc,	// (0x0003dc92) cell_graphic2_control_pane_g1

0x7697,	// (0x0003656d) bg_touch_area_indi_pane_g1

0x9857,	// (0x0003872d) aid_cmod_rocker_key_size

0x9861,	// (0x00038737) aid_cmode_itu_key_size

0x986b,	// (0x00038741) main_cmode_video_pane

0x9875,	// (0x0003874b) main_comp_mode_itu_pane

0x9881,	// (0x00038757) main_comp_mode_rocker_pane

0x988d,	// (0x00038763) cell_cmode_rocker_pane_ParamLimits

0x988d,	// (0x00038763) cell_cmode_rocker_pane

0x989f,	// (0x00038775) cell_cmode_itu_pane_ParamLimits

0x989f,	// (0x00038775) cell_cmode_itu_pane

0x3609,	// (0x000324df) bg_button_pane_cp06_ParamLimits

0x3609,	// (0x000324df) bg_button_pane_cp06

0x7929,	// (0x000367ff) cell_cmode_rocker_pane_g1_ParamLimits

0x7929,	// (0x000367ff) cell_cmode_rocker_pane_g1

0x8e35,	// (0x00037d0b) cell_cmode_rocker_pane_g2_ParamLimits

0x8e35,	// (0x00037d0b) cell_cmode_rocker_pane_g2

0x0001,

0xfddc,	// (0x0003ecb2) cell_cmode_rocker_pane_g_ParamLimits

0xfddc,	// (0x0003ecb2) cell_cmode_rocker_pane_g

0x2ca9,	// (0x00031b7f) bg_button_pane_cp07

0x98b4,	// (0x0003878a) cell_cmode_itu_pane_g1

0x98bd,	// (0x00038793) cell_cmode_itu_pane_t1

0x98cb,	// (0x000387a1) cell_cmode_itu_pane_t2

0x0001,

0xfde1,	// (0x0003ecb7) cell_cmode_itu_pane_t

0x9058,	// (0x00037f2e) aid_touch_ctrl_left

0x9060,	// (0x00037f36) aid_touch_ctrl_right

0x2ca9,	// (0x00031b7f) compa_mode_pane

0xedc9,	// (0x0003dc9f) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0003dca9) aid_cmode_itu_key_size_cp

0x98ed,	// (0x000387c3) compa_mode_pane_g1

0x98f5,	// (0x000387cb) compa_mode_pane_g2

0x98fd,	// (0x000387d3) compa_mode_pane_g3

0x0002,

0xfde6,	// (0x0003ecbc) compa_mode_pane_g

0xeddd,	// (0x0003dcb3) main_comp_mode_itu_pane_cp

0xede5,	// (0x0003dcbb) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0003dcc3) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0003dcc3) cell_cmode_itu_pane_cp

0xee02,	// (0x0003dcd8) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0003dcd8) cell_cmode_rocker_pane_cp

0x3609,	// (0x000324df) bg_button_pane_cp06_cp_ParamLimits

0x3609,	// (0x000324df) bg_button_pane_cp06_cp

0x7929,	// (0x000367ff) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7929,	// (0x000367ff) cell_cmode_rocker_pane_g1_cp

0x7697,	// (0x0003656d) cell_cmode_rocker_pane_g2_cp

0x2ca9,	// (0x00031b7f) bg_button_pane_cp07_cp

0xee14,	// (0x0003dcea) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0003dcf3) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0003dcf3) cell_cmode_itu_pane_t2_cp

0xdb36,	// (0x0003ca0c) settings_code_pane_cp2

0x2d9d,	// (0x00031c73) bg_popup_window_pane_cp3_ParamLimits

0x3200,	// (0x000320d6) heading_pane_cp3_ParamLimits

0x320c,	// (0x000320e2) listscroll_popup_graphic_pane_ParamLimits

0x172f,	// (0x00030605) fep_hwr_aid_pane_ParamLimits

0x1ba7,	// (0x00030a7d) aid_touch_sctrl_top_ParamLimits

0x1bc2,	// (0x00030a98) sctrl_sk_top_pane_g1_ParamLimits

0x1986,	// (0x0003085c) sctrl_sk_top_pane_g2_ParamLimits

0xfd1c,	// (0x0003ebf2) sctrl_sk_top_pane_g_ParamLimits

0x1bcf,	// (0x00030aa5) sctrl_sk_top_pane_t1_ParamLimits

0x1ba7,	// (0x00030a7d) aid_touch_sctrl_bottom_ParamLimits

0x1bcf,	// (0x00030aa5) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fa1,	// (0x00037e77) aid_area_touch_clock

0xc36a,	// (0x0003b240) aid_vkb2_area_top_pane_cell_ParamLimits

0xc36a,	// (0x0003b240) aid_vkb2_area_top_pane_cell

0xc415,	// (0x0003b2eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc415,	// (0x0003b2eb) aid_vkb2_area_bottom_pane_cell

0x9531,	// (0x00038407) popup_char_count_window

0x994a,	// (0x00038820) popup_char_count_window_g1

0x9953,	// (0x00038829) popup_char_count_window_g2

0x995c,	// (0x00038832) popup_char_count_window_g3

0x0002,

0xfded,	// (0x0003ecc3) popup_char_count_window_g

0x9965,	// (0x0003883b) popup_char_count_window_t1

0x1c81,	// (0x00030b57) popup_fep_char_preview_window_ParamLimits

0x1c81,	// (0x00030b57) popup_fep_char_preview_window

0xc38a,	// (0x0003b260) vkb2_top_candi_pane_ParamLimits

0xc38a,	// (0x0003b260) vkb2_top_candi_pane

0xee2b,	// (0x0003dd01) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0003dd01) cell_vkb2_top_candi_pane

0x21e9,	// (0x000310bf) bg_popup_fep_char_preview_window_ParamLimits

0x21e9,	// (0x000310bf) bg_popup_fep_char_preview_window

0x21f7,	// (0x000310cd) popup_fep_char_preview_window_t1_ParamLimits

0x21f7,	// (0x000310cd) popup_fep_char_preview_window_t1

0x99c0,	// (0x00038896) bg_popup_fep_char_preview_window_g1

0x99c8,	// (0x0003889e) bg_popup_fep_char_preview_window_g2

0x99d0,	// (0x000388a6) bg_popup_fep_char_preview_window_g3

0x99d8,	// (0x000388ae) bg_popup_fep_char_preview_window_g4

0x99e0,	// (0x000388b6) bg_popup_fep_char_preview_window_g5

0x2231,	// (0x00031107) bg_popup_fep_char_preview_window_g6

0x99e8,	// (0x000388be) bg_popup_fep_char_preview_window_g7

0x99f0,	// (0x000388c6) bg_popup_fep_char_preview_window_g8

0x99f8,	// (0x000388ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf4,	// (0x0003ecca) bg_popup_fep_char_preview_window_g

0x1986,	// (0x0003085c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1986,	// (0x0003085c) cell_vkb2_top_candi_pane_g1

0x1994,	// (0x0003086a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1994,	// (0x0003086a) cell_vkb2_top_candi_pane_g2

0x9491,	// (0x00038367) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9491,	// (0x00038367) cell_vkb2_top_candi_pane_g3

0x2239,	// (0x0003110f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2239,	// (0x0003110f) cell_vkb2_top_candi_pane_g4

0x7df4,	// (0x00036cca) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7df4,	// (0x00036cca) cell_vkb2_top_candi_pane_g5

0x225a,	// (0x00031130) cell_vkb2_top_candi_pane_g6_ParamLimits

0x225a,	// (0x00031130) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe07,	// (0x0003ecdd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe07,	// (0x0003ecdd) cell_vkb2_top_candi_pane_g

0x2268,	// (0x0003113e) cell_vkb2_top_candi_pane_t1

0x158f,	// (0x00030465) aid_size_touch_slider_mark_ParamLimits

0x158f,	// (0x00030465) aid_size_touch_slider_mark

0xebb3,	// (0x0003da89) grid_graphic2_catg_pane_ParamLimits

0xebb3,	// (0x0003da89) grid_graphic2_catg_pane

0xec47,	// (0x0003db1d) popup_grid_graphic2_window_t1_ParamLimits

0xec47,	// (0x0003db1d) popup_grid_graphic2_window_t1

0xec5d,	// (0x0003db33) popup_grid_graphic2_window_t2_ParamLimits

0xec5d,	// (0x0003db33) popup_grid_graphic2_window_t2

0x0001,

0xfdc2,	// (0x0003ec98) popup_grid_graphic2_window_t_ParamLimits

0xfdc2,	// (0x0003ec98) popup_grid_graphic2_window_t

0x3609,	// (0x000324df) bg_button_pane_cp05_ParamLimits

0xedbc,	// (0x0003dc92) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0003dd67) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0003dd67) cell_graphic2_catg_pane

0x2ca9,	// (0x00031b7f) bg_button_pane_cp12

0xeea3,	// (0x0003dd79) cell_graphic2_catg_pane_g1

0x8f6d,	// (0x00037e43) cell_tb_ext_pane_t1_ParamLimits

0x2023,	// (0x00030ef9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2023,	// (0x00030ef9) vkb2_top_cell_right_narrow_pane

0x203b,	// (0x00030f11) vkb2_top_cell_right_wide_pane_ParamLimits

0x203b,	// (0x00030f11) vkb2_top_cell_right_wide_pane

0x1721,	// (0x000305f7) bg_vkb2_func_pane_ParamLimits

0x1721,	// (0x000305f7) bg_vkb2_func_pane

0x20ac,	// (0x00030f82) vkb2_top_cell_left_pane_g1_ParamLimits

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp03

0x210a,	// (0x00030fe0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5072,	// (0x00033f48) bg_vkb2_func_pane_g1

0x507a,	// (0x00033f50) bg_vkb2_func_pane_g2

0x508a,	// (0x00033f60) bg_vkb2_func_pane_g3

0x5082,	// (0x00033f58) bg_vkb2_func_pane_g4

0x5092,	// (0x00033f68) bg_vkb2_func_pane_g5

0x509a,	// (0x00033f70) bg_vkb2_func_pane_g6

0x50a2,	// (0x00033f78) bg_vkb2_func_pane_g7

0x50aa,	// (0x00033f80) bg_vkb2_func_pane_g8

0x506a,	// (0x00033f40) bg_vkb2_func_pane_g9

0x0008,

0xfe14,	// (0x0003ecea) bg_vkb2_func_pane_g

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp01

0x20ac,	// (0x00030f82) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x20ac,	// (0x00030f82) vkb2_top_cell_right_wide_pane_g1

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1721,	// (0x000305f7) bg_vkb2_fuc_pane_cp02

0x210a,	// (0x00030fe0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x210a,	// (0x00030fe0) vkb2_top_cell_right_narrow_pane_g1

0xe42f,	// (0x0003d305) aid_touch_area_decrease_ParamLimits

0xe42f,	// (0x0003d305) aid_touch_area_decrease

0xe463,	// (0x0003d339) aid_touch_area_increase_ParamLimits

0xe463,	// (0x0003d339) aid_touch_area_increase

0xe48b,	// (0x0003d361) aid_touch_area_mute_ParamLimits

0xe48b,	// (0x0003d361) aid_touch_area_mute

0xe4bb,	// (0x0003d391) aid_touch_area_slider_ParamLimits

0xe4bb,	// (0x0003d391) aid_touch_area_slider

0xe4fb,	// (0x0003d3d1) popup_slider_window_g4_ParamLimits

0xe4fb,	// (0x0003d3d1) popup_slider_window_g4

0xe523,	// (0x0003d3f9) popup_slider_window_g5_ParamLimits

0xe523,	// (0x0003d3f9) popup_slider_window_g5

0xe557,	// (0x0003d42d) popup_slider_window_g6_ParamLimits

0xe557,	// (0x0003d42d) popup_slider_window_g6

0x8d4b,	// (0x00037c21) popup_slider_window_t2_ParamLimits

0x8d4b,	// (0x00037c21) popup_slider_window_t2

0x0001,

0xfd10,	// (0x0003ebe6) popup_slider_window_t_ParamLimits

0xfd10,	// (0x0003ebe6) popup_slider_window_t

0xe573,	// (0x0003d449) slider_pane_ParamLimits

0xe573,	// (0x0003d449) slider_pane

0x9a1b,	// (0x000388f1) slider_pane_g1_ParamLimits

0x9a1b,	// (0x000388f1) slider_pane_g1

0x9a2f,	// (0x00038905) slider_pane_g2_ParamLimits

0x9a2f,	// (0x00038905) slider_pane_g2

0x9a45,	// (0x0003891b) slider_pane_g3_ParamLimits

0x9a45,	// (0x0003891b) slider_pane_g3

0x0003,

0xfe27,	// (0x0003ecfd) slider_pane_g_ParamLimits

0xfe27,	// (0x0003ecfd) slider_pane_g

0xd2da,	// (0x0003c1b0) popup_tb_float_extension_window_ParamLimits

0xd2da,	// (0x0003c1b0) popup_tb_float_extension_window

0x9a71,	// (0x00038947) aid_size_cell_tb_float_ext

0x2ca9,	// (0x00031b7f) bg_popup_sub_window_cp28

0x9a7d,	// (0x00038953) grid_tb_float_ext_pane

0x9a87,	// (0x0003895d) cell_tb_float_ext_pane_ParamLimits

0x9a87,	// (0x0003895d) cell_tb_float_ext_pane

0x9aa1,	// (0x00038977) cell_tb_float_ext_pane_g1

0x9aaa,	// (0x00038980) grid_highlight_pane_cp12

0xbf8a,	// (0x0003ae60) cell_last_hwr_side_pane_ParamLimits

0xbf8a,	// (0x0003ae60) cell_last_hwr_side_pane

0x7697,	// (0x0003656d) cell_last_hwr_side_pane_g1

0x9ab3,	// (0x00038989) cell_last_hwr_side_pane_g2

0x0001,

0xfe30,	// (0x0003ed06) cell_last_hwr_side_pane_g

0xc4f1,	// (0x0003b3c7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc4f1,	// (0x0003b3c7) vkb2_area_bottom_space_btn_pane

0x1986,	// (0x0003085c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95e6,	// (0x000384bc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2268,	// (0x0003113e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2287,	// (0x0003115d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2287,	// (0x0003115d) vkb2_area_bottom_space_btn_pane_g1

0x22c1,	// (0x00031197) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x22c1,	// (0x00031197) vkb2_area_bottom_space_btn_pane_g2

0x22f7,	// (0x000311cd) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x22f7,	// (0x000311cd) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe35,	// (0x0003ed0b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe35,	// (0x0003ed0b) vkb2_area_bottom_space_btn_pane_g

0x17e4,	// (0x000306ba) cel_fep_hwr_func_pane_ParamLimits

0x17e4,	// (0x000306ba) cel_fep_hwr_func_pane

0xbf5f,	// (0x0003ae35) cell_hwr_side_button_pane_ParamLimits

0xbf5f,	// (0x0003ae35) cell_hwr_side_button_pane

0x8fa1,	// (0x00037e77) aid_area_touch_clock_ParamLimits

0x3026,	// (0x00031efc) bg_uniindi_top_pane_ParamLimits

0x8fb3,	// (0x00037e89) uniindi_top_pane_g1_ParamLimits

0x8fc9,	// (0x00037e9f) uniindi_top_pane_g2_ParamLimits

0x8fd5,	// (0x00037eab) uniindi_top_pane_g3_ParamLimits

0x8fe6,	// (0x00037ebc) uniindi_top_pane_g4_ParamLimits

0xfd48,	// (0x0003ec1e) uniindi_top_pane_g_ParamLimits

0x8ff3,	// (0x00037ec9) uniindi_top_pane_t1_ParamLimits

0x3026,	// (0x00031efc) bg_vkb2_func_pane_cp01_ParamLimits

0x3026,	// (0x00031efc) bg_vkb2_func_pane_cp01

0x9abc,	// (0x00038992) cel_fep_hwr_func_pane_g1_ParamLimits

0x9abc,	// (0x00038992) cel_fep_hwr_func_pane_g1

0x3026,	// (0x00031efc) bg_vkb2_func_pane_cp02_ParamLimits

0x3026,	// (0x00031efc) bg_vkb2_func_pane_cp02

0x9abc,	// (0x00038992) cell_hwr_side_button_pane_g1_ParamLimits

0x9abc,	// (0x00038992) cell_hwr_side_button_pane_g1

0x4eeb,	// (0x00033dc1) status_pane_g4_ParamLimits

0x4eeb,	// (0x00033dc1) status_pane_g4

0x4f05,	// (0x00033ddb) status_pane_t1

0x73d0,	// (0x000362a6) form2_midp_gauge_slider_cont_pane

0x73d8,	// (0x000362ae) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde2d,	// (0x0003cd03) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde3f,	// (0x0003cd15) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb08,	// (0x0003e9de) form2_midp_gauge_slider_pane_t_ParamLimits

0x740e,	// (0x000362e4) form2_midp_slider_pane_ParamLimits

0x1c41,	// (0x00030b17) aid_size_cell_func_vkb2_ParamLimits

0x1c41,	// (0x00030b17) aid_size_cell_func_vkb2

0x9a5d,	// (0x00038933) slider_pane_g4_ParamLimits

0x9a5d,	// (0x00038933) slider_pane_g4

0xc552,	// (0x0003b428) form2_midp_gauge_slider_pane_t2_cp01

0xc560,	// (0x0003b436) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc560,	// (0x0003b436) form2_midp_gauge_slider_pane_t3_cp01

0x236c,	// (0x00031242) form2_midp_slider_pane_cp01

0x2ca9,	// (0x00031b7f) navi_smil_pane

0x9af5,	// (0x000389cb) navi_smil_pane_g1

0x9afd,	// (0x000389d3) navi_smil_pane_t1

0x9aca,	// (0x000389a0) form2_midp_slider_pane_g1

0x9ad3,	// (0x000389a9) form2_midp_slider_pane_g2

0x9adb,	// (0x000389b1) form2_midp_slider_pane_g3

0x9aca,	// (0x000389a0) form2_midp_slider_pane_g4

0xeeac,	// (0x0003dd82) form2_midp_slider_pane_g5

0x0004,

0xfe3e,	// (0x0003ed14) form2_midp_slider_pane_g

0x2331,	// (0x00031207) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2331,	// (0x00031207) vkb2_area_bottom_space_btn_pane_g4

0xd4b6,	// (0x0003c38c) lc0_navi_pane_ParamLimits

0xd4b6,	// (0x0003c38c) lc0_navi_pane

0xd520,	// (0x0003c3f6) lc0_stat_indi_pane_ParamLimits

0xd520,	// (0x0003c3f6) lc0_stat_indi_pane

0xd535,	// (0x0003c40b) ls0_title_pane_ParamLimits

0xd535,	// (0x0003c40b) ls0_title_pane

0x3609,	// (0x000324df) bg_popup_sub_pane_cp14_ParamLimits

0x8f88,	// (0x00037e5e) list_uniindi_pane_ParamLimits

0x8f94,	// (0x00037e6a) uniindi_top_pane_ParamLimits

0x9030,	// (0x00037f06) list_single_uniindi_pane_g1_ParamLimits

0x9043,	// (0x00037f19) list_single_uniindi_pane_t1_ParamLimits

0xc57d,	// (0x0003b453) lc0_stat_clock_pane_ParamLimits

0xc57d,	// (0x0003b453) lc0_stat_clock_pane

0xeeb5,	// (0x0003dd8b) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0003dd8b) lc0_stat_indi_pane_g1

0xeec2,	// (0x0003dd98) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0003dd98) lc0_stat_indi_pane_g2

0x0001,

0xfe49,	// (0x0003ed1f) lc0_stat_indi_pane_g_ParamLimits

0xfe49,	// (0x0003ed1f) lc0_stat_indi_pane_g

0xc58a,	// (0x0003b460) lc0_uni_indicator_pane_ParamLimits

0xc58a,	// (0x0003b460) lc0_uni_indicator_pane

0x9b25,	// (0x000389fb) ls0_title_pane_g1_ParamLimits

0x9b25,	// (0x000389fb) ls0_title_pane_g1

0xeecf,	// (0x0003dda5) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0003dda5) ls0_title_pane_t1

0xc597,	// (0x0003b46d) lc0_uni_indicator_pane_g1_ParamLimits

0xc597,	// (0x0003b46d) lc0_uni_indicator_pane_g1

0x9b6f,	// (0x00038a45) lc0_stat_clock_pane_t1

0x2ca9,	// (0x00031b7f) main_ai5_pane

0x9b7d,	// (0x00038a53) ai5_sk_pane_ParamLimits

0x9b7d,	// (0x00038a53) ai5_sk_pane

0xeefd,	// (0x0003ddd3) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0003ddd3) cell_ai5_widget_pane

0x9c0c,	// (0x00038ae2) aid_size_cell_widget_grid

0x9c20,	// (0x00038af6) bg_ai5_widget_pane_ParamLimits

0x9c20,	// (0x00038af6) bg_ai5_widget_pane

0xef86,	// (0x0003de5c) cell_ai5_widget_pane_g2

0xef96,	// (0x0003de6c) cell_ai5_widget_pane_g3

0xefb5,	// (0x0003de8b) cell_ai5_widget_pane_g4

0xefc1,	// (0x0003de97) cell_ai5_widget_pane_g5

0xefcd,	// (0x0003dea3) cell_ai5_widget_pane_g6

0xefd9,	// (0x0003deaf) cell_ai5_widget_pane_g7

0xf021,	// (0x0003def7) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0003def7) cell_ai5_widget_pane_t1

0xf03e,	// (0x0003df14) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0003df14) cell_ai5_widget_pane_t2

0xf056,	// (0x0003df2c) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0003df2c) cell_ai5_widget_pane_t3

0xf06e,	// (0x0003df44) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0003df44) cell_ai5_widget_pane_t4

0xf088,	// (0x0003df5e) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0003df5e) cell_ai5_widget_pane_t5

0x9d69,	// (0x00038c3f) cell_ai5_widget_pane_t6_ParamLimits

0x9d69,	// (0x00038c3f) cell_ai5_widget_pane_t6

0x9d7b,	// (0x00038c51) cell_ai5_widget_pane_t7_ParamLimits

0x9d7b,	// (0x00038c51) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0003df7d) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0003df7d) cell_ai5_widget_pane_t8

0x0009,

0xfe63,	// (0x0003ed39) cell_ai5_widget_pane_t_ParamLimits

0xfe63,	// (0x0003ed39) cell_ai5_widget_pane_t

0xf0f3,	// (0x0003dfc9) grid_ai5_widget_pane

0x3609,	// (0x000324df) highlight_cell_ai5_widget_pane_ParamLimits

0x3609,	// (0x000324df) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0003dfe1) ai5_sk_left_pane

0xf115,	// (0x0003dfeb) ai5_sk_middle_pane

0xf11f,	// (0x0003dff5) ai5_sk_right_pane

0x9e16,	// (0x00038cec) bg_ai5_widget_pane_g1_ParamLimits

0x9e16,	// (0x00038cec) bg_ai5_widget_pane_g1

0x9e22,	// (0x00038cf8) bg_ai5_widget_pane_g2_ParamLimits

0x9e22,	// (0x00038cf8) bg_ai5_widget_pane_g2

0x9e2e,	// (0x00038d04) bg_ai5_widget_pane_g3_ParamLimits

0x9e2e,	// (0x00038d04) bg_ai5_widget_pane_g3

0x9e3a,	// (0x00038d10) bg_ai5_widget_pane_g4_ParamLimits

0x9e3a,	// (0x00038d10) bg_ai5_widget_pane_g4

0x9e46,	// (0x00038d1c) bg_ai5_widget_pane_g5_ParamLimits

0x9e46,	// (0x00038d1c) bg_ai5_widget_pane_g5

0x9e52,	// (0x00038d28) bg_ai5_widget_pane_g6_ParamLimits

0x9e52,	// (0x00038d28) bg_ai5_widget_pane_g6

0x9e5e,	// (0x00038d34) bg_ai5_widget_pane_g7_ParamLimits

0x9e5e,	// (0x00038d34) bg_ai5_widget_pane_g7

0x9e6a,	// (0x00038d40) bg_ai5_widget_pane_g8_ParamLimits

0x9e6a,	// (0x00038d40) bg_ai5_widget_pane_g8

0x9e76,	// (0x00038d4c) bg_ai5_widget_pane_g9_ParamLimits

0x9e76,	// (0x00038d4c) bg_ai5_widget_pane_g9

0x0008,

0xfe78,	// (0x0003ed4e) bg_ai5_widget_pane_g_ParamLimits

0xfe78,	// (0x0003ed4e) bg_ai5_widget_pane_g

0x9ea9,	// (0x00038d7f) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ea9,	// (0x00038d7f) cell_shortcut_ai5_widget_pane

0x2e66,	// (0x00031d3c) bg_cell_shortcut_ai5_widget_pane

0x9eba,	// (0x00038d90) cell_grid_ai5_widget_pane_g1

0x9ec3,	// (0x00038d99) highlight_cell_shortcut_ai5_widget_pane

0x5072,	// (0x00033f48) ai5_sk_left_pane_g1

0x9ecb,	// (0x00038da1) ai5_sk_left_pane_g2

0x9ed3,	// (0x00038da9) ai5_sk_left_pane_g3

0x9edb,	// (0x00038db1) ai5_sk_left_pane_g4

0x0003,

0xfe8b,	// (0x0003ed61) ai5_sk_left_pane_g

0x9ee3,	// (0x00038db9) ai5_sk_left_pane_t1

0x507a,	// (0x00033f50) ai5_sk_right_pane_g1

0x9ef1,	// (0x00038dc7) ai5_sk_right_pane_g2

0x9ef9,	// (0x00038dcf) ai5_sk_right_pane_g3

0x9f01,	// (0x00038dd7) ai5_sk_right_pane_g4

0x0003,

0xfe94,	// (0x0003ed6a) ai5_sk_right_pane_g

0x9f09,	// (0x00038ddf) ai5_sk_right_pane_t1

0x507a,	// (0x00033f50) ai5_sk_middle_pane_g1

0x5072,	// (0x00033f48) ai5_sk_middle_pane_g2

0x5092,	// (0x00033f68) ai5_sk_middle_pane_g3

0x9ef9,	// (0x00038dcf) ai5_sk_middle_pane_g4

0x9ed3,	// (0x00038da9) ai5_sk_middle_pane_g5

0x9f17,	// (0x00038ded) ai5_sk_middle_pane_g6

0xf129,	// (0x0003dfff) ai5_sk_middle_pane_g7

0x0006,

0xfe9d,	// (0x0003ed73) ai5_sk_middle_pane_g

0xd3a2,	// (0x0003c278) aid_touch_area_size_lc0_ParamLimits

0xd3a2,	// (0x0003c278) aid_touch_area_size_lc0

0x19b5,	// (0x0003088b) cell_hwr_candidate_pane_t1_ParamLimits

0x4bcd,	// (0x00033aa3) aid_touch_navi_pane

0xd627,	// (0x0003c4fd) status_dt_navi_pane_ParamLimits

0xd627,	// (0x0003c4fd) status_dt_navi_pane

0xd63f,	// (0x0003c515) status_dt_sta_pane_ParamLimits

0xd63f,	// (0x0003c515) status_dt_sta_pane

0xf131,	// (0x0003e007) dt_sta_controll_pane

0xf13e,	// (0x0003e014) dt_sta_indi_pane

0xf14b,	// (0x0003e021) dt_sta_title_pane

0x3026,	// (0x00031efc) bg_dt_sta_indi_pane_ParamLimits

0x3026,	// (0x00031efc) bg_dt_sta_indi_pane

0x9f58,	// (0x00038e2e) dt_sta_battery_pane

0xf15d,	// (0x0003e033) dt_sta_indi_pane_g1

0xf166,	// (0x0003e03c) dt_sta_indi_pane_g2

0xf16f,	// (0x0003e045) dt_sta_indi_pane_g3

0x0002,

0xfeac,	// (0x0003ed82) dt_sta_indi_pane_g

0xf178,	// (0x0003e04e) dt_sta_signal_pane

0x3609,	// (0x000324df) bg_dt_sta_title_pane_ParamLimits

0x3609,	// (0x000324df) bg_dt_sta_title_pane

0x5f17,	// (0x00034ded) dt_sta_title_pane_g1

0xf181,	// (0x0003e057) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0003e057) dt_sta_title_pane_t1

0x2ca9,	// (0x00031b7f) bg_dt_sta_control_pane

0xf196,	// (0x0003e06c) dt_sta_controll_pane_g1

0xf19f,	// (0x0003e075) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0003e07e) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0003e087) bg_dt_sta_title_pane_g3

0x0002,

0xfeb3,	// (0x0003ed89) bg_dt_sta_title_pane_g

0x7697,	// (0x0003656d) bg_dt_sta_indi_pane_g1

0x9fc5,	// (0x00038e9b) dt_sta_signal_pane_g1

0x9fcd,	// (0x00038ea3) dt_sta_signal_pane_g2

0x0001,

0xfeba,	// (0x0003ed90) dt_sta_signal_pane_g

0x9fd5,	// (0x00038eab) dt_sta_battery_pane_g1

0x9fde,	// (0x00038eb4) dt_sta_battery_pane_t1

0x7697,	// (0x0003656d) bg_dt_sta_control_pane_g1

0x3d78,	// (0x00032c4e) fep_china_uni_eep_pane

0x3d80,	// (0x00032c56) fep_china_uni_entry_pane_ParamLimits

0x3d90,	// (0x00032c66) popup_fep_china_uni_window_g1_ParamLimits

0x3da0,	// (0x00032c76) popup_fep_china_uni_window_g2_ParamLimits

0x3da0,	// (0x00032c76) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003e60b) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003e60b) popup_fep_china_uni_window_g

0x9fed,	// (0x00038ec3) fep_china_uni_eep_pane_g1

0x9ff5,	// (0x00038ecb) fep_china_uni_eep_pane_t1

0x9aec,	// (0x000389c2) aid_touch_area_size_smil_player

0x4d19,	// (0x00033bef) lc0_clock_pane

0x4ef9,	// (0x00033dcf) status_pane_g5_ParamLimits

0x4ef9,	// (0x00033dcf) status_pane_g5

0xce80,	// (0x0003bd56) popup_keymap_window

0x4eb7,	// (0x00033d8d) status_icon_pane

0xef96,	// (0x0003de6c) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0003de8b) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0003de97) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0003debb) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0003debb) cell_ai5_widget_pane_g8

0xeff9,	// (0x0003decf) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0003decf) cell_ai5_widget_pane_g9

0xf00d,	// (0x0003dee3) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0003dee3) cell_ai5_widget_pane_g10

0xa004,	// (0x00038eda) status_icon_pane_g1

0x2ca9,	// (0x00031b7f) bg_popup_sub_pane_cp13

0xa00c,	// (0x00038ee2) popup_keymap_window_t1

0xcc8f,	// (0x0003bb65) control_pane_g6_ParamLimits

0xcc8f,	// (0x0003bb65) control_pane_g6

0xcc9c,	// (0x0003bb72) control_pane_g7_ParamLimits

0xcc9c,	// (0x0003bb72) control_pane_g7

0xcca9,	// (0x0003bb7f) control_pane_g8_ParamLimits

0xcca9,	// (0x0003bb7f) control_pane_g8

0xf131,	// (0x0003e007) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0003e014) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0003e021) dt_sta_title_pane_ParamLimits

0x3541,	// (0x00032417) aid_size_touch_scroll_bar_cale

0x0386,	// (0x0002f25c) popup_discreet_window_ParamLimits

0x0386,	// (0x0002f25c) popup_discreet_window

0xb5a1,	// (0x0003a477) popup_sk_window

0x5737,	// (0x0003460d) bg_popup_sub_pane_cp28_ParamLimits

0x5737,	// (0x0003460d) bg_popup_sub_pane_cp28

0xa01a,	// (0x00038ef0) popup_discreet_window_g1_ParamLimits

0xa01a,	// (0x00038ef0) popup_discreet_window_g1

0xa03a,	// (0x00038f10) popup_discreet_window_t1_ParamLimits

0xa03a,	// (0x00038f10) popup_discreet_window_t1

0xa058,	// (0x00038f2e) popup_discreet_window_t2_ParamLimits

0xa058,	// (0x00038f2e) popup_discreet_window_t2

0x0002,

0xfebf,	// (0x0003ed95) popup_discreet_window_t_ParamLimits

0xfebf,	// (0x0003ed95) popup_discreet_window_t

0x23a3,	// (0x00031279) popup_sk_window_g1

0x23ad,	// (0x00031283) popup_sk_window_g2

0x0001,

0xfec6,	// (0x0003ed9c) popup_sk_window_g

0xa0aa,	// (0x00038f80) popup_sk_window_t1

0xa0b8,	// (0x00038f8e) popup_sk_window_t1_copy1

0xef86,	// (0x0003de5c) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0003df8f) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0003df8f) cell_ai5_widget_pane_t9

0x2ca9,	// (0x00031b7f) main_fep_fshwr2_pane

0xf1ba,	// (0x0003e090) aid_fshwr2_btn_pane

0xf1c2,	// (0x0003e098) aid_fshwr2_syb_pane

0xf1ca,	// (0x0003e0a0) aid_fshwr2_txt_pane

0xf1d2,	// (0x0003e0a8) fshwr2_func_candi_pane

0xf1dc,	// (0x0003e0b2) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0003e0c0) fshwr2_icf_pane

0x2ca9,	// (0x00031b7f) fshwr2_icf_bg_pane

0xf1f4,	// (0x0003e0ca) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0003e0ca) fshwr2_icf_pane_t1

0x7697,	// (0x0003656d) fshwr2_func_candi_pane_g1

0xa12b,	// (0x00039001) fshwr2_func_candi_row_pane_ParamLimits

0xa12b,	// (0x00039001) fshwr2_func_candi_row_pane

0xf20c,	// (0x0003e0e2) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0003e0e2) cell_fshwr2_syb_pane

0x7929,	// (0x000367ff) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7929,	// (0x000367ff) fshwr2_hwr_syb_pane_g1

0x2ca9,	// (0x00031b7f) bg_popup_call_pane_cp01

0xa156,	// (0x0003902c) fshwr2_func_candi_cell_pane_ParamLimits

0xa156,	// (0x0003902c) fshwr2_func_candi_cell_pane

0xa187,	// (0x0003905d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa187,	// (0x0003905d) fshwr2_func_candi_cell_bg_pane

0xa1a1,	// (0x00039077) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa1a1,	// (0x00039077) fshwr2_func_candi_cell_pane_g1

0xa1c9,	// (0x0003909f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa1c9,	// (0x0003909f) fshwr2_func_candi_cell_pane_t1

0x2ca9,	// (0x00031b7f) bg_button_pane_cp08

0x426e,	// (0x00033144) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0003e0fc) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0003e104) cell_fshwr2_syb_bg_pane_t1

0x3609,	// (0x000324df) main_tmo_pane

0xd967,	// (0x0003c83d) uni_indicator_pane_g1_ParamLimits

0xd97c,	// (0x0003c852) uni_indicator_pane_g2_ParamLimits

0xd991,	// (0x0003c867) uni_indicator_pane_g3_ParamLimits

0x6299,	// (0x0003516f) uni_indicator_pane_g4_ParamLimits

0x6299,	// (0x0003516f) uni_indicator_pane_g4

0x62ad,	// (0x00035183) uni_indicator_pane_g5_ParamLimits

0x62ad,	// (0x00035183) uni_indicator_pane_g5

0x62c1,	// (0x00035197) uni_indicator_pane_g6_ParamLimits

0x62c1,	// (0x00035197) uni_indicator_pane_g6

0xf92d,	// (0x0003e803) uni_indicator_pane_g_ParamLimits

0xe40b,	// (0x0003d2e1) popup_tmo_note_window_ParamLimits

0xe40b,	// (0x0003d2e1) popup_tmo_note_window

0x2ca9,	// (0x00031b7f) fshwr2_bg_pane

0xa1ba,	// (0x00039090) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa1ba,	// (0x00039090) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecb,	// (0x0003eda1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecb,	// (0x0003eda1) fshwr2_func_candi_cell_pane_g

0x7697,	// (0x0003656d) bg_popup_window_pane_cp01

0xa1f3,	// (0x000390c9) bg_popup_window_pane_g1_cp01

0xa1fc,	// (0x000390d2) bg_popup_window_pane_cp22_ParamLimits

0xa1fc,	// (0x000390d2) bg_popup_window_pane_cp22

0xa20a,	// (0x000390e0) listscroll_tmo_link_pane_ParamLimits

0xa20a,	// (0x000390e0) listscroll_tmo_link_pane

0xa24a,	// (0x00039120) popup_tmo_note_window_g1_ParamLimits

0xa24a,	// (0x00039120) popup_tmo_note_window_g1

0xa257,	// (0x0003912d) tmo_note_info_pane_ParamLimits

0xa257,	// (0x0003912d) tmo_note_info_pane

0xf23d,	// (0x0003e113) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0003e113) list_tmo_note_info_pane_g1

0xa288,	// (0x0003915e) list_tmo_note_info_pane_g2_ParamLimits

0xa288,	// (0x0003915e) list_tmo_note_info_pane_g2

0x0001,

0xfed0,	// (0x0003eda6) list_tmo_note_info_pane_g_ParamLimits

0xfed0,	// (0x0003eda6) list_tmo_note_info_pane_g

0xa2a4,	// (0x0003917a) list_tmo_note_info_text_pane_ParamLimits

0xa2a4,	// (0x0003917a) list_tmo_note_info_text_pane

0xa325,	// (0x000391fb) list_tmo_link_pane

0xa332,	// (0x00039208) scroll_pane_cp20

0xa33f,	// (0x00039215) list_single_tmo_link_pane_ParamLimits

0xa33f,	// (0x00039215) list_single_tmo_link_pane

0xa34f,	// (0x00039225) list_single_tmo_link_pane_t1

0xa35d,	// (0x00039233) list_tmo_note_info_text_pane_t1_ParamLimits

0xa35d,	// (0x00039233) list_tmo_note_info_text_pane_t1

0xc9a0,	// (0x0003b876) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc9a0,	// (0x0003b876) aid_size_touch_scroll_bar_cp01

0xbaa2,	// (0x0003a978) aid_size_touch_slider_marker

0xb591,	// (0x0003a467) popup_settings_window_ParamLimits

0xb591,	// (0x0003a467) popup_settings_window

0x24ac,	// (0x00031382) popup_candi_list_indi_window

0x4bcd,	// (0x00033aa3) aid_touch_navi_pane_ParamLimits

0x1b7b,	// (0x00030a51) rs_clock_indi_pane

0x1b84,	// (0x00030a5a) sctrl_sk_bottom_pane_ParamLimits

0x1b95,	// (0x00030a6b) sctrl_sk_top_pane_ParamLimits

0x1c9b,	// (0x00030b71) popup_fep_tooltip_window

0x9c0c,	// (0x00038ae2) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0003de50) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0003de50) cell_ai5_widget_pane_g1

0xefcd,	// (0x0003dea3) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0003deaf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4e,	// (0x0003ed24) cell_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0003ed24) cell_ai5_widget_pane_g

0xf0dd,	// (0x0003dfb3) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0003dfb3) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0003dfc9) grid_ai5_widget_pane_ParamLimits

0x9e82,	// (0x00038d58) cell_contacts_ai5_widget_pane_ParamLimits

0x9e82,	// (0x00038d58) cell_contacts_ai5_widget_pane

0xa06d,	// (0x00038f43) popup_discreet_window_t3_ParamLimits

0xa06d,	// (0x00038f43) popup_discreet_window_t3

0xa100,	// (0x00038fd6) popup_fshwr2_char_preview_window_ParamLimits

0xa100,	// (0x00038fd6) popup_fshwr2_char_preview_window

0xf254,	// (0x0003e12a) tmo_note_info_pane_t1

0xf269,	// (0x0003e13f) tmo_note_info_pane_t2

0xf280,	// (0x0003e156) tmo_note_info_pane_t3

0xa301,	// (0x000391d7) tmo_note_info_pane_t4

0xa313,	// (0x000391e9) tmo_note_info_pane_t5

0x0004,

0xfed5,	// (0x0003edab) tmo_note_info_pane_t

0xa325,	// (0x000391fb) list_tmo_link_pane_ParamLimits

0xa332,	// (0x00039208) scroll_pane_cp20_ParamLimits

0x2ca9,	// (0x00031b7f) bg_popup_fep_char_preview_window_cp01

0xa376,	// (0x0003924c) popup_fshwr2_char_preview_window_t1

0xa384,	// (0x0003925a) popup_candi_list_indi_window_g1

0xa38d,	// (0x00039263) bg_cell_contacts_ai5_widget_pane

0xa399,	// (0x0003926f) cell_contacts_ai5_widget_pane_g1

0xa3ad,	// (0x00039283) cell_contacts_ai5_widget_pane_g2

0xa3bc,	// (0x00039292) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee0,	// (0x0003edb6) cell_contacts_ai5_widget_pane_g

0xa3cf,	// (0x000392a5) cell_contacts_ai5_widget_pane_t1

0x3609,	// (0x000324df) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0003e1d0) settings_container_pane

0x426e,	// (0x00033144) listscroll_set_pane_copy1

0x6daa,	// (0x00035c80) scroll_pane_cp121_copy1

0xa455,	// (0x0003932b) set_content_pane_copy1

0xf306,	// (0x0003e1dc) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0003e1dc) aid_height_set_list_copy1

0x64b9,	// (0x0003538f) aid_size_parent_copy1_ParamLimits

0x64b9,	// (0x0003538f) aid_size_parent_copy1

0xf312,	// (0x0003e1e8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0003e1e8) button_value_adjust_pane_cp6_copy1

0x45d4,	// (0x000334aa) list_highlight_pane_cp2_copy1_ParamLimits

0x45d4,	// (0x000334aa) list_highlight_pane_cp2_copy1

0xf326,	// (0x0003e1fc) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0003e1fc) list_set_pane_copy1

0xf295,	// (0x0003e16b) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0003e16b) main_pane_set_t1_copy1

0xf2cf,	// (0x0003e1a5) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0003e1a5) main_pane_set_t2_copy1

0xf3d3,	// (0x0003e2a9) main_pane_set_t3_copy1

0xf3e1,	// (0x0003e2b7) main_pane_set_t4_copy1

0xf2ee,	// (0x0003e1c4) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0003e1c4) set_content_pane_g1_copy1

0xf3ef,	// (0x0003e2c5) setting_code_pane_copy1

0xa550,	// (0x00039426) setting_slider_graphic_pane_copy1

0xa550,	// (0x00039426) setting_slider_pane_copy1

0xa550,	// (0x00039426) setting_text_pane_copy1

0xa55a,	// (0x00039430) setting_volume_pane_copy1

0xf3f9,	// (0x0003e2cf) settings_code_pane_cp2_copy1

0xf401,	// (0x0003e2d7) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0003e2d7) settings_code_pane_cp_copy1

0xf415,	// (0x0003e2eb) volume_set_pane_copy1

0xf41d,	// (0x0003e2f3) volume_set_pane_g10_copy1

0xf425,	// (0x0003e2fb) volume_set_pane_g1_copy1

0xf42d,	// (0x0003e303) volume_set_pane_g2_copy1

0xf435,	// (0x0003e30b) volume_set_pane_g3_copy1

0xf43d,	// (0x0003e313) volume_set_pane_g4_copy1

0xf445,	// (0x0003e31b) volume_set_pane_g5_copy1

0xf44d,	// (0x0003e323) volume_set_pane_g6_copy1

0xf455,	// (0x0003e32b) volume_set_pane_g7_copy1

0xf45d,	// (0x0003e333) volume_set_pane_g8_copy1

0xf465,	// (0x0003e33b) volume_set_pane_g9_copy1

0x2d9d,	// (0x00031c73) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d9d,	// (0x00031c73) bg_set_opt_pane_cp_copy1

0xa5d7,	// (0x000394ad) setting_slider_pane_t1_copy1_ParamLimits

0xa5d7,	// (0x000394ad) setting_slider_pane_t1_copy1

0xf46d,	// (0x0003e343) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0003e343) setting_slider_pane_t2_copy1

0xf487,	// (0x0003e35d) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0003e35d) setting_slider_pane_t3_copy1

0xf49f,	// (0x0003e375) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0003e375) slider_set_pane_copy1

0x3670,	// (0x00032546) set_opt_bg_pane_g1_copy2

0x3678,	// (0x0003254e) set_opt_bg_pane_g2_copy2

0xa63d,	// (0x00039513) set_opt_bg_pane_g3_copy2

0x3688,	// (0x0003255e) set_opt_bg_pane_g4_copy2

0x3690,	// (0x00032566) set_opt_bg_pane_g5_copy2

0x3698,	// (0x0003256e) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0003e38b) set_opt_bg_pane_g7_copy2

0xa64f,	// (0x00039525) set_opt_bg_pane_g8_copy2

0xa659,	// (0x0003952f) set_opt_bg_pane_g9_copy2

0x23b7,	// (0x0003128d) aid_size_touch_slider_mark_copy1_ParamLimits

0x23b7,	// (0x0003128d) aid_size_touch_slider_mark_copy1

0xa663,	// (0x00039539) slider_set_pane_g1_copy1

0x23cb,	// (0x000312a1) slider_set_pane_g2_copy1

0x15af,	// (0x00030485) slider_set_pane_g3_copy1_ParamLimits

0x15af,	// (0x00030485) slider_set_pane_g3_copy1

0x15c3,	// (0x00030499) slider_set_pane_g4_copy1_ParamLimits

0x15c3,	// (0x00030499) slider_set_pane_g4_copy1

0x15db,	// (0x000304b1) slider_set_pane_g5_copy1_ParamLimits

0x15db,	// (0x000304b1) slider_set_pane_g5_copy1

0x15af,	// (0x00030485) slider_set_pane_g6_copy1_ParamLimits

0x15af,	// (0x00030485) slider_set_pane_g6_copy1

0xc5be,	// (0x0003b494) slider_set_pane_g7_copy1_ParamLimits

0xc5be,	// (0x0003b494) slider_set_pane_g7_copy1

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp2_copy1

0xa66c,	// (0x00039542) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0003e393) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0003e3a3) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0003e3b3) slider_set_pane_cp_copy1

0xa6a5,	// (0x0003957b) input_focus_pane_cp1_copy1

0xa6ae,	// (0x00039584) list_set_text_pane_copy1

0xa6b6,	// (0x0003958c) setting_text_pane_g1_copy1

0xc5d4,	// (0x0003b4aa) set_text_pane_t1_copy1

0xa6a5,	// (0x0003957b) input_focus_pane_cp2_copy1

0xa6b6,	// (0x0003958c) setting_code_pane_g1_copy1

0xf4e5,	// (0x0003e3bb) setting_code_pane_t1_copy1

0xc98e,	// (0x0003b864) list_set_graphic_pane_copy1

0x2cbd,	// (0x00031b93) bg_set_opt_pane_cp4_copy1

0xcb9b,	// (0x0003ba71) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb9b,	// (0x0003ba71) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0003e3c9) list_set_graphic_pane_g2_copy1

0xcbb3,	// (0x0003ba89) list_set_graphic_pane_t1_copy1_ParamLimits

0xcbb3,	// (0x0003ba89) list_set_graphic_pane_t1_copy1

0x7697,	// (0x0003656d) rs_clock_indi_pane_g1

0xa6e7,	// (0x000395bd) rs_clock_indi_pane_t1

0x9f58,	// (0x00038e2e) rs_indi_pane

0xa6f5,	// (0x000395cb) rs_indi_pane_g1

0xa6fe,	// (0x000395d4) rs_indi_pane_g2

0xa707,	// (0x000395dd) rs_indi_pane_g3

0x0002,

0xfee7,	// (0x0003edbd) rs_indi_pane_g

0x426e,	// (0x00033144) bg_popup_preview_window_pane_cp03

0xa710,	// (0x000395e6) popup_fep_tooltip_window_t1

0x8312,	// (0x000371e8) popup_note2_window_g2_ParamLimits

0x8312,	// (0x000371e8) popup_note2_window_g2

0x0001,

0xfc80,	// (0x0003eb56) popup_note2_window_g_ParamLimits

0xfc80,	// (0x0003eb56) popup_note2_window_g

0x881b,	// (0x000376f1) bg_popup_sub_pane_cp11_ParamLimits

0x8828,	// (0x000376fe) cell_ai3_links_pane_g1_ParamLimits

0x883f,	// (0x00037715) cell_ai3_links_pane_t1

0xc5d4,	// (0x0003b4aa) set_text_pane_t1_copy1_ParamLimits

0x417f,	// (0x00033055) cell_graphic_popup_pane_cp2_ParamLimits

0x417f,	// (0x00033055) cell_graphic_popup_pane_cp2

0xa71e,	// (0x000395f4) cell_graphic_popup_pane_g1_cp2

0x3354,	// (0x0003222a) cell_graphic_popup_pane_g2_cp2

0xa726,	// (0x000395fc) cell_graphic_popup_pane_g3_cp2

0xa72e,	// (0x00039604) cell_graphic_popup_pane_t2_cp2

0x3365,	// (0x0003223b) grid_highlight_pane_cp3_cp2

0x39b3,	// (0x00032889) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3609,	// (0x000324df) main_tmo_pane_ParamLimits

0xe3ff,	// (0x0003d2d5) popup_tmo_big_image_note_window

0xef6a,	// (0x0003de40) cell_ai5_widget_list_pane

0xef72,	// (0x0003de48) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0003e12a) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0003e13f) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0003e156) tmo_note_info_pane_t3_ParamLimits

0xa301,	// (0x000391d7) tmo_note_info_pane_t4_ParamLimits

0xa313,	// (0x000391e9) tmo_note_info_pane_t5_ParamLimits

0xfed5,	// (0x0003edab) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0003e1d0) settings_container_pane_ParamLimits

0xa69d,	// (0x00039573) indicator_popup_pane_cp5

0xa69d,	// (0x00039573) indicator_popup_pane_cp6

0xc98e,	// (0x0003b864) list_set_graphic_pane_copy1_ParamLimits

0x2ca9,	// (0x00031b7f) bg_popup_window_pane_cp23

0xa73c,	// (0x00039612) popup_tmo_big_image_note_window_g1

0xa746,	// (0x0003961c) popup_tmo_big_image_note_window_t1

0xa756,	// (0x0003962c) popup_tmo_big_image_note_window_t2

0xa766,	// (0x0003963c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeee,	// (0x0003edc4) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0003e3d1) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0003e3d9) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0003e3e7) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0003e3e7) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0003e400) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0003e400) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0003e40d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0003e40d) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0003e425) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0003e425) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef5,	// (0x0003edcb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef5,	// (0x0003edcb) cell_ai5_widget_list_row_pane_t

0x02ad,	// (0x0002f183) main_fep_vtchi_ss_pane

0xa7dc,	// (0x000396b2) popup_fep_char_pre_window

0xa7e4,	// (0x000396ba) popup_fep_ituss_window

0xa805,	// (0x000396db) popup_fep_vkbss_window

0xa824,	// (0x000396fa) grid_vkbss_keypad_pane_ParamLimits

0xa824,	// (0x000396fa) grid_vkbss_keypad_pane

0xa834,	// (0x0003970a) ituss_keypad_pane

0xa84d,	// (0x00039723) aid_vkbss_key_offset_ParamLimits

0xa84d,	// (0x00039723) aid_vkbss_key_offset

0xa859,	// (0x0003972f) cell_vkbss_key_pane_ParamLimits

0xa859,	// (0x0003972f) cell_vkbss_key_pane

0xa86f,	// (0x00039745) bg_cell_vkbss_key_g1_ParamLimits

0xa86f,	// (0x00039745) bg_cell_vkbss_key_g1

0xa87b,	// (0x00039751) cell_vkbss_key_3p_pane_ParamLimits

0xa87b,	// (0x00039751) cell_vkbss_key_3p_pane

0xa895,	// (0x0003976b) cell_vkbss_key_g1_ParamLimits

0xa895,	// (0x0003976b) cell_vkbss_key_g1

0xa8af,	// (0x00039785) cell_vkbss_key_t1_ParamLimits

0xa8af,	// (0x00039785) cell_vkbss_key_t1

0xa8da,	// (0x000397b0) cell_ituss_key_pane_ParamLimits

0xa8da,	// (0x000397b0) cell_ituss_key_pane

0xa8ea,	// (0x000397c0) bg_cell_ituss_key_g1_ParamLimits

0xa8ea,	// (0x000397c0) bg_cell_ituss_key_g1

0xa8f6,	// (0x000397cc) cell_ituss_key_pane_g1_ParamLimits

0xa8f6,	// (0x000397cc) cell_ituss_key_pane_g1

0xa902,	// (0x000397d8) cell_ituss_key_pane_g2_ParamLimits

0xa902,	// (0x000397d8) cell_ituss_key_pane_g2

0x0001,

0xfefa,	// (0x0003edd0) cell_ituss_key_pane_g_ParamLimits

0xfefa,	// (0x0003edd0) cell_ituss_key_pane_g

0xa91b,	// (0x000397f1) cell_ituss_key_t1_ParamLimits

0xa91b,	// (0x000397f1) cell_ituss_key_t1

0xa949,	// (0x0003981f) cell_ituss_key_t2_ParamLimits

0xa949,	// (0x0003981f) cell_ituss_key_t2

0xa97a,	// (0x00039850) cell_ituss_key_t3_ParamLimits

0xa97a,	// (0x00039850) cell_ituss_key_t3

0xa9ab,	// (0x00039881) cell_ituss_key_t4_ParamLimits

0xa9ab,	// (0x00039881) cell_ituss_key_t4

0x0003,

0xfeff,	// (0x0003edd5) cell_ituss_key_t_ParamLimits

0xfeff,	// (0x0003edd5) cell_ituss_key_t

0xa9dc,	// (0x000398b2) cell_vkbss_key_3p_pane_g1

0xa9e4,	// (0x000398ba) cell_vkbss_key_3p_pane_g2

0xa9ec,	// (0x000398c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0003edde) cell_vkbss_key_3p_pane_g

0x2ca9,	// (0x00031b7f) bg_popup_fep_char_preview_window_cp02

0xa9f4,	// (0x000398ca) popup_fep_char_pre_window_t1

0xef60,	// (0x0003de36) main_ai5_sk_pane

0xa38d,	// (0x00039263) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa399,	// (0x0003926f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa3ad,	// (0x00039283) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3bc,	// (0x00039292) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee0,	// (0x0003edb6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3cf,	// (0x000392a5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3609,	// (0x000324df) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0003e437) main_ai5_sk_pane_g1

0x5570,	// (0x00034446) popup_query_code_window_g1

0xa7fa,	// (0x000396d0) popup_fep_vkb_icf_pane

0xa80e,	// (0x000396e4) popup_fep_vtchi_icf_pane

0x3609,	// (0x000324df) bg_icf_pane

0xaa1b,	// (0x000398f1) list_vkb_icf_pane

0x3609,	// (0x000324df) bg_icf_pane_cp01

0x8b32,	// (0x00037a08) vtchi_icf_list_pane

0xaa3b,	// (0x00039911) list_vkb_icf_pane_t1_ParamLimits

0xaa3b,	// (0x00039911) list_vkb_icf_pane_t1

0xaa52,	// (0x00039928) vtchi_icf_list_pane_t1_ParamLimits

0xaa52,	// (0x00039928) vtchi_icf_list_pane_t1

0xa7e4,	// (0x000396ba) popup_fep_ituss_window_ParamLimits

0xa80e,	// (0x000396e4) popup_fep_vtchi_icf_pane_ParamLimits

0xa834,	// (0x0003970a) ituss_keypad_pane_ParamLimits

0xa844,	// (0x0003971a) ituss_sks_pane

0x3609,	// (0x000324df) bg_icf_pane_ParamLimits

0xaa0c,	// (0x000398e2) icf_edit_indi_pane_ParamLimits

0xaa0c,	// (0x000398e2) icf_edit_indi_pane

0xaa1b,	// (0x000398f1) list_vkb_icf_pane_ParamLimits

0x3609,	// (0x000324df) bg_icf_pane_cp01_ParamLimits

0xaa27,	// (0x000398fd) icf_edit_indi_pane_cp01_ParamLimits

0xaa27,	// (0x000398fd) icf_edit_indi_pane_cp01

0xaa33,	// (0x00039909) vtchi_query_pane

0x7929,	// (0x000367ff) icf_edit_indi_pane_g1_ParamLimits

0x7929,	// (0x000367ff) icf_edit_indi_pane_g1

0xaa6e,	// (0x00039944) icf_edit_indi_pane_g2_ParamLimits

0xaa6e,	// (0x00039944) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x0003ede5) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x0003ede5) icf_edit_indi_pane_g

0xaa7a,	// (0x00039950) icf_edit_indi_pane_t1

0xaa88,	// (0x0003995e) bg_input_focus_pane_cp042

0x3538,	// (0x0003240e) vtchi_button_pane

0xaa91,	// (0x00039967) vtchi_query_pane_t1

0xaa9f,	// (0x00039975) vtchi_query_pane_t2

0xaaad,	// (0x00039983) vtchi_query_pane_t3

0x0002,

0xff14,	// (0x0003edea) vtchi_query_pane_t

0x2ca9,	// (0x00031b7f) bg_button_pane_cp13

0xaabb,	// (0x00039991) vtchi_button_pane_g1

0x907a,	// (0x00037f50) ituss_sks_pane_g1

0xaac3,	// (0x00039999) ituss_sks_pane_g2

0x0001,

0xff1b,	// (0x0003edf1) ituss_sks_pane_g

0xaacc,	// (0x000399a2) ituss_sks_pane_t1

0xaada,	// (0x000399b0) ituss_sks_pane_t2

0x0001,

0xff20,	// (0x0003edf6) ituss_sks_pane_t

0x70f9,	// (0x00035fcf) indicator_nsta_pane_cp_g1

0x7102,	// (0x00035fd8) indicator_nsta_pane_cp_g2

0x710a,	// (0x00035fe0) indicator_nsta_pane_cp_g3

0x7112,	// (0x00035fe8) indicator_nsta_pane_cp_g4

0x711a,	// (0x00035ff0) indicator_nsta_pane_cp_g5

0x7122,	// (0x00035ff8) indicator_nsta_pane_cp_g6

0x0005,

0xfabe,	// (0x0003e994) indicator_nsta_pane_cp_g

0xed9e,	// (0x0003dc74) cell_graphic2_pane_t2_ParamLimits

0xed9e,	// (0x0003dc74) cell_graphic2_pane_t2

0x0001,

0xfdd7,	// (0x0003ecad) cell_graphic2_pane_t_ParamLimits

0xfdd7,	// (0x0003ecad) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

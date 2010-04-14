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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ac80 };

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
0x7eb1,	// (0x00022b31) Screen

0x7ec5,	// (0x00022b45) application_window_ParamLimits

0x7ec5,	// (0x00022b45) application_window

0x7edf,	// (0x00022b5f) screen_g1

0x5b31,	// (0x000207b1) area_bottom_pane_ParamLimits

0x5b31,	// (0x000207b1) area_bottom_pane

0x5bf1,	// (0x00020871) area_top_pane_ParamLimits

0x5bf1,	// (0x00020871) area_top_pane

0x5c85,	// (0x00020905) main_pane_ParamLimits

0x5c85,	// (0x00020905) main_pane

0x7ee9,	// (0x00022b69) misc_graphics

0x989e,	// (0x0002451e) battery_pane_ParamLimits

0x989e,	// (0x0002451e) battery_pane

0xa570,	// (0x000251f0) bg_status_flat_pane_g8

0xa578,	// (0x000251f8) bg_status_flat_pane_g9

0x9960,	// (0x000245e0) context_pane_ParamLimits

0x9960,	// (0x000245e0) context_pane

0x9a76,	// (0x000246f6) navi_pane_ParamLimits

0x9a76,	// (0x000246f6) navi_pane

0x9afa,	// (0x0002477a) signal_pane_ParamLimits

0x9afa,	// (0x0002477a) signal_pane

0x0008,

0xf872,	// (0x0002a4f2) bg_status_flat_pane_g

0x9b67,	// (0x000247e7) status_pane_g1_ParamLimits

0x9b67,	// (0x000247e7) status_pane_g1

0x9b7b,	// (0x000247fb) status_pane_g2_ParamLimits

0x9b7b,	// (0x000247fb) status_pane_g2

0x9b87,	// (0x00024807) status_pane_g3_ParamLimits

0x9b87,	// (0x00024807) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a420) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a420) status_pane_g

0x9bbb,	// (0x0002483b) title_pane_ParamLimits

0x9bbb,	// (0x0002483b) title_pane

0x9bf8,	// (0x00024878) uni_indicator_pane_ParamLimits

0x9bf8,	// (0x00024878) uni_indicator_pane

0x97c2,	// (0x00024442) bg_list_pane_ParamLimits

0x97c2,	// (0x00024442) bg_list_pane

0x514f,	// (0x0001fdcf) find_pane

0x97e2,	// (0x00024462) listscroll_app_pane_ParamLimits

0x97e2,	// (0x00024462) listscroll_app_pane

0x97ee,	// (0x0002446e) listscroll_form_pane

0x5157,	// (0x0001fdd7) listscroll_gen_pane_ParamLimits

0x5157,	// (0x0001fdd7) listscroll_gen_pane

0x6550,	// (0x000211d0) listscroll_set_pane

0x8a1c,	// (0x0002369c) main_idle_act_pane

0x94ca,	// (0x0002414a) main_idle_trad_pane

0x94ca,	// (0x0002414a) main_list_empty_pane

0x9808,	// (0x00024488) main_midp_pane

0x9814,	// (0x00024494) main_pane_g1_ParamLimits

0x9814,	// (0x00024494) main_pane_g1

0x6558,	// (0x000211d8) popup_ai_message_window_ParamLimits

0x6558,	// (0x000211d8) popup_ai_message_window

0x65fe,	// (0x0002127e) popup_fep_china_uni_window_ParamLimits

0x65fe,	// (0x0002127e) popup_fep_china_uni_window

0x665a,	// (0x000212da) popup_fep_japan_candidate_window_ParamLimits

0x665a,	// (0x000212da) popup_fep_japan_candidate_window

0x667a,	// (0x000212fa) popup_fep_japan_predictive_window_ParamLimits

0x667a,	// (0x000212fa) popup_fep_japan_predictive_window

0x66aa,	// (0x0002132a) popup_find_window

0x66b7,	// (0x00021337) popup_grid_graphic_window_ParamLimits

0x66b7,	// (0x00021337) popup_grid_graphic_window

0x66e1,	// (0x00021361) popup_large_graphic_colour_window

0x6707,	// (0x00021387) popup_menu_window_ParamLimits

0x6707,	// (0x00021387) popup_menu_window

0x68bf,	// (0x0002153f) popup_note_image_window

0x68ab,	// (0x0002152b) popup_note_wait_window_ParamLimits

0x68ab,	// (0x0002152b) popup_note_wait_window

0x68ab,	// (0x0002152b) popup_note_window_ParamLimits

0x68ab,	// (0x0002152b) popup_note_window

0x6915,	// (0x00021595) popup_query_code_window_ParamLimits

0x6915,	// (0x00021595) popup_query_code_window

0x6929,	// (0x000215a9) popup_query_data_code_window_ParamLimits

0x6929,	// (0x000215a9) popup_query_data_code_window

0x6946,	// (0x000215c6) popup_query_data_window_ParamLimits

0x6946,	// (0x000215c6) popup_query_data_window

0x6962,	// (0x000215e2) popup_query_sat_info_window_ParamLimits

0x6962,	// (0x000215e2) popup_query_sat_info_window

0x699b,	// (0x0002161b) popup_snote_single_graphic_window_ParamLimits

0x699b,	// (0x0002161b) popup_snote_single_graphic_window

0x699b,	// (0x0002161b) popup_snote_single_text_window_ParamLimits

0x699b,	// (0x0002161b) popup_snote_single_text_window

0x69b0,	// (0x00021630) popup_sub_window_general

0x6ae0,	// (0x00021760) popup_window_general_ParamLimits

0x6ae0,	// (0x00021760) popup_window_general

0x9822,	// (0x000244a2) power_save_pane

0x63ec,	// (0x0002106c) control_pane_g1_ParamLimits

0x63ec,	// (0x0002106c) control_pane_g1

0x6413,	// (0x00021093) control_pane_g2_ParamLimits

0x6413,	// (0x00021093) control_pane_g2

0x9785,	// (0x00024405) control_pane_g3_ParamLimits

0x9785,	// (0x00024405) control_pane_g3

0x0007,

0xf788,	// (0x0002a408) control_pane_g_ParamLimits

0xf788,	// (0x0002a408) control_pane_g

0x645d,	// (0x000210dd) control_pane_t1_ParamLimits

0x645d,	// (0x000210dd) control_pane_t1

0x64a9,	// (0x00021129) control_pane_t2_ParamLimits

0x64a9,	// (0x00021129) control_pane_t2

0x0002,

0xf799,	// (0x0002a419) control_pane_t_ParamLimits

0xf799,	// (0x0002a419) control_pane_t

0x96aa,	// (0x0002432a) navi_navi_volume_pane_cp1

0x96b2,	// (0x00024332) status_small_icon_pane

0x96ba,	// (0x0002433a) status_small_pane_g1_ParamLimits

0x96ba,	// (0x0002433a) status_small_pane_g1

0x96ee,	// (0x0002436e) status_small_pane_g2_ParamLimits

0x96ee,	// (0x0002436e) status_small_pane_g2

0x96fa,	// (0x0002437a) status_small_pane_g3_ParamLimits

0x96fa,	// (0x0002437a) status_small_pane_g3

0x9706,	// (0x00024386) status_small_pane_g4_ParamLimits

0x9706,	// (0x00024386) status_small_pane_g4

0x9712,	// (0x00024392) status_small_pane_g5_ParamLimits

0x9712,	// (0x00024392) status_small_pane_g5

0x9720,	// (0x000243a0) status_small_pane_g6_ParamLimits

0x9720,	// (0x000243a0) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a3f7) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a3f7) status_small_pane_g

0x974f,	// (0x000243cf) status_small_pane_t1

0x9771,	// (0x000243f1) status_small_wait_pane_ParamLimits

0x9771,	// (0x000243f1) status_small_wait_pane

0x8f3c,	// (0x00023bbc) aid_levels_signal_ParamLimits

0x8f3c,	// (0x00023bbc) aid_levels_signal

0x8f4e,	// (0x00023bce) signal_pane_g1_ParamLimits

0x8f4e,	// (0x00023bce) signal_pane_g1

0x8f63,	// (0x00023be3) signal_pane_g2_ParamLimits

0x8f63,	// (0x00023be3) signal_pane_g2

0x0003,

0xf708,	// (0x0002a388) signal_pane_g_ParamLimits

0xf708,	// (0x0002a388) signal_pane_g

0x8f9e,	// (0x00023c1e) context_pane_g1

0x7ef3,	// (0x00022b73) title_pane_g1

0x7f29,	// (0x00022ba9) title_pane_t1

0x7f91,	// (0x00022c11) title_pane_t2

0x7fb7,	// (0x00022c37) title_pane_t3

0x0002,

0xf557,	// (0x0002a1d7) title_pane_t

0x9c10,	// (0x00024890) aid_levels_battery_ParamLimits

0x9c10,	// (0x00024890) aid_levels_battery

0x9c24,	// (0x000248a4) battery_pane_g1_ParamLimits

0x9c24,	// (0x000248a4) battery_pane_g1

0x9c3a,	// (0x000248ba) battery_pane_g2_ParamLimits

0x9c3a,	// (0x000248ba) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a42b) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a42b) battery_pane_g

0xaea6,	// (0x00025b26) uni_indicator_pane_g1

0xaebc,	// (0x00025b3c) uni_indicator_pane_g2

0xaed2,	// (0x00025b52) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a59a) uni_indicator_pane_g

0x933c,	// (0x00023fbc) navi_icon_pane_ParamLimits

0x933c,	// (0x00023fbc) navi_icon_pane

0x927a,	// (0x00023efa) navi_midp_pane

0x9358,	// (0x00023fd8) navi_navi_pane

0x9362,	// (0x00023fe2) navi_text_pane_ParamLimits

0x9362,	// (0x00023fe2) navi_text_pane

0x7edf,	// (0x00022b5f) status_small_wait_pane_g1

0x83e6,	// (0x00023066) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a595) status_small_wait_pane_g

0xabcb,	// (0x0002584b) navi_navi_icon_text_pane

0xabd3,	// (0x00025853) navi_navi_pane_g1_ParamLimits

0xabd3,	// (0x00025853) navi_navi_pane_g1

0xabe5,	// (0x00025865) navi_navi_pane_g2_ParamLimits

0xabe5,	// (0x00025865) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a563) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a563) navi_navi_pane_g

0xabf7,	// (0x00025877) navi_navi_tabs_pane

0xac00,	// (0x00025880) navi_navi_text_pane

0xabcb,	// (0x0002584b) navi_navi_volume_pane

0xaba7,	// (0x00025827) navi_text_pane_t1

0xab9b,	// (0x0002581b) navi_icon_pane_g1

0xaaee,	// (0x0002576e) navi_navi_text_pane_t1

0x6d6a,	// (0x000219ea) navi_navi_volume_pane_g1

0x6d72,	// (0x000219f2) volume_small_pane

0xaa54,	// (0x000256d4) navi_navi_icon_text_pane_g1

0xaa5c,	// (0x000256dc) navi_navi_icon_text_pane_t1

0x9358,	// (0x00023fd8) navi_tabs_2_long_pane

0x9358,	// (0x00023fd8) navi_tabs_2_pane

0x9358,	// (0x00023fd8) navi_tabs_3_long_pane

0x9358,	// (0x00023fd8) navi_tabs_3_pane

0x9358,	// (0x00023fd8) navi_tabs_4_pane

0x6d4a,	// (0x000219ca) tabs_2_active_pane_ParamLimits

0x6d4a,	// (0x000219ca) tabs_2_active_pane

0x6d5a,	// (0x000219da) tabs_2_passive_pane_ParamLimits

0x6d5a,	// (0x000219da) tabs_2_passive_pane

0x6d18,	// (0x00021998) tabs_3_active_pane_ParamLimits

0x6d18,	// (0x00021998) tabs_3_active_pane

0x6d28,	// (0x000219a8) tabs_3_passive_pane_ParamLimits

0x6d28,	// (0x000219a8) tabs_3_passive_pane

0x6d39,	// (0x000219b9) tabs_3_passive_pane_cp_ParamLimits

0x6d39,	// (0x000219b9) tabs_3_passive_pane_cp

0x6cd4,	// (0x00021954) tabs_4_active_pane_ParamLimits

0x6cd4,	// (0x00021954) tabs_4_active_pane

0x6ce5,	// (0x00021965) tabs_4_passive_pane_ParamLimits

0x6ce5,	// (0x00021965) tabs_4_passive_pane

0x6cf6,	// (0x00021976) tabs_4_passive_pane_cp_ParamLimits

0x6cf6,	// (0x00021976) tabs_4_passive_pane_cp

0x6d07,	// (0x00021987) tabs_4_passive_pane_cp2_ParamLimits

0x6d07,	// (0x00021987) tabs_4_passive_pane_cp2

0x6cb0,	// (0x00021930) tabs_2_long_active_pane_ParamLimits

0x6cb0,	// (0x00021930) tabs_2_long_active_pane

0x6cc2,	// (0x00021942) tabs_2_long_passive_pane_ParamLimits

0x6cc2,	// (0x00021942) tabs_2_long_passive_pane

0x6c71,	// (0x000218f1) tabs_3_long_active_pane_ParamLimits

0x6c71,	// (0x000218f1) tabs_3_long_active_pane

0x6c84,	// (0x00021904) tabs_3_long_passive_pane_ParamLimits

0x6c84,	// (0x00021904) tabs_3_long_passive_pane

0x6c9d,	// (0x0002191d) tabs_3_long_passive_pane_cp_ParamLimits

0x6c9d,	// (0x0002191d) tabs_3_long_passive_pane_cp

0x6c17,	// (0x00021897) volume_small_pane_g1

0x6c20,	// (0x000218a0) volume_small_pane_g2

0x6c29,	// (0x000218a9) volume_small_pane_g3

0x6c32,	// (0x000218b2) volume_small_pane_g4

0x6c3b,	// (0x000218bb) volume_small_pane_g5

0x6c44,	// (0x000218c4) volume_small_pane_g6

0x6c4d,	// (0x000218cd) volume_small_pane_g7

0x6c56,	// (0x000218d6) volume_small_pane_g8

0x6c5f,	// (0x000218df) volume_small_pane_g9

0x6c68,	// (0x000218e8) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a52f) volume_small_pane_g

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp2_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp2

0x7fd7,	// (0x00022c57) tabs_3_active_pane_g1

0x7fdf,	// (0x00022c5f) tabs_3_active_pane_t1

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp2_ParamLimits

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp2

0x7fd7,	// (0x00022c57) tabs_3_passive_pane_g1

0x7fdf,	// (0x00022c5f) tabs_3_passive_pane_t1

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp3_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp3

0x7ff1,	// (0x00022c71) tabs_4_active_pane_g1

0x7ff9,	// (0x00022c79) tabs_4_active_pane_t1

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp3_ParamLimits

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp3

0x7ff1,	// (0x00022c71) tabs_4_1_passive_pane_g1

0x7ff9,	// (0x00022c79) tabs_4_1_passive_pane_t1

0x9808,	// (0x00024488) list_highlight_pane_cp2

0xb11a,	// (0x00025d9a) list_set_pane_ParamLimits

0xb11a,	// (0x00025d9a) list_set_pane

0xb1c0,	// (0x00025e40) main_pane_set_t1_ParamLimits

0xb1c0,	// (0x00025e40) main_pane_set_t1

0xb1e0,	// (0x00025e60) main_pane_set_t2_ParamLimits

0xb1e0,	// (0x00025e60) main_pane_set_t2

0xb1f4,	// (0x00025e74) main_pane_set_t3_ParamLimits

0xb1f4,	// (0x00025e74) main_pane_set_t3

0xb206,	// (0x00025e86) main_pane_set_t4_ParamLimits

0xb206,	// (0x00025e86) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a5ff) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a5ff) main_pane_set_t

0xb218,	// (0x00025e98) setting_code_pane

0xb224,	// (0x00025ea4) setting_slider_graphic_pane

0xb224,	// (0x00025ea4) setting_slider_pane

0xb224,	// (0x00025ea4) setting_text_pane

0xb224,	// (0x00025ea4) setting_volume_pane

0x5ed4,	// (0x00020b54) volume_set_pane

0x7fc9,	// (0x00022c49) bg_set_opt_pane_cp

0x5edc,	// (0x00020b5c) setting_slider_pane_t1

0x5ef5,	// (0x00020b75) setting_slider_pane_t2

0x5f0f,	// (0x00020b8f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002a1de) setting_slider_pane_t

0x5f27,	// (0x00020ba7) slider_set_pane

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp2

0x800b,	// (0x00022c8b) setting_slider_graphic_pane_g1

0x5f3d,	// (0x00020bbd) setting_slider_graphic_pane_t1

0x5f4d,	// (0x00020bcd) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002a1e5) setting_slider_graphic_pane_t

0x5f5d,	// (0x00020bdd) slider_set_pane_cp

0x7ee9,	// (0x00022b69) input_focus_pane_cp1

0xb0d9,	// (0x00025d59) list_set_text_pane

0x7edf,	// (0x00022b5f) setting_text_pane_g1

0x7ee9,	// (0x00022b69) input_focus_pane_cp2

0x7edf,	// (0x00022b5f) setting_code_pane_g1

0x8014,	// (0x00022c94) setting_code_pane_t1

0x49a2,	// (0x0001f622) set_text_pane_t1_ParamLimits

0x49a2,	// (0x0001f622) set_text_pane_t1

0x8893,	// (0x00023513) set_opt_bg_pane_g1

0x889b,	// (0x0002351b) set_opt_bg_pane_g2

0xb0b3,	// (0x00025d33) set_opt_bg_pane_g3

0x88ab,	// (0x0002352b) set_opt_bg_pane_g4

0x88b3,	// (0x00023533) set_opt_bg_pane_g5

0x88bb,	// (0x0002353b) set_opt_bg_pane_g6

0xb0bd,	// (0x00025d3d) set_opt_bg_pane_g7

0xb0c5,	// (0x00025d45) set_opt_bg_pane_g8

0xb0cf,	// (0x00025d4f) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a5ec) set_opt_bg_pane_g

0xb0a6,	// (0x00025d26) slider_set_pane_g1

0x6ddf,	// (0x00021a5f) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a5dd) slider_set_pane_g

0x6d7b,	// (0x000219fb) volume_set_pane_g1

0x6d83,	// (0x00021a03) volume_set_pane_g2

0x6d8b,	// (0x00021a0b) volume_set_pane_g3

0x6d93,	// (0x00021a13) volume_set_pane_g4

0x6d9b,	// (0x00021a1b) volume_set_pane_g5

0x6da3,	// (0x00021a23) volume_set_pane_g6

0x6dab,	// (0x00021a2b) volume_set_pane_g7

0x6db3,	// (0x00021a33) volume_set_pane_g8

0x6dbb,	// (0x00021a3b) volume_set_pane_g9

0x6dc3,	// (0x00021a43) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a5b5) volume_set_pane_g

0x8022,	// (0x00022ca2) indicator_pane_ParamLimits

0x8022,	// (0x00022ca2) indicator_pane

0x802e,	// (0x00022cae) main_idle_pane_g2_ParamLimits

0x802e,	// (0x00022cae) main_idle_pane_g2

0x8056,	// (0x00022cd6) main_pane_idle_g1_ParamLimits

0x8056,	// (0x00022cd6) main_pane_idle_g1

0x8063,	// (0x00022ce3) popup_clock_digital_analogue_window_ParamLimits

0x8063,	// (0x00022ce3) popup_clock_digital_analogue_window

0x807a,	// (0x00022cfa) soft_indicator_pane_ParamLimits

0x807a,	// (0x00022cfa) soft_indicator_pane

0x8086,	// (0x00022d06) wallpaper_pane_ParamLimits

0x8086,	// (0x00022d06) wallpaper_pane

0x7edf,	// (0x00022b5f) wallpaper_pane_g1

0x809a,	// (0x00022d1a) indicator_pane_g1_ParamLimits

0x809a,	// (0x00022d1a) indicator_pane_g1

0xb4de,	// (0x0002615e) navi_navi_icon_text_pane_srt_g1

0x80b5,	// (0x00022d35) soft_indicator_pane_t1

0x80cf,	// (0x00022d4f) aid_ps_area_pane

0x80e0,	// (0x00022d60) aid_ps_clock_pane

0x80ee,	// (0x00022d6e) aid_ps_indicator_pane

0x80fa,	// (0x00022d7a) indicator_ps_pane_ParamLimits

0x80fa,	// (0x00022d7a) indicator_ps_pane

0x8109,	// (0x00022d89) power_save_pane_g1_ParamLimits

0x8109,	// (0x00022d89) power_save_pane_g1

0x8115,	// (0x00022d95) power_save_pane_g2_ParamLimits

0x8115,	// (0x00022d95) power_save_pane_g2

0x5ae5,	// (0x00020765) aid_navinavi_width_pane

0x80cf,	// (0x00022d4f) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002a1ea) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002a1ea) power_save_pane_g

0x8123,	// (0x00022da3) power_save_pane_t1_ParamLimits

0x8123,	// (0x00022da3) power_save_pane_t1

0x80e0,	// (0x00022d60) aid_ps_clock_pane_ParamLimits

0x80ee,	// (0x00022d6e) aid_ps_indicator_pane_ParamLimits

0x8135,	// (0x00022db5) power_save_pane_t4_ParamLimits

0x8135,	// (0x00022db5) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002a1ef) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002a1ef) power_save_pane_t

0x815f,	// (0x00022ddf) power_save_t3_ParamLimits

0x815f,	// (0x00022ddf) power_save_t3

0x814a,	// (0x00022dca) power_save_t2_ParamLimits

0x814a,	// (0x00022dca) power_save_t2

0x8174,	// (0x00022df4) indicator_ps_pane_g1

0x817d,	// (0x00022dfd) ai_gene_pane_ParamLimits

0x817d,	// (0x00022dfd) ai_gene_pane

0x8189,	// (0x00022e09) ai_links_pane_ParamLimits

0x8189,	// (0x00022e09) ai_links_pane

0x8195,	// (0x00022e15) indicator_pane_cp1_ParamLimits

0x8195,	// (0x00022e15) indicator_pane_cp1

0x81a1,	// (0x00022e21) main_pane_idle_g1_cp_ParamLimits

0x81a1,	// (0x00022e21) main_pane_idle_g1_cp

0x81ad,	// (0x00022e2d) popup_ai_links_title_window

0x81b6,	// (0x00022e36) soft_indicator_pane_cp1_ParamLimits

0x81b6,	// (0x00022e36) soft_indicator_pane_cp1

0xae94,	// (0x00025b14) ai_links_pane_g1

0xae9d,	// (0x00025b1d) grid_ai_links_pane

0xae77,	// (0x00025af7) ai_gene_pane_1

0xae82,	// (0x00025b02) ai_gene_pane_2

0xae8b,	// (0x00025b0b) list_highlight_pane_cp4

0xae5b,	// (0x00025adb) cell_ai_link_pane_ParamLimits

0xae5b,	// (0x00025adb) cell_ai_link_pane

0xae53,	// (0x00025ad3) cell_ai_link_pane_g1

0x83e6,	// (0x00023066) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a590) cell_ai_link_pane_g

0x7ee9,	// (0x00022b69) grid_highlight_cp2

0x7ee9,	// (0x00022b69) bg_popup_sub_pane_cp1

0x81d0,	// (0x00022e50) popup_ai_links_title_window_t1

0xada1,	// (0x00025a21) ai_gene_pane_1_g1_ParamLimits

0xada1,	// (0x00025a21) ai_gene_pane_1_g1

0xadad,	// (0x00025a2d) ai_gene_pane_1_g2_ParamLimits

0xadad,	// (0x00025a2d) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a586) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a586) ai_gene_pane_1_g

0xadba,	// (0x00025a3a) ai_gene_pane_1_t1_ParamLimits

0xadba,	// (0x00025a3a) ai_gene_pane_1_t1

0xadee,	// (0x00025a6e) grid_ai_soft_ind_pane

0xad8c,	// (0x00025a0c) ai_gene_pane_2_t1_ParamLimits

0xad8c,	// (0x00025a0c) ai_gene_pane_2_t1

0x81df,	// (0x00022e5f) main_pane_empty_t1_ParamLimits

0x81df,	// (0x00022e5f) main_pane_empty_t1

0x81f7,	// (0x00022e77) main_pane_empty_t2_ParamLimits

0x81f7,	// (0x00022e77) main_pane_empty_t2

0x820c,	// (0x00022e8c) main_pane_empty_t3_ParamLimits

0x820c,	// (0x00022e8c) main_pane_empty_t3

0x821e,	// (0x00022e9e) main_pane_empty_t4_ParamLimits

0x821e,	// (0x00022e9e) main_pane_empty_t4

0x8230,	// (0x00022eb0) main_pane_empty_t5_ParamLimits

0x8230,	// (0x00022eb0) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002a1f4) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002a1f4) main_pane_empty_t

0x88e4,	// (0x00023564) bg_popup_window_pane_ParamLimits

0x88e4,	// (0x00023564) bg_popup_window_pane

0xaafc,	// (0x0002577c) find_popup_pane_cp2_ParamLimits

0xaafc,	// (0x0002577c) find_popup_pane_cp2

0xab08,	// (0x00025788) heading_pane_ParamLimits

0xab08,	// (0x00025788) heading_pane

0x7ee9,	// (0x00022b69) bg_popup_sub_pane

0xaa76,	// (0x000256f6) bg_popup_window_pane_g1_ParamLimits

0xaa76,	// (0x000256f6) bg_popup_window_pane_g1

0xaa82,	// (0x00025702) bg_popup_window_pane_g2_ParamLimits

0xaa82,	// (0x00025702) bg_popup_window_pane_g2

0xaa8e,	// (0x0002570e) bg_popup_window_pane_g3_ParamLimits

0xaa8e,	// (0x0002570e) bg_popup_window_pane_g3

0xaa9a,	// (0x0002571a) bg_popup_window_pane_g4_ParamLimits

0xaa9a,	// (0x0002571a) bg_popup_window_pane_g4

0xaaa6,	// (0x00025726) bg_popup_window_pane_g5_ParamLimits

0xaaa6,	// (0x00025726) bg_popup_window_pane_g5

0xaab2,	// (0x00025732) bg_popup_window_pane_g6_ParamLimits

0xaab2,	// (0x00025732) bg_popup_window_pane_g6

0xaabe,	// (0x0002573e) bg_popup_window_pane_g7_ParamLimits

0xaabe,	// (0x0002573e) bg_popup_window_pane_g7

0xaaca,	// (0x0002574a) bg_popup_window_pane_g8_ParamLimits

0xaaca,	// (0x0002574a) bg_popup_window_pane_g8

0xaad6,	// (0x00025756) bg_popup_window_pane_g9_ParamLimits

0xaad6,	// (0x00025756) bg_popup_window_pane_g9

0xaae2,	// (0x00025762) bg_popup_window_pane_g10_ParamLimits

0xaae2,	// (0x00025762) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a54e) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a54e) bg_popup_window_pane_g

0xaa0b,	// (0x0002568b) bg_popup_heading_pane_ParamLimits

0xaa0b,	// (0x0002568b) bg_popup_heading_pane

0x6e67,	// (0x00021ae7) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e67,	// (0x00021ae7) tabs_4_passive_pane_cp_srt

0x6e79,	// (0x00021af9) tabs_4_passive_pane_srt_ParamLimits

0xaa1f,	// (0x0002569f) heading_pane_g2

0x6e79,	// (0x00021af9) tabs_4_passive_pane_srt

0x9808,	// (0x00024488) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9808,	// (0x00024488) bg_passive_tab_pane_cp3_srt

0xaa27,	// (0x000256a7) heading_pane_t1_ParamLimits

0xaa27,	// (0x000256a7) heading_pane_t1

0xaa3e,	// (0x000256be) heading_pane_t2_ParamLimits

0xaa3e,	// (0x000256be) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a549) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a549) heading_pane_t

0xa538,	// (0x000251b8) bg_popup_heading_pane_g1

0xa5e7,	// (0x00025267) bg_popup_heading_pane_g2

0xa5f1,	// (0x00025271) bg_popup_heading_pane_g3

0xa5fb,	// (0x0002527b) bg_popup_heading_pane_g4

0xa605,	// (0x00025285) bg_popup_heading_pane_g5

0xa60f,	// (0x0002528f) bg_popup_heading_pane_g6

0xa617,	// (0x00025297) bg_popup_heading_pane_g7

0xa61f,	// (0x0002529f) bg_popup_heading_pane_g8

0xa629,	// (0x000252a9) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a505) bg_popup_heading_pane_g

0x9d12,	// (0x00024992) bg_popup_sub_pane_g1

0x9d1a,	// (0x0002499a) bg_popup_sub_pane_g2

0x9d22,	// (0x000249a2) bg_popup_sub_pane_g3

0x9d2a,	// (0x000249aa) bg_popup_sub_pane_g4

0x9d32,	// (0x000249b2) bg_popup_sub_pane_g5

0x9d3a,	// (0x000249ba) bg_popup_sub_pane_g6

0x9d42,	// (0x000249c2) bg_popup_sub_pane_g7

0x9d4a,	// (0x000249ca) bg_popup_sub_pane_g8

0x9d52,	// (0x000249d2) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a4df) bg_popup_sub_pane_g

0x8244,	// (0x00022ec4) bg_popup_window_pane_cp5_ParamLimits

0x8244,	// (0x00022ec4) bg_popup_window_pane_cp5

0x8260,	// (0x00022ee0) popup_note_window_g1_ParamLimits

0x8260,	// (0x00022ee0) popup_note_window_g1

0x826c,	// (0x00022eec) popup_note_window_t1_ParamLimits

0x826c,	// (0x00022eec) popup_note_window_t1

0x8282,	// (0x00022f02) popup_note_window_t2_ParamLimits

0x8282,	// (0x00022f02) popup_note_window_t2

0x8298,	// (0x00022f18) popup_note_window_t3_ParamLimits

0x8298,	// (0x00022f18) popup_note_window_t3

0x82ae,	// (0x00022f2e) popup_note_window_t4_ParamLimits

0x82ae,	// (0x00022f2e) popup_note_window_t4

0x82d6,	// (0x00022f56) popup_note_window_t5_ParamLimits

0x82d6,	// (0x00022f56) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002a1ff) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002a1ff) popup_note_window_t

0x82fa,	// (0x00022f7a) bg_popup_window_pane_cp6_ParamLimits

0x82fa,	// (0x00022f7a) bg_popup_window_pane_cp6

0xa4b4,	// (0x00025134) popup_note_image_window_g1_ParamLimits

0xa4b4,	// (0x00025134) popup_note_image_window_g1

0xa4c0,	// (0x00025140) popup_note_image_window_g2_ParamLimits

0xa4c0,	// (0x00025140) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a4d3) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a4d3) popup_note_image_window_g

0xa4d9,	// (0x00025159) popup_note_image_window_t1_ParamLimits

0xa4d9,	// (0x00025159) popup_note_image_window_t1

0xa4f2,	// (0x00025172) popup_note_image_window_t2_ParamLimits

0xa4f2,	// (0x00025172) popup_note_image_window_t2

0xa50b,	// (0x0002518b) popup_note_image_window_t3_ParamLimits

0xa50b,	// (0x0002518b) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a4d8) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a4d8) popup_note_image_window_t

0xa375,	// (0x00024ff5) bg_popup_window_pane_cp7_ParamLimits

0xa375,	// (0x00024ff5) bg_popup_window_pane_cp7

0xa3a5,	// (0x00025025) popup_note_wait_window_g1_ParamLimits

0xa3a5,	// (0x00025025) popup_note_wait_window_g1

0xa3b1,	// (0x00025031) popup_note_wait_window_g2_ParamLimits

0xa3b1,	// (0x00025031) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a4c1) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a4c1) popup_note_wait_window_g

0xa3c9,	// (0x00025049) popup_note_wait_window_t1_ParamLimits

0xa3c9,	// (0x00025049) popup_note_wait_window_t1

0xa3f0,	// (0x00025070) popup_note_wait_window_t2_ParamLimits

0xa3f0,	// (0x00025070) popup_note_wait_window_t2

0xa40d,	// (0x0002508d) popup_note_wait_window_t3_ParamLimits

0xa40d,	// (0x0002508d) popup_note_wait_window_t3

0xa420,	// (0x000250a0) popup_note_wait_window_t4_ParamLimits

0xa420,	// (0x000250a0) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a4c8) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a4c8) popup_note_wait_window_t

0xa445,	// (0x000250c5) wait_bar_pane_ParamLimits

0xa445,	// (0x000250c5) wait_bar_pane

0x7ee9,	// (0x00022b69) wait_anim_pane

0x7ee9,	// (0x00022b69) wait_border_pane

0x7edf,	// (0x00022b5f) wait_anim_pane_g1

0x7edf,	// (0x00022b5f) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a383) wait_anim_pane_g

0xa319,	// (0x00024f99) wait_border_pane_g1

0xa324,	// (0x00024fa4) wait_border_pane_g2

0xa32d,	// (0x00024fad) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a4ba) wait_border_pane_g

0xa178,	// (0x00024df8) bg_popup_window_pane_cp16_ParamLimits

0xa178,	// (0x00024df8) bg_popup_window_pane_cp16

0xa284,	// (0x00024f04) indicator_popup_pane_cp4_ParamLimits

0xa284,	// (0x00024f04) indicator_popup_pane_cp4

0xa298,	// (0x00024f18) popup_query_data_window_t1_ParamLimits

0xa298,	// (0x00024f18) popup_query_data_window_t1

0xa2aa,	// (0x00024f2a) popup_query_data_window_t2_ParamLimits

0xa2aa,	// (0x00024f2a) popup_query_data_window_t2

0xa2c3,	// (0x00024f43) popup_query_data_window_t3_ParamLimits

0xa2c3,	// (0x00024f43) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a4b3) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a4b3) popup_query_data_window_t

0xa2dd,	// (0x00024f5d) query_popup_data_pane_ParamLimits

0xa2dd,	// (0x00024f5d) query_popup_data_pane

0xa2f1,	// (0x00024f71) query_popup_data_pane_cp1_ParamLimits

0xa2f1,	// (0x00024f71) query_popup_data_pane_cp1

0xa178,	// (0x00024df8) bg_popup_window_pane_cp10_ParamLimits

0xa178,	// (0x00024df8) bg_popup_window_pane_cp10

0xa1aa,	// (0x00024e2a) indicator_popup_pane_ParamLimits

0xa1aa,	// (0x00024e2a) indicator_popup_pane

0xa1d8,	// (0x00024e58) popup_query_code_window_t1_ParamLimits

0xa1d8,	// (0x00024e58) popup_query_code_window_t1

0xa1f2,	// (0x00024e72) popup_query_code_window_t2_ParamLimits

0xa1f2,	// (0x00024e72) popup_query_code_window_t2

0xa23b,	// (0x00024ebb) popup_query_code_window_t3_ParamLimits

0xa23b,	// (0x00024ebb) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a4ac) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a4ac) popup_query_code_window_t

0xa26a,	// (0x00024eea) query_popup_pane_ParamLimits

0xa26a,	// (0x00024eea) query_popup_pane

0x82fa,	// (0x00022f7a) bg_popup_window_pane_cp15_ParamLimits

0x82fa,	// (0x00022f7a) bg_popup_window_pane_cp15

0x8318,	// (0x00022f98) indicator_popup_pane_cp1_ParamLimits

0x8318,	// (0x00022f98) indicator_popup_pane_cp1

0x832b,	// (0x00022fab) indicator_popup_pane_cp2_ParamLimits

0x832b,	// (0x00022fab) indicator_popup_pane_cp2

0x833e,	// (0x00022fbe) popup_query_data_code_window_g1_ParamLimits

0x833e,	// (0x00022fbe) popup_query_data_code_window_g1

0x8351,	// (0x00022fd1) popup_query_data_code_window_t1_ParamLimits

0x8351,	// (0x00022fd1) popup_query_data_code_window_t1

0x8363,	// (0x00022fe3) popup_query_data_code_window_t2_ParamLimits

0x8363,	// (0x00022fe3) popup_query_data_code_window_t2

0x8375,	// (0x00022ff5) popup_query_data_code_window_t3_ParamLimits

0x8375,	// (0x00022ff5) popup_query_data_code_window_t3

0x838b,	// (0x0002300b) popup_query_data_code_window_t4_ParamLimits

0x838b,	// (0x0002300b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002a20a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002a20a) popup_query_data_code_window_t

0x6b4a,	// (0x000217ca) list_single_midp_graphic_pane_g3

0x83a3,	// (0x00023023) query_popup_data_pane_cp2_ParamLimits

0x83b6,	// (0x00023036) query_popup_pane_cp2_ParamLimits

0x83b6,	// (0x00023036) query_popup_pane_cp2

0x7ee9,	// (0x00022b69) bg_popup_window_pane_cp11

0xa170,	// (0x00024df0) heading_pane_cp5

0x84a1,	// (0x00023121) listscroll_popup_info_pane

0x7ee9,	// (0x00022b69) input_focus_pane_cp3

0x83c9,	// (0x00023049) query_popup_pane_t1

0x83d7,	// (0x00023057) list_popup_info_pane_ParamLimits

0x83d7,	// (0x00023057) list_popup_info_pane

0x83e6,	// (0x00023066) listscroll_popup_info_pane_g1

0x83ee,	// (0x0002306e) scroll_pane_cp7

0x83f8,	// (0x00023078) popup_info_list_pane_t1_ParamLimits

0x83f8,	// (0x00023078) popup_info_list_pane_t1

0x8412,	// (0x00023092) popup_info_list_pane_t2_ParamLimits

0x8412,	// (0x00023092) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002a213) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002a213) popup_info_list_pane_t

0x7ee9,	// (0x00022b69) bg_popup_window_pane_cp12

0xb4f8,	// (0x00026178) find_popup_pane

0x7fc9,	// (0x00022c49) bg_popup_window_pane_cp3

0x842c,	// (0x000230ac) heading_pane_cp3

0x8438,	// (0x000230b8) listscroll_popup_graphic_pane

0x7ee9,	// (0x00022b69) bg_popup_window_pane_cp4

0x8497,	// (0x00023117) heading_pane_cp4

0x84a1,	// (0x00023121) listscroll_popup_colour_pane

0x84a9,	// (0x00023129) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a9,	// (0x00023129) cell_large_graphic_colour_none_popup_pane

0x84bd,	// (0x0002313d) grid_large_graphic_colour_popup_pane_ParamLimits

0x84bd,	// (0x0002313d) grid_large_graphic_colour_popup_pane

0x84e9,	// (0x00023169) listscroll_popup_colour_pane_g1_ParamLimits

0x84e9,	// (0x00023169) listscroll_popup_colour_pane_g1

0x8500,	// (0x00023180) listscroll_popup_colour_pane_g2_ParamLimits

0x8500,	// (0x00023180) listscroll_popup_colour_pane_g2

0x8517,	// (0x00023197) listscroll_popup_colour_pane_g3_ParamLimits

0x8517,	// (0x00023197) listscroll_popup_colour_pane_g3

0x8527,	// (0x000231a7) listscroll_popup_colour_pane_g4_ParamLimits

0x8527,	// (0x000231a7) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002a218) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002a218) listscroll_popup_colour_pane_g

0x853b,	// (0x000231bb) scroll_pane_cp6_ParamLimits

0x853b,	// (0x000231bb) scroll_pane_cp6

0x854d,	// (0x000231cd) cell_large_graphic_colour_popup_pane_ParamLimits

0x854d,	// (0x000231cd) cell_large_graphic_colour_popup_pane

0x856c,	// (0x000231ec) cell_large_graphic_colour_none_popup_pane_t1

0x7ee9,	// (0x00022b69) grid_highlight_pane_cp5

0x857b,	// (0x000231fb) cell_large_graphic_colour_popup_pane_g1

0x8583,	// (0x00023203) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002a221) cell_large_graphic_colour_popup_pane_g

0x858b,	// (0x0002320b) cell_large_graphic_colour_popup_pane_g2_copy1

0x8594,	// (0x00023214) grid_highlight_pane_cp4

0x859c,	// (0x0002321c) bg_popup_window_pane_cp8_ParamLimits

0x859c,	// (0x0002321c) bg_popup_window_pane_cp8

0x85b7,	// (0x00023237) popup_snote_single_text_window_g1_ParamLimits

0x85b7,	// (0x00023237) popup_snote_single_text_window_g1

0x85c9,	// (0x00023249) popup_snote_single_text_window_t1_ParamLimits

0x85c9,	// (0x00023249) popup_snote_single_text_window_t1

0x85dc,	// (0x0002325c) popup_snote_single_text_window_t2_ParamLimits

0x85dc,	// (0x0002325c) popup_snote_single_text_window_t2

0x85ef,	// (0x0002326f) popup_snote_single_text_window_t3_ParamLimits

0x85ef,	// (0x0002326f) popup_snote_single_text_window_t3

0x8628,	// (0x000232a8) popup_snote_single_text_window_t4_ParamLimits

0x8628,	// (0x000232a8) popup_snote_single_text_window_t4

0x865c,	// (0x000232dc) popup_snote_single_text_window_t5_ParamLimits

0x865c,	// (0x000232dc) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002a226) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002a226) popup_snote_single_text_window_t

0x868b,	// (0x0002330b) bg_popup_window_pane_cp9_ParamLimits

0x868b,	// (0x0002330b) bg_popup_window_pane_cp9

0x85b7,	// (0x00023237) popup_snote_single_graphic_window_g1_ParamLimits

0x85b7,	// (0x00023237) popup_snote_single_graphic_window_g1

0x8699,	// (0x00023319) popup_snote_single_graphic_window_g2_ParamLimits

0x8699,	// (0x00023319) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002a231) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002a231) popup_snote_single_graphic_window_g

0x86a5,	// (0x00023325) popup_snote_single_graphic_window_t1_ParamLimits

0x86a5,	// (0x00023325) popup_snote_single_graphic_window_t1

0x86b8,	// (0x00023338) popup_snote_single_graphic_window_t2_ParamLimits

0x86b8,	// (0x00023338) popup_snote_single_graphic_window_t2

0x86cb,	// (0x0002334b) popup_snote_single_graphic_window_t3_ParamLimits

0x86cb,	// (0x0002334b) popup_snote_single_graphic_window_t3

0x8704,	// (0x00023384) popup_snote_single_graphic_window_t4_ParamLimits

0x8704,	// (0x00023384) popup_snote_single_graphic_window_t4

0x8738,	// (0x000233b8) popup_snote_single_graphic_window_t5_ParamLimits

0x8738,	// (0x000233b8) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002a236) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002a236) popup_snote_single_graphic_window_t

0xb43b,	// (0x000260bb) grid_graphic_popup_pane_ParamLimits

0xb43b,	// (0x000260bb) grid_graphic_popup_pane

0xb464,	// (0x000260e4) listscroll_popup_graphic_pane_g1_ParamLimits

0xb464,	// (0x000260e4) listscroll_popup_graphic_pane_g1

0xb478,	// (0x000260f8) listscroll_popup_graphic_pane_g2_ParamLimits

0xb478,	// (0x000260f8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a629) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a629) listscroll_popup_graphic_pane_g

0xb48c,	// (0x0002610c) scroll_pane_cp5

0xb3d8,	// (0x00026058) cell_graphic_popup_pane_ParamLimits

0xb3d8,	// (0x00026058) cell_graphic_popup_pane

0xb3b9,	// (0x00026039) cell_graphic_popup_pane_g1

0xb3c1,	// (0x00026041) cell_graphic_popup_pane_g2

0x858b,	// (0x0002320b) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a622) cell_graphic_popup_pane_g

0xb3ca,	// (0x0002604a) cell_graphic_popup_pane_t2

0x8594,	// (0x00023214) grid_highlight_pane_cp3

0x8779,	// (0x000233f9) list_gen_pane_ParamLimits

0x8779,	// (0x000233f9) list_gen_pane

0x87ab,	// (0x0002342b) scroll_pane

0xb311,	// (0x00025f91) bg_list_pane_g1_ParamLimits

0xb311,	// (0x00025f91) bg_list_pane_g1

0xb32e,	// (0x00025fae) bg_list_pane_g2_ParamLimits

0xb32e,	// (0x00025fae) bg_list_pane_g2

0xb343,	// (0x00025fc3) bg_list_pane_g3_ParamLimits

0xb343,	// (0x00025fc3) bg_list_pane_g3

0xb357,	// (0x00025fd7) bg_list_pane_g4_ParamLimits

0xb357,	// (0x00025fd7) bg_list_pane_g4

0xb36b,	// (0x00025feb) bg_list_pane_g5_ParamLimits

0xb36b,	// (0x00025feb) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a617) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a617) bg_list_pane_g

0x534a,	// (0x0001ffca) list_double2_graphic_large_graphic_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double2_graphic_large_graphic_pane

0x534a,	// (0x0001ffca) list_double2_graphic_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double2_graphic_pane

0x534a,	// (0x0001ffca) list_double2_large_graphic_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double2_large_graphic_pane

0x534a,	// (0x0001ffca) list_double2_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double2_pane

0x534a,	// (0x0001ffca) list_double_graphic_heading_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_graphic_heading_pane

0x534a,	// (0x0001ffca) list_double_graphic_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_graphic_pane

0x534a,	// (0x0001ffca) list_double_heading_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_heading_pane

0x534a,	// (0x0001ffca) list_double_large_graphic_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_large_graphic_pane

0x534a,	// (0x0001ffca) list_double_number_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_number_pane

0x534a,	// (0x0001ffca) list_double_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_pane

0x534a,	// (0x0001ffca) list_double_time_pane_ParamLimits

0x534a,	// (0x0001ffca) list_double_time_pane

0x534a,	// (0x0001ffca) list_setting_number_pane_ParamLimits

0x534a,	// (0x0001ffca) list_setting_number_pane

0x534a,	// (0x0001ffca) list_setting_pane_ParamLimits

0x534a,	// (0x0001ffca) list_setting_pane

0x5385,	// (0x00020005) list_single_2graphic_pane_ParamLimits

0x5385,	// (0x00020005) list_single_2graphic_pane

0x5385,	// (0x00020005) list_single_graphic_heading_pane_ParamLimits

0x5385,	// (0x00020005) list_single_graphic_heading_pane

0x5385,	// (0x00020005) list_single_graphic_pane_ParamLimits

0x5385,	// (0x00020005) list_single_graphic_pane

0x5385,	// (0x00020005) list_single_heading_pane_ParamLimits

0x5385,	// (0x00020005) list_single_heading_pane

0x53c5,	// (0x00020045) list_single_large_graphic_pane_ParamLimits

0x53c5,	// (0x00020045) list_single_large_graphic_pane

0x5385,	// (0x00020005) list_single_number_heading_pane_ParamLimits

0x5385,	// (0x00020005) list_single_number_heading_pane

0x5385,	// (0x00020005) list_single_number_pane_ParamLimits

0x5385,	// (0x00020005) list_single_number_pane

0x5385,	// (0x00020005) list_single_pane_ParamLimits

0x5385,	// (0x00020005) list_single_pane

0x7ee9,	// (0x00022b69) list_highlight_pane_cp1

0x49c9,	// (0x0001f649) list_single_pane_g1_ParamLimits

0x49c9,	// (0x0001f649) list_single_pane_g1

0x49d5,	// (0x0001f655) list_single_pane_g2_ParamLimits

0x49d5,	// (0x0001f655) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002a248) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002a248) list_single_pane_g

0x5334,	// (0x0001ffb4) list_single_pane_t1_ParamLimits

0x5334,	// (0x0001ffb4) list_single_pane_t1

0x49c9,	// (0x0001f649) list_single_number_pane_g1_ParamLimits

0x49c9,	// (0x0001f649) list_single_number_pane_g1

0x49d5,	// (0x0001f655) list_single_number_pane_g2_ParamLimits

0x49d5,	// (0x0001f655) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002a248) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002a248) list_single_number_pane_g

0x52de,	// (0x0001ff5e) list_single_number_pane_t1_ParamLimits

0x52de,	// (0x0001ff5e) list_single_number_pane_t1

0x52f4,	// (0x0001ff74) list_single_number_pane_t2_ParamLimits

0x52f4,	// (0x0001ff74) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a5d8) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a5d8) list_single_number_pane_t

0x49bd,	// (0x0001f63d) list_single_graphic_pane_g1_ParamLimits

0x49bd,	// (0x0001f63d) list_single_graphic_pane_g1

0x49c9,	// (0x0001f649) list_single_graphic_pane_g2_ParamLimits

0x49c9,	// (0x0001f649) list_single_graphic_pane_g2

0x49d5,	// (0x0001f655) list_single_graphic_pane_g3_ParamLimits

0x49d5,	// (0x0001f655) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002a241) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002a241) list_single_graphic_pane_g

0x49e1,	// (0x0001f661) list_single_graphic_pane_t1_ParamLimits

0x49e1,	// (0x0001f661) list_single_graphic_pane_t1

0x49c9,	// (0x0001f649) list_single_heading_pane_g1_ParamLimits

0x49c9,	// (0x0001f649) list_single_heading_pane_g1

0x49d5,	// (0x0001f655) list_single_heading_pane_g2_ParamLimits

0x49d5,	// (0x0001f655) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a248) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a248) list_single_heading_pane_g

0x49f7,	// (0x0001f677) list_single_heading_pane_t1_ParamLimits

0x49f7,	// (0x0001f677) list_single_heading_pane_t1

0x4a0d,	// (0x0001f68d) list_single_heading_pane_t2_ParamLimits

0x4a0d,	// (0x0001f68d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002a24d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002a24d) list_single_heading_pane_t

0x49c9,	// (0x0001f649) list_single_number_heading_pane_g1_ParamLimits

0x49c9,	// (0x0001f649) list_single_number_heading_pane_g1

0x49d5,	// (0x0001f655) list_single_number_heading_pane_g2_ParamLimits

0x49d5,	// (0x0001f655) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a248) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a248) list_single_number_heading_pane_g

0x49f7,	// (0x0001f677) list_single_number_heading_pane_t1_ParamLimits

0x49f7,	// (0x0001f677) list_single_number_heading_pane_t1

0x4a1f,	// (0x0001f69f) list_single_number_heading_pane_t2_ParamLimits

0x4a1f,	// (0x0001f69f) list_single_number_heading_pane_t2

0x4a31,	// (0x0001f6b1) list_single_number_heading_pane_t3_ParamLimits

0x4a31,	// (0x0001f6b1) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002a252) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002a252) list_single_number_heading_pane_t

0x4a43,	// (0x0001f6c3) list_single_graphic_heading_pane_g1_ParamLimits

0x4a43,	// (0x0001f6c3) list_single_graphic_heading_pane_g1

0x4a4f,	// (0x0001f6cf) list_single_graphic_heading_pane_g4_ParamLimits

0x4a4f,	// (0x0001f6cf) list_single_graphic_heading_pane_g4

0x49d5,	// (0x0001f655) list_single_graphic_heading_pane_g5_ParamLimits

0x49d5,	// (0x0001f655) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002a259) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002a259) list_single_graphic_heading_pane_g

0x49f7,	// (0x0001f677) list_single_graphic_heading_pane_t1_ParamLimits

0x49f7,	// (0x0001f677) list_single_graphic_heading_pane_t1

0x4a60,	// (0x0001f6e0) list_single_graphic_heading_pane_t2_ParamLimits

0x4a60,	// (0x0001f6e0) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002a260) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002a260) list_single_graphic_heading_pane_t

0x4a72,	// (0x0001f6f2) list_single_large_graphic_pane_g1_ParamLimits

0x4a72,	// (0x0001f6f2) list_single_large_graphic_pane_g1

0x4a7e,	// (0x0001f6fe) list_single_large_graphic_pane_g2_ParamLimits

0x4a7e,	// (0x0001f6fe) list_single_large_graphic_pane_g2

0x4a8a,	// (0x0001f70a) list_single_large_graphic_pane_g3_ParamLimits

0x4a8a,	// (0x0001f70a) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002a265) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002a265) list_single_large_graphic_pane_g

0xa324,	// (0x00024fa4) wait_border_pane_g2_copy1

0x4a96,	// (0x0001f716) list_single_large_graphic_pane_g4_cp2

0x4a9e,	// (0x0001f71e) list_single_large_graphic_pane_t1_ParamLimits

0x4a9e,	// (0x0001f71e) list_single_large_graphic_pane_t1

0x4ab4,	// (0x0001f734) list_double_pane_g1_ParamLimits

0x4ab4,	// (0x0001f734) list_double_pane_g1

0x4ac0,	// (0x0001f740) list_double_pane_g2_ParamLimits

0x4ac0,	// (0x0001f740) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002a26c) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002a26c) list_double_pane_g

0x4acc,	// (0x0001f74c) list_double_pane_t1_ParamLimits

0x4acc,	// (0x0001f74c) list_double_pane_t1

0x4ae2,	// (0x0001f762) list_double_pane_t2_ParamLimits

0x4ae2,	// (0x0001f762) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002a271) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002a271) list_double_pane_t

0x4af4,	// (0x0001f774) list_double2_pane_g1_ParamLimits

0x4af4,	// (0x0001f774) list_double2_pane_g1

0x4b05,	// (0x0001f785) list_double2_pane_g2_ParamLimits

0x4b05,	// (0x0001f785) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002a276) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002a276) list_double2_pane_g

0x4b11,	// (0x0001f791) list_double2_pane_t1_ParamLimits

0x4b11,	// (0x0001f791) list_double2_pane_t1

0x4b27,	// (0x0001f7a7) list_double2_pane_t2_ParamLimits

0x4b27,	// (0x0001f7a7) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002a27b) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002a27b) list_double2_pane_t

0x4ab4,	// (0x0001f734) list_double_number_pane_g1_ParamLimits

0x4ab4,	// (0x0001f734) list_double_number_pane_g1

0x4ac0,	// (0x0001f740) list_double_number_pane_g2_ParamLimits

0x4ac0,	// (0x0001f740) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002a26c) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002a26c) list_double_number_pane_g

0x4b39,	// (0x0001f7b9) list_double_number_pane_t1_ParamLimits

0x4b39,	// (0x0001f7b9) list_double_number_pane_t1

0x4b4b,	// (0x0001f7cb) list_double_number_pane_t2_ParamLimits

0x4b4b,	// (0x0001f7cb) list_double_number_pane_t2

0x4b61,	// (0x0001f7e1) list_double_number_pane_t3_ParamLimits

0x4b61,	// (0x0001f7e1) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002a280) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002a280) list_double_number_pane_t

0x4b73,	// (0x0001f7f3) list_double_graphic_pane_g1_ParamLimits

0x4b73,	// (0x0001f7f3) list_double_graphic_pane_g1

0x4b7f,	// (0x0001f7ff) list_double_graphic_pane_g2_ParamLimits

0x4b7f,	// (0x0001f7ff) list_double_graphic_pane_g2

0x4b8e,	// (0x0001f80e) list_double_graphic_pane_g3_ParamLimits

0x4b8e,	// (0x0001f80e) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002a287) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002a287) list_double_graphic_pane_g

0x4ba6,	// (0x0001f826) list_double_graphic_pane_t1_ParamLimits

0x4ba6,	// (0x0001f826) list_double_graphic_pane_t1

0x4bbc,	// (0x0001f83c) list_double_graphic_pane_t2_ParamLimits

0x4bbc,	// (0x0001f83c) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002a290) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002a290) list_double_graphic_pane_t

0x4bce,	// (0x0001f84e) list_double2_graphic_pane_g1_ParamLimits

0x4bce,	// (0x0001f84e) list_double2_graphic_pane_g1

0x4bda,	// (0x0001f85a) list_double2_graphic_pane_g2_ParamLimits

0x4bda,	// (0x0001f85a) list_double2_graphic_pane_g2

0x4b05,	// (0x0001f785) list_double2_graphic_pane_g3_ParamLimits

0x4b05,	// (0x0001f785) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002a295) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002a295) list_double2_graphic_pane_g

0x4be6,	// (0x0001f866) list_double2_graphic_pane_t1_ParamLimits

0x4be6,	// (0x0001f866) list_double2_graphic_pane_t1

0x4bfc,	// (0x0001f87c) list_double2_graphic_pane_t2_ParamLimits

0x4bfc,	// (0x0001f87c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002a29c) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002a29c) list_double2_graphic_pane_t

0x4c0e,	// (0x0001f88e) list_double_large_graphic_pane_g1_ParamLimits

0x4c0e,	// (0x0001f88e) list_double_large_graphic_pane_g1

0x4c21,	// (0x0001f8a1) list_double_large_graphic_pane_g2_ParamLimits

0x4c21,	// (0x0001f8a1) list_double_large_graphic_pane_g2

0x4ac0,	// (0x0001f740) list_double_large_graphic_pane_g3_ParamLimits

0x4ac0,	// (0x0001f740) list_double_large_graphic_pane_g3

0x4c32,	// (0x0001f8b2) list_double_large_graphic_pane_g4_ParamLimits

0x4c32,	// (0x0001f8b2) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002a2a1) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002a2a1) list_double_large_graphic_pane_g

0x4c59,	// (0x0001f8d9) list_double_large_graphic_pane_t1_ParamLimits

0x4c59,	// (0x0001f8d9) list_double_large_graphic_pane_t1

0x4c72,	// (0x0001f8f2) list_double_large_graphic_pane_t2_ParamLimits

0x4c72,	// (0x0001f8f2) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002a2ac) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002a2ac) list_double_large_graphic_pane_t

0x4c84,	// (0x0001f904) list_double2_large_graphic_pane_g1_ParamLimits

0x4c84,	// (0x0001f904) list_double2_large_graphic_pane_g1

0x4af4,	// (0x0001f774) list_double2_large_graphic_pane_g2_ParamLimits

0x4af4,	// (0x0001f774) list_double2_large_graphic_pane_g2

0x4b05,	// (0x0001f785) list_double2_large_graphic_pane_g3_ParamLimits

0x4b05,	// (0x0001f785) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002a2b1) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002a2b1) list_double2_large_graphic_pane_g

0x4c90,	// (0x0001f910) list_double2_large_graphic_pane_t1_ParamLimits

0x4c90,	// (0x0001f910) list_double2_large_graphic_pane_t1

0x4ca6,	// (0x0001f926) list_double2_large_graphic_pane_t2_ParamLimits

0x4ca6,	// (0x0001f926) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002a2b8) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002a2b8) list_double2_large_graphic_pane_t

0x4cb8,	// (0x0001f938) list_double_heading_pane_g1_ParamLimits

0x4cb8,	// (0x0001f938) list_double_heading_pane_g1

0x4cc9,	// (0x0001f949) list_double_heading_pane_g2_ParamLimits

0x4cc9,	// (0x0001f949) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002a2bd) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002a2bd) list_double_heading_pane_g

0x4cd5,	// (0x0001f955) list_double_heading_pane_t1_ParamLimits

0x4cd5,	// (0x0001f955) list_double_heading_pane_t1

0x4b27,	// (0x0001f7a7) list_double_heading_pane_t2_ParamLimits

0x4b27,	// (0x0001f7a7) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002a2c2) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002a2c2) list_double_heading_pane_t

0x4ceb,	// (0x0001f96b) list_double_graphic_heading_pane_g1_ParamLimits

0x4ceb,	// (0x0001f96b) list_double_graphic_heading_pane_g1

0x4cb8,	// (0x0001f938) list_double_graphic_heading_pane_g2_ParamLimits

0x4cb8,	// (0x0001f938) list_double_graphic_heading_pane_g2

0x4cc9,	// (0x0001f949) list_double_graphic_heading_pane_g3_ParamLimits

0x4cc9,	// (0x0001f949) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002a2c7) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002a2c7) list_double_graphic_heading_pane_g

0x4cf7,	// (0x0001f977) list_double_graphic_heading_pane_t1_ParamLimits

0x4cf7,	// (0x0001f977) list_double_graphic_heading_pane_t1

0x4bfc,	// (0x0001f87c) list_double_graphic_heading_pane_t2_ParamLimits

0x4bfc,	// (0x0001f87c) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002a2ce) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002a2ce) list_double_graphic_heading_pane_t

0x4c21,	// (0x0001f8a1) list_double_time_pane_g1_ParamLimits

0x4c21,	// (0x0001f8a1) list_double_time_pane_g1

0x4ac0,	// (0x0001f740) list_double_time_pane_g2_ParamLimits

0x4ac0,	// (0x0001f740) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002a2d3) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002a2d3) list_double_time_pane_g

0x4d0d,	// (0x0001f98d) list_double_time_pane_t1_ParamLimits

0x4d0d,	// (0x0001f98d) list_double_time_pane_t1

0x4d23,	// (0x0001f9a3) list_double_time_pane_t2_ParamLimits

0x4d23,	// (0x0001f9a3) list_double_time_pane_t2

0x4d35,	// (0x0001f9b5) list_double_time_pane_t3_ParamLimits

0x4d35,	// (0x0001f9b5) list_double_time_pane_t3

0x4d47,	// (0x0001f9c7) list_double_time_pane_t4_ParamLimits

0x4d47,	// (0x0001f9c7) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002a2d8) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002a2d8) list_double_time_pane_t

0x4bda,	// (0x0001f85a) list_setting_pane_g1_ParamLimits

0x4bda,	// (0x0001f85a) list_setting_pane_g1

0x4b05,	// (0x0001f785) list_setting_pane_g2_ParamLimits

0x4b05,	// (0x0001f785) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002a2e1) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002a2e1) list_setting_pane_g

0x4d59,	// (0x0001f9d9) list_setting_pane_t1_ParamLimits

0x4d59,	// (0x0001f9d9) list_setting_pane_t1

0x4d73,	// (0x0001f9f3) list_setting_pane_t2_ParamLimits

0x4d73,	// (0x0001f9f3) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002a2e6) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002a2e6) list_setting_pane_t

0x4db2,	// (0x0001fa32) set_value_pane_cp_ParamLimits

0x4db2,	// (0x0001fa32) set_value_pane_cp

0x4dbe,	// (0x0001fa3e) list_setting_number_pane_g1_ParamLimits

0x4dbe,	// (0x0001fa3e) list_setting_number_pane_g1

0x4dca,	// (0x0001fa4a) list_setting_number_pane_g2_ParamLimits

0x4dca,	// (0x0001fa4a) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002a2ed) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002a2ed) list_setting_number_pane_g

0x4dd6,	// (0x0001fa56) list_setting_number_pane_t1_ParamLimits

0x4dd6,	// (0x0001fa56) list_setting_number_pane_t1

0x4def,	// (0x0001fa6f) list_setting_number_pane_t2_ParamLimits

0x4def,	// (0x0001fa6f) list_setting_number_pane_t2

0x4e09,	// (0x0001fa89) list_setting_number_pane_t3_ParamLimits

0x4e09,	// (0x0001fa89) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002a2f2) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002a2f2) list_setting_number_pane_t

0x4db2,	// (0x0001fa32) set_value_pane_ParamLimits

0x4db2,	// (0x0001fa32) set_value_pane

0x87df,	// (0x0002345f) bg_set_opt_pane_ParamLimits

0x87df,	// (0x0002345f) bg_set_opt_pane

0x4e4c,	// (0x0001facc) set_value_pane_t1

0x8800,	// (0x00023480) slider_set_pane_cp3

0x8809,	// (0x00023489) volume_small_pane_cp

0x8812,	// (0x00023492) list_form_gen_pane

0x881b,	// (0x0002349b) scroll_pane_cp8

0x4e62,	// (0x0001fae2) form_field_data_pane_ParamLimits

0x4e62,	// (0x0001fae2) form_field_data_pane

0x4e82,	// (0x0001fb02) form_field_data_wide_pane_ParamLimits

0x4e82,	// (0x0001fb02) form_field_data_wide_pane

0x4ea3,	// (0x0001fb23) form_field_popup_pane_ParamLimits

0x4ea3,	// (0x0001fb23) form_field_popup_pane

0x4ec3,	// (0x0001fb43) form_field_popup_wide_pane_ParamLimits

0x4ec3,	// (0x0001fb43) form_field_popup_wide_pane

0x4ee0,	// (0x0001fb60) form_field_slider_pane_ParamLimits

0x4ee0,	// (0x0001fb60) form_field_slider_pane

0x4ef3,	// (0x0001fb73) form_field_slider_wide_pane_ParamLimits

0x4ef3,	// (0x0001fb73) form_field_slider_wide_pane

0x882c,	// (0x000234ac) data_form_pane

0x4f10,	// (0x0001fb90) form_field_data_pane_t1

0x8838,	// (0x000234b8) input_focus_pane

0x4f28,	// (0x0001fba8) data_form_wide_pane

0x4f45,	// (0x0001fbc5) form_field_data_wide_pane_t1

0x85a9,	// (0x00023229) input_focus_pane_cp6

0x4f67,	// (0x0001fbe7) form_field_popup_pane_t1

0x8838,	// (0x000234b8) input_focus_pane_cp7

0x8866,	// (0x000234e6) list_form_pane

0x4f87,	// (0x0001fc07) form_field_popup_wide_pane_t1

0x8838,	// (0x000234b8) input_focus_pane_cp8

0x8872,	// (0x000234f2) list_form_wide_pane

0x4fa4,	// (0x0001fc24) form_field_slider_pane_t1_ParamLimits

0x4fa4,	// (0x0001fc24) form_field_slider_pane_t1

0x4fba,	// (0x0001fc3a) form_field_slider_pane_t2_ParamLimits

0x4fba,	// (0x0001fc3a) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002a302) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002a302) form_field_slider_pane_t

0x8244,	// (0x00022ec4) input_focus_pane_cp9_ParamLimits

0x8244,	// (0x00022ec4) input_focus_pane_cp9

0x4fcf,	// (0x0001fc4f) slider_cont_pane_ParamLimits

0x4fcf,	// (0x0001fc4f) slider_cont_pane

0x8881,	// (0x00023501) form_field_slider_wide_pane_t1_ParamLimits

0x8881,	// (0x00023501) form_field_slider_wide_pane_t1

0x4fe3,	// (0x0001fc63) form_field_slider_wide_pane_t2_ParamLimits

0x4fe3,	// (0x0001fc63) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002a307) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002a307) form_field_slider_wide_pane_t

0x8244,	// (0x00022ec4) input_focus_pane_cp10_ParamLimits

0x8244,	// (0x00022ec4) input_focus_pane_cp10

0x4ff5,	// (0x0001fc75) slider_cont_pane_cp1_ParamLimits

0x4ff5,	// (0x0001fc75) slider_cont_pane_cp1

0x5009,	// (0x0001fc89) slider_form_pane_cp

0x8893,	// (0x00023513) input_focus_pane_g1

0x889b,	// (0x0002351b) input_focus_pane_g2

0x88a3,	// (0x00023523) input_focus_pane_g3

0x88ab,	// (0x0002352b) input_focus_pane_g4

0x88b3,	// (0x00023533) input_focus_pane_g5

0x88bb,	// (0x0002353b) input_focus_pane_g6

0x88c3,	// (0x00023543) input_focus_pane_g7

0x88cb,	// (0x0002354b) input_focus_pane_g8

0x88d3,	// (0x00023553) input_focus_pane_g9

0x7edf,	// (0x00022b5f) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002a30c) input_focus_pane_g

0xa32d,	// (0x00024fad) wait_border_pane_g3_copy1

0x5011,	// (0x0001fc91) data_form_pane_t1

0x7edf,	// (0x00022b5f) wait_anim_pane_g1_copy1

0x5306,	// (0x0001ff86) data_form_wide_pane_t1

0x502c,	// (0x0001fcac) list_form_graphic_pane_cp_ParamLimits

0x502c,	// (0x0001fcac) list_form_graphic_pane_cp

0xb24e,	// (0x00025ece) slider_form_pane_g1

0xb257,	// (0x00025ed7) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a608) slider_form_pane_g

0x5045,	// (0x0001fcc5) list_form_graphic_pane_ParamLimits

0x5045,	// (0x0001fcc5) list_form_graphic_pane

0x5061,	// (0x0001fce1) list_form_graphic_pane_g1

0x5069,	// (0x0001fce9) list_form_graphic_pane_t1_ParamLimits

0x5069,	// (0x0001fce9) list_form_graphic_pane_t1

0x7fc9,	// (0x00022c49) list_highlight_pane_cp5_ParamLimits

0x7fc9,	// (0x00022c49) list_highlight_pane_cp5

0x507e,	// (0x0001fcfe) find_pane_g1

0x88db,	// (0x0002355b) input_find_pane

0x5087,	// (0x0001fd07) input_find_pane_g1_ParamLimits

0x5087,	// (0x0001fd07) input_find_pane_g1

0x5093,	// (0x0001fd13) input_find_pane_t1_ParamLimits

0x5093,	// (0x0001fd13) input_find_pane_t1

0x50a8,	// (0x0001fd28) input_find_pane_t2_ParamLimits

0x50a8,	// (0x0001fd28) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002a321) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002a321) input_find_pane_t

0x88e4,	// (0x00023564) input_focus_pane_cp5_ParamLimits

0x88e4,	// (0x00023564) input_focus_pane_cp5

0x88fe,	// (0x0002357e) bg_popup_window_pane_cp2_ParamLimits

0x88fe,	// (0x0002357e) bg_popup_window_pane_cp2

0x890b,	// (0x0002358b) listscroll_menu_pane_ParamLimits

0x890b,	// (0x0002358b) listscroll_menu_pane

0x8917,	// (0x00023597) popup_submenu_window_ParamLimits

0x8917,	// (0x00023597) popup_submenu_window

0x8943,	// (0x000235c3) find_popup_pane_g1

0x894b,	// (0x000235cb) input_popup_find_pane_cp

0x88e4,	// (0x00023564) input_focus_pane_cp4_ParamLimits

0x88e4,	// (0x00023564) input_focus_pane_cp4

0x8961,	// (0x000235e1) input_popup_find_pane_t1_ParamLimits

0x8961,	// (0x000235e1) input_popup_find_pane_t1

0x7ee9,	// (0x00022b69) bg_popup_sub_pane_cp

0x898f,	// (0x0002360f) listscroll_popup_sub_pane

0x8997,	// (0x00023617) list_submenu_pane_ParamLimits

0x8997,	// (0x00023617) list_submenu_pane

0x89a8,	// (0x00023628) scroll_pane_cp4

0x89b0,	// (0x00023630) list_single_popup_submenu_pane_ParamLimits

0x89b0,	// (0x00023630) list_single_popup_submenu_pane

0x89c4,	// (0x00023644) list_single_popup_submenu_pane_g1

0x89cc,	// (0x0002364c) list_single_popup_submenu_pane_t1_ParamLimits

0x89cc,	// (0x0002364c) list_single_popup_submenu_pane_t1

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp1_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp1

0x89e1,	// (0x00023661) tabs_2_active_pane_g1

0x89e9,	// (0x00023669) tabs_2_active_pane_t1

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp1_ParamLimits

0x7fc9,	// (0x00022c49) bg_passive_tab_pane_cp1

0x89e1,	// (0x00023661) tabs_2_passive_pane_g1

0x89e9,	// (0x00023669) tabs_2_passive_pane_t1

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp4

0x8a09,	// (0x00023689) tabs_2_long_active_pane_t1

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp4

0x6b52,	// (0x000217d2) list_single_midp_graphic_pane_g4_ParamLimits

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp5

0x8a28,	// (0x000236a8) tabs_3_long_active_pane_t1

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp5

0x6b52,	// (0x000217d2) list_single_midp_graphic_pane_g4

0x7fc9,	// (0x00022c49) bg_popup_window_pane_cp13_ParamLimits

0x7fc9,	// (0x00022c49) bg_popup_window_pane_cp13

0x8a43,	// (0x000236c3) listscroll_popup_fast_pane_ParamLimits

0x8a43,	// (0x000236c3) listscroll_popup_fast_pane

0x8a52,	// (0x000236d2) grid_popup_fast_pane_ParamLimits

0x8a52,	// (0x000236d2) grid_popup_fast_pane

0x8a64,	// (0x000236e4) scroll_pane_cp9_ParamLimits

0x8a64,	// (0x000236e4) scroll_pane_cp9

0xcb6a,	// (0x000277ea) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb6a,	// (0x000277ea) list_single_graphic_hl_pane_t1_cp2

0x8a88,	// (0x00023708) input_focus_pane_cp20_ParamLimits

0x8a88,	// (0x00023708) input_focus_pane_cp20

0x8a96,	// (0x00023716) query_popup_data_pane_t1_ParamLimits

0x8a96,	// (0x00023716) query_popup_data_pane_t1

0x8aa9,	// (0x00023729) query_popup_data_pane_t2_ParamLimits

0x8aa9,	// (0x00023729) query_popup_data_pane_t2

0x8aef,	// (0x0002376f) query_popup_data_pane_t3_ParamLimits

0x8aef,	// (0x0002376f) query_popup_data_pane_t3

0x8b30,	// (0x000237b0) query_popup_data_pane_t4_ParamLimits

0x8b30,	// (0x000237b0) query_popup_data_pane_t4

0x8b6c,	// (0x000237ec) query_popup_data_pane_t5_ParamLimits

0x8b6c,	// (0x000237ec) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002a326) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002a326) query_popup_data_pane_t

0x8893,	// (0x00023513) bg_set_opt_pane_g1

0x889b,	// (0x0002351b) bg_set_opt_pane_g2

0x88a3,	// (0x00023523) bg_set_opt_pane_g3

0x88ab,	// (0x0002352b) bg_set_opt_pane_g4

0x88b3,	// (0x00023533) bg_set_opt_pane_g5

0x88bb,	// (0x0002353b) bg_set_opt_pane_g6

0x88c3,	// (0x00023543) bg_set_opt_pane_g7

0x88cb,	// (0x0002354b) bg_set_opt_pane_g8

0x88d3,	// (0x00023553) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002a331) bg_set_opt_pane_g

0x6202,	// (0x00020e82) control_top_pane_stacon_ParamLimits

0x6202,	// (0x00020e82) control_top_pane_stacon

0x6255,	// (0x00020ed5) signal_pane_stacon_ParamLimits

0x6255,	// (0x00020ed5) signal_pane_stacon

0x9158,	// (0x00023dd8) stacon_top_pane_g1_ParamLimits

0x9158,	// (0x00023dd8) stacon_top_pane_g1

0x627a,	// (0x00020efa) title_pane_stacon_ParamLimits

0x627a,	// (0x00020efa) title_pane_stacon

0x62a4,	// (0x00020f24) uni_indicator_pane_stacon_ParamLimits

0x62a4,	// (0x00020f24) uni_indicator_pane_stacon

0x62b9,	// (0x00020f39) battery_pane_stacon_ParamLimits

0x62b9,	// (0x00020f39) battery_pane_stacon

0x62fd,	// (0x00020f7d) control_bottom_pane_stacon_ParamLimits

0x62fd,	// (0x00020f7d) control_bottom_pane_stacon

0x6320,	// (0x00020fa0) navi_pane_stacon_ParamLimits

0x6320,	// (0x00020fa0) navi_pane_stacon

0x917a,	// (0x00023dfa) stacon_bottom_pane_g1_ParamLimits

0x917a,	// (0x00023dfa) stacon_bottom_pane_g1

0x5f65,	// (0x00020be5) aid_levels_signal_lsc_ParamLimits

0x5f65,	// (0x00020be5) aid_levels_signal_lsc

0x5f7b,	// (0x00020bfb) signal_pane_stacon_g1_ParamLimits

0x5f7b,	// (0x00020bfb) signal_pane_stacon_g1

0x5f8f,	// (0x00020c0f) signal_pane_stacon_g2_ParamLimits

0x5f8f,	// (0x00020c0f) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002a344) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a344) signal_pane_stacon_g

0x5fc4,	// (0x00020c44) title_pane_stacon_t1_ParamLimits

0x5fc4,	// (0x00020c44) title_pane_stacon_t1

0x8bb0,	// (0x00023830) uni_indicator_pane_stacon_g1

0x8bba,	// (0x0002383a) uni_indicator_pane_stacon_g2

0x8bc4,	// (0x00023844) uni_indicator_pane_stacon_g3

0x8bce,	// (0x0002384e) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002a350) uni_indicator_pane_stacon_g

0x5fe9,	// (0x00020c69) control_top_pane_stacon_g1

0x5ff1,	// (0x00020c71) control_top_pane_stacon_t1_ParamLimits

0x5ff1,	// (0x00020c71) control_top_pane_stacon_t1

0x6028,	// (0x00020ca8) aid_levels_battery_lsc_ParamLimits

0x6028,	// (0x00020ca8) aid_levels_battery_lsc

0x603f,	// (0x00020cbf) battery_pane_stacon_g1_ParamLimits

0x603f,	// (0x00020cbf) battery_pane_stacon_g1

0x6052,	// (0x00020cd2) battery_pane_stacon_g2_ParamLimits

0x6052,	// (0x00020cd2) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002a359) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002a359) battery_pane_stacon_g

0x6090,	// (0x00020d10) navi_icon_pane_stacon

0x60a4,	// (0x00020d24) navi_navi_pane_stacon

0x6090,	// (0x00020d10) navi_text_pane_stacon

0x5fe9,	// (0x00020c69) control_bottom_pane_stacon_g1

0x60b8,	// (0x00020d38) control_bottom_pane_stacon_t1_ParamLimits

0x60b8,	// (0x00020d38) control_bottom_pane_stacon_t1

0x8bf2,	// (0x00023872) grid_app_pane_ParamLimits

0x8bf2,	// (0x00023872) grid_app_pane

0x8c16,	// (0x00023896) scroll_pane_cp15_ParamLimits

0x8c16,	// (0x00023896) scroll_pane_cp15

0x8c29,	// (0x000238a9) cell_app_pane_ParamLimits

0x8c29,	// (0x000238a9) cell_app_pane

0x8c4d,	// (0x000238cd) cell_app_pane_g1_ParamLimits

0x8c4d,	// (0x000238cd) cell_app_pane_g1

0x8c6d,	// (0x000238ed) cell_app_pane_g2_ParamLimits

0x8c6d,	// (0x000238ed) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002a35e) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002a35e) cell_app_pane_g

0x8c79,	// (0x000238f9) cell_app_pane_t1_ParamLimits

0x8c79,	// (0x000238f9) cell_app_pane_t1

0x8c90,	// (0x00023910) grid_highlight_pane_ParamLimits

0x8c90,	// (0x00023910) grid_highlight_pane

0x8893,	// (0x00023513) cell_highlight_pane_g1

0x889b,	// (0x0002351b) cell_highlight_pane_g2

0x88a3,	// (0x00023523) cell_highlight_pane_g3

0x88ab,	// (0x0002352b) cell_highlight_pane_g4

0x88b3,	// (0x00023533) cell_highlight_pane_g5

0x88bb,	// (0x0002353b) cell_highlight_pane_g6

0x88c3,	// (0x00023543) cell_highlight_pane_g7

0x88cb,	// (0x0002354b) cell_highlight_pane_g8

0x88d3,	// (0x00023553) cell_highlight_pane_g9

0x7edf,	// (0x00022b5f) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002a30c) cell_highlight_pane_g

0x8ca1,	// (0x00023921) bg_scroll_pane

0x6102,	// (0x00020d82) scroll_handle_pane

0x8ce8,	// (0x00023968) scroll_bg_pane_g1

0x8cfd,	// (0x0002397d) scroll_bg_pane_g2

0x8d15,	// (0x00023995) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002a363) scroll_bg_pane_g

0x8d2a,	// (0x000239aa) scroll_handle_focus_pane_ParamLimits

0x8d2a,	// (0x000239aa) scroll_handle_focus_pane

0x8ce8,	// (0x00023968) scroll_handle_pane_g1

0x8d37,	// (0x000239b7) scroll_handle_pane_g2

0x8d15,	// (0x00023995) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a36a) scroll_handle_pane_g

0x88e4,	// (0x00023564) bg_popup_sub_pane_cp21_ParamLimits

0x88e4,	// (0x00023564) bg_popup_sub_pane_cp21

0x8d4b,	// (0x000239cb) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d4b,	// (0x000239cb) popup_fep_japan_predictive_window_t1

0x8d65,	// (0x000239e5) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d65,	// (0x000239e5) popup_fep_japan_predictive_window_t2

0x8d98,	// (0x00023a18) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d98,	// (0x00023a18) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a371) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a371) popup_fep_japan_predictive_window_t

0x7ee9,	// (0x00022b69) bg_popup_sub_pane_cp23

0x8dcf,	// (0x00023a4f) listscroll_japin_cand_pane

0x8dd7,	// (0x00023a57) popup_fep_japan_candidate_window_t1

0x8de5,	// (0x00023a65) candidate_pane_ParamLimits

0x8de5,	// (0x00023a65) candidate_pane

0x8df7,	// (0x00023a77) scroll_pane_cp30

0x8dff,	// (0x00023a7f) list_single_popup_jap_candidate_pane_ParamLimits

0x8dff,	// (0x00023a7f) list_single_popup_jap_candidate_pane

0x7ee9,	// (0x00022b69) list_highlight_pane_cp30

0x8e14,	// (0x00023a94) list_single_popup_jap_candidate_pane_t1

0x8e23,	// (0x00023aa3) level_1_signal

0x8e35,	// (0x00023ab5) level_2_signal

0x8e48,	// (0x00023ac8) level_3_signal

0x8e5b,	// (0x00023adb) level_4_signal

0x8e6e,	// (0x00023aee) level_5_signal

0x8e81,	// (0x00023b01) level_6_signal

0x8e94,	// (0x00023b14) level_7_signal

0x8e23,	// (0x00023aa3) level_1_battery

0x8e35,	// (0x00023ab5) level_2_battery

0x8e48,	// (0x00023ac8) level_3_battery

0x8e5b,	// (0x00023adb) level_4_battery

0x8e6e,	// (0x00023aee) level_5_battery

0x8e81,	// (0x00023b01) level_6_battery

0x8e94,	// (0x00023b14) level_7_battery

0x8ebf,	// (0x00023b3f) list_menu_pane_ParamLimits

0x8ebf,	// (0x00023b3f) list_menu_pane

0x8ed5,	// (0x00023b55) scroll_pane_cp25_ParamLimits

0x8ed5,	// (0x00023b55) scroll_pane_cp25

0x8eee,	// (0x00023b6e) list_double2_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double2_graphic_pane_cp2

0x8eee,	// (0x00023b6e) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double2_large_graphic_pane_cp2

0x8eee,	// (0x00023b6e) list_double2_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double2_pane_cp2

0x8eee,	// (0x00023b6e) list_double_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double_graphic_pane_cp2

0x8eee,	// (0x00023b6e) list_double_large_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double_large_graphic_pane_cp2

0x8eee,	// (0x00023b6e) list_double_number_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double_number_pane_cp2

0x8eee,	// (0x00023b6e) list_double_pane_cp2_ParamLimits

0x8eee,	// (0x00023b6e) list_double_pane_cp2

0x8f12,	// (0x00023b92) list_single_2graphic_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_2graphic_pane_cp2

0x8f12,	// (0x00023b92) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_graphic_heading_pane_cp2

0x8f12,	// (0x00023b92) list_single_graphic_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_graphic_pane_cp2

0x8f12,	// (0x00023b92) list_single_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_heading_pane_cp2

0x8f2b,	// (0x00023bab) list_single_large_graphic_pane_cp2_ParamLimits

0x8f2b,	// (0x00023bab) list_single_large_graphic_pane_cp2

0x8f12,	// (0x00023b92) list_single_number_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_number_heading_pane_cp2

0x8f12,	// (0x00023b92) list_single_number_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_number_pane_cp2

0x8f12,	// (0x00023b92) list_single_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_pane_cp2

0x8fa7,	// (0x00023c27) bg_popup_sub_pane_cp22

0x61b4,	// (0x00020e34) popup_side_volume_key_window_g1

0x61de,	// (0x00020e5e) popup_side_volume_key_window_t1

0x61fa,	// (0x00020e7a) volume_small_pane_cp1

0x8244,	// (0x00022ec4) bg_popup_sub_pane_cp24_ParamLimits

0x8244,	// (0x00022ec4) bg_popup_sub_pane_cp24

0x8fbd,	// (0x00023c3d) fep_china_uni_candidate_pane_ParamLimits

0x8fbd,	// (0x00023c3d) fep_china_uni_candidate_pane

0x8fd1,	// (0x00023c51) fep_china_uni_entry_pane

0x8fe1,	// (0x00023c61) popup_fep_china_uni_window_g1

0x8ffd,	// (0x00023c7d) fep_china_uni_entry_pane_g1

0x9005,	// (0x00023c85) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a3a2) fep_china_uni_entry_pane_g

0x900d,	// (0x00023c8d) fep_entry_item_pane

0x9017,	// (0x00023c97) fep_candidate_item_pane

0x901f,	// (0x00023c9f) fep_china_uni_candidate_pane_g1

0x9027,	// (0x00023ca7) fep_china_uni_candidate_pane_g2

0x902f,	// (0x00023caf) fep_china_uni_candidate_pane_g3

0x9037,	// (0x00023cb7) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a3a7) fep_china_uni_candidate_pane_g

0x7edf,	// (0x00022b5f) fep_entry_item_pane_g1

0x903f,	// (0x00023cbf) fep_entry_item_pane_t1_ParamLimits

0x903f,	// (0x00023cbf) fep_entry_item_pane_t1

0x9055,	// (0x00023cd5) fep_candidate_item_pane_t1_ParamLimits

0x9055,	// (0x00023cd5) fep_candidate_item_pane_t1

0x906a,	// (0x00023cea) fep_candidate_item_pane_t2_ParamLimits

0x906a,	// (0x00023cea) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a3b0) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a3b0) fep_candidate_item_pane_t

0x7fc9,	// (0x00022c49) list_highlight_pane_cp31_ParamLimits

0x7fc9,	// (0x00022c49) list_highlight_pane_cp31

0x907c,	// (0x00023cfc) level_1_signal_lsc

0x9085,	// (0x00023d05) level_2_signal_lsc

0x908e,	// (0x00023d0e) level_3_signal_lsc

0x9097,	// (0x00023d17) level_4_signal_lsc

0x90a0,	// (0x00023d20) level_5_signal_lsc

0x90a9,	// (0x00023d29) level_6_signal_lsc

0x90b2,	// (0x00023d32) level_7_signal_lsc

0x90b2,	// (0x00023d32) level_1_battery_lsc

0x90bb,	// (0x00023d3b) level_2_battery_lsc

0x90c4,	// (0x00023d44) level_3_battery_lsc

0x90cd,	// (0x00023d4d) level_4_battery_lsc

0x90d6,	// (0x00023d56) level_5_battery_lsc

0x90df,	// (0x00023d5f) level_6_battery_lsc

0x907c,	// (0x00023cfc) level_7_battery_lsc

0x90e8,	// (0x00023d68) scroll_handle_focus_pane_g1

0x90f1,	// (0x00023d71) scroll_handle_focus_pane_g2

0x90fa,	// (0x00023d7a) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a3b5) scroll_handle_focus_pane_g

0x50bd,	// (0x0001fd3d) list_single_2graphic_pane_g1_ParamLimits

0x50bd,	// (0x0001fd3d) list_single_2graphic_pane_g1

0x4a4f,	// (0x0001f6cf) list_single_2graphic_pane_g2_ParamLimits

0x4a4f,	// (0x0001f6cf) list_single_2graphic_pane_g2

0x49d5,	// (0x0001f655) list_single_2graphic_pane_g3_ParamLimits

0x49d5,	// (0x0001f655) list_single_2graphic_pane_g3

0x50c9,	// (0x0001fd49) list_single_2graphic_pane_g4_ParamLimits

0x50c9,	// (0x0001fd49) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a3bc) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a3bc) list_single_2graphic_pane_g

0x50d5,	// (0x0001fd55) list_single_2graphic_pane_t1_ParamLimits

0x50d5,	// (0x0001fd55) list_single_2graphic_pane_t1

0x5103,	// (0x0001fd83) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5103,	// (0x0001fd83) list_double2_graphic_large_graphic_pane_g1

0x4af4,	// (0x0001f774) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4af4,	// (0x0001f774) list_double2_graphic_large_graphic_pane_g2

0x4b05,	// (0x0001f785) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b05,	// (0x0001f785) list_double2_graphic_large_graphic_pane_g3

0x5113,	// (0x0001fd93) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5113,	// (0x0001fd93) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a3c5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a3c5) list_double2_graphic_large_graphic_pane_g

0x511f,	// (0x0001fd9f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x511f,	// (0x0001fd9f) list_double2_graphic_large_graphic_pane_t1

0x5135,	// (0x0001fdb5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5135,	// (0x0001fdb5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a3ce) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a3ce) list_double2_graphic_large_graphic_pane_t

0x9242,	// (0x00023ec2) popup_fast_swap_window_ParamLimits

0x9242,	// (0x00023ec2) popup_fast_swap_window

0x925e,	// (0x00023ede) popup_side_volume_key_window

0x927a,	// (0x00023efa) stacon_top_pane

0x9284,	// (0x00023f04) status_pane_ParamLimits

0x9284,	// (0x00023f04) status_pane

0x9292,	// (0x00023f12) status_small_pane

0x7ee9,	// (0x00022b69) control_pane

0x7ee9,	// (0x00022b69) stacon_bottom_pane

0x881b,	// (0x0002349b) scroll_pane_cp121

0x8812,	// (0x00023492) set_content_pane

0x9103,	// (0x00023d83) bg_active_tab_pane_g1_cp1

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp1

0x9115,	// (0x00023d95) bg_active_tab_pane_g3_cp1

0x9103,	// (0x00023d83) bg_passive_tab_pane_g1_cp1

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp1

0x9115,	// (0x00023d95) bg_passive_tab_pane_g3_cp1

0x911e,	// (0x00023d9e) bg_active_tab_pane_g1_cp2

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp2

0x9127,	// (0x00023da7) bg_active_tab_pane_g3_cp2

0x911e,	// (0x00023d9e) bg_passive_tab_pane_g1_cp2

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp2

0x9127,	// (0x00023da7) bg_passive_tab_pane_g3_cp2

0x9130,	// (0x00023db0) bg_active_tab_pane_g1_cp3

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp3

0x9139,	// (0x00023db9) bg_active_tab_pane_g3_cp3

0x9130,	// (0x00023db0) bg_passive_tab_pane_g1_cp3

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp3

0x9139,	// (0x00023db9) bg_passive_tab_pane_g3_cp3

0x9142,	// (0x00023dc2) bg_active_tab_pane_g1_cp4

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp4

0x914d,	// (0x00023dcd) bg_active_tab_pane_g3_cp4

0x9142,	// (0x00023dc2) bg_passive_tab_pane_g1_cp4

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp4

0x914d,	// (0x00023dcd) bg_passive_tab_pane_g3_cp4

0x9196,	// (0x00023e16) bg_active_tab_pane_g1_cp5

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp5

0x919f,	// (0x00023e1f) bg_active_tab_pane_g3_cp5

0x9196,	// (0x00023e16) bg_passive_tab_pane_g1_cp5

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp5

0x919f,	// (0x00023e1f) bg_passive_tab_pane_g3_cp5

0x91a8,	// (0x00023e28) list_set_graphic_pane_ParamLimits

0x91a8,	// (0x00023e28) list_set_graphic_pane

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp4

0x91c5,	// (0x00023e45) list_set_graphic_pane_g1_ParamLimits

0x91c5,	// (0x00023e45) list_set_graphic_pane_g1

0x91d1,	// (0x00023e51) list_set_graphic_pane_g2_ParamLimits

0x91d1,	// (0x00023e51) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a3d3) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a3d3) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a741) volume_small_pane_cp_g

0x91f5,	// (0x00023e75) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91f5,	// (0x00023e75) list_double2_large_graphic_pane_g1_cp2

0x9201,	// (0x00023e81) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9201,	// (0x00023e81) list_double2_large_graphic_pane_g2_cp2

0x9212,	// (0x00023e92) list_double2_large_graphic_pane_g3_cp2

0x921a,	// (0x00023e9a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x921a,	// (0x00023e9a) list_double2_large_graphic_pane_t1_cp2

0x9230,	// (0x00023eb0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9230,	// (0x00023eb0) list_double2_large_graphic_pane_t2_cp2

0xae00,	// (0x00025a80) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae00,	// (0x00025a80) list_double_large_graphic_pane_g1_cp2

0xae11,	// (0x00025a91) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae11,	// (0x00025a91) list_double_large_graphic_pane_g2_cp2

0x93ab,	// (0x0002402b) list_double_large_graphic_pane_g3_cp2

0xae22,	// (0x00025aa2) list_double_large_graphic_pane_g4_cp

0xae2a,	// (0x00025aaa) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae2a,	// (0x00025aaa) list_double_large_graphic_pane_t1_cp2

0xae41,	// (0x00025ac1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae41,	// (0x00025ac1) list_double_large_graphic_pane_t2_cp2

0x929d,	// (0x00023f1d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x929d,	// (0x00023f1d) list_double2_graphic_pane_g1_cp2

0x92ab,	// (0x00023f2b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x92ab,	// (0x00023f2b) list_double2_graphic_pane_g2_cp2

0x92bc,	// (0x00023f3c) list_double2_graphic_pane_g3_cp2

0x92c6,	// (0x00023f46) list_double2_graphic_pane_t1_cp2_ParamLimits

0x92c6,	// (0x00023f46) list_double2_graphic_pane_t1_cp2

0x92dc,	// (0x00023f5c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92dc,	// (0x00023f5c) list_double2_graphic_pane_t2_cp2

0x92ee,	// (0x00023f6e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92ee,	// (0x00023f6e) list_single_number_heading_pane_g1_cp2

0x92fa,	// (0x00023f7a) list_single_number_heading_pane_g2_cp2

0x9302,	// (0x00023f82) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9302,	// (0x00023f82) list_single_number_heading_pane_t1_cp2

0x9318,	// (0x00023f98) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9318,	// (0x00023f98) list_single_number_heading_pane_t2_cp2

0x932a,	// (0x00023faa) list_single_number_heading_pane_t3_cp2_ParamLimits

0x932a,	// (0x00023faa) list_single_number_heading_pane_t3_cp2

0x92ee,	// (0x00023f6e) list_single_heading_pane_g1_cp2_ParamLimits

0x92ee,	// (0x00023f6e) list_single_heading_pane_g1_cp2

0x92fa,	// (0x00023f7a) list_single_heading_pane_g2_cp2

0x9302,	// (0x00023f82) list_single_heading_pane_t1_cp2_ParamLimits

0x9302,	// (0x00023f82) list_single_heading_pane_t1_cp2

0xac08,	// (0x00025888) list_single_heading_pane_t2_cp2_ParamLimits

0xac08,	// (0x00025888) list_single_heading_pane_t2_cp2

0xab50,	// (0x000257d0) list_double_graphic_pane_g1_cp2_ParamLimits

0xab50,	// (0x000257d0) list_double_graphic_pane_g1_cp2

0xab5c,	// (0x000257dc) list_double_graphic_pane_g2_cp2_ParamLimits

0xab5c,	// (0x000257dc) list_double_graphic_pane_g2_cp2

0xab6b,	// (0x000257eb) list_double_graphic_pane_g3_cp2

0xab73,	// (0x000257f3) list_double_graphic_pane_t1_cp2_ParamLimits

0xab73,	// (0x000257f3) list_double_graphic_pane_t1_cp2

0xab89,	// (0x00025809) list_double_graphic_pane_t2_cp2_ParamLimits

0xab89,	// (0x00025809) list_double_graphic_pane_t2_cp2

0x939f,	// (0x0002401f) list_double_number_pane_g1_cp2_ParamLimits

0x939f,	// (0x0002401f) list_double_number_pane_g1_cp2

0x93ab,	// (0x0002402b) list_double_number_pane_g2_cp2

0xab14,	// (0x00025794) list_double_number_pane_t1_cp2_ParamLimits

0xab14,	// (0x00025794) list_double_number_pane_t1_cp2

0xab28,	// (0x000257a8) list_double_number_pane_t2_cp2_ParamLimits

0xab28,	// (0x000257a8) list_double_number_pane_t2_cp2

0xab3e,	// (0x000257be) list_double_number_pane_t3_cp2_ParamLimits

0xab3e,	// (0x000257be) list_double_number_pane_t3_cp2

0xa9fd,	// (0x0002567d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9fd,	// (0x0002567d) list_single_graphic_pane_g1_cp2

0x9403,	// (0x00024083) list_single_graphic_pane_g2_cp2_ParamLimits

0x9403,	// (0x00024083) list_single_graphic_pane_g2_cp2

0x940f,	// (0x0002408f) list_single_graphic_pane_g3_cp2

0xa9d3,	// (0x00025653) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9d3,	// (0x00025653) list_single_graphic_pane_t1_cp2

0x9403,	// (0x00024083) list_single_number_pane_g1_cp2_ParamLimits

0x9403,	// (0x00024083) list_single_number_pane_g1_cp2

0x940f,	// (0x0002408f) list_single_number_pane_g2_cp2

0xa9d3,	// (0x00025653) list_single_number_pane_t1_cp2_ParamLimits

0xa9d3,	// (0x00025653) list_single_number_pane_t1_cp2

0xa9e9,	// (0x00025669) list_single_number_pane_t2_cp2_ParamLimits

0xa9e9,	// (0x00025669) list_single_number_pane_t2_cp2

0x9201,	// (0x00023e81) list_double2_pane_g1_cp2_ParamLimits

0x9201,	// (0x00023e81) list_double2_pane_g1_cp2

0x9212,	// (0x00023e92) list_double2_pane_g2_cp2

0x9377,	// (0x00023ff7) list_double2_pane_t1_cp2_ParamLimits

0x9377,	// (0x00023ff7) list_double2_pane_t1_cp2

0x938d,	// (0x0002400d) list_double2_pane_t2_cp2_ParamLimits

0x938d,	// (0x0002400d) list_double2_pane_t2_cp2

0x939f,	// (0x0002401f) list_double_pane_g1_cp2_ParamLimits

0x939f,	// (0x0002401f) list_double_pane_g1_cp2

0x93ab,	// (0x0002402b) list_double_pane_g2_cp2

0x93b3,	// (0x00024033) list_double_pane_t1_cp2_ParamLimits

0x93b3,	// (0x00024033) list_double_pane_t1_cp2

0x93c9,	// (0x00024049) list_double_pane_t2_cp2_ParamLimits

0x93c9,	// (0x00024049) list_double_pane_t2_cp2

0x93f3,	// (0x00024073) list_single_pane_cp2_g3

0x9403,	// (0x00024083) list_single_pane_g1_cp2_ParamLimits

0x9403,	// (0x00024083) list_single_pane_g1_cp2

0x940f,	// (0x0002408f) list_single_pane_g2_cp2

0x9417,	// (0x00024097) list_single_pane_t1_cp2_ParamLimits

0x9417,	// (0x00024097) list_single_pane_t1_cp2

0x942f,	// (0x000240af) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x942f,	// (0x000240af) list_single_large_graphic_pane_g1_cp2

0x943b,	// (0x000240bb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x943b,	// (0x000240bb) list_single_large_graphic_pane_g2_cp2

0x9447,	// (0x000240c7) list_single_large_graphic_pane_g3_cp2

0x944f,	// (0x000240cf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x944f,	// (0x000240cf) list_single_large_graphic_pane_g4_cp1

0x9469,	// (0x000240e9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9469,	// (0x000240e9) list_single_large_graphic_pane_t1_cp2

0xa99f,	// (0x0002561f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa99f,	// (0x0002561f) list_single_graphic_heading_pane_g1_cp2

0xa96c,	// (0x000255ec) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa96c,	// (0x000255ec) list_single_graphic_heading_pane_g4_cp2

0x940f,	// (0x0002408f) list_single_graphic_heading_pane_g5_cp2

0xa9ab,	// (0x0002562b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9ab,	// (0x0002562b) list_single_graphic_heading_pane_t1_cp2

0xa9c1,	// (0x00025641) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9c1,	// (0x00025641) list_single_graphic_heading_pane_t2_cp2

0xa960,	// (0x000255e0) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa960,	// (0x000255e0) list_single_2graphic_pane_g1_cp2

0xa96c,	// (0x000255ec) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa96c,	// (0x000255ec) list_single_2graphic_pane_g2_cp2

0x940f,	// (0x0002408f) list_single_2graphic_pane_g3_cp2

0xa97d,	// (0x000255fd) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa97d,	// (0x000255fd) list_single_2graphic_pane_g4_cp2

0xa989,	// (0x00025609) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa989,	// (0x00025609) list_single_2graphic_pane_t1_cp2

0x7edf,	// (0x00022b5f) list_highlight_pane_g10_cp1

0xa538,	// (0x000251b8) list_highlight_pane_g1_cp1

0xa540,	// (0x000251c0) list_highlight_pane_g2_cp1

0xa548,	// (0x000251c8) list_highlight_pane_g3_cp1

0xa550,	// (0x000251d0) list_highlight_pane_g4_cp1

0xa558,	// (0x000251d8) list_highlight_pane_g5_cp1

0xa560,	// (0x000251e0) list_highlight_pane_g6_cp1

0xa568,	// (0x000251e8) list_highlight_pane_g7_cp1

0xa570,	// (0x000251f0) list_highlight_pane_g8_cp1

0xa578,	// (0x000251f8) list_highlight_pane_g9_cp1

0xa458,	// (0x000250d8) form_field_slider_pane_t3

0xa466,	// (0x000250e6) form_field_slider_pane_t4

0xa474,	// (0x000250f4) slider_form_pane_ParamLimits

0xa474,	// (0x000250f4) slider_form_pane

0x7ee9,	// (0x00022b69) control_abbreviations

0x7ee9,	// (0x00022b69) control_conventions

0x7ee9,	// (0x00022b69) control_definitions

0x7ee9,	// (0x00022b69) format_table_attribute

0xac52,	// (0x000258d2) bg_popup_preview_window_pane_g9

0x7ee9,	// (0x00022b69) format_table_data2

0x7ee9,	// (0x00022b69) format_table_data3

0x7ee9,	// (0x00022b69) format_table_data_example

0x0008,

0x7ee9,	// (0x00022b69) intro_purpose

0xf8e8,	// (0x0002a568) bg_popup_preview_window_pane_g

0x7ee9,	// (0x00022b69) texts_category

0x7ee9,	// (0x00022b69) texts_graphics

0x947f,	// (0x000240ff) text_digital

0x948e,	// (0x0002410e) text_primary

0x949d,	// (0x0002411d) text_primary_small

0x94ac,	// (0x0002412c) text_secondary

0x94bb,	// (0x0002413b) text_title

0xb38d,	// (0x0002600d) bg_passive_tab_pane_g1_cp3_srt

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp3_srt

0xb396,	// (0x00026016) bg_passive_tab_pane_g3_cp3_srt

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp3_srt

0xb39f,	// (0x0002601f) tabs_4_active_pane_srt_g1

0xb3a7,	// (0x00026027) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a7,	// (0x00026027) tabs_4_active_pane_srt_t1

0xb38d,	// (0x0002600d) bg_active_tab_pane_g1_cp3_copy1

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp3_copy1

0xb396,	// (0x00026016) bg_active_tab_pane_g3_cp3_copy1

0x7fc9,	// (0x00022c49) tabs_2_long_active_pane_srt_ParamLimits

0x7fc9,	// (0x00022c49) tabs_2_long_active_pane_srt

0x7fc9,	// (0x00022c49) tabs_2_long_passive_pane_srt_ParamLimits

0x7fc9,	// (0x00022c49) tabs_2_long_passive_pane_srt

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp4_srt

0xb081,	// (0x00025d01) bg_passive_tab_pane_g1_cp4_srt

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp4_srt

0xb08a,	// (0x00025d0a) bg_passive_tab_pane_g3_cp4_srt

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp4_srt_ParamLimits

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp4_srt

0xb093,	// (0x00025d13) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb093,	// (0x00025d13) tabs_2_long_active_pane_srt_t1

0xb081,	// (0x00025d01) bg_active_tab_pane_g1_cp4_srt

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp4_srt

0xb08a,	// (0x00025d0a) bg_active_tab_pane_g3_cp4_srt

0x8244,	// (0x00022ec4) tabs_3_long_active_pane_srt_ParamLimits

0x8244,	// (0x00022ec4) tabs_3_long_active_pane_srt

0x8244,	// (0x00022ec4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8244,	// (0x00022ec4) tabs_3_long_passive_pane_cp_srt

0x8244,	// (0x00022ec4) tabs_3_long_passive_pane_srt_ParamLimits

0x8244,	// (0x00022ec4) tabs_3_long_passive_pane_srt

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp5_srt

0x9196,	// (0x00023e16) bg_passive_tab_pane_g1_cp5_srt

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp5_srt

0x919f,	// (0x00023e1f) bg_passive_tab_pane_g3_cp5_srt

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp5_srt_ParamLimits

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp5_srt

0xb06f,	// (0x00025cef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb06f,	// (0x00025cef) tabs_3_long_active_pane_srt_t1

0x9196,	// (0x00023e16) bg_active_tab_pane_g1_cp5_srt

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp5_srt

0x919f,	// (0x00023e1f) bg_active_tab_pane_g3_cp5_srt

0xb061,	// (0x00025ce1) navi_text_pane_srt_t1

0xb059,	// (0x00025cd9) navi_icon_pane_srt_g1

0x9684,	// (0x00024304) midp_editing_number_pane_srt

0x94ca,	// (0x0002414a) midp_ticker_pane_srt

0x968c,	// (0x0002430c) midp_ticker_pane_srt_g1

0x9694,	// (0x00024314) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a3f2) midp_ticker_pane_srt_g

0x969c,	// (0x0002431c) midp_ticker_pane_srt_t1

0xb04a,	// (0x00025cca) midp_editing_number_pane_t1_copy1

0x8a1c,	// (0x0002369c) listscroll_midp_pane

0x8a1c,	// (0x0002369c) midp_form_pane

0x9536,	// (0x000241b6) midp_info_popup_window_ParamLimits

0x9536,	// (0x000241b6) midp_info_popup_window

0x88e4,	// (0x00023564) bg_popup_sub_pane_cp50_ParamLimits

0x88e4,	// (0x00023564) bg_popup_sub_pane_cp50

0xa164,	// (0x00024de4) listscroll_midp_info_pane_ParamLimits

0xa164,	// (0x00024de4) listscroll_midp_info_pane

0xa14c,	// (0x00024dcc) listscroll_form_midp_pane_ParamLimits

0xa14c,	// (0x00024dcc) listscroll_form_midp_pane

0xa158,	// (0x00024dd8) scroll_bar_cp050

0xa12c,	// (0x00024dac) list_midp_pane

0xbde3,	// (0x00026a63) signal_pane_g2_cp

0xa066,	// (0x00024ce6) listscroll_midp_info_pane_t1_ParamLimits

0xa066,	// (0x00024ce6) listscroll_midp_info_pane_t1

0xa07e,	// (0x00024cfe) listscroll_midp_info_pane_t2_ParamLimits

0xa07e,	// (0x00024cfe) listscroll_midp_info_pane_t2

0xa0bc,	// (0x00024d3c) listscroll_midp_info_pane_t3_ParamLimits

0xa0bc,	// (0x00024d3c) listscroll_midp_info_pane_t3

0xa0f6,	// (0x00024d76) listscroll_midp_info_pane_t4_ParamLimits

0xa0f6,	// (0x00024d76) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a4a3) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a4a3) listscroll_midp_info_pane_t

0x89a8,	// (0x00023628) scroll_pane_cp21

0xa004,	// (0x00024c84) form_midp_field_choice_group_pane

0xa00d,	// (0x00024c8d) form_midp_field_text_pane

0xa04c,	// (0x00024ccc) form_midp_field_time_pane

0xa054,	// (0x00024cd4) form_midp_gauge_slider_pane

0xa05d,	// (0x00024cdd) form_midp_gauge_wait_pane

0x7ee9,	// (0x00022b69) form_midp_image_pane

0x52ac,	// (0x0001ff2c) list_single_midp_pane_ParamLimits

0x52ac,	// (0x0001ff2c) list_single_midp_pane

0x9fbc,	// (0x00024c3c) form_midp_field_text_pane_t1

0x9d86,	// (0x00024a06) input_focus_pane_cp050

0x9ff3,	// (0x00024c73) list_midp_form_text_pane

0x9f8b,	// (0x00024c0b) form_midp_field_choice_group_pane_t1

0x9f99,	// (0x00024c19) input_focus_pane_cp051

0x9fad,	// (0x00024c2d) list_midp_choice_pane

0x7ee9,	// (0x00022b69) status_idle_pane

0x9f6f,	// (0x00024bef) form_midp_field_time_pane_t1

0x7edf,	// (0x00022b5f) wait_anim_pane_g2_copy1

0x9f7d,	// (0x00024bfd) form_midp_field_time_pane_t2

0x0001,

0x95e4,	// (0x00024264) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a49e) form_midp_field_time_pane_t

0x7ee9,	// (0x00022b69) input_focus_pane_cp052

0x7ee9,	// (0x00022b69) bg_input_focus_pane_cp040

0x9f2f,	// (0x00024baf) form_midp_gauge_slider_pane_t1

0x9f3d,	// (0x00024bbd) form_midp_gauge_slider_pane_t2

0x9f4b,	// (0x00024bcb) form_midp_gauge_slider_pane_t3

0x9f59,	// (0x00024bd9) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a495) form_midp_gauge_slider_pane_t

0x9f67,	// (0x00024be7) form_midp_slider_pane

0x7fc9,	// (0x00022c49) bg_input_focus_pane_cp041_ParamLimits

0x7fc9,	// (0x00022c49) bg_input_focus_pane_cp041

0x9efc,	// (0x00024b7c) form_midp_gauge_wait_pane_t1_ParamLimits

0x9efc,	// (0x00024b7c) form_midp_gauge_wait_pane_t1

0x9f0e,	// (0x00024b8e) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f0e,	// (0x00024b8e) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a490) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a490) form_midp_gauge_wait_pane_t

0x9f20,	// (0x00024ba0) form_midp_wait_pane_ParamLimits

0x9f20,	// (0x00024ba0) form_midp_wait_pane

0x9ec6,	// (0x00024b46) form_midp_image_pane_g1

0x9ecf,	// (0x00024b4f) form_midp_image_pane_t1

0x9ede,	// (0x00024b5e) form_midp_image_pane_t2

0x9eed,	// (0x00024b6d) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a489) form_midp_image_pane_t

0x9ebd,	// (0x00024b3d) list_single_midp_pane_g1

0x529d,	// (0x0001ff1d) list_single_midp_pane_t1

0x9e95,	// (0x00024b15) list_midp_form_item_pane_ParamLimits

0x9e95,	// (0x00024b15) list_midp_form_item_pane

0x958c,	// (0x0002420c) list_midp_form_item_pane_t1

0x959b,	// (0x0002421b) midp_ticker_pane_g1

0x95a7,	// (0x00024227) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a3d8) midp_ticker_pane_g

0x95b3,	// (0x00024233) midp_ticker_pane_t1

0xb29b,	// (0x00025f1b) midp_editing_number_pane_t1

0xb279,	// (0x00025ef9) midp_editing_number_pane

0xb288,	// (0x00025f08) midp_ticker_pane

0xb03a,	// (0x00025cba) ai_message_heading_pane

0x7ee9,	// (0x00022b69) bg_popup_window_pane_cp14

0xb042,	// (0x00025cc2) listscroll_ai_message_pane

0xafc4,	// (0x00025c44) ai_message_heading_pane_g1_ParamLimits

0xafc4,	// (0x00025c44) ai_message_heading_pane_g1

0xafd0,	// (0x00025c50) ai_message_heading_pane_g2_ParamLimits

0xafd0,	// (0x00025c50) ai_message_heading_pane_g2

0xafdc,	// (0x00025c5c) ai_message_heading_pane_g3_ParamLimits

0xafdc,	// (0x00025c5c) ai_message_heading_pane_g3

0xafe8,	// (0x00025c68) ai_message_heading_pane_g4_ParamLimits

0xafe8,	// (0x00025c68) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a5ca) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a5ca) ai_message_heading_pane_g

0xaff4,	// (0x00025c74) ai_message_heading_pane_t1_ParamLimits

0xaff4,	// (0x00025c74) ai_message_heading_pane_t1

0xb00e,	// (0x00025c8e) ai_message_heading_pane_t2_ParamLimits

0xb00e,	// (0x00025c8e) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a5d3) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a5d3) ai_message_heading_pane_t

0xb020,	// (0x00025ca0) bg_popup_heading_pane_cp1_ParamLimits

0xb020,	// (0x00025ca0) bg_popup_heading_pane_cp1

0xafb2,	// (0x00025c32) list_ai_message_pane_ParamLimits

0xafb2,	// (0x00025c32) list_ai_message_pane

0x89a8,	// (0x00023628) scroll_pane_cp10

0xaf4e,	// (0x00025bce) list_ai_message_pane_g1

0xaf56,	// (0x00025bd6) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a5a7) list_ai_message_pane_g

0xaf5e,	// (0x00025bde) list_ai_message_pane_t1_ParamLimits

0xaf5e,	// (0x00025bde) list_ai_message_pane_t1

0xaf73,	// (0x00025bf3) list_ai_message_pane_t2_ParamLimits

0xaf73,	// (0x00025bf3) list_ai_message_pane_t2

0xaf88,	// (0x00025c08) list_ai_message_pane_t3_ParamLimits

0xaf88,	// (0x00025c08) list_ai_message_pane_t3

0xaf9d,	// (0x00025c1d) list_ai_message_pane_t4_ParamLimits

0xaf9d,	// (0x00025c1d) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a5ac) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a5ac) list_ai_message_pane_t

0xaf39,	// (0x00025bb9) cell_ai_soft_ind_pane_ParamLimits

0xaf39,	// (0x00025bb9) cell_ai_soft_ind_pane

0x95c5,	// (0x00024245) cell_ai_soft_ind_pane_g1_ParamLimits

0x95c5,	// (0x00024245) cell_ai_soft_ind_pane_g1

0x7ee9,	// (0x00022b69) grid_highlight_cp1

0x95d2,	// (0x00024252) text_secondary_cp56_ParamLimits

0x95d2,	// (0x00024252) text_secondary_cp56

0xaf0e,	// (0x00025b8e) example_general_pane_ParamLimits

0xaf0e,	// (0x00025b8e) example_general_pane

0xaf1a,	// (0x00025b9a) example_parent_pane_g1_ParamLimits

0xaf1a,	// (0x00025b9a) example_parent_pane_g1

0xaf26,	// (0x00025ba6) example_parent_pane_t1_ParamLimits

0xaf26,	// (0x00025ba6) example_parent_pane_t1

0x68cd,	// (0x0002154d) popup_preview_text_window_ParamLimits

0x68cd,	// (0x0002154d) popup_preview_text_window

0x93fb,	// (0x0002407b) list_single_pane_cp2_g4

0x82fa,	// (0x00022f7a) bg_popup_preview_window_pane_ParamLimits

0x82fa,	// (0x00022f7a) bg_popup_preview_window_pane

0xac5a,	// (0x000258da) popup_preview_text_window_t1_ParamLimits

0xac5a,	// (0x000258da) popup_preview_text_window_t1

0xac78,	// (0x000258f8) popup_preview_text_window_t2_ParamLimits

0xac78,	// (0x000258f8) popup_preview_text_window_t2

0xacc1,	// (0x00025941) popup_preview_text_window_t3_ParamLimits

0xacc1,	// (0x00025941) popup_preview_text_window_t3

0xad06,	// (0x00025986) popup_preview_text_window_t4_ParamLimits

0xad06,	// (0x00025986) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a57b) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a57b) popup_preview_text_window_t

0xad84,	// (0x00025a04) scroll_pane_cp11

0x9d12,	// (0x00024992) bg_popup_preview_window_pane_g1

0xac1a,	// (0x0002589a) bg_popup_preview_window_pane_g2

0xac22,	// (0x000258a2) bg_popup_preview_window_pane_g3

0xac2a,	// (0x000258aa) bg_popup_preview_window_pane_g4

0xac32,	// (0x000258b2) bg_popup_preview_window_pane_g5

0xac3a,	// (0x000258ba) bg_popup_preview_window_pane_g6

0xac42,	// (0x000258c2) bg_popup_preview_window_pane_g7

0xac4a,	// (0x000258ca) bg_popup_preview_window_pane_g8

0x5af1,	// (0x00020771) aid_popup_width_pane

0x68ab,	// (0x0002152b) popup_midp_note_alarm_window_ParamLimits

0x68ab,	// (0x0002152b) popup_midp_note_alarm_window

0x882c,	// (0x000234ac) data_form_pane_ParamLimits

0x4f06,	// (0x0001fb86) form_field_data_pane_g1

0x4f10,	// (0x0001fb90) form_field_data_pane_t1_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_ParamLimits

0x4f28,	// (0x0001fba8) data_form_wide_pane_ParamLimits

0x4f39,	// (0x0001fbb9) form_field_data_wide_pane_g1

0x4f45,	// (0x0001fbc5) form_field_data_wide_pane_t1_ParamLimits

0x85a9,	// (0x00023229) input_focus_pane_cp6_ParamLimits

0x8955,	// (0x000235d5) input_popup_find_pane_g1_ParamLimits

0x8955,	// (0x000235d5) input_popup_find_pane_g1

0x6063,	// (0x00020ce3) aid_navi_side_left_pane

0x6078,	// (0x00020cf8) aid_navi_side_right_pane

0xa633,	// (0x000252b3) bg_popup_window_pane_cp30_ParamLimits

0xa633,	// (0x000252b3) bg_popup_window_pane_cp30

0xa6ad,	// (0x0002532d) popup_midp_note_alarm_window_g1_ParamLimits

0xa6ad,	// (0x0002532d) popup_midp_note_alarm_window_g1

0xa6dd,	// (0x0002535d) popup_midp_note_alarm_window_t1_ParamLimits

0xa6dd,	// (0x0002535d) popup_midp_note_alarm_window_t1

0xa77e,	// (0x000253fe) popup_midp_note_alarm_window_t2_ParamLimits

0xa77e,	// (0x000253fe) popup_midp_note_alarm_window_t2

0xa82c,	// (0x000254ac) popup_midp_note_alarm_window_t3_ParamLimits

0xa82c,	// (0x000254ac) popup_midp_note_alarm_window_t3

0xa85e,	// (0x000254de) popup_midp_note_alarm_window_t4_ParamLimits

0xa85e,	// (0x000254de) popup_midp_note_alarm_window_t4

0xa884,	// (0x00025504) popup_midp_note_alarm_window_t5_ParamLimits

0xa884,	// (0x00025504) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a518) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a518) popup_midp_note_alarm_window_t

0xa930,	// (0x000255b0) wait_bar_pane_cp1_ParamLimits

0xa930,	// (0x000255b0) wait_bar_pane_cp1

0x7ee9,	// (0x00022b69) wait_anim_pane_copy1

0x7ee9,	// (0x00022b69) wait_border_pane_copy1

0xa319,	// (0x00024f99) wait_border_pane_g1_copy1

0x4f5f,	// (0x0001fbdf) form_field_popup_pane_g1

0x4f67,	// (0x0001fbe7) form_field_popup_pane_t1_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_cp7_ParamLimits

0x8866,	// (0x000234e6) list_form_pane_ParamLimits

0x4f7f,	// (0x0001fbff) form_field_popup_wide_pane_g1

0x4f87,	// (0x0001fc07) form_field_popup_wide_pane_t1_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_cp8_ParamLimits

0x8872,	// (0x000234f2) list_form_wide_pane_ParamLimits

0xb425,	// (0x000260a5) aid_size_cell_graphic_pane

0x5011,	// (0x0001fc91) data_form_pane_t1_ParamLimits

0x5306,	// (0x0001ff86) data_form_wide_pane_t1_ParamLimits

0x98df,	// (0x0002455f) bg_status_flat_pane

0x7f29,	// (0x00022ba9) title_pane_t1_ParamLimits

0x7f91,	// (0x00022c11) title_pane_t2_ParamLimits

0x7fb7,	// (0x00022c37) title_pane_t3_ParamLimits

0xf557,	// (0x0002a1d7) title_pane_t_ParamLimits

0x8e23,	// (0x00023aa3) level_1_signal_ParamLimits

0x8e35,	// (0x00023ab5) level_2_signal_ParamLimits

0x8e48,	// (0x00023ac8) level_3_signal_ParamLimits

0x8e5b,	// (0x00023adb) level_4_signal_ParamLimits

0x8e6e,	// (0x00023aee) level_5_signal_ParamLimits

0x8e81,	// (0x00023b01) level_6_signal_ParamLimits

0x8e94,	// (0x00023b14) level_7_signal_ParamLimits

0x8e23,	// (0x00023aa3) level_1_battery_ParamLimits

0x8e35,	// (0x00023ab5) level_2_battery_ParamLimits

0x8e48,	// (0x00023ac8) level_3_battery_ParamLimits

0x8e5b,	// (0x00023adb) level_4_battery_ParamLimits

0x8e6e,	// (0x00023aee) level_5_battery_ParamLimits

0x8e81,	// (0x00023b01) level_6_battery_ParamLimits

0x8e94,	// (0x00023b14) level_7_battery_ParamLimits

0xa538,	// (0x000251b8) bg_status_flat_pane_g1

0xa540,	// (0x000251c0) bg_status_flat_pane_g2

0xa548,	// (0x000251c8) bg_status_flat_pane_g3

0xa550,	// (0x000251d0) bg_status_flat_pane_g4

0xa558,	// (0x000251d8) bg_status_flat_pane_g5

0xa560,	// (0x000251e0) bg_status_flat_pane_g6

0xa568,	// (0x000251e8) bg_status_flat_pane_g7

0x7fdf,	// (0x00022c5f) tabs_3_active_pane_t1_ParamLimits

0x7fdf,	// (0x00022c5f) tabs_3_passive_pane_t1_ParamLimits

0x7ff9,	// (0x00022c79) tabs_4_active_pane_t1_ParamLimits

0x7ff9,	// (0x00022c79) tabs_4_1_passive_pane_t1_ParamLimits

0x89e9,	// (0x00023669) tabs_2_active_pane_t1_ParamLimits

0x89e9,	// (0x00023669) tabs_2_passive_pane_t1_ParamLimits

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp4_ParamLimits

0x8a09,	// (0x00023689) tabs_2_long_active_pane_t1_ParamLimits

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp4_ParamLimits

0x161d,	// (0x0001c29d) list_single_midp_graphic_pane_t1_ParamLimits

0x89fb,	// (0x0002367b) bg_active_tab_pane_cp5_ParamLimits

0x8a28,	// (0x000236a8) tabs_3_long_active_pane_t1_ParamLimits

0x8a1c,	// (0x0002369c) bg_passive_tab_pane_cp5_ParamLimits

0x161d,	// (0x0001c29d) list_single_midp_graphic_pane_t1

0x98df,	// (0x0002455f) bg_status_flat_pane_ParamLimits

0x99a2,	// (0x00024622) indicator_pane_cp2_ParamLimits

0x99a2,	// (0x00024622) indicator_pane_cp2

0x9acd,	// (0x0002474d) navi_pane_srt_ParamLimits

0x9acd,	// (0x0002474d) navi_pane_srt

0x9af1,	// (0x00024771) popup_clock_digital_analogue_window_cp1

0x80a6,	// (0x00022d26) indicator_pane_t1

0x94ca,	// (0x0002414a) copy_highlight_pane

0x94ca,	// (0x0002414a) cursor_graphics_pane

0x94ca,	// (0x0002414a) graphic_within_text_pane

0x94ca,	// (0x0002414a) link_highlight_pane

0xad47,	// (0x000259c7) popup_preview_text_window_t5_ParamLimits

0xad47,	// (0x000259c7) popup_preview_text_window_t5

0x95ec,	// (0x0002426c) cursor_digital_pane

0x95ec,	// (0x0002426c) cursor_primary_pane

0x95fd,	// (0x0002427d) cursor_primary_small_pane

0x9605,	// (0x00024285) cursor_secondary_pane

0x960d,	// (0x0002428d) cursor_title_pane

0x95ec,	// (0x0002426c) link_highlight_digital_pane

0x95f4,	// (0x00024274) link_highlight_primary_pane

0x95fd,	// (0x0002427d) link_highlight_primary_small_pane

0x9605,	// (0x00024285) link_highlight_secondary_pane

0x960d,	// (0x0002428d) link_highlight_title_pane

0x95ec,	// (0x0002426c) copy_highlight_digital_pane

0x95ec,	// (0x0002426c) copy_highlight_primary_pane

0x95fd,	// (0x0002427d) copy_highlight_primary_small_pane

0x9605,	// (0x00024285) copy_highlight_secondary_pane

0x960d,	// (0x0002428d) copy_highlight_title_pane

0x9605,	// (0x00024285) graphic_text_digital_pane

0xa5d6,	// (0x00025256) graphic_text_primary_pane

0xa5df,	// (0x0002525f) graphic_text_primary_small_pane

0x95fd,	// (0x0002427d) graphic_text_secondary_pane

0x95ec,	// (0x0002426c) graphic_text_title_pane

0x9615,	// (0x00024295) cursor_primary_pane_g1

0xa5c8,	// (0x00025248) cursor_text_primary_t1

0xa5b0,	// (0x00025230) cursor_primary_small_pane_g1

0xa5ba,	// (0x0002523a) cursor_text_primary_small_t1

0xa598,	// (0x00025218) cursor_primary_small_pane_g1_copy1

0xa5a2,	// (0x00025222) cursor_text_primary_small_t1_copy1

0xa580,	// (0x00025200) cursor_text_title_t1

0xa58e,	// (0x0002520e) cursor_title_pane_g1

0x9615,	// (0x00024295) cursor_digital_pane_g1

0x961f,	// (0x0002429f) cursor_text_digital_t1

0x9644,	// (0x000242c4) link_highlight_primary_pane_g1

0xa529,	// (0x000251a9) link_highlight_primary_pane_t1

0x962d,	// (0x000242ad) link_highlight_primary_small_pane_g1

0x9635,	// (0x000242b5) link_highlight_primary_small_pane_t1

0x9644,	// (0x000242c4) link_highlight_secondary_pane_g1

0x964c,	// (0x000242cc) link_highlight_secondary_pane_t1

0xa49d,	// (0x0002511d) link_highlight_title_pane_g1

0xa4a5,	// (0x00025125) link_highlight_title_pane_t1

0xa486,	// (0x00025106) link_highlight_digital_pane_g1

0xa48e,	// (0x0002510e) link_highlight_digital_pane_t1

0xa35e,	// (0x00024fde) copy_highlight_primary_pane_g1

0xa366,	// (0x00024fe6) copy_highlight_primary_pane_t1

0xa338,	// (0x00024fb8) copy_highlight_primary_small_pane_g1

0xa34f,	// (0x00024fcf) copy_highlight_primary_small_pane_t1

0x965b,	// (0x000242db) copy_highlight_secondary_pane_g1

0x9663,	// (0x000242e3) copy_highlight_secondary_pane_t1

0xa338,	// (0x00024fb8) copy_highlight_title_pane_g1

0xa340,	// (0x00024fc0) copy_highlight_title_pane_t1

0xa35e,	// (0x00024fde) copy_highlight_digital_pane_g1

0xb5f0,	// (0x00026270) copy_highlight_digital_pane_t1

0xb544,	// (0x000261c4) graphic_text_primary_pane_g1

0xb5d4,	// (0x00026254) graphic_text_primary_pane_t1

0xb5e2,	// (0x00026262) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a647) graphic_text_primary_pane_t

0xb5b0,	// (0x00026230) graphic_text_primary_small_pane_g1

0xb5b8,	// (0x00026238) graphic_text_primary_small_pane_t1

0xb5c6,	// (0x00026246) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a642) graphic_text_primary_small_pane_t

0xb58c,	// (0x0002620c) graphic_text_secondary_pane_g1

0xb594,	// (0x00026214) graphic_text_secondary_pane_t1

0xb5a2,	// (0x00026222) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a63d) graphic_text_secondary_pane_t

0xb568,	// (0x000261e8) graphic_text_title_pane_g1

0xb570,	// (0x000261f0) graphic_text_title_pane_t1

0xb57e,	// (0x000261fe) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a638) graphic_text_title_pane_t

0xb544,	// (0x000261c4) graphic_text_digital_pane_g1

0xb54c,	// (0x000261cc) graphic_text_digital_pane_t1

0xb55a,	// (0x000261da) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a633) graphic_text_digital_pane_t

0x7fc9,	// (0x00022c49) navi_icon_pane_srt_ParamLimits

0x7fc9,	// (0x00022c49) navi_icon_pane_srt

0x7ee9,	// (0x00022b69) navi_midp_pane_srt

0x7ee9,	// (0x00022b69) navi_navi_pane_srt

0x7fc9,	// (0x00022c49) navi_text_pane_srt_ParamLimits

0x7fc9,	// (0x00022c49) navi_text_pane_srt

0xb50f,	// (0x0002618f) navi_navi_icon_text_pane_srt

0xb517,	// (0x00026197) navi_navi_pane_srt_g1_ParamLimits

0xb517,	// (0x00026197) navi_navi_pane_srt_g1

0xb529,	// (0x000261a9) navi_navi_pane_srt_g2_ParamLimits

0xb529,	// (0x000261a9) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a62e) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a62e) navi_navi_pane_srt_g

0xb53b,	// (0x000261bb) navi_navi_tabs_pane_srt

0xb50f,	// (0x0002618f) navi_navi_text_pane_srt

0xb50f,	// (0x0002618f) navi_navi_volume_pane_srt

0xb500,	// (0x00026180) navi_navi_text_pane_srt_t1

0x6ede,	// (0x00021b5e) navi_navi_volume_pane_srt_g1

0x6ee6,	// (0x00021b66) volume_small_pane_srt_ParamLimits

0x6ee6,	// (0x00021b66) volume_small_pane_srt

0x6343,	// (0x00020fc3) volume_small_pane_srt_g1_ParamLimits

0x6343,	// (0x00020fc3) volume_small_pane_srt_g1

0x6353,	// (0x00020fd3) volume_small_pane_srt_g2_ParamLimits

0x6353,	// (0x00020fd3) volume_small_pane_srt_g2

0x6364,	// (0x00020fe4) volume_small_pane_srt_g3_ParamLimits

0x6364,	// (0x00020fe4) volume_small_pane_srt_g3

0x6375,	// (0x00020ff5) volume_small_pane_srt_g4_ParamLimits

0x6375,	// (0x00020ff5) volume_small_pane_srt_g4

0x6386,	// (0x00021006) volume_small_pane_srt_g5_ParamLimits

0x6386,	// (0x00021006) volume_small_pane_srt_g5

0x6397,	// (0x00021017) volume_small_pane_srt_g6_ParamLimits

0x6397,	// (0x00021017) volume_small_pane_srt_g6

0x63a8,	// (0x00021028) volume_small_pane_srt_g7_ParamLimits

0x63a8,	// (0x00021028) volume_small_pane_srt_g7

0x63b9,	// (0x00021039) volume_small_pane_srt_g8_ParamLimits

0x63b9,	// (0x00021039) volume_small_pane_srt_g8

0x63ca,	// (0x0002104a) volume_small_pane_srt_g9_ParamLimits

0x63ca,	// (0x0002104a) volume_small_pane_srt_g9

0x63db,	// (0x0002105b) volume_small_pane_srt_g10_ParamLimits

0x63db,	// (0x0002105b) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a3dd) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a3dd) volume_small_pane_srt_g

0x83a3,	// (0x00023023) query_popup_data_pane_cp2

0xb4e6,	// (0x00026166) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e6,	// (0x00026166) navi_navi_icon_text_pane_srt_t1

0xa5d6,	// (0x00025256) navi_tabs_2_long_pane_srt

0xa5d6,	// (0x00025256) navi_tabs_2_pane_srt

0xa5d6,	// (0x00025256) navi_tabs_3_long_pane_srt

0xa5d6,	// (0x00025256) navi_tabs_3_pane_srt

0xa5d6,	// (0x00025256) navi_tabs_4_pane_srt

0x6ebe,	// (0x00021b3e) tabs_2_active_pane_srt_ParamLimits

0x6ebe,	// (0x00021b3e) tabs_2_active_pane_srt

0x6ece,	// (0x00021b4e) tabs_2_passive_pane_srt_ParamLimits

0x6ece,	// (0x00021b4e) tabs_2_passive_pane_srt

0x9808,	// (0x00024488) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9808,	// (0x00024488) bg_passive_tab_pane_cp1_srt

0xb4b2,	// (0x00026132) bg_passive_tab_pane_g1_cp1_srt

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp1_srt

0xb4bb,	// (0x0002613b) bg_passive_tab_pane_g3_cp1_srt

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp1_srt

0xb4c4,	// (0x00026144) tabs_2_active_pane_srt_g1

0xb4cc,	// (0x0002614c) tabs_2_active_pane_srt_t1_ParamLimits

0xb4cc,	// (0x0002614c) tabs_2_active_pane_srt_t1

0xb4b2,	// (0x00026132) bg_active_tab_pane_g1_cp1_srt

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp1_srt

0xb4bb,	// (0x0002613b) bg_active_tab_pane_g3_cp1_srt

0x6e8b,	// (0x00021b0b) tabs_3_active_pane_srt_ParamLimits

0x6e8b,	// (0x00021b0b) tabs_3_active_pane_srt

0x6e9c,	// (0x00021b1c) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e9c,	// (0x00021b1c) tabs_3_passive_pane_cp_srt

0x6ead,	// (0x00021b2d) tabs_3_passive_pane_srt_ParamLimits

0x6ead,	// (0x00021b2d) tabs_3_passive_pane_srt

0x9808,	// (0x00024488) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9808,	// (0x00024488) bg_passive_tab_pane_cp2_srt

0x9672,	// (0x000242f2) bg_passive_tab_pane_g1_cp2_srt

0x910c,	// (0x00023d8c) bg_passive_tab_pane_g2_cp2_srt

0x967b,	// (0x000242fb) bg_passive_tab_pane_g3_cp2_srt

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fc9,	// (0x00022c49) bg_active_tab_pane_cp2_srt

0xb498,	// (0x00026118) tabs_3_active_pane_srt_g1

0xb4a0,	// (0x00026120) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a0,	// (0x00026120) tabs_3_active_pane_srt_t1

0x9672,	// (0x000242f2) bg_active_tab_pane_g1_cp2_srt

0x910c,	// (0x00023d8c) bg_active_tab_pane_g2_cp2_srt

0x967b,	// (0x000242fb) bg_active_tab_pane_g3_cp2_srt

0x6e43,	// (0x00021ac3) tabs_4_active_pane_srt_ParamLimits

0x6e43,	// (0x00021ac3) tabs_4_active_pane_srt

0x6e55,	// (0x00021ad5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e55,	// (0x00021ad5) tabs_4_passive_pane_cp2_srt

0x6540,	// (0x000211c0) aid_size_cell_toolbar

0x8a1c,	// (0x0002369c) main_idle_act_pane_ParamLimits

0x66e1,	// (0x00021361) popup_large_graphic_colour_window_ParamLimits

0x6a48,	// (0x000216c8) popup_toolbar_window_ParamLimits

0x6a48,	// (0x000216c8) popup_toolbar_window

0xb2aa,	// (0x00025f2a) list_single_graphic_2heading_pane_ParamLimits

0xb2aa,	// (0x00025f2a) list_single_graphic_2heading_pane

0x8bd8,	// (0x00023858) aid_size_cell_apps_grid_lsc_pane

0x8bea,	// (0x0002386a) aid_size_cell_apps_grid_prt_pane

0x9808,	// (0x00024488) bg_wml_button_pane_cp1_ParamLimits

0x9808,	// (0x00024488) bg_wml_button_pane_cp1

0x9fbc,	// (0x00024c3c) form_midp_field_text_pane_t1_ParamLimits

0x9d86,	// (0x00024a06) input_focus_pane_cp050_ParamLimits

0x9ff3,	// (0x00024c73) list_midp_form_text_pane_ParamLimits

0x9f99,	// (0x00024c19) input_focus_pane_cp051_ParamLimits

0x9fad,	// (0x00024c2d) list_midp_choice_pane_ParamLimits

0x9e3f,	// (0x00024abf) list_single_2graphic_pane_cp3_ParamLimits

0x9e3f,	// (0x00024abf) list_single_2graphic_pane_cp3

0x9e63,	// (0x00024ae3) list_single_midp_graphic_pane_ParamLimits

0x9e63,	// (0x00024ae3) list_single_midp_graphic_pane

0x5173,	// (0x0001fdf3) list_single_graphic_2heading_pane_g1_ParamLimits

0x5173,	// (0x0001fdf3) list_single_graphic_2heading_pane_g1

0x517f,	// (0x0001fdff) list_single_graphic_2heading_pane_g4_ParamLimits

0x517f,	// (0x0001fdff) list_single_graphic_2heading_pane_g4

0x518b,	// (0x0001fe0b) list_single_graphic_2heading_pane_g5_ParamLimits

0x518b,	// (0x0001fe0b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a430) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a430) list_single_graphic_2heading_pane_g

0x5197,	// (0x0001fe17) list_single_graphic_2heading_pane_t1_ParamLimits

0x5197,	// (0x0001fe17) list_single_graphic_2heading_pane_t1

0x51ab,	// (0x0001fe2b) list_single_graphic_2heading_pane_t2_ParamLimits

0x51ab,	// (0x0001fe2b) list_single_graphic_2heading_pane_t2

0x51c5,	// (0x0001fe45) list_single_graphic_2heading_pane_t3_ParamLimits

0x51c5,	// (0x0001fe45) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a437) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a437) list_single_graphic_2heading_pane_t

0x9c50,	// (0x000248d0) bg_popup_sub_pane_cp2

0x9c7a,	// (0x000248fa) grid_toobar_pane

0x6af5,	// (0x00021775) cell_toolbar_pane_ParamLimits

0x6af5,	// (0x00021775) cell_toolbar_pane

0x9cb6,	// (0x00024936) cell_toolbar_pane_g1_ParamLimits

0x9cb6,	// (0x00024936) cell_toolbar_pane_g1

0x9cca,	// (0x0002494a) cell_toolbar_pane_g2_ParamLimits

0x9cca,	// (0x0002494a) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a43e) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a43e) cell_toolbar_pane_g

0x9cec,	// (0x0002496c) grid_highlight_pane_cp2_ParamLimits

0x9cec,	// (0x0002496c) grid_highlight_pane_cp2

0x9d06,	// (0x00024986) toolbar_button_pane

0x9d12,	// (0x00024992) toolbar_button_pane_g1

0x9d1a,	// (0x0002499a) toolbar_button_pane_g2

0x9d22,	// (0x000249a2) toolbar_button_pane_g3

0x9d2a,	// (0x000249aa) toolbar_button_pane_g4

0x9d32,	// (0x000249b2) toolbar_button_pane_g5

0x9d3a,	// (0x000249ba) toolbar_button_pane_g6

0x9d42,	// (0x000249c2) toolbar_button_pane_g7

0x9d4a,	// (0x000249ca) toolbar_button_pane_g8

0x9d52,	// (0x000249d2) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a443) toolbar_button_pane_g

0x6b2d,	// (0x000217ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b2d,	// (0x000217ad) list_single_2graphic_pane_g1_cp3

0x6b39,	// (0x000217b9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b39,	// (0x000217b9) list_single_2graphic_pane_g2_cp3

0x6b4a,	// (0x000217ca) list_single_2graphic_pane_g3_cp3

0x6b52,	// (0x000217d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b52,	// (0x000217d2) list_single_2graphic_pane_g4_cp3

0x6b5e,	// (0x000217de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b5e,	// (0x000217de) list_single_2graphic_pane_t1_cp3

0xa1c4,	// (0x00024e44) list_single_midp_graphic_pane_g2_ParamLimits

0xa1c4,	// (0x00024e44) list_single_midp_graphic_pane_g2

0x6548,	// (0x000211c8) aid_zoom_text_primary

0x5147,	// (0x0001fdc7) aid_zoom_text_secondary

0x972c,	// (0x000243ac) status_small_pane_g7_ParamLimits

0x972c,	// (0x000243ac) status_small_pane_g7

0x974f,	// (0x000243cf) status_small_pane_t1_ParamLimits

0x7f00,	// (0x00022b80) title_pane_g2

0x0003,

0xf54e,	// (0x0002a1ce) title_pane_g

0x8447,	// (0x000230c7) aid_size_cell_colour_1_pane_ParamLimits

0x8447,	// (0x000230c7) aid_size_cell_colour_1_pane

0x845b,	// (0x000230db) aid_size_cell_colour_2_pane_ParamLimits

0x845b,	// (0x000230db) aid_size_cell_colour_2_pane

0x846f,	// (0x000230ef) aid_size_cell_colour_3_pane_ParamLimits

0x846f,	// (0x000230ef) aid_size_cell_colour_3_pane

0x8483,	// (0x00023103) aid_size_cell_colour_4_pane_ParamLimits

0x8483,	// (0x00023103) aid_size_cell_colour_4_pane

0x5fa0,	// (0x00020c20) title_pane_stacon_g1_ParamLimits

0x5fa0,	// (0x00020c20) title_pane_stacon_g1

0xa3bd,	// (0x0002503d) popup_note_wait_window_g3_ParamLimits

0xa3bd,	// (0x0002503d) popup_note_wait_window_g3

0xa433,	// (0x000250b3) popup_note_wait_window_t5_ParamLimits

0xa433,	// (0x000250b3) popup_note_wait_window_t5

0x7ee9,	// (0x00022b69) main_feb_china_hwr_fs_writing_pane

0x65c4,	// (0x00021244) popup_feb_china_hwr_fs_window_ParamLimits

0x65c4,	// (0x00021244) popup_feb_china_hwr_fs_window

0x6b7a,	// (0x000217fa) aid_size_cell_hwr_fs_ParamLimits

0x6b7a,	// (0x000217fa) aid_size_cell_hwr_fs

0x9d86,	// (0x00024a06) bg_popup_sub_pane_cp3_ParamLimits

0x9d86,	// (0x00024a06) bg_popup_sub_pane_cp3

0x6b8f,	// (0x0002180f) grid_hwr_fs_pane_ParamLimits

0x6b8f,	// (0x0002180f) grid_hwr_fs_pane

0x6ba7,	// (0x00021827) linegrid_hwr_fs_pane_ParamLimits

0x6ba7,	// (0x00021827) linegrid_hwr_fs_pane

0x6bb7,	// (0x00021837) cell_hwr_fs_pane_ParamLimits

0x6bb7,	// (0x00021837) cell_hwr_fs_pane

0x9d92,	// (0x00024a12) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d92,	// (0x00024a12) linegrid_hwr_fs_pane_g1

0x9d9e,	// (0x00024a1e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d9e,	// (0x00024a1e) linegrid_hwr_fs_pane_g2

0x9db0,	// (0x00024a30) linegrid_hwr_fs_pane_g3_ParamLimits

0x9db0,	// (0x00024a30) linegrid_hwr_fs_pane_g3

0x6bd9,	// (0x00021859) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bd9,	// (0x00021859) linegrid_hwr_fs_pane_g4

0x6bf3,	// (0x00021873) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bf3,	// (0x00021873) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a46e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a46e) linegrid_hwr_fs_pane_g

0x9dbc,	// (0x00024a3c) cell_hwr_fs_pane_g1_ParamLimits

0x9dbc,	// (0x00024a3c) cell_hwr_fs_pane_g1

0x9b87,	// (0x00024807) cell_hwr_fs_pane_g2_ParamLimits

0x9b87,	// (0x00024807) cell_hwr_fs_pane_g2

0x9dd2,	// (0x00024a52) cell_hwr_fs_pane_g3_ParamLimits

0x9dd2,	// (0x00024a52) cell_hwr_fs_pane_g3

0x9ddf,	// (0x00024a5f) cell_hwr_fs_pane_g4_ParamLimits

0x9ddf,	// (0x00024a5f) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a479) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a479) cell_hwr_fs_pane_g

0x6c09,	// (0x00021889) cell_hwr_fs_pane_t1

0x7ee9,	// (0x00022b69) grid_highlight_pane_cp6

0x7ee9,	// (0x00022b69) main_idle_act2_pane

0x898f,	// (0x0002360f) aid_inside_area_popup_secondary

0xaa6a,	// (0x000256ea) aid_inside_area_window_primary_ParamLimits

0xaa6a,	// (0x000256ea) aid_inside_area_window_primary

0xb5ff,	// (0x0002627f) ai2_news_ticker_pane

0xb607,	// (0x00026287) aid_size_cell_ai1_link_ParamLimits

0xb607,	// (0x00026287) aid_size_cell_ai1_link

0xb621,	// (0x000262a1) popup_ai2_data_window_ParamLimits

0xb621,	// (0x000262a1) popup_ai2_data_window

0xb637,	// (0x000262b7) popup_ai2_link_window_ParamLimits

0xb637,	// (0x000262b7) popup_ai2_link_window

0x9d86,	// (0x00024a06) bg_popup_sub_pane_cp4_ParamLimits

0x9d86,	// (0x00024a06) bg_popup_sub_pane_cp4

0xb64b,	// (0x000262cb) grid_ai2_link_pane_ParamLimits

0xb64b,	// (0x000262cb) grid_ai2_link_pane

0xb662,	// (0x000262e2) popup_ai2_link_window_g1_ParamLimits

0xb662,	// (0x000262e2) popup_ai2_link_window_g1

0xb66e,	// (0x000262ee) popup_ai2_link_window_g2_ParamLimits

0xb66e,	// (0x000262ee) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a64c) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a64c) popup_ai2_link_window_g

0xb67d,	// (0x000262fd) ai2_mp_button_pane

0xb685,	// (0x00026305) ai2_mp_volume_pane

0x9f99,	// (0x00024c19) bg_popup_sub_pane_cp5_ParamLimits

0x9f99,	// (0x00024c19) bg_popup_sub_pane_cp5

0xb68d,	// (0x0002630d) heading_ai2_gene_pane_ParamLimits

0xb68d,	// (0x0002630d) heading_ai2_gene_pane

0xb699,	// (0x00026319) list_ai2_gene_pane_ParamLimits

0xb699,	// (0x00026319) list_ai2_gene_pane

0xb6e1,	// (0x00026361) cell_ai2_link_pane_ParamLimits

0xb6e1,	// (0x00026361) cell_ai2_link_pane

0xb6f7,	// (0x00026377) cell_ai2_link_pane_g1

0x7ee9,	// (0x00022b69) grid_highlight_pane_cp7

0x6efb,	// (0x00021b7b) ai2_mp_volume_pane_g1

0xb7c7,	// (0x00026447) ai2_mp_volume_pane_g2

0xb73c,	// (0x000263bc) list_ai2_gene_pane_t1

0xb7cf,	// (0x0002644f) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a665) ai2_mp_volume_pane_g

0x6f03,	// (0x00021b83) volume_small_pane_cp3

0xb7d7,	// (0x00026457) aid_size_cell_ai2_button

0xb7df,	// (0x0002645f) grid_ai2_button_pane

0xb7e8,	// (0x00026468) cell_ai2_button_pane_ParamLimits

0xb7e8,	// (0x00026468) cell_ai2_button_pane

0x7edf,	// (0x00022b5f) cell_ai2_button_pane_g1

0x7ee9,	// (0x00022b69) grid_highlight_pane_cp8

0xb787,	// (0x00026407) ai2_gene_pane_t1_ParamLimits

0xb787,	// (0x00026407) ai2_gene_pane_t1

0x6536,	// (0x000211b6) aid_height_parent_landscape

0xb0e1,	// (0x00025d61) aid_height_set_list

0xb0f2,	// (0x00025d72) aid_size_parent

0xb425,	// (0x000260a5) aid_size_cell_graphic_pane_ParamLimits

0xb6a9,	// (0x00026329) popup_ai2_data_window_g1_ParamLimits

0xb6a9,	// (0x00026329) popup_ai2_data_window_g1

0xb6b5,	// (0x00026335) ai2_news_ticker_pane_g1

0xb6bd,	// (0x0002633d) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a651) ai2_news_ticker_pane_g

0xb6c5,	// (0x00026345) ai2_news_ticker_pane_t1

0xb6d3,	// (0x00026353) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a656) ai2_news_ticker_pane_t

0xb700,	// (0x00026380) heading_ai2_gene_pane_g1

0xb708,	// (0x00026388) heading_ai2_gene_pane_t1_ParamLimits

0xb708,	// (0x00026388) heading_ai2_gene_pane_t1

0xb71d,	// (0x0002639d) list_highlight_pane_cp6

0xb725,	// (0x000263a5) ai2_gene_pane_ParamLimits

0xb725,	// (0x000263a5) ai2_gene_pane

0xb74a,	// (0x000263ca) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a65b) list_ai2_gene_pane_t

0xb758,	// (0x000263d8) list_highlight_pane_cp8_ParamLimits

0xb758,	// (0x000263d8) list_highlight_pane_cp8

0xb769,	// (0x000263e9) ai2_gene_pane_g1_ParamLimits

0xb769,	// (0x000263e9) ai2_gene_pane_g1

0xb77b,	// (0x000263fb) ai2_gene_pane_g2_ParamLimits

0xb77b,	// (0x000263fb) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a660) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a660) ai2_gene_pane_g

0x87ce,	// (0x0002344e) scroll_pane_cp12

0x64f5,	// (0x00021175) control_pane_t3_ParamLimits

0x64f5,	// (0x00021175) control_pane_t3

0x9740,	// (0x000243c0) status_small_pane_g8_ParamLimits

0x9740,	// (0x000243c0) status_small_pane_g8

0x66aa,	// (0x0002132a) popup_find_window_ParamLimits

0x68bf,	// (0x0002153f) popup_note_image_window_ParamLimits

0x5173,	// (0x0001fdf3) list_double2_graphic_pane_vc_g1_ParamLimits

0x5173,	// (0x0001fdf3) list_double2_graphic_pane_vc_g1

0x517f,	// (0x0001fdff) list_double2_graphic_pane_vc_g2_ParamLimits

0x517f,	// (0x0001fdff) list_double2_graphic_pane_vc_g2

0x518b,	// (0x0001fe0b) list_double2_graphic_pane_vc_g3_ParamLimits

0x518b,	// (0x0001fe0b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a430) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a430) list_double2_graphic_pane_vc_g

0x51dd,	// (0x0001fe5d) list_double2_graphic_pane_vc_t1_ParamLimits

0x51dd,	// (0x0001fe5d) list_double2_graphic_pane_vc_t1

0x517f,	// (0x0001fdff) list_single_heading_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_single_heading_pane_vc_g1

0x518b,	// (0x0001fe0b) list_single_heading_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_single_heading_pane_vc_g

0x51f3,	// (0x0001fe73) list_single_heading_pane_vc_t1_ParamLimits

0x51f3,	// (0x0001fe73) list_single_heading_pane_vc_t1

0x520b,	// (0x0001fe8b) list_single_heading_pane_vc_t2_ParamLimits

0x520b,	// (0x0001fe8b) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a45d) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a45d) list_single_heading_pane_vc_t

0x5227,	// (0x0001fea7) list_setting_number_pane_vc_g1_ParamLimits

0x5227,	// (0x0001fea7) list_setting_number_pane_vc_g1

0x5233,	// (0x0001feb3) list_setting_number_pane_vc_g2_ParamLimits

0x5233,	// (0x0001feb3) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a462) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a462) list_setting_number_pane_vc_g

0x523f,	// (0x0001febf) list_setting_number_pane_vc_t1_ParamLimits

0x523f,	// (0x0001febf) list_setting_number_pane_vc_t1

0x5253,	// (0x0001fed3) list_setting_number_pane_vc_t2_ParamLimits

0x5253,	// (0x0001fed3) list_setting_number_pane_vc_t2

0x526f,	// (0x0001feef) list_setting_number_pane_vc_t3_ParamLimits

0x526f,	// (0x0001feef) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a467) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a467) list_setting_number_pane_vc_t

0x528d,	// (0x0001ff0d) set_value_pane_vc_ParamLimits

0x528d,	// (0x0001ff0d) set_value_pane_vc

0xb2aa,	// (0x00025f2a) list_double2_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double2_graphic_pane_vc

0xb2aa,	// (0x00025f2a) list_double2_large_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double2_large_graphic_pane_vc

0xb2aa,	// (0x00025f2a) list_double2_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double2_pane_vc

0xb2aa,	// (0x00025f2a) list_double_graphic_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_graphic_heading_pane_vc

0xb2aa,	// (0x00025f2a) list_double_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_graphic_pane_vc

0xb2aa,	// (0x00025f2a) list_double_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_heading_pane_vc

0xb2bc,	// (0x00025f3c) list_double_large_graphic_pane_vc_ParamLimits

0xb2bc,	// (0x00025f3c) list_double_large_graphic_pane_vc

0xb2aa,	// (0x00025f2a) list_double_number_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_number_pane_vc

0xb2aa,	// (0x00025f2a) list_double_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_pane_vc

0xb2aa,	// (0x00025f2a) list_double_time_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_double_time_pane_vc

0xb2aa,	// (0x00025f2a) list_setting_number_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_setting_number_pane_vc

0xb2aa,	// (0x00025f2a) list_setting_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_setting_pane_vc

0xb2aa,	// (0x00025f2a) list_single_graphic_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_single_graphic_heading_pane_vc

0xb2aa,	// (0x00025f2a) list_single_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00025f2a) list_single_heading_pane_vc

0x5366,	// (0x0001ffe6) list_single_number_heading_pane_vc_ParamLimits

0x5366,	// (0x0001ffe6) list_single_number_heading_pane_vc

0x5173,	// (0x0001fdf3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5173,	// (0x0001fdf3) list_double_graphic_heading_pane_vc_g1

0x517f,	// (0x0001fdff) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x517f,	// (0x0001fdff) list_double_graphic_heading_pane_vc_g2

0x518b,	// (0x0001fe0b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x518b,	// (0x0001fe0b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a430) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a430) list_double_graphic_heading_pane_vc_g

0x53e7,	// (0x00020067) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53e7,	// (0x00020067) list_double_graphic_heading_pane_vc_t1

0x5403,	// (0x00020083) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5403,	// (0x00020083) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a66c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a66c) list_double_graphic_heading_pane_vc_t

0x5227,	// (0x0001fea7) list_setting_pane_vc_g1_ParamLimits

0x5227,	// (0x0001fea7) list_setting_pane_vc_g1

0x5233,	// (0x0001feb3) list_setting_pane_vc_g2_ParamLimits

0x5233,	// (0x0001feb3) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a462) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a462) list_setting_pane_vc_g

0x5421,	// (0x000200a1) list_setting_pane_vc_t1_ParamLimits

0x5421,	// (0x000200a1) list_setting_pane_vc_t1

0x543d,	// (0x000200bd) list_setting_pane_vc_t2_ParamLimits

0x543d,	// (0x000200bd) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a69a) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a69a) list_setting_pane_vc_t

0x528d,	// (0x0001ff0d) set_value_pane_cp_vc_ParamLimits

0x528d,	// (0x0001ff0d) set_value_pane_cp_vc

0x517f,	// (0x0001fdff) list_single_number_heading_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_single_number_heading_pane_vc_g1

0x518b,	// (0x0001fe0b) list_single_number_heading_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_single_number_heading_pane_vc_g

0x51f3,	// (0x0001fe73) list_single_number_heading_pane_vc_t1_ParamLimits

0x51f3,	// (0x0001fe73) list_single_number_heading_pane_vc_t1

0x5459,	// (0x000200d9) list_single_number_heading_pane_vc_t2_ParamLimits

0x5459,	// (0x000200d9) list_single_number_heading_pane_vc_t2

0x546d,	// (0x000200ed) list_single_number_heading_pane_vc_t3_ParamLimits

0x546d,	// (0x000200ed) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a69f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a69f) list_single_number_heading_pane_vc_t

0x5173,	// (0x0001fdf3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5173,	// (0x0001fdf3) list_single_graphic_heading_pane_vc_g1

0x517f,	// (0x0001fdff) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x517f,	// (0x0001fdff) list_single_graphic_heading_pane_vc_g4

0x518b,	// (0x0001fe0b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x518b,	// (0x0001fe0b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a430) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a430) list_single_graphic_heading_pane_vc_g

0x51f3,	// (0x0001fe73) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51f3,	// (0x0001fe73) list_single_graphic_heading_pane_vc_t1

0x547f,	// (0x000200ff) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x547f,	// (0x000200ff) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a6a6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a6a6) list_single_graphic_heading_pane_vc_t

0x517f,	// (0x0001fdff) list_double2_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_double2_pane_vc_g1

0x518b,	// (0x0001fe0b) list_double2_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_double2_pane_vc_g

0x5493,	// (0x00020113) list_double2_pane_vc_t1_ParamLimits

0x5493,	// (0x00020113) list_double2_pane_vc_t1

0x54a9,	// (0x00020129) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x54a9,	// (0x00020129) list_double2_large_graphic_pane_vc_g1

0x517f,	// (0x0001fdff) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x517f,	// (0x0001fdff) list_double2_large_graphic_pane_vc_g2

0x518b,	// (0x0001fe0b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x518b,	// (0x0001fe0b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a6ab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a6ab) list_double2_large_graphic_pane_vc_g

0x54b5,	// (0x00020135) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x54b5,	// (0x00020135) list_double2_large_graphic_pane_vc_t1

0x54cb,	// (0x0002014b) list_double_time_pane_vc_g1_ParamLimits

0x54cb,	// (0x0002014b) list_double_time_pane_vc_g1

0x54d7,	// (0x00020157) list_double_time_pane_vc_g2_ParamLimits

0x54d7,	// (0x00020157) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a6b2) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a6b2) list_double_time_pane_vc_g

0x54e3,	// (0x00020163) list_double_time_pane_vc_t1_ParamLimits

0x54e3,	// (0x00020163) list_double_time_pane_vc_t1

0x5507,	// (0x00020187) list_double_time_pane_vc_t2_ParamLimits

0x5507,	// (0x00020187) list_double_time_pane_vc_t2

0x5556,	// (0x000201d6) list_double_time_pane_vc_t3_ParamLimits

0x5556,	// (0x000201d6) list_double_time_pane_vc_t3

0x5568,	// (0x000201e8) list_double_time_pane_vc_t4_ParamLimits

0x5568,	// (0x000201e8) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a6b7) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a6b7) list_double_time_pane_vc_t

0x517f,	// (0x0001fdff) list_double_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_double_pane_vc_g1

0x518b,	// (0x0001fe0b) list_double_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_double_pane_vc_g

0x557c,	// (0x000201fc) list_double_pane_vc_t1_ParamLimits

0x557c,	// (0x000201fc) list_double_pane_vc_t1

0x5590,	// (0x00020210) list_double_pane_vc_t2_ParamLimits

0x5590,	// (0x00020210) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a6c0) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a6c0) list_double_pane_vc_t

0x517f,	// (0x0001fdff) list_double_number_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_double_number_pane_vc_g1

0x518b,	// (0x0001fe0b) list_double_number_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_double_number_pane_vc_g

0x55a8,	// (0x00020228) list_double_number_pane_vc_t1_ParamLimits

0x55a8,	// (0x00020228) list_double_number_pane_vc_t1

0x55ba,	// (0x0002023a) list_double_number_pane_vc_t2_ParamLimits

0x55ba,	// (0x0002023a) list_double_number_pane_vc_t2

0x55ce,	// (0x0002024e) list_double_number_pane_vc_t3_ParamLimits

0x55ce,	// (0x0002024e) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a6c5) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a6c5) list_double_number_pane_vc_t

0x55e6,	// (0x00020266) list_double_large_graphic_pane_vc_g1_ParamLimits

0x55e6,	// (0x00020266) list_double_large_graphic_pane_vc_g1

0x5608,	// (0x00020288) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5608,	// (0x00020288) list_double_large_graphic_pane_vc_g2

0x561c,	// (0x0002029c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x561c,	// (0x0002029c) list_double_large_graphic_pane_vc_g3

0x562b,	// (0x000202ab) list_double_large_graphic_pane_vc_g4_ParamLimits

0x562b,	// (0x000202ab) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a6cc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a6cc) list_double_large_graphic_pane_vc_g

0x5637,	// (0x000202b7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5637,	// (0x000202b7) list_double_large_graphic_pane_vc_t1

0x5653,	// (0x000202d3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5653,	// (0x000202d3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a6d5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a6d5) list_double_large_graphic_pane_vc_t

0x517f,	// (0x0001fdff) list_double_heading_pane_vc_g1_ParamLimits

0x517f,	// (0x0001fdff) list_double_heading_pane_vc_g1

0x518b,	// (0x0001fe0b) list_double_heading_pane_vc_g2_ParamLimits

0x518b,	// (0x0001fe0b) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a458) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a458) list_double_heading_pane_vc_g

0x5675,	// (0x000202f5) list_double_heading_pane_vc_t1_ParamLimits

0x5675,	// (0x000202f5) list_double_heading_pane_vc_t1

0x51f3,	// (0x0001fe73) list_double_heading_pane_vc_t2_ParamLimits

0x51f3,	// (0x0001fe73) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a6da) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a6da) list_double_heading_pane_vc_t

0x5689,	// (0x00020309) list_double_graphic_pane_vc_g1_ParamLimits

0x5689,	// (0x00020309) list_double_graphic_pane_vc_g1

0x5695,	// (0x00020315) list_double_graphic_pane_vc_g2_ParamLimits

0x5695,	// (0x00020315) list_double_graphic_pane_vc_g2

0x517f,	// (0x0001fdff) list_double_graphic_pane_vc_g3_ParamLimits

0x517f,	// (0x0001fdff) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a6df) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a6df) list_double_graphic_pane_vc_g

0x56b2,	// (0x00020332) list_double_graphic_pane_vc_t1_ParamLimits

0x56b2,	// (0x00020332) list_double_graphic_pane_vc_t1

0x56dc,	// (0x0002035c) list_double_graphic_pane_vc_t2_ParamLimits

0x56dc,	// (0x0002035c) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a6e8) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a6e8) list_double_graphic_pane_vc_t

0x5afd,	// (0x0002077d) aid_size_cell_fastswap

0x5b05,	// (0x00020785) aid_size_cell_touch_ParamLimits

0x5b05,	// (0x00020785) aid_size_cell_touch

0x5d60,	// (0x000209e0) popup_fast_swap_wide_window_ParamLimits

0x5d60,	// (0x000209e0) popup_fast_swap_wide_window

0x5e74,	// (0x00020af4) touch_pane_ParamLimits

0x5e74,	// (0x00020af4) touch_pane

0x8824,	// (0x000234a4) button_value_adjust_pane_cp2

0x4e5a,	// (0x0001fada) button_value_adjust_pane_cp4

0x4e7a,	// (0x0001fafa) form_field_data_pane_cp2

0x4e99,	// (0x0001fb19) form_field_data_wide_pane_cp2

0x8ca1,	// (0x00023921) bg_scroll_pane_ParamLimits

0x6102,	// (0x00020d82) scroll_handle_pane_ParamLimits

0x6116,	// (0x00020d96) scroll_sc2_down_pane_ParamLimits

0x6116,	// (0x00020d96) scroll_sc2_down_pane

0x8cd2,	// (0x00023952) scroll_sc2_up_pane_ParamLimits

0x8cd2,	// (0x00023952) scroll_sc2_up_pane

0xbeb8,	// (0x00026b38) grid_wheel_folder_pane_g1_ParamLimits

0xbeb8,	// (0x00026b38) grid_wheel_folder_pane_g1

0x62db,	// (0x00020f5b) clock_nsta_pane_cp2_ParamLimits

0x62db,	// (0x00020f5b) clock_nsta_pane_cp2

0x8a1c,	// (0x0002369c) listscroll_midp_pane_ParamLimits

0x94d2,	// (0x00024152) midp_canvas_pane

0x97ba,	// (0x0002443a) nsta_clock_indic_pane

0x97ee,	// (0x0002446e) listscroll_form_pane_vc

0x97f6,	// (0x00024476) listscroll_set_pane_vc_ParamLimits

0x97f6,	// (0x00024476) listscroll_set_pane_vc

0x98fb,	// (0x0002457b) clock_nsta_pane

0x9970,	// (0x000245f0) indicator_nsta_pane

0x9c50,	// (0x000248d0) bg_popup_sub_pane_cp2_ParamLimits

0x9c64,	// (0x000248e4) find_pane_cp2_ParamLimits

0x9c64,	// (0x000248e4) find_pane_cp2

0x9c7a,	// (0x000248fa) grid_toobar_pane_ParamLimits

0x9d5a,	// (0x000249da) list_form_gen_pane_vc_ParamLimits

0x9d5a,	// (0x000249da) list_form_gen_pane_vc

0x9d70,	// (0x000249f0) scroll_pane_cp8_vc_ParamLimits

0x9d70,	// (0x000249f0) scroll_pane_cp8_vc

0x9dec,	// (0x00024a6c) data_form_wide_pane_vc_ParamLimits

0x9dec,	// (0x00024a6c) data_form_wide_pane_vc

0x9df8,	// (0x00024a78) form_field_data_wide_pane_vc_g1

0x9e00,	// (0x00024a80) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e00,	// (0x00024a80) form_field_data_wide_pane_vc_t1

0x8838,	// (0x000234b8) input_focus_pane_cp6_vc_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_cp6_vc

0xa12c,	// (0x00024dac) list_midp_pane_ParamLimits

0xa138,	// (0x00024db8) scroll_pane_cp16_ParamLimits

0xa138,	// (0x00024db8) scroll_pane_cp16

0xa186,	// (0x00024e06) button_value_adjust_pane_ParamLimits

0xa186,	// (0x00024e06) button_value_adjust_pane

0xb104,	// (0x00025d84) button_value_adjust_pane_cp6_ParamLimits

0xb104,	// (0x00025d84) button_value_adjust_pane_cp6

0xb22e,	// (0x00025eae) settings_code_pane_cp_ParamLimits

0xb22e,	// (0x00025eae) settings_code_pane_cp

0x7edf,	// (0x00022b5f) cell_touch_pane_g1

0x7edf,	// (0x00022b5f) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a383) cell_touch_pane_g

0xb7fa,	// (0x0002647a) cell_touch_pane_cp_ParamLimits

0xb7fa,	// (0x0002647a) cell_touch_pane_cp

0xb80a,	// (0x0002648a) cell_touch_pane_ParamLimits

0xb80a,	// (0x0002648a) cell_touch_pane

0x7edf,	// (0x00022b5f) scroll_sc2_down_pane_g1

0x7edf,	// (0x00022b5f) scroll_sc2_up_pane_g1

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp4_vc

0xb81c,	// (0x0002649c) list_set_graphic_pane_vc_g1_ParamLimits

0xb81c,	// (0x0002649c) list_set_graphic_pane_vc_g1

0xb828,	// (0x000264a8) list_set_graphic_pane_vc_g2_ParamLimits

0xb828,	// (0x000264a8) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a671) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a671) list_set_graphic_pane_vc_g

0xb834,	// (0x000264b4) text_primary_small_cp13_vc_ParamLimits

0xb834,	// (0x000264b4) text_primary_small_cp13_vc

0xb84c,	// (0x000264cc) list_set_graphic_pane_vc_ParamLimits

0xb84c,	// (0x000264cc) list_set_graphic_pane_vc

0x7ee9,	// (0x00022b69) input_focus_pane_cp2_vc

0x7edf,	// (0x00022b5f) setting_code_pane_vc_g1

0x8014,	// (0x00022c94) setting_code_pane_vc_t1

0xb85f,	// (0x000264df) set_text_pane_vc_t1_ParamLimits

0xb85f,	// (0x000264df) set_text_pane_vc_t1

0x7ee9,	// (0x00022b69) input_focus_pane_cp1_vc

0xb87b,	// (0x000264fb) list_set_text_pane_vc

0x7edf,	// (0x00022b5f) setting_text_pane_vc_g1

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp2_vc

0x800b,	// (0x00022c8b) setting_slider_graphic_pane_vc_g1

0xb885,	// (0x00026505) setting_slider_graphic_pane_vc_t1

0xb895,	// (0x00026515) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a676) setting_slider_graphic_pane_vc_t

0xb8a5,	// (0x00026525) slider_set_pane_cp_vc

0xb8ad,	// (0x0002652d) slider_set_pane_vc_g1

0xb8b6,	// (0x00026536) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a67b) slider_set_pane_vc_g

0x8893,	// (0x00023513) set_opt_bg_pane_g1_copy1

0x889b,	// (0x0002351b) set_opt_bg_pane_g2_copy1

0xb8e2,	// (0x00026562) set_opt_bg_pane_g3_copy1

0x88ab,	// (0x0002352b) set_opt_bg_pane_g4_copy1

0x88b3,	// (0x00023533) set_opt_bg_pane_g5_copy1

0x88bb,	// (0x0002353b) set_opt_bg_pane_g6_copy1

0xb8ec,	// (0x0002656c) set_opt_bg_pane_g7_copy1

0xb8f4,	// (0x00026574) set_opt_bg_pane_g8_copy1

0xb8fe,	// (0x0002657e) set_opt_bg_pane_g9_copy1

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp_vc

0xb908,	// (0x00026588) setting_slider_pane_vc_t1

0xb917,	// (0x00026597) setting_slider_pane_vc_t2

0xb927,	// (0x000265a7) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a68a) setting_slider_pane_vc_t

0xb937,	// (0x000265b7) slider_set_pane_vc

0x6c17,	// (0x00021897) volume_set_pane_vc_g1

0x6c20,	// (0x000218a0) volume_set_pane_vc_g2

0x6c29,	// (0x000218a9) volume_set_pane_vc_g3

0x6c32,	// (0x000218b2) volume_set_pane_vc_g4

0x6c3b,	// (0x000218bb) volume_set_pane_vc_g5

0x6c44,	// (0x000218c4) volume_set_pane_vc_g6

0x6c4d,	// (0x000218cd) volume_set_pane_vc_g7

0x6c56,	// (0x000218d6) volume_set_pane_vc_g8

0x6c5f,	// (0x000218df) volume_set_pane_vc_g9

0x6c68,	// (0x000218e8) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a52f) volume_set_pane_vc_g

0xb93f,	// (0x000265bf) volume_set_pane_vc

0xb947,	// (0x000265c7) button_value_adjust_pane_cp1_vc

0xb951,	// (0x000265d1) list_highlight_pane_cp2_vc

0xb95a,	// (0x000265da) list_set_pane_vc_ParamLimits

0xb95a,	// (0x000265da) list_set_pane_vc

0xb9b8,	// (0x00026638) main_pane_set_vc_t1_ParamLimits

0xb9b8,	// (0x00026638) main_pane_set_vc_t1

0xb9cd,	// (0x0002664d) main_pane_set_vc_t2_ParamLimits

0xb9cd,	// (0x0002664d) main_pane_set_vc_t2

0xb9df,	// (0x0002665f) main_pane_set_vc_t3_ParamLimits

0xb9df,	// (0x0002665f) main_pane_set_vc_t3

0xb9f3,	// (0x00026673) main_pane_set_vc_t4_ParamLimits

0xb9f3,	// (0x00026673) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a691) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a691) main_pane_set_vc_t

0xba07,	// (0x00026687) setting_code_pane_vc_ParamLimits

0xba07,	// (0x00026687) setting_code_pane_vc

0xba18,	// (0x00026698) setting_slider_graphic_pane_vc

0xba18,	// (0x00026698) setting_slider_pane_vc

0xba18,	// (0x00026698) setting_text_pane_vc

0xba18,	// (0x00026698) setting_volume_pane_vc

0xba22,	// (0x000266a2) scroll_pane_cp121_vc

0x8812,	// (0x00023492) set_content_pane_vc

0xba2a,	// (0x000266aa) button_value_adjust_pane_g1

0xba33,	// (0x000266b3) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a6ed) button_value_adjust_pane_g

0xba3c,	// (0x000266bc) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba3c,	// (0x000266bc) form_field_slider_wide_pane_vc_t1

0xba50,	// (0x000266d0) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba50,	// (0x000266d0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a6f2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a6f2) form_field_slider_wide_pane_vc_t

0x8244,	// (0x00022ec4) input_focus_pane_cp10_vc_ParamLimits

0x8244,	// (0x00022ec4) input_focus_pane_cp10_vc

0xba7e,	// (0x000266fe) slider_cont_pane_cp1_vc_ParamLimits

0xba7e,	// (0x000266fe) slider_cont_pane_cp1_vc

0xba90,	// (0x00026710) slider_form_pane_g1_cp2

0xb8b6,	// (0x00026536) slider_form_pane_g2_cp2

0xbabd,	// (0x0002673d) form_field_slider_pane_vc_t3

0xbacb,	// (0x0002674b) form_field_slider_pane_vc_t4

0xbad9,	// (0x00026759) slider_form_pane_vc_ParamLimits

0xbad9,	// (0x00026759) slider_form_pane_vc

0xbae6,	// (0x00026766) form_field_slider_pane_vc_t1_ParamLimits

0xbae6,	// (0x00026766) form_field_slider_pane_vc_t1

0xba50,	// (0x000266d0) form_field_slider_pane_vc_t2_ParamLimits

0xba50,	// (0x000266d0) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a704) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a704) form_field_slider_pane_vc_t

0x8244,	// (0x00022ec4) input_focus_pane_cp9_vc_ParamLimits

0x8244,	// (0x00022ec4) input_focus_pane_cp9_vc

0xbb02,	// (0x00026782) slider_cont_pane_vc_ParamLimits

0xbb02,	// (0x00026782) slider_cont_pane_vc

0xbb16,	// (0x00026796) list_form_graphic_pane_cp_vc_ParamLimits

0xbb16,	// (0x00026796) list_form_graphic_pane_cp_vc

0x9df8,	// (0x00024a78) form_field_popup_wide_pane_vc_g1

0xbb2b,	// (0x000267ab) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb2b,	// (0x000267ab) form_field_popup_wide_pane_vc_t1

0x8838,	// (0x000234b8) input_focus_pane_cp8_vc_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_cp8_vc

0xbb70,	// (0x000267f0) list_form_wide_pane_vc_ParamLimits

0xbb70,	// (0x000267f0) list_form_wide_pane_vc

0xbb7c,	// (0x000267fc) list_form_graphic_pane_vc_g1

0xbb84,	// (0x00026804) list_form_graphic_pane_vc_t1_ParamLimits

0xbb84,	// (0x00026804) list_form_graphic_pane_vc_t1

0x7fc9,	// (0x00022c49) list_highlight_pane_cp5_vc_ParamLimits

0x7fc9,	// (0x00022c49) list_highlight_pane_cp5_vc

0xbba0,	// (0x00026820) list_form_graphic_pane_vc_ParamLimits

0xbba0,	// (0x00026820) list_form_graphic_pane_vc

0x9df8,	// (0x00024a78) form_field_popup_pane_vc_g1

0xbbb6,	// (0x00026836) form_field_popup_pane_vc_t1_ParamLimits

0xbbb6,	// (0x00026836) form_field_popup_pane_vc_t1

0x8838,	// (0x000234b8) input_focus_pane_cp7_vc_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_cp7_vc

0xbbcd,	// (0x0002684d) list_form_pane_vc_ParamLimits

0xbbcd,	// (0x0002684d) list_form_pane_vc

0xbbd9,	// (0x00026859) data_form_pane_vc_t1_ParamLimits

0xbbd9,	// (0x00026859) data_form_pane_vc_t1

0x8893,	// (0x00023513) input_focus_pane_vc_g1

0x889b,	// (0x0002351b) input_focus_pane_vc_g2

0x88a3,	// (0x00023523) input_focus_pane_vc_g3

0x88ab,	// (0x0002352b) input_focus_pane_vc_g4

0x88b3,	// (0x00023533) input_focus_pane_vc_g5

0x88bb,	// (0x0002353b) input_focus_pane_vc_g6

0x88c3,	// (0x00023543) input_focus_pane_vc_g7

0x88cb,	// (0x0002354b) input_focus_pane_vc_g8

0x88d3,	// (0x00023553) input_focus_pane_vc_g9

0x7edf,	// (0x00022b5f) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002a30c) input_focus_pane_vc_g

0x9dec,	// (0x00024a6c) data_form_pane_vc_ParamLimits

0x9dec,	// (0x00024a6c) data_form_pane_vc

0x9df8,	// (0x00024a78) form_field_data_pane_vc_g1

0xbbf4,	// (0x00026874) form_field_data_pane_vc_t1_ParamLimits

0xbbf4,	// (0x00026874) form_field_data_pane_vc_t1

0x8838,	// (0x000234b8) input_focus_pane_vc_ParamLimits

0x8838,	// (0x000234b8) input_focus_pane_vc

0xbc0e,	// (0x0002688e) button_value_adjust_pane_cp3_vc

0xbc16,	// (0x00026896) button_value_adjust_pane_cp5_vc

0xbc1e,	// (0x0002689e) form_field_data_pane_vc_ParamLimits

0xbc1e,	// (0x0002689e) form_field_data_pane_vc

0xbc35,	// (0x000268b5) form_field_data_pane_vc_cp2

0xbc3d,	// (0x000268bd) form_field_data_wide_pane_vc_ParamLimits

0xbc3d,	// (0x000268bd) form_field_data_wide_pane_vc

0xbc53,	// (0x000268d3) form_field_data_wide_pane_vc_cp2

0xbc5b,	// (0x000268db) form_field_popup_pane_vc_ParamLimits

0xbc5b,	// (0x000268db) form_field_popup_pane_vc

0xbc72,	// (0x000268f2) form_field_popup_wide_pane_vc_ParamLimits

0xbc72,	// (0x000268f2) form_field_popup_wide_pane_vc

0xbc88,	// (0x00026908) form_field_slider_pane_vc_ParamLimits

0xbc88,	// (0x00026908) form_field_slider_pane_vc

0xbc9b,	// (0x0002691b) form_field_slider_wide_pane_vc_ParamLimits

0xbc9b,	// (0x0002691b) form_field_slider_wide_pane_vc

0xbcae,	// (0x0002692e) grid_touch_1_pane_ParamLimits

0xbcae,	// (0x0002692e) grid_touch_1_pane

0xbcba,	// (0x0002693a) grid_touch_2_pane_ParamLimits

0xbcba,	// (0x0002693a) grid_touch_2_pane

0x9785,	// (0x00024405) touch_pane_g1_ParamLimits

0x9785,	// (0x00024405) touch_pane_g1

0xbcd2,	// (0x00026952) cell_app_pane_cp_wide_ParamLimits

0xbcd2,	// (0x00026952) cell_app_pane_cp_wide

0xbce3,	// (0x00026963) grid_popup_fast_wide_pane_ParamLimits

0xbce3,	// (0x00026963) grid_popup_fast_wide_pane

0xbcf7,	// (0x00026977) scroll_pane_cp19_ParamLimits

0xbcf7,	// (0x00026977) scroll_pane_cp19

0x7ee9,	// (0x00022b69) bg_popup_window_pane_cp20

0xbd0b,	// (0x0002698b) listscroll_popup_fast_wide_pane

0x7fc9,	// (0x00022c49) grid_indicator_nsta_pane

0xbd13,	// (0x00026993) clock_nsta_pane_g1

0xbd1c,	// (0x0002699c) clock_nsta_pane_t1

0xbd38,	// (0x000269b8) cell_indicator_nsta_pane_ParamLimits

0xbd38,	// (0x000269b8) cell_indicator_nsta_pane

0xbd69,	// (0x000269e9) cell_indicator_nsta_pane_g1

0xbd77,	// (0x000269f7) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a715) cell_indicator_nsta_pane_g

0xbd84,	// (0x00026a04) clock_nsta_pane_cp

0xbd8c,	// (0x00026a0c) indicator_nsta_pane_cp

0xbd94,	// (0x00026a14) nsta_clock_indic_pane_g1

0x8092,	// (0x00022d12) grid_indicator_pane

0x8dc7,	// (0x00023a47) scroll_pane_cp29

0x622a,	// (0x00020eaa) indicator_nsta_pane_cp2_ParamLimits

0x622a,	// (0x00020eaa) indicator_nsta_pane_cp2

0x7fc9,	// (0x00022c49) main_apps_wheel_pane

0xa00d,	// (0x00024c8d) form_midp_field_text_pane_ParamLimits

0xa158,	// (0x00024dd8) scroll_bar_cp050_ParamLimits

0xbdf5,	// (0x00026a75) cell_indicator_pane_ParamLimits

0xbdf5,	// (0x00026a75) cell_indicator_pane

0xbe0c,	// (0x00026a8c) cell_indicator_pane_g1

0xbe16,	// (0x00026a96) grid_wheel_folder_pane_ParamLimits

0xbe16,	// (0x00026a96) grid_wheel_folder_pane

0xbe2c,	// (0x00026aac) list_wheel_apps_pane_ParamLimits

0xbe2c,	// (0x00026aac) list_wheel_apps_pane

0xbe3d,	// (0x00026abd) main_apps_wheel_pane_g1_ParamLimits

0xbe3d,	// (0x00026abd) main_apps_wheel_pane_g1

0xbe51,	// (0x00026ad1) main_apps_wheel_pane_g2_ParamLimits

0xbe51,	// (0x00026ad1) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a731) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a731) main_apps_wheel_pane_g

0xbe69,	// (0x00026ae9) main_apps_wheel_pane_t1_ParamLimits

0xbe69,	// (0x00026ae9) main_apps_wheel_pane_t1

0xbe8c,	// (0x00026b0c) list_wheel_apps_pane_g1

0xbe94,	// (0x00026b14) list_wheel_apps_pane_g2

0xbe9c,	// (0x00026b1c) list_wheel_apps_pane_g3

0xbea4,	// (0x00026b24) list_wheel_apps_pane_g4

0xbeae,	// (0x00026b2e) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a736) list_wheel_apps_pane_g

0x934a,	// (0x00023fca) navi_icon_text_pane

0x982a,	// (0x000244aa) aid_fill_nsta

0xbed1,	// (0x00026b51) navi_icon_text_pane_g1

0xbedd,	// (0x00026b5d) navi_icon_text_pane_t1

0x91dd,	// (0x00023e5d) list_set_graphic_pane_t1_ParamLimits

0x91dd,	// (0x00023e5d) list_set_graphic_pane_t1

0xa8b3,	// (0x00025533) popup_midp_note_alarm_window_t6_ParamLimits

0xa8b3,	// (0x00025533) popup_midp_note_alarm_window_t6

0xa8c5,	// (0x00025545) popup_midp_note_alarm_window_t7_ParamLimits

0xa8c5,	// (0x00025545) popup_midp_note_alarm_window_t7

0xa8d7,	// (0x00025557) popup_midp_note_alarm_window_t8_ParamLimits

0xa8d7,	// (0x00025557) popup_midp_note_alarm_window_t8

0xa8e9,	// (0x00025569) popup_midp_note_alarm_window_t9_ParamLimits

0xa8e9,	// (0x00025569) popup_midp_note_alarm_window_t9

0xa8fb,	// (0x0002557b) popup_midp_note_alarm_window_t10_ParamLimits

0xa8fb,	// (0x0002557b) popup_midp_note_alarm_window_t10

0xa90d,	// (0x0002558d) popup_midp_note_alarm_window_t11_ParamLimits

0xa90d,	// (0x0002558d) popup_midp_note_alarm_window_t11

0xa91f,	// (0x0002559f) scroll_pane_cp17_ParamLimits

0xa91f,	// (0x0002559f) scroll_pane_cp17

0x6c17,	// (0x00021897) volume_small_pane_cp_g1

0x6f0c,	// (0x00021b8c) volume_small_pane_cp_g2

0x6f15,	// (0x00021b95) volume_small_pane_cp_g3

0x6f1e,	// (0x00021b9e) volume_small_pane_cp_g4

0x6f27,	// (0x00021ba7) volume_small_pane_cp_g5

0x6f30,	// (0x00021bb0) volume_small_pane_cp_g6

0x6f39,	// (0x00021bb9) volume_small_pane_cp_g7

0x6f42,	// (0x00021bc2) volume_small_pane_cp_g8

0x6f4b,	// (0x00021bcb) volume_small_pane_cp_g9

0x6f54,	// (0x00021bd4) volume_small_pane_cp_g10

0x959b,	// (0x0002421b) midp_ticker_pane_g1_ParamLimits

0x95a7,	// (0x00024227) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a3d8) midp_ticker_pane_g_ParamLimits

0x95b3,	// (0x00024233) midp_ticker_pane_t1_ParamLimits

0x9840,	// (0x000244c0) aid_fill_nsta_2

0xa144,	// (0x00024dc4) list_form2_midp_pane

0xb279,	// (0x00025ef9) midp_editing_number_pane_ParamLimits

0xb288,	// (0x00025f08) midp_ticker_pane_ParamLimits

0xbeef,	// (0x00026b6f) form2_midp_field_pane

0xbf13,	// (0x00026b93) scroll_pane_cp51

0xbf3f,	// (0x00026bbf) form2_midp_button_pane_ParamLimits

0xbf3f,	// (0x00026bbf) form2_midp_button_pane

0xbf51,	// (0x00026bd1) form2_midp_content_pane_ParamLimits

0xbf51,	// (0x00026bd1) form2_midp_content_pane

0xbf6b,	// (0x00026beb) form2_midp_field_choice_group_pane

0xbf73,	// (0x00026bf3) form2_midp_field_pane_g1

0xbf7b,	// (0x00026bfb) form2_midp_field_pane_g2

0xbf83,	// (0x00026c03) form2_midp_field_pane_g3

0xbf8b,	// (0x00026c0b) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a75b) form2_midp_field_pane_g

0xbf93,	// (0x00026c13) form2_midp_gauge_slider_pane

0xbf9b,	// (0x00026c1b) form2_midp_gauge_wait_pane

0xbfa3,	// (0x00026c23) form2_midp_image_pane_ParamLimits

0xbfa3,	// (0x00026c23) form2_midp_image_pane

0xbfbe,	// (0x00026c3e) form2_midp_label_pane_ParamLimits

0xbfbe,	// (0x00026c3e) form2_midp_label_pane

0xbfd7,	// (0x00026c57) form2_midp_label_pane_cp_ParamLimits

0xbfd7,	// (0x00026c57) form2_midp_label_pane_cp

0xbff8,	// (0x00026c78) form2_midp_string_pane_ParamLimits

0xbff8,	// (0x00026c78) form2_midp_string_pane

0x5706,	// (0x00020386) form2_midp_text_pane_ParamLimits

0x5706,	// (0x00020386) form2_midp_text_pane

0xc00a,	// (0x00026c8a) form2_midp_time_pane

0xc01a,	// (0x00026c9a) input_focus_pane_cp51_ParamLimits

0xc01a,	// (0x00026c9a) input_focus_pane_cp51

0xc032,	// (0x00026cb2) form2_midp_label_pane_t1_ParamLimits

0xc032,	// (0x00026cb2) form2_midp_label_pane_t1

0x5721,	// (0x000203a1) form2_mdip_text_pane_t1_ParamLimits

0x5721,	// (0x000203a1) form2_mdip_text_pane_t1

0x573f,	// (0x000203bf) form2_midp_time_pane_t1

0xc07b,	// (0x00026cfb) form2_midp_gauge_slider_pane_t1

0xc08d,	// (0x00026d0d) form2_midp_gauge_slider_pane_t2

0xc09f,	// (0x00026d1f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a764) form2_midp_gauge_slider_pane_t

0xc0b1,	// (0x00026d31) form2_midp_slider_pane

0xc0bd,	// (0x00026d3d) form2_midp_gauge_wait_pane_t1

0xc0cb,	// (0x00026d4b) form2_midp_wait_pane_ParamLimits

0xc0cb,	// (0x00026d4b) form2_midp_wait_pane

0x9e3f,	// (0x00024abf) list_single_2graphic_pane_cp4_ParamLimits

0x9e3f,	// (0x00024abf) list_single_2graphic_pane_cp4

0xc0f6,	// (0x00026d76) list_single_midp_graphic_pane_cp_ParamLimits

0xc0f6,	// (0x00026d76) list_single_midp_graphic_pane_cp

0x7ee9,	// (0x00022b69) list_highlight_pane_cp20

0xc125,	// (0x00026da5) list_single_2graphic_pane_g1_cp4

0xc12d,	// (0x00026dad) list_single_2graphic_pane_g2_cp4

0xc135,	// (0x00026db5) list_single_2graphic_pane_t1_cp4

0x7fc9,	// (0x00022c49) list_highlight_pane_cp21

0xc144,	// (0x00026dc4) list_single_midp_graphic_pane_g4_cp

0xc153,	// (0x00026dd3) list_single_midp_graphic_pane_t1_cp

0xc168,	// (0x00026de8) form2_mdip_string_pane_t1_ParamLimits

0xc168,	// (0x00026de8) form2_mdip_string_pane_t1

0x7ee9,	// (0x00022b69) bg_wml_button_pane_cp2

0x7edf,	// (0x00022b5f) form2_midp_image_pane_g1

0x4c44,	// (0x0001f8c4) list_double_large_graphic_pane_g5_ParamLimits

0x4c44,	// (0x0001f8c4) list_double_large_graphic_pane_g5

0x8a1c,	// (0x0002369c) midp_form_pane_ParamLimits

0x7fc9,	// (0x00022c49) main_apps_wheel_pane_ParamLimits

0x68e5,	// (0x00021565) popup_preview_window_ParamLimits

0x68e5,	// (0x00021565) popup_preview_window

0x6aa0,	// (0x00021720) popup_touch_info_window_ParamLimits

0x6aa0,	// (0x00021720) popup_touch_info_window

0x6abe,	// (0x0002173e) popup_touch_menu_window_ParamLimits

0x6abe,	// (0x0002173e) popup_touch_menu_window

0x7ed5,	// (0x00022b55) bg_popup_sub_pane_cp6

0xc261,	// (0x00026ee1) list_touch_menu_pane

0xc269,	// (0x00026ee9) list_single_touch_menu_pane_ParamLimits

0xc269,	// (0x00026ee9) list_single_touch_menu_pane

0xc27f,	// (0x00026eff) list_single_touch_menu_pane_t1

0x7fc9,	// (0x00022c49) bg_popup_sub_pane_cp7_ParamLimits

0x7fc9,	// (0x00022c49) bg_popup_sub_pane_cp7

0xc28d,	// (0x00026f0d) heading_sub_pane

0xc295,	// (0x00026f15) list_touch_info_pane_ParamLimits

0xc295,	// (0x00026f15) list_touch_info_pane

0xc2a4,	// (0x00026f24) list_single_touch_info_pane_ParamLimits

0xc2a4,	// (0x00026f24) list_single_touch_info_pane

0xc2b6,	// (0x00026f36) list_single_touch_info_pane_t1

0xc2c4,	// (0x00026f44) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a772) list_single_touch_info_pane_t

0x94ca,	// (0x0002414a) bg_popup_heading_pane_cp

0xc2d2,	// (0x00026f52) heading_sub_pane_t1

0x9d86,	// (0x00024a06) bg_popup_preview_window_pane_cp_ParamLimits

0x9d86,	// (0x00024a06) bg_popup_preview_window_pane_cp

0xc28d,	// (0x00026f0d) heading_preview_pane

0xc295,	// (0x00026f15) list_preview_pane_ParamLimits

0xc295,	// (0x00026f15) list_preview_pane

0xc2e0,	// (0x00026f60) popup_preview_window_g1

0xc2a4,	// (0x00026f24) list_single_preview_pane_ParamLimits

0xc2a4,	// (0x00026f24) list_single_preview_pane

0xc2e8,	// (0x00026f68) list_single_preview_pane_g1

0xc2f0,	// (0x00026f70) list_single_preview_pane_t1

0xc2b6,	// (0x00026f36) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a777) list_single_preview_pane_t

0xc2fe,	// (0x00026f7e) bg_popup_heading_pane_cp2_ParamLimits

0xc2fe,	// (0x00026f7e) bg_popup_heading_pane_cp2

0xc314,	// (0x00026f94) heading_preview_pane_g1

0xc31c,	// (0x00026f9c) heading_preview_pane_t1_ParamLimits

0xc31c,	// (0x00026f9c) heading_preview_pane_t1

0x80b5,	// (0x00022d35) soft_indicator_pane_t1_ParamLimits

0x87ab,	// (0x0002342b) scroll_pane_ParamLimits

0x8cc0,	// (0x00023940) scroll_sc2_left_pane

0x8cc9,	// (0x00023949) scroll_sc2_right_pane

0x8ce8,	// (0x00023968) scroll_bg_pane_g1_ParamLimits

0x8cfd,	// (0x0002397d) scroll_bg_pane_g2_ParamLimits

0x8d15,	// (0x00023995) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002a363) scroll_bg_pane_g_ParamLimits

0x8ce8,	// (0x00023968) scroll_handle_pane_g1_ParamLimits

0x8d37,	// (0x000239b7) scroll_handle_pane_g2_ParamLimits

0x8d15,	// (0x00023995) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a36a) scroll_handle_pane_g_ParamLimits

0x6566,	// (0x000211e6) popup_choice_list_window_ParamLimits

0x6566,	// (0x000211e6) popup_choice_list_window

0x9c5c,	// (0x000248dc) choice_list_pane

0x9cde,	// (0x0002495e) cell_toolbar_pane_t1

0x9d06,	// (0x00024986) toolbar_button_pane_ParamLimits

0xadd9,	// (0x00025a59) ai_gene_pane_1_t2_ParamLimits

0xadd9,	// (0x00025a59) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a58b) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a58b) ai_gene_pane_1_t

0xc339,	// (0x00026fb9) scroll_sc2_left_pane_g1

0xc339,	// (0x00026fb9) scroll_sc2_right_pane_g1

0x9808,	// (0x00024488) bg_popup_sub_pane_cp10

0xc343,	// (0x00026fc3) list_choice_list_pane

0xc35c,	// (0x00026fdc) list_single_choice_list_pane_ParamLimits

0xc35c,	// (0x00026fdc) list_single_choice_list_pane

0xc36f,	// (0x00026fef) list_single_choice_list_pane_g1

0x89cc,	// (0x0002364c) list_single_choice_list_pane_t1_ParamLimits

0x89cc,	// (0x0002364c) list_single_choice_list_pane_t1

0xc377,	// (0x00026ff7) choice_list_pane_g1

0xc37f,	// (0x00026fff) choice_list_pane_t1

0x7ed5,	// (0x00022b55) input_focus_pane_cp11

0x8ba3,	// (0x00023823) title_pane_stacon_g2_ParamLimits

0x8ba3,	// (0x00023823) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002a349) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002a349) title_pane_stacon_g

0x94ca,	// (0x0002414a) cursor_press_pane

0x6612,	// (0x00021292) popup_fep_hwr_window_ParamLimits

0x6612,	// (0x00021292) popup_fep_hwr_window

0x668c,	// (0x0002130c) popup_fep_vkb_window_ParamLimits

0x668c,	// (0x0002130c) popup_fep_vkb_window

0xc38d,	// (0x0002700d) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a7a0) fep_vkb_side_pane_g_ParamLimits

0x6f96,	// (0x00021c16) fep_hwr_candidate_pane_ParamLimits

0x6f96,	// (0x00021c16) fep_hwr_candidate_pane

0x6fc0,	// (0x00021c40) fep_hwr_side_pane_ParamLimits

0x6fc0,	// (0x00021c40) fep_hwr_side_pane

0x6fe0,	// (0x00021c60) fep_hwr_top_pane_ParamLimits

0x6fe0,	// (0x00021c60) fep_hwr_top_pane

0x6ff8,	// (0x00021c78) fep_hwr_write_pane_ParamLimits

0x6ff8,	// (0x00021c78) fep_hwr_write_pane

0xfb20,	// (0x0002a7a0) fep_vkb_side_pane_g

0xc395,	// (0x00027015) fep_hwr_top_pane_g1

0xc3a7,	// (0x00027027) fep_hwr_top_pane_g2

0x7024,	// (0x00021ca4) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a77c) fep_hwr_top_pane_g

0x7039,	// (0x00021cb9) fep_hwr_top_text_pane

0x8eb7,	// (0x00023b37) fep_hwr_top_text_pane_g1

0xc3dd,	// (0x0002705d) fep_hwr_top_text_pane_t1

0x712f,	// (0x00021daf) fep_hwr_candidate_pane_g1

0xc630,	// (0x000272b0) fep_vkb_keypad_pane_g3_ParamLimits

0xc630,	// (0x000272b0) fep_vkb_keypad_pane_g3

0xc658,	// (0x000272d8) fep_vkb_keypad_pane_g4_ParamLimits

0xc658,	// (0x000272d8) fep_vkb_keypad_pane_g4

0xc6c7,	// (0x00027347) fep_vkb_bottom_pane_g2_ParamLimits

0xc6c7,	// (0x00027347) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a7a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a7a7) fep_vkb_bottom_pane_g

0xc339,	// (0x00026fb9) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a7b1) cell_vkb_side_pane_g

0xc752,	// (0x000273d2) cell_vkb_side_pane_t1

0xc760,	// (0x000273e0) cell_vkb_side_pane_t1_copy1

0xc339,	// (0x00026fb9) bg_fep_vkb_candidate_pane_g2

0xc88c,	// (0x0002750c) cell_vkb_candidate_pane_ParamLimits

0xc3eb,	// (0x0002706b) aid_size_cell_vkb_ParamLimits

0xc3eb,	// (0x0002706b) aid_size_cell_vkb

0xc88c,	// (0x0002750c) cell_vkb_candidate_pane

0x7149,	// (0x00021dc9) bg_popup_fep_shadow_pane_g1

0xc479,	// (0x000270f9) fep_vkb_bottom_pane_ParamLimits

0xc479,	// (0x000270f9) fep_vkb_bottom_pane

0xc4af,	// (0x0002712f) fep_vkb_candidate_pane_ParamLimits

0xc4af,	// (0x0002712f) fep_vkb_candidate_pane

0xc4cb,	// (0x0002714b) fep_vkb_keypad_pane_ParamLimits

0xc4cb,	// (0x0002714b) fep_vkb_keypad_pane

0xc511,	// (0x00027191) fep_vkb_side_pane_ParamLimits

0xc511,	// (0x00027191) fep_vkb_side_pane

0xc54d,	// (0x000271cd) fep_vkb_top_pane_ParamLimits

0xc54d,	// (0x000271cd) fep_vkb_top_pane

0xc589,	// (0x00027209) fep_vkb_top_pane_g1_ParamLimits

0xc589,	// (0x00027209) fep_vkb_top_pane_g1

0xc598,	// (0x00027218) fep_vkb_top_pane_g2_ParamLimits

0xc598,	// (0x00027218) fep_vkb_top_pane_g2

0xc5a7,	// (0x00027227) fep_vkb_top_pane_g3_ParamLimits

0xc5a7,	// (0x00027227) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a797) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a797) fep_vkb_top_pane_g

0xc5c5,	// (0x00027245) fep_vkb_top_text_pane_ParamLimits

0xc5c5,	// (0x00027245) fep_vkb_top_text_pane

0xc5d6,	// (0x00027256) fep_vkb_side_pane_g1_ParamLimits

0xc5d6,	// (0x00027256) fep_vkb_side_pane_g1

0xc61f,	// (0x0002729f) grid_vkb_side_pane_ParamLimits

0xc61f,	// (0x0002729f) grid_vkb_side_pane

0x7151,	// (0x00021dd1) bg_popup_fep_shadow_pane_g2

0x715a,	// (0x00021dda) bg_popup_fep_shadow_pane_g3

0x7162,	// (0x00021de2) bg_popup_fep_shadow_pane_g4

0x716b,	// (0x00021deb) bg_popup_fep_shadow_pane_g5

0x7175,	// (0x00021df5) bg_popup_fep_shadow_pane_g6

0x717d,	// (0x00021dfd) bg_popup_fep_shadow_pane_g7

0x88b3,	// (0x00023533) bg_popup_fep_shadow_pane_g8

0xc676,	// (0x000272f6) grid_vkb_keypad_number_pane_ParamLimits

0xc676,	// (0x000272f6) grid_vkb_keypad_number_pane

0xc686,	// (0x00027306) grid_vkb_keypad_pane_ParamLimits

0xc686,	// (0x00027306) grid_vkb_keypad_pane

0xc6ac,	// (0x0002732c) fep_vkb_bottom_pane_g1_ParamLimits

0xc6ac,	// (0x0002732c) fep_vkb_bottom_pane_g1

0xc6d5,	// (0x00027355) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6d5,	// (0x00027355) grid_vkb_keypad_bottom_left_pane

0xc6ea,	// (0x0002736a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6ea,	// (0x0002736a) grid_vkb_keypad_bottom_right_pane

0xc6ff,	// (0x0002737f) fep_vkb_top_text_pane_g1

0xc71a,	// (0x0002739a) fep_vkb_top_text_pane_t1

0xc72f,	// (0x000273af) cell_vkb_side_pane_ParamLimits

0xc72f,	// (0x000273af) cell_vkb_side_pane

0xc339,	// (0x00026fb9) cell_vkb_side_pane_g1

0xc76e,	// (0x000273ee) cell_vkb_keypad_pane_ParamLimits

0xc76e,	// (0x000273ee) cell_vkb_keypad_pane

0xc7e3,	// (0x00027463) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a7c4) bg_popup_fep_shadow_pane_g

0xc339,	// (0x00026fb9) cell_hwr_side_pane_g1

0xc339,	// (0x00026fb9) cell_hwr_side_pane_g2

0xc7ed,	// (0x0002746d) cell_vkb_keypad_pane_t1

0xc7fb,	// (0x0002747b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7fb,	// (0x0002747b) cell_vkb_keypad_bottom_left_pane

0xc818,	// (0x00027498) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc818,	// (0x00027498) cell_vkb_keypad_bottom_right_pane

0xc339,	// (0x00026fb9) cell_vkb_keypad_bottom_left_pane_g1

0xc339,	// (0x00026fb9) cell_vkb_keypad_bottom_right_pane_g1

0xc851,	// (0x000274d1) cell_vkb_keypad_number_pane_ParamLimits

0xc851,	// (0x000274d1) cell_vkb_keypad_number_pane

0xc870,	// (0x000274f0) cell_vkb_keypad_number_pane_g1

0xc87a,	// (0x000274fa) cell_vkb_keypad_number_pane_g2

0xc883,	// (0x00027503) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a7b6) cell_vkb_keypad_number_pane_g

0xc7ed,	// (0x0002746d) cell_vkb_keypad_number_pane_t1

0xc8a7,	// (0x00027527) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a7b1) cell_hwr_side_pane_g

0xc8c0,	// (0x00027540) cell_hwr_side_pane_t1

0x718f,	// (0x00021e0f) cell_hwr_side_pane_t1_copy1

0xc5b7,	// (0x00027237) cell_hwr_candidate_pane_g1

0x719d,	// (0x00021e1d) cell_hwr_candidate_pane_t1

0xc339,	// (0x00026fb9) cell_vkb_candidate_pane_g2

0xc904,	// (0x00027584) cell_vkb_candidate_pane_t1

0x6f5d,	// (0x00021bdd) bg_popup_fep_shadow_pane_ParamLimits

0x6f5d,	// (0x00021bdd) bg_popup_fep_shadow_pane

0x1e2f,	// (0x0001caaf) bg_fep_hwr_top_pane_g4

0xc3b9,	// (0x00027039) bg_hwr_side_pane_g1_ParamLimits

0xc3b9,	// (0x00027039) bg_hwr_side_pane_g1

0x7075,	// (0x00021cf5) cell_hwr_side_pane_ParamLimits

0x7075,	// (0x00021cf5) cell_hwr_side_pane

0x70b0,	// (0x00021d30) fep_hwr_write_pane_g1_ParamLimits

0x70b0,	// (0x00021d30) fep_hwr_write_pane_g1

0x70bd,	// (0x00021d3d) fep_hwr_write_pane_g2_ParamLimits

0x70bd,	// (0x00021d3d) fep_hwr_write_pane_g2

0x70ca,	// (0x00021d4a) fep_hwr_write_pane_g3_ParamLimits

0x70ca,	// (0x00021d4a) fep_hwr_write_pane_g3

0x70d8,	// (0x00021d58) fep_hwr_write_pane_g4_ParamLimits

0x70d8,	// (0x00021d58) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a783) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a783) fep_hwr_write_pane_g

0x1e2f,	// (0x0001caaf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e2f,	// (0x0001caaf) bg_fep_hwr_candidate_pane_g2

0x70ed,	// (0x00021d6d) cell_hwr_candidate_pane_ParamLimits

0x70ed,	// (0x00021d6d) cell_hwr_candidate_pane

0x712f,	// (0x00021daf) fep_hwr_candidate_pane_g1_ParamLimits

0xc419,	// (0x00027099) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc419,	// (0x00027099) bg_popup_fep_shadow_pane_cp2

0xc5b7,	// (0x00027237) fep_vkb_top_pane_g4_ParamLimits

0xc5b7,	// (0x00027237) fep_vkb_top_pane_g4

0xc5fd,	// (0x0002727d) fep_vkb_side_pane_g2_ParamLimits

0xc5fd,	// (0x0002727d) fep_vkb_side_pane_g2

0x4d87,	// (0x0001fa07) list_setting_pane_t4_ParamLimits

0x4d87,	// (0x0001fa07) list_setting_pane_t4

0x4e21,	// (0x0001faa1) list_setting_number_pane_t5_ParamLimits

0x4e21,	// (0x0001faa1) list_setting_number_pane_t5

0x8efe,	// (0x00023b7e) list_double_heading_pane_cp2_ParamLimits

0x8efe,	// (0x00023b7e) list_double_heading_pane_cp2

0x8846,	// (0x000234c6) list_double_heading_pane_g1_cp2_ParamLimits

0x8846,	// (0x000234c6) list_double_heading_pane_g1_cp2

0x8852,	// (0x000234d2) list_double_heading_pane_g2_cp2_ParamLimits

0x8852,	// (0x000234d2) list_double_heading_pane_g2_cp2

0xc912,	// (0x00027592) list_double_heading_pane_t1_cp2_ParamLimits

0xc912,	// (0x00027592) list_double_heading_pane_t1_cp2

0xc928,	// (0x000275a8) list_double_heading_pane_t2_cp2_ParamLimits

0xc928,	// (0x000275a8) list_double_heading_pane_t2_cp2

0x7ebd,	// (0x00022b3d) aid_value_unit2

0x5dba,	// (0x00020a3a) popup_preview_fixed_window

0x8252,	// (0x00022ed2) bg_popup_preview_window_pane_cp02

0xc93a,	// (0x000275ba) list_preview_fixed_pane

0xc980,	// (0x00027600) list_empty_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_empty_pane_fp

0xc980,	// (0x00027600) list_single_cale_day_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_cale_day_pane_fp

0xc980,	// (0x00027600) list_single_graphic_heading_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_graphic_heading_pane_fp

0xc980,	// (0x00027600) list_single_graphic_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_graphic_pane_fp

0xc980,	// (0x00027600) list_single_heading_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_heading_pane_fp

0xc980,	// (0x00027600) list_single_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_pane_fp

0xc995,	// (0x00027615) list_single_pane_fp_g1_ParamLimits

0xc995,	// (0x00027615) list_single_pane_fp_g1

0x5752,	// (0x000203d2) list_single_pane_fp_g2_ParamLimits

0x5752,	// (0x000203d2) list_single_pane_fp_g2

0x575e,	// (0x000203de) list_single_pane_fp_g3_ParamLimits

0x575e,	// (0x000203de) list_single_pane_fp_g3

0xc9a1,	// (0x00027621) list_single_pane_fp_g4_ParamLimits

0xc9a1,	// (0x00027621) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a7e5) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a7e5) list_single_pane_fp_g

0x5772,	// (0x000203f2) list_single_pane_fp_t1_ParamLimits

0x5772,	// (0x000203f2) list_single_pane_fp_t1

0x5789,	// (0x00020409) list_single_graphic_pane_fp_g1_ParamLimits

0x5789,	// (0x00020409) list_single_graphic_pane_fp_g1

0xc995,	// (0x00027615) list_single_graphic_pane_fp_g2_ParamLimits

0xc995,	// (0x00027615) list_single_graphic_pane_fp_g2

0x5752,	// (0x000203d2) list_single_graphic_pane_fp_g3_ParamLimits

0x5752,	// (0x000203d2) list_single_graphic_pane_fp_g3

0x575e,	// (0x000203de) list_single_graphic_pane_fp_g4_ParamLimits

0x575e,	// (0x000203de) list_single_graphic_pane_fp_g4

0xc9a1,	// (0x00027621) list_single_graphic_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00027621) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7ee) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7ee) list_single_graphic_pane_fp_g

0x5795,	// (0x00020415) list_single_graphic_pane_fp_t1_ParamLimits

0x5795,	// (0x00020415) list_single_graphic_pane_fp_t1

0x5789,	// (0x00020409) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5789,	// (0x00020409) list_single_graphic_heading_pane_fp_g1

0xc995,	// (0x00027615) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc995,	// (0x00027615) list_single_graphic_heading_pane_fp_g2

0x5752,	// (0x000203d2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5752,	// (0x000203d2) list_single_graphic_heading_pane_fp_g3

0x575e,	// (0x000203de) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x575e,	// (0x000203de) list_single_graphic_heading_pane_fp_g4

0xc9a1,	// (0x00027621) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00027621) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7ee) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7ee) list_single_graphic_heading_pane_fp_g

0x57ab,	// (0x0002042b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x57ab,	// (0x0002042b) list_single_graphic_heading_pane_fp_t1

0x57c1,	// (0x00020441) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57c1,	// (0x00020441) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a7f9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a7f9) list_single_graphic_heading_pane_fp_t

0x57d3,	// (0x00020453) list_single_cale_day_pane_fp_g1_ParamLimits

0x57d3,	// (0x00020453) list_single_cale_day_pane_fp_g1

0xc9ad,	// (0x0002762d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9ad,	// (0x0002762d) list_single_cale_day_pane_fp_g2

0x580b,	// (0x0002048b) list_single_cale_day_pane_fp_g3_ParamLimits

0x580b,	// (0x0002048b) list_single_cale_day_pane_fp_g3

0x5833,	// (0x000204b3) list_single_cale_day_pane_fp_g4_ParamLimits

0x5833,	// (0x000204b3) list_single_cale_day_pane_fp_g4

0x5857,	// (0x000204d7) list_single_cale_day_pane_fp_g5_ParamLimits

0x5857,	// (0x000204d7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a7fe) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a7fe) list_single_cale_day_pane_fp_g

0x587b,	// (0x000204fb) list_single_cale_day_pane_fp_t1_ParamLimits

0x587b,	// (0x000204fb) list_single_cale_day_pane_fp_t1

0x58a1,	// (0x00020521) list_single_cale_day_pane_fp_t2_ParamLimits

0x58a1,	// (0x00020521) list_single_cale_day_pane_fp_t2

0x58ba,	// (0x0002053a) list_single_cale_day_pane_fp_t3_ParamLimits

0x58ba,	// (0x0002053a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a809) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a809) list_single_cale_day_pane_fp_t

0xc995,	// (0x00027615) list_empty_pane_fp_g1_ParamLimits

0xc995,	// (0x00027615) list_empty_pane_fp_g1

0x58d3,	// (0x00020553) list_empty_pane_fp_t1

0x58e1,	// (0x00020561) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a810) list_empty_pane_fp_t

0xc995,	// (0x00027615) list_single_heading_pane_fp_g1_ParamLimits

0xc995,	// (0x00027615) list_single_heading_pane_fp_g1

0x5752,	// (0x000203d2) list_single_heading_pane_fp_g2_ParamLimits

0x5752,	// (0x000203d2) list_single_heading_pane_fp_g2

0x575e,	// (0x000203de) list_single_heading_pane_fp_g3_ParamLimits

0x575e,	// (0x000203de) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a815) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a815) list_single_heading_pane_fp_g

0x58ef,	// (0x0002056f) list_single_heading_pane_fp_t1_ParamLimits

0x58ef,	// (0x0002056f) list_single_heading_pane_fp_t1

0x5901,	// (0x00020581) list_single_heading_pane_fp_t2_ParamLimits

0x5901,	// (0x00020581) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a81c) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a81c) list_single_heading_pane_fp_t

0x8a3a,	// (0x000236ba) aid_size_cell_fast

0x81c2,	// (0x00022e42) soft_indicator_pane_cp1_t1

0x8a77,	// (0x000236f7) cell_app_pane_cp2_ParamLimits

0x8a77,	// (0x000236f7) cell_app_pane_cp2

0x6f7f,	// (0x00021bff) fep_hwr_candidate_drop_down_list_pane

0x1e3d,	// (0x0001cabd) fep_hwr_candidate_pane_g3_ParamLimits

0x1e3d,	// (0x0001cabd) fep_hwr_candidate_pane_g3

0x1e4a,	// (0x0001caca) fep_hwr_candidate_pane_g4_ParamLimits

0x1e4a,	// (0x0001caca) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a790) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a790) fep_hwr_candidate_pane_g

0xc49e,	// (0x0002711e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc49e,	// (0x0002711e) fep_vkb_candidate_drop_down_list_pane

0xc8af,	// (0x0002752f) fep_vkb_candidate_pane_g3

0xc8b7,	// (0x00027537) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a7bd) fep_vkb_candidate_pane_g

0xc5b7,	// (0x00027237) cell_hwr_candidate_pane_g1_ParamLimits

0xca15,	// (0x00027695) cell_hwr_candidate_pane_g3_ParamLimits

0xca15,	// (0x00027695) cell_hwr_candidate_pane_g3

0xca36,	// (0x000276b6) cell_hwr_candidate_pane_g4_ParamLimits

0xca36,	// (0x000276b6) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a7d7) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a7d7) cell_hwr_candidate_pane_g

0xc8ce,	// (0x0002754e) cell_vkb_candidate_pane_g3_ParamLimits

0xc8ce,	// (0x0002754e) cell_vkb_candidate_pane_g3

0xc8e9,	// (0x00027569) cell_vkb_candidate_pane_g4_ParamLimits

0xc8e9,	// (0x00027569) cell_vkb_candidate_pane_g4

0xc9b9,	// (0x00027639) cell_app_pane_cp2_g1_ParamLimits

0xc9b9,	// (0x00027639) cell_app_pane_cp2_g1

0xc9d7,	// (0x00027657) cell_app_pane_cp2_g2_ParamLimits

0xc9d7,	// (0x00027657) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a821) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a821) cell_app_pane_cp2_g

0xc9e3,	// (0x00027663) cell_app_pane_cp2_t1_ParamLimits

0xc9e3,	// (0x00027663) cell_app_pane_cp2_t1

0x8838,	// (0x000234b8) grid_highlight_pane_cp1_ParamLimits

0x8838,	// (0x000234b8) grid_highlight_pane_cp1

0x71bb,	// (0x00021e3b) cell_hwr_candidate_pane_cp1_ParamLimits

0x71bb,	// (0x00021e3b) cell_hwr_candidate_pane_cp1

0xc5b7,	// (0x00027237) fep_hwr_candidate_drop_down_list_pane_g1

0xca57,	// (0x000276d7) fep_hwr_candidate_drop_down_list_pane_g2

0xca64,	// (0x000276e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a826) fep_hwr_candidate_drop_down_list_pane_g

0x71da,	// (0x00021e5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x71e3,	// (0x00021e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71e3,	// (0x00021e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71f0,	// (0x00021e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71f0,	// (0x00021e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71fd,	// (0x00021e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71fd,	// (0x00021e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8ce,	// (0x0002754e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8ce,	// (0x0002754e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8e9,	// (0x00027569) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8e9,	// (0x00027569) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x720a,	// (0x00021e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x720a,	// (0x00021e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7225,	// (0x00021ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7225,	// (0x00021ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7240,	// (0x00021ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7240,	// (0x00021ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a82d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a82d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9f5,	// (0x00027675) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9f5,	// (0x00027675) cell_vkb_candidate_pane_cp1

0xc5b7,	// (0x00027237) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) fep_vkb_candidate_drop_down_list_pane_g1

0xca57,	// (0x000276d7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca57,	// (0x000276d7) fep_vkb_candidate_drop_down_list_pane_g2

0xca64,	// (0x000276e4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca64,	// (0x000276e4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a826) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a826) fep_vkb_candidate_drop_down_list_pane_g

0xca71,	// (0x000276f1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca71,	// (0x000276f1) fep_vkb_candidate_drop_down_list_scroll_pane

0xca7e,	// (0x000276fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca7e,	// (0x000276fe) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca8b,	// (0x0002770b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca8b,	// (0x0002770b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca97,	// (0x00027717) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca97,	// (0x00027717) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca15,	// (0x00027695) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca15,	// (0x00027695) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca36,	// (0x000276b6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca36,	// (0x000276b6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcaa3,	// (0x00027723) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcaa3,	// (0x00027723) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcac4,	// (0x00027744) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcac4,	// (0x00027744) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcae5,	// (0x00027765) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcae5,	// (0x00027765) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a83e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a83e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ef3,	// (0x00022b73) title_pane_g1_ParamLimits

0x7f00,	// (0x00022b80) title_pane_g2_ParamLimits

0xf54e,	// (0x0002a1ce) title_pane_g_ParamLimits

0x8ea7,	// (0x00023b27) aid_call2_pane

0x8eaf,	// (0x00023b2f) aid_call_pane

0x8eb7,	// (0x00023b37) popup_clock_analogue_window_g1

0x8eb7,	// (0x00023b37) popup_clock_analogue_window_g2

0x612b,	// (0x00020dab) popup_clock_analogue_window_g3

0x6134,	// (0x00020db4) popup_clock_analogue_window_g4

0x7edf,	// (0x00022b5f) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a378) popup_clock_analogue_window_g

0x613c,	// (0x00020dbc) popup_clock_analogue_window_t1

0x614a,	// (0x00020dca) clock_digital_number_pane_ParamLimits

0x614a,	// (0x00020dca) clock_digital_number_pane

0x6156,	// (0x00020dd6) clock_digital_number_pane_cp02_ParamLimits

0x6156,	// (0x00020dd6) clock_digital_number_pane_cp02

0x6162,	// (0x00020de2) clock_digital_number_pane_cp03_ParamLimits

0x6162,	// (0x00020de2) clock_digital_number_pane_cp03

0x616e,	// (0x00020dee) clock_digital_number_pane_cp04_ParamLimits

0x616e,	// (0x00020dee) clock_digital_number_pane_cp04

0x617a,	// (0x00020dfa) clock_digital_separator_pane_ParamLimits

0x617a,	// (0x00020dfa) clock_digital_separator_pane

0x6186,	// (0x00020e06) popup_clock_digital_window_t1_ParamLimits

0x6186,	// (0x00020e06) popup_clock_digital_window_t1

0x7edf,	// (0x00022b5f) clock_digital_number_pane_g1

0x7edf,	// (0x00022b5f) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a383) clock_digital_number_pane_g

0x7edf,	// (0x00022b5f) clock_digital_separator_pane_g1

0x7edf,	// (0x00022b5f) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a383) clock_digital_separator_pane_g

0x982a,	// (0x000244aa) aid_fill_nsta_ParamLimits

0x9970,	// (0x000245f0) indicator_nsta_pane_ParamLimits

0x9ae9,	// (0x00024769) popup_clock_analogue_window

0x9ae9,	// (0x00024769) popup_clock_digital_window

0x7fc9,	// (0x00022c49) grid_indicator_nsta_pane_ParamLimits

0xbd2a,	// (0x000269aa) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a710) clock_nsta_pane_t

0x60ef,	// (0x00020d6f) aid_size_max_handle

0x60f9,	// (0x00020d79) aid_size_min_handle

0x94ca,	// (0x0002414a) editor_scroll_pane

0xcb00,	// (0x00027780) ex_editor_pane

0x89a8,	// (0x00023628) scroll_pane_cp13

0x87d7,	// (0x00023457) scroll_pane_cp14

0x8ee6,	// (0x00023b66) scroll_pane_cp36

0x8f12,	// (0x00023b92) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f12,	// (0x00023b92) list_single_graphic_hl_pane_cp2

0xb2da,	// (0x00025f5a) list_single_graphic_hl_pane_ParamLimits

0xb2da,	// (0x00025f5a) list_single_graphic_hl_pane

0x5917,	// (0x00020597) aid_size_min_hl_cp1

0xcb08,	// (0x00027788) list_highlight_pane_cp34_ParamLimits

0xcb08,	// (0x00027788) list_highlight_pane_cp34

0xcb19,	// (0x00027799) list_single_graphic_hl_pane_g1_ParamLimits

0xcb19,	// (0x00027799) list_single_graphic_hl_pane_g1

0x5920,	// (0x000205a0) list_single_graphic_hl_pane_g2_ParamLimits

0x5920,	// (0x000205a0) list_single_graphic_hl_pane_g2

0x5920,	// (0x000205a0) list_single_graphic_hl_pane_g3_ParamLimits

0x5920,	// (0x000205a0) list_single_graphic_hl_pane_g3

0x592c,	// (0x000205ac) list_single_graphic_hl_pane_g4_ParamLimits

0x592c,	// (0x000205ac) list_single_graphic_hl_pane_g4

0x5938,	// (0x000205b8) list_single_graphic_hl_pane_g5_ParamLimits

0x5938,	// (0x000205b8) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a84f) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a84f) list_single_graphic_hl_pane_g

0x594c,	// (0x000205cc) list_single_graphic_hl_pane_t1_ParamLimits

0x594c,	// (0x000205cc) list_single_graphic_hl_pane_t1

0xcb26,	// (0x000277a6) aid_size_min_hl_cp2

0xcb2f,	// (0x000277af) list_highlight_pane_cp34_cp2_ParamLimits

0xcb2f,	// (0x000277af) list_highlight_pane_cp34_cp2

0xcb19,	// (0x00027799) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb19,	// (0x00027799) list_single_graphic_hl_pane_g1_cp2

0xcb3c,	// (0x000277bc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb3c,	// (0x000277bc) list_single_graphic_hl_pane_g2_cp2

0xcb48,	// (0x000277c8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb48,	// (0x000277c8) list_single_graphic_hl_pane_g3_cp2

0xbf1f,	// (0x00026b9f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf1f,	// (0x00026b9f) list_single_graphic_hl_pane_g4_cp2

0xcb56,	// (0x000277d6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb56,	// (0x000277d6) list_single_graphic_hl_pane_g5_cp2

0x643a,	// (0x000210ba) control_pane_g4_ParamLimits

0x643a,	// (0x000210ba) control_pane_g4

0x9808,	// (0x00024488) bg_popup_sub_pane_cp10_ParamLimits

0xc343,	// (0x00026fc3) list_choice_list_pane_ParamLimits

0xc352,	// (0x00026fd2) scroll_pane_cp23

0x8252,	// (0x00022ed2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93a,	// (0x000275ba) list_preview_fixed_pane_ParamLimits

0xc950,	// (0x000275d0) list_preview_fixed_pane_cp_ParamLimits

0xc950,	// (0x000275d0) list_preview_fixed_pane_cp

0xc95c,	// (0x000275dc) popup_preview_fixed_window_g1_ParamLimits

0xc95c,	// (0x000275dc) popup_preview_fixed_window_g1

0xc968,	// (0x000275e8) popup_preview_fixed_window_g2_ParamLimits

0xc968,	// (0x000275e8) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a7de) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a7de) popup_preview_fixed_window_g

0x6063,	// (0x00020ce3) aid_navi_side_left_pane_ParamLimits

0x6078,	// (0x00020cf8) aid_navi_side_right_pane_ParamLimits

0x6090,	// (0x00020d10) navi_icon_pane_stacon_ParamLimits

0x60a4,	// (0x00020d24) navi_navi_pane_stacon_ParamLimits

0x6090,	// (0x00020d10) navi_text_pane_stacon_ParamLimits

0x7ed5,	// (0x00022b55) main_text_info_pane

0xcb80,	// (0x00027800) listscroll_text_info_pane

0xcb88,	// (0x00027808) list_text_info_pane_ParamLimits

0xcb88,	// (0x00027808) list_text_info_pane

0xcb97,	// (0x00027817) scroll_pane_cp24_ParamLimits

0xcb97,	// (0x00027817) scroll_pane_cp24

0xcbb5,	// (0x00027835) list_text_info_pane_t1_ParamLimits

0xcbb5,	// (0x00027835) list_text_info_pane_t1

0x6584,	// (0x00021204) popup_fast_swap2_window_ParamLimits

0x6584,	// (0x00021204) popup_fast_swap2_window

0xcbe6,	// (0x00027866) aid_size_cell_fast2

0x7ed5,	// (0x00022b55) bg_popup_window_pane_cp17

0xa170,	// (0x00024df0) heading_pane_cp2

0x84a1,	// (0x00023121) listscroll_fast2_pane

0xcbf0,	// (0x00027870) grid_fast2_pane

0xcbfa,	// (0x0002787a) listscroll_fast2_pane_g1

0xcc02,	// (0x00027882) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a85a) listscroll_fast2_pane_g

0x89a8,	// (0x00023628) scroll_pane_cp26

0xcc0c,	// (0x0002788c) cell_fast2_pane_ParamLimits

0xcc0c,	// (0x0002788c) cell_fast2_pane

0xcc21,	// (0x000278a1) cell_fast2_pane_g1

0xcc2a,	// (0x000278aa) cell_fast2_pane_g2

0xcc33,	// (0x000278b3) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a85f) cell_fast2_pane_g

0x8594,	// (0x00023214) grid_highlight_pane_cp9

0x85a9,	// (0x00023229) main_eswt_pane_ParamLimits

0x85a9,	// (0x00023229) main_eswt_pane

0xcbac,	// (0x0002782c) list_single_text_info_pane

0xcc3b,	// (0x000278bb) eswt_ctrl_button_pane

0xcc3b,	// (0x000278bb) eswt_ctrl_canvas_pane

0xcc43,	// (0x000278c3) eswt_ctrl_combo_pane

0xcc3b,	// (0x000278bb) eswt_ctrl_default_pane

0xcc3b,	// (0x000278bb) eswt_ctrl_label_pane

0xcc4b,	// (0x000278cb) eswt_ctrl_wait_pane

0xcc53,	// (0x000278d3) eswt_shell_pane

0x7ed5,	// (0x00022b55) listscroll_eswt_app_pane

0xcc73,	// (0x000278f3) popup_eswt_tasktip_window_ParamLimits

0xcc73,	// (0x000278f3) popup_eswt_tasktip_window

0x9d86,	// (0x00024a06) bg_popup_window_pane_cp18

0xcc84,	// (0x00027904) eswt_control_pane_g1_ParamLimits

0xcc84,	// (0x00027904) eswt_control_pane_g1

0xcc91,	// (0x00027911) eswt_control_pane_g2_ParamLimits

0xcc91,	// (0x00027911) eswt_control_pane_g2

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_ParamLimits

0xcc9e,	// (0x0002791e) eswt_control_pane_g3

0xccab,	// (0x0002792b) eswt_control_pane_g4_ParamLimits

0xccab,	// (0x0002792b) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a866) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a866) eswt_control_pane_g

0x8838,	// (0x000234b8) bg_button_pane_ParamLimits

0x8838,	// (0x000234b8) bg_button_pane

0x85a9,	// (0x00023229) common_borders_pane_copy2_ParamLimits

0x85a9,	// (0x00023229) common_borders_pane_copy2

0xccb8,	// (0x00027938) control_button_pane_g1_ParamLimits

0xccb8,	// (0x00027938) control_button_pane_g1

0xccc4,	// (0x00027944) control_button_pane_g2_ParamLimits

0xccc4,	// (0x00027944) control_button_pane_g2

0xccd0,	// (0x00027950) control_button_pane_g3_ParamLimits

0xccd0,	// (0x00027950) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a86f) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a86f) control_button_pane_g

0xcce4,	// (0x00027964) control_button_pane_t1

0xccf2,	// (0x00027972) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a876) control_button_pane_t

0x9d12,	// (0x00024992) bg_button_pane_g1

0x9d1a,	// (0x0002499a) bg_button_pane_g2

0x9d22,	// (0x000249a2) bg_button_pane_g3

0x9d2a,	// (0x000249aa) bg_button_pane_g4

0x9d32,	// (0x000249b2) bg_button_pane_g5

0x9d3a,	// (0x000249ba) bg_button_pane_g6

0x9d42,	// (0x000249c2) bg_button_pane_g7

0x9d4a,	// (0x000249ca) bg_button_pane_g8

0x9d52,	// (0x000249d2) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a4df) bg_button_pane_g

0xc2fe,	// (0x00026f7e) common_borders_pane_ParamLimits

0xc2fe,	// (0x00026f7e) common_borders_pane

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy1_ParamLimits

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy1

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy1_ParamLimits

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy1

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy1_ParamLimits

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy1

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy1_ParamLimits

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy1

0xc339,	// (0x00026fb9) bg_eswt_ctrl_canvas_pane_g1

0xc2fe,	// (0x00026f7e) common_borders_pane_cp2_ParamLimits

0xc2fe,	// (0x00026f7e) common_borders_pane_cp2

0xc2fe,	// (0x00026f7e) common_borders_pane_cp3_ParamLimits

0xc2fe,	// (0x00026f7e) common_borders_pane_cp3

0xcd00,	// (0x00027980) separator_horizontal_pane

0xcd08,	// (0x00027988) separator_vertical_pane

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy2_ParamLimits

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy2

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy2_ParamLimits

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy2

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy2_ParamLimits

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy2

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy2_ParamLimits

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy2

0x7ed5,	// (0x00022b55) common_borders_pane_cp4

0xcd11,	// (0x00027991) separator_horizontal_pane_g1

0xcd1a,	// (0x0002799a) separator_horizontal_pane_g2

0xcd23,	// (0x000279a3) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a87b) separator_horizontal_pane_g

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy3_ParamLimits

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy3

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy3_ParamLimits

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy3

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy3_ParamLimits

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy3

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy3_ParamLimits

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy3

0x7ed5,	// (0x00022b55) common_borders_pane_cp5

0xcd2c,	// (0x000279ac) separator_vertical_pane_g1

0xcd35,	// (0x000279b5) separator_vertical_pane_g2

0xcd3e,	// (0x000279be) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a882) separator_vertical_pane_g

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy4_ParamLimits

0xcc84,	// (0x00027904) eswt_control_pane_g1_copy4

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy4_ParamLimits

0xcc91,	// (0x00027911) eswt_control_pane_g2_copy4

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy4_ParamLimits

0xcc9e,	// (0x0002791e) eswt_control_pane_g3_copy4

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy4_ParamLimits

0xccab,	// (0x0002792b) eswt_control_pane_g4_copy4

0xcd47,	// (0x000279c7) eswt_ctrl_combo_button_pane

0xcd4f,	// (0x000279cf) eswt_ctrl_input_pane

0xcd57,	// (0x000279d7) popup_choice_list_window_cp70

0xcd5f,	// (0x000279df) eswt_ctrl_input_pane_t1

0x7ed5,	// (0x00022b55) input_focus_pane_cp70

0xc2fe,	// (0x00026f7e) bg_button_pane_cp70_ParamLimits

0xc2fe,	// (0x00026f7e) bg_button_pane_cp70

0xcd6d,	// (0x000279ed) eswt_ctrl_combo_button_pane_g1

0xcd75,	// (0x000279f5) wait_bar_pane_cp70

0x9d86,	// (0x00024a06) bg_popup_window_pane_cp70_ParamLimits

0x9d86,	// (0x00024a06) bg_popup_window_pane_cp70

0xcd7d,	// (0x000279fd) popup_eswt_tasktip_window_t1

0xcd93,	// (0x00027a13) wait_bar_pane_cp71_ParamLimits

0xcd93,	// (0x00027a13) wait_bar_pane_cp71

0xcd9f,	// (0x00027a1f) grid_eswt_app_pane

0x8cc9,	// (0x00023949) scroll_pane_cp70

0xcda8,	// (0x00027a28) cell_eswt_app_pane_ParamLimits

0xcda8,	// (0x00027a28) cell_eswt_app_pane

0xcdd8,	// (0x00027a58) cell_eswt_app_pane_g1_ParamLimits

0xcdd8,	// (0x00027a58) cell_eswt_app_pane_g1

0xce07,	// (0x00027a87) cell_eswt_app_pane_g2_ParamLimits

0xce07,	// (0x00027a87) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a889) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a889) cell_eswt_app_pane_g

0xce30,	// (0x00027ab0) cell_eswt_app_pane_t1_ParamLimits

0xce30,	// (0x00027ab0) cell_eswt_app_pane_t1

0xce62,	// (0x00027ae2) grid_highlight_pane_cp70_ParamLimits

0xce62,	// (0x00027ae2) grid_highlight_pane_cp70

0x939f,	// (0x0002401f) set_content_pane_g1

0x9769,	// (0x000243e9) status_small_volume_pane

0x725b,	// (0x00021edb) status_small_volume_pane_g1

0x7263,	// (0x00021ee3) volume_small2_pane

0x726c,	// (0x00021eec) volume_small2_pane_g1

0x7275,	// (0x00021ef5) volume_small2_pane_g2

0x727e,	// (0x00021efe) volume_small2_pane_g3

0x7287,	// (0x00021f07) volume_small2_pane_g4

0x7290,	// (0x00021f10) volume_small2_pane_g5

0x7299,	// (0x00021f19) volume_small2_pane_g6

0x72a2,	// (0x00021f22) volume_small2_pane_g7

0x72ab,	// (0x00021f2b) volume_small2_pane_g8

0x72b4,	// (0x00021f34) volume_small2_pane_g9

0x72bd,	// (0x00021f3d) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a88e) volume_small2_pane_g

0xc6ff,	// (0x0002737f) fep_vkb_top_text_pane_g1_ParamLimits

0xc71a,	// (0x0002739a) fep_vkb_top_text_pane_t1_ParamLimits

0xc974,	// (0x000275f4) popup_preview_fixed_window_g3_ParamLimits

0xc974,	// (0x000275f4) popup_preview_fixed_window_g3

0x6a33,	// (0x000216b3) popup_toolbar_trans_pane

0xb0e1,	// (0x00025d61) aid_height_set_list_ParamLimits

0xb0f2,	// (0x00025d72) aid_size_parent_ParamLimits

0x9808,	// (0x00024488) list_highlight_pane_cp2_ParamLimits

0x939f,	// (0x0002401f) set_content_pane_g1_ParamLimits

0xb2f6,	// (0x00025f76) list_single_image_pane_ParamLimits

0xb2f6,	// (0x00025f76) list_single_image_pane

0xce6e,	// (0x00027aee) aid_size_cell_image_ParamLimits

0xce6e,	// (0x00027aee) aid_size_cell_image

0xce7b,	// (0x00027afb) grid_single_image_pane_ParamLimits

0xce7b,	// (0x00027afb) grid_single_image_pane

0xa1c4,	// (0x00024e44) list_single_image_pane_g1_ParamLimits

0xa1c4,	// (0x00024e44) list_single_image_pane_g1

0xce87,	// (0x00027b07) list_single_image_pane_g2_ParamLimits

0xce87,	// (0x00027b07) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a8a3) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a8a3) list_single_image_pane_g

0xce9b,	// (0x00027b1b) list_single_image_pane_t1_ParamLimits

0xce9b,	// (0x00027b1b) list_single_image_pane_t1

0xceb1,	// (0x00027b31) cell_image_list_pane_ParamLimits

0xceb1,	// (0x00027b31) cell_image_list_pane

0xcec5,	// (0x00027b45) cell_image_list_pane_g1

0xcece,	// (0x00027b4e) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a8a8) cell_image_list_pane_g

0xced7,	// (0x00027b57) aid_size_cell_tb_trans_pane

0x8838,	// (0x000234b8) bg_tb_trans_pane

0xcee9,	// (0x00027b69) grid_tb_trans_pane

0x9d12,	// (0x00024992) bg_tb_trans_pane_g1

0x9d1a,	// (0x0002499a) bg_tb_trans_pane_g2

0x9d22,	// (0x000249a2) bg_tb_trans_pane_g3

0x9d2a,	// (0x000249aa) bg_tb_trans_pane_g4

0x9d32,	// (0x000249b2) bg_tb_trans_pane_g5

0x9d4a,	// (0x000249ca) bg_tb_trans_pane_g6

0x9d52,	// (0x000249d2) bg_tb_trans_pane_g7

0x9d3a,	// (0x000249ba) bg_tb_trans_pane_g8

0x9d42,	// (0x000249c2) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a8ad) bg_tb_trans_pane_g

0xcefd,	// (0x00027b7d) cell_toolbar_trans_pane_ParamLimits

0xcefd,	// (0x00027b7d) cell_toolbar_trans_pane

0xc339,	// (0x00026fb9) cell_toolbar_trans_pane_g1

0xbef7,	// (0x00026b77) list_form2_midp_pane_t1

0xbf05,	// (0x00026b85) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a756) list_form2_midp_pane_t

0xbf13,	// (0x00026b93) scroll_pane_cp51_ParamLimits

0xc0db,	// (0x00026d5b) form2_midp_wait_pane_g1

0xc0e4,	// (0x00026d64) form2_midp_wait_pane_g2

0xc0ed,	// (0x00026d6d) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a76b) form2_midp_wait_pane_g

0x7fc9,	// (0x00022c49) list_highlight_pane_cp21_ParamLimits

0xc144,	// (0x00026dc4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc153,	// (0x00026dd3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5366,	// (0x0001ffe6) list_single_2graphic_im_pane_ParamLimits

0x5366,	// (0x0001ffe6) list_single_2graphic_im_pane

0xcf23,	// (0x00027ba3) list_single_2graphic_im_pane_g1_ParamLimits

0xcf23,	// (0x00027ba3) list_single_2graphic_im_pane_g1

0xcf34,	// (0x00027bb4) list_single_2graphic_im_pane_g2_ParamLimits

0xcf34,	// (0x00027bb4) list_single_2graphic_im_pane_g2

0xcf40,	// (0x00027bc0) list_single_2graphic_im_pane_g3_ParamLimits

0xcf40,	// (0x00027bc0) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a8c0) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a8c0) list_single_2graphic_im_pane_g

0xcf60,	// (0x00027be0) list_single_2graphic_im_pane_t1_ParamLimits

0xcf60,	// (0x00027be0) list_single_2graphic_im_pane_t1

0xc980,	// (0x00027600) list_single_graphic_2heading_pane_fp_ParamLimits

0xc980,	// (0x00027600) list_single_graphic_2heading_pane_fp

0x5789,	// (0x00020409) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5789,	// (0x00020409) list_single_graphic_2heading_pane_fp_g1

0xc995,	// (0x00027615) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc995,	// (0x00027615) list_single_graphic_2heading_pane_fp_g2

0x5752,	// (0x000203d2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5752,	// (0x000203d2) list_single_graphic_2heading_pane_fp_g3

0x575e,	// (0x000203de) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x575e,	// (0x000203de) list_single_graphic_2heading_pane_fp_g4

0xc9a1,	// (0x00027621) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x00027621) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a7ee) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a7ee) list_single_graphic_2heading_pane_fp_g

0x5962,	// (0x000205e2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5962,	// (0x000205e2) list_single_graphic_2heading_pane_fp_t1

0x57c1,	// (0x00020441) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57c1,	// (0x00020441) list_single_graphic_2heading_pane_fp_t2

0x5978,	// (0x000205f8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5978,	// (0x000205f8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a8c9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a8c9) list_single_graphic_2heading_pane_fp_t

0xc3c5,	// (0x00027045) fep_hwr_write_pane_g5_ParamLimits

0xc3c5,	// (0x00027045) fep_hwr_write_pane_g5

0xc3d1,	// (0x00027051) fep_hwr_write_pane_g6_ParamLimits

0xc3d1,	// (0x00027051) fep_hwr_write_pane_g6

0xcc53,	// (0x000278d3) eswt_shell_pane_ParamLimits

0x9d86,	// (0x00024a06) bg_popup_window_pane_cp18_ParamLimits

0xb03a,	// (0x00025cba) heading_pane_cp70

0xcd7d,	// (0x000279fd) popup_eswt_tasktip_window_t1_ParamLimits

0x987f,	// (0x000244ff) aid_touch_tab_arrow_left

0x988e,	// (0x0002450e) aid_touch_tab_arrow_right

0x7f11,	// (0x00022b91) title_pane_g3_ParamLimits

0x7f11,	// (0x00022b91) title_pane_g3

0x87f7,	// (0x00023477) set_value_pane_g1

0x6a33,	// (0x000216b3) popup_toolbar_trans_pane_ParamLimits

0xced7,	// (0x00027b57) aid_size_cell_tb_trans_pane_ParamLimits

0x8838,	// (0x000234b8) bg_tb_trans_pane_ParamLimits

0xcee9,	// (0x00027b69) grid_tb_trans_pane_ParamLimits

0x8252,	// (0x00022ed2) cont_note_pane_ParamLimits

0x8252,	// (0x00022ed2) cont_note_pane

0x85a9,	// (0x00023229) cont_snote2_single_text_pane_ParamLimits

0x85a9,	// (0x00023229) cont_snote2_single_text_pane

0x85a9,	// (0x00023229) cont_snote2_single_graphic_pane_ParamLimits

0x85a9,	// (0x00023229) cont_snote2_single_graphic_pane

0xa397,	// (0x00025017) cont_note_wait_pane_ParamLimits

0xa397,	// (0x00025017) cont_note_wait_pane

0xa397,	// (0x00025017) cont_note_image_pane_ParamLimits

0xa397,	// (0x00025017) cont_note_image_pane

0xcf91,	// (0x00027c11) popup_note2_window_g1_ParamLimits

0xcf91,	// (0x00027c11) popup_note2_window_g1

0xcfc2,	// (0x00027c42) popup_note2_window_t1_ParamLimits

0xcfc2,	// (0x00027c42) popup_note2_window_t1

0xd007,	// (0x00027c87) popup_note2_window_t2_ParamLimits

0xd007,	// (0x00027c87) popup_note2_window_t2

0xd04c,	// (0x00027ccc) popup_note2_window_t3_ParamLimits

0xd04c,	// (0x00027ccc) popup_note2_window_t3

0xd091,	// (0x00027d11) popup_note2_window_t4_ParamLimits

0xd091,	// (0x00027d11) popup_note2_window_t4

0x82d6,	// (0x00022f56) popup_note2_window_t5_ParamLimits

0x82d6,	// (0x00022f56) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a8d5) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a8d5) popup_note2_window_t

0xd0c0,	// (0x00027d40) popup_note2_image_window_g1_ParamLimits

0xd0c0,	// (0x00027d40) popup_note2_image_window_g1

0xd0cc,	// (0x00027d4c) popup_note2_image_window_g2_ParamLimits

0xd0cc,	// (0x00027d4c) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a8e0) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a8e0) popup_note2_image_window_g

0xd0de,	// (0x00027d5e) popup_note2_image_window_t1_ParamLimits

0xd0de,	// (0x00027d5e) popup_note2_image_window_t1

0xd0f6,	// (0x00027d76) popup_note2_image_window_t2_ParamLimits

0xd0f6,	// (0x00027d76) popup_note2_image_window_t2

0xd10e,	// (0x00027d8e) popup_note2_image_window_t3_ParamLimits

0xd10e,	// (0x00027d8e) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a8e5) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a8e5) popup_note2_image_window_t

0xa3a5,	// (0x00025025) popup_note2_wait_window_g1_ParamLimits

0xa3a5,	// (0x00025025) popup_note2_wait_window_g1

0xd12a,	// (0x00027daa) popup_note2_wait_window_g2_ParamLimits

0xd12a,	// (0x00027daa) popup_note2_wait_window_g2

0xa3bd,	// (0x0002503d) popup_note2_wait_window_g3_ParamLimits

0xa3bd,	// (0x0002503d) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a8ec) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a8ec) popup_note2_wait_window_g

0xd136,	// (0x00027db6) popup_note2_wait_window_t1_ParamLimits

0xd136,	// (0x00027db6) popup_note2_wait_window_t1

0xd154,	// (0x00027dd4) popup_note2_wait_window_t2_ParamLimits

0xd154,	// (0x00027dd4) popup_note2_wait_window_t2

0xd172,	// (0x00027df2) popup_note2_wait_window_t3_ParamLimits

0xd172,	// (0x00027df2) popup_note2_wait_window_t3

0xd184,	// (0x00027e04) popup_note2_wait_window_t4_ParamLimits

0xd184,	// (0x00027e04) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a8f3) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a8f3) popup_note2_wait_window_t

0xd196,	// (0x00027e16) wait_bar2_pane_ParamLimits

0xd196,	// (0x00027e16) wait_bar2_pane

0xd1ae,	// (0x00027e2e) popup_snote2_single_text_window_g1_ParamLimits

0xd1ae,	// (0x00027e2e) popup_snote2_single_text_window_g1

0xd1d6,	// (0x00027e56) popup_snote2_single_text_window_t1_ParamLimits

0xd1d6,	// (0x00027e56) popup_snote2_single_text_window_t1

0xd222,	// (0x00027ea2) popup_snote2_single_text_window_t2_ParamLimits

0xd222,	// (0x00027ea2) popup_snote2_single_text_window_t2

0xd26e,	// (0x00027eee) popup_snote2_single_text_window_t3_ParamLimits

0xd26e,	// (0x00027eee) popup_snote2_single_text_window_t3

0xd2af,	// (0x00027f2f) popup_snote2_single_text_window_t4_ParamLimits

0xd2af,	// (0x00027f2f) popup_snote2_single_text_window_t4

0xd2e5,	// (0x00027f65) popup_snote2_single_text_window_t5_ParamLimits

0xd2e5,	// (0x00027f65) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a8fc) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a8fc) popup_snote2_single_text_window_t

0xd310,	// (0x00027f90) popup_snote2_single_graphic_window_g1_ParamLimits

0xd310,	// (0x00027f90) popup_snote2_single_graphic_window_g1

0xd338,	// (0x00027fb8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd338,	// (0x00027fb8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a907) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a907) popup_snote2_single_graphic_window_g

0xd360,	// (0x00027fe0) popup_snote2_single_graphic_window_t1_ParamLimits

0xd360,	// (0x00027fe0) popup_snote2_single_graphic_window_t1

0xd3ac,	// (0x0002802c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3ac,	// (0x0002802c) popup_snote2_single_graphic_window_t2

0xd26e,	// (0x00027eee) popup_snote2_single_graphic_window_t3_ParamLimits

0xd26e,	// (0x00027eee) popup_snote2_single_graphic_window_t3

0xd2af,	// (0x00027f2f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2af,	// (0x00027f2f) popup_snote2_single_graphic_window_t4

0xd2e5,	// (0x00027f65) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2e5,	// (0x00027f65) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a90c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a90c) popup_snote2_single_graphic_window_t

0xbdd4,	// (0x00026a54) clock_nsta_pane_cp2_t1

0xbdd4,	// (0x00026a54) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a72c) clock_nsta_pane_cp2_t

0x4f39,	// (0x0001fbb9) form_field_data_wide_pane_g1_ParamLimits

0x8846,	// (0x000234c6) form_field_data_wide_pane_g2_ParamLimits

0x8846,	// (0x000234c6) form_field_data_wide_pane_g2

0x8852,	// (0x000234d2) form_field_data_wide_pane_g3_ParamLimits

0x8852,	// (0x000234d2) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002a2fb) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002a2fb) form_field_data_wide_pane_g

0xbcc6,	// (0x00026946) grid_touch_3_pane_ParamLimits

0xbcc6,	// (0x00026946) grid_touch_3_pane

0xd3f8,	// (0x00028078) cell_touch_3_pane_ParamLimits

0xd3f8,	// (0x00028078) cell_touch_3_pane

0xc339,	// (0x00026fb9) cell_touch_3_pane_g1

0xc339,	// (0x00026fb9) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a7b1) cell_touch_3_pane_g

0x8308,	// (0x00022f88) cont_query_data_pane

0x8310,	// (0x00022f90) cont_query_data_pane_cp1

0xd426,	// (0x000280a6) button_value_adjust_pane_cp7

0xd42e,	// (0x000280ae) query_popup_pane_cp3

0x8fa7,	// (0x00023c27) bg_popup_sub_pane_cp22_ParamLimits

0x61a5,	// (0x00020e25) navi_navi_volume_pane_cp2

0x61c0,	// (0x00020e40) popup_side_volume_key_window_g2

0x61cf,	// (0x00020e4f) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a391) popup_side_volume_key_window_g

0x61ec,	// (0x00020e6c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a398) popup_side_volume_key_window_t

0x925e,	// (0x00023ede) popup_side_volume_key_window_ParamLimits

0x4b9a,	// (0x0001f81a) list_double_graphic_pane_g4_ParamLimits

0x4b9a,	// (0x0001f81a) list_double_graphic_pane_g4

0x53a5,	// (0x00020025) list_single_2heading_msg_pane_ParamLimits

0x53a5,	// (0x00020025) list_single_2heading_msg_pane

0x5998,	// (0x00020618) list_single_2heading_msg_pane_g1_ParamLimits

0x5998,	// (0x00020618) list_single_2heading_msg_pane_g1

0x49c9,	// (0x0001f649) list_single_2heading_msg_pane_g2_ParamLimits

0x49c9,	// (0x0001f649) list_single_2heading_msg_pane_g2

0x59a4,	// (0x00020624) list_single_2heading_msg_pane_g3_ParamLimits

0x59a4,	// (0x00020624) list_single_2heading_msg_pane_g3

0x59b0,	// (0x00020630) list_single_2heading_msg_pane_g4_ParamLimits

0x59b0,	// (0x00020630) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a917) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a917) list_single_2heading_msg_pane_g

0x59c8,	// (0x00020648) list_single_2heading_msg_pane_t1_ParamLimits

0x59c8,	// (0x00020648) list_single_2heading_msg_pane_t1

0x59f0,	// (0x00020670) list_single_2heading_msg_pane_t2_ParamLimits

0x59f0,	// (0x00020670) list_single_2heading_msg_pane_t2

0x5a24,	// (0x000206a4) list_single_2heading_msg_pane_t3_ParamLimits

0x5a24,	// (0x000206a4) list_single_2heading_msg_pane_t3

0x5a5d,	// (0x000206dd) list_single_2heading_msg_pane_t4_ParamLimits

0x5a5d,	// (0x000206dd) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a920) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a920) list_single_2heading_msg_pane_t

0x7f1d,	// (0x00022b9d) title_pane_g4_ParamLimits

0x7f1d,	// (0x00022b9d) title_pane_g4

0x5fb4,	// (0x00020c34) title_pane_stacon_g3_ParamLimits

0x5fb4,	// (0x00020c34) title_pane_stacon_g3

0xcf54,	// (0x00027bd4) list_single_2graphic_im_pane_g4_ParamLimits

0xcf54,	// (0x00027bd4) list_single_2graphic_im_pane_g4

0xadf6,	// (0x00025a76) popup_side_volume_key_window_cp

0xb613,	// (0x00026293) main_idle_act2_pane_t1

0x6b25,	// (0x000217a5) toolbar_button_pane_g10

0x87a1,	// (0x00023421) popup_toolbar_window_cp1

0xbdc5,	// (0x00026a45) clock_nsta_pane_cp_t1

0xbdc5,	// (0x00026a45) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a727) clock_nsta_pane_cp_t

0x61a5,	// (0x00020e25) navi_navi_volume_pane_cp2_ParamLimits

0x61b4,	// (0x00020e34) popup_side_volume_key_window_g1_ParamLimits

0x61c0,	// (0x00020e40) popup_side_volume_key_window_g2_ParamLimits

0x61cf,	// (0x00020e4f) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a391) popup_side_volume_key_window_g_ParamLimits

0x6f6b,	// (0x00021beb) fep_hwr_aid_pane

0x1e2f,	// (0x0001caaf) bg_fep_hwr_top_pane_g4_ParamLimits

0xc395,	// (0x00027015) fep_hwr_top_pane_g1_ParamLimits

0xc3a7,	// (0x00027027) fep_hwr_top_pane_g2_ParamLimits

0x7024,	// (0x00021ca4) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a77c) fep_hwr_top_pane_g_ParamLimits

0x7039,	// (0x00021cb9) fep_hwr_top_text_pane_ParamLimits

0xabb9,	// (0x00025839) aid_touch_tab_arrow_arrow_2

0xabc2,	// (0x00025842) aid_touch_tab_arrow_left_2

0x6f7f,	// (0x00021bff) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fb6,	// (0x00021c36) fep_hwr_prediction_pane

0xc507,	// (0x00027187) fep_vkb_prediction_pane

0xc60b,	// (0x0002728b) fep_vkb_side_pane_g3_ParamLimits

0xc60b,	// (0x0002728b) fep_vkb_side_pane_g3

0xc5b7,	// (0x00027237) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca57,	// (0x000276d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca64,	// (0x000276e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a826) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd453,	// (0x000280d3) fep_hwr_prediction_pane_g1

0x72c6,	// (0x00021f46) fep_hwr_prediction_pane_g2

0x72ce,	// (0x00021f4e) fep_hwr_prediction_pane_g3

0x72d6,	// (0x00021f56) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a929) fep_hwr_prediction_pane_g

0xd453,	// (0x000280d3) fep_vkb_prediction_pane_g1

0xd45d,	// (0x000280dd) fep_vkb_prediction_pane_g2

0xd465,	// (0x000280e5) fep_vkb_prediction_pane_g3

0xd46d,	// (0x000280ed) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a932) fep_vkb_prediction_pane_g

0x6deb,	// (0x00021a6b) slider_set_pane_g3

0x6dff,	// (0x00021a7f) slider_set_pane_g4

0x6e17,	// (0x00021a97) slider_set_pane_g5

0x6deb,	// (0x00021a6b) slider_set_pane_g6

0x6e2d,	// (0x00021aad) slider_set_pane_g7

0xb257,	// (0x00025ed7) slider_form_pane_g3

0xb260,	// (0x00025ee0) slider_form_pane_g4

0xb268,	// (0x00025ee8) slider_form_pane_g5

0xb257,	// (0x00025ed7) slider_form_pane_g6

0xb270,	// (0x00025ef0) slider_form_pane_g7

0xb8be,	// (0x0002653e) slider_set_pane_vc_g3

0xb8c7,	// (0x00026547) slider_set_pane_vc_g4

0xb8d0,	// (0x00026550) slider_set_pane_vc_g5

0xb8be,	// (0x0002653e) slider_set_pane_vc_g6

0xb8d9,	// (0x00026559) slider_set_pane_vc_g7

0xba99,	// (0x00026719) slider_form_pane_vc_g1

0xbaa2,	// (0x00026722) slider_form_pane_vc_g2

0xbaab,	// (0x0002672b) slider_form_pane_vc_g3

0xba99,	// (0x00026719) slider_form_pane_vc_g4

0xbab4,	// (0x00026734) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a6f9) slider_form_pane_vc_g

0x7ed5,	// (0x00022b55) main_idle_act3_pane

0xd475,	// (0x000280f5) ai3_links_pane

0xd47e,	// (0x000280fe) popup_ai3_data_window_ParamLimits

0xd47e,	// (0x000280fe) popup_ai3_data_window

0x7ed5,	// (0x00022b55) grid_ai3_links_pane

0xd498,	// (0x00028118) cell_ai3_links_pane_ParamLimits

0xd498,	// (0x00028118) cell_ai3_links_pane

0xd4b0,	// (0x00028130) bg_popup_sub_pane_cp11

0xd4bd,	// (0x0002813d) cell_ai3_links_pane_g1

0x7ed5,	// (0x00022b55) bg_popup_sub_pane_cp12

0xd4e2,	// (0x00028162) heading_ai3_data_pane

0xd4ea,	// (0x0002816a) list_ai3_gene_pane

0xd4f6,	// (0x00028176) popup_ai3_data_window_g1

0xd4fe,	// (0x0002817e) heading_ai3_data_pane_g1

0xd506,	// (0x00028186) heading_ai3_data_pane_t1

0xd514,	// (0x00028194) list_double_ai3_gene_pane_ParamLimits

0xd514,	// (0x00028194) list_double_ai3_gene_pane

0xd521,	// (0x000281a1) list_single_ai3_gene_pane_ParamLimits

0xd521,	// (0x000281a1) list_single_ai3_gene_pane

0xc2fe,	// (0x00026f7e) list_highlight_pane_cp7_ParamLimits

0xc2fe,	// (0x00026f7e) list_highlight_pane_cp7

0xd52e,	// (0x000281ae) list_single_a13_gene_pane_t1_ParamLimits

0xd52e,	// (0x000281ae) list_single_a13_gene_pane_t1

0xd545,	// (0x000281c5) list_single_ai3_gene_pane_g1

0xd54e,	// (0x000281ce) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a93b) list_single_ai3_gene_pane_g

0xd556,	// (0x000281d6) list_double_ai3_gene_pane_g1_ParamLimits

0xd556,	// (0x000281d6) list_double_ai3_gene_pane_g1

0xd562,	// (0x000281e2) list_double_ai3_gene_pane_t1_ParamLimits

0xd562,	// (0x000281e2) list_double_ai3_gene_pane_t1

0xd57e,	// (0x000281fe) list_double_ai3_gene_pane_t2_ParamLimits

0xd57e,	// (0x000281fe) list_double_ai3_gene_pane_t2

0xd594,	// (0x00028214) list_double_ai3_gene_pane_t3_ParamLimits

0xd594,	// (0x00028214) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a940) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a940) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x598e,	// (0x0002060e) aid_size_min_col_2

0xd43f,	// (0x000280bf) aid_size_min_msg_ParamLimits

0xd43f,	// (0x000280bf) aid_size_min_msg

0xc70b,	// (0x0002738b) fep_vkb_top_text_pane_g2_ParamLimits

0xc70b,	// (0x0002738b) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a7ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a7ac) fep_vkb_top_text_pane_g

0x7ed5,	// (0x00022b55) main_hc_apps_shell_pane

0xd5b1,	// (0x00028231) grid_hc_apps_pane_ParamLimits

0xd5b1,	// (0x00028231) grid_hc_apps_pane

0xd5c0,	// (0x00028240) list_hc_apps_pane

0xd5c8,	// (0x00028248) scroll_pane_cp37_ParamLimits

0xd5c8,	// (0x00028248) scroll_pane_cp37

0xd5d4,	// (0x00028254) cell_hc_apps_pane_ParamLimits

0xd5d4,	// (0x00028254) cell_hc_apps_pane

0xd682,	// (0x00028302) cell_hc_apps_pane_g1_ParamLimits

0xd682,	// (0x00028302) cell_hc_apps_pane_g1

0xd6b3,	// (0x00028333) cell_hc_apps_pane_g2_ParamLimits

0xd6b3,	// (0x00028333) cell_hc_apps_pane_g2

0xd6cf,	// (0x0002834f) cell_hc_apps_pane_g3_ParamLimits

0xd6cf,	// (0x0002834f) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a947) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a947) cell_hc_apps_pane_g

0xd6f1,	// (0x00028371) cell_hc_apps_pane_t1_ParamLimits

0xd6f1,	// (0x00028371) cell_hc_apps_pane_t1

0x8252,	// (0x00022ed2) grid_highlight_pane_cp10_ParamLimits

0x8252,	// (0x00022ed2) grid_highlight_pane_cp10

0xd731,	// (0x000283b1) list_single_hc_apps_pane_ParamLimits

0xd731,	// (0x000283b1) list_single_hc_apps_pane

0xd78d,	// (0x0002840d) list_single_hc_apps_pane_g1

0x5a82,	// (0x00020702) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a94e) list_single_hc_apps_pane_g

0x5a9b,	// (0x0002071b) list_single_hc_apps_pane_g2_copy1

0x5ab7,	// (0x00020737) list_single_hc_apps_pane_t1

0x7fc9,	// (0x00022c49) bg_set_opt_pane_cp_ParamLimits

0x5edc,	// (0x00020b5c) setting_slider_pane_t1_ParamLimits

0x5ef5,	// (0x00020b75) setting_slider_pane_t2_ParamLimits

0x5f0f,	// (0x00020b8f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002a1de) setting_slider_pane_t_ParamLimits

0x5f27,	// (0x00020ba7) slider_set_pane_ParamLimits

0x644e,	// (0x000210ce) control_pane_g5_ParamLimits

0x644e,	// (0x000210ce) control_pane_g5

0xb0a6,	// (0x00025d26) slider_set_pane_g1_ParamLimits

0x6ddf,	// (0x00021a5f) slider_set_pane_g2_ParamLimits

0x6deb,	// (0x00021a6b) slider_set_pane_g3_ParamLimits

0x6dff,	// (0x00021a7f) slider_set_pane_g4_ParamLimits

0x6e17,	// (0x00021a97) slider_set_pane_g5_ParamLimits

0x6deb,	// (0x00021a6b) slider_set_pane_g6_ParamLimits

0x6e2d,	// (0x00021aad) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a5dd) slider_set_pane_g_ParamLimits

0x934a,	// (0x00023fca) navi_icon_text_pane_ParamLimits

0x9840,	// (0x000244c0) aid_fill_nsta_2_ParamLimits

0x987f,	// (0x000244ff) aid_touch_tab_arrow_left_ParamLimits

0x988e,	// (0x0002450e) aid_touch_tab_arrow_right_ParamLimits

0x98fb,	// (0x0002457b) clock_nsta_pane_ParamLimits

0xab9b,	// (0x0002581b) navi_icon_pane_g1_ParamLimits

0xaba7,	// (0x00025827) navi_text_pane_t1_ParamLimits

0xbed1,	// (0x00026b51) navi_icon_text_pane_g1_ParamLimits

0xbedd,	// (0x00026b5d) navi_icon_text_pane_t1_ParamLimits

0xd78d,	// (0x0002840d) list_single_hc_apps_pane_g1_ParamLimits

0x5a82,	// (0x00020702) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a94e) list_single_hc_apps_pane_g_ParamLimits

0x5a9b,	// (0x0002071b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ab7,	// (0x00020737) list_single_hc_apps_pane_t1_ParamLimits

0x5de6,	// (0x00020a66) popup_toolbar2_fixed_window_ParamLimits

0x5de6,	// (0x00020a66) popup_toolbar2_fixed_window

0x6a29,	// (0x000216a9) popup_toolbar2_float_window

0x7ed5,	// (0x00022b55) bg_popup_sub_pane_cp27

0xd7a6,	// (0x00028426) grid_toolbar2_float_pane

0x7ed5,	// (0x00022b55) bg_popup_sub_pane_cp26

0xd7a6,	// (0x00028426) grid_toolbar2_fixed_pane

0xd7ae,	// (0x0002842e) cell_toolbar2_fixed_pane_ParamLimits

0xd7ae,	// (0x0002842e) cell_toolbar2_fixed_pane

0xd7be,	// (0x0002843e) cell_toolbar2_fixed_pane_g1

0xd7c7,	// (0x00028447) toolbar2_fixed_button_pane

0x9d12,	// (0x00024992) toolbar2_fixed_button_pane_g1

0x9d1a,	// (0x0002499a) toolbar2_fixed_button_pane_g2

0x9d22,	// (0x000249a2) toolbar2_fixed_button_pane_g3

0x9d2a,	// (0x000249aa) toolbar2_fixed_button_pane_g4

0x9d32,	// (0x000249b2) toolbar2_fixed_button_pane_g5

0x9d3a,	// (0x000249ba) toolbar2_fixed_button_pane_g6

0x9d42,	// (0x000249c2) toolbar2_fixed_button_pane_g7

0x9d4a,	// (0x000249ca) toolbar2_fixed_button_pane_g8

0x9d52,	// (0x000249d2) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a4df) toolbar2_fixed_button_pane_g

0xd7cf,	// (0x0002844f) cell_toolbar2_float_pane_ParamLimits

0xd7cf,	// (0x0002844f) cell_toolbar2_float_pane

0xd7e0,	// (0x00028460) cell_toolbar2_float_pane_g1

0xd7c7,	// (0x00028447) toolbar2_fixed_button_pane_cp

0xc467,	// (0x000270e7) fep_vkb_accented_list_pane_ParamLimits

0xc467,	// (0x000270e7) fep_vkb_accented_list_pane

0x7187,	// (0x00021e07) bg_popup_fep_shadow_pane_g9

0x94ca,	// (0x0002414a) bg_popup_fep_shadow_pane_cp3

0x898f,	// (0x0002360f) list_accented_list_pane

0xd7e9,	// (0x00028469) list_single_accented_list_pane_ParamLimits

0xd7e9,	// (0x00028469) list_single_accented_list_pane

0x94ca,	// (0x0002414a) list_highlight_pane_cp10

0xd7fa,	// (0x0002847a) list_single_accented_list_pane_t1

0x6979,	// (0x000215f9) popup_slider_window_ParamLimits

0x6979,	// (0x000215f9) popup_slider_window

0xd436,	// (0x000280b6) aid_indentation_list_msg

0xd8b4,	// (0x00028534) bg_popup_window_pane_cp19

0xd91e,	// (0x0002859e) popup_slider_window_g1

0xd93a,	// (0x000285ba) popup_slider_window_g2

0xd956,	// (0x000285d6) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0002a953) popup_slider_window_g

0xd9b2,	// (0x00028632) popup_slider_window_t1

0xda26,	// (0x000286a6) small_volume_slider_vertical_pane

0xc339,	// (0x00026fb9) small_volume_slider_vertical_pane_g1

0xc339,	// (0x00026fb9) small_volume_slider_vertical_pane_g2

0xda42,	// (0x000286c2) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0002a965) small_volume_slider_vertical_pane_g

0x5ba8,	// (0x00020828) area_side_right_pane_ParamLimits

0x5ba8,	// (0x00020828) area_side_right_pane

0x72de,	// (0x00021f5e) aid_size_side_button_ParamLimits

0x72de,	// (0x00021f5e) aid_size_side_button

0x72f2,	// (0x00021f72) grid_sctrl_middle_pane_ParamLimits

0x72f2,	// (0x00021f72) grid_sctrl_middle_pane

0x7311,	// (0x00021f91) sctrl_sk_bottom_pane

0x7322,	// (0x00021fa2) sctrl_sk_top_pane

0x7334,	// (0x00021fb4) aid_touch_sctrl_top

0x8252,	// (0x00022ed2) bg_sctrl_sk_pane_ParamLimits

0x8252,	// (0x00022ed2) bg_sctrl_sk_pane

0x7341,	// (0x00021fc1) sctrl_sk_top_pane_g1

0x734e,	// (0x00021fce) sctrl_sk_top_pane_t1

0x7334,	// (0x00021fb4) aid_touch_sctrl_bottom

0x8252,	// (0x00022ed2) bg_sctrl_sk_pane_cp_ParamLimits

0x8252,	// (0x00022ed2) bg_sctrl_sk_pane_cp

0x7369,	// (0x00021fe9) sctrl_sk_bottom_pane_g1

0x734e,	// (0x00021fce) sctrl_sk_bottom_pane_t1

0x7372,	// (0x00021ff2) cell_sctrl_middle_pane_ParamLimits

0x7372,	// (0x00021ff2) cell_sctrl_middle_pane

0x738d,	// (0x0002200d) aid_touch_sctrl_middle_ParamLimits

0x738d,	// (0x0002200d) aid_touch_sctrl_middle

0x8838,	// (0x000234b8) bg_sctrl_middle_pane_ParamLimits

0x8838,	// (0x000234b8) bg_sctrl_middle_pane

0xc5b7,	// (0x00027237) cell_sctrl_middle_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) cell_sctrl_middle_pane_g1

0x739f,	// (0x0002201f) cell_sctrl_middle_pane_g2_ParamLimits

0x739f,	// (0x0002201f) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0002a971) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0002a971) cell_sctrl_middle_pane_g

0x9d12,	// (0x00024992) bg_sctrl_middle_pane_g1

0x9d1a,	// (0x0002499a) bg_sctrl_middle_pane_g2

0x9d22,	// (0x000249a2) bg_sctrl_middle_pane_g3

0x9d2a,	// (0x000249aa) bg_sctrl_middle_pane_g4

0x9d32,	// (0x000249b2) bg_sctrl_middle_pane_g5

0x9d3a,	// (0x000249ba) bg_sctrl_middle_pane_g6

0x9d42,	// (0x000249c2) bg_sctrl_middle_pane_g7

0x9d4a,	// (0x000249ca) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0002a976) bg_sctrl_middle_pane_g

0x9d52,	// (0x000249d2) bg_sctrl_middle_pane_g8_copy1

0x9d12,	// (0x00024992) bg_sctrl_sk_pane_g1

0x9d1a,	// (0x0002499a) bg_sctrl_sk_pane_g2

0x9d22,	// (0x000249a2) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a4df) bg_sctrl_sk_pane_g

0x8767,	// (0x000233e7) aid_size_touch_scroll_bar

0x9d2a,	// (0x000249aa) bg_sctrl_sk_pane_g4

0x9d32,	// (0x000249b2) bg_sctrl_sk_pane_g5

0x9d3a,	// (0x000249ba) bg_sctrl_sk_pane_g6

0x9d42,	// (0x000249c2) bg_sctrl_sk_pane_g7

0x9d4a,	// (0x000249ca) bg_sctrl_sk_pane_g8

0x9d52,	// (0x000249d2) bg_sctrl_sk_pane_g9

0x65e2,	// (0x00021262) popup_fep_china_hwr2_fs_candidate_window

0x65ec,	// (0x0002126c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x65ec,	// (0x0002126c) popup_fep_china_hwr2_fs_control_window

0xc5b7,	// (0x00027237) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0002a96c) sctrl_sk_top_pane_g

0xda4b,	// (0x000286cb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4b,	// (0x000286cb) aid_fep_china_hwr2_fs_cell

0xda5d,	// (0x000286dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5d,	// (0x000286dd) bg_popup_fep_shadow_pane_cp4

0xda74,	// (0x000286f4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda74,	// (0x000286f4) bg_popup_fep_shadow_pane_cp5

0xda86,	// (0x00028706) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda86,	// (0x00028706) popup_fep_china_hwr2_fs_control_bar_grid

0xda96,	// (0x00028716) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9e,	// (0x0002871e) aid_fep_china_hwr2_fs_candi_cell

0x7ed5,	// (0x00022b55) bg_popup_fep_shadow_pane_cp6

0xdaa8,	// (0x00028728) popup_fep_china_hwr2_fs_candidate_grid

0xdab2,	// (0x00028732) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab2,	// (0x00028732) cell_fep_china_hwr2_fs_funtion_grid

0xc339,	// (0x00026fb9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaca,	// (0x0002874a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaca,	// (0x0002874a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad8,	// (0x00028758) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad8,	// (0x00028758) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0002a987) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0002a987) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaee,	// (0x0002876e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaee,	// (0x0002876e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb03,	// (0x00028783) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb03,	// (0x00028783) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0002a98c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0002a98c) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1f,	// (0x0002879f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb27,	// (0x000287a7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2f,	// (0x000287af) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0002a991) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb37,	// (0x000287b7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb37,	// (0x000287b7) cell_fep_china_hwr2_fs_candidate_grid

0xdb50,	// (0x000287d0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb58,	// (0x000287d8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc339,	// (0x00026fb9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc339,	// (0x00026fb9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a7b1) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb60,	// (0x000287e0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9908,	// (0x00024588) clock_nsta_pane_cp_24_ParamLimits

0x9908,	// (0x00024588) clock_nsta_pane_cp_24

0x9986,	// (0x00024606) indicator_nsta_pane_cp_24_ParamLimits

0x9986,	// (0x00024606) indicator_nsta_pane_cp_24

0xaa17,	// (0x00025697) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a544) heading_pane_g

0xb45c,	// (0x000260dc) grid_sct_catagory_button_pane

0xb48c,	// (0x0002610c) scroll_pane_cp5_ParamLimits

0xbf2b,	// (0x00026bab) button_value_adjust_pane_cp5_ParamLimits

0xbf2b,	// (0x00026bab) button_value_adjust_pane_cp5

0xc00a,	// (0x00026c8a) form2_midp_time_pane_ParamLimits

0xdb6e,	// (0x000287ee) cell_sct_catagory_button_pane_ParamLimits

0xdb6e,	// (0x000287ee) cell_sct_catagory_button_pane

0xc2fe,	// (0x00026f7e) bg_button_pane_cp01_ParamLimits

0xc2fe,	// (0x00026f7e) bg_button_pane_cp01

0xc339,	// (0x00026fb9) cell_sct_catagory_button_pane_g1

0x69b8,	// (0x00021638) popup_tb_extension_window

0xdb80,	// (0x00028800) aid_size_cell_ext_ParamLimits

0xdb80,	// (0x00028800) aid_size_cell_ext

0x8252,	// (0x00022ed2) bg_tb_trans_pane_cp1_ParamLimits

0x8252,	// (0x00022ed2) bg_tb_trans_pane_cp1

0xdba0,	// (0x00028820) grid_tb_ext_pane_ParamLimits

0xdba0,	// (0x00028820) grid_tb_ext_pane

0xdbce,	// (0x0002884e) cell_tb_ext_pane_ParamLimits

0xdbce,	// (0x0002884e) cell_tb_ext_pane

0xdbe5,	// (0x00028865) cell_tb_ext_pane_g1_ParamLimits

0xdbe5,	// (0x00028865) cell_tb_ext_pane_g1

0xdc02,	// (0x00028882) cell_tb_ext_pane_t1

0x8252,	// (0x00022ed2) list_highlight_pane_cp11_ParamLimits

0x8252,	// (0x00022ed2) list_highlight_pane_cp11

0x5e05,	// (0x00020a85) popup_uni_indicator_window_ParamLimits

0x5e05,	// (0x00020a85) popup_uni_indicator_window

0x8838,	// (0x000234b8) bg_popup_sub_pane_cp14

0xdc1d,	// (0x0002889d) list_uniindi_pane

0xdc29,	// (0x000288a9) uniindi_top_pane

0x8252,	// (0x00022ed2) bg_uniindi_top_pane

0xdc48,	// (0x000288c8) uniindi_top_pane_g1

0xdc5e,	// (0x000288de) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0002a998) uniindi_top_pane_g

0xdc88,	// (0x00028908) uniindi_top_pane_t1

0xdcb2,	// (0x00028932) list_single_uniindi_pane_ParamLimits

0xdcb2,	// (0x00028932) list_single_uniindi_pane

0xc339,	// (0x00026fb9) bg_uniindi_top_pane_g1

0xdcc5,	// (0x00028945) list_single_uniindi_pane_g1

0xdcd8,	// (0x00028958) list_single_uniindi_pane_t1

0x7ed5,	// (0x00022b55) control_bg_pane

0xdcfd,	// (0x0002897d) bg_sctrl_sk_pane_cp1

0xdd06,	// (0x00028986) bg_sctrl_sk_pane_cp2

0xdd0f,	// (0x0002898f) control_bg_pane_g1

0xdd18,	// (0x00028998) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0002a9a1) control_bg_pane_g

0xbd69,	// (0x000269e9) cell_indicator_nsta_pane_g1_ParamLimits

0xbd77,	// (0x000269f7) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a715) cell_indicator_nsta_pane_g_ParamLimits

0x573f,	// (0x000203bf) form2_midp_time_pane_t1_ParamLimits

0x85a9,	// (0x00023229) main_idle_act4_pane_ParamLimits

0x85a9,	// (0x00023229) main_idle_act4_pane

0x69b8,	// (0x00021638) popup_tb_extension_window_ParamLimits

0xdbbe,	// (0x0002883e) tb_ext_find_pane_ParamLimits

0xdbbe,	// (0x0002883e) tb_ext_find_pane

0xdd21,	// (0x000289a1) ai_gene_pane_1_cp1

0x9605,	// (0x00024285) ai_gene_pane_2_cp1

0xdd29,	// (0x000289a9) list_single_idle_plugin_calendar_pane

0xdd32,	// (0x000289b2) list_single_idle_plugin_notification_pane

0xdd3b,	// (0x000289bb) list_single_idle_plugin_player_pane

0xdd44,	// (0x000289c4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd44,	// (0x000289c4) list_single_idle_plugin_shortcut_pane

0xdd66,	// (0x000289e6) main_idle_act4_pane_t1

0xdd78,	// (0x000289f8) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0002a9a6) main_idle_act4_pane_t

0xdd8a,	// (0x00028a0a) middle_sk_idle_act4_pane_ParamLimits

0xdd8a,	// (0x00028a0a) middle_sk_idle_act4_pane

0xdda0,	// (0x00028a20) popup_clock_digital_analogue_window_cp2

0xddba,	// (0x00028a3a) shortcut_wheel_idle_act4_pane_ParamLimits

0xddba,	// (0x00028a3a) shortcut_wheel_idle_act4_pane

0xc339,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g1

0xc339,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g2

0xc339,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g3

0xc339,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g4

0xc339,	// (0x00026fb9) shortcut_wheel_idle_act4_pane_g5

0xddce,	// (0x00028a4e) shortcut_wheel_idle_act4_pane_g6

0xddd6,	// (0x00028a56) shortcut_wheel_idle_act4_pane_g7

0xddde,	// (0x00028a5e) shortcut_wheel_idle_act4_pane_g8

0xdde6,	// (0x00028a66) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0002a9ab) shortcut_wheel_idle_act4_pane_g

0xc5b7,	// (0x00027237) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) middle_sk_idle_act4_pane_g1

0xde4a,	// (0x00028aca) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4a,	// (0x00028aca) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0002a9ce) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0002a9ce) middle_sk_idle_act4_pane_g

0xde56,	// (0x00028ad6) middle_sk_idle_act4_pane_t1_ParamLimits

0xde56,	// (0x00028ad6) middle_sk_idle_act4_pane_t1

0xde73,	// (0x00028af3) grid_ai_shortcut_pane_ParamLimits

0xde73,	// (0x00028af3) grid_ai_shortcut_pane

0xde8c,	// (0x00028b0c) list_highlight_pane_cp16_ParamLimits

0xde8c,	// (0x00028b0c) list_highlight_pane_cp16

0xde99,	// (0x00028b19) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde99,	// (0x00028b19) list_single_idle_plugin_shortcut_pane_g1

0xdea5,	// (0x00028b25) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea5,	// (0x00028b25) list_single_idle_plugin_shortcut_pane_g2

0xdebd,	// (0x00028b3d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdebd,	// (0x00028b3d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0002a9d3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0002a9d3) list_single_idle_plugin_shortcut_pane_g

0xded0,	// (0x00028b50) cell_ai_shortcut_pane_ParamLimits

0xded0,	// (0x00028b50) cell_ai_shortcut_pane

0xdef4,	// (0x00028b74) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x00028b74) cell_ai_shortcut_pane_g1

0xdd21,	// (0x000289a1) ai_gene_pane_1_cp2

0xdf16,	// (0x00028b96) ai_gene_pane_2_cp2

0xdf1e,	// (0x00028b9e) list_highlight_pane_cp15

0xdf27,	// (0x00028ba7) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x00028b9e) list_highlight_pane_cp17

0xdf2f,	// (0x00028baf) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00028bb7) list_single_idle_plugin_player_pane_g1

0xb6b5,	// (0x00026335) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0002a9da) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x00028bbf) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x00028bcd) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x00028bdb) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x00028be9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0002a9df) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x00028bf7) wait_bar_pane_cp15

0xdf7f,	// (0x00028bff) grid_ai_notification_pane

0xb6b5,	// (0x00026335) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x00028c08) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x00028c08) cell_ai_notification_pane

0xdf95,	// (0x00028c15) cell_ai_notification_pane_g1

0xdf9d,	// (0x00028c1d) cell_ai_notification_pane_t1

0xdfab,	// (0x00028c2b) tb_ext_find_button_pane

0xdfb3,	// (0x00028c33) tb_ext_find_pane_g1

0xdfbb,	// (0x00028c3b) tb_ext_find_pane_t1

0x8eb7,	// (0x00023b37) tb_ext_find_button_pane_g1

0xdfc9,	// (0x00028c49) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0002a9e8) tb_ext_find_button_pane_g

0xdd66,	// (0x000289e6) main_idle_act4_pane_t1_ParamLimits

0xdd78,	// (0x000289f8) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0002a9a6) main_idle_act4_pane_t_ParamLimits

0xdda0,	// (0x00028a20) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddae,	// (0x00028a2e) sat_plugin_idle_act4_pane_ParamLimits

0xddae,	// (0x00028a2e) sat_plugin_idle_act4_pane

0xdfd2,	// (0x00028c52) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x00028c52) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x00028c65) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x00028c65) sat_plugin_idle_act4_pane_t2

0xdff8,	// (0x00028c78) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdff8,	// (0x00028c78) sat_plugin_idle_act4_pane_t3

0xe00b,	// (0x00028c8b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe00b,	// (0x00028c8b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0002a9ed) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0002a9ed) sat_plugin_idle_act4_pane_t

0x5d40,	// (0x000209c0) popup_battery_window_ParamLimits

0x5d40,	// (0x000209c0) popup_battery_window

0x8252,	// (0x00022ed2) bg_popup_sub_pane_cp25_ParamLimits

0x8252,	// (0x00022ed2) bg_popup_sub_pane_cp25

0xe01e,	// (0x00028c9e) popup_battery_window_g1_ParamLimits

0xe01e,	// (0x00028c9e) popup_battery_window_g1

0xe02a,	// (0x00028caa) popup_battery_window_t1_ParamLimits

0xe02a,	// (0x00028caa) popup_battery_window_t1

0xe03c,	// (0x00028cbc) popup_battery_window_t2_ParamLimits

0xe03c,	// (0x00028cbc) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0002a9f6) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0002a9f6) popup_battery_window_t

0x94d2,	// (0x00024152) midp_canvas_pane_ParamLimits

0x9549,	// (0x000241c9) midp_keypad_pane_ParamLimits

0x9549,	// (0x000241c9) midp_keypad_pane

0x9808,	// (0x00024488) main_midp_pane_ParamLimits

0xbde3,	// (0x00026a63) signal_pane_g2_cp_ParamLimits

0xe059,	// (0x00028cd9) aid_size_cell_midp_keypad_ParamLimits

0xe059,	// (0x00028cd9) aid_size_cell_midp_keypad

0xe073,	// (0x00028cf3) midp_keyp_game_grid_pane_ParamLimits

0xe073,	// (0x00028cf3) midp_keyp_game_grid_pane

0xe093,	// (0x00028d13) midp_keyp_rocker_pane_ParamLimits

0xe093,	// (0x00028d13) midp_keyp_rocker_pane

0xe0cc,	// (0x00028d4c) midp_keyp_sk_left_pane_ParamLimits

0xe0cc,	// (0x00028d4c) midp_keyp_sk_left_pane

0xe126,	// (0x00028da6) midp_keyp_sk_right_pane_ParamLimits

0xe126,	// (0x00028da6) midp_keyp_sk_right_pane

0x7ed5,	// (0x00022b55) bg_button_pane_cp03

0xe180,	// (0x00028e00) midp_keyp_sk_left_pane_g1

0x7ed5,	// (0x00022b55) bg_button_pane_cp04

0xe180,	// (0x00028e00) midp_keyp_sk_right_pane_g1

0xc339,	// (0x00026fb9) midp_keyp_rocker_pane_g1

0xe189,	// (0x00028e09) keyp_game_cell_pane_ParamLimits

0xe189,	// (0x00028e09) keyp_game_cell_pane

0x7ed5,	// (0x00022b55) bg_button_pane_cp02

0xe19c,	// (0x00028e1c) keyp_game_cell_pane_g1

0x5d84,	// (0x00020a04) popup_fep_vkb2_window_ParamLimits

0x5d84,	// (0x00020a04) popup_fep_vkb2_window

0x73bd,	// (0x0002203d) aid_size_cell_vkb2_ParamLimits

0x73bd,	// (0x0002203d) aid_size_cell_vkb2

0x7411,	// (0x00022091) popup_fep_vkb2_window_g1_ParamLimits

0x7411,	// (0x00022091) popup_fep_vkb2_window_g1

0x7459,	// (0x000220d9) vkb2_area_bottom_pane_ParamLimits

0x7459,	// (0x000220d9) vkb2_area_bottom_pane

0x74a5,	// (0x00022125) vkb2_area_keypad_pane_ParamLimits

0x74a5,	// (0x00022125) vkb2_area_keypad_pane

0x74e7,	// (0x00022167) vkb2_area_top_pane_ParamLimits

0x74e7,	// (0x00022167) vkb2_area_top_pane

0x7561,	// (0x000221e1) vkb2_top_entry_pane_ParamLimits

0x7561,	// (0x000221e1) vkb2_top_entry_pane

0x758b,	// (0x0002220b) vkb2_top_grid_left_pane_ParamLimits

0x758b,	// (0x0002220b) vkb2_top_grid_left_pane

0x75a9,	// (0x00022229) vkb2_top_grid_right_pane_ParamLimits

0x75a9,	// (0x00022229) vkb2_top_grid_right_pane

0x75c7,	// (0x00022247) vkb2_cell_keypad_pane_ParamLimits

0x75c7,	// (0x00022247) vkb2_cell_keypad_pane

0x7698,	// (0x00022318) vkb2_area_bottom_grid_pane_ParamLimits

0x7698,	// (0x00022318) vkb2_area_bottom_grid_pane

0x76be,	// (0x0002233e) vkb2_area_bottom_pane_g1_ParamLimits

0x76be,	// (0x0002233e) vkb2_area_bottom_pane_g1

0x76e2,	// (0x00022362) vkb2_area_bottom_pane_g2_ParamLimits

0x76e2,	// (0x00022362) vkb2_area_bottom_pane_g2

0x7710,	// (0x00022390) vkb2_area_bottom_pane_g3_ParamLimits

0x7710,	// (0x00022390) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0002a9fb) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0002a9fb) vkb2_area_bottom_pane_g

0x7771,	// (0x000223f1) vkb2_top_cell_left_pane_ParamLimits

0x7771,	// (0x000223f1) vkb2_top_cell_left_pane

0xe1ad,	// (0x00028e2d) vkb2_top_entry_pane_g1_ParamLimits

0xe1ad,	// (0x00028e2d) vkb2_top_entry_pane_g1

0xe1bb,	// (0x00028e3b) vkb2_top_entry_pane_t1_ParamLimits

0xe1bb,	// (0x00028e3b) vkb2_top_entry_pane_t1

0xe1ed,	// (0x00028e6d) vkb2_top_entry_pane_t2_ParamLimits

0xe1ed,	// (0x00028e6d) vkb2_top_entry_pane_t2

0xe21f,	// (0x00028e9f) vkb2_top_entry_pane_t3_ParamLimits

0xe21f,	// (0x00028e9f) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0002aa02) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0002aa02) vkb2_top_entry_pane_t

0x77be,	// (0x0002243e) vkb2_top_grid_right_pane_g1_ParamLimits

0x77be,	// (0x0002243e) vkb2_top_grid_right_pane_g1

0x77d4,	// (0x00022454) vkb2_top_grid_right_pane_g2_ParamLimits

0x77d4,	// (0x00022454) vkb2_top_grid_right_pane_g2

0x77ec,	// (0x0002246c) vkb2_top_grid_right_pane_g3_ParamLimits

0x77ec,	// (0x0002246c) vkb2_top_grid_right_pane_g3

0x7804,	// (0x00022484) vkb2_top_grid_right_pane_g4_ParamLimits

0x7804,	// (0x00022484) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0002aa09) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0002aa09) vkb2_top_grid_right_pane_g

0x781a,	// (0x0002249a) vkb2_top_cell_left_pane_g1

0x7831,	// (0x000224b1) vkb2_cell_keypad_pane_g1_ParamLimits

0x7831,	// (0x000224b1) vkb2_cell_keypad_pane_g1

0xe243,	// (0x00028ec3) vkb2_cell_keypad_pane_t1_ParamLimits

0xe243,	// (0x00028ec3) vkb2_cell_keypad_pane_t1

0x783f,	// (0x000224bf) vkb2_cell_bottom_grid_pane_ParamLimits

0x783f,	// (0x000224bf) vkb2_cell_bottom_grid_pane

0x7878,	// (0x000224f8) vkb2_cell_bottom_grid_pane_g1

0xddee,	// (0x00028a6e) aid_call2_pane_cp02

0xddf6,	// (0x00028a76) aid_call_pane_cp02

0xddfe,	// (0x00028a7e) clock_digital_number_pane_cp10

0xde06,	// (0x00028a86) clock_digital_number_pane_cp11

0xde0e,	// (0x00028a8e) clock_digital_number_pane_cp12

0xde16,	// (0x00028a96) clock_digital_number_pane_cp13

0xde1e,	// (0x00028a9e) clock_digital_separator_pane_cp10

0x8eb7,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g1

0x8eb7,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g2

0xde26,	// (0x00028aa6) popup_clock_digital_analogue_window_cp2_g3

0x8eb7,	// (0x00023b37) popup_clock_digital_analogue_window_cp2_g4

0xde26,	// (0x00028aa6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0002a9be) popup_clock_digital_analogue_window_cp2_g

0xde2e,	// (0x00028aae) popup_clock_digital_analogue_window_cp2_t1

0xde3c,	// (0x00028abc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0002a9c9) popup_clock_digital_analogue_window_cp2_t

0xc339,	// (0x00026fb9) clock_digital_number_pane_cp10_g1

0xc339,	// (0x00026fb9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a7b1) clock_digital_number_pane_cp10_g

0xc339,	// (0x00026fb9) clock_digital_separator_pane_cp10_g1

0xc339,	// (0x00026fb9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a7b1) clock_digital_separator_pane_cp10_g

0xdc6a,	// (0x000288ea) uniindi_top_pane_g3

0xdc7b,	// (0x000288fb) uniindi_top_pane_g4

0x7652,	// (0x000222d2) vkb2_row_keypad_pane_ParamLimits

0x7652,	// (0x000222d2) vkb2_row_keypad_pane

0x7894,	// (0x00022514) vkb2_cell_t_keypad_pane_ParamLimits

0x7894,	// (0x00022514) vkb2_cell_t_keypad_pane

0x78a4,	// (0x00022524) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78a4,	// (0x00022524) vkb2_cell_t_keypad_pane_cp08

0x78b7,	// (0x00022537) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78b7,	// (0x00022537) vkb2_cell_t_keypad_pane_cp09

0x78cb,	// (0x0002254b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78cb,	// (0x0002254b) vkb2_cell_t_keypad_pane_cp01

0x78dc,	// (0x0002255c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78dc,	// (0x0002255c) vkb2_cell_t_keypad_pane_cp02

0x78ed,	// (0x0002256d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78ed,	// (0x0002256d) vkb2_cell_t_keypad_pane_cp03

0x78fe,	// (0x0002257e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78fe,	// (0x0002257e) vkb2_cell_t_keypad_pane_cp04

0x790f,	// (0x0002258f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x790f,	// (0x0002258f) vkb2_cell_t_keypad_pane_cp05

0x7920,	// (0x000225a0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7920,	// (0x000225a0) vkb2_cell_t_keypad_pane_cp06

0x7931,	// (0x000225b1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7931,	// (0x000225b1) vkb2_cell_t_keypad_pane_cp07

0x7942,	// (0x000225c2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7942,	// (0x000225c2) vkb2_cell_t_keypad_pane_cp10

0xc5b7,	// (0x00027237) vkb2_cell_t_keypad_pane_g1

0xe25a,	// (0x00028eda) vkb2_cell_t_keypad_pane_t1

0x7ed5,	// (0x00022b55) popup_grid_graphic2_window

0xe26c,	// (0x00028eec) aid_size_cell_graphic2_ParamLimits

0xe26c,	// (0x00028eec) aid_size_cell_graphic2

0xe2a4,	// (0x00028f24) bg_popup_window_pane_cp21_ParamLimits

0xe2a4,	// (0x00028f24) bg_popup_window_pane_cp21

0xe2b2,	// (0x00028f32) graphic2_pages_pane_ParamLimits

0xe2b2,	// (0x00028f32) graphic2_pages_pane

0xe2f8,	// (0x00028f78) grid_graphic2_control_pane_ParamLimits

0xe2f8,	// (0x00028f78) grid_graphic2_control_pane

0xe336,	// (0x00028fb6) grid_graphic2_pane_ParamLimits

0xe336,	// (0x00028fb6) grid_graphic2_pane

0xe3aa,	// (0x0002902a) cell_graphic2_pane

0x7ed5,	// (0x00022b55) main_comp_mode_pane

0xd4ea,	// (0x0002816a) list_ai3_gene_pane_ParamLimits

0xd8b4,	// (0x00028534) bg_popup_window_pane_cp19_ParamLimits

0xd8c0,	// (0x00028540) bg_touch_area_indi_pane_ParamLimits

0xd8c0,	// (0x00028540) bg_touch_area_indi_pane

0xd8d6,	// (0x00028556) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d6,	// (0x00028556) bg_touch_area_indi_pane_cp01

0xd8ec,	// (0x0002856c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8ec,	// (0x0002856c) bg_touch_area_indi_pane_cp02

0xd904,	// (0x00028584) bg_touch_area_indi_pane_cp03_ParamLimits

0xd904,	// (0x00028584) bg_touch_area_indi_pane_cp03

0xd91e,	// (0x0002859e) popup_slider_window_g1_ParamLimits

0xd93a,	// (0x000285ba) popup_slider_window_g2_ParamLimits

0xd956,	// (0x000285d6) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0002a953) popup_slider_window_g_ParamLimits

0xd9b2,	// (0x00028632) popup_slider_window_t1_ParamLimits

0xda26,	// (0x000286a6) small_volume_slider_vertical_pane_ParamLimits

0xe3aa,	// (0x0002902a) cell_graphic2_pane_ParamLimits

0xe3f8,	// (0x00029078) bg_button_pane_cp10_ParamLimits

0xe3f8,	// (0x00029078) bg_button_pane_cp10

0xe40b,	// (0x0002908b) bg_button_pane_cp11_ParamLimits

0xe40b,	// (0x0002908b) bg_button_pane_cp11

0xe41e,	// (0x0002909e) graphic2_pages_pane_g1_ParamLimits

0xe41e,	// (0x0002909e) graphic2_pages_pane_g1

0xe439,	// (0x000290b9) graphic2_pages_pane_g2_ParamLimits

0xe439,	// (0x000290b9) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0002aa17) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0002aa17) graphic2_pages_pane_g

0xe451,	// (0x000290d1) graphic2_pages_pane_t1_ParamLimits

0xe451,	// (0x000290d1) graphic2_pages_pane_t1

0xe469,	// (0x000290e9) cell_graphic2_control_pane_ParamLimits

0xe469,	// (0x000290e9) cell_graphic2_control_pane

0xe48a,	// (0x0002910a) cell_graphic2_pane_g1_ParamLimits

0xe48a,	// (0x0002910a) cell_graphic2_pane_g1

0xe497,	// (0x00029117) cell_graphic2_pane_g2_ParamLimits

0xe497,	// (0x00029117) cell_graphic2_pane_g2

0xe4a4,	// (0x00029124) cell_graphic2_pane_g3_ParamLimits

0xe4a4,	// (0x00029124) cell_graphic2_pane_g3

0xe4b1,	// (0x00029131) cell_graphic2_pane_g4_ParamLimits

0xe4b1,	// (0x00029131) cell_graphic2_pane_g4

0xe4be,	// (0x0002913e) cell_graphic2_pane_g5_ParamLimits

0xe4be,	// (0x0002913e) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0002aa1c) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0002aa1c) cell_graphic2_pane_g

0xe4d9,	// (0x00029159) cell_graphic2_pane_t1_ParamLimits

0xe4d9,	// (0x00029159) cell_graphic2_pane_t1

0x9d86,	// (0x00024a06) grid_highlight_pane_cp11_ParamLimits

0x9d86,	// (0x00024a06) grid_highlight_pane_cp11

0x8252,	// (0x00022ed2) bg_button_pane_cp05

0xe502,	// (0x00029182) cell_graphic2_control_pane_g1

0xc339,	// (0x00026fb9) bg_touch_area_indi_pane_g1

0xe52a,	// (0x000291aa) aid_cmod_rocker_key_size

0xe534,	// (0x000291b4) aid_cmode_itu_key_size

0xe53e,	// (0x000291be) main_cmode_video_pane

0xe548,	// (0x000291c8) main_comp_mode_itu_pane

0xe554,	// (0x000291d4) main_comp_mode_rocker_pane

0xe560,	// (0x000291e0) cell_cmode_rocker_pane_ParamLimits

0xe560,	// (0x000291e0) cell_cmode_rocker_pane

0xe572,	// (0x000291f2) cell_cmode_itu_pane_ParamLimits

0xe572,	// (0x000291f2) cell_cmode_itu_pane

0x8838,	// (0x000234b8) bg_button_pane_cp06_ParamLimits

0x8838,	// (0x000234b8) bg_button_pane_cp06

0xc5b7,	// (0x00027237) cell_cmode_rocker_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) cell_cmode_rocker_pane_g1

0xdaca,	// (0x0002874a) cell_cmode_rocker_pane_g2_ParamLimits

0xdaca,	// (0x0002874a) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0002aa2c) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0002aa2c) cell_cmode_rocker_pane_g

0x7ed5,	// (0x00022b55) bg_button_pane_cp07

0xe587,	// (0x00029207) cell_cmode_itu_pane_g1

0xe590,	// (0x00029210) cell_cmode_itu_pane_t1

0xe59e,	// (0x0002921e) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0002aa31) cell_cmode_itu_pane_t

0xdced,	// (0x0002896d) aid_touch_ctrl_left

0xdcf5,	// (0x00028975) aid_touch_ctrl_right

0x7ed5,	// (0x00022b55) compa_mode_pane

0xe5ac,	// (0x0002922c) aid_cmod_rocker_key_size_cp

0xe5b6,	// (0x00029236) aid_cmode_itu_key_size_cp

0xe5c0,	// (0x00029240) compa_mode_pane_g1

0xe5c8,	// (0x00029248) compa_mode_pane_g2

0xe5d0,	// (0x00029250) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0002aa36) compa_mode_pane_g

0xe5d8,	// (0x00029258) main_comp_mode_itu_pane_cp

0xe5e0,	// (0x00029260) main_comp_mode_rocker_pane_cp

0xe5e8,	// (0x00029268) cell_cmode_itu_pane_cp_ParamLimits

0xe5e8,	// (0x00029268) cell_cmode_itu_pane_cp

0xe5fd,	// (0x0002927d) cell_cmode_rocker_pane_cp_ParamLimits

0xe5fd,	// (0x0002927d) cell_cmode_rocker_pane_cp

0x8838,	// (0x000234b8) bg_button_pane_cp06_cp_ParamLimits

0x8838,	// (0x000234b8) bg_button_pane_cp06_cp

0xc5b7,	// (0x00027237) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc5b7,	// (0x00027237) cell_cmode_rocker_pane_g1_cp

0xc339,	// (0x00026fb9) cell_cmode_rocker_pane_g2_cp

0x7ed5,	// (0x00022b55) bg_button_pane_cp07_cp

0xb257,	// (0x00025ed7) cell_cmode_itu_pane_g1_cp

0xe60f,	// (0x0002928f) cell_cmode_itu_pane_t1_cp

0xe60f,	// (0x0002928f) cell_cmode_itu_pane_t2_cp

0xb244,	// (0x00025ec4) settings_code_pane_cp2

0x7fc9,	// (0x00022c49) bg_popup_window_pane_cp3_ParamLimits

0x842c,	// (0x000230ac) heading_pane_cp3_ParamLimits

0x8438,	// (0x000230b8) listscroll_popup_graphic_pane_ParamLimits

0x6f6b,	// (0x00021beb) fep_hwr_aid_pane_ParamLimits

0x7334,	// (0x00021fb4) aid_touch_sctrl_top_ParamLimits

0x7341,	// (0x00021fc1) sctrl_sk_top_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0002a96c) sctrl_sk_top_pane_g_ParamLimits

0x734e,	// (0x00021fce) sctrl_sk_top_pane_t1_ParamLimits

0x7334,	// (0x00021fb4) aid_touch_sctrl_bottom_ParamLimits

0x734e,	// (0x00021fce) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc36,	// (0x000288b6) aid_area_touch_clock

0x7529,	// (0x000221a9) aid_vkb2_area_top_pane_cell_ParamLimits

0x7529,	// (0x000221a9) aid_vkb2_area_top_pane_cell

0x7674,	// (0x000222f4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7674,	// (0x000222f4) aid_vkb2_area_bottom_pane_cell

0xe1a5,	// (0x00028e25) popup_char_count_window

0xe61d,	// (0x0002929d) popup_char_count_window_g1

0xe626,	// (0x000292a6) popup_char_count_window_g2

0xe62f,	// (0x000292af) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0002aa3d) popup_char_count_window_g

0xe638,	// (0x000292b8) popup_char_count_window_t1

0x73ef,	// (0x0002206f) popup_fep_char_preview_window_ParamLimits

0x73ef,	// (0x0002206f) popup_fep_char_preview_window

0x7547,	// (0x000221c7) vkb2_top_candi_pane_ParamLimits

0x7547,	// (0x000221c7) vkb2_top_candi_pane

0xe646,	// (0x000292c6) cell_vkb2_top_candi_pane_ParamLimits

0xe646,	// (0x000292c6) cell_vkb2_top_candi_pane

0xa397,	// (0x00025017) bg_popup_fep_char_preview_window_ParamLimits

0xa397,	// (0x00025017) bg_popup_fep_char_preview_window

0x7957,	// (0x000225d7) popup_fep_char_preview_window_t1_ParamLimits

0x7957,	// (0x000225d7) popup_fep_char_preview_window_t1

0xe6bc,	// (0x0002933c) bg_popup_fep_char_preview_window_g1

0xe6c4,	// (0x00029344) bg_popup_fep_char_preview_window_g2

0xe693,	// (0x00029313) bg_popup_fep_char_preview_window_g3

0xe6cc,	// (0x0002934c) bg_popup_fep_char_preview_window_g4

0xe6d4,	// (0x00029354) bg_popup_fep_char_preview_window_g5

0x7991,	// (0x00022611) bg_popup_fep_char_preview_window_g6

0xe6dc,	// (0x0002935c) bg_popup_fep_char_preview_window_g7

0xe6e4,	// (0x00029364) bg_popup_fep_char_preview_window_g8

0xe6ec,	// (0x0002936c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0002aa44) bg_popup_fep_char_preview_window_g

0xc5b7,	// (0x00027237) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) cell_vkb2_top_candi_pane_g1

0xca15,	// (0x00027695) cell_vkb2_top_candi_pane_g2_ParamLimits

0xca15,	// (0x00027695) cell_vkb2_top_candi_pane_g2

0xca36,	// (0x000276b6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xca36,	// (0x000276b6) cell_vkb2_top_candi_pane_g3

0x7999,	// (0x00022619) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7999,	// (0x00022619) cell_vkb2_top_candi_pane_g4

0xe69b,	// (0x0002931b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe69b,	// (0x0002931b) cell_vkb2_top_candi_pane_g5

0xdaca,	// (0x0002874a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xdaca,	// (0x0002874a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0002aa57) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0002aa57) cell_vkb2_top_candi_pane_g

0x79ba,	// (0x0002263a) cell_vkb2_top_candi_pane_t1

0x6dcb,	// (0x00021a4b) aid_size_touch_slider_mark_ParamLimits

0x6dcb,	// (0x00021a4b) aid_size_touch_slider_mark

0xe2e8,	// (0x00028f68) grid_graphic2_catg_pane_ParamLimits

0xe2e8,	// (0x00028f68) grid_graphic2_catg_pane

0xe386,	// (0x00029006) popup_grid_graphic2_window_t1_ParamLimits

0xe386,	// (0x00029006) popup_grid_graphic2_window_t1

0xe398,	// (0x00029018) popup_grid_graphic2_window_t2_ParamLimits

0xe398,	// (0x00029018) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0002aa12) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0002aa12) popup_grid_graphic2_window_t

0x8252,	// (0x00022ed2) bg_button_pane_cp05_ParamLimits

0xe502,	// (0x00029182) cell_graphic2_control_pane_g1_ParamLimits

0xe6f4,	// (0x00029374) cell_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x00029374) cell_graphic2_catg_pane

0x7ed5,	// (0x00022b55) bg_button_pane_cp12

0xe706,	// (0x00029386) cell_graphic2_catg_pane_g1

0xdc02,	// (0x00028882) cell_tb_ext_pane_t1_ParamLimits

0x7791,	// (0x00022411) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7791,	// (0x00022411) vkb2_top_cell_right_narrow_pane

0x77a9,	// (0x00022429) vkb2_top_cell_right_wide_pane_ParamLimits

0x77a9,	// (0x00022429) vkb2_top_cell_right_wide_pane

0x6f5d,	// (0x00021bdd) bg_vkb2_func_pane_ParamLimits

0x6f5d,	// (0x00021bdd) bg_vkb2_func_pane

0x781a,	// (0x0002249a) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp03

0x7878,	// (0x000224f8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d1a,	// (0x0002499a) bg_vkb2_func_pane_g1

0x9d22,	// (0x000249a2) bg_vkb2_func_pane_g2

0x9d32,	// (0x000249b2) bg_vkb2_func_pane_g3

0x9d2a,	// (0x000249aa) bg_vkb2_func_pane_g4

0x9d3a,	// (0x000249ba) bg_vkb2_func_pane_g5

0x9d42,	// (0x000249c2) bg_vkb2_func_pane_g6

0x9d4a,	// (0x000249ca) bg_vkb2_func_pane_g7

0x9d52,	// (0x000249d2) bg_vkb2_func_pane_g8

0x9d12,	// (0x00024992) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0002aa64) bg_vkb2_func_pane_g

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp01

0x781a,	// (0x0002249a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x781a,	// (0x0002249a) vkb2_top_cell_right_wide_pane_g1

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f5d,	// (0x00021bdd) bg_vkb2_fuc_pane_cp02

0x7878,	// (0x000224f8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7878,	// (0x000224f8) vkb2_top_cell_right_narrow_pane_g1

0xd838,	// (0x000284b8) aid_touch_area_decrease_ParamLimits

0xd838,	// (0x000284b8) aid_touch_area_decrease

0xd856,	// (0x000284d6) aid_touch_area_increase_ParamLimits

0xd856,	// (0x000284d6) aid_touch_area_increase

0xd862,	// (0x000284e2) aid_touch_area_mute_ParamLimits

0xd862,	// (0x000284e2) aid_touch_area_mute

0xd886,	// (0x00028506) aid_touch_area_slider_ParamLimits

0xd886,	// (0x00028506) aid_touch_area_slider

0xd972,	// (0x000285f2) popup_slider_window_g4_ParamLimits

0xd972,	// (0x000285f2) popup_slider_window_g4

0xd97e,	// (0x000285fe) popup_slider_window_g5_ParamLimits

0xd97e,	// (0x000285fe) popup_slider_window_g5

0xd9a0,	// (0x00028620) popup_slider_window_g6_ParamLimits

0xd9a0,	// (0x00028620) popup_slider_window_g6

0xd9e0,	// (0x00028660) popup_slider_window_t2_ParamLimits

0xd9e0,	// (0x00028660) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0002a960) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0002a960) popup_slider_window_t

0xd9f8,	// (0x00028678) slider_pane_ParamLimits

0xd9f8,	// (0x00028678) slider_pane

0xe70f,	// (0x0002938f) slider_pane_g1_ParamLimits

0xe70f,	// (0x0002938f) slider_pane_g1

0xe723,	// (0x000293a3) slider_pane_g2_ParamLimits

0xe723,	// (0x000293a3) slider_pane_g2

0xe739,	// (0x000293b9) slider_pane_g3_ParamLimits

0xe739,	// (0x000293b9) slider_pane_g3

0x0003,

0xfdf7,	// (0x0002aa77) slider_pane_g_ParamLimits

0xfdf7,	// (0x0002aa77) slider_pane_g

0x6a14,	// (0x00021694) popup_tb_float_extension_window_ParamLimits

0x6a14,	// (0x00021694) popup_tb_float_extension_window

0xe765,	// (0x000293e5) aid_size_cell_tb_float_ext

0x7ed5,	// (0x00022b55) bg_popup_sub_window_cp28

0xe771,	// (0x000293f1) grid_tb_float_ext_pane

0xe77b,	// (0x000293fb) cell_tb_float_ext_pane_ParamLimits

0xe77b,	// (0x000293fb) cell_tb_float_ext_pane

0xe795,	// (0x00029415) cell_tb_float_ext_pane_g1

0xe79e,	// (0x0002941e) grid_highlight_pane_cp12

0x709e,	// (0x00021d1e) cell_last_hwr_side_pane_ParamLimits

0x709e,	// (0x00021d1e) cell_last_hwr_side_pane

0xc339,	// (0x00026fb9) cell_last_hwr_side_pane_g1

0xe7a7,	// (0x00029427) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0002aa80) cell_last_hwr_side_pane_g

0x7740,	// (0x000223c0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7740,	// (0x000223c0) vkb2_area_bottom_space_btn_pane

0xc5b7,	// (0x00027237) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25a,	// (0x00028eda) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79ba,	// (0x0002263a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79d9,	// (0x00022659) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79d9,	// (0x00022659) vkb2_area_bottom_space_btn_pane_g1

0x7a13,	// (0x00022693) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a13,	// (0x00022693) vkb2_area_bottom_space_btn_pane_g2

0x7a49,	// (0x000226c9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a49,	// (0x000226c9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0002aa85) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0002aa85) vkb2_area_bottom_space_btn_pane_g

0x7012,	// (0x00021c92) cel_fep_hwr_func_pane_ParamLimits

0x7012,	// (0x00021c92) cel_fep_hwr_func_pane

0x704e,	// (0x00021cce) cell_hwr_side_button_pane_ParamLimits

0x704e,	// (0x00021cce) cell_hwr_side_button_pane

0xdc36,	// (0x000288b6) aid_area_touch_clock_ParamLimits

0x8252,	// (0x00022ed2) bg_uniindi_top_pane_ParamLimits

0xdc48,	// (0x000288c8) uniindi_top_pane_g1_ParamLimits

0xdc5e,	// (0x000288de) uniindi_top_pane_g2_ParamLimits

0xdc6a,	// (0x000288ea) uniindi_top_pane_g3_ParamLimits

0xdc7b,	// (0x000288fb) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0002a998) uniindi_top_pane_g_ParamLimits

0xdc88,	// (0x00028908) uniindi_top_pane_t1_ParamLimits

0x8252,	// (0x00022ed2) bg_vkb2_func_pane_cp01_ParamLimits

0x8252,	// (0x00022ed2) bg_vkb2_func_pane_cp01

0xe7b0,	// (0x00029430) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b0,	// (0x00029430) cel_fep_hwr_func_pane_g1

0x8252,	// (0x00022ed2) bg_vkb2_func_pane_cp02_ParamLimits

0x8252,	// (0x00022ed2) bg_vkb2_func_pane_cp02

0xe7b0,	// (0x00029430) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b0,	// (0x00029430) cell_hwr_side_button_pane_g1

0x9b93,	// (0x00024813) status_pane_g4_ParamLimits

0x9b93,	// (0x00024813) status_pane_g4

0x9bad,	// (0x0002482d) status_pane_t1

0xc073,	// (0x00026cf3) form2_midp_gauge_slider_cont_pane

0xc07b,	// (0x00026cfb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc08d,	// (0x00026d0d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc09f,	// (0x00026d1f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a764) form2_midp_gauge_slider_pane_t_ParamLimits

0xc0b1,	// (0x00026d31) form2_midp_slider_pane_ParamLimits

0x73af,	// (0x0002202f) aid_size_cell_func_vkb2_ParamLimits

0x73af,	// (0x0002202f) aid_size_cell_func_vkb2

0xe751,	// (0x000293d1) slider_pane_g4_ParamLimits

0xe751,	// (0x000293d1) slider_pane_g4

0x7a93,	// (0x00022713) form2_midp_gauge_slider_pane_t2_cp01

0x7aa1,	// (0x00022721) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7aa1,	// (0x00022721) form2_midp_gauge_slider_pane_t3_cp01

0x7abe,	// (0x0002273e) form2_midp_slider_pane_cp01

0x7ed5,	// (0x00022b55) navi_smil_pane

0xe7e9,	// (0x00029469) navi_smil_pane_g1

0xe7f1,	// (0x00029471) navi_smil_pane_t1

0xe7be,	// (0x0002943e) form2_midp_slider_pane_g1

0xe7c7,	// (0x00029447) form2_midp_slider_pane_g2

0xe7cf,	// (0x0002944f) form2_midp_slider_pane_g3

0xe7be,	// (0x0002943e) form2_midp_slider_pane_g4

0xe7d7,	// (0x00029457) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0002aa8e) form2_midp_slider_pane_g

0x7a83,	// (0x00022703) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a83,	// (0x00022703) vkb2_area_bottom_space_btn_pane_g4

0x99c2,	// (0x00024642) lc0_navi_pane_ParamLimits

0x99c2,	// (0x00024642) lc0_navi_pane

0x9a38,	// (0x000246b8) lc0_stat_indi_pane_ParamLimits

0x9a38,	// (0x000246b8) lc0_stat_indi_pane

0x9a4f,	// (0x000246cf) ls0_title_pane_ParamLimits

0x9a4f,	// (0x000246cf) ls0_title_pane

0x8838,	// (0x000234b8) bg_popup_sub_pane_cp14_ParamLimits

0xdc1d,	// (0x0002889d) list_uniindi_pane_ParamLimits

0xdc29,	// (0x000288a9) uniindi_top_pane_ParamLimits

0xdcc5,	// (0x00028945) list_single_uniindi_pane_g1_ParamLimits

0xdcd8,	// (0x00028958) list_single_uniindi_pane_t1_ParamLimits

0x7ac7,	// (0x00022747) lc0_stat_clock_pane_ParamLimits

0x7ac7,	// (0x00022747) lc0_stat_clock_pane

0xe7ff,	// (0x0002947f) lc0_stat_indi_pane_g1_ParamLimits

0xe7ff,	// (0x0002947f) lc0_stat_indi_pane_g1

0xe80c,	// (0x0002948c) lc0_stat_indi_pane_g2_ParamLimits

0xe80c,	// (0x0002948c) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0002aa99) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0002aa99) lc0_stat_indi_pane_g

0x7ad4,	// (0x00022754) lc0_uni_indicator_pane_ParamLimits

0x7ad4,	// (0x00022754) lc0_uni_indicator_pane

0xe819,	// (0x00029499) ls0_title_pane_g1_ParamLimits

0xe819,	// (0x00029499) ls0_title_pane_g1

0xe82d,	// (0x000294ad) ls0_title_pane_t1_ParamLimits

0xe82d,	// (0x000294ad) ls0_title_pane_t1

0x7ae1,	// (0x00022761) lc0_uni_indicator_pane_g1_ParamLimits

0x7ae1,	// (0x00022761) lc0_uni_indicator_pane_g1

0xe863,	// (0x000294e3) lc0_stat_clock_pane_t1

0x7ed5,	// (0x00022b55) main_ai5_pane

0xe871,	// (0x000294f1) ai5_sk_pane_ParamLimits

0xe871,	// (0x000294f1) ai5_sk_pane

0xe87e,	// (0x000294fe) cell_ai5_widget_pane_ParamLimits

0xe87e,	// (0x000294fe) cell_ai5_widget_pane

0xe934,	// (0x000295b4) aid_size_cell_widget_grid

0xe94a,	// (0x000295ca) bg_ai5_widget_pane_ParamLimits

0xe94a,	// (0x000295ca) bg_ai5_widget_pane

0xe9be,	// (0x0002963e) cell_ai5_widget_pane_g2

0xe9ce,	// (0x0002964e) cell_ai5_widget_pane_g3

0xe9e5,	// (0x00029665) cell_ai5_widget_pane_g4

0xe9f1,	// (0x00029671) cell_ai5_widget_pane_g5

0xe9fd,	// (0x0002967d) cell_ai5_widget_pane_g6

0xea09,	// (0x00029689) cell_ai5_widget_pane_g7

0xea51,	// (0x000296d1) cell_ai5_widget_pane_t1_ParamLimits

0xea51,	// (0x000296d1) cell_ai5_widget_pane_t1

0xea6e,	// (0x000296ee) cell_ai5_widget_pane_t2_ParamLimits

0xea6e,	// (0x000296ee) cell_ai5_widget_pane_t2

0xea86,	// (0x00029706) cell_ai5_widget_pane_t3_ParamLimits

0xea86,	// (0x00029706) cell_ai5_widget_pane_t3

0xea9e,	// (0x0002971e) cell_ai5_widget_pane_t4_ParamLimits

0xea9e,	// (0x0002971e) cell_ai5_widget_pane_t4

0xeabb,	// (0x0002973b) cell_ai5_widget_pane_t5_ParamLimits

0xeabb,	// (0x0002973b) cell_ai5_widget_pane_t5

0xeada,	// (0x0002975a) cell_ai5_widget_pane_t6_ParamLimits

0xeada,	// (0x0002975a) cell_ai5_widget_pane_t6

0xeaec,	// (0x0002976c) cell_ai5_widget_pane_t7_ParamLimits

0xeaec,	// (0x0002976c) cell_ai5_widget_pane_t7

0xeb05,	// (0x00029785) cell_ai5_widget_pane_t8_ParamLimits

0xeb05,	// (0x00029785) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0002aab3) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0002aab3) cell_ai5_widget_pane_t

0xeb59,	// (0x000297d9) grid_ai5_widget_pane

0x8838,	// (0x000234b8) highlight_cell_ai5_widget_pane_ParamLimits

0x8838,	// (0x000234b8) highlight_cell_ai5_widget_pane

0xeb70,	// (0x000297f0) ai5_sk_left_pane

0xeb7a,	// (0x000297fa) ai5_sk_middle_pane

0xeb84,	// (0x00029804) ai5_sk_right_pane

0xeb8e,	// (0x0002980e) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x0002980e) bg_ai5_widget_pane_g1

0xeb9a,	// (0x0002981a) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x0002981a) bg_ai5_widget_pane_g2

0xeba6,	// (0x00029826) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x00029826) bg_ai5_widget_pane_g3

0xebb2,	// (0x00029832) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x00029832) bg_ai5_widget_pane_g4

0xebbe,	// (0x0002983e) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x0002983e) bg_ai5_widget_pane_g5

0xebca,	// (0x0002984a) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x0002984a) bg_ai5_widget_pane_g6

0xebd6,	// (0x00029856) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x00029856) bg_ai5_widget_pane_g7

0xebe2,	// (0x00029862) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x00029862) bg_ai5_widget_pane_g8

0xebee,	// (0x0002986e) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x0002986e) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0002aac8) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0002aac8) bg_ai5_widget_pane_g

0xec20,	// (0x000298a0) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x000298a0) cell_shortcut_ai5_widget_pane

0x94ca,	// (0x0002414a) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x000298b1) cell_grid_ai5_widget_pane_g1

0x94ca,	// (0x0002414a) highlight_cell_shortcut_ai5_widget_pane

0x9d22,	// (0x000249a2) ai5_sk_left_pane_g1

0xec3a,	// (0x000298ba) ai5_sk_left_pane_g2

0xec42,	// (0x000298c2) ai5_sk_left_pane_g3

0xec4a,	// (0x000298ca) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0002aadb) ai5_sk_left_pane_g

0xec52,	// (0x000298d2) ai5_sk_left_pane_t1

0x9d1a,	// (0x0002499a) ai5_sk_right_pane_g1

0xec60,	// (0x000298e0) ai5_sk_right_pane_g2

0xec68,	// (0x000298e8) ai5_sk_right_pane_g3

0xec70,	// (0x000298f0) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0002aae4) ai5_sk_right_pane_g

0xec78,	// (0x000298f8) ai5_sk_right_pane_t1

0x9d1a,	// (0x0002499a) ai5_sk_middle_pane_g1

0x9d22,	// (0x000249a2) ai5_sk_middle_pane_g2

0x9d3a,	// (0x000249ba) ai5_sk_middle_pane_g3

0xec68,	// (0x000298e8) ai5_sk_middle_pane_g4

0xec42,	// (0x000298c2) ai5_sk_middle_pane_g5

0xec86,	// (0x00029906) ai5_sk_middle_pane_g6

0xec8e,	// (0x0002990e) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0002aaed) ai5_sk_middle_pane_g

0x984e,	// (0x000244ce) aid_touch_area_size_lc0_ParamLimits

0x984e,	// (0x000244ce) aid_touch_area_size_lc0

0x719d,	// (0x00021e1d) cell_hwr_candidate_pane_t1_ParamLimits

0x986a,	// (0x000244ea) aid_touch_navi_pane

0x9b3d,	// (0x000247bd) status_dt_navi_pane_ParamLimits

0x9b3d,	// (0x000247bd) status_dt_navi_pane

0x9b4a,	// (0x000247ca) status_dt_sta_pane_ParamLimits

0x9b4a,	// (0x000247ca) status_dt_sta_pane

0xec96,	// (0x00029916) dt_sta_controll_pane

0xeca3,	// (0x00029923) dt_sta_indi_pane

0xecb4,	// (0x00029934) dt_sta_title_pane

0x8252,	// (0x00022ed2) bg_dt_sta_indi_pane_ParamLimits

0x8252,	// (0x00022ed2) bg_dt_sta_indi_pane

0xecc7,	// (0x00029947) dt_sta_battery_pane

0xeccf,	// (0x0002994f) dt_sta_indi_pane_g1

0xecd8,	// (0x00029958) dt_sta_indi_pane_g2

0xece1,	// (0x00029961) dt_sta_indi_pane_g3

0x0002,

0x0019,	// (0x0001ac99) dt_sta_indi_pane_g

0xecea,	// (0x0002996a) dt_sta_signal_pane

0x8838,	// (0x000234b8) bg_dt_sta_title_pane_ParamLimits

0x8838,	// (0x000234b8) bg_dt_sta_title_pane

0xecf3,	// (0x00029973) dt_sta_title_pane_g1

0xecfb,	// (0x0002997b) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x0002997b) dt_sta_title_pane_t1

0x7ed5,	// (0x00022b55) bg_dt_sta_control_pane

0xed10,	// (0x00029990) dt_sta_controll_pane_g1

0xed19,	// (0x00029999) bg_dt_sta_title_pane_g1

0xed22,	// (0x000299a2) bg_dt_sta_title_pane_g2

0xed2b,	// (0x000299ab) bg_dt_sta_title_pane_g3

0x0002,

0x0020,	// (0x0001aca0) bg_dt_sta_title_pane_g

0xc339,	// (0x00026fb9) bg_dt_sta_indi_pane_g1

0xed34,	// (0x000299b4) dt_sta_signal_pane_g1

0xed3c,	// (0x000299bc) dt_sta_signal_pane_g2

0x0001,

0x0027,	// (0x0001aca7) dt_sta_signal_pane_g

0xed44,	// (0x000299c4) dt_sta_battery_pane_g1

0xed4d,	// (0x000299cd) dt_sta_battery_pane_t1

0xc339,	// (0x00026fb9) bg_dt_sta_control_pane_g1

0x8fc9,	// (0x00023c49) fep_china_uni_eep_pane

0x8fd1,	// (0x00023c51) fep_china_uni_entry_pane_ParamLimits

0x8fe1,	// (0x00023c61) popup_fep_china_uni_window_g1_ParamLimits

0x8ff1,	// (0x00023c71) popup_fep_china_uni_window_g2_ParamLimits

0x8ff1,	// (0x00023c71) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a39d) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a39d) popup_fep_china_uni_window_g

0xed5c,	// (0x000299dc) fep_china_uni_eep_pane_g1

0xed64,	// (0x000299e4) fep_china_uni_eep_pane_t1

0xe7e0,	// (0x00029460) aid_touch_area_size_smil_player

0x99ba,	// (0x0002463a) lc0_clock_pane

0x9ba1,	// (0x00024821) status_pane_g5_ParamLimits

0x9ba1,	// (0x00024821) status_pane_g5

0x66d9,	// (0x00021359) popup_keymap_window

0x9b5f,	// (0x000247df) status_icon_pane

0xe9ce,	// (0x0002964e) cell_ai5_widget_pane_g3_ParamLimits

0xe9e5,	// (0x00029665) cell_ai5_widget_pane_g4_ParamLimits

0xe9f1,	// (0x00029671) cell_ai5_widget_pane_g5_ParamLimits

0xea15,	// (0x00029695) cell_ai5_widget_pane_g8_ParamLimits

0xea15,	// (0x00029695) cell_ai5_widget_pane_g8

0xea29,	// (0x000296a9) cell_ai5_widget_pane_g9_ParamLimits

0xea29,	// (0x000296a9) cell_ai5_widget_pane_g9

0xea3d,	// (0x000296bd) cell_ai5_widget_pane_g10_ParamLimits

0xea3d,	// (0x000296bd) cell_ai5_widget_pane_g10

0xed73,	// (0x000299f3) status_icon_pane_g1

0x7ed5,	// (0x00022b55) bg_popup_sub_pane_cp13

0xed7b,	// (0x000299fb) popup_keymap_window_t1

0x9793,	// (0x00024413) control_pane_g6_ParamLimits

0x9793,	// (0x00024413) control_pane_g6

0x97a0,	// (0x00024420) control_pane_g7_ParamLimits

0x97a0,	// (0x00024420) control_pane_g7

0x97ad,	// (0x0002442d) control_pane_g8_ParamLimits

0x97ad,	// (0x0002442d) control_pane_g8

0xec96,	// (0x00029916) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x00029923) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x00029934) dt_sta_title_pane_ParamLimits

0x8770,	// (0x000233f0) aid_size_touch_scroll_bar_cale

0x5d54,	// (0x000209d4) popup_discreet_window_ParamLimits

0x5d54,	// (0x000209d4) popup_discreet_window

0x5ddc,	// (0x00020a5c) popup_sk_window

0xa397,	// (0x00025017) bg_popup_sub_pane_cp28_ParamLimits

0xa397,	// (0x00025017) bg_popup_sub_pane_cp28

0xed89,	// (0x00029a09) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x00029a09) popup_discreet_window_g1

0xeda9,	// (0x00029a29) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x00029a29) popup_discreet_window_t1

0xedc7,	// (0x00029a47) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x00029a47) popup_discreet_window_t2

0x0002,

0x002c,	// (0x0001acac) popup_discreet_window_t_ParamLimits

0x002c,	// (0x0001acac) popup_discreet_window_t

0x7af5,	// (0x00022775) popup_sk_window_g1

0x7aff,	// (0x0002277f) popup_sk_window_g2

0x0001,

0xfe7c,	// (0x0002aafc) popup_sk_window_g

0x7b09,	// (0x00022789) popup_sk_window_t1

0x7b17,	// (0x00022797) popup_sk_window_t1_copy1

0xe9be,	// (0x0002963e) cell_ai5_widget_pane_g2_ParamLimits

0xeb17,	// (0x00029797) cell_ai5_widget_pane_t9_ParamLimits

0xeb17,	// (0x00029797) cell_ai5_widget_pane_t9

0x7ed5,	// (0x00022b55) main_fep_fshwr2_pane

0x7b25,	// (0x000227a5) aid_fshwr2_btn_pane

0x7b31,	// (0x000227b1) aid_fshwr2_syb_pane

0x7b3d,	// (0x000227bd) aid_fshwr2_txt_pane

0x7b49,	// (0x000227c9) fshwr2_func_candi_pane

0x7b5e,	// (0x000227de) fshwr2_hwr_syb_pane

0x7b6e,	// (0x000227ee) fshwr2_icf_pane

0x7ed5,	// (0x00022b55) fshwr2_icf_bg_pane

0x7b97,	// (0x00022817) fshwr2_icf_pane_t1_ParamLimits

0x7b97,	// (0x00022817) fshwr2_icf_pane_t1

0x8eb7,	// (0x00023b37) fshwr2_func_candi_pane_g1

0xee19,	// (0x00029a99) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x00029a99) fshwr2_func_candi_row_pane

0x7baf,	// (0x0002282f) cell_fshwr2_syb_pane_ParamLimits

0x7baf,	// (0x0002282f) cell_fshwr2_syb_pane

0xc5b7,	// (0x00027237) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) fshwr2_hwr_syb_pane_g1

0x7ed5,	// (0x00022b55) bg_popup_call_pane_cp01

0x7bc5,	// (0x00022845) fshwr2_func_candi_cell_pane_ParamLimits

0x7bc5,	// (0x00022845) fshwr2_func_candi_cell_pane

0xee29,	// (0x00029aa9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee29,	// (0x00029aa9) fshwr2_func_candi_cell_bg_pane

0x7bfa,	// (0x0002287a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7bfa,	// (0x0002287a) fshwr2_func_candi_cell_pane_g1

0x7c22,	// (0x000228a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c22,	// (0x000228a2) fshwr2_func_candi_cell_pane_t1

0x7ed5,	// (0x00022b55) bg_button_pane_cp08

0xee35,	// (0x00029ab5) cell_fshwr2_syb_bg_pane

0x7c35,	// (0x000228b5) cell_fshwr2_syb_bg_pane_g1

0x7c3d,	// (0x000228bd) cell_fshwr2_syb_bg_pane_t1

0x8838,	// (0x000234b8) main_tmo_pane

0xaea6,	// (0x00025b26) uni_indicator_pane_g1_ParamLimits

0xaebc,	// (0x00025b3c) uni_indicator_pane_g2_ParamLimits

0xaed2,	// (0x00025b52) uni_indicator_pane_g3_ParamLimits

0xaee6,	// (0x00025b66) uni_indicator_pane_g4_ParamLimits

0xaee6,	// (0x00025b66) uni_indicator_pane_g4

0xaefa,	// (0x00025b7a) uni_indicator_pane_g5_ParamLimits

0xaefa,	// (0x00025b7a) uni_indicator_pane_g5

0xaefa,	// (0x00025b7a) uni_indicator_pane_g6_ParamLimits

0xaefa,	// (0x00025b7a) uni_indicator_pane_g6

0xf91a,	// (0x0002a59a) uni_indicator_pane_g_ParamLimits

0xd814,	// (0x00028494) popup_tmo_note_window_ParamLimits

0xd814,	// (0x00028494) popup_tmo_note_window

0x8838,	// (0x000234b8) fshwr2_bg_pane

0x7c13,	// (0x00022893) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c13,	// (0x00022893) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe81,	// (0x0002ab01) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe81,	// (0x0002ab01) fshwr2_func_candi_cell_pane_g

0xc339,	// (0x00026fb9) bg_popup_window_pane_cp01

0x7c4c,	// (0x000228cc) bg_popup_window_pane_g1_cp01

0xee3d,	// (0x00029abd) bg_popup_window_pane_cp22_ParamLimits

0xee3d,	// (0x00029abd) bg_popup_window_pane_cp22

0xee4b,	// (0x00029acb) listscroll_tmo_link_pane_ParamLimits

0xee4b,	// (0x00029acb) listscroll_tmo_link_pane

0xee8b,	// (0x00029b0b) popup_tmo_note_window_g1_ParamLimits

0xee8b,	// (0x00029b0b) popup_tmo_note_window_g1

0xee98,	// (0x00029b18) tmo_note_info_pane_ParamLimits

0xee98,	// (0x00029b18) tmo_note_info_pane

0xeeb2,	// (0x00029b32) list_tmo_note_info_pane_g1_ParamLimits

0xeeb2,	// (0x00029b32) list_tmo_note_info_pane_g1

0xeec9,	// (0x00029b49) list_tmo_note_info_pane_g2_ParamLimits

0xeec9,	// (0x00029b49) list_tmo_note_info_pane_g2

0x0001,

0x003d,	// (0x0001acbd) list_tmo_note_info_pane_g_ParamLimits

0x003d,	// (0x0001acbd) list_tmo_note_info_pane_g

0xeee5,	// (0x00029b65) list_tmo_note_info_text_pane_ParamLimits

0xeee5,	// (0x00029b65) list_tmo_note_info_text_pane

0xef66,	// (0x00029be6) list_tmo_link_pane

0xef73,	// (0x00029bf3) scroll_pane_cp20

0xef80,	// (0x00029c00) list_single_tmo_link_pane_ParamLimits

0xef80,	// (0x00029c00) list_single_tmo_link_pane

0xef90,	// (0x00029c10) list_single_tmo_link_pane_t1

0xef9e,	// (0x00029c1e) list_tmo_note_info_text_pane_t1_ParamLimits

0xef9e,	// (0x00029c1e) list_tmo_note_info_text_pane_t1

0x88f2,	// (0x00023572) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88f2,	// (0x00023572) aid_size_touch_scroll_bar_cp01

0x4f9c,	// (0x0001fc1c) aid_size_touch_slider_marker

0x5dc4,	// (0x00020a44) popup_settings_window_ParamLimits

0x5dc4,	// (0x00020a44) popup_settings_window

0x516b,	// (0x0001fdeb) popup_candi_list_indi_window

0x986a,	// (0x000244ea) aid_touch_navi_pane_ParamLimits

0x7308,	// (0x00021f88) rs_clock_indi_pane

0x7311,	// (0x00021f91) sctrl_sk_bottom_pane_ParamLimits

0x7322,	// (0x00021fa2) sctrl_sk_top_pane_ParamLimits

0x7409,	// (0x00022089) popup_fep_tooltip_window

0xe934,	// (0x000295b4) aid_size_cell_widget_grid_ParamLimits

0xe9a9,	// (0x00029629) cell_ai5_widget_pane_g1_ParamLimits

0xe9a9,	// (0x00029629) cell_ai5_widget_pane_g1

0xe9fd,	// (0x0002967d) cell_ai5_widget_pane_g6_ParamLimits

0xea09,	// (0x00029689) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0002aa9e) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0002aa9e) cell_ai5_widget_pane_g

0xeb3b,	// (0x000297bb) cell_ai5_widget_pane_t10_ParamLimits

0xeb3b,	// (0x000297bb) cell_ai5_widget_pane_t10

0xeb59,	// (0x000297d9) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x0002987a) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x0002987a) cell_contacts_ai5_widget_pane

0xeddc,	// (0x00029a5c) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x00029a5c) popup_discreet_window_t3

0x7b83,	// (0x00022803) popup_fshwr2_char_preview_window_ParamLimits

0x7b83,	// (0x00022803) popup_fshwr2_char_preview_window

0xef03,	// (0x00029b83) tmo_note_info_pane_t1

0xef18,	// (0x00029b98) tmo_note_info_pane_t2

0xef2d,	// (0x00029bad) tmo_note_info_pane_t3

0xef42,	// (0x00029bc2) tmo_note_info_pane_t4

0xef54,	// (0x00029bd4) tmo_note_info_pane_t5

0x0004,

0x0042,	// (0x0001acc2) tmo_note_info_pane_t

0xef66,	// (0x00029be6) list_tmo_link_pane_ParamLimits

0xef73,	// (0x00029bf3) scroll_pane_cp20_ParamLimits

0x7ed5,	// (0x00022b55) bg_popup_fep_char_preview_window_cp01

0xefb7,	// (0x00029c37) popup_fshwr2_char_preview_window_t1

0xefc5,	// (0x00029c45) popup_candi_list_indi_window_g1

0xefce,	// (0x00029c4e) bg_cell_contacts_ai5_widget_pane

0xefda,	// (0x00029c5a) cell_contacts_ai5_widget_pane_g1

0xc9d7,	// (0x00027657) cell_contacts_ai5_widget_pane_g2

0xefef,	// (0x00029c6f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe86,	// (0x0002ab06) cell_contacts_ai5_widget_pane_g

0xeffb,	// (0x00029c7b) cell_contacts_ai5_widget_pane_t1

0x8838,	// (0x000234b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf072,	// (0x00029cf2) settings_container_pane

0x94ca,	// (0x0002414a) listscroll_set_pane_copy1

0xba22,	// (0x000266a2) scroll_pane_cp121_copy1

0xf07e,	// (0x00029cfe) set_content_pane_copy1

0xf086,	// (0x00029d06) aid_height_set_list_copy1_ParamLimits

0xf086,	// (0x00029d06) aid_height_set_list_copy1

0xb0f2,	// (0x00025d72) aid_size_parent_copy1_ParamLimits

0xb0f2,	// (0x00025d72) aid_size_parent_copy1

0xf092,	// (0x00029d12) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf092,	// (0x00029d12) button_value_adjust_pane_cp6_copy1

0x9808,	// (0x00024488) list_highlight_pane_cp2_copy1_ParamLimits

0x9808,	// (0x00024488) list_highlight_pane_cp2_copy1

0xf0a6,	// (0x00029d26) list_set_pane_copy1_ParamLimits

0xf0a6,	// (0x00029d26) list_set_pane_copy1

0xf00d,	// (0x00029c8d) main_pane_set_t1_copy1_ParamLimits

0xf00d,	// (0x00029c8d) main_pane_set_t1_copy1

0xf047,	// (0x00029cc7) main_pane_set_t2_copy1_ParamLimits

0xf047,	// (0x00029cc7) main_pane_set_t2_copy1

0xf153,	// (0x00029dd3) main_pane_set_t3_copy1

0xf161,	// (0x00029de1) main_pane_set_t4_copy1

0xf066,	// (0x00029ce6) set_content_pane_g1_copy1_ParamLimits

0xf066,	// (0x00029ce6) set_content_pane_g1_copy1

0xf16f,	// (0x00029def) setting_code_pane_copy1

0xf177,	// (0x00029df7) setting_slider_graphic_pane_copy1

0xf177,	// (0x00029df7) setting_slider_pane_copy1

0xf177,	// (0x00029df7) setting_text_pane_copy1

0xf177,	// (0x00029df7) setting_volume_pane_copy1

0xf16f,	// (0x00029def) settings_code_pane_cp2_copy1

0xf17f,	// (0x00029dff) settings_code_pane_cp_copy1_ParamLimits

0xf17f,	// (0x00029dff) settings_code_pane_cp_copy1

0x7c55,	// (0x000228d5) volume_set_pane_copy1

0xf193,	// (0x00029e13) volume_set_pane_g10_copy1

0xf19b,	// (0x00029e1b) volume_set_pane_g1_copy1

0xf1a3,	// (0x00029e23) volume_set_pane_g2_copy1

0xf1ab,	// (0x00029e2b) volume_set_pane_g3_copy1

0xf1b3,	// (0x00029e33) volume_set_pane_g4_copy1

0xf1bb,	// (0x00029e3b) volume_set_pane_g5_copy1

0xf1c3,	// (0x00029e43) volume_set_pane_g6_copy1

0xf1cb,	// (0x00029e4b) volume_set_pane_g7_copy1

0xf1d3,	// (0x00029e53) volume_set_pane_g8_copy1

0xf1db,	// (0x00029e5b) volume_set_pane_g9_copy1

0x7fc9,	// (0x00022c49) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fc9,	// (0x00022c49) bg_set_opt_pane_cp_copy1

0x7c5d,	// (0x000228dd) setting_slider_pane_t1_copy1_ParamLimits

0x7c5d,	// (0x000228dd) setting_slider_pane_t1_copy1

0x7c7b,	// (0x000228fb) setting_slider_pane_t2_copy1_ParamLimits

0x7c7b,	// (0x000228fb) setting_slider_pane_t2_copy1

0x7c95,	// (0x00022915) setting_slider_pane_t3_copy1_ParamLimits

0x7c95,	// (0x00022915) setting_slider_pane_t3_copy1

0x7cad,	// (0x0002292d) slider_set_pane_copy1_ParamLimits

0x7cad,	// (0x0002292d) slider_set_pane_copy1

0x8893,	// (0x00023513) set_opt_bg_pane_g1_copy2

0x889b,	// (0x0002351b) set_opt_bg_pane_g2_copy2

0xf1e3,	// (0x00029e63) set_opt_bg_pane_g3_copy2

0x88ab,	// (0x0002352b) set_opt_bg_pane_g4_copy2

0x88b3,	// (0x00023533) set_opt_bg_pane_g5_copy2

0x88bb,	// (0x0002353b) set_opt_bg_pane_g6_copy2

0xf1ed,	// (0x00029e6d) set_opt_bg_pane_g7_copy2

0xf1f5,	// (0x00029e75) set_opt_bg_pane_g8_copy2

0xf1ff,	// (0x00029e7f) set_opt_bg_pane_g9_copy2

0x7cc3,	// (0x00022943) aid_size_touch_slider_mark_copy1_ParamLimits

0x7cc3,	// (0x00022943) aid_size_touch_slider_mark_copy1

0xf209,	// (0x00029e89) slider_set_pane_g1_copy1

0x7cd7,	// (0x00022957) slider_set_pane_g2_copy1

0x6deb,	// (0x00021a6b) slider_set_pane_g3_copy1_ParamLimits

0x6deb,	// (0x00021a6b) slider_set_pane_g3_copy1

0x6dff,	// (0x00021a7f) slider_set_pane_g4_copy1_ParamLimits

0x6dff,	// (0x00021a7f) slider_set_pane_g4_copy1

0x6e17,	// (0x00021a97) slider_set_pane_g5_copy1_ParamLimits

0x6e17,	// (0x00021a97) slider_set_pane_g5_copy1

0x6deb,	// (0x00021a6b) slider_set_pane_g6_copy1_ParamLimits

0x6deb,	// (0x00021a6b) slider_set_pane_g6_copy1

0x7cdf,	// (0x0002295f) slider_set_pane_g7_copy1_ParamLimits

0x7cdf,	// (0x0002295f) slider_set_pane_g7_copy1

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp2_copy1

0xf212,	// (0x00029e92) setting_slider_graphic_pane_g1_copy1

0xf21b,	// (0x00029e9b) setting_slider_graphic_pane_t1_copy1

0xf22b,	// (0x00029eab) setting_slider_graphic_pane_t2_copy1

0xf23b,	// (0x00029ebb) slider_set_pane_cp_copy1

0xf24b,	// (0x00029ecb) input_focus_pane_cp1_copy1

0xf254,	// (0x00029ed4) list_set_text_pane_copy1

0xf25c,	// (0x00029edc) setting_text_pane_g1_copy1

0x49a2,	// (0x0001f622) set_text_pane_t1_copy1

0xf24b,	// (0x00029ecb) input_focus_pane_cp2_copy1

0xf25c,	// (0x00029edc) setting_code_pane_g1_copy1

0xf265,	// (0x00029ee5) setting_code_pane_t1_copy1

0xf273,	// (0x00029ef3) list_set_graphic_pane_copy1

0x7ee9,	// (0x00022b69) bg_set_opt_pane_cp4_copy1

0x91c5,	// (0x00023e45) list_set_graphic_pane_g1_copy1_ParamLimits

0x91c5,	// (0x00023e45) list_set_graphic_pane_g1_copy1

0xf285,	// (0x00029f05) list_set_graphic_pane_g2_copy1

0x91dd,	// (0x00023e5d) list_set_graphic_pane_t1_copy1_ParamLimits

0x91dd,	// (0x00023e5d) list_set_graphic_pane_t1_copy1

0xc339,	// (0x00026fb9) rs_clock_indi_pane_g1

0xf28d,	// (0x00029f0d) rs_clock_indi_pane_t1

0xf29b,	// (0x00029f1b) rs_indi_pane

0xf2a3,	// (0x00029f23) rs_indi_pane_g1

0xf2ac,	// (0x00029f2c) rs_indi_pane_g2

0xf2b5,	// (0x00029f35) rs_indi_pane_g3

0x0002,

0x0054,	// (0x0001acd4) rs_indi_pane_g

0x94ca,	// (0x0002414a) bg_popup_preview_window_pane_cp03

0xf2be,	// (0x00029f3e) popup_fep_tooltip_window_t1

0xcfb5,	// (0x00027c35) popup_note2_window_g2_ParamLimits

0xcfb5,	// (0x00027c35) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a8d0) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a8d0) popup_note2_window_g

0xd4b0,	// (0x00028130) bg_popup_sub_pane_cp11_ParamLimits

0xd4bd,	// (0x0002813d) cell_ai3_links_pane_g1_ParamLimits

0xd4d4,	// (0x00028154) cell_ai3_links_pane_t1

0x49a2,	// (0x0001f622) set_text_pane_t1_copy1_ParamLimits

0x93db,	// (0x0002405b) cell_graphic_popup_pane_cp2_ParamLimits

0x93db,	// (0x0002405b) cell_graphic_popup_pane_cp2

0xf2cc,	// (0x00029f4c) cell_graphic_popup_pane_g1_cp2

0x8583,	// (0x00023203) cell_graphic_popup_pane_g2_cp2

0xf2d4,	// (0x00029f54) cell_graphic_popup_pane_g3_cp2

0xf2dc,	// (0x00029f5c) cell_graphic_popup_pane_t2_cp2

0x8594,	// (0x00023214) grid_highlight_pane_cp3_cp2

0x8bd8,	// (0x00023858) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8838,	// (0x000234b8) main_tmo_pane_ParamLimits

0xd808,	// (0x00028488) popup_tmo_big_image_note_window

0xe998,	// (0x00029618) cell_ai5_widget_list_pane

0xe9a0,	// (0x00029620) cell_ai5_widget_lrg_icon_pane

0xef03,	// (0x00029b83) tmo_note_info_pane_t1_ParamLimits

0xef18,	// (0x00029b98) tmo_note_info_pane_t2_ParamLimits

0xef2d,	// (0x00029bad) tmo_note_info_pane_t3_ParamLimits

0xef42,	// (0x00029bc2) tmo_note_info_pane_t4_ParamLimits

0xef54,	// (0x00029bd4) tmo_note_info_pane_t5_ParamLimits

0x0042,	// (0x0001acc2) tmo_note_info_pane_t_ParamLimits

0xf072,	// (0x00029cf2) settings_container_pane_ParamLimits

0xf243,	// (0x00029ec3) indicator_popup_pane_cp5

0xf243,	// (0x00029ec3) indicator_popup_pane_cp6

0xf273,	// (0x00029ef3) list_set_graphic_pane_copy1_ParamLimits

0x7ed5,	// (0x00022b55) bg_popup_window_pane_cp23

0xf2ea,	// (0x00029f6a) popup_tmo_big_image_note_window_g1

0xf2f4,	// (0x00029f74) popup_tmo_big_image_note_window_t1

0xf304,	// (0x00029f84) popup_tmo_big_image_note_window_t2

0xf314,	// (0x00029f94) popup_tmo_big_image_note_window_t3

0x0002,

0x005b,	// (0x0001acdb) popup_tmo_big_image_note_window_t

0xc339,	// (0x00026fb9) cell_ai5_widget_lrg_icon_pane_g1

0xf324,	// (0x00029fa4) cell_ai5_widget_lrg_icon_pane_t1

0xf332,	// (0x00029fb2) cell_ai5_widget_list_row_pane_ParamLimits

0xf332,	// (0x00029fb2) cell_ai5_widget_list_row_pane

0xf349,	// (0x00029fc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x00029fc9) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x00029fd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x00029fd6) cell_ai5_widget_list_row_pane_t1

0xf387,	// (0x0002a007) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf387,	// (0x0002a007) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0062,	// (0x0001ace2) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0062,	// (0x0001ace2) cell_ai5_widget_list_row_pane_t

0x7ed5,	// (0x00022b55) main_fep_vtchi_ss_pane

0x7d11,	// (0x00022991) popup_fep_char_pre_window

0x7d19,	// (0x00022999) popup_fep_ituss_window

0x7d3a,	// (0x000229ba) popup_fep_vkbss_window

0xf3af,	// (0x0002a02f) grid_vkbss_keypad_pane_ParamLimits

0xf3af,	// (0x0002a02f) grid_vkbss_keypad_pane

0xf3bf,	// (0x0002a03f) ituss_keypad_pane

0x7d65,	// (0x000229e5) aid_vkbss_key_offset_ParamLimits

0x7d65,	// (0x000229e5) aid_vkbss_key_offset

0x7d71,	// (0x000229f1) cell_vkbss_key_pane_ParamLimits

0x7d71,	// (0x000229f1) cell_vkbss_key_pane

0xf3ce,	// (0x0002a04e) bg_cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0002a04e) bg_cell_vkbss_key_g1

0xf3da,	// (0x0002a05a) cell_vkbss_key_3p_pane_ParamLimits

0xf3da,	// (0x0002a05a) cell_vkbss_key_3p_pane

0xf3f4,	// (0x0002a074) cell_vkbss_key_g1_ParamLimits

0xf3f4,	// (0x0002a074) cell_vkbss_key_g1

0xf40e,	// (0x0002a08e) cell_vkbss_key_t1_ParamLimits

0xf40e,	// (0x0002a08e) cell_vkbss_key_t1

0x7d87,	// (0x00022a07) cell_ituss_key_pane_ParamLimits

0x7d87,	// (0x00022a07) cell_ituss_key_pane

0xf439,	// (0x0002a0b9) bg_cell_ituss_key_g1_ParamLimits

0xf439,	// (0x0002a0b9) bg_cell_ituss_key_g1

0xf445,	// (0x0002a0c5) cell_ituss_key_pane_g1_ParamLimits

0xf445,	// (0x0002a0c5) cell_ituss_key_pane_g1

0x7d98,	// (0x00022a18) cell_ituss_key_pane_g2_ParamLimits

0x7d98,	// (0x00022a18) cell_ituss_key_pane_g2

0x0002,

0xfe8d,	// (0x0002ab0d) cell_ituss_key_pane_g_ParamLimits

0xfe8d,	// (0x0002ab0d) cell_ituss_key_pane_g

0x7dc4,	// (0x00022a44) cell_ituss_key_t1_ParamLimits

0x7dc4,	// (0x00022a44) cell_ituss_key_t1

0x7dfe,	// (0x00022a7e) cell_ituss_key_t2_ParamLimits

0x7dfe,	// (0x00022a7e) cell_ituss_key_t2

0x7e2f,	// (0x00022aaf) cell_ituss_key_t3_ParamLimits

0x7e2f,	// (0x00022aaf) cell_ituss_key_t3

0x7dfe,	// (0x00022a7e) cell_ituss_key_t4_ParamLimits

0x7dfe,	// (0x00022a7e) cell_ituss_key_t4

0x0004,

0xfe94,	// (0x0002ab14) cell_ituss_key_t_ParamLimits

0xfe94,	// (0x0002ab14) cell_ituss_key_t

0xf471,	// (0x0002a0f1) cell_vkbss_key_3p_pane_g1

0xf479,	// (0x0002a0f9) cell_vkbss_key_3p_pane_g2

0xf481,	// (0x0002a101) cell_vkbss_key_3p_pane_g3

0x0002,

0x007b,	// (0x0001acfb) cell_vkbss_key_3p_pane_g

0x7ed5,	// (0x00022b55) bg_popup_fep_char_preview_window_cp02

0x7e72,	// (0x00022af2) popup_fep_char_pre_window_t1

0xe92a,	// (0x000295aa) main_ai5_sk_pane

0xefce,	// (0x00029c4e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefda,	// (0x00029c5a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d7,	// (0x00027657) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefef,	// (0x00029c6f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe86,	// (0x0002ab06) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeffb,	// (0x00029c7b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8838,	// (0x000234b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf489,	// (0x0002a109) main_ai5_sk_pane_g1

0xa1d0,	// (0x00024e50) popup_query_code_window_g1

0x7d2f,	// (0x000229af) popup_fep_vkb_icf_pane

0x7d43,	// (0x000229c3) popup_fep_vtchi_icf_pane

0xf492,	// (0x0002a112) bg_icf_pane

0xf49e,	// (0x0002a11e) list_vkb_icf_pane

0xf4aa,	// (0x0002a12a) bg_icf_pane_cp01

0xf4b6,	// (0x0002a136) vtchi_icf_list_pane

0xf4c7,	// (0x0002a147) list_vkb_icf_pane_t1_ParamLimits

0xf4c7,	// (0x0002a147) list_vkb_icf_pane_t1

0xf4dd,	// (0x0002a15d) vtchi_icf_list_pane_t1_ParamLimits

0xf4dd,	// (0x0002a15d) vtchi_icf_list_pane_t1

0x7d19,	// (0x00022999) popup_fep_ituss_window_ParamLimits

0x7d43,	// (0x000229c3) popup_fep_vtchi_icf_pane_ParamLimits

0xf3bf,	// (0x0002a03f) ituss_keypad_pane_ParamLimits

0x7d59,	// (0x000229d9) ituss_sks_pane

0xf492,	// (0x0002a112) bg_icf_pane_ParamLimits

0x7cf5,	// (0x00022975) icf_edit_indi_pane_ParamLimits

0x7cf5,	// (0x00022975) icf_edit_indi_pane

0xf49e,	// (0x0002a11e) list_vkb_icf_pane_ParamLimits

0xf4aa,	// (0x0002a12a) bg_icf_pane_cp01_ParamLimits

0x7d04,	// (0x00022984) icf_edit_indi_pane_cp01_ParamLimits

0x7d04,	// (0x00022984) icf_edit_indi_pane_cp01

0xf4be,	// (0x0002a13e) vtchi_query_pane

0xc5b7,	// (0x00027237) icf_edit_indi_pane_g1_ParamLimits

0xc5b7,	// (0x00027237) icf_edit_indi_pane_g1

0x7e94,	// (0x00022b14) icf_edit_indi_pane_g2_ParamLimits

0x7e94,	// (0x00022b14) icf_edit_indi_pane_g2

0x0001,

0xfea4,	// (0x0002ab24) icf_edit_indi_pane_g_ParamLimits

0xfea4,	// (0x0002ab24) icf_edit_indi_pane_g

0x7ea3,	// (0x00022b23) icf_edit_indi_pane_t1

0xf4f7,	// (0x0002a177) bg_input_focus_pane_cp042

0x8767,	// (0x000233e7) vtchi_button_pane

0xf500,	// (0x0002a180) vtchi_query_pane_t1

0xf50e,	// (0x0002a18e) vtchi_query_pane_t2

0xf51c,	// (0x0002a19c) vtchi_query_pane_t3

0x0002,

0x0082,	// (0x0001ad02) vtchi_query_pane_t

0x7ed5,	// (0x00022b55) bg_button_pane_cp13

0xf52a,	// (0x0002a1aa) vtchi_button_pane_g1

0x7e81,	// (0x00022b01) ituss_sks_pane_g1

0x7e8c,	// (0x00022b0c) ituss_sks_pane_g2

0x0001,

0xfe9f,	// (0x0002ab1f) ituss_sks_pane_g

0xf532,	// (0x0002a1b2) ituss_sks_pane_t1

0xf540,	// (0x0002a1c0) ituss_sks_pane_t2

0x0001,

0x008e,	// (0x0001ad0e) ituss_sks_pane_t

0xbd9c,	// (0x00026a1c) indicator_nsta_pane_cp_g1

0xbda5,	// (0x00026a25) indicator_nsta_pane_cp_g2

0xbdad,	// (0x00026a2d) indicator_nsta_pane_cp_g3

0xbdb5,	// (0x00026a35) indicator_nsta_pane_cp_g4

0xbdbd,	// (0x00026a3d) indicator_nsta_pane_cp_g5

0xbdbd,	// (0x00026a3d) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a71a) indicator_nsta_pane_cp_g

0xe4ef,	// (0x0002916f) cell_graphic2_pane_t2_ParamLimits

0xe4ef,	// (0x0002916f) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0002aa27) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0002aa27) cell_graphic2_pane_t

0xe51c,	// (0x0002919c) cell_graphic2_control_pane_t1

0x8f78,	// (0x00023bf8) signal_pane_g3_ParamLimits

0x8f78,	// (0x00023bf8) signal_pane_g3

0x8f8a,	// (0x00023c0a) signal_pane_g4_ParamLimits

0x8f8a,	// (0x00023c0a) signal_pane_g4

0xf399,	// (0x0002a019) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf399,	// (0x0002a019) cell_ai5_widget_list_row_pane_t3

0xf45f,	// (0x0002a0df) cell_ituss_key_pane_t1_ParamLimits

0xf45f,	// (0x0002a0df) cell_ituss_key_pane_t1

0x9e17,	// (0x00024a97) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e17,	// (0x00024a97) form_field_data_wide_pane_vc_t2

0x9e2b,	// (0x00024aab) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e2b,	// (0x00024aab) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a482) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a482) form_field_data_wide_pane_vc_t

0xba64,	// (0x000266e4) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba64,	// (0x000266e4) form_field_slider_wide_pane_vc_t3

0xbb42,	// (0x000267c2) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb42,	// (0x000267c2) form_field_popup_wide_pane_vc_t2

0xbb59,	// (0x000267d9) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb59,	// (0x000267d9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a709) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a709) form_field_popup_wide_pane_vc_t

0x7b25,	// (0x000227a5) aid_fshwr2_btn_pane_ParamLimits

0x7b31,	// (0x000227b1) aid_fshwr2_syb_pane_ParamLimits

0x7b3d,	// (0x000227bd) aid_fshwr2_txt_pane_ParamLimits

0x8838,	// (0x000234b8) fshwr2_bg_pane_ParamLimits

0x7b49,	// (0x000227c9) fshwr2_func_candi_pane_ParamLimits

0x7b5e,	// (0x000227de) fshwr2_hwr_syb_pane_ParamLimits

0x7b6e,	// (0x000227ee) fshwr2_icf_pane_ParamLimits

0x56a6,	// (0x00020326) list_double_graphic_pane_vc_g4_ParamLimits

0x56a6,	// (0x00020326) list_double_graphic_pane_vc_g4

0x7db8,	// (0x00022a38) cell_ituss_key_pane_g3_ParamLimits

0x7db8,	// (0x00022a38) cell_ituss_key_pane_g3

0x7e60,	// (0x00022ae0) cell_ituss_key_t5_ParamLimits

0x7e60,	// (0x00022ae0) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

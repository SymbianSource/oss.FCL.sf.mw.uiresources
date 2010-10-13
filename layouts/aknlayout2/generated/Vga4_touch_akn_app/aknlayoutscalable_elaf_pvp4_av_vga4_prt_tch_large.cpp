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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000413d8 };

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
0x5f6a,	// (0x00047342) Screen

0x5f76,	// (0x0004734e) application_window_ParamLimits

0x5f76,	// (0x0004734e) application_window

0x08f0,	// (0x00041cc8) screen_g1

0x5fd2,	// (0x000473aa) area_bottom_pane_ParamLimits

0x5fd2,	// (0x000473aa) area_bottom_pane

0x6092,	// (0x0004746a) area_top_pane_ParamLimits

0x6092,	// (0x0004746a) area_top_pane

0x6126,	// (0x000474fe) main_pane_ParamLimits

0x6126,	// (0x000474fe) main_pane

0x08fa,	// (0x00041cd2) misc_graphics

0x9503,	// (0x0004a8db) battery_pane_ParamLimits

0x9503,	// (0x0004a8db) battery_pane

0xa1cd,	// (0x0004b5a5) bg_status_flat_pane_g8

0xa1d5,	// (0x0004b5ad) bg_status_flat_pane_g9

0x95cb,	// (0x0004a9a3) context_pane_ParamLimits

0x95cb,	// (0x0004a9a3) context_pane

0x96ef,	// (0x0004aac7) navi_pane_ParamLimits

0x96ef,	// (0x0004aac7) navi_pane

0x977f,	// (0x0004ab57) signal_pane_ParamLimits

0x977f,	// (0x0004ab57) signal_pane

0x0008,

0xf859,	// (0x00050c31) bg_status_flat_pane_g

0x97ec,	// (0x0004abc4) status_pane_g1_ParamLimits

0x97ec,	// (0x0004abc4) status_pane_g1

0x97f8,	// (0x0004abd0) status_pane_g2_ParamLimits

0x97f8,	// (0x0004abd0) status_pane_g2

0x9804,	// (0x0004abdc) status_pane_g3_ParamLimits

0x9804,	// (0x0004abdc) status_pane_g3

0x0004,

0xf780,	// (0x00050b58) status_pane_g_ParamLimits

0xf780,	// (0x00050b58) status_pane_g

0x9838,	// (0x0004ac10) title_pane_ParamLimits

0x9838,	// (0x0004ac10) title_pane

0x9879,	// (0x0004ac51) uni_indicator_pane_ParamLimits

0x9879,	// (0x0004ac51) uni_indicator_pane

0x9435,	// (0x0004a80d) bg_list_pane_ParamLimits

0x9435,	// (0x0004a80d) bg_list_pane

0x7078,	// (0x00048450) find_pane

0x9455,	// (0x0004a82d) listscroll_app_pane_ParamLimits

0x9455,	// (0x0004a82d) listscroll_app_pane

0x9461,	// (0x0004a839) listscroll_form_pane

0x7080,	// (0x00048458) listscroll_gen_pane_ParamLimits

0x7080,	// (0x00048458) listscroll_gen_pane

0x7094,	// (0x0004846c) listscroll_set_pane

0x6843,	// (0x00047c1b) main_idle_act_pane

0x912e,	// (0x0004a506) main_idle_trad_pane

0x912e,	// (0x0004a506) main_list_empty_pane

0x9455,	// (0x0004a82d) main_midp_pane

0x947b,	// (0x0004a853) main_pane_g1_ParamLimits

0x947b,	// (0x0004a853) main_pane_g1

0x709c,	// (0x00048474) popup_ai_message_window_ParamLimits

0x709c,	// (0x00048474) popup_ai_message_window

0x7150,	// (0x00048528) popup_fep_china_uni_window_ParamLimits

0x7150,	// (0x00048528) popup_fep_china_uni_window

0x71b0,	// (0x00048588) popup_fep_japan_candidate_window_ParamLimits

0x71b0,	// (0x00048588) popup_fep_japan_candidate_window

0x71da,	// (0x000485b2) popup_fep_japan_predictive_window_ParamLimits

0x71da,	// (0x000485b2) popup_fep_japan_predictive_window

0x7210,	// (0x000485e8) popup_find_window

0x721d,	// (0x000485f5) popup_grid_graphic_window_ParamLimits

0x721d,	// (0x000485f5) popup_grid_graphic_window

0x724d,	// (0x00048625) popup_large_graphic_colour_window

0x7273,	// (0x0004864b) popup_menu_window_ParamLimits

0x7273,	// (0x0004864b) popup_menu_window

0x743d,	// (0x00048815) popup_note_image_window

0x7427,	// (0x000487ff) popup_note_wait_window_ParamLimits

0x7427,	// (0x000487ff) popup_note_wait_window

0x7427,	// (0x000487ff) popup_note_window_ParamLimits

0x7427,	// (0x000487ff) popup_note_window

0x74a3,	// (0x0004887b) popup_query_code_window_ParamLimits

0x74a3,	// (0x0004887b) popup_query_code_window

0x74b9,	// (0x00048891) popup_query_data_code_window_ParamLimits

0x74b9,	// (0x00048891) popup_query_data_code_window

0x74dc,	// (0x000488b4) popup_query_data_window_ParamLimits

0x74dc,	// (0x000488b4) popup_query_data_window

0x74fe,	// (0x000488d6) popup_query_sat_info_window_ParamLimits

0x74fe,	// (0x000488d6) popup_query_sat_info_window

0x753d,	// (0x00048915) popup_snote_single_graphic_window_ParamLimits

0x753d,	// (0x00048915) popup_snote_single_graphic_window

0x753d,	// (0x00048915) popup_snote_single_text_window_ParamLimits

0x753d,	// (0x00048915) popup_snote_single_text_window

0x7554,	// (0x0004892c) popup_sub_window_general

0x769a,	// (0x00048a72) popup_window_general_ParamLimits

0x769a,	// (0x00048a72) popup_window_general

0x9489,	// (0x0004a861) power_save_pane

0x6f2f,	// (0x00048307) control_pane_g1_ParamLimits

0x6f2f,	// (0x00048307) control_pane_g1

0x6f52,	// (0x0004832a) control_pane_g2_ParamLimits

0x6f52,	// (0x0004832a) control_pane_g2

0x93f8,	// (0x0004a7d0) control_pane_g3_ParamLimits

0x93f8,	// (0x0004a7d0) control_pane_g3

0x0007,

0xf768,	// (0x00050b40) control_pane_g_ParamLimits

0xf768,	// (0x00050b40) control_pane_g

0x6f97,	// (0x0004836f) control_pane_t1_ParamLimits

0x6f97,	// (0x0004836f) control_pane_t1

0x6fdf,	// (0x000483b7) control_pane_t2_ParamLimits

0x6fdf,	// (0x000483b7) control_pane_t2

0x0002,

0xf779,	// (0x00050b51) control_pane_t_ParamLimits

0xf779,	// (0x00050b51) control_pane_t

0x931d,	// (0x0004a6f5) navi_navi_volume_pane_cp1

0x9325,	// (0x0004a6fd) status_small_icon_pane

0x932d,	// (0x0004a705) status_small_pane_g1_ParamLimits

0x932d,	// (0x0004a705) status_small_pane_g1

0x9361,	// (0x0004a739) status_small_pane_g2_ParamLimits

0x9361,	// (0x0004a739) status_small_pane_g2

0x936d,	// (0x0004a745) status_small_pane_g3_ParamLimits

0x936d,	// (0x0004a745) status_small_pane_g3

0x9379,	// (0x0004a751) status_small_pane_g4_ParamLimits

0x9379,	// (0x0004a751) status_small_pane_g4

0x9385,	// (0x0004a75d) status_small_pane_g5_ParamLimits

0x9385,	// (0x0004a75d) status_small_pane_g5

0x9393,	// (0x0004a76b) status_small_pane_g6_ParamLimits

0x9393,	// (0x0004a76b) status_small_pane_g6

0x0007,

0xf757,	// (0x00050b2f) status_small_pane_g_ParamLimits

0xf757,	// (0x00050b2f) status_small_pane_g

0x93c2,	// (0x0004a79a) status_small_pane_t1

0x93e4,	// (0x0004a7bc) status_small_wait_pane_ParamLimits

0x93e4,	// (0x0004a7bc) status_small_wait_pane

0x6c0d,	// (0x00047fe5) aid_levels_signal_ParamLimits

0x6c0d,	// (0x00047fe5) aid_levels_signal

0x6c1c,	// (0x00047ff4) signal_pane_g1_ParamLimits

0x6c1c,	// (0x00047ff4) signal_pane_g1

0x6c31,	// (0x00048009) signal_pane_g2_ParamLimits

0x6c31,	// (0x00048009) signal_pane_g2

0x0003,

0xf6e8,	// (0x00050ac0) signal_pane_g_ParamLimits

0xf6e8,	// (0x00050ac0) signal_pane_g

0x44c3,	// (0x0004589b) context_pane_g1

0x6385,	// (0x0004775d) title_pane_g1

0x63b7,	// (0x0004778f) title_pane_t1

0x0910,	// (0x00041ce8) title_pane_t2

0x0936,	// (0x00041d0e) title_pane_t3

0x0002,

0xf532,	// (0x0005090a) title_pane_t

0x9891,	// (0x0004ac69) aid_levels_battery_ParamLimits

0x9891,	// (0x0004ac69) aid_levels_battery

0x98a2,	// (0x0004ac7a) battery_pane_g1_ParamLimits

0x98a2,	// (0x0004ac7a) battery_pane_g1

0x98b8,	// (0x0004ac90) battery_pane_g2_ParamLimits

0x98b8,	// (0x0004ac90) battery_pane_g2

0x0001,

0xf78b,	// (0x00050b63) battery_pane_g_ParamLimits

0xf78b,	// (0x00050b63) battery_pane_g

0xab17,	// (0x0004beef) uni_indicator_pane_g1

0xab2d,	// (0x0004bf05) uni_indicator_pane_g2

0xab43,	// (0x0004bf1b) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00050cd9) uni_indicator_pane_g

0x8f91,	// (0x0004a369) navi_icon_pane_ParamLimits

0x8f91,	// (0x0004a369) navi_icon_pane

0x8ee4,	// (0x0004a2bc) navi_midp_pane

0x8fad,	// (0x0004a385) navi_navi_pane

0x8fb7,	// (0x0004a38f) navi_text_pane_ParamLimits

0x8fb7,	// (0x0004a38f) navi_text_pane

0x08f0,	// (0x00041cc8) status_small_wait_pane_g1

0x0c57,	// (0x0004202f) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00050cd4) status_small_wait_pane_g

0xa82a,	// (0x0004bc02) navi_navi_icon_text_pane

0xa832,	// (0x0004bc0a) navi_navi_pane_g1_ParamLimits

0xa832,	// (0x0004bc0a) navi_navi_pane_g1

0xa844,	// (0x0004bc1c) navi_navi_pane_g2_ParamLimits

0xa844,	// (0x0004bc1c) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00050ca2) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00050ca2) navi_navi_pane_g

0xa856,	// (0x0004bc2e) navi_navi_tabs_pane

0xa85f,	// (0x0004bc37) navi_navi_text_pane

0xa82a,	// (0x0004bc02) navi_navi_volume_pane

0xa806,	// (0x0004bbde) navi_text_pane_t1

0xa7fa,	// (0x0004bbd2) navi_icon_pane_g1

0xa74d,	// (0x0004bb25) navi_navi_text_pane_t1

0x7973,	// (0x00048d4b) navi_navi_volume_pane_g1

0x797b,	// (0x00048d53) volume_small_pane

0xa6b3,	// (0x0004ba8b) navi_navi_icon_text_pane_g1

0xa6bb,	// (0x0004ba93) navi_navi_icon_text_pane_t1

0x8fad,	// (0x0004a385) navi_tabs_2_long_pane

0x8fad,	// (0x0004a385) navi_tabs_2_pane

0x8fad,	// (0x0004a385) navi_tabs_3_long_pane

0x8fad,	// (0x0004a385) navi_tabs_3_pane

0x8fad,	// (0x0004a385) navi_tabs_4_pane

0x7953,	// (0x00048d2b) tabs_2_active_pane_ParamLimits

0x7953,	// (0x00048d2b) tabs_2_active_pane

0x7963,	// (0x00048d3b) tabs_2_passive_pane_ParamLimits

0x7963,	// (0x00048d3b) tabs_2_passive_pane

0x7921,	// (0x00048cf9) tabs_3_active_pane_ParamLimits

0x7921,	// (0x00048cf9) tabs_3_active_pane

0x7931,	// (0x00048d09) tabs_3_passive_pane_ParamLimits

0x7931,	// (0x00048d09) tabs_3_passive_pane

0x7942,	// (0x00048d1a) tabs_3_passive_pane_cp_ParamLimits

0x7942,	// (0x00048d1a) tabs_3_passive_pane_cp

0x78d5,	// (0x00048cad) tabs_4_active_pane_ParamLimits

0x78d5,	// (0x00048cad) tabs_4_active_pane

0x78e8,	// (0x00048cc0) tabs_4_passive_pane_ParamLimits

0x78e8,	// (0x00048cc0) tabs_4_passive_pane

0x78f9,	// (0x00048cd1) tabs_4_passive_pane_cp_ParamLimits

0x78f9,	// (0x00048cd1) tabs_4_passive_pane_cp

0x790a,	// (0x00048ce2) tabs_4_passive_pane_cp2_ParamLimits

0x790a,	// (0x00048ce2) tabs_4_passive_pane_cp2

0x78b1,	// (0x00048c89) tabs_2_long_active_pane_ParamLimits

0x78b1,	// (0x00048c89) tabs_2_long_active_pane

0x78c3,	// (0x00048c9b) tabs_2_long_passive_pane_ParamLimits

0x78c3,	// (0x00048c9b) tabs_2_long_passive_pane

0x7872,	// (0x00048c4a) tabs_3_long_active_pane_ParamLimits

0x7872,	// (0x00048c4a) tabs_3_long_active_pane

0x7885,	// (0x00048c5d) tabs_3_long_passive_pane_ParamLimits

0x7885,	// (0x00048c5d) tabs_3_long_passive_pane

0x789e,	// (0x00048c76) tabs_3_long_passive_pane_cp_ParamLimits

0x789e,	// (0x00048c76) tabs_3_long_passive_pane_cp

0x7818,	// (0x00048bf0) volume_small_pane_g1

0x7821,	// (0x00048bf9) volume_small_pane_g2

0x782a,	// (0x00048c02) volume_small_pane_g3

0x7833,	// (0x00048c0b) volume_small_pane_g4

0x783c,	// (0x00048c14) volume_small_pane_g5

0x7845,	// (0x00048c1d) volume_small_pane_g6

0x784e,	// (0x00048c26) volume_small_pane_g7

0x7857,	// (0x00048c2f) volume_small_pane_g8

0x7860,	// (0x00048c38) volume_small_pane_g9

0x7869,	// (0x00048c41) volume_small_pane_g10

0x0009,

0xf896,	// (0x00050c6e) volume_small_pane_g

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp2_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp2

0x641f,	// (0x000477f7) tabs_3_active_pane_g1

0x6427,	// (0x000477ff) tabs_3_active_pane_t1

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp2_ParamLimits

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp2

0x641f,	// (0x000477f7) tabs_3_passive_pane_g1

0x6427,	// (0x000477ff) tabs_3_passive_pane_t1

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp3_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp3

0x6439,	// (0x00047811) tabs_4_active_pane_g1

0x6441,	// (0x00047819) tabs_4_active_pane_t1

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp3_ParamLimits

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp3

0x6439,	// (0x00047811) tabs_4_1_passive_pane_g1

0x6441,	// (0x00047819) tabs_4_1_passive_pane_t1

0x9455,	// (0x0004a82d) list_highlight_pane_cp2

0xad90,	// (0x0004c168) list_set_pane_ParamLimits

0xad90,	// (0x0004c168) list_set_pane

0xae52,	// (0x0004c22a) main_pane_set_t1_ParamLimits

0xae52,	// (0x0004c22a) main_pane_set_t1

0xae72,	// (0x0004c24a) main_pane_set_t2_ParamLimits

0xae72,	// (0x0004c24a) main_pane_set_t2

0xae86,	// (0x0004c25e) main_pane_set_t3_ParamLimits

0xae86,	// (0x0004c25e) main_pane_set_t3

0xae9a,	// (0x0004c272) main_pane_set_t4_ParamLimits

0xae9a,	// (0x0004c272) main_pane_set_t4

0x0003,

0xf966,	// (0x00050d3e) main_pane_set_t_ParamLimits

0xf966,	// (0x00050d3e) main_pane_set_t

0xaeae,	// (0x0004c286) setting_code_pane

0xaeb8,	// (0x0004c290) setting_slider_graphic_pane

0xaeb8,	// (0x0004c290) setting_slider_pane

0xaeb8,	// (0x0004c290) setting_text_pane

0xaeb8,	// (0x0004c290) setting_volume_pane

0x6453,	// (0x0004782b) volume_set_pane

0x0956,	// (0x00041d2e) bg_set_opt_pane_cp

0x645d,	// (0x00047835) setting_slider_pane_t1

0x6476,	// (0x0004784e) setting_slider_pane_t2

0x6490,	// (0x00047868) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00050911) setting_slider_pane_t

0x64a8,	// (0x00047880) slider_set_pane

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp2

0x0964,	// (0x00041d3c) setting_slider_graphic_pane_g1

0x64be,	// (0x00047896) setting_slider_graphic_pane_t1

0x64ce,	// (0x000478a6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00050918) setting_slider_graphic_pane_t

0x64de,	// (0x000478b6) slider_set_pane_cp

0x08fa,	// (0x00041cd2) input_focus_pane_cp1

0xad51,	// (0x0004c129) list_set_text_pane

0x08f0,	// (0x00041cc8) setting_text_pane_g1

0x08fa,	// (0x00041cd2) input_focus_pane_cp2

0x08f0,	// (0x00041cc8) setting_code_pane_g1

0x096d,	// (0x00041d45) setting_code_pane_t1

0x5084,	// (0x0004645c) set_text_pane_t1_ParamLimits

0x5084,	// (0x0004645c) set_text_pane_t1

0x0ff0,	// (0x000423c8) set_opt_bg_pane_g1

0x0ff8,	// (0x000423d0) set_opt_bg_pane_g2

0xad29,	// (0x0004c101) set_opt_bg_pane_g3

0x1008,	// (0x000423e0) set_opt_bg_pane_g4

0x1010,	// (0x000423e8) set_opt_bg_pane_g5

0x1018,	// (0x000423f0) set_opt_bg_pane_g6

0xad33,	// (0x0004c10b) set_opt_bg_pane_g7

0xad3d,	// (0x0004c115) set_opt_bg_pane_g8

0xad47,	// (0x0004c11f) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00050d2b) set_opt_bg_pane_g

0xad1c,	// (0x0004c0f4) slider_set_pane_g1

0x79fc,	// (0x00048dd4) slider_set_pane_g2

0x0006,

0xf944,	// (0x00050d1c) slider_set_pane_g

0x7984,	// (0x00048d5c) volume_set_pane_g1

0x798e,	// (0x00048d66) volume_set_pane_g2

0x7998,	// (0x00048d70) volume_set_pane_g3

0x79a2,	// (0x00048d7a) volume_set_pane_g4

0x79ac,	// (0x00048d84) volume_set_pane_g5

0x79b6,	// (0x00048d8e) volume_set_pane_g6

0x79c0,	// (0x00048d98) volume_set_pane_g7

0x79ca,	// (0x00048da2) volume_set_pane_g8

0x79d4,	// (0x00048dac) volume_set_pane_g9

0x79de,	// (0x00048db6) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00050cf4) volume_set_pane_g

0x64e6,	// (0x000478be) indicator_pane_ParamLimits

0x64e6,	// (0x000478be) indicator_pane

0x64f2,	// (0x000478ca) main_idle_pane_g2_ParamLimits

0x64f2,	// (0x000478ca) main_idle_pane_g2

0x651a,	// (0x000478f2) main_pane_idle_g1_ParamLimits

0x651a,	// (0x000478f2) main_pane_idle_g1

0x097b,	// (0x00041d53) popup_clock_digital_analogue_window_ParamLimits

0x097b,	// (0x00041d53) popup_clock_digital_analogue_window

0x6528,	// (0x00047900) soft_indicator_pane_ParamLimits

0x6528,	// (0x00047900) soft_indicator_pane

0x6536,	// (0x0004790e) wallpaper_pane_ParamLimits

0x6536,	// (0x0004790e) wallpaper_pane

0x08f0,	// (0x00041cc8) wallpaper_pane_g1

0x6542,	// (0x0004791a) indicator_pane_g1_ParamLimits

0x6542,	// (0x0004791a) indicator_pane_g1

0xb17b,	// (0x0004c553) navi_navi_icon_text_pane_srt_g1

0x09a9,	// (0x00041d81) soft_indicator_pane_t1

0x09c3,	// (0x00041d9b) aid_ps_area_pane

0x654e,	// (0x00047926) aid_ps_clock_pane

0x09d4,	// (0x00041dac) aid_ps_indicator_pane

0x09e0,	// (0x00041db8) indicator_ps_pane_ParamLimits

0x09e0,	// (0x00041db8) indicator_ps_pane

0x09ef,	// (0x00041dc7) power_save_pane_g1_ParamLimits

0x09ef,	// (0x00041dc7) power_save_pane_g1

0x09fb,	// (0x00041dd3) power_save_pane_g2_ParamLimits

0x09fb,	// (0x00041dd3) power_save_pane_g2

0x5f86,	// (0x0004735e) aid_navinavi_width_pane

0x09c3,	// (0x00041d9b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005091d) power_save_pane_g_ParamLimits

0xf545,	// (0x0005091d) power_save_pane_g

0x0a09,	// (0x00041de1) power_save_pane_t1_ParamLimits

0x0a09,	// (0x00041de1) power_save_pane_t1

0x654e,	// (0x00047926) aid_ps_clock_pane_ParamLimits

0x09d4,	// (0x00041dac) aid_ps_indicator_pane_ParamLimits

0x0a1b,	// (0x00041df3) power_save_pane_t4_ParamLimits

0x0a1b,	// (0x00041df3) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050922) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050922) power_save_pane_t

0x0a45,	// (0x00041e1d) power_save_t3_ParamLimits

0x0a45,	// (0x00041e1d) power_save_t3

0x0a30,	// (0x00041e08) power_save_t2_ParamLimits

0x0a30,	// (0x00041e08) power_save_t2

0x0a5a,	// (0x00041e32) indicator_ps_pane_g1

0x655c,	// (0x00047934) ai_gene_pane_ParamLimits

0x655c,	// (0x00047934) ai_gene_pane

0x6568,	// (0x00047940) ai_links_pane_ParamLimits

0x6568,	// (0x00047940) ai_links_pane

0x6574,	// (0x0004794c) indicator_pane_cp1_ParamLimits

0x6574,	// (0x0004794c) indicator_pane_cp1

0x6580,	// (0x00047958) main_pane_idle_g1_cp_ParamLimits

0x6580,	// (0x00047958) main_pane_idle_g1_cp

0x0a63,	// (0x00041e3b) popup_ai_links_title_window

0x658c,	// (0x00047964) soft_indicator_pane_cp1_ParamLimits

0x658c,	// (0x00047964) soft_indicator_pane_cp1

0xab05,	// (0x0004bedd) ai_links_pane_g1

0xab0e,	// (0x0004bee6) grid_ai_links_pane

0xaaea,	// (0x0004bec2) ai_gene_pane_1

0xaaf3,	// (0x0004becb) ai_gene_pane_2

0xaafc,	// (0x0004bed4) list_highlight_pane_cp4

0xaaca,	// (0x0004bea2) cell_ai_link_pane_ParamLimits

0xaaca,	// (0x0004bea2) cell_ai_link_pane

0xaac2,	// (0x0004be9a) cell_ai_link_pane_g1

0x0c57,	// (0x0004202f) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x00050ccf) cell_ai_link_pane_g

0x08fa,	// (0x00041cd2) grid_highlight_cp2

0x08fa,	// (0x00041cd2) bg_popup_sub_pane_cp1

0x0a7a,	// (0x00041e52) popup_ai_links_title_window_t1

0xaa0e,	// (0x0004bde6) ai_gene_pane_1_g1_ParamLimits

0xaa0e,	// (0x0004bde6) ai_gene_pane_1_g1

0xaa1a,	// (0x0004bdf2) ai_gene_pane_1_g2_ParamLimits

0xaa1a,	// (0x0004bdf2) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00050cc5) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00050cc5) ai_gene_pane_1_g

0xaa27,	// (0x0004bdff) ai_gene_pane_1_t1_ParamLimits

0xaa27,	// (0x0004bdff) ai_gene_pane_1_t1

0xaa5b,	// (0x0004be33) grid_ai_soft_ind_pane

0xa9f9,	// (0x0004bdd1) ai_gene_pane_2_t1_ParamLimits

0xa9f9,	// (0x0004bdd1) ai_gene_pane_2_t1

0x6598,	// (0x00047970) main_pane_empty_t1_ParamLimits

0x6598,	// (0x00047970) main_pane_empty_t1

0x65b0,	// (0x00047988) main_pane_empty_t2_ParamLimits

0x65b0,	// (0x00047988) main_pane_empty_t2

0x65c5,	// (0x0004799d) main_pane_empty_t3_ParamLimits

0x65c5,	// (0x0004799d) main_pane_empty_t3

0x65d7,	// (0x000479af) main_pane_empty_t4_ParamLimits

0x65d7,	// (0x000479af) main_pane_empty_t4

0x65e9,	// (0x000479c1) main_pane_empty_t5_ParamLimits

0x65e9,	// (0x000479c1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00050927) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00050927) main_pane_empty_t

0x107f,	// (0x00042457) bg_popup_window_pane_ParamLimits

0x107f,	// (0x00042457) bg_popup_window_pane

0xa75b,	// (0x0004bb33) find_popup_pane_cp2_ParamLimits

0xa75b,	// (0x0004bb33) find_popup_pane_cp2

0xa767,	// (0x0004bb3f) heading_pane_ParamLimits

0xa767,	// (0x0004bb3f) heading_pane

0x08fa,	// (0x00041cd2) bg_popup_sub_pane

0xa6d5,	// (0x0004baad) bg_popup_window_pane_g1_ParamLimits

0xa6d5,	// (0x0004baad) bg_popup_window_pane_g1

0xa6e1,	// (0x0004bab9) bg_popup_window_pane_g2_ParamLimits

0xa6e1,	// (0x0004bab9) bg_popup_window_pane_g2

0xa6ed,	// (0x0004bac5) bg_popup_window_pane_g3_ParamLimits

0xa6ed,	// (0x0004bac5) bg_popup_window_pane_g3

0xa6f9,	// (0x0004bad1) bg_popup_window_pane_g4_ParamLimits

0xa6f9,	// (0x0004bad1) bg_popup_window_pane_g4

0xa705,	// (0x0004badd) bg_popup_window_pane_g5_ParamLimits

0xa705,	// (0x0004badd) bg_popup_window_pane_g5

0xa711,	// (0x0004bae9) bg_popup_window_pane_g6_ParamLimits

0xa711,	// (0x0004bae9) bg_popup_window_pane_g6

0xa71d,	// (0x0004baf5) bg_popup_window_pane_g7_ParamLimits

0xa71d,	// (0x0004baf5) bg_popup_window_pane_g7

0xa729,	// (0x0004bb01) bg_popup_window_pane_g8_ParamLimits

0xa729,	// (0x0004bb01) bg_popup_window_pane_g8

0xa735,	// (0x0004bb0d) bg_popup_window_pane_g9_ParamLimits

0xa735,	// (0x0004bb0d) bg_popup_window_pane_g9

0xa741,	// (0x0004bb19) bg_popup_window_pane_g10_ParamLimits

0xa741,	// (0x0004bb19) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00050c8d) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00050c8d) bg_popup_window_pane_g

0xa66a,	// (0x0004ba42) bg_popup_heading_pane_ParamLimits

0xa66a,	// (0x0004ba42) bg_popup_heading_pane

0x7adf,	// (0x00048eb7) tabs_4_passive_pane_cp_srt_ParamLimits

0x7adf,	// (0x00048eb7) tabs_4_passive_pane_cp_srt

0x7af1,	// (0x00048ec9) tabs_4_passive_pane_srt_ParamLimits

0xa67e,	// (0x0004ba56) heading_pane_g2

0x7af1,	// (0x00048ec9) tabs_4_passive_pane_srt

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp3_srt

0xa686,	// (0x0004ba5e) heading_pane_t1_ParamLimits

0xa686,	// (0x0004ba5e) heading_pane_t1

0xa69d,	// (0x0004ba75) heading_pane_t2_ParamLimits

0xa69d,	// (0x0004ba75) heading_pane_t2

0x0001,

0xf8b0,	// (0x00050c88) heading_pane_t_ParamLimits

0xf8b0,	// (0x00050c88) heading_pane_t

0xa195,	// (0x0004b56d) bg_popup_heading_pane_g1

0xa244,	// (0x0004b61c) bg_popup_heading_pane_g2

0xa24e,	// (0x0004b626) bg_popup_heading_pane_g3

0xa258,	// (0x0004b630) bg_popup_heading_pane_g4

0xa262,	// (0x0004b63a) bg_popup_heading_pane_g5

0xa26c,	// (0x0004b644) bg_popup_heading_pane_g6

0xa274,	// (0x0004b64c) bg_popup_heading_pane_g7

0xa27c,	// (0x0004b654) bg_popup_heading_pane_g8

0xa286,	// (0x0004b65e) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00050c44) bg_popup_heading_pane_g

0x998d,	// (0x0004ad65) bg_popup_sub_pane_g1

0x9995,	// (0x0004ad6d) bg_popup_sub_pane_g2

0x999d,	// (0x0004ad75) bg_popup_sub_pane_g3

0x99a5,	// (0x0004ad7d) bg_popup_sub_pane_g4

0x99ad,	// (0x0004ad85) bg_popup_sub_pane_g5

0x99b5,	// (0x0004ad8d) bg_popup_sub_pane_g6

0x99bd,	// (0x0004ad95) bg_popup_sub_pane_g7

0x99c5,	// (0x0004ad9d) bg_popup_sub_pane_g8

0x99cd,	// (0x0004ada5) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00050c1e) bg_popup_sub_pane_g

0x0948,	// (0x00041d20) bg_popup_window_pane_cp5_ParamLimits

0x0948,	// (0x00041d20) bg_popup_window_pane_cp5

0x0a97,	// (0x00041e6f) popup_note_window_g1_ParamLimits

0x0a97,	// (0x00041e6f) popup_note_window_g1

0x0aa3,	// (0x00041e7b) popup_note_window_t1_ParamLimits

0x0aa3,	// (0x00041e7b) popup_note_window_t1

0x0ab9,	// (0x00041e91) popup_note_window_t2_ParamLimits

0x0ab9,	// (0x00041e91) popup_note_window_t2

0x0acf,	// (0x00041ea7) popup_note_window_t3_ParamLimits

0x0acf,	// (0x00041ea7) popup_note_window_t3

0x0ae5,	// (0x00041ebd) popup_note_window_t4_ParamLimits

0x0ae5,	// (0x00041ebd) popup_note_window_t4

0x0b0d,	// (0x00041ee5) popup_note_window_t5_ParamLimits

0x0b0d,	// (0x00041ee5) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050932) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050932) popup_note_window_t

0x0b57,	// (0x00041f2f) bg_popup_window_pane_cp6_ParamLimits

0x0b57,	// (0x00041f2f) bg_popup_window_pane_cp6

0xa111,	// (0x0004b4e9) popup_note_image_window_g1_ParamLimits

0xa111,	// (0x0004b4e9) popup_note_image_window_g1

0xa11d,	// (0x0004b4f5) popup_note_image_window_g2_ParamLimits

0xa11d,	// (0x0004b4f5) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00050c12) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00050c12) popup_note_image_window_g

0xa136,	// (0x0004b50e) popup_note_image_window_t1_ParamLimits

0xa136,	// (0x0004b50e) popup_note_image_window_t1

0xa14f,	// (0x0004b527) popup_note_image_window_t2_ParamLimits

0xa14f,	// (0x0004b527) popup_note_image_window_t2

0xa168,	// (0x0004b540) popup_note_image_window_t3_ParamLimits

0xa168,	// (0x0004b540) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00050c17) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00050c17) popup_note_image_window_t

0x9fd1,	// (0x0004b3a9) bg_popup_window_pane_cp7_ParamLimits

0x9fd1,	// (0x0004b3a9) bg_popup_window_pane_cp7

0xa001,	// (0x0004b3d9) popup_note_wait_window_g1_ParamLimits

0xa001,	// (0x0004b3d9) popup_note_wait_window_g1

0xa00d,	// (0x0004b3e5) popup_note_wait_window_g2_ParamLimits

0xa00d,	// (0x0004b3e5) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00050c00) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00050c00) popup_note_wait_window_g

0xa025,	// (0x0004b3fd) popup_note_wait_window_t1_ParamLimits

0xa025,	// (0x0004b3fd) popup_note_wait_window_t1

0xa04c,	// (0x0004b424) popup_note_wait_window_t2_ParamLimits

0xa04c,	// (0x0004b424) popup_note_wait_window_t2

0xa06a,	// (0x0004b442) popup_note_wait_window_t3_ParamLimits

0xa06a,	// (0x0004b442) popup_note_wait_window_t3

0xa07d,	// (0x0004b455) popup_note_wait_window_t4_ParamLimits

0xa07d,	// (0x0004b455) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00050c07) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00050c07) popup_note_wait_window_t

0xa0a2,	// (0x0004b47a) wait_bar_pane_ParamLimits

0xa0a2,	// (0x0004b47a) wait_bar_pane

0x08fa,	// (0x00041cd2) wait_anim_pane

0x08fa,	// (0x00041cd2) wait_border_pane

0x08f0,	// (0x00041cc8) wait_anim_pane_g1

0x08f0,	// (0x00041cc8) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00050abb) wait_anim_pane_g

0x9f75,	// (0x0004b34d) wait_border_pane_g1

0x9f80,	// (0x0004b358) wait_border_pane_g2

0x9f89,	// (0x0004b361) wait_border_pane_g3

0x0002,

0xf821,	// (0x00050bf9) wait_border_pane_g

0x9ddf,	// (0x0004b1b7) bg_popup_window_pane_cp16_ParamLimits

0x9ddf,	// (0x0004b1b7) bg_popup_window_pane_cp16

0x9edf,	// (0x0004b2b7) indicator_popup_pane_cp4_ParamLimits

0x9edf,	// (0x0004b2b7) indicator_popup_pane_cp4

0x9ef3,	// (0x0004b2cb) popup_query_data_window_t1_ParamLimits

0x9ef3,	// (0x0004b2cb) popup_query_data_window_t1

0x9f05,	// (0x0004b2dd) popup_query_data_window_t2_ParamLimits

0x9f05,	// (0x0004b2dd) popup_query_data_window_t2

0x9f1e,	// (0x0004b2f6) popup_query_data_window_t3_ParamLimits

0x9f1e,	// (0x0004b2f6) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00050bf2) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00050bf2) popup_query_data_window_t

0x9f38,	// (0x0004b310) query_popup_data_pane_ParamLimits

0x9f38,	// (0x0004b310) query_popup_data_pane

0x9f4c,	// (0x0004b324) query_popup_data_pane_cp1_ParamLimits

0x9f4c,	// (0x0004b324) query_popup_data_pane_cp1

0x9ddf,	// (0x0004b1b7) bg_popup_window_pane_cp10_ParamLimits

0x9ddf,	// (0x0004b1b7) bg_popup_window_pane_cp10

0x9e11,	// (0x0004b1e9) indicator_popup_pane_ParamLimits

0x9e11,	// (0x0004b1e9) indicator_popup_pane

0x9e33,	// (0x0004b20b) popup_query_code_window_t1_ParamLimits

0x9e33,	// (0x0004b20b) popup_query_code_window_t1

0x9e4d,	// (0x0004b225) popup_query_code_window_t2_ParamLimits

0x9e4d,	// (0x0004b225) popup_query_code_window_t2

0x9e96,	// (0x0004b26e) popup_query_code_window_t3_ParamLimits

0x9e96,	// (0x0004b26e) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00050beb) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00050beb) popup_query_code_window_t

0x9ec5,	// (0x0004b29d) query_popup_pane_ParamLimits

0x9ec5,	// (0x0004b29d) query_popup_pane

0x0b57,	// (0x00041f2f) bg_popup_window_pane_cp15_ParamLimits

0x0b57,	// (0x00041f2f) bg_popup_window_pane_cp15

0x0b77,	// (0x00041f4f) indicator_popup_pane_cp1_ParamLimits

0x0b77,	// (0x00041f4f) indicator_popup_pane_cp1

0x0b8a,	// (0x00041f62) indicator_popup_pane_cp2_ParamLimits

0x0b8a,	// (0x00041f62) indicator_popup_pane_cp2

0x0ba5,	// (0x00041f7d) popup_query_data_code_window_g1_ParamLimits

0x0ba5,	// (0x00041f7d) popup_query_data_code_window_g1

0x0bb8,	// (0x00041f90) popup_query_data_code_window_t1_ParamLimits

0x0bb8,	// (0x00041f90) popup_query_data_code_window_t1

0x0bca,	// (0x00041fa2) popup_query_data_code_window_t2_ParamLimits

0x0bca,	// (0x00041fa2) popup_query_data_code_window_t2

0x0bdc,	// (0x00041fb4) popup_query_data_code_window_t3_ParamLimits

0x0bdc,	// (0x00041fb4) popup_query_data_code_window_t3

0x0bf2,	// (0x00041fca) popup_query_data_code_window_t4_ParamLimits

0x0bf2,	// (0x00041fca) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005093d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005093d) popup_query_data_code_window_t

0x8f4d,	// (0x0004a325) list_single_midp_graphic_pane_g3

0x0c0c,	// (0x00041fe4) query_popup_data_pane_cp2_ParamLimits

0x0c1f,	// (0x00041ff7) query_popup_pane_cp2_ParamLimits

0x0c1f,	// (0x00041ff7) query_popup_pane_cp2

0x08fa,	// (0x00041cd2) bg_popup_window_pane_cp11

0x9dc3,	// (0x0004b19b) heading_pane_cp5

0x9dcb,	// (0x0004b1a3) listscroll_popup_info_pane

0x08fa,	// (0x00041cd2) input_focus_pane_cp3

0x0c3a,	// (0x00042012) query_popup_pane_t1

0x0c48,	// (0x00042020) list_popup_info_pane_ParamLimits

0x0c48,	// (0x00042020) list_popup_info_pane

0x0c57,	// (0x0004202f) listscroll_popup_info_pane_g1

0x0c5f,	// (0x00042037) scroll_pane_cp7

0x0c69,	// (0x00042041) popup_info_list_pane_t1_ParamLimits

0x0c69,	// (0x00042041) popup_info_list_pane_t1

0x0c83,	// (0x0004205b) popup_info_list_pane_t2_ParamLimits

0x0c83,	// (0x0004205b) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00050946) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00050946) popup_info_list_pane_t

0x08fa,	// (0x00041cd2) bg_popup_window_pane_cp12

0xb195,	// (0x0004c56d) find_popup_pane

0x0956,	// (0x00041d2e) bg_popup_window_pane_cp3

0x0c9d,	// (0x00042075) heading_pane_cp3

0x0cac,	// (0x00042084) listscroll_popup_graphic_pane

0x08fa,	// (0x00041cd2) bg_popup_window_pane_cp4

0x664b,	// (0x00047a23) heading_pane_cp4

0x0cbc,	// (0x00042094) listscroll_popup_colour_pane

0x6655,	// (0x00047a2d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6655,	// (0x00047a2d) cell_large_graphic_colour_none_popup_pane

0x6669,	// (0x00047a41) grid_large_graphic_colour_popup_pane_ParamLimits

0x6669,	// (0x00047a41) grid_large_graphic_colour_popup_pane

0x6695,	// (0x00047a6d) listscroll_popup_colour_pane_g1_ParamLimits

0x6695,	// (0x00047a6d) listscroll_popup_colour_pane_g1

0x66ac,	// (0x00047a84) listscroll_popup_colour_pane_g2_ParamLimits

0x66ac,	// (0x00047a84) listscroll_popup_colour_pane_g2

0x66c3,	// (0x00047a9b) listscroll_popup_colour_pane_g3_ParamLimits

0x66c3,	// (0x00047a9b) listscroll_popup_colour_pane_g3

0x66d3,	// (0x00047aab) listscroll_popup_colour_pane_g4_ParamLimits

0x66d3,	// (0x00047aab) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005094b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005094b) listscroll_popup_colour_pane_g

0x0cc4,	// (0x0004209c) scroll_pane_cp6_ParamLimits

0x0cc4,	// (0x0004209c) scroll_pane_cp6

0x66e7,	// (0x00047abf) cell_large_graphic_colour_popup_pane_ParamLimits

0x66e7,	// (0x00047abf) cell_large_graphic_colour_popup_pane

0x0cd6,	// (0x000420ae) cell_large_graphic_colour_none_popup_pane_t1

0x08fa,	// (0x00041cd2) grid_highlight_pane_cp5

0x0ce5,	// (0x000420bd) cell_large_graphic_colour_popup_pane_g1

0x0ced,	// (0x000420c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050954) cell_large_graphic_colour_popup_pane_g

0x0cf5,	// (0x000420cd) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cfe,	// (0x000420d6) grid_highlight_pane_cp4

0x0d06,	// (0x000420de) bg_popup_window_pane_cp8_ParamLimits

0x0d06,	// (0x000420de) bg_popup_window_pane_cp8

0x0d21,	// (0x000420f9) popup_snote_single_text_window_g1_ParamLimits

0x0d21,	// (0x000420f9) popup_snote_single_text_window_g1

0x0d33,	// (0x0004210b) popup_snote_single_text_window_t1_ParamLimits

0x0d33,	// (0x0004210b) popup_snote_single_text_window_t1

0x0d46,	// (0x0004211e) popup_snote_single_text_window_t2_ParamLimits

0x0d46,	// (0x0004211e) popup_snote_single_text_window_t2

0x0d59,	// (0x00042131) popup_snote_single_text_window_t3_ParamLimits

0x0d59,	// (0x00042131) popup_snote_single_text_window_t3

0x0d92,	// (0x0004216a) popup_snote_single_text_window_t4_ParamLimits

0x0d92,	// (0x0004216a) popup_snote_single_text_window_t4

0x0dc6,	// (0x0004219e) popup_snote_single_text_window_t5_ParamLimits

0x0dc6,	// (0x0004219e) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00050959) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00050959) popup_snote_single_text_window_t

0x0df5,	// (0x000421cd) bg_popup_window_pane_cp9_ParamLimits

0x0df5,	// (0x000421cd) bg_popup_window_pane_cp9

0x0d21,	// (0x000420f9) popup_snote_single_graphic_window_g1_ParamLimits

0x0d21,	// (0x000420f9) popup_snote_single_graphic_window_g1

0x0e03,	// (0x000421db) popup_snote_single_graphic_window_g2_ParamLimits

0x0e03,	// (0x000421db) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050964) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050964) popup_snote_single_graphic_window_g

0x0e0f,	// (0x000421e7) popup_snote_single_graphic_window_t1_ParamLimits

0x0e0f,	// (0x000421e7) popup_snote_single_graphic_window_t1

0x0e22,	// (0x000421fa) popup_snote_single_graphic_window_t2_ParamLimits

0x0e22,	// (0x000421fa) popup_snote_single_graphic_window_t2

0x0e35,	// (0x0004220d) popup_snote_single_graphic_window_t3_ParamLimits

0x0e35,	// (0x0004220d) popup_snote_single_graphic_window_t3

0x0e6e,	// (0x00042246) popup_snote_single_graphic_window_t4_ParamLimits

0x0e6e,	// (0x00042246) popup_snote_single_graphic_window_t4

0x0ea2,	// (0x0004227a) popup_snote_single_graphic_window_t5_ParamLimits

0x0ea2,	// (0x0004227a) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00050969) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00050969) popup_snote_single_graphic_window_t

0xb0d3,	// (0x0004c4ab) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x0004c4ab) grid_graphic_popup_pane

0xb101,	// (0x0004c4d9) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x0004c4d9) listscroll_popup_graphic_pane_g1

0xb115,	// (0x0004c4ed) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x0004c4ed) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00050d68) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00050d68) listscroll_popup_graphic_pane_g

0xb129,	// (0x0004c501) scroll_pane_cp5

0xb06b,	// (0x0004c443) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x0004c443) cell_graphic_popup_pane

0xb04c,	// (0x0004c424) cell_graphic_popup_pane_g1

0xb054,	// (0x0004c42c) cell_graphic_popup_pane_g2

0x0cf5,	// (0x000420cd) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00050d61) cell_graphic_popup_pane_g

0xb05d,	// (0x0004c435) cell_graphic_popup_pane_t2

0x0cfe,	// (0x000420d6) grid_highlight_pane_cp3

0x0ee3,	// (0x000422bb) list_gen_pane_ParamLimits

0x0ee3,	// (0x000422bb) list_gen_pane

0x0f0b,	// (0x000422e3) scroll_pane

0xafa4,	// (0x0004c37c) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x0004c37c) bg_list_pane_g1

0xafc1,	// (0x0004c399) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x0004c399) bg_list_pane_g2

0xafd6,	// (0x0004c3ae) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x0004c3ae) bg_list_pane_g3

0xafea,	// (0x0004c3c2) bg_list_pane_g4_ParamLimits

0xafea,	// (0x0004c3c2) bg_list_pane_g4

0xaffe,	// (0x0004c3d6) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x0004c3d6) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00050d56) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00050d56) bg_list_pane_g

0xaf3c,	// (0x0004c314) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double2_graphic_large_graphic_pane

0xaf3c,	// (0x0004c314) list_double2_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double2_graphic_pane

0xaf3c,	// (0x0004c314) list_double2_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double2_large_graphic_pane

0x59bd,	// (0x00046d95) list_double2_pane_ParamLimits

0x59bd,	// (0x00046d95) list_double2_pane

0xaf3c,	// (0x0004c314) list_double_graphic_heading_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_graphic_heading_pane

0xaf3c,	// (0x0004c314) list_double_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_graphic_pane

0xaf3c,	// (0x0004c314) list_double_heading_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_heading_pane

0xaf3c,	// (0x0004c314) list_double_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_large_graphic_pane

0xaf3c,	// (0x0004c314) list_double_number_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_number_pane

0xaf3c,	// (0x0004c314) list_double_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_pane

0xaf3c,	// (0x0004c314) list_double_time_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_double_time_pane

0xaf3c,	// (0x0004c314) list_setting_number_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_setting_number_pane

0xaf3c,	// (0x0004c314) list_setting_pane_ParamLimits

0xaf3c,	// (0x0004c314) list_setting_pane

0x7a77,	// (0x00048e4f) list_single_2graphic_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_2graphic_pane

0x7a77,	// (0x00048e4f) list_single_graphic_heading_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_graphic_heading_pane

0x7a77,	// (0x00048e4f) list_single_graphic_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_graphic_pane

0x7a77,	// (0x00048e4f) list_single_heading_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_heading_pane

0xaf89,	// (0x0004c361) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x0004c361) list_single_large_graphic_pane

0x7a77,	// (0x00048e4f) list_single_number_heading_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_number_heading_pane

0x7a77,	// (0x00048e4f) list_single_number_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_number_pane

0x7a77,	// (0x00048e4f) list_single_pane_ParamLimits

0x7a77,	// (0x00048e4f) list_single_pane

0x08fa,	// (0x00041cd2) list_highlight_pane_cp1

0x6712,	// (0x00047aea) list_single_pane_g1_ParamLimits

0x6712,	// (0x00047aea) list_single_pane_g1

0x671e,	// (0x00047af6) list_single_pane_g2_ParamLimits

0x671e,	// (0x00047af6) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050985) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050985) list_single_pane_g

0x59a7,	// (0x00046d7f) list_single_pane_t1_ParamLimits

0x59a7,	// (0x00046d7f) list_single_pane_t1

0x6712,	// (0x00047aea) list_single_number_pane_g1_ParamLimits

0x6712,	// (0x00047aea) list_single_number_pane_g1

0x671e,	// (0x00047af6) list_single_number_pane_g2_ParamLimits

0x671e,	// (0x00047af6) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050985) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050985) list_single_number_pane_g

0x5949,	// (0x00046d21) list_single_number_pane_t1_ParamLimits

0x5949,	// (0x00046d21) list_single_number_pane_t1

0x595f,	// (0x00046d37) list_single_number_pane_t2_ParamLimits

0x595f,	// (0x00046d37) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00050d17) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00050d17) list_single_number_pane_t

0x509d,	// (0x00046475) list_single_graphic_pane_g1_ParamLimits

0x509d,	// (0x00046475) list_single_graphic_pane_g1

0x6712,	// (0x00047aea) list_single_graphic_pane_g2_ParamLimits

0x6712,	// (0x00047aea) list_single_graphic_pane_g2

0x671e,	// (0x00047af6) list_single_graphic_pane_g3_ParamLimits

0x671e,	// (0x00047af6) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050974) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050974) list_single_graphic_pane_g

0x50a9,	// (0x00046481) list_single_graphic_pane_t1_ParamLimits

0x50a9,	// (0x00046481) list_single_graphic_pane_t1

0x50bf,	// (0x00046497) list_single_heading_pane_g1_ParamLimits

0x50bf,	// (0x00046497) list_single_heading_pane_g1

0x671e,	// (0x00047af6) list_single_heading_pane_g2_ParamLimits

0x671e,	// (0x00047af6) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005097b) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005097b) list_single_heading_pane_g

0x50d2,	// (0x000464aa) list_single_heading_pane_t1_ParamLimits

0x50d2,	// (0x000464aa) list_single_heading_pane_t1

0x672a,	// (0x00047b02) list_single_heading_pane_t2_ParamLimits

0x672a,	// (0x00047b02) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00050980) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00050980) list_single_heading_pane_t

0x6712,	// (0x00047aea) list_single_number_heading_pane_g1_ParamLimits

0x6712,	// (0x00047aea) list_single_number_heading_pane_g1

0x671e,	// (0x00047af6) list_single_number_heading_pane_g2_ParamLimits

0x671e,	// (0x00047af6) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050985) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050985) list_single_number_heading_pane_g

0x50e8,	// (0x000464c0) list_single_number_heading_pane_t1_ParamLimits

0x50e8,	// (0x000464c0) list_single_number_heading_pane_t1

0x50fe,	// (0x000464d6) list_single_number_heading_pane_t2_ParamLimits

0x50fe,	// (0x000464d6) list_single_number_heading_pane_t2

0x5110,	// (0x000464e8) list_single_number_heading_pane_t3_ParamLimits

0x5110,	// (0x000464e8) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005098a) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005098a) list_single_number_heading_pane_t

0x5122,	// (0x000464fa) list_single_graphic_heading_pane_g1_ParamLimits

0x5122,	// (0x000464fa) list_single_graphic_heading_pane_g1

0x673c,	// (0x00047b14) list_single_graphic_heading_pane_g4_ParamLimits

0x673c,	// (0x00047b14) list_single_graphic_heading_pane_g4

0x671e,	// (0x00047af6) list_single_graphic_heading_pane_g5_ParamLimits

0x671e,	// (0x00047af6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00050991) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00050991) list_single_graphic_heading_pane_g

0x50e8,	// (0x000464c0) list_single_graphic_heading_pane_t1_ParamLimits

0x50e8,	// (0x000464c0) list_single_graphic_heading_pane_t1

0x512e,	// (0x00046506) list_single_graphic_heading_pane_t2_ParamLimits

0x512e,	// (0x00046506) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00050998) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00050998) list_single_graphic_heading_pane_t

0x674d,	// (0x00047b25) list_single_large_graphic_pane_g1_ParamLimits

0x674d,	// (0x00047b25) list_single_large_graphic_pane_g1

0x6712,	// (0x00047aea) list_single_large_graphic_pane_g2_ParamLimits

0x6712,	// (0x00047aea) list_single_large_graphic_pane_g2

0x671e,	// (0x00047af6) list_single_large_graphic_pane_g3_ParamLimits

0x671e,	// (0x00047af6) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005099d) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005099d) list_single_large_graphic_pane_g

0x9f80,	// (0x0004b358) wait_border_pane_g2_copy1

0x6759,	// (0x00047b31) list_single_large_graphic_pane_g4_cp2

0x5140,	// (0x00046518) list_single_large_graphic_pane_t1_ParamLimits

0x5140,	// (0x00046518) list_single_large_graphic_pane_t1

0x8db7,	// (0x0004a18f) list_double_pane_g1_ParamLimits

0x8db7,	// (0x0004a18f) list_double_pane_g1

0x5156,	// (0x0004652e) list_double_pane_g2_ParamLimits

0x5156,	// (0x0004652e) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000509a4) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000509a4) list_double_pane_g

0x5162,	// (0x0004653a) list_double_pane_t1_ParamLimits

0x5162,	// (0x0004653a) list_double_pane_t1

0x5178,	// (0x00046550) list_double_pane_t2_ParamLimits

0x5178,	// (0x00046550) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000509a9) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000509a9) list_double_pane_t

0x518a,	// (0x00046562) list_double2_pane_g1_ParamLimits

0x518a,	// (0x00046562) list_double2_pane_g1

0x519b,	// (0x00046573) list_double2_pane_g2_ParamLimits

0x519b,	// (0x00046573) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000509ae) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000509ae) list_double2_pane_g

0x51a7,	// (0x0004657f) list_double2_pane_t1_ParamLimits

0x51a7,	// (0x0004657f) list_double2_pane_t1

0x51bd,	// (0x00046595) list_double2_pane_t2_ParamLimits

0x51bd,	// (0x00046595) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000509b3) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000509b3) list_double2_pane_t

0x8db7,	// (0x0004a18f) list_double_number_pane_g1_ParamLimits

0x8db7,	// (0x0004a18f) list_double_number_pane_g1

0x5156,	// (0x0004652e) list_double_number_pane_g2_ParamLimits

0x5156,	// (0x0004652e) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000509a4) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000509a4) list_double_number_pane_g

0x51cf,	// (0x000465a7) list_double_number_pane_t1_ParamLimits

0x51cf,	// (0x000465a7) list_double_number_pane_t1

0x51e1,	// (0x000465b9) list_double_number_pane_t2_ParamLimits

0x51e1,	// (0x000465b9) list_double_number_pane_t2

0x51f7,	// (0x000465cf) list_double_number_pane_t3_ParamLimits

0x51f7,	// (0x000465cf) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000509b8) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000509b8) list_double_number_pane_t

0x5209,	// (0x000465e1) list_double_graphic_pane_g1_ParamLimits

0x5209,	// (0x000465e1) list_double_graphic_pane_g1

0x5215,	// (0x000465ed) list_double_graphic_pane_g2_ParamLimits

0x5215,	// (0x000465ed) list_double_graphic_pane_g2

0x5224,	// (0x000465fc) list_double_graphic_pane_g3_ParamLimits

0x5224,	// (0x000465fc) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000509bf) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000509bf) list_double_graphic_pane_g

0x523c,	// (0x00046614) list_double_graphic_pane_t1_ParamLimits

0x523c,	// (0x00046614) list_double_graphic_pane_t1

0x5252,	// (0x0004662a) list_double_graphic_pane_t2_ParamLimits

0x5252,	// (0x0004662a) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000509c8) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000509c8) list_double_graphic_pane_t

0x5264,	// (0x0004663c) list_double2_graphic_pane_g1_ParamLimits

0x5264,	// (0x0004663c) list_double2_graphic_pane_g1

0x6761,	// (0x00047b39) list_double2_graphic_pane_g2_ParamLimits

0x6761,	// (0x00047b39) list_double2_graphic_pane_g2

0x676d,	// (0x00047b45) list_double2_graphic_pane_g3_ParamLimits

0x676d,	// (0x00047b45) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000509cd) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000509cd) list_double2_graphic_pane_g

0x5270,	// (0x00046648) list_double2_graphic_pane_t1_ParamLimits

0x5270,	// (0x00046648) list_double2_graphic_pane_t1

0x5286,	// (0x0004665e) list_double2_graphic_pane_t2_ParamLimits

0x5286,	// (0x0004665e) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000509d4) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000509d4) list_double2_graphic_pane_t

0x5298,	// (0x00046670) list_double_large_graphic_pane_g1_ParamLimits

0x5298,	// (0x00046670) list_double_large_graphic_pane_g1

0x52b7,	// (0x0004668f) list_double_large_graphic_pane_g2_ParamLimits

0x52b7,	// (0x0004668f) list_double_large_graphic_pane_g2

0x5156,	// (0x0004652e) list_double_large_graphic_pane_g3_ParamLimits

0x5156,	// (0x0004652e) list_double_large_graphic_pane_g3

0x6779,	// (0x00047b51) list_double_large_graphic_pane_g4_ParamLimits

0x6779,	// (0x00047b51) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000509d9) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000509d9) list_double_large_graphic_pane_g

0x52cd,	// (0x000466a5) list_double_large_graphic_pane_t1_ParamLimits

0x52cd,	// (0x000466a5) list_double_large_graphic_pane_t1

0x52e6,	// (0x000466be) list_double_large_graphic_pane_t2_ParamLimits

0x52e6,	// (0x000466be) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000509e4) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000509e4) list_double_large_graphic_pane_t

0x67a1,	// (0x00047b79) list_double2_large_graphic_pane_g1_ParamLimits

0x67a1,	// (0x00047b79) list_double2_large_graphic_pane_g1

0x67ad,	// (0x00047b85) list_double2_large_graphic_pane_g2_ParamLimits

0x67ad,	// (0x00047b85) list_double2_large_graphic_pane_g2

0x676d,	// (0x00047b45) list_double2_large_graphic_pane_g3_ParamLimits

0x676d,	// (0x00047b45) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000509e9) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000509e9) list_double2_large_graphic_pane_g

0x52f8,	// (0x000466d0) list_double2_large_graphic_pane_t1_ParamLimits

0x52f8,	// (0x000466d0) list_double2_large_graphic_pane_t1

0x530e,	// (0x000466e6) list_double2_large_graphic_pane_t2_ParamLimits

0x530e,	// (0x000466e6) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000509f0) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000509f0) list_double2_large_graphic_pane_t

0x5320,	// (0x000466f8) list_double_heading_pane_g1_ParamLimits

0x5320,	// (0x000466f8) list_double_heading_pane_g1

0x5331,	// (0x00046709) list_double_heading_pane_g2_ParamLimits

0x5331,	// (0x00046709) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000509f5) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000509f5) list_double_heading_pane_g

0x533d,	// (0x00046715) list_double_heading_pane_t1_ParamLimits

0x533d,	// (0x00046715) list_double_heading_pane_t1

0x5353,	// (0x0004672b) list_double_heading_pane_t2_ParamLimits

0x5353,	// (0x0004672b) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000509fa) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000509fa) list_double_heading_pane_t

0x5365,	// (0x0004673d) list_double_graphic_heading_pane_g1_ParamLimits

0x5365,	// (0x0004673d) list_double_graphic_heading_pane_g1

0x5320,	// (0x000466f8) list_double_graphic_heading_pane_g2_ParamLimits

0x5320,	// (0x000466f8) list_double_graphic_heading_pane_g2

0x5331,	// (0x00046709) list_double_graphic_heading_pane_g3_ParamLimits

0x5331,	// (0x00046709) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000509ff) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000509ff) list_double_graphic_heading_pane_g

0x5371,	// (0x00046749) list_double_graphic_heading_pane_t1_ParamLimits

0x5371,	// (0x00046749) list_double_graphic_heading_pane_t1

0x5387,	// (0x0004675f) list_double_graphic_heading_pane_t2_ParamLimits

0x5387,	// (0x0004675f) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00050a06) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00050a06) list_double_graphic_heading_pane_t

0x5399,	// (0x00046771) list_double_time_pane_g1_ParamLimits

0x5399,	// (0x00046771) list_double_time_pane_g1

0x53aa,	// (0x00046782) list_double_time_pane_g2_ParamLimits

0x53aa,	// (0x00046782) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00050a0b) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00050a0b) list_double_time_pane_g

0x53b6,	// (0x0004678e) list_double_time_pane_t1_ParamLimits

0x53b6,	// (0x0004678e) list_double_time_pane_t1

0x53cc,	// (0x000467a4) list_double_time_pane_t2_ParamLimits

0x53cc,	// (0x000467a4) list_double_time_pane_t2

0x53de,	// (0x000467b6) list_double_time_pane_t3_ParamLimits

0x53de,	// (0x000467b6) list_double_time_pane_t3

0x53f0,	// (0x000467c8) list_double_time_pane_t4_ParamLimits

0x53f0,	// (0x000467c8) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00050a10) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00050a10) list_double_time_pane_t

0x5402,	// (0x000467da) list_setting_pane_g1_ParamLimits

0x5402,	// (0x000467da) list_setting_pane_g1

0x540e,	// (0x000467e6) list_setting_pane_g2_ParamLimits

0x540e,	// (0x000467e6) list_setting_pane_g2

0x0001,

0xf641,	// (0x00050a19) list_setting_pane_g_ParamLimits

0xf641,	// (0x00050a19) list_setting_pane_g

0x541a,	// (0x000467f2) list_setting_pane_t1_ParamLimits

0x541a,	// (0x000467f2) list_setting_pane_t1

0x5434,	// (0x0004680c) list_setting_pane_t2_ParamLimits

0x5434,	// (0x0004680c) list_setting_pane_t2

0x0002,

0xf646,	// (0x00050a1e) list_setting_pane_t_ParamLimits

0xf646,	// (0x00050a1e) list_setting_pane_t

0x5473,	// (0x0004684b) set_value_pane_cp_ParamLimits

0x5473,	// (0x0004684b) set_value_pane_cp

0x5481,	// (0x00046859) list_setting_number_pane_g1_ParamLimits

0x5481,	// (0x00046859) list_setting_number_pane_g1

0x548d,	// (0x00046865) list_setting_number_pane_g2_ParamLimits

0x548d,	// (0x00046865) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00050a25) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00050a25) list_setting_number_pane_g

0x5499,	// (0x00046871) list_setting_number_pane_t1_ParamLimits

0x5499,	// (0x00046871) list_setting_number_pane_t1

0x54b2,	// (0x0004688a) list_setting_number_pane_t2_ParamLimits

0x54b2,	// (0x0004688a) list_setting_number_pane_t2

0x54cc,	// (0x000468a4) list_setting_number_pane_t3_ParamLimits

0x54cc,	// (0x000468a4) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00050a2a) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00050a2a) list_setting_number_pane_t

0x5473,	// (0x0004684b) set_value_pane_ParamLimits

0x5473,	// (0x0004684b) set_value_pane

0x0f3f,	// (0x00042317) bg_set_opt_pane_ParamLimits

0x0f3f,	// (0x00042317) bg_set_opt_pane

0x550f,	// (0x000468e7) set_value_pane_t1

0x0f60,	// (0x00042338) slider_set_pane_cp3

0x0f69,	// (0x00042341) volume_small_pane_cp

0x0f72,	// (0x0004234a) list_form_gen_pane

0x0f7b,	// (0x00042353) scroll_pane_cp8

0x5525,	// (0x000468fd) form_field_data_pane_ParamLimits

0x5525,	// (0x000468fd) form_field_data_pane

0x554d,	// (0x00046925) form_field_data_wide_pane_ParamLimits

0x554d,	// (0x00046925) form_field_data_wide_pane

0x5574,	// (0x0004694c) form_field_popup_pane_ParamLimits

0x5574,	// (0x0004694c) form_field_popup_pane

0x5596,	// (0x0004696e) form_field_popup_wide_pane_ParamLimits

0x5596,	// (0x0004696e) form_field_popup_wide_pane

0x55b7,	// (0x0004698f) form_field_slider_pane_ParamLimits

0x55b7,	// (0x0004698f) form_field_slider_pane

0x55ca,	// (0x000469a2) form_field_slider_wide_pane_ParamLimits

0x55ca,	// (0x000469a2) form_field_slider_wide_pane

0x0f8c,	// (0x00042364) data_form_pane

0x55e7,	// (0x000469bf) form_field_data_pane_t1

0x0f98,	// (0x00042370) input_focus_pane

0x5601,	// (0x000469d9) data_form_wide_pane

0x561e,	// (0x000469f6) form_field_data_wide_pane_t1

0x0d13,	// (0x000420eb) input_focus_pane_cp6

0x5640,	// (0x00046a18) form_field_popup_pane_t1

0x0f98,	// (0x00042370) input_focus_pane_cp7

0x0fc6,	// (0x0004239e) list_form_pane

0x5662,	// (0x00046a3a) form_field_popup_wide_pane_t1

0x0f98,	// (0x00042370) input_focus_pane_cp8

0x0fd2,	// (0x000423aa) list_form_wide_pane

0x567f,	// (0x00046a57) form_field_slider_pane_t1_ParamLimits

0x567f,	// (0x00046a57) form_field_slider_pane_t1

0x5697,	// (0x00046a6f) form_field_slider_pane_t2_ParamLimits

0x5697,	// (0x00046a6f) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00050a3a) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00050a3a) form_field_slider_pane_t

0x0948,	// (0x00041d20) input_focus_pane_cp9_ParamLimits

0x0948,	// (0x00041d20) input_focus_pane_cp9

0x56ac,	// (0x00046a84) slider_cont_pane_ParamLimits

0x56ac,	// (0x00046a84) slider_cont_pane

0x0fde,	// (0x000423b6) form_field_slider_wide_pane_t1_ParamLimits

0x0fde,	// (0x000423b6) form_field_slider_wide_pane_t1

0x56c0,	// (0x00046a98) form_field_slider_wide_pane_t2_ParamLimits

0x56c0,	// (0x00046a98) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050a3f) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050a3f) form_field_slider_wide_pane_t

0x0948,	// (0x00041d20) input_focus_pane_cp10_ParamLimits

0x0948,	// (0x00041d20) input_focus_pane_cp10

0x56d2,	// (0x00046aaa) slider_cont_pane_cp1_ParamLimits

0x56d2,	// (0x00046aaa) slider_cont_pane_cp1

0x56e6,	// (0x00046abe) slider_form_pane_cp

0x0ff0,	// (0x000423c8) input_focus_pane_g1

0x0ff8,	// (0x000423d0) input_focus_pane_g2

0x1000,	// (0x000423d8) input_focus_pane_g3

0x1008,	// (0x000423e0) input_focus_pane_g4

0x1010,	// (0x000423e8) input_focus_pane_g5

0x1018,	// (0x000423f0) input_focus_pane_g6

0x1020,	// (0x000423f8) input_focus_pane_g7

0x1028,	// (0x00042400) input_focus_pane_g8

0x1030,	// (0x00042408) input_focus_pane_g9

0x08f0,	// (0x00041cc8) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050a44) input_focus_pane_g

0x9f89,	// (0x0004b361) wait_border_pane_g3_copy1

0x56ee,	// (0x00046ac6) data_form_pane_t1

0x08f0,	// (0x00041cc8) wait_anim_pane_g1_copy1

0x5971,	// (0x00046d49) data_form_wide_pane_t1

0x570d,	// (0x00046ae5) list_form_graphic_pane_cp_ParamLimits

0x570d,	// (0x00046ae5) list_form_graphic_pane_cp

0xaee0,	// (0x0004c2b8) slider_form_pane_g1

0xaee9,	// (0x0004c2c1) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00050d47) slider_form_pane_g

0x570d,	// (0x00046ae5) list_form_graphic_pane_ParamLimits

0x570d,	// (0x00046ae5) list_form_graphic_pane

0x571f,	// (0x00046af7) list_form_graphic_pane_g1

0x5727,	// (0x00046aff) list_form_graphic_pane_t1_ParamLimits

0x5727,	// (0x00046aff) list_form_graphic_pane_t1

0x0956,	// (0x00041d2e) list_highlight_pane_cp5_ParamLimits

0x0956,	// (0x00041d2e) list_highlight_pane_cp5

0x573c,	// (0x00046b14) find_pane_g1

0x1038,	// (0x00042410) input_find_pane

0x5745,	// (0x00046b1d) input_find_pane_g1_ParamLimits

0x5745,	// (0x00046b1d) input_find_pane_g1

0x5751,	// (0x00046b29) input_find_pane_t1_ParamLimits

0x5751,	// (0x00046b29) input_find_pane_t1

0x5766,	// (0x00046b3e) input_find_pane_t2_ParamLimits

0x5766,	// (0x00046b3e) input_find_pane_t2

0x0001,

0xf681,	// (0x00050a59) input_find_pane_t_ParamLimits

0xf681,	// (0x00050a59) input_find_pane_t

0x1041,	// (0x00042419) input_focus_pane_cp5_ParamLimits

0x1041,	// (0x00042419) input_focus_pane_cp5

0x1054,	// (0x0004242c) bg_popup_window_pane_cp2_ParamLimits

0x1054,	// (0x0004242c) bg_popup_window_pane_cp2

0x1061,	// (0x00042439) listscroll_menu_pane_ParamLimits

0x1061,	// (0x00042439) listscroll_menu_pane

0x67ca,	// (0x00047ba2) popup_submenu_window_ParamLimits

0x67ca,	// (0x00047ba2) popup_submenu_window

0x106d,	// (0x00042445) find_popup_pane_g1

0x1075,	// (0x0004244d) input_popup_find_pane_cp

0x107f,	// (0x00042457) input_focus_pane_cp4_ParamLimits

0x107f,	// (0x00042457) input_focus_pane_cp4

0x108d,	// (0x00042465) input_popup_find_pane_t1_ParamLimits

0x108d,	// (0x00042465) input_popup_find_pane_t1

0x08fa,	// (0x00041cd2) bg_popup_sub_pane_cp

0x10bb,	// (0x00042493) listscroll_popup_sub_pane

0x10c3,	// (0x0004249b) list_submenu_pane_ParamLimits

0x10c3,	// (0x0004249b) list_submenu_pane

0x10d4,	// (0x000424ac) scroll_pane_cp4

0x10dc,	// (0x000424b4) list_single_popup_submenu_pane_ParamLimits

0x10dc,	// (0x000424b4) list_single_popup_submenu_pane

0x10f1,	// (0x000424c9) list_single_popup_submenu_pane_g1

0x10f9,	// (0x000424d1) list_single_popup_submenu_pane_t1_ParamLimits

0x10f9,	// (0x000424d1) list_single_popup_submenu_pane_t1

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp1_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp1

0x6808,	// (0x00047be0) tabs_2_active_pane_g1

0x6810,	// (0x00047be8) tabs_2_active_pane_t1

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp1_ParamLimits

0x0956,	// (0x00041d2e) bg_passive_tab_pane_cp1

0x6808,	// (0x00047be0) tabs_2_passive_pane_g1

0x6810,	// (0x00047be8) tabs_2_passive_pane_t1

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp4

0x6830,	// (0x00047c08) tabs_2_long_active_pane_t1

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp4

0x7720,	// (0x00048af8) list_single_midp_graphic_pane_g4_ParamLimits

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp5

0x684f,	// (0x00047c27) tabs_3_long_active_pane_t1

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp5

0x7720,	// (0x00048af8) list_single_midp_graphic_pane_g4

0x0956,	// (0x00041d2e) bg_popup_window_pane_cp13_ParamLimits

0x0956,	// (0x00041d2e) bg_popup_window_pane_cp13

0x1117,	// (0x000424ef) listscroll_popup_fast_pane_ParamLimits

0x1117,	// (0x000424ef) listscroll_popup_fast_pane

0x1126,	// (0x000424fe) grid_popup_fast_pane_ParamLimits

0x1126,	// (0x000424fe) grid_popup_fast_pane

0x1138,	// (0x00042510) scroll_pane_cp9_ParamLimits

0x1138,	// (0x00042510) scroll_pane_cp9

0xc84f,	// (0x0004dc27) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0004dc27) list_single_graphic_hl_pane_t1_cp2

0x115c,	// (0x00042534) input_focus_pane_cp20_ParamLimits

0x115c,	// (0x00042534) input_focus_pane_cp20

0x116a,	// (0x00042542) query_popup_data_pane_t1_ParamLimits

0x116a,	// (0x00042542) query_popup_data_pane_t1

0x117d,	// (0x00042555) query_popup_data_pane_t2_ParamLimits

0x117d,	// (0x00042555) query_popup_data_pane_t2

0x11c3,	// (0x0004259b) query_popup_data_pane_t3_ParamLimits

0x11c3,	// (0x0004259b) query_popup_data_pane_t3

0x1204,	// (0x000425dc) query_popup_data_pane_t4_ParamLimits

0x1204,	// (0x000425dc) query_popup_data_pane_t4

0x1240,	// (0x00042618) query_popup_data_pane_t5_ParamLimits

0x1240,	// (0x00042618) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00050a5e) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00050a5e) query_popup_data_pane_t

0x0ff0,	// (0x000423c8) bg_set_opt_pane_g1

0x0ff8,	// (0x000423d0) bg_set_opt_pane_g2

0x1000,	// (0x000423d8) bg_set_opt_pane_g3

0x1008,	// (0x000423e0) bg_set_opt_pane_g4

0x1010,	// (0x000423e8) bg_set_opt_pane_g5

0x1018,	// (0x000423f0) bg_set_opt_pane_g6

0x1020,	// (0x000423f8) bg_set_opt_pane_g7

0x1028,	// (0x00042400) bg_set_opt_pane_g8

0x1030,	// (0x00042408) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00050a69) bg_set_opt_pane_g

0x6d45,	// (0x0004811d) control_top_pane_stacon_ParamLimits

0x6d45,	// (0x0004811d) control_top_pane_stacon

0x6d98,	// (0x00048170) signal_pane_stacon_ParamLimits

0x6d98,	// (0x00048170) signal_pane_stacon

0x8dc3,	// (0x0004a19b) stacon_top_pane_g1_ParamLimits

0x8dc3,	// (0x0004a19b) stacon_top_pane_g1

0x6dbd,	// (0x00048195) title_pane_stacon_ParamLimits

0x6dbd,	// (0x00048195) title_pane_stacon

0x6de7,	// (0x000481bf) uni_indicator_pane_stacon_ParamLimits

0x6de7,	// (0x000481bf) uni_indicator_pane_stacon

0x6dfc,	// (0x000481d4) battery_pane_stacon_ParamLimits

0x6dfc,	// (0x000481d4) battery_pane_stacon

0x6e40,	// (0x00048218) control_bottom_pane_stacon_ParamLimits

0x6e40,	// (0x00048218) control_bottom_pane_stacon

0x6e63,	// (0x0004823b) navi_pane_stacon_ParamLimits

0x6e63,	// (0x0004823b) navi_pane_stacon

0x8de5,	// (0x0004a1bd) stacon_bottom_pane_g1_ParamLimits

0x8de5,	// (0x0004a1bd) stacon_bottom_pane_g1

0x6861,	// (0x00047c39) aid_levels_signal_lsc_ParamLimits

0x6861,	// (0x00047c39) aid_levels_signal_lsc

0x6878,	// (0x00047c50) signal_pane_stacon_g1_ParamLimits

0x6878,	// (0x00047c50) signal_pane_stacon_g1

0x688c,	// (0x00047c64) signal_pane_stacon_g2_ParamLimits

0x688c,	// (0x00047c64) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00050a7c) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00050a7c) signal_pane_stacon_g

0x68c1,	// (0x00047c99) title_pane_stacon_t1_ParamLimits

0x68c1,	// (0x00047c99) title_pane_stacon_t1

0x1298,	// (0x00042670) uni_indicator_pane_stacon_g1

0x12a2,	// (0x0004267a) uni_indicator_pane_stacon_g2

0x1284,	// (0x0004265c) uni_indicator_pane_stacon_g3

0x128e,	// (0x00042666) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00050a88) uni_indicator_pane_stacon_g

0x68e6,	// (0x00047cbe) control_top_pane_stacon_g1

0x68ee,	// (0x00047cc6) control_top_pane_stacon_t1_ParamLimits

0x68ee,	// (0x00047cc6) control_top_pane_stacon_t1

0x6925,	// (0x00047cfd) aid_levels_battery_lsc_ParamLimits

0x6925,	// (0x00047cfd) aid_levels_battery_lsc

0x693d,	// (0x00047d15) battery_pane_stacon_g1_ParamLimits

0x693d,	// (0x00047d15) battery_pane_stacon_g1

0x694f,	// (0x00047d27) battery_pane_stacon_g2_ParamLimits

0x694f,	// (0x00047d27) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050a91) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050a91) battery_pane_stacon_g

0x698d,	// (0x00047d65) navi_icon_pane_stacon

0x69a1,	// (0x00047d79) navi_navi_pane_stacon

0x698d,	// (0x00047d65) navi_text_pane_stacon

0x69b7,	// (0x00047d8f) control_bottom_pane_stacon_g1

0x69bf,	// (0x00047d97) control_bottom_pane_stacon_t1_ParamLimits

0x69bf,	// (0x00047d97) control_bottom_pane_stacon_t1

0x69f6,	// (0x00047dce) grid_app_pane_ParamLimits

0x69f6,	// (0x00047dce) grid_app_pane

0x6a18,	// (0x00047df0) scroll_pane_cp15_ParamLimits

0x6a18,	// (0x00047df0) scroll_pane_cp15

0x6a2b,	// (0x00047e03) cell_app_pane_ParamLimits

0x6a2b,	// (0x00047e03) cell_app_pane

0x6a57,	// (0x00047e2f) cell_app_pane_g1_ParamLimits

0x6a57,	// (0x00047e2f) cell_app_pane_g1

0x4212,	// (0x000455ea) cell_app_pane_g2_ParamLimits

0x4212,	// (0x000455ea) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00050a96) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00050a96) cell_app_pane_g

0x6a7b,	// (0x00047e53) cell_app_pane_t1_ParamLimits

0x6a7b,	// (0x00047e53) cell_app_pane_t1

0x421e,	// (0x000455f6) grid_highlight_pane_ParamLimits

0x421e,	// (0x000455f6) grid_highlight_pane

0x0ff0,	// (0x000423c8) cell_highlight_pane_g1

0x0ff8,	// (0x000423d0) cell_highlight_pane_g2

0x1000,	// (0x000423d8) cell_highlight_pane_g3

0x1008,	// (0x000423e0) cell_highlight_pane_g4

0x1010,	// (0x000423e8) cell_highlight_pane_g5

0x1018,	// (0x000423f0) cell_highlight_pane_g6

0x1020,	// (0x000423f8) cell_highlight_pane_g7

0x1028,	// (0x00042400) cell_highlight_pane_g8

0x1030,	// (0x00042408) cell_highlight_pane_g9

0x08f0,	// (0x00041cc8) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050a44) cell_highlight_pane_g

0x4239,	// (0x00045611) bg_scroll_pane

0x6abf,	// (0x00047e97) scroll_handle_pane

0x42a9,	// (0x00045681) scroll_bg_pane_g1

0x42be,	// (0x00045696) scroll_bg_pane_g2

0x42d6,	// (0x000456ae) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00050a9b) scroll_bg_pane_g

0x42eb,	// (0x000456c3) scroll_handle_focus_pane_ParamLimits

0x42eb,	// (0x000456c3) scroll_handle_focus_pane

0x42a9,	// (0x00045681) scroll_handle_pane_g1

0x42f8,	// (0x000456d0) scroll_handle_pane_g2

0x42d6,	// (0x000456ae) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050aa2) scroll_handle_pane_g

0x107f,	// (0x00042457) bg_popup_sub_pane_cp21_ParamLimits

0x107f,	// (0x00042457) bg_popup_sub_pane_cp21

0x430c,	// (0x000456e4) popup_fep_japan_predictive_window_t1_ParamLimits

0x430c,	// (0x000456e4) popup_fep_japan_predictive_window_t1

0x4323,	// (0x000456fb) popup_fep_japan_predictive_window_t2_ParamLimits

0x4323,	// (0x000456fb) popup_fep_japan_predictive_window_t2

0x4356,	// (0x0004572e) popup_fep_japan_predictive_window_t3_ParamLimits

0x4356,	// (0x0004572e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00050aa9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00050aa9) popup_fep_japan_predictive_window_t

0x08fa,	// (0x00041cd2) bg_popup_sub_pane_cp23

0x438d,	// (0x00045765) listscroll_japin_cand_pane

0x4395,	// (0x0004576d) popup_fep_japan_candidate_window_t1

0x43a3,	// (0x0004577b) candidate_pane_ParamLimits

0x43a3,	// (0x0004577b) candidate_pane

0x43b5,	// (0x0004578d) scroll_pane_cp30

0x43bf,	// (0x00045797) list_single_popup_jap_candidate_pane_ParamLimits

0x43bf,	// (0x00045797) list_single_popup_jap_candidate_pane

0x08fa,	// (0x00041cd2) list_highlight_pane_cp30

0x43d3,	// (0x000457ab) list_single_popup_jap_candidate_pane_t1

0x6ae8,	// (0x00047ec0) level_1_signal

0x6af5,	// (0x00047ecd) level_2_signal

0x6b02,	// (0x00047eda) level_3_signal

0x6b0f,	// (0x00047ee7) level_4_signal

0x6b1c,	// (0x00047ef4) level_5_signal

0x6b29,	// (0x00047f01) level_6_signal

0x6b36,	// (0x00047f0e) level_7_signal

0x6ae8,	// (0x00047ec0) level_1_battery

0x6af5,	// (0x00047ecd) level_2_battery

0x6b02,	// (0x00047eda) level_3_battery

0x6b0f,	// (0x00047ee7) level_4_battery

0x6b1c,	// (0x00047ef4) level_5_battery

0x6b29,	// (0x00047f01) level_6_battery

0x6b36,	// (0x00047f0e) level_7_battery

0x4419,	// (0x000457f1) list_menu_pane_ParamLimits

0x4419,	// (0x000457f1) list_menu_pane

0x442f,	// (0x00045807) scroll_pane_cp25_ParamLimits

0x442f,	// (0x00045807) scroll_pane_cp25

0x4448,	// (0x00045820) list_double2_graphic_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double2_graphic_pane_cp2

0x4448,	// (0x00045820) list_double2_large_graphic_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double2_large_graphic_pane_cp2

0x4448,	// (0x00045820) list_double2_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double2_pane_cp2

0x4448,	// (0x00045820) list_double_graphic_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double_graphic_pane_cp2

0x4448,	// (0x00045820) list_double_large_graphic_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double_large_graphic_pane_cp2

0x4448,	// (0x00045820) list_double_number_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double_number_pane_cp2

0x4448,	// (0x00045820) list_double_pane_cp2_ParamLimits

0x4448,	// (0x00045820) list_double_pane_cp2

0x6b78,	// (0x00047f50) list_single_2graphic_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_2graphic_pane_cp2

0x6b78,	// (0x00047f50) list_single_graphic_heading_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_graphic_heading_pane_cp2

0x6b78,	// (0x00047f50) list_single_graphic_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_graphic_pane_cp2

0x6b78,	// (0x00047f50) list_single_heading_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_heading_pane_cp2

0x4458,	// (0x00045830) list_single_large_graphic_pane_cp2_ParamLimits

0x4458,	// (0x00045830) list_single_large_graphic_pane_cp2

0x6b78,	// (0x00047f50) list_single_number_heading_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_number_heading_pane_cp2

0x6b78,	// (0x00047f50) list_single_number_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_number_pane_cp2

0x6b95,	// (0x00047f6d) list_single_pane_cp2_ParamLimits

0x6b95,	// (0x00047f6d) list_single_pane_cp2

0x44cc,	// (0x000458a4) bg_popup_sub_pane_cp22

0x6c71,	// (0x00048049) popup_side_volume_key_window_g1

0x6c9b,	// (0x00048073) popup_side_volume_key_window_t1

0x6cb9,	// (0x00048091) volume_small_pane_cp1

0x0948,	// (0x00041d20) bg_popup_sub_pane_cp24_ParamLimits

0x0948,	// (0x00041d20) bg_popup_sub_pane_cp24

0x4541,	// (0x00045919) fep_china_uni_candidate_pane_ParamLimits

0x4541,	// (0x00045919) fep_china_uni_candidate_pane

0x4555,	// (0x0004592d) fep_china_uni_entry_pane

0x4565,	// (0x0004593d) popup_fep_china_uni_window_g1

0x4581,	// (0x00045959) fep_china_uni_entry_pane_g1

0x458b,	// (0x00045963) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00050ada) fep_china_uni_entry_pane_g

0x4595,	// (0x0004596d) fep_entry_item_pane

0x459f,	// (0x00045977) fep_candidate_item_pane

0x45a7,	// (0x0004597f) fep_china_uni_candidate_pane_g1

0x45b1,	// (0x00045989) fep_china_uni_candidate_pane_g2

0x45b9,	// (0x00045991) fep_china_uni_candidate_pane_g3

0x45c1,	// (0x00045999) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00050adf) fep_china_uni_candidate_pane_g

0x08f0,	// (0x00041cc8) fep_entry_item_pane_g1

0x45cb,	// (0x000459a3) fep_entry_item_pane_t1_ParamLimits

0x45cb,	// (0x000459a3) fep_entry_item_pane_t1

0x45e1,	// (0x000459b9) fep_candidate_item_pane_t1_ParamLimits

0x45e1,	// (0x000459b9) fep_candidate_item_pane_t1

0x45f6,	// (0x000459ce) fep_candidate_item_pane_t2_ParamLimits

0x45f6,	// (0x000459ce) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00050ae8) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00050ae8) fep_candidate_item_pane_t

0x0956,	// (0x00041d2e) list_highlight_pane_cp31_ParamLimits

0x0956,	// (0x00041d2e) list_highlight_pane_cp31

0x4608,	// (0x000459e0) level_1_signal_lsc

0x4611,	// (0x000459e9) level_2_signal_lsc

0x461a,	// (0x000459f2) level_3_signal_lsc

0x4623,	// (0x000459fb) level_4_signal_lsc

0x462c,	// (0x00045a04) level_5_signal_lsc

0x4635,	// (0x00045a0d) level_6_signal_lsc

0x463e,	// (0x00045a16) level_7_signal_lsc

0x463e,	// (0x00045a16) level_1_battery_lsc

0x4647,	// (0x00045a1f) level_2_battery_lsc

0x4650,	// (0x00045a28) level_3_battery_lsc

0x4659,	// (0x00045a31) level_4_battery_lsc

0x4662,	// (0x00045a3a) level_5_battery_lsc

0x466b,	// (0x00045a43) level_6_battery_lsc

0x4608,	// (0x000459e0) level_7_battery_lsc

0x4674,	// (0x00045a4c) scroll_handle_focus_pane_g1

0x467d,	// (0x00045a55) scroll_handle_focus_pane_g2

0x4686,	// (0x00045a5e) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00050aed) scroll_handle_focus_pane_g

0x577b,	// (0x00046b53) list_single_2graphic_pane_g1_ParamLimits

0x577b,	// (0x00046b53) list_single_2graphic_pane_g1

0x673c,	// (0x00047b14) list_single_2graphic_pane_g2_ParamLimits

0x673c,	// (0x00047b14) list_single_2graphic_pane_g2

0x671e,	// (0x00047af6) list_single_2graphic_pane_g3_ParamLimits

0x671e,	// (0x00047af6) list_single_2graphic_pane_g3

0x6cc1,	// (0x00048099) list_single_2graphic_pane_g4_ParamLimits

0x6cc1,	// (0x00048099) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00050af4) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00050af4) list_single_2graphic_pane_g

0x5787,	// (0x00046b5f) list_single_2graphic_pane_t1_ParamLimits

0x5787,	// (0x00046b5f) list_single_2graphic_pane_t1

0x6cd2,	// (0x000480aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6cd2,	// (0x000480aa) list_double2_graphic_large_graphic_pane_g1

0x67ad,	// (0x00047b85) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x67ad,	// (0x00047b85) list_double2_graphic_large_graphic_pane_g2

0x676d,	// (0x00047b45) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x676d,	// (0x00047b45) list_double2_graphic_large_graphic_pane_g3

0x6ce4,	// (0x000480bc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6ce4,	// (0x000480bc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00050afd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00050afd) list_double2_graphic_large_graphic_pane_g

0x57b5,	// (0x00046b8d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57b5,	// (0x00046b8d) list_double2_graphic_large_graphic_pane_t1

0x57cb,	// (0x00046ba3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x57cb,	// (0x00046ba3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00050b06) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00050b06) list_double2_graphic_large_graphic_pane_t

0x8ea8,	// (0x0004a280) popup_fast_swap_window_ParamLimits

0x8ea8,	// (0x0004a280) popup_fast_swap_window

0x8ec6,	// (0x0004a29e) popup_side_volume_key_window

0x8ee4,	// (0x0004a2bc) stacon_top_pane

0x8eee,	// (0x0004a2c6) status_pane_ParamLimits

0x8eee,	// (0x0004a2c6) status_pane

0x08e6,	// (0x00041cbe) status_small_pane

0x08fa,	// (0x00041cd2) control_pane

0x08fa,	// (0x00041cd2) stacon_bottom_pane

0x0f7b,	// (0x00042353) scroll_pane_cp121

0x0f72,	// (0x0004234a) set_content_pane

0x6cf0,	// (0x000480c8) bg_active_tab_pane_g1_cp1

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp1

0x6d02,	// (0x000480da) bg_active_tab_pane_g3_cp1

0x6cf0,	// (0x000480c8) bg_passive_tab_pane_g1_cp1

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp1

0x6d02,	// (0x000480da) bg_passive_tab_pane_g3_cp1

0x6d0b,	// (0x000480e3) bg_active_tab_pane_g1_cp2

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp2

0x6d14,	// (0x000480ec) bg_active_tab_pane_g3_cp2

0x6d0b,	// (0x000480e3) bg_passive_tab_pane_g1_cp2

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp2

0x6d14,	// (0x000480ec) bg_passive_tab_pane_g3_cp2

0x6d1d,	// (0x000480f5) bg_active_tab_pane_g1_cp3

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp3

0x6d26,	// (0x000480fe) bg_active_tab_pane_g3_cp3

0x6d1d,	// (0x000480f5) bg_passive_tab_pane_g1_cp3

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp3

0x6d26,	// (0x000480fe) bg_passive_tab_pane_g3_cp3

0x6d2f,	// (0x00048107) bg_active_tab_pane_g1_cp4

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp4

0x6d3a,	// (0x00048112) bg_active_tab_pane_g3_cp4

0x6d2f,	// (0x00048107) bg_passive_tab_pane_g1_cp4

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp4

0x6d3a,	// (0x00048112) bg_passive_tab_pane_g3_cp4

0x8e01,	// (0x0004a1d9) bg_active_tab_pane_g1_cp5

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp5

0x8e0a,	// (0x0004a1e2) bg_active_tab_pane_g3_cp5

0x8e01,	// (0x0004a1d9) bg_passive_tab_pane_g1_cp5

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp5

0x8e0a,	// (0x0004a1e2) bg_passive_tab_pane_g3_cp5

0x8e13,	// (0x0004a1eb) list_set_graphic_pane_ParamLimits

0x8e13,	// (0x0004a1eb) list_set_graphic_pane

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp4

0x8e29,	// (0x0004a201) list_set_graphic_pane_g1_ParamLimits

0x8e29,	// (0x0004a201) list_set_graphic_pane_g1

0x8e35,	// (0x0004a20d) list_set_graphic_pane_g2_ParamLimits

0x8e35,	// (0x0004a20d) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00050b0b) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00050b0b) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x00050e8c) volume_small_pane_cp_g

0x8e59,	// (0x0004a231) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e59,	// (0x0004a231) list_double2_large_graphic_pane_g1_cp2

0x8e67,	// (0x0004a23f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e67,	// (0x0004a23f) list_double2_large_graphic_pane_g2_cp2

0x8e78,	// (0x0004a250) list_double2_large_graphic_pane_g3_cp2

0x8e80,	// (0x0004a258) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e80,	// (0x0004a258) list_double2_large_graphic_pane_t1_cp2

0x8e96,	// (0x0004a26e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e96,	// (0x0004a26e) list_double2_large_graphic_pane_t2_cp2

0xaa6d,	// (0x0004be45) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa6d,	// (0x0004be45) list_double_large_graphic_pane_g1_cp2

0xaa80,	// (0x0004be58) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa80,	// (0x0004be58) list_double_large_graphic_pane_g2_cp2

0x9000,	// (0x0004a3d8) list_double_large_graphic_pane_g3_cp2

0xaa91,	// (0x0004be69) list_double_large_graphic_pane_g4_cp

0xaa99,	// (0x0004be71) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa99,	// (0x0004be71) list_double_large_graphic_pane_t1_cp2

0xaab0,	// (0x0004be88) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaab0,	// (0x0004be88) list_double_large_graphic_pane_t2_cp2

0x8efc,	// (0x0004a2d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8efc,	// (0x0004a2d4) list_double2_graphic_pane_g1_cp2

0x8f0a,	// (0x0004a2e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f0a,	// (0x0004a2e2) list_double2_graphic_pane_g2_cp2

0x8f1b,	// (0x0004a2f3) list_double2_graphic_pane_g3_cp2

0x8f25,	// (0x0004a2fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f25,	// (0x0004a2fd) list_double2_graphic_pane_t1_cp2

0x8f3b,	// (0x0004a313) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f3b,	// (0x0004a313) list_double2_graphic_pane_t2_cp2

0x8db7,	// (0x0004a18f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8db7,	// (0x0004a18f) list_single_number_heading_pane_g1_cp2

0x8f4d,	// (0x0004a325) list_single_number_heading_pane_g2_cp2

0x8f55,	// (0x0004a32d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f55,	// (0x0004a32d) list_single_number_heading_pane_t1_cp2

0x8f6b,	// (0x0004a343) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f6b,	// (0x0004a343) list_single_number_heading_pane_t2_cp2

0x8f7f,	// (0x0004a357) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f7f,	// (0x0004a357) list_single_number_heading_pane_t3_cp2

0x8db7,	// (0x0004a18f) list_single_heading_pane_g1_cp2_ParamLimits

0x8db7,	// (0x0004a18f) list_single_heading_pane_g1_cp2

0x8f4d,	// (0x0004a325) list_single_heading_pane_g2_cp2

0x8f55,	// (0x0004a32d) list_single_heading_pane_t1_cp2_ParamLimits

0x8f55,	// (0x0004a32d) list_single_heading_pane_t1_cp2

0xa867,	// (0x0004bc3f) list_single_heading_pane_t2_cp2_ParamLimits

0xa867,	// (0x0004bc3f) list_single_heading_pane_t2_cp2

0xa7af,	// (0x0004bb87) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7af,	// (0x0004bb87) list_double_graphic_pane_g1_cp2

0xa7bb,	// (0x0004bb93) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7bb,	// (0x0004bb93) list_double_graphic_pane_g2_cp2

0xa7ca,	// (0x0004bba2) list_double_graphic_pane_g3_cp2

0xa7d2,	// (0x0004bbaa) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7d2,	// (0x0004bbaa) list_double_graphic_pane_t1_cp2

0xa7e8,	// (0x0004bbc0) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7e8,	// (0x0004bbc0) list_double_graphic_pane_t2_cp2

0x8ff4,	// (0x0004a3cc) list_double_number_pane_g1_cp2_ParamLimits

0x8ff4,	// (0x0004a3cc) list_double_number_pane_g1_cp2

0x9000,	// (0x0004a3d8) list_double_number_pane_g2_cp2

0xa773,	// (0x0004bb4b) list_double_number_pane_t1_cp2_ParamLimits

0xa773,	// (0x0004bb4b) list_double_number_pane_t1_cp2

0xa787,	// (0x0004bb5f) list_double_number_pane_t2_cp2_ParamLimits

0xa787,	// (0x0004bb5f) list_double_number_pane_t2_cp2

0xa79d,	// (0x0004bb75) list_double_number_pane_t3_cp2_ParamLimits

0xa79d,	// (0x0004bb75) list_double_number_pane_t3_cp2

0xa65c,	// (0x0004ba34) list_single_graphic_pane_g1_cp2_ParamLimits

0xa65c,	// (0x0004ba34) list_single_graphic_pane_g1_cp2

0x9065,	// (0x0004a43d) list_single_graphic_pane_g2_cp2_ParamLimits

0x9065,	// (0x0004a43d) list_single_graphic_pane_g2_cp2

0x9071,	// (0x0004a449) list_single_graphic_pane_g3_cp2

0xa632,	// (0x0004ba0a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa632,	// (0x0004ba0a) list_single_graphic_pane_t1_cp2

0x9065,	// (0x0004a43d) list_single_number_pane_g1_cp2_ParamLimits

0x9065,	// (0x0004a43d) list_single_number_pane_g1_cp2

0x9071,	// (0x0004a449) list_single_number_pane_g2_cp2

0xa632,	// (0x0004ba0a) list_single_number_pane_t1_cp2_ParamLimits

0xa632,	// (0x0004ba0a) list_single_number_pane_t1_cp2

0xa648,	// (0x0004ba20) list_single_number_pane_t2_cp2_ParamLimits

0xa648,	// (0x0004ba20) list_single_number_pane_t2_cp2

0x8e67,	// (0x0004a23f) list_double2_pane_g1_cp2_ParamLimits

0x8e67,	// (0x0004a23f) list_double2_pane_g1_cp2

0x8e78,	// (0x0004a250) list_double2_pane_g2_cp2

0x8fcc,	// (0x0004a3a4) list_double2_pane_t1_cp2_ParamLimits

0x8fcc,	// (0x0004a3a4) list_double2_pane_t1_cp2

0x8fe2,	// (0x0004a3ba) list_double2_pane_t2_cp2_ParamLimits

0x8fe2,	// (0x0004a3ba) list_double2_pane_t2_cp2

0x8ff4,	// (0x0004a3cc) list_double_pane_g1_cp2_ParamLimits

0x8ff4,	// (0x0004a3cc) list_double_pane_g1_cp2

0x9000,	// (0x0004a3d8) list_double_pane_g2_cp2

0x9008,	// (0x0004a3e0) list_double_pane_t1_cp2_ParamLimits

0x9008,	// (0x0004a3e0) list_double_pane_t1_cp2

0x901e,	// (0x0004a3f6) list_double_pane_t2_cp2_ParamLimits

0x901e,	// (0x0004a3f6) list_double_pane_t2_cp2

0x9055,	// (0x0004a42d) list_single_pane_cp2_g3

0x9065,	// (0x0004a43d) list_single_pane_g1_cp2_ParamLimits

0x9065,	// (0x0004a43d) list_single_pane_g1_cp2

0x9071,	// (0x0004a449) list_single_pane_g2_cp2

0x9079,	// (0x0004a451) list_single_pane_t1_cp2_ParamLimits

0x9079,	// (0x0004a451) list_single_pane_t1_cp2

0x9091,	// (0x0004a469) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9091,	// (0x0004a469) list_single_large_graphic_pane_g1_cp2

0x909f,	// (0x0004a477) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x909f,	// (0x0004a477) list_single_large_graphic_pane_g2_cp2

0x90ab,	// (0x0004a483) list_single_large_graphic_pane_g3_cp2

0x90b3,	// (0x0004a48b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90b3,	// (0x0004a48b) list_single_large_graphic_pane_g4_cp1

0x90cd,	// (0x0004a4a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90cd,	// (0x0004a4a5) list_single_large_graphic_pane_t1_cp2

0xa5fc,	// (0x0004b9d4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5fc,	// (0x0004b9d4) list_single_graphic_heading_pane_g1_cp2

0xa5c9,	// (0x0004b9a1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5c9,	// (0x0004b9a1) list_single_graphic_heading_pane_g4_cp2

0x9071,	// (0x0004a449) list_single_graphic_heading_pane_g5_cp2

0xa608,	// (0x0004b9e0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa608,	// (0x0004b9e0) list_single_graphic_heading_pane_t1_cp2

0xa61e,	// (0x0004b9f6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa61e,	// (0x0004b9f6) list_single_graphic_heading_pane_t2_cp2

0xa5bd,	// (0x0004b995) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5bd,	// (0x0004b995) list_single_2graphic_pane_g1_cp2

0xa5c9,	// (0x0004b9a1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5c9,	// (0x0004b9a1) list_single_2graphic_pane_g2_cp2

0x9071,	// (0x0004a449) list_single_2graphic_pane_g3_cp2

0xa5da,	// (0x0004b9b2) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5da,	// (0x0004b9b2) list_single_2graphic_pane_g4_cp2

0xa5e6,	// (0x0004b9be) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5e6,	// (0x0004b9be) list_single_2graphic_pane_t1_cp2

0x08f0,	// (0x00041cc8) list_highlight_pane_g10_cp1

0xa195,	// (0x0004b56d) list_highlight_pane_g1_cp1

0xa19d,	// (0x0004b575) list_highlight_pane_g2_cp1

0xa1a5,	// (0x0004b57d) list_highlight_pane_g3_cp1

0xa1ad,	// (0x0004b585) list_highlight_pane_g4_cp1

0xa1b5,	// (0x0004b58d) list_highlight_pane_g5_cp1

0xa1bd,	// (0x0004b595) list_highlight_pane_g6_cp1

0xa1c5,	// (0x0004b59d) list_highlight_pane_g7_cp1

0xa1cd,	// (0x0004b5a5) list_highlight_pane_g8_cp1

0xa1d5,	// (0x0004b5ad) list_highlight_pane_g9_cp1

0xa0b5,	// (0x0004b48d) form_field_slider_pane_t3

0xa0c3,	// (0x0004b49b) form_field_slider_pane_t4

0xa0d1,	// (0x0004b4a9) slider_form_pane_ParamLimits

0xa0d1,	// (0x0004b4a9) slider_form_pane

0x08fa,	// (0x00041cd2) control_abbreviations

0x08fa,	// (0x00041cd2) control_conventions

0x08fa,	// (0x00041cd2) control_definitions

0x08fa,	// (0x00041cd2) format_table_attribute

0xa8bd,	// (0x0004bc95) bg_popup_preview_window_pane_g9

0x08fa,	// (0x00041cd2) format_table_data2

0x08fa,	// (0x00041cd2) format_table_data3

0x08fa,	// (0x00041cd2) format_table_data_example

0x0008,

0x08fa,	// (0x00041cd2) intro_purpose

0xf8cf,	// (0x00050ca7) bg_popup_preview_window_pane_g

0x08fa,	// (0x00041cd2) texts_category

0x08fa,	// (0x00041cd2) texts_graphics

0x90e3,	// (0x0004a4bb) text_digital

0x90f2,	// (0x0004a4ca) text_primary

0x9101,	// (0x0004a4d9) text_primary_small

0x9110,	// (0x0004a4e8) text_secondary

0x911f,	// (0x0004a4f7) text_title

0xb020,	// (0x0004c3f8) bg_passive_tab_pane_g1_cp3_srt

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x0004c401) bg_passive_tab_pane_g3_cp3_srt

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp3_srt_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp3_srt

0xb032,	// (0x0004c40a) tabs_4_active_pane_srt_g1

0xb03a,	// (0x0004c412) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x0004c412) tabs_4_active_pane_srt_t1

0xb020,	// (0x0004c3f8) bg_active_tab_pane_g1_cp3_copy1

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x0004c401) bg_active_tab_pane_g3_cp3_copy1

0x0956,	// (0x00041d2e) tabs_2_long_active_pane_srt_ParamLimits

0x0956,	// (0x00041d2e) tabs_2_long_active_pane_srt

0x0956,	// (0x00041d2e) tabs_2_long_passive_pane_srt_ParamLimits

0x0956,	// (0x00041d2e) tabs_2_long_passive_pane_srt

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp4_srt

0xacf7,	// (0x0004c0cf) bg_passive_tab_pane_g1_cp4_srt

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp4_srt

0xad00,	// (0x0004c0d8) bg_passive_tab_pane_g3_cp4_srt

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp4_srt_ParamLimits

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp4_srt

0xad09,	// (0x0004c0e1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad09,	// (0x0004c0e1) tabs_2_long_active_pane_srt_t1

0xacf7,	// (0x0004c0cf) bg_active_tab_pane_g1_cp4_srt

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp4_srt

0xad00,	// (0x0004c0d8) bg_active_tab_pane_g3_cp4_srt

0x0948,	// (0x00041d20) tabs_3_long_active_pane_srt_ParamLimits

0x0948,	// (0x00041d20) tabs_3_long_active_pane_srt

0x0948,	// (0x00041d20) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0948,	// (0x00041d20) tabs_3_long_passive_pane_cp_srt

0x0948,	// (0x00041d20) tabs_3_long_passive_pane_srt_ParamLimits

0x0948,	// (0x00041d20) tabs_3_long_passive_pane_srt

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp5_srt

0x8e01,	// (0x0004a1d9) bg_passive_tab_pane_g1_cp5_srt

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp5_srt

0x8e0a,	// (0x0004a1e2) bg_passive_tab_pane_g3_cp5_srt

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp5_srt_ParamLimits

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp5_srt

0xace5,	// (0x0004c0bd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xace5,	// (0x0004c0bd) tabs_3_long_active_pane_srt_t1

0x8e01,	// (0x0004a1d9) bg_active_tab_pane_g1_cp5_srt

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp5_srt

0x8e0a,	// (0x0004a1e2) bg_active_tab_pane_g3_cp5_srt

0xacd7,	// (0x0004c0af) navi_text_pane_srt_t1

0xaccf,	// (0x0004c0a7) navi_icon_pane_srt_g1

0x92f7,	// (0x0004a6cf) midp_editing_number_pane_srt

0x912e,	// (0x0004a506) midp_ticker_pane_srt

0x92ff,	// (0x0004a6d7) midp_ticker_pane_srt_g1

0x9307,	// (0x0004a6df) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00050b2a) midp_ticker_pane_srt_g

0x930f,	// (0x0004a6e7) midp_ticker_pane_srt_t1

0xacc0,	// (0x0004c098) midp_editing_number_pane_t1_copy1

0x9136,	// (0x0004a50e) listscroll_midp_pane

0x9136,	// (0x0004a50e) midp_form_pane

0x91a5,	// (0x0004a57d) midp_info_popup_window_ParamLimits

0x91a5,	// (0x0004a57d) midp_info_popup_window

0x107f,	// (0x00042457) bg_popup_sub_pane_cp50_ParamLimits

0x107f,	// (0x00042457) bg_popup_sub_pane_cp50

0x9db7,	// (0x0004b18f) listscroll_midp_info_pane_ParamLimits

0x9db7,	// (0x0004b18f) listscroll_midp_info_pane

0x9d97,	// (0x0004b16f) listscroll_form_midp_pane_ParamLimits

0x9d97,	// (0x0004b16f) listscroll_form_midp_pane

0x9da3,	// (0x0004b17b) scroll_bar_cp050

0x9d77,	// (0x0004b14f) list_midp_pane

0xbad4,	// (0x0004ceac) signal_pane_g2_cp

0x9cb1,	// (0x0004b089) listscroll_midp_info_pane_t1_ParamLimits

0x9cb1,	// (0x0004b089) listscroll_midp_info_pane_t1

0x9cc9,	// (0x0004b0a1) listscroll_midp_info_pane_t2_ParamLimits

0x9cc9,	// (0x0004b0a1) listscroll_midp_info_pane_t2

0x9d07,	// (0x0004b0df) listscroll_midp_info_pane_t3_ParamLimits

0x9d07,	// (0x0004b0df) listscroll_midp_info_pane_t3

0x9d41,	// (0x0004b119) listscroll_midp_info_pane_t4_ParamLimits

0x9d41,	// (0x0004b119) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00050be2) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00050be2) listscroll_midp_info_pane_t

0x10d4,	// (0x000424ac) scroll_pane_cp21

0x9c4b,	// (0x0004b023) form_midp_field_choice_group_pane

0x9c54,	// (0x0004b02c) form_midp_field_text_pane

0x9c97,	// (0x0004b06f) form_midp_field_time_pane

0x9c9f,	// (0x0004b077) form_midp_gauge_slider_pane

0x9ca8,	// (0x0004b080) form_midp_gauge_wait_pane

0x08fa,	// (0x00041cd2) form_midp_image_pane

0x592a,	// (0x00046d02) list_single_midp_pane_ParamLimits

0x592a,	// (0x00046d02) list_single_midp_pane

0x9c0f,	// (0x0004afe7) form_midp_field_text_pane_t1

0x9a01,	// (0x0004add9) input_focus_pane_cp050

0x9c3a,	// (0x0004b012) list_midp_form_text_pane

0x9bde,	// (0x0004afb6) form_midp_field_choice_group_pane_t1

0x9bec,	// (0x0004afc4) input_focus_pane_cp051

0x9c00,	// (0x0004afd8) list_midp_choice_pane

0x08fa,	// (0x00041cd2) status_idle_pane

0x9bc2,	// (0x0004af9a) form_midp_field_time_pane_t1

0x08f0,	// (0x00041cc8) wait_anim_pane_g2_copy1

0x9bd0,	// (0x0004afa8) form_midp_field_time_pane_t2

0x0001,

0x9255,	// (0x0004a62d) aid_navinavi_width_2_pane

0xf805,	// (0x00050bdd) form_midp_field_time_pane_t

0x08fa,	// (0x00041cd2) input_focus_pane_cp052

0x08fa,	// (0x00041cd2) bg_input_focus_pane_cp040

0x9b82,	// (0x0004af5a) form_midp_gauge_slider_pane_t1

0x9b90,	// (0x0004af68) form_midp_gauge_slider_pane_t2

0x9b9e,	// (0x0004af76) form_midp_gauge_slider_pane_t3

0x9bac,	// (0x0004af84) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00050bd4) form_midp_gauge_slider_pane_t

0x9bba,	// (0x0004af92) form_midp_slider_pane

0x0956,	// (0x00041d2e) bg_input_focus_pane_cp041_ParamLimits

0x0956,	// (0x00041d2e) bg_input_focus_pane_cp041

0x9b4f,	// (0x0004af27) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b4f,	// (0x0004af27) form_midp_gauge_wait_pane_t1

0x9b61,	// (0x0004af39) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b61,	// (0x0004af39) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00050bcf) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00050bcf) form_midp_gauge_wait_pane_t

0x9b73,	// (0x0004af4b) form_midp_wait_pane_ParamLimits

0x9b73,	// (0x0004af4b) form_midp_wait_pane

0x9b17,	// (0x0004aeef) form_midp_image_pane_g1

0x9b20,	// (0x0004aef8) form_midp_image_pane_t1

0x9b2f,	// (0x0004af07) form_midp_image_pane_t2

0x9b3e,	// (0x0004af16) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00050bc8) form_midp_image_pane_t

0x9b0e,	// (0x0004aee6) list_single_midp_pane_g1

0x591b,	// (0x00046cf3) list_single_midp_pane_t1

0x9af4,	// (0x0004aecc) list_midp_form_item_pane_ParamLimits

0x9af4,	// (0x0004aecc) list_midp_form_item_pane

0x91fd,	// (0x0004a5d5) list_midp_form_item_pane_t1

0x920c,	// (0x0004a5e4) midp_ticker_pane_g1

0x9218,	// (0x0004a5f0) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00050b10) midp_ticker_pane_g

0x9224,	// (0x0004a5fc) midp_ticker_pane_t1

0xaf2d,	// (0x0004c305) midp_editing_number_pane_t1

0xaf0b,	// (0x0004c2e3) midp_editing_number_pane

0xaf1a,	// (0x0004c2f2) midp_ticker_pane

0xacb0,	// (0x0004c088) ai_message_heading_pane

0x08fa,	// (0x00041cd2) bg_popup_window_pane_cp14

0xacb8,	// (0x0004c090) listscroll_ai_message_pane

0xac36,	// (0x0004c00e) ai_message_heading_pane_g1_ParamLimits

0xac36,	// (0x0004c00e) ai_message_heading_pane_g1

0xac42,	// (0x0004c01a) ai_message_heading_pane_g2_ParamLimits

0xac42,	// (0x0004c01a) ai_message_heading_pane_g2

0xac50,	// (0x0004c028) ai_message_heading_pane_g3_ParamLimits

0xac50,	// (0x0004c028) ai_message_heading_pane_g3

0xac5c,	// (0x0004c034) ai_message_heading_pane_g4_ParamLimits

0xac5c,	// (0x0004c034) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00050d09) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00050d09) ai_message_heading_pane_g

0xac68,	// (0x0004c040) ai_message_heading_pane_t1_ParamLimits

0xac68,	// (0x0004c040) ai_message_heading_pane_t1

0xac82,	// (0x0004c05a) ai_message_heading_pane_t2_ParamLimits

0xac82,	// (0x0004c05a) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00050d12) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00050d12) ai_message_heading_pane_t

0xac96,	// (0x0004c06e) bg_popup_heading_pane_cp1_ParamLimits

0xac96,	// (0x0004c06e) bg_popup_heading_pane_cp1

0xac24,	// (0x0004bffc) list_ai_message_pane_ParamLimits

0xac24,	// (0x0004bffc) list_ai_message_pane

0x10d4,	// (0x000424ac) scroll_pane_cp10

0xabc0,	// (0x0004bf98) list_ai_message_pane_g1

0xabc8,	// (0x0004bfa0) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00050ce6) list_ai_message_pane_g

0xabd0,	// (0x0004bfa8) list_ai_message_pane_t1_ParamLimits

0xabd0,	// (0x0004bfa8) list_ai_message_pane_t1

0xabe5,	// (0x0004bfbd) list_ai_message_pane_t2_ParamLimits

0xabe5,	// (0x0004bfbd) list_ai_message_pane_t2

0xabfa,	// (0x0004bfd2) list_ai_message_pane_t3_ParamLimits

0xabfa,	// (0x0004bfd2) list_ai_message_pane_t3

0xac0f,	// (0x0004bfe7) list_ai_message_pane_t4_ParamLimits

0xac0f,	// (0x0004bfe7) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00050ceb) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00050ceb) list_ai_message_pane_t

0xaba9,	// (0x0004bf81) cell_ai_soft_ind_pane_ParamLimits

0xaba9,	// (0x0004bf81) cell_ai_soft_ind_pane

0x9236,	// (0x0004a60e) cell_ai_soft_ind_pane_g1_ParamLimits

0x9236,	// (0x0004a60e) cell_ai_soft_ind_pane_g1

0x08fa,	// (0x00041cd2) grid_highlight_cp1

0x9243,	// (0x0004a61b) text_secondary_cp56_ParamLimits

0x9243,	// (0x0004a61b) text_secondary_cp56

0xab7e,	// (0x0004bf56) example_general_pane_ParamLimits

0xab7e,	// (0x0004bf56) example_general_pane

0xab8a,	// (0x0004bf62) example_parent_pane_g1_ParamLimits

0xab8a,	// (0x0004bf62) example_parent_pane_g1

0xab96,	// (0x0004bf6e) example_parent_pane_t1_ParamLimits

0xab96,	// (0x0004bf6e) example_parent_pane_t1

0x744b,	// (0x00048823) popup_preview_text_window_ParamLimits

0x744b,	// (0x00048823) popup_preview_text_window

0x905d,	// (0x0004a435) list_single_pane_cp2_g4

0x0b57,	// (0x00041f2f) bg_popup_preview_window_pane_ParamLimits

0x0b57,	// (0x00041f2f) bg_popup_preview_window_pane

0xa8c7,	// (0x0004bc9f) popup_preview_text_window_t1_ParamLimits

0xa8c7,	// (0x0004bc9f) popup_preview_text_window_t1

0xa8e5,	// (0x0004bcbd) popup_preview_text_window_t2_ParamLimits

0xa8e5,	// (0x0004bcbd) popup_preview_text_window_t2

0xa92e,	// (0x0004bd06) popup_preview_text_window_t3_ParamLimits

0xa92e,	// (0x0004bd06) popup_preview_text_window_t3

0xa973,	// (0x0004bd4b) popup_preview_text_window_t4_ParamLimits

0xa973,	// (0x0004bd4b) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00050cba) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00050cba) popup_preview_text_window_t

0xa9f1,	// (0x0004bdc9) scroll_pane_cp11

0x998d,	// (0x0004ad65) bg_popup_preview_window_pane_g1

0xa87b,	// (0x0004bc53) bg_popup_preview_window_pane_g2

0xa885,	// (0x0004bc5d) bg_popup_preview_window_pane_g3

0xa88f,	// (0x0004bc67) bg_popup_preview_window_pane_g4

0xa899,	// (0x0004bc71) bg_popup_preview_window_pane_g5

0xa8a3,	// (0x0004bc7b) bg_popup_preview_window_pane_g6

0xa8ab,	// (0x0004bc83) bg_popup_preview_window_pane_g7

0xa8b3,	// (0x0004bc8b) bg_popup_preview_window_pane_g8

0x5f92,	// (0x0004736a) aid_popup_width_pane

0x7427,	// (0x000487ff) popup_midp_note_alarm_window_ParamLimits

0x7427,	// (0x000487ff) popup_midp_note_alarm_window

0x0f8c,	// (0x00042364) data_form_pane_ParamLimits

0x55dd,	// (0x000469b5) form_field_data_pane_g1

0x55e7,	// (0x000469bf) form_field_data_pane_t1_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_ParamLimits

0x5601,	// (0x000469d9) data_form_wide_pane_ParamLimits

0x5612,	// (0x000469ea) form_field_data_wide_pane_g1

0x561e,	// (0x000469f6) form_field_data_wide_pane_t1_ParamLimits

0x0d13,	// (0x000420eb) input_focus_pane_cp6_ParamLimits

0x67fa,	// (0x00047bd2) input_popup_find_pane_g1_ParamLimits

0x67fa,	// (0x00047bd2) input_popup_find_pane_g1

0x6960,	// (0x00047d38) aid_navi_side_left_pane

0x6975,	// (0x00047d4d) aid_navi_side_right_pane

0xa290,	// (0x0004b668) bg_popup_window_pane_cp30_ParamLimits

0xa290,	// (0x0004b668) bg_popup_window_pane_cp30

0xa30a,	// (0x0004b6e2) popup_midp_note_alarm_window_g1_ParamLimits

0xa30a,	// (0x0004b6e2) popup_midp_note_alarm_window_g1

0xa33a,	// (0x0004b712) popup_midp_note_alarm_window_t1_ParamLimits

0xa33a,	// (0x0004b712) popup_midp_note_alarm_window_t1

0xa3db,	// (0x0004b7b3) popup_midp_note_alarm_window_t2_ParamLimits

0xa3db,	// (0x0004b7b3) popup_midp_note_alarm_window_t2

0xa489,	// (0x0004b861) popup_midp_note_alarm_window_t3_ParamLimits

0xa489,	// (0x0004b861) popup_midp_note_alarm_window_t3

0xa4bb,	// (0x0004b893) popup_midp_note_alarm_window_t4_ParamLimits

0xa4bb,	// (0x0004b893) popup_midp_note_alarm_window_t4

0xa4e1,	// (0x0004b8b9) popup_midp_note_alarm_window_t5_ParamLimits

0xa4e1,	// (0x0004b8b9) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00050c57) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00050c57) popup_midp_note_alarm_window_t

0xa58d,	// (0x0004b965) wait_bar_pane_cp1_ParamLimits

0xa58d,	// (0x0004b965) wait_bar_pane_cp1

0x08fa,	// (0x00041cd2) wait_anim_pane_copy1

0x08fa,	// (0x00041cd2) wait_border_pane_copy1

0x9f75,	// (0x0004b34d) wait_border_pane_g1_copy1

0x5638,	// (0x00046a10) form_field_popup_pane_g1

0x5640,	// (0x00046a18) form_field_popup_pane_t1_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_cp7_ParamLimits

0x0fc6,	// (0x0004239e) list_form_pane_ParamLimits

0x565a,	// (0x00046a32) form_field_popup_wide_pane_g1

0x5662,	// (0x00046a3a) form_field_popup_wide_pane_t1_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_cp8_ParamLimits

0x0fd2,	// (0x000423aa) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x0004c493) aid_size_cell_graphic_pane

0x56ee,	// (0x00046ac6) data_form_pane_t1_ParamLimits

0x5971,	// (0x00046d49) data_form_wide_pane_t1_ParamLimits

0x9544,	// (0x0004a91c) bg_status_flat_pane

0x63b7,	// (0x0004778f) title_pane_t1_ParamLimits

0x0910,	// (0x00041ce8) title_pane_t2_ParamLimits

0x0936,	// (0x00041d0e) title_pane_t3_ParamLimits

0xf532,	// (0x0005090a) title_pane_t_ParamLimits

0x6ae8,	// (0x00047ec0) level_1_signal_ParamLimits

0x6af5,	// (0x00047ecd) level_2_signal_ParamLimits

0x6b02,	// (0x00047eda) level_3_signal_ParamLimits

0x6b0f,	// (0x00047ee7) level_4_signal_ParamLimits

0x6b1c,	// (0x00047ef4) level_5_signal_ParamLimits

0x6b29,	// (0x00047f01) level_6_signal_ParamLimits

0x6b36,	// (0x00047f0e) level_7_signal_ParamLimits

0x6ae8,	// (0x00047ec0) level_1_battery_ParamLimits

0x6af5,	// (0x00047ecd) level_2_battery_ParamLimits

0x6b02,	// (0x00047eda) level_3_battery_ParamLimits

0x6b0f,	// (0x00047ee7) level_4_battery_ParamLimits

0x6b1c,	// (0x00047ef4) level_5_battery_ParamLimits

0x6b29,	// (0x00047f01) level_6_battery_ParamLimits

0x6b36,	// (0x00047f0e) level_7_battery_ParamLimits

0xa195,	// (0x0004b56d) bg_status_flat_pane_g1

0xa19d,	// (0x0004b575) bg_status_flat_pane_g2

0xa1a5,	// (0x0004b57d) bg_status_flat_pane_g3

0xa1ad,	// (0x0004b585) bg_status_flat_pane_g4

0xa1b5,	// (0x0004b58d) bg_status_flat_pane_g5

0xa1bd,	// (0x0004b595) bg_status_flat_pane_g6

0xa1c5,	// (0x0004b59d) bg_status_flat_pane_g7

0x6427,	// (0x000477ff) tabs_3_active_pane_t1_ParamLimits

0x6427,	// (0x000477ff) tabs_3_passive_pane_t1_ParamLimits

0x6441,	// (0x00047819) tabs_4_active_pane_t1_ParamLimits

0x6441,	// (0x00047819) tabs_4_1_passive_pane_t1_ParamLimits

0x6810,	// (0x00047be8) tabs_2_active_pane_t1_ParamLimits

0x6810,	// (0x00047be8) tabs_2_passive_pane_t1_ParamLimits

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp4_ParamLimits

0x6830,	// (0x00047c08) tabs_2_long_active_pane_t1_ParamLimits

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp4_ParamLimits

0x7747,	// (0x00048b1f) list_single_midp_graphic_pane_t1_ParamLimits

0x6822,	// (0x00047bfa) bg_active_tab_pane_cp5_ParamLimits

0x684f,	// (0x00047c27) tabs_3_long_active_pane_t1_ParamLimits

0x6843,	// (0x00047c1b) bg_passive_tab_pane_cp5_ParamLimits

0x7747,	// (0x00048b1f) list_single_midp_graphic_pane_t1

0x9544,	// (0x0004a91c) bg_status_flat_pane_ParamLimits

0x960f,	// (0x0004a9e7) indicator_pane_cp2_ParamLimits

0x960f,	// (0x0004a9e7) indicator_pane_cp2

0x9752,	// (0x0004ab2a) navi_pane_srt_ParamLimits

0x9752,	// (0x0004ab2a) navi_pane_srt

0x9776,	// (0x0004ab4e) popup_clock_digital_analogue_window_cp1

0x099a,	// (0x00041d72) indicator_pane_t1

0x912e,	// (0x0004a506) copy_highlight_pane

0x912e,	// (0x0004a506) cursor_graphics_pane

0x912e,	// (0x0004a506) graphic_within_text_pane

0x912e,	// (0x0004a506) link_highlight_pane

0xa9b4,	// (0x0004bd8c) popup_preview_text_window_t5_ParamLimits

0xa9b4,	// (0x0004bd8c) popup_preview_text_window_t5

0x925f,	// (0x0004a637) cursor_digital_pane

0x925f,	// (0x0004a637) cursor_primary_pane

0x9270,	// (0x0004a648) cursor_primary_small_pane

0x9278,	// (0x0004a650) cursor_secondary_pane

0x9280,	// (0x0004a658) cursor_title_pane

0x925f,	// (0x0004a637) link_highlight_digital_pane

0x9267,	// (0x0004a63f) link_highlight_primary_pane

0x9270,	// (0x0004a648) link_highlight_primary_small_pane

0x9278,	// (0x0004a650) link_highlight_secondary_pane

0x9280,	// (0x0004a658) link_highlight_title_pane

0x925f,	// (0x0004a637) copy_highlight_digital_pane

0x925f,	// (0x0004a637) copy_highlight_primary_pane

0x9270,	// (0x0004a648) copy_highlight_primary_small_pane

0x9278,	// (0x0004a650) copy_highlight_secondary_pane

0x9280,	// (0x0004a658) copy_highlight_title_pane

0x9278,	// (0x0004a650) graphic_text_digital_pane

0xa233,	// (0x0004b60b) graphic_text_primary_pane

0xa23c,	// (0x0004b614) graphic_text_primary_small_pane

0x9270,	// (0x0004a648) graphic_text_secondary_pane

0x925f,	// (0x0004a637) graphic_text_title_pane

0x9288,	// (0x0004a660) cursor_primary_pane_g1

0xa225,	// (0x0004b5fd) cursor_text_primary_t1

0xa20d,	// (0x0004b5e5) cursor_primary_small_pane_g1

0xa217,	// (0x0004b5ef) cursor_text_primary_small_t1

0xa1f5,	// (0x0004b5cd) cursor_primary_small_pane_g1_copy1

0xa1ff,	// (0x0004b5d7) cursor_text_primary_small_t1_copy1

0xa1dd,	// (0x0004b5b5) cursor_text_title_t1

0xa1eb,	// (0x0004b5c3) cursor_title_pane_g1

0x9288,	// (0x0004a660) cursor_digital_pane_g1

0x9292,	// (0x0004a66a) cursor_text_digital_t1

0x92a0,	// (0x0004a678) link_highlight_primary_pane_g1

0xa186,	// (0x0004b55e) link_highlight_primary_pane_t1

0x92a0,	// (0x0004a678) link_highlight_primary_small_pane_g1

0x92a8,	// (0x0004a680) link_highlight_primary_small_pane_t1

0x92b7,	// (0x0004a68f) link_highlight_secondary_pane_g1

0x92bf,	// (0x0004a697) link_highlight_secondary_pane_t1

0xa0fa,	// (0x0004b4d2) link_highlight_title_pane_g1

0xa102,	// (0x0004b4da) link_highlight_title_pane_t1

0xa0e3,	// (0x0004b4bb) link_highlight_digital_pane_g1

0xa0eb,	// (0x0004b4c3) link_highlight_digital_pane_t1

0x9fab,	// (0x0004b383) copy_highlight_primary_pane_g1

0x9fc2,	// (0x0004b39a) copy_highlight_primary_pane_t1

0x9fab,	// (0x0004b383) copy_highlight_primary_small_pane_g1

0x9fb3,	// (0x0004b38b) copy_highlight_primary_small_pane_t1

0x92ce,	// (0x0004a6a6) copy_highlight_secondary_pane_g1

0x92d6,	// (0x0004a6ae) copy_highlight_secondary_pane_t1

0x9f94,	// (0x0004b36c) copy_highlight_title_pane_g1

0x9f9c,	// (0x0004b374) copy_highlight_title_pane_t1

0x9fab,	// (0x0004b383) copy_highlight_digital_pane_g1

0xb28d,	// (0x0004c665) copy_highlight_digital_pane_t1

0xb1e1,	// (0x0004c5b9) graphic_text_primary_pane_g1

0xb271,	// (0x0004c649) graphic_text_primary_pane_t1

0xb27f,	// (0x0004c657) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00050d86) graphic_text_primary_pane_t

0xb24d,	// (0x0004c625) graphic_text_primary_small_pane_g1

0xb255,	// (0x0004c62d) graphic_text_primary_small_pane_t1

0xb263,	// (0x0004c63b) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00050d81) graphic_text_primary_small_pane_t

0xb229,	// (0x0004c601) graphic_text_secondary_pane_g1

0xb231,	// (0x0004c609) graphic_text_secondary_pane_t1

0xb23f,	// (0x0004c617) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00050d7c) graphic_text_secondary_pane_t

0xb205,	// (0x0004c5dd) graphic_text_title_pane_g1

0xb20d,	// (0x0004c5e5) graphic_text_title_pane_t1

0xb21b,	// (0x0004c5f3) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00050d77) graphic_text_title_pane_t

0xb1e1,	// (0x0004c5b9) graphic_text_digital_pane_g1

0xb1e9,	// (0x0004c5c1) graphic_text_digital_pane_t1

0xb1f7,	// (0x0004c5cf) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00050d72) graphic_text_digital_pane_t

0x0956,	// (0x00041d2e) navi_icon_pane_srt_ParamLimits

0x0956,	// (0x00041d2e) navi_icon_pane_srt

0x08fa,	// (0x00041cd2) navi_midp_pane_srt

0x08fa,	// (0x00041cd2) navi_navi_pane_srt

0x0956,	// (0x00041d2e) navi_text_pane_srt_ParamLimits

0x0956,	// (0x00041d2e) navi_text_pane_srt

0xb1ac,	// (0x0004c584) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x0004c58c) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x0004c58c) navi_navi_pane_srt_g1

0xb1c6,	// (0x0004c59e) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x0004c59e) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00050d6d) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00050d6d) navi_navi_pane_srt_g

0xb1d8,	// (0x0004c5b0) navi_navi_tabs_pane_srt

0xb1ac,	// (0x0004c584) navi_navi_text_pane_srt

0xb1ac,	// (0x0004c584) navi_navi_volume_pane_srt

0xb19d,	// (0x0004c575) navi_navi_text_pane_srt_t1

0x7b56,	// (0x00048f2e) navi_navi_volume_pane_srt_g1

0x7b5e,	// (0x00048f36) volume_small_pane_srt_ParamLimits

0x7b5e,	// (0x00048f36) volume_small_pane_srt

0x6e86,	// (0x0004825e) volume_small_pane_srt_g1_ParamLimits

0x6e86,	// (0x0004825e) volume_small_pane_srt_g1

0x6e96,	// (0x0004826e) volume_small_pane_srt_g2_ParamLimits

0x6e96,	// (0x0004826e) volume_small_pane_srt_g2

0x6ea7,	// (0x0004827f) volume_small_pane_srt_g3_ParamLimits

0x6ea7,	// (0x0004827f) volume_small_pane_srt_g3

0x6eb8,	// (0x00048290) volume_small_pane_srt_g4_ParamLimits

0x6eb8,	// (0x00048290) volume_small_pane_srt_g4

0x6ec9,	// (0x000482a1) volume_small_pane_srt_g5_ParamLimits

0x6ec9,	// (0x000482a1) volume_small_pane_srt_g5

0x6eda,	// (0x000482b2) volume_small_pane_srt_g6_ParamLimits

0x6eda,	// (0x000482b2) volume_small_pane_srt_g6

0x6eeb,	// (0x000482c3) volume_small_pane_srt_g7_ParamLimits

0x6eeb,	// (0x000482c3) volume_small_pane_srt_g7

0x6efc,	// (0x000482d4) volume_small_pane_srt_g8_ParamLimits

0x6efc,	// (0x000482d4) volume_small_pane_srt_g8

0x6f0d,	// (0x000482e5) volume_small_pane_srt_g9_ParamLimits

0x6f0d,	// (0x000482e5) volume_small_pane_srt_g9

0x6f1e,	// (0x000482f6) volume_small_pane_srt_g10_ParamLimits

0x6f1e,	// (0x000482f6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00050b15) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00050b15) volume_small_pane_srt_g

0x0c0c,	// (0x00041fe4) query_popup_data_pane_cp2

0xb183,	// (0x0004c55b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x0004c55b) navi_navi_icon_text_pane_srt_t1

0xa233,	// (0x0004b60b) navi_tabs_2_long_pane_srt

0xa233,	// (0x0004b60b) navi_tabs_2_pane_srt

0xa233,	// (0x0004b60b) navi_tabs_3_long_pane_srt

0xa233,	// (0x0004b60b) navi_tabs_3_pane_srt

0xa233,	// (0x0004b60b) navi_tabs_4_pane_srt

0x7b36,	// (0x00048f0e) tabs_2_active_pane_srt_ParamLimits

0x7b36,	// (0x00048f0e) tabs_2_active_pane_srt

0x7b46,	// (0x00048f1e) tabs_2_passive_pane_srt_ParamLimits

0x7b46,	// (0x00048f1e) tabs_2_passive_pane_srt

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x0004c527) bg_passive_tab_pane_g1_cp1_srt

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x0004c530) bg_passive_tab_pane_g3_cp1_srt

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp1_srt_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp1_srt

0xb161,	// (0x0004c539) tabs_2_active_pane_srt_g1

0xb169,	// (0x0004c541) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x0004c541) tabs_2_active_pane_srt_t1

0xb14f,	// (0x0004c527) bg_active_tab_pane_g1_cp1_srt

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x0004c530) bg_active_tab_pane_g3_cp1_srt

0x7b03,	// (0x00048edb) tabs_3_active_pane_srt_ParamLimits

0x7b03,	// (0x00048edb) tabs_3_active_pane_srt

0x7b14,	// (0x00048eec) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b14,	// (0x00048eec) tabs_3_passive_pane_cp_srt

0x7b25,	// (0x00048efd) tabs_3_passive_pane_srt_ParamLimits

0x7b25,	// (0x00048efd) tabs_3_passive_pane_srt

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9455,	// (0x0004a82d) bg_passive_tab_pane_cp2_srt

0x92e5,	// (0x0004a6bd) bg_passive_tab_pane_g1_cp2_srt

0x6cf9,	// (0x000480d1) bg_passive_tab_pane_g2_cp2_srt

0x92ee,	// (0x0004a6c6) bg_passive_tab_pane_g3_cp2_srt

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp2_srt_ParamLimits

0x0956,	// (0x00041d2e) bg_active_tab_pane_cp2_srt

0xb135,	// (0x0004c50d) tabs_3_active_pane_srt_g1

0xb13d,	// (0x0004c515) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x0004c515) tabs_3_active_pane_srt_t1

0x92e5,	// (0x0004a6bd) bg_active_tab_pane_g1_cp2_srt

0x6cf9,	// (0x000480d1) bg_active_tab_pane_g2_cp2_srt

0x92ee,	// (0x0004a6c6) bg_active_tab_pane_g3_cp2_srt

0x7abb,	// (0x00048e93) tabs_4_active_pane_srt_ParamLimits

0x7abb,	// (0x00048e93) tabs_4_active_pane_srt

0x7acd,	// (0x00048ea5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7acd,	// (0x00048ea5) tabs_4_passive_pane_cp2_srt

0x7070,	// (0x00048448) aid_size_cell_toolbar

0x6843,	// (0x00047c1b) main_idle_act_pane_ParamLimits

0x724d,	// (0x00048625) popup_large_graphic_colour_window_ParamLimits

0x75f4,	// (0x000489cc) popup_toolbar_window_ParamLimits

0x75f4,	// (0x000489cc) popup_toolbar_window

0xaf53,	// (0x0004c32b) list_single_graphic_2heading_pane_ParamLimits

0xaf53,	// (0x0004c32b) list_single_graphic_2heading_pane

0x12ac,	// (0x00042684) aid_size_cell_apps_grid_lsc_pane

0x12be,	// (0x00042696) aid_size_cell_apps_grid_prt_pane

0x9455,	// (0x0004a82d) bg_wml_button_pane_cp1_ParamLimits

0x9455,	// (0x0004a82d) bg_wml_button_pane_cp1

0x9c0f,	// (0x0004afe7) form_midp_field_text_pane_t1_ParamLimits

0x9a01,	// (0x0004add9) input_focus_pane_cp050_ParamLimits

0x9c3a,	// (0x0004b012) list_midp_form_text_pane_ParamLimits

0x9bec,	// (0x0004afc4) input_focus_pane_cp051_ParamLimits

0x9c00,	// (0x0004afd8) list_midp_choice_pane_ParamLimits

0x9aba,	// (0x0004ae92) list_single_2graphic_pane_cp3_ParamLimits

0x9aba,	// (0x0004ae92) list_single_2graphic_pane_cp3

0x9ad0,	// (0x0004aea8) list_single_midp_graphic_pane_ParamLimits

0x9ad0,	// (0x0004aea8) list_single_midp_graphic_pane

0x57f5,	// (0x00046bcd) list_single_graphic_2heading_pane_g1_ParamLimits

0x57f5,	// (0x00046bcd) list_single_graphic_2heading_pane_g1

0x5801,	// (0x00046bd9) list_single_graphic_2heading_pane_g4_ParamLimits

0x5801,	// (0x00046bd9) list_single_graphic_2heading_pane_g4

0x580d,	// (0x00046be5) list_single_graphic_2heading_pane_g5_ParamLimits

0x580d,	// (0x00046be5) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00050b68) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00050b68) list_single_graphic_2heading_pane_g

0x5819,	// (0x00046bf1) list_single_graphic_2heading_pane_t1_ParamLimits

0x5819,	// (0x00046bf1) list_single_graphic_2heading_pane_t1

0x582d,	// (0x00046c05) list_single_graphic_2heading_pane_t2_ParamLimits

0x582d,	// (0x00046c05) list_single_graphic_2heading_pane_t2

0x5849,	// (0x00046c21) list_single_graphic_2heading_pane_t3_ParamLimits

0x5849,	// (0x00046c21) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050b6f) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050b6f) list_single_graphic_2heading_pane_t

0x98cb,	// (0x0004aca3) bg_popup_sub_pane_cp2

0x98f5,	// (0x0004accd) grid_toobar_pane

0x76b3,	// (0x00048a8b) cell_toolbar_pane_ParamLimits

0x76b3,	// (0x00048a8b) cell_toolbar_pane

0x9931,	// (0x0004ad09) cell_toolbar_pane_g1_ParamLimits

0x9931,	// (0x0004ad09) cell_toolbar_pane_g1

0x9945,	// (0x0004ad1d) cell_toolbar_pane_g2_ParamLimits

0x9945,	// (0x0004ad1d) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00050b7d) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00050b7d) cell_toolbar_pane_g

0x9967,	// (0x0004ad3f) grid_highlight_pane_cp2_ParamLimits

0x9967,	// (0x0004ad3f) grid_highlight_pane_cp2

0x9981,	// (0x0004ad59) toolbar_button_pane

0x998d,	// (0x0004ad65) toolbar_button_pane_g1

0x9995,	// (0x0004ad6d) toolbar_button_pane_g2

0x999d,	// (0x0004ad75) toolbar_button_pane_g3

0x99a5,	// (0x0004ad7d) toolbar_button_pane_g4

0x99ad,	// (0x0004ad85) toolbar_button_pane_g5

0x99b5,	// (0x0004ad8d) toolbar_button_pane_g6

0x99bd,	// (0x0004ad95) toolbar_button_pane_g7

0x99c5,	// (0x0004ad9d) toolbar_button_pane_g8

0x99cd,	// (0x0004ada5) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050b82) toolbar_button_pane_g

0x7703,	// (0x00048adb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7703,	// (0x00048adb) list_single_2graphic_pane_g1_cp3

0x770f,	// (0x00048ae7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x770f,	// (0x00048ae7) list_single_2graphic_pane_g2_cp3

0x8f4d,	// (0x0004a325) list_single_2graphic_pane_g3_cp3

0x7720,	// (0x00048af8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7720,	// (0x00048af8) list_single_2graphic_pane_g4_cp3

0x772c,	// (0x00048b04) list_single_2graphic_pane_t1_cp3_ParamLimits

0x772c,	// (0x00048b04) list_single_2graphic_pane_t1_cp3

0x8db7,	// (0x0004a18f) list_single_midp_graphic_pane_g2_ParamLimits

0x8db7,	// (0x0004a18f) list_single_midp_graphic_pane_g2

0x57dd,	// (0x00046bb5) aid_zoom_text_primary

0x57e5,	// (0x00046bbd) aid_zoom_text_secondary

0x939f,	// (0x0004a777) status_small_pane_g7_ParamLimits

0x939f,	// (0x0004a777) status_small_pane_g7

0x93c2,	// (0x0004a79a) status_small_pane_t1_ParamLimits

0x6392,	// (0x0004776a) title_pane_g2

0x0003,

0xf529,	// (0x00050901) title_pane_g

0x65fb,	// (0x000479d3) aid_size_cell_colour_1_pane_ParamLimits

0x65fb,	// (0x000479d3) aid_size_cell_colour_1_pane

0x660f,	// (0x000479e7) aid_size_cell_colour_2_pane_ParamLimits

0x660f,	// (0x000479e7) aid_size_cell_colour_2_pane

0x6623,	// (0x000479fb) aid_size_cell_colour_3_pane_ParamLimits

0x6623,	// (0x000479fb) aid_size_cell_colour_3_pane

0x6637,	// (0x00047a0f) aid_size_cell_colour_4_pane_ParamLimits

0x6637,	// (0x00047a0f) aid_size_cell_colour_4_pane

0x689d,	// (0x00047c75) title_pane_stacon_g1_ParamLimits

0x689d,	// (0x00047c75) title_pane_stacon_g1

0xa019,	// (0x0004b3f1) popup_note_wait_window_g3_ParamLimits

0xa019,	// (0x0004b3f1) popup_note_wait_window_g3

0xa090,	// (0x0004b468) popup_note_wait_window_t5_ParamLimits

0xa090,	// (0x0004b468) popup_note_wait_window_t5

0x08fa,	// (0x00041cd2) main_feb_china_hwr_fs_writing_pane

0x7112,	// (0x000484ea) popup_feb_china_hwr_fs_window_ParamLimits

0x7112,	// (0x000484ea) popup_feb_china_hwr_fs_window

0x7775,	// (0x00048b4d) aid_size_cell_hwr_fs_ParamLimits

0x7775,	// (0x00048b4d) aid_size_cell_hwr_fs

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp3_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp3

0x778a,	// (0x00048b62) grid_hwr_fs_pane_ParamLimits

0x778a,	// (0x00048b62) grid_hwr_fs_pane

0x77a2,	// (0x00048b7a) linegrid_hwr_fs_pane_ParamLimits

0x77a2,	// (0x00048b7a) linegrid_hwr_fs_pane

0x77b2,	// (0x00048b8a) cell_hwr_fs_pane_ParamLimits

0x77b2,	// (0x00048b8a) cell_hwr_fs_pane

0x9a0d,	// (0x0004ade5) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a0d,	// (0x0004ade5) linegrid_hwr_fs_pane_g1

0x9a19,	// (0x0004adf1) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a19,	// (0x0004adf1) linegrid_hwr_fs_pane_g2

0x9a2b,	// (0x0004ae03) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a2b,	// (0x0004ae03) linegrid_hwr_fs_pane_g3

0x77d6,	// (0x00048bae) linegrid_hwr_fs_pane_g4_ParamLimits

0x77d6,	// (0x00048bae) linegrid_hwr_fs_pane_g4

0x77f4,	// (0x00048bcc) linegrid_hwr_fs_pane_g5_ParamLimits

0x77f4,	// (0x00048bcc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00050bad) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00050bad) linegrid_hwr_fs_pane_g

0x9a37,	// (0x0004ae0f) cell_hwr_fs_pane_g1_ParamLimits

0x9a37,	// (0x0004ae0f) cell_hwr_fs_pane_g1

0x9804,	// (0x0004abdc) cell_hwr_fs_pane_g2_ParamLimits

0x9804,	// (0x0004abdc) cell_hwr_fs_pane_g2

0x9a4d,	// (0x0004ae25) cell_hwr_fs_pane_g3_ParamLimits

0x9a4d,	// (0x0004ae25) cell_hwr_fs_pane_g3

0x9a5a,	// (0x0004ae32) cell_hwr_fs_pane_g4_ParamLimits

0x9a5a,	// (0x0004ae32) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00050bb8) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00050bb8) cell_hwr_fs_pane_g

0x780a,	// (0x00048be2) cell_hwr_fs_pane_t1

0x08fa,	// (0x00041cd2) grid_highlight_pane_cp6

0x08fa,	// (0x00041cd2) main_idle_act2_pane

0x10bb,	// (0x00042493) aid_inside_area_popup_secondary

0xa6c9,	// (0x0004baa1) aid_inside_area_window_primary_ParamLimits

0xa6c9,	// (0x0004baa1) aid_inside_area_window_primary

0xb29c,	// (0x0004c674) ai2_news_ticker_pane

0xb2a4,	// (0x0004c67c) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x0004c67c) aid_size_cell_ai1_link

0xb2be,	// (0x0004c696) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x0004c696) popup_ai2_data_window

0xb2dc,	// (0x0004c6b4) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x0004c6b4) popup_ai2_link_window

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp4_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp4

0xb2f2,	// (0x0004c6ca) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x0004c6ca) grid_ai2_link_pane

0xb309,	// (0x0004c6e1) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x0004c6e1) popup_ai2_link_window_g1

0xb315,	// (0x0004c6ed) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x0004c6ed) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00050d8b) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00050d8b) popup_ai2_link_window_g

0xb326,	// (0x0004c6fe) ai2_mp_button_pane

0xb32e,	// (0x0004c706) ai2_mp_volume_pane

0x9bec,	// (0x0004afc4) bg_popup_sub_pane_cp5_ParamLimits

0x9bec,	// (0x0004afc4) bg_popup_sub_pane_cp5

0xb336,	// (0x0004c70e) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x0004c70e) heading_ai2_gene_pane

0xb342,	// (0x0004c71a) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x0004c71a) list_ai2_gene_pane

0xb38a,	// (0x0004c762) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x0004c762) cell_ai2_link_pane

0xb3a0,	// (0x0004c778) cell_ai2_link_pane_g1

0x08fa,	// (0x00041cd2) grid_highlight_pane_cp7

0x7b73,	// (0x00048f4b) ai2_mp_volume_pane_g1

0xb473,	// (0x0004c84b) ai2_mp_volume_pane_g2

0xb3e8,	// (0x0004c7c0) list_ai2_gene_pane_t1

0xb47b,	// (0x0004c853) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00050da4) ai2_mp_volume_pane_g

0x7b7b,	// (0x00048f53) volume_small_pane_cp3

0xb483,	// (0x0004c85b) aid_size_cell_ai2_button

0xb48b,	// (0x0004c863) grid_ai2_button_pane

0xb494,	// (0x0004c86c) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x0004c86c) cell_ai2_button_pane

0x08f0,	// (0x00041cc8) cell_ai2_button_pane_g1

0x08fa,	// (0x00041cd2) grid_highlight_pane_cp8

0xb433,	// (0x0004c80b) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x0004c80b) ai2_gene_pane_t1

0x7066,	// (0x0004843e) aid_height_parent_landscape

0xad59,	// (0x0004c131) aid_height_set_list

0xad6a,	// (0x0004c142) aid_size_parent

0xb0bb,	// (0x0004c493) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x0004c72a) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x0004c72a) popup_ai2_data_window_g1

0xb35e,	// (0x0004c736) ai2_news_ticker_pane_g1

0xb366,	// (0x0004c73e) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00050d90) ai2_news_ticker_pane_g

0xb36e,	// (0x0004c746) ai2_news_ticker_pane_t1

0xb37c,	// (0x0004c754) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00050d95) ai2_news_ticker_pane_t

0xb3a9,	// (0x0004c781) heading_ai2_gene_pane_g1

0xb3b1,	// (0x0004c789) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x0004c789) heading_ai2_gene_pane_t1

0xb3c6,	// (0x0004c79e) list_highlight_pane_cp6

0xb3ce,	// (0x0004c7a6) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x0004c7a6) ai2_gene_pane

0xb3f6,	// (0x0004c7ce) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00050d9a) list_ai2_gene_pane_t

0xb404,	// (0x0004c7dc) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x0004c7dc) list_highlight_pane_cp8

0xb415,	// (0x0004c7ed) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x0004c7ed) ai2_gene_pane_g1

0xb427,	// (0x0004c7ff) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x0004c7ff) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00050d9f) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00050d9f) ai2_gene_pane_g

0x0f2e,	// (0x00042306) scroll_pane_cp12

0x7025,	// (0x000483fd) control_pane_t3_ParamLimits

0x7025,	// (0x000483fd) control_pane_t3

0x93b3,	// (0x0004a78b) status_small_pane_g8_ParamLimits

0x93b3,	// (0x0004a78b) status_small_pane_g8

0x7210,	// (0x000485e8) popup_find_window_ParamLimits

0x743d,	// (0x00048815) popup_note_image_window_ParamLimits

0x5861,	// (0x00046c39) list_double2_graphic_pane_vc_g1_ParamLimits

0x5861,	// (0x00046c39) list_double2_graphic_pane_vc_g1

0x76e3,	// (0x00048abb) list_double2_graphic_pane_vc_g2_ParamLimits

0x76e3,	// (0x00048abb) list_double2_graphic_pane_vc_g2

0x76ef,	// (0x00048ac7) list_double2_graphic_pane_vc_g3_ParamLimits

0x76ef,	// (0x00048ac7) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00050b76) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00050b76) list_double2_graphic_pane_vc_g

0x586d,	// (0x00046c45) list_double2_graphic_pane_vc_t1_ParamLimits

0x586d,	// (0x00046c45) list_double2_graphic_pane_vc_t1

0x76e3,	// (0x00048abb) list_single_heading_pane_vc_g1_ParamLimits

0x76e3,	// (0x00048abb) list_single_heading_pane_vc_g1

0x76ef,	// (0x00048ac7) list_single_heading_pane_vc_g2_ParamLimits

0x76ef,	// (0x00048ac7) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b97) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b97) list_single_heading_pane_vc_g

0x5883,	// (0x00046c5b) list_single_heading_pane_vc_t1_ParamLimits

0x5883,	// (0x00046c5b) list_single_heading_pane_vc_t1

0x5899,	// (0x00046c71) list_single_heading_pane_vc_t2_ParamLimits

0x5899,	// (0x00046c71) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00050b9c) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00050b9c) list_single_heading_pane_vc_t

0x775d,	// (0x00048b35) list_setting_number_pane_vc_g1_ParamLimits

0x775d,	// (0x00048b35) list_setting_number_pane_vc_g1

0x7769,	// (0x00048b41) list_setting_number_pane_vc_g2_ParamLimits

0x7769,	// (0x00048b41) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050ba1) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050ba1) list_setting_number_pane_vc_g

0x58ab,	// (0x00046c83) list_setting_number_pane_vc_t1_ParamLimits

0x58ab,	// (0x00046c83) list_setting_number_pane_vc_t1

0x58bf,	// (0x00046c97) list_setting_number_pane_vc_t2_ParamLimits

0x58bf,	// (0x00046c97) list_setting_number_pane_vc_t2

0x58db,	// (0x00046cb3) list_setting_number_pane_vc_t3_ParamLimits

0x58db,	// (0x00046cb3) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00050ba6) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00050ba6) list_setting_number_pane_vc_t

0x5909,	// (0x00046ce1) set_value_pane_vc_ParamLimits

0x5909,	// (0x00046ce1) set_value_pane_vc

0xaf53,	// (0x0004c32b) list_double2_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double2_graphic_pane_vc

0xaf53,	// (0x0004c32b) list_double2_large_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double2_large_graphic_pane_vc

0xaf53,	// (0x0004c32b) list_double2_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double2_pane_vc

0xaf53,	// (0x0004c32b) list_double_graphic_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_graphic_heading_pane_vc

0xaf53,	// (0x0004c32b) list_double_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_graphic_pane_vc

0xaf53,	// (0x0004c32b) list_double_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_heading_pane_vc

0xaf67,	// (0x0004c33f) list_double_large_graphic_pane_vc_ParamLimits

0xaf67,	// (0x0004c33f) list_double_large_graphic_pane_vc

0xaf53,	// (0x0004c32b) list_double_number_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_number_pane_vc

0xaf53,	// (0x0004c32b) list_double_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_pane_vc

0xaf53,	// (0x0004c32b) list_double_time_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_double_time_pane_vc

0xaf53,	// (0x0004c32b) list_setting_number_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_setting_number_pane_vc

0xaf53,	// (0x0004c32b) list_setting_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_setting_pane_vc

0xaf53,	// (0x0004c32b) list_single_graphic_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_single_graphic_heading_pane_vc

0xaf53,	// (0x0004c32b) list_single_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c32b) list_single_heading_pane_vc

0x7a60,	// (0x00048e38) list_single_number_heading_pane_vc_ParamLimits

0x7a60,	// (0x00048e38) list_single_number_heading_pane_vc

0x5861,	// (0x00046c39) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5861,	// (0x00046c39) list_double_graphic_heading_pane_vc_g1

0x909f,	// (0x0004a477) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x909f,	// (0x0004a477) list_double_graphic_heading_pane_vc_g2

0x7b84,	// (0x00048f5c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7b84,	// (0x00048f5c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00050dab) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00050dab) list_double_graphic_heading_pane_vc_g

0x59e5,	// (0x00046dbd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x59e5,	// (0x00046dbd) list_double_graphic_heading_pane_vc_t1

0x59fb,	// (0x00046dd3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x59fb,	// (0x00046dd3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00050db2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00050db2) list_double_graphic_heading_pane_vc_t

0x775d,	// (0x00048b35) list_setting_pane_vc_g1_ParamLimits

0x775d,	// (0x00048b35) list_setting_pane_vc_g1

0x7769,	// (0x00048b41) list_setting_pane_vc_g2_ParamLimits

0x7769,	// (0x00048b41) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050ba1) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050ba1) list_setting_pane_vc_g

0x5a19,	// (0x00046df1) list_setting_pane_vc_t1_ParamLimits

0x5a19,	// (0x00046df1) list_setting_pane_vc_t1

0x5a35,	// (0x00046e0d) list_setting_pane_vc_t2_ParamLimits

0x5a35,	// (0x00046e0d) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x00050de0) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x00050de0) list_setting_pane_vc_t

0x5909,	// (0x00046ce1) set_value_pane_cp_vc_ParamLimits

0x5909,	// (0x00046ce1) set_value_pane_cp_vc

0x76e3,	// (0x00048abb) list_single_number_heading_pane_vc_g1_ParamLimits

0x76e3,	// (0x00048abb) list_single_number_heading_pane_vc_g1

0x76ef,	// (0x00048ac7) list_single_number_heading_pane_vc_g2_ParamLimits

0x76ef,	// (0x00048ac7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b97) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b97) list_single_number_heading_pane_vc_g

0x5a51,	// (0x00046e29) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a51,	// (0x00046e29) list_single_number_heading_pane_vc_t1

0x5a67,	// (0x00046e3f) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a67,	// (0x00046e3f) list_single_number_heading_pane_vc_t2

0x5a7d,	// (0x00046e55) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a7d,	// (0x00046e55) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x00050de5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00050de5) list_single_number_heading_pane_vc_t

0x5861,	// (0x00046c39) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5861,	// (0x00046c39) list_single_graphic_heading_pane_vc_g1

0x76e3,	// (0x00048abb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x76e3,	// (0x00048abb) list_single_graphic_heading_pane_vc_g4

0x76ef,	// (0x00048ac7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x76ef,	// (0x00048ac7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00050b76) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050b76) list_single_graphic_heading_pane_vc_g

0x5a51,	// (0x00046e29) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a51,	// (0x00046e29) list_single_graphic_heading_pane_vc_t1

0x5a8f,	// (0x00046e67) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a8f,	// (0x00046e67) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00050dec) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00050dec) list_single_graphic_heading_pane_vc_t

0x76e3,	// (0x00048abb) list_double2_pane_vc_g1_ParamLimits

0x76e3,	// (0x00048abb) list_double2_pane_vc_g1

0x76ef,	// (0x00048ac7) list_double2_pane_vc_g2_ParamLimits

0x76ef,	// (0x00048ac7) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b97) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b97) list_double2_pane_vc_g

0x5aa1,	// (0x00046e79) list_double2_pane_vc_t1_ParamLimits

0x5aa1,	// (0x00046e79) list_double2_pane_vc_t1

0x7b90,	// (0x00048f68) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7b90,	// (0x00048f68) list_double2_large_graphic_pane_vc_g1

0x76e3,	// (0x00048abb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x76e3,	// (0x00048abb) list_double2_large_graphic_pane_vc_g2

0x76ef,	// (0x00048ac7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x76ef,	// (0x00048ac7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00050df1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00050df1) list_double2_large_graphic_pane_vc_g

0x5ab7,	// (0x00046e8f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ab7,	// (0x00046e8f) list_double2_large_graphic_pane_vc_t1

0x7b9c,	// (0x00048f74) list_double_time_pane_vc_g1_ParamLimits

0x7b9c,	// (0x00048f74) list_double_time_pane_vc_g1

0x7ba8,	// (0x00048f80) list_double_time_pane_vc_g2_ParamLimits

0x7ba8,	// (0x00048f80) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00050df8) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00050df8) list_double_time_pane_vc_g

0x5acd,	// (0x00046ea5) list_double_time_pane_vc_t1_ParamLimits

0x5acd,	// (0x00046ea5) list_double_time_pane_vc_t1

0x5af7,	// (0x00046ecf) list_double_time_pane_vc_t2_ParamLimits

0x5af7,	// (0x00046ecf) list_double_time_pane_vc_t2

0x5b40,	// (0x00046f18) list_double_time_pane_vc_t3_ParamLimits

0x5b40,	// (0x00046f18) list_double_time_pane_vc_t3

0x5b52,	// (0x00046f2a) list_double_time_pane_vc_t4_ParamLimits

0x5b52,	// (0x00046f2a) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00050dfd) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00050dfd) list_double_time_pane_vc_t

0x76e3,	// (0x00048abb) list_double_pane_vc_g1_ParamLimits

0x76e3,	// (0x00048abb) list_double_pane_vc_g1

0x76ef,	// (0x00048ac7) list_double_pane_vc_g2_ParamLimits

0x76ef,	// (0x00048ac7) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b97) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b97) list_double_pane_vc_g

0x5b66,	// (0x00046f3e) list_double_pane_vc_t1_ParamLimits

0x5b66,	// (0x00046f3e) list_double_pane_vc_t1

0x5b7a,	// (0x00046f52) list_double_pane_vc_t2_ParamLimits

0x5b7a,	// (0x00046f52) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00050e06) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00050e06) list_double_pane_vc_t

0x76e3,	// (0x00048abb) list_double_number_pane_vc_g1_ParamLimits

0x76e3,	// (0x00048abb) list_double_number_pane_vc_g1

0x76ef,	// (0x00048ac7) list_double_number_pane_vc_g2_ParamLimits

0x76ef,	// (0x00048ac7) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b97) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b97) list_double_number_pane_vc_g

0x5b90,	// (0x00046f68) list_double_number_pane_vc_t1_ParamLimits

0x5b90,	// (0x00046f68) list_double_number_pane_vc_t1

0x5ba2,	// (0x00046f7a) list_double_number_pane_vc_t2_ParamLimits

0x5ba2,	// (0x00046f7a) list_double_number_pane_vc_t2

0x5b7a,	// (0x00046f52) list_double_number_pane_vc_t3_ParamLimits

0x5b7a,	// (0x00046f52) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00050e0b) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00050e0b) list_double_number_pane_vc_t

0x7bb4,	// (0x00048f8c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7bb4,	// (0x00048f8c) list_double_large_graphic_pane_vc_g1

0x7bd6,	// (0x00048fae) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7bd6,	// (0x00048fae) list_double_large_graphic_pane_vc_g2

0x7bea,	// (0x00048fc2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7bea,	// (0x00048fc2) list_double_large_graphic_pane_vc_g3

0x5bb6,	// (0x00046f8e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bb6,	// (0x00046f8e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00050e12) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050e12) list_double_large_graphic_pane_vc_g

0x5bc2,	// (0x00046f9a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bc2,	// (0x00046f9a) list_double_large_graphic_pane_vc_t1

0x5bde,	// (0x00046fb6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5bde,	// (0x00046fb6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00050e1b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00050e1b) list_double_large_graphic_pane_vc_t

0x909f,	// (0x0004a477) list_double_heading_pane_vc_g1_ParamLimits

0x909f,	// (0x0004a477) list_double_heading_pane_vc_g1

0x7b84,	// (0x00048f5c) list_double_heading_pane_vc_g2_ParamLimits

0x7b84,	// (0x00048f5c) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x00050e20) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x00050e20) list_double_heading_pane_vc_g

0x5bfe,	// (0x00046fd6) list_double_heading_pane_vc_t1_ParamLimits

0x5bfe,	// (0x00046fd6) list_double_heading_pane_vc_t1

0x5c10,	// (0x00046fe8) list_double_heading_pane_vc_t2_ParamLimits

0x5c10,	// (0x00046fe8) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x00050e25) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x00050e25) list_double_heading_pane_vc_t

0x5c28,	// (0x00047000) list_double_graphic_pane_vc_g1_ParamLimits

0x5c28,	// (0x00047000) list_double_graphic_pane_vc_g1

0x7bf9,	// (0x00048fd1) list_double_graphic_pane_vc_g2_ParamLimits

0x7bf9,	// (0x00048fd1) list_double_graphic_pane_vc_g2

0x76e3,	// (0x00048abb) list_double_graphic_pane_vc_g3_ParamLimits

0x76e3,	// (0x00048abb) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x00050e2a) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x00050e2a) list_double_graphic_pane_vc_g

0x5c34,	// (0x0004700c) list_double_graphic_pane_vc_t1_ParamLimits

0x5c34,	// (0x0004700c) list_double_graphic_pane_vc_t1

0x5c5e,	// (0x00047036) list_double_graphic_pane_vc_t2_ParamLimits

0x5c5e,	// (0x00047036) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x00050e33) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x00050e33) list_double_graphic_pane_vc_t

0x5f9e,	// (0x00047376) aid_size_cell_fastswap

0x5fa6,	// (0x0004737e) aid_size_cell_touch_ParamLimits

0x5fa6,	// (0x0004737e) aid_size_cell_touch

0x6207,	// (0x000475df) popup_fast_swap_wide_window_ParamLimits

0x6207,	// (0x000475df) popup_fast_swap_wide_window

0x6325,	// (0x000476fd) touch_pane_ParamLimits

0x6325,	// (0x000476fd) touch_pane

0x0f84,	// (0x0004235c) button_value_adjust_pane_cp2

0x551d,	// (0x000468f5) button_value_adjust_pane_cp4

0x5545,	// (0x0004691d) form_field_data_pane_cp2

0x556a,	// (0x00046942) form_field_data_wide_pane_cp2

0x4239,	// (0x00045611) bg_scroll_pane_ParamLimits

0x6abf,	// (0x00047e97) scroll_handle_pane_ParamLimits

0x6ad3,	// (0x00047eab) scroll_sc2_down_pane_ParamLimits

0x6ad3,	// (0x00047eab) scroll_sc2_down_pane

0x4293,	// (0x0004566b) scroll_sc2_up_pane_ParamLimits

0x4293,	// (0x0004566b) scroll_sc2_up_pane

0xbbbc,	// (0x0004cf94) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0004cf94) grid_wheel_folder_pane_g1

0x6e1e,	// (0x000481f6) clock_nsta_pane_cp2_ParamLimits

0x6e1e,	// (0x000481f6) clock_nsta_pane_cp2

0x9136,	// (0x0004a50e) listscroll_midp_pane_ParamLimits

0x9142,	// (0x0004a51a) midp_canvas_pane

0x942d,	// (0x0004a805) nsta_clock_indic_pane

0x9461,	// (0x0004a839) listscroll_form_pane_vc

0x9469,	// (0x0004a841) listscroll_set_pane_vc_ParamLimits

0x9469,	// (0x0004a841) listscroll_set_pane_vc

0x9560,	// (0x0004a938) clock_nsta_pane

0x95dd,	// (0x0004a9b5) indicator_nsta_pane

0x98cb,	// (0x0004aca3) bg_popup_sub_pane_cp2_ParamLimits

0x98df,	// (0x0004acb7) find_pane_cp2_ParamLimits

0x98df,	// (0x0004acb7) find_pane_cp2

0x98f5,	// (0x0004accd) grid_toobar_pane_ParamLimits

0x99d5,	// (0x0004adad) list_form_gen_pane_vc_ParamLimits

0x99d5,	// (0x0004adad) list_form_gen_pane_vc

0x99eb,	// (0x0004adc3) scroll_pane_cp8_vc_ParamLimits

0x99eb,	// (0x0004adc3) scroll_pane_cp8_vc

0x9a67,	// (0x0004ae3f) data_form_wide_pane_vc_ParamLimits

0x9a67,	// (0x0004ae3f) data_form_wide_pane_vc

0x9a73,	// (0x0004ae4b) form_field_data_wide_pane_vc_g1

0x9a7b,	// (0x0004ae53) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a7b,	// (0x0004ae53) form_field_data_wide_pane_vc_t1

0x0f98,	// (0x00042370) input_focus_pane_cp6_vc_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_cp6_vc

0x9d77,	// (0x0004b14f) list_midp_pane_ParamLimits

0x9d83,	// (0x0004b15b) scroll_pane_cp16_ParamLimits

0x9d83,	// (0x0004b15b) scroll_pane_cp16

0x9ded,	// (0x0004b1c5) button_value_adjust_pane_ParamLimits

0x9ded,	// (0x0004b1c5) button_value_adjust_pane

0xad7c,	// (0x0004c154) button_value_adjust_pane_cp6_ParamLimits

0xad7c,	// (0x0004c154) button_value_adjust_pane_cp6

0xaec4,	// (0x0004c29c) settings_code_pane_cp_ParamLimits

0xaec4,	// (0x0004c29c) settings_code_pane_cp

0x08f0,	// (0x00041cc8) cell_touch_pane_g1

0x08f0,	// (0x00041cc8) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00050abb) cell_touch_pane_g

0xb4a6,	// (0x0004c87e) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x0004c87e) cell_touch_pane_cp

0xb4b6,	// (0x0004c88e) cell_touch_pane_ParamLimits

0xb4b6,	// (0x0004c88e) cell_touch_pane

0x08f0,	// (0x00041cc8) scroll_sc2_down_pane_g1

0x08f0,	// (0x00041cc8) scroll_sc2_up_pane_g1

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x0004c89f) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x0004c89f) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x0004c8ab) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x0004c8ab) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00050db7) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00050db7) list_set_graphic_pane_vc_g

0xb4df,	// (0x0004c8b7) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x0004c8b7) text_primary_small_cp13_vc

0xb4f7,	// (0x0004c8cf) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x0004c8cf) list_set_graphic_pane_vc

0x08fa,	// (0x00041cd2) input_focus_pane_cp2_vc

0x08f0,	// (0x00041cc8) setting_code_pane_vc_g1

0x096d,	// (0x00041d45) setting_code_pane_vc_t1

0xb50a,	// (0x0004c8e2) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x0004c8e2) set_text_pane_vc_t1

0x08fa,	// (0x00041cd2) input_focus_pane_cp1_vc

0xb52b,	// (0x0004c903) list_set_text_pane_vc

0x08f0,	// (0x00041cc8) setting_text_pane_vc_g1

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp2_vc

0x0964,	// (0x00041d3c) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x0004c90d) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x0004c91f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00050dbc) setting_slider_graphic_pane_vc_t

0xb559,	// (0x0004c931) slider_set_pane_cp_vc

0xb563,	// (0x0004c93b) slider_set_pane_vc_g1

0xb56c,	// (0x0004c944) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00050dc1) slider_set_pane_vc_g

0x0ff0,	// (0x000423c8) set_opt_bg_pane_g1_copy1

0x0ff8,	// (0x000423d0) set_opt_bg_pane_g2_copy1

0xb598,	// (0x0004c970) set_opt_bg_pane_g3_copy1

0x1008,	// (0x000423e0) set_opt_bg_pane_g4_copy1

0x1010,	// (0x000423e8) set_opt_bg_pane_g5_copy1

0x1018,	// (0x000423f0) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x0004c97a) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x0004c984) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x0004c98e) set_opt_bg_pane_g9_copy1

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x0004c998) setting_slider_pane_vc_t1

0xb5cf,	// (0x0004c9a7) setting_slider_pane_vc_t2

0xb5e1,	// (0x0004c9b9) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00050dd0) setting_slider_pane_vc_t

0xb5f3,	// (0x0004c9cb) slider_set_pane_vc

0x7818,	// (0x00048bf0) volume_set_pane_vc_g1

0x7821,	// (0x00048bf9) volume_set_pane_vc_g2

0x782a,	// (0x00048c02) volume_set_pane_vc_g3

0x7833,	// (0x00048c0b) volume_set_pane_vc_g4

0x783c,	// (0x00048c14) volume_set_pane_vc_g5

0x7845,	// (0x00048c1d) volume_set_pane_vc_g6

0x784e,	// (0x00048c26) volume_set_pane_vc_g7

0x7857,	// (0x00048c2f) volume_set_pane_vc_g8

0x7860,	// (0x00048c38) volume_set_pane_vc_g9

0x7869,	// (0x00048c41) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x00050c6e) volume_set_pane_vc_g

0xb5fd,	// (0x0004c9d5) volume_set_pane_vc

0xb607,	// (0x0004c9df) button_value_adjust_pane_cp1_vc

0xb611,	// (0x0004c9e9) list_highlight_pane_cp2_vc

0xb61a,	// (0x0004c9f2) list_set_pane_vc_ParamLimits

0xb61a,	// (0x0004c9f2) list_set_pane_vc

0xb688,	// (0x0004ca60) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0004ca60) main_pane_set_vc_t1

0xb69d,	// (0x0004ca75) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0004ca75) main_pane_set_vc_t2

0xb6af,	// (0x0004ca87) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0004ca87) main_pane_set_vc_t3

0xb6c3,	// (0x0004ca9b) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0004ca9b) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x00050dd7) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x00050dd7) main_pane_set_vc_t

0xb6d7,	// (0x0004caaf) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0004caaf) setting_code_pane_vc

0xb6e8,	// (0x0004cac0) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0004cac0) setting_slider_pane_vc

0xb6e8,	// (0x0004cac0) setting_text_pane_vc

0xb6e8,	// (0x0004cac0) setting_volume_pane_vc

0xb6f2,	// (0x0004caca) scroll_pane_cp121_vc

0x0f72,	// (0x0004234a) set_content_pane_vc

0xb6fa,	// (0x0004cad2) button_value_adjust_pane_g1

0xb703,	// (0x0004cadb) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x00050e38) button_value_adjust_pane_g

0xb70c,	// (0x0004cae4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0004cae4) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0004caf6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0004caf6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x00050e3d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x00050e3d) form_field_slider_wide_pane_vc_t

0x0948,	// (0x00041d20) input_focus_pane_cp10_vc_ParamLimits

0x0948,	// (0x00041d20) input_focus_pane_cp10_vc

0xb74a,	// (0x0004cb22) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0004cb22) slider_cont_pane_cp1_vc

0xb75c,	// (0x0004cb34) slider_form_pane_g1_cp2

0xb56c,	// (0x0004c944) slider_form_pane_g2_cp2

0xb789,	// (0x0004cb61) form_field_slider_pane_vc_t3

0xb797,	// (0x0004cb6f) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0004cb7d) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0004cb7d) slider_form_pane_vc

0xb7b2,	// (0x0004cb8a) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0004cb8a) form_field_slider_pane_vc_t1

0xb71e,	// (0x0004caf6) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0004caf6) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x00050e4f) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x00050e4f) form_field_slider_pane_vc_t

0x0948,	// (0x00041d20) input_focus_pane_cp9_vc_ParamLimits

0x0948,	// (0x00041d20) input_focus_pane_cp9_vc

0xb7c8,	// (0x0004cba0) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0004cba0) slider_cont_pane_vc

0xb7dc,	// (0x0004cbb4) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0004cbb4) list_form_graphic_pane_cp_vc

0x9a73,	// (0x0004ae4b) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0004cbc9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0004cbc9) form_field_popup_wide_pane_vc_t1

0x0f98,	// (0x00042370) input_focus_pane_cp8_vc_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_cp8_vc

0xb836,	// (0x0004cc0e) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0004cc0e) list_form_wide_pane_vc

0xb842,	// (0x0004cc1a) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0004cc22) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0004cc22) list_form_graphic_pane_vc_t1

0x0956,	// (0x00041d2e) list_highlight_pane_cp5_vc_ParamLimits

0x0956,	// (0x00041d2e) list_highlight_pane_cp5_vc

0xb866,	// (0x0004cc3e) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0004cc3e) list_form_graphic_pane_vc

0x9a73,	// (0x0004ae4b) form_field_popup_pane_vc_g1

0xb87c,	// (0x0004cc54) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0004cc54) form_field_popup_pane_vc_t1

0x0f98,	// (0x00042370) input_focus_pane_cp7_vc_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_cp7_vc

0xb893,	// (0x0004cc6b) list_form_pane_vc_ParamLimits

0xb893,	// (0x0004cc6b) list_form_pane_vc

0xb89f,	// (0x0004cc77) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0004cc77) data_form_pane_vc_t1

0x0ff0,	// (0x000423c8) input_focus_pane_vc_g1

0x0ff8,	// (0x000423d0) input_focus_pane_vc_g2

0x1000,	// (0x000423d8) input_focus_pane_vc_g3

0x1008,	// (0x000423e0) input_focus_pane_vc_g4

0x1010,	// (0x000423e8) input_focus_pane_vc_g5

0x1018,	// (0x000423f0) input_focus_pane_vc_g6

0x1020,	// (0x000423f8) input_focus_pane_vc_g7

0x1028,	// (0x00042400) input_focus_pane_vc_g8

0x1030,	// (0x00042408) input_focus_pane_vc_g9

0x08f0,	// (0x00041cc8) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050a44) input_focus_pane_vc_g

0x9a67,	// (0x0004ae3f) data_form_pane_vc_ParamLimits

0x9a67,	// (0x0004ae3f) data_form_pane_vc

0x9a73,	// (0x0004ae4b) form_field_data_pane_vc_g1

0xb8bc,	// (0x0004cc94) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0004cc94) form_field_data_pane_vc_t1

0x0f98,	// (0x00042370) input_focus_pane_vc_ParamLimits

0x0f98,	// (0x00042370) input_focus_pane_vc

0xb8d6,	// (0x0004ccae) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0004ccb6) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0004ccbe) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0004ccbe) form_field_data_pane_vc

0xb901,	// (0x0004ccd9) form_field_data_pane_vc_cp2

0xb909,	// (0x0004cce1) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0004cce1) form_field_data_wide_pane_vc

0xb923,	// (0x0004ccfb) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0004cd03) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0004cd03) form_field_popup_pane_vc

0xb946,	// (0x0004cd1e) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0004cd1e) form_field_popup_wide_pane_vc

0xb960,	// (0x0004cd38) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0004cd38) form_field_slider_pane_vc

0xb973,	// (0x0004cd4b) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0004cd4b) form_field_slider_wide_pane_vc

0xb986,	// (0x0004cd5e) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0004cd5e) grid_touch_1_pane

0xb992,	// (0x0004cd6a) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0004cd6a) grid_touch_2_pane

0x93f8,	// (0x0004a7d0) touch_pane_g1_ParamLimits

0x93f8,	// (0x0004a7d0) touch_pane_g1

0xb9ac,	// (0x0004cd84) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0004cd84) cell_app_pane_cp_wide

0xb9bd,	// (0x0004cd95) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0004cd95) grid_popup_fast_wide_pane

0xb9d1,	// (0x0004cda9) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0004cda9) scroll_pane_cp19

0x08fa,	// (0x00041cd2) bg_popup_window_pane_cp20

0xb9e5,	// (0x0004cdbd) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0004cdc5) grid_indicator_nsta_pane

0xb9ff,	// (0x0004cdd7) clock_nsta_pane_g1

0xba08,	// (0x0004cde0) clock_nsta_pane_t1

0xba24,	// (0x0004cdfc) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0004cdfc) cell_indicator_nsta_pane

0xba59,	// (0x0004ce31) cell_indicator_nsta_pane_g1

0xba67,	// (0x0004ce3f) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x00050e60) cell_indicator_nsta_pane_g

0xba7a,	// (0x0004ce52) clock_nsta_pane_cp

0xba83,	// (0x0004ce5b) indicator_nsta_pane_cp

0xba8d,	// (0x0004ce65) nsta_clock_indic_pane_g1

0x0992,	// (0x00041d6a) grid_indicator_pane

0x4385,	// (0x0004575d) scroll_pane_cp29

0x6d6d,	// (0x00048145) indicator_nsta_pane_cp2_ParamLimits

0x6d6d,	// (0x00048145) indicator_nsta_pane_cp2

0x0956,	// (0x00041d2e) main_apps_wheel_pane

0x9c54,	// (0x0004b02c) form_midp_field_text_pane_ParamLimits

0x9da3,	// (0x0004b17b) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0004cebe) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0004cebe) cell_indicator_pane

0xbafe,	// (0x0004ced6) cell_indicator_pane_g1

0xbb08,	// (0x0004cee0) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0004cee0) grid_wheel_folder_pane

0xbb1c,	// (0x0004cef4) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0004cef4) list_wheel_apps_pane

0xbb2f,	// (0x0004cf07) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0004cf07) main_apps_wheel_pane_g1

0xbb4b,	// (0x0004cf23) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0004cf23) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x00050e7c) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x00050e7c) main_apps_wheel_pane_g

0xbb67,	// (0x0004cf3f) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0004cf3f) main_apps_wheel_pane_t1

0xbb90,	// (0x0004cf68) list_wheel_apps_pane_g1

0xbb98,	// (0x0004cf70) list_wheel_apps_pane_g2

0xbba0,	// (0x0004cf78) list_wheel_apps_pane_g3

0xbba8,	// (0x0004cf80) list_wheel_apps_pane_g4

0xbbb2,	// (0x0004cf8a) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x00050e81) list_wheel_apps_pane_g

0x8f9f,	// (0x0004a377) navi_icon_text_pane

0x9491,	// (0x0004a869) aid_fill_nsta

0xbbd3,	// (0x0004cfab) navi_icon_text_pane_g1

0xbbdf,	// (0x0004cfb7) navi_icon_text_pane_t1

0x8e41,	// (0x0004a219) list_set_graphic_pane_t1_ParamLimits

0x8e41,	// (0x0004a219) list_set_graphic_pane_t1

0xa510,	// (0x0004b8e8) popup_midp_note_alarm_window_t6_ParamLimits

0xa510,	// (0x0004b8e8) popup_midp_note_alarm_window_t6

0xa522,	// (0x0004b8fa) popup_midp_note_alarm_window_t7_ParamLimits

0xa522,	// (0x0004b8fa) popup_midp_note_alarm_window_t7

0xa534,	// (0x0004b90c) popup_midp_note_alarm_window_t8_ParamLimits

0xa534,	// (0x0004b90c) popup_midp_note_alarm_window_t8

0xa546,	// (0x0004b91e) popup_midp_note_alarm_window_t9_ParamLimits

0xa546,	// (0x0004b91e) popup_midp_note_alarm_window_t9

0xa558,	// (0x0004b930) popup_midp_note_alarm_window_t10_ParamLimits

0xa558,	// (0x0004b930) popup_midp_note_alarm_window_t10

0xa56a,	// (0x0004b942) popup_midp_note_alarm_window_t11_ParamLimits

0xa56a,	// (0x0004b942) popup_midp_note_alarm_window_t11

0xa57c,	// (0x0004b954) scroll_pane_cp17_ParamLimits

0xa57c,	// (0x0004b954) scroll_pane_cp17

0x7818,	// (0x00048bf0) volume_small_pane_cp_g1

0x7c16,	// (0x00048fee) volume_small_pane_cp_g2

0x7c1f,	// (0x00048ff7) volume_small_pane_cp_g3

0x7c28,	// (0x00049000) volume_small_pane_cp_g4

0x7c31,	// (0x00049009) volume_small_pane_cp_g5

0x7c3a,	// (0x00049012) volume_small_pane_cp_g6

0x7c43,	// (0x0004901b) volume_small_pane_cp_g7

0x7c4c,	// (0x00049024) volume_small_pane_cp_g8

0x7c55,	// (0x0004902d) volume_small_pane_cp_g9

0x7c5e,	// (0x00049036) volume_small_pane_cp_g10

0x920c,	// (0x0004a5e4) midp_ticker_pane_g1_ParamLimits

0x9218,	// (0x0004a5f0) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00050b10) midp_ticker_pane_g_ParamLimits

0x9224,	// (0x0004a5fc) midp_ticker_pane_t1_ParamLimits

0x94a7,	// (0x0004a87f) aid_fill_nsta_2

0x9d8f,	// (0x0004b167) list_form2_midp_pane

0xaf0b,	// (0x0004c2e3) midp_editing_number_pane_ParamLimits

0xaf1a,	// (0x0004c2f2) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0004cfc9) form2_midp_field_pane

0xbc15,	// (0x0004cfed) scroll_pane_cp51

0xbc35,	// (0x0004d00d) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0004d00d) form2_midp_button_pane

0xbc47,	// (0x0004d01f) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0004d01f) form2_midp_content_pane

0xbc61,	// (0x0004d039) form2_midp_field_choice_group_pane

0xbc69,	// (0x0004d041) form2_midp_field_pane_g1

0xbc71,	// (0x0004d049) form2_midp_field_pane_g2

0xbc79,	// (0x0004d051) form2_midp_field_pane_g3

0xbc81,	// (0x0004d059) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x00050ea6) form2_midp_field_pane_g

0xbc89,	// (0x0004d061) form2_midp_gauge_slider_pane

0xbc91,	// (0x0004d069) form2_midp_gauge_wait_pane

0xbc99,	// (0x0004d071) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0004d071) form2_midp_image_pane

0xbcb4,	// (0x0004d08c) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0004d08c) form2_midp_label_pane

0xbcd3,	// (0x0004d0ab) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0004d0ab) form2_midp_label_pane_cp

0xbcf4,	// (0x0004d0cc) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0004d0cc) form2_midp_string_pane

0x5c7c,	// (0x00047054) form2_midp_text_pane_ParamLimits

0x5c7c,	// (0x00047054) form2_midp_text_pane

0xbd06,	// (0x0004d0de) form2_midp_time_pane

0xbd16,	// (0x0004d0ee) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0004d0ee) input_focus_pane_cp51

0xbd2e,	// (0x0004d106) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0004d106) form2_midp_label_pane_t1

0x5c9f,	// (0x00047077) form2_mdip_text_pane_t1_ParamLimits

0x5c9f,	// (0x00047077) form2_mdip_text_pane_t1

0x5cbe,	// (0x00047096) form2_midp_time_pane_t1

0xbd7c,	// (0x0004d154) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0004d166) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0004d178) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x00050eaf) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0004d18a) form2_midp_slider_pane

0xbdbe,	// (0x0004d196) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0004d1a4) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0004d1a4) form2_midp_wait_pane

0xbdf7,	// (0x0004d1cf) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0004d1cf) list_single_2graphic_pane_cp4

0x9ad0,	// (0x0004aea8) list_single_midp_graphic_pane_cp_ParamLimits

0x9ad0,	// (0x0004aea8) list_single_midp_graphic_pane_cp

0x08fa,	// (0x00041cd2) list_highlight_pane_cp20

0xbe10,	// (0x0004d1e8) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x0004c781) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0004d1f0) list_single_2graphic_pane_t1_cp4

0x0956,	// (0x00041d2e) list_highlight_pane_cp21

0xbe27,	// (0x0004d1ff) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0004d20e) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0004d223) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0004d223) form2_mdip_string_pane_t1

0x08fa,	// (0x00041cd2) bg_wml_button_pane_cp2

0x08f0,	// (0x00041cc8) form2_midp_image_pane_g1

0x678c,	// (0x00047b64) list_double_large_graphic_pane_g5_ParamLimits

0x678c,	// (0x00047b64) list_double_large_graphic_pane_g5

0x9136,	// (0x0004a50e) midp_form_pane_ParamLimits

0x0956,	// (0x00041d2e) main_apps_wheel_pane_ParamLimits

0x7465,	// (0x0004883d) popup_preview_window_ParamLimits

0x7465,	// (0x0004883d) popup_preview_window

0x764c,	// (0x00048a24) popup_touch_info_window_ParamLimits

0x764c,	// (0x00048a24) popup_touch_info_window

0x766e,	// (0x00048a46) popup_touch_menu_window_ParamLimits

0x766e,	// (0x00048a46) popup_touch_menu_window

0x08e6,	// (0x00041cbe) bg_popup_sub_pane_cp6

0xbee7,	// (0x0004d2bf) list_touch_menu_pane

0xbeef,	// (0x0004d2c7) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0004d2c7) list_single_touch_menu_pane

0xbf07,	// (0x0004d2df) list_single_touch_menu_pane_t1

0x0956,	// (0x00041d2e) bg_popup_sub_pane_cp7_ParamLimits

0x0956,	// (0x00041d2e) bg_popup_sub_pane_cp7

0xbf15,	// (0x0004d2ed) heading_sub_pane

0xbf1d,	// (0x0004d2f5) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0004d2f5) list_touch_info_pane

0xbf2c,	// (0x0004d304) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0004d304) list_single_touch_info_pane

0xbf3e,	// (0x0004d316) list_single_touch_info_pane_t1

0xbf4c,	// (0x0004d324) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x00050ebd) list_single_touch_info_pane_t

0x912e,	// (0x0004a506) bg_popup_heading_pane_cp

0xbf5a,	// (0x0004d332) heading_sub_pane_t1

0x9a01,	// (0x0004add9) bg_popup_preview_window_pane_cp_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0004d2ed) heading_preview_pane

0xbf1d,	// (0x0004d2f5) list_preview_pane_ParamLimits

0xbf1d,	// (0x0004d2f5) list_preview_pane

0xbf68,	// (0x0004d340) popup_preview_window_g1

0xbf2c,	// (0x0004d304) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0004d304) list_single_preview_pane

0xbf70,	// (0x0004d348) list_single_preview_pane_g1

0xbf78,	// (0x0004d350) list_single_preview_pane_t1

0xbf3e,	// (0x0004d316) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x00050ec2) list_single_preview_pane_t

0xbf86,	// (0x0004d35e) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0004d35e) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0004d374) heading_preview_pane_g1

0xbfa4,	// (0x0004d37c) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0004d37c) heading_preview_pane_t1

0x09a9,	// (0x00041d81) soft_indicator_pane_t1_ParamLimits

0x0f0b,	// (0x000422e3) scroll_pane_ParamLimits

0x428a,	// (0x00045662) scroll_sc2_left_pane

0x4281,	// (0x00045659) scroll_sc2_right_pane

0x42a9,	// (0x00045681) scroll_bg_pane_g1_ParamLimits

0x42be,	// (0x00045696) scroll_bg_pane_g2_ParamLimits

0x42d6,	// (0x000456ae) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00050a9b) scroll_bg_pane_g_ParamLimits

0x42a9,	// (0x00045681) scroll_handle_pane_g1_ParamLimits

0x42f8,	// (0x000456d0) scroll_handle_pane_g2_ParamLimits

0x42d6,	// (0x000456ae) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050aa2) scroll_handle_pane_g_ParamLimits

0x70aa,	// (0x00048482) popup_choice_list_window_ParamLimits

0x70aa,	// (0x00048482) popup_choice_list_window

0x98d7,	// (0x0004acaf) choice_list_pane

0x9959,	// (0x0004ad31) cell_toolbar_pane_t1

0x9981,	// (0x0004ad59) toolbar_button_pane_ParamLimits

0xaa46,	// (0x0004be1e) ai_gene_pane_1_t2_ParamLimits

0xaa46,	// (0x0004be1e) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00050cca) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00050cca) ai_gene_pane_1_t

0xbfc1,	// (0x0004d399) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0004d399) scroll_sc2_right_pane_g1

0x9455,	// (0x0004a82d) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0004d3a3) list_choice_list_pane

0xbfe4,	// (0x0004d3bc) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0004d3bc) list_single_choice_list_pane

0xbffc,	// (0x0004d3d4) list_single_choice_list_pane_g1

0x10f9,	// (0x000424d1) list_single_choice_list_pane_t1_ParamLimits

0x10f9,	// (0x000424d1) list_single_choice_list_pane_t1

0xc004,	// (0x0004d3dc) choice_list_pane_g1

0xc00c,	// (0x0004d3e4) choice_list_pane_t1

0x08e6,	// (0x00041cbe) input_focus_pane_cp11

0x1277,	// (0x0004264f) title_pane_stacon_g2_ParamLimits

0x1277,	// (0x0004264f) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050a81) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050a81) title_pane_stacon_g

0x912e,	// (0x0004a506) cursor_press_pane

0x7164,	// (0x0004853c) popup_fep_hwr_window_ParamLimits

0x7164,	// (0x0004853c) popup_fep_hwr_window

0x71ee,	// (0x000485c6) popup_fep_vkb_window_ParamLimits

0x71ee,	// (0x000485c6) popup_fep_vkb_window

0xc01a,	// (0x0004d3f2) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x00050eeb) fep_vkb_side_pane_g_ParamLimits

0x7ca0,	// (0x00049078) fep_hwr_candidate_pane_ParamLimits

0x7ca0,	// (0x00049078) fep_hwr_candidate_pane

0x7cca,	// (0x000490a2) fep_hwr_side_pane_ParamLimits

0x7cca,	// (0x000490a2) fep_hwr_side_pane

0x7cec,	// (0x000490c4) fep_hwr_top_pane_ParamLimits

0x7cec,	// (0x000490c4) fep_hwr_top_pane

0x7d04,	// (0x000490dc) fep_hwr_write_pane_ParamLimits

0x7d04,	// (0x000490dc) fep_hwr_write_pane

0xfb13,	// (0x00050eeb) fep_vkb_side_pane_g

0xc022,	// (0x0004d3fa) fep_hwr_top_pane_g1

0xc034,	// (0x0004d40c) fep_hwr_top_pane_g2

0x7d30,	// (0x00049108) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x00050ec7) fep_hwr_top_pane_g

0x7d45,	// (0x0004911d) fep_hwr_top_text_pane

0x43f2,	// (0x000457ca) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0004d442) fep_hwr_top_text_pane_t1

0x7e4f,	// (0x00049227) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0004d68d) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0004d68d) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0004d6b9) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0004d6b9) fep_vkb_keypad_pane_g4

0xc358,	// (0x0004d730) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0004d730) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x00050ef2) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x00050ef2) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0004d399) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x00050efc) cell_vkb_side_pane_g

0xc3e3,	// (0x0004d7bb) cell_vkb_side_pane_t1

0xc3f1,	// (0x0004d7c9) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0004d399) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0004d90d) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0004d450) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0004d450) aid_size_cell_vkb

0xc535,	// (0x0004d90d) cell_vkb_candidate_pane

0x7e69,	// (0x00049241) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0004d4e2) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0004d4e2) fep_vkb_bottom_pane

0xc147,	// (0x0004d51f) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0004d51f) fep_vkb_candidate_pane

0xc163,	// (0x0004d53b) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0004d53b) fep_vkb_keypad_pane

0xc196,	// (0x0004d56e) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0004d56e) fep_vkb_side_pane

0xc1d2,	// (0x0004d5aa) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0004d5aa) fep_vkb_top_pane

0xc20e,	// (0x0004d5e6) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0004d5e6) fep_vkb_top_pane_g1

0xc21d,	// (0x0004d5f5) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0004d5f5) fep_vkb_top_pane_g2

0xc22c,	// (0x0004d604) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0004d604) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x00050ee2) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x00050ee2) fep_vkb_top_pane_g

0xc24a,	// (0x0004d622) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0004d622) fep_vkb_top_text_pane

0xc25b,	// (0x0004d633) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0004d633) fep_vkb_side_pane_g1

0xc2a4,	// (0x0004d67c) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0004d67c) grid_vkb_side_pane

0x7e71,	// (0x00049249) bg_popup_fep_shadow_pane_g2

0x7e7a,	// (0x00049252) bg_popup_fep_shadow_pane_g3

0x7e82,	// (0x0004925a) bg_popup_fep_shadow_pane_g4

0x7e8b,	// (0x00049263) bg_popup_fep_shadow_pane_g5

0x7e95,	// (0x0004926d) bg_popup_fep_shadow_pane_g6

0x7e9d,	// (0x00049275) bg_popup_fep_shadow_pane_g7

0x1010,	// (0x000423e8) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0004d6db) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0004d6db) grid_vkb_keypad_number_pane

0xc317,	// (0x0004d6ef) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0004d6ef) grid_vkb_keypad_pane

0xc33d,	// (0x0004d715) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0004d715) fep_vkb_bottom_pane_g1

0xc366,	// (0x0004d73e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0004d73e) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0004d753) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0004d753) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0004d768) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0004d783) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0004d798) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0004d798) cell_vkb_side_pane

0xbfc1,	// (0x0004d399) cell_vkb_side_pane_g1

0xc3ff,	// (0x0004d7d7) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0004d7d7) cell_vkb_keypad_pane

0xc48c,	// (0x0004d864) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x00050f0f) bg_popup_fep_shadow_pane_g

0xbfc1,	// (0x0004d399) cell_hwr_side_pane_g1

0xbfc1,	// (0x0004d399) cell_hwr_side_pane_g2

0xc496,	// (0x0004d86e) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0004d87c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0004d87c) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0004d899) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0004d899) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0004d399) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0004d399) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0004d8d2) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0004d8d2) cell_vkb_keypad_number_pane

0xc519,	// (0x0004d8f1) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0004d8fb) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0004d904) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x00050f01) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0004d86e) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0004d92e) fep_vkb_candidate_pane_g1

0x0001,

0xfb24,	// (0x00050efc) cell_hwr_side_pane_g

0xc56f,	// (0x0004d947) cell_hwr_side_pane_t1

0x7eaf,	// (0x00049287) cell_hwr_side_pane_t1_copy1

0xc23c,	// (0x0004d614) cell_hwr_candidate_pane_g1

0x7ebd,	// (0x00049295) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0004d399) cell_vkb_candidate_pane_g2

0xc5f5,	// (0x0004d9cd) cell_vkb_candidate_pane_t1

0x7c67,	// (0x0004903f) bg_popup_fep_shadow_pane_ParamLimits

0x7c67,	// (0x0004903f) bg_popup_fep_shadow_pane

0x23ae,	// (0x00043786) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0004d41e) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0004d41e) bg_hwr_side_pane_g1

0x7d83,	// (0x0004915b) cell_hwr_side_pane_ParamLimits

0x7d83,	// (0x0004915b) cell_hwr_side_pane

0x7dc0,	// (0x00049198) fep_hwr_write_pane_g1_ParamLimits

0x7dc0,	// (0x00049198) fep_hwr_write_pane_g1

0x7dcd,	// (0x000491a5) fep_hwr_write_pane_g2_ParamLimits

0x7dcd,	// (0x000491a5) fep_hwr_write_pane_g2

0x7dda,	// (0x000491b2) fep_hwr_write_pane_g3_ParamLimits

0x7dda,	// (0x000491b2) fep_hwr_write_pane_g3

0x7de8,	// (0x000491c0) fep_hwr_write_pane_g4_ParamLimits

0x7de8,	// (0x000491c0) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x00050ece) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x00050ece) fep_hwr_write_pane_g

0x23ae,	// (0x00043786) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x23ae,	// (0x00043786) bg_fep_hwr_candidate_pane_g2

0x7dfd,	// (0x000491d5) cell_hwr_candidate_pane_ParamLimits

0x7dfd,	// (0x000491d5) cell_hwr_candidate_pane

0x7e4f,	// (0x00049227) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0004d47e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0004d47e) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0004d614) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0004d614) fep_vkb_top_pane_g4

0xc282,	// (0x0004d65a) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0004d65a) fep_vkb_side_pane_g2

0x5448,	// (0x00046820) list_setting_pane_t4_ParamLimits

0x5448,	// (0x00046820) list_setting_pane_t4

0x54e4,	// (0x000468bc) list_setting_number_pane_t5_ParamLimits

0x54e4,	// (0x000468bc) list_setting_number_pane_t5

0x6b62,	// (0x00047f3a) list_double_heading_pane_cp2_ParamLimits

0x6b62,	// (0x00047f3a) list_double_heading_pane_cp2

0xc603,	// (0x0004d9db) list_double_heading_pane_g1_cp2_ParamLimits

0xc603,	// (0x0004d9db) list_double_heading_pane_g1_cp2

0xc60f,	// (0x0004d9e7) list_double_heading_pane_g2_cp2_ParamLimits

0xc60f,	// (0x0004d9e7) list_double_heading_pane_g2_cp2

0xc623,	// (0x0004d9fb) list_double_heading_pane_t1_cp2_ParamLimits

0xc623,	// (0x0004d9fb) list_double_heading_pane_t1_cp2

0xc639,	// (0x0004da11) list_double_heading_pane_t2_cp2_ParamLimits

0xc639,	// (0x0004da11) list_double_heading_pane_t2_cp2

0x08de,	// (0x00041cb6) aid_value_unit2

0x6265,	// (0x0004763d) popup_preview_fixed_window

0x0a89,	// (0x00041e61) bg_popup_preview_window_pane_cp02

0xc64b,	// (0x0004da23) list_preview_fixed_pane

0xc691,	// (0x0004da69) list_empty_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_empty_pane_fp

0xc691,	// (0x0004da69) list_single_cale_day_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_cale_day_pane_fp

0xc691,	// (0x0004da69) list_single_graphic_heading_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_graphic_heading_pane_fp

0xc691,	// (0x0004da69) list_single_graphic_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_graphic_pane_fp

0xc691,	// (0x0004da69) list_single_heading_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_heading_pane_fp

0xc691,	// (0x0004da69) list_single_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_pane_fp

0xc6aa,	// (0x0004da82) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da82) list_single_pane_fp_g1

0x7edb,	// (0x000492b3) list_single_pane_fp_g2_ParamLimits

0x7edb,	// (0x000492b3) list_single_pane_fp_g2

0x7ee7,	// (0x000492bf) list_single_pane_fp_g3_ParamLimits

0x7ee7,	// (0x000492bf) list_single_pane_fp_g3

0xc6b6,	// (0x0004da8e) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0004da8e) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x00050f30) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x00050f30) list_single_pane_fp_g

0x5cd1,	// (0x000470a9) list_single_pane_fp_t1_ParamLimits

0x5cd1,	// (0x000470a9) list_single_pane_fp_t1

0x5ce8,	// (0x000470c0) list_single_graphic_pane_fp_g1_ParamLimits

0x5ce8,	// (0x000470c0) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0004da82) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da82) list_single_graphic_pane_fp_g2

0x7edb,	// (0x000492b3) list_single_graphic_pane_fp_g3_ParamLimits

0x7edb,	// (0x000492b3) list_single_graphic_pane_fp_g3

0x7ee7,	// (0x000492bf) list_single_graphic_pane_fp_g4_ParamLimits

0x7ee7,	// (0x000492bf) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0004da8e) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da8e) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f39) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f39) list_single_graphic_pane_fp_g

0x5cf4,	// (0x000470cc) list_single_graphic_pane_fp_t1_ParamLimits

0x5cf4,	// (0x000470cc) list_single_graphic_pane_fp_t1

0x5ce8,	// (0x000470c0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5ce8,	// (0x000470c0) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0004da82) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da82) list_single_graphic_heading_pane_fp_g2

0x7edb,	// (0x000492b3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7edb,	// (0x000492b3) list_single_graphic_heading_pane_fp_g3

0x7ee7,	// (0x000492bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7ee7,	// (0x000492bf) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0004da8e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da8e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f39) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f39) list_single_graphic_heading_pane_fp_g

0x5d0a,	// (0x000470e2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5d0a,	// (0x000470e2) list_single_graphic_heading_pane_fp_t1

0x5d20,	// (0x000470f8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5d20,	// (0x000470f8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x00050f44) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x00050f44) list_single_graphic_heading_pane_fp_t

0x5d32,	// (0x0004710a) list_single_cale_day_pane_fp_g1_ParamLimits

0x5d32,	// (0x0004710a) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0004da9a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0004da9a) list_single_cale_day_pane_fp_g2

0x7efb,	// (0x000492d3) list_single_cale_day_pane_fp_g3_ParamLimits

0x7efb,	// (0x000492d3) list_single_cale_day_pane_fp_g3

0x7f23,	// (0x000492fb) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f23,	// (0x000492fb) list_single_cale_day_pane_fp_g4

0x7f47,	// (0x0004931f) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f47,	// (0x0004931f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x00050f49) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x00050f49) list_single_cale_day_pane_fp_g

0x5d6a,	// (0x00047142) list_single_cale_day_pane_fp_t1_ParamLimits

0x5d6a,	// (0x00047142) list_single_cale_day_pane_fp_t1

0x5d90,	// (0x00047168) list_single_cale_day_pane_fp_t2_ParamLimits

0x5d90,	// (0x00047168) list_single_cale_day_pane_fp_t2

0x5da9,	// (0x00047181) list_single_cale_day_pane_fp_t3_ParamLimits

0x5da9,	// (0x00047181) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x00050f54) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x00050f54) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0004da82) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da82) list_empty_pane_fp_g1

0x5dc2,	// (0x0004719a) list_empty_pane_fp_t1

0x5dd0,	// (0x000471a8) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x00050f5b) list_empty_pane_fp_t

0xc6aa,	// (0x0004da82) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da82) list_single_heading_pane_fp_g1

0x7edb,	// (0x000492b3) list_single_heading_pane_fp_g2_ParamLimits

0x7edb,	// (0x000492b3) list_single_heading_pane_fp_g2

0x7ee7,	// (0x000492bf) list_single_heading_pane_fp_g3_ParamLimits

0x7ee7,	// (0x000492bf) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x00050f60) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x00050f60) list_single_heading_pane_fp_g

0x5dde,	// (0x000471b6) list_single_heading_pane_fp_t1_ParamLimits

0x5dde,	// (0x000471b6) list_single_heading_pane_fp_t1

0x5df0,	// (0x000471c8) list_single_heading_pane_fp_t2_ParamLimits

0x5df0,	// (0x000471c8) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x00050f67) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x00050f67) list_single_heading_pane_fp_t

0x110e,	// (0x000424e6) aid_size_cell_fast

0x0a6c,	// (0x00041e44) soft_indicator_pane_cp1_t1

0x114b,	// (0x00042523) cell_app_pane_cp2_ParamLimits

0x114b,	// (0x00042523) cell_app_pane_cp2

0x7c89,	// (0x00049061) fep_hwr_candidate_drop_down_list_pane

0x23bc,	// (0x00043794) fep_hwr_candidate_pane_g3_ParamLimits

0x23bc,	// (0x00043794) fep_hwr_candidate_pane_g3

0x23c9,	// (0x000437a1) fep_hwr_candidate_pane_g4_ParamLimits

0x23c9,	// (0x000437a1) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x00050edb) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x00050edb) fep_hwr_candidate_pane_g

0xc136,	// (0x0004d50e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0004d50e) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0004d936) fep_vkb_candidate_pane_g3

0xc566,	// (0x0004d93e) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x00050f08) fep_vkb_candidate_pane_g

0xc23c,	// (0x0004d614) cell_hwr_candidate_pane_g1_ParamLimits

0xc57d,	// (0x0004d955) cell_hwr_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0004d955) cell_hwr_candidate_pane_g3

0xc59e,	// (0x0004d976) cell_hwr_candidate_pane_g4_ParamLimits

0xc59e,	// (0x0004d976) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00050f22) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x00050f22) cell_hwr_candidate_pane_g

0xc5bf,	// (0x0004d997) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bf,	// (0x0004d997) cell_vkb_candidate_pane_g3

0xc5da,	// (0x0004d9b2) cell_vkb_candidate_pane_g4_ParamLimits

0xc5da,	// (0x0004d9b2) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0004daa6) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0004daa6) cell_app_pane_cp2_g1

0xc6ec,	// (0x0004dac4) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0004dac4) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x00050f6c) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x00050f6c) cell_app_pane_cp2_g

0xc6f8,	// (0x0004dad0) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0004dad0) cell_app_pane_cp2_t1

0x0f98,	// (0x00042370) grid_highlight_pane_cp1_ParamLimits

0x0f98,	// (0x00042370) grid_highlight_pane_cp1

0x7f6b,	// (0x00049343) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f6b,	// (0x00049343) cell_hwr_candidate_pane_cp1

0xc23c,	// (0x0004d614) fep_hwr_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0004dae2) fep_hwr_candidate_drop_down_list_pane_g2

0xc717,	// (0x0004daef) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00050f71) fep_hwr_candidate_drop_down_list_pane_g

0x7f8f,	// (0x00049367) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f98,	// (0x00049370) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f98,	// (0x00049370) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7fa5,	// (0x0004937d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fa5,	// (0x0004937d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7fb2,	// (0x0004938a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fb2,	// (0x0004938a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5bf,	// (0x0004d997) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bf,	// (0x0004d997) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5da,	// (0x0004d9b2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5da,	// (0x0004d9b2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7fbf,	// (0x00049397) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7fbf,	// (0x00049397) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fda,	// (0x000493b2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fda,	// (0x000493b2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ff5,	// (0x000493cd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ff5,	// (0x000493cd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00050f78) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00050f78) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc724,	// (0x0004dafc) cell_vkb_candidate_pane_cp1_ParamLimits

0xc724,	// (0x0004dafc) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0004d614) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) fep_vkb_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0004dae2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc70a,	// (0x0004dae2) fep_vkb_candidate_drop_down_list_pane_g2

0xc717,	// (0x0004daef) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc717,	// (0x0004daef) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00050f71) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb99,	// (0x00050f71) fep_vkb_candidate_drop_down_list_pane_g

0xc74a,	// (0x0004db22) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc74a,	// (0x0004db22) fep_vkb_candidate_drop_down_list_scroll_pane

0xc757,	// (0x0004db2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc757,	// (0x0004db2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc764,	// (0x0004db3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc764,	// (0x0004db3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc770,	// (0x0004db48) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc770,	// (0x0004db48) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc57d,	// (0x0004d955) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc57d,	// (0x0004d955) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc59e,	// (0x0004d976) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc59e,	// (0x0004d976) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0004db54) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0004db54) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0004db75) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0004db75) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0004db96) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0004db96) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x00050f89) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x00050f89) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6385,	// (0x0004775d) title_pane_g1_ParamLimits

0x6392,	// (0x0004776a) title_pane_g2_ParamLimits

0xf529,	// (0x00050901) title_pane_g_ParamLimits

0x43ea,	// (0x000457c2) aid_call2_pane

0x43e2,	// (0x000457ba) aid_call_pane

0x43f2,	// (0x000457ca) popup_clock_analogue_window_g1

0x43f2,	// (0x000457ca) popup_clock_analogue_window_g2

0x6b43,	// (0x00047f1b) popup_clock_analogue_window_g3

0x6b4c,	// (0x00047f24) popup_clock_analogue_window_g4

0x08f0,	// (0x00041cc8) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00050ab0) popup_clock_analogue_window_g

0x6b54,	// (0x00047f2c) popup_clock_analogue_window_t1

0x6bb2,	// (0x00047f8a) clock_digital_number_pane_ParamLimits

0x6bb2,	// (0x00047f8a) clock_digital_number_pane

0x6bbe,	// (0x00047f96) clock_digital_number_pane_cp02_ParamLimits

0x6bbe,	// (0x00047f96) clock_digital_number_pane_cp02

0x6bca,	// (0x00047fa2) clock_digital_number_pane_cp03_ParamLimits

0x6bca,	// (0x00047fa2) clock_digital_number_pane_cp03

0x6bd6,	// (0x00047fae) clock_digital_number_pane_cp04_ParamLimits

0x6bd6,	// (0x00047fae) clock_digital_number_pane_cp04

0x6be2,	// (0x00047fba) clock_digital_separator_pane_ParamLimits

0x6be2,	// (0x00047fba) clock_digital_separator_pane

0x6bee,	// (0x00047fc6) popup_clock_digital_window_t1_ParamLimits

0x6bee,	// (0x00047fc6) popup_clock_digital_window_t1

0x08f0,	// (0x00041cc8) clock_digital_number_pane_g1

0x08f0,	// (0x00041cc8) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00050abb) clock_digital_number_pane_g

0x08f0,	// (0x00041cc8) clock_digital_separator_pane_g1

0x08f0,	// (0x00041cc8) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00050abb) clock_digital_separator_pane_g

0x9491,	// (0x0004a869) aid_fill_nsta_ParamLimits

0x95dd,	// (0x0004a9b5) indicator_nsta_pane_ParamLimits

0x976e,	// (0x0004ab46) popup_clock_analogue_window

0x976e,	// (0x0004ab46) popup_clock_digital_window

0xb9ed,	// (0x0004cdc5) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0004cdee) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x00050e5b) clock_nsta_pane_t

0x6aac,	// (0x00047e84) aid_size_max_handle

0x6ab6,	// (0x00047e8e) aid_size_min_handle

0x912e,	// (0x0004a506) editor_scroll_pane

0xc7d9,	// (0x0004dbb1) ex_editor_pane

0x10d4,	// (0x000424ac) scroll_pane_cp13

0x0f37,	// (0x0004230f) scroll_pane_cp14

0x4440,	// (0x00045818) scroll_pane_cp36

0x6b78,	// (0x00047f50) list_single_graphic_hl_pane_cp2_ParamLimits

0x6b78,	// (0x00047f50) list_single_graphic_hl_pane_cp2

0x59d1,	// (0x00046da9) list_single_graphic_hl_pane_ParamLimits

0x59d1,	// (0x00046da9) list_single_graphic_hl_pane

0x5e06,	// (0x000471de) aid_size_min_hl_cp1

0xc7e1,	// (0x0004dbb9) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0004dbb9) list_highlight_pane_cp34

0xc7f2,	// (0x0004dbca) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0004dbca) list_single_graphic_hl_pane_g1

0x5e0f,	// (0x000471e7) list_single_graphic_hl_pane_g2_ParamLimits

0x5e0f,	// (0x000471e7) list_single_graphic_hl_pane_g2

0x5e0f,	// (0x000471e7) list_single_graphic_hl_pane_g3_ParamLimits

0x5e0f,	// (0x000471e7) list_single_graphic_hl_pane_g3

0x5e1b,	// (0x000471f3) list_single_graphic_hl_pane_g4_ParamLimits

0x5e1b,	// (0x000471f3) list_single_graphic_hl_pane_g4

0x5e27,	// (0x000471ff) list_single_graphic_hl_pane_g5_ParamLimits

0x5e27,	// (0x000471ff) list_single_graphic_hl_pane_g5

0x0004,

0xfbc2,	// (0x00050f9a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc2,	// (0x00050f9a) list_single_graphic_hl_pane_g

0x5e3b,	// (0x00047213) list_single_graphic_hl_pane_t1_ParamLimits

0x5e3b,	// (0x00047213) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0004dbd7) aid_size_min_hl_cp2

0xc808,	// (0x0004dbe0) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0004dbe0) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0004dbca) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0004dbca) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0004dbed) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0004dbed) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0004dbf9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0004dbf9) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0004dc07) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0004dc07) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0004dc13) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0004dc13) list_single_graphic_hl_pane_g5_cp2

0x6f74,	// (0x0004834c) control_pane_g4_ParamLimits

0x6f74,	// (0x0004834c) control_pane_g4

0x9455,	// (0x0004a82d) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0004d3a3) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0004d3b2) scroll_pane_cp23

0x0a89,	// (0x00041e61) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64b,	// (0x0004da23) list_preview_fixed_pane_ParamLimits

0xc661,	// (0x0004da39) list_preview_fixed_pane_cp_ParamLimits

0xc661,	// (0x0004da39) list_preview_fixed_pane_cp

0xc66d,	// (0x0004da45) popup_preview_fixed_window_g1_ParamLimits

0xc66d,	// (0x0004da45) popup_preview_fixed_window_g1

0xc679,	// (0x0004da51) popup_preview_fixed_window_g2_ParamLimits

0xc679,	// (0x0004da51) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x00050f29) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x00050f29) popup_preview_fixed_window_g

0x6960,	// (0x00047d38) aid_navi_side_left_pane_ParamLimits

0x6975,	// (0x00047d4d) aid_navi_side_right_pane_ParamLimits

0x698d,	// (0x00047d65) navi_icon_pane_stacon_ParamLimits

0x69a1,	// (0x00047d79) navi_navi_pane_stacon_ParamLimits

0x698d,	// (0x00047d65) navi_text_pane_stacon_ParamLimits

0x08e6,	// (0x00041cbe) main_text_info_pane

0xc865,	// (0x0004dc3d) listscroll_text_info_pane

0xc86d,	// (0x0004dc45) list_text_info_pane_ParamLimits

0xc86d,	// (0x0004dc45) list_text_info_pane

0xc87c,	// (0x0004dc54) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0004dc54) scroll_pane_cp24

0xc89a,	// (0x0004dc72) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0004dc72) list_text_info_pane_t1

0x70cc,	// (0x000484a4) popup_fast_swap2_window_ParamLimits

0x70cc,	// (0x000484a4) popup_fast_swap2_window

0xc8bf,	// (0x0004dc97) aid_size_cell_fast2

0x08e6,	// (0x00041cbe) bg_popup_window_pane_cp17

0xc8c9,	// (0x0004dca1) heading_pane_cp2

0xc8d1,	// (0x0004dca9) listscroll_fast2_pane

0xc8d9,	// (0x0004dcb1) grid_fast2_pane

0xc8e3,	// (0x0004dcbb) listscroll_fast2_pane_g1

0xc8ed,	// (0x0004dcc5) listscroll_fast2_pane_g2

0x0001,

0xfbcd,	// (0x00050fa5) listscroll_fast2_pane_g

0x10d4,	// (0x000424ac) scroll_pane_cp26

0xc8f7,	// (0x0004dccf) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0004dccf) cell_fast2_pane

0xc90e,	// (0x0004dce6) cell_fast2_pane_g1

0xc917,	// (0x0004dcef) cell_fast2_pane_g2

0xc920,	// (0x0004dcf8) cell_fast2_pane_g3

0x0002,

0xfbd2,	// (0x00050faa) cell_fast2_pane_g

0x0cfe,	// (0x000420d6) grid_highlight_pane_cp9

0x0d13,	// (0x000420eb) main_eswt_pane_ParamLimits

0x0d13,	// (0x000420eb) main_eswt_pane

0xc891,	// (0x0004dc69) list_single_text_info_pane

0xc928,	// (0x0004dd00) eswt_ctrl_button_pane

0xc928,	// (0x0004dd00) eswt_ctrl_canvas_pane

0xc930,	// (0x0004dd08) eswt_ctrl_combo_pane

0xc928,	// (0x0004dd00) eswt_ctrl_default_pane

0xc928,	// (0x0004dd00) eswt_ctrl_label_pane

0xc938,	// (0x0004dd10) eswt_ctrl_wait_pane

0xc940,	// (0x0004dd18) eswt_shell_pane

0x08e6,	// (0x00041cbe) listscroll_eswt_app_pane

0xc960,	// (0x0004dd38) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0004dd38) popup_eswt_tasktip_window

0x9a01,	// (0x0004add9) bg_popup_window_pane_cp18

0xc979,	// (0x0004dd51) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0004dd51) eswt_control_pane_g1

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0004dd5e) eswt_control_pane_g2

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0004dd6b) eswt_control_pane_g3

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4

0x0003,

0xfbd9,	// (0x00050fb1) eswt_control_pane_g_ParamLimits

0xfbd9,	// (0x00050fb1) eswt_control_pane_g

0x0f98,	// (0x00042370) bg_button_pane_ParamLimits

0x0f98,	// (0x00042370) bg_button_pane

0x0d13,	// (0x000420eb) common_borders_pane_copy2_ParamLimits

0x0d13,	// (0x000420eb) common_borders_pane_copy2

0xc9ad,	// (0x0004dd85) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0004dd85) control_button_pane_g1

0xc9b9,	// (0x0004dd91) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0004dd91) control_button_pane_g2

0xc9c5,	// (0x0004dd9d) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0004dd9d) control_button_pane_g3

0x0002,

0xfbe2,	// (0x00050fba) control_button_pane_g_ParamLimits

0xfbe2,	// (0x00050fba) control_button_pane_g

0xc9d9,	// (0x0004ddb1) control_button_pane_t1

0xc9e7,	// (0x0004ddbf) control_button_pane_t2

0x0001,

0xfbe9,	// (0x00050fc1) control_button_pane_t

0x998d,	// (0x0004ad65) bg_button_pane_g1

0x9995,	// (0x0004ad6d) bg_button_pane_g2

0x999d,	// (0x0004ad75) bg_button_pane_g3

0x99a5,	// (0x0004ad7d) bg_button_pane_g4

0x99ad,	// (0x0004ad85) bg_button_pane_g5

0x99b5,	// (0x0004ad8d) bg_button_pane_g6

0x99bd,	// (0x0004ad95) bg_button_pane_g7

0x99c5,	// (0x0004ad9d) bg_button_pane_g8

0x99cd,	// (0x0004ada5) bg_button_pane_g9

0x0008,

0xf846,	// (0x00050c1e) bg_button_pane_g

0xbf86,	// (0x0004d35e) common_borders_pane_ParamLimits

0xbf86,	// (0x0004d35e) common_borders_pane

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy1

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy1

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0004d399) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0004d35e) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0004d35e) common_borders_pane_cp2

0xbf86,	// (0x0004d35e) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0004d35e) common_borders_pane_cp3

0xc9f5,	// (0x0004ddcd) separator_horizontal_pane

0xc9fd,	// (0x0004ddd5) separator_vertical_pane

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy2

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy2

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy2

0x08e6,	// (0x00041cbe) common_borders_pane_cp4

0xca06,	// (0x0004ddde) separator_horizontal_pane_g1

0xca0f,	// (0x0004dde7) separator_horizontal_pane_g2

0xca18,	// (0x0004ddf0) separator_horizontal_pane_g3

0x0002,

0xfbee,	// (0x00050fc6) separator_horizontal_pane_g

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy3

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy3

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy3

0x08e6,	// (0x00041cbe) common_borders_pane_cp5

0xca21,	// (0x0004ddf9) separator_vertical_pane_g1

0xca2a,	// (0x0004de02) separator_vertical_pane_g2

0xca33,	// (0x0004de0b) separator_vertical_pane_g3

0x0002,

0xfbf5,	// (0x00050fcd) separator_vertical_pane_g

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0004dd51) eswt_control_pane_g1_copy4

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0004dd5e) eswt_control_pane_g2_copy4

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0004dd6b) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0004dd78) eswt_control_pane_g4_copy4

0xca3c,	// (0x0004de14) eswt_ctrl_combo_button_pane

0xca44,	// (0x0004de1c) eswt_ctrl_input_pane

0xca4c,	// (0x0004de24) popup_choice_list_window_cp70

0xca54,	// (0x0004de2c) eswt_ctrl_input_pane_t1

0x08e6,	// (0x00041cbe) input_focus_pane_cp70

0xbf86,	// (0x0004d35e) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0004d35e) bg_button_pane_cp70

0xca62,	// (0x0004de3a) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0004de42) wait_bar_pane_cp70

0x9a01,	// (0x0004add9) bg_popup_window_pane_cp70_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_window_pane_cp70

0xca72,	// (0x0004de4a) popup_eswt_tasktip_window_t1

0xca88,	// (0x0004de60) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0004de60) wait_bar_pane_cp71

0xca94,	// (0x0004de6c) grid_eswt_app_pane

0x4281,	// (0x00045659) scroll_pane_cp70

0xca9d,	// (0x0004de75) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0004de75) cell_eswt_app_pane

0xcacf,	// (0x0004dea7) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0004dea7) cell_eswt_app_pane_g1

0xcafe,	// (0x0004ded6) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0004ded6) cell_eswt_app_pane_g2

0x0001,

0xfbfc,	// (0x00050fd4) cell_eswt_app_pane_g_ParamLimits

0xfbfc,	// (0x00050fd4) cell_eswt_app_pane_g

0xcb27,	// (0x0004deff) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0004deff) cell_eswt_app_pane_t1

0xcb59,	// (0x0004df31) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0004df31) grid_highlight_pane_cp70

0x8ff4,	// (0x0004a3cc) set_content_pane_g1

0x93dc,	// (0x0004a7b4) status_small_volume_pane

0x8010,	// (0x000493e8) status_small_volume_pane_g1

0x8018,	// (0x000493f0) volume_small2_pane

0x8021,	// (0x000493f9) volume_small2_pane_g1

0x802a,	// (0x00049402) volume_small2_pane_g2

0x8033,	// (0x0004940b) volume_small2_pane_g3

0x803c,	// (0x00049414) volume_small2_pane_g4

0x8045,	// (0x0004941d) volume_small2_pane_g5

0x804e,	// (0x00049426) volume_small2_pane_g6

0x8057,	// (0x0004942f) volume_small2_pane_g7

0x8060,	// (0x00049438) volume_small2_pane_g8

0x8069,	// (0x00049441) volume_small2_pane_g9

0x8072,	// (0x0004944a) volume_small2_pane_g10

0x0009,

0xfc01,	// (0x00050fd9) volume_small2_pane_g

0xc390,	// (0x0004d768) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0004d783) fep_vkb_top_text_pane_t1_ParamLimits

0xc685,	// (0x0004da5d) popup_preview_fixed_window_g3_ParamLimits

0xc685,	// (0x0004da5d) popup_preview_fixed_window_g3

0x75df,	// (0x000489b7) popup_toolbar_trans_pane

0xad59,	// (0x0004c131) aid_height_set_list_ParamLimits

0xad6a,	// (0x0004c142) aid_size_parent_ParamLimits

0x9455,	// (0x0004a82d) list_highlight_pane_cp2_ParamLimits

0x8ff4,	// (0x0004a3cc) set_content_pane_g1_ParamLimits

0x7aa7,	// (0x00048e7f) list_single_image_pane_ParamLimits

0x7aa7,	// (0x00048e7f) list_single_image_pane

0xcb65,	// (0x0004df3d) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0004df3d) aid_size_cell_image

0xcb72,	// (0x0004df4a) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0004df4a) grid_single_image_pane

0x0fa6,	// (0x0004237e) list_single_image_pane_g1_ParamLimits

0x0fa6,	// (0x0004237e) list_single_image_pane_g1

0x0fb2,	// (0x0004238a) list_single_image_pane_g2_ParamLimits

0x0fb2,	// (0x0004238a) list_single_image_pane_g2

0x0001,

0xfc16,	// (0x00050fee) list_single_image_pane_g_ParamLimits

0xfc16,	// (0x00050fee) list_single_image_pane_g

0xcb80,	// (0x0004df58) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0004df58) list_single_image_pane_t1

0xcb96,	// (0x0004df6e) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0004df6e) cell_image_list_pane

0xcbae,	// (0x0004df86) cell_image_list_pane_g1

0xcbb7,	// (0x0004df8f) cell_image_list_pane_g2

0x0001,

0xfc1b,	// (0x00050ff3) cell_image_list_pane_g

0xcbc0,	// (0x0004df98) aid_size_cell_tb_trans_pane

0x0f98,	// (0x00042370) bg_tb_trans_pane

0xcbd2,	// (0x0004dfaa) grid_tb_trans_pane

0x998d,	// (0x0004ad65) bg_tb_trans_pane_g1

0x9995,	// (0x0004ad6d) bg_tb_trans_pane_g2

0x999d,	// (0x0004ad75) bg_tb_trans_pane_g3

0x99a5,	// (0x0004ad7d) bg_tb_trans_pane_g4

0x99ad,	// (0x0004ad85) bg_tb_trans_pane_g5

0x99c5,	// (0x0004ad9d) bg_tb_trans_pane_g6

0x99cd,	// (0x0004ada5) bg_tb_trans_pane_g7

0x99b5,	// (0x0004ad8d) bg_tb_trans_pane_g8

0x99bd,	// (0x0004ad95) bg_tb_trans_pane_g9

0x0008,

0xfc20,	// (0x00050ff8) bg_tb_trans_pane_g

0xcbe6,	// (0x0004dfbe) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0004dfbe) cell_toolbar_trans_pane

0xbfc1,	// (0x0004d399) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0004cfd1) list_form2_midp_pane_t1

0xbc07,	// (0x0004cfdf) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x00050ea1) list_form2_midp_pane_t

0xbc15,	// (0x0004cfed) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0004d1b4) form2_midp_wait_pane_g1

0xbde5,	// (0x0004d1bd) form2_midp_wait_pane_g2

0xbdee,	// (0x0004d1c6) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x00050eb6) form2_midp_wait_pane_g

0x0956,	// (0x00041d2e) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0004d1ff) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0004d20e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7a60,	// (0x00048e38) list_single_2graphic_im_pane_ParamLimits

0x7a60,	// (0x00048e38) list_single_2graphic_im_pane

0xcc0c,	// (0x0004dfe4) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0004dfe4) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0004dff5) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0004dff5) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0004e001) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0004e001) list_single_2graphic_im_pane_g3

0x0003,

0xfc33,	// (0x0005100b) list_single_2graphic_im_pane_g_ParamLimits

0xfc33,	// (0x0005100b) list_single_2graphic_im_pane_g

0xcc49,	// (0x0004e021) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0004e021) list_single_2graphic_im_pane_t1

0xc691,	// (0x0004da69) list_single_graphic_2heading_pane_fp_ParamLimits

0xc691,	// (0x0004da69) list_single_graphic_2heading_pane_fp

0x5ce8,	// (0x000470c0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5ce8,	// (0x000470c0) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0004da82) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da82) list_single_graphic_2heading_pane_fp_g2

0x7edb,	// (0x000492b3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7edb,	// (0x000492b3) list_single_graphic_2heading_pane_fp_g3

0x7ee7,	// (0x000492bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7ee7,	// (0x000492bf) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0004da8e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da8e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f39) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f39) list_single_graphic_2heading_pane_fp_g

0x5e51,	// (0x00047229) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5e51,	// (0x00047229) list_single_graphic_2heading_pane_fp_t1

0x5d20,	// (0x000470f8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5d20,	// (0x000470f8) list_single_graphic_2heading_pane_fp_t2

0x5e67,	// (0x0004723f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5e67,	// (0x0004723f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3c,	// (0x00051014) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3c,	// (0x00051014) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0004d42a) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0004d42a) fep_hwr_write_pane_g5

0xc05e,	// (0x0004d436) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0004d436) fep_hwr_write_pane_g6

0xc940,	// (0x0004dd18) eswt_shell_pane_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0004dd49) heading_pane_cp70

0xca72,	// (0x0004de4a) popup_eswt_tasktip_window_t1_ParamLimits

0x94e8,	// (0x0004a8c0) aid_touch_tab_arrow_left

0x94f4,	// (0x0004a8cc) aid_touch_tab_arrow_right

0x63ab,	// (0x00047783) title_pane_g3_ParamLimits

0x63ab,	// (0x00047783) title_pane_g3

0x0f57,	// (0x0004232f) set_value_pane_g1

0x75df,	// (0x000489b7) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0004df98) aid_size_cell_tb_trans_pane_ParamLimits

0x0f98,	// (0x00042370) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0004dfaa) grid_tb_trans_pane_ParamLimits

0x0a89,	// (0x00041e61) cont_note_pane_ParamLimits

0x0a89,	// (0x00041e61) cont_note_pane

0x0d13,	// (0x000420eb) cont_snote2_single_text_pane_ParamLimits

0x0d13,	// (0x000420eb) cont_snote2_single_text_pane

0x0d13,	// (0x000420eb) cont_snote2_single_graphic_pane_ParamLimits

0x0d13,	// (0x000420eb) cont_snote2_single_graphic_pane

0x9ff3,	// (0x0004b3cb) cont_note_wait_pane_ParamLimits

0x9ff3,	// (0x0004b3cb) cont_note_wait_pane

0x9ff3,	// (0x0004b3cb) cont_note_image_pane_ParamLimits

0x9ff3,	// (0x0004b3cb) cont_note_image_pane

0xcc7a,	// (0x0004e052) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0004e052) popup_note2_window_g1

0xccab,	// (0x0004e083) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0004e083) popup_note2_window_t1

0xccf0,	// (0x0004e0c8) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0004e0c8) popup_note2_window_t2

0xcd35,	// (0x0004e10d) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0004e10d) popup_note2_window_t3

0xcd7a,	// (0x0004e152) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0004e152) popup_note2_window_t4

0x0b0d,	// (0x00041ee5) popup_note2_window_t5_ParamLimits

0x0b0d,	// (0x00041ee5) popup_note2_window_t5

0x0004,

0xfc48,	// (0x00051020) popup_note2_window_t_ParamLimits

0xfc48,	// (0x00051020) popup_note2_window_t

0xcda9,	// (0x0004e181) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0004e181) popup_note2_image_window_g1

0xcdb5,	// (0x0004e18d) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0004e18d) popup_note2_image_window_g2

0x0001,

0xfc53,	// (0x0005102b) popup_note2_image_window_g_ParamLimits

0xfc53,	// (0x0005102b) popup_note2_image_window_g

0xcdc7,	// (0x0004e19f) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0004e19f) popup_note2_image_window_t1

0xcddf,	// (0x0004e1b7) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0004e1b7) popup_note2_image_window_t2

0xcdf7,	// (0x0004e1cf) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0004e1cf) popup_note2_image_window_t3

0x0002,

0xfc58,	// (0x00051030) popup_note2_image_window_t_ParamLimits

0xfc58,	// (0x00051030) popup_note2_image_window_t

0xa001,	// (0x0004b3d9) popup_note2_wait_window_g1_ParamLimits

0xa001,	// (0x0004b3d9) popup_note2_wait_window_g1

0xce13,	// (0x0004e1eb) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0004e1eb) popup_note2_wait_window_g2

0xa019,	// (0x0004b3f1) popup_note2_wait_window_g3_ParamLimits

0xa019,	// (0x0004b3f1) popup_note2_wait_window_g3

0x0002,

0xfc5f,	// (0x00051037) popup_note2_wait_window_g_ParamLimits

0xfc5f,	// (0x00051037) popup_note2_wait_window_g

0xce1f,	// (0x0004e1f7) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0004e1f7) popup_note2_wait_window_t1

0xce3d,	// (0x0004e215) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0004e215) popup_note2_wait_window_t2

0xce5b,	// (0x0004e233) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0004e233) popup_note2_wait_window_t3

0xce6d,	// (0x0004e245) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0004e245) popup_note2_wait_window_t4

0x0003,

0xfc66,	// (0x0005103e) popup_note2_wait_window_t_ParamLimits

0xfc66,	// (0x0005103e) popup_note2_wait_window_t

0xce7f,	// (0x0004e257) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0004e257) wait_bar2_pane

0xce97,	// (0x0004e26f) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0004e26f) popup_snote2_single_text_window_g1

0xcebf,	// (0x0004e297) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0004e297) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0004e2e3) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0004e2e3) popup_snote2_single_text_window_t2

0xcf57,	// (0x0004e32f) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0004e32f) popup_snote2_single_text_window_t3

0xcf98,	// (0x0004e370) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0004e370) popup_snote2_single_text_window_t4

0xcfce,	// (0x0004e3a6) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0004e3a6) popup_snote2_single_text_window_t5

0x0004,

0xfc6f,	// (0x00051047) popup_snote2_single_text_window_t_ParamLimits

0xfc6f,	// (0x00051047) popup_snote2_single_text_window_t

0xcff9,	// (0x0004e3d1) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0004e3d1) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0004e3f9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0004e3f9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7a,	// (0x00051052) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7a,	// (0x00051052) popup_snote2_single_graphic_window_g

0xd049,	// (0x0004e421) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0004e421) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0004e46d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0004e46d) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0004e32f) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0004e32f) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0004e370) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0004e370) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0004e3a6) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0004e3a6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7f,	// (0x00051057) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7f,	// (0x00051057) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0004ce9d) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0004ce9d) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x00050e77) clock_nsta_pane_cp2_t

0x5612,	// (0x000469ea) form_field_data_wide_pane_g1_ParamLimits

0x0fa6,	// (0x0004237e) form_field_data_wide_pane_g2_ParamLimits

0x0fa6,	// (0x0004237e) form_field_data_wide_pane_g2

0x0fb2,	// (0x0004238a) form_field_data_wide_pane_g3_ParamLimits

0x0fb2,	// (0x0004238a) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050a33) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050a33) form_field_data_wide_pane_g

0xb9a0,	// (0x0004cd78) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0004cd78) grid_touch_3_pane

0xd0e1,	// (0x0004e4b9) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0004e4b9) cell_touch_3_pane

0xbfc1,	// (0x0004d399) cell_touch_3_pane_g1

0xbfc1,	// (0x0004d399) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x00050efc) cell_touch_3_pane_g

0x0b65,	// (0x00041f3d) cont_query_data_pane

0x0b6d,	// (0x00041f45) cont_query_data_pane_cp1

0xd114,	// (0x0004e4ec) button_value_adjust_pane_cp7

0xd11c,	// (0x0004e4f4) query_popup_pane_cp3

0x44cc,	// (0x000458a4) bg_popup_sub_pane_cp22_ParamLimits

0x6c62,	// (0x0004803a) navi_navi_volume_pane_cp2

0x6c7d,	// (0x00048055) popup_side_volume_key_window_g2

0x6c8c,	// (0x00048064) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00050ac9) popup_side_volume_key_window_g

0x6ca9,	// (0x00048081) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00050ad0) popup_side_volume_key_window_t

0x8ec6,	// (0x0004a29e) popup_side_volume_key_window_ParamLimits

0x5230,	// (0x00046608) list_double_graphic_pane_g4_ParamLimits

0x5230,	// (0x00046608) list_double_graphic_pane_g4

0x7a8f,	// (0x00048e67) list_single_2heading_msg_pane_ParamLimits

0x7a8f,	// (0x00048e67) list_single_2heading_msg_pane

0x807b,	// (0x00049453) list_single_2heading_msg_pane_g1_ParamLimits

0x807b,	// (0x00049453) list_single_2heading_msg_pane_g1

0x8087,	// (0x0004945f) list_single_2heading_msg_pane_g2_ParamLimits

0x8087,	// (0x0004945f) list_single_2heading_msg_pane_g2

0x8093,	// (0x0004946b) list_single_2heading_msg_pane_g3_ParamLimits

0x8093,	// (0x0004946b) list_single_2heading_msg_pane_g3

0x809f,	// (0x00049477) list_single_2heading_msg_pane_g4_ParamLimits

0x809f,	// (0x00049477) list_single_2heading_msg_pane_g4

0x0003,

0xfc8a,	// (0x00051062) list_single_2heading_msg_pane_g_ParamLimits

0xfc8a,	// (0x00051062) list_single_2heading_msg_pane_g

0x5e87,	// (0x0004725f) list_single_2heading_msg_pane_t1_ParamLimits

0x5e87,	// (0x0004725f) list_single_2heading_msg_pane_t1

0x5eaf,	// (0x00047287) list_single_2heading_msg_pane_t2_ParamLimits

0x5eaf,	// (0x00047287) list_single_2heading_msg_pane_t2

0x5ede,	// (0x000472b6) list_single_2heading_msg_pane_t3_ParamLimits

0x5ede,	// (0x000472b6) list_single_2heading_msg_pane_t3

0x5f17,	// (0x000472ef) list_single_2heading_msg_pane_t4_ParamLimits

0x5f17,	// (0x000472ef) list_single_2heading_msg_pane_t4

0x0003,

0xfc93,	// (0x0005106b) list_single_2heading_msg_pane_t_ParamLimits

0xfc93,	// (0x0005106b) list_single_2heading_msg_pane_t

0x0904,	// (0x00041cdc) title_pane_g4_ParamLimits

0x0904,	// (0x00041cdc) title_pane_g4

0x68b1,	// (0x00047c89) title_pane_stacon_g3_ParamLimits

0x68b1,	// (0x00047c89) title_pane_stacon_g3

0xcc3d,	// (0x0004e015) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0004e015) list_single_2graphic_im_pane_g4

0xaa63,	// (0x0004be3b) popup_side_volume_key_window_cp

0xb2b0,	// (0x0004c688) main_idle_act2_pane_t1

0x76fb,	// (0x00048ad3) toolbar_button_pane_g10

0x6708,	// (0x00047ae0) popup_toolbar_window_cp1

0xbab6,	// (0x0004ce8e) clock_nsta_pane_cp_t1

0xbab6,	// (0x0004ce8e) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x00050e72) clock_nsta_pane_cp_t

0x6c62,	// (0x0004803a) navi_navi_volume_pane_cp2_ParamLimits

0x6c71,	// (0x00048049) popup_side_volume_key_window_g1_ParamLimits

0x6c7d,	// (0x00048055) popup_side_volume_key_window_g2_ParamLimits

0x6c8c,	// (0x00048064) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00050ac9) popup_side_volume_key_window_g_ParamLimits

0x7c75,	// (0x0004904d) fep_hwr_aid_pane

0x23ae,	// (0x00043786) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0004d3fa) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0004d40c) fep_hwr_top_pane_g2_ParamLimits

0x7d30,	// (0x00049108) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x00050ec7) fep_hwr_top_pane_g_ParamLimits

0x7d45,	// (0x0004911d) fep_hwr_top_text_pane_ParamLimits

0xa818,	// (0x0004bbf0) aid_touch_tab_arrow_arrow_2

0xa821,	// (0x0004bbf9) aid_touch_tab_arrow_left_2

0x7c89,	// (0x00049061) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7cc0,	// (0x00049098) fep_hwr_prediction_pane

0xc18a,	// (0x0004d562) fep_vkb_prediction_pane

0xc290,	// (0x0004d668) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0004d668) fep_vkb_side_pane_g3

0xc23c,	// (0x0004d614) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc70a,	// (0x0004dae2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x0004daef) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x00050f71) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd143,	// (0x0004e51b) fep_hwr_prediction_pane_g1

0x80b7,	// (0x0004948f) fep_hwr_prediction_pane_g2

0x80bf,	// (0x00049497) fep_hwr_prediction_pane_g3

0x80c7,	// (0x0004949f) fep_hwr_prediction_pane_g4

0x0003,

0xfc9c,	// (0x00051074) fep_hwr_prediction_pane_g

0xd143,	// (0x0004e51b) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0004e525) fep_vkb_prediction_pane_g2

0xd155,	// (0x0004e52d) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0004e535) fep_vkb_prediction_pane_g4

0x0003,

0xfca5,	// (0x0005107d) fep_vkb_prediction_pane_g

0x7a08,	// (0x00048de0) slider_set_pane_g3

0x7a1c,	// (0x00048df4) slider_set_pane_g4

0x7a34,	// (0x00048e0c) slider_set_pane_g5

0x7a08,	// (0x00048de0) slider_set_pane_g6

0x7a4a,	// (0x00048e22) slider_set_pane_g7

0xaee9,	// (0x0004c2c1) slider_form_pane_g3

0xaef2,	// (0x0004c2ca) slider_form_pane_g4

0xaefa,	// (0x0004c2d2) slider_form_pane_g5

0xaee9,	// (0x0004c2c1) slider_form_pane_g6

0xaf02,	// (0x0004c2da) slider_form_pane_g7

0xb574,	// (0x0004c94c) slider_set_pane_vc_g3

0xb57d,	// (0x0004c955) slider_set_pane_vc_g4

0xb586,	// (0x0004c95e) slider_set_pane_vc_g5

0xb574,	// (0x0004c94c) slider_set_pane_vc_g6

0xb58f,	// (0x0004c967) slider_set_pane_vc_g7

0xb765,	// (0x0004cb3d) slider_form_pane_vc_g1

0xb76e,	// (0x0004cb46) slider_form_pane_vc_g2

0xb777,	// (0x0004cb4f) slider_form_pane_vc_g3

0xb765,	// (0x0004cb3d) slider_form_pane_vc_g4

0xb780,	// (0x0004cb58) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x00050e44) slider_form_pane_vc_g

0x08e6,	// (0x00041cbe) main_idle_act3_pane

0xd165,	// (0x0004e53d) ai3_links_pane

0xd16e,	// (0x0004e546) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0004e546) popup_ai3_data_window

0x08e6,	// (0x00041cbe) grid_ai3_links_pane

0xd18c,	// (0x0004e564) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0004e564) cell_ai3_links_pane

0xd1a6,	// (0x0004e57e) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0004e58b) cell_ai3_links_pane_g1

0x08e6,	// (0x00041cbe) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0004e5b0) heading_ai3_data_pane

0xd1e0,	// (0x0004e5b8) list_ai3_gene_pane

0xd1ec,	// (0x0004e5c4) popup_ai3_data_window_g1

0xd1f4,	// (0x0004e5cc) heading_ai3_data_pane_g1

0xd1fc,	// (0x0004e5d4) heading_ai3_data_pane_t1

0xd20a,	// (0x0004e5e2) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0004e5e2) list_double_ai3_gene_pane

0xd217,	// (0x0004e5ef) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0004e5ef) list_single_ai3_gene_pane

0xbf86,	// (0x0004d35e) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0004d35e) list_highlight_pane_cp7

0xd224,	// (0x0004e5fc) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0004e5fc) list_single_a13_gene_pane_t1

0xd23b,	// (0x0004e613) list_single_ai3_gene_pane_g1

0xd244,	// (0x0004e61c) list_single_ai3_gene_pane_g2

0x0001,

0xfcae,	// (0x00051086) list_single_ai3_gene_pane_g

0xd24c,	// (0x0004e624) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0004e624) list_double_ai3_gene_pane_g1

0xd258,	// (0x0004e630) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0004e630) list_double_ai3_gene_pane_t1

0xd274,	// (0x0004e64c) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0004e64c) list_double_ai3_gene_pane_t2

0xd289,	// (0x0004e661) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0004e661) list_double_ai3_gene_pane_t3

0x0002,

0xfcb3,	// (0x0005108b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb3,	// (0x0005108b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5e7d,	// (0x00047255) aid_size_min_col_2

0xd12d,	// (0x0004e505) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0004e505) aid_size_min_msg

0xc39c,	// (0x0004d774) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0004d774) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x00050ef7) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x00050ef7) fep_vkb_top_text_pane_g

0x08e6,	// (0x00041cbe) main_hc_apps_shell_pane

0xd2a6,	// (0x0004e67e) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0004e67e) grid_hc_apps_pane

0xd2b8,	// (0x0004e690) list_hc_apps_pane

0xd2c0,	// (0x0004e698) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0004e698) scroll_pane_cp37

0xd2cc,	// (0x0004e6a4) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0004e6a4) cell_hc_apps_pane

0xd380,	// (0x0004e758) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0004e758) cell_hc_apps_pane_g1

0xd3ac,	// (0x0004e784) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0004e784) cell_hc_apps_pane_g2

0xd3c8,	// (0x0004e7a0) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0004e7a0) cell_hc_apps_pane_g3

0x0002,

0xfcba,	// (0x00051092) cell_hc_apps_pane_g_ParamLimits

0xfcba,	// (0x00051092) cell_hc_apps_pane_g

0xd3ea,	// (0x0004e7c2) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0004e7c2) cell_hc_apps_pane_t1

0x0a89,	// (0x00041e61) grid_highlight_pane_cp10_ParamLimits

0x0a89,	// (0x00041e61) grid_highlight_pane_cp10

0xd42a,	// (0x0004e802) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0004e802) list_single_hc_apps_pane

0xd469,	// (0x0004e841) list_single_hc_apps_pane_g1

0x80cf,	// (0x000494a7) list_single_hc_apps_pane_g2

0x0001,

0xfcc1,	// (0x00051099) list_single_hc_apps_pane_g

0x80e8,	// (0x000494c0) list_single_hc_apps_pane_g2_copy1

0x5f3c,	// (0x00047314) list_single_hc_apps_pane_t1

0x0956,	// (0x00041d2e) bg_set_opt_pane_cp_ParamLimits

0x645d,	// (0x00047835) setting_slider_pane_t1_ParamLimits

0x6476,	// (0x0004784e) setting_slider_pane_t2_ParamLimits

0x6490,	// (0x00047868) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00050911) setting_slider_pane_t_ParamLimits

0x64a8,	// (0x00047880) slider_set_pane_ParamLimits

0x6f88,	// (0x00048360) control_pane_g5_ParamLimits

0x6f88,	// (0x00048360) control_pane_g5

0xad1c,	// (0x0004c0f4) slider_set_pane_g1_ParamLimits

0x79fc,	// (0x00048dd4) slider_set_pane_g2_ParamLimits

0x7a08,	// (0x00048de0) slider_set_pane_g3_ParamLimits

0x7a1c,	// (0x00048df4) slider_set_pane_g4_ParamLimits

0x7a34,	// (0x00048e0c) slider_set_pane_g5_ParamLimits

0x7a08,	// (0x00048de0) slider_set_pane_g6_ParamLimits

0x7a4a,	// (0x00048e22) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00050d1c) slider_set_pane_g_ParamLimits

0x8f9f,	// (0x0004a377) navi_icon_text_pane_ParamLimits

0x94a7,	// (0x0004a87f) aid_fill_nsta_2_ParamLimits

0x94e8,	// (0x0004a8c0) aid_touch_tab_arrow_left_ParamLimits

0x94f4,	// (0x0004a8cc) aid_touch_tab_arrow_right_ParamLimits

0x9560,	// (0x0004a938) clock_nsta_pane_ParamLimits

0xa7fa,	// (0x0004bbd2) navi_icon_pane_g1_ParamLimits

0xa806,	// (0x0004bbde) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0004cfab) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0004cfb7) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0004e841) list_single_hc_apps_pane_g1_ParamLimits

0x80cf,	// (0x000494a7) list_single_hc_apps_pane_g2_ParamLimits

0xfcc1,	// (0x00051099) list_single_hc_apps_pane_g_ParamLimits

0x80e8,	// (0x000494c0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5f3c,	// (0x00047314) list_single_hc_apps_pane_t1_ParamLimits

0x6291,	// (0x00047669) popup_toolbar2_fixed_window_ParamLimits

0x6291,	// (0x00047669) popup_toolbar2_fixed_window

0x75d5,	// (0x000489ad) popup_toolbar2_float_window

0x08e6,	// (0x00041cbe) bg_popup_sub_pane_cp27

0xd482,	// (0x0004e85a) grid_toolbar2_float_pane

0x08e6,	// (0x00041cbe) bg_popup_sub_pane_cp26

0xd482,	// (0x0004e85a) grid_toolbar2_fixed_pane

0xd48a,	// (0x0004e862) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0004e862) cell_toolbar2_fixed_pane

0xd49a,	// (0x0004e872) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0004e87b) toolbar2_fixed_button_pane

0x998d,	// (0x0004ad65) toolbar2_fixed_button_pane_g1

0x9995,	// (0x0004ad6d) toolbar2_fixed_button_pane_g2

0x999d,	// (0x0004ad75) toolbar2_fixed_button_pane_g3

0x99a5,	// (0x0004ad7d) toolbar2_fixed_button_pane_g4

0x99ad,	// (0x0004ad85) toolbar2_fixed_button_pane_g5

0x99b5,	// (0x0004ad8d) toolbar2_fixed_button_pane_g6

0x99bd,	// (0x0004ad95) toolbar2_fixed_button_pane_g7

0x99c5,	// (0x0004ad9d) toolbar2_fixed_button_pane_g8

0x99cd,	// (0x0004ada5) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00050c1e) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0004e883) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0004e883) cell_toolbar2_float_pane

0xd4bc,	// (0x0004e894) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0004e87b) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0004d4d0) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0004d4d0) fep_vkb_accented_list_pane

0x7ea7,	// (0x0004927f) bg_popup_fep_shadow_pane_g9

0x912e,	// (0x0004a506) bg_popup_fep_shadow_pane_cp3

0x10bb,	// (0x00042493) list_accented_list_pane

0xd4c5,	// (0x0004e89d) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0004e89d) list_single_accented_list_pane

0x912e,	// (0x0004a506) list_highlight_pane_cp10

0xd4d6,	// (0x0004e8ae) list_single_accented_list_pane_t1

0x751b,	// (0x000488f3) popup_slider_window_ParamLimits

0x751b,	// (0x000488f3) popup_slider_window

0xd124,	// (0x0004e4fc) aid_indentation_list_msg

0xd5a6,	// (0x0004e97e) bg_popup_window_pane_cp19

0xd612,	// (0x0004e9ea) popup_slider_window_g1

0xd62e,	// (0x0004ea06) popup_slider_window_g2

0xd64a,	// (0x0004ea22) popup_slider_window_g3

0x0005,

0xfcc6,	// (0x0005109e) popup_slider_window_g

0xd6b0,	// (0x0004ea88) popup_slider_window_t1

0xd724,	// (0x0004eafc) small_volume_slider_vertical_pane

0xbfc1,	// (0x0004d399) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0004d399) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0004eb18) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd8,	// (0x000510b0) small_volume_slider_vertical_pane_g

0x6049,	// (0x00047421) area_side_right_pane_ParamLimits

0x6049,	// (0x00047421) area_side_right_pane

0x8104,	// (0x000494dc) aid_size_side_button_ParamLimits

0x8104,	// (0x000494dc) aid_size_side_button

0x8118,	// (0x000494f0) grid_sctrl_middle_pane_ParamLimits

0x8118,	// (0x000494f0) grid_sctrl_middle_pane

0x8137,	// (0x0004950f) sctrl_sk_bottom_pane

0x8148,	// (0x00049520) sctrl_sk_top_pane

0x815a,	// (0x00049532) aid_touch_sctrl_top

0x0a89,	// (0x00041e61) bg_sctrl_sk_pane_ParamLimits

0x0a89,	// (0x00041e61) bg_sctrl_sk_pane

0x8167,	// (0x0004953f) sctrl_sk_top_pane_g1

0x8174,	// (0x0004954c) sctrl_sk_top_pane_t1

0x815a,	// (0x00049532) aid_touch_sctrl_bottom

0x0a89,	// (0x00041e61) bg_sctrl_sk_pane_cp_ParamLimits

0x0a89,	// (0x00041e61) bg_sctrl_sk_pane_cp

0x818f,	// (0x00049567) sctrl_sk_bottom_pane_g1

0x8174,	// (0x0004954c) sctrl_sk_bottom_pane_t1

0x8198,	// (0x00049570) cell_sctrl_middle_pane_ParamLimits

0x8198,	// (0x00049570) cell_sctrl_middle_pane

0x81b5,	// (0x0004958d) aid_touch_sctrl_middle_ParamLimits

0x81b5,	// (0x0004958d) aid_touch_sctrl_middle

0x0f98,	// (0x00042370) bg_sctrl_middle_pane_ParamLimits

0x0f98,	// (0x00042370) bg_sctrl_middle_pane

0xc23c,	// (0x0004d614) cell_sctrl_middle_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) cell_sctrl_middle_pane_g1

0x81c7,	// (0x0004959f) cell_sctrl_middle_pane_g2_ParamLimits

0x81c7,	// (0x0004959f) cell_sctrl_middle_pane_g2

0x0001,

0xfce4,	// (0x000510bc) cell_sctrl_middle_pane_g_ParamLimits

0xfce4,	// (0x000510bc) cell_sctrl_middle_pane_g

0x998d,	// (0x0004ad65) bg_sctrl_middle_pane_g1

0x9995,	// (0x0004ad6d) bg_sctrl_middle_pane_g2

0x999d,	// (0x0004ad75) bg_sctrl_middle_pane_g3

0x99a5,	// (0x0004ad7d) bg_sctrl_middle_pane_g4

0x99ad,	// (0x0004ad85) bg_sctrl_middle_pane_g5

0x99b5,	// (0x0004ad8d) bg_sctrl_middle_pane_g6

0x99bd,	// (0x0004ad95) bg_sctrl_middle_pane_g7

0x99c5,	// (0x0004ad9d) bg_sctrl_middle_pane_g8

0x0007,

0xfce9,	// (0x000510c1) bg_sctrl_middle_pane_g

0x99cd,	// (0x0004ada5) bg_sctrl_middle_pane_g8_copy1

0x998d,	// (0x0004ad65) bg_sctrl_sk_pane_g1

0x9995,	// (0x0004ad6d) bg_sctrl_sk_pane_g2

0x999d,	// (0x0004ad75) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00050c1e) bg_sctrl_sk_pane_g

0x0ed1,	// (0x000422a9) aid_size_touch_scroll_bar

0x99a5,	// (0x0004ad7d) bg_sctrl_sk_pane_g4

0x99ad,	// (0x0004ad85) bg_sctrl_sk_pane_g5

0x99b5,	// (0x0004ad8d) bg_sctrl_sk_pane_g6

0x99bd,	// (0x0004ad95) bg_sctrl_sk_pane_g7

0x99c5,	// (0x0004ad9d) bg_sctrl_sk_pane_g8

0x99cd,	// (0x0004ada5) bg_sctrl_sk_pane_g9

0x7130,	// (0x00048508) popup_fep_china_hwr2_fs_candidate_window

0x713a,	// (0x00048512) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x713a,	// (0x00048512) popup_fep_china_hwr2_fs_control_window

0xc23c,	// (0x0004d614) sctrl_sk_top_pane_g2

0x0001,

0xfcdf,	// (0x000510b7) sctrl_sk_top_pane_g

0xd749,	// (0x0004eb21) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0004eb21) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0004eb34) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0004eb34) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0004eb4d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0004eb4d) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0004eb5f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0004eb5f) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0004eb6f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0004eb77) aid_fep_china_hwr2_fs_candi_cell

0x08e6,	// (0x00041cbe) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0004eb81) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0004eb8b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0004eb8b) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0004d399) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0004eba3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0004eba3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0004ebb1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0004ebb1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfa,	// (0x000510d2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfa,	// (0x000510d2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0004ebc7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0004ebc7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0004ebdc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0004ebdc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcff,	// (0x000510d7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcff,	// (0x000510d7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0004ebf8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0004ec00) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0004ec08) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x000510dc) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0004ec10) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0004ec10) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0004ec2f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0004ec37) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0004d399) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0004d399) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x00050efc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0004ec3f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9573,	// (0x0004a94b) clock_nsta_pane_cp_24_ParamLimits

0x9573,	// (0x0004a94b) clock_nsta_pane_cp_24

0x95f3,	// (0x0004a9cb) indicator_nsta_pane_cp_24_ParamLimits

0x95f3,	// (0x0004a9cb) indicator_nsta_pane_cp_24

0xa676,	// (0x0004ba4e) heading_pane_g1

0x0001,

0xf8ab,	// (0x00050c83) heading_pane_g

0xb0f7,	// (0x0004c4cf) grid_sct_catagory_button_pane

0xb129,	// (0x0004c501) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0004cff9) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0004cff9) button_value_adjust_pane_cp5

0xbd06,	// (0x0004d0de) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0004ec4d) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0004ec4d) cell_sct_catagory_button_pane

0xbf86,	// (0x0004d35e) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0004d35e) bg_button_pane_cp01

0xbfc1,	// (0x0004d399) cell_sct_catagory_button_pane_g1

0x755c,	// (0x00048934) popup_tb_extension_window

0xd887,	// (0x0004ec5f) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0004ec5f) aid_size_cell_ext

0x0a89,	// (0x00041e61) bg_tb_trans_pane_cp1_ParamLimits

0x0a89,	// (0x00041e61) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0004ec7f) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0004ec7f) grid_tb_ext_pane

0xd8d5,	// (0x0004ecad) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0004ecad) cell_tb_ext_pane

0xd8ec,	// (0x0004ecc4) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0004ecc4) cell_tb_ext_pane_g1

0xd909,	// (0x0004ece1) cell_tb_ext_pane_t1

0x0a89,	// (0x00041e61) list_highlight_pane_cp11_ParamLimits

0x0a89,	// (0x00041e61) list_highlight_pane_cp11

0x62b0,	// (0x00047688) popup_uni_indicator_window_ParamLimits

0x62b0,	// (0x00047688) popup_uni_indicator_window

0x0f98,	// (0x00042370) bg_popup_sub_pane_cp14

0xd924,	// (0x0004ecfc) list_uniindi_pane

0xd930,	// (0x0004ed08) uniindi_top_pane

0x0a89,	// (0x00041e61) bg_uniindi_top_pane

0xd951,	// (0x0004ed29) uniindi_top_pane_g1

0xd967,	// (0x0004ed3f) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x000510e3) uniindi_top_pane_g

0xd991,	// (0x0004ed69) uniindi_top_pane_t1

0xd9bd,	// (0x0004ed95) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0004ed95) list_single_uniindi_pane

0xbfc1,	// (0x0004d399) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0004eda8) list_single_uniindi_pane_g1

0xd9e3,	// (0x0004edbb) list_single_uniindi_pane_t1

0x08e6,	// (0x00041cbe) control_bg_pane

0xda08,	// (0x0004ede0) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0004ede9) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0004edf2) control_bg_pane_g1

0xda23,	// (0x0004edfb) control_bg_pane_g2

0x0001,

0xfd14,	// (0x000510ec) control_bg_pane_g

0xba59,	// (0x0004ce31) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0004ce3f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x00050e60) cell_indicator_nsta_pane_g_ParamLimits

0x5cbe,	// (0x00047096) form2_midp_time_pane_t1_ParamLimits

0x0d13,	// (0x000420eb) main_idle_act4_pane_ParamLimits

0x0d13,	// (0x000420eb) main_idle_act4_pane

0x755c,	// (0x00048934) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0004ec9f) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0004ec9f) tb_ext_find_pane

0xda2c,	// (0x0004ee04) ai_gene_pane_1_cp1

0x9278,	// (0x0004a650) ai_gene_pane_2_cp1

0xda34,	// (0x0004ee0c) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0004ee15) list_single_idle_plugin_notification_pane

0xda46,	// (0x0004ee1e) list_single_idle_plugin_player_pane

0xda4f,	// (0x0004ee27) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0004ee27) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0004ee49) main_idle_act4_pane_t1

0xda83,	// (0x0004ee5b) main_idle_act4_pane_t2

0x0001,

0xfd19,	// (0x000510f1) main_idle_act4_pane_t

0xda95,	// (0x0004ee6d) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0004ee6d) middle_sk_idle_act4_pane

0xdaab,	// (0x0004ee83) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0004ee9d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0004ee9d) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0004eeb1) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0004eeb9) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0004eec1) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0004eec9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1e,	// (0x000510f6) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0004d614) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0004ef2d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0004ef2d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd41,	// (0x00051119) middle_sk_idle_act4_pane_g_ParamLimits

0xfd41,	// (0x00051119) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0004ef39) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0004ef39) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0004ef56) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0004ef56) grid_ai_shortcut_pane

0xdb97,	// (0x0004ef6f) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0004ef6f) list_highlight_pane_cp16

0xdba4,	// (0x0004ef7c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0004ef7c) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0004ef88) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0004ef88) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0004efa2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0004efa2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd46,	// (0x0005111e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd46,	// (0x0005111e) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0004efb5) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0004efb5) cell_ai_shortcut_pane

0xdc00,	// (0x0004efd8) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0004efd8) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0004ee04) ai_gene_pane_1_cp2

0xdc22,	// (0x0004effa) ai_gene_pane_2_cp2

0xdc2a,	// (0x0004f002) list_highlight_pane_cp15

0xdc33,	// (0x0004f00b) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0004f002) list_highlight_pane_cp17

0xdc3b,	// (0x0004f013) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0004f01b) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x0004c736) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4d,	// (0x00051125) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0004f023) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0004f031) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0004f03f) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0004f04d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd52,	// (0x0005112a) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0004f05b) wait_bar_pane_cp15

0xdc8b,	// (0x0004f063) grid_ai_notification_pane

0xb35e,	// (0x0004c736) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0004f06c) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0004f06c) cell_ai_notification_pane

0xdca1,	// (0x0004f079) cell_ai_notification_pane_g1

0xdca9,	// (0x0004f081) cell_ai_notification_pane_t1

0xdcb7,	// (0x0004f08f) tb_ext_find_button_pane

0xdcbf,	// (0x0004f097) tb_ext_find_pane_g1

0xdcc7,	// (0x0004f09f) tb_ext_find_pane_t1

0x43f2,	// (0x000457ca) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0004f0ad) tb_ext_find_button_pane_g2

0x0001,

0xfd5b,	// (0x00051133) tb_ext_find_button_pane_g

0xda71,	// (0x0004ee49) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0004ee5b) main_idle_act4_pane_t2_ParamLimits

0xfd19,	// (0x000510f1) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0004ee83) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0004ee91) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0004ee91) sat_plugin_idle_act4_pane

0xdcde,	// (0x0004f0b6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0004f0b6) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0004f0c9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0004f0c9) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0004f0dc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0004f0dc) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0004f0ef) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0004f0ef) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd60,	// (0x00051138) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd60,	// (0x00051138) sat_plugin_idle_act4_pane_t

0x61e1,	// (0x000475b9) popup_battery_window_ParamLimits

0x61e1,	// (0x000475b9) popup_battery_window

0x0a89,	// (0x00041e61) bg_popup_sub_pane_cp25_ParamLimits

0x0a89,	// (0x00041e61) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0004f102) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0004f102) popup_battery_window_g1

0xdd36,	// (0x0004f10e) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0004f10e) popup_battery_window_t1

0xdd48,	// (0x0004f120) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0004f120) popup_battery_window_t2

0x0001,

0xfd69,	// (0x00051141) popup_battery_window_t_ParamLimits

0xfd69,	// (0x00051141) popup_battery_window_t

0x9142,	// (0x0004a51a) midp_canvas_pane_ParamLimits

0x91ba,	// (0x0004a592) midp_keypad_pane_ParamLimits

0x91ba,	// (0x0004a592) midp_keypad_pane

0x9455,	// (0x0004a82d) main_midp_pane_ParamLimits

0xbad4,	// (0x0004ceac) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0004f13d) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0004f13d) aid_size_cell_midp_keypad

0xdd7f,	// (0x0004f157) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0004f157) midp_keyp_game_grid_pane

0xdd9f,	// (0x0004f177) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0004f177) midp_keyp_rocker_pane

0xddce,	// (0x0004f1a6) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0004f1a6) midp_keyp_sk_left_pane

0xde2a,	// (0x0004f202) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0004f202) midp_keyp_sk_right_pane

0x08e6,	// (0x00041cbe) bg_button_pane_cp03

0xde86,	// (0x0004f25e) midp_keyp_sk_left_pane_g1

0x08e6,	// (0x00041cbe) bg_button_pane_cp04

0xde86,	// (0x0004f25e) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0004d399) midp_keyp_rocker_pane_g1

0xde8e,	// (0x0004f266) keyp_game_cell_pane_ParamLimits

0xde8e,	// (0x0004f266) keyp_game_cell_pane

0x08e6,	// (0x00041cbe) bg_button_pane_cp02

0xdea1,	// (0x0004f279) keyp_game_cell_pane_g1

0x622b,	// (0x00047603) popup_fep_vkb2_window_ParamLimits

0x622b,	// (0x00047603) popup_fep_vkb2_window

0x81e5,	// (0x000495bd) aid_size_cell_vkb2_ParamLimits

0x81e5,	// (0x000495bd) aid_size_cell_vkb2

0x8231,	// (0x00049609) popup_fep_vkb2_window_g1_ParamLimits

0x8231,	// (0x00049609) popup_fep_vkb2_window_g1

0x8279,	// (0x00049651) vkb2_area_bottom_pane_ParamLimits

0x8279,	// (0x00049651) vkb2_area_bottom_pane

0x82cd,	// (0x000496a5) vkb2_area_keypad_pane_ParamLimits

0x82cd,	// (0x000496a5) vkb2_area_keypad_pane

0x8313,	// (0x000496eb) vkb2_area_top_pane_ParamLimits

0x8313,	// (0x000496eb) vkb2_area_top_pane

0x8393,	// (0x0004976b) vkb2_top_entry_pane_ParamLimits

0x8393,	// (0x0004976b) vkb2_top_entry_pane

0x83bd,	// (0x00049795) vkb2_top_grid_left_pane_ParamLimits

0x83bd,	// (0x00049795) vkb2_top_grid_left_pane

0x83dc,	// (0x000497b4) vkb2_top_grid_right_pane_ParamLimits

0x83dc,	// (0x000497b4) vkb2_top_grid_right_pane

0x83fb,	// (0x000497d3) vkb2_cell_keypad_pane_ParamLimits

0x83fb,	// (0x000497d3) vkb2_cell_keypad_pane

0x84cc,	// (0x000498a4) vkb2_area_bottom_grid_pane_ParamLimits

0x84cc,	// (0x000498a4) vkb2_area_bottom_grid_pane

0x84f2,	// (0x000498ca) vkb2_area_bottom_pane_g1_ParamLimits

0x84f2,	// (0x000498ca) vkb2_area_bottom_pane_g1

0x8516,	// (0x000498ee) vkb2_area_bottom_pane_g2_ParamLimits

0x8516,	// (0x000498ee) vkb2_area_bottom_pane_g2

0x8544,	// (0x0004991c) vkb2_area_bottom_pane_g3_ParamLimits

0x8544,	// (0x0004991c) vkb2_area_bottom_pane_g3

0x0002,

0xfd6e,	// (0x00051146) vkb2_area_bottom_pane_g_ParamLimits

0xfd6e,	// (0x00051146) vkb2_area_bottom_pane_g

0x85a5,	// (0x0004997d) vkb2_top_cell_left_pane_ParamLimits

0x85a5,	// (0x0004997d) vkb2_top_cell_left_pane

0xdeb2,	// (0x0004f28a) vkb2_top_entry_pane_g1_ParamLimits

0xdeb2,	// (0x0004f28a) vkb2_top_entry_pane_g1

0xdec0,	// (0x0004f298) vkb2_top_entry_pane_t1_ParamLimits

0xdec0,	// (0x0004f298) vkb2_top_entry_pane_t1

0xdef2,	// (0x0004f2ca) vkb2_top_entry_pane_t2_ParamLimits

0xdef2,	// (0x0004f2ca) vkb2_top_entry_pane_t2

0xdf24,	// (0x0004f2fc) vkb2_top_entry_pane_t3_ParamLimits

0xdf24,	// (0x0004f2fc) vkb2_top_entry_pane_t3

0x0002,

0xfd75,	// (0x0005114d) vkb2_top_entry_pane_t_ParamLimits

0xfd75,	// (0x0005114d) vkb2_top_entry_pane_t

0x85f2,	// (0x000499ca) vkb2_top_grid_right_pane_g1_ParamLimits

0x85f2,	// (0x000499ca) vkb2_top_grid_right_pane_g1

0x8608,	// (0x000499e0) vkb2_top_grid_right_pane_g2_ParamLimits

0x8608,	// (0x000499e0) vkb2_top_grid_right_pane_g2

0x8620,	// (0x000499f8) vkb2_top_grid_right_pane_g3_ParamLimits

0x8620,	// (0x000499f8) vkb2_top_grid_right_pane_g3

0x8638,	// (0x00049a10) vkb2_top_grid_right_pane_g4_ParamLimits

0x8638,	// (0x00049a10) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7c,	// (0x00051154) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7c,	// (0x00051154) vkb2_top_grid_right_pane_g

0x864e,	// (0x00049a26) vkb2_top_cell_left_pane_g1

0x8665,	// (0x00049a3d) vkb2_cell_keypad_pane_g1_ParamLimits

0x8665,	// (0x00049a3d) vkb2_cell_keypad_pane_g1

0xdf48,	// (0x0004f320) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf48,	// (0x0004f320) vkb2_cell_keypad_pane_t1

0x8673,	// (0x00049a4b) vkb2_cell_bottom_grid_pane_ParamLimits

0x8673,	// (0x00049a4b) vkb2_cell_bottom_grid_pane

0x86ac,	// (0x00049a84) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0004eed1) aid_call2_pane_cp02

0xdb01,	// (0x0004eed9) aid_call_pane_cp02

0xdb09,	// (0x0004eee1) clock_digital_number_pane_cp10

0xdb11,	// (0x0004eee9) clock_digital_number_pane_cp11

0xdb19,	// (0x0004eef1) clock_digital_number_pane_cp12

0xdb21,	// (0x0004eef9) clock_digital_number_pane_cp13

0xdb29,	// (0x0004ef01) clock_digital_separator_pane_cp10

0x43f2,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g1

0x43f2,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0004ef09) popup_clock_digital_analogue_window_cp2_g3

0x43f2,	// (0x000457ca) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0004ef09) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd31,	// (0x00051109) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0004ef11) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0004ef1f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3c,	// (0x00051114) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0004d399) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0004d399) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x00050efc) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0004d399) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0004d399) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x00050efc) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0004ed4b) uniindi_top_pane_g3

0xd984,	// (0x0004ed5c) uniindi_top_pane_g4

0x8486,	// (0x0004985e) vkb2_row_keypad_pane_ParamLimits

0x8486,	// (0x0004985e) vkb2_row_keypad_pane

0x86c8,	// (0x00049aa0) vkb2_cell_t_keypad_pane_ParamLimits

0x86c8,	// (0x00049aa0) vkb2_cell_t_keypad_pane

0x86d8,	// (0x00049ab0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x86d8,	// (0x00049ab0) vkb2_cell_t_keypad_pane_cp08

0x86ed,	// (0x00049ac5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86ed,	// (0x00049ac5) vkb2_cell_t_keypad_pane_cp09

0x8701,	// (0x00049ad9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8701,	// (0x00049ad9) vkb2_cell_t_keypad_pane_cp01

0x8712,	// (0x00049aea) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8712,	// (0x00049aea) vkb2_cell_t_keypad_pane_cp02

0x8723,	// (0x00049afb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8723,	// (0x00049afb) vkb2_cell_t_keypad_pane_cp03

0x8734,	// (0x00049b0c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8734,	// (0x00049b0c) vkb2_cell_t_keypad_pane_cp04

0x8745,	// (0x00049b1d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8745,	// (0x00049b1d) vkb2_cell_t_keypad_pane_cp05

0x8756,	// (0x00049b2e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8756,	// (0x00049b2e) vkb2_cell_t_keypad_pane_cp06

0x8769,	// (0x00049b41) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8769,	// (0x00049b41) vkb2_cell_t_keypad_pane_cp07

0x877e,	// (0x00049b56) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x877e,	// (0x00049b56) vkb2_cell_t_keypad_pane_cp10

0xc23c,	// (0x0004d614) vkb2_cell_t_keypad_pane_g1

0xdf5f,	// (0x0004f337) vkb2_cell_t_keypad_pane_t1

0x08e6,	// (0x00041cbe) popup_grid_graphic2_window

0xdf71,	// (0x0004f349) aid_size_cell_graphic2_ParamLimits

0xdf71,	// (0x0004f349) aid_size_cell_graphic2

0xdfa9,	// (0x0004f381) bg_popup_window_pane_cp21_ParamLimits

0xdfa9,	// (0x0004f381) bg_popup_window_pane_cp21

0xdfb7,	// (0x0004f38f) graphic2_pages_pane_ParamLimits

0xdfb7,	// (0x0004f38f) graphic2_pages_pane

0xdffd,	// (0x0004f3d5) grid_graphic2_control_pane_ParamLimits

0xdffd,	// (0x0004f3d5) grid_graphic2_control_pane

0xe03b,	// (0x0004f413) grid_graphic2_pane_ParamLimits

0xe03b,	// (0x0004f413) grid_graphic2_pane

0xe0b1,	// (0x0004f489) cell_graphic2_pane

0x08e6,	// (0x00041cbe) main_comp_mode_pane

0xd1e0,	// (0x0004e5b8) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0004e97e) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0004e98a) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0004e98a) bg_touch_area_indi_pane

0xd5c8,	// (0x0004e9a0) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0004e9a0) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0004e9b6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0004e9b6) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0004e9d0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0004e9d0) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0004e9ea) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0004ea06) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0004ea22) popup_slider_window_g3_ParamLimits

0xfcc6,	// (0x0005109e) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0004ea88) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0004eafc) small_volume_slider_vertical_pane_ParamLimits

0xe0b1,	// (0x0004f489) cell_graphic2_pane_ParamLimits

0xe105,	// (0x0004f4dd) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x0004f4dd) bg_button_pane_cp10

0xe11a,	// (0x0004f4f2) bg_button_pane_cp11_ParamLimits

0xe11a,	// (0x0004f4f2) bg_button_pane_cp11

0xe12f,	// (0x0004f507) graphic2_pages_pane_g1_ParamLimits

0xe12f,	// (0x0004f507) graphic2_pages_pane_g1

0xe14a,	// (0x0004f522) graphic2_pages_pane_g2_ParamLimits

0xe14a,	// (0x0004f522) graphic2_pages_pane_g2

0x0001,

0xfd8a,	// (0x00051162) graphic2_pages_pane_g_ParamLimits

0xfd8a,	// (0x00051162) graphic2_pages_pane_g

0xe162,	// (0x0004f53a) graphic2_pages_pane_t1_ParamLimits

0xe162,	// (0x0004f53a) graphic2_pages_pane_t1

0xe178,	// (0x0004f550) cell_graphic2_control_pane_ParamLimits

0xe178,	// (0x0004f550) cell_graphic2_control_pane

0xe198,	// (0x0004f570) cell_graphic2_pane_g1_ParamLimits

0xe198,	// (0x0004f570) cell_graphic2_pane_g1

0xe1a5,	// (0x0004f57d) cell_graphic2_pane_g2_ParamLimits

0xe1a5,	// (0x0004f57d) cell_graphic2_pane_g2

0xe1b2,	// (0x0004f58a) cell_graphic2_pane_g3_ParamLimits

0xe1b2,	// (0x0004f58a) cell_graphic2_pane_g3

0xe1bf,	// (0x0004f597) cell_graphic2_pane_g4_ParamLimits

0xe1bf,	// (0x0004f597) cell_graphic2_pane_g4

0xe1cc,	// (0x0004f5a4) cell_graphic2_pane_g5_ParamLimits

0xe1cc,	// (0x0004f5a4) cell_graphic2_pane_g5

0x0004,

0xfd8f,	// (0x00051167) cell_graphic2_pane_g_ParamLimits

0xfd8f,	// (0x00051167) cell_graphic2_pane_g

0xe1e4,	// (0x0004f5bc) cell_graphic2_pane_t1_ParamLimits

0xe1e4,	// (0x0004f5bc) cell_graphic2_pane_t1

0x9a01,	// (0x0004add9) grid_highlight_pane_cp11_ParamLimits

0x9a01,	// (0x0004add9) grid_highlight_pane_cp11

0x0a89,	// (0x00041e61) bg_button_pane_cp05

0xe21a,	// (0x0004f5f2) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0004d399) bg_touch_area_indi_pane_g1

0xe242,	// (0x0004f61a) aid_cmod_rocker_key_size

0xe24c,	// (0x0004f624) aid_cmode_itu_key_size

0xe256,	// (0x0004f62e) main_cmode_video_pane

0xe260,	// (0x0004f638) main_comp_mode_itu_pane

0xe26c,	// (0x0004f644) main_comp_mode_rocker_pane

0xe278,	// (0x0004f650) cell_cmode_rocker_pane_ParamLimits

0xe278,	// (0x0004f650) cell_cmode_rocker_pane

0xe28c,	// (0x0004f664) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0004f664) cell_cmode_itu_pane

0x0f98,	// (0x00042370) bg_button_pane_cp06_ParamLimits

0x0f98,	// (0x00042370) bg_button_pane_cp06

0xc23c,	// (0x0004d614) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0004eba3) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0004eba3) cell_cmode_rocker_pane_g2

0x0001,

0xfd9f,	// (0x00051177) cell_cmode_rocker_pane_g_ParamLimits

0xfd9f,	// (0x00051177) cell_cmode_rocker_pane_g

0x08e6,	// (0x00041cbe) bg_button_pane_cp07

0xe2a3,	// (0x0004f67b) cell_cmode_itu_pane_g1

0xe2ac,	// (0x0004f684) cell_cmode_itu_pane_t1

0xe2ba,	// (0x0004f692) cell_cmode_itu_pane_t2

0x0001,

0xfda4,	// (0x0005117c) cell_cmode_itu_pane_t

0xd9f8,	// (0x0004edd0) aid_touch_ctrl_left

0xda00,	// (0x0004edd8) aid_touch_ctrl_right

0x08e6,	// (0x00041cbe) compa_mode_pane

0xe2c8,	// (0x0004f6a0) aid_cmod_rocker_key_size_cp

0xe2d2,	// (0x0004f6aa) aid_cmode_itu_key_size_cp

0xe2dc,	// (0x0004f6b4) compa_mode_pane_g1

0xe2e4,	// (0x0004f6bc) compa_mode_pane_g2

0xe2ec,	// (0x0004f6c4) compa_mode_pane_g3

0x0002,

0xfda9,	// (0x00051181) compa_mode_pane_g

0xe2f4,	// (0x0004f6cc) main_comp_mode_itu_pane_cp

0xe2fc,	// (0x0004f6d4) main_comp_mode_rocker_pane_cp

0xe304,	// (0x0004f6dc) cell_cmode_itu_pane_cp_ParamLimits

0xe304,	// (0x0004f6dc) cell_cmode_itu_pane_cp

0xe319,	// (0x0004f6f1) cell_cmode_rocker_pane_cp_ParamLimits

0xe319,	// (0x0004f6f1) cell_cmode_rocker_pane_cp

0x0f98,	// (0x00042370) bg_button_pane_cp06_cp_ParamLimits

0x0f98,	// (0x00042370) bg_button_pane_cp06_cp

0xc23c,	// (0x0004d614) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0004d614) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0004d399) cell_cmode_rocker_pane_g2_cp

0x08e6,	// (0x00041cbe) bg_button_pane_cp07_cp

0xe32b,	// (0x0004f703) cell_cmode_itu_pane_g1_cp

0xe334,	// (0x0004f70c) cell_cmode_itu_pane_t1_cp

0xe334,	// (0x0004f70c) cell_cmode_itu_pane_t2_cp

0xaed8,	// (0x0004c2b0) settings_code_pane_cp2

0x0956,	// (0x00041d2e) bg_popup_window_pane_cp3_ParamLimits

0x0c9d,	// (0x00042075) heading_pane_cp3_ParamLimits

0x0cac,	// (0x00042084) listscroll_popup_graphic_pane_ParamLimits

0x7c75,	// (0x0004904d) fep_hwr_aid_pane_ParamLimits

0x815a,	// (0x00049532) aid_touch_sctrl_top_ParamLimits

0x8167,	// (0x0004953f) sctrl_sk_top_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) sctrl_sk_top_pane_g2_ParamLimits

0xfcdf,	// (0x000510b7) sctrl_sk_top_pane_g_ParamLimits

0x8174,	// (0x0004954c) sctrl_sk_top_pane_t1_ParamLimits

0x815a,	// (0x00049532) aid_touch_sctrl_bottom_ParamLimits

0x8174,	// (0x0004954c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0004ed15) aid_area_touch_clock

0x8359,	// (0x00049731) aid_vkb2_area_top_pane_cell_ParamLimits

0x8359,	// (0x00049731) aid_vkb2_area_top_pane_cell

0x84a8,	// (0x00049880) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x84a8,	// (0x00049880) aid_vkb2_area_bottom_pane_cell

0xdeaa,	// (0x0004f282) popup_char_count_window

0xe342,	// (0x0004f71a) popup_char_count_window_g1

0xe34b,	// (0x0004f723) popup_char_count_window_g2

0xe354,	// (0x0004f72c) popup_char_count_window_g3

0x0002,

0xfdb0,	// (0x00051188) popup_char_count_window_g

0xe35d,	// (0x0004f735) popup_char_count_window_t1

0x820f,	// (0x000495e7) popup_fep_char_preview_window_ParamLimits

0x820f,	// (0x000495e7) popup_fep_char_preview_window

0x8377,	// (0x0004974f) vkb2_top_candi_pane_ParamLimits

0x8377,	// (0x0004974f) vkb2_top_candi_pane

0xe36b,	// (0x0004f743) cell_vkb2_top_candi_pane_ParamLimits

0xe36b,	// (0x0004f743) cell_vkb2_top_candi_pane

0x9ff3,	// (0x0004b3cb) bg_popup_fep_char_preview_window_ParamLimits

0x9ff3,	// (0x0004b3cb) bg_popup_fep_char_preview_window

0x8793,	// (0x00049b6b) popup_fep_char_preview_window_t1_ParamLimits

0x8793,	// (0x00049b6b) popup_fep_char_preview_window_t1

0xe3b9,	// (0x0004f791) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0004f799) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x0004f7a1) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0004f7a9) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x0004f7b1) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0004f7b9) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0004f7c1) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0004f7c9) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0004f7d1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb7,	// (0x0005118f) bg_popup_fep_char_preview_window_g

0xc23c,	// (0x0004d614) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc23c,	// (0x0004d614) cell_vkb2_top_candi_pane_g1

0xc57d,	// (0x0004d955) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc57d,	// (0x0004d955) cell_vkb2_top_candi_pane_g2

0xc59e,	// (0x0004d976) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc59e,	// (0x0004d976) cell_vkb2_top_candi_pane_g3

0x87d5,	// (0x00049bad) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87d5,	// (0x00049bad) cell_vkb2_top_candi_pane_g4

0xe401,	// (0x0004f7d9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe401,	// (0x0004f7d9) cell_vkb2_top_candi_pane_g5

0xd7cb,	// (0x0004eba3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7cb,	// (0x0004eba3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcc,	// (0x000511a4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcc,	// (0x000511a4) cell_vkb2_top_candi_pane_g

0x87f6,	// (0x00049bce) cell_vkb2_top_candi_pane_t1

0x79e8,	// (0x00048dc0) aid_size_touch_slider_mark_ParamLimits

0x79e8,	// (0x00048dc0) aid_size_touch_slider_mark

0xdfed,	// (0x0004f3c5) grid_graphic2_catg_pane_ParamLimits

0xdfed,	// (0x0004f3c5) grid_graphic2_catg_pane

0xe08b,	// (0x0004f463) popup_grid_graphic2_window_t1_ParamLimits

0xe08b,	// (0x0004f463) popup_grid_graphic2_window_t1

0xe09d,	// (0x0004f475) popup_grid_graphic2_window_t2_ParamLimits

0xe09d,	// (0x0004f475) popup_grid_graphic2_window_t2

0x0001,

0xfd85,	// (0x0005115d) popup_grid_graphic2_window_t_ParamLimits

0xfd85,	// (0x0005115d) popup_grid_graphic2_window_t

0x0a89,	// (0x00041e61) bg_button_pane_cp05_ParamLimits

0xe21a,	// (0x0004f5f2) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0004f7fa) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0004f7fa) cell_graphic2_catg_pane

0x08e6,	// (0x00041cbe) bg_button_pane_cp12

0xe434,	// (0x0004f80c) cell_graphic2_catg_pane_g1

0xd909,	// (0x0004ece1) cell_tb_ext_pane_t1_ParamLimits

0x85c5,	// (0x0004999d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85c5,	// (0x0004999d) vkb2_top_cell_right_narrow_pane

0x85dd,	// (0x000499b5) vkb2_top_cell_right_wide_pane_ParamLimits

0x85dd,	// (0x000499b5) vkb2_top_cell_right_wide_pane

0x7c67,	// (0x0004903f) bg_vkb2_func_pane_ParamLimits

0x7c67,	// (0x0004903f) bg_vkb2_func_pane

0x864e,	// (0x00049a26) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp03

0x86ac,	// (0x00049a84) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9995,	// (0x0004ad6d) bg_vkb2_func_pane_g1

0x999d,	// (0x0004ad75) bg_vkb2_func_pane_g2

0x99ad,	// (0x0004ad85) bg_vkb2_func_pane_g3

0x99a5,	// (0x0004ad7d) bg_vkb2_func_pane_g4

0x99b5,	// (0x0004ad8d) bg_vkb2_func_pane_g5

0x99bd,	// (0x0004ad95) bg_vkb2_func_pane_g6

0x99c5,	// (0x0004ad9d) bg_vkb2_func_pane_g7

0x99cd,	// (0x0004ada5) bg_vkb2_func_pane_g8

0x998d,	// (0x0004ad65) bg_vkb2_func_pane_g9

0x0008,

0xfdd9,	// (0x000511b1) bg_vkb2_func_pane_g

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp01

0x864e,	// (0x00049a26) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x864e,	// (0x00049a26) vkb2_top_cell_right_wide_pane_g1

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c67,	// (0x0004903f) bg_vkb2_fuc_pane_cp02

0x8814,	// (0x00049bec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8814,	// (0x00049bec) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0004e8f8) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0004e8f8) aid_touch_area_decrease

0xd544,	// (0x0004e91c) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0004e91c) aid_touch_area_increase

0xd55c,	// (0x0004e934) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0004e934) aid_touch_area_mute

0xd578,	// (0x0004e950) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0004e950) aid_touch_area_slider

0xd666,	// (0x0004ea3e) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0004ea3e) popup_slider_window_g4

0xd67e,	// (0x0004ea56) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0004ea56) popup_slider_window_g5

0xd6a0,	// (0x0004ea78) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0004ea78) popup_slider_window_g6

0xd6de,	// (0x0004eab6) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0004eab6) popup_slider_window_t2

0x0001,

0xfcd3,	// (0x000510ab) popup_slider_window_t_ParamLimits

0xfcd3,	// (0x000510ab) popup_slider_window_t

0xd6f6,	// (0x0004eace) slider_pane_ParamLimits

0xd6f6,	// (0x0004eace) slider_pane

0xe43d,	// (0x0004f815) slider_pane_g1_ParamLimits

0xe43d,	// (0x0004f815) slider_pane_g1

0xe451,	// (0x0004f829) slider_pane_g2_ParamLimits

0xe451,	// (0x0004f829) slider_pane_g2

0xe467,	// (0x0004f83f) slider_pane_g3_ParamLimits

0xe467,	// (0x0004f83f) slider_pane_g3

0x0003,

0xfdec,	// (0x000511c4) slider_pane_g_ParamLimits

0xfdec,	// (0x000511c4) slider_pane_g

0x75be,	// (0x00048996) popup_tb_float_extension_window_ParamLimits

0x75be,	// (0x00048996) popup_tb_float_extension_window

0xe493,	// (0x0004f86b) aid_size_cell_tb_float_ext

0x08e6,	// (0x00041cbe) bg_popup_sub_window_cp28

0xe49f,	// (0x0004f877) grid_tb_float_ext_pane

0xe4ab,	// (0x0004f883) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0004f883) cell_tb_float_ext_pane

0xe4c7,	// (0x0004f89f) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0004f8a8) grid_highlight_pane_cp12

0x7dae,	// (0x00049186) cell_last_hwr_side_pane_ParamLimits

0x7dae,	// (0x00049186) cell_last_hwr_side_pane

0xbfc1,	// (0x0004d399) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0004f8b1) cell_last_hwr_side_pane_g2

0x0001,

0xfdf5,	// (0x000511cd) cell_last_hwr_side_pane_g

0x8574,	// (0x0004994c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8574,	// (0x0004994c) vkb2_area_bottom_space_btn_pane

0xc23c,	// (0x0004d614) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf5f,	// (0x0004f337) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x87f6,	// (0x00049bce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8830,	// (0x00049c08) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8830,	// (0x00049c08) vkb2_area_bottom_space_btn_pane_g1

0x886a,	// (0x00049c42) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x886a,	// (0x00049c42) vkb2_area_bottom_space_btn_pane_g2

0x88a0,	// (0x00049c78) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88a0,	// (0x00049c78) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfa,	// (0x000511d2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfa,	// (0x000511d2) vkb2_area_bottom_space_btn_pane_g

0x7d1e,	// (0x000490f6) cel_fep_hwr_func_pane_ParamLimits

0x7d1e,	// (0x000490f6) cel_fep_hwr_func_pane

0x7d5a,	// (0x00049132) cell_hwr_side_button_pane_ParamLimits

0x7d5a,	// (0x00049132) cell_hwr_side_button_pane

0xd93d,	// (0x0004ed15) aid_area_touch_clock_ParamLimits

0x0a89,	// (0x00041e61) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0004ed29) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0004ed3f) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0004ed4b) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0004ed5c) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x000510e3) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0004ed69) uniindi_top_pane_t1_ParamLimits

0x0a89,	// (0x00041e61) bg_vkb2_func_pane_cp01_ParamLimits

0x0a89,	// (0x00041e61) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0004f8ba) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8ba) cel_fep_hwr_func_pane_g1

0x0a89,	// (0x00041e61) bg_vkb2_func_pane_cp02_ParamLimits

0x0a89,	// (0x00041e61) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0004f8ba) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8ba) cell_hwr_side_button_pane_g1

0x9810,	// (0x0004abe8) status_pane_g4_ParamLimits

0x9810,	// (0x0004abe8) status_pane_g4

0x982a,	// (0x0004ac02) status_pane_t1

0xbd74,	// (0x0004d14c) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0004d154) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0004d166) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0004d178) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x00050eaf) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0004d18a) form2_midp_slider_pane_ParamLimits

0x81d7,	// (0x000495af) aid_size_cell_func_vkb2_ParamLimits

0x81d7,	// (0x000495af) aid_size_cell_func_vkb2

0xe47f,	// (0x0004f857) slider_pane_g4_ParamLimits

0xe47f,	// (0x0004f857) slider_pane_g4

0x88ea,	// (0x00049cc2) form2_midp_gauge_slider_pane_t2_cp01

0x88f8,	// (0x00049cd0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88f8,	// (0x00049cd0) form2_midp_gauge_slider_pane_t3_cp01

0x8915,	// (0x00049ced) form2_midp_slider_pane_cp01

0x08e6,	// (0x00041cbe) navi_smil_pane

0xe51b,	// (0x0004f8f3) navi_smil_pane_g1

0xe523,	// (0x0004f8fb) navi_smil_pane_t1

0xe4f0,	// (0x0004f8c8) form2_midp_slider_pane_g1

0xe4f9,	// (0x0004f8d1) form2_midp_slider_pane_g2

0xe501,	// (0x0004f8d9) form2_midp_slider_pane_g3

0xe4f0,	// (0x0004f8c8) form2_midp_slider_pane_g4

0xe509,	// (0x0004f8e1) form2_midp_slider_pane_g5

0x0004,

0xfe03,	// (0x000511db) form2_midp_slider_pane_g

0x88da,	// (0x00049cb2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88da,	// (0x00049cb2) vkb2_area_bottom_space_btn_pane_g4

0x962f,	// (0x0004aa07) lc0_navi_pane_ParamLimits

0x962f,	// (0x0004aa07) lc0_navi_pane

0x96ab,	// (0x0004aa83) lc0_stat_indi_pane_ParamLimits

0x96ab,	// (0x0004aa83) lc0_stat_indi_pane

0x96c2,	// (0x0004aa9a) ls0_title_pane_ParamLimits

0x96c2,	// (0x0004aa9a) ls0_title_pane

0x0f98,	// (0x00042370) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0004ecfc) list_uniindi_pane_ParamLimits

0xd930,	// (0x0004ed08) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0004eda8) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0004edbb) list_single_uniindi_pane_t1_ParamLimits

0x891e,	// (0x00049cf6) lc0_stat_clock_pane_ParamLimits

0x891e,	// (0x00049cf6) lc0_stat_clock_pane

0xe531,	// (0x0004f909) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0004f909) lc0_stat_indi_pane_g1

0xe53e,	// (0x0004f916) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0004f916) lc0_stat_indi_pane_g2

0x0001,

0xfe0e,	// (0x000511e6) lc0_stat_indi_pane_g_ParamLimits

0xfe0e,	// (0x000511e6) lc0_stat_indi_pane_g

0x892b,	// (0x00049d03) lc0_uni_indicator_pane_ParamLimits

0x892b,	// (0x00049d03) lc0_uni_indicator_pane

0xe54b,	// (0x0004f923) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0004f923) ls0_title_pane_g1

0xe55f,	// (0x0004f937) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0004f937) ls0_title_pane_t1

0x8938,	// (0x00049d10) lc0_uni_indicator_pane_g1_ParamLimits

0x8938,	// (0x00049d10) lc0_uni_indicator_pane_g1

0xe595,	// (0x0004f96d) lc0_stat_clock_pane_t1

0x08e6,	// (0x00041cbe) main_ai5_pane

0xe5a3,	// (0x0004f97b) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0004f97b) ai5_sk_pane

0xe5b0,	// (0x0004f988) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0004f988) cell_ai5_widget_pane

0xe64f,	// (0x0004fa27) aid_size_cell_widget_grid

0xe65d,	// (0x0004fa35) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0004fa35) bg_ai5_widget_pane

0xe6d9,	// (0x0004fab1) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0004fac5) cell_ai5_widget_pane_g3

0xe707,	// (0x0004fadf) cell_ai5_widget_pane_g4

0xe717,	// (0x0004faef) cell_ai5_widget_pane_g5

0xe727,	// (0x0004faff) cell_ai5_widget_pane_g6

0xe733,	// (0x0004fb0b) cell_ai5_widget_pane_g7

0xe79f,	// (0x0004fb77) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0004fb77) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0004fb94) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0004fb94) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0004fbac) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0004fbac) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0004fbc4) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0004fbc4) cell_ai5_widget_pane_t4

0xe812,	// (0x0004fbea) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0004fbea) cell_ai5_widget_pane_t5

0xe832,	// (0x0004fc0a) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0004fc0a) cell_ai5_widget_pane_t6

0xe844,	// (0x0004fc1c) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0004fc1c) cell_ai5_widget_pane_t7

0xe863,	// (0x0004fc3b) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0004fc3b) cell_ai5_widget_pane_t8

0x000b,

0xfe2e,	// (0x00051206) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x00051206) cell_ai5_widget_pane_t

0xe8e7,	// (0x0004fcbf) grid_ai5_widget_pane

0x0f98,	// (0x00042370) highlight_cell_ai5_widget_pane_ParamLimits

0x0f98,	// (0x00042370) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0004fccd) ai5_sk_left_pane

0xe8ff,	// (0x0004fcd7) ai5_sk_middle_pane

0xe909,	// (0x0004fce1) ai5_sk_right_pane

0xe913,	// (0x0004fceb) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0004fceb) bg_ai5_widget_pane_g1

0xe91f,	// (0x0004fcf7) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0004fcf7) bg_ai5_widget_pane_g2

0xe92b,	// (0x0004fd03) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0004fd03) bg_ai5_widget_pane_g3

0xe937,	// (0x0004fd0f) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0004fd0f) bg_ai5_widget_pane_g4

0xe943,	// (0x0004fd1b) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0004fd1b) bg_ai5_widget_pane_g5

0xe94f,	// (0x0004fd27) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0004fd27) bg_ai5_widget_pane_g6

0xe95b,	// (0x0004fd33) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0004fd33) bg_ai5_widget_pane_g7

0xe967,	// (0x0004fd3f) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0004fd3f) bg_ai5_widget_pane_g8

0xe973,	// (0x0004fd4b) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0004fd4b) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0005121f) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0005121f) bg_ai5_widget_pane_g

0xe9ab,	// (0x0004fd83) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0004fd83) cell_shortcut_ai5_widget_pane

0x912e,	// (0x0004a506) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0004fd96) cell_grid_ai5_widget_pane_g1

0x912e,	// (0x0004a506) highlight_cell_shortcut_ai5_widget_pane

0x999d,	// (0x0004ad75) ai5_sk_left_pane_g1

0xe9c7,	// (0x0004fd9f) ai5_sk_left_pane_g2

0xe9cf,	// (0x0004fda7) ai5_sk_left_pane_g3

0xe9d7,	// (0x0004fdaf) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x00051232) ai5_sk_left_pane_g

0xe9df,	// (0x0004fdb7) ai5_sk_left_pane_t1

0x9995,	// (0x0004ad6d) ai5_sk_right_pane_g1

0xe9ed,	// (0x0004fdc5) ai5_sk_right_pane_g2

0xe9f5,	// (0x0004fdcd) ai5_sk_right_pane_g3

0xe9fd,	// (0x0004fdd5) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0005123b) ai5_sk_right_pane_g

0xea05,	// (0x0004fddd) ai5_sk_right_pane_t1

0x9995,	// (0x0004ad6d) ai5_sk_middle_pane_g1

0x999d,	// (0x0004ad75) ai5_sk_middle_pane_g2

0x99b5,	// (0x0004ad8d) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0004fdcd) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0004fda7) ai5_sk_middle_pane_g5

0xea13,	// (0x0004fdeb) ai5_sk_middle_pane_g6

0xea1b,	// (0x0004fdf3) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x00051244) ai5_sk_middle_pane_g

0x94b5,	// (0x0004a88d) aid_touch_area_size_lc0_ParamLimits

0x94b5,	// (0x0004a88d) aid_touch_area_size_lc0

0x7ebd,	// (0x00049295) cell_hwr_candidate_pane_t1_ParamLimits

0x94d3,	// (0x0004a8ab) aid_touch_navi_pane

0x97c2,	// (0x0004ab9a) status_dt_navi_pane_ParamLimits

0x97c2,	// (0x0004ab9a) status_dt_navi_pane

0x97cf,	// (0x0004aba7) status_dt_sta_pane_ParamLimits

0x97cf,	// (0x0004aba7) status_dt_sta_pane

0xea23,	// (0x0004fdfb) dt_sta_controll_pane

0xea30,	// (0x0004fe08) dt_sta_indi_pane

0xea41,	// (0x0004fe19) dt_sta_title_pane

0x0a89,	// (0x00041e61) bg_dt_sta_indi_pane_ParamLimits

0x0a89,	// (0x00041e61) bg_dt_sta_indi_pane

0xea54,	// (0x0004fe2c) dt_sta_battery_pane

0xea5c,	// (0x0004fe34) dt_sta_indi_pane_g1

0xea65,	// (0x0004fe3d) dt_sta_indi_pane_g2

0xea6e,	// (0x0004fe46) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x00051253) dt_sta_indi_pane_g

0xea77,	// (0x0004fe4f) dt_sta_signal_pane

0x0f98,	// (0x00042370) bg_dt_sta_title_pane_ParamLimits

0x0f98,	// (0x00042370) bg_dt_sta_title_pane

0xea80,	// (0x0004fe58) dt_sta_title_pane_g1

0xea88,	// (0x0004fe60) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0004fe60) dt_sta_title_pane_t1

0x08e6,	// (0x00041cbe) bg_dt_sta_control_pane

0xea9d,	// (0x0004fe75) dt_sta_controll_pane_g1

0xeaa6,	// (0x0004fe7e) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0004fe87) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0004fe90) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0005125a) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0004d399) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0004fe99) dt_sta_signal_pane_g1

0xeac9,	// (0x0004fea1) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x00051261) dt_sta_signal_pane_g

0xead1,	// (0x0004fea9) dt_sta_battery_pane_g1

0xeada,	// (0x0004feb2) dt_sta_battery_pane_t1

0xbfc1,	// (0x0004d399) bg_dt_sta_control_pane_g1

0x454d,	// (0x00045925) fep_china_uni_eep_pane

0x4555,	// (0x0004592d) fep_china_uni_entry_pane_ParamLimits

0x4565,	// (0x0004593d) popup_fep_china_uni_window_g1_ParamLimits

0x4575,	// (0x0004594d) popup_fep_china_uni_window_g2_ParamLimits

0x4575,	// (0x0004594d) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00050ad5) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00050ad5) popup_fep_china_uni_window_g

0xeae9,	// (0x0004fec1) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0004fec9) fep_china_uni_eep_pane_t1

0xe512,	// (0x0004f8ea) aid_touch_area_size_smil_player

0x9627,	// (0x0004a9ff) lc0_clock_pane

0x981e,	// (0x0004abf6) status_pane_g5_ParamLimits

0x981e,	// (0x0004abf6) status_pane_g5

0x7243,	// (0x0004861b) popup_keymap_window

0x97e4,	// (0x0004abbc) status_icon_pane

0xe6ed,	// (0x0004fac5) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0004fadf) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0004faef) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0004fb17) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0004fb17) cell_ai5_widget_pane_g8

0xe753,	// (0x0004fb2b) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0004fb2b) cell_ai5_widget_pane_g9

0xe767,	// (0x0004fb3f) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0004fb3f) cell_ai5_widget_pane_g10

0xeb00,	// (0x0004fed8) status_icon_pane_g1

0x08e6,	// (0x00041cbe) bg_popup_sub_pane_cp13

0xeb08,	// (0x0004fee0) popup_keymap_window_t1

0x9406,	// (0x0004a7de) control_pane_g6_ParamLimits

0x9406,	// (0x0004a7de) control_pane_g6

0x9413,	// (0x0004a7eb) control_pane_g7_ParamLimits

0x9413,	// (0x0004a7eb) control_pane_g7

0x9420,	// (0x0004a7f8) control_pane_g8_ParamLimits

0x9420,	// (0x0004a7f8) control_pane_g8

0xea23,	// (0x0004fdfb) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0004fe08) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0004fe19) dt_sta_title_pane_ParamLimits

0x0eda,	// (0x000422b2) aid_size_touch_scroll_bar_cale

0x61f9,	// (0x000475d1) popup_discreet_window_ParamLimits

0x61f9,	// (0x000475d1) popup_discreet_window

0x6287,	// (0x0004765f) popup_sk_window

0x9ff3,	// (0x0004b3cb) bg_popup_sub_pane_cp28_ParamLimits

0x9ff3,	// (0x0004b3cb) bg_popup_sub_pane_cp28

0xeb16,	// (0x0004feee) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0004feee) popup_discreet_window_g1

0xeb36,	// (0x0004ff0e) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0004ff0e) popup_discreet_window_t1

0xeb54,	// (0x0004ff2c) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0004ff2c) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x00051266) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x00051266) popup_discreet_window_t

0x894b,	// (0x00049d23) popup_sk_window_g1

0x8955,	// (0x00049d2d) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0005126d) popup_sk_window_g

0x895d,	// (0x00049d35) popup_sk_window_t1

0x896b,	// (0x00049d43) popup_sk_window_t1_copy1

0xe6d9,	// (0x0004fab1) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0004fc4d) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0004fc4d) cell_ai5_widget_pane_t9

0x08e6,	// (0x00041cbe) main_fep_fshwr2_pane

0x8979,	// (0x00049d51) aid_fshwr2_btn_pane

0x8989,	// (0x00049d61) aid_fshwr2_syb_pane

0x899d,	// (0x00049d75) aid_fshwr2_txt_pane

0x89ad,	// (0x00049d85) fshwr2_func_candi_pane

0x89cd,	// (0x00049da5) fshwr2_hwr_syb_pane

0x89e3,	// (0x00049dbb) fshwr2_icf_pane

0x08e6,	// (0x00041cbe) fshwr2_icf_bg_pane

0x8a17,	// (0x00049def) fshwr2_icf_pane_t1_ParamLimits

0x8a17,	// (0x00049def) fshwr2_icf_pane_t1

0x43f2,	// (0x000457ca) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0004ff7e) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0004ff7e) fshwr2_func_candi_row_pane

0x8a2f,	// (0x00049e07) cell_fshwr2_syb_pane_ParamLimits

0x8a2f,	// (0x00049e07) cell_fshwr2_syb_pane

0xe4e2,	// (0x0004f8ba) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8ba) fshwr2_hwr_syb_pane_g1

0x08e6,	// (0x00041cbe) bg_popup_call_pane_cp01

0x8a50,	// (0x00049e28) fshwr2_func_candi_cell_pane_ParamLimits

0x8a50,	// (0x00049e28) fshwr2_func_candi_cell_pane

0xa66a,	// (0x0004ba42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa66a,	// (0x0004ba42) fshwr2_func_candi_cell_bg_pane

0x8aa1,	// (0x00049e79) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8aa1,	// (0x00049e79) fshwr2_func_candi_cell_pane_g1

0x8acc,	// (0x00049ea4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8acc,	// (0x00049ea4) fshwr2_func_candi_cell_pane_t1

0x08e6,	// (0x00041cbe) bg_button_pane_cp08

0x9455,	// (0x0004a82d) cell_fshwr2_syb_bg_pane

0x8adf,	// (0x00049eb7) cell_fshwr2_syb_bg_pane_g1

0x8af3,	// (0x00049ecb) cell_fshwr2_syb_bg_pane_t1

0x0f98,	// (0x00042370) main_tmo_pane

0xab17,	// (0x0004beef) uni_indicator_pane_g1_ParamLimits

0xab2d,	// (0x0004bf05) uni_indicator_pane_g2_ParamLimits

0xab43,	// (0x0004bf1b) uni_indicator_pane_g3_ParamLimits

0xab56,	// (0x0004bf2e) uni_indicator_pane_g4_ParamLimits

0xab56,	// (0x0004bf2e) uni_indicator_pane_g4

0xab6a,	// (0x0004bf42) uni_indicator_pane_g5_ParamLimits

0xab6a,	// (0x0004bf42) uni_indicator_pane_g5

0xab6a,	// (0x0004bf42) uni_indicator_pane_g6_ParamLimits

0xab6a,	// (0x0004bf42) uni_indicator_pane_g6

0xf901,	// (0x00050cd9) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0004e8c8) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0004e8c8) popup_tmo_note_window

0x0f98,	// (0x00042370) fshwr2_bg_pane

0x8abd,	// (0x00049e95) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8abd,	// (0x00049e95) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x00051272) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x00051272) fshwr2_func_candi_cell_pane_g

0xbfc1,	// (0x0004d399) bg_popup_window_pane_cp01

0x8b09,	// (0x00049ee1) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0004ffa1) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0004ffa1) bg_popup_window_pane_cp22

0xebd7,	// (0x0004ffaf) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0004ffaf) listscroll_tmo_link_pane

0xec17,	// (0x0004ffef) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0004ffef) popup_tmo_note_window_g1

0xec24,	// (0x0004fffc) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0004fffc) tmo_note_info_pane

0xec3e,	// (0x00050016) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x00050016) list_tmo_note_info_pane_g1

0xec55,	// (0x0005002d) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0005002d) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x00051277) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x00051277) list_tmo_note_info_pane_g

0xec71,	// (0x00050049) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x00050049) list_tmo_note_info_text_pane

0xecf6,	// (0x000500ce) list_tmo_link_pane

0xed03,	// (0x000500db) scroll_pane_cp20

0xed10,	// (0x000500e8) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x000500e8) list_single_tmo_link_pane

0xed20,	// (0x000500f8) list_single_tmo_link_pane_t1

0xed2e,	// (0x00050106) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x00050106) list_tmo_note_info_text_pane_t1

0x67be,	// (0x00047b96) aid_size_touch_scroll_bar_cp01_ParamLimits

0x67be,	// (0x00047b96) aid_size_touch_scroll_bar_cp01

0x5677,	// (0x00046a4f) aid_size_touch_slider_marker

0x626f,	// (0x00047647) popup_settings_window_ParamLimits

0x626f,	// (0x00047647) popup_settings_window

0x57ed,	// (0x00046bc5) popup_candi_list_indi_window

0x94d3,	// (0x0004a8ab) aid_touch_navi_pane_ParamLimits

0x812e,	// (0x00049506) rs_clock_indi_pane

0x8137,	// (0x0004950f) sctrl_sk_bottom_pane_ParamLimits

0x8148,	// (0x00049520) sctrl_sk_top_pane_ParamLimits

0x8229,	// (0x00049601) popup_fep_tooltip_window

0xe64f,	// (0x0004fa27) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0004fa9c) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0004fa9c) cell_ai5_widget_pane_g1

0xe727,	// (0x0004faff) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0004fb0b) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe13,	// (0x000511eb) cell_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x000511eb) cell_ai5_widget_pane_g

0xe8a4,	// (0x0004fc7c) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0004fc7c) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0004fcbf) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0004fd57) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0004fd57) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0004ff41) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0004ff41) popup_discreet_window_t3

0x89ff,	// (0x00049dd7) popup_fshwr2_char_preview_window_ParamLimits

0x89ff,	// (0x00049dd7) popup_fshwr2_char_preview_window

0xec8f,	// (0x00050067) tmo_note_info_pane_t1

0xeca4,	// (0x0005007c) tmo_note_info_pane_t2

0xecbd,	// (0x00050095) tmo_note_info_pane_t3

0xecd2,	// (0x000500aa) tmo_note_info_pane_t4

0xece4,	// (0x000500bc) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0005127c) tmo_note_info_pane_t

0xecf6,	// (0x000500ce) list_tmo_link_pane_ParamLimits

0xed03,	// (0x000500db) scroll_pane_cp20_ParamLimits

0x08e6,	// (0x00041cbe) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0005011f) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0005012d) popup_candi_list_indi_window_g1

0xed5e,	// (0x00050136) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x00050142) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x00050157) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x00050163) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x00051287) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0005016f) cell_contacts_ai5_widget_pane_t1

0x0f98,	// (0x00042370) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x000501e6) settings_container_pane

0x912e,	// (0x0004a506) listscroll_set_pane_copy1

0xb6f2,	// (0x0004caca) scroll_pane_cp121_copy1

0xee1a,	// (0x000501f2) set_content_pane_copy1

0xee22,	// (0x000501fa) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x000501fa) aid_height_set_list_copy1

0xad6a,	// (0x0004c142) aid_size_parent_copy1_ParamLimits

0xad6a,	// (0x0004c142) aid_size_parent_copy1

0xee2e,	// (0x00050206) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x00050206) button_value_adjust_pane_cp6_copy1

0x9455,	// (0x0004a82d) list_highlight_pane_cp2_copy1_ParamLimits

0x9455,	// (0x0004a82d) list_highlight_pane_cp2_copy1

0xee42,	// (0x0005021a) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0005021a) list_set_pane_copy1

0xeda9,	// (0x00050181) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x00050181) main_pane_set_t1_copy1

0xede3,	// (0x000501bb) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x000501bb) main_pane_set_t2_copy1

0xef03,	// (0x000502db) main_pane_set_t3_copy1

0xef11,	// (0x000502e9) main_pane_set_t4_copy1

0xee02,	// (0x000501da) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x000501da) set_content_pane_g1_copy1

0xef1f,	// (0x000502f7) setting_code_pane_copy1

0xef27,	// (0x000502ff) setting_slider_graphic_pane_copy1

0xef27,	// (0x000502ff) setting_slider_pane_copy1

0xef2f,	// (0x00050307) setting_text_pane_copy1

0xef2f,	// (0x00050307) setting_volume_pane_copy1

0xef1f,	// (0x000502f7) settings_code_pane_cp2_copy1

0xef37,	// (0x0005030f) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0005030f) settings_code_pane_cp_copy1

0x8b12,	// (0x00049eea) volume_set_pane_copy1

0xef4b,	// (0x00050323) volume_set_pane_g10_copy1

0xef57,	// (0x0005032f) volume_set_pane_g1_copy1

0xef61,	// (0x00050339) volume_set_pane_g2_copy1

0xef6b,	// (0x00050343) volume_set_pane_g3_copy1

0xef75,	// (0x0005034d) volume_set_pane_g4_copy1

0xef7f,	// (0x00050357) volume_set_pane_g5_copy1

0xef89,	// (0x00050361) volume_set_pane_g6_copy1

0xef93,	// (0x0005036b) volume_set_pane_g7_copy1

0xef9d,	// (0x00050375) volume_set_pane_g8_copy1

0xefa7,	// (0x0005037f) volume_set_pane_g9_copy1

0x0956,	// (0x00041d2e) bg_set_opt_pane_cp_copy1_ParamLimits

0x0956,	// (0x00041d2e) bg_set_opt_pane_cp_copy1

0x8b1e,	// (0x00049ef6) setting_slider_pane_t1_copy1_ParamLimits

0x8b1e,	// (0x00049ef6) setting_slider_pane_t1_copy1

0x8b3d,	// (0x00049f15) setting_slider_pane_t2_copy1_ParamLimits

0x8b3d,	// (0x00049f15) setting_slider_pane_t2_copy1

0x8b57,	// (0x00049f2f) setting_slider_pane_t3_copy1_ParamLimits

0x8b57,	// (0x00049f2f) setting_slider_pane_t3_copy1

0x8b6f,	// (0x00049f47) slider_set_pane_copy1_ParamLimits

0x8b6f,	// (0x00049f47) slider_set_pane_copy1

0x0ff0,	// (0x000423c8) set_opt_bg_pane_g1_copy2

0x0ff8,	// (0x000423d0) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0005038b) set_opt_bg_pane_g3_copy2

0x1008,	// (0x000423e0) set_opt_bg_pane_g4_copy2

0x1010,	// (0x000423e8) set_opt_bg_pane_g5_copy2

0x1018,	// (0x000423f0) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x00050395) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0005039f) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x000503a9) set_opt_bg_pane_g9_copy2

0x8b85,	// (0x00049f5d) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b85,	// (0x00049f5d) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x000503b3) slider_set_pane_g1_copy1

0x8b99,	// (0x00049f71) slider_set_pane_g2_copy1

0x7a08,	// (0x00048de0) slider_set_pane_g3_copy1_ParamLimits

0x7a08,	// (0x00048de0) slider_set_pane_g3_copy1

0x7a1c,	// (0x00048df4) slider_set_pane_g4_copy1_ParamLimits

0x7a1c,	// (0x00048df4) slider_set_pane_g4_copy1

0x7a34,	// (0x00048e0c) slider_set_pane_g5_copy1_ParamLimits

0x7a34,	// (0x00048e0c) slider_set_pane_g5_copy1

0x7a08,	// (0x00048de0) slider_set_pane_g6_copy1_ParamLimits

0x7a08,	// (0x00048de0) slider_set_pane_g6_copy1

0x8ba1,	// (0x00049f79) slider_set_pane_g7_copy1_ParamLimits

0x8ba1,	// (0x00049f79) slider_set_pane_g7_copy1

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x000503bc) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x000503c5) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x000503d5) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x000503e5) slider_set_pane_cp_copy1

0xf01d,	// (0x000503f5) input_focus_pane_cp1_copy1

0xf026,	// (0x000503fe) list_set_text_pane_copy1

0xf02e,	// (0x00050406) setting_text_pane_g1_copy1

0x5084,	// (0x0004645c) set_text_pane_t1_copy1

0xf01d,	// (0x000503f5) input_focus_pane_cp2_copy1

0xf02e,	// (0x00050406) setting_code_pane_g1_copy1

0xf037,	// (0x0005040f) setting_code_pane_t1_copy1

0xb4f7,	// (0x0004c8cf) list_set_graphic_pane_copy1

0x08fa,	// (0x00041cd2) bg_set_opt_pane_cp4_copy1

0x8e29,	// (0x0004a201) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e29,	// (0x0004a201) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0005041d) list_set_graphic_pane_g2_copy1

0x8e41,	// (0x0004a219) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e41,	// (0x0004a219) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0004d399) rs_clock_indi_pane_g1

0xf04d,	// (0x00050425) rs_clock_indi_pane_t1

0xf05b,	// (0x00050433) rs_indi_pane

0xf063,	// (0x0005043b) rs_indi_pane_g1

0xf06c,	// (0x00050444) rs_indi_pane_g2

0xed55,	// (0x0005012d) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0005128e) rs_indi_pane_g

0x912e,	// (0x0004a506) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0005044d) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0004e076) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0004e076) popup_note2_window_g2

0x0001,

0xfc43,	// (0x0005101b) popup_note2_window_g_ParamLimits

0xfc43,	// (0x0005101b) popup_note2_window_g

0xd1a6,	// (0x0004e57e) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0004e58b) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0004e5a2) cell_ai3_links_pane_t1

0x5084,	// (0x0004645c) set_text_pane_t1_copy1_ParamLimits

0x9030,	// (0x0004a408) cell_graphic_popup_pane_cp2_ParamLimits

0x9030,	// (0x0004a408) cell_graphic_popup_pane_cp2

0xf083,	// (0x0005045b) cell_graphic_popup_pane_g1_cp2

0x0ced,	// (0x000420c5) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x00050463) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0005046b) cell_graphic_popup_pane_t2_cp2

0x0cfe,	// (0x000420d6) grid_highlight_pane_cp3_cp2

0x12ac,	// (0x00042684) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0f98,	// (0x00042370) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0004e8bc) popup_tmo_big_image_note_window

0xe6b3,	// (0x0004fa8b) cell_ai5_widget_list_pane

0xe6bb,	// (0x0004fa93) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x00050067) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0005007c) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x00050095) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x000500aa) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x000500bc) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0005127c) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x000501e6) settings_container_pane_ParamLimits

0xf015,	// (0x000503ed) indicator_popup_pane_cp5

0xf015,	// (0x000503ed) indicator_popup_pane_cp6

0xb4f7,	// (0x0004c8cf) list_set_graphic_pane_copy1_ParamLimits

0x08e6,	// (0x00041cbe) bg_popup_window_pane_cp23

0xf0a1,	// (0x00050479) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x00050485) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x00050495) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x000504a5) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x00051295) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0004d399) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x000504b5) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x000504c3) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x000504c3) cell_ai5_widget_list_row_pane

0xf103,	// (0x000504db) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x000504db) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x000504e8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x000504e8) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x00050513) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x00050513) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0005129c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0005129c) cell_ai5_widget_list_row_pane_t

0x08e6,	// (0x00041cbe) main_fep_vtchi_ss_pane

0xf18b,	// (0x00050563) popup_fep_char_pre_window

0xf193,	// (0x0005056b) popup_fep_ituss_window

0xf1bf,	// (0x00050597) popup_fep_vkbss_window

0x9455,	// (0x0004a82d) grid_vkbss_keypad_pane_ParamLimits

0x9455,	// (0x0004a82d) grid_vkbss_keypad_pane

0xf201,	// (0x000505d9) ituss_keypad_pane

0x8bc1,	// (0x00049f99) aid_vkbss_key_offset_ParamLimits

0x8bc1,	// (0x00049f99) aid_vkbss_key_offset

0x8bcd,	// (0x00049fa5) cell_vkbss_key_pane_ParamLimits

0x8bcd,	// (0x00049fa5) cell_vkbss_key_pane

0xf20d,	// (0x000505e5) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x000505e5) bg_cell_vkbss_key_g1

0xf219,	// (0x000505f1) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x000505f1) cell_vkbss_key_3p_pane

0xf24f,	// (0x00050627) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x00050627) cell_vkbss_key_g1

0xf285,	// (0x0005065d) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0005065d) cell_vkbss_key_t1

0x8c2f,	// (0x0004a007) cell_ituss_key_pane_ParamLimits

0x8c2f,	// (0x0004a007) cell_ituss_key_pane

0xf2e1,	// (0x000506b9) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x000506b9) bg_cell_ituss_key_g1

0xf2ed,	// (0x000506c5) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x000506c5) cell_ituss_key_pane_g1

0x8c40,	// (0x0004a018) cell_ituss_key_pane_g2_ParamLimits

0x8c40,	// (0x0004a018) cell_ituss_key_pane_g2

0x0005,

0xfecb,	// (0x000512a3) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x000512a3) cell_ituss_key_pane_g

0x8cc4,	// (0x0004a09c) cell_ituss_key_t1_ParamLimits

0x8cc4,	// (0x0004a09c) cell_ituss_key_t1

0x8cfe,	// (0x0004a0d6) cell_ituss_key_t2_ParamLimits

0x8cfe,	// (0x0004a0d6) cell_ituss_key_t2

0x8d30,	// (0x0004a108) cell_ituss_key_t3_ParamLimits

0x8d30,	// (0x0004a108) cell_ituss_key_t3

0x8d61,	// (0x0004a139) cell_ituss_key_t4_ParamLimits

0x8d61,	// (0x0004a139) cell_ituss_key_t4

0x0004,

0xfed8,	// (0x000512b0) cell_ituss_key_t_ParamLimits

0xfed8,	// (0x000512b0) cell_ituss_key_t

0xf313,	// (0x000506eb) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x000506f3) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x000506fb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee3,	// (0x000512bb) cell_vkbss_key_3p_pane_g

0x912e,	// (0x0004a506) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x00050703) popup_fep_char_pre_window_t1

0xe63c,	// (0x0004fa14) main_ai5_sk_pane

0xed5e,	// (0x00050136) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x00050142) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x00050157) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x00050163) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x00051287) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0005016f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0f98,	// (0x00042370) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x00050711) main_ai5_sk_pane_g1

0x9e2b,	// (0x0004b203) popup_query_code_window_g1

0xf1a9,	// (0x00050581) popup_fep_vkb_icf_pane

0xf1d8,	// (0x000505b0) popup_fep_vtchi_icf_pane

0xf342,	// (0x0005071a) bg_icf_pane

0xf342,	// (0x0005071a) list_vkb_icf_pane

0xf34e,	// (0x00050726) bg_icf_pane_cp01

0xf361,	// (0x00050739) vtchi_icf_list_pane

0xf3c1,	// (0x00050799) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x00050799) list_vkb_icf_pane_t1

0xf3da,	// (0x000507b2) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x000507b2) vtchi_icf_list_pane_t1

0xf193,	// (0x0005056b) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x000505b0) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x000505d9) ituss_keypad_pane_ParamLimits

0x8bb7,	// (0x00049f8f) ituss_sks_pane

0xf342,	// (0x0005071a) bg_icf_pane_ParamLimits

0xf163,	// (0x0005053b) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0005053b) icf_edit_indi_pane

0xf342,	// (0x0005071a) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x00050726) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x00050556) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x00050556) icf_edit_indi_pane_cp01

0xf361,	// (0x00050739) vtchi_query_pane

0xe4e2,	// (0x0004f8ba) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8ba) icf_edit_indi_pane_g1

0xf44a,	// (0x00050822) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x00050822) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x000512e6) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x000512e6) icf_edit_indi_pane_g

0xf45e,	// (0x00050836) icf_edit_indi_pane_t1

0xf3f3,	// (0x000507cb) bg_input_focus_pane_cp042

0x0ed1,	// (0x000422a9) vtchi_button_pane

0xf3fc,	// (0x000507d4) vtchi_query_pane_t1

0xf40a,	// (0x000507e2) vtchi_query_pane_t2

0xf418,	// (0x000507f0) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x000512d5) vtchi_query_pane_t

0x08e6,	// (0x00041cbe) bg_button_pane_cp13

0xf426,	// (0x000507fe) vtchi_button_pane_g1

0x8da4,	// (0x0004a17c) ituss_sks_pane_g1

0x8daf,	// (0x0004a187) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x000512dc) ituss_sks_pane_g

0xf42e,	// (0x00050806) ituss_sks_pane_t1

0xf43c,	// (0x00050814) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x000512e1) ituss_sks_pane_t

0xba95,	// (0x0004ce6d) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0004ce76) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0004ce7e) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0004ce86) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0004ce76) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0004ce7e) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x00050e65) indicator_nsta_pane_cp_g

0xe208,	// (0x0004f5e0) cell_graphic2_pane_t2_ParamLimits

0xe208,	// (0x0004f5e0) cell_graphic2_pane_t2

0x0001,

0xfd9a,	// (0x00051172) cell_graphic2_pane_t_ParamLimits

0xfd9a,	// (0x00051172) cell_graphic2_pane_t

0xe234,	// (0x0004f60c) cell_graphic2_control_pane_t1

0x6c43,	// (0x0004801b) signal_pane_g3_ParamLimits

0x6c43,	// (0x0004801b) signal_pane_g3

0x6c52,	// (0x0004802a) signal_pane_g4_ParamLimits

0x6c52,	// (0x0004802a) signal_pane_g4

0xf14d,	// (0x00050525) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x00050525) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x000506d9) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x000506d9) cell_ituss_key_pane_t1

0x9a92,	// (0x0004ae6a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a92,	// (0x0004ae6a) form_field_data_wide_pane_vc_t2

0x9aa6,	// (0x0004ae7e) form_field_data_wide_pane_vc_t3_ParamLimits

0x9aa6,	// (0x0004ae7e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00050bc1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00050bc1) form_field_data_wide_pane_vc_t

0xb732,	// (0x0004cb0a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0004cb0a) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0004cbe0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0004cbe0) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0004cbf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0004cbf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x00050e54) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x00050e54) form_field_popup_wide_pane_vc_t

0x8979,	// (0x00049d51) aid_fshwr2_btn_pane_ParamLimits

0x8989,	// (0x00049d61) aid_fshwr2_syb_pane_ParamLimits

0x899d,	// (0x00049d75) aid_fshwr2_txt_pane_ParamLimits

0x0f98,	// (0x00042370) fshwr2_bg_pane_ParamLimits

0x89ad,	// (0x00049d85) fshwr2_func_candi_pane_ParamLimits

0x89cd,	// (0x00049da5) fshwr2_hwr_syb_pane_ParamLimits

0x89e3,	// (0x00049dbb) fshwr2_icf_pane_ParamLimits

0x7c0a,	// (0x00048fe2) list_double_graphic_pane_vc_g4_ParamLimits

0x7c0a,	// (0x00048fe2) list_double_graphic_pane_vc_g4

0x8c60,	// (0x0004a038) cell_ituss_key_pane_g3_ParamLimits

0x8c60,	// (0x0004a038) cell_ituss_key_pane_g3

0x8d92,	// (0x0004a16a) cell_ituss_key_t5_ParamLimits

0x8d92,	// (0x0004a16a) cell_ituss_key_t5

0xf1bf,	// (0x00050597) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0004fa1e) aid_cell_ai5_quarter

0xf45e,	// (0x00050836) icf_edit_indi_pane_t1_ParamLimits

0x0b31,	// (0x00041f09) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0b31,	// (0x00041f09) aid_tch_indicator_popup_pane_cp2

0x0b44,	// (0x00041f1c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0b44,	// (0x00041f1c) aid_tch_query_popup_data_pane_cp2

0x9dd3,	// (0x0004b1ab) aid_tch_query_popup_pane_ParamLimits

0x9dd3,	// (0x0004b1ab) aid_tch_query_popup_pane

0x9dd3,	// (0x0004b1ab) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dd3,	// (0x0004b1ab) aid_tch_query_popup_data_pane_cp1

0x9455,	// (0x0004a82d) cell_fshwr2_syb_bg_pane_ParamLimits

0x8adf,	// (0x00049eb7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8af3,	// (0x00049ecb) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x00050581) popup_fep_vkb_icf_pane_ParamLimits

0x87cd,	// (0x00049ba5) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0004fb53) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0004fb53) cell_ai5_widget_pane_g11

0xe787,	// (0x0004fb5f) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0004fb5f) cell_ai5_widget_pane_g12

0xe793,	// (0x0004fb6b) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0004fb6b) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0004fc9b) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0004fc9b) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0004fcad) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0004fcad) cell_ai5_widget_pane_t12

0x8c6c,	// (0x0004a044) cell_ituss_key_pane_g4_ParamLimits

0x8c6c,	// (0x0004a044) cell_ituss_key_pane_g4

0x8c88,	// (0x0004a060) cell_ituss_key_pane_g5_ParamLimits

0x8c88,	// (0x0004a060) cell_ituss_key_pane_g5

0x8ca4,	// (0x0004a07c) cell_ituss_key_pane_g6_ParamLimits

0x8ca4,	// (0x0004a07c) cell_ituss_key_pane_g6

0x998d,	// (0x0004ad65) bg_icf_pane_g1

0xf369,	// (0x00050741) bg_icf_pane_g2

0xf375,	// (0x0005074d) bg_icf_pane_g3

0xf37f,	// (0x00050757) bg_icf_pane_g4

0xf38b,	// (0x00050763) bg_icf_pane_g5

0xf395,	// (0x0005076d) bg_icf_pane_g6

0xf3a1,	// (0x00050779) bg_icf_pane_g7

0xf3ab,	// (0x00050783) bg_icf_pane_g8

0xf3b7,	// (0x0005078f) bg_icf_pane_g9

0x0008,

0xfeea,	// (0x000512c2) bg_icf_pane_g

0xf1ee,	// (0x000505c6) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x000505c6) popup_hyb_candi_window

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp01_ParamLimits

0x9a01,	// (0x0004add9) bg_popup_sub_pane_cp01

0xf477,	// (0x0005084f) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0005084f) entry_hyb_candi_pane

0xf486,	// (0x0005085e) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0005085e) grid_hyb_candi_pane

0xf49b,	// (0x00050873) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x00050873) grid_hyb_phrase_pane

0xf4aa,	// (0x00050882) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x00050882) cell_hyb_candi_pane

0x0eda,	// (0x000422b2) cell_hyb_candi_scroll_pane

0x43f2,	// (0x000457ca) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005089e) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000508ac) cell_hyb_phrase_pane

0x43f2,	// (0x000457ca) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000508b5) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000508c3) entry_hyb_candi_pane_t1

0x912e,	// (0x0004a506) input_focus_pane_cp06

0xf4f9,	// (0x000508d1) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000508d9) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000508e1) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000508e9) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000508f1) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x000508f9) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

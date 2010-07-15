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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb63e,	// (0x0000b63e) Screen

0xb64a,	// (0x0000b64a) application_window_ParamLimits

0xb64a,	// (0x0000b64a) application_window

0x002e,	// (0x0000002e) screen_g1

0xb682,	// (0x0000b682) area_bottom_pane_ParamLimits

0xb682,	// (0x0000b682) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcd86,	// (0x0000cd86) battery_pane_ParamLimits

0xcd86,	// (0x0000cd86) battery_pane

0x4170,	// (0x00004170) bg_status_flat_pane_g8

0x4178,	// (0x00004178) bg_status_flat_pane_g9

0x32b9,	// (0x000032b9) context_pane_ParamLimits

0x32b9,	// (0x000032b9) context_pane

0xcef1,	// (0x0000cef1) navi_pane_ParamLimits

0xcef1,	// (0x0000cef1) navi_pane

0xcf6f,	// (0x0000cf6f) signal_pane_ParamLimits

0xcf6f,	// (0x0000cf6f) signal_pane

0x0008,

0xafa9,	// (0x0000afa9) bg_status_flat_pane_g

0xcfff,	// (0x0000cfff) status_pane_g1_ParamLimits

0xcfff,	// (0x0000cfff) status_pane_g1

0xd015,	// (0x0000d015) status_pane_g2_ParamLimits

0xd015,	// (0x0000d015) status_pane_g2

0x34e0,	// (0x000034e0) status_pane_g3_ParamLimits

0x34e0,	// (0x000034e0) status_pane_g3

0x0004,

0xf4e1,	// (0x0000f4e1) status_pane_g_ParamLimits

0xf4e1,	// (0x0000f4e1) status_pane_g

0xd021,	// (0x0000d021) title_pane_ParamLimits

0xd021,	// (0x0000d021) title_pane

0xd084,	// (0x0000d084) uni_indicator_pane_ParamLimits

0xd084,	// (0x0000d084) uni_indicator_pane

0x2b5e,	// (0x00002b5e) bg_list_pane_ParamLimits

0x2b5e,	// (0x00002b5e) bg_list_pane

0xc63d,	// (0x0000c63d) find_pane

0x38bf,	// (0x000038bf) listscroll_app_pane_ParamLimits

0x38bf,	// (0x000038bf) listscroll_app_pane

0x2b92,	// (0x00002b92) listscroll_form_pane

0xc645,	// (0x0000c645) listscroll_gen_pane_ParamLimits

0xc645,	// (0x0000c645) listscroll_gen_pane

0x2bae,	// (0x00002bae) listscroll_set_pane

0x4f3a,	// (0x00004f3a) main_idle_act_pane

0x263b,	// (0x0000263b) main_idle_trad_pane

0x263b,	// (0x0000263b) main_list_empty_pane

0x2b86,	// (0x00002b86) main_midp_pane

0x2bc8,	// (0x00002bc8) main_pane_g1_ParamLimits

0x2bc8,	// (0x00002bc8) main_pane_g1

0xc659,	// (0x0000c659) popup_ai_message_window_ParamLimits

0xc659,	// (0x0000c659) popup_ai_message_window

0xc6ea,	// (0x0000c6ea) popup_fep_china_uni_window_ParamLimits

0xc6ea,	// (0x0000c6ea) popup_fep_china_uni_window

0x2ce0,	// (0x00002ce0) popup_fep_japan_candidate_window_ParamLimits

0x2ce0,	// (0x00002ce0) popup_fep_japan_candidate_window

0x2d00,	// (0x00002d00) popup_fep_japan_predictive_window_ParamLimits

0x2d00,	// (0x00002d00) popup_fep_japan_predictive_window

0xc746,	// (0x0000c746) popup_find_window

0xc763,	// (0x0000c763) popup_grid_graphic_window_ParamLimits

0xc763,	// (0x0000c763) popup_grid_graphic_window

0x2d67,	// (0x00002d67) popup_large_graphic_colour_window

0xc801,	// (0x0000c801) popup_menu_window_ParamLimits

0xc801,	// (0x0000c801) popup_menu_window

0xc9d3,	// (0x0000c9d3) popup_note_image_window

0xc999,	// (0x0000c999) popup_note_wait_window_ParamLimits

0xc999,	// (0x0000c999) popup_note_wait_window

0xc9eb,	// (0x0000c9eb) popup_note_window_ParamLimits

0xc9eb,	// (0x0000c9eb) popup_note_window

0xca91,	// (0x0000ca91) popup_query_code_window_ParamLimits

0xca91,	// (0x0000ca91) popup_query_code_window

0x2faf,	// (0x00002faf) popup_query_data_code_window_ParamLimits

0x2faf,	// (0x00002faf) popup_query_data_code_window

0xcacb,	// (0x0000cacb) popup_query_data_window_ParamLimits

0xcacb,	// (0x0000cacb) popup_query_data_window

0xcb4d,	// (0x0000cb4d) popup_query_sat_info_window_ParamLimits

0xcb4d,	// (0x0000cb4d) popup_query_sat_info_window

0xcbe4,	// (0x0000cbe4) popup_snote_single_graphic_window_ParamLimits

0xcbe4,	// (0x0000cbe4) popup_snote_single_graphic_window

0xcbe4,	// (0x0000cbe4) popup_snote_single_text_window_ParamLimits

0xcbe4,	// (0x0000cbe4) popup_snote_single_text_window

0x3036,	// (0x00003036) popup_sub_window_general

0x3166,	// (0x00003166) popup_window_general_ParamLimits

0x3166,	// (0x00003166) popup_window_general

0x317b,	// (0x0000317b) power_save_pane

0xc49b,	// (0x0000c49b) control_pane_g1_ParamLimits

0xc49b,	// (0x0000c49b) control_pane_g1

0xc4c4,	// (0x0000c4c4) control_pane_g2_ParamLimits

0xc4c4,	// (0x0000c4c4) control_pane_g2

0x29f9,	// (0x000029f9) control_pane_g3_ParamLimits

0x29f9,	// (0x000029f9) control_pane_g3

0x0007,

0xf4c9,	// (0x0000f4c9) control_pane_g_ParamLimits

0xf4c9,	// (0x0000f4c9) control_pane_g

0xc52c,	// (0x0000c52c) control_pane_t1_ParamLimits

0xc52c,	// (0x0000c52c) control_pane_t1

0xc592,	// (0x0000c592) control_pane_t2_ParamLimits

0xc592,	// (0x0000c592) control_pane_t2

0x0002,

0xf4da,	// (0x0000f4da) control_pane_t_ParamLimits

0xf4da,	// (0x0000f4da) control_pane_t

0xc3f4,	// (0x0000c3f4) navi_navi_volume_pane_cp1

0xc3fc,	// (0x0000c3fc) status_small_icon_pane

0x28e0,	// (0x000028e0) status_small_pane_g1_ParamLimits

0x28e0,	// (0x000028e0) status_small_pane_g1

0xc404,	// (0x0000c404) status_small_pane_g2_ParamLimits

0xc404,	// (0x0000c404) status_small_pane_g2

0xc410,	// (0x0000c410) status_small_pane_g3_ParamLimits

0xc410,	// (0x0000c410) status_small_pane_g3

0xc41c,	// (0x0000c41c) status_small_pane_g4_ParamLimits

0xc41c,	// (0x0000c41c) status_small_pane_g4

0xc428,	// (0x0000c428) status_small_pane_g5_ParamLimits

0xc428,	// (0x0000c428) status_small_pane_g5

0xc436,	// (0x0000c436) status_small_pane_g6_ParamLimits

0xc436,	// (0x0000c436) status_small_pane_g6

0x0007,

0xf4b8,	// (0x0000f4b8) status_small_pane_g_ParamLimits

0xf4b8,	// (0x0000f4b8) status_small_pane_g

0xc465,	// (0x0000c465) status_small_pane_t1

0xc487,	// (0x0000c487) status_small_wait_pane_ParamLimits

0xc487,	// (0x0000c487) status_small_wait_pane

0xc22e,	// (0x0000c22e) aid_levels_signal_ParamLimits

0xc22e,	// (0x0000c22e) aid_levels_signal

0xc246,	// (0x0000c246) signal_pane_g1_ParamLimits

0xc246,	// (0x0000c246) signal_pane_g1

0xc261,	// (0x0000c261) signal_pane_g2_ParamLimits

0xc261,	// (0x0000c261) signal_pane_g2

0x0003,

0xf498,	// (0x0000f498) signal_pane_g_ParamLimits

0xf498,	// (0x0000f498) signal_pane_g

0x1ee2,	// (0x00001ee2) context_pane_g1

0xb860,	// (0x0000b860) title_pane_g1

0xb897,	// (0x0000b897) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf3c5,	// (0x0000f3c5) title_pane_t

0xd0ac,	// (0x0000d0ac) aid_levels_battery_ParamLimits

0xd0ac,	// (0x0000d0ac) aid_levels_battery

0xd0c8,	// (0x0000d0c8) battery_pane_g1_ParamLimits

0xd0c8,	// (0x0000d0c8) battery_pane_g1

0xd0e5,	// (0x0000d0e5) battery_pane_g2_ParamLimits

0xd0e5,	// (0x0000d0e5) battery_pane_g2

0x0001,

0xf4ec,	// (0x0000f4ec) battery_pane_g_ParamLimits

0xf4ec,	// (0x0000f4ec) battery_pane_g

0xd32e,	// (0x0000d32e) uni_indicator_pane_g1

0xd343,	// (0x0000d343) uni_indicator_pane_g2

0xd359,	// (0x0000d359) uni_indicator_pane_g3

0x0005,

0xf523,	// (0x0000f523) uni_indicator_pane_g

0x24ad,	// (0x000024ad) navi_icon_pane_ParamLimits

0x24ad,	// (0x000024ad) navi_icon_pane

0x23eb,	// (0x000023eb) navi_midp_pane

0x24c9,	// (0x000024c9) navi_navi_pane

0x24d3,	// (0x000024d3) navi_text_pane_ParamLimits

0x24d3,	// (0x000024d3) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09f5,	// (0x000009f5) status_small_wait_pane_g2

0x0001,

0xb04c,	// (0x0000b04c) status_small_wait_pane_g

0x492f,	// (0x0000492f) navi_navi_icon_text_pane

0x4937,	// (0x00004937) navi_navi_pane_g1_ParamLimits

0x4937,	// (0x00004937) navi_navi_pane_g1

0x4949,	// (0x00004949) navi_navi_pane_g2_ParamLimits

0x4949,	// (0x00004949) navi_navi_pane_g2

0x0001,

0xb01a,	// (0x0000b01a) navi_navi_pane_g_ParamLimits

0xb01a,	// (0x0000b01a) navi_navi_pane_g

0x495b,	// (0x0000495b) navi_navi_tabs_pane

0x4964,	// (0x00004964) navi_navi_text_pane

0x492f,	// (0x0000492f) navi_navi_volume_pane

0x490b,	// (0x0000490b) navi_text_pane_t1

0x48ff,	// (0x000048ff) navi_icon_pane_g1

0x4852,	// (0x00004852) navi_navi_text_pane_t1

0x4841,	// (0x00004841) navi_navi_volume_pane_g1

0x4849,	// (0x00004849) volume_small_pane

0x47a7,	// (0x000047a7) navi_navi_icon_text_pane_g1

0x47af,	// (0x000047af) navi_navi_icon_text_pane_t1

0x24c9,	// (0x000024c9) navi_tabs_2_long_pane

0x24c9,	// (0x000024c9) navi_tabs_2_pane

0x24c9,	// (0x000024c9) navi_tabs_3_long_pane

0x24c9,	// (0x000024c9) navi_tabs_3_pane

0x24c9,	// (0x000024c9) navi_tabs_4_pane

0x4706,	// (0x00004706) tabs_2_active_pane_ParamLimits

0x4706,	// (0x00004706) tabs_2_active_pane

0x4716,	// (0x00004716) tabs_2_passive_pane_ParamLimits

0x4716,	// (0x00004716) tabs_2_passive_pane

0x46d4,	// (0x000046d4) tabs_3_active_pane_ParamLimits

0x46d4,	// (0x000046d4) tabs_3_active_pane

0x46e4,	// (0x000046e4) tabs_3_passive_pane_ParamLimits

0x46e4,	// (0x000046e4) tabs_3_passive_pane

0x46f5,	// (0x000046f5) tabs_3_passive_pane_cp_ParamLimits

0x46f5,	// (0x000046f5) tabs_3_passive_pane_cp

0x4690,	// (0x00004690) tabs_4_active_pane_ParamLimits

0x4690,	// (0x00004690) tabs_4_active_pane

0x46a1,	// (0x000046a1) tabs_4_passive_pane_ParamLimits

0x46a1,	// (0x000046a1) tabs_4_passive_pane

0x46b2,	// (0x000046b2) tabs_4_passive_pane_cp_ParamLimits

0x46b2,	// (0x000046b2) tabs_4_passive_pane_cp

0x46c3,	// (0x000046c3) tabs_4_passive_pane_cp2_ParamLimits

0x46c3,	// (0x000046c3) tabs_4_passive_pane_cp2

0x466c,	// (0x0000466c) tabs_2_long_active_pane_ParamLimits

0x466c,	// (0x0000466c) tabs_2_long_active_pane

0x467e,	// (0x0000467e) tabs_2_long_passive_pane_ParamLimits

0x467e,	// (0x0000467e) tabs_2_long_passive_pane

0x462d,	// (0x0000462d) tabs_3_long_active_pane_ParamLimits

0x462d,	// (0x0000462d) tabs_3_long_active_pane

0x4640,	// (0x00004640) tabs_3_long_passive_pane_ParamLimits

0x4640,	// (0x00004640) tabs_3_long_passive_pane

0x4659,	// (0x00004659) tabs_3_long_passive_pane_cp_ParamLimits

0x4659,	// (0x00004659) tabs_3_long_passive_pane_cp

0x45d3,	// (0x000045d3) volume_small_pane_g1

0x45dc,	// (0x000045dc) volume_small_pane_g2

0x45e5,	// (0x000045e5) volume_small_pane_g3

0x45ee,	// (0x000045ee) volume_small_pane_g4

0x45f7,	// (0x000045f7) volume_small_pane_g5

0x4600,	// (0x00004600) volume_small_pane_g6

0x4609,	// (0x00004609) volume_small_pane_g7

0x4612,	// (0x00004612) volume_small_pane_g8

0x461b,	// (0x0000461b) volume_small_pane_g9

0x4624,	// (0x00004624) volume_small_pane_g10

0x0009,

0xafe6,	// (0x0000afe6) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb923,	// (0x0000b923) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb923,	// (0x0000b923) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb935,	// (0x0000b935) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb935,	// (0x0000b935) tabs_4_1_passive_pane_t1

0x2b86,	// (0x00002b86) list_highlight_pane_cp2

0xd3f1,	// (0x0000d3f1) list_set_pane_ParamLimits

0xd3f1,	// (0x0000d3f1) list_set_pane

0xd48b,	// (0x0000d48b) main_pane_set_t1_ParamLimits

0xd48b,	// (0x0000d48b) main_pane_set_t1

0xd4ab,	// (0x0000d4ab) main_pane_set_t2_ParamLimits

0xd4ab,	// (0x0000d4ab) main_pane_set_t2

0xd4bf,	// (0x0000d4bf) main_pane_set_t3_ParamLimits

0xd4bf,	// (0x0000d4bf) main_pane_set_t3

0xd4d1,	// (0x0000d4d1) main_pane_set_t4_ParamLimits

0xd4d1,	// (0x0000d4d1) main_pane_set_t4

0x0003,

0xf535,	// (0x0000f535) main_pane_set_t_ParamLimits

0xf535,	// (0x0000f535) main_pane_set_t

0xd4e3,	// (0x0000d4e3) setting_code_pane

0xd4ed,	// (0x0000d4ed) setting_slider_graphic_pane

0xd4ed,	// (0x0000d4ed) setting_slider_pane

0xd4ed,	// (0x0000d4ed) setting_text_pane

0xd4ed,	// (0x0000d4ed) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xac9a,	// (0x0000ac9a) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xaca1,	// (0x0000aca1) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f21,	// (0x00004f21) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2

0x4efb,	// (0x00004efb) set_opt_bg_pane_g3

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4

0x1505,	// (0x00001505) set_opt_bg_pane_g5

0x150d,	// (0x0000150d) set_opt_bg_pane_g6

0x4f05,	// (0x00004f05) set_opt_bg_pane_g7

0x4f0d,	// (0x00004f0d) set_opt_bg_pane_g8

0x4f17,	// (0x00004f17) set_opt_bg_pane_g9

0x0008,

0xb0a3,	// (0x0000b0a3) set_opt_bg_pane_g

0x4e8a,	// (0x00004e8a) slider_set_pane_g1

0x4e97,	// (0x00004e97) slider_set_pane_g2

0x0006,

0xb094,	// (0x0000b094) slider_set_pane_g

0x4d0a,	// (0x00004d0a) volume_set_pane_g1

0x4d12,	// (0x00004d12) volume_set_pane_g2

0x4d1a,	// (0x00004d1a) volume_set_pane_g3

0x4d22,	// (0x00004d22) volume_set_pane_g4

0x4d2a,	// (0x00004d2a) volume_set_pane_g5

0x4d32,	// (0x00004d32) volume_set_pane_g6

0x4d3a,	// (0x00004d3a) volume_set_pane_g7

0x4d42,	// (0x00004d42) volume_set_pane_g8

0x4d4a,	// (0x00004d4a) volume_set_pane_g9

0x4d52,	// (0x00004d52) volume_set_pane_g10

0x0009,

0xb06c,	// (0x0000b06c) volume_set_pane_g

0xb947,	// (0x0000b947) indicator_pane_ParamLimits

0xb947,	// (0x0000b947) indicator_pane

0xb96f,	// (0x0000b96f) main_idle_pane_g2_ParamLimits

0xb96f,	// (0x0000b96f) main_idle_pane_g2

0xb9a7,	// (0x0000b9a7) main_pane_idle_g1_ParamLimits

0xb9a7,	// (0x0000b9a7) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb9ce,	// (0x0000b9ce) soft_indicator_pane_ParamLimits

0xb9ce,	// (0x0000b9ce) soft_indicator_pane

0xb9e8,	// (0x0000b9e8) wallpaper_pane_ParamLimits

0xb9e8,	// (0x0000b9e8) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb9fa,	// (0x0000b9fa) indicator_pane_g1_ParamLimits

0xb9fa,	// (0x0000b9fa) indicator_pane_g1

0x5489,	// (0x00005489) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xba10,	// (0x0000ba10) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xaca6,	// (0x0000aca6) power_save_pane_g_ParamLimits

0xaca6,	// (0x0000aca6) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xba10,	// (0x0000ba10) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xacab,	// (0x0000acab) power_save_pane_t_ParamLimits

0xacab,	// (0x0000acab) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xba1e,	// (0x0000ba1e) ai_gene_pane_ParamLimits

0xba1e,	// (0x0000ba1e) ai_gene_pane

0xba35,	// (0x0000ba35) ai_links_pane_ParamLimits

0xba35,	// (0x0000ba35) ai_links_pane

0xba4d,	// (0x0000ba4d) indicator_pane_cp1_ParamLimits

0xba4d,	// (0x0000ba4d) indicator_pane_cp1

0xba5c,	// (0x0000ba5c) main_pane_idle_g1_cp_ParamLimits

0xba5c,	// (0x0000ba5c) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xba74,	// (0x0000ba74) soft_indicator_pane_cp1_ParamLimits

0xba74,	// (0x0000ba74) soft_indicator_pane_cp1

0x4bf8,	// (0x00004bf8) ai_links_pane_g1

0x4c01,	// (0x00004c01) grid_ai_links_pane

0xd325,	// (0x0000d325) ai_gene_pane_1

0x4be6,	// (0x00004be6) ai_gene_pane_2

0x4bef,	// (0x00004bef) list_highlight_pane_cp4

0xd301,	// (0x0000d301) cell_ai_link_pane_ParamLimits

0xd301,	// (0x0000d301) cell_ai_link_pane

0x4bb7,	// (0x00004bb7) cell_ai_link_pane_g1

0x09f5,	// (0x000009f5) cell_ai_link_pane_g2

0x0001,

0xb047,	// (0x0000b047) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4b05,	// (0x00004b05) ai_gene_pane_1_g1_ParamLimits

0x4b05,	// (0x00004b05) ai_gene_pane_1_g1

0x4b11,	// (0x00004b11) ai_gene_pane_1_g2_ParamLimits

0x4b11,	// (0x00004b11) ai_gene_pane_1_g2

0x0001,

0xb03d,	// (0x0000b03d) ai_gene_pane_1_g_ParamLimits

0xb03d,	// (0x0000b03d) ai_gene_pane_1_g

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t1_ParamLimits

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t1

0x4b52,	// (0x00004b52) grid_ai_soft_ind_pane

0x4af0,	// (0x00004af0) ai_gene_pane_2_t1_ParamLimits

0x4af0,	// (0x00004af0) ai_gene_pane_2_t1

0xba88,	// (0x0000ba88) main_pane_empty_t1_ParamLimits

0xba88,	// (0x0000ba88) main_pane_empty_t1

0xbaa0,	// (0x0000baa0) main_pane_empty_t2_ParamLimits

0xbaa0,	// (0x0000baa0) main_pane_empty_t2

0xbab5,	// (0x0000bab5) main_pane_empty_t3_ParamLimits

0xbab5,	// (0x0000bab5) main_pane_empty_t3

0xbac7,	// (0x0000bac7) main_pane_empty_t4_ParamLimits

0xbac7,	// (0x0000bac7) main_pane_empty_t4

0xbad9,	// (0x0000bad9) main_pane_empty_t5_ParamLimits

0xbad9,	// (0x0000bad9) main_pane_empty_t5

0x0004,

0xf3cc,	// (0x0000f3cc) main_pane_empty_t_ParamLimits

0xf3cc,	// (0x0000f3cc) main_pane_empty_t

0x15e2,	// (0x000015e2) bg_popup_window_pane_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_window_pane

0x4860,	// (0x00004860) find_popup_pane_cp2_ParamLimits

0x4860,	// (0x00004860) find_popup_pane_cp2

0x486c,	// (0x0000486c) heading_pane_ParamLimits

0x486c,	// (0x0000486c) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd282,	// (0x0000d282) bg_popup_window_pane_g1_ParamLimits

0xd282,	// (0x0000d282) bg_popup_window_pane_g1

0xd291,	// (0x0000d291) bg_popup_window_pane_g2_ParamLimits

0xd291,	// (0x0000d291) bg_popup_window_pane_g2

0xd29d,	// (0x0000d29d) bg_popup_window_pane_g3_ParamLimits

0xd29d,	// (0x0000d29d) bg_popup_window_pane_g3

0xd2a9,	// (0x0000d2a9) bg_popup_window_pane_g4_ParamLimits

0xd2a9,	// (0x0000d2a9) bg_popup_window_pane_g4

0xd2b8,	// (0x0000d2b8) bg_popup_window_pane_g5_ParamLimits

0xd2b8,	// (0x0000d2b8) bg_popup_window_pane_g5

0xd2c8,	// (0x0000d2c8) bg_popup_window_pane_g6_ParamLimits

0xd2c8,	// (0x0000d2c8) bg_popup_window_pane_g6

0xd2d4,	// (0x0000d2d4) bg_popup_window_pane_g7_ParamLimits

0xd2d4,	// (0x0000d2d4) bg_popup_window_pane_g7

0xd2e3,	// (0x0000d2e3) bg_popup_window_pane_g8_ParamLimits

0xd2e3,	// (0x0000d2e3) bg_popup_window_pane_g8

0xd2f2,	// (0x0000d2f2) bg_popup_window_pane_g9_ParamLimits

0xd2f2,	// (0x0000d2f2) bg_popup_window_pane_g9

0x4835,	// (0x00004835) bg_popup_window_pane_g10_ParamLimits

0x4835,	// (0x00004835) bg_popup_window_pane_g10

0x0009,

0xf50e,	// (0x0000f50e) bg_popup_window_pane_g_ParamLimits

0xf50e,	// (0x0000f50e) bg_popup_window_pane_g

0x475e,	// (0x0000475e) bg_popup_heading_pane_ParamLimits

0x475e,	// (0x0000475e) bg_popup_heading_pane

0x53cc,	// (0x000053cc) tabs_4_passive_pane_cp_srt_ParamLimits

0x53cc,	// (0x000053cc) tabs_4_passive_pane_cp_srt

0x53de,	// (0x000053de) tabs_4_passive_pane_srt_ParamLimits

0x4772,	// (0x00004772) heading_pane_g2

0x53de,	// (0x000053de) tabs_4_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp3_srt

0x477a,	// (0x0000477a) heading_pane_t1_ParamLimits

0x477a,	// (0x0000477a) heading_pane_t1

0x4791,	// (0x00004791) heading_pane_t2_ParamLimits

0x4791,	// (0x00004791) heading_pane_t2

0x0001,

0xb000,	// (0x0000b000) heading_pane_t_ParamLimits

0xb000,	// (0x0000b000) heading_pane_t

0x4138,	// (0x00004138) bg_popup_heading_pane_g1

0x41e7,	// (0x000041e7) bg_popup_heading_pane_g2

0x41f1,	// (0x000041f1) bg_popup_heading_pane_g3

0x41fb,	// (0x000041fb) bg_popup_heading_pane_g4

0x4205,	// (0x00004205) bg_popup_heading_pane_g5

0x420f,	// (0x0000420f) bg_popup_heading_pane_g6

0x4217,	// (0x00004217) bg_popup_heading_pane_g7

0x421f,	// (0x0000421f) bg_popup_heading_pane_g8

0x4229,	// (0x00004229) bg_popup_heading_pane_g9

0x0008,

0xafbc,	// (0x0000afbc) bg_popup_heading_pane_g

0x3711,	// (0x00003711) bg_popup_sub_pane_g1

0x3719,	// (0x00003719) bg_popup_sub_pane_g2

0x3721,	// (0x00003721) bg_popup_sub_pane_g3

0x3729,	// (0x00003729) bg_popup_sub_pane_g4

0x3731,	// (0x00003731) bg_popup_sub_pane_g5

0x3739,	// (0x00003739) bg_popup_sub_pane_g6

0x3741,	// (0x00003741) bg_popup_sub_pane_g7

0x3749,	// (0x00003749) bg_popup_sub_pane_g8

0x3751,	// (0x00003751) bg_popup_sub_pane_g9

0x0008,

0xaf96,	// (0x0000af96) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xacbb,	// (0x0000acbb) popup_note_window_t_ParamLimits

0xacbb,	// (0x0000acbb) popup_note_window_t

0x0909,	// (0x00000909) bg_popup_window_pane_cp6_ParamLimits

0x0909,	// (0x00000909) bg_popup_window_pane_cp6

0x40b4,	// (0x000040b4) popup_note_image_window_g1_ParamLimits

0x40b4,	// (0x000040b4) popup_note_image_window_g1

0x40c0,	// (0x000040c0) popup_note_image_window_g2_ParamLimits

0x40c0,	// (0x000040c0) popup_note_image_window_g2

0x0001,

0xaf8a,	// (0x0000af8a) popup_note_image_window_g_ParamLimits

0xaf8a,	// (0x0000af8a) popup_note_image_window_g

0x40d9,	// (0x000040d9) popup_note_image_window_t1_ParamLimits

0x40d9,	// (0x000040d9) popup_note_image_window_t1

0x40f2,	// (0x000040f2) popup_note_image_window_t2_ParamLimits

0x40f2,	// (0x000040f2) popup_note_image_window_t2

0x410b,	// (0x0000410b) popup_note_image_window_t3_ParamLimits

0x410b,	// (0x0000410b) popup_note_image_window_t3

0x0002,

0xaf8f,	// (0x0000af8f) popup_note_image_window_t_ParamLimits

0xaf8f,	// (0x0000af8f) popup_note_image_window_t

0x3f75,	// (0x00003f75) bg_popup_window_pane_cp7_ParamLimits

0x3f75,	// (0x00003f75) bg_popup_window_pane_cp7

0x3fa5,	// (0x00003fa5) popup_note_wait_window_g1_ParamLimits

0x3fa5,	// (0x00003fa5) popup_note_wait_window_g1

0x3fb1,	// (0x00003fb1) popup_note_wait_window_g2_ParamLimits

0x3fb1,	// (0x00003fb1) popup_note_wait_window_g2

0x0002,

0xaf78,	// (0x0000af78) popup_note_wait_window_g_ParamLimits

0xaf78,	// (0x0000af78) popup_note_wait_window_g

0x3fc9,	// (0x00003fc9) popup_note_wait_window_t1_ParamLimits

0x3fc9,	// (0x00003fc9) popup_note_wait_window_t1

0x3ff0,	// (0x00003ff0) popup_note_wait_window_t2_ParamLimits

0x3ff0,	// (0x00003ff0) popup_note_wait_window_t2

0x400d,	// (0x0000400d) popup_note_wait_window_t3_ParamLimits

0x400d,	// (0x0000400d) popup_note_wait_window_t3

0x4020,	// (0x00004020) popup_note_wait_window_t4_ParamLimits

0x4020,	// (0x00004020) popup_note_wait_window_t4

0x0004,

0xaf7f,	// (0x0000af7f) popup_note_wait_window_t_ParamLimits

0xaf7f,	// (0x0000af7f) popup_note_wait_window_t

0x4045,	// (0x00004045) wait_bar_pane_ParamLimits

0x4045,	// (0x00004045) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xae3a,	// (0x0000ae3a) wait_anim_pane_g

0x3f19,	// (0x00003f19) wait_border_pane_g1

0x3f24,	// (0x00003f24) wait_border_pane_g2

0x3f2d,	// (0x00003f2d) wait_border_pane_g3

0x0002,

0xaf71,	// (0x0000af71) wait_border_pane_g

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp16_ParamLimits

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp16

0x3e84,	// (0x00003e84) indicator_popup_pane_cp4_ParamLimits

0x3e84,	// (0x00003e84) indicator_popup_pane_cp4

0x3e98,	// (0x00003e98) popup_query_data_window_t1_ParamLimits

0x3e98,	// (0x00003e98) popup_query_data_window_t1

0x3eaa,	// (0x00003eaa) popup_query_data_window_t2_ParamLimits

0x3eaa,	// (0x00003eaa) popup_query_data_window_t2

0x3ec3,	// (0x00003ec3) popup_query_data_window_t3_ParamLimits

0x3ec3,	// (0x00003ec3) popup_query_data_window_t3

0x0002,

0xaf6a,	// (0x0000af6a) popup_query_data_window_t_ParamLimits

0xaf6a,	// (0x0000af6a) popup_query_data_window_t

0x3edd,	// (0x00003edd) query_popup_data_pane_ParamLimits

0x3edd,	// (0x00003edd) query_popup_data_pane

0x3ef1,	// (0x00003ef1) query_popup_data_pane_cp1_ParamLimits

0x3ef1,	// (0x00003ef1) query_popup_data_pane_cp1

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp10_ParamLimits

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp10

0x3db6,	// (0x00003db6) indicator_popup_pane_ParamLimits

0x3db6,	// (0x00003db6) indicator_popup_pane

0x3dd8,	// (0x00003dd8) popup_query_code_window_t1_ParamLimits

0x3dd8,	// (0x00003dd8) popup_query_code_window_t1

0x3df2,	// (0x00003df2) popup_query_code_window_t2_ParamLimits

0x3df2,	// (0x00003df2) popup_query_code_window_t2

0x3e3b,	// (0x00003e3b) popup_query_code_window_t3_ParamLimits

0x3e3b,	// (0x00003e3b) popup_query_code_window_t3

0x0002,

0xaf63,	// (0x0000af63) popup_query_code_window_t_ParamLimits

0xaf63,	// (0x0000af63) popup_query_code_window_t

0x3e6a,	// (0x00003e6a) query_popup_pane_ParamLimits

0x3e6a,	// (0x00003e6a) query_popup_pane

0x0909,	// (0x00000909) bg_popup_window_pane_cp15_ParamLimits

0x0909,	// (0x00000909) bg_popup_window_pane_cp15

0x0927,	// (0x00000927) indicator_popup_pane_cp1_ParamLimits

0x0927,	// (0x00000927) indicator_popup_pane_cp1

0x093a,	// (0x0000093a) indicator_popup_pane_cp2_ParamLimits

0x093a,	// (0x0000093a) indicator_popup_pane_cp2

0x094d,	// (0x0000094d) popup_query_data_code_window_g1_ParamLimits

0x094d,	// (0x0000094d) popup_query_data_code_window_g1

0x0960,	// (0x00000960) popup_query_data_code_window_t1_ParamLimits

0x0960,	// (0x00000960) popup_query_data_code_window_t1

0x0972,	// (0x00000972) popup_query_data_code_window_t2_ParamLimits

0x0972,	// (0x00000972) popup_query_data_code_window_t2

0x0984,	// (0x00000984) popup_query_data_code_window_t3_ParamLimits

0x0984,	// (0x00000984) popup_query_data_code_window_t3

0x099a,	// (0x0000099a) popup_query_data_code_window_t4_ParamLimits

0x099a,	// (0x0000099a) popup_query_data_code_window_t4

0x0003,

0xacc6,	// (0x0000acc6) popup_query_data_code_window_t_ParamLimits

0xacc6,	// (0x0000acc6) popup_query_data_code_window_t

0x377e,	// (0x0000377e) list_single_midp_graphic_pane_g3

0x09b2,	// (0x000009b2) query_popup_data_pane_cp2_ParamLimits

0x09c5,	// (0x000009c5) query_popup_pane_cp2_ParamLimits

0x09c5,	// (0x000009c5) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d70,	// (0x00003d70) heading_pane_cp5

0x0ab0,	// (0x00000ab0) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09d8,	// (0x000009d8) query_popup_pane_t1

0x09e6,	// (0x000009e6) list_popup_info_pane_ParamLimits

0x09e6,	// (0x000009e6) list_popup_info_pane

0x09f5,	// (0x000009f5) listscroll_popup_info_pane_g1

0x09fd,	// (0x000009fd) scroll_pane_cp7

0x0a07,	// (0x00000a07) popup_info_list_pane_t1_ParamLimits

0x0a07,	// (0x00000a07) popup_info_list_pane_t1

0x0a21,	// (0x00000a21) popup_info_list_pane_t2_ParamLimits

0x0a21,	// (0x00000a21) popup_info_list_pane_t2

0x0001,

0xaccf,	// (0x0000accf) popup_info_list_pane_t_ParamLimits

0xaccf,	// (0x0000accf) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x54c0,	// (0x000054c0) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a3b,	// (0x00000a3b) heading_pane_cp3

0x0a47,	// (0x00000a47) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xbb3b,	// (0x0000bb3b) heading_pane_cp4

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane

0x0ab8,	// (0x00000ab8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0ab8,	// (0x00000ab8) cell_large_graphic_colour_none_popup_pane

0xbb43,	// (0x0000bb43) grid_large_graphic_colour_popup_pane_ParamLimits

0xbb43,	// (0x0000bb43) grid_large_graphic_colour_popup_pane

0x0af8,	// (0x00000af8) listscroll_popup_colour_pane_g1_ParamLimits

0x0af8,	// (0x00000af8) listscroll_popup_colour_pane_g1

0x0b0f,	// (0x00000b0f) listscroll_popup_colour_pane_g2_ParamLimits

0x0b0f,	// (0x00000b0f) listscroll_popup_colour_pane_g2

0x0b26,	// (0x00000b26) listscroll_popup_colour_pane_g3_ParamLimits

0x0b26,	// (0x00000b26) listscroll_popup_colour_pane_g3

0xbb67,	// (0x0000bb67) listscroll_popup_colour_pane_g4_ParamLimits

0xbb67,	// (0x0000bb67) listscroll_popup_colour_pane_g4

0x0003,

0xf3d7,	// (0x0000f3d7) listscroll_popup_colour_pane_g_ParamLimits

0xf3d7,	// (0x0000f3d7) listscroll_popup_colour_pane_g

0x0b4a,	// (0x00000b4a) scroll_pane_cp6_ParamLimits

0x0b4a,	// (0x00000b4a) scroll_pane_cp6

0xbb77,	// (0x0000bb77) cell_large_graphic_colour_popup_pane_ParamLimits

0xbb77,	// (0x0000bb77) cell_large_graphic_colour_popup_pane

0x0b7b,	// (0x00000b7b) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b8a,	// (0x00000b8a) cell_large_graphic_colour_popup_pane_g1

0x0b92,	// (0x00000b92) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xacdd,	// (0x0000acdd) cell_large_graphic_colour_popup_pane_g

0x0b9a,	// (0x00000b9a) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp4

0x0bab,	// (0x00000bab) bg_popup_window_pane_cp8_ParamLimits

0x0bab,	// (0x00000bab) bg_popup_window_pane_cp8

0x0bc6,	// (0x00000bc6) popup_snote_single_text_window_g1_ParamLimits

0x0bc6,	// (0x00000bc6) popup_snote_single_text_window_g1

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t1_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t1

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t2_ParamLimits

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t2

0x0bfe,	// (0x00000bfe) popup_snote_single_text_window_t3_ParamLimits

0x0bfe,	// (0x00000bfe) popup_snote_single_text_window_t3

0x0c37,	// (0x00000c37) popup_snote_single_text_window_t4_ParamLimits

0x0c37,	// (0x00000c37) popup_snote_single_text_window_t4

0x0c6b,	// (0x00000c6b) popup_snote_single_text_window_t5_ParamLimits

0x0c6b,	// (0x00000c6b) popup_snote_single_text_window_t5

0x0004,

0xace2,	// (0x0000ace2) popup_snote_single_text_window_t_ParamLimits

0xace2,	// (0x0000ace2) popup_snote_single_text_window_t

0x0c9a,	// (0x00000c9a) bg_popup_window_pane_cp9_ParamLimits

0x0c9a,	// (0x00000c9a) bg_popup_window_pane_cp9

0x0bc6,	// (0x00000bc6) popup_snote_single_graphic_window_g1_ParamLimits

0x0bc6,	// (0x00000bc6) popup_snote_single_graphic_window_g1

0x0ca8,	// (0x00000ca8) popup_snote_single_graphic_window_g2_ParamLimits

0x0ca8,	// (0x00000ca8) popup_snote_single_graphic_window_g2

0x0001,

0xaced,	// (0x0000aced) popup_snote_single_graphic_window_g_ParamLimits

0xaced,	// (0x0000aced) popup_snote_single_graphic_window_g

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t1_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t1

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t2_ParamLimits

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t2

0x0cda,	// (0x00000cda) popup_snote_single_graphic_window_t3_ParamLimits

0x0cda,	// (0x00000cda) popup_snote_single_graphic_window_t3

0x0d13,	// (0x00000d13) popup_snote_single_graphic_window_t4_ParamLimits

0x0d13,	// (0x00000d13) popup_snote_single_graphic_window_t4

0x0d47,	// (0x00000d47) popup_snote_single_graphic_window_t5_ParamLimits

0x0d47,	// (0x00000d47) popup_snote_single_graphic_window_t5

0x0004,

0xacf2,	// (0x0000acf2) popup_snote_single_graphic_window_t_ParamLimits

0xacf2,	// (0x0000acf2) popup_snote_single_graphic_window_t

0x534a,	// (0x0000534a) grid_graphic_popup_pane_ParamLimits

0x534a,	// (0x0000534a) grid_graphic_popup_pane

0x5374,	// (0x00005374) listscroll_popup_graphic_pane_g1_ParamLimits

0x5374,	// (0x00005374) listscroll_popup_graphic_pane_g1

0xd63a,	// (0x0000d63a) listscroll_popup_graphic_pane_g2_ParamLimits

0xd63a,	// (0x0000d63a) listscroll_popup_graphic_pane_g2

0x0001,

0xf558,	// (0x0000f558) listscroll_popup_graphic_pane_g_ParamLimits

0xf558,	// (0x0000f558) listscroll_popup_graphic_pane_g

0x539c,	// (0x0000539c) scroll_pane_cp5

0xd5df,	// (0x0000d5df) cell_graphic_popup_pane_ParamLimits

0xd5df,	// (0x0000d5df) cell_graphic_popup_pane

0x52ca,	// (0x000052ca) cell_graphic_popup_pane_g1

0x52d2,	// (0x000052d2) cell_graphic_popup_pane_g2

0x0b9a,	// (0x00000b9a) cell_graphic_popup_pane_g3

0x0002,

0xb0d9,	// (0x0000b0d9) cell_graphic_popup_pane_g

0x52db,	// (0x000052db) cell_graphic_popup_pane_t2

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp3

0x0d88,	// (0x00000d88) list_gen_pane_ParamLimits

0x0d88,	// (0x00000d88) list_gen_pane

0x0dba,	// (0x00000dba) scroll_pane

0xd596,	// (0x0000d596) bg_list_pane_g1_ParamLimits

0xd596,	// (0x0000d596) bg_list_pane_g1

0x523f,	// (0x0000523f) bg_list_pane_g2_ParamLimits

0x523f,	// (0x0000523f) bg_list_pane_g2

0x5254,	// (0x00005254) bg_list_pane_g3_ParamLimits

0x5254,	// (0x00005254) bg_list_pane_g3

0x5268,	// (0x00005268) bg_list_pane_g4_ParamLimits

0x5268,	// (0x00005268) bg_list_pane_g4

0xd5b3,	// (0x0000d5b3) bg_list_pane_g5_ParamLimits

0xd5b3,	// (0x0000d5b3) bg_list_pane_g5

0x0004,

0xf54d,	// (0x0000f54d) bg_list_pane_g_ParamLimits

0xf54d,	// (0x0000f54d) bg_list_pane_g

0xd53c,	// (0x0000d53c) list_double2_graphic_large_graphic_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double2_graphic_large_graphic_pane

0xd53c,	// (0x0000d53c) list_double2_graphic_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double2_graphic_pane

0xd53c,	// (0x0000d53c) list_double2_large_graphic_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double2_large_graphic_pane

0xd53c,	// (0x0000d53c) list_double2_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double2_pane

0xd53c,	// (0x0000d53c) list_double_graphic_heading_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_graphic_heading_pane

0xd53c,	// (0x0000d53c) list_double_graphic_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_graphic_pane

0xd53c,	// (0x0000d53c) list_double_heading_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_heading_pane

0xd53c,	// (0x0000d53c) list_double_large_graphic_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_large_graphic_pane

0xd53c,	// (0x0000d53c) list_double_number_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_number_pane

0xd53c,	// (0x0000d53c) list_double_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_pane

0xd53c,	// (0x0000d53c) list_double_time_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_double_time_pane

0xd53c,	// (0x0000d53c) list_setting_number_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_setting_number_pane

0xd53c,	// (0x0000d53c) list_setting_pane_ParamLimits

0xd53c,	// (0x0000d53c) list_setting_pane

0xd54e,	// (0x0000d54e) list_single_2graphic_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_2graphic_pane

0xd54e,	// (0x0000d54e) list_single_graphic_heading_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_graphic_heading_pane

0xd54e,	// (0x0000d54e) list_single_graphic_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_graphic_pane

0xd54e,	// (0x0000d54e) list_single_heading_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_heading_pane

0xd54e,	// (0x0000d54e) list_single_large_graphic_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_large_graphic_pane

0xd54e,	// (0x0000d54e) list_single_number_heading_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_number_heading_pane

0xd54e,	// (0x0000d54e) list_single_number_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_number_pane

0xd54e,	// (0x0000d54e) list_single_pane_ParamLimits

0xd54e,	// (0x0000d54e) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2574,	// (0x00002574) list_single_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_pane_g1

0x35b5,	// (0x000035b5) list_single_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_pane_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_pane_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_pane_g

0x5aee,	// (0x00005aee) list_single_pane_t1_ParamLimits

0x5aee,	// (0x00005aee) list_single_pane_t1

0x2574,	// (0x00002574) list_single_number_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_pane_g1

0x35b5,	// (0x000035b5) list_single_number_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_pane_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_number_pane_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_number_pane_g

0x369f,	// (0x0000369f) list_single_number_pane_t1_ParamLimits

0x369f,	// (0x0000369f) list_single_number_pane_t1

0xd38d,	// (0x0000d38d) list_single_number_pane_t2_ParamLimits

0xd38d,	// (0x0000d38d) list_single_number_pane_t2

0x0001,

0xf530,	// (0x0000f530) list_single_number_pane_t_ParamLimits

0xf530,	// (0x0000f530) list_single_number_pane_t

0xbba0,	// (0x0000bba0) list_single_graphic_pane_g1_ParamLimits

0xbba0,	// (0x0000bba0) list_single_graphic_pane_g1

0x2574,	// (0x00002574) list_single_graphic_pane_g2_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_pane_g3

0x0002,

0xf3e0,	// (0x0000f3e0) list_single_graphic_pane_g_ParamLimits

0xf3e0,	// (0x0000f3e0) list_single_graphic_pane_g

0xbbac,	// (0x0000bbac) list_single_graphic_pane_t1_ParamLimits

0xbbac,	// (0x0000bbac) list_single_graphic_pane_t1

0x2574,	// (0x00002574) list_single_heading_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_heading_pane_g1

0x35b5,	// (0x000035b5) list_single_heading_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_heading_pane_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_heading_pane_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_heading_pane_g

0xbbc2,	// (0x0000bbc2) list_single_heading_pane_t1_ParamLimits

0xbbc2,	// (0x0000bbc2) list_single_heading_pane_t1

0xbbd8,	// (0x0000bbd8) list_single_heading_pane_t2_ParamLimits

0xbbd8,	// (0x0000bbd8) list_single_heading_pane_t2

0x0001,

0xf3e7,	// (0x0000f3e7) list_single_heading_pane_t_ParamLimits

0xf3e7,	// (0x0000f3e7) list_single_heading_pane_t

0x2574,	// (0x00002574) list_single_number_heading_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_heading_pane_g1

0x35b5,	// (0x000035b5) list_single_number_heading_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_heading_pane_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_number_heading_pane_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_number_heading_pane_g

0xbbc2,	// (0x0000bbc2) list_single_number_heading_pane_t1_ParamLimits

0xbbc2,	// (0x0000bbc2) list_single_number_heading_pane_t1

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_t2_ParamLimits

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_t2

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t3_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t3

0x0002,

0xf3ec,	// (0x0000f3ec) list_single_number_heading_pane_t_ParamLimits

0xf3ec,	// (0x0000f3ec) list_single_number_heading_pane_t

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_g1

0xbbea,	// (0x0000bbea) list_single_graphic_heading_pane_g4_ParamLimits

0xbbea,	// (0x0000bbea) list_single_graphic_heading_pane_g4

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_g5

0x0002,

0xf3f3,	// (0x0000f3f3) list_single_graphic_heading_pane_g_ParamLimits

0xf3f3,	// (0x0000f3f3) list_single_graphic_heading_pane_g

0xbbc2,	// (0x0000bbc2) list_single_graphic_heading_pane_t1_ParamLimits

0xbbc2,	// (0x0000bbc2) list_single_graphic_heading_pane_t1

0xbbfb,	// (0x0000bbfb) list_single_graphic_heading_pane_t2_ParamLimits

0xbbfb,	// (0x0000bbfb) list_single_graphic_heading_pane_t2

0x0001,

0xf3fa,	// (0x0000f3fa) list_single_graphic_heading_pane_t_ParamLimits

0xf3fa,	// (0x0000f3fa) list_single_graphic_heading_pane_t

0x5b04,	// (0x00005b04) list_single_large_graphic_pane_g1_ParamLimits

0x5b04,	// (0x00005b04) list_single_large_graphic_pane_g1

0x2574,	// (0x00002574) list_single_large_graphic_pane_g2_ParamLimits

0x2574,	// (0x00002574) list_single_large_graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_large_graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_large_graphic_pane_g3

0x0002,

0xb169,	// (0x0000b169) list_single_large_graphic_pane_g_ParamLimits

0xb169,	// (0x0000b169) list_single_large_graphic_pane_g

0x3f24,	// (0x00003f24) wait_border_pane_g2_copy1

0xbc0d,	// (0x0000bc0d) list_single_large_graphic_pane_g4_cp2

0x5b10,	// (0x00005b10) list_single_large_graphic_pane_t1_ParamLimits

0x5b10,	// (0x00005b10) list_single_large_graphic_pane_t1

0x37d6,	// (0x000037d6) list_double_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_double_pane_g1

0xbc15,	// (0x0000bc15) list_double_pane_g2_ParamLimits

0xbc15,	// (0x0000bc15) list_double_pane_g2

0x0001,

0xf3ff,	// (0x0000f3ff) list_double_pane_g_ParamLimits

0xf3ff,	// (0x0000f3ff) list_double_pane_g

0x77a4,	// (0x000077a4) list_double_pane_t1_ParamLimits

0x77a4,	// (0x000077a4) list_double_pane_t1

0xbc21,	// (0x0000bc21) list_double_pane_t2_ParamLimits

0xbc21,	// (0x0000bc21) list_double_pane_t2

0x0001,

0xf404,	// (0x0000f404) list_double_pane_t_ParamLimits

0xf404,	// (0x0000f404) list_double_pane_t

0xbc33,	// (0x0000bc33) list_double2_pane_g1_ParamLimits

0xbc33,	// (0x0000bc33) list_double2_pane_g1

0xbc44,	// (0x0000bc44) list_double2_pane_g2_ParamLimits

0xbc44,	// (0x0000bc44) list_double2_pane_g2

0x0001,

0xf409,	// (0x0000f409) list_double2_pane_g_ParamLimits

0xf409,	// (0x0000f409) list_double2_pane_g

0xbc50,	// (0x0000bc50) list_double2_pane_t1_ParamLimits

0xbc50,	// (0x0000bc50) list_double2_pane_t1

0xbc66,	// (0x0000bc66) list_double2_pane_t2_ParamLimits

0xbc66,	// (0x0000bc66) list_double2_pane_t2

0x0001,

0xf40e,	// (0x0000f40e) list_double2_pane_t_ParamLimits

0xf40e,	// (0x0000f40e) list_double2_pane_t

0x37d6,	// (0x000037d6) list_double_number_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_double_number_pane_g1

0xbc15,	// (0x0000bc15) list_double_number_pane_g2_ParamLimits

0xbc15,	// (0x0000bc15) list_double_number_pane_g2

0x0001,

0xf3ff,	// (0x0000f3ff) list_double_number_pane_g_ParamLimits

0xf3ff,	// (0x0000f3ff) list_double_number_pane_g

0xbc78,	// (0x0000bc78) list_double_number_pane_t1_ParamLimits

0xbc78,	// (0x0000bc78) list_double_number_pane_t1

0xbc8a,	// (0x0000bc8a) list_double_number_pane_t2_ParamLimits

0xbc8a,	// (0x0000bc8a) list_double_number_pane_t2

0xbca0,	// (0x0000bca0) list_double_number_pane_t3_ParamLimits

0xbca0,	// (0x0000bca0) list_double_number_pane_t3

0x0002,

0xf413,	// (0x0000f413) list_double_number_pane_t_ParamLimits

0xf413,	// (0x0000f413) list_double_number_pane_t

0xbcb2,	// (0x0000bcb2) list_double_graphic_pane_g1_ParamLimits

0xbcb2,	// (0x0000bcb2) list_double_graphic_pane_g1

0xbcbe,	// (0x0000bcbe) list_double_graphic_pane_g2_ParamLimits

0xbcbe,	// (0x0000bcbe) list_double_graphic_pane_g2

0xbccd,	// (0x0000bccd) list_double_graphic_pane_g3_ParamLimits

0xbccd,	// (0x0000bccd) list_double_graphic_pane_g3

0x0003,

0xf41a,	// (0x0000f41a) list_double_graphic_pane_g_ParamLimits

0xf41a,	// (0x0000f41a) list_double_graphic_pane_g

0x37e2,	// (0x000037e2) list_double_graphic_pane_t1_ParamLimits

0x37e2,	// (0x000037e2) list_double_graphic_pane_t1

0xbce5,	// (0x0000bce5) list_double_graphic_pane_t2_ParamLimits

0xbce5,	// (0x0000bce5) list_double_graphic_pane_t2

0x0001,

0xf423,	// (0x0000f423) list_double_graphic_pane_t_ParamLimits

0xf423,	// (0x0000f423) list_double_graphic_pane_t

0xbcf7,	// (0x0000bcf7) list_double2_graphic_pane_g1_ParamLimits

0xbcf7,	// (0x0000bcf7) list_double2_graphic_pane_g1

0x245f,	// (0x0000245f) list_double2_graphic_pane_g2_ParamLimits

0x245f,	// (0x0000245f) list_double2_graphic_pane_g2

0xbc44,	// (0x0000bc44) list_double2_graphic_pane_g3_ParamLimits

0xbc44,	// (0x0000bc44) list_double2_graphic_pane_g3

0x0002,

0xf428,	// (0x0000f428) list_double2_graphic_pane_g_ParamLimits

0xf428,	// (0x0000f428) list_double2_graphic_pane_g

0xbd03,	// (0x0000bd03) list_double2_graphic_pane_t1_ParamLimits

0xbd03,	// (0x0000bd03) list_double2_graphic_pane_t1

0xbd19,	// (0x0000bd19) list_double2_graphic_pane_t2_ParamLimits

0xbd19,	// (0x0000bd19) list_double2_graphic_pane_t2

0x0001,

0xf42f,	// (0x0000f42f) list_double2_graphic_pane_t_ParamLimits

0xf42f,	// (0x0000f42f) list_double2_graphic_pane_t

0xbd2b,	// (0x0000bd2b) list_double_large_graphic_pane_g1_ParamLimits

0xbd2b,	// (0x0000bd2b) list_double_large_graphic_pane_g1

0xbd4a,	// (0x0000bd4a) list_double_large_graphic_pane_g2_ParamLimits

0xbd4a,	// (0x0000bd4a) list_double_large_graphic_pane_g2

0xbc15,	// (0x0000bc15) list_double_large_graphic_pane_g3_ParamLimits

0xbc15,	// (0x0000bc15) list_double_large_graphic_pane_g3

0xbd5b,	// (0x0000bd5b) list_double_large_graphic_pane_g4_ParamLimits

0xbd5b,	// (0x0000bd5b) list_double_large_graphic_pane_g4

0x0004,

0xf434,	// (0x0000f434) list_double_large_graphic_pane_g_ParamLimits

0xf434,	// (0x0000f434) list_double_large_graphic_pane_g

0xbd6d,	// (0x0000bd6d) list_double_large_graphic_pane_t1_ParamLimits

0xbd6d,	// (0x0000bd6d) list_double_large_graphic_pane_t1

0xbd86,	// (0x0000bd86) list_double_large_graphic_pane_t2_ParamLimits

0xbd86,	// (0x0000bd86) list_double_large_graphic_pane_t2

0x0001,

0xf43f,	// (0x0000f43f) list_double_large_graphic_pane_t_ParamLimits

0xf43f,	// (0x0000f43f) list_double_large_graphic_pane_t

0xbd98,	// (0x0000bd98) list_double2_large_graphic_pane_g1_ParamLimits

0xbd98,	// (0x0000bd98) list_double2_large_graphic_pane_g1

0xbc33,	// (0x0000bc33) list_double2_large_graphic_pane_g2_ParamLimits

0xbc33,	// (0x0000bc33) list_double2_large_graphic_pane_g2

0xbc44,	// (0x0000bc44) list_double2_large_graphic_pane_g3_ParamLimits

0xbc44,	// (0x0000bc44) list_double2_large_graphic_pane_g3

0x0002,

0xf444,	// (0x0000f444) list_double2_large_graphic_pane_g_ParamLimits

0xf444,	// (0x0000f444) list_double2_large_graphic_pane_g

0xbda4,	// (0x0000bda4) list_double2_large_graphic_pane_t1_ParamLimits

0xbda4,	// (0x0000bda4) list_double2_large_graphic_pane_t1

0xbdba,	// (0x0000bdba) list_double2_large_graphic_pane_t2_ParamLimits

0xbdba,	// (0x0000bdba) list_double2_large_graphic_pane_t2

0x0001,

0xf44b,	// (0x0000f44b) list_double2_large_graphic_pane_t_ParamLimits

0xf44b,	// (0x0000f44b) list_double2_large_graphic_pane_t

0xbdcc,	// (0x0000bdcc) list_double_heading_pane_g1_ParamLimits

0xbdcc,	// (0x0000bdcc) list_double_heading_pane_g1

0xbddd,	// (0x0000bddd) list_double_heading_pane_g2_ParamLimits

0xbddd,	// (0x0000bddd) list_double_heading_pane_g2

0x0001,

0xf450,	// (0x0000f450) list_double_heading_pane_g_ParamLimits

0xf450,	// (0x0000f450) list_double_heading_pane_g

0xbde9,	// (0x0000bde9) list_double_heading_pane_t1_ParamLimits

0xbde9,	// (0x0000bde9) list_double_heading_pane_t1

0xbdff,	// (0x0000bdff) list_double_heading_pane_t2_ParamLimits

0xbdff,	// (0x0000bdff) list_double_heading_pane_t2

0x0001,

0xf455,	// (0x0000f455) list_double_heading_pane_t_ParamLimits

0xf455,	// (0x0000f455) list_double_heading_pane_t

0x0fa4,	// (0x00000fa4) list_double_graphic_heading_pane_g1_ParamLimits

0x0fa4,	// (0x00000fa4) list_double_graphic_heading_pane_g1

0xbdcc,	// (0x0000bdcc) list_double_graphic_heading_pane_g2_ParamLimits

0xbdcc,	// (0x0000bdcc) list_double_graphic_heading_pane_g2

0xbddd,	// (0x0000bddd) list_double_graphic_heading_pane_g3_ParamLimits

0xbddd,	// (0x0000bddd) list_double_graphic_heading_pane_g3

0x0002,

0xf45a,	// (0x0000f45a) list_double_graphic_heading_pane_g_ParamLimits

0xf45a,	// (0x0000f45a) list_double_graphic_heading_pane_g

0xbe11,	// (0x0000be11) list_double_graphic_heading_pane_t1_ParamLimits

0xbe11,	// (0x0000be11) list_double_graphic_heading_pane_t1

0xbe27,	// (0x0000be27) list_double_graphic_heading_pane_t2_ParamLimits

0xbe27,	// (0x0000be27) list_double_graphic_heading_pane_t2

0x0001,

0xf461,	// (0x0000f461) list_double_graphic_heading_pane_t_ParamLimits

0xf461,	// (0x0000f461) list_double_graphic_heading_pane_t

0xbd4a,	// (0x0000bd4a) list_double_time_pane_g1_ParamLimits

0xbd4a,	// (0x0000bd4a) list_double_time_pane_g1

0xbc15,	// (0x0000bc15) list_double_time_pane_g2_ParamLimits

0xbc15,	// (0x0000bc15) list_double_time_pane_g2

0x0001,

0xf466,	// (0x0000f466) list_double_time_pane_g_ParamLimits

0xf466,	// (0x0000f466) list_double_time_pane_g

0xbe39,	// (0x0000be39) list_double_time_pane_t1_ParamLimits

0xbe39,	// (0x0000be39) list_double_time_pane_t1

0xbe4f,	// (0x0000be4f) list_double_time_pane_t2_ParamLimits

0xbe4f,	// (0x0000be4f) list_double_time_pane_t2

0xbe61,	// (0x0000be61) list_double_time_pane_t3_ParamLimits

0xbe61,	// (0x0000be61) list_double_time_pane_t3

0xbe73,	// (0x0000be73) list_double_time_pane_t4_ParamLimits

0xbe73,	// (0x0000be73) list_double_time_pane_t4

0x0003,

0xf46b,	// (0x0000f46b) list_double_time_pane_t_ParamLimits

0xf46b,	// (0x0000f46b) list_double_time_pane_t

0x245f,	// (0x0000245f) list_setting_pane_g1_ParamLimits

0x245f,	// (0x0000245f) list_setting_pane_g1

0xbc44,	// (0x0000bc44) list_setting_pane_g2_ParamLimits

0xbc44,	// (0x0000bc44) list_setting_pane_g2

0x0001,

0xf474,	// (0x0000f474) list_setting_pane_g_ParamLimits

0xf474,	// (0x0000f474) list_setting_pane_g

0xbe85,	// (0x0000be85) list_setting_pane_t1_ParamLimits

0xbe85,	// (0x0000be85) list_setting_pane_t1

0xbe9c,	// (0x0000be9c) list_setting_pane_t2_ParamLimits

0xbe9c,	// (0x0000be9c) list_setting_pane_t2

0x0002,

0xf479,	// (0x0000f479) list_setting_pane_t_ParamLimits

0xf479,	// (0x0000f479) list_setting_pane_t

0xbedb,	// (0x0000bedb) set_value_pane_cp_ParamLimits

0xbedb,	// (0x0000bedb) set_value_pane_cp

0x245f,	// (0x0000245f) list_setting_number_pane_g1_ParamLimits

0x245f,	// (0x0000245f) list_setting_number_pane_g1

0xbc44,	// (0x0000bc44) list_setting_number_pane_g2_ParamLimits

0xbc44,	// (0x0000bc44) list_setting_number_pane_g2

0x0001,

0xf474,	// (0x0000f474) list_setting_number_pane_g_ParamLimits

0xf474,	// (0x0000f474) list_setting_number_pane_g

0xbee7,	// (0x0000bee7) list_setting_number_pane_t1_ParamLimits

0xbee7,	// (0x0000bee7) list_setting_number_pane_t1

0xbefb,	// (0x0000befb) list_setting_number_pane_t2_ParamLimits

0xbefb,	// (0x0000befb) list_setting_number_pane_t2

0xbf12,	// (0x0000bf12) list_setting_number_pane_t3_ParamLimits

0xbf12,	// (0x0000bf12) list_setting_number_pane_t3

0x0003,

0xf480,	// (0x0000f480) list_setting_number_pane_t_ParamLimits

0xf480,	// (0x0000f480) list_setting_number_pane_t

0xbedb,	// (0x0000bedb) set_value_pane_ParamLimits

0xbedb,	// (0x0000bedb) set_value_pane

0x1289,	// (0x00001289) bg_set_opt_pane_ParamLimits

0x1289,	// (0x00001289) bg_set_opt_pane

0x12aa,	// (0x000012aa) set_value_pane_t1

0x12b8,	// (0x000012b8) slider_set_pane_cp3

0x12c1,	// (0x000012c1) volume_small_pane_cp

0x12ca,	// (0x000012ca) list_form_gen_pane

0x12d3,	// (0x000012d3) scroll_pane_cp8

0xbf55,	// (0x0000bf55) form_field_data_pane_ParamLimits

0xbf55,	// (0x0000bf55) form_field_data_pane

0xbf6c,	// (0x0000bf6c) form_field_data_wide_pane_ParamLimits

0xbf6c,	// (0x0000bf6c) form_field_data_wide_pane

0xbf8c,	// (0x0000bf8c) form_field_popup_pane_ParamLimits

0xbf8c,	// (0x0000bf8c) form_field_popup_pane

0xbfa4,	// (0x0000bfa4) form_field_popup_wide_pane_ParamLimits

0xbfa4,	// (0x0000bfa4) form_field_popup_wide_pane

0x136e,	// (0x0000136e) form_field_slider_pane_ParamLimits

0x136e,	// (0x0000136e) form_field_slider_pane

0x1381,	// (0x00001381) form_field_slider_wide_pane_ParamLimits

0x1381,	// (0x00001381) form_field_slider_wide_pane

0x1394,	// (0x00001394) data_form_pane

0xbfc5,	// (0x0000bfc5) form_field_data_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane

0x13d0,	// (0x000013d0) data_form_wide_pane

0x13fc,	// (0x000013fc) form_field_data_wide_pane_t1

0x0bb8,	// (0x00000bb8) input_focus_pane_cp6

0xbfdf,	// (0x0000bfdf) form_field_popup_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp7

0x1433,	// (0x00001433) list_form_pane

0x1447,	// (0x00001447) form_field_popup_wide_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp8

0x1459,	// (0x00001459) list_form_wide_pane

0xc001,	// (0x0000c001) form_field_slider_pane_t1_ParamLimits

0xc001,	// (0x0000c001) form_field_slider_pane_t1

0xc019,	// (0x0000c019) form_field_slider_pane_t2_ParamLimits

0xc019,	// (0x0000c019) form_field_slider_pane_t2

0x0001,

0xf489,	// (0x0000f489) form_field_slider_pane_t_ParamLimits

0xf489,	// (0x0000f489) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xc02e,	// (0x0000c02e) slider_cont_pane_ParamLimits

0xc02e,	// (0x0000c02e) slider_cont_pane

0x14a5,	// (0x000014a5) form_field_slider_wide_pane_t1_ParamLimits

0x14a5,	// (0x000014a5) form_field_slider_wide_pane_t1

0x14b7,	// (0x000014b7) form_field_slider_wide_pane_t2_ParamLimits

0x14b7,	// (0x000014b7) form_field_slider_wide_pane_t2

0x0001,

0xadbe,	// (0x0000adbe) form_field_slider_wide_pane_t_ParamLimits

0xadbe,	// (0x0000adbe) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xc042,	// (0x0000c042) slider_cont_pane_cp1_ParamLimits

0xc042,	// (0x0000c042) slider_cont_pane_cp1

0xc056,	// (0x0000c056) slider_form_pane_cp

0x14e5,	// (0x000014e5) input_focus_pane_g1

0x14ed,	// (0x000014ed) input_focus_pane_g2

0x14f5,	// (0x000014f5) input_focus_pane_g3

0x14fd,	// (0x000014fd) input_focus_pane_g4

0x1505,	// (0x00001505) input_focus_pane_g5

0x150d,	// (0x0000150d) input_focus_pane_g6

0x1515,	// (0x00001515) input_focus_pane_g7

0x151d,	// (0x0000151d) input_focus_pane_g8

0x1525,	// (0x00001525) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xadc3,	// (0x0000adc3) input_focus_pane_g

0x3f2d,	// (0x00003f2d) wait_border_pane_g3_copy1

0xc05e,	// (0x0000c05e) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd520,	// (0x0000d520) data_form_wide_pane_t1

0xc078,	// (0x0000c078) list_form_graphic_pane_cp_ParamLimits

0xc078,	// (0x0000c078) list_form_graphic_pane_cp

0x5096,	// (0x00005096) slider_form_pane_g1

0x509f,	// (0x0000509f) slider_form_pane_g2

0x0006,

0xf53e,	// (0x0000f53e) slider_form_pane_g

0xc078,	// (0x0000c078) list_form_graphic_pane_ParamLimits

0xc078,	// (0x0000c078) list_form_graphic_pane

0x157d,	// (0x0000157d) list_form_graphic_pane_g1

0x1585,	// (0x00001585) list_form_graphic_pane_t1_ParamLimits

0x1585,	// (0x00001585) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xc08a,	// (0x0000c08a) find_pane_g1

0x15a3,	// (0x000015a3) input_find_pane

0xc093,	// (0x0000c093) input_find_pane_g1_ParamLimits

0xc093,	// (0x0000c093) input_find_pane_g1

0xc09f,	// (0x0000c09f) input_find_pane_t1_ParamLimits

0xc09f,	// (0x0000c09f) input_find_pane_t1

0xc0b4,	// (0x0000c0b4) input_find_pane_t2_ParamLimits

0xc0b4,	// (0x0000c0b4) input_find_pane_t2

0x0001,

0xf48e,	// (0x0000f48e) input_find_pane_t_ParamLimits

0xf48e,	// (0x0000f48e) input_find_pane_t

0x15e2,	// (0x000015e2) input_focus_pane_cp5_ParamLimits

0x15e2,	// (0x000015e2) input_focus_pane_cp5

0x15fc,	// (0x000015fc) bg_popup_window_pane_cp2_ParamLimits

0x15fc,	// (0x000015fc) bg_popup_window_pane_cp2

0x1609,	// (0x00001609) listscroll_menu_pane_ParamLimits

0x1609,	// (0x00001609) listscroll_menu_pane

0xc0d5,	// (0x0000c0d5) popup_submenu_window_ParamLimits

0xc0d5,	// (0x0000c0d5) popup_submenu_window

0x1641,	// (0x00001641) find_popup_pane_g1

0x1649,	// (0x00001649) input_popup_find_pane_cp

0x15e2,	// (0x000015e2) input_focus_pane_cp4_ParamLimits

0x15e2,	// (0x000015e2) input_focus_pane_cp4

0x165f,	// (0x0000165f) input_popup_find_pane_t1_ParamLimits

0x165f,	// (0x0000165f) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x168d,	// (0x0000168d) listscroll_popup_sub_pane

0x1695,	// (0x00001695) list_submenu_pane_ParamLimits

0x1695,	// (0x00001695) list_submenu_pane

0x16a6,	// (0x000016a6) scroll_pane_cp4

0x16ae,	// (0x000016ae) list_single_popup_submenu_pane_ParamLimits

0x16ae,	// (0x000016ae) list_single_popup_submenu_pane

0x16c2,	// (0x000016c2) list_single_popup_submenu_pane_g1

0x16ca,	// (0x000016ca) list_single_popup_submenu_pane_t1_ParamLimits

0x16ca,	// (0x000016ca) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16df,	// (0x000016df) tabs_2_active_pane_g1

0xc10f,	// (0x0000c10f) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16df,	// (0x000016df) tabs_2_passive_pane_g1

0xc10f,	// (0x0000c10f) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc121,	// (0x0000c121) tabs_2_long_active_pane_t1

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4

0x3786,	// (0x00003786) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc134,	// (0x0000c134) tabs_3_long_active_pane_t1

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5

0x3786,	// (0x00003786) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x1741,	// (0x00001741) listscroll_popup_fast_pane_ParamLimits

0x1741,	// (0x00001741) listscroll_popup_fast_pane

0x1750,	// (0x00001750) grid_popup_fast_pane_ParamLimits

0x1750,	// (0x00001750) grid_popup_fast_pane

0x1762,	// (0x00001762) scroll_pane_cp9_ParamLimits

0x1762,	// (0x00001762) scroll_pane_cp9

0x7408,	// (0x00007408) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7408,	// (0x00007408) list_single_graphic_hl_pane_t1_cp2

0x1786,	// (0x00001786) input_focus_pane_cp20_ParamLimits

0x1786,	// (0x00001786) input_focus_pane_cp20

0x1794,	// (0x00001794) query_popup_data_pane_t1_ParamLimits

0x1794,	// (0x00001794) query_popup_data_pane_t1

0x17a7,	// (0x000017a7) query_popup_data_pane_t2_ParamLimits

0x17a7,	// (0x000017a7) query_popup_data_pane_t2

0x17ed,	// (0x000017ed) query_popup_data_pane_t3_ParamLimits

0x17ed,	// (0x000017ed) query_popup_data_pane_t3

0x182e,	// (0x0000182e) query_popup_data_pane_t4_ParamLimits

0x182e,	// (0x0000182e) query_popup_data_pane_t4

0x186a,	// (0x0000186a) query_popup_data_pane_t5_ParamLimits

0x186a,	// (0x0000186a) query_popup_data_pane_t5

0x0004,

0xaddd,	// (0x0000addd) query_popup_data_pane_t_ParamLimits

0xaddd,	// (0x0000addd) query_popup_data_pane_t

0x14e5,	// (0x000014e5) bg_set_opt_pane_g1

0x14ed,	// (0x000014ed) bg_set_opt_pane_g2

0x14f5,	// (0x000014f5) bg_set_opt_pane_g3

0x14fd,	// (0x000014fd) bg_set_opt_pane_g4

0x1505,	// (0x00001505) bg_set_opt_pane_g5

0x150d,	// (0x0000150d) bg_set_opt_pane_g6

0x1515,	// (0x00001515) bg_set_opt_pane_g7

0x151d,	// (0x0000151d) bg_set_opt_pane_g8

0x1525,	// (0x00001525) bg_set_opt_pane_g9

0x0008,

0xade8,	// (0x0000ade8) bg_set_opt_pane_g

0x2188,	// (0x00002188) control_top_pane_stacon_ParamLimits

0x2188,	// (0x00002188) control_top_pane_stacon

0x21db,	// (0x000021db) signal_pane_stacon_ParamLimits

0x21db,	// (0x000021db) signal_pane_stacon

0x2200,	// (0x00002200) stacon_top_pane_g1_ParamLimits

0x2200,	// (0x00002200) stacon_top_pane_g1

0x2222,	// (0x00002222) title_pane_stacon_ParamLimits

0x2222,	// (0x00002222) title_pane_stacon

0x224c,	// (0x0000224c) uni_indicator_pane_stacon_ParamLimits

0x224c,	// (0x0000224c) uni_indicator_pane_stacon

0x2261,	// (0x00002261) battery_pane_stacon_ParamLimits

0x2261,	// (0x00002261) battery_pane_stacon

0x22a5,	// (0x000022a5) control_bottom_pane_stacon_ParamLimits

0x22a5,	// (0x000022a5) control_bottom_pane_stacon

0x22c8,	// (0x000022c8) navi_pane_stacon_ParamLimits

0x22c8,	// (0x000022c8) navi_pane_stacon

0x22eb,	// (0x000022eb) stacon_bottom_pane_g1_ParamLimits

0x22eb,	// (0x000022eb) stacon_bottom_pane_g1

0x18a1,	// (0x000018a1) aid_levels_signal_lsc_ParamLimits

0x18a1,	// (0x000018a1) aid_levels_signal_lsc

0x18b7,	// (0x000018b7) signal_pane_stacon_g1_ParamLimits

0x18b7,	// (0x000018b7) signal_pane_stacon_g1

0x18cb,	// (0x000018cb) signal_pane_stacon_g2_ParamLimits

0x18cb,	// (0x000018cb) signal_pane_stacon_g2

0x0001,

0xadfb,	// (0x0000adfb) signal_pane_stacon_g_ParamLimits

0xadfb,	// (0x0000adfb) signal_pane_stacon_g

0x190d,	// (0x0000190d) title_pane_stacon_t1_ParamLimits

0x190d,	// (0x0000190d) title_pane_stacon_t1

0x1932,	// (0x00001932) uni_indicator_pane_stacon_g1

0x193c,	// (0x0000193c) uni_indicator_pane_stacon_g2

0x1946,	// (0x00001946) uni_indicator_pane_stacon_g3

0x1950,	// (0x00001950) uni_indicator_pane_stacon_g4

0x0003,

0xae07,	// (0x0000ae07) uni_indicator_pane_stacon_g

0x195a,	// (0x0000195a) control_top_pane_stacon_g1

0x1962,	// (0x00001962) control_top_pane_stacon_t1_ParamLimits

0x1962,	// (0x00001962) control_top_pane_stacon_t1

0x1999,	// (0x00001999) aid_levels_battery_lsc_ParamLimits

0x1999,	// (0x00001999) aid_levels_battery_lsc

0x19b0,	// (0x000019b0) battery_pane_stacon_g1_ParamLimits

0x19b0,	// (0x000019b0) battery_pane_stacon_g1

0x19c3,	// (0x000019c3) battery_pane_stacon_g2_ParamLimits

0x19c3,	// (0x000019c3) battery_pane_stacon_g2

0x0001,

0xae10,	// (0x0000ae10) battery_pane_stacon_g_ParamLimits

0xae10,	// (0x0000ae10) battery_pane_stacon_g

0x1a01,	// (0x00001a01) navi_icon_pane_stacon

0x1a15,	// (0x00001a15) navi_navi_pane_stacon

0x1a01,	// (0x00001a01) navi_text_pane_stacon

0x195a,	// (0x0000195a) control_bottom_pane_stacon_g1

0x1a29,	// (0x00001a29) control_bottom_pane_stacon_t1_ParamLimits

0x1a29,	// (0x00001a29) control_bottom_pane_stacon_t1

0xc146,	// (0x0000c146) grid_app_pane_ParamLimits

0xc146,	// (0x0000c146) grid_app_pane

0xc17e,	// (0x0000c17e) scroll_pane_cp15_ParamLimits

0xc17e,	// (0x0000c17e) scroll_pane_cp15

0xc193,	// (0x0000c193) cell_app_pane_ParamLimits

0xc193,	// (0x0000c193) cell_app_pane

0xc1d8,	// (0x0000c1d8) cell_app_pane_g1_ParamLimits

0xc1d8,	// (0x0000c1d8) cell_app_pane_g1

0x1afb,	// (0x00001afb) cell_app_pane_g2_ParamLimits

0x1afb,	// (0x00001afb) cell_app_pane_g2

0x0001,

0xf493,	// (0x0000f493) cell_app_pane_g_ParamLimits

0xf493,	// (0x0000f493) cell_app_pane_g

0xc1fc,	// (0x0000c1fc) cell_app_pane_t1_ParamLimits

0xc1fc,	// (0x0000c1fc) cell_app_pane_t1

0x1b1e,	// (0x00001b1e) grid_highlight_pane_ParamLimits

0x1b1e,	// (0x00001b1e) grid_highlight_pane

0x14e5,	// (0x000014e5) cell_highlight_pane_g1

0x14ed,	// (0x000014ed) cell_highlight_pane_g2

0x14f5,	// (0x000014f5) cell_highlight_pane_g3

0x14fd,	// (0x000014fd) cell_highlight_pane_g4

0x1505,	// (0x00001505) cell_highlight_pane_g5

0x150d,	// (0x0000150d) cell_highlight_pane_g6

0x1515,	// (0x00001515) cell_highlight_pane_g7

0x151d,	// (0x0000151d) cell_highlight_pane_g8

0x1525,	// (0x00001525) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xadc3,	// (0x0000adc3) cell_highlight_pane_g

0x1b42,	// (0x00001b42) bg_scroll_pane

0x1b61,	// (0x00001b61) scroll_handle_pane

0x1bb2,	// (0x00001bb2) scroll_bg_pane_g1

0x1bc7,	// (0x00001bc7) scroll_bg_pane_g2

0x1bdf,	// (0x00001bdf) scroll_bg_pane_g3

0x0002,

0xae1a,	// (0x0000ae1a) scroll_bg_pane_g

0x1bf4,	// (0x00001bf4) scroll_handle_focus_pane_ParamLimits

0x1bf4,	// (0x00001bf4) scroll_handle_focus_pane

0x1bb2,	// (0x00001bb2) scroll_handle_pane_g1

0x1c01,	// (0x00001c01) scroll_handle_pane_g2

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g3

0x0002,

0xae21,	// (0x0000ae21) scroll_handle_pane_g

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp21_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp21

0x1c15,	// (0x00001c15) popup_fep_japan_predictive_window_t1_ParamLimits

0x1c15,	// (0x00001c15) popup_fep_japan_predictive_window_t1

0x1c2f,	// (0x00001c2f) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c2f,	// (0x00001c2f) popup_fep_japan_predictive_window_t2

0x1c62,	// (0x00001c62) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c62,	// (0x00001c62) popup_fep_japan_predictive_window_t3

0x0002,

0xae28,	// (0x0000ae28) popup_fep_japan_predictive_window_t_ParamLimits

0xae28,	// (0x0000ae28) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c99,	// (0x00001c99) listscroll_japin_cand_pane

0x1ca1,	// (0x00001ca1) popup_fep_japan_candidate_window_t1

0x1caf,	// (0x00001caf) candidate_pane_ParamLimits

0x1caf,	// (0x00001caf) candidate_pane

0x1cc1,	// (0x00001cc1) scroll_pane_cp30

0x1cc9,	// (0x00001cc9) list_single_popup_jap_candidate_pane_ParamLimits

0x1cc9,	// (0x00001cc9) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cde,	// (0x00001cde) list_single_popup_jap_candidate_pane_t1

0x1ced,	// (0x00001ced) level_1_signal

0x1cff,	// (0x00001cff) level_2_signal

0x1d12,	// (0x00001d12) level_3_signal

0x1d25,	// (0x00001d25) level_4_signal

0x1d38,	// (0x00001d38) level_5_signal

0x1d4b,	// (0x00001d4b) level_6_signal

0x1d5e,	// (0x00001d5e) level_7_signal

0x1ced,	// (0x00001ced) level_1_battery

0x1cff,	// (0x00001cff) level_2_battery

0x1d12,	// (0x00001d12) level_3_battery

0x1d25,	// (0x00001d25) level_4_battery

0x1d38,	// (0x00001d38) level_5_battery

0x1d4b,	// (0x00001d4b) level_6_battery

0x1d5e,	// (0x00001d5e) level_7_battery

0x1da8,	// (0x00001da8) list_menu_pane_ParamLimits

0x1da8,	// (0x00001da8) list_menu_pane

0x1dbe,	// (0x00001dbe) scroll_pane_cp25_ParamLimits

0x1dbe,	// (0x00001dbe) scroll_pane_cp25

0x1dd7,	// (0x00001dd7) list_double2_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double2_large_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_large_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double2_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_large_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_large_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_number_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_number_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_pane_cp2

0xc21c,	// (0x0000c21c) list_single_2graphic_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_2graphic_pane_cp2

0xc21c,	// (0x0000c21c) list_single_graphic_heading_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_graphic_heading_pane_cp2

0xc21c,	// (0x0000c21c) list_single_graphic_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_graphic_pane_cp2

0xc21c,	// (0x0000c21c) list_single_heading_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_heading_pane_cp2

0x1e14,	// (0x00001e14) list_single_large_graphic_pane_cp2_ParamLimits

0x1e14,	// (0x00001e14) list_single_large_graphic_pane_cp2

0xc21c,	// (0x0000c21c) list_single_number_heading_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_number_heading_pane_cp2

0xc21c,	// (0x0000c21c) list_single_number_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_number_pane_cp2

0xc21c,	// (0x0000c21c) list_single_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_pane_cp2

0x1eeb,	// (0x00001eeb) bg_popup_sub_pane_cp22

0x1f10,	// (0x00001f10) popup_side_volume_key_window_g1

0x1f3a,	// (0x00001f3a) popup_side_volume_key_window_t1

0x1f56,	// (0x00001f56) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f5e,	// (0x00001f5e) fep_china_uni_candidate_pane_ParamLimits

0x1f5e,	// (0x00001f5e) fep_china_uni_candidate_pane

0x1f72,	// (0x00001f72) fep_china_uni_entry_pane

0x1f82,	// (0x00001f82) popup_fep_china_uni_window_g1

0x1f9e,	// (0x00001f9e) fep_china_uni_entry_pane_g1

0x1fa6,	// (0x00001fa6) fep_china_uni_entry_pane_g2

0x0001,

0xae59,	// (0x0000ae59) fep_china_uni_entry_pane_g

0x1fae,	// (0x00001fae) fep_entry_item_pane

0x1fb8,	// (0x00001fb8) fep_candidate_item_pane

0x1fc0,	// (0x00001fc0) fep_china_uni_candidate_pane_g1

0x1fc8,	// (0x00001fc8) fep_china_uni_candidate_pane_g2

0x1fd0,	// (0x00001fd0) fep_china_uni_candidate_pane_g3

0x1fd8,	// (0x00001fd8) fep_china_uni_candidate_pane_g4

0x0003,

0xae5e,	// (0x0000ae5e) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fe0,	// (0x00001fe0) fep_entry_item_pane_t1_ParamLimits

0x1fe0,	// (0x00001fe0) fep_entry_item_pane_t1

0x1ff6,	// (0x00001ff6) fep_candidate_item_pane_t1_ParamLimits

0x1ff6,	// (0x00001ff6) fep_candidate_item_pane_t1

0x200b,	// (0x0000200b) fep_candidate_item_pane_t2_ParamLimits

0x200b,	// (0x0000200b) fep_candidate_item_pane_t2

0x0001,

0xae67,	// (0x0000ae67) fep_candidate_item_pane_t_ParamLimits

0xae67,	// (0x0000ae67) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x201d,	// (0x0000201d) level_1_signal_lsc

0x2026,	// (0x00002026) level_2_signal_lsc

0x202f,	// (0x0000202f) level_3_signal_lsc

0x2038,	// (0x00002038) level_4_signal_lsc

0x2041,	// (0x00002041) level_5_signal_lsc

0x204a,	// (0x0000204a) level_6_signal_lsc

0x2053,	// (0x00002053) level_7_signal_lsc

0x2053,	// (0x00002053) level_1_battery_lsc

0x205c,	// (0x0000205c) level_2_battery_lsc

0x2065,	// (0x00002065) level_3_battery_lsc

0x206e,	// (0x0000206e) level_4_battery_lsc

0x2077,	// (0x00002077) level_5_battery_lsc

0x2080,	// (0x00002080) level_6_battery_lsc

0x201d,	// (0x0000201d) level_7_battery_lsc

0x2089,	// (0x00002089) scroll_handle_focus_pane_g1

0x2092,	// (0x00002092) scroll_handle_focus_pane_g2

0x209b,	// (0x0000209b) scroll_handle_focus_pane_g3

0x0002,

0xae6c,	// (0x0000ae6c) scroll_handle_focus_pane_g

0xc2a9,	// (0x0000c2a9) list_single_2graphic_pane_g1_ParamLimits

0xc2a9,	// (0x0000c2a9) list_single_2graphic_pane_g1

0xbbea,	// (0x0000bbea) list_single_2graphic_pane_g2_ParamLimits

0xbbea,	// (0x0000bbea) list_single_2graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_2graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_2graphic_pane_g3

0xc2b5,	// (0x0000c2b5) list_single_2graphic_pane_g4_ParamLimits

0xc2b5,	// (0x0000c2b5) list_single_2graphic_pane_g4

0x0003,

0xf4a1,	// (0x0000f4a1) list_single_2graphic_pane_g_ParamLimits

0xf4a1,	// (0x0000f4a1) list_single_2graphic_pane_g

0xc2c6,	// (0x0000c2c6) list_single_2graphic_pane_t1_ParamLimits

0xc2c6,	// (0x0000c2c6) list_single_2graphic_pane_t1

0xc2f4,	// (0x0000c2f4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc2f4,	// (0x0000c2f4) list_double2_graphic_large_graphic_pane_g1

0xbc33,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbc33,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g2

0xbc44,	// (0x0000bc44) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbc44,	// (0x0000bc44) list_double2_graphic_large_graphic_pane_g3

0xc306,	// (0x0000c306) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc306,	// (0x0000c306) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf4aa,	// (0x0000f4aa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf4aa,	// (0x0000f4aa) list_double2_graphic_large_graphic_pane_g

0xc312,	// (0x0000c312) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc312,	// (0x0000c312) list_double2_graphic_large_graphic_pane_t1

0xc328,	// (0x0000c328) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc328,	// (0x0000c328) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf4b3,	// (0x0000f4b3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf4b3,	// (0x0000f4b3) list_double2_graphic_large_graphic_pane_t

0x23b3,	// (0x000023b3) popup_fast_swap_window_ParamLimits

0x23b3,	// (0x000023b3) popup_fast_swap_window

0x23cf,	// (0x000023cf) popup_side_volume_key_window

0x23eb,	// (0x000023eb) stacon_top_pane

0x23f5,	// (0x000023f5) status_pane_ParamLimits

0x23f5,	// (0x000023f5) status_pane

0xc33a,	// (0x0000c33a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12d3,	// (0x000012d3) scroll_pane_cp121

0x12ca,	// (0x000012ca) set_content_pane

0x2133,	// (0x00002133) bg_active_tab_pane_g1_cp1

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp1

0x2145,	// (0x00002145) bg_active_tab_pane_g3_cp1

0x2133,	// (0x00002133) bg_passive_tab_pane_g1_cp1

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp1

0x2145,	// (0x00002145) bg_passive_tab_pane_g3_cp1

0x214e,	// (0x0000214e) bg_active_tab_pane_g1_cp2

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp2

0x2157,	// (0x00002157) bg_active_tab_pane_g3_cp2

0x214e,	// (0x0000214e) bg_passive_tab_pane_g1_cp2

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp2

0x2157,	// (0x00002157) bg_passive_tab_pane_g3_cp2

0x2160,	// (0x00002160) bg_active_tab_pane_g1_cp3

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp3

0x2169,	// (0x00002169) bg_active_tab_pane_g3_cp3

0x2160,	// (0x00002160) bg_passive_tab_pane_g1_cp3

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp3

0x2169,	// (0x00002169) bg_passive_tab_pane_g3_cp3

0x2172,	// (0x00002172) bg_active_tab_pane_g1_cp4

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp4

0x217d,	// (0x0000217d) bg_active_tab_pane_g3_cp4

0x2172,	// (0x00002172) bg_passive_tab_pane_g1_cp4

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp4

0x217d,	// (0x0000217d) bg_passive_tab_pane_g3_cp4

0x2307,	// (0x00002307) bg_active_tab_pane_g1_cp5

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp5

0x2310,	// (0x00002310) bg_active_tab_pane_g3_cp5

0x2307,	// (0x00002307) bg_passive_tab_pane_g1_cp5

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp5

0x2310,	// (0x00002310) bg_passive_tab_pane_g3_cp5

0x5877,	// (0x00005877) list_set_graphic_pane_ParamLimits

0x5877,	// (0x00005877) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2336,	// (0x00002336) list_set_graphic_pane_g1_ParamLimits

0x2336,	// (0x00002336) list_set_graphic_pane_g1

0x2342,	// (0x00002342) list_set_graphic_pane_g2_ParamLimits

0x2342,	// (0x00002342) list_set_graphic_pane_g2

0x0001,

0xae8a,	// (0x0000ae8a) list_set_graphic_pane_g_ParamLimits

0xae8a,	// (0x0000ae8a) list_set_graphic_pane_g

0x0009,

0xb204,	// (0x0000b204) volume_small_pane_cp_g

0x2366,	// (0x00002366) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2366,	// (0x00002366) list_double2_large_graphic_pane_g1_cp2

0x2372,	// (0x00002372) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_large_graphic_pane_g2_cp2

0x2383,	// (0x00002383) list_double2_large_graphic_pane_g3_cp2

0x238b,	// (0x0000238b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x238b,	// (0x0000238b) list_double2_large_graphic_pane_t1_cp2

0x23a1,	// (0x000023a1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x23a1,	// (0x000023a1) list_double2_large_graphic_pane_t2_cp2

0x4b64,	// (0x00004b64) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b64,	// (0x00004b64) list_double_large_graphic_pane_g1_cp2

0x4b75,	// (0x00004b75) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b75,	// (0x00004b75) list_double_large_graphic_pane_g2_cp2

0x251c,	// (0x0000251c) list_double_large_graphic_pane_g3_cp2

0x4b86,	// (0x00004b86) list_double_large_graphic_pane_g4_cp

0x4b8e,	// (0x00004b8e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b8e,	// (0x00004b8e) list_double_large_graphic_pane_t1_cp2

0x4ba5,	// (0x00004ba5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ba5,	// (0x00004ba5) list_double_large_graphic_pane_t2_cp2

0x240e,	// (0x0000240e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x240e,	// (0x0000240e) list_double2_graphic_pane_g1_cp2

0x241c,	// (0x0000241c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x241c,	// (0x0000241c) list_double2_graphic_pane_g2_cp2

0x242d,	// (0x0000242d) list_double2_graphic_pane_g3_cp2

0x2437,	// (0x00002437) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2437,	// (0x00002437) list_double2_graphic_pane_t1_cp2

0x244d,	// (0x0000244d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double2_graphic_pane_t2_cp2

0x245f,	// (0x0000245f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x245f,	// (0x0000245f) list_single_number_heading_pane_g1_cp2

0x246b,	// (0x0000246b) list_single_number_heading_pane_g2_cp2

0x2473,	// (0x00002473) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2473,	// (0x00002473) list_single_number_heading_pane_t1_cp2

0x2489,	// (0x00002489) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2489,	// (0x00002489) list_single_number_heading_pane_t2_cp2

0x249b,	// (0x0000249b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x249b,	// (0x0000249b) list_single_number_heading_pane_t3_cp2

0x245f,	// (0x0000245f) list_single_heading_pane_g1_cp2_ParamLimits

0x245f,	// (0x0000245f) list_single_heading_pane_g1_cp2

0x246b,	// (0x0000246b) list_single_heading_pane_g2_cp2

0x2473,	// (0x00002473) list_single_heading_pane_t1_cp2_ParamLimits

0x2473,	// (0x00002473) list_single_heading_pane_t1_cp2

0x496c,	// (0x0000496c) list_single_heading_pane_t2_cp2_ParamLimits

0x496c,	// (0x0000496c) list_single_heading_pane_t2_cp2

0x48b4,	// (0x000048b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x48b4,	// (0x000048b4) list_double_graphic_pane_g1_cp2

0x48c0,	// (0x000048c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x48c0,	// (0x000048c0) list_double_graphic_pane_g2_cp2

0x48cf,	// (0x000048cf) list_double_graphic_pane_g3_cp2

0x48d7,	// (0x000048d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x48d7,	// (0x000048d7) list_double_graphic_pane_t1_cp2

0x48ed,	// (0x000048ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x48ed,	// (0x000048ed) list_double_graphic_pane_t2_cp2

0x2510,	// (0x00002510) list_double_number_pane_g1_cp2_ParamLimits

0x2510,	// (0x00002510) list_double_number_pane_g1_cp2

0x251c,	// (0x0000251c) list_double_number_pane_g2_cp2

0x4878,	// (0x00004878) list_double_number_pane_t1_cp2_ParamLimits

0x4878,	// (0x00004878) list_double_number_pane_t1_cp2

0x488c,	// (0x0000488c) list_double_number_pane_t2_cp2_ParamLimits

0x488c,	// (0x0000488c) list_double_number_pane_t2_cp2

0x48a2,	// (0x000048a2) list_double_number_pane_t3_cp2_ParamLimits

0x48a2,	// (0x000048a2) list_double_number_pane_t3_cp2

0x4750,	// (0x00004750) list_single_graphic_pane_g1_cp2_ParamLimits

0x4750,	// (0x00004750) list_single_graphic_pane_g1_cp2

0x2574,	// (0x00002574) list_single_graphic_pane_g2_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_pane_g2_cp2

0x2580,	// (0x00002580) list_single_graphic_pane_g3_cp2

0x4726,	// (0x00004726) list_single_graphic_pane_t1_cp2_ParamLimits

0x4726,	// (0x00004726) list_single_graphic_pane_t1_cp2

0x2574,	// (0x00002574) list_single_number_pane_g1_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_number_pane_g1_cp2

0x2580,	// (0x00002580) list_single_number_pane_g2_cp2

0x4726,	// (0x00004726) list_single_number_pane_t1_cp2_ParamLimits

0x4726,	// (0x00004726) list_single_number_pane_t1_cp2

0x473c,	// (0x0000473c) list_single_number_pane_t2_cp2_ParamLimits

0x473c,	// (0x0000473c) list_single_number_pane_t2_cp2

0x2372,	// (0x00002372) list_double2_pane_g1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_pane_g1_cp2

0x2383,	// (0x00002383) list_double2_pane_g2_cp2

0x24e8,	// (0x000024e8) list_double2_pane_t1_cp2_ParamLimits

0x24e8,	// (0x000024e8) list_double2_pane_t1_cp2

0x24fe,	// (0x000024fe) list_double2_pane_t2_cp2_ParamLimits

0x24fe,	// (0x000024fe) list_double2_pane_t2_cp2

0x2510,	// (0x00002510) list_double_pane_g1_cp2_ParamLimits

0x2510,	// (0x00002510) list_double_pane_g1_cp2

0x251c,	// (0x0000251c) list_double_pane_g2_cp2

0x2524,	// (0x00002524) list_double_pane_t1_cp2_ParamLimits

0x2524,	// (0x00002524) list_double_pane_t1_cp2

0x253a,	// (0x0000253a) list_double_pane_t2_cp2_ParamLimits

0x253a,	// (0x0000253a) list_double_pane_t2_cp2

0x2564,	// (0x00002564) list_single_pane_cp2_g3

0x2574,	// (0x00002574) list_single_pane_g1_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_pane_g1_cp2

0x2580,	// (0x00002580) list_single_pane_g2_cp2

0x2588,	// (0x00002588) list_single_pane_t1_cp2_ParamLimits

0x2588,	// (0x00002588) list_single_pane_t1_cp2

0x25a0,	// (0x000025a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x25a0,	// (0x000025a0) list_single_large_graphic_pane_g1_cp2

0x25ac,	// (0x000025ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x25ac,	// (0x000025ac) list_single_large_graphic_pane_g2_cp2

0x25b8,	// (0x000025b8) list_single_large_graphic_pane_g3_cp2

0x25c0,	// (0x000025c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x25c0,	// (0x000025c0) list_single_large_graphic_pane_g4_cp1

0x25da,	// (0x000025da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25da,	// (0x000025da) list_single_large_graphic_pane_t1_cp2

0x459f,	// (0x0000459f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x459f,	// (0x0000459f) list_single_graphic_heading_pane_g1_cp2

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_g4_cp2

0x2580,	// (0x00002580) list_single_graphic_heading_pane_g5_cp2

0x45ab,	// (0x000045ab) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x45ab,	// (0x000045ab) list_single_graphic_heading_pane_t1_cp2

0x45c1,	// (0x000045c1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x45c1,	// (0x000045c1) list_single_graphic_heading_pane_t2_cp2

0x4560,	// (0x00004560) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4560,	// (0x00004560) list_single_2graphic_pane_g1_cp2

0x456c,	// (0x0000456c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x456c,	// (0x0000456c) list_single_2graphic_pane_g2_cp2

0x2580,	// (0x00002580) list_single_2graphic_pane_g3_cp2

0x457d,	// (0x0000457d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x457d,	// (0x0000457d) list_single_2graphic_pane_g4_cp2

0x4589,	// (0x00004589) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4589,	// (0x00004589) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4138,	// (0x00004138) list_highlight_pane_g1_cp1

0x4140,	// (0x00004140) list_highlight_pane_g2_cp1

0x4148,	// (0x00004148) list_highlight_pane_g3_cp1

0x4150,	// (0x00004150) list_highlight_pane_g4_cp1

0x4158,	// (0x00004158) list_highlight_pane_g5_cp1

0x4160,	// (0x00004160) list_highlight_pane_g6_cp1

0x4168,	// (0x00004168) list_highlight_pane_g7_cp1

0x4170,	// (0x00004170) list_highlight_pane_g8_cp1

0x4178,	// (0x00004178) list_highlight_pane_g9_cp1

0xd239,	// (0x0000d239) form_field_slider_pane_t3

0xd247,	// (0x0000d247) form_field_slider_pane_t4

0x4074,	// (0x00004074) slider_form_pane_ParamLimits

0x4074,	// (0x00004074) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x49b6,	// (0x000049b6) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xb01f,	// (0x0000b01f) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25f0,	// (0x000025f0) text_digital

0x25ff,	// (0x000025ff) text_primary

0x260e,	// (0x0000260e) text_primary_small

0x261d,	// (0x0000261d) text_secondary

0x262c,	// (0x0000262c) text_title

0x529e,	// (0x0000529e) bg_passive_tab_pane_g1_cp3_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp3_srt

0x52a7,	// (0x000052a7) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x52b0,	// (0x000052b0) tabs_4_active_pane_srt_g1

0xd5c9,	// (0x0000d5c9) tabs_4_active_pane_srt_t1_ParamLimits

0xd5c9,	// (0x0000d5c9) tabs_4_active_pane_srt_t1

0x529e,	// (0x0000529e) bg_active_tab_pane_g1_cp3_copy1

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp3_copy1

0x52a7,	// (0x000052a7) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_srt

0x4e51,	// (0x00004e51) bg_passive_tab_pane_g1_cp4_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp4_srt

0x4e5a,	// (0x00004e5a) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd3b5,	// (0x0000d3b5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd3b5,	// (0x0000d3b5) tabs_2_long_active_pane_srt_t1

0x4e51,	// (0x00004e51) bg_active_tab_pane_g1_cp4_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp4_srt

0x4e5a,	// (0x00004e5a) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_srt

0x2307,	// (0x00002307) bg_passive_tab_pane_g1_cp5_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp5_srt

0x2310,	// (0x00002310) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd39f,	// (0x0000d39f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd39f,	// (0x0000d39f) tabs_3_long_active_pane_srt_t1

0x2307,	// (0x00002307) bg_active_tab_pane_g1_cp5_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp5_srt

0x2310,	// (0x00002310) bg_active_tab_pane_g3_cp5_srt

0x4e31,	// (0x00004e31) navi_text_pane_srt_t1

0x4e29,	// (0x00004e29) navi_icon_pane_srt_g1

0x28aa,	// (0x000028aa) midp_editing_number_pane_srt

0x263b,	// (0x0000263b) midp_ticker_pane_srt

0x28b2,	// (0x000028b2) midp_ticker_pane_srt_g1

0x28ba,	// (0x000028ba) midp_ticker_pane_srt_g2

0x0001,

0xaea9,	// (0x0000aea9) midp_ticker_pane_srt_g

0x28c2,	// (0x000028c2) midp_ticker_pane_srt_t1

0x4e1a,	// (0x00004e1a) midp_editing_number_pane_t1_copy1

0xc345,	// (0x0000c345) listscroll_midp_pane

0xc345,	// (0x0000c345) midp_form_pane

0x26b3,	// (0x000026b3) midp_info_popup_window_ParamLimits

0x26b3,	// (0x000026b3) midp_info_popup_window

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp50_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp50

0x3d64,	// (0x00003d64) listscroll_midp_info_pane_ParamLimits

0x3d64,	// (0x00003d64) listscroll_midp_info_pane

0x3d44,	// (0x00003d44) listscroll_form_midp_pane_ParamLimits

0x3d44,	// (0x00003d44) listscroll_form_midp_pane

0x3d50,	// (0x00003d50) scroll_bar_cp050

0x3d44,	// (0x00003d44) list_midp_pane

0x6102,	// (0x00006102) signal_pane_g2_cp

0x3c5e,	// (0x00003c5e) listscroll_midp_info_pane_t1_ParamLimits

0x3c5e,	// (0x00003c5e) listscroll_midp_info_pane_t1

0x3c76,	// (0x00003c76) listscroll_midp_info_pane_t2_ParamLimits

0x3c76,	// (0x00003c76) listscroll_midp_info_pane_t2

0x3cb4,	// (0x00003cb4) listscroll_midp_info_pane_t3_ParamLimits

0x3cb4,	// (0x00003cb4) listscroll_midp_info_pane_t3

0x3cee,	// (0x00003cee) listscroll_midp_info_pane_t4_ParamLimits

0x3cee,	// (0x00003cee) listscroll_midp_info_pane_t4

0x0003,

0xaf5a,	// (0x0000af5a) listscroll_midp_info_pane_t_ParamLimits

0xaf5a,	// (0x0000af5a) listscroll_midp_info_pane_t

0x16a6,	// (0x000016a6) scroll_pane_cp21

0x3bfc,	// (0x00003bfc) form_midp_field_choice_group_pane

0x3c05,	// (0x00003c05) form_midp_field_text_pane

0x3c44,	// (0x00003c44) form_midp_field_time_pane

0x3c4c,	// (0x00003c4c) form_midp_gauge_slider_pane

0x3c55,	// (0x00003c55) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd223,	// (0x0000d223) list_single_midp_pane_ParamLimits

0xd223,	// (0x0000d223) list_single_midp_pane

0xd202,	// (0x0000d202) form_midp_field_text_pane_t1

0x38bf,	// (0x000038bf) input_focus_pane_cp050

0x3bbd,	// (0x00003bbd) list_midp_form_text_pane

0x3b55,	// (0x00003b55) form_midp_field_choice_group_pane_t1

0x3b63,	// (0x00003b63) input_focus_pane_cp051

0x3b77,	// (0x00003b77) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b39,	// (0x00003b39) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b47,	// (0x00003b47) form_midp_field_time_pane_t2

0x0001,

0x2761,	// (0x00002761) aid_navinavi_width_2_pane

0xaf55,	// (0x0000af55) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3af9,	// (0x00003af9) form_midp_gauge_slider_pane_t1

0x3b07,	// (0x00003b07) form_midp_gauge_slider_pane_t2

0xd1e6,	// (0x0000d1e6) form_midp_gauge_slider_pane_t3

0xd1f4,	// (0x0000d1f4) form_midp_gauge_slider_pane_t4

0x0003,

0xf505,	// (0x0000f505) form_midp_gauge_slider_pane_t

0x3b31,	// (0x00003b31) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3ac6,	// (0x00003ac6) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ac6,	// (0x00003ac6) form_midp_gauge_wait_pane_t1

0x3ad8,	// (0x00003ad8) form_midp_gauge_wait_pane_t2_ParamLimits

0x3ad8,	// (0x00003ad8) form_midp_gauge_wait_pane_t2

0x0001,

0xaf47,	// (0x0000af47) form_midp_gauge_wait_pane_t_ParamLimits

0xaf47,	// (0x0000af47) form_midp_gauge_wait_pane_t

0x3aea,	// (0x00003aea) form_midp_wait_pane_ParamLimits

0x3aea,	// (0x00003aea) form_midp_wait_pane

0x3a90,	// (0x00003a90) form_midp_image_pane_g1

0x3a99,	// (0x00003a99) form_midp_image_pane_t1

0x3aa8,	// (0x00003aa8) form_midp_image_pane_t2

0x3ab7,	// (0x00003ab7) form_midp_image_pane_t3

0x0002,

0xaf40,	// (0x0000af40) form_midp_image_pane_t

0x3a78,	// (0x00003a78) list_single_midp_pane_g1

0x3a81,	// (0x00003a81) list_single_midp_pane_t1

0xd1d2,	// (0x0000d1d2) list_midp_form_item_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_midp_form_item_pane

0x2709,	// (0x00002709) list_midp_form_item_pane_t1

0x2718,	// (0x00002718) midp_ticker_pane_g1

0x2724,	// (0x00002724) midp_ticker_pane_g2

0x0001,

0xae8f,	// (0x0000ae8f) midp_ticker_pane_g

0x2730,	// (0x00002730) midp_ticker_pane_t1

0x5116,	// (0x00005116) midp_editing_number_pane_t1

0x50f4,	// (0x000050f4) midp_editing_number_pane

0x5103,	// (0x00005103) midp_ticker_pane

0x4de2,	// (0x00004de2) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dea,	// (0x00004dea) listscroll_ai_message_pane

0x4d6c,	// (0x00004d6c) ai_message_heading_pane_g1_ParamLimits

0x4d6c,	// (0x00004d6c) ai_message_heading_pane_g1

0x4d78,	// (0x00004d78) ai_message_heading_pane_g2_ParamLimits

0x4d78,	// (0x00004d78) ai_message_heading_pane_g2

0x4d84,	// (0x00004d84) ai_message_heading_pane_g3_ParamLimits

0x4d84,	// (0x00004d84) ai_message_heading_pane_g3

0x4d90,	// (0x00004d90) ai_message_heading_pane_g4_ParamLimits

0x4d90,	// (0x00004d90) ai_message_heading_pane_g4

0x0003,

0xb081,	// (0x0000b081) ai_message_heading_pane_g_ParamLimits

0xb081,	// (0x0000b081) ai_message_heading_pane_g

0x4d9c,	// (0x00004d9c) ai_message_heading_pane_t1_ParamLimits

0x4d9c,	// (0x00004d9c) ai_message_heading_pane_t1

0x4db6,	// (0x00004db6) ai_message_heading_pane_t2_ParamLimits

0x4db6,	// (0x00004db6) ai_message_heading_pane_t2

0x0001,

0xb08a,	// (0x0000b08a) ai_message_heading_pane_t_ParamLimits

0xb08a,	// (0x0000b08a) ai_message_heading_pane_t

0x4dc8,	// (0x00004dc8) bg_popup_heading_pane_cp1_ParamLimits

0x4dc8,	// (0x00004dc8) bg_popup_heading_pane_cp1

0x4d5a,	// (0x00004d5a) list_ai_message_pane_ParamLimits

0x4d5a,	// (0x00004d5a) list_ai_message_pane

0x16a6,	// (0x000016a6) scroll_pane_cp10

0x4ca6,	// (0x00004ca6) list_ai_message_pane_g1

0x4cae,	// (0x00004cae) list_ai_message_pane_g2

0x0001,

0xb05e,	// (0x0000b05e) list_ai_message_pane_g

0x4cb6,	// (0x00004cb6) list_ai_message_pane_t1_ParamLimits

0x4cb6,	// (0x00004cb6) list_ai_message_pane_t1

0x4ccb,	// (0x00004ccb) list_ai_message_pane_t2_ParamLimits

0x4ccb,	// (0x00004ccb) list_ai_message_pane_t2

0x4ce0,	// (0x00004ce0) list_ai_message_pane_t3_ParamLimits

0x4ce0,	// (0x00004ce0) list_ai_message_pane_t3

0x4cf5,	// (0x00004cf5) list_ai_message_pane_t4_ParamLimits

0x4cf5,	// (0x00004cf5) list_ai_message_pane_t4

0x0003,

0xb063,	// (0x0000b063) list_ai_message_pane_t_ParamLimits

0xb063,	// (0x0000b063) list_ai_message_pane_t

0xd36c,	// (0x0000d36c) cell_ai_soft_ind_pane_ParamLimits

0xd36c,	// (0x0000d36c) cell_ai_soft_ind_pane

0x2742,	// (0x00002742) cell_ai_soft_ind_pane_g1_ParamLimits

0x2742,	// (0x00002742) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x274f,	// (0x0000274f) text_secondary_cp56_ParamLimits

0x274f,	// (0x0000274f) text_secondary_cp56

0x4c66,	// (0x00004c66) example_general_pane_ParamLimits

0x4c66,	// (0x00004c66) example_general_pane

0x4c72,	// (0x00004c72) example_parent_pane_g1_ParamLimits

0x4c72,	// (0x00004c72) example_parent_pane_g1

0x4c7e,	// (0x00004c7e) example_parent_pane_t1_ParamLimits

0x4c7e,	// (0x00004c7e) example_parent_pane_t1

0xca1d,	// (0x0000ca1d) popup_preview_text_window_ParamLimits

0xca1d,	// (0x0000ca1d) popup_preview_text_window

0x256c,	// (0x0000256c) list_single_pane_cp2_g4

0x0909,	// (0x00000909) bg_popup_preview_window_pane_ParamLimits

0x0909,	// (0x00000909) bg_popup_preview_window_pane

0x49be,	// (0x000049be) popup_preview_text_window_t1_ParamLimits

0x49be,	// (0x000049be) popup_preview_text_window_t1

0x49dc,	// (0x000049dc) popup_preview_text_window_t2_ParamLimits

0x49dc,	// (0x000049dc) popup_preview_text_window_t2

0x4a25,	// (0x00004a25) popup_preview_text_window_t3_ParamLimits

0x4a25,	// (0x00004a25) popup_preview_text_window_t3

0x4a6a,	// (0x00004a6a) popup_preview_text_window_t4_ParamLimits

0x4a6a,	// (0x00004a6a) popup_preview_text_window_t4

0x0004,

0xb032,	// (0x0000b032) popup_preview_text_window_t_ParamLimits

0xb032,	// (0x0000b032) popup_preview_text_window_t

0x4ae8,	// (0x00004ae8) scroll_pane_cp11

0x3711,	// (0x00003711) bg_popup_preview_window_pane_g1

0x497e,	// (0x0000497e) bg_popup_preview_window_pane_g2

0x4986,	// (0x00004986) bg_popup_preview_window_pane_g3

0x498e,	// (0x0000498e) bg_popup_preview_window_pane_g4

0x4996,	// (0x00004996) bg_popup_preview_window_pane_g5

0x499e,	// (0x0000499e) bg_popup_preview_window_pane_g6

0x49a6,	// (0x000049a6) bg_popup_preview_window_pane_g7

0x49ae,	// (0x000049ae) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc999,	// (0x0000c999) popup_midp_note_alarm_window_ParamLimits

0xc999,	// (0x0000c999) popup_midp_note_alarm_window

0x1394,	// (0x00001394) data_form_pane_ParamLimits

0xbfbb,	// (0x0000bfbb) form_field_data_pane_g1

0xbfc5,	// (0x0000bfc5) form_field_data_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_ParamLimits

0x13d0,	// (0x000013d0) data_form_wide_pane_ParamLimits

0x13dc,	// (0x000013dc) form_field_data_wide_pane_g1

0x13fc,	// (0x000013fc) form_field_data_wide_pane_t1_ParamLimits

0x0bb8,	// (0x00000bb8) input_focus_pane_cp6_ParamLimits

0xc101,	// (0x0000c101) input_popup_find_pane_g1_ParamLimits

0xc101,	// (0x0000c101) input_popup_find_pane_g1

0x19d4,	// (0x000019d4) aid_navi_side_left_pane

0x19e9,	// (0x000019e9) aid_navi_side_right_pane

0x4233,	// (0x00004233) bg_popup_window_pane_cp30_ParamLimits

0x4233,	// (0x00004233) bg_popup_window_pane_cp30

0x42ad,	// (0x000042ad) popup_midp_note_alarm_window_g1_ParamLimits

0x42ad,	// (0x000042ad) popup_midp_note_alarm_window_g1

0x42dd,	// (0x000042dd) popup_midp_note_alarm_window_t1_ParamLimits

0x42dd,	// (0x000042dd) popup_midp_note_alarm_window_t1

0x437e,	// (0x0000437e) popup_midp_note_alarm_window_t2_ParamLimits

0x437e,	// (0x0000437e) popup_midp_note_alarm_window_t2

0x442c,	// (0x0000442c) popup_midp_note_alarm_window_t3_ParamLimits

0x442c,	// (0x0000442c) popup_midp_note_alarm_window_t3

0x445e,	// (0x0000445e) popup_midp_note_alarm_window_t4_ParamLimits

0x445e,	// (0x0000445e) popup_midp_note_alarm_window_t4

0x4484,	// (0x00004484) popup_midp_note_alarm_window_t5_ParamLimits

0x4484,	// (0x00004484) popup_midp_note_alarm_window_t5

0x000a,

0xafcf,	// (0x0000afcf) popup_midp_note_alarm_window_t_ParamLimits

0xafcf,	// (0x0000afcf) popup_midp_note_alarm_window_t

0x4530,	// (0x00004530) wait_bar_pane_cp1_ParamLimits

0x4530,	// (0x00004530) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3f19,	// (0x00003f19) wait_border_pane_g1_copy1

0x1413,	// (0x00001413) form_field_popup_pane_g1

0xbfdf,	// (0x0000bfdf) form_field_popup_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp7_ParamLimits

0x1433,	// (0x00001433) list_form_pane_ParamLimits

0x143f,	// (0x0000143f) form_field_popup_wide_pane_g1

0x1447,	// (0x00001447) form_field_popup_wide_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp8_ParamLimits

0x1459,	// (0x00001459) list_form_wide_pane_ParamLimits

0xd622,	// (0x0000d622) aid_size_cell_graphic_pane

0xc05e,	// (0x0000c05e) data_form_pane_t1_ParamLimits

0xd520,	// (0x0000d520) data_form_wide_pane_t1_ParamLimits

0xcde5,	// (0x0000cde5) bg_status_flat_pane

0xb897,	// (0x0000b897) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf3c5,	// (0x0000f3c5) title_pane_t_ParamLimits

0x1ced,	// (0x00001ced) level_1_signal_ParamLimits

0x1cff,	// (0x00001cff) level_2_signal_ParamLimits

0x1d12,	// (0x00001d12) level_3_signal_ParamLimits

0x1d25,	// (0x00001d25) level_4_signal_ParamLimits

0x1d38,	// (0x00001d38) level_5_signal_ParamLimits

0x1d4b,	// (0x00001d4b) level_6_signal_ParamLimits

0x1d5e,	// (0x00001d5e) level_7_signal_ParamLimits

0x1ced,	// (0x00001ced) level_1_battery_ParamLimits

0x1cff,	// (0x00001cff) level_2_battery_ParamLimits

0x1d12,	// (0x00001d12) level_3_battery_ParamLimits

0x1d25,	// (0x00001d25) level_4_battery_ParamLimits

0x1d38,	// (0x00001d38) level_5_battery_ParamLimits

0x1d4b,	// (0x00001d4b) level_6_battery_ParamLimits

0x1d5e,	// (0x00001d5e) level_7_battery_ParamLimits

0x4138,	// (0x00004138) bg_status_flat_pane_g1

0x4140,	// (0x00004140) bg_status_flat_pane_g2

0x4148,	// (0x00004148) bg_status_flat_pane_g3

0x4150,	// (0x00004150) bg_status_flat_pane_g4

0x4158,	// (0x00004158) bg_status_flat_pane_g5

0x4160,	// (0x00004160) bg_status_flat_pane_g6

0x4168,	// (0x00004168) bg_status_flat_pane_g7

0xb923,	// (0x0000b923) tabs_3_active_pane_t1_ParamLimits

0xb923,	// (0x0000b923) tabs_3_passive_pane_t1_ParamLimits

0xb935,	// (0x0000b935) tabs_4_active_pane_t1_ParamLimits

0xb935,	// (0x0000b935) tabs_4_1_passive_pane_t1_ParamLimits

0xc10f,	// (0x0000c10f) tabs_2_active_pane_t1_ParamLimits

0xc10f,	// (0x0000c10f) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc121,	// (0x0000c121) tabs_2_long_active_pane_t1_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_ParamLimits

0x37e2,	// (0x000037e2) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc134,	// (0x0000c134) tabs_3_long_active_pane_t1_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_ParamLimits

0x37e2,	// (0x000037e2) list_single_midp_graphic_pane_t1

0xcde5,	// (0x0000cde5) bg_status_flat_pane_ParamLimits

0x32fb,	// (0x000032fb) indicator_pane_cp2_ParamLimits

0x32fb,	// (0x000032fb) indicator_pane_cp2

0xcf63,	// (0x0000cf63) navi_pane_srt_ParamLimits

0xcf63,	// (0x0000cf63) navi_pane_srt

0x344a,	// (0x0000344a) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x263b,	// (0x0000263b) copy_highlight_pane

0x263b,	// (0x0000263b) cursor_graphics_pane

0x263b,	// (0x0000263b) graphic_within_text_pane

0x263b,	// (0x0000263b) link_highlight_pane

0x4aab,	// (0x00004aab) popup_preview_text_window_t5_ParamLimits

0x4aab,	// (0x00004aab) popup_preview_text_window_t5

0x2769,	// (0x00002769) cursor_digital_pane

0x2769,	// (0x00002769) cursor_primary_pane

0x277a,	// (0x0000277a) cursor_primary_small_pane

0x2782,	// (0x00002782) cursor_secondary_pane

0x278a,	// (0x0000278a) cursor_title_pane

0x2769,	// (0x00002769) link_highlight_digital_pane

0x2771,	// (0x00002771) link_highlight_primary_pane

0x277a,	// (0x0000277a) link_highlight_primary_small_pane

0x2782,	// (0x00002782) link_highlight_secondary_pane

0x278a,	// (0x0000278a) link_highlight_title_pane

0x2769,	// (0x00002769) copy_highlight_digital_pane

0x2769,	// (0x00002769) copy_highlight_primary_pane

0x277a,	// (0x0000277a) copy_highlight_primary_small_pane

0x2782,	// (0x00002782) copy_highlight_secondary_pane

0x278a,	// (0x0000278a) copy_highlight_title_pane

0x2782,	// (0x00002782) graphic_text_digital_pane

0x41d6,	// (0x000041d6) graphic_text_primary_pane

0x41df,	// (0x000041df) graphic_text_primary_small_pane

0x277a,	// (0x0000277a) graphic_text_secondary_pane

0x2769,	// (0x00002769) graphic_text_title_pane

0xc3ea,	// (0x0000c3ea) cursor_primary_pane_g1

0x41c8,	// (0x000041c8) cursor_text_primary_t1

0xd269,	// (0x0000d269) cursor_primary_small_pane_g1

0x41ba,	// (0x000041ba) cursor_text_primary_small_t1

0xd25f,	// (0x0000d25f) cursor_primary_small_pane_g1_copy1

0x41a2,	// (0x000041a2) cursor_text_primary_small_t1_copy1

0x4180,	// (0x00004180) cursor_text_title_t1

0xd255,	// (0x0000d255) cursor_title_pane_g1

0xc3ea,	// (0x0000c3ea) cursor_digital_pane_g1

0x279c,	// (0x0000279c) cursor_text_digital_t1

0x27c1,	// (0x000027c1) link_highlight_primary_pane_g1

0x4129,	// (0x00004129) link_highlight_primary_pane_t1

0x27aa,	// (0x000027aa) link_highlight_primary_small_pane_g1

0x27b2,	// (0x000027b2) link_highlight_primary_small_pane_t1

0x27c1,	// (0x000027c1) link_highlight_secondary_pane_g1

0x27c9,	// (0x000027c9) link_highlight_secondary_pane_t1

0x409d,	// (0x0000409d) link_highlight_title_pane_g1

0x40a5,	// (0x000040a5) link_highlight_title_pane_t1

0x4086,	// (0x00004086) link_highlight_digital_pane_g1

0x408e,	// (0x0000408e) link_highlight_digital_pane_t1

0x3f5e,	// (0x00003f5e) copy_highlight_primary_pane_g1

0x3f66,	// (0x00003f66) copy_highlight_primary_pane_t1

0x3f38,	// (0x00003f38) copy_highlight_primary_small_pane_g1

0x3f4f,	// (0x00003f4f) copy_highlight_primary_small_pane_t1

0x27d8,	// (0x000027d8) copy_highlight_secondary_pane_g1

0x27e0,	// (0x000027e0) copy_highlight_secondary_pane_t1

0x3f38,	// (0x00003f38) copy_highlight_title_pane_g1

0x3f40,	// (0x00003f40) copy_highlight_title_pane_t1

0x3f5e,	// (0x00003f5e) copy_highlight_digital_pane_g1

0x55b8,	// (0x000055b8) copy_highlight_digital_pane_t1

0x550c,	// (0x0000550c) graphic_text_primary_pane_g1

0x559c,	// (0x0000559c) graphic_text_primary_pane_t1

0x55aa,	// (0x000055aa) graphic_text_primary_pane_t2

0x0001,

0xb0fe,	// (0x0000b0fe) graphic_text_primary_pane_t

0x5578,	// (0x00005578) graphic_text_primary_small_pane_g1

0x5580,	// (0x00005580) graphic_text_primary_small_pane_t1

0x558e,	// (0x0000558e) graphic_text_primary_small_pane_t2

0x0001,

0xb0f9,	// (0x0000b0f9) graphic_text_primary_small_pane_t

0x5554,	// (0x00005554) graphic_text_secondary_pane_g1

0x555c,	// (0x0000555c) graphic_text_secondary_pane_t1

0x556a,	// (0x0000556a) graphic_text_secondary_pane_t2

0x0001,

0xb0f4,	// (0x0000b0f4) graphic_text_secondary_pane_t

0x5530,	// (0x00005530) graphic_text_title_pane_g1

0x5538,	// (0x00005538) graphic_text_title_pane_t1

0x5546,	// (0x00005546) graphic_text_title_pane_t2

0x0001,

0xb0ef,	// (0x0000b0ef) graphic_text_title_pane_t

0x550c,	// (0x0000550c) graphic_text_digital_pane_g1

0x5514,	// (0x00005514) graphic_text_digital_pane_t1

0x5522,	// (0x00005522) graphic_text_digital_pane_t2

0x0001,

0xb0ea,	// (0x0000b0ea) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54d7,	// (0x000054d7) navi_navi_icon_text_pane_srt

0x54df,	// (0x000054df) navi_navi_pane_srt_g1_ParamLimits

0x54df,	// (0x000054df) navi_navi_pane_srt_g1

0x54f1,	// (0x000054f1) navi_navi_pane_srt_g2_ParamLimits

0x54f1,	// (0x000054f1) navi_navi_pane_srt_g2

0x0001,

0xb0e5,	// (0x0000b0e5) navi_navi_pane_srt_g_ParamLimits

0xb0e5,	// (0x0000b0e5) navi_navi_pane_srt_g

0x5503,	// (0x00005503) navi_navi_tabs_pane_srt

0x54d7,	// (0x000054d7) navi_navi_text_pane_srt

0x54d7,	// (0x000054d7) navi_navi_volume_pane_srt

0x54c8,	// (0x000054c8) navi_navi_text_pane_srt_t1

0x54a3,	// (0x000054a3) navi_navi_volume_pane_srt_g1

0x54ab,	// (0x000054ab) volume_small_pane_srt_ParamLimits

0x54ab,	// (0x000054ab) volume_small_pane_srt

0x27ef,	// (0x000027ef) volume_small_pane_srt_g1_ParamLimits

0x27ef,	// (0x000027ef) volume_small_pane_srt_g1

0x27ff,	// (0x000027ff) volume_small_pane_srt_g2_ParamLimits

0x27ff,	// (0x000027ff) volume_small_pane_srt_g2

0x2810,	// (0x00002810) volume_small_pane_srt_g3_ParamLimits

0x2810,	// (0x00002810) volume_small_pane_srt_g3

0x2821,	// (0x00002821) volume_small_pane_srt_g4_ParamLimits

0x2821,	// (0x00002821) volume_small_pane_srt_g4

0x2832,	// (0x00002832) volume_small_pane_srt_g5_ParamLimits

0x2832,	// (0x00002832) volume_small_pane_srt_g5

0x2843,	// (0x00002843) volume_small_pane_srt_g6_ParamLimits

0x2843,	// (0x00002843) volume_small_pane_srt_g6

0x2854,	// (0x00002854) volume_small_pane_srt_g7_ParamLimits

0x2854,	// (0x00002854) volume_small_pane_srt_g7

0x2865,	// (0x00002865) volume_small_pane_srt_g8_ParamLimits

0x2865,	// (0x00002865) volume_small_pane_srt_g8

0x2876,	// (0x00002876) volume_small_pane_srt_g9_ParamLimits

0x2876,	// (0x00002876) volume_small_pane_srt_g9

0x2887,	// (0x00002887) volume_small_pane_srt_g10_ParamLimits

0x2887,	// (0x00002887) volume_small_pane_srt_g10

0x0009,

0xae94,	// (0x0000ae94) volume_small_pane_srt_g_ParamLimits

0xae94,	// (0x0000ae94) volume_small_pane_srt_g

0x09b2,	// (0x000009b2) query_popup_data_pane_cp2

0x5491,	// (0x00005491) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5491,	// (0x00005491) navi_navi_icon_text_pane_srt_t1

0x41d6,	// (0x000041d6) navi_tabs_2_long_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_2_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_3_long_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_3_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_4_pane_srt

0x5469,	// (0x00005469) tabs_2_active_pane_srt_ParamLimits

0x5469,	// (0x00005469) tabs_2_active_pane_srt

0x5479,	// (0x00005479) tabs_2_passive_pane_srt_ParamLimits

0x5479,	// (0x00005479) tabs_2_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp1_srt

0x543d,	// (0x0000543d) bg_passive_tab_pane_g1_cp1_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp1_srt

0x5446,	// (0x00005446) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x544f,	// (0x0000544f) tabs_2_active_pane_srt_g1

0xd664,	// (0x0000d664) tabs_2_active_pane_srt_t1_ParamLimits

0xd664,	// (0x0000d664) tabs_2_active_pane_srt_t1

0x543d,	// (0x0000543d) bg_active_tab_pane_g1_cp1_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp1_srt

0x5446,	// (0x00005446) bg_active_tab_pane_g3_cp1_srt

0x540a,	// (0x0000540a) tabs_3_active_pane_srt_ParamLimits

0x540a,	// (0x0000540a) tabs_3_active_pane_srt

0x541b,	// (0x0000541b) tabs_3_passive_pane_cp_srt_ParamLimits

0x541b,	// (0x0000541b) tabs_3_passive_pane_cp_srt

0x542c,	// (0x0000542c) tabs_3_passive_pane_srt_ParamLimits

0x542c,	// (0x0000542c) tabs_3_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp2_srt

0x2898,	// (0x00002898) bg_passive_tab_pane_g1_cp2_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp2_srt

0x28a1,	// (0x000028a1) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53f0,	// (0x000053f0) tabs_3_active_pane_srt_g1

0xd64e,	// (0x0000d64e) tabs_3_active_pane_srt_t1_ParamLimits

0xd64e,	// (0x0000d64e) tabs_3_active_pane_srt_t1

0x2898,	// (0x00002898) bg_active_tab_pane_g1_cp2_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp2_srt

0x28a1,	// (0x000028a1) bg_active_tab_pane_g3_cp2_srt

0x53a8,	// (0x000053a8) tabs_4_active_pane_srt_ParamLimits

0x53a8,	// (0x000053a8) tabs_4_active_pane_srt

0x53ba,	// (0x000053ba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x53ba,	// (0x000053ba) tabs_4_passive_pane_cp2_srt

0x2b46,	// (0x00002b46) aid_size_cell_toolbar

0x4f3a,	// (0x00004f3a) main_idle_act_pane_ParamLimits

0x2d67,	// (0x00002d67) popup_large_graphic_colour_window_ParamLimits

0xcca9,	// (0x0000cca9) popup_toolbar_window_ParamLimits

0xcca9,	// (0x0000cca9) popup_toolbar_window

0x5140,	// (0x00005140) list_single_graphic_2heading_pane_ParamLimits

0x5140,	// (0x00005140) list_single_graphic_2heading_pane

0x1a60,	// (0x00001a60) aid_size_cell_apps_grid_lsc_pane

0x1a72,	// (0x00001a72) aid_size_cell_apps_grid_prt_pane

0x2b86,	// (0x00002b86) bg_wml_button_pane_cp1_ParamLimits

0x2b86,	// (0x00002b86) bg_wml_button_pane_cp1

0xd202,	// (0x0000d202) form_midp_field_text_pane_t1_ParamLimits

0x38bf,	// (0x000038bf) input_focus_pane_cp050_ParamLimits

0x3bbd,	// (0x00003bbd) list_midp_form_text_pane_ParamLimits

0x3b63,	// (0x00003b63) input_focus_pane_cp051_ParamLimits

0x3b77,	// (0x00003b77) list_midp_choice_pane_ParamLimits

0xd1a0,	// (0x0000d1a0) list_single_2graphic_pane_cp3_ParamLimits

0xd1a0,	// (0x0000d1a0) list_single_2graphic_pane_cp3

0xd1b3,	// (0x0000d1b3) list_single_midp_graphic_pane_ParamLimits

0xd1b3,	// (0x0000d1b3) list_single_midp_graphic_pane

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_g1

0x2574,	// (0x00002574) list_single_graphic_2heading_pane_g4_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_2heading_pane_g4

0x35b5,	// (0x000035b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_2heading_pane_g5

0x0002,

0xaee7,	// (0x0000aee7) list_single_graphic_2heading_pane_g_ParamLimits

0xaee7,	// (0x0000aee7) list_single_graphic_2heading_pane_g

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t1

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t2

0x35f1,	// (0x000035f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x35f1,	// (0x000035f1) list_single_graphic_2heading_pane_t3

0x0002,

0xaeee,	// (0x0000aeee) list_single_graphic_2heading_pane_t_ParamLimits

0xaeee,	// (0x0000aeee) list_single_graphic_2heading_pane_t

0x3609,	// (0x00003609) bg_popup_sub_pane_cp2

0x3633,	// (0x00003633) grid_toobar_pane

0x366f,	// (0x0000366f) cell_toolbar_pane_ParamLimits

0x366f,	// (0x0000366f) cell_toolbar_pane

0x36b5,	// (0x000036b5) cell_toolbar_pane_g1_ParamLimits

0x36b5,	// (0x000036b5) cell_toolbar_pane_g1

0x36c9,	// (0x000036c9) cell_toolbar_pane_g2_ParamLimits

0x36c9,	// (0x000036c9) cell_toolbar_pane_g2

0x0001,

0xaef5,	// (0x0000aef5) cell_toolbar_pane_g_ParamLimits

0xaef5,	// (0x0000aef5) cell_toolbar_pane_g

0x36eb,	// (0x000036eb) grid_highlight_pane_cp2_ParamLimits

0x36eb,	// (0x000036eb) grid_highlight_pane_cp2

0x3705,	// (0x00003705) toolbar_button_pane

0x3711,	// (0x00003711) toolbar_button_pane_g1

0x3719,	// (0x00003719) toolbar_button_pane_g2

0x3721,	// (0x00003721) toolbar_button_pane_g3

0x3729,	// (0x00003729) toolbar_button_pane_g4

0x3731,	// (0x00003731) toolbar_button_pane_g5

0x3739,	// (0x00003739) toolbar_button_pane_g6

0x3741,	// (0x00003741) toolbar_button_pane_g7

0x3749,	// (0x00003749) toolbar_button_pane_g8

0x3751,	// (0x00003751) toolbar_button_pane_g9

0x0009,

0xaefa,	// (0x0000aefa) toolbar_button_pane_g

0x3761,	// (0x00003761) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3761,	// (0x00003761) list_single_2graphic_pane_g1_cp3

0xd102,	// (0x0000d102) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd102,	// (0x0000d102) list_single_2graphic_pane_g2_cp3

0x377e,	// (0x0000377e) list_single_2graphic_pane_g3_cp3

0x3786,	// (0x00003786) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3786,	// (0x00003786) list_single_2graphic_pane_g4_cp3

0x3792,	// (0x00003792) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3792,	// (0x00003792) list_single_2graphic_pane_t1_cp3

0x37d6,	// (0x000037d6) list_single_midp_graphic_pane_g2_ParamLimits

0x37d6,	// (0x000037d6) list_single_midp_graphic_pane_g2

0x2b4e,	// (0x00002b4e) aid_zoom_text_primary

0x2b56,	// (0x00002b56) aid_zoom_text_secondary

0xc442,	// (0x0000c442) status_small_pane_g7_ParamLimits

0xc442,	// (0x0000c442) status_small_pane_g7

0xc465,	// (0x0000c465) status_small_pane_t1_ParamLimits

0xb873,	// (0x0000b873) title_pane_g2

0x0003,

0xf3bc,	// (0x0000f3bc) title_pane_g

0xbaeb,	// (0x0000baeb) aid_size_cell_colour_1_pane_ParamLimits

0xbaeb,	// (0x0000baeb) aid_size_cell_colour_1_pane

0xbaff,	// (0x0000baff) aid_size_cell_colour_2_pane_ParamLimits

0xbaff,	// (0x0000baff) aid_size_cell_colour_2_pane

0xbb13,	// (0x0000bb13) aid_size_cell_colour_3_pane_ParamLimits

0xbb13,	// (0x0000bb13) aid_size_cell_colour_3_pane

0xbb27,	// (0x0000bb27) aid_size_cell_colour_4_pane_ParamLimits

0xbb27,	// (0x0000bb27) aid_size_cell_colour_4_pane

0x18dc,	// (0x000018dc) title_pane_stacon_g1_ParamLimits

0x18dc,	// (0x000018dc) title_pane_stacon_g1

0x3fbd,	// (0x00003fbd) popup_note_wait_window_g3_ParamLimits

0x3fbd,	// (0x00003fbd) popup_note_wait_window_g3

0x4033,	// (0x00004033) popup_note_wait_window_t5_ParamLimits

0x4033,	// (0x00004033) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc6b1,	// (0x0000c6b1) popup_feb_china_hwr_fs_window_ParamLimits

0xc6b1,	// (0x0000c6b1) popup_feb_china_hwr_fs_window

0xd113,	// (0x0000d113) aid_size_cell_hwr_fs_ParamLimits

0xd113,	// (0x0000d113) aid_size_cell_hwr_fs

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp3_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp3

0xd128,	// (0x0000d128) grid_hwr_fs_pane_ParamLimits

0xd128,	// (0x0000d128) grid_hwr_fs_pane

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane_ParamLimits

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane

0xd140,	// (0x0000d140) cell_hwr_fs_pane_ParamLimits

0xd140,	// (0x0000d140) cell_hwr_fs_pane

0x3915,	// (0x00003915) linegrid_hwr_fs_pane_g1_ParamLimits

0x3915,	// (0x00003915) linegrid_hwr_fs_pane_g1

0xd166,	// (0x0000d166) linegrid_hwr_fs_pane_g2_ParamLimits

0xd166,	// (0x0000d166) linegrid_hwr_fs_pane_g2

0x3933,	// (0x00003933) linegrid_hwr_fs_pane_g3_ParamLimits

0x3933,	// (0x00003933) linegrid_hwr_fs_pane_g3

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane_g4_ParamLimits

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane_g4

0x3959,	// (0x00003959) linegrid_hwr_fs_pane_g5_ParamLimits

0x3959,	// (0x00003959) linegrid_hwr_fs_pane_g5

0x0004,

0xf4f1,	// (0x0000f4f1) linegrid_hwr_fs_pane_g_ParamLimits

0xf4f1,	// (0x0000f4f1) linegrid_hwr_fs_pane_g

0x396f,	// (0x0000396f) cell_hwr_fs_pane_g1_ParamLimits

0x396f,	// (0x0000396f) cell_hwr_fs_pane_g1

0x34e0,	// (0x000034e0) cell_hwr_fs_pane_g2_ParamLimits

0x34e0,	// (0x000034e0) cell_hwr_fs_pane_g2

0xd178,	// (0x0000d178) cell_hwr_fs_pane_g3_ParamLimits

0xd178,	// (0x0000d178) cell_hwr_fs_pane_g3

0xd185,	// (0x0000d185) cell_hwr_fs_pane_g4_ParamLimits

0xd185,	// (0x0000d185) cell_hwr_fs_pane_g4

0x0003,

0xf4fc,	// (0x0000f4fc) cell_hwr_fs_pane_g_ParamLimits

0xf4fc,	// (0x0000f4fc) cell_hwr_fs_pane_g

0xd192,	// (0x0000d192) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x168d,	// (0x0000168d) aid_inside_area_popup_secondary

0xd273,	// (0x0000d273) aid_inside_area_window_primary_ParamLimits

0xd273,	// (0x0000d273) aid_inside_area_window_primary

0x55c7,	// (0x000055c7) ai2_news_ticker_pane

0x55cf,	// (0x000055cf) aid_size_cell_ai1_link_ParamLimits

0x55cf,	// (0x000055cf) aid_size_cell_ai1_link

0xd67a,	// (0x0000d67a) popup_ai2_data_window_ParamLimits

0xd67a,	// (0x0000d67a) popup_ai2_data_window

0x55ff,	// (0x000055ff) popup_ai2_link_window_ParamLimits

0x55ff,	// (0x000055ff) popup_ai2_link_window

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp4_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp4

0x5613,	// (0x00005613) grid_ai2_link_pane_ParamLimits

0x5613,	// (0x00005613) grid_ai2_link_pane

0x562a,	// (0x0000562a) popup_ai2_link_window_g1_ParamLimits

0x562a,	// (0x0000562a) popup_ai2_link_window_g1

0x5636,	// (0x00005636) popup_ai2_link_window_g2_ParamLimits

0x5636,	// (0x00005636) popup_ai2_link_window_g2

0x0001,

0xb103,	// (0x0000b103) popup_ai2_link_window_g_ParamLimits

0xb103,	// (0x0000b103) popup_ai2_link_window_g

0x5645,	// (0x00005645) ai2_mp_button_pane

0x564d,	// (0x0000564d) ai2_mp_volume_pane

0x3b63,	// (0x00003b63) bg_popup_sub_pane_cp5_ParamLimits

0x3b63,	// (0x00003b63) bg_popup_sub_pane_cp5

0x5655,	// (0x00005655) heading_ai2_gene_pane_ParamLimits

0x5655,	// (0x00005655) heading_ai2_gene_pane

0x5661,	// (0x00005661) list_ai2_gene_pane_ParamLimits

0x5661,	// (0x00005661) list_ai2_gene_pane

0x56a9,	// (0x000056a9) cell_ai2_link_pane_ParamLimits

0x56a9,	// (0x000056a9) cell_ai2_link_pane

0x56bf,	// (0x000056bf) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x578f,	// (0x0000578f) ai2_mp_volume_pane_g1

0x5797,	// (0x00005797) ai2_mp_volume_pane_g2

0xd6a4,	// (0x0000d6a4) list_ai2_gene_pane_t1

0x579f,	// (0x0000579f) ai2_mp_volume_pane_g3

0x0002,

0xb11c,	// (0x0000b11c) ai2_mp_volume_pane_g

0x57a7,	// (0x000057a7) volume_small_pane_cp3

0x57b0,	// (0x000057b0) aid_size_cell_ai2_button

0x57b8,	// (0x000057b8) grid_ai2_button_pane

0x57c1,	// (0x000057c1) cell_ai2_button_pane_ParamLimits

0x57c1,	// (0x000057c1) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x574f,	// (0x0000574f) ai2_gene_pane_t1_ParamLimits

0x574f,	// (0x0000574f) ai2_gene_pane_t1

0xc633,	// (0x0000c633) aid_height_parent_landscape

0xd3cc,	// (0x0000d3cc) aid_height_set_list

0x4f3a,	// (0x00004f3a) aid_size_parent

0xd622,	// (0x0000d622) aid_size_cell_graphic_pane_ParamLimits

0x5671,	// (0x00005671) popup_ai2_data_window_g1_ParamLimits

0x5671,	// (0x00005671) popup_ai2_data_window_g1

0x567d,	// (0x0000567d) ai2_news_ticker_pane_g1

0x5685,	// (0x00005685) ai2_news_ticker_pane_g2

0x0001,

0xb108,	// (0x0000b108) ai2_news_ticker_pane_g

0x568d,	// (0x0000568d) ai2_news_ticker_pane_t1

0x569b,	// (0x0000569b) ai2_news_ticker_pane_t2

0x0001,

0xb10d,	// (0x0000b10d) ai2_news_ticker_pane_t

0x56c8,	// (0x000056c8) heading_ai2_gene_pane_g1

0x56d0,	// (0x000056d0) heading_ai2_gene_pane_t1_ParamLimits

0x56d0,	// (0x000056d0) heading_ai2_gene_pane_t1

0x56e5,	// (0x000056e5) list_highlight_pane_cp6

0xd68e,	// (0x0000d68e) ai2_gene_pane_ParamLimits

0xd68e,	// (0x0000d68e) ai2_gene_pane

0xd6b2,	// (0x0000d6b2) list_ai2_gene_pane_t2

0x0001,

0xf55d,	// (0x0000f55d) list_ai2_gene_pane_t

0x5720,	// (0x00005720) list_highlight_pane_cp8_ParamLimits

0x5720,	// (0x00005720) list_highlight_pane_cp8

0x5731,	// (0x00005731) ai2_gene_pane_g1_ParamLimits

0x5731,	// (0x00005731) ai2_gene_pane_g1

0x5743,	// (0x00005743) ai2_gene_pane_g2_ParamLimits

0x5743,	// (0x00005743) ai2_gene_pane_g2

0x0001,

0xb117,	// (0x0000b117) ai2_gene_pane_g_ParamLimits

0xb117,	// (0x0000b117) ai2_gene_pane_g

0x0ddd,	// (0x00000ddd) scroll_pane_cp12

0xc5f0,	// (0x0000c5f0) control_pane_t3_ParamLimits

0xc5f0,	// (0x0000c5f0) control_pane_t3

0xc456,	// (0x0000c456) status_small_pane_g8_ParamLimits

0xc456,	// (0x0000c456) status_small_pane_g8

0xc746,	// (0x0000c746) popup_find_window_ParamLimits

0xc9d3,	// (0x0000c9d3) popup_note_image_window_ParamLimits

0x35a9,	// (0x000035a9) list_double2_graphic_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_double2_graphic_pane_vc_g1

0x2574,	// (0x00002574) list_double2_graphic_pane_vc_g2_ParamLimits

0x2574,	// (0x00002574) list_double2_graphic_pane_vc_g2

0x35b5,	// (0x000035b5) list_double2_graphic_pane_vc_g3_ParamLimits

0x35b5,	// (0x000035b5) list_double2_graphic_pane_vc_g3

0x0002,

0xaee7,	// (0x0000aee7) list_double2_graphic_pane_vc_g_ParamLimits

0xaee7,	// (0x0000aee7) list_double2_graphic_pane_vc_g

0x369f,	// (0x0000369f) list_double2_graphic_pane_vc_t1_ParamLimits

0x369f,	// (0x0000369f) list_double2_graphic_pane_vc_t1

0x2574,	// (0x00002574) list_single_heading_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_single_heading_pane_vc_g1

0x35b5,	// (0x000035b5) list_single_heading_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_heading_pane_vc_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_heading_pane_vc_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_heading_pane_vc_g

0x37ae,	// (0x000037ae) list_single_heading_pane_vc_t1_ParamLimits

0x37ae,	// (0x000037ae) list_single_heading_pane_vc_t1

0x37c4,	// (0x000037c4) list_single_heading_pane_vc_t2_ParamLimits

0x37c4,	// (0x000037c4) list_single_heading_pane_vc_t2

0x0001,

0xaf14,	// (0x0000af14) list_single_heading_pane_vc_t_ParamLimits

0xaf14,	// (0x0000af14) list_single_heading_pane_vc_t

0x37f8,	// (0x000037f8) list_setting_number_pane_vc_g1_ParamLimits

0x37f8,	// (0x000037f8) list_setting_number_pane_vc_g1

0x3804,	// (0x00003804) list_setting_number_pane_vc_g2_ParamLimits

0x3804,	// (0x00003804) list_setting_number_pane_vc_g2

0x0001,

0xaf19,	// (0x0000af19) list_setting_number_pane_vc_g_ParamLimits

0xaf19,	// (0x0000af19) list_setting_number_pane_vc_g

0x3810,	// (0x00003810) list_setting_number_pane_vc_t1_ParamLimits

0x3810,	// (0x00003810) list_setting_number_pane_vc_t1

0x3824,	// (0x00003824) list_setting_number_pane_vc_t2_ParamLimits

0x3824,	// (0x00003824) list_setting_number_pane_vc_t2

0x3840,	// (0x00003840) list_setting_number_pane_vc_t3_ParamLimits

0x3840,	// (0x00003840) list_setting_number_pane_vc_t3

0x0002,

0xaf1e,	// (0x0000af1e) list_setting_number_pane_vc_t_ParamLimits

0xaf1e,	// (0x0000af1e) list_setting_number_pane_vc_t

0x386e,	// (0x0000386e) set_value_pane_vc_ParamLimits

0x386e,	// (0x0000386e) set_value_pane_vc

0x5140,	// (0x00005140) list_double2_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_graphic_pane_vc

0x5140,	// (0x00005140) list_double2_large_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_large_graphic_pane_vc

0x5140,	// (0x00005140) list_double2_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_pane_vc

0x5140,	// (0x00005140) list_double_graphic_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_graphic_heading_pane_vc

0x5140,	// (0x00005140) list_double_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_graphic_pane_vc

0x5140,	// (0x00005140) list_double_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_heading_pane_vc

0x5152,	// (0x00005152) list_double_large_graphic_pane_vc_ParamLimits

0x5152,	// (0x00005152) list_double_large_graphic_pane_vc

0x5140,	// (0x00005140) list_double_number_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_number_pane_vc

0x5140,	// (0x00005140) list_double_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_pane_vc

0x5140,	// (0x00005140) list_double_time_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_time_pane_vc

0x5140,	// (0x00005140) list_setting_number_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_setting_number_pane_vc

0x5140,	// (0x00005140) list_setting_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_setting_pane_vc

0x5140,	// (0x00005140) list_single_graphic_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_graphic_heading_pane_vc

0x5140,	// (0x00005140) list_single_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_heading_pane_vc

0x5140,	// (0x00005140) list_single_number_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_number_heading_pane_vc

0x35a9,	// (0x000035a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_double_graphic_heading_pane_vc_g1

0x57f5,	// (0x000057f5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57f5,	// (0x000057f5) list_double_graphic_heading_pane_vc_g2

0x5801,	// (0x00005801) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5801,	// (0x00005801) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb123,	// (0x0000b123) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb123,	// (0x0000b123) list_double_graphic_heading_pane_vc_g

0x580d,	// (0x0000580d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x580d,	// (0x0000580d) list_double_graphic_heading_pane_vc_t1

0x5829,	// (0x00005829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5829,	// (0x00005829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb12a,	// (0x0000b12a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb12a,	// (0x0000b12a) list_double_graphic_heading_pane_vc_t

0x37f8,	// (0x000037f8) list_setting_pane_vc_g1_ParamLimits

0x37f8,	// (0x000037f8) list_setting_pane_vc_g1

0x3804,	// (0x00003804) list_setting_pane_vc_g2_ParamLimits

0x3804,	// (0x00003804) list_setting_pane_vc_g2

0x0001,

0xaf19,	// (0x0000af19) list_setting_pane_vc_g_ParamLimits

0xaf19,	// (0x0000af19) list_setting_pane_vc_g

0x5a54,	// (0x00005a54) list_setting_pane_vc_t1_ParamLimits

0x5a54,	// (0x00005a54) list_setting_pane_vc_t1

0x5a70,	// (0x00005a70) list_setting_pane_vc_t2_ParamLimits

0x5a70,	// (0x00005a70) list_setting_pane_vc_t2

0x0001,

0xb158,	// (0x0000b158) list_setting_pane_vc_t_ParamLimits

0xb158,	// (0x0000b158) list_setting_pane_vc_t

0x386e,	// (0x0000386e) set_value_pane_cp_vc_ParamLimits

0x386e,	// (0x0000386e) set_value_pane_cp_vc

0x2574,	// (0x00002574) list_single_number_heading_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_heading_pane_vc_g1

0x35b5,	// (0x000035b5) list_single_number_heading_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_heading_pane_vc_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_single_number_heading_pane_vc_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_single_number_heading_pane_vc_g

0x5a8c,	// (0x00005a8c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a8c,	// (0x00005a8c) list_single_number_heading_pane_vc_t1

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_vc_t2_ParamLimits

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_vc_t2

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_vc_t3_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_vc_t3

0x0002,

0xb15d,	// (0x0000b15d) list_single_number_heading_pane_vc_t_ParamLimits

0xb15d,	// (0x0000b15d) list_single_number_heading_pane_vc_t

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_vc_g1

0x2574,	// (0x00002574) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_heading_pane_vc_g4

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaee7,	// (0x0000aee7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaee7,	// (0x0000aee7) list_single_graphic_heading_pane_vc_g

0x5ac6,	// (0x00005ac6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5ac6,	// (0x00005ac6) list_single_graphic_heading_pane_vc_t1

0x5adc,	// (0x00005adc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5adc,	// (0x00005adc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb164,	// (0x0000b164) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb164,	// (0x0000b164) list_single_graphic_heading_pane_vc_t

0x2574,	// (0x00002574) list_double2_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double2_pane_vc_g1

0x35b5,	// (0x000035b5) list_double2_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double2_pane_vc_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_double2_pane_vc_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_double2_pane_vc_g

0x5aee,	// (0x00005aee) list_double2_pane_vc_t1_ParamLimits

0x5aee,	// (0x00005aee) list_double2_pane_vc_t1

0x5b04,	// (0x00005b04) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5b04,	// (0x00005b04) list_double2_large_graphic_pane_vc_g1

0x2574,	// (0x00002574) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2574,	// (0x00002574) list_double2_large_graphic_pane_vc_g2

0x35b5,	// (0x000035b5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x35b5,	// (0x000035b5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb169,	// (0x0000b169) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb169,	// (0x0000b169) list_double2_large_graphic_pane_vc_g

0x5b10,	// (0x00005b10) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b10,	// (0x00005b10) list_double2_large_graphic_pane_vc_t1

0x5b26,	// (0x00005b26) list_double_time_pane_vc_g1_ParamLimits

0x5b26,	// (0x00005b26) list_double_time_pane_vc_g1

0x5b32,	// (0x00005b32) list_double_time_pane_vc_g2_ParamLimits

0x5b32,	// (0x00005b32) list_double_time_pane_vc_g2

0x0001,

0xb170,	// (0x0000b170) list_double_time_pane_vc_g_ParamLimits

0xb170,	// (0x0000b170) list_double_time_pane_vc_g

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t1_ParamLimits

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t1

0x5b62,	// (0x00005b62) list_double_time_pane_vc_t2_ParamLimits

0x5b62,	// (0x00005b62) list_double_time_pane_vc_t2

0x5b91,	// (0x00005b91) list_double_time_pane_vc_t3_ParamLimits

0x5b91,	// (0x00005b91) list_double_time_pane_vc_t3

0x5ba3,	// (0x00005ba3) list_double_time_pane_vc_t4_ParamLimits

0x5ba3,	// (0x00005ba3) list_double_time_pane_vc_t4

0x0003,

0xb175,	// (0x0000b175) list_double_time_pane_vc_t_ParamLimits

0xb175,	// (0x0000b175) list_double_time_pane_vc_t

0x2574,	// (0x00002574) list_double_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double_pane_vc_g1

0x35b5,	// (0x000035b5) list_double_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double_pane_vc_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_double_pane_vc_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_double_pane_vc_g

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t1_ParamLimits

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t1

0x5bcb,	// (0x00005bcb) list_double_pane_vc_t2_ParamLimits

0x5bcb,	// (0x00005bcb) list_double_pane_vc_t2

0x0001,

0xb17e,	// (0x0000b17e) list_double_pane_vc_t_ParamLimits

0xb17e,	// (0x0000b17e) list_double_pane_vc_t

0x2574,	// (0x00002574) list_double_number_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double_number_pane_vc_g1

0x35b5,	// (0x000035b5) list_double_number_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double_number_pane_vc_g2

0x0001,

0xaf0f,	// (0x0000af0f) list_double_number_pane_vc_g_ParamLimits

0xaf0f,	// (0x0000af0f) list_double_number_pane_vc_g

0x5be3,	// (0x00005be3) list_double_number_pane_vc_t1_ParamLimits

0x5be3,	// (0x00005be3) list_double_number_pane_vc_t1

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t2_ParamLimits

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t2

0x5c09,	// (0x00005c09) list_double_number_pane_vc_t3_ParamLimits

0x5c09,	// (0x00005c09) list_double_number_pane_vc_t3

0x0002,

0xb183,	// (0x0000b183) list_double_number_pane_vc_t_ParamLimits

0xb183,	// (0x0000b183) list_double_number_pane_vc_t

0x5c21,	// (0x00005c21) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5c21,	// (0x00005c21) list_double_large_graphic_pane_vc_g1

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g2

0x5c57,	// (0x00005c57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c57,	// (0x00005c57) list_double_large_graphic_pane_vc_g3

0x5c66,	// (0x00005c66) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c66,	// (0x00005c66) list_double_large_graphic_pane_vc_g4

0x0003,

0xb18a,	// (0x0000b18a) list_double_large_graphic_pane_vc_g_ParamLimits

0xb18a,	// (0x0000b18a) list_double_large_graphic_pane_vc_g

0x5c72,	// (0x00005c72) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c72,	// (0x00005c72) list_double_large_graphic_pane_vc_t1

0x5c8e,	// (0x00005c8e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c8e,	// (0x00005c8e) list_double_large_graphic_pane_vc_t2

0x0001,

0xb193,	// (0x0000b193) list_double_large_graphic_pane_vc_t_ParamLimits

0xb193,	// (0x0000b193) list_double_large_graphic_pane_vc_t

0x57f5,	// (0x000057f5) list_double_heading_pane_vc_g1_ParamLimits

0x57f5,	// (0x000057f5) list_double_heading_pane_vc_g1

0x5801,	// (0x00005801) list_double_heading_pane_vc_g2_ParamLimits

0x5801,	// (0x00005801) list_double_heading_pane_vc_g2

0x0001,

0xb198,	// (0x0000b198) list_double_heading_pane_vc_g_ParamLimits

0xb198,	// (0x0000b198) list_double_heading_pane_vc_g

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t1_ParamLimits

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t1

0x5cc4,	// (0x00005cc4) list_double_heading_pane_vc_t2_ParamLimits

0x5cc4,	// (0x00005cc4) list_double_heading_pane_vc_t2

0x0001,

0xb19d,	// (0x0000b19d) list_double_heading_pane_vc_t_ParamLimits

0xb19d,	// (0x0000b19d) list_double_heading_pane_vc_t

0x5cdc,	// (0x00005cdc) list_double_graphic_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00005cdc) list_double_graphic_pane_vc_g1

0x5ce8,	// (0x00005ce8) list_double_graphic_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00005ce8) list_double_graphic_pane_vc_g2

0x2574,	// (0x00002574) list_double_graphic_pane_vc_g3_ParamLimits

0x2574,	// (0x00002574) list_double_graphic_pane_vc_g3

0x0003,

0xb1a2,	// (0x0000b1a2) list_double_graphic_pane_vc_g_ParamLimits

0xb1a2,	// (0x0000b1a2) list_double_graphic_pane_vc_g

0x5d05,	// (0x00005d05) list_double_graphic_pane_vc_t1_ParamLimits

0x5d05,	// (0x00005d05) list_double_graphic_pane_vc_t1

0x5d2f,	// (0x00005d2f) list_double_graphic_pane_vc_t2_ParamLimits

0x5d2f,	// (0x00005d2f) list_double_graphic_pane_vc_t2

0x0001,

0xb1ab,	// (0x0000b1ab) list_double_graphic_pane_vc_t_ParamLimits

0xb1ab,	// (0x0000b1ab) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb65a,	// (0x0000b65a) aid_size_cell_touch_ParamLimits

0xb65a,	// (0x0000b65a) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb80a,	// (0x0000b80a) touch_pane_ParamLimits

0xb80a,	// (0x0000b80a) touch_pane

0x12dc,	// (0x000012dc) button_value_adjust_pane_cp2

0x12e4,	// (0x000012e4) button_value_adjust_pane_cp4

0x1306,	// (0x00001306) form_field_data_pane_cp2

0xbf82,	// (0x0000bf82) form_field_data_wide_pane_cp2

0x1b42,	// (0x00001b42) bg_scroll_pane_ParamLimits

0x1b61,	// (0x00001b61) scroll_handle_pane_ParamLimits

0x1b75,	// (0x00001b75) scroll_sc2_down_pane_ParamLimits

0x1b75,	// (0x00001b75) scroll_sc2_down_pane

0x1b9c,	// (0x00001b9c) scroll_sc2_up_pane_ParamLimits

0x1b9c,	// (0x00001b9c) scroll_sc2_up_pane

0xd7d2,	// (0x0000d7d2) grid_wheel_folder_pane_g1_ParamLimits

0xd7d2,	// (0x0000d7d2) grid_wheel_folder_pane_g1

0x2283,	// (0x00002283) clock_nsta_pane_cp2_ParamLimits

0x2283,	// (0x00002283) clock_nsta_pane_cp2

0xc345,	// (0x0000c345) listscroll_midp_pane_ParamLimits

0xc351,	// (0x0000c351) midp_canvas_pane

0x2b34,	// (0x00002b34) nsta_clock_indic_pane

0x2b92,	// (0x00002b92) listscroll_form_pane_vc

0x2bb6,	// (0x00002bb6) listscroll_set_pane_vc_ParamLimits

0x2bb6,	// (0x00002bb6) listscroll_set_pane_vc

0xce0d,	// (0x0000ce0d) clock_nsta_pane

0xce37,	// (0x0000ce37) indicator_nsta_pane

0x3609,	// (0x00003609) bg_popup_sub_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) find_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) find_pane_cp2

0x3633,	// (0x00003633) grid_toobar_pane_ParamLimits

0x387e,	// (0x0000387e) list_form_gen_pane_vc_ParamLimits

0x387e,	// (0x0000387e) list_form_gen_pane_vc

0x3894,	// (0x00003894) scroll_pane_cp8_vc_ParamLimits

0x3894,	// (0x00003894) scroll_pane_cp8_vc

0x39ad,	// (0x000039ad) data_form_wide_pane_vc_ParamLimits

0x39ad,	// (0x000039ad) data_form_wide_pane_vc

0x39b9,	// (0x000039b9) form_field_data_wide_pane_vc_g1

0x39c1,	// (0x000039c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x39c1,	// (0x000039c1) form_field_data_wide_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp6_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp6_vc

0x3d44,	// (0x00003d44) list_midp_pane_ParamLimits

0x539c,	// (0x0000539c) scroll_pane_cp16_ParamLimits

0x539c,	// (0x0000539c) scroll_pane_cp16

0x3d92,	// (0x00003d92) button_value_adjust_pane_ParamLimits

0x3d92,	// (0x00003d92) button_value_adjust_pane

0xd3dd,	// (0x0000d3dd) button_value_adjust_pane_cp6_ParamLimits

0xd3dd,	// (0x0000d3dd) button_value_adjust_pane_cp6

0xd4f7,	// (0x0000d4f7) settings_code_pane_cp_ParamLimits

0xd4f7,	// (0x0000d4f7) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xae3a,	// (0x0000ae3a) cell_touch_pane_g

0xd6c0,	// (0x0000d6c0) cell_touch_pane_cp_ParamLimits

0xd6c0,	// (0x0000d6c0) cell_touch_pane_cp

0xd6dc,	// (0x0000d6dc) cell_touch_pane_ParamLimits

0xd6dc,	// (0x0000d6dc) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5847,	// (0x00005847) list_set_graphic_pane_vc_g1_ParamLimits

0x5847,	// (0x00005847) list_set_graphic_pane_vc_g1

0x5853,	// (0x00005853) list_set_graphic_pane_vc_g2_ParamLimits

0x5853,	// (0x00005853) list_set_graphic_pane_vc_g2

0x0001,

0xb12f,	// (0x0000b12f) list_set_graphic_pane_vc_g_ParamLimits

0xb12f,	// (0x0000b12f) list_set_graphic_pane_vc_g

0x585f,	// (0x0000585f) text_primary_small_cp13_vc_ParamLimits

0x585f,	// (0x0000585f) text_primary_small_cp13_vc

0x5877,	// (0x00005877) list_set_graphic_pane_vc_ParamLimits

0x5877,	// (0x00005877) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5889,	// (0x00005889) set_text_pane_vc_t1_ParamLimits

0x5889,	// (0x00005889) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x58a5,	// (0x000058a5) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x58af,	// (0x000058af) setting_slider_graphic_pane_vc_t1

0x58bf,	// (0x000058bf) setting_slider_graphic_pane_vc_t2

0x0001,

0xb134,	// (0x0000b134) setting_slider_graphic_pane_vc_t

0x58cf,	// (0x000058cf) slider_set_pane_cp_vc

0x58d7,	// (0x000058d7) slider_set_pane_vc_g1

0x58e0,	// (0x000058e0) slider_set_pane_vc_g2

0x0006,

0xb139,	// (0x0000b139) slider_set_pane_vc_g

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1_copy1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2_copy1

0x590c,	// (0x0000590c) set_opt_bg_pane_g3_copy1

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4_copy1

0x1505,	// (0x00001505) set_opt_bg_pane_g5_copy1

0x150d,	// (0x0000150d) set_opt_bg_pane_g6_copy1

0x5916,	// (0x00005916) set_opt_bg_pane_g7_copy1

0x591e,	// (0x0000591e) set_opt_bg_pane_g8_copy1

0x5928,	// (0x00005928) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5932,	// (0x00005932) setting_slider_pane_vc_t1

0x5941,	// (0x00005941) setting_slider_pane_vc_t2

0x5951,	// (0x00005951) setting_slider_pane_vc_t3

0x0002,

0xb148,	// (0x0000b148) setting_slider_pane_vc_t

0x5961,	// (0x00005961) slider_set_pane_vc

0x45d3,	// (0x000045d3) volume_set_pane_vc_g1

0x45dc,	// (0x000045dc) volume_set_pane_vc_g2

0x45e5,	// (0x000045e5) volume_set_pane_vc_g3

0x45ee,	// (0x000045ee) volume_set_pane_vc_g4

0x45f7,	// (0x000045f7) volume_set_pane_vc_g5

0x4600,	// (0x00004600) volume_set_pane_vc_g6

0x4609,	// (0x00004609) volume_set_pane_vc_g7

0x4612,	// (0x00004612) volume_set_pane_vc_g8

0x461b,	// (0x0000461b) volume_set_pane_vc_g9

0x4624,	// (0x00004624) volume_set_pane_vc_g10

0x0009,

0xafe6,	// (0x0000afe6) volume_set_pane_vc_g

0x5969,	// (0x00005969) volume_set_pane_vc

0x5971,	// (0x00005971) button_value_adjust_pane_cp1_vc

0x597b,	// (0x0000597b) list_highlight_pane_cp2_vc

0x5984,	// (0x00005984) list_set_pane_vc_ParamLimits

0x5984,	// (0x00005984) list_set_pane_vc

0x59e2,	// (0x000059e2) main_pane_set_vc_t1_ParamLimits

0x59e2,	// (0x000059e2) main_pane_set_vc_t1

0x59f7,	// (0x000059f7) main_pane_set_vc_t2_ParamLimits

0x59f7,	// (0x000059f7) main_pane_set_vc_t2

0x5a09,	// (0x00005a09) main_pane_set_vc_t3_ParamLimits

0x5a09,	// (0x00005a09) main_pane_set_vc_t3

0x5a1d,	// (0x00005a1d) main_pane_set_vc_t4_ParamLimits

0x5a1d,	// (0x00005a1d) main_pane_set_vc_t4

0x0003,

0xb14f,	// (0x0000b14f) main_pane_set_vc_t_ParamLimits

0xb14f,	// (0x0000b14f) main_pane_set_vc_t

0x5a31,	// (0x00005a31) setting_code_pane_vc_ParamLimits

0x5a31,	// (0x00005a31) setting_code_pane_vc

0x5a42,	// (0x00005a42) setting_slider_graphic_pane_vc

0x5a42,	// (0x00005a42) setting_slider_pane_vc

0x5a42,	// (0x00005a42) setting_text_pane_vc

0x5a42,	// (0x00005a42) setting_volume_pane_vc

0x5a4c,	// (0x00005a4c) scroll_pane_cp121_vc

0x12ca,	// (0x000012ca) set_content_pane_vc

0x5d59,	// (0x00005d59) button_value_adjust_pane_g1

0x5d62,	// (0x00005d62) button_value_adjust_pane_g2

0x0001,

0xb1b0,	// (0x0000b1b0) button_value_adjust_pane_g

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t1

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t2

0x0002,

0xb1b5,	// (0x0000b1b5) form_field_slider_wide_pane_vc_t_ParamLimits

0xb1b5,	// (0x0000b1b5) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5dad,	// (0x00005dad) slider_cont_pane_cp1_vc_ParamLimits

0x5dad,	// (0x00005dad) slider_cont_pane_cp1_vc

0x5dbf,	// (0x00005dbf) slider_form_pane_g1_cp2

0x58e0,	// (0x000058e0) slider_form_pane_g2_cp2

0x5dec,	// (0x00005dec) form_field_slider_pane_vc_t3

0x5dfa,	// (0x00005dfa) form_field_slider_pane_vc_t4

0x5e08,	// (0x00005e08) slider_form_pane_vc_ParamLimits

0x5e08,	// (0x00005e08) slider_form_pane_vc

0x5e15,	// (0x00005e15) form_field_slider_pane_vc_t1_ParamLimits

0x5e15,	// (0x00005e15) form_field_slider_pane_vc_t1

0x5d7f,	// (0x00005d7f) form_field_slider_pane_vc_t2_ParamLimits

0x5d7f,	// (0x00005d7f) form_field_slider_pane_vc_t2

0x0001,

0xb1c7,	// (0x0000b1c7) form_field_slider_pane_vc_t_ParamLimits

0xb1c7,	// (0x0000b1c7) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5e31,	// (0x00005e31) slider_cont_pane_vc_ParamLimits

0x5e31,	// (0x00005e31) slider_cont_pane_vc

0x5e45,	// (0x00005e45) list_form_graphic_pane_cp_vc_ParamLimits

0x5e45,	// (0x00005e45) list_form_graphic_pane_cp_vc

0x39b9,	// (0x000039b9) form_field_popup_wide_pane_vc_g1

0x5e5a,	// (0x00005e5a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5e5a,	// (0x00005e5a) form_field_popup_wide_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp8_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp8_vc

0x5e9f,	// (0x00005e9f) list_form_wide_pane_vc_ParamLimits

0x5e9f,	// (0x00005e9f) list_form_wide_pane_vc

0x5eab,	// (0x00005eab) list_form_graphic_pane_vc_g1

0x5eb3,	// (0x00005eb3) list_form_graphic_pane_vc_t1_ParamLimits

0x5eb3,	// (0x00005eb3) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5ecf,	// (0x00005ecf) list_form_graphic_pane_vc_ParamLimits

0x5ecf,	// (0x00005ecf) list_form_graphic_pane_vc

0x39b9,	// (0x000039b9) form_field_popup_pane_vc_g1

0x5ee5,	// (0x00005ee5) form_field_popup_pane_vc_t1_ParamLimits

0x5ee5,	// (0x00005ee5) form_field_popup_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp7_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp7_vc

0x5efc,	// (0x00005efc) list_form_pane_vc_ParamLimits

0x5efc,	// (0x00005efc) list_form_pane_vc

0x5f08,	// (0x00005f08) data_form_pane_vc_t1_ParamLimits

0x5f08,	// (0x00005f08) data_form_pane_vc_t1

0x14e5,	// (0x000014e5) input_focus_pane_vc_g1

0x14ed,	// (0x000014ed) input_focus_pane_vc_g2

0x14f5,	// (0x000014f5) input_focus_pane_vc_g3

0x14fd,	// (0x000014fd) input_focus_pane_vc_g4

0x1505,	// (0x00001505) input_focus_pane_vc_g5

0x150d,	// (0x0000150d) input_focus_pane_vc_g6

0x1515,	// (0x00001515) input_focus_pane_vc_g7

0x151d,	// (0x0000151d) input_focus_pane_vc_g8

0x1525,	// (0x00001525) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xadc3,	// (0x0000adc3) input_focus_pane_vc_g

0x39ad,	// (0x000039ad) data_form_pane_vc_ParamLimits

0x39ad,	// (0x000039ad) data_form_pane_vc

0x39b9,	// (0x000039b9) form_field_data_pane_vc_g1

0x5f23,	// (0x00005f23) form_field_data_pane_vc_t1_ParamLimits

0x5f23,	// (0x00005f23) form_field_data_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_vc

0x5f3d,	// (0x00005f3d) button_value_adjust_pane_cp3_vc

0x5f45,	// (0x00005f45) button_value_adjust_pane_cp5_vc

0x5f4d,	// (0x00005f4d) form_field_data_pane_vc_ParamLimits

0x5f4d,	// (0x00005f4d) form_field_data_pane_vc

0x5f64,	// (0x00005f64) form_field_data_pane_vc_cp2

0x5f6c,	// (0x00005f6c) form_field_data_wide_pane_vc_ParamLimits

0x5f6c,	// (0x00005f6c) form_field_data_wide_pane_vc

0x5f82,	// (0x00005f82) form_field_data_wide_pane_vc_cp2

0x5f8a,	// (0x00005f8a) form_field_popup_pane_vc_ParamLimits

0x5f8a,	// (0x00005f8a) form_field_popup_pane_vc

0x5fa1,	// (0x00005fa1) form_field_popup_wide_pane_vc_ParamLimits

0x5fa1,	// (0x00005fa1) form_field_popup_wide_pane_vc

0x5fb7,	// (0x00005fb7) form_field_slider_pane_vc_ParamLimits

0x5fb7,	// (0x00005fb7) form_field_slider_pane_vc

0x5fca,	// (0x00005fca) form_field_slider_wide_pane_vc_ParamLimits

0x5fca,	// (0x00005fca) form_field_slider_wide_pane_vc

0xd6fa,	// (0x0000d6fa) grid_touch_1_pane_ParamLimits

0xd6fa,	// (0x0000d6fa) grid_touch_1_pane

0xd70e,	// (0x0000d70e) grid_touch_2_pane_ParamLimits

0xd70e,	// (0x0000d70e) grid_touch_2_pane

0x6098,	// (0x00006098) touch_pane_g1_ParamLimits

0x6098,	// (0x00006098) touch_pane_g1

0x6001,	// (0x00006001) cell_app_pane_cp_wide_ParamLimits

0x6001,	// (0x00006001) cell_app_pane_cp_wide

0x6012,	// (0x00006012) grid_popup_fast_wide_pane_ParamLimits

0x6012,	// (0x00006012) grid_popup_fast_wide_pane

0x6026,	// (0x00006026) scroll_pane_cp19_ParamLimits

0x6026,	// (0x00006026) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x603a,	// (0x0000603a) listscroll_popup_fast_wide_pane

0x16f9,	// (0x000016f9) grid_indicator_nsta_pane

0x6042,	// (0x00006042) clock_nsta_pane_g1

0x604b,	// (0x0000604b) clock_nsta_pane_t1

0xd738,	// (0x0000d738) cell_indicator_nsta_pane_ParamLimits

0xd738,	// (0x0000d738) cell_indicator_nsta_pane

0x6098,	// (0x00006098) cell_indicator_nsta_pane_g1

0xd74f,	// (0x0000d74f) cell_indicator_nsta_pane_g2

0x0001,

0xf562,	// (0x0000f562) cell_indicator_nsta_pane_g

0x60b3,	// (0x000060b3) clock_nsta_pane_cp

0x60bc,	// (0x000060bc) indicator_nsta_pane_cp

0x60c4,	// (0x000060c4) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c91,	// (0x00001c91) scroll_pane_cp29

0x21b0,	// (0x000021b0) indicator_nsta_pane_cp2_ParamLimits

0x21b0,	// (0x000021b0) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3c05,	// (0x00003c05) form_midp_field_text_pane_ParamLimits

0x3d50,	// (0x00003d50) scroll_bar_cp050_ParamLimits

0x6114,	// (0x00006114) cell_indicator_pane_ParamLimits

0x6114,	// (0x00006114) cell_indicator_pane

0x612b,	// (0x0000612b) cell_indicator_pane_g1

0xd75c,	// (0x0000d75c) grid_wheel_folder_pane_ParamLimits

0xd75c,	// (0x0000d75c) grid_wheel_folder_pane

0xd76a,	// (0x0000d76a) list_wheel_apps_pane_ParamLimits

0xd76a,	// (0x0000d76a) list_wheel_apps_pane

0xd778,	// (0x0000d778) main_apps_wheel_pane_g1_ParamLimits

0xd778,	// (0x0000d778) main_apps_wheel_pane_g1

0xd784,	// (0x0000d784) main_apps_wheel_pane_g2_ParamLimits

0xd784,	// (0x0000d784) main_apps_wheel_pane_g2

0x0001,

0xf567,	// (0x0000f567) main_apps_wheel_pane_g_ParamLimits

0xf567,	// (0x0000f567) main_apps_wheel_pane_g

0xd792,	// (0x0000d792) main_apps_wheel_pane_t1_ParamLimits

0xd792,	// (0x0000d792) main_apps_wheel_pane_t1

0xd7a6,	// (0x0000d7a6) list_wheel_apps_pane_g1

0xd7ae,	// (0x0000d7ae) list_wheel_apps_pane_g2

0xd7b6,	// (0x0000d7b6) list_wheel_apps_pane_g3

0xd7be,	// (0x0000d7be) list_wheel_apps_pane_g4

0xd7c8,	// (0x0000d7c8) list_wheel_apps_pane_g5

0x0004,

0xf56c,	// (0x0000f56c) list_wheel_apps_pane_g

0x24bb,	// (0x000024bb) navi_icon_text_pane

0xcd01,	// (0x0000cd01) aid_fill_nsta

0x61f0,	// (0x000061f0) navi_icon_text_pane_g1

0x61fc,	// (0x000061fc) navi_icon_text_pane_t1

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_ParamLimits

0x234e,	// (0x0000234e) list_set_graphic_pane_t1

0x44b3,	// (0x000044b3) popup_midp_note_alarm_window_t6_ParamLimits

0x44b3,	// (0x000044b3) popup_midp_note_alarm_window_t6

0x44c5,	// (0x000044c5) popup_midp_note_alarm_window_t7_ParamLimits

0x44c5,	// (0x000044c5) popup_midp_note_alarm_window_t7

0x44d7,	// (0x000044d7) popup_midp_note_alarm_window_t8_ParamLimits

0x44d7,	// (0x000044d7) popup_midp_note_alarm_window_t8

0x44e9,	// (0x000044e9) popup_midp_note_alarm_window_t9_ParamLimits

0x44e9,	// (0x000044e9) popup_midp_note_alarm_window_t9

0x44fb,	// (0x000044fb) popup_midp_note_alarm_window_t10_ParamLimits

0x44fb,	// (0x000044fb) popup_midp_note_alarm_window_t10

0x450d,	// (0x0000450d) popup_midp_note_alarm_window_t11_ParamLimits

0x450d,	// (0x0000450d) popup_midp_note_alarm_window_t11

0x451f,	// (0x0000451f) scroll_pane_cp17_ParamLimits

0x451f,	// (0x0000451f) scroll_pane_cp17

0x45d3,	// (0x000045d3) volume_small_pane_cp_g1

0x620e,	// (0x0000620e) volume_small_pane_cp_g2

0x6217,	// (0x00006217) volume_small_pane_cp_g3

0x6220,	// (0x00006220) volume_small_pane_cp_g4

0x6229,	// (0x00006229) volume_small_pane_cp_g5

0x6232,	// (0x00006232) volume_small_pane_cp_g6

0x623b,	// (0x0000623b) volume_small_pane_cp_g7

0x6244,	// (0x00006244) volume_small_pane_cp_g8

0x624d,	// (0x0000624d) volume_small_pane_cp_g9

0x6256,	// (0x00006256) volume_small_pane_cp_g10

0x2718,	// (0x00002718) midp_ticker_pane_g1_ParamLimits

0x2724,	// (0x00002724) midp_ticker_pane_g2_ParamLimits

0xae8f,	// (0x0000ae8f) midp_ticker_pane_g_ParamLimits

0x2730,	// (0x00002730) midp_ticker_pane_t1_ParamLimits

0xcd25,	// (0x0000cd25) aid_fill_nsta_2

0x3d3c,	// (0x00003d3c) list_form2_midp_pane

0x50f4,	// (0x000050f4) midp_editing_number_pane_ParamLimits

0x5103,	// (0x00005103) midp_ticker_pane_ParamLimits

0x625f,	// (0x0000625f) form2_midp_field_pane

0x6283,	// (0x00006283) scroll_pane_cp51

0x62a3,	// (0x000062a3) form2_midp_button_pane_ParamLimits

0x62a3,	// (0x000062a3) form2_midp_button_pane

0x62b5,	// (0x000062b5) form2_midp_content_pane_ParamLimits

0x62b5,	// (0x000062b5) form2_midp_content_pane

0x62cf,	// (0x000062cf) form2_midp_field_choice_group_pane

0x62d7,	// (0x000062d7) form2_midp_field_pane_g1

0x62df,	// (0x000062df) form2_midp_field_pane_g2

0x62e7,	// (0x000062e7) form2_midp_field_pane_g3

0x62ef,	// (0x000062ef) form2_midp_field_pane_g4

0x0003,

0xb21e,	// (0x0000b21e) form2_midp_field_pane_g

0x62f7,	// (0x000062f7) form2_midp_gauge_slider_pane

0x62ff,	// (0x000062ff) form2_midp_gauge_wait_pane

0x6307,	// (0x00006307) form2_midp_image_pane_ParamLimits

0x6307,	// (0x00006307) form2_midp_image_pane

0x6322,	// (0x00006322) form2_midp_label_pane_ParamLimits

0x6322,	// (0x00006322) form2_midp_label_pane

0xd7fb,	// (0x0000d7fb) form2_midp_label_pane_cp_ParamLimits

0xd7fb,	// (0x0000d7fb) form2_midp_label_pane_cp

0x635c,	// (0x0000635c) form2_midp_string_pane_ParamLimits

0x635c,	// (0x0000635c) form2_midp_string_pane

0xd81a,	// (0x0000d81a) form2_midp_text_pane_ParamLimits

0xd81a,	// (0x0000d81a) form2_midp_text_pane

0x638b,	// (0x0000638b) form2_midp_time_pane

0x639b,	// (0x0000639b) input_focus_pane_cp51_ParamLimits

0x639b,	// (0x0000639b) input_focus_pane_cp51

0x63b3,	// (0x000063b3) form2_midp_label_pane_t1_ParamLimits

0x63b3,	// (0x000063b3) form2_midp_label_pane_t1

0xd833,	// (0x0000d833) form2_mdip_text_pane_t1_ParamLimits

0xd833,	// (0x0000d833) form2_mdip_text_pane_t1

0x6413,	// (0x00006413) form2_midp_time_pane_t1

0x642e,	// (0x0000642e) form2_midp_gauge_slider_pane_t1

0xd84e,	// (0x0000d84e) form2_midp_gauge_slider_pane_t2

0xd860,	// (0x0000d860) form2_midp_gauge_slider_pane_t3

0x0002,

0xf57c,	// (0x0000f57c) form2_midp_gauge_slider_pane_t

0x6464,	// (0x00006464) form2_midp_slider_pane

0x6470,	// (0x00006470) form2_midp_gauge_wait_pane_t1

0x647e,	// (0x0000647e) form2_midp_wait_pane_ParamLimits

0x647e,	// (0x0000647e) form2_midp_wait_pane

0xd872,	// (0x0000d872) list_single_2graphic_pane_cp4_ParamLimits

0xd872,	// (0x0000d872) list_single_2graphic_pane_cp4

0xd1b3,	// (0x0000d1b3) list_single_midp_graphic_pane_cp_ParamLimits

0xd1b3,	// (0x0000d1b3) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x64cd,	// (0x000064cd) list_single_2graphic_pane_g1_cp4

0x64d5,	// (0x000064d5) list_single_2graphic_pane_g2_cp4

0x64dd,	// (0x000064dd) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64ec,	// (0x000064ec) list_single_midp_graphic_pane_g4_cp

0x64fb,	// (0x000064fb) list_single_midp_graphic_pane_t1_cp

0xd886,	// (0x0000d886) form2_mdip_string_pane_t1_ParamLimits

0xd886,	// (0x0000d886) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1080,	// (0x00001080) list_double_large_graphic_pane_g5_ParamLimits

0x1080,	// (0x00001080) list_double_large_graphic_pane_g5

0xc345,	// (0x0000c345) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xca51,	// (0x0000ca51) popup_preview_window_ParamLimits

0xca51,	// (0x0000ca51) popup_preview_window

0x3126,	// (0x00003126) popup_touch_info_window_ParamLimits

0x3126,	// (0x00003126) popup_touch_info_window

0x3144,	// (0x00003144) popup_touch_menu_window_ParamLimits

0x3144,	// (0x00003144) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6609,	// (0x00006609) list_touch_menu_pane

0x6611,	// (0x00006611) list_single_touch_menu_pane_ParamLimits

0x6611,	// (0x00006611) list_single_touch_menu_pane

0x6627,	// (0x00006627) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x6635,	// (0x00006635) heading_sub_pane

0x663d,	// (0x0000663d) list_touch_info_pane_ParamLimits

0x663d,	// (0x0000663d) list_touch_info_pane

0x664c,	// (0x0000664c) list_single_touch_info_pane_ParamLimits

0x664c,	// (0x0000664c) list_single_touch_info_pane

0x665e,	// (0x0000665e) list_single_touch_info_pane_t1

0x666c,	// (0x0000666c) list_single_touch_info_pane_t2

0x0001,

0xb235,	// (0x0000b235) list_single_touch_info_pane_t

0x263b,	// (0x0000263b) bg_popup_heading_pane_cp

0x667a,	// (0x0000667a) heading_sub_pane_t1

0x38bf,	// (0x000038bf) bg_popup_preview_window_pane_cp_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_preview_window_pane_cp

0x6635,	// (0x00006635) heading_preview_pane

0x663d,	// (0x0000663d) list_preview_pane_ParamLimits

0x663d,	// (0x0000663d) list_preview_pane

0x6688,	// (0x00006688) popup_preview_window_g1

0x664c,	// (0x0000664c) list_single_preview_pane_ParamLimits

0x664c,	// (0x0000664c) list_single_preview_pane

0x6690,	// (0x00006690) list_single_preview_pane_g1

0x6698,	// (0x00006698) list_single_preview_pane_t1

0x665e,	// (0x0000665e) list_single_preview_pane_t2

0x0001,

0xb23a,	// (0x0000b23a) list_single_preview_pane_t

0x66a6,	// (0x000066a6) bg_popup_heading_pane_cp2_ParamLimits

0x66a6,	// (0x000066a6) bg_popup_heading_pane_cp2

0x66bc,	// (0x000066bc) heading_preview_pane_g1

0x66c4,	// (0x000066c4) heading_preview_pane_t1_ParamLimits

0x66c4,	// (0x000066c4) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0dba,	// (0x00000dba) scroll_pane_ParamLimits

0x1b8a,	// (0x00001b8a) scroll_sc2_left_pane

0x1b93,	// (0x00001b93) scroll_sc2_right_pane

0x1bb2,	// (0x00001bb2) scroll_bg_pane_g1_ParamLimits

0x1bc7,	// (0x00001bc7) scroll_bg_pane_g2_ParamLimits

0x1bdf,	// (0x00001bdf) scroll_bg_pane_g3_ParamLimits

0xae1a,	// (0x0000ae1a) scroll_bg_pane_g_ParamLimits

0x1bb2,	// (0x00001bb2) scroll_handle_pane_g1_ParamLimits

0x1c01,	// (0x00001c01) scroll_handle_pane_g2_ParamLimits

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g3_ParamLimits

0xae21,	// (0x0000ae21) scroll_handle_pane_g_ParamLimits

0x2bec,	// (0x00002bec) popup_choice_list_window_ParamLimits

0x2bec,	// (0x00002bec) popup_choice_list_window

0x3615,	// (0x00003615) choice_list_pane

0x36dd,	// (0x000036dd) cell_toolbar_pane_t1

0x3705,	// (0x00003705) toolbar_button_pane_ParamLimits

0x4b3d,	// (0x00004b3d) ai_gene_pane_1_t2_ParamLimits

0x4b3d,	// (0x00004b3d) ai_gene_pane_1_t2

0x0001,

0xb042,	// (0x0000b042) ai_gene_pane_1_t_ParamLimits

0xb042,	// (0x0000b042) ai_gene_pane_1_t

0x66e1,	// (0x000066e1) scroll_sc2_left_pane_g1

0x66e1,	// (0x000066e1) scroll_sc2_right_pane_g1

0x2b86,	// (0x00002b86) bg_popup_sub_pane_cp10

0x66eb,	// (0x000066eb) list_choice_list_pane

0x6704,	// (0x00006704) list_single_choice_list_pane_ParamLimits

0x6704,	// (0x00006704) list_single_choice_list_pane

0x6717,	// (0x00006717) list_single_choice_list_pane_g1

0x16ca,	// (0x000016ca) list_single_choice_list_pane_t1_ParamLimits

0x16ca,	// (0x000016ca) list_single_choice_list_pane_t1

0x671f,	// (0x0000671f) choice_list_pane_g1

0x6727,	// (0x00006727) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18f0,	// (0x000018f0) title_pane_stacon_g2_ParamLimits

0x18f0,	// (0x000018f0) title_pane_stacon_g2

0x0002,

0xae00,	// (0x0000ae00) title_pane_stacon_g_ParamLimits

0xae00,	// (0x0000ae00) title_pane_stacon_g

0x263b,	// (0x0000263b) cursor_press_pane

0xc6fe,	// (0x0000c6fe) popup_fep_hwr_window_ParamLimits

0xc6fe,	// (0x0000c6fe) popup_fep_hwr_window

0x2d12,	// (0x00002d12) popup_fep_vkb_window_ParamLimits

0x2d12,	// (0x00002d12) popup_fep_vkb_window

0x6735,	// (0x00006735) cursor_press_pane_g1

0x0002,

0xf590,	// (0x0000f590) fep_vkb_side_pane_g_ParamLimits

0x6776,	// (0x00006776) fep_hwr_candidate_pane_ParamLimits

0x6776,	// (0x00006776) fep_hwr_candidate_pane

0x67a0,	// (0x000067a0) fep_hwr_side_pane_ParamLimits

0x67a0,	// (0x000067a0) fep_hwr_side_pane

0x67c0,	// (0x000067c0) fep_hwr_top_pane_ParamLimits

0x67c0,	// (0x000067c0) fep_hwr_top_pane

0x67d8,	// (0x000067d8) fep_hwr_write_pane_ParamLimits

0x67d8,	// (0x000067d8) fep_hwr_write_pane

0xf590,	// (0x0000f590) fep_vkb_side_pane_g

0x6812,	// (0x00006812) fep_hwr_top_pane_g1

0x6824,	// (0x00006824) fep_hwr_top_pane_g2

0x6836,	// (0x00006836) fep_hwr_top_pane_g3

0x0002,

0xb23f,	// (0x0000b23f) fep_hwr_top_pane_g

0x684b,	// (0x0000684b) fep_hwr_top_text_pane

0x1d81,	// (0x00001d81) fep_hwr_top_text_pane_g1

0x6923,	// (0x00006923) fep_hwr_top_text_pane_t1

0x6973,	// (0x00006973) fep_hwr_candidate_pane_g1

0x6bec,	// (0x00006bec) fep_vkb_keypad_pane_g3_ParamLimits

0x6bec,	// (0x00006bec) fep_vkb_keypad_pane_g3

0x6c14,	// (0x00006c14) fep_vkb_keypad_pane_g4_ParamLimits

0x6c14,	// (0x00006c14) fep_vkb_keypad_pane_g4

0x6c83,	// (0x00006c83) fep_vkb_bottom_pane_g2_ParamLimits

0x6c83,	// (0x00006c83) fep_vkb_bottom_pane_g2

0x0001,

0xb26a,	// (0x0000b26a) fep_vkb_bottom_pane_g_ParamLimits

0xb26a,	// (0x0000b26a) fep_vkb_bottom_pane_g

0x66e1,	// (0x000066e1) cell_vkb_side_pane_g2

0x0001,

0xb274,	// (0x0000b274) cell_vkb_side_pane_g

0x6d0e,	// (0x00006d0e) cell_vkb_side_pane_t1

0x6d1c,	// (0x00006d1c) cell_vkb_side_pane_t1_copy1

0x66e1,	// (0x000066e1) bg_fep_vkb_candidate_pane_g2

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane_ParamLimits

0x69a7,	// (0x000069a7) aid_size_cell_vkb_ParamLimits

0x69a7,	// (0x000069a7) aid_size_cell_vkb

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane

0x6e7c,	// (0x00006e7c) bg_popup_fep_shadow_pane_g1

0xd955,	// (0x0000d955) fep_vkb_bottom_pane_ParamLimits

0xd955,	// (0x0000d955) fep_vkb_bottom_pane

0x6a6b,	// (0x00006a6b) fep_vkb_candidate_pane_ParamLimits

0x6a6b,	// (0x00006a6b) fep_vkb_candidate_pane

0xd97a,	// (0x0000d97a) fep_vkb_keypad_pane_ParamLimits

0xd97a,	// (0x0000d97a) fep_vkb_keypad_pane

0xd9b6,	// (0x0000d9b6) fep_vkb_side_pane_ParamLimits

0xd9b6,	// (0x0000d9b6) fep_vkb_side_pane

0xd9f2,	// (0x0000d9f2) fep_vkb_top_pane_ParamLimits

0xd9f2,	// (0x0000d9f2) fep_vkb_top_pane

0x6b45,	// (0x00006b45) fep_vkb_top_pane_g1_ParamLimits

0x6b45,	// (0x00006b45) fep_vkb_top_pane_g1

0x6b54,	// (0x00006b54) fep_vkb_top_pane_g2_ParamLimits

0x6b54,	// (0x00006b54) fep_vkb_top_pane_g2

0x6b63,	// (0x00006b63) fep_vkb_top_pane_g3_ParamLimits

0x6b63,	// (0x00006b63) fep_vkb_top_pane_g3

0x0003,

0xb25a,	// (0x0000b25a) fep_vkb_top_pane_g_ParamLimits

0xb25a,	// (0x0000b25a) fep_vkb_top_pane_g

0x6b81,	// (0x00006b81) fep_vkb_top_text_pane_ParamLimits

0x6b81,	// (0x00006b81) fep_vkb_top_text_pane

0xda2e,	// (0x0000da2e) fep_vkb_side_pane_g1_ParamLimits

0xda2e,	// (0x0000da2e) fep_vkb_side_pane_g1

0x6bdb,	// (0x00006bdb) grid_vkb_side_pane_ParamLimits

0x6bdb,	// (0x00006bdb) grid_vkb_side_pane

0x6e84,	// (0x00006e84) bg_popup_fep_shadow_pane_g2

0x6e8d,	// (0x00006e8d) bg_popup_fep_shadow_pane_g3

0x6e95,	// (0x00006e95) bg_popup_fep_shadow_pane_g4

0x6e9e,	// (0x00006e9e) bg_popup_fep_shadow_pane_g5

0x6ea8,	// (0x00006ea8) bg_popup_fep_shadow_pane_g6

0x6eb0,	// (0x00006eb0) bg_popup_fep_shadow_pane_g7

0x1505,	// (0x00001505) bg_popup_fep_shadow_pane_g8

0x6c32,	// (0x00006c32) grid_vkb_keypad_number_pane_ParamLimits

0x6c32,	// (0x00006c32) grid_vkb_keypad_number_pane

0x6c42,	// (0x00006c42) grid_vkb_keypad_pane_ParamLimits

0x6c42,	// (0x00006c42) grid_vkb_keypad_pane

0x6c68,	// (0x00006c68) fep_vkb_bottom_pane_g1_ParamLimits

0x6c68,	// (0x00006c68) fep_vkb_bottom_pane_g1

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_left_pane

0x6ca6,	// (0x00006ca6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6ca6,	// (0x00006ca6) grid_vkb_keypad_bottom_right_pane

0x6cbb,	// (0x00006cbb) fep_vkb_top_text_pane_g1

0xda75,	// (0x0000da75) fep_vkb_top_text_pane_t1

0xda87,	// (0x0000da87) cell_vkb_side_pane_ParamLimits

0xda87,	// (0x0000da87) cell_vkb_side_pane

0x66e1,	// (0x000066e1) cell_vkb_side_pane_g1

0x6d2a,	// (0x00006d2a) cell_vkb_keypad_pane_ParamLimits

0x6d2a,	// (0x00006d2a) cell_vkb_keypad_pane

0x6d9f,	// (0x00006d9f) cell_vkb_keypad_pane_g1

0x0008,

0xb287,	// (0x0000b287) bg_popup_fep_shadow_pane_g

0x66e1,	// (0x000066e1) cell_hwr_side_pane_g1

0x66e1,	// (0x000066e1) cell_hwr_side_pane_g2

0x6da9,	// (0x00006da9) cell_vkb_keypad_pane_t1

0xda9d,	// (0x0000da9d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xda9d,	// (0x0000da9d) cell_vkb_keypad_bottom_left_pane

0xdab2,	// (0x0000dab2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdab2,	// (0x0000dab2) cell_vkb_keypad_bottom_right_pane

0x66e1,	// (0x000066e1) cell_vkb_keypad_bottom_left_pane_g1

0x66e1,	// (0x000066e1) cell_vkb_keypad_bottom_right_pane_g1

0x6e0d,	// (0x00006e0d) cell_vkb_keypad_number_pane_ParamLimits

0x6e0d,	// (0x00006e0d) cell_vkb_keypad_number_pane

0x6e2c,	// (0x00006e2c) cell_vkb_keypad_number_pane_g1

0x6e36,	// (0x00006e36) cell_vkb_keypad_number_pane_g2

0x6e3f,	// (0x00006e3f) cell_vkb_keypad_number_pane_g3

0x0002,

0xb279,	// (0x0000b279) cell_vkb_keypad_number_pane_g

0x6da9,	// (0x00006da9) cell_vkb_keypad_number_pane_t1

0x6e63,	// (0x00006e63) fep_vkb_candidate_pane_g1

0x0001,

0xb274,	// (0x0000b274) cell_hwr_side_pane_g

0x6ec2,	// (0x00006ec2) cell_hwr_side_pane_t1

0x6ed0,	// (0x00006ed0) cell_hwr_side_pane_t1_copy1

0x6b73,	// (0x00006b73) cell_hwr_candidate_pane_g1

0x6f20,	// (0x00006f20) cell_hwr_candidate_pane_t1

0x66e1,	// (0x000066e1) cell_vkb_candidate_pane_g2

0x6f74,	// (0x00006f74) cell_vkb_candidate_pane_t1

0x673d,	// (0x0000673d) bg_popup_fep_shadow_pane_ParamLimits

0x673d,	// (0x0000673d) bg_popup_fep_shadow_pane

0x67f2,	// (0x000067f2) bg_fep_hwr_top_pane_g4

0x6860,	// (0x00006860) bg_hwr_side_pane_g1_ParamLimits

0x6860,	// (0x00006860) bg_hwr_side_pane_g1

0xd90e,	// (0x0000d90e) cell_hwr_side_pane_ParamLimits

0xd90e,	// (0x0000d90e) cell_hwr_side_pane

0x68ce,	// (0x000068ce) fep_hwr_write_pane_g1_ParamLimits

0x68ce,	// (0x000068ce) fep_hwr_write_pane_g1

0x68db,	// (0x000068db) fep_hwr_write_pane_g2_ParamLimits

0x68db,	// (0x000068db) fep_hwr_write_pane_g2

0x68e8,	// (0x000068e8) fep_hwr_write_pane_g3_ParamLimits

0x68e8,	// (0x000068e8) fep_hwr_write_pane_g3

0xd92e,	// (0x0000d92e) fep_hwr_write_pane_g4_ParamLimits

0xd92e,	// (0x0000d92e) fep_hwr_write_pane_g4

0x0005,

0xf583,	// (0x0000f583) fep_hwr_write_pane_g_ParamLimits

0xf583,	// (0x0000f583) fep_hwr_write_pane_g

0x67f2,	// (0x000067f2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67f2,	// (0x000067f2) bg_fep_hwr_candidate_pane_g2

0x6931,	// (0x00006931) cell_hwr_candidate_pane_ParamLimits

0x6931,	// (0x00006931) cell_hwr_candidate_pane

0x6973,	// (0x00006973) fep_hwr_candidate_pane_g1_ParamLimits

0x69d5,	// (0x000069d5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x69d5,	// (0x000069d5) bg_popup_fep_shadow_pane_cp2

0x6b73,	// (0x00006b73) fep_vkb_top_pane_g4_ParamLimits

0x6b73,	// (0x00006b73) fep_vkb_top_pane_g4

0x6bb9,	// (0x00006bb9) fep_vkb_side_pane_g2_ParamLimits

0x6bb9,	// (0x00006bb9) fep_vkb_side_pane_g2

0xbeb0,	// (0x0000beb0) list_setting_pane_t4_ParamLimits

0xbeb0,	// (0x0000beb0) list_setting_pane_t4

0xbf2a,	// (0x0000bf2a) list_setting_number_pane_t5_ParamLimits

0xbf2a,	// (0x0000bf2a) list_setting_number_pane_t5

0x1dd7,	// (0x00001dd7) list_double_heading_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_heading_pane_cp2

0x100b,	// (0x0000100b) list_double_heading_pane_g1_cp2_ParamLimits

0x100b,	// (0x0000100b) list_double_heading_pane_g1_cp2

0x13e8,	// (0x000013e8) list_double_heading_pane_g2_cp2_ParamLimits

0x13e8,	// (0x000013e8) list_double_heading_pane_g2_cp2

0x6f82,	// (0x00006f82) list_double_heading_pane_t1_cp2_ParamLimits

0x6f82,	// (0x00006f82) list_double_heading_pane_t1_cp2

0x6f98,	// (0x00006f98) list_double_heading_pane_t2_cp2_ParamLimits

0x6f98,	// (0x00006f98) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6faa,	// (0x00006faa) list_preview_fixed_pane

0x6ff0,	// (0x00006ff0) list_empty_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_empty_pane_fp

0x6ff0,	// (0x00006ff0) list_single_cale_day_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_cale_day_pane_fp

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp

0x6ff0,	// (0x00006ff0) list_single_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_pane_fp

0x7005,	// (0x00007005) list_single_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_single_pane_fp_g1

0x100b,	// (0x0000100b) list_single_pane_fp_g2_ParamLimits

0x100b,	// (0x0000100b) list_single_pane_fp_g2

0x13e8,	// (0x000013e8) list_single_pane_fp_g3_ParamLimits

0x13e8,	// (0x000013e8) list_single_pane_fp_g3

0x7011,	// (0x00007011) list_single_pane_fp_g4_ParamLimits

0x7011,	// (0x00007011) list_single_pane_fp_g4

0x0003,

0xb2a8,	// (0x0000b2a8) list_single_pane_fp_g_ParamLimits

0xb2a8,	// (0x0000b2a8) list_single_pane_fp_g

0x701d,	// (0x0000701d) list_single_pane_fp_t1_ParamLimits

0x701d,	// (0x0000701d) list_single_pane_fp_t1

0x7034,	// (0x00007034) list_single_graphic_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_pane_fp_g5

0x0004,

0xb2b1,	// (0x0000b2b1) list_single_graphic_pane_fp_g_ParamLimits

0xb2b1,	// (0x0000b2b1) list_single_graphic_pane_fp_g

0x7040,	// (0x00007040) list_single_graphic_pane_fp_t1_ParamLimits

0x7040,	// (0x00007040) list_single_graphic_pane_fp_t1

0x7034,	// (0x00007034) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_heading_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_heading_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_heading_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_heading_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb2b1,	// (0x0000b2b1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb2b1,	// (0x0000b2b1) list_single_graphic_heading_pane_fp_g

0x7056,	// (0x00007056) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7056,	// (0x00007056) list_single_graphic_heading_pane_fp_t1

0x706c,	// (0x0000706c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x706c,	// (0x0000706c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb2bc,	// (0x0000b2bc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb2bc,	// (0x0000b2bc) list_single_graphic_heading_pane_fp_t

0x707e,	// (0x0000707e) list_single_cale_day_pane_fp_g1_ParamLimits

0x707e,	// (0x0000707e) list_single_cale_day_pane_fp_g1

0x70b6,	// (0x000070b6) list_single_cale_day_pane_fp_g2_ParamLimits

0x70b6,	// (0x000070b6) list_single_cale_day_pane_fp_g2

0x70c2,	// (0x000070c2) list_single_cale_day_pane_fp_g3_ParamLimits

0x70c2,	// (0x000070c2) list_single_cale_day_pane_fp_g3

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_g4_ParamLimits

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_g4

0x710e,	// (0x0000710e) list_single_cale_day_pane_fp_g5_ParamLimits

0x710e,	// (0x0000710e) list_single_cale_day_pane_fp_g5

0x0004,

0xb2c1,	// (0x0000b2c1) list_single_cale_day_pane_fp_g_ParamLimits

0xb2c1,	// (0x0000b2c1) list_single_cale_day_pane_fp_g

0x7132,	// (0x00007132) list_single_cale_day_pane_fp_t1_ParamLimits

0x7132,	// (0x00007132) list_single_cale_day_pane_fp_t1

0x7158,	// (0x00007158) list_single_cale_day_pane_fp_t2_ParamLimits

0x7158,	// (0x00007158) list_single_cale_day_pane_fp_t2

0x7171,	// (0x00007171) list_single_cale_day_pane_fp_t3_ParamLimits

0x7171,	// (0x00007171) list_single_cale_day_pane_fp_t3

0x0002,

0xb2cc,	// (0x0000b2cc) list_single_cale_day_pane_fp_t_ParamLimits

0xb2cc,	// (0x0000b2cc) list_single_cale_day_pane_fp_t

0x7005,	// (0x00007005) list_empty_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_empty_pane_fp_g1

0x718a,	// (0x0000718a) list_empty_pane_fp_t1

0x7198,	// (0x00007198) list_empty_pane_fp_t2

0x0001,

0xb2d3,	// (0x0000b2d3) list_empty_pane_fp_t

0x7005,	// (0x00007005) list_single_heading_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_single_heading_pane_fp_g1

0x100b,	// (0x0000100b) list_single_heading_pane_fp_g2_ParamLimits

0x100b,	// (0x0000100b) list_single_heading_pane_fp_g2

0x13e8,	// (0x000013e8) list_single_heading_pane_fp_g3_ParamLimits

0x13e8,	// (0x000013e8) list_single_heading_pane_fp_g3

0x0002,

0xb2d8,	// (0x0000b2d8) list_single_heading_pane_fp_g_ParamLimits

0xb2d8,	// (0x0000b2d8) list_single_heading_pane_fp_g

0x71a6,	// (0x000071a6) list_single_heading_pane_fp_t1_ParamLimits

0x71a6,	// (0x000071a6) list_single_heading_pane_fp_t1

0x71b8,	// (0x000071b8) list_single_heading_pane_fp_t2_ParamLimits

0x71b8,	// (0x000071b8) list_single_heading_pane_fp_t2

0x0001,

0xb2df,	// (0x0000b2df) list_single_heading_pane_fp_t_ParamLimits

0xb2df,	// (0x0000b2df) list_single_heading_pane_fp_t

0x1738,	// (0x00001738) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1775,	// (0x00001775) cell_app_pane_cp2_ParamLimits

0x1775,	// (0x00001775) cell_app_pane_cp2

0x675f,	// (0x0000675f) fep_hwr_candidate_drop_down_list_pane

0x698d,	// (0x0000698d) fep_hwr_candidate_pane_g3_ParamLimits

0x698d,	// (0x0000698d) fep_hwr_candidate_pane_g3

0x699a,	// (0x0000699a) fep_hwr_candidate_pane_g4_ParamLimits

0x699a,	// (0x0000699a) fep_hwr_candidate_pane_g4

0x0002,

0xb253,	// (0x0000b253) fep_hwr_candidate_pane_g_ParamLimits

0xb253,	// (0x0000b253) fep_hwr_candidate_pane_g

0x6a5a,	// (0x00006a5a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a5a,	// (0x00006a5a) fep_vkb_candidate_drop_down_list_pane

0x6e6b,	// (0x00006e6b) fep_vkb_candidate_pane_g3

0x6e73,	// (0x00006e73) fep_vkb_candidate_pane_g4

0x0002,

0xb280,	// (0x0000b280) fep_vkb_candidate_pane_g

0x6b73,	// (0x00006b73) cell_hwr_candidate_pane_g1_ParamLimits

0x6ede,	// (0x00006ede) cell_hwr_candidate_pane_g3_ParamLimits

0x6ede,	// (0x00006ede) cell_hwr_candidate_pane_g3

0x6eff,	// (0x00006eff) cell_hwr_candidate_pane_g4_ParamLimits

0x6eff,	// (0x00006eff) cell_hwr_candidate_pane_g4

0x0002,

0xb29a,	// (0x0000b29a) cell_hwr_candidate_pane_g_ParamLimits

0xb29a,	// (0x0000b29a) cell_hwr_candidate_pane_g

0x6f3e,	// (0x00006f3e) cell_vkb_candidate_pane_g3_ParamLimits

0x6f3e,	// (0x00006f3e) cell_vkb_candidate_pane_g3

0x6f59,	// (0x00006f59) cell_vkb_candidate_pane_g4_ParamLimits

0x6f59,	// (0x00006f59) cell_vkb_candidate_pane_g4

0x71ce,	// (0x000071ce) cell_app_pane_cp2_g1_ParamLimits

0x71ce,	// (0x000071ce) cell_app_pane_cp2_g1

0x71ec,	// (0x000071ec) cell_app_pane_cp2_g2_ParamLimits

0x71ec,	// (0x000071ec) cell_app_pane_cp2_g2

0x0001,

0xb2e4,	// (0x0000b2e4) cell_app_pane_cp2_g_ParamLimits

0xb2e4,	// (0x0000b2e4) cell_app_pane_cp2_g

0x71f8,	// (0x000071f8) cell_app_pane_cp2_t1_ParamLimits

0x71f8,	// (0x000071f8) cell_app_pane_cp2_t1

0x13c2,	// (0x000013c2) grid_highlight_pane_cp1_ParamLimits

0x13c2,	// (0x000013c2) grid_highlight_pane_cp1

0x720a,	// (0x0000720a) cell_hwr_candidate_pane_cp1_ParamLimits

0x720a,	// (0x0000720a) cell_hwr_candidate_pane_cp1

0x6b73,	// (0x00006b73) fep_hwr_candidate_drop_down_list_pane_g1

0x7229,	// (0x00007229) fep_hwr_candidate_drop_down_list_pane_g2

0x7236,	// (0x00007236) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb2e9,	// (0x0000b2e9) fep_hwr_candidate_drop_down_list_pane_g

0x7243,	// (0x00007243) fep_hwr_candidate_drop_down_list_scroll_pane

0x724c,	// (0x0000724c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x724c,	// (0x0000724c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7259,	// (0x00007259) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7259,	// (0x00007259) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7266,	// (0x00007266) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7266,	// (0x00007266) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f3e,	// (0x00006f3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f3e,	// (0x00006f3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f59,	// (0x00006f59) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f59,	// (0x00006f59) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7273,	// (0x00007273) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7273,	// (0x00007273) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x728e,	// (0x0000728e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x728e,	// (0x0000728e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x72a9,	// (0x000072a9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x72a9,	// (0x000072a9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb2f0,	// (0x0000b2f0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb2f0,	// (0x0000b2f0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x72c4,	// (0x000072c4) cell_vkb_candidate_pane_cp1_ParamLimits

0x72c4,	// (0x000072c4) cell_vkb_candidate_pane_cp1

0x6b73,	// (0x00006b73) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) fep_vkb_candidate_drop_down_list_pane_g1

0x7229,	// (0x00007229) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7229,	// (0x00007229) fep_vkb_candidate_drop_down_list_pane_g2

0x7236,	// (0x00007236) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7236,	// (0x00007236) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb2e9,	// (0x0000b2e9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb2e9,	// (0x0000b2e9) fep_vkb_candidate_drop_down_list_pane_g

0x72e4,	// (0x000072e4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x72e4,	// (0x000072e4) fep_vkb_candidate_drop_down_list_scroll_pane

0x72f1,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72f1,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72fe,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72fe,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x730a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x730a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6ede,	// (0x00006ede) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ede,	// (0x00006ede) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6eff,	// (0x00006eff) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eff,	// (0x00006eff) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7316,	// (0x00007316) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7316,	// (0x00007316) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7337,	// (0x00007337) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7337,	// (0x00007337) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7358,	// (0x00007358) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7358,	// (0x00007358) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb301,	// (0x0000b301) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb301,	// (0x0000b301) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb860,	// (0x0000b860) title_pane_g1_ParamLimits

0xb873,	// (0x0000b873) title_pane_g2_ParamLimits

0xf3bc,	// (0x0000f3bc) title_pane_g_ParamLimits

0x1d71,	// (0x00001d71) aid_call2_pane

0x1d79,	// (0x00001d79) aid_call_pane

0x1d81,	// (0x00001d81) popup_clock_analogue_window_g1

0x1d81,	// (0x00001d81) popup_clock_analogue_window_g2

0x1d89,	// (0x00001d89) popup_clock_analogue_window_g3

0x1d92,	// (0x00001d92) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xae2f,	// (0x0000ae2f) popup_clock_analogue_window_g

0x1d9a,	// (0x00001d9a) popup_clock_analogue_window_t1

0x1e25,	// (0x00001e25) clock_digital_number_pane_ParamLimits

0x1e25,	// (0x00001e25) clock_digital_number_pane

0x1e31,	// (0x00001e31) clock_digital_number_pane_cp02_ParamLimits

0x1e31,	// (0x00001e31) clock_digital_number_pane_cp02

0x1e3d,	// (0x00001e3d) clock_digital_number_pane_cp03_ParamLimits

0x1e3d,	// (0x00001e3d) clock_digital_number_pane_cp03

0x1e49,	// (0x00001e49) clock_digital_number_pane_cp04_ParamLimits

0x1e49,	// (0x00001e49) clock_digital_number_pane_cp04

0x1e55,	// (0x00001e55) clock_digital_separator_pane_ParamLimits

0x1e55,	// (0x00001e55) clock_digital_separator_pane

0x1e61,	// (0x00001e61) popup_clock_digital_window_t1_ParamLimits

0x1e61,	// (0x00001e61) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xae3a,	// (0x0000ae3a) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xae3a,	// (0x0000ae3a) clock_digital_separator_pane_g

0xcd01,	// (0x0000cd01) aid_fill_nsta_ParamLimits

0xce37,	// (0x0000ce37) indicator_nsta_pane_ParamLimits

0x3442,	// (0x00003442) popup_clock_analogue_window

0x3442,	// (0x00003442) popup_clock_digital_window

0x16f9,	// (0x000016f9) grid_indicator_nsta_pane_ParamLimits

0x6059,	// (0x00006059) clock_nsta_pane_t2

0x0001,

0xb1d3,	// (0x0000b1d3) clock_nsta_pane_t

0x1b2f,	// (0x00001b2f) aid_size_max_handle

0xc213,	// (0x0000c213) aid_size_min_handle

0x263b,	// (0x0000263b) editor_scroll_pane

0x7373,	// (0x00007373) ex_editor_pane

0x16a6,	// (0x000016a6) scroll_pane_cp13

0x0de6,	// (0x00000de6) scroll_pane_cp14

0x1dcf,	// (0x00001dcf) scroll_pane_cp36

0xc21c,	// (0x0000c21c) list_single_graphic_hl_pane_cp2_ParamLimits

0xc21c,	// (0x0000c21c) list_single_graphic_hl_pane_cp2

0xd574,	// (0x0000d574) list_single_graphic_hl_pane_ParamLimits

0xd574,	// (0x0000d574) list_single_graphic_hl_pane

0x737b,	// (0x0000737b) aid_size_min_hl_cp1

0x7384,	// (0x00007384) list_highlight_pane_cp34_ParamLimits

0x7384,	// (0x00007384) list_highlight_pane_cp34

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_ParamLimits

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1

0xdacd,	// (0x0000dacd) list_single_graphic_hl_pane_g2_ParamLimits

0xdacd,	// (0x0000dacd) list_single_graphic_hl_pane_g2

0xdacd,	// (0x0000dacd) list_single_graphic_hl_pane_g3_ParamLimits

0xdacd,	// (0x0000dacd) list_single_graphic_hl_pane_g3

0x25ac,	// (0x000025ac) list_single_graphic_hl_pane_g4_ParamLimits

0x25ac,	// (0x000025ac) list_single_graphic_hl_pane_g4

0xdad9,	// (0x0000dad9) list_single_graphic_hl_pane_g5_ParamLimits

0xdad9,	// (0x0000dad9) list_single_graphic_hl_pane_g5

0x0004,

0xf59c,	// (0x0000f59c) list_single_graphic_hl_pane_g_ParamLimits

0xf59c,	// (0x0000f59c) list_single_graphic_hl_pane_g

0xdaed,	// (0x0000daed) list_single_graphic_hl_pane_t1_ParamLimits

0xdaed,	// (0x0000daed) list_single_graphic_hl_pane_t1

0x73d8,	// (0x000073d8) aid_size_min_hl_cp2

0x73e1,	// (0x000073e1) list_highlight_pane_cp34_cp2_ParamLimits

0x73e1,	// (0x000073e1) list_highlight_pane_cp34_cp2

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_cp2

0x73ee,	// (0x000073ee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73ee,	// (0x000073ee) list_single_graphic_hl_pane_g2_cp2

0x73fa,	// (0x000073fa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73fa,	// (0x000073fa) list_single_graphic_hl_pane_g3_cp2

0x57f5,	// (0x000057f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57f5,	// (0x000057f5) list_single_graphic_hl_pane_g4_cp2

0x73ae,	// (0x000073ae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x73ae,	// (0x000073ae) list_single_graphic_hl_pane_g5_cp2

0xc4ed,	// (0x0000c4ed) control_pane_g4_ParamLimits

0xc4ed,	// (0x0000c4ed) control_pane_g4

0x2b86,	// (0x00002b86) bg_popup_sub_pane_cp10_ParamLimits

0x66eb,	// (0x000066eb) list_choice_list_pane_ParamLimits

0x66fa,	// (0x000066fa) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6faa,	// (0x00006faa) list_preview_fixed_pane_ParamLimits

0x6fc0,	// (0x00006fc0) list_preview_fixed_pane_cp_ParamLimits

0x6fc0,	// (0x00006fc0) list_preview_fixed_pane_cp

0x6fcc,	// (0x00006fcc) popup_preview_fixed_window_g1_ParamLimits

0x6fcc,	// (0x00006fcc) popup_preview_fixed_window_g1

0x6fd8,	// (0x00006fd8) popup_preview_fixed_window_g2_ParamLimits

0x6fd8,	// (0x00006fd8) popup_preview_fixed_window_g2

0x0002,

0xb2a1,	// (0x0000b2a1) popup_preview_fixed_window_g_ParamLimits

0xb2a1,	// (0x0000b2a1) popup_preview_fixed_window_g

0x19d4,	// (0x000019d4) aid_navi_side_left_pane_ParamLimits

0x19e9,	// (0x000019e9) aid_navi_side_right_pane_ParamLimits

0x1a01,	// (0x00001a01) navi_icon_pane_stacon_ParamLimits

0x1a15,	// (0x00001a15) navi_navi_pane_stacon_ParamLimits

0x1a01,	// (0x00001a01) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x741e,	// (0x0000741e) listscroll_text_info_pane

0x7426,	// (0x00007426) list_text_info_pane_ParamLimits

0x7426,	// (0x00007426) list_text_info_pane

0x7435,	// (0x00007435) scroll_pane_cp24_ParamLimits

0x7435,	// (0x00007435) scroll_pane_cp24

0xdb03,	// (0x0000db03) list_text_info_pane_t1_ParamLimits

0xdb03,	// (0x0000db03) list_text_info_pane_t1

0xc671,	// (0x0000c671) popup_fast_swap2_window_ParamLimits

0xc671,	// (0x0000c671) popup_fast_swap2_window

0x7484,	// (0x00007484) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d70,	// (0x00003d70) heading_pane_cp2

0x0ab0,	// (0x00000ab0) listscroll_fast2_pane

0x748e,	// (0x0000748e) grid_fast2_pane

0x7498,	// (0x00007498) listscroll_fast2_pane_g1

0x74a0,	// (0x000074a0) listscroll_fast2_pane_g2

0x0001,

0xb31d,	// (0x0000b31d) listscroll_fast2_pane_g

0x16a6,	// (0x000016a6) scroll_pane_cp26

0x74aa,	// (0x000074aa) cell_fast2_pane_ParamLimits

0x74aa,	// (0x000074aa) cell_fast2_pane

0x74bf,	// (0x000074bf) cell_fast2_pane_g1

0x74c8,	// (0x000074c8) cell_fast2_pane_g2

0x74d1,	// (0x000074d1) cell_fast2_pane_g3

0x0002,

0xb322,	// (0x0000b322) cell_fast2_pane_g

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp9

0x0bb8,	// (0x00000bb8) main_eswt_pane_ParamLimits

0x0bb8,	// (0x00000bb8) main_eswt_pane

0x744a,	// (0x0000744a) list_single_text_info_pane

0x74d9,	// (0x000074d9) eswt_ctrl_button_pane

0x74d9,	// (0x000074d9) eswt_ctrl_canvas_pane

0x74e1,	// (0x000074e1) eswt_ctrl_combo_pane

0x74d9,	// (0x000074d9) eswt_ctrl_default_pane

0x74d9,	// (0x000074d9) eswt_ctrl_label_pane

0x74e9,	// (0x000074e9) eswt_ctrl_wait_pane

0x74f1,	// (0x000074f1) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7511,	// (0x00007511) popup_eswt_tasktip_window_ParamLimits

0x7511,	// (0x00007511) popup_eswt_tasktip_window

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp18

0x7522,	// (0x00007522) eswt_control_pane_g1_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1

0x752f,	// (0x0000752f) eswt_control_pane_g2_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2

0x753c,	// (0x0000753c) eswt_control_pane_g3_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3

0x7549,	// (0x00007549) eswt_control_pane_g4_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4

0x0003,

0xb329,	// (0x0000b329) eswt_control_pane_g_ParamLimits

0xb329,	// (0x0000b329) eswt_control_pane_g

0x13c2,	// (0x000013c2) bg_button_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane

0x0bb8,	// (0x00000bb8) common_borders_pane_copy2_ParamLimits

0x0bb8,	// (0x00000bb8) common_borders_pane_copy2

0x7556,	// (0x00007556) control_button_pane_g1_ParamLimits

0x7556,	// (0x00007556) control_button_pane_g1

0x7562,	// (0x00007562) control_button_pane_g2_ParamLimits

0x7562,	// (0x00007562) control_button_pane_g2

0x756e,	// (0x0000756e) control_button_pane_g3_ParamLimits

0x756e,	// (0x0000756e) control_button_pane_g3

0x0002,

0xb332,	// (0x0000b332) control_button_pane_g_ParamLimits

0xb332,	// (0x0000b332) control_button_pane_g

0x7582,	// (0x00007582) control_button_pane_t1

0x7590,	// (0x00007590) control_button_pane_t2

0x0001,

0xb339,	// (0x0000b339) control_button_pane_t

0x3711,	// (0x00003711) bg_button_pane_g1

0x3719,	// (0x00003719) bg_button_pane_g2

0x3721,	// (0x00003721) bg_button_pane_g3

0x3729,	// (0x00003729) bg_button_pane_g4

0x3731,	// (0x00003731) bg_button_pane_g5

0x3739,	// (0x00003739) bg_button_pane_g6

0x3741,	// (0x00003741) bg_button_pane_g7

0x3749,	// (0x00003749) bg_button_pane_g8

0x3751,	// (0x00003751) bg_button_pane_g9

0x0008,

0xaf96,	// (0x0000af96) bg_button_pane_g

0x66a6,	// (0x000066a6) common_borders_pane_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane

0x7522,	// (0x00007522) eswt_control_pane_g1_copy1_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy1

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy1_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy1

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy1_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy1

0x7549,	// (0x00007549) eswt_control_pane_g4_copy1_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy1

0x66e1,	// (0x000066e1) bg_eswt_ctrl_canvas_pane_g1

0x66a6,	// (0x000066a6) common_borders_pane_cp2_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane_cp2

0x66a6,	// (0x000066a6) common_borders_pane_cp3_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane_cp3

0x759e,	// (0x0000759e) separator_horizontal_pane

0x75a6,	// (0x000075a6) separator_vertical_pane

0x7522,	// (0x00007522) eswt_control_pane_g1_copy2_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy2

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy2_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy2

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy2_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy2

0x7549,	// (0x00007549) eswt_control_pane_g4_copy2_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x75af,	// (0x000075af) separator_horizontal_pane_g1

0x75b8,	// (0x000075b8) separator_horizontal_pane_g2

0x75c1,	// (0x000075c1) separator_horizontal_pane_g3

0x0002,

0xb33e,	// (0x0000b33e) separator_horizontal_pane_g

0x7522,	// (0x00007522) eswt_control_pane_g1_copy3_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy3

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy3_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy3

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy3_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy3

0x7549,	// (0x00007549) eswt_control_pane_g4_copy3_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x75ca,	// (0x000075ca) separator_vertical_pane_g1

0x75d3,	// (0x000075d3) separator_vertical_pane_g2

0x75dc,	// (0x000075dc) separator_vertical_pane_g3

0x0002,

0xb345,	// (0x0000b345) separator_vertical_pane_g

0x7522,	// (0x00007522) eswt_control_pane_g1_copy4_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy4

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy4_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy4

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy4_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy4

0x7549,	// (0x00007549) eswt_control_pane_g4_copy4_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy4

0xdb1e,	// (0x0000db1e) eswt_ctrl_combo_button_pane

0xdb26,	// (0x0000db26) eswt_ctrl_input_pane

0xdb2e,	// (0x0000db2e) popup_choice_list_window_cp70

0xdb36,	// (0x0000db36) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x66a6,	// (0x000066a6) bg_button_pane_cp70_ParamLimits

0x66a6,	// (0x000066a6) bg_button_pane_cp70

0xdb44,	// (0x0000db44) eswt_ctrl_combo_button_pane_g1

0x7613,	// (0x00007613) wait_bar_pane_cp70

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp70_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp70

0x761b,	// (0x0000761b) popup_eswt_tasktip_window_t1

0x7631,	// (0x00007631) wait_bar_pane_cp71_ParamLimits

0x7631,	// (0x00007631) wait_bar_pane_cp71

0x763d,	// (0x0000763d) grid_eswt_app_pane

0x1b93,	// (0x00001b93) scroll_pane_cp70

0xdb4c,	// (0x0000db4c) cell_eswt_app_pane_ParamLimits

0xdb4c,	// (0x0000db4c) cell_eswt_app_pane

0xdb76,	// (0x0000db76) cell_eswt_app_pane_g1_ParamLimits

0xdb76,	// (0x0000db76) cell_eswt_app_pane_g1

0xdba5,	// (0x0000dba5) cell_eswt_app_pane_g2_ParamLimits

0xdba5,	// (0x0000dba5) cell_eswt_app_pane_g2

0x0001,

0xf5a7,	// (0x0000f5a7) cell_eswt_app_pane_g_ParamLimits

0xf5a7,	// (0x0000f5a7) cell_eswt_app_pane_g

0xdbce,	// (0x0000dbce) cell_eswt_app_pane_t1_ParamLimits

0xdbce,	// (0x0000dbce) cell_eswt_app_pane_t1

0x7700,	// (0x00007700) grid_highlight_pane_cp70_ParamLimits

0x7700,	// (0x00007700) grid_highlight_pane_cp70

0x2510,	// (0x00002510) set_content_pane_g1

0xc47f,	// (0x0000c47f) status_small_volume_pane

0x770c,	// (0x0000770c) status_small_volume_pane_g1

0x7714,	// (0x00007714) volume_small2_pane

0x771d,	// (0x0000771d) volume_small2_pane_g1

0x7726,	// (0x00007726) volume_small2_pane_g2

0x772f,	// (0x0000772f) volume_small2_pane_g3

0x7738,	// (0x00007738) volume_small2_pane_g4

0x7741,	// (0x00007741) volume_small2_pane_g5

0x774a,	// (0x0000774a) volume_small2_pane_g6

0x7753,	// (0x00007753) volume_small2_pane_g7

0x775c,	// (0x0000775c) volume_small2_pane_g8

0x7765,	// (0x00007765) volume_small2_pane_g9

0x776e,	// (0x0000776e) volume_small2_pane_g10

0x0009,

0xb351,	// (0x0000b351) volume_small2_pane_g

0x6cbb,	// (0x00006cbb) fep_vkb_top_text_pane_g1_ParamLimits

0xda75,	// (0x0000da75) fep_vkb_top_text_pane_t1_ParamLimits

0x6fe4,	// (0x00006fe4) popup_preview_fixed_window_g3_ParamLimits

0x6fe4,	// (0x00006fe4) popup_preview_fixed_window_g3

0xcc94,	// (0x0000cc94) popup_toolbar_trans_pane

0xd3cc,	// (0x0000d3cc) aid_height_set_list_ParamLimits

0x4f3a,	// (0x00004f3a) aid_size_parent_ParamLimits

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_ParamLimits

0x2510,	// (0x00002510) set_content_pane_g1_ParamLimits

0xd585,	// (0x0000d585) list_single_image_pane_ParamLimits

0xd585,	// (0x0000d585) list_single_image_pane

0xdc00,	// (0x0000dc00) aid_size_cell_image_ParamLimits

0xdc00,	// (0x0000dc00) aid_size_cell_image

0xdc0d,	// (0x0000dc0d) grid_single_image_pane_ParamLimits

0xdc0d,	// (0x0000dc0d) grid_single_image_pane

0x37d6,	// (0x000037d6) list_single_image_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_single_image_pane_g1

0x7790,	// (0x00007790) list_single_image_pane_g2_ParamLimits

0x7790,	// (0x00007790) list_single_image_pane_g2

0x0001,

0xb366,	// (0x0000b366) list_single_image_pane_g_ParamLimits

0xb366,	// (0x0000b366) list_single_image_pane_g

0x77a4,	// (0x000077a4) list_single_image_pane_t1_ParamLimits

0x77a4,	// (0x000077a4) list_single_image_pane_t1

0xdc1b,	// (0x0000dc1b) cell_image_list_pane_ParamLimits

0xdc1b,	// (0x0000dc1b) cell_image_list_pane

0xdc31,	// (0x0000dc31) cell_image_list_pane_g1

0xdc3a,	// (0x0000dc3a) cell_image_list_pane_g2

0x0001,

0xf5ac,	// (0x0000f5ac) cell_image_list_pane_g

0x77e0,	// (0x000077e0) aid_size_cell_tb_trans_pane

0x13c2,	// (0x000013c2) bg_tb_trans_pane

0x77f2,	// (0x000077f2) grid_tb_trans_pane

0x3711,	// (0x00003711) bg_tb_trans_pane_g1

0x3719,	// (0x00003719) bg_tb_trans_pane_g2

0x3721,	// (0x00003721) bg_tb_trans_pane_g3

0x3729,	// (0x00003729) bg_tb_trans_pane_g4

0x3731,	// (0x00003731) bg_tb_trans_pane_g5

0x3749,	// (0x00003749) bg_tb_trans_pane_g6

0x3751,	// (0x00003751) bg_tb_trans_pane_g7

0x3739,	// (0x00003739) bg_tb_trans_pane_g8

0x3741,	// (0x00003741) bg_tb_trans_pane_g9

0x0008,

0xb370,	// (0x0000b370) bg_tb_trans_pane_g

0x7806,	// (0x00007806) cell_toolbar_trans_pane_ParamLimits

0x7806,	// (0x00007806) cell_toolbar_trans_pane

0x66e1,	// (0x000066e1) cell_toolbar_trans_pane_g1

0xd7df,	// (0x0000d7df) list_form2_midp_pane_t1

0xd7ed,	// (0x0000d7ed) list_form2_midp_pane_t2

0x0001,

0xf577,	// (0x0000f577) list_form2_midp_pane_t

0x6283,	// (0x00006283) scroll_pane_cp51_ParamLimits

0x648e,	// (0x0000648e) form2_midp_wait_pane_g1

0x6497,	// (0x00006497) form2_midp_wait_pane_g2

0x64a0,	// (0x000064a0) form2_midp_wait_pane_g3

0x0002,

0xb22e,	// (0x0000b22e) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64ec,	// (0x000064ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64fb,	// (0x000064fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5140,	// (0x00005140) list_single_2graphic_im_pane_ParamLimits

0x5140,	// (0x00005140) list_single_2graphic_im_pane

0xdc43,	// (0x0000dc43) list_single_2graphic_im_pane_g1_ParamLimits

0xdc43,	// (0x0000dc43) list_single_2graphic_im_pane_g1

0xdc54,	// (0x0000dc54) list_single_2graphic_im_pane_g2_ParamLimits

0xdc54,	// (0x0000dc54) list_single_2graphic_im_pane_g2

0xdc60,	// (0x0000dc60) list_single_2graphic_im_pane_g3_ParamLimits

0xdc60,	// (0x0000dc60) list_single_2graphic_im_pane_g3

0x0003,

0xf5b1,	// (0x0000f5b1) list_single_2graphic_im_pane_g_ParamLimits

0xf5b1,	// (0x0000f5b1) list_single_2graphic_im_pane_g

0xdc74,	// (0x0000dc74) list_single_2graphic_im_pane_t1_ParamLimits

0xdc74,	// (0x0000dc74) list_single_2graphic_im_pane_t1

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp

0x7034,	// (0x00007034) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_2heading_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_2heading_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_2heading_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_2heading_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb2b1,	// (0x0000b2b1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb2b1,	// (0x0000b2b1) list_single_graphic_2heading_pane_fp_g

0x789a,	// (0x0000789a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x789a,	// (0x0000789a) list_single_graphic_2heading_pane_fp_t1

0x706c,	// (0x0000706c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x706c,	// (0x0000706c) list_single_graphic_2heading_pane_fp_t2

0x78b0,	// (0x000078b0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x78b0,	// (0x000078b0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb38c,	// (0x0000b38c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb38c,	// (0x0000b38c) list_single_graphic_2heading_pane_fp_t

0x690b,	// (0x0000690b) fep_hwr_write_pane_g5_ParamLimits

0x690b,	// (0x0000690b) fep_hwr_write_pane_g5

0x6917,	// (0x00006917) fep_hwr_write_pane_g6_ParamLimits

0x6917,	// (0x00006917) fep_hwr_write_pane_g6

0x74f1,	// (0x000074f1) eswt_shell_pane_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp18_ParamLimits

0x4de2,	// (0x00004de2) heading_pane_cp70

0x761b,	// (0x0000761b) popup_eswt_tasktip_window_t1_ParamLimits

0xcd5c,	// (0x0000cd5c) aid_touch_tab_arrow_left

0xcd72,	// (0x0000cd72) aid_touch_tab_arrow_right

0xb88b,	// (0x0000b88b) title_pane_g3_ParamLimits

0xb88b,	// (0x0000b88b) title_pane_g3

0x12a1,	// (0x000012a1) set_value_pane_g1

0xcc94,	// (0x0000cc94) popup_toolbar_trans_pane_ParamLimits

0x77e0,	// (0x000077e0) aid_size_cell_tb_trans_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_tb_trans_pane_ParamLimits

0x77f2,	// (0x000077f2) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0bb8,	// (0x00000bb8) cont_snote2_single_text_pane_ParamLimits

0x0bb8,	// (0x00000bb8) cont_snote2_single_text_pane

0x0bb8,	// (0x00000bb8) cont_snote2_single_graphic_pane_ParamLimits

0x0bb8,	// (0x00000bb8) cont_snote2_single_graphic_pane

0x3f97,	// (0x00003f97) cont_note_wait_pane_ParamLimits

0x3f97,	// (0x00003f97) cont_note_wait_pane

0x3f97,	// (0x00003f97) cont_note_image_pane_ParamLimits

0x3f97,	// (0x00003f97) cont_note_image_pane

0x78c6,	// (0x000078c6) popup_note2_window_g1_ParamLimits

0x78c6,	// (0x000078c6) popup_note2_window_g1

0x78f7,	// (0x000078f7) popup_note2_window_t1_ParamLimits

0x78f7,	// (0x000078f7) popup_note2_window_t1

0x793c,	// (0x0000793c) popup_note2_window_t2_ParamLimits

0x793c,	// (0x0000793c) popup_note2_window_t2

0x7981,	// (0x00007981) popup_note2_window_t3_ParamLimits

0x7981,	// (0x00007981) popup_note2_window_t3

0x79c6,	// (0x000079c6) popup_note2_window_t4_ParamLimits

0x79c6,	// (0x000079c6) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb398,	// (0x0000b398) popup_note2_window_t_ParamLimits

0xb398,	// (0x0000b398) popup_note2_window_t

0x79f5,	// (0x000079f5) popup_note2_image_window_g1_ParamLimits

0x79f5,	// (0x000079f5) popup_note2_image_window_g1

0x7a01,	// (0x00007a01) popup_note2_image_window_g2_ParamLimits

0x7a01,	// (0x00007a01) popup_note2_image_window_g2

0x0001,

0xb3a3,	// (0x0000b3a3) popup_note2_image_window_g_ParamLimits

0xb3a3,	// (0x0000b3a3) popup_note2_image_window_g

0x7a13,	// (0x00007a13) popup_note2_image_window_t1_ParamLimits

0x7a13,	// (0x00007a13) popup_note2_image_window_t1

0x7a2b,	// (0x00007a2b) popup_note2_image_window_t2_ParamLimits

0x7a2b,	// (0x00007a2b) popup_note2_image_window_t2

0x7a43,	// (0x00007a43) popup_note2_image_window_t3_ParamLimits

0x7a43,	// (0x00007a43) popup_note2_image_window_t3

0x0002,

0xb3a8,	// (0x0000b3a8) popup_note2_image_window_t_ParamLimits

0xb3a8,	// (0x0000b3a8) popup_note2_image_window_t

0x3fa5,	// (0x00003fa5) popup_note2_wait_window_g1_ParamLimits

0x3fa5,	// (0x00003fa5) popup_note2_wait_window_g1

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_g2_ParamLimits

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_g2

0x3fbd,	// (0x00003fbd) popup_note2_wait_window_g3_ParamLimits

0x3fbd,	// (0x00003fbd) popup_note2_wait_window_g3

0x0002,

0xb3af,	// (0x0000b3af) popup_note2_wait_window_g_ParamLimits

0xb3af,	// (0x0000b3af) popup_note2_wait_window_g

0x7a6b,	// (0x00007a6b) popup_note2_wait_window_t1_ParamLimits

0x7a6b,	// (0x00007a6b) popup_note2_wait_window_t1

0x7a89,	// (0x00007a89) popup_note2_wait_window_t2_ParamLimits

0x7a89,	// (0x00007a89) popup_note2_wait_window_t2

0x7aa7,	// (0x00007aa7) popup_note2_wait_window_t3_ParamLimits

0x7aa7,	// (0x00007aa7) popup_note2_wait_window_t3

0x7ab9,	// (0x00007ab9) popup_note2_wait_window_t4_ParamLimits

0x7ab9,	// (0x00007ab9) popup_note2_wait_window_t4

0x0003,

0xb3b6,	// (0x0000b3b6) popup_note2_wait_window_t_ParamLimits

0xb3b6,	// (0x0000b3b6) popup_note2_wait_window_t

0x7acb,	// (0x00007acb) wait_bar2_pane_ParamLimits

0x7acb,	// (0x00007acb) wait_bar2_pane

0x7ae3,	// (0x00007ae3) popup_snote2_single_text_window_g1_ParamLimits

0x7ae3,	// (0x00007ae3) popup_snote2_single_text_window_g1

0x7b0b,	// (0x00007b0b) popup_snote2_single_text_window_t1_ParamLimits

0x7b0b,	// (0x00007b0b) popup_snote2_single_text_window_t1

0x7b57,	// (0x00007b57) popup_snote2_single_text_window_t2_ParamLimits

0x7b57,	// (0x00007b57) popup_snote2_single_text_window_t2

0x7ba3,	// (0x00007ba3) popup_snote2_single_text_window_t3_ParamLimits

0x7ba3,	// (0x00007ba3) popup_snote2_single_text_window_t3

0x7be4,	// (0x00007be4) popup_snote2_single_text_window_t4_ParamLimits

0x7be4,	// (0x00007be4) popup_snote2_single_text_window_t4

0x7c1a,	// (0x00007c1a) popup_snote2_single_text_window_t5_ParamLimits

0x7c1a,	// (0x00007c1a) popup_snote2_single_text_window_t5

0x0004,

0xb3bf,	// (0x0000b3bf) popup_snote2_single_text_window_t_ParamLimits

0xb3bf,	// (0x0000b3bf) popup_snote2_single_text_window_t

0x7c45,	// (0x00007c45) popup_snote2_single_graphic_window_g1_ParamLimits

0x7c45,	// (0x00007c45) popup_snote2_single_graphic_window_g1

0x7c6d,	// (0x00007c6d) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c6d,	// (0x00007c6d) popup_snote2_single_graphic_window_g2

0x0001,

0xb3ca,	// (0x0000b3ca) popup_snote2_single_graphic_window_g_ParamLimits

0xb3ca,	// (0x0000b3ca) popup_snote2_single_graphic_window_g

0x7c95,	// (0x00007c95) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c95,	// (0x00007c95) popup_snote2_single_graphic_window_t1

0x7ce1,	// (0x00007ce1) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ce1,	// (0x00007ce1) popup_snote2_single_graphic_window_t2

0x7ba3,	// (0x00007ba3) popup_snote2_single_graphic_window_t3_ParamLimits

0x7ba3,	// (0x00007ba3) popup_snote2_single_graphic_window_t3

0x7be4,	// (0x00007be4) popup_snote2_single_graphic_window_t4_ParamLimits

0x7be4,	// (0x00007be4) popup_snote2_single_graphic_window_t4

0x7c1a,	// (0x00007c1a) popup_snote2_single_graphic_window_t5_ParamLimits

0x7c1a,	// (0x00007c1a) popup_snote2_single_graphic_window_t5

0x0004,

0xb3cf,	// (0x0000b3cf) popup_snote2_single_graphic_window_t_ParamLimits

0xb3cf,	// (0x0000b3cf) popup_snote2_single_graphic_window_t

0x60f3,	// (0x000060f3) clock_nsta_pane_cp2_t1

0x60f3,	// (0x000060f3) clock_nsta_pane_cp2_t2

0x0001,

0xb1ef,	// (0x0000b1ef) clock_nsta_pane_cp2_t

0x13dc,	// (0x000013dc) form_field_data_wide_pane_g1_ParamLimits

0x100b,	// (0x0000100b) form_field_data_wide_pane_g2_ParamLimits

0x100b,	// (0x0000100b) form_field_data_wide_pane_g2

0x13e8,	// (0x000013e8) form_field_data_wide_pane_g3_ParamLimits

0x13e8,	// (0x000013e8) form_field_data_wide_pane_g3

0x0002,

0xadb2,	// (0x0000adb2) form_field_data_wide_pane_g_ParamLimits

0xadb2,	// (0x0000adb2) form_field_data_wide_pane_g

0xd722,	// (0x0000d722) grid_touch_3_pane_ParamLimits

0xd722,	// (0x0000d722) grid_touch_3_pane

0xdca5,	// (0x0000dca5) cell_touch_3_pane_ParamLimits

0xdca5,	// (0x0000dca5) cell_touch_3_pane

0x66e1,	// (0x000066e1) cell_touch_3_pane_g1

0x66e1,	// (0x000066e1) cell_touch_3_pane_g2

0x0001,

0xb274,	// (0x0000b274) cell_touch_3_pane_g

0x0917,	// (0x00000917) cont_query_data_pane

0x091f,	// (0x0000091f) cont_query_data_pane_cp1

0x7d5b,	// (0x00007d5b) button_value_adjust_pane_cp7

0x7d63,	// (0x00007d63) query_popup_pane_cp3

0x1eeb,	// (0x00001eeb) bg_popup_sub_pane_cp22_ParamLimits

0x1f01,	// (0x00001f01) navi_navi_volume_pane_cp2

0x1f1c,	// (0x00001f1c) popup_side_volume_key_window_g2

0x1f2b,	// (0x00001f2b) popup_side_volume_key_window_g3

0x0002,

0xae48,	// (0x0000ae48) popup_side_volume_key_window_g

0x1f48,	// (0x00001f48) popup_side_volume_key_window_t2

0x0001,

0xae4f,	// (0x0000ae4f) popup_side_volume_key_window_t

0x23cf,	// (0x000023cf) popup_side_volume_key_window_ParamLimits

0xbcd9,	// (0x0000bcd9) list_double_graphic_pane_g4_ParamLimits

0xbcd9,	// (0x0000bcd9) list_double_graphic_pane_g4

0xd561,	// (0x0000d561) list_single_2heading_msg_pane_ParamLimits

0xd561,	// (0x0000d561) list_single_2heading_msg_pane

0xdced,	// (0x0000dced) list_single_2heading_msg_pane_g1_ParamLimits

0xdced,	// (0x0000dced) list_single_2heading_msg_pane_g1

0xdcf9,	// (0x0000dcf9) list_single_2heading_msg_pane_g2_ParamLimits

0xdcf9,	// (0x0000dcf9) list_single_2heading_msg_pane_g2

0xdd0c,	// (0x0000dd0c) list_single_2heading_msg_pane_g3_ParamLimits

0xdd0c,	// (0x0000dd0c) list_single_2heading_msg_pane_g3

0xdd18,	// (0x0000dd18) list_single_2heading_msg_pane_g4_ParamLimits

0xdd18,	// (0x0000dd18) list_single_2heading_msg_pane_g4

0x0003,

0xf5ba,	// (0x0000f5ba) list_single_2heading_msg_pane_g_ParamLimits

0xf5ba,	// (0x0000f5ba) list_single_2heading_msg_pane_g

0xdd30,	// (0x0000dd30) list_single_2heading_msg_pane_t1_ParamLimits

0xdd30,	// (0x0000dd30) list_single_2heading_msg_pane_t1

0xdd58,	// (0x0000dd58) list_single_2heading_msg_pane_t2_ParamLimits

0xdd58,	// (0x0000dd58) list_single_2heading_msg_pane_t2

0xddc3,	// (0x0000ddc3) list_single_2heading_msg_pane_t3_ParamLimits

0xddc3,	// (0x0000ddc3) list_single_2heading_msg_pane_t3

0x7e46,	// (0x00007e46) list_single_2heading_msg_pane_t4_ParamLimits

0x7e46,	// (0x00007e46) list_single_2heading_msg_pane_t4

0x0003,

0xf5c3,	// (0x0000f5c3) list_single_2heading_msg_pane_t_ParamLimits

0xf5c3,	// (0x0000f5c3) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18fd,	// (0x000018fd) title_pane_stacon_g3_ParamLimits

0x18fd,	// (0x000018fd) title_pane_stacon_g3

0x785d,	// (0x0000785d) list_single_2graphic_im_pane_g4_ParamLimits

0x785d,	// (0x0000785d) list_single_2graphic_im_pane_g4

0x4b5a,	// (0x00004b5a) popup_side_volume_key_window_cp

0x55db,	// (0x000055db) main_idle_act2_pane_t1

0x3759,	// (0x00003759) toolbar_button_pane_g10

0xbb96,	// (0x0000bb96) popup_toolbar_window_cp1

0x60e4,	// (0x000060e4) clock_nsta_pane_cp_t1

0x60e4,	// (0x000060e4) clock_nsta_pane_cp_t2

0x0001,

0xb1ea,	// (0x0000b1ea) clock_nsta_pane_cp_t

0x1f01,	// (0x00001f01) navi_navi_volume_pane_cp2_ParamLimits

0x1f10,	// (0x00001f10) popup_side_volume_key_window_g1_ParamLimits

0x1f1c,	// (0x00001f1c) popup_side_volume_key_window_g2_ParamLimits

0x1f2b,	// (0x00001f2b) popup_side_volume_key_window_g3_ParamLimits

0xae48,	// (0x0000ae48) popup_side_volume_key_window_g_ParamLimits

0x674b,	// (0x0000674b) fep_hwr_aid_pane

0x67f2,	// (0x000067f2) bg_fep_hwr_top_pane_g4_ParamLimits

0x6812,	// (0x00006812) fep_hwr_top_pane_g1_ParamLimits

0x6824,	// (0x00006824) fep_hwr_top_pane_g2_ParamLimits

0x6836,	// (0x00006836) fep_hwr_top_pane_g3_ParamLimits

0xb23f,	// (0x0000b23f) fep_hwr_top_pane_g_ParamLimits

0x684b,	// (0x0000684b) fep_hwr_top_text_pane_ParamLimits

0x491d,	// (0x0000491d) aid_touch_tab_arrow_arrow_2

0x4926,	// (0x00004926) aid_touch_tab_arrow_left_2

0x675f,	// (0x0000675f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6796,	// (0x00006796) fep_hwr_prediction_pane

0x6ac3,	// (0x00006ac3) fep_vkb_prediction_pane

0xda55,	// (0x0000da55) fep_vkb_side_pane_g3_ParamLimits

0xda55,	// (0x0000da55) fep_vkb_side_pane_g3

0x6b73,	// (0x00006b73) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7229,	// (0x00007229) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7236,	// (0x00007236) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb2e9,	// (0x0000b2e9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e6b,	// (0x00007e6b) fep_hwr_prediction_pane_g1

0x7e75,	// (0x00007e75) fep_hwr_prediction_pane_g2

0x7e7d,	// (0x00007e7d) fep_hwr_prediction_pane_g3

0x7e85,	// (0x00007e85) fep_hwr_prediction_pane_g4

0x0003,

0xb3ec,	// (0x0000b3ec) fep_hwr_prediction_pane_g

0x7e6b,	// (0x00007e6b) fep_vkb_prediction_pane_g1

0x7e8d,	// (0x00007e8d) fep_vkb_prediction_pane_g2

0x7e95,	// (0x00007e95) fep_vkb_prediction_pane_g3

0x7e9d,	// (0x00007e9d) fep_vkb_prediction_pane_g4

0x0003,

0xb3f5,	// (0x0000b3f5) fep_vkb_prediction_pane_g

0x4ea3,	// (0x00004ea3) slider_set_pane_g3

0x4eb7,	// (0x00004eb7) slider_set_pane_g4

0x4ecf,	// (0x00004ecf) slider_set_pane_g5

0x4ea3,	// (0x00004ea3) slider_set_pane_g6

0x4ee5,	// (0x00004ee5) slider_set_pane_g7

0x509f,	// (0x0000509f) slider_form_pane_g3

0x50a8,	// (0x000050a8) slider_form_pane_g4

0x50b0,	// (0x000050b0) slider_form_pane_g5

0x509f,	// (0x0000509f) slider_form_pane_g6

0xd517,	// (0x0000d517) slider_form_pane_g7

0x58e8,	// (0x000058e8) slider_set_pane_vc_g3

0x58f1,	// (0x000058f1) slider_set_pane_vc_g4

0x58fa,	// (0x000058fa) slider_set_pane_vc_g5

0x58e8,	// (0x000058e8) slider_set_pane_vc_g6

0x5903,	// (0x00005903) slider_set_pane_vc_g7

0x5dc8,	// (0x00005dc8) slider_form_pane_vc_g1

0x5dd1,	// (0x00005dd1) slider_form_pane_vc_g2

0x5dda,	// (0x00005dda) slider_form_pane_vc_g3

0x5dc8,	// (0x00005dc8) slider_form_pane_vc_g4

0x5de3,	// (0x00005de3) slider_form_pane_vc_g5

0x0004,

0xb1bc,	// (0x0000b1bc) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7ea5,	// (0x00007ea5) ai3_links_pane

0xde31,	// (0x0000de31) popup_ai3_data_window_ParamLimits

0xde31,	// (0x0000de31) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xde4b,	// (0x0000de4b) cell_ai3_links_pane_ParamLimits

0xde4b,	// (0x0000de4b) cell_ai3_links_pane

0x7ee0,	// (0x00007ee0) bg_popup_sub_pane_cp11

0x7eed,	// (0x00007eed) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7f12,	// (0x00007f12) heading_ai3_data_pane

0x7f1a,	// (0x00007f1a) list_ai3_gene_pane

0x7f26,	// (0x00007f26) popup_ai3_data_window_g1

0x7f2e,	// (0x00007f2e) heading_ai3_data_pane_g1

0x7f36,	// (0x00007f36) heading_ai3_data_pane_t1

0x7f44,	// (0x00007f44) list_double_ai3_gene_pane_ParamLimits

0x7f44,	// (0x00007f44) list_double_ai3_gene_pane

0x7f51,	// (0x00007f51) list_single_ai3_gene_pane_ParamLimits

0x7f51,	// (0x00007f51) list_single_ai3_gene_pane

0x66a6,	// (0x000066a6) list_highlight_pane_cp7_ParamLimits

0x66a6,	// (0x000066a6) list_highlight_pane_cp7

0x7f5e,	// (0x00007f5e) list_single_a13_gene_pane_t1_ParamLimits

0x7f5e,	// (0x00007f5e) list_single_a13_gene_pane_t1

0x7f75,	// (0x00007f75) list_single_ai3_gene_pane_g1

0x7f7e,	// (0x00007f7e) list_single_ai3_gene_pane_g2

0x0001,

0xb3fe,	// (0x0000b3fe) list_single_ai3_gene_pane_g

0x7f86,	// (0x00007f86) list_double_ai3_gene_pane_g1_ParamLimits

0x7f86,	// (0x00007f86) list_double_ai3_gene_pane_g1

0x7f92,	// (0x00007f92) list_double_ai3_gene_pane_t1_ParamLimits

0x7f92,	// (0x00007f92) list_double_ai3_gene_pane_t1

0x7fae,	// (0x00007fae) list_double_ai3_gene_pane_t2_ParamLimits

0x7fae,	// (0x00007fae) list_double_ai3_gene_pane_t2

0x7fc4,	// (0x00007fc4) list_double_ai3_gene_pane_t3_ParamLimits

0x7fc4,	// (0x00007fc4) list_double_ai3_gene_pane_t3

0x0002,

0xb403,	// (0x0000b403) list_double_ai3_gene_pane_t_ParamLimits

0xb403,	// (0x0000b403) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d74,	// (0x00007d74) aid_size_min_col_2

0xdcd7,	// (0x0000dcd7) aid_size_min_msg_ParamLimits

0xdcd7,	// (0x0000dcd7) aid_size_min_msg

0xda69,	// (0x0000da69) fep_vkb_top_text_pane_g2_ParamLimits

0xda69,	// (0x0000da69) fep_vkb_top_text_pane_g2

0x0001,

0xf597,	// (0x0000f597) fep_vkb_top_text_pane_g_ParamLimits

0xf597,	// (0x0000f597) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7fe1,	// (0x00007fe1) grid_hc_apps_pane_ParamLimits

0x7fe1,	// (0x00007fe1) grid_hc_apps_pane

0x7ff0,	// (0x00007ff0) list_hc_apps_pane

0x7ff8,	// (0x00007ff8) scroll_pane_cp37_ParamLimits

0x7ff8,	// (0x00007ff8) scroll_pane_cp37

0xde65,	// (0x0000de65) cell_hc_apps_pane_ParamLimits

0xde65,	// (0x0000de65) cell_hc_apps_pane

0xdf23,	// (0x0000df23) cell_hc_apps_pane_g1_ParamLimits

0xdf23,	// (0x0000df23) cell_hc_apps_pane_g1

0x80e3,	// (0x000080e3) cell_hc_apps_pane_g2_ParamLimits

0x80e3,	// (0x000080e3) cell_hc_apps_pane_g2

0x80ff,	// (0x000080ff) cell_hc_apps_pane_g3_ParamLimits

0x80ff,	// (0x000080ff) cell_hc_apps_pane_g3

0x0002,

0xf5cc,	// (0x0000f5cc) cell_hc_apps_pane_g_ParamLimits

0xf5cc,	// (0x0000f5cc) cell_hc_apps_pane_g

0xdf50,	// (0x0000df50) cell_hc_apps_pane_t1_ParamLimits

0xdf50,	// (0x0000df50) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdf8e,	// (0x0000df8e) list_single_hc_apps_pane_ParamLimits

0xdf8e,	// (0x0000df8e) list_single_hc_apps_pane

0xdfbb,	// (0x0000dfbb) list_single_hc_apps_pane_g1

0xdfd4,	// (0x0000dfd4) list_single_hc_apps_pane_g2

0x0001,

0xf5d3,	// (0x0000f5d3) list_single_hc_apps_pane_g

0xdfed,	// (0x0000dfed) list_single_hc_apps_pane_g2_copy1

0x820b,	// (0x0000820b) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xac9a,	// (0x0000ac9a) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x2a1b,	// (0x00002a1b) control_pane_g5_ParamLimits

0x2a1b,	// (0x00002a1b) control_pane_g5

0x4e8a,	// (0x00004e8a) slider_set_pane_g1_ParamLimits

0x4e97,	// (0x00004e97) slider_set_pane_g2_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_ParamLimits

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_ParamLimits

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_ParamLimits

0x4ee5,	// (0x00004ee5) slider_set_pane_g7_ParamLimits

0xb094,	// (0x0000b094) slider_set_pane_g_ParamLimits

0x24bb,	// (0x000024bb) navi_icon_text_pane_ParamLimits

0xcd25,	// (0x0000cd25) aid_fill_nsta_2_ParamLimits

0xcd5c,	// (0x0000cd5c) aid_touch_tab_arrow_left_ParamLimits

0xcd72,	// (0x0000cd72) aid_touch_tab_arrow_right_ParamLimits

0xce0d,	// (0x0000ce0d) clock_nsta_pane_ParamLimits

0x48ff,	// (0x000048ff) navi_icon_pane_g1_ParamLimits

0x490b,	// (0x0000490b) navi_text_pane_t1_ParamLimits

0x61f0,	// (0x000061f0) navi_icon_text_pane_g1_ParamLimits

0x61fc,	// (0x000061fc) navi_icon_text_pane_t1_ParamLimits

0xdfbb,	// (0x0000dfbb) list_single_hc_apps_pane_g1_ParamLimits

0xdfd4,	// (0x0000dfd4) list_single_hc_apps_pane_g2_ParamLimits

0xf5d3,	// (0x0000f5d3) list_single_hc_apps_pane_g_ParamLimits

0xdfed,	// (0x0000dfed) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x820b,	// (0x0000820b) list_single_hc_apps_pane_t1_ParamLimits

0xb790,	// (0x0000b790) popup_toolbar2_fixed_window_ParamLimits

0xb790,	// (0x0000b790) popup_toolbar2_fixed_window

0xcc8a,	// (0x0000cc8a) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8239,	// (0x00008239) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8239,	// (0x00008239) grid_toolbar2_fixed_pane

0xe009,	// (0x0000e009) cell_toolbar2_fixed_pane_ParamLimits

0xe009,	// (0x0000e009) cell_toolbar2_fixed_pane

0xe023,	// (0x0000e023) cell_toolbar2_fixed_pane_g1

0x825a,	// (0x0000825a) toolbar2_fixed_button_pane

0x3711,	// (0x00003711) toolbar2_fixed_button_pane_g1

0x3719,	// (0x00003719) toolbar2_fixed_button_pane_g2

0x3721,	// (0x00003721) toolbar2_fixed_button_pane_g3

0x3729,	// (0x00003729) toolbar2_fixed_button_pane_g4

0x3731,	// (0x00003731) toolbar2_fixed_button_pane_g5

0x3739,	// (0x00003739) toolbar2_fixed_button_pane_g6

0x3741,	// (0x00003741) toolbar2_fixed_button_pane_g7

0x3749,	// (0x00003749) toolbar2_fixed_button_pane_g8

0x3751,	// (0x00003751) toolbar2_fixed_button_pane_g9

0x0008,

0xaf96,	// (0x0000af96) toolbar2_fixed_button_pane_g

0x8262,	// (0x00008262) cell_toolbar2_float_pane_ParamLimits

0x8262,	// (0x00008262) cell_toolbar2_float_pane

0x8273,	// (0x00008273) cell_toolbar2_float_pane_g1

0x825a,	// (0x0000825a) toolbar2_fixed_button_pane_cp

0xd943,	// (0x0000d943) fep_vkb_accented_list_pane_ParamLimits

0xd943,	// (0x0000d943) fep_vkb_accented_list_pane

0x6eba,	// (0x00006eba) bg_popup_fep_shadow_pane_g9

0x263b,	// (0x0000263b) bg_popup_fep_shadow_pane_cp3

0x168d,	// (0x0000168d) list_accented_list_pane

0x827c,	// (0x0000827c) list_single_accented_list_pane_ParamLimits

0x827c,	// (0x0000827c) list_single_accented_list_pane

0x263b,	// (0x0000263b) list_highlight_pane_cp10

0x828d,	// (0x0000828d) list_single_accented_list_pane_t1

0xcbb4,	// (0x0000cbb4) popup_slider_window_ParamLimits

0xcbb4,	// (0x0000cbb4) popup_slider_window

0x7d6b,	// (0x00007d6b) aid_indentation_list_msg

0xe11a,	// (0x0000e11a) bg_popup_window_pane_cp19

0x83b9,	// (0x000083b9) popup_slider_window_g1

0x83d5,	// (0x000083d5) popup_slider_window_g2

0x83f1,	// (0x000083f1) popup_slider_window_g3

0x0005,

0xf5d8,	// (0x0000f5d8) popup_slider_window_g

0x8457,	// (0x00008457) popup_slider_window_t1

0x84cb,	// (0x000084cb) small_volume_slider_vertical_pane

0x66e1,	// (0x000066e1) small_volume_slider_vertical_pane_g1

0x66e1,	// (0x000066e1) small_volume_slider_vertical_pane_g2

0x84e7,	// (0x000084e7) small_volume_slider_vertical_pane_g3

0x0002,

0xb428,	// (0x0000b428) small_volume_slider_vertical_pane_g

0xb6fe,	// (0x0000b6fe) area_side_right_pane_ParamLimits

0xb6fe,	// (0x0000b6fe) area_side_right_pane

0xe1d2,	// (0x0000e1d2) aid_size_side_button_ParamLimits

0xe1d2,	// (0x0000e1d2) aid_size_side_button

0xe1eb,	// (0x0000e1eb) grid_sctrl_middle_pane_ParamLimits

0xe1eb,	// (0x0000e1eb) grid_sctrl_middle_pane

0x8523,	// (0x00008523) sctrl_sk_bottom_pane

0x8534,	// (0x00008534) sctrl_sk_top_pane

0x8546,	// (0x00008546) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x8553,	// (0x00008553) sctrl_sk_top_pane_g1

0x8560,	// (0x00008560) sctrl_sk_top_pane_t1

0x8546,	// (0x00008546) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x857b,	// (0x0000857b) sctrl_sk_bottom_pane_g1

0x8560,	// (0x00008560) sctrl_sk_bottom_pane_t1

0xe205,	// (0x0000e205) cell_sctrl_middle_pane_ParamLimits

0xe205,	// (0x0000e205) cell_sctrl_middle_pane

0xe216,	// (0x0000e216) aid_touch_sctrl_middle_ParamLimits

0xe216,	// (0x0000e216) aid_touch_sctrl_middle

0xe223,	// (0x0000e223) bg_sctrl_middle_pane_ParamLimits

0xe223,	// (0x0000e223) bg_sctrl_middle_pane

0x8640,	// (0x00008640) cell_sctrl_middle_pane_g1_ParamLimits

0x8640,	// (0x00008640) cell_sctrl_middle_pane_g1

0xe231,	// (0x0000e231) cell_sctrl_middle_pane_g2_ParamLimits

0xe231,	// (0x0000e231) cell_sctrl_middle_pane_g2

0x0001,

0xf5e5,	// (0x0000f5e5) cell_sctrl_middle_pane_g_ParamLimits

0xf5e5,	// (0x0000f5e5) cell_sctrl_middle_pane_g

0x3711,	// (0x00003711) bg_sctrl_middle_pane_g1

0x3719,	// (0x00003719) bg_sctrl_middle_pane_g2

0x3721,	// (0x00003721) bg_sctrl_middle_pane_g3

0x3729,	// (0x00003729) bg_sctrl_middle_pane_g4

0x3731,	// (0x00003731) bg_sctrl_middle_pane_g5

0x3739,	// (0x00003739) bg_sctrl_middle_pane_g6

0x3741,	// (0x00003741) bg_sctrl_middle_pane_g7

0x3749,	// (0x00003749) bg_sctrl_middle_pane_g8

0x0007,

0xb439,	// (0x0000b439) bg_sctrl_middle_pane_g

0x3751,	// (0x00003751) bg_sctrl_middle_pane_g8_copy1

0x3711,	// (0x00003711) bg_sctrl_sk_pane_g1

0x3719,	// (0x00003719) bg_sctrl_sk_pane_g2

0x3721,	// (0x00003721) bg_sctrl_sk_pane_g3

0x0008,

0xaf96,	// (0x0000af96) bg_sctrl_sk_pane_g

0x0d76,	// (0x00000d76) aid_size_touch_scroll_bar

0x3729,	// (0x00003729) bg_sctrl_sk_pane_g4

0x3731,	// (0x00003731) bg_sctrl_sk_pane_g5

0x3739,	// (0x00003739) bg_sctrl_sk_pane_g6

0x3741,	// (0x00003741) bg_sctrl_sk_pane_g7

0x3749,	// (0x00003749) bg_sctrl_sk_pane_g8

0x3751,	// (0x00003751) bg_sctrl_sk_pane_g9

0x2c68,	// (0x00002c68) popup_fep_china_hwr2_fs_candidate_window

0xc6ce,	// (0x0000c6ce) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc6ce,	// (0x0000c6ce) popup_fep_china_hwr2_fs_control_window

0x6b73,	// (0x00006b73) sctrl_sk_top_pane_g2

0x0001,

0xb42f,	// (0x0000b42f) sctrl_sk_top_pane_g

0xe23d,	// (0x0000e23d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe23d,	// (0x0000e23d) aid_fep_china_hwr2_fs_cell

0xe251,	// (0x0000e251) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe251,	// (0x0000e251) bg_popup_fep_shadow_pane_cp4

0xe268,	// (0x0000e268) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe268,	// (0x0000e268) bg_popup_fep_shadow_pane_cp5

0xe27a,	// (0x0000e27a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe27a,	// (0x0000e27a) popup_fep_china_hwr2_fs_control_bar_grid

0xe28e,	// (0x0000e28e) popup_fep_china_hwr2_fs_control_funtion_grid

0x8614,	// (0x00008614) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x861e,	// (0x0000861e) popup_fep_china_hwr2_fs_candidate_grid

0xe296,	// (0x0000e296) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe296,	// (0x0000e296) cell_fep_china_hwr2_fs_funtion_grid

0x66e1,	// (0x000066e1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8640,	// (0x00008640) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8640,	// (0x00008640) cell_fep_china_hwr2_fs_funtion_grid_g1

0x864e,	// (0x0000864e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x864e,	// (0x0000864e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb44a,	// (0x0000b44a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb44a,	// (0x0000b44a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe2ae,	// (0x0000e2ae) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe2ae,	// (0x0000e2ae) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe2c3,	// (0x0000e2c3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe2c3,	// (0x0000e2c3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf5ea,	// (0x0000f5ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf5ea,	// (0x0000f5ea) cell_fep_china_hwr2_fs_funtion_grid_t

0x8695,	// (0x00008695) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x869d,	// (0x0000869d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x86a5,	// (0x000086a5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb454,	// (0x0000b454) popup_fep_china_hwr2_fs_control_bar_grid_g

0x86ad,	// (0x000086ad) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x86ad,	// (0x000086ad) cell_fep_china_hwr2_fs_candidate_grid

0x86c6,	// (0x000086c6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x86ce,	// (0x000086ce) popup_fep_china_hwr2_fs_candidate_grid_g21

0x66e1,	// (0x000066e1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x66e1,	// (0x000066e1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb274,	// (0x0000b274) cell_fep_china_hwr2_fs_candidate_grid_g

0x86d6,	// (0x000086d6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3261,	// (0x00003261) clock_nsta_pane_cp_24_ParamLimits

0x3261,	// (0x00003261) clock_nsta_pane_cp_24

0x32df,	// (0x000032df) indicator_nsta_pane_cp_24_ParamLimits

0x32df,	// (0x000032df) indicator_nsta_pane_cp_24

0x476a,	// (0x0000476a) heading_pane_g1

0x0001,

0xaffb,	// (0x0000affb) heading_pane_g

0x536c,	// (0x0000536c) grid_sct_catagory_button_pane

0x539c,	// (0x0000539c) scroll_pane_cp5_ParamLimits

0x628f,	// (0x0000628f) button_value_adjust_pane_cp5_ParamLimits

0x628f,	// (0x0000628f) button_value_adjust_pane_cp5

0x638b,	// (0x0000638b) form2_midp_time_pane_ParamLimits

0x86e4,	// (0x000086e4) cell_sct_catagory_button_pane_ParamLimits

0x86e4,	// (0x000086e4) cell_sct_catagory_button_pane

0x66a6,	// (0x000066a6) bg_button_pane_cp01_ParamLimits

0x66a6,	// (0x000066a6) bg_button_pane_cp01

0x66e1,	// (0x000066e1) cell_sct_catagory_button_pane_g1

0xcc2d,	// (0x0000cc2d) popup_tb_extension_window

0xe2df,	// (0x0000e2df) aid_size_cell_ext_ParamLimits

0xe2df,	// (0x0000e2df) aid_size_cell_ext

0x0bb8,	// (0x00000bb8) bg_tb_trans_pane_cp1_ParamLimits

0x0bb8,	// (0x00000bb8) bg_tb_trans_pane_cp1

0xe305,	// (0x0000e305) grid_tb_ext_pane_ParamLimits

0xe305,	// (0x0000e305) grid_tb_ext_pane

0xe340,	// (0x0000e340) cell_tb_ext_pane_ParamLimits

0xe340,	// (0x0000e340) cell_tb_ext_pane

0xe368,	// (0x0000e368) cell_tb_ext_pane_g1_ParamLimits

0xe368,	// (0x0000e368) cell_tb_ext_pane_g1

0x8778,	// (0x00008778) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb7a5,	// (0x0000b7a5) popup_uni_indicator_window_ParamLimits

0xb7a5,	// (0x0000b7a5) popup_uni_indicator_window

0x13c2,	// (0x000013c2) bg_popup_sub_pane_cp14

0x8793,	// (0x00008793) list_uniindi_pane

0x879f,	// (0x0000879f) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x87be,	// (0x000087be) uniindi_top_pane_g1

0x87d4,	// (0x000087d4) uniindi_top_pane_g2

0x0003,

0xb45b,	// (0x0000b45b) uniindi_top_pane_g

0x87fe,	// (0x000087fe) uniindi_top_pane_t1

0x8828,	// (0x00008828) list_single_uniindi_pane_ParamLimits

0x8828,	// (0x00008828) list_single_uniindi_pane

0x66e1,	// (0x000066e1) bg_uniindi_top_pane_g1

0x883b,	// (0x0000883b) list_single_uniindi_pane_g1

0x884e,	// (0x0000884e) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8873,	// (0x00008873) bg_sctrl_sk_pane_cp1

0x887c,	// (0x0000887c) bg_sctrl_sk_pane_cp2

0x8885,	// (0x00008885) control_bg_pane_g1

0x888e,	// (0x0000888e) control_bg_pane_g2

0x0001,

0xb464,	// (0x0000b464) control_bg_pane_g

0x6098,	// (0x00006098) cell_indicator_nsta_pane_g1_ParamLimits

0xd74f,	// (0x0000d74f) cell_indicator_nsta_pane_g2_ParamLimits

0xf562,	// (0x0000f562) cell_indicator_nsta_pane_g_ParamLimits

0x6413,	// (0x00006413) form2_midp_time_pane_t1_ParamLimits

0x673d,	// (0x0000673d) main_idle_act4_pane_ParamLimits

0x673d,	// (0x0000673d) main_idle_act4_pane

0xcc2d,	// (0x0000cc2d) popup_tb_extension_window_ParamLimits

0xe327,	// (0x0000e327) tb_ext_find_pane_ParamLimits

0xe327,	// (0x0000e327) tb_ext_find_pane

0x8897,	// (0x00008897) ai_gene_pane_1_cp1

0x2782,	// (0x00002782) ai_gene_pane_2_cp1

0x889f,	// (0x0000889f) list_single_idle_plugin_calendar_pane

0x88a8,	// (0x000088a8) list_single_idle_plugin_notification_pane

0x88b1,	// (0x000088b1) list_single_idle_plugin_player_pane

0xe385,	// (0x0000e385) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe385,	// (0x0000e385) list_single_idle_plugin_shortcut_pane

0xe3ad,	// (0x0000e3ad) main_idle_act4_pane_t1

0xe3c3,	// (0x0000e3c3) main_idle_act4_pane_t2

0x0001,

0xf5ef,	// (0x0000f5ef) main_idle_act4_pane_t

0xe3d9,	// (0x0000e3d9) middle_sk_idle_act4_pane_ParamLimits

0xe3d9,	// (0x0000e3d9) middle_sk_idle_act4_pane

0xe3f5,	// (0x0000e3f5) popup_clock_digital_analogue_window_cp2

0xe41d,	// (0x0000e41d) shortcut_wheel_idle_act4_pane_ParamLimits

0xe41d,	// (0x0000e41d) shortcut_wheel_idle_act4_pane

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g1

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g2

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g3

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g4

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g5

0x8944,	// (0x00008944) shortcut_wheel_idle_act4_pane_g6

0x894c,	// (0x0000894c) shortcut_wheel_idle_act4_pane_g7

0x8954,	// (0x00008954) shortcut_wheel_idle_act4_pane_g8

0x895c,	// (0x0000895c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb46e,	// (0x0000b46e) shortcut_wheel_idle_act4_pane_g

0x67f2,	// (0x000067f2) middle_sk_idle_act4_pane_g1_ParamLimits

0x67f2,	// (0x000067f2) middle_sk_idle_act4_pane_g1

0xe49a,	// (0x0000e49a) middle_sk_idle_act4_pane_g2_ParamLimits

0xe49a,	// (0x0000e49a) middle_sk_idle_act4_pane_g2

0x0001,

0xf604,	// (0x0000f604) middle_sk_idle_act4_pane_g_ParamLimits

0xf604,	// (0x0000f604) middle_sk_idle_act4_pane_g

0xe4b2,	// (0x0000e4b2) middle_sk_idle_act4_pane_t1_ParamLimits

0xe4b2,	// (0x0000e4b2) middle_sk_idle_act4_pane_t1

0xe4e1,	// (0x0000e4e1) grid_ai_shortcut_pane_ParamLimits

0xe4e1,	// (0x0000e4e1) grid_ai_shortcut_pane

0xe4fe,	// (0x0000e4fe) list_highlight_pane_cp16_ParamLimits

0xe4fe,	// (0x0000e4fe) list_highlight_pane_cp16

0xe50b,	// (0x0000e50b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe50b,	// (0x0000e50b) list_single_idle_plugin_shortcut_pane_g1

0xe517,	// (0x0000e517) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe517,	// (0x0000e517) list_single_idle_plugin_shortcut_pane_g2

0xe533,	// (0x0000e533) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe533,	// (0x0000e533) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf609,	// (0x0000f609) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf609,	// (0x0000f609) list_single_idle_plugin_shortcut_pane_g

0xe548,	// (0x0000e548) cell_ai_shortcut_pane_ParamLimits

0xe548,	// (0x0000e548) cell_ai_shortcut_pane

0xe55e,	// (0x0000e55e) cell_ai_shortcut_pane_g1_ParamLimits

0xe55e,	// (0x0000e55e) cell_ai_shortcut_pane_g1

0x8897,	// (0x00008897) ai_gene_pane_1_cp2

0x8a8c,	// (0x00008a8c) ai_gene_pane_2_cp2

0x8a94,	// (0x00008a94) list_highlight_pane_cp15

0x8a9d,	// (0x00008a9d) list_single_idle_plugin_calendar_pane_g1

0x8a94,	// (0x00008a94) list_highlight_pane_cp17

0x8aa5,	// (0x00008aa5) list_single_idle_plugin_calendar_pane_g1_copy1

0x8aad,	// (0x00008aad) list_single_idle_plugin_player_pane_g1

0x567d,	// (0x0000567d) list_single_idle_plugin_player_pane_g2

0x0001,

0xb49d,	// (0x0000b49d) list_single_idle_plugin_player_pane_g

0x8ab5,	// (0x00008ab5) list_single_idle_plugin_player_pane_t1

0x8ac3,	// (0x00008ac3) list_single_idle_plugin_player_pane_t2

0x8ad1,	// (0x00008ad1) list_single_idle_plugin_player_pane_t3

0x8adf,	// (0x00008adf) list_single_idle_plugin_player_pane_t4

0x0003,

0xb4a2,	// (0x0000b4a2) list_single_idle_plugin_player_pane_t

0x8aed,	// (0x00008aed) wait_bar_pane_cp15

0x8af5,	// (0x00008af5) grid_ai_notification_pane

0x567d,	// (0x0000567d) list_single_idle_plugin_notification_pane_g1

0xe580,	// (0x0000e580) cell_ai_notification_pane_ParamLimits

0xe580,	// (0x0000e580) cell_ai_notification_pane

0x8b0b,	// (0x00008b0b) cell_ai_notification_pane_g1

0x8b13,	// (0x00008b13) cell_ai_notification_pane_t1

0xe58d,	// (0x0000e58d) tb_ext_find_button_pane

0xe595,	// (0x0000e595) tb_ext_find_pane_g1

0xe59d,	// (0x0000e59d) tb_ext_find_pane_t1

0x1d81,	// (0x00001d81) tb_ext_find_button_pane_g1

0x8b3f,	// (0x00008b3f) tb_ext_find_button_pane_g2

0x0001,

0xb4ab,	// (0x0000b4ab) tb_ext_find_button_pane_g

0xe3ad,	// (0x0000e3ad) main_idle_act4_pane_t1_ParamLimits

0xe3c3,	// (0x0000e3c3) main_idle_act4_pane_t2_ParamLimits

0xf5ef,	// (0x0000f5ef) main_idle_act4_pane_t_ParamLimits

0xe3f5,	// (0x0000e3f5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe40d,	// (0x0000e40d) sat_plugin_idle_act4_pane_ParamLimits

0xe40d,	// (0x0000e40d) sat_plugin_idle_act4_pane

0xe5ab,	// (0x0000e5ab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe5ab,	// (0x0000e5ab) sat_plugin_idle_act4_pane_t1

0xe5c3,	// (0x0000e5c3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5c3,	// (0x0000e5c3) sat_plugin_idle_act4_pane_t2

0xe5db,	// (0x0000e5db) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5db,	// (0x0000e5db) sat_plugin_idle_act4_pane_t3

0xe5f3,	// (0x0000e5f3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5f3,	// (0x0000e5f3) sat_plugin_idle_act4_pane_t4

0x0003,

0xf610,	// (0x0000f610) sat_plugin_idle_act4_pane_t_ParamLimits

0xf610,	// (0x0000f610) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b94,	// (0x00008b94) popup_battery_window_g1_ParamLimits

0x8b94,	// (0x00008b94) popup_battery_window_g1

0x8ba0,	// (0x00008ba0) popup_battery_window_t1_ParamLimits

0x8ba0,	// (0x00008ba0) popup_battery_window_t1

0x8bb2,	// (0x00008bb2) popup_battery_window_t2_ParamLimits

0x8bb2,	// (0x00008bb2) popup_battery_window_t2

0x0001,

0xb4b9,	// (0x0000b4b9) popup_battery_window_t_ParamLimits

0xb4b9,	// (0x0000b4b9) popup_battery_window_t

0xc351,	// (0x0000c351) midp_canvas_pane_ParamLimits

0xc3ae,	// (0x0000c3ae) midp_keypad_pane_ParamLimits

0xc3ae,	// (0x0000c3ae) midp_keypad_pane

0x2b86,	// (0x00002b86) main_midp_pane_ParamLimits

0x6102,	// (0x00006102) signal_pane_g2_cp_ParamLimits

0xe60b,	// (0x0000e60b) aid_size_cell_midp_keypad_ParamLimits

0xe60b,	// (0x0000e60b) aid_size_cell_midp_keypad

0xe629,	// (0x0000e629) midp_keyp_game_grid_pane_ParamLimits

0xe629,	// (0x0000e629) midp_keyp_game_grid_pane

0xe650,	// (0x0000e650) midp_keyp_rocker_pane_ParamLimits

0xe650,	// (0x0000e650) midp_keyp_rocker_pane

0xe6a1,	// (0x0000e6a1) midp_keyp_sk_left_pane_ParamLimits

0xe6a1,	// (0x0000e6a1) midp_keyp_sk_left_pane

0xe6f5,	// (0x0000e6f5) midp_keyp_sk_right_pane_ParamLimits

0xe6f5,	// (0x0000e6f5) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe749,	// (0x0000e749) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe749,	// (0x0000e749) midp_keyp_sk_right_pane_g1

0x66e1,	// (0x000066e1) midp_keyp_rocker_pane_g1

0xe752,	// (0x0000e752) keyp_game_cell_pane_ParamLimits

0xe752,	// (0x0000e752) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe776,	// (0x0000e776) keyp_game_cell_pane_g1

0xb740,	// (0x0000b740) popup_fep_vkb2_window_ParamLimits

0xb740,	// (0x0000b740) popup_fep_vkb2_window

0xe77f,	// (0x0000e77f) aid_size_cell_vkb2_ParamLimits

0xe77f,	// (0x0000e77f) aid_size_cell_vkb2

0xe7b5,	// (0x0000e7b5) popup_fep_vkb2_window_g1_ParamLimits

0xe7b5,	// (0x0000e7b5) popup_fep_vkb2_window_g1

0xe805,	// (0x0000e805) vkb2_area_bottom_pane_ParamLimits

0xe805,	// (0x0000e805) vkb2_area_bottom_pane

0xe859,	// (0x0000e859) vkb2_area_keypad_pane_ParamLimits

0xe859,	// (0x0000e859) vkb2_area_keypad_pane

0xe8a1,	// (0x0000e8a1) vkb2_area_top_pane_ParamLimits

0xe8a1,	// (0x0000e8a1) vkb2_area_top_pane

0xe927,	// (0x0000e927) vkb2_top_entry_pane_ParamLimits

0xe927,	// (0x0000e927) vkb2_top_entry_pane

0xe954,	// (0x0000e954) vkb2_top_grid_left_pane_ParamLimits

0xe954,	// (0x0000e954) vkb2_top_grid_left_pane

0xe974,	// (0x0000e974) vkb2_top_grid_right_pane_ParamLimits

0xe974,	// (0x0000e974) vkb2_top_grid_right_pane

0x8f33,	// (0x00008f33) vkb2_cell_keypad_pane_ParamLimits

0x8f33,	// (0x00008f33) vkb2_cell_keypad_pane

0xe9ba,	// (0x0000e9ba) vkb2_area_bottom_grid_pane_ParamLimits

0xe9ba,	// (0x0000e9ba) vkb2_area_bottom_grid_pane

0xe9e4,	// (0x0000e9e4) vkb2_area_bottom_pane_g1_ParamLimits

0xe9e4,	// (0x0000e9e4) vkb2_area_bottom_pane_g1

0xea0a,	// (0x0000ea0a) vkb2_area_bottom_pane_g2_ParamLimits

0xea0a,	// (0x0000ea0a) vkb2_area_bottom_pane_g2

0xea3b,	// (0x0000ea3b) vkb2_area_bottom_pane_g3_ParamLimits

0xea3b,	// (0x0000ea3b) vkb2_area_bottom_pane_g3

0x0002,

0xf619,	// (0x0000f619) vkb2_area_bottom_pane_g_ParamLimits

0xf619,	// (0x0000f619) vkb2_area_bottom_pane_g

0x90dd,	// (0x000090dd) vkb2_top_cell_left_pane_ParamLimits

0x90dd,	// (0x000090dd) vkb2_top_cell_left_pane

0xeaa5,	// (0x0000eaa5) vkb2_top_entry_pane_g1_ParamLimits

0xeaa5,	// (0x0000eaa5) vkb2_top_entry_pane_g1

0xeab3,	// (0x0000eab3) vkb2_top_entry_pane_t1_ParamLimits

0xeab3,	// (0x0000eab3) vkb2_top_entry_pane_t1

0x9145,	// (0x00009145) vkb2_top_entry_pane_t2_ParamLimits

0x9145,	// (0x00009145) vkb2_top_entry_pane_t2

0x9177,	// (0x00009177) vkb2_top_entry_pane_t3_ParamLimits

0x9177,	// (0x00009177) vkb2_top_entry_pane_t3

0x0002,

0xf620,	// (0x0000f620) vkb2_top_entry_pane_t_ParamLimits

0xf620,	// (0x0000f620) vkb2_top_entry_pane_t

0xeaec,	// (0x0000eaec) vkb2_top_grid_right_pane_g1_ParamLimits

0xeaec,	// (0x0000eaec) vkb2_top_grid_right_pane_g1

0x91de,	// (0x000091de) vkb2_top_grid_right_pane_g2_ParamLimits

0x91de,	// (0x000091de) vkb2_top_grid_right_pane_g2

0x91f6,	// (0x000091f6) vkb2_top_grid_right_pane_g3_ParamLimits

0x91f6,	// (0x000091f6) vkb2_top_grid_right_pane_g3

0xeb02,	// (0x0000eb02) vkb2_top_grid_right_pane_g4_ParamLimits

0xeb02,	// (0x0000eb02) vkb2_top_grid_right_pane_g4

0x0003,

0xf627,	// (0x0000f627) vkb2_top_grid_right_pane_g_ParamLimits

0xf627,	// (0x0000f627) vkb2_top_grid_right_pane_g

0x9224,	// (0x00009224) vkb2_top_cell_left_pane_g1

0x923b,	// (0x0000923b) vkb2_cell_keypad_pane_g1_ParamLimits

0x923b,	// (0x0000923b) vkb2_cell_keypad_pane_g1

0x9249,	// (0x00009249) vkb2_cell_keypad_pane_t1_ParamLimits

0x9249,	// (0x00009249) vkb2_cell_keypad_pane_t1

0x9260,	// (0x00009260) vkb2_cell_bottom_grid_pane_ParamLimits

0x9260,	// (0x00009260) vkb2_cell_bottom_grid_pane

0x9299,	// (0x00009299) vkb2_cell_bottom_grid_pane_g1

0xe43e,	// (0x0000e43e) aid_call2_pane_cp02

0xe446,	// (0x0000e446) aid_call_pane_cp02

0xe44e,	// (0x0000e44e) clock_digital_number_pane_cp10

0xe456,	// (0x0000e456) clock_digital_number_pane_cp11

0xe45e,	// (0x0000e45e) clock_digital_number_pane_cp12

0xe466,	// (0x0000e466) clock_digital_number_pane_cp13

0xe46e,	// (0x0000e46e) clock_digital_separator_pane_cp10

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g1

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g2

0xe476,	// (0x0000e476) popup_clock_digital_analogue_window_cp2_g3

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g4

0xe476,	// (0x0000e476) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf5f4,	// (0x0000f5f4) popup_clock_digital_analogue_window_cp2_g

0xe47e,	// (0x0000e47e) popup_clock_digital_analogue_window_cp2_t1

0xe48c,	// (0x0000e48c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf5ff,	// (0x0000f5ff) popup_clock_digital_analogue_window_cp2_t

0x66e1,	// (0x000066e1) clock_digital_number_pane_cp10_g1

0x66e1,	// (0x000066e1) clock_digital_number_pane_cp10_g2

0x0001,

0xb274,	// (0x0000b274) clock_digital_number_pane_cp10_g

0x66e1,	// (0x000066e1) clock_digital_separator_pane_cp10_g1

0x66e1,	// (0x000066e1) clock_digital_separator_pane_cp10_g2

0x0001,

0xb274,	// (0x0000b274) clock_digital_separator_pane_cp10_g

0x87e0,	// (0x000087e0) uniindi_top_pane_g3

0x87f1,	// (0x000087f1) uniindi_top_pane_g4

0x8fbe,	// (0x00008fbe) vkb2_row_keypad_pane_ParamLimits

0x8fbe,	// (0x00008fbe) vkb2_row_keypad_pane

0x92b5,	// (0x000092b5) vkb2_cell_t_keypad_pane_ParamLimits

0x92b5,	// (0x000092b5) vkb2_cell_t_keypad_pane

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp08

0x92d8,	// (0x000092d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x92d8,	// (0x000092d8) vkb2_cell_t_keypad_pane_cp09

0x92ec,	// (0x000092ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x92ec,	// (0x000092ec) vkb2_cell_t_keypad_pane_cp01

0x92fd,	// (0x000092fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92fd,	// (0x000092fd) vkb2_cell_t_keypad_pane_cp02

0x930e,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x930e,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp03

0x931f,	// (0x0000931f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x931f,	// (0x0000931f) vkb2_cell_t_keypad_pane_cp04

0x9330,	// (0x00009330) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9330,	// (0x00009330) vkb2_cell_t_keypad_pane_cp05

0x9341,	// (0x00009341) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9341,	// (0x00009341) vkb2_cell_t_keypad_pane_cp06

0x9352,	// (0x00009352) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9352,	// (0x00009352) vkb2_cell_t_keypad_pane_cp07

0x9363,	// (0x00009363) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9363,	// (0x00009363) vkb2_cell_t_keypad_pane_cp10

0x6b73,	// (0x00006b73) vkb2_cell_t_keypad_pane_g1

0x9378,	// (0x00009378) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xeb18,	// (0x0000eb18) aid_size_cell_graphic2_ParamLimits

0xeb18,	// (0x0000eb18) aid_size_cell_graphic2

0xeb56,	// (0x0000eb56) bg_popup_window_pane_cp21_ParamLimits

0xeb56,	// (0x0000eb56) bg_popup_window_pane_cp21

0xeb64,	// (0x0000eb64) graphic2_pages_pane_ParamLimits

0xeb64,	// (0x0000eb64) graphic2_pages_pane

0xebba,	// (0x0000ebba) grid_graphic2_control_pane_ParamLimits

0xebba,	// (0x0000ebba) grid_graphic2_control_pane

0xec02,	// (0x0000ec02) grid_graphic2_pane_ParamLimits

0xec02,	// (0x0000ec02) grid_graphic2_pane

0xec89,	// (0x0000ec89) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7f1a,	// (0x00007f1a) list_ai3_gene_pane_ParamLimits

0xe11a,	// (0x0000e11a) bg_popup_window_pane_cp19_ParamLimits

0x835d,	// (0x0000835d) bg_touch_area_indi_pane_ParamLimits

0x835d,	// (0x0000835d) bg_touch_area_indi_pane

0x8373,	// (0x00008373) bg_touch_area_indi_pane_cp01_ParamLimits

0x8373,	// (0x00008373) bg_touch_area_indi_pane_cp01

0x8389,	// (0x00008389) bg_touch_area_indi_pane_cp02_ParamLimits

0x8389,	// (0x00008389) bg_touch_area_indi_pane_cp02

0x839f,	// (0x0000839f) bg_touch_area_indi_pane_cp03_ParamLimits

0x839f,	// (0x0000839f) bg_touch_area_indi_pane_cp03

0x83b9,	// (0x000083b9) popup_slider_window_g1_ParamLimits

0x83d5,	// (0x000083d5) popup_slider_window_g2_ParamLimits

0x83f1,	// (0x000083f1) popup_slider_window_g3_ParamLimits

0xf5d8,	// (0x0000f5d8) popup_slider_window_g_ParamLimits

0x8457,	// (0x00008457) popup_slider_window_t1_ParamLimits

0x84cb,	// (0x000084cb) small_volume_slider_vertical_pane_ParamLimits

0xec89,	// (0x0000ec89) cell_graphic2_pane_ParamLimits

0xece4,	// (0x0000ece4) bg_button_pane_cp10_ParamLimits

0xece4,	// (0x0000ece4) bg_button_pane_cp10

0xecf7,	// (0x0000ecf7) bg_button_pane_cp11_ParamLimits

0xecf7,	// (0x0000ecf7) bg_button_pane_cp11

0xed0a,	// (0x0000ed0a) graphic2_pages_pane_g1_ParamLimits

0xed0a,	// (0x0000ed0a) graphic2_pages_pane_g1

0xed25,	// (0x0000ed25) graphic2_pages_pane_g2_ParamLimits

0xed25,	// (0x0000ed25) graphic2_pages_pane_g2

0x0001,

0xf635,	// (0x0000f635) graphic2_pages_pane_g_ParamLimits

0xf635,	// (0x0000f635) graphic2_pages_pane_g

0xed3d,	// (0x0000ed3d) graphic2_pages_pane_t1_ParamLimits

0xed3d,	// (0x0000ed3d) graphic2_pages_pane_t1

0xed55,	// (0x0000ed55) cell_graphic2_control_pane_ParamLimits

0xed55,	// (0x0000ed55) cell_graphic2_control_pane

0xed87,	// (0x0000ed87) cell_graphic2_pane_g1_ParamLimits

0xed87,	// (0x0000ed87) cell_graphic2_pane_g1

0x698d,	// (0x0000698d) cell_graphic2_pane_g2_ParamLimits

0x698d,	// (0x0000698d) cell_graphic2_pane_g2

0xed94,	// (0x0000ed94) cell_graphic2_pane_g3_ParamLimits

0xed94,	// (0x0000ed94) cell_graphic2_pane_g3

0x699a,	// (0x0000699a) cell_graphic2_pane_g4_ParamLimits

0x699a,	// (0x0000699a) cell_graphic2_pane_g4

0xeda1,	// (0x0000eda1) cell_graphic2_pane_g5_ParamLimits

0xeda1,	// (0x0000eda1) cell_graphic2_pane_g5

0x0004,

0xf63a,	// (0x0000f63a) cell_graphic2_pane_g_ParamLimits

0xf63a,	// (0x0000f63a) cell_graphic2_pane_g

0xedc1,	// (0x0000edc1) cell_graphic2_pane_t1_ParamLimits

0xedc1,	// (0x0000edc1) cell_graphic2_pane_t1

0x475e,	// (0x0000475e) grid_highlight_pane_cp11_ParamLimits

0x475e,	// (0x0000475e) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xee0a,	// (0x0000ee0a) cell_graphic2_control_pane_g1

0x66e1,	// (0x000066e1) bg_touch_area_indi_pane_g1

0x9654,	// (0x00009654) aid_cmod_rocker_key_size

0x965e,	// (0x0000965e) aid_cmode_itu_key_size

0x9668,	// (0x00009668) main_cmode_video_pane

0x9672,	// (0x00009672) main_comp_mode_itu_pane

0x967e,	// (0x0000967e) main_comp_mode_rocker_pane

0x968a,	// (0x0000968a) cell_cmode_rocker_pane_ParamLimits

0x968a,	// (0x0000968a) cell_cmode_rocker_pane

0x969c,	// (0x0000969c) cell_cmode_itu_pane_ParamLimits

0x969c,	// (0x0000969c) cell_cmode_itu_pane

0x13c2,	// (0x000013c2) bg_button_pane_cp06_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane_cp06

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1

0x8640,	// (0x00008640) cell_cmode_rocker_pane_g2_ParamLimits

0x8640,	// (0x00008640) cell_cmode_rocker_pane_g2

0x0001,

0xb4ef,	// (0x0000b4ef) cell_cmode_rocker_pane_g_ParamLimits

0xb4ef,	// (0x0000b4ef) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x96b1,	// (0x000096b1) cell_cmode_itu_pane_g1

0x96ba,	// (0x000096ba) cell_cmode_itu_pane_t1

0x96c8,	// (0x000096c8) cell_cmode_itu_pane_t2

0x0001,

0xb4f4,	// (0x0000b4f4) cell_cmode_itu_pane_t

0x8863,	// (0x00008863) aid_touch_ctrl_left

0x886b,	// (0x0000886b) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xee2e,	// (0x0000ee2e) aid_cmod_rocker_key_size_cp

0xee38,	// (0x0000ee38) aid_cmode_itu_key_size_cp

0x96ea,	// (0x000096ea) compa_mode_pane_g1

0x96f2,	// (0x000096f2) compa_mode_pane_g2

0x96fa,	// (0x000096fa) compa_mode_pane_g3

0x0002,

0xb4f9,	// (0x0000b4f9) compa_mode_pane_g

0xee42,	// (0x0000ee42) main_comp_mode_itu_pane_cp

0xee4a,	// (0x0000ee4a) main_comp_mode_rocker_pane_cp

0xee52,	// (0x0000ee52) cell_cmode_itu_pane_cp_ParamLimits

0xee52,	// (0x0000ee52) cell_cmode_itu_pane_cp

0xee67,	// (0x0000ee67) cell_cmode_rocker_pane_cp_ParamLimits

0xee67,	// (0x0000ee67) cell_cmode_rocker_pane_cp

0x13c2,	// (0x000013c2) bg_button_pane_cp06_cp_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane_cp06_cp

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_cp

0x66e1,	// (0x000066e1) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xee79,	// (0x0000ee79) cell_cmode_itu_pane_g1_cp

0xee82,	// (0x0000ee82) cell_cmode_itu_pane_t1_cp

0xee82,	// (0x0000ee82) cell_cmode_itu_pane_t2_cp

0xd50d,	// (0x0000d50d) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a3b,	// (0x00000a3b) heading_pane_cp3_ParamLimits

0x0a47,	// (0x00000a47) listscroll_popup_graphic_pane_ParamLimits

0x674b,	// (0x0000674b) fep_hwr_aid_pane_ParamLimits

0x8546,	// (0x00008546) aid_touch_sctrl_top_ParamLimits

0x8553,	// (0x00008553) sctrl_sk_top_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) sctrl_sk_top_pane_g2_ParamLimits

0xb42f,	// (0x0000b42f) sctrl_sk_top_pane_g_ParamLimits

0x8560,	// (0x00008560) sctrl_sk_top_pane_t1_ParamLimits

0x8546,	// (0x00008546) aid_touch_sctrl_bottom_ParamLimits

0x8560,	// (0x00008560) sctrl_sk_bottom_pane_t1_ParamLimits

0x87ac,	// (0x000087ac) aid_area_touch_clock

0xe8e9,	// (0x0000e8e9) aid_vkb2_area_top_pane_cell_ParamLimits

0xe8e9,	// (0x0000e8e9) aid_vkb2_area_top_pane_cell

0xe994,	// (0x0000e994) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe994,	// (0x0000e994) aid_vkb2_area_bottom_pane_cell

0x90fd,	// (0x000090fd) popup_char_count_window

0x9747,	// (0x00009747) popup_char_count_window_g1

0x9750,	// (0x00009750) popup_char_count_window_g2

0x9759,	// (0x00009759) popup_char_count_window_g3

0x0002,

0xb500,	// (0x0000b500) popup_char_count_window_g

0x9762,	// (0x00009762) popup_char_count_window_t1

0x8d5b,	// (0x00008d5b) popup_fep_char_preview_window_ParamLimits

0x8d5b,	// (0x00008d5b) popup_fep_char_preview_window

0xe909,	// (0x0000e909) vkb2_top_candi_pane_ParamLimits

0xe909,	// (0x0000e909) vkb2_top_candi_pane

0xee90,	// (0x0000ee90) cell_vkb2_top_candi_pane_ParamLimits

0xee90,	// (0x0000ee90) cell_vkb2_top_candi_pane

0x3f97,	// (0x00003f97) bg_popup_fep_char_preview_window_ParamLimits

0x3f97,	// (0x00003f97) bg_popup_fep_char_preview_window

0x97bd,	// (0x000097bd) popup_fep_char_preview_window_t1_ParamLimits

0x97bd,	// (0x000097bd) popup_fep_char_preview_window_t1

0x97f7,	// (0x000097f7) bg_popup_fep_char_preview_window_g1

0x97ff,	// (0x000097ff) bg_popup_fep_char_preview_window_g2

0x9807,	// (0x00009807) bg_popup_fep_char_preview_window_g3

0x980f,	// (0x0000980f) bg_popup_fep_char_preview_window_g4

0x9817,	// (0x00009817) bg_popup_fep_char_preview_window_g5

0x981f,	// (0x0000981f) bg_popup_fep_char_preview_window_g6

0x9827,	// (0x00009827) bg_popup_fep_char_preview_window_g7

0x982f,	// (0x0000982f) bg_popup_fep_char_preview_window_g8

0x9837,	// (0x00009837) bg_popup_fep_char_preview_window_g9

0x0008,

0xb507,	// (0x0000b507) bg_popup_fep_char_preview_window_g

0x6b73,	// (0x00006b73) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) cell_vkb2_top_candi_pane_g1

0x6ede,	// (0x00006ede) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ede,	// (0x00006ede) cell_vkb2_top_candi_pane_g2

0x6eff,	// (0x00006eff) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6eff,	// (0x00006eff) cell_vkb2_top_candi_pane_g3

0x983f,	// (0x0000983f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x983f,	// (0x0000983f) cell_vkb2_top_candi_pane_g4

0x9860,	// (0x00009860) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9860,	// (0x00009860) cell_vkb2_top_candi_pane_g5

0x8640,	// (0x00008640) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8640,	// (0x00008640) cell_vkb2_top_candi_pane_g6

0x0005,

0xb51a,	// (0x0000b51a) cell_vkb2_top_candi_pane_g_ParamLimits

0xb51a,	// (0x0000b51a) cell_vkb2_top_candi_pane_g

0x9881,	// (0x00009881) cell_vkb2_top_candi_pane_t1

0x4e76,	// (0x00004e76) aid_size_touch_slider_mark_ParamLimits

0x4e76,	// (0x00004e76) aid_size_touch_slider_mark

0xeba0,	// (0x0000eba0) grid_graphic2_catg_pane_ParamLimits

0xeba0,	// (0x0000eba0) grid_graphic2_catg_pane

0xec5c,	// (0x0000ec5c) popup_grid_graphic2_window_t1_ParamLimits

0xec5c,	// (0x0000ec5c) popup_grid_graphic2_window_t1

0xec72,	// (0x0000ec72) popup_grid_graphic2_window_t2_ParamLimits

0xec72,	// (0x0000ec72) popup_grid_graphic2_window_t2

0x0001,

0xf630,	// (0x0000f630) popup_grid_graphic2_window_t_ParamLimits

0xf630,	// (0x0000f630) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xee0a,	// (0x0000ee0a) cell_graphic2_control_pane_g1_ParamLimits

0xeef6,	// (0x0000eef6) cell_graphic2_catg_pane_ParamLimits

0xeef6,	// (0x0000eef6) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xef08,	// (0x0000ef08) cell_graphic2_catg_pane_g1

0x8778,	// (0x00008778) cell_tb_ext_pane_t1_ParamLimits

0x919b,	// (0x0000919b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x919b,	// (0x0000919b) vkb2_top_cell_right_narrow_pane

0x91b3,	// (0x000091b3) vkb2_top_cell_right_wide_pane_ParamLimits

0x91b3,	// (0x000091b3) vkb2_top_cell_right_wide_pane

0x673d,	// (0x0000673d) bg_vkb2_func_pane_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_func_pane

0x9224,	// (0x00009224) vkb2_top_cell_left_pane_g1_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp03

0x9299,	// (0x00009299) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3719,	// (0x00003719) bg_vkb2_func_pane_g1

0x3721,	// (0x00003721) bg_vkb2_func_pane_g2

0x3731,	// (0x00003731) bg_vkb2_func_pane_g3

0x3729,	// (0x00003729) bg_vkb2_func_pane_g4

0x3739,	// (0x00003739) bg_vkb2_func_pane_g5

0x3741,	// (0x00003741) bg_vkb2_func_pane_g6

0x3749,	// (0x00003749) bg_vkb2_func_pane_g7

0x3751,	// (0x00003751) bg_vkb2_func_pane_g8

0x3711,	// (0x00003711) bg_vkb2_func_pane_g9

0x0008,

0xb527,	// (0x0000b527) bg_vkb2_func_pane_g

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp01

0x9224,	// (0x00009224) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9224,	// (0x00009224) vkb2_top_cell_right_wide_pane_g1

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp02

0x9299,	// (0x00009299) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9299,	// (0x00009299) vkb2_top_cell_right_narrow_pane_g1

0xe05c,	// (0x0000e05c) aid_touch_area_decrease_ParamLimits

0xe05c,	// (0x0000e05c) aid_touch_area_decrease

0xe096,	// (0x0000e096) aid_touch_area_increase_ParamLimits

0xe096,	// (0x0000e096) aid_touch_area_increase

0xe0be,	// (0x0000e0be) aid_touch_area_mute_ParamLimits

0xe0be,	// (0x0000e0be) aid_touch_area_mute

0xe0e6,	// (0x0000e0e6) aid_touch_area_slider_ParamLimits

0xe0e6,	// (0x0000e0e6) aid_touch_area_slider

0xe126,	// (0x0000e126) popup_slider_window_g4_ParamLimits

0xe126,	// (0x0000e126) popup_slider_window_g4

0xe14e,	// (0x0000e14e) popup_slider_window_g5_ParamLimits

0xe14e,	// (0x0000e14e) popup_slider_window_g5

0xe182,	// (0x0000e182) popup_slider_window_g6_ParamLimits

0xe182,	// (0x0000e182) popup_slider_window_g6

0x8485,	// (0x00008485) popup_slider_window_t2_ParamLimits

0x8485,	// (0x00008485) popup_slider_window_t2

0x0001,

0xb423,	// (0x0000b423) popup_slider_window_t_ParamLimits

0xb423,	// (0x0000b423) popup_slider_window_t

0xe19e,	// (0x0000e19e) slider_pane_ParamLimits

0xe19e,	// (0x0000e19e) slider_pane

0x98bb,	// (0x000098bb) slider_pane_g1_ParamLimits

0x98bb,	// (0x000098bb) slider_pane_g1

0x98cf,	// (0x000098cf) slider_pane_g2_ParamLimits

0x98cf,	// (0x000098cf) slider_pane_g2

0x98e5,	// (0x000098e5) slider_pane_g3_ParamLimits

0x98e5,	// (0x000098e5) slider_pane_g3

0x0003,

0xb53a,	// (0x0000b53a) slider_pane_g_ParamLimits

0xb53a,	// (0x0000b53a) slider_pane_g

0xcc75,	// (0x0000cc75) popup_tb_float_extension_window_ParamLimits

0xcc75,	// (0x0000cc75) popup_tb_float_extension_window

0x9911,	// (0x00009911) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x991d,	// (0x0000991d) grid_tb_float_ext_pane

0x9927,	// (0x00009927) cell_tb_float_ext_pane_ParamLimits

0x9927,	// (0x00009927) cell_tb_float_ext_pane

0x9941,	// (0x00009941) cell_tb_float_ext_pane_g1

0x994a,	// (0x0000994a) grid_highlight_pane_cp12

0xd921,	// (0x0000d921) cell_last_hwr_side_pane_ParamLimits

0xd921,	// (0x0000d921) cell_last_hwr_side_pane

0x66e1,	// (0x000066e1) cell_last_hwr_side_pane_g1

0x9953,	// (0x00009953) cell_last_hwr_side_pane_g2

0x0001,

0xb543,	// (0x0000b543) cell_last_hwr_side_pane_g

0xea70,	// (0x0000ea70) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea70,	// (0x0000ea70) vkb2_area_bottom_space_btn_pane

0x6b73,	// (0x00006b73) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9378,	// (0x00009378) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9881,	// (0x00009881) cell_vkb2_top_candi_pane_t1_ParamLimits

0x995c,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x995c,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g1

0x9996,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9996,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g2

0x99cc,	// (0x000099cc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x99cc,	// (0x000099cc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb548,	// (0x0000b548) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb548,	// (0x0000b548) vkb2_area_bottom_space_btn_pane_g

0x6800,	// (0x00006800) cel_fep_hwr_func_pane_ParamLimits

0x6800,	// (0x00006800) cel_fep_hwr_func_pane

0xd8f6,	// (0x0000d8f6) cell_hwr_side_button_pane_ParamLimits

0xd8f6,	// (0x0000d8f6) cell_hwr_side_button_pane

0x87ac,	// (0x000087ac) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x87be,	// (0x000087be) uniindi_top_pane_g1_ParamLimits

0x87d4,	// (0x000087d4) uniindi_top_pane_g2_ParamLimits

0x87e0,	// (0x000087e0) uniindi_top_pane_g3_ParamLimits

0x87f1,	// (0x000087f1) uniindi_top_pane_g4_ParamLimits

0xb45b,	// (0x0000b45b) uniindi_top_pane_g_ParamLimits

0x87fe,	// (0x000087fe) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x9a16,	// (0x00009a16) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x9a16,	// (0x00009a16) cell_hwr_side_button_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) cell_hwr_side_button_pane_g1

0x34ec,	// (0x000034ec) status_pane_g4_ParamLimits

0x34ec,	// (0x000034ec) status_pane_g4

0x3506,	// (0x00003506) status_pane_t1

0x6426,	// (0x00006426) form2_midp_gauge_slider_cont_pane

0x642e,	// (0x0000642e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd84e,	// (0x0000d84e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd860,	// (0x0000d860) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf57c,	// (0x0000f57c) form2_midp_gauge_slider_pane_t_ParamLimits

0x6464,	// (0x00006464) form2_midp_slider_pane_ParamLimits

0x8d1b,	// (0x00008d1b) aid_size_cell_func_vkb2_ParamLimits

0x8d1b,	// (0x00008d1b) aid_size_cell_func_vkb2

0x98fd,	// (0x000098fd) slider_pane_g4_ParamLimits

0x98fd,	// (0x000098fd) slider_pane_g4

0xef11,	// (0x0000ef11) form2_midp_gauge_slider_pane_t2_cp01

0xef1f,	// (0x0000ef1f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef1f,	// (0x0000ef1f) form2_midp_gauge_slider_pane_t3_cp01

0x9a4f,	// (0x00009a4f) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a83,	// (0x00009a83) navi_smil_pane_g1

0x9a8b,	// (0x00009a8b) navi_smil_pane_t1

0x9a58,	// (0x00009a58) form2_midp_slider_pane_g1

0x9a61,	// (0x00009a61) form2_midp_slider_pane_g2

0x9a69,	// (0x00009a69) form2_midp_slider_pane_g3

0x9a58,	// (0x00009a58) form2_midp_slider_pane_g4

0xef3c,	// (0x0000ef3c) form2_midp_slider_pane_g5

0x0004,

0xf64a,	// (0x0000f64a) form2_midp_slider_pane_g

0x9a06,	// (0x00009a06) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9a06,	// (0x00009a06) vkb2_area_bottom_space_btn_pane_g4

0xce58,	// (0x0000ce58) lc0_navi_pane_ParamLimits

0xce58,	// (0x0000ce58) lc0_navi_pane

0xcec2,	// (0x0000cec2) lc0_stat_indi_pane_ParamLimits

0xcec2,	// (0x0000cec2) lc0_stat_indi_pane

0xced7,	// (0x0000ced7) ls0_title_pane_ParamLimits

0xced7,	// (0x0000ced7) ls0_title_pane

0x13c2,	// (0x000013c2) bg_popup_sub_pane_cp14_ParamLimits

0x8793,	// (0x00008793) list_uniindi_pane_ParamLimits

0x879f,	// (0x0000879f) uniindi_top_pane_ParamLimits

0x883b,	// (0x0000883b) list_single_uniindi_pane_g1_ParamLimits

0x884e,	// (0x0000884e) list_single_uniindi_pane_t1_ParamLimits

0xef47,	// (0x0000ef47) lc0_stat_clock_pane_ParamLimits

0xef47,	// (0x0000ef47) lc0_stat_clock_pane

0xef54,	// (0x0000ef54) lc0_stat_indi_pane_g1_ParamLimits

0xef54,	// (0x0000ef54) lc0_stat_indi_pane_g1

0xef61,	// (0x0000ef61) lc0_stat_indi_pane_g2_ParamLimits

0xef61,	// (0x0000ef61) lc0_stat_indi_pane_g2

0x0001,

0xf655,	// (0x0000f655) lc0_stat_indi_pane_g_ParamLimits

0xf655,	// (0x0000f655) lc0_stat_indi_pane_g

0xef6e,	// (0x0000ef6e) lc0_uni_indicator_pane_ParamLimits

0xef6e,	// (0x0000ef6e) lc0_uni_indicator_pane

0xef7b,	// (0x0000ef7b) ls0_title_pane_g1_ParamLimits

0xef7b,	// (0x0000ef7b) ls0_title_pane_g1

0xef8f,	// (0x0000ef8f) ls0_title_pane_t1_ParamLimits

0xef8f,	// (0x0000ef8f) ls0_title_pane_t1

0xefbd,	// (0x0000efbd) lc0_uni_indicator_pane_g1_ParamLimits

0xefbd,	// (0x0000efbd) lc0_uni_indicator_pane_g1

0x9b2b,	// (0x00009b2b) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9b39,	// (0x00009b39) ai5_sk_pane_ParamLimits

0x9b39,	// (0x00009b39) ai5_sk_pane

0xefe4,	// (0x0000efe4) cell_ai5_widget_pane_ParamLimits

0xefe4,	// (0x0000efe4) cell_ai5_widget_pane

0x9c01,	// (0x00009c01) aid_size_cell_widget_grid

0x9c17,	// (0x00009c17) bg_ai5_widget_pane_ParamLimits

0x9c17,	// (0x00009c17) bg_ai5_widget_pane

0x9c8f,	// (0x00009c8f) cell_ai5_widget_pane_g2

0x9ca3,	// (0x00009ca3) cell_ai5_widget_pane_g3

0x9cbd,	// (0x00009cbd) cell_ai5_widget_pane_g4

0x9ccd,	// (0x00009ccd) cell_ai5_widget_pane_g5

0x9cdd,	// (0x00009cdd) cell_ai5_widget_pane_g6

0x9ce9,	// (0x00009ce9) cell_ai5_widget_pane_g7

0x9d31,	// (0x00009d31) cell_ai5_widget_pane_t1_ParamLimits

0x9d31,	// (0x00009d31) cell_ai5_widget_pane_t1

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t2_ParamLimits

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t2

0x9d66,	// (0x00009d66) cell_ai5_widget_pane_t3_ParamLimits

0x9d66,	// (0x00009d66) cell_ai5_widget_pane_t3

0x9d7e,	// (0x00009d7e) cell_ai5_widget_pane_t4_ParamLimits

0x9d7e,	// (0x00009d7e) cell_ai5_widget_pane_t4

0x9da4,	// (0x00009da4) cell_ai5_widget_pane_t5_ParamLimits

0x9da4,	// (0x00009da4) cell_ai5_widget_pane_t5

0x9dc4,	// (0x00009dc4) cell_ai5_widget_pane_t6_ParamLimits

0x9dc4,	// (0x00009dc4) cell_ai5_widget_pane_t6

0x9dd6,	// (0x00009dd6) cell_ai5_widget_pane_t7_ParamLimits

0x9dd6,	// (0x00009dd6) cell_ai5_widget_pane_t7

0x9def,	// (0x00009def) cell_ai5_widget_pane_t8_ParamLimits

0x9def,	// (0x00009def) cell_ai5_widget_pane_t8

0x0009,

0xb576,	// (0x0000b576) cell_ai5_widget_pane_t_ParamLimits

0xb576,	// (0x0000b576) cell_ai5_widget_pane_t

0x9e4e,	// (0x00009e4e) grid_ai5_widget_pane

0x13c2,	// (0x000013c2) highlight_cell_ai5_widget_pane_ParamLimits

0x13c2,	// (0x000013c2) highlight_cell_ai5_widget_pane

0xf04a,	// (0x0000f04a) ai5_sk_left_pane

0xf054,	// (0x0000f054) ai5_sk_middle_pane

0xf05e,	// (0x0000f05e) ai5_sk_right_pane

0x9e83,	// (0x00009e83) bg_ai5_widget_pane_g1_ParamLimits

0x9e83,	// (0x00009e83) bg_ai5_widget_pane_g1

0x9e8f,	// (0x00009e8f) bg_ai5_widget_pane_g2_ParamLimits

0x9e8f,	// (0x00009e8f) bg_ai5_widget_pane_g2

0x9e9b,	// (0x00009e9b) bg_ai5_widget_pane_g3_ParamLimits

0x9e9b,	// (0x00009e9b) bg_ai5_widget_pane_g3

0x9ea7,	// (0x00009ea7) bg_ai5_widget_pane_g4_ParamLimits

0x9ea7,	// (0x00009ea7) bg_ai5_widget_pane_g4

0x9eb3,	// (0x00009eb3) bg_ai5_widget_pane_g5_ParamLimits

0x9eb3,	// (0x00009eb3) bg_ai5_widget_pane_g5

0x9ebf,	// (0x00009ebf) bg_ai5_widget_pane_g6_ParamLimits

0x9ebf,	// (0x00009ebf) bg_ai5_widget_pane_g6

0x9ecb,	// (0x00009ecb) bg_ai5_widget_pane_g7_ParamLimits

0x9ecb,	// (0x00009ecb) bg_ai5_widget_pane_g7

0x9ed7,	// (0x00009ed7) bg_ai5_widget_pane_g8_ParamLimits

0x9ed7,	// (0x00009ed7) bg_ai5_widget_pane_g8

0x9ee3,	// (0x00009ee3) bg_ai5_widget_pane_g9_ParamLimits

0x9ee3,	// (0x00009ee3) bg_ai5_widget_pane_g9

0x0008,

0xb58b,	// (0x0000b58b) bg_ai5_widget_pane_g_ParamLimits

0xb58b,	// (0x0000b58b) bg_ai5_widget_pane_g

0x9f15,	// (0x00009f15) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f15,	// (0x00009f15) cell_shortcut_ai5_widget_pane

0x263b,	// (0x0000263b) bg_cell_shortcut_ai5_widget_pane

0x9f26,	// (0x00009f26) cell_grid_ai5_widget_pane_g1

0x263b,	// (0x0000263b) highlight_cell_shortcut_ai5_widget_pane

0x3721,	// (0x00003721) ai5_sk_left_pane_g1

0x9f2f,	// (0x00009f2f) ai5_sk_left_pane_g2

0x9f37,	// (0x00009f37) ai5_sk_left_pane_g3

0x9f3f,	// (0x00009f3f) ai5_sk_left_pane_g4

0x0003,

0xb59e,	// (0x0000b59e) ai5_sk_left_pane_g

0x9f47,	// (0x00009f47) ai5_sk_left_pane_t1

0x3719,	// (0x00003719) ai5_sk_right_pane_g1

0x9f55,	// (0x00009f55) ai5_sk_right_pane_g2

0x9f5d,	// (0x00009f5d) ai5_sk_right_pane_g3

0x9f65,	// (0x00009f65) ai5_sk_right_pane_g4

0x0003,

0xb5a7,	// (0x0000b5a7) ai5_sk_right_pane_g

0x9f6d,	// (0x00009f6d) ai5_sk_right_pane_t1

0x3719,	// (0x00003719) ai5_sk_middle_pane_g1

0x3721,	// (0x00003721) ai5_sk_middle_pane_g2

0x3739,	// (0x00003739) ai5_sk_middle_pane_g3

0x9f5d,	// (0x00009f5d) ai5_sk_middle_pane_g4

0x9f37,	// (0x00009f37) ai5_sk_middle_pane_g5

0x9f7b,	// (0x00009f7b) ai5_sk_middle_pane_g6

0xf068,	// (0x0000f068) ai5_sk_middle_pane_g7

0x0006,

0xf65a,	// (0x0000f65a) ai5_sk_middle_pane_g

0xcd44,	// (0x0000cd44) aid_touch_area_size_lc0_ParamLimits

0xcd44,	// (0x0000cd44) aid_touch_area_size_lc0

0x6f20,	// (0x00006f20) cell_hwr_candidate_pane_t1_ParamLimits

0x31c3,	// (0x000031c3) aid_touch_navi_pane

0xcfd0,	// (0x0000cfd0) status_dt_navi_pane_ParamLimits

0xcfd0,	// (0x0000cfd0) status_dt_navi_pane

0xcfe8,	// (0x0000cfe8) status_dt_sta_pane_ParamLimits

0xcfe8,	// (0x0000cfe8) status_dt_sta_pane

0xf070,	// (0x0000f070) dt_sta_controll_pane

0xf07d,	// (0x0000f07d) dt_sta_indi_pane

0xf08a,	// (0x0000f08a) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xf09c,	// (0x0000f09c) dt_sta_battery_pane

0xf0a4,	// (0x0000f0a4) dt_sta_indi_pane_g1

0x9fcd,	// (0x00009fcd) dt_sta_indi_pane_g2

0x9fd6,	// (0x00009fd6) dt_sta_indi_pane_g3

0x0002,

0xf669,	// (0x0000f669) dt_sta_indi_pane_g

0x9fdf,	// (0x00009fdf) dt_sta_signal_pane

0x13c2,	// (0x000013c2) bg_dt_sta_title_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_dt_sta_title_pane

0x9fe8,	// (0x00009fe8) dt_sta_title_pane_g1

0x9ff0,	// (0x00009ff0) dt_sta_title_pane_t1_ParamLimits

0x9ff0,	// (0x00009ff0) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xf0ad,	// (0x0000f0ad) dt_sta_controll_pane_g1

0xa00e,	// (0x0000a00e) bg_dt_sta_title_pane_g1

0xa017,	// (0x0000a017) bg_dt_sta_title_pane_g2

0xa020,	// (0x0000a020) bg_dt_sta_title_pane_g3

0x0002,

0xb5c6,	// (0x0000b5c6) bg_dt_sta_title_pane_g

0x66e1,	// (0x000066e1) bg_dt_sta_indi_pane_g1

0xa029,	// (0x0000a029) dt_sta_signal_pane_g1

0xa031,	// (0x0000a031) dt_sta_signal_pane_g2

0x0001,

0xb5cd,	// (0x0000b5cd) dt_sta_signal_pane_g

0xa039,	// (0x0000a039) dt_sta_battery_pane_g1

0xa042,	// (0x0000a042) dt_sta_battery_pane_t1

0x66e1,	// (0x000066e1) bg_dt_sta_control_pane_g1

0x1f6a,	// (0x00001f6a) fep_china_uni_eep_pane

0x1f72,	// (0x00001f72) fep_china_uni_entry_pane_ParamLimits

0x1f82,	// (0x00001f82) popup_fep_china_uni_window_g1_ParamLimits

0x1f92,	// (0x00001f92) popup_fep_china_uni_window_g2_ParamLimits

0x1f92,	// (0x00001f92) popup_fep_china_uni_window_g2

0x0001,

0xae54,	// (0x0000ae54) popup_fep_china_uni_window_g_ParamLimits

0xae54,	// (0x0000ae54) popup_fep_china_uni_window_g

0xa051,	// (0x0000a051) fep_china_uni_eep_pane_g1

0xa059,	// (0x0000a059) fep_china_uni_eep_pane_t1

0x9a7a,	// (0x00009a7a) aid_touch_area_size_smil_player

0x3313,	// (0x00003313) lc0_clock_pane

0x34fa,	// (0x000034fa) status_pane_g5_ParamLimits

0x34fa,	// (0x000034fa) status_pane_g5

0xc7f7,	// (0x0000c7f7) popup_keymap_window

0x34b8,	// (0x000034b8) status_icon_pane

0x9ca3,	// (0x00009ca3) cell_ai5_widget_pane_g3_ParamLimits

0x9cbd,	// (0x00009cbd) cell_ai5_widget_pane_g4_ParamLimits

0x9ccd,	// (0x00009ccd) cell_ai5_widget_pane_g5_ParamLimits

0x9cf5,	// (0x00009cf5) cell_ai5_widget_pane_g8_ParamLimits

0x9cf5,	// (0x00009cf5) cell_ai5_widget_pane_g8

0x9d09,	// (0x00009d09) cell_ai5_widget_pane_g9_ParamLimits

0x9d09,	// (0x00009d09) cell_ai5_widget_pane_g9

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_g10_ParamLimits

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_g10

0xa068,	// (0x0000a068) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0xa070,	// (0x0000a070) popup_keymap_window_t1

0xc505,	// (0x0000c505) control_pane_g6_ParamLimits

0xc505,	// (0x0000c505) control_pane_g6

0xc512,	// (0x0000c512) control_pane_g7_ParamLimits

0xc512,	// (0x0000c512) control_pane_g7

0xc51f,	// (0x0000c51f) control_pane_g8_ParamLimits

0xc51f,	// (0x0000c51f) control_pane_g8

0xf070,	// (0x0000f070) dt_sta_controll_pane_ParamLimits

0xf07d,	// (0x0000f07d) dt_sta_indi_pane_ParamLimits

0xf08a,	// (0x0000f08a) dt_sta_title_pane_ParamLimits

0x0d7f,	// (0x00000d7f) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb786,	// (0x0000b786) popup_sk_window

0x3f97,	// (0x00003f97) bg_popup_sub_pane_cp28_ParamLimits

0x3f97,	// (0x00003f97) bg_popup_sub_pane_cp28

0xa07e,	// (0x0000a07e) popup_discreet_window_g1_ParamLimits

0xa07e,	// (0x0000a07e) popup_discreet_window_g1

0xa09e,	// (0x0000a09e) popup_discreet_window_t1_ParamLimits

0xa09e,	// (0x0000a09e) popup_discreet_window_t1

0xa0bc,	// (0x0000a0bc) popup_discreet_window_t2_ParamLimits

0xa0bc,	// (0x0000a0bc) popup_discreet_window_t2

0x0002,

0xb5d2,	// (0x0000b5d2) popup_discreet_window_t_ParamLimits

0xb5d2,	// (0x0000b5d2) popup_discreet_window_t

0xa10e,	// (0x0000a10e) popup_sk_window_g1

0xa118,	// (0x0000a118) popup_sk_window_g2

0x0001,

0xb5d9,	// (0x0000b5d9) popup_sk_window_g

0xa120,	// (0x0000a120) popup_sk_window_t1

0xa12e,	// (0x0000a12e) popup_sk_window_t1_copy1

0x9c8f,	// (0x00009c8f) cell_ai5_widget_pane_g2_ParamLimits

0x9e01,	// (0x00009e01) cell_ai5_widget_pane_t9_ParamLimits

0x9e01,	// (0x00009e01) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xf0b6,	// (0x0000f0b6) aid_fshwr2_btn_pane

0xf0ca,	// (0x0000f0ca) aid_fshwr2_syb_pane

0xf0de,	// (0x0000f0de) aid_fshwr2_txt_pane

0xf0ee,	// (0x0000f0ee) fshwr2_func_candi_pane

0xf10e,	// (0x0000f10e) fshwr2_hwr_syb_pane

0xf130,	// (0x0000f130) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa1c8,	// (0x0000a1c8) fshwr2_icf_pane_t1_ParamLimits

0xa1c8,	// (0x0000a1c8) fshwr2_icf_pane_t1

0x1d81,	// (0x00001d81) fshwr2_func_candi_pane_g1

0xf160,	// (0x0000f160) fshwr2_func_candi_row_pane_ParamLimits

0xf160,	// (0x0000f160) fshwr2_func_candi_row_pane

0xf183,	// (0x0000f183) cell_fshwr2_syb_pane_ParamLimits

0xf183,	// (0x0000f183) cell_fshwr2_syb_pane

0x9a16,	// (0x00009a16) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf1a9,	// (0x0000f1a9) fshwr2_func_candi_cell_pane_ParamLimits

0xf1a9,	// (0x0000f1a9) fshwr2_func_candi_cell_pane

0xf1f4,	// (0x0000f1f4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf1f4,	// (0x0000f1f4) fshwr2_func_candi_cell_bg_pane

0xf200,	// (0x0000f200) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf200,	// (0x0000f200) fshwr2_func_candi_cell_pane_g1

0xf237,	// (0x0000f237) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf237,	// (0x0000f237) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa2b8,	// (0x0000a2b8) cell_fshwr2_syb_bg_pane

0xf252,	// (0x0000f252) cell_fshwr2_syb_bg_pane_g1

0xf265,	// (0x0000f265) cell_fshwr2_syb_bg_pane_t1

0x13c2,	// (0x000013c2) main_tmo_pane

0xd32e,	// (0x0000d32e) uni_indicator_pane_g1_ParamLimits

0xd343,	// (0x0000d343) uni_indicator_pane_g2_ParamLimits

0xd359,	// (0x0000d359) uni_indicator_pane_g3_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g4_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g4

0x4c52,	// (0x00004c52) uni_indicator_pane_g5_ParamLimits

0x4c52,	// (0x00004c52) uni_indicator_pane_g5

0x4c52,	// (0x00004c52) uni_indicator_pane_g6_ParamLimits

0x4c52,	// (0x00004c52) uni_indicator_pane_g6

0xf523,	// (0x0000f523) uni_indicator_pane_g_ParamLimits

0xe038,	// (0x0000e038) popup_tmo_note_window_ParamLimits

0xe038,	// (0x0000e038) popup_tmo_note_window

0x13c2,	// (0x000013c2) fshwr2_bg_pane

0xf228,	// (0x0000f228) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf228,	// (0x0000f228) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf670,	// (0x0000f670) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf670,	// (0x0000f670) fshwr2_func_candi_cell_pane_g

0x66e1,	// (0x000066e1) bg_popup_window_pane_cp01

0xa2ee,	// (0x0000a2ee) bg_popup_window_pane_g1_cp01

0xa2f7,	// (0x0000a2f7) bg_popup_window_pane_cp22_ParamLimits

0xa2f7,	// (0x0000a2f7) bg_popup_window_pane_cp22

0xa305,	// (0x0000a305) listscroll_tmo_link_pane_ParamLimits

0xa305,	// (0x0000a305) listscroll_tmo_link_pane

0xa345,	// (0x0000a345) popup_tmo_note_window_g1_ParamLimits

0xa345,	// (0x0000a345) popup_tmo_note_window_g1

0xa352,	// (0x0000a352) tmo_note_info_pane_ParamLimits

0xa352,	// (0x0000a352) tmo_note_info_pane

0xf27b,	// (0x0000f27b) list_tmo_note_info_pane_g1_ParamLimits

0xf27b,	// (0x0000f27b) list_tmo_note_info_pane_g1

0xa383,	// (0x0000a383) list_tmo_note_info_pane_g2_ParamLimits

0xa383,	// (0x0000a383) list_tmo_note_info_pane_g2

0x0001,

0xf675,	// (0x0000f675) list_tmo_note_info_pane_g_ParamLimits

0xf675,	// (0x0000f675) list_tmo_note_info_pane_g

0xa39f,	// (0x0000a39f) list_tmo_note_info_text_pane_ParamLimits

0xa39f,	// (0x0000a39f) list_tmo_note_info_text_pane

0xa420,	// (0x0000a420) list_tmo_link_pane

0xa42d,	// (0x0000a42d) scroll_pane_cp20

0xa43a,	// (0x0000a43a) list_single_tmo_link_pane_ParamLimits

0xa43a,	// (0x0000a43a) list_single_tmo_link_pane

0xa44a,	// (0x0000a44a) list_single_tmo_link_pane_t1

0xa458,	// (0x0000a458) list_tmo_note_info_text_pane_t1_ParamLimits

0xa458,	// (0x0000a458) list_tmo_note_info_text_pane_t1

0xc0c9,	// (0x0000c0c9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc0c9,	// (0x0000c0c9) aid_size_touch_scroll_bar_cp01

0xbff9,	// (0x0000bff9) aid_size_touch_slider_marker

0xb776,	// (0x0000b776) popup_settings_window_ParamLimits

0xb776,	// (0x0000b776) popup_settings_window

0x2be4,	// (0x00002be4) popup_candi_list_indi_window

0x31c3,	// (0x000031c3) aid_touch_navi_pane_ParamLimits

0x851a,	// (0x0000851a) rs_clock_indi_pane

0x8523,	// (0x00008523) sctrl_sk_bottom_pane_ParamLimits

0x8534,	// (0x00008534) sctrl_sk_top_pane_ParamLimits

0x8d75,	// (0x00008d75) popup_fep_tooltip_window

0x9c01,	// (0x00009c01) aid_size_cell_widget_grid_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g1_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g1

0x9cdd,	// (0x00009cdd) cell_ai5_widget_pane_g6_ParamLimits

0x9ce9,	// (0x00009ce9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb561,	// (0x0000b561) cell_ai5_widget_pane_g_ParamLimits

0xb561,	// (0x0000b561) cell_ai5_widget_pane_g

0x9e30,	// (0x00009e30) cell_ai5_widget_pane_t10_ParamLimits

0x9e30,	// (0x00009e30) cell_ai5_widget_pane_t10

0x9e4e,	// (0x00009e4e) grid_ai5_widget_pane_ParamLimits

0x9eef,	// (0x00009eef) cell_contacts_ai5_widget_pane_ParamLimits

0x9eef,	// (0x00009eef) cell_contacts_ai5_widget_pane

0xa0d1,	// (0x0000a0d1) popup_discreet_window_t3_ParamLimits

0xa0d1,	// (0x0000a0d1) popup_discreet_window_t3

0xf14c,	// (0x0000f14c) popup_fshwr2_char_preview_window_ParamLimits

0xf14c,	// (0x0000f14c) popup_fshwr2_char_preview_window

0xf292,	// (0x0000f292) tmo_note_info_pane_t1

0xf2a7,	// (0x0000f2a7) tmo_note_info_pane_t2

0xf2be,	// (0x0000f2be) tmo_note_info_pane_t3

0xa3fc,	// (0x0000a3fc) tmo_note_info_pane_t4

0xa40e,	// (0x0000a40e) tmo_note_info_pane_t5

0x0004,

0xf67a,	// (0x0000f67a) tmo_note_info_pane_t

0xa420,	// (0x0000a420) list_tmo_link_pane_ParamLimits

0xa42d,	// (0x0000a42d) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa471,	// (0x0000a471) popup_fshwr2_char_preview_window_t1

0xa47f,	// (0x0000a47f) popup_candi_list_indi_window_g1

0xa488,	// (0x0000a488) bg_cell_contacts_ai5_widget_pane

0xa494,	// (0x0000a494) cell_contacts_ai5_widget_pane_g1

0x71ec,	// (0x000071ec) cell_contacts_ai5_widget_pane_g2

0xa4a9,	// (0x0000a4a9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb5f3,	// (0x0000b5f3) cell_contacts_ai5_widget_pane_g

0xa4b5,	// (0x0000a4b5) cell_contacts_ai5_widget_pane_t1

0x13c2,	// (0x000013c2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa52c,	// (0x0000a52c) settings_container_pane

0x263b,	// (0x0000263b) listscroll_set_pane_copy1

0x5a4c,	// (0x00005a4c) scroll_pane_cp121_copy1

0x3d3c,	// (0x00003d3c) set_content_pane_copy1

0xa538,	// (0x0000a538) aid_height_set_list_copy1_ParamLimits

0xa538,	// (0x0000a538) aid_height_set_list_copy1

0x4f3a,	// (0x00004f3a) aid_size_parent_copy1_ParamLimits

0x4f3a,	// (0x00004f3a) aid_size_parent_copy1

0xa544,	// (0x0000a544) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa544,	// (0x0000a544) button_value_adjust_pane_cp6_copy1

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_copy1_ParamLimits

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_copy1

0xa558,	// (0x0000a558) list_set_pane_copy1_ParamLimits

0xa558,	// (0x0000a558) list_set_pane_copy1

0xa4c7,	// (0x0000a4c7) main_pane_set_t1_copy1_ParamLimits

0xa4c7,	// (0x0000a4c7) main_pane_set_t1_copy1

0xa501,	// (0x0000a501) main_pane_set_t2_copy1_ParamLimits

0xa501,	// (0x0000a501) main_pane_set_t2_copy1

0xa605,	// (0x0000a605) main_pane_set_t3_copy1

0xa613,	// (0x0000a613) main_pane_set_t4_copy1

0xa520,	// (0x0000a520) set_content_pane_g1_copy1_ParamLimits

0xa520,	// (0x0000a520) set_content_pane_g1_copy1

0xa621,	// (0x0000a621) setting_code_pane_copy1

0xa629,	// (0x0000a629) setting_slider_graphic_pane_copy1

0xa629,	// (0x0000a629) setting_slider_pane_copy1

0xa629,	// (0x0000a629) setting_text_pane_copy1

0xa629,	// (0x0000a629) setting_volume_pane_copy1

0xa621,	// (0x0000a621) settings_code_pane_cp2_copy1

0xa631,	// (0x0000a631) settings_code_pane_cp_copy1_ParamLimits

0xa631,	// (0x0000a631) settings_code_pane_cp_copy1

0xa645,	// (0x0000a645) volume_set_pane_copy1

0xa64d,	// (0x0000a64d) volume_set_pane_g10_copy1

0xa655,	// (0x0000a655) volume_set_pane_g1_copy1

0xa65d,	// (0x0000a65d) volume_set_pane_g2_copy1

0xa665,	// (0x0000a665) volume_set_pane_g3_copy1

0xa66d,	// (0x0000a66d) volume_set_pane_g4_copy1

0xa675,	// (0x0000a675) volume_set_pane_g5_copy1

0xa67d,	// (0x0000a67d) volume_set_pane_g6_copy1

0xa685,	// (0x0000a685) volume_set_pane_g7_copy1

0xa68d,	// (0x0000a68d) volume_set_pane_g8_copy1

0xa695,	// (0x0000a695) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa69d,	// (0x0000a69d) setting_slider_pane_t1_copy1_ParamLimits

0xa69d,	// (0x0000a69d) setting_slider_pane_t1_copy1

0xa6bb,	// (0x0000a6bb) setting_slider_pane_t2_copy1_ParamLimits

0xa6bb,	// (0x0000a6bb) setting_slider_pane_t2_copy1

0xa6d5,	// (0x0000a6d5) setting_slider_pane_t3_copy1_ParamLimits

0xa6d5,	// (0x0000a6d5) setting_slider_pane_t3_copy1

0xa6ed,	// (0x0000a6ed) slider_set_pane_copy1_ParamLimits

0xa6ed,	// (0x0000a6ed) slider_set_pane_copy1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1_copy2

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2_copy2

0xa703,	// (0x0000a703) set_opt_bg_pane_g3_copy2

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4_copy2

0x1505,	// (0x00001505) set_opt_bg_pane_g5_copy2

0x150d,	// (0x0000150d) set_opt_bg_pane_g6_copy2

0xa70d,	// (0x0000a70d) set_opt_bg_pane_g7_copy2

0xa715,	// (0x0000a715) set_opt_bg_pane_g8_copy2

0xa71f,	// (0x0000a71f) set_opt_bg_pane_g9_copy2

0xa729,	// (0x0000a729) aid_size_touch_slider_mark_copy1_ParamLimits

0xa729,	// (0x0000a729) aid_size_touch_slider_mark_copy1

0xa73d,	// (0x0000a73d) slider_set_pane_g1_copy1

0xa746,	// (0x0000a746) slider_set_pane_g2_copy1

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_copy1_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_copy1

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_copy1_ParamLimits

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_copy1

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_copy1_ParamLimits

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_copy1

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_copy1_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_copy1

0xa74e,	// (0x0000a74e) slider_set_pane_g7_copy1_ParamLimits

0xa74e,	// (0x0000a74e) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa764,	// (0x0000a764) setting_slider_graphic_pane_g1_copy1

0xa76d,	// (0x0000a76d) setting_slider_graphic_pane_t1_copy1

0xa77d,	// (0x0000a77d) setting_slider_graphic_pane_t2_copy1

0xa78d,	// (0x0000a78d) slider_set_pane_cp_copy1

0xa79d,	// (0x0000a79d) input_focus_pane_cp1_copy1

0xa7a6,	// (0x0000a7a6) list_set_text_pane_copy1

0xa7ae,	// (0x0000a7ae) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa79d,	// (0x0000a79d) input_focus_pane_cp2_copy1

0xa7ae,	// (0x0000a7ae) setting_code_pane_g1_copy1

0xa7b7,	// (0x0000a7b7) setting_code_pane_t1_copy1

0xa7c5,	// (0x0000a7c5) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2336,	// (0x00002336) list_set_graphic_pane_g1_copy1_ParamLimits

0x2336,	// (0x00002336) list_set_graphic_pane_g1_copy1

0xa7d8,	// (0x0000a7d8) list_set_graphic_pane_g2_copy1

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_copy1_ParamLimits

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_copy1

0x66e1,	// (0x000066e1) rs_clock_indi_pane_g1

0xa7e0,	// (0x0000a7e0) rs_clock_indi_pane_t1

0xa7ee,	// (0x0000a7ee) rs_indi_pane

0xa7f6,	// (0x0000a7f6) rs_indi_pane_g1

0xa7ff,	// (0x0000a7ff) rs_indi_pane_g2

0xa808,	// (0x0000a808) rs_indi_pane_g3

0x0002,

0xb5fa,	// (0x0000b5fa) rs_indi_pane_g

0x263b,	// (0x0000263b) bg_popup_preview_window_pane_cp03

0xa811,	// (0x0000a811) popup_fep_tooltip_window_t1

0x78ea,	// (0x000078ea) popup_note2_window_g2_ParamLimits

0x78ea,	// (0x000078ea) popup_note2_window_g2

0x0001,

0xb393,	// (0x0000b393) popup_note2_window_g_ParamLimits

0xb393,	// (0x0000b393) popup_note2_window_g

0x7ee0,	// (0x00007ee0) bg_popup_sub_pane_cp11_ParamLimits

0x7eed,	// (0x00007eed) cell_ai3_links_pane_g1_ParamLimits

0x7f04,	// (0x00007f04) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x254c,	// (0x0000254c) cell_graphic_popup_pane_cp2_ParamLimits

0x254c,	// (0x0000254c) cell_graphic_popup_pane_cp2

0xa81f,	// (0x0000a81f) cell_graphic_popup_pane_g1_cp2

0x0b92,	// (0x00000b92) cell_graphic_popup_pane_g2_cp2

0xa827,	// (0x0000a827) cell_graphic_popup_pane_g3_cp2

0xa82f,	// (0x0000a82f) cell_graphic_popup_pane_t2_cp2

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp3_cp2

0x1a60,	// (0x00001a60) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x13c2,	// (0x000013c2) main_tmo_pane_ParamLimits

0xe02c,	// (0x0000e02c) popup_tmo_big_image_note_window

0x9c69,	// (0x00009c69) cell_ai5_widget_list_pane

0x9c71,	// (0x00009c71) cell_ai5_widget_lrg_icon_pane

0xf292,	// (0x0000f292) tmo_note_info_pane_t1_ParamLimits

0xf2a7,	// (0x0000f2a7) tmo_note_info_pane_t2_ParamLimits

0xf2be,	// (0x0000f2be) tmo_note_info_pane_t3_ParamLimits

0xa3fc,	// (0x0000a3fc) tmo_note_info_pane_t4_ParamLimits

0xa40e,	// (0x0000a40e) tmo_note_info_pane_t5_ParamLimits

0xf67a,	// (0x0000f67a) tmo_note_info_pane_t_ParamLimits

0xa52c,	// (0x0000a52c) settings_container_pane_ParamLimits

0xa795,	// (0x0000a795) indicator_popup_pane_cp5

0xa795,	// (0x0000a795) indicator_popup_pane_cp6

0xa7c5,	// (0x0000a7c5) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa83d,	// (0x0000a83d) popup_tmo_big_image_note_window_g1

0xa847,	// (0x0000a847) popup_tmo_big_image_note_window_t1

0xa857,	// (0x0000a857) popup_tmo_big_image_note_window_t2

0xa867,	// (0x0000a867) popup_tmo_big_image_note_window_t3

0x0002,

0xb601,	// (0x0000b601) popup_tmo_big_image_note_window_t

0x66e1,	// (0x000066e1) cell_ai5_widget_lrg_icon_pane_g1

0xa877,	// (0x0000a877) cell_ai5_widget_lrg_icon_pane_t1

0xa885,	// (0x0000a885) cell_ai5_widget_list_row_pane_ParamLimits

0xa885,	// (0x0000a885) cell_ai5_widget_list_row_pane

0xa89c,	// (0x0000a89c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa89c,	// (0x0000a89c) cell_ai5_widget_list_row_pane_g1

0xa8a9,	// (0x0000a8a9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8a9,	// (0x0000a8a9) cell_ai5_widget_list_row_pane_t1

0xa8da,	// (0x0000a8da) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa8da,	// (0x0000a8da) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb608,	// (0x0000b608) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb608,	// (0x0000b608) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa922,	// (0x0000a922) popup_fep_char_pre_window

0xa92a,	// (0x0000a92a) popup_fep_ituss_window

0xf2e2,	// (0x0000f2e2) popup_fep_vkbss_window

0xf2ef,	// (0x0000f2ef) grid_vkbss_keypad_pane_ParamLimits

0xf2ef,	// (0x0000f2ef) grid_vkbss_keypad_pane

0xa990,	// (0x0000a990) ituss_keypad_pane

0xa9ab,	// (0x0000a9ab) aid_vkbss_key_offset_ParamLimits

0xa9ab,	// (0x0000a9ab) aid_vkbss_key_offset

0xf2ff,	// (0x0000f2ff) cell_vkbss_key_pane_ParamLimits

0xf2ff,	// (0x0000f2ff) cell_vkbss_key_pane

0xa9cd,	// (0x0000a9cd) bg_cell_vkbss_key_g1_ParamLimits

0xa9cd,	// (0x0000a9cd) bg_cell_vkbss_key_g1

0xf315,	// (0x0000f315) cell_vkbss_key_3p_pane_ParamLimits

0xf315,	// (0x0000f315) cell_vkbss_key_3p_pane

0xf32f,	// (0x0000f32f) cell_vkbss_key_g1_ParamLimits

0xf32f,	// (0x0000f32f) cell_vkbss_key_g1

0xf349,	// (0x0000f349) cell_vkbss_key_t1_ParamLimits

0xf349,	// (0x0000f349) cell_vkbss_key_t1

0xaa2c,	// (0x0000aa2c) cell_ituss_key_pane_ParamLimits

0xaa2c,	// (0x0000aa2c) cell_ituss_key_pane

0xaa3d,	// (0x0000aa3d) bg_cell_ituss_key_g1_ParamLimits

0xaa3d,	// (0x0000aa3d) bg_cell_ituss_key_g1

0xaa49,	// (0x0000aa49) cell_ituss_key_pane_g1_ParamLimits

0xaa49,	// (0x0000aa49) cell_ituss_key_pane_g1

0xaa63,	// (0x0000aa63) cell_ituss_key_pane_g2_ParamLimits

0xaa63,	// (0x0000aa63) cell_ituss_key_pane_g2

0x0002,

0xb60f,	// (0x0000b60f) cell_ituss_key_pane_g_ParamLimits

0xb60f,	// (0x0000b60f) cell_ituss_key_pane_g

0xaaa1,	// (0x0000aaa1) cell_ituss_key_t1_ParamLimits

0xaaa1,	// (0x0000aaa1) cell_ituss_key_t1

0xaadb,	// (0x0000aadb) cell_ituss_key_t2_ParamLimits

0xaadb,	// (0x0000aadb) cell_ituss_key_t2

0xab0c,	// (0x0000ab0c) cell_ituss_key_t3_ParamLimits

0xab0c,	// (0x0000ab0c) cell_ituss_key_t3

0xaadb,	// (0x0000aadb) cell_ituss_key_t4_ParamLimits

0xaadb,	// (0x0000aadb) cell_ituss_key_t4

0x0004,

0xb616,	// (0x0000b616) cell_ituss_key_t_ParamLimits

0xb616,	// (0x0000b616) cell_ituss_key_t

0xab4f,	// (0x0000ab4f) cell_vkbss_key_3p_pane_g1

0xab57,	// (0x0000ab57) cell_vkbss_key_3p_pane_g2

0xab5f,	// (0x0000ab5f) cell_vkbss_key_3p_pane_g3

0x0002,

0xb621,	// (0x0000b621) cell_vkbss_key_3p_pane_g

0x263b,	// (0x0000263b) bg_popup_fep_char_preview_window_cp02

0xab67,	// (0x0000ab67) popup_fep_char_pre_window_t1

0xf040,	// (0x0000f040) main_ai5_sk_pane

0xa488,	// (0x0000a488) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa494,	// (0x0000a494) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71ec,	// (0x000071ec) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa4a9,	// (0x0000a4a9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb5f3,	// (0x0000b5f3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa4b5,	// (0x0000a4b5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf374,	// (0x0000f374) main_ai5_sk_pane_g1

0x3dd0,	// (0x00003dd0) popup_query_code_window_g1

0xf2d3,	// (0x0000f2d3) popup_fep_vkb_icf_pane

0xa96a,	// (0x0000a96a) popup_fep_vtchi_icf_pane

0xab7e,	// (0x0000ab7e) bg_icf_pane

0xab8a,	// (0x0000ab8a) list_vkb_icf_pane

0xab99,	// (0x0000ab99) bg_icf_pane_cp01

0xabac,	// (0x0000abac) vtchi_icf_list_pane

0xf37d,	// (0x0000f37d) list_vkb_icf_pane_t1_ParamLimits

0xf37d,	// (0x0000f37d) list_vkb_icf_pane_t1

0xabdd,	// (0x0000abdd) vtchi_icf_list_pane_t1_ParamLimits

0xabdd,	// (0x0000abdd) vtchi_icf_list_pane_t1

0xa92a,	// (0x0000a92a) popup_fep_ituss_window_ParamLimits

0xa96a,	// (0x0000a96a) popup_fep_vtchi_icf_pane_ParamLimits

0xa990,	// (0x0000a990) ituss_keypad_pane_ParamLimits

0xa99f,	// (0x0000a99f) ituss_sks_pane

0xab7e,	// (0x0000ab7e) bg_icf_pane_ParamLimits

0xa902,	// (0x0000a902) icf_edit_indi_pane_ParamLimits

0xa902,	// (0x0000a902) icf_edit_indi_pane

0xab8a,	// (0x0000ab8a) list_vkb_icf_pane_ParamLimits

0xab99,	// (0x0000ab99) bg_icf_pane_cp01_ParamLimits

0xa915,	// (0x0000a915) icf_edit_indi_pane_cp01_ParamLimits

0xa915,	// (0x0000a915) icf_edit_indi_pane_cp01

0xabb4,	// (0x0000abb4) vtchi_query_pane

0x9a16,	// (0x00009a16) icf_edit_indi_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) icf_edit_indi_pane_g1

0xf393,	// (0x0000f393) icf_edit_indi_pane_g2_ParamLimits

0xf393,	// (0x0000f393) icf_edit_indi_pane_g2

0x0001,

0xf685,	// (0x0000f685) icf_edit_indi_pane_g_ParamLimits

0xf685,	// (0x0000f685) icf_edit_indi_pane_g

0xf3a5,	// (0x0000f3a5) icf_edit_indi_pane_t1

0xabf7,	// (0x0000abf7) bg_input_focus_pane_cp042

0x0d76,	// (0x00000d76) vtchi_button_pane

0xac00,	// (0x0000ac00) vtchi_query_pane_t1

0xac0e,	// (0x0000ac0e) vtchi_query_pane_t2

0xac1c,	// (0x0000ac1c) vtchi_query_pane_t3

0x0002,

0xb628,	// (0x0000b628) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xac2a,	// (0x0000ac2a) vtchi_button_pane_g1

0xac32,	// (0x0000ac32) ituss_sks_pane_g1

0xac3d,	// (0x0000ac3d) ituss_sks_pane_g2

0x0001,

0xb62f,	// (0x0000b62f) ituss_sks_pane_g

0xac45,	// (0x0000ac45) ituss_sks_pane_t1

0xac53,	// (0x0000ac53) ituss_sks_pane_t2

0x0001,

0xb634,	// (0x0000b634) ituss_sks_pane_t

0x60cc,	// (0x000060cc) indicator_nsta_pane_cp_g1

0x60d4,	// (0x000060d4) indicator_nsta_pane_cp_g2

0x60dc,	// (0x000060dc) indicator_nsta_pane_cp_g3

0x60cc,	// (0x000060cc) indicator_nsta_pane_cp_g4

0x60d4,	// (0x000060d4) indicator_nsta_pane_cp_g5

0x60dc,	// (0x000060dc) indicator_nsta_pane_cp_g6

0x0005,

0xb1dd,	// (0x0000b1dd) indicator_nsta_pane_cp_g

0xedec,	// (0x0000edec) cell_graphic2_pane_t2_ParamLimits

0xedec,	// (0x0000edec) cell_graphic2_pane_t2

0x0001,

0xf645,	// (0x0000f645) cell_graphic2_pane_t_ParamLimits

0xf645,	// (0x0000f645) cell_graphic2_pane_t

0xee20,	// (0x0000ee20) cell_graphic2_control_pane_t1

0xc27d,	// (0x0000c27d) signal_pane_g3_ParamLimits

0xc27d,	// (0x0000c27d) signal_pane_g3

0xc291,	// (0x0000c291) signal_pane_g4_ParamLimits

0xc291,	// (0x0000c291) signal_pane_g4

0xa8ec,	// (0x0000a8ec) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa8ec,	// (0x0000a8ec) cell_ai5_widget_list_row_pane_t3

0xaa8f,	// (0x0000aa8f) cell_ituss_key_pane_t1_ParamLimits

0xaa8f,	// (0x0000aa8f) cell_ituss_key_pane_t1

0x39d8,	// (0x000039d8) form_field_data_wide_pane_vc_t2_ParamLimits

0x39d8,	// (0x000039d8) form_field_data_wide_pane_vc_t2

0x39ec,	// (0x000039ec) form_field_data_wide_pane_vc_t3_ParamLimits

0x39ec,	// (0x000039ec) form_field_data_wide_pane_vc_t3

0x0002,

0xaf39,	// (0x0000af39) form_field_data_wide_pane_vc_t_ParamLimits

0xaf39,	// (0x0000af39) form_field_data_wide_pane_vc_t

0x5d93,	// (0x00005d93) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d93,	// (0x00005d93) form_field_slider_wide_pane_vc_t3

0x5e71,	// (0x00005e71) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e71,	// (0x00005e71) form_field_popup_wide_pane_vc_t2

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc_t3

0x0002,

0xb1cc,	// (0x0000b1cc) form_field_popup_wide_pane_vc_t_ParamLimits

0xb1cc,	// (0x0000b1cc) form_field_popup_wide_pane_vc_t

0xf0b6,	// (0x0000f0b6) aid_fshwr2_btn_pane_ParamLimits

0xf0ca,	// (0x0000f0ca) aid_fshwr2_syb_pane_ParamLimits

0xf0de,	// (0x0000f0de) aid_fshwr2_txt_pane_ParamLimits

0x13c2,	// (0x000013c2) fshwr2_bg_pane_ParamLimits

0xf0ee,	// (0x0000f0ee) fshwr2_func_candi_pane_ParamLimits

0xf10e,	// (0x0000f10e) fshwr2_hwr_syb_pane_ParamLimits

0xf130,	// (0x0000f130) fshwr2_icf_pane_ParamLimits

0x5cf9,	// (0x00005cf9) list_double_graphic_pane_vc_g4_ParamLimits

0x5cf9,	// (0x00005cf9) list_double_graphic_pane_vc_g4

0xaa83,	// (0x0000aa83) cell_ituss_key_pane_g3_ParamLimits

0xaa83,	// (0x0000aa83) cell_ituss_key_pane_g3

0xab3d,	// (0x0000ab3d) cell_ituss_key_t5_ParamLimits

0xab3d,	// (0x0000ab3d) cell_ituss_key_t5

0xf2e2,	// (0x0000f2e2) popup_fep_vkbss_window_ParamLimits

0x9bf8,	// (0x00009bf8) aid_cell_ai5_quarter

0xf3a5,	// (0x0000f3a5) icf_edit_indi_pane_t1_ParamLimits

0x08e3,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x08e3,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2

0x08f6,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x08f6,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2

0x3d78,	// (0x00003d78) aid_tch_query_popup_pane_ParamLimits

0x3d78,	// (0x00003d78) aid_tch_query_popup_pane

0x3d78,	// (0x00003d78) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3d78,	// (0x00003d78) aid_tch_query_popup_data_pane_cp1

0xa2b8,	// (0x0000a2b8) cell_fshwr2_syb_bg_pane_ParamLimits

0xf252,	// (0x0000f252) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf265,	// (0x0000f265) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2d3,	// (0x0000f2d3) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00053be3 };

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
0x4cae,	// (0x00058891) Screen

0x4cba,	// (0x0005889d) application_window_ParamLimits

0x4cba,	// (0x0005889d) application_window

0xbd26,	// (0x0005f909) screen_g1

0x4d16,	// (0x000588f9) area_bottom_pane_ParamLimits

0x4d16,	// (0x000588f9) area_bottom_pane

0x4dd6,	// (0x000589b9) area_top_pane_ParamLimits

0x4dd6,	// (0x000589b9) area_top_pane

0x4e74,	// (0x00058a57) main_pane_ParamLimits

0x4e74,	// (0x00058a57) main_pane

0xbd30,	// (0x0005f913) misc_graphics

0x85a0,	// (0x0005c183) battery_pane_ParamLimits

0x85a0,	// (0x0005c183) battery_pane

0x927e,	// (0x0005ce61) bg_status_flat_pane_g8

0x9286,	// (0x0005ce69) bg_status_flat_pane_g9

0x8662,	// (0x0005c245) context_pane_ParamLimits

0x8662,	// (0x0005c245) context_pane

0x8786,	// (0x0005c369) navi_pane_ParamLimits

0x8786,	// (0x0005c369) navi_pane

0x8816,	// (0x0005c3f9) signal_pane_ParamLimits

0x8816,	// (0x0005c3f9) signal_pane

0x0008,

0xf87e,	// (0x00063461) bg_status_flat_pane_g

0x8883,	// (0x0005c466) status_pane_g1_ParamLimits

0x8883,	// (0x0005c466) status_pane_g1

0x888f,	// (0x0005c472) status_pane_g2_ParamLimits

0x888f,	// (0x0005c472) status_pane_g2

0x889b,	// (0x0005c47e) status_pane_g3_ParamLimits

0x889b,	// (0x0005c47e) status_pane_g3

0x0004,

0xf7a5,	// (0x00063388) status_pane_g_ParamLimits

0xf7a5,	// (0x00063388) status_pane_g

0x88cf,	// (0x0005c4b2) title_pane_ParamLimits

0x88cf,	// (0x0005c4b2) title_pane

0x890e,	// (0x0005c4f1) uni_indicator_pane_ParamLimits

0x890e,	// (0x0005c4f1) uni_indicator_pane

0x84ca,	// (0x0005c0ad) bg_list_pane_ParamLimits

0x84ca,	// (0x0005c0ad) bg_list_pane

0x84ea,	// (0x0005c0cd) find_pane

0x84f2,	// (0x0005c0d5) listscroll_app_pane_ParamLimits

0x84f2,	// (0x0005c0d5) listscroll_app_pane

0x84fe,	// (0x0005c0e1) listscroll_form_pane

0x63f4,	// (0x00059fd7) listscroll_gen_pane_ParamLimits

0x63f4,	// (0x00059fd7) listscroll_gen_pane

0x6408,	// (0x00059feb) listscroll_set_pane

0x5b6c,	// (0x0005974f) main_idle_act_pane

0x81c3,	// (0x0005bda6) main_idle_trad_pane

0x81c3,	// (0x0005bda6) main_list_empty_pane

0x84f2,	// (0x0005c0d5) main_midp_pane

0x8518,	// (0x0005c0fb) main_pane_g1_ParamLimits

0x8518,	// (0x0005c0fb) main_pane_g1

0x641e,	// (0x0005a001) popup_ai_message_window_ParamLimits

0x641e,	// (0x0005a001) popup_ai_message_window

0x64d2,	// (0x0005a0b5) popup_fep_china_uni_window_ParamLimits

0x64d2,	// (0x0005a0b5) popup_fep_china_uni_window

0x6532,	// (0x0005a115) popup_fep_japan_candidate_window_ParamLimits

0x6532,	// (0x0005a115) popup_fep_japan_candidate_window

0x655c,	// (0x0005a13f) popup_fep_japan_predictive_window_ParamLimits

0x655c,	// (0x0005a13f) popup_fep_japan_predictive_window

0x6592,	// (0x0005a175) popup_find_window

0x659f,	// (0x0005a182) popup_grid_graphic_window_ParamLimits

0x659f,	// (0x0005a182) popup_grid_graphic_window

0x65cd,	// (0x0005a1b0) popup_large_graphic_colour_window

0x65f3,	// (0x0005a1d6) popup_menu_window_ParamLimits

0x65f3,	// (0x0005a1d6) popup_menu_window

0x67bd,	// (0x0005a3a0) popup_note_image_window

0x67a7,	// (0x0005a38a) popup_note_wait_window_ParamLimits

0x67a7,	// (0x0005a38a) popup_note_wait_window

0x67a7,	// (0x0005a38a) popup_note_window_ParamLimits

0x67a7,	// (0x0005a38a) popup_note_window

0x6823,	// (0x0005a406) popup_query_code_window_ParamLimits

0x6823,	// (0x0005a406) popup_query_code_window

0x6839,	// (0x0005a41c) popup_query_data_code_window_ParamLimits

0x6839,	// (0x0005a41c) popup_query_data_code_window

0x685c,	// (0x0005a43f) popup_query_data_window_ParamLimits

0x685c,	// (0x0005a43f) popup_query_data_window

0x687e,	// (0x0005a461) popup_query_sat_info_window_ParamLimits

0x687e,	// (0x0005a461) popup_query_sat_info_window

0x68bd,	// (0x0005a4a0) popup_snote_single_graphic_window_ParamLimits

0x68bd,	// (0x0005a4a0) popup_snote_single_graphic_window

0x68bd,	// (0x0005a4a0) popup_snote_single_text_window_ParamLimits

0x68bd,	// (0x0005a4a0) popup_snote_single_text_window

0x68d4,	// (0x0005a4b7) popup_sub_window_general

0x6a1a,	// (0x0005a5fd) popup_window_general_ParamLimits

0x6a1a,	// (0x0005a5fd) popup_window_general

0x8526,	// (0x0005c109) power_save_pane

0x627e,	// (0x00059e61) control_pane_g1_ParamLimits

0x627e,	// (0x00059e61) control_pane_g1

0x62a7,	// (0x00059e8a) control_pane_g2_ParamLimits

0x62a7,	// (0x00059e8a) control_pane_g2

0x848d,	// (0x0005c070) control_pane_g3_ParamLimits

0x848d,	// (0x0005c070) control_pane_g3

0x0007,

0xf78d,	// (0x00063370) control_pane_g_ParamLimits

0xf78d,	// (0x00063370) control_pane_g

0x62f3,	// (0x00059ed6) control_pane_t1_ParamLimits

0x62f3,	// (0x00059ed6) control_pane_t1

0x634d,	// (0x00059f30) control_pane_t2_ParamLimits

0x634d,	// (0x00059f30) control_pane_t2

0x0002,

0xf79e,	// (0x00063381) control_pane_t_ParamLimits

0xf79e,	// (0x00063381) control_pane_t

0x83b2,	// (0x0005bf95) navi_navi_volume_pane_cp1

0x83ba,	// (0x0005bf9d) status_small_icon_pane

0x83c2,	// (0x0005bfa5) status_small_pane_g1_ParamLimits

0x83c2,	// (0x0005bfa5) status_small_pane_g1

0x83f6,	// (0x0005bfd9) status_small_pane_g2_ParamLimits

0x83f6,	// (0x0005bfd9) status_small_pane_g2

0x8402,	// (0x0005bfe5) status_small_pane_g3_ParamLimits

0x8402,	// (0x0005bfe5) status_small_pane_g3

0x840e,	// (0x0005bff1) status_small_pane_g4_ParamLimits

0x840e,	// (0x0005bff1) status_small_pane_g4

0x841a,	// (0x0005bffd) status_small_pane_g5_ParamLimits

0x841a,	// (0x0005bffd) status_small_pane_g5

0x8428,	// (0x0005c00b) status_small_pane_g6_ParamLimits

0x8428,	// (0x0005c00b) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006335f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006335f) status_small_pane_g

0x8457,	// (0x0005c03a) status_small_pane_t1

0x8479,	// (0x0005c05c) status_small_wait_pane_ParamLimits

0x8479,	// (0x0005c05c) status_small_wait_pane

0x5ef8,	// (0x00059adb) aid_levels_signal_ParamLimits

0x5ef8,	// (0x00059adb) aid_levels_signal

0x5f07,	// (0x00059aea) signal_pane_g1_ParamLimits

0x5f07,	// (0x00059aea) signal_pane_g1

0x5f1c,	// (0x00059aff) signal_pane_g2_ParamLimits

0x5f1c,	// (0x00059aff) signal_pane_g2

0x0003,

0xf70d,	// (0x000632f0) signal_pane_g_ParamLimits

0xf70d,	// (0x000632f0) signal_pane_g

0x3578,	// (0x0005715b) context_pane_g1

0x50d3,	// (0x00058cb6) title_pane_g1

0x5105,	// (0x00058ce8) title_pane_t1

0xbd46,	// (0x0005f929) title_pane_t2

0xbd6c,	// (0x0005f94f) title_pane_t3

0x0002,

0xf557,	// (0x0006313a) title_pane_t

0x8926,	// (0x0005c509) aid_levels_battery_ParamLimits

0x8926,	// (0x0005c509) aid_levels_battery

0x8937,	// (0x0005c51a) battery_pane_g1_ParamLimits

0x8937,	// (0x0005c51a) battery_pane_g1

0x894d,	// (0x0005c530) battery_pane_g2_ParamLimits

0x894d,	// (0x0005c530) battery_pane_g2

0x0001,

0xf7b0,	// (0x00063393) battery_pane_g_ParamLimits

0xf7b0,	// (0x00063393) battery_pane_g

0x9bc8,	// (0x0005d7ab) uni_indicator_pane_g1

0x9bdb,	// (0x0005d7be) uni_indicator_pane_g2

0x9bed,	// (0x0005d7d0) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00063509) uni_indicator_pane_g

0x38c5,	// (0x000574a8) navi_icon_pane_ParamLimits

0x38c5,	// (0x000574a8) navi_icon_pane

0x380c,	// (0x000573ef) navi_midp_pane

0x38e1,	// (0x000574c4) navi_navi_pane

0x38eb,	// (0x000574ce) navi_text_pane_ParamLimits

0x38eb,	// (0x000574ce) navi_text_pane

0xbd26,	// (0x0005f909) status_small_wait_pane_g1

0xede5,	// (0x000629c8) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00063504) status_small_wait_pane_g

0x98db,	// (0x0005d4be) navi_navi_icon_text_pane

0x98e3,	// (0x0005d4c6) navi_navi_pane_g1_ParamLimits

0x98e3,	// (0x0005d4c6) navi_navi_pane_g1

0x98f5,	// (0x0005d4d8) navi_navi_pane_g2_ParamLimits

0x98f5,	// (0x0005d4d8) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x000634d2) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x000634d2) navi_navi_pane_g

0x9907,	// (0x0005d4ea) navi_navi_tabs_pane

0x9910,	// (0x0005d4f3) navi_navi_text_pane

0x98db,	// (0x0005d4be) navi_navi_volume_pane

0x98b7,	// (0x0005d49a) navi_text_pane_t1

0x98ab,	// (0x0005d48e) navi_icon_pane_g1

0x97fe,	// (0x0005d3e1) navi_navi_text_pane_t1

0x6cf6,	// (0x0005a8d9) navi_navi_volume_pane_g1

0x6cfe,	// (0x0005a8e1) volume_small_pane

0x9764,	// (0x0005d347) navi_navi_icon_text_pane_g1

0x976c,	// (0x0005d34f) navi_navi_icon_text_pane_t1

0x38e1,	// (0x000574c4) navi_tabs_2_long_pane

0x38e1,	// (0x000574c4) navi_tabs_2_pane

0x38e1,	// (0x000574c4) navi_tabs_3_long_pane

0x38e1,	// (0x000574c4) navi_tabs_3_pane

0x38e1,	// (0x000574c4) navi_tabs_4_pane

0x6cd6,	// (0x0005a8b9) tabs_2_active_pane_ParamLimits

0x6cd6,	// (0x0005a8b9) tabs_2_active_pane

0x6ce6,	// (0x0005a8c9) tabs_2_passive_pane_ParamLimits

0x6ce6,	// (0x0005a8c9) tabs_2_passive_pane

0x6ca4,	// (0x0005a887) tabs_3_active_pane_ParamLimits

0x6ca4,	// (0x0005a887) tabs_3_active_pane

0x6cb4,	// (0x0005a897) tabs_3_passive_pane_ParamLimits

0x6cb4,	// (0x0005a897) tabs_3_passive_pane

0x6cc5,	// (0x0005a8a8) tabs_3_passive_pane_cp_ParamLimits

0x6cc5,	// (0x0005a8a8) tabs_3_passive_pane_cp

0x6c58,	// (0x0005a83b) tabs_4_active_pane_ParamLimits

0x6c58,	// (0x0005a83b) tabs_4_active_pane

0x6c6b,	// (0x0005a84e) tabs_4_passive_pane_ParamLimits

0x6c6b,	// (0x0005a84e) tabs_4_passive_pane

0x6c7c,	// (0x0005a85f) tabs_4_passive_pane_cp_ParamLimits

0x6c7c,	// (0x0005a85f) tabs_4_passive_pane_cp

0x6c8d,	// (0x0005a870) tabs_4_passive_pane_cp2_ParamLimits

0x6c8d,	// (0x0005a870) tabs_4_passive_pane_cp2

0x6c34,	// (0x0005a817) tabs_2_long_active_pane_ParamLimits

0x6c34,	// (0x0005a817) tabs_2_long_active_pane

0x6c46,	// (0x0005a829) tabs_2_long_passive_pane_ParamLimits

0x6c46,	// (0x0005a829) tabs_2_long_passive_pane

0x6bf5,	// (0x0005a7d8) tabs_3_long_active_pane_ParamLimits

0x6bf5,	// (0x0005a7d8) tabs_3_long_active_pane

0x6c08,	// (0x0005a7eb) tabs_3_long_passive_pane_ParamLimits

0x6c08,	// (0x0005a7eb) tabs_3_long_passive_pane

0x6c21,	// (0x0005a804) tabs_3_long_passive_pane_cp_ParamLimits

0x6c21,	// (0x0005a804) tabs_3_long_passive_pane_cp

0x6b9b,	// (0x0005a77e) volume_small_pane_g1

0x6ba4,	// (0x0005a787) volume_small_pane_g2

0x6bad,	// (0x0005a790) volume_small_pane_g3

0x6bb6,	// (0x0005a799) volume_small_pane_g4

0x6bbf,	// (0x0005a7a2) volume_small_pane_g5

0x6bc8,	// (0x0005a7ab) volume_small_pane_g6

0x6bd1,	// (0x0005a7b4) volume_small_pane_g7

0x6bda,	// (0x0005a7bd) volume_small_pane_g8

0x6be3,	// (0x0005a7c6) volume_small_pane_g9

0x6bec,	// (0x0005a7cf) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0006349e) volume_small_pane_g

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp2_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp2

0x516d,	// (0x00058d50) tabs_3_active_pane_g1

0x5175,	// (0x00058d58) tabs_3_active_pane_t1

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp2_ParamLimits

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp2

0x516d,	// (0x00058d50) tabs_3_passive_pane_g1

0x5175,	// (0x00058d58) tabs_3_passive_pane_t1

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp3_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp3

0x5187,	// (0x00058d6a) tabs_4_active_pane_g1

0x518f,	// (0x00058d72) tabs_4_active_pane_t1

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp3_ParamLimits

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp3

0x5187,	// (0x00058d6a) tabs_4_1_passive_pane_g1

0x518f,	// (0x00058d72) tabs_4_1_passive_pane_t1

0x84f2,	// (0x0005c0d5) list_highlight_pane_cp2

0x9ffd,	// (0x0005dbe0) list_set_pane_ParamLimits

0x9ffd,	// (0x0005dbe0) list_set_pane

0xa0bf,	// (0x0005dca2) main_pane_set_t1_ParamLimits

0xa0bf,	// (0x0005dca2) main_pane_set_t1

0xa0df,	// (0x0005dcc2) main_pane_set_t2_ParamLimits

0xa0df,	// (0x0005dcc2) main_pane_set_t2

0xa0f3,	// (0x0005dcd6) main_pane_set_t3_ParamLimits

0xa0f3,	// (0x0005dcd6) main_pane_set_t3

0xa107,	// (0x0005dcea) main_pane_set_t4_ParamLimits

0xa107,	// (0x0005dcea) main_pane_set_t4

0x0003,

0xf98b,	// (0x0006356e) main_pane_set_t_ParamLimits

0xf98b,	// (0x0006356e) main_pane_set_t

0xa11b,	// (0x0005dcfe) setting_code_pane

0xa125,	// (0x0005dd08) setting_slider_graphic_pane

0xa125,	// (0x0005dd08) setting_slider_pane

0xa125,	// (0x0005dd08) setting_text_pane

0xa125,	// (0x0005dd08) setting_volume_pane

0x51a1,	// (0x00058d84) volume_set_pane

0xbd7e,	// (0x0005f961) bg_set_opt_pane_cp

0x51ab,	// (0x00058d8e) setting_slider_pane_t1

0x51c4,	// (0x00058da7) setting_slider_pane_t2

0x51de,	// (0x00058dc1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063141) setting_slider_pane_t

0x51f6,	// (0x00058dd9) slider_set_pane

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp2

0xbd8c,	// (0x0005f96f) setting_slider_graphic_pane_g1

0x520c,	// (0x00058def) setting_slider_graphic_pane_t1

0x521c,	// (0x00058dff) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00063148) setting_slider_graphic_pane_t

0x522c,	// (0x00058e0f) slider_set_pane_cp

0xbd30,	// (0x0005f913) input_focus_pane_cp1

0x9fbe,	// (0x0005dba1) list_set_text_pane

0xbd26,	// (0x0005f909) setting_text_pane_g1

0xbd30,	// (0x0005f913) input_focus_pane_cp2

0xbd26,	// (0x0005f909) setting_code_pane_g1

0xbd95,	// (0x0005f978) setting_code_pane_t1

0x33bc,	// (0x00056f9f) set_text_pane_t1_ParamLimits

0x33bc,	// (0x00056f9f) set_text_pane_t1

0xf17a,	// (0x00062d5d) set_opt_bg_pane_g1

0xf182,	// (0x00062d65) set_opt_bg_pane_g2

0x9f96,	// (0x0005db79) set_opt_bg_pane_g3

0xf192,	// (0x00062d75) set_opt_bg_pane_g4

0xf19a,	// (0x00062d7d) set_opt_bg_pane_g5

0xf1a2,	// (0x00062d85) set_opt_bg_pane_g6

0x9fa0,	// (0x0005db83) set_opt_bg_pane_g7

0x9faa,	// (0x0005db8d) set_opt_bg_pane_g8

0x9fb4,	// (0x0005db97) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0006355b) set_opt_bg_pane_g

0x9f89,	// (0x0005db6c) slider_set_pane_g1

0x6da7,	// (0x0005a98a) slider_set_pane_g2

0x0006,

0xf969,	// (0x0006354c) slider_set_pane_g

0x6d07,	// (0x0005a8ea) volume_set_pane_g1

0x6d11,	// (0x0005a8f4) volume_set_pane_g2

0x6d1b,	// (0x0005a8fe) volume_set_pane_g3

0x6d25,	// (0x0005a908) volume_set_pane_g4

0x6d2f,	// (0x0005a912) volume_set_pane_g5

0x6d39,	// (0x0005a91c) volume_set_pane_g6

0x6d43,	// (0x0005a926) volume_set_pane_g7

0x6d4d,	// (0x0005a930) volume_set_pane_g8

0x6d57,	// (0x0005a93a) volume_set_pane_g9

0x6d61,	// (0x0005a944) volume_set_pane_g10

0x0009,

0xf941,	// (0x00063524) volume_set_pane_g

0x5234,	// (0x00058e17) indicator_pane_ParamLimits

0x5234,	// (0x00058e17) indicator_pane

0x5240,	// (0x00058e23) main_idle_pane_g2_ParamLimits

0x5240,	// (0x00058e23) main_idle_pane_g2

0x5268,	// (0x00058e4b) main_pane_idle_g1_ParamLimits

0x5268,	// (0x00058e4b) main_pane_idle_g1

0xbda3,	// (0x0005f986) popup_clock_digital_analogue_window_ParamLimits

0xbda3,	// (0x0005f986) popup_clock_digital_analogue_window

0x5276,	// (0x00058e59) soft_indicator_pane_ParamLimits

0x5276,	// (0x00058e59) soft_indicator_pane

0x5284,	// (0x00058e67) wallpaper_pane_ParamLimits

0x5284,	// (0x00058e67) wallpaper_pane

0xbd26,	// (0x0005f909) wallpaper_pane_g1

0x5290,	// (0x00058e73) indicator_pane_g1_ParamLimits

0x5290,	// (0x00058e73) indicator_pane_g1

0xa400,	// (0x0005dfe3) navi_navi_icon_text_pane_srt_g1

0xeb37,	// (0x0006271a) soft_indicator_pane_t1

0xeb51,	// (0x00062734) aid_ps_area_pane

0x529c,	// (0x00058e7f) aid_ps_clock_pane

0xeb62,	// (0x00062745) aid_ps_indicator_pane

0xeb6e,	// (0x00062751) indicator_ps_pane_ParamLimits

0xeb6e,	// (0x00062751) indicator_ps_pane

0xeb7d,	// (0x00062760) power_save_pane_g1_ParamLimits

0xeb7d,	// (0x00062760) power_save_pane_g1

0xeb89,	// (0x0006276c) power_save_pane_g2_ParamLimits

0xeb89,	// (0x0006276c) power_save_pane_g2

0x4cca,	// (0x000588ad) aid_navinavi_width_pane

0xeb51,	// (0x00062734) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006314d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006314d) power_save_pane_g

0xeb97,	// (0x0006277a) power_save_pane_t1_ParamLimits

0xeb97,	// (0x0006277a) power_save_pane_t1

0x529c,	// (0x00058e7f) aid_ps_clock_pane_ParamLimits

0xeb62,	// (0x00062745) aid_ps_indicator_pane_ParamLimits

0xeba9,	// (0x0006278c) power_save_pane_t4_ParamLimits

0xeba9,	// (0x0006278c) power_save_pane_t4

0x0001,

0xf56f,	// (0x00063152) power_save_pane_t_ParamLimits

0xf56f,	// (0x00063152) power_save_pane_t

0xebd3,	// (0x000627b6) power_save_t3_ParamLimits

0xebd3,	// (0x000627b6) power_save_t3

0xebbe,	// (0x000627a1) power_save_t2_ParamLimits

0xebbe,	// (0x000627a1) power_save_t2

0xebe8,	// (0x000627cb) indicator_ps_pane_g1

0x52aa,	// (0x00058e8d) ai_gene_pane_ParamLimits

0x52aa,	// (0x00058e8d) ai_gene_pane

0x52b6,	// (0x00058e99) ai_links_pane_ParamLimits

0x52b6,	// (0x00058e99) ai_links_pane

0x52c2,	// (0x00058ea5) indicator_pane_cp1_ParamLimits

0x52c2,	// (0x00058ea5) indicator_pane_cp1

0x52ce,	// (0x00058eb1) main_pane_idle_g1_cp_ParamLimits

0x52ce,	// (0x00058eb1) main_pane_idle_g1_cp

0xebf1,	// (0x000627d4) popup_ai_links_title_window

0x52da,	// (0x00058ebd) soft_indicator_pane_cp1_ParamLimits

0x52da,	// (0x00058ebd) soft_indicator_pane_cp1

0x9bb6,	// (0x0005d799) ai_links_pane_g1

0x9bbf,	// (0x0005d7a2) grid_ai_links_pane

0x9b9b,	// (0x0005d77e) ai_gene_pane_1

0x9ba4,	// (0x0005d787) ai_gene_pane_2

0x9bad,	// (0x0005d790) list_highlight_pane_cp4

0x9b7b,	// (0x0005d75e) cell_ai_link_pane_ParamLimits

0x9b7b,	// (0x0005d75e) cell_ai_link_pane

0x9b73,	// (0x0005d756) cell_ai_link_pane_g1

0xede5,	// (0x000629c8) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x000634ff) cell_ai_link_pane_g

0xbd30,	// (0x0005f913) grid_highlight_cp2

0xbd30,	// (0x0005f913) bg_popup_sub_pane_cp1

0xec08,	// (0x000627eb) popup_ai_links_title_window_t1

0x9abf,	// (0x0005d6a2) ai_gene_pane_1_g1_ParamLimits

0x9abf,	// (0x0005d6a2) ai_gene_pane_1_g1

0x9acb,	// (0x0005d6ae) ai_gene_pane_1_g2_ParamLimits

0x9acb,	// (0x0005d6ae) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x000634f5) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x000634f5) ai_gene_pane_1_g

0x9ad8,	// (0x0005d6bb) ai_gene_pane_1_t1_ParamLimits

0x9ad8,	// (0x0005d6bb) ai_gene_pane_1_t1

0x9b0c,	// (0x0005d6ef) grid_ai_soft_ind_pane

0x9aaa,	// (0x0005d68d) ai_gene_pane_2_t1_ParamLimits

0x9aaa,	// (0x0005d68d) ai_gene_pane_2_t1

0x52e6,	// (0x00058ec9) main_pane_empty_t1_ParamLimits

0x52e6,	// (0x00058ec9) main_pane_empty_t1

0x52fe,	// (0x00058ee1) main_pane_empty_t2_ParamLimits

0x52fe,	// (0x00058ee1) main_pane_empty_t2

0x5313,	// (0x00058ef6) main_pane_empty_t3_ParamLimits

0x5313,	// (0x00058ef6) main_pane_empty_t3

0x5325,	// (0x00058f08) main_pane_empty_t4_ParamLimits

0x5325,	// (0x00058f08) main_pane_empty_t4

0x5337,	// (0x00058f1a) main_pane_empty_t5_ParamLimits

0x5337,	// (0x00058f1a) main_pane_empty_t5

0x0004,

0xf574,	// (0x00063157) main_pane_empty_t_ParamLimits

0xf574,	// (0x00063157) main_pane_empty_t

0xf1cb,	// (0x00062dae) bg_popup_window_pane_ParamLimits

0xf1cb,	// (0x00062dae) bg_popup_window_pane

0x980c,	// (0x0005d3ef) find_popup_pane_cp2_ParamLimits

0x980c,	// (0x0005d3ef) find_popup_pane_cp2

0x9818,	// (0x0005d3fb) heading_pane_ParamLimits

0x9818,	// (0x0005d3fb) heading_pane

0xbd30,	// (0x0005f913) bg_popup_sub_pane

0x9786,	// (0x0005d369) bg_popup_window_pane_g1_ParamLimits

0x9786,	// (0x0005d369) bg_popup_window_pane_g1

0x9792,	// (0x0005d375) bg_popup_window_pane_g2_ParamLimits

0x9792,	// (0x0005d375) bg_popup_window_pane_g2

0x979e,	// (0x0005d381) bg_popup_window_pane_g3_ParamLimits

0x979e,	// (0x0005d381) bg_popup_window_pane_g3

0x97aa,	// (0x0005d38d) bg_popup_window_pane_g4_ParamLimits

0x97aa,	// (0x0005d38d) bg_popup_window_pane_g4

0x97b6,	// (0x0005d399) bg_popup_window_pane_g5_ParamLimits

0x97b6,	// (0x0005d399) bg_popup_window_pane_g5

0x97c2,	// (0x0005d3a5) bg_popup_window_pane_g6_ParamLimits

0x97c2,	// (0x0005d3a5) bg_popup_window_pane_g6

0x97ce,	// (0x0005d3b1) bg_popup_window_pane_g7_ParamLimits

0x97ce,	// (0x0005d3b1) bg_popup_window_pane_g7

0x97da,	// (0x0005d3bd) bg_popup_window_pane_g8_ParamLimits

0x97da,	// (0x0005d3bd) bg_popup_window_pane_g8

0x97e6,	// (0x0005d3c9) bg_popup_window_pane_g9_ParamLimits

0x97e6,	// (0x0005d3c9) bg_popup_window_pane_g9

0x97f2,	// (0x0005d3d5) bg_popup_window_pane_g10_ParamLimits

0x97f2,	// (0x0005d3d5) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000634bd) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000634bd) bg_popup_window_pane_g

0x971b,	// (0x0005d2fe) bg_popup_heading_pane_ParamLimits

0x971b,	// (0x0005d2fe) bg_popup_heading_pane

0x6e7b,	// (0x0005aa5e) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e7b,	// (0x0005aa5e) tabs_4_passive_pane_cp_srt

0x6e8d,	// (0x0005aa70) tabs_4_passive_pane_srt_ParamLimits

0x972f,	// (0x0005d312) heading_pane_g2

0x6e8d,	// (0x0005aa70) tabs_4_passive_pane_srt

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp3_srt

0x9737,	// (0x0005d31a) heading_pane_t1_ParamLimits

0x9737,	// (0x0005d31a) heading_pane_t1

0x974e,	// (0x0005d331) heading_pane_t2_ParamLimits

0x974e,	// (0x0005d331) heading_pane_t2

0x0001,

0xf8d5,	// (0x000634b8) heading_pane_t_ParamLimits

0xf8d5,	// (0x000634b8) heading_pane_t

0x9246,	// (0x0005ce29) bg_popup_heading_pane_g1

0x92f5,	// (0x0005ced8) bg_popup_heading_pane_g2

0x92ff,	// (0x0005cee2) bg_popup_heading_pane_g3

0x9309,	// (0x0005ceec) bg_popup_heading_pane_g4

0x9313,	// (0x0005cef6) bg_popup_heading_pane_g5

0x931d,	// (0x0005cf00) bg_popup_heading_pane_g6

0x9325,	// (0x0005cf08) bg_popup_heading_pane_g7

0x932d,	// (0x0005cf10) bg_popup_heading_pane_g8

0x9337,	// (0x0005cf1a) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00063474) bg_popup_heading_pane_g

0x8a2e,	// (0x0005c611) bg_popup_sub_pane_g1

0x8a3e,	// (0x0005c621) bg_popup_sub_pane_g2

0x8a36,	// (0x0005c619) bg_popup_sub_pane_g3

0x8a4e,	// (0x0005c631) bg_popup_sub_pane_g4

0x8a46,	// (0x0005c629) bg_popup_sub_pane_g5

0x8a56,	// (0x0005c639) bg_popup_sub_pane_g6

0x8a5e,	// (0x0005c641) bg_popup_sub_pane_g7

0x8a6e,	// (0x0005c651) bg_popup_sub_pane_g8

0x8a66,	// (0x0005c649) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0006344e) bg_popup_sub_pane_g

0xbdba,	// (0x0005f99d) bg_popup_window_pane_cp5_ParamLimits

0xbdba,	// (0x0005f99d) bg_popup_window_pane_cp5

0xec25,	// (0x00062808) popup_note_window_g1_ParamLimits

0xec25,	// (0x00062808) popup_note_window_g1

0xec31,	// (0x00062814) popup_note_window_t1_ParamLimits

0xec31,	// (0x00062814) popup_note_window_t1

0xec47,	// (0x0006282a) popup_note_window_t2_ParamLimits

0xec47,	// (0x0006282a) popup_note_window_t2

0xec5d,	// (0x00062840) popup_note_window_t3_ParamLimits

0xec5d,	// (0x00062840) popup_note_window_t3

0xec73,	// (0x00062856) popup_note_window_t4_ParamLimits

0xec73,	// (0x00062856) popup_note_window_t4

0xec9b,	// (0x0006287e) popup_note_window_t5_ParamLimits

0xec9b,	// (0x0006287e) popup_note_window_t5

0x0004,

0xf57f,	// (0x00063162) popup_note_window_t_ParamLimits

0xf57f,	// (0x00063162) popup_note_window_t

0xece5,	// (0x000628c8) bg_popup_window_pane_cp6_ParamLimits

0xece5,	// (0x000628c8) bg_popup_window_pane_cp6

0x91c2,	// (0x0005cda5) popup_note_image_window_g1_ParamLimits

0x91c2,	// (0x0005cda5) popup_note_image_window_g1

0x91ce,	// (0x0005cdb1) popup_note_image_window_g2_ParamLimits

0x91ce,	// (0x0005cdb1) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00063442) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00063442) popup_note_image_window_g

0x91e7,	// (0x0005cdca) popup_note_image_window_t1_ParamLimits

0x91e7,	// (0x0005cdca) popup_note_image_window_t1

0x9200,	// (0x0005cde3) popup_note_image_window_t2_ParamLimits

0x9200,	// (0x0005cde3) popup_note_image_window_t2

0x9219,	// (0x0005cdfc) popup_note_image_window_t3_ParamLimits

0x9219,	// (0x0005cdfc) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00063447) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00063447) popup_note_image_window_t

0x9082,	// (0x0005cc65) bg_popup_window_pane_cp7_ParamLimits

0x9082,	// (0x0005cc65) bg_popup_window_pane_cp7

0x90b2,	// (0x0005cc95) popup_note_wait_window_g1_ParamLimits

0x90b2,	// (0x0005cc95) popup_note_wait_window_g1

0x90be,	// (0x0005cca1) popup_note_wait_window_g2_ParamLimits

0x90be,	// (0x0005cca1) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00063430) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00063430) popup_note_wait_window_g

0x90d6,	// (0x0005ccb9) popup_note_wait_window_t1_ParamLimits

0x90d6,	// (0x0005ccb9) popup_note_wait_window_t1

0x90fd,	// (0x0005cce0) popup_note_wait_window_t2_ParamLimits

0x90fd,	// (0x0005cce0) popup_note_wait_window_t2

0x911b,	// (0x0005ccfe) popup_note_wait_window_t3_ParamLimits

0x911b,	// (0x0005ccfe) popup_note_wait_window_t3

0x912e,	// (0x0005cd11) popup_note_wait_window_t4_ParamLimits

0x912e,	// (0x0005cd11) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00063437) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00063437) popup_note_wait_window_t

0x9153,	// (0x0005cd36) wait_bar_pane_ParamLimits

0x9153,	// (0x0005cd36) wait_bar_pane

0xbd30,	// (0x0005f913) wait_anim_pane

0xbd30,	// (0x0005f913) wait_border_pane

0xbd26,	// (0x0005f909) wait_anim_pane_g1

0xbd26,	// (0x0005f909) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000632eb) wait_anim_pane_g

0x9026,	// (0x0005cc09) wait_border_pane_g1

0x9031,	// (0x0005cc14) wait_border_pane_g2

0x903a,	// (0x0005cc1d) wait_border_pane_g3

0x0002,

0xf846,	// (0x00063429) wait_border_pane_g

0x8e90,	// (0x0005ca73) bg_popup_window_pane_cp16_ParamLimits

0x8e90,	// (0x0005ca73) bg_popup_window_pane_cp16

0x8f90,	// (0x0005cb73) indicator_popup_pane_cp4_ParamLimits

0x8f90,	// (0x0005cb73) indicator_popup_pane_cp4

0x8fa4,	// (0x0005cb87) popup_query_data_window_t1_ParamLimits

0x8fa4,	// (0x0005cb87) popup_query_data_window_t1

0x8fb6,	// (0x0005cb99) popup_query_data_window_t2_ParamLimits

0x8fb6,	// (0x0005cb99) popup_query_data_window_t2

0x8fcf,	// (0x0005cbb2) popup_query_data_window_t3_ParamLimits

0x8fcf,	// (0x0005cbb2) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00063422) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00063422) popup_query_data_window_t

0x8fe9,	// (0x0005cbcc) query_popup_data_pane_ParamLimits

0x8fe9,	// (0x0005cbcc) query_popup_data_pane

0x8ffd,	// (0x0005cbe0) query_popup_data_pane_cp1_ParamLimits

0x8ffd,	// (0x0005cbe0) query_popup_data_pane_cp1

0x8e90,	// (0x0005ca73) bg_popup_window_pane_cp10_ParamLimits

0x8e90,	// (0x0005ca73) bg_popup_window_pane_cp10

0x8ec2,	// (0x0005caa5) indicator_popup_pane_ParamLimits

0x8ec2,	// (0x0005caa5) indicator_popup_pane

0x8ee4,	// (0x0005cac7) popup_query_code_window_t1_ParamLimits

0x8ee4,	// (0x0005cac7) popup_query_code_window_t1

0x8efe,	// (0x0005cae1) popup_query_code_window_t2_ParamLimits

0x8efe,	// (0x0005cae1) popup_query_code_window_t2

0x8f47,	// (0x0005cb2a) popup_query_code_window_t3_ParamLimits

0x8f47,	// (0x0005cb2a) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0006341b) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0006341b) popup_query_code_window_t

0x8f76,	// (0x0005cb59) query_popup_pane_ParamLimits

0x8f76,	// (0x0005cb59) query_popup_pane

0xece5,	// (0x000628c8) bg_popup_window_pane_cp15_ParamLimits

0xece5,	// (0x000628c8) bg_popup_window_pane_cp15

0xed05,	// (0x000628e8) indicator_popup_pane_cp1_ParamLimits

0xed05,	// (0x000628e8) indicator_popup_pane_cp1

0xed18,	// (0x000628fb) indicator_popup_pane_cp2_ParamLimits

0xed18,	// (0x000628fb) indicator_popup_pane_cp2

0xed33,	// (0x00062916) popup_query_data_code_window_g1_ParamLimits

0xed33,	// (0x00062916) popup_query_data_code_window_g1

0xed46,	// (0x00062929) popup_query_data_code_window_t1_ParamLimits

0xed46,	// (0x00062929) popup_query_data_code_window_t1

0xed58,	// (0x0006293b) popup_query_data_code_window_t2_ParamLimits

0xed58,	// (0x0006293b) popup_query_data_code_window_t2

0xed6a,	// (0x0006294d) popup_query_data_code_window_t3_ParamLimits

0xed6a,	// (0x0006294d) popup_query_data_code_window_t3

0xed80,	// (0x00062963) popup_query_data_code_window_t4_ParamLimits

0xed80,	// (0x00062963) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006316d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006316d) popup_query_data_code_window_t

0x6a88,	// (0x0005a66b) list_single_midp_graphic_pane_g3

0xed9a,	// (0x0006297d) query_popup_data_pane_cp2_ParamLimits

0xedad,	// (0x00062990) query_popup_pane_cp2_ParamLimits

0xedad,	// (0x00062990) query_popup_pane_cp2

0xbd30,	// (0x0005f913) bg_popup_window_pane_cp11

0x8e7c,	// (0x0005ca5f) heading_pane_cp5

0xee46,	// (0x00062a29) listscroll_popup_info_pane

0xbd30,	// (0x0005f913) input_focus_pane_cp3

0xedc8,	// (0x000629ab) query_popup_pane_t1

0xedd6,	// (0x000629b9) list_popup_info_pane_ParamLimits

0xedd6,	// (0x000629b9) list_popup_info_pane

0xede5,	// (0x000629c8) listscroll_popup_info_pane_g1

0xeded,	// (0x000629d0) scroll_pane_cp7

0xedf7,	// (0x000629da) popup_info_list_pane_t1_ParamLimits

0xedf7,	// (0x000629da) popup_info_list_pane_t1

0xee11,	// (0x000629f4) popup_info_list_pane_t2_ParamLimits

0xee11,	// (0x000629f4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00063176) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00063176) popup_info_list_pane_t

0xbd30,	// (0x0005f913) bg_popup_window_pane_cp12

0xa41a,	// (0x0005dffd) find_popup_pane

0xbd7e,	// (0x0005f961) bg_popup_window_pane_cp3

0xee2b,	// (0x00062a0e) heading_pane_cp3

0xee37,	// (0x00062a1a) listscroll_popup_graphic_pane

0xbd30,	// (0x0005f913) bg_popup_window_pane_cp4

0x5399,	// (0x00058f7c) heading_pane_cp4

0xee46,	// (0x00062a29) listscroll_popup_colour_pane

0x53a3,	// (0x00058f86) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x53a3,	// (0x00058f86) cell_large_graphic_colour_none_popup_pane

0x53b7,	// (0x00058f9a) grid_large_graphic_colour_popup_pane_ParamLimits

0x53b7,	// (0x00058f9a) grid_large_graphic_colour_popup_pane

0x53e3,	// (0x00058fc6) listscroll_popup_colour_pane_g1_ParamLimits

0x53e3,	// (0x00058fc6) listscroll_popup_colour_pane_g1

0x53fa,	// (0x00058fdd) listscroll_popup_colour_pane_g2_ParamLimits

0x53fa,	// (0x00058fdd) listscroll_popup_colour_pane_g2

0x5411,	// (0x00058ff4) listscroll_popup_colour_pane_g3_ParamLimits

0x5411,	// (0x00058ff4) listscroll_popup_colour_pane_g3

0x5421,	// (0x00059004) listscroll_popup_colour_pane_g4_ParamLimits

0x5421,	// (0x00059004) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006317b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006317b) listscroll_popup_colour_pane_g

0xee4e,	// (0x00062a31) scroll_pane_cp6_ParamLimits

0xee4e,	// (0x00062a31) scroll_pane_cp6

0x5435,	// (0x00059018) cell_large_graphic_colour_popup_pane_ParamLimits

0x5435,	// (0x00059018) cell_large_graphic_colour_popup_pane

0xee60,	// (0x00062a43) cell_large_graphic_colour_none_popup_pane_t1

0xbd30,	// (0x0005f913) grid_highlight_pane_cp5

0xee6f,	// (0x00062a52) cell_large_graphic_colour_popup_pane_g1

0xee77,	// (0x00062a5a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00063184) cell_large_graphic_colour_popup_pane_g

0xee7f,	// (0x00062a62) cell_large_graphic_colour_popup_pane_g2_copy1

0xee88,	// (0x00062a6b) grid_highlight_pane_cp4

0xee90,	// (0x00062a73) bg_popup_window_pane_cp8_ParamLimits

0xee90,	// (0x00062a73) bg_popup_window_pane_cp8

0xeeab,	// (0x00062a8e) popup_snote_single_text_window_g1_ParamLimits

0xeeab,	// (0x00062a8e) popup_snote_single_text_window_g1

0xeebd,	// (0x00062aa0) popup_snote_single_text_window_t1_ParamLimits

0xeebd,	// (0x00062aa0) popup_snote_single_text_window_t1

0xeed0,	// (0x00062ab3) popup_snote_single_text_window_t2_ParamLimits

0xeed0,	// (0x00062ab3) popup_snote_single_text_window_t2

0xeee3,	// (0x00062ac6) popup_snote_single_text_window_t3_ParamLimits

0xeee3,	// (0x00062ac6) popup_snote_single_text_window_t3

0xef1c,	// (0x00062aff) popup_snote_single_text_window_t4_ParamLimits

0xef1c,	// (0x00062aff) popup_snote_single_text_window_t4

0xef50,	// (0x00062b33) popup_snote_single_text_window_t5_ParamLimits

0xef50,	// (0x00062b33) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00063189) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00063189) popup_snote_single_text_window_t

0xef7f,	// (0x00062b62) bg_popup_window_pane_cp9_ParamLimits

0xef7f,	// (0x00062b62) bg_popup_window_pane_cp9

0xeeab,	// (0x00062a8e) popup_snote_single_graphic_window_g1_ParamLimits

0xeeab,	// (0x00062a8e) popup_snote_single_graphic_window_g1

0xef8d,	// (0x00062b70) popup_snote_single_graphic_window_g2_ParamLimits

0xef8d,	// (0x00062b70) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00063194) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00063194) popup_snote_single_graphic_window_g

0xef99,	// (0x00062b7c) popup_snote_single_graphic_window_t1_ParamLimits

0xef99,	// (0x00062b7c) popup_snote_single_graphic_window_t1

0xefac,	// (0x00062b8f) popup_snote_single_graphic_window_t2_ParamLimits

0xefac,	// (0x00062b8f) popup_snote_single_graphic_window_t2

0xefbf,	// (0x00062ba2) popup_snote_single_graphic_window_t3_ParamLimits

0xefbf,	// (0x00062ba2) popup_snote_single_graphic_window_t3

0xeff8,	// (0x00062bdb) popup_snote_single_graphic_window_t4_ParamLimits

0xeff8,	// (0x00062bdb) popup_snote_single_graphic_window_t4

0xf02c,	// (0x00062c0f) popup_snote_single_graphic_window_t5_ParamLimits

0xf02c,	// (0x00062c0f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00063199) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00063199) popup_snote_single_graphic_window_t

0xa358,	// (0x0005df3b) grid_graphic_popup_pane_ParamLimits

0xa358,	// (0x0005df3b) grid_graphic_popup_pane

0xa386,	// (0x0005df69) listscroll_popup_graphic_pane_g1_ParamLimits

0xa386,	// (0x0005df69) listscroll_popup_graphic_pane_g1

0xa39a,	// (0x0005df7d) listscroll_popup_graphic_pane_g2_ParamLimits

0xa39a,	// (0x0005df7d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00063598) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00063598) listscroll_popup_graphic_pane_g

0xa3ae,	// (0x0005df91) scroll_pane_cp5

0xa2ed,	// (0x0005ded0) cell_graphic_popup_pane_ParamLimits

0xa2ed,	// (0x0005ded0) cell_graphic_popup_pane

0xa2ce,	// (0x0005deb1) cell_graphic_popup_pane_g1

0xa2d6,	// (0x0005deb9) cell_graphic_popup_pane_g2

0xee7f,	// (0x00062a62) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00063591) cell_graphic_popup_pane_g

0xa2df,	// (0x0005dec2) cell_graphic_popup_pane_t2

0xee88,	// (0x00062a6b) grid_highlight_pane_cp3

0xf06d,	// (0x00062c50) list_gen_pane_ParamLimits

0xf06d,	// (0x00062c50) list_gen_pane

0xf095,	// (0x00062c78) scroll_pane

0xa226,	// (0x0005de09) bg_list_pane_g1_ParamLimits

0xa226,	// (0x0005de09) bg_list_pane_g1

0xa243,	// (0x0005de26) bg_list_pane_g2_ParamLimits

0xa243,	// (0x0005de26) bg_list_pane_g2

0xa258,	// (0x0005de3b) bg_list_pane_g3_ParamLimits

0xa258,	// (0x0005de3b) bg_list_pane_g3

0xa26c,	// (0x0005de4f) bg_list_pane_g4_ParamLimits

0xa26c,	// (0x0005de4f) bg_list_pane_g4

0xa280,	// (0x0005de63) bg_list_pane_g5_ParamLimits

0xa280,	// (0x0005de63) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00063586) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00063586) bg_list_pane_g

0x9cf6,	// (0x0005d8d9) list_double2_graphic_large_graphic_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double2_graphic_large_graphic_pane

0x9cf6,	// (0x0005d8d9) list_double2_graphic_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double2_graphic_pane

0x9cf6,	// (0x0005d8d9) list_double2_large_graphic_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double2_large_graphic_pane

0x9cf6,	// (0x0005d8d9) list_double2_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double2_pane

0x9cf6,	// (0x0005d8d9) list_double_graphic_heading_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_graphic_heading_pane

0x9cf6,	// (0x0005d8d9) list_double_graphic_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_graphic_pane

0x9cf6,	// (0x0005d8d9) list_double_heading_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_heading_pane

0x9cf6,	// (0x0005d8d9) list_double_large_graphic_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_large_graphic_pane

0x9cf6,	// (0x0005d8d9) list_double_number_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_number_pane

0x9cf6,	// (0x0005d8d9) list_double_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_pane

0x9cf6,	// (0x0005d8d9) list_double_time_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_double_time_pane

0x9cf6,	// (0x0005d8d9) list_setting_number_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_setting_number_pane

0x9cf6,	// (0x0005d8d9) list_setting_pane_ParamLimits

0x9cf6,	// (0x0005d8d9) list_setting_pane

0xa1f6,	// (0x0005ddd9) list_single_2graphic_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_2graphic_pane

0xa1f6,	// (0x0005ddd9) list_single_graphic_heading_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_graphic_heading_pane

0xa1f6,	// (0x0005ddd9) list_single_graphic_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_graphic_pane

0xa1f6,	// (0x0005ddd9) list_single_heading_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_heading_pane

0x9d1e,	// (0x0005d901) list_single_large_graphic_pane_ParamLimits

0x9d1e,	// (0x0005d901) list_single_large_graphic_pane

0xa1f6,	// (0x0005ddd9) list_single_number_heading_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_number_heading_pane

0xa1f6,	// (0x0005ddd9) list_single_number_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_number_pane

0xa1f6,	// (0x0005ddd9) list_single_pane_ParamLimits

0xa1f6,	// (0x0005ddd9) list_single_pane

0xbd30,	// (0x0005f913) list_highlight_pane_cp1

0x128e,	// (0x00054e71) list_single_pane_g1_ParamLimits

0x128e,	// (0x00054e71) list_single_pane_g1

0x5470,	// (0x00059053) list_single_pane_g2_ParamLimits

0x5470,	// (0x00059053) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000631b5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000631b5) list_single_pane_g

0x6e41,	// (0x0005aa24) list_single_pane_t1_ParamLimits

0x6e41,	// (0x0005aa24) list_single_pane_t1

0x128e,	// (0x00054e71) list_single_number_pane_g1_ParamLimits

0x128e,	// (0x00054e71) list_single_number_pane_g1

0x5470,	// (0x00059053) list_single_number_pane_g2_ParamLimits

0x5470,	// (0x00059053) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000631b5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000631b5) list_single_number_pane_g

0x6d6b,	// (0x0005a94e) list_single_number_pane_t1_ParamLimits

0x6d6b,	// (0x0005a94e) list_single_number_pane_t1

0x6d81,	// (0x0005a964) list_single_number_pane_t2_ParamLimits

0x6d81,	// (0x0005a964) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00063547) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00063547) list_single_number_pane_t

0x5464,	// (0x00059047) list_single_graphic_pane_g1_ParamLimits

0x5464,	// (0x00059047) list_single_graphic_pane_g1

0x128e,	// (0x00054e71) list_single_graphic_pane_g2_ParamLimits

0x128e,	// (0x00054e71) list_single_graphic_pane_g2

0x5470,	// (0x00059053) list_single_graphic_pane_g3_ParamLimits

0x5470,	// (0x00059053) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000631a4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000631a4) list_single_graphic_pane_g

0x547c,	// (0x0005905f) list_single_graphic_pane_t1_ParamLimits

0x547c,	// (0x0005905f) list_single_graphic_pane_t1

0x5492,	// (0x00059075) list_single_heading_pane_g1_ParamLimits

0x5492,	// (0x00059075) list_single_heading_pane_g1

0x5470,	// (0x00059053) list_single_heading_pane_g2_ParamLimits

0x5470,	// (0x00059053) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000631ab) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000631ab) list_single_heading_pane_g

0x54a5,	// (0x00059088) list_single_heading_pane_t1_ParamLimits

0x54a5,	// (0x00059088) list_single_heading_pane_t1

0x54bb,	// (0x0005909e) list_single_heading_pane_t2_ParamLimits

0x54bb,	// (0x0005909e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000631b0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000631b0) list_single_heading_pane_t

0x128e,	// (0x00054e71) list_single_number_heading_pane_g1_ParamLimits

0x128e,	// (0x00054e71) list_single_number_heading_pane_g1

0x5470,	// (0x00059053) list_single_number_heading_pane_g2_ParamLimits

0x5470,	// (0x00059053) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000631b5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000631b5) list_single_number_heading_pane_g

0x54cd,	// (0x000590b0) list_single_number_heading_pane_t1_ParamLimits

0x54cd,	// (0x000590b0) list_single_number_heading_pane_t1

0x54e3,	// (0x000590c6) list_single_number_heading_pane_t2_ParamLimits

0x54e3,	// (0x000590c6) list_single_number_heading_pane_t2

0x54f5,	// (0x000590d8) list_single_number_heading_pane_t3_ParamLimits

0x54f5,	// (0x000590d8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000631ba) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000631ba) list_single_number_heading_pane_t

0x5507,	// (0x000590ea) list_single_graphic_heading_pane_g1_ParamLimits

0x5507,	// (0x000590ea) list_single_graphic_heading_pane_g1

0x551f,	// (0x00059102) list_single_graphic_heading_pane_g4_ParamLimits

0x551f,	// (0x00059102) list_single_graphic_heading_pane_g4

0x5470,	// (0x00059053) list_single_graphic_heading_pane_g5_ParamLimits

0x5470,	// (0x00059053) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000631c1) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000631c1) list_single_graphic_heading_pane_g

0x54cd,	// (0x000590b0) list_single_graphic_heading_pane_t1_ParamLimits

0x54cd,	// (0x000590b0) list_single_graphic_heading_pane_t1

0x5530,	// (0x00059113) list_single_graphic_heading_pane_t2_ParamLimits

0x5530,	// (0x00059113) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000631c8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000631c8) list_single_graphic_heading_pane_t

0x5548,	// (0x0005912b) list_single_large_graphic_pane_g1_ParamLimits

0x5548,	// (0x0005912b) list_single_large_graphic_pane_g1

0x5554,	// (0x00059137) list_single_large_graphic_pane_g2_ParamLimits

0x5554,	// (0x00059137) list_single_large_graphic_pane_g2

0x5560,	// (0x00059143) list_single_large_graphic_pane_g3_ParamLimits

0x5560,	// (0x00059143) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000631cd) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000631cd) list_single_large_graphic_pane_g

0x9031,	// (0x0005cc14) wait_border_pane_g2_copy1

0x556c,	// (0x0005914f) list_single_large_graphic_pane_g4_cp2

0x5574,	// (0x00059157) list_single_large_graphic_pane_t1_ParamLimits

0x5574,	// (0x00059157) list_single_large_graphic_pane_t1

0x558a,	// (0x0005916d) list_double_pane_g1_ParamLimits

0x558a,	// (0x0005916d) list_double_pane_g1

0x5596,	// (0x00059179) list_double_pane_g2_ParamLimits

0x5596,	// (0x00059179) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000631d4) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000631d4) list_double_pane_g

0x55a2,	// (0x00059185) list_double_pane_t1_ParamLimits

0x55a2,	// (0x00059185) list_double_pane_t1

0x55b8,	// (0x0005919b) list_double_pane_t2_ParamLimits

0x55b8,	// (0x0005919b) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000631d9) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000631d9) list_double_pane_t

0x55ca,	// (0x000591ad) list_double2_pane_g1_ParamLimits

0x55ca,	// (0x000591ad) list_double2_pane_g1

0x55db,	// (0x000591be) list_double2_pane_g2_ParamLimits

0x55db,	// (0x000591be) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000631de) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000631de) list_double2_pane_g

0x55e7,	// (0x000591ca) list_double2_pane_t1_ParamLimits

0x55e7,	// (0x000591ca) list_double2_pane_t1

0x55fd,	// (0x000591e0) list_double2_pane_t2_ParamLimits

0x55fd,	// (0x000591e0) list_double2_pane_t2

0x0001,

0xf600,	// (0x000631e3) list_double2_pane_t_ParamLimits

0xf600,	// (0x000631e3) list_double2_pane_t

0x558a,	// (0x0005916d) list_double_number_pane_g1_ParamLimits

0x558a,	// (0x0005916d) list_double_number_pane_g1

0x5596,	// (0x00059179) list_double_number_pane_g2_ParamLimits

0x5596,	// (0x00059179) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000631d4) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000631d4) list_double_number_pane_g

0x560f,	// (0x000591f2) list_double_number_pane_t1_ParamLimits

0x560f,	// (0x000591f2) list_double_number_pane_t1

0x5621,	// (0x00059204) list_double_number_pane_t2_ParamLimits

0x5621,	// (0x00059204) list_double_number_pane_t2

0x5637,	// (0x0005921a) list_double_number_pane_t3_ParamLimits

0x5637,	// (0x0005921a) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000631e8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000631e8) list_double_number_pane_t

0x5649,	// (0x0005922c) list_double_graphic_pane_g1_ParamLimits

0x5649,	// (0x0005922c) list_double_graphic_pane_g1

0x5655,	// (0x00059238) list_double_graphic_pane_g2_ParamLimits

0x5655,	// (0x00059238) list_double_graphic_pane_g2

0x5664,	// (0x00059247) list_double_graphic_pane_g3_ParamLimits

0x5664,	// (0x00059247) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000631ef) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000631ef) list_double_graphic_pane_g

0x567c,	// (0x0005925f) list_double_graphic_pane_t1_ParamLimits

0x567c,	// (0x0005925f) list_double_graphic_pane_t1

0x5692,	// (0x00059275) list_double_graphic_pane_t2_ParamLimits

0x5692,	// (0x00059275) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000631f8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000631f8) list_double_graphic_pane_t

0x56a4,	// (0x00059287) list_double2_graphic_pane_g1_ParamLimits

0x56a4,	// (0x00059287) list_double2_graphic_pane_g1

0x56b0,	// (0x00059293) list_double2_graphic_pane_g2_ParamLimits

0x56b0,	// (0x00059293) list_double2_graphic_pane_g2

0x56bc,	// (0x0005929f) list_double2_graphic_pane_g3_ParamLimits

0x56bc,	// (0x0005929f) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000631fd) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000631fd) list_double2_graphic_pane_g

0x56c8,	// (0x000592ab) list_double2_graphic_pane_t1_ParamLimits

0x56c8,	// (0x000592ab) list_double2_graphic_pane_t1

0x56de,	// (0x000592c1) list_double2_graphic_pane_t2_ParamLimits

0x56de,	// (0x000592c1) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00063204) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00063204) list_double2_graphic_pane_t

0x56f0,	// (0x000592d3) list_double_large_graphic_pane_g1_ParamLimits

0x56f0,	// (0x000592d3) list_double_large_graphic_pane_g1

0x570f,	// (0x000592f2) list_double_large_graphic_pane_g2_ParamLimits

0x570f,	// (0x000592f2) list_double_large_graphic_pane_g2

0x5596,	// (0x00059179) list_double_large_graphic_pane_g3_ParamLimits

0x5596,	// (0x00059179) list_double_large_graphic_pane_g3

0x5725,	// (0x00059308) list_double_large_graphic_pane_g4_ParamLimits

0x5725,	// (0x00059308) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00063209) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00063209) list_double_large_graphic_pane_g

0x5738,	// (0x0005931b) list_double_large_graphic_pane_t1_ParamLimits

0x5738,	// (0x0005931b) list_double_large_graphic_pane_t1

0x5751,	// (0x00059334) list_double_large_graphic_pane_t2_ParamLimits

0x5751,	// (0x00059334) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00063214) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00063214) list_double_large_graphic_pane_t

0x5763,	// (0x00059346) list_double2_large_graphic_pane_g1_ParamLimits

0x5763,	// (0x00059346) list_double2_large_graphic_pane_g1

0x576f,	// (0x00059352) list_double2_large_graphic_pane_g2_ParamLimits

0x576f,	// (0x00059352) list_double2_large_graphic_pane_g2

0x56bc,	// (0x0005929f) list_double2_large_graphic_pane_g3_ParamLimits

0x56bc,	// (0x0005929f) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00063219) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00063219) list_double2_large_graphic_pane_g

0x5780,	// (0x00059363) list_double2_large_graphic_pane_t1_ParamLimits

0x5780,	// (0x00059363) list_double2_large_graphic_pane_t1

0x5796,	// (0x00059379) list_double2_large_graphic_pane_t2_ParamLimits

0x5796,	// (0x00059379) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00063220) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00063220) list_double2_large_graphic_pane_t

0x57a8,	// (0x0005938b) list_double_heading_pane_g1_ParamLimits

0x57a8,	// (0x0005938b) list_double_heading_pane_g1

0x57b9,	// (0x0005939c) list_double_heading_pane_g2_ParamLimits

0x57b9,	// (0x0005939c) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00063225) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00063225) list_double_heading_pane_g

0x57c5,	// (0x000593a8) list_double_heading_pane_t1_ParamLimits

0x57c5,	// (0x000593a8) list_double_heading_pane_t1

0x57db,	// (0x000593be) list_double_heading_pane_t2_ParamLimits

0x57db,	// (0x000593be) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006322a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006322a) list_double_heading_pane_t

0x56a4,	// (0x00059287) list_double_graphic_heading_pane_g1_ParamLimits

0x56a4,	// (0x00059287) list_double_graphic_heading_pane_g1

0x57a8,	// (0x0005938b) list_double_graphic_heading_pane_g2_ParamLimits

0x57a8,	// (0x0005938b) list_double_graphic_heading_pane_g2

0x57b9,	// (0x0005939c) list_double_graphic_heading_pane_g3_ParamLimits

0x57b9,	// (0x0005939c) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006322f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006322f) list_double_graphic_heading_pane_g

0x57ed,	// (0x000593d0) list_double_graphic_heading_pane_t1_ParamLimits

0x57ed,	// (0x000593d0) list_double_graphic_heading_pane_t1

0x5803,	// (0x000593e6) list_double_graphic_heading_pane_t2_ParamLimits

0x5803,	// (0x000593e6) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00063236) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00063236) list_double_graphic_heading_pane_t

0x5815,	// (0x000593f8) list_double_time_pane_g1_ParamLimits

0x5815,	// (0x000593f8) list_double_time_pane_g1

0x5826,	// (0x00059409) list_double_time_pane_g2_ParamLimits

0x5826,	// (0x00059409) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006323b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006323b) list_double_time_pane_g

0x5832,	// (0x00059415) list_double_time_pane_t1_ParamLimits

0x5832,	// (0x00059415) list_double_time_pane_t1

0x5848,	// (0x0005942b) list_double_time_pane_t2_ParamLimits

0x5848,	// (0x0005942b) list_double_time_pane_t2

0x585a,	// (0x0005943d) list_double_time_pane_t3_ParamLimits

0x585a,	// (0x0005943d) list_double_time_pane_t3

0x586c,	// (0x0005944f) list_double_time_pane_t4_ParamLimits

0x586c,	// (0x0005944f) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00063240) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00063240) list_double_time_pane_t

0x587e,	// (0x00059461) list_setting_pane_g1_ParamLimits

0x587e,	// (0x00059461) list_setting_pane_g1

0x588a,	// (0x0005946d) list_setting_pane_g2_ParamLimits

0x588a,	// (0x0005946d) list_setting_pane_g2

0x0001,

0xf666,	// (0x00063249) list_setting_pane_g_ParamLimits

0xf666,	// (0x00063249) list_setting_pane_g

0x5896,	// (0x00059479) list_setting_pane_t1_ParamLimits

0x5896,	// (0x00059479) list_setting_pane_t1

0x58b0,	// (0x00059493) list_setting_pane_t2_ParamLimits

0x58b0,	// (0x00059493) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006324e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006324e) list_setting_pane_t

0x58ef,	// (0x000594d2) set_value_pane_cp_ParamLimits

0x58ef,	// (0x000594d2) set_value_pane_cp

0x58fd,	// (0x000594e0) list_setting_number_pane_g1_ParamLimits

0x58fd,	// (0x000594e0) list_setting_number_pane_g1

0x5909,	// (0x000594ec) list_setting_number_pane_g2_ParamLimits

0x5909,	// (0x000594ec) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00063255) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00063255) list_setting_number_pane_g

0x5915,	// (0x000594f8) list_setting_number_pane_t1_ParamLimits

0x5915,	// (0x000594f8) list_setting_number_pane_t1

0x592e,	// (0x00059511) list_setting_number_pane_t2_ParamLimits

0x592e,	// (0x00059511) list_setting_number_pane_t2

0x5948,	// (0x0005952b) list_setting_number_pane_t3_ParamLimits

0x5948,	// (0x0005952b) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006325a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006325a) list_setting_number_pane_t

0x58ef,	// (0x000594d2) set_value_pane_ParamLimits

0x58ef,	// (0x000594d2) set_value_pane

0xf0c9,	// (0x00062cac) bg_set_opt_pane_ParamLimits

0xf0c9,	// (0x00062cac) bg_set_opt_pane

0x340f,	// (0x00056ff2) set_value_pane_t1

0xf0ea,	// (0x00062ccd) slider_set_pane_cp3

0xf0f3,	// (0x00062cd6) volume_small_pane_cp

0xf0fc,	// (0x00062cdf) list_form_gen_pane

0xf105,	// (0x00062ce8) scroll_pane_cp8

0x598b,	// (0x0005956e) form_field_data_pane_ParamLimits

0x598b,	// (0x0005956e) form_field_data_pane

0x59ab,	// (0x0005958e) form_field_data_wide_pane_ParamLimits

0x59ab,	// (0x0005958e) form_field_data_wide_pane

0x59d2,	// (0x000595b5) form_field_popup_pane_ParamLimits

0x59d2,	// (0x000595b5) form_field_popup_pane

0x342d,	// (0x00057010) form_field_popup_wide_pane_ParamLimits

0x342d,	// (0x00057010) form_field_popup_wide_pane

0x344e,	// (0x00057031) form_field_slider_pane_ParamLimits

0x344e,	// (0x00057031) form_field_slider_pane

0x3461,	// (0x00057044) form_field_slider_wide_pane_ParamLimits

0x3461,	// (0x00057044) form_field_slider_wide_pane

0xf116,	// (0x00062cf9) data_form_pane

0x59fe,	// (0x000595e1) form_field_data_pane_t1

0xf122,	// (0x00062d05) input_focus_pane

0x3474,	// (0x00057057) data_form_wide_pane

0x3491,	// (0x00057074) form_field_data_wide_pane_t1

0xee9d,	// (0x00062a80) input_focus_pane_cp6

0x5a18,	// (0x000595fb) form_field_popup_pane_t1

0xf122,	// (0x00062d05) input_focus_pane_cp7

0xf150,	// (0x00062d33) list_form_pane

0x34bb,	// (0x0005709e) form_field_popup_wide_pane_t1

0xf122,	// (0x00062d05) input_focus_pane_cp8

0xf15c,	// (0x00062d3f) list_form_wide_pane

0x5a3a,	// (0x0005961d) form_field_slider_pane_t1_ParamLimits

0x5a3a,	// (0x0005961d) form_field_slider_pane_t1

0x5a52,	// (0x00059635) form_field_slider_pane_t2_ParamLimits

0x5a52,	// (0x00059635) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006326a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006326a) form_field_slider_pane_t

0xbdba,	// (0x0005f99d) input_focus_pane_cp9_ParamLimits

0xbdba,	// (0x0005f99d) input_focus_pane_cp9

0x5a67,	// (0x0005964a) slider_cont_pane_ParamLimits

0x5a67,	// (0x0005964a) slider_cont_pane

0xf168,	// (0x00062d4b) form_field_slider_wide_pane_t1_ParamLimits

0xf168,	// (0x00062d4b) form_field_slider_wide_pane_t1

0x34d0,	// (0x000570b3) form_field_slider_wide_pane_t2_ParamLimits

0x34d0,	// (0x000570b3) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006326f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006326f) form_field_slider_wide_pane_t

0xbdba,	// (0x0005f99d) input_focus_pane_cp10_ParamLimits

0xbdba,	// (0x0005f99d) input_focus_pane_cp10

0x5a7b,	// (0x0005965e) slider_cont_pane_cp1_ParamLimits

0x5a7b,	// (0x0005965e) slider_cont_pane_cp1

0x5a8f,	// (0x00059672) slider_form_pane_cp

0xf17a,	// (0x00062d5d) input_focus_pane_g1

0xf182,	// (0x00062d65) input_focus_pane_g2

0xf18a,	// (0x00062d6d) input_focus_pane_g3

0xf192,	// (0x00062d75) input_focus_pane_g4

0xf19a,	// (0x00062d7d) input_focus_pane_g5

0xf1a2,	// (0x00062d85) input_focus_pane_g6

0xf1aa,	// (0x00062d8d) input_focus_pane_g7

0xf1b2,	// (0x00062d95) input_focus_pane_g8

0xf1ba,	// (0x00062d9d) input_focus_pane_g9

0xbd26,	// (0x0005f909) input_focus_pane_g10

0x0009,

0xf691,	// (0x00063274) input_focus_pane_g

0x903a,	// (0x0005cc1d) wait_border_pane_g3_copy1

0x5a97,	// (0x0005967a) data_form_pane_t1

0xbd26,	// (0x0005f909) wait_anim_pane_g1_copy1

0x6e0b,	// (0x0005a9ee) data_form_wide_pane_t1

0x34e2,	// (0x000570c5) list_form_graphic_pane_cp_ParamLimits

0x34e2,	// (0x000570c5) list_form_graphic_pane_cp

0xa14d,	// (0x0005dd30) slider_form_pane_g1

0xa156,	// (0x0005dd39) slider_form_pane_g2

0x0006,

0xf994,	// (0x00063577) slider_form_pane_g

0x34e2,	// (0x000570c5) list_form_graphic_pane_ParamLimits

0x34e2,	// (0x000570c5) list_form_graphic_pane

0x34f4,	// (0x000570d7) list_form_graphic_pane_g1

0x34fc,	// (0x000570df) list_form_graphic_pane_t1_ParamLimits

0x34fc,	// (0x000570df) list_form_graphic_pane_t1

0xbd7e,	// (0x0005f961) list_highlight_pane_cp5_ParamLimits

0xbd7e,	// (0x0005f961) list_highlight_pane_cp5

0x5ab6,	// (0x00059699) find_pane_g1

0xf1c2,	// (0x00062da5) input_find_pane

0x5abf,	// (0x000596a2) input_find_pane_g1_ParamLimits

0x5abf,	// (0x000596a2) input_find_pane_g1

0x5acb,	// (0x000596ae) input_find_pane_t1_ParamLimits

0x5acb,	// (0x000596ae) input_find_pane_t1

0x5ae0,	// (0x000596c3) input_find_pane_t2_ParamLimits

0x5ae0,	// (0x000596c3) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00063289) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00063289) input_find_pane_t

0xf1cb,	// (0x00062dae) input_focus_pane_cp5_ParamLimits

0xf1cb,	// (0x00062dae) input_focus_pane_cp5

0xf1d9,	// (0x00062dbc) bg_popup_window_pane_cp2_ParamLimits

0xf1d9,	// (0x00062dbc) bg_popup_window_pane_cp2

0xf1e6,	// (0x00062dc9) listscroll_menu_pane_ParamLimits

0xf1e6,	// (0x00062dc9) listscroll_menu_pane

0x5b01,	// (0x000596e4) popup_submenu_window_ParamLimits

0x5b01,	// (0x000596e4) popup_submenu_window

0xf1f2,	// (0x00062dd5) find_popup_pane_g1

0xf1fa,	// (0x00062ddd) input_popup_find_pane_cp

0xf1cb,	// (0x00062dae) input_focus_pane_cp4_ParamLimits

0xf1cb,	// (0x00062dae) input_focus_pane_cp4

0xf204,	// (0x00062de7) input_popup_find_pane_t1_ParamLimits

0xf204,	// (0x00062de7) input_popup_find_pane_t1

0xbd30,	// (0x0005f913) bg_popup_sub_pane_cp

0xf232,	// (0x00062e15) listscroll_popup_sub_pane

0xf23a,	// (0x00062e1d) list_submenu_pane_ParamLimits

0xf23a,	// (0x00062e1d) list_submenu_pane

0xf24b,	// (0x00062e2e) scroll_pane_cp4

0xf253,	// (0x00062e36) list_single_popup_submenu_pane_ParamLimits

0xf253,	// (0x00062e36) list_single_popup_submenu_pane

0xf268,	// (0x00062e4b) list_single_popup_submenu_pane_g1

0xf270,	// (0x00062e53) list_single_popup_submenu_pane_t1_ParamLimits

0xf270,	// (0x00062e53) list_single_popup_submenu_pane_t1

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp1_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp1

0x5b3f,	// (0x00059722) tabs_2_active_pane_g1

0x5b47,	// (0x0005972a) tabs_2_active_pane_t1

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp1_ParamLimits

0xbd7e,	// (0x0005f961) bg_passive_tab_pane_cp1

0x5b3f,	// (0x00059722) tabs_2_passive_pane_g1

0x5b47,	// (0x0005972a) tabs_2_passive_pane_t1

0x191b,	// (0x000554fe) bg_active_tab_pane_cp4

0x5b59,	// (0x0005973c) tabs_2_long_active_pane_t1

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp4

0x6a90,	// (0x0005a673) list_single_midp_graphic_pane_g4_ParamLimits

0x191b,	// (0x000554fe) bg_active_tab_pane_cp5

0x5b78,	// (0x0005975b) tabs_3_long_active_pane_t1

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp5

0x6a90,	// (0x0005a673) list_single_midp_graphic_pane_g4

0xbd7e,	// (0x0005f961) bg_popup_window_pane_cp13_ParamLimits

0xbd7e,	// (0x0005f961) bg_popup_window_pane_cp13

0xf28e,	// (0x00062e71) listscroll_popup_fast_pane_ParamLimits

0xf28e,	// (0x00062e71) listscroll_popup_fast_pane

0xf29d,	// (0x00062e80) grid_popup_fast_pane_ParamLimits

0xf29d,	// (0x00062e80) grid_popup_fast_pane

0xf2af,	// (0x00062e92) scroll_pane_cp9_ParamLimits

0xf2af,	// (0x00062e92) scroll_pane_cp9

0xba7d,	// (0x0005f660) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xba7d,	// (0x0005f660) list_single_graphic_hl_pane_t1_cp2

0xf2d3,	// (0x00062eb6) input_focus_pane_cp20_ParamLimits

0xf2d3,	// (0x00062eb6) input_focus_pane_cp20

0xf2e1,	// (0x00062ec4) query_popup_data_pane_t1_ParamLimits

0xf2e1,	// (0x00062ec4) query_popup_data_pane_t1

0xf2f4,	// (0x00062ed7) query_popup_data_pane_t2_ParamLimits

0xf2f4,	// (0x00062ed7) query_popup_data_pane_t2

0xf33a,	// (0x00062f1d) query_popup_data_pane_t3_ParamLimits

0xf33a,	// (0x00062f1d) query_popup_data_pane_t3

0xf37b,	// (0x00062f5e) query_popup_data_pane_t4_ParamLimits

0xf37b,	// (0x00062f5e) query_popup_data_pane_t4

0xf3b7,	// (0x00062f9a) query_popup_data_pane_t5_ParamLimits

0xf3b7,	// (0x00062f9a) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006328e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006328e) query_popup_data_pane_t

0xf17a,	// (0x00062d5d) bg_set_opt_pane_g1

0xf182,	// (0x00062d65) bg_set_opt_pane_g2

0xf18a,	// (0x00062d6d) bg_set_opt_pane_g3

0xf192,	// (0x00062d75) bg_set_opt_pane_g4

0xf19a,	// (0x00062d7d) bg_set_opt_pane_g5

0xf1a2,	// (0x00062d85) bg_set_opt_pane_g6

0xf1aa,	// (0x00062d8d) bg_set_opt_pane_g7

0xf1b2,	// (0x00062d95) bg_set_opt_pane_g8

0xf1ba,	// (0x00062d9d) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00063299) bg_set_opt_pane_g

0x6089,	// (0x00059c6c) control_top_pane_stacon_ParamLimits

0x6089,	// (0x00059c6c) control_top_pane_stacon

0x60dc,	// (0x00059cbf) signal_pane_stacon_ParamLimits

0x60dc,	// (0x00059cbf) signal_pane_stacon

0x36ee,	// (0x000572d1) stacon_top_pane_g1_ParamLimits

0x36ee,	// (0x000572d1) stacon_top_pane_g1

0x6101,	// (0x00059ce4) title_pane_stacon_ParamLimits

0x6101,	// (0x00059ce4) title_pane_stacon

0x612b,	// (0x00059d0e) uni_indicator_pane_stacon_ParamLimits

0x612b,	// (0x00059d0e) uni_indicator_pane_stacon

0x6140,	// (0x00059d23) battery_pane_stacon_ParamLimits

0x6140,	// (0x00059d23) battery_pane_stacon

0x6184,	// (0x00059d67) control_bottom_pane_stacon_ParamLimits

0x6184,	// (0x00059d67) control_bottom_pane_stacon

0x61a7,	// (0x00059d8a) navi_pane_stacon_ParamLimits

0x61a7,	// (0x00059d8a) navi_pane_stacon

0x3710,	// (0x000572f3) stacon_bottom_pane_g1_ParamLimits

0x3710,	// (0x000572f3) stacon_bottom_pane_g1

0x5b8a,	// (0x0005976d) aid_levels_signal_lsc_ParamLimits

0x5b8a,	// (0x0005976d) aid_levels_signal_lsc

0x5ba1,	// (0x00059784) signal_pane_stacon_g1_ParamLimits

0x5ba1,	// (0x00059784) signal_pane_stacon_g1

0x5bb5,	// (0x00059798) signal_pane_stacon_g2_ParamLimits

0x5bb5,	// (0x00059798) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000632ac) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000632ac) signal_pane_stacon_g

0x5bea,	// (0x000597cd) title_pane_stacon_t1_ParamLimits

0x5bea,	// (0x000597cd) title_pane_stacon_t1

0xf3fb,	// (0x00062fde) uni_indicator_pane_stacon_g1

0xf405,	// (0x00062fe8) uni_indicator_pane_stacon_g2

0xf40f,	// (0x00062ff2) uni_indicator_pane_stacon_g3

0xf419,	// (0x00062ffc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000632b8) uni_indicator_pane_stacon_g

0x5c0f,	// (0x000597f2) control_top_pane_stacon_g1

0x5c17,	// (0x000597fa) control_top_pane_stacon_t1_ParamLimits

0x5c17,	// (0x000597fa) control_top_pane_stacon_t1

0x5c4e,	// (0x00059831) aid_levels_battery_lsc_ParamLimits

0x5c4e,	// (0x00059831) aid_levels_battery_lsc

0x5c66,	// (0x00059849) battery_pane_stacon_g1_ParamLimits

0x5c66,	// (0x00059849) battery_pane_stacon_g1

0x5c79,	// (0x0005985c) battery_pane_stacon_g2_ParamLimits

0x5c79,	// (0x0005985c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000632c1) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000632c1) battery_pane_stacon_g

0x5cb7,	// (0x0005989a) navi_icon_pane_stacon

0x5ccb,	// (0x000598ae) navi_navi_pane_stacon

0x5cb7,	// (0x0005989a) navi_text_pane_stacon

0x5c0f,	// (0x000597f2) control_bottom_pane_stacon_g1

0x5ce1,	// (0x000598c4) control_bottom_pane_stacon_t1_ParamLimits

0x5ce1,	// (0x000598c4) control_bottom_pane_stacon_t1

0x5d18,	// (0x000598fb) grid_app_pane_ParamLimits

0x5d18,	// (0x000598fb) grid_app_pane

0x5d3a,	// (0x0005991d) scroll_pane_cp15_ParamLimits

0x5d3a,	// (0x0005991d) scroll_pane_cp15

0x5d4d,	// (0x00059930) cell_app_pane_ParamLimits

0x5d4d,	// (0x00059930) cell_app_pane

0x5d79,	// (0x0005995c) cell_app_pane_g1_ParamLimits

0x5d79,	// (0x0005995c) cell_app_pane_g1

0xf43d,	// (0x00063020) cell_app_pane_g2_ParamLimits

0xf43d,	// (0x00063020) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000632c6) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000632c6) cell_app_pane_g

0x5d9d,	// (0x00059980) cell_app_pane_t1_ParamLimits

0x5d9d,	// (0x00059980) cell_app_pane_t1

0xf449,	// (0x0006302c) grid_highlight_pane_ParamLimits

0xf449,	// (0x0006302c) grid_highlight_pane

0xf17a,	// (0x00062d5d) cell_highlight_pane_g1

0xf182,	// (0x00062d65) cell_highlight_pane_g2

0xf18a,	// (0x00062d6d) cell_highlight_pane_g3

0xf192,	// (0x00062d75) cell_highlight_pane_g4

0xf19a,	// (0x00062d7d) cell_highlight_pane_g5

0xf1a2,	// (0x00062d85) cell_highlight_pane_g6

0xf1aa,	// (0x00062d8d) cell_highlight_pane_g7

0xf1b2,	// (0x00062d95) cell_highlight_pane_g8

0xf1ba,	// (0x00062d9d) cell_highlight_pane_g9

0xbd26,	// (0x0005f909) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00063274) cell_highlight_pane_g

0xf45a,	// (0x0006303d) bg_scroll_pane

0x5dc7,	// (0x000599aa) scroll_handle_pane

0xf4a1,	// (0x00063084) scroll_bg_pane_g1

0xf4b6,	// (0x00063099) scroll_bg_pane_g2

0xf4ce,	// (0x000630b1) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000632cb) scroll_bg_pane_g

0xf4e3,	// (0x000630c6) scroll_handle_focus_pane_ParamLimits

0xf4e3,	// (0x000630c6) scroll_handle_focus_pane

0xf4a1,	// (0x00063084) scroll_handle_pane_g1

0xf4f0,	// (0x000630d3) scroll_handle_pane_g2

0xf4ce,	// (0x000630b1) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x000632d2) scroll_handle_pane_g

0xf1cb,	// (0x00062dae) bg_popup_sub_pane_cp21_ParamLimits

0xf1cb,	// (0x00062dae) bg_popup_sub_pane_cp21

0xf504,	// (0x000630e7) popup_fep_japan_predictive_window_t1_ParamLimits

0xf504,	// (0x000630e7) popup_fep_japan_predictive_window_t1

0xf51b,	// (0x000630fe) popup_fep_japan_predictive_window_t2_ParamLimits

0xf51b,	// (0x000630fe) popup_fep_japan_predictive_window_t2

0x1202,	// (0x00054de5) popup_fep_japan_predictive_window_t3_ParamLimits

0x1202,	// (0x00054de5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x000632d9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x000632d9) popup_fep_japan_predictive_window_t

0xbd30,	// (0x0005f913) bg_popup_sub_pane_cp23

0x1239,	// (0x00054e1c) listscroll_japin_cand_pane

0x1241,	// (0x00054e24) popup_fep_japan_candidate_window_t1

0x124f,	// (0x00054e32) candidate_pane_ParamLimits

0x124f,	// (0x00054e32) candidate_pane

0x1261,	// (0x00054e44) scroll_pane_cp30

0x126b,	// (0x00054e4e) list_single_popup_jap_candidate_pane_ParamLimits

0x126b,	// (0x00054e4e) list_single_popup_jap_candidate_pane

0xbd30,	// (0x0005f913) list_highlight_pane_cp30

0x127f,	// (0x00054e62) list_single_popup_jap_candidate_pane_t1

0x5df0,	// (0x000599d3) level_1_signal

0x5dfd,	// (0x000599e0) level_2_signal

0x5e0a,	// (0x000599ed) level_3_signal

0x5e17,	// (0x000599fa) level_4_signal

0x5e24,	// (0x00059a07) level_5_signal

0x5e31,	// (0x00059a14) level_6_signal

0x5e3e,	// (0x00059a21) level_7_signal

0x5df0,	// (0x000599d3) level_1_battery

0x5dfd,	// (0x000599e0) level_2_battery

0x5e0a,	// (0x000599ed) level_3_battery

0x5e17,	// (0x000599fa) level_4_battery

0x5e24,	// (0x00059a07) level_5_battery

0x5e31,	// (0x00059a14) level_6_battery

0x5e3e,	// (0x00059a21) level_7_battery

0x3529,	// (0x0005710c) list_menu_pane_ParamLimits

0x3529,	// (0x0005710c) list_menu_pane

0x353f,	// (0x00057122) scroll_pane_cp25_ParamLimits

0x353f,	// (0x00057122) scroll_pane_cp25

0x3558,	// (0x0005713b) list_double2_graphic_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double2_graphic_pane_cp2

0x3558,	// (0x0005713b) list_double2_large_graphic_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double2_large_graphic_pane_cp2

0x3558,	// (0x0005713b) list_double2_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double2_pane_cp2

0x3558,	// (0x0005713b) list_double_graphic_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double_graphic_pane_cp2

0x3558,	// (0x0005713b) list_double_large_graphic_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double_large_graphic_pane_cp2

0x3558,	// (0x0005713b) list_double_number_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double_number_pane_cp2

0x3558,	// (0x0005713b) list_double_pane_cp2_ParamLimits

0x3558,	// (0x0005713b) list_double_pane_cp2

0x5e80,	// (0x00059a63) list_single_2graphic_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_2graphic_pane_cp2

0x5e80,	// (0x00059a63) list_single_graphic_heading_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_graphic_heading_pane_cp2

0x5e80,	// (0x00059a63) list_single_graphic_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_graphic_pane_cp2

0x5e80,	// (0x00059a63) list_single_heading_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_heading_pane_cp2

0x3568,	// (0x0005714b) list_single_large_graphic_pane_cp2_ParamLimits

0x3568,	// (0x0005714b) list_single_large_graphic_pane_cp2

0x5e80,	// (0x00059a63) list_single_number_heading_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_number_heading_pane_cp2

0x5e80,	// (0x00059a63) list_single_number_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_number_pane_cp2

0x5e80,	// (0x00059a63) list_single_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_pane_cp2

0x3581,	// (0x00057164) bg_popup_sub_pane_cp22

0x5f5c,	// (0x00059b3f) popup_side_volume_key_window_g1

0x5f86,	// (0x00059b69) popup_side_volume_key_window_t1

0x5fa4,	// (0x00059b87) volume_small_pane_cp1

0xbdba,	// (0x0005f99d) bg_popup_sub_pane_cp24_ParamLimits

0xbdba,	// (0x0005f99d) bg_popup_sub_pane_cp24

0x3597,	// (0x0005717a) fep_china_uni_candidate_pane_ParamLimits

0x3597,	// (0x0005717a) fep_china_uni_candidate_pane

0x35ab,	// (0x0005718e) fep_china_uni_entry_pane

0x35bb,	// (0x0005719e) popup_fep_china_uni_window_g1

0x35d7,	// (0x000571ba) fep_china_uni_entry_pane_g1

0x35e1,	// (0x000571c4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006330a) fep_china_uni_entry_pane_g

0x35eb,	// (0x000571ce) fep_entry_item_pane

0x35f5,	// (0x000571d8) fep_candidate_item_pane

0x35fd,	// (0x000571e0) fep_china_uni_candidate_pane_g1

0x3607,	// (0x000571ea) fep_china_uni_candidate_pane_g2

0x360f,	// (0x000571f2) fep_china_uni_candidate_pane_g3

0x3617,	// (0x000571fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006330f) fep_china_uni_candidate_pane_g

0xbd26,	// (0x0005f909) fep_entry_item_pane_g1

0x3621,	// (0x00057204) fep_entry_item_pane_t1_ParamLimits

0x3621,	// (0x00057204) fep_entry_item_pane_t1

0x3637,	// (0x0005721a) fep_candidate_item_pane_t1_ParamLimits

0x3637,	// (0x0005721a) fep_candidate_item_pane_t1

0x364c,	// (0x0005722f) fep_candidate_item_pane_t2_ParamLimits

0x364c,	// (0x0005722f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00063318) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00063318) fep_candidate_item_pane_t

0xbd7e,	// (0x0005f961) list_highlight_pane_cp31_ParamLimits

0xbd7e,	// (0x0005f961) list_highlight_pane_cp31

0x365e,	// (0x00057241) level_1_signal_lsc

0x3667,	// (0x0005724a) level_2_signal_lsc

0x3670,	// (0x00057253) level_3_signal_lsc

0x3679,	// (0x0005725c) level_4_signal_lsc

0x3682,	// (0x00057265) level_5_signal_lsc

0x368b,	// (0x0005726e) level_6_signal_lsc

0x3694,	// (0x00057277) level_7_signal_lsc

0x3694,	// (0x00057277) level_1_battery_lsc

0x369d,	// (0x00057280) level_2_battery_lsc

0x36a6,	// (0x00057289) level_3_battery_lsc

0x36af,	// (0x00057292) level_4_battery_lsc

0x36b8,	// (0x0005729b) level_5_battery_lsc

0x36c1,	// (0x000572a4) level_6_battery_lsc

0x365e,	// (0x00057241) level_7_battery_lsc

0x36ca,	// (0x000572ad) scroll_handle_focus_pane_g1

0x36d3,	// (0x000572b6) scroll_handle_focus_pane_g2

0x36dc,	// (0x000572bf) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006331d) scroll_handle_focus_pane_g

0x5fac,	// (0x00059b8f) list_single_2graphic_pane_g1_ParamLimits

0x5fac,	// (0x00059b8f) list_single_2graphic_pane_g1

0x551f,	// (0x00059102) list_single_2graphic_pane_g2_ParamLimits

0x551f,	// (0x00059102) list_single_2graphic_pane_g2

0x5470,	// (0x00059053) list_single_2graphic_pane_g3_ParamLimits

0x5470,	// (0x00059053) list_single_2graphic_pane_g3

0x5fb8,	// (0x00059b9b) list_single_2graphic_pane_g4_ParamLimits

0x5fb8,	// (0x00059b9b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00063324) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00063324) list_single_2graphic_pane_g

0x5fc9,	// (0x00059bac) list_single_2graphic_pane_t1_ParamLimits

0x5fc9,	// (0x00059bac) list_single_2graphic_pane_t1

0x5ff7,	// (0x00059bda) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5ff7,	// (0x00059bda) list_double2_graphic_large_graphic_pane_g1

0x576f,	// (0x00059352) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x576f,	// (0x00059352) list_double2_graphic_large_graphic_pane_g2

0x56bc,	// (0x0005929f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x56bc,	// (0x0005929f) list_double2_graphic_large_graphic_pane_g3

0x6009,	// (0x00059bec) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6009,	// (0x00059bec) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006332d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006332d) list_double2_graphic_large_graphic_pane_g

0x6015,	// (0x00059bf8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6015,	// (0x00059bf8) list_double2_graphic_large_graphic_pane_t1

0x602b,	// (0x00059c0e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x602b,	// (0x00059c0e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00063336) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00063336) list_double2_graphic_large_graphic_pane_t

0x37d0,	// (0x000573b3) popup_fast_swap_window_ParamLimits

0x37d0,	// (0x000573b3) popup_fast_swap_window

0x37ee,	// (0x000573d1) popup_side_volume_key_window

0x380c,	// (0x000573ef) stacon_top_pane

0x3816,	// (0x000573f9) status_pane_ParamLimits

0x3816,	// (0x000573f9) status_pane

0x61ca,	// (0x00059dad) status_small_pane

0xbd30,	// (0x0005f913) control_pane

0xbd30,	// (0x0005f913) stacon_bottom_pane

0xf105,	// (0x00062ce8) scroll_pane_cp121

0xf0fc,	// (0x00062cdf) set_content_pane

0x603d,	// (0x00059c20) bg_active_tab_pane_g1_cp1

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp1

0x6046,	// (0x00059c29) bg_active_tab_pane_g3_cp1

0x603d,	// (0x00059c20) bg_passive_tab_pane_g1_cp1

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp1

0x6046,	// (0x00059c29) bg_passive_tab_pane_g3_cp1

0x604f,	// (0x00059c32) bg_active_tab_pane_g1_cp2

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp2

0x6058,	// (0x00059c3b) bg_active_tab_pane_g3_cp2

0x604f,	// (0x00059c32) bg_passive_tab_pane_g1_cp2

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp2

0x6058,	// (0x00059c3b) bg_passive_tab_pane_g3_cp2

0x6061,	// (0x00059c44) bg_active_tab_pane_g1_cp3

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp3

0x606a,	// (0x00059c4d) bg_active_tab_pane_g3_cp3

0x6061,	// (0x00059c44) bg_passive_tab_pane_g1_cp3

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp3

0x606a,	// (0x00059c4d) bg_passive_tab_pane_g3_cp3

0x6073,	// (0x00059c56) bg_active_tab_pane_g1_cp4

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp4

0x607e,	// (0x00059c61) bg_active_tab_pane_g3_cp4

0x6073,	// (0x00059c56) bg_passive_tab_pane_g1_cp4

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp4

0x607e,	// (0x00059c61) bg_passive_tab_pane_g3_cp4

0x3735,	// (0x00057318) bg_active_tab_pane_g1_cp5

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp5

0x372c,	// (0x0005730f) bg_active_tab_pane_g3_cp5

0x3735,	// (0x00057318) bg_passive_tab_pane_g1_cp5

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp5

0x372c,	// (0x0005730f) bg_passive_tab_pane_g3_cp5

0x373e,	// (0x00057321) list_set_graphic_pane_ParamLimits

0x373e,	// (0x00057321) list_set_graphic_pane

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp4

0x3751,	// (0x00057334) list_set_graphic_pane_g1_ParamLimits

0x3751,	// (0x00057334) list_set_graphic_pane_g1

0x375d,	// (0x00057340) list_set_graphic_pane_g2_ParamLimits

0x375d,	// (0x00057340) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006333b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006333b) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x000636bc) volume_small_pane_cp_g

0x3781,	// (0x00057364) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3781,	// (0x00057364) list_double2_large_graphic_pane_g1_cp2

0x378f,	// (0x00057372) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x378f,	// (0x00057372) list_double2_large_graphic_pane_g2_cp2

0x37a0,	// (0x00057383) list_double2_large_graphic_pane_g3_cp2

0x37a8,	// (0x0005738b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x37a8,	// (0x0005738b) list_double2_large_graphic_pane_t1_cp2

0x37be,	// (0x000573a1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x37be,	// (0x000573a1) list_double2_large_graphic_pane_t2_cp2

0x9b1e,	// (0x0005d701) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9b1e,	// (0x0005d701) list_double_large_graphic_pane_g1_cp2

0x9b31,	// (0x0005d714) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9b31,	// (0x0005d714) list_double_large_graphic_pane_g2_cp2

0x80ac,	// (0x0005bc8f) list_double_large_graphic_pane_g3_cp2

0x9b42,	// (0x0005d725) list_double_large_graphic_pane_g4_cp

0x9b4a,	// (0x0005d72d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9b4a,	// (0x0005d72d) list_double_large_graphic_pane_t1_cp2

0x9b61,	// (0x0005d744) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9b61,	// (0x0005d744) list_double_large_graphic_pane_t2_cp2

0x3824,	// (0x00057407) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3824,	// (0x00057407) list_double2_graphic_pane_g1_cp2

0x3832,	// (0x00057415) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3832,	// (0x00057415) list_double2_graphic_pane_g2_cp2

0x3843,	// (0x00057426) list_double2_graphic_pane_g3_cp2

0x384d,	// (0x00057430) list_double2_graphic_pane_t1_cp2_ParamLimits

0x384d,	// (0x00057430) list_double2_graphic_pane_t1_cp2

0x3863,	// (0x00057446) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3863,	// (0x00057446) list_double2_graphic_pane_t2_cp2

0x3875,	// (0x00057458) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3875,	// (0x00057458) list_single_number_heading_pane_g1_cp2

0x3881,	// (0x00057464) list_single_number_heading_pane_g2_cp2

0x3889,	// (0x0005746c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3889,	// (0x0005746c) list_single_number_heading_pane_t1_cp2

0x389f,	// (0x00057482) list_single_number_heading_pane_t2_cp2_ParamLimits

0x389f,	// (0x00057482) list_single_number_heading_pane_t2_cp2

0x38b3,	// (0x00057496) list_single_number_heading_pane_t3_cp2_ParamLimits

0x38b3,	// (0x00057496) list_single_number_heading_pane_t3_cp2

0x3875,	// (0x00057458) list_single_heading_pane_g1_cp2_ParamLimits

0x3875,	// (0x00057458) list_single_heading_pane_g1_cp2

0x3881,	// (0x00057464) list_single_heading_pane_g2_cp2

0x3889,	// (0x0005746c) list_single_heading_pane_t1_cp2_ParamLimits

0x3889,	// (0x0005746c) list_single_heading_pane_t1_cp2

0x9918,	// (0x0005d4fb) list_single_heading_pane_t2_cp2_ParamLimits

0x9918,	// (0x0005d4fb) list_single_heading_pane_t2_cp2

0x9860,	// (0x0005d443) list_double_graphic_pane_g1_cp2_ParamLimits

0x9860,	// (0x0005d443) list_double_graphic_pane_g1_cp2

0x986c,	// (0x0005d44f) list_double_graphic_pane_g2_cp2_ParamLimits

0x986c,	// (0x0005d44f) list_double_graphic_pane_g2_cp2

0x987b,	// (0x0005d45e) list_double_graphic_pane_g3_cp2

0x9883,	// (0x0005d466) list_double_graphic_pane_t1_cp2_ParamLimits

0x9883,	// (0x0005d466) list_double_graphic_pane_t1_cp2

0x9899,	// (0x0005d47c) list_double_graphic_pane_t2_cp2_ParamLimits

0x9899,	// (0x0005d47c) list_double_graphic_pane_t2_cp2

0x80a0,	// (0x0005bc83) list_double_number_pane_g1_cp2_ParamLimits

0x80a0,	// (0x0005bc83) list_double_number_pane_g1_cp2

0x80ac,	// (0x0005bc8f) list_double_number_pane_g2_cp2

0x9824,	// (0x0005d407) list_double_number_pane_t1_cp2_ParamLimits

0x9824,	// (0x0005d407) list_double_number_pane_t1_cp2

0x9838,	// (0x0005d41b) list_double_number_pane_t2_cp2_ParamLimits

0x9838,	// (0x0005d41b) list_double_number_pane_t2_cp2

0x984e,	// (0x0005d431) list_double_number_pane_t3_cp2_ParamLimits

0x984e,	// (0x0005d431) list_double_number_pane_t3_cp2

0x970d,	// (0x0005d2f0) list_single_graphic_pane_g1_cp2_ParamLimits

0x970d,	// (0x0005d2f0) list_single_graphic_pane_g1_cp2

0x128e,	// (0x00054e71) list_single_graphic_pane_g2_cp2_ParamLimits

0x128e,	// (0x00054e71) list_single_graphic_pane_g2_cp2

0x8106,	// (0x0005bce9) list_single_graphic_pane_g3_cp2

0x96e3,	// (0x0005d2c6) list_single_graphic_pane_t1_cp2_ParamLimits

0x96e3,	// (0x0005d2c6) list_single_graphic_pane_t1_cp2

0x128e,	// (0x00054e71) list_single_number_pane_g1_cp2_ParamLimits

0x128e,	// (0x00054e71) list_single_number_pane_g1_cp2

0x8106,	// (0x0005bce9) list_single_number_pane_g2_cp2

0x96e3,	// (0x0005d2c6) list_single_number_pane_t1_cp2_ParamLimits

0x96e3,	// (0x0005d2c6) list_single_number_pane_t1_cp2

0x96f9,	// (0x0005d2dc) list_single_number_pane_t2_cp2_ParamLimits

0x96f9,	// (0x0005d2dc) list_single_number_pane_t2_cp2

0x378f,	// (0x00057372) list_double2_pane_g1_cp2_ParamLimits

0x378f,	// (0x00057372) list_double2_pane_g1_cp2

0x37a0,	// (0x00057383) list_double2_pane_g2_cp2

0x8078,	// (0x0005bc5b) list_double2_pane_t1_cp2_ParamLimits

0x8078,	// (0x0005bc5b) list_double2_pane_t1_cp2

0x808e,	// (0x0005bc71) list_double2_pane_t2_cp2_ParamLimits

0x808e,	// (0x0005bc71) list_double2_pane_t2_cp2

0x80a0,	// (0x0005bc83) list_double_pane_g1_cp2_ParamLimits

0x80a0,	// (0x0005bc83) list_double_pane_g1_cp2

0x80ac,	// (0x0005bc8f) list_double_pane_g2_cp2

0x80b4,	// (0x0005bc97) list_double_pane_t1_cp2_ParamLimits

0x80b4,	// (0x0005bc97) list_double_pane_t1_cp2

0x80ca,	// (0x0005bcad) list_double_pane_t2_cp2_ParamLimits

0x80ca,	// (0x0005bcad) list_double_pane_t2_cp2

0x80f6,	// (0x0005bcd9) list_single_pane_cp2_g3

0x128e,	// (0x00054e71) list_single_pane_g1_cp2_ParamLimits

0x128e,	// (0x00054e71) list_single_pane_g1_cp2

0x8106,	// (0x0005bce9) list_single_pane_g2_cp2

0x810e,	// (0x0005bcf1) list_single_pane_t1_cp2_ParamLimits

0x810e,	// (0x0005bcf1) list_single_pane_t1_cp2

0x8126,	// (0x0005bd09) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8126,	// (0x0005bd09) list_single_large_graphic_pane_g1_cp2

0x8134,	// (0x0005bd17) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8134,	// (0x0005bd17) list_single_large_graphic_pane_g2_cp2

0x8140,	// (0x0005bd23) list_single_large_graphic_pane_g3_cp2

0x8148,	// (0x0005bd2b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8148,	// (0x0005bd2b) list_single_large_graphic_pane_g4_cp1

0x8162,	// (0x0005bd45) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8162,	// (0x0005bd45) list_single_large_graphic_pane_t1_cp2

0x96ad,	// (0x0005d290) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x96ad,	// (0x0005d290) list_single_graphic_heading_pane_g1_cp2

0x967a,	// (0x0005d25d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x967a,	// (0x0005d25d) list_single_graphic_heading_pane_g4_cp2

0x8106,	// (0x0005bce9) list_single_graphic_heading_pane_g5_cp2

0x96b9,	// (0x0005d29c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x96b9,	// (0x0005d29c) list_single_graphic_heading_pane_t1_cp2

0x96cf,	// (0x0005d2b2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x96cf,	// (0x0005d2b2) list_single_graphic_heading_pane_t2_cp2

0x966e,	// (0x0005d251) list_single_2graphic_pane_g1_cp2_ParamLimits

0x966e,	// (0x0005d251) list_single_2graphic_pane_g1_cp2

0x967a,	// (0x0005d25d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x967a,	// (0x0005d25d) list_single_2graphic_pane_g2_cp2

0x8106,	// (0x0005bce9) list_single_2graphic_pane_g3_cp2

0x968b,	// (0x0005d26e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x968b,	// (0x0005d26e) list_single_2graphic_pane_g4_cp2

0x9697,	// (0x0005d27a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9697,	// (0x0005d27a) list_single_2graphic_pane_t1_cp2

0xbd26,	// (0x0005f909) list_highlight_pane_g10_cp1

0x9246,	// (0x0005ce29) list_highlight_pane_g1_cp1

0x924e,	// (0x0005ce31) list_highlight_pane_g2_cp1

0x9256,	// (0x0005ce39) list_highlight_pane_g3_cp1

0x925e,	// (0x0005ce41) list_highlight_pane_g4_cp1

0x9266,	// (0x0005ce49) list_highlight_pane_g5_cp1

0x926e,	// (0x0005ce51) list_highlight_pane_g6_cp1

0x9276,	// (0x0005ce59) list_highlight_pane_g7_cp1

0x927e,	// (0x0005ce61) list_highlight_pane_g8_cp1

0x9286,	// (0x0005ce69) list_highlight_pane_g9_cp1

0x9166,	// (0x0005cd49) form_field_slider_pane_t3

0x9174,	// (0x0005cd57) form_field_slider_pane_t4

0x9182,	// (0x0005cd65) slider_form_pane_ParamLimits

0x9182,	// (0x0005cd65) slider_form_pane

0xbd30,	// (0x0005f913) control_abbreviations

0xbd30,	// (0x0005f913) control_conventions

0xbd30,	// (0x0005f913) control_definitions

0xbd30,	// (0x0005f913) format_table_attribute

0x996e,	// (0x0005d551) bg_popup_preview_window_pane_g9

0xbd30,	// (0x0005f913) format_table_data2

0xbd30,	// (0x0005f913) format_table_data3

0xbd30,	// (0x0005f913) format_table_data_example

0x0008,

0xbd30,	// (0x0005f913) intro_purpose

0xf8f4,	// (0x000634d7) bg_popup_preview_window_pane_g

0xbd30,	// (0x0005f913) texts_category

0xbd30,	// (0x0005f913) texts_graphics

0x8178,	// (0x0005bd5b) text_digital

0x8187,	// (0x0005bd6a) text_primary

0x8196,	// (0x0005bd79) text_primary_small

0x81a5,	// (0x0005bd88) text_secondary

0x81b4,	// (0x0005bd97) text_title

0xa2a2,	// (0x0005de85) bg_passive_tab_pane_g1_cp3_srt

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp3_srt

0xa2ab,	// (0x0005de8e) bg_passive_tab_pane_g3_cp3_srt

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp3_srt_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp3_srt

0xa2b4,	// (0x0005de97) tabs_4_active_pane_srt_g1

0xa2bc,	// (0x0005de9f) tabs_4_active_pane_srt_t1_ParamLimits

0xa2bc,	// (0x0005de9f) tabs_4_active_pane_srt_t1

0xa2a2,	// (0x0005de85) bg_active_tab_pane_g1_cp3_copy1

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp3_copy1

0xa2ab,	// (0x0005de8e) bg_active_tab_pane_g3_cp3_copy1

0xbd7e,	// (0x0005f961) tabs_2_long_active_pane_srt_ParamLimits

0xbd7e,	// (0x0005f961) tabs_2_long_active_pane_srt

0xbd7e,	// (0x0005f961) tabs_2_long_passive_pane_srt_ParamLimits

0xbd7e,	// (0x0005f961) tabs_2_long_passive_pane_srt

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp4_srt

0x9f64,	// (0x0005db47) bg_passive_tab_pane_g1_cp4_srt

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp4_srt

0x9f6d,	// (0x0005db50) bg_passive_tab_pane_g3_cp4_srt

0x191b,	// (0x000554fe) bg_active_tab_pane_cp4_srt_ParamLimits

0x191b,	// (0x000554fe) bg_active_tab_pane_cp4_srt

0x9f76,	// (0x0005db59) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9f76,	// (0x0005db59) tabs_2_long_active_pane_srt_t1

0x9f64,	// (0x0005db47) bg_active_tab_pane_g1_cp4_srt

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp4_srt

0x9f6d,	// (0x0005db50) bg_active_tab_pane_g3_cp4_srt

0xbdba,	// (0x0005f99d) tabs_3_long_active_pane_srt_ParamLimits

0xbdba,	// (0x0005f99d) tabs_3_long_active_pane_srt

0xbdba,	// (0x0005f99d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbdba,	// (0x0005f99d) tabs_3_long_passive_pane_cp_srt

0xbdba,	// (0x0005f99d) tabs_3_long_passive_pane_srt_ParamLimits

0xbdba,	// (0x0005f99d) tabs_3_long_passive_pane_srt

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp5_srt

0x3735,	// (0x00057318) bg_passive_tab_pane_g1_cp5_srt

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp5_srt

0x372c,	// (0x0005730f) bg_passive_tab_pane_g3_cp5_srt

0x191b,	// (0x000554fe) bg_active_tab_pane_cp5_srt_ParamLimits

0x191b,	// (0x000554fe) bg_active_tab_pane_cp5_srt

0x9f52,	// (0x0005db35) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9f52,	// (0x0005db35) tabs_3_long_active_pane_srt_t1

0x3735,	// (0x00057318) bg_active_tab_pane_g1_cp5_srt

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp5_srt

0x372c,	// (0x0005730f) bg_active_tab_pane_g3_cp5_srt

0x9f44,	// (0x0005db27) navi_text_pane_srt_t1

0x9f3c,	// (0x0005db1f) navi_icon_pane_srt_g1

0x838c,	// (0x0005bf6f) midp_editing_number_pane_srt

0x81c3,	// (0x0005bda6) midp_ticker_pane_srt

0x8394,	// (0x0005bf77) midp_ticker_pane_srt_g1

0x839c,	// (0x0005bf7f) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006335a) midp_ticker_pane_srt_g

0x83a4,	// (0x0005bf87) midp_ticker_pane_srt_t1

0x9f2d,	// (0x0005db10) midp_editing_number_pane_t1_copy1

0x81cb,	// (0x0005bdae) listscroll_midp_pane

0x81cb,	// (0x0005bdae) midp_form_pane

0x823a,	// (0x0005be1d) midp_info_popup_window_ParamLimits

0x823a,	// (0x0005be1d) midp_info_popup_window

0xf1cb,	// (0x00062dae) bg_popup_sub_pane_cp50_ParamLimits

0xf1cb,	// (0x00062dae) bg_popup_sub_pane_cp50

0x8e70,	// (0x0005ca53) listscroll_midp_info_pane_ParamLimits

0x8e70,	// (0x0005ca53) listscroll_midp_info_pane

0x8e50,	// (0x0005ca33) listscroll_form_midp_pane_ParamLimits

0x8e50,	// (0x0005ca33) listscroll_form_midp_pane

0x8e5c,	// (0x0005ca3f) scroll_bar_cp050

0x8e30,	// (0x0005ca13) list_midp_pane

0xad1a,	// (0x0005e8fd) signal_pane_g2_cp

0x8d6a,	// (0x0005c94d) listscroll_midp_info_pane_t1_ParamLimits

0x8d6a,	// (0x0005c94d) listscroll_midp_info_pane_t1

0x8d82,	// (0x0005c965) listscroll_midp_info_pane_t2_ParamLimits

0x8d82,	// (0x0005c965) listscroll_midp_info_pane_t2

0x8dc0,	// (0x0005c9a3) listscroll_midp_info_pane_t3_ParamLimits

0x8dc0,	// (0x0005c9a3) listscroll_midp_info_pane_t3

0x8dfa,	// (0x0005c9dd) listscroll_midp_info_pane_t4_ParamLimits

0x8dfa,	// (0x0005c9dd) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00063412) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00063412) listscroll_midp_info_pane_t

0xf24b,	// (0x00062e2e) scroll_pane_cp21

0x8d04,	// (0x0005c8e7) form_midp_field_choice_group_pane

0x8d0d,	// (0x0005c8f0) form_midp_field_text_pane

0x8d50,	// (0x0005c933) form_midp_field_time_pane

0x8d58,	// (0x0005c93b) form_midp_gauge_slider_pane

0x8d61,	// (0x0005c944) form_midp_gauge_wait_pane

0xbd30,	// (0x0005f913) form_midp_image_pane

0x6b7c,	// (0x0005a75f) list_single_midp_pane_ParamLimits

0x6b7c,	// (0x0005a75f) list_single_midp_pane

0x8cc8,	// (0x0005c8ab) form_midp_field_text_pane_t1

0x8aba,	// (0x0005c69d) input_focus_pane_cp050

0x8cf3,	// (0x0005c8d6) list_midp_form_text_pane

0x8c97,	// (0x0005c87a) form_midp_field_choice_group_pane_t1

0x8ca5,	// (0x0005c888) input_focus_pane_cp051

0x8cb9,	// (0x0005c89c) list_midp_choice_pane

0xbd30,	// (0x0005f913) status_idle_pane

0x8c7b,	// (0x0005c85e) form_midp_field_time_pane_t1

0xbd26,	// (0x0005f909) wait_anim_pane_g2_copy1

0x8c89,	// (0x0005c86c) form_midp_field_time_pane_t2

0x0001,

0x82ea,	// (0x0005becd) aid_navinavi_width_2_pane

0xf82a,	// (0x0006340d) form_midp_field_time_pane_t

0xbd30,	// (0x0005f913) input_focus_pane_cp052

0xbd30,	// (0x0005f913) bg_input_focus_pane_cp040

0x8c3b,	// (0x0005c81e) form_midp_gauge_slider_pane_t1

0x8c49,	// (0x0005c82c) form_midp_gauge_slider_pane_t2

0x8c57,	// (0x0005c83a) form_midp_gauge_slider_pane_t3

0x8c65,	// (0x0005c848) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00063404) form_midp_gauge_slider_pane_t

0x8c73,	// (0x0005c856) form_midp_slider_pane

0xbd7e,	// (0x0005f961) bg_input_focus_pane_cp041_ParamLimits

0xbd7e,	// (0x0005f961) bg_input_focus_pane_cp041

0x8c08,	// (0x0005c7eb) form_midp_gauge_wait_pane_t1_ParamLimits

0x8c08,	// (0x0005c7eb) form_midp_gauge_wait_pane_t1

0x8c1a,	// (0x0005c7fd) form_midp_gauge_wait_pane_t2_ParamLimits

0x8c1a,	// (0x0005c7fd) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x000633ff) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x000633ff) form_midp_gauge_wait_pane_t

0x8c2c,	// (0x0005c80f) form_midp_wait_pane_ParamLimits

0x8c2c,	// (0x0005c80f) form_midp_wait_pane

0x8bd0,	// (0x0005c7b3) form_midp_image_pane_g1

0x8bd9,	// (0x0005c7bc) form_midp_image_pane_t1

0x8be8,	// (0x0005c7cb) form_midp_image_pane_t2

0x8bf7,	// (0x0005c7da) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x000633f8) form_midp_image_pane_t

0x8bc7,	// (0x0005c7aa) list_single_midp_pane_g1

0x3a3e,	// (0x00057621) list_single_midp_pane_t1

0x8bad,	// (0x0005c790) list_midp_form_item_pane_ParamLimits

0x8bad,	// (0x0005c790) list_midp_form_item_pane

0x8292,	// (0x0005be75) list_midp_form_item_pane_t1

0x82a1,	// (0x0005be84) midp_ticker_pane_g1

0x82ad,	// (0x0005be90) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00063340) midp_ticker_pane_g

0x82b9,	// (0x0005be9c) midp_ticker_pane_t1

0xa19a,	// (0x0005dd7d) midp_editing_number_pane_t1

0xa178,	// (0x0005dd5b) midp_editing_number_pane

0xa187,	// (0x0005dd6a) midp_ticker_pane

0x9f1d,	// (0x0005db00) ai_message_heading_pane

0xbd30,	// (0x0005f913) bg_popup_window_pane_cp14

0x9f25,	// (0x0005db08) listscroll_ai_message_pane

0x9cdc,	// (0x0005d8bf) ai_message_heading_pane_g1_ParamLimits

0x9cdc,	// (0x0005d8bf) ai_message_heading_pane_g1

0x9ce8,	// (0x0005d8cb) ai_message_heading_pane_g2_ParamLimits

0x9ce8,	// (0x0005d8cb) ai_message_heading_pane_g2

0x9ebd,	// (0x0005daa0) ai_message_heading_pane_g3_ParamLimits

0x9ebd,	// (0x0005daa0) ai_message_heading_pane_g3

0x9ec9,	// (0x0005daac) ai_message_heading_pane_g4_ParamLimits

0x9ec9,	// (0x0005daac) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00063539) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00063539) ai_message_heading_pane_g

0x9ed5,	// (0x0005dab8) ai_message_heading_pane_t1_ParamLimits

0x9ed5,	// (0x0005dab8) ai_message_heading_pane_t1

0x9eef,	// (0x0005dad2) ai_message_heading_pane_t2_ParamLimits

0x9eef,	// (0x0005dad2) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00063542) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00063542) ai_message_heading_pane_t

0x9f03,	// (0x0005dae6) bg_popup_heading_pane_cp1_ParamLimits

0x9f03,	// (0x0005dae6) bg_popup_heading_pane_cp1

0x9cca,	// (0x0005d8ad) list_ai_message_pane_ParamLimits

0x9cca,	// (0x0005d8ad) list_ai_message_pane

0xf24b,	// (0x00062e2e) scroll_pane_cp10

0x9c66,	// (0x0005d849) list_ai_message_pane_g1

0x9c6e,	// (0x0005d851) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00063516) list_ai_message_pane_g

0x9c76,	// (0x0005d859) list_ai_message_pane_t1_ParamLimits

0x9c76,	// (0x0005d859) list_ai_message_pane_t1

0x9c8b,	// (0x0005d86e) list_ai_message_pane_t2_ParamLimits

0x9c8b,	// (0x0005d86e) list_ai_message_pane_t2

0x9ca0,	// (0x0005d883) list_ai_message_pane_t3_ParamLimits

0x9ca0,	// (0x0005d883) list_ai_message_pane_t3

0x9cb5,	// (0x0005d898) list_ai_message_pane_t4_ParamLimits

0x9cb5,	// (0x0005d898) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0006351b) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0006351b) list_ai_message_pane_t

0x9c4f,	// (0x0005d832) cell_ai_soft_ind_pane_ParamLimits

0x9c4f,	// (0x0005d832) cell_ai_soft_ind_pane

0x82cb,	// (0x0005beae) cell_ai_soft_ind_pane_g1_ParamLimits

0x82cb,	// (0x0005beae) cell_ai_soft_ind_pane_g1

0xbd30,	// (0x0005f913) grid_highlight_cp1

0x82d8,	// (0x0005bebb) text_secondary_cp56_ParamLimits

0x82d8,	// (0x0005bebb) text_secondary_cp56

0x9c24,	// (0x0005d807) example_general_pane_ParamLimits

0x9c24,	// (0x0005d807) example_general_pane

0x9c30,	// (0x0005d813) example_parent_pane_g1_ParamLimits

0x9c30,	// (0x0005d813) example_parent_pane_g1

0x9c3c,	// (0x0005d81f) example_parent_pane_t1_ParamLimits

0x9c3c,	// (0x0005d81f) example_parent_pane_t1

0x67cb,	// (0x0005a3ae) popup_preview_text_window_ParamLimits

0x67cb,	// (0x0005a3ae) popup_preview_text_window

0x80fe,	// (0x0005bce1) list_single_pane_cp2_g4

0xece5,	// (0x000628c8) bg_popup_preview_window_pane_ParamLimits

0xece5,	// (0x000628c8) bg_popup_preview_window_pane

0x9978,	// (0x0005d55b) popup_preview_text_window_t1_ParamLimits

0x9978,	// (0x0005d55b) popup_preview_text_window_t1

0x9996,	// (0x0005d579) popup_preview_text_window_t2_ParamLimits

0x9996,	// (0x0005d579) popup_preview_text_window_t2

0x99df,	// (0x0005d5c2) popup_preview_text_window_t3_ParamLimits

0x99df,	// (0x0005d5c2) popup_preview_text_window_t3

0x9a24,	// (0x0005d607) popup_preview_text_window_t4_ParamLimits

0x9a24,	// (0x0005d607) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x000634ea) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x000634ea) popup_preview_text_window_t

0x9aa2,	// (0x0005d685) scroll_pane_cp11

0x8a2e,	// (0x0005c611) bg_popup_preview_window_pane_g1

0x992c,	// (0x0005d50f) bg_popup_preview_window_pane_g2

0x9936,	// (0x0005d519) bg_popup_preview_window_pane_g3

0x9940,	// (0x0005d523) bg_popup_preview_window_pane_g4

0x994a,	// (0x0005d52d) bg_popup_preview_window_pane_g5

0x9954,	// (0x0005d537) bg_popup_preview_window_pane_g6

0x995c,	// (0x0005d53f) bg_popup_preview_window_pane_g7

0x9964,	// (0x0005d547) bg_popup_preview_window_pane_g8

0x4cd6,	// (0x000588b9) aid_popup_width_pane

0x67a7,	// (0x0005a38a) popup_midp_note_alarm_window_ParamLimits

0x67a7,	// (0x0005a38a) popup_midp_note_alarm_window

0xf116,	// (0x00062cf9) data_form_pane_ParamLimits

0x59f4,	// (0x000595d7) form_field_data_pane_g1

0x59fe,	// (0x000595e1) form_field_data_pane_t1_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_ParamLimits

0x3474,	// (0x00057057) data_form_wide_pane_ParamLimits

0x3485,	// (0x00057068) form_field_data_wide_pane_g1

0x3491,	// (0x00057074) form_field_data_wide_pane_t1_ParamLimits

0xee9d,	// (0x00062a80) input_focus_pane_cp6_ParamLimits

0x5b31,	// (0x00059714) input_popup_find_pane_g1_ParamLimits

0x5b31,	// (0x00059714) input_popup_find_pane_g1

0x5c8a,	// (0x0005986d) aid_navi_side_left_pane

0x5c9f,	// (0x00059882) aid_navi_side_right_pane

0x9341,	// (0x0005cf24) bg_popup_window_pane_cp30_ParamLimits

0x9341,	// (0x0005cf24) bg_popup_window_pane_cp30

0x93bb,	// (0x0005cf9e) popup_midp_note_alarm_window_g1_ParamLimits

0x93bb,	// (0x0005cf9e) popup_midp_note_alarm_window_g1

0x93eb,	// (0x0005cfce) popup_midp_note_alarm_window_t1_ParamLimits

0x93eb,	// (0x0005cfce) popup_midp_note_alarm_window_t1

0x948c,	// (0x0005d06f) popup_midp_note_alarm_window_t2_ParamLimits

0x948c,	// (0x0005d06f) popup_midp_note_alarm_window_t2

0x953a,	// (0x0005d11d) popup_midp_note_alarm_window_t3_ParamLimits

0x953a,	// (0x0005d11d) popup_midp_note_alarm_window_t3

0x956c,	// (0x0005d14f) popup_midp_note_alarm_window_t4_ParamLimits

0x956c,	// (0x0005d14f) popup_midp_note_alarm_window_t4

0x9592,	// (0x0005d175) popup_midp_note_alarm_window_t5_ParamLimits

0x9592,	// (0x0005d175) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00063487) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00063487) popup_midp_note_alarm_window_t

0x963e,	// (0x0005d221) wait_bar_pane_cp1_ParamLimits

0x963e,	// (0x0005d221) wait_bar_pane_cp1

0xbd30,	// (0x0005f913) wait_anim_pane_copy1

0xbd30,	// (0x0005f913) wait_border_pane_copy1

0x9026,	// (0x0005cc09) wait_border_pane_g1_copy1

0x34ab,	// (0x0005708e) form_field_popup_pane_g1

0x5a18,	// (0x000595fb) form_field_popup_pane_t1_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_cp7_ParamLimits

0xf150,	// (0x00062d33) list_form_pane_ParamLimits

0x34b3,	// (0x00057096) form_field_popup_wide_pane_g1

0x34bb,	// (0x0005709e) form_field_popup_wide_pane_t1_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_cp8_ParamLimits

0xf15c,	// (0x00062d3f) list_form_wide_pane_ParamLimits

0xa340,	// (0x0005df23) aid_size_cell_graphic_pane

0x5a97,	// (0x0005967a) data_form_pane_t1_ParamLimits

0x6e0b,	// (0x0005a9ee) data_form_wide_pane_t1_ParamLimits

0x85e1,	// (0x0005c1c4) bg_status_flat_pane

0x5105,	// (0x00058ce8) title_pane_t1_ParamLimits

0xbd46,	// (0x0005f929) title_pane_t2_ParamLimits

0xbd6c,	// (0x0005f94f) title_pane_t3_ParamLimits

0xf557,	// (0x0006313a) title_pane_t_ParamLimits

0x5df0,	// (0x000599d3) level_1_signal_ParamLimits

0x5dfd,	// (0x000599e0) level_2_signal_ParamLimits

0x5e0a,	// (0x000599ed) level_3_signal_ParamLimits

0x5e17,	// (0x000599fa) level_4_signal_ParamLimits

0x5e24,	// (0x00059a07) level_5_signal_ParamLimits

0x5e31,	// (0x00059a14) level_6_signal_ParamLimits

0x5e3e,	// (0x00059a21) level_7_signal_ParamLimits

0x5df0,	// (0x000599d3) level_1_battery_ParamLimits

0x5dfd,	// (0x000599e0) level_2_battery_ParamLimits

0x5e0a,	// (0x000599ed) level_3_battery_ParamLimits

0x5e17,	// (0x000599fa) level_4_battery_ParamLimits

0x5e24,	// (0x00059a07) level_5_battery_ParamLimits

0x5e31,	// (0x00059a14) level_6_battery_ParamLimits

0x5e3e,	// (0x00059a21) level_7_battery_ParamLimits

0x9246,	// (0x0005ce29) bg_status_flat_pane_g1

0x924e,	// (0x0005ce31) bg_status_flat_pane_g2

0x9256,	// (0x0005ce39) bg_status_flat_pane_g3

0x925e,	// (0x0005ce41) bg_status_flat_pane_g4

0x9266,	// (0x0005ce49) bg_status_flat_pane_g5

0x926e,	// (0x0005ce51) bg_status_flat_pane_g6

0x9276,	// (0x0005ce59) bg_status_flat_pane_g7

0x5175,	// (0x00058d58) tabs_3_active_pane_t1_ParamLimits

0x5175,	// (0x00058d58) tabs_3_passive_pane_t1_ParamLimits

0x518f,	// (0x00058d72) tabs_4_active_pane_t1_ParamLimits

0x518f,	// (0x00058d72) tabs_4_1_passive_pane_t1_ParamLimits

0x5b47,	// (0x0005972a) tabs_2_active_pane_t1_ParamLimits

0x5b47,	// (0x0005972a) tabs_2_passive_pane_t1_ParamLimits

0x191b,	// (0x000554fe) bg_active_tab_pane_cp4_ParamLimits

0x5b59,	// (0x0005973c) tabs_2_long_active_pane_t1_ParamLimits

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp4_ParamLimits

0x6ac3,	// (0x0005a6a6) list_single_midp_graphic_pane_t1_ParamLimits

0x191b,	// (0x000554fe) bg_active_tab_pane_cp5_ParamLimits

0x5b78,	// (0x0005975b) tabs_3_long_active_pane_t1_ParamLimits

0x5b6c,	// (0x0005974f) bg_passive_tab_pane_cp5_ParamLimits

0x6ac3,	// (0x0005a6a6) list_single_midp_graphic_pane_t1

0x85e1,	// (0x0005c1c4) bg_status_flat_pane_ParamLimits

0x86a6,	// (0x0005c289) indicator_pane_cp2_ParamLimits

0x86a6,	// (0x0005c289) indicator_pane_cp2

0x87e9,	// (0x0005c3cc) navi_pane_srt_ParamLimits

0x87e9,	// (0x0005c3cc) navi_pane_srt

0x880d,	// (0x0005c3f0) popup_clock_digital_analogue_window_cp1

0xeb28,	// (0x0006270b) indicator_pane_t1

0x81c3,	// (0x0005bda6) copy_highlight_pane

0x81c3,	// (0x0005bda6) cursor_graphics_pane

0x81c3,	// (0x0005bda6) graphic_within_text_pane

0x81c3,	// (0x0005bda6) link_highlight_pane

0x9a65,	// (0x0005d648) popup_preview_text_window_t5_ParamLimits

0x9a65,	// (0x0005d648) popup_preview_text_window_t5

0x82f4,	// (0x0005bed7) cursor_digital_pane

0x82f4,	// (0x0005bed7) cursor_primary_pane

0x8305,	// (0x0005bee8) cursor_primary_small_pane

0x830d,	// (0x0005bef0) cursor_secondary_pane

0x8315,	// (0x0005bef8) cursor_title_pane

0x82f4,	// (0x0005bed7) link_highlight_digital_pane

0x82fc,	// (0x0005bedf) link_highlight_primary_pane

0x8305,	// (0x0005bee8) link_highlight_primary_small_pane

0x830d,	// (0x0005bef0) link_highlight_secondary_pane

0x8315,	// (0x0005bef8) link_highlight_title_pane

0x82f4,	// (0x0005bed7) copy_highlight_digital_pane

0x82f4,	// (0x0005bed7) copy_highlight_primary_pane

0x8305,	// (0x0005bee8) copy_highlight_primary_small_pane

0x830d,	// (0x0005bef0) copy_highlight_secondary_pane

0x8315,	// (0x0005bef8) copy_highlight_title_pane

0x830d,	// (0x0005bef0) graphic_text_digital_pane

0x92e4,	// (0x0005cec7) graphic_text_primary_pane

0x92ed,	// (0x0005ced0) graphic_text_primary_small_pane

0x8305,	// (0x0005bee8) graphic_text_secondary_pane

0x82f4,	// (0x0005bed7) graphic_text_title_pane

0x831d,	// (0x0005bf00) cursor_primary_pane_g1

0x92d6,	// (0x0005ceb9) cursor_text_primary_t1

0x92be,	// (0x0005cea1) cursor_primary_small_pane_g1

0x92c8,	// (0x0005ceab) cursor_text_primary_small_t1

0x92a6,	// (0x0005ce89) cursor_primary_small_pane_g1_copy1

0x92b0,	// (0x0005ce93) cursor_text_primary_small_t1_copy1

0x928e,	// (0x0005ce71) cursor_text_title_t1

0x929c,	// (0x0005ce7f) cursor_title_pane_g1

0x831d,	// (0x0005bf00) cursor_digital_pane_g1

0x8327,	// (0x0005bf0a) cursor_text_digital_t1

0x8335,	// (0x0005bf18) link_highlight_primary_pane_g1

0x9237,	// (0x0005ce1a) link_highlight_primary_pane_t1

0x8335,	// (0x0005bf18) link_highlight_primary_small_pane_g1

0x833d,	// (0x0005bf20) link_highlight_primary_small_pane_t1

0x834c,	// (0x0005bf2f) link_highlight_secondary_pane_g1

0x8354,	// (0x0005bf37) link_highlight_secondary_pane_t1

0x91ab,	// (0x0005cd8e) link_highlight_title_pane_g1

0x91b3,	// (0x0005cd96) link_highlight_title_pane_t1

0x9194,	// (0x0005cd77) link_highlight_digital_pane_g1

0x919c,	// (0x0005cd7f) link_highlight_digital_pane_t1

0x905c,	// (0x0005cc3f) copy_highlight_primary_pane_g1

0x9073,	// (0x0005cc56) copy_highlight_primary_pane_t1

0x905c,	// (0x0005cc3f) copy_highlight_primary_small_pane_g1

0x9064,	// (0x0005cc47) copy_highlight_primary_small_pane_t1

0x8363,	// (0x0005bf46) copy_highlight_secondary_pane_g1

0x836b,	// (0x0005bf4e) copy_highlight_secondary_pane_t1

0x9045,	// (0x0005cc28) copy_highlight_title_pane_g1

0x904d,	// (0x0005cc30) copy_highlight_title_pane_t1

0x905c,	// (0x0005cc3f) copy_highlight_digital_pane_g1

0xa512,	// (0x0005e0f5) copy_highlight_digital_pane_t1

0xa466,	// (0x0005e049) graphic_text_primary_pane_g1

0xa4f6,	// (0x0005e0d9) graphic_text_primary_pane_t1

0xa504,	// (0x0005e0e7) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000635b6) graphic_text_primary_pane_t

0xa4d2,	// (0x0005e0b5) graphic_text_primary_small_pane_g1

0xa4da,	// (0x0005e0bd) graphic_text_primary_small_pane_t1

0xa4e8,	// (0x0005e0cb) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000635b1) graphic_text_primary_small_pane_t

0xa4ae,	// (0x0005e091) graphic_text_secondary_pane_g1

0xa4b6,	// (0x0005e099) graphic_text_secondary_pane_t1

0xa4c4,	// (0x0005e0a7) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000635ac) graphic_text_secondary_pane_t

0xa48a,	// (0x0005e06d) graphic_text_title_pane_g1

0xa492,	// (0x0005e075) graphic_text_title_pane_t1

0xa4a0,	// (0x0005e083) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000635a7) graphic_text_title_pane_t

0xa466,	// (0x0005e049) graphic_text_digital_pane_g1

0xa46e,	// (0x0005e051) graphic_text_digital_pane_t1

0xa47c,	// (0x0005e05f) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000635a2) graphic_text_digital_pane_t

0xbd7e,	// (0x0005f961) navi_icon_pane_srt_ParamLimits

0xbd7e,	// (0x0005f961) navi_icon_pane_srt

0xbd30,	// (0x0005f913) navi_midp_pane_srt

0xbd30,	// (0x0005f913) navi_navi_pane_srt

0xbd7e,	// (0x0005f961) navi_text_pane_srt_ParamLimits

0xbd7e,	// (0x0005f961) navi_text_pane_srt

0xa431,	// (0x0005e014) navi_navi_icon_text_pane_srt

0xa439,	// (0x0005e01c) navi_navi_pane_srt_g1_ParamLimits

0xa439,	// (0x0005e01c) navi_navi_pane_srt_g1

0xa44b,	// (0x0005e02e) navi_navi_pane_srt_g2_ParamLimits

0xa44b,	// (0x0005e02e) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0006359d) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0006359d) navi_navi_pane_srt_g

0xa45d,	// (0x0005e040) navi_navi_tabs_pane_srt

0xa431,	// (0x0005e014) navi_navi_text_pane_srt

0xa431,	// (0x0005e014) navi_navi_volume_pane_srt

0xa422,	// (0x0005e005) navi_navi_text_pane_srt_t1

0x6ef2,	// (0x0005aad5) navi_navi_volume_pane_srt_g1

0x6efa,	// (0x0005aadd) volume_small_pane_srt_ParamLimits

0x6efa,	// (0x0005aadd) volume_small_pane_srt

0x61d5,	// (0x00059db8) volume_small_pane_srt_g1_ParamLimits

0x61d5,	// (0x00059db8) volume_small_pane_srt_g1

0x61e5,	// (0x00059dc8) volume_small_pane_srt_g2_ParamLimits

0x61e5,	// (0x00059dc8) volume_small_pane_srt_g2

0x61f6,	// (0x00059dd9) volume_small_pane_srt_g3_ParamLimits

0x61f6,	// (0x00059dd9) volume_small_pane_srt_g3

0x6207,	// (0x00059dea) volume_small_pane_srt_g4_ParamLimits

0x6207,	// (0x00059dea) volume_small_pane_srt_g4

0x6218,	// (0x00059dfb) volume_small_pane_srt_g5_ParamLimits

0x6218,	// (0x00059dfb) volume_small_pane_srt_g5

0x6229,	// (0x00059e0c) volume_small_pane_srt_g6_ParamLimits

0x6229,	// (0x00059e0c) volume_small_pane_srt_g6

0x623a,	// (0x00059e1d) volume_small_pane_srt_g7_ParamLimits

0x623a,	// (0x00059e1d) volume_small_pane_srt_g7

0x624b,	// (0x00059e2e) volume_small_pane_srt_g8_ParamLimits

0x624b,	// (0x00059e2e) volume_small_pane_srt_g8

0x625c,	// (0x00059e3f) volume_small_pane_srt_g9_ParamLimits

0x625c,	// (0x00059e3f) volume_small_pane_srt_g9

0x626d,	// (0x00059e50) volume_small_pane_srt_g10_ParamLimits

0x626d,	// (0x00059e50) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00063345) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00063345) volume_small_pane_srt_g

0xed9a,	// (0x0006297d) query_popup_data_pane_cp2

0xa408,	// (0x0005dfeb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa408,	// (0x0005dfeb) navi_navi_icon_text_pane_srt_t1

0x92e4,	// (0x0005cec7) navi_tabs_2_long_pane_srt

0x92e4,	// (0x0005cec7) navi_tabs_2_pane_srt

0x92e4,	// (0x0005cec7) navi_tabs_3_long_pane_srt

0x92e4,	// (0x0005cec7) navi_tabs_3_pane_srt

0x92e4,	// (0x0005cec7) navi_tabs_4_pane_srt

0x6ed2,	// (0x0005aab5) tabs_2_active_pane_srt_ParamLimits

0x6ed2,	// (0x0005aab5) tabs_2_active_pane_srt

0x6ee2,	// (0x0005aac5) tabs_2_passive_pane_srt_ParamLimits

0x6ee2,	// (0x0005aac5) tabs_2_passive_pane_srt

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp1_srt

0xa3d4,	// (0x0005dfb7) bg_passive_tab_pane_g1_cp1_srt

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp1_srt

0xa3dd,	// (0x0005dfc0) bg_passive_tab_pane_g3_cp1_srt

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp1_srt_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp1_srt

0xa3e6,	// (0x0005dfc9) tabs_2_active_pane_srt_g1

0xa3ee,	// (0x0005dfd1) tabs_2_active_pane_srt_t1_ParamLimits

0xa3ee,	// (0x0005dfd1) tabs_2_active_pane_srt_t1

0xa3d4,	// (0x0005dfb7) bg_active_tab_pane_g1_cp1_srt

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp1_srt

0xa3dd,	// (0x0005dfc0) bg_active_tab_pane_g3_cp1_srt

0x6e9f,	// (0x0005aa82) tabs_3_active_pane_srt_ParamLimits

0x6e9f,	// (0x0005aa82) tabs_3_active_pane_srt

0x6eb0,	// (0x0005aa93) tabs_3_passive_pane_cp_srt_ParamLimits

0x6eb0,	// (0x0005aa93) tabs_3_passive_pane_cp_srt

0x6ec1,	// (0x0005aaa4) tabs_3_passive_pane_srt_ParamLimits

0x6ec1,	// (0x0005aaa4) tabs_3_passive_pane_srt

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x84f2,	// (0x0005c0d5) bg_passive_tab_pane_cp2_srt

0x837a,	// (0x0005bf5d) bg_passive_tab_pane_g1_cp2_srt

0x36e5,	// (0x000572c8) bg_passive_tab_pane_g2_cp2_srt

0x8383,	// (0x0005bf66) bg_passive_tab_pane_g3_cp2_srt

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp2_srt_ParamLimits

0xbd7e,	// (0x0005f961) bg_active_tab_pane_cp2_srt

0xa3ba,	// (0x0005df9d) tabs_3_active_pane_srt_g1

0xa3c2,	// (0x0005dfa5) tabs_3_active_pane_srt_t1_ParamLimits

0xa3c2,	// (0x0005dfa5) tabs_3_active_pane_srt_t1

0x837a,	// (0x0005bf5d) bg_active_tab_pane_g1_cp2_srt

0x36e5,	// (0x000572c8) bg_active_tab_pane_g2_cp2_srt

0x8383,	// (0x0005bf66) bg_active_tab_pane_g3_cp2_srt

0x6e57,	// (0x0005aa3a) tabs_4_active_pane_srt_ParamLimits

0x6e57,	// (0x0005aa3a) tabs_4_active_pane_srt

0x6e69,	// (0x0005aa4c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e69,	// (0x0005aa4c) tabs_4_passive_pane_cp2_srt

0x63ec,	// (0x00059fcf) aid_size_cell_toolbar

0x5b6c,	// (0x0005974f) main_idle_act_pane_ParamLimits

0x65cd,	// (0x0005a1b0) popup_large_graphic_colour_window_ParamLimits

0x6974,	// (0x0005a557) popup_toolbar_window_ParamLimits

0x6974,	// (0x0005a557) popup_toolbar_window

0xa1a9,	// (0x0005dd8c) list_single_graphic_2heading_pane_ParamLimits

0xa1a9,	// (0x0005dd8c) list_single_graphic_2heading_pane

0xf423,	// (0x00063006) aid_size_cell_apps_grid_lsc_pane

0xf435,	// (0x00063018) aid_size_cell_apps_grid_prt_pane

0x84f2,	// (0x0005c0d5) bg_wml_button_pane_cp1_ParamLimits

0x84f2,	// (0x0005c0d5) bg_wml_button_pane_cp1

0x8cc8,	// (0x0005c8ab) form_midp_field_text_pane_t1_ParamLimits

0x8aba,	// (0x0005c69d) input_focus_pane_cp050_ParamLimits

0x8cf3,	// (0x0005c8d6) list_midp_form_text_pane_ParamLimits

0x8ca5,	// (0x0005c888) input_focus_pane_cp051_ParamLimits

0x8cb9,	// (0x0005c89c) list_midp_choice_pane_ParamLimits

0x8b73,	// (0x0005c756) list_single_2graphic_pane_cp3_ParamLimits

0x8b73,	// (0x0005c756) list_single_2graphic_pane_cp3

0x8b89,	// (0x0005c76c) list_single_midp_graphic_pane_ParamLimits

0x8b89,	// (0x0005c76c) list_single_midp_graphic_pane

0x4c42,	// (0x00058825) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c42,	// (0x00058825) list_single_graphic_2heading_pane_g1

0x4c4e,	// (0x00058831) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c4e,	// (0x00058831) list_single_graphic_2heading_pane_g4

0x4c5a,	// (0x0005883d) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c5a,	// (0x0005883d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00063398) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00063398) list_single_graphic_2heading_pane_g

0x4c66,	// (0x00058849) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c66,	// (0x00058849) list_single_graphic_2heading_pane_t1

0x4c7a,	// (0x0005885d) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c7a,	// (0x0005885d) list_single_graphic_2heading_pane_t2

0x4c96,	// (0x00058879) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c96,	// (0x00058879) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006339f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006339f) list_single_graphic_2heading_pane_t

0x8960,	// (0x0005c543) bg_popup_sub_pane_cp2

0x898a,	// (0x0005c56d) grid_toobar_pane

0x6a33,	// (0x0005a616) cell_toolbar_pane_ParamLimits

0x6a33,	// (0x0005a616) cell_toolbar_pane

0x89d2,	// (0x0005c5b5) cell_toolbar_pane_g1_ParamLimits

0x89d2,	// (0x0005c5b5) cell_toolbar_pane_g1

0x89e6,	// (0x0005c5c9) cell_toolbar_pane_g2_ParamLimits

0x89e6,	// (0x0005c5c9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000633ad) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000633ad) cell_toolbar_pane_g

0x8a08,	// (0x0005c5eb) grid_highlight_pane_cp2_ParamLimits

0x8a08,	// (0x0005c5eb) grid_highlight_pane_cp2

0x8a22,	// (0x0005c605) toolbar_button_pane

0x8a2e,	// (0x0005c611) toolbar_button_pane_g1

0x8a36,	// (0x0005c619) toolbar_button_pane_g2

0x8a3e,	// (0x0005c621) toolbar_button_pane_g3

0x8a46,	// (0x0005c629) toolbar_button_pane_g4

0x8a4e,	// (0x0005c631) toolbar_button_pane_g5

0x8a56,	// (0x0005c639) toolbar_button_pane_g6

0x8a5e,	// (0x0005c641) toolbar_button_pane_g7

0x8a66,	// (0x0005c649) toolbar_button_pane_g8

0x8a6e,	// (0x0005c651) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000633b2) toolbar_button_pane_g

0x6a6b,	// (0x0005a64e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6a6b,	// (0x0005a64e) list_single_2graphic_pane_g1_cp3

0x6a77,	// (0x0005a65a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6a77,	// (0x0005a65a) list_single_2graphic_pane_g2_cp3

0x6a88,	// (0x0005a66b) list_single_2graphic_pane_g3_cp3

0x6a90,	// (0x0005a673) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6a90,	// (0x0005a673) list_single_2graphic_pane_g4_cp3

0x6a9c,	// (0x0005a67f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6a9c,	// (0x0005a67f) list_single_2graphic_pane_t1_cp3

0x6ab7,	// (0x0005a69a) list_single_midp_graphic_pane_g2_ParamLimits

0x6ab7,	// (0x0005a69a) list_single_midp_graphic_pane_g2

0x4c32,	// (0x00058815) aid_zoom_text_primary

0x4c3a,	// (0x0005881d) aid_zoom_text_secondary

0x8434,	// (0x0005c017) status_small_pane_g7_ParamLimits

0x8434,	// (0x0005c017) status_small_pane_g7

0x8457,	// (0x0005c03a) status_small_pane_t1_ParamLimits

0x50e0,	// (0x00058cc3) title_pane_g2

0x0003,

0xf54e,	// (0x00063131) title_pane_g

0x5349,	// (0x00058f2c) aid_size_cell_colour_1_pane_ParamLimits

0x5349,	// (0x00058f2c) aid_size_cell_colour_1_pane

0x535d,	// (0x00058f40) aid_size_cell_colour_2_pane_ParamLimits

0x535d,	// (0x00058f40) aid_size_cell_colour_2_pane

0x5371,	// (0x00058f54) aid_size_cell_colour_3_pane_ParamLimits

0x5371,	// (0x00058f54) aid_size_cell_colour_3_pane

0x5385,	// (0x00058f68) aid_size_cell_colour_4_pane_ParamLimits

0x5385,	// (0x00058f68) aid_size_cell_colour_4_pane

0x5bc6,	// (0x000597a9) title_pane_stacon_g1_ParamLimits

0x5bc6,	// (0x000597a9) title_pane_stacon_g1

0x90ca,	// (0x0005ccad) popup_note_wait_window_g3_ParamLimits

0x90ca,	// (0x0005ccad) popup_note_wait_window_g3

0x9141,	// (0x0005cd24) popup_note_wait_window_t5_ParamLimits

0x9141,	// (0x0005cd24) popup_note_wait_window_t5

0xbd30,	// (0x0005f913) main_feb_china_hwr_fs_writing_pane

0x6494,	// (0x0005a077) popup_feb_china_hwr_fs_window_ParamLimits

0x6494,	// (0x0005a077) popup_feb_china_hwr_fs_window

0x6ad9,	// (0x0005a6bc) aid_size_cell_hwr_fs_ParamLimits

0x6ad9,	// (0x0005a6bc) aid_size_cell_hwr_fs

0x8aba,	// (0x0005c69d) bg_popup_sub_pane_cp3_ParamLimits

0x8aba,	// (0x0005c69d) bg_popup_sub_pane_cp3

0x6aee,	// (0x0005a6d1) grid_hwr_fs_pane_ParamLimits

0x6aee,	// (0x0005a6d1) grid_hwr_fs_pane

0x6b06,	// (0x0005a6e9) linegrid_hwr_fs_pane_ParamLimits

0x6b06,	// (0x0005a6e9) linegrid_hwr_fs_pane

0x6b16,	// (0x0005a6f9) cell_hwr_fs_pane_ParamLimits

0x6b16,	// (0x0005a6f9) cell_hwr_fs_pane

0x8ac6,	// (0x0005c6a9) linegrid_hwr_fs_pane_g1_ParamLimits

0x8ac6,	// (0x0005c6a9) linegrid_hwr_fs_pane_g1

0x8ad2,	// (0x0005c6b5) linegrid_hwr_fs_pane_g2_ParamLimits

0x8ad2,	// (0x0005c6b5) linegrid_hwr_fs_pane_g2

0x8ae4,	// (0x0005c6c7) linegrid_hwr_fs_pane_g3_ParamLimits

0x8ae4,	// (0x0005c6c7) linegrid_hwr_fs_pane_g3

0x6b3a,	// (0x0005a71d) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b3a,	// (0x0005a71d) linegrid_hwr_fs_pane_g4

0x6b58,	// (0x0005a73b) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b58,	// (0x0005a73b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x000633dd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x000633dd) linegrid_hwr_fs_pane_g

0x8af0,	// (0x0005c6d3) cell_hwr_fs_pane_g1_ParamLimits

0x8af0,	// (0x0005c6d3) cell_hwr_fs_pane_g1

0x889b,	// (0x0005c47e) cell_hwr_fs_pane_g2_ParamLimits

0x889b,	// (0x0005c47e) cell_hwr_fs_pane_g2

0x8b06,	// (0x0005c6e9) cell_hwr_fs_pane_g3_ParamLimits

0x8b06,	// (0x0005c6e9) cell_hwr_fs_pane_g3

0x8b13,	// (0x0005c6f6) cell_hwr_fs_pane_g4_ParamLimits

0x8b13,	// (0x0005c6f6) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x000633e8) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x000633e8) cell_hwr_fs_pane_g

0x6b6e,	// (0x0005a751) cell_hwr_fs_pane_t1

0xbd30,	// (0x0005f913) grid_highlight_pane_cp6

0xbd30,	// (0x0005f913) main_idle_act2_pane

0xf232,	// (0x00062e15) aid_inside_area_popup_secondary

0x977a,	// (0x0005d35d) aid_inside_area_window_primary_ParamLimits

0x977a,	// (0x0005d35d) aid_inside_area_window_primary

0xa521,	// (0x0005e104) ai2_news_ticker_pane

0xa529,	// (0x0005e10c) aid_size_cell_ai1_link_ParamLimits

0xa529,	// (0x0005e10c) aid_size_cell_ai1_link

0xa543,	// (0x0005e126) popup_ai2_data_window_ParamLimits

0xa543,	// (0x0005e126) popup_ai2_data_window

0xa561,	// (0x0005e144) popup_ai2_link_window_ParamLimits

0xa561,	// (0x0005e144) popup_ai2_link_window

0x8aba,	// (0x0005c69d) bg_popup_sub_pane_cp4_ParamLimits

0x8aba,	// (0x0005c69d) bg_popup_sub_pane_cp4

0xa577,	// (0x0005e15a) grid_ai2_link_pane_ParamLimits

0xa577,	// (0x0005e15a) grid_ai2_link_pane

0xa58e,	// (0x0005e171) popup_ai2_link_window_g1_ParamLimits

0xa58e,	// (0x0005e171) popup_ai2_link_window_g1

0xa59a,	// (0x0005e17d) popup_ai2_link_window_g2_ParamLimits

0xa59a,	// (0x0005e17d) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000635bb) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000635bb) popup_ai2_link_window_g

0xa5ab,	// (0x0005e18e) ai2_mp_button_pane

0xa5b3,	// (0x0005e196) ai2_mp_volume_pane

0x8ca5,	// (0x0005c888) bg_popup_sub_pane_cp5_ParamLimits

0x8ca5,	// (0x0005c888) bg_popup_sub_pane_cp5

0xa5bb,	// (0x0005e19e) heading_ai2_gene_pane_ParamLimits

0xa5bb,	// (0x0005e19e) heading_ai2_gene_pane

0xa5c7,	// (0x0005e1aa) list_ai2_gene_pane_ParamLimits

0xa5c7,	// (0x0005e1aa) list_ai2_gene_pane

0xa60f,	// (0x0005e1f2) cell_ai2_link_pane_ParamLimits

0xa60f,	// (0x0005e1f2) cell_ai2_link_pane

0xa625,	// (0x0005e208) cell_ai2_link_pane_g1

0xbd30,	// (0x0005f913) grid_highlight_pane_cp7

0x6f0f,	// (0x0005aaf2) ai2_mp_volume_pane_g1

0xa6f8,	// (0x0005e2db) ai2_mp_volume_pane_g2

0xa66d,	// (0x0005e250) list_ai2_gene_pane_t1

0xa700,	// (0x0005e2e3) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x000635d4) ai2_mp_volume_pane_g

0x6f17,	// (0x0005aafa) volume_small_pane_cp3

0xa708,	// (0x0005e2eb) aid_size_cell_ai2_button

0xa710,	// (0x0005e2f3) grid_ai2_button_pane

0xa719,	// (0x0005e2fc) cell_ai2_button_pane_ParamLimits

0xa719,	// (0x0005e2fc) cell_ai2_button_pane

0xbd26,	// (0x0005f909) cell_ai2_button_pane_g1

0xbd30,	// (0x0005f913) grid_highlight_pane_cp8

0xa6b8,	// (0x0005e29b) ai2_gene_pane_t1_ParamLimits

0xa6b8,	// (0x0005e29b) ai2_gene_pane_t1

0x63e2,	// (0x00059fc5) aid_height_parent_landscape

0x9fc6,	// (0x0005dba9) aid_height_set_list

0x9fd7,	// (0x0005dbba) aid_size_parent

0xa340,	// (0x0005df23) aid_size_cell_graphic_pane_ParamLimits

0xa5d7,	// (0x0005e1ba) popup_ai2_data_window_g1_ParamLimits

0xa5d7,	// (0x0005e1ba) popup_ai2_data_window_g1

0xa5e3,	// (0x0005e1c6) ai2_news_ticker_pane_g1

0xa5eb,	// (0x0005e1ce) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x000635c0) ai2_news_ticker_pane_g

0xa5f3,	// (0x0005e1d6) ai2_news_ticker_pane_t1

0xa601,	// (0x0005e1e4) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x000635c5) ai2_news_ticker_pane_t

0xa62e,	// (0x0005e211) heading_ai2_gene_pane_g1

0xa636,	// (0x0005e219) heading_ai2_gene_pane_t1_ParamLimits

0xa636,	// (0x0005e219) heading_ai2_gene_pane_t1

0xa64b,	// (0x0005e22e) list_highlight_pane_cp6

0xa653,	// (0x0005e236) ai2_gene_pane_ParamLimits

0xa653,	// (0x0005e236) ai2_gene_pane

0xa67b,	// (0x0005e25e) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x000635ca) list_ai2_gene_pane_t

0xa689,	// (0x0005e26c) list_highlight_pane_cp8_ParamLimits

0xa689,	// (0x0005e26c) list_highlight_pane_cp8

0xa69a,	// (0x0005e27d) ai2_gene_pane_g1_ParamLimits

0xa69a,	// (0x0005e27d) ai2_gene_pane_g1

0xa6ac,	// (0x0005e28f) ai2_gene_pane_g2_ParamLimits

0xa6ac,	// (0x0005e28f) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x000635cf) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x000635cf) ai2_gene_pane_g

0xf0b8,	// (0x00062c9b) scroll_pane_cp12

0x639f,	// (0x00059f82) control_pane_t3_ParamLimits

0x639f,	// (0x00059f82) control_pane_t3

0x8448,	// (0x0005c02b) status_small_pane_g8_ParamLimits

0x8448,	// (0x0005c02b) status_small_pane_g8

0x6592,	// (0x0005a175) popup_find_window_ParamLimits

0x67bd,	// (0x0005a3a0) popup_note_image_window_ParamLimits

0x3984,	// (0x00057567) list_double2_graphic_pane_vc_g1_ParamLimits

0x3984,	// (0x00057567) list_double2_graphic_pane_vc_g1

0x8134,	// (0x0005bd17) list_double2_graphic_pane_vc_g2_ParamLimits

0x8134,	// (0x0005bd17) list_double2_graphic_pane_vc_g2

0x89c6,	// (0x0005c5a9) list_double2_graphic_pane_vc_g3_ParamLimits

0x89c6,	// (0x0005c5a9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000633a6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000633a6) list_double2_graphic_pane_vc_g

0x3990,	// (0x00057573) list_double2_graphic_pane_vc_t1_ParamLimits

0x3990,	// (0x00057573) list_double2_graphic_pane_vc_t1

0x8134,	// (0x0005bd17) list_single_heading_pane_vc_g1_ParamLimits

0x8134,	// (0x0005bd17) list_single_heading_pane_vc_g1

0x89c6,	// (0x0005c5a9) list_single_heading_pane_vc_g2_ParamLimits

0x89c6,	// (0x0005c5a9) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633c7) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633c7) list_single_heading_pane_vc_g

0x39a6,	// (0x00057589) list_single_heading_pane_vc_t1_ParamLimits

0x39a6,	// (0x00057589) list_single_heading_pane_vc_t1

0x39bc,	// (0x0005759f) list_single_heading_pane_vc_t2_ParamLimits

0x39bc,	// (0x0005759f) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x000633cc) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x000633cc) list_single_heading_pane_vc_t

0x8a76,	// (0x0005c659) list_setting_number_pane_vc_g1_ParamLimits

0x8a76,	// (0x0005c659) list_setting_number_pane_vc_g1

0x8a82,	// (0x0005c665) list_setting_number_pane_vc_g2_ParamLimits

0x8a82,	// (0x0005c665) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x000633d1) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x000633d1) list_setting_number_pane_vc_g

0x39ce,	// (0x000575b1) list_setting_number_pane_vc_t1_ParamLimits

0x39ce,	// (0x000575b1) list_setting_number_pane_vc_t1

0x39e2,	// (0x000575c5) list_setting_number_pane_vc_t2_ParamLimits

0x39e2,	// (0x000575c5) list_setting_number_pane_vc_t2

0x39fe,	// (0x000575e1) list_setting_number_pane_vc_t3_ParamLimits

0x39fe,	// (0x000575e1) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x000633d6) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x000633d6) list_setting_number_pane_vc_t

0x3a2c,	// (0x0005760f) set_value_pane_vc_ParamLimits

0x3a2c,	// (0x0005760f) set_value_pane_vc

0xa1a9,	// (0x0005dd8c) list_double2_graphic_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double2_graphic_pane_vc

0xa1a9,	// (0x0005dd8c) list_double2_large_graphic_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double2_large_graphic_pane_vc

0xa1a9,	// (0x0005dd8c) list_double2_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double2_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_graphic_heading_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_graphic_heading_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_graphic_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_graphic_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_heading_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_heading_pane_vc

0xa1bd,	// (0x0005dda0) list_double_large_graphic_pane_vc_ParamLimits

0xa1bd,	// (0x0005dda0) list_double_large_graphic_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_number_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_number_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_pane_vc

0xa1a9,	// (0x0005dd8c) list_double_time_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_double_time_pane_vc

0xa1a9,	// (0x0005dd8c) list_setting_number_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_setting_number_pane_vc

0xa1a9,	// (0x0005dd8c) list_setting_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_setting_pane_vc

0xa1a9,	// (0x0005dd8c) list_single_graphic_heading_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_single_graphic_heading_pane_vc

0xa1a9,	// (0x0005dd8c) list_single_heading_pane_vc_ParamLimits

0xa1a9,	// (0x0005dd8c) list_single_heading_pane_vc

0xa1df,	// (0x0005ddc2) list_single_number_heading_pane_vc_ParamLimits

0xa1df,	// (0x0005ddc2) list_single_number_heading_pane_vc

0x3984,	// (0x00057567) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3984,	// (0x00057567) list_double_graphic_heading_pane_vc_g1

0x9d36,	// (0x0005d919) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9d36,	// (0x0005d919) list_double_graphic_heading_pane_vc_g2

0x9d42,	// (0x0005d925) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9d42,	// (0x0005d925) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x000635db) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x000635db) list_double_graphic_heading_pane_vc_g

0x3a63,	// (0x00057646) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3a63,	// (0x00057646) list_double_graphic_heading_pane_vc_t1

0x3a79,	// (0x0005765c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3a79,	// (0x0005765c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x000635e2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x000635e2) list_double_graphic_heading_pane_vc_t

0x8a76,	// (0x0005c659) list_setting_pane_vc_g1_ParamLimits

0x8a76,	// (0x0005c659) list_setting_pane_vc_g1

0x8a82,	// (0x0005c665) list_setting_pane_vc_g2_ParamLimits

0x8a82,	// (0x0005c665) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x000633d1) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x000633d1) list_setting_pane_vc_g

0x3a97,	// (0x0005767a) list_setting_pane_vc_t1_ParamLimits

0x3a97,	// (0x0005767a) list_setting_pane_vc_t1

0x3ab3,	// (0x00057696) list_setting_pane_vc_t2_ParamLimits

0x3ab3,	// (0x00057696) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00063610) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00063610) list_setting_pane_vc_t

0x3a2c,	// (0x0005760f) set_value_pane_cp_vc_ParamLimits

0x3a2c,	// (0x0005760f) set_value_pane_cp_vc

0x8134,	// (0x0005bd17) list_single_number_heading_pane_vc_g1_ParamLimits

0x8134,	// (0x0005bd17) list_single_number_heading_pane_vc_g1

0x89c6,	// (0x0005c5a9) list_single_number_heading_pane_vc_g2_ParamLimits

0x89c6,	// (0x0005c5a9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633c7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633c7) list_single_number_heading_pane_vc_g

0x3acf,	// (0x000576b2) list_single_number_heading_pane_vc_t1_ParamLimits

0x3acf,	// (0x000576b2) list_single_number_heading_pane_vc_t1

0x33d5,	// (0x00056fb8) list_single_number_heading_pane_vc_t2_ParamLimits

0x33d5,	// (0x00056fb8) list_single_number_heading_pane_vc_t2

0x33e7,	// (0x00056fca) list_single_number_heading_pane_vc_t3_ParamLimits

0x33e7,	// (0x00056fca) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00063615) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00063615) list_single_number_heading_pane_vc_t

0x3984,	// (0x00057567) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3984,	// (0x00057567) list_single_graphic_heading_pane_vc_g1

0x8134,	// (0x0005bd17) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8134,	// (0x0005bd17) list_single_graphic_heading_pane_vc_g4

0x89c6,	// (0x0005c5a9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x89c6,	// (0x0005c5a9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000633a6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000633a6) list_single_graphic_heading_pane_vc_g

0x3ae5,	// (0x000576c8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3ae5,	// (0x000576c8) list_single_graphic_heading_pane_vc_t1

0x3afb,	// (0x000576de) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3afb,	// (0x000576de) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x0006361c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0006361c) list_single_graphic_heading_pane_vc_t

0x8134,	// (0x0005bd17) list_double2_pane_vc_g1_ParamLimits

0x8134,	// (0x0005bd17) list_double2_pane_vc_g1

0x89c6,	// (0x0005c5a9) list_double2_pane_vc_g2_ParamLimits

0x89c6,	// (0x0005c5a9) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633c7) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633c7) list_double2_pane_vc_g

0x3a4d,	// (0x00057630) list_double2_pane_vc_t1_ParamLimits

0x3a4d,	// (0x00057630) list_double2_pane_vc_t1

0x9d4e,	// (0x0005d931) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9d4e,	// (0x0005d931) list_double2_large_graphic_pane_vc_g1

0x8134,	// (0x0005bd17) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8134,	// (0x0005bd17) list_double2_large_graphic_pane_vc_g2

0x89c6,	// (0x0005c5a9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x89c6,	// (0x0005c5a9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00063621) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00063621) list_double2_large_graphic_pane_vc_g

0x33f9,	// (0x00056fdc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x33f9,	// (0x00056fdc) list_double2_large_graphic_pane_vc_t1

0x9d5a,	// (0x0005d93d) list_double_time_pane_vc_g1_ParamLimits

0x9d5a,	// (0x0005d93d) list_double_time_pane_vc_g1

0x9d66,	// (0x0005d949) list_double_time_pane_vc_g2_ParamLimits

0x9d66,	// (0x0005d949) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00063628) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00063628) list_double_time_pane_vc_g

0x3b0d,	// (0x000576f0) list_double_time_pane_vc_t1_ParamLimits

0x3b0d,	// (0x000576f0) list_double_time_pane_vc_t1

0x3b37,	// (0x0005771a) list_double_time_pane_vc_t2_ParamLimits

0x3b37,	// (0x0005771a) list_double_time_pane_vc_t2

0x3b80,	// (0x00057763) list_double_time_pane_vc_t3_ParamLimits

0x3b80,	// (0x00057763) list_double_time_pane_vc_t3

0x3b92,	// (0x00057775) list_double_time_pane_vc_t4_ParamLimits

0x3b92,	// (0x00057775) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x0006362d) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x0006362d) list_double_time_pane_vc_t

0x8134,	// (0x0005bd17) list_double_pane_vc_g1_ParamLimits

0x8134,	// (0x0005bd17) list_double_pane_vc_g1

0x89c6,	// (0x0005c5a9) list_double_pane_vc_g2_ParamLimits

0x89c6,	// (0x0005c5a9) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633c7) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633c7) list_double_pane_vc_g

0x3d7b,	// (0x0005795e) list_double_pane_vc_t1_ParamLimits

0x3d7b,	// (0x0005795e) list_double_pane_vc_t1

0x3d8f,	// (0x00057972) list_double_pane_vc_t2_ParamLimits

0x3d8f,	// (0x00057972) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00063636) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00063636) list_double_pane_vc_t

0x8134,	// (0x0005bd17) list_double_number_pane_vc_g1_ParamLimits

0x8134,	// (0x0005bd17) list_double_number_pane_vc_g1

0x89c6,	// (0x0005c5a9) list_double_number_pane_vc_g2_ParamLimits

0x89c6,	// (0x0005c5a9) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633c7) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633c7) list_double_number_pane_vc_g

0x3d69,	// (0x0005794c) list_double_number_pane_vc_t1_ParamLimits

0x3d69,	// (0x0005794c) list_double_number_pane_vc_t1

0x3da5,	// (0x00057988) list_double_number_pane_vc_t2_ParamLimits

0x3da5,	// (0x00057988) list_double_number_pane_vc_t2

0x3d8f,	// (0x00057972) list_double_number_pane_vc_t3_ParamLimits

0x3d8f,	// (0x00057972) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x0006363b) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x0006363b) list_double_number_pane_vc_t

0x9d72,	// (0x0005d955) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9d72,	// (0x0005d955) list_double_large_graphic_pane_vc_g1

0x9d94,	// (0x0005d977) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9d94,	// (0x0005d977) list_double_large_graphic_pane_vc_g2

0x9da8,	// (0x0005d98b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9da8,	// (0x0005d98b) list_double_large_graphic_pane_vc_g3

0x3db9,	// (0x0005799c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3db9,	// (0x0005799c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00063642) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00063642) list_double_large_graphic_pane_vc_g

0x3dc8,	// (0x000579ab) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3dc8,	// (0x000579ab) list_double_large_graphic_pane_vc_t1

0x3de4,	// (0x000579c7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3de4,	// (0x000579c7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0006364b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0006364b) list_double_large_graphic_pane_vc_t

0x9d36,	// (0x0005d919) list_double_heading_pane_vc_g1_ParamLimits

0x9d36,	// (0x0005d919) list_double_heading_pane_vc_g1

0x9d42,	// (0x0005d925) list_double_heading_pane_vc_g2_ParamLimits

0x9d42,	// (0x0005d925) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00063650) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00063650) list_double_heading_pane_vc_g

0x3e04,	// (0x000579e7) list_double_heading_pane_vc_t1_ParamLimits

0x3e04,	// (0x000579e7) list_double_heading_pane_vc_t1

0x3e16,	// (0x000579f9) list_double_heading_pane_vc_t2_ParamLimits

0x3e16,	// (0x000579f9) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00063655) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00063655) list_double_heading_pane_vc_t

0x3e2e,	// (0x00057a11) list_double_graphic_pane_vc_g1_ParamLimits

0x3e2e,	// (0x00057a11) list_double_graphic_pane_vc_g1

0x9db7,	// (0x0005d99a) list_double_graphic_pane_vc_g2_ParamLimits

0x9db7,	// (0x0005d99a) list_double_graphic_pane_vc_g2

0x8134,	// (0x0005bd17) list_double_graphic_pane_vc_g3_ParamLimits

0x8134,	// (0x0005bd17) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x0006365a) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0006365a) list_double_graphic_pane_vc_g

0x3e3a,	// (0x00057a1d) list_double_graphic_pane_vc_t1_ParamLimits

0x3e3a,	// (0x00057a1d) list_double_graphic_pane_vc_t1

0x3e64,	// (0x00057a47) list_double_graphic_pane_vc_t2_ParamLimits

0x3e64,	// (0x00057a47) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00063663) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00063663) list_double_graphic_pane_vc_t

0x4ce2,	// (0x000588c5) aid_size_cell_fastswap

0x4cea,	// (0x000588cd) aid_size_cell_touch_ParamLimits

0x4cea,	// (0x000588cd) aid_size_cell_touch

0x4f55,	// (0x00058b38) popup_fast_swap_wide_window_ParamLimits

0x4f55,	// (0x00058b38) popup_fast_swap_wide_window

0x5073,	// (0x00058c56) touch_pane_ParamLimits

0x5073,	// (0x00058c56) touch_pane

0xf10e,	// (0x00062cf1) button_value_adjust_pane_cp2

0x341d,	// (0x00057000) button_value_adjust_pane_cp4

0x3425,	// (0x00057008) form_field_data_pane_cp2

0x59c8,	// (0x000595ab) form_field_data_wide_pane_cp2

0xf45a,	// (0x0006303d) bg_scroll_pane_ParamLimits

0x5dc7,	// (0x000599aa) scroll_handle_pane_ParamLimits

0x5ddb,	// (0x000599be) scroll_sc2_down_pane_ParamLimits

0x5ddb,	// (0x000599be) scroll_sc2_down_pane

0xf48b,	// (0x0006306e) scroll_sc2_up_pane_ParamLimits

0xf48b,	// (0x0006306e) scroll_sc2_up_pane

0xae02,	// (0x0005e9e5) grid_wheel_folder_pane_g1_ParamLimits

0xae02,	// (0x0005e9e5) grid_wheel_folder_pane_g1

0x6162,	// (0x00059d45) clock_nsta_pane_cp2_ParamLimits

0x6162,	// (0x00059d45) clock_nsta_pane_cp2

0x81cb,	// (0x0005bdae) listscroll_midp_pane_ParamLimits

0x81d7,	// (0x0005bdba) midp_canvas_pane

0x84c2,	// (0x0005c0a5) nsta_clock_indic_pane

0x84fe,	// (0x0005c0e1) listscroll_form_pane_vc

0x8506,	// (0x0005c0e9) listscroll_set_pane_vc_ParamLimits

0x8506,	// (0x0005c0e9) listscroll_set_pane_vc

0x85fd,	// (0x0005c1e0) clock_nsta_pane

0x8674,	// (0x0005c257) indicator_nsta_pane

0x8960,	// (0x0005c543) bg_popup_sub_pane_cp2_ParamLimits

0x8974,	// (0x0005c557) find_pane_cp2_ParamLimits

0x8974,	// (0x0005c557) find_pane_cp2

0x898a,	// (0x0005c56d) grid_toobar_pane_ParamLimits

0x8a8e,	// (0x0005c671) list_form_gen_pane_vc_ParamLimits

0x8a8e,	// (0x0005c671) list_form_gen_pane_vc

0x8aa4,	// (0x0005c687) scroll_pane_cp8_vc_ParamLimits

0x8aa4,	// (0x0005c687) scroll_pane_cp8_vc

0x8b20,	// (0x0005c703) data_form_wide_pane_vc_ParamLimits

0x8b20,	// (0x0005c703) data_form_wide_pane_vc

0x8b2c,	// (0x0005c70f) form_field_data_wide_pane_vc_g1

0x8b34,	// (0x0005c717) form_field_data_wide_pane_vc_t1_ParamLimits

0x8b34,	// (0x0005c717) form_field_data_wide_pane_vc_t1

0xf122,	// (0x00062d05) input_focus_pane_cp6_vc_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_cp6_vc

0x8e30,	// (0x0005ca13) list_midp_pane_ParamLimits

0x8e3c,	// (0x0005ca1f) scroll_pane_cp16_ParamLimits

0x8e3c,	// (0x0005ca1f) scroll_pane_cp16

0x8e9e,	// (0x0005ca81) button_value_adjust_pane_ParamLimits

0x8e9e,	// (0x0005ca81) button_value_adjust_pane

0x9fe9,	// (0x0005dbcc) button_value_adjust_pane_cp6_ParamLimits

0x9fe9,	// (0x0005dbcc) button_value_adjust_pane_cp6

0xa131,	// (0x0005dd14) settings_code_pane_cp_ParamLimits

0xa131,	// (0x0005dd14) settings_code_pane_cp

0xbd26,	// (0x0005f909) cell_touch_pane_g1

0xbd26,	// (0x0005f909) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000632eb) cell_touch_pane_g

0xa72b,	// (0x0005e30e) cell_touch_pane_cp_ParamLimits

0xa72b,	// (0x0005e30e) cell_touch_pane_cp

0xa73b,	// (0x0005e31e) cell_touch_pane_ParamLimits

0xa73b,	// (0x0005e31e) cell_touch_pane

0xbd26,	// (0x0005f909) scroll_sc2_down_pane_g1

0xbd26,	// (0x0005f909) scroll_sc2_up_pane_g1

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp4_vc

0xa74c,	// (0x0005e32f) list_set_graphic_pane_vc_g1_ParamLimits

0xa74c,	// (0x0005e32f) list_set_graphic_pane_vc_g1

0xa758,	// (0x0005e33b) list_set_graphic_pane_vc_g2_ParamLimits

0xa758,	// (0x0005e33b) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x000635e7) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x000635e7) list_set_graphic_pane_vc_g

0xa764,	// (0x0005e347) text_primary_small_cp13_vc_ParamLimits

0xa764,	// (0x0005e347) text_primary_small_cp13_vc

0x373e,	// (0x00057321) list_set_graphic_pane_vc_ParamLimits

0x373e,	// (0x00057321) list_set_graphic_pane_vc

0xbd30,	// (0x0005f913) input_focus_pane_cp2_vc

0xbd26,	// (0x0005f909) setting_code_pane_vc_g1

0xbd95,	// (0x0005f978) setting_code_pane_vc_t1

0xa77c,	// (0x0005e35f) set_text_pane_vc_t1_ParamLimits

0xa77c,	// (0x0005e35f) set_text_pane_vc_t1

0xbd30,	// (0x0005f913) input_focus_pane_cp1_vc

0xa79a,	// (0x0005e37d) list_set_text_pane_vc

0xbd26,	// (0x0005f909) setting_text_pane_vc_g1

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp2_vc

0xbd8c,	// (0x0005f96f) setting_slider_graphic_pane_vc_g1

0xa7a4,	// (0x0005e387) setting_slider_graphic_pane_vc_t1

0xa7b6,	// (0x0005e399) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x000635ec) setting_slider_graphic_pane_vc_t

0xa7c8,	// (0x0005e3ab) slider_set_pane_cp_vc

0xa7d2,	// (0x0005e3b5) slider_set_pane_vc_g1

0xa7db,	// (0x0005e3be) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x000635f1) slider_set_pane_vc_g

0xf17a,	// (0x00062d5d) set_opt_bg_pane_g1_copy1

0xf182,	// (0x00062d65) set_opt_bg_pane_g2_copy1

0xa807,	// (0x0005e3ea) set_opt_bg_pane_g3_copy1

0xf192,	// (0x00062d75) set_opt_bg_pane_g4_copy1

0xf19a,	// (0x00062d7d) set_opt_bg_pane_g5_copy1

0xf1a2,	// (0x00062d85) set_opt_bg_pane_g6_copy1

0xa811,	// (0x0005e3f4) set_opt_bg_pane_g7_copy1

0xa81b,	// (0x0005e3fe) set_opt_bg_pane_g8_copy1

0xa825,	// (0x0005e408) set_opt_bg_pane_g9_copy1

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp_vc

0xa82f,	// (0x0005e412) setting_slider_pane_vc_t1

0xa83e,	// (0x0005e421) setting_slider_pane_vc_t2

0xa850,	// (0x0005e433) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00063600) setting_slider_pane_vc_t

0xa862,	// (0x0005e445) slider_set_pane_vc

0x6b9b,	// (0x0005a77e) volume_set_pane_vc_g1

0x6ba4,	// (0x0005a787) volume_set_pane_vc_g2

0x6bad,	// (0x0005a790) volume_set_pane_vc_g3

0x6bb6,	// (0x0005a799) volume_set_pane_vc_g4

0x6bbf,	// (0x0005a7a2) volume_set_pane_vc_g5

0x6bc8,	// (0x0005a7ab) volume_set_pane_vc_g6

0x6bd1,	// (0x0005a7b4) volume_set_pane_vc_g7

0x6bda,	// (0x0005a7bd) volume_set_pane_vc_g8

0x6be3,	// (0x0005a7c6) volume_set_pane_vc_g9

0x6bec,	// (0x0005a7cf) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0006349e) volume_set_pane_vc_g

0xa86a,	// (0x0005e44d) volume_set_pane_vc

0xa874,	// (0x0005e457) button_value_adjust_pane_cp1_vc

0xa87e,	// (0x0005e461) list_highlight_pane_cp2_vc

0xa887,	// (0x0005e46a) list_set_pane_vc_ParamLimits

0xa887,	// (0x0005e46a) list_set_pane_vc

0xa8f5,	// (0x0005e4d8) main_pane_set_vc_t1_ParamLimits

0xa8f5,	// (0x0005e4d8) main_pane_set_vc_t1

0xa90a,	// (0x0005e4ed) main_pane_set_vc_t2_ParamLimits

0xa90a,	// (0x0005e4ed) main_pane_set_vc_t2

0xa91c,	// (0x0005e4ff) main_pane_set_vc_t3_ParamLimits

0xa91c,	// (0x0005e4ff) main_pane_set_vc_t3

0xa930,	// (0x0005e513) main_pane_set_vc_t4_ParamLimits

0xa930,	// (0x0005e513) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00063607) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00063607) main_pane_set_vc_t

0xa944,	// (0x0005e527) setting_code_pane_vc_ParamLimits

0xa944,	// (0x0005e527) setting_code_pane_vc

0xa955,	// (0x0005e538) setting_slider_graphic_pane_vc

0xa955,	// (0x0005e538) setting_slider_pane_vc

0xa955,	// (0x0005e538) setting_text_pane_vc

0xa955,	// (0x0005e538) setting_volume_pane_vc

0xa95f,	// (0x0005e542) scroll_pane_cp121_vc

0xf0fc,	// (0x00062cdf) set_content_pane_vc

0xa967,	// (0x0005e54a) button_value_adjust_pane_g1

0xa970,	// (0x0005e553) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00063668) button_value_adjust_pane_g

0xa979,	// (0x0005e55c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa979,	// (0x0005e55c) form_field_slider_wide_pane_vc_t1

0xa98b,	// (0x0005e56e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa98b,	// (0x0005e56e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x0006366d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x0006366d) form_field_slider_wide_pane_vc_t

0xbdba,	// (0x0005f99d) input_focus_pane_cp10_vc_ParamLimits

0xbdba,	// (0x0005f99d) input_focus_pane_cp10_vc

0xa9b7,	// (0x0005e59a) slider_cont_pane_cp1_vc_ParamLimits

0xa9b7,	// (0x0005e59a) slider_cont_pane_cp1_vc

0xa9c9,	// (0x0005e5ac) slider_form_pane_g1_cp2

0xa7db,	// (0x0005e3be) slider_form_pane_g2_cp2

0xa9f6,	// (0x0005e5d9) form_field_slider_pane_vc_t3

0xaa04,	// (0x0005e5e7) form_field_slider_pane_vc_t4

0xaa12,	// (0x0005e5f5) slider_form_pane_vc_ParamLimits

0xaa12,	// (0x0005e5f5) slider_form_pane_vc

0xaa1f,	// (0x0005e602) form_field_slider_pane_vc_t1_ParamLimits

0xaa1f,	// (0x0005e602) form_field_slider_pane_vc_t1

0xa98b,	// (0x0005e56e) form_field_slider_pane_vc_t2_ParamLimits

0xa98b,	// (0x0005e56e) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0006367f) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0006367f) form_field_slider_pane_vc_t

0xbdba,	// (0x0005f99d) input_focus_pane_cp9_vc_ParamLimits

0xbdba,	// (0x0005f99d) input_focus_pane_cp9_vc

0xaa35,	// (0x0005e618) slider_cont_pane_vc_ParamLimits

0xaa35,	// (0x0005e618) slider_cont_pane_vc

0xaa49,	// (0x0005e62c) list_form_graphic_pane_cp_vc_ParamLimits

0xaa49,	// (0x0005e62c) list_form_graphic_pane_cp_vc

0x8b2c,	// (0x0005c70f) form_field_popup_wide_pane_vc_g1

0xaa5e,	// (0x0005e641) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaa5e,	// (0x0005e641) form_field_popup_wide_pane_vc_t1

0xf122,	// (0x00062d05) input_focus_pane_cp8_vc_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_cp8_vc

0xaaa3,	// (0x0005e686) list_form_wide_pane_vc_ParamLimits

0xaaa3,	// (0x0005e686) list_form_wide_pane_vc

0xaaaf,	// (0x0005e692) list_form_graphic_pane_vc_g1

0xaab7,	// (0x0005e69a) list_form_graphic_pane_vc_t1_ParamLimits

0xaab7,	// (0x0005e69a) list_form_graphic_pane_vc_t1

0xbd7e,	// (0x0005f961) list_highlight_pane_cp5_vc_ParamLimits

0xbd7e,	// (0x0005f961) list_highlight_pane_cp5_vc

0xaad3,	// (0x0005e6b6) list_form_graphic_pane_vc_ParamLimits

0xaad3,	// (0x0005e6b6) list_form_graphic_pane_vc

0x8b2c,	// (0x0005c70f) form_field_popup_pane_vc_g1

0xaae9,	// (0x0005e6cc) form_field_popup_pane_vc_t1_ParamLimits

0xaae9,	// (0x0005e6cc) form_field_popup_pane_vc_t1

0xf122,	// (0x00062d05) input_focus_pane_cp7_vc_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_cp7_vc

0xab00,	// (0x0005e6e3) list_form_pane_vc_ParamLimits

0xab00,	// (0x0005e6e3) list_form_pane_vc

0xab0c,	// (0x0005e6ef) data_form_pane_vc_t1_ParamLimits

0xab0c,	// (0x0005e6ef) data_form_pane_vc_t1

0xf17a,	// (0x00062d5d) input_focus_pane_vc_g1

0xf182,	// (0x00062d65) input_focus_pane_vc_g2

0xf18a,	// (0x00062d6d) input_focus_pane_vc_g3

0xf192,	// (0x00062d75) input_focus_pane_vc_g4

0xf19a,	// (0x00062d7d) input_focus_pane_vc_g5

0xf1a2,	// (0x00062d85) input_focus_pane_vc_g6

0xf1aa,	// (0x00062d8d) input_focus_pane_vc_g7

0xf1b2,	// (0x00062d95) input_focus_pane_vc_g8

0xf1ba,	// (0x00062d9d) input_focus_pane_vc_g9

0xbd26,	// (0x0005f909) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00063274) input_focus_pane_vc_g

0x8b20,	// (0x0005c703) data_form_pane_vc_ParamLimits

0x8b20,	// (0x0005c703) data_form_pane_vc

0x8b2c,	// (0x0005c70f) form_field_data_pane_vc_g1

0xab29,	// (0x0005e70c) form_field_data_pane_vc_t1_ParamLimits

0xab29,	// (0x0005e70c) form_field_data_pane_vc_t1

0xf122,	// (0x00062d05) input_focus_pane_vc_ParamLimits

0xf122,	// (0x00062d05) input_focus_pane_vc

0xab43,	// (0x0005e726) button_value_adjust_pane_cp3_vc

0xab4b,	// (0x0005e72e) button_value_adjust_pane_cp5_vc

0xab53,	// (0x0005e736) form_field_data_pane_vc_ParamLimits

0xab53,	// (0x0005e736) form_field_data_pane_vc

0xab6e,	// (0x0005e751) form_field_data_pane_vc_cp2

0xab76,	// (0x0005e759) form_field_data_wide_pane_vc_ParamLimits

0xab76,	// (0x0005e759) form_field_data_wide_pane_vc

0xab90,	// (0x0005e773) form_field_data_wide_pane_vc_cp2

0xab98,	// (0x0005e77b) form_field_popup_pane_vc_ParamLimits

0xab98,	// (0x0005e77b) form_field_popup_pane_vc

0xabb3,	// (0x0005e796) form_field_popup_wide_pane_vc_ParamLimits

0xabb3,	// (0x0005e796) form_field_popup_wide_pane_vc

0xabcd,	// (0x0005e7b0) form_field_slider_pane_vc_ParamLimits

0xabcd,	// (0x0005e7b0) form_field_slider_pane_vc

0xabe0,	// (0x0005e7c3) form_field_slider_wide_pane_vc_ParamLimits

0xabe0,	// (0x0005e7c3) form_field_slider_wide_pane_vc

0xabf3,	// (0x0005e7d6) grid_touch_1_pane_ParamLimits

0xabf3,	// (0x0005e7d6) grid_touch_1_pane

0xabff,	// (0x0005e7e2) grid_touch_2_pane_ParamLimits

0xabff,	// (0x0005e7e2) grid_touch_2_pane

0x848d,	// (0x0005c070) touch_pane_g1_ParamLimits

0x848d,	// (0x0005c070) touch_pane_g1

0xac19,	// (0x0005e7fc) cell_app_pane_cp_wide_ParamLimits

0xac19,	// (0x0005e7fc) cell_app_pane_cp_wide

0xac2a,	// (0x0005e80d) grid_popup_fast_wide_pane_ParamLimits

0xac2a,	// (0x0005e80d) grid_popup_fast_wide_pane

0xac3e,	// (0x0005e821) scroll_pane_cp19_ParamLimits

0xac3e,	// (0x0005e821) scroll_pane_cp19

0xbd30,	// (0x0005f913) bg_popup_window_pane_cp20

0xac52,	// (0x0005e835) listscroll_popup_fast_wide_pane

0xbd7e,	// (0x0005f961) grid_indicator_nsta_pane

0xac5a,	// (0x0005e83d) clock_nsta_pane_g1

0xac63,	// (0x0005e846) clock_nsta_pane_t1

0xac7f,	// (0x0005e862) cell_indicator_nsta_pane_ParamLimits

0xac7f,	// (0x0005e862) cell_indicator_nsta_pane

0xacb0,	// (0x0005e893) cell_indicator_nsta_pane_g1

0xacbe,	// (0x0005e8a1) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00063690) cell_indicator_nsta_pane_g

0xaccb,	// (0x0005e8ae) clock_nsta_pane_cp

0xacd4,	// (0x0005e8b7) indicator_nsta_pane_cp

0xacdc,	// (0x0005e8bf) nsta_clock_indic_pane_g1

0xeb20,	// (0x00062703) grid_indicator_pane

0x1231,	// (0x00054e14) scroll_pane_cp29

0x60b1,	// (0x00059c94) indicator_nsta_pane_cp2_ParamLimits

0x60b1,	// (0x00059c94) indicator_nsta_pane_cp2

0xbd7e,	// (0x0005f961) main_apps_wheel_pane

0x8d0d,	// (0x0005c8f0) form_midp_field_text_pane_ParamLimits

0x8e5c,	// (0x0005ca3f) scroll_bar_cp050_ParamLimits

0xad2c,	// (0x0005e90f) cell_indicator_pane_ParamLimits

0xad2c,	// (0x0005e90f) cell_indicator_pane

0xad44,	// (0x0005e927) cell_indicator_pane_g1

0xad4e,	// (0x0005e931) grid_wheel_folder_pane_ParamLimits

0xad4e,	// (0x0005e931) grid_wheel_folder_pane

0xad62,	// (0x0005e945) list_wheel_apps_pane_ParamLimits

0xad62,	// (0x0005e945) list_wheel_apps_pane

0xad75,	// (0x0005e958) main_apps_wheel_pane_g1_ParamLimits

0xad75,	// (0x0005e958) main_apps_wheel_pane_g1

0xad91,	// (0x0005e974) main_apps_wheel_pane_g2_ParamLimits

0xad91,	// (0x0005e974) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x000636ac) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x000636ac) main_apps_wheel_pane_g

0xadad,	// (0x0005e990) main_apps_wheel_pane_t1_ParamLimits

0xadad,	// (0x0005e990) main_apps_wheel_pane_t1

0xadd6,	// (0x0005e9b9) list_wheel_apps_pane_g1

0xadde,	// (0x0005e9c1) list_wheel_apps_pane_g2

0xade6,	// (0x0005e9c9) list_wheel_apps_pane_g3

0xadee,	// (0x0005e9d1) list_wheel_apps_pane_g4

0xadf8,	// (0x0005e9db) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x000636b1) list_wheel_apps_pane_g

0x38d3,	// (0x000574b6) navi_icon_text_pane

0x852e,	// (0x0005c111) aid_fill_nsta

0xae19,	// (0x0005e9fc) navi_icon_text_pane_g1

0xae25,	// (0x0005ea08) navi_icon_text_pane_t1

0x3769,	// (0x0005734c) list_set_graphic_pane_t1_ParamLimits

0x3769,	// (0x0005734c) list_set_graphic_pane_t1

0x95c1,	// (0x0005d1a4) popup_midp_note_alarm_window_t6_ParamLimits

0x95c1,	// (0x0005d1a4) popup_midp_note_alarm_window_t6

0x95d3,	// (0x0005d1b6) popup_midp_note_alarm_window_t7_ParamLimits

0x95d3,	// (0x0005d1b6) popup_midp_note_alarm_window_t7

0x95e5,	// (0x0005d1c8) popup_midp_note_alarm_window_t8_ParamLimits

0x95e5,	// (0x0005d1c8) popup_midp_note_alarm_window_t8

0x95f7,	// (0x0005d1da) popup_midp_note_alarm_window_t9_ParamLimits

0x95f7,	// (0x0005d1da) popup_midp_note_alarm_window_t9

0x9609,	// (0x0005d1ec) popup_midp_note_alarm_window_t10_ParamLimits

0x9609,	// (0x0005d1ec) popup_midp_note_alarm_window_t10

0x961b,	// (0x0005d1fe) popup_midp_note_alarm_window_t11_ParamLimits

0x961b,	// (0x0005d1fe) popup_midp_note_alarm_window_t11

0x962d,	// (0x0005d210) scroll_pane_cp17_ParamLimits

0x962d,	// (0x0005d210) scroll_pane_cp17

0x6b9b,	// (0x0005a77e) volume_small_pane_cp_g1

0x6f20,	// (0x0005ab03) volume_small_pane_cp_g2

0x6f29,	// (0x0005ab0c) volume_small_pane_cp_g3

0x6f32,	// (0x0005ab15) volume_small_pane_cp_g4

0x6f3b,	// (0x0005ab1e) volume_small_pane_cp_g5

0x6f44,	// (0x0005ab27) volume_small_pane_cp_g6

0x6f4d,	// (0x0005ab30) volume_small_pane_cp_g7

0x6f56,	// (0x0005ab39) volume_small_pane_cp_g8

0x6f5f,	// (0x0005ab42) volume_small_pane_cp_g9

0x6f68,	// (0x0005ab4b) volume_small_pane_cp_g10

0x82a1,	// (0x0005be84) midp_ticker_pane_g1_ParamLimits

0x82ad,	// (0x0005be90) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00063340) midp_ticker_pane_g_ParamLimits

0x82b9,	// (0x0005be9c) midp_ticker_pane_t1_ParamLimits

0x8544,	// (0x0005c127) aid_fill_nsta_2

0x8e48,	// (0x0005ca2b) list_form2_midp_pane

0xa178,	// (0x0005dd5b) midp_editing_number_pane_ParamLimits

0xa187,	// (0x0005dd6a) midp_ticker_pane_ParamLimits

0xae37,	// (0x0005ea1a) form2_midp_field_pane

0xae5b,	// (0x0005ea3e) scroll_pane_cp51

0xae7b,	// (0x0005ea5e) form2_midp_button_pane_ParamLimits

0xae7b,	// (0x0005ea5e) form2_midp_button_pane

0xae8d,	// (0x0005ea70) form2_midp_content_pane_ParamLimits

0xae8d,	// (0x0005ea70) form2_midp_content_pane

0xaea7,	// (0x0005ea8a) form2_midp_field_choice_group_pane

0xaeaf,	// (0x0005ea92) form2_midp_field_pane_g1

0xaeb7,	// (0x0005ea9a) form2_midp_field_pane_g2

0xaebf,	// (0x0005eaa2) form2_midp_field_pane_g3

0xaec7,	// (0x0005eaaa) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x000636d6) form2_midp_field_pane_g

0xaecf,	// (0x0005eab2) form2_midp_gauge_slider_pane

0xaed7,	// (0x0005eaba) form2_midp_gauge_wait_pane

0xaedf,	// (0x0005eac2) form2_midp_image_pane_ParamLimits

0xaedf,	// (0x0005eac2) form2_midp_image_pane

0xaefa,	// (0x0005eadd) form2_midp_label_pane_ParamLimits

0xaefa,	// (0x0005eadd) form2_midp_label_pane

0xaf19,	// (0x0005eafc) form2_midp_label_pane_cp_ParamLimits

0xaf19,	// (0x0005eafc) form2_midp_label_pane_cp

0xaf3a,	// (0x0005eb1d) form2_midp_string_pane_ParamLimits

0xaf3a,	// (0x0005eb1d) form2_midp_string_pane

0x6f71,	// (0x0005ab54) form2_midp_text_pane_ParamLimits

0x6f71,	// (0x0005ab54) form2_midp_text_pane

0xaf4c,	// (0x0005eb2f) form2_midp_time_pane

0xaf5c,	// (0x0005eb3f) input_focus_pane_cp51_ParamLimits

0xaf5c,	// (0x0005eb3f) input_focus_pane_cp51

0xaf74,	// (0x0005eb57) form2_midp_label_pane_t1_ParamLimits

0xaf74,	// (0x0005eb57) form2_midp_label_pane_t1

0x6f94,	// (0x0005ab77) form2_mdip_text_pane_t1_ParamLimits

0x6f94,	// (0x0005ab77) form2_mdip_text_pane_t1

0x3e82,	// (0x00057a65) form2_midp_time_pane_t1

0xafc2,	// (0x0005eba5) form2_midp_gauge_slider_pane_t1

0xafd4,	// (0x0005ebb7) form2_midp_gauge_slider_pane_t2

0xafe6,	// (0x0005ebc9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x000636df) form2_midp_gauge_slider_pane_t

0xaff8,	// (0x0005ebdb) form2_midp_slider_pane

0xb004,	// (0x0005ebe7) form2_midp_gauge_wait_pane_t1

0xb012,	// (0x0005ebf5) form2_midp_wait_pane_ParamLimits

0xb012,	// (0x0005ebf5) form2_midp_wait_pane

0xb03d,	// (0x0005ec20) list_single_2graphic_pane_cp4_ParamLimits

0xb03d,	// (0x0005ec20) list_single_2graphic_pane_cp4

0x8b89,	// (0x0005c76c) list_single_midp_graphic_pane_cp_ParamLimits

0x8b89,	// (0x0005c76c) list_single_midp_graphic_pane_cp

0xbd30,	// (0x0005f913) list_highlight_pane_cp20

0xb056,	// (0x0005ec39) list_single_2graphic_pane_g1_cp4

0xa62e,	// (0x0005e211) list_single_2graphic_pane_g2_cp4

0xb05e,	// (0x0005ec41) list_single_2graphic_pane_t1_cp4

0xbd7e,	// (0x0005f961) list_highlight_pane_cp21

0xb06d,	// (0x0005ec50) list_single_midp_graphic_pane_g4_cp

0xb07c,	// (0x0005ec5f) list_single_midp_graphic_pane_t1_cp

0xb091,	// (0x0005ec74) form2_mdip_string_pane_t1_ParamLimits

0xb091,	// (0x0005ec74) form2_mdip_string_pane_t1

0xbd30,	// (0x0005f913) bg_wml_button_pane_cp2

0xbd26,	// (0x0005f909) form2_midp_image_pane_g1

0x40c1,	// (0x00057ca4) list_double_large_graphic_pane_g5_ParamLimits

0x40c1,	// (0x00057ca4) list_double_large_graphic_pane_g5

0x81cb,	// (0x0005bdae) midp_form_pane_ParamLimits

0xbd7e,	// (0x0005f961) main_apps_wheel_pane_ParamLimits

0x67e5,	// (0x0005a3c8) popup_preview_window_ParamLimits

0x67e5,	// (0x0005a3c8) popup_preview_window

0x69cc,	// (0x0005a5af) popup_touch_info_window_ParamLimits

0x69cc,	// (0x0005a5af) popup_touch_info_window

0x69ee,	// (0x0005a5d1) popup_touch_menu_window_ParamLimits

0x69ee,	// (0x0005a5d1) popup_touch_menu_window

0xbd1c,	// (0x0005f8ff) bg_popup_sub_pane_cp6

0xb12d,	// (0x0005ed10) list_touch_menu_pane

0xb135,	// (0x0005ed18) list_single_touch_menu_pane_ParamLimits

0xb135,	// (0x0005ed18) list_single_touch_menu_pane

0xb14d,	// (0x0005ed30) list_single_touch_menu_pane_t1

0xbd7e,	// (0x0005f961) bg_popup_sub_pane_cp7_ParamLimits

0xbd7e,	// (0x0005f961) bg_popup_sub_pane_cp7

0xb15b,	// (0x0005ed3e) heading_sub_pane

0xb163,	// (0x0005ed46) list_touch_info_pane_ParamLimits

0xb163,	// (0x0005ed46) list_touch_info_pane

0xb172,	// (0x0005ed55) list_single_touch_info_pane_ParamLimits

0xb172,	// (0x0005ed55) list_single_touch_info_pane

0xb184,	// (0x0005ed67) list_single_touch_info_pane_t1

0xb192,	// (0x0005ed75) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x000636ed) list_single_touch_info_pane_t

0x81c3,	// (0x0005bda6) bg_popup_heading_pane_cp

0xb1a0,	// (0x0005ed83) heading_sub_pane_t1

0x8aba,	// (0x0005c69d) bg_popup_preview_window_pane_cp_ParamLimits

0x8aba,	// (0x0005c69d) bg_popup_preview_window_pane_cp

0xb15b,	// (0x0005ed3e) heading_preview_pane

0xb163,	// (0x0005ed46) list_preview_pane_ParamLimits

0xb163,	// (0x0005ed46) list_preview_pane

0xb1ae,	// (0x0005ed91) popup_preview_window_g1

0xb172,	// (0x0005ed55) list_single_preview_pane_ParamLimits

0xb172,	// (0x0005ed55) list_single_preview_pane

0xb1b6,	// (0x0005ed99) list_single_preview_pane_g1

0xb1be,	// (0x0005eda1) list_single_preview_pane_t1

0xb184,	// (0x0005ed67) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x000636f2) list_single_preview_pane_t

0xb1cc,	// (0x0005edaf) bg_popup_heading_pane_cp2_ParamLimits

0xb1cc,	// (0x0005edaf) bg_popup_heading_pane_cp2

0xb1e2,	// (0x0005edc5) heading_preview_pane_g1

0xb1ea,	// (0x0005edcd) heading_preview_pane_t1_ParamLimits

0xb1ea,	// (0x0005edcd) heading_preview_pane_t1

0xeb37,	// (0x0006271a) soft_indicator_pane_t1_ParamLimits

0xf095,	// (0x00062c78) scroll_pane_ParamLimits

0xf479,	// (0x0006305c) scroll_sc2_left_pane

0xf482,	// (0x00063065) scroll_sc2_right_pane

0xf4a1,	// (0x00063084) scroll_bg_pane_g1_ParamLimits

0xf4b6,	// (0x00063099) scroll_bg_pane_g2_ParamLimits

0xf4ce,	// (0x000630b1) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000632cb) scroll_bg_pane_g_ParamLimits

0xf4a1,	// (0x00063084) scroll_handle_pane_g1_ParamLimits

0xf4f0,	// (0x000630d3) scroll_handle_pane_g2_ParamLimits

0xf4ce,	// (0x000630b1) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x000632d2) scroll_handle_pane_g_ParamLimits

0x642c,	// (0x0005a00f) popup_choice_list_window_ParamLimits

0x642c,	// (0x0005a00f) popup_choice_list_window

0x896c,	// (0x0005c54f) choice_list_pane

0x89fa,	// (0x0005c5dd) cell_toolbar_pane_t1

0x8a22,	// (0x0005c605) toolbar_button_pane_ParamLimits

0x9af7,	// (0x0005d6da) ai_gene_pane_1_t2_ParamLimits

0x9af7,	// (0x0005d6da) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x000634fa) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x000634fa) ai_gene_pane_1_t

0xb207,	// (0x0005edea) scroll_sc2_left_pane_g1

0xb207,	// (0x0005edea) scroll_sc2_right_pane_g1

0x84f2,	// (0x0005c0d5) bg_popup_sub_pane_cp10

0xb211,	// (0x0005edf4) list_choice_list_pane

0xa20e,	// (0x0005ddf1) list_single_choice_list_pane_ParamLimits

0xa20e,	// (0x0005ddf1) list_single_choice_list_pane

0xb22a,	// (0x0005ee0d) list_single_choice_list_pane_g1

0xf270,	// (0x00062e53) list_single_choice_list_pane_t1_ParamLimits

0xf270,	// (0x00062e53) list_single_choice_list_pane_t1

0xb232,	// (0x0005ee15) choice_list_pane_g1

0xb23a,	// (0x0005ee1d) choice_list_pane_t1

0xbd1c,	// (0x0005f8ff) input_focus_pane_cp11

0xf3ee,	// (0x00062fd1) title_pane_stacon_g2_ParamLimits

0xf3ee,	// (0x00062fd1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000632b1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000632b1) title_pane_stacon_g

0x81c3,	// (0x0005bda6) cursor_press_pane

0x64e6,	// (0x0005a0c9) popup_fep_hwr_window_ParamLimits

0x64e6,	// (0x0005a0c9) popup_fep_hwr_window

0x6570,	// (0x0005a153) popup_fep_vkb_window_ParamLimits

0x6570,	// (0x0005a153) popup_fep_vkb_window

0xb248,	// (0x0005ee2b) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0006371b) fep_vkb_side_pane_g_ParamLimits

0x6fec,	// (0x0005abcf) fep_hwr_candidate_pane_ParamLimits

0x6fec,	// (0x0005abcf) fep_hwr_candidate_pane

0x7016,	// (0x0005abf9) fep_hwr_side_pane_ParamLimits

0x7016,	// (0x0005abf9) fep_hwr_side_pane

0x7038,	// (0x0005ac1b) fep_hwr_top_pane_ParamLimits

0x7038,	// (0x0005ac1b) fep_hwr_top_pane

0x7050,	// (0x0005ac33) fep_hwr_write_pane_ParamLimits

0x7050,	// (0x0005ac33) fep_hwr_write_pane

0xfb38,	// (0x0006371b) fep_vkb_side_pane_g

0xb250,	// (0x0005ee33) fep_hwr_top_pane_g1

0xb262,	// (0x0005ee45) fep_hwr_top_pane_g2

0x708a,	// (0x0005ac6d) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x000636f7) fep_hwr_top_pane_g

0x709f,	// (0x0005ac82) fep_hwr_top_text_pane

0x3521,	// (0x00057104) fep_hwr_top_text_pane_g1

0xb298,	// (0x0005ee7b) fep_hwr_top_text_pane_t1

0x71a9,	// (0x0005ad8c) fep_hwr_candidate_pane_g1

0xb4e3,	// (0x0005f0c6) fep_vkb_keypad_pane_g3_ParamLimits

0xb4e3,	// (0x0005f0c6) fep_vkb_keypad_pane_g3

0xb50f,	// (0x0005f0f2) fep_vkb_keypad_pane_g4_ParamLimits

0xb50f,	// (0x0005f0f2) fep_vkb_keypad_pane_g4

0xb586,	// (0x0005f169) fep_vkb_bottom_pane_g2_ParamLimits

0xb586,	// (0x0005f169) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00063722) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00063722) fep_vkb_bottom_pane_g

0xb207,	// (0x0005edea) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0006372c) cell_vkb_side_pane_g

0xb611,	// (0x0005f1f4) cell_vkb_side_pane_t1

0xb61f,	// (0x0005f202) cell_vkb_side_pane_t1_copy1

0xb207,	// (0x0005edea) bg_fep_vkb_candidate_pane_g2

0xb763,	// (0x0005f346) cell_vkb_candidate_pane_ParamLimits

0xb2a6,	// (0x0005ee89) aid_size_cell_vkb_ParamLimits

0xb2a6,	// (0x0005ee89) aid_size_cell_vkb

0xb763,	// (0x0005f346) cell_vkb_candidate_pane

0x71d0,	// (0x0005adb3) bg_popup_fep_shadow_pane_g1

0xb338,	// (0x0005ef1b) fep_vkb_bottom_pane_ParamLimits

0xb338,	// (0x0005ef1b) fep_vkb_bottom_pane

0xb375,	// (0x0005ef58) fep_vkb_candidate_pane_ParamLimits

0xb375,	// (0x0005ef58) fep_vkb_candidate_pane

0xb391,	// (0x0005ef74) fep_vkb_keypad_pane_ParamLimits

0xb391,	// (0x0005ef74) fep_vkb_keypad_pane

0xb3c4,	// (0x0005efa7) fep_vkb_side_pane_ParamLimits

0xb3c4,	// (0x0005efa7) fep_vkb_side_pane

0xb400,	// (0x0005efe3) fep_vkb_top_pane_ParamLimits

0xb400,	// (0x0005efe3) fep_vkb_top_pane

0xb43c,	// (0x0005f01f) fep_vkb_top_pane_g1_ParamLimits

0xb43c,	// (0x0005f01f) fep_vkb_top_pane_g1

0xb44b,	// (0x0005f02e) fep_vkb_top_pane_g2_ParamLimits

0xb44b,	// (0x0005f02e) fep_vkb_top_pane_g2

0xb45a,	// (0x0005f03d) fep_vkb_top_pane_g3_ParamLimits

0xb45a,	// (0x0005f03d) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00063712) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00063712) fep_vkb_top_pane_g

0xb478,	// (0x0005f05b) fep_vkb_top_text_pane_ParamLimits

0xb478,	// (0x0005f05b) fep_vkb_top_text_pane

0xb489,	// (0x0005f06c) fep_vkb_side_pane_g1_ParamLimits

0xb489,	// (0x0005f06c) fep_vkb_side_pane_g1

0xb4d2,	// (0x0005f0b5) grid_vkb_side_pane_ParamLimits

0xb4d2,	// (0x0005f0b5) grid_vkb_side_pane

0x71d8,	// (0x0005adbb) bg_popup_fep_shadow_pane_g2

0x71e1,	// (0x0005adc4) bg_popup_fep_shadow_pane_g3

0x71e9,	// (0x0005adcc) bg_popup_fep_shadow_pane_g4

0x71f2,	// (0x0005add5) bg_popup_fep_shadow_pane_g5

0x71fc,	// (0x0005addf) bg_popup_fep_shadow_pane_g6

0x7204,	// (0x0005ade7) bg_popup_fep_shadow_pane_g7

0xf192,	// (0x00062d75) bg_popup_fep_shadow_pane_g8

0xb531,	// (0x0005f114) grid_vkb_keypad_number_pane_ParamLimits

0xb531,	// (0x0005f114) grid_vkb_keypad_number_pane

0xb545,	// (0x0005f128) grid_vkb_keypad_pane_ParamLimits

0xb545,	// (0x0005f128) grid_vkb_keypad_pane

0xb56b,	// (0x0005f14e) fep_vkb_bottom_pane_g1_ParamLimits

0xb56b,	// (0x0005f14e) fep_vkb_bottom_pane_g1

0xb594,	// (0x0005f177) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb594,	// (0x0005f177) grid_vkb_keypad_bottom_left_pane

0xb5a9,	// (0x0005f18c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb5a9,	// (0x0005f18c) grid_vkb_keypad_bottom_right_pane

0xb5be,	// (0x0005f1a1) fep_vkb_top_text_pane_g1

0xb5d9,	// (0x0005f1bc) fep_vkb_top_text_pane_t1

0xb5ee,	// (0x0005f1d1) cell_vkb_side_pane_ParamLimits

0xb5ee,	// (0x0005f1d1) cell_vkb_side_pane

0xb207,	// (0x0005edea) cell_vkb_side_pane_g1

0xb62d,	// (0x0005f210) cell_vkb_keypad_pane_ParamLimits

0xb62d,	// (0x0005f210) cell_vkb_keypad_pane

0xb6ba,	// (0x0005f29d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0006373f) bg_popup_fep_shadow_pane_g

0x7216,	// (0x0005adf9) cell_hwr_side_pane_g1

0x7216,	// (0x0005adf9) cell_hwr_side_pane_g2

0xb6c4,	// (0x0005f2a7) cell_vkb_keypad_pane_t1

0xb6d2,	// (0x0005f2b5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb6d2,	// (0x0005f2b5) cell_vkb_keypad_bottom_left_pane

0xb6ef,	// (0x0005f2d2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb6ef,	// (0x0005f2d2) cell_vkb_keypad_bottom_right_pane

0xb207,	// (0x0005edea) cell_vkb_keypad_bottom_left_pane_g1

0xb207,	// (0x0005edea) cell_vkb_keypad_bottom_right_pane_g1

0xb728,	// (0x0005f30b) cell_vkb_keypad_number_pane_ParamLimits

0xb728,	// (0x0005f30b) cell_vkb_keypad_number_pane

0xb747,	// (0x0005f32a) cell_vkb_keypad_number_pane_g1

0xb751,	// (0x0005f334) cell_vkb_keypad_number_pane_g2

0xb75a,	// (0x0005f33d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00063731) cell_vkb_keypad_number_pane_g

0xb6c4,	// (0x0005f2a7) cell_vkb_keypad_number_pane_t1

0xb784,	// (0x0005f367) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00063752) cell_hwr_side_pane_g

0xb79d,	// (0x0005f380) cell_hwr_side_pane_t1

0x7220,	// (0x0005ae03) cell_hwr_side_pane_t1_copy1

0x722e,	// (0x0005ae11) cell_hwr_candidate_pane_g1

0x725d,	// (0x0005ae40) cell_hwr_candidate_pane_t1

0xb207,	// (0x0005edea) cell_vkb_candidate_pane_g2

0xb7e1,	// (0x0005f3c4) cell_vkb_candidate_pane_t1

0x6fb3,	// (0x0005ab96) bg_popup_fep_shadow_pane_ParamLimits

0x6fb3,	// (0x0005ab96) bg_popup_fep_shadow_pane

0x706a,	// (0x0005ac4d) bg_fep_hwr_top_pane_g4

0xb274,	// (0x0005ee57) bg_hwr_side_pane_g1_ParamLimits

0xb274,	// (0x0005ee57) bg_hwr_side_pane_g1

0x70dd,	// (0x0005acc0) cell_hwr_side_pane_ParamLimits

0x70dd,	// (0x0005acc0) cell_hwr_side_pane

0x711a,	// (0x0005acfd) fep_hwr_write_pane_g1_ParamLimits

0x711a,	// (0x0005acfd) fep_hwr_write_pane_g1

0x7127,	// (0x0005ad0a) fep_hwr_write_pane_g2_ParamLimits

0x7127,	// (0x0005ad0a) fep_hwr_write_pane_g2

0x7134,	// (0x0005ad17) fep_hwr_write_pane_g3_ParamLimits

0x7134,	// (0x0005ad17) fep_hwr_write_pane_g3

0x7142,	// (0x0005ad25) fep_hwr_write_pane_g4_ParamLimits

0x7142,	// (0x0005ad25) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x000636fe) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x000636fe) fep_hwr_write_pane_g

0x706a,	// (0x0005ac4d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x706a,	// (0x0005ac4d) bg_fep_hwr_candidate_pane_g2

0x7157,	// (0x0005ad3a) cell_hwr_candidate_pane_ParamLimits

0x7157,	// (0x0005ad3a) cell_hwr_candidate_pane

0x71a9,	// (0x0005ad8c) fep_hwr_candidate_pane_g1_ParamLimits

0xb2d4,	// (0x0005eeb7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb2d4,	// (0x0005eeb7) bg_popup_fep_shadow_pane_cp2

0xb46a,	// (0x0005f04d) fep_vkb_top_pane_g4_ParamLimits

0xb46a,	// (0x0005f04d) fep_vkb_top_pane_g4

0xb4b0,	// (0x0005f093) fep_vkb_side_pane_g2_ParamLimits

0xb4b0,	// (0x0005f093) fep_vkb_side_pane_g2

0x58c4,	// (0x000594a7) list_setting_pane_t4_ParamLimits

0x58c4,	// (0x000594a7) list_setting_pane_t4

0x5960,	// (0x00059543) list_setting_number_pane_t5_ParamLimits

0x5960,	// (0x00059543) list_setting_number_pane_t5

0x5e6a,	// (0x00059a4d) list_double_heading_pane_cp2_ParamLimits

0x5e6a,	// (0x00059a4d) list_double_heading_pane_cp2

0xb7ef,	// (0x0005f3d2) list_double_heading_pane_g1_cp2_ParamLimits

0xb7ef,	// (0x0005f3d2) list_double_heading_pane_g1_cp2

0xb7fb,	// (0x0005f3de) list_double_heading_pane_g2_cp2_ParamLimits

0xb7fb,	// (0x0005f3de) list_double_heading_pane_g2_cp2

0xb80f,	// (0x0005f3f2) list_double_heading_pane_t1_cp2_ParamLimits

0xb80f,	// (0x0005f3f2) list_double_heading_pane_t1_cp2

0xb825,	// (0x0005f408) list_double_heading_pane_t2_cp2_ParamLimits

0xb825,	// (0x0005f408) list_double_heading_pane_t2_cp2

0xbd14,	// (0x0005f8f7) aid_value_unit2

0x4fb3,	// (0x00058b96) popup_preview_fixed_window

0xec17,	// (0x000627fa) bg_popup_preview_window_pane_cp02

0xb837,	// (0x0005f41a) list_preview_fixed_pane

0xb87d,	// (0x0005f460) list_empty_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_empty_pane_fp

0xb87d,	// (0x0005f460) list_single_cale_day_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_cale_day_pane_fp

0xb87d,	// (0x0005f460) list_single_graphic_heading_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_graphic_heading_pane_fp

0xb87d,	// (0x0005f460) list_single_graphic_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_graphic_pane_fp

0xb87d,	// (0x0005f460) list_single_heading_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_heading_pane_fp

0xb87d,	// (0x0005f460) list_single_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_pane_fp

0xb896,	// (0x0005f479) list_single_pane_fp_g1_ParamLimits

0xb896,	// (0x0005f479) list_single_pane_fp_g1

0xb7ef,	// (0x0005f3d2) list_single_pane_fp_g2_ParamLimits

0xb7ef,	// (0x0005f3d2) list_single_pane_fp_g2

0xb7fb,	// (0x0005f3de) list_single_pane_fp_g3_ParamLimits

0xb7fb,	// (0x0005f3de) list_single_pane_fp_g3

0xb8a2,	// (0x0005f485) list_single_pane_fp_g4_ParamLimits

0xb8a2,	// (0x0005f485) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00063765) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00063765) list_single_pane_fp_g

0x3e95,	// (0x00057a78) list_single_pane_fp_t1_ParamLimits

0x3e95,	// (0x00057a78) list_single_pane_fp_t1

0x3eac,	// (0x00057a8f) list_single_graphic_pane_fp_g1_ParamLimits

0x3eac,	// (0x00057a8f) list_single_graphic_pane_fp_g1

0xb896,	// (0x0005f479) list_single_graphic_pane_fp_g2_ParamLimits

0xb896,	// (0x0005f479) list_single_graphic_pane_fp_g2

0xb7ef,	// (0x0005f3d2) list_single_graphic_pane_fp_g3_ParamLimits

0xb7ef,	// (0x0005f3d2) list_single_graphic_pane_fp_g3

0xb7fb,	// (0x0005f3de) list_single_graphic_pane_fp_g4_ParamLimits

0xb7fb,	// (0x0005f3de) list_single_graphic_pane_fp_g4

0xb8a2,	// (0x0005f485) list_single_graphic_pane_fp_g5_ParamLimits

0xb8a2,	// (0x0005f485) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0006376e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006376e) list_single_graphic_pane_fp_g

0x3eb8,	// (0x00057a9b) list_single_graphic_pane_fp_t1_ParamLimits

0x3eb8,	// (0x00057a9b) list_single_graphic_pane_fp_t1

0x3eac,	// (0x00057a8f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3eac,	// (0x00057a8f) list_single_graphic_heading_pane_fp_g1

0xb896,	// (0x0005f479) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb896,	// (0x0005f479) list_single_graphic_heading_pane_fp_g2

0xb7ef,	// (0x0005f3d2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb7ef,	// (0x0005f3d2) list_single_graphic_heading_pane_fp_g3

0xb7fb,	// (0x0005f3de) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb7fb,	// (0x0005f3de) list_single_graphic_heading_pane_fp_g4

0xb8a2,	// (0x0005f485) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb8a2,	// (0x0005f485) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0006376e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006376e) list_single_graphic_heading_pane_fp_g

0x3ece,	// (0x00057ab1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ece,	// (0x00057ab1) list_single_graphic_heading_pane_fp_t1

0x3ee4,	// (0x00057ac7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3ee4,	// (0x00057ac7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00063779) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00063779) list_single_graphic_heading_pane_fp_t

0x3ef6,	// (0x00057ad9) list_single_cale_day_pane_fp_g1_ParamLimits

0x3ef6,	// (0x00057ad9) list_single_cale_day_pane_fp_g1

0xb8ae,	// (0x0005f491) list_single_cale_day_pane_fp_g2_ParamLimits

0xb8ae,	// (0x0005f491) list_single_cale_day_pane_fp_g2

0x9dd4,	// (0x0005d9b7) list_single_cale_day_pane_fp_g3_ParamLimits

0x9dd4,	// (0x0005d9b7) list_single_cale_day_pane_fp_g3

0x9dfc,	// (0x0005d9df) list_single_cale_day_pane_fp_g4_ParamLimits

0x9dfc,	// (0x0005d9df) list_single_cale_day_pane_fp_g4

0x9e20,	// (0x0005da03) list_single_cale_day_pane_fp_g5_ParamLimits

0x9e20,	// (0x0005da03) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0006377e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0006377e) list_single_cale_day_pane_fp_g

0x3f2e,	// (0x00057b11) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f2e,	// (0x00057b11) list_single_cale_day_pane_fp_t1

0x3f54,	// (0x00057b37) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f54,	// (0x00057b37) list_single_cale_day_pane_fp_t2

0x3f6d,	// (0x00057b50) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f6d,	// (0x00057b50) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00063789) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00063789) list_single_cale_day_pane_fp_t

0xb896,	// (0x0005f479) list_empty_pane_fp_g1_ParamLimits

0xb896,	// (0x0005f479) list_empty_pane_fp_g1

0x3f86,	// (0x00057b69) list_empty_pane_fp_t1

0x3f94,	// (0x00057b77) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00063790) list_empty_pane_fp_t

0xb896,	// (0x0005f479) list_single_heading_pane_fp_g1_ParamLimits

0xb896,	// (0x0005f479) list_single_heading_pane_fp_g1

0xb7ef,	// (0x0005f3d2) list_single_heading_pane_fp_g2_ParamLimits

0xb7ef,	// (0x0005f3d2) list_single_heading_pane_fp_g2

0xb7fb,	// (0x0005f3de) list_single_heading_pane_fp_g3_ParamLimits

0xb7fb,	// (0x0005f3de) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00063795) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00063795) list_single_heading_pane_fp_g

0x3fa2,	// (0x00057b85) list_single_heading_pane_fp_t1_ParamLimits

0x3fa2,	// (0x00057b85) list_single_heading_pane_fp_t1

0x3fb4,	// (0x00057b97) list_single_heading_pane_fp_t2_ParamLimits

0x3fb4,	// (0x00057b97) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0006379c) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0006379c) list_single_heading_pane_fp_t

0xf285,	// (0x00062e68) aid_size_cell_fast

0xebfa,	// (0x000627dd) soft_indicator_pane_cp1_t1

0xf2c2,	// (0x00062ea5) cell_app_pane_cp2_ParamLimits

0xf2c2,	// (0x00062ea5) cell_app_pane_cp2

0x6fd5,	// (0x0005abb8) fep_hwr_candidate_drop_down_list_pane

0x71c3,	// (0x0005ada6) fep_hwr_candidate_pane_g3_ParamLimits

0x71c3,	// (0x0005ada6) fep_hwr_candidate_pane_g3

0x2a5f,	// (0x00056642) fep_hwr_candidate_pane_g4_ParamLimits

0x2a5f,	// (0x00056642) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0006370b) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0006370b) fep_hwr_candidate_pane_g

0xb364,	// (0x0005ef47) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb364,	// (0x0005ef47) fep_vkb_candidate_drop_down_list_pane

0xb78c,	// (0x0005f36f) fep_vkb_candidate_pane_g3

0xb794,	// (0x0005f377) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00063738) fep_vkb_candidate_pane_g

0x722e,	// (0x0005ae11) cell_hwr_candidate_pane_g1_ParamLimits

0x723c,	// (0x0005ae1f) cell_hwr_candidate_pane_g3_ParamLimits

0x723c,	// (0x0005ae1f) cell_hwr_candidate_pane_g3

0xbdc8,	// (0x0005f9ab) cell_hwr_candidate_pane_g4_ParamLimits

0xbdc8,	// (0x0005f9ab) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00063757) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00063757) cell_hwr_candidate_pane_g

0xb7ab,	// (0x0005f38e) cell_vkb_candidate_pane_g3_ParamLimits

0xb7ab,	// (0x0005f38e) cell_vkb_candidate_pane_g3

0xb7c6,	// (0x0005f3a9) cell_vkb_candidate_pane_g4_ParamLimits

0xb7c6,	// (0x0005f3a9) cell_vkb_candidate_pane_g4

0xb8ba,	// (0x0005f49d) cell_app_pane_cp2_g1_ParamLimits

0xb8ba,	// (0x0005f49d) cell_app_pane_cp2_g1

0xb8d8,	// (0x0005f4bb) cell_app_pane_cp2_g2_ParamLimits

0xb8d8,	// (0x0005f4bb) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x000637a1) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x000637a1) cell_app_pane_cp2_g

0xb8e4,	// (0x0005f4c7) cell_app_pane_cp2_t1_ParamLimits

0xb8e4,	// (0x0005f4c7) cell_app_pane_cp2_t1

0xf122,	// (0x00062d05) grid_highlight_pane_cp1_ParamLimits

0xf122,	// (0x00062d05) grid_highlight_pane_cp1

0x727b,	// (0x0005ae5e) cell_hwr_candidate_pane_cp1_ParamLimits

0x727b,	// (0x0005ae5e) cell_hwr_candidate_pane_cp1

0x722e,	// (0x0005ae11) fep_hwr_candidate_drop_down_list_pane_g1

0x729f,	// (0x0005ae82) fep_hwr_candidate_drop_down_list_pane_g2

0x72ac,	// (0x0005ae8f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x000637a6) fep_hwr_candidate_drop_down_list_pane_g

0x72b9,	// (0x0005ae9c) fep_hwr_candidate_drop_down_list_scroll_pane

0x72c2,	// (0x0005aea5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72c2,	// (0x0005aea5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x72cf,	// (0x0005aeb2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72cf,	// (0x0005aeb2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x72dc,	// (0x0005aebf) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72dc,	// (0x0005aebf) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x72e9,	// (0x0005aecc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x72e9,	// (0x0005aecc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7304,	// (0x0005aee7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7304,	// (0x0005aee7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x731f,	// (0x0005af02) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x731f,	// (0x0005af02) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x733a,	// (0x0005af1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x733a,	// (0x0005af1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7355,	// (0x0005af38) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7355,	// (0x0005af38) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x000637ad) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x000637ad) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb8f6,	// (0x0005f4d9) cell_vkb_candidate_pane_cp1_ParamLimits

0xb8f6,	// (0x0005f4d9) cell_vkb_candidate_pane_cp1

0xb46a,	// (0x0005f04d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb46a,	// (0x0005f04d) fep_vkb_candidate_drop_down_list_pane_g1

0xb91c,	// (0x0005f4ff) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb91c,	// (0x0005f4ff) fep_vkb_candidate_drop_down_list_pane_g2

0xb929,	// (0x0005f50c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb929,	// (0x0005f50c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x000637be) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x000637be) fep_vkb_candidate_drop_down_list_pane_g

0xb936,	// (0x0005f519) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb936,	// (0x0005f519) fep_vkb_candidate_drop_down_list_scroll_pane

0xb943,	// (0x0005f526) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb943,	// (0x0005f526) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb950,	// (0x0005f533) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb950,	// (0x0005f533) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb95c,	// (0x0005f53f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb95c,	// (0x0005f53f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb968,	// (0x0005f54b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb968,	// (0x0005f54b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb989,	// (0x0005f56c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb989,	// (0x0005f56c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb9aa,	// (0x0005f58d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb9aa,	// (0x0005f58d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb9cb,	// (0x0005f5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb9cb,	// (0x0005f5ae) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb9ec,	// (0x0005f5cf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb9ec,	// (0x0005f5cf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x000637c5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x000637c5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x50d3,	// (0x00058cb6) title_pane_g1_ParamLimits

0x50e0,	// (0x00058cc3) title_pane_g2_ParamLimits

0xf54e,	// (0x00063131) title_pane_g_ParamLimits

0x3519,	// (0x000570fc) aid_call2_pane

0x3511,	// (0x000570f4) aid_call_pane

0x3521,	// (0x00057104) popup_clock_analogue_window_g1

0x3521,	// (0x00057104) popup_clock_analogue_window_g2

0x5e4b,	// (0x00059a2e) popup_clock_analogue_window_g3

0x5e54,	// (0x00059a37) popup_clock_analogue_window_g4

0xbd26,	// (0x0005f909) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000632e0) popup_clock_analogue_window_g

0x5e5c,	// (0x00059a3f) popup_clock_analogue_window_t1

0x5e9d,	// (0x00059a80) clock_digital_number_pane_ParamLimits

0x5e9d,	// (0x00059a80) clock_digital_number_pane

0x5ea9,	// (0x00059a8c) clock_digital_number_pane_cp02_ParamLimits

0x5ea9,	// (0x00059a8c) clock_digital_number_pane_cp02

0x5eb5,	// (0x00059a98) clock_digital_number_pane_cp03_ParamLimits

0x5eb5,	// (0x00059a98) clock_digital_number_pane_cp03

0x5ec1,	// (0x00059aa4) clock_digital_number_pane_cp04_ParamLimits

0x5ec1,	// (0x00059aa4) clock_digital_number_pane_cp04

0x5ecd,	// (0x00059ab0) clock_digital_separator_pane_ParamLimits

0x5ecd,	// (0x00059ab0) clock_digital_separator_pane

0x5ed9,	// (0x00059abc) popup_clock_digital_window_t1_ParamLimits

0x5ed9,	// (0x00059abc) popup_clock_digital_window_t1

0xbd26,	// (0x0005f909) clock_digital_number_pane_g1

0xbd26,	// (0x0005f909) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000632eb) clock_digital_number_pane_g

0xbd26,	// (0x0005f909) clock_digital_separator_pane_g1

0xbd26,	// (0x0005f909) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000632eb) clock_digital_separator_pane_g

0x852e,	// (0x0005c111) aid_fill_nsta_ParamLimits

0x8674,	// (0x0005c257) indicator_nsta_pane_ParamLimits

0x8805,	// (0x0005c3e8) popup_clock_analogue_window

0x8805,	// (0x0005c3e8) popup_clock_digital_window

0xbd7e,	// (0x0005f961) grid_indicator_nsta_pane_ParamLimits

0xac71,	// (0x0005e854) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0006368b) clock_nsta_pane_t

0x5db4,	// (0x00059997) aid_size_max_handle

0x5dbe,	// (0x000599a1) aid_size_min_handle

0x81c3,	// (0x0005bda6) editor_scroll_pane

0xba07,	// (0x0005f5ea) ex_editor_pane

0xf24b,	// (0x00062e2e) scroll_pane_cp13

0xf0c1,	// (0x00062ca4) scroll_pane_cp14

0x3550,	// (0x00057133) scroll_pane_cp36

0x5e80,	// (0x00059a63) list_single_graphic_hl_pane_cp2_ParamLimits

0x5e80,	// (0x00059a63) list_single_graphic_hl_pane_cp2

0xa1a9,	// (0x0005dd8c) list_single_graphic_hl_pane_ParamLimits

0xa1a9,	// (0x0005dd8c) list_single_graphic_hl_pane

0x3fca,	// (0x00057bad) aid_size_min_hl_cp1

0xba0f,	// (0x0005f5f2) list_highlight_pane_cp34_ParamLimits

0xba0f,	// (0x0005f5f2) list_highlight_pane_cp34

0xba20,	// (0x0005f603) list_single_graphic_hl_pane_g1_ParamLimits

0xba20,	// (0x0005f603) list_single_graphic_hl_pane_g1

0x7370,	// (0x0005af53) list_single_graphic_hl_pane_g2_ParamLimits

0x7370,	// (0x0005af53) list_single_graphic_hl_pane_g2

0x7370,	// (0x0005af53) list_single_graphic_hl_pane_g3_ParamLimits

0x7370,	// (0x0005af53) list_single_graphic_hl_pane_g3

0x9d36,	// (0x0005d919) list_single_graphic_hl_pane_g4_ParamLimits

0x9d36,	// (0x0005d919) list_single_graphic_hl_pane_g4

0x9e44,	// (0x0005da27) list_single_graphic_hl_pane_g5_ParamLimits

0x9e44,	// (0x0005da27) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x000637d6) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x000637d6) list_single_graphic_hl_pane_g

0x737c,	// (0x0005af5f) list_single_graphic_hl_pane_t1_ParamLimits

0x737c,	// (0x0005af5f) list_single_graphic_hl_pane_t1

0xba2d,	// (0x0005f610) aid_size_min_hl_cp2

0xba36,	// (0x0005f619) list_highlight_pane_cp34_cp2_ParamLimits

0xba36,	// (0x0005f619) list_highlight_pane_cp34_cp2

0xba20,	// (0x0005f603) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xba20,	// (0x0005f603) list_single_graphic_hl_pane_g1_cp2

0xba43,	// (0x0005f626) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xba43,	// (0x0005f626) list_single_graphic_hl_pane_g2_cp2

0xba4f,	// (0x0005f632) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba4f,	// (0x0005f632) list_single_graphic_hl_pane_g3_cp2

0xba5d,	// (0x0005f640) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xba5d,	// (0x0005f640) list_single_graphic_hl_pane_g4_cp2

0xba69,	// (0x0005f64c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xba69,	// (0x0005f64c) list_single_graphic_hl_pane_g5_cp2

0x62d0,	// (0x00059eb3) control_pane_g4_ParamLimits

0x62d0,	// (0x00059eb3) control_pane_g4

0x84f2,	// (0x0005c0d5) bg_popup_sub_pane_cp10_ParamLimits

0xb211,	// (0x0005edf4) list_choice_list_pane_ParamLimits

0xb220,	// (0x0005ee03) scroll_pane_cp23

0xec17,	// (0x000627fa) bg_popup_preview_window_pane_cp02_ParamLimits

0xb837,	// (0x0005f41a) list_preview_fixed_pane_ParamLimits

0xb84d,	// (0x0005f430) list_preview_fixed_pane_cp_ParamLimits

0xb84d,	// (0x0005f430) list_preview_fixed_pane_cp

0xb859,	// (0x0005f43c) popup_preview_fixed_window_g1_ParamLimits

0xb859,	// (0x0005f43c) popup_preview_fixed_window_g1

0xb865,	// (0x0005f448) popup_preview_fixed_window_g2_ParamLimits

0xb865,	// (0x0005f448) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0006375e) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0006375e) popup_preview_fixed_window_g

0x5c8a,	// (0x0005986d) aid_navi_side_left_pane_ParamLimits

0x5c9f,	// (0x00059882) aid_navi_side_right_pane_ParamLimits

0x5cb7,	// (0x0005989a) navi_icon_pane_stacon_ParamLimits

0x5ccb,	// (0x000598ae) navi_navi_pane_stacon_ParamLimits

0x5cb7,	// (0x0005989a) navi_text_pane_stacon_ParamLimits

0x4e6a,	// (0x00058a4d) main_text_info_pane

0xba93,	// (0x0005f676) listscroll_text_info_pane

0xba9b,	// (0x0005f67e) list_text_info_pane_ParamLimits

0xba9b,	// (0x0005f67e) list_text_info_pane

0xbaaa,	// (0x0005f68d) scroll_pane_cp24_ParamLimits

0xbaaa,	// (0x0005f68d) scroll_pane_cp24

0xbac8,	// (0x0005f6ab) list_text_info_pane_t1_ParamLimits

0xbac8,	// (0x0005f6ab) list_text_info_pane_t1

0x644e,	// (0x0005a031) popup_fast_swap2_window_ParamLimits

0x644e,	// (0x0005a031) popup_fast_swap2_window

0xbaed,	// (0x0005f6d0) aid_size_cell_fast2

0xbd1c,	// (0x0005f8ff) bg_popup_window_pane_cp17

0x8e7c,	// (0x0005ca5f) heading_pane_cp2

0xee46,	// (0x00062a29) listscroll_fast2_pane

0xbaf7,	// (0x0005f6da) grid_fast2_pane

0xbb01,	// (0x0005f6e4) listscroll_fast2_pane_g1

0xbb0b,	// (0x0005f6ee) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x000637e1) listscroll_fast2_pane_g

0xf24b,	// (0x00062e2e) scroll_pane_cp26

0xbb15,	// (0x0005f6f8) cell_fast2_pane_ParamLimits

0xbb15,	// (0x0005f6f8) cell_fast2_pane

0xbb2c,	// (0x0005f70f) cell_fast2_pane_g1

0xbb35,	// (0x0005f718) cell_fast2_pane_g2

0xbb3e,	// (0x0005f721) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x000637e6) cell_fast2_pane_g

0xee88,	// (0x00062a6b) grid_highlight_pane_cp9

0x6410,	// (0x00059ff3) main_eswt_pane_ParamLimits

0x6410,	// (0x00059ff3) main_eswt_pane

0xbabf,	// (0x0005f6a2) list_single_text_info_pane

0xbb46,	// (0x0005f729) eswt_ctrl_button_pane

0xbb46,	// (0x0005f729) eswt_ctrl_canvas_pane

0xbb4e,	// (0x0005f731) eswt_ctrl_combo_pane

0xbb46,	// (0x0005f729) eswt_ctrl_default_pane

0xbb46,	// (0x0005f729) eswt_ctrl_label_pane

0xbb56,	// (0x0005f739) eswt_ctrl_wait_pane

0xbb5e,	// (0x0005f741) eswt_shell_pane

0xbd1c,	// (0x0005f8ff) listscroll_eswt_app_pane

0xbb7e,	// (0x0005f761) popup_eswt_tasktip_window_ParamLimits

0xbb7e,	// (0x0005f761) popup_eswt_tasktip_window

0x8aba,	// (0x0005c69d) bg_popup_window_pane_cp18

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_ParamLimits

0xbb8f,	// (0x0005f772) eswt_control_pane_g1

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_ParamLimits

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_ParamLimits

0xbba9,	// (0x0005f78c) eswt_control_pane_g3

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_ParamLimits

0xbbb6,	// (0x0005f799) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x000637ed) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x000637ed) eswt_control_pane_g

0xf122,	// (0x00062d05) bg_button_pane_ParamLimits

0xf122,	// (0x00062d05) bg_button_pane

0xee9d,	// (0x00062a80) common_borders_pane_copy2_ParamLimits

0xee9d,	// (0x00062a80) common_borders_pane_copy2

0xbbc3,	// (0x0005f7a6) control_button_pane_g1_ParamLimits

0xbbc3,	// (0x0005f7a6) control_button_pane_g1

0xbbcf,	// (0x0005f7b2) control_button_pane_g2_ParamLimits

0xbbcf,	// (0x0005f7b2) control_button_pane_g2

0xbbdb,	// (0x0005f7be) control_button_pane_g3_ParamLimits

0xbbdb,	// (0x0005f7be) control_button_pane_g3

0x0002,

0xfc13,	// (0x000637f6) control_button_pane_g_ParamLimits

0xfc13,	// (0x000637f6) control_button_pane_g

0xbbef,	// (0x0005f7d2) control_button_pane_t1

0xbbfd,	// (0x0005f7e0) control_button_pane_t2

0x0001,

0xfc1a,	// (0x000637fd) control_button_pane_t

0x8a2e,	// (0x0005c611) bg_button_pane_g1

0x8a3e,	// (0x0005c621) bg_button_pane_g2

0x8a36,	// (0x0005c619) bg_button_pane_g3

0x8a4e,	// (0x0005c631) bg_button_pane_g4

0x8a46,	// (0x0005c629) bg_button_pane_g5

0x8a56,	// (0x0005c639) bg_button_pane_g6

0x8a5e,	// (0x0005c641) bg_button_pane_g7

0x8a6e,	// (0x0005c651) bg_button_pane_g8

0x8a66,	// (0x0005c649) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0006344e) bg_button_pane_g

0xb1cc,	// (0x0005edaf) common_borders_pane_ParamLimits

0xb1cc,	// (0x0005edaf) common_borders_pane

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy1_ParamLimits

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy1

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy1_ParamLimits

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy1

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy1_ParamLimits

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy1

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy1_ParamLimits

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy1

0xb207,	// (0x0005edea) bg_eswt_ctrl_canvas_pane_g1

0xb1cc,	// (0x0005edaf) common_borders_pane_cp2_ParamLimits

0xb1cc,	// (0x0005edaf) common_borders_pane_cp2

0xb1cc,	// (0x0005edaf) common_borders_pane_cp3_ParamLimits

0xb1cc,	// (0x0005edaf) common_borders_pane_cp3

0xbc0b,	// (0x0005f7ee) separator_horizontal_pane

0xbc13,	// (0x0005f7f6) separator_vertical_pane

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy2_ParamLimits

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy2

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy2_ParamLimits

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy2

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy2_ParamLimits

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy2

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy2_ParamLimits

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy2

0xbd1c,	// (0x0005f8ff) common_borders_pane_cp4

0xbc1c,	// (0x0005f7ff) separator_horizontal_pane_g1

0xbc25,	// (0x0005f808) separator_horizontal_pane_g2

0xbc2e,	// (0x0005f811) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00063802) separator_horizontal_pane_g

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy3_ParamLimits

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy3

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy3_ParamLimits

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy3

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy3_ParamLimits

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy3

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy3_ParamLimits

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy3

0xbd1c,	// (0x0005f8ff) common_borders_pane_cp5

0xbc37,	// (0x0005f81a) separator_vertical_pane_g1

0xbc40,	// (0x0005f823) separator_vertical_pane_g2

0xbc49,	// (0x0005f82c) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00063809) separator_vertical_pane_g

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy4_ParamLimits

0xbb8f,	// (0x0005f772) eswt_control_pane_g1_copy4

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy4_ParamLimits

0xbb9c,	// (0x0005f77f) eswt_control_pane_g2_copy4

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy4_ParamLimits

0xbba9,	// (0x0005f78c) eswt_control_pane_g3_copy4

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy4_ParamLimits

0xbbb6,	// (0x0005f799) eswt_control_pane_g4_copy4

0xbc52,	// (0x0005f835) eswt_ctrl_combo_button_pane

0xbc5a,	// (0x0005f83d) eswt_ctrl_input_pane

0xbc62,	// (0x0005f845) popup_choice_list_window_cp70

0xbc6a,	// (0x0005f84d) eswt_ctrl_input_pane_t1

0xbd1c,	// (0x0005f8ff) input_focus_pane_cp70

0xb1cc,	// (0x0005edaf) bg_button_pane_cp70_ParamLimits

0xb1cc,	// (0x0005edaf) bg_button_pane_cp70

0xbc78,	// (0x0005f85b) eswt_ctrl_combo_button_pane_g1

0xbc80,	// (0x0005f863) wait_bar_pane_cp70

0x8aba,	// (0x0005c69d) bg_popup_window_pane_cp70_ParamLimits

0x8aba,	// (0x0005c69d) bg_popup_window_pane_cp70

0xbc88,	// (0x0005f86b) popup_eswt_tasktip_window_t1

0xbc9e,	// (0x0005f881) wait_bar_pane_cp71_ParamLimits

0xbc9e,	// (0x0005f881) wait_bar_pane_cp71

0xbcaa,	// (0x0005f88d) grid_eswt_app_pane

0xf479,	// (0x0006305c) scroll_pane_cp70

0xbcb3,	// (0x0005f896) cell_eswt_app_pane_ParamLimits

0xbcb3,	// (0x0005f896) cell_eswt_app_pane

0xbce5,	// (0x0005f8c8) cell_eswt_app_pane_g1_ParamLimits

0xbce5,	// (0x0005f8c8) cell_eswt_app_pane_g1

0xbde9,	// (0x0005f9cc) cell_eswt_app_pane_g2_ParamLimits

0xbde9,	// (0x0005f9cc) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00063810) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00063810) cell_eswt_app_pane_g

0xbe12,	// (0x0005f9f5) cell_eswt_app_pane_t1_ParamLimits

0xbe12,	// (0x0005f9f5) cell_eswt_app_pane_t1

0xbe44,	// (0x0005fa27) grid_highlight_pane_cp70_ParamLimits

0xbe44,	// (0x0005fa27) grid_highlight_pane_cp70

0x80a0,	// (0x0005bc83) set_content_pane_g1

0x8471,	// (0x0005c054) status_small_volume_pane

0x7392,	// (0x0005af75) status_small_volume_pane_g1

0x739a,	// (0x0005af7d) volume_small2_pane

0x73a3,	// (0x0005af86) volume_small2_pane_g1

0x73ac,	// (0x0005af8f) volume_small2_pane_g2

0x73b5,	// (0x0005af98) volume_small2_pane_g3

0x73be,	// (0x0005afa1) volume_small2_pane_g4

0x73c7,	// (0x0005afaa) volume_small2_pane_g5

0x73d0,	// (0x0005afb3) volume_small2_pane_g6

0x73d9,	// (0x0005afbc) volume_small2_pane_g7

0x73e2,	// (0x0005afc5) volume_small2_pane_g8

0x73eb,	// (0x0005afce) volume_small2_pane_g9

0x73f4,	// (0x0005afd7) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00063815) volume_small2_pane_g

0xb5be,	// (0x0005f1a1) fep_vkb_top_text_pane_g1_ParamLimits

0xb5d9,	// (0x0005f1bc) fep_vkb_top_text_pane_t1_ParamLimits

0xb871,	// (0x0005f454) popup_preview_fixed_window_g3_ParamLimits

0xb871,	// (0x0005f454) popup_preview_fixed_window_g3

0x695f,	// (0x0005a542) popup_toolbar_trans_pane

0x9fc6,	// (0x0005dba9) aid_height_set_list_ParamLimits

0x9fd7,	// (0x0005dbba) aid_size_parent_ParamLimits

0x84f2,	// (0x0005c0d5) list_highlight_pane_cp2_ParamLimits

0x80a0,	// (0x0005bc83) set_content_pane_g1_ParamLimits

0x9d0a,	// (0x0005d8ed) list_single_image_pane_ParamLimits

0x9d0a,	// (0x0005d8ed) list_single_image_pane

0xbe50,	// (0x0005fa33) aid_size_cell_image_ParamLimits

0xbe50,	// (0x0005fa33) aid_size_cell_image

0xbe5d,	// (0x0005fa40) grid_single_image_pane_ParamLimits

0xbe5d,	// (0x0005fa40) grid_single_image_pane

0xf130,	// (0x00062d13) list_single_image_pane_g1_ParamLimits

0xf130,	// (0x00062d13) list_single_image_pane_g1

0xf13c,	// (0x00062d1f) list_single_image_pane_g2_ParamLimits

0xf13c,	// (0x00062d1f) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0006382a) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0006382a) list_single_image_pane_g

0xbe6b,	// (0x0005fa4e) list_single_image_pane_t1_ParamLimits

0xbe6b,	// (0x0005fa4e) list_single_image_pane_t1

0xbe81,	// (0x0005fa64) cell_image_list_pane_ParamLimits

0xbe81,	// (0x0005fa64) cell_image_list_pane

0xbe97,	// (0x0005fa7a) cell_image_list_pane_g1

0xbea0,	// (0x0005fa83) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0006382f) cell_image_list_pane_g

0xbea9,	// (0x0005fa8c) aid_size_cell_tb_trans_pane

0xf122,	// (0x00062d05) bg_tb_trans_pane

0xbebb,	// (0x0005fa9e) grid_tb_trans_pane

0x8a2e,	// (0x0005c611) bg_tb_trans_pane_g1

0x8a3e,	// (0x0005c621) bg_tb_trans_pane_g2

0x8a36,	// (0x0005c619) bg_tb_trans_pane_g3

0x8a4e,	// (0x0005c631) bg_tb_trans_pane_g4

0x8a46,	// (0x0005c629) bg_tb_trans_pane_g5

0x8a6e,	// (0x0005c651) bg_tb_trans_pane_g6

0x8a66,	// (0x0005c649) bg_tb_trans_pane_g7

0x8a56,	// (0x0005c639) bg_tb_trans_pane_g8

0x8a5e,	// (0x0005c641) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00063834) bg_tb_trans_pane_g

0xbecf,	// (0x0005fab2) cell_toolbar_trans_pane_ParamLimits

0xbecf,	// (0x0005fab2) cell_toolbar_trans_pane

0xb207,	// (0x0005edea) cell_toolbar_trans_pane_g1

0xae3f,	// (0x0005ea22) list_form2_midp_pane_t1

0xae4d,	// (0x0005ea30) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x000636d1) list_form2_midp_pane_t

0xae5b,	// (0x0005ea3e) scroll_pane_cp51_ParamLimits

0xb022,	// (0x0005ec05) form2_midp_wait_pane_g1

0xb02b,	// (0x0005ec0e) form2_midp_wait_pane_g2

0xb034,	// (0x0005ec17) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x000636e6) form2_midp_wait_pane_g

0xbd7e,	// (0x0005f961) list_highlight_pane_cp21_ParamLimits

0xb06d,	// (0x0005ec50) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb07c,	// (0x0005ec5f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa1df,	// (0x0005ddc2) list_single_2graphic_im_pane_ParamLimits

0xa1df,	// (0x0005ddc2) list_single_2graphic_im_pane

0xbef5,	// (0x0005fad8) list_single_2graphic_im_pane_g1_ParamLimits

0xbef5,	// (0x0005fad8) list_single_2graphic_im_pane_g1

0xbf06,	// (0x0005fae9) list_single_2graphic_im_pane_g2_ParamLimits

0xbf06,	// (0x0005fae9) list_single_2graphic_im_pane_g2

0xbf12,	// (0x0005faf5) list_single_2graphic_im_pane_g3_ParamLimits

0xbf12,	// (0x0005faf5) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00063847) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00063847) list_single_2graphic_im_pane_g

0xbf32,	// (0x0005fb15) list_single_2graphic_im_pane_t1_ParamLimits

0xbf32,	// (0x0005fb15) list_single_2graphic_im_pane_t1

0xb87d,	// (0x0005f460) list_single_graphic_2heading_pane_fp_ParamLimits

0xb87d,	// (0x0005f460) list_single_graphic_2heading_pane_fp

0x3eac,	// (0x00057a8f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3eac,	// (0x00057a8f) list_single_graphic_2heading_pane_fp_g1

0xb896,	// (0x0005f479) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb896,	// (0x0005f479) list_single_graphic_2heading_pane_fp_g2

0xb7ef,	// (0x0005f3d2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb7ef,	// (0x0005f3d2) list_single_graphic_2heading_pane_fp_g3

0xb7fb,	// (0x0005f3de) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb7fb,	// (0x0005f3de) list_single_graphic_2heading_pane_fp_g4

0xb8a2,	// (0x0005f485) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb8a2,	// (0x0005f485) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0006376e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006376e) list_single_graphic_2heading_pane_fp_g

0x3fd3,	// (0x00057bb6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3fd3,	// (0x00057bb6) list_single_graphic_2heading_pane_fp_t1

0x3ee4,	// (0x00057ac7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3ee4,	// (0x00057ac7) list_single_graphic_2heading_pane_fp_t2

0x3fe9,	// (0x00057bcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3fe9,	// (0x00057bcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00063850) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00063850) list_single_graphic_2heading_pane_fp_t

0xb280,	// (0x0005ee63) fep_hwr_write_pane_g5_ParamLimits

0xb280,	// (0x0005ee63) fep_hwr_write_pane_g5

0xb28c,	// (0x0005ee6f) fep_hwr_write_pane_g6_ParamLimits

0xb28c,	// (0x0005ee6f) fep_hwr_write_pane_g6

0xbb5e,	// (0x0005f741) eswt_shell_pane_ParamLimits

0x8aba,	// (0x0005c69d) bg_popup_window_pane_cp18_ParamLimits

0x9f1d,	// (0x0005db00) heading_pane_cp70

0xbc88,	// (0x0005f86b) popup_eswt_tasktip_window_t1_ParamLimits

0x8585,	// (0x0005c168) aid_touch_tab_arrow_left

0x8591,	// (0x0005c174) aid_touch_tab_arrow_right

0x50f9,	// (0x00058cdc) title_pane_g3_ParamLimits

0x50f9,	// (0x00058cdc) title_pane_g3

0xf0e1,	// (0x00062cc4) set_value_pane_g1

0x695f,	// (0x0005a542) popup_toolbar_trans_pane_ParamLimits

0xbea9,	// (0x0005fa8c) aid_size_cell_tb_trans_pane_ParamLimits

0xf122,	// (0x00062d05) bg_tb_trans_pane_ParamLimits

0xbebb,	// (0x0005fa9e) grid_tb_trans_pane_ParamLimits

0xec17,	// (0x000627fa) cont_note_pane_ParamLimits

0xec17,	// (0x000627fa) cont_note_pane

0xee9d,	// (0x00062a80) cont_snote2_single_text_pane_ParamLimits

0xee9d,	// (0x00062a80) cont_snote2_single_text_pane

0xee9d,	// (0x00062a80) cont_snote2_single_graphic_pane_ParamLimits

0xee9d,	// (0x00062a80) cont_snote2_single_graphic_pane

0x90a4,	// (0x0005cc87) cont_note_wait_pane_ParamLimits

0x90a4,	// (0x0005cc87) cont_note_wait_pane

0x90a4,	// (0x0005cc87) cont_note_image_pane_ParamLimits

0x90a4,	// (0x0005cc87) cont_note_image_pane

0xbf63,	// (0x0005fb46) popup_note2_window_g1_ParamLimits

0xbf63,	// (0x0005fb46) popup_note2_window_g1

0xbf94,	// (0x0005fb77) popup_note2_window_t1_ParamLimits

0xbf94,	// (0x0005fb77) popup_note2_window_t1

0xbfd9,	// (0x0005fbbc) popup_note2_window_t2_ParamLimits

0xbfd9,	// (0x0005fbbc) popup_note2_window_t2

0xc01e,	// (0x0005fc01) popup_note2_window_t3_ParamLimits

0xc01e,	// (0x0005fc01) popup_note2_window_t3

0xc063,	// (0x0005fc46) popup_note2_window_t4_ParamLimits

0xc063,	// (0x0005fc46) popup_note2_window_t4

0xec9b,	// (0x0006287e) popup_note2_window_t5_ParamLimits

0xec9b,	// (0x0006287e) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0006385c) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0006385c) popup_note2_window_t

0xc092,	// (0x0005fc75) popup_note2_image_window_g1_ParamLimits

0xc092,	// (0x0005fc75) popup_note2_image_window_g1

0xc09e,	// (0x0005fc81) popup_note2_image_window_g2_ParamLimits

0xc09e,	// (0x0005fc81) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00063867) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00063867) popup_note2_image_window_g

0xc0b0,	// (0x0005fc93) popup_note2_image_window_t1_ParamLimits

0xc0b0,	// (0x0005fc93) popup_note2_image_window_t1

0xc0c8,	// (0x0005fcab) popup_note2_image_window_t2_ParamLimits

0xc0c8,	// (0x0005fcab) popup_note2_image_window_t2

0xc0e0,	// (0x0005fcc3) popup_note2_image_window_t3_ParamLimits

0xc0e0,	// (0x0005fcc3) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0006386c) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0006386c) popup_note2_image_window_t

0x90b2,	// (0x0005cc95) popup_note2_wait_window_g1_ParamLimits

0x90b2,	// (0x0005cc95) popup_note2_wait_window_g1

0xc0fc,	// (0x0005fcdf) popup_note2_wait_window_g2_ParamLimits

0xc0fc,	// (0x0005fcdf) popup_note2_wait_window_g2

0x90ca,	// (0x0005ccad) popup_note2_wait_window_g3_ParamLimits

0x90ca,	// (0x0005ccad) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00063873) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00063873) popup_note2_wait_window_g

0xc108,	// (0x0005fceb) popup_note2_wait_window_t1_ParamLimits

0xc108,	// (0x0005fceb) popup_note2_wait_window_t1

0xc126,	// (0x0005fd09) popup_note2_wait_window_t2_ParamLimits

0xc126,	// (0x0005fd09) popup_note2_wait_window_t2

0xc144,	// (0x0005fd27) popup_note2_wait_window_t3_ParamLimits

0xc144,	// (0x0005fd27) popup_note2_wait_window_t3

0xc156,	// (0x0005fd39) popup_note2_wait_window_t4_ParamLimits

0xc156,	// (0x0005fd39) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x0006387a) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x0006387a) popup_note2_wait_window_t

0xc168,	// (0x0005fd4b) wait_bar2_pane_ParamLimits

0xc168,	// (0x0005fd4b) wait_bar2_pane

0xc180,	// (0x0005fd63) popup_snote2_single_text_window_g1_ParamLimits

0xc180,	// (0x0005fd63) popup_snote2_single_text_window_g1

0xc1a8,	// (0x0005fd8b) popup_snote2_single_text_window_t1_ParamLimits

0xc1a8,	// (0x0005fd8b) popup_snote2_single_text_window_t1

0xc1f4,	// (0x0005fdd7) popup_snote2_single_text_window_t2_ParamLimits

0xc1f4,	// (0x0005fdd7) popup_snote2_single_text_window_t2

0xc240,	// (0x0005fe23) popup_snote2_single_text_window_t3_ParamLimits

0xc240,	// (0x0005fe23) popup_snote2_single_text_window_t3

0xc281,	// (0x0005fe64) popup_snote2_single_text_window_t4_ParamLimits

0xc281,	// (0x0005fe64) popup_snote2_single_text_window_t4

0xc2b7,	// (0x0005fe9a) popup_snote2_single_text_window_t5_ParamLimits

0xc2b7,	// (0x0005fe9a) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x00063883) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x00063883) popup_snote2_single_text_window_t

0xc2e2,	// (0x0005fec5) popup_snote2_single_graphic_window_g1_ParamLimits

0xc2e2,	// (0x0005fec5) popup_snote2_single_graphic_window_g1

0xc30a,	// (0x0005feed) popup_snote2_single_graphic_window_g2_ParamLimits

0xc30a,	// (0x0005feed) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x0006388e) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x0006388e) popup_snote2_single_graphic_window_g

0xc332,	// (0x0005ff15) popup_snote2_single_graphic_window_t1_ParamLimits

0xc332,	// (0x0005ff15) popup_snote2_single_graphic_window_t1

0xc37e,	// (0x0005ff61) popup_snote2_single_graphic_window_t2_ParamLimits

0xc37e,	// (0x0005ff61) popup_snote2_single_graphic_window_t2

0xc240,	// (0x0005fe23) popup_snote2_single_graphic_window_t3_ParamLimits

0xc240,	// (0x0005fe23) popup_snote2_single_graphic_window_t3

0xc281,	// (0x0005fe64) popup_snote2_single_graphic_window_t4_ParamLimits

0xc281,	// (0x0005fe64) popup_snote2_single_graphic_window_t4

0xc2b7,	// (0x0005fe9a) popup_snote2_single_graphic_window_t5_ParamLimits

0xc2b7,	// (0x0005fe9a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x00063893) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x00063893) popup_snote2_single_graphic_window_t

0xad0b,	// (0x0005e8ee) clock_nsta_pane_cp2_t1

0xad0b,	// (0x0005e8ee) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x000636a7) clock_nsta_pane_cp2_t

0x3485,	// (0x00057068) form_field_data_wide_pane_g1_ParamLimits

0xf130,	// (0x00062d13) form_field_data_wide_pane_g2_ParamLimits

0xf130,	// (0x00062d13) form_field_data_wide_pane_g2

0xf13c,	// (0x00062d1f) form_field_data_wide_pane_g3_ParamLimits

0xf13c,	// (0x00062d1f) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00063263) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00063263) form_field_data_wide_pane_g

0xac0d,	// (0x0005e7f0) grid_touch_3_pane_ParamLimits

0xac0d,	// (0x0005e7f0) grid_touch_3_pane

0xc3ca,	// (0x0005ffad) cell_touch_3_pane_ParamLimits

0xc3ca,	// (0x0005ffad) cell_touch_3_pane

0xb207,	// (0x0005edea) cell_touch_3_pane_g1

0xb207,	// (0x0005edea) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0006372c) cell_touch_3_pane_g

0xecf3,	// (0x000628d6) cont_query_data_pane

0xecfb,	// (0x000628de) cont_query_data_pane_cp1

0xc3fd,	// (0x0005ffe0) button_value_adjust_pane_cp7

0xc405,	// (0x0005ffe8) query_popup_pane_cp3

0x3581,	// (0x00057164) bg_popup_sub_pane_cp22_ParamLimits

0x5f4d,	// (0x00059b30) navi_navi_volume_pane_cp2

0x5f68,	// (0x00059b4b) popup_side_volume_key_window_g2

0x5f77,	// (0x00059b5a) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000632f9) popup_side_volume_key_window_g

0x5f94,	// (0x00059b77) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00063300) popup_side_volume_key_window_t

0x37ee,	// (0x000573d1) popup_side_volume_key_window_ParamLimits

0x5670,	// (0x00059253) list_double_graphic_pane_g4_ParamLimits

0x5670,	// (0x00059253) list_double_graphic_pane_g4

0xa20e,	// (0x0005ddf1) list_single_2heading_msg_pane_ParamLimits

0xa20e,	// (0x0005ddf1) list_single_2heading_msg_pane

0x9e58,	// (0x0005da3b) list_single_2heading_msg_pane_g1_ParamLimits

0x9e58,	// (0x0005da3b) list_single_2heading_msg_pane_g1

0xba5d,	// (0x0005f640) list_single_2heading_msg_pane_g2_ParamLimits

0xba5d,	// (0x0005f640) list_single_2heading_msg_pane_g2

0x9e64,	// (0x0005da47) list_single_2heading_msg_pane_g3_ParamLimits

0x9e64,	// (0x0005da47) list_single_2heading_msg_pane_g3

0x9e70,	// (0x0005da53) list_single_2heading_msg_pane_g4_ParamLimits

0x9e70,	// (0x0005da53) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x0006389e) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x0006389e) list_single_2heading_msg_pane_g

0x73fd,	// (0x0005afe0) list_single_2heading_msg_pane_t1_ParamLimits

0x73fd,	// (0x0005afe0) list_single_2heading_msg_pane_t1

0x7425,	// (0x0005b008) list_single_2heading_msg_pane_t2_ParamLimits

0x7425,	// (0x0005b008) list_single_2heading_msg_pane_t2

0x7454,	// (0x0005b037) list_single_2heading_msg_pane_t3_ParamLimits

0x7454,	// (0x0005b037) list_single_2heading_msg_pane_t3

0x4009,	// (0x00057bec) list_single_2heading_msg_pane_t4_ParamLimits

0x4009,	// (0x00057bec) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x000638a7) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x000638a7) list_single_2heading_msg_pane_t

0xbd3a,	// (0x0005f91d) title_pane_g4_ParamLimits

0xbd3a,	// (0x0005f91d) title_pane_g4

0x5bda,	// (0x000597bd) title_pane_stacon_g3_ParamLimits

0x5bda,	// (0x000597bd) title_pane_stacon_g3

0xbf26,	// (0x0005fb09) list_single_2graphic_im_pane_g4_ParamLimits

0xbf26,	// (0x0005fb09) list_single_2graphic_im_pane_g4

0x9b14,	// (0x0005d6f7) popup_side_volume_key_window_cp

0xa535,	// (0x0005e118) main_idle_act2_pane_t1

0x6a63,	// (0x0005a646) toolbar_button_pane_g10

0x545a,	// (0x0005903d) popup_toolbar_window_cp1

0xacfc,	// (0x0005e8df) clock_nsta_pane_cp_t1

0xacfc,	// (0x0005e8df) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x000636a2) clock_nsta_pane_cp_t

0x5f4d,	// (0x00059b30) navi_navi_volume_pane_cp2_ParamLimits

0x5f5c,	// (0x00059b3f) popup_side_volume_key_window_g1_ParamLimits

0x5f68,	// (0x00059b4b) popup_side_volume_key_window_g2_ParamLimits

0x5f77,	// (0x00059b5a) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000632f9) popup_side_volume_key_window_g_ParamLimits

0x6fc1,	// (0x0005aba4) fep_hwr_aid_pane

0x706a,	// (0x0005ac4d) bg_fep_hwr_top_pane_g4_ParamLimits

0xb250,	// (0x0005ee33) fep_hwr_top_pane_g1_ParamLimits

0xb262,	// (0x0005ee45) fep_hwr_top_pane_g2_ParamLimits

0x708a,	// (0x0005ac6d) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x000636f7) fep_hwr_top_pane_g_ParamLimits

0x709f,	// (0x0005ac82) fep_hwr_top_text_pane_ParamLimits

0x98c9,	// (0x0005d4ac) aid_touch_tab_arrow_arrow_2

0x98d2,	// (0x0005d4b5) aid_touch_tab_arrow_left_2

0x6fd5,	// (0x0005abb8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x700c,	// (0x0005abef) fep_hwr_prediction_pane

0xb3b8,	// (0x0005ef9b) fep_vkb_prediction_pane

0xb4be,	// (0x0005f0a1) fep_vkb_side_pane_g3_ParamLimits

0xb4be,	// (0x0005f0a1) fep_vkb_side_pane_g3

0x722e,	// (0x0005ae11) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x729f,	// (0x0005ae82) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x72ac,	// (0x0005ae8f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x000637a6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x748d,	// (0x0005b070) fep_hwr_prediction_pane_g1

0x7497,	// (0x0005b07a) fep_hwr_prediction_pane_g2

0x749f,	// (0x0005b082) fep_hwr_prediction_pane_g3

0x74a7,	// (0x0005b08a) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x000638b0) fep_hwr_prediction_pane_g

0xc42c,	// (0x0006000f) fep_vkb_prediction_pane_g1

0xc436,	// (0x00060019) fep_vkb_prediction_pane_g2

0xc43e,	// (0x00060021) fep_vkb_prediction_pane_g3

0xc446,	// (0x00060029) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x000638b9) fep_vkb_prediction_pane_g

0x6db3,	// (0x0005a996) slider_set_pane_g3

0x6dc7,	// (0x0005a9aa) slider_set_pane_g4

0x6ddf,	// (0x0005a9c2) slider_set_pane_g5

0x6db3,	// (0x0005a996) slider_set_pane_g6

0x6df5,	// (0x0005a9d8) slider_set_pane_g7

0xa156,	// (0x0005dd39) slider_form_pane_g3

0xa15f,	// (0x0005dd42) slider_form_pane_g4

0xa167,	// (0x0005dd4a) slider_form_pane_g5

0xa156,	// (0x0005dd39) slider_form_pane_g6

0xa16f,	// (0x0005dd52) slider_form_pane_g7

0xa7e3,	// (0x0005e3c6) slider_set_pane_vc_g3

0xa7ec,	// (0x0005e3cf) slider_set_pane_vc_g4

0xa7f5,	// (0x0005e3d8) slider_set_pane_vc_g5

0xa7e3,	// (0x0005e3c6) slider_set_pane_vc_g6

0xa7fe,	// (0x0005e3e1) slider_set_pane_vc_g7

0xa9d2,	// (0x0005e5b5) slider_form_pane_vc_g1

0xa9db,	// (0x0005e5be) slider_form_pane_vc_g2

0xa9e4,	// (0x0005e5c7) slider_form_pane_vc_g3

0xa9d2,	// (0x0005e5b5) slider_form_pane_vc_g4

0xa9ed,	// (0x0005e5d0) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00063674) slider_form_pane_vc_g

0x4e6a,	// (0x00058a4d) main_idle_act3_pane

0xc44e,	// (0x00060031) ai3_links_pane

0xc457,	// (0x0006003a) popup_ai3_data_window_ParamLimits

0xc457,	// (0x0006003a) popup_ai3_data_window

0xbd1c,	// (0x0005f8ff) grid_ai3_links_pane

0xc475,	// (0x00060058) cell_ai3_links_pane_ParamLimits

0xc475,	// (0x00060058) cell_ai3_links_pane

0xc48f,	// (0x00060072) bg_popup_sub_pane_cp11

0xc49c,	// (0x0006007f) cell_ai3_links_pane_g1

0xbd1c,	// (0x0005f8ff) bg_popup_sub_pane_cp12

0xc4c1,	// (0x000600a4) heading_ai3_data_pane

0xc4c9,	// (0x000600ac) list_ai3_gene_pane

0xc4d5,	// (0x000600b8) popup_ai3_data_window_g1

0xc4dd,	// (0x000600c0) heading_ai3_data_pane_g1

0xc4e5,	// (0x000600c8) heading_ai3_data_pane_t1

0xc4f3,	// (0x000600d6) list_double_ai3_gene_pane_ParamLimits

0xc4f3,	// (0x000600d6) list_double_ai3_gene_pane

0xc500,	// (0x000600e3) list_single_ai3_gene_pane_ParamLimits

0xc500,	// (0x000600e3) list_single_ai3_gene_pane

0xb1cc,	// (0x0005edaf) list_highlight_pane_cp7_ParamLimits

0xb1cc,	// (0x0005edaf) list_highlight_pane_cp7

0xc50d,	// (0x000600f0) list_single_a13_gene_pane_t1_ParamLimits

0xc50d,	// (0x000600f0) list_single_a13_gene_pane_t1

0xc524,	// (0x00060107) list_single_ai3_gene_pane_g1

0xc52d,	// (0x00060110) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x000638c2) list_single_ai3_gene_pane_g

0xc535,	// (0x00060118) list_double_ai3_gene_pane_g1_ParamLimits

0xc535,	// (0x00060118) list_double_ai3_gene_pane_g1

0xc541,	// (0x00060124) list_double_ai3_gene_pane_t1_ParamLimits

0xc541,	// (0x00060124) list_double_ai3_gene_pane_t1

0xc55d,	// (0x00060140) list_double_ai3_gene_pane_t2_ParamLimits

0xc55d,	// (0x00060140) list_double_ai3_gene_pane_t2

0xc572,	// (0x00060155) list_double_ai3_gene_pane_t3_ParamLimits

0xc572,	// (0x00060155) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x000638c7) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x000638c7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3fff,	// (0x00057be2) aid_size_min_col_2

0xc416,	// (0x0005fff9) aid_size_min_msg_ParamLimits

0xc416,	// (0x0005fff9) aid_size_min_msg

0xb5ca,	// (0x0005f1ad) fep_vkb_top_text_pane_g2_ParamLimits

0xb5ca,	// (0x0005f1ad) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00063727) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00063727) fep_vkb_top_text_pane_g

0x4e6a,	// (0x00058a4d) main_hc_apps_shell_pane

0xc58f,	// (0x00060172) grid_hc_apps_pane_ParamLimits

0xc58f,	// (0x00060172) grid_hc_apps_pane

0xc59e,	// (0x00060181) list_hc_apps_pane

0xc5a6,	// (0x00060189) scroll_pane_cp37_ParamLimits

0xc5a6,	// (0x00060189) scroll_pane_cp37

0xc5b2,	// (0x00060195) cell_hc_apps_pane_ParamLimits

0xc5b2,	// (0x00060195) cell_hc_apps_pane

0xc66a,	// (0x0006024d) cell_hc_apps_pane_g1_ParamLimits

0xc66a,	// (0x0006024d) cell_hc_apps_pane_g1

0xc69b,	// (0x0006027e) cell_hc_apps_pane_g2_ParamLimits

0xc69b,	// (0x0006027e) cell_hc_apps_pane_g2

0xc6b7,	// (0x0006029a) cell_hc_apps_pane_g3_ParamLimits

0xc6b7,	// (0x0006029a) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x000638ce) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x000638ce) cell_hc_apps_pane_g

0xc6d9,	// (0x000602bc) cell_hc_apps_pane_t1_ParamLimits

0xc6d9,	// (0x000602bc) cell_hc_apps_pane_t1

0xec17,	// (0x000627fa) grid_highlight_pane_cp10_ParamLimits

0xec17,	// (0x000627fa) grid_highlight_pane_cp10

0xc719,	// (0x000602fc) list_single_hc_apps_pane_ParamLimits

0xc719,	// (0x000602fc) list_single_hc_apps_pane

0xc758,	// (0x0006033b) list_single_hc_apps_pane_g1

0x9e88,	// (0x0005da6b) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x000638d5) list_single_hc_apps_pane_g

0x9ea1,	// (0x0005da84) list_single_hc_apps_pane_g2_copy1

0x74af,	// (0x0005b092) list_single_hc_apps_pane_t1

0xbd7e,	// (0x0005f961) bg_set_opt_pane_cp_ParamLimits

0x51ab,	// (0x00058d8e) setting_slider_pane_t1_ParamLimits

0x51c4,	// (0x00058da7) setting_slider_pane_t2_ParamLimits

0x51de,	// (0x00058dc1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063141) setting_slider_pane_t_ParamLimits

0x51f6,	// (0x00058dd9) slider_set_pane_ParamLimits

0x62e4,	// (0x00059ec7) control_pane_g5_ParamLimits

0x62e4,	// (0x00059ec7) control_pane_g5

0x9f89,	// (0x0005db6c) slider_set_pane_g1_ParamLimits

0x6da7,	// (0x0005a98a) slider_set_pane_g2_ParamLimits

0x6db3,	// (0x0005a996) slider_set_pane_g3_ParamLimits

0x6dc7,	// (0x0005a9aa) slider_set_pane_g4_ParamLimits

0x6ddf,	// (0x0005a9c2) slider_set_pane_g5_ParamLimits

0x6db3,	// (0x0005a996) slider_set_pane_g6_ParamLimits

0x6df5,	// (0x0005a9d8) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0006354c) slider_set_pane_g_ParamLimits

0x38d3,	// (0x000574b6) navi_icon_text_pane_ParamLimits

0x8544,	// (0x0005c127) aid_fill_nsta_2_ParamLimits

0x8585,	// (0x0005c168) aid_touch_tab_arrow_left_ParamLimits

0x8591,	// (0x0005c174) aid_touch_tab_arrow_right_ParamLimits

0x85fd,	// (0x0005c1e0) clock_nsta_pane_ParamLimits

0x98ab,	// (0x0005d48e) navi_icon_pane_g1_ParamLimits

0x98b7,	// (0x0005d49a) navi_text_pane_t1_ParamLimits

0xae19,	// (0x0005e9fc) navi_icon_text_pane_g1_ParamLimits

0xae25,	// (0x0005ea08) navi_icon_text_pane_t1_ParamLimits

0xc758,	// (0x0006033b) list_single_hc_apps_pane_g1_ParamLimits

0x9e88,	// (0x0005da6b) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x000638d5) list_single_hc_apps_pane_g_ParamLimits

0x9ea1,	// (0x0005da84) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x74af,	// (0x0005b092) list_single_hc_apps_pane_t1_ParamLimits

0x4fdf,	// (0x00058bc2) popup_toolbar2_fixed_window_ParamLimits

0x4fdf,	// (0x00058bc2) popup_toolbar2_fixed_window

0x6955,	// (0x0005a538) popup_toolbar2_float_window

0xbd1c,	// (0x0005f8ff) bg_popup_sub_pane_cp27

0xc771,	// (0x00060354) grid_toolbar2_float_pane

0xbd1c,	// (0x0005f8ff) bg_popup_sub_pane_cp26

0xc771,	// (0x00060354) grid_toolbar2_fixed_pane

0xc779,	// (0x0006035c) cell_toolbar2_fixed_pane_ParamLimits

0xc779,	// (0x0006035c) cell_toolbar2_fixed_pane

0xc789,	// (0x0006036c) cell_toolbar2_fixed_pane_g1

0xc792,	// (0x00060375) toolbar2_fixed_button_pane

0x8a2e,	// (0x0005c611) toolbar2_fixed_button_pane_g1

0x8a3e,	// (0x0005c621) toolbar2_fixed_button_pane_g2

0x8a36,	// (0x0005c619) toolbar2_fixed_button_pane_g3

0x8a4e,	// (0x0005c631) toolbar2_fixed_button_pane_g4

0x8a46,	// (0x0005c629) toolbar2_fixed_button_pane_g5

0x8a56,	// (0x0005c639) toolbar2_fixed_button_pane_g6

0x8a5e,	// (0x0005c641) toolbar2_fixed_button_pane_g7

0x8a6e,	// (0x0005c651) toolbar2_fixed_button_pane_g8

0x8a66,	// (0x0005c649) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0006344e) toolbar2_fixed_button_pane_g

0xc79a,	// (0x0006037d) cell_toolbar2_float_pane_ParamLimits

0xc79a,	// (0x0006037d) cell_toolbar2_float_pane

0xc7ab,	// (0x0006038e) cell_toolbar2_float_pane_g1

0xc792,	// (0x00060375) toolbar2_fixed_button_pane_cp

0xb326,	// (0x0005ef09) fep_vkb_accented_list_pane_ParamLimits

0xb326,	// (0x0005ef09) fep_vkb_accented_list_pane

0x720e,	// (0x0005adf1) bg_popup_fep_shadow_pane_g9

0x81c3,	// (0x0005bda6) bg_popup_fep_shadow_pane_cp3

0xf232,	// (0x00062e15) list_accented_list_pane

0xc7b4,	// (0x00060397) list_single_accented_list_pane_ParamLimits

0xc7b4,	// (0x00060397) list_single_accented_list_pane

0x81c3,	// (0x0005bda6) list_highlight_pane_cp10

0xc7c5,	// (0x000603a8) list_single_accented_list_pane_t1

0x689b,	// (0x0005a47e) popup_slider_window_ParamLimits

0x689b,	// (0x0005a47e) popup_slider_window

0xc40d,	// (0x0005fff0) aid_indentation_list_msg

0xc895,	// (0x00060478) bg_popup_window_pane_cp19

0xc901,	// (0x000604e4) popup_slider_window_g1

0xc91d,	// (0x00060500) popup_slider_window_g2

0xc939,	// (0x0006051c) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x000638da) popup_slider_window_g

0xc99f,	// (0x00060582) popup_slider_window_t1

0xca13,	// (0x000605f6) small_volume_slider_vertical_pane

0xb207,	// (0x0005edea) small_volume_slider_vertical_pane_g1

0xb207,	// (0x0005edea) small_volume_slider_vertical_pane_g2

0xca2f,	// (0x00060612) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x000638ec) small_volume_slider_vertical_pane_g

0x4d8d,	// (0x00058970) area_side_right_pane_ParamLimits

0x4d8d,	// (0x00058970) area_side_right_pane

0x74dd,	// (0x0005b0c0) aid_size_side_button_ParamLimits

0x74dd,	// (0x0005b0c0) aid_size_side_button

0x74f1,	// (0x0005b0d4) grid_sctrl_middle_pane_ParamLimits

0x74f1,	// (0x0005b0d4) grid_sctrl_middle_pane

0x7510,	// (0x0005b0f3) sctrl_sk_bottom_pane

0x7521,	// (0x0005b104) sctrl_sk_top_pane

0x7533,	// (0x0005b116) aid_touch_sctrl_top

0x7540,	// (0x0005b123) bg_sctrl_sk_pane_ParamLimits

0x7540,	// (0x0005b123) bg_sctrl_sk_pane

0x754e,	// (0x0005b131) sctrl_sk_top_pane_g1

0x755b,	// (0x0005b13e) sctrl_sk_top_pane_t1

0x7533,	// (0x0005b116) aid_touch_sctrl_bottom

0x7540,	// (0x0005b123) bg_sctrl_sk_pane_cp_ParamLimits

0x7540,	// (0x0005b123) bg_sctrl_sk_pane_cp

0x7576,	// (0x0005b159) sctrl_sk_bottom_pane_g1

0x755b,	// (0x0005b13e) sctrl_sk_bottom_pane_t1

0x757f,	// (0x0005b162) cell_sctrl_middle_pane_ParamLimits

0x757f,	// (0x0005b162) cell_sctrl_middle_pane

0x759c,	// (0x0005b17f) aid_touch_sctrl_middle_ParamLimits

0x759c,	// (0x0005b17f) aid_touch_sctrl_middle

0x75ae,	// (0x0005b191) bg_sctrl_middle_pane_ParamLimits

0x75ae,	// (0x0005b191) bg_sctrl_middle_pane

0x722e,	// (0x0005ae11) cell_sctrl_middle_pane_g1_ParamLimits

0x722e,	// (0x0005ae11) cell_sctrl_middle_pane_g1

0x75bc,	// (0x0005b19f) cell_sctrl_middle_pane_g2_ParamLimits

0x75bc,	// (0x0005b19f) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x000638f8) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x000638f8) cell_sctrl_middle_pane_g

0x8a2e,	// (0x0005c611) bg_sctrl_middle_pane_g1

0x8a36,	// (0x0005c619) bg_sctrl_middle_pane_g2

0x8a3e,	// (0x0005c621) bg_sctrl_middle_pane_g3

0x8a46,	// (0x0005c629) bg_sctrl_middle_pane_g4

0x8a4e,	// (0x0005c631) bg_sctrl_middle_pane_g5

0x8a56,	// (0x0005c639) bg_sctrl_middle_pane_g6

0x8a5e,	// (0x0005c641) bg_sctrl_middle_pane_g7

0x8a66,	// (0x0005c649) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x000638fd) bg_sctrl_middle_pane_g

0x8a6e,	// (0x0005c651) bg_sctrl_middle_pane_g8_copy1

0x8a2e,	// (0x0005c611) bg_sctrl_sk_pane_g1

0x8a3e,	// (0x0005c621) bg_sctrl_sk_pane_g2

0x8a36,	// (0x0005c619) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0006344e) bg_sctrl_sk_pane_g

0xf05b,	// (0x00062c3e) aid_size_touch_scroll_bar

0x8a4e,	// (0x0005c631) bg_sctrl_sk_pane_g4

0x8a46,	// (0x0005c629) bg_sctrl_sk_pane_g5

0x8a56,	// (0x0005c639) bg_sctrl_sk_pane_g6

0x8a5e,	// (0x0005c641) bg_sctrl_sk_pane_g7

0x8a6e,	// (0x0005c651) bg_sctrl_sk_pane_g8

0x8a66,	// (0x0005c649) bg_sctrl_sk_pane_g9

0x64b2,	// (0x0005a095) popup_fep_china_hwr2_fs_candidate_window

0x64bc,	// (0x0005a09f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x64bc,	// (0x0005a09f) popup_fep_china_hwr2_fs_control_window

0x722e,	// (0x0005ae11) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x000638f3) sctrl_sk_top_pane_g

0xca38,	// (0x0006061b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xca38,	// (0x0006061b) aid_fep_china_hwr2_fs_cell

0xca4b,	// (0x0006062e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xca4b,	// (0x0006062e) bg_popup_fep_shadow_pane_cp4

0xca64,	// (0x00060647) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca64,	// (0x00060647) bg_popup_fep_shadow_pane_cp5

0xca76,	// (0x00060659) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca76,	// (0x00060659) popup_fep_china_hwr2_fs_control_bar_grid

0xca86,	// (0x00060669) popup_fep_china_hwr2_fs_control_funtion_grid

0xca8e,	// (0x00060671) aid_fep_china_hwr2_fs_candi_cell

0xbd1c,	// (0x0005f8ff) bg_popup_fep_shadow_pane_cp6

0xca98,	// (0x0006067b) popup_fep_china_hwr2_fs_candidate_grid

0xcaa2,	// (0x00060685) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcaa2,	// (0x00060685) cell_fep_china_hwr2_fs_funtion_grid

0xb207,	// (0x0005edea) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcaba,	// (0x0006069d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcaba,	// (0x0006069d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcac8,	// (0x000606ab) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcac8,	// (0x000606ab) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0006390e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0006390e) cell_fep_china_hwr2_fs_funtion_grid_g

0xcade,	// (0x000606c1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcade,	// (0x000606c1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcaf3,	// (0x000606d6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcaf3,	// (0x000606d6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00063913) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00063913) cell_fep_china_hwr2_fs_funtion_grid_t

0xcb0f,	// (0x000606f2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcb17,	// (0x000606fa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcb1f,	// (0x00060702) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00063918) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcb27,	// (0x0006070a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcb27,	// (0x0006070a) cell_fep_china_hwr2_fs_candidate_grid

0xcb46,	// (0x00060729) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcb4e,	// (0x00060731) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb207,	// (0x0005edea) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb207,	// (0x0005edea) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0006372c) cell_fep_china_hwr2_fs_candidate_grid_g

0xcb56,	// (0x00060739) cell_fep_china_hwr2_fs_candidate_grid_t1

0x860a,	// (0x0005c1ed) clock_nsta_pane_cp_24_ParamLimits

0x860a,	// (0x0005c1ed) clock_nsta_pane_cp_24

0x868a,	// (0x0005c26d) indicator_nsta_pane_cp_24_ParamLimits

0x868a,	// (0x0005c26d) indicator_nsta_pane_cp_24

0x9727,	// (0x0005d30a) heading_pane_g1

0x0001,

0xf8d0,	// (0x000634b3) heading_pane_g

0xa37c,	// (0x0005df5f) grid_sct_catagory_button_pane

0xa3ae,	// (0x0005df91) scroll_pane_cp5_ParamLimits

0xae67,	// (0x0005ea4a) button_value_adjust_pane_cp5_ParamLimits

0xae67,	// (0x0005ea4a) button_value_adjust_pane_cp5

0xaf4c,	// (0x0005eb2f) form2_midp_time_pane_ParamLimits

0xcb64,	// (0x00060747) cell_sct_catagory_button_pane_ParamLimits

0xcb64,	// (0x00060747) cell_sct_catagory_button_pane

0xb1cc,	// (0x0005edaf) bg_button_pane_cp01_ParamLimits

0xb1cc,	// (0x0005edaf) bg_button_pane_cp01

0xb207,	// (0x0005edea) cell_sct_catagory_button_pane_g1

0x68dc,	// (0x0005a4bf) popup_tb_extension_window

0xcb76,	// (0x00060759) aid_size_cell_ext_ParamLimits

0xcb76,	// (0x00060759) aid_size_cell_ext

0xec17,	// (0x000627fa) bg_tb_trans_pane_cp1_ParamLimits

0xec17,	// (0x000627fa) bg_tb_trans_pane_cp1

0xcb96,	// (0x00060779) grid_tb_ext_pane_ParamLimits

0xcb96,	// (0x00060779) grid_tb_ext_pane

0xcbc4,	// (0x000607a7) cell_tb_ext_pane_ParamLimits

0xcbc4,	// (0x000607a7) cell_tb_ext_pane

0xcbdb,	// (0x000607be) cell_tb_ext_pane_g1_ParamLimits

0xcbdb,	// (0x000607be) cell_tb_ext_pane_g1

0xcbf8,	// (0x000607db) cell_tb_ext_pane_t1

0xec17,	// (0x000627fa) list_highlight_pane_cp11_ParamLimits

0xec17,	// (0x000627fa) list_highlight_pane_cp11

0x4ffe,	// (0x00058be1) popup_uni_indicator_window_ParamLimits

0x4ffe,	// (0x00058be1) popup_uni_indicator_window

0xf122,	// (0x00062d05) bg_popup_sub_pane_cp14

0xcc13,	// (0x000607f6) list_uniindi_pane

0xcc1f,	// (0x00060802) uniindi_top_pane

0xec17,	// (0x000627fa) bg_uniindi_top_pane

0xcc40,	// (0x00060823) uniindi_top_pane_g1

0xcc56,	// (0x00060839) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0006391f) uniindi_top_pane_g

0xcc80,	// (0x00060863) uniindi_top_pane_t1

0xccac,	// (0x0006088f) list_single_uniindi_pane_ParamLimits

0xccac,	// (0x0006088f) list_single_uniindi_pane

0xb207,	// (0x0005edea) bg_uniindi_top_pane_g1

0xccbe,	// (0x000608a1) list_single_uniindi_pane_g1

0xccd1,	// (0x000608b4) list_single_uniindi_pane_t1

0x4e6a,	// (0x00058a4d) control_bg_pane

0xccf6,	// (0x000608d9) bg_sctrl_sk_pane_cp1

0xccff,	// (0x000608e2) bg_sctrl_sk_pane_cp2

0xcd08,	// (0x000608eb) control_bg_pane_g1

0xcd11,	// (0x000608f4) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00063928) control_bg_pane_g

0xacb0,	// (0x0005e893) cell_indicator_nsta_pane_g1_ParamLimits

0xacbe,	// (0x0005e8a1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00063690) cell_indicator_nsta_pane_g_ParamLimits

0x3e82,	// (0x00057a65) form2_midp_time_pane_t1_ParamLimits

0x6410,	// (0x00059ff3) main_idle_act4_pane_ParamLimits

0x6410,	// (0x00059ff3) main_idle_act4_pane

0x68dc,	// (0x0005a4bf) popup_tb_extension_window_ParamLimits

0xcbb6,	// (0x00060799) tb_ext_find_pane_ParamLimits

0xcbb6,	// (0x00060799) tb_ext_find_pane

0xcd1a,	// (0x000608fd) ai_gene_pane_1_cp1

0x830d,	// (0x0005bef0) ai_gene_pane_2_cp1

0xcd22,	// (0x00060905) list_single_idle_plugin_calendar_pane

0xcd2b,	// (0x0006090e) list_single_idle_plugin_notification_pane

0xcd34,	// (0x00060917) list_single_idle_plugin_player_pane

0xcd3d,	// (0x00060920) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcd3d,	// (0x00060920) list_single_idle_plugin_shortcut_pane

0xcd5f,	// (0x00060942) main_idle_act4_pane_t1

0xcd71,	// (0x00060954) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0006392d) main_idle_act4_pane_t

0xcd83,	// (0x00060966) middle_sk_idle_act4_pane_ParamLimits

0xcd83,	// (0x00060966) middle_sk_idle_act4_pane

0xcd99,	// (0x0006097c) popup_clock_digital_analogue_window_cp2

0xcdb3,	// (0x00060996) shortcut_wheel_idle_act4_pane_ParamLimits

0xcdb3,	// (0x00060996) shortcut_wheel_idle_act4_pane

0xb207,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g1

0xb207,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g2

0xb207,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g3

0xb207,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g4

0xb207,	// (0x0005edea) shortcut_wheel_idle_act4_pane_g5

0xcdc7,	// (0x000609aa) shortcut_wheel_idle_act4_pane_g6

0xcdcf,	// (0x000609b2) shortcut_wheel_idle_act4_pane_g7

0xcdd7,	// (0x000609ba) shortcut_wheel_idle_act4_pane_g8

0xcddf,	// (0x000609c2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00063932) shortcut_wheel_idle_act4_pane_g

0xb46a,	// (0x0005f04d) middle_sk_idle_act4_pane_g1_ParamLimits

0xb46a,	// (0x0005f04d) middle_sk_idle_act4_pane_g1

0xce43,	// (0x00060a26) middle_sk_idle_act4_pane_g2_ParamLimits

0xce43,	// (0x00060a26) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00063955) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00063955) middle_sk_idle_act4_pane_g

0xce4f,	// (0x00060a32) middle_sk_idle_act4_pane_t1_ParamLimits

0xce4f,	// (0x00060a32) middle_sk_idle_act4_pane_t1

0xce6c,	// (0x00060a4f) grid_ai_shortcut_pane_ParamLimits

0xce6c,	// (0x00060a4f) grid_ai_shortcut_pane

0xce85,	// (0x00060a68) list_highlight_pane_cp16_ParamLimits

0xce85,	// (0x00060a68) list_highlight_pane_cp16

0xce92,	// (0x00060a75) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xce92,	// (0x00060a75) list_single_idle_plugin_shortcut_pane_g1

0xce9e,	// (0x00060a81) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xce9e,	// (0x00060a81) list_single_idle_plugin_shortcut_pane_g2

0xceb8,	// (0x00060a9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xceb8,	// (0x00060a9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0006395a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0006395a) list_single_idle_plugin_shortcut_pane_g

0xcecb,	// (0x00060aae) cell_ai_shortcut_pane_ParamLimits

0xcecb,	// (0x00060aae) cell_ai_shortcut_pane

0xceee,	// (0x00060ad1) cell_ai_shortcut_pane_g1_ParamLimits

0xceee,	// (0x00060ad1) cell_ai_shortcut_pane_g1

0xcd1a,	// (0x000608fd) ai_gene_pane_1_cp2

0xcf10,	// (0x00060af3) ai_gene_pane_2_cp2

0xcf18,	// (0x00060afb) list_highlight_pane_cp15

0xcf21,	// (0x00060b04) list_single_idle_plugin_calendar_pane_g1

0xcf18,	// (0x00060afb) list_highlight_pane_cp17

0xcf29,	// (0x00060b0c) list_single_idle_plugin_calendar_pane_g1_copy1

0xcf31,	// (0x00060b14) list_single_idle_plugin_player_pane_g1

0xa5e3,	// (0x0005e1c6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00063961) list_single_idle_plugin_player_pane_g

0xcf39,	// (0x00060b1c) list_single_idle_plugin_player_pane_t1

0xcf47,	// (0x00060b2a) list_single_idle_plugin_player_pane_t2

0xcf55,	// (0x00060b38) list_single_idle_plugin_player_pane_t3

0xcf63,	// (0x00060b46) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x00063966) list_single_idle_plugin_player_pane_t

0xcf71,	// (0x00060b54) wait_bar_pane_cp15

0xcf79,	// (0x00060b5c) grid_ai_notification_pane

0xa5e3,	// (0x0005e1c6) list_single_idle_plugin_notification_pane_g1

0xcf82,	// (0x00060b65) cell_ai_notification_pane_ParamLimits

0xcf82,	// (0x00060b65) cell_ai_notification_pane

0xcf8f,	// (0x00060b72) cell_ai_notification_pane_g1

0xcf97,	// (0x00060b7a) cell_ai_notification_pane_t1

0xcfa5,	// (0x00060b88) tb_ext_find_button_pane

0xcfad,	// (0x00060b90) tb_ext_find_pane_g1

0xcfb5,	// (0x00060b98) tb_ext_find_pane_t1

0x3521,	// (0x00057104) tb_ext_find_button_pane_g1

0xcfc3,	// (0x00060ba6) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0006396f) tb_ext_find_button_pane_g

0xcd5f,	// (0x00060942) main_idle_act4_pane_t1_ParamLimits

0xcd71,	// (0x00060954) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0006392d) main_idle_act4_pane_t_ParamLimits

0xcd99,	// (0x0006097c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcda7,	// (0x0006098a) sat_plugin_idle_act4_pane_ParamLimits

0xcda7,	// (0x0006098a) sat_plugin_idle_act4_pane

0xcfcc,	// (0x00060baf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcfcc,	// (0x00060baf) sat_plugin_idle_act4_pane_t1

0xcfdf,	// (0x00060bc2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcfdf,	// (0x00060bc2) sat_plugin_idle_act4_pane_t2

0xcff2,	// (0x00060bd5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcff2,	// (0x00060bd5) sat_plugin_idle_act4_pane_t3

0xd005,	// (0x00060be8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd005,	// (0x00060be8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x00063974) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x00063974) sat_plugin_idle_act4_pane_t

0x4f2f,	// (0x00058b12) popup_battery_window_ParamLimits

0x4f2f,	// (0x00058b12) popup_battery_window

0xec17,	// (0x000627fa) bg_popup_sub_pane_cp25_ParamLimits

0xec17,	// (0x000627fa) bg_popup_sub_pane_cp25

0xd018,	// (0x00060bfb) popup_battery_window_g1_ParamLimits

0xd018,	// (0x00060bfb) popup_battery_window_g1

0xd024,	// (0x00060c07) popup_battery_window_t1_ParamLimits

0xd024,	// (0x00060c07) popup_battery_window_t1

0xd036,	// (0x00060c19) popup_battery_window_t2_ParamLimits

0xd036,	// (0x00060c19) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0006397d) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0006397d) popup_battery_window_t

0x81d7,	// (0x0005bdba) midp_canvas_pane_ParamLimits

0x824f,	// (0x0005be32) midp_keypad_pane_ParamLimits

0x824f,	// (0x0005be32) midp_keypad_pane

0x84f2,	// (0x0005c0d5) main_midp_pane_ParamLimits

0xad1a,	// (0x0005e8fd) signal_pane_g2_cp_ParamLimits

0xd053,	// (0x00060c36) aid_size_cell_midp_keypad_ParamLimits

0xd053,	// (0x00060c36) aid_size_cell_midp_keypad

0xd06d,	// (0x00060c50) midp_keyp_game_grid_pane_ParamLimits

0xd06d,	// (0x00060c50) midp_keyp_game_grid_pane

0xd08d,	// (0x00060c70) midp_keyp_rocker_pane_ParamLimits

0xd08d,	// (0x00060c70) midp_keyp_rocker_pane

0xd0bc,	// (0x00060c9f) midp_keyp_sk_left_pane_ParamLimits

0xd0bc,	// (0x00060c9f) midp_keyp_sk_left_pane

0xd118,	// (0x00060cfb) midp_keyp_sk_right_pane_ParamLimits

0xd118,	// (0x00060cfb) midp_keyp_sk_right_pane

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp03

0xd174,	// (0x00060d57) midp_keyp_sk_left_pane_g1

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp04

0xd174,	// (0x00060d57) midp_keyp_sk_right_pane_g1

0xb207,	// (0x0005edea) midp_keyp_rocker_pane_g1

0xd17c,	// (0x00060d5f) keyp_game_cell_pane_ParamLimits

0xd17c,	// (0x00060d5f) keyp_game_cell_pane

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp02

0xd18f,	// (0x00060d72) keyp_game_cell_pane_g1

0x4f79,	// (0x00058b5c) popup_fep_vkb2_window_ParamLimits

0x4f79,	// (0x00058b5c) popup_fep_vkb2_window

0x75da,	// (0x0005b1bd) aid_size_cell_vkb2_ParamLimits

0x75da,	// (0x0005b1bd) aid_size_cell_vkb2

0x762e,	// (0x0005b211) popup_fep_vkb2_window_g1_ParamLimits

0x762e,	// (0x0005b211) popup_fep_vkb2_window_g1

0x7676,	// (0x0005b259) vkb2_area_bottom_pane_ParamLimits

0x7676,	// (0x0005b259) vkb2_area_bottom_pane

0x76ca,	// (0x0005b2ad) vkb2_area_keypad_pane_ParamLimits

0x76ca,	// (0x0005b2ad) vkb2_area_keypad_pane

0x7710,	// (0x0005b2f3) vkb2_area_top_pane_ParamLimits

0x7710,	// (0x0005b2f3) vkb2_area_top_pane

0x778a,	// (0x0005b36d) vkb2_top_entry_pane_ParamLimits

0x778a,	// (0x0005b36d) vkb2_top_entry_pane

0x77b4,	// (0x0005b397) vkb2_top_grid_left_pane_ParamLimits

0x77b4,	// (0x0005b397) vkb2_top_grid_left_pane

0x77d2,	// (0x0005b3b5) vkb2_top_grid_right_pane_ParamLimits

0x77d2,	// (0x0005b3b5) vkb2_top_grid_right_pane

0x77f0,	// (0x0005b3d3) vkb2_cell_keypad_pane_ParamLimits

0x77f0,	// (0x0005b3d3) vkb2_cell_keypad_pane

0x78c1,	// (0x0005b4a4) vkb2_area_bottom_grid_pane_ParamLimits

0x78c1,	// (0x0005b4a4) vkb2_area_bottom_grid_pane

0x78e7,	// (0x0005b4ca) vkb2_area_bottom_pane_g1_ParamLimits

0x78e7,	// (0x0005b4ca) vkb2_area_bottom_pane_g1

0x790b,	// (0x0005b4ee) vkb2_area_bottom_pane_g2_ParamLimits

0x790b,	// (0x0005b4ee) vkb2_area_bottom_pane_g2

0x7939,	// (0x0005b51c) vkb2_area_bottom_pane_g3_ParamLimits

0x7939,	// (0x0005b51c) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x00063982) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x00063982) vkb2_area_bottom_pane_g

0x799a,	// (0x0005b57d) vkb2_top_cell_left_pane_ParamLimits

0x799a,	// (0x0005b57d) vkb2_top_cell_left_pane

0xd1a0,	// (0x00060d83) vkb2_top_entry_pane_g1_ParamLimits

0xd1a0,	// (0x00060d83) vkb2_top_entry_pane_g1

0xd1ae,	// (0x00060d91) vkb2_top_entry_pane_t1_ParamLimits

0xd1ae,	// (0x00060d91) vkb2_top_entry_pane_t1

0xd1e0,	// (0x00060dc3) vkb2_top_entry_pane_t2_ParamLimits

0xd1e0,	// (0x00060dc3) vkb2_top_entry_pane_t2

0xd212,	// (0x00060df5) vkb2_top_entry_pane_t3_ParamLimits

0xd212,	// (0x00060df5) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x00063989) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x00063989) vkb2_top_entry_pane_t

0x79e7,	// (0x0005b5ca) vkb2_top_grid_right_pane_g1_ParamLimits

0x79e7,	// (0x0005b5ca) vkb2_top_grid_right_pane_g1

0x79fd,	// (0x0005b5e0) vkb2_top_grid_right_pane_g2_ParamLimits

0x79fd,	// (0x0005b5e0) vkb2_top_grid_right_pane_g2

0x7a15,	// (0x0005b5f8) vkb2_top_grid_right_pane_g3_ParamLimits

0x7a15,	// (0x0005b5f8) vkb2_top_grid_right_pane_g3

0x7a2d,	// (0x0005b610) vkb2_top_grid_right_pane_g4_ParamLimits

0x7a2d,	// (0x0005b610) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x00063990) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x00063990) vkb2_top_grid_right_pane_g

0x7a43,	// (0x0005b626) vkb2_top_cell_left_pane_g1

0x7a5a,	// (0x0005b63d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7a5a,	// (0x0005b63d) vkb2_cell_keypad_pane_g1

0xd236,	// (0x00060e19) vkb2_cell_keypad_pane_t1_ParamLimits

0xd236,	// (0x00060e19) vkb2_cell_keypad_pane_t1

0x7a68,	// (0x0005b64b) vkb2_cell_bottom_grid_pane_ParamLimits

0x7a68,	// (0x0005b64b) vkb2_cell_bottom_grid_pane

0x7aa1,	// (0x0005b684) vkb2_cell_bottom_grid_pane_g1

0xcde7,	// (0x000609ca) aid_call2_pane_cp02

0xcdef,	// (0x000609d2) aid_call_pane_cp02

0xcdf7,	// (0x000609da) clock_digital_number_pane_cp10

0xcdff,	// (0x000609e2) clock_digital_number_pane_cp11

0xce07,	// (0x000609ea) clock_digital_number_pane_cp12

0xce0f,	// (0x000609f2) clock_digital_number_pane_cp13

0xce17,	// (0x000609fa) clock_digital_separator_pane_cp10

0x3521,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g1

0x3521,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g2

0xce1f,	// (0x00060a02) popup_clock_digital_analogue_window_cp2_g3

0x3521,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g4

0xce1f,	// (0x00060a02) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00063945) popup_clock_digital_analogue_window_cp2_g

0xce27,	// (0x00060a0a) popup_clock_digital_analogue_window_cp2_t1

0xce35,	// (0x00060a18) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00063950) popup_clock_digital_analogue_window_cp2_t

0xb207,	// (0x0005edea) clock_digital_number_pane_cp10_g1

0xb207,	// (0x0005edea) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0006372c) clock_digital_number_pane_cp10_g

0xb207,	// (0x0005edea) clock_digital_separator_pane_cp10_g1

0xb207,	// (0x0005edea) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0006372c) clock_digital_separator_pane_cp10_g

0xcc62,	// (0x00060845) uniindi_top_pane_g3

0xcc73,	// (0x00060856) uniindi_top_pane_g4

0x787b,	// (0x0005b45e) vkb2_row_keypad_pane_ParamLimits

0x787b,	// (0x0005b45e) vkb2_row_keypad_pane

0x7abd,	// (0x0005b6a0) vkb2_cell_t_keypad_pane_ParamLimits

0x7abd,	// (0x0005b6a0) vkb2_cell_t_keypad_pane

0x7acd,	// (0x0005b6b0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7acd,	// (0x0005b6b0) vkb2_cell_t_keypad_pane_cp08

0x7ae2,	// (0x0005b6c5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7ae2,	// (0x0005b6c5) vkb2_cell_t_keypad_pane_cp09

0x7af6,	// (0x0005b6d9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7af6,	// (0x0005b6d9) vkb2_cell_t_keypad_pane_cp01

0x7b07,	// (0x0005b6ea) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7b07,	// (0x0005b6ea) vkb2_cell_t_keypad_pane_cp02

0x7b18,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7b18,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp03

0x7b29,	// (0x0005b70c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7b29,	// (0x0005b70c) vkb2_cell_t_keypad_pane_cp04

0x7b3a,	// (0x0005b71d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7b3a,	// (0x0005b71d) vkb2_cell_t_keypad_pane_cp05

0x7b4b,	// (0x0005b72e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7b4b,	// (0x0005b72e) vkb2_cell_t_keypad_pane_cp06

0x7b5e,	// (0x0005b741) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7b5e,	// (0x0005b741) vkb2_cell_t_keypad_pane_cp07

0x7b73,	// (0x0005b756) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7b73,	// (0x0005b756) vkb2_cell_t_keypad_pane_cp10

0x722e,	// (0x0005ae11) vkb2_cell_t_keypad_pane_g1

0xd24d,	// (0x00060e30) vkb2_cell_t_keypad_pane_t1

0x4e6a,	// (0x00058a4d) popup_grid_graphic2_window

0xd25f,	// (0x00060e42) aid_size_cell_graphic2_ParamLimits

0xd25f,	// (0x00060e42) aid_size_cell_graphic2

0xd297,	// (0x00060e7a) bg_popup_window_pane_cp21_ParamLimits

0xd297,	// (0x00060e7a) bg_popup_window_pane_cp21

0xd2a5,	// (0x00060e88) graphic2_pages_pane_ParamLimits

0xd2a5,	// (0x00060e88) graphic2_pages_pane

0xd2eb,	// (0x00060ece) grid_graphic2_control_pane_ParamLimits

0xd2eb,	// (0x00060ece) grid_graphic2_control_pane

0xd329,	// (0x00060f0c) grid_graphic2_pane_ParamLimits

0xd329,	// (0x00060f0c) grid_graphic2_pane

0xd39f,	// (0x00060f82) cell_graphic2_pane

0x4e6a,	// (0x00058a4d) main_comp_mode_pane

0xc4c9,	// (0x000600ac) list_ai3_gene_pane_ParamLimits

0xc895,	// (0x00060478) bg_popup_window_pane_cp19_ParamLimits

0xc8a1,	// (0x00060484) bg_touch_area_indi_pane_ParamLimits

0xc8a1,	// (0x00060484) bg_touch_area_indi_pane

0xc8b7,	// (0x0006049a) bg_touch_area_indi_pane_cp01_ParamLimits

0xc8b7,	// (0x0006049a) bg_touch_area_indi_pane_cp01

0xc8cd,	// (0x000604b0) bg_touch_area_indi_pane_cp02_ParamLimits

0xc8cd,	// (0x000604b0) bg_touch_area_indi_pane_cp02

0xc8e7,	// (0x000604ca) bg_touch_area_indi_pane_cp03_ParamLimits

0xc8e7,	// (0x000604ca) bg_touch_area_indi_pane_cp03

0xc901,	// (0x000604e4) popup_slider_window_g1_ParamLimits

0xc91d,	// (0x00060500) popup_slider_window_g2_ParamLimits

0xc939,	// (0x0006051c) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x000638da) popup_slider_window_g_ParamLimits

0xc99f,	// (0x00060582) popup_slider_window_t1_ParamLimits

0xca13,	// (0x000605f6) small_volume_slider_vertical_pane_ParamLimits

0xd39f,	// (0x00060f82) cell_graphic2_pane_ParamLimits

0xd3f4,	// (0x00060fd7) bg_button_pane_cp10_ParamLimits

0xd3f4,	// (0x00060fd7) bg_button_pane_cp10

0xd409,	// (0x00060fec) bg_button_pane_cp11_ParamLimits

0xd409,	// (0x00060fec) bg_button_pane_cp11

0xd41e,	// (0x00061001) graphic2_pages_pane_g1_ParamLimits

0xd41e,	// (0x00061001) graphic2_pages_pane_g1

0xd439,	// (0x0006101c) graphic2_pages_pane_g2_ParamLimits

0xd439,	// (0x0006101c) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x0006399e) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x0006399e) graphic2_pages_pane_g

0xd451,	// (0x00061034) graphic2_pages_pane_t1_ParamLimits

0xd451,	// (0x00061034) graphic2_pages_pane_t1

0xd467,	// (0x0006104a) cell_graphic2_control_pane_ParamLimits

0xd467,	// (0x0006104a) cell_graphic2_control_pane

0xd487,	// (0x0006106a) cell_graphic2_pane_g1_ParamLimits

0xd487,	// (0x0006106a) cell_graphic2_pane_g1

0xd494,	// (0x00061077) cell_graphic2_pane_g2_ParamLimits

0xd494,	// (0x00061077) cell_graphic2_pane_g2

0xd4a1,	// (0x00061084) cell_graphic2_pane_g3_ParamLimits

0xd4a1,	// (0x00061084) cell_graphic2_pane_g3

0xd4ae,	// (0x00061091) cell_graphic2_pane_g4_ParamLimits

0xd4ae,	// (0x00061091) cell_graphic2_pane_g4

0xd4bb,	// (0x0006109e) cell_graphic2_pane_g5_ParamLimits

0xd4bb,	// (0x0006109e) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x000639a3) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x000639a3) cell_graphic2_pane_g

0xd4d6,	// (0x000610b9) cell_graphic2_pane_t1_ParamLimits

0xd4d6,	// (0x000610b9) cell_graphic2_pane_t1

0x8aba,	// (0x0005c69d) grid_highlight_pane_cp11_ParamLimits

0x8aba,	// (0x0005c69d) grid_highlight_pane_cp11

0xec17,	// (0x000627fa) bg_button_pane_cp05

0xd50d,	// (0x000610f0) cell_graphic2_control_pane_g1

0xb207,	// (0x0005edea) bg_touch_area_indi_pane_g1

0xd535,	// (0x00061118) aid_cmod_rocker_key_size

0xd53f,	// (0x00061122) aid_cmode_itu_key_size

0xd549,	// (0x0006112c) main_cmode_video_pane

0xd553,	// (0x00061136) main_comp_mode_itu_pane

0xd55f,	// (0x00061142) main_comp_mode_rocker_pane

0xd56b,	// (0x0006114e) cell_cmode_rocker_pane_ParamLimits

0xd56b,	// (0x0006114e) cell_cmode_rocker_pane

0xd57f,	// (0x00061162) cell_cmode_itu_pane_ParamLimits

0xd57f,	// (0x00061162) cell_cmode_itu_pane

0xf122,	// (0x00062d05) bg_button_pane_cp06_ParamLimits

0xf122,	// (0x00062d05) bg_button_pane_cp06

0xb46a,	// (0x0005f04d) cell_cmode_rocker_pane_g1_ParamLimits

0xb46a,	// (0x0005f04d) cell_cmode_rocker_pane_g1

0xcaba,	// (0x0006069d) cell_cmode_rocker_pane_g2_ParamLimits

0xcaba,	// (0x0006069d) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x000639b3) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x000639b3) cell_cmode_rocker_pane_g

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp07

0xd596,	// (0x00061179) cell_cmode_itu_pane_g1

0xd59f,	// (0x00061182) cell_cmode_itu_pane_t1

0xd5ad,	// (0x00061190) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x000639b8) cell_cmode_itu_pane_t

0xcce6,	// (0x000608c9) aid_touch_ctrl_left

0xccee,	// (0x000608d1) aid_touch_ctrl_right

0xbd1c,	// (0x0005f8ff) compa_mode_pane

0xd5bb,	// (0x0006119e) aid_cmod_rocker_key_size_cp

0xd5c5,	// (0x000611a8) aid_cmode_itu_key_size_cp

0xd5cf,	// (0x000611b2) compa_mode_pane_g1

0xd5d7,	// (0x000611ba) compa_mode_pane_g2

0xd5df,	// (0x000611c2) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x000639bd) compa_mode_pane_g

0xd5e7,	// (0x000611ca) main_comp_mode_itu_pane_cp

0xd5ef,	// (0x000611d2) main_comp_mode_rocker_pane_cp

0xd5f7,	// (0x000611da) cell_cmode_itu_pane_cp_ParamLimits

0xd5f7,	// (0x000611da) cell_cmode_itu_pane_cp

0xd60c,	// (0x000611ef) cell_cmode_rocker_pane_cp_ParamLimits

0xd60c,	// (0x000611ef) cell_cmode_rocker_pane_cp

0xf122,	// (0x00062d05) bg_button_pane_cp06_cp_ParamLimits

0xf122,	// (0x00062d05) bg_button_pane_cp06_cp

0xb46a,	// (0x0005f04d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb46a,	// (0x0005f04d) cell_cmode_rocker_pane_g1_cp

0xb207,	// (0x0005edea) cell_cmode_rocker_pane_g2_cp

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp07_cp

0xd61e,	// (0x00061201) cell_cmode_itu_pane_g1_cp

0xd627,	// (0x0006120a) cell_cmode_itu_pane_t1_cp

0xd627,	// (0x0006120a) cell_cmode_itu_pane_t2_cp

0xa145,	// (0x0005dd28) settings_code_pane_cp2

0xbd7e,	// (0x0005f961) bg_popup_window_pane_cp3_ParamLimits

0xee2b,	// (0x00062a0e) heading_pane_cp3_ParamLimits

0xee37,	// (0x00062a1a) listscroll_popup_graphic_pane_ParamLimits

0x6fc1,	// (0x0005aba4) fep_hwr_aid_pane_ParamLimits

0x7533,	// (0x0005b116) aid_touch_sctrl_top_ParamLimits

0x754e,	// (0x0005b131) sctrl_sk_top_pane_g1_ParamLimits

0x722e,	// (0x0005ae11) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x000638f3) sctrl_sk_top_pane_g_ParamLimits

0x755b,	// (0x0005b13e) sctrl_sk_top_pane_t1_ParamLimits

0x7533,	// (0x0005b116) aid_touch_sctrl_bottom_ParamLimits

0x755b,	// (0x0005b13e) sctrl_sk_bottom_pane_t1_ParamLimits

0xcc2c,	// (0x0006080f) aid_area_touch_clock

0x7752,	// (0x0005b335) aid_vkb2_area_top_pane_cell_ParamLimits

0x7752,	// (0x0005b335) aid_vkb2_area_top_pane_cell

0x789d,	// (0x0005b480) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x789d,	// (0x0005b480) aid_vkb2_area_bottom_pane_cell

0xd198,	// (0x00060d7b) popup_char_count_window

0xd635,	// (0x00061218) popup_char_count_window_g1

0xd63e,	// (0x00061221) popup_char_count_window_g2

0xd647,	// (0x0006122a) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x000639c4) popup_char_count_window_g

0xd650,	// (0x00061233) popup_char_count_window_t1

0x760c,	// (0x0005b1ef) popup_fep_char_preview_window_ParamLimits

0x760c,	// (0x0005b1ef) popup_fep_char_preview_window

0x7770,	// (0x0005b353) vkb2_top_candi_pane_ParamLimits

0x7770,	// (0x0005b353) vkb2_top_candi_pane

0xd65e,	// (0x00061241) cell_vkb2_top_candi_pane_ParamLimits

0xd65e,	// (0x00061241) cell_vkb2_top_candi_pane

0x7b88,	// (0x0005b76b) bg_popup_fep_char_preview_window_ParamLimits

0x7b88,	// (0x0005b76b) bg_popup_fep_char_preview_window

0x7b96,	// (0x0005b779) popup_fep_char_preview_window_t1_ParamLimits

0x7b96,	// (0x0005b779) popup_fep_char_preview_window_t1

0xd6af,	// (0x00061292) bg_popup_fep_char_preview_window_g1

0xd6b7,	// (0x0006129a) bg_popup_fep_char_preview_window_g2

0xd6bf,	// (0x000612a2) bg_popup_fep_char_preview_window_g3

0xd6c7,	// (0x000612aa) bg_popup_fep_char_preview_window_g4

0xd6cf,	// (0x000612b2) bg_popup_fep_char_preview_window_g5

0x7bd0,	// (0x0005b7b3) bg_popup_fep_char_preview_window_g6

0xd6d7,	// (0x000612ba) bg_popup_fep_char_preview_window_g7

0xd6df,	// (0x000612c2) bg_popup_fep_char_preview_window_g8

0xd6e7,	// (0x000612ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x000639cb) bg_popup_fep_char_preview_window_g

0x722e,	// (0x0005ae11) cell_vkb2_top_candi_pane_g1_ParamLimits

0x722e,	// (0x0005ae11) cell_vkb2_top_candi_pane_g1

0x723c,	// (0x0005ae1f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x723c,	// (0x0005ae1f) cell_vkb2_top_candi_pane_g2

0xbdc8,	// (0x0005f9ab) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbdc8,	// (0x0005f9ab) cell_vkb2_top_candi_pane_g3

0x7bd8,	// (0x0005b7bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7bd8,	// (0x0005b7bb) cell_vkb2_top_candi_pane_g4

0xb989,	// (0x0005f56c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb989,	// (0x0005f56c) cell_vkb2_top_candi_pane_g5

0x7bf9,	// (0x0005b7dc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7bf9,	// (0x0005b7dc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x000639de) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x000639de) cell_vkb2_top_candi_pane_g

0x7c07,	// (0x0005b7ea) cell_vkb2_top_candi_pane_t1

0x6d93,	// (0x0005a976) aid_size_touch_slider_mark_ParamLimits

0x6d93,	// (0x0005a976) aid_size_touch_slider_mark

0xd2db,	// (0x00060ebe) grid_graphic2_catg_pane_ParamLimits

0xd2db,	// (0x00060ebe) grid_graphic2_catg_pane

0xd379,	// (0x00060f5c) popup_grid_graphic2_window_t1_ParamLimits

0xd379,	// (0x00060f5c) popup_grid_graphic2_window_t1

0xd38b,	// (0x00060f6e) popup_grid_graphic2_window_t2_ParamLimits

0xd38b,	// (0x00060f6e) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x00063999) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x00063999) popup_grid_graphic2_window_t

0xec17,	// (0x000627fa) bg_button_pane_cp05_ParamLimits

0xd50d,	// (0x000610f0) cell_graphic2_control_pane_g1_ParamLimits

0xd6ef,	// (0x000612d2) cell_graphic2_catg_pane_ParamLimits

0xd6ef,	// (0x000612d2) cell_graphic2_catg_pane

0xbd1c,	// (0x0005f8ff) bg_button_pane_cp12

0xd701,	// (0x000612e4) cell_graphic2_catg_pane_g1

0xcbf8,	// (0x000607db) cell_tb_ext_pane_t1_ParamLimits

0x79ba,	// (0x0005b59d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x79ba,	// (0x0005b59d) vkb2_top_cell_right_narrow_pane

0x79d2,	// (0x0005b5b5) vkb2_top_cell_right_wide_pane_ParamLimits

0x79d2,	// (0x0005b5b5) vkb2_top_cell_right_wide_pane

0x6fb3,	// (0x0005ab96) bg_vkb2_func_pane_ParamLimits

0x6fb3,	// (0x0005ab96) bg_vkb2_func_pane

0x7a43,	// (0x0005b626) vkb2_top_cell_left_pane_g1_ParamLimits

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp03

0x7aa1,	// (0x0005b684) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8a36,	// (0x0005c619) bg_vkb2_func_pane_g1

0x8a3e,	// (0x0005c621) bg_vkb2_func_pane_g2

0x8a4e,	// (0x0005c631) bg_vkb2_func_pane_g3

0x8a46,	// (0x0005c629) bg_vkb2_func_pane_g4

0x8a56,	// (0x0005c639) bg_vkb2_func_pane_g5

0x8a5e,	// (0x0005c641) bg_vkb2_func_pane_g6

0x8a66,	// (0x0005c649) bg_vkb2_func_pane_g7

0x8a6e,	// (0x0005c651) bg_vkb2_func_pane_g8

0x8a2e,	// (0x0005c611) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x000639eb) bg_vkb2_func_pane_g

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp01

0x7a43,	// (0x0005b626) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7a43,	// (0x0005b626) vkb2_top_cell_right_wide_pane_g1

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6fb3,	// (0x0005ab96) bg_vkb2_fuc_pane_cp02

0x7aa1,	// (0x0005b684) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7aa1,	// (0x0005b684) vkb2_top_cell_right_narrow_pane_g1

0xc80f,	// (0x000603f2) aid_touch_area_decrease_ParamLimits

0xc80f,	// (0x000603f2) aid_touch_area_decrease

0xc833,	// (0x00060416) aid_touch_area_increase_ParamLimits

0xc833,	// (0x00060416) aid_touch_area_increase

0xc84b,	// (0x0006042e) aid_touch_area_mute_ParamLimits

0xc84b,	// (0x0006042e) aid_touch_area_mute

0xc867,	// (0x0006044a) aid_touch_area_slider_ParamLimits

0xc867,	// (0x0006044a) aid_touch_area_slider

0xc955,	// (0x00060538) popup_slider_window_g4_ParamLimits

0xc955,	// (0x00060538) popup_slider_window_g4

0xc96d,	// (0x00060550) popup_slider_window_g5_ParamLimits

0xc96d,	// (0x00060550) popup_slider_window_g5

0xc98f,	// (0x00060572) popup_slider_window_g6_ParamLimits

0xc98f,	// (0x00060572) popup_slider_window_g6

0xc9cd,	// (0x000605b0) popup_slider_window_t2_ParamLimits

0xc9cd,	// (0x000605b0) popup_slider_window_t2

0x0001,

0xfd04,	// (0x000638e7) popup_slider_window_t_ParamLimits

0xfd04,	// (0x000638e7) popup_slider_window_t

0xc9e5,	// (0x000605c8) slider_pane_ParamLimits

0xc9e5,	// (0x000605c8) slider_pane

0xd70a,	// (0x000612ed) slider_pane_g1_ParamLimits

0xd70a,	// (0x000612ed) slider_pane_g1

0xd71e,	// (0x00061301) slider_pane_g2_ParamLimits

0xd71e,	// (0x00061301) slider_pane_g2

0xd734,	// (0x00061317) slider_pane_g3_ParamLimits

0xd734,	// (0x00061317) slider_pane_g3

0x0003,

0xfe1b,	// (0x000639fe) slider_pane_g_ParamLimits

0xfe1b,	// (0x000639fe) slider_pane_g

0x693e,	// (0x0005a521) popup_tb_float_extension_window_ParamLimits

0x693e,	// (0x0005a521) popup_tb_float_extension_window

0xd760,	// (0x00061343) aid_size_cell_tb_float_ext

0xbd1c,	// (0x0005f8ff) bg_popup_sub_window_cp28

0xd76c,	// (0x0006134f) grid_tb_float_ext_pane

0xd778,	// (0x0006135b) cell_tb_float_ext_pane_ParamLimits

0xd778,	// (0x0006135b) cell_tb_float_ext_pane

0xd794,	// (0x00061377) cell_tb_float_ext_pane_g1

0xd79d,	// (0x00061380) grid_highlight_pane_cp12

0x7108,	// (0x0005aceb) cell_last_hwr_side_pane_ParamLimits

0x7108,	// (0x0005aceb) cell_last_hwr_side_pane

0xb207,	// (0x0005edea) cell_last_hwr_side_pane_g1

0xd7a6,	// (0x00061389) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x00063a07) cell_last_hwr_side_pane_g

0x7969,	// (0x0005b54c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7969,	// (0x0005b54c) vkb2_area_bottom_space_btn_pane

0x722e,	// (0x0005ae11) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd24d,	// (0x00060e30) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7c07,	// (0x0005b7ea) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7c25,	// (0x0005b808) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7c25,	// (0x0005b808) vkb2_area_bottom_space_btn_pane_g1

0x7c5f,	// (0x0005b842) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7c5f,	// (0x0005b842) vkb2_area_bottom_space_btn_pane_g2

0x7c95,	// (0x0005b878) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7c95,	// (0x0005b878) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x00063a0c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x00063a0c) vkb2_area_bottom_space_btn_pane_g

0x7078,	// (0x0005ac5b) cel_fep_hwr_func_pane_ParamLimits

0x7078,	// (0x0005ac5b) cel_fep_hwr_func_pane

0x70b4,	// (0x0005ac97) cell_hwr_side_button_pane_ParamLimits

0x70b4,	// (0x0005ac97) cell_hwr_side_button_pane

0xcc2c,	// (0x0006080f) aid_area_touch_clock_ParamLimits

0xec17,	// (0x000627fa) bg_uniindi_top_pane_ParamLimits

0xcc40,	// (0x00060823) uniindi_top_pane_g1_ParamLimits

0xcc56,	// (0x00060839) uniindi_top_pane_g2_ParamLimits

0xcc62,	// (0x00060845) uniindi_top_pane_g3_ParamLimits

0xcc73,	// (0x00060856) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0006391f) uniindi_top_pane_g_ParamLimits

0xcc80,	// (0x00060863) uniindi_top_pane_t1_ParamLimits

0xec17,	// (0x000627fa) bg_vkb2_func_pane_cp01_ParamLimits

0xec17,	// (0x000627fa) bg_vkb2_func_pane_cp01

0xd7af,	// (0x00061392) cel_fep_hwr_func_pane_g1_ParamLimits

0xd7af,	// (0x00061392) cel_fep_hwr_func_pane_g1

0xec17,	// (0x000627fa) bg_vkb2_func_pane_cp02_ParamLimits

0xec17,	// (0x000627fa) bg_vkb2_func_pane_cp02

0xd7af,	// (0x00061392) cell_hwr_side_button_pane_g1_ParamLimits

0xd7af,	// (0x00061392) cell_hwr_side_button_pane_g1

0x88a7,	// (0x0005c48a) status_pane_g4_ParamLimits

0x88a7,	// (0x0005c48a) status_pane_g4

0x88c1,	// (0x0005c4a4) status_pane_t1

0xafba,	// (0x0005eb9d) form2_midp_gauge_slider_cont_pane

0xafc2,	// (0x0005eba5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xafd4,	// (0x0005ebb7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xafe6,	// (0x0005ebc9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x000636df) form2_midp_gauge_slider_pane_t_ParamLimits

0xaff8,	// (0x0005ebdb) form2_midp_slider_pane_ParamLimits

0x75cc,	// (0x0005b1af) aid_size_cell_func_vkb2_ParamLimits

0x75cc,	// (0x0005b1af) aid_size_cell_func_vkb2

0xd74c,	// (0x0006132f) slider_pane_g4_ParamLimits

0xd74c,	// (0x0006132f) slider_pane_g4

0x7cdf,	// (0x0005b8c2) form2_midp_gauge_slider_pane_t2_cp01

0x7ced,	// (0x0005b8d0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ced,	// (0x0005b8d0) form2_midp_gauge_slider_pane_t3_cp01

0x7d0a,	// (0x0005b8ed) form2_midp_slider_pane_cp01

0xbd1c,	// (0x0005f8ff) navi_smil_pane

0xd7e8,	// (0x000613cb) navi_smil_pane_g1

0xd7f0,	// (0x000613d3) navi_smil_pane_t1

0xd7bd,	// (0x000613a0) form2_midp_slider_pane_g1

0xd7c6,	// (0x000613a9) form2_midp_slider_pane_g2

0xd7ce,	// (0x000613b1) form2_midp_slider_pane_g3

0xd7bd,	// (0x000613a0) form2_midp_slider_pane_g4

0xd7d6,	// (0x000613b9) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x00063a15) form2_midp_slider_pane_g

0x7ccf,	// (0x0005b8b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ccf,	// (0x0005b8b2) vkb2_area_bottom_space_btn_pane_g4

0x86c6,	// (0x0005c2a9) lc0_navi_pane_ParamLimits

0x86c6,	// (0x0005c2a9) lc0_navi_pane

0x8742,	// (0x0005c325) lc0_stat_indi_pane_ParamLimits

0x8742,	// (0x0005c325) lc0_stat_indi_pane

0x8759,	// (0x0005c33c) ls0_title_pane_ParamLimits

0x8759,	// (0x0005c33c) ls0_title_pane

0xf122,	// (0x00062d05) bg_popup_sub_pane_cp14_ParamLimits

0xcc13,	// (0x000607f6) list_uniindi_pane_ParamLimits

0xcc1f,	// (0x00060802) uniindi_top_pane_ParamLimits

0xccbe,	// (0x000608a1) list_single_uniindi_pane_g1_ParamLimits

0xccd1,	// (0x000608b4) list_single_uniindi_pane_t1_ParamLimits

0x7d13,	// (0x0005b8f6) lc0_stat_clock_pane_ParamLimits

0x7d13,	// (0x0005b8f6) lc0_stat_clock_pane

0xd7fe,	// (0x000613e1) lc0_stat_indi_pane_g1_ParamLimits

0xd7fe,	// (0x000613e1) lc0_stat_indi_pane_g1

0xd80b,	// (0x000613ee) lc0_stat_indi_pane_g2_ParamLimits

0xd80b,	// (0x000613ee) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x00063a20) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x00063a20) lc0_stat_indi_pane_g

0x7d20,	// (0x0005b903) lc0_uni_indicator_pane_ParamLimits

0x7d20,	// (0x0005b903) lc0_uni_indicator_pane

0xd818,	// (0x000613fb) ls0_title_pane_g1_ParamLimits

0xd818,	// (0x000613fb) ls0_title_pane_g1

0xd82c,	// (0x0006140f) ls0_title_pane_t1_ParamLimits

0xd82c,	// (0x0006140f) ls0_title_pane_t1

0x7d2d,	// (0x0005b910) lc0_uni_indicator_pane_g1_ParamLimits

0x7d2d,	// (0x0005b910) lc0_uni_indicator_pane_g1

0xd862,	// (0x00061445) lc0_stat_clock_pane_t1

0x4e6a,	// (0x00058a4d) main_ai5_pane

0xd870,	// (0x00061453) ai5_sk_pane_ParamLimits

0xd870,	// (0x00061453) ai5_sk_pane

0xd87d,	// (0x00061460) cell_ai5_widget_pane_ParamLimits

0xd87d,	// (0x00061460) cell_ai5_widget_pane

0xde1f,	// (0x00061a02) aid_size_cell_widget_grid

0xde2d,	// (0x00061a10) bg_ai5_widget_pane_ParamLimits

0xde2d,	// (0x00061a10) bg_ai5_widget_pane

0xdea5,	// (0x00061a88) cell_ai5_widget_pane_g2

0xdeb9,	// (0x00061a9c) cell_ai5_widget_pane_g3

0xded3,	// (0x00061ab6) cell_ai5_widget_pane_g4

0xdee3,	// (0x00061ac6) cell_ai5_widget_pane_g5

0xdef3,	// (0x00061ad6) cell_ai5_widget_pane_g6

0xdeff,	// (0x00061ae2) cell_ai5_widget_pane_g7

0xdf47,	// (0x00061b2a) cell_ai5_widget_pane_t1_ParamLimits

0xdf47,	// (0x00061b2a) cell_ai5_widget_pane_t1

0xdf64,	// (0x00061b47) cell_ai5_widget_pane_t2_ParamLimits

0xdf64,	// (0x00061b47) cell_ai5_widget_pane_t2

0xdf7c,	// (0x00061b5f) cell_ai5_widget_pane_t3_ParamLimits

0xdf7c,	// (0x00061b5f) cell_ai5_widget_pane_t3

0xdf94,	// (0x00061b77) cell_ai5_widget_pane_t4_ParamLimits

0xdf94,	// (0x00061b77) cell_ai5_widget_pane_t4

0xdfba,	// (0x00061b9d) cell_ai5_widget_pane_t5_ParamLimits

0xdfba,	// (0x00061b9d) cell_ai5_widget_pane_t5

0xdfda,	// (0x00061bbd) cell_ai5_widget_pane_t6_ParamLimits

0xdfda,	// (0x00061bbd) cell_ai5_widget_pane_t6

0xdfec,	// (0x00061bcf) cell_ai5_widget_pane_t7_ParamLimits

0xdfec,	// (0x00061bcf) cell_ai5_widget_pane_t7

0xe005,	// (0x00061be8) cell_ai5_widget_pane_t8_ParamLimits

0xe005,	// (0x00061be8) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00063a3a) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00063a3a) cell_ai5_widget_pane_t

0xe064,	// (0x00061c47) grid_ai5_widget_pane

0xf122,	// (0x00062d05) highlight_cell_ai5_widget_pane_ParamLimits

0xf122,	// (0x00062d05) highlight_cell_ai5_widget_pane

0xe072,	// (0x00061c55) ai5_sk_left_pane

0xe07c,	// (0x00061c5f) ai5_sk_middle_pane

0xe086,	// (0x00061c69) ai5_sk_right_pane

0xe090,	// (0x00061c73) bg_ai5_widget_pane_g1_ParamLimits

0xe090,	// (0x00061c73) bg_ai5_widget_pane_g1

0xe09c,	// (0x00061c7f) bg_ai5_widget_pane_g2_ParamLimits

0xe09c,	// (0x00061c7f) bg_ai5_widget_pane_g2

0xe0a8,	// (0x00061c8b) bg_ai5_widget_pane_g3_ParamLimits

0xe0a8,	// (0x00061c8b) bg_ai5_widget_pane_g3

0xe0b4,	// (0x00061c97) bg_ai5_widget_pane_g4_ParamLimits

0xe0b4,	// (0x00061c97) bg_ai5_widget_pane_g4

0xe0c0,	// (0x00061ca3) bg_ai5_widget_pane_g5_ParamLimits

0xe0c0,	// (0x00061ca3) bg_ai5_widget_pane_g5

0xe0cc,	// (0x00061caf) bg_ai5_widget_pane_g6_ParamLimits

0xe0cc,	// (0x00061caf) bg_ai5_widget_pane_g6

0xe0d8,	// (0x00061cbb) bg_ai5_widget_pane_g7_ParamLimits

0xe0d8,	// (0x00061cbb) bg_ai5_widget_pane_g7

0xe0e4,	// (0x00061cc7) bg_ai5_widget_pane_g8_ParamLimits

0xe0e4,	// (0x00061cc7) bg_ai5_widget_pane_g8

0xe0f0,	// (0x00061cd3) bg_ai5_widget_pane_g9_ParamLimits

0xe0f0,	// (0x00061cd3) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00063a4f) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00063a4f) bg_ai5_widget_pane_g

0xe128,	// (0x00061d0b) cell_shortcut_ai5_widget_pane_ParamLimits

0xe128,	// (0x00061d0b) cell_shortcut_ai5_widget_pane

0x81c3,	// (0x0005bda6) bg_cell_shortcut_ai5_widget_pane

0xe13b,	// (0x00061d1e) cell_grid_ai5_widget_pane_g1

0x81c3,	// (0x0005bda6) highlight_cell_shortcut_ai5_widget_pane

0x8a36,	// (0x0005c619) ai5_sk_left_pane_g1

0xe144,	// (0x00061d27) ai5_sk_left_pane_g2

0xe14c,	// (0x00061d2f) ai5_sk_left_pane_g3

0xe154,	// (0x00061d37) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x00063a62) ai5_sk_left_pane_g

0xe15c,	// (0x00061d3f) ai5_sk_left_pane_t1

0x8a3e,	// (0x0005c621) ai5_sk_right_pane_g1

0xe16a,	// (0x00061d4d) ai5_sk_right_pane_g2

0xe172,	// (0x00061d55) ai5_sk_right_pane_g3

0xe17a,	// (0x00061d5d) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x00063a6b) ai5_sk_right_pane_g

0xe182,	// (0x00061d65) ai5_sk_right_pane_t1

0x8a3e,	// (0x0005c621) ai5_sk_middle_pane_g1

0x8a36,	// (0x0005c619) ai5_sk_middle_pane_g2

0x8a56,	// (0x0005c639) ai5_sk_middle_pane_g3

0xe172,	// (0x00061d55) ai5_sk_middle_pane_g4

0xe14c,	// (0x00061d2f) ai5_sk_middle_pane_g5

0xe190,	// (0x00061d73) ai5_sk_middle_pane_g6

0xe198,	// (0x00061d7b) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x00063a74) ai5_sk_middle_pane_g

0x8552,	// (0x0005c135) aid_touch_area_size_lc0_ParamLimits

0x8552,	// (0x0005c135) aid_touch_area_size_lc0

0x725d,	// (0x0005ae40) cell_hwr_candidate_pane_t1_ParamLimits

0x8570,	// (0x0005c153) aid_touch_navi_pane

0x8859,	// (0x0005c43c) status_dt_navi_pane_ParamLimits

0x8859,	// (0x0005c43c) status_dt_navi_pane

0x8866,	// (0x0005c449) status_dt_sta_pane_ParamLimits

0x8866,	// (0x0005c449) status_dt_sta_pane

0xe1a0,	// (0x00061d83) dt_sta_controll_pane

0xe1ad,	// (0x00061d90) dt_sta_indi_pane

0xe1be,	// (0x00061da1) dt_sta_title_pane

0xec17,	// (0x000627fa) bg_dt_sta_indi_pane_ParamLimits

0xec17,	// (0x000627fa) bg_dt_sta_indi_pane

0xe1d1,	// (0x00061db4) dt_sta_battery_pane

0xe1d9,	// (0x00061dbc) dt_sta_indi_pane_g1

0xe1e2,	// (0x00061dc5) dt_sta_indi_pane_g2

0xe1eb,	// (0x00061dce) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x00063a83) dt_sta_indi_pane_g

0xe1f4,	// (0x00061dd7) dt_sta_signal_pane

0xf122,	// (0x00062d05) bg_dt_sta_title_pane_ParamLimits

0xf122,	// (0x00062d05) bg_dt_sta_title_pane

0xe1fd,	// (0x00061de0) dt_sta_title_pane_g1

0xe205,	// (0x00061de8) dt_sta_title_pane_t1_ParamLimits

0xe205,	// (0x00061de8) dt_sta_title_pane_t1

0xbd1c,	// (0x0005f8ff) bg_dt_sta_control_pane

0xe21a,	// (0x00061dfd) dt_sta_controll_pane_g1

0xe223,	// (0x00061e06) bg_dt_sta_title_pane_g1

0xe22c,	// (0x00061e0f) bg_dt_sta_title_pane_g2

0xe235,	// (0x00061e18) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x00063a8a) bg_dt_sta_title_pane_g

0xb207,	// (0x0005edea) bg_dt_sta_indi_pane_g1

0xe23e,	// (0x00061e21) dt_sta_signal_pane_g1

0xe246,	// (0x00061e29) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x00063a91) dt_sta_signal_pane_g

0xe24e,	// (0x00061e31) dt_sta_battery_pane_g1

0xe257,	// (0x00061e3a) dt_sta_battery_pane_t1

0xb207,	// (0x0005edea) bg_dt_sta_control_pane_g1

0x35a3,	// (0x00057186) fep_china_uni_eep_pane

0x35ab,	// (0x0005718e) fep_china_uni_entry_pane_ParamLimits

0x35bb,	// (0x0005719e) popup_fep_china_uni_window_g1_ParamLimits

0x35cb,	// (0x000571ae) popup_fep_china_uni_window_g2_ParamLimits

0x35cb,	// (0x000571ae) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00063305) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00063305) popup_fep_china_uni_window_g

0xe266,	// (0x00061e49) fep_china_uni_eep_pane_g1

0xe26e,	// (0x00061e51) fep_china_uni_eep_pane_t1

0xd7df,	// (0x000613c2) aid_touch_area_size_smil_player

0x86be,	// (0x0005c2a1) lc0_clock_pane

0x88b5,	// (0x0005c498) status_pane_g5_ParamLimits

0x88b5,	// (0x0005c498) status_pane_g5

0x65c3,	// (0x0005a1a6) popup_keymap_window

0x887b,	// (0x0005c45e) status_icon_pane

0xdeb9,	// (0x00061a9c) cell_ai5_widget_pane_g3_ParamLimits

0xded3,	// (0x00061ab6) cell_ai5_widget_pane_g4_ParamLimits

0xdee3,	// (0x00061ac6) cell_ai5_widget_pane_g5_ParamLimits

0xdf0b,	// (0x00061aee) cell_ai5_widget_pane_g8_ParamLimits

0xdf0b,	// (0x00061aee) cell_ai5_widget_pane_g8

0xdf1f,	// (0x00061b02) cell_ai5_widget_pane_g9_ParamLimits

0xdf1f,	// (0x00061b02) cell_ai5_widget_pane_g9

0xdf33,	// (0x00061b16) cell_ai5_widget_pane_g10_ParamLimits

0xdf33,	// (0x00061b16) cell_ai5_widget_pane_g10

0xe27d,	// (0x00061e60) status_icon_pane_g1

0xbd1c,	// (0x0005f8ff) bg_popup_sub_pane_cp13

0xe285,	// (0x00061e68) popup_keymap_window_t1

0x849b,	// (0x0005c07e) control_pane_g6_ParamLimits

0x849b,	// (0x0005c07e) control_pane_g6

0x84a8,	// (0x0005c08b) control_pane_g7_ParamLimits

0x84a8,	// (0x0005c08b) control_pane_g7

0x84b5,	// (0x0005c098) control_pane_g8_ParamLimits

0x84b5,	// (0x0005c098) control_pane_g8

0xe1a0,	// (0x00061d83) dt_sta_controll_pane_ParamLimits

0xe1ad,	// (0x00061d90) dt_sta_indi_pane_ParamLimits

0xe1be,	// (0x00061da1) dt_sta_title_pane_ParamLimits

0xf064,	// (0x00062c47) aid_size_touch_scroll_bar_cale

0x4f47,	// (0x00058b2a) popup_discreet_window_ParamLimits

0x4f47,	// (0x00058b2a) popup_discreet_window

0x4fd5,	// (0x00058bb8) popup_sk_window

0x90a4,	// (0x0005cc87) bg_popup_sub_pane_cp28_ParamLimits

0x90a4,	// (0x0005cc87) bg_popup_sub_pane_cp28

0xe293,	// (0x00061e76) popup_discreet_window_g1_ParamLimits

0xe293,	// (0x00061e76) popup_discreet_window_g1

0xe2b3,	// (0x00061e96) popup_discreet_window_t1_ParamLimits

0xe2b3,	// (0x00061e96) popup_discreet_window_t1

0xe2d1,	// (0x00061eb4) popup_discreet_window_t2_ParamLimits

0xe2d1,	// (0x00061eb4) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x00063a96) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x00063a96) popup_discreet_window_t

0x7d40,	// (0x0005b923) popup_sk_window_g1

0x7d4a,	// (0x0005b92d) popup_sk_window_g2

0x0001,

0xfeba,	// (0x00063a9d) popup_sk_window_g

0x7d52,	// (0x0005b935) popup_sk_window_t1

0x7d60,	// (0x0005b943) popup_sk_window_t1_copy1

0xdea5,	// (0x00061a88) cell_ai5_widget_pane_g2_ParamLimits

0xe017,	// (0x00061bfa) cell_ai5_widget_pane_t9_ParamLimits

0xe017,	// (0x00061bfa) cell_ai5_widget_pane_t9

0xbd1c,	// (0x0005f8ff) main_fep_fshwr2_pane

0x7d6e,	// (0x0005b951) aid_fshwr2_btn_pane

0x7d7a,	// (0x0005b95d) aid_fshwr2_syb_pane

0x7d7a,	// (0x0005b95d) aid_fshwr2_txt_pane

0x7d86,	// (0x0005b969) fshwr2_func_candi_pane

0x7d99,	// (0x0005b97c) fshwr2_hwr_syb_pane

0x7da7,	// (0x0005b98a) fshwr2_icf_pane

0x4e6a,	// (0x00058a4d) fshwr2_icf_bg_pane

0x7dd6,	// (0x0005b9b9) fshwr2_icf_pane_t1_ParamLimits

0x7dd6,	// (0x0005b9b9) fshwr2_icf_pane_t1

0x3521,	// (0x00057104) fshwr2_func_candi_pane_g1

0xe323,	// (0x00061f06) fshwr2_func_candi_row_pane_ParamLimits

0xe323,	// (0x00061f06) fshwr2_func_candi_row_pane

0x7dee,	// (0x0005b9d1) cell_fshwr2_syb_pane_ParamLimits

0x7dee,	// (0x0005b9d1) cell_fshwr2_syb_pane

0x722e,	// (0x0005ae11) fshwr2_hwr_syb_pane_g1_ParamLimits

0x722e,	// (0x0005ae11) fshwr2_hwr_syb_pane_g1

0x4e6a,	// (0x00058a4d) bg_popup_call_pane_cp01

0x7e04,	// (0x0005b9e7) fshwr2_func_candi_cell_pane_ParamLimits

0x7e04,	// (0x0005b9e7) fshwr2_func_candi_cell_pane

0xe333,	// (0x00061f16) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe333,	// (0x00061f16) fshwr2_func_candi_cell_bg_pane

0x7e55,	// (0x0005ba38) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7e55,	// (0x0005ba38) fshwr2_func_candi_cell_pane_g1

0x7e75,	// (0x0005ba58) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7e75,	// (0x0005ba58) fshwr2_func_candi_cell_pane_t1

0x4e6a,	// (0x00058a4d) bg_button_pane_cp08

0xe33f,	// (0x00061f22) cell_fshwr2_syb_bg_pane

0x7e88,	// (0x0005ba6b) cell_fshwr2_syb_bg_pane_g1

0x7e90,	// (0x0005ba73) cell_fshwr2_syb_bg_pane_t1

0xf122,	// (0x00062d05) main_tmo_pane

0x9bc8,	// (0x0005d7ab) uni_indicator_pane_g1_ParamLimits

0x9bdb,	// (0x0005d7be) uni_indicator_pane_g2_ParamLimits

0x9bed,	// (0x0005d7d0) uni_indicator_pane_g3_ParamLimits

0x9bfc,	// (0x0005d7df) uni_indicator_pane_g4_ParamLimits

0x9bfc,	// (0x0005d7df) uni_indicator_pane_g4

0x9c10,	// (0x0005d7f3) uni_indicator_pane_g5_ParamLimits

0x9c10,	// (0x0005d7f3) uni_indicator_pane_g5

0x9c10,	// (0x0005d7f3) uni_indicator_pane_g6_ParamLimits

0x9c10,	// (0x0005d7f3) uni_indicator_pane_g6

0xf926,	// (0x00063509) uni_indicator_pane_g_ParamLimits

0xc7df,	// (0x000603c2) popup_tmo_note_window_ParamLimits

0xc7df,	// (0x000603c2) popup_tmo_note_window

0x75ae,	// (0x0005b191) fshwr2_bg_pane

0x7e66,	// (0x0005ba49) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7e66,	// (0x0005ba49) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x00063aa2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x00063aa2) fshwr2_func_candi_cell_pane_g

0x7216,	// (0x0005adf9) bg_popup_window_pane_cp01

0x7e9f,	// (0x0005ba82) bg_popup_window_pane_g1_cp01

0xe347,	// (0x00061f2a) bg_popup_window_pane_cp22_ParamLimits

0xe347,	// (0x00061f2a) bg_popup_window_pane_cp22

0xe355,	// (0x00061f38) listscroll_tmo_link_pane_ParamLimits

0xe355,	// (0x00061f38) listscroll_tmo_link_pane

0xe395,	// (0x00061f78) popup_tmo_note_window_g1_ParamLimits

0xe395,	// (0x00061f78) popup_tmo_note_window_g1

0xe3a2,	// (0x00061f85) tmo_note_info_pane_ParamLimits

0xe3a2,	// (0x00061f85) tmo_note_info_pane

0xe3bc,	// (0x00061f9f) list_tmo_note_info_pane_g1_ParamLimits

0xe3bc,	// (0x00061f9f) list_tmo_note_info_pane_g1

0xe3d3,	// (0x00061fb6) list_tmo_note_info_pane_g2_ParamLimits

0xe3d3,	// (0x00061fb6) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x00063aa7) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x00063aa7) list_tmo_note_info_pane_g

0xe3ef,	// (0x00061fd2) list_tmo_note_info_text_pane_ParamLimits

0xe3ef,	// (0x00061fd2) list_tmo_note_info_text_pane

0xe474,	// (0x00062057) list_tmo_link_pane

0xe481,	// (0x00062064) scroll_pane_cp20

0xe48e,	// (0x00062071) list_single_tmo_link_pane_ParamLimits

0xe48e,	// (0x00062071) list_single_tmo_link_pane

0xe49e,	// (0x00062081) list_single_tmo_link_pane_t1

0xe4ac,	// (0x0006208f) list_tmo_note_info_text_pane_t1_ParamLimits

0xe4ac,	// (0x0006208f) list_tmo_note_info_text_pane_t1

0x5af5,	// (0x000596d8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5af5,	// (0x000596d8) aid_size_touch_scroll_bar_cp01

0x5a32,	// (0x00059615) aid_size_touch_slider_marker

0x4fbd,	// (0x00058ba0) popup_settings_window_ParamLimits

0x4fbd,	// (0x00058ba0) popup_settings_window

0x3910,	// (0x000574f3) popup_candi_list_indi_window

0x8570,	// (0x0005c153) aid_touch_navi_pane_ParamLimits

0x7507,	// (0x0005b0ea) rs_clock_indi_pane

0x7510,	// (0x0005b0f3) sctrl_sk_bottom_pane_ParamLimits

0x7521,	// (0x0005b104) sctrl_sk_top_pane_ParamLimits

0x7626,	// (0x0005b209) popup_fep_tooltip_window

0xde1f,	// (0x00061a02) aid_size_cell_widget_grid_ParamLimits

0xde90,	// (0x00061a73) cell_ai5_widget_pane_g1_ParamLimits

0xde90,	// (0x00061a73) cell_ai5_widget_pane_g1

0xdef3,	// (0x00061ad6) cell_ai5_widget_pane_g6_ParamLimits

0xdeff,	// (0x00061ae2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x00063a25) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00063a25) cell_ai5_widget_pane_g

0xe046,	// (0x00061c29) cell_ai5_widget_pane_t10_ParamLimits

0xe046,	// (0x00061c29) cell_ai5_widget_pane_t10

0xe064,	// (0x00061c47) grid_ai5_widget_pane_ParamLimits

0xe0fc,	// (0x00061cdf) cell_contacts_ai5_widget_pane_ParamLimits

0xe0fc,	// (0x00061cdf) cell_contacts_ai5_widget_pane

0xe2e6,	// (0x00061ec9) popup_discreet_window_t3_ParamLimits

0xe2e6,	// (0x00061ec9) popup_discreet_window_t3

0x7dbe,	// (0x0005b9a1) popup_fshwr2_char_preview_window_ParamLimits

0x7dbe,	// (0x0005b9a1) popup_fshwr2_char_preview_window

0xe40d,	// (0x00061ff0) tmo_note_info_pane_t1

0xe422,	// (0x00062005) tmo_note_info_pane_t2

0xe43b,	// (0x0006201e) tmo_note_info_pane_t3

0xe450,	// (0x00062033) tmo_note_info_pane_t4

0xe462,	// (0x00062045) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x00063aac) tmo_note_info_pane_t

0xe474,	// (0x00062057) list_tmo_link_pane_ParamLimits

0xe481,	// (0x00062064) scroll_pane_cp20_ParamLimits

0x4e6a,	// (0x00058a4d) bg_popup_fep_char_preview_window_cp01

0xe4c5,	// (0x000620a8) popup_fshwr2_char_preview_window_t1

0xe4d3,	// (0x000620b6) popup_candi_list_indi_window_g1

0xe4dc,	// (0x000620bf) bg_cell_contacts_ai5_widget_pane

0xe4e8,	// (0x000620cb) cell_contacts_ai5_widget_pane_g1

0xe4fd,	// (0x000620e0) cell_contacts_ai5_widget_pane_g2

0xe509,	// (0x000620ec) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x00063ab7) cell_contacts_ai5_widget_pane_g

0xe515,	// (0x000620f8) cell_contacts_ai5_widget_pane_t1

0xf122,	// (0x00062d05) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe58c,	// (0x0006216f) settings_container_pane

0x81c3,	// (0x0005bda6) listscroll_set_pane_copy1

0xa95f,	// (0x0005e542) scroll_pane_cp121_copy1

0xe598,	// (0x0006217b) set_content_pane_copy1

0xe5a0,	// (0x00062183) aid_height_set_list_copy1_ParamLimits

0xe5a0,	// (0x00062183) aid_height_set_list_copy1

0x9fd7,	// (0x0005dbba) aid_size_parent_copy1_ParamLimits

0x9fd7,	// (0x0005dbba) aid_size_parent_copy1

0xe5ac,	// (0x0006218f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe5ac,	// (0x0006218f) button_value_adjust_pane_cp6_copy1

0x84f2,	// (0x0005c0d5) list_highlight_pane_cp2_copy1_ParamLimits

0x84f2,	// (0x0005c0d5) list_highlight_pane_cp2_copy1

0xe5c0,	// (0x000621a3) list_set_pane_copy1_ParamLimits

0xe5c0,	// (0x000621a3) list_set_pane_copy1

0xe527,	// (0x0006210a) main_pane_set_t1_copy1_ParamLimits

0xe527,	// (0x0006210a) main_pane_set_t1_copy1

0xe561,	// (0x00062144) main_pane_set_t2_copy1_ParamLimits

0xe561,	// (0x00062144) main_pane_set_t2_copy1

0xe681,	// (0x00062264) main_pane_set_t3_copy1

0xe68f,	// (0x00062272) main_pane_set_t4_copy1

0xe580,	// (0x00062163) set_content_pane_g1_copy1_ParamLimits

0xe580,	// (0x00062163) set_content_pane_g1_copy1

0xe69d,	// (0x00062280) setting_code_pane_copy1

0xe6a5,	// (0x00062288) setting_slider_graphic_pane_copy1

0xe6a5,	// (0x00062288) setting_slider_pane_copy1

0xe6a5,	// (0x00062288) setting_text_pane_copy1

0xe6a5,	// (0x00062288) setting_volume_pane_copy1

0xe69d,	// (0x00062280) settings_code_pane_cp2_copy1

0xe6ad,	// (0x00062290) settings_code_pane_cp_copy1_ParamLimits

0xe6ad,	// (0x00062290) settings_code_pane_cp_copy1

0x7ea8,	// (0x0005ba8b) volume_set_pane_copy1

0xe6c1,	// (0x000622a4) volume_set_pane_g10_copy1

0xe6cd,	// (0x000622b0) volume_set_pane_g1_copy1

0xe6d7,	// (0x000622ba) volume_set_pane_g2_copy1

0xe6e1,	// (0x000622c4) volume_set_pane_g3_copy1

0xe6eb,	// (0x000622ce) volume_set_pane_g4_copy1

0xe6f5,	// (0x000622d8) volume_set_pane_g5_copy1

0xe6ff,	// (0x000622e2) volume_set_pane_g6_copy1

0xe709,	// (0x000622ec) volume_set_pane_g7_copy1

0xe713,	// (0x000622f6) volume_set_pane_g8_copy1

0xe71d,	// (0x00062300) volume_set_pane_g9_copy1

0xbd7e,	// (0x0005f961) bg_set_opt_pane_cp_copy1_ParamLimits

0xbd7e,	// (0x0005f961) bg_set_opt_pane_cp_copy1

0x7eb4,	// (0x0005ba97) setting_slider_pane_t1_copy1_ParamLimits

0x7eb4,	// (0x0005ba97) setting_slider_pane_t1_copy1

0x7ed2,	// (0x0005bab5) setting_slider_pane_t2_copy1_ParamLimits

0x7ed2,	// (0x0005bab5) setting_slider_pane_t2_copy1

0x7eec,	// (0x0005bacf) setting_slider_pane_t3_copy1_ParamLimits

0x7eec,	// (0x0005bacf) setting_slider_pane_t3_copy1

0x7f04,	// (0x0005bae7) slider_set_pane_copy1_ParamLimits

0x7f04,	// (0x0005bae7) slider_set_pane_copy1

0xf17a,	// (0x00062d5d) set_opt_bg_pane_g1_copy2

0xf182,	// (0x00062d65) set_opt_bg_pane_g2_copy2

0xe727,	// (0x0006230a) set_opt_bg_pane_g3_copy2

0xf192,	// (0x00062d75) set_opt_bg_pane_g4_copy2

0xf19a,	// (0x00062d7d) set_opt_bg_pane_g5_copy2

0xf1a2,	// (0x00062d85) set_opt_bg_pane_g6_copy2

0xe731,	// (0x00062314) set_opt_bg_pane_g7_copy2

0xe73b,	// (0x0006231e) set_opt_bg_pane_g8_copy2

0xe745,	// (0x00062328) set_opt_bg_pane_g9_copy2

0x7f1a,	// (0x0005bafd) aid_size_touch_slider_mark_copy1_ParamLimits

0x7f1a,	// (0x0005bafd) aid_size_touch_slider_mark_copy1

0xe74f,	// (0x00062332) slider_set_pane_g1_copy1

0x7f2e,	// (0x0005bb11) slider_set_pane_g2_copy1

0x6db3,	// (0x0005a996) slider_set_pane_g3_copy1_ParamLimits

0x6db3,	// (0x0005a996) slider_set_pane_g3_copy1

0x6dc7,	// (0x0005a9aa) slider_set_pane_g4_copy1_ParamLimits

0x6dc7,	// (0x0005a9aa) slider_set_pane_g4_copy1

0x6ddf,	// (0x0005a9c2) slider_set_pane_g5_copy1_ParamLimits

0x6ddf,	// (0x0005a9c2) slider_set_pane_g5_copy1

0x6db3,	// (0x0005a996) slider_set_pane_g6_copy1_ParamLimits

0x6db3,	// (0x0005a996) slider_set_pane_g6_copy1

0x7f36,	// (0x0005bb19) slider_set_pane_g7_copy1_ParamLimits

0x7f36,	// (0x0005bb19) slider_set_pane_g7_copy1

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp2_copy1

0xe758,	// (0x0006233b) setting_slider_graphic_pane_g1_copy1

0xe761,	// (0x00062344) setting_slider_graphic_pane_t1_copy1

0xe771,	// (0x00062354) setting_slider_graphic_pane_t2_copy1

0xe781,	// (0x00062364) slider_set_pane_cp_copy1

0xe791,	// (0x00062374) input_focus_pane_cp1_copy1

0xe79a,	// (0x0006237d) list_set_text_pane_copy1

0xe7a2,	// (0x00062385) setting_text_pane_g1_copy1

0x33bc,	// (0x00056f9f) set_text_pane_t1_copy1

0xe791,	// (0x00062374) input_focus_pane_cp2_copy1

0xe7a2,	// (0x00062385) setting_code_pane_g1_copy1

0xe7ab,	// (0x0006238e) setting_code_pane_t1_copy1

0x373e,	// (0x00057321) list_set_graphic_pane_copy1

0xbd30,	// (0x0005f913) bg_set_opt_pane_cp4_copy1

0x3751,	// (0x00057334) list_set_graphic_pane_g1_copy1_ParamLimits

0x3751,	// (0x00057334) list_set_graphic_pane_g1_copy1

0xe7b9,	// (0x0006239c) list_set_graphic_pane_g2_copy1

0x3769,	// (0x0005734c) list_set_graphic_pane_t1_copy1_ParamLimits

0x3769,	// (0x0005734c) list_set_graphic_pane_t1_copy1

0xb207,	// (0x0005edea) rs_clock_indi_pane_g1

0xe7c1,	// (0x000623a4) rs_clock_indi_pane_t1

0xe7cf,	// (0x000623b2) rs_indi_pane

0xe7d7,	// (0x000623ba) rs_indi_pane_g1

0xe7e0,	// (0x000623c3) rs_indi_pane_g2

0xe7e9,	// (0x000623cc) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00063abe) rs_indi_pane_g

0x81c3,	// (0x0005bda6) bg_popup_preview_window_pane_cp03

0xe7f2,	// (0x000623d5) popup_fep_tooltip_window_t1

0xbf87,	// (0x0005fb6a) popup_note2_window_g2_ParamLimits

0xbf87,	// (0x0005fb6a) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00063857) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00063857) popup_note2_window_g

0xc48f,	// (0x00060072) bg_popup_sub_pane_cp11_ParamLimits

0xc49c,	// (0x0006007f) cell_ai3_links_pane_g1_ParamLimits

0xc4b3,	// (0x00060096) cell_ai3_links_pane_t1

0x33bc,	// (0x00056f9f) set_text_pane_t1_copy1_ParamLimits

0x80dc,	// (0x0005bcbf) cell_graphic_popup_pane_cp2_ParamLimits

0x80dc,	// (0x0005bcbf) cell_graphic_popup_pane_cp2

0xe800,	// (0x000623e3) cell_graphic_popup_pane_g1_cp2

0xee77,	// (0x00062a5a) cell_graphic_popup_pane_g2_cp2

0xe808,	// (0x000623eb) cell_graphic_popup_pane_g3_cp2

0xe810,	// (0x000623f3) cell_graphic_popup_pane_t2_cp2

0xee88,	// (0x00062a6b) grid_highlight_pane_cp3_cp2

0xf423,	// (0x00063006) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf122,	// (0x00062d05) main_tmo_pane_ParamLimits

0xc7d3,	// (0x000603b6) popup_tmo_big_image_note_window

0xde7f,	// (0x00061a62) cell_ai5_widget_list_pane

0xde87,	// (0x00061a6a) cell_ai5_widget_lrg_icon_pane

0xe40d,	// (0x00061ff0) tmo_note_info_pane_t1_ParamLimits

0xe422,	// (0x00062005) tmo_note_info_pane_t2_ParamLimits

0xe43b,	// (0x0006201e) tmo_note_info_pane_t3_ParamLimits

0xe450,	// (0x00062033) tmo_note_info_pane_t4_ParamLimits

0xe462,	// (0x00062045) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x00063aac) tmo_note_info_pane_t_ParamLimits

0xe58c,	// (0x0006216f) settings_container_pane_ParamLimits

0xe789,	// (0x0006236c) indicator_popup_pane_cp5

0xe789,	// (0x0006236c) indicator_popup_pane_cp6

0x373e,	// (0x00057321) list_set_graphic_pane_copy1_ParamLimits

0xbd1c,	// (0x0005f8ff) bg_popup_window_pane_cp23

0xe81e,	// (0x00062401) popup_tmo_big_image_note_window_g1

0xe82a,	// (0x0006240d) popup_tmo_big_image_note_window_t1

0xe83a,	// (0x0006241d) popup_tmo_big_image_note_window_t2

0xe84a,	// (0x0006242d) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x00063ac5) popup_tmo_big_image_note_window_t

0xb207,	// (0x0005edea) cell_ai5_widget_lrg_icon_pane_g1

0xe85a,	// (0x0006243d) cell_ai5_widget_lrg_icon_pane_t1

0xe868,	// (0x0006244b) cell_ai5_widget_list_row_pane_ParamLimits

0xe868,	// (0x0006244b) cell_ai5_widget_list_row_pane

0xe880,	// (0x00062463) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe880,	// (0x00062463) cell_ai5_widget_list_row_pane_g1

0xe88d,	// (0x00062470) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe88d,	// (0x00062470) cell_ai5_widget_list_row_pane_t1

0xe8b8,	// (0x0006249b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8b8,	// (0x0006249b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee9,	// (0x00063acc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x00063acc) cell_ai5_widget_list_row_pane_t

0x4e6a,	// (0x00058a4d) main_fep_vtchi_ss_pane

0xe900,	// (0x000624e3) popup_fep_char_pre_window

0xe908,	// (0x000624eb) popup_fep_ituss_window

0xe929,	// (0x0006250c) popup_fep_vkbss_window

0xe955,	// (0x00062538) grid_vkbss_keypad_pane_ParamLimits

0xe955,	// (0x00062538) grid_vkbss_keypad_pane

0xe965,	// (0x00062548) ituss_keypad_pane

0x7f58,	// (0x0005bb3b) aid_vkbss_key_offset_ParamLimits

0x7f58,	// (0x0005bb3b) aid_vkbss_key_offset

0x7f64,	// (0x0005bb47) cell_vkbss_key_pane_ParamLimits

0x7f64,	// (0x0005bb47) cell_vkbss_key_pane

0xe974,	// (0x00062557) bg_cell_vkbss_key_g1_ParamLimits

0xe974,	// (0x00062557) bg_cell_vkbss_key_g1

0xe980,	// (0x00062563) cell_vkbss_key_3p_pane_ParamLimits

0xe980,	// (0x00062563) cell_vkbss_key_3p_pane

0xe994,	// (0x00062577) cell_vkbss_key_g1_ParamLimits

0xe994,	// (0x00062577) cell_vkbss_key_g1

0xe9a8,	// (0x0006258b) cell_vkbss_key_t1_ParamLimits

0xe9a8,	// (0x0006258b) cell_vkbss_key_t1

0x7f7a,	// (0x0005bb5d) cell_ituss_key_pane_ParamLimits

0x7f7a,	// (0x0005bb5d) cell_ituss_key_pane

0xe9d3,	// (0x000625b6) bg_cell_ituss_key_g1_ParamLimits

0xe9d3,	// (0x000625b6) bg_cell_ituss_key_g1

0xe9df,	// (0x000625c2) cell_ituss_key_pane_g1_ParamLimits

0xe9df,	// (0x000625c2) cell_ituss_key_pane_g1

0x7f8b,	// (0x0005bb6e) cell_ituss_key_pane_g2_ParamLimits

0x7f8b,	// (0x0005bb6e) cell_ituss_key_pane_g2

0x0002,

0xfef0,	// (0x00063ad3) cell_ituss_key_pane_g_ParamLimits

0xfef0,	// (0x00063ad3) cell_ituss_key_pane_g

0x7fb7,	// (0x0005bb9a) cell_ituss_key_t1_ParamLimits

0x7fb7,	// (0x0005bb9a) cell_ituss_key_t1

0x7ff1,	// (0x0005bbd4) cell_ituss_key_t2_ParamLimits

0x7ff1,	// (0x0005bbd4) cell_ituss_key_t2

0x8022,	// (0x0005bc05) cell_ituss_key_t3_ParamLimits

0x8022,	// (0x0005bc05) cell_ituss_key_t3

0x7ff1,	// (0x0005bbd4) cell_ituss_key_t4_ParamLimits

0x7ff1,	// (0x0005bbd4) cell_ituss_key_t4

0x0004,

0xfef7,	// (0x00063ada) cell_ituss_key_t_ParamLimits

0xfef7,	// (0x00063ada) cell_ituss_key_t

0xea05,	// (0x000625e8) cell_vkbss_key_3p_pane_g1

0xea0d,	// (0x000625f0) cell_vkbss_key_3p_pane_g2

0xea15,	// (0x000625f8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00063ae5) cell_vkbss_key_3p_pane_g

0x81c3,	// (0x0005bda6) bg_popup_fep_char_preview_window_cp02

0xea1d,	// (0x00062600) popup_fep_char_pre_window_t1

0xde0c,	// (0x000619ef) main_ai5_sk_pane

0xe4dc,	// (0x000620bf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe4e8,	// (0x000620cb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe4fd,	// (0x000620e0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe509,	// (0x000620ec) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x00063ab7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe515,	// (0x000620f8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf122,	// (0x00062d05) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea2b,	// (0x0006260e) main_ai5_sk_pane_g1

0x8edc,	// (0x0005cabf) popup_query_code_window_g1

0xe91e,	// (0x00062501) popup_fep_vkb_icf_pane

0xe93f,	// (0x00062522) popup_fep_vtchi_icf_pane

0xea34,	// (0x00062617) bg_icf_pane

0xea40,	// (0x00062623) list_vkb_icf_pane

0xea4f,	// (0x00062632) bg_icf_pane_cp01

0xea62,	// (0x00062645) vtchi_icf_list_pane

0xea72,	// (0x00062655) list_vkb_icf_pane_t1_ParamLimits

0xea72,	// (0x00062655) list_vkb_icf_pane_t1

0xea88,	// (0x0006266b) vtchi_icf_list_pane_t1_ParamLimits

0xea88,	// (0x0006266b) vtchi_icf_list_pane_t1

0xe908,	// (0x000624eb) popup_fep_ituss_window_ParamLimits

0xe93f,	// (0x00062522) popup_fep_vtchi_icf_pane_ParamLimits

0xe965,	// (0x00062548) ituss_keypad_pane_ParamLimits

0x7f4c,	// (0x0005bb2f) ituss_sks_pane

0xea34,	// (0x00062617) bg_icf_pane_ParamLimits

0xe8e0,	// (0x000624c3) icf_edit_indi_pane_ParamLimits

0xe8e0,	// (0x000624c3) icf_edit_indi_pane

0xea40,	// (0x00062623) list_vkb_icf_pane_ParamLimits

0xea4f,	// (0x00062632) bg_icf_pane_cp01_ParamLimits

0xe8f3,	// (0x000624d6) icf_edit_indi_pane_cp01_ParamLimits

0xe8f3,	// (0x000624d6) icf_edit_indi_pane_cp01

0xea6a,	// (0x0006264d) vtchi_query_pane

0xd7af,	// (0x00061392) icf_edit_indi_pane_g1_ParamLimits

0xd7af,	// (0x00061392) icf_edit_indi_pane_g1

0xeaf7,	// (0x000626da) icf_edit_indi_pane_g2_ParamLimits

0xeaf7,	// (0x000626da) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00063afd) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00063afd) icf_edit_indi_pane_g

0xeb09,	// (0x000626ec) icf_edit_indi_pane_t1

0xeaa0,	// (0x00062683) bg_input_focus_pane_cp042

0xf05b,	// (0x00062c3e) vtchi_button_pane

0xeaa9,	// (0x0006268c) vtchi_query_pane_t1

0xeab7,	// (0x0006269a) vtchi_query_pane_t2

0xeac5,	// (0x000626a8) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00063aec) vtchi_query_pane_t

0x4e6a,	// (0x00058a4d) bg_button_pane_cp13

0xead3,	// (0x000626b6) vtchi_button_pane_g1

0x8065,	// (0x0005bc48) ituss_sks_pane_g1

0x8070,	// (0x0005bc53) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00063af3) ituss_sks_pane_g

0xeadb,	// (0x000626be) ituss_sks_pane_t1

0xeae9,	// (0x000626cc) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00063af8) ituss_sks_pane_t

0xace4,	// (0x0005e8c7) indicator_nsta_pane_cp_g1

0xacec,	// (0x0005e8cf) indicator_nsta_pane_cp_g2

0xacf4,	// (0x0005e8d7) indicator_nsta_pane_cp_g3

0xace4,	// (0x0005e8c7) indicator_nsta_pane_cp_g4

0xacec,	// (0x0005e8cf) indicator_nsta_pane_cp_g5

0xacf4,	// (0x0005e8d7) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00063695) indicator_nsta_pane_cp_g

0xd4fa,	// (0x000610dd) cell_graphic2_pane_t2_ParamLimits

0xd4fa,	// (0x000610dd) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x000639ae) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x000639ae) cell_graphic2_pane_t

0xd527,	// (0x0006110a) cell_graphic2_control_pane_t1

0x5f2e,	// (0x00059b11) signal_pane_g3_ParamLimits

0x5f2e,	// (0x00059b11) signal_pane_g3

0x5f3d,	// (0x00059b20) signal_pane_g4_ParamLimits

0x5f3d,	// (0x00059b20) signal_pane_g4

0xe8ca,	// (0x000624ad) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8ca,	// (0x000624ad) cell_ai5_widget_list_row_pane_t3

0xe9f3,	// (0x000625d6) cell_ituss_key_pane_t1_ParamLimits

0xe9f3,	// (0x000625d6) cell_ituss_key_pane_t1

0x8b4b,	// (0x0005c72e) form_field_data_wide_pane_vc_t2_ParamLimits

0x8b4b,	// (0x0005c72e) form_field_data_wide_pane_vc_t2

0x8b5f,	// (0x0005c742) form_field_data_wide_pane_vc_t3_ParamLimits

0x8b5f,	// (0x0005c742) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x000633f1) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x000633f1) form_field_data_wide_pane_vc_t

0xa99f,	// (0x0005e582) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa99f,	// (0x0005e582) form_field_slider_wide_pane_vc_t3

0xaa75,	// (0x0005e658) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaa75,	// (0x0005e658) form_field_popup_wide_pane_vc_t2

0xaa8c,	// (0x0005e66f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaa8c,	// (0x0005e66f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00063684) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00063684) form_field_popup_wide_pane_vc_t

0x7d6e,	// (0x0005b951) aid_fshwr2_btn_pane_ParamLimits

0x7d7a,	// (0x0005b95d) aid_fshwr2_syb_pane_ParamLimits

0x7d7a,	// (0x0005b95d) aid_fshwr2_txt_pane_ParamLimits

0x75ae,	// (0x0005b191) fshwr2_bg_pane_ParamLimits

0x7d86,	// (0x0005b969) fshwr2_func_candi_pane_ParamLimits

0x7d99,	// (0x0005b97c) fshwr2_hwr_syb_pane_ParamLimits

0x7da7,	// (0x0005b98a) fshwr2_icf_pane_ParamLimits

0x9dc8,	// (0x0005d9ab) list_double_graphic_pane_vc_g4_ParamLimits

0x9dc8,	// (0x0005d9ab) list_double_graphic_pane_vc_g4

0x7fab,	// (0x0005bb8e) cell_ituss_key_pane_g3_ParamLimits

0x7fab,	// (0x0005bb8e) cell_ituss_key_pane_g3

0x8053,	// (0x0005bc36) cell_ituss_key_t5_ParamLimits

0x8053,	// (0x0005bc36) cell_ituss_key_t5

0xe929,	// (0x0006250c) popup_fep_vkbss_window_ParamLimits

0xde16,	// (0x000619f9) aid_cell_ai5_quarter

0xeb09,	// (0x000626ec) icf_edit_indi_pane_t1_ParamLimits

0xecbf,	// (0x000628a2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xecbf,	// (0x000628a2) aid_tch_indicator_popup_pane_cp2

0xecd2,	// (0x000628b5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xecd2,	// (0x000628b5) aid_tch_query_popup_data_pane_cp2

0x8e84,	// (0x0005ca67) aid_tch_query_popup_pane_ParamLimits

0x8e84,	// (0x0005ca67) aid_tch_query_popup_pane

0x8e84,	// (0x0005ca67) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8e84,	// (0x0005ca67) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

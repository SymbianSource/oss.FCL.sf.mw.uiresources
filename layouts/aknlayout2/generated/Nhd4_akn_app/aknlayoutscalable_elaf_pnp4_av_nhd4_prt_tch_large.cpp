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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00043ce4 };

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
0x6354,	// (0x0004a038) Screen

0x6360,	// (0x0004a044) application_window_ParamLimits

0x6360,	// (0x0004a044) application_window

0x09b9,	// (0x0004469d) screen_g1

0x63bc,	// (0x0004a0a0) area_bottom_pane_ParamLimits

0x63bc,	// (0x0004a0a0) area_bottom_pane

0x647c,	// (0x0004a160) area_top_pane_ParamLimits

0x647c,	// (0x0004a160) area_top_pane

0x6510,	// (0x0004a1f4) main_pane_ParamLimits

0x6510,	// (0x0004a1f4) main_pane

0x09c3,	// (0x000446a7) misc_graphics

0x7f9f,	// (0x0004bc83) battery_pane_ParamLimits

0x7f9f,	// (0x0004bc83) battery_pane

0xa2e7,	// (0x0004dfcb) bg_status_flat_pane_g8

0xa2ef,	// (0x0004dfd3) bg_status_flat_pane_g9

0x8067,	// (0x0004bd4b) context_pane_ParamLimits

0x8067,	// (0x0004bd4b) context_pane

0x817d,	// (0x0004be61) navi_pane_ParamLimits

0x817d,	// (0x0004be61) navi_pane

0x985b,	// (0x0004d53f) signal_pane_ParamLimits

0x985b,	// (0x0004d53f) signal_pane

0x0008,

0xf84f,	// (0x00053533) bg_status_flat_pane_g

0x98c8,	// (0x0004d5ac) status_pane_g1_ParamLimits

0x98c8,	// (0x0004d5ac) status_pane_g1

0x98dc,	// (0x0004d5c0) status_pane_g2_ParamLimits

0x98dc,	// (0x0004d5c0) status_pane_g2

0x98e8,	// (0x0004d5cc) status_pane_g3_ParamLimits

0x98e8,	// (0x0004d5cc) status_pane_g3

0x0004,

0xf776,	// (0x0005345a) status_pane_g_ParamLimits

0xf776,	// (0x0005345a) status_pane_g

0x991c,	// (0x0004d600) title_pane_ParamLimits

0x991c,	// (0x0004d600) title_pane

0x9959,	// (0x0004d63d) uni_indicator_pane_ParamLimits

0x9959,	// (0x0004d63d) uni_indicator_pane

0x17bc,	// (0x000454a0) bg_list_pane_ParamLimits

0x17bc,	// (0x000454a0) bg_list_pane

0x7964,	// (0x0004b648) find_pane

0x0f17,	// (0x00044bfb) listscroll_app_pane_ParamLimits

0x0f17,	// (0x00044bfb) listscroll_app_pane

0x17dc,	// (0x000454c0) listscroll_form_pane

0x796c,	// (0x0004b650) listscroll_gen_pane_ParamLimits

0x796c,	// (0x0004b650) listscroll_gen_pane

0x7980,	// (0x0004b664) listscroll_set_pane

0x6e82,	// (0x0004ab66) main_idle_act_pane

0x1670,	// (0x00045354) main_idle_trad_pane

0x1670,	// (0x00045354) main_list_empty_pane

0x0f17,	// (0x00044bfb) main_midp_pane

0x17f6,	// (0x000454da) main_pane_g1_ParamLimits

0x17f6,	// (0x000454da) main_pane_g1

0x7988,	// (0x0004b66c) popup_ai_message_window_ParamLimits

0x7988,	// (0x0004b66c) popup_ai_message_window

0x7a2c,	// (0x0004b710) popup_fep_china_uni_window_ParamLimits

0x7a2c,	// (0x0004b710) popup_fep_china_uni_window

0x7a86,	// (0x0004b76a) popup_fep_japan_candidate_window_ParamLimits

0x7a86,	// (0x0004b76a) popup_fep_japan_candidate_window

0x7aa4,	// (0x0004b788) popup_fep_japan_predictive_window_ParamLimits

0x7aa4,	// (0x0004b788) popup_fep_japan_predictive_window

0x7ad4,	// (0x0004b7b8) popup_find_window

0x7ae1,	// (0x0004b7c5) popup_grid_graphic_window_ParamLimits

0x7ae1,	// (0x0004b7c5) popup_grid_graphic_window

0x7b0b,	// (0x0004b7ef) popup_large_graphic_colour_window

0x7b31,	// (0x0004b815) popup_menu_window_ParamLimits

0x7b31,	// (0x0004b815) popup_menu_window

0x7ced,	// (0x0004b9d1) popup_note_image_window

0x7cd9,	// (0x0004b9bd) popup_note_wait_window_ParamLimits

0x7cd9,	// (0x0004b9bd) popup_note_wait_window

0x7cd9,	// (0x0004b9bd) popup_note_window_ParamLimits

0x7cd9,	// (0x0004b9bd) popup_note_window

0x7d43,	// (0x0004ba27) popup_query_code_window_ParamLimits

0x7d43,	// (0x0004ba27) popup_query_code_window

0x7d57,	// (0x0004ba3b) popup_query_data_code_window_ParamLimits

0x7d57,	// (0x0004ba3b) popup_query_data_code_window

0x7d74,	// (0x0004ba58) popup_query_data_window_ParamLimits

0x7d74,	// (0x0004ba58) popup_query_data_window

0x7d90,	// (0x0004ba74) popup_query_sat_info_window_ParamLimits

0x7d90,	// (0x0004ba74) popup_query_sat_info_window

0x7dc9,	// (0x0004baad) popup_snote_single_graphic_window_ParamLimits

0x7dc9,	// (0x0004baad) popup_snote_single_graphic_window

0x7dc9,	// (0x0004baad) popup_snote_single_text_window_ParamLimits

0x7dc9,	// (0x0004baad) popup_snote_single_text_window

0x7dde,	// (0x0004bac2) popup_sub_window_general

0x7f0e,	// (0x0004bbf2) popup_window_general_ParamLimits

0x7f0e,	// (0x0004bbf2) popup_window_general

0x7f23,	// (0x0004bc07) power_save_pane

0x77cf,	// (0x0004b4b3) control_pane_g1_ParamLimits

0x77cf,	// (0x0004b4b3) control_pane_g1

0x77f6,	// (0x0004b4da) control_pane_g2_ParamLimits

0x77f6,	// (0x0004b4da) control_pane_g2

0x17a6,	// (0x0004548a) control_pane_g3_ParamLimits

0x17a6,	// (0x0004548a) control_pane_g3

0x0007,

0xf75e,	// (0x00053442) control_pane_g_ParamLimits

0xf75e,	// (0x00053442) control_pane_g

0x7867,	// (0x0004b54b) control_pane_t1_ParamLimits

0x7867,	// (0x0004b54b) control_pane_t1

0x78bb,	// (0x0004b59f) control_pane_t2_ParamLimits

0x78bb,	// (0x0004b59f) control_pane_t2

0x0002,

0xf76f,	// (0x00053453) control_pane_t_ParamLimits

0xf76f,	// (0x00053453) control_pane_t

0x7728,	// (0x0004b40c) navi_navi_volume_pane_cp1

0x7730,	// (0x0004b414) status_small_icon_pane

0x1772,	// (0x00045456) status_small_pane_g1_ParamLimits

0x1772,	// (0x00045456) status_small_pane_g1

0x7738,	// (0x0004b41c) status_small_pane_g2_ParamLimits

0x7738,	// (0x0004b41c) status_small_pane_g2

0x7744,	// (0x0004b428) status_small_pane_g3_ParamLimits

0x7744,	// (0x0004b428) status_small_pane_g3

0x7750,	// (0x0004b434) status_small_pane_g4_ParamLimits

0x7750,	// (0x0004b434) status_small_pane_g4

0x775c,	// (0x0004b440) status_small_pane_g5_ParamLimits

0x775c,	// (0x0004b440) status_small_pane_g5

0x776a,	// (0x0004b44e) status_small_pane_g6_ParamLimits

0x776a,	// (0x0004b44e) status_small_pane_g6

0x0007,

0xf74d,	// (0x00053431) status_small_pane_g_ParamLimits

0xf74d,	// (0x00053431) status_small_pane_g

0x7799,	// (0x0004b47d) status_small_pane_t1

0x77bb,	// (0x0004b49f) status_small_wait_pane_ParamLimits

0x77bb,	// (0x0004b49f) status_small_wait_pane

0x7255,	// (0x0004af39) aid_levels_signal_ParamLimits

0x7255,	// (0x0004af39) aid_levels_signal

0x7267,	// (0x0004af4b) signal_pane_g1_ParamLimits

0x7267,	// (0x0004af4b) signal_pane_g1

0x727c,	// (0x0004af60) signal_pane_g2_ParamLimits

0x727c,	// (0x0004af60) signal_pane_g2

0x0003,

0xf6de,	// (0x000533c2) signal_pane_g_ParamLimits

0xf6de,	// (0x000533c2) signal_pane_g

0x127f,	// (0x00044f63) context_pane_g1

0x6751,	// (0x0004a435) title_pane_g1

0x677b,	// (0x0004a45f) title_pane_t1

0x09d9,	// (0x000446bd) title_pane_t2

0x09ff,	// (0x000446e3) title_pane_t3

0x0002,

0xf532,	// (0x00053216) title_pane_t

0x9971,	// (0x0004d655) aid_levels_battery_ParamLimits

0x9971,	// (0x0004d655) aid_levels_battery

0x9985,	// (0x0004d669) battery_pane_g1_ParamLimits

0x9985,	// (0x0004d669) battery_pane_g1

0x999b,	// (0x0004d67f) battery_pane_g2_ParamLimits

0x999b,	// (0x0004d67f) battery_pane_g2

0x0001,

0xf781,	// (0x00053465) battery_pane_g_ParamLimits

0xf781,	// (0x00053465) battery_pane_g

0xac0b,	// (0x0004e8ef) uni_indicator_pane_g1

0xac1e,	// (0x0004e902) uni_indicator_pane_g2

0xac30,	// (0x0004e914) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000535db) uni_indicator_pane_g

0x1528,	// (0x0004520c) navi_icon_pane_ParamLimits

0x1528,	// (0x0004520c) navi_icon_pane

0x1471,	// (0x00045155) navi_midp_pane

0x1544,	// (0x00045228) navi_navi_pane

0x154e,	// (0x00045232) navi_text_pane_ParamLimits

0x154e,	// (0x00045232) navi_text_pane

0x09b9,	// (0x0004469d) status_small_wait_pane_g1

0x0c50,	// (0x00044934) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000535d6) status_small_wait_pane_g

0xa932,	// (0x0004e616) navi_navi_icon_text_pane

0xa93a,	// (0x0004e61e) navi_navi_pane_g1_ParamLimits

0xa93a,	// (0x0004e61e) navi_navi_pane_g1

0xa94c,	// (0x0004e630) navi_navi_pane_g2_ParamLimits

0xa94c,	// (0x0004e630) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000535a4) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000535a4) navi_navi_pane_g

0xa95e,	// (0x0004e642) navi_navi_tabs_pane

0xa967,	// (0x0004e64b) navi_navi_text_pane

0xa932,	// (0x0004e616) navi_navi_volume_pane

0xa90e,	// (0x0004e5f2) navi_text_pane_t1

0xa902,	// (0x0004e5e6) navi_icon_pane_g1

0xa855,	// (0x0004e539) navi_navi_text_pane_t1

0x8469,	// (0x0004c14d) navi_navi_volume_pane_g1

0x8471,	// (0x0004c155) volume_small_pane

0xa7bb,	// (0x0004e49f) navi_navi_icon_text_pane_g1

0xa7c3,	// (0x0004e4a7) navi_navi_icon_text_pane_t1

0x1544,	// (0x00045228) navi_tabs_2_long_pane

0x1544,	// (0x00045228) navi_tabs_2_pane

0x1544,	// (0x00045228) navi_tabs_3_long_pane

0x1544,	// (0x00045228) navi_tabs_3_pane

0x1544,	// (0x00045228) navi_tabs_4_pane

0x8449,	// (0x0004c12d) tabs_2_active_pane_ParamLimits

0x8449,	// (0x0004c12d) tabs_2_active_pane

0x8459,	// (0x0004c13d) tabs_2_passive_pane_ParamLimits

0x8459,	// (0x0004c13d) tabs_2_passive_pane

0x8417,	// (0x0004c0fb) tabs_3_active_pane_ParamLimits

0x8417,	// (0x0004c0fb) tabs_3_active_pane

0x8427,	// (0x0004c10b) tabs_3_passive_pane_ParamLimits

0x8427,	// (0x0004c10b) tabs_3_passive_pane

0x8438,	// (0x0004c11c) tabs_3_passive_pane_cp_ParamLimits

0x8438,	// (0x0004c11c) tabs_3_passive_pane_cp

0x83d3,	// (0x0004c0b7) tabs_4_active_pane_ParamLimits

0x83d3,	// (0x0004c0b7) tabs_4_active_pane

0x83e4,	// (0x0004c0c8) tabs_4_passive_pane_ParamLimits

0x83e4,	// (0x0004c0c8) tabs_4_passive_pane

0x83f5,	// (0x0004c0d9) tabs_4_passive_pane_cp_ParamLimits

0x83f5,	// (0x0004c0d9) tabs_4_passive_pane_cp

0x8406,	// (0x0004c0ea) tabs_4_passive_pane_cp2_ParamLimits

0x8406,	// (0x0004c0ea) tabs_4_passive_pane_cp2

0x83af,	// (0x0004c093) tabs_2_long_active_pane_ParamLimits

0x83af,	// (0x0004c093) tabs_2_long_active_pane

0x83c1,	// (0x0004c0a5) tabs_2_long_passive_pane_ParamLimits

0x83c1,	// (0x0004c0a5) tabs_2_long_passive_pane

0x836a,	// (0x0004c04e) tabs_3_long_active_pane_ParamLimits

0x836a,	// (0x0004c04e) tabs_3_long_active_pane

0x8383,	// (0x0004c067) tabs_3_long_passive_pane_ParamLimits

0x8383,	// (0x0004c067) tabs_3_long_passive_pane

0x8396,	// (0x0004c07a) tabs_3_long_passive_pane_cp_ParamLimits

0x8396,	// (0x0004c07a) tabs_3_long_passive_pane_cp

0x8310,	// (0x0004bff4) volume_small_pane_g1

0x8319,	// (0x0004bffd) volume_small_pane_g2

0x8322,	// (0x0004c006) volume_small_pane_g3

0x832b,	// (0x0004c00f) volume_small_pane_g4

0x8334,	// (0x0004c018) volume_small_pane_g5

0x833d,	// (0x0004c021) volume_small_pane_g6

0x8346,	// (0x0004c02a) volume_small_pane_g7

0x834f,	// (0x0004c033) volume_small_pane_g8

0x8358,	// (0x0004c03c) volume_small_pane_g9

0x8361,	// (0x0004c045) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00053570) volume_small_pane_g

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp2_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp2

0x67e3,	// (0x0004a4c7) tabs_3_active_pane_g1

0x67eb,	// (0x0004a4cf) tabs_3_active_pane_t1

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp2_ParamLimits

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp2

0x67e3,	// (0x0004a4c7) tabs_3_passive_pane_g1

0x67eb,	// (0x0004a4cf) tabs_3_passive_pane_t1

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp3_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp3

0x67fd,	// (0x0004a4e1) tabs_4_active_pane_g1

0x6805,	// (0x0004a4e9) tabs_4_active_pane_t1

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp3_ParamLimits

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp3

0x67fd,	// (0x0004a4e1) tabs_4_1_passive_pane_g1

0x6805,	// (0x0004a4e9) tabs_4_1_passive_pane_t1

0x0f17,	// (0x00044bfb) list_highlight_pane_cp2

0xae73,	// (0x0004eb57) list_set_pane_ParamLimits

0xae73,	// (0x0004eb57) list_set_pane

0xaf15,	// (0x0004ebf9) main_pane_set_t1_ParamLimits

0xaf15,	// (0x0004ebf9) main_pane_set_t1

0xaf35,	// (0x0004ec19) main_pane_set_t2_ParamLimits

0xaf35,	// (0x0004ec19) main_pane_set_t2

0xaf49,	// (0x0004ec2d) main_pane_set_t3_ParamLimits

0xaf49,	// (0x0004ec2d) main_pane_set_t3

0xaf5b,	// (0x0004ec3f) main_pane_set_t4_ParamLimits

0xaf5b,	// (0x0004ec3f) main_pane_set_t4

0x0003,

0xf95c,	// (0x00053640) main_pane_set_t_ParamLimits

0xf95c,	// (0x00053640) main_pane_set_t

0xaf6d,	// (0x0004ec51) setting_code_pane

0xaf79,	// (0x0004ec5d) setting_slider_graphic_pane

0xaf79,	// (0x0004ec5d) setting_slider_pane

0xaf79,	// (0x0004ec5d) setting_text_pane

0xaf79,	// (0x0004ec5d) setting_volume_pane

0x6817,	// (0x0004a4fb) volume_set_pane

0x0a1f,	// (0x00044703) bg_set_opt_pane_cp

0x681f,	// (0x0004a503) setting_slider_pane_t1

0x6838,	// (0x0004a51c) setting_slider_pane_t2

0x6852,	// (0x0004a536) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005321d) setting_slider_pane_t

0x686a,	// (0x0004a54e) slider_set_pane

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp2

0x0a2d,	// (0x00044711) setting_slider_graphic_pane_g1

0x6880,	// (0x0004a564) setting_slider_graphic_pane_t1

0x6890,	// (0x0004a574) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00053224) setting_slider_graphic_pane_t

0x68a0,	// (0x0004a584) slider_set_pane_cp

0x09c3,	// (0x000446a7) input_focus_pane_cp1

0xae32,	// (0x0004eb16) list_set_text_pane

0x09b9,	// (0x0004469d) setting_text_pane_g1

0x09c3,	// (0x000446a7) input_focus_pane_cp2

0x09b9,	// (0x0004469d) setting_code_pane_g1

0x0a36,	// (0x0004471a) setting_code_pane_t1

0x5492,	// (0x00049176) set_text_pane_t1_ParamLimits

0x5492,	// (0x00049176) set_text_pane_t1

0x0e2d,	// (0x00044b11) set_opt_bg_pane_g1

0x0e35,	// (0x00044b19) set_opt_bg_pane_g2

0xae0c,	// (0x0004eaf0) set_opt_bg_pane_g3

0x0e45,	// (0x00044b29) set_opt_bg_pane_g4

0x0e4d,	// (0x00044b31) set_opt_bg_pane_g5

0x0e55,	// (0x00044b39) set_opt_bg_pane_g6

0xae16,	// (0x0004eafa) set_opt_bg_pane_g7

0xae1e,	// (0x0004eb02) set_opt_bg_pane_g8

0xae28,	// (0x0004eb0c) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0005362d) set_opt_bg_pane_g

0xadff,	// (0x0004eae3) slider_set_pane_g1

0x84de,	// (0x0004c1c2) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0005361e) slider_set_pane_g

0x847a,	// (0x0004c15e) volume_set_pane_g1

0x8482,	// (0x0004c166) volume_set_pane_g2

0x848a,	// (0x0004c16e) volume_set_pane_g3

0x8492,	// (0x0004c176) volume_set_pane_g4

0x849a,	// (0x0004c17e) volume_set_pane_g5

0x84a2,	// (0x0004c186) volume_set_pane_g6

0x84aa,	// (0x0004c18e) volume_set_pane_g7

0x84b2,	// (0x0004c196) volume_set_pane_g8

0x84ba,	// (0x0004c19e) volume_set_pane_g9

0x84c2,	// (0x0004c1a6) volume_set_pane_g10

0x0009,

0xf912,	// (0x000535f6) volume_set_pane_g

0x68a8,	// (0x0004a58c) indicator_pane_ParamLimits

0x68a8,	// (0x0004a58c) indicator_pane

0x68b4,	// (0x0004a598) main_idle_pane_g2_ParamLimits

0x68b4,	// (0x0004a598) main_idle_pane_g2

0x68dc,	// (0x0004a5c0) main_pane_idle_g1_ParamLimits

0x68dc,	// (0x0004a5c0) main_pane_idle_g1

0x0a44,	// (0x00044728) popup_clock_digital_analogue_window_ParamLimits

0x0a44,	// (0x00044728) popup_clock_digital_analogue_window

0x68e9,	// (0x0004a5cd) soft_indicator_pane_ParamLimits

0x68e9,	// (0x0004a5cd) soft_indicator_pane

0x68f5,	// (0x0004a5d9) wallpaper_pane_ParamLimits

0x68f5,	// (0x0004a5d9) wallpaper_pane

0x09b9,	// (0x0004469d) wallpaper_pane_g1

0x6901,	// (0x0004a5e5) indicator_pane_g1_ParamLimits

0x6901,	// (0x0004a5e5) indicator_pane_g1

0xb1e7,	// (0x0004eecb) navi_navi_icon_text_pane_srt_g1

0x0a72,	// (0x00044756) soft_indicator_pane_t1

0x0a8c,	// (0x00044770) aid_ps_area_pane

0x690d,	// (0x0004a5f1) aid_ps_clock_pane

0x0a9d,	// (0x00044781) aid_ps_indicator_pane

0x0aa9,	// (0x0004478d) indicator_ps_pane_ParamLimits

0x0aa9,	// (0x0004478d) indicator_ps_pane

0x0ab8,	// (0x0004479c) power_save_pane_g1_ParamLimits

0x0ab8,	// (0x0004479c) power_save_pane_g1

0x0ac4,	// (0x000447a8) power_save_pane_g2_ParamLimits

0x0ac4,	// (0x000447a8) power_save_pane_g2

0x6370,	// (0x0004a054) aid_navinavi_width_pane

0x0a8c,	// (0x00044770) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00053229) power_save_pane_g_ParamLimits

0xf545,	// (0x00053229) power_save_pane_g

0x0ad2,	// (0x000447b6) power_save_pane_t1_ParamLimits

0x0ad2,	// (0x000447b6) power_save_pane_t1

0x690d,	// (0x0004a5f1) aid_ps_clock_pane_ParamLimits

0x0a9d,	// (0x00044781) aid_ps_indicator_pane_ParamLimits

0x0ae4,	// (0x000447c8) power_save_pane_t4_ParamLimits

0x0ae4,	// (0x000447c8) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005322e) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005322e) power_save_pane_t

0x0b0e,	// (0x000447f2) power_save_t3_ParamLimits

0x0b0e,	// (0x000447f2) power_save_t3

0x0af9,	// (0x000447dd) power_save_t2_ParamLimits

0x0af9,	// (0x000447dd) power_save_t2

0x0b23,	// (0x00044807) indicator_ps_pane_g1

0x691b,	// (0x0004a5ff) ai_gene_pane_ParamLimits

0x691b,	// (0x0004a5ff) ai_gene_pane

0x6927,	// (0x0004a60b) ai_links_pane_ParamLimits

0x6927,	// (0x0004a60b) ai_links_pane

0x6933,	// (0x0004a617) indicator_pane_cp1_ParamLimits

0x6933,	// (0x0004a617) indicator_pane_cp1

0x693f,	// (0x0004a623) main_pane_idle_g1_cp_ParamLimits

0x693f,	// (0x0004a623) main_pane_idle_g1_cp

0x694b,	// (0x0004a62f) popup_ai_links_title_window

0x6954,	// (0x0004a638) soft_indicator_pane_cp1_ParamLimits

0x6954,	// (0x0004a638) soft_indicator_pane_cp1

0xabf9,	// (0x0004e8dd) ai_links_pane_g1

0xac02,	// (0x0004e8e6) grid_ai_links_pane

0xabdc,	// (0x0004e8c0) ai_gene_pane_1

0xabe7,	// (0x0004e8cb) ai_gene_pane_2

0xabf0,	// (0x0004e8d4) list_highlight_pane_cp4

0xabc0,	// (0x0004e8a4) cell_ai_link_pane_ParamLimits

0xabc0,	// (0x0004e8a4) cell_ai_link_pane

0xabb8,	// (0x0004e89c) cell_ai_link_pane_g1

0x0c50,	// (0x00044934) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000535d1) cell_ai_link_pane_g

0x09c3,	// (0x000446a7) grid_highlight_cp2

0x09c3,	// (0x000446a7) bg_popup_sub_pane_cp1

0x0b3a,	// (0x0004481e) popup_ai_links_title_window_t1

0xab08,	// (0x0004e7ec) ai_gene_pane_1_g1_ParamLimits

0xab08,	// (0x0004e7ec) ai_gene_pane_1_g1

0xab14,	// (0x0004e7f8) ai_gene_pane_1_g2_ParamLimits

0xab14,	// (0x0004e7f8) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000535c7) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000535c7) ai_gene_pane_1_g

0xab21,	// (0x0004e805) ai_gene_pane_1_t1_ParamLimits

0xab21,	// (0x0004e805) ai_gene_pane_1_t1

0xab55,	// (0x0004e839) grid_ai_soft_ind_pane

0xaaf3,	// (0x0004e7d7) ai_gene_pane_2_t1_ParamLimits

0xaaf3,	// (0x0004e7d7) ai_gene_pane_2_t1

0x6960,	// (0x0004a644) main_pane_empty_t1_ParamLimits

0x6960,	// (0x0004a644) main_pane_empty_t1

0x6978,	// (0x0004a65c) main_pane_empty_t2_ParamLimits

0x6978,	// (0x0004a65c) main_pane_empty_t2

0x698d,	// (0x0004a671) main_pane_empty_t3_ParamLimits

0x698d,	// (0x0004a671) main_pane_empty_t3

0x699f,	// (0x0004a683) main_pane_empty_t4_ParamLimits

0x699f,	// (0x0004a683) main_pane_empty_t4

0x69b1,	// (0x0004a695) main_pane_empty_t5_ParamLimits

0x69b1,	// (0x0004a695) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00053233) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00053233) main_pane_empty_t

0x0eb2,	// (0x00044b96) bg_popup_window_pane_ParamLimits

0x0eb2,	// (0x00044b96) bg_popup_window_pane

0xa863,	// (0x0004e547) find_popup_pane_cp2_ParamLimits

0xa863,	// (0x0004e547) find_popup_pane_cp2

0xa86f,	// (0x0004e553) heading_pane_ParamLimits

0xa86f,	// (0x0004e553) heading_pane

0x09c3,	// (0x000446a7) bg_popup_sub_pane

0xa7dd,	// (0x0004e4c1) bg_popup_window_pane_g1_ParamLimits

0xa7dd,	// (0x0004e4c1) bg_popup_window_pane_g1

0xa7e9,	// (0x0004e4cd) bg_popup_window_pane_g2_ParamLimits

0xa7e9,	// (0x0004e4cd) bg_popup_window_pane_g2

0xa7f5,	// (0x0004e4d9) bg_popup_window_pane_g3_ParamLimits

0xa7f5,	// (0x0004e4d9) bg_popup_window_pane_g3

0xa801,	// (0x0004e4e5) bg_popup_window_pane_g4_ParamLimits

0xa801,	// (0x0004e4e5) bg_popup_window_pane_g4

0xa80d,	// (0x0004e4f1) bg_popup_window_pane_g5_ParamLimits

0xa80d,	// (0x0004e4f1) bg_popup_window_pane_g5

0xa819,	// (0x0004e4fd) bg_popup_window_pane_g6_ParamLimits

0xa819,	// (0x0004e4fd) bg_popup_window_pane_g6

0xa825,	// (0x0004e509) bg_popup_window_pane_g7_ParamLimits

0xa825,	// (0x0004e509) bg_popup_window_pane_g7

0xa831,	// (0x0004e515) bg_popup_window_pane_g8_ParamLimits

0xa831,	// (0x0004e515) bg_popup_window_pane_g8

0xa83d,	// (0x0004e521) bg_popup_window_pane_g9_ParamLimits

0xa83d,	// (0x0004e521) bg_popup_window_pane_g9

0xa849,	// (0x0004e52d) bg_popup_window_pane_g10_ParamLimits

0xa849,	// (0x0004e52d) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0005358f) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0005358f) bg_popup_window_pane_g

0xa772,	// (0x0004e456) bg_popup_heading_pane_ParamLimits

0xa772,	// (0x0004e456) bg_popup_heading_pane

0x8611,	// (0x0004c2f5) tabs_4_passive_pane_cp_srt_ParamLimits

0x8611,	// (0x0004c2f5) tabs_4_passive_pane_cp_srt

0x8623,	// (0x0004c307) tabs_4_passive_pane_srt_ParamLimits

0xa786,	// (0x0004e46a) heading_pane_g2

0x8623,	// (0x0004c307) tabs_4_passive_pane_srt

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp3_srt

0xa78e,	// (0x0004e472) heading_pane_t1_ParamLimits

0xa78e,	// (0x0004e472) heading_pane_t1

0xa7a5,	// (0x0004e489) heading_pane_t2_ParamLimits

0xa7a5,	// (0x0004e489) heading_pane_t2

0x0001,

0xf8a6,	// (0x0005358a) heading_pane_t_ParamLimits

0xf8a6,	// (0x0005358a) heading_pane_t

0xa2af,	// (0x0004df93) bg_popup_heading_pane_g1

0xa35e,	// (0x0004e042) bg_popup_heading_pane_g2

0xa368,	// (0x0004e04c) bg_popup_heading_pane_g3

0xa372,	// (0x0004e056) bg_popup_heading_pane_g4

0xa37c,	// (0x0004e060) bg_popup_heading_pane_g5

0xa386,	// (0x0004e06a) bg_popup_heading_pane_g6

0xa38e,	// (0x0004e072) bg_popup_heading_pane_g7

0xa396,	// (0x0004e07a) bg_popup_heading_pane_g8

0xa3a0,	// (0x0004e084) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00053546) bg_popup_heading_pane_g

0x9a70,	// (0x0004d754) bg_popup_sub_pane_g1

0x9a78,	// (0x0004d75c) bg_popup_sub_pane_g2

0x9a80,	// (0x0004d764) bg_popup_sub_pane_g3

0x9a88,	// (0x0004d76c) bg_popup_sub_pane_g4

0x9a90,	// (0x0004d774) bg_popup_sub_pane_g5

0x9a98,	// (0x0004d77c) bg_popup_sub_pane_g6

0x9aa0,	// (0x0004d784) bg_popup_sub_pane_g7

0x9aa8,	// (0x0004d78c) bg_popup_sub_pane_g8

0x9ab0,	// (0x0004d794) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00053520) bg_popup_sub_pane_g

0x0a11,	// (0x000446f5) bg_popup_window_pane_cp5_ParamLimits

0x0a11,	// (0x000446f5) bg_popup_window_pane_cp5

0x0b57,	// (0x0004483b) popup_note_window_g1_ParamLimits

0x0b57,	// (0x0004483b) popup_note_window_g1

0x0b63,	// (0x00044847) popup_note_window_t1_ParamLimits

0x0b63,	// (0x00044847) popup_note_window_t1

0x0b79,	// (0x0004485d) popup_note_window_t2_ParamLimits

0x0b79,	// (0x0004485d) popup_note_window_t2

0x0b8f,	// (0x00044873) popup_note_window_t3_ParamLimits

0x0b8f,	// (0x00044873) popup_note_window_t3

0x0ba5,	// (0x00044889) popup_note_window_t4_ParamLimits

0x0ba5,	// (0x00044889) popup_note_window_t4

0x0bcd,	// (0x000448b1) popup_note_window_t5_ParamLimits

0x0bcd,	// (0x000448b1) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005323e) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005323e) popup_note_window_t

0x0bf1,	// (0x000448d5) bg_popup_window_pane_cp6_ParamLimits

0x0bf1,	// (0x000448d5) bg_popup_window_pane_cp6

0xa22b,	// (0x0004df0f) popup_note_image_window_g1_ParamLimits

0xa22b,	// (0x0004df0f) popup_note_image_window_g1

0xa237,	// (0x0004df1b) popup_note_image_window_g2_ParamLimits

0xa237,	// (0x0004df1b) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00053514) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00053514) popup_note_image_window_g

0xa250,	// (0x0004df34) popup_note_image_window_t1_ParamLimits

0xa250,	// (0x0004df34) popup_note_image_window_t1

0xa269,	// (0x0004df4d) popup_note_image_window_t2_ParamLimits

0xa269,	// (0x0004df4d) popup_note_image_window_t2

0xa282,	// (0x0004df66) popup_note_image_window_t3_ParamLimits

0xa282,	// (0x0004df66) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00053519) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00053519) popup_note_image_window_t

0xa0f4,	// (0x0004ddd8) bg_popup_window_pane_cp7_ParamLimits

0xa0f4,	// (0x0004ddd8) bg_popup_window_pane_cp7

0xa124,	// (0x0004de08) popup_note_wait_window_g1_ParamLimits

0xa124,	// (0x0004de08) popup_note_wait_window_g1

0xa130,	// (0x0004de14) popup_note_wait_window_g2_ParamLimits

0xa130,	// (0x0004de14) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00053502) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00053502) popup_note_wait_window_g

0xa148,	// (0x0004de2c) popup_note_wait_window_t1_ParamLimits

0xa148,	// (0x0004de2c) popup_note_wait_window_t1

0xa16f,	// (0x0004de53) popup_note_wait_window_t2_ParamLimits

0xa16f,	// (0x0004de53) popup_note_wait_window_t2

0xa18c,	// (0x0004de70) popup_note_wait_window_t3_ParamLimits

0xa18c,	// (0x0004de70) popup_note_wait_window_t3

0xa19f,	// (0x0004de83) popup_note_wait_window_t4_ParamLimits

0xa19f,	// (0x0004de83) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00053509) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00053509) popup_note_wait_window_t

0xa1c4,	// (0x0004dea8) wait_bar_pane_ParamLimits

0xa1c4,	// (0x0004dea8) wait_bar_pane

0x09c3,	// (0x000446a7) wait_anim_pane

0x09c3,	// (0x000446a7) wait_border_pane

0x09b9,	// (0x0004469d) wait_anim_pane_g1

0x09b9,	// (0x0004469d) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x000533bd) wait_anim_pane_g

0xa0a0,	// (0x0004dd84) wait_border_pane_g1

0xa0ab,	// (0x0004dd8f) wait_border_pane_g2

0xa0b4,	// (0x0004dd98) wait_border_pane_g3

0x0002,

0xf817,	// (0x000534fb) wait_border_pane_g

0x9f0b,	// (0x0004dbef) bg_popup_window_pane_cp16_ParamLimits

0x9f0b,	// (0x0004dbef) bg_popup_window_pane_cp16

0xa00b,	// (0x0004dcef) indicator_popup_pane_cp4_ParamLimits

0xa00b,	// (0x0004dcef) indicator_popup_pane_cp4

0xa01f,	// (0x0004dd03) popup_query_data_window_t1_ParamLimits

0xa01f,	// (0x0004dd03) popup_query_data_window_t1

0xa031,	// (0x0004dd15) popup_query_data_window_t2_ParamLimits

0xa031,	// (0x0004dd15) popup_query_data_window_t2

0xa04a,	// (0x0004dd2e) popup_query_data_window_t3_ParamLimits

0xa04a,	// (0x0004dd2e) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000534f4) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000534f4) popup_query_data_window_t

0xa064,	// (0x0004dd48) query_popup_data_pane_ParamLimits

0xa064,	// (0x0004dd48) query_popup_data_pane

0xa078,	// (0x0004dd5c) query_popup_data_pane_cp1_ParamLimits

0xa078,	// (0x0004dd5c) query_popup_data_pane_cp1

0x9f0b,	// (0x0004dbef) bg_popup_window_pane_cp10_ParamLimits

0x9f0b,	// (0x0004dbef) bg_popup_window_pane_cp10

0x9f3d,	// (0x0004dc21) indicator_popup_pane_ParamLimits

0x9f3d,	// (0x0004dc21) indicator_popup_pane

0x9f5f,	// (0x0004dc43) popup_query_code_window_t1_ParamLimits

0x9f5f,	// (0x0004dc43) popup_query_code_window_t1

0x9f79,	// (0x0004dc5d) popup_query_code_window_t2_ParamLimits

0x9f79,	// (0x0004dc5d) popup_query_code_window_t2

0x9fc2,	// (0x0004dca6) popup_query_code_window_t3_ParamLimits

0x9fc2,	// (0x0004dca6) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000534ed) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000534ed) popup_query_code_window_t

0x9ff1,	// (0x0004dcd5) query_popup_pane_ParamLimits

0x9ff1,	// (0x0004dcd5) query_popup_pane

0x0bf1,	// (0x000448d5) bg_popup_window_pane_cp15_ParamLimits

0x0bf1,	// (0x000448d5) bg_popup_window_pane_cp15

0x69eb,	// (0x0004a6cf) indicator_popup_pane_cp1_ParamLimits

0x69eb,	// (0x0004a6cf) indicator_popup_pane_cp1

0x69fe,	// (0x0004a6e2) indicator_popup_pane_cp2_ParamLimits

0x69fe,	// (0x0004a6e2) indicator_popup_pane_cp2

0x6a11,	// (0x0004a6f5) popup_query_data_code_window_g1_ParamLimits

0x6a11,	// (0x0004a6f5) popup_query_data_code_window_g1

0x0c0f,	// (0x000448f3) popup_query_data_code_window_t1_ParamLimits

0x0c0f,	// (0x000448f3) popup_query_data_code_window_t1

0x0c21,	// (0x00044905) popup_query_data_code_window_t2_ParamLimits

0x0c21,	// (0x00044905) popup_query_data_code_window_t2

0x6a24,	// (0x0004a708) popup_query_data_code_window_t3_ParamLimits

0x6a24,	// (0x0004a708) popup_query_data_code_window_t3

0x6a3a,	// (0x0004a71e) popup_query_data_code_window_t4_ParamLimits

0x6a3a,	// (0x0004a71e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00053249) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00053249) popup_query_data_code_window_t

0x14e6,	// (0x000451ca) list_single_midp_graphic_pane_g3

0x6a52,	// (0x0004a736) query_popup_data_pane_cp2_ParamLimits

0x6a65,	// (0x0004a749) query_popup_pane_cp2_ParamLimits

0x6a65,	// (0x0004a749) query_popup_pane_cp2

0x09c3,	// (0x000446a7) bg_popup_window_pane_cp11

0x9eef,	// (0x0004dbd3) heading_pane_cp5

0x9ef7,	// (0x0004dbdb) listscroll_popup_info_pane

0x09c3,	// (0x000446a7) input_focus_pane_cp3

0x0c33,	// (0x00044917) query_popup_pane_t1

0x0c41,	// (0x00044925) list_popup_info_pane_ParamLimits

0x0c41,	// (0x00044925) list_popup_info_pane

0x0c50,	// (0x00044934) listscroll_popup_info_pane_g1

0x0c58,	// (0x0004493c) scroll_pane_cp7

0x6a78,	// (0x0004a75c) popup_info_list_pane_t1_ParamLimits

0x6a78,	// (0x0004a75c) popup_info_list_pane_t1

0x6a92,	// (0x0004a776) popup_info_list_pane_t2_ParamLimits

0x6a92,	// (0x0004a776) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00053252) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00053252) popup_info_list_pane_t

0x09c3,	// (0x000446a7) bg_popup_window_pane_cp12

0xb201,	// (0x0004eee5) find_popup_pane

0x0a1f,	// (0x00044703) bg_popup_window_pane_cp3

0x0c62,	// (0x00044946) heading_pane_cp3

0x0c71,	// (0x00044955) listscroll_popup_graphic_pane

0x09c3,	// (0x000446a7) bg_popup_window_pane_cp4

0x6afc,	// (0x0004a7e0) heading_pane_cp4

0x0c81,	// (0x00044965) listscroll_popup_colour_pane

0x6b06,	// (0x0004a7ea) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6b06,	// (0x0004a7ea) cell_large_graphic_colour_none_popup_pane

0x6b1a,	// (0x0004a7fe) grid_large_graphic_colour_popup_pane_ParamLimits

0x6b1a,	// (0x0004a7fe) grid_large_graphic_colour_popup_pane

0x6b3e,	// (0x0004a822) listscroll_popup_colour_pane_g1_ParamLimits

0x6b3e,	// (0x0004a822) listscroll_popup_colour_pane_g1

0x6b55,	// (0x0004a839) listscroll_popup_colour_pane_g2_ParamLimits

0x6b55,	// (0x0004a839) listscroll_popup_colour_pane_g2

0x6b6c,	// (0x0004a850) listscroll_popup_colour_pane_g3_ParamLimits

0x6b6c,	// (0x0004a850) listscroll_popup_colour_pane_g3

0x6b7c,	// (0x0004a860) listscroll_popup_colour_pane_g4_ParamLimits

0x6b7c,	// (0x0004a860) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00053257) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00053257) listscroll_popup_colour_pane_g

0x0c89,	// (0x0004496d) scroll_pane_cp6_ParamLimits

0x0c89,	// (0x0004496d) scroll_pane_cp6

0x6b8c,	// (0x0004a870) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b8c,	// (0x0004a870) cell_large_graphic_colour_popup_pane

0x6bab,	// (0x0004a88f) cell_large_graphic_colour_none_popup_pane_t1

0x09c3,	// (0x000446a7) grid_highlight_pane_cp5

0x0c9b,	// (0x0004497f) cell_large_graphic_colour_popup_pane_g1

0x0ca3,	// (0x00044987) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00053260) cell_large_graphic_colour_popup_pane_g

0x0cab,	// (0x0004498f) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cb4,	// (0x00044998) grid_highlight_pane_cp4

0x0cbc,	// (0x000449a0) bg_popup_window_pane_cp8_ParamLimits

0x0cbc,	// (0x000449a0) bg_popup_window_pane_cp8

0x6bba,	// (0x0004a89e) popup_snote_single_text_window_g1_ParamLimits

0x6bba,	// (0x0004a89e) popup_snote_single_text_window_g1

0x6bcc,	// (0x0004a8b0) popup_snote_single_text_window_t1_ParamLimits

0x6bcc,	// (0x0004a8b0) popup_snote_single_text_window_t1

0x6bdf,	// (0x0004a8c3) popup_snote_single_text_window_t2_ParamLimits

0x6bdf,	// (0x0004a8c3) popup_snote_single_text_window_t2

0x6bf2,	// (0x0004a8d6) popup_snote_single_text_window_t3_ParamLimits

0x6bf2,	// (0x0004a8d6) popup_snote_single_text_window_t3

0x6c2b,	// (0x0004a90f) popup_snote_single_text_window_t4_ParamLimits

0x6c2b,	// (0x0004a90f) popup_snote_single_text_window_t4

0x6c5f,	// (0x0004a943) popup_snote_single_text_window_t5_ParamLimits

0x6c5f,	// (0x0004a943) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00053265) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00053265) popup_snote_single_text_window_t

0x0cd7,	// (0x000449bb) bg_popup_window_pane_cp9_ParamLimits

0x0cd7,	// (0x000449bb) bg_popup_window_pane_cp9

0x6bba,	// (0x0004a89e) popup_snote_single_graphic_window_g1_ParamLimits

0x6bba,	// (0x0004a89e) popup_snote_single_graphic_window_g1

0x0ce5,	// (0x000449c9) popup_snote_single_graphic_window_g2_ParamLimits

0x0ce5,	// (0x000449c9) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00053270) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00053270) popup_snote_single_graphic_window_g

0x0cf1,	// (0x000449d5) popup_snote_single_graphic_window_t1_ParamLimits

0x0cf1,	// (0x000449d5) popup_snote_single_graphic_window_t1

0x0d04,	// (0x000449e8) popup_snote_single_graphic_window_t2_ParamLimits

0x0d04,	// (0x000449e8) popup_snote_single_graphic_window_t2

0x6c8e,	// (0x0004a972) popup_snote_single_graphic_window_t3_ParamLimits

0x6c8e,	// (0x0004a972) popup_snote_single_graphic_window_t3

0x6cc7,	// (0x0004a9ab) popup_snote_single_graphic_window_t4_ParamLimits

0x6cc7,	// (0x0004a9ab) popup_snote_single_graphic_window_t4

0x6cfb,	// (0x0004a9df) popup_snote_single_graphic_window_t5_ParamLimits

0x6cfb,	// (0x0004a9df) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00053275) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00053275) popup_snote_single_graphic_window_t

0xb143,	// (0x0004ee27) grid_graphic_popup_pane_ParamLimits

0xb143,	// (0x0004ee27) grid_graphic_popup_pane

0xb16d,	// (0x0004ee51) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16d,	// (0x0004ee51) listscroll_popup_graphic_pane_g1

0xb181,	// (0x0004ee65) listscroll_popup_graphic_pane_g2_ParamLimits

0xb181,	// (0x0004ee65) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0005366a) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0005366a) listscroll_popup_graphic_pane_g

0xb195,	// (0x0004ee79) scroll_pane_cp5

0xb0d9,	// (0x0004edbd) cell_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x0004edbd) cell_graphic_popup_pane

0xb0ba,	// (0x0004ed9e) cell_graphic_popup_pane_g1

0xb0c2,	// (0x0004eda6) cell_graphic_popup_pane_g2

0x0cab,	// (0x0004498f) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00053663) cell_graphic_popup_pane_g

0xb0cb,	// (0x0004edaf) cell_graphic_popup_pane_t2

0x0cb4,	// (0x00044998) grid_highlight_pane_cp3

0x0d29,	// (0x00044a0d) list_gen_pane_ParamLimits

0x0d29,	// (0x00044a0d) list_gen_pane

0x0d51,	// (0x00044a35) scroll_pane

0xb012,	// (0x0004ecf6) bg_list_pane_g1_ParamLimits

0xb012,	// (0x0004ecf6) bg_list_pane_g1

0xb02f,	// (0x0004ed13) bg_list_pane_g2_ParamLimits

0xb02f,	// (0x0004ed13) bg_list_pane_g2

0xb044,	// (0x0004ed28) bg_list_pane_g3_ParamLimits

0xb044,	// (0x0004ed28) bg_list_pane_g3

0xb058,	// (0x0004ed3c) bg_list_pane_g4_ParamLimits

0xb058,	// (0x0004ed3c) bg_list_pane_g4

0xb06c,	// (0x0004ed50) bg_list_pane_g5_ParamLimits

0xb06c,	// (0x0004ed50) bg_list_pane_g5

0x0004,

0xf974,	// (0x00053658) bg_list_pane_g_ParamLimits

0xf974,	// (0x00053658) bg_list_pane_g

0x8542,	// (0x0004c226) list_double2_graphic_large_graphic_pane_ParamLimits

0x8542,	// (0x0004c226) list_double2_graphic_large_graphic_pane

0x8542,	// (0x0004c226) list_double2_graphic_pane_ParamLimits

0x8542,	// (0x0004c226) list_double2_graphic_pane

0x8542,	// (0x0004c226) list_double2_large_graphic_pane_ParamLimits

0x8542,	// (0x0004c226) list_double2_large_graphic_pane

0x5d25,	// (0x00049a09) list_double2_pane_ParamLimits

0x5d25,	// (0x00049a09) list_double2_pane

0x8542,	// (0x0004c226) list_double_graphic_heading_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_graphic_heading_pane

0x8542,	// (0x0004c226) list_double_graphic_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_graphic_pane

0x8542,	// (0x0004c226) list_double_heading_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_heading_pane

0x8542,	// (0x0004c226) list_double_large_graphic_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_large_graphic_pane

0x8542,	// (0x0004c226) list_double_number_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_number_pane

0x8542,	// (0x0004c226) list_double_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_pane

0x8542,	// (0x0004c226) list_double_time_pane_ParamLimits

0x8542,	// (0x0004c226) list_double_time_pane

0x8542,	// (0x0004c226) list_setting_number_pane_ParamLimits

0x8542,	// (0x0004c226) list_setting_number_pane

0x8542,	// (0x0004c226) list_setting_pane_ParamLimits

0x8542,	// (0x0004c226) list_setting_pane

0x85ad,	// (0x0004c291) list_single_2graphic_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_2graphic_pane

0x85ad,	// (0x0004c291) list_single_graphic_heading_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_graphic_heading_pane

0x85ad,	// (0x0004c291) list_single_graphic_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_graphic_pane

0x85ad,	// (0x0004c291) list_single_heading_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_heading_pane

0x5d79,	// (0x00049a5d) list_single_large_graphic_pane_ParamLimits

0x5d79,	// (0x00049a5d) list_single_large_graphic_pane

0x85ad,	// (0x0004c291) list_single_number_heading_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_number_heading_pane

0x85ad,	// (0x0004c291) list_single_number_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_number_pane

0x85ad,	// (0x0004c291) list_single_pane_ParamLimits

0x85ad,	// (0x0004c291) list_single_pane

0x09c3,	// (0x000446a7) list_highlight_pane_cp1

0x6d34,	// (0x0004aa18) list_single_pane_g1_ParamLimits

0x6d34,	// (0x0004aa18) list_single_pane_g1

0x6d40,	// (0x0004aa24) list_single_pane_g2_ParamLimits

0x6d40,	// (0x0004aa24) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00053291) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00053291) list_single_pane_g

0x5d0f,	// (0x000499f3) list_single_pane_t1_ParamLimits

0x5d0f,	// (0x000499f3) list_single_pane_t1

0x6d34,	// (0x0004aa18) list_single_number_pane_g1_ParamLimits

0x6d34,	// (0x0004aa18) list_single_number_pane_g1

0x6d40,	// (0x0004aa24) list_single_number_pane_g2_ParamLimits

0x6d40,	// (0x0004aa24) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00053291) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00053291) list_single_number_pane_g

0x54b7,	// (0x0004919b) list_single_number_pane_t1_ParamLimits

0x54b7,	// (0x0004919b) list_single_number_pane_t1

0x5ccd,	// (0x000499b1) list_single_number_pane_t2_ParamLimits

0x5ccd,	// (0x000499b1) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00053619) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00053619) list_single_number_pane_t

0x54ab,	// (0x0004918f) list_single_graphic_pane_g1_ParamLimits

0x54ab,	// (0x0004918f) list_single_graphic_pane_g1

0x6d34,	// (0x0004aa18) list_single_graphic_pane_g2_ParamLimits

0x6d34,	// (0x0004aa18) list_single_graphic_pane_g2

0x6d40,	// (0x0004aa24) list_single_graphic_pane_g3_ParamLimits

0x6d40,	// (0x0004aa24) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00053280) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00053280) list_single_graphic_pane_g

0x54b7,	// (0x0004919b) list_single_graphic_pane_t1_ParamLimits

0x54b7,	// (0x0004919b) list_single_graphic_pane_t1

0x54cd,	// (0x000491b1) list_single_heading_pane_g1_ParamLimits

0x54cd,	// (0x000491b1) list_single_heading_pane_g1

0x6d40,	// (0x0004aa24) list_single_heading_pane_g2_ParamLimits

0x6d40,	// (0x0004aa24) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00053287) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00053287) list_single_heading_pane_g

0x54e0,	// (0x000491c4) list_single_heading_pane_t1_ParamLimits

0x54e0,	// (0x000491c4) list_single_heading_pane_t1

0x6d4c,	// (0x0004aa30) list_single_heading_pane_t2_ParamLimits

0x6d4c,	// (0x0004aa30) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005328c) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005328c) list_single_heading_pane_t

0x6d34,	// (0x0004aa18) list_single_number_heading_pane_g1_ParamLimits

0x6d34,	// (0x0004aa18) list_single_number_heading_pane_g1

0x6d40,	// (0x0004aa24) list_single_number_heading_pane_g2_ParamLimits

0x6d40,	// (0x0004aa24) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00053291) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00053291) list_single_number_heading_pane_g

0x54f6,	// (0x000491da) list_single_number_heading_pane_t1_ParamLimits

0x54f6,	// (0x000491da) list_single_number_heading_pane_t1

0x550c,	// (0x000491f0) list_single_number_heading_pane_t2_ParamLimits

0x550c,	// (0x000491f0) list_single_number_heading_pane_t2

0x551e,	// (0x00049202) list_single_number_heading_pane_t3_ParamLimits

0x551e,	// (0x00049202) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00053296) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00053296) list_single_number_heading_pane_t

0x5530,	// (0x00049214) list_single_graphic_heading_pane_g1_ParamLimits

0x5530,	// (0x00049214) list_single_graphic_heading_pane_g1

0x6d5e,	// (0x0004aa42) list_single_graphic_heading_pane_g4_ParamLimits

0x6d5e,	// (0x0004aa42) list_single_graphic_heading_pane_g4

0x6d40,	// (0x0004aa24) list_single_graphic_heading_pane_g5_ParamLimits

0x6d40,	// (0x0004aa24) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005329d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005329d) list_single_graphic_heading_pane_g

0x54f6,	// (0x000491da) list_single_graphic_heading_pane_t1_ParamLimits

0x54f6,	// (0x000491da) list_single_graphic_heading_pane_t1

0x5544,	// (0x00049228) list_single_graphic_heading_pane_t2_ParamLimits

0x5544,	// (0x00049228) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000532a4) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000532a4) list_single_graphic_heading_pane_t

0x555c,	// (0x00049240) list_single_large_graphic_pane_g1_ParamLimits

0x555c,	// (0x00049240) list_single_large_graphic_pane_g1

0x6d6f,	// (0x0004aa53) list_single_large_graphic_pane_g2_ParamLimits

0x6d6f,	// (0x0004aa53) list_single_large_graphic_pane_g2

0x6d7b,	// (0x0004aa5f) list_single_large_graphic_pane_g3_ParamLimits

0x6d7b,	// (0x0004aa5f) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000532a9) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000532a9) list_single_large_graphic_pane_g

0xa0ab,	// (0x0004dd8f) wait_border_pane_g2_copy1

0x5568,	// (0x0004924c) list_single_large_graphic_pane_g4_cp2

0x5570,	// (0x00049254) list_single_large_graphic_pane_t1_ParamLimits

0x5570,	// (0x00049254) list_single_large_graphic_pane_t1

0x24a8,	// (0x0004618c) list_double_pane_g1_ParamLimits

0x24a8,	// (0x0004618c) list_double_pane_g1

0x6d87,	// (0x0004aa6b) list_double_pane_g2_ParamLimits

0x6d87,	// (0x0004aa6b) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000532b0) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000532b0) list_double_pane_g

0x5586,	// (0x0004926a) list_double_pane_t1_ParamLimits

0x5586,	// (0x0004926a) list_double_pane_t1

0x559c,	// (0x00049280) list_double_pane_t2_ParamLimits

0x559c,	// (0x00049280) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000532b5) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000532b5) list_double_pane_t

0x55ae,	// (0x00049292) list_double2_pane_g1_ParamLimits

0x55ae,	// (0x00049292) list_double2_pane_g1

0x55bf,	// (0x000492a3) list_double2_pane_g2_ParamLimits

0x55bf,	// (0x000492a3) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000532ba) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000532ba) list_double2_pane_g

0x55cb,	// (0x000492af) list_double2_pane_t1_ParamLimits

0x55cb,	// (0x000492af) list_double2_pane_t1

0x55e1,	// (0x000492c5) list_double2_pane_t2_ParamLimits

0x55e1,	// (0x000492c5) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000532bf) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000532bf) list_double2_pane_t

0x24a8,	// (0x0004618c) list_double_number_pane_g1_ParamLimits

0x24a8,	// (0x0004618c) list_double_number_pane_g1

0x6d87,	// (0x0004aa6b) list_double_number_pane_g2_ParamLimits

0x6d87,	// (0x0004aa6b) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000532b0) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000532b0) list_double_number_pane_g

0x55f3,	// (0x000492d7) list_double_number_pane_t1_ParamLimits

0x55f3,	// (0x000492d7) list_double_number_pane_t1

0x5605,	// (0x000492e9) list_double_number_pane_t2_ParamLimits

0x5605,	// (0x000492e9) list_double_number_pane_t2

0x561b,	// (0x000492ff) list_double_number_pane_t3_ParamLimits

0x561b,	// (0x000492ff) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000532c4) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000532c4) list_double_number_pane_t

0x562d,	// (0x00049311) list_double_graphic_pane_g1_ParamLimits

0x562d,	// (0x00049311) list_double_graphic_pane_g1

0x5639,	// (0x0004931d) list_double_graphic_pane_g2_ParamLimits

0x5639,	// (0x0004931d) list_double_graphic_pane_g2

0x5648,	// (0x0004932c) list_double_graphic_pane_g3_ParamLimits

0x5648,	// (0x0004932c) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000532cb) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000532cb) list_double_graphic_pane_g

0x5605,	// (0x000492e9) list_double_graphic_pane_t1_ParamLimits

0x5605,	// (0x000492e9) list_double_graphic_pane_t1

0x561b,	// (0x000492ff) list_double_graphic_pane_t2_ParamLimits

0x561b,	// (0x000492ff) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000532d4) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000532d4) list_double_graphic_pane_t

0x562d,	// (0x00049311) list_double2_graphic_pane_g1_ParamLimits

0x562d,	// (0x00049311) list_double2_graphic_pane_g1

0x24a8,	// (0x0004618c) list_double2_graphic_pane_g2_ParamLimits

0x24a8,	// (0x0004618c) list_double2_graphic_pane_g2

0x6d87,	// (0x0004aa6b) list_double2_graphic_pane_g3_ParamLimits

0x6d87,	// (0x0004aa6b) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000532d9) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000532d9) list_double2_graphic_pane_g

0x5605,	// (0x000492e9) list_double2_graphic_pane_t1_ParamLimits

0x5605,	// (0x000492e9) list_double2_graphic_pane_t1

0x5654,	// (0x00049338) list_double2_graphic_pane_t2_ParamLimits

0x5654,	// (0x00049338) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000532e0) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000532e0) list_double2_graphic_pane_t

0x5666,	// (0x0004934a) list_double_large_graphic_pane_g1_ParamLimits

0x5666,	// (0x0004934a) list_double_large_graphic_pane_g1

0x5685,	// (0x00049369) list_double_large_graphic_pane_g2_ParamLimits

0x5685,	// (0x00049369) list_double_large_graphic_pane_g2

0x6d87,	// (0x0004aa6b) list_double_large_graphic_pane_g3_ParamLimits

0x6d87,	// (0x0004aa6b) list_double_large_graphic_pane_g3

0x569b,	// (0x0004937f) list_double_large_graphic_pane_g4_ParamLimits

0x569b,	// (0x0004937f) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000532e5) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000532e5) list_double_large_graphic_pane_g

0x56ad,	// (0x00049391) list_double_large_graphic_pane_t1_ParamLimits

0x56ad,	// (0x00049391) list_double_large_graphic_pane_t1

0x56c6,	// (0x000493aa) list_double_large_graphic_pane_t2_ParamLimits

0x56c6,	// (0x000493aa) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000532f0) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000532f0) list_double_large_graphic_pane_t

0x56d8,	// (0x000493bc) list_double2_large_graphic_pane_g1_ParamLimits

0x56d8,	// (0x000493bc) list_double2_large_graphic_pane_g1

0x6db4,	// (0x0004aa98) list_double2_large_graphic_pane_g2_ParamLimits

0x6db4,	// (0x0004aa98) list_double2_large_graphic_pane_g2

0x6d87,	// (0x0004aa6b) list_double2_large_graphic_pane_g3_ParamLimits

0x6d87,	// (0x0004aa6b) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000532f5) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000532f5) list_double2_large_graphic_pane_g

0x5605,	// (0x000492e9) list_double2_large_graphic_pane_t1_ParamLimits

0x5605,	// (0x000492e9) list_double2_large_graphic_pane_t1

0x5654,	// (0x00049338) list_double2_large_graphic_pane_t2_ParamLimits

0x5654,	// (0x00049338) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000532e0) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000532e0) list_double2_large_graphic_pane_t

0x56e4,	// (0x000493c8) list_double_heading_pane_g1_ParamLimits

0x56e4,	// (0x000493c8) list_double_heading_pane_g1

0x6dc5,	// (0x0004aaa9) list_double_heading_pane_g2_ParamLimits

0x6dc5,	// (0x0004aaa9) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000532fc) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000532fc) list_double_heading_pane_g

0x56f5,	// (0x000493d9) list_double_heading_pane_t1_ParamLimits

0x56f5,	// (0x000493d9) list_double_heading_pane_t1

0x570b,	// (0x000493ef) list_double_heading_pane_t2_ParamLimits

0x570b,	// (0x000493ef) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00053301) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00053301) list_double_heading_pane_t

0x571d,	// (0x00049401) list_double_graphic_heading_pane_g1_ParamLimits

0x571d,	// (0x00049401) list_double_graphic_heading_pane_g1

0x56e4,	// (0x000493c8) list_double_graphic_heading_pane_g2_ParamLimits

0x56e4,	// (0x000493c8) list_double_graphic_heading_pane_g2

0x6dc5,	// (0x0004aaa9) list_double_graphic_heading_pane_g3_ParamLimits

0x6dc5,	// (0x0004aaa9) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00053306) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00053306) list_double_graphic_heading_pane_g

0x56f5,	// (0x000493d9) list_double_graphic_heading_pane_t1_ParamLimits

0x56f5,	// (0x000493d9) list_double_graphic_heading_pane_t1

0x570b,	// (0x000493ef) list_double_graphic_heading_pane_t2_ParamLimits

0x570b,	// (0x000493ef) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00053301) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00053301) list_double_graphic_heading_pane_t

0x5729,	// (0x0004940d) list_double_time_pane_g1_ParamLimits

0x5729,	// (0x0004940d) list_double_time_pane_g1

0x573a,	// (0x0004941e) list_double_time_pane_g2_ParamLimits

0x573a,	// (0x0004941e) list_double_time_pane_g2

0x0001,

0xf629,	// (0x0005330d) list_double_time_pane_g_ParamLimits

0xf629,	// (0x0005330d) list_double_time_pane_g

0x5746,	// (0x0004942a) list_double_time_pane_t1_ParamLimits

0x5746,	// (0x0004942a) list_double_time_pane_t1

0x575c,	// (0x00049440) list_double_time_pane_t2_ParamLimits

0x575c,	// (0x00049440) list_double_time_pane_t2

0x576e,	// (0x00049452) list_double_time_pane_t3_ParamLimits

0x576e,	// (0x00049452) list_double_time_pane_t3

0x5780,	// (0x00049464) list_double_time_pane_t4_ParamLimits

0x5780,	// (0x00049464) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00053312) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00053312) list_double_time_pane_t

0x5792,	// (0x00049476) list_setting_pane_g1_ParamLimits

0x5792,	// (0x00049476) list_setting_pane_g1

0x579e,	// (0x00049482) list_setting_pane_g2_ParamLimits

0x579e,	// (0x00049482) list_setting_pane_g2

0x0001,

0xf637,	// (0x0005331b) list_setting_pane_g_ParamLimits

0xf637,	// (0x0005331b) list_setting_pane_g

0x57aa,	// (0x0004948e) list_setting_pane_t1_ParamLimits

0x57aa,	// (0x0004948e) list_setting_pane_t1

0x57c4,	// (0x000494a8) list_setting_pane_t2_ParamLimits

0x57c4,	// (0x000494a8) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00053320) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00053320) list_setting_pane_t

0x5801,	// (0x000494e5) set_value_pane_cp_ParamLimits

0x5801,	// (0x000494e5) set_value_pane_cp

0x580d,	// (0x000494f1) list_setting_number_pane_g1_ParamLimits

0x580d,	// (0x000494f1) list_setting_number_pane_g1

0x5819,	// (0x000494fd) list_setting_number_pane_g2_ParamLimits

0x5819,	// (0x000494fd) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00053327) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00053327) list_setting_number_pane_g

0x5825,	// (0x00049509) list_setting_number_pane_t1_ParamLimits

0x5825,	// (0x00049509) list_setting_number_pane_t1

0x583e,	// (0x00049522) list_setting_number_pane_t2_ParamLimits

0x583e,	// (0x00049522) list_setting_number_pane_t2

0x5858,	// (0x0004953c) list_setting_number_pane_t3_ParamLimits

0x5858,	// (0x0004953c) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0005332c) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0005332c) list_setting_number_pane_t

0x5801,	// (0x000494e5) set_value_pane_ParamLimits

0x5801,	// (0x000494e5) set_value_pane

0x0d85,	// (0x00044a69) bg_set_opt_pane_ParamLimits

0x0d85,	// (0x00044a69) bg_set_opt_pane

0x589b,	// (0x0004957f) set_value_pane_t1

0x0da6,	// (0x00044a8a) slider_set_pane_cp3

0x6dd1,	// (0x0004aab5) volume_small_pane_cp

0x0daf,	// (0x00044a93) list_form_gen_pane

0x0db8,	// (0x00044a9c) scroll_pane_cp8

0x58b1,	// (0x00049595) form_field_data_pane_ParamLimits

0x58b1,	// (0x00049595) form_field_data_pane

0x58d3,	// (0x000495b7) form_field_data_wide_pane_ParamLimits

0x58d3,	// (0x000495b7) form_field_data_wide_pane

0x58f6,	// (0x000495da) form_field_popup_pane_ParamLimits

0x58f6,	// (0x000495da) form_field_popup_pane

0x5916,	// (0x000495fa) form_field_popup_wide_pane_ParamLimits

0x5916,	// (0x000495fa) form_field_popup_wide_pane

0x5933,	// (0x00049617) form_field_slider_pane_ParamLimits

0x5933,	// (0x00049617) form_field_slider_pane

0x5946,	// (0x0004962a) form_field_slider_wide_pane_ParamLimits

0x5946,	// (0x0004962a) form_field_slider_wide_pane

0x0dc9,	// (0x00044aad) data_form_pane

0x5963,	// (0x00049647) form_field_data_pane_t1

0x0dd5,	// (0x00044ab9) input_focus_pane

0x597b,	// (0x0004965f) data_form_wide_pane

0x5998,	// (0x0004967c) form_field_data_wide_pane_t1

0x0cc9,	// (0x000449ad) input_focus_pane_cp6

0x59ba,	// (0x0004969e) form_field_popup_pane_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_cp7

0x0e03,	// (0x00044ae7) list_form_pane

0x59da,	// (0x000496be) form_field_popup_wide_pane_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_cp8

0x0e0f,	// (0x00044af3) list_form_wide_pane

0x59f7,	// (0x000496db) form_field_slider_pane_t1_ParamLimits

0x59f7,	// (0x000496db) form_field_slider_pane_t1

0x5a0d,	// (0x000496f1) form_field_slider_pane_t2_ParamLimits

0x5a0d,	// (0x000496f1) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0005333c) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0005333c) form_field_slider_pane_t

0x0a11,	// (0x000446f5) input_focus_pane_cp9_ParamLimits

0x0a11,	// (0x000446f5) input_focus_pane_cp9

0x5a22,	// (0x00049706) slider_cont_pane_ParamLimits

0x5a22,	// (0x00049706) slider_cont_pane

0x0e1b,	// (0x00044aff) form_field_slider_wide_pane_t1_ParamLimits

0x0e1b,	// (0x00044aff) form_field_slider_wide_pane_t1

0x5a36,	// (0x0004971a) form_field_slider_wide_pane_t2_ParamLimits

0x5a36,	// (0x0004971a) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00053341) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00053341) form_field_slider_wide_pane_t

0x0a11,	// (0x000446f5) input_focus_pane_cp10_ParamLimits

0x0a11,	// (0x000446f5) input_focus_pane_cp10

0x5a48,	// (0x0004972c) slider_cont_pane_cp1_ParamLimits

0x5a48,	// (0x0004972c) slider_cont_pane_cp1

0x5a5c,	// (0x00049740) slider_form_pane_cp

0x0e2d,	// (0x00044b11) input_focus_pane_g1

0x0e35,	// (0x00044b19) input_focus_pane_g2

0x0e3d,	// (0x00044b21) input_focus_pane_g3

0x0e45,	// (0x00044b29) input_focus_pane_g4

0x0e4d,	// (0x00044b31) input_focus_pane_g5

0x0e55,	// (0x00044b39) input_focus_pane_g6

0x0e5d,	// (0x00044b41) input_focus_pane_g7

0x0e65,	// (0x00044b49) input_focus_pane_g8

0x0e6d,	// (0x00044b51) input_focus_pane_g9

0x09b9,	// (0x0004469d) input_focus_pane_g10

0x0009,

0xf662,	// (0x00053346) input_focus_pane_g

0xa0b4,	// (0x0004dd98) wait_border_pane_g3_copy1

0x5a64,	// (0x00049748) data_form_pane_t1

0x09b9,	// (0x0004469d) wait_anim_pane_g1_copy1

0x5cdf,	// (0x000499c3) data_form_wide_pane_t1

0x5a7f,	// (0x00049763) list_form_graphic_pane_cp_ParamLimits

0x5a7f,	// (0x00049763) list_form_graphic_pane_cp

0xafa3,	// (0x0004ec87) slider_form_pane_g1

0xafac,	// (0x0004ec90) slider_form_pane_g2

0x0006,

0xf965,	// (0x00053649) slider_form_pane_g

0x5a7f,	// (0x00049763) list_form_graphic_pane_ParamLimits

0x5a7f,	// (0x00049763) list_form_graphic_pane

0x5a98,	// (0x0004977c) list_form_graphic_pane_g1

0x5aa0,	// (0x00049784) list_form_graphic_pane_t1_ParamLimits

0x5aa0,	// (0x00049784) list_form_graphic_pane_t1

0x0a1f,	// (0x00044703) list_highlight_pane_cp5_ParamLimits

0x0a1f,	// (0x00044703) list_highlight_pane_cp5

0x5ab5,	// (0x00049799) find_pane_g1

0x0e75,	// (0x00044b59) input_find_pane

0x5abe,	// (0x000497a2) input_find_pane_g1_ParamLimits

0x5abe,	// (0x000497a2) input_find_pane_g1

0x5aca,	// (0x000497ae) input_find_pane_t1_ParamLimits

0x5aca,	// (0x000497ae) input_find_pane_t1

0x5adf,	// (0x000497c3) input_find_pane_t2_ParamLimits

0x5adf,	// (0x000497c3) input_find_pane_t2

0x0001,

0xf677,	// (0x0005335b) input_find_pane_t_ParamLimits

0xf677,	// (0x0005335b) input_find_pane_t

0x0e7e,	// (0x00044b62) input_focus_pane_cp5_ParamLimits

0x0e7e,	// (0x00044b62) input_focus_pane_cp5

0x0e91,	// (0x00044b75) bg_popup_window_pane_cp2_ParamLimits

0x0e91,	// (0x00044b75) bg_popup_window_pane_cp2

0x0e9e,	// (0x00044b82) listscroll_menu_pane_ParamLimits

0x0e9e,	// (0x00044b82) listscroll_menu_pane

0x6de6,	// (0x0004aaca) popup_submenu_window_ParamLimits

0x6de6,	// (0x0004aaca) popup_submenu_window

0x0eaa,	// (0x00044b8e) find_popup_pane_g1

0x6e0e,	// (0x0004aaf2) input_popup_find_pane_cp

0x0eb2,	// (0x00044b96) input_focus_pane_cp4_ParamLimits

0x0eb2,	// (0x00044b96) input_focus_pane_cp4

0x0ec0,	// (0x00044ba4) input_popup_find_pane_t1_ParamLimits

0x0ec0,	// (0x00044ba4) input_popup_find_pane_t1

0x09c3,	// (0x000446a7) bg_popup_sub_pane_cp

0x0eee,	// (0x00044bd2) listscroll_popup_sub_pane

0x0ef6,	// (0x00044bda) list_submenu_pane_ParamLimits

0x0ef6,	// (0x00044bda) list_submenu_pane

0x0f07,	// (0x00044beb) scroll_pane_cp4

0x6e26,	// (0x0004ab0a) list_single_popup_submenu_pane_ParamLimits

0x6e26,	// (0x0004ab0a) list_single_popup_submenu_pane

0x219c,	// (0x00045e80) list_single_popup_submenu_pane_g1

0x6e3a,	// (0x0004ab1e) list_single_popup_submenu_pane_t1_ParamLimits

0x6e3a,	// (0x0004ab1e) list_single_popup_submenu_pane_t1

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp1_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp1

0x0f0f,	// (0x00044bf3) tabs_2_active_pane_g1

0x6e4f,	// (0x0004ab33) tabs_2_active_pane_t1

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp1_ParamLimits

0x0a1f,	// (0x00044703) bg_passive_tab_pane_cp1

0x0f0f,	// (0x00044bf3) tabs_2_passive_pane_g1

0x6e4f,	// (0x0004ab33) tabs_2_passive_pane_t1

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp4

0x6e6f,	// (0x0004ab53) tabs_2_long_active_pane_t1

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp4

0x8235,	// (0x0004bf19) list_single_midp_graphic_pane_g4_ParamLimits

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp5

0x6e8e,	// (0x0004ab72) tabs_3_long_active_pane_t1

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp5

0x8235,	// (0x0004bf19) list_single_midp_graphic_pane_g4

0x0a1f,	// (0x00044703) bg_popup_window_pane_cp13_ParamLimits

0x0a1f,	// (0x00044703) bg_popup_window_pane_cp13

0x0f23,	// (0x00044c07) listscroll_popup_fast_pane_ParamLimits

0x0f23,	// (0x00044c07) listscroll_popup_fast_pane

0x0f2f,	// (0x00044c13) grid_popup_fast_pane_ParamLimits

0x0f2f,	// (0x00044c13) grid_popup_fast_pane

0x0f41,	// (0x00044c25) scroll_pane_cp9_ParamLimits

0x0f41,	// (0x00044c25) scroll_pane_cp9

0xc892,	// (0x00050576) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc892,	// (0x00050576) list_single_graphic_hl_pane_t1_cp2

0x0f54,	// (0x00044c38) input_focus_pane_cp20_ParamLimits

0x0f54,	// (0x00044c38) input_focus_pane_cp20

0x0f62,	// (0x00044c46) query_popup_data_pane_t1_ParamLimits

0x0f62,	// (0x00044c46) query_popup_data_pane_t1

0x0f75,	// (0x00044c59) query_popup_data_pane_t2_ParamLimits

0x0f75,	// (0x00044c59) query_popup_data_pane_t2

0x0fbb,	// (0x00044c9f) query_popup_data_pane_t3_ParamLimits

0x0fbb,	// (0x00044c9f) query_popup_data_pane_t3

0x0ffc,	// (0x00044ce0) query_popup_data_pane_t4_ParamLimits

0x0ffc,	// (0x00044ce0) query_popup_data_pane_t4

0x1038,	// (0x00044d1c) query_popup_data_pane_t5_ParamLimits

0x1038,	// (0x00044d1c) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00053360) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00053360) query_popup_data_pane_t

0x0e2d,	// (0x00044b11) bg_set_opt_pane_g1

0x0e35,	// (0x00044b19) bg_set_opt_pane_g2

0x0e3d,	// (0x00044b21) bg_set_opt_pane_g3

0x0e45,	// (0x00044b29) bg_set_opt_pane_g4

0x0e4d,	// (0x00044b31) bg_set_opt_pane_g5

0x0e55,	// (0x00044b39) bg_set_opt_pane_g6

0x0e5d,	// (0x00044b41) bg_set_opt_pane_g7

0x0e65,	// (0x00044b49) bg_set_opt_pane_g8

0x0e6d,	// (0x00044b51) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0005336b) bg_set_opt_pane_g

0x7395,	// (0x0004b079) control_top_pane_stacon_ParamLimits

0x7395,	// (0x0004b079) control_top_pane_stacon

0x73e8,	// (0x0004b0cc) signal_pane_stacon_ParamLimits

0x73e8,	// (0x0004b0cc) signal_pane_stacon

0x13c4,	// (0x000450a8) stacon_top_pane_g1_ParamLimits

0x13c4,	// (0x000450a8) stacon_top_pane_g1

0x740d,	// (0x0004b0f1) title_pane_stacon_ParamLimits

0x740d,	// (0x0004b0f1) title_pane_stacon

0x7437,	// (0x0004b11b) uni_indicator_pane_stacon_ParamLimits

0x7437,	// (0x0004b11b) uni_indicator_pane_stacon

0x744c,	// (0x0004b130) battery_pane_stacon_ParamLimits

0x744c,	// (0x0004b130) battery_pane_stacon

0x7490,	// (0x0004b174) control_bottom_pane_stacon_ParamLimits

0x7490,	// (0x0004b174) control_bottom_pane_stacon

0x74b3,	// (0x0004b197) navi_pane_stacon_ParamLimits

0x74b3,	// (0x0004b197) navi_pane_stacon

0x13e6,	// (0x000450ca) stacon_bottom_pane_g1_ParamLimits

0x13e6,	// (0x000450ca) stacon_bottom_pane_g1

0x6eba,	// (0x0004ab9e) aid_levels_signal_lsc_ParamLimits

0x6eba,	// (0x0004ab9e) aid_levels_signal_lsc

0x6ed0,	// (0x0004abb4) signal_pane_stacon_g1_ParamLimits

0x6ed0,	// (0x0004abb4) signal_pane_stacon_g1

0x6ee4,	// (0x0004abc8) signal_pane_stacon_g2_ParamLimits

0x6ee4,	// (0x0004abc8) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0005337e) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0005337e) signal_pane_stacon_g

0x6f19,	// (0x0004abfd) title_pane_stacon_t1_ParamLimits

0x6f19,	// (0x0004abfd) title_pane_stacon_t1

0x1090,	// (0x00044d74) uni_indicator_pane_stacon_g1

0x109a,	// (0x00044d7e) uni_indicator_pane_stacon_g2

0x107c,	// (0x00044d60) uni_indicator_pane_stacon_g3

0x1086,	// (0x00044d6a) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0005338a) uni_indicator_pane_stacon_g

0x6f3e,	// (0x0004ac22) control_top_pane_stacon_g1

0x6f46,	// (0x0004ac2a) control_top_pane_stacon_t1_ParamLimits

0x6f46,	// (0x0004ac2a) control_top_pane_stacon_t1

0x6f7d,	// (0x0004ac61) aid_levels_battery_lsc_ParamLimits

0x6f7d,	// (0x0004ac61) aid_levels_battery_lsc

0x6f94,	// (0x0004ac78) battery_pane_stacon_g1_ParamLimits

0x6f94,	// (0x0004ac78) battery_pane_stacon_g1

0x6fa7,	// (0x0004ac8b) battery_pane_stacon_g2_ParamLimits

0x6fa7,	// (0x0004ac8b) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00053393) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00053393) battery_pane_stacon_g

0x6fe5,	// (0x0004acc9) navi_icon_pane_stacon

0x6ff9,	// (0x0004acdd) navi_navi_pane_stacon

0x6fe5,	// (0x0004acc9) navi_text_pane_stacon

0x6f3e,	// (0x0004ac22) control_bottom_pane_stacon_g1

0x700d,	// (0x0004acf1) control_bottom_pane_stacon_t1_ParamLimits

0x700d,	// (0x0004acf1) control_bottom_pane_stacon_t1

0x7044,	// (0x0004ad28) grid_app_pane_ParamLimits

0x7044,	// (0x0004ad28) grid_app_pane

0x7066,	// (0x0004ad4a) scroll_pane_cp15_ParamLimits

0x7066,	// (0x0004ad4a) scroll_pane_cp15

0x7079,	// (0x0004ad5d) cell_app_pane_ParamLimits

0x7079,	// (0x0004ad5d) cell_app_pane

0x70a1,	// (0x0004ad85) cell_app_pane_g1_ParamLimits

0x70a1,	// (0x0004ad85) cell_app_pane_g1

0x10be,	// (0x00044da2) cell_app_pane_g2_ParamLimits

0x10be,	// (0x00044da2) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00053398) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00053398) cell_app_pane_g

0x70c5,	// (0x0004ada9) cell_app_pane_t1_ParamLimits

0x70c5,	// (0x0004ada9) cell_app_pane_t1

0x10ca,	// (0x00044dae) grid_highlight_pane_ParamLimits

0x10ca,	// (0x00044dae) grid_highlight_pane

0x0e2d,	// (0x00044b11) cell_highlight_pane_g1

0x0e35,	// (0x00044b19) cell_highlight_pane_g2

0x0e3d,	// (0x00044b21) cell_highlight_pane_g3

0x0e45,	// (0x00044b29) cell_highlight_pane_g4

0x0e4d,	// (0x00044b31) cell_highlight_pane_g5

0x0e55,	// (0x00044b39) cell_highlight_pane_g6

0x0e5d,	// (0x00044b41) cell_highlight_pane_g7

0x0e65,	// (0x00044b49) cell_highlight_pane_g8

0x0e6d,	// (0x00044b51) cell_highlight_pane_g9

0x09b9,	// (0x0004469d) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00053346) cell_highlight_pane_g

0x10db,	// (0x00044dbf) bg_scroll_pane

0x70ef,	// (0x0004add3) scroll_handle_pane

0x1122,	// (0x00044e06) scroll_bg_pane_g1

0x1137,	// (0x00044e1b) scroll_bg_pane_g2

0x114f,	// (0x00044e33) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0005339d) scroll_bg_pane_g

0x7118,	// (0x0004adfc) scroll_handle_focus_pane_ParamLimits

0x7118,	// (0x0004adfc) scroll_handle_focus_pane

0x1122,	// (0x00044e06) scroll_handle_pane_g1

0x1164,	// (0x00044e48) scroll_handle_pane_g2

0x114f,	// (0x00044e33) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x000533a4) scroll_handle_pane_g

0x0eb2,	// (0x00044b96) bg_popup_sub_pane_cp21_ParamLimits

0x0eb2,	// (0x00044b96) bg_popup_sub_pane_cp21

0x7125,	// (0x0004ae09) popup_fep_japan_predictive_window_t1_ParamLimits

0x7125,	// (0x0004ae09) popup_fep_japan_predictive_window_t1

0x713f,	// (0x0004ae23) popup_fep_japan_predictive_window_t2_ParamLimits

0x713f,	// (0x0004ae23) popup_fep_japan_predictive_window_t2

0x7172,	// (0x0004ae56) popup_fep_japan_predictive_window_t3_ParamLimits

0x7172,	// (0x0004ae56) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x000533ab) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x000533ab) popup_fep_japan_predictive_window_t

0x09c3,	// (0x000446a7) bg_popup_sub_pane_cp23

0x2ac7,	// (0x000467ab) listscroll_japin_cand_pane

0x1178,	// (0x00044e5c) popup_fep_japan_candidate_window_t1

0x1186,	// (0x00044e6a) candidate_pane_ParamLimits

0x1186,	// (0x00044e6a) candidate_pane

0x71a9,	// (0x0004ae8d) scroll_pane_cp30

0x1198,	// (0x00044e7c) list_single_popup_jap_candidate_pane_ParamLimits

0x1198,	// (0x00044e7c) list_single_popup_jap_candidate_pane

0x09c3,	// (0x000446a7) list_highlight_pane_cp30

0x11ad,	// (0x00044e91) list_single_popup_jap_candidate_pane_t1

0x11bc,	// (0x00044ea0) level_1_signal

0x11c9,	// (0x00044ead) level_2_signal

0x11d6,	// (0x00044eba) level_3_signal

0x11e3,	// (0x00044ec7) level_4_signal

0x11f0,	// (0x00044ed4) level_5_signal

0x11fd,	// (0x00044ee1) level_6_signal

0x120a,	// (0x00044eee) level_7_signal

0x11bc,	// (0x00044ea0) level_1_battery

0x11c9,	// (0x00044ead) level_2_battery

0x11d6,	// (0x00044eba) level_3_battery

0x11e3,	// (0x00044ec7) level_4_battery

0x11f0,	// (0x00044ed4) level_5_battery

0x11fd,	// (0x00044ee1) level_6_battery

0x120a,	// (0x00044eee) level_7_battery

0x122f,	// (0x00044f13) list_menu_pane_ParamLimits

0x122f,	// (0x00044f13) list_menu_pane

0x1245,	// (0x00044f29) scroll_pane_cp25_ParamLimits

0x1245,	// (0x00044f29) scroll_pane_cp25

0x125e,	// (0x00044f42) list_double2_graphic_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double2_graphic_pane_cp2

0x125e,	// (0x00044f42) list_double2_large_graphic_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double2_large_graphic_pane_cp2

0x125e,	// (0x00044f42) list_double2_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double2_pane_cp2

0x125e,	// (0x00044f42) list_double_graphic_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double_graphic_pane_cp2

0x125e,	// (0x00044f42) list_double_large_graphic_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double_large_graphic_pane_cp2

0x125e,	// (0x00044f42) list_double_number_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double_number_pane_cp2

0x125e,	// (0x00044f42) list_double_pane_cp2_ParamLimits

0x125e,	// (0x00044f42) list_double_pane_cp2

0x71e4,	// (0x0004aec8) list_single_2graphic_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_2graphic_pane_cp2

0x71e4,	// (0x0004aec8) list_single_graphic_heading_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_graphic_heading_pane_cp2

0x71e4,	// (0x0004aec8) list_single_graphic_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_graphic_pane_cp2

0x71e4,	// (0x0004aec8) list_single_heading_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_heading_pane_cp2

0x126e,	// (0x00044f52) list_single_large_graphic_pane_cp2_ParamLimits

0x126e,	// (0x00044f52) list_single_large_graphic_pane_cp2

0x71e4,	// (0x0004aec8) list_single_number_heading_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_number_heading_pane_cp2

0x71e4,	// (0x0004aec8) list_single_number_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_number_pane_cp2

0x71e4,	// (0x0004aec8) list_single_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_pane_cp2

0x1288,	// (0x00044f6c) bg_popup_sub_pane_cp22

0x72bc,	// (0x0004afa0) popup_side_volume_key_window_g1

0x72e0,	// (0x0004afc4) popup_side_volume_key_window_t1

0x72fc,	// (0x0004afe0) volume_small_pane_cp1

0x0a11,	// (0x000446f5) bg_popup_sub_pane_cp24_ParamLimits

0x0a11,	// (0x000446f5) bg_popup_sub_pane_cp24

0x129e,	// (0x00044f82) fep_china_uni_candidate_pane_ParamLimits

0x129e,	// (0x00044f82) fep_china_uni_candidate_pane

0x12b2,	// (0x00044f96) fep_china_uni_entry_pane

0x12c2,	// (0x00044fa6) popup_fep_china_uni_window_g1

0x7304,	// (0x0004afe8) fep_china_uni_entry_pane_g1

0x730c,	// (0x0004aff0) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x000533dc) fep_china_uni_entry_pane_g

0x12de,	// (0x00044fc2) fep_entry_item_pane

0x12e8,	// (0x00044fcc) fep_candidate_item_pane

0x7314,	// (0x0004aff8) fep_china_uni_candidate_pane_g1

0x12f0,	// (0x00044fd4) fep_china_uni_candidate_pane_g2

0x12f8,	// (0x00044fdc) fep_china_uni_candidate_pane_g3

0x731c,	// (0x0004b000) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x000533e1) fep_china_uni_candidate_pane_g

0x09b9,	// (0x0004469d) fep_entry_item_pane_g1

0x1300,	// (0x00044fe4) fep_entry_item_pane_t1_ParamLimits

0x1300,	// (0x00044fe4) fep_entry_item_pane_t1

0x1316,	// (0x00044ffa) fep_candidate_item_pane_t1_ParamLimits

0x1316,	// (0x00044ffa) fep_candidate_item_pane_t1

0x132b,	// (0x0004500f) fep_candidate_item_pane_t2_ParamLimits

0x132b,	// (0x0004500f) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x000533ea) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x000533ea) fep_candidate_item_pane_t

0x0a1f,	// (0x00044703) list_highlight_pane_cp31_ParamLimits

0x0a1f,	// (0x00044703) list_highlight_pane_cp31

0x133d,	// (0x00045021) level_1_signal_lsc

0x1346,	// (0x0004502a) level_2_signal_lsc

0x134f,	// (0x00045033) level_3_signal_lsc

0x1358,	// (0x0004503c) level_4_signal_lsc

0x1361,	// (0x00045045) level_5_signal_lsc

0x136a,	// (0x0004504e) level_6_signal_lsc

0x1373,	// (0x00045057) level_7_signal_lsc

0x1373,	// (0x00045057) level_1_battery_lsc

0x137c,	// (0x00045060) level_2_battery_lsc

0x1385,	// (0x00045069) level_3_battery_lsc

0x138e,	// (0x00045072) level_4_battery_lsc

0x1397,	// (0x0004507b) level_5_battery_lsc

0x13a0,	// (0x00045084) level_6_battery_lsc

0x133d,	// (0x00045021) level_7_battery_lsc

0x13a9,	// (0x0004508d) scroll_handle_focus_pane_g1

0x13b2,	// (0x00045096) scroll_handle_focus_pane_g2

0x13bb,	// (0x0004509f) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x000533ef) scroll_handle_focus_pane_g

0x5af4,	// (0x000497d8) list_single_2graphic_pane_g1_ParamLimits

0x5af4,	// (0x000497d8) list_single_2graphic_pane_g1

0x6d5e,	// (0x0004aa42) list_single_2graphic_pane_g2_ParamLimits

0x6d5e,	// (0x0004aa42) list_single_2graphic_pane_g2

0x6d40,	// (0x0004aa24) list_single_2graphic_pane_g3_ParamLimits

0x6d40,	// (0x0004aa24) list_single_2graphic_pane_g3

0x5b00,	// (0x000497e4) list_single_2graphic_pane_g4_ParamLimits

0x5b00,	// (0x000497e4) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x000533f6) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x000533f6) list_single_2graphic_pane_g

0x5b0c,	// (0x000497f0) list_single_2graphic_pane_t1_ParamLimits

0x5b0c,	// (0x000497f0) list_single_2graphic_pane_t1

0x7324,	// (0x0004b008) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7324,	// (0x0004b008) list_double2_graphic_large_graphic_pane_g1

0x6db4,	// (0x0004aa98) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6db4,	// (0x0004aa98) list_double2_graphic_large_graphic_pane_g2

0x6d87,	// (0x0004aa6b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6d87,	// (0x0004aa6b) list_double2_graphic_large_graphic_pane_g3

0x7334,	// (0x0004b018) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7334,	// (0x0004b018) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x000533ff) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x000533ff) list_double2_graphic_large_graphic_pane_g

0x5b3a,	// (0x0004981e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b3a,	// (0x0004981e) list_double2_graphic_large_graphic_pane_t1

0x5b50,	// (0x00049834) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5b50,	// (0x00049834) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00053408) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00053408) list_double2_graphic_large_graphic_pane_t

0x7512,	// (0x0004b1f6) popup_fast_swap_window_ParamLimits

0x7512,	// (0x0004b1f6) popup_fast_swap_window

0x752e,	// (0x0004b212) popup_side_volume_key_window

0x1471,	// (0x00045155) stacon_top_pane

0x147b,	// (0x0004515f) status_pane_ParamLimits

0x147b,	// (0x0004515f) status_pane

0x7548,	// (0x0004b22c) status_small_pane

0x09c3,	// (0x000446a7) control_pane

0x09c3,	// (0x000446a7) stacon_bottom_pane

0x0db8,	// (0x00044a9c) scroll_pane_cp121

0x0daf,	// (0x00044a93) set_content_pane

0x7340,	// (0x0004b024) bg_active_tab_pane_g1_cp1

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp1

0x7352,	// (0x0004b036) bg_active_tab_pane_g3_cp1

0x7340,	// (0x0004b024) bg_passive_tab_pane_g1_cp1

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp1

0x7352,	// (0x0004b036) bg_passive_tab_pane_g3_cp1

0x735b,	// (0x0004b03f) bg_active_tab_pane_g1_cp2

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp2

0x7364,	// (0x0004b048) bg_active_tab_pane_g3_cp2

0x735b,	// (0x0004b03f) bg_passive_tab_pane_g1_cp2

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp2

0x7364,	// (0x0004b048) bg_passive_tab_pane_g3_cp2

0x736d,	// (0x0004b051) bg_active_tab_pane_g1_cp3

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp3

0x7376,	// (0x0004b05a) bg_active_tab_pane_g3_cp3

0x736d,	// (0x0004b051) bg_passive_tab_pane_g1_cp3

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp3

0x7376,	// (0x0004b05a) bg_passive_tab_pane_g3_cp3

0x737f,	// (0x0004b063) bg_active_tab_pane_g1_cp4

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp4

0x738a,	// (0x0004b06e) bg_active_tab_pane_g3_cp4

0x737f,	// (0x0004b063) bg_passive_tab_pane_g1_cp4

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp4

0x738a,	// (0x0004b06e) bg_passive_tab_pane_g3_cp4

0x74d6,	// (0x0004b1ba) bg_active_tab_pane_g1_cp5

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp5

0x74df,	// (0x0004b1c3) bg_active_tab_pane_g3_cp5

0x74d6,	// (0x0004b1ba) bg_passive_tab_pane_g1_cp5

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp5

0x74df,	// (0x0004b1c3) bg_passive_tab_pane_g3_cp5

0x74e8,	// (0x0004b1cc) list_set_graphic_pane_ParamLimits

0x74e8,	// (0x0004b1cc) list_set_graphic_pane

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp4

0x1402,	// (0x000450e6) list_set_graphic_pane_g1_ParamLimits

0x1402,	// (0x000450e6) list_set_graphic_pane_g1

0x140e,	// (0x000450f2) list_set_graphic_pane_g2_ParamLimits

0x140e,	// (0x000450f2) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0005340d) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0005340d) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x000537a5) volume_small_pane_cp_g

0x7506,	// (0x0004b1ea) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7506,	// (0x0004b1ea) list_double2_large_graphic_pane_g1_cp2

0x1430,	// (0x00045114) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1430,	// (0x00045114) list_double2_large_graphic_pane_g2_cp2

0x1441,	// (0x00045125) list_double2_large_graphic_pane_g3_cp2

0x1449,	// (0x0004512d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1449,	// (0x0004512d) list_double2_large_graphic_pane_t1_cp2

0x145f,	// (0x00045143) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x145f,	// (0x00045143) list_double2_large_graphic_pane_t2_cp2

0xab65,	// (0x0004e849) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab65,	// (0x0004e849) list_double_large_graphic_pane_g1_cp2

0xab76,	// (0x0004e85a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab76,	// (0x0004e85a) list_double_large_graphic_pane_g2_cp2

0x1597,	// (0x0004527b) list_double_large_graphic_pane_g3_cp2

0xab87,	// (0x0004e86b) list_double_large_graphic_pane_g4_cp

0xab8f,	// (0x0004e873) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab8f,	// (0x0004e873) list_double_large_graphic_pane_t1_cp2

0xaba6,	// (0x0004e88a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaba6,	// (0x0004e88a) list_double_large_graphic_pane_t2_cp2

0x1489,	// (0x0004516d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1489,	// (0x0004516d) list_double2_graphic_pane_g1_cp2

0x1497,	// (0x0004517b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1497,	// (0x0004517b) list_double2_graphic_pane_g2_cp2

0x14a8,	// (0x0004518c) list_double2_graphic_pane_g3_cp2

0x14b2,	// (0x00045196) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14b2,	// (0x00045196) list_double2_graphic_pane_t1_cp2

0x14c8,	// (0x000451ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14c8,	// (0x000451ac) list_double2_graphic_pane_t2_cp2

0x14da,	// (0x000451be) list_single_number_heading_pane_g1_cp2_ParamLimits

0x14da,	// (0x000451be) list_single_number_heading_pane_g1_cp2

0x14e6,	// (0x000451ca) list_single_number_heading_pane_g2_cp2

0x14ee,	// (0x000451d2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x14ee,	// (0x000451d2) list_single_number_heading_pane_t1_cp2

0x1504,	// (0x000451e8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1504,	// (0x000451e8) list_single_number_heading_pane_t2_cp2

0x1516,	// (0x000451fa) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1516,	// (0x000451fa) list_single_number_heading_pane_t3_cp2

0x14da,	// (0x000451be) list_single_heading_pane_g1_cp2_ParamLimits

0x14da,	// (0x000451be) list_single_heading_pane_g1_cp2

0x14e6,	// (0x000451ca) list_single_heading_pane_g2_cp2

0x14ee,	// (0x000451d2) list_single_heading_pane_t1_cp2_ParamLimits

0x14ee,	// (0x000451d2) list_single_heading_pane_t1_cp2

0xa96f,	// (0x0004e653) list_single_heading_pane_t2_cp2_ParamLimits

0xa96f,	// (0x0004e653) list_single_heading_pane_t2_cp2

0xa8b7,	// (0x0004e59b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8b7,	// (0x0004e59b) list_double_graphic_pane_g1_cp2

0xa8c3,	// (0x0004e5a7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa8c3,	// (0x0004e5a7) list_double_graphic_pane_g2_cp2

0xa8d2,	// (0x0004e5b6) list_double_graphic_pane_g3_cp2

0xa8da,	// (0x0004e5be) list_double_graphic_pane_t1_cp2_ParamLimits

0xa8da,	// (0x0004e5be) list_double_graphic_pane_t1_cp2

0xa8f0,	// (0x0004e5d4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa8f0,	// (0x0004e5d4) list_double_graphic_pane_t2_cp2

0x158b,	// (0x0004526f) list_double_number_pane_g1_cp2_ParamLimits

0x158b,	// (0x0004526f) list_double_number_pane_g1_cp2

0x1597,	// (0x0004527b) list_double_number_pane_g2_cp2

0xa87b,	// (0x0004e55f) list_double_number_pane_t1_cp2_ParamLimits

0xa87b,	// (0x0004e55f) list_double_number_pane_t1_cp2

0xa88f,	// (0x0004e573) list_double_number_pane_t2_cp2_ParamLimits

0xa88f,	// (0x0004e573) list_double_number_pane_t2_cp2

0xa8a5,	// (0x0004e589) list_double_number_pane_t3_cp2_ParamLimits

0xa8a5,	// (0x0004e589) list_double_number_pane_t3_cp2

0xa764,	// (0x0004e448) list_single_graphic_pane_g1_cp2_ParamLimits

0xa764,	// (0x0004e448) list_single_graphic_pane_g1_cp2

0x15cf,	// (0x000452b3) list_single_graphic_pane_g2_cp2_ParamLimits

0x15cf,	// (0x000452b3) list_single_graphic_pane_g2_cp2

0x15db,	// (0x000452bf) list_single_graphic_pane_g3_cp2

0xa73a,	// (0x0004e41e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa73a,	// (0x0004e41e) list_single_graphic_pane_t1_cp2

0x15cf,	// (0x000452b3) list_single_number_pane_g1_cp2_ParamLimits

0x15cf,	// (0x000452b3) list_single_number_pane_g1_cp2

0x15db,	// (0x000452bf) list_single_number_pane_g2_cp2

0xa73a,	// (0x0004e41e) list_single_number_pane_t1_cp2_ParamLimits

0xa73a,	// (0x0004e41e) list_single_number_pane_t1_cp2

0xa750,	// (0x0004e434) list_single_number_pane_t2_cp2_ParamLimits

0xa750,	// (0x0004e434) list_single_number_pane_t2_cp2

0x1430,	// (0x00045114) list_double2_pane_g1_cp2_ParamLimits

0x1430,	// (0x00045114) list_double2_pane_g1_cp2

0x1441,	// (0x00045125) list_double2_pane_g2_cp2

0x1563,	// (0x00045247) list_double2_pane_t1_cp2_ParamLimits

0x1563,	// (0x00045247) list_double2_pane_t1_cp2

0x1579,	// (0x0004525d) list_double2_pane_t2_cp2_ParamLimits

0x1579,	// (0x0004525d) list_double2_pane_t2_cp2

0x158b,	// (0x0004526f) list_double_pane_g1_cp2_ParamLimits

0x158b,	// (0x0004526f) list_double_pane_g1_cp2

0x1597,	// (0x0004527b) list_double_pane_g2_cp2

0x159f,	// (0x00045283) list_double_pane_t1_cp2_ParamLimits

0x159f,	// (0x00045283) list_double_pane_t1_cp2

0x15b5,	// (0x00045299) list_double_pane_t2_cp2_ParamLimits

0x15b5,	// (0x00045299) list_double_pane_t2_cp2

0x756b,	// (0x0004b24f) list_single_pane_cp2_g3

0x15cf,	// (0x000452b3) list_single_pane_g1_cp2_ParamLimits

0x15cf,	// (0x000452b3) list_single_pane_g1_cp2

0x15db,	// (0x000452bf) list_single_pane_g2_cp2

0x15e3,	// (0x000452c7) list_single_pane_t1_cp2_ParamLimits

0x15e3,	// (0x000452c7) list_single_pane_t1_cp2

0x7573,	// (0x0004b257) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7573,	// (0x0004b257) list_single_large_graphic_pane_g1_cp2

0x15fb,	// (0x000452df) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x15fb,	// (0x000452df) list_single_large_graphic_pane_g2_cp2

0x1607,	// (0x000452eb) list_single_large_graphic_pane_g3_cp2

0x757f,	// (0x0004b263) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x757f,	// (0x0004b263) list_single_large_graphic_pane_g4_cp1

0x160f,	// (0x000452f3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x160f,	// (0x000452f3) list_single_large_graphic_pane_t1_cp2

0xa706,	// (0x0004e3ea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa706,	// (0x0004e3ea) list_single_graphic_heading_pane_g1_cp2

0xa6d3,	// (0x0004e3b7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa6d3,	// (0x0004e3b7) list_single_graphic_heading_pane_g4_cp2

0x15db,	// (0x000452bf) list_single_graphic_heading_pane_g5_cp2

0xa712,	// (0x0004e3f6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa712,	// (0x0004e3f6) list_single_graphic_heading_pane_t1_cp2

0xa728,	// (0x0004e40c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa728,	// (0x0004e40c) list_single_graphic_heading_pane_t2_cp2

0xa6c7,	// (0x0004e3ab) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa6c7,	// (0x0004e3ab) list_single_2graphic_pane_g1_cp2

0xa6d3,	// (0x0004e3b7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa6d3,	// (0x0004e3b7) list_single_2graphic_pane_g2_cp2

0x15db,	// (0x000452bf) list_single_2graphic_pane_g3_cp2

0xa6e4,	// (0x0004e3c8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa6e4,	// (0x0004e3c8) list_single_2graphic_pane_g4_cp2

0xa6f0,	// (0x0004e3d4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa6f0,	// (0x0004e3d4) list_single_2graphic_pane_t1_cp2

0x09b9,	// (0x0004469d) list_highlight_pane_g10_cp1

0xa2af,	// (0x0004df93) list_highlight_pane_g1_cp1

0xa2b7,	// (0x0004df9b) list_highlight_pane_g2_cp1

0xa2bf,	// (0x0004dfa3) list_highlight_pane_g3_cp1

0xa2c7,	// (0x0004dfab) list_highlight_pane_g4_cp1

0xa2cf,	// (0x0004dfb3) list_highlight_pane_g5_cp1

0xa2d7,	// (0x0004dfbb) list_highlight_pane_g6_cp1

0xa2df,	// (0x0004dfc3) list_highlight_pane_g7_cp1

0xa2e7,	// (0x0004dfcb) list_highlight_pane_g8_cp1

0xa2ef,	// (0x0004dfd3) list_highlight_pane_g9_cp1

0xa1d7,	// (0x0004debb) form_field_slider_pane_t3

0xa1e5,	// (0x0004dec9) form_field_slider_pane_t4

0xa1f3,	// (0x0004ded7) slider_form_pane_ParamLimits

0xa1f3,	// (0x0004ded7) slider_form_pane

0x09c3,	// (0x000446a7) control_abbreviations

0x09c3,	// (0x000446a7) control_conventions

0x09c3,	// (0x000446a7) control_definitions

0x09c3,	// (0x000446a7) format_table_attribute

0xa9b9,	// (0x0004e69d) bg_popup_preview_window_pane_g9

0x09c3,	// (0x000446a7) format_table_data2

0x09c3,	// (0x000446a7) format_table_data3

0x09c3,	// (0x000446a7) format_table_data_example

0x0008,

0x09c3,	// (0x000446a7) intro_purpose

0xf8c5,	// (0x000535a9) bg_popup_preview_window_pane_g

0x09c3,	// (0x000446a7) texts_category

0x09c3,	// (0x000446a7) texts_graphics

0x1625,	// (0x00045309) text_digital

0x1634,	// (0x00045318) text_primary

0x1643,	// (0x00045327) text_primary_small

0x1652,	// (0x00045336) text_secondary

0x1661,	// (0x00045345) text_title

0xb08e,	// (0x0004ed72) bg_passive_tab_pane_g1_cp3_srt

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp3_srt

0xb097,	// (0x0004ed7b) bg_passive_tab_pane_g3_cp3_srt

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp3_srt

0xb0a0,	// (0x0004ed84) tabs_4_active_pane_srt_g1

0xb0a8,	// (0x0004ed8c) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a8,	// (0x0004ed8c) tabs_4_active_pane_srt_t1

0xb08e,	// (0x0004ed72) bg_active_tab_pane_g1_cp3_copy1

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp3_copy1

0xb097,	// (0x0004ed7b) bg_active_tab_pane_g3_cp3_copy1

0x0a1f,	// (0x00044703) tabs_2_long_active_pane_srt_ParamLimits

0x0a1f,	// (0x00044703) tabs_2_long_active_pane_srt

0x0a1f,	// (0x00044703) tabs_2_long_passive_pane_srt_ParamLimits

0x0a1f,	// (0x00044703) tabs_2_long_passive_pane_srt

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp4_srt

0xadda,	// (0x0004eabe) bg_passive_tab_pane_g1_cp4_srt

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp4_srt

0xade3,	// (0x0004eac7) bg_passive_tab_pane_g3_cp4_srt

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp4_srt_ParamLimits

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp4_srt

0xadec,	// (0x0004ead0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadec,	// (0x0004ead0) tabs_2_long_active_pane_srt_t1

0xadda,	// (0x0004eabe) bg_active_tab_pane_g1_cp4_srt

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp4_srt

0xade3,	// (0x0004eac7) bg_active_tab_pane_g3_cp4_srt

0x0a11,	// (0x000446f5) tabs_3_long_active_pane_srt_ParamLimits

0x0a11,	// (0x000446f5) tabs_3_long_active_pane_srt

0x0a11,	// (0x000446f5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a11,	// (0x000446f5) tabs_3_long_passive_pane_cp_srt

0x0a11,	// (0x000446f5) tabs_3_long_passive_pane_srt_ParamLimits

0x0a11,	// (0x000446f5) tabs_3_long_passive_pane_srt

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp5_srt

0x74d6,	// (0x0004b1ba) bg_passive_tab_pane_g1_cp5_srt

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp5_srt

0x74df,	// (0x0004b1c3) bg_passive_tab_pane_g3_cp5_srt

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp5_srt_ParamLimits

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp5_srt

0xadc8,	// (0x0004eaac) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadc8,	// (0x0004eaac) tabs_3_long_active_pane_srt_t1

0x74d6,	// (0x0004b1ba) bg_active_tab_pane_g1_cp5_srt

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp5_srt

0x74df,	// (0x0004b1c3) bg_active_tab_pane_g3_cp5_srt

0xadba,	// (0x0004ea9e) navi_text_pane_srt_t1

0xadb2,	// (0x0004ea96) navi_icon_pane_srt_g1

0x174c,	// (0x00045430) midp_editing_number_pane_srt

0x1670,	// (0x00045354) midp_ticker_pane_srt

0x1754,	// (0x00045438) midp_ticker_pane_srt_g1

0x175c,	// (0x00045440) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0005342c) midp_ticker_pane_srt_g

0x1764,	// (0x00045448) midp_ticker_pane_srt_t1

0xada3,	// (0x0004ea87) midp_editing_number_pane_t1_copy1

0x7599,	// (0x0004b27d) listscroll_midp_pane

0x7599,	// (0x0004b27d) midp_form_pane

0x760b,	// (0x0004b2ef) midp_info_popup_window_ParamLimits

0x760b,	// (0x0004b2ef) midp_info_popup_window

0x0eb2,	// (0x00044b96) bg_popup_sub_pane_cp50_ParamLimits

0x0eb2,	// (0x00044b96) bg_popup_sub_pane_cp50

0x9ee3,	// (0x0004dbc7) listscroll_midp_info_pane_ParamLimits

0x9ee3,	// (0x0004dbc7) listscroll_midp_info_pane

0x9ec3,	// (0x0004dba7) listscroll_form_midp_pane_ParamLimits

0x9ec3,	// (0x0004dba7) listscroll_form_midp_pane

0x9ecf,	// (0x0004dbb3) scroll_bar_cp050

0x9ea3,	// (0x0004db87) list_midp_pane

0xbaf9,	// (0x0004f7dd) signal_pane_g2_cp

0x9ddd,	// (0x0004dac1) listscroll_midp_info_pane_t1_ParamLimits

0x9ddd,	// (0x0004dac1) listscroll_midp_info_pane_t1

0x9df5,	// (0x0004dad9) listscroll_midp_info_pane_t2_ParamLimits

0x9df5,	// (0x0004dad9) listscroll_midp_info_pane_t2

0x9e33,	// (0x0004db17) listscroll_midp_info_pane_t3_ParamLimits

0x9e33,	// (0x0004db17) listscroll_midp_info_pane_t3

0x9e6d,	// (0x0004db51) listscroll_midp_info_pane_t4_ParamLimits

0x9e6d,	// (0x0004db51) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000534e4) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000534e4) listscroll_midp_info_pane_t

0x0f07,	// (0x00044beb) scroll_pane_cp21

0x9d7d,	// (0x0004da61) form_midp_field_choice_group_pane

0x9d86,	// (0x0004da6a) form_midp_field_text_pane

0x9dc3,	// (0x0004daa7) form_midp_field_time_pane

0x9dcb,	// (0x0004daaf) form_midp_gauge_slider_pane

0x9dd4,	// (0x0004dab8) form_midp_gauge_wait_pane

0x09c3,	// (0x000446a7) form_midp_image_pane

0x5c9f,	// (0x00049983) list_single_midp_pane_ParamLimits

0x5c9f,	// (0x00049983) list_single_midp_pane

0x9d32,	// (0x0004da16) form_midp_field_text_pane_t1

0x9afc,	// (0x0004d7e0) input_focus_pane_cp050

0x9d6c,	// (0x0004da50) list_midp_form_text_pane

0x9d01,	// (0x0004d9e5) form_midp_field_choice_group_pane_t1

0x9d0f,	// (0x0004d9f3) input_focus_pane_cp051

0x9d23,	// (0x0004da07) list_midp_choice_pane

0x09c3,	// (0x000446a7) status_idle_pane

0x9ce5,	// (0x0004d9c9) form_midp_field_time_pane_t1

0x09b9,	// (0x0004469d) wait_anim_pane_g2_copy1

0x9cf3,	// (0x0004d9d7) form_midp_field_time_pane_t2

0x0001,

0x16d0,	// (0x000453b4) aid_navinavi_width_2_pane

0xf7fb,	// (0x000534df) form_midp_field_time_pane_t

0x09c3,	// (0x000446a7) input_focus_pane_cp052

0x09c3,	// (0x000446a7) bg_input_focus_pane_cp040

0x9ca5,	// (0x0004d989) form_midp_gauge_slider_pane_t1

0x9cb3,	// (0x0004d997) form_midp_gauge_slider_pane_t2

0x9cc1,	// (0x0004d9a5) form_midp_gauge_slider_pane_t3

0x9ccf,	// (0x0004d9b3) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000534d6) form_midp_gauge_slider_pane_t

0x9cdd,	// (0x0004d9c1) form_midp_slider_pane

0x0a1f,	// (0x00044703) bg_input_focus_pane_cp041_ParamLimits

0x0a1f,	// (0x00044703) bg_input_focus_pane_cp041

0x9c72,	// (0x0004d956) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c72,	// (0x0004d956) form_midp_gauge_wait_pane_t1

0x9c84,	// (0x0004d968) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c84,	// (0x0004d968) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000534d1) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000534d1) form_midp_gauge_wait_pane_t

0x9c96,	// (0x0004d97a) form_midp_wait_pane_ParamLimits

0x9c96,	// (0x0004d97a) form_midp_wait_pane

0x9c3c,	// (0x0004d920) form_midp_image_pane_g1

0x9c45,	// (0x0004d929) form_midp_image_pane_t1

0x9c54,	// (0x0004d938) form_midp_image_pane_t2

0x9c63,	// (0x0004d947) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000534ca) form_midp_image_pane_t

0x9c33,	// (0x0004d917) list_single_midp_pane_g1

0x5c90,	// (0x00049974) list_single_midp_pane_t1

0x9c0a,	// (0x0004d8ee) list_midp_form_item_pane_ParamLimits

0x9c0a,	// (0x0004d8ee) list_midp_form_item_pane

0x1678,	// (0x0004535c) list_midp_form_item_pane_t1

0x1687,	// (0x0004536b) midp_ticker_pane_g1

0x1693,	// (0x00045377) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00053412) midp_ticker_pane_g

0x169f,	// (0x00045383) midp_ticker_pane_t1

0xaff0,	// (0x0004ecd4) midp_editing_number_pane_t1

0xafce,	// (0x0004ecb2) midp_editing_number_pane

0xafdd,	// (0x0004ecc1) midp_ticker_pane

0xad93,	// (0x0004ea77) ai_message_heading_pane

0x09c3,	// (0x000446a7) bg_popup_window_pane_cp14

0xad9b,	// (0x0004ea7f) listscroll_ai_message_pane

0xad1d,	// (0x0004ea01) ai_message_heading_pane_g1_ParamLimits

0xad1d,	// (0x0004ea01) ai_message_heading_pane_g1

0xad29,	// (0x0004ea0d) ai_message_heading_pane_g2_ParamLimits

0xad29,	// (0x0004ea0d) ai_message_heading_pane_g2

0xad35,	// (0x0004ea19) ai_message_heading_pane_g3_ParamLimits

0xad35,	// (0x0004ea19) ai_message_heading_pane_g3

0xad41,	// (0x0004ea25) ai_message_heading_pane_g4_ParamLimits

0xad41,	// (0x0004ea25) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0005360b) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0005360b) ai_message_heading_pane_g

0xad4d,	// (0x0004ea31) ai_message_heading_pane_t1_ParamLimits

0xad4d,	// (0x0004ea31) ai_message_heading_pane_t1

0xad67,	// (0x0004ea4b) ai_message_heading_pane_t2_ParamLimits

0xad67,	// (0x0004ea4b) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00053614) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00053614) ai_message_heading_pane_t

0xad79,	// (0x0004ea5d) bg_popup_heading_pane_cp1_ParamLimits

0xad79,	// (0x0004ea5d) bg_popup_heading_pane_cp1

0xad0b,	// (0x0004e9ef) list_ai_message_pane_ParamLimits

0xad0b,	// (0x0004e9ef) list_ai_message_pane

0x0f07,	// (0x00044beb) scroll_pane_cp10

0xaca7,	// (0x0004e98b) list_ai_message_pane_g1

0xacaf,	// (0x0004e993) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000535e8) list_ai_message_pane_g

0xacb7,	// (0x0004e99b) list_ai_message_pane_t1_ParamLimits

0xacb7,	// (0x0004e99b) list_ai_message_pane_t1

0xaccc,	// (0x0004e9b0) list_ai_message_pane_t2_ParamLimits

0xaccc,	// (0x0004e9b0) list_ai_message_pane_t2

0xace1,	// (0x0004e9c5) list_ai_message_pane_t3_ParamLimits

0xace1,	// (0x0004e9c5) list_ai_message_pane_t3

0xacf6,	// (0x0004e9da) list_ai_message_pane_t4_ParamLimits

0xacf6,	// (0x0004e9da) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000535ed) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000535ed) list_ai_message_pane_t

0xac92,	// (0x0004e976) cell_ai_soft_ind_pane_ParamLimits

0xac92,	// (0x0004e976) cell_ai_soft_ind_pane

0x16b1,	// (0x00045395) cell_ai_soft_ind_pane_g1_ParamLimits

0x16b1,	// (0x00045395) cell_ai_soft_ind_pane_g1

0x09c3,	// (0x000446a7) grid_highlight_cp1

0x16be,	// (0x000453a2) text_secondary_cp56_ParamLimits

0x16be,	// (0x000453a2) text_secondary_cp56

0xac67,	// (0x0004e94b) example_general_pane_ParamLimits

0xac67,	// (0x0004e94b) example_general_pane

0xac73,	// (0x0004e957) example_parent_pane_g1_ParamLimits

0xac73,	// (0x0004e957) example_parent_pane_g1

0xac7f,	// (0x0004e963) example_parent_pane_t1_ParamLimits

0xac7f,	// (0x0004e963) example_parent_pane_t1

0x7cfb,	// (0x0004b9df) popup_preview_text_window_ParamLimits

0x7cfb,	// (0x0004b9df) popup_preview_text_window

0x15c7,	// (0x000452ab) list_single_pane_cp2_g4

0x0bf1,	// (0x000448d5) bg_popup_preview_window_pane_ParamLimits

0x0bf1,	// (0x000448d5) bg_popup_preview_window_pane

0xa9c1,	// (0x0004e6a5) popup_preview_text_window_t1_ParamLimits

0xa9c1,	// (0x0004e6a5) popup_preview_text_window_t1

0xa9df,	// (0x0004e6c3) popup_preview_text_window_t2_ParamLimits

0xa9df,	// (0x0004e6c3) popup_preview_text_window_t2

0xaa28,	// (0x0004e70c) popup_preview_text_window_t3_ParamLimits

0xaa28,	// (0x0004e70c) popup_preview_text_window_t3

0xaa6d,	// (0x0004e751) popup_preview_text_window_t4_ParamLimits

0xaa6d,	// (0x0004e751) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000535bc) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000535bc) popup_preview_text_window_t

0xaaeb,	// (0x0004e7cf) scroll_pane_cp11

0x9a70,	// (0x0004d754) bg_popup_preview_window_pane_g1

0xa981,	// (0x0004e665) bg_popup_preview_window_pane_g2

0xa989,	// (0x0004e66d) bg_popup_preview_window_pane_g3

0xa991,	// (0x0004e675) bg_popup_preview_window_pane_g4

0xa999,	// (0x0004e67d) bg_popup_preview_window_pane_g5

0xa9a1,	// (0x0004e685) bg_popup_preview_window_pane_g6

0xa9a9,	// (0x0004e68d) bg_popup_preview_window_pane_g7

0xa9b1,	// (0x0004e695) bg_popup_preview_window_pane_g8

0x637c,	// (0x0004a060) aid_popup_width_pane

0x7cd9,	// (0x0004b9bd) popup_midp_note_alarm_window_ParamLimits

0x7cd9,	// (0x0004b9bd) popup_midp_note_alarm_window

0x0dc9,	// (0x00044aad) data_form_pane_ParamLimits

0x5959,	// (0x0004963d) form_field_data_pane_g1

0x5963,	// (0x00049647) form_field_data_pane_t1_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_ParamLimits

0x597b,	// (0x0004965f) data_form_wide_pane_ParamLimits

0x598c,	// (0x00049670) form_field_data_wide_pane_g1

0x5998,	// (0x0004967c) form_field_data_wide_pane_t1_ParamLimits

0x0cc9,	// (0x000449ad) input_focus_pane_cp6_ParamLimits

0x6e18,	// (0x0004aafc) input_popup_find_pane_g1_ParamLimits

0x6e18,	// (0x0004aafc) input_popup_find_pane_g1

0x6fb8,	// (0x0004ac9c) aid_navi_side_left_pane

0x6fcd,	// (0x0004acb1) aid_navi_side_right_pane

0xa3aa,	// (0x0004e08e) bg_popup_window_pane_cp30_ParamLimits

0xa3aa,	// (0x0004e08e) bg_popup_window_pane_cp30

0xa424,	// (0x0004e108) popup_midp_note_alarm_window_g1_ParamLimits

0xa424,	// (0x0004e108) popup_midp_note_alarm_window_g1

0xa454,	// (0x0004e138) popup_midp_note_alarm_window_t1_ParamLimits

0xa454,	// (0x0004e138) popup_midp_note_alarm_window_t1

0xa4f5,	// (0x0004e1d9) popup_midp_note_alarm_window_t2_ParamLimits

0xa4f5,	// (0x0004e1d9) popup_midp_note_alarm_window_t2

0xa5a3,	// (0x0004e287) popup_midp_note_alarm_window_t3_ParamLimits

0xa5a3,	// (0x0004e287) popup_midp_note_alarm_window_t3

0xa5cb,	// (0x0004e2af) popup_midp_note_alarm_window_t4_ParamLimits

0xa5cb,	// (0x0004e2af) popup_midp_note_alarm_window_t4

0xa5eb,	// (0x0004e2cf) popup_midp_note_alarm_window_t5_ParamLimits

0xa5eb,	// (0x0004e2cf) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00053559) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00053559) popup_midp_note_alarm_window_t

0xa697,	// (0x0004e37b) wait_bar_pane_cp1_ParamLimits

0xa697,	// (0x0004e37b) wait_bar_pane_cp1

0x09c3,	// (0x000446a7) wait_anim_pane_copy1

0x09c3,	// (0x000446a7) wait_border_pane_copy1

0xa0a0,	// (0x0004dd84) wait_border_pane_g1_copy1

0x59b2,	// (0x00049696) form_field_popup_pane_g1

0x59ba,	// (0x0004969e) form_field_popup_pane_t1_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_cp7_ParamLimits

0x0e03,	// (0x00044ae7) list_form_pane_ParamLimits

0x59d2,	// (0x000496b6) form_field_popup_wide_pane_g1

0x59da,	// (0x000496be) form_field_popup_wide_pane_t1_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_cp8_ParamLimits

0x0e0f,	// (0x00044af3) list_form_wide_pane_ParamLimits

0xb12b,	// (0x0004ee0f) aid_size_cell_graphic_pane

0x5a64,	// (0x00049748) data_form_pane_t1_ParamLimits

0x5cdf,	// (0x000499c3) data_form_wide_pane_t1_ParamLimits

0x7fe0,	// (0x0004bcc4) bg_status_flat_pane

0x677b,	// (0x0004a45f) title_pane_t1_ParamLimits

0x09d9,	// (0x000446bd) title_pane_t2_ParamLimits

0x09ff,	// (0x000446e3) title_pane_t3_ParamLimits

0xf532,	// (0x00053216) title_pane_t_ParamLimits

0x11bc,	// (0x00044ea0) level_1_signal_ParamLimits

0x11c9,	// (0x00044ead) level_2_signal_ParamLimits

0x11d6,	// (0x00044eba) level_3_signal_ParamLimits

0x11e3,	// (0x00044ec7) level_4_signal_ParamLimits

0x11f0,	// (0x00044ed4) level_5_signal_ParamLimits

0x11fd,	// (0x00044ee1) level_6_signal_ParamLimits

0x120a,	// (0x00044eee) level_7_signal_ParamLimits

0x11bc,	// (0x00044ea0) level_1_battery_ParamLimits

0x11c9,	// (0x00044ead) level_2_battery_ParamLimits

0x11d6,	// (0x00044eba) level_3_battery_ParamLimits

0x11e3,	// (0x00044ec7) level_4_battery_ParamLimits

0x11f0,	// (0x00044ed4) level_5_battery_ParamLimits

0x11fd,	// (0x00044ee1) level_6_battery_ParamLimits

0x120a,	// (0x00044eee) level_7_battery_ParamLimits

0xa2af,	// (0x0004df93) bg_status_flat_pane_g1

0xa2b7,	// (0x0004df9b) bg_status_flat_pane_g2

0xa2bf,	// (0x0004dfa3) bg_status_flat_pane_g3

0xa2c7,	// (0x0004dfab) bg_status_flat_pane_g4

0xa2cf,	// (0x0004dfb3) bg_status_flat_pane_g5

0xa2d7,	// (0x0004dfbb) bg_status_flat_pane_g6

0xa2df,	// (0x0004dfc3) bg_status_flat_pane_g7

0x67eb,	// (0x0004a4cf) tabs_3_active_pane_t1_ParamLimits

0x67eb,	// (0x0004a4cf) tabs_3_passive_pane_t1_ParamLimits

0x6805,	// (0x0004a4e9) tabs_4_active_pane_t1_ParamLimits

0x6805,	// (0x0004a4e9) tabs_4_1_passive_pane_t1_ParamLimits

0x6e4f,	// (0x0004ab33) tabs_2_active_pane_t1_ParamLimits

0x6e4f,	// (0x0004ab33) tabs_2_passive_pane_t1_ParamLimits

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp4_ParamLimits

0x6e6f,	// (0x0004ab53) tabs_2_long_active_pane_t1_ParamLimits

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp4_ParamLimits

0x825d,	// (0x0004bf41) list_single_midp_graphic_pane_t1_ParamLimits

0x6e61,	// (0x0004ab45) bg_active_tab_pane_cp5_ParamLimits

0x6e8e,	// (0x0004ab72) tabs_3_long_active_pane_t1_ParamLimits

0x6e82,	// (0x0004ab66) bg_passive_tab_pane_cp5_ParamLimits

0x825d,	// (0x0004bf41) list_single_midp_graphic_pane_t1

0x7fe0,	// (0x0004bcc4) bg_status_flat_pane_ParamLimits

0x80a9,	// (0x0004bd8d) indicator_pane_cp2_ParamLimits

0x80a9,	// (0x0004bd8d) indicator_pane_cp2

0x982e,	// (0x0004d512) navi_pane_srt_ParamLimits

0x982e,	// (0x0004d512) navi_pane_srt

0x9852,	// (0x0004d536) popup_clock_digital_analogue_window_cp1

0x0a63,	// (0x00044747) indicator_pane_t1

0x1670,	// (0x00045354) copy_highlight_pane

0x1670,	// (0x00045354) cursor_graphics_pane

0x1670,	// (0x00045354) graphic_within_text_pane

0x1670,	// (0x00045354) link_highlight_pane

0xaaae,	// (0x0004e792) popup_preview_text_window_t5_ParamLimits

0xaaae,	// (0x0004e792) popup_preview_text_window_t5

0x16d8,	// (0x000453bc) cursor_digital_pane

0x16d8,	// (0x000453bc) cursor_primary_pane

0x16e9,	// (0x000453cd) cursor_primary_small_pane

0x16f1,	// (0x000453d5) cursor_secondary_pane

0x16f9,	// (0x000453dd) cursor_title_pane

0x16d8,	// (0x000453bc) link_highlight_digital_pane

0x16e0,	// (0x000453c4) link_highlight_primary_pane

0x16e9,	// (0x000453cd) link_highlight_primary_small_pane

0x16f1,	// (0x000453d5) link_highlight_secondary_pane

0x16f9,	// (0x000453dd) link_highlight_title_pane

0x16d8,	// (0x000453bc) copy_highlight_digital_pane

0x16d8,	// (0x000453bc) copy_highlight_primary_pane

0x16e9,	// (0x000453cd) copy_highlight_primary_small_pane

0x16f1,	// (0x000453d5) copy_highlight_secondary_pane

0x16f9,	// (0x000453dd) copy_highlight_title_pane

0x16f1,	// (0x000453d5) graphic_text_digital_pane

0xa34d,	// (0x0004e031) graphic_text_primary_pane

0xa356,	// (0x0004e03a) graphic_text_primary_small_pane

0x16e9,	// (0x000453cd) graphic_text_secondary_pane

0x16d8,	// (0x000453bc) graphic_text_title_pane

0x7663,	// (0x0004b347) cursor_primary_pane_g1

0xa33f,	// (0x0004e023) cursor_text_primary_t1

0xa327,	// (0x0004e00b) cursor_primary_small_pane_g1

0xa331,	// (0x0004e015) cursor_text_primary_small_t1

0xa30f,	// (0x0004dff3) cursor_primary_small_pane_g1_copy1

0xa319,	// (0x0004dffd) cursor_text_primary_small_t1_copy1

0xa2f7,	// (0x0004dfdb) cursor_text_title_t1

0xa305,	// (0x0004dfe9) cursor_title_pane_g1

0x7663,	// (0x0004b347) cursor_digital_pane_g1

0x1701,	// (0x000453e5) cursor_text_digital_t1

0x170f,	// (0x000453f3) link_highlight_primary_pane_g1

0xa2a0,	// (0x0004df84) link_highlight_primary_pane_t1

0x170f,	// (0x000453f3) link_highlight_primary_small_pane_g1

0x1717,	// (0x000453fb) link_highlight_primary_small_pane_t1

0x170f,	// (0x000453f3) link_highlight_secondary_pane_g1

0x1726,	// (0x0004540a) link_highlight_secondary_pane_t1

0xa205,	// (0x0004dee9) link_highlight_title_pane_g1

0xa21c,	// (0x0004df00) link_highlight_title_pane_t1

0xa205,	// (0x0004dee9) link_highlight_digital_pane_g1

0xa20d,	// (0x0004def1) link_highlight_digital_pane_t1

0xa0bf,	// (0x0004dda3) copy_highlight_primary_pane_g1

0xa0e5,	// (0x0004ddc9) copy_highlight_primary_pane_t1

0xa0bf,	// (0x0004dda3) copy_highlight_primary_small_pane_g1

0xa0d6,	// (0x0004ddba) copy_highlight_primary_small_pane_t1

0x1735,	// (0x00045419) copy_highlight_secondary_pane_g1

0x173d,	// (0x00045421) copy_highlight_secondary_pane_t1

0xa0bf,	// (0x0004dda3) copy_highlight_title_pane_g1

0xa0c7,	// (0x0004ddab) copy_highlight_title_pane_t1

0xa0bf,	// (0x0004dda3) copy_highlight_digital_pane_g1

0xb2f9,	// (0x0004efdd) copy_highlight_digital_pane_t1

0xb24d,	// (0x0004ef31) graphic_text_primary_pane_g1

0xb2dd,	// (0x0004efc1) graphic_text_primary_pane_t1

0xb2eb,	// (0x0004efcf) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00053688) graphic_text_primary_pane_t

0xb2b9,	// (0x0004ef9d) graphic_text_primary_small_pane_g1

0xb2c1,	// (0x0004efa5) graphic_text_primary_small_pane_t1

0xb2cf,	// (0x0004efb3) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00053683) graphic_text_primary_small_pane_t

0xb295,	// (0x0004ef79) graphic_text_secondary_pane_g1

0xb29d,	// (0x0004ef81) graphic_text_secondary_pane_t1

0xb2ab,	// (0x0004ef8f) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0005367e) graphic_text_secondary_pane_t

0xb271,	// (0x0004ef55) graphic_text_title_pane_g1

0xb279,	// (0x0004ef5d) graphic_text_title_pane_t1

0xb287,	// (0x0004ef6b) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00053679) graphic_text_title_pane_t

0xb24d,	// (0x0004ef31) graphic_text_digital_pane_g1

0xb255,	// (0x0004ef39) graphic_text_digital_pane_t1

0xb263,	// (0x0004ef47) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00053674) graphic_text_digital_pane_t

0x0a1f,	// (0x00044703) navi_icon_pane_srt_ParamLimits

0x0a1f,	// (0x00044703) navi_icon_pane_srt

0x09c3,	// (0x000446a7) navi_midp_pane_srt

0x09c3,	// (0x000446a7) navi_navi_pane_srt

0x0a1f,	// (0x00044703) navi_text_pane_srt_ParamLimits

0x0a1f,	// (0x00044703) navi_text_pane_srt

0xb218,	// (0x0004eefc) navi_navi_icon_text_pane_srt

0xb220,	// (0x0004ef04) navi_navi_pane_srt_g1_ParamLimits

0xb220,	// (0x0004ef04) navi_navi_pane_srt_g1

0xb232,	// (0x0004ef16) navi_navi_pane_srt_g2_ParamLimits

0xb232,	// (0x0004ef16) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0005366f) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0005366f) navi_navi_pane_srt_g

0xb244,	// (0x0004ef28) navi_navi_tabs_pane_srt

0xb218,	// (0x0004eefc) navi_navi_text_pane_srt

0xb218,	// (0x0004eefc) navi_navi_volume_pane_srt

0xb209,	// (0x0004eeed) navi_navi_text_pane_srt_t1

0x8688,	// (0x0004c36c) navi_navi_volume_pane_srt_g1

0x8690,	// (0x0004c374) volume_small_pane_srt_ParamLimits

0x8690,	// (0x0004c374) volume_small_pane_srt

0x766d,	// (0x0004b351) volume_small_pane_srt_g1_ParamLimits

0x766d,	// (0x0004b351) volume_small_pane_srt_g1

0x767d,	// (0x0004b361) volume_small_pane_srt_g2_ParamLimits

0x767d,	// (0x0004b361) volume_small_pane_srt_g2

0x768e,	// (0x0004b372) volume_small_pane_srt_g3_ParamLimits

0x768e,	// (0x0004b372) volume_small_pane_srt_g3

0x769f,	// (0x0004b383) volume_small_pane_srt_g4_ParamLimits

0x769f,	// (0x0004b383) volume_small_pane_srt_g4

0x76b0,	// (0x0004b394) volume_small_pane_srt_g5_ParamLimits

0x76b0,	// (0x0004b394) volume_small_pane_srt_g5

0x76c1,	// (0x0004b3a5) volume_small_pane_srt_g6_ParamLimits

0x76c1,	// (0x0004b3a5) volume_small_pane_srt_g6

0x76d2,	// (0x0004b3b6) volume_small_pane_srt_g7_ParamLimits

0x76d2,	// (0x0004b3b6) volume_small_pane_srt_g7

0x76e3,	// (0x0004b3c7) volume_small_pane_srt_g8_ParamLimits

0x76e3,	// (0x0004b3c7) volume_small_pane_srt_g8

0x76f4,	// (0x0004b3d8) volume_small_pane_srt_g9_ParamLimits

0x76f4,	// (0x0004b3d8) volume_small_pane_srt_g9

0x7705,	// (0x0004b3e9) volume_small_pane_srt_g10_ParamLimits

0x7705,	// (0x0004b3e9) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00053417) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00053417) volume_small_pane_srt_g

0x6a52,	// (0x0004a736) query_popup_data_pane_cp2

0xb1ef,	// (0x0004eed3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ef,	// (0x0004eed3) navi_navi_icon_text_pane_srt_t1

0xa34d,	// (0x0004e031) navi_tabs_2_long_pane_srt

0xa34d,	// (0x0004e031) navi_tabs_2_pane_srt

0xa34d,	// (0x0004e031) navi_tabs_3_long_pane_srt

0xa34d,	// (0x0004e031) navi_tabs_3_pane_srt

0xa34d,	// (0x0004e031) navi_tabs_4_pane_srt

0x8668,	// (0x0004c34c) tabs_2_active_pane_srt_ParamLimits

0x8668,	// (0x0004c34c) tabs_2_active_pane_srt

0x8678,	// (0x0004c35c) tabs_2_passive_pane_srt_ParamLimits

0x8678,	// (0x0004c35c) tabs_2_passive_pane_srt

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp1_srt

0xb1bb,	// (0x0004ee9f) bg_passive_tab_pane_g1_cp1_srt

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0004eea8) bg_passive_tab_pane_g3_cp1_srt

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp1_srt

0xb1cd,	// (0x0004eeb1) tabs_2_active_pane_srt_g1

0xb1d5,	// (0x0004eeb9) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d5,	// (0x0004eeb9) tabs_2_active_pane_srt_t1

0xb1bb,	// (0x0004ee9f) bg_active_tab_pane_g1_cp1_srt

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0004eea8) bg_active_tab_pane_g3_cp1_srt

0x8635,	// (0x0004c319) tabs_3_active_pane_srt_ParamLimits

0x8635,	// (0x0004c319) tabs_3_active_pane_srt

0x8646,	// (0x0004c32a) tabs_3_passive_pane_cp_srt_ParamLimits

0x8646,	// (0x0004c32a) tabs_3_passive_pane_cp_srt

0x8657,	// (0x0004c33b) tabs_3_passive_pane_srt_ParamLimits

0x8657,	// (0x0004c33b) tabs_3_passive_pane_srt

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0f17,	// (0x00044bfb) bg_passive_tab_pane_cp2_srt

0x7716,	// (0x0004b3fa) bg_passive_tab_pane_g1_cp2_srt

0x7349,	// (0x0004b02d) bg_passive_tab_pane_g2_cp2_srt

0x771f,	// (0x0004b403) bg_passive_tab_pane_g3_cp2_srt

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a1f,	// (0x00044703) bg_active_tab_pane_cp2_srt

0xb1a1,	// (0x0004ee85) tabs_3_active_pane_srt_g1

0xb1a9,	// (0x0004ee8d) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x0004ee8d) tabs_3_active_pane_srt_t1

0x7716,	// (0x0004b3fa) bg_active_tab_pane_g1_cp2_srt

0x7349,	// (0x0004b02d) bg_active_tab_pane_g2_cp2_srt

0x771f,	// (0x0004b403) bg_active_tab_pane_g3_cp2_srt

0x85ed,	// (0x0004c2d1) tabs_4_active_pane_srt_ParamLimits

0x85ed,	// (0x0004c2d1) tabs_4_active_pane_srt

0x85ff,	// (0x0004c2e3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x85ff,	// (0x0004c2e3) tabs_4_passive_pane_cp2_srt

0x7954,	// (0x0004b638) aid_size_cell_toolbar

0x6e82,	// (0x0004ab66) main_idle_act_pane_ParamLimits

0x7b0b,	// (0x0004b7ef) popup_large_graphic_colour_window_ParamLimits

0x7e76,	// (0x0004bb5a) popup_toolbar_window_ParamLimits

0x7e76,	// (0x0004bb5a) popup_toolbar_window

0xafff,	// (0x0004ece3) list_single_graphic_2heading_pane_ParamLimits

0xafff,	// (0x0004ece3) list_single_graphic_2heading_pane

0x10a4,	// (0x00044d88) aid_size_cell_apps_grid_lsc_pane

0x10b6,	// (0x00044d9a) aid_size_cell_apps_grid_prt_pane

0x0f17,	// (0x00044bfb) bg_wml_button_pane_cp1_ParamLimits

0x0f17,	// (0x00044bfb) bg_wml_button_pane_cp1

0x9d32,	// (0x0004da16) form_midp_field_text_pane_t1_ParamLimits

0x9afc,	// (0x0004d7e0) input_focus_pane_cp050_ParamLimits

0x9d6c,	// (0x0004da50) list_midp_form_text_pane_ParamLimits

0x9d0f,	// (0x0004d9f3) input_focus_pane_cp051_ParamLimits

0x9d23,	// (0x0004da07) list_midp_choice_pane_ParamLimits

0x9bb2,	// (0x0004d896) list_single_2graphic_pane_cp3_ParamLimits

0x9bb2,	// (0x0004d896) list_single_2graphic_pane_cp3

0x9bd7,	// (0x0004d8bb) list_single_midp_graphic_pane_ParamLimits

0x9bd7,	// (0x0004d8bb) list_single_midp_graphic_pane

0x5b72,	// (0x00049856) list_single_graphic_2heading_pane_g1_ParamLimits

0x5b72,	// (0x00049856) list_single_graphic_2heading_pane_g1

0x5b7e,	// (0x00049862) list_single_graphic_2heading_pane_g4_ParamLimits

0x5b7e,	// (0x00049862) list_single_graphic_2heading_pane_g4

0x5b8a,	// (0x0004986e) list_single_graphic_2heading_pane_g5_ParamLimits

0x5b8a,	// (0x0004986e) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0005346a) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0005346a) list_single_graphic_2heading_pane_g

0x5b96,	// (0x0004987a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b96,	// (0x0004987a) list_single_graphic_2heading_pane_t1

0x5baa,	// (0x0004988e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5baa,	// (0x0004988e) list_single_graphic_2heading_pane_t2

0x5bc4,	// (0x000498a8) list_single_graphic_2heading_pane_t3_ParamLimits

0x5bc4,	// (0x000498a8) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00053471) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00053471) list_single_graphic_2heading_pane_t

0x99ae,	// (0x0004d692) bg_popup_sub_pane_cp2

0x99d8,	// (0x0004d6bc) grid_toobar_pane

0x81d4,	// (0x0004beb8) cell_toolbar_pane_ParamLimits

0x81d4,	// (0x0004beb8) cell_toolbar_pane

0x9a14,	// (0x0004d6f8) cell_toolbar_pane_g1_ParamLimits

0x9a14,	// (0x0004d6f8) cell_toolbar_pane_g1

0x9a28,	// (0x0004d70c) cell_toolbar_pane_g2_ParamLimits

0x9a28,	// (0x0004d70c) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0005347f) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0005347f) cell_toolbar_pane_g

0x9a4a,	// (0x0004d72e) grid_highlight_pane_cp2_ParamLimits

0x9a4a,	// (0x0004d72e) grid_highlight_pane_cp2

0x9a64,	// (0x0004d748) toolbar_button_pane

0x9a70,	// (0x0004d754) toolbar_button_pane_g1

0x9a78,	// (0x0004d75c) toolbar_button_pane_g2

0x9a80,	// (0x0004d764) toolbar_button_pane_g3

0x9a88,	// (0x0004d76c) toolbar_button_pane_g4

0x9a90,	// (0x0004d774) toolbar_button_pane_g5

0x9a98,	// (0x0004d77c) toolbar_button_pane_g6

0x9aa0,	// (0x0004d784) toolbar_button_pane_g7

0x9aa8,	// (0x0004d78c) toolbar_button_pane_g8

0x9ab0,	// (0x0004d794) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00053484) toolbar_button_pane_g

0x8218,	// (0x0004befc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8218,	// (0x0004befc) list_single_2graphic_pane_g1_cp3

0x8224,	// (0x0004bf08) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8224,	// (0x0004bf08) list_single_2graphic_pane_g2_cp3

0x14e6,	// (0x000451ca) list_single_2graphic_pane_g3_cp3

0x8235,	// (0x0004bf19) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8235,	// (0x0004bf19) list_single_2graphic_pane_g4_cp3

0x8241,	// (0x0004bf25) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8241,	// (0x0004bf25) list_single_2graphic_pane_t1_cp3

0x14da,	// (0x000451be) list_single_midp_graphic_pane_g2_ParamLimits

0x14da,	// (0x000451be) list_single_midp_graphic_pane_g2

0x5b62,	// (0x00049846) aid_zoom_text_primary

0x795c,	// (0x0004b640) aid_zoom_text_secondary

0x7776,	// (0x0004b45a) status_small_pane_g7_ParamLimits

0x7776,	// (0x0004b45a) status_small_pane_g7

0x7799,	// (0x0004b47d) status_small_pane_t1_ParamLimits

0x675e,	// (0x0004a442) title_pane_g2

0x0003,

0xf529,	// (0x0005320d) title_pane_g

0x6aac,	// (0x0004a790) aid_size_cell_colour_1_pane_ParamLimits

0x6aac,	// (0x0004a790) aid_size_cell_colour_1_pane

0x6ac0,	// (0x0004a7a4) aid_size_cell_colour_2_pane_ParamLimits

0x6ac0,	// (0x0004a7a4) aid_size_cell_colour_2_pane

0x6ad4,	// (0x0004a7b8) aid_size_cell_colour_3_pane_ParamLimits

0x6ad4,	// (0x0004a7b8) aid_size_cell_colour_3_pane

0x6ae8,	// (0x0004a7cc) aid_size_cell_colour_4_pane_ParamLimits

0x6ae8,	// (0x0004a7cc) aid_size_cell_colour_4_pane

0x6ef5,	// (0x0004abd9) title_pane_stacon_g1_ParamLimits

0x6ef5,	// (0x0004abd9) title_pane_stacon_g1

0xa13c,	// (0x0004de20) popup_note_wait_window_g3_ParamLimits

0xa13c,	// (0x0004de20) popup_note_wait_window_g3

0xa1b2,	// (0x0004de96) popup_note_wait_window_t5_ParamLimits

0xa1b2,	// (0x0004de96) popup_note_wait_window_t5

0x09c3,	// (0x000446a7) main_feb_china_hwr_fs_writing_pane

0x79f2,	// (0x0004b6d6) popup_feb_china_hwr_fs_window_ParamLimits

0x79f2,	// (0x0004b6d6) popup_feb_china_hwr_fs_window

0x8273,	// (0x0004bf57) aid_size_cell_hwr_fs_ParamLimits

0x8273,	// (0x0004bf57) aid_size_cell_hwr_fs

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp3_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp3

0x8288,	// (0x0004bf6c) grid_hwr_fs_pane_ParamLimits

0x8288,	// (0x0004bf6c) grid_hwr_fs_pane

0x82a0,	// (0x0004bf84) linegrid_hwr_fs_pane_ParamLimits

0x82a0,	// (0x0004bf84) linegrid_hwr_fs_pane

0x82b0,	// (0x0004bf94) cell_hwr_fs_pane_ParamLimits

0x82b0,	// (0x0004bf94) cell_hwr_fs_pane

0x9b08,	// (0x0004d7ec) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b08,	// (0x0004d7ec) linegrid_hwr_fs_pane_g1

0x9b14,	// (0x0004d7f8) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b14,	// (0x0004d7f8) linegrid_hwr_fs_pane_g2

0x9b26,	// (0x0004d80a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b26,	// (0x0004d80a) linegrid_hwr_fs_pane_g3

0x82d2,	// (0x0004bfb6) linegrid_hwr_fs_pane_g4_ParamLimits

0x82d2,	// (0x0004bfb6) linegrid_hwr_fs_pane_g4

0x82ec,	// (0x0004bfd0) linegrid_hwr_fs_pane_g5_ParamLimits

0x82ec,	// (0x0004bfd0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000534af) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000534af) linegrid_hwr_fs_pane_g

0x9b32,	// (0x0004d816) cell_hwr_fs_pane_g1_ParamLimits

0x9b32,	// (0x0004d816) cell_hwr_fs_pane_g1

0x98e8,	// (0x0004d5cc) cell_hwr_fs_pane_g2_ParamLimits

0x98e8,	// (0x0004d5cc) cell_hwr_fs_pane_g2

0x9b48,	// (0x0004d82c) cell_hwr_fs_pane_g3_ParamLimits

0x9b48,	// (0x0004d82c) cell_hwr_fs_pane_g3

0x9b55,	// (0x0004d839) cell_hwr_fs_pane_g4_ParamLimits

0x9b55,	// (0x0004d839) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000534ba) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000534ba) cell_hwr_fs_pane_g

0x8302,	// (0x0004bfe6) cell_hwr_fs_pane_t1

0x09c3,	// (0x000446a7) grid_highlight_pane_cp6

0x09c3,	// (0x000446a7) main_idle_act2_pane

0x0eee,	// (0x00044bd2) aid_inside_area_popup_secondary

0xa7d1,	// (0x0004e4b5) aid_inside_area_window_primary_ParamLimits

0xa7d1,	// (0x0004e4b5) aid_inside_area_window_primary

0xb308,	// (0x0004efec) ai2_news_ticker_pane

0xb310,	// (0x0004eff4) aid_size_cell_ai1_link_ParamLimits

0xb310,	// (0x0004eff4) aid_size_cell_ai1_link

0xb32a,	// (0x0004f00e) popup_ai2_data_window_ParamLimits

0xb32a,	// (0x0004f00e) popup_ai2_data_window

0xb340,	// (0x0004f024) popup_ai2_link_window_ParamLimits

0xb340,	// (0x0004f024) popup_ai2_link_window

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp4_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp4

0xb354,	// (0x0004f038) grid_ai2_link_pane_ParamLimits

0xb354,	// (0x0004f038) grid_ai2_link_pane

0xb36b,	// (0x0004f04f) popup_ai2_link_window_g1_ParamLimits

0xb36b,	// (0x0004f04f) popup_ai2_link_window_g1

0xb377,	// (0x0004f05b) popup_ai2_link_window_g2_ParamLimits

0xb377,	// (0x0004f05b) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0005368d) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0005368d) popup_ai2_link_window_g

0xb386,	// (0x0004f06a) ai2_mp_button_pane

0xb38e,	// (0x0004f072) ai2_mp_volume_pane

0x9d0f,	// (0x0004d9f3) bg_popup_sub_pane_cp5_ParamLimits

0x9d0f,	// (0x0004d9f3) bg_popup_sub_pane_cp5

0xb396,	// (0x0004f07a) heading_ai2_gene_pane_ParamLimits

0xb396,	// (0x0004f07a) heading_ai2_gene_pane

0xb3a2,	// (0x0004f086) list_ai2_gene_pane_ParamLimits

0xb3a2,	// (0x0004f086) list_ai2_gene_pane

0xb3ea,	// (0x0004f0ce) cell_ai2_link_pane_ParamLimits

0xb3ea,	// (0x0004f0ce) cell_ai2_link_pane

0xb400,	// (0x0004f0e4) cell_ai2_link_pane_g1

0x09c3,	// (0x000446a7) grid_highlight_pane_cp7

0x86a5,	// (0x0004c389) ai2_mp_volume_pane_g1

0xb4d0,	// (0x0004f1b4) ai2_mp_volume_pane_g2

0xb445,	// (0x0004f129) list_ai2_gene_pane_t1

0xb4d8,	// (0x0004f1bc) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000536a6) ai2_mp_volume_pane_g

0x86ad,	// (0x0004c391) volume_small_pane_cp3

0xb4e0,	// (0x0004f1c4) aid_size_cell_ai2_button

0xb4e8,	// (0x0004f1cc) grid_ai2_button_pane

0xb4f1,	// (0x0004f1d5) cell_ai2_button_pane_ParamLimits

0xb4f1,	// (0x0004f1d5) cell_ai2_button_pane

0x09b9,	// (0x0004469d) cell_ai2_button_pane_g1

0x09c3,	// (0x000446a7) grid_highlight_pane_cp8

0xb490,	// (0x0004f174) ai2_gene_pane_t1_ParamLimits

0xb490,	// (0x0004f174) ai2_gene_pane_t1

0x794a,	// (0x0004b62e) aid_height_parent_landscape

0xae3a,	// (0x0004eb1e) aid_height_set_list

0xae4b,	// (0x0004eb2f) aid_size_parent

0xb12b,	// (0x0004ee0f) aid_size_cell_graphic_pane_ParamLimits

0xb3b2,	// (0x0004f096) popup_ai2_data_window_g1_ParamLimits

0xb3b2,	// (0x0004f096) popup_ai2_data_window_g1

0xb3be,	// (0x0004f0a2) ai2_news_ticker_pane_g1

0xb3c6,	// (0x0004f0aa) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00053692) ai2_news_ticker_pane_g

0xb3ce,	// (0x0004f0b2) ai2_news_ticker_pane_t1

0xb3dc,	// (0x0004f0c0) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00053697) ai2_news_ticker_pane_t

0xb409,	// (0x0004f0ed) heading_ai2_gene_pane_g1

0xb411,	// (0x0004f0f5) heading_ai2_gene_pane_t1_ParamLimits

0xb411,	// (0x0004f0f5) heading_ai2_gene_pane_t1

0xb426,	// (0x0004f10a) list_highlight_pane_cp6

0xb42e,	// (0x0004f112) ai2_gene_pane_ParamLimits

0xb42e,	// (0x0004f112) ai2_gene_pane

0xb453,	// (0x0004f137) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0005369c) list_ai2_gene_pane_t

0xb461,	// (0x0004f145) list_highlight_pane_cp8_ParamLimits

0xb461,	// (0x0004f145) list_highlight_pane_cp8

0xb472,	// (0x0004f156) ai2_gene_pane_g1_ParamLimits

0xb472,	// (0x0004f156) ai2_gene_pane_g1

0xb484,	// (0x0004f168) ai2_gene_pane_g2_ParamLimits

0xb484,	// (0x0004f168) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000536a1) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000536a1) ai2_gene_pane_g

0x0d74,	// (0x00044a58) scroll_pane_cp12

0x7907,	// (0x0004b5eb) control_pane_t3_ParamLimits

0x7907,	// (0x0004b5eb) control_pane_t3

0x778a,	// (0x0004b46e) status_small_pane_g8_ParamLimits

0x778a,	// (0x0004b46e) status_small_pane_g8

0x7ad4,	// (0x0004b7b8) popup_find_window_ParamLimits

0x7ced,	// (0x0004b9d1) popup_note_image_window_ParamLimits

0x5bdc,	// (0x000498c0) list_double2_graphic_pane_vc_g1_ParamLimits

0x5bdc,	// (0x000498c0) list_double2_graphic_pane_vc_g1

0x15cf,	// (0x000452b3) list_double2_graphic_pane_vc_g2_ParamLimits

0x15cf,	// (0x000452b3) list_double2_graphic_pane_vc_g2

0x8204,	// (0x0004bee8) list_double2_graphic_pane_vc_g3_ParamLimits

0x8204,	// (0x0004bee8) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00053478) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00053478) list_double2_graphic_pane_vc_g

0x5be8,	// (0x000498cc) list_double2_graphic_pane_vc_t1_ParamLimits

0x5be8,	// (0x000498cc) list_double2_graphic_pane_vc_t1

0x15cf,	// (0x000452b3) list_single_heading_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_single_heading_pane_vc_g1

0x8204,	// (0x0004bee8) list_single_heading_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_single_heading_pane_vc_g

0x5bfe,	// (0x000498e2) list_single_heading_pane_vc_t1_ParamLimits

0x5bfe,	// (0x000498e2) list_single_heading_pane_vc_t1

0x5c14,	// (0x000498f8) list_single_heading_pane_vc_t2_ParamLimits

0x5c14,	// (0x000498f8) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0005349e) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0005349e) list_single_heading_pane_vc_t

0x9ab8,	// (0x0004d79c) list_setting_number_pane_vc_g1_ParamLimits

0x9ab8,	// (0x0004d79c) list_setting_number_pane_vc_g1

0x9ac4,	// (0x0004d7a8) list_setting_number_pane_vc_g2_ParamLimits

0x9ac4,	// (0x0004d7a8) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000534a3) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000534a3) list_setting_number_pane_vc_g

0x5c26,	// (0x0004990a) list_setting_number_pane_vc_t1_ParamLimits

0x5c26,	// (0x0004990a) list_setting_number_pane_vc_t1

0x5c3a,	// (0x0004991e) list_setting_number_pane_vc_t2_ParamLimits

0x5c3a,	// (0x0004991e) list_setting_number_pane_vc_t2

0x5c56,	// (0x0004993a) list_setting_number_pane_vc_t3_ParamLimits

0x5c56,	// (0x0004993a) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000534a8) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000534a8) list_setting_number_pane_vc_t

0x5c80,	// (0x00049964) set_value_pane_vc_ParamLimits

0x5c80,	// (0x00049964) set_value_pane_vc

0xafff,	// (0x0004ece3) list_double2_graphic_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double2_graphic_pane_vc

0x855e,	// (0x0004c242) list_double2_large_graphic_pane_vc_ParamLimits

0x855e,	// (0x0004c242) list_double2_large_graphic_pane_vc

0xafff,	// (0x0004ece3) list_double2_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double2_pane_vc

0xafff,	// (0x0004ece3) list_double_graphic_heading_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_graphic_heading_pane_vc

0xafff,	// (0x0004ece3) list_double_graphic_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_graphic_pane_vc

0xafff,	// (0x0004ece3) list_double_heading_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_heading_pane_vc

0x8570,	// (0x0004c254) list_double_large_graphic_pane_vc_ParamLimits

0x8570,	// (0x0004c254) list_double_large_graphic_pane_vc

0xafff,	// (0x0004ece3) list_double_number_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_number_pane_vc

0xafff,	// (0x0004ece3) list_double_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_pane_vc

0xafff,	// (0x0004ece3) list_double_time_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_double_time_pane_vc

0xafff,	// (0x0004ece3) list_setting_number_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_setting_number_pane_vc

0xafff,	// (0x0004ece3) list_setting_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_setting_pane_vc

0xafff,	// (0x0004ece3) list_single_graphic_heading_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_single_graphic_heading_pane_vc

0xafff,	// (0x0004ece3) list_single_heading_pane_vc_ParamLimits

0xafff,	// (0x0004ece3) list_single_heading_pane_vc

0x858e,	// (0x0004c272) list_single_number_heading_pane_vc_ParamLimits

0x858e,	// (0x0004c272) list_single_number_heading_pane_vc

0x5d9b,	// (0x00049a7f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d9b,	// (0x00049a7f) list_double_graphic_heading_pane_vc_g1

0x15cf,	// (0x000452b3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x15cf,	// (0x000452b3) list_double_graphic_heading_pane_vc_g2

0x8204,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8204,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000536ad) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000536ad) list_double_graphic_heading_pane_vc_g

0x5da7,	// (0x00049a8b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5da7,	// (0x00049a8b) list_double_graphic_heading_pane_vc_t1

0x5dbb,	// (0x00049a9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5dbb,	// (0x00049a9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000536b4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000536b4) list_double_graphic_heading_pane_vc_t

0x9ab8,	// (0x0004d79c) list_setting_pane_vc_g1_ParamLimits

0x9ab8,	// (0x0004d79c) list_setting_pane_vc_g1

0x9ac4,	// (0x0004d7a8) list_setting_pane_vc_g2_ParamLimits

0x9ac4,	// (0x0004d7a8) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000534a3) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000534a3) list_setting_pane_vc_g

0x5dd3,	// (0x00049ab7) list_setting_pane_vc_t1_ParamLimits

0x5dd3,	// (0x00049ab7) list_setting_pane_vc_t1

0x5def,	// (0x00049ad3) list_setting_pane_vc_t2_ParamLimits

0x5def,	// (0x00049ad3) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x000536f7) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x000536f7) list_setting_pane_vc_t

0x5c80,	// (0x00049964) set_value_pane_cp_vc_ParamLimits

0x5c80,	// (0x00049964) set_value_pane_cp_vc

0x15cf,	// (0x000452b3) list_single_number_heading_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_single_number_heading_pane_vc_g1

0x8204,	// (0x0004bee8) list_single_number_heading_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_single_number_heading_pane_vc_g

0x5e09,	// (0x00049aed) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e09,	// (0x00049aed) list_single_number_heading_pane_vc_t1

0x5e1f,	// (0x00049b03) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e1f,	// (0x00049b03) list_single_number_heading_pane_vc_t2

0x5e31,	// (0x00049b15) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e31,	// (0x00049b15) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x000536fc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x000536fc) list_single_number_heading_pane_vc_t

0x5e43,	// (0x00049b27) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e43,	// (0x00049b27) list_single_graphic_heading_pane_vc_g1

0x15cf,	// (0x000452b3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x15cf,	// (0x000452b3) list_single_graphic_heading_pane_vc_g4

0x8204,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8204,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00053703) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00053703) list_single_graphic_heading_pane_vc_g

0x5bfe,	// (0x000498e2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5bfe,	// (0x000498e2) list_single_graphic_heading_pane_vc_t1

0x5e4f,	// (0x00049b33) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e4f,	// (0x00049b33) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0005370a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005370a) list_single_graphic_heading_pane_vc_t

0x15cf,	// (0x000452b3) list_double2_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_double2_pane_vc_g1

0x8204,	// (0x0004bee8) list_double2_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_double2_pane_vc_g

0x5e61,	// (0x00049b45) list_double2_pane_vc_t1_ParamLimits

0x5e61,	// (0x00049b45) list_double2_pane_vc_t1

0x8707,	// (0x0004c3eb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8707,	// (0x0004c3eb) list_double2_large_graphic_pane_vc_g1

0x6d6f,	// (0x0004aa53) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6d6f,	// (0x0004aa53) list_double2_large_graphic_pane_vc_g2

0x6d7b,	// (0x0004aa5f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6d7b,	// (0x0004aa5f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0005370f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0005370f) list_double2_large_graphic_pane_vc_g

0x5e79,	// (0x00049b5d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e79,	// (0x00049b5d) list_double2_large_graphic_pane_vc_t1

0x8713,	// (0x0004c3f7) list_double_time_pane_vc_g1_ParamLimits

0x8713,	// (0x0004c3f7) list_double_time_pane_vc_g1

0x871f,	// (0x0004c403) list_double_time_pane_vc_g2_ParamLimits

0x871f,	// (0x0004c403) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00053716) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00053716) list_double_time_pane_vc_g

0x5e8f,	// (0x00049b73) list_double_time_pane_vc_t1_ParamLimits

0x5e8f,	// (0x00049b73) list_double_time_pane_vc_t1

0x5eb3,	// (0x00049b97) list_double_time_pane_vc_t2_ParamLimits

0x5eb3,	// (0x00049b97) list_double_time_pane_vc_t2

0x5f02,	// (0x00049be6) list_double_time_pane_vc_t3_ParamLimits

0x5f02,	// (0x00049be6) list_double_time_pane_vc_t3

0x5f14,	// (0x00049bf8) list_double_time_pane_vc_t4_ParamLimits

0x5f14,	// (0x00049bf8) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005371b) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005371b) list_double_time_pane_vc_t

0x15cf,	// (0x000452b3) list_double_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_double_pane_vc_g1

0x8204,	// (0x0004bee8) list_double_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_double_pane_vc_g

0x5f28,	// (0x00049c0c) list_double_pane_vc_t1_ParamLimits

0x5f28,	// (0x00049c0c) list_double_pane_vc_t1

0x5f3c,	// (0x00049c20) list_double_pane_vc_t2_ParamLimits

0x5f3c,	// (0x00049c20) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00053724) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00053724) list_double_pane_vc_t

0x15cf,	// (0x000452b3) list_double_number_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_double_number_pane_vc_g1

0x8204,	// (0x0004bee8) list_double_number_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_double_number_pane_vc_g

0x5f54,	// (0x00049c38) list_double_number_pane_vc_t1_ParamLimits

0x5f54,	// (0x00049c38) list_double_number_pane_vc_t1

0x5f28,	// (0x00049c0c) list_double_number_pane_vc_t2_ParamLimits

0x5f28,	// (0x00049c0c) list_double_number_pane_vc_t2

0x5f66,	// (0x00049c4a) list_double_number_pane_vc_t3_ParamLimits

0x5f66,	// (0x00049c4a) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00053729) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00053729) list_double_number_pane_vc_t

0x872b,	// (0x0004c40f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x872b,	// (0x0004c40f) list_double_large_graphic_pane_vc_g1

0x8747,	// (0x0004c42b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8747,	// (0x0004c42b) list_double_large_graphic_pane_vc_g2

0x875b,	// (0x0004c43f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x875b,	// (0x0004c43f) list_double_large_graphic_pane_vc_g3

0x5f7e,	// (0x00049c62) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f7e,	// (0x00049c62) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00053730) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00053730) list_double_large_graphic_pane_vc_g

0x5f8d,	// (0x00049c71) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f8d,	// (0x00049c71) list_double_large_graphic_pane_vc_t1

0x5fa9,	// (0x00049c8d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5fa9,	// (0x00049c8d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00053739) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00053739) list_double_large_graphic_pane_vc_t

0x15cf,	// (0x000452b3) list_double_heading_pane_vc_g1_ParamLimits

0x15cf,	// (0x000452b3) list_double_heading_pane_vc_g1

0x8204,	// (0x0004bee8) list_double_heading_pane_vc_g2_ParamLimits

0x8204,	// (0x0004bee8) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053499) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053499) list_double_heading_pane_vc_g

0x5fcb,	// (0x00049caf) list_double_heading_pane_vc_t1_ParamLimits

0x5fcb,	// (0x00049caf) list_double_heading_pane_vc_t1

0x5fdf,	// (0x00049cc3) list_double_heading_pane_vc_t2_ParamLimits

0x5fdf,	// (0x00049cc3) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005373e) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005373e) list_double_heading_pane_vc_t

0x5ff7,	// (0x00049cdb) list_double_graphic_pane_vc_g1_ParamLimits

0x5ff7,	// (0x00049cdb) list_double_graphic_pane_vc_g1

0x876a,	// (0x0004c44e) list_double_graphic_pane_vc_g2_ParamLimits

0x876a,	// (0x0004c44e) list_double_graphic_pane_vc_g2

0x15cf,	// (0x000452b3) list_double_graphic_pane_vc_g3_ParamLimits

0x15cf,	// (0x000452b3) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x00053743) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00053743) list_double_graphic_pane_vc_g

0x600a,	// (0x00049cee) list_double_graphic_pane_vc_t1_ParamLimits

0x600a,	// (0x00049cee) list_double_graphic_pane_vc_t1

0x6029,	// (0x00049d0d) list_double_graphic_pane_vc_t2_ParamLimits

0x6029,	// (0x00049d0d) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005374c) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005374c) list_double_graphic_pane_vc_t

0x6388,	// (0x0004a06c) aid_size_cell_fastswap

0x6390,	// (0x0004a074) aid_size_cell_touch_ParamLimits

0x6390,	// (0x0004a074) aid_size_cell_touch

0x65eb,	// (0x0004a2cf) popup_fast_swap_wide_window_ParamLimits

0x65eb,	// (0x0004a2cf) popup_fast_swap_wide_window

0x66f1,	// (0x0004a3d5) touch_pane_ParamLimits

0x66f1,	// (0x0004a3d5) touch_pane

0x0dc1,	// (0x00044aa5) button_value_adjust_pane_cp2

0x58a9,	// (0x0004958d) button_value_adjust_pane_cp4

0x58cb,	// (0x000495af) form_field_data_pane_cp2

0x58ec,	// (0x000495d0) form_field_data_wide_pane_cp2

0x10db,	// (0x00044dbf) bg_scroll_pane_ParamLimits

0x70ef,	// (0x0004add3) scroll_handle_pane_ParamLimits

0x7103,	// (0x0004ade7) scroll_sc2_down_pane_ParamLimits

0x7103,	// (0x0004ade7) scroll_sc2_down_pane

0x110c,	// (0x00044df0) scroll_sc2_up_pane_ParamLimits

0x110c,	// (0x00044df0) scroll_sc2_up_pane

0xbbd2,	// (0x0004f8b6) grid_wheel_folder_pane_g1_ParamLimits

0xbbd2,	// (0x0004f8b6) grid_wheel_folder_pane_g1

0x746e,	// (0x0004b152) clock_nsta_pane_cp2_ParamLimits

0x746e,	// (0x0004b152) clock_nsta_pane_cp2

0x7599,	// (0x0004b27d) listscroll_midp_pane_ParamLimits

0x75a5,	// (0x0004b289) midp_canvas_pane

0x17b4,	// (0x00045498) nsta_clock_indic_pane

0x17dc,	// (0x000454c0) listscroll_form_pane_vc

0x17e4,	// (0x000454c8) listscroll_set_pane_vc_ParamLimits

0x17e4,	// (0x000454c8) listscroll_set_pane_vc

0x7ffc,	// (0x0004bce0) clock_nsta_pane

0x8077,	// (0x0004bd5b) indicator_nsta_pane

0x99ae,	// (0x0004d692) bg_popup_sub_pane_cp2_ParamLimits

0x99c2,	// (0x0004d6a6) find_pane_cp2_ParamLimits

0x99c2,	// (0x0004d6a6) find_pane_cp2

0x99d8,	// (0x0004d6bc) grid_toobar_pane_ParamLimits

0x9ad0,	// (0x0004d7b4) list_form_gen_pane_vc_ParamLimits

0x9ad0,	// (0x0004d7b4) list_form_gen_pane_vc

0x9ae6,	// (0x0004d7ca) scroll_pane_cp8_vc_ParamLimits

0x9ae6,	// (0x0004d7ca) scroll_pane_cp8_vc

0x9b62,	// (0x0004d846) data_form_wide_pane_vc_ParamLimits

0x9b62,	// (0x0004d846) data_form_wide_pane_vc

0x9b6e,	// (0x0004d852) form_field_data_wide_pane_vc_g1

0x9b76,	// (0x0004d85a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b76,	// (0x0004d85a) form_field_data_wide_pane_vc_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_cp6_vc_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_cp6_vc

0x9ea3,	// (0x0004db87) list_midp_pane_ParamLimits

0x9eaf,	// (0x0004db93) scroll_pane_cp16_ParamLimits

0x9eaf,	// (0x0004db93) scroll_pane_cp16

0x9f19,	// (0x0004dbfd) button_value_adjust_pane_ParamLimits

0x9f19,	// (0x0004dbfd) button_value_adjust_pane

0xae5d,	// (0x0004eb41) button_value_adjust_pane_cp6_ParamLimits

0xae5d,	// (0x0004eb41) button_value_adjust_pane_cp6

0xaf83,	// (0x0004ec67) settings_code_pane_cp_ParamLimits

0xaf83,	// (0x0004ec67) settings_code_pane_cp

0x09b9,	// (0x0004469d) cell_touch_pane_g1

0x09b9,	// (0x0004469d) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x000533bd) cell_touch_pane_g

0xb503,	// (0x0004f1e7) cell_touch_pane_cp_ParamLimits

0xb503,	// (0x0004f1e7) cell_touch_pane_cp

0xb513,	// (0x0004f1f7) cell_touch_pane_ParamLimits

0xb513,	// (0x0004f1f7) cell_touch_pane

0x09b9,	// (0x0004469d) scroll_sc2_down_pane_g1

0x09b9,	// (0x0004469d) scroll_sc2_up_pane_g1

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp4_vc

0xb525,	// (0x0004f209) list_set_graphic_pane_vc_g1_ParamLimits

0xb525,	// (0x0004f209) list_set_graphic_pane_vc_g1

0xb531,	// (0x0004f215) list_set_graphic_pane_vc_g2_ParamLimits

0xb531,	// (0x0004f215) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000536b9) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000536b9) list_set_graphic_pane_vc_g

0xb53d,	// (0x0004f221) text_primary_small_cp13_vc_ParamLimits

0xb53d,	// (0x0004f221) text_primary_small_cp13_vc

0xb555,	// (0x0004f239) list_set_graphic_pane_vc_ParamLimits

0xb555,	// (0x0004f239) list_set_graphic_pane_vc

0x09c3,	// (0x000446a7) input_focus_pane_cp2_vc

0x09b9,	// (0x0004469d) setting_code_pane_vc_g1

0x0a36,	// (0x0004471a) setting_code_pane_vc_t1

0xb568,	// (0x0004f24c) set_text_pane_vc_t1_ParamLimits

0xb568,	// (0x0004f24c) set_text_pane_vc_t1

0x09c3,	// (0x000446a7) input_focus_pane_cp1_vc

0xb585,	// (0x0004f269) list_set_text_pane_vc

0x09b9,	// (0x0004469d) setting_text_pane_vc_g1

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp2_vc

0x0a2d,	// (0x00044711) setting_slider_graphic_pane_vc_g1

0xb58f,	// (0x0004f273) setting_slider_graphic_pane_vc_t1

0xb59f,	// (0x0004f283) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000536be) setting_slider_graphic_pane_vc_t

0xb5af,	// (0x0004f293) slider_set_pane_cp_vc

0xb5b7,	// (0x0004f29b) slider_set_pane_vc_g1

0xb5c0,	// (0x0004f2a4) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000536c3) slider_set_pane_vc_g

0x0e2d,	// (0x00044b11) set_opt_bg_pane_g1_copy1

0x0e35,	// (0x00044b19) set_opt_bg_pane_g2_copy1

0xb5ec,	// (0x0004f2d0) set_opt_bg_pane_g3_copy1

0x0e45,	// (0x00044b29) set_opt_bg_pane_g4_copy1

0x0e4d,	// (0x00044b31) set_opt_bg_pane_g5_copy1

0x0e55,	// (0x00044b39) set_opt_bg_pane_g6_copy1

0xb5f4,	// (0x0004f2d8) set_opt_bg_pane_g7_copy1

0xb5fe,	// (0x0004f2e2) set_opt_bg_pane_g8_copy1

0xb606,	// (0x0004f2ea) set_opt_bg_pane_g9_copy1

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp_vc

0xb60e,	// (0x0004f2f2) setting_slider_pane_vc_t1

0xb61d,	// (0x0004f301) setting_slider_pane_vc_t2

0xb62d,	// (0x0004f311) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000536d2) setting_slider_pane_vc_t

0xb63d,	// (0x0004f321) slider_set_pane_vc

0x8310,	// (0x0004bff4) volume_set_pane_vc_g1

0x86b6,	// (0x0004c39a) volume_set_pane_vc_g2

0x86bf,	// (0x0004c3a3) volume_set_pane_vc_g3

0x86c8,	// (0x0004c3ac) volume_set_pane_vc_g4

0x86d1,	// (0x0004c3b5) volume_set_pane_vc_g5

0x86da,	// (0x0004c3be) volume_set_pane_vc_g6

0x86e3,	// (0x0004c3c7) volume_set_pane_vc_g7

0x86ec,	// (0x0004c3d0) volume_set_pane_vc_g8

0x86f5,	// (0x0004c3d9) volume_set_pane_vc_g9

0x86fe,	// (0x0004c3e2) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000536d9) volume_set_pane_vc_g

0xb645,	// (0x0004f329) volume_set_pane_vc

0xb64f,	// (0x0004f333) button_value_adjust_pane_cp1_vc

0xb659,	// (0x0004f33d) list_highlight_pane_cp2_vc

0xb662,	// (0x0004f346) list_set_pane_vc_ParamLimits

0xb662,	// (0x0004f346) list_set_pane_vc

0xb6c0,	// (0x0004f3a4) main_pane_set_vc_t1_ParamLimits

0xb6c0,	// (0x0004f3a4) main_pane_set_vc_t1

0xb6d5,	// (0x0004f3b9) main_pane_set_vc_t2_ParamLimits

0xb6d5,	// (0x0004f3b9) main_pane_set_vc_t2

0xb6e7,	// (0x0004f3cb) main_pane_set_vc_t3_ParamLimits

0xb6e7,	// (0x0004f3cb) main_pane_set_vc_t3

0xb6f9,	// (0x0004f3dd) main_pane_set_vc_t4_ParamLimits

0xb6f9,	// (0x0004f3dd) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x000536ee) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x000536ee) main_pane_set_vc_t

0xb70b,	// (0x0004f3ef) setting_code_pane_vc_ParamLimits

0xb70b,	// (0x0004f3ef) setting_code_pane_vc

0xb71a,	// (0x0004f3fe) setting_slider_graphic_pane_vc

0xb71a,	// (0x0004f3fe) setting_slider_pane_vc

0xb71a,	// (0x0004f3fe) setting_text_pane_vc

0xb71a,	// (0x0004f3fe) setting_volume_pane_vc

0xb722,	// (0x0004f406) scroll_pane_cp121_vc

0x0daf,	// (0x00044a93) set_content_pane_vc

0xb72a,	// (0x0004f40e) button_value_adjust_pane_g1

0xb733,	// (0x0004f417) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x00053751) button_value_adjust_pane_g

0xb73c,	// (0x0004f420) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73c,	// (0x0004f420) form_field_slider_wide_pane_vc_t1

0xb750,	// (0x0004f434) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb750,	// (0x0004f434) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00053756) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00053756) form_field_slider_wide_pane_vc_t

0x0a11,	// (0x000446f5) input_focus_pane_cp10_vc_ParamLimits

0x0a11,	// (0x000446f5) input_focus_pane_cp10_vc

0xb77e,	// (0x0004f462) slider_cont_pane_cp1_vc_ParamLimits

0xb77e,	// (0x0004f462) slider_cont_pane_cp1_vc

0xb790,	// (0x0004f474) slider_form_pane_g1_cp2

0xb5c0,	// (0x0004f2a4) slider_form_pane_g2_cp2

0xb7bd,	// (0x0004f4a1) form_field_slider_pane_vc_t3

0xb7cb,	// (0x0004f4af) form_field_slider_pane_vc_t4

0xb7d9,	// (0x0004f4bd) slider_form_pane_vc_ParamLimits

0xb7d9,	// (0x0004f4bd) slider_form_pane_vc

0xb7e6,	// (0x0004f4ca) form_field_slider_pane_vc_t1_ParamLimits

0xb7e6,	// (0x0004f4ca) form_field_slider_pane_vc_t1

0xb750,	// (0x0004f434) form_field_slider_pane_vc_t2_ParamLimits

0xb750,	// (0x0004f434) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00053768) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00053768) form_field_slider_pane_vc_t

0x0a11,	// (0x000446f5) input_focus_pane_cp9_vc_ParamLimits

0x0a11,	// (0x000446f5) input_focus_pane_cp9_vc

0xb802,	// (0x0004f4e6) slider_cont_pane_vc_ParamLimits

0xb802,	// (0x0004f4e6) slider_cont_pane_vc

0xb816,	// (0x0004f4fa) list_form_graphic_pane_cp_vc_ParamLimits

0xb816,	// (0x0004f4fa) list_form_graphic_pane_cp_vc

0x9b6e,	// (0x0004d852) form_field_popup_wide_pane_vc_g1

0xb82b,	// (0x0004f50f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82b,	// (0x0004f50f) form_field_popup_wide_pane_vc_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_cp8_vc_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_cp8_vc

0xb870,	// (0x0004f554) list_form_wide_pane_vc_ParamLimits

0xb870,	// (0x0004f554) list_form_wide_pane_vc

0xb87c,	// (0x0004f560) list_form_graphic_pane_vc_g1

0xb884,	// (0x0004f568) list_form_graphic_pane_vc_t1_ParamLimits

0xb884,	// (0x0004f568) list_form_graphic_pane_vc_t1

0x0a1f,	// (0x00044703) list_highlight_pane_cp5_vc_ParamLimits

0x0a1f,	// (0x00044703) list_highlight_pane_cp5_vc

0xb8a0,	// (0x0004f584) list_form_graphic_pane_vc_ParamLimits

0xb8a0,	// (0x0004f584) list_form_graphic_pane_vc

0x9b6e,	// (0x0004d852) form_field_popup_pane_vc_g1

0xb8b6,	// (0x0004f59a) form_field_popup_pane_vc_t1_ParamLimits

0xb8b6,	// (0x0004f59a) form_field_popup_pane_vc_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_cp7_vc_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_cp7_vc

0xb8cd,	// (0x0004f5b1) list_form_pane_vc_ParamLimits

0xb8cd,	// (0x0004f5b1) list_form_pane_vc

0xb8d9,	// (0x0004f5bd) data_form_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0004f5bd) data_form_pane_vc_t1

0x0e2d,	// (0x00044b11) input_focus_pane_vc_g1

0x0e35,	// (0x00044b19) input_focus_pane_vc_g2

0x0e3d,	// (0x00044b21) input_focus_pane_vc_g3

0x0e45,	// (0x00044b29) input_focus_pane_vc_g4

0x0e4d,	// (0x00044b31) input_focus_pane_vc_g5

0x0e55,	// (0x00044b39) input_focus_pane_vc_g6

0x0e5d,	// (0x00044b41) input_focus_pane_vc_g7

0x0e65,	// (0x00044b49) input_focus_pane_vc_g8

0x0e6d,	// (0x00044b51) input_focus_pane_vc_g9

0x09b9,	// (0x0004469d) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00053346) input_focus_pane_vc_g

0x9b62,	// (0x0004d846) data_form_pane_vc_ParamLimits

0x9b62,	// (0x0004d846) data_form_pane_vc

0x9b6e,	// (0x0004d852) form_field_data_pane_vc_g1

0xb8f4,	// (0x0004f5d8) form_field_data_pane_vc_t1_ParamLimits

0xb8f4,	// (0x0004f5d8) form_field_data_pane_vc_t1

0x0dd5,	// (0x00044ab9) input_focus_pane_vc_ParamLimits

0x0dd5,	// (0x00044ab9) input_focus_pane_vc

0xb90e,	// (0x0004f5f2) button_value_adjust_pane_cp3_vc

0xb916,	// (0x0004f5fa) button_value_adjust_pane_cp5_vc

0xb91e,	// (0x0004f602) form_field_data_pane_vc_ParamLimits

0xb91e,	// (0x0004f602) form_field_data_pane_vc

0xb935,	// (0x0004f619) form_field_data_pane_vc_cp2

0xb93d,	// (0x0004f621) form_field_data_wide_pane_vc_ParamLimits

0xb93d,	// (0x0004f621) form_field_data_wide_pane_vc

0xb953,	// (0x0004f637) form_field_data_wide_pane_vc_cp2

0xb95b,	// (0x0004f63f) form_field_popup_pane_vc_ParamLimits

0xb95b,	// (0x0004f63f) form_field_popup_pane_vc

0xb972,	// (0x0004f656) form_field_popup_wide_pane_vc_ParamLimits

0xb972,	// (0x0004f656) form_field_popup_wide_pane_vc

0xb988,	// (0x0004f66c) form_field_slider_pane_vc_ParamLimits

0xb988,	// (0x0004f66c) form_field_slider_pane_vc

0xb99b,	// (0x0004f67f) form_field_slider_wide_pane_vc_ParamLimits

0xb99b,	// (0x0004f67f) form_field_slider_wide_pane_vc

0xb9ae,	// (0x0004f692) grid_touch_1_pane_ParamLimits

0xb9ae,	// (0x0004f692) grid_touch_1_pane

0xb9ba,	// (0x0004f69e) grid_touch_2_pane_ParamLimits

0xb9ba,	// (0x0004f69e) grid_touch_2_pane

0x17a6,	// (0x0004548a) touch_pane_g1_ParamLimits

0x17a6,	// (0x0004548a) touch_pane_g1

0xb9d2,	// (0x0004f6b6) cell_app_pane_cp_wide_ParamLimits

0xb9d2,	// (0x0004f6b6) cell_app_pane_cp_wide

0xb9e3,	// (0x0004f6c7) grid_popup_fast_wide_pane_ParamLimits

0xb9e3,	// (0x0004f6c7) grid_popup_fast_wide_pane

0xb9f7,	// (0x0004f6db) scroll_pane_cp19_ParamLimits

0xb9f7,	// (0x0004f6db) scroll_pane_cp19

0x09c3,	// (0x000446a7) bg_popup_window_pane_cp20

0xba0b,	// (0x0004f6ef) listscroll_popup_fast_wide_pane

0xba13,	// (0x0004f6f7) grid_indicator_nsta_pane

0xba25,	// (0x0004f709) clock_nsta_pane_g1

0xba2e,	// (0x0004f712) clock_nsta_pane_t1

0xba4a,	// (0x0004f72e) cell_indicator_nsta_pane_ParamLimits

0xba4a,	// (0x0004f72e) cell_indicator_nsta_pane

0xba7f,	// (0x0004f763) cell_indicator_nsta_pane_g1

0xba8d,	// (0x0004f771) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00053779) cell_indicator_nsta_pane_g

0xba9f,	// (0x0004f783) clock_nsta_pane_cp

0xbaa8,	// (0x0004f78c) indicator_nsta_pane_cp

0xbab2,	// (0x0004f796) nsta_clock_indic_pane_g1

0x0a5b,	// (0x0004473f) grid_indicator_pane

0x71a1,	// (0x0004ae85) scroll_pane_cp29

0x73bd,	// (0x0004b0a1) indicator_nsta_pane_cp2_ParamLimits

0x73bd,	// (0x0004b0a1) indicator_nsta_pane_cp2

0x0a1f,	// (0x00044703) main_apps_wheel_pane

0x9d86,	// (0x0004da6a) form_midp_field_text_pane_ParamLimits

0x9ecf,	// (0x0004dbb3) scroll_bar_cp050_ParamLimits

0xbb0b,	// (0x0004f7ef) cell_indicator_pane_ParamLimits

0xbb0b,	// (0x0004f7ef) cell_indicator_pane

0xbb24,	// (0x0004f808) cell_indicator_pane_g1

0xbb2e,	// (0x0004f812) grid_wheel_folder_pane_ParamLimits

0xbb2e,	// (0x0004f812) grid_wheel_folder_pane

0xbb44,	// (0x0004f828) list_wheel_apps_pane_ParamLimits

0xbb44,	// (0x0004f828) list_wheel_apps_pane

0xbb55,	// (0x0004f839) main_apps_wheel_pane_g1_ParamLimits

0xbb55,	// (0x0004f839) main_apps_wheel_pane_g1

0xbb69,	// (0x0004f84d) main_apps_wheel_pane_g2_ParamLimits

0xbb69,	// (0x0004f84d) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x00053795) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x00053795) main_apps_wheel_pane_g

0xbb81,	// (0x0004f865) main_apps_wheel_pane_t1_ParamLimits

0xbb81,	// (0x0004f865) main_apps_wheel_pane_t1

0xbba4,	// (0x0004f888) list_wheel_apps_pane_g1

0xbbac,	// (0x0004f890) list_wheel_apps_pane_g2

0xbbb4,	// (0x0004f898) list_wheel_apps_pane_g3

0xbbbe,	// (0x0004f8a2) list_wheel_apps_pane_g4

0xbbc8,	// (0x0004f8ac) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005379a) list_wheel_apps_pane_g

0x1536,	// (0x0004521a) navi_icon_text_pane

0x7f2b,	// (0x0004bc0f) aid_fill_nsta

0xbbeb,	// (0x0004f8cf) navi_icon_text_pane_g1

0xbbf7,	// (0x0004f8db) navi_icon_text_pane_t1

0x141a,	// (0x000450fe) list_set_graphic_pane_t1_ParamLimits

0x141a,	// (0x000450fe) list_set_graphic_pane_t1

0xa61a,	// (0x0004e2fe) popup_midp_note_alarm_window_t6_ParamLimits

0xa61a,	// (0x0004e2fe) popup_midp_note_alarm_window_t6

0xa62c,	// (0x0004e310) popup_midp_note_alarm_window_t7_ParamLimits

0xa62c,	// (0x0004e310) popup_midp_note_alarm_window_t7

0xa63e,	// (0x0004e322) popup_midp_note_alarm_window_t8_ParamLimits

0xa63e,	// (0x0004e322) popup_midp_note_alarm_window_t8

0xa650,	// (0x0004e334) popup_midp_note_alarm_window_t9_ParamLimits

0xa650,	// (0x0004e334) popup_midp_note_alarm_window_t9

0xa662,	// (0x0004e346) popup_midp_note_alarm_window_t10_ParamLimits

0xa662,	// (0x0004e346) popup_midp_note_alarm_window_t10

0xa674,	// (0x0004e358) popup_midp_note_alarm_window_t11_ParamLimits

0xa674,	// (0x0004e358) popup_midp_note_alarm_window_t11

0xa686,	// (0x0004e36a) scroll_pane_cp17_ParamLimits

0xa686,	// (0x0004e36a) scroll_pane_cp17

0x8310,	// (0x0004bff4) volume_small_pane_cp_g1

0x8787,	// (0x0004c46b) volume_small_pane_cp_g2

0x8790,	// (0x0004c474) volume_small_pane_cp_g3

0x8799,	// (0x0004c47d) volume_small_pane_cp_g4

0x87a2,	// (0x0004c486) volume_small_pane_cp_g5

0x86d1,	// (0x0004c3b5) volume_small_pane_cp_g6

0x87ab,	// (0x0004c48f) volume_small_pane_cp_g7

0x87b4,	// (0x0004c498) volume_small_pane_cp_g8

0x87bd,	// (0x0004c4a1) volume_small_pane_cp_g9

0x87c6,	// (0x0004c4aa) volume_small_pane_cp_g10

0x1687,	// (0x0004536b) midp_ticker_pane_g1_ParamLimits

0x1693,	// (0x00045377) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00053412) midp_ticker_pane_g_ParamLimits

0x169f,	// (0x00045383) midp_ticker_pane_t1_ParamLimits

0x7f41,	// (0x0004bc25) aid_fill_nsta_2

0x9ebb,	// (0x0004db9f) list_form2_midp_pane

0xafce,	// (0x0004ecb2) midp_editing_number_pane_ParamLimits

0xafdd,	// (0x0004ecc1) midp_ticker_pane_ParamLimits

0xbc09,	// (0x0004f8ed) form2_midp_field_pane

0xbc2d,	// (0x0004f911) scroll_pane_cp51

0xbc4d,	// (0x0004f931) form2_midp_button_pane_ParamLimits

0xbc4d,	// (0x0004f931) form2_midp_button_pane

0xbc5f,	// (0x0004f943) form2_midp_content_pane_ParamLimits

0xbc5f,	// (0x0004f943) form2_midp_content_pane

0xbc79,	// (0x0004f95d) form2_midp_field_choice_group_pane

0xbc81,	// (0x0004f965) form2_midp_field_pane_g1

0xbc89,	// (0x0004f96d) form2_midp_field_pane_g2

0xbc91,	// (0x0004f975) form2_midp_field_pane_g3

0xbc99,	// (0x0004f97d) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x000537bf) form2_midp_field_pane_g

0xbca1,	// (0x0004f985) form2_midp_gauge_slider_pane

0xbca9,	// (0x0004f98d) form2_midp_gauge_wait_pane

0xbcb1,	// (0x0004f995) form2_midp_image_pane_ParamLimits

0xbcb1,	// (0x0004f995) form2_midp_image_pane

0xbccc,	// (0x0004f9b0) form2_midp_label_pane_ParamLimits

0xbccc,	// (0x0004f9b0) form2_midp_label_pane

0xbce5,	// (0x0004f9c9) form2_midp_label_pane_cp_ParamLimits

0xbce5,	// (0x0004f9c9) form2_midp_label_pane_cp

0xbd06,	// (0x0004f9ea) form2_midp_string_pane_ParamLimits

0xbd06,	// (0x0004f9ea) form2_midp_string_pane

0x6053,	// (0x00049d37) form2_midp_text_pane_ParamLimits

0x6053,	// (0x00049d37) form2_midp_text_pane

0xbd18,	// (0x0004f9fc) form2_midp_time_pane

0xbd28,	// (0x0004fa0c) input_focus_pane_cp51_ParamLimits

0xbd28,	// (0x0004fa0c) input_focus_pane_cp51

0xbd40,	// (0x0004fa24) form2_midp_label_pane_t1_ParamLimits

0xbd40,	// (0x0004fa24) form2_midp_label_pane_t1

0x6070,	// (0x00049d54) form2_mdip_text_pane_t1_ParamLimits

0x6070,	// (0x00049d54) form2_mdip_text_pane_t1

0x608e,	// (0x00049d72) form2_midp_time_pane_t1

0xbd89,	// (0x0004fa6d) form2_midp_gauge_slider_pane_t1

0xbd9b,	// (0x0004fa7f) form2_midp_gauge_slider_pane_t2

0xbdad,	// (0x0004fa91) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x000537c8) form2_midp_gauge_slider_pane_t

0xbdbf,	// (0x0004faa3) form2_midp_slider_pane

0xbdcb,	// (0x0004faaf) form2_midp_gauge_wait_pane_t1

0xbdd9,	// (0x0004fabd) form2_midp_wait_pane_ParamLimits

0xbdd9,	// (0x0004fabd) form2_midp_wait_pane

0xbe04,	// (0x0004fae8) list_single_2graphic_pane_cp4_ParamLimits

0xbe04,	// (0x0004fae8) list_single_2graphic_pane_cp4

0x9bd7,	// (0x0004d8bb) list_single_midp_graphic_pane_cp_ParamLimits

0x9bd7,	// (0x0004d8bb) list_single_midp_graphic_pane_cp

0x09c3,	// (0x000446a7) list_highlight_pane_cp20

0xbe2c,	// (0x0004fb10) list_single_2graphic_pane_g1_cp4

0xb409,	// (0x0004f0ed) list_single_2graphic_pane_g2_cp4

0xbe34,	// (0x0004fb18) list_single_2graphic_pane_t1_cp4

0x0a1f,	// (0x00044703) list_highlight_pane_cp21

0xbe43,	// (0x0004fb27) list_single_midp_graphic_pane_g4_cp

0xbe52,	// (0x0004fb36) list_single_midp_graphic_pane_t1_cp

0xbe67,	// (0x0004fb4b) form2_mdip_string_pane_t1_ParamLimits

0xbe67,	// (0x0004fb4b) form2_mdip_string_pane_t1

0x09c3,	// (0x000446a7) bg_wml_button_pane_cp2

0x09b9,	// (0x0004469d) form2_midp_image_pane_g1

0x6d9f,	// (0x0004aa83) list_double_large_graphic_pane_g5_ParamLimits

0x6d9f,	// (0x0004aa83) list_double_large_graphic_pane_g5

0x7599,	// (0x0004b27d) midp_form_pane_ParamLimits

0x0a1f,	// (0x00044703) main_apps_wheel_pane_ParamLimits

0x7d13,	// (0x0004b9f7) popup_preview_window_ParamLimits

0x7d13,	// (0x0004b9f7) popup_preview_window

0x7ece,	// (0x0004bbb2) popup_touch_info_window_ParamLimits

0x7ece,	// (0x0004bbb2) popup_touch_info_window

0x7eec,	// (0x0004bbd0) popup_touch_menu_window_ParamLimits

0x7eec,	// (0x0004bbd0) popup_touch_menu_window

0x09af,	// (0x00044693) bg_popup_sub_pane_cp6

0xbf6e,	// (0x0004fc52) list_touch_menu_pane

0xbf76,	// (0x0004fc5a) list_single_touch_menu_pane_ParamLimits

0xbf76,	// (0x0004fc5a) list_single_touch_menu_pane

0xbf8c,	// (0x0004fc70) list_single_touch_menu_pane_t1

0x0a1f,	// (0x00044703) bg_popup_sub_pane_cp7_ParamLimits

0x0a1f,	// (0x00044703) bg_popup_sub_pane_cp7

0xbf9a,	// (0x0004fc7e) heading_sub_pane

0xbfa2,	// (0x0004fc86) list_touch_info_pane_ParamLimits

0xbfa2,	// (0x0004fc86) list_touch_info_pane

0xbfb1,	// (0x0004fc95) list_single_touch_info_pane_ParamLimits

0xbfb1,	// (0x0004fc95) list_single_touch_info_pane

0xbfc3,	// (0x0004fca7) list_single_touch_info_pane_t1

0xbfd1,	// (0x0004fcb5) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x000537d6) list_single_touch_info_pane_t

0x1670,	// (0x00045354) bg_popup_heading_pane_cp

0xbfdf,	// (0x0004fcc3) heading_sub_pane_t1

0x9afc,	// (0x0004d7e0) bg_popup_preview_window_pane_cp_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_preview_window_pane_cp

0xbf9a,	// (0x0004fc7e) heading_preview_pane

0xbfa2,	// (0x0004fc86) list_preview_pane_ParamLimits

0xbfa2,	// (0x0004fc86) list_preview_pane

0xbfed,	// (0x0004fcd1) popup_preview_window_g1

0xbfb1,	// (0x0004fc95) list_single_preview_pane_ParamLimits

0xbfb1,	// (0x0004fc95) list_single_preview_pane

0xbff5,	// (0x0004fcd9) list_single_preview_pane_g1

0xbffd,	// (0x0004fce1) list_single_preview_pane_t1

0xbfc3,	// (0x0004fca7) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x000537db) list_single_preview_pane_t

0xc00b,	// (0x0004fcef) bg_popup_heading_pane_cp2_ParamLimits

0xc00b,	// (0x0004fcef) bg_popup_heading_pane_cp2

0xc021,	// (0x0004fd05) heading_preview_pane_g1

0xc029,	// (0x0004fd0d) heading_preview_pane_t1_ParamLimits

0xc029,	// (0x0004fd0d) heading_preview_pane_t1

0x0a72,	// (0x00044756) soft_indicator_pane_t1_ParamLimits

0x0d51,	// (0x00044a35) scroll_pane_ParamLimits

0x1103,	// (0x00044de7) scroll_sc2_left_pane

0x10fa,	// (0x00044dde) scroll_sc2_right_pane

0x1122,	// (0x00044e06) scroll_bg_pane_g1_ParamLimits

0x1137,	// (0x00044e1b) scroll_bg_pane_g2_ParamLimits

0x114f,	// (0x00044e33) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0005339d) scroll_bg_pane_g_ParamLimits

0x1122,	// (0x00044e06) scroll_handle_pane_g1_ParamLimits

0x1164,	// (0x00044e48) scroll_handle_pane_g2_ParamLimits

0x114f,	// (0x00044e33) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x000533a4) scroll_handle_pane_g_ParamLimits

0x7996,	// (0x0004b67a) popup_choice_list_window_ParamLimits

0x7996,	// (0x0004b67a) popup_choice_list_window

0x99ba,	// (0x0004d69e) choice_list_pane

0x9a3c,	// (0x0004d720) cell_toolbar_pane_t1

0x9a64,	// (0x0004d748) toolbar_button_pane_ParamLimits

0xab40,	// (0x0004e824) ai_gene_pane_1_t2_ParamLimits

0xab40,	// (0x0004e824) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000535cc) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000535cc) ai_gene_pane_1_t

0xc046,	// (0x0004fd2a) scroll_sc2_left_pane_g1

0xc046,	// (0x0004fd2a) scroll_sc2_right_pane_g1

0x0f17,	// (0x00044bfb) bg_popup_sub_pane_cp10

0xc050,	// (0x0004fd34) list_choice_list_pane

0xc069,	// (0x0004fd4d) list_single_choice_list_pane_ParamLimits

0xc069,	// (0x0004fd4d) list_single_choice_list_pane

0xc07c,	// (0x0004fd60) list_single_choice_list_pane_g1

0x6e3a,	// (0x0004ab1e) list_single_choice_list_pane_t1_ParamLimits

0x6e3a,	// (0x0004ab1e) list_single_choice_list_pane_t1

0xc084,	// (0x0004fd68) choice_list_pane_g1

0xc08c,	// (0x0004fd70) choice_list_pane_t1

0x09af,	// (0x00044693) input_focus_pane_cp11

0x106f,	// (0x00044d53) title_pane_stacon_g2_ParamLimits

0x106f,	// (0x00044d53) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00053383) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00053383) title_pane_stacon_g

0x1670,	// (0x00045354) cursor_press_pane

0x7a3e,	// (0x0004b722) popup_fep_hwr_window_ParamLimits

0x7a3e,	// (0x0004b722) popup_fep_hwr_window

0x7ab6,	// (0x0004b79a) popup_fep_vkb_window_ParamLimits

0x7ab6,	// (0x0004b79a) popup_fep_vkb_window

0xc09a,	// (0x0004fd7e) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00053804) fep_vkb_side_pane_g_ParamLimits

0x8808,	// (0x0004c4ec) fep_hwr_candidate_pane_ParamLimits

0x8808,	// (0x0004c4ec) fep_hwr_candidate_pane

0x8832,	// (0x0004c516) fep_hwr_side_pane_ParamLimits

0x8832,	// (0x0004c516) fep_hwr_side_pane

0x8852,	// (0x0004c536) fep_hwr_top_pane_ParamLimits

0x8852,	// (0x0004c536) fep_hwr_top_pane

0x886a,	// (0x0004c54e) fep_hwr_write_pane_ParamLimits

0x886a,	// (0x0004c54e) fep_hwr_write_pane

0xfb20,	// (0x00053804) fep_vkb_side_pane_g

0xc0a2,	// (0x0004fd86) fep_hwr_top_pane_g1

0xc0b4,	// (0x0004fd98) fep_hwr_top_pane_g2

0x8896,	// (0x0004c57a) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x000537e0) fep_hwr_top_pane_g

0x88ab,	// (0x0004c58f) fep_hwr_top_text_pane

0x1227,	// (0x00044f0b) fep_hwr_top_text_pane_g1

0xc0ea,	// (0x0004fdce) fep_hwr_top_text_pane_t1

0x89a1,	// (0x0004c685) fep_hwr_candidate_pane_g1

0xc32f,	// (0x00050013) fep_vkb_keypad_pane_g3_ParamLimits

0xc32f,	// (0x00050013) fep_vkb_keypad_pane_g3

0xc357,	// (0x0005003b) fep_vkb_keypad_pane_g4_ParamLimits

0xc357,	// (0x0005003b) fep_vkb_keypad_pane_g4

0xc3c6,	// (0x000500aa) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c6,	// (0x000500aa) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005380b) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005380b) fep_vkb_bottom_pane_g

0xc046,	// (0x0004fd2a) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00053815) cell_vkb_side_pane_g

0xc451,	// (0x00050135) cell_vkb_side_pane_t1

0xc45f,	// (0x00050143) cell_vkb_side_pane_t1_copy1

0xc046,	// (0x0004fd2a) bg_fep_vkb_candidate_pane_g2

0xc58b,	// (0x0005026f) cell_vkb_candidate_pane_ParamLimits

0xc0f8,	// (0x0004fddc) aid_size_cell_vkb_ParamLimits

0xc0f8,	// (0x0004fddc) aid_size_cell_vkb

0xc58b,	// (0x0005026f) cell_vkb_candidate_pane

0x89bb,	// (0x0004c69f) bg_popup_fep_shadow_pane_g1

0xc186,	// (0x0004fe6a) fep_vkb_bottom_pane_ParamLimits

0xc186,	// (0x0004fe6a) fep_vkb_bottom_pane

0xc1bc,	// (0x0004fea0) fep_vkb_candidate_pane_ParamLimits

0xc1bc,	// (0x0004fea0) fep_vkb_candidate_pane

0xc1d8,	// (0x0004febc) fep_vkb_keypad_pane_ParamLimits

0xc1d8,	// (0x0004febc) fep_vkb_keypad_pane

0xc217,	// (0x0004fefb) fep_vkb_side_pane_ParamLimits

0xc217,	// (0x0004fefb) fep_vkb_side_pane

0xc253,	// (0x0004ff37) fep_vkb_top_pane_ParamLimits

0xc253,	// (0x0004ff37) fep_vkb_top_pane

0xc288,	// (0x0004ff6c) fep_vkb_top_pane_g1_ParamLimits

0xc288,	// (0x0004ff6c) fep_vkb_top_pane_g1

0xc297,	// (0x0004ff7b) fep_vkb_top_pane_g2_ParamLimits

0xc297,	// (0x0004ff7b) fep_vkb_top_pane_g2

0xc2a6,	// (0x0004ff8a) fep_vkb_top_pane_g3_ParamLimits

0xc2a6,	// (0x0004ff8a) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x000537fb) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x000537fb) fep_vkb_top_pane_g

0xc2c4,	// (0x0004ffa8) fep_vkb_top_text_pane_ParamLimits

0xc2c4,	// (0x0004ffa8) fep_vkb_top_text_pane

0xc2d5,	// (0x0004ffb9) fep_vkb_side_pane_g1_ParamLimits

0xc2d5,	// (0x0004ffb9) fep_vkb_side_pane_g1

0xc31e,	// (0x00050002) grid_vkb_side_pane_ParamLimits

0xc31e,	// (0x00050002) grid_vkb_side_pane

0x89c3,	// (0x0004c6a7) bg_popup_fep_shadow_pane_g2

0x89cc,	// (0x0004c6b0) bg_popup_fep_shadow_pane_g3

0x89d4,	// (0x0004c6b8) bg_popup_fep_shadow_pane_g4

0x89dd,	// (0x0004c6c1) bg_popup_fep_shadow_pane_g5

0x89e7,	// (0x0004c6cb) bg_popup_fep_shadow_pane_g6

0x89ef,	// (0x0004c6d3) bg_popup_fep_shadow_pane_g7

0x0e4d,	// (0x00044b31) bg_popup_fep_shadow_pane_g8

0xc375,	// (0x00050059) grid_vkb_keypad_number_pane_ParamLimits

0xc375,	// (0x00050059) grid_vkb_keypad_number_pane

0xc385,	// (0x00050069) grid_vkb_keypad_pane_ParamLimits

0xc385,	// (0x00050069) grid_vkb_keypad_pane

0xc3ab,	// (0x0005008f) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ab,	// (0x0005008f) fep_vkb_bottom_pane_g1

0xc3d4,	// (0x000500b8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d4,	// (0x000500b8) grid_vkb_keypad_bottom_left_pane

0xc3e9,	// (0x000500cd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e9,	// (0x000500cd) grid_vkb_keypad_bottom_right_pane

0xc3fe,	// (0x000500e2) fep_vkb_top_text_pane_g1

0xc419,	// (0x000500fd) fep_vkb_top_text_pane_t1

0xc42e,	// (0x00050112) cell_vkb_side_pane_ParamLimits

0xc42e,	// (0x00050112) cell_vkb_side_pane

0xc046,	// (0x0004fd2a) cell_vkb_side_pane_g1

0xc46d,	// (0x00050151) cell_vkb_keypad_pane_ParamLimits

0xc46d,	// (0x00050151) cell_vkb_keypad_pane

0xc4e2,	// (0x000501c6) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00053828) bg_popup_fep_shadow_pane_g

0xc046,	// (0x0004fd2a) cell_hwr_side_pane_g1

0xc046,	// (0x0004fd2a) cell_hwr_side_pane_g2

0xc4ec,	// (0x000501d0) cell_vkb_keypad_pane_t1

0xc4fa,	// (0x000501de) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fa,	// (0x000501de) cell_vkb_keypad_bottom_left_pane

0xc517,	// (0x000501fb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc517,	// (0x000501fb) cell_vkb_keypad_bottom_right_pane

0xc046,	// (0x0004fd2a) cell_vkb_keypad_bottom_left_pane_g1

0xc046,	// (0x0004fd2a) cell_vkb_keypad_bottom_right_pane_g1

0xc550,	// (0x00050234) cell_vkb_keypad_number_pane_ParamLimits

0xc550,	// (0x00050234) cell_vkb_keypad_number_pane

0xc56f,	// (0x00050253) cell_vkb_keypad_number_pane_g1

0xc579,	// (0x0005025d) cell_vkb_keypad_number_pane_g2

0xc582,	// (0x00050266) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005381a) cell_vkb_keypad_number_pane_g

0xc4ec,	// (0x000501d0) cell_vkb_keypad_number_pane_t1

0xc5a6,	// (0x0005028a) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x00053815) cell_hwr_side_pane_g

0xc5bf,	// (0x000502a3) cell_hwr_side_pane_t1

0x8a01,	// (0x0004c6e5) cell_hwr_side_pane_t1_copy1

0xc2b6,	// (0x0004ff9a) cell_hwr_candidate_pane_g1

0x8a0f,	// (0x0004c6f3) cell_hwr_candidate_pane_t1

0xc046,	// (0x0004fd2a) cell_vkb_candidate_pane_g2

0xc603,	// (0x000502e7) cell_vkb_candidate_pane_t1

0x87cf,	// (0x0004c4b3) bg_popup_fep_shadow_pane_ParamLimits

0x87cf,	// (0x0004c4b3) bg_popup_fep_shadow_pane

0x2d6e,	// (0x00046a52) bg_fep_hwr_top_pane_g4

0xc0c6,	// (0x0004fdaa) bg_hwr_side_pane_g1_ParamLimits

0xc0c6,	// (0x0004fdaa) bg_hwr_side_pane_g1

0x88e7,	// (0x0004c5cb) cell_hwr_side_pane_ParamLimits

0x88e7,	// (0x0004c5cb) cell_hwr_side_pane

0x8922,	// (0x0004c606) fep_hwr_write_pane_g1_ParamLimits

0x8922,	// (0x0004c606) fep_hwr_write_pane_g1

0x892f,	// (0x0004c613) fep_hwr_write_pane_g2_ParamLimits

0x892f,	// (0x0004c613) fep_hwr_write_pane_g2

0x893c,	// (0x0004c620) fep_hwr_write_pane_g3_ParamLimits

0x893c,	// (0x0004c620) fep_hwr_write_pane_g3

0x894a,	// (0x0004c62e) fep_hwr_write_pane_g4_ParamLimits

0x894a,	// (0x0004c62e) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x000537e7) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x000537e7) fep_hwr_write_pane_g

0x2d6e,	// (0x00046a52) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d6e,	// (0x00046a52) bg_fep_hwr_candidate_pane_g2

0x895f,	// (0x0004c643) cell_hwr_candidate_pane_ParamLimits

0x895f,	// (0x0004c643) cell_hwr_candidate_pane

0x89a1,	// (0x0004c685) fep_hwr_candidate_pane_g1_ParamLimits

0xc126,	// (0x0004fe0a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc126,	// (0x0004fe0a) bg_popup_fep_shadow_pane_cp2

0xc2b6,	// (0x0004ff9a) fep_vkb_top_pane_g4_ParamLimits

0xc2b6,	// (0x0004ff9a) fep_vkb_top_pane_g4

0xc2fc,	// (0x0004ffe0) fep_vkb_side_pane_g2_ParamLimits

0xc2fc,	// (0x0004ffe0) fep_vkb_side_pane_g2

0x57d6,	// (0x000494ba) list_setting_pane_t4_ParamLimits

0x57d6,	// (0x000494ba) list_setting_pane_t4

0x5870,	// (0x00049554) list_setting_number_pane_t5_ParamLimits

0x5870,	// (0x00049554) list_setting_number_pane_t5

0x71d0,	// (0x0004aeb4) list_double_heading_pane_cp2_ParamLimits

0x71d0,	// (0x0004aeb4) list_double_heading_pane_cp2

0x2336,	// (0x0004601a) list_double_heading_pane_g1_cp2_ParamLimits

0x2336,	// (0x0004601a) list_double_heading_pane_g1_cp2

0xc611,	// (0x000502f5) list_double_heading_pane_g2_cp2_ParamLimits

0xc611,	// (0x000502f5) list_double_heading_pane_g2_cp2

0xc625,	// (0x00050309) list_double_heading_pane_t1_cp2_ParamLimits

0xc625,	// (0x00050309) list_double_heading_pane_t1_cp2

0xc63b,	// (0x0005031f) list_double_heading_pane_t2_cp2_ParamLimits

0xc63b,	// (0x0005031f) list_double_heading_pane_t2_cp2

0x09a7,	// (0x0004468b) aid_value_unit2

0x6637,	// (0x0004a31b) popup_preview_fixed_window

0x0b49,	// (0x0004482d) bg_popup_preview_window_pane_cp02

0xc64d,	// (0x00050331) list_preview_fixed_pane

0xc693,	// (0x00050377) list_empty_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_empty_pane_fp

0xc693,	// (0x00050377) list_single_cale_day_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_cale_day_pane_fp

0xc693,	// (0x00050377) list_single_graphic_heading_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_graphic_heading_pane_fp

0xc693,	// (0x00050377) list_single_graphic_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_graphic_pane_fp

0xc693,	// (0x00050377) list_single_heading_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_heading_pane_fp

0xc693,	// (0x00050377) list_single_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_pane_fp

0xc6a9,	// (0x0005038d) list_single_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0005038d) list_single_pane_fp_g1

0x24a8,	// (0x0004618c) list_single_pane_fp_g2_ParamLimits

0x24a8,	// (0x0004618c) list_single_pane_fp_g2

0xc76b,	// (0x0005044f) list_single_pane_fp_g3_ParamLimits

0xc76b,	// (0x0005044f) list_single_pane_fp_g3

0xc6b5,	// (0x00050399) list_single_pane_fp_g4_ParamLimits

0xc6b5,	// (0x00050399) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x00053849) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x00053849) list_single_pane_fp_g

0x60a1,	// (0x00049d85) list_single_pane_fp_t1_ParamLimits

0x60a1,	// (0x00049d85) list_single_pane_fp_t1

0x60b8,	// (0x00049d9c) list_single_graphic_pane_fp_g1_ParamLimits

0x60b8,	// (0x00049d9c) list_single_graphic_pane_fp_g1

0xc6a9,	// (0x0005038d) list_single_graphic_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0005038d) list_single_graphic_pane_fp_g2

0x24a8,	// (0x0004618c) list_single_graphic_pane_fp_g3_ParamLimits

0x24a8,	// (0x0004618c) list_single_graphic_pane_fp_g3

0xc76b,	// (0x0005044f) list_single_graphic_pane_fp_g4_ParamLimits

0xc76b,	// (0x0005044f) list_single_graphic_pane_fp_g4

0xc6b5,	// (0x00050399) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b5,	// (0x00050399) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053852) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053852) list_single_graphic_pane_fp_g

0x60c4,	// (0x00049da8) list_single_graphic_pane_fp_t1_ParamLimits

0x60c4,	// (0x00049da8) list_single_graphic_pane_fp_t1

0x60b8,	// (0x00049d9c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x60b8,	// (0x00049d9c) list_single_graphic_heading_pane_fp_g1

0xc6a9,	// (0x0005038d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0005038d) list_single_graphic_heading_pane_fp_g2

0x24a8,	// (0x0004618c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x24a8,	// (0x0004618c) list_single_graphic_heading_pane_fp_g3

0xc76b,	// (0x0005044f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc76b,	// (0x0005044f) list_single_graphic_heading_pane_fp_g4

0xc6b5,	// (0x00050399) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b5,	// (0x00050399) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053852) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053852) list_single_graphic_heading_pane_fp_g

0x60da,	// (0x00049dbe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x60da,	// (0x00049dbe) list_single_graphic_heading_pane_fp_t1

0x60f0,	// (0x00049dd4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x60f0,	// (0x00049dd4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0005385d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0005385d) list_single_graphic_heading_pane_fp_t

0x6102,	// (0x00049de6) list_single_cale_day_pane_fp_g1_ParamLimits

0x6102,	// (0x00049de6) list_single_cale_day_pane_fp_g1

0xc6c1,	// (0x000503a5) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c1,	// (0x000503a5) list_single_cale_day_pane_fp_g2

0x8a2d,	// (0x0004c711) list_single_cale_day_pane_fp_g3_ParamLimits

0x8a2d,	// (0x0004c711) list_single_cale_day_pane_fp_g3

0x8a55,	// (0x0004c739) list_single_cale_day_pane_fp_g4_ParamLimits

0x8a55,	// (0x0004c739) list_single_cale_day_pane_fp_g4

0x8a79,	// (0x0004c75d) list_single_cale_day_pane_fp_g5_ParamLimits

0x8a79,	// (0x0004c75d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x00053862) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x00053862) list_single_cale_day_pane_fp_g

0x613a,	// (0x00049e1e) list_single_cale_day_pane_fp_t1_ParamLimits

0x613a,	// (0x00049e1e) list_single_cale_day_pane_fp_t1

0x6160,	// (0x00049e44) list_single_cale_day_pane_fp_t2_ParamLimits

0x6160,	// (0x00049e44) list_single_cale_day_pane_fp_t2

0x6179,	// (0x00049e5d) list_single_cale_day_pane_fp_t3_ParamLimits

0x6179,	// (0x00049e5d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0005386d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0005386d) list_single_cale_day_pane_fp_t

0xc6a9,	// (0x0005038d) list_empty_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0005038d) list_empty_pane_fp_g1

0x6192,	// (0x00049e76) list_empty_pane_fp_t1

0x61a0,	// (0x00049e84) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x00053874) list_empty_pane_fp_t

0xc6a9,	// (0x0005038d) list_single_heading_pane_fp_g1_ParamLimits

0xc6a9,	// (0x0005038d) list_single_heading_pane_fp_g1

0x24a8,	// (0x0004618c) list_single_heading_pane_fp_g2_ParamLimits

0x24a8,	// (0x0004618c) list_single_heading_pane_fp_g2

0xc76b,	// (0x0005044f) list_single_heading_pane_fp_g3_ParamLimits

0xc76b,	// (0x0005044f) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x00053879) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00053879) list_single_heading_pane_fp_g

0x61ae,	// (0x00049e92) list_single_heading_pane_fp_t1_ParamLimits

0x61ae,	// (0x00049e92) list_single_heading_pane_fp_t1

0x61c0,	// (0x00049ea4) list_single_heading_pane_fp_t2_ParamLimits

0x61c0,	// (0x00049ea4) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x00053880) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x00053880) list_single_heading_pane_fp_t

0x6ea0,	// (0x0004ab84) aid_size_cell_fast

0x0b2c,	// (0x00044810) soft_indicator_pane_cp1_t1

0x6ea9,	// (0x0004ab8d) cell_app_pane_cp2_ParamLimits

0x6ea9,	// (0x0004ab8d) cell_app_pane_cp2

0x87f1,	// (0x0004c4d5) fep_hwr_candidate_drop_down_list_pane

0x2f94,	// (0x00046c78) fep_hwr_candidate_pane_g3_ParamLimits

0x2f94,	// (0x00046c78) fep_hwr_candidate_pane_g3

0x2fa1,	// (0x00046c85) fep_hwr_candidate_pane_g4_ParamLimits

0x2fa1,	// (0x00046c85) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x000537f4) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x000537f4) fep_hwr_candidate_pane_g

0xc1ab,	// (0x0004fe8f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1ab,	// (0x0004fe8f) fep_vkb_candidate_drop_down_list_pane

0xc5ae,	// (0x00050292) fep_vkb_candidate_pane_g3

0xc5b6,	// (0x0005029a) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00053821) fep_vkb_candidate_pane_g

0xc2b6,	// (0x0004ff9a) cell_hwr_candidate_pane_g1_ParamLimits

0xc729,	// (0x0005040d) cell_hwr_candidate_pane_g3_ParamLimits

0xc729,	// (0x0005040d) cell_hwr_candidate_pane_g3

0xc74a,	// (0x0005042e) cell_hwr_candidate_pane_g4_ParamLimits

0xc74a,	// (0x0005042e) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0005383b) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0005383b) cell_hwr_candidate_pane_g

0xc5cd,	// (0x000502b1) cell_vkb_candidate_pane_g3_ParamLimits

0xc5cd,	// (0x000502b1) cell_vkb_candidate_pane_g3

0xc5e8,	// (0x000502cc) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e8,	// (0x000502cc) cell_vkb_candidate_pane_g4

0xc6cd,	// (0x000503b1) cell_app_pane_cp2_g1_ParamLimits

0xc6cd,	// (0x000503b1) cell_app_pane_cp2_g1

0xc6eb,	// (0x000503cf) cell_app_pane_cp2_g2_ParamLimits

0xc6eb,	// (0x000503cf) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x00053885) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x00053885) cell_app_pane_cp2_g

0xc6f7,	// (0x000503db) cell_app_pane_cp2_t1_ParamLimits

0xc6f7,	// (0x000503db) cell_app_pane_cp2_t1

0x0dd5,	// (0x00044ab9) grid_highlight_pane_cp1_ParamLimits

0x0dd5,	// (0x00044ab9) grid_highlight_pane_cp1

0x8a9d,	// (0x0004c781) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a9d,	// (0x0004c781) cell_hwr_candidate_pane_cp1

0xc2b6,	// (0x0004ff9a) fep_hwr_candidate_drop_down_list_pane_g1

0xc77f,	// (0x00050463) fep_hwr_candidate_drop_down_list_pane_g2

0xc78c,	// (0x00050470) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0005388a) fep_hwr_candidate_drop_down_list_pane_g

0x8abc,	// (0x0004c7a0) fep_hwr_candidate_drop_down_list_scroll_pane

0x8ac5,	// (0x0004c7a9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8ac5,	// (0x0004c7a9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8ad2,	// (0x0004c7b6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8ad2,	// (0x0004c7b6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8adf,	// (0x0004c7c3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8adf,	// (0x0004c7c3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5cd,	// (0x000502b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5cd,	// (0x000502b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5e8,	// (0x000502cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5e8,	// (0x000502cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8aec,	// (0x0004c7d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8aec,	// (0x0004c7d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8b07,	// (0x0004c7eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8b07,	// (0x0004c7eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8b22,	// (0x0004c806) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8b22,	// (0x0004c806) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00053891) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00053891) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc709,	// (0x000503ed) cell_vkb_candidate_pane_cp1_ParamLimits

0xc709,	// (0x000503ed) cell_vkb_candidate_pane_cp1

0xc2b6,	// (0x0004ff9a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) fep_vkb_candidate_drop_down_list_pane_g1

0xc77f,	// (0x00050463) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc77f,	// (0x00050463) fep_vkb_candidate_drop_down_list_pane_g2

0xc78c,	// (0x00050470) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc78c,	// (0x00050470) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0005388a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0005388a) fep_vkb_candidate_drop_down_list_pane_g

0xc799,	// (0x0005047d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc799,	// (0x0005047d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7a6,	// (0x0005048a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7a6,	// (0x0005048a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7b3,	// (0x00050497) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7b3,	// (0x00050497) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7bf,	// (0x000504a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7bf,	// (0x000504a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc729,	// (0x0005040d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc729,	// (0x0005040d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc74a,	// (0x0005042e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc74a,	// (0x0005042e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7cb,	// (0x000504af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7cb,	// (0x000504af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ec,	// (0x000504d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ec,	// (0x000504d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc80d,	// (0x000504f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc80d,	// (0x000504f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x000538a2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x000538a2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6751,	// (0x0004a435) title_pane_g1_ParamLimits

0x675e,	// (0x0004a442) title_pane_g2_ParamLimits

0xf529,	// (0x0005320d) title_pane_g_ParamLimits

0x121f,	// (0x00044f03) aid_call2_pane

0x1217,	// (0x00044efb) aid_call_pane

0x1227,	// (0x00044f0b) popup_clock_analogue_window_g1

0x1227,	// (0x00044f0b) popup_clock_analogue_window_g2

0x71b1,	// (0x0004ae95) popup_clock_analogue_window_g3

0x71ba,	// (0x0004ae9e) popup_clock_analogue_window_g4

0x09b9,	// (0x0004469d) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x000533b2) popup_clock_analogue_window_g

0x71c2,	// (0x0004aea6) popup_clock_analogue_window_t1

0x71fa,	// (0x0004aede) clock_digital_number_pane_ParamLimits

0x71fa,	// (0x0004aede) clock_digital_number_pane

0x7206,	// (0x0004aeea) clock_digital_number_pane_cp02_ParamLimits

0x7206,	// (0x0004aeea) clock_digital_number_pane_cp02

0x7212,	// (0x0004aef6) clock_digital_number_pane_cp03_ParamLimits

0x7212,	// (0x0004aef6) clock_digital_number_pane_cp03

0x721e,	// (0x0004af02) clock_digital_number_pane_cp04_ParamLimits

0x721e,	// (0x0004af02) clock_digital_number_pane_cp04

0x722a,	// (0x0004af0e) clock_digital_separator_pane_ParamLimits

0x722a,	// (0x0004af0e) clock_digital_separator_pane

0x7236,	// (0x0004af1a) popup_clock_digital_window_t1_ParamLimits

0x7236,	// (0x0004af1a) popup_clock_digital_window_t1

0x09b9,	// (0x0004469d) clock_digital_number_pane_g1

0x09b9,	// (0x0004469d) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x000533bd) clock_digital_number_pane_g

0x09b9,	// (0x0004469d) clock_digital_separator_pane_g1

0x09b9,	// (0x0004469d) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x000533bd) clock_digital_separator_pane_g

0x7f2b,	// (0x0004bc0f) aid_fill_nsta_ParamLimits

0x8077,	// (0x0004bd5b) indicator_nsta_pane_ParamLimits

0x984a,	// (0x0004d52e) popup_clock_analogue_window

0x984a,	// (0x0004d52e) popup_clock_digital_window

0xba13,	// (0x0004f6f7) grid_indicator_nsta_pane_ParamLimits

0xba3c,	// (0x0004f720) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x00053774) clock_nsta_pane_t

0x70dc,	// (0x0004adc0) aid_size_max_handle

0x70e6,	// (0x0004adca) aid_size_min_handle

0x1670,	// (0x00045354) editor_scroll_pane

0xc828,	// (0x0005050c) ex_editor_pane

0x0f07,	// (0x00044beb) scroll_pane_cp13

0x0d7d,	// (0x00044a61) scroll_pane_cp14

0x1256,	// (0x00044f3a) scroll_pane_cp36

0x71e4,	// (0x0004aec8) list_single_graphic_hl_pane_cp2_ParamLimits

0x71e4,	// (0x0004aec8) list_single_graphic_hl_pane_cp2

0x5d40,	// (0x00049a24) list_single_graphic_hl_pane_ParamLimits

0x5d40,	// (0x00049a24) list_single_graphic_hl_pane

0x61d6,	// (0x00049eba) aid_size_min_hl_cp1

0xc830,	// (0x00050514) list_highlight_pane_cp34_ParamLimits

0xc830,	// (0x00050514) list_highlight_pane_cp34

0xc841,	// (0x00050525) list_single_graphic_hl_pane_g1_ParamLimits

0xc841,	// (0x00050525) list_single_graphic_hl_pane_g1

0x61df,	// (0x00049ec3) list_single_graphic_hl_pane_g2_ParamLimits

0x61df,	// (0x00049ec3) list_single_graphic_hl_pane_g2

0x61df,	// (0x00049ec3) list_single_graphic_hl_pane_g3_ParamLimits

0x61df,	// (0x00049ec3) list_single_graphic_hl_pane_g3

0x61eb,	// (0x00049ecf) list_single_graphic_hl_pane_g4_ParamLimits

0x61eb,	// (0x00049ecf) list_single_graphic_hl_pane_g4

0x61f7,	// (0x00049edb) list_single_graphic_hl_pane_g5_ParamLimits

0x61f7,	// (0x00049edb) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x000538b3) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x000538b3) list_single_graphic_hl_pane_g

0x620b,	// (0x00049eef) list_single_graphic_hl_pane_t1_ParamLimits

0x620b,	// (0x00049eef) list_single_graphic_hl_pane_t1

0xc84e,	// (0x00050532) aid_size_min_hl_cp2

0xc857,	// (0x0005053b) list_highlight_pane_cp34_cp2_ParamLimits

0xc857,	// (0x0005053b) list_highlight_pane_cp34_cp2

0xc841,	// (0x00050525) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc841,	// (0x00050525) list_single_graphic_hl_pane_g1_cp2

0xc864,	// (0x00050548) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc864,	// (0x00050548) list_single_graphic_hl_pane_g2_cp2

0xc870,	// (0x00050554) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc870,	// (0x00050554) list_single_graphic_hl_pane_g3_cp2

0x15cf,	// (0x000452b3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x15cf,	// (0x000452b3) list_single_graphic_hl_pane_g4_cp2

0xc87e,	// (0x00050562) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc87e,	// (0x00050562) list_single_graphic_hl_pane_g5_cp2

0x781d,	// (0x0004b501) control_pane_g4_ParamLimits

0x781d,	// (0x0004b501) control_pane_g4

0x0f17,	// (0x00044bfb) bg_popup_sub_pane_cp10_ParamLimits

0xc050,	// (0x0004fd34) list_choice_list_pane_ParamLimits

0xc05f,	// (0x0004fd43) scroll_pane_cp23

0x0b49,	// (0x0004482d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64d,	// (0x00050331) list_preview_fixed_pane_ParamLimits

0xc663,	// (0x00050347) list_preview_fixed_pane_cp_ParamLimits

0xc663,	// (0x00050347) list_preview_fixed_pane_cp

0xc66f,	// (0x00050353) popup_preview_fixed_window_g1_ParamLimits

0xc66f,	// (0x00050353) popup_preview_fixed_window_g1

0xc67b,	// (0x0005035f) popup_preview_fixed_window_g2_ParamLimits

0xc67b,	// (0x0005035f) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x00053842) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x00053842) popup_preview_fixed_window_g

0x6fb8,	// (0x0004ac9c) aid_navi_side_left_pane_ParamLimits

0x6fcd,	// (0x0004acb1) aid_navi_side_right_pane_ParamLimits

0x6fe5,	// (0x0004acc9) navi_icon_pane_stacon_ParamLimits

0x6ff9,	// (0x0004acdd) navi_navi_pane_stacon_ParamLimits

0x6fe5,	// (0x0004acc9) navi_text_pane_stacon_ParamLimits

0x09af,	// (0x00044693) main_text_info_pane

0xc8a8,	// (0x0005058c) listscroll_text_info_pane

0xc8b0,	// (0x00050594) list_text_info_pane_ParamLimits

0xc8b0,	// (0x00050594) list_text_info_pane

0xc8bf,	// (0x000505a3) scroll_pane_cp24_ParamLimits

0xc8bf,	// (0x000505a3) scroll_pane_cp24

0xc8dd,	// (0x000505c1) list_text_info_pane_t1_ParamLimits

0xc8dd,	// (0x000505c1) list_text_info_pane_t1

0x79b2,	// (0x0004b696) popup_fast_swap2_window_ParamLimits

0x79b2,	// (0x0004b696) popup_fast_swap2_window

0xc911,	// (0x000505f5) aid_size_cell_fast2

0x09af,	// (0x00044693) bg_popup_window_pane_cp17

0x9eef,	// (0x0004dbd3) heading_pane_cp2

0x9ef7,	// (0x0004dbdb) listscroll_fast2_pane

0xc91b,	// (0x000505ff) grid_fast2_pane

0xc925,	// (0x00050609) listscroll_fast2_pane_g1

0xc92d,	// (0x00050611) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x000538be) listscroll_fast2_pane_g

0x0f07,	// (0x00044beb) scroll_pane_cp26

0xc937,	// (0x0005061b) cell_fast2_pane_ParamLimits

0xc937,	// (0x0005061b) cell_fast2_pane

0xc94c,	// (0x00050630) cell_fast2_pane_g1

0xc955,	// (0x00050639) cell_fast2_pane_g2

0xc95e,	// (0x00050642) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x000538c3) cell_fast2_pane_g

0x0cb4,	// (0x00044998) grid_highlight_pane_cp9

0x0cc9,	// (0x000449ad) main_eswt_pane_ParamLimits

0x0cc9,	// (0x000449ad) main_eswt_pane

0xc8d4,	// (0x000505b8) list_single_text_info_pane

0xc966,	// (0x0005064a) eswt_ctrl_button_pane

0xc966,	// (0x0005064a) eswt_ctrl_canvas_pane

0xc96e,	// (0x00050652) eswt_ctrl_combo_pane

0xc966,	// (0x0005064a) eswt_ctrl_default_pane

0xc966,	// (0x0005064a) eswt_ctrl_label_pane

0xc976,	// (0x0005065a) eswt_ctrl_wait_pane

0xc97e,	// (0x00050662) eswt_shell_pane

0x09af,	// (0x00044693) listscroll_eswt_app_pane

0xc99e,	// (0x00050682) popup_eswt_tasktip_window_ParamLimits

0xc99e,	// (0x00050682) popup_eswt_tasktip_window

0x9afc,	// (0x0004d7e0) bg_popup_window_pane_cp18

0xc9af,	// (0x00050693) eswt_control_pane_g1_ParamLimits

0xc9af,	// (0x00050693) eswt_control_pane_g1

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_ParamLimits

0xc9bc,	// (0x000506a0) eswt_control_pane_g2

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_ParamLimits

0xc9c9,	// (0x000506ad) eswt_control_pane_g3

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_ParamLimits

0xc9d6,	// (0x000506ba) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x000538ca) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x000538ca) eswt_control_pane_g

0x0dd5,	// (0x00044ab9) bg_button_pane_ParamLimits

0x0dd5,	// (0x00044ab9) bg_button_pane

0x0cc9,	// (0x000449ad) common_borders_pane_copy2_ParamLimits

0x0cc9,	// (0x000449ad) common_borders_pane_copy2

0xc9e3,	// (0x000506c7) control_button_pane_g1_ParamLimits

0xc9e3,	// (0x000506c7) control_button_pane_g1

0xc9ef,	// (0x000506d3) control_button_pane_g2_ParamLimits

0xc9ef,	// (0x000506d3) control_button_pane_g2

0xc9fb,	// (0x000506df) control_button_pane_g3_ParamLimits

0xc9fb,	// (0x000506df) control_button_pane_g3

0x0002,

0xfbef,	// (0x000538d3) control_button_pane_g_ParamLimits

0xfbef,	// (0x000538d3) control_button_pane_g

0xca0f,	// (0x000506f3) control_button_pane_t1

0xca1d,	// (0x00050701) control_button_pane_t2

0x0001,

0xfbf6,	// (0x000538da) control_button_pane_t

0x9a70,	// (0x0004d754) bg_button_pane_g1

0x9a78,	// (0x0004d75c) bg_button_pane_g2

0x9a80,	// (0x0004d764) bg_button_pane_g3

0x9a88,	// (0x0004d76c) bg_button_pane_g4

0x9a90,	// (0x0004d774) bg_button_pane_g5

0x9a98,	// (0x0004d77c) bg_button_pane_g6

0x9aa0,	// (0x0004d784) bg_button_pane_g7

0x9aa8,	// (0x0004d78c) bg_button_pane_g8

0x9ab0,	// (0x0004d794) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00053520) bg_button_pane_g

0xc00b,	// (0x0004fcef) common_borders_pane_ParamLimits

0xc00b,	// (0x0004fcef) common_borders_pane

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy1_ParamLimits

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy1

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy1_ParamLimits

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy1

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy1_ParamLimits

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy1

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy1_ParamLimits

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy1

0xc046,	// (0x0004fd2a) bg_eswt_ctrl_canvas_pane_g1

0xc00b,	// (0x0004fcef) common_borders_pane_cp2_ParamLimits

0xc00b,	// (0x0004fcef) common_borders_pane_cp2

0xc00b,	// (0x0004fcef) common_borders_pane_cp3_ParamLimits

0xc00b,	// (0x0004fcef) common_borders_pane_cp3

0xca2b,	// (0x0005070f) separator_horizontal_pane

0xca33,	// (0x00050717) separator_vertical_pane

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy2_ParamLimits

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy2

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy2_ParamLimits

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy2

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy2_ParamLimits

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy2

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy2_ParamLimits

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy2

0x09af,	// (0x00044693) common_borders_pane_cp4

0xca3c,	// (0x00050720) separator_horizontal_pane_g1

0xca45,	// (0x00050729) separator_horizontal_pane_g2

0xca4e,	// (0x00050732) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x000538df) separator_horizontal_pane_g

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy3_ParamLimits

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy3

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy3_ParamLimits

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy3

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy3_ParamLimits

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy3

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy3_ParamLimits

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy3

0x09af,	// (0x00044693) common_borders_pane_cp5

0xca57,	// (0x0005073b) separator_vertical_pane_g1

0xca60,	// (0x00050744) separator_vertical_pane_g2

0xca69,	// (0x0005074d) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x000538e6) separator_vertical_pane_g

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy4_ParamLimits

0xc9af,	// (0x00050693) eswt_control_pane_g1_copy4

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy4_ParamLimits

0xc9bc,	// (0x000506a0) eswt_control_pane_g2_copy4

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy4_ParamLimits

0xc9c9,	// (0x000506ad) eswt_control_pane_g3_copy4

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy4_ParamLimits

0xc9d6,	// (0x000506ba) eswt_control_pane_g4_copy4

0xca72,	// (0x00050756) eswt_ctrl_combo_button_pane

0xca7a,	// (0x0005075e) eswt_ctrl_input_pane

0xca82,	// (0x00050766) popup_choice_list_window_cp70

0xca8a,	// (0x0005076e) eswt_ctrl_input_pane_t1

0x09af,	// (0x00044693) input_focus_pane_cp70

0xc00b,	// (0x0004fcef) bg_button_pane_cp70_ParamLimits

0xc00b,	// (0x0004fcef) bg_button_pane_cp70

0xca98,	// (0x0005077c) eswt_ctrl_combo_button_pane_g1

0xcaa0,	// (0x00050784) wait_bar_pane_cp70

0x9afc,	// (0x0004d7e0) bg_popup_window_pane_cp70_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_window_pane_cp70

0xcaa8,	// (0x0005078c) popup_eswt_tasktip_window_t1

0xcabe,	// (0x000507a2) wait_bar_pane_cp71_ParamLimits

0xcabe,	// (0x000507a2) wait_bar_pane_cp71

0xcaca,	// (0x000507ae) grid_eswt_app_pane

0x10fa,	// (0x00044dde) scroll_pane_cp70

0xcad3,	// (0x000507b7) cell_eswt_app_pane_ParamLimits

0xcad3,	// (0x000507b7) cell_eswt_app_pane

0xcb03,	// (0x000507e7) cell_eswt_app_pane_g1_ParamLimits

0xcb03,	// (0x000507e7) cell_eswt_app_pane_g1

0xcb32,	// (0x00050816) cell_eswt_app_pane_g2_ParamLimits

0xcb32,	// (0x00050816) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x000538ed) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x000538ed) cell_eswt_app_pane_g

0xcb56,	// (0x0005083a) cell_eswt_app_pane_t1_ParamLimits

0xcb56,	// (0x0005083a) cell_eswt_app_pane_t1

0xcb88,	// (0x0005086c) grid_highlight_pane_cp70_ParamLimits

0xcb88,	// (0x0005086c) grid_highlight_pane_cp70

0x158b,	// (0x0004526f) set_content_pane_g1

0x77b3,	// (0x0004b497) status_small_volume_pane

0x8b3d,	// (0x0004c821) status_small_volume_pane_g1

0x8b45,	// (0x0004c829) volume_small2_pane

0x8b4e,	// (0x0004c832) volume_small2_pane_g1

0x8b57,	// (0x0004c83b) volume_small2_pane_g2

0x8b60,	// (0x0004c844) volume_small2_pane_g3

0x8b69,	// (0x0004c84d) volume_small2_pane_g4

0x8b72,	// (0x0004c856) volume_small2_pane_g5

0x8b7b,	// (0x0004c85f) volume_small2_pane_g6

0x8b84,	// (0x0004c868) volume_small2_pane_g7

0x8b8d,	// (0x0004c871) volume_small2_pane_g8

0x8b96,	// (0x0004c87a) volume_small2_pane_g9

0x8b9f,	// (0x0004c883) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x000538f2) volume_small2_pane_g

0xc3fe,	// (0x000500e2) fep_vkb_top_text_pane_g1_ParamLimits

0xc419,	// (0x000500fd) fep_vkb_top_text_pane_t1_ParamLimits

0xc687,	// (0x0005036b) popup_preview_fixed_window_g3_ParamLimits

0xc687,	// (0x0005036b) popup_preview_fixed_window_g3

0x7e61,	// (0x0004bb45) popup_toolbar_trans_pane

0xae3a,	// (0x0004eb1e) aid_height_set_list_ParamLimits

0xae4b,	// (0x0004eb2f) aid_size_parent_ParamLimits

0x0f17,	// (0x00044bfb) list_highlight_pane_cp2_ParamLimits

0x158b,	// (0x0004526f) set_content_pane_g1_ParamLimits

0x5d5e,	// (0x00049a42) list_single_image_pane_ParamLimits

0x5d5e,	// (0x00049a42) list_single_image_pane

0xcb94,	// (0x00050878) aid_size_cell_image_ParamLimits

0xcb94,	// (0x00050878) aid_size_cell_image

0xcba1,	// (0x00050885) grid_single_image_pane_ParamLimits

0xcba1,	// (0x00050885) grid_single_image_pane

0x24a8,	// (0x0004618c) list_single_image_pane_g1_ParamLimits

0x24a8,	// (0x0004618c) list_single_image_pane_g1

0xc76b,	// (0x0005044f) list_single_image_pane_g2_ParamLimits

0xc76b,	// (0x0005044f) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x00053907) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x00053907) list_single_image_pane_g

0xcbad,	// (0x00050891) list_single_image_pane_t1_ParamLimits

0xcbad,	// (0x00050891) list_single_image_pane_t1

0xcbc3,	// (0x000508a7) cell_image_list_pane_ParamLimits

0xcbc3,	// (0x000508a7) cell_image_list_pane

0xcbd7,	// (0x000508bb) cell_image_list_pane_g1

0xcbe0,	// (0x000508c4) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0005390c) cell_image_list_pane_g

0xcbe9,	// (0x000508cd) aid_size_cell_tb_trans_pane

0x0dd5,	// (0x00044ab9) bg_tb_trans_pane

0xcbfb,	// (0x000508df) grid_tb_trans_pane

0x9a70,	// (0x0004d754) bg_tb_trans_pane_g1

0x9a78,	// (0x0004d75c) bg_tb_trans_pane_g2

0x9a80,	// (0x0004d764) bg_tb_trans_pane_g3

0x9a88,	// (0x0004d76c) bg_tb_trans_pane_g4

0x9a90,	// (0x0004d774) bg_tb_trans_pane_g5

0x9aa8,	// (0x0004d78c) bg_tb_trans_pane_g6

0x9ab0,	// (0x0004d794) bg_tb_trans_pane_g7

0x9a98,	// (0x0004d77c) bg_tb_trans_pane_g8

0x9aa0,	// (0x0004d784) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x00053911) bg_tb_trans_pane_g

0xcc0f,	// (0x000508f3) cell_toolbar_trans_pane_ParamLimits

0xcc0f,	// (0x000508f3) cell_toolbar_trans_pane

0xc046,	// (0x0004fd2a) cell_toolbar_trans_pane_g1

0xbc11,	// (0x0004f8f5) list_form2_midp_pane_t1

0xbc1f,	// (0x0004f903) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x000537ba) list_form2_midp_pane_t

0xbc2d,	// (0x0004f911) scroll_pane_cp51_ParamLimits

0xbde9,	// (0x0004facd) form2_midp_wait_pane_g1

0xbdf2,	// (0x0004fad6) form2_midp_wait_pane_g2

0xbdfb,	// (0x0004fadf) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x000537cf) form2_midp_wait_pane_g

0x0a1f,	// (0x00044703) list_highlight_pane_cp21_ParamLimits

0xbe43,	// (0x0004fb27) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe52,	// (0x0004fb36) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x858e,	// (0x0004c272) list_single_2graphic_im_pane_ParamLimits

0x858e,	// (0x0004c272) list_single_2graphic_im_pane

0xcc35,	// (0x00050919) list_single_2graphic_im_pane_g1_ParamLimits

0xcc35,	// (0x00050919) list_single_2graphic_im_pane_g1

0xcc46,	// (0x0005092a) list_single_2graphic_im_pane_g2_ParamLimits

0xcc46,	// (0x0005092a) list_single_2graphic_im_pane_g2

0xcc52,	// (0x00050936) list_single_2graphic_im_pane_g3_ParamLimits

0xcc52,	// (0x00050936) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x00053924) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x00053924) list_single_2graphic_im_pane_g

0xcc72,	// (0x00050956) list_single_2graphic_im_pane_t1_ParamLimits

0xcc72,	// (0x00050956) list_single_2graphic_im_pane_t1

0xc693,	// (0x00050377) list_single_graphic_2heading_pane_fp_ParamLimits

0xc693,	// (0x00050377) list_single_graphic_2heading_pane_fp

0x60b8,	// (0x00049d9c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x60b8,	// (0x00049d9c) list_single_graphic_2heading_pane_fp_g1

0xc6a9,	// (0x0005038d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6a9,	// (0x0005038d) list_single_graphic_2heading_pane_fp_g2

0x24a8,	// (0x0004618c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x24a8,	// (0x0004618c) list_single_graphic_2heading_pane_fp_g3

0xc76b,	// (0x0005044f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc76b,	// (0x0005044f) list_single_graphic_2heading_pane_fp_g4

0xc6b5,	// (0x00050399) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b5,	// (0x00050399) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053852) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053852) list_single_graphic_2heading_pane_fp_g

0x6221,	// (0x00049f05) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6221,	// (0x00049f05) list_single_graphic_2heading_pane_fp_t1

0x60f0,	// (0x00049dd4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x60f0,	// (0x00049dd4) list_single_graphic_2heading_pane_fp_t2

0x6237,	// (0x00049f1b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6237,	// (0x00049f1b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0005392d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0005392d) list_single_graphic_2heading_pane_fp_t

0xc0d2,	// (0x0004fdb6) fep_hwr_write_pane_g5_ParamLimits

0xc0d2,	// (0x0004fdb6) fep_hwr_write_pane_g5

0xc0de,	// (0x0004fdc2) fep_hwr_write_pane_g6_ParamLimits

0xc0de,	// (0x0004fdc2) fep_hwr_write_pane_g6

0xc97e,	// (0x00050662) eswt_shell_pane_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_window_pane_cp18_ParamLimits

0xad93,	// (0x0004ea77) heading_pane_cp70

0xcaa8,	// (0x0005078c) popup_eswt_tasktip_window_t1_ParamLimits

0x7f80,	// (0x0004bc64) aid_touch_tab_arrow_left

0x7f8f,	// (0x0004bc73) aid_touch_tab_arrow_right

0x676f,	// (0x0004a453) title_pane_g3_ParamLimits

0x676f,	// (0x0004a453) title_pane_g3

0x0d9d,	// (0x00044a81) set_value_pane_g1

0x7e61,	// (0x0004bb45) popup_toolbar_trans_pane_ParamLimits

0xcbe9,	// (0x000508cd) aid_size_cell_tb_trans_pane_ParamLimits

0x0dd5,	// (0x00044ab9) bg_tb_trans_pane_ParamLimits

0xcbfb,	// (0x000508df) grid_tb_trans_pane_ParamLimits

0x0b49,	// (0x0004482d) cont_note_pane_ParamLimits

0x0b49,	// (0x0004482d) cont_note_pane

0x0cc9,	// (0x000449ad) cont_snote2_single_text_pane_ParamLimits

0x0cc9,	// (0x000449ad) cont_snote2_single_text_pane

0x0cc9,	// (0x000449ad) cont_snote2_single_graphic_pane_ParamLimits

0x0cc9,	// (0x000449ad) cont_snote2_single_graphic_pane

0xa116,	// (0x0004ddfa) cont_note_wait_pane_ParamLimits

0xa116,	// (0x0004ddfa) cont_note_wait_pane

0xa116,	// (0x0004ddfa) cont_note_image_pane_ParamLimits

0xa116,	// (0x0004ddfa) cont_note_image_pane

0xcca3,	// (0x00050987) popup_note2_window_g1_ParamLimits

0xcca3,	// (0x00050987) popup_note2_window_g1

0xccd4,	// (0x000509b8) popup_note2_window_t1_ParamLimits

0xccd4,	// (0x000509b8) popup_note2_window_t1

0xcd19,	// (0x000509fd) popup_note2_window_t2_ParamLimits

0xcd19,	// (0x000509fd) popup_note2_window_t2

0xcd5e,	// (0x00050a42) popup_note2_window_t3_ParamLimits

0xcd5e,	// (0x00050a42) popup_note2_window_t3

0xcda3,	// (0x00050a87) popup_note2_window_t4_ParamLimits

0xcda3,	// (0x00050a87) popup_note2_window_t4

0x0bcd,	// (0x000448b1) popup_note2_window_t5_ParamLimits

0x0bcd,	// (0x000448b1) popup_note2_window_t5

0x0004,

0xfc55,	// (0x00053939) popup_note2_window_t_ParamLimits

0xfc55,	// (0x00053939) popup_note2_window_t

0xcdd2,	// (0x00050ab6) popup_note2_image_window_g1_ParamLimits

0xcdd2,	// (0x00050ab6) popup_note2_image_window_g1

0xcdde,	// (0x00050ac2) popup_note2_image_window_g2_ParamLimits

0xcdde,	// (0x00050ac2) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x00053944) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x00053944) popup_note2_image_window_g

0xcdf0,	// (0x00050ad4) popup_note2_image_window_t1_ParamLimits

0xcdf0,	// (0x00050ad4) popup_note2_image_window_t1

0xce08,	// (0x00050aec) popup_note2_image_window_t2_ParamLimits

0xce08,	// (0x00050aec) popup_note2_image_window_t2

0xce20,	// (0x00050b04) popup_note2_image_window_t3_ParamLimits

0xce20,	// (0x00050b04) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x00053949) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x00053949) popup_note2_image_window_t

0xa124,	// (0x0004de08) popup_note2_wait_window_g1_ParamLimits

0xa124,	// (0x0004de08) popup_note2_wait_window_g1

0xa130,	// (0x0004de14) popup_note2_wait_window_g2_ParamLimits

0xa130,	// (0x0004de14) popup_note2_wait_window_g2

0xa13c,	// (0x0004de20) popup_note2_wait_window_g3_ParamLimits

0xa13c,	// (0x0004de20) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00053502) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00053502) popup_note2_wait_window_g

0xce3c,	// (0x00050b20) popup_note2_wait_window_t1_ParamLimits

0xce3c,	// (0x00050b20) popup_note2_wait_window_t1

0xce5a,	// (0x00050b3e) popup_note2_wait_window_t2_ParamLimits

0xce5a,	// (0x00050b3e) popup_note2_wait_window_t2

0xce78,	// (0x00050b5c) popup_note2_wait_window_t3_ParamLimits

0xce78,	// (0x00050b5c) popup_note2_wait_window_t3

0xce8a,	// (0x00050b6e) popup_note2_wait_window_t4_ParamLimits

0xce8a,	// (0x00050b6e) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x00053950) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x00053950) popup_note2_wait_window_t

0xce9c,	// (0x00050b80) wait_bar2_pane_ParamLimits

0xce9c,	// (0x00050b80) wait_bar2_pane

0xceb4,	// (0x00050b98) popup_snote2_single_text_window_g1_ParamLimits

0xceb4,	// (0x00050b98) popup_snote2_single_text_window_g1

0xcedc,	// (0x00050bc0) popup_snote2_single_text_window_t1_ParamLimits

0xcedc,	// (0x00050bc0) popup_snote2_single_text_window_t1

0xcf28,	// (0x00050c0c) popup_snote2_single_text_window_t2_ParamLimits

0xcf28,	// (0x00050c0c) popup_snote2_single_text_window_t2

0xcf74,	// (0x00050c58) popup_snote2_single_text_window_t3_ParamLimits

0xcf74,	// (0x00050c58) popup_snote2_single_text_window_t3

0xcfb5,	// (0x00050c99) popup_snote2_single_text_window_t4_ParamLimits

0xcfb5,	// (0x00050c99) popup_snote2_single_text_window_t4

0xcfeb,	// (0x00050ccf) popup_snote2_single_text_window_t5_ParamLimits

0xcfeb,	// (0x00050ccf) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x00053959) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x00053959) popup_snote2_single_text_window_t

0xd016,	// (0x00050cfa) popup_snote2_single_graphic_window_g1_ParamLimits

0xd016,	// (0x00050cfa) popup_snote2_single_graphic_window_g1

0xd03e,	// (0x00050d22) popup_snote2_single_graphic_window_g2_ParamLimits

0xd03e,	// (0x00050d22) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x00053964) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x00053964) popup_snote2_single_graphic_window_g

0xd066,	// (0x00050d4a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd066,	// (0x00050d4a) popup_snote2_single_graphic_window_t1

0xd0b2,	// (0x00050d96) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b2,	// (0x00050d96) popup_snote2_single_graphic_window_t2

0xcf74,	// (0x00050c58) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf74,	// (0x00050c58) popup_snote2_single_graphic_window_t3

0xcfb5,	// (0x00050c99) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfb5,	// (0x00050c99) popup_snote2_single_graphic_window_t4

0xcfeb,	// (0x00050ccf) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfeb,	// (0x00050ccf) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x00053969) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x00053969) popup_snote2_single_graphic_window_t

0xbaea,	// (0x0004f7ce) clock_nsta_pane_cp2_t1

0xbaea,	// (0x0004f7ce) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x00053790) clock_nsta_pane_cp2_t

0x598c,	// (0x00049670) form_field_data_wide_pane_g1_ParamLimits

0x0de3,	// (0x00044ac7) form_field_data_wide_pane_g2_ParamLimits

0x0de3,	// (0x00044ac7) form_field_data_wide_pane_g2

0x0def,	// (0x00044ad3) form_field_data_wide_pane_g3_ParamLimits

0x0def,	// (0x00044ad3) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00053335) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00053335) form_field_data_wide_pane_g

0xb9c6,	// (0x0004f6aa) grid_touch_3_pane_ParamLimits

0xb9c6,	// (0x0004f6aa) grid_touch_3_pane

0xd0fe,	// (0x00050de2) cell_touch_3_pane_ParamLimits

0xd0fe,	// (0x00050de2) cell_touch_3_pane

0xc046,	// (0x0004fd2a) cell_touch_3_pane_g1

0xc046,	// (0x0004fd2a) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00053815) cell_touch_3_pane_g

0x0bff,	// (0x000448e3) cont_query_data_pane

0x0c07,	// (0x000448eb) cont_query_data_pane_cp1

0xd12c,	// (0x00050e10) button_value_adjust_pane_cp7

0xd134,	// (0x00050e18) query_popup_pane_cp3

0x1288,	// (0x00044f6c) bg_popup_sub_pane_cp22_ParamLimits

0x72b0,	// (0x0004af94) navi_navi_volume_pane_cp2

0x72c8,	// (0x0004afac) popup_side_volume_key_window_g2

0x72d4,	// (0x0004afb8) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x000533cb) popup_side_volume_key_window_g

0x72ee,	// (0x0004afd2) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x000533d2) popup_side_volume_key_window_t

0x752e,	// (0x0004b212) popup_side_volume_key_window_ParamLimits

0x6d93,	// (0x0004aa77) list_double_graphic_pane_g4_ParamLimits

0x6d93,	// (0x0004aa77) list_double_graphic_pane_g4

0x85cd,	// (0x0004c2b1) list_single_2heading_msg_pane_ParamLimits

0x85cd,	// (0x0004c2b1) list_single_2heading_msg_pane

0x8ba8,	// (0x0004c88c) list_single_2heading_msg_pane_g1_ParamLimits

0x8ba8,	// (0x0004c88c) list_single_2heading_msg_pane_g1

0x6d34,	// (0x0004aa18) list_single_2heading_msg_pane_g2_ParamLimits

0x6d34,	// (0x0004aa18) list_single_2heading_msg_pane_g2

0x8bb4,	// (0x0004c898) list_single_2heading_msg_pane_g3_ParamLimits

0x8bb4,	// (0x0004c898) list_single_2heading_msg_pane_g3

0x8bc0,	// (0x0004c8a4) list_single_2heading_msg_pane_g4_ParamLimits

0x8bc0,	// (0x0004c8a4) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x00053974) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x00053974) list_single_2heading_msg_pane_g

0x6257,	// (0x00049f3b) list_single_2heading_msg_pane_t1_ParamLimits

0x6257,	// (0x00049f3b) list_single_2heading_msg_pane_t1

0x627f,	// (0x00049f63) list_single_2heading_msg_pane_t2_ParamLimits

0x627f,	// (0x00049f63) list_single_2heading_msg_pane_t2

0x62ae,	// (0x00049f92) list_single_2heading_msg_pane_t3_ParamLimits

0x62ae,	// (0x00049f92) list_single_2heading_msg_pane_t3

0x62e7,	// (0x00049fcb) list_single_2heading_msg_pane_t4_ParamLimits

0x62e7,	// (0x00049fcb) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x0005397d) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x0005397d) list_single_2heading_msg_pane_t

0x09cd,	// (0x000446b1) title_pane_g4_ParamLimits

0x09cd,	// (0x000446b1) title_pane_g4

0x6f09,	// (0x0004abed) title_pane_stacon_g3_ParamLimits

0x6f09,	// (0x0004abed) title_pane_stacon_g3

0xcc66,	// (0x0005094a) list_single_2graphic_im_pane_g4_ParamLimits

0xcc66,	// (0x0005094a) list_single_2graphic_im_pane_g4

0xab5d,	// (0x0004e841) popup_side_volume_key_window_cp

0xb31c,	// (0x0004f000) main_idle_act2_pane_t1

0x8210,	// (0x0004bef4) toolbar_button_pane_g10

0x6d2a,	// (0x0004aa0e) popup_toolbar_window_cp1

0xbadb,	// (0x0004f7bf) clock_nsta_pane_cp_t1

0xbadb,	// (0x0004f7bf) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005378b) clock_nsta_pane_cp_t

0x72b0,	// (0x0004af94) navi_navi_volume_pane_cp2_ParamLimits

0x72bc,	// (0x0004afa0) popup_side_volume_key_window_g1_ParamLimits

0x72c8,	// (0x0004afac) popup_side_volume_key_window_g2_ParamLimits

0x72d4,	// (0x0004afb8) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x000533cb) popup_side_volume_key_window_g_ParamLimits

0x87dd,	// (0x0004c4c1) fep_hwr_aid_pane

0x2d6e,	// (0x00046a52) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a2,	// (0x0004fd86) fep_hwr_top_pane_g1_ParamLimits

0xc0b4,	// (0x0004fd98) fep_hwr_top_pane_g2_ParamLimits

0x8896,	// (0x0004c57a) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x000537e0) fep_hwr_top_pane_g_ParamLimits

0x88ab,	// (0x0004c58f) fep_hwr_top_text_pane_ParamLimits

0xa920,	// (0x0004e604) aid_touch_tab_arrow_arrow_2

0xa929,	// (0x0004e60d) aid_touch_tab_arrow_left_2

0x87f1,	// (0x0004c4d5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8828,	// (0x0004c50c) fep_hwr_prediction_pane

0xc20d,	// (0x0004fef1) fep_vkb_prediction_pane

0xc30a,	// (0x0004ffee) fep_vkb_side_pane_g3_ParamLimits

0xc30a,	// (0x0004ffee) fep_vkb_side_pane_g3

0xc2b6,	// (0x0004ff9a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc77f,	// (0x00050463) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc78c,	// (0x00050470) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0005388a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd159,	// (0x00050e3d) fep_hwr_prediction_pane_g1

0x8bd8,	// (0x0004c8bc) fep_hwr_prediction_pane_g2

0x8be0,	// (0x0004c8c4) fep_hwr_prediction_pane_g3

0x8be8,	// (0x0004c8cc) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x00053986) fep_hwr_prediction_pane_g

0xd159,	// (0x00050e3d) fep_vkb_prediction_pane_g1

0xd163,	// (0x00050e47) fep_vkb_prediction_pane_g2

0xd16b,	// (0x00050e4f) fep_vkb_prediction_pane_g3

0xd173,	// (0x00050e57) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x0005398f) fep_vkb_prediction_pane_g

0x84ea,	// (0x0004c1ce) slider_set_pane_g3

0x84fe,	// (0x0004c1e2) slider_set_pane_g4

0x8516,	// (0x0004c1fa) slider_set_pane_g5

0x84ea,	// (0x0004c1ce) slider_set_pane_g6

0x852c,	// (0x0004c210) slider_set_pane_g7

0xafac,	// (0x0004ec90) slider_form_pane_g3

0xafb5,	// (0x0004ec99) slider_form_pane_g4

0xafbd,	// (0x0004eca1) slider_form_pane_g5

0xafac,	// (0x0004ec90) slider_form_pane_g6

0xafc5,	// (0x0004eca9) slider_form_pane_g7

0xb5c8,	// (0x0004f2ac) slider_set_pane_vc_g3

0xb5d1,	// (0x0004f2b5) slider_set_pane_vc_g4

0xb5da,	// (0x0004f2be) slider_set_pane_vc_g5

0xb5c8,	// (0x0004f2ac) slider_set_pane_vc_g6

0xb5e3,	// (0x0004f2c7) slider_set_pane_vc_g7

0xb799,	// (0x0004f47d) slider_form_pane_vc_g1

0xb7a2,	// (0x0004f486) slider_form_pane_vc_g2

0xb7ab,	// (0x0004f48f) slider_form_pane_vc_g3

0xb799,	// (0x0004f47d) slider_form_pane_vc_g4

0xb7b4,	// (0x0004f498) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005375d) slider_form_pane_vc_g

0x09af,	// (0x00044693) main_idle_act3_pane

0xd17b,	// (0x00050e5f) ai3_links_pane

0xd184,	// (0x00050e68) popup_ai3_data_window_ParamLimits

0xd184,	// (0x00050e68) popup_ai3_data_window

0x09af,	// (0x00044693) grid_ai3_links_pane

0xd19c,	// (0x00050e80) cell_ai3_links_pane_ParamLimits

0xd19c,	// (0x00050e80) cell_ai3_links_pane

0xd1b4,	// (0x00050e98) bg_popup_sub_pane_cp11

0xd1c1,	// (0x00050ea5) cell_ai3_links_pane_g1

0x09af,	// (0x00044693) bg_popup_sub_pane_cp12

0xd1e6,	// (0x00050eca) heading_ai3_data_pane

0xd1ee,	// (0x00050ed2) list_ai3_gene_pane

0xd1fa,	// (0x00050ede) popup_ai3_data_window_g1

0xd202,	// (0x00050ee6) heading_ai3_data_pane_g1

0xd20a,	// (0x00050eee) heading_ai3_data_pane_t1

0xd218,	// (0x00050efc) list_double_ai3_gene_pane_ParamLimits

0xd218,	// (0x00050efc) list_double_ai3_gene_pane

0xd225,	// (0x00050f09) list_single_ai3_gene_pane_ParamLimits

0xd225,	// (0x00050f09) list_single_ai3_gene_pane

0xc00b,	// (0x0004fcef) list_highlight_pane_cp7_ParamLimits

0xc00b,	// (0x0004fcef) list_highlight_pane_cp7

0xd232,	// (0x00050f16) list_single_a13_gene_pane_t1_ParamLimits

0xd232,	// (0x00050f16) list_single_a13_gene_pane_t1

0xd249,	// (0x00050f2d) list_single_ai3_gene_pane_g1

0xd252,	// (0x00050f36) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x00053998) list_single_ai3_gene_pane_g

0xd25a,	// (0x00050f3e) list_double_ai3_gene_pane_g1_ParamLimits

0xd25a,	// (0x00050f3e) list_double_ai3_gene_pane_g1

0xd266,	// (0x00050f4a) list_double_ai3_gene_pane_t1_ParamLimits

0xd266,	// (0x00050f4a) list_double_ai3_gene_pane_t1

0xd282,	// (0x00050f66) list_double_ai3_gene_pane_t2_ParamLimits

0xd282,	// (0x00050f66) list_double_ai3_gene_pane_t2

0xd297,	// (0x00050f7b) list_double_ai3_gene_pane_t3_ParamLimits

0xd297,	// (0x00050f7b) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x0005399d) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x0005399d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x624d,	// (0x00049f31) aid_size_min_col_2

0xd145,	// (0x00050e29) aid_size_min_msg_ParamLimits

0xd145,	// (0x00050e29) aid_size_min_msg

0xc40a,	// (0x000500ee) fep_vkb_top_text_pane_g2_ParamLimits

0xc40a,	// (0x000500ee) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00053810) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00053810) fep_vkb_top_text_pane_g

0x09af,	// (0x00044693) main_hc_apps_shell_pane

0xd2b4,	// (0x00050f98) grid_hc_apps_pane_ParamLimits

0xd2b4,	// (0x00050f98) grid_hc_apps_pane

0xd2c6,	// (0x00050faa) list_hc_apps_pane

0xd2ce,	// (0x00050fb2) scroll_pane_cp37_ParamLimits

0xd2ce,	// (0x00050fb2) scroll_pane_cp37

0xd2da,	// (0x00050fbe) cell_hc_apps_pane_ParamLimits

0xd2da,	// (0x00050fbe) cell_hc_apps_pane

0xd388,	// (0x0005106c) cell_hc_apps_pane_g1_ParamLimits

0xd388,	// (0x0005106c) cell_hc_apps_pane_g1

0xd3b8,	// (0x0005109c) cell_hc_apps_pane_g2_ParamLimits

0xd3b8,	// (0x0005109c) cell_hc_apps_pane_g2

0xd3d4,	// (0x000510b8) cell_hc_apps_pane_g3_ParamLimits

0xd3d4,	// (0x000510b8) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x000539a4) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x000539a4) cell_hc_apps_pane_g

0xd3f6,	// (0x000510da) cell_hc_apps_pane_t1_ParamLimits

0xd3f6,	// (0x000510da) cell_hc_apps_pane_t1

0x0b49,	// (0x0004482d) grid_highlight_pane_cp10_ParamLimits

0x0b49,	// (0x0004482d) grid_highlight_pane_cp10

0xd436,	// (0x0005111a) list_single_hc_apps_pane_ParamLimits

0xd436,	// (0x0005111a) list_single_hc_apps_pane

0xd499,	// (0x0005117d) list_single_hc_apps_pane_g1

0x8bf0,	// (0x0004c8d4) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x000539ab) list_single_hc_apps_pane_g

0x8c09,	// (0x0004c8ed) list_single_hc_apps_pane_g2_copy1

0x630c,	// (0x00049ff0) list_single_hc_apps_pane_t1

0x0a1f,	// (0x00044703) bg_set_opt_pane_cp_ParamLimits

0x681f,	// (0x0004a503) setting_slider_pane_t1_ParamLimits

0x6838,	// (0x0004a51c) setting_slider_pane_t2_ParamLimits

0x6852,	// (0x0004a536) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005321d) setting_slider_pane_t_ParamLimits

0x686a,	// (0x0004a54e) slider_set_pane_ParamLimits

0x7831,	// (0x0004b515) control_pane_g5_ParamLimits

0x7831,	// (0x0004b515) control_pane_g5

0xadff,	// (0x0004eae3) slider_set_pane_g1_ParamLimits

0x84de,	// (0x0004c1c2) slider_set_pane_g2_ParamLimits

0x84ea,	// (0x0004c1ce) slider_set_pane_g3_ParamLimits

0x84fe,	// (0x0004c1e2) slider_set_pane_g4_ParamLimits

0x8516,	// (0x0004c1fa) slider_set_pane_g5_ParamLimits

0x84ea,	// (0x0004c1ce) slider_set_pane_g6_ParamLimits

0x852c,	// (0x0004c210) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0005361e) slider_set_pane_g_ParamLimits

0x1536,	// (0x0004521a) navi_icon_text_pane_ParamLimits

0x7f41,	// (0x0004bc25) aid_fill_nsta_2_ParamLimits

0x7f80,	// (0x0004bc64) aid_touch_tab_arrow_left_ParamLimits

0x7f8f,	// (0x0004bc73) aid_touch_tab_arrow_right_ParamLimits

0x7ffc,	// (0x0004bce0) clock_nsta_pane_ParamLimits

0xa902,	// (0x0004e5e6) navi_icon_pane_g1_ParamLimits

0xa90e,	// (0x0004e5f2) navi_text_pane_t1_ParamLimits

0xbbeb,	// (0x0004f8cf) navi_icon_text_pane_g1_ParamLimits

0xbbf7,	// (0x0004f8db) navi_icon_text_pane_t1_ParamLimits

0xd499,	// (0x0005117d) list_single_hc_apps_pane_g1_ParamLimits

0x8bf0,	// (0x0004c8d4) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x000539ab) list_single_hc_apps_pane_g_ParamLimits

0x8c09,	// (0x0004c8ed) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x630c,	// (0x00049ff0) list_single_hc_apps_pane_t1_ParamLimits

0x6663,	// (0x0004a347) popup_toolbar2_fixed_window_ParamLimits

0x6663,	// (0x0004a347) popup_toolbar2_fixed_window

0x7e57,	// (0x0004bb3b) popup_toolbar2_float_window

0x09af,	// (0x00044693) bg_popup_sub_pane_cp27

0xd4b2,	// (0x00051196) grid_toolbar2_float_pane

0x09af,	// (0x00044693) bg_popup_sub_pane_cp26

0xd4b2,	// (0x00051196) grid_toolbar2_fixed_pane

0xd4ba,	// (0x0005119e) cell_toolbar2_fixed_pane_ParamLimits

0xd4ba,	// (0x0005119e) cell_toolbar2_fixed_pane

0xd4ca,	// (0x000511ae) cell_toolbar2_fixed_pane_g1

0x99f0,	// (0x0004d6d4) toolbar2_fixed_button_pane

0x9a70,	// (0x0004d754) toolbar2_fixed_button_pane_g1

0x9a78,	// (0x0004d75c) toolbar2_fixed_button_pane_g2

0x9a80,	// (0x0004d764) toolbar2_fixed_button_pane_g3

0x9a88,	// (0x0004d76c) toolbar2_fixed_button_pane_g4

0x9a90,	// (0x0004d774) toolbar2_fixed_button_pane_g5

0x9a98,	// (0x0004d77c) toolbar2_fixed_button_pane_g6

0x9aa0,	// (0x0004d784) toolbar2_fixed_button_pane_g7

0x9aa8,	// (0x0004d78c) toolbar2_fixed_button_pane_g8

0x9ab0,	// (0x0004d794) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00053520) toolbar2_fixed_button_pane_g

0xd4d3,	// (0x000511b7) cell_toolbar2_float_pane_ParamLimits

0xd4d3,	// (0x000511b7) cell_toolbar2_float_pane

0xd4e4,	// (0x000511c8) cell_toolbar2_float_pane_g1

0x99f0,	// (0x0004d6d4) toolbar2_fixed_button_pane_cp

0xc174,	// (0x0004fe58) fep_vkb_accented_list_pane_ParamLimits

0xc174,	// (0x0004fe58) fep_vkb_accented_list_pane

0x89f9,	// (0x0004c6dd) bg_popup_fep_shadow_pane_g9

0x1670,	// (0x00045354) bg_popup_fep_shadow_pane_cp3

0x0eee,	// (0x00044bd2) list_accented_list_pane

0xd4ed,	// (0x000511d1) list_single_accented_list_pane_ParamLimits

0xd4ed,	// (0x000511d1) list_single_accented_list_pane

0x1670,	// (0x00045354) list_highlight_pane_cp10

0xd4fe,	// (0x000511e2) list_single_accented_list_pane_t1

0x7da7,	// (0x0004ba8b) popup_slider_window_ParamLimits

0x7da7,	// (0x0004ba8b) popup_slider_window

0xd13c,	// (0x00050e20) aid_indentation_list_msg

0xd5bc,	// (0x000512a0) bg_popup_window_pane_cp19

0xd624,	// (0x00051308) popup_slider_window_g1

0xd640,	// (0x00051324) popup_slider_window_g2

0xd65c,	// (0x00051340) popup_slider_window_g3

0x0005,

0xfccc,	// (0x000539b0) popup_slider_window_g

0xd6c2,	// (0x000513a6) popup_slider_window_t1

0xd736,	// (0x0005141a) small_volume_slider_vertical_pane

0xc046,	// (0x0004fd2a) small_volume_slider_vertical_pane_g1

0xc046,	// (0x0004fd2a) small_volume_slider_vertical_pane_g2

0xd752,	// (0x00051436) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x000539c2) small_volume_slider_vertical_pane_g

0x6433,	// (0x0004a117) area_side_right_pane_ParamLimits

0x6433,	// (0x0004a117) area_side_right_pane

0x8c25,	// (0x0004c909) aid_size_side_button_ParamLimits

0x8c25,	// (0x0004c909) aid_size_side_button

0x8c39,	// (0x0004c91d) grid_sctrl_middle_pane_ParamLimits

0x8c39,	// (0x0004c91d) grid_sctrl_middle_pane

0x8c58,	// (0x0004c93c) sctrl_sk_bottom_pane

0x8c69,	// (0x0004c94d) sctrl_sk_top_pane

0x8c7b,	// (0x0004c95f) aid_touch_sctrl_top

0x0b49,	// (0x0004482d) bg_sctrl_sk_pane_ParamLimits

0x0b49,	// (0x0004482d) bg_sctrl_sk_pane

0x8c88,	// (0x0004c96c) sctrl_sk_top_pane_g1

0x8c95,	// (0x0004c979) sctrl_sk_top_pane_t1

0x8c7b,	// (0x0004c95f) aid_touch_sctrl_bottom

0x0b49,	// (0x0004482d) bg_sctrl_sk_pane_cp_ParamLimits

0x0b49,	// (0x0004482d) bg_sctrl_sk_pane_cp

0x8cb0,	// (0x0004c994) sctrl_sk_bottom_pane_g1

0x8c95,	// (0x0004c979) sctrl_sk_bottom_pane_t1

0x8cb9,	// (0x0004c99d) cell_sctrl_middle_pane_ParamLimits

0x8cb9,	// (0x0004c99d) cell_sctrl_middle_pane

0x8cd4,	// (0x0004c9b8) aid_touch_sctrl_middle_ParamLimits

0x8cd4,	// (0x0004c9b8) aid_touch_sctrl_middle

0x0dd5,	// (0x00044ab9) bg_sctrl_middle_pane_ParamLimits

0x0dd5,	// (0x00044ab9) bg_sctrl_middle_pane

0xc2b6,	// (0x0004ff9a) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) cell_sctrl_middle_pane_g1

0x8ce6,	// (0x0004c9ca) cell_sctrl_middle_pane_g2_ParamLimits

0x8ce6,	// (0x0004c9ca) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x000539ce) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x000539ce) cell_sctrl_middle_pane_g

0x9a70,	// (0x0004d754) bg_sctrl_middle_pane_g1

0x9a78,	// (0x0004d75c) bg_sctrl_middle_pane_g2

0x9a80,	// (0x0004d764) bg_sctrl_middle_pane_g3

0x9a88,	// (0x0004d76c) bg_sctrl_middle_pane_g4

0x9a90,	// (0x0004d774) bg_sctrl_middle_pane_g5

0x9a98,	// (0x0004d77c) bg_sctrl_middle_pane_g6

0x9aa0,	// (0x0004d784) bg_sctrl_middle_pane_g7

0x9aa8,	// (0x0004d78c) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x000539d3) bg_sctrl_middle_pane_g

0x9ab0,	// (0x0004d794) bg_sctrl_middle_pane_g8_copy1

0x9a70,	// (0x0004d754) bg_sctrl_sk_pane_g1

0x9a78,	// (0x0004d75c) bg_sctrl_sk_pane_g2

0x9a80,	// (0x0004d764) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00053520) bg_sctrl_sk_pane_g

0x0d17,	// (0x000449fb) aid_size_touch_scroll_bar

0x9a88,	// (0x0004d76c) bg_sctrl_sk_pane_g4

0x9a90,	// (0x0004d774) bg_sctrl_sk_pane_g5

0x9a98,	// (0x0004d77c) bg_sctrl_sk_pane_g6

0x9aa0,	// (0x0004d784) bg_sctrl_sk_pane_g7

0x9aa8,	// (0x0004d78c) bg_sctrl_sk_pane_g8

0x9ab0,	// (0x0004d794) bg_sctrl_sk_pane_g9

0x7a10,	// (0x0004b6f4) popup_fep_china_hwr2_fs_candidate_window

0x7a1a,	// (0x0004b6fe) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7a1a,	// (0x0004b6fe) popup_fep_china_hwr2_fs_control_window

0xc2b6,	// (0x0004ff9a) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x000539c9) sctrl_sk_top_pane_g

0xd75b,	// (0x0005143f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75b,	// (0x0005143f) aid_fep_china_hwr2_fs_cell

0xd76d,	// (0x00051451) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76d,	// (0x00051451) bg_popup_fep_shadow_pane_cp4

0xd784,	// (0x00051468) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd784,	// (0x00051468) bg_popup_fep_shadow_pane_cp5

0xd796,	// (0x0005147a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd796,	// (0x0005147a) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a6,	// (0x0005148a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ae,	// (0x00051492) aid_fep_china_hwr2_fs_candi_cell

0x09af,	// (0x00044693) bg_popup_fep_shadow_pane_cp6

0xd7b8,	// (0x0005149c) popup_fep_china_hwr2_fs_candidate_grid

0xd7c2,	// (0x000514a6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c2,	// (0x000514a6) cell_fep_china_hwr2_fs_funtion_grid

0xc046,	// (0x0004fd2a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7da,	// (0x000514be) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7da,	// (0x000514be) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e8,	// (0x000514cc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e8,	// (0x000514cc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x000539e4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x000539e4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7fe,	// (0x000514e2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7fe,	// (0x000514e2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd813,	// (0x000514f7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd813,	// (0x000514f7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x000539e9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x000539e9) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82f,	// (0x00051513) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd837,	// (0x0005151b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83f,	// (0x00051523) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x000539ee) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd847,	// (0x0005152b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd847,	// (0x0005152b) cell_fep_china_hwr2_fs_candidate_grid

0xd860,	// (0x00051544) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd868,	// (0x0005154c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc046,	// (0x0004fd2a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc046,	// (0x0004fd2a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00053815) cell_fep_china_hwr2_fs_candidate_grid_g

0xd870,	// (0x00051554) cell_fep_china_hwr2_fs_candidate_grid_t1

0x800f,	// (0x0004bcf3) clock_nsta_pane_cp_24_ParamLimits

0x800f,	// (0x0004bcf3) clock_nsta_pane_cp_24

0x808d,	// (0x0004bd71) indicator_nsta_pane_cp_24_ParamLimits

0x808d,	// (0x0004bd71) indicator_nsta_pane_cp_24

0xa77e,	// (0x0004e462) heading_pane_g1

0x0001,

0xf8a1,	// (0x00053585) heading_pane_g

0xb165,	// (0x0004ee49) grid_sct_catagory_button_pane

0xb195,	// (0x0004ee79) scroll_pane_cp5_ParamLimits

0xbc39,	// (0x0004f91d) button_value_adjust_pane_cp5_ParamLimits

0xbc39,	// (0x0004f91d) button_value_adjust_pane_cp5

0xbd18,	// (0x0004f9fc) form2_midp_time_pane_ParamLimits

0xd87e,	// (0x00051562) cell_sct_catagory_button_pane_ParamLimits

0xd87e,	// (0x00051562) cell_sct_catagory_button_pane

0xc00b,	// (0x0004fcef) bg_button_pane_cp01_ParamLimits

0xc00b,	// (0x0004fcef) bg_button_pane_cp01

0xc046,	// (0x0004fd2a) cell_sct_catagory_button_pane_g1

0x7de6,	// (0x0004baca) popup_tb_extension_window

0xd890,	// (0x00051574) aid_size_cell_ext_ParamLimits

0xd890,	// (0x00051574) aid_size_cell_ext

0x0b49,	// (0x0004482d) bg_tb_trans_pane_cp1_ParamLimits

0x0b49,	// (0x0004482d) bg_tb_trans_pane_cp1

0xd8b0,	// (0x00051594) grid_tb_ext_pane_ParamLimits

0xd8b0,	// (0x00051594) grid_tb_ext_pane

0xd8e0,	// (0x000515c4) cell_tb_ext_pane_ParamLimits

0xd8e0,	// (0x000515c4) cell_tb_ext_pane

0xd8f7,	// (0x000515db) cell_tb_ext_pane_g1_ParamLimits

0xd8f7,	// (0x000515db) cell_tb_ext_pane_g1

0xd914,	// (0x000515f8) cell_tb_ext_pane_t1

0x0b49,	// (0x0004482d) list_highlight_pane_cp11_ParamLimits

0x0b49,	// (0x0004482d) list_highlight_pane_cp11

0x6682,	// (0x0004a366) popup_uni_indicator_window_ParamLimits

0x6682,	// (0x0004a366) popup_uni_indicator_window

0x0dd5,	// (0x00044ab9) bg_popup_sub_pane_cp14

0xd930,	// (0x00051614) list_uniindi_pane

0xd93c,	// (0x00051620) uniindi_top_pane

0x0b49,	// (0x0004482d) bg_uniindi_top_pane

0xd95b,	// (0x0005163f) uniindi_top_pane_g1

0xd971,	// (0x00051655) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x000539f5) uniindi_top_pane_g

0xd99b,	// (0x0005167f) uniindi_top_pane_t1

0xd9c5,	// (0x000516a9) list_single_uniindi_pane_ParamLimits

0xd9c5,	// (0x000516a9) list_single_uniindi_pane

0xc046,	// (0x0004fd2a) bg_uniindi_top_pane_g1

0xd9d8,	// (0x000516bc) list_single_uniindi_pane_g1

0xd9eb,	// (0x000516cf) list_single_uniindi_pane_t1

0x09af,	// (0x00044693) control_bg_pane

0xda10,	// (0x000516f4) bg_sctrl_sk_pane_cp1

0xda19,	// (0x000516fd) bg_sctrl_sk_pane_cp2

0xda22,	// (0x00051706) control_bg_pane_g1

0xda2b,	// (0x0005170f) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x000539fe) control_bg_pane_g

0xba7f,	// (0x0004f763) cell_indicator_nsta_pane_g1_ParamLimits

0xba8d,	// (0x0004f771) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00053779) cell_indicator_nsta_pane_g_ParamLimits

0x608e,	// (0x00049d72) form2_midp_time_pane_t1_ParamLimits

0x0cc9,	// (0x000449ad) main_idle_act4_pane_ParamLimits

0x0cc9,	// (0x000449ad) main_idle_act4_pane

0x7de6,	// (0x0004baca) popup_tb_extension_window_ParamLimits

0xd8d0,	// (0x000515b4) tb_ext_find_pane_ParamLimits

0xd8d0,	// (0x000515b4) tb_ext_find_pane

0xda34,	// (0x00051718) ai_gene_pane_1_cp1

0x16f1,	// (0x000453d5) ai_gene_pane_2_cp1

0xda3c,	// (0x00051720) list_single_idle_plugin_calendar_pane

0xda45,	// (0x00051729) list_single_idle_plugin_notification_pane

0xda4e,	// (0x00051732) list_single_idle_plugin_player_pane

0xda57,	// (0x0005173b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda57,	// (0x0005173b) list_single_idle_plugin_shortcut_pane

0xda79,	// (0x0005175d) main_idle_act4_pane_t1

0xda8b,	// (0x0005176f) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x00053a03) main_idle_act4_pane_t

0xda9d,	// (0x00051781) middle_sk_idle_act4_pane_ParamLimits

0xda9d,	// (0x00051781) middle_sk_idle_act4_pane

0xdab3,	// (0x00051797) popup_clock_digital_analogue_window_cp2

0xdacd,	// (0x000517b1) shortcut_wheel_idle_act4_pane_ParamLimits

0xdacd,	// (0x000517b1) shortcut_wheel_idle_act4_pane

0xc046,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g1

0xc046,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g2

0xc046,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g3

0xc046,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g4

0xc046,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g5

0xdae1,	// (0x000517c5) shortcut_wheel_idle_act4_pane_g6

0xdae9,	// (0x000517cd) shortcut_wheel_idle_act4_pane_g7

0xdaf1,	// (0x000517d5) shortcut_wheel_idle_act4_pane_g8

0xdaf9,	// (0x000517dd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x00053a08) shortcut_wheel_idle_act4_pane_g

0xc2b6,	// (0x0004ff9a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) middle_sk_idle_act4_pane_g1

0xdb5d,	// (0x00051841) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb5d,	// (0x00051841) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x00053a2b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x00053a2b) middle_sk_idle_act4_pane_g

0xdb69,	// (0x0005184d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb69,	// (0x0005184d) middle_sk_idle_act4_pane_t1

0xdb86,	// (0x0005186a) grid_ai_shortcut_pane_ParamLimits

0xdb86,	// (0x0005186a) grid_ai_shortcut_pane

0xdb9f,	// (0x00051883) list_highlight_pane_cp16_ParamLimits

0xdb9f,	// (0x00051883) list_highlight_pane_cp16

0xdbac,	// (0x00051890) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbac,	// (0x00051890) list_single_idle_plugin_shortcut_pane_g1

0xdbb8,	// (0x0005189c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb8,	// (0x0005189c) list_single_idle_plugin_shortcut_pane_g2

0xdbd0,	// (0x000518b4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd0,	// (0x000518b4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x00053a30) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x00053a30) list_single_idle_plugin_shortcut_pane_g

0xdbe3,	// (0x000518c7) cell_ai_shortcut_pane_ParamLimits

0xdbe3,	// (0x000518c7) cell_ai_shortcut_pane

0xdc07,	// (0x000518eb) cell_ai_shortcut_pane_g1_ParamLimits

0xdc07,	// (0x000518eb) cell_ai_shortcut_pane_g1

0xda34,	// (0x00051718) ai_gene_pane_1_cp2

0xdc29,	// (0x0005190d) ai_gene_pane_2_cp2

0xdc31,	// (0x00051915) list_highlight_pane_cp15

0xdc3a,	// (0x0005191e) list_single_idle_plugin_calendar_pane_g1

0xdc31,	// (0x00051915) list_highlight_pane_cp17

0xdc42,	// (0x00051926) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc4a,	// (0x0005192e) list_single_idle_plugin_player_pane_g1

0xb3be,	// (0x0004f0a2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x00053a37) list_single_idle_plugin_player_pane_g

0xdc52,	// (0x00051936) list_single_idle_plugin_player_pane_t1

0xdc60,	// (0x00051944) list_single_idle_plugin_player_pane_t2

0xdc6e,	// (0x00051952) list_single_idle_plugin_player_pane_t3

0xdc7c,	// (0x00051960) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x00053a3c) list_single_idle_plugin_player_pane_t

0xdc8a,	// (0x0005196e) wait_bar_pane_cp15

0xdc92,	// (0x00051976) grid_ai_notification_pane

0xb3be,	// (0x0004f0a2) list_single_idle_plugin_notification_pane_g1

0xdc9b,	// (0x0005197f) cell_ai_notification_pane_ParamLimits

0xdc9b,	// (0x0005197f) cell_ai_notification_pane

0xdca8,	// (0x0005198c) cell_ai_notification_pane_g1

0xdcb0,	// (0x00051994) cell_ai_notification_pane_t1

0xdcbe,	// (0x000519a2) tb_ext_find_button_pane

0xdcc6,	// (0x000519aa) tb_ext_find_pane_g1

0xdcce,	// (0x000519b2) tb_ext_find_pane_t1

0x1227,	// (0x00044f0b) tb_ext_find_button_pane_g1

0xdcdc,	// (0x000519c0) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x00053a45) tb_ext_find_button_pane_g

0xda79,	// (0x0005175d) main_idle_act4_pane_t1_ParamLimits

0xda8b,	// (0x0005176f) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x00053a03) main_idle_act4_pane_t_ParamLimits

0xdab3,	// (0x00051797) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac1,	// (0x000517a5) sat_plugin_idle_act4_pane_ParamLimits

0xdac1,	// (0x000517a5) sat_plugin_idle_act4_pane

0xdce5,	// (0x000519c9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdce5,	// (0x000519c9) sat_plugin_idle_act4_pane_t1

0xdcf8,	// (0x000519dc) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf8,	// (0x000519dc) sat_plugin_idle_act4_pane_t2

0xdd0b,	// (0x000519ef) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd0b,	// (0x000519ef) sat_plugin_idle_act4_pane_t3

0xdd1e,	// (0x00051a02) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd1e,	// (0x00051a02) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x00053a4a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x00053a4a) sat_plugin_idle_act4_pane_t

0x65cb,	// (0x0004a2af) popup_battery_window_ParamLimits

0x65cb,	// (0x0004a2af) popup_battery_window

0x0b49,	// (0x0004482d) bg_popup_sub_pane_cp25_ParamLimits

0x0b49,	// (0x0004482d) bg_popup_sub_pane_cp25

0xdd31,	// (0x00051a15) popup_battery_window_g1_ParamLimits

0xdd31,	// (0x00051a15) popup_battery_window_g1

0xdd3d,	// (0x00051a21) popup_battery_window_t1_ParamLimits

0xdd3d,	// (0x00051a21) popup_battery_window_t1

0xdd4f,	// (0x00051a33) popup_battery_window_t2_ParamLimits

0xdd4f,	// (0x00051a33) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x00053a53) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x00053a53) popup_battery_window_t

0x75a5,	// (0x0004b289) midp_canvas_pane_ParamLimits

0x761e,	// (0x0004b302) midp_keypad_pane_ParamLimits

0x761e,	// (0x0004b302) midp_keypad_pane

0x0f17,	// (0x00044bfb) main_midp_pane_ParamLimits

0xbaf9,	// (0x0004f7dd) signal_pane_g2_cp_ParamLimits

0xdd6c,	// (0x00051a50) aid_size_cell_midp_keypad_ParamLimits

0xdd6c,	// (0x00051a50) aid_size_cell_midp_keypad

0xdd86,	// (0x00051a6a) midp_keyp_game_grid_pane_ParamLimits

0xdd86,	// (0x00051a6a) midp_keyp_game_grid_pane

0xdda6,	// (0x00051a8a) midp_keyp_rocker_pane_ParamLimits

0xdda6,	// (0x00051a8a) midp_keyp_rocker_pane

0xdddf,	// (0x00051ac3) midp_keyp_sk_left_pane_ParamLimits

0xdddf,	// (0x00051ac3) midp_keyp_sk_left_pane

0xde39,	// (0x00051b1d) midp_keyp_sk_right_pane_ParamLimits

0xde39,	// (0x00051b1d) midp_keyp_sk_right_pane

0x09af,	// (0x00044693) bg_button_pane_cp03

0xde93,	// (0x00051b77) midp_keyp_sk_left_pane_g1

0x09af,	// (0x00044693) bg_button_pane_cp04

0xde93,	// (0x00051b77) midp_keyp_sk_right_pane_g1

0xc046,	// (0x0004fd2a) midp_keyp_rocker_pane_g1

0xde9c,	// (0x00051b80) keyp_game_cell_pane_ParamLimits

0xde9c,	// (0x00051b80) keyp_game_cell_pane

0x09af,	// (0x00044693) bg_button_pane_cp02

0xdeaf,	// (0x00051b93) keyp_game_cell_pane_g1

0x6601,	// (0x0004a2e5) popup_fep_vkb2_window_ParamLimits

0x6601,	// (0x0004a2e5) popup_fep_vkb2_window

0x8d04,	// (0x0004c9e8) aid_size_cell_vkb2_ParamLimits

0x8d04,	// (0x0004c9e8) aid_size_cell_vkb2

0x8d58,	// (0x0004ca3c) popup_fep_vkb2_window_g1_ParamLimits

0x8d58,	// (0x0004ca3c) popup_fep_vkb2_window_g1

0x8da0,	// (0x0004ca84) vkb2_area_bottom_pane_ParamLimits

0x8da0,	// (0x0004ca84) vkb2_area_bottom_pane

0x8dec,	// (0x0004cad0) vkb2_area_keypad_pane_ParamLimits

0x8dec,	// (0x0004cad0) vkb2_area_keypad_pane

0x8e2e,	// (0x0004cb12) vkb2_area_top_pane_ParamLimits

0x8e2e,	// (0x0004cb12) vkb2_area_top_pane

0x8ea8,	// (0x0004cb8c) vkb2_top_entry_pane_ParamLimits

0x8ea8,	// (0x0004cb8c) vkb2_top_entry_pane

0x8ed2,	// (0x0004cbb6) vkb2_top_grid_left_pane_ParamLimits

0x8ed2,	// (0x0004cbb6) vkb2_top_grid_left_pane

0x8ef0,	// (0x0004cbd4) vkb2_top_grid_right_pane_ParamLimits

0x8ef0,	// (0x0004cbd4) vkb2_top_grid_right_pane

0x8f0e,	// (0x0004cbf2) vkb2_cell_keypad_pane_ParamLimits

0x8f0e,	// (0x0004cbf2) vkb2_cell_keypad_pane

0x8fdf,	// (0x0004ccc3) vkb2_area_bottom_grid_pane_ParamLimits

0x8fdf,	// (0x0004ccc3) vkb2_area_bottom_grid_pane

0x9005,	// (0x0004cce9) vkb2_area_bottom_pane_g1_ParamLimits

0x9005,	// (0x0004cce9) vkb2_area_bottom_pane_g1

0x9029,	// (0x0004cd0d) vkb2_area_bottom_pane_g2_ParamLimits

0x9029,	// (0x0004cd0d) vkb2_area_bottom_pane_g2

0x9057,	// (0x0004cd3b) vkb2_area_bottom_pane_g3_ParamLimits

0x9057,	// (0x0004cd3b) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x00053a58) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x00053a58) vkb2_area_bottom_pane_g

0x90b8,	// (0x0004cd9c) vkb2_top_cell_left_pane_ParamLimits

0x90b8,	// (0x0004cd9c) vkb2_top_cell_left_pane

0xdec0,	// (0x00051ba4) vkb2_top_entry_pane_g1_ParamLimits

0xdec0,	// (0x00051ba4) vkb2_top_entry_pane_g1

0xdece,	// (0x00051bb2) vkb2_top_entry_pane_t1_ParamLimits

0xdece,	// (0x00051bb2) vkb2_top_entry_pane_t1

0xdf00,	// (0x00051be4) vkb2_top_entry_pane_t2_ParamLimits

0xdf00,	// (0x00051be4) vkb2_top_entry_pane_t2

0xdf32,	// (0x00051c16) vkb2_top_entry_pane_t3_ParamLimits

0xdf32,	// (0x00051c16) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x00053a5f) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x00053a5f) vkb2_top_entry_pane_t

0x9105,	// (0x0004cde9) vkb2_top_grid_right_pane_g1_ParamLimits

0x9105,	// (0x0004cde9) vkb2_top_grid_right_pane_g1

0x911b,	// (0x0004cdff) vkb2_top_grid_right_pane_g2_ParamLimits

0x911b,	// (0x0004cdff) vkb2_top_grid_right_pane_g2

0x9133,	// (0x0004ce17) vkb2_top_grid_right_pane_g3_ParamLimits

0x9133,	// (0x0004ce17) vkb2_top_grid_right_pane_g3

0x914b,	// (0x0004ce2f) vkb2_top_grid_right_pane_g4_ParamLimits

0x914b,	// (0x0004ce2f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x00053a66) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x00053a66) vkb2_top_grid_right_pane_g

0x9161,	// (0x0004ce45) vkb2_top_cell_left_pane_g1

0x9178,	// (0x0004ce5c) vkb2_cell_keypad_pane_g1_ParamLimits

0x9178,	// (0x0004ce5c) vkb2_cell_keypad_pane_g1

0xdf56,	// (0x00051c3a) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf56,	// (0x00051c3a) vkb2_cell_keypad_pane_t1

0x9186,	// (0x0004ce6a) vkb2_cell_bottom_grid_pane_ParamLimits

0x9186,	// (0x0004ce6a) vkb2_cell_bottom_grid_pane

0x91bf,	// (0x0004cea3) vkb2_cell_bottom_grid_pane_g1

0xdb01,	// (0x000517e5) aid_call2_pane_cp02

0xdb09,	// (0x000517ed) aid_call_pane_cp02

0xdb11,	// (0x000517f5) clock_digital_number_pane_cp10

0xdb19,	// (0x000517fd) clock_digital_number_pane_cp11

0xdb21,	// (0x00051805) clock_digital_number_pane_cp12

0xdb29,	// (0x0005180d) clock_digital_number_pane_cp13

0xdb31,	// (0x00051815) clock_digital_separator_pane_cp10

0x1227,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g1

0x1227,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g2

0xdb39,	// (0x0005181d) popup_clock_digital_analogue_window_cp2_g3

0x1227,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g4

0xdb39,	// (0x0005181d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x00053a1b) popup_clock_digital_analogue_window_cp2_g

0xdb41,	// (0x00051825) popup_clock_digital_analogue_window_cp2_t1

0xdb4f,	// (0x00051833) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x00053a26) popup_clock_digital_analogue_window_cp2_t

0xc046,	// (0x0004fd2a) clock_digital_number_pane_cp10_g1

0xc046,	// (0x0004fd2a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053815) clock_digital_number_pane_cp10_g

0xc046,	// (0x0004fd2a) clock_digital_separator_pane_cp10_g1

0xc046,	// (0x0004fd2a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053815) clock_digital_separator_pane_cp10_g

0xd97d,	// (0x00051661) uniindi_top_pane_g3

0xd98e,	// (0x00051672) uniindi_top_pane_g4

0x8f99,	// (0x0004cc7d) vkb2_row_keypad_pane_ParamLimits

0x8f99,	// (0x0004cc7d) vkb2_row_keypad_pane

0x91db,	// (0x0004cebf) vkb2_cell_t_keypad_pane_ParamLimits

0x91db,	// (0x0004cebf) vkb2_cell_t_keypad_pane

0x91eb,	// (0x0004cecf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91eb,	// (0x0004cecf) vkb2_cell_t_keypad_pane_cp08

0x91fe,	// (0x0004cee2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91fe,	// (0x0004cee2) vkb2_cell_t_keypad_pane_cp09

0x9212,	// (0x0004cef6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9212,	// (0x0004cef6) vkb2_cell_t_keypad_pane_cp01

0x9223,	// (0x0004cf07) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9223,	// (0x0004cf07) vkb2_cell_t_keypad_pane_cp02

0x9234,	// (0x0004cf18) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9234,	// (0x0004cf18) vkb2_cell_t_keypad_pane_cp03

0x9245,	// (0x0004cf29) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9245,	// (0x0004cf29) vkb2_cell_t_keypad_pane_cp04

0x9256,	// (0x0004cf3a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9256,	// (0x0004cf3a) vkb2_cell_t_keypad_pane_cp05

0x9267,	// (0x0004cf4b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9267,	// (0x0004cf4b) vkb2_cell_t_keypad_pane_cp06

0x9278,	// (0x0004cf5c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9278,	// (0x0004cf5c) vkb2_cell_t_keypad_pane_cp07

0x9289,	// (0x0004cf6d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9289,	// (0x0004cf6d) vkb2_cell_t_keypad_pane_cp10

0xc2b6,	// (0x0004ff9a) vkb2_cell_t_keypad_pane_g1

0xdf6d,	// (0x00051c51) vkb2_cell_t_keypad_pane_t1

0x09af,	// (0x00044693) popup_grid_graphic2_window

0xdf7f,	// (0x00051c63) aid_size_cell_graphic2_ParamLimits

0xdf7f,	// (0x00051c63) aid_size_cell_graphic2

0xdfb7,	// (0x00051c9b) bg_popup_window_pane_cp21_ParamLimits

0xdfb7,	// (0x00051c9b) bg_popup_window_pane_cp21

0xdfc5,	// (0x00051ca9) graphic2_pages_pane_ParamLimits

0xdfc5,	// (0x00051ca9) graphic2_pages_pane

0xe00b,	// (0x00051cef) grid_graphic2_control_pane_ParamLimits

0xe00b,	// (0x00051cef) grid_graphic2_control_pane

0xe049,	// (0x00051d2d) grid_graphic2_pane_ParamLimits

0xe049,	// (0x00051d2d) grid_graphic2_pane

0xe0bd,	// (0x00051da1) cell_graphic2_pane

0x09af,	// (0x00044693) main_comp_mode_pane

0xd1ee,	// (0x00050ed2) list_ai3_gene_pane_ParamLimits

0xd5bc,	// (0x000512a0) bg_popup_window_pane_cp19_ParamLimits

0xd5c8,	// (0x000512ac) bg_touch_area_indi_pane_ParamLimits

0xd5c8,	// (0x000512ac) bg_touch_area_indi_pane

0xd5de,	// (0x000512c2) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5de,	// (0x000512c2) bg_touch_area_indi_pane_cp01

0xd5f4,	// (0x000512d8) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f4,	// (0x000512d8) bg_touch_area_indi_pane_cp02

0xd60a,	// (0x000512ee) bg_touch_area_indi_pane_cp03_ParamLimits

0xd60a,	// (0x000512ee) bg_touch_area_indi_pane_cp03

0xd624,	// (0x00051308) popup_slider_window_g1_ParamLimits

0xd640,	// (0x00051324) popup_slider_window_g2_ParamLimits

0xd65c,	// (0x00051340) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x000539b0) popup_slider_window_g_ParamLimits

0xd6c2,	// (0x000513a6) popup_slider_window_t1_ParamLimits

0xd736,	// (0x0005141a) small_volume_slider_vertical_pane_ParamLimits

0xe0bd,	// (0x00051da1) cell_graphic2_pane_ParamLimits

0xe10c,	// (0x00051df0) bg_button_pane_cp10_ParamLimits

0xe10c,	// (0x00051df0) bg_button_pane_cp10

0xe11f,	// (0x00051e03) bg_button_pane_cp11_ParamLimits

0xe11f,	// (0x00051e03) bg_button_pane_cp11

0xe132,	// (0x00051e16) graphic2_pages_pane_g1_ParamLimits

0xe132,	// (0x00051e16) graphic2_pages_pane_g1

0xe14d,	// (0x00051e31) graphic2_pages_pane_g2_ParamLimits

0xe14d,	// (0x00051e31) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x00053a74) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x00053a74) graphic2_pages_pane_g

0xe165,	// (0x00051e49) graphic2_pages_pane_t1_ParamLimits

0xe165,	// (0x00051e49) graphic2_pages_pane_t1

0xe17d,	// (0x00051e61) cell_graphic2_control_pane_ParamLimits

0xe17d,	// (0x00051e61) cell_graphic2_control_pane

0xe19b,	// (0x00051e7f) cell_graphic2_pane_g1_ParamLimits

0xe19b,	// (0x00051e7f) cell_graphic2_pane_g1

0xe1a8,	// (0x00051e8c) cell_graphic2_pane_g2_ParamLimits

0xe1a8,	// (0x00051e8c) cell_graphic2_pane_g2

0xe1b5,	// (0x00051e99) cell_graphic2_pane_g3_ParamLimits

0xe1b5,	// (0x00051e99) cell_graphic2_pane_g3

0xe1c2,	// (0x00051ea6) cell_graphic2_pane_g4_ParamLimits

0xe1c2,	// (0x00051ea6) cell_graphic2_pane_g4

0xe1cf,	// (0x00051eb3) cell_graphic2_pane_g5_ParamLimits

0xe1cf,	// (0x00051eb3) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x00053a79) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x00053a79) cell_graphic2_pane_g

0xe1e8,	// (0x00051ecc) cell_graphic2_pane_t1_ParamLimits

0xe1e8,	// (0x00051ecc) cell_graphic2_pane_t1

0x9afc,	// (0x0004d7e0) grid_highlight_pane_cp11_ParamLimits

0x9afc,	// (0x0004d7e0) grid_highlight_pane_cp11

0x0b49,	// (0x0004482d) bg_button_pane_cp05

0xe21e,	// (0x00051f02) cell_graphic2_control_pane_g1

0xc046,	// (0x0004fd2a) bg_touch_area_indi_pane_g1

0xe246,	// (0x00051f2a) aid_cmod_rocker_key_size

0xe250,	// (0x00051f34) aid_cmode_itu_key_size

0xe25a,	// (0x00051f3e) main_cmode_video_pane

0xe264,	// (0x00051f48) main_comp_mode_itu_pane

0xe270,	// (0x00051f54) main_comp_mode_rocker_pane

0xe27c,	// (0x00051f60) cell_cmode_rocker_pane_ParamLimits

0xe27c,	// (0x00051f60) cell_cmode_rocker_pane

0xe28e,	// (0x00051f72) cell_cmode_itu_pane_ParamLimits

0xe28e,	// (0x00051f72) cell_cmode_itu_pane

0x0dd5,	// (0x00044ab9) bg_button_pane_cp06_ParamLimits

0x0dd5,	// (0x00044ab9) bg_button_pane_cp06

0xc2b6,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) cell_cmode_rocker_pane_g1

0xd7da,	// (0x000514be) cell_cmode_rocker_pane_g2_ParamLimits

0xd7da,	// (0x000514be) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x00053a89) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x00053a89) cell_cmode_rocker_pane_g

0x09af,	// (0x00044693) bg_button_pane_cp07

0xe2a3,	// (0x00051f87) cell_cmode_itu_pane_g1

0xe2ac,	// (0x00051f90) cell_cmode_itu_pane_t1

0xe2ba,	// (0x00051f9e) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x00053a8e) cell_cmode_itu_pane_t

0xda00,	// (0x000516e4) aid_touch_ctrl_left

0xda08,	// (0x000516ec) aid_touch_ctrl_right

0x09af,	// (0x00044693) compa_mode_pane

0xe2c8,	// (0x00051fac) aid_cmod_rocker_key_size_cp

0xe2d2,	// (0x00051fb6) aid_cmode_itu_key_size_cp

0xe2dc,	// (0x00051fc0) compa_mode_pane_g1

0xe2e4,	// (0x00051fc8) compa_mode_pane_g2

0xe2ec,	// (0x00051fd0) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x00053a93) compa_mode_pane_g

0xe2f4,	// (0x00051fd8) main_comp_mode_itu_pane_cp

0xe2fc,	// (0x00051fe0) main_comp_mode_rocker_pane_cp

0xe304,	// (0x00051fe8) cell_cmode_itu_pane_cp_ParamLimits

0xe304,	// (0x00051fe8) cell_cmode_itu_pane_cp

0xe319,	// (0x00051ffd) cell_cmode_rocker_pane_cp_ParamLimits

0xe319,	// (0x00051ffd) cell_cmode_rocker_pane_cp

0x0dd5,	// (0x00044ab9) bg_button_pane_cp06_cp_ParamLimits

0x0dd5,	// (0x00044ab9) bg_button_pane_cp06_cp

0xc2b6,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b6,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_cp

0xc046,	// (0x0004fd2a) cell_cmode_rocker_pane_g2_cp

0x09af,	// (0x00044693) bg_button_pane_cp07_cp

0xe32b,	// (0x0005200f) cell_cmode_itu_pane_g1_cp

0xe334,	// (0x00052018) cell_cmode_itu_pane_t1_cp

0xe334,	// (0x00052018) cell_cmode_itu_pane_t2_cp

0xaf99,	// (0x0004ec7d) settings_code_pane_cp2

0x0a1f,	// (0x00044703) bg_popup_window_pane_cp3_ParamLimits

0x0c62,	// (0x00044946) heading_pane_cp3_ParamLimits

0x0c71,	// (0x00044955) listscroll_popup_graphic_pane_ParamLimits

0x87dd,	// (0x0004c4c1) fep_hwr_aid_pane_ParamLimits

0x8c7b,	// (0x0004c95f) aid_touch_sctrl_top_ParamLimits

0x8c88,	// (0x0004c96c) sctrl_sk_top_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x000539c9) sctrl_sk_top_pane_g_ParamLimits

0x8c95,	// (0x0004c979) sctrl_sk_top_pane_t1_ParamLimits

0x8c7b,	// (0x0004c95f) aid_touch_sctrl_bottom_ParamLimits

0x8c95,	// (0x0004c979) sctrl_sk_bottom_pane_t1_ParamLimits

0xd949,	// (0x0005162d) aid_area_touch_clock

0x8e70,	// (0x0004cb54) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e70,	// (0x0004cb54) aid_vkb2_area_top_pane_cell

0x8fbb,	// (0x0004cc9f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8fbb,	// (0x0004cc9f) aid_vkb2_area_bottom_pane_cell

0xdeb8,	// (0x00051b9c) popup_char_count_window

0xe342,	// (0x00052026) popup_char_count_window_g1

0xe34b,	// (0x0005202f) popup_char_count_window_g2

0xe354,	// (0x00052038) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x00053a9a) popup_char_count_window_g

0xe35d,	// (0x00052041) popup_char_count_window_t1

0x8d36,	// (0x0004ca1a) popup_fep_char_preview_window_ParamLimits

0x8d36,	// (0x0004ca1a) popup_fep_char_preview_window

0x8e8e,	// (0x0004cb72) vkb2_top_candi_pane_ParamLimits

0x8e8e,	// (0x0004cb72) vkb2_top_candi_pane

0xe36b,	// (0x0005204f) cell_vkb2_top_candi_pane_ParamLimits

0xe36b,	// (0x0005204f) cell_vkb2_top_candi_pane

0xa116,	// (0x0004ddfa) bg_popup_fep_char_preview_window_ParamLimits

0xa116,	// (0x0004ddfa) bg_popup_fep_char_preview_window

0x929e,	// (0x0004cf82) popup_fep_char_preview_window_t1_ParamLimits

0x929e,	// (0x0004cf82) popup_fep_char_preview_window_t1

0xe3b8,	// (0x0005209c) bg_popup_fep_char_preview_window_g1

0xe3c0,	// (0x000520a4) bg_popup_fep_char_preview_window_g2

0xe3c8,	// (0x000520ac) bg_popup_fep_char_preview_window_g3

0xe3d0,	// (0x000520b4) bg_popup_fep_char_preview_window_g4

0xe3d8,	// (0x000520bc) bg_popup_fep_char_preview_window_g5

0xe3e0,	// (0x000520c4) bg_popup_fep_char_preview_window_g6

0xe3e8,	// (0x000520cc) bg_popup_fep_char_preview_window_g7

0xe3f0,	// (0x000520d4) bg_popup_fep_char_preview_window_g8

0xe3f8,	// (0x000520dc) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x00053aa1) bg_popup_fep_char_preview_window_g

0xc2b6,	// (0x0004ff9a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b6,	// (0x0004ff9a) cell_vkb2_top_candi_pane_g1

0xc729,	// (0x0005040d) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc729,	// (0x0005040d) cell_vkb2_top_candi_pane_g2

0xc74a,	// (0x0005042e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc74a,	// (0x0005042e) cell_vkb2_top_candi_pane_g3

0x92e0,	// (0x0004cfc4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92e0,	// (0x0004cfc4) cell_vkb2_top_candi_pane_g4

0xe400,	// (0x000520e4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe400,	// (0x000520e4) cell_vkb2_top_candi_pane_g5

0xd7da,	// (0x000514be) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7da,	// (0x000514be) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x00053ab6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x00053ab6) cell_vkb2_top_candi_pane_g

0x9301,	// (0x0004cfe5) cell_vkb2_top_candi_pane_t1

0x84ca,	// (0x0004c1ae) aid_size_touch_slider_mark_ParamLimits

0x84ca,	// (0x0004c1ae) aid_size_touch_slider_mark

0xdffb,	// (0x00051cdf) grid_graphic2_catg_pane_ParamLimits

0xdffb,	// (0x00051cdf) grid_graphic2_catg_pane

0xe099,	// (0x00051d7d) popup_grid_graphic2_window_t1_ParamLimits

0xe099,	// (0x00051d7d) popup_grid_graphic2_window_t1

0xe0ab,	// (0x00051d8f) popup_grid_graphic2_window_t2_ParamLimits

0xe0ab,	// (0x00051d8f) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x00053a6f) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x00053a6f) popup_grid_graphic2_window_t

0x0b49,	// (0x0004482d) bg_button_pane_cp05_ParamLimits

0xe21e,	// (0x00051f02) cell_graphic2_control_pane_g1_ParamLimits

0xe421,	// (0x00052105) cell_graphic2_catg_pane_ParamLimits

0xe421,	// (0x00052105) cell_graphic2_catg_pane

0x09af,	// (0x00044693) bg_button_pane_cp12

0xe433,	// (0x00052117) cell_graphic2_catg_pane_g1

0xd914,	// (0x000515f8) cell_tb_ext_pane_t1_ParamLimits

0x90d8,	// (0x0004cdbc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90d8,	// (0x0004cdbc) vkb2_top_cell_right_narrow_pane

0x90f0,	// (0x0004cdd4) vkb2_top_cell_right_wide_pane_ParamLimits

0x90f0,	// (0x0004cdd4) vkb2_top_cell_right_wide_pane

0x87cf,	// (0x0004c4b3) bg_vkb2_func_pane_ParamLimits

0x87cf,	// (0x0004c4b3) bg_vkb2_func_pane

0x9161,	// (0x0004ce45) vkb2_top_cell_left_pane_g1_ParamLimits

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp03

0x91bf,	// (0x0004cea3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a78,	// (0x0004d75c) bg_vkb2_func_pane_g1

0x9a80,	// (0x0004d764) bg_vkb2_func_pane_g2

0x9a90,	// (0x0004d774) bg_vkb2_func_pane_g3

0x9a88,	// (0x0004d76c) bg_vkb2_func_pane_g4

0x9a98,	// (0x0004d77c) bg_vkb2_func_pane_g5

0x9aa0,	// (0x0004d784) bg_vkb2_func_pane_g6

0x9aa8,	// (0x0004d78c) bg_vkb2_func_pane_g7

0x9ab0,	// (0x0004d794) bg_vkb2_func_pane_g8

0x9a70,	// (0x0004d754) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x00053ac3) bg_vkb2_func_pane_g

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp01

0x9161,	// (0x0004ce45) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9161,	// (0x0004ce45) vkb2_top_cell_right_wide_pane_g1

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x87cf,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp02

0x91bf,	// (0x0004cea3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x91bf,	// (0x0004cea3) vkb2_top_cell_right_narrow_pane_g1

0xd536,	// (0x0005121a) aid_touch_area_decrease_ParamLimits

0xd536,	// (0x0005121a) aid_touch_area_decrease

0xd55a,	// (0x0005123e) aid_touch_area_increase_ParamLimits

0xd55a,	// (0x0005123e) aid_touch_area_increase

0xd572,	// (0x00051256) aid_touch_area_mute_ParamLimits

0xd572,	// (0x00051256) aid_touch_area_mute

0xd58e,	// (0x00051272) aid_touch_area_slider_ParamLimits

0xd58e,	// (0x00051272) aid_touch_area_slider

0xd678,	// (0x0005135c) popup_slider_window_g4_ParamLimits

0xd678,	// (0x0005135c) popup_slider_window_g4

0xd690,	// (0x00051374) popup_slider_window_g5_ParamLimits

0xd690,	// (0x00051374) popup_slider_window_g5

0xd6b2,	// (0x00051396) popup_slider_window_g6_ParamLimits

0xd6b2,	// (0x00051396) popup_slider_window_g6

0xd6f0,	// (0x000513d4) popup_slider_window_t2_ParamLimits

0xd6f0,	// (0x000513d4) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x000539bd) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x000539bd) popup_slider_window_t

0xd708,	// (0x000513ec) slider_pane_ParamLimits

0xd708,	// (0x000513ec) slider_pane

0xe43c,	// (0x00052120) slider_pane_g1_ParamLimits

0xe43c,	// (0x00052120) slider_pane_g1

0xe450,	// (0x00052134) slider_pane_g2_ParamLimits

0xe450,	// (0x00052134) slider_pane_g2

0xe466,	// (0x0005214a) slider_pane_g3_ParamLimits

0xe466,	// (0x0005214a) slider_pane_g3

0x0003,

0xfdf2,	// (0x00053ad6) slider_pane_g_ParamLimits

0xfdf2,	// (0x00053ad6) slider_pane_g

0x7e42,	// (0x0004bb26) popup_tb_float_extension_window_ParamLimits

0x7e42,	// (0x0004bb26) popup_tb_float_extension_window

0xe492,	// (0x00052176) aid_size_cell_tb_float_ext

0x09af,	// (0x00044693) bg_popup_sub_window_cp28

0xe49e,	// (0x00052182) grid_tb_float_ext_pane

0xe4a8,	// (0x0005218c) cell_tb_float_ext_pane_ParamLimits

0xe4a8,	// (0x0005218c) cell_tb_float_ext_pane

0xe4c2,	// (0x000521a6) cell_tb_float_ext_pane_g1

0xe4cb,	// (0x000521af) grid_highlight_pane_cp12

0x8910,	// (0x0004c5f4) cell_last_hwr_side_pane_ParamLimits

0x8910,	// (0x0004c5f4) cell_last_hwr_side_pane

0xc046,	// (0x0004fd2a) cell_last_hwr_side_pane_g1

0xe4d4,	// (0x000521b8) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x00053adf) cell_last_hwr_side_pane_g

0x9087,	// (0x0004cd6b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9087,	// (0x0004cd6b) vkb2_area_bottom_space_btn_pane

0xc2b6,	// (0x0004ff9a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf6d,	// (0x00051c51) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9301,	// (0x0004cfe5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9320,	// (0x0004d004) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9320,	// (0x0004d004) vkb2_area_bottom_space_btn_pane_g1

0x935a,	// (0x0004d03e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x935a,	// (0x0004d03e) vkb2_area_bottom_space_btn_pane_g2

0x9390,	// (0x0004d074) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9390,	// (0x0004d074) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x00053ae4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x00053ae4) vkb2_area_bottom_space_btn_pane_g

0x8884,	// (0x0004c568) cel_fep_hwr_func_pane_ParamLimits

0x8884,	// (0x0004c568) cel_fep_hwr_func_pane

0x88c0,	// (0x0004c5a4) cell_hwr_side_button_pane_ParamLimits

0x88c0,	// (0x0004c5a4) cell_hwr_side_button_pane

0xd949,	// (0x0005162d) aid_area_touch_clock_ParamLimits

0x0b49,	// (0x0004482d) bg_uniindi_top_pane_ParamLimits

0xd95b,	// (0x0005163f) uniindi_top_pane_g1_ParamLimits

0xd971,	// (0x00051655) uniindi_top_pane_g2_ParamLimits

0xd97d,	// (0x00051661) uniindi_top_pane_g3_ParamLimits

0xd98e,	// (0x00051672) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x000539f5) uniindi_top_pane_g_ParamLimits

0xd99b,	// (0x0005167f) uniindi_top_pane_t1_ParamLimits

0x0b49,	// (0x0004482d) bg_vkb2_func_pane_cp01_ParamLimits

0x0b49,	// (0x0004482d) bg_vkb2_func_pane_cp01

0xe4dd,	// (0x000521c1) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4dd,	// (0x000521c1) cel_fep_hwr_func_pane_g1

0x0b49,	// (0x0004482d) bg_vkb2_func_pane_cp02_ParamLimits

0x0b49,	// (0x0004482d) bg_vkb2_func_pane_cp02

0xe4dd,	// (0x000521c1) cell_hwr_side_button_pane_g1_ParamLimits

0xe4dd,	// (0x000521c1) cell_hwr_side_button_pane_g1

0x98f4,	// (0x0004d5d8) status_pane_g4_ParamLimits

0x98f4,	// (0x0004d5d8) status_pane_g4

0x990e,	// (0x0004d5f2) status_pane_t1

0xbd81,	// (0x0004fa65) form2_midp_gauge_slider_cont_pane

0xbd89,	// (0x0004fa6d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9b,	// (0x0004fa7f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdad,	// (0x0004fa91) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x000537c8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbf,	// (0x0004faa3) form2_midp_slider_pane_ParamLimits

0x8cf6,	// (0x0004c9da) aid_size_cell_func_vkb2_ParamLimits

0x8cf6,	// (0x0004c9da) aid_size_cell_func_vkb2

0xe47e,	// (0x00052162) slider_pane_g4_ParamLimits

0xe47e,	// (0x00052162) slider_pane_g4

0x93da,	// (0x0004d0be) form2_midp_gauge_slider_pane_t2_cp01

0x93e8,	// (0x0004d0cc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x93e8,	// (0x0004d0cc) form2_midp_gauge_slider_pane_t3_cp01

0x9405,	// (0x0004d0e9) form2_midp_slider_pane_cp01

0x09af,	// (0x00044693) navi_smil_pane

0xe516,	// (0x000521fa) navi_smil_pane_g1

0xe51e,	// (0x00052202) navi_smil_pane_t1

0xe4eb,	// (0x000521cf) form2_midp_slider_pane_g1

0xe4f4,	// (0x000521d8) form2_midp_slider_pane_g2

0xe4fc,	// (0x000521e0) form2_midp_slider_pane_g3

0xe4eb,	// (0x000521cf) form2_midp_slider_pane_g4

0xe504,	// (0x000521e8) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x00053aed) form2_midp_slider_pane_g

0x93ca,	// (0x0004d0ae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x93ca,	// (0x0004d0ae) vkb2_area_bottom_space_btn_pane_g4

0x80c9,	// (0x0004bdad) lc0_navi_pane_ParamLimits

0x80c9,	// (0x0004bdad) lc0_navi_pane

0x813f,	// (0x0004be23) lc0_stat_indi_pane_ParamLimits

0x813f,	// (0x0004be23) lc0_stat_indi_pane

0x8156,	// (0x0004be3a) ls0_title_pane_ParamLimits

0x8156,	// (0x0004be3a) ls0_title_pane

0x0dd5,	// (0x00044ab9) bg_popup_sub_pane_cp14_ParamLimits

0xd930,	// (0x00051614) list_uniindi_pane_ParamLimits

0xd93c,	// (0x00051620) uniindi_top_pane_ParamLimits

0xd9d8,	// (0x000516bc) list_single_uniindi_pane_g1_ParamLimits

0xd9eb,	// (0x000516cf) list_single_uniindi_pane_t1_ParamLimits

0x940e,	// (0x0004d0f2) lc0_stat_clock_pane_ParamLimits

0x940e,	// (0x0004d0f2) lc0_stat_clock_pane

0xe52c,	// (0x00052210) lc0_stat_indi_pane_g1_ParamLimits

0xe52c,	// (0x00052210) lc0_stat_indi_pane_g1

0xe539,	// (0x0005221d) lc0_stat_indi_pane_g2_ParamLimits

0xe539,	// (0x0005221d) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x00053af8) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x00053af8) lc0_stat_indi_pane_g

0x941b,	// (0x0004d0ff) lc0_uni_indicator_pane_ParamLimits

0x941b,	// (0x0004d0ff) lc0_uni_indicator_pane

0xe546,	// (0x0005222a) ls0_title_pane_g1_ParamLimits

0xe546,	// (0x0005222a) ls0_title_pane_g1

0xe55a,	// (0x0005223e) ls0_title_pane_t1_ParamLimits

0xe55a,	// (0x0005223e) ls0_title_pane_t1

0x9428,	// (0x0004d10c) lc0_uni_indicator_pane_g1_ParamLimits

0x9428,	// (0x0004d10c) lc0_uni_indicator_pane_g1

0xe590,	// (0x00052274) lc0_stat_clock_pane_t1

0x09af,	// (0x00044693) main_ai5_pane

0xe59e,	// (0x00052282) ai5_sk_pane_ParamLimits

0xe59e,	// (0x00052282) ai5_sk_pane

0xe5ab,	// (0x0005228f) cell_ai5_widget_pane_ParamLimits

0xe5ab,	// (0x0005228f) cell_ai5_widget_pane

0xe674,	// (0x00052358) aid_size_cell_widget_grid

0xe682,	// (0x00052366) bg_ai5_widget_pane_ParamLimits

0xe682,	// (0x00052366) bg_ai5_widget_pane

0xe6fe,	// (0x000523e2) cell_ai5_widget_pane_g2

0xe712,	// (0x000523f6) cell_ai5_widget_pane_g3

0xe72c,	// (0x00052410) cell_ai5_widget_pane_g4

0xe73c,	// (0x00052420) cell_ai5_widget_pane_g5

0xe74c,	// (0x00052430) cell_ai5_widget_pane_g6

0xe758,	// (0x0005243c) cell_ai5_widget_pane_g7

0xe7c4,	// (0x000524a8) cell_ai5_widget_pane_t1_ParamLimits

0xe7c4,	// (0x000524a8) cell_ai5_widget_pane_t1

0xe7e1,	// (0x000524c5) cell_ai5_widget_pane_t2_ParamLimits

0xe7e1,	// (0x000524c5) cell_ai5_widget_pane_t2

0xe7f9,	// (0x000524dd) cell_ai5_widget_pane_t3_ParamLimits

0xe7f9,	// (0x000524dd) cell_ai5_widget_pane_t3

0xe811,	// (0x000524f5) cell_ai5_widget_pane_t4_ParamLimits

0xe811,	// (0x000524f5) cell_ai5_widget_pane_t4

0xe837,	// (0x0005251b) cell_ai5_widget_pane_t5_ParamLimits

0xe837,	// (0x0005251b) cell_ai5_widget_pane_t5

0xe856,	// (0x0005253a) cell_ai5_widget_pane_t6_ParamLimits

0xe856,	// (0x0005253a) cell_ai5_widget_pane_t6

0xe868,	// (0x0005254c) cell_ai5_widget_pane_t7_ParamLimits

0xe868,	// (0x0005254c) cell_ai5_widget_pane_t7

0xe887,	// (0x0005256b) cell_ai5_widget_pane_t8_ParamLimits

0xe887,	// (0x0005256b) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x00053b18) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00053b18) cell_ai5_widget_pane_t

0xe90b,	// (0x000525ef) grid_ai5_widget_pane

0x0dd5,	// (0x00044ab9) highlight_cell_ai5_widget_pane_ParamLimits

0x0dd5,	// (0x00044ab9) highlight_cell_ai5_widget_pane

0xe919,	// (0x000525fd) ai5_sk_left_pane

0xe923,	// (0x00052607) ai5_sk_middle_pane

0xe92d,	// (0x00052611) ai5_sk_right_pane

0xe937,	// (0x0005261b) bg_ai5_widget_pane_g1_ParamLimits

0xe937,	// (0x0005261b) bg_ai5_widget_pane_g1

0xe943,	// (0x00052627) bg_ai5_widget_pane_g2_ParamLimits

0xe943,	// (0x00052627) bg_ai5_widget_pane_g2

0xe94f,	// (0x00052633) bg_ai5_widget_pane_g3_ParamLimits

0xe94f,	// (0x00052633) bg_ai5_widget_pane_g3

0xe95b,	// (0x0005263f) bg_ai5_widget_pane_g4_ParamLimits

0xe95b,	// (0x0005263f) bg_ai5_widget_pane_g4

0xe967,	// (0x0005264b) bg_ai5_widget_pane_g5_ParamLimits

0xe967,	// (0x0005264b) bg_ai5_widget_pane_g5

0xe973,	// (0x00052657) bg_ai5_widget_pane_g6_ParamLimits

0xe973,	// (0x00052657) bg_ai5_widget_pane_g6

0xe97f,	// (0x00052663) bg_ai5_widget_pane_g7_ParamLimits

0xe97f,	// (0x00052663) bg_ai5_widget_pane_g7

0xe98b,	// (0x0005266f) bg_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x0005266f) bg_ai5_widget_pane_g8

0xe997,	// (0x0005267b) bg_ai5_widget_pane_g9_ParamLimits

0xe997,	// (0x0005267b) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x00053b31) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x00053b31) bg_ai5_widget_pane_g

0xe9c9,	// (0x000526ad) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c9,	// (0x000526ad) cell_shortcut_ai5_widget_pane

0x1670,	// (0x00045354) bg_cell_shortcut_ai5_widget_pane

0xe9da,	// (0x000526be) cell_grid_ai5_widget_pane_g1

0x1670,	// (0x00045354) highlight_cell_shortcut_ai5_widget_pane

0x9a80,	// (0x0004d764) ai5_sk_left_pane_g1

0xe9e3,	// (0x000526c7) ai5_sk_left_pane_g2

0xe9eb,	// (0x000526cf) ai5_sk_left_pane_g3

0xe9f3,	// (0x000526d7) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x00053b44) ai5_sk_left_pane_g

0xe9fb,	// (0x000526df) ai5_sk_left_pane_t1

0x9a78,	// (0x0004d75c) ai5_sk_right_pane_g1

0xea09,	// (0x000526ed) ai5_sk_right_pane_g2

0xea11,	// (0x000526f5) ai5_sk_right_pane_g3

0xea19,	// (0x000526fd) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00053b4d) ai5_sk_right_pane_g

0xea21,	// (0x00052705) ai5_sk_right_pane_t1

0x9a78,	// (0x0004d75c) ai5_sk_middle_pane_g1

0x9a80,	// (0x0004d764) ai5_sk_middle_pane_g2

0x9a98,	// (0x0004d77c) ai5_sk_middle_pane_g3

0xea11,	// (0x000526f5) ai5_sk_middle_pane_g4

0xe9eb,	// (0x000526cf) ai5_sk_middle_pane_g5

0xea2f,	// (0x00052713) ai5_sk_middle_pane_g6

0xea37,	// (0x0005271b) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x00053b56) ai5_sk_middle_pane_g

0x7f4f,	// (0x0004bc33) aid_touch_area_size_lc0_ParamLimits

0x7f4f,	// (0x0004bc33) aid_touch_area_size_lc0

0x8a0f,	// (0x0004c6f3) cell_hwr_candidate_pane_t1_ParamLimits

0x7f6b,	// (0x0004bc4f) aid_touch_navi_pane

0x989e,	// (0x0004d582) status_dt_navi_pane_ParamLimits

0x989e,	// (0x0004d582) status_dt_navi_pane

0x98ab,	// (0x0004d58f) status_dt_sta_pane_ParamLimits

0x98ab,	// (0x0004d58f) status_dt_sta_pane

0xea3f,	// (0x00052723) dt_sta_controll_pane

0xea4c,	// (0x00052730) dt_sta_indi_pane

0xea5d,	// (0x00052741) dt_sta_title_pane

0x0b49,	// (0x0004482d) bg_dt_sta_indi_pane_ParamLimits

0x0b49,	// (0x0004482d) bg_dt_sta_indi_pane

0xea70,	// (0x00052754) dt_sta_battery_pane

0xea78,	// (0x0005275c) dt_sta_indi_pane_g1

0xea81,	// (0x00052765) dt_sta_indi_pane_g2

0xea8a,	// (0x0005276e) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x00053b65) dt_sta_indi_pane_g

0xea93,	// (0x00052777) dt_sta_signal_pane

0x0dd5,	// (0x00044ab9) bg_dt_sta_title_pane_ParamLimits

0x0dd5,	// (0x00044ab9) bg_dt_sta_title_pane

0xa8d2,	// (0x0004e5b6) dt_sta_title_pane_g1

0xea9c,	// (0x00052780) dt_sta_title_pane_t1_ParamLimits

0xea9c,	// (0x00052780) dt_sta_title_pane_t1

0x09af,	// (0x00044693) bg_dt_sta_control_pane

0xeab1,	// (0x00052795) dt_sta_controll_pane_g1

0xeaba,	// (0x0005279e) bg_dt_sta_title_pane_g1

0xeac3,	// (0x000527a7) bg_dt_sta_title_pane_g2

0xeacc,	// (0x000527b0) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00053b6c) bg_dt_sta_title_pane_g

0xc046,	// (0x0004fd2a) bg_dt_sta_indi_pane_g1

0xead5,	// (0x000527b9) dt_sta_signal_pane_g1

0xeadd,	// (0x000527c1) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x00053b73) dt_sta_signal_pane_g

0xeae5,	// (0x000527c9) dt_sta_battery_pane_g1

0xeaee,	// (0x000527d2) dt_sta_battery_pane_t1

0xc046,	// (0x0004fd2a) bg_dt_sta_control_pane_g1

0x12aa,	// (0x00044f8e) fep_china_uni_eep_pane

0x12b2,	// (0x00044f96) fep_china_uni_entry_pane_ParamLimits

0x12c2,	// (0x00044fa6) popup_fep_china_uni_window_g1_ParamLimits

0x12d2,	// (0x00044fb6) popup_fep_china_uni_window_g2_ParamLimits

0x12d2,	// (0x00044fb6) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x000533d7) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x000533d7) popup_fep_china_uni_window_g

0xeafd,	// (0x000527e1) fep_china_uni_eep_pane_g1

0xeb05,	// (0x000527e9) fep_china_uni_eep_pane_t1

0xe50d,	// (0x000521f1) aid_touch_area_size_smil_player

0x80c1,	// (0x0004bda5) lc0_clock_pane

0x9902,	// (0x0004d5e6) status_pane_g5_ParamLimits

0x9902,	// (0x0004d5e6) status_pane_g5

0x7b03,	// (0x0004b7e7) popup_keymap_window

0x98c0,	// (0x0004d5a4) status_icon_pane

0xe712,	// (0x000523f6) cell_ai5_widget_pane_g3_ParamLimits

0xe72c,	// (0x00052410) cell_ai5_widget_pane_g4_ParamLimits

0xe73c,	// (0x00052420) cell_ai5_widget_pane_g5_ParamLimits

0xe764,	// (0x00052448) cell_ai5_widget_pane_g8_ParamLimits

0xe764,	// (0x00052448) cell_ai5_widget_pane_g8

0xe778,	// (0x0005245c) cell_ai5_widget_pane_g9_ParamLimits

0xe778,	// (0x0005245c) cell_ai5_widget_pane_g9

0xe78c,	// (0x00052470) cell_ai5_widget_pane_g10_ParamLimits

0xe78c,	// (0x00052470) cell_ai5_widget_pane_g10

0xeb14,	// (0x000527f8) status_icon_pane_g1

0x09af,	// (0x00044693) bg_popup_sub_pane_cp13

0xeb1c,	// (0x00052800) popup_keymap_window_t1

0x7840,	// (0x0004b524) control_pane_g6_ParamLimits

0x7840,	// (0x0004b524) control_pane_g6

0x784d,	// (0x0004b531) control_pane_g7_ParamLimits

0x784d,	// (0x0004b531) control_pane_g7

0x785a,	// (0x0004b53e) control_pane_g8_ParamLimits

0x785a,	// (0x0004b53e) control_pane_g8

0xea3f,	// (0x00052723) dt_sta_controll_pane_ParamLimits

0xea4c,	// (0x00052730) dt_sta_indi_pane_ParamLimits

0xea5d,	// (0x00052741) dt_sta_title_pane_ParamLimits

0x0d20,	// (0x00044a04) aid_size_touch_scroll_bar_cale

0x65df,	// (0x0004a2c3) popup_discreet_window_ParamLimits

0x65df,	// (0x0004a2c3) popup_discreet_window

0x6659,	// (0x0004a33d) popup_sk_window

0xa116,	// (0x0004ddfa) bg_popup_sub_pane_cp28_ParamLimits

0xa116,	// (0x0004ddfa) bg_popup_sub_pane_cp28

0xeb2a,	// (0x0005280e) popup_discreet_window_g1_ParamLimits

0xeb2a,	// (0x0005280e) popup_discreet_window_g1

0xeb4a,	// (0x0005282e) popup_discreet_window_t1_ParamLimits

0xeb4a,	// (0x0005282e) popup_discreet_window_t1

0xeb68,	// (0x0005284c) popup_discreet_window_t2_ParamLimits

0xeb68,	// (0x0005284c) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x00053b78) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x00053b78) popup_discreet_window_t

0x943c,	// (0x0004d120) popup_sk_window_g1

0x9446,	// (0x0004d12a) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00053b7f) popup_sk_window_g

0x944e,	// (0x0004d132) popup_sk_window_t1

0x945c,	// (0x0004d140) popup_sk_window_t1_copy1

0xe6fe,	// (0x000523e2) cell_ai5_widget_pane_g2_ParamLimits

0xe899,	// (0x0005257d) cell_ai5_widget_pane_t9_ParamLimits

0xe899,	// (0x0005257d) cell_ai5_widget_pane_t9

0x09af,	// (0x00044693) main_fep_fshwr2_pane

0x946a,	// (0x0004d14e) aid_fshwr2_btn_pane

0x947c,	// (0x0004d160) aid_fshwr2_syb_pane

0x948e,	// (0x0004d172) aid_fshwr2_txt_pane

0x949a,	// (0x0004d17e) fshwr2_func_candi_pane

0x94b6,	// (0x0004d19a) fshwr2_hwr_syb_pane

0x94d0,	// (0x0004d1b4) fshwr2_icf_pane

0x09af,	// (0x00044693) fshwr2_icf_bg_pane

0x94fe,	// (0x0004d1e2) fshwr2_icf_pane_t1_ParamLimits

0x94fe,	// (0x0004d1e2) fshwr2_icf_pane_t1

0x1227,	// (0x00044f0b) fshwr2_func_candi_pane_g1

0xebba,	// (0x0005289e) fshwr2_func_candi_row_pane_ParamLimits

0xebba,	// (0x0005289e) fshwr2_func_candi_row_pane

0x9517,	// (0x0004d1fb) cell_fshwr2_syb_pane_ParamLimits

0x9517,	// (0x0004d1fb) cell_fshwr2_syb_pane

0xe4dd,	// (0x000521c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4dd,	// (0x000521c1) fshwr2_hwr_syb_pane_g1

0x09af,	// (0x00044693) bg_popup_call_pane_cp01

0x953a,	// (0x0004d21e) fshwr2_func_candi_cell_pane_ParamLimits

0x953a,	// (0x0004d21e) fshwr2_func_candi_cell_pane

0xa772,	// (0x0004e456) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa772,	// (0x0004e456) fshwr2_func_candi_cell_bg_pane

0x9585,	// (0x0004d269) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9585,	// (0x0004d269) fshwr2_func_candi_cell_pane_g1

0x95a5,	// (0x0004d289) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95a5,	// (0x0004d289) fshwr2_func_candi_cell_pane_t1

0x09af,	// (0x00044693) bg_button_pane_cp08

0x0f17,	// (0x00044bfb) cell_fshwr2_syb_bg_pane

0x95b8,	// (0x0004d29c) cell_fshwr2_syb_bg_pane_g1

0x95cc,	// (0x0004d2b0) cell_fshwr2_syb_bg_pane_t1

0x0dd5,	// (0x00044ab9) main_tmo_pane

0xac0b,	// (0x0004e8ef) uni_indicator_pane_g1_ParamLimits

0xac1e,	// (0x0004e902) uni_indicator_pane_g2_ParamLimits

0xac30,	// (0x0004e914) uni_indicator_pane_g3_ParamLimits

0xac3f,	// (0x0004e923) uni_indicator_pane_g4_ParamLimits

0xac3f,	// (0x0004e923) uni_indicator_pane_g4

0xac53,	// (0x0004e937) uni_indicator_pane_g5_ParamLimits

0xac53,	// (0x0004e937) uni_indicator_pane_g5

0xac53,	// (0x0004e937) uni_indicator_pane_g6_ParamLimits

0xac53,	// (0x0004e937) uni_indicator_pane_g6

0xf8f7,	// (0x000535db) uni_indicator_pane_g_ParamLimits

0xd518,	// (0x000511fc) popup_tmo_note_window_ParamLimits

0xd518,	// (0x000511fc) popup_tmo_note_window

0x0dd5,	// (0x00044ab9) fshwr2_bg_pane

0x9596,	// (0x0004d27a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9596,	// (0x0004d27a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x00053b84) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x00053b84) fshwr2_func_candi_cell_pane_g

0xc046,	// (0x0004fd2a) bg_popup_window_pane_cp01

0x95e2,	// (0x0004d2c6) bg_popup_window_pane_g1_cp01

0xebe1,	// (0x000528c5) bg_popup_window_pane_cp22_ParamLimits

0xebe1,	// (0x000528c5) bg_popup_window_pane_cp22

0xebef,	// (0x000528d3) listscroll_tmo_link_pane_ParamLimits

0xebef,	// (0x000528d3) listscroll_tmo_link_pane

0xec2f,	// (0x00052913) popup_tmo_note_window_g1_ParamLimits

0xec2f,	// (0x00052913) popup_tmo_note_window_g1

0xec3c,	// (0x00052920) tmo_note_info_pane_ParamLimits

0xec3c,	// (0x00052920) tmo_note_info_pane

0xec56,	// (0x0005293a) list_tmo_note_info_pane_g1_ParamLimits

0xec56,	// (0x0005293a) list_tmo_note_info_pane_g1

0xec6d,	// (0x00052951) list_tmo_note_info_pane_g2_ParamLimits

0xec6d,	// (0x00052951) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00053b89) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00053b89) list_tmo_note_info_pane_g

0xec89,	// (0x0005296d) list_tmo_note_info_text_pane_ParamLimits

0xec89,	// (0x0005296d) list_tmo_note_info_text_pane

0xed0a,	// (0x000529ee) list_tmo_link_pane

0xed17,	// (0x000529fb) scroll_pane_cp20

0xed24,	// (0x00052a08) list_single_tmo_link_pane_ParamLimits

0xed24,	// (0x00052a08) list_single_tmo_link_pane

0xed34,	// (0x00052a18) list_single_tmo_link_pane_t1

0xed42,	// (0x00052a26) list_tmo_note_info_text_pane_t1_ParamLimits

0xed42,	// (0x00052a26) list_tmo_note_info_text_pane_t1

0x6dda,	// (0x0004aabe) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6dda,	// (0x0004aabe) aid_size_touch_scroll_bar_cp01

0x59ef,	// (0x000496d3) aid_size_touch_slider_marker

0x6641,	// (0x0004a325) popup_settings_window_ParamLimits

0x6641,	// (0x0004a325) popup_settings_window

0x5b6a,	// (0x0004984e) popup_candi_list_indi_window

0x7f6b,	// (0x0004bc4f) aid_touch_navi_pane_ParamLimits

0x8c4f,	// (0x0004c933) rs_clock_indi_pane

0x8c58,	// (0x0004c93c) sctrl_sk_bottom_pane_ParamLimits

0x8c69,	// (0x0004c94d) sctrl_sk_top_pane_ParamLimits

0x8d50,	// (0x0004ca34) popup_fep_tooltip_window

0xe674,	// (0x00052358) aid_size_cell_widget_grid_ParamLimits

0xe6e9,	// (0x000523cd) cell_ai5_widget_pane_g1_ParamLimits

0xe6e9,	// (0x000523cd) cell_ai5_widget_pane_g1

0xe74c,	// (0x00052430) cell_ai5_widget_pane_g6_ParamLimits

0xe758,	// (0x0005243c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x00053afd) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x00053afd) cell_ai5_widget_pane_g

0xe8c8,	// (0x000525ac) cell_ai5_widget_pane_t10_ParamLimits

0xe8c8,	// (0x000525ac) cell_ai5_widget_pane_t10

0xe90b,	// (0x000525ef) grid_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x00052687) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x00052687) cell_contacts_ai5_widget_pane

0xeb7d,	// (0x00052861) popup_discreet_window_t3_ParamLimits

0xeb7d,	// (0x00052861) popup_discreet_window_t3

0x94e8,	// (0x0004d1cc) popup_fshwr2_char_preview_window_ParamLimits

0x94e8,	// (0x0004d1cc) popup_fshwr2_char_preview_window

0xeca7,	// (0x0005298b) tmo_note_info_pane_t1

0xecbc,	// (0x000529a0) tmo_note_info_pane_t2

0xecd1,	// (0x000529b5) tmo_note_info_pane_t3

0xece6,	// (0x000529ca) tmo_note_info_pane_t4

0xecf8,	// (0x000529dc) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00053b8e) tmo_note_info_pane_t

0xed0a,	// (0x000529ee) list_tmo_link_pane_ParamLimits

0xed17,	// (0x000529fb) scroll_pane_cp20_ParamLimits

0x09af,	// (0x00044693) bg_popup_fep_char_preview_window_cp01

0xed5b,	// (0x00052a3f) popup_fshwr2_char_preview_window_t1

0xed69,	// (0x00052a4d) popup_candi_list_indi_window_g1

0xed72,	// (0x00052a56) bg_cell_contacts_ai5_widget_pane

0xed7e,	// (0x00052a62) cell_contacts_ai5_widget_pane_g1

0xc6eb,	// (0x000503cf) cell_contacts_ai5_widget_pane_g2

0xed93,	// (0x00052a77) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00053b99) cell_contacts_ai5_widget_pane_g

0xed9f,	// (0x00052a83) cell_contacts_ai5_widget_pane_t1

0x0dd5,	// (0x00044ab9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee16,	// (0x00052afa) settings_container_pane

0x1670,	// (0x00045354) listscroll_set_pane_copy1

0xb722,	// (0x0004f406) scroll_pane_cp121_copy1

0x9ebb,	// (0x0004db9f) set_content_pane_copy1

0xee22,	// (0x00052b06) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x00052b06) aid_height_set_list_copy1

0xae4b,	// (0x0004eb2f) aid_size_parent_copy1_ParamLimits

0xae4b,	// (0x0004eb2f) aid_size_parent_copy1

0xee2e,	// (0x00052b12) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x00052b12) button_value_adjust_pane_cp6_copy1

0x0f17,	// (0x00044bfb) list_highlight_pane_cp2_copy1_ParamLimits

0x0f17,	// (0x00044bfb) list_highlight_pane_cp2_copy1

0xee42,	// (0x00052b26) list_set_pane_copy1_ParamLimits

0xee42,	// (0x00052b26) list_set_pane_copy1

0xedb1,	// (0x00052a95) main_pane_set_t1_copy1_ParamLimits

0xedb1,	// (0x00052a95) main_pane_set_t1_copy1

0xedeb,	// (0x00052acf) main_pane_set_t2_copy1_ParamLimits

0xedeb,	// (0x00052acf) main_pane_set_t2_copy1

0xeeef,	// (0x00052bd3) main_pane_set_t3_copy1

0xeefd,	// (0x00052be1) main_pane_set_t4_copy1

0xee0a,	// (0x00052aee) set_content_pane_g1_copy1_ParamLimits

0xee0a,	// (0x00052aee) set_content_pane_g1_copy1

0xef0b,	// (0x00052bef) setting_code_pane_copy1

0xef13,	// (0x00052bf7) setting_slider_graphic_pane_copy1

0xef13,	// (0x00052bf7) setting_slider_pane_copy1

0xef1b,	// (0x00052bff) setting_text_pane_copy1

0xef1b,	// (0x00052bff) setting_volume_pane_copy1

0xef0b,	// (0x00052bef) settings_code_pane_cp2_copy1

0xef23,	// (0x00052c07) settings_code_pane_cp_copy1_ParamLimits

0xef23,	// (0x00052c07) settings_code_pane_cp_copy1

0x95eb,	// (0x0004d2cf) volume_set_pane_copy1

0xef37,	// (0x00052c1b) volume_set_pane_g10_copy1

0xef3f,	// (0x00052c23) volume_set_pane_g1_copy1

0xef47,	// (0x00052c2b) volume_set_pane_g2_copy1

0xef4f,	// (0x00052c33) volume_set_pane_g3_copy1

0xef57,	// (0x00052c3b) volume_set_pane_g4_copy1

0xef5f,	// (0x00052c43) volume_set_pane_g5_copy1

0xef67,	// (0x00052c4b) volume_set_pane_g6_copy1

0xef6f,	// (0x00052c53) volume_set_pane_g7_copy1

0xef77,	// (0x00052c5b) volume_set_pane_g8_copy1

0xef7f,	// (0x00052c63) volume_set_pane_g9_copy1

0x0a1f,	// (0x00044703) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a1f,	// (0x00044703) bg_set_opt_pane_cp_copy1

0x95f3,	// (0x0004d2d7) setting_slider_pane_t1_copy1_ParamLimits

0x95f3,	// (0x0004d2d7) setting_slider_pane_t1_copy1

0x9612,	// (0x0004d2f6) setting_slider_pane_t2_copy1_ParamLimits

0x9612,	// (0x0004d2f6) setting_slider_pane_t2_copy1

0x962c,	// (0x0004d310) setting_slider_pane_t3_copy1_ParamLimits

0x962c,	// (0x0004d310) setting_slider_pane_t3_copy1

0x9644,	// (0x0004d328) slider_set_pane_copy1_ParamLimits

0x9644,	// (0x0004d328) slider_set_pane_copy1

0x0e2d,	// (0x00044b11) set_opt_bg_pane_g1_copy2

0x0e35,	// (0x00044b19) set_opt_bg_pane_g2_copy2

0xef87,	// (0x00052c6b) set_opt_bg_pane_g3_copy2

0x0e45,	// (0x00044b29) set_opt_bg_pane_g4_copy2

0x0e4d,	// (0x00044b31) set_opt_bg_pane_g5_copy2

0x0e55,	// (0x00044b39) set_opt_bg_pane_g6_copy2

0xef91,	// (0x00052c75) set_opt_bg_pane_g7_copy2

0xef99,	// (0x00052c7d) set_opt_bg_pane_g8_copy2

0xefa3,	// (0x00052c87) set_opt_bg_pane_g9_copy2

0x965a,	// (0x0004d33e) aid_size_touch_slider_mark_copy1_ParamLimits

0x965a,	// (0x0004d33e) aid_size_touch_slider_mark_copy1

0xefad,	// (0x00052c91) slider_set_pane_g1_copy1

0x966e,	// (0x0004d352) slider_set_pane_g2_copy1

0x84ea,	// (0x0004c1ce) slider_set_pane_g3_copy1_ParamLimits

0x84ea,	// (0x0004c1ce) slider_set_pane_g3_copy1

0x84fe,	// (0x0004c1e2) slider_set_pane_g4_copy1_ParamLimits

0x84fe,	// (0x0004c1e2) slider_set_pane_g4_copy1

0x8516,	// (0x0004c1fa) slider_set_pane_g5_copy1_ParamLimits

0x8516,	// (0x0004c1fa) slider_set_pane_g5_copy1

0x84ea,	// (0x0004c1ce) slider_set_pane_g6_copy1_ParamLimits

0x84ea,	// (0x0004c1ce) slider_set_pane_g6_copy1

0x9676,	// (0x0004d35a) slider_set_pane_g7_copy1_ParamLimits

0x9676,	// (0x0004d35a) slider_set_pane_g7_copy1

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp2_copy1

0xefb6,	// (0x00052c9a) setting_slider_graphic_pane_g1_copy1

0xefbf,	// (0x00052ca3) setting_slider_graphic_pane_t1_copy1

0xefcf,	// (0x00052cb3) setting_slider_graphic_pane_t2_copy1

0xefdf,	// (0x00052cc3) slider_set_pane_cp_copy1

0xefef,	// (0x00052cd3) input_focus_pane_cp1_copy1

0xeff8,	// (0x00052cdc) list_set_text_pane_copy1

0xf000,	// (0x00052ce4) setting_text_pane_g1_copy1

0x633a,	// (0x0004a01e) set_text_pane_t1_copy1

0xefef,	// (0x00052cd3) input_focus_pane_cp2_copy1

0xf000,	// (0x00052ce4) setting_code_pane_g1_copy1

0xf009,	// (0x00052ced) setting_code_pane_t1_copy1

0xf017,	// (0x00052cfb) list_set_graphic_pane_copy1

0x09c3,	// (0x000446a7) bg_set_opt_pane_cp4_copy1

0x1402,	// (0x000450e6) list_set_graphic_pane_g1_copy1_ParamLimits

0x1402,	// (0x000450e6) list_set_graphic_pane_g1_copy1

0xf02b,	// (0x00052d0f) list_set_graphic_pane_g2_copy1

0x141a,	// (0x000450fe) list_set_graphic_pane_t1_copy1_ParamLimits

0x141a,	// (0x000450fe) list_set_graphic_pane_t1_copy1

0xc046,	// (0x0004fd2a) rs_clock_indi_pane_g1

0xf033,	// (0x00052d17) rs_clock_indi_pane_t1

0xf041,	// (0x00052d25) rs_indi_pane

0xf049,	// (0x00052d2d) rs_indi_pane_g1

0xf052,	// (0x00052d36) rs_indi_pane_g2

0xed69,	// (0x00052a4d) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x00053ba0) rs_indi_pane_g

0x1670,	// (0x00045354) bg_popup_preview_window_pane_cp03

0xf05b,	// (0x00052d3f) popup_fep_tooltip_window_t1

0xccc7,	// (0x000509ab) popup_note2_window_g2_ParamLimits

0xccc7,	// (0x000509ab) popup_note2_window_g2

0x0001,

0xfc50,	// (0x00053934) popup_note2_window_g_ParamLimits

0xfc50,	// (0x00053934) popup_note2_window_g

0xd1b4,	// (0x00050e98) bg_popup_sub_pane_cp11_ParamLimits

0xd1c1,	// (0x00050ea5) cell_ai3_links_pane_g1_ParamLimits

0xd1d8,	// (0x00050ebc) cell_ai3_links_pane_t1

0x633a,	// (0x0004a01e) set_text_pane_t1_copy1_ParamLimits

0x7553,	// (0x0004b237) cell_graphic_popup_pane_cp2_ParamLimits

0x7553,	// (0x0004b237) cell_graphic_popup_pane_cp2

0xf069,	// (0x00052d4d) cell_graphic_popup_pane_g1_cp2

0x0ca3,	// (0x00044987) cell_graphic_popup_pane_g2_cp2

0xf071,	// (0x00052d55) cell_graphic_popup_pane_g3_cp2

0xf079,	// (0x00052d5d) cell_graphic_popup_pane_t2_cp2

0x0cb4,	// (0x00044998) grid_highlight_pane_cp3_cp2

0x10a4,	// (0x00044d88) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dd5,	// (0x00044ab9) main_tmo_pane_ParamLimits

0xd50c,	// (0x000511f0) popup_tmo_big_image_note_window

0xe6d8,	// (0x000523bc) cell_ai5_widget_list_pane

0xe6e0,	// (0x000523c4) cell_ai5_widget_lrg_icon_pane

0xeca7,	// (0x0005298b) tmo_note_info_pane_t1_ParamLimits

0xecbc,	// (0x000529a0) tmo_note_info_pane_t2_ParamLimits

0xecd1,	// (0x000529b5) tmo_note_info_pane_t3_ParamLimits

0xece6,	// (0x000529ca) tmo_note_info_pane_t4_ParamLimits

0xecf8,	// (0x000529dc) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00053b8e) tmo_note_info_pane_t_ParamLimits

0xee16,	// (0x00052afa) settings_container_pane_ParamLimits

0xefe7,	// (0x00052ccb) indicator_popup_pane_cp5

0xefe7,	// (0x00052ccb) indicator_popup_pane_cp6

0xf017,	// (0x00052cfb) list_set_graphic_pane_copy1_ParamLimits

0x09af,	// (0x00044693) bg_popup_window_pane_cp23

0xf087,	// (0x00052d6b) popup_tmo_big_image_note_window_g1

0xf090,	// (0x00052d74) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x00052d84) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x00052d94) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x00053ba7) popup_tmo_big_image_note_window_t

0xc046,	// (0x0004fd2a) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x00052da4) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x00052db2) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x00052db2) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x00052dc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x00052dc9) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x00052dd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x00052dd6) cell_ai5_widget_list_row_pane_t1

0xf11d,	// (0x00052e01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf11d,	// (0x00052e01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x00053bae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x00053bae) cell_ai5_widget_list_row_pane_t

0x09af,	// (0x00044693) main_fep_vtchi_ss_pane

0xf16d,	// (0x00052e51) popup_fep_char_pre_window

0xf175,	// (0x00052e59) popup_fep_ituss_window

0xf1a1,	// (0x00052e85) popup_fep_vkbss_window

0x0f17,	// (0x00044bfb) grid_vkbss_keypad_pane_ParamLimits

0x0f17,	// (0x00044bfb) grid_vkbss_keypad_pane

0xf1e1,	// (0x00052ec5) ituss_keypad_pane

0x9698,	// (0x0004d37c) aid_vkbss_key_offset_ParamLimits

0x9698,	// (0x0004d37c) aid_vkbss_key_offset

0x96a4,	// (0x0004d388) cell_vkbss_key_pane_ParamLimits

0x96a4,	// (0x0004d388) cell_vkbss_key_pane

0xf1f0,	// (0x00052ed4) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x00052ed4) bg_cell_vkbss_key_g1

0xf1fc,	// (0x00052ee0) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x00052ee0) cell_vkbss_key_3p_pane

0xf232,	// (0x00052f16) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x00052f16) cell_vkbss_key_g1

0xf268,	// (0x00052f4c) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x00052f4c) cell_vkbss_key_t1

0x96d8,	// (0x0004d3bc) cell_ituss_key_pane_ParamLimits

0x96d8,	// (0x0004d3bc) cell_ituss_key_pane

0xf2c4,	// (0x00052fa8) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x00052fa8) bg_cell_ituss_key_g1

0xf2d0,	// (0x00052fb4) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x00052fb4) cell_ituss_key_pane_g1

0x96e9,	// (0x0004d3cd) cell_ituss_key_pane_g2_ParamLimits

0x96e9,	// (0x0004d3cd) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x00053bb5) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x00053bb5) cell_ituss_key_pane_g

0x976d,	// (0x0004d451) cell_ituss_key_t1_ParamLimits

0x976d,	// (0x0004d451) cell_ituss_key_t1

0x97a7,	// (0x0004d48b) cell_ituss_key_t2_ParamLimits

0x97a7,	// (0x0004d48b) cell_ituss_key_t2

0x97d8,	// (0x0004d4bc) cell_ituss_key_t3_ParamLimits

0x97d8,	// (0x0004d4bc) cell_ituss_key_t3

0x97a7,	// (0x0004d48b) cell_ituss_key_t4_ParamLimits

0x97a7,	// (0x0004d48b) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00053bc2) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00053bc2) cell_ituss_key_t

0xf2f6,	// (0x00052fda) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x00052fe2) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x00052fea) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00053bcd) cell_vkbss_key_3p_pane_g

0x1670,	// (0x00045354) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x00052ff2) popup_fep_char_pre_window_t1

0xe661,	// (0x00052345) main_ai5_sk_pane

0xed72,	// (0x00052a56) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed7e,	// (0x00052a62) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6eb,	// (0x000503cf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed93,	// (0x00052a77) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00053b99) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9f,	// (0x00052a83) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dd5,	// (0x00044ab9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x00053000) main_ai5_sk_pane_g1

0x9f57,	// (0x0004dc3b) popup_query_code_window_g1

0xf18b,	// (0x00052e6f) popup_fep_vkb_icf_pane

0xf1b8,	// (0x00052e9c) popup_fep_vtchi_icf_pane

0x0f17,	// (0x00044bfb) bg_icf_pane

0x0f17,	// (0x00044bfb) list_vkb_icf_pane

0xf325,	// (0x00053009) bg_icf_pane_cp01

0xf338,	// (0x0005301c) vtchi_icf_list_pane

0xf3a0,	// (0x00053084) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x00053084) list_vkb_icf_pane_t1

0xf3c2,	// (0x000530a6) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x000530a6) vtchi_icf_list_pane_t1

0xf175,	// (0x00052e59) popup_fep_ituss_window_ParamLimits

0xf1b8,	// (0x00052e9c) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e1,	// (0x00052ec5) ituss_keypad_pane_ParamLimits

0x968c,	// (0x0004d370) ituss_sks_pane

0x0f17,	// (0x00044bfb) bg_icf_pane_ParamLimits

0xf145,	// (0x00052e29) icf_edit_indi_pane_ParamLimits

0xf145,	// (0x00052e29) icf_edit_indi_pane

0x0f17,	// (0x00044bfb) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x00053009) bg_icf_pane_cp01_ParamLimits

0xf160,	// (0x00052e44) icf_edit_indi_pane_cp01_ParamLimits

0xf160,	// (0x00052e44) icf_edit_indi_pane_cp01

0xf340,	// (0x00053024) vtchi_query_pane

0xe4dd,	// (0x000521c1) icf_edit_indi_pane_g1_ParamLimits

0xe4dd,	// (0x000521c1) icf_edit_indi_pane_g1

0xf43a,	// (0x0005311e) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0005311e) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00053bf8) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00053bf8) icf_edit_indi_pane_g

0xf44e,	// (0x00053132) icf_edit_indi_pane_t1

0xf3e3,	// (0x000530c7) bg_input_focus_pane_cp042

0x0d17,	// (0x000449fb) vtchi_button_pane

0xf3ec,	// (0x000530d0) vtchi_query_pane_t1

0xf3fa,	// (0x000530de) vtchi_query_pane_t2

0xf408,	// (0x000530ec) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00053be7) vtchi_query_pane_t

0x09af,	// (0x00044693) bg_button_pane_cp13

0xf416,	// (0x000530fa) vtchi_button_pane_g1

0x981b,	// (0x0004d4ff) ituss_sks_pane_g1

0x9826,	// (0x0004d50a) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00053bee) ituss_sks_pane_g

0xf41e,	// (0x00053102) ituss_sks_pane_t1

0xf42c,	// (0x00053110) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00053bf3) ituss_sks_pane_t

0xbaba,	// (0x0004f79e) indicator_nsta_pane_cp_g1

0xbac3,	// (0x0004f7a7) indicator_nsta_pane_cp_g2

0xbacb,	// (0x0004f7af) indicator_nsta_pane_cp_g3

0xbad3,	// (0x0004f7b7) indicator_nsta_pane_cp_g4

0xbac3,	// (0x0004f7a7) indicator_nsta_pane_cp_g5

0xbacb,	// (0x0004f7af) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005377e) indicator_nsta_pane_cp_g

0xe20c,	// (0x00051ef0) cell_graphic2_pane_t2_ParamLimits

0xe20c,	// (0x00051ef0) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x00053a84) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x00053a84) cell_graphic2_pane_t

0xe238,	// (0x00051f1c) cell_graphic2_control_pane_t1

0x728e,	// (0x0004af72) signal_pane_g3_ParamLimits

0x728e,	// (0x0004af72) signal_pane_g3

0x72a0,	// (0x0004af84) signal_pane_g4_ParamLimits

0x72a0,	// (0x0004af84) signal_pane_g4

0xf12f,	// (0x00052e13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12f,	// (0x00052e13) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x00052fc8) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x00052fc8) cell_ituss_key_pane_t1

0x9b8a,	// (0x0004d86e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b8a,	// (0x0004d86e) form_field_data_wide_pane_vc_t2

0x9b9e,	// (0x0004d882) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b9e,	// (0x0004d882) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000534c3) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000534c3) form_field_data_wide_pane_vc_t

0xb764,	// (0x0004f448) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb764,	// (0x0004f448) form_field_slider_wide_pane_vc_t3

0xb842,	// (0x0004f526) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x0004f526) form_field_popup_wide_pane_vc_t2

0xb859,	// (0x0004f53d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb859,	// (0x0004f53d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005376d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005376d) form_field_popup_wide_pane_vc_t

0x946a,	// (0x0004d14e) aid_fshwr2_btn_pane_ParamLimits

0x947c,	// (0x0004d160) aid_fshwr2_syb_pane_ParamLimits

0x948e,	// (0x0004d172) aid_fshwr2_txt_pane_ParamLimits

0x0dd5,	// (0x00044ab9) fshwr2_bg_pane_ParamLimits

0x949a,	// (0x0004d17e) fshwr2_func_candi_pane_ParamLimits

0x94b6,	// (0x0004d19a) fshwr2_hwr_syb_pane_ParamLimits

0x94d0,	// (0x0004d1b4) fshwr2_icf_pane_ParamLimits

0x877b,	// (0x0004c45f) list_double_graphic_pane_vc_g4_ParamLimits

0x877b,	// (0x0004c45f) list_double_graphic_pane_vc_g4

0x9709,	// (0x0004d3ed) cell_ituss_key_pane_g3_ParamLimits

0x9709,	// (0x0004d3ed) cell_ituss_key_pane_g3

0x9809,	// (0x0004d4ed) cell_ituss_key_t5_ParamLimits

0x9809,	// (0x0004d4ed) cell_ituss_key_t5

0xf1a1,	// (0x00052e85) popup_fep_vkbss_window_ParamLimits

0xe66b,	// (0x0005234f) aid_cell_ai5_quarter

0xf44e,	// (0x00053132) icf_edit_indi_pane_t1_ParamLimits

0x69c5,	// (0x0004a6a9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x69c5,	// (0x0004a6a9) aid_tch_indicator_popup_pane_cp2

0x69d8,	// (0x0004a6bc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x69d8,	// (0x0004a6bc) aid_tch_query_popup_data_pane_cp2

0x9eff,	// (0x0004dbe3) aid_tch_query_popup_pane_ParamLimits

0x9eff,	// (0x0004dbe3) aid_tch_query_popup_pane

0x9eff,	// (0x0004dbe3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9eff,	// (0x0004dbe3) aid_tch_query_popup_data_pane_cp1

0x0f17,	// (0x00044bfb) cell_fshwr2_syb_bg_pane_ParamLimits

0x95b8,	// (0x0004d29c) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x95cc,	// (0x0004d2b0) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18b,	// (0x00052e6f) popup_fep_vkb_icf_pane_ParamLimits

0x92d8,	// (0x0004cfbc) bg_popup_fep_char_preview_window_g10

0xe7a0,	// (0x00052484) cell_ai5_widget_pane_g11_ParamLimits

0xe7a0,	// (0x00052484) cell_ai5_widget_pane_g11

0xe7ac,	// (0x00052490) cell_ai5_widget_pane_g12_ParamLimits

0xe7ac,	// (0x00052490) cell_ai5_widget_pane_g12

0xe7b8,	// (0x0005249c) cell_ai5_widget_pane_g13_ParamLimits

0xe7b8,	// (0x0005249c) cell_ai5_widget_pane_g13

0xe8e7,	// (0x000525cb) cell_ai5_widget_pane_t11_ParamLimits

0xe8e7,	// (0x000525cb) cell_ai5_widget_pane_t11

0xe8f9,	// (0x000525dd) cell_ai5_widget_pane_t12_ParamLimits

0xe8f9,	// (0x000525dd) cell_ai5_widget_pane_t12

0x9715,	// (0x0004d3f9) cell_ituss_key_pane_g4_ParamLimits

0x9715,	// (0x0004d3f9) cell_ituss_key_pane_g4

0x9731,	// (0x0004d415) cell_ituss_key_pane_g5_ParamLimits

0x9731,	// (0x0004d415) cell_ituss_key_pane_g5

0x974d,	// (0x0004d431) cell_ituss_key_pane_g6_ParamLimits

0x974d,	// (0x0004d431) cell_ituss_key_pane_g6

0x9a70,	// (0x0004d754) bg_icf_pane_g1

0xf348,	// (0x0005302c) bg_icf_pane_g2

0xf354,	// (0x00053038) bg_icf_pane_g3

0xf35e,	// (0x00053042) bg_icf_pane_g4

0xf36a,	// (0x0005304e) bg_icf_pane_g5

0xf374,	// (0x00053058) bg_icf_pane_g6

0xf380,	// (0x00053064) bg_icf_pane_g7

0xf38a,	// (0x0005306e) bg_icf_pane_g8

0xf396,	// (0x0005307a) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x00053bd4) bg_icf_pane_g

0xf1ce,	// (0x00052eb2) popup_hyb_candi_window_ParamLimits

0xf1ce,	// (0x00052eb2) popup_hyb_candi_window

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp01_ParamLimits

0x9afc,	// (0x0004d7e0) bg_popup_sub_pane_cp01

0xf467,	// (0x0005314b) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0005314b) entry_hyb_candi_pane

0xf476,	// (0x0005315a) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0005315a) grid_hyb_candi_pane

0xf48b,	// (0x0005316f) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0005316f) grid_hyb_phrase_pane

0xf49a,	// (0x0005317e) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0005317e) cell_hyb_candi_pane

0xf4bd,	// (0x000531a1) cell_hyb_candi_scroll_pane

0x1227,	// (0x00044f0b) cell_hyb_candi_pane_g1

0xf4c6,	// (0x000531aa) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000531b8) cell_hyb_phrase_pane

0x1227,	// (0x00044f0b) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000531c1) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000531cf) entry_hyb_candi_pane_t1

0x1670,	// (0x00045354) input_focus_pane_cp06

0xf4f9,	// (0x000531dd) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000531e5) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000531ed) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000531f5) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000531fd) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00053205) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

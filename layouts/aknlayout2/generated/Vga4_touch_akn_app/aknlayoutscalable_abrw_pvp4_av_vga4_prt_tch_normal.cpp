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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000ce16 };

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
0x6da7,	// (0x00013bbd) Screen

0x6db3,	// (0x00013bc9) application_window_ParamLimits

0x6db3,	// (0x00013bc9) application_window

0x33da,	// (0x000101f0) screen_g1

0x500a,	// (0x00011e20) area_bottom_pane_ParamLimits

0x500a,	// (0x00011e20) area_bottom_pane

0x50ca,	// (0x00011ee0) area_top_pane_ParamLimits

0x50ca,	// (0x00011ee0) area_top_pane

0x5168,	// (0x00011f7e) main_pane_ParamLimits

0x5168,	// (0x00011f7e) main_pane

0x3553,	// (0x00010369) misc_graphics

0x886e,	// (0x00015684) battery_pane_ParamLimits

0x886e,	// (0x00015684) battery_pane

0x963b,	// (0x00016451) bg_status_flat_pane_g8

0x9643,	// (0x00016459) bg_status_flat_pane_g9

0x8936,	// (0x0001574c) context_pane_ParamLimits

0x8936,	// (0x0001574c) context_pane

0x8a5a,	// (0x00015870) navi_pane_ParamLimits

0x8a5a,	// (0x00015870) navi_pane

0x8aea,	// (0x00015900) signal_pane_ParamLimits

0x8aea,	// (0x00015900) signal_pane

0x0008,

0xf87a,	// (0x0001c690) bg_status_flat_pane_g

0x8b57,	// (0x0001596d) status_pane_g1_ParamLimits

0x8b57,	// (0x0001596d) status_pane_g1

0x8b6b,	// (0x00015981) status_pane_g2_ParamLimits

0x8b6b,	// (0x00015981) status_pane_g2

0x8b77,	// (0x0001598d) status_pane_g3_ParamLimits

0x8b77,	// (0x0001598d) status_pane_g3

0x0004,

0xf7a1,	// (0x0001c5b7) status_pane_g_ParamLimits

0xf7a1,	// (0x0001c5b7) status_pane_g

0x8bab,	// (0x000159c1) title_pane_ParamLimits

0x8bab,	// (0x000159c1) title_pane

0x8be8,	// (0x000159fe) uni_indicator_pane_ParamLimits

0x8be8,	// (0x000159fe) uni_indicator_pane

0x8157,	// (0x00014f6d) bg_list_pane_ParamLimits

0x8157,	// (0x00014f6d) bg_list_pane

0x8177,	// (0x00014f8d) find_pane

0x817f,	// (0x00014f95) listscroll_app_pane_ParamLimits

0x817f,	// (0x00014f95) listscroll_app_pane

0x818b,	// (0x00014fa1) listscroll_form_pane

0x8193,	// (0x00014fa9) listscroll_gen_pane_ParamLimits

0x8193,	// (0x00014fa9) listscroll_gen_pane

0x818b,	// (0x00014fa1) listscroll_set_pane

0x76eb,	// (0x00014501) main_idle_act_pane

0x7e37,	// (0x00014c4d) main_idle_trad_pane

0x7e37,	// (0x00014c4d) main_list_empty_pane

0x81b9,	// (0x00014fcf) main_midp_pane

0x81c5,	// (0x00014fdb) main_pane_g1_ParamLimits

0x81c5,	// (0x00014fdb) main_pane_g1

0x81d3,	// (0x00014fe9) popup_ai_message_window_ParamLimits

0x81d3,	// (0x00014fe9) popup_ai_message_window

0x828f,	// (0x000150a5) popup_fep_china_uni_window_ParamLimits

0x828f,	// (0x000150a5) popup_fep_china_uni_window

0x82ef,	// (0x00015105) popup_fep_japan_candidate_window_ParamLimits

0x82ef,	// (0x00015105) popup_fep_japan_candidate_window

0x8319,	// (0x0001512f) popup_fep_japan_predictive_window_ParamLimits

0x8319,	// (0x0001512f) popup_fep_japan_predictive_window

0x834f,	// (0x00015165) popup_find_window

0x835c,	// (0x00015172) popup_grid_graphic_window_ParamLimits

0x835c,	// (0x00015172) popup_grid_graphic_window

0x838a,	// (0x000151a0) popup_large_graphic_colour_window

0x83b0,	// (0x000151c6) popup_menu_window_ParamLimits

0x83b0,	// (0x000151c6) popup_menu_window

0x857a,	// (0x00015390) popup_note_image_window

0x8564,	// (0x0001537a) popup_note_wait_window_ParamLimits

0x8564,	// (0x0001537a) popup_note_wait_window

0x8564,	// (0x0001537a) popup_note_window_ParamLimits

0x8564,	// (0x0001537a) popup_note_window

0x85e0,	// (0x000153f6) popup_query_code_window_ParamLimits

0x85e0,	// (0x000153f6) popup_query_code_window

0x85f6,	// (0x0001540c) popup_query_data_code_window_ParamLimits

0x85f6,	// (0x0001540c) popup_query_data_code_window

0x8619,	// (0x0001542f) popup_query_data_window_ParamLimits

0x8619,	// (0x0001542f) popup_query_data_window

0x863b,	// (0x00015451) popup_query_sat_info_window_ParamLimits

0x863b,	// (0x00015451) popup_query_sat_info_window

0x867a,	// (0x00015490) popup_snote_single_graphic_window_ParamLimits

0x867a,	// (0x00015490) popup_snote_single_graphic_window

0x867a,	// (0x00015490) popup_snote_single_text_window_ParamLimits

0x867a,	// (0x00015490) popup_snote_single_text_window

0x8691,	// (0x000154a7) popup_sub_window_general

0x87d7,	// (0x000155ed) popup_window_general_ParamLimits

0x87d7,	// (0x000155ed) popup_window_general

0x87f0,	// (0x00015606) power_save_pane

0x58e2,	// (0x000126f8) control_pane_g1_ParamLimits

0x58e2,	// (0x000126f8) control_pane_g1

0x590b,	// (0x00012721) control_pane_g2_ParamLimits

0x590b,	// (0x00012721) control_pane_g2

0x80f8,	// (0x00014f0e) control_pane_g3_ParamLimits

0x80f8,	// (0x00014f0e) control_pane_g3

0x0007,

0xf789,	// (0x0001c59f) control_pane_g_ParamLimits

0xf789,	// (0x0001c59f) control_pane_g

0x5953,	// (0x00012769) control_pane_t1_ParamLimits

0x5953,	// (0x00012769) control_pane_t1

0x599f,	// (0x000127b5) control_pane_t2_ParamLimits

0x599f,	// (0x000127b5) control_pane_t2

0x0002,

0xf79a,	// (0x0001c5b0) control_pane_t_ParamLimits

0xf79a,	// (0x0001c5b0) control_pane_t

0x8019,	// (0x00014e2f) navi_navi_volume_pane_cp1

0x8022,	// (0x00014e38) status_small_icon_pane

0x802a,	// (0x00014e40) status_small_pane_g1_ParamLimits

0x802a,	// (0x00014e40) status_small_pane_g1

0x805e,	// (0x00014e74) status_small_pane_g2_ParamLimits

0x805e,	// (0x00014e74) status_small_pane_g2

0x806a,	// (0x00014e80) status_small_pane_g3_ParamLimits

0x806a,	// (0x00014e80) status_small_pane_g3

0x8076,	// (0x00014e8c) status_small_pane_g4_ParamLimits

0x8076,	// (0x00014e8c) status_small_pane_g4

0x8082,	// (0x00014e98) status_small_pane_g5_ParamLimits

0x8082,	// (0x00014e98) status_small_pane_g5

0x8091,	// (0x00014ea7) status_small_pane_g6_ParamLimits

0x8091,	// (0x00014ea7) status_small_pane_g6

0x0007,

0xf778,	// (0x0001c58e) status_small_pane_g_ParamLimits

0xf778,	// (0x0001c58e) status_small_pane_g

0x80c1,	// (0x00014ed7) status_small_pane_t1

0x80e4,	// (0x00014efa) status_small_wait_pane_ParamLimits

0x80e4,	// (0x00014efa) status_small_wait_pane

0x781c,	// (0x00014632) aid_levels_signal_ParamLimits

0x781c,	// (0x00014632) aid_levels_signal

0x782e,	// (0x00014644) signal_pane_g1_ParamLimits

0x782e,	// (0x00014644) signal_pane_g1

0x7843,	// (0x00014659) signal_pane_g2_ParamLimits

0x7843,	// (0x00014659) signal_pane_g2

0x0003,

0xf709,	// (0x0001c51f) signal_pane_g_ParamLimits

0xf709,	// (0x0001c51f) signal_pane_g

0x787e,	// (0x00014694) context_pane_g1

0x6dc3,	// (0x00013bd9) title_pane_g1

0x6de1,	// (0x00013bf7) title_pane_t1

0x3636,	// (0x0001044c) title_pane_t2

0x365c,	// (0x00010472) title_pane_t3

0x0002,

0xf55d,	// (0x0001c373) title_pane_t

0x8c00,	// (0x00015a16) aid_levels_battery_ParamLimits

0x8c00,	// (0x00015a16) aid_levels_battery

0x8c14,	// (0x00015a2a) battery_pane_g1_ParamLimits

0x8c14,	// (0x00015a2a) battery_pane_g1

0x8c2a,	// (0x00015a40) battery_pane_g2_ParamLimits

0x8c2a,	// (0x00015a40) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001c5c2) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001c5c2) battery_pane_g

0x9f85,	// (0x00016d9b) uni_indicator_pane_g1

0x9f9a,	// (0x00016db0) uni_indicator_pane_g2

0x9fb0,	// (0x00016dc6) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001c738) uni_indicator_pane_g

0x7ca5,	// (0x00014abb) navi_icon_pane_ParamLimits

0x7ca5,	// (0x00014abb) navi_icon_pane

0x7bec,	// (0x00014a02) navi_midp_pane

0x7cc1,	// (0x00014ad7) navi_navi_pane

0x7ccb,	// (0x00014ae1) navi_text_pane_ParamLimits

0x7ccb,	// (0x00014ae1) navi_text_pane

0x33da,	// (0x000101f0) status_small_wait_pane_g1

0x3a04,	// (0x0001081a) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001c733) status_small_wait_pane_g

0x9c98,	// (0x00016aae) navi_navi_icon_text_pane

0x9ca0,	// (0x00016ab6) navi_navi_pane_g1_ParamLimits

0x9ca0,	// (0x00016ab6) navi_navi_pane_g1

0x9cb2,	// (0x00016ac8) navi_navi_pane_g2_ParamLimits

0x9cb2,	// (0x00016ac8) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001c701) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001c701) navi_navi_pane_g

0x9cc4,	// (0x00016ada) navi_navi_tabs_pane

0x9ccd,	// (0x00016ae3) navi_navi_text_pane

0x9c98,	// (0x00016aae) navi_navi_volume_pane

0x9c74,	// (0x00016a8a) navi_text_pane_t1

0x9c68,	// (0x00016a7e) navi_icon_pane_g1

0x9bbb,	// (0x000169d1) navi_navi_text_pane_t1

0x5d3c,	// (0x00012b52) navi_navi_volume_pane_g1

0x5d44,	// (0x00012b5a) volume_small_pane

0x9b21,	// (0x00016937) navi_navi_icon_text_pane_g1

0x9b29,	// (0x0001693f) navi_navi_icon_text_pane_t1

0x7cc1,	// (0x00014ad7) navi_tabs_2_long_pane

0x7cc1,	// (0x00014ad7) navi_tabs_2_pane

0x7cc1,	// (0x00014ad7) navi_tabs_3_long_pane

0x7cc1,	// (0x00014ad7) navi_tabs_3_pane

0x7cc1,	// (0x00014ad7) navi_tabs_4_pane

0x5d1c,	// (0x00012b32) tabs_2_active_pane_ParamLimits

0x5d1c,	// (0x00012b32) tabs_2_active_pane

0x5d2c,	// (0x00012b42) tabs_2_passive_pane_ParamLimits

0x5d2c,	// (0x00012b42) tabs_2_passive_pane

0x5cea,	// (0x00012b00) tabs_3_active_pane_ParamLimits

0x5cea,	// (0x00012b00) tabs_3_active_pane

0x5cfa,	// (0x00012b10) tabs_3_passive_pane_ParamLimits

0x5cfa,	// (0x00012b10) tabs_3_passive_pane

0x5d0b,	// (0x00012b21) tabs_3_passive_pane_cp_ParamLimits

0x5d0b,	// (0x00012b21) tabs_3_passive_pane_cp

0x5c9e,	// (0x00012ab4) tabs_4_active_pane_ParamLimits

0x5c9e,	// (0x00012ab4) tabs_4_active_pane

0x5cb1,	// (0x00012ac7) tabs_4_passive_pane_ParamLimits

0x5cb1,	// (0x00012ac7) tabs_4_passive_pane

0x5cc2,	// (0x00012ad8) tabs_4_passive_pane_cp_ParamLimits

0x5cc2,	// (0x00012ad8) tabs_4_passive_pane_cp

0x5cd3,	// (0x00012ae9) tabs_4_passive_pane_cp2_ParamLimits

0x5cd3,	// (0x00012ae9) tabs_4_passive_pane_cp2

0x5c7a,	// (0x00012a90) tabs_2_long_active_pane_ParamLimits

0x5c7a,	// (0x00012a90) tabs_2_long_active_pane

0x5c8c,	// (0x00012aa2) tabs_2_long_passive_pane_ParamLimits

0x5c8c,	// (0x00012aa2) tabs_2_long_passive_pane

0x5c3b,	// (0x00012a51) tabs_3_long_active_pane_ParamLimits

0x5c3b,	// (0x00012a51) tabs_3_long_active_pane

0x5c4e,	// (0x00012a64) tabs_3_long_passive_pane_ParamLimits

0x5c4e,	// (0x00012a64) tabs_3_long_passive_pane

0x5c67,	// (0x00012a7d) tabs_3_long_passive_pane_cp_ParamLimits

0x5c67,	// (0x00012a7d) tabs_3_long_passive_pane_cp

0x5be1,	// (0x000129f7) volume_small_pane_g1

0x5bea,	// (0x00012a00) volume_small_pane_g2

0x5bf3,	// (0x00012a09) volume_small_pane_g3

0x5bfc,	// (0x00012a12) volume_small_pane_g4

0x5c05,	// (0x00012a1b) volume_small_pane_g5

0x5c0e,	// (0x00012a24) volume_small_pane_g6

0x5c17,	// (0x00012a2d) volume_small_pane_g7

0x5c20,	// (0x00012a36) volume_small_pane_g8

0x5c29,	// (0x00012a3f) volume_small_pane_g9

0x5c32,	// (0x00012a48) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001c6cd) volume_small_pane_g

0x3686,	// (0x0001049c) bg_active_tab_pane_cp2_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp2

0x6e49,	// (0x00013c5f) tabs_3_active_pane_g1

0x6e51,	// (0x00013c67) tabs_3_active_pane_t1

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp2_ParamLimits

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp2

0x6e49,	// (0x00013c5f) tabs_3_passive_pane_g1

0x6e51,	// (0x00013c67) tabs_3_passive_pane_t1

0x3686,	// (0x0001049c) bg_active_tab_pane_cp3_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp3

0x6e63,	// (0x00013c79) tabs_4_active_pane_g1

0x6e6b,	// (0x00013c81) tabs_4_active_pane_t1

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp3_ParamLimits

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp3

0x6e63,	// (0x00013c79) tabs_4_1_passive_pane_g1

0x6e6b,	// (0x00013c81) tabs_4_1_passive_pane_t1

0x81b9,	// (0x00014fcf) list_highlight_pane_cp2

0xa23c,	// (0x00017052) list_set_pane_ParamLimits

0xa23c,	// (0x00017052) list_set_pane

0xa304,	// (0x0001711a) main_pane_set_t1_ParamLimits

0xa304,	// (0x0001711a) main_pane_set_t1

0xa324,	// (0x0001713a) main_pane_set_t2_ParamLimits

0xa324,	// (0x0001713a) main_pane_set_t2

0xa338,	// (0x0001714e) main_pane_set_t3_ParamLimits

0xa338,	// (0x0001714e) main_pane_set_t3

0xa34c,	// (0x00017162) main_pane_set_t4_ParamLimits

0xa34c,	// (0x00017162) main_pane_set_t4

0x0003,

0xf987,	// (0x0001c79d) main_pane_set_t_ParamLimits

0xf987,	// (0x0001c79d) main_pane_set_t

0xa360,	// (0x00017176) setting_code_pane

0xa36a,	// (0x00017180) setting_slider_graphic_pane

0xa36a,	// (0x00017180) setting_slider_pane

0xa36a,	// (0x00017180) setting_text_pane

0xa36a,	// (0x00017180) setting_volume_pane

0x53bf,	// (0x000121d5) volume_set_pane

0x3686,	// (0x0001049c) bg_set_opt_pane_cp

0x53c9,	// (0x000121df) setting_slider_pane_t1

0x53e2,	// (0x000121f8) setting_slider_pane_t2

0x53fc,	// (0x00012212) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001c37a) setting_slider_pane_t

0x5414,	// (0x0001222a) slider_set_pane

0x3553,	// (0x00010369) bg_set_opt_pane_cp2

0x36f5,	// (0x0001050b) setting_slider_graphic_pane_g1

0x542a,	// (0x00012240) setting_slider_graphic_pane_t1

0x543a,	// (0x00012250) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001c381) setting_slider_graphic_pane_t

0x544a,	// (0x00012260) slider_set_pane_cp

0x3553,	// (0x00010369) input_focus_pane_cp1

0xa1fd,	// (0x00017013) list_set_text_pane

0x33da,	// (0x000101f0) setting_text_pane_g1

0x3553,	// (0x00010369) input_focus_pane_cp2

0x33da,	// (0x000101f0) setting_code_pane_g1

0x3726,	// (0x0001053c) setting_code_pane_t1

0x3734,	// (0x0001054a) set_text_pane_t1_ParamLimits

0x3734,	// (0x0001054a) set_text_pane_t1

0x3eb1,	// (0x00010cc7) set_opt_bg_pane_g1

0x3eb9,	// (0x00010ccf) set_opt_bg_pane_g2

0xa1d5,	// (0x00016feb) set_opt_bg_pane_g3

0x3ec9,	// (0x00010cdf) set_opt_bg_pane_g4

0x3ed1,	// (0x00010ce7) set_opt_bg_pane_g5

0x3ed9,	// (0x00010cef) set_opt_bg_pane_g6

0xa1df,	// (0x00016ff5) set_opt_bg_pane_g7

0xa1e9,	// (0x00016fff) set_opt_bg_pane_g8

0xa1f3,	// (0x00017009) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001c78a) set_opt_bg_pane_g

0xa1c8,	// (0x00016fde) slider_set_pane_g1

0x5dc5,	// (0x00012bdb) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001c77b) slider_set_pane_g

0x5d4d,	// (0x00012b63) volume_set_pane_g1

0x5d57,	// (0x00012b6d) volume_set_pane_g2

0x5d61,	// (0x00012b77) volume_set_pane_g3

0x5d6b,	// (0x00012b81) volume_set_pane_g4

0x5d75,	// (0x00012b8b) volume_set_pane_g5

0x5d7f,	// (0x00012b95) volume_set_pane_g6

0x5d89,	// (0x00012b9f) volume_set_pane_g7

0x5d93,	// (0x00012ba9) volume_set_pane_g8

0x5d9d,	// (0x00012bb3) volume_set_pane_g9

0x5da7,	// (0x00012bbd) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001c753) volume_set_pane_g

0x6e7d,	// (0x00013c93) indicator_pane_ParamLimits

0x6e7d,	// (0x00013c93) indicator_pane

0x6e89,	// (0x00013c9f) main_idle_pane_g2_ParamLimits

0x6e89,	// (0x00013c9f) main_idle_pane_g2

0x6eb1,	// (0x00013cc7) main_pane_idle_g1_ParamLimits

0x6eb1,	// (0x00013cc7) main_pane_idle_g1

0x374e,	// (0x00010564) popup_clock_digital_analogue_window_ParamLimits

0x374e,	// (0x00010564) popup_clock_digital_analogue_window

0x6ebf,	// (0x00013cd5) soft_indicator_pane_ParamLimits

0x6ebf,	// (0x00013cd5) soft_indicator_pane

0x6ecd,	// (0x00013ce3) wallpaper_pane_ParamLimits

0x6ecd,	// (0x00013ce3) wallpaper_pane

0x33da,	// (0x000101f0) wallpaper_pane_g1

0x6ed9,	// (0x00013cef) indicator_pane_g1_ParamLimits

0x6ed9,	// (0x00013cef) indicator_pane_g1

0xa699,	// (0x000174af) navi_navi_icon_text_pane_srt_g1

0x377c,	// (0x00010592) soft_indicator_pane_t1

0x3796,	// (0x000105ac) aid_ps_area_pane

0x6ee5,	// (0x00013cfb) aid_ps_clock_pane

0x37a7,	// (0x000105bd) aid_ps_indicator_pane

0x37b3,	// (0x000105c9) indicator_ps_pane_ParamLimits

0x37b3,	// (0x000105c9) indicator_ps_pane

0x37c2,	// (0x000105d8) power_save_pane_g1_ParamLimits

0x37c2,	// (0x000105d8) power_save_pane_g1

0x37ce,	// (0x000105e4) power_save_pane_g2_ParamLimits

0x37ce,	// (0x000105e4) power_save_pane_g2

0x4fbe,	// (0x00011dd4) aid_navinavi_width_pane

0x3796,	// (0x000105ac) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001c386) power_save_pane_g_ParamLimits

0xf570,	// (0x0001c386) power_save_pane_g

0x37dc,	// (0x000105f2) power_save_pane_t1_ParamLimits

0x37dc,	// (0x000105f2) power_save_pane_t1

0x6ee5,	// (0x00013cfb) aid_ps_clock_pane_ParamLimits

0x37a7,	// (0x000105bd) aid_ps_indicator_pane_ParamLimits

0x37ee,	// (0x00010604) power_save_pane_t4_ParamLimits

0x37ee,	// (0x00010604) power_save_pane_t4

0x0001,

0xf575,	// (0x0001c38b) power_save_pane_t_ParamLimits

0xf575,	// (0x0001c38b) power_save_pane_t

0x3818,	// (0x0001062e) power_save_t3_ParamLimits

0x3818,	// (0x0001062e) power_save_t3

0x3803,	// (0x00010619) power_save_t2_ParamLimits

0x3803,	// (0x00010619) power_save_t2

0x382d,	// (0x00010643) indicator_ps_pane_g1

0x6ef3,	// (0x00013d09) ai_gene_pane_ParamLimits

0x6ef3,	// (0x00013d09) ai_gene_pane

0x6eff,	// (0x00013d15) ai_links_pane_ParamLimits

0x6eff,	// (0x00013d15) ai_links_pane

0x6f0b,	// (0x00013d21) indicator_pane_cp1_ParamLimits

0x6f0b,	// (0x00013d21) indicator_pane_cp1

0x6f17,	// (0x00013d2d) main_pane_idle_g1_cp_ParamLimits

0x6f17,	// (0x00013d2d) main_pane_idle_g1_cp

0x3836,	// (0x0001064c) popup_ai_links_title_window

0x6f23,	// (0x00013d39) soft_indicator_pane_cp1_ParamLimits

0x6f23,	// (0x00013d39) soft_indicator_pane_cp1

0x9f73,	// (0x00016d89) ai_links_pane_g1

0x9f7c,	// (0x00016d92) grid_ai_links_pane

0x9f58,	// (0x00016d6e) ai_gene_pane_1

0x9f61,	// (0x00016d77) ai_gene_pane_2

0x9f6a,	// (0x00016d80) list_highlight_pane_cp4

0x9f38,	// (0x00016d4e) cell_ai_link_pane_ParamLimits

0x9f38,	// (0x00016d4e) cell_ai_link_pane

0x9f30,	// (0x00016d46) cell_ai_link_pane_g1

0x3a04,	// (0x0001081a) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001c72e) cell_ai_link_pane_g

0x3553,	// (0x00010369) grid_highlight_cp2

0x3553,	// (0x00010369) bg_popup_sub_pane_cp1

0x384d,	// (0x00010663) popup_ai_links_title_window_t1

0x9e7c,	// (0x00016c92) ai_gene_pane_1_g1_ParamLimits

0x9e7c,	// (0x00016c92) ai_gene_pane_1_g1

0x9e88,	// (0x00016c9e) ai_gene_pane_1_g2_ParamLimits

0x9e88,	// (0x00016c9e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001c724) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001c724) ai_gene_pane_1_g

0x9e95,	// (0x00016cab) ai_gene_pane_1_t1_ParamLimits

0x9e95,	// (0x00016cab) ai_gene_pane_1_t1

0x9ec9,	// (0x00016cdf) grid_ai_soft_ind_pane

0x9e67,	// (0x00016c7d) ai_gene_pane_2_t1_ParamLimits

0x9e67,	// (0x00016c7d) ai_gene_pane_2_t1

0x6f2f,	// (0x00013d45) main_pane_empty_t1_ParamLimits

0x6f2f,	// (0x00013d45) main_pane_empty_t1

0x6f47,	// (0x00013d5d) main_pane_empty_t2_ParamLimits

0x6f47,	// (0x00013d5d) main_pane_empty_t2

0x6f5c,	// (0x00013d72) main_pane_empty_t3_ParamLimits

0x6f5c,	// (0x00013d72) main_pane_empty_t3

0x6f6e,	// (0x00013d84) main_pane_empty_t4_ParamLimits

0x6f6e,	// (0x00013d84) main_pane_empty_t4

0x6f80,	// (0x00013d96) main_pane_empty_t5_ParamLimits

0x6f80,	// (0x00013d96) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001c390) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001c390) main_pane_empty_t

0x3f31,	// (0x00010d47) bg_popup_window_pane_ParamLimits

0x3f31,	// (0x00010d47) bg_popup_window_pane

0x9bc9,	// (0x000169df) find_popup_pane_cp2_ParamLimits

0x9bc9,	// (0x000169df) find_popup_pane_cp2

0x9bd5,	// (0x000169eb) heading_pane_ParamLimits

0x9bd5,	// (0x000169eb) heading_pane

0x3553,	// (0x00010369) bg_popup_sub_pane

0x9b43,	// (0x00016959) bg_popup_window_pane_g1_ParamLimits

0x9b43,	// (0x00016959) bg_popup_window_pane_g1

0x9b4f,	// (0x00016965) bg_popup_window_pane_g2_ParamLimits

0x9b4f,	// (0x00016965) bg_popup_window_pane_g2

0x9b5b,	// (0x00016971) bg_popup_window_pane_g3_ParamLimits

0x9b5b,	// (0x00016971) bg_popup_window_pane_g3

0x9b67,	// (0x0001697d) bg_popup_window_pane_g4_ParamLimits

0x9b67,	// (0x0001697d) bg_popup_window_pane_g4

0x9b73,	// (0x00016989) bg_popup_window_pane_g5_ParamLimits

0x9b73,	// (0x00016989) bg_popup_window_pane_g5

0x9b7f,	// (0x00016995) bg_popup_window_pane_g6_ParamLimits

0x9b7f,	// (0x00016995) bg_popup_window_pane_g6

0x9b8b,	// (0x000169a1) bg_popup_window_pane_g7_ParamLimits

0x9b8b,	// (0x000169a1) bg_popup_window_pane_g7

0x9b97,	// (0x000169ad) bg_popup_window_pane_g8_ParamLimits

0x9b97,	// (0x000169ad) bg_popup_window_pane_g8

0x9ba3,	// (0x000169b9) bg_popup_window_pane_g9_ParamLimits

0x9ba3,	// (0x000169b9) bg_popup_window_pane_g9

0x9baf,	// (0x000169c5) bg_popup_window_pane_g10_ParamLimits

0x9baf,	// (0x000169c5) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001c6ec) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001c6ec) bg_popup_window_pane_g

0x9ad8,	// (0x000168ee) bg_popup_heading_pane_ParamLimits

0x9ad8,	// (0x000168ee) bg_popup_heading_pane

0x5e4d,	// (0x00012c63) tabs_4_passive_pane_cp_srt_ParamLimits

0x5e4d,	// (0x00012c63) tabs_4_passive_pane_cp_srt

0x5e5f,	// (0x00012c75) tabs_4_passive_pane_srt_ParamLimits

0x9aec,	// (0x00016902) heading_pane_g2

0x5e5f,	// (0x00012c75) tabs_4_passive_pane_srt

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp3_srt

0x9af4,	// (0x0001690a) heading_pane_t1_ParamLimits

0x9af4,	// (0x0001690a) heading_pane_t1

0x9b0b,	// (0x00016921) heading_pane_t2_ParamLimits

0x9b0b,	// (0x00016921) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001c6e7) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001c6e7) heading_pane_t

0x9603,	// (0x00016419) bg_popup_heading_pane_g1

0x96b2,	// (0x000164c8) bg_popup_heading_pane_g2

0x96bc,	// (0x000164d2) bg_popup_heading_pane_g3

0x96c6,	// (0x000164dc) bg_popup_heading_pane_g4

0x96d0,	// (0x000164e6) bg_popup_heading_pane_g5

0x96da,	// (0x000164f0) bg_popup_heading_pane_g6

0x96e2,	// (0x000164f8) bg_popup_heading_pane_g7

0x96ea,	// (0x00016500) bg_popup_heading_pane_g8

0x96f4,	// (0x0001650a) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001c6a3) bg_popup_heading_pane_g

0x8d30,	// (0x00015b46) bg_popup_sub_pane_g1

0x8d40,	// (0x00015b56) bg_popup_sub_pane_g2

0x8d38,	// (0x00015b4e) bg_popup_sub_pane_g3

0x8d50,	// (0x00015b66) bg_popup_sub_pane_g4

0x8d48,	// (0x00015b5e) bg_popup_sub_pane_g5

0x8d58,	// (0x00015b6e) bg_popup_sub_pane_g6

0x8d60,	// (0x00015b76) bg_popup_sub_pane_g7

0x8d70,	// (0x00015b86) bg_popup_sub_pane_g8

0x8d68,	// (0x00015b7e) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001c67d) bg_popup_sub_pane_g

0x366e,	// (0x00010484) bg_popup_window_pane_cp5_ParamLimits

0x366e,	// (0x00010484) bg_popup_window_pane_cp5

0x386a,	// (0x00010680) popup_note_window_g1_ParamLimits

0x386a,	// (0x00010680) popup_note_window_g1

0x3876,	// (0x0001068c) popup_note_window_t1_ParamLimits

0x3876,	// (0x0001068c) popup_note_window_t1

0x388c,	// (0x000106a2) popup_note_window_t2_ParamLimits

0x388c,	// (0x000106a2) popup_note_window_t2

0x38a2,	// (0x000106b8) popup_note_window_t3_ParamLimits

0x38a2,	// (0x000106b8) popup_note_window_t3

0x38b8,	// (0x000106ce) popup_note_window_t4_ParamLimits

0x38b8,	// (0x000106ce) popup_note_window_t4

0x38e0,	// (0x000106f6) popup_note_window_t5_ParamLimits

0x38e0,	// (0x000106f6) popup_note_window_t5

0x0004,

0xf585,	// (0x0001c39b) popup_note_window_t_ParamLimits

0xf585,	// (0x0001c39b) popup_note_window_t

0x3904,	// (0x0001071a) bg_popup_window_pane_cp6_ParamLimits

0x3904,	// (0x0001071a) bg_popup_window_pane_cp6

0x957f,	// (0x00016395) popup_note_image_window_g1_ParamLimits

0x957f,	// (0x00016395) popup_note_image_window_g1

0x958b,	// (0x000163a1) popup_note_image_window_g2_ParamLimits

0x958b,	// (0x000163a1) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001c671) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001c671) popup_note_image_window_g

0x95a4,	// (0x000163ba) popup_note_image_window_t1_ParamLimits

0x95a4,	// (0x000163ba) popup_note_image_window_t1

0x95bd,	// (0x000163d3) popup_note_image_window_t2_ParamLimits

0x95bd,	// (0x000163d3) popup_note_image_window_t2

0x95d6,	// (0x000163ec) popup_note_image_window_t3_ParamLimits

0x95d6,	// (0x000163ec) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001c676) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001c676) popup_note_image_window_t

0x943f,	// (0x00016255) bg_popup_window_pane_cp7_ParamLimits

0x943f,	// (0x00016255) bg_popup_window_pane_cp7

0x946f,	// (0x00016285) popup_note_wait_window_g1_ParamLimits

0x946f,	// (0x00016285) popup_note_wait_window_g1

0x947b,	// (0x00016291) popup_note_wait_window_g2_ParamLimits

0x947b,	// (0x00016291) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001c65f) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001c65f) popup_note_wait_window_g

0x9493,	// (0x000162a9) popup_note_wait_window_t1_ParamLimits

0x9493,	// (0x000162a9) popup_note_wait_window_t1

0x94ba,	// (0x000162d0) popup_note_wait_window_t2_ParamLimits

0x94ba,	// (0x000162d0) popup_note_wait_window_t2

0x94d8,	// (0x000162ee) popup_note_wait_window_t3_ParamLimits

0x94d8,	// (0x000162ee) popup_note_wait_window_t3

0x94eb,	// (0x00016301) popup_note_wait_window_t4_ParamLimits

0x94eb,	// (0x00016301) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001c666) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001c666) popup_note_wait_window_t

0x9510,	// (0x00016326) wait_bar_pane_ParamLimits

0x9510,	// (0x00016326) wait_bar_pane

0x3553,	// (0x00010369) wait_anim_pane

0x3553,	// (0x00010369) wait_border_pane

0x33da,	// (0x000101f0) wait_anim_pane_g1

0x33da,	// (0x000101f0) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001c51a) wait_anim_pane_g

0x93e3,	// (0x000161f9) wait_border_pane_g1

0x93ee,	// (0x00016204) wait_border_pane_g2

0x93f7,	// (0x0001620d) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001c658) wait_border_pane_g

0x924d,	// (0x00016063) bg_popup_window_pane_cp16_ParamLimits

0x924d,	// (0x00016063) bg_popup_window_pane_cp16

0x934d,	// (0x00016163) indicator_popup_pane_cp4_ParamLimits

0x934d,	// (0x00016163) indicator_popup_pane_cp4

0x9361,	// (0x00016177) popup_query_data_window_t1_ParamLimits

0x9361,	// (0x00016177) popup_query_data_window_t1

0x9373,	// (0x00016189) popup_query_data_window_t2_ParamLimits

0x9373,	// (0x00016189) popup_query_data_window_t2

0x938c,	// (0x000161a2) popup_query_data_window_t3_ParamLimits

0x938c,	// (0x000161a2) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001c651) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001c651) popup_query_data_window_t

0x93a6,	// (0x000161bc) query_popup_data_pane_ParamLimits

0x93a6,	// (0x000161bc) query_popup_data_pane

0x93ba,	// (0x000161d0) query_popup_data_pane_cp1_ParamLimits

0x93ba,	// (0x000161d0) query_popup_data_pane_cp1

0x924d,	// (0x00016063) bg_popup_window_pane_cp10_ParamLimits

0x924d,	// (0x00016063) bg_popup_window_pane_cp10

0x927f,	// (0x00016095) indicator_popup_pane_ParamLimits

0x927f,	// (0x00016095) indicator_popup_pane

0x92a1,	// (0x000160b7) popup_query_code_window_t1_ParamLimits

0x92a1,	// (0x000160b7) popup_query_code_window_t1

0x92bb,	// (0x000160d1) popup_query_code_window_t2_ParamLimits

0x92bb,	// (0x000160d1) popup_query_code_window_t2

0x9304,	// (0x0001611a) popup_query_code_window_t3_ParamLimits

0x9304,	// (0x0001611a) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001c64a) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001c64a) popup_query_code_window_t

0x9333,	// (0x00016149) query_popup_pane_ParamLimits

0x9333,	// (0x00016149) query_popup_pane

0x3904,	// (0x0001071a) bg_popup_window_pane_cp15_ParamLimits

0x3904,	// (0x0001071a) bg_popup_window_pane_cp15

0x3924,	// (0x0001073a) indicator_popup_pane_cp1_ParamLimits

0x3924,	// (0x0001073a) indicator_popup_pane_cp1

0x3937,	// (0x0001074d) indicator_popup_pane_cp2_ParamLimits

0x3937,	// (0x0001074d) indicator_popup_pane_cp2

0x3952,	// (0x00010768) popup_query_data_code_window_g1_ParamLimits

0x3952,	// (0x00010768) popup_query_data_code_window_g1

0x3965,	// (0x0001077b) popup_query_data_code_window_t1_ParamLimits

0x3965,	// (0x0001077b) popup_query_data_code_window_t1

0x3977,	// (0x0001078d) popup_query_data_code_window_t2_ParamLimits

0x3977,	// (0x0001078d) popup_query_data_code_window_t2

0x3989,	// (0x0001079f) popup_query_data_code_window_t3_ParamLimits

0x3989,	// (0x0001079f) popup_query_data_code_window_t3

0x399f,	// (0x000107b5) popup_query_data_code_window_t4_ParamLimits

0x399f,	// (0x000107b5) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001c3a6) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001c3a6) popup_query_data_code_window_t

0x5aed,	// (0x00012903) list_single_midp_graphic_pane_g3

0x39b9,	// (0x000107cf) query_popup_data_pane_cp2_ParamLimits

0x39cc,	// (0x000107e2) query_popup_pane_cp2_ParamLimits

0x39cc,	// (0x000107e2) query_popup_pane_cp2

0x3553,	// (0x00010369) bg_popup_window_pane_cp11

0x9245,	// (0x0001605b) heading_pane_cp5

0x3a62,	// (0x00010878) listscroll_popup_info_pane

0x3553,	// (0x00010369) input_focus_pane_cp3

0x39e7,	// (0x000107fd) query_popup_pane_t1

0x39f5,	// (0x0001080b) list_popup_info_pane_ParamLimits

0x39f5,	// (0x0001080b) list_popup_info_pane

0x3a04,	// (0x0001081a) listscroll_popup_info_pane_g1

0x3a0c,	// (0x00010822) scroll_pane_cp7

0x3a16,	// (0x0001082c) popup_info_list_pane_t1_ParamLimits

0x3a16,	// (0x0001082c) popup_info_list_pane_t1

0x3a30,	// (0x00010846) popup_info_list_pane_t2_ParamLimits

0x3a30,	// (0x00010846) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001c3af) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001c3af) popup_info_list_pane_t

0x3553,	// (0x00010369) bg_popup_window_pane_cp12

0xa6b3,	// (0x000174c9) find_popup_pane

0x3686,	// (0x0001049c) bg_popup_window_pane_cp3

0x3a4a,	// (0x00010860) heading_pane_cp3

0x3a56,	// (0x0001086c) listscroll_popup_graphic_pane

0x3553,	// (0x00010369) bg_popup_window_pane_cp4

0x6fe2,	// (0x00013df8) heading_pane_cp4

0x3a62,	// (0x00010878) listscroll_popup_colour_pane

0x6fec,	// (0x00013e02) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6fec,	// (0x00013e02) cell_large_graphic_colour_none_popup_pane

0x7000,	// (0x00013e16) grid_large_graphic_colour_popup_pane_ParamLimits

0x7000,	// (0x00013e16) grid_large_graphic_colour_popup_pane

0x702c,	// (0x00013e42) listscroll_popup_colour_pane_g1_ParamLimits

0x702c,	// (0x00013e42) listscroll_popup_colour_pane_g1

0x7043,	// (0x00013e59) listscroll_popup_colour_pane_g2_ParamLimits

0x7043,	// (0x00013e59) listscroll_popup_colour_pane_g2

0x705a,	// (0x00013e70) listscroll_popup_colour_pane_g3_ParamLimits

0x705a,	// (0x00013e70) listscroll_popup_colour_pane_g3

0x706a,	// (0x00013e80) listscroll_popup_colour_pane_g4_ParamLimits

0x706a,	// (0x00013e80) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001c3b4) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001c3b4) listscroll_popup_colour_pane_g

0x3a6a,	// (0x00010880) scroll_pane_cp6_ParamLimits

0x3a6a,	// (0x00010880) scroll_pane_cp6

0x707e,	// (0x00013e94) cell_large_graphic_colour_popup_pane_ParamLimits

0x707e,	// (0x00013e94) cell_large_graphic_colour_popup_pane

0x3a7c,	// (0x00010892) cell_large_graphic_colour_none_popup_pane_t1

0x3553,	// (0x00010369) grid_highlight_pane_cp5

0x3a8b,	// (0x000108a1) cell_large_graphic_colour_popup_pane_g1

0x3a93,	// (0x000108a9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001c3bd) cell_large_graphic_colour_popup_pane_g

0x3a9b,	// (0x000108b1) cell_large_graphic_colour_popup_pane_g2_copy1

0x3aa4,	// (0x000108ba) grid_highlight_pane_cp4

0x3aac,	// (0x000108c2) bg_popup_window_pane_cp8_ParamLimits

0x3aac,	// (0x000108c2) bg_popup_window_pane_cp8

0x3ac7,	// (0x000108dd) popup_snote_single_text_window_g1_ParamLimits

0x3ac7,	// (0x000108dd) popup_snote_single_text_window_g1

0x3ad9,	// (0x000108ef) popup_snote_single_text_window_t1_ParamLimits

0x3ad9,	// (0x000108ef) popup_snote_single_text_window_t1

0x3aec,	// (0x00010902) popup_snote_single_text_window_t2_ParamLimits

0x3aec,	// (0x00010902) popup_snote_single_text_window_t2

0x3aff,	// (0x00010915) popup_snote_single_text_window_t3_ParamLimits

0x3aff,	// (0x00010915) popup_snote_single_text_window_t3

0x3b38,	// (0x0001094e) popup_snote_single_text_window_t4_ParamLimits

0x3b38,	// (0x0001094e) popup_snote_single_text_window_t4

0x3b6c,	// (0x00010982) popup_snote_single_text_window_t5_ParamLimits

0x3b6c,	// (0x00010982) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001c3c2) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001c3c2) popup_snote_single_text_window_t

0x3b9b,	// (0x000109b1) bg_popup_window_pane_cp9_ParamLimits

0x3b9b,	// (0x000109b1) bg_popup_window_pane_cp9

0x3ac7,	// (0x000108dd) popup_snote_single_graphic_window_g1_ParamLimits

0x3ac7,	// (0x000108dd) popup_snote_single_graphic_window_g1

0x3ba9,	// (0x000109bf) popup_snote_single_graphic_window_g2_ParamLimits

0x3ba9,	// (0x000109bf) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001c3cd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001c3cd) popup_snote_single_graphic_window_g

0x3bb5,	// (0x000109cb) popup_snote_single_graphic_window_t1_ParamLimits

0x3bb5,	// (0x000109cb) popup_snote_single_graphic_window_t1

0x3bc8,	// (0x000109de) popup_snote_single_graphic_window_t2_ParamLimits

0x3bc8,	// (0x000109de) popup_snote_single_graphic_window_t2

0x3bdb,	// (0x000109f1) popup_snote_single_graphic_window_t3_ParamLimits

0x3bdb,	// (0x000109f1) popup_snote_single_graphic_window_t3

0x3c14,	// (0x00010a2a) popup_snote_single_graphic_window_t4_ParamLimits

0x3c14,	// (0x00010a2a) popup_snote_single_graphic_window_t4

0x3c48,	// (0x00010a5e) popup_snote_single_graphic_window_t5_ParamLimits

0x3c48,	// (0x00010a5e) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001c3d2) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001c3d2) popup_snote_single_graphic_window_t

0xa5f1,	// (0x00017407) grid_graphic_popup_pane_ParamLimits

0xa5f1,	// (0x00017407) grid_graphic_popup_pane

0xa61f,	// (0x00017435) listscroll_popup_graphic_pane_g1_ParamLimits

0xa61f,	// (0x00017435) listscroll_popup_graphic_pane_g1

0xa633,	// (0x00017449) listscroll_popup_graphic_pane_g2_ParamLimits

0xa633,	// (0x00017449) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001c7c7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001c7c7) listscroll_popup_graphic_pane_g

0xa647,	// (0x0001745d) scroll_pane_cp5

0xa599,	// (0x000173af) cell_graphic_popup_pane_ParamLimits

0xa599,	// (0x000173af) cell_graphic_popup_pane

0xa57a,	// (0x00017390) cell_graphic_popup_pane_g1

0xa582,	// (0x00017398) cell_graphic_popup_pane_g2

0x3a9b,	// (0x000108b1) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001c7c0) cell_graphic_popup_pane_g

0xa58b,	// (0x000173a1) cell_graphic_popup_pane_t2

0x3aa4,	// (0x000108ba) grid_highlight_pane_cp3

0x3c89,	// (0x00010a9f) list_gen_pane_ParamLimits

0x3c89,	// (0x00010a9f) list_gen_pane

0x3cb1,	// (0x00010ac7) scroll_pane

0xa4d2,	// (0x000172e8) bg_list_pane_g1_ParamLimits

0xa4d2,	// (0x000172e8) bg_list_pane_g1

0xa4ef,	// (0x00017305) bg_list_pane_g2_ParamLimits

0xa4ef,	// (0x00017305) bg_list_pane_g2

0xa504,	// (0x0001731a) bg_list_pane_g3_ParamLimits

0xa504,	// (0x0001731a) bg_list_pane_g3

0xa518,	// (0x0001732e) bg_list_pane_g4_ParamLimits

0xa518,	// (0x0001732e) bg_list_pane_g4

0xa52c,	// (0x00017342) bg_list_pane_g5_ParamLimits

0xa52c,	// (0x00017342) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001c7b5) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001c7b5) bg_list_pane_g

0xa423,	// (0x00017239) list_double2_graphic_large_graphic_pane_ParamLimits

0xa423,	// (0x00017239) list_double2_graphic_large_graphic_pane

0xa423,	// (0x00017239) list_double2_graphic_pane_ParamLimits

0xa423,	// (0x00017239) list_double2_graphic_pane

0xa423,	// (0x00017239) list_double2_large_graphic_pane_ParamLimits

0xa423,	// (0x00017239) list_double2_large_graphic_pane

0xa423,	// (0x00017239) list_double2_pane_ParamLimits

0xa423,	// (0x00017239) list_double2_pane

0xa423,	// (0x00017239) list_double_graphic_heading_pane_ParamLimits

0xa423,	// (0x00017239) list_double_graphic_heading_pane

0xa423,	// (0x00017239) list_double_graphic_pane_ParamLimits

0xa423,	// (0x00017239) list_double_graphic_pane

0xa423,	// (0x00017239) list_double_heading_pane_ParamLimits

0xa423,	// (0x00017239) list_double_heading_pane

0xa423,	// (0x00017239) list_double_large_graphic_pane_ParamLimits

0xa423,	// (0x00017239) list_double_large_graphic_pane

0xa423,	// (0x00017239) list_double_number_pane_ParamLimits

0xa423,	// (0x00017239) list_double_number_pane

0xa423,	// (0x00017239) list_double_pane_ParamLimits

0xa423,	// (0x00017239) list_double_pane

0xa423,	// (0x00017239) list_double_time_pane_ParamLimits

0xa423,	// (0x00017239) list_double_time_pane

0xa423,	// (0x00017239) list_setting_number_pane_ParamLimits

0xa423,	// (0x00017239) list_setting_number_pane

0xa423,	// (0x00017239) list_setting_pane_ParamLimits

0xa423,	// (0x00017239) list_setting_pane

0xa462,	// (0x00017278) list_single_2graphic_pane_ParamLimits

0xa462,	// (0x00017278) list_single_2graphic_pane

0xa462,	// (0x00017278) list_single_graphic_heading_pane_ParamLimits

0xa462,	// (0x00017278) list_single_graphic_heading_pane

0xa462,	// (0x00017278) list_single_graphic_pane_ParamLimits

0xa462,	// (0x00017278) list_single_graphic_pane

0xa462,	// (0x00017278) list_single_heading_pane_ParamLimits

0xa462,	// (0x00017278) list_single_heading_pane

0xa4ba,	// (0x000172d0) list_single_large_graphic_pane_ParamLimits

0xa4ba,	// (0x000172d0) list_single_large_graphic_pane

0xa462,	// (0x00017278) list_single_number_heading_pane_ParamLimits

0xa462,	// (0x00017278) list_single_number_heading_pane

0xa462,	// (0x00017278) list_single_number_pane_ParamLimits

0xa462,	// (0x00017278) list_single_number_pane

0xa462,	// (0x00017278) list_single_pane_ParamLimits

0xa462,	// (0x00017278) list_single_pane

0x3553,	// (0x00010369) list_highlight_pane_cp1

0x3e49,	// (0x00010c5f) list_single_pane_g1_ParamLimits

0x3e49,	// (0x00010c5f) list_single_pane_g1

0x70ad,	// (0x00013ec3) list_single_pane_g2_ParamLimits

0x70ad,	// (0x00013ec3) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001c3e4) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001c3e4) list_single_pane_g

0xa3dc,	// (0x000171f2) list_single_pane_t1_ParamLimits

0xa3dc,	// (0x000171f2) list_single_pane_t1

0x3e49,	// (0x00010c5f) list_single_number_pane_g1_ParamLimits

0x3e49,	// (0x00010c5f) list_single_number_pane_g1

0x70ad,	// (0x00013ec3) list_single_number_pane_g2_ParamLimits

0x70ad,	// (0x00013ec3) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001c3e4) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001c3e4) list_single_number_pane_g

0xa144,	// (0x00016f5a) list_single_number_pane_t1_ParamLimits

0xa144,	// (0x00016f5a) list_single_number_pane_t1

0xa15a,	// (0x00016f70) list_single_number_pane_t2_ParamLimits

0xa15a,	// (0x00016f70) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001c776) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001c776) list_single_number_pane_t

0x3e3d,	// (0x00010c53) list_single_graphic_pane_g1_ParamLimits

0x3e3d,	// (0x00010c53) list_single_graphic_pane_g1

0x3e49,	// (0x00010c5f) list_single_graphic_pane_g2_ParamLimits

0x3e49,	// (0x00010c5f) list_single_graphic_pane_g2

0x70ad,	// (0x00013ec3) list_single_graphic_pane_g3_ParamLimits

0x70ad,	// (0x00013ec3) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001c3dd) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001c3dd) list_single_graphic_pane_g

0x70b9,	// (0x00013ecf) list_single_graphic_pane_t1_ParamLimits

0x70b9,	// (0x00013ecf) list_single_graphic_pane_t1

0x3e49,	// (0x00010c5f) list_single_heading_pane_g1_ParamLimits

0x3e49,	// (0x00010c5f) list_single_heading_pane_g1

0x70ad,	// (0x00013ec3) list_single_heading_pane_g2_ParamLimits

0x70ad,	// (0x00013ec3) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c3e4) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c3e4) list_single_heading_pane_g

0x70cf,	// (0x00013ee5) list_single_heading_pane_t1_ParamLimits

0x70cf,	// (0x00013ee5) list_single_heading_pane_t1

0x70e5,	// (0x00013efb) list_single_heading_pane_t2_ParamLimits

0x70e5,	// (0x00013efb) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001c3e9) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001c3e9) list_single_heading_pane_t

0x3e49,	// (0x00010c5f) list_single_number_heading_pane_g1_ParamLimits

0x3e49,	// (0x00010c5f) list_single_number_heading_pane_g1

0x70ad,	// (0x00013ec3) list_single_number_heading_pane_g2_ParamLimits

0x70ad,	// (0x00013ec3) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c3e4) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c3e4) list_single_number_heading_pane_g

0x70cf,	// (0x00013ee5) list_single_number_heading_pane_t1_ParamLimits

0x70cf,	// (0x00013ee5) list_single_number_heading_pane_t1

0x70f7,	// (0x00013f0d) list_single_number_heading_pane_t2_ParamLimits

0x70f7,	// (0x00013f0d) list_single_number_heading_pane_t2

0x7109,	// (0x00013f1f) list_single_number_heading_pane_t3_ParamLimits

0x7109,	// (0x00013f1f) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001c3ee) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001c3ee) list_single_number_heading_pane_t

0x711b,	// (0x00013f31) list_single_graphic_heading_pane_g1_ParamLimits

0x711b,	// (0x00013f31) list_single_graphic_heading_pane_g1

0x7127,	// (0x00013f3d) list_single_graphic_heading_pane_g4_ParamLimits

0x7127,	// (0x00013f3d) list_single_graphic_heading_pane_g4

0x70ad,	// (0x00013ec3) list_single_graphic_heading_pane_g5_ParamLimits

0x70ad,	// (0x00013ec3) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001c3f5) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001c3f5) list_single_graphic_heading_pane_g

0x70cf,	// (0x00013ee5) list_single_graphic_heading_pane_t1_ParamLimits

0x70cf,	// (0x00013ee5) list_single_graphic_heading_pane_t1

0x7138,	// (0x00013f4e) list_single_graphic_heading_pane_t2_ParamLimits

0x7138,	// (0x00013f4e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001c3fc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001c3fc) list_single_graphic_heading_pane_t

0x714a,	// (0x00013f60) list_single_large_graphic_pane_g1_ParamLimits

0x714a,	// (0x00013f60) list_single_large_graphic_pane_g1

0x7156,	// (0x00013f6c) list_single_large_graphic_pane_g2_ParamLimits

0x7156,	// (0x00013f6c) list_single_large_graphic_pane_g2

0x7162,	// (0x00013f78) list_single_large_graphic_pane_g3_ParamLimits

0x7162,	// (0x00013f78) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001c401) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001c401) list_single_large_graphic_pane_g

0x93ee,	// (0x00016204) wait_border_pane_g2_copy1

0x716e,	// (0x00013f84) list_single_large_graphic_pane_g4_cp2

0x7176,	// (0x00013f8c) list_single_large_graphic_pane_t1_ParamLimits

0x7176,	// (0x00013f8c) list_single_large_graphic_pane_t1

0x718c,	// (0x00013fa2) list_double_pane_g1_ParamLimits

0x718c,	// (0x00013fa2) list_double_pane_g1

0x7198,	// (0x00013fae) list_double_pane_g2_ParamLimits

0x7198,	// (0x00013fae) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001c408) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001c408) list_double_pane_g

0x71a4,	// (0x00013fba) list_double_pane_t1_ParamLimits

0x71a4,	// (0x00013fba) list_double_pane_t1

0x71ba,	// (0x00013fd0) list_double_pane_t2_ParamLimits

0x71ba,	// (0x00013fd0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001c40d) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001c40d) list_double_pane_t

0x71cc,	// (0x00013fe2) list_double2_pane_g1_ParamLimits

0x71cc,	// (0x00013fe2) list_double2_pane_g1

0x71dd,	// (0x00013ff3) list_double2_pane_g2_ParamLimits

0x71dd,	// (0x00013ff3) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001c412) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001c412) list_double2_pane_g

0x71e9,	// (0x00013fff) list_double2_pane_t1_ParamLimits

0x71e9,	// (0x00013fff) list_double2_pane_t1

0x71ff,	// (0x00014015) list_double2_pane_t2_ParamLimits

0x71ff,	// (0x00014015) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001c417) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001c417) list_double2_pane_t

0x718c,	// (0x00013fa2) list_double_number_pane_g1_ParamLimits

0x718c,	// (0x00013fa2) list_double_number_pane_g1

0x7198,	// (0x00013fae) list_double_number_pane_g2_ParamLimits

0x7198,	// (0x00013fae) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001c408) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001c408) list_double_number_pane_g

0x7211,	// (0x00014027) list_double_number_pane_t1_ParamLimits

0x7211,	// (0x00014027) list_double_number_pane_t1

0x7223,	// (0x00014039) list_double_number_pane_t2_ParamLimits

0x7223,	// (0x00014039) list_double_number_pane_t2

0x7239,	// (0x0001404f) list_double_number_pane_t3_ParamLimits

0x7239,	// (0x0001404f) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001c41c) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001c41c) list_double_number_pane_t

0x724b,	// (0x00014061) list_double_graphic_pane_g1_ParamLimits

0x724b,	// (0x00014061) list_double_graphic_pane_g1

0x7257,	// (0x0001406d) list_double_graphic_pane_g2_ParamLimits

0x7257,	// (0x0001406d) list_double_graphic_pane_g2

0x3e31,	// (0x00010c47) list_double_graphic_pane_g3_ParamLimits

0x3e31,	// (0x00010c47) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001c423) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001c423) list_double_graphic_pane_g

0x7272,	// (0x00014088) list_double_graphic_pane_t1_ParamLimits

0x7272,	// (0x00014088) list_double_graphic_pane_t1

0x7288,	// (0x0001409e) list_double_graphic_pane_t2_ParamLimits

0x7288,	// (0x0001409e) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001c42c) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001c42c) list_double_graphic_pane_t

0x729a,	// (0x000140b0) list_double2_graphic_pane_g1_ParamLimits

0x729a,	// (0x000140b0) list_double2_graphic_pane_g1

0x72a6,	// (0x000140bc) list_double2_graphic_pane_g2_ParamLimits

0x72a6,	// (0x000140bc) list_double2_graphic_pane_g2

0x71dd,	// (0x00013ff3) list_double2_graphic_pane_g3_ParamLimits

0x71dd,	// (0x00013ff3) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001c431) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001c431) list_double2_graphic_pane_g

0x72b2,	// (0x000140c8) list_double2_graphic_pane_t1_ParamLimits

0x72b2,	// (0x000140c8) list_double2_graphic_pane_t1

0x72c8,	// (0x000140de) list_double2_graphic_pane_t2_ParamLimits

0x72c8,	// (0x000140de) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001c438) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001c438) list_double2_graphic_pane_t

0x72da,	// (0x000140f0) list_double_large_graphic_pane_g1_ParamLimits

0x72da,	// (0x000140f0) list_double_large_graphic_pane_g1

0x7305,	// (0x0001411b) list_double_large_graphic_pane_g2_ParamLimits

0x7305,	// (0x0001411b) list_double_large_graphic_pane_g2

0x7198,	// (0x00013fae) list_double_large_graphic_pane_g3_ParamLimits

0x7198,	// (0x00013fae) list_double_large_graphic_pane_g3

0x7316,	// (0x0001412c) list_double_large_graphic_pane_g4_ParamLimits

0x7316,	// (0x0001412c) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001c43d) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001c43d) list_double_large_graphic_pane_g

0x7329,	// (0x0001413f) list_double_large_graphic_pane_t1_ParamLimits

0x7329,	// (0x0001413f) list_double_large_graphic_pane_t1

0x7342,	// (0x00014158) list_double_large_graphic_pane_t2_ParamLimits

0x7342,	// (0x00014158) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001c448) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001c448) list_double_large_graphic_pane_t

0x7354,	// (0x0001416a) list_double2_large_graphic_pane_g1_ParamLimits

0x7354,	// (0x0001416a) list_double2_large_graphic_pane_g1

0x71cc,	// (0x00013fe2) list_double2_large_graphic_pane_g2_ParamLimits

0x71cc,	// (0x00013fe2) list_double2_large_graphic_pane_g2

0x71dd,	// (0x00013ff3) list_double2_large_graphic_pane_g3_ParamLimits

0x71dd,	// (0x00013ff3) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001c44d) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001c44d) list_double2_large_graphic_pane_g

0x7360,	// (0x00014176) list_double2_large_graphic_pane_t1_ParamLimits

0x7360,	// (0x00014176) list_double2_large_graphic_pane_t1

0x7376,	// (0x0001418c) list_double2_large_graphic_pane_t2_ParamLimits

0x7376,	// (0x0001418c) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001c454) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001c454) list_double2_large_graphic_pane_t

0x7388,	// (0x0001419e) list_double_heading_pane_g1_ParamLimits

0x7388,	// (0x0001419e) list_double_heading_pane_g1

0x7399,	// (0x000141af) list_double_heading_pane_g2_ParamLimits

0x7399,	// (0x000141af) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001c459) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001c459) list_double_heading_pane_g

0x73a5,	// (0x000141bb) list_double_heading_pane_t1_ParamLimits

0x73a5,	// (0x000141bb) list_double_heading_pane_t1

0x73bb,	// (0x000141d1) list_double_heading_pane_t2_ParamLimits

0x73bb,	// (0x000141d1) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001c45e) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001c45e) list_double_heading_pane_t

0x3ce5,	// (0x00010afb) list_double_graphic_heading_pane_g1_ParamLimits

0x3ce5,	// (0x00010afb) list_double_graphic_heading_pane_g1

0x7388,	// (0x0001419e) list_double_graphic_heading_pane_g2_ParamLimits

0x7388,	// (0x0001419e) list_double_graphic_heading_pane_g2

0x7399,	// (0x000141af) list_double_graphic_heading_pane_g3_ParamLimits

0x7399,	// (0x000141af) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001c463) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001c463) list_double_graphic_heading_pane_g

0x73cd,	// (0x000141e3) list_double_graphic_heading_pane_t1_ParamLimits

0x73cd,	// (0x000141e3) list_double_graphic_heading_pane_t1

0x73e3,	// (0x000141f9) list_double_graphic_heading_pane_t2_ParamLimits

0x73e3,	// (0x000141f9) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001c46a) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001c46a) list_double_graphic_heading_pane_t

0x7305,	// (0x0001411b) list_double_time_pane_g1_ParamLimits

0x7305,	// (0x0001411b) list_double_time_pane_g1

0x7198,	// (0x00013fae) list_double_time_pane_g2_ParamLimits

0x7198,	// (0x00013fae) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001c46f) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001c46f) list_double_time_pane_g

0x73f5,	// (0x0001420b) list_double_time_pane_t1_ParamLimits

0x73f5,	// (0x0001420b) list_double_time_pane_t1

0x740b,	// (0x00014221) list_double_time_pane_t2_ParamLimits

0x740b,	// (0x00014221) list_double_time_pane_t2

0x741d,	// (0x00014233) list_double_time_pane_t3_ParamLimits

0x741d,	// (0x00014233) list_double_time_pane_t3

0x742f,	// (0x00014245) list_double_time_pane_t4_ParamLimits

0x742f,	// (0x00014245) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001c474) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001c474) list_double_time_pane_t

0x72a6,	// (0x000140bc) list_setting_pane_g1_ParamLimits

0x72a6,	// (0x000140bc) list_setting_pane_g1

0x71dd,	// (0x00013ff3) list_setting_pane_g2_ParamLimits

0x71dd,	// (0x00013ff3) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001c47d) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001c47d) list_setting_pane_g

0x7441,	// (0x00014257) list_setting_pane_t1_ParamLimits

0x7441,	// (0x00014257) list_setting_pane_t1

0x7458,	// (0x0001426e) list_setting_pane_t2_ParamLimits

0x7458,	// (0x0001426e) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001c482) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001c482) list_setting_pane_t

0x7497,	// (0x000142ad) set_value_pane_cp_ParamLimits

0x7497,	// (0x000142ad) set_value_pane_cp

0x72a6,	// (0x000140bc) list_setting_number_pane_g1_ParamLimits

0x72a6,	// (0x000140bc) list_setting_number_pane_g1

0x71dd,	// (0x00013ff3) list_setting_number_pane_g2_ParamLimits

0x71dd,	// (0x00013ff3) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001c47d) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001c47d) list_setting_number_pane_g

0x74a5,	// (0x000142bb) list_setting_number_pane_t1_ParamLimits

0x74a5,	// (0x000142bb) list_setting_number_pane_t1

0x74b9,	// (0x000142cf) list_setting_number_pane_t2_ParamLimits

0x74b9,	// (0x000142cf) list_setting_number_pane_t2

0x74d0,	// (0x000142e6) list_setting_number_pane_t3_ParamLimits

0x74d0,	// (0x000142e6) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001c489) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001c489) list_setting_number_pane_t

0x7497,	// (0x000142ad) set_value_pane_ParamLimits

0x7497,	// (0x000142ad) set_value_pane

0x3d06,	// (0x00010b1c) bg_set_opt_pane_ParamLimits

0x3d06,	// (0x00010b1c) bg_set_opt_pane

0x3d27,	// (0x00010b3d) set_value_pane_t1

0x3d35,	// (0x00010b4b) slider_set_pane_cp3

0x3d3e,	// (0x00010b54) volume_small_pane_cp

0x3d47,	// (0x00010b5d) list_form_gen_pane

0x3d50,	// (0x00010b66) scroll_pane_cp8

0x7513,	// (0x00014329) form_field_data_pane_ParamLimits

0x7513,	// (0x00014329) form_field_data_pane

0x7531,	// (0x00014347) form_field_data_wide_pane_ParamLimits

0x7531,	// (0x00014347) form_field_data_wide_pane

0x7558,	// (0x0001436e) form_field_popup_pane_ParamLimits

0x7558,	// (0x0001436e) form_field_popup_pane

0x3d71,	// (0x00010b87) form_field_popup_wide_pane_ParamLimits

0x3d71,	// (0x00010b87) form_field_popup_wide_pane

0x3d92,	// (0x00010ba8) form_field_slider_pane_ParamLimits

0x3d92,	// (0x00010ba8) form_field_slider_pane

0x3da5,	// (0x00010bbb) form_field_slider_wide_pane_ParamLimits

0x3da5,	// (0x00010bbb) form_field_slider_wide_pane

0x3db8,	// (0x00010bce) data_form_pane

0x7584,	// (0x0001439a) form_field_data_pane_t1

0x3dc4,	// (0x00010bda) input_focus_pane

0x3dd2,	// (0x00010be8) data_form_wide_pane

0x3e0f,	// (0x00010c25) form_field_data_wide_pane_t1

0x3ab9,	// (0x000108cf) input_focus_pane_cp6

0x759e,	// (0x000143b4) form_field_popup_pane_t1

0x3dc4,	// (0x00010bda) input_focus_pane_cp7

0x3e55,	// (0x00010c6b) list_form_pane

0x3e69,	// (0x00010c7f) form_field_popup_wide_pane_t1

0x3dc4,	// (0x00010bda) input_focus_pane_cp8

0x3e7e,	// (0x00010c94) list_form_wide_pane

0x75c0,	// (0x000143d6) form_field_slider_pane_t1_ParamLimits

0x75c0,	// (0x000143d6) form_field_slider_pane_t1

0x75d4,	// (0x000143ea) form_field_slider_pane_t2_ParamLimits

0x75d4,	// (0x000143ea) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001c499) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001c499) form_field_slider_pane_t

0x366e,	// (0x00010484) input_focus_pane_cp9_ParamLimits

0x366e,	// (0x00010484) input_focus_pane_cp9

0x75e6,	// (0x000143fc) slider_cont_pane_ParamLimits

0x75e6,	// (0x000143fc) slider_cont_pane

0x3e8d,	// (0x00010ca3) form_field_slider_wide_pane_t1_ParamLimits

0x3e8d,	// (0x00010ca3) form_field_slider_wide_pane_t1

0x3e9f,	// (0x00010cb5) form_field_slider_wide_pane_t2_ParamLimits

0x3e9f,	// (0x00010cb5) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001c49e) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001c49e) form_field_slider_wide_pane_t

0x366e,	// (0x00010484) input_focus_pane_cp10_ParamLimits

0x366e,	// (0x00010484) input_focus_pane_cp10

0x75fa,	// (0x00014410) slider_cont_pane_cp1_ParamLimits

0x75fa,	// (0x00014410) slider_cont_pane_cp1

0x760e,	// (0x00014424) slider_form_pane_cp

0x3eb1,	// (0x00010cc7) input_focus_pane_g1

0x3eb9,	// (0x00010ccf) input_focus_pane_g2

0x3ec1,	// (0x00010cd7) input_focus_pane_g3

0x3ec9,	// (0x00010cdf) input_focus_pane_g4

0x3ed1,	// (0x00010ce7) input_focus_pane_g5

0x3ed9,	// (0x00010cef) input_focus_pane_g6

0x3ee1,	// (0x00010cf7) input_focus_pane_g7

0x3ee9,	// (0x00010cff) input_focus_pane_g8

0x3ef1,	// (0x00010d07) input_focus_pane_g9

0x33da,	// (0x000101f0) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001c4a3) input_focus_pane_g

0x93f7,	// (0x0001620d) wait_border_pane_g3_copy1

0x7616,	// (0x0001442c) data_form_pane_t1

0x33da,	// (0x000101f0) wait_anim_pane_g1_copy1

0xa3bd,	// (0x000171d3) data_form_wide_pane_t1

0x3ef9,	// (0x00010d0f) list_form_graphic_pane_cp_ParamLimits

0x3ef9,	// (0x00010d0f) list_form_graphic_pane_cp

0xa392,	// (0x000171a8) slider_form_pane_g1

0xa39b,	// (0x000171b1) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001c7a6) slider_form_pane_g

0x3ef9,	// (0x00010d0f) list_form_graphic_pane_ParamLimits

0x3ef9,	// (0x00010d0f) list_form_graphic_pane

0x3f0b,	// (0x00010d21) list_form_graphic_pane_g1

0x3f13,	// (0x00010d29) list_form_graphic_pane_t1_ParamLimits

0x3f13,	// (0x00010d29) list_form_graphic_pane_t1

0x3686,	// (0x0001049c) list_highlight_pane_cp5_ParamLimits

0x3686,	// (0x0001049c) list_highlight_pane_cp5

0x7635,	// (0x0001444b) find_pane_g1

0x3f28,	// (0x00010d3e) input_find_pane

0x763e,	// (0x00014454) input_find_pane_g1_ParamLimits

0x763e,	// (0x00014454) input_find_pane_g1

0x764a,	// (0x00014460) input_find_pane_t1_ParamLimits

0x764a,	// (0x00014460) input_find_pane_t1

0x765f,	// (0x00014475) input_find_pane_t2_ParamLimits

0x765f,	// (0x00014475) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001c4b8) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001c4b8) input_find_pane_t

0x3f31,	// (0x00010d47) input_focus_pane_cp5_ParamLimits

0x3f31,	// (0x00010d47) input_focus_pane_cp5

0x3f3f,	// (0x00010d55) bg_popup_window_pane_cp2_ParamLimits

0x3f3f,	// (0x00010d55) bg_popup_window_pane_cp2

0x3f4c,	// (0x00010d62) listscroll_menu_pane_ParamLimits

0x3f4c,	// (0x00010d62) listscroll_menu_pane

0x7680,	// (0x00014496) popup_submenu_window_ParamLimits

0x7680,	// (0x00014496) popup_submenu_window

0x3f58,	// (0x00010d6e) find_popup_pane_g1

0x3f60,	// (0x00010d76) input_popup_find_pane_cp

0x3f31,	// (0x00010d47) input_focus_pane_cp4_ParamLimits

0x3f31,	// (0x00010d47) input_focus_pane_cp4

0x3f6a,	// (0x00010d80) input_popup_find_pane_t1_ParamLimits

0x3f6a,	// (0x00010d80) input_popup_find_pane_t1

0x3553,	// (0x00010369) bg_popup_sub_pane_cp

0x3f98,	// (0x00010dae) listscroll_popup_sub_pane

0x3fa0,	// (0x00010db6) list_submenu_pane_ParamLimits

0x3fa0,	// (0x00010db6) list_submenu_pane

0x3fb1,	// (0x00010dc7) scroll_pane_cp4

0x3fb9,	// (0x00010dcf) list_single_popup_submenu_pane_ParamLimits

0x3fb9,	// (0x00010dcf) list_single_popup_submenu_pane

0x3fce,	// (0x00010de4) list_single_popup_submenu_pane_g1

0x3fd6,	// (0x00010dec) list_single_popup_submenu_pane_t1_ParamLimits

0x3fd6,	// (0x00010dec) list_single_popup_submenu_pane_t1

0x3686,	// (0x0001049c) bg_active_tab_pane_cp1_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp1

0x76be,	// (0x000144d4) tabs_2_active_pane_g1

0x76c6,	// (0x000144dc) tabs_2_active_pane_t1

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp1_ParamLimits

0x3686,	// (0x0001049c) bg_passive_tab_pane_cp1

0x76be,	// (0x000144d4) tabs_2_passive_pane_g1

0x76c6,	// (0x000144dc) tabs_2_passive_pane_t1

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp4

0x76d8,	// (0x000144ee) tabs_2_long_active_pane_t1

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp4

0x5af5,	// (0x0001290b) list_single_midp_graphic_pane_g4_ParamLimits

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp5

0x76f7,	// (0x0001450d) tabs_3_long_active_pane_t1

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp5

0x5af5,	// (0x0001290b) list_single_midp_graphic_pane_g4

0x3686,	// (0x0001049c) bg_popup_window_pane_cp13_ParamLimits

0x3686,	// (0x0001049c) bg_popup_window_pane_cp13

0x3ff4,	// (0x00010e0a) listscroll_popup_fast_pane_ParamLimits

0x3ff4,	// (0x00010e0a) listscroll_popup_fast_pane

0x4003,	// (0x00010e19) grid_popup_fast_pane_ParamLimits

0x4003,	// (0x00010e19) grid_popup_fast_pane

0x4015,	// (0x00010e2b) scroll_pane_cp9_ParamLimits

0x4015,	// (0x00010e2b) scroll_pane_cp9

0xc2be,	// (0x000190d4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc2be,	// (0x000190d4) list_single_graphic_hl_pane_t1_cp2

0x4039,	// (0x00010e4f) input_focus_pane_cp20_ParamLimits

0x4039,	// (0x00010e4f) input_focus_pane_cp20

0x4047,	// (0x00010e5d) query_popup_data_pane_t1_ParamLimits

0x4047,	// (0x00010e5d) query_popup_data_pane_t1

0x405a,	// (0x00010e70) query_popup_data_pane_t2_ParamLimits

0x405a,	// (0x00010e70) query_popup_data_pane_t2

0x40a0,	// (0x00010eb6) query_popup_data_pane_t3_ParamLimits

0x40a0,	// (0x00010eb6) query_popup_data_pane_t3

0x40e1,	// (0x00010ef7) query_popup_data_pane_t4_ParamLimits

0x40e1,	// (0x00010ef7) query_popup_data_pane_t4

0x411d,	// (0x00010f33) query_popup_data_pane_t5_ParamLimits

0x411d,	// (0x00010f33) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001c4bd) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001c4bd) query_popup_data_pane_t

0x3eb1,	// (0x00010cc7) bg_set_opt_pane_g1

0x3eb9,	// (0x00010ccf) bg_set_opt_pane_g2

0x3ec1,	// (0x00010cd7) bg_set_opt_pane_g3

0x3ec9,	// (0x00010cdf) bg_set_opt_pane_g4

0x3ed1,	// (0x00010ce7) bg_set_opt_pane_g5

0x3ed9,	// (0x00010cef) bg_set_opt_pane_g6

0x3ee1,	// (0x00010cf7) bg_set_opt_pane_g7

0x3ee9,	// (0x00010cff) bg_set_opt_pane_g8

0x3ef1,	// (0x00010d07) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001c4c8) bg_set_opt_pane_g

0x56f5,	// (0x0001250b) control_top_pane_stacon_ParamLimits

0x56f5,	// (0x0001250b) control_top_pane_stacon

0x5748,	// (0x0001255e) signal_pane_stacon_ParamLimits

0x5748,	// (0x0001255e) signal_pane_stacon

0x7acc,	// (0x000148e2) stacon_top_pane_g1_ParamLimits

0x7acc,	// (0x000148e2) stacon_top_pane_g1

0x576d,	// (0x00012583) title_pane_stacon_ParamLimits

0x576d,	// (0x00012583) title_pane_stacon

0x5797,	// (0x000125ad) uni_indicator_pane_stacon_ParamLimits

0x5797,	// (0x000125ad) uni_indicator_pane_stacon

0x57af,	// (0x000125c5) battery_pane_stacon_ParamLimits

0x57af,	// (0x000125c5) battery_pane_stacon

0x57f3,	// (0x00012609) control_bottom_pane_stacon_ParamLimits

0x57f3,	// (0x00012609) control_bottom_pane_stacon

0x5816,	// (0x0001262c) navi_pane_stacon_ParamLimits

0x5816,	// (0x0001262c) navi_pane_stacon

0x7aee,	// (0x00014904) stacon_bottom_pane_g1_ParamLimits

0x7aee,	// (0x00014904) stacon_bottom_pane_g1

0x5452,	// (0x00012268) aid_levels_signal_lsc_ParamLimits

0x5452,	// (0x00012268) aid_levels_signal_lsc

0x5469,	// (0x0001227f) signal_pane_stacon_g1_ParamLimits

0x5469,	// (0x0001227f) signal_pane_stacon_g1

0x547d,	// (0x00012293) signal_pane_stacon_g2_ParamLimits

0x547d,	// (0x00012293) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001c4db) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001c4db) signal_pane_stacon_g

0x54b2,	// (0x000122c8) title_pane_stacon_t1_ParamLimits

0x54b2,	// (0x000122c8) title_pane_stacon_t1

0x4208,	// (0x0001101e) uni_indicator_pane_stacon_g1

0x4212,	// (0x00011028) uni_indicator_pane_stacon_g2

0x41f4,	// (0x0001100a) uni_indicator_pane_stacon_g3

0x41fe,	// (0x00011014) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001c4e7) uni_indicator_pane_stacon_g

0x54d7,	// (0x000122ed) control_top_pane_stacon_g1

0x54df,	// (0x000122f5) control_top_pane_stacon_t1_ParamLimits

0x54df,	// (0x000122f5) control_top_pane_stacon_t1

0x5516,	// (0x0001232c) aid_levels_battery_lsc_ParamLimits

0x5516,	// (0x0001232c) aid_levels_battery_lsc

0x552e,	// (0x00012344) battery_pane_stacon_g1_ParamLimits

0x552e,	// (0x00012344) battery_pane_stacon_g1

0x5541,	// (0x00012357) battery_pane_stacon_g2_ParamLimits

0x5541,	// (0x00012357) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001c4f0) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001c4f0) battery_pane_stacon_g

0x557f,	// (0x00012395) navi_icon_pane_stacon

0x5593,	// (0x000123a9) navi_navi_pane_stacon

0x557f,	// (0x00012395) navi_text_pane_stacon

0x54d7,	// (0x000122ed) control_bottom_pane_stacon_g1

0x55a9,	// (0x000123bf) control_bottom_pane_stacon_t1_ParamLimits

0x55a9,	// (0x000123bf) control_bottom_pane_stacon_t1

0x7709,	// (0x0001451f) grid_app_pane_ParamLimits

0x7709,	// (0x0001451f) grid_app_pane

0x772d,	// (0x00014543) scroll_pane_cp15_ParamLimits

0x772d,	// (0x00014543) scroll_pane_cp15

0x7742,	// (0x00014558) cell_app_pane_ParamLimits

0x7742,	// (0x00014558) cell_app_pane

0x776e,	// (0x00014584) cell_app_pane_g1_ParamLimits

0x776e,	// (0x00014584) cell_app_pane_g1

0x433f,	// (0x00011155) cell_app_pane_g2_ParamLimits

0x433f,	// (0x00011155) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001c4f5) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001c4f5) cell_app_pane_g

0x434b,	// (0x00011161) cell_app_pane_t1_ParamLimits

0x434b,	// (0x00011161) cell_app_pane_t1

0x4362,	// (0x00011178) grid_highlight_pane_ParamLimits

0x4362,	// (0x00011178) grid_highlight_pane

0x3eb1,	// (0x00010cc7) cell_highlight_pane_g1

0x3eb9,	// (0x00010ccf) cell_highlight_pane_g2

0x3ec1,	// (0x00010cd7) cell_highlight_pane_g3

0x3ec9,	// (0x00010cdf) cell_highlight_pane_g4

0x3ed1,	// (0x00010ce7) cell_highlight_pane_g5

0x3ed9,	// (0x00010cef) cell_highlight_pane_g6

0x3ee1,	// (0x00010cf7) cell_highlight_pane_g7

0x3ee9,	// (0x00010cff) cell_highlight_pane_g8

0x3ef1,	// (0x00010d07) cell_highlight_pane_g9

0x33da,	// (0x000101f0) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001c4a3) cell_highlight_pane_g

0x437d,	// (0x00011193) bg_scroll_pane

0x55f3,	// (0x00012409) scroll_handle_pane

0x43ed,	// (0x00011203) scroll_bg_pane_g1

0x4402,	// (0x00011218) scroll_bg_pane_g2

0x441a,	// (0x00011230) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001c4fa) scroll_bg_pane_g

0x442f,	// (0x00011245) scroll_handle_focus_pane_ParamLimits

0x442f,	// (0x00011245) scroll_handle_focus_pane

0x43ed,	// (0x00011203) scroll_handle_pane_g1

0x443c,	// (0x00011252) scroll_handle_pane_g2

0x441a,	// (0x00011230) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001c501) scroll_handle_pane_g

0x3f31,	// (0x00010d47) bg_popup_sub_pane_cp21_ParamLimits

0x3f31,	// (0x00010d47) bg_popup_sub_pane_cp21

0x4450,	// (0x00011266) popup_fep_japan_predictive_window_t1_ParamLimits

0x4450,	// (0x00011266) popup_fep_japan_predictive_window_t1

0x4467,	// (0x0001127d) popup_fep_japan_predictive_window_t2_ParamLimits

0x4467,	// (0x0001127d) popup_fep_japan_predictive_window_t2

0x449a,	// (0x000112b0) popup_fep_japan_predictive_window_t3_ParamLimits

0x449a,	// (0x000112b0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001c508) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001c508) popup_fep_japan_predictive_window_t

0x3553,	// (0x00010369) bg_popup_sub_pane_cp23

0x44d1,	// (0x000112e7) listscroll_japin_cand_pane

0x44d9,	// (0x000112ef) popup_fep_japan_candidate_window_t1

0x44e7,	// (0x000112fd) candidate_pane_ParamLimits

0x44e7,	// (0x000112fd) candidate_pane

0x44f9,	// (0x0001130f) scroll_pane_cp30

0x4503,	// (0x00011319) list_single_popup_jap_candidate_pane_ParamLimits

0x4503,	// (0x00011319) list_single_popup_jap_candidate_pane

0x3553,	// (0x00010369) list_highlight_pane_cp30

0x4517,	// (0x0001132d) list_single_popup_jap_candidate_pane_t1

0x778e,	// (0x000145a4) level_1_signal

0x779b,	// (0x000145b1) level_2_signal

0x77a8,	// (0x000145be) level_3_signal

0x77b5,	// (0x000145cb) level_4_signal

0x77c2,	// (0x000145d8) level_5_signal

0x77cf,	// (0x000145e5) level_6_signal

0x77dc,	// (0x000145f2) level_7_signal

0x778e,	// (0x000145a4) level_1_battery

0x779b,	// (0x000145b1) level_2_battery

0x77a8,	// (0x000145be) level_3_battery

0x77b5,	// (0x000145cb) level_4_battery

0x77c2,	// (0x000145d8) level_5_battery

0x77cf,	// (0x000145e5) level_6_battery

0x77dc,	// (0x000145f2) level_7_battery

0x455d,	// (0x00011373) list_menu_pane_ParamLimits

0x455d,	// (0x00011373) list_menu_pane

0x4573,	// (0x00011389) scroll_pane_cp25_ParamLimits

0x4573,	// (0x00011389) scroll_pane_cp25

0x458c,	// (0x000113a2) list_double2_graphic_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double2_graphic_pane_cp2

0x458c,	// (0x000113a2) list_double2_large_graphic_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double2_large_graphic_pane_cp2

0x458c,	// (0x000113a2) list_double2_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double2_pane_cp2

0x458c,	// (0x000113a2) list_double_graphic_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double_graphic_pane_cp2

0x458c,	// (0x000113a2) list_double_large_graphic_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double_large_graphic_pane_cp2

0x458c,	// (0x000113a2) list_double_number_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double_number_pane_cp2

0x458c,	// (0x000113a2) list_double_pane_cp2_ParamLimits

0x458c,	// (0x000113a2) list_double_pane_cp2

0x77ff,	// (0x00014615) list_single_2graphic_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_2graphic_pane_cp2

0x77ff,	// (0x00014615) list_single_graphic_heading_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_graphic_heading_pane_cp2

0x77ff,	// (0x00014615) list_single_graphic_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_graphic_pane_cp2

0x77ff,	// (0x00014615) list_single_heading_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_heading_pane_cp2

0x459c,	// (0x000113b2) list_single_large_graphic_pane_cp2_ParamLimits

0x459c,	// (0x000113b2) list_single_large_graphic_pane_cp2

0x77ff,	// (0x00014615) list_single_number_heading_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_number_heading_pane_cp2

0x77ff,	// (0x00014615) list_single_number_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_number_pane_cp2

0x77ff,	// (0x00014615) list_single_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_pane_cp2

0x7887,	// (0x0001469d) bg_popup_sub_pane_cp22

0x56a5,	// (0x000124bb) popup_side_volume_key_window_g1

0x56cf,	// (0x000124e5) popup_side_volume_key_window_t1

0x56ed,	// (0x00012503) volume_small_pane_cp1

0x366e,	// (0x00010484) bg_popup_sub_pane_cp24_ParamLimits

0x366e,	// (0x00010484) bg_popup_sub_pane_cp24

0x789d,	// (0x000146b3) fep_china_uni_candidate_pane_ParamLimits

0x789d,	// (0x000146b3) fep_china_uni_candidate_pane

0x78b1,	// (0x000146c7) fep_china_uni_entry_pane

0x78c1,	// (0x000146d7) popup_fep_china_uni_window_g1

0x78dd,	// (0x000146f3) fep_china_uni_entry_pane_g1

0x78e7,	// (0x000146fd) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001c539) fep_china_uni_entry_pane_g

0x78f1,	// (0x00014707) fep_entry_item_pane

0x78fb,	// (0x00014711) fep_candidate_item_pane

0x7903,	// (0x00014719) fep_china_uni_candidate_pane_g1

0x790d,	// (0x00014723) fep_china_uni_candidate_pane_g2

0x7915,	// (0x0001472b) fep_china_uni_candidate_pane_g3

0x791d,	// (0x00014733) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001c53e) fep_china_uni_candidate_pane_g

0x33da,	// (0x000101f0) fep_entry_item_pane_g1

0x7927,	// (0x0001473d) fep_entry_item_pane_t1_ParamLimits

0x7927,	// (0x0001473d) fep_entry_item_pane_t1

0x793d,	// (0x00014753) fep_candidate_item_pane_t1_ParamLimits

0x793d,	// (0x00014753) fep_candidate_item_pane_t1

0x7952,	// (0x00014768) fep_candidate_item_pane_t2_ParamLimits

0x7952,	// (0x00014768) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001c547) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001c547) fep_candidate_item_pane_t

0x3686,	// (0x0001049c) list_highlight_pane_cp31_ParamLimits

0x3686,	// (0x0001049c) list_highlight_pane_cp31

0x7964,	// (0x0001477a) level_1_signal_lsc

0x796d,	// (0x00014783) level_2_signal_lsc

0x7976,	// (0x0001478c) level_3_signal_lsc

0x797f,	// (0x00014795) level_4_signal_lsc

0x7988,	// (0x0001479e) level_5_signal_lsc

0x7991,	// (0x000147a7) level_6_signal_lsc

0x799a,	// (0x000147b0) level_7_signal_lsc

0x799a,	// (0x000147b0) level_1_battery_lsc

0x79a3,	// (0x000147b9) level_2_battery_lsc

0x79ac,	// (0x000147c2) level_3_battery_lsc

0x79b5,	// (0x000147cb) level_4_battery_lsc

0x79be,	// (0x000147d4) level_5_battery_lsc

0x79c7,	// (0x000147dd) level_6_battery_lsc

0x7964,	// (0x0001477a) level_7_battery_lsc

0x79d0,	// (0x000147e6) scroll_handle_focus_pane_g1

0x79d9,	// (0x000147ef) scroll_handle_focus_pane_g2

0x79e2,	// (0x000147f8) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001c54c) scroll_handle_focus_pane_g

0x79eb,	// (0x00014801) list_single_2graphic_pane_g1_ParamLimits

0x79eb,	// (0x00014801) list_single_2graphic_pane_g1

0x7127,	// (0x00013f3d) list_single_2graphic_pane_g2_ParamLimits

0x7127,	// (0x00013f3d) list_single_2graphic_pane_g2

0x70ad,	// (0x00013ec3) list_single_2graphic_pane_g3_ParamLimits

0x70ad,	// (0x00013ec3) list_single_2graphic_pane_g3

0x79f7,	// (0x0001480d) list_single_2graphic_pane_g4_ParamLimits

0x79f7,	// (0x0001480d) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001c553) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001c553) list_single_2graphic_pane_g

0x7a03,	// (0x00014819) list_single_2graphic_pane_t1_ParamLimits

0x7a03,	// (0x00014819) list_single_2graphic_pane_t1

0x7a31,	// (0x00014847) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7a31,	// (0x00014847) list_double2_graphic_large_graphic_pane_g1

0x71cc,	// (0x00013fe2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x71cc,	// (0x00013fe2) list_double2_graphic_large_graphic_pane_g2

0x71dd,	// (0x00013ff3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x71dd,	// (0x00013ff3) list_double2_graphic_large_graphic_pane_g3

0x7a43,	// (0x00014859) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7a43,	// (0x00014859) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001c55c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001c55c) list_double2_graphic_large_graphic_pane_g

0x7a4f,	// (0x00014865) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7a4f,	// (0x00014865) list_double2_graphic_large_graphic_pane_t1

0x7a65,	// (0x0001487b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7a65,	// (0x0001487b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001c565) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001c565) list_double2_graphic_large_graphic_pane_t

0x7bb0,	// (0x000149c6) popup_fast_swap_window_ParamLimits

0x7bb0,	// (0x000149c6) popup_fast_swap_window

0x7bce,	// (0x000149e4) popup_side_volume_key_window

0x7bec,	// (0x00014a02) stacon_top_pane

0x7bf6,	// (0x00014a0c) status_pane_ParamLimits

0x7bf6,	// (0x00014a0c) status_pane

0x7bec,	// (0x00014a02) status_small_pane

0x3553,	// (0x00010369) control_pane

0x3553,	// (0x00010369) stacon_bottom_pane

0x3d50,	// (0x00010b66) scroll_pane_cp121

0x3d47,	// (0x00010b5d) set_content_pane

0x7a77,	// (0x0001488d) bg_active_tab_pane_g1_cp1

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp1

0x7a89,	// (0x0001489f) bg_active_tab_pane_g3_cp1

0x7a77,	// (0x0001488d) bg_passive_tab_pane_g1_cp1

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp1

0x7a89,	// (0x0001489f) bg_passive_tab_pane_g3_cp1

0x7a92,	// (0x000148a8) bg_active_tab_pane_g1_cp2

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp2

0x7a9b,	// (0x000148b1) bg_active_tab_pane_g3_cp2

0x7a92,	// (0x000148a8) bg_passive_tab_pane_g1_cp2

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp2

0x7a9b,	// (0x000148b1) bg_passive_tab_pane_g3_cp2

0x7aa4,	// (0x000148ba) bg_active_tab_pane_g1_cp3

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp3

0x7aad,	// (0x000148c3) bg_active_tab_pane_g3_cp3

0x7aa4,	// (0x000148ba) bg_passive_tab_pane_g1_cp3

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp3

0x7aad,	// (0x000148c3) bg_passive_tab_pane_g3_cp3

0x7ab6,	// (0x000148cc) bg_active_tab_pane_g1_cp4

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp4

0x7ac1,	// (0x000148d7) bg_active_tab_pane_g3_cp4

0x7ab6,	// (0x000148cc) bg_passive_tab_pane_g1_cp4

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp4

0x7ac1,	// (0x000148d7) bg_passive_tab_pane_g3_cp4

0x7b0a,	// (0x00014920) bg_active_tab_pane_g1_cp5

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp5

0x7b13,	// (0x00014929) bg_active_tab_pane_g3_cp5

0x7b0a,	// (0x00014920) bg_passive_tab_pane_g1_cp5

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp5

0x7b13,	// (0x00014929) bg_passive_tab_pane_g3_cp5

0x7b1c,	// (0x00014932) list_set_graphic_pane_ParamLimits

0x7b1c,	// (0x00014932) list_set_graphic_pane

0x3553,	// (0x00010369) bg_set_opt_pane_cp4

0x7b31,	// (0x00014947) list_set_graphic_pane_g1_ParamLimits

0x7b31,	// (0x00014947) list_set_graphic_pane_g1

0x7b3d,	// (0x00014953) list_set_graphic_pane_g2_ParamLimits

0x7b3d,	// (0x00014953) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001c56a) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001c56a) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001c8e9) volume_small_pane_cp_g

0x7b61,	// (0x00014977) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7b61,	// (0x00014977) list_double2_large_graphic_pane_g1_cp2

0x7b6f,	// (0x00014985) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7b6f,	// (0x00014985) list_double2_large_graphic_pane_g2_cp2

0x7b80,	// (0x00014996) list_double2_large_graphic_pane_g3_cp2

0x7b88,	// (0x0001499e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7b88,	// (0x0001499e) list_double2_large_graphic_pane_t1_cp2

0x7b9e,	// (0x000149b4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7b9e,	// (0x000149b4) list_double2_large_graphic_pane_t2_cp2

0x9edb,	// (0x00016cf1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9edb,	// (0x00016cf1) list_double_large_graphic_pane_g1_cp2

0x9eee,	// (0x00016d04) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9eee,	// (0x00016d04) list_double_large_graphic_pane_g2_cp2

0x7d14,	// (0x00014b2a) list_double_large_graphic_pane_g3_cp2

0x9eff,	// (0x00016d15) list_double_large_graphic_pane_g4_cp

0x9f07,	// (0x00016d1d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9f07,	// (0x00016d1d) list_double_large_graphic_pane_t1_cp2

0x9f1e,	// (0x00016d34) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9f1e,	// (0x00016d34) list_double_large_graphic_pane_t2_cp2

0x7c04,	// (0x00014a1a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7c04,	// (0x00014a1a) list_double2_graphic_pane_g1_cp2

0x7c12,	// (0x00014a28) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7c12,	// (0x00014a28) list_double2_graphic_pane_g2_cp2

0x7c23,	// (0x00014a39) list_double2_graphic_pane_g3_cp2

0x7c2d,	// (0x00014a43) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7c2d,	// (0x00014a43) list_double2_graphic_pane_t1_cp2

0x7c43,	// (0x00014a59) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7c43,	// (0x00014a59) list_double2_graphic_pane_t2_cp2

0x7c55,	// (0x00014a6b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7c55,	// (0x00014a6b) list_single_number_heading_pane_g1_cp2

0x7c61,	// (0x00014a77) list_single_number_heading_pane_g2_cp2

0x7c69,	// (0x00014a7f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7c69,	// (0x00014a7f) list_single_number_heading_pane_t1_cp2

0x7c7f,	// (0x00014a95) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7c7f,	// (0x00014a95) list_single_number_heading_pane_t2_cp2

0x7c93,	// (0x00014aa9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7c93,	// (0x00014aa9) list_single_number_heading_pane_t3_cp2

0x7c55,	// (0x00014a6b) list_single_heading_pane_g1_cp2_ParamLimits

0x7c55,	// (0x00014a6b) list_single_heading_pane_g1_cp2

0x7c61,	// (0x00014a77) list_single_heading_pane_g2_cp2

0x7c69,	// (0x00014a7f) list_single_heading_pane_t1_cp2_ParamLimits

0x7c69,	// (0x00014a7f) list_single_heading_pane_t1_cp2

0x9cd5,	// (0x00016aeb) list_single_heading_pane_t2_cp2_ParamLimits

0x9cd5,	// (0x00016aeb) list_single_heading_pane_t2_cp2

0x9c1d,	// (0x00016a33) list_double_graphic_pane_g1_cp2_ParamLimits

0x9c1d,	// (0x00016a33) list_double_graphic_pane_g1_cp2

0x9c29,	// (0x00016a3f) list_double_graphic_pane_g2_cp2_ParamLimits

0x9c29,	// (0x00016a3f) list_double_graphic_pane_g2_cp2

0x9c38,	// (0x00016a4e) list_double_graphic_pane_g3_cp2

0x9c40,	// (0x00016a56) list_double_graphic_pane_t1_cp2_ParamLimits

0x9c40,	// (0x00016a56) list_double_graphic_pane_t1_cp2

0x9c56,	// (0x00016a6c) list_double_graphic_pane_t2_cp2_ParamLimits

0x9c56,	// (0x00016a6c) list_double_graphic_pane_t2_cp2

0x7d08,	// (0x00014b1e) list_double_number_pane_g1_cp2_ParamLimits

0x7d08,	// (0x00014b1e) list_double_number_pane_g1_cp2

0x7d14,	// (0x00014b2a) list_double_number_pane_g2_cp2

0x9be1,	// (0x000169f7) list_double_number_pane_t1_cp2_ParamLimits

0x9be1,	// (0x000169f7) list_double_number_pane_t1_cp2

0x9bf5,	// (0x00016a0b) list_double_number_pane_t2_cp2_ParamLimits

0x9bf5,	// (0x00016a0b) list_double_number_pane_t2_cp2

0x9c0b,	// (0x00016a21) list_double_number_pane_t3_cp2_ParamLimits

0x9c0b,	// (0x00016a21) list_double_number_pane_t3_cp2

0x9aca,	// (0x000168e0) list_single_graphic_pane_g1_cp2_ParamLimits

0x9aca,	// (0x000168e0) list_single_graphic_pane_g1_cp2

0x7d6e,	// (0x00014b84) list_single_graphic_pane_g2_cp2_ParamLimits

0x7d6e,	// (0x00014b84) list_single_graphic_pane_g2_cp2

0x7d7a,	// (0x00014b90) list_single_graphic_pane_g3_cp2

0x9aa0,	// (0x000168b6) list_single_graphic_pane_t1_cp2_ParamLimits

0x9aa0,	// (0x000168b6) list_single_graphic_pane_t1_cp2

0x7d6e,	// (0x00014b84) list_single_number_pane_g1_cp2_ParamLimits

0x7d6e,	// (0x00014b84) list_single_number_pane_g1_cp2

0x7d7a,	// (0x00014b90) list_single_number_pane_g2_cp2

0x9aa0,	// (0x000168b6) list_single_number_pane_t1_cp2_ParamLimits

0x9aa0,	// (0x000168b6) list_single_number_pane_t1_cp2

0x9ab6,	// (0x000168cc) list_single_number_pane_t2_cp2_ParamLimits

0x9ab6,	// (0x000168cc) list_single_number_pane_t2_cp2

0x7b6f,	// (0x00014985) list_double2_pane_g1_cp2_ParamLimits

0x7b6f,	// (0x00014985) list_double2_pane_g1_cp2

0x7b80,	// (0x00014996) list_double2_pane_g2_cp2

0x7ce0,	// (0x00014af6) list_double2_pane_t1_cp2_ParamLimits

0x7ce0,	// (0x00014af6) list_double2_pane_t1_cp2

0x7cf6,	// (0x00014b0c) list_double2_pane_t2_cp2_ParamLimits

0x7cf6,	// (0x00014b0c) list_double2_pane_t2_cp2

0x7d08,	// (0x00014b1e) list_double_pane_g1_cp2_ParamLimits

0x7d08,	// (0x00014b1e) list_double_pane_g1_cp2

0x7d14,	// (0x00014b2a) list_double_pane_g2_cp2

0x7d1c,	// (0x00014b32) list_double_pane_t1_cp2_ParamLimits

0x7d1c,	// (0x00014b32) list_double_pane_t1_cp2

0x7d32,	// (0x00014b48) list_double_pane_t2_cp2_ParamLimits

0x7d32,	// (0x00014b48) list_double_pane_t2_cp2

0x7d5e,	// (0x00014b74) list_single_pane_cp2_g3

0x7d6e,	// (0x00014b84) list_single_pane_g1_cp2_ParamLimits

0x7d6e,	// (0x00014b84) list_single_pane_g1_cp2

0x7d7a,	// (0x00014b90) list_single_pane_g2_cp2

0x7d82,	// (0x00014b98) list_single_pane_t1_cp2_ParamLimits

0x7d82,	// (0x00014b98) list_single_pane_t1_cp2

0x7d9a,	// (0x00014bb0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7d9a,	// (0x00014bb0) list_single_large_graphic_pane_g1_cp2

0x7da8,	// (0x00014bbe) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7da8,	// (0x00014bbe) list_single_large_graphic_pane_g2_cp2

0x7db4,	// (0x00014bca) list_single_large_graphic_pane_g3_cp2

0x7dbc,	// (0x00014bd2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7dbc,	// (0x00014bd2) list_single_large_graphic_pane_g4_cp1

0x7dd6,	// (0x00014bec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7dd6,	// (0x00014bec) list_single_large_graphic_pane_t1_cp2

0x9a6a,	// (0x00016880) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9a6a,	// (0x00016880) list_single_graphic_heading_pane_g1_cp2

0x9a37,	// (0x0001684d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9a37,	// (0x0001684d) list_single_graphic_heading_pane_g4_cp2

0x7d7a,	// (0x00014b90) list_single_graphic_heading_pane_g5_cp2

0x9a76,	// (0x0001688c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9a76,	// (0x0001688c) list_single_graphic_heading_pane_t1_cp2

0x9a8c,	// (0x000168a2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9a8c,	// (0x000168a2) list_single_graphic_heading_pane_t2_cp2

0x9a2b,	// (0x00016841) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9a2b,	// (0x00016841) list_single_2graphic_pane_g1_cp2

0x9a37,	// (0x0001684d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9a37,	// (0x0001684d) list_single_2graphic_pane_g2_cp2

0x7d7a,	// (0x00014b90) list_single_2graphic_pane_g3_cp2

0x9a48,	// (0x0001685e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9a48,	// (0x0001685e) list_single_2graphic_pane_g4_cp2

0x9a54,	// (0x0001686a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9a54,	// (0x0001686a) list_single_2graphic_pane_t1_cp2

0x33da,	// (0x000101f0) list_highlight_pane_g10_cp1

0x9603,	// (0x00016419) list_highlight_pane_g1_cp1

0x960b,	// (0x00016421) list_highlight_pane_g2_cp1

0x9613,	// (0x00016429) list_highlight_pane_g3_cp1

0x961b,	// (0x00016431) list_highlight_pane_g4_cp1

0x9623,	// (0x00016439) list_highlight_pane_g5_cp1

0x962b,	// (0x00016441) list_highlight_pane_g6_cp1

0x9633,	// (0x00016449) list_highlight_pane_g7_cp1

0x963b,	// (0x00016451) list_highlight_pane_g8_cp1

0x9643,	// (0x00016459) list_highlight_pane_g9_cp1

0x9523,	// (0x00016339) form_field_slider_pane_t3

0x9531,	// (0x00016347) form_field_slider_pane_t4

0x953f,	// (0x00016355) slider_form_pane_ParamLimits

0x953f,	// (0x00016355) slider_form_pane

0x3553,	// (0x00010369) control_abbreviations

0x3553,	// (0x00010369) control_conventions

0x3553,	// (0x00010369) control_definitions

0x3553,	// (0x00010369) format_table_attribute

0x9d2b,	// (0x00016b41) bg_popup_preview_window_pane_g9

0x3553,	// (0x00010369) format_table_data2

0x3553,	// (0x00010369) format_table_data3

0x3553,	// (0x00010369) format_table_data_example

0x0008,

0x3553,	// (0x00010369) intro_purpose

0xf8f0,	// (0x0001c706) bg_popup_preview_window_pane_g

0x3553,	// (0x00010369) texts_category

0x3553,	// (0x00010369) texts_graphics

0x7dec,	// (0x00014c02) text_digital

0x7dfb,	// (0x00014c11) text_primary

0x7e0a,	// (0x00014c20) text_primary_small

0x7e19,	// (0x00014c2f) text_secondary

0x7e28,	// (0x00014c3e) text_title

0xa54e,	// (0x00017364) bg_passive_tab_pane_g1_cp3_srt

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp3_srt

0xa557,	// (0x0001736d) bg_passive_tab_pane_g3_cp3_srt

0x3686,	// (0x0001049c) bg_active_tab_pane_cp3_srt_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp3_srt

0xa560,	// (0x00017376) tabs_4_active_pane_srt_g1

0xa568,	// (0x0001737e) tabs_4_active_pane_srt_t1_ParamLimits

0xa568,	// (0x0001737e) tabs_4_active_pane_srt_t1

0xa54e,	// (0x00017364) bg_active_tab_pane_g1_cp3_copy1

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp3_copy1

0xa557,	// (0x0001736d) bg_active_tab_pane_g3_cp3_copy1

0x3686,	// (0x0001049c) tabs_2_long_active_pane_srt_ParamLimits

0x3686,	// (0x0001049c) tabs_2_long_active_pane_srt

0x3686,	// (0x0001049c) tabs_2_long_passive_pane_srt_ParamLimits

0x3686,	// (0x0001049c) tabs_2_long_passive_pane_srt

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp4_srt_ParamLimits

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp4_srt

0xa1a3,	// (0x00016fb9) bg_passive_tab_pane_g1_cp4_srt

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp4_srt

0xa1ac,	// (0x00016fc2) bg_passive_tab_pane_g3_cp4_srt

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp4_srt_ParamLimits

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp4_srt

0xa1b5,	// (0x00016fcb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa1b5,	// (0x00016fcb) tabs_2_long_active_pane_srt_t1

0xa1a3,	// (0x00016fb9) bg_active_tab_pane_g1_cp4_srt

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp4_srt

0xa1ac,	// (0x00016fc2) bg_active_tab_pane_g3_cp4_srt

0x366e,	// (0x00010484) tabs_3_long_active_pane_srt_ParamLimits

0x366e,	// (0x00010484) tabs_3_long_active_pane_srt

0x366e,	// (0x00010484) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x366e,	// (0x00010484) tabs_3_long_passive_pane_cp_srt

0x366e,	// (0x00010484) tabs_3_long_passive_pane_srt_ParamLimits

0x366e,	// (0x00010484) tabs_3_long_passive_pane_srt

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp5_srt_ParamLimits

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp5_srt

0x7b0a,	// (0x00014920) bg_passive_tab_pane_g1_cp5_srt

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp5_srt

0x7b13,	// (0x00014929) bg_passive_tab_pane_g3_cp5_srt

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp5_srt_ParamLimits

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp5_srt

0xa191,	// (0x00016fa7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa191,	// (0x00016fa7) tabs_3_long_active_pane_srt_t1

0x7b0a,	// (0x00014920) bg_active_tab_pane_g1_cp5_srt

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp5_srt

0x7b13,	// (0x00014929) bg_active_tab_pane_g3_cp5_srt

0xa183,	// (0x00016f99) navi_text_pane_srt_t1

0xa17b,	// (0x00016f91) navi_icon_pane_srt_g1

0x7ff3,	// (0x00014e09) midp_editing_number_pane_srt

0x7e37,	// (0x00014c4d) midp_ticker_pane_srt

0x7ffb,	// (0x00014e11) midp_ticker_pane_srt_g1

0x8003,	// (0x00014e19) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001c589) midp_ticker_pane_srt_g

0x800b,	// (0x00014e21) midp_ticker_pane_srt_t1

0xa16c,	// (0x00016f82) midp_editing_number_pane_t1_copy1

0x76eb,	// (0x00014501) listscroll_midp_pane

0x76eb,	// (0x00014501) midp_form_pane

0x7ea1,	// (0x00014cb7) midp_info_popup_window_ParamLimits

0x7ea1,	// (0x00014cb7) midp_info_popup_window

0x3f31,	// (0x00010d47) bg_popup_sub_pane_cp50_ParamLimits

0x3f31,	// (0x00010d47) bg_popup_sub_pane_cp50

0x9239,	// (0x0001604f) listscroll_midp_info_pane_ParamLimits

0x9239,	// (0x0001604f) listscroll_midp_info_pane

0x9221,	// (0x00016037) listscroll_form_midp_pane_ParamLimits

0x9221,	// (0x00016037) listscroll_form_midp_pane

0x922d,	// (0x00016043) scroll_bar_cp050

0x9201,	// (0x00016017) list_midp_pane

0xb29e,	// (0x000180b4) signal_pane_g2_cp

0x913b,	// (0x00015f51) listscroll_midp_info_pane_t1_ParamLimits

0x913b,	// (0x00015f51) listscroll_midp_info_pane_t1

0x9153,	// (0x00015f69) listscroll_midp_info_pane_t2_ParamLimits

0x9153,	// (0x00015f69) listscroll_midp_info_pane_t2

0x9191,	// (0x00015fa7) listscroll_midp_info_pane_t3_ParamLimits

0x9191,	// (0x00015fa7) listscroll_midp_info_pane_t3

0x91cb,	// (0x00015fe1) listscroll_midp_info_pane_t4_ParamLimits

0x91cb,	// (0x00015fe1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001c641) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001c641) listscroll_midp_info_pane_t

0x3fb1,	// (0x00010dc7) scroll_pane_cp21

0x90d5,	// (0x00015eeb) form_midp_field_choice_group_pane

0x90de,	// (0x00015ef4) form_midp_field_text_pane

0x9121,	// (0x00015f37) form_midp_field_time_pane

0x9129,	// (0x00015f3f) form_midp_gauge_slider_pane

0x9132,	// (0x00015f48) form_midp_gauge_wait_pane

0x3553,	// (0x00010369) form_midp_image_pane

0x90b5,	// (0x00015ecb) list_single_midp_pane_ParamLimits

0x90b5,	// (0x00015ecb) list_single_midp_pane

0x9079,	// (0x00015e8f) form_midp_field_text_pane_t1

0x8e56,	// (0x00015c6c) input_focus_pane_cp050

0x90a4,	// (0x00015eba) list_midp_form_text_pane

0x9048,	// (0x00015e5e) form_midp_field_choice_group_pane_t1

0x9056,	// (0x00015e6c) input_focus_pane_cp051

0x906a,	// (0x00015e80) list_midp_choice_pane

0x3553,	// (0x00010369) status_idle_pane

0x902c,	// (0x00015e42) form_midp_field_time_pane_t1

0x33da,	// (0x000101f0) wait_anim_pane_g2_copy1

0x903a,	// (0x00015e50) form_midp_field_time_pane_t2

0x0001,

0x7f51,	// (0x00014d67) aid_navinavi_width_2_pane

0xf826,	// (0x0001c63c) form_midp_field_time_pane_t

0x3553,	// (0x00010369) input_focus_pane_cp052

0x3553,	// (0x00010369) bg_input_focus_pane_cp040

0x8fec,	// (0x00015e02) form_midp_gauge_slider_pane_t1

0x8ffa,	// (0x00015e10) form_midp_gauge_slider_pane_t2

0x9008,	// (0x00015e1e) form_midp_gauge_slider_pane_t3

0x9016,	// (0x00015e2c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001c633) form_midp_gauge_slider_pane_t

0x9024,	// (0x00015e3a) form_midp_slider_pane

0x3686,	// (0x0001049c) bg_input_focus_pane_cp041_ParamLimits

0x3686,	// (0x0001049c) bg_input_focus_pane_cp041

0x8fb9,	// (0x00015dcf) form_midp_gauge_wait_pane_t1_ParamLimits

0x8fb9,	// (0x00015dcf) form_midp_gauge_wait_pane_t1

0x8fcb,	// (0x00015de1) form_midp_gauge_wait_pane_t2_ParamLimits

0x8fcb,	// (0x00015de1) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001c62e) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001c62e) form_midp_gauge_wait_pane_t

0x8fdd,	// (0x00015df3) form_midp_wait_pane_ParamLimits

0x8fdd,	// (0x00015df3) form_midp_wait_pane

0x8f81,	// (0x00015d97) form_midp_image_pane_g1

0x8f8a,	// (0x00015da0) form_midp_image_pane_t1

0x8f99,	// (0x00015daf) form_midp_image_pane_t2

0x8fa8,	// (0x00015dbe) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001c627) form_midp_image_pane_t

0x8f69,	// (0x00015d7f) list_single_midp_pane_g1

0x8f72,	// (0x00015d88) list_single_midp_pane_t1

0x8f4f,	// (0x00015d65) list_midp_form_item_pane_ParamLimits

0x8f4f,	// (0x00015d65) list_midp_form_item_pane

0x7ef9,	// (0x00014d0f) list_midp_form_item_pane_t1

0x7f08,	// (0x00014d1e) midp_ticker_pane_g1

0x7f14,	// (0x00014d2a) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001c56f) midp_ticker_pane_g

0x7f20,	// (0x00014d36) midp_ticker_pane_t1

0xa414,	// (0x0001722a) midp_editing_number_pane_t1

0xa3f2,	// (0x00017208) midp_editing_number_pane

0xa401,	// (0x00017217) midp_ticker_pane

0xa134,	// (0x00016f4a) ai_message_heading_pane

0x3553,	// (0x00010369) bg_popup_window_pane_cp14

0xa13c,	// (0x00016f52) listscroll_ai_message_pane

0xa0ba,	// (0x00016ed0) ai_message_heading_pane_g1_ParamLimits

0xa0ba,	// (0x00016ed0) ai_message_heading_pane_g1

0xa0c6,	// (0x00016edc) ai_message_heading_pane_g2_ParamLimits

0xa0c6,	// (0x00016edc) ai_message_heading_pane_g2

0xa0d4,	// (0x00016eea) ai_message_heading_pane_g3_ParamLimits

0xa0d4,	// (0x00016eea) ai_message_heading_pane_g3

0xa0e0,	// (0x00016ef6) ai_message_heading_pane_g4_ParamLimits

0xa0e0,	// (0x00016ef6) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001c768) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001c768) ai_message_heading_pane_g

0xa0ec,	// (0x00016f02) ai_message_heading_pane_t1_ParamLimits

0xa0ec,	// (0x00016f02) ai_message_heading_pane_t1

0xa106,	// (0x00016f1c) ai_message_heading_pane_t2_ParamLimits

0xa106,	// (0x00016f1c) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001c771) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001c771) ai_message_heading_pane_t

0xa11a,	// (0x00016f30) bg_popup_heading_pane_cp1_ParamLimits

0xa11a,	// (0x00016f30) bg_popup_heading_pane_cp1

0xa0a8,	// (0x00016ebe) list_ai_message_pane_ParamLimits

0xa0a8,	// (0x00016ebe) list_ai_message_pane

0x3fb1,	// (0x00010dc7) scroll_pane_cp10

0xa044,	// (0x00016e5a) list_ai_message_pane_g1

0xa04c,	// (0x00016e62) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001c745) list_ai_message_pane_g

0xa054,	// (0x00016e6a) list_ai_message_pane_t1_ParamLimits

0xa054,	// (0x00016e6a) list_ai_message_pane_t1

0xa069,	// (0x00016e7f) list_ai_message_pane_t2_ParamLimits

0xa069,	// (0x00016e7f) list_ai_message_pane_t2

0xa07e,	// (0x00016e94) list_ai_message_pane_t3_ParamLimits

0xa07e,	// (0x00016e94) list_ai_message_pane_t3

0xa093,	// (0x00016ea9) list_ai_message_pane_t4_ParamLimits

0xa093,	// (0x00016ea9) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001c74a) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001c74a) list_ai_message_pane_t

0xa02d,	// (0x00016e43) cell_ai_soft_ind_pane_ParamLimits

0xa02d,	// (0x00016e43) cell_ai_soft_ind_pane

0x7f32,	// (0x00014d48) cell_ai_soft_ind_pane_g1_ParamLimits

0x7f32,	// (0x00014d48) cell_ai_soft_ind_pane_g1

0x3553,	// (0x00010369) grid_highlight_cp1

0x7f3f,	// (0x00014d55) text_secondary_cp56_ParamLimits

0x7f3f,	// (0x00014d55) text_secondary_cp56

0xa002,	// (0x00016e18) example_general_pane_ParamLimits

0xa002,	// (0x00016e18) example_general_pane

0xa00e,	// (0x00016e24) example_parent_pane_g1_ParamLimits

0xa00e,	// (0x00016e24) example_parent_pane_g1

0xa01a,	// (0x00016e30) example_parent_pane_t1_ParamLimits

0xa01a,	// (0x00016e30) example_parent_pane_t1

0x8588,	// (0x0001539e) popup_preview_text_window_ParamLimits

0x8588,	// (0x0001539e) popup_preview_text_window

0x7d66,	// (0x00014b7c) list_single_pane_cp2_g4

0x3904,	// (0x0001071a) bg_popup_preview_window_pane_ParamLimits

0x3904,	// (0x0001071a) bg_popup_preview_window_pane

0x9d35,	// (0x00016b4b) popup_preview_text_window_t1_ParamLimits

0x9d35,	// (0x00016b4b) popup_preview_text_window_t1

0x9d53,	// (0x00016b69) popup_preview_text_window_t2_ParamLimits

0x9d53,	// (0x00016b69) popup_preview_text_window_t2

0x9d9c,	// (0x00016bb2) popup_preview_text_window_t3_ParamLimits

0x9d9c,	// (0x00016bb2) popup_preview_text_window_t3

0x9de1,	// (0x00016bf7) popup_preview_text_window_t4_ParamLimits

0x9de1,	// (0x00016bf7) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001c719) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001c719) popup_preview_text_window_t

0x9e5f,	// (0x00016c75) scroll_pane_cp11

0x8d30,	// (0x00015b46) bg_popup_preview_window_pane_g1

0x9ce9,	// (0x00016aff) bg_popup_preview_window_pane_g2

0x9cf3,	// (0x00016b09) bg_popup_preview_window_pane_g3

0x9cfd,	// (0x00016b13) bg_popup_preview_window_pane_g4

0x9d07,	// (0x00016b1d) bg_popup_preview_window_pane_g5

0x9d11,	// (0x00016b27) bg_popup_preview_window_pane_g6

0x9d19,	// (0x00016b2f) bg_popup_preview_window_pane_g7

0x9d21,	// (0x00016b37) bg_popup_preview_window_pane_g8

0x4fca,	// (0x00011de0) aid_popup_width_pane

0x8564,	// (0x0001537a) popup_midp_note_alarm_window_ParamLimits

0x8564,	// (0x0001537a) popup_midp_note_alarm_window

0x3db8,	// (0x00010bce) data_form_pane_ParamLimits

0x757a,	// (0x00014390) form_field_data_pane_g1

0x7584,	// (0x0001439a) form_field_data_pane_t1_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_ParamLimits

0x3dd2,	// (0x00010be8) data_form_wide_pane_ParamLimits

0x3de3,	// (0x00010bf9) form_field_data_wide_pane_g1

0x3e0f,	// (0x00010c25) form_field_data_wide_pane_t1_ParamLimits

0x3ab9,	// (0x000108cf) input_focus_pane_cp6_ParamLimits

0x76b0,	// (0x000144c6) input_popup_find_pane_g1_ParamLimits

0x76b0,	// (0x000144c6) input_popup_find_pane_g1

0x5552,	// (0x00012368) aid_navi_side_left_pane

0x5567,	// (0x0001237d) aid_navi_side_right_pane

0x96fe,	// (0x00016514) bg_popup_window_pane_cp30_ParamLimits

0x96fe,	// (0x00016514) bg_popup_window_pane_cp30

0x9778,	// (0x0001658e) popup_midp_note_alarm_window_g1_ParamLimits

0x9778,	// (0x0001658e) popup_midp_note_alarm_window_g1

0x97a8,	// (0x000165be) popup_midp_note_alarm_window_t1_ParamLimits

0x97a8,	// (0x000165be) popup_midp_note_alarm_window_t1

0x9849,	// (0x0001665f) popup_midp_note_alarm_window_t2_ParamLimits

0x9849,	// (0x0001665f) popup_midp_note_alarm_window_t2

0x98f7,	// (0x0001670d) popup_midp_note_alarm_window_t3_ParamLimits

0x98f7,	// (0x0001670d) popup_midp_note_alarm_window_t3

0x9929,	// (0x0001673f) popup_midp_note_alarm_window_t4_ParamLimits

0x9929,	// (0x0001673f) popup_midp_note_alarm_window_t4

0x994f,	// (0x00016765) popup_midp_note_alarm_window_t5_ParamLimits

0x994f,	// (0x00016765) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001c6b6) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001c6b6) popup_midp_note_alarm_window_t

0x99fb,	// (0x00016811) wait_bar_pane_cp1_ParamLimits

0x99fb,	// (0x00016811) wait_bar_pane_cp1

0x3553,	// (0x00010369) wait_anim_pane_copy1

0x3553,	// (0x00010369) wait_border_pane_copy1

0x93e3,	// (0x000161f9) wait_border_pane_g1_copy1

0x3e29,	// (0x00010c3f) form_field_popup_pane_g1

0x759e,	// (0x000143b4) form_field_popup_pane_t1_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_cp7_ParamLimits

0x3e55,	// (0x00010c6b) list_form_pane_ParamLimits

0x3e61,	// (0x00010c77) form_field_popup_wide_pane_g1

0x3e69,	// (0x00010c7f) form_field_popup_wide_pane_t1_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_cp8_ParamLimits

0x3e7e,	// (0x00010c94) list_form_wide_pane_ParamLimits

0xa5db,	// (0x000173f1) aid_size_cell_graphic_pane

0x7616,	// (0x0001442c) data_form_pane_t1_ParamLimits

0xa3bd,	// (0x000171d3) data_form_wide_pane_t1_ParamLimits

0x88af,	// (0x000156c5) bg_status_flat_pane

0x6de1,	// (0x00013bf7) title_pane_t1_ParamLimits

0x3636,	// (0x0001044c) title_pane_t2_ParamLimits

0x365c,	// (0x00010472) title_pane_t3_ParamLimits

0xf55d,	// (0x0001c373) title_pane_t_ParamLimits

0x778e,	// (0x000145a4) level_1_signal_ParamLimits

0x779b,	// (0x000145b1) level_2_signal_ParamLimits

0x77a8,	// (0x000145be) level_3_signal_ParamLimits

0x77b5,	// (0x000145cb) level_4_signal_ParamLimits

0x77c2,	// (0x000145d8) level_5_signal_ParamLimits

0x77cf,	// (0x000145e5) level_6_signal_ParamLimits

0x77dc,	// (0x000145f2) level_7_signal_ParamLimits

0x778e,	// (0x000145a4) level_1_battery_ParamLimits

0x779b,	// (0x000145b1) level_2_battery_ParamLimits

0x77a8,	// (0x000145be) level_3_battery_ParamLimits

0x77b5,	// (0x000145cb) level_4_battery_ParamLimits

0x77c2,	// (0x000145d8) level_5_battery_ParamLimits

0x77cf,	// (0x000145e5) level_6_battery_ParamLimits

0x77dc,	// (0x000145f2) level_7_battery_ParamLimits

0x9603,	// (0x00016419) bg_status_flat_pane_g1

0x960b,	// (0x00016421) bg_status_flat_pane_g2

0x9613,	// (0x00016429) bg_status_flat_pane_g3

0x961b,	// (0x00016431) bg_status_flat_pane_g4

0x9623,	// (0x00016439) bg_status_flat_pane_g5

0x962b,	// (0x00016441) bg_status_flat_pane_g6

0x9633,	// (0x00016449) bg_status_flat_pane_g7

0x6e51,	// (0x00013c67) tabs_3_active_pane_t1_ParamLimits

0x6e51,	// (0x00013c67) tabs_3_passive_pane_t1_ParamLimits

0x6e6b,	// (0x00013c81) tabs_4_active_pane_t1_ParamLimits

0x6e6b,	// (0x00013c81) tabs_4_1_passive_pane_t1_ParamLimits

0x76c6,	// (0x000144dc) tabs_2_active_pane_t1_ParamLimits

0x76c6,	// (0x000144dc) tabs_2_passive_pane_t1_ParamLimits

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp4_ParamLimits

0x76d8,	// (0x000144ee) tabs_2_long_active_pane_t1_ParamLimits

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp4_ParamLimits

0x5b28,	// (0x0001293e) list_single_midp_graphic_pane_t1_ParamLimits

0x4154,	// (0x00010f6a) bg_active_tab_pane_cp5_ParamLimits

0x76f7,	// (0x0001450d) tabs_3_long_active_pane_t1_ParamLimits

0x76eb,	// (0x00014501) bg_passive_tab_pane_cp5_ParamLimits

0x5b28,	// (0x0001293e) list_single_midp_graphic_pane_t1

0x88af,	// (0x000156c5) bg_status_flat_pane_ParamLimits

0x897a,	// (0x00015790) indicator_pane_cp2_ParamLimits

0x897a,	// (0x00015790) indicator_pane_cp2

0x8abd,	// (0x000158d3) navi_pane_srt_ParamLimits

0x8abd,	// (0x000158d3) navi_pane_srt

0x8ae1,	// (0x000158f7) popup_clock_digital_analogue_window_cp1

0x376d,	// (0x00010583) indicator_pane_t1

0x7e37,	// (0x00014c4d) copy_highlight_pane

0x7e37,	// (0x00014c4d) cursor_graphics_pane

0x7e37,	// (0x00014c4d) graphic_within_text_pane

0x7e37,	// (0x00014c4d) link_highlight_pane

0x9e22,	// (0x00016c38) popup_preview_text_window_t5_ParamLimits

0x9e22,	// (0x00016c38) popup_preview_text_window_t5

0x7f5b,	// (0x00014d71) cursor_digital_pane

0x7f5b,	// (0x00014d71) cursor_primary_pane

0x7f6c,	// (0x00014d82) cursor_primary_small_pane

0x7f74,	// (0x00014d8a) cursor_secondary_pane

0x7f7c,	// (0x00014d92) cursor_title_pane

0x7f5b,	// (0x00014d71) link_highlight_digital_pane

0x7f63,	// (0x00014d79) link_highlight_primary_pane

0x7f6c,	// (0x00014d82) link_highlight_primary_small_pane

0x7f74,	// (0x00014d8a) link_highlight_secondary_pane

0x7f7c,	// (0x00014d92) link_highlight_title_pane

0x7f5b,	// (0x00014d71) copy_highlight_digital_pane

0x7f5b,	// (0x00014d71) copy_highlight_primary_pane

0x7f6c,	// (0x00014d82) copy_highlight_primary_small_pane

0x7f74,	// (0x00014d8a) copy_highlight_secondary_pane

0x7f7c,	// (0x00014d92) copy_highlight_title_pane

0x7f74,	// (0x00014d8a) graphic_text_digital_pane

0x96a1,	// (0x000164b7) graphic_text_primary_pane

0x96aa,	// (0x000164c0) graphic_text_primary_small_pane

0x7f6c,	// (0x00014d82) graphic_text_secondary_pane

0x7f5b,	// (0x00014d71) graphic_text_title_pane

0x7f84,	// (0x00014d9a) cursor_primary_pane_g1

0x9693,	// (0x000164a9) cursor_text_primary_t1

0x967b,	// (0x00016491) cursor_primary_small_pane_g1

0x9685,	// (0x0001649b) cursor_text_primary_small_t1

0x9663,	// (0x00016479) cursor_primary_small_pane_g1_copy1

0x966d,	// (0x00016483) cursor_text_primary_small_t1_copy1

0x964b,	// (0x00016461) cursor_text_title_t1

0x9659,	// (0x0001646f) cursor_title_pane_g1

0x7f84,	// (0x00014d9a) cursor_digital_pane_g1

0x7f8e,	// (0x00014da4) cursor_text_digital_t1

0x7f9c,	// (0x00014db2) link_highlight_primary_pane_g1

0x95f4,	// (0x0001640a) link_highlight_primary_pane_t1

0x7f9c,	// (0x00014db2) link_highlight_primary_small_pane_g1

0x7fa4,	// (0x00014dba) link_highlight_primary_small_pane_t1

0x7fb3,	// (0x00014dc9) link_highlight_secondary_pane_g1

0x7fbb,	// (0x00014dd1) link_highlight_secondary_pane_t1

0x9568,	// (0x0001637e) link_highlight_title_pane_g1

0x9570,	// (0x00016386) link_highlight_title_pane_t1

0x9551,	// (0x00016367) link_highlight_digital_pane_g1

0x9559,	// (0x0001636f) link_highlight_digital_pane_t1

0x9419,	// (0x0001622f) copy_highlight_primary_pane_g1

0x9430,	// (0x00016246) copy_highlight_primary_pane_t1

0x9419,	// (0x0001622f) copy_highlight_primary_small_pane_g1

0x9421,	// (0x00016237) copy_highlight_primary_small_pane_t1

0x7fca,	// (0x00014de0) copy_highlight_secondary_pane_g1

0x7fd2,	// (0x00014de8) copy_highlight_secondary_pane_t1

0x9402,	// (0x00016218) copy_highlight_title_pane_g1

0x940a,	// (0x00016220) copy_highlight_title_pane_t1

0x9419,	// (0x0001622f) copy_highlight_digital_pane_g1

0xa7ab,	// (0x000175c1) copy_highlight_digital_pane_t1

0xa6ff,	// (0x00017515) graphic_text_primary_pane_g1

0xa78f,	// (0x000175a5) graphic_text_primary_pane_t1

0xa79d,	// (0x000175b3) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001c7e5) graphic_text_primary_pane_t

0xa76b,	// (0x00017581) graphic_text_primary_small_pane_g1

0xa773,	// (0x00017589) graphic_text_primary_small_pane_t1

0xa781,	// (0x00017597) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001c7e0) graphic_text_primary_small_pane_t

0xa747,	// (0x0001755d) graphic_text_secondary_pane_g1

0xa74f,	// (0x00017565) graphic_text_secondary_pane_t1

0xa75d,	// (0x00017573) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001c7db) graphic_text_secondary_pane_t

0xa723,	// (0x00017539) graphic_text_title_pane_g1

0xa72b,	// (0x00017541) graphic_text_title_pane_t1

0xa739,	// (0x0001754f) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001c7d6) graphic_text_title_pane_t

0xa6ff,	// (0x00017515) graphic_text_digital_pane_g1

0xa707,	// (0x0001751d) graphic_text_digital_pane_t1

0xa715,	// (0x0001752b) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001c7d1) graphic_text_digital_pane_t

0x3686,	// (0x0001049c) navi_icon_pane_srt_ParamLimits

0x3686,	// (0x0001049c) navi_icon_pane_srt

0x3553,	// (0x00010369) navi_midp_pane_srt

0x3553,	// (0x00010369) navi_navi_pane_srt

0x3686,	// (0x0001049c) navi_text_pane_srt_ParamLimits

0x3686,	// (0x0001049c) navi_text_pane_srt

0xa6ca,	// (0x000174e0) navi_navi_icon_text_pane_srt

0xa6d2,	// (0x000174e8) navi_navi_pane_srt_g1_ParamLimits

0xa6d2,	// (0x000174e8) navi_navi_pane_srt_g1

0xa6e4,	// (0x000174fa) navi_navi_pane_srt_g2_ParamLimits

0xa6e4,	// (0x000174fa) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001c7cc) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001c7cc) navi_navi_pane_srt_g

0xa6f6,	// (0x0001750c) navi_navi_tabs_pane_srt

0xa6ca,	// (0x000174e0) navi_navi_text_pane_srt

0xa6ca,	// (0x000174e0) navi_navi_volume_pane_srt

0xa6bb,	// (0x000174d1) navi_navi_text_pane_srt_t1

0x5ec4,	// (0x00012cda) navi_navi_volume_pane_srt_g1

0x5ecc,	// (0x00012ce2) volume_small_pane_srt_ParamLimits

0x5ecc,	// (0x00012ce2) volume_small_pane_srt

0x5839,	// (0x0001264f) volume_small_pane_srt_g1_ParamLimits

0x5839,	// (0x0001264f) volume_small_pane_srt_g1

0x5849,	// (0x0001265f) volume_small_pane_srt_g2_ParamLimits

0x5849,	// (0x0001265f) volume_small_pane_srt_g2

0x585a,	// (0x00012670) volume_small_pane_srt_g3_ParamLimits

0x585a,	// (0x00012670) volume_small_pane_srt_g3

0x586b,	// (0x00012681) volume_small_pane_srt_g4_ParamLimits

0x586b,	// (0x00012681) volume_small_pane_srt_g4

0x587c,	// (0x00012692) volume_small_pane_srt_g5_ParamLimits

0x587c,	// (0x00012692) volume_small_pane_srt_g5

0x588d,	// (0x000126a3) volume_small_pane_srt_g6_ParamLimits

0x588d,	// (0x000126a3) volume_small_pane_srt_g6

0x589e,	// (0x000126b4) volume_small_pane_srt_g7_ParamLimits

0x589e,	// (0x000126b4) volume_small_pane_srt_g7

0x58af,	// (0x000126c5) volume_small_pane_srt_g8_ParamLimits

0x58af,	// (0x000126c5) volume_small_pane_srt_g8

0x58c0,	// (0x000126d6) volume_small_pane_srt_g9_ParamLimits

0x58c0,	// (0x000126d6) volume_small_pane_srt_g9

0x58d1,	// (0x000126e7) volume_small_pane_srt_g10_ParamLimits

0x58d1,	// (0x000126e7) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001c574) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001c574) volume_small_pane_srt_g

0x39b9,	// (0x000107cf) query_popup_data_pane_cp2

0xa6a1,	// (0x000174b7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa6a1,	// (0x000174b7) navi_navi_icon_text_pane_srt_t1

0x96a1,	// (0x000164b7) navi_tabs_2_long_pane_srt

0x96a1,	// (0x000164b7) navi_tabs_2_pane_srt

0x96a1,	// (0x000164b7) navi_tabs_3_long_pane_srt

0x96a1,	// (0x000164b7) navi_tabs_3_pane_srt

0x96a1,	// (0x000164b7) navi_tabs_4_pane_srt

0x5ea4,	// (0x00012cba) tabs_2_active_pane_srt_ParamLimits

0x5ea4,	// (0x00012cba) tabs_2_active_pane_srt

0x5eb4,	// (0x00012cca) tabs_2_passive_pane_srt_ParamLimits

0x5eb4,	// (0x00012cca) tabs_2_passive_pane_srt

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp1_srt

0xa66d,	// (0x00017483) bg_passive_tab_pane_g1_cp1_srt

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp1_srt

0xa676,	// (0x0001748c) bg_passive_tab_pane_g3_cp1_srt

0x3686,	// (0x0001049c) bg_active_tab_pane_cp1_srt_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp1_srt

0xa67f,	// (0x00017495) tabs_2_active_pane_srt_g1

0xa687,	// (0x0001749d) tabs_2_active_pane_srt_t1_ParamLimits

0xa687,	// (0x0001749d) tabs_2_active_pane_srt_t1

0xa66d,	// (0x00017483) bg_active_tab_pane_g1_cp1_srt

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp1_srt

0xa676,	// (0x0001748c) bg_active_tab_pane_g3_cp1_srt

0x5e71,	// (0x00012c87) tabs_3_active_pane_srt_ParamLimits

0x5e71,	// (0x00012c87) tabs_3_active_pane_srt

0x5e82,	// (0x00012c98) tabs_3_passive_pane_cp_srt_ParamLimits

0x5e82,	// (0x00012c98) tabs_3_passive_pane_cp_srt

0x5e93,	// (0x00012ca9) tabs_3_passive_pane_srt_ParamLimits

0x5e93,	// (0x00012ca9) tabs_3_passive_pane_srt

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x81b9,	// (0x00014fcf) bg_passive_tab_pane_cp2_srt

0x7fe1,	// (0x00014df7) bg_passive_tab_pane_g1_cp2_srt

0x7a80,	// (0x00014896) bg_passive_tab_pane_g2_cp2_srt

0x7fea,	// (0x00014e00) bg_passive_tab_pane_g3_cp2_srt

0x3686,	// (0x0001049c) bg_active_tab_pane_cp2_srt_ParamLimits

0x3686,	// (0x0001049c) bg_active_tab_pane_cp2_srt

0xa653,	// (0x00017469) tabs_3_active_pane_srt_g1

0xa65b,	// (0x00017471) tabs_3_active_pane_srt_t1_ParamLimits

0xa65b,	// (0x00017471) tabs_3_active_pane_srt_t1

0x7fe1,	// (0x00014df7) bg_active_tab_pane_g1_cp2_srt

0x7a80,	// (0x00014896) bg_active_tab_pane_g2_cp2_srt

0x7fea,	// (0x00014e00) bg_active_tab_pane_g3_cp2_srt

0x5e29,	// (0x00012c3f) tabs_4_active_pane_srt_ParamLimits

0x5e29,	// (0x00012c3f) tabs_4_active_pane_srt

0x5e3b,	// (0x00012c51) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5e3b,	// (0x00012c51) tabs_4_passive_pane_cp2_srt

0x813f,	// (0x00014f55) aid_size_cell_toolbar

0x76eb,	// (0x00014501) main_idle_act_pane_ParamLimits

0x838a,	// (0x000151a0) popup_large_graphic_colour_window_ParamLimits

0x8731,	// (0x00015547) popup_toolbar_window_ParamLimits

0x8731,	// (0x00015547) popup_toolbar_window

0xa437,	// (0x0001724d) list_single_graphic_2heading_pane_ParamLimits

0xa437,	// (0x0001724d) list_single_graphic_2heading_pane

0x4325,	// (0x0001113b) aid_size_cell_apps_grid_lsc_pane

0x4337,	// (0x0001114d) aid_size_cell_apps_grid_prt_pane

0x81b9,	// (0x00014fcf) bg_wml_button_pane_cp1_ParamLimits

0x81b9,	// (0x00014fcf) bg_wml_button_pane_cp1

0x9079,	// (0x00015e8f) form_midp_field_text_pane_t1_ParamLimits

0x8e56,	// (0x00015c6c) input_focus_pane_cp050_ParamLimits

0x90a4,	// (0x00015eba) list_midp_form_text_pane_ParamLimits

0x9056,	// (0x00015e6c) input_focus_pane_cp051_ParamLimits

0x906a,	// (0x00015e80) list_midp_choice_pane_ParamLimits

0x8f0f,	// (0x00015d25) list_single_2graphic_pane_cp3_ParamLimits

0x8f0f,	// (0x00015d25) list_single_2graphic_pane_cp3

0x8f28,	// (0x00015d3e) list_single_midp_graphic_pane_ParamLimits

0x8f28,	// (0x00015d3e) list_single_midp_graphic_pane

0x5a2c,	// (0x00012842) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a2c,	// (0x00012842) list_single_graphic_2heading_pane_g1

0x5a38,	// (0x0001284e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a38,	// (0x0001284e) list_single_graphic_2heading_pane_g4

0x5a44,	// (0x0001285a) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a44,	// (0x0001285a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001c5c7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001c5c7) list_single_graphic_2heading_pane_g

0x5a50,	// (0x00012866) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a50,	// (0x00012866) list_single_graphic_2heading_pane_t1

0x5a64,	// (0x0001287a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a64,	// (0x0001287a) list_single_graphic_2heading_pane_t2

0x5a80,	// (0x00012896) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a80,	// (0x00012896) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001c5ce) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001c5ce) list_single_graphic_2heading_pane_t

0x8c40,	// (0x00015a56) bg_popup_sub_pane_cp2

0x8c6a,	// (0x00015a80) grid_toobar_pane

0x5a98,	// (0x000128ae) cell_toolbar_pane_ParamLimits

0x5a98,	// (0x000128ae) cell_toolbar_pane

0x8cd4,	// (0x00015aea) cell_toolbar_pane_g1_ParamLimits

0x8cd4,	// (0x00015aea) cell_toolbar_pane_g1

0x8ce8,	// (0x00015afe) cell_toolbar_pane_g2_ParamLimits

0x8ce8,	// (0x00015afe) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001c5dc) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001c5dc) cell_toolbar_pane_g

0x8d0a,	// (0x00015b20) grid_highlight_pane_cp2_ParamLimits

0x8d0a,	// (0x00015b20) grid_highlight_pane_cp2

0x8d24,	// (0x00015b3a) toolbar_button_pane

0x8d30,	// (0x00015b46) toolbar_button_pane_g1

0x8d38,	// (0x00015b4e) toolbar_button_pane_g2

0x8d40,	// (0x00015b56) toolbar_button_pane_g3

0x8d48,	// (0x00015b5e) toolbar_button_pane_g4

0x8d50,	// (0x00015b66) toolbar_button_pane_g5

0x8d58,	// (0x00015b6e) toolbar_button_pane_g6

0x8d60,	// (0x00015b76) toolbar_button_pane_g7

0x8d68,	// (0x00015b7e) toolbar_button_pane_g8

0x8d70,	// (0x00015b86) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001c5e1) toolbar_button_pane_g

0x5ad0,	// (0x000128e6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5ad0,	// (0x000128e6) list_single_2graphic_pane_g1_cp3

0x5adc,	// (0x000128f2) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5adc,	// (0x000128f2) list_single_2graphic_pane_g2_cp3

0x5aed,	// (0x00012903) list_single_2graphic_pane_g3_cp3

0x5af5,	// (0x0001290b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5af5,	// (0x0001290b) list_single_2graphic_pane_g4_cp3

0x5b01,	// (0x00012917) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5b01,	// (0x00012917) list_single_2graphic_pane_t1_cp3

0x5b1c,	// (0x00012932) list_single_midp_graphic_pane_g2_ParamLimits

0x5b1c,	// (0x00012932) list_single_midp_graphic_pane_g2

0x8147,	// (0x00014f5d) aid_zoom_text_primary

0x814f,	// (0x00014f65) aid_zoom_text_secondary

0x809e,	// (0x00014eb4) status_small_pane_g7_ParamLimits

0x809e,	// (0x00014eb4) status_small_pane_g7

0x80c1,	// (0x00014ed7) status_small_pane_t1_ParamLimits

0x6dd0,	// (0x00013be6) title_pane_g2

0x0003,

0xf554,	// (0x0001c36a) title_pane_g

0x6f92,	// (0x00013da8) aid_size_cell_colour_1_pane_ParamLimits

0x6f92,	// (0x00013da8) aid_size_cell_colour_1_pane

0x6fa6,	// (0x00013dbc) aid_size_cell_colour_2_pane_ParamLimits

0x6fa6,	// (0x00013dbc) aid_size_cell_colour_2_pane

0x6fba,	// (0x00013dd0) aid_size_cell_colour_3_pane_ParamLimits

0x6fba,	// (0x00013dd0) aid_size_cell_colour_3_pane

0x6fce,	// (0x00013de4) aid_size_cell_colour_4_pane_ParamLimits

0x6fce,	// (0x00013de4) aid_size_cell_colour_4_pane

0x548e,	// (0x000122a4) title_pane_stacon_g1_ParamLimits

0x548e,	// (0x000122a4) title_pane_stacon_g1

0x9487,	// (0x0001629d) popup_note_wait_window_g3_ParamLimits

0x9487,	// (0x0001629d) popup_note_wait_window_g3

0x94fe,	// (0x00016314) popup_note_wait_window_t5_ParamLimits

0x94fe,	// (0x00016314) popup_note_wait_window_t5

0x3553,	// (0x00010369) main_feb_china_hwr_fs_writing_pane

0x8251,	// (0x00015067) popup_feb_china_hwr_fs_window_ParamLimits

0x8251,	// (0x00015067) popup_feb_china_hwr_fs_window

0x5b3e,	// (0x00012954) aid_size_cell_hwr_fs_ParamLimits

0x5b3e,	// (0x00012954) aid_size_cell_hwr_fs

0x8e56,	// (0x00015c6c) bg_popup_sub_pane_cp3_ParamLimits

0x8e56,	// (0x00015c6c) bg_popup_sub_pane_cp3

0x5b53,	// (0x00012969) grid_hwr_fs_pane_ParamLimits

0x5b53,	// (0x00012969) grid_hwr_fs_pane

0x5b6b,	// (0x00012981) linegrid_hwr_fs_pane_ParamLimits

0x5b6b,	// (0x00012981) linegrid_hwr_fs_pane

0x5b7b,	// (0x00012991) cell_hwr_fs_pane_ParamLimits

0x5b7b,	// (0x00012991) cell_hwr_fs_pane

0x8e62,	// (0x00015c78) linegrid_hwr_fs_pane_g1_ParamLimits

0x8e62,	// (0x00015c78) linegrid_hwr_fs_pane_g1

0x8e6e,	// (0x00015c84) linegrid_hwr_fs_pane_g2_ParamLimits

0x8e6e,	// (0x00015c84) linegrid_hwr_fs_pane_g2

0x8e80,	// (0x00015c96) linegrid_hwr_fs_pane_g3_ParamLimits

0x8e80,	// (0x00015c96) linegrid_hwr_fs_pane_g3

0x5b9f,	// (0x000129b5) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b9f,	// (0x000129b5) linegrid_hwr_fs_pane_g4

0x5bbd,	// (0x000129d3) linegrid_hwr_fs_pane_g5_ParamLimits

0x5bbd,	// (0x000129d3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001c60c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001c60c) linegrid_hwr_fs_pane_g

0x8e8c,	// (0x00015ca2) cell_hwr_fs_pane_g1_ParamLimits

0x8e8c,	// (0x00015ca2) cell_hwr_fs_pane_g1

0x8b77,	// (0x0001598d) cell_hwr_fs_pane_g2_ParamLimits

0x8b77,	// (0x0001598d) cell_hwr_fs_pane_g2

0x8ea2,	// (0x00015cb8) cell_hwr_fs_pane_g3_ParamLimits

0x8ea2,	// (0x00015cb8) cell_hwr_fs_pane_g3

0x8eaf,	// (0x00015cc5) cell_hwr_fs_pane_g4_ParamLimits

0x8eaf,	// (0x00015cc5) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001c617) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001c617) cell_hwr_fs_pane_g

0x5bd3,	// (0x000129e9) cell_hwr_fs_pane_t1

0x3553,	// (0x00010369) grid_highlight_pane_cp6

0x3553,	// (0x00010369) main_idle_act2_pane

0x3f98,	// (0x00010dae) aid_inside_area_popup_secondary

0x9b37,	// (0x0001694d) aid_inside_area_window_primary_ParamLimits

0x9b37,	// (0x0001694d) aid_inside_area_window_primary

0xa7ba,	// (0x000175d0) ai2_news_ticker_pane

0xa7c2,	// (0x000175d8) aid_size_cell_ai1_link_ParamLimits

0xa7c2,	// (0x000175d8) aid_size_cell_ai1_link

0xa7dc,	// (0x000175f2) popup_ai2_data_window_ParamLimits

0xa7dc,	// (0x000175f2) popup_ai2_data_window

0xa7fa,	// (0x00017610) popup_ai2_link_window_ParamLimits

0xa7fa,	// (0x00017610) popup_ai2_link_window

0x8e56,	// (0x00015c6c) bg_popup_sub_pane_cp4_ParamLimits

0x8e56,	// (0x00015c6c) bg_popup_sub_pane_cp4

0xa810,	// (0x00017626) grid_ai2_link_pane_ParamLimits

0xa810,	// (0x00017626) grid_ai2_link_pane

0xa827,	// (0x0001763d) popup_ai2_link_window_g1_ParamLimits

0xa827,	// (0x0001763d) popup_ai2_link_window_g1

0xa833,	// (0x00017649) popup_ai2_link_window_g2_ParamLimits

0xa833,	// (0x00017649) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001c7ea) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001c7ea) popup_ai2_link_window_g

0xa844,	// (0x0001765a) ai2_mp_button_pane

0xa84c,	// (0x00017662) ai2_mp_volume_pane

0x9056,	// (0x00015e6c) bg_popup_sub_pane_cp5_ParamLimits

0x9056,	// (0x00015e6c) bg_popup_sub_pane_cp5

0xa854,	// (0x0001766a) heading_ai2_gene_pane_ParamLimits

0xa854,	// (0x0001766a) heading_ai2_gene_pane

0xa860,	// (0x00017676) list_ai2_gene_pane_ParamLimits

0xa860,	// (0x00017676) list_ai2_gene_pane

0xa8a8,	// (0x000176be) cell_ai2_link_pane_ParamLimits

0xa8a8,	// (0x000176be) cell_ai2_link_pane

0xa8be,	// (0x000176d4) cell_ai2_link_pane_g1

0x3553,	// (0x00010369) grid_highlight_pane_cp7

0x5ee1,	// (0x00012cf7) ai2_mp_volume_pane_g1

0xa991,	// (0x000177a7) ai2_mp_volume_pane_g2

0xa906,	// (0x0001771c) list_ai2_gene_pane_t1

0xa999,	// (0x000177af) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001c803) ai2_mp_volume_pane_g

0x5ee9,	// (0x00012cff) volume_small_pane_cp3

0xa9a1,	// (0x000177b7) aid_size_cell_ai2_button

0xa9a9,	// (0x000177bf) grid_ai2_button_pane

0xa9b2,	// (0x000177c8) cell_ai2_button_pane_ParamLimits

0xa9b2,	// (0x000177c8) cell_ai2_button_pane

0x33da,	// (0x000101f0) cell_ai2_button_pane_g1

0x3553,	// (0x00010369) grid_highlight_pane_cp8

0xa951,	// (0x00017767) ai2_gene_pane_t1_ParamLimits

0xa951,	// (0x00017767) ai2_gene_pane_t1

0x8135,	// (0x00014f4b) aid_height_parent_landscape

0xa205,	// (0x0001701b) aid_height_set_list

0xa216,	// (0x0001702c) aid_size_parent

0xa5db,	// (0x000173f1) aid_size_cell_graphic_pane_ParamLimits

0xa870,	// (0x00017686) popup_ai2_data_window_g1_ParamLimits

0xa870,	// (0x00017686) popup_ai2_data_window_g1

0xa87c,	// (0x00017692) ai2_news_ticker_pane_g1

0xa884,	// (0x0001769a) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001c7ef) ai2_news_ticker_pane_g

0xa88c,	// (0x000176a2) ai2_news_ticker_pane_t1

0xa89a,	// (0x000176b0) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001c7f4) ai2_news_ticker_pane_t

0xa8c7,	// (0x000176dd) heading_ai2_gene_pane_g1

0xa8cf,	// (0x000176e5) heading_ai2_gene_pane_t1_ParamLimits

0xa8cf,	// (0x000176e5) heading_ai2_gene_pane_t1

0xa8e4,	// (0x000176fa) list_highlight_pane_cp6

0xa8ec,	// (0x00017702) ai2_gene_pane_ParamLimits

0xa8ec,	// (0x00017702) ai2_gene_pane

0xa914,	// (0x0001772a) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001c7f9) list_ai2_gene_pane_t

0xa922,	// (0x00017738) list_highlight_pane_cp8_ParamLimits

0xa922,	// (0x00017738) list_highlight_pane_cp8

0xa933,	// (0x00017749) ai2_gene_pane_g1_ParamLimits

0xa933,	// (0x00017749) ai2_gene_pane_g1

0xa945,	// (0x0001775b) ai2_gene_pane_g2_ParamLimits

0xa945,	// (0x0001775b) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001c7fe) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001c7fe) ai2_gene_pane_g

0x3cd4,	// (0x00010aea) scroll_pane_cp12

0x59eb,	// (0x00012801) control_pane_t3_ParamLimits

0x59eb,	// (0x00012801) control_pane_t3

0x80b2,	// (0x00014ec8) status_small_pane_g8_ParamLimits

0x80b2,	// (0x00014ec8) status_small_pane_g8

0x834f,	// (0x00015165) popup_find_window_ParamLimits

0x857a,	// (0x00015390) popup_note_image_window_ParamLimits

0x8ca6,	// (0x00015abc) list_double2_graphic_pane_vc_g1_ParamLimits

0x8ca6,	// (0x00015abc) list_double2_graphic_pane_vc_g1

0x7da8,	// (0x00014bbe) list_double2_graphic_pane_vc_g2_ParamLimits

0x7da8,	// (0x00014bbe) list_double2_graphic_pane_vc_g2

0x8cb2,	// (0x00015ac8) list_double2_graphic_pane_vc_g3_ParamLimits

0x8cb2,	// (0x00015ac8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001c5d5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c5d5) list_double2_graphic_pane_vc_g

0x8cbe,	// (0x00015ad4) list_double2_graphic_pane_vc_t1_ParamLimits

0x8cbe,	// (0x00015ad4) list_double2_graphic_pane_vc_t1

0x7da8,	// (0x00014bbe) list_single_heading_pane_vc_g1_ParamLimits

0x7da8,	// (0x00014bbe) list_single_heading_pane_vc_g1

0x8cb2,	// (0x00015ac8) list_single_heading_pane_vc_g2_ParamLimits

0x8cb2,	// (0x00015ac8) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c5f6) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c5f6) list_single_heading_pane_vc_g

0x8d78,	// (0x00015b8e) list_single_heading_pane_vc_t1_ParamLimits

0x8d78,	// (0x00015b8e) list_single_heading_pane_vc_t1

0x8d90,	// (0x00015ba6) list_single_heading_pane_vc_t2_ParamLimits

0x8d90,	// (0x00015ba6) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001c5fb) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001c5fb) list_single_heading_pane_vc_t

0x8da2,	// (0x00015bb8) list_setting_number_pane_vc_g1_ParamLimits

0x8da2,	// (0x00015bb8) list_setting_number_pane_vc_g1

0x8dae,	// (0x00015bc4) list_setting_number_pane_vc_g2_ParamLimits

0x8dae,	// (0x00015bc4) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c600) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c600) list_setting_number_pane_vc_g

0x8dba,	// (0x00015bd0) list_setting_number_pane_vc_t1_ParamLimits

0x8dba,	// (0x00015bd0) list_setting_number_pane_vc_t1

0x8dce,	// (0x00015be4) list_setting_number_pane_vc_t2_ParamLimits

0x8dce,	// (0x00015be4) list_setting_number_pane_vc_t2

0x8dea,	// (0x00015c00) list_setting_number_pane_vc_t3_ParamLimits

0x8dea,	// (0x00015c00) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001c605) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001c605) list_setting_number_pane_vc_t

0x8e18,	// (0x00015c2e) set_value_pane_vc_ParamLimits

0x8e18,	// (0x00015c2e) set_value_pane_vc

0xa437,	// (0x0001724d) list_double2_graphic_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double2_graphic_pane_vc

0xa437,	// (0x0001724d) list_double2_large_graphic_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double2_large_graphic_pane_vc

0xa437,	// (0x0001724d) list_double2_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double2_pane_vc

0xa437,	// (0x0001724d) list_double_graphic_heading_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_graphic_heading_pane_vc

0xa437,	// (0x0001724d) list_double_graphic_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_graphic_pane_vc

0xa437,	// (0x0001724d) list_double_heading_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_heading_pane_vc

0xa437,	// (0x0001724d) list_double_large_graphic_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_large_graphic_pane_vc

0xa437,	// (0x0001724d) list_double_number_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_number_pane_vc

0xa437,	// (0x0001724d) list_double_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_pane_vc

0xa437,	// (0x0001724d) list_double_time_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_double_time_pane_vc

0xa437,	// (0x0001724d) list_setting_number_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_setting_number_pane_vc

0xa437,	// (0x0001724d) list_setting_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_setting_pane_vc

0xa437,	// (0x0001724d) list_single_graphic_heading_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_single_graphic_heading_pane_vc

0xa437,	// (0x0001724d) list_single_heading_pane_vc_ParamLimits

0xa437,	// (0x0001724d) list_single_heading_pane_vc

0xa44b,	// (0x00017261) list_single_number_heading_pane_vc_ParamLimits

0xa44b,	// (0x00017261) list_single_number_heading_pane_vc

0x8ca6,	// (0x00015abc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8ca6,	// (0x00015abc) list_double_graphic_heading_pane_vc_g1

0xa9e5,	// (0x000177fb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa9e5,	// (0x000177fb) list_double_graphic_heading_pane_vc_g2

0xa9f1,	// (0x00017807) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa9f1,	// (0x00017807) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001c80a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001c80a) list_double_graphic_heading_pane_vc_g

0xa9fd,	// (0x00017813) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa9fd,	// (0x00017813) list_double_graphic_heading_pane_vc_t1

0xaa13,	// (0x00017829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaa13,	// (0x00017829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001c811) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001c811) list_double_graphic_heading_pane_vc_t

0x8da2,	// (0x00015bb8) list_setting_pane_vc_g1_ParamLimits

0x8da2,	// (0x00015bb8) list_setting_pane_vc_g1

0x8dae,	// (0x00015bc4) list_setting_pane_vc_g2_ParamLimits

0x8dae,	// (0x00015bc4) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c600) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c600) list_setting_pane_vc_g

0xac59,	// (0x00017a6f) list_setting_pane_vc_t1_ParamLimits

0xac59,	// (0x00017a6f) list_setting_pane_vc_t1

0xac75,	// (0x00017a8b) list_setting_pane_vc_t2_ParamLimits

0xac75,	// (0x00017a8b) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001c83f) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c83f) list_setting_pane_vc_t

0x8e18,	// (0x00015c2e) set_value_pane_cp_vc_ParamLimits

0x8e18,	// (0x00015c2e) set_value_pane_cp_vc

0x7da8,	// (0x00014bbe) list_single_number_heading_pane_vc_g1_ParamLimits

0x7da8,	// (0x00014bbe) list_single_number_heading_pane_vc_g1

0x8cb2,	// (0x00015ac8) list_single_number_heading_pane_vc_g2_ParamLimits

0x8cb2,	// (0x00015ac8) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c5f6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c5f6) list_single_number_heading_pane_vc_g

0x8d78,	// (0x00015b8e) list_single_number_heading_pane_vc_t1_ParamLimits

0x8d78,	// (0x00015b8e) list_single_number_heading_pane_vc_t1

0xac91,	// (0x00017aa7) list_single_number_heading_pane_vc_t2_ParamLimits

0xac91,	// (0x00017aa7) list_single_number_heading_pane_vc_t2

0xaca3,	// (0x00017ab9) list_single_number_heading_pane_vc_t3_ParamLimits

0xaca3,	// (0x00017ab9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001c844) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c844) list_single_number_heading_pane_vc_t

0x8ca6,	// (0x00015abc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8ca6,	// (0x00015abc) list_single_graphic_heading_pane_vc_g1

0x7da8,	// (0x00014bbe) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7da8,	// (0x00014bbe) list_single_graphic_heading_pane_vc_g4

0x8cb2,	// (0x00015ac8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8cb2,	// (0x00015ac8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001c5d5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c5d5) list_single_graphic_heading_pane_vc_g

0x8d78,	// (0x00015b8e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8d78,	// (0x00015b8e) list_single_graphic_heading_pane_vc_t1

0xacb5,	// (0x00017acb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xacb5,	// (0x00017acb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001c84b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001c84b) list_single_graphic_heading_pane_vc_t

0x7da8,	// (0x00014bbe) list_double2_pane_vc_g1_ParamLimits

0x7da8,	// (0x00014bbe) list_double2_pane_vc_g1

0x8cb2,	// (0x00015ac8) list_double2_pane_vc_g2_ParamLimits

0x8cb2,	// (0x00015ac8) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c5f6) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c5f6) list_double2_pane_vc_g

0xacc7,	// (0x00017add) list_double2_pane_vc_t1_ParamLimits

0xacc7,	// (0x00017add) list_double2_pane_vc_t1

0xacdd,	// (0x00017af3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xacdd,	// (0x00017af3) list_double2_large_graphic_pane_vc_g1

0x7da8,	// (0x00014bbe) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7da8,	// (0x00014bbe) list_double2_large_graphic_pane_vc_g2

0x8cb2,	// (0x00015ac8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8cb2,	// (0x00015ac8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001c850) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c850) list_double2_large_graphic_pane_vc_g

0xace9,	// (0x00017aff) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xace9,	// (0x00017aff) list_double2_large_graphic_pane_vc_t1

0xacff,	// (0x00017b15) list_double_time_pane_vc_g1_ParamLimits

0xacff,	// (0x00017b15) list_double_time_pane_vc_g1

0xad0b,	// (0x00017b21) list_double_time_pane_vc_g2_ParamLimits

0xad0b,	// (0x00017b21) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001c857) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001c857) list_double_time_pane_vc_g

0xad17,	// (0x00017b2d) list_double_time_pane_vc_t1_ParamLimits

0xad17,	// (0x00017b2d) list_double_time_pane_vc_t1

0xad47,	// (0x00017b5d) list_double_time_pane_vc_t2_ParamLimits

0xad47,	// (0x00017b5d) list_double_time_pane_vc_t2

0xad70,	// (0x00017b86) list_double_time_pane_vc_t3_ParamLimits

0xad70,	// (0x00017b86) list_double_time_pane_vc_t3

0xad82,	// (0x00017b98) list_double_time_pane_vc_t4_ParamLimits

0xad82,	// (0x00017b98) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001c85c) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001c85c) list_double_time_pane_vc_t

0x7da8,	// (0x00014bbe) list_double_pane_vc_g1_ParamLimits

0x7da8,	// (0x00014bbe) list_double_pane_vc_g1

0x8cb2,	// (0x00015ac8) list_double_pane_vc_g2_ParamLimits

0x8cb2,	// (0x00015ac8) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c5f6) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c5f6) list_double_pane_vc_g

0xada7,	// (0x00017bbd) list_double_pane_vc_t1_ParamLimits

0xada7,	// (0x00017bbd) list_double_pane_vc_t1

0xadbb,	// (0x00017bd1) list_double_pane_vc_t2_ParamLimits

0xadbb,	// (0x00017bd1) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001c865) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001c865) list_double_pane_vc_t

0x7da8,	// (0x00014bbe) list_double_number_pane_vc_g1_ParamLimits

0x7da8,	// (0x00014bbe) list_double_number_pane_vc_g1

0x8cb2,	// (0x00015ac8) list_double_number_pane_vc_g2_ParamLimits

0x8cb2,	// (0x00015ac8) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c5f6) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c5f6) list_double_number_pane_vc_g

0xadd1,	// (0x00017be7) list_double_number_pane_vc_t1_ParamLimits

0xadd1,	// (0x00017be7) list_double_number_pane_vc_t1

0xade5,	// (0x00017bfb) list_double_number_pane_vc_t2_ParamLimits

0xade5,	// (0x00017bfb) list_double_number_pane_vc_t2

0xadf9,	// (0x00017c0f) list_double_number_pane_vc_t3_ParamLimits

0xadf9,	// (0x00017c0f) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001c86a) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001c86a) list_double_number_pane_vc_t

0xae0f,	// (0x00017c25) list_double_large_graphic_pane_vc_g1_ParamLimits

0xae0f,	// (0x00017c25) list_double_large_graphic_pane_vc_g1

0xae20,	// (0x00017c36) list_double_large_graphic_pane_vc_g2_ParamLimits

0xae20,	// (0x00017c36) list_double_large_graphic_pane_vc_g2

0x8cb2,	// (0x00015ac8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8cb2,	// (0x00015ac8) list_double_large_graphic_pane_vc_g3

0xae2f,	// (0x00017c45) list_double_large_graphic_pane_vc_g4_ParamLimits

0xae2f,	// (0x00017c45) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001c871) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001c871) list_double_large_graphic_pane_vc_g

0xae3b,	// (0x00017c51) list_double_large_graphic_pane_vc_t1_ParamLimits

0xae3b,	// (0x00017c51) list_double_large_graphic_pane_vc_t1

0xae54,	// (0x00017c6a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xae54,	// (0x00017c6a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001c87a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001c87a) list_double_large_graphic_pane_vc_t

0xa9e5,	// (0x000177fb) list_double_heading_pane_vc_g1_ParamLimits

0xa9e5,	// (0x000177fb) list_double_heading_pane_vc_g1

0xa9f1,	// (0x00017807) list_double_heading_pane_vc_g2_ParamLimits

0xa9f1,	// (0x00017807) list_double_heading_pane_vc_g2

0x0001,

0xfa69,	// (0x0001c87f) list_double_heading_pane_vc_g_ParamLimits

0xfa69,	// (0x0001c87f) list_double_heading_pane_vc_g

0xae6b,	// (0x00017c81) list_double_heading_pane_vc_t1_ParamLimits

0xae6b,	// (0x00017c81) list_double_heading_pane_vc_t1

0x8d78,	// (0x00015b8e) list_double_heading_pane_vc_t2_ParamLimits

0x8d78,	// (0x00015b8e) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001c884) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001c884) list_double_heading_pane_vc_t

0x8ca6,	// (0x00015abc) list_double_graphic_pane_vc_g1_ParamLimits

0x8ca6,	// (0x00015abc) list_double_graphic_pane_vc_g1

0xae7d,	// (0x00017c93) list_double_graphic_pane_vc_g2_ParamLimits

0xae7d,	// (0x00017c93) list_double_graphic_pane_vc_g2

0xae8c,	// (0x00017ca2) list_double_graphic_pane_vc_g3_ParamLimits

0xae8c,	// (0x00017ca2) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0001c889) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0001c889) list_double_graphic_pane_vc_g

0xae98,	// (0x00017cae) list_double_graphic_pane_vc_t1_ParamLimits

0xae98,	// (0x00017cae) list_double_graphic_pane_vc_t1

0xaeac,	// (0x00017cc2) list_double_graphic_pane_vc_t2_ParamLimits

0xaeac,	// (0x00017cc2) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001c890) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001c890) list_double_graphic_pane_vc_t

0x4fd6,	// (0x00011dec) aid_size_cell_fastswap

0x4fde,	// (0x00011df4) aid_size_cell_touch_ParamLimits

0x4fde,	// (0x00011df4) aid_size_cell_touch

0x5249,	// (0x0001205f) popup_fast_swap_wide_window_ParamLimits

0x5249,	// (0x0001205f) popup_fast_swap_wide_window

0x535f,	// (0x00012175) touch_pane_ParamLimits

0x535f,	// (0x00012175) touch_pane

0x3d59,	// (0x00010b6f) button_value_adjust_pane_cp2

0x3d61,	// (0x00010b77) button_value_adjust_pane_cp4

0x3d69,	// (0x00010b7f) form_field_data_pane_cp2

0x754e,	// (0x00014364) form_field_data_wide_pane_cp2

0x437d,	// (0x00011193) bg_scroll_pane_ParamLimits

0x55f3,	// (0x00012409) scroll_handle_pane_ParamLimits

0x5607,	// (0x0001241d) scroll_sc2_down_pane_ParamLimits

0x5607,	// (0x0001241d) scroll_sc2_down_pane

0x43d7,	// (0x000111ed) scroll_sc2_up_pane_ParamLimits

0x43d7,	// (0x000111ed) scroll_sc2_up_pane

0xb386,	// (0x0001819c) grid_wheel_folder_pane_g1_ParamLimits

0xb386,	// (0x0001819c) grid_wheel_folder_pane_g1

0x57d1,	// (0x000125e7) clock_nsta_pane_cp2_ParamLimits

0x57d1,	// (0x000125e7) clock_nsta_pane_cp2

0x76eb,	// (0x00014501) listscroll_midp_pane_ParamLimits

0x7e3f,	// (0x00014c55) midp_canvas_pane

0x812d,	// (0x00014f43) nsta_clock_indic_pane

0x818b,	// (0x00014fa1) listscroll_form_pane_vc

0x81a7,	// (0x00014fbd) listscroll_set_pane_vc_ParamLimits

0x81a7,	// (0x00014fbd) listscroll_set_pane_vc

0x88cb,	// (0x000156e1) clock_nsta_pane

0x8948,	// (0x0001575e) indicator_nsta_pane

0x8c40,	// (0x00015a56) bg_popup_sub_pane_cp2_ParamLimits

0x8c54,	// (0x00015a6a) find_pane_cp2_ParamLimits

0x8c54,	// (0x00015a6a) find_pane_cp2

0x8c6a,	// (0x00015a80) grid_toobar_pane_ParamLimits

0x8e2a,	// (0x00015c40) list_form_gen_pane_vc_ParamLimits

0x8e2a,	// (0x00015c40) list_form_gen_pane_vc

0x8e40,	// (0x00015c56) scroll_pane_cp8_vc_ParamLimits

0x8e40,	// (0x00015c56) scroll_pane_cp8_vc

0x8ebc,	// (0x00015cd2) data_form_wide_pane_vc_ParamLimits

0x8ebc,	// (0x00015cd2) data_form_wide_pane_vc

0x8ec8,	// (0x00015cde) form_field_data_wide_pane_vc_g1

0x8ed0,	// (0x00015ce6) form_field_data_wide_pane_vc_t1_ParamLimits

0x8ed0,	// (0x00015ce6) form_field_data_wide_pane_vc_t1

0x3dc4,	// (0x00010bda) input_focus_pane_cp6_vc_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_cp6_vc

0x9201,	// (0x00016017) list_midp_pane_ParamLimits

0x920d,	// (0x00016023) scroll_pane_cp16_ParamLimits

0x920d,	// (0x00016023) scroll_pane_cp16

0x925b,	// (0x00016071) button_value_adjust_pane_ParamLimits

0x925b,	// (0x00016071) button_value_adjust_pane

0xa228,	// (0x0001703e) button_value_adjust_pane_cp6_ParamLimits

0xa228,	// (0x0001703e) button_value_adjust_pane_cp6

0xa376,	// (0x0001718c) settings_code_pane_cp_ParamLimits

0xa376,	// (0x0001718c) settings_code_pane_cp

0x33da,	// (0x000101f0) cell_touch_pane_g1

0x33da,	// (0x000101f0) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001c51a) cell_touch_pane_g

0xa9c4,	// (0x000177da) cell_touch_pane_cp_ParamLimits

0xa9c4,	// (0x000177da) cell_touch_pane_cp

0xa9d4,	// (0x000177ea) cell_touch_pane_ParamLimits

0xa9d4,	// (0x000177ea) cell_touch_pane

0x33da,	// (0x000101f0) scroll_sc2_down_pane_g1

0x33da,	// (0x000101f0) scroll_sc2_up_pane_g1

0x3553,	// (0x00010369) bg_set_opt_pane_cp4_vc

0xaa31,	// (0x00017847) list_set_graphic_pane_vc_g1_ParamLimits

0xaa31,	// (0x00017847) list_set_graphic_pane_vc_g1

0x3e31,	// (0x00010c47) list_set_graphic_pane_vc_g2_ParamLimits

0x3e31,	// (0x00010c47) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001c816) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001c816) list_set_graphic_pane_vc_g

0xaa3d,	// (0x00017853) text_primary_small_cp13_vc_ParamLimits

0xaa3d,	// (0x00017853) text_primary_small_cp13_vc

0xaa55,	// (0x0001786b) list_set_graphic_pane_vc_ParamLimits

0xaa55,	// (0x0001786b) list_set_graphic_pane_vc

0x3553,	// (0x00010369) input_focus_pane_cp2_vc

0x33da,	// (0x000101f0) setting_code_pane_vc_g1

0x3726,	// (0x0001053c) setting_code_pane_vc_t1

0xaa6a,	// (0x00017880) set_text_pane_vc_t1_ParamLimits

0xaa6a,	// (0x00017880) set_text_pane_vc_t1

0x3553,	// (0x00010369) input_focus_pane_cp1_vc

0xaa88,	// (0x0001789e) list_set_text_pane_vc

0x33da,	// (0x000101f0) setting_text_pane_vc_g1

0x3553,	// (0x00010369) bg_set_opt_pane_cp2_vc

0x36f5,	// (0x0001050b) setting_slider_graphic_pane_vc_g1

0xaa92,	// (0x000178a8) setting_slider_graphic_pane_vc_t1

0xaaa4,	// (0x000178ba) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001c81b) setting_slider_graphic_pane_vc_t

0xaab6,	// (0x000178cc) slider_set_pane_cp_vc

0xaac0,	// (0x000178d6) slider_set_pane_vc_g1

0xaac9,	// (0x000178df) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001c820) slider_set_pane_vc_g

0x3eb1,	// (0x00010cc7) set_opt_bg_pane_g1_copy1

0x3eb9,	// (0x00010ccf) set_opt_bg_pane_g2_copy1

0xaaf5,	// (0x0001790b) set_opt_bg_pane_g3_copy1

0x3ec9,	// (0x00010cdf) set_opt_bg_pane_g4_copy1

0x3ed1,	// (0x00010ce7) set_opt_bg_pane_g5_copy1

0x3ed9,	// (0x00010cef) set_opt_bg_pane_g6_copy1

0xaaff,	// (0x00017915) set_opt_bg_pane_g7_copy1

0xab09,	// (0x0001791f) set_opt_bg_pane_g8_copy1

0xab13,	// (0x00017929) set_opt_bg_pane_g9_copy1

0x3553,	// (0x00010369) bg_set_opt_pane_cp_vc

0xab1d,	// (0x00017933) setting_slider_pane_vc_t1

0xab2c,	// (0x00017942) setting_slider_pane_vc_t2

0xab3e,	// (0x00017954) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001c82f) setting_slider_pane_vc_t

0xab50,	// (0x00017966) slider_set_pane_vc

0x5be1,	// (0x000129f7) volume_set_pane_vc_g1

0x5bea,	// (0x00012a00) volume_set_pane_vc_g2

0x5bf3,	// (0x00012a09) volume_set_pane_vc_g3

0x5bfc,	// (0x00012a12) volume_set_pane_vc_g4

0x5c05,	// (0x00012a1b) volume_set_pane_vc_g5

0x5c0e,	// (0x00012a24) volume_set_pane_vc_g6

0x5c17,	// (0x00012a2d) volume_set_pane_vc_g7

0x5c20,	// (0x00012a36) volume_set_pane_vc_g8

0x5c29,	// (0x00012a3f) volume_set_pane_vc_g9

0x5c32,	// (0x00012a48) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001c6cd) volume_set_pane_vc_g

0xab5a,	// (0x00017970) volume_set_pane_vc

0xab64,	// (0x0001797a) button_value_adjust_pane_cp1_vc

0xab6e,	// (0x00017984) list_highlight_pane_cp2_vc

0xab77,	// (0x0001798d) list_set_pane_vc_ParamLimits

0xab77,	// (0x0001798d) list_set_pane_vc

0xabe7,	// (0x000179fd) main_pane_set_vc_t1_ParamLimits

0xabe7,	// (0x000179fd) main_pane_set_vc_t1

0xabfc,	// (0x00017a12) main_pane_set_vc_t2_ParamLimits

0xabfc,	// (0x00017a12) main_pane_set_vc_t2

0xac0e,	// (0x00017a24) main_pane_set_vc_t3_ParamLimits

0xac0e,	// (0x00017a24) main_pane_set_vc_t3

0xac22,	// (0x00017a38) main_pane_set_vc_t4_ParamLimits

0xac22,	// (0x00017a38) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001c836) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001c836) main_pane_set_vc_t

0xac36,	// (0x00017a4c) setting_code_pane_vc_ParamLimits

0xac36,	// (0x00017a4c) setting_code_pane_vc

0xac47,	// (0x00017a5d) setting_slider_graphic_pane_vc

0xac47,	// (0x00017a5d) setting_slider_pane_vc

0xac47,	// (0x00017a5d) setting_text_pane_vc

0xac47,	// (0x00017a5d) setting_volume_pane_vc

0xac51,	// (0x00017a67) scroll_pane_cp121_vc

0x3d47,	// (0x00010b5d) set_content_pane_vc

0xaec2,	// (0x00017cd8) button_value_adjust_pane_g1

0xaecb,	// (0x00017ce1) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001c895) button_value_adjust_pane_g

0xaed4,	// (0x00017cea) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaed4,	// (0x00017cea) form_field_slider_wide_pane_vc_t1

0xaee6,	// (0x00017cfc) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaee6,	// (0x00017cfc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001c89a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001c89a) form_field_slider_wide_pane_vc_t

0x366e,	// (0x00010484) input_focus_pane_cp10_vc_ParamLimits

0x366e,	// (0x00010484) input_focus_pane_cp10_vc

0xaf12,	// (0x00017d28) slider_cont_pane_cp1_vc_ParamLimits

0xaf12,	// (0x00017d28) slider_cont_pane_cp1_vc

0xaf24,	// (0x00017d3a) slider_form_pane_g1_cp2

0xaac9,	// (0x000178df) slider_form_pane_g2_cp2

0xaf51,	// (0x00017d67) form_field_slider_pane_vc_t3

0xaf5f,	// (0x00017d75) form_field_slider_pane_vc_t4

0xaf6d,	// (0x00017d83) slider_form_pane_vc_ParamLimits

0xaf6d,	// (0x00017d83) slider_form_pane_vc

0xaf7a,	// (0x00017d90) form_field_slider_pane_vc_t1_ParamLimits

0xaf7a,	// (0x00017d90) form_field_slider_pane_vc_t1

0xaee6,	// (0x00017cfc) form_field_slider_pane_vc_t2_ParamLimits

0xaee6,	// (0x00017cfc) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001c8ac) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001c8ac) form_field_slider_pane_vc_t

0x366e,	// (0x00010484) input_focus_pane_cp9_vc_ParamLimits

0x366e,	// (0x00010484) input_focus_pane_cp9_vc

0xaf90,	// (0x00017da6) slider_cont_pane_vc_ParamLimits

0xaf90,	// (0x00017da6) slider_cont_pane_vc

0xafa4,	// (0x00017dba) list_form_graphic_pane_cp_vc_ParamLimits

0xafa4,	// (0x00017dba) list_form_graphic_pane_cp_vc

0x8ec8,	// (0x00015cde) form_field_popup_wide_pane_vc_g1

0xafb9,	// (0x00017dcf) form_field_popup_wide_pane_vc_t1_ParamLimits

0xafb9,	// (0x00017dcf) form_field_popup_wide_pane_vc_t1

0x3dc4,	// (0x00010bda) input_focus_pane_cp8_vc_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_cp8_vc

0xaffe,	// (0x00017e14) list_form_wide_pane_vc_ParamLimits

0xaffe,	// (0x00017e14) list_form_wide_pane_vc

0xb00a,	// (0x00017e20) list_form_graphic_pane_vc_g1

0xb012,	// (0x00017e28) list_form_graphic_pane_vc_t1_ParamLimits

0xb012,	// (0x00017e28) list_form_graphic_pane_vc_t1

0x3686,	// (0x0001049c) list_highlight_pane_cp5_vc_ParamLimits

0x3686,	// (0x0001049c) list_highlight_pane_cp5_vc

0xb02e,	// (0x00017e44) list_form_graphic_pane_vc_ParamLimits

0xb02e,	// (0x00017e44) list_form_graphic_pane_vc

0x8ec8,	// (0x00015cde) form_field_popup_pane_vc_g1

0xb044,	// (0x00017e5a) form_field_popup_pane_vc_t1_ParamLimits

0xb044,	// (0x00017e5a) form_field_popup_pane_vc_t1

0x3dc4,	// (0x00010bda) input_focus_pane_cp7_vc_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_cp7_vc

0xb05b,	// (0x00017e71) list_form_pane_vc_ParamLimits

0xb05b,	// (0x00017e71) list_form_pane_vc

0xb067,	// (0x00017e7d) data_form_pane_vc_t1_ParamLimits

0xb067,	// (0x00017e7d) data_form_pane_vc_t1

0x3eb1,	// (0x00010cc7) input_focus_pane_vc_g1

0x3eb9,	// (0x00010ccf) input_focus_pane_vc_g2

0x3ec1,	// (0x00010cd7) input_focus_pane_vc_g3

0x3ec9,	// (0x00010cdf) input_focus_pane_vc_g4

0x3ed1,	// (0x00010ce7) input_focus_pane_vc_g5

0x3ed9,	// (0x00010cef) input_focus_pane_vc_g6

0x3ee1,	// (0x00010cf7) input_focus_pane_vc_g7

0x3ee9,	// (0x00010cff) input_focus_pane_vc_g8

0x3ef1,	// (0x00010d07) input_focus_pane_vc_g9

0x33da,	// (0x000101f0) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001c4a3) input_focus_pane_vc_g

0x8ebc,	// (0x00015cd2) data_form_pane_vc_ParamLimits

0x8ebc,	// (0x00015cd2) data_form_pane_vc

0x8ec8,	// (0x00015cde) form_field_data_pane_vc_g1

0xb084,	// (0x00017e9a) form_field_data_pane_vc_t1_ParamLimits

0xb084,	// (0x00017e9a) form_field_data_pane_vc_t1

0x3dc4,	// (0x00010bda) input_focus_pane_vc_ParamLimits

0x3dc4,	// (0x00010bda) input_focus_pane_vc

0xb09e,	// (0x00017eb4) button_value_adjust_pane_cp3_vc

0xb0a6,	// (0x00017ebc) button_value_adjust_pane_cp5_vc

0xb0ae,	// (0x00017ec4) form_field_data_pane_vc_ParamLimits

0xb0ae,	// (0x00017ec4) form_field_data_pane_vc

0xb0c9,	// (0x00017edf) form_field_data_pane_vc_cp2

0xb0d1,	// (0x00017ee7) form_field_data_wide_pane_vc_ParamLimits

0xb0d1,	// (0x00017ee7) form_field_data_wide_pane_vc

0xb0eb,	// (0x00017f01) form_field_data_wide_pane_vc_cp2

0xb0f3,	// (0x00017f09) form_field_popup_pane_vc_ParamLimits

0xb0f3,	// (0x00017f09) form_field_popup_pane_vc

0xb10e,	// (0x00017f24) form_field_popup_wide_pane_vc_ParamLimits

0xb10e,	// (0x00017f24) form_field_popup_wide_pane_vc

0xb128,	// (0x00017f3e) form_field_slider_pane_vc_ParamLimits

0xb128,	// (0x00017f3e) form_field_slider_pane_vc

0xb13b,	// (0x00017f51) form_field_slider_wide_pane_vc_ParamLimits

0xb13b,	// (0x00017f51) form_field_slider_wide_pane_vc

0xb14e,	// (0x00017f64) grid_touch_1_pane_ParamLimits

0xb14e,	// (0x00017f64) grid_touch_1_pane

0xb15a,	// (0x00017f70) grid_touch_2_pane_ParamLimits

0xb15a,	// (0x00017f70) grid_touch_2_pane

0x80f8,	// (0x00014f0e) touch_pane_g1_ParamLimits

0x80f8,	// (0x00014f0e) touch_pane_g1

0xb174,	// (0x00017f8a) cell_app_pane_cp_wide_ParamLimits

0xb174,	// (0x00017f8a) cell_app_pane_cp_wide

0xb185,	// (0x00017f9b) grid_popup_fast_wide_pane_ParamLimits

0xb185,	// (0x00017f9b) grid_popup_fast_wide_pane

0xb199,	// (0x00017faf) scroll_pane_cp19_ParamLimits

0xb199,	// (0x00017faf) scroll_pane_cp19

0x3553,	// (0x00010369) bg_popup_window_pane_cp20

0xb1ad,	// (0x00017fc3) listscroll_popup_fast_wide_pane

0x3686,	// (0x0001049c) grid_indicator_nsta_pane

0xb1b5,	// (0x00017fcb) clock_nsta_pane_g1

0xb1be,	// (0x00017fd4) clock_nsta_pane_t1

0xb1da,	// (0x00017ff0) cell_indicator_nsta_pane_ParamLimits

0xb1da,	// (0x00017ff0) cell_indicator_nsta_pane

0xb212,	// (0x00018028) cell_indicator_nsta_pane_g1

0xb220,	// (0x00018036) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001c8bd) cell_indicator_nsta_pane_g

0xb236,	// (0x0001804c) clock_nsta_pane_cp

0xb23e,	// (0x00018054) indicator_nsta_pane_cp

0xb247,	// (0x0001805d) nsta_clock_indic_pane_g1

0x3765,	// (0x0001057b) grid_indicator_pane

0x44c9,	// (0x000112df) scroll_pane_cp29

0x571d,	// (0x00012533) indicator_nsta_pane_cp2_ParamLimits

0x571d,	// (0x00012533) indicator_nsta_pane_cp2

0x3686,	// (0x0001049c) main_apps_wheel_pane

0x90de,	// (0x00015ef4) form_midp_field_text_pane_ParamLimits

0x922d,	// (0x00016043) scroll_bar_cp050_ParamLimits

0xb2b0,	// (0x000180c6) cell_indicator_pane_ParamLimits

0xb2b0,	// (0x000180c6) cell_indicator_pane

0xb2c8,	// (0x000180de) cell_indicator_pane_g1

0xb2d2,	// (0x000180e8) grid_wheel_folder_pane_ParamLimits

0xb2d2,	// (0x000180e8) grid_wheel_folder_pane

0xb2e6,	// (0x000180fc) list_wheel_apps_pane_ParamLimits

0xb2e6,	// (0x000180fc) list_wheel_apps_pane

0xb2f9,	// (0x0001810f) main_apps_wheel_pane_g1_ParamLimits

0xb2f9,	// (0x0001810f) main_apps_wheel_pane_g1

0xb315,	// (0x0001812b) main_apps_wheel_pane_g2_ParamLimits

0xb315,	// (0x0001812b) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001c8d9) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001c8d9) main_apps_wheel_pane_g

0xb331,	// (0x00018147) main_apps_wheel_pane_t1_ParamLimits

0xb331,	// (0x00018147) main_apps_wheel_pane_t1

0xb35a,	// (0x00018170) list_wheel_apps_pane_g1

0xb362,	// (0x00018178) list_wheel_apps_pane_g2

0xb36a,	// (0x00018180) list_wheel_apps_pane_g3

0xb372,	// (0x00018188) list_wheel_apps_pane_g4

0xb37c,	// (0x00018192) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001c8de) list_wheel_apps_pane_g

0x7cb3,	// (0x00014ac9) navi_icon_text_pane

0x87f8,	// (0x0001560e) aid_fill_nsta

0xb39d,	// (0x000181b3) navi_icon_text_pane_g1

0xb3a9,	// (0x000181bf) navi_icon_text_pane_t1

0x7b49,	// (0x0001495f) list_set_graphic_pane_t1_ParamLimits

0x7b49,	// (0x0001495f) list_set_graphic_pane_t1

0x997e,	// (0x00016794) popup_midp_note_alarm_window_t6_ParamLimits

0x997e,	// (0x00016794) popup_midp_note_alarm_window_t6

0x9990,	// (0x000167a6) popup_midp_note_alarm_window_t7_ParamLimits

0x9990,	// (0x000167a6) popup_midp_note_alarm_window_t7

0x99a2,	// (0x000167b8) popup_midp_note_alarm_window_t8_ParamLimits

0x99a2,	// (0x000167b8) popup_midp_note_alarm_window_t8

0x99b4,	// (0x000167ca) popup_midp_note_alarm_window_t9_ParamLimits

0x99b4,	// (0x000167ca) popup_midp_note_alarm_window_t9

0x99c6,	// (0x000167dc) popup_midp_note_alarm_window_t10_ParamLimits

0x99c6,	// (0x000167dc) popup_midp_note_alarm_window_t10

0x99d8,	// (0x000167ee) popup_midp_note_alarm_window_t11_ParamLimits

0x99d8,	// (0x000167ee) popup_midp_note_alarm_window_t11

0x99ea,	// (0x00016800) scroll_pane_cp17_ParamLimits

0x99ea,	// (0x00016800) scroll_pane_cp17

0x5be1,	// (0x000129f7) volume_small_pane_cp_g1

0x5ef2,	// (0x00012d08) volume_small_pane_cp_g2

0x5efb,	// (0x00012d11) volume_small_pane_cp_g3

0x5f04,	// (0x00012d1a) volume_small_pane_cp_g4

0x5f0d,	// (0x00012d23) volume_small_pane_cp_g5

0x5f16,	// (0x00012d2c) volume_small_pane_cp_g6

0x5f1f,	// (0x00012d35) volume_small_pane_cp_g7

0x5f28,	// (0x00012d3e) volume_small_pane_cp_g8

0x5f31,	// (0x00012d47) volume_small_pane_cp_g9

0x5f3a,	// (0x00012d50) volume_small_pane_cp_g10

0x7f08,	// (0x00014d1e) midp_ticker_pane_g1_ParamLimits

0x7f14,	// (0x00014d2a) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001c56f) midp_ticker_pane_g_ParamLimits

0x7f20,	// (0x00014d36) midp_ticker_pane_t1_ParamLimits

0x880e,	// (0x00015624) aid_fill_nsta_2

0x9219,	// (0x0001602f) list_form2_midp_pane

0xa3f2,	// (0x00017208) midp_editing_number_pane_ParamLimits

0xa401,	// (0x00017217) midp_ticker_pane_ParamLimits

0xb3bb,	// (0x000181d1) form2_midp_field_pane

0xb3df,	// (0x000181f5) scroll_pane_cp51

0xb3ff,	// (0x00018215) form2_midp_button_pane_ParamLimits

0xb3ff,	// (0x00018215) form2_midp_button_pane

0xb411,	// (0x00018227) form2_midp_content_pane_ParamLimits

0xb411,	// (0x00018227) form2_midp_content_pane

0xb42b,	// (0x00018241) form2_midp_field_choice_group_pane

0xb433,	// (0x00018249) form2_midp_field_pane_g1

0xb43b,	// (0x00018251) form2_midp_field_pane_g2

0xb443,	// (0x00018259) form2_midp_field_pane_g3

0xb44b,	// (0x00018261) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001c903) form2_midp_field_pane_g

0xb453,	// (0x00018269) form2_midp_gauge_slider_pane

0xb45b,	// (0x00018271) form2_midp_gauge_wait_pane

0xb463,	// (0x00018279) form2_midp_image_pane_ParamLimits

0xb463,	// (0x00018279) form2_midp_image_pane

0xb47e,	// (0x00018294) form2_midp_label_pane_ParamLimits

0xb47e,	// (0x00018294) form2_midp_label_pane

0xb49d,	// (0x000182b3) form2_midp_label_pane_cp_ParamLimits

0xb49d,	// (0x000182b3) form2_midp_label_pane_cp

0xb4be,	// (0x000182d4) form2_midp_string_pane_ParamLimits

0xb4be,	// (0x000182d4) form2_midp_string_pane

0xb4d0,	// (0x000182e6) form2_midp_text_pane_ParamLimits

0xb4d0,	// (0x000182e6) form2_midp_text_pane

0xb4f1,	// (0x00018307) form2_midp_time_pane

0xb501,	// (0x00018317) input_focus_pane_cp51_ParamLimits

0xb501,	// (0x00018317) input_focus_pane_cp51

0xb519,	// (0x0001832f) form2_midp_label_pane_t1_ParamLimits

0xb519,	// (0x0001832f) form2_midp_label_pane_t1

0xb55f,	// (0x00018375) form2_mdip_text_pane_t1_ParamLimits

0xb55f,	// (0x00018375) form2_mdip_text_pane_t1

0xb581,	// (0x00018397) form2_midp_time_pane_t1

0xb59c,	// (0x000183b2) form2_midp_gauge_slider_pane_t1

0xb5ae,	// (0x000183c4) form2_midp_gauge_slider_pane_t2

0xb5c0,	// (0x000183d6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001c90c) form2_midp_gauge_slider_pane_t

0xb5d2,	// (0x000183e8) form2_midp_slider_pane

0xb5de,	// (0x000183f4) form2_midp_gauge_wait_pane_t1

0xb5ec,	// (0x00018402) form2_midp_wait_pane_ParamLimits

0xb5ec,	// (0x00018402) form2_midp_wait_pane

0x8f0f,	// (0x00015d25) list_single_2graphic_pane_cp4_ParamLimits

0x8f0f,	// (0x00015d25) list_single_2graphic_pane_cp4

0xb617,	// (0x0001842d) list_single_midp_graphic_pane_cp_ParamLimits

0xb617,	// (0x0001842d) list_single_midp_graphic_pane_cp

0x3553,	// (0x00010369) list_highlight_pane_cp20

0xb63b,	// (0x00018451) list_single_2graphic_pane_g1_cp4

0xa8c7,	// (0x000176dd) list_single_2graphic_pane_g2_cp4

0xb643,	// (0x00018459) list_single_2graphic_pane_t1_cp4

0x3686,	// (0x0001049c) list_highlight_pane_cp21

0xb652,	// (0x00018468) list_single_midp_graphic_pane_g4_cp

0xb661,	// (0x00018477) list_single_midp_graphic_pane_t1_cp

0xb676,	// (0x0001848c) form2_mdip_string_pane_t1_ParamLimits

0xb676,	// (0x0001848c) form2_mdip_string_pane_t1

0x3553,	// (0x00010369) bg_wml_button_pane_cp2

0x33da,	// (0x000101f0) form2_midp_image_pane_g1

0x3cf1,	// (0x00010b07) list_double_large_graphic_pane_g5_ParamLimits

0x3cf1,	// (0x00010b07) list_double_large_graphic_pane_g5

0x76eb,	// (0x00014501) midp_form_pane_ParamLimits

0x3686,	// (0x0001049c) main_apps_wheel_pane_ParamLimits

0x85a2,	// (0x000153b8) popup_preview_window_ParamLimits

0x85a2,	// (0x000153b8) popup_preview_window

0x8789,	// (0x0001559f) popup_touch_info_window_ParamLimits

0x8789,	// (0x0001559f) popup_touch_info_window

0x87ab,	// (0x000155c1) popup_touch_menu_window_ParamLimits

0x87ab,	// (0x000155c1) popup_touch_menu_window

0x33d0,	// (0x000101e6) bg_popup_sub_pane_cp6

0xb71b,	// (0x00018531) list_touch_menu_pane

0xb723,	// (0x00018539) list_single_touch_menu_pane_ParamLimits

0xb723,	// (0x00018539) list_single_touch_menu_pane

0xb73b,	// (0x00018551) list_single_touch_menu_pane_t1

0x3686,	// (0x0001049c) bg_popup_sub_pane_cp7_ParamLimits

0x3686,	// (0x0001049c) bg_popup_sub_pane_cp7

0xb749,	// (0x0001855f) heading_sub_pane

0xb751,	// (0x00018567) list_touch_info_pane_ParamLimits

0xb751,	// (0x00018567) list_touch_info_pane

0xb760,	// (0x00018576) list_single_touch_info_pane_ParamLimits

0xb760,	// (0x00018576) list_single_touch_info_pane

0xb772,	// (0x00018588) list_single_touch_info_pane_t1

0xb780,	// (0x00018596) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001c91a) list_single_touch_info_pane_t

0x7e37,	// (0x00014c4d) bg_popup_heading_pane_cp

0xb78e,	// (0x000185a4) heading_sub_pane_t1

0x8e56,	// (0x00015c6c) bg_popup_preview_window_pane_cp_ParamLimits

0x8e56,	// (0x00015c6c) bg_popup_preview_window_pane_cp

0xb749,	// (0x0001855f) heading_preview_pane

0xb751,	// (0x00018567) list_preview_pane_ParamLimits

0xb751,	// (0x00018567) list_preview_pane

0xb79c,	// (0x000185b2) popup_preview_window_g1

0xb760,	// (0x00018576) list_single_preview_pane_ParamLimits

0xb760,	// (0x00018576) list_single_preview_pane

0xb7a4,	// (0x000185ba) list_single_preview_pane_g1

0xb7ac,	// (0x000185c2) list_single_preview_pane_t1

0xb772,	// (0x00018588) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001c91f) list_single_preview_pane_t

0xb7ba,	// (0x000185d0) bg_popup_heading_pane_cp2_ParamLimits

0xb7ba,	// (0x000185d0) bg_popup_heading_pane_cp2

0xb7d0,	// (0x000185e6) heading_preview_pane_g1

0xb7d8,	// (0x000185ee) heading_preview_pane_t1_ParamLimits

0xb7d8,	// (0x000185ee) heading_preview_pane_t1

0x377c,	// (0x00010592) soft_indicator_pane_t1_ParamLimits

0x3cb1,	// (0x00010ac7) scroll_pane_ParamLimits

0x43ce,	// (0x000111e4) scroll_sc2_left_pane

0x43c5,	// (0x000111db) scroll_sc2_right_pane

0x43ed,	// (0x00011203) scroll_bg_pane_g1_ParamLimits

0x4402,	// (0x00011218) scroll_bg_pane_g2_ParamLimits

0x441a,	// (0x00011230) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001c4fa) scroll_bg_pane_g_ParamLimits

0x43ed,	// (0x00011203) scroll_handle_pane_g1_ParamLimits

0x443c,	// (0x00011252) scroll_handle_pane_g2_ParamLimits

0x441a,	// (0x00011230) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001c501) scroll_handle_pane_g_ParamLimits

0x81e9,	// (0x00014fff) popup_choice_list_window_ParamLimits

0x81e9,	// (0x00014fff) popup_choice_list_window

0x8c4c,	// (0x00015a62) choice_list_pane

0x8cfc,	// (0x00015b12) cell_toolbar_pane_t1

0x8d24,	// (0x00015b3a) toolbar_button_pane_ParamLimits

0x9eb4,	// (0x00016cca) ai_gene_pane_1_t2_ParamLimits

0x9eb4,	// (0x00016cca) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001c729) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001c729) ai_gene_pane_1_t

0xb7f5,	// (0x0001860b) scroll_sc2_left_pane_g1

0xb7f5,	// (0x0001860b) scroll_sc2_right_pane_g1

0x81b9,	// (0x00014fcf) bg_popup_sub_pane_cp10

0xb7ff,	// (0x00018615) list_choice_list_pane

0xb818,	// (0x0001862e) list_single_choice_list_pane_ParamLimits

0xb818,	// (0x0001862e) list_single_choice_list_pane

0xb830,	// (0x00018646) list_single_choice_list_pane_g1

0x3fd6,	// (0x00010dec) list_single_choice_list_pane_t1_ParamLimits

0x3fd6,	// (0x00010dec) list_single_choice_list_pane_t1

0xb838,	// (0x0001864e) choice_list_pane_g1

0xb840,	// (0x00018656) choice_list_pane_t1

0x33d0,	// (0x000101e6) input_focus_pane_cp11

0x41b2,	// (0x00010fc8) title_pane_stacon_g2_ParamLimits

0x41b2,	// (0x00010fc8) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001c4e0) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c4e0) title_pane_stacon_g

0x7e37,	// (0x00014c4d) cursor_press_pane

0x82a3,	// (0x000150b9) popup_fep_hwr_window_ParamLimits

0x82a3,	// (0x000150b9) popup_fep_hwr_window

0x832d,	// (0x00015143) popup_fep_vkb_window_ParamLimits

0x832d,	// (0x00015143) popup_fep_vkb_window

0xb84e,	// (0x00018664) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001c948) fep_vkb_side_pane_g_ParamLimits

0x5f7c,	// (0x00012d92) fep_hwr_candidate_pane_ParamLimits

0x5f7c,	// (0x00012d92) fep_hwr_candidate_pane

0x5fa6,	// (0x00012dbc) fep_hwr_side_pane_ParamLimits

0x5fa6,	// (0x00012dbc) fep_hwr_side_pane

0x5fc8,	// (0x00012dde) fep_hwr_top_pane_ParamLimits

0x5fc8,	// (0x00012dde) fep_hwr_top_pane

0x5fe0,	// (0x00012df6) fep_hwr_write_pane_ParamLimits

0x5fe0,	// (0x00012df6) fep_hwr_write_pane

0xfb32,	// (0x0001c948) fep_vkb_side_pane_g

0xb856,	// (0x0001866c) fep_hwr_top_pane_g1

0xb868,	// (0x0001867e) fep_hwr_top_pane_g2

0x601a,	// (0x00012e30) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001c924) fep_hwr_top_pane_g

0x602f,	// (0x00012e45) fep_hwr_top_text_pane

0x4536,	// (0x0001134c) fep_hwr_top_text_pane_g1

0xb89e,	// (0x000186b4) fep_hwr_top_text_pane_t1

0x6139,	// (0x00012f4f) fep_hwr_candidate_pane_g1

0xbae9,	// (0x000188ff) fep_vkb_keypad_pane_g3_ParamLimits

0xbae9,	// (0x000188ff) fep_vkb_keypad_pane_g3

0xbb15,	// (0x0001892b) fep_vkb_keypad_pane_g4_ParamLimits

0xbb15,	// (0x0001892b) fep_vkb_keypad_pane_g4

0xbb8c,	// (0x000189a2) fep_vkb_bottom_pane_g2_ParamLimits

0xbb8c,	// (0x000189a2) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001c94f) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001c94f) fep_vkb_bottom_pane_g

0xb7f5,	// (0x0001860b) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001c959) cell_vkb_side_pane_g

0xbc17,	// (0x00018a2d) cell_vkb_side_pane_t1

0xbc25,	// (0x00018a3b) cell_vkb_side_pane_t1_copy1

0xb7f5,	// (0x0001860b) bg_fep_vkb_candidate_pane_g2

0xbd69,	// (0x00018b7f) cell_vkb_candidate_pane_ParamLimits

0xb8ac,	// (0x000186c2) aid_size_cell_vkb_ParamLimits

0xb8ac,	// (0x000186c2) aid_size_cell_vkb

0xbd69,	// (0x00018b7f) cell_vkb_candidate_pane

0x6160,	// (0x00012f76) bg_popup_fep_shadow_pane_g1

0xb93e,	// (0x00018754) fep_vkb_bottom_pane_ParamLimits

0xb93e,	// (0x00018754) fep_vkb_bottom_pane

0xb97b,	// (0x00018791) fep_vkb_candidate_pane_ParamLimits

0xb97b,	// (0x00018791) fep_vkb_candidate_pane

0xb997,	// (0x000187ad) fep_vkb_keypad_pane_ParamLimits

0xb997,	// (0x000187ad) fep_vkb_keypad_pane

0xb9ca,	// (0x000187e0) fep_vkb_side_pane_ParamLimits

0xb9ca,	// (0x000187e0) fep_vkb_side_pane

0xba06,	// (0x0001881c) fep_vkb_top_pane_ParamLimits

0xba06,	// (0x0001881c) fep_vkb_top_pane

0xba42,	// (0x00018858) fep_vkb_top_pane_g1_ParamLimits

0xba42,	// (0x00018858) fep_vkb_top_pane_g1

0xba51,	// (0x00018867) fep_vkb_top_pane_g2_ParamLimits

0xba51,	// (0x00018867) fep_vkb_top_pane_g2

0xba60,	// (0x00018876) fep_vkb_top_pane_g3_ParamLimits

0xba60,	// (0x00018876) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001c93f) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001c93f) fep_vkb_top_pane_g

0xba7e,	// (0x00018894) fep_vkb_top_text_pane_ParamLimits

0xba7e,	// (0x00018894) fep_vkb_top_text_pane

0xba8f,	// (0x000188a5) fep_vkb_side_pane_g1_ParamLimits

0xba8f,	// (0x000188a5) fep_vkb_side_pane_g1

0xbad8,	// (0x000188ee) grid_vkb_side_pane_ParamLimits

0xbad8,	// (0x000188ee) grid_vkb_side_pane

0x6168,	// (0x00012f7e) bg_popup_fep_shadow_pane_g2

0x6171,	// (0x00012f87) bg_popup_fep_shadow_pane_g3

0x6179,	// (0x00012f8f) bg_popup_fep_shadow_pane_g4

0x6182,	// (0x00012f98) bg_popup_fep_shadow_pane_g5

0x618c,	// (0x00012fa2) bg_popup_fep_shadow_pane_g6

0x6194,	// (0x00012faa) bg_popup_fep_shadow_pane_g7

0x3ec9,	// (0x00010cdf) bg_popup_fep_shadow_pane_g8

0xbb37,	// (0x0001894d) grid_vkb_keypad_number_pane_ParamLimits

0xbb37,	// (0x0001894d) grid_vkb_keypad_number_pane

0xbb4b,	// (0x00018961) grid_vkb_keypad_pane_ParamLimits

0xbb4b,	// (0x00018961) grid_vkb_keypad_pane

0xbb71,	// (0x00018987) fep_vkb_bottom_pane_g1_ParamLimits

0xbb71,	// (0x00018987) fep_vkb_bottom_pane_g1

0xbb9a,	// (0x000189b0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb9a,	// (0x000189b0) grid_vkb_keypad_bottom_left_pane

0xbbaf,	// (0x000189c5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbbaf,	// (0x000189c5) grid_vkb_keypad_bottom_right_pane

0xbbc4,	// (0x000189da) fep_vkb_top_text_pane_g1

0xbbdf,	// (0x000189f5) fep_vkb_top_text_pane_t1

0xbbf4,	// (0x00018a0a) cell_vkb_side_pane_ParamLimits

0xbbf4,	// (0x00018a0a) cell_vkb_side_pane

0xb7f5,	// (0x0001860b) cell_vkb_side_pane_g1

0xbc33,	// (0x00018a49) cell_vkb_keypad_pane_ParamLimits

0xbc33,	// (0x00018a49) cell_vkb_keypad_pane

0xbcc0,	// (0x00018ad6) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001c96c) bg_popup_fep_shadow_pane_g

0x61a6,	// (0x00012fbc) cell_hwr_side_pane_g1

0x61a6,	// (0x00012fbc) cell_hwr_side_pane_g2

0xbcca,	// (0x00018ae0) cell_vkb_keypad_pane_t1

0xbcd8,	// (0x00018aee) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbcd8,	// (0x00018aee) cell_vkb_keypad_bottom_left_pane

0xbcf5,	// (0x00018b0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcf5,	// (0x00018b0b) cell_vkb_keypad_bottom_right_pane

0xb7f5,	// (0x0001860b) cell_vkb_keypad_bottom_left_pane_g1

0xb7f5,	// (0x0001860b) cell_vkb_keypad_bottom_right_pane_g1

0xbd2e,	// (0x00018b44) cell_vkb_keypad_number_pane_ParamLimits

0xbd2e,	// (0x00018b44) cell_vkb_keypad_number_pane

0xbd4d,	// (0x00018b63) cell_vkb_keypad_number_pane_g1

0xbd57,	// (0x00018b6d) cell_vkb_keypad_number_pane_g2

0xbd60,	// (0x00018b76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001c95e) cell_vkb_keypad_number_pane_g

0xbcca,	// (0x00018ae0) cell_vkb_keypad_number_pane_t1

0xbd8a,	// (0x00018ba0) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0001c97f) cell_hwr_side_pane_g

0xbda3,	// (0x00018bb9) cell_hwr_side_pane_t1

0x61b0,	// (0x00012fc6) cell_hwr_side_pane_t1_copy1

0x61be,	// (0x00012fd4) cell_hwr_candidate_pane_g1

0x61ed,	// (0x00013003) cell_hwr_candidate_pane_t1

0xb7f5,	// (0x0001860b) cell_vkb_candidate_pane_g2

0xbde7,	// (0x00018bfd) cell_vkb_candidate_pane_t1

0x5f43,	// (0x00012d59) bg_popup_fep_shadow_pane_ParamLimits

0x5f43,	// (0x00012d59) bg_popup_fep_shadow_pane

0x5ffa,	// (0x00012e10) bg_fep_hwr_top_pane_g4

0xb87a,	// (0x00018690) bg_hwr_side_pane_g1_ParamLimits

0xb87a,	// (0x00018690) bg_hwr_side_pane_g1

0x606d,	// (0x00012e83) cell_hwr_side_pane_ParamLimits

0x606d,	// (0x00012e83) cell_hwr_side_pane

0x60aa,	// (0x00012ec0) fep_hwr_write_pane_g1_ParamLimits

0x60aa,	// (0x00012ec0) fep_hwr_write_pane_g1

0x60b7,	// (0x00012ecd) fep_hwr_write_pane_g2_ParamLimits

0x60b7,	// (0x00012ecd) fep_hwr_write_pane_g2

0x60c4,	// (0x00012eda) fep_hwr_write_pane_g3_ParamLimits

0x60c4,	// (0x00012eda) fep_hwr_write_pane_g3

0x60d2,	// (0x00012ee8) fep_hwr_write_pane_g4_ParamLimits

0x60d2,	// (0x00012ee8) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001c92b) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001c92b) fep_hwr_write_pane_g

0x5ffa,	// (0x00012e10) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ffa,	// (0x00012e10) bg_fep_hwr_candidate_pane_g2

0x60e7,	// (0x00012efd) cell_hwr_candidate_pane_ParamLimits

0x60e7,	// (0x00012efd) cell_hwr_candidate_pane

0x6139,	// (0x00012f4f) fep_hwr_candidate_pane_g1_ParamLimits

0xb8da,	// (0x000186f0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8da,	// (0x000186f0) bg_popup_fep_shadow_pane_cp2

0xba70,	// (0x00018886) fep_vkb_top_pane_g4_ParamLimits

0xba70,	// (0x00018886) fep_vkb_top_pane_g4

0xbab6,	// (0x000188cc) fep_vkb_side_pane_g2_ParamLimits

0xbab6,	// (0x000188cc) fep_vkb_side_pane_g2

0x746c,	// (0x00014282) list_setting_pane_t4_ParamLimits

0x746c,	// (0x00014282) list_setting_pane_t4

0x74e8,	// (0x000142fe) list_setting_number_pane_t5_ParamLimits

0x74e8,	// (0x000142fe) list_setting_number_pane_t5

0x77e9,	// (0x000145ff) list_double_heading_pane_cp2_ParamLimits

0x77e9,	// (0x000145ff) list_double_heading_pane_cp2

0xbdf5,	// (0x00018c0b) list_double_heading_pane_g1_cp2_ParamLimits

0xbdf5,	// (0x00018c0b) list_double_heading_pane_g1_cp2

0xbe01,	// (0x00018c17) list_double_heading_pane_g2_cp2_ParamLimits

0xbe01,	// (0x00018c17) list_double_heading_pane_g2_cp2

0xbe15,	// (0x00018c2b) list_double_heading_pane_t1_cp2_ParamLimits

0xbe15,	// (0x00018c2b) list_double_heading_pane_t1_cp2

0xbe2b,	// (0x00018c41) list_double_heading_pane_t2_cp2_ParamLimits

0xbe2b,	// (0x00018c41) list_double_heading_pane_t2_cp2

0x33c8,	// (0x000101de) aid_value_unit2

0x52a7,	// (0x000120bd) popup_preview_fixed_window

0x385c,	// (0x00010672) bg_popup_preview_window_pane_cp02

0xbe3d,	// (0x00018c53) list_preview_fixed_pane

0xbe83,	// (0x00018c99) list_empty_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_empty_pane_fp

0xbe83,	// (0x00018c99) list_single_cale_day_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_cale_day_pane_fp

0xbe83,	// (0x00018c99) list_single_graphic_heading_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_graphic_heading_pane_fp

0xbe83,	// (0x00018c99) list_single_graphic_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_graphic_pane_fp

0xbe83,	// (0x00018c99) list_single_heading_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_heading_pane_fp

0xbe83,	// (0x00018c99) list_single_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_pane_fp

0xbe9c,	// (0x00018cb2) list_single_pane_fp_g1_ParamLimits

0xbe9c,	// (0x00018cb2) list_single_pane_fp_g1

0xbdf5,	// (0x00018c0b) list_single_pane_fp_g2_ParamLimits

0xbdf5,	// (0x00018c0b) list_single_pane_fp_g2

0xbe01,	// (0x00018c17) list_single_pane_fp_g3_ParamLimits

0xbe01,	// (0x00018c17) list_single_pane_fp_g3

0xbea8,	// (0x00018cbe) list_single_pane_fp_g4_ParamLimits

0xbea8,	// (0x00018cbe) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0001c992) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0001c992) list_single_pane_fp_g

0xbeb4,	// (0x00018cca) list_single_pane_fp_t1_ParamLimits

0xbeb4,	// (0x00018cca) list_single_pane_fp_t1

0xbecb,	// (0x00018ce1) list_single_graphic_pane_fp_g1_ParamLimits

0xbecb,	// (0x00018ce1) list_single_graphic_pane_fp_g1

0xbe9c,	// (0x00018cb2) list_single_graphic_pane_fp_g2_ParamLimits

0xbe9c,	// (0x00018cb2) list_single_graphic_pane_fp_g2

0xbdf5,	// (0x00018c0b) list_single_graphic_pane_fp_g3_ParamLimits

0xbdf5,	// (0x00018c0b) list_single_graphic_pane_fp_g3

0xbe01,	// (0x00018c17) list_single_graphic_pane_fp_g4_ParamLimits

0xbe01,	// (0x00018c17) list_single_graphic_pane_fp_g4

0xbea8,	// (0x00018cbe) list_single_graphic_pane_fp_g5_ParamLimits

0xbea8,	// (0x00018cbe) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c99b) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c99b) list_single_graphic_pane_fp_g

0xbed7,	// (0x00018ced) list_single_graphic_pane_fp_t1_ParamLimits

0xbed7,	// (0x00018ced) list_single_graphic_pane_fp_t1

0xbecb,	// (0x00018ce1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbecb,	// (0x00018ce1) list_single_graphic_heading_pane_fp_g1

0xbe9c,	// (0x00018cb2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe9c,	// (0x00018cb2) list_single_graphic_heading_pane_fp_g2

0xbdf5,	// (0x00018c0b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbdf5,	// (0x00018c0b) list_single_graphic_heading_pane_fp_g3

0xbe01,	// (0x00018c17) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbe01,	// (0x00018c17) list_single_graphic_heading_pane_fp_g4

0xbea8,	// (0x00018cbe) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbea8,	// (0x00018cbe) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c99b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c99b) list_single_graphic_heading_pane_fp_g

0xbeed,	// (0x00018d03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbeed,	// (0x00018d03) list_single_graphic_heading_pane_fp_t1

0xbf03,	// (0x00018d19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbf03,	// (0x00018d19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001c9a6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001c9a6) list_single_graphic_heading_pane_fp_t

0xbf15,	// (0x00018d2b) list_single_cale_day_pane_fp_g1_ParamLimits

0xbf15,	// (0x00018d2b) list_single_cale_day_pane_fp_g1

0xbf4d,	// (0x00018d63) list_single_cale_day_pane_fp_g2_ParamLimits

0xbf4d,	// (0x00018d63) list_single_cale_day_pane_fp_g2

0xbf59,	// (0x00018d6f) list_single_cale_day_pane_fp_g3_ParamLimits

0xbf59,	// (0x00018d6f) list_single_cale_day_pane_fp_g3

0xbf81,	// (0x00018d97) list_single_cale_day_pane_fp_g4_ParamLimits

0xbf81,	// (0x00018d97) list_single_cale_day_pane_fp_g4

0xbfa5,	// (0x00018dbb) list_single_cale_day_pane_fp_g5_ParamLimits

0xbfa5,	// (0x00018dbb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0001c9ab) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0001c9ab) list_single_cale_day_pane_fp_g

0xbfc9,	// (0x00018ddf) list_single_cale_day_pane_fp_t1_ParamLimits

0xbfc9,	// (0x00018ddf) list_single_cale_day_pane_fp_t1

0xbfef,	// (0x00018e05) list_single_cale_day_pane_fp_t2_ParamLimits

0xbfef,	// (0x00018e05) list_single_cale_day_pane_fp_t2

0xc008,	// (0x00018e1e) list_single_cale_day_pane_fp_t3_ParamLimits

0xc008,	// (0x00018e1e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0001c9b6) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0001c9b6) list_single_cale_day_pane_fp_t

0xbe9c,	// (0x00018cb2) list_empty_pane_fp_g1_ParamLimits

0xbe9c,	// (0x00018cb2) list_empty_pane_fp_g1

0xc021,	// (0x00018e37) list_empty_pane_fp_t1

0xc02f,	// (0x00018e45) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0001c9bd) list_empty_pane_fp_t

0xbe9c,	// (0x00018cb2) list_single_heading_pane_fp_g1_ParamLimits

0xbe9c,	// (0x00018cb2) list_single_heading_pane_fp_g1

0xbdf5,	// (0x00018c0b) list_single_heading_pane_fp_g2_ParamLimits

0xbdf5,	// (0x00018c0b) list_single_heading_pane_fp_g2

0xbe01,	// (0x00018c17) list_single_heading_pane_fp_g3_ParamLimits

0xbe01,	// (0x00018c17) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0001c9c2) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0001c9c2) list_single_heading_pane_fp_g

0xc03d,	// (0x00018e53) list_single_heading_pane_fp_t1_ParamLimits

0xc03d,	// (0x00018e53) list_single_heading_pane_fp_t1

0xc04f,	// (0x00018e65) list_single_heading_pane_fp_t2_ParamLimits

0xc04f,	// (0x00018e65) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001c9c9) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0001c9c9) list_single_heading_pane_fp_t

0x3feb,	// (0x00010e01) aid_size_cell_fast

0x383f,	// (0x00010655) soft_indicator_pane_cp1_t1

0x4028,	// (0x00010e3e) cell_app_pane_cp2_ParamLimits

0x4028,	// (0x00010e3e) cell_app_pane_cp2

0x5f65,	// (0x00012d7b) fep_hwr_candidate_drop_down_list_pane

0x6153,	// (0x00012f69) fep_hwr_candidate_pane_g3_ParamLimits

0x6153,	// (0x00012f69) fep_hwr_candidate_pane_g3

0x2983,	// (0x0000f799) fep_hwr_candidate_pane_g4_ParamLimits

0x2983,	// (0x0000f799) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001c938) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001c938) fep_hwr_candidate_pane_g

0xb96a,	// (0x00018780) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb96a,	// (0x00018780) fep_vkb_candidate_drop_down_list_pane

0xbd92,	// (0x00018ba8) fep_vkb_candidate_pane_g3

0xbd9a,	// (0x00018bb0) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001c965) fep_vkb_candidate_pane_g

0x61be,	// (0x00012fd4) cell_hwr_candidate_pane_g1_ParamLimits

0x61cc,	// (0x00012fe2) cell_hwr_candidate_pane_g3_ParamLimits

0x61cc,	// (0x00012fe2) cell_hwr_candidate_pane_g3

0xc18b,	// (0x00018fa1) cell_hwr_candidate_pane_g4_ParamLimits

0xc18b,	// (0x00018fa1) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0001c984) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0001c984) cell_hwr_candidate_pane_g

0xbdb1,	// (0x00018bc7) cell_vkb_candidate_pane_g3_ParamLimits

0xbdb1,	// (0x00018bc7) cell_vkb_candidate_pane_g3

0xbdcc,	// (0x00018be2) cell_vkb_candidate_pane_g4_ParamLimits

0xbdcc,	// (0x00018be2) cell_vkb_candidate_pane_g4

0xc065,	// (0x00018e7b) cell_app_pane_cp2_g1_ParamLimits

0xc065,	// (0x00018e7b) cell_app_pane_cp2_g1

0xc083,	// (0x00018e99) cell_app_pane_cp2_g2_ParamLimits

0xc083,	// (0x00018e99) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0001c9ce) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0001c9ce) cell_app_pane_cp2_g

0xc08f,	// (0x00018ea5) cell_app_pane_cp2_t1_ParamLimits

0xc08f,	// (0x00018ea5) cell_app_pane_cp2_t1

0x3dc4,	// (0x00010bda) grid_highlight_pane_cp1_ParamLimits

0x3dc4,	// (0x00010bda) grid_highlight_pane_cp1

0x620b,	// (0x00013021) cell_hwr_candidate_pane_cp1_ParamLimits

0x620b,	// (0x00013021) cell_hwr_candidate_pane_cp1

0x61be,	// (0x00012fd4) fep_hwr_candidate_drop_down_list_pane_g1

0x622f,	// (0x00013045) fep_hwr_candidate_drop_down_list_pane_g2

0x623c,	// (0x00013052) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001c9d3) fep_hwr_candidate_drop_down_list_pane_g

0x6249,	// (0x0001305f) fep_hwr_candidate_drop_down_list_scroll_pane

0x6252,	// (0x00013068) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6252,	// (0x00013068) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x625f,	// (0x00013075) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x625f,	// (0x00013075) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x626c,	// (0x00013082) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x626c,	// (0x00013082) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6279,	// (0x0001308f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6279,	// (0x0001308f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6294,	// (0x000130aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6294,	// (0x000130aa) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x62af,	// (0x000130c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x62af,	// (0x000130c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x62ca,	// (0x000130e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x62ca,	// (0x000130e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x62e5,	// (0x000130fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x62e5,	// (0x000130fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001c9da) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001c9da) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc0a1,	// (0x00018eb7) cell_vkb_candidate_pane_cp1_ParamLimits

0xc0a1,	// (0x00018eb7) cell_vkb_candidate_pane_cp1

0xba70,	// (0x00018886) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba70,	// (0x00018886) fep_vkb_candidate_drop_down_list_pane_g1

0xc0c7,	// (0x00018edd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc0c7,	// (0x00018edd) fep_vkb_candidate_drop_down_list_pane_g2

0xc0d4,	// (0x00018eea) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc0d4,	// (0x00018eea) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001c9eb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001c9eb) fep_vkb_candidate_drop_down_list_pane_g

0xc0e1,	// (0x00018ef7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc0e1,	// (0x00018ef7) fep_vkb_candidate_drop_down_list_scroll_pane

0xc0ee,	// (0x00018f04) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc0ee,	// (0x00018f04) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc0fb,	// (0x00018f11) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc0fb,	// (0x00018f11) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc1ac,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc1ac,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc107,	// (0x00018f1d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc107,	// (0x00018f1d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc128,	// (0x00018f3e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc128,	// (0x00018f3e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc1b8,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc1b8,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc1d9,	// (0x00018fef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc1d9,	// (0x00018fef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc1fa,	// (0x00019010) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc1fa,	// (0x00019010) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001c9f2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001c9f2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6dc3,	// (0x00013bd9) title_pane_g1_ParamLimits

0x6dd0,	// (0x00013be6) title_pane_g2_ParamLimits

0xf554,	// (0x0001c36a) title_pane_g_ParamLimits

0x452e,	// (0x00011344) aid_call2_pane

0x4526,	// (0x0001133c) aid_call_pane

0x4536,	// (0x0001134c) popup_clock_analogue_window_g1

0x4536,	// (0x0001134c) popup_clock_analogue_window_g2

0x561c,	// (0x00012432) popup_clock_analogue_window_g3

0x5625,	// (0x0001243b) popup_clock_analogue_window_g4

0x33da,	// (0x000101f0) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001c50f) popup_clock_analogue_window_g

0x562d,	// (0x00012443) popup_clock_analogue_window_t1

0x563b,	// (0x00012451) clock_digital_number_pane_ParamLimits

0x563b,	// (0x00012451) clock_digital_number_pane

0x5647,	// (0x0001245d) clock_digital_number_pane_cp02_ParamLimits

0x5647,	// (0x0001245d) clock_digital_number_pane_cp02

0x5653,	// (0x00012469) clock_digital_number_pane_cp03_ParamLimits

0x5653,	// (0x00012469) clock_digital_number_pane_cp03

0x565f,	// (0x00012475) clock_digital_number_pane_cp04_ParamLimits

0x565f,	// (0x00012475) clock_digital_number_pane_cp04

0x566b,	// (0x00012481) clock_digital_separator_pane_ParamLimits

0x566b,	// (0x00012481) clock_digital_separator_pane

0x5677,	// (0x0001248d) popup_clock_digital_window_t1_ParamLimits

0x5677,	// (0x0001248d) popup_clock_digital_window_t1

0x33da,	// (0x000101f0) clock_digital_number_pane_g1

0x33da,	// (0x000101f0) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001c51a) clock_digital_number_pane_g

0x33da,	// (0x000101f0) clock_digital_separator_pane_g1

0x33da,	// (0x000101f0) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001c51a) clock_digital_separator_pane_g

0x87f8,	// (0x0001560e) aid_fill_nsta_ParamLimits

0x8948,	// (0x0001575e) indicator_nsta_pane_ParamLimits

0x8ad9,	// (0x000158ef) popup_clock_analogue_window

0x8ad9,	// (0x000158ef) popup_clock_digital_window

0x3686,	// (0x0001049c) grid_indicator_nsta_pane_ParamLimits

0xb1cc,	// (0x00017fe2) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001c8b8) clock_nsta_pane_t

0x55e0,	// (0x000123f6) aid_size_max_handle

0x55ea,	// (0x00012400) aid_size_min_handle

0x7e37,	// (0x00014c4d) editor_scroll_pane

0xc215,	// (0x0001902b) ex_editor_pane

0x3fb1,	// (0x00010dc7) scroll_pane_cp13

0x3cdd,	// (0x00010af3) scroll_pane_cp14

0x4584,	// (0x0001139a) scroll_pane_cp36

0x77ff,	// (0x00014615) list_single_graphic_hl_pane_cp2_ParamLimits

0x77ff,	// (0x00014615) list_single_graphic_hl_pane_cp2

0xa492,	// (0x000172a8) list_single_graphic_hl_pane_ParamLimits

0xa492,	// (0x000172a8) list_single_graphic_hl_pane

0xc21d,	// (0x00019033) aid_size_min_hl_cp1

0xc226,	// (0x0001903c) list_highlight_pane_cp34_ParamLimits

0xc226,	// (0x0001903c) list_highlight_pane_cp34

0xc237,	// (0x0001904d) list_single_graphic_hl_pane_g1_ParamLimits

0xc237,	// (0x0001904d) list_single_graphic_hl_pane_g1

0xc244,	// (0x0001905a) list_single_graphic_hl_pane_g2_ParamLimits

0xc244,	// (0x0001905a) list_single_graphic_hl_pane_g2

0xc244,	// (0x0001905a) list_single_graphic_hl_pane_g3_ParamLimits

0xc244,	// (0x0001905a) list_single_graphic_hl_pane_g3

0xa9e5,	// (0x000177fb) list_single_graphic_hl_pane_g4_ParamLimits

0xa9e5,	// (0x000177fb) list_single_graphic_hl_pane_g4

0xc250,	// (0x00019066) list_single_graphic_hl_pane_g5_ParamLimits

0xc250,	// (0x00019066) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0001ca03) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0001ca03) list_single_graphic_hl_pane_g

0xc264,	// (0x0001907a) list_single_graphic_hl_pane_t1_ParamLimits

0xc264,	// (0x0001907a) list_single_graphic_hl_pane_t1

0xc27a,	// (0x00019090) aid_size_min_hl_cp2

0xc283,	// (0x00019099) list_highlight_pane_cp34_cp2_ParamLimits

0xc283,	// (0x00019099) list_highlight_pane_cp34_cp2

0xc237,	// (0x0001904d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc237,	// (0x0001904d) list_single_graphic_hl_pane_g1_cp2

0xc290,	// (0x000190a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc290,	// (0x000190a6) list_single_graphic_hl_pane_g2_cp2

0xc29c,	// (0x000190b2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc29c,	// (0x000190b2) list_single_graphic_hl_pane_g3_cp2

0x3e49,	// (0x00010c5f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3e49,	// (0x00010c5f) list_single_graphic_hl_pane_g4_cp2

0xc2aa,	// (0x000190c0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc2aa,	// (0x000190c0) list_single_graphic_hl_pane_g5_cp2

0x5930,	// (0x00012746) control_pane_g4_ParamLimits

0x5930,	// (0x00012746) control_pane_g4

0x81b9,	// (0x00014fcf) bg_popup_sub_pane_cp10_ParamLimits

0xb7ff,	// (0x00018615) list_choice_list_pane_ParamLimits

0xb80e,	// (0x00018624) scroll_pane_cp23

0x385c,	// (0x00010672) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe3d,	// (0x00018c53) list_preview_fixed_pane_ParamLimits

0xbe53,	// (0x00018c69) list_preview_fixed_pane_cp_ParamLimits

0xbe53,	// (0x00018c69) list_preview_fixed_pane_cp

0xbe5f,	// (0x00018c75) popup_preview_fixed_window_g1_ParamLimits

0xbe5f,	// (0x00018c75) popup_preview_fixed_window_g1

0xbe6b,	// (0x00018c81) popup_preview_fixed_window_g2_ParamLimits

0xbe6b,	// (0x00018c81) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0001c98b) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0001c98b) popup_preview_fixed_window_g

0x5552,	// (0x00012368) aid_navi_side_left_pane_ParamLimits

0x5567,	// (0x0001237d) aid_navi_side_right_pane_ParamLimits

0x557f,	// (0x00012395) navi_icon_pane_stacon_ParamLimits

0x5593,	// (0x000123a9) navi_navi_pane_stacon_ParamLimits

0x557f,	// (0x00012395) navi_text_pane_stacon_ParamLimits

0x33d0,	// (0x000101e6) main_text_info_pane

0xc2d4,	// (0x000190ea) listscroll_text_info_pane

0xc2dc,	// (0x000190f2) list_text_info_pane_ParamLimits

0xc2dc,	// (0x000190f2) list_text_info_pane

0xc2eb,	// (0x00019101) scroll_pane_cp24_ParamLimits

0xc2eb,	// (0x00019101) scroll_pane_cp24

0xc309,	// (0x0001911f) list_text_info_pane_t1_ParamLimits

0xc309,	// (0x0001911f) list_text_info_pane_t1

0x820b,	// (0x00015021) popup_fast_swap2_window_ParamLimits

0x820b,	// (0x00015021) popup_fast_swap2_window

0xc32e,	// (0x00019144) aid_size_cell_fast2

0x33d0,	// (0x000101e6) bg_popup_window_pane_cp17

0x9245,	// (0x0001605b) heading_pane_cp2

0x3a62,	// (0x00010878) listscroll_fast2_pane

0xc338,	// (0x0001914e) grid_fast2_pane

0xc342,	// (0x00019158) listscroll_fast2_pane_g1

0xc34c,	// (0x00019162) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0001ca0e) listscroll_fast2_pane_g

0x3fb1,	// (0x00010dc7) scroll_pane_cp26

0xc356,	// (0x0001916c) cell_fast2_pane_ParamLimits

0xc356,	// (0x0001916c) cell_fast2_pane

0xc36d,	// (0x00019183) cell_fast2_pane_g1

0xc376,	// (0x0001918c) cell_fast2_pane_g2

0xc37f,	// (0x00019195) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0001ca13) cell_fast2_pane_g

0x3aa4,	// (0x000108ba) grid_highlight_pane_cp9

0x3ab9,	// (0x000108cf) main_eswt_pane_ParamLimits

0x3ab9,	// (0x000108cf) main_eswt_pane

0xc300,	// (0x00019116) list_single_text_info_pane

0xc387,	// (0x0001919d) eswt_ctrl_button_pane

0xc387,	// (0x0001919d) eswt_ctrl_canvas_pane

0xc38f,	// (0x000191a5) eswt_ctrl_combo_pane

0xc387,	// (0x0001919d) eswt_ctrl_default_pane

0xc387,	// (0x0001919d) eswt_ctrl_label_pane

0xc397,	// (0x000191ad) eswt_ctrl_wait_pane

0xc39f,	// (0x000191b5) eswt_shell_pane

0x33d0,	// (0x000101e6) listscroll_eswt_app_pane

0xc3bf,	// (0x000191d5) popup_eswt_tasktip_window_ParamLimits

0xc3bf,	// (0x000191d5) popup_eswt_tasktip_window

0x8e56,	// (0x00015c6c) bg_popup_window_pane_cp18

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_ParamLimits

0xc3d0,	// (0x000191e6) eswt_control_pane_g1

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_ParamLimits

0xc3dd,	// (0x000191f3) eswt_control_pane_g2

0xc3ea,	// (0x00019200) eswt_control_pane_g3_ParamLimits

0xc3ea,	// (0x00019200) eswt_control_pane_g3

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_ParamLimits

0xc3f7,	// (0x0001920d) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0001ca1a) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0001ca1a) eswt_control_pane_g

0x3dc4,	// (0x00010bda) bg_button_pane_ParamLimits

0x3dc4,	// (0x00010bda) bg_button_pane

0x3ab9,	// (0x000108cf) common_borders_pane_copy2_ParamLimits

0x3ab9,	// (0x000108cf) common_borders_pane_copy2

0xc404,	// (0x0001921a) control_button_pane_g1_ParamLimits

0xc404,	// (0x0001921a) control_button_pane_g1

0xc410,	// (0x00019226) control_button_pane_g2_ParamLimits

0xc410,	// (0x00019226) control_button_pane_g2

0xc41c,	// (0x00019232) control_button_pane_g3_ParamLimits

0xc41c,	// (0x00019232) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0001ca23) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0001ca23) control_button_pane_g

0xc430,	// (0x00019246) control_button_pane_t1

0xc43e,	// (0x00019254) control_button_pane_t2

0x0001,

0xfc14,	// (0x0001ca2a) control_button_pane_t

0x8d30,	// (0x00015b46) bg_button_pane_g1

0x8d40,	// (0x00015b56) bg_button_pane_g2

0x8d38,	// (0x00015b4e) bg_button_pane_g3

0x8d50,	// (0x00015b66) bg_button_pane_g4

0x8d48,	// (0x00015b5e) bg_button_pane_g5

0x8d58,	// (0x00015b6e) bg_button_pane_g6

0x8d60,	// (0x00015b76) bg_button_pane_g7

0x8d70,	// (0x00015b86) bg_button_pane_g8

0x8d68,	// (0x00015b7e) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001c67d) bg_button_pane_g

0xb7ba,	// (0x000185d0) common_borders_pane_ParamLimits

0xb7ba,	// (0x000185d0) common_borders_pane

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy1_ParamLimits

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy1

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy1_ParamLimits

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy1

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy1_ParamLimits

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy1

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy1_ParamLimits

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy1

0xb7f5,	// (0x0001860b) bg_eswt_ctrl_canvas_pane_g1

0xb7ba,	// (0x000185d0) common_borders_pane_cp2_ParamLimits

0xb7ba,	// (0x000185d0) common_borders_pane_cp2

0xb7ba,	// (0x000185d0) common_borders_pane_cp3_ParamLimits

0xb7ba,	// (0x000185d0) common_borders_pane_cp3

0xc44c,	// (0x00019262) separator_horizontal_pane

0xc454,	// (0x0001926a) separator_vertical_pane

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy2_ParamLimits

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy2

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy2_ParamLimits

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy2

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy2_ParamLimits

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy2

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy2_ParamLimits

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy2

0x33d0,	// (0x000101e6) common_borders_pane_cp4

0xc45d,	// (0x00019273) separator_horizontal_pane_g1

0xc466,	// (0x0001927c) separator_horizontal_pane_g2

0xc46f,	// (0x00019285) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0001ca2f) separator_horizontal_pane_g

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy3_ParamLimits

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy3

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy3_ParamLimits

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy3

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy3_ParamLimits

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy3

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy3_ParamLimits

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy3

0x33d0,	// (0x000101e6) common_borders_pane_cp5

0xc478,	// (0x0001928e) separator_vertical_pane_g1

0xc481,	// (0x00019297) separator_vertical_pane_g2

0xc48a,	// (0x000192a0) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0001ca36) separator_vertical_pane_g

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy4_ParamLimits

0xc3d0,	// (0x000191e6) eswt_control_pane_g1_copy4

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy4_ParamLimits

0xc3dd,	// (0x000191f3) eswt_control_pane_g2_copy4

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy4_ParamLimits

0xc3ea,	// (0x00019200) eswt_control_pane_g3_copy4

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy4_ParamLimits

0xc3f7,	// (0x0001920d) eswt_control_pane_g4_copy4

0xc493,	// (0x000192a9) eswt_ctrl_combo_button_pane

0xc49b,	// (0x000192b1) eswt_ctrl_input_pane

0xc4a3,	// (0x000192b9) popup_choice_list_window_cp70

0xc4ab,	// (0x000192c1) eswt_ctrl_input_pane_t1

0x33d0,	// (0x000101e6) input_focus_pane_cp70

0xb7ba,	// (0x000185d0) bg_button_pane_cp70_ParamLimits

0xb7ba,	// (0x000185d0) bg_button_pane_cp70

0xc4b9,	// (0x000192cf) eswt_ctrl_combo_button_pane_g1

0xc4c1,	// (0x000192d7) wait_bar_pane_cp70

0x8e56,	// (0x00015c6c) bg_popup_window_pane_cp70_ParamLimits

0x8e56,	// (0x00015c6c) bg_popup_window_pane_cp70

0xc4c9,	// (0x000192df) popup_eswt_tasktip_window_t1

0xc4df,	// (0x000192f5) wait_bar_pane_cp71_ParamLimits

0xc4df,	// (0x000192f5) wait_bar_pane_cp71

0xc4eb,	// (0x00019301) grid_eswt_app_pane

0x43ce,	// (0x000111e4) scroll_pane_cp70

0xc4f4,	// (0x0001930a) cell_eswt_app_pane_ParamLimits

0xc4f4,	// (0x0001930a) cell_eswt_app_pane

0xc526,	// (0x0001933c) cell_eswt_app_pane_g1_ParamLimits

0xc526,	// (0x0001933c) cell_eswt_app_pane_g1

0xc555,	// (0x0001936b) cell_eswt_app_pane_g2_ParamLimits

0xc555,	// (0x0001936b) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0001ca3d) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0001ca3d) cell_eswt_app_pane_g

0xc57e,	// (0x00019394) cell_eswt_app_pane_t1_ParamLimits

0xc57e,	// (0x00019394) cell_eswt_app_pane_t1

0xc5b0,	// (0x000193c6) grid_highlight_pane_cp70_ParamLimits

0xc5b0,	// (0x000193c6) grid_highlight_pane_cp70

0x7d08,	// (0x00014b1e) set_content_pane_g1

0x80db,	// (0x00014ef1) status_small_volume_pane

0x6300,	// (0x00013116) status_small_volume_pane_g1

0x6308,	// (0x0001311e) volume_small2_pane

0x6311,	// (0x00013127) volume_small2_pane_g1

0x631a,	// (0x00013130) volume_small2_pane_g2

0x6323,	// (0x00013139) volume_small2_pane_g3

0x632c,	// (0x00013142) volume_small2_pane_g4

0x6335,	// (0x0001314b) volume_small2_pane_g5

0x633e,	// (0x00013154) volume_small2_pane_g6

0x6347,	// (0x0001315d) volume_small2_pane_g7

0x6350,	// (0x00013166) volume_small2_pane_g8

0x6359,	// (0x0001316f) volume_small2_pane_g9

0x6362,	// (0x00013178) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0001ca42) volume_small2_pane_g

0xbbc4,	// (0x000189da) fep_vkb_top_text_pane_g1_ParamLimits

0xbbdf,	// (0x000189f5) fep_vkb_top_text_pane_t1_ParamLimits

0xbe77,	// (0x00018c8d) popup_preview_fixed_window_g3_ParamLimits

0xbe77,	// (0x00018c8d) popup_preview_fixed_window_g3

0x871c,	// (0x00015532) popup_toolbar_trans_pane

0xa205,	// (0x0001701b) aid_height_set_list_ParamLimits

0xa216,	// (0x0001702c) aid_size_parent_ParamLimits

0x81b9,	// (0x00014fcf) list_highlight_pane_cp2_ParamLimits

0x7d08,	// (0x00014b1e) set_content_pane_g1_ParamLimits

0xa4a6,	// (0x000172bc) list_single_image_pane_ParamLimits

0xa4a6,	// (0x000172bc) list_single_image_pane

0xc5bc,	// (0x000193d2) aid_size_cell_image_ParamLimits

0xc5bc,	// (0x000193d2) aid_size_cell_image

0xc5c9,	// (0x000193df) grid_single_image_pane_ParamLimits

0xc5c9,	// (0x000193df) grid_single_image_pane

0x3def,	// (0x00010c05) list_single_image_pane_g1_ParamLimits

0x3def,	// (0x00010c05) list_single_image_pane_g1

0x3dfb,	// (0x00010c11) list_single_image_pane_g2_ParamLimits

0x3dfb,	// (0x00010c11) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0001ca57) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0001ca57) list_single_image_pane_g

0xc5d7,	// (0x000193ed) list_single_image_pane_t1_ParamLimits

0xc5d7,	// (0x000193ed) list_single_image_pane_t1

0xc5ed,	// (0x00019403) cell_image_list_pane_ParamLimits

0xc5ed,	// (0x00019403) cell_image_list_pane

0xc603,	// (0x00019419) cell_image_list_pane_g1

0xc60c,	// (0x00019422) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0001ca5c) cell_image_list_pane_g

0xc615,	// (0x0001942b) aid_size_cell_tb_trans_pane

0x3dc4,	// (0x00010bda) bg_tb_trans_pane

0xc627,	// (0x0001943d) grid_tb_trans_pane

0x8d30,	// (0x00015b46) bg_tb_trans_pane_g1

0x8d40,	// (0x00015b56) bg_tb_trans_pane_g2

0x8d38,	// (0x00015b4e) bg_tb_trans_pane_g3

0x8d50,	// (0x00015b66) bg_tb_trans_pane_g4

0x8d48,	// (0x00015b5e) bg_tb_trans_pane_g5

0x8d70,	// (0x00015b86) bg_tb_trans_pane_g6

0x8d68,	// (0x00015b7e) bg_tb_trans_pane_g7

0x8d58,	// (0x00015b6e) bg_tb_trans_pane_g8

0x8d60,	// (0x00015b76) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0001ca61) bg_tb_trans_pane_g

0xc63b,	// (0x00019451) cell_toolbar_trans_pane_ParamLimits

0xc63b,	// (0x00019451) cell_toolbar_trans_pane

0xb7f5,	// (0x0001860b) cell_toolbar_trans_pane_g1

0xb3c3,	// (0x000181d9) list_form2_midp_pane_t1

0xb3d1,	// (0x000181e7) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001c8fe) list_form2_midp_pane_t

0xb3df,	// (0x000181f5) scroll_pane_cp51_ParamLimits

0xb5fc,	// (0x00018412) form2_midp_wait_pane_g1

0xb605,	// (0x0001841b) form2_midp_wait_pane_g2

0xb60e,	// (0x00018424) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001c913) form2_midp_wait_pane_g

0x3686,	// (0x0001049c) list_highlight_pane_cp21_ParamLimits

0xb652,	// (0x00018468) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb661,	// (0x00018477) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa44b,	// (0x00017261) list_single_2graphic_im_pane_ParamLimits

0xa44b,	// (0x00017261) list_single_2graphic_im_pane

0xc661,	// (0x00019477) list_single_2graphic_im_pane_g1_ParamLimits

0xc661,	// (0x00019477) list_single_2graphic_im_pane_g1

0xc672,	// (0x00019488) list_single_2graphic_im_pane_g2_ParamLimits

0xc672,	// (0x00019488) list_single_2graphic_im_pane_g2

0xc67e,	// (0x00019494) list_single_2graphic_im_pane_g3_ParamLimits

0xc67e,	// (0x00019494) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0001ca74) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0001ca74) list_single_2graphic_im_pane_g

0xc69e,	// (0x000194b4) list_single_2graphic_im_pane_t1_ParamLimits

0xc69e,	// (0x000194b4) list_single_2graphic_im_pane_t1

0xbe83,	// (0x00018c99) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe83,	// (0x00018c99) list_single_graphic_2heading_pane_fp

0xbecb,	// (0x00018ce1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbecb,	// (0x00018ce1) list_single_graphic_2heading_pane_fp_g1

0xbe9c,	// (0x00018cb2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe9c,	// (0x00018cb2) list_single_graphic_2heading_pane_fp_g2

0xbdf5,	// (0x00018c0b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbdf5,	// (0x00018c0b) list_single_graphic_2heading_pane_fp_g3

0xbe01,	// (0x00018c17) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbe01,	// (0x00018c17) list_single_graphic_2heading_pane_fp_g4

0xbea8,	// (0x00018cbe) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbea8,	// (0x00018cbe) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c99b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c99b) list_single_graphic_2heading_pane_fp_g

0xc6cf,	// (0x000194e5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc6cf,	// (0x000194e5) list_single_graphic_2heading_pane_fp_t1

0xbf03,	// (0x00018d19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbf03,	// (0x00018d19) list_single_graphic_2heading_pane_fp_t2

0xc6e5,	// (0x000194fb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc6e5,	// (0x000194fb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0001ca7d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0001ca7d) list_single_graphic_2heading_pane_fp_t

0xb886,	// (0x0001869c) fep_hwr_write_pane_g5_ParamLimits

0xb886,	// (0x0001869c) fep_hwr_write_pane_g5

0xb892,	// (0x000186a8) fep_hwr_write_pane_g6_ParamLimits

0xb892,	// (0x000186a8) fep_hwr_write_pane_g6

0xc39f,	// (0x000191b5) eswt_shell_pane_ParamLimits

0x8e56,	// (0x00015c6c) bg_popup_window_pane_cp18_ParamLimits

0xa134,	// (0x00016f4a) heading_pane_cp70

0xc4c9,	// (0x000192df) popup_eswt_tasktip_window_t1_ParamLimits

0x884f,	// (0x00015665) aid_touch_tab_arrow_left

0x885e,	// (0x00015674) aid_touch_tab_arrow_right

0x361e,	// (0x00010434) title_pane_g3_ParamLimits

0x361e,	// (0x00010434) title_pane_g3

0x3d1e,	// (0x00010b34) set_value_pane_g1

0x871c,	// (0x00015532) popup_toolbar_trans_pane_ParamLimits

0xc615,	// (0x0001942b) aid_size_cell_tb_trans_pane_ParamLimits

0x3dc4,	// (0x00010bda) bg_tb_trans_pane_ParamLimits

0xc627,	// (0x0001943d) grid_tb_trans_pane_ParamLimits

0x385c,	// (0x00010672) cont_note_pane_ParamLimits

0x385c,	// (0x00010672) cont_note_pane

0x3ab9,	// (0x000108cf) cont_snote2_single_text_pane_ParamLimits

0x3ab9,	// (0x000108cf) cont_snote2_single_text_pane

0x3ab9,	// (0x000108cf) cont_snote2_single_graphic_pane_ParamLimits

0x3ab9,	// (0x000108cf) cont_snote2_single_graphic_pane

0x9461,	// (0x00016277) cont_note_wait_pane_ParamLimits

0x9461,	// (0x00016277) cont_note_wait_pane

0x9461,	// (0x00016277) cont_note_image_pane_ParamLimits

0x9461,	// (0x00016277) cont_note_image_pane

0xc6fb,	// (0x00019511) popup_note2_window_g1_ParamLimits

0xc6fb,	// (0x00019511) popup_note2_window_g1

0xc72c,	// (0x00019542) popup_note2_window_t1_ParamLimits

0xc72c,	// (0x00019542) popup_note2_window_t1

0xc771,	// (0x00019587) popup_note2_window_t2_ParamLimits

0xc771,	// (0x00019587) popup_note2_window_t2

0xc7b6,	// (0x000195cc) popup_note2_window_t3_ParamLimits

0xc7b6,	// (0x000195cc) popup_note2_window_t3

0xc7fb,	// (0x00019611) popup_note2_window_t4_ParamLimits

0xc7fb,	// (0x00019611) popup_note2_window_t4

0x38e0,	// (0x000106f6) popup_note2_window_t5_ParamLimits

0x38e0,	// (0x000106f6) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0001ca89) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0001ca89) popup_note2_window_t

0xc82a,	// (0x00019640) popup_note2_image_window_g1_ParamLimits

0xc82a,	// (0x00019640) popup_note2_image_window_g1

0xc836,	// (0x0001964c) popup_note2_image_window_g2_ParamLimits

0xc836,	// (0x0001964c) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0001ca94) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0001ca94) popup_note2_image_window_g

0xc848,	// (0x0001965e) popup_note2_image_window_t1_ParamLimits

0xc848,	// (0x0001965e) popup_note2_image_window_t1

0xc860,	// (0x00019676) popup_note2_image_window_t2_ParamLimits

0xc860,	// (0x00019676) popup_note2_image_window_t2

0xc878,	// (0x0001968e) popup_note2_image_window_t3_ParamLimits

0xc878,	// (0x0001968e) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0001ca99) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0001ca99) popup_note2_image_window_t

0x946f,	// (0x00016285) popup_note2_wait_window_g1_ParamLimits

0x946f,	// (0x00016285) popup_note2_wait_window_g1

0xc894,	// (0x000196aa) popup_note2_wait_window_g2_ParamLimits

0xc894,	// (0x000196aa) popup_note2_wait_window_g2

0x9487,	// (0x0001629d) popup_note2_wait_window_g3_ParamLimits

0x9487,	// (0x0001629d) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0001caa0) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0001caa0) popup_note2_wait_window_g

0xc8a0,	// (0x000196b6) popup_note2_wait_window_t1_ParamLimits

0xc8a0,	// (0x000196b6) popup_note2_wait_window_t1

0xc8be,	// (0x000196d4) popup_note2_wait_window_t2_ParamLimits

0xc8be,	// (0x000196d4) popup_note2_wait_window_t2

0xc8dc,	// (0x000196f2) popup_note2_wait_window_t3_ParamLimits

0xc8dc,	// (0x000196f2) popup_note2_wait_window_t3

0xc8ee,	// (0x00019704) popup_note2_wait_window_t4_ParamLimits

0xc8ee,	// (0x00019704) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0001caa7) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0001caa7) popup_note2_wait_window_t

0xc900,	// (0x00019716) wait_bar2_pane_ParamLimits

0xc900,	// (0x00019716) wait_bar2_pane

0xc918,	// (0x0001972e) popup_snote2_single_text_window_g1_ParamLimits

0xc918,	// (0x0001972e) popup_snote2_single_text_window_g1

0xc940,	// (0x00019756) popup_snote2_single_text_window_t1_ParamLimits

0xc940,	// (0x00019756) popup_snote2_single_text_window_t1

0xc98c,	// (0x000197a2) popup_snote2_single_text_window_t2_ParamLimits

0xc98c,	// (0x000197a2) popup_snote2_single_text_window_t2

0xc9d8,	// (0x000197ee) popup_snote2_single_text_window_t3_ParamLimits

0xc9d8,	// (0x000197ee) popup_snote2_single_text_window_t3

0xca19,	// (0x0001982f) popup_snote2_single_text_window_t4_ParamLimits

0xca19,	// (0x0001982f) popup_snote2_single_text_window_t4

0xca4f,	// (0x00019865) popup_snote2_single_text_window_t5_ParamLimits

0xca4f,	// (0x00019865) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0001cab0) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0001cab0) popup_snote2_single_text_window_t

0xca7a,	// (0x00019890) popup_snote2_single_graphic_window_g1_ParamLimits

0xca7a,	// (0x00019890) popup_snote2_single_graphic_window_g1

0xcaa2,	// (0x000198b8) popup_snote2_single_graphic_window_g2_ParamLimits

0xcaa2,	// (0x000198b8) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0001cabb) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0001cabb) popup_snote2_single_graphic_window_g

0xcaca,	// (0x000198e0) popup_snote2_single_graphic_window_t1_ParamLimits

0xcaca,	// (0x000198e0) popup_snote2_single_graphic_window_t1

0xcb16,	// (0x0001992c) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb16,	// (0x0001992c) popup_snote2_single_graphic_window_t2

0xc9d8,	// (0x000197ee) popup_snote2_single_graphic_window_t3_ParamLimits

0xc9d8,	// (0x000197ee) popup_snote2_single_graphic_window_t3

0xca19,	// (0x0001982f) popup_snote2_single_graphic_window_t4_ParamLimits

0xca19,	// (0x0001982f) popup_snote2_single_graphic_window_t4

0xca4f,	// (0x00019865) popup_snote2_single_graphic_window_t5_ParamLimits

0xca4f,	// (0x00019865) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0001cac0) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0001cac0) popup_snote2_single_graphic_window_t

0xb28f,	// (0x000180a5) clock_nsta_pane_cp2_t1

0xb28f,	// (0x000180a5) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001c8d4) clock_nsta_pane_cp2_t

0x3de3,	// (0x00010bf9) form_field_data_wide_pane_g1_ParamLimits

0x3def,	// (0x00010c05) form_field_data_wide_pane_g2_ParamLimits

0x3def,	// (0x00010c05) form_field_data_wide_pane_g2

0x3dfb,	// (0x00010c11) form_field_data_wide_pane_g3_ParamLimits

0x3dfb,	// (0x00010c11) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001c492) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001c492) form_field_data_wide_pane_g

0xb168,	// (0x00017f7e) grid_touch_3_pane_ParamLimits

0xb168,	// (0x00017f7e) grid_touch_3_pane

0xcb62,	// (0x00019978) cell_touch_3_pane_ParamLimits

0xcb62,	// (0x00019978) cell_touch_3_pane

0xb7f5,	// (0x0001860b) cell_touch_3_pane_g1

0xb7f5,	// (0x0001860b) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001c959) cell_touch_3_pane_g

0x3912,	// (0x00010728) cont_query_data_pane

0x391a,	// (0x00010730) cont_query_data_pane_cp1

0xcb95,	// (0x000199ab) button_value_adjust_pane_cp7

0xcb9d,	// (0x000199b3) query_popup_pane_cp3

0x7887,	// (0x0001469d) bg_popup_sub_pane_cp22_ParamLimits

0x5696,	// (0x000124ac) navi_navi_volume_pane_cp2

0x56b1,	// (0x000124c7) popup_side_volume_key_window_g2

0x56c0,	// (0x000124d6) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001c528) popup_side_volume_key_window_g

0x56dd,	// (0x000124f3) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001c52f) popup_side_volume_key_window_t

0x7bce,	// (0x000149e4) popup_side_volume_key_window_ParamLimits

0x7266,	// (0x0001407c) list_double_graphic_pane_g4_ParamLimits

0x7266,	// (0x0001407c) list_double_graphic_pane_g4

0xa47a,	// (0x00017290) list_single_2heading_msg_pane_ParamLimits

0xa47a,	// (0x00017290) list_single_2heading_msg_pane

0xcbce,	// (0x000199e4) list_single_2heading_msg_pane_g1_ParamLimits

0xcbce,	// (0x000199e4) list_single_2heading_msg_pane_g1

0x3e49,	// (0x00010c5f) list_single_2heading_msg_pane_g2_ParamLimits

0x3e49,	// (0x00010c5f) list_single_2heading_msg_pane_g2

0xcbda,	// (0x000199f0) list_single_2heading_msg_pane_g3_ParamLimits

0xcbda,	// (0x000199f0) list_single_2heading_msg_pane_g3

0xcbe6,	// (0x000199fc) list_single_2heading_msg_pane_g4_ParamLimits

0xcbe6,	// (0x000199fc) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0001cacb) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0001cacb) list_single_2heading_msg_pane_g

0xcbfe,	// (0x00019a14) list_single_2heading_msg_pane_t1_ParamLimits

0xcbfe,	// (0x00019a14) list_single_2heading_msg_pane_t1

0xcc26,	// (0x00019a3c) list_single_2heading_msg_pane_t2_ParamLimits

0xcc26,	// (0x00019a3c) list_single_2heading_msg_pane_t2

0xcc55,	// (0x00019a6b) list_single_2heading_msg_pane_t3_ParamLimits

0xcc55,	// (0x00019a6b) list_single_2heading_msg_pane_t3

0xcc8e,	// (0x00019aa4) list_single_2heading_msg_pane_t4_ParamLimits

0xcc8e,	// (0x00019aa4) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0001cad4) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0001cad4) list_single_2heading_msg_pane_t

0x362a,	// (0x00010440) title_pane_g4_ParamLimits

0x362a,	// (0x00010440) title_pane_g4

0x54a2,	// (0x000122b8) title_pane_stacon_g3_ParamLimits

0x54a2,	// (0x000122b8) title_pane_stacon_g3

0xc692,	// (0x000194a8) list_single_2graphic_im_pane_g4_ParamLimits

0xc692,	// (0x000194a8) list_single_2graphic_im_pane_g4

0x9ed1,	// (0x00016ce7) popup_side_volume_key_window_cp

0xa7ce,	// (0x000175e4) main_idle_act2_pane_t1

0x5ac8,	// (0x000128de) toolbar_button_pane_g10

0x70a3,	// (0x00013eb9) popup_toolbar_window_cp1

0xb280,	// (0x00018096) clock_nsta_pane_cp_t1

0xb280,	// (0x00018096) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001c8cf) clock_nsta_pane_cp_t

0x5696,	// (0x000124ac) navi_navi_volume_pane_cp2_ParamLimits

0x56a5,	// (0x000124bb) popup_side_volume_key_window_g1_ParamLimits

0x56b1,	// (0x000124c7) popup_side_volume_key_window_g2_ParamLimits

0x56c0,	// (0x000124d6) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001c528) popup_side_volume_key_window_g_ParamLimits

0x5f51,	// (0x00012d67) fep_hwr_aid_pane

0x5ffa,	// (0x00012e10) bg_fep_hwr_top_pane_g4_ParamLimits

0xb856,	// (0x0001866c) fep_hwr_top_pane_g1_ParamLimits

0xb868,	// (0x0001867e) fep_hwr_top_pane_g2_ParamLimits

0x601a,	// (0x00012e30) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001c924) fep_hwr_top_pane_g_ParamLimits

0x602f,	// (0x00012e45) fep_hwr_top_text_pane_ParamLimits

0x9c86,	// (0x00016a9c) aid_touch_tab_arrow_arrow_2

0x9c8f,	// (0x00016aa5) aid_touch_tab_arrow_left_2

0x5f65,	// (0x00012d7b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f9c,	// (0x00012db2) fep_hwr_prediction_pane

0xb9be,	// (0x000187d4) fep_vkb_prediction_pane

0xbac4,	// (0x000188da) fep_vkb_side_pane_g3_ParamLimits

0xbac4,	// (0x000188da) fep_vkb_side_pane_g3

0x61be,	// (0x00012fd4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x622f,	// (0x00013045) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x623c,	// (0x00013052) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0001c9d3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x636b,	// (0x00013181) fep_hwr_prediction_pane_g1

0x6375,	// (0x0001318b) fep_hwr_prediction_pane_g2

0x637d,	// (0x00013193) fep_hwr_prediction_pane_g3

0x6385,	// (0x0001319b) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001cadd) fep_hwr_prediction_pane_g

0xccb3,	// (0x00019ac9) fep_vkb_prediction_pane_g1

0xccbd,	// (0x00019ad3) fep_vkb_prediction_pane_g2

0xccc5,	// (0x00019adb) fep_vkb_prediction_pane_g3

0xcccd,	// (0x00019ae3) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001cae6) fep_vkb_prediction_pane_g

0x5dd1,	// (0x00012be7) slider_set_pane_g3

0x5de5,	// (0x00012bfb) slider_set_pane_g4

0x5dfd,	// (0x00012c13) slider_set_pane_g5

0x5dd1,	// (0x00012be7) slider_set_pane_g6

0x5e13,	// (0x00012c29) slider_set_pane_g7

0xa39b,	// (0x000171b1) slider_form_pane_g3

0xa3a4,	// (0x000171ba) slider_form_pane_g4

0xa3ac,	// (0x000171c2) slider_form_pane_g5

0xa39b,	// (0x000171b1) slider_form_pane_g6

0xa3b4,	// (0x000171ca) slider_form_pane_g7

0xaad1,	// (0x000178e7) slider_set_pane_vc_g3

0xaada,	// (0x000178f0) slider_set_pane_vc_g4

0xaae3,	// (0x000178f9) slider_set_pane_vc_g5

0xaad1,	// (0x000178e7) slider_set_pane_vc_g6

0xaaec,	// (0x00017902) slider_set_pane_vc_g7

0xaf2d,	// (0x00017d43) slider_form_pane_vc_g1

0xaf36,	// (0x00017d4c) slider_form_pane_vc_g2

0xaf3f,	// (0x00017d55) slider_form_pane_vc_g3

0xaf2d,	// (0x00017d43) slider_form_pane_vc_g4

0xaf48,	// (0x00017d5e) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001c8a1) slider_form_pane_vc_g

0x33d0,	// (0x000101e6) main_idle_act3_pane

0xccd5,	// (0x00019aeb) ai3_links_pane

0xccde,	// (0x00019af4) popup_ai3_data_window_ParamLimits

0xccde,	// (0x00019af4) popup_ai3_data_window

0x33d0,	// (0x000101e6) grid_ai3_links_pane

0xccfc,	// (0x00019b12) cell_ai3_links_pane_ParamLimits

0xccfc,	// (0x00019b12) cell_ai3_links_pane

0xcd16,	// (0x00019b2c) bg_popup_sub_pane_cp11

0xcd23,	// (0x00019b39) cell_ai3_links_pane_g1

0x33d0,	// (0x000101e6) bg_popup_sub_pane_cp12

0xcd48,	// (0x00019b5e) heading_ai3_data_pane

0xcd50,	// (0x00019b66) list_ai3_gene_pane

0xcd5c,	// (0x00019b72) popup_ai3_data_window_g1

0xcd64,	// (0x00019b7a) heading_ai3_data_pane_g1

0xcd6c,	// (0x00019b82) heading_ai3_data_pane_t1

0xcd7a,	// (0x00019b90) list_double_ai3_gene_pane_ParamLimits

0xcd7a,	// (0x00019b90) list_double_ai3_gene_pane

0xcd87,	// (0x00019b9d) list_single_ai3_gene_pane_ParamLimits

0xcd87,	// (0x00019b9d) list_single_ai3_gene_pane

0xb7ba,	// (0x000185d0) list_highlight_pane_cp7_ParamLimits

0xb7ba,	// (0x000185d0) list_highlight_pane_cp7

0xcd94,	// (0x00019baa) list_single_a13_gene_pane_t1_ParamLimits

0xcd94,	// (0x00019baa) list_single_a13_gene_pane_t1

0xcdab,	// (0x00019bc1) list_single_ai3_gene_pane_g1

0xcdb4,	// (0x00019bca) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0001caef) list_single_ai3_gene_pane_g

0xcdbc,	// (0x00019bd2) list_double_ai3_gene_pane_g1_ParamLimits

0xcdbc,	// (0x00019bd2) list_double_ai3_gene_pane_g1

0xcdc8,	// (0x00019bde) list_double_ai3_gene_pane_t1_ParamLimits

0xcdc8,	// (0x00019bde) list_double_ai3_gene_pane_t1

0xcde4,	// (0x00019bfa) list_double_ai3_gene_pane_t2_ParamLimits

0xcde4,	// (0x00019bfa) list_double_ai3_gene_pane_t2

0xcdf9,	// (0x00019c0f) list_double_ai3_gene_pane_t3_ParamLimits

0xcdf9,	// (0x00019c0f) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0001caf4) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0001caf4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcbae,	// (0x000199c4) aid_size_min_col_2

0xcbb8,	// (0x000199ce) aid_size_min_msg_ParamLimits

0xcbb8,	// (0x000199ce) aid_size_min_msg

0xbbd0,	// (0x000189e6) fep_vkb_top_text_pane_g2_ParamLimits

0xbbd0,	// (0x000189e6) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001c954) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001c954) fep_vkb_top_text_pane_g

0x33d0,	// (0x000101e6) main_hc_apps_shell_pane

0xce16,	// (0x00019c2c) grid_hc_apps_pane_ParamLimits

0xce16,	// (0x00019c2c) grid_hc_apps_pane

0xce25,	// (0x00019c3b) list_hc_apps_pane

0xce2d,	// (0x00019c43) scroll_pane_cp37_ParamLimits

0xce2d,	// (0x00019c43) scroll_pane_cp37

0xce39,	// (0x00019c4f) cell_hc_apps_pane_ParamLimits

0xce39,	// (0x00019c4f) cell_hc_apps_pane

0xcef1,	// (0x00019d07) cell_hc_apps_pane_g1_ParamLimits

0xcef1,	// (0x00019d07) cell_hc_apps_pane_g1

0xcf22,	// (0x00019d38) cell_hc_apps_pane_g2_ParamLimits

0xcf22,	// (0x00019d38) cell_hc_apps_pane_g2

0xcf3e,	// (0x00019d54) cell_hc_apps_pane_g3_ParamLimits

0xcf3e,	// (0x00019d54) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0001cafb) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0001cafb) cell_hc_apps_pane_g

0xcf60,	// (0x00019d76) cell_hc_apps_pane_t1_ParamLimits

0xcf60,	// (0x00019d76) cell_hc_apps_pane_t1

0x385c,	// (0x00010672) grid_highlight_pane_cp10_ParamLimits

0x385c,	// (0x00010672) grid_highlight_pane_cp10

0xcfa0,	// (0x00019db6) list_single_hc_apps_pane_ParamLimits

0xcfa0,	// (0x00019db6) list_single_hc_apps_pane

0xcfdf,	// (0x00019df5) list_single_hc_apps_pane_g1

0xcff8,	// (0x00019e0e) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0001cb02) list_single_hc_apps_pane_g

0xd011,	// (0x00019e27) list_single_hc_apps_pane_g2_copy1

0xd02d,	// (0x00019e43) list_single_hc_apps_pane_t1

0x3686,	// (0x0001049c) bg_set_opt_pane_cp_ParamLimits

0x53c9,	// (0x000121df) setting_slider_pane_t1_ParamLimits

0x53e2,	// (0x000121f8) setting_slider_pane_t2_ParamLimits

0x53fc,	// (0x00012212) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001c37a) setting_slider_pane_t_ParamLimits

0x5414,	// (0x0001222a) slider_set_pane_ParamLimits

0x5944,	// (0x0001275a) control_pane_g5_ParamLimits

0x5944,	// (0x0001275a) control_pane_g5

0xa1c8,	// (0x00016fde) slider_set_pane_g1_ParamLimits

0x5dc5,	// (0x00012bdb) slider_set_pane_g2_ParamLimits

0x5dd1,	// (0x00012be7) slider_set_pane_g3_ParamLimits

0x5de5,	// (0x00012bfb) slider_set_pane_g4_ParamLimits

0x5dfd,	// (0x00012c13) slider_set_pane_g5_ParamLimits

0x5dd1,	// (0x00012be7) slider_set_pane_g6_ParamLimits

0x5e13,	// (0x00012c29) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001c77b) slider_set_pane_g_ParamLimits

0x7cb3,	// (0x00014ac9) navi_icon_text_pane_ParamLimits

0x880e,	// (0x00015624) aid_fill_nsta_2_ParamLimits

0x884f,	// (0x00015665) aid_touch_tab_arrow_left_ParamLimits

0x885e,	// (0x00015674) aid_touch_tab_arrow_right_ParamLimits

0x88cb,	// (0x000156e1) clock_nsta_pane_ParamLimits

0x9c68,	// (0x00016a7e) navi_icon_pane_g1_ParamLimits

0x9c74,	// (0x00016a8a) navi_text_pane_t1_ParamLimits

0xb39d,	// (0x000181b3) navi_icon_text_pane_g1_ParamLimits

0xb3a9,	// (0x000181bf) navi_icon_text_pane_t1_ParamLimits

0xcfdf,	// (0x00019df5) list_single_hc_apps_pane_g1_ParamLimits

0xcff8,	// (0x00019e0e) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0001cb02) list_single_hc_apps_pane_g_ParamLimits

0xd011,	// (0x00019e27) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd02d,	// (0x00019e43) list_single_hc_apps_pane_t1_ParamLimits

0x52d3,	// (0x000120e9) popup_toolbar2_fixed_window_ParamLimits

0x52d3,	// (0x000120e9) popup_toolbar2_fixed_window

0x8712,	// (0x00015528) popup_toolbar2_float_window

0x33d0,	// (0x000101e6) bg_popup_sub_pane_cp27

0xd05b,	// (0x00019e71) grid_toolbar2_float_pane

0x33d0,	// (0x000101e6) bg_popup_sub_pane_cp26

0xd05b,	// (0x00019e71) grid_toolbar2_fixed_pane

0xd063,	// (0x00019e79) cell_toolbar2_fixed_pane_ParamLimits

0xd063,	// (0x00019e79) cell_toolbar2_fixed_pane

0xd073,	// (0x00019e89) cell_toolbar2_fixed_pane_g1

0xd07c,	// (0x00019e92) toolbar2_fixed_button_pane

0x8d30,	// (0x00015b46) toolbar2_fixed_button_pane_g1

0x8d40,	// (0x00015b56) toolbar2_fixed_button_pane_g2

0x8d38,	// (0x00015b4e) toolbar2_fixed_button_pane_g3

0x8d50,	// (0x00015b66) toolbar2_fixed_button_pane_g4

0x8d48,	// (0x00015b5e) toolbar2_fixed_button_pane_g5

0x8d58,	// (0x00015b6e) toolbar2_fixed_button_pane_g6

0x8d60,	// (0x00015b76) toolbar2_fixed_button_pane_g7

0x8d70,	// (0x00015b86) toolbar2_fixed_button_pane_g8

0x8d68,	// (0x00015b7e) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001c67d) toolbar2_fixed_button_pane_g

0xd084,	// (0x00019e9a) cell_toolbar2_float_pane_ParamLimits

0xd084,	// (0x00019e9a) cell_toolbar2_float_pane

0xd095,	// (0x00019eab) cell_toolbar2_float_pane_g1

0xd07c,	// (0x00019e92) toolbar2_fixed_button_pane_cp

0xb92c,	// (0x00018742) fep_vkb_accented_list_pane_ParamLimits

0xb92c,	// (0x00018742) fep_vkb_accented_list_pane

0x619e,	// (0x00012fb4) bg_popup_fep_shadow_pane_g9

0x7e37,	// (0x00014c4d) bg_popup_fep_shadow_pane_cp3

0x3f98,	// (0x00010dae) list_accented_list_pane

0xd09e,	// (0x00019eb4) list_single_accented_list_pane_ParamLimits

0xd09e,	// (0x00019eb4) list_single_accented_list_pane

0x7e37,	// (0x00014c4d) list_highlight_pane_cp10

0xd0af,	// (0x00019ec5) list_single_accented_list_pane_t1

0x8658,	// (0x0001546e) popup_slider_window_ParamLimits

0x8658,	// (0x0001546e) popup_slider_window

0xcba5,	// (0x000199bb) aid_indentation_list_msg

0xd17b,	// (0x00019f91) bg_popup_window_pane_cp19

0xd1e9,	// (0x00019fff) popup_slider_window_g1

0xd205,	// (0x0001a01b) popup_slider_window_g2

0xd221,	// (0x0001a037) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0001cb07) popup_slider_window_g

0xd27d,	// (0x0001a093) popup_slider_window_t1

0xd2f1,	// (0x0001a107) small_volume_slider_vertical_pane

0xb7f5,	// (0x0001860b) small_volume_slider_vertical_pane_g1

0xb7f5,	// (0x0001860b) small_volume_slider_vertical_pane_g2

0xd30d,	// (0x0001a123) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0001cb19) small_volume_slider_vertical_pane_g

0x5081,	// (0x00011e97) area_side_right_pane_ParamLimits

0x5081,	// (0x00011e97) area_side_right_pane

0x638d,	// (0x000131a3) aid_size_side_button_ParamLimits

0x638d,	// (0x000131a3) aid_size_side_button

0x63a1,	// (0x000131b7) grid_sctrl_middle_pane_ParamLimits

0x63a1,	// (0x000131b7) grid_sctrl_middle_pane

0x63c1,	// (0x000131d7) sctrl_sk_bottom_pane

0x63d2,	// (0x000131e8) sctrl_sk_top_pane

0x63e4,	// (0x000131fa) aid_touch_sctrl_top

0x63f1,	// (0x00013207) bg_sctrl_sk_pane_ParamLimits

0x63f1,	// (0x00013207) bg_sctrl_sk_pane

0x63ff,	// (0x00013215) sctrl_sk_top_pane_g1

0x640c,	// (0x00013222) sctrl_sk_top_pane_t1

0x63e4,	// (0x000131fa) aid_touch_sctrl_bottom

0x63f1,	// (0x00013207) bg_sctrl_sk_pane_cp_ParamLimits

0x63f1,	// (0x00013207) bg_sctrl_sk_pane_cp

0x6427,	// (0x0001323d) sctrl_sk_bottom_pane_g1

0x640c,	// (0x00013222) sctrl_sk_bottom_pane_t1

0x6430,	// (0x00013246) cell_sctrl_middle_pane_ParamLimits

0x6430,	// (0x00013246) cell_sctrl_middle_pane

0x644d,	// (0x00013263) aid_touch_sctrl_middle_ParamLimits

0x644d,	// (0x00013263) aid_touch_sctrl_middle

0x645f,	// (0x00013275) bg_sctrl_middle_pane_ParamLimits

0x645f,	// (0x00013275) bg_sctrl_middle_pane

0x61be,	// (0x00012fd4) cell_sctrl_middle_pane_g1_ParamLimits

0x61be,	// (0x00012fd4) cell_sctrl_middle_pane_g1

0x646d,	// (0x00013283) cell_sctrl_middle_pane_g2_ParamLimits

0x646d,	// (0x00013283) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0001cb25) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0001cb25) cell_sctrl_middle_pane_g

0x8d30,	// (0x00015b46) bg_sctrl_middle_pane_g1

0x8d38,	// (0x00015b4e) bg_sctrl_middle_pane_g2

0x8d40,	// (0x00015b56) bg_sctrl_middle_pane_g3

0x8d48,	// (0x00015b5e) bg_sctrl_middle_pane_g4

0x8d50,	// (0x00015b66) bg_sctrl_middle_pane_g5

0x8d58,	// (0x00015b6e) bg_sctrl_middle_pane_g6

0x8d60,	// (0x00015b76) bg_sctrl_middle_pane_g7

0x8d68,	// (0x00015b7e) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0001cb2a) bg_sctrl_middle_pane_g

0x8d70,	// (0x00015b86) bg_sctrl_middle_pane_g8_copy1

0x8d30,	// (0x00015b46) bg_sctrl_sk_pane_g1

0x8d40,	// (0x00015b56) bg_sctrl_sk_pane_g2

0x8d38,	// (0x00015b4e) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001c67d) bg_sctrl_sk_pane_g

0x3c77,	// (0x00010a8d) aid_size_touch_scroll_bar

0x8d50,	// (0x00015b66) bg_sctrl_sk_pane_g4

0x8d48,	// (0x00015b5e) bg_sctrl_sk_pane_g5

0x8d58,	// (0x00015b6e) bg_sctrl_sk_pane_g6

0x8d60,	// (0x00015b76) bg_sctrl_sk_pane_g7

0x8d70,	// (0x00015b86) bg_sctrl_sk_pane_g8

0x8d68,	// (0x00015b7e) bg_sctrl_sk_pane_g9

0x826f,	// (0x00015085) popup_fep_china_hwr2_fs_candidate_window

0x8279,	// (0x0001508f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8279,	// (0x0001508f) popup_fep_china_hwr2_fs_control_window

0x61be,	// (0x00012fd4) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0001cb20) sctrl_sk_top_pane_g

0xd316,	// (0x0001a12c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd316,	// (0x0001a12c) aid_fep_china_hwr2_fs_cell

0xd329,	// (0x0001a13f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd329,	// (0x0001a13f) bg_popup_fep_shadow_pane_cp4

0xd342,	// (0x0001a158) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd342,	// (0x0001a158) bg_popup_fep_shadow_pane_cp5

0xd354,	// (0x0001a16a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd354,	// (0x0001a16a) popup_fep_china_hwr2_fs_control_bar_grid

0xd364,	// (0x0001a17a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd36c,	// (0x0001a182) aid_fep_china_hwr2_fs_candi_cell

0x33d0,	// (0x000101e6) bg_popup_fep_shadow_pane_cp6

0xd376,	// (0x0001a18c) popup_fep_china_hwr2_fs_candidate_grid

0xd380,	// (0x0001a196) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd380,	// (0x0001a196) cell_fep_china_hwr2_fs_funtion_grid

0xb7f5,	// (0x0001860b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd398,	// (0x0001a1ae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd398,	// (0x0001a1ae) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd3a6,	// (0x0001a1bc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd3a6,	// (0x0001a1bc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0001cb3b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0001cb3b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3bc,	// (0x0001a1d2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3bc,	// (0x0001a1d2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3d1,	// (0x0001a1e7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3d1,	// (0x0001a1e7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0001cb40) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0001cb40) cell_fep_china_hwr2_fs_funtion_grid_t

0xd3ed,	// (0x0001a203) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd3f5,	// (0x0001a20b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd3fd,	// (0x0001a213) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0001cb45) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd405,	// (0x0001a21b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd405,	// (0x0001a21b) cell_fep_china_hwr2_fs_candidate_grid

0xd424,	// (0x0001a23a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd42c,	// (0x0001a242) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb7f5,	// (0x0001860b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb7f5,	// (0x0001860b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001c959) cell_fep_china_hwr2_fs_candidate_grid_g

0xd434,	// (0x0001a24a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x88de,	// (0x000156f4) clock_nsta_pane_cp_24_ParamLimits

0x88de,	// (0x000156f4) clock_nsta_pane_cp_24

0x895e,	// (0x00015774) indicator_nsta_pane_cp_24_ParamLimits

0x895e,	// (0x00015774) indicator_nsta_pane_cp_24

0x9ae4,	// (0x000168fa) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001c6e2) heading_pane_g

0xa615,	// (0x0001742b) grid_sct_catagory_button_pane

0xa647,	// (0x0001745d) scroll_pane_cp5_ParamLimits

0xb3eb,	// (0x00018201) button_value_adjust_pane_cp5_ParamLimits

0xb3eb,	// (0x00018201) button_value_adjust_pane_cp5

0xb4f1,	// (0x00018307) form2_midp_time_pane_ParamLimits

0xd442,	// (0x0001a258) cell_sct_catagory_button_pane_ParamLimits

0xd442,	// (0x0001a258) cell_sct_catagory_button_pane

0xb7ba,	// (0x000185d0) bg_button_pane_cp01_ParamLimits

0xb7ba,	// (0x000185d0) bg_button_pane_cp01

0xb7f5,	// (0x0001860b) cell_sct_catagory_button_pane_g1

0x8699,	// (0x000154af) popup_tb_extension_window

0xd454,	// (0x0001a26a) aid_size_cell_ext_ParamLimits

0xd454,	// (0x0001a26a) aid_size_cell_ext

0x385c,	// (0x00010672) bg_tb_trans_pane_cp1_ParamLimits

0x385c,	// (0x00010672) bg_tb_trans_pane_cp1

0xd474,	// (0x0001a28a) grid_tb_ext_pane_ParamLimits

0xd474,	// (0x0001a28a) grid_tb_ext_pane

0xd4a4,	// (0x0001a2ba) cell_tb_ext_pane_ParamLimits

0xd4a4,	// (0x0001a2ba) cell_tb_ext_pane

0xd4bb,	// (0x0001a2d1) cell_tb_ext_pane_g1_ParamLimits

0xd4bb,	// (0x0001a2d1) cell_tb_ext_pane_g1

0xd4d8,	// (0x0001a2ee) cell_tb_ext_pane_t1

0x385c,	// (0x00010672) list_highlight_pane_cp11_ParamLimits

0x385c,	// (0x00010672) list_highlight_pane_cp11

0x52f2,	// (0x00012108) popup_uni_indicator_window_ParamLimits

0x52f2,	// (0x00012108) popup_uni_indicator_window

0x3dc4,	// (0x00010bda) bg_popup_sub_pane_cp14

0xd4f3,	// (0x0001a309) list_uniindi_pane

0xd4ff,	// (0x0001a315) uniindi_top_pane

0x385c,	// (0x00010672) bg_uniindi_top_pane

0xd520,	// (0x0001a336) uniindi_top_pane_g1

0xd536,	// (0x0001a34c) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0001cb4c) uniindi_top_pane_g

0xd560,	// (0x0001a376) uniindi_top_pane_t1

0xd58c,	// (0x0001a3a2) list_single_uniindi_pane_ParamLimits

0xd58c,	// (0x0001a3a2) list_single_uniindi_pane

0xb7f5,	// (0x0001860b) bg_uniindi_top_pane_g1

0xd59e,	// (0x0001a3b4) list_single_uniindi_pane_g1

0xd5b1,	// (0x0001a3c7) list_single_uniindi_pane_t1

0x515e,	// (0x00011f74) control_bg_pane

0xd5d6,	// (0x0001a3ec) bg_sctrl_sk_pane_cp1

0xd5df,	// (0x0001a3f5) bg_sctrl_sk_pane_cp2

0xd5e8,	// (0x0001a3fe) control_bg_pane_g1

0xd5f1,	// (0x0001a407) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0001cb55) control_bg_pane_g

0xb212,	// (0x00018028) cell_indicator_nsta_pane_g1_ParamLimits

0xb220,	// (0x00018036) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001c8bd) cell_indicator_nsta_pane_g_ParamLimits

0xb581,	// (0x00018397) form2_midp_time_pane_t1_ParamLimits

0x3ab9,	// (0x000108cf) main_idle_act4_pane_ParamLimits

0x3ab9,	// (0x000108cf) main_idle_act4_pane

0x8699,	// (0x000154af) popup_tb_extension_window_ParamLimits

0xd496,	// (0x0001a2ac) tb_ext_find_pane_ParamLimits

0xd496,	// (0x0001a2ac) tb_ext_find_pane

0xd5fa,	// (0x0001a410) ai_gene_pane_1_cp1

0x7f74,	// (0x00014d8a) ai_gene_pane_2_cp1

0xd602,	// (0x0001a418) list_single_idle_plugin_calendar_pane

0xd60b,	// (0x0001a421) list_single_idle_plugin_notification_pane

0xd614,	// (0x0001a42a) list_single_idle_plugin_player_pane

0xd61d,	// (0x0001a433) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd61d,	// (0x0001a433) list_single_idle_plugin_shortcut_pane

0xd63f,	// (0x0001a455) main_idle_act4_pane_t1

0xd651,	// (0x0001a467) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0001cb5a) main_idle_act4_pane_t

0xd663,	// (0x0001a479) middle_sk_idle_act4_pane_ParamLimits

0xd663,	// (0x0001a479) middle_sk_idle_act4_pane

0xd679,	// (0x0001a48f) popup_clock_digital_analogue_window_cp2

0xd693,	// (0x0001a4a9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd693,	// (0x0001a4a9) shortcut_wheel_idle_act4_pane

0xb7f5,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g1

0xb7f5,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g2

0xb7f5,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g3

0xb7f5,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g4

0xb7f5,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g5

0xd6a7,	// (0x0001a4bd) shortcut_wheel_idle_act4_pane_g6

0xd6af,	// (0x0001a4c5) shortcut_wheel_idle_act4_pane_g7

0xd6b7,	// (0x0001a4cd) shortcut_wheel_idle_act4_pane_g8

0xd6bf,	// (0x0001a4d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0001cb5f) shortcut_wheel_idle_act4_pane_g

0xba70,	// (0x00018886) middle_sk_idle_act4_pane_g1_ParamLimits

0xba70,	// (0x00018886) middle_sk_idle_act4_pane_g1

0xd723,	// (0x0001a539) middle_sk_idle_act4_pane_g2_ParamLimits

0xd723,	// (0x0001a539) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0001cb82) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0001cb82) middle_sk_idle_act4_pane_g

0xd72f,	// (0x0001a545) middle_sk_idle_act4_pane_t1_ParamLimits

0xd72f,	// (0x0001a545) middle_sk_idle_act4_pane_t1

0xd74c,	// (0x0001a562) grid_ai_shortcut_pane_ParamLimits

0xd74c,	// (0x0001a562) grid_ai_shortcut_pane

0xd765,	// (0x0001a57b) list_highlight_pane_cp16_ParamLimits

0xd765,	// (0x0001a57b) list_highlight_pane_cp16

0xd772,	// (0x0001a588) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd772,	// (0x0001a588) list_single_idle_plugin_shortcut_pane_g1

0xd77e,	// (0x0001a594) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd77e,	// (0x0001a594) list_single_idle_plugin_shortcut_pane_g2

0xd798,	// (0x0001a5ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd798,	// (0x0001a5ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0001cb87) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0001cb87) list_single_idle_plugin_shortcut_pane_g

0xd7ab,	// (0x0001a5c1) cell_ai_shortcut_pane_ParamLimits

0xd7ab,	// (0x0001a5c1) cell_ai_shortcut_pane

0xd7ce,	// (0x0001a5e4) cell_ai_shortcut_pane_g1_ParamLimits

0xd7ce,	// (0x0001a5e4) cell_ai_shortcut_pane_g1

0xd5fa,	// (0x0001a410) ai_gene_pane_1_cp2

0xd7f0,	// (0x0001a606) ai_gene_pane_2_cp2

0xd7f8,	// (0x0001a60e) list_highlight_pane_cp15

0xd801,	// (0x0001a617) list_single_idle_plugin_calendar_pane_g1

0xd7f8,	// (0x0001a60e) list_highlight_pane_cp17

0xd809,	// (0x0001a61f) list_single_idle_plugin_calendar_pane_g1_copy1

0xd811,	// (0x0001a627) list_single_idle_plugin_player_pane_g1

0xa87c,	// (0x00017692) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0001cb8e) list_single_idle_plugin_player_pane_g

0xd819,	// (0x0001a62f) list_single_idle_plugin_player_pane_t1

0xd827,	// (0x0001a63d) list_single_idle_plugin_player_pane_t2

0xd835,	// (0x0001a64b) list_single_idle_plugin_player_pane_t3

0xd843,	// (0x0001a659) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0001cb93) list_single_idle_plugin_player_pane_t

0xd851,	// (0x0001a667) wait_bar_pane_cp15

0xd859,	// (0x0001a66f) grid_ai_notification_pane

0xa87c,	// (0x00017692) list_single_idle_plugin_notification_pane_g1

0xd862,	// (0x0001a678) cell_ai_notification_pane_ParamLimits

0xd862,	// (0x0001a678) cell_ai_notification_pane

0xd86f,	// (0x0001a685) cell_ai_notification_pane_g1

0xd877,	// (0x0001a68d) cell_ai_notification_pane_t1

0xd885,	// (0x0001a69b) tb_ext_find_button_pane

0xd88d,	// (0x0001a6a3) tb_ext_find_pane_g1

0xd895,	// (0x0001a6ab) tb_ext_find_pane_t1

0x4536,	// (0x0001134c) tb_ext_find_button_pane_g1

0xd8a3,	// (0x0001a6b9) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0001cb9c) tb_ext_find_button_pane_g

0xd63f,	// (0x0001a455) main_idle_act4_pane_t1_ParamLimits

0xd651,	// (0x0001a467) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0001cb5a) main_idle_act4_pane_t_ParamLimits

0xd679,	// (0x0001a48f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd687,	// (0x0001a49d) sat_plugin_idle_act4_pane_ParamLimits

0xd687,	// (0x0001a49d) sat_plugin_idle_act4_pane

0xd8ac,	// (0x0001a6c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd8ac,	// (0x0001a6c2) sat_plugin_idle_act4_pane_t1

0xd8bf,	// (0x0001a6d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8bf,	// (0x0001a6d5) sat_plugin_idle_act4_pane_t2

0xd8d2,	// (0x0001a6e8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8d2,	// (0x0001a6e8) sat_plugin_idle_act4_pane_t3

0xd8e5,	// (0x0001a6fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8e5,	// (0x0001a6fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0001cba1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0001cba1) sat_plugin_idle_act4_pane_t

0x5223,	// (0x00012039) popup_battery_window_ParamLimits

0x5223,	// (0x00012039) popup_battery_window

0x385c,	// (0x00010672) bg_popup_sub_pane_cp25_ParamLimits

0x385c,	// (0x00010672) bg_popup_sub_pane_cp25

0xd8f8,	// (0x0001a70e) popup_battery_window_g1_ParamLimits

0xd8f8,	// (0x0001a70e) popup_battery_window_g1

0xd904,	// (0x0001a71a) popup_battery_window_t1_ParamLimits

0xd904,	// (0x0001a71a) popup_battery_window_t1

0xd916,	// (0x0001a72c) popup_battery_window_t2_ParamLimits

0xd916,	// (0x0001a72c) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0001cbaa) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0001cbaa) popup_battery_window_t

0x7e3f,	// (0x00014c55) midp_canvas_pane_ParamLimits

0x7eb6,	// (0x00014ccc) midp_keypad_pane_ParamLimits

0x7eb6,	// (0x00014ccc) midp_keypad_pane

0x81b9,	// (0x00014fcf) main_midp_pane_ParamLimits

0xb29e,	// (0x000180b4) signal_pane_g2_cp_ParamLimits

0xd933,	// (0x0001a749) aid_size_cell_midp_keypad_ParamLimits

0xd933,	// (0x0001a749) aid_size_cell_midp_keypad

0xd94d,	// (0x0001a763) midp_keyp_game_grid_pane_ParamLimits

0xd94d,	// (0x0001a763) midp_keyp_game_grid_pane

0xd96d,	// (0x0001a783) midp_keyp_rocker_pane_ParamLimits

0xd96d,	// (0x0001a783) midp_keyp_rocker_pane

0xd998,	// (0x0001a7ae) midp_keyp_sk_left_pane_ParamLimits

0xd998,	// (0x0001a7ae) midp_keyp_sk_left_pane

0xd9f2,	// (0x0001a808) midp_keyp_sk_right_pane_ParamLimits

0xd9f2,	// (0x0001a808) midp_keyp_sk_right_pane

0x33d0,	// (0x000101e6) bg_button_pane_cp03

0xda4c,	// (0x0001a862) midp_keyp_sk_left_pane_g1

0x33d0,	// (0x000101e6) bg_button_pane_cp04

0xda4c,	// (0x0001a862) midp_keyp_sk_right_pane_g1

0xb7f5,	// (0x0001860b) midp_keyp_rocker_pane_g1

0xda55,	// (0x0001a86b) keyp_game_cell_pane_ParamLimits

0xda55,	// (0x0001a86b) keyp_game_cell_pane

0x33d0,	// (0x000101e6) bg_button_pane_cp02

0xda68,	// (0x0001a87e) keyp_game_cell_pane_g1

0x526d,	// (0x00012083) popup_fep_vkb2_window_ParamLimits

0x526d,	// (0x00012083) popup_fep_vkb2_window

0x648b,	// (0x000132a1) aid_size_cell_vkb2_ParamLimits

0x648b,	// (0x000132a1) aid_size_cell_vkb2

0x64df,	// (0x000132f5) popup_fep_vkb2_window_g1_ParamLimits

0x64df,	// (0x000132f5) popup_fep_vkb2_window_g1

0x6527,	// (0x0001333d) vkb2_area_bottom_pane_ParamLimits

0x6527,	// (0x0001333d) vkb2_area_bottom_pane

0x657b,	// (0x00013391) vkb2_area_keypad_pane_ParamLimits

0x657b,	// (0x00013391) vkb2_area_keypad_pane

0x65c1,	// (0x000133d7) vkb2_area_top_pane_ParamLimits

0x65c1,	// (0x000133d7) vkb2_area_top_pane

0x663b,	// (0x00013451) vkb2_top_entry_pane_ParamLimits

0x663b,	// (0x00013451) vkb2_top_entry_pane

0x6665,	// (0x0001347b) vkb2_top_grid_left_pane_ParamLimits

0x6665,	// (0x0001347b) vkb2_top_grid_left_pane

0x6683,	// (0x00013499) vkb2_top_grid_right_pane_ParamLimits

0x6683,	// (0x00013499) vkb2_top_grid_right_pane

0x66a1,	// (0x000134b7) vkb2_cell_keypad_pane_ParamLimits

0x66a1,	// (0x000134b7) vkb2_cell_keypad_pane

0x6772,	// (0x00013588) vkb2_area_bottom_grid_pane_ParamLimits

0x6772,	// (0x00013588) vkb2_area_bottom_grid_pane

0x6798,	// (0x000135ae) vkb2_area_bottom_pane_g1_ParamLimits

0x6798,	// (0x000135ae) vkb2_area_bottom_pane_g1

0x67bc,	// (0x000135d2) vkb2_area_bottom_pane_g2_ParamLimits

0x67bc,	// (0x000135d2) vkb2_area_bottom_pane_g2

0x67ea,	// (0x00013600) vkb2_area_bottom_pane_g3_ParamLimits

0x67ea,	// (0x00013600) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0001cbaf) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0001cbaf) vkb2_area_bottom_pane_g

0x684b,	// (0x00013661) vkb2_top_cell_left_pane_ParamLimits

0x684b,	// (0x00013661) vkb2_top_cell_left_pane

0xda79,	// (0x0001a88f) vkb2_top_entry_pane_g1_ParamLimits

0xda79,	// (0x0001a88f) vkb2_top_entry_pane_g1

0xda87,	// (0x0001a89d) vkb2_top_entry_pane_t1_ParamLimits

0xda87,	// (0x0001a89d) vkb2_top_entry_pane_t1

0xdab9,	// (0x0001a8cf) vkb2_top_entry_pane_t2_ParamLimits

0xdab9,	// (0x0001a8cf) vkb2_top_entry_pane_t2

0xdaeb,	// (0x0001a901) vkb2_top_entry_pane_t3_ParamLimits

0xdaeb,	// (0x0001a901) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0001cbb6) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0001cbb6) vkb2_top_entry_pane_t

0x6898,	// (0x000136ae) vkb2_top_grid_right_pane_g1_ParamLimits

0x6898,	// (0x000136ae) vkb2_top_grid_right_pane_g1

0x68ae,	// (0x000136c4) vkb2_top_grid_right_pane_g2_ParamLimits

0x68ae,	// (0x000136c4) vkb2_top_grid_right_pane_g2

0x68c6,	// (0x000136dc) vkb2_top_grid_right_pane_g3_ParamLimits

0x68c6,	// (0x000136dc) vkb2_top_grid_right_pane_g3

0x68de,	// (0x000136f4) vkb2_top_grid_right_pane_g4_ParamLimits

0x68de,	// (0x000136f4) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0001cbbd) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0001cbbd) vkb2_top_grid_right_pane_g

0x68f4,	// (0x0001370a) vkb2_top_cell_left_pane_g1

0x690b,	// (0x00013721) vkb2_cell_keypad_pane_g1_ParamLimits

0x690b,	// (0x00013721) vkb2_cell_keypad_pane_g1

0xdb0f,	// (0x0001a925) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb0f,	// (0x0001a925) vkb2_cell_keypad_pane_t1

0x6919,	// (0x0001372f) vkb2_cell_bottom_grid_pane_ParamLimits

0x6919,	// (0x0001372f) vkb2_cell_bottom_grid_pane

0x6952,	// (0x00013768) vkb2_cell_bottom_grid_pane_g1

0xd6c7,	// (0x0001a4dd) aid_call2_pane_cp02

0xd6cf,	// (0x0001a4e5) aid_call_pane_cp02

0xd6d7,	// (0x0001a4ed) clock_digital_number_pane_cp10

0xd6df,	// (0x0001a4f5) clock_digital_number_pane_cp11

0xd6e7,	// (0x0001a4fd) clock_digital_number_pane_cp12

0xd6ef,	// (0x0001a505) clock_digital_number_pane_cp13

0xd6f7,	// (0x0001a50d) clock_digital_separator_pane_cp10

0x4536,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g1

0x4536,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g2

0xd6ff,	// (0x0001a515) popup_clock_digital_analogue_window_cp2_g3

0x4536,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g4

0xd6ff,	// (0x0001a515) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0001cb72) popup_clock_digital_analogue_window_cp2_g

0xd707,	// (0x0001a51d) popup_clock_digital_analogue_window_cp2_t1

0xd715,	// (0x0001a52b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0001cb7d) popup_clock_digital_analogue_window_cp2_t

0xb7f5,	// (0x0001860b) clock_digital_number_pane_cp10_g1

0xb7f5,	// (0x0001860b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c959) clock_digital_number_pane_cp10_g

0xb7f5,	// (0x0001860b) clock_digital_separator_pane_cp10_g1

0xb7f5,	// (0x0001860b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c959) clock_digital_separator_pane_cp10_g

0xd542,	// (0x0001a358) uniindi_top_pane_g3

0xd553,	// (0x0001a369) uniindi_top_pane_g4

0x672c,	// (0x00013542) vkb2_row_keypad_pane_ParamLimits

0x672c,	// (0x00013542) vkb2_row_keypad_pane

0x696e,	// (0x00013784) vkb2_cell_t_keypad_pane_ParamLimits

0x696e,	// (0x00013784) vkb2_cell_t_keypad_pane

0x697e,	// (0x00013794) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x697e,	// (0x00013794) vkb2_cell_t_keypad_pane_cp08

0x6993,	// (0x000137a9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6993,	// (0x000137a9) vkb2_cell_t_keypad_pane_cp09

0x69a7,	// (0x000137bd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x69a7,	// (0x000137bd) vkb2_cell_t_keypad_pane_cp01

0x69b8,	// (0x000137ce) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x69b8,	// (0x000137ce) vkb2_cell_t_keypad_pane_cp02

0x69c9,	// (0x000137df) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x69c9,	// (0x000137df) vkb2_cell_t_keypad_pane_cp03

0x69da,	// (0x000137f0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x69da,	// (0x000137f0) vkb2_cell_t_keypad_pane_cp04

0x69eb,	// (0x00013801) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x69eb,	// (0x00013801) vkb2_cell_t_keypad_pane_cp05

0x69fc,	// (0x00013812) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x69fc,	// (0x00013812) vkb2_cell_t_keypad_pane_cp06

0x6a0f,	// (0x00013825) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6a0f,	// (0x00013825) vkb2_cell_t_keypad_pane_cp07

0x6a24,	// (0x0001383a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6a24,	// (0x0001383a) vkb2_cell_t_keypad_pane_cp10

0x61be,	// (0x00012fd4) vkb2_cell_t_keypad_pane_g1

0xdb26,	// (0x0001a93c) vkb2_cell_t_keypad_pane_t1

0x515e,	// (0x00011f74) popup_grid_graphic2_window

0xdb38,	// (0x0001a94e) aid_size_cell_graphic2_ParamLimits

0xdb38,	// (0x0001a94e) aid_size_cell_graphic2

0xdb70,	// (0x0001a986) bg_popup_window_pane_cp21_ParamLimits

0xdb70,	// (0x0001a986) bg_popup_window_pane_cp21

0xdb7e,	// (0x0001a994) graphic2_pages_pane_ParamLimits

0xdb7e,	// (0x0001a994) graphic2_pages_pane

0xdbc4,	// (0x0001a9da) grid_graphic2_control_pane_ParamLimits

0xdbc4,	// (0x0001a9da) grid_graphic2_control_pane

0xdc02,	// (0x0001aa18) grid_graphic2_pane_ParamLimits

0xdc02,	// (0x0001aa18) grid_graphic2_pane

0xdc78,	// (0x0001aa8e) cell_graphic2_pane

0x33d0,	// (0x000101e6) main_comp_mode_pane

0xcd50,	// (0x00019b66) list_ai3_gene_pane_ParamLimits

0xd17b,	// (0x00019f91) bg_popup_window_pane_cp19_ParamLimits

0xd187,	// (0x00019f9d) bg_touch_area_indi_pane_ParamLimits

0xd187,	// (0x00019f9d) bg_touch_area_indi_pane

0xd19d,	// (0x00019fb3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd19d,	// (0x00019fb3) bg_touch_area_indi_pane_cp01

0xd1b5,	// (0x00019fcb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd1b5,	// (0x00019fcb) bg_touch_area_indi_pane_cp02

0xd1cf,	// (0x00019fe5) bg_touch_area_indi_pane_cp03_ParamLimits

0xd1cf,	// (0x00019fe5) bg_touch_area_indi_pane_cp03

0xd1e9,	// (0x00019fff) popup_slider_window_g1_ParamLimits

0xd205,	// (0x0001a01b) popup_slider_window_g2_ParamLimits

0xd221,	// (0x0001a037) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0001cb07) popup_slider_window_g_ParamLimits

0xd27d,	// (0x0001a093) popup_slider_window_t1_ParamLimits

0xd2f1,	// (0x0001a107) small_volume_slider_vertical_pane_ParamLimits

0xdc78,	// (0x0001aa8e) cell_graphic2_pane_ParamLimits

0xdcca,	// (0x0001aae0) bg_button_pane_cp10_ParamLimits

0xdcca,	// (0x0001aae0) bg_button_pane_cp10

0xdcdf,	// (0x0001aaf5) bg_button_pane_cp11_ParamLimits

0xdcdf,	// (0x0001aaf5) bg_button_pane_cp11

0xdcf4,	// (0x0001ab0a) graphic2_pages_pane_g1_ParamLimits

0xdcf4,	// (0x0001ab0a) graphic2_pages_pane_g1

0xdd0f,	// (0x0001ab25) graphic2_pages_pane_g2_ParamLimits

0xdd0f,	// (0x0001ab25) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0001cbcb) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0001cbcb) graphic2_pages_pane_g

0xdd27,	// (0x0001ab3d) graphic2_pages_pane_t1_ParamLimits

0xdd27,	// (0x0001ab3d) graphic2_pages_pane_t1

0xdd3d,	// (0x0001ab53) cell_graphic2_control_pane_ParamLimits

0xdd3d,	// (0x0001ab53) cell_graphic2_control_pane

0xdd60,	// (0x0001ab76) cell_graphic2_pane_g1_ParamLimits

0xdd60,	// (0x0001ab76) cell_graphic2_pane_g1

0xdd6d,	// (0x0001ab83) cell_graphic2_pane_g2_ParamLimits

0xdd6d,	// (0x0001ab83) cell_graphic2_pane_g2

0xdd7a,	// (0x0001ab90) cell_graphic2_pane_g3_ParamLimits

0xdd7a,	// (0x0001ab90) cell_graphic2_pane_g3

0xdd87,	// (0x0001ab9d) cell_graphic2_pane_g4_ParamLimits

0xdd87,	// (0x0001ab9d) cell_graphic2_pane_g4

0xdd94,	// (0x0001abaa) cell_graphic2_pane_g5_ParamLimits

0xdd94,	// (0x0001abaa) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0001cbd0) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0001cbd0) cell_graphic2_pane_g

0xddaf,	// (0x0001abc5) cell_graphic2_pane_t1_ParamLimits

0xddaf,	// (0x0001abc5) cell_graphic2_pane_t1

0x8e56,	// (0x00015c6c) grid_highlight_pane_cp11_ParamLimits

0x8e56,	// (0x00015c6c) grid_highlight_pane_cp11

0x385c,	// (0x00010672) bg_button_pane_cp05

0xddd8,	// (0x0001abee) cell_graphic2_control_pane_g1

0xb7f5,	// (0x0001860b) bg_touch_area_indi_pane_g1

0xde00,	// (0x0001ac16) aid_cmod_rocker_key_size

0xde0a,	// (0x0001ac20) aid_cmode_itu_key_size

0xde14,	// (0x0001ac2a) main_cmode_video_pane

0xde1e,	// (0x0001ac34) main_comp_mode_itu_pane

0xde2a,	// (0x0001ac40) main_comp_mode_rocker_pane

0xde36,	// (0x0001ac4c) cell_cmode_rocker_pane_ParamLimits

0xde36,	// (0x0001ac4c) cell_cmode_rocker_pane

0xde4a,	// (0x0001ac60) cell_cmode_itu_pane_ParamLimits

0xde4a,	// (0x0001ac60) cell_cmode_itu_pane

0x3dc4,	// (0x00010bda) bg_button_pane_cp06_ParamLimits

0x3dc4,	// (0x00010bda) bg_button_pane_cp06

0xba70,	// (0x00018886) cell_cmode_rocker_pane_g1_ParamLimits

0xba70,	// (0x00018886) cell_cmode_rocker_pane_g1

0xd398,	// (0x0001a1ae) cell_cmode_rocker_pane_g2_ParamLimits

0xd398,	// (0x0001a1ae) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0001cbe0) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0001cbe0) cell_cmode_rocker_pane_g

0x33d0,	// (0x000101e6) bg_button_pane_cp07

0xde61,	// (0x0001ac77) cell_cmode_itu_pane_g1

0xde6a,	// (0x0001ac80) cell_cmode_itu_pane_t1

0xde78,	// (0x0001ac8e) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0001cbe5) cell_cmode_itu_pane_t

0xd5c6,	// (0x0001a3dc) aid_touch_ctrl_left

0xd5ce,	// (0x0001a3e4) aid_touch_ctrl_right

0x33d0,	// (0x000101e6) compa_mode_pane

0xde86,	// (0x0001ac9c) aid_cmod_rocker_key_size_cp

0xde90,	// (0x0001aca6) aid_cmode_itu_key_size_cp

0xde9a,	// (0x0001acb0) compa_mode_pane_g1

0xdea2,	// (0x0001acb8) compa_mode_pane_g2

0xdeaa,	// (0x0001acc0) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0001cbea) compa_mode_pane_g

0xdeb2,	// (0x0001acc8) main_comp_mode_itu_pane_cp

0xdeba,	// (0x0001acd0) main_comp_mode_rocker_pane_cp

0xdec2,	// (0x0001acd8) cell_cmode_itu_pane_cp_ParamLimits

0xdec2,	// (0x0001acd8) cell_cmode_itu_pane_cp

0xded7,	// (0x0001aced) cell_cmode_rocker_pane_cp_ParamLimits

0xded7,	// (0x0001aced) cell_cmode_rocker_pane_cp

0x3dc4,	// (0x00010bda) bg_button_pane_cp06_cp_ParamLimits

0x3dc4,	// (0x00010bda) bg_button_pane_cp06_cp

0xba70,	// (0x00018886) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba70,	// (0x00018886) cell_cmode_rocker_pane_g1_cp

0xb7f5,	// (0x0001860b) cell_cmode_rocker_pane_g2_cp

0x33d0,	// (0x000101e6) bg_button_pane_cp07_cp

0xdee9,	// (0x0001acff) cell_cmode_itu_pane_g1_cp

0xdef2,	// (0x0001ad08) cell_cmode_itu_pane_t1_cp

0xdef2,	// (0x0001ad08) cell_cmode_itu_pane_t2_cp

0xa38a,	// (0x000171a0) settings_code_pane_cp2

0x3686,	// (0x0001049c) bg_popup_window_pane_cp3_ParamLimits

0x3a4a,	// (0x00010860) heading_pane_cp3_ParamLimits

0x3a56,	// (0x0001086c) listscroll_popup_graphic_pane_ParamLimits

0x5f51,	// (0x00012d67) fep_hwr_aid_pane_ParamLimits

0x63e4,	// (0x000131fa) aid_touch_sctrl_top_ParamLimits

0x63ff,	// (0x00013215) sctrl_sk_top_pane_g1_ParamLimits

0x61be,	// (0x00012fd4) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0001cb20) sctrl_sk_top_pane_g_ParamLimits

0x640c,	// (0x00013222) sctrl_sk_top_pane_t1_ParamLimits

0x63e4,	// (0x000131fa) aid_touch_sctrl_bottom_ParamLimits

0x640c,	// (0x00013222) sctrl_sk_bottom_pane_t1_ParamLimits

0xd50c,	// (0x0001a322) aid_area_touch_clock

0x6603,	// (0x00013419) aid_vkb2_area_top_pane_cell_ParamLimits

0x6603,	// (0x00013419) aid_vkb2_area_top_pane_cell

0x674e,	// (0x00013564) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x674e,	// (0x00013564) aid_vkb2_area_bottom_pane_cell

0xda71,	// (0x0001a887) popup_char_count_window

0xdf00,	// (0x0001ad16) popup_char_count_window_g1

0xdf09,	// (0x0001ad1f) popup_char_count_window_g2

0xdf12,	// (0x0001ad28) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0001cbf1) popup_char_count_window_g

0xdf1b,	// (0x0001ad31) popup_char_count_window_t1

0x64bd,	// (0x000132d3) popup_fep_char_preview_window_ParamLimits

0x64bd,	// (0x000132d3) popup_fep_char_preview_window

0x6621,	// (0x00013437) vkb2_top_candi_pane_ParamLimits

0x6621,	// (0x00013437) vkb2_top_candi_pane

0xdf29,	// (0x0001ad3f) cell_vkb2_top_candi_pane_ParamLimits

0xdf29,	// (0x0001ad3f) cell_vkb2_top_candi_pane

0x6a39,	// (0x0001384f) bg_popup_fep_char_preview_window_ParamLimits

0x6a39,	// (0x0001384f) bg_popup_fep_char_preview_window

0x6a47,	// (0x0001385d) popup_fep_char_preview_window_t1_ParamLimits

0x6a47,	// (0x0001385d) popup_fep_char_preview_window_t1

0xdf7a,	// (0x0001ad90) bg_popup_fep_char_preview_window_g1

0xdf82,	// (0x0001ad98) bg_popup_fep_char_preview_window_g2

0xdf8a,	// (0x0001ada0) bg_popup_fep_char_preview_window_g3

0xdf92,	// (0x0001ada8) bg_popup_fep_char_preview_window_g4

0xdf9a,	// (0x0001adb0) bg_popup_fep_char_preview_window_g5

0x6a81,	// (0x00013897) bg_popup_fep_char_preview_window_g6

0xdfa2,	// (0x0001adb8) bg_popup_fep_char_preview_window_g7

0xdfaa,	// (0x0001adc0) bg_popup_fep_char_preview_window_g8

0xdfb2,	// (0x0001adc8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0001cbf8) bg_popup_fep_char_preview_window_g

0x61be,	// (0x00012fd4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x61be,	// (0x00012fd4) cell_vkb2_top_candi_pane_g1

0x61cc,	// (0x00012fe2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x61cc,	// (0x00012fe2) cell_vkb2_top_candi_pane_g2

0xc18b,	// (0x00018fa1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc18b,	// (0x00018fa1) cell_vkb2_top_candi_pane_g3

0x6a89,	// (0x0001389f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6a89,	// (0x0001389f) cell_vkb2_top_candi_pane_g4

0xc128,	// (0x00018f3e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc128,	// (0x00018f3e) cell_vkb2_top_candi_pane_g5

0x6aaa,	// (0x000138c0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6aaa,	// (0x000138c0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0001cc0b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0001cc0b) cell_vkb2_top_candi_pane_g

0x6ab8,	// (0x000138ce) cell_vkb2_top_candi_pane_t1

0x5db1,	// (0x00012bc7) aid_size_touch_slider_mark_ParamLimits

0x5db1,	// (0x00012bc7) aid_size_touch_slider_mark

0xdbb4,	// (0x0001a9ca) grid_graphic2_catg_pane_ParamLimits

0xdbb4,	// (0x0001a9ca) grid_graphic2_catg_pane

0xdc52,	// (0x0001aa68) popup_grid_graphic2_window_t1_ParamLimits

0xdc52,	// (0x0001aa68) popup_grid_graphic2_window_t1

0xdc64,	// (0x0001aa7a) popup_grid_graphic2_window_t2_ParamLimits

0xdc64,	// (0x0001aa7a) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0001cbc6) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0001cbc6) popup_grid_graphic2_window_t

0x385c,	// (0x00010672) bg_button_pane_cp05_ParamLimits

0xddd8,	// (0x0001abee) cell_graphic2_control_pane_g1_ParamLimits

0xdfba,	// (0x0001add0) cell_graphic2_catg_pane_ParamLimits

0xdfba,	// (0x0001add0) cell_graphic2_catg_pane

0x33d0,	// (0x000101e6) bg_button_pane_cp12

0xdfcc,	// (0x0001ade2) cell_graphic2_catg_pane_g1

0xd4d8,	// (0x0001a2ee) cell_tb_ext_pane_t1_ParamLimits

0x686b,	// (0x00013681) vkb2_top_cell_right_narrow_pane_ParamLimits

0x686b,	// (0x00013681) vkb2_top_cell_right_narrow_pane

0x6883,	// (0x00013699) vkb2_top_cell_right_wide_pane_ParamLimits

0x6883,	// (0x00013699) vkb2_top_cell_right_wide_pane

0x5f43,	// (0x00012d59) bg_vkb2_func_pane_ParamLimits

0x5f43,	// (0x00012d59) bg_vkb2_func_pane

0x68f4,	// (0x0001370a) vkb2_top_cell_left_pane_g1_ParamLimits

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp03

0x6952,	// (0x00013768) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8d38,	// (0x00015b4e) bg_vkb2_func_pane_g1

0x8d40,	// (0x00015b56) bg_vkb2_func_pane_g2

0x8d50,	// (0x00015b66) bg_vkb2_func_pane_g3

0x8d48,	// (0x00015b5e) bg_vkb2_func_pane_g4

0x8d58,	// (0x00015b6e) bg_vkb2_func_pane_g5

0x8d60,	// (0x00015b76) bg_vkb2_func_pane_g6

0x8d68,	// (0x00015b7e) bg_vkb2_func_pane_g7

0x8d70,	// (0x00015b86) bg_vkb2_func_pane_g8

0x8d30,	// (0x00015b46) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0001cc18) bg_vkb2_func_pane_g

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp01

0x68f4,	// (0x0001370a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x68f4,	// (0x0001370a) vkb2_top_cell_right_wide_pane_g1

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5f43,	// (0x00012d59) bg_vkb2_fuc_pane_cp02

0x6952,	// (0x00013768) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6952,	// (0x00013768) vkb2_top_cell_right_narrow_pane_g1

0xd0f9,	// (0x00019f0f) aid_touch_area_decrease_ParamLimits

0xd0f9,	// (0x00019f0f) aid_touch_area_decrease

0xd11d,	// (0x00019f33) aid_touch_area_increase_ParamLimits

0xd11d,	// (0x00019f33) aid_touch_area_increase

0xd129,	// (0x00019f3f) aid_touch_area_mute_ParamLimits

0xd129,	// (0x00019f3f) aid_touch_area_mute

0xd14d,	// (0x00019f63) aid_touch_area_slider_ParamLimits

0xd14d,	// (0x00019f63) aid_touch_area_slider

0xd23d,	// (0x0001a053) popup_slider_window_g4_ParamLimits

0xd23d,	// (0x0001a053) popup_slider_window_g4

0xd249,	// (0x0001a05f) popup_slider_window_g5_ParamLimits

0xd249,	// (0x0001a05f) popup_slider_window_g5

0xd26b,	// (0x0001a081) popup_slider_window_g6_ParamLimits

0xd26b,	// (0x0001a081) popup_slider_window_g6

0xd2ab,	// (0x0001a0c1) popup_slider_window_t2_ParamLimits

0xd2ab,	// (0x0001a0c1) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0001cb14) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0001cb14) popup_slider_window_t

0xd2c3,	// (0x0001a0d9) slider_pane_ParamLimits

0xd2c3,	// (0x0001a0d9) slider_pane

0xdfd5,	// (0x0001adeb) slider_pane_g1_ParamLimits

0xdfd5,	// (0x0001adeb) slider_pane_g1

0xdfe9,	// (0x0001adff) slider_pane_g2_ParamLimits

0xdfe9,	// (0x0001adff) slider_pane_g2

0xdfff,	// (0x0001ae15) slider_pane_g3_ParamLimits

0xdfff,	// (0x0001ae15) slider_pane_g3

0x0003,

0xfe15,	// (0x0001cc2b) slider_pane_g_ParamLimits

0xfe15,	// (0x0001cc2b) slider_pane_g

0x86fb,	// (0x00015511) popup_tb_float_extension_window_ParamLimits

0x86fb,	// (0x00015511) popup_tb_float_extension_window

0xe02b,	// (0x0001ae41) aid_size_cell_tb_float_ext

0x33d0,	// (0x000101e6) bg_popup_sub_window_cp28

0xe037,	// (0x0001ae4d) grid_tb_float_ext_pane

0xe043,	// (0x0001ae59) cell_tb_float_ext_pane_ParamLimits

0xe043,	// (0x0001ae59) cell_tb_float_ext_pane

0xe05f,	// (0x0001ae75) cell_tb_float_ext_pane_g1

0xe068,	// (0x0001ae7e) grid_highlight_pane_cp12

0x6098,	// (0x00012eae) cell_last_hwr_side_pane_ParamLimits

0x6098,	// (0x00012eae) cell_last_hwr_side_pane

0xb7f5,	// (0x0001860b) cell_last_hwr_side_pane_g1

0xe071,	// (0x0001ae87) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0001cc34) cell_last_hwr_side_pane_g

0x681a,	// (0x00013630) vkb2_area_bottom_space_btn_pane_ParamLimits

0x681a,	// (0x00013630) vkb2_area_bottom_space_btn_pane

0x61be,	// (0x00012fd4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb26,	// (0x0001a93c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6ab8,	// (0x000138ce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6ad6,	// (0x000138ec) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6ad6,	// (0x000138ec) vkb2_area_bottom_space_btn_pane_g1

0x6b10,	// (0x00013926) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6b10,	// (0x00013926) vkb2_area_bottom_space_btn_pane_g2

0x6b46,	// (0x0001395c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6b46,	// (0x0001395c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0001cc39) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0001cc39) vkb2_area_bottom_space_btn_pane_g

0x6008,	// (0x00012e1e) cel_fep_hwr_func_pane_ParamLimits

0x6008,	// (0x00012e1e) cel_fep_hwr_func_pane

0x6044,	// (0x00012e5a) cell_hwr_side_button_pane_ParamLimits

0x6044,	// (0x00012e5a) cell_hwr_side_button_pane

0xd50c,	// (0x0001a322) aid_area_touch_clock_ParamLimits

0x385c,	// (0x00010672) bg_uniindi_top_pane_ParamLimits

0xd520,	// (0x0001a336) uniindi_top_pane_g1_ParamLimits

0xd536,	// (0x0001a34c) uniindi_top_pane_g2_ParamLimits

0xd542,	// (0x0001a358) uniindi_top_pane_g3_ParamLimits

0xd553,	// (0x0001a369) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0001cb4c) uniindi_top_pane_g_ParamLimits

0xd560,	// (0x0001a376) uniindi_top_pane_t1_ParamLimits

0x385c,	// (0x00010672) bg_vkb2_func_pane_cp01_ParamLimits

0x385c,	// (0x00010672) bg_vkb2_func_pane_cp01

0xe07a,	// (0x0001ae90) cel_fep_hwr_func_pane_g1_ParamLimits

0xe07a,	// (0x0001ae90) cel_fep_hwr_func_pane_g1

0x385c,	// (0x00010672) bg_vkb2_func_pane_cp02_ParamLimits

0x385c,	// (0x00010672) bg_vkb2_func_pane_cp02

0xe07a,	// (0x0001ae90) cell_hwr_side_button_pane_g1_ParamLimits

0xe07a,	// (0x0001ae90) cell_hwr_side_button_pane_g1

0x8b83,	// (0x00015999) status_pane_g4_ParamLimits

0x8b83,	// (0x00015999) status_pane_g4

0x8b9d,	// (0x000159b3) status_pane_t1

0xb594,	// (0x000183aa) form2_midp_gauge_slider_cont_pane

0xb59c,	// (0x000183b2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb5ae,	// (0x000183c4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb5c0,	// (0x000183d6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001c90c) form2_midp_gauge_slider_pane_t_ParamLimits

0xb5d2,	// (0x000183e8) form2_midp_slider_pane_ParamLimits

0x647d,	// (0x00013293) aid_size_cell_func_vkb2_ParamLimits

0x647d,	// (0x00013293) aid_size_cell_func_vkb2

0xe017,	// (0x0001ae2d) slider_pane_g4_ParamLimits

0xe017,	// (0x0001ae2d) slider_pane_g4

0x6b90,	// (0x000139a6) form2_midp_gauge_slider_pane_t2_cp01

0x6b9e,	// (0x000139b4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6b9e,	// (0x000139b4) form2_midp_gauge_slider_pane_t3_cp01

0x6bbb,	// (0x000139d1) form2_midp_slider_pane_cp01

0x33d0,	// (0x000101e6) navi_smil_pane

0xe0b3,	// (0x0001aec9) navi_smil_pane_g1

0xe0bb,	// (0x0001aed1) navi_smil_pane_t1

0xe088,	// (0x0001ae9e) form2_midp_slider_pane_g1

0xe091,	// (0x0001aea7) form2_midp_slider_pane_g2

0xe099,	// (0x0001aeaf) form2_midp_slider_pane_g3

0xe088,	// (0x0001ae9e) form2_midp_slider_pane_g4

0xe0a1,	// (0x0001aeb7) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0001cc42) form2_midp_slider_pane_g

0x6b80,	// (0x00013996) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6b80,	// (0x00013996) vkb2_area_bottom_space_btn_pane_g4

0x899a,	// (0x000157b0) lc0_navi_pane_ParamLimits

0x899a,	// (0x000157b0) lc0_navi_pane

0x8a16,	// (0x0001582c) lc0_stat_indi_pane_ParamLimits

0x8a16,	// (0x0001582c) lc0_stat_indi_pane

0x8a2d,	// (0x00015843) ls0_title_pane_ParamLimits

0x8a2d,	// (0x00015843) ls0_title_pane

0x3dc4,	// (0x00010bda) bg_popup_sub_pane_cp14_ParamLimits

0xd4f3,	// (0x0001a309) list_uniindi_pane_ParamLimits

0xd4ff,	// (0x0001a315) uniindi_top_pane_ParamLimits

0xd59e,	// (0x0001a3b4) list_single_uniindi_pane_g1_ParamLimits

0xd5b1,	// (0x0001a3c7) list_single_uniindi_pane_t1_ParamLimits

0x6bc4,	// (0x000139da) lc0_stat_clock_pane_ParamLimits

0x6bc4,	// (0x000139da) lc0_stat_clock_pane

0xe0c9,	// (0x0001aedf) lc0_stat_indi_pane_g1_ParamLimits

0xe0c9,	// (0x0001aedf) lc0_stat_indi_pane_g1

0xe0d6,	// (0x0001aeec) lc0_stat_indi_pane_g2_ParamLimits

0xe0d6,	// (0x0001aeec) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0001cc4d) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0001cc4d) lc0_stat_indi_pane_g

0x6bd1,	// (0x000139e7) lc0_uni_indicator_pane_ParamLimits

0x6bd1,	// (0x000139e7) lc0_uni_indicator_pane

0xe0e3,	// (0x0001aef9) ls0_title_pane_g1_ParamLimits

0xe0e3,	// (0x0001aef9) ls0_title_pane_g1

0xe0f7,	// (0x0001af0d) ls0_title_pane_t1_ParamLimits

0xe0f7,	// (0x0001af0d) ls0_title_pane_t1

0x6bde,	// (0x000139f4) lc0_uni_indicator_pane_g1_ParamLimits

0x6bde,	// (0x000139f4) lc0_uni_indicator_pane_g1

0xe12d,	// (0x0001af43) lc0_stat_clock_pane_t1

0x33d0,	// (0x000101e6) main_ai5_pane

0xe13b,	// (0x0001af51) ai5_sk_pane_ParamLimits

0xe13b,	// (0x0001af51) ai5_sk_pane

0xe148,	// (0x0001af5e) cell_ai5_widget_pane_ParamLimits

0xe148,	// (0x0001af5e) cell_ai5_widget_pane

0xe6e4,	// (0x0001b4fa) aid_size_cell_widget_grid

0xe6fa,	// (0x0001b510) bg_ai5_widget_pane_ParamLimits

0xe6fa,	// (0x0001b510) bg_ai5_widget_pane

0xe764,	// (0x0001b57a) cell_ai5_widget_pane_g2

0xe774,	// (0x0001b58a) cell_ai5_widget_pane_g3

0xe793,	// (0x0001b5a9) cell_ai5_widget_pane_g4

0xe79f,	// (0x0001b5b5) cell_ai5_widget_pane_g5

0xe7ab,	// (0x0001b5c1) cell_ai5_widget_pane_g6

0xe7b7,	// (0x0001b5cd) cell_ai5_widget_pane_g7

0xe7ff,	// (0x0001b615) cell_ai5_widget_pane_t1_ParamLimits

0xe7ff,	// (0x0001b615) cell_ai5_widget_pane_t1

0xe81c,	// (0x0001b632) cell_ai5_widget_pane_t2_ParamLimits

0xe81c,	// (0x0001b632) cell_ai5_widget_pane_t2

0xe834,	// (0x0001b64a) cell_ai5_widget_pane_t3_ParamLimits

0xe834,	// (0x0001b64a) cell_ai5_widget_pane_t3

0xe84c,	// (0x0001b662) cell_ai5_widget_pane_t4_ParamLimits

0xe84c,	// (0x0001b662) cell_ai5_widget_pane_t4

0xe866,	// (0x0001b67c) cell_ai5_widget_pane_t5_ParamLimits

0xe866,	// (0x0001b67c) cell_ai5_widget_pane_t5

0xe885,	// (0x0001b69b) cell_ai5_widget_pane_t6_ParamLimits

0xe885,	// (0x0001b69b) cell_ai5_widget_pane_t6

0xe897,	// (0x0001b6ad) cell_ai5_widget_pane_t7_ParamLimits

0xe897,	// (0x0001b6ad) cell_ai5_widget_pane_t7

0xe8b0,	// (0x0001b6c6) cell_ai5_widget_pane_t8_ParamLimits

0xe8b0,	// (0x0001b6c6) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0001cc67) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0001cc67) cell_ai5_widget_pane_t

0xe8fc,	// (0x0001b712) grid_ai5_widget_pane

0x3dc4,	// (0x00010bda) highlight_cell_ai5_widget_pane_ParamLimits

0x3dc4,	// (0x00010bda) highlight_cell_ai5_widget_pane

0xe914,	// (0x0001b72a) ai5_sk_left_pane

0xe91e,	// (0x0001b734) ai5_sk_middle_pane

0xe928,	// (0x0001b73e) ai5_sk_right_pane

0xe932,	// (0x0001b748) bg_ai5_widget_pane_g1_ParamLimits

0xe932,	// (0x0001b748) bg_ai5_widget_pane_g1

0xe93e,	// (0x0001b754) bg_ai5_widget_pane_g2_ParamLimits

0xe93e,	// (0x0001b754) bg_ai5_widget_pane_g2

0xe94a,	// (0x0001b760) bg_ai5_widget_pane_g3_ParamLimits

0xe94a,	// (0x0001b760) bg_ai5_widget_pane_g3

0xe956,	// (0x0001b76c) bg_ai5_widget_pane_g4_ParamLimits

0xe956,	// (0x0001b76c) bg_ai5_widget_pane_g4

0xe962,	// (0x0001b778) bg_ai5_widget_pane_g5_ParamLimits

0xe962,	// (0x0001b778) bg_ai5_widget_pane_g5

0xe96e,	// (0x0001b784) bg_ai5_widget_pane_g6_ParamLimits

0xe96e,	// (0x0001b784) bg_ai5_widget_pane_g6

0xe97a,	// (0x0001b790) bg_ai5_widget_pane_g7_ParamLimits

0xe97a,	// (0x0001b790) bg_ai5_widget_pane_g7

0xe986,	// (0x0001b79c) bg_ai5_widget_pane_g8_ParamLimits

0xe986,	// (0x0001b79c) bg_ai5_widget_pane_g8

0xe992,	// (0x0001b7a8) bg_ai5_widget_pane_g9_ParamLimits

0xe992,	// (0x0001b7a8) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0001cc7c) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0001cc7c) bg_ai5_widget_pane_g

0xe9cb,	// (0x0001b7e1) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0001b7e1) cell_shortcut_ai5_widget_pane

0x7e37,	// (0x00014c4d) bg_cell_shortcut_ai5_widget_pane

0xe9de,	// (0x0001b7f4) cell_grid_ai5_widget_pane_g1

0xe9e7,	// (0x0001b7fd) highlight_cell_shortcut_ai5_widget_pane

0x8d38,	// (0x00015b4e) ai5_sk_left_pane_g1

0xe9ef,	// (0x0001b805) ai5_sk_left_pane_g2

0xe9f7,	// (0x0001b80d) ai5_sk_left_pane_g3

0xe9ff,	// (0x0001b815) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0001cc8f) ai5_sk_left_pane_g

0xea07,	// (0x0001b81d) ai5_sk_left_pane_t1

0x8d40,	// (0x00015b56) ai5_sk_right_pane_g1

0xea15,	// (0x0001b82b) ai5_sk_right_pane_g2

0xea1d,	// (0x0001b833) ai5_sk_right_pane_g3

0xea25,	// (0x0001b83b) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0001cc98) ai5_sk_right_pane_g

0xea2d,	// (0x0001b843) ai5_sk_right_pane_t1

0x8d40,	// (0x00015b56) ai5_sk_middle_pane_g1

0x8d38,	// (0x00015b4e) ai5_sk_middle_pane_g2

0x8d58,	// (0x00015b6e) ai5_sk_middle_pane_g3

0xea1d,	// (0x0001b833) ai5_sk_middle_pane_g4

0xe9f7,	// (0x0001b80d) ai5_sk_middle_pane_g5

0xea3b,	// (0x0001b851) ai5_sk_middle_pane_g6

0xea43,	// (0x0001b859) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0001cca1) ai5_sk_middle_pane_g

0x881c,	// (0x00015632) aid_touch_area_size_lc0_ParamLimits

0x881c,	// (0x00015632) aid_touch_area_size_lc0

0x61ed,	// (0x00013003) cell_hwr_candidate_pane_t1_ParamLimits

0x883a,	// (0x00015650) aid_touch_navi_pane

0x8b2d,	// (0x00015943) status_dt_navi_pane_ParamLimits

0x8b2d,	// (0x00015943) status_dt_navi_pane

0x8b3a,	// (0x00015950) status_dt_sta_pane_ParamLimits

0x8b3a,	// (0x00015950) status_dt_sta_pane

0xea4b,	// (0x0001b861) dt_sta_controll_pane

0xea58,	// (0x0001b86e) dt_sta_indi_pane

0xea69,	// (0x0001b87f) dt_sta_title_pane

0x385c,	// (0x00010672) bg_dt_sta_indi_pane_ParamLimits

0x385c,	// (0x00010672) bg_dt_sta_indi_pane

0xea7c,	// (0x0001b892) dt_sta_battery_pane

0xea84,	// (0x0001b89a) dt_sta_indi_pane_g1

0xea8d,	// (0x0001b8a3) dt_sta_indi_pane_g2

0xea96,	// (0x0001b8ac) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001ccb0) dt_sta_indi_pane_g

0xea9f,	// (0x0001b8b5) dt_sta_signal_pane

0x3dc4,	// (0x00010bda) bg_dt_sta_title_pane_ParamLimits

0x3dc4,	// (0x00010bda) bg_dt_sta_title_pane

0xeaa8,	// (0x0001b8be) dt_sta_title_pane_g1

0xeab0,	// (0x0001b8c6) dt_sta_title_pane_t1_ParamLimits

0xeab0,	// (0x0001b8c6) dt_sta_title_pane_t1

0x33d0,	// (0x000101e6) bg_dt_sta_control_pane

0xeac5,	// (0x0001b8db) dt_sta_controll_pane_g1

0xeace,	// (0x0001b8e4) bg_dt_sta_title_pane_g1

0xead7,	// (0x0001b8ed) bg_dt_sta_title_pane_g2

0xeae0,	// (0x0001b8f6) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0001ccb7) bg_dt_sta_title_pane_g

0xb7f5,	// (0x0001860b) bg_dt_sta_indi_pane_g1

0xeae9,	// (0x0001b8ff) dt_sta_signal_pane_g1

0xeaf1,	// (0x0001b907) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0001ccbe) dt_sta_signal_pane_g

0xeaf9,	// (0x0001b90f) dt_sta_battery_pane_g1

0xeb02,	// (0x0001b918) dt_sta_battery_pane_t1

0xb7f5,	// (0x0001860b) bg_dt_sta_control_pane_g1

0x78a9,	// (0x000146bf) fep_china_uni_eep_pane

0x78b1,	// (0x000146c7) fep_china_uni_entry_pane_ParamLimits

0x78c1,	// (0x000146d7) popup_fep_china_uni_window_g1_ParamLimits

0x78d1,	// (0x000146e7) popup_fep_china_uni_window_g2_ParamLimits

0x78d1,	// (0x000146e7) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001c534) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001c534) popup_fep_china_uni_window_g

0xeb11,	// (0x0001b927) fep_china_uni_eep_pane_g1

0xeb19,	// (0x0001b92f) fep_china_uni_eep_pane_t1

0xe0aa,	// (0x0001aec0) aid_touch_area_size_smil_player

0x8992,	// (0x000157a8) lc0_clock_pane

0x8b91,	// (0x000159a7) status_pane_g5_ParamLimits

0x8b91,	// (0x000159a7) status_pane_g5

0x8380,	// (0x00015196) popup_keymap_window

0x8b4f,	// (0x00015965) status_icon_pane

0xe774,	// (0x0001b58a) cell_ai5_widget_pane_g3_ParamLimits

0xe793,	// (0x0001b5a9) cell_ai5_widget_pane_g4_ParamLimits

0xe79f,	// (0x0001b5b5) cell_ai5_widget_pane_g5_ParamLimits

0xe7c3,	// (0x0001b5d9) cell_ai5_widget_pane_g8_ParamLimits

0xe7c3,	// (0x0001b5d9) cell_ai5_widget_pane_g8

0xe7d7,	// (0x0001b5ed) cell_ai5_widget_pane_g9_ParamLimits

0xe7d7,	// (0x0001b5ed) cell_ai5_widget_pane_g9

0xe7eb,	// (0x0001b601) cell_ai5_widget_pane_g10_ParamLimits

0xe7eb,	// (0x0001b601) cell_ai5_widget_pane_g10

0xeb28,	// (0x0001b93e) status_icon_pane_g1

0x33d0,	// (0x000101e6) bg_popup_sub_pane_cp13

0xeb30,	// (0x0001b946) popup_keymap_window_t1

0x8106,	// (0x00014f1c) control_pane_g6_ParamLimits

0x8106,	// (0x00014f1c) control_pane_g6

0x8113,	// (0x00014f29) control_pane_g7_ParamLimits

0x8113,	// (0x00014f29) control_pane_g7

0x8120,	// (0x00014f36) control_pane_g8_ParamLimits

0x8120,	// (0x00014f36) control_pane_g8

0xea4b,	// (0x0001b861) dt_sta_controll_pane_ParamLimits

0xea58,	// (0x0001b86e) dt_sta_indi_pane_ParamLimits

0xea69,	// (0x0001b87f) dt_sta_title_pane_ParamLimits

0x3c80,	// (0x00010a96) aid_size_touch_scroll_bar_cale

0x523b,	// (0x00012051) popup_discreet_window_ParamLimits

0x523b,	// (0x00012051) popup_discreet_window

0x52c9,	// (0x000120df) popup_sk_window

0x9461,	// (0x00016277) bg_popup_sub_pane_cp28_ParamLimits

0x9461,	// (0x00016277) bg_popup_sub_pane_cp28

0xeb3e,	// (0x0001b954) popup_discreet_window_g1_ParamLimits

0xeb3e,	// (0x0001b954) popup_discreet_window_g1

0xeb5e,	// (0x0001b974) popup_discreet_window_t1_ParamLimits

0xeb5e,	// (0x0001b974) popup_discreet_window_t1

0xeb7c,	// (0x0001b992) popup_discreet_window_t2_ParamLimits

0xeb7c,	// (0x0001b992) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0001ccc3) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0001ccc3) popup_discreet_window_t

0x6bf1,	// (0x00013a07) popup_sk_window_g1

0x6bfb,	// (0x00013a11) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0001ccca) popup_sk_window_g

0x6c05,	// (0x00013a1b) popup_sk_window_t1

0x6c15,	// (0x00013a2b) popup_sk_window_t1_copy1

0xe764,	// (0x0001b57a) cell_ai5_widget_pane_g2_ParamLimits

0xe8c2,	// (0x0001b6d8) cell_ai5_widget_pane_t9_ParamLimits

0xe8c2,	// (0x0001b6d8) cell_ai5_widget_pane_t9

0x33d0,	// (0x000101e6) main_fep_fshwr2_pane

0x6c23,	// (0x00013a39) aid_fshwr2_btn_pane

0x6c2f,	// (0x00013a45) aid_fshwr2_syb_pane

0x6c40,	// (0x00013a56) aid_fshwr2_txt_pane

0x6c4c,	// (0x00013a62) fshwr2_func_candi_pane

0x6c5d,	// (0x00013a73) fshwr2_hwr_syb_pane

0x6c70,	// (0x00013a86) fshwr2_icf_pane

0x33d0,	// (0x000101e6) fshwr2_icf_bg_pane

0xebce,	// (0x0001b9e4) fshwr2_icf_pane_t1_ParamLimits

0xebce,	// (0x0001b9e4) fshwr2_icf_pane_t1

0xb7f5,	// (0x0001860b) fshwr2_func_candi_pane_g1

0xebe5,	// (0x0001b9fb) fshwr2_func_candi_row_pane_ParamLimits

0xebe5,	// (0x0001b9fb) fshwr2_func_candi_row_pane

0xebf6,	// (0x0001ba0c) cell_fshwr2_syb_pane_ParamLimits

0xebf6,	// (0x0001ba0c) cell_fshwr2_syb_pane

0xba70,	// (0x00018886) fshwr2_hwr_syb_pane_g1_ParamLimits

0xba70,	// (0x00018886) fshwr2_hwr_syb_pane_g1

0x33d0,	// (0x000101e6) bg_popup_call_pane_cp01

0xec10,	// (0x0001ba26) fshwr2_func_candi_cell_pane_ParamLimits

0xec10,	// (0x0001ba26) fshwr2_func_candi_cell_pane

0xec42,	// (0x0001ba58) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec42,	// (0x0001ba58) fshwr2_func_candi_cell_bg_pane

0xec5c,	// (0x0001ba72) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec5c,	// (0x0001ba72) fshwr2_func_candi_cell_pane_g1

0xec7c,	// (0x0001ba92) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec7c,	// (0x0001ba92) fshwr2_func_candi_cell_pane_t1

0x33d0,	// (0x000101e6) bg_button_pane_cp08

0x7e37,	// (0x00014c4d) cell_fshwr2_syb_bg_pane

0xec8f,	// (0x0001baa5) cell_fshwr2_syb_bg_pane_g1

0xec97,	// (0x0001baad) cell_fshwr2_syb_bg_pane_t1

0x3dc4,	// (0x00010bda) main_tmo_pane

0x9f85,	// (0x00016d9b) uni_indicator_pane_g1_ParamLimits

0x9f9a,	// (0x00016db0) uni_indicator_pane_g2_ParamLimits

0x9fb0,	// (0x00016dc6) uni_indicator_pane_g3_ParamLimits

0x9fc6,	// (0x00016ddc) uni_indicator_pane_g4_ParamLimits

0x9fc6,	// (0x00016ddc) uni_indicator_pane_g4

0x9fda,	// (0x00016df0) uni_indicator_pane_g5_ParamLimits

0x9fda,	// (0x00016df0) uni_indicator_pane_g5

0x9fee,	// (0x00016e04) uni_indicator_pane_g6_ParamLimits

0x9fee,	// (0x00016e04) uni_indicator_pane_g6

0xf922,	// (0x0001c738) uni_indicator_pane_g_ParamLimits

0xd0c9,	// (0x00019edf) popup_tmo_note_window_ParamLimits

0xd0c9,	// (0x00019edf) popup_tmo_note_window

0x645f,	// (0x00013275) fshwr2_bg_pane

0xec6d,	// (0x0001ba83) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec6d,	// (0x0001ba83) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0001cccf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0001cccf) fshwr2_func_candi_cell_pane_g

0xb7f5,	// (0x0001860b) bg_popup_window_pane_cp01

0xeca6,	// (0x0001babc) bg_popup_window_pane_g1_cp01

0xecaf,	// (0x0001bac5) bg_popup_window_pane_cp22_ParamLimits

0xecaf,	// (0x0001bac5) bg_popup_window_pane_cp22

0xecbd,	// (0x0001bad3) listscroll_tmo_link_pane_ParamLimits

0xecbd,	// (0x0001bad3) listscroll_tmo_link_pane

0xecfd,	// (0x0001bb13) popup_tmo_note_window_g1_ParamLimits

0xecfd,	// (0x0001bb13) popup_tmo_note_window_g1

0xed0a,	// (0x0001bb20) tmo_note_info_pane_ParamLimits

0xed0a,	// (0x0001bb20) tmo_note_info_pane

0xed24,	// (0x0001bb3a) list_tmo_note_info_pane_g1_ParamLimits

0xed24,	// (0x0001bb3a) list_tmo_note_info_pane_g1

0xed3b,	// (0x0001bb51) list_tmo_note_info_pane_g2_ParamLimits

0xed3b,	// (0x0001bb51) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0001ccd4) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0001ccd4) list_tmo_note_info_pane_g

0xed57,	// (0x0001bb6d) list_tmo_note_info_text_pane_ParamLimits

0xed57,	// (0x0001bb6d) list_tmo_note_info_text_pane

0xeddc,	// (0x0001bbf2) list_tmo_link_pane

0xede9,	// (0x0001bbff) scroll_pane_cp20

0xedf6,	// (0x0001bc0c) list_single_tmo_link_pane_ParamLimits

0xedf6,	// (0x0001bc0c) list_single_tmo_link_pane

0xee06,	// (0x0001bc1c) list_single_tmo_link_pane_t1

0xee14,	// (0x0001bc2a) list_tmo_note_info_text_pane_t1_ParamLimits

0xee14,	// (0x0001bc2a) list_tmo_note_info_text_pane_t1

0x7674,	// (0x0001448a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7674,	// (0x0001448a) aid_size_touch_scroll_bar_cp01

0x75b8,	// (0x000143ce) aid_size_touch_slider_marker

0x52b1,	// (0x000120c7) popup_settings_window_ParamLimits

0x52b1,	// (0x000120c7) popup_settings_window

0x81e1,	// (0x00014ff7) popup_candi_list_indi_window

0x883a,	// (0x00015650) aid_touch_navi_pane_ParamLimits

0x63b8,	// (0x000131ce) rs_clock_indi_pane

0x63c1,	// (0x000131d7) sctrl_sk_bottom_pane_ParamLimits

0x63d2,	// (0x000131e8) sctrl_sk_top_pane_ParamLimits

0x64d7,	// (0x000132ed) popup_fep_tooltip_window

0xe6e4,	// (0x0001b4fa) aid_size_cell_widget_grid_ParamLimits

0xe758,	// (0x0001b56e) cell_ai5_widget_pane_g1_ParamLimits

0xe758,	// (0x0001b56e) cell_ai5_widget_pane_g1

0xe7ab,	// (0x0001b5c1) cell_ai5_widget_pane_g6_ParamLimits

0xe7b7,	// (0x0001b5cd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0001cc52) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0001cc52) cell_ai5_widget_pane_g

0xe8e6,	// (0x0001b6fc) cell_ai5_widget_pane_t10_ParamLimits

0xe8e6,	// (0x0001b6fc) cell_ai5_widget_pane_t10

0xe8fc,	// (0x0001b712) grid_ai5_widget_pane_ParamLimits

0xe99e,	// (0x0001b7b4) cell_contacts_ai5_widget_pane_ParamLimits

0xe99e,	// (0x0001b7b4) cell_contacts_ai5_widget_pane

0xeb91,	// (0x0001b9a7) popup_discreet_window_t3_ParamLimits

0xeb91,	// (0x0001b9a7) popup_discreet_window_t3

0x6c85,	// (0x00013a9b) popup_fshwr2_char_preview_window_ParamLimits

0x6c85,	// (0x00013a9b) popup_fshwr2_char_preview_window

0xed75,	// (0x0001bb8b) tmo_note_info_pane_t1

0xed8a,	// (0x0001bba0) tmo_note_info_pane_t2

0xeda3,	// (0x0001bbb9) tmo_note_info_pane_t3

0xedb8,	// (0x0001bbce) tmo_note_info_pane_t4

0xedca,	// (0x0001bbe0) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0001ccd9) tmo_note_info_pane_t

0xeddc,	// (0x0001bbf2) list_tmo_link_pane_ParamLimits

0xede9,	// (0x0001bbff) scroll_pane_cp20_ParamLimits

0x33d0,	// (0x000101e6) bg_popup_fep_char_preview_window_cp01

0xee2d,	// (0x0001bc43) popup_fshwr2_char_preview_window_t1

0xee3b,	// (0x0001bc51) popup_candi_list_indi_window_g1

0xee44,	// (0x0001bc5a) bg_cell_contacts_ai5_widget_pane

0xee50,	// (0x0001bc66) cell_contacts_ai5_widget_pane_g1

0xee63,	// (0x0001bc79) cell_contacts_ai5_widget_pane_g2

0xee6f,	// (0x0001bc85) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0001cce4) cell_contacts_ai5_widget_pane_g

0xee81,	// (0x0001bc97) cell_contacts_ai5_widget_pane_t1

0x3dc4,	// (0x00010bda) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeefb,	// (0x0001bd11) settings_container_pane

0x7e37,	// (0x00014c4d) listscroll_set_pane_copy1

0xac51,	// (0x00017a67) scroll_pane_cp121_copy1

0xef07,	// (0x0001bd1d) set_content_pane_copy1

0xef0f,	// (0x0001bd25) aid_height_set_list_copy1_ParamLimits

0xef0f,	// (0x0001bd25) aid_height_set_list_copy1

0xa216,	// (0x0001702c) aid_size_parent_copy1_ParamLimits

0xa216,	// (0x0001702c) aid_size_parent_copy1

0xef1b,	// (0x0001bd31) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef1b,	// (0x0001bd31) button_value_adjust_pane_cp6_copy1

0x81b9,	// (0x00014fcf) list_highlight_pane_cp2_copy1_ParamLimits

0x81b9,	// (0x00014fcf) list_highlight_pane_cp2_copy1

0xef2f,	// (0x0001bd45) list_set_pane_copy1_ParamLimits

0xef2f,	// (0x0001bd45) list_set_pane_copy1

0xee96,	// (0x0001bcac) main_pane_set_t1_copy1_ParamLimits

0xee96,	// (0x0001bcac) main_pane_set_t1_copy1

0xeed0,	// (0x0001bce6) main_pane_set_t2_copy1_ParamLimits

0xeed0,	// (0x0001bce6) main_pane_set_t2_copy1

0xeff6,	// (0x0001be0c) main_pane_set_t3_copy1

0xf004,	// (0x0001be1a) main_pane_set_t4_copy1

0xeeef,	// (0x0001bd05) set_content_pane_g1_copy1_ParamLimits

0xeeef,	// (0x0001bd05) set_content_pane_g1_copy1

0xf012,	// (0x0001be28) setting_code_pane_copy1

0xf01a,	// (0x0001be30) setting_slider_graphic_pane_copy1

0xf01a,	// (0x0001be30) setting_slider_pane_copy1

0xf01a,	// (0x0001be30) setting_text_pane_copy1

0xf01a,	// (0x0001be30) setting_volume_pane_copy1

0xf012,	// (0x0001be28) settings_code_pane_cp2_copy1

0xf022,	// (0x0001be38) settings_code_pane_cp_copy1_ParamLimits

0xf022,	// (0x0001be38) settings_code_pane_cp_copy1

0x6c9d,	// (0x00013ab3) volume_set_pane_copy1

0xf036,	// (0x0001be4c) volume_set_pane_g10_copy1

0xf042,	// (0x0001be58) volume_set_pane_g1_copy1

0xf04c,	// (0x0001be62) volume_set_pane_g2_copy1

0xf056,	// (0x0001be6c) volume_set_pane_g3_copy1

0xf060,	// (0x0001be76) volume_set_pane_g4_copy1

0xf06a,	// (0x0001be80) volume_set_pane_g5_copy1

0xf074,	// (0x0001be8a) volume_set_pane_g6_copy1

0xf07e,	// (0x0001be94) volume_set_pane_g7_copy1

0xf088,	// (0x0001be9e) volume_set_pane_g8_copy1

0xf092,	// (0x0001bea8) volume_set_pane_g9_copy1

0x3686,	// (0x0001049c) bg_set_opt_pane_cp_copy1_ParamLimits

0x3686,	// (0x0001049c) bg_set_opt_pane_cp_copy1

0x6ca9,	// (0x00013abf) setting_slider_pane_t1_copy1_ParamLimits

0x6ca9,	// (0x00013abf) setting_slider_pane_t1_copy1

0x6cc7,	// (0x00013add) setting_slider_pane_t2_copy1_ParamLimits

0x6cc7,	// (0x00013add) setting_slider_pane_t2_copy1

0x6ce1,	// (0x00013af7) setting_slider_pane_t3_copy1_ParamLimits

0x6ce1,	// (0x00013af7) setting_slider_pane_t3_copy1

0x6cf9,	// (0x00013b0f) slider_set_pane_copy1_ParamLimits

0x6cf9,	// (0x00013b0f) slider_set_pane_copy1

0x3eb1,	// (0x00010cc7) set_opt_bg_pane_g1_copy2

0x3eb9,	// (0x00010ccf) set_opt_bg_pane_g2_copy2

0xf09c,	// (0x0001beb2) set_opt_bg_pane_g3_copy2

0x3ec9,	// (0x00010cdf) set_opt_bg_pane_g4_copy2

0x3ed1,	// (0x00010ce7) set_opt_bg_pane_g5_copy2

0x3ed9,	// (0x00010cef) set_opt_bg_pane_g6_copy2

0xf0a6,	// (0x0001bebc) set_opt_bg_pane_g7_copy2

0xf0b0,	// (0x0001bec6) set_opt_bg_pane_g8_copy2

0xf0ba,	// (0x0001bed0) set_opt_bg_pane_g9_copy2

0xf0c4,	// (0x0001beda) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0c4,	// (0x0001beda) aid_size_touch_slider_mark_copy1

0xf0d8,	// (0x0001beee) slider_set_pane_g1_copy1

0xf0e1,	// (0x0001bef7) slider_set_pane_g2_copy1

0xc149,	// (0x00018f5f) slider_set_pane_g3_copy1_ParamLimits

0xc149,	// (0x00018f5f) slider_set_pane_g3_copy1

0xc15d,	// (0x00018f73) slider_set_pane_g4_copy1_ParamLimits

0xc15d,	// (0x00018f73) slider_set_pane_g4_copy1

0xc175,	// (0x00018f8b) slider_set_pane_g5_copy1_ParamLimits

0xc175,	// (0x00018f8b) slider_set_pane_g5_copy1

0xc149,	// (0x00018f5f) slider_set_pane_g6_copy1_ParamLimits

0xc149,	// (0x00018f5f) slider_set_pane_g6_copy1

0xf0e9,	// (0x0001beff) slider_set_pane_g7_copy1_ParamLimits

0xf0e9,	// (0x0001beff) slider_set_pane_g7_copy1

0x3553,	// (0x00010369) bg_set_opt_pane_cp2_copy1

0xf0ff,	// (0x0001bf15) setting_slider_graphic_pane_g1_copy1

0xf108,	// (0x0001bf1e) setting_slider_graphic_pane_t1_copy1

0xf118,	// (0x0001bf2e) setting_slider_graphic_pane_t2_copy1

0xf128,	// (0x0001bf3e) slider_set_pane_cp_copy1

0xf138,	// (0x0001bf4e) input_focus_pane_cp1_copy1

0xf141,	// (0x0001bf57) list_set_text_pane_copy1

0xf149,	// (0x0001bf5f) setting_text_pane_g1_copy1

0xf152,	// (0x0001bf68) set_text_pane_t1_copy1

0xf138,	// (0x0001bf4e) input_focus_pane_cp2_copy1

0xf149,	// (0x0001bf5f) setting_code_pane_g1_copy1

0xf16b,	// (0x0001bf81) setting_code_pane_t1_copy1

0xf179,	// (0x0001bf8f) list_set_graphic_pane_copy1

0x3553,	// (0x00010369) bg_set_opt_pane_cp4_copy1

0x7b31,	// (0x00014947) list_set_graphic_pane_g1_copy1_ParamLimits

0x7b31,	// (0x00014947) list_set_graphic_pane_g1_copy1

0xf18b,	// (0x0001bfa1) list_set_graphic_pane_g2_copy1

0x7b49,	// (0x0001495f) list_set_graphic_pane_t1_copy1_ParamLimits

0x7b49,	// (0x0001495f) list_set_graphic_pane_t1_copy1

0xb7f5,	// (0x0001860b) rs_clock_indi_pane_g1

0xf193,	// (0x0001bfa9) rs_clock_indi_pane_t1

0xf1a1,	// (0x0001bfb7) rs_indi_pane

0xf1a9,	// (0x0001bfbf) rs_indi_pane_g1

0xf1b2,	// (0x0001bfc8) rs_indi_pane_g2

0xf1bb,	// (0x0001bfd1) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0001cceb) rs_indi_pane_g

0x7e37,	// (0x00014c4d) bg_popup_preview_window_pane_cp03

0xf1c4,	// (0x0001bfda) popup_fep_tooltip_window_t1

0xc71f,	// (0x00019535) popup_note2_window_g2_ParamLimits

0xc71f,	// (0x00019535) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0001ca84) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0001ca84) popup_note2_window_g

0xcd16,	// (0x00019b2c) bg_popup_sub_pane_cp11_ParamLimits

0xcd23,	// (0x00019b39) cell_ai3_links_pane_g1_ParamLimits

0xcd3a,	// (0x00019b50) cell_ai3_links_pane_t1

0xf152,	// (0x0001bf68) set_text_pane_t1_copy1_ParamLimits

0x7d44,	// (0x00014b5a) cell_graphic_popup_pane_cp2_ParamLimits

0x7d44,	// (0x00014b5a) cell_graphic_popup_pane_cp2

0xf1d2,	// (0x0001bfe8) cell_graphic_popup_pane_g1_cp2

0x3a93,	// (0x000108a9) cell_graphic_popup_pane_g2_cp2

0xf1da,	// (0x0001bff0) cell_graphic_popup_pane_g3_cp2

0xf1e2,	// (0x0001bff8) cell_graphic_popup_pane_t2_cp2

0x3aa4,	// (0x000108ba) grid_highlight_pane_cp3_cp2

0x4325,	// (0x0001113b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3dc4,	// (0x00010bda) main_tmo_pane_ParamLimits

0xd0bd,	// (0x00019ed3) popup_tmo_big_image_note_window

0xe748,	// (0x0001b55e) cell_ai5_widget_list_pane

0xe750,	// (0x0001b566) cell_ai5_widget_lrg_icon_pane

0xed75,	// (0x0001bb8b) tmo_note_info_pane_t1_ParamLimits

0xed8a,	// (0x0001bba0) tmo_note_info_pane_t2_ParamLimits

0xeda3,	// (0x0001bbb9) tmo_note_info_pane_t3_ParamLimits

0xedb8,	// (0x0001bbce) tmo_note_info_pane_t4_ParamLimits

0xedca,	// (0x0001bbe0) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0001ccd9) tmo_note_info_pane_t_ParamLimits

0xeefb,	// (0x0001bd11) settings_container_pane_ParamLimits

0xf130,	// (0x0001bf46) indicator_popup_pane_cp5

0xf130,	// (0x0001bf46) indicator_popup_pane_cp6

0xf179,	// (0x0001bf8f) list_set_graphic_pane_copy1_ParamLimits

0x33d0,	// (0x000101e6) bg_popup_window_pane_cp23

0xf1f0,	// (0x0001c006) popup_tmo_big_image_note_window_g1

0xf1fc,	// (0x0001c012) popup_tmo_big_image_note_window_t1

0xf20c,	// (0x0001c022) popup_tmo_big_image_note_window_t2

0xf21c,	// (0x0001c032) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0001ccf2) popup_tmo_big_image_note_window_t

0xf22c,	// (0x0001c042) cell_ai5_widget_lrg_icon_pane_g1

0xf234,	// (0x0001c04a) cell_ai5_widget_lrg_icon_pane_t1

0xf242,	// (0x0001c058) cell_ai5_widget_list_row_pane_ParamLimits

0xf242,	// (0x0001c058) cell_ai5_widget_list_row_pane

0xf25b,	// (0x0001c071) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf25b,	// (0x0001c071) cell_ai5_widget_list_row_pane_g1

0xf268,	// (0x0001c07e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf268,	// (0x0001c07e) cell_ai5_widget_list_row_pane_t1

0xf280,	// (0x0001c096) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf280,	// (0x0001c096) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0001ccf9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0001ccf9) cell_ai5_widget_list_row_pane_t

0x515e,	// (0x00011f74) main_fep_vtchi_ss_pane

0x6d1e,	// (0x00013b34) popup_fep_char_pre_window

0x6d26,	// (0x00013b3c) popup_fep_ituss_window

0x6d47,	// (0x00013b5d) popup_fep_vkbss_window

0xf2a8,	// (0x0001c0be) grid_vkbss_keypad_pane_ParamLimits

0xf2a8,	// (0x0001c0be) grid_vkbss_keypad_pane

0xf2b8,	// (0x0001c0ce) ituss_keypad_pane

0x6d74,	// (0x00013b8a) aid_vkbss_key_offset_ParamLimits

0x6d74,	// (0x00013b8a) aid_vkbss_key_offset

0x6d80,	// (0x00013b96) cell_vkbss_key_pane_ParamLimits

0x6d80,	// (0x00013b96) cell_vkbss_key_pane

0xf2c8,	// (0x0001c0de) bg_cell_vkbss_key_g1_ParamLimits

0xf2c8,	// (0x0001c0de) bg_cell_vkbss_key_g1

0xf2d4,	// (0x0001c0ea) cell_vkbss_key_3p_pane_ParamLimits

0xf2d4,	// (0x0001c0ea) cell_vkbss_key_3p_pane

0xf2ee,	// (0x0001c104) cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x0001c104) cell_vkbss_key_g1

0xf308,	// (0x0001c11e) cell_vkbss_key_t1_ParamLimits

0xf308,	// (0x0001c11e) cell_vkbss_key_t1

0x6d96,	// (0x00013bac) cell_ituss_key_pane_ParamLimits

0x6d96,	// (0x00013bac) cell_ituss_key_pane

0xf333,	// (0x0001c149) bg_cell_ituss_key_g1_ParamLimits

0xf333,	// (0x0001c149) bg_cell_ituss_key_g1

0xf33f,	// (0x0001c155) cell_ituss_key_pane_g1_ParamLimits

0xf33f,	// (0x0001c155) cell_ituss_key_pane_g1

0xf353,	// (0x0001c169) cell_ituss_key_pane_g2_ParamLimits

0xf353,	// (0x0001c169) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001cd00) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001cd00) cell_ituss_key_pane_g

0xf385,	// (0x0001c19b) cell_ituss_key_t1_ParamLimits

0xf385,	// (0x0001c19b) cell_ituss_key_t1

0xf3bf,	// (0x0001c1d5) cell_ituss_key_t2_ParamLimits

0xf3bf,	// (0x0001c1d5) cell_ituss_key_t2

0xf3f0,	// (0x0001c206) cell_ituss_key_t3_ParamLimits

0xf3f0,	// (0x0001c206) cell_ituss_key_t3

0xf421,	// (0x0001c237) cell_ituss_key_t4_ParamLimits

0xf421,	// (0x0001c237) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001cd05) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001cd05) cell_ituss_key_t

0xf452,	// (0x0001c268) cell_vkbss_key_3p_pane_g1

0xf45a,	// (0x0001c270) cell_vkbss_key_3p_pane_g2

0xf462,	// (0x0001c278) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001cd0e) cell_vkbss_key_3p_pane_g

0x33d0,	// (0x000101e6) bg_popup_fep_char_preview_window_cp02

0xf46a,	// (0x0001c280) popup_fep_char_pre_window_t1

0xe6da,	// (0x0001b4f0) main_ai5_sk_pane

0xee44,	// (0x0001bc5a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee50,	// (0x0001bc66) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee63,	// (0x0001bc79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee6f,	// (0x0001bc85) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0001cce4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee81,	// (0x0001bc97) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3dc4,	// (0x00010bda) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf479,	// (0x0001c28f) main_ai5_sk_pane_g1

0x9299,	// (0x000160af) popup_query_code_window_g1

0x6d3c,	// (0x00013b52) popup_fep_vkb_icf_pane

0x6d52,	// (0x00013b68) popup_fep_vtchi_icf_pane

0x3dc4,	// (0x00010bda) bg_icf_pane

0xf482,	// (0x0001c298) list_vkb_icf_pane

0x3dc4,	// (0x00010bda) bg_icf_pane_cp01

0xf48e,	// (0x0001c2a4) vtchi_icf_list_pane

0xf49f,	// (0x0001c2b5) list_vkb_icf_pane_t1_ParamLimits

0xf49f,	// (0x0001c2b5) list_vkb_icf_pane_t1

0xf4b5,	// (0x0001c2cb) vtchi_icf_list_pane_t1_ParamLimits

0xf4b5,	// (0x0001c2cb) vtchi_icf_list_pane_t1

0x6d26,	// (0x00013b3c) popup_fep_ituss_window_ParamLimits

0x6d52,	// (0x00013b68) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b8,	// (0x0001c0ce) ituss_keypad_pane_ParamLimits

0x6d68,	// (0x00013b7e) ituss_sks_pane

0x3dc4,	// (0x00010bda) bg_icf_pane_ParamLimits

0x6d0f,	// (0x00013b25) icf_edit_indi_pane_ParamLimits

0x6d0f,	// (0x00013b25) icf_edit_indi_pane

0xf482,	// (0x0001c298) list_vkb_icf_pane_ParamLimits

0x3dc4,	// (0x00010bda) bg_icf_pane_cp01_ParamLimits

0x6d0f,	// (0x00013b25) icf_edit_indi_pane_cp01_ParamLimits

0x6d0f,	// (0x00013b25) icf_edit_indi_pane_cp01

0xf496,	// (0x0001c2ac) vtchi_query_pane

0xba70,	// (0x00018886) icf_edit_indi_pane_g1_ParamLimits

0xba70,	// (0x00018886) icf_edit_indi_pane_g1

0xf537,	// (0x0001c34d) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001c34d) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cd26) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cd26) icf_edit_indi_pane_g

0xf546,	// (0x0001c35c) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001c2e3) bg_input_focus_pane_cp042

0x3c77,	// (0x00010a8d) vtchi_button_pane

0xf4d6,	// (0x0001c2ec) vtchi_query_pane_t1

0xf4e4,	// (0x0001c2fa) vtchi_query_pane_t2

0xf4f2,	// (0x0001c308) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001cd15) vtchi_query_pane_t

0x33d0,	// (0x000101e6) bg_button_pane_cp13

0xf500,	// (0x0001c316) vtchi_button_pane_g1

0xf508,	// (0x0001c31e) ituss_sks_pane_g1

0xf513,	// (0x0001c329) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cd1c) ituss_sks_pane_g

0xf51b,	// (0x0001c331) ituss_sks_pane_t1

0xf529,	// (0x0001c33f) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cd21) ituss_sks_pane_t

0xb24f,	// (0x00018065) indicator_nsta_pane_cp_g1

0xb258,	// (0x0001806e) indicator_nsta_pane_cp_g2

0xb260,	// (0x00018076) indicator_nsta_pane_cp_g3

0xb268,	// (0x0001807e) indicator_nsta_pane_cp_g4

0xb270,	// (0x00018086) indicator_nsta_pane_cp_g5

0xb278,	// (0x0001808e) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001c8c2) indicator_nsta_pane_cp_g

0xddc5,	// (0x0001abdb) cell_graphic2_pane_t2_ParamLimits

0xddc5,	// (0x0001abdb) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0001cbdb) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0001cbdb) cell_graphic2_pane_t

0xddf2,	// (0x0001ac08) cell_graphic2_control_pane_t1

0x7858,	// (0x0001466e) signal_pane_g3_ParamLimits

0x7858,	// (0x0001466e) signal_pane_g3

0x786a,	// (0x00014680) signal_pane_g4_ParamLimits

0x786a,	// (0x00014680) signal_pane_g4

0xf292,	// (0x0001c0a8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf292,	// (0x0001c0a8) cell_ai5_widget_list_row_pane_t3

0xf373,	// (0x0001c189) cell_ituss_key_pane_t1_ParamLimits

0xf373,	// (0x0001c189) cell_ituss_key_pane_t1

0x8ee7,	// (0x00015cfd) form_field_data_wide_pane_vc_t2_ParamLimits

0x8ee7,	// (0x00015cfd) form_field_data_wide_pane_vc_t2

0x8efb,	// (0x00015d11) form_field_data_wide_pane_vc_t3_ParamLimits

0x8efb,	// (0x00015d11) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001c620) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001c620) form_field_data_wide_pane_vc_t

0xaefa,	// (0x00017d10) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaefa,	// (0x00017d10) form_field_slider_wide_pane_vc_t3

0xafd0,	// (0x00017de6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafd0,	// (0x00017de6) form_field_popup_wide_pane_vc_t2

0xafe7,	// (0x00017dfd) form_field_popup_wide_pane_vc_t3_ParamLimits

0xafe7,	// (0x00017dfd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001c8b1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001c8b1) form_field_popup_wide_pane_vc_t

0x6c23,	// (0x00013a39) aid_fshwr2_btn_pane_ParamLimits

0x6c2f,	// (0x00013a45) aid_fshwr2_syb_pane_ParamLimits

0x6c40,	// (0x00013a56) aid_fshwr2_txt_pane_ParamLimits

0x645f,	// (0x00013275) fshwr2_bg_pane_ParamLimits

0x6c4c,	// (0x00013a62) fshwr2_func_candi_pane_ParamLimits

0x6c5d,	// (0x00013a73) fshwr2_hwr_syb_pane_ParamLimits

0x6c70,	// (0x00013a86) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

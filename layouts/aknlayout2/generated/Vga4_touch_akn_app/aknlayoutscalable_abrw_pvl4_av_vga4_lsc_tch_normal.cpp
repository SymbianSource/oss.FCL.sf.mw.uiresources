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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000132da };

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
0xa806,	// (0x0001dae0) Screen

0xa812,	// (0x0001daec) application_window_ParamLimits

0xa812,	// (0x0001daec) application_window

0xc6db,	// (0x0001f9b5) screen_g1

0x9636,	// (0x0001c910) area_bottom_pane_ParamLimits

0x9636,	// (0x0001c910) area_bottom_pane

0xdd18,	// (0x00020ff2) area_top_pane_ParamLimits

0xdd18,	// (0x00020ff2) area_top_pane

0xddb6,	// (0x00021090) main_pane_ParamLimits

0xddb6,	// (0x00021090) main_pane

0xc6e5,	// (0x0001f9bf) misc_graphics

0xb5f3,	// (0x0001e8cd) battery_pane_ParamLimits

0xb5f3,	// (0x0001e8cd) battery_pane

0x30e0,	// (0x000163ba) bg_status_flat_pane_g8

0x30e8,	// (0x000163c2) bg_status_flat_pane_g9

0x23c7,	// (0x000156a1) context_pane_ParamLimits

0x23c7,	// (0x000156a1) context_pane

0xb76a,	// (0x0001ea44) navi_pane_ParamLimits

0xb76a,	// (0x0001ea44) navi_pane

0xb7f2,	// (0x0001eacc) signal_pane_ParamLimits

0xb7f2,	// (0x0001eacc) signal_pane

0x0008,

0xf848,	// (0x00022b22) bg_status_flat_pane_g

0xb882,	// (0x0001eb5c) status_pane_g1_ParamLimits

0xb882,	// (0x0001eb5c) status_pane_g1

0xb898,	// (0x0001eb72) status_pane_g2_ParamLimits

0xb898,	// (0x0001eb72) status_pane_g2

0x25fe,	// (0x000158d8) status_pane_g3_ParamLimits

0x25fe,	// (0x000158d8) status_pane_g3

0x0004,

0xf774,	// (0x00022a4e) status_pane_g_ParamLimits

0xf774,	// (0x00022a4e) status_pane_g

0xb8a4,	// (0x0001eb7e) title_pane_ParamLimits

0xb8a4,	// (0x0001eb7e) title_pane

0xb907,	// (0x0001ebe1) uni_indicator_pane_ParamLimits

0xb907,	// (0x0001ebe1) uni_indicator_pane

0x2223,	// (0x000154fd) bg_list_pane_ParamLimits

0x2223,	// (0x000154fd) bg_list_pane

0xb566,	// (0x0001e840) find_pane

0x28e5,	// (0x00015bbf) listscroll_app_pane_ParamLimits

0x28e5,	// (0x00015bbf) listscroll_app_pane

0x2257,	// (0x00015531) listscroll_form_pane

0x98e8,	// (0x0001cbc2) listscroll_gen_pane_ParamLimits

0x98e8,	// (0x0001cbc2) listscroll_gen_pane

0xea70,	// (0x00021d4a) listscroll_set_pane

0x3c95,	// (0x00016f6f) main_idle_act_pane

0x1f1c,	// (0x000151f6) main_idle_trad_pane

0x1f1c,	// (0x000151f6) main_list_empty_pane

0x224b,	// (0x00015525) main_midp_pane

0x2271,	// (0x0001554b) main_pane_g1_ParamLimits

0x2271,	// (0x0001554b) main_pane_g1

0x98fc,	// (0x0001cbd6) popup_ai_message_window_ParamLimits

0x98fc,	// (0x0001cbd6) popup_ai_message_window

0x999c,	// (0x0001cc76) popup_fep_china_uni_window_ParamLimits

0x999c,	// (0x0001cc76) popup_fep_china_uni_window

0xeab2,	// (0x00021d8c) popup_fep_japan_candidate_window_ParamLimits

0xeab2,	// (0x00021d8c) popup_fep_japan_candidate_window

0xeadc,	// (0x00021db6) popup_fep_japan_predictive_window_ParamLimits

0xeadc,	// (0x00021db6) popup_fep_japan_predictive_window

0x99fc,	// (0x0001ccd6) popup_find_window

0x9a19,	// (0x0001ccf3) popup_grid_graphic_window_ParamLimits

0x9a19,	// (0x0001ccf3) popup_grid_graphic_window

0xeb12,	// (0x00021dec) popup_large_graphic_colour_window

0x9ac3,	// (0x0001cd9d) popup_menu_window_ParamLimits

0x9ac3,	// (0x0001cd9d) popup_menu_window

0x9cb3,	// (0x0001cf8d) popup_note_image_window

0x9c73,	// (0x0001cf4d) popup_note_wait_window_ParamLimits

0x9c73,	// (0x0001cf4d) popup_note_wait_window

0x9ccb,	// (0x0001cfa5) popup_note_window_ParamLimits

0x9ccb,	// (0x0001cfa5) popup_note_window

0x9d79,	// (0x0001d053) popup_query_code_window_ParamLimits

0x9d79,	// (0x0001d053) popup_query_code_window

0xeb38,	// (0x00021e12) popup_query_data_code_window_ParamLimits

0xeb38,	// (0x00021e12) popup_query_data_code_window

0x9db9,	// (0x0001d093) popup_query_data_window_ParamLimits

0x9db9,	// (0x0001d093) popup_query_data_window

0x9e4d,	// (0x0001d127) popup_query_sat_info_window_ParamLimits

0x9e4d,	// (0x0001d127) popup_query_sat_info_window

0x9ef8,	// (0x0001d1d2) popup_snote_single_graphic_window_ParamLimits

0x9ef8,	// (0x0001d1d2) popup_snote_single_graphic_window

0x9ef8,	// (0x0001d1d2) popup_snote_single_text_window_ParamLimits

0x9ef8,	// (0x0001d1d2) popup_snote_single_text_window

0xeb5b,	// (0x00021e35) popup_sub_window_general

0xebb1,	// (0x00021e8b) popup_window_general_ParamLimits

0xebb1,	// (0x00021e8b) popup_window_general

0x2287,	// (0x00015561) power_save_pane

0xea04,	// (0x00021cde) control_pane_g1_ParamLimits

0xea04,	// (0x00021cde) control_pane_g1

0xea27,	// (0x00021d01) control_pane_g2_ParamLimits

0xea27,	// (0x00021d01) control_pane_g2

0x21e6,	// (0x000154c0) control_pane_g3_ParamLimits

0x21e6,	// (0x000154c0) control_pane_g3

0x0007,

0xf75c,	// (0x00022a36) control_pane_g_ParamLimits

0xf75c,	// (0x00022a36) control_pane_g

0x97ff,	// (0x0001cad9) control_pane_t1_ParamLimits

0x97ff,	// (0x0001cad9) control_pane_t1

0x984f,	// (0x0001cb29) control_pane_t2_ParamLimits

0x984f,	// (0x0001cb29) control_pane_t2

0x0002,

0xf76d,	// (0x00022a47) control_pane_t_ParamLimits

0xf76d,	// (0x00022a47) control_pane_t

0x210b,	// (0x000153e5) navi_navi_volume_pane_cp1

0x2113,	// (0x000153ed) status_small_icon_pane

0x211b,	// (0x000153f5) status_small_pane_g1_ParamLimits

0x211b,	// (0x000153f5) status_small_pane_g1

0x214f,	// (0x00015429) status_small_pane_g2_ParamLimits

0x214f,	// (0x00015429) status_small_pane_g2

0x215b,	// (0x00015435) status_small_pane_g3_ParamLimits

0x215b,	// (0x00015435) status_small_pane_g3

0xb52e,	// (0x0001e808) status_small_pane_g4_ParamLimits

0xb52e,	// (0x0001e808) status_small_pane_g4

0xb53c,	// (0x0001e816) status_small_pane_g5_ParamLimits

0xb53c,	// (0x0001e816) status_small_pane_g5

0x2181,	// (0x0001545b) status_small_pane_g6_ParamLimits

0x2181,	// (0x0001545b) status_small_pane_g6

0x0007,

0xf74b,	// (0x00022a25) status_small_pane_g_ParamLimits

0xf74b,	// (0x00022a25) status_small_pane_g

0x21b0,	// (0x0001548a) status_small_pane_t1

0xb552,	// (0x0001e82c) status_small_wait_pane_ParamLimits

0xb552,	// (0x0001e82c) status_small_wait_pane

0xb362,	// (0x0001e63c) aid_levels_signal_ParamLimits

0xb362,	// (0x0001e63c) aid_levels_signal

0xb37a,	// (0x0001e654) signal_pane_g1_ParamLimits

0xb37a,	// (0x0001e654) signal_pane_g1

0xb395,	// (0x0001e66f) signal_pane_g2_ParamLimits

0xb395,	// (0x0001e66f) signal_pane_g2

0x0003,

0xf6dc,	// (0x000229b6) signal_pane_g_ParamLimits

0xf6dc,	// (0x000229b6) signal_pane_g

0x194e,	// (0x00014c28) context_pane_g1

0xa822,	// (0x0001dafc) title_pane_g1

0xa865,	// (0x0001db3f) title_pane_t1

0xc6fb,	// (0x0001f9d5) title_pane_t2

0xc721,	// (0x0001f9fb) title_pane_t3

0x0002,

0xf530,	// (0x0002280a) title_pane_t

0xb92f,	// (0x0001ec09) aid_levels_battery_ParamLimits

0xb92f,	// (0x0001ec09) aid_levels_battery

0xb94b,	// (0x0001ec25) battery_pane_g1_ParamLimits

0xb94b,	// (0x0001ec25) battery_pane_g1

0xb968,	// (0x0001ec42) battery_pane_g2_ParamLimits

0xb968,	// (0x0001ec42) battery_pane_g2

0x0001,

0xf77f,	// (0x00022a59) battery_pane_g_ParamLimits

0xf77f,	// (0x00022a59) battery_pane_g

0xbbb7,	// (0x0001ee91) uni_indicator_pane_g1

0xbbcd,	// (0x0001eea7) uni_indicator_pane_g2

0xbbe3,	// (0x0001eebd) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x00022bca) uni_indicator_pane_g

0x1d7b,	// (0x00015055) navi_icon_pane_ParamLimits

0x1d7b,	// (0x00015055) navi_icon_pane

0x1cc2,	// (0x00014f9c) navi_midp_pane

0x1d97,	// (0x00015071) navi_navi_pane

0x1da1,	// (0x0001507b) navi_text_pane_ParamLimits

0x1da1,	// (0x0001507b) navi_text_pane

0xc6db,	// (0x0001f9b5) status_small_wait_pane_g1

0xe0a2,	// (0x0002137c) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x00022bc5) status_small_wait_pane_g

0xbb56,	// (0x0001ee30) navi_navi_icon_text_pane

0xbb5e,	// (0x0001ee38) navi_navi_pane_g1_ParamLimits

0xbb5e,	// (0x0001ee38) navi_navi_pane_g1

0xbb70,	// (0x0001ee4a) navi_navi_pane_g2_ParamLimits

0xbb70,	// (0x0001ee4a) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x00022b93) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x00022b93) navi_navi_pane_g

0x3769,	// (0x00016a43) navi_navi_tabs_pane

0xbb82,	// (0x0001ee5c) navi_navi_text_pane

0xbb56,	// (0x0001ee30) navi_navi_volume_pane

0xbb44,	// (0x0001ee1e) navi_text_pane_t1

0xbb38,	// (0x0001ee12) navi_icon_pane_g1

0x3660,	// (0x0001693a) navi_navi_text_pane_t1

0xa0e4,	// (0x0001d3be) navi_navi_volume_pane_g1

0xa0ec,	// (0x0001d3c6) volume_small_pane

0xba94,	// (0x0001ed6e) navi_navi_icon_text_pane_g1

0xba9c,	// (0x0001ed76) navi_navi_icon_text_pane_t1

0x1d97,	// (0x00015071) navi_tabs_2_long_pane

0x1d97,	// (0x00015071) navi_tabs_2_pane

0x1d97,	// (0x00015071) navi_tabs_3_long_pane

0x1d97,	// (0x00015071) navi_tabs_3_pane

0x1d97,	// (0x00015071) navi_tabs_4_pane

0xedf9,	// (0x000220d3) tabs_2_active_pane_ParamLimits

0xedf9,	// (0x000220d3) tabs_2_active_pane

0xee09,	// (0x000220e3) tabs_2_passive_pane_ParamLimits

0xee09,	// (0x000220e3) tabs_2_passive_pane

0xedc7,	// (0x000220a1) tabs_3_active_pane_ParamLimits

0xedc7,	// (0x000220a1) tabs_3_active_pane

0xedd7,	// (0x000220b1) tabs_3_passive_pane_ParamLimits

0xedd7,	// (0x000220b1) tabs_3_passive_pane

0xede8,	// (0x000220c2) tabs_3_passive_pane_cp_ParamLimits

0xede8,	// (0x000220c2) tabs_3_passive_pane_cp

0xed7b,	// (0x00022055) tabs_4_active_pane_ParamLimits

0xed7b,	// (0x00022055) tabs_4_active_pane

0xed8e,	// (0x00022068) tabs_4_passive_pane_ParamLimits

0xed8e,	// (0x00022068) tabs_4_passive_pane

0xed9f,	// (0x00022079) tabs_4_passive_pane_cp_ParamLimits

0xed9f,	// (0x00022079) tabs_4_passive_pane_cp

0xedb0,	// (0x0002208a) tabs_4_passive_pane_cp2_ParamLimits

0xedb0,	// (0x0002208a) tabs_4_passive_pane_cp2

0xed57,	// (0x00022031) tabs_2_long_active_pane_ParamLimits

0xed57,	// (0x00022031) tabs_2_long_active_pane

0xed69,	// (0x00022043) tabs_2_long_passive_pane_ParamLimits

0xed69,	// (0x00022043) tabs_2_long_passive_pane

0xed18,	// (0x00021ff2) tabs_3_long_active_pane_ParamLimits

0xed18,	// (0x00021ff2) tabs_3_long_active_pane

0xed2b,	// (0x00022005) tabs_3_long_passive_pane_ParamLimits

0xed2b,	// (0x00022005) tabs_3_long_passive_pane

0xed44,	// (0x0002201e) tabs_3_long_passive_pane_cp_ParamLimits

0xed44,	// (0x0002201e) tabs_3_long_passive_pane_cp

0xed0f,	// (0x00021fe9) volume_small_pane_g1

0xa093,	// (0x0001d36d) volume_small_pane_g2

0xa09c,	// (0x0001d376) volume_small_pane_g3

0xa0a5,	// (0x0001d37f) volume_small_pane_g4

0xa0ae,	// (0x0001d388) volume_small_pane_g5

0xa0b7,	// (0x0001d391) volume_small_pane_g6

0xa0c0,	// (0x0001d39a) volume_small_pane_g7

0xa0c9,	// (0x0001d3a3) volume_small_pane_g8

0xa0d2,	// (0x0001d3ac) volume_small_pane_g9

0xa0db,	// (0x0001d3b5) volume_small_pane_g10

0x0009,

0xf885,	// (0x00022b5f) volume_small_pane_g

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp2_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp2

0xa8f1,	// (0x0001dbcb) tabs_3_active_pane_g1

0xa8f9,	// (0x0001dbd3) tabs_3_active_pane_t1

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp2_ParamLimits

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp2

0xa8f1,	// (0x0001dbcb) tabs_3_passive_pane_g1

0xa8f9,	// (0x0001dbd3) tabs_3_passive_pane_t1

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp3_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp3

0xa90b,	// (0x0001dbe5) tabs_4_active_pane_g1

0xa913,	// (0x0001dbed) tabs_4_active_pane_t1

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp3_ParamLimits

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp3

0xa90b,	// (0x0001dbe5) tabs_4_1_passive_pane_g1

0xa913,	// (0x0001dbed) tabs_4_1_passive_pane_t1

0x224b,	// (0x00015525) list_highlight_pane_cp2

0xbc76,	// (0x0001ef50) list_set_pane_ParamLimits

0xbc76,	// (0x0001ef50) list_set_pane

0xbd38,	// (0x0001f012) main_pane_set_t1_ParamLimits

0xbd38,	// (0x0001f012) main_pane_set_t1

0xbd58,	// (0x0001f032) main_pane_set_t2_ParamLimits

0xbd58,	// (0x0001f032) main_pane_set_t2

0xbd6c,	// (0x0001f046) main_pane_set_t3_ParamLimits

0xbd6c,	// (0x0001f046) main_pane_set_t3

0xbd80,	// (0x0001f05a) main_pane_set_t4_ParamLimits

0xbd80,	// (0x0001f05a) main_pane_set_t4

0x0003,

0xf955,	// (0x00022c2f) main_pane_set_t_ParamLimits

0xf955,	// (0x00022c2f) main_pane_set_t

0xbd94,	// (0x0001f06e) setting_code_pane

0x3de3,	// (0x000170bd) setting_slider_graphic_pane

0x3de3,	// (0x000170bd) setting_slider_pane

0x3de3,	// (0x000170bd) setting_text_pane

0x3de3,	// (0x000170bd) setting_volume_pane

0xdec5,	// (0x0002119f) volume_set_pane

0xc741,	// (0x0001fa1b) bg_set_opt_pane_cp

0xdecf,	// (0x000211a9) setting_slider_pane_t1

0xdee8,	// (0x000211c2) setting_slider_pane_t2

0xdf02,	// (0x000211dc) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00022811) setting_slider_pane_t

0xdf1a,	// (0x000211f4) slider_set_pane

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp2

0xc74f,	// (0x0001fa29) setting_slider_graphic_pane_g1

0xdf30,	// (0x0002120a) setting_slider_graphic_pane_t1

0xdf40,	// (0x0002121a) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00022818) setting_slider_graphic_pane_t

0xdf50,	// (0x0002122a) slider_set_pane_cp

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp1

0x3c7c,	// (0x00016f56) list_set_text_pane

0xc6db,	// (0x0001f9b5) setting_text_pane_g1

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp2

0xc6db,	// (0x0001f9b5) setting_code_pane_g1

0xc758,	// (0x0001fa32) setting_code_pane_t1

0xc766,	// (0x0001fa40) set_text_pane_t1_ParamLimits

0xc766,	// (0x0001fa40) set_text_pane_t1

0xe525,	// (0x000217ff) set_opt_bg_pane_g1

0xe52d,	// (0x00021807) set_opt_bg_pane_g2

0x3c54,	// (0x00016f2e) set_opt_bg_pane_g3

0xe53d,	// (0x00021817) set_opt_bg_pane_g4

0xe545,	// (0x0002181f) set_opt_bg_pane_g5

0xe54d,	// (0x00021827) set_opt_bg_pane_g6

0x3c5e,	// (0x00016f38) set_opt_bg_pane_g7

0x3c68,	// (0x00016f42) set_opt_bg_pane_g8

0x3c72,	// (0x00016f4c) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x00022c1c) set_opt_bg_pane_g

0x3c47,	// (0x00016f21) slider_set_pane_g1

0xee91,	// (0x0002216b) slider_set_pane_g2

0x0006,

0xf933,	// (0x00022c0d) slider_set_pane_g

0xee19,	// (0x000220f3) volume_set_pane_g1

0xee23,	// (0x000220fd) volume_set_pane_g2

0xee2d,	// (0x00022107) volume_set_pane_g3

0xee37,	// (0x00022111) volume_set_pane_g4

0xee41,	// (0x0002211b) volume_set_pane_g5

0xee4b,	// (0x00022125) volume_set_pane_g6

0xee55,	// (0x0002212f) volume_set_pane_g7

0xee5f,	// (0x00022139) volume_set_pane_g8

0xee69,	// (0x00022143) volume_set_pane_g9

0xee73,	// (0x0002214d) volume_set_pane_g10

0x0009,

0xf90b,	// (0x00022be5) volume_set_pane_g

0xa925,	// (0x0001dbff) indicator_pane_ParamLimits

0xa925,	// (0x0001dbff) indicator_pane

0xa951,	// (0x0001dc2b) main_idle_pane_g2_ParamLimits

0xa951,	// (0x0001dc2b) main_idle_pane_g2

0xa989,	// (0x0001dc63) main_pane_idle_g1_ParamLimits

0xa989,	// (0x0001dc63) main_pane_idle_g1

0xc780,	// (0x0001fa5a) popup_clock_digital_analogue_window_ParamLimits

0xc780,	// (0x0001fa5a) popup_clock_digital_analogue_window

0xa9b3,	// (0x0001dc8d) soft_indicator_pane_ParamLimits

0xa9b3,	// (0x0001dc8d) soft_indicator_pane

0xa9cf,	// (0x0001dca9) wallpaper_pane_ParamLimits

0xa9cf,	// (0x0001dca9) wallpaper_pane

0xc6db,	// (0x0001f9b5) wallpaper_pane_g1

0xa9e1,	// (0x0001dcbb) indicator_pane_g1_ParamLimits

0xa9e1,	// (0x0001dcbb) indicator_pane_g1

0x4156,	// (0x00017430) navi_navi_icon_text_pane_srt_g1

0xc7ae,	// (0x0001fa88) soft_indicator_pane_t1

0xc7c8,	// (0x0001faa2) aid_ps_area_pane

0xa9fa,	// (0x0001dcd4) aid_ps_clock_pane

0xc7d9,	// (0x0001fab3) aid_ps_indicator_pane

0xc7e5,	// (0x0001fabf) indicator_ps_pane_ParamLimits

0xc7e5,	// (0x0001fabf) indicator_ps_pane

0xc7f4,	// (0x0001face) power_save_pane_g1_ParamLimits

0xc7f4,	// (0x0001face) power_save_pane_g1

0xc800,	// (0x0001fada) power_save_pane_g2_ParamLimits

0xc800,	// (0x0001fada) power_save_pane_g2

0xdca9,	// (0x00020f83) aid_navinavi_width_pane

0xc7c8,	// (0x0001faa2) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0002281d) power_save_pane_g_ParamLimits

0xf543,	// (0x0002281d) power_save_pane_g

0xc80e,	// (0x0001fae8) power_save_pane_t1_ParamLimits

0xc80e,	// (0x0001fae8) power_save_pane_t1

0xa9fa,	// (0x0001dcd4) aid_ps_clock_pane_ParamLimits

0xc7d9,	// (0x0001fab3) aid_ps_indicator_pane_ParamLimits

0xc820,	// (0x0001fafa) power_save_pane_t4_ParamLimits

0xc820,	// (0x0001fafa) power_save_pane_t4

0x0001,

0xf548,	// (0x00022822) power_save_pane_t_ParamLimits

0xf548,	// (0x00022822) power_save_pane_t

0xc84a,	// (0x0001fb24) power_save_t3_ParamLimits

0xc84a,	// (0x0001fb24) power_save_t3

0xc835,	// (0x0001fb0f) power_save_t2_ParamLimits

0xc835,	// (0x0001fb0f) power_save_t2

0xc85f,	// (0x0001fb39) indicator_ps_pane_g1

0xaa08,	// (0x0001dce2) ai_gene_pane_ParamLimits

0xaa08,	// (0x0001dce2) ai_gene_pane

0xaa1f,	// (0x0001dcf9) ai_links_pane_ParamLimits

0xaa1f,	// (0x0001dcf9) ai_links_pane

0xaa37,	// (0x0001dd11) indicator_pane_cp1_ParamLimits

0xaa37,	// (0x0001dd11) indicator_pane_cp1

0xaa46,	// (0x0001dd20) main_pane_idle_g1_cp_ParamLimits

0xaa46,	// (0x0001dd20) main_pane_idle_g1_cp

0xc868,	// (0x0001fb42) popup_ai_links_title_window

0xaa5e,	// (0x0001dd38) soft_indicator_pane_cp1_ParamLimits

0xaa5e,	// (0x0001dd38) soft_indicator_pane_cp1

0x3a18,	// (0x00016cf2) ai_links_pane_g1

0x3a21,	// (0x00016cfb) grid_ai_links_pane

0xbbae,	// (0x0001ee88) ai_gene_pane_1

0x3a06,	// (0x00016ce0) ai_gene_pane_2

0x3a0f,	// (0x00016ce9) list_highlight_pane_cp4

0xbb8a,	// (0x0001ee64) cell_ai_link_pane_ParamLimits

0xbb8a,	// (0x0001ee64) cell_ai_link_pane

0x39d5,	// (0x00016caf) cell_ai_link_pane_g1

0xe0a2,	// (0x0002137c) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x00022bc0) cell_ai_link_pane_g

0xc6e5,	// (0x0001f9bf) grid_highlight_cp2

0xc6e5,	// (0x0001f9bf) bg_popup_sub_pane_cp1

0xc87f,	// (0x0001fb59) popup_ai_links_title_window_t1

0x3921,	// (0x00016bfb) ai_gene_pane_1_g1_ParamLimits

0x3921,	// (0x00016bfb) ai_gene_pane_1_g1

0x392d,	// (0x00016c07) ai_gene_pane_1_g2_ParamLimits

0x392d,	// (0x00016c07) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x00022bb6) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x00022bb6) ai_gene_pane_1_g

0x393a,	// (0x00016c14) ai_gene_pane_1_t1_ParamLimits

0x393a,	// (0x00016c14) ai_gene_pane_1_t1

0x396e,	// (0x00016c48) grid_ai_soft_ind_pane

0x390c,	// (0x00016be6) ai_gene_pane_2_t1_ParamLimits

0x390c,	// (0x00016be6) ai_gene_pane_2_t1

0xaa72,	// (0x0001dd4c) main_pane_empty_t1_ParamLimits

0xaa72,	// (0x0001dd4c) main_pane_empty_t1

0xaa8a,	// (0x0001dd64) main_pane_empty_t2_ParamLimits

0xaa8a,	// (0x0001dd64) main_pane_empty_t2

0xaa9f,	// (0x0001dd79) main_pane_empty_t3_ParamLimits

0xaa9f,	// (0x0001dd79) main_pane_empty_t3

0xaab1,	// (0x0001dd8b) main_pane_empty_t4_ParamLimits

0xaab1,	// (0x0001dd8b) main_pane_empty_t4

0xaac3,	// (0x0001dd9d) main_pane_empty_t5_ParamLimits

0xaac3,	// (0x0001dd9d) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00022827) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00022827) main_pane_empty_t

0x12e6,	// (0x000145c0) bg_popup_window_pane_ParamLimits

0x12e6,	// (0x000145c0) bg_popup_window_pane

0x366e,	// (0x00016948) find_popup_pane_cp2_ParamLimits

0x366e,	// (0x00016948) find_popup_pane_cp2

0x367a,	// (0x00016954) heading_pane_ParamLimits

0x367a,	// (0x00016954) heading_pane

0xc6e5,	// (0x0001f9bf) bg_popup_sub_pane

0xbab9,	// (0x0001ed93) bg_popup_window_pane_g1_ParamLimits

0xbab9,	// (0x0001ed93) bg_popup_window_pane_g1

0xbac8,	// (0x0001eda2) bg_popup_window_pane_g2_ParamLimits

0xbac8,	// (0x0001eda2) bg_popup_window_pane_g2

0xbad4,	// (0x0001edae) bg_popup_window_pane_g3_ParamLimits

0xbad4,	// (0x0001edae) bg_popup_window_pane_g3

0xbae0,	// (0x0001edba) bg_popup_window_pane_g4_ParamLimits

0xbae0,	// (0x0001edba) bg_popup_window_pane_g4

0xbaef,	// (0x0001edc9) bg_popup_window_pane_g5_ParamLimits

0xbaef,	// (0x0001edc9) bg_popup_window_pane_g5

0xbaff,	// (0x0001edd9) bg_popup_window_pane_g6_ParamLimits

0xbaff,	// (0x0001edd9) bg_popup_window_pane_g6

0xbb0b,	// (0x0001ede5) bg_popup_window_pane_g7_ParamLimits

0xbb0b,	// (0x0001ede5) bg_popup_window_pane_g7

0xbb1a,	// (0x0001edf4) bg_popup_window_pane_g8_ParamLimits

0xbb1a,	// (0x0001edf4) bg_popup_window_pane_g8

0xbb29,	// (0x0001ee03) bg_popup_window_pane_g9_ParamLimits

0xbb29,	// (0x0001ee03) bg_popup_window_pane_g9

0x3654,	// (0x0001692e) bg_popup_window_pane_g10_ParamLimits

0x3654,	// (0x0001692e) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x00022b7e) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x00022b7e) bg_popup_window_pane_g

0x357d,	// (0x00016857) bg_popup_heading_pane_ParamLimits

0x357d,	// (0x00016857) bg_popup_heading_pane

0xef78,	// (0x00022252) tabs_4_passive_pane_cp_srt_ParamLimits

0xef78,	// (0x00022252) tabs_4_passive_pane_cp_srt

0xef8a,	// (0x00022264) tabs_4_passive_pane_srt_ParamLimits

0x3591,	// (0x0001686b) heading_pane_g2

0xef8a,	// (0x00022264) tabs_4_passive_pane_srt

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp3_srt

0x3599,	// (0x00016873) heading_pane_t1_ParamLimits

0x3599,	// (0x00016873) heading_pane_t1

0x35b0,	// (0x0001688a) heading_pane_t2_ParamLimits

0x35b0,	// (0x0001688a) heading_pane_t2

0x0001,

0xf89f,	// (0x00022b79) heading_pane_t_ParamLimits

0xf89f,	// (0x00022b79) heading_pane_t

0x30a8,	// (0x00016382) bg_popup_heading_pane_g1

0x3157,	// (0x00016431) bg_popup_heading_pane_g2

0x3161,	// (0x0001643b) bg_popup_heading_pane_g3

0x316b,	// (0x00016445) bg_popup_heading_pane_g4

0x3175,	// (0x0001644f) bg_popup_heading_pane_g5

0x317f,	// (0x00016459) bg_popup_heading_pane_g6

0x3187,	// (0x00016461) bg_popup_heading_pane_g7

0x318f,	// (0x00016469) bg_popup_heading_pane_g8

0x3199,	// (0x00016473) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x00022b35) bg_popup_heading_pane_g

0x27bd,	// (0x00015a97) bg_popup_sub_pane_g1

0x27cd,	// (0x00015aa7) bg_popup_sub_pane_g2

0x27c5,	// (0x00015a9f) bg_popup_sub_pane_g3

0x27dd,	// (0x00015ab7) bg_popup_sub_pane_g4

0x27d5,	// (0x00015aaf) bg_popup_sub_pane_g5

0x27e5,	// (0x00015abf) bg_popup_sub_pane_g6

0x27ed,	// (0x00015ac7) bg_popup_sub_pane_g7

0x27fd,	// (0x00015ad7) bg_popup_sub_pane_g8

0x27f5,	// (0x00015acf) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x00022b0f) bg_popup_sub_pane_g

0xc733,	// (0x0001fa0d) bg_popup_window_pane_cp5_ParamLimits

0xc733,	// (0x0001fa0d) bg_popup_window_pane_cp5

0xc89c,	// (0x0001fb76) popup_note_window_g1_ParamLimits

0xc89c,	// (0x0001fb76) popup_note_window_g1

0xc8a8,	// (0x0001fb82) popup_note_window_t1_ParamLimits

0xc8a8,	// (0x0001fb82) popup_note_window_t1

0xc8be,	// (0x0001fb98) popup_note_window_t2_ParamLimits

0xc8be,	// (0x0001fb98) popup_note_window_t2

0xc8d4,	// (0x0001fbae) popup_note_window_t3_ParamLimits

0xc8d4,	// (0x0001fbae) popup_note_window_t3

0xc8ea,	// (0x0001fbc4) popup_note_window_t4_ParamLimits

0xc8ea,	// (0x0001fbc4) popup_note_window_t4

0xdf58,	// (0x00021232) popup_note_window_t5_ParamLimits

0xdf58,	// (0x00021232) popup_note_window_t5

0x0004,

0xf558,	// (0x00022832) popup_note_window_t_ParamLimits

0xf558,	// (0x00022832) popup_note_window_t

0xdfa2,	// (0x0002127c) bg_popup_window_pane_cp6_ParamLimits

0xdfa2,	// (0x0002127c) bg_popup_window_pane_cp6

0x3024,	// (0x000162fe) popup_note_image_window_g1_ParamLimits

0x3024,	// (0x000162fe) popup_note_image_window_g1

0x3030,	// (0x0001630a) popup_note_image_window_g2_ParamLimits

0x3030,	// (0x0001630a) popup_note_image_window_g2

0x0001,

0xf829,	// (0x00022b03) popup_note_image_window_g_ParamLimits

0xf829,	// (0x00022b03) popup_note_image_window_g

0x3049,	// (0x00016323) popup_note_image_window_t1_ParamLimits

0x3049,	// (0x00016323) popup_note_image_window_t1

0x3062,	// (0x0001633c) popup_note_image_window_t2_ParamLimits

0x3062,	// (0x0001633c) popup_note_image_window_t2

0x307b,	// (0x00016355) popup_note_image_window_t3_ParamLimits

0x307b,	// (0x00016355) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x00022b08) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x00022b08) popup_note_image_window_t

0x2ee4,	// (0x000161be) bg_popup_window_pane_cp7_ParamLimits

0x2ee4,	// (0x000161be) bg_popup_window_pane_cp7

0x2f14,	// (0x000161ee) popup_note_wait_window_g1_ParamLimits

0x2f14,	// (0x000161ee) popup_note_wait_window_g1

0x2f20,	// (0x000161fa) popup_note_wait_window_g2_ParamLimits

0x2f20,	// (0x000161fa) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x00022af1) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x00022af1) popup_note_wait_window_g

0x2f38,	// (0x00016212) popup_note_wait_window_t1_ParamLimits

0x2f38,	// (0x00016212) popup_note_wait_window_t1

0x2f5f,	// (0x00016239) popup_note_wait_window_t2_ParamLimits

0x2f5f,	// (0x00016239) popup_note_wait_window_t2

0x2f7d,	// (0x00016257) popup_note_wait_window_t3_ParamLimits

0x2f7d,	// (0x00016257) popup_note_wait_window_t3

0x2f90,	// (0x0001626a) popup_note_wait_window_t4_ParamLimits

0x2f90,	// (0x0001626a) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x00022af8) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x00022af8) popup_note_wait_window_t

0x2fb5,	// (0x0001628f) wait_bar_pane_ParamLimits

0x2fb5,	// (0x0001628f) wait_bar_pane

0xc6e5,	// (0x0001f9bf) wait_anim_pane

0xc6e5,	// (0x0001f9bf) wait_border_pane

0xc6db,	// (0x0001f9b5) wait_anim_pane_g1

0xc6db,	// (0x0001f9b5) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x000229b1) wait_anim_pane_g

0x2e88,	// (0x00016162) wait_border_pane_g1

0x2e93,	// (0x0001616d) wait_border_pane_g2

0x2e9c,	// (0x00016176) wait_border_pane_g3

0x0002,

0xf810,	// (0x00022aea) wait_border_pane_g

0x2cf2,	// (0x00015fcc) bg_popup_window_pane_cp16_ParamLimits

0x2cf2,	// (0x00015fcc) bg_popup_window_pane_cp16

0x2df2,	// (0x000160cc) indicator_popup_pane_cp4_ParamLimits

0x2df2,	// (0x000160cc) indicator_popup_pane_cp4

0x2e06,	// (0x000160e0) popup_query_data_window_t1_ParamLimits

0x2e06,	// (0x000160e0) popup_query_data_window_t1

0x2e18,	// (0x000160f2) popup_query_data_window_t2_ParamLimits

0x2e18,	// (0x000160f2) popup_query_data_window_t2

0x2e31,	// (0x0001610b) popup_query_data_window_t3_ParamLimits

0x2e31,	// (0x0001610b) popup_query_data_window_t3

0x0002,

0xf809,	// (0x00022ae3) popup_query_data_window_t_ParamLimits

0xf809,	// (0x00022ae3) popup_query_data_window_t

0x2e4b,	// (0x00016125) query_popup_data_pane_ParamLimits

0x2e4b,	// (0x00016125) query_popup_data_pane

0x2e5f,	// (0x00016139) query_popup_data_pane_cp1_ParamLimits

0x2e5f,	// (0x00016139) query_popup_data_pane_cp1

0x2cf2,	// (0x00015fcc) bg_popup_window_pane_cp10_ParamLimits

0x2cf2,	// (0x00015fcc) bg_popup_window_pane_cp10

0x2d24,	// (0x00015ffe) indicator_popup_pane_ParamLimits

0x2d24,	// (0x00015ffe) indicator_popup_pane

0x2d46,	// (0x00016020) popup_query_code_window_t1_ParamLimits

0x2d46,	// (0x00016020) popup_query_code_window_t1

0x2d60,	// (0x0001603a) popup_query_code_window_t2_ParamLimits

0x2d60,	// (0x0001603a) popup_query_code_window_t2

0x2da9,	// (0x00016083) popup_query_code_window_t3_ParamLimits

0x2da9,	// (0x00016083) popup_query_code_window_t3

0x0002,

0xf802,	// (0x00022adc) popup_query_code_window_t_ParamLimits

0xf802,	// (0x00022adc) popup_query_code_window_t

0x2dd8,	// (0x000160b2) query_popup_pane_ParamLimits

0x2dd8,	// (0x000160b2) query_popup_pane

0xdfa2,	// (0x0002127c) bg_popup_window_pane_cp15_ParamLimits

0xdfa2,	// (0x0002127c) bg_popup_window_pane_cp15

0xdfc2,	// (0x0002129c) indicator_popup_pane_cp1_ParamLimits

0xdfc2,	// (0x0002129c) indicator_popup_pane_cp1

0xdfd5,	// (0x000212af) indicator_popup_pane_cp2_ParamLimits

0xdfd5,	// (0x000212af) indicator_popup_pane_cp2

0xdff0,	// (0x000212ca) popup_query_data_code_window_g1_ParamLimits

0xdff0,	// (0x000212ca) popup_query_data_code_window_g1

0xe003,	// (0x000212dd) popup_query_data_code_window_t1_ParamLimits

0xe003,	// (0x000212dd) popup_query_data_code_window_t1

0xe015,	// (0x000212ef) popup_query_data_code_window_t2_ParamLimits

0xe015,	// (0x000212ef) popup_query_data_code_window_t2

0xe027,	// (0x00021301) popup_query_data_code_window_t3_ParamLimits

0xe027,	// (0x00021301) popup_query_data_code_window_t3

0xe03d,	// (0x00021317) popup_query_data_code_window_t4_ParamLimits

0xe03d,	// (0x00021317) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0002283d) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0002283d) popup_query_data_code_window_t

0xec7a,	// (0x00021f54) list_single_midp_graphic_pane_g3

0xe057,	// (0x00021331) query_popup_data_pane_cp2_ParamLimits

0xe06a,	// (0x00021344) query_popup_pane_cp2_ParamLimits

0xe06a,	// (0x00021344) query_popup_pane_cp2

0xc6e5,	// (0x0001f9bf) bg_popup_window_pane_cp11

0x2cd6,	// (0x00015fb0) heading_pane_cp5

0x2cde,	// (0x00015fb8) listscroll_popup_info_pane

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp3

0xe085,	// (0x0002135f) query_popup_pane_t1

0xe093,	// (0x0002136d) list_popup_info_pane_ParamLimits

0xe093,	// (0x0002136d) list_popup_info_pane

0xe0a2,	// (0x0002137c) listscroll_popup_info_pane_g1

0xe0aa,	// (0x00021384) scroll_pane_cp7

0xe0b4,	// (0x0002138e) popup_info_list_pane_t1_ParamLimits

0xe0b4,	// (0x0002138e) popup_info_list_pane_t1

0xe0ce,	// (0x000213a8) popup_info_list_pane_t2_ParamLimits

0xe0ce,	// (0x000213a8) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00022846) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00022846) popup_info_list_pane_t

0xc6e5,	// (0x0001f9bf) bg_popup_window_pane_cp12

0x4170,	// (0x0001744a) find_popup_pane

0xc741,	// (0x0001fa1b) bg_popup_window_pane_cp3

0xe0e8,	// (0x000213c2) heading_pane_cp3

0xe0f7,	// (0x000213d1) listscroll_popup_graphic_pane

0xc6e5,	// (0x0001f9bf) bg_popup_window_pane_cp4

0xab25,	// (0x0001ddff) heading_pane_cp4

0xe107,	// (0x000213e1) listscroll_popup_colour_pane

0xab2f,	// (0x0001de09) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xab2f,	// (0x0001de09) cell_large_graphic_colour_none_popup_pane

0xab43,	// (0x0001de1d) grid_large_graphic_colour_popup_pane_ParamLimits

0xab43,	// (0x0001de1d) grid_large_graphic_colour_popup_pane

0xab6b,	// (0x0001de45) listscroll_popup_colour_pane_g1_ParamLimits

0xab6b,	// (0x0001de45) listscroll_popup_colour_pane_g1

0xab82,	// (0x0001de5c) listscroll_popup_colour_pane_g2_ParamLimits

0xab82,	// (0x0001de5c) listscroll_popup_colour_pane_g2

0xab99,	// (0x0001de73) listscroll_popup_colour_pane_g3_ParamLimits

0xab99,	// (0x0001de73) listscroll_popup_colour_pane_g3

0xaba9,	// (0x0001de83) listscroll_popup_colour_pane_g4_ParamLimits

0xaba9,	// (0x0001de83) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0002284b) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0002284b) listscroll_popup_colour_pane_g

0xe10f,	// (0x000213e9) scroll_pane_cp6_ParamLimits

0xe10f,	// (0x000213e9) scroll_pane_cp6

0xabb9,	// (0x0001de93) cell_large_graphic_colour_popup_pane_ParamLimits

0xabb9,	// (0x0001de93) cell_large_graphic_colour_popup_pane

0xe121,	// (0x000213fb) cell_large_graphic_colour_none_popup_pane_t1

0xc6e5,	// (0x0001f9bf) grid_highlight_pane_cp5

0xe130,	// (0x0002140a) cell_large_graphic_colour_popup_pane_g1

0xe138,	// (0x00021412) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00022854) cell_large_graphic_colour_popup_pane_g

0xe140,	// (0x0002141a) cell_large_graphic_colour_popup_pane_g2_copy1

0xe149,	// (0x00021423) grid_highlight_pane_cp4

0xe151,	// (0x0002142b) bg_popup_window_pane_cp8_ParamLimits

0xe151,	// (0x0002142b) bg_popup_window_pane_cp8

0xe16c,	// (0x00021446) popup_snote_single_text_window_g1_ParamLimits

0xe16c,	// (0x00021446) popup_snote_single_text_window_g1

0xe17e,	// (0x00021458) popup_snote_single_text_window_t1_ParamLimits

0xe17e,	// (0x00021458) popup_snote_single_text_window_t1

0xe191,	// (0x0002146b) popup_snote_single_text_window_t2_ParamLimits

0xe191,	// (0x0002146b) popup_snote_single_text_window_t2

0xe1a4,	// (0x0002147e) popup_snote_single_text_window_t3_ParamLimits

0xe1a4,	// (0x0002147e) popup_snote_single_text_window_t3

0xe1dd,	// (0x000214b7) popup_snote_single_text_window_t4_ParamLimits

0xe1dd,	// (0x000214b7) popup_snote_single_text_window_t4

0xe211,	// (0x000214eb) popup_snote_single_text_window_t5_ParamLimits

0xe211,	// (0x000214eb) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00022859) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00022859) popup_snote_single_text_window_t

0xe240,	// (0x0002151a) bg_popup_window_pane_cp9_ParamLimits

0xe240,	// (0x0002151a) bg_popup_window_pane_cp9

0xe16c,	// (0x00021446) popup_snote_single_graphic_window_g1_ParamLimits

0xe16c,	// (0x00021446) popup_snote_single_graphic_window_g1

0xe24e,	// (0x00021528) popup_snote_single_graphic_window_g2_ParamLimits

0xe24e,	// (0x00021528) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00022864) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00022864) popup_snote_single_graphic_window_g

0xe25a,	// (0x00021534) popup_snote_single_graphic_window_t1_ParamLimits

0xe25a,	// (0x00021534) popup_snote_single_graphic_window_t1

0xe26d,	// (0x00021547) popup_snote_single_graphic_window_t2_ParamLimits

0xe26d,	// (0x00021547) popup_snote_single_graphic_window_t2

0xe280,	// (0x0002155a) popup_snote_single_graphic_window_t3_ParamLimits

0xe280,	// (0x0002155a) popup_snote_single_graphic_window_t3

0xe2b9,	// (0x00021593) popup_snote_single_graphic_window_t4_ParamLimits

0xe2b9,	// (0x00021593) popup_snote_single_graphic_window_t4

0xe2ed,	// (0x000215c7) popup_snote_single_graphic_window_t5_ParamLimits

0xe2ed,	// (0x000215c7) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00022869) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00022869) popup_snote_single_graphic_window_t

0x40ae,	// (0x00017388) grid_graphic_popup_pane_ParamLimits

0x40ae,	// (0x00017388) grid_graphic_popup_pane

0x40dc,	// (0x000173b6) listscroll_popup_graphic_pane_g1_ParamLimits

0x40dc,	// (0x000173b6) listscroll_popup_graphic_pane_g1

0xbee9,	// (0x0001f1c3) listscroll_popup_graphic_pane_g2_ParamLimits

0xbee9,	// (0x0001f1c3) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x00022c59) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x00022c59) listscroll_popup_graphic_pane_g

0x4104,	// (0x000173de) scroll_pane_cp5

0xbe9d,	// (0x0001f177) cell_graphic_popup_pane_ParamLimits

0xbe9d,	// (0x0001f177) cell_graphic_popup_pane

0x401e,	// (0x000172f8) cell_graphic_popup_pane_g1

0x4026,	// (0x00017300) cell_graphic_popup_pane_g2

0xe140,	// (0x0002141a) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x00022c52) cell_graphic_popup_pane_g

0x402f,	// (0x00017309) cell_graphic_popup_pane_t2

0xe149,	// (0x00021423) grid_highlight_pane_cp3

0xe32e,	// (0x00021608) list_gen_pane_ParamLimits

0xe32e,	// (0x00021608) list_gen_pane

0xe356,	// (0x00021630) scroll_pane

0xbe54,	// (0x0001f12e) bg_list_pane_g1_ParamLimits

0xbe54,	// (0x0001f12e) bg_list_pane_g1

0x3f93,	// (0x0001726d) bg_list_pane_g2_ParamLimits

0x3f93,	// (0x0001726d) bg_list_pane_g2

0x3fa8,	// (0x00017282) bg_list_pane_g3_ParamLimits

0x3fa8,	// (0x00017282) bg_list_pane_g3

0x3fbc,	// (0x00017296) bg_list_pane_g4_ParamLimits

0x3fbc,	// (0x00017296) bg_list_pane_g4

0xbe71,	// (0x0001f14b) bg_list_pane_g5_ParamLimits

0xbe71,	// (0x0001f14b) bg_list_pane_g5

0x0004,

0xf96d,	// (0x00022c47) bg_list_pane_g_ParamLimits

0xf96d,	// (0x00022c47) bg_list_pane_g

0xbdee,	// (0x0001f0c8) list_double2_graphic_large_graphic_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double2_graphic_large_graphic_pane

0xbdee,	// (0x0001f0c8) list_double2_graphic_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double2_graphic_pane

0xbdee,	// (0x0001f0c8) list_double2_large_graphic_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double2_large_graphic_pane

0xbdee,	// (0x0001f0c8) list_double2_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double2_pane

0xbdee,	// (0x0001f0c8) list_double_graphic_heading_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_graphic_heading_pane

0xbdee,	// (0x0001f0c8) list_double_graphic_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_graphic_pane

0xbdee,	// (0x0001f0c8) list_double_heading_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_heading_pane

0xbdee,	// (0x0001f0c8) list_double_large_graphic_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_large_graphic_pane

0xbdee,	// (0x0001f0c8) list_double_number_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_number_pane

0xbdee,	// (0x0001f0c8) list_double_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_pane

0xbdee,	// (0x0001f0c8) list_double_time_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_double_time_pane

0xbdee,	// (0x0001f0c8) list_setting_number_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_setting_number_pane

0xbdee,	// (0x0001f0c8) list_setting_pane_ParamLimits

0xbdee,	// (0x0001f0c8) list_setting_pane

0xbe02,	// (0x0001f0dc) list_single_2graphic_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_2graphic_pane

0xbe02,	// (0x0001f0dc) list_single_graphic_heading_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_graphic_heading_pane

0xbe02,	// (0x0001f0dc) list_single_graphic_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_graphic_pane

0xbe02,	// (0x0001f0dc) list_single_heading_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_heading_pane

0xbe02,	// (0x0001f0dc) list_single_large_graphic_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_large_graphic_pane

0xbe02,	// (0x0001f0dc) list_single_number_heading_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_number_heading_pane

0xbe02,	// (0x0001f0dc) list_single_number_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_number_pane

0xbe02,	// (0x0001f0dc) list_single_pane_ParamLimits

0xbe02,	// (0x0001f0dc) list_single_pane

0xc6e5,	// (0x0001f9bf) list_highlight_pane_cp1

0x2733,	// (0x00015a0d) list_single_pane_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_pane_g1

0x273f,	// (0x00015a19) list_single_pane_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_pane_g

0x47b5,	// (0x00017a8f) list_single_pane_t1_ParamLimits

0x47b5,	// (0x00017a8f) list_single_pane_t1

0x2733,	// (0x00015a0d) list_single_number_pane_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_number_pane_g1

0x273f,	// (0x00015a19) list_single_number_pane_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_number_pane_g

0x274b,	// (0x00015a25) list_single_number_pane_t1_ParamLimits

0x274b,	// (0x00015a25) list_single_number_pane_t1

0x48a9,	// (0x00017b83) list_single_number_pane_t2_ParamLimits

0x48a9,	// (0x00017b83) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x00022c08) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x00022c08) list_single_number_pane_t

0xabe4,	// (0x0001debe) list_single_graphic_pane_g1_ParamLimits

0xabe4,	// (0x0001debe) list_single_graphic_pane_g1

0x2733,	// (0x00015a0d) list_single_graphic_pane_g2_ParamLimits

0x2733,	// (0x00015a0d) list_single_graphic_pane_g2

0x273f,	// (0x00015a19) list_single_graphic_pane_g3_ParamLimits

0x273f,	// (0x00015a19) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00022874) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00022874) list_single_graphic_pane_g

0xabf0,	// (0x0001deca) list_single_graphic_pane_t1_ParamLimits

0xabf0,	// (0x0001deca) list_single_graphic_pane_t1

0x2733,	// (0x00015a0d) list_single_heading_pane_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_heading_pane_g1

0x273f,	// (0x00015a19) list_single_heading_pane_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_heading_pane_g

0x4765,	// (0x00017a3f) list_single_heading_pane_t1_ParamLimits

0x4765,	// (0x00017a3f) list_single_heading_pane_t1

0xac06,	// (0x0001dee0) list_single_heading_pane_t2_ParamLimits

0xac06,	// (0x0001dee0) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00022880) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00022880) list_single_heading_pane_t

0x2733,	// (0x00015a0d) list_single_number_heading_pane_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_number_heading_pane_g1

0x273f,	// (0x00015a19) list_single_number_heading_pane_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_number_heading_pane_g

0x4765,	// (0x00017a3f) list_single_number_heading_pane_t1_ParamLimits

0x4765,	// (0x00017a3f) list_single_number_heading_pane_t1

0xac18,	// (0x0001def2) list_single_number_heading_pane_t2_ParamLimits

0xac18,	// (0x0001def2) list_single_number_heading_pane_t2

0xac2a,	// (0x0001df04) list_single_number_heading_pane_t3_ParamLimits

0xac2a,	// (0x0001df04) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00022885) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00022885) list_single_number_heading_pane_t

0x2727,	// (0x00015a01) list_single_graphic_heading_pane_g1_ParamLimits

0x2727,	// (0x00015a01) list_single_graphic_heading_pane_g1

0xac3c,	// (0x0001df16) list_single_graphic_heading_pane_g4_ParamLimits

0xac3c,	// (0x0001df16) list_single_graphic_heading_pane_g4

0x273f,	// (0x00015a19) list_single_graphic_heading_pane_g5_ParamLimits

0x273f,	// (0x00015a19) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0002288c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0002288c) list_single_graphic_heading_pane_g

0x4765,	// (0x00017a3f) list_single_graphic_heading_pane_t1_ParamLimits

0x4765,	// (0x00017a3f) list_single_graphic_heading_pane_t1

0xac4d,	// (0x0001df27) list_single_graphic_heading_pane_t2_ParamLimits

0xac4d,	// (0x0001df27) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00022893) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00022893) list_single_graphic_heading_pane_t

0x47cb,	// (0x00017aa5) list_single_large_graphic_pane_g1_ParamLimits

0x47cb,	// (0x00017aa5) list_single_large_graphic_pane_g1

0x2733,	// (0x00015a0d) list_single_large_graphic_pane_g2_ParamLimits

0x2733,	// (0x00015a0d) list_single_large_graphic_pane_g2

0x273f,	// (0x00015a19) list_single_large_graphic_pane_g3_ParamLimits

0x273f,	// (0x00015a19) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00022898) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00022898) list_single_large_graphic_pane_g

0x2e93,	// (0x0001616d) wait_border_pane_g2_copy1

0xac5f,	// (0x0001df39) list_single_large_graphic_pane_g4_cp2

0x47d7,	// (0x00017ab1) list_single_large_graphic_pane_t1_ParamLimits

0x47d7,	// (0x00017ab1) list_single_large_graphic_pane_t1

0xac67,	// (0x0001df41) list_double_pane_g1_ParamLimits

0xac67,	// (0x0001df41) list_double_pane_g1

0xac73,	// (0x0001df4d) list_double_pane_g2_ParamLimits

0xac73,	// (0x0001df4d) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0002289f) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0002289f) list_double_pane_g

0xac7f,	// (0x0001df59) list_double_pane_t1_ParamLimits

0xac7f,	// (0x0001df59) list_double_pane_t1

0xac95,	// (0x0001df6f) list_double_pane_t2_ParamLimits

0xac95,	// (0x0001df6f) list_double_pane_t2

0x0001,

0xf5ca,	// (0x000228a4) list_double_pane_t_ParamLimits

0xf5ca,	// (0x000228a4) list_double_pane_t

0xaca7,	// (0x0001df81) list_double2_pane_g1_ParamLimits

0xaca7,	// (0x0001df81) list_double2_pane_g1

0xacb8,	// (0x0001df92) list_double2_pane_g2_ParamLimits

0xacb8,	// (0x0001df92) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x000228a9) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x000228a9) list_double2_pane_g

0xacc4,	// (0x0001df9e) list_double2_pane_t1_ParamLimits

0xacc4,	// (0x0001df9e) list_double2_pane_t1

0xacda,	// (0x0001dfb4) list_double2_pane_t2_ParamLimits

0xacda,	// (0x0001dfb4) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x000228ae) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x000228ae) list_double2_pane_t

0xac67,	// (0x0001df41) list_double_number_pane_g1_ParamLimits

0xac67,	// (0x0001df41) list_double_number_pane_g1

0xac73,	// (0x0001df4d) list_double_number_pane_g2_ParamLimits

0xac73,	// (0x0001df4d) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0002289f) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0002289f) list_double_number_pane_g

0xacec,	// (0x0001dfc6) list_double_number_pane_t1_ParamLimits

0xacec,	// (0x0001dfc6) list_double_number_pane_t1

0xacfe,	// (0x0001dfd8) list_double_number_pane_t2_ParamLimits

0xacfe,	// (0x0001dfd8) list_double_number_pane_t2

0xad14,	// (0x0001dfee) list_double_number_pane_t3_ParamLimits

0xad14,	// (0x0001dfee) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x000228b3) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x000228b3) list_double_number_pane_t

0xad26,	// (0x0001e000) list_double_graphic_pane_g1_ParamLimits

0xad26,	// (0x0001e000) list_double_graphic_pane_g1

0xad32,	// (0x0001e00c) list_double_graphic_pane_g2_ParamLimits

0xad32,	// (0x0001e00c) list_double_graphic_pane_g2

0x4506,	// (0x000177e0) list_double_graphic_pane_g3_ParamLimits

0x4506,	// (0x000177e0) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x000228ba) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x000228ba) list_double_graphic_pane_g

0xad4d,	// (0x0001e027) list_double_graphic_pane_t1_ParamLimits

0xad4d,	// (0x0001e027) list_double_graphic_pane_t1

0xad63,	// (0x0001e03d) list_double_graphic_pane_t2_ParamLimits

0xad63,	// (0x0001e03d) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x000228c3) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x000228c3) list_double_graphic_pane_t

0xe38a,	// (0x00021664) list_double2_graphic_pane_g1_ParamLimits

0xe38a,	// (0x00021664) list_double2_graphic_pane_g1

0xad75,	// (0x0001e04f) list_double2_graphic_pane_g2_ParamLimits

0xad75,	// (0x0001e04f) list_double2_graphic_pane_g2

0xacb8,	// (0x0001df92) list_double2_graphic_pane_g3_ParamLimits

0xacb8,	// (0x0001df92) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x000228c8) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x000228c8) list_double2_graphic_pane_g

0xad81,	// (0x0001e05b) list_double2_graphic_pane_t1_ParamLimits

0xad81,	// (0x0001e05b) list_double2_graphic_pane_t1

0xad97,	// (0x0001e071) list_double2_graphic_pane_t2_ParamLimits

0xad97,	// (0x0001e071) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x000228cf) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x000228cf) list_double2_graphic_pane_t

0xada9,	// (0x0001e083) list_double_large_graphic_pane_g1_ParamLimits

0xada9,	// (0x0001e083) list_double_large_graphic_pane_g1

0xadc8,	// (0x0001e0a2) list_double_large_graphic_pane_g2_ParamLimits

0xadc8,	// (0x0001e0a2) list_double_large_graphic_pane_g2

0xac73,	// (0x0001df4d) list_double_large_graphic_pane_g3_ParamLimits

0xac73,	// (0x0001df4d) list_double_large_graphic_pane_g3

0xadd9,	// (0x0001e0b3) list_double_large_graphic_pane_g4_ParamLimits

0xadd9,	// (0x0001e0b3) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x000228d4) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x000228d4) list_double_large_graphic_pane_g

0xadec,	// (0x0001e0c6) list_double_large_graphic_pane_t1_ParamLimits

0xadec,	// (0x0001e0c6) list_double_large_graphic_pane_t1

0xae05,	// (0x0001e0df) list_double_large_graphic_pane_t2_ParamLimits

0xae05,	// (0x0001e0df) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x000228df) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x000228df) list_double_large_graphic_pane_t

0xae17,	// (0x0001e0f1) list_double2_large_graphic_pane_g1_ParamLimits

0xae17,	// (0x0001e0f1) list_double2_large_graphic_pane_g1

0xaca7,	// (0x0001df81) list_double2_large_graphic_pane_g2_ParamLimits

0xaca7,	// (0x0001df81) list_double2_large_graphic_pane_g2

0xacb8,	// (0x0001df92) list_double2_large_graphic_pane_g3_ParamLimits

0xacb8,	// (0x0001df92) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x000228e4) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x000228e4) list_double2_large_graphic_pane_g

0xae23,	// (0x0001e0fd) list_double2_large_graphic_pane_t1_ParamLimits

0xae23,	// (0x0001e0fd) list_double2_large_graphic_pane_t1

0xae39,	// (0x0001e113) list_double2_large_graphic_pane_t2_ParamLimits

0xae39,	// (0x0001e113) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x000228eb) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x000228eb) list_double2_large_graphic_pane_t

0xae4b,	// (0x0001e125) list_double_heading_pane_g1_ParamLimits

0xae4b,	// (0x0001e125) list_double_heading_pane_g1

0xae5c,	// (0x0001e136) list_double_heading_pane_g2_ParamLimits

0xae5c,	// (0x0001e136) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x000228f0) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x000228f0) list_double_heading_pane_g

0xae68,	// (0x0001e142) list_double_heading_pane_t1_ParamLimits

0xae68,	// (0x0001e142) list_double_heading_pane_t1

0xae7e,	// (0x0001e158) list_double_heading_pane_t2_ParamLimits

0xae7e,	// (0x0001e158) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x000228f5) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x000228f5) list_double_heading_pane_t

0xae90,	// (0x0001e16a) list_double_graphic_heading_pane_g1_ParamLimits

0xae90,	// (0x0001e16a) list_double_graphic_heading_pane_g1

0xae4b,	// (0x0001e125) list_double_graphic_heading_pane_g2_ParamLimits

0xae4b,	// (0x0001e125) list_double_graphic_heading_pane_g2

0xae5c,	// (0x0001e136) list_double_graphic_heading_pane_g3_ParamLimits

0xae5c,	// (0x0001e136) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x000228fa) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x000228fa) list_double_graphic_heading_pane_g

0xae9c,	// (0x0001e176) list_double_graphic_heading_pane_t1_ParamLimits

0xae9c,	// (0x0001e176) list_double_graphic_heading_pane_t1

0xaeb2,	// (0x0001e18c) list_double_graphic_heading_pane_t2_ParamLimits

0xaeb2,	// (0x0001e18c) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x00022901) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x00022901) list_double_graphic_heading_pane_t

0xadc8,	// (0x0001e0a2) list_double_time_pane_g1_ParamLimits

0xadc8,	// (0x0001e0a2) list_double_time_pane_g1

0xac73,	// (0x0001df4d) list_double_time_pane_g2_ParamLimits

0xac73,	// (0x0001df4d) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00022906) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00022906) list_double_time_pane_g

0xaec4,	// (0x0001e19e) list_double_time_pane_t1_ParamLimits

0xaec4,	// (0x0001e19e) list_double_time_pane_t1

0xaeda,	// (0x0001e1b4) list_double_time_pane_t2_ParamLimits

0xaeda,	// (0x0001e1b4) list_double_time_pane_t2

0xaeec,	// (0x0001e1c6) list_double_time_pane_t3_ParamLimits

0xaeec,	// (0x0001e1c6) list_double_time_pane_t3

0xaefe,	// (0x0001e1d8) list_double_time_pane_t4_ParamLimits

0xaefe,	// (0x0001e1d8) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0002290b) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0002290b) list_double_time_pane_t

0xad75,	// (0x0001e04f) list_setting_pane_g1_ParamLimits

0xad75,	// (0x0001e04f) list_setting_pane_g1

0xacb8,	// (0x0001df92) list_setting_pane_g2_ParamLimits

0xacb8,	// (0x0001df92) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00022914) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00022914) list_setting_pane_g

0xaf10,	// (0x0001e1ea) list_setting_pane_t1_ParamLimits

0xaf10,	// (0x0001e1ea) list_setting_pane_t1

0xaf27,	// (0x0001e201) list_setting_pane_t2_ParamLimits

0xaf27,	// (0x0001e201) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00022919) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00022919) list_setting_pane_t

0xaf66,	// (0x0001e240) set_value_pane_cp_ParamLimits

0xaf66,	// (0x0001e240) set_value_pane_cp

0xad75,	// (0x0001e04f) list_setting_number_pane_g1_ParamLimits

0xad75,	// (0x0001e04f) list_setting_number_pane_g1

0xacb8,	// (0x0001df92) list_setting_number_pane_g2_ParamLimits

0xacb8,	// (0x0001df92) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x00022914) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x00022914) list_setting_number_pane_g

0xaf74,	// (0x0001e24e) list_setting_number_pane_t1_ParamLimits

0xaf74,	// (0x0001e24e) list_setting_number_pane_t1

0xaf88,	// (0x0001e262) list_setting_number_pane_t2_ParamLimits

0xaf88,	// (0x0001e262) list_setting_number_pane_t2

0xaf9f,	// (0x0001e279) list_setting_number_pane_t3_ParamLimits

0xaf9f,	// (0x0001e279) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x00022920) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x00022920) list_setting_number_pane_t

0xaf66,	// (0x0001e240) set_value_pane_ParamLimits

0xaf66,	// (0x0001e240) set_value_pane

0xe3ab,	// (0x00021685) bg_set_opt_pane_ParamLimits

0xe3ab,	// (0x00021685) bg_set_opt_pane

0xe3cc,	// (0x000216a6) set_value_pane_t1

0xe3da,	// (0x000216b4) slider_set_pane_cp3

0xe3e3,	// (0x000216bd) volume_small_pane_cp

0xe3ec,	// (0x000216c6) list_form_gen_pane

0xe3f5,	// (0x000216cf) scroll_pane_cp8

0xafe2,	// (0x0001e2bc) form_field_data_pane_ParamLimits

0xafe2,	// (0x0001e2bc) form_field_data_pane

0xaffd,	// (0x0001e2d7) form_field_data_wide_pane_ParamLimits

0xaffd,	// (0x0001e2d7) form_field_data_wide_pane

0xe416,	// (0x000216f0) form_field_popup_pane_ParamLimits

0xe416,	// (0x000216f0) form_field_popup_pane

0xb021,	// (0x0001e2fb) form_field_popup_wide_pane_ParamLimits

0xb021,	// (0x0001e2fb) form_field_popup_wide_pane

0xe438,	// (0x00021712) form_field_slider_pane_ParamLimits

0xe438,	// (0x00021712) form_field_slider_pane

0xe44b,	// (0x00021725) form_field_slider_wide_pane_ParamLimits

0xe44b,	// (0x00021725) form_field_slider_wide_pane

0xe45e,	// (0x00021738) data_form_pane

0xb04c,	// (0x0001e326) form_field_data_pane_t1

0xe46a,	// (0x00021744) input_focus_pane

0xe478,	// (0x00021752) data_form_wide_pane

0xe4b0,	// (0x0002178a) form_field_data_wide_pane_t1

0xe15e,	// (0x00021438) input_focus_pane_cp6

0xb066,	// (0x0001e340) form_field_popup_pane_t1

0xe46a,	// (0x00021744) input_focus_pane_cp7

0xe4cf,	// (0x000217a9) list_form_pane

0xe4e3,	// (0x000217bd) form_field_popup_wide_pane_t1

0xe46a,	// (0x00021744) input_focus_pane_cp8

0xe4f5,	// (0x000217cf) list_form_wide_pane

0xb088,	// (0x0001e362) form_field_slider_pane_t1_ParamLimits

0xb088,	// (0x0001e362) form_field_slider_pane_t1

0xb0a0,	// (0x0001e37a) form_field_slider_pane_t2_ParamLimits

0xb0a0,	// (0x0001e37a) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x00022930) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x00022930) form_field_slider_pane_t

0xc733,	// (0x0001fa0d) input_focus_pane_cp9_ParamLimits

0xc733,	// (0x0001fa0d) input_focus_pane_cp9

0xb0b5,	// (0x0001e38f) slider_cont_pane_ParamLimits

0xb0b5,	// (0x0001e38f) slider_cont_pane

0xe501,	// (0x000217db) form_field_slider_wide_pane_t1_ParamLimits

0xe501,	// (0x000217db) form_field_slider_wide_pane_t1

0xe513,	// (0x000217ed) form_field_slider_wide_pane_t2_ParamLimits

0xe513,	// (0x000217ed) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x00022935) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x00022935) form_field_slider_wide_pane_t

0xc733,	// (0x0001fa0d) input_focus_pane_cp10_ParamLimits

0xc733,	// (0x0001fa0d) input_focus_pane_cp10

0xb0c9,	// (0x0001e3a3) slider_cont_pane_cp1_ParamLimits

0xb0c9,	// (0x0001e3a3) slider_cont_pane_cp1

0xb0dd,	// (0x0001e3b7) slider_form_pane_cp

0xe525,	// (0x000217ff) input_focus_pane_g1

0xe52d,	// (0x00021807) input_focus_pane_g2

0xe535,	// (0x0002180f) input_focus_pane_g3

0xe53d,	// (0x00021817) input_focus_pane_g4

0xe545,	// (0x0002181f) input_focus_pane_g5

0xe54d,	// (0x00021827) input_focus_pane_g6

0xe555,	// (0x0002182f) input_focus_pane_g7

0xe55d,	// (0x00021837) input_focus_pane_g8

0xe565,	// (0x0002183f) input_focus_pane_g9

0xc6db,	// (0x0001f9b5) input_focus_pane_g10

0x0009,

0xf660,	// (0x0002293a) input_focus_pane_g

0x2e9c,	// (0x00016176) wait_border_pane_g3_copy1

0xb0e5,	// (0x0001e3bf) data_form_pane_t1

0xc6db,	// (0x0001f9b5) wait_anim_pane_g1_copy1

0xbdc3,	// (0x0001f09d) data_form_wide_pane_t1

0x11f5,	// (0x000144cf) list_form_graphic_pane_cp_ParamLimits

0x11f5,	// (0x000144cf) list_form_graphic_pane_cp

0x3e0b,	// (0x000170e5) slider_form_pane_g1

0x3e14,	// (0x000170ee) slider_form_pane_g2

0x0006,

0xf95e,	// (0x00022c38) slider_form_pane_g

0x11f5,	// (0x000144cf) list_form_graphic_pane_ParamLimits

0x11f5,	// (0x000144cf) list_form_graphic_pane

0x1207,	// (0x000144e1) list_form_graphic_pane_g1

0x120f,	// (0x000144e9) list_form_graphic_pane_t1_ParamLimits

0x120f,	// (0x000144e9) list_form_graphic_pane_t1

0xc741,	// (0x0001fa1b) list_highlight_pane_cp5_ParamLimits

0xc741,	// (0x0001fa1b) list_highlight_pane_cp5

0xb101,	// (0x0001e3db) find_pane_g1

0x122d,	// (0x00014507) input_find_pane

0xb10a,	// (0x0001e3e4) input_find_pane_g1_ParamLimits

0xb10a,	// (0x0001e3e4) input_find_pane_g1

0xb116,	// (0x0001e3f0) input_find_pane_t1_ParamLimits

0xb116,	// (0x0001e3f0) input_find_pane_t1

0xb12b,	// (0x0001e405) input_find_pane_t2_ParamLimits

0xb12b,	// (0x0001e405) input_find_pane_t2

0x0001,

0xf675,	// (0x0002294f) input_find_pane_t_ParamLimits

0xf675,	// (0x0002294f) input_find_pane_t

0x126c,	// (0x00014546) input_focus_pane_cp5_ParamLimits

0x126c,	// (0x00014546) input_focus_pane_cp5

0x128b,	// (0x00014565) bg_popup_window_pane_cp2_ParamLimits

0x128b,	// (0x00014565) bg_popup_window_pane_cp2

0x1298,	// (0x00014572) listscroll_menu_pane_ParamLimits

0x1298,	// (0x00014572) listscroll_menu_pane

0xb14c,	// (0x0001e426) popup_submenu_window_ParamLimits

0xb14c,	// (0x0001e426) popup_submenu_window

0x12d4,	// (0x000145ae) find_popup_pane_g1

0x12dc,	// (0x000145b6) input_popup_find_pane_cp

0x12e6,	// (0x000145c0) input_focus_pane_cp4_ParamLimits

0x12e6,	// (0x000145c0) input_focus_pane_cp4

0x1302,	// (0x000145dc) input_popup_find_pane_t1_ParamLimits

0x1302,	// (0x000145dc) input_popup_find_pane_t1

0xc6e5,	// (0x0001f9bf) bg_popup_sub_pane_cp

0x1330,	// (0x0001460a) listscroll_popup_sub_pane

0x1338,	// (0x00014612) list_submenu_pane_ParamLimits

0x1338,	// (0x00014612) list_submenu_pane

0x1349,	// (0x00014623) scroll_pane_cp4

0x1351,	// (0x0001462b) list_single_popup_submenu_pane_ParamLimits

0x1351,	// (0x0001462b) list_single_popup_submenu_pane

0x1366,	// (0x00014640) list_single_popup_submenu_pane_g1

0x136e,	// (0x00014648) list_single_popup_submenu_pane_t1_ParamLimits

0x136e,	// (0x00014648) list_single_popup_submenu_pane_t1

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp1_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp1

0xb18a,	// (0x0001e464) tabs_2_active_pane_g1

0xb192,	// (0x0001e46c) tabs_2_active_pane_t1

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp1_ParamLimits

0xc733,	// (0x0001fa0d) bg_passive_tab_pane_cp1

0xb18a,	// (0x0001e464) tabs_2_passive_pane_g1

0xb192,	// (0x0001e46c) tabs_2_passive_pane_t1

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp4

0xb1a4,	// (0x0001e47e) tabs_2_long_active_pane_t1

0x224b,	// (0x00015525) bg_passive_tab_pane_cp4

0xec82,	// (0x00021f5c) list_single_midp_graphic_pane_g4_ParamLimits

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp5

0xb1b7,	// (0x0001e491) tabs_3_long_active_pane_t1

0x224b,	// (0x00015525) bg_passive_tab_pane_cp5

0xec82,	// (0x00021f5c) list_single_midp_graphic_pane_g4

0xc741,	// (0x0001fa1b) bg_popup_window_pane_cp13_ParamLimits

0xc741,	// (0x0001fa1b) bg_popup_window_pane_cp13

0x13e5,	// (0x000146bf) listscroll_popup_fast_pane_ParamLimits

0x13e5,	// (0x000146bf) listscroll_popup_fast_pane

0x13f4,	// (0x000146ce) grid_popup_fast_pane_ParamLimits

0x13f4,	// (0x000146ce) grid_popup_fast_pane

0x1406,	// (0x000146e0) scroll_pane_cp9_ParamLimits

0x1406,	// (0x000146e0) scroll_pane_cp9

0x5dad,	// (0x00019087) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5dad,	// (0x00019087) list_single_graphic_hl_pane_t1_cp2

0x142a,	// (0x00014704) input_focus_pane_cp20_ParamLimits

0x142a,	// (0x00014704) input_focus_pane_cp20

0x1438,	// (0x00014712) query_popup_data_pane_t1_ParamLimits

0x1438,	// (0x00014712) query_popup_data_pane_t1

0x144b,	// (0x00014725) query_popup_data_pane_t2_ParamLimits

0x144b,	// (0x00014725) query_popup_data_pane_t2

0x1491,	// (0x0001476b) query_popup_data_pane_t3_ParamLimits

0x1491,	// (0x0001476b) query_popup_data_pane_t3

0x14d2,	// (0x000147ac) query_popup_data_pane_t4_ParamLimits

0x14d2,	// (0x000147ac) query_popup_data_pane_t4

0x150e,	// (0x000147e8) query_popup_data_pane_t5_ParamLimits

0x150e,	// (0x000147e8) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x00022954) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x00022954) query_popup_data_pane_t

0xe525,	// (0x000217ff) bg_set_opt_pane_g1

0xe52d,	// (0x00021807) bg_set_opt_pane_g2

0xe535,	// (0x0002180f) bg_set_opt_pane_g3

0xe53d,	// (0x00021817) bg_set_opt_pane_g4

0xe545,	// (0x0002181f) bg_set_opt_pane_g5

0xe54d,	// (0x00021827) bg_set_opt_pane_g6

0xe555,	// (0x0002182f) bg_set_opt_pane_g7

0xe55d,	// (0x00021837) bg_set_opt_pane_g8

0xe565,	// (0x0002183f) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0002295f) bg_set_opt_pane_g

0xe81a,	// (0x00021af4) control_top_pane_stacon_ParamLimits

0xe81a,	// (0x00021af4) control_top_pane_stacon

0xe86d,	// (0x00021b47) signal_pane_stacon_ParamLimits

0xe86d,	// (0x00021b47) signal_pane_stacon

0x1ba1,	// (0x00014e7b) stacon_top_pane_g1_ParamLimits

0x1ba1,	// (0x00014e7b) stacon_top_pane_g1

0xe892,	// (0x00021b6c) title_pane_stacon_ParamLimits

0xe892,	// (0x00021b6c) title_pane_stacon

0xe8bc,	// (0x00021b96) uni_indicator_pane_stacon_ParamLimits

0xe8bc,	// (0x00021b96) uni_indicator_pane_stacon

0xe8d1,	// (0x00021bab) battery_pane_stacon_ParamLimits

0xe8d1,	// (0x00021bab) battery_pane_stacon

0xe915,	// (0x00021bef) control_bottom_pane_stacon_ParamLimits

0xe915,	// (0x00021bef) control_bottom_pane_stacon

0xe938,	// (0x00021c12) navi_pane_stacon_ParamLimits

0xe938,	// (0x00021c12) navi_pane_stacon

0x1bc3,	// (0x00014e9d) stacon_bottom_pane_g1_ParamLimits

0x1bc3,	// (0x00014e9d) stacon_bottom_pane_g1

0xe56d,	// (0x00021847) aid_levels_signal_lsc_ParamLimits

0xe56d,	// (0x00021847) aid_levels_signal_lsc

0xe584,	// (0x0002185e) signal_pane_stacon_g1_ParamLimits

0xe584,	// (0x0002185e) signal_pane_stacon_g1

0xe598,	// (0x00021872) signal_pane_stacon_g2_ParamLimits

0xe598,	// (0x00021872) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x00022972) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x00022972) signal_pane_stacon_g

0xe5cd,	// (0x000218a7) title_pane_stacon_t1_ParamLimits

0xe5cd,	// (0x000218a7) title_pane_stacon_t1

0x1552,	// (0x0001482c) uni_indicator_pane_stacon_g1

0x155c,	// (0x00014836) uni_indicator_pane_stacon_g2

0x1566,	// (0x00014840) uni_indicator_pane_stacon_g3

0x1570,	// (0x0001484a) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0002297e) uni_indicator_pane_stacon_g

0xe5f2,	// (0x000218cc) control_top_pane_stacon_g1

0xe5fa,	// (0x000218d4) control_top_pane_stacon_t1_ParamLimits

0xe5fa,	// (0x000218d4) control_top_pane_stacon_t1

0xe631,	// (0x0002190b) aid_levels_battery_lsc_ParamLimits

0xe631,	// (0x0002190b) aid_levels_battery_lsc

0xe649,	// (0x00021923) battery_pane_stacon_g1_ParamLimits

0xe649,	// (0x00021923) battery_pane_stacon_g1

0xe65b,	// (0x00021935) battery_pane_stacon_g2_ParamLimits

0xe65b,	// (0x00021935) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x00022987) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x00022987) battery_pane_stacon_g

0xe6a5,	// (0x0002197f) navi_icon_pane_stacon

0xe6b9,	// (0x00021993) navi_navi_pane_stacon

0xe6a5,	// (0x0002197f) navi_text_pane_stacon

0xe6cf,	// (0x000219a9) control_bottom_pane_stacon_g1

0xe6d7,	// (0x000219b1) control_bottom_pane_stacon_t1_ParamLimits

0xe6d7,	// (0x000219b1) control_bottom_pane_stacon_t1

0xb1c9,	// (0x0001e4a3) grid_app_pane_ParamLimits

0xb1c9,	// (0x0001e4a3) grid_app_pane

0xb201,	// (0x0001e4db) scroll_pane_cp15_ParamLimits

0xb201,	// (0x0001e4db) scroll_pane_cp15

0xb216,	// (0x0001e4f0) cell_app_pane_ParamLimits

0xb216,	// (0x0001e4f0) cell_app_pane

0xb261,	// (0x0001e53b) cell_app_pane_g1_ParamLimits

0xb261,	// (0x0001e53b) cell_app_pane_g1

0x1619,	// (0x000148f3) cell_app_pane_g2_ParamLimits

0x1619,	// (0x000148f3) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0002298c) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0002298c) cell_app_pane_g

0xb285,	// (0x0001e55f) cell_app_pane_t1_ParamLimits

0xb285,	// (0x0001e55f) cell_app_pane_t1

0x1656,	// (0x00014930) grid_highlight_pane_ParamLimits

0x1656,	// (0x00014930) grid_highlight_pane

0xe525,	// (0x000217ff) cell_highlight_pane_g1

0xe52d,	// (0x00021807) cell_highlight_pane_g2

0xe535,	// (0x0002180f) cell_highlight_pane_g3

0xe53d,	// (0x00021817) cell_highlight_pane_g4

0xe545,	// (0x0002181f) cell_highlight_pane_g5

0xe54d,	// (0x00021827) cell_highlight_pane_g6

0xe555,	// (0x0002182f) cell_highlight_pane_g7

0xe55d,	// (0x00021837) cell_highlight_pane_g8

0xe565,	// (0x0002183f) cell_highlight_pane_g9

0xc6db,	// (0x0001f9b5) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0002293a) cell_highlight_pane_g

0x1667,	// (0x00014941) bg_scroll_pane

0xe718,	// (0x000219f2) scroll_handle_pane

0x16ae,	// (0x00014988) scroll_bg_pane_g1

0x16c3,	// (0x0001499d) scroll_bg_pane_g2

0x16db,	// (0x000149b5) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x00022991) scroll_bg_pane_g

0x16f0,	// (0x000149ca) scroll_handle_focus_pane_ParamLimits

0x16f0,	// (0x000149ca) scroll_handle_focus_pane

0x16ae,	// (0x00014988) scroll_handle_pane_g1

0x16fd,	// (0x000149d7) scroll_handle_pane_g2

0x16db,	// (0x000149b5) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x00022998) scroll_handle_pane_g

0x12e6,	// (0x000145c0) bg_popup_sub_pane_cp21_ParamLimits

0x12e6,	// (0x000145c0) bg_popup_sub_pane_cp21

0x1711,	// (0x000149eb) popup_fep_japan_predictive_window_t1_ParamLimits

0x1711,	// (0x000149eb) popup_fep_japan_predictive_window_t1

0x1728,	// (0x00014a02) popup_fep_japan_predictive_window_t2_ParamLimits

0x1728,	// (0x00014a02) popup_fep_japan_predictive_window_t2

0x175b,	// (0x00014a35) popup_fep_japan_predictive_window_t3_ParamLimits

0x175b,	// (0x00014a35) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0002299f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0002299f) popup_fep_japan_predictive_window_t

0xc6e5,	// (0x0001f9bf) bg_popup_sub_pane_cp23

0x1792,	// (0x00014a6c) listscroll_japin_cand_pane

0x179a,	// (0x00014a74) popup_fep_japan_candidate_window_t1

0x17a8,	// (0x00014a82) candidate_pane_ParamLimits

0x17a8,	// (0x00014a82) candidate_pane

0x17ba,	// (0x00014a94) scroll_pane_cp30

0x17c4,	// (0x00014a9e) list_single_popup_jap_candidate_pane_ParamLimits

0x17c4,	// (0x00014a9e) list_single_popup_jap_candidate_pane

0xc6e5,	// (0x0001f9bf) list_highlight_pane_cp30

0x17d8,	// (0x00014ab2) list_single_popup_jap_candidate_pane_t1

0xb2b6,	// (0x0001e590) level_1_signal

0xb2c8,	// (0x0001e5a2) level_2_signal

0xb2db,	// (0x0001e5b5) level_3_signal

0xb2ee,	// (0x0001e5c8) level_4_signal

0xb301,	// (0x0001e5db) level_5_signal

0xb314,	// (0x0001e5ee) level_6_signal

0xb327,	// (0x0001e601) level_7_signal

0xb2b6,	// (0x0001e590) level_1_battery

0xb2c8,	// (0x0001e5a2) level_2_battery

0xb2db,	// (0x0001e5b5) level_3_battery

0xb2ee,	// (0x0001e5c8) level_4_battery

0xb301,	// (0x0001e5db) level_5_battery

0xb314,	// (0x0001e5ee) level_6_battery

0xb327,	// (0x0001e601) level_7_battery

0x185a,	// (0x00014b34) list_menu_pane_ParamLimits

0x185a,	// (0x00014b34) list_menu_pane

0x1870,	// (0x00014b4a) scroll_pane_cp25_ParamLimits

0x1870,	// (0x00014b4a) scroll_pane_cp25

0x1889,	// (0x00014b63) list_double2_graphic_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double2_graphic_pane_cp2

0x1889,	// (0x00014b63) list_double2_large_graphic_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double2_large_graphic_pane_cp2

0x1889,	// (0x00014b63) list_double2_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double2_pane_cp2

0x1889,	// (0x00014b63) list_double_graphic_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double_graphic_pane_cp2

0x1889,	// (0x00014b63) list_double_large_graphic_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double_large_graphic_pane_cp2

0x1889,	// (0x00014b63) list_double_number_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double_number_pane_cp2

0x1889,	// (0x00014b63) list_double_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double_pane_cp2

0xb33a,	// (0x0001e614) list_single_2graphic_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_2graphic_pane_cp2

0xb33a,	// (0x0001e614) list_single_graphic_heading_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_graphic_heading_pane_cp2

0xb33a,	// (0x0001e614) list_single_graphic_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_graphic_pane_cp2

0xb33a,	// (0x0001e614) list_single_heading_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_heading_pane_cp2

0x18cc,	// (0x00014ba6) list_single_large_graphic_pane_cp2_ParamLimits

0x18cc,	// (0x00014ba6) list_single_large_graphic_pane_cp2

0xb33a,	// (0x0001e614) list_single_number_heading_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_number_heading_pane_cp2

0xb33a,	// (0x0001e614) list_single_number_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_number_pane_cp2

0xb34e,	// (0x0001e628) list_single_pane_cp2_ParamLimits

0xb34e,	// (0x0001e628) list_single_pane_cp2

0x1957,	// (0x00014c31) bg_popup_sub_pane_cp22

0xe7ca,	// (0x00021aa4) popup_side_volume_key_window_g1

0xe7f4,	// (0x00021ace) popup_side_volume_key_window_t1

0xe812,	// (0x00021aec) volume_small_pane_cp1

0xc733,	// (0x0001fa0d) bg_popup_sub_pane_cp24_ParamLimits

0xc733,	// (0x0001fa0d) bg_popup_sub_pane_cp24

0x196d,	// (0x00014c47) fep_china_uni_candidate_pane_ParamLimits

0x196d,	// (0x00014c47) fep_china_uni_candidate_pane

0x1981,	// (0x00014c5b) fep_china_uni_entry_pane

0x1991,	// (0x00014c6b) popup_fep_china_uni_window_g1

0x19ad,	// (0x00014c87) fep_china_uni_entry_pane_g1

0x19b7,	// (0x00014c91) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x000229d0) fep_china_uni_entry_pane_g

0x19c1,	// (0x00014c9b) fep_entry_item_pane

0x19cb,	// (0x00014ca5) fep_candidate_item_pane

0x19d3,	// (0x00014cad) fep_china_uni_candidate_pane_g1

0x19dd,	// (0x00014cb7) fep_china_uni_candidate_pane_g2

0x19e5,	// (0x00014cbf) fep_china_uni_candidate_pane_g3

0x19ed,	// (0x00014cc7) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x000229d5) fep_china_uni_candidate_pane_g

0xc6db,	// (0x0001f9b5) fep_entry_item_pane_g1

0x19f7,	// (0x00014cd1) fep_entry_item_pane_t1_ParamLimits

0x19f7,	// (0x00014cd1) fep_entry_item_pane_t1

0x1a0d,	// (0x00014ce7) fep_candidate_item_pane_t1_ParamLimits

0x1a0d,	// (0x00014ce7) fep_candidate_item_pane_t1

0x1a22,	// (0x00014cfc) fep_candidate_item_pane_t2_ParamLimits

0x1a22,	// (0x00014cfc) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x000229de) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x000229de) fep_candidate_item_pane_t

0xc741,	// (0x0001fa1b) list_highlight_pane_cp31_ParamLimits

0xc741,	// (0x0001fa1b) list_highlight_pane_cp31

0x1a34,	// (0x00014d0e) level_1_signal_lsc

0x1a3d,	// (0x00014d17) level_2_signal_lsc

0x1a46,	// (0x00014d20) level_3_signal_lsc

0x1a4f,	// (0x00014d29) level_4_signal_lsc

0x1a58,	// (0x00014d32) level_5_signal_lsc

0x1a61,	// (0x00014d3b) level_6_signal_lsc

0x1a6a,	// (0x00014d44) level_7_signal_lsc

0x1a6a,	// (0x00014d44) level_1_battery_lsc

0x1a73,	// (0x00014d4d) level_2_battery_lsc

0x1a7c,	// (0x00014d56) level_3_battery_lsc

0x1a85,	// (0x00014d5f) level_4_battery_lsc

0x1a8e,	// (0x00014d68) level_5_battery_lsc

0x1a97,	// (0x00014d71) level_6_battery_lsc

0x1a34,	// (0x00014d0e) level_7_battery_lsc

0x1aa0,	// (0x00014d7a) scroll_handle_focus_pane_g1

0x1aa9,	// (0x00014d83) scroll_handle_focus_pane_g2

0x1ab2,	// (0x00014d8c) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x000229e3) scroll_handle_focus_pane_g

0xb3dd,	// (0x0001e6b7) list_single_2graphic_pane_g1_ParamLimits

0xb3dd,	// (0x0001e6b7) list_single_2graphic_pane_g1

0xac3c,	// (0x0001df16) list_single_2graphic_pane_g2_ParamLimits

0xac3c,	// (0x0001df16) list_single_2graphic_pane_g2

0x273f,	// (0x00015a19) list_single_2graphic_pane_g3_ParamLimits

0x273f,	// (0x00015a19) list_single_2graphic_pane_g3

0xb3e9,	// (0x0001e6c3) list_single_2graphic_pane_g4_ParamLimits

0xb3e9,	// (0x0001e6c3) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x000229ea) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x000229ea) list_single_2graphic_pane_g

0xb3fa,	// (0x0001e6d4) list_single_2graphic_pane_t1_ParamLimits

0xb3fa,	// (0x0001e6d4) list_single_2graphic_pane_t1

0xb428,	// (0x0001e702) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb428,	// (0x0001e702) list_double2_graphic_large_graphic_pane_g1

0xaca7,	// (0x0001df81) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaca7,	// (0x0001df81) list_double2_graphic_large_graphic_pane_g2

0xacb8,	// (0x0001df92) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xacb8,	// (0x0001df92) list_double2_graphic_large_graphic_pane_g3

0xb43a,	// (0x0001e714) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb43a,	// (0x0001e714) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x000229f3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x000229f3) list_double2_graphic_large_graphic_pane_g

0xb446,	// (0x0001e720) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb446,	// (0x0001e720) list_double2_graphic_large_graphic_pane_t1

0xb45c,	// (0x0001e736) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb45c,	// (0x0001e736) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x000229fc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x000229fc) list_double2_graphic_large_graphic_pane_t

0x1c86,	// (0x00014f60) popup_fast_swap_window_ParamLimits

0x1c86,	// (0x00014f60) popup_fast_swap_window

0x1ca4,	// (0x00014f7e) popup_side_volume_key_window

0x1cc2,	// (0x00014f9c) stacon_top_pane

0x1ccc,	// (0x00014fa6) status_pane_ParamLimits

0x1ccc,	// (0x00014fa6) status_pane

0xc6d1,	// (0x0001f9ab) status_small_pane

0xc6e5,	// (0x0001f9bf) control_pane

0xc6e5,	// (0x0001f9bf) stacon_bottom_pane

0xe3f5,	// (0x000216cf) scroll_pane_cp121

0xe3ec,	// (0x000216c6) set_content_pane

0x1b4c,	// (0x00014e26) bg_active_tab_pane_g1_cp1

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp1

0x1b5e,	// (0x00014e38) bg_active_tab_pane_g3_cp1

0x1b4c,	// (0x00014e26) bg_passive_tab_pane_g1_cp1

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp1

0x1b5e,	// (0x00014e38) bg_passive_tab_pane_g3_cp1

0x1b67,	// (0x00014e41) bg_active_tab_pane_g1_cp2

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp2

0x1b70,	// (0x00014e4a) bg_active_tab_pane_g3_cp2

0x1b67,	// (0x00014e41) bg_passive_tab_pane_g1_cp2

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp2

0x1b70,	// (0x00014e4a) bg_passive_tab_pane_g3_cp2

0x1b79,	// (0x00014e53) bg_active_tab_pane_g1_cp3

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp3

0x1b82,	// (0x00014e5c) bg_active_tab_pane_g3_cp3

0x1b79,	// (0x00014e53) bg_passive_tab_pane_g1_cp3

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp3

0x1b82,	// (0x00014e5c) bg_passive_tab_pane_g3_cp3

0x1b8b,	// (0x00014e65) bg_active_tab_pane_g1_cp4

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp4

0x1b96,	// (0x00014e70) bg_active_tab_pane_g3_cp4

0x1b8b,	// (0x00014e65) bg_passive_tab_pane_g1_cp4

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp4

0x1b96,	// (0x00014e70) bg_passive_tab_pane_g3_cp4

0x1bdf,	// (0x00014eb9) bg_active_tab_pane_g1_cp5

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp5

0x1be8,	// (0x00014ec2) bg_active_tab_pane_g3_cp5

0x1bdf,	// (0x00014eb9) bg_passive_tab_pane_g1_cp5

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp5

0x1be8,	// (0x00014ec2) bg_passive_tab_pane_g3_cp5

0x452a,	// (0x00017804) list_set_graphic_pane_ParamLimits

0x452a,	// (0x00017804) list_set_graphic_pane

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp4

0x1c07,	// (0x00014ee1) list_set_graphic_pane_g1_ParamLimits

0x1c07,	// (0x00014ee1) list_set_graphic_pane_g1

0x1c13,	// (0x00014eed) list_set_graphic_pane_g2_ParamLimits

0x1c13,	// (0x00014eed) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x00022a01) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x00022a01) list_set_graphic_pane_g

0x0009,

0xfab1,	// (0x00022d8b) volume_small_pane_cp_g

0x1c37,	// (0x00014f11) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1c37,	// (0x00014f11) list_double2_large_graphic_pane_g1_cp2

0x1c45,	// (0x00014f1f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1c45,	// (0x00014f1f) list_double2_large_graphic_pane_g2_cp2

0x1c56,	// (0x00014f30) list_double2_large_graphic_pane_g3_cp2

0x1c5e,	// (0x00014f38) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1c5e,	// (0x00014f38) list_double2_large_graphic_pane_t1_cp2

0x1c74,	// (0x00014f4e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1c74,	// (0x00014f4e) list_double2_large_graphic_pane_t2_cp2

0x3980,	// (0x00016c5a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3980,	// (0x00016c5a) list_double_large_graphic_pane_g1_cp2

0x3993,	// (0x00016c6d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3993,	// (0x00016c6d) list_double_large_graphic_pane_g2_cp2

0x1dea,	// (0x000150c4) list_double_large_graphic_pane_g3_cp2

0x39a4,	// (0x00016c7e) list_double_large_graphic_pane_g4_cp

0x39ac,	// (0x00016c86) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x39ac,	// (0x00016c86) list_double_large_graphic_pane_t1_cp2

0x39c3,	// (0x00016c9d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x39c3,	// (0x00016c9d) list_double_large_graphic_pane_t2_cp2

0x1cda,	// (0x00014fb4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1cda,	// (0x00014fb4) list_double2_graphic_pane_g1_cp2

0x1ce8,	// (0x00014fc2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1ce8,	// (0x00014fc2) list_double2_graphic_pane_g2_cp2

0x1cf9,	// (0x00014fd3) list_double2_graphic_pane_g3_cp2

0x1d03,	// (0x00014fdd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1d03,	// (0x00014fdd) list_double2_graphic_pane_t1_cp2

0x1d19,	// (0x00014ff3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1d19,	// (0x00014ff3) list_double2_graphic_pane_t2_cp2

0x1d2b,	// (0x00015005) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1d2b,	// (0x00015005) list_single_number_heading_pane_g1_cp2

0x1d37,	// (0x00015011) list_single_number_heading_pane_g2_cp2

0x1d3f,	// (0x00015019) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1d3f,	// (0x00015019) list_single_number_heading_pane_t1_cp2

0x1d55,	// (0x0001502f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1d55,	// (0x0001502f) list_single_number_heading_pane_t2_cp2

0x1d69,	// (0x00015043) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1d69,	// (0x00015043) list_single_number_heading_pane_t3_cp2

0x1d2b,	// (0x00015005) list_single_heading_pane_g1_cp2_ParamLimits

0x1d2b,	// (0x00015005) list_single_heading_pane_g1_cp2

0x1d37,	// (0x00015011) list_single_heading_pane_g2_cp2

0x1d3f,	// (0x00015019) list_single_heading_pane_t1_cp2_ParamLimits

0x1d3f,	// (0x00015019) list_single_heading_pane_t1_cp2

0x377a,	// (0x00016a54) list_single_heading_pane_t2_cp2_ParamLimits

0x377a,	// (0x00016a54) list_single_heading_pane_t2_cp2

0x36c2,	// (0x0001699c) list_double_graphic_pane_g1_cp2_ParamLimits

0x36c2,	// (0x0001699c) list_double_graphic_pane_g1_cp2

0x36ce,	// (0x000169a8) list_double_graphic_pane_g2_cp2_ParamLimits

0x36ce,	// (0x000169a8) list_double_graphic_pane_g2_cp2

0x36dd,	// (0x000169b7) list_double_graphic_pane_g3_cp2

0x36e5,	// (0x000169bf) list_double_graphic_pane_t1_cp2_ParamLimits

0x36e5,	// (0x000169bf) list_double_graphic_pane_t1_cp2

0x36fb,	// (0x000169d5) list_double_graphic_pane_t2_cp2_ParamLimits

0x36fb,	// (0x000169d5) list_double_graphic_pane_t2_cp2

0x1dde,	// (0x000150b8) list_double_number_pane_g1_cp2_ParamLimits

0x1dde,	// (0x000150b8) list_double_number_pane_g1_cp2

0x1dea,	// (0x000150c4) list_double_number_pane_g2_cp2

0x3686,	// (0x00016960) list_double_number_pane_t1_cp2_ParamLimits

0x3686,	// (0x00016960) list_double_number_pane_t1_cp2

0x369a,	// (0x00016974) list_double_number_pane_t2_cp2_ParamLimits

0x369a,	// (0x00016974) list_double_number_pane_t2_cp2

0x36b0,	// (0x0001698a) list_double_number_pane_t3_cp2_ParamLimits

0x36b0,	// (0x0001698a) list_double_number_pane_t3_cp2

0x356f,	// (0x00016849) list_single_graphic_pane_g1_cp2_ParamLimits

0x356f,	// (0x00016849) list_single_graphic_pane_g1_cp2

0x1e53,	// (0x0001512d) list_single_graphic_pane_g2_cp2_ParamLimits

0x1e53,	// (0x0001512d) list_single_graphic_pane_g2_cp2

0x1e5f,	// (0x00015139) list_single_graphic_pane_g3_cp2

0x3545,	// (0x0001681f) list_single_graphic_pane_t1_cp2_ParamLimits

0x3545,	// (0x0001681f) list_single_graphic_pane_t1_cp2

0x1e53,	// (0x0001512d) list_single_number_pane_g1_cp2_ParamLimits

0x1e53,	// (0x0001512d) list_single_number_pane_g1_cp2

0x1e5f,	// (0x00015139) list_single_number_pane_g2_cp2

0x3545,	// (0x0001681f) list_single_number_pane_t1_cp2_ParamLimits

0x3545,	// (0x0001681f) list_single_number_pane_t1_cp2

0x355b,	// (0x00016835) list_single_number_pane_t2_cp2_ParamLimits

0x355b,	// (0x00016835) list_single_number_pane_t2_cp2

0x1c45,	// (0x00014f1f) list_double2_pane_g1_cp2_ParamLimits

0x1c45,	// (0x00014f1f) list_double2_pane_g1_cp2

0x1c56,	// (0x00014f30) list_double2_pane_g2_cp2

0x1db6,	// (0x00015090) list_double2_pane_t1_cp2_ParamLimits

0x1db6,	// (0x00015090) list_double2_pane_t1_cp2

0x1dcc,	// (0x000150a6) list_double2_pane_t2_cp2_ParamLimits

0x1dcc,	// (0x000150a6) list_double2_pane_t2_cp2

0x1dde,	// (0x000150b8) list_double_pane_g1_cp2_ParamLimits

0x1dde,	// (0x000150b8) list_double_pane_g1_cp2

0x1dea,	// (0x000150c4) list_double_pane_g2_cp2

0x1df2,	// (0x000150cc) list_double_pane_t1_cp2_ParamLimits

0x1df2,	// (0x000150cc) list_double_pane_t1_cp2

0x1e08,	// (0x000150e2) list_double_pane_t2_cp2_ParamLimits

0x1e08,	// (0x000150e2) list_double_pane_t2_cp2

0x1e43,	// (0x0001511d) list_single_pane_cp2_g3

0x1e53,	// (0x0001512d) list_single_pane_g1_cp2_ParamLimits

0x1e53,	// (0x0001512d) list_single_pane_g1_cp2

0x1e5f,	// (0x00015139) list_single_pane_g2_cp2

0x1e67,	// (0x00015141) list_single_pane_t1_cp2_ParamLimits

0x1e67,	// (0x00015141) list_single_pane_t1_cp2

0x1e7f,	// (0x00015159) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1e7f,	// (0x00015159) list_single_large_graphic_pane_g1_cp2

0x1e8d,	// (0x00015167) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1e8d,	// (0x00015167) list_single_large_graphic_pane_g2_cp2

0x1e99,	// (0x00015173) list_single_large_graphic_pane_g3_cp2

0x1ea1,	// (0x0001517b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1ea1,	// (0x0001517b) list_single_large_graphic_pane_g4_cp1

0x1ebb,	// (0x00015195) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1ebb,	// (0x00015195) list_single_large_graphic_pane_t1_cp2

0x350f,	// (0x000167e9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x350f,	// (0x000167e9) list_single_graphic_heading_pane_g1_cp2

0x34dc,	// (0x000167b6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x34dc,	// (0x000167b6) list_single_graphic_heading_pane_g4_cp2

0x1e5f,	// (0x00015139) list_single_graphic_heading_pane_g5_cp2

0x351b,	// (0x000167f5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x351b,	// (0x000167f5) list_single_graphic_heading_pane_t1_cp2

0x3531,	// (0x0001680b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3531,	// (0x0001680b) list_single_graphic_heading_pane_t2_cp2

0x34d0,	// (0x000167aa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x34d0,	// (0x000167aa) list_single_2graphic_pane_g1_cp2

0x34dc,	// (0x000167b6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x34dc,	// (0x000167b6) list_single_2graphic_pane_g2_cp2

0x1e5f,	// (0x00015139) list_single_2graphic_pane_g3_cp2

0x34ed,	// (0x000167c7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x34ed,	// (0x000167c7) list_single_2graphic_pane_g4_cp2

0x34f9,	// (0x000167d3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x34f9,	// (0x000167d3) list_single_2graphic_pane_t1_cp2

0xc6db,	// (0x0001f9b5) list_highlight_pane_g10_cp1

0x30a8,	// (0x00016382) list_highlight_pane_g1_cp1

0x30b0,	// (0x0001638a) list_highlight_pane_g2_cp1

0x30b8,	// (0x00016392) list_highlight_pane_g3_cp1

0x30c0,	// (0x0001639a) list_highlight_pane_g4_cp1

0x30c8,	// (0x000163a2) list_highlight_pane_g5_cp1

0x30d0,	// (0x000163aa) list_highlight_pane_g6_cp1

0x30d8,	// (0x000163b2) list_highlight_pane_g7_cp1

0x30e0,	// (0x000163ba) list_highlight_pane_g8_cp1

0x30e8,	// (0x000163c2) list_highlight_pane_g9_cp1

0xba5a,	// (0x0001ed34) form_field_slider_pane_t3

0xba68,	// (0x0001ed42) form_field_slider_pane_t4

0x2fe4,	// (0x000162be) slider_form_pane_ParamLimits

0x2fe4,	// (0x000162be) slider_form_pane

0xc6e5,	// (0x0001f9bf) control_abbreviations

0xc6e5,	// (0x0001f9bf) control_conventions

0xc6e5,	// (0x0001f9bf) control_definitions

0xc6e5,	// (0x0001f9bf) format_table_attribute

0x37d0,	// (0x00016aaa) bg_popup_preview_window_pane_g9

0xc6e5,	// (0x0001f9bf) format_table_data2

0xc6e5,	// (0x0001f9bf) format_table_data3

0xc6e5,	// (0x0001f9bf) format_table_data_example

0x0008,

0xc6e5,	// (0x0001f9bf) intro_purpose

0xf8be,	// (0x00022b98) bg_popup_preview_window_pane_g

0xc6e5,	// (0x0001f9bf) texts_category

0xc6e5,	// (0x0001f9bf) texts_graphics

0x1ed1,	// (0x000151ab) text_digital

0x1ee0,	// (0x000151ba) text_primary

0x1eef,	// (0x000151c9) text_primary_small

0x1efe,	// (0x000151d8) text_secondary

0x1f0d,	// (0x000151e7) text_title

0x3ff2,	// (0x000172cc) bg_passive_tab_pane_g1_cp3_srt

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp3_srt

0x3ffb,	// (0x000172d5) bg_passive_tab_pane_g3_cp3_srt

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp3_srt_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp3_srt

0x4004,	// (0x000172de) tabs_4_active_pane_srt_g1

0xbe87,	// (0x0001f161) tabs_4_active_pane_srt_t1_ParamLimits

0xbe87,	// (0x0001f161) tabs_4_active_pane_srt_t1

0x3ff2,	// (0x000172cc) bg_active_tab_pane_g1_cp3_copy1

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp3_copy1

0x3ffb,	// (0x000172d5) bg_active_tab_pane_g3_cp3_copy1

0xc741,	// (0x0001fa1b) tabs_2_long_active_pane_srt_ParamLimits

0xc741,	// (0x0001fa1b) tabs_2_long_active_pane_srt

0xc741,	// (0x0001fa1b) tabs_2_long_passive_pane_srt_ParamLimits

0xc741,	// (0x0001fa1b) tabs_2_long_passive_pane_srt

0x224b,	// (0x00015525) bg_passive_tab_pane_cp4_srt_ParamLimits

0x224b,	// (0x00015525) bg_passive_tab_pane_cp4_srt

0x3c22,	// (0x00016efc) bg_passive_tab_pane_g1_cp4_srt

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp4_srt

0x3c2b,	// (0x00016f05) bg_passive_tab_pane_g3_cp4_srt

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp4_srt_ParamLimits

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp4_srt

0xbc3a,	// (0x0001ef14) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc3a,	// (0x0001ef14) tabs_2_long_active_pane_srt_t1

0x3c22,	// (0x00016efc) bg_active_tab_pane_g1_cp4_srt

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp4_srt

0x3c2b,	// (0x00016f05) bg_active_tab_pane_g3_cp4_srt

0xc733,	// (0x0001fa0d) tabs_3_long_active_pane_srt_ParamLimits

0xc733,	// (0x0001fa0d) tabs_3_long_active_pane_srt

0xc733,	// (0x0001fa0d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc733,	// (0x0001fa0d) tabs_3_long_passive_pane_cp_srt

0xc733,	// (0x0001fa0d) tabs_3_long_passive_pane_srt_ParamLimits

0xc733,	// (0x0001fa0d) tabs_3_long_passive_pane_srt

0x224b,	// (0x00015525) bg_passive_tab_pane_cp5_srt_ParamLimits

0x224b,	// (0x00015525) bg_passive_tab_pane_cp5_srt

0x1bdf,	// (0x00014eb9) bg_passive_tab_pane_g1_cp5_srt

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp5_srt

0x1be8,	// (0x00014ec2) bg_passive_tab_pane_g3_cp5_srt

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp5_srt_ParamLimits

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp5_srt

0xbc24,	// (0x0001eefe) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbc24,	// (0x0001eefe) tabs_3_long_active_pane_srt_t1

0x1bdf,	// (0x00014eb9) bg_active_tab_pane_g1_cp5_srt

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp5_srt

0x1be8,	// (0x00014ec2) bg_active_tab_pane_g3_cp5_srt

0x3c02,	// (0x00016edc) navi_text_pane_srt_t1

0x3bfa,	// (0x00016ed4) navi_icon_pane_srt_g1

0x20e5,	// (0x000153bf) midp_editing_number_pane_srt

0x1f1c,	// (0x000151f6) midp_ticker_pane_srt

0x20ed,	// (0x000153c7) midp_ticker_pane_srt_g1

0x20f5,	// (0x000153cf) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x00022a20) midp_ticker_pane_srt_g

0x20fd,	// (0x000153d7) midp_ticker_pane_srt_t1

0x3beb,	// (0x00016ec5) midp_editing_number_pane_t1_copy1

0xb46e,	// (0x0001e748) listscroll_midp_pane

0xb46e,	// (0x0001e748) midp_form_pane

0x1f93,	// (0x0001526d) midp_info_popup_window_ParamLimits

0x1f93,	// (0x0001526d) midp_info_popup_window

0x12e6,	// (0x000145c0) bg_popup_sub_pane_cp50_ParamLimits

0x12e6,	// (0x000145c0) bg_popup_sub_pane_cp50

0x2cca,	// (0x00015fa4) listscroll_midp_info_pane_ParamLimits

0x2cca,	// (0x00015fa4) listscroll_midp_info_pane

0x2caa,	// (0x00015f84) listscroll_form_midp_pane_ParamLimits

0x2caa,	// (0x00015f84) listscroll_form_midp_pane

0x2cb6,	// (0x00015f90) scroll_bar_cp050

0x2caa,	// (0x00015f84) list_midp_pane

0x4dee,	// (0x000180c8) signal_pane_g2_cp

0x2bc4,	// (0x00015e9e) listscroll_midp_info_pane_t1_ParamLimits

0x2bc4,	// (0x00015e9e) listscroll_midp_info_pane_t1

0x2bdc,	// (0x00015eb6) listscroll_midp_info_pane_t2_ParamLimits

0x2bdc,	// (0x00015eb6) listscroll_midp_info_pane_t2

0x2c1a,	// (0x00015ef4) listscroll_midp_info_pane_t3_ParamLimits

0x2c1a,	// (0x00015ef4) listscroll_midp_info_pane_t3

0x2c54,	// (0x00015f2e) listscroll_midp_info_pane_t4_ParamLimits

0x2c54,	// (0x00015f2e) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x00022ad3) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x00022ad3) listscroll_midp_info_pane_t

0x1349,	// (0x00014623) scroll_pane_cp21

0x2b5e,	// (0x00015e38) form_midp_field_choice_group_pane

0x2b67,	// (0x00015e41) form_midp_field_text_pane

0x2baa,	// (0x00015e84) form_midp_field_time_pane

0x2bb2,	// (0x00015e8c) form_midp_gauge_slider_pane

0x2bbb,	// (0x00015e95) form_midp_gauge_wait_pane

0xc6e5,	// (0x0001f9bf) form_midp_image_pane

0xba3d,	// (0x0001ed17) list_single_midp_pane_ParamLimits

0xba3d,	// (0x0001ed17) list_single_midp_pane

0xba18,	// (0x0001ecf2) form_midp_field_text_pane_t1

0x28e5,	// (0x00015bbf) input_focus_pane_cp050

0x2b2d,	// (0x00015e07) list_midp_form_text_pane

0x2ad1,	// (0x00015dab) form_midp_field_choice_group_pane_t1

0x2adf,	// (0x00015db9) input_focus_pane_cp051

0x2af3,	// (0x00015dcd) list_midp_choice_pane

0xc6e5,	// (0x0001f9bf) status_idle_pane

0x2ab5,	// (0x00015d8f) form_midp_field_time_pane_t1

0xc6db,	// (0x0001f9b5) wait_anim_pane_g2_copy1

0x2ac3,	// (0x00015d9d) form_midp_field_time_pane_t2

0x0001,

0x2043,	// (0x0001531d) aid_navinavi_width_2_pane

0xf7f4,	// (0x00022ace) form_midp_field_time_pane_t

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp052

0xc6e5,	// (0x0001f9bf) bg_input_focus_pane_cp040

0x2a75,	// (0x00015d4f) form_midp_gauge_slider_pane_t1

0x2a83,	// (0x00015d5d) form_midp_gauge_slider_pane_t2

0xb9fc,	// (0x0001ecd6) form_midp_gauge_slider_pane_t3

0xba0a,	// (0x0001ece4) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x00022ac5) form_midp_gauge_slider_pane_t

0x2aad,	// (0x00015d87) form_midp_slider_pane

0xc741,	// (0x0001fa1b) bg_input_focus_pane_cp041_ParamLimits

0xc741,	// (0x0001fa1b) bg_input_focus_pane_cp041

0x2a42,	// (0x00015d1c) form_midp_gauge_wait_pane_t1_ParamLimits

0x2a42,	// (0x00015d1c) form_midp_gauge_wait_pane_t1

0x2a54,	// (0x00015d2e) form_midp_gauge_wait_pane_t2_ParamLimits

0x2a54,	// (0x00015d2e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x00022ac0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x00022ac0) form_midp_gauge_wait_pane_t

0x2a66,	// (0x00015d40) form_midp_wait_pane_ParamLimits

0x2a66,	// (0x00015d40) form_midp_wait_pane

0x2a0a,	// (0x00015ce4) form_midp_image_pane_g1

0x2a13,	// (0x00015ced) form_midp_image_pane_t1

0x2a22,	// (0x00015cfc) form_midp_image_pane_t2

0x2a31,	// (0x00015d0b) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x00022ab9) form_midp_image_pane_t

0x29f2,	// (0x00015ccc) list_single_midp_pane_g1

0x29fb,	// (0x00015cd5) list_single_midp_pane_t1

0xb9e5,	// (0x0001ecbf) list_midp_form_item_pane_ParamLimits

0xb9e5,	// (0x0001ecbf) list_midp_form_item_pane

0x1feb,	// (0x000152c5) list_midp_form_item_pane_t1

0x1ffa,	// (0x000152d4) midp_ticker_pane_g1

0x2006,	// (0x000152e0) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x00022a06) midp_ticker_pane_g

0xb512,	// (0x0001e7ec) midp_ticker_pane_t1

0xbddf,	// (0x0001f0b9) midp_editing_number_pane_t1

0x3e6b,	// (0x00017145) midp_editing_number_pane

0x3e7a,	// (0x00017154) midp_ticker_pane

0x2cd6,	// (0x00015fb0) ai_message_heading_pane

0xc6e5,	// (0x0001f9bf) bg_popup_window_pane_cp14

0x2cde,	// (0x00015fb8) listscroll_ai_message_pane

0x3b49,	// (0x00016e23) ai_message_heading_pane_g1_ParamLimits

0x3b49,	// (0x00016e23) ai_message_heading_pane_g1

0x3b55,	// (0x00016e2f) ai_message_heading_pane_g2_ParamLimits

0x3b55,	// (0x00016e2f) ai_message_heading_pane_g2

0x3b63,	// (0x00016e3d) ai_message_heading_pane_g3_ParamLimits

0x3b63,	// (0x00016e3d) ai_message_heading_pane_g3

0x3b6f,	// (0x00016e49) ai_message_heading_pane_g4_ParamLimits

0x3b6f,	// (0x00016e49) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x00022bfa) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x00022bfa) ai_message_heading_pane_g

0x3b7b,	// (0x00016e55) ai_message_heading_pane_t1_ParamLimits

0x3b7b,	// (0x00016e55) ai_message_heading_pane_t1

0x3b95,	// (0x00016e6f) ai_message_heading_pane_t2_ParamLimits

0x3b95,	// (0x00016e6f) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x00022c03) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x00022c03) ai_message_heading_pane_t

0x3ba9,	// (0x00016e83) bg_popup_heading_pane_cp1_ParamLimits

0x3ba9,	// (0x00016e83) bg_popup_heading_pane_cp1

0x3b37,	// (0x00016e11) list_ai_message_pane_ParamLimits

0x3b37,	// (0x00016e11) list_ai_message_pane

0x1349,	// (0x00014623) scroll_pane_cp10

0x3ad3,	// (0x00016dad) list_ai_message_pane_g1

0x3adb,	// (0x00016db5) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x00022bd7) list_ai_message_pane_g

0x3ae3,	// (0x00016dbd) list_ai_message_pane_t1_ParamLimits

0x3ae3,	// (0x00016dbd) list_ai_message_pane_t1

0x3af8,	// (0x00016dd2) list_ai_message_pane_t2_ParamLimits

0x3af8,	// (0x00016dd2) list_ai_message_pane_t2

0x3b0d,	// (0x00016de7) list_ai_message_pane_t3_ParamLimits

0x3b0d,	// (0x00016de7) list_ai_message_pane_t3

0x3b22,	// (0x00016dfc) list_ai_message_pane_t4_ParamLimits

0x3b22,	// (0x00016dfc) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x00022bdc) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x00022bdc) list_ai_message_pane_t

0xbc0a,	// (0x0001eee4) cell_ai_soft_ind_pane_ParamLimits

0xbc0a,	// (0x0001eee4) cell_ai_soft_ind_pane

0x2024,	// (0x000152fe) cell_ai_soft_ind_pane_g1_ParamLimits

0x2024,	// (0x000152fe) cell_ai_soft_ind_pane_g1

0xc6e5,	// (0x0001f9bf) grid_highlight_cp1

0x2031,	// (0x0001530b) text_secondary_cp56_ParamLimits

0x2031,	// (0x0001530b) text_secondary_cp56

0x3a91,	// (0x00016d6b) example_general_pane_ParamLimits

0x3a91,	// (0x00016d6b) example_general_pane

0x3a9d,	// (0x00016d77) example_parent_pane_g1_ParamLimits

0x3a9d,	// (0x00016d77) example_parent_pane_g1

0x3aa9,	// (0x00016d83) example_parent_pane_t1_ParamLimits

0x3aa9,	// (0x00016d83) example_parent_pane_t1

0x9d03,	// (0x0001cfdd) popup_preview_text_window_ParamLimits

0x9d03,	// (0x0001cfdd) popup_preview_text_window

0x1e4b,	// (0x00015125) list_single_pane_cp2_g4

0xdfa2,	// (0x0002127c) bg_popup_preview_window_pane_ParamLimits

0xdfa2,	// (0x0002127c) bg_popup_preview_window_pane

0x37da,	// (0x00016ab4) popup_preview_text_window_t1_ParamLimits

0x37da,	// (0x00016ab4) popup_preview_text_window_t1

0x37f8,	// (0x00016ad2) popup_preview_text_window_t2_ParamLimits

0x37f8,	// (0x00016ad2) popup_preview_text_window_t2

0x3841,	// (0x00016b1b) popup_preview_text_window_t3_ParamLimits

0x3841,	// (0x00016b1b) popup_preview_text_window_t3

0x3886,	// (0x00016b60) popup_preview_text_window_t4_ParamLimits

0x3886,	// (0x00016b60) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x00022bab) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x00022bab) popup_preview_text_window_t

0x3904,	// (0x00016bde) scroll_pane_cp11

0x27bd,	// (0x00015a97) bg_popup_preview_window_pane_g1

0x378e,	// (0x00016a68) bg_popup_preview_window_pane_g2

0x3798,	// (0x00016a72) bg_popup_preview_window_pane_g3

0x37a2,	// (0x00016a7c) bg_popup_preview_window_pane_g4

0x37ac,	// (0x00016a86) bg_popup_preview_window_pane_g5

0x37b6,	// (0x00016a90) bg_popup_preview_window_pane_g6

0x37be,	// (0x00016a98) bg_popup_preview_window_pane_g7

0x37c6,	// (0x00016aa0) bg_popup_preview_window_pane_g8

0xdcb5,	// (0x00020f8f) aid_popup_width_pane

0x9c73,	// (0x0001cf4d) popup_midp_note_alarm_window_ParamLimits

0x9c73,	// (0x0001cf4d) popup_midp_note_alarm_window

0xe45e,	// (0x00021738) data_form_pane_ParamLimits

0xb042,	// (0x0001e31c) form_field_data_pane_g1

0xb04c,	// (0x0001e326) form_field_data_pane_t1_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_ParamLimits

0xe478,	// (0x00021752) data_form_wide_pane_ParamLimits

0xe484,	// (0x0002175e) form_field_data_wide_pane_g1

0xe4b0,	// (0x0002178a) form_field_data_wide_pane_t1_ParamLimits

0xe15e,	// (0x00021438) input_focus_pane_cp6_ParamLimits

0xb17c,	// (0x0001e456) input_popup_find_pane_g1_ParamLimits

0xb17c,	// (0x0001e456) input_popup_find_pane_g1

0xe66c,	// (0x00021946) aid_navi_side_left_pane

0xe681,	// (0x0002195b) aid_navi_side_right_pane

0x31a3,	// (0x0001647d) bg_popup_window_pane_cp30_ParamLimits

0x31a3,	// (0x0001647d) bg_popup_window_pane_cp30

0x321d,	// (0x000164f7) popup_midp_note_alarm_window_g1_ParamLimits

0x321d,	// (0x000164f7) popup_midp_note_alarm_window_g1

0x324d,	// (0x00016527) popup_midp_note_alarm_window_t1_ParamLimits

0x324d,	// (0x00016527) popup_midp_note_alarm_window_t1

0x32ee,	// (0x000165c8) popup_midp_note_alarm_window_t2_ParamLimits

0x32ee,	// (0x000165c8) popup_midp_note_alarm_window_t2

0x339c,	// (0x00016676) popup_midp_note_alarm_window_t3_ParamLimits

0x339c,	// (0x00016676) popup_midp_note_alarm_window_t3

0x33ce,	// (0x000166a8) popup_midp_note_alarm_window_t4_ParamLimits

0x33ce,	// (0x000166a8) popup_midp_note_alarm_window_t4

0x33f4,	// (0x000166ce) popup_midp_note_alarm_window_t5_ParamLimits

0x33f4,	// (0x000166ce) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x00022b48) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x00022b48) popup_midp_note_alarm_window_t

0x34a0,	// (0x0001677a) wait_bar_pane_cp1_ParamLimits

0x34a0,	// (0x0001677a) wait_bar_pane_cp1

0xc6e5,	// (0x0001f9bf) wait_anim_pane_copy1

0xc6e5,	// (0x0001f9bf) wait_border_pane_copy1

0x2e88,	// (0x00016162) wait_border_pane_g1_copy1

0xe4c7,	// (0x000217a1) form_field_popup_pane_g1

0xb066,	// (0x0001e340) form_field_popup_pane_t1_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_cp7_ParamLimits

0xe4cf,	// (0x000217a9) list_form_pane_ParamLimits

0xe4db,	// (0x000217b5) form_field_popup_wide_pane_g1

0xe4e3,	// (0x000217bd) form_field_popup_wide_pane_t1_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_cp8_ParamLimits

0xe4f5,	// (0x000217cf) list_form_wide_pane_ParamLimits

0x4096,	// (0x00017370) aid_size_cell_graphic_pane

0xb0e5,	// (0x0001e3bf) data_form_pane_t1_ParamLimits

0xbdc3,	// (0x0001f09d) data_form_wide_pane_t1_ParamLimits

0xb652,	// (0x0001e92c) bg_status_flat_pane

0xa865,	// (0x0001db3f) title_pane_t1_ParamLimits

0xc6fb,	// (0x0001f9d5) title_pane_t2_ParamLimits

0xc721,	// (0x0001f9fb) title_pane_t3_ParamLimits

0xf530,	// (0x0002280a) title_pane_t_ParamLimits

0xb2b6,	// (0x0001e590) level_1_signal_ParamLimits

0xb2c8,	// (0x0001e5a2) level_2_signal_ParamLimits

0xb2db,	// (0x0001e5b5) level_3_signal_ParamLimits

0xb2ee,	// (0x0001e5c8) level_4_signal_ParamLimits

0xb301,	// (0x0001e5db) level_5_signal_ParamLimits

0xb314,	// (0x0001e5ee) level_6_signal_ParamLimits

0xb327,	// (0x0001e601) level_7_signal_ParamLimits

0xb2b6,	// (0x0001e590) level_1_battery_ParamLimits

0xb2c8,	// (0x0001e5a2) level_2_battery_ParamLimits

0xb2db,	// (0x0001e5b5) level_3_battery_ParamLimits

0xb2ee,	// (0x0001e5c8) level_4_battery_ParamLimits

0xb301,	// (0x0001e5db) level_5_battery_ParamLimits

0xb314,	// (0x0001e5ee) level_6_battery_ParamLimits

0xb327,	// (0x0001e601) level_7_battery_ParamLimits

0x30a8,	// (0x00016382) bg_status_flat_pane_g1

0x30b0,	// (0x0001638a) bg_status_flat_pane_g2

0x30b8,	// (0x00016392) bg_status_flat_pane_g3

0x30c0,	// (0x0001639a) bg_status_flat_pane_g4

0x30c8,	// (0x000163a2) bg_status_flat_pane_g5

0x30d0,	// (0x000163aa) bg_status_flat_pane_g6

0x30d8,	// (0x000163b2) bg_status_flat_pane_g7

0xa8f9,	// (0x0001dbd3) tabs_3_active_pane_t1_ParamLimits

0xa8f9,	// (0x0001dbd3) tabs_3_passive_pane_t1_ParamLimits

0xa913,	// (0x0001dbed) tabs_4_active_pane_t1_ParamLimits

0xa913,	// (0x0001dbed) tabs_4_1_passive_pane_t1_ParamLimits

0xb192,	// (0x0001e46c) tabs_2_active_pane_t1_ParamLimits

0xb192,	// (0x0001e46c) tabs_2_passive_pane_t1_ParamLimits

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp4_ParamLimits

0xb1a4,	// (0x0001e47e) tabs_2_long_active_pane_t1_ParamLimits

0x224b,	// (0x00015525) bg_passive_tab_pane_cp4_ParamLimits

0xecb5,	// (0x00021f8f) list_single_midp_graphic_pane_t1_ParamLimits

0xc741,	// (0x0001fa1b) bg_active_tab_pane_cp5_ParamLimits

0xb1b7,	// (0x0001e491) tabs_3_long_active_pane_t1_ParamLimits

0x224b,	// (0x00015525) bg_passive_tab_pane_cp5_ParamLimits

0xecb5,	// (0x00021f8f) list_single_midp_graphic_pane_t1

0xb652,	// (0x0001e92c) bg_status_flat_pane_ParamLimits

0x240b,	// (0x000156e5) indicator_pane_cp2_ParamLimits

0x240b,	// (0x000156e5) indicator_pane_cp2

0xb7e6,	// (0x0001eac0) navi_pane_srt_ParamLimits

0xb7e6,	// (0x0001eac0) navi_pane_srt

0x2570,	// (0x0001584a) popup_clock_digital_analogue_window_cp1

0xc79f,	// (0x0001fa79) indicator_pane_t1

0x1f1c,	// (0x000151f6) copy_highlight_pane

0x1f1c,	// (0x000151f6) cursor_graphics_pane

0x1f1c,	// (0x000151f6) graphic_within_text_pane

0x1f1c,	// (0x000151f6) link_highlight_pane

0x38c7,	// (0x00016ba1) popup_preview_text_window_t5_ParamLimits

0x38c7,	// (0x00016ba1) popup_preview_text_window_t5

0x204d,	// (0x00015327) cursor_digital_pane

0x204d,	// (0x00015327) cursor_primary_pane

0x205e,	// (0x00015338) cursor_primary_small_pane

0x2066,	// (0x00015340) cursor_secondary_pane

0x206e,	// (0x00015348) cursor_title_pane

0x204d,	// (0x00015327) link_highlight_digital_pane

0x2055,	// (0x0001532f) link_highlight_primary_pane

0x205e,	// (0x00015338) link_highlight_primary_small_pane

0x2066,	// (0x00015340) link_highlight_secondary_pane

0x206e,	// (0x00015348) link_highlight_title_pane

0x204d,	// (0x00015327) copy_highlight_digital_pane

0x204d,	// (0x00015327) copy_highlight_primary_pane

0x205e,	// (0x00015338) copy_highlight_primary_small_pane

0x2066,	// (0x00015340) copy_highlight_secondary_pane

0x206e,	// (0x00015348) copy_highlight_title_pane

0x2066,	// (0x00015340) graphic_text_digital_pane

0x3146,	// (0x00016420) graphic_text_primary_pane

0x314f,	// (0x00016429) graphic_text_primary_small_pane

0x205e,	// (0x00015338) graphic_text_secondary_pane

0x204d,	// (0x00015327) graphic_text_title_pane

0xb524,	// (0x0001e7fe) cursor_primary_pane_g1

0x3138,	// (0x00016412) cursor_text_primary_t1

0xba8a,	// (0x0001ed64) cursor_primary_small_pane_g1

0x312a,	// (0x00016404) cursor_text_primary_small_t1

0xba80,	// (0x0001ed5a) cursor_primary_small_pane_g1_copy1

0x3112,	// (0x000163ec) cursor_text_primary_small_t1_copy1

0x30f0,	// (0x000163ca) cursor_text_title_t1

0xba76,	// (0x0001ed50) cursor_title_pane_g1

0xb524,	// (0x0001e7fe) cursor_digital_pane_g1

0x2080,	// (0x0001535a) cursor_text_digital_t1

0x208e,	// (0x00015368) link_highlight_primary_pane_g1

0x3099,	// (0x00016373) link_highlight_primary_pane_t1

0x208e,	// (0x00015368) link_highlight_primary_small_pane_g1

0x2096,	// (0x00015370) link_highlight_primary_small_pane_t1

0x20a5,	// (0x0001537f) link_highlight_secondary_pane_g1

0x20ad,	// (0x00015387) link_highlight_secondary_pane_t1

0x300d,	// (0x000162e7) link_highlight_title_pane_g1

0x3015,	// (0x000162ef) link_highlight_title_pane_t1

0x2ff6,	// (0x000162d0) link_highlight_digital_pane_g1

0x2ffe,	// (0x000162d8) link_highlight_digital_pane_t1

0x2ebe,	// (0x00016198) copy_highlight_primary_pane_g1

0x2ed5,	// (0x000161af) copy_highlight_primary_pane_t1

0x2ebe,	// (0x00016198) copy_highlight_primary_small_pane_g1

0x2ec6,	// (0x000161a0) copy_highlight_primary_small_pane_t1

0x20bc,	// (0x00015396) copy_highlight_secondary_pane_g1

0x20c4,	// (0x0001539e) copy_highlight_secondary_pane_t1

0x2ea7,	// (0x00016181) copy_highlight_title_pane_g1

0x2eaf,	// (0x00016189) copy_highlight_title_pane_t1

0x2ebe,	// (0x00016198) copy_highlight_digital_pane_g1

0x4268,	// (0x00017542) copy_highlight_digital_pane_t1

0x41bc,	// (0x00017496) graphic_text_primary_pane_g1

0x424c,	// (0x00017526) graphic_text_primary_pane_t1

0x425a,	// (0x00017534) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x00022c77) graphic_text_primary_pane_t

0x4228,	// (0x00017502) graphic_text_primary_small_pane_g1

0x4230,	// (0x0001750a) graphic_text_primary_small_pane_t1

0x423e,	// (0x00017518) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x00022c72) graphic_text_primary_small_pane_t

0x4204,	// (0x000174de) graphic_text_secondary_pane_g1

0x420c,	// (0x000174e6) graphic_text_secondary_pane_t1

0x421a,	// (0x000174f4) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x00022c6d) graphic_text_secondary_pane_t

0x41e0,	// (0x000174ba) graphic_text_title_pane_g1

0x41e8,	// (0x000174c2) graphic_text_title_pane_t1

0x41f6,	// (0x000174d0) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x00022c68) graphic_text_title_pane_t

0x41bc,	// (0x00017496) graphic_text_digital_pane_g1

0x41c4,	// (0x0001749e) graphic_text_digital_pane_t1

0x41d2,	// (0x000174ac) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x00022c63) graphic_text_digital_pane_t

0xc741,	// (0x0001fa1b) navi_icon_pane_srt_ParamLimits

0xc741,	// (0x0001fa1b) navi_icon_pane_srt

0xc6e5,	// (0x0001f9bf) navi_midp_pane_srt

0xc6e5,	// (0x0001f9bf) navi_navi_pane_srt

0xc741,	// (0x0001fa1b) navi_text_pane_srt_ParamLimits

0xc741,	// (0x0001fa1b) navi_text_pane_srt

0x4187,	// (0x00017461) navi_navi_icon_text_pane_srt

0x418f,	// (0x00017469) navi_navi_pane_srt_g1_ParamLimits

0x418f,	// (0x00017469) navi_navi_pane_srt_g1

0x41a1,	// (0x0001747b) navi_navi_pane_srt_g2_ParamLimits

0x41a1,	// (0x0001747b) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x00022c5e) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x00022c5e) navi_navi_pane_srt_g

0x41b3,	// (0x0001748d) navi_navi_tabs_pane_srt

0x4187,	// (0x00017461) navi_navi_text_pane_srt

0x4187,	// (0x00017461) navi_navi_volume_pane_srt

0x4178,	// (0x00017452) navi_navi_text_pane_srt_t1

0xefef,	// (0x000222c9) navi_navi_volume_pane_srt_g1

0xeff7,	// (0x000222d1) volume_small_pane_srt_ParamLimits

0xeff7,	// (0x000222d1) volume_small_pane_srt

0xe95b,	// (0x00021c35) volume_small_pane_srt_g1_ParamLimits

0xe95b,	// (0x00021c35) volume_small_pane_srt_g1

0xe96b,	// (0x00021c45) volume_small_pane_srt_g2_ParamLimits

0xe96b,	// (0x00021c45) volume_small_pane_srt_g2

0xe97c,	// (0x00021c56) volume_small_pane_srt_g3_ParamLimits

0xe97c,	// (0x00021c56) volume_small_pane_srt_g3

0xe98d,	// (0x00021c67) volume_small_pane_srt_g4_ParamLimits

0xe98d,	// (0x00021c67) volume_small_pane_srt_g4

0xe99e,	// (0x00021c78) volume_small_pane_srt_g5_ParamLimits

0xe99e,	// (0x00021c78) volume_small_pane_srt_g5

0xe9af,	// (0x00021c89) volume_small_pane_srt_g6_ParamLimits

0xe9af,	// (0x00021c89) volume_small_pane_srt_g6

0xe9c0,	// (0x00021c9a) volume_small_pane_srt_g7_ParamLimits

0xe9c0,	// (0x00021c9a) volume_small_pane_srt_g7

0xe9d1,	// (0x00021cab) volume_small_pane_srt_g8_ParamLimits

0xe9d1,	// (0x00021cab) volume_small_pane_srt_g8

0xe9e2,	// (0x00021cbc) volume_small_pane_srt_g9_ParamLimits

0xe9e2,	// (0x00021cbc) volume_small_pane_srt_g9

0xe9f3,	// (0x00021ccd) volume_small_pane_srt_g10_ParamLimits

0xe9f3,	// (0x00021ccd) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x00022a0b) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x00022a0b) volume_small_pane_srt_g

0xe057,	// (0x00021331) query_popup_data_pane_cp2

0x415e,	// (0x00017438) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x415e,	// (0x00017438) navi_navi_icon_text_pane_srt_t1

0x3146,	// (0x00016420) navi_tabs_2_long_pane_srt

0x3146,	// (0x00016420) navi_tabs_2_pane_srt

0x3146,	// (0x00016420) navi_tabs_3_long_pane_srt

0x3146,	// (0x00016420) navi_tabs_3_pane_srt

0x3146,	// (0x00016420) navi_tabs_4_pane_srt

0xefcf,	// (0x000222a9) tabs_2_active_pane_srt_ParamLimits

0xefcf,	// (0x000222a9) tabs_2_active_pane_srt

0xefdf,	// (0x000222b9) tabs_2_passive_pane_srt_ParamLimits

0xefdf,	// (0x000222b9) tabs_2_passive_pane_srt

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp1_srt

0x412a,	// (0x00017404) bg_passive_tab_pane_g1_cp1_srt

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp1_srt

0x4133,	// (0x0001740d) bg_passive_tab_pane_g3_cp1_srt

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp1_srt_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp1_srt

0x413c,	// (0x00017416) tabs_2_active_pane_srt_g1

0xbf13,	// (0x0001f1ed) tabs_2_active_pane_srt_t1_ParamLimits

0xbf13,	// (0x0001f1ed) tabs_2_active_pane_srt_t1

0x412a,	// (0x00017404) bg_active_tab_pane_g1_cp1_srt

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp1_srt

0x4133,	// (0x0001740d) bg_active_tab_pane_g3_cp1_srt

0xef9c,	// (0x00022276) tabs_3_active_pane_srt_ParamLimits

0xef9c,	// (0x00022276) tabs_3_active_pane_srt

0xefad,	// (0x00022287) tabs_3_passive_pane_cp_srt_ParamLimits

0xefad,	// (0x00022287) tabs_3_passive_pane_cp_srt

0xefbe,	// (0x00022298) tabs_3_passive_pane_srt_ParamLimits

0xefbe,	// (0x00022298) tabs_3_passive_pane_srt

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x28e5,	// (0x00015bbf) bg_passive_tab_pane_cp2_srt

0x20d3,	// (0x000153ad) bg_passive_tab_pane_g1_cp2_srt

0x1b55,	// (0x00014e2f) bg_passive_tab_pane_g2_cp2_srt

0x20dc,	// (0x000153b6) bg_passive_tab_pane_g3_cp2_srt

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp2_srt_ParamLimits

0xc733,	// (0x0001fa0d) bg_active_tab_pane_cp2_srt

0x4110,	// (0x000173ea) tabs_3_active_pane_srt_g1

0xbefd,	// (0x0001f1d7) tabs_3_active_pane_srt_t1_ParamLimits

0xbefd,	// (0x0001f1d7) tabs_3_active_pane_srt_t1

0x20d3,	// (0x000153ad) bg_active_tab_pane_g1_cp2_srt

0x1b55,	// (0x00014e2f) bg_active_tab_pane_g2_cp2_srt

0x20dc,	// (0x000153b6) bg_active_tab_pane_g3_cp2_srt

0xef54,	// (0x0002222e) tabs_4_active_pane_srt_ParamLimits

0xef54,	// (0x0002222e) tabs_4_active_pane_srt

0xef66,	// (0x00022240) tabs_4_passive_pane_cp2_srt_ParamLimits

0xef66,	// (0x00022240) tabs_4_passive_pane_cp2_srt

0xea58,	// (0x00021d32) aid_size_cell_toolbar

0x3c95,	// (0x00016f6f) main_idle_act_pane_ParamLimits

0xeb12,	// (0x00021dec) popup_large_graphic_colour_window_ParamLimits

0x9fc9,	// (0x0001d2a3) popup_toolbar_window_ParamLimits

0x9fc9,	// (0x0001d2a3) popup_toolbar_window

0x3eb3,	// (0x0001718d) list_single_graphic_2heading_pane_ParamLimits

0x3eb3,	// (0x0001718d) list_single_graphic_2heading_pane

0x157a,	// (0x00014854) aid_size_cell_apps_grid_lsc_pane

0x158c,	// (0x00014866) aid_size_cell_apps_grid_prt_pane

0x224b,	// (0x00015525) bg_wml_button_pane_cp1_ParamLimits

0x224b,	// (0x00015525) bg_wml_button_pane_cp1

0xba18,	// (0x0001ecf2) form_midp_field_text_pane_t1_ParamLimits

0x28e5,	// (0x00015bbf) input_focus_pane_cp050_ParamLimits

0x2b2d,	// (0x00015e07) list_midp_form_text_pane_ParamLimits

0x2adf,	// (0x00015db9) input_focus_pane_cp051_ParamLimits

0x2af3,	// (0x00015dcd) list_midp_choice_pane_ParamLimits

0xb9b1,	// (0x0001ec8b) list_single_2graphic_pane_cp3_ParamLimits

0xb9b1,	// (0x0001ec8b) list_single_2graphic_pane_cp3

0xb9c4,	// (0x0001ec9e) list_single_midp_graphic_pane_ParamLimits

0xb9c4,	// (0x0001ec9e) list_single_midp_graphic_pane

0xebca,	// (0x00021ea4) list_single_graphic_2heading_pane_g1_ParamLimits

0xebca,	// (0x00021ea4) list_single_graphic_2heading_pane_g1

0xebd6,	// (0x00021eb0) list_single_graphic_2heading_pane_g4_ParamLimits

0xebd6,	// (0x00021eb0) list_single_graphic_2heading_pane_g4

0xebe2,	// (0x00021ebc) list_single_graphic_2heading_pane_g5_ParamLimits

0xebe2,	// (0x00021ebc) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x00022a5e) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x00022a5e) list_single_graphic_2heading_pane_g

0xebee,	// (0x00021ec8) list_single_graphic_2heading_pane_t1_ParamLimits

0xebee,	// (0x00021ec8) list_single_graphic_2heading_pane_t1

0xec02,	// (0x00021edc) list_single_graphic_2heading_pane_t2_ParamLimits

0xec02,	// (0x00021edc) list_single_graphic_2heading_pane_t2

0xec1e,	// (0x00021ef8) list_single_graphic_2heading_pane_t3_ParamLimits

0xec1e,	// (0x00021ef8) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x00022a65) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x00022a65) list_single_graphic_2heading_pane_t

0x26c1,	// (0x0001599b) bg_popup_sub_pane_cp2

0x26eb,	// (0x000159c5) grid_toobar_pane

0xec36,	// (0x00021f10) cell_toolbar_pane_ParamLimits

0xec36,	// (0x00021f10) cell_toolbar_pane

0x2761,	// (0x00015a3b) cell_toolbar_pane_g1_ParamLimits

0x2761,	// (0x00015a3b) cell_toolbar_pane_g1

0x2775,	// (0x00015a4f) cell_toolbar_pane_g2_ParamLimits

0x2775,	// (0x00015a4f) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x00022a73) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x00022a73) cell_toolbar_pane_g

0x2797,	// (0x00015a71) grid_highlight_pane_cp2_ParamLimits

0x2797,	// (0x00015a71) grid_highlight_pane_cp2

0x27b1,	// (0x00015a8b) toolbar_button_pane

0x27bd,	// (0x00015a97) toolbar_button_pane_g1

0x27c5,	// (0x00015a9f) toolbar_button_pane_g2

0x27cd,	// (0x00015aa7) toolbar_button_pane_g3

0x27d5,	// (0x00015aaf) toolbar_button_pane_g4

0x27dd,	// (0x00015ab7) toolbar_button_pane_g5

0x27e5,	// (0x00015abf) toolbar_button_pane_g6

0x27ed,	// (0x00015ac7) toolbar_button_pane_g7

0x27f5,	// (0x00015acf) toolbar_button_pane_g8

0x27fd,	// (0x00015ad7) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00022a78) toolbar_button_pane_g

0xec6e,	// (0x00021f48) list_single_2graphic_pane_g1_cp3_ParamLimits

0xec6e,	// (0x00021f48) list_single_2graphic_pane_g1_cp3

0xa021,	// (0x0001d2fb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa021,	// (0x0001d2fb) list_single_2graphic_pane_g2_cp3

0xec7a,	// (0x00021f54) list_single_2graphic_pane_g3_cp3

0xec82,	// (0x00021f5c) list_single_2graphic_pane_g4_cp3_ParamLimits

0xec82,	// (0x00021f5c) list_single_2graphic_pane_g4_cp3

0xec8e,	// (0x00021f68) list_single_2graphic_pane_t1_cp3_ParamLimits

0xec8e,	// (0x00021f68) list_single_2graphic_pane_t1_cp3

0xeca9,	// (0x00021f83) list_single_midp_graphic_pane_g2_ParamLimits

0xeca9,	// (0x00021f83) list_single_midp_graphic_pane_g2

0xea60,	// (0x00021d3a) aid_zoom_text_primary

0xea68,	// (0x00021d42) aid_zoom_text_secondary

0x218d,	// (0x00015467) status_small_pane_g7_ParamLimits

0x218d,	// (0x00015467) status_small_pane_g7

0x21b0,	// (0x0001548a) status_small_pane_t1_ParamLimits

0xa835,	// (0x0001db0f) title_pane_g2

0x0003,

0xf527,	// (0x00022801) title_pane_g

0xaad5,	// (0x0001ddaf) aid_size_cell_colour_1_pane_ParamLimits

0xaad5,	// (0x0001ddaf) aid_size_cell_colour_1_pane

0xaae9,	// (0x0001ddc3) aid_size_cell_colour_2_pane_ParamLimits

0xaae9,	// (0x0001ddc3) aid_size_cell_colour_2_pane

0xaafd,	// (0x0001ddd7) aid_size_cell_colour_3_pane_ParamLimits

0xaafd,	// (0x0001ddd7) aid_size_cell_colour_3_pane

0xab11,	// (0x0001ddeb) aid_size_cell_colour_4_pane_ParamLimits

0xab11,	// (0x0001ddeb) aid_size_cell_colour_4_pane

0xe5a9,	// (0x00021883) title_pane_stacon_g1_ParamLimits

0xe5a9,	// (0x00021883) title_pane_stacon_g1

0x2f2c,	// (0x00016206) popup_note_wait_window_g3_ParamLimits

0x2f2c,	// (0x00016206) popup_note_wait_window_g3

0x2fa3,	// (0x0001627d) popup_note_wait_window_t5_ParamLimits

0x2fa3,	// (0x0001627d) popup_note_wait_window_t5

0xc6e5,	// (0x0001f9bf) main_feb_china_hwr_fs_writing_pane

0x995a,	// (0x0001cc34) popup_feb_china_hwr_fs_window_ParamLimits

0x995a,	// (0x0001cc34) popup_feb_china_hwr_fs_window

0xa032,	// (0x0001d30c) aid_size_cell_hwr_fs_ParamLimits

0xa032,	// (0x0001d30c) aid_size_cell_hwr_fs

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp3_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp3

0xa047,	// (0x0001d321) grid_hwr_fs_pane_ParamLimits

0xa047,	// (0x0001d321) grid_hwr_fs_pane

0xeccb,	// (0x00021fa5) linegrid_hwr_fs_pane_ParamLimits

0xeccb,	// (0x00021fa5) linegrid_hwr_fs_pane

0xa05f,	// (0x0001d339) cell_hwr_fs_pane_ParamLimits

0xa05f,	// (0x0001d339) cell_hwr_fs_pane

0x28f1,	// (0x00015bcb) linegrid_hwr_fs_pane_g1_ParamLimits

0x28f1,	// (0x00015bcb) linegrid_hwr_fs_pane_g1

0xb985,	// (0x0001ec5f) linegrid_hwr_fs_pane_g2_ParamLimits

0xb985,	// (0x0001ec5f) linegrid_hwr_fs_pane_g2

0x290f,	// (0x00015be9) linegrid_hwr_fs_pane_g3_ParamLimits

0x290f,	// (0x00015be9) linegrid_hwr_fs_pane_g3

0xecdb,	// (0x00021fb5) linegrid_hwr_fs_pane_g4_ParamLimits

0xecdb,	// (0x00021fb5) linegrid_hwr_fs_pane_g4

0xecf9,	// (0x00021fd3) linegrid_hwr_fs_pane_g5_ParamLimits

0xecf9,	// (0x00021fd3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x00022a9e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x00022a9e) linegrid_hwr_fs_pane_g

0x291b,	// (0x00015bf5) cell_hwr_fs_pane_g1_ParamLimits

0x291b,	// (0x00015bf5) cell_hwr_fs_pane_g1

0x25fe,	// (0x000158d8) cell_hwr_fs_pane_g2_ParamLimits

0x25fe,	// (0x000158d8) cell_hwr_fs_pane_g2

0xb997,	// (0x0001ec71) cell_hwr_fs_pane_g3_ParamLimits

0xb997,	// (0x0001ec71) cell_hwr_fs_pane_g3

0xb9a4,	// (0x0001ec7e) cell_hwr_fs_pane_g4_ParamLimits

0xb9a4,	// (0x0001ec7e) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x00022aa9) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x00022aa9) cell_hwr_fs_pane_g

0xa085,	// (0x0001d35f) cell_hwr_fs_pane_t1

0xc6e5,	// (0x0001f9bf) grid_highlight_pane_cp6

0xc6e5,	// (0x0001f9bf) main_idle_act2_pane

0x1330,	// (0x0001460a) aid_inside_area_popup_secondary

0xbaaa,	// (0x0001ed84) aid_inside_area_window_primary_ParamLimits

0xbaaa,	// (0x0001ed84) aid_inside_area_window_primary

0x4277,	// (0x00017551) ai2_news_ticker_pane

0x427f,	// (0x00017559) aid_size_cell_ai1_link_ParamLimits

0x427f,	// (0x00017559) aid_size_cell_ai1_link

0x4299,	// (0x00017573) popup_ai2_data_window_ParamLimits

0x4299,	// (0x00017573) popup_ai2_data_window

0x42b7,	// (0x00017591) popup_ai2_link_window_ParamLimits

0x42b7,	// (0x00017591) popup_ai2_link_window

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp4_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp4

0x42cd,	// (0x000175a7) grid_ai2_link_pane_ParamLimits

0x42cd,	// (0x000175a7) grid_ai2_link_pane

0x42e4,	// (0x000175be) popup_ai2_link_window_g1_ParamLimits

0x42e4,	// (0x000175be) popup_ai2_link_window_g1

0x42f0,	// (0x000175ca) popup_ai2_link_window_g2_ParamLimits

0x42f0,	// (0x000175ca) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x00022c7c) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x00022c7c) popup_ai2_link_window_g

0x4301,	// (0x000175db) ai2_mp_button_pane

0x4309,	// (0x000175e3) ai2_mp_volume_pane

0x2adf,	// (0x00015db9) bg_popup_sub_pane_cp5_ParamLimits

0x2adf,	// (0x00015db9) bg_popup_sub_pane_cp5

0x4311,	// (0x000175eb) heading_ai2_gene_pane_ParamLimits

0x4311,	// (0x000175eb) heading_ai2_gene_pane

0x431d,	// (0x000175f7) list_ai2_gene_pane_ParamLimits

0x431d,	// (0x000175f7) list_ai2_gene_pane

0x4365,	// (0x0001763f) cell_ai2_link_pane_ParamLimits

0x4365,	// (0x0001763f) cell_ai2_link_pane

0x437b,	// (0x00017655) cell_ai2_link_pane_g1

0xc6e5,	// (0x0001f9bf) grid_highlight_pane_cp7

0xf00c,	// (0x000222e6) ai2_mp_volume_pane_g1

0x444e,	// (0x00017728) ai2_mp_volume_pane_g2

0x43c3,	// (0x0001769d) list_ai2_gene_pane_t1

0x4456,	// (0x00017730) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x00022c95) ai2_mp_volume_pane_g

0xf014,	// (0x000222ee) volume_small_pane_cp3

0x445e,	// (0x00017738) aid_size_cell_ai2_button

0x4466,	// (0x00017740) grid_ai2_button_pane

0x446f,	// (0x00017749) cell_ai2_button_pane_ParamLimits

0x446f,	// (0x00017749) cell_ai2_button_pane

0xc6db,	// (0x0001f9b5) cell_ai2_button_pane_g1

0xc6e5,	// (0x0001f9bf) grid_highlight_pane_cp8

0x440e,	// (0x000176e8) ai2_gene_pane_t1_ParamLimits

0x440e,	// (0x000176e8) ai2_gene_pane_t1

0x98de,	// (0x0001cbb8) aid_height_parent_landscape

0xbc51,	// (0x0001ef2b) aid_height_set_list

0x3c95,	// (0x00016f6f) aid_size_parent

0x4096,	// (0x00017370) aid_size_cell_graphic_pane_ParamLimits

0x432d,	// (0x00017607) popup_ai2_data_window_g1_ParamLimits

0x432d,	// (0x00017607) popup_ai2_data_window_g1

0x4339,	// (0x00017613) ai2_news_ticker_pane_g1

0x4341,	// (0x0001761b) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x00022c81) ai2_news_ticker_pane_g

0x4349,	// (0x00017623) ai2_news_ticker_pane_t1

0x4357,	// (0x00017631) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x00022c86) ai2_news_ticker_pane_t

0x4384,	// (0x0001765e) heading_ai2_gene_pane_g1

0x438c,	// (0x00017666) heading_ai2_gene_pane_t1_ParamLimits

0x438c,	// (0x00017666) heading_ai2_gene_pane_t1

0x43a1,	// (0x0001767b) list_highlight_pane_cp6

0x43a9,	// (0x00017683) ai2_gene_pane_ParamLimits

0x43a9,	// (0x00017683) ai2_gene_pane

0x43d1,	// (0x000176ab) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x00022c8b) list_ai2_gene_pane_t

0x43df,	// (0x000176b9) list_highlight_pane_cp8_ParamLimits

0x43df,	// (0x000176b9) list_highlight_pane_cp8

0x43f0,	// (0x000176ca) ai2_gene_pane_g1_ParamLimits

0x43f0,	// (0x000176ca) ai2_gene_pane_g1

0x4402,	// (0x000176dc) ai2_gene_pane_g2_ParamLimits

0x4402,	// (0x000176dc) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x00022c90) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x00022c90) ai2_gene_pane_g

0xe379,	// (0x00021653) scroll_pane_cp12

0x989d,	// (0x0001cb77) control_pane_t3_ParamLimits

0x989d,	// (0x0001cb77) control_pane_t3

0x21a1,	// (0x0001547b) status_small_pane_g8_ParamLimits

0x21a1,	// (0x0001547b) status_small_pane_g8

0x99fc,	// (0x0001ccd6) popup_find_window_ParamLimits

0x9cb3,	// (0x0001cf8d) popup_note_image_window_ParamLimits

0x2727,	// (0x00015a01) list_double2_graphic_pane_vc_g1_ParamLimits

0x2727,	// (0x00015a01) list_double2_graphic_pane_vc_g1

0x2733,	// (0x00015a0d) list_double2_graphic_pane_vc_g2_ParamLimits

0x2733,	// (0x00015a0d) list_double2_graphic_pane_vc_g2

0x273f,	// (0x00015a19) list_double2_graphic_pane_vc_g3_ParamLimits

0x273f,	// (0x00015a19) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00022a6c) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00022a6c) list_double2_graphic_pane_vc_g

0x274b,	// (0x00015a25) list_double2_graphic_pane_vc_t1_ParamLimits

0x274b,	// (0x00015a25) list_double2_graphic_pane_vc_t1

0x2733,	// (0x00015a0d) list_single_heading_pane_vc_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_heading_pane_vc_g1

0x273f,	// (0x00015a19) list_single_heading_pane_vc_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_heading_pane_vc_g

0x2805,	// (0x00015adf) list_single_heading_pane_vc_t1_ParamLimits

0x2805,	// (0x00015adf) list_single_heading_pane_vc_t1

0x281b,	// (0x00015af5) list_single_heading_pane_vc_t2_ParamLimits

0x281b,	// (0x00015af5) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x00022a8d) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x00022a8d) list_single_heading_pane_vc_t

0x2831,	// (0x00015b0b) list_setting_number_pane_vc_g1_ParamLimits

0x2831,	// (0x00015b0b) list_setting_number_pane_vc_g1

0x283d,	// (0x00015b17) list_setting_number_pane_vc_g2_ParamLimits

0x283d,	// (0x00015b17) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x00022a92) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x00022a92) list_setting_number_pane_vc_g

0x2849,	// (0x00015b23) list_setting_number_pane_vc_t1_ParamLimits

0x2849,	// (0x00015b23) list_setting_number_pane_vc_t1

0x285d,	// (0x00015b37) list_setting_number_pane_vc_t2_ParamLimits

0x285d,	// (0x00015b37) list_setting_number_pane_vc_t2

0x2879,	// (0x00015b53) list_setting_number_pane_vc_t3_ParamLimits

0x2879,	// (0x00015b53) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x00022a97) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x00022a97) list_setting_number_pane_vc_t

0x28a7,	// (0x00015b81) set_value_pane_vc_ParamLimits

0x28a7,	// (0x00015b81) set_value_pane_vc

0x3eb3,	// (0x0001718d) list_double2_graphic_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double2_graphic_pane_vc

0x3eb3,	// (0x0001718d) list_double2_large_graphic_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double2_large_graphic_pane_vc

0x3eb3,	// (0x0001718d) list_double2_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double2_pane_vc

0x3eb3,	// (0x0001718d) list_double_graphic_heading_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_graphic_heading_pane_vc

0x3eb3,	// (0x0001718d) list_double_graphic_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_graphic_pane_vc

0x3eb3,	// (0x0001718d) list_double_heading_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_heading_pane_vc

0x3ec7,	// (0x000171a1) list_double_large_graphic_pane_vc_ParamLimits

0x3ec7,	// (0x000171a1) list_double_large_graphic_pane_vc

0x3eb3,	// (0x0001718d) list_double_number_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_number_pane_vc

0x3eb3,	// (0x0001718d) list_double_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_pane_vc

0x3eb3,	// (0x0001718d) list_double_time_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_double_time_pane_vc

0x3eb3,	// (0x0001718d) list_setting_number_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_setting_number_pane_vc

0x3eb3,	// (0x0001718d) list_setting_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_setting_pane_vc

0x3eb3,	// (0x0001718d) list_single_graphic_heading_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_single_graphic_heading_pane_vc

0x3eb3,	// (0x0001718d) list_single_heading_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_single_heading_pane_vc

0x3eb3,	// (0x0001718d) list_single_number_heading_pane_vc_ParamLimits

0x3eb3,	// (0x0001718d) list_single_number_heading_pane_vc

0x44a2,	// (0x0001777c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x44a2,	// (0x0001777c) list_double_graphic_heading_pane_vc_g1

0x44ae,	// (0x00017788) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x44ae,	// (0x00017788) list_double_graphic_heading_pane_vc_g2

0x44ba,	// (0x00017794) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x44ba,	// (0x00017794) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c2,	// (0x00022c9c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c2,	// (0x00022c9c) list_double_graphic_heading_pane_vc_g

0x44c6,	// (0x000177a0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x44c6,	// (0x000177a0) list_double_graphic_heading_pane_vc_t1

0x44dc,	// (0x000177b6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x44dc,	// (0x000177b6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x00022ca3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x00022ca3) list_double_graphic_heading_pane_vc_t

0x2831,	// (0x00015b0b) list_setting_pane_vc_g1_ParamLimits

0x2831,	// (0x00015b0b) list_setting_pane_vc_g1

0x283d,	// (0x00015b17) list_setting_pane_vc_g2_ParamLimits

0x283d,	// (0x00015b17) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x00022a92) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x00022a92) list_setting_pane_vc_g

0x472d,	// (0x00017a07) list_setting_pane_vc_t1_ParamLimits

0x472d,	// (0x00017a07) list_setting_pane_vc_t1

0x4749,	// (0x00017a23) list_setting_pane_vc_t2_ParamLimits

0x4749,	// (0x00017a23) list_setting_pane_vc_t2

0x0001,

0xfa0c,	// (0x00022ce6) list_setting_pane_vc_t_ParamLimits

0xfa0c,	// (0x00022ce6) list_setting_pane_vc_t

0x28a7,	// (0x00015b81) set_value_pane_cp_vc_ParamLimits

0x28a7,	// (0x00015b81) set_value_pane_cp_vc

0x2733,	// (0x00015a0d) list_single_number_heading_pane_vc_g1_ParamLimits

0x2733,	// (0x00015a0d) list_single_number_heading_pane_vc_g1

0x273f,	// (0x00015a19) list_single_number_heading_pane_vc_g2_ParamLimits

0x273f,	// (0x00015a19) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002287b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002287b) list_single_number_heading_pane_vc_g

0x4765,	// (0x00017a3f) list_single_number_heading_pane_vc_t1_ParamLimits

0x4765,	// (0x00017a3f) list_single_number_heading_pane_vc_t1

0x477b,	// (0x00017a55) list_single_number_heading_pane_vc_t2_ParamLimits

0x477b,	// (0x00017a55) list_single_number_heading_pane_vc_t2

0x4791,	// (0x00017a6b) list_single_number_heading_pane_vc_t3_ParamLimits

0x4791,	// (0x00017a6b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa11,	// (0x00022ceb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00022ceb) list_single_number_heading_pane_vc_t

0x2727,	// (0x00015a01) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2727,	// (0x00015a01) list_single_graphic_heading_pane_vc_g1

0x2733,	// (0x00015a0d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2733,	// (0x00015a0d) list_single_graphic_heading_pane_vc_g4

0x273f,	// (0x00015a19) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x273f,	// (0x00015a19) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf792,	// (0x00022a6c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf792,	// (0x00022a6c) list_single_graphic_heading_pane_vc_g

0x4765,	// (0x00017a3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4765,	// (0x00017a3f) list_single_graphic_heading_pane_vc_t1

0x47a3,	// (0x00017a7d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x47a3,	// (0x00017a7d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa18,	// (0x00022cf2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00022cf2) list_single_graphic_heading_pane_vc_t

0x2733,	// (0x00015a0d) list_double2_pane_vc_g1_ParamLimits

0x2733,	// (0x00015a0d) list_double2_pane_vc_g1

0x273f,	// (0x00015a19) list_double2_pane_vc_g2_ParamLimits

0x273f,	// (0x00015a19) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002287b) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002287b) list_double2_pane_vc_g

0x47b5,	// (0x00017a8f) list_double2_pane_vc_t1_ParamLimits

0x47b5,	// (0x00017a8f) list_double2_pane_vc_t1

0x47cb,	// (0x00017aa5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x47cb,	// (0x00017aa5) list_double2_large_graphic_pane_vc_g1

0x2733,	// (0x00015a0d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2733,	// (0x00015a0d) list_double2_large_graphic_pane_vc_g2

0x273f,	// (0x00015a19) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x273f,	// (0x00015a19) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00022898) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00022898) list_double2_large_graphic_pane_vc_g

0x47d7,	// (0x00017ab1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x47d7,	// (0x00017ab1) list_double2_large_graphic_pane_vc_t1

0x47ed,	// (0x00017ac7) list_double_time_pane_vc_g1_ParamLimits

0x47ed,	// (0x00017ac7) list_double_time_pane_vc_g1

0x47f9,	// (0x00017ad3) list_double_time_pane_vc_g2_ParamLimits

0x47f9,	// (0x00017ad3) list_double_time_pane_vc_g2

0x0001,

0xfa1d,	// (0x00022cf7) list_double_time_pane_vc_g_ParamLimits

0xfa1d,	// (0x00022cf7) list_double_time_pane_vc_g

0x4805,	// (0x00017adf) list_double_time_pane_vc_t1_ParamLimits

0x4805,	// (0x00017adf) list_double_time_pane_vc_t1

0x4835,	// (0x00017b0f) list_double_time_pane_vc_t2_ParamLimits

0x4835,	// (0x00017b0f) list_double_time_pane_vc_t2

0x4859,	// (0x00017b33) list_double_time_pane_vc_t3_ParamLimits

0x4859,	// (0x00017b33) list_double_time_pane_vc_t3

0x486b,	// (0x00017b45) list_double_time_pane_vc_t4_ParamLimits

0x486b,	// (0x00017b45) list_double_time_pane_vc_t4

0x0003,

0xfa22,	// (0x00022cfc) list_double_time_pane_vc_t_ParamLimits

0xfa22,	// (0x00022cfc) list_double_time_pane_vc_t

0x2733,	// (0x00015a0d) list_double_pane_vc_g1_ParamLimits

0x2733,	// (0x00015a0d) list_double_pane_vc_g1

0x273f,	// (0x00015a19) list_double_pane_vc_g2_ParamLimits

0x273f,	// (0x00015a19) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002287b) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002287b) list_double_pane_vc_g

0x487f,	// (0x00017b59) list_double_pane_vc_t1_ParamLimits

0x487f,	// (0x00017b59) list_double_pane_vc_t1

0x4893,	// (0x00017b6d) list_double_pane_vc_t2_ParamLimits

0x4893,	// (0x00017b6d) list_double_pane_vc_t2

0x0001,

0xfa2b,	// (0x00022d05) list_double_pane_vc_t_ParamLimits

0xfa2b,	// (0x00022d05) list_double_pane_vc_t

0x2733,	// (0x00015a0d) list_double_number_pane_vc_g1_ParamLimits

0x2733,	// (0x00015a0d) list_double_number_pane_vc_g1

0x273f,	// (0x00015a19) list_double_number_pane_vc_g2_ParamLimits

0x273f,	// (0x00015a19) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002287b) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002287b) list_double_number_pane_vc_g

0x48a9,	// (0x00017b83) list_double_number_pane_vc_t1_ParamLimits

0x48a9,	// (0x00017b83) list_double_number_pane_vc_t1

0x48bb,	// (0x00017b95) list_double_number_pane_vc_t2_ParamLimits

0x48bb,	// (0x00017b95) list_double_number_pane_vc_t2

0x48cf,	// (0x00017ba9) list_double_number_pane_vc_t3_ParamLimits

0x48cf,	// (0x00017ba9) list_double_number_pane_vc_t3

0x0002,

0xfa30,	// (0x00022d0a) list_double_number_pane_vc_t_ParamLimits

0xfa30,	// (0x00022d0a) list_double_number_pane_vc_t

0x48e7,	// (0x00017bc1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x48e7,	// (0x00017bc1) list_double_large_graphic_pane_vc_g1

0x4909,	// (0x00017be3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4909,	// (0x00017be3) list_double_large_graphic_pane_vc_g2

0x491d,	// (0x00017bf7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x491d,	// (0x00017bf7) list_double_large_graphic_pane_vc_g3

0x492c,	// (0x00017c06) list_double_large_graphic_pane_vc_g4_ParamLimits

0x492c,	// (0x00017c06) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa37,	// (0x00022d11) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x00022d11) list_double_large_graphic_pane_vc_g

0x4938,	// (0x00017c12) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4938,	// (0x00017c12) list_double_large_graphic_pane_vc_t1

0x4954,	// (0x00017c2e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4954,	// (0x00017c2e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa40,	// (0x00022d1a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa40,	// (0x00022d1a) list_double_large_graphic_pane_vc_t

0x44ae,	// (0x00017788) list_double_heading_pane_vc_g1_ParamLimits

0x44ae,	// (0x00017788) list_double_heading_pane_vc_g1

0x44ba,	// (0x00017794) list_double_heading_pane_vc_g2_ParamLimits

0x44ba,	// (0x00017794) list_double_heading_pane_vc_g2

0x0001,

0xfa45,	// (0x00022d1f) list_double_heading_pane_vc_g_ParamLimits

0xfa45,	// (0x00022d1f) list_double_heading_pane_vc_g

0x4974,	// (0x00017c4e) list_double_heading_pane_vc_t1_ParamLimits

0x4974,	// (0x00017c4e) list_double_heading_pane_vc_t1

0x4986,	// (0x00017c60) list_double_heading_pane_vc_t2_ParamLimits

0x4986,	// (0x00017c60) list_double_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00022d24) list_double_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00022d24) list_double_heading_pane_vc_t

0x499e,	// (0x00017c78) list_double_graphic_pane_vc_g1_ParamLimits

0x499e,	// (0x00017c78) list_double_graphic_pane_vc_g1

0x49aa,	// (0x00017c84) list_double_graphic_pane_vc_g2_ParamLimits

0x49aa,	// (0x00017c84) list_double_graphic_pane_vc_g2

0x2733,	// (0x00015a0d) list_double_graphic_pane_vc_g3_ParamLimits

0x2733,	// (0x00015a0d) list_double_graphic_pane_vc_g3

0x0003,

0xfa4f,	// (0x00022d29) list_double_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x00022d29) list_double_graphic_pane_vc_g

0x49c7,	// (0x00017ca1) list_double_graphic_pane_vc_t1_ParamLimits

0x49c7,	// (0x00017ca1) list_double_graphic_pane_vc_t1

0x49f1,	// (0x00017ccb) list_double_graphic_pane_vc_t2_ParamLimits

0x49f1,	// (0x00017ccb) list_double_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00022d32) list_double_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00022d32) list_double_graphic_pane_vc_t

0xdcc1,	// (0x00020f9b) aid_size_cell_fastswap

0x960e,	// (0x0001c8e8) aid_size_cell_touch_ParamLimits

0x960e,	// (0x0001c8e8) aid_size_cell_touch

0xde97,	// (0x00021171) popup_fast_swap_wide_window_ParamLimits

0xde97,	// (0x00021171) popup_fast_swap_wide_window

0x978a,	// (0x0001ca64) touch_pane_ParamLimits

0x978a,	// (0x0001ca64) touch_pane

0xe3fe,	// (0x000216d8) button_value_adjust_pane_cp2

0xe406,	// (0x000216e0) button_value_adjust_pane_cp4

0xe40e,	// (0x000216e8) form_field_data_pane_cp2

0xb017,	// (0x0001e2f1) form_field_data_wide_pane_cp2

0x1667,	// (0x00014941) bg_scroll_pane_ParamLimits

0xe718,	// (0x000219f2) scroll_handle_pane_ParamLimits

0xe72c,	// (0x00021a06) scroll_sc2_down_pane_ParamLimits

0xe72c,	// (0x00021a06) scroll_sc2_down_pane

0x1698,	// (0x00014972) scroll_sc2_up_pane_ParamLimits

0x1698,	// (0x00014972) scroll_sc2_up_pane

0xc055,	// (0x0001f32f) grid_wheel_folder_pane_g1_ParamLimits

0xc055,	// (0x0001f32f) grid_wheel_folder_pane_g1

0xe8f3,	// (0x00021bcd) clock_nsta_pane_cp2_ParamLimits

0xe8f3,	// (0x00021bcd) clock_nsta_pane_cp2

0xb46e,	// (0x0001e748) listscroll_midp_pane_ParamLimits

0xb47a,	// (0x0001e754) midp_canvas_pane

0x221b,	// (0x000154f5) nsta_clock_indic_pane

0x2257,	// (0x00015531) listscroll_form_pane_vc

0x225f,	// (0x00015539) listscroll_set_pane_vc_ParamLimits

0x225f,	// (0x00015539) listscroll_set_pane_vc

0xb67a,	// (0x0001e954) clock_nsta_pane

0xb6a4,	// (0x0001e97e) indicator_nsta_pane

0x26c1,	// (0x0001599b) bg_popup_sub_pane_cp2_ParamLimits

0x26d5,	// (0x000159af) find_pane_cp2_ParamLimits

0x26d5,	// (0x000159af) find_pane_cp2

0x26eb,	// (0x000159c5) grid_toobar_pane_ParamLimits

0x28b9,	// (0x00015b93) list_form_gen_pane_vc_ParamLimits

0x28b9,	// (0x00015b93) list_form_gen_pane_vc

0x28cf,	// (0x00015ba9) scroll_pane_cp8_vc_ParamLimits

0x28cf,	// (0x00015ba9) scroll_pane_cp8_vc

0x294b,	// (0x00015c25) data_form_wide_pane_vc_ParamLimits

0x294b,	// (0x00015c25) data_form_wide_pane_vc

0x2957,	// (0x00015c31) form_field_data_wide_pane_vc_g1

0x295f,	// (0x00015c39) form_field_data_wide_pane_vc_t1_ParamLimits

0x295f,	// (0x00015c39) form_field_data_wide_pane_vc_t1

0xe46a,	// (0x00021744) input_focus_pane_cp6_vc_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_cp6_vc

0x2caa,	// (0x00015f84) list_midp_pane_ParamLimits

0x4104,	// (0x000173de) scroll_pane_cp16_ParamLimits

0x4104,	// (0x000173de) scroll_pane_cp16

0x2d00,	// (0x00015fda) button_value_adjust_pane_ParamLimits

0x2d00,	// (0x00015fda) button_value_adjust_pane

0xbc62,	// (0x0001ef3c) button_value_adjust_pane_cp6_ParamLimits

0xbc62,	// (0x0001ef3c) button_value_adjust_pane_cp6

0xbd9e,	// (0x0001f078) settings_code_pane_cp_ParamLimits

0xbd9e,	// (0x0001f078) settings_code_pane_cp

0xc6db,	// (0x0001f9b5) cell_touch_pane_g1

0xc6db,	// (0x0001f9b5) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x000229b1) cell_touch_pane_g

0xbf29,	// (0x0001f203) cell_touch_pane_cp_ParamLimits

0xbf29,	// (0x0001f203) cell_touch_pane_cp

0xbf45,	// (0x0001f21f) cell_touch_pane_ParamLimits

0xbf45,	// (0x0001f21f) cell_touch_pane

0xc6db,	// (0x0001f9b5) scroll_sc2_down_pane_g1

0xc6db,	// (0x0001f9b5) scroll_sc2_up_pane_g1

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp4_vc

0x44fa,	// (0x000177d4) list_set_graphic_pane_vc_g1_ParamLimits

0x44fa,	// (0x000177d4) list_set_graphic_pane_vc_g1

0x4506,	// (0x000177e0) list_set_graphic_pane_vc_g2_ParamLimits

0x4506,	// (0x000177e0) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x00022ca8) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x00022ca8) list_set_graphic_pane_vc_g

0x4512,	// (0x000177ec) text_primary_small_cp13_vc_ParamLimits

0x4512,	// (0x000177ec) text_primary_small_cp13_vc

0x452a,	// (0x00017804) list_set_graphic_pane_vc_ParamLimits

0x452a,	// (0x00017804) list_set_graphic_pane_vc

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp2_vc

0xc6db,	// (0x0001f9b5) setting_code_pane_vc_g1

0xc758,	// (0x0001fa32) setting_code_pane_vc_t1

0x453d,	// (0x00017817) set_text_pane_vc_t1_ParamLimits

0x453d,	// (0x00017817) set_text_pane_vc_t1

0xc6e5,	// (0x0001f9bf) input_focus_pane_cp1_vc

0x455e,	// (0x00017838) list_set_text_pane_vc

0xc6db,	// (0x0001f9b5) setting_text_pane_vc_g1

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp2_vc

0xc74f,	// (0x0001fa29) setting_slider_graphic_pane_vc_g1

0x4568,	// (0x00017842) setting_slider_graphic_pane_vc_t1

0x457a,	// (0x00017854) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x00022cad) setting_slider_graphic_pane_vc_t

0x458c,	// (0x00017866) slider_set_pane_cp_vc

0x4596,	// (0x00017870) slider_set_pane_vc_g1

0x459f,	// (0x00017879) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x00022cb2) slider_set_pane_vc_g

0xe525,	// (0x000217ff) set_opt_bg_pane_g1_copy1

0xe52d,	// (0x00021807) set_opt_bg_pane_g2_copy1

0x45cb,	// (0x000178a5) set_opt_bg_pane_g3_copy1

0xe53d,	// (0x00021817) set_opt_bg_pane_g4_copy1

0xe545,	// (0x0002181f) set_opt_bg_pane_g5_copy1

0xe54d,	// (0x00021827) set_opt_bg_pane_g6_copy1

0x45d5,	// (0x000178af) set_opt_bg_pane_g7_copy1

0x45df,	// (0x000178b9) set_opt_bg_pane_g8_copy1

0x45e9,	// (0x000178c3) set_opt_bg_pane_g9_copy1

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp_vc

0x45f3,	// (0x000178cd) setting_slider_pane_vc_t1

0x4602,	// (0x000178dc) setting_slider_pane_vc_t2

0x4614,	// (0x000178ee) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x00022cc1) setting_slider_pane_vc_t

0x4626,	// (0x00017900) slider_set_pane_vc

0xed0f,	// (0x00021fe9) volume_set_pane_vc_g1

0xeeb1,	// (0x0002218b) volume_set_pane_vc_g2

0xeeba,	// (0x00022194) volume_set_pane_vc_g3

0xeec3,	// (0x0002219d) volume_set_pane_vc_g4

0xeecc,	// (0x000221a6) volume_set_pane_vc_g5

0xeed5,	// (0x000221af) volume_set_pane_vc_g6

0xeede,	// (0x000221b8) volume_set_pane_vc_g7

0xeee7,	// (0x000221c1) volume_set_pane_vc_g8

0xeef0,	// (0x000221ca) volume_set_pane_vc_g9

0xeef9,	// (0x000221d3) volume_set_pane_vc_g10

0x0009,

0xf9ee,	// (0x00022cc8) volume_set_pane_vc_g

0x4630,	// (0x0001790a) volume_set_pane_vc

0x463a,	// (0x00017914) button_value_adjust_pane_cp1_vc

0x4644,	// (0x0001791e) list_highlight_pane_cp2_vc

0x464d,	// (0x00017927) list_set_pane_vc_ParamLimits

0x464d,	// (0x00017927) list_set_pane_vc

0x46bb,	// (0x00017995) main_pane_set_vc_t1_ParamLimits

0x46bb,	// (0x00017995) main_pane_set_vc_t1

0x46d0,	// (0x000179aa) main_pane_set_vc_t2_ParamLimits

0x46d0,	// (0x000179aa) main_pane_set_vc_t2

0x46e2,	// (0x000179bc) main_pane_set_vc_t3_ParamLimits

0x46e2,	// (0x000179bc) main_pane_set_vc_t3

0x46f6,	// (0x000179d0) main_pane_set_vc_t4_ParamLimits

0x46f6,	// (0x000179d0) main_pane_set_vc_t4

0x0003,

0xfa03,	// (0x00022cdd) main_pane_set_vc_t_ParamLimits

0xfa03,	// (0x00022cdd) main_pane_set_vc_t

0x470a,	// (0x000179e4) setting_code_pane_vc_ParamLimits

0x470a,	// (0x000179e4) setting_code_pane_vc

0x471b,	// (0x000179f5) setting_slider_graphic_pane_vc

0x471b,	// (0x000179f5) setting_slider_pane_vc

0x471b,	// (0x000179f5) setting_text_pane_vc

0x471b,	// (0x000179f5) setting_volume_pane_vc

0x4725,	// (0x000179ff) scroll_pane_cp121_vc

0xe3ec,	// (0x000216c6) set_content_pane_vc

0x4a14,	// (0x00017cee) button_value_adjust_pane_g1

0x4a1d,	// (0x00017cf7) button_value_adjust_pane_g2

0x0001,

0xfa5d,	// (0x00022d37) button_value_adjust_pane_g

0x4a26,	// (0x00017d00) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4a26,	// (0x00017d00) form_field_slider_wide_pane_vc_t1

0x4a38,	// (0x00017d12) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4a38,	// (0x00017d12) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa62,	// (0x00022d3c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa62,	// (0x00022d3c) form_field_slider_wide_pane_vc_t

0xc733,	// (0x0001fa0d) input_focus_pane_cp10_vc_ParamLimits

0xc733,	// (0x0001fa0d) input_focus_pane_cp10_vc

0x4a64,	// (0x00017d3e) slider_cont_pane_cp1_vc_ParamLimits

0x4a64,	// (0x00017d3e) slider_cont_pane_cp1_vc

0x4a76,	// (0x00017d50) slider_form_pane_g1_cp2

0x459f,	// (0x00017879) slider_form_pane_g2_cp2

0x4aa3,	// (0x00017d7d) form_field_slider_pane_vc_t3

0x4ab1,	// (0x00017d8b) form_field_slider_pane_vc_t4

0x4abf,	// (0x00017d99) slider_form_pane_vc_ParamLimits

0x4abf,	// (0x00017d99) slider_form_pane_vc

0x4acc,	// (0x00017da6) form_field_slider_pane_vc_t1_ParamLimits

0x4acc,	// (0x00017da6) form_field_slider_pane_vc_t1

0x4a38,	// (0x00017d12) form_field_slider_pane_vc_t2_ParamLimits

0x4a38,	// (0x00017d12) form_field_slider_pane_vc_t2

0x0001,

0xfa74,	// (0x00022d4e) form_field_slider_pane_vc_t_ParamLimits

0xfa74,	// (0x00022d4e) form_field_slider_pane_vc_t

0xc733,	// (0x0001fa0d) input_focus_pane_cp9_vc_ParamLimits

0xc733,	// (0x0001fa0d) input_focus_pane_cp9_vc

0x4ae2,	// (0x00017dbc) slider_cont_pane_vc_ParamLimits

0x4ae2,	// (0x00017dbc) slider_cont_pane_vc

0x4af6,	// (0x00017dd0) list_form_graphic_pane_cp_vc_ParamLimits

0x4af6,	// (0x00017dd0) list_form_graphic_pane_cp_vc

0x2957,	// (0x00015c31) form_field_popup_wide_pane_vc_g1

0x4b0b,	// (0x00017de5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4b0b,	// (0x00017de5) form_field_popup_wide_pane_vc_t1

0xe46a,	// (0x00021744) input_focus_pane_cp8_vc_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_cp8_vc

0x4b50,	// (0x00017e2a) list_form_wide_pane_vc_ParamLimits

0x4b50,	// (0x00017e2a) list_form_wide_pane_vc

0x4b5c,	// (0x00017e36) list_form_graphic_pane_vc_g1

0x4b64,	// (0x00017e3e) list_form_graphic_pane_vc_t1_ParamLimits

0x4b64,	// (0x00017e3e) list_form_graphic_pane_vc_t1

0xc741,	// (0x0001fa1b) list_highlight_pane_cp5_vc_ParamLimits

0xc741,	// (0x0001fa1b) list_highlight_pane_cp5_vc

0x4b80,	// (0x00017e5a) list_form_graphic_pane_vc_ParamLimits

0x4b80,	// (0x00017e5a) list_form_graphic_pane_vc

0x2957,	// (0x00015c31) form_field_popup_pane_vc_g1

0x4b96,	// (0x00017e70) form_field_popup_pane_vc_t1_ParamLimits

0x4b96,	// (0x00017e70) form_field_popup_pane_vc_t1

0xe46a,	// (0x00021744) input_focus_pane_cp7_vc_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_cp7_vc

0x4bad,	// (0x00017e87) list_form_pane_vc_ParamLimits

0x4bad,	// (0x00017e87) list_form_pane_vc

0x4bb9,	// (0x00017e93) data_form_pane_vc_t1_ParamLimits

0x4bb9,	// (0x00017e93) data_form_pane_vc_t1

0xe525,	// (0x000217ff) input_focus_pane_vc_g1

0xe52d,	// (0x00021807) input_focus_pane_vc_g2

0xe535,	// (0x0002180f) input_focus_pane_vc_g3

0xe53d,	// (0x00021817) input_focus_pane_vc_g4

0xe545,	// (0x0002181f) input_focus_pane_vc_g5

0xe54d,	// (0x00021827) input_focus_pane_vc_g6

0xe555,	// (0x0002182f) input_focus_pane_vc_g7

0xe55d,	// (0x00021837) input_focus_pane_vc_g8

0xe565,	// (0x0002183f) input_focus_pane_vc_g9

0xc6db,	// (0x0001f9b5) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0002293a) input_focus_pane_vc_g

0x294b,	// (0x00015c25) data_form_pane_vc_ParamLimits

0x294b,	// (0x00015c25) data_form_pane_vc

0x2957,	// (0x00015c31) form_field_data_pane_vc_g1

0x4bd6,	// (0x00017eb0) form_field_data_pane_vc_t1_ParamLimits

0x4bd6,	// (0x00017eb0) form_field_data_pane_vc_t1

0xe46a,	// (0x00021744) input_focus_pane_vc_ParamLimits

0xe46a,	// (0x00021744) input_focus_pane_vc

0x4bf0,	// (0x00017eca) button_value_adjust_pane_cp3_vc

0x4bf8,	// (0x00017ed2) button_value_adjust_pane_cp5_vc

0x4c00,	// (0x00017eda) form_field_data_pane_vc_ParamLimits

0x4c00,	// (0x00017eda) form_field_data_pane_vc

0x4c1b,	// (0x00017ef5) form_field_data_pane_vc_cp2

0x4c23,	// (0x00017efd) form_field_data_wide_pane_vc_ParamLimits

0x4c23,	// (0x00017efd) form_field_data_wide_pane_vc

0x4c3d,	// (0x00017f17) form_field_data_wide_pane_vc_cp2

0x4c45,	// (0x00017f1f) form_field_popup_pane_vc_ParamLimits

0x4c45,	// (0x00017f1f) form_field_popup_pane_vc

0x4c60,	// (0x00017f3a) form_field_popup_wide_pane_vc_ParamLimits

0x4c60,	// (0x00017f3a) form_field_popup_wide_pane_vc

0x4c7a,	// (0x00017f54) form_field_slider_pane_vc_ParamLimits

0x4c7a,	// (0x00017f54) form_field_slider_pane_vc

0x4c8d,	// (0x00017f67) form_field_slider_wide_pane_vc_ParamLimits

0x4c8d,	// (0x00017f67) form_field_slider_wide_pane_vc

0xbf63,	// (0x0001f23d) grid_touch_1_pane_ParamLimits

0xbf63,	// (0x0001f23d) grid_touch_1_pane

0xbf77,	// (0x0001f251) grid_touch_2_pane_ParamLimits

0xbf77,	// (0x0001f251) grid_touch_2_pane

0x4d73,	// (0x0001804d) touch_pane_g1_ParamLimits

0x4d73,	// (0x0001804d) touch_pane_g1

0x4cc6,	// (0x00017fa0) cell_app_pane_cp_wide_ParamLimits

0x4cc6,	// (0x00017fa0) cell_app_pane_cp_wide

0x4cd7,	// (0x00017fb1) grid_popup_fast_wide_pane_ParamLimits

0x4cd7,	// (0x00017fb1) grid_popup_fast_wide_pane

0x4ceb,	// (0x00017fc5) scroll_pane_cp19_ParamLimits

0x4ceb,	// (0x00017fc5) scroll_pane_cp19

0xc6e5,	// (0x0001f9bf) bg_popup_window_pane_cp20

0x4cff,	// (0x00017fd9) listscroll_popup_fast_wide_pane

0xbfa3,	// (0x0001f27d) grid_indicator_nsta_pane

0x4d19,	// (0x00017ff3) clock_nsta_pane_g1

0x4d22,	// (0x00017ffc) clock_nsta_pane_t1

0xbfaf,	// (0x0001f289) cell_indicator_nsta_pane_ParamLimits

0xbfaf,	// (0x0001f289) cell_indicator_nsta_pane

0x4d73,	// (0x0001804d) cell_indicator_nsta_pane_g1

0xbfca,	// (0x0001f2a4) cell_indicator_nsta_pane_g2

0x0001,

0xfa85,	// (0x00022d5f) cell_indicator_nsta_pane_g

0x4d94,	// (0x0001806e) clock_nsta_pane_cp

0x4d9d,	// (0x00018077) indicator_nsta_pane_cp

0x4da7,	// (0x00018081) nsta_clock_indic_pane_g1

0xc797,	// (0x0001fa71) grid_indicator_pane

0x178a,	// (0x00014a64) scroll_pane_cp29

0xe842,	// (0x00021b1c) indicator_nsta_pane_cp2_ParamLimits

0xe842,	// (0x00021b1c) indicator_nsta_pane_cp2

0xc741,	// (0x0001fa1b) main_apps_wheel_pane

0x2b67,	// (0x00015e41) form_midp_field_text_pane_ParamLimits

0x2cb6,	// (0x00015f90) scroll_bar_cp050_ParamLimits

0x4e00,	// (0x000180da) cell_indicator_pane_ParamLimits

0x4e00,	// (0x000180da) cell_indicator_pane

0x4e18,	// (0x000180f2) cell_indicator_pane_g1

0xbfd7,	// (0x0001f2b1) grid_wheel_folder_pane_ParamLimits

0xbfd7,	// (0x0001f2b1) grid_wheel_folder_pane

0xbfe5,	// (0x0001f2bf) list_wheel_apps_pane_ParamLimits

0xbfe5,	// (0x0001f2bf) list_wheel_apps_pane

0xbff3,	// (0x0001f2cd) main_apps_wheel_pane_g1_ParamLimits

0xbff3,	// (0x0001f2cd) main_apps_wheel_pane_g1

0xc003,	// (0x0001f2dd) main_apps_wheel_pane_g2_ParamLimits

0xc003,	// (0x0001f2dd) main_apps_wheel_pane_g2

0x0001,

0xfaa1,	// (0x00022d7b) main_apps_wheel_pane_g_ParamLimits

0xfaa1,	// (0x00022d7b) main_apps_wheel_pane_g

0xc013,	// (0x0001f2ed) main_apps_wheel_pane_t1_ParamLimits

0xc013,	// (0x0001f2ed) main_apps_wheel_pane_t1

0xc02b,	// (0x0001f305) list_wheel_apps_pane_g1

0xc033,	// (0x0001f30d) list_wheel_apps_pane_g2

0xc03b,	// (0x0001f315) list_wheel_apps_pane_g3

0xc043,	// (0x0001f31d) list_wheel_apps_pane_g4

0xc04b,	// (0x0001f325) list_wheel_apps_pane_g5

0x0004,

0xfaa6,	// (0x00022d80) list_wheel_apps_pane_g

0x1d89,	// (0x00015063) navi_icon_text_pane

0xb56e,	// (0x0001e848) aid_fill_nsta

0xc066,	// (0x0001f340) navi_icon_text_pane_g1

0xc072,	// (0x0001f34c) navi_icon_text_pane_t1

0x1c1f,	// (0x00014ef9) list_set_graphic_pane_t1_ParamLimits

0x1c1f,	// (0x00014ef9) list_set_graphic_pane_t1

0x3423,	// (0x000166fd) popup_midp_note_alarm_window_t6_ParamLimits

0x3423,	// (0x000166fd) popup_midp_note_alarm_window_t6

0x3435,	// (0x0001670f) popup_midp_note_alarm_window_t7_ParamLimits

0x3435,	// (0x0001670f) popup_midp_note_alarm_window_t7

0x3447,	// (0x00016721) popup_midp_note_alarm_window_t8_ParamLimits

0x3447,	// (0x00016721) popup_midp_note_alarm_window_t8

0x3459,	// (0x00016733) popup_midp_note_alarm_window_t9_ParamLimits

0x3459,	// (0x00016733) popup_midp_note_alarm_window_t9

0x346b,	// (0x00016745) popup_midp_note_alarm_window_t10_ParamLimits

0x346b,	// (0x00016745) popup_midp_note_alarm_window_t10

0x347d,	// (0x00016757) popup_midp_note_alarm_window_t11_ParamLimits

0x347d,	// (0x00016757) popup_midp_note_alarm_window_t11

0x348f,	// (0x00016769) scroll_pane_cp17_ParamLimits

0x348f,	// (0x00016769) scroll_pane_cp17

0xed0f,	// (0x00021fe9) volume_small_pane_cp_g1

0xf01d,	// (0x000222f7) volume_small_pane_cp_g2

0xf026,	// (0x00022300) volume_small_pane_cp_g3

0xf02f,	// (0x00022309) volume_small_pane_cp_g4

0xf038,	// (0x00022312) volume_small_pane_cp_g5

0xf041,	// (0x0002231b) volume_small_pane_cp_g6

0xf04a,	// (0x00022324) volume_small_pane_cp_g7

0xf053,	// (0x0002232d) volume_small_pane_cp_g8

0xf05c,	// (0x00022336) volume_small_pane_cp_g9

0xf065,	// (0x0002233f) volume_small_pane_cp_g10

0x1ffa,	// (0x000152d4) midp_ticker_pane_g1_ParamLimits

0x2006,	// (0x000152e0) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x00022a06) midp_ticker_pane_g_ParamLimits

0xb512,	// (0x0001e7ec) midp_ticker_pane_t1_ParamLimits

0xb592,	// (0x0001e86c) aid_fill_nsta_2

0x2ca2,	// (0x00015f7c) list_form2_midp_pane

0x3e6b,	// (0x00017145) midp_editing_number_pane_ParamLimits

0x3e7a,	// (0x00017154) midp_ticker_pane_ParamLimits

0x4f0b,	// (0x000181e5) form2_midp_field_pane

0x4f2f,	// (0x00018209) scroll_pane_cp51

0x4f4f,	// (0x00018229) form2_midp_button_pane_ParamLimits

0x4f4f,	// (0x00018229) form2_midp_button_pane

0x4f61,	// (0x0001823b) form2_midp_content_pane_ParamLimits

0x4f61,	// (0x0001823b) form2_midp_content_pane

0x4f7b,	// (0x00018255) form2_midp_field_choice_group_pane

0x4f83,	// (0x0001825d) form2_midp_field_pane_g1

0x4f8b,	// (0x00018265) form2_midp_field_pane_g2

0x4f93,	// (0x0001826d) form2_midp_field_pane_g3

0x4f9b,	// (0x00018275) form2_midp_field_pane_g4

0x0003,

0xfacb,	// (0x00022da5) form2_midp_field_pane_g

0x4fa3,	// (0x0001827d) form2_midp_gauge_slider_pane

0x4fab,	// (0x00018285) form2_midp_gauge_wait_pane

0x4fb3,	// (0x0001828d) form2_midp_image_pane_ParamLimits

0x4fb3,	// (0x0001828d) form2_midp_image_pane

0x4fce,	// (0x000182a8) form2_midp_label_pane_ParamLimits

0x4fce,	// (0x000182a8) form2_midp_label_pane

0xc0a0,	// (0x0001f37a) form2_midp_label_pane_cp_ParamLimits

0xc0a0,	// (0x0001f37a) form2_midp_label_pane_cp

0x500e,	// (0x000182e8) form2_midp_string_pane_ParamLimits

0x500e,	// (0x000182e8) form2_midp_string_pane

0xc0c1,	// (0x0001f39b) form2_midp_text_pane_ParamLimits

0xc0c1,	// (0x0001f39b) form2_midp_text_pane

0x5041,	// (0x0001831b) form2_midp_time_pane

0x5051,	// (0x0001832b) input_focus_pane_cp51_ParamLimits

0x5051,	// (0x0001832b) input_focus_pane_cp51

0x5069,	// (0x00018343) form2_midp_label_pane_t1_ParamLimits

0x5069,	// (0x00018343) form2_midp_label_pane_t1

0xc0e2,	// (0x0001f3bc) form2_mdip_text_pane_t1_ParamLimits

0xc0e2,	// (0x0001f3bc) form2_mdip_text_pane_t1

0x50ce,	// (0x000183a8) form2_midp_time_pane_t1

0x50e9,	// (0x000183c3) form2_midp_gauge_slider_pane_t1

0xc0fe,	// (0x0001f3d8) form2_midp_gauge_slider_pane_t2

0xc110,	// (0x0001f3ea) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad4,	// (0x00022dae) form2_midp_gauge_slider_pane_t

0x511f,	// (0x000183f9) form2_midp_slider_pane

0x512b,	// (0x00018405) form2_midp_gauge_wait_pane_t1

0x5139,	// (0x00018413) form2_midp_wait_pane_ParamLimits

0x5139,	// (0x00018413) form2_midp_wait_pane

0x299e,	// (0x00015c78) list_single_2graphic_pane_cp4_ParamLimits

0x299e,	// (0x00015c78) list_single_2graphic_pane_cp4

0xb9c4,	// (0x0001ec9e) list_single_midp_graphic_pane_cp_ParamLimits

0xb9c4,	// (0x0001ec9e) list_single_midp_graphic_pane_cp

0xc6e5,	// (0x0001f9bf) list_highlight_pane_cp20

0x517d,	// (0x00018457) list_single_2graphic_pane_g1_cp4

0x4384,	// (0x0001765e) list_single_2graphic_pane_g2_cp4

0x5185,	// (0x0001845f) list_single_2graphic_pane_t1_cp4

0xc741,	// (0x0001fa1b) list_highlight_pane_cp21

0x5194,	// (0x0001846e) list_single_midp_graphic_pane_g4_cp

0x51a3,	// (0x0001847d) list_single_midp_graphic_pane_t1_cp

0xc122,	// (0x0001f3fc) form2_mdip_string_pane_t1_ParamLimits

0xc122,	// (0x0001f3fc) form2_mdip_string_pane_t1

0xc6e5,	// (0x0001f9bf) bg_wml_button_pane_cp2

0xc6db,	// (0x0001f9b5) form2_midp_image_pane_g1

0xe396,	// (0x00021670) list_double_large_graphic_pane_g5_ParamLimits

0xe396,	// (0x00021670) list_double_large_graphic_pane_g5

0xb46e,	// (0x0001e748) midp_form_pane_ParamLimits

0xc741,	// (0x0001fa1b) main_apps_wheel_pane_ParamLimits

0x9d39,	// (0x0001d013) popup_preview_window_ParamLimits

0x9d39,	// (0x0001d013) popup_preview_window

0xeb63,	// (0x00021e3d) popup_touch_info_window_ParamLimits

0xeb63,	// (0x00021e3d) popup_touch_info_window

0xeb85,	// (0x00021e5f) popup_touch_menu_window_ParamLimits

0xeb85,	// (0x00021e5f) popup_touch_menu_window

0xc6d1,	// (0x0001f9ab) bg_popup_sub_pane_cp6

0x5254,	// (0x0001852e) list_touch_menu_pane

0x525c,	// (0x00018536) list_single_touch_menu_pane_ParamLimits

0x525c,	// (0x00018536) list_single_touch_menu_pane

0x5274,	// (0x0001854e) list_single_touch_menu_pane_t1

0xc741,	// (0x0001fa1b) bg_popup_sub_pane_cp7_ParamLimits

0xc741,	// (0x0001fa1b) bg_popup_sub_pane_cp7

0x2cd6,	// (0x00015fb0) heading_sub_pane

0x5282,	// (0x0001855c) list_touch_info_pane_ParamLimits

0x5282,	// (0x0001855c) list_touch_info_pane

0x5292,	// (0x0001856c) list_single_touch_info_pane_ParamLimits

0x5292,	// (0x0001856c) list_single_touch_info_pane

0x52a4,	// (0x0001857e) list_single_touch_info_pane_t1

0x52b2,	// (0x0001858c) list_single_touch_info_pane_t2

0x0001,

0xfae2,	// (0x00022dbc) list_single_touch_info_pane_t

0x1f1c,	// (0x000151f6) bg_popup_heading_pane_cp

0x52c0,	// (0x0001859a) heading_sub_pane_t1

0x28e5,	// (0x00015bbf) bg_popup_preview_window_pane_cp_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_preview_window_pane_cp

0x2cd6,	// (0x00015fb0) heading_preview_pane

0x5282,	// (0x0001855c) list_preview_pane_ParamLimits

0x5282,	// (0x0001855c) list_preview_pane

0x52ce,	// (0x000185a8) popup_preview_window_g1

0x5292,	// (0x0001856c) list_single_preview_pane_ParamLimits

0x5292,	// (0x0001856c) list_single_preview_pane

0x52d6,	// (0x000185b0) list_single_preview_pane_g1

0x52de,	// (0x000185b8) list_single_preview_pane_t1

0x52a4,	// (0x0001857e) list_single_preview_pane_t2

0x0001,

0xfae7,	// (0x00022dc1) list_single_preview_pane_t

0x52ec,	// (0x000185c6) bg_popup_heading_pane_cp2_ParamLimits

0x52ec,	// (0x000185c6) bg_popup_heading_pane_cp2

0x5302,	// (0x000185dc) heading_preview_pane_g1

0x530a,	// (0x000185e4) heading_preview_pane_t1_ParamLimits

0x530a,	// (0x000185e4) heading_preview_pane_t1

0xc7ae,	// (0x0001fa88) soft_indicator_pane_t1_ParamLimits

0xe356,	// (0x00021630) scroll_pane_ParamLimits

0x1686,	// (0x00014960) scroll_sc2_left_pane

0x168f,	// (0x00014969) scroll_sc2_right_pane

0x16ae,	// (0x00014988) scroll_bg_pane_g1_ParamLimits

0x16c3,	// (0x0001499d) scroll_bg_pane_g2_ParamLimits

0x16db,	// (0x000149b5) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x00022991) scroll_bg_pane_g_ParamLimits

0x16ae,	// (0x00014988) scroll_handle_pane_g1_ParamLimits

0x16fd,	// (0x000149d7) scroll_handle_pane_g2_ParamLimits

0x16db,	// (0x000149b5) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x00022998) scroll_handle_pane_g_ParamLimits

0xea86,	// (0x00021d60) popup_choice_list_window_ParamLimits

0xea86,	// (0x00021d60) popup_choice_list_window

0x26cd,	// (0x000159a7) choice_list_pane

0x2789,	// (0x00015a63) cell_toolbar_pane_t1

0x27b1,	// (0x00015a8b) toolbar_button_pane_ParamLimits

0x3959,	// (0x00016c33) ai_gene_pane_1_t2_ParamLimits

0x3959,	// (0x00016c33) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x00022bbb) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x00022bbb) ai_gene_pane_1_t

0x5327,	// (0x00018601) scroll_sc2_left_pane_g1

0x5327,	// (0x00018601) scroll_sc2_right_pane_g1

0x224b,	// (0x00015525) bg_popup_sub_pane_cp10

0x5331,	// (0x0001860b) list_choice_list_pane

0x534a,	// (0x00018624) list_single_choice_list_pane_ParamLimits

0x534a,	// (0x00018624) list_single_choice_list_pane

0x5362,	// (0x0001863c) list_single_choice_list_pane_g1

0x136e,	// (0x00014648) list_single_choice_list_pane_t1_ParamLimits

0x136e,	// (0x00014648) list_single_choice_list_pane_t1

0x536a,	// (0x00018644) choice_list_pane_g1

0x5372,	// (0x0001864c) choice_list_pane_t1

0xc6d1,	// (0x0001f9ab) input_focus_pane_cp11

0x1545,	// (0x0001481f) title_pane_stacon_g2_ParamLimits

0x1545,	// (0x0001481f) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x00022977) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x00022977) title_pane_stacon_g

0x1f1c,	// (0x000151f6) cursor_press_pane

0x99b0,	// (0x0001cc8a) popup_fep_hwr_window_ParamLimits

0x99b0,	// (0x0001cc8a) popup_fep_hwr_window

0xeaf0,	// (0x00021dca) popup_fep_vkb_window_ParamLimits

0xeaf0,	// (0x00021dca) popup_fep_vkb_window

0x5380,	// (0x0001865a) cursor_press_pane_g1

0x0002,

0xfb10,	// (0x00022dea) fep_vkb_side_pane_g_ParamLimits

0xf099,	// (0x00022373) fep_hwr_candidate_pane_ParamLimits

0xf099,	// (0x00022373) fep_hwr_candidate_pane

0xf0c3,	// (0x0002239d) fep_hwr_side_pane_ParamLimits

0xf0c3,	// (0x0002239d) fep_hwr_side_pane

0xf0e5,	// (0x000223bf) fep_hwr_top_pane_ParamLimits

0xf0e5,	// (0x000223bf) fep_hwr_top_pane

0xf0fd,	// (0x000223d7) fep_hwr_write_pane_ParamLimits

0xf0fd,	// (0x000223d7) fep_hwr_write_pane

0xfb10,	// (0x00022dea) fep_vkb_side_pane_g

0x5388,	// (0x00018662) fep_hwr_top_pane_g1

0x539a,	// (0x00018674) fep_hwr_top_pane_g2

0xf137,	// (0x00022411) fep_hwr_top_pane_g3

0x0002,

0xfaec,	// (0x00022dc6) fep_hwr_top_pane_g

0xf14c,	// (0x00022426) fep_hwr_top_text_pane

0x1852,	// (0x00014b2c) fep_hwr_top_text_pane_g1

0x53d0,	// (0x000186aa) fep_hwr_top_text_pane_t1

0xf1db,	// (0x000224b5) fep_hwr_candidate_pane_g1

0x561b,	// (0x000188f5) fep_vkb_keypad_pane_g3_ParamLimits

0x561b,	// (0x000188f5) fep_vkb_keypad_pane_g3

0x5647,	// (0x00018921) fep_vkb_keypad_pane_g4_ParamLimits

0x5647,	// (0x00018921) fep_vkb_keypad_pane_g4

0x56be,	// (0x00018998) fep_vkb_bottom_pane_g2_ParamLimits

0x56be,	// (0x00018998) fep_vkb_bottom_pane_g2

0x0001,

0xfb17,	// (0x00022df1) fep_vkb_bottom_pane_g_ParamLimits

0xfb17,	// (0x00022df1) fep_vkb_bottom_pane_g

0x5327,	// (0x00018601) cell_vkb_side_pane_g2

0x0001,

0xfb21,	// (0x00022dfb) cell_vkb_side_pane_g

0x5749,	// (0x00018a23) cell_vkb_side_pane_t1

0x5757,	// (0x00018a31) cell_vkb_side_pane_t1_copy1

0x5327,	// (0x00018601) bg_fep_vkb_candidate_pane_g2

0x589b,	// (0x00018b75) cell_vkb_candidate_pane_ParamLimits

0x53de,	// (0x000186b8) aid_size_cell_vkb_ParamLimits

0x53de,	// (0x000186b8) aid_size_cell_vkb

0x589b,	// (0x00018b75) cell_vkb_candidate_pane

0xf202,	// (0x000224dc) bg_popup_fep_shadow_pane_g1

0xc1b8,	// (0x0001f492) fep_vkb_bottom_pane_ParamLimits

0xc1b8,	// (0x0001f492) fep_vkb_bottom_pane

0x54ad,	// (0x00018787) fep_vkb_candidate_pane_ParamLimits

0x54ad,	// (0x00018787) fep_vkb_candidate_pane

0xc1e4,	// (0x0001f4be) fep_vkb_keypad_pane_ParamLimits

0xc1e4,	// (0x0001f4be) fep_vkb_keypad_pane

0xc20b,	// (0x0001f4e5) fep_vkb_side_pane_ParamLimits

0xc20b,	// (0x0001f4e5) fep_vkb_side_pane

0xc247,	// (0x0001f521) fep_vkb_top_pane_ParamLimits

0xc247,	// (0x0001f521) fep_vkb_top_pane

0x5574,	// (0x0001884e) fep_vkb_top_pane_g1_ParamLimits

0x5574,	// (0x0001884e) fep_vkb_top_pane_g1

0x5583,	// (0x0001885d) fep_vkb_top_pane_g2_ParamLimits

0x5583,	// (0x0001885d) fep_vkb_top_pane_g2

0x5592,	// (0x0001886c) fep_vkb_top_pane_g3_ParamLimits

0x5592,	// (0x0001886c) fep_vkb_top_pane_g3

0x0003,

0xfb07,	// (0x00022de1) fep_vkb_top_pane_g_ParamLimits

0xfb07,	// (0x00022de1) fep_vkb_top_pane_g

0x55b0,	// (0x0001888a) fep_vkb_top_text_pane_ParamLimits

0x55b0,	// (0x0001888a) fep_vkb_top_text_pane

0xc283,	// (0x0001f55d) fep_vkb_side_pane_g1_ParamLimits

0xc283,	// (0x0001f55d) fep_vkb_side_pane_g1

0x560a,	// (0x000188e4) grid_vkb_side_pane_ParamLimits

0x560a,	// (0x000188e4) grid_vkb_side_pane

0xf20a,	// (0x000224e4) bg_popup_fep_shadow_pane_g2

0xf213,	// (0x000224ed) bg_popup_fep_shadow_pane_g3

0xf21b,	// (0x000224f5) bg_popup_fep_shadow_pane_g4

0xf224,	// (0x000224fe) bg_popup_fep_shadow_pane_g5

0xf22e,	// (0x00022508) bg_popup_fep_shadow_pane_g6

0xf236,	// (0x00022510) bg_popup_fep_shadow_pane_g7

0xe53d,	// (0x00021817) bg_popup_fep_shadow_pane_g8

0x5669,	// (0x00018943) grid_vkb_keypad_number_pane_ParamLimits

0x5669,	// (0x00018943) grid_vkb_keypad_number_pane

0x567d,	// (0x00018957) grid_vkb_keypad_pane_ParamLimits

0x567d,	// (0x00018957) grid_vkb_keypad_pane

0x56a3,	// (0x0001897d) fep_vkb_bottom_pane_g1_ParamLimits

0x56a3,	// (0x0001897d) fep_vkb_bottom_pane_g1

0x56cc,	// (0x000189a6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x56cc,	// (0x000189a6) grid_vkb_keypad_bottom_left_pane

0x56e1,	// (0x000189bb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x56e1,	// (0x000189bb) grid_vkb_keypad_bottom_right_pane

0x56f6,	// (0x000189d0) fep_vkb_top_text_pane_g1

0xc2ca,	// (0x0001f5a4) fep_vkb_top_text_pane_t1

0xc2dc,	// (0x0001f5b6) cell_vkb_side_pane_ParamLimits

0xc2dc,	// (0x0001f5b6) cell_vkb_side_pane

0x5327,	// (0x00018601) cell_vkb_side_pane_g1

0x5765,	// (0x00018a3f) cell_vkb_keypad_pane_ParamLimits

0x5765,	// (0x00018a3f) cell_vkb_keypad_pane

0x57f2,	// (0x00018acc) cell_vkb_keypad_pane_g1

0x0008,

0xfb34,	// (0x00022e0e) bg_popup_fep_shadow_pane_g

0xf248,	// (0x00022522) cell_hwr_side_pane_g1

0xf248,	// (0x00022522) cell_hwr_side_pane_g2

0x57fc,	// (0x00018ad6) cell_vkb_keypad_pane_t1

0xc2f2,	// (0x0001f5cc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2f2,	// (0x0001f5cc) cell_vkb_keypad_bottom_left_pane

0xc307,	// (0x0001f5e1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc307,	// (0x0001f5e1) cell_vkb_keypad_bottom_right_pane

0x5327,	// (0x00018601) cell_vkb_keypad_bottom_left_pane_g1

0x5327,	// (0x00018601) cell_vkb_keypad_bottom_right_pane_g1

0x5860,	// (0x00018b3a) cell_vkb_keypad_number_pane_ParamLimits

0x5860,	// (0x00018b3a) cell_vkb_keypad_number_pane

0x587f,	// (0x00018b59) cell_vkb_keypad_number_pane_g1

0x5889,	// (0x00018b63) cell_vkb_keypad_number_pane_g2

0x5892,	// (0x00018b6c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb26,	// (0x00022e00) cell_vkb_keypad_number_pane_g

0x57fc,	// (0x00018ad6) cell_vkb_keypad_number_pane_t1

0x58bc,	// (0x00018b96) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x00022e21) cell_hwr_side_pane_g

0x58d5,	// (0x00018baf) cell_hwr_side_pane_t1

0xf252,	// (0x0002252c) cell_hwr_side_pane_t1_copy1

0xf260,	// (0x0002253a) cell_hwr_candidate_pane_g1

0xf28f,	// (0x00022569) cell_hwr_candidate_pane_t1

0x5327,	// (0x00018601) cell_vkb_candidate_pane_g2

0x5919,	// (0x00018bf3) cell_vkb_candidate_pane_t1

0xef02,	// (0x000221dc) bg_popup_fep_shadow_pane_ParamLimits

0xef02,	// (0x000221dc) bg_popup_fep_shadow_pane

0xf117,	// (0x000223f1) bg_fep_hwr_top_pane_g4

0x53ac,	// (0x00018686) bg_hwr_side_pane_g1_ParamLimits

0x53ac,	// (0x00018686) bg_hwr_side_pane_g1

0xa10d,	// (0x0001d3e7) cell_hwr_side_pane_ParamLimits

0xa10d,	// (0x0001d3e7) cell_hwr_side_pane

0xf161,	// (0x0002243b) fep_hwr_write_pane_g1_ParamLimits

0xf161,	// (0x0002243b) fep_hwr_write_pane_g1

0xf16e,	// (0x00022448) fep_hwr_write_pane_g2_ParamLimits

0xf16e,	// (0x00022448) fep_hwr_write_pane_g2

0xf17b,	// (0x00022455) fep_hwr_write_pane_g3_ParamLimits

0xf17b,	// (0x00022455) fep_hwr_write_pane_g3

0xa12d,	// (0x0001d407) fep_hwr_write_pane_g4_ParamLimits

0xa12d,	// (0x0001d407) fep_hwr_write_pane_g4

0x0005,

0xfaf3,	// (0x00022dcd) fep_hwr_write_pane_g_ParamLimits

0xfaf3,	// (0x00022dcd) fep_hwr_write_pane_g

0xf117,	// (0x000223f1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf117,	// (0x000223f1) bg_fep_hwr_candidate_pane_g2

0xf189,	// (0x00022463) cell_hwr_candidate_pane_ParamLimits

0xf189,	// (0x00022463) cell_hwr_candidate_pane

0xf1db,	// (0x000224b5) fep_hwr_candidate_pane_g1_ParamLimits

0x540c,	// (0x000186e6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x540c,	// (0x000186e6) bg_popup_fep_shadow_pane_cp2

0x55a2,	// (0x0001887c) fep_vkb_top_pane_g4_ParamLimits

0x55a2,	// (0x0001887c) fep_vkb_top_pane_g4

0x55e8,	// (0x000188c2) fep_vkb_side_pane_g2_ParamLimits

0x55e8,	// (0x000188c2) fep_vkb_side_pane_g2

0xaf3b,	// (0x0001e215) list_setting_pane_t4_ParamLimits

0xaf3b,	// (0x0001e215) list_setting_pane_t4

0xafb7,	// (0x0001e291) list_setting_number_pane_t5_ParamLimits

0xafb7,	// (0x0001e291) list_setting_number_pane_t5

0x1889,	// (0x00014b63) list_double_heading_pane_cp2_ParamLimits

0x1889,	// (0x00014b63) list_double_heading_pane_cp2

0x5927,	// (0x00018c01) list_double_heading_pane_g1_cp2_ParamLimits

0x5927,	// (0x00018c01) list_double_heading_pane_g1_cp2

0x5933,	// (0x00018c0d) list_double_heading_pane_g2_cp2_ParamLimits

0x5933,	// (0x00018c0d) list_double_heading_pane_g2_cp2

0x5947,	// (0x00018c21) list_double_heading_pane_t1_cp2_ParamLimits

0x5947,	// (0x00018c21) list_double_heading_pane_t1_cp2

0x595d,	// (0x00018c37) list_double_heading_pane_t2_cp2_ParamLimits

0x595d,	// (0x00018c37) list_double_heading_pane_t2_cp2

0xc6c9,	// (0x0001f9a3) aid_value_unit2

0xdebb,	// (0x00021195) popup_preview_fixed_window

0xc88e,	// (0x0001fb68) bg_popup_preview_window_pane_cp02

0x596f,	// (0x00018c49) list_preview_fixed_pane

0x59b5,	// (0x00018c8f) list_empty_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_empty_pane_fp

0x59b5,	// (0x00018c8f) list_single_cale_day_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_cale_day_pane_fp

0x59b5,	// (0x00018c8f) list_single_graphic_heading_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_graphic_heading_pane_fp

0x59b5,	// (0x00018c8f) list_single_graphic_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_graphic_pane_fp

0x59b5,	// (0x00018c8f) list_single_heading_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_heading_pane_fp

0x59b5,	// (0x00018c8f) list_single_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_pane_fp

0x59ce,	// (0x00018ca8) list_single_pane_fp_g1_ParamLimits

0x59ce,	// (0x00018ca8) list_single_pane_fp_g1

0xe699,	// (0x00021973) list_single_pane_fp_g2_ParamLimits

0xe699,	// (0x00021973) list_single_pane_fp_g2

0x59da,	// (0x00018cb4) list_single_pane_fp_g3_ParamLimits

0x59da,	// (0x00018cb4) list_single_pane_fp_g3

0x59ee,	// (0x00018cc8) list_single_pane_fp_g4_ParamLimits

0x59ee,	// (0x00018cc8) list_single_pane_fp_g4

0x0003,

0xfb5a,	// (0x00022e34) list_single_pane_fp_g_ParamLimits

0xfb5a,	// (0x00022e34) list_single_pane_fp_g

0x59fa,	// (0x00018cd4) list_single_pane_fp_t1_ParamLimits

0x59fa,	// (0x00018cd4) list_single_pane_fp_t1

0x5a11,	// (0x00018ceb) list_single_graphic_pane_fp_g1_ParamLimits

0x5a11,	// (0x00018ceb) list_single_graphic_pane_fp_g1

0x59ce,	// (0x00018ca8) list_single_graphic_pane_fp_g2_ParamLimits

0x59ce,	// (0x00018ca8) list_single_graphic_pane_fp_g2

0xe699,	// (0x00021973) list_single_graphic_pane_fp_g3_ParamLimits

0xe699,	// (0x00021973) list_single_graphic_pane_fp_g3

0x59da,	// (0x00018cb4) list_single_graphic_pane_fp_g4_ParamLimits

0x59da,	// (0x00018cb4) list_single_graphic_pane_fp_g4

0x59ee,	// (0x00018cc8) list_single_graphic_pane_fp_g5_ParamLimits

0x59ee,	// (0x00018cc8) list_single_graphic_pane_fp_g5

0x0004,

0xfb63,	// (0x00022e3d) list_single_graphic_pane_fp_g_ParamLimits

0xfb63,	// (0x00022e3d) list_single_graphic_pane_fp_g

0x5a1d,	// (0x00018cf7) list_single_graphic_pane_fp_t1_ParamLimits

0x5a1d,	// (0x00018cf7) list_single_graphic_pane_fp_t1

0x5a11,	// (0x00018ceb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5a11,	// (0x00018ceb) list_single_graphic_heading_pane_fp_g1

0x59ce,	// (0x00018ca8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x59ce,	// (0x00018ca8) list_single_graphic_heading_pane_fp_g2

0xe699,	// (0x00021973) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe699,	// (0x00021973) list_single_graphic_heading_pane_fp_g3

0x59da,	// (0x00018cb4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x59da,	// (0x00018cb4) list_single_graphic_heading_pane_fp_g4

0x59ee,	// (0x00018cc8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x59ee,	// (0x00018cc8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb63,	// (0x00022e3d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x00022e3d) list_single_graphic_heading_pane_fp_g

0x5a33,	// (0x00018d0d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a33,	// (0x00018d0d) list_single_graphic_heading_pane_fp_t1

0x5a49,	// (0x00018d23) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a49,	// (0x00018d23) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6e,	// (0x00022e48) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6e,	// (0x00022e48) list_single_graphic_heading_pane_fp_t

0x5a5b,	// (0x00018d35) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a5b,	// (0x00018d35) list_single_cale_day_pane_fp_g1

0x5a93,	// (0x00018d6d) list_single_cale_day_pane_fp_g2_ParamLimits

0x5a93,	// (0x00018d6d) list_single_cale_day_pane_fp_g2

0x5a9f,	// (0x00018d79) list_single_cale_day_pane_fp_g3_ParamLimits

0x5a9f,	// (0x00018d79) list_single_cale_day_pane_fp_g3

0x5ac7,	// (0x00018da1) list_single_cale_day_pane_fp_g4_ParamLimits

0x5ac7,	// (0x00018da1) list_single_cale_day_pane_fp_g4

0x5aeb,	// (0x00018dc5) list_single_cale_day_pane_fp_g5_ParamLimits

0x5aeb,	// (0x00018dc5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb73,	// (0x00022e4d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb73,	// (0x00022e4d) list_single_cale_day_pane_fp_g

0x5b0f,	// (0x00018de9) list_single_cale_day_pane_fp_t1_ParamLimits

0x5b0f,	// (0x00018de9) list_single_cale_day_pane_fp_t1

0x5b35,	// (0x00018e0f) list_single_cale_day_pane_fp_t2_ParamLimits

0x5b35,	// (0x00018e0f) list_single_cale_day_pane_fp_t2

0x5b4e,	// (0x00018e28) list_single_cale_day_pane_fp_t3_ParamLimits

0x5b4e,	// (0x00018e28) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7e,	// (0x00022e58) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7e,	// (0x00022e58) list_single_cale_day_pane_fp_t

0x59ce,	// (0x00018ca8) list_empty_pane_fp_g1_ParamLimits

0x59ce,	// (0x00018ca8) list_empty_pane_fp_g1

0x5b67,	// (0x00018e41) list_empty_pane_fp_t1

0x5bb7,	// (0x00018e91) list_empty_pane_fp_t2

0x0001,

0xfb85,	// (0x00022e5f) list_empty_pane_fp_t

0x59ce,	// (0x00018ca8) list_single_heading_pane_fp_g1_ParamLimits

0x59ce,	// (0x00018ca8) list_single_heading_pane_fp_g1

0xe699,	// (0x00021973) list_single_heading_pane_fp_g2_ParamLimits

0xe699,	// (0x00021973) list_single_heading_pane_fp_g2

0x59da,	// (0x00018cb4) list_single_heading_pane_fp_g3_ParamLimits

0x59da,	// (0x00018cb4) list_single_heading_pane_fp_g3

0x0002,

0xfb8a,	// (0x00022e64) list_single_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00022e64) list_single_heading_pane_fp_g

0x5bc5,	// (0x00018e9f) list_single_heading_pane_fp_t1_ParamLimits

0x5bc5,	// (0x00018e9f) list_single_heading_pane_fp_t1

0x5bd7,	// (0x00018eb1) list_single_heading_pane_fp_t2_ParamLimits

0x5bd7,	// (0x00018eb1) list_single_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00022e6b) list_single_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00022e6b) list_single_heading_pane_fp_t

0x13dc,	// (0x000146b6) aid_size_cell_fast

0xc871,	// (0x0001fb4b) soft_indicator_pane_cp1_t1

0x1419,	// (0x000146f3) cell_app_pane_cp2_ParamLimits

0x1419,	// (0x000146f3) cell_app_pane_cp2

0xf082,	// (0x0002235c) fep_hwr_candidate_drop_down_list_pane

0xf1f5,	// (0x000224cf) fep_hwr_candidate_pane_g3_ParamLimits

0xf1f5,	// (0x000224cf) fep_hwr_candidate_pane_g3

0xc912,	// (0x0001fbec) fep_hwr_candidate_pane_g4_ParamLimits

0xc912,	// (0x0001fbec) fep_hwr_candidate_pane_g4

0x0002,

0xfb00,	// (0x00022dda) fep_hwr_candidate_pane_g_ParamLimits

0xfb00,	// (0x00022dda) fep_hwr_candidate_pane_g

0x549c,	// (0x00018776) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x549c,	// (0x00018776) fep_vkb_candidate_drop_down_list_pane

0x58c4,	// (0x00018b9e) fep_vkb_candidate_pane_g3

0x58cc,	// (0x00018ba6) fep_vkb_candidate_pane_g4

0x0002,

0xfb2d,	// (0x00022e07) fep_vkb_candidate_pane_g

0xf260,	// (0x0002253a) cell_hwr_candidate_pane_g1_ParamLimits

0xf26e,	// (0x00022548) cell_hwr_candidate_pane_g3_ParamLimits

0xf26e,	// (0x00022548) cell_hwr_candidate_pane_g3

0x7a93,	// (0x0001ad6d) cell_hwr_candidate_pane_g4_ParamLimits

0x7a93,	// (0x0001ad6d) cell_hwr_candidate_pane_g4

0x0002,

0xfb4c,	// (0x00022e26) cell_hwr_candidate_pane_g_ParamLimits

0xfb4c,	// (0x00022e26) cell_hwr_candidate_pane_g

0x58e3,	// (0x00018bbd) cell_vkb_candidate_pane_g3_ParamLimits

0x58e3,	// (0x00018bbd) cell_vkb_candidate_pane_g3

0x58fe,	// (0x00018bd8) cell_vkb_candidate_pane_g4_ParamLimits

0x58fe,	// (0x00018bd8) cell_vkb_candidate_pane_g4

0x5bed,	// (0x00018ec7) cell_app_pane_cp2_g1_ParamLimits

0x5bed,	// (0x00018ec7) cell_app_pane_cp2_g1

0x5c0b,	// (0x00018ee5) cell_app_pane_cp2_g2_ParamLimits

0x5c0b,	// (0x00018ee5) cell_app_pane_cp2_g2

0x0001,

0xfb96,	// (0x00022e70) cell_app_pane_cp2_g_ParamLimits

0xfb96,	// (0x00022e70) cell_app_pane_cp2_g

0x5c17,	// (0x00018ef1) cell_app_pane_cp2_t1_ParamLimits

0x5c17,	// (0x00018ef1) cell_app_pane_cp2_t1

0xe46a,	// (0x00021744) grid_highlight_pane_cp1_ParamLimits

0xe46a,	// (0x00021744) grid_highlight_pane_cp1

0xf2ad,	// (0x00022587) cell_hwr_candidate_pane_cp1_ParamLimits

0xf2ad,	// (0x00022587) cell_hwr_candidate_pane_cp1

0xf260,	// (0x0002253a) fep_hwr_candidate_drop_down_list_pane_g1

0xf2d1,	// (0x000225ab) fep_hwr_candidate_drop_down_list_pane_g2

0xf2de,	// (0x000225b8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x00022e75) fep_hwr_candidate_drop_down_list_pane_g

0xf2eb,	// (0x000225c5) fep_hwr_candidate_drop_down_list_scroll_pane

0xf2f4,	// (0x000225ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf2f4,	// (0x000225ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xf301,	// (0x000225db) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf301,	// (0x000225db) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xf30e,	// (0x000225e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf30e,	// (0x000225e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf31b,	// (0x000225f5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf31b,	// (0x000225f5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf336,	// (0x00022610) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf336,	// (0x00022610) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf351,	// (0x0002262b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf351,	// (0x0002262b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf36c,	// (0x00022646) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf36c,	// (0x00022646) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf387,	// (0x00022661) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf387,	// (0x00022661) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x00022e7c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x00022e7c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5c29,	// (0x00018f03) cell_vkb_candidate_pane_cp1_ParamLimits

0x5c29,	// (0x00018f03) cell_vkb_candidate_pane_cp1

0x55a2,	// (0x0001887c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x55a2,	// (0x0001887c) fep_vkb_candidate_drop_down_list_pane_g1

0x5c4f,	// (0x00018f29) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5c4f,	// (0x00018f29) fep_vkb_candidate_drop_down_list_pane_g2

0x5c5c,	// (0x00018f36) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5c5c,	// (0x00018f36) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00022e8d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x00022e8d) fep_vkb_candidate_drop_down_list_pane_g

0x5c69,	// (0x00018f43) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5c69,	// (0x00018f43) fep_vkb_candidate_drop_down_list_scroll_pane

0x5c76,	// (0x00018f50) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c76,	// (0x00018f50) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5c83,	// (0x00018f5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c83,	// (0x00018f5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5c8f,	// (0x00018f69) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c8f,	// (0x00018f69) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5b75,	// (0x00018e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5b75,	// (0x00018e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5b96,	// (0x00018e70) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5b96,	// (0x00018e70) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c9b,	// (0x00018f75) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c9b,	// (0x00018f75) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5cbc,	// (0x00018f96) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5cbc,	// (0x00018f96) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5cdd,	// (0x00018fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5cdd,	// (0x00018fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00022e94) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00022e94) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa822,	// (0x0001dafc) title_pane_g1_ParamLimits

0xa835,	// (0x0001db0f) title_pane_g2_ParamLimits

0xf527,	// (0x00022801) title_pane_g_ParamLimits

0x1842,	// (0x00014b1c) aid_call2_pane

0x184a,	// (0x00014b24) aid_call_pane

0x1852,	// (0x00014b2c) popup_clock_analogue_window_g1

0x1852,	// (0x00014b2c) popup_clock_analogue_window_g2

0xe741,	// (0x00021a1b) popup_clock_analogue_window_g3

0xe74a,	// (0x00021a24) popup_clock_analogue_window_g4

0xc6db,	// (0x0001f9b5) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x000229a6) popup_clock_analogue_window_g

0xe752,	// (0x00021a2c) popup_clock_analogue_window_t1

0xe760,	// (0x00021a3a) clock_digital_number_pane_ParamLimits

0xe760,	// (0x00021a3a) clock_digital_number_pane

0xe76c,	// (0x00021a46) clock_digital_number_pane_cp02_ParamLimits

0xe76c,	// (0x00021a46) clock_digital_number_pane_cp02

0xe778,	// (0x00021a52) clock_digital_number_pane_cp03_ParamLimits

0xe778,	// (0x00021a52) clock_digital_number_pane_cp03

0xe784,	// (0x00021a5e) clock_digital_number_pane_cp04_ParamLimits

0xe784,	// (0x00021a5e) clock_digital_number_pane_cp04

0xe790,	// (0x00021a6a) clock_digital_separator_pane_ParamLimits

0xe790,	// (0x00021a6a) clock_digital_separator_pane

0xe79c,	// (0x00021a76) popup_clock_digital_window_t1_ParamLimits

0xe79c,	// (0x00021a76) popup_clock_digital_window_t1

0xc6db,	// (0x0001f9b5) clock_digital_number_pane_g1

0xc6db,	// (0x0001f9b5) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x000229b1) clock_digital_number_pane_g

0xc6db,	// (0x0001f9b5) clock_digital_separator_pane_g1

0xc6db,	// (0x0001f9b5) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x000229b1) clock_digital_separator_pane_g

0xb56e,	// (0x0001e848) aid_fill_nsta_ParamLimits

0xb6a4,	// (0x0001e97e) indicator_nsta_pane_ParamLimits

0x2568,	// (0x00015842) popup_clock_analogue_window

0x2568,	// (0x00015842) popup_clock_digital_window

0xbfa3,	// (0x0001f27d) grid_indicator_nsta_pane_ParamLimits

0x4d30,	// (0x0001800a) clock_nsta_pane_t2

0x0001,

0xfa80,	// (0x00022d5a) clock_nsta_pane_t

0xe70e,	// (0x000219e8) aid_size_max_handle

0x97e0,	// (0x0001caba) aid_size_min_handle

0x1f1c,	// (0x000151f6) editor_scroll_pane

0x5cf8,	// (0x00018fd2) ex_editor_pane

0x1349,	// (0x00014623) scroll_pane_cp13

0xe382,	// (0x0002165c) scroll_pane_cp14

0x1881,	// (0x00014b5b) scroll_pane_cp36

0xb33a,	// (0x0001e614) list_single_graphic_hl_pane_cp2_ParamLimits

0xb33a,	// (0x0001e614) list_single_graphic_hl_pane_cp2

0xbe2c,	// (0x0001f106) list_single_graphic_hl_pane_ParamLimits

0xbe2c,	// (0x0001f106) list_single_graphic_hl_pane

0x5d00,	// (0x00018fda) aid_size_min_hl_cp1

0x5d09,	// (0x00018fe3) list_highlight_pane_cp34_ParamLimits

0x5d09,	// (0x00018fe3) list_highlight_pane_cp34

0x5d1a,	// (0x00018ff4) list_single_graphic_hl_pane_g1_ParamLimits

0x5d1a,	// (0x00018ff4) list_single_graphic_hl_pane_g1

0xc322,	// (0x0001f5fc) list_single_graphic_hl_pane_g2_ParamLimits

0xc322,	// (0x0001f5fc) list_single_graphic_hl_pane_g2

0xc322,	// (0x0001f5fc) list_single_graphic_hl_pane_g3_ParamLimits

0xc322,	// (0x0001f5fc) list_single_graphic_hl_pane_g3

0x1e53,	// (0x0001512d) list_single_graphic_hl_pane_g4_ParamLimits

0x1e53,	// (0x0001512d) list_single_graphic_hl_pane_g4

0xc32e,	// (0x0001f608) list_single_graphic_hl_pane_g5_ParamLimits

0xc32e,	// (0x0001f608) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x00022ea5) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x00022ea5) list_single_graphic_hl_pane_g

0x3545,	// (0x0001681f) list_single_graphic_hl_pane_t1_ParamLimits

0x3545,	// (0x0001681f) list_single_graphic_hl_pane_t1

0x5d5d,	// (0x00019037) aid_size_min_hl_cp2

0x5d66,	// (0x00019040) list_highlight_pane_cp34_cp2_ParamLimits

0x5d66,	// (0x00019040) list_highlight_pane_cp34_cp2

0x5d1a,	// (0x00018ff4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5d1a,	// (0x00018ff4) list_single_graphic_hl_pane_g1_cp2

0x5d73,	// (0x0001904d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5d73,	// (0x0001904d) list_single_graphic_hl_pane_g2_cp2

0x5d7f,	// (0x00019059) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5d7f,	// (0x00019059) list_single_graphic_hl_pane_g3_cp2

0x5d8d,	// (0x00019067) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5d8d,	// (0x00019067) list_single_graphic_hl_pane_g4_cp2

0x5d99,	// (0x00019073) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5d99,	// (0x00019073) list_single_graphic_hl_pane_g5_cp2

0x97e9,	// (0x0001cac3) control_pane_g4_ParamLimits

0x97e9,	// (0x0001cac3) control_pane_g4

0x224b,	// (0x00015525) bg_popup_sub_pane_cp10_ParamLimits

0x5331,	// (0x0001860b) list_choice_list_pane_ParamLimits

0x5340,	// (0x0001861a) scroll_pane_cp23

0xc88e,	// (0x0001fb68) bg_popup_preview_window_pane_cp02_ParamLimits

0x596f,	// (0x00018c49) list_preview_fixed_pane_ParamLimits

0x5985,	// (0x00018c5f) list_preview_fixed_pane_cp_ParamLimits

0x5985,	// (0x00018c5f) list_preview_fixed_pane_cp

0x5991,	// (0x00018c6b) popup_preview_fixed_window_g1_ParamLimits

0x5991,	// (0x00018c6b) popup_preview_fixed_window_g1

0x599d,	// (0x00018c77) popup_preview_fixed_window_g2_ParamLimits

0x599d,	// (0x00018c77) popup_preview_fixed_window_g2

0x0002,

0xfb53,	// (0x00022e2d) popup_preview_fixed_window_g_ParamLimits

0xfb53,	// (0x00022e2d) popup_preview_fixed_window_g

0xe66c,	// (0x00021946) aid_navi_side_left_pane_ParamLimits

0xe681,	// (0x0002195b) aid_navi_side_right_pane_ParamLimits

0xe6a5,	// (0x0002197f) navi_icon_pane_stacon_ParamLimits

0xe6b9,	// (0x00021993) navi_navi_pane_stacon_ParamLimits

0xe6a5,	// (0x0002197f) navi_text_pane_stacon_ParamLimits

0xddac,	// (0x00021086) main_text_info_pane

0x5dc3,	// (0x0001909d) listscroll_text_info_pane

0x5dcb,	// (0x000190a5) list_text_info_pane_ParamLimits

0x5dcb,	// (0x000190a5) list_text_info_pane

0x5dda,	// (0x000190b4) scroll_pane_cp24_ParamLimits

0x5dda,	// (0x000190b4) scroll_pane_cp24

0xc342,	// (0x0001f61c) list_text_info_pane_t1_ParamLimits

0xc342,	// (0x0001f61c) list_text_info_pane_t1

0x9914,	// (0x0001cbee) popup_fast_swap2_window_ParamLimits

0x9914,	// (0x0001cbee) popup_fast_swap2_window

0x5e1d,	// (0x000190f7) aid_size_cell_fast2

0xc6d1,	// (0x0001f9ab) bg_popup_window_pane_cp17

0x2cd6,	// (0x00015fb0) heading_pane_cp2

0x5e27,	// (0x00019101) listscroll_fast2_pane

0x5e2f,	// (0x00019109) grid_fast2_pane

0x5e39,	// (0x00019113) listscroll_fast2_pane_g1

0x5e43,	// (0x0001911d) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x00022eb0) listscroll_fast2_pane_g

0x1349,	// (0x00014623) scroll_pane_cp26

0x5e4d,	// (0x00019127) cell_fast2_pane_ParamLimits

0x5e4d,	// (0x00019127) cell_fast2_pane

0x5e64,	// (0x0001913e) cell_fast2_pane_g1

0x5e6d,	// (0x00019147) cell_fast2_pane_g2

0x5e76,	// (0x00019150) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x00022eb5) cell_fast2_pane_g

0xe149,	// (0x00021423) grid_highlight_pane_cp9

0xea78,	// (0x00021d52) main_eswt_pane_ParamLimits

0xea78,	// (0x00021d52) main_eswt_pane

0x5def,	// (0x000190c9) list_single_text_info_pane

0x5e7e,	// (0x00019158) eswt_ctrl_button_pane

0x5e7e,	// (0x00019158) eswt_ctrl_canvas_pane

0x5e86,	// (0x00019160) eswt_ctrl_combo_pane

0x5e7e,	// (0x00019158) eswt_ctrl_default_pane

0x5e7e,	// (0x00019158) eswt_ctrl_label_pane

0x5e8e,	// (0x00019168) eswt_ctrl_wait_pane

0x5e96,	// (0x00019170) eswt_shell_pane

0xc6d1,	// (0x0001f9ab) listscroll_eswt_app_pane

0x5eb6,	// (0x00019190) popup_eswt_tasktip_window_ParamLimits

0x5eb6,	// (0x00019190) popup_eswt_tasktip_window

0x28e5,	// (0x00015bbf) bg_popup_window_pane_cp18

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_ParamLimits

0x5ec7,	// (0x000191a1) eswt_control_pane_g1

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_ParamLimits

0x5ed4,	// (0x000191ae) eswt_control_pane_g2

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_ParamLimits

0x5ee1,	// (0x000191bb) eswt_control_pane_g3

0x5eee,	// (0x000191c8) eswt_control_pane_g4_ParamLimits

0x5eee,	// (0x000191c8) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x00022ebc) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x00022ebc) eswt_control_pane_g

0xe46a,	// (0x00021744) bg_button_pane_ParamLimits

0xe46a,	// (0x00021744) bg_button_pane

0xe15e,	// (0x00021438) common_borders_pane_copy2_ParamLimits

0xe15e,	// (0x00021438) common_borders_pane_copy2

0x5efb,	// (0x000191d5) control_button_pane_g1_ParamLimits

0x5efb,	// (0x000191d5) control_button_pane_g1

0x5f07,	// (0x000191e1) control_button_pane_g2_ParamLimits

0x5f07,	// (0x000191e1) control_button_pane_g2

0x5f13,	// (0x000191ed) control_button_pane_g3_ParamLimits

0x5f13,	// (0x000191ed) control_button_pane_g3

0x0002,

0xfbeb,	// (0x00022ec5) control_button_pane_g_ParamLimits

0xfbeb,	// (0x00022ec5) control_button_pane_g

0x5f27,	// (0x00019201) control_button_pane_t1

0x5f35,	// (0x0001920f) control_button_pane_t2

0x0001,

0xfbf2,	// (0x00022ecc) control_button_pane_t

0x27bd,	// (0x00015a97) bg_button_pane_g1

0x27cd,	// (0x00015aa7) bg_button_pane_g2

0x27c5,	// (0x00015a9f) bg_button_pane_g3

0x27dd,	// (0x00015ab7) bg_button_pane_g4

0x27d5,	// (0x00015aaf) bg_button_pane_g5

0x27e5,	// (0x00015abf) bg_button_pane_g6

0x27ed,	// (0x00015ac7) bg_button_pane_g7

0x27fd,	// (0x00015ad7) bg_button_pane_g8

0x27f5,	// (0x00015acf) bg_button_pane_g9

0x0008,

0xf835,	// (0x00022b0f) bg_button_pane_g

0x52ec,	// (0x000185c6) common_borders_pane_ParamLimits

0x52ec,	// (0x000185c6) common_borders_pane

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy1_ParamLimits

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy1

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy1_ParamLimits

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy1

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy1_ParamLimits

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy1

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy1_ParamLimits

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy1

0x5327,	// (0x00018601) bg_eswt_ctrl_canvas_pane_g1

0x52ec,	// (0x000185c6) common_borders_pane_cp2_ParamLimits

0x52ec,	// (0x000185c6) common_borders_pane_cp2

0x52ec,	// (0x000185c6) common_borders_pane_cp3_ParamLimits

0x52ec,	// (0x000185c6) common_borders_pane_cp3

0x5f43,	// (0x0001921d) separator_horizontal_pane

0x5f4b,	// (0x00019225) separator_vertical_pane

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy2_ParamLimits

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy2

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy2_ParamLimits

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy2

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy2_ParamLimits

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy2

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy2_ParamLimits

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy2

0xc6d1,	// (0x0001f9ab) common_borders_pane_cp4

0x5f54,	// (0x0001922e) separator_horizontal_pane_g1

0x5f5d,	// (0x00019237) separator_horizontal_pane_g2

0x5f66,	// (0x00019240) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x00022ed1) separator_horizontal_pane_g

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy3_ParamLimits

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy3

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy3_ParamLimits

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy3

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy3_ParamLimits

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy3

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy3_ParamLimits

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy3

0xc6d1,	// (0x0001f9ab) common_borders_pane_cp5

0x5f6f,	// (0x00019249) separator_vertical_pane_g1

0x5f78,	// (0x00019252) separator_vertical_pane_g2

0x5f81,	// (0x0001925b) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x00022ed8) separator_vertical_pane_g

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy4_ParamLimits

0x5ec7,	// (0x000191a1) eswt_control_pane_g1_copy4

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy4_ParamLimits

0x5ed4,	// (0x000191ae) eswt_control_pane_g2_copy4

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy4_ParamLimits

0x5ee1,	// (0x000191bb) eswt_control_pane_g3_copy4

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy4_ParamLimits

0x5eee,	// (0x000191c8) eswt_control_pane_g4_copy4

0xc364,	// (0x0001f63e) eswt_ctrl_combo_button_pane

0xc36c,	// (0x0001f646) eswt_ctrl_input_pane

0xc374,	// (0x0001f64e) popup_choice_list_window_cp70

0xc37c,	// (0x0001f656) eswt_ctrl_input_pane_t1

0xc6d1,	// (0x0001f9ab) input_focus_pane_cp70

0x52ec,	// (0x000185c6) bg_button_pane_cp70_ParamLimits

0x52ec,	// (0x000185c6) bg_button_pane_cp70

0xc38a,	// (0x0001f664) eswt_ctrl_combo_button_pane_g1

0x5fb8,	// (0x00019292) wait_bar_pane_cp70

0x28e5,	// (0x00015bbf) bg_popup_window_pane_cp70_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_window_pane_cp70

0x5fc0,	// (0x0001929a) popup_eswt_tasktip_window_t1

0x5fd6,	// (0x000192b0) wait_bar_pane_cp71_ParamLimits

0x5fd6,	// (0x000192b0) wait_bar_pane_cp71

0x5fe2,	// (0x000192bc) grid_eswt_app_pane

0x1686,	// (0x00014960) scroll_pane_cp70

0xc392,	// (0x0001f66c) cell_eswt_app_pane_ParamLimits

0xc392,	// (0x0001f66c) cell_eswt_app_pane

0xc3c4,	// (0x0001f69e) cell_eswt_app_pane_g1_ParamLimits

0xc3c4,	// (0x0001f69e) cell_eswt_app_pane_g1

0xc3f3,	// (0x0001f6cd) cell_eswt_app_pane_g2_ParamLimits

0xc3f3,	// (0x0001f6cd) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x00022edf) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x00022edf) cell_eswt_app_pane_g

0xc41c,	// (0x0001f6f6) cell_eswt_app_pane_t1_ParamLimits

0xc41c,	// (0x0001f6f6) cell_eswt_app_pane_t1

0x60a7,	// (0x00019381) grid_highlight_pane_cp70_ParamLimits

0x60a7,	// (0x00019381) grid_highlight_pane_cp70

0x1dde,	// (0x000150b8) set_content_pane_g1

0xb54a,	// (0x0001e824) status_small_volume_pane

0xa142,	// (0x0001d41c) status_small_volume_pane_g1

0xa14a,	// (0x0001d424) volume_small2_pane

0xa153,	// (0x0001d42d) volume_small2_pane_g1

0xa15c,	// (0x0001d436) volume_small2_pane_g2

0xa165,	// (0x0001d43f) volume_small2_pane_g3

0xa16e,	// (0x0001d448) volume_small2_pane_g4

0xa177,	// (0x0001d451) volume_small2_pane_g5

0xa180,	// (0x0001d45a) volume_small2_pane_g6

0xa189,	// (0x0001d463) volume_small2_pane_g7

0xa192,	// (0x0001d46c) volume_small2_pane_g8

0xa19b,	// (0x0001d475) volume_small2_pane_g9

0xa1a4,	// (0x0001d47e) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x00022ee4) volume_small2_pane_g

0x56f6,	// (0x000189d0) fep_vkb_top_text_pane_g1_ParamLimits

0xc2ca,	// (0x0001f5a4) fep_vkb_top_text_pane_t1_ParamLimits

0x59a9,	// (0x00018c83) popup_preview_fixed_window_g3_ParamLimits

0x59a9,	// (0x00018c83) popup_preview_fixed_window_g3

0x9fb4,	// (0x0001d28e) popup_toolbar_trans_pane

0xbc51,	// (0x0001ef2b) aid_height_set_list_ParamLimits

0x3c95,	// (0x00016f6f) aid_size_parent_ParamLimits

0x224b,	// (0x00015525) list_highlight_pane_cp2_ParamLimits

0x1dde,	// (0x000150b8) set_content_pane_g1_ParamLimits

0xbe40,	// (0x0001f11a) list_single_image_pane_ParamLimits

0xbe40,	// (0x0001f11a) list_single_image_pane

0xc44e,	// (0x0001f728) aid_size_cell_image_ParamLimits

0xc44e,	// (0x0001f728) aid_size_cell_image

0xc45b,	// (0x0001f735) grid_single_image_pane_ParamLimits

0xc45b,	// (0x0001f735) grid_single_image_pane

0xe490,	// (0x0002176a) list_single_image_pane_g1_ParamLimits

0xe490,	// (0x0002176a) list_single_image_pane_g1

0xe49c,	// (0x00021776) list_single_image_pane_g2_ParamLimits

0xe49c,	// (0x00021776) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x00022ef9) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x00022ef9) list_single_image_pane_g

0x60ce,	// (0x000193a8) list_single_image_pane_t1_ParamLimits

0x60ce,	// (0x000193a8) list_single_image_pane_t1

0xc469,	// (0x0001f743) cell_image_list_pane_ParamLimits

0xc469,	// (0x0001f743) cell_image_list_pane

0xc47f,	// (0x0001f759) cell_image_list_pane_g1

0xc488,	// (0x0001f762) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x00022efe) cell_image_list_pane_g

0x610e,	// (0x000193e8) aid_size_cell_tb_trans_pane

0xe46a,	// (0x00021744) bg_tb_trans_pane

0x6120,	// (0x000193fa) grid_tb_trans_pane

0x27bd,	// (0x00015a97) bg_tb_trans_pane_g1

0x27cd,	// (0x00015aa7) bg_tb_trans_pane_g2

0x27c5,	// (0x00015a9f) bg_tb_trans_pane_g3

0x27dd,	// (0x00015ab7) bg_tb_trans_pane_g4

0x27d5,	// (0x00015aaf) bg_tb_trans_pane_g5

0x27fd,	// (0x00015ad7) bg_tb_trans_pane_g6

0x27f5,	// (0x00015acf) bg_tb_trans_pane_g7

0x27e5,	// (0x00015abf) bg_tb_trans_pane_g8

0x27ed,	// (0x00015ac7) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x00022f03) bg_tb_trans_pane_g

0x6134,	// (0x0001940e) cell_toolbar_trans_pane_ParamLimits

0x6134,	// (0x0001940e) cell_toolbar_trans_pane

0x5327,	// (0x00018601) cell_toolbar_trans_pane_g1

0xc084,	// (0x0001f35e) list_form2_midp_pane_t1

0xc092,	// (0x0001f36c) list_form2_midp_pane_t2

0x0001,

0xfac6,	// (0x00022da0) list_form2_midp_pane_t

0x4f2f,	// (0x00018209) scroll_pane_cp51_ParamLimits

0x5149,	// (0x00018423) form2_midp_wait_pane_g1

0x5152,	// (0x0001842c) form2_midp_wait_pane_g2

0x515b,	// (0x00018435) form2_midp_wait_pane_g3

0x0002,

0xfadb,	// (0x00022db5) form2_midp_wait_pane_g

0xc741,	// (0x0001fa1b) list_highlight_pane_cp21_ParamLimits

0x5194,	// (0x0001846e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x51a3,	// (0x0001847d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3eb3,	// (0x0001718d) list_single_2graphic_im_pane_ParamLimits

0x3eb3,	// (0x0001718d) list_single_2graphic_im_pane

0xc491,	// (0x0001f76b) list_single_2graphic_im_pane_g1_ParamLimits

0xc491,	// (0x0001f76b) list_single_2graphic_im_pane_g1

0xc4a2,	// (0x0001f77c) list_single_2graphic_im_pane_g2_ParamLimits

0xc4a2,	// (0x0001f77c) list_single_2graphic_im_pane_g2

0xc4ae,	// (0x0001f788) list_single_2graphic_im_pane_g3_ParamLimits

0xc4ae,	// (0x0001f788) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x00022f16) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x00022f16) list_single_2graphic_im_pane_g

0xc4c2,	// (0x0001f79c) list_single_2graphic_im_pane_t1_ParamLimits

0xc4c2,	// (0x0001f79c) list_single_2graphic_im_pane_t1

0x59b5,	// (0x00018c8f) list_single_graphic_2heading_pane_fp_ParamLimits

0x59b5,	// (0x00018c8f) list_single_graphic_2heading_pane_fp

0x5a11,	// (0x00018ceb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5a11,	// (0x00018ceb) list_single_graphic_2heading_pane_fp_g1

0x59ce,	// (0x00018ca8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x59ce,	// (0x00018ca8) list_single_graphic_2heading_pane_fp_g2

0xe699,	// (0x00021973) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe699,	// (0x00021973) list_single_graphic_2heading_pane_fp_g3

0x59da,	// (0x00018cb4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x59da,	// (0x00018cb4) list_single_graphic_2heading_pane_fp_g4

0x59ee,	// (0x00018cc8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x59ee,	// (0x00018cc8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb63,	// (0x00022e3d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb63,	// (0x00022e3d) list_single_graphic_2heading_pane_fp_g

0x61c8,	// (0x000194a2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x61c8,	// (0x000194a2) list_single_graphic_2heading_pane_fp_t1

0x5a49,	// (0x00018d23) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a49,	// (0x00018d23) list_single_graphic_2heading_pane_fp_t2

0x61de,	// (0x000194b8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61de,	// (0x000194b8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x00022f1f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x00022f1f) list_single_graphic_2heading_pane_fp_t

0x53b8,	// (0x00018692) fep_hwr_write_pane_g5_ParamLimits

0x53b8,	// (0x00018692) fep_hwr_write_pane_g5

0x53c4,	// (0x0001869e) fep_hwr_write_pane_g6_ParamLimits

0x53c4,	// (0x0001869e) fep_hwr_write_pane_g6

0x5e96,	// (0x00019170) eswt_shell_pane_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_window_pane_cp18_ParamLimits

0x2cd6,	// (0x00015fb0) heading_pane_cp70

0x5fc0,	// (0x0001929a) popup_eswt_tasktip_window_t1_ParamLimits

0xb5cb,	// (0x0001e8a5) aid_touch_tab_arrow_left

0xb5df,	// (0x0001e8b9) aid_touch_tab_arrow_right

0xa859,	// (0x0001db33) title_pane_g3_ParamLimits

0xa859,	// (0x0001db33) title_pane_g3

0xe3c3,	// (0x0002169d) set_value_pane_g1

0x9fb4,	// (0x0001d28e) popup_toolbar_trans_pane_ParamLimits

0x610e,	// (0x000193e8) aid_size_cell_tb_trans_pane_ParamLimits

0xe46a,	// (0x00021744) bg_tb_trans_pane_ParamLimits

0x6120,	// (0x000193fa) grid_tb_trans_pane_ParamLimits

0xc88e,	// (0x0001fb68) cont_note_pane_ParamLimits

0xc88e,	// (0x0001fb68) cont_note_pane

0xe15e,	// (0x00021438) cont_snote2_single_text_pane_ParamLimits

0xe15e,	// (0x00021438) cont_snote2_single_text_pane

0xe15e,	// (0x00021438) cont_snote2_single_graphic_pane_ParamLimits

0xe15e,	// (0x00021438) cont_snote2_single_graphic_pane

0x2f06,	// (0x000161e0) cont_note_wait_pane_ParamLimits

0x2f06,	// (0x000161e0) cont_note_wait_pane

0x2f06,	// (0x000161e0) cont_note_image_pane_ParamLimits

0x2f06,	// (0x000161e0) cont_note_image_pane

0x61f4,	// (0x000194ce) popup_note2_window_g1_ParamLimits

0x61f4,	// (0x000194ce) popup_note2_window_g1

0x6225,	// (0x000194ff) popup_note2_window_t1_ParamLimits

0x6225,	// (0x000194ff) popup_note2_window_t1

0x626a,	// (0x00019544) popup_note2_window_t2_ParamLimits

0x626a,	// (0x00019544) popup_note2_window_t2

0x62af,	// (0x00019589) popup_note2_window_t3_ParamLimits

0x62af,	// (0x00019589) popup_note2_window_t3

0x62f4,	// (0x000195ce) popup_note2_window_t4_ParamLimits

0x62f4,	// (0x000195ce) popup_note2_window_t4

0xdf58,	// (0x00021232) popup_note2_window_t5_ParamLimits

0xdf58,	// (0x00021232) popup_note2_window_t5

0x0004,

0xfc51,	// (0x00022f2b) popup_note2_window_t_ParamLimits

0xfc51,	// (0x00022f2b) popup_note2_window_t

0x6323,	// (0x000195fd) popup_note2_image_window_g1_ParamLimits

0x6323,	// (0x000195fd) popup_note2_image_window_g1

0x632f,	// (0x00019609) popup_note2_image_window_g2_ParamLimits

0x632f,	// (0x00019609) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x00022f36) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x00022f36) popup_note2_image_window_g

0x6341,	// (0x0001961b) popup_note2_image_window_t1_ParamLimits

0x6341,	// (0x0001961b) popup_note2_image_window_t1

0x6359,	// (0x00019633) popup_note2_image_window_t2_ParamLimits

0x6359,	// (0x00019633) popup_note2_image_window_t2

0x6371,	// (0x0001964b) popup_note2_image_window_t3_ParamLimits

0x6371,	// (0x0001964b) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x00022f3b) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x00022f3b) popup_note2_image_window_t

0x2f14,	// (0x000161ee) popup_note2_wait_window_g1_ParamLimits

0x2f14,	// (0x000161ee) popup_note2_wait_window_g1

0x638d,	// (0x00019667) popup_note2_wait_window_g2_ParamLimits

0x638d,	// (0x00019667) popup_note2_wait_window_g2

0x2f2c,	// (0x00016206) popup_note2_wait_window_g3_ParamLimits

0x2f2c,	// (0x00016206) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x00022f42) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x00022f42) popup_note2_wait_window_g

0x6399,	// (0x00019673) popup_note2_wait_window_t1_ParamLimits

0x6399,	// (0x00019673) popup_note2_wait_window_t1

0x63b7,	// (0x00019691) popup_note2_wait_window_t2_ParamLimits

0x63b7,	// (0x00019691) popup_note2_wait_window_t2

0x63d5,	// (0x000196af) popup_note2_wait_window_t3_ParamLimits

0x63d5,	// (0x000196af) popup_note2_wait_window_t3

0x63e7,	// (0x000196c1) popup_note2_wait_window_t4_ParamLimits

0x63e7,	// (0x000196c1) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x00022f49) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x00022f49) popup_note2_wait_window_t

0x63f9,	// (0x000196d3) wait_bar2_pane_ParamLimits

0x63f9,	// (0x000196d3) wait_bar2_pane

0x6411,	// (0x000196eb) popup_snote2_single_text_window_g1_ParamLimits

0x6411,	// (0x000196eb) popup_snote2_single_text_window_g1

0x6439,	// (0x00019713) popup_snote2_single_text_window_t1_ParamLimits

0x6439,	// (0x00019713) popup_snote2_single_text_window_t1

0x6485,	// (0x0001975f) popup_snote2_single_text_window_t2_ParamLimits

0x6485,	// (0x0001975f) popup_snote2_single_text_window_t2

0x64d1,	// (0x000197ab) popup_snote2_single_text_window_t3_ParamLimits

0x64d1,	// (0x000197ab) popup_snote2_single_text_window_t3

0x6512,	// (0x000197ec) popup_snote2_single_text_window_t4_ParamLimits

0x6512,	// (0x000197ec) popup_snote2_single_text_window_t4

0x6548,	// (0x00019822) popup_snote2_single_text_window_t5_ParamLimits

0x6548,	// (0x00019822) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x00022f52) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x00022f52) popup_snote2_single_text_window_t

0x6573,	// (0x0001984d) popup_snote2_single_graphic_window_g1_ParamLimits

0x6573,	// (0x0001984d) popup_snote2_single_graphic_window_g1

0x659b,	// (0x00019875) popup_snote2_single_graphic_window_g2_ParamLimits

0x659b,	// (0x00019875) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x00022f5d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x00022f5d) popup_snote2_single_graphic_window_g

0x65c3,	// (0x0001989d) popup_snote2_single_graphic_window_t1_ParamLimits

0x65c3,	// (0x0001989d) popup_snote2_single_graphic_window_t1

0x660f,	// (0x000198e9) popup_snote2_single_graphic_window_t2_ParamLimits

0x660f,	// (0x000198e9) popup_snote2_single_graphic_window_t2

0x64d1,	// (0x000197ab) popup_snote2_single_graphic_window_t3_ParamLimits

0x64d1,	// (0x000197ab) popup_snote2_single_graphic_window_t3

0x6512,	// (0x000197ec) popup_snote2_single_graphic_window_t4_ParamLimits

0x6512,	// (0x000197ec) popup_snote2_single_graphic_window_t4

0x6548,	// (0x00019822) popup_snote2_single_graphic_window_t5_ParamLimits

0x6548,	// (0x00019822) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x00022f62) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x00022f62) popup_snote2_single_graphic_window_t

0x4ddf,	// (0x000180b9) clock_nsta_pane_cp2_t1

0x4ddf,	// (0x000180b9) clock_nsta_pane_cp2_t2

0x0001,

0xfa9c,	// (0x00022d76) clock_nsta_pane_cp2_t

0xe484,	// (0x0002175e) form_field_data_wide_pane_g1_ParamLimits

0xe490,	// (0x0002176a) form_field_data_wide_pane_g2_ParamLimits

0xe490,	// (0x0002176a) form_field_data_wide_pane_g2

0xe49c,	// (0x00021776) form_field_data_wide_pane_g3_ParamLimits

0xe49c,	// (0x00021776) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x00022929) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x00022929) form_field_data_wide_pane_g

0xbf8d,	// (0x0001f267) grid_touch_3_pane_ParamLimits

0xbf8d,	// (0x0001f267) grid_touch_3_pane

0xc4f3,	// (0x0001f7cd) cell_touch_3_pane_ParamLimits

0xc4f3,	// (0x0001f7cd) cell_touch_3_pane

0x5327,	// (0x00018601) cell_touch_3_pane_g1

0x5327,	// (0x00018601) cell_touch_3_pane_g2

0x0001,

0xfb21,	// (0x00022dfb) cell_touch_3_pane_g

0xdfb0,	// (0x0002128a) cont_query_data_pane

0xdfb8,	// (0x00021292) cont_query_data_pane_cp1

0x668e,	// (0x00019968) button_value_adjust_pane_cp7

0x6696,	// (0x00019970) query_popup_pane_cp3

0x1957,	// (0x00014c31) bg_popup_sub_pane_cp22_ParamLimits

0xe7bb,	// (0x00021a95) navi_navi_volume_pane_cp2

0xe7d6,	// (0x00021ab0) popup_side_volume_key_window_g2

0xe7e5,	// (0x00021abf) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x000229bf) popup_side_volume_key_window_g

0xe802,	// (0x00021adc) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x000229c6) popup_side_volume_key_window_t

0x1ca4,	// (0x00014f7e) popup_side_volume_key_window_ParamLimits

0xad41,	// (0x0001e01b) list_double_graphic_pane_g4_ParamLimits

0xad41,	// (0x0001e01b) list_double_graphic_pane_g4

0xbe17,	// (0x0001f0f1) list_single_2heading_msg_pane_ParamLimits

0xbe17,	// (0x0001f0f1) list_single_2heading_msg_pane

0xc53f,	// (0x0001f819) list_single_2heading_msg_pane_g1_ParamLimits

0xc53f,	// (0x0001f819) list_single_2heading_msg_pane_g1

0xc54b,	// (0x0001f825) list_single_2heading_msg_pane_g2_ParamLimits

0xc54b,	// (0x0001f825) list_single_2heading_msg_pane_g2

0xc55e,	// (0x0001f838) list_single_2heading_msg_pane_g3_ParamLimits

0xc55e,	// (0x0001f838) list_single_2heading_msg_pane_g3

0xc56a,	// (0x0001f844) list_single_2heading_msg_pane_g4_ParamLimits

0xc56a,	// (0x0001f844) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x00022f6d) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x00022f6d) list_single_2heading_msg_pane_g

0xc582,	// (0x0001f85c) list_single_2heading_msg_pane_t1_ParamLimits

0xc582,	// (0x0001f85c) list_single_2heading_msg_pane_t1

0xc5aa,	// (0x0001f884) list_single_2heading_msg_pane_t2_ParamLimits

0xc5aa,	// (0x0001f884) list_single_2heading_msg_pane_t2

0xc615,	// (0x0001f8ef) list_single_2heading_msg_pane_t3_ParamLimits

0xc615,	// (0x0001f8ef) list_single_2heading_msg_pane_t3

0x6793,	// (0x00019a6d) list_single_2heading_msg_pane_t4_ParamLimits

0x6793,	// (0x00019a6d) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x00022f76) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x00022f76) list_single_2heading_msg_pane_t

0xc6ef,	// (0x0001f9c9) title_pane_g4_ParamLimits

0xc6ef,	// (0x0001f9c9) title_pane_g4

0xe5bd,	// (0x00021897) title_pane_stacon_g3_ParamLimits

0xe5bd,	// (0x00021897) title_pane_stacon_g3

0x618b,	// (0x00019465) list_single_2graphic_im_pane_g4_ParamLimits

0x618b,	// (0x00019465) list_single_2graphic_im_pane_g4

0x3976,	// (0x00016c50) popup_side_volume_key_window_cp

0x428b,	// (0x00017565) main_idle_act2_pane_t1

0xec66,	// (0x00021f40) toolbar_button_pane_g10

0xabda,	// (0x0001deb4) popup_toolbar_window_cp1

0x4dd0,	// (0x000180aa) clock_nsta_pane_cp_t1

0x4dd0,	// (0x000180aa) clock_nsta_pane_cp_t2

0x0001,

0xfa97,	// (0x00022d71) clock_nsta_pane_cp_t

0xe7bb,	// (0x00021a95) navi_navi_volume_pane_cp2_ParamLimits

0xe7ca,	// (0x00021aa4) popup_side_volume_key_window_g1_ParamLimits

0xe7d6,	// (0x00021ab0) popup_side_volume_key_window_g2_ParamLimits

0xe7e5,	// (0x00021abf) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x000229bf) popup_side_volume_key_window_g_ParamLimits

0xf06e,	// (0x00022348) fep_hwr_aid_pane

0xf117,	// (0x000223f1) bg_fep_hwr_top_pane_g4_ParamLimits

0x5388,	// (0x00018662) fep_hwr_top_pane_g1_ParamLimits

0x539a,	// (0x00018674) fep_hwr_top_pane_g2_ParamLimits

0xf137,	// (0x00022411) fep_hwr_top_pane_g3_ParamLimits

0xfaec,	// (0x00022dc6) fep_hwr_top_pane_g_ParamLimits

0xf14c,	// (0x00022426) fep_hwr_top_text_pane_ParamLimits

0x372b,	// (0x00016a05) aid_touch_tab_arrow_arrow_2

0x3734,	// (0x00016a0e) aid_touch_tab_arrow_left_2

0xf082,	// (0x0002235c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xf0b9,	// (0x00022393) fep_hwr_prediction_pane

0x54f0,	// (0x000187ca) fep_vkb_prediction_pane

0xc2aa,	// (0x0001f584) fep_vkb_side_pane_g3_ParamLimits

0xc2aa,	// (0x0001f584) fep_vkb_side_pane_g3

0xf260,	// (0x0002253a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf2d1,	// (0x000225ab) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf2de,	// (0x000225b8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9b,	// (0x00022e75) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf3a2,	// (0x0002267c) fep_hwr_prediction_pane_g1

0xf3ac,	// (0x00022686) fep_hwr_prediction_pane_g2

0xf3b4,	// (0x0002268e) fep_hwr_prediction_pane_g3

0xf3bc,	// (0x00022696) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x00022f7f) fep_hwr_prediction_pane_g

0x67b8,	// (0x00019a92) fep_vkb_prediction_pane_g1

0x67c2,	// (0x00019a9c) fep_vkb_prediction_pane_g2

0x67ca,	// (0x00019aa4) fep_vkb_prediction_pane_g3

0x67d2,	// (0x00019aac) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x00022f88) fep_vkb_prediction_pane_g

0xee9d,	// (0x00022177) slider_set_pane_g3

0xef10,	// (0x000221ea) slider_set_pane_g4

0xef28,	// (0x00022202) slider_set_pane_g5

0xee9d,	// (0x00022177) slider_set_pane_g6

0xef3e,	// (0x00022218) slider_set_pane_g7

0x3e14,	// (0x000170ee) slider_form_pane_g3

0x3e1d,	// (0x000170f7) slider_form_pane_g4

0x3e25,	// (0x000170ff) slider_form_pane_g5

0x3e14,	// (0x000170ee) slider_form_pane_g6

0xbdba,	// (0x0001f094) slider_form_pane_g7

0x45a7,	// (0x00017881) slider_set_pane_vc_g3

0x45b0,	// (0x0001788a) slider_set_pane_vc_g4

0x45b9,	// (0x00017893) slider_set_pane_vc_g5

0x45a7,	// (0x00017881) slider_set_pane_vc_g6

0x45c2,	// (0x0001789c) slider_set_pane_vc_g7

0x4a7f,	// (0x00017d59) slider_form_pane_vc_g1

0x4a88,	// (0x00017d62) slider_form_pane_vc_g2

0x4a91,	// (0x00017d6b) slider_form_pane_vc_g3

0x4a7f,	// (0x00017d59) slider_form_pane_vc_g4

0x4a9a,	// (0x00017d74) slider_form_pane_vc_g5

0x0004,

0xfa69,	// (0x00022d43) slider_form_pane_vc_g

0xddac,	// (0x00021086) main_idle_act3_pane

0x67da,	// (0x00019ab4) ai3_links_pane

0xc683,	// (0x0001f95d) popup_ai3_data_window_ParamLimits

0xc683,	// (0x0001f95d) popup_ai3_data_window

0xc6d1,	// (0x0001f9ab) grid_ai3_links_pane

0xc91f,	// (0x0001fbf9) cell_ai3_links_pane_ParamLimits

0xc91f,	// (0x0001fbf9) cell_ai3_links_pane

0x681b,	// (0x00019af5) bg_popup_sub_pane_cp11

0x6828,	// (0x00019b02) cell_ai3_links_pane_g1

0xc6d1,	// (0x0001f9ab) bg_popup_sub_pane_cp12

0x684d,	// (0x00019b27) heading_ai3_data_pane

0x6855,	// (0x00019b2f) list_ai3_gene_pane

0x6861,	// (0x00019b3b) popup_ai3_data_window_g1

0x6869,	// (0x00019b43) heading_ai3_data_pane_g1

0x6871,	// (0x00019b4b) heading_ai3_data_pane_t1

0x687f,	// (0x00019b59) list_double_ai3_gene_pane_ParamLimits

0x687f,	// (0x00019b59) list_double_ai3_gene_pane

0x688c,	// (0x00019b66) list_single_ai3_gene_pane_ParamLimits

0x688c,	// (0x00019b66) list_single_ai3_gene_pane

0x52ec,	// (0x000185c6) list_highlight_pane_cp7_ParamLimits

0x52ec,	// (0x000185c6) list_highlight_pane_cp7

0x6899,	// (0x00019b73) list_single_a13_gene_pane_t1_ParamLimits

0x6899,	// (0x00019b73) list_single_a13_gene_pane_t1

0x68b0,	// (0x00019b8a) list_single_ai3_gene_pane_g1

0x68b9,	// (0x00019b93) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x00022f91) list_single_ai3_gene_pane_g

0x68c1,	// (0x00019b9b) list_double_ai3_gene_pane_g1_ParamLimits

0x68c1,	// (0x00019b9b) list_double_ai3_gene_pane_g1

0x68cd,	// (0x00019ba7) list_double_ai3_gene_pane_t1_ParamLimits

0x68cd,	// (0x00019ba7) list_double_ai3_gene_pane_t1

0x68e9,	// (0x00019bc3) list_double_ai3_gene_pane_t2_ParamLimits

0x68e9,	// (0x00019bc3) list_double_ai3_gene_pane_t2

0x68fe,	// (0x00019bd8) list_double_ai3_gene_pane_t3_ParamLimits

0x68fe,	// (0x00019bd8) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x00022f96) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x00022f96) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x66a7,	// (0x00019981) aid_size_min_col_2

0xc529,	// (0x0001f803) aid_size_min_msg_ParamLimits

0xc529,	// (0x0001f803) aid_size_min_msg

0xc2be,	// (0x0001f598) fep_vkb_top_text_pane_g2_ParamLimits

0xc2be,	// (0x0001f598) fep_vkb_top_text_pane_g2

0x0001,

0xfb1c,	// (0x00022df6) fep_vkb_top_text_pane_g_ParamLimits

0xfb1c,	// (0x00022df6) fep_vkb_top_text_pane_g

0xddac,	// (0x00021086) main_hc_apps_shell_pane

0x691b,	// (0x00019bf5) grid_hc_apps_pane_ParamLimits

0x691b,	// (0x00019bf5) grid_hc_apps_pane

0x692d,	// (0x00019c07) list_hc_apps_pane

0x6935,	// (0x00019c0f) scroll_pane_cp37_ParamLimits

0x6935,	// (0x00019c0f) scroll_pane_cp37

0xc939,	// (0x0001fc13) cell_hc_apps_pane_ParamLimits

0xc939,	// (0x0001fc13) cell_hc_apps_pane

0xc9ff,	// (0x0001fcd9) cell_hc_apps_pane_g1_ParamLimits

0xc9ff,	// (0x0001fcd9) cell_hc_apps_pane_g1

0x6a21,	// (0x00019cfb) cell_hc_apps_pane_g2_ParamLimits

0x6a21,	// (0x00019cfb) cell_hc_apps_pane_g2

0x6a3d,	// (0x00019d17) cell_hc_apps_pane_g3_ParamLimits

0x6a3d,	// (0x00019d17) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x00022f9d) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x00022f9d) cell_hc_apps_pane_g

0xca2b,	// (0x0001fd05) cell_hc_apps_pane_t1_ParamLimits

0xca2b,	// (0x0001fd05) cell_hc_apps_pane_t1

0xc88e,	// (0x0001fb68) grid_highlight_pane_cp10_ParamLimits

0xc88e,	// (0x0001fb68) grid_highlight_pane_cp10

0xca69,	// (0x0001fd43) list_single_hc_apps_pane_ParamLimits

0xca69,	// (0x0001fd43) list_single_hc_apps_pane

0xca9c,	// (0x0001fd76) list_single_hc_apps_pane_g1

0xcab5,	// (0x0001fd8f) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x00022fa4) list_single_hc_apps_pane_g

0xcace,	// (0x0001fda8) list_single_hc_apps_pane_g2_copy1

0xcaea,	// (0x0001fdc4) list_single_hc_apps_pane_t1

0xc741,	// (0x0001fa1b) bg_set_opt_pane_cp_ParamLimits

0xdecf,	// (0x000211a9) setting_slider_pane_t1_ParamLimits

0xdee8,	// (0x000211c2) setting_slider_pane_t2_ParamLimits

0xdf02,	// (0x000211dc) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00022811) setting_slider_pane_t_ParamLimits

0xdf1a,	// (0x000211f4) slider_set_pane_ParamLimits

0xea49,	// (0x00021d23) control_pane_g5_ParamLimits

0xea49,	// (0x00021d23) control_pane_g5

0x3c47,	// (0x00016f21) slider_set_pane_g1_ParamLimits

0xee91,	// (0x0002216b) slider_set_pane_g2_ParamLimits

0xee9d,	// (0x00022177) slider_set_pane_g3_ParamLimits

0xef10,	// (0x000221ea) slider_set_pane_g4_ParamLimits

0xef28,	// (0x00022202) slider_set_pane_g5_ParamLimits

0xee9d,	// (0x00022177) slider_set_pane_g6_ParamLimits

0xef3e,	// (0x00022218) slider_set_pane_g7_ParamLimits

0xf933,	// (0x00022c0d) slider_set_pane_g_ParamLimits

0x1d89,	// (0x00015063) navi_icon_text_pane_ParamLimits

0xb592,	// (0x0001e86c) aid_fill_nsta_2_ParamLimits

0xb5cb,	// (0x0001e8a5) aid_touch_tab_arrow_left_ParamLimits

0xb5df,	// (0x0001e8b9) aid_touch_tab_arrow_right_ParamLimits

0xb67a,	// (0x0001e954) clock_nsta_pane_ParamLimits

0xbb38,	// (0x0001ee12) navi_icon_pane_g1_ParamLimits

0xbb44,	// (0x0001ee1e) navi_text_pane_t1_ParamLimits

0xc066,	// (0x0001f340) navi_icon_text_pane_g1_ParamLimits

0xc072,	// (0x0001f34c) navi_icon_text_pane_t1_ParamLimits

0xca9c,	// (0x0001fd76) list_single_hc_apps_pane_g1_ParamLimits

0xcab5,	// (0x0001fd8f) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x00022fa4) list_single_hc_apps_pane_g_ParamLimits

0xcace,	// (0x0001fda8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcaea,	// (0x0001fdc4) list_single_hc_apps_pane_t1_ParamLimits

0x9706,	// (0x0001c9e0) popup_toolbar2_fixed_window_ParamLimits

0x9706,	// (0x0001c9e0) popup_toolbar2_fixed_window

0x9faa,	// (0x0001d284) popup_toolbar2_float_window

0xc6d1,	// (0x0001f9ab) bg_popup_sub_pane_cp27

0x6b5a,	// (0x00019e34) grid_toolbar2_float_pane

0xc6d1,	// (0x0001f9ab) bg_popup_sub_pane_cp26

0x6b5a,	// (0x00019e34) grid_toolbar2_fixed_pane

0xcb18,	// (0x0001fdf2) cell_toolbar2_fixed_pane_ParamLimits

0xcb18,	// (0x0001fdf2) cell_toolbar2_fixed_pane

0xcb32,	// (0x0001fe0c) cell_toolbar2_fixed_pane_g1

0x6b7b,	// (0x00019e55) toolbar2_fixed_button_pane

0x27bd,	// (0x00015a97) toolbar2_fixed_button_pane_g1

0x27cd,	// (0x00015aa7) toolbar2_fixed_button_pane_g2

0x27c5,	// (0x00015a9f) toolbar2_fixed_button_pane_g3

0x27dd,	// (0x00015ab7) toolbar2_fixed_button_pane_g4

0x27d5,	// (0x00015aaf) toolbar2_fixed_button_pane_g5

0x27e5,	// (0x00015abf) toolbar2_fixed_button_pane_g6

0x27ed,	// (0x00015ac7) toolbar2_fixed_button_pane_g7

0x27fd,	// (0x00015ad7) toolbar2_fixed_button_pane_g8

0x27f5,	// (0x00015acf) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x00022b0f) toolbar2_fixed_button_pane_g

0x6b83,	// (0x00019e5d) cell_toolbar2_float_pane_ParamLimits

0x6b83,	// (0x00019e5d) cell_toolbar2_float_pane

0x6b94,	// (0x00019e6e) cell_toolbar2_float_pane_g1

0x6b7b,	// (0x00019e55) toolbar2_fixed_button_pane_cp

0xc1a6,	// (0x0001f480) fep_vkb_accented_list_pane_ParamLimits

0xc1a6,	// (0x0001f480) fep_vkb_accented_list_pane

0xf240,	// (0x0002251a) bg_popup_fep_shadow_pane_g9

0x1f1c,	// (0x000151f6) bg_popup_fep_shadow_pane_cp3

0x1330,	// (0x0001460a) list_accented_list_pane

0x6b9d,	// (0x00019e77) list_single_accented_list_pane_ParamLimits

0x6b9d,	// (0x00019e77) list_single_accented_list_pane

0x1f1c,	// (0x000151f6) list_highlight_pane_cp10

0x6bae,	// (0x00019e88) list_single_accented_list_pane_t1

0x9ec6,	// (0x0001d1a0) popup_slider_window_ParamLimits

0x9ec6,	// (0x0001d1a0) popup_slider_window

0x669e,	// (0x00019978) aid_indentation_list_msg

0xcc35,	// (0x0001ff0f) bg_popup_window_pane_cp19

0x6cea,	// (0x00019fc4) popup_slider_window_g1

0x6d06,	// (0x00019fe0) popup_slider_window_g2

0x6d22,	// (0x00019ffc) popup_slider_window_g3

0x0005,

0xfccf,	// (0x00022fa9) popup_slider_window_g

0x6d88,	// (0x0001a062) popup_slider_window_t1

0x6dfc,	// (0x0001a0d6) small_volume_slider_vertical_pane

0x5327,	// (0x00018601) small_volume_slider_vertical_pane_g1

0x5327,	// (0x00018601) small_volume_slider_vertical_pane_g2

0x6e18,	// (0x0001a0f2) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x00022fbb) small_volume_slider_vertical_pane_g

0xdcc9,	// (0x00020fa3) area_side_right_pane_ParamLimits

0xdcc9,	// (0x00020fa3) area_side_right_pane

0xa1ad,	// (0x0001d487) aid_size_side_button_ParamLimits

0xa1ad,	// (0x0001d487) aid_size_side_button

0xa1c6,	// (0x0001d4a0) grid_sctrl_middle_pane_ParamLimits

0xa1c6,	// (0x0001d4a0) grid_sctrl_middle_pane

0xf3cd,	// (0x000226a7) sctrl_sk_bottom_pane

0xf3de,	// (0x000226b8) sctrl_sk_top_pane

0xf3f0,	// (0x000226ca) aid_touch_sctrl_top

0xf3fd,	// (0x000226d7) bg_sctrl_sk_pane_ParamLimits

0xf3fd,	// (0x000226d7) bg_sctrl_sk_pane

0xf40b,	// (0x000226e5) sctrl_sk_top_pane_g1

0xf418,	// (0x000226f2) sctrl_sk_top_pane_t1

0xf3f0,	// (0x000226ca) aid_touch_sctrl_bottom

0xf3fd,	// (0x000226d7) bg_sctrl_sk_pane_cp_ParamLimits

0xf3fd,	// (0x000226d7) bg_sctrl_sk_pane_cp

0xf433,	// (0x0002270d) sctrl_sk_bottom_pane_g1

0xf418,	// (0x000226f2) sctrl_sk_bottom_pane_t1

0xa1e5,	// (0x0001d4bf) cell_sctrl_middle_pane_ParamLimits

0xa1e5,	// (0x0001d4bf) cell_sctrl_middle_pane

0xa20c,	// (0x0001d4e6) aid_touch_sctrl_middle_ParamLimits

0xa20c,	// (0x0001d4e6) aid_touch_sctrl_middle

0xf3fd,	// (0x000226d7) bg_sctrl_middle_pane_ParamLimits

0xf3fd,	// (0x000226d7) bg_sctrl_middle_pane

0x057b,	// (0x00013855) cell_sctrl_middle_pane_g1_ParamLimits

0x057b,	// (0x00013855) cell_sctrl_middle_pane_g1

0xa220,	// (0x0001d4fa) cell_sctrl_middle_pane_g2_ParamLimits

0xa220,	// (0x0001d4fa) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x00022fc7) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x00022fc7) cell_sctrl_middle_pane_g

0x27bd,	// (0x00015a97) bg_sctrl_middle_pane_g1

0x27c5,	// (0x00015a9f) bg_sctrl_middle_pane_g2

0x27cd,	// (0x00015aa7) bg_sctrl_middle_pane_g3

0x27d5,	// (0x00015aaf) bg_sctrl_middle_pane_g4

0x27dd,	// (0x00015ab7) bg_sctrl_middle_pane_g5

0x27e5,	// (0x00015abf) bg_sctrl_middle_pane_g6

0x27ed,	// (0x00015ac7) bg_sctrl_middle_pane_g7

0x27f5,	// (0x00015acf) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x00022fcc) bg_sctrl_middle_pane_g

0x27fd,	// (0x00015ad7) bg_sctrl_middle_pane_g8_copy1

0x27bd,	// (0x00015a97) bg_sctrl_sk_pane_g1

0x27cd,	// (0x00015aa7) bg_sctrl_sk_pane_g2

0x27c5,	// (0x00015a9f) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x00022b0f) bg_sctrl_sk_pane_g

0xe31c,	// (0x000215f6) aid_size_touch_scroll_bar

0x27dd,	// (0x00015ab7) bg_sctrl_sk_pane_g4

0x27d5,	// (0x00015aaf) bg_sctrl_sk_pane_g5

0x27e5,	// (0x00015abf) bg_sctrl_sk_pane_g6

0x27ed,	// (0x00015ac7) bg_sctrl_sk_pane_g7

0x27fd,	// (0x00015ad7) bg_sctrl_sk_pane_g8

0x27f5,	// (0x00015acf) bg_sctrl_sk_pane_g9

0xeaa8,	// (0x00021d82) popup_fep_china_hwr2_fs_candidate_window

0x9978,	// (0x0001cc52) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9978,	// (0x0001cc52) popup_fep_china_hwr2_fs_control_window

0xf260,	// (0x0002253a) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00022fc2) sctrl_sk_top_pane_g

0xcced,	// (0x0001ffc7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcced,	// (0x0001ffc7) aid_fep_china_hwr2_fs_cell

0xcd03,	// (0x0001ffdd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcd03,	// (0x0001ffdd) bg_popup_fep_shadow_pane_cp4

0xcd1a,	// (0x0001fff4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcd1a,	// (0x0001fff4) bg_popup_fep_shadow_pane_cp5

0xcd2c,	// (0x00020006) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcd2c,	// (0x00020006) popup_fep_china_hwr2_fs_control_bar_grid

0xcd40,	// (0x0002001a) popup_fep_china_hwr2_fs_control_funtion_grid

0x6e77,	// (0x0001a151) aid_fep_china_hwr2_fs_candi_cell

0xc6d1,	// (0x0001f9ab) bg_popup_fep_shadow_pane_cp6

0x6e81,	// (0x0001a15b) popup_fep_china_hwr2_fs_candidate_grid

0xcd48,	// (0x00020022) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcd48,	// (0x00020022) cell_fep_china_hwr2_fs_funtion_grid

0x5327,	// (0x00018601) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6ea3,	// (0x0001a17d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6ea3,	// (0x0001a17d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6eb1,	// (0x0001a18b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6eb1,	// (0x0001a18b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x00022fdd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x00022fdd) cell_fep_china_hwr2_fs_funtion_grid_g

0xcd60,	// (0x0002003a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcd60,	// (0x0002003a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcd75,	// (0x0002004f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcd75,	// (0x0002004f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00022fe2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00022fe2) cell_fep_china_hwr2_fs_funtion_grid_t

0x6ef8,	// (0x0001a1d2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6f00,	// (0x0001a1da) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6f08,	// (0x0001a1e2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x00022fe7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6f10,	// (0x0001a1ea) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6f10,	// (0x0001a1ea) cell_fep_china_hwr2_fs_candidate_grid

0x6f2f,	// (0x0001a209) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6f37,	// (0x0001a211) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5327,	// (0x00018601) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5327,	// (0x00018601) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb21,	// (0x00022dfb) cell_fep_china_hwr2_fs_candidate_grid_g

0x6f3f,	// (0x0001a219) cell_fep_china_hwr2_fs_candidate_grid_t1

0x236f,	// (0x00015649) clock_nsta_pane_cp_24_ParamLimits

0x236f,	// (0x00015649) clock_nsta_pane_cp_24

0x23ef,	// (0x000156c9) indicator_nsta_pane_cp_24_ParamLimits

0x23ef,	// (0x000156c9) indicator_nsta_pane_cp_24

0x3589,	// (0x00016863) heading_pane_g1

0x0001,

0xf89a,	// (0x00022b74) heading_pane_g

0x40d2,	// (0x000173ac) grid_sct_catagory_button_pane

0x4104,	// (0x000173de) scroll_pane_cp5_ParamLimits

0x4f3b,	// (0x00018215) button_value_adjust_pane_cp5_ParamLimits

0x4f3b,	// (0x00018215) button_value_adjust_pane_cp5

0x5041,	// (0x0001831b) form2_midp_time_pane_ParamLimits

0x6f4d,	// (0x0001a227) cell_sct_catagory_button_pane_ParamLimits

0x6f4d,	// (0x0001a227) cell_sct_catagory_button_pane

0x52ec,	// (0x000185c6) bg_button_pane_cp01_ParamLimits

0x52ec,	// (0x000185c6) bg_button_pane_cp01

0x5327,	// (0x00018601) cell_sct_catagory_button_pane_g1

0x9f47,	// (0x0001d221) popup_tb_extension_window

0xcd91,	// (0x0002006b) aid_size_cell_ext_ParamLimits

0xcd91,	// (0x0002006b) aid_size_cell_ext

0xe15e,	// (0x00021438) bg_tb_trans_pane_cp1_ParamLimits

0xe15e,	// (0x00021438) bg_tb_trans_pane_cp1

0xcdb7,	// (0x00020091) grid_tb_ext_pane_ParamLimits

0xcdb7,	// (0x00020091) grid_tb_ext_pane

0xcdf4,	// (0x000200ce) cell_tb_ext_pane_ParamLimits

0xcdf4,	// (0x000200ce) cell_tb_ext_pane

0xce1c,	// (0x000200f6) cell_tb_ext_pane_g1_ParamLimits

0xce1c,	// (0x000200f6) cell_tb_ext_pane_g1

0x6fe1,	// (0x0001a2bb) cell_tb_ext_pane_t1

0xc88e,	// (0x0001fb68) list_highlight_pane_cp11_ParamLimits

0xc88e,	// (0x0001fb68) list_highlight_pane_cp11

0x971b,	// (0x0001c9f5) popup_uni_indicator_window_ParamLimits

0x971b,	// (0x0001c9f5) popup_uni_indicator_window

0xe46a,	// (0x00021744) bg_popup_sub_pane_cp14

0x6ffe,	// (0x0001a2d8) list_uniindi_pane

0x700a,	// (0x0001a2e4) uniindi_top_pane

0xc88e,	// (0x0001fb68) bg_uniindi_top_pane

0x702b,	// (0x0001a305) uniindi_top_pane_g1

0x7041,	// (0x0001a31b) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x00022fee) uniindi_top_pane_g

0x706b,	// (0x0001a345) uniindi_top_pane_t1

0x7097,	// (0x0001a371) list_single_uniindi_pane_ParamLimits

0x7097,	// (0x0001a371) list_single_uniindi_pane

0x5327,	// (0x00018601) bg_uniindi_top_pane_g1

0x70aa,	// (0x0001a384) list_single_uniindi_pane_g1

0x70bd,	// (0x0001a397) list_single_uniindi_pane_t1

0xddac,	// (0x00021086) control_bg_pane

0x70e2,	// (0x0001a3bc) bg_sctrl_sk_pane_cp1

0x70eb,	// (0x0001a3c5) bg_sctrl_sk_pane_cp2

0x70f4,	// (0x0001a3ce) control_bg_pane_g1

0x70fd,	// (0x0001a3d7) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x00022ff7) control_bg_pane_g

0x4d73,	// (0x0001804d) cell_indicator_nsta_pane_g1_ParamLimits

0xbfca,	// (0x0001f2a4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa85,	// (0x00022d5f) cell_indicator_nsta_pane_g_ParamLimits

0x50ce,	// (0x000183a8) form2_midp_time_pane_t1_ParamLimits

0xef02,	// (0x000221dc) main_idle_act4_pane_ParamLimits

0xef02,	// (0x000221dc) main_idle_act4_pane

0x9f47,	// (0x0001d221) popup_tb_extension_window_ParamLimits

0xcddc,	// (0x000200b6) tb_ext_find_pane_ParamLimits

0xcddc,	// (0x000200b6) tb_ext_find_pane

0x7106,	// (0x0001a3e0) ai_gene_pane_1_cp1

0x2066,	// (0x00015340) ai_gene_pane_2_cp1

0x710e,	// (0x0001a3e8) list_single_idle_plugin_calendar_pane

0x7117,	// (0x0001a3f1) list_single_idle_plugin_notification_pane

0x7120,	// (0x0001a3fa) list_single_idle_plugin_player_pane

0xce39,	// (0x00020113) list_single_idle_plugin_shortcut_pane_ParamLimits

0xce39,	// (0x00020113) list_single_idle_plugin_shortcut_pane

0xce61,	// (0x0002013b) main_idle_act4_pane_t1

0xce79,	// (0x00020153) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x00022ffc) main_idle_act4_pane_t

0xce91,	// (0x0002016b) middle_sk_idle_act4_pane_ParamLimits

0xce91,	// (0x0002016b) middle_sk_idle_act4_pane

0xcead,	// (0x00020187) popup_clock_digital_analogue_window_cp2

0xced4,	// (0x000201ae) shortcut_wheel_idle_act4_pane_ParamLimits

0xced4,	// (0x000201ae) shortcut_wheel_idle_act4_pane

0x5327,	// (0x00018601) shortcut_wheel_idle_act4_pane_g1

0x5327,	// (0x00018601) shortcut_wheel_idle_act4_pane_g2

0x5327,	// (0x00018601) shortcut_wheel_idle_act4_pane_g3

0x5327,	// (0x00018601) shortcut_wheel_idle_act4_pane_g4

0x5327,	// (0x00018601) shortcut_wheel_idle_act4_pane_g5

0x71b3,	// (0x0001a48d) shortcut_wheel_idle_act4_pane_g6

0x71bb,	// (0x0001a495) shortcut_wheel_idle_act4_pane_g7

0x71c3,	// (0x0001a49d) shortcut_wheel_idle_act4_pane_g8

0x71cb,	// (0x0001a4a5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00023001) shortcut_wheel_idle_act4_pane_g

0xc6a1,	// (0x0001f97b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6a1,	// (0x0001f97b) middle_sk_idle_act4_pane_g1

0xcf51,	// (0x0002022b) middle_sk_idle_act4_pane_g2_ParamLimits

0xcf51,	// (0x0002022b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x00023024) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x00023024) middle_sk_idle_act4_pane_g

0xcf69,	// (0x00020243) middle_sk_idle_act4_pane_t1_ParamLimits

0xcf69,	// (0x00020243) middle_sk_idle_act4_pane_t1

0xcf98,	// (0x00020272) grid_ai_shortcut_pane_ParamLimits

0xcf98,	// (0x00020272) grid_ai_shortcut_pane

0xcfb5,	// (0x0002028f) list_highlight_pane_cp16_ParamLimits

0xcfb5,	// (0x0002028f) list_highlight_pane_cp16

0xcfc2,	// (0x0002029c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcfc2,	// (0x0002029c) list_single_idle_plugin_shortcut_pane_g1

0xcfce,	// (0x000202a8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcfce,	// (0x000202a8) list_single_idle_plugin_shortcut_pane_g2

0xcfec,	// (0x000202c6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcfec,	// (0x000202c6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x00023029) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x00023029) list_single_idle_plugin_shortcut_pane_g

0xd001,	// (0x000202db) cell_ai_shortcut_pane_ParamLimits

0xd001,	// (0x000202db) cell_ai_shortcut_pane

0xd017,	// (0x000202f1) cell_ai_shortcut_pane_g1_ParamLimits

0xd017,	// (0x000202f1) cell_ai_shortcut_pane_g1

0x7106,	// (0x0001a3e0) ai_gene_pane_1_cp2

0x72fc,	// (0x0001a5d6) ai_gene_pane_2_cp2

0x7304,	// (0x0001a5de) list_highlight_pane_cp15

0x730d,	// (0x0001a5e7) list_single_idle_plugin_calendar_pane_g1

0x7304,	// (0x0001a5de) list_highlight_pane_cp17

0x7315,	// (0x0001a5ef) list_single_idle_plugin_calendar_pane_g1_copy1

0x731d,	// (0x0001a5f7) list_single_idle_plugin_player_pane_g1

0x4339,	// (0x00017613) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x00023030) list_single_idle_plugin_player_pane_g

0x7325,	// (0x0001a5ff) list_single_idle_plugin_player_pane_t1

0x7333,	// (0x0001a60d) list_single_idle_plugin_player_pane_t2

0x7341,	// (0x0001a61b) list_single_idle_plugin_player_pane_t3

0x734f,	// (0x0001a629) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x00023035) list_single_idle_plugin_player_pane_t

0x735d,	// (0x0001a637) wait_bar_pane_cp15

0x7365,	// (0x0001a63f) grid_ai_notification_pane

0x4339,	// (0x00017613) list_single_idle_plugin_notification_pane_g1

0xd039,	// (0x00020313) cell_ai_notification_pane_ParamLimits

0xd039,	// (0x00020313) cell_ai_notification_pane

0x737b,	// (0x0001a655) cell_ai_notification_pane_g1

0x7383,	// (0x0001a65d) cell_ai_notification_pane_t1

0xd046,	// (0x00020320) tb_ext_find_button_pane

0xd04e,	// (0x00020328) tb_ext_find_pane_g1

0xd056,	// (0x00020330) tb_ext_find_pane_t1

0x1852,	// (0x00014b2c) tb_ext_find_button_pane_g1

0x73af,	// (0x0001a689) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x0002303e) tb_ext_find_button_pane_g

0xce61,	// (0x0002013b) main_idle_act4_pane_t1_ParamLimits

0xce79,	// (0x00020153) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x00022ffc) main_idle_act4_pane_t_ParamLimits

0xcead,	// (0x00020187) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcec4,	// (0x0002019e) sat_plugin_idle_act4_pane_ParamLimits

0xcec4,	// (0x0002019e) sat_plugin_idle_act4_pane

0xd064,	// (0x0002033e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd064,	// (0x0002033e) sat_plugin_idle_act4_pane_t1

0xd07c,	// (0x00020356) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd07c,	// (0x00020356) sat_plugin_idle_act4_pane_t2

0xd094,	// (0x0002036e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd094,	// (0x0002036e) sat_plugin_idle_act4_pane_t3

0xd0ac,	// (0x00020386) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd0ac,	// (0x00020386) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x00023043) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x00023043) sat_plugin_idle_act4_pane_t

0xde71,	// (0x0002114b) popup_battery_window_ParamLimits

0xde71,	// (0x0002114b) popup_battery_window

0xc88e,	// (0x0001fb68) bg_popup_sub_pane_cp25_ParamLimits

0xc88e,	// (0x0001fb68) bg_popup_sub_pane_cp25

0x7404,	// (0x0001a6de) popup_battery_window_g1_ParamLimits

0x7404,	// (0x0001a6de) popup_battery_window_g1

0x7410,	// (0x0001a6ea) popup_battery_window_t1_ParamLimits

0x7410,	// (0x0001a6ea) popup_battery_window_t1

0x7422,	// (0x0001a6fc) popup_battery_window_t2_ParamLimits

0x7422,	// (0x0001a6fc) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0002304c) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0002304c) popup_battery_window_t

0xb47a,	// (0x0001e754) midp_canvas_pane_ParamLimits

0xb4d6,	// (0x0001e7b0) midp_keypad_pane_ParamLimits

0xb4d6,	// (0x0001e7b0) midp_keypad_pane

0x224b,	// (0x00015525) main_midp_pane_ParamLimits

0x4dee,	// (0x000180c8) signal_pane_g2_cp_ParamLimits

0xd0c4,	// (0x0002039e) aid_size_cell_midp_keypad_ParamLimits

0xd0c4,	// (0x0002039e) aid_size_cell_midp_keypad

0xd0e2,	// (0x000203bc) midp_keyp_game_grid_pane_ParamLimits

0xd0e2,	// (0x000203bc) midp_keyp_game_grid_pane

0xd109,	// (0x000203e3) midp_keyp_rocker_pane_ParamLimits

0xd109,	// (0x000203e3) midp_keyp_rocker_pane

0xd158,	// (0x00020432) midp_keyp_sk_left_pane_ParamLimits

0xd158,	// (0x00020432) midp_keyp_sk_left_pane

0xd1ae,	// (0x00020488) midp_keyp_sk_right_pane_ParamLimits

0xd1ae,	// (0x00020488) midp_keyp_sk_right_pane

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp03

0xd204,	// (0x000204de) midp_keyp_sk_left_pane_g1

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp04

0xd204,	// (0x000204de) midp_keyp_sk_right_pane_g1

0x5327,	// (0x00018601) midp_keyp_rocker_pane_g1

0xd20c,	// (0x000204e6) keyp_game_cell_pane_ParamLimits

0xd20c,	// (0x000204e6) keyp_game_cell_pane

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp02

0xd232,	// (0x0002050c) keyp_game_cell_pane_g1

0x96b2,	// (0x0001c98c) popup_fep_vkb2_window_ParamLimits

0x96b2,	// (0x0001c98c) popup_fep_vkb2_window

0xa232,	// (0x0001d50c) aid_size_cell_vkb2_ParamLimits

0xa232,	// (0x0001d50c) aid_size_cell_vkb2

0xa25e,	// (0x0001d538) popup_fep_vkb2_window_g1_ParamLimits

0xa25e,	// (0x0001d538) popup_fep_vkb2_window_g1

0xa2ae,	// (0x0001d588) vkb2_area_bottom_pane_ParamLimits

0xa2ae,	// (0x0001d588) vkb2_area_bottom_pane

0xa30a,	// (0x0001d5e4) vkb2_area_keypad_pane_ParamLimits

0xa30a,	// (0x0001d5e4) vkb2_area_keypad_pane

0xa358,	// (0x0001d632) vkb2_area_top_pane_ParamLimits

0xa358,	// (0x0001d632) vkb2_area_top_pane

0xa3e5,	// (0x0001d6bf) vkb2_top_entry_pane_ParamLimits

0xa3e5,	// (0x0001d6bf) vkb2_top_entry_pane

0xa412,	// (0x0001d6ec) vkb2_top_grid_left_pane_ParamLimits

0xa412,	// (0x0001d6ec) vkb2_top_grid_left_pane

0xa433,	// (0x0001d70d) vkb2_top_grid_right_pane_ParamLimits

0xa433,	// (0x0001d70d) vkb2_top_grid_right_pane

0xf47a,	// (0x00022754) vkb2_cell_keypad_pane_ParamLimits

0xf47a,	// (0x00022754) vkb2_cell_keypad_pane

0xa47b,	// (0x0001d755) vkb2_area_bottom_grid_pane_ParamLimits

0xa47b,	// (0x0001d755) vkb2_area_bottom_grid_pane

0xa4a5,	// (0x0001d77f) vkb2_area_bottom_pane_g1_ParamLimits

0xa4a5,	// (0x0001d77f) vkb2_area_bottom_pane_g1

0xa4cb,	// (0x0001d7a5) vkb2_area_bottom_pane_g2_ParamLimits

0xa4cb,	// (0x0001d7a5) vkb2_area_bottom_pane_g2

0xa4fc,	// (0x0001d7d6) vkb2_area_bottom_pane_g3_ParamLimits

0xa4fc,	// (0x0001d7d6) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x00023051) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x00023051) vkb2_area_bottom_pane_g

0x00b4,	// (0x0001338e) vkb2_top_cell_left_pane_ParamLimits

0x00b4,	// (0x0001338e) vkb2_top_cell_left_pane

0xd23b,	// (0x00020515) vkb2_top_entry_pane_g1_ParamLimits

0xd23b,	// (0x00020515) vkb2_top_entry_pane_g1

0xd249,	// (0x00020523) vkb2_top_entry_pane_t1_ParamLimits

0xd249,	// (0x00020523) vkb2_top_entry_pane_t1

0x75cc,	// (0x0001a8a6) vkb2_top_entry_pane_t2_ParamLimits

0x75cc,	// (0x0001a8a6) vkb2_top_entry_pane_t2

0x75fe,	// (0x0001a8d8) vkb2_top_entry_pane_t3_ParamLimits

0x75fe,	// (0x0001a8d8) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x00023058) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x00023058) vkb2_top_entry_pane_t

0xa566,	// (0x0001d840) vkb2_top_grid_right_pane_g1_ParamLimits

0xa566,	// (0x0001d840) vkb2_top_grid_right_pane_g1

0x0117,	// (0x000133f1) vkb2_top_grid_right_pane_g2_ParamLimits

0x0117,	// (0x000133f1) vkb2_top_grid_right_pane_g2

0x012f,	// (0x00013409) vkb2_top_grid_right_pane_g3_ParamLimits

0x012f,	// (0x00013409) vkb2_top_grid_right_pane_g3

0xa57c,	// (0x0001d856) vkb2_top_grid_right_pane_g4_ParamLimits

0xa57c,	// (0x0001d856) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x0002305f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x0002305f) vkb2_top_grid_right_pane_g

0x015d,	// (0x00013437) vkb2_top_cell_left_pane_g1

0x0174,	// (0x0001344e) vkb2_cell_keypad_pane_g1_ParamLimits

0x0174,	// (0x0001344e) vkb2_cell_keypad_pane_g1

0x7622,	// (0x0001a8fc) vkb2_cell_keypad_pane_t1_ParamLimits

0x7622,	// (0x0001a8fc) vkb2_cell_keypad_pane_t1

0x0182,	// (0x0001345c) vkb2_cell_bottom_grid_pane_ParamLimits

0x0182,	// (0x0001345c) vkb2_cell_bottom_grid_pane

0x01bb,	// (0x00013495) vkb2_cell_bottom_grid_pane_g1

0xcef5,	// (0x000201cf) aid_call2_pane_cp02

0xcefd,	// (0x000201d7) aid_call_pane_cp02

0xcf05,	// (0x000201df) clock_digital_number_pane_cp10

0xcf0d,	// (0x000201e7) clock_digital_number_pane_cp11

0xcf15,	// (0x000201ef) clock_digital_number_pane_cp12

0xcf1d,	// (0x000201f7) clock_digital_number_pane_cp13

0xcf25,	// (0x000201ff) clock_digital_separator_pane_cp10

0x1852,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g1

0x1852,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g2

0xcf2d,	// (0x00020207) popup_clock_digital_analogue_window_cp2_g3

0x1852,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g4

0xcf2d,	// (0x00020207) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x00023014) popup_clock_digital_analogue_window_cp2_g

0xcf35,	// (0x0002020f) popup_clock_digital_analogue_window_cp2_t1

0xcf43,	// (0x0002021d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x0002301f) popup_clock_digital_analogue_window_cp2_t

0x5327,	// (0x00018601) clock_digital_number_pane_cp10_g1

0x5327,	// (0x00018601) clock_digital_number_pane_cp10_g2

0x0001,

0xfb21,	// (0x00022dfb) clock_digital_number_pane_cp10_g

0x5327,	// (0x00018601) clock_digital_separator_pane_cp10_g1

0x5327,	// (0x00018601) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb21,	// (0x00022dfb) clock_digital_separator_pane_cp10_g

0x704d,	// (0x0001a327) uniindi_top_pane_g3

0x705e,	// (0x0001a338) uniindi_top_pane_g4

0xf505,	// (0x000227df) vkb2_row_keypad_pane_ParamLimits

0xf505,	// (0x000227df) vkb2_row_keypad_pane

0x01d7,	// (0x000134b1) vkb2_cell_t_keypad_pane_ParamLimits

0x01d7,	// (0x000134b1) vkb2_cell_t_keypad_pane

0x01e7,	// (0x000134c1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x01e7,	// (0x000134c1) vkb2_cell_t_keypad_pane_cp08

0x01fc,	// (0x000134d6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x01fc,	// (0x000134d6) vkb2_cell_t_keypad_pane_cp09

0x0210,	// (0x000134ea) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0210,	// (0x000134ea) vkb2_cell_t_keypad_pane_cp01

0x0221,	// (0x000134fb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0221,	// (0x000134fb) vkb2_cell_t_keypad_pane_cp02

0x0232,	// (0x0001350c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0232,	// (0x0001350c) vkb2_cell_t_keypad_pane_cp03

0x0243,	// (0x0001351d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0243,	// (0x0001351d) vkb2_cell_t_keypad_pane_cp04

0x0254,	// (0x0001352e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0254,	// (0x0001352e) vkb2_cell_t_keypad_pane_cp05

0x0265,	// (0x0001353f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0265,	// (0x0001353f) vkb2_cell_t_keypad_pane_cp06

0x0278,	// (0x00013552) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0278,	// (0x00013552) vkb2_cell_t_keypad_pane_cp07

0x028d,	// (0x00013567) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x028d,	// (0x00013567) vkb2_cell_t_keypad_pane_cp10

0xf260,	// (0x0002253a) vkb2_cell_t_keypad_pane_g1

0x7639,	// (0x0001a913) vkb2_cell_t_keypad_pane_t1

0xddac,	// (0x00021086) popup_grid_graphic2_window

0xd282,	// (0x0002055c) aid_size_cell_graphic2_ParamLimits

0xd282,	// (0x0002055c) aid_size_cell_graphic2

0xd2c0,	// (0x0002059a) bg_popup_window_pane_cp21_ParamLimits

0xd2c0,	// (0x0002059a) bg_popup_window_pane_cp21

0xd2ce,	// (0x000205a8) graphic2_pages_pane_ParamLimits

0xd2ce,	// (0x000205a8) graphic2_pages_pane

0xd326,	// (0x00020600) grid_graphic2_control_pane_ParamLimits

0xd326,	// (0x00020600) grid_graphic2_control_pane

0xd36e,	// (0x00020648) grid_graphic2_pane_ParamLimits

0xd36e,	// (0x00020648) grid_graphic2_pane

0xd3f9,	// (0x000206d3) cell_graphic2_pane

0xddac,	// (0x00021086) main_comp_mode_pane

0x6855,	// (0x00019b2f) list_ai3_gene_pane_ParamLimits

0xcc35,	// (0x0001ff0f) bg_popup_window_pane_cp19_ParamLimits

0x6c8a,	// (0x00019f64) bg_touch_area_indi_pane_ParamLimits

0x6c8a,	// (0x00019f64) bg_touch_area_indi_pane

0x6ca0,	// (0x00019f7a) bg_touch_area_indi_pane_cp01_ParamLimits

0x6ca0,	// (0x00019f7a) bg_touch_area_indi_pane_cp01

0x6cb6,	// (0x00019f90) bg_touch_area_indi_pane_cp02_ParamLimits

0x6cb6,	// (0x00019f90) bg_touch_area_indi_pane_cp02

0x6cd0,	// (0x00019faa) bg_touch_area_indi_pane_cp03_ParamLimits

0x6cd0,	// (0x00019faa) bg_touch_area_indi_pane_cp03

0x6cea,	// (0x00019fc4) popup_slider_window_g1_ParamLimits

0x6d06,	// (0x00019fe0) popup_slider_window_g2_ParamLimits

0x6d22,	// (0x00019ffc) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x00022fa9) popup_slider_window_g_ParamLimits

0x6d88,	// (0x0001a062) popup_slider_window_t1_ParamLimits

0x6dfc,	// (0x0001a0d6) small_volume_slider_vertical_pane_ParamLimits

0xd3f9,	// (0x000206d3) cell_graphic2_pane_ParamLimits

0xd45b,	// (0x00020735) bg_button_pane_cp10_ParamLimits

0xd45b,	// (0x00020735) bg_button_pane_cp10

0xd46e,	// (0x00020748) bg_button_pane_cp11_ParamLimits

0xd46e,	// (0x00020748) bg_button_pane_cp11

0xd481,	// (0x0002075b) graphic2_pages_pane_g1_ParamLimits

0xd481,	// (0x0002075b) graphic2_pages_pane_g1

0xd49c,	// (0x00020776) graphic2_pages_pane_g2_ParamLimits

0xd49c,	// (0x00020776) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x0002306d) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x0002306d) graphic2_pages_pane_g

0xd4b4,	// (0x0002078e) graphic2_pages_pane_t1_ParamLimits

0xd4b4,	// (0x0002078e) graphic2_pages_pane_t1

0xd4cc,	// (0x000207a6) cell_graphic2_control_pane_ParamLimits

0xd4cc,	// (0x000207a6) cell_graphic2_control_pane

0xd500,	// (0x000207da) cell_graphic2_pane_g1_ParamLimits

0xd500,	// (0x000207da) cell_graphic2_pane_g1

0xc6af,	// (0x0001f989) cell_graphic2_pane_g2_ParamLimits

0xc6af,	// (0x0001f989) cell_graphic2_pane_g2

0xc912,	// (0x0001fbec) cell_graphic2_pane_g3_ParamLimits

0xc912,	// (0x0001fbec) cell_graphic2_pane_g3

0xc6bc,	// (0x0001f996) cell_graphic2_pane_g4_ParamLimits

0xc6bc,	// (0x0001f996) cell_graphic2_pane_g4

0xd50d,	// (0x000207e7) cell_graphic2_pane_g5_ParamLimits

0xd50d,	// (0x000207e7) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x00023072) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x00023072) cell_graphic2_pane_g

0xd529,	// (0x00020803) cell_graphic2_pane_t1_ParamLimits

0xd529,	// (0x00020803) cell_graphic2_pane_t1

0x357d,	// (0x00016857) grid_highlight_pane_cp11_ParamLimits

0x357d,	// (0x00016857) grid_highlight_pane_cp11

0xc88e,	// (0x0001fb68) bg_button_pane_cp05

0xd572,	// (0x0002084c) cell_graphic2_control_pane_g1

0x5327,	// (0x00018601) bg_touch_area_indi_pane_g1

0x791c,	// (0x0001abf6) aid_cmod_rocker_key_size

0x7926,	// (0x0001ac00) aid_cmode_itu_key_size

0x7930,	// (0x0001ac0a) main_cmode_video_pane

0x793a,	// (0x0001ac14) main_comp_mode_itu_pane

0x7946,	// (0x0001ac20) main_comp_mode_rocker_pane

0x7952,	// (0x0001ac2c) cell_cmode_rocker_pane_ParamLimits

0x7952,	// (0x0001ac2c) cell_cmode_rocker_pane

0x7966,	// (0x0001ac40) cell_cmode_itu_pane_ParamLimits

0x7966,	// (0x0001ac40) cell_cmode_itu_pane

0xe46a,	// (0x00021744) bg_button_pane_cp06_ParamLimits

0xe46a,	// (0x00021744) bg_button_pane_cp06

0x55a2,	// (0x0001887c) cell_cmode_rocker_pane_g1_ParamLimits

0x55a2,	// (0x0001887c) cell_cmode_rocker_pane_g1

0x6ea3,	// (0x0001a17d) cell_cmode_rocker_pane_g2_ParamLimits

0x6ea3,	// (0x0001a17d) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x00023082) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x00023082) cell_cmode_rocker_pane_g

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp07

0x797d,	// (0x0001ac57) cell_cmode_itu_pane_g1

0x7986,	// (0x0001ac60) cell_cmode_itu_pane_t1

0x7994,	// (0x0001ac6e) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x00023087) cell_cmode_itu_pane_t

0x70d2,	// (0x0001a3ac) aid_touch_ctrl_left

0x70da,	// (0x0001a3b4) aid_touch_ctrl_right

0xc6d1,	// (0x0001f9ab) compa_mode_pane

0xd59a,	// (0x00020874) aid_cmod_rocker_key_size_cp

0xd5a4,	// (0x0002087e) aid_cmode_itu_key_size_cp

0x79b6,	// (0x0001ac90) compa_mode_pane_g1

0x79be,	// (0x0001ac98) compa_mode_pane_g2

0x79c6,	// (0x0001aca0) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x0002308c) compa_mode_pane_g

0xd5ae,	// (0x00020888) main_comp_mode_itu_pane_cp

0xd5b6,	// (0x00020890) main_comp_mode_rocker_pane_cp

0xd5be,	// (0x00020898) cell_cmode_itu_pane_cp_ParamLimits

0xd5be,	// (0x00020898) cell_cmode_itu_pane_cp

0xd5d3,	// (0x000208ad) cell_cmode_rocker_pane_cp_ParamLimits

0xd5d3,	// (0x000208ad) cell_cmode_rocker_pane_cp

0xe46a,	// (0x00021744) bg_button_pane_cp06_cp_ParamLimits

0xe46a,	// (0x00021744) bg_button_pane_cp06_cp

0x55a2,	// (0x0001887c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x55a2,	// (0x0001887c) cell_cmode_rocker_pane_g1_cp

0x5327,	// (0x00018601) cell_cmode_rocker_pane_g2_cp

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp07_cp

0xd5e5,	// (0x000208bf) cell_cmode_itu_pane_g1_cp

0xd5ee,	// (0x000208c8) cell_cmode_itu_pane_t1_cp

0xd5ee,	// (0x000208c8) cell_cmode_itu_pane_t2_cp

0xbdb2,	// (0x0001f08c) settings_code_pane_cp2

0xc741,	// (0x0001fa1b) bg_popup_window_pane_cp3_ParamLimits

0xe0e8,	// (0x000213c2) heading_pane_cp3_ParamLimits

0xe0f7,	// (0x000213d1) listscroll_popup_graphic_pane_ParamLimits

0xf06e,	// (0x00022348) fep_hwr_aid_pane_ParamLimits

0xf3f0,	// (0x000226ca) aid_touch_sctrl_top_ParamLimits

0xf40b,	// (0x000226e5) sctrl_sk_top_pane_g1_ParamLimits

0xf260,	// (0x0002253a) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00022fc2) sctrl_sk_top_pane_g_ParamLimits

0xf418,	// (0x000226f2) sctrl_sk_top_pane_t1_ParamLimits

0xf3f0,	// (0x000226ca) aid_touch_sctrl_bottom_ParamLimits

0xf418,	// (0x000226f2) sctrl_sk_bottom_pane_t1_ParamLimits

0x7017,	// (0x0001a2f1) aid_area_touch_clock

0xa3a4,	// (0x0001d67e) aid_vkb2_area_top_pane_cell_ParamLimits

0xa3a4,	// (0x0001d67e) aid_vkb2_area_top_pane_cell

0xa454,	// (0x0001d72e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa454,	// (0x0001d72e) aid_vkb2_area_bottom_pane_cell

0x7584,	// (0x0001a85e) popup_char_count_window

0x7a1c,	// (0x0001acf6) popup_char_count_window_g1

0x7a25,	// (0x0001acff) popup_char_count_window_g2

0x7a2e,	// (0x0001ad08) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x00023093) popup_char_count_window_g

0x7a37,	// (0x0001ad11) popup_char_count_window_t1

0xf458,	// (0x00022732) popup_fep_char_preview_window_ParamLimits

0xf458,	// (0x00022732) popup_fep_char_preview_window

0xa3c4,	// (0x0001d69e) vkb2_top_candi_pane_ParamLimits

0xa3c4,	// (0x0001d69e) vkb2_top_candi_pane

0xd5fc,	// (0x000208d6) cell_vkb2_top_candi_pane_ParamLimits

0xd5fc,	// (0x000208d6) cell_vkb2_top_candi_pane

0x02a2,	// (0x0001357c) bg_popup_fep_char_preview_window_ParamLimits

0x02a2,	// (0x0001357c) bg_popup_fep_char_preview_window

0x02b0,	// (0x0001358a) popup_fep_char_preview_window_t1_ParamLimits

0x02b0,	// (0x0001358a) popup_fep_char_preview_window_t1

0x7ab4,	// (0x0001ad8e) bg_popup_fep_char_preview_window_g1

0x7abc,	// (0x0001ad96) bg_popup_fep_char_preview_window_g2

0x7ac4,	// (0x0001ad9e) bg_popup_fep_char_preview_window_g3

0x7acc,	// (0x0001ada6) bg_popup_fep_char_preview_window_g4

0x7ad4,	// (0x0001adae) bg_popup_fep_char_preview_window_g5

0x7adc,	// (0x0001adb6) bg_popup_fep_char_preview_window_g6

0x7ae4,	// (0x0001adbe) bg_popup_fep_char_preview_window_g7

0x7aec,	// (0x0001adc6) bg_popup_fep_char_preview_window_g8

0x7af4,	// (0x0001adce) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x0002309a) bg_popup_fep_char_preview_window_g

0xf260,	// (0x0002253a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf260,	// (0x0002253a) cell_vkb2_top_candi_pane_g1

0xf26e,	// (0x00022548) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf26e,	// (0x00022548) cell_vkb2_top_candi_pane_g2

0x7a93,	// (0x0001ad6d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7a93,	// (0x0001ad6d) cell_vkb2_top_candi_pane_g3

0x02f2,	// (0x000135cc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x02f2,	// (0x000135cc) cell_vkb2_top_candi_pane_g4

0x5b96,	// (0x00018e70) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5b96,	// (0x00018e70) cell_vkb2_top_candi_pane_g5

0x0313,	// (0x000135ed) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0313,	// (0x000135ed) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x000230af) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x000230af) cell_vkb2_top_candi_pane_g

0x0321,	// (0x000135fb) cell_vkb2_top_candi_pane_t1

0xee7d,	// (0x00022157) aid_size_touch_slider_mark_ParamLimits

0xee7d,	// (0x00022157) aid_size_touch_slider_mark

0xd30a,	// (0x000205e4) grid_graphic2_catg_pane_ParamLimits

0xd30a,	// (0x000205e4) grid_graphic2_catg_pane

0xd3c8,	// (0x000206a2) popup_grid_graphic2_window_t1_ParamLimits

0xd3c8,	// (0x000206a2) popup_grid_graphic2_window_t1

0xd3de,	// (0x000206b8) popup_grid_graphic2_window_t2_ParamLimits

0xd3de,	// (0x000206b8) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x00023068) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x00023068) popup_grid_graphic2_window_t

0xc88e,	// (0x0001fb68) bg_button_pane_cp05_ParamLimits

0xd572,	// (0x0002084c) cell_graphic2_control_pane_g1_ParamLimits

0xd660,	// (0x0002093a) cell_graphic2_catg_pane_ParamLimits

0xd660,	// (0x0002093a) cell_graphic2_catg_pane

0xc6d1,	// (0x0001f9ab) bg_button_pane_cp12

0xd672,	// (0x0002094c) cell_graphic2_catg_pane_g1

0x6fe1,	// (0x0001a2bb) cell_tb_ext_pane_t1_ParamLimits

0x00d4,	// (0x000133ae) vkb2_top_cell_right_narrow_pane_ParamLimits

0x00d4,	// (0x000133ae) vkb2_top_cell_right_narrow_pane

0x00ec,	// (0x000133c6) vkb2_top_cell_right_wide_pane_ParamLimits

0x00ec,	// (0x000133c6) vkb2_top_cell_right_wide_pane

0xef02,	// (0x000221dc) bg_vkb2_func_pane_ParamLimits

0xef02,	// (0x000221dc) bg_vkb2_func_pane

0x015d,	// (0x00013437) vkb2_top_cell_left_pane_g1_ParamLimits

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp03_ParamLimits

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp03

0x01bb,	// (0x00013495) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x27c5,	// (0x00015a9f) bg_vkb2_func_pane_g1

0x27cd,	// (0x00015aa7) bg_vkb2_func_pane_g2

0x27dd,	// (0x00015ab7) bg_vkb2_func_pane_g3

0x27d5,	// (0x00015aaf) bg_vkb2_func_pane_g4

0x27e5,	// (0x00015abf) bg_vkb2_func_pane_g5

0x27ed,	// (0x00015ac7) bg_vkb2_func_pane_g6

0x27f5,	// (0x00015acf) bg_vkb2_func_pane_g7

0x27fd,	// (0x00015ad7) bg_vkb2_func_pane_g8

0x27bd,	// (0x00015a97) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x000230bc) bg_vkb2_func_pane_g

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp01_ParamLimits

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp01

0x015d,	// (0x00013437) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x015d,	// (0x00013437) vkb2_top_cell_right_wide_pane_g1

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp02_ParamLimits

0xef02,	// (0x000221dc) bg_vkb2_fuc_pane_cp02

0x033f,	// (0x00013619) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x033f,	// (0x00013619) vkb2_top_cell_right_narrow_pane_g1

0xcb77,	// (0x0001fe51) aid_touch_area_decrease_ParamLimits

0xcb77,	// (0x0001fe51) aid_touch_area_decrease

0xcbb1,	// (0x0001fe8b) aid_touch_area_increase_ParamLimits

0xcbb1,	// (0x0001fe8b) aid_touch_area_increase

0xcbd9,	// (0x0001feb3) aid_touch_area_mute_ParamLimits

0xcbd9,	// (0x0001feb3) aid_touch_area_mute

0xcc01,	// (0x0001fedb) aid_touch_area_slider_ParamLimits

0xcc01,	// (0x0001fedb) aid_touch_area_slider

0xcc41,	// (0x0001ff1b) popup_slider_window_g4_ParamLimits

0xcc41,	// (0x0001ff1b) popup_slider_window_g4

0xcc69,	// (0x0001ff43) popup_slider_window_g5_ParamLimits

0xcc69,	// (0x0001ff43) popup_slider_window_g5

0xcc9d,	// (0x0001ff77) popup_slider_window_g6_ParamLimits

0xcc9d,	// (0x0001ff77) popup_slider_window_g6

0x6db6,	// (0x0001a090) popup_slider_window_t2_ParamLimits

0x6db6,	// (0x0001a090) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x00022fb6) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x00022fb6) popup_slider_window_t

0xccb9,	// (0x0001ff93) slider_pane_ParamLimits

0xccb9,	// (0x0001ff93) slider_pane

0x7b17,	// (0x0001adf1) slider_pane_g1_ParamLimits

0x7b17,	// (0x0001adf1) slider_pane_g1

0x7b2b,	// (0x0001ae05) slider_pane_g2_ParamLimits

0x7b2b,	// (0x0001ae05) slider_pane_g2

0x7b41,	// (0x0001ae1b) slider_pane_g3_ParamLimits

0x7b41,	// (0x0001ae1b) slider_pane_g3

0x0003,

0xfdf5,	// (0x000230cf) slider_pane_g_ParamLimits

0xfdf5,	// (0x000230cf) slider_pane_g

0x9f93,	// (0x0001d26d) popup_tb_float_extension_window_ParamLimits

0x9f93,	// (0x0001d26d) popup_tb_float_extension_window

0x7b6d,	// (0x0001ae47) aid_size_cell_tb_float_ext

0xc6d1,	// (0x0001f9ab) bg_popup_sub_window_cp28

0x7b79,	// (0x0001ae53) grid_tb_float_ext_pane

0x7b85,	// (0x0001ae5f) cell_tb_float_ext_pane_ParamLimits

0x7b85,	// (0x0001ae5f) cell_tb_float_ext_pane

0x7ba1,	// (0x0001ae7b) cell_tb_float_ext_pane_g1

0x7baa,	// (0x0001ae84) grid_highlight_pane_cp12

0xa120,	// (0x0001d3fa) cell_last_hwr_side_pane_ParamLimits

0xa120,	// (0x0001d3fa) cell_last_hwr_side_pane

0x5327,	// (0x00018601) cell_last_hwr_side_pane_g1

0x7bb3,	// (0x0001ae8d) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x000230d8) cell_last_hwr_side_pane_g

0xa531,	// (0x0001d80b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa531,	// (0x0001d80b) vkb2_area_bottom_space_btn_pane

0xf260,	// (0x0002253a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7639,	// (0x0001a913) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0321,	// (0x000135fb) cell_vkb2_top_candi_pane_t1_ParamLimits

0x035b,	// (0x00013635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x035b,	// (0x00013635) vkb2_area_bottom_space_btn_pane_g1

0x0395,	// (0x0001366f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0395,	// (0x0001366f) vkb2_area_bottom_space_btn_pane_g2

0x03cb,	// (0x000136a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x03cb,	// (0x000136a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x000230dd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x000230dd) vkb2_area_bottom_space_btn_pane_g

0xf125,	// (0x000223ff) cel_fep_hwr_func_pane_ParamLimits

0xf125,	// (0x000223ff) cel_fep_hwr_func_pane

0xa0f5,	// (0x0001d3cf) cell_hwr_side_button_pane_ParamLimits

0xa0f5,	// (0x0001d3cf) cell_hwr_side_button_pane

0x7017,	// (0x0001a2f1) aid_area_touch_clock_ParamLimits

0xc88e,	// (0x0001fb68) bg_uniindi_top_pane_ParamLimits

0x702b,	// (0x0001a305) uniindi_top_pane_g1_ParamLimits

0x7041,	// (0x0001a31b) uniindi_top_pane_g2_ParamLimits

0x704d,	// (0x0001a327) uniindi_top_pane_g3_ParamLimits

0x705e,	// (0x0001a338) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x00022fee) uniindi_top_pane_g_ParamLimits

0x706b,	// (0x0001a345) uniindi_top_pane_t1_ParamLimits

0xc88e,	// (0x0001fb68) bg_vkb2_func_pane_cp01_ParamLimits

0xc88e,	// (0x0001fb68) bg_vkb2_func_pane_cp01

0x7bbc,	// (0x0001ae96) cel_fep_hwr_func_pane_g1_ParamLimits

0x7bbc,	// (0x0001ae96) cel_fep_hwr_func_pane_g1

0xc88e,	// (0x0001fb68) bg_vkb2_func_pane_cp02_ParamLimits

0xc88e,	// (0x0001fb68) bg_vkb2_func_pane_cp02

0x7bbc,	// (0x0001ae96) cell_hwr_side_button_pane_g1_ParamLimits

0x7bbc,	// (0x0001ae96) cell_hwr_side_button_pane_g1

0x260a,	// (0x000158e4) status_pane_g4_ParamLimits

0x260a,	// (0x000158e4) status_pane_g4

0x2624,	// (0x000158fe) status_pane_t1

0x50e1,	// (0x000183bb) form2_midp_gauge_slider_cont_pane

0x50e9,	// (0x000183c3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc0fe,	// (0x0001f3d8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc110,	// (0x0001f3ea) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad4,	// (0x00022dae) form2_midp_gauge_slider_pane_t_ParamLimits

0x511f,	// (0x000183f9) form2_midp_slider_pane_ParamLimits

0xf43c,	// (0x00022716) aid_size_cell_func_vkb2_ParamLimits

0xf43c,	// (0x00022716) aid_size_cell_func_vkb2

0x7b59,	// (0x0001ae33) slider_pane_g4_ParamLimits

0x7b59,	// (0x0001ae33) slider_pane_g4

0xa59a,	// (0x0001d874) form2_midp_gauge_slider_pane_t2_cp01

0xa5a8,	// (0x0001d882) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa5a8,	// (0x0001d882) form2_midp_gauge_slider_pane_t3_cp01

0x0440,	// (0x0001371a) form2_midp_slider_pane_cp01

0xc6d1,	// (0x0001f9ab) navi_smil_pane

0x7bf5,	// (0x0001aecf) navi_smil_pane_g1

0x7bfd,	// (0x0001aed7) navi_smil_pane_t1

0x7bca,	// (0x0001aea4) form2_midp_slider_pane_g1

0x7bd3,	// (0x0001aead) form2_midp_slider_pane_g2

0x7bdb,	// (0x0001aeb5) form2_midp_slider_pane_g3

0x7bca,	// (0x0001aea4) form2_midp_slider_pane_g4

0xd67b,	// (0x00020955) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x000230e6) form2_midp_slider_pane_g

0x0405,	// (0x000136df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0405,	// (0x000136df) vkb2_area_bottom_space_btn_pane_g4

0xb6c5,	// (0x0001e99f) lc0_navi_pane_ParamLimits

0xb6c5,	// (0x0001e99f) lc0_navi_pane

0xb735,	// (0x0001ea0f) lc0_stat_indi_pane_ParamLimits

0xb735,	// (0x0001ea0f) lc0_stat_indi_pane

0xb74a,	// (0x0001ea24) ls0_title_pane_ParamLimits

0xb74a,	// (0x0001ea24) ls0_title_pane

0xe46a,	// (0x00021744) bg_popup_sub_pane_cp14_ParamLimits

0x6ffe,	// (0x0001a2d8) list_uniindi_pane_ParamLimits

0x700a,	// (0x0001a2e4) uniindi_top_pane_ParamLimits

0x70aa,	// (0x0001a384) list_single_uniindi_pane_g1_ParamLimits

0x70bd,	// (0x0001a397) list_single_uniindi_pane_t1_ParamLimits

0xa5c5,	// (0x0001d89f) lc0_stat_clock_pane_ParamLimits

0xa5c5,	// (0x0001d89f) lc0_stat_clock_pane

0xd684,	// (0x0002095e) lc0_stat_indi_pane_g1_ParamLimits

0xd684,	// (0x0002095e) lc0_stat_indi_pane_g1

0xd691,	// (0x0002096b) lc0_stat_indi_pane_g2_ParamLimits

0xd691,	// (0x0002096b) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x000230f1) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x000230f1) lc0_stat_indi_pane_g

0xa5d2,	// (0x0001d8ac) lc0_uni_indicator_pane_ParamLimits

0xa5d2,	// (0x0001d8ac) lc0_uni_indicator_pane

0xd69e,	// (0x00020978) ls0_title_pane_g1_ParamLimits

0xd69e,	// (0x00020978) ls0_title_pane_g1

0xd6b2,	// (0x0002098c) ls0_title_pane_t1_ParamLimits

0xd6b2,	// (0x0002098c) ls0_title_pane_t1

0xa5df,	// (0x0001d8b9) lc0_uni_indicator_pane_g1_ParamLimits

0xa5df,	// (0x0001d8b9) lc0_uni_indicator_pane_g1

0x7c6f,	// (0x0001af49) lc0_stat_clock_pane_t1

0xddac,	// (0x00021086) main_ai5_pane

0x7c85,	// (0x0001af5f) ai5_sk_pane_ParamLimits

0x7c85,	// (0x0001af5f) ai5_sk_pane

0xd6e8,	// (0x000209c2) cell_ai5_widget_pane_ParamLimits

0xd6e8,	// (0x000209c2) cell_ai5_widget_pane

0xd767,	// (0x00020a41) aid_size_cell_widget_grid

0x7d3f,	// (0x0001b019) bg_ai5_widget_pane_ParamLimits

0x7d3f,	// (0x0001b019) bg_ai5_widget_pane

0xd79d,	// (0x00020a77) cell_ai5_widget_pane_g2

0xd7b1,	// (0x00020a8b) cell_ai5_widget_pane_g3

0xd7cb,	// (0x00020aa5) cell_ai5_widget_pane_g4

0xd7db,	// (0x00020ab5) cell_ai5_widget_pane_g5

0x7e0b,	// (0x0001b0e5) cell_ai5_widget_pane_g6

0xd7eb,	// (0x00020ac5) cell_ai5_widget_pane_g7

0xd80f,	// (0x00020ae9) cell_ai5_widget_pane_t1_ParamLimits

0xd80f,	// (0x00020ae9) cell_ai5_widget_pane_t1

0x7ea1,	// (0x0001b17b) cell_ai5_widget_pane_t2_ParamLimits

0x7ea1,	// (0x0001b17b) cell_ai5_widget_pane_t2

0x7eb9,	// (0x0001b193) cell_ai5_widget_pane_t3_ParamLimits

0x7eb9,	// (0x0001b193) cell_ai5_widget_pane_t3

0xd82c,	// (0x00020b06) cell_ai5_widget_pane_t4_ParamLimits

0xd82c,	// (0x00020b06) cell_ai5_widget_pane_t4

0xd852,	// (0x00020b2c) cell_ai5_widget_pane_t5_ParamLimits

0xd852,	// (0x00020b2c) cell_ai5_widget_pane_t5

0x7f17,	// (0x0001b1f1) cell_ai5_widget_pane_t6_ParamLimits

0x7f17,	// (0x0001b1f1) cell_ai5_widget_pane_t6

0x7f29,	// (0x0001b203) cell_ai5_widget_pane_t7_ParamLimits

0x7f29,	// (0x0001b203) cell_ai5_widget_pane_t7

0x7f48,	// (0x0001b222) cell_ai5_widget_pane_t8_ParamLimits

0x7f48,	// (0x0001b222) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x00023111) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00023111) cell_ai5_widget_pane_t

0xd8e4,	// (0x00020bbe) grid_ai5_widget_pane

0xe46a,	// (0x00021744) highlight_cell_ai5_widget_pane_ParamLimits

0xe46a,	// (0x00021744) highlight_cell_ai5_widget_pane

0xd8f8,	// (0x00020bd2) ai5_sk_left_pane

0xd902,	// (0x00020bdc) ai5_sk_middle_pane

0xd90c,	// (0x00020be6) ai5_sk_right_pane

0x7ffe,	// (0x0001b2d8) bg_ai5_widget_pane_g1_ParamLimits

0x7ffe,	// (0x0001b2d8) bg_ai5_widget_pane_g1

0x800a,	// (0x0001b2e4) bg_ai5_widget_pane_g2_ParamLimits

0x800a,	// (0x0001b2e4) bg_ai5_widget_pane_g2

0x8016,	// (0x0001b2f0) bg_ai5_widget_pane_g3_ParamLimits

0x8016,	// (0x0001b2f0) bg_ai5_widget_pane_g3

0x8022,	// (0x0001b2fc) bg_ai5_widget_pane_g4_ParamLimits

0x8022,	// (0x0001b2fc) bg_ai5_widget_pane_g4

0x802e,	// (0x0001b308) bg_ai5_widget_pane_g5_ParamLimits

0x802e,	// (0x0001b308) bg_ai5_widget_pane_g5

0x803a,	// (0x0001b314) bg_ai5_widget_pane_g6_ParamLimits

0x803a,	// (0x0001b314) bg_ai5_widget_pane_g6

0x8046,	// (0x0001b320) bg_ai5_widget_pane_g7_ParamLimits

0x8046,	// (0x0001b320) bg_ai5_widget_pane_g7

0x8052,	// (0x0001b32c) bg_ai5_widget_pane_g8_ParamLimits

0x8052,	// (0x0001b32c) bg_ai5_widget_pane_g8

0x805e,	// (0x0001b338) bg_ai5_widget_pane_g9_ParamLimits

0x805e,	// (0x0001b338) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0002312a) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0002312a) bg_ai5_widget_pane_g

0xd942,	// (0x00020c1c) cell_shortcut_ai5_widget_pane_ParamLimits

0xd942,	// (0x00020c1c) cell_shortcut_ai5_widget_pane

0x1f1c,	// (0x000151f6) bg_cell_shortcut_ai5_widget_pane

0x80a9,	// (0x0001b383) cell_grid_ai5_widget_pane_g1

0x1f1c,	// (0x000151f6) highlight_cell_shortcut_ai5_widget_pane

0x27c5,	// (0x00015a9f) ai5_sk_left_pane_g1

0x80b2,	// (0x0001b38c) ai5_sk_left_pane_g2

0x80ba,	// (0x0001b394) ai5_sk_left_pane_g3

0x80c2,	// (0x0001b39c) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0002313d) ai5_sk_left_pane_g

0x80ca,	// (0x0001b3a4) ai5_sk_left_pane_t1

0x27cd,	// (0x00015aa7) ai5_sk_right_pane_g1

0x80d8,	// (0x0001b3b2) ai5_sk_right_pane_g2

0x80e0,	// (0x0001b3ba) ai5_sk_right_pane_g3

0x80e8,	// (0x0001b3c2) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x00023146) ai5_sk_right_pane_g

0x80f0,	// (0x0001b3ca) ai5_sk_right_pane_t1

0x27cd,	// (0x00015aa7) ai5_sk_middle_pane_g1

0x27c5,	// (0x00015a9f) ai5_sk_middle_pane_g2

0x27e5,	// (0x00015abf) ai5_sk_middle_pane_g3

0x80e0,	// (0x0001b3ba) ai5_sk_middle_pane_g4

0x80ba,	// (0x0001b394) ai5_sk_middle_pane_g5

0x80fe,	// (0x0001b3d8) ai5_sk_middle_pane_g6

0xd955,	// (0x00020c2f) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0002314f) ai5_sk_middle_pane_g

0xb5b1,	// (0x0001e88b) aid_touch_area_size_lc0_ParamLimits

0xb5b1,	// (0x0001e88b) aid_touch_area_size_lc0

0xf28f,	// (0x00022569) cell_hwr_candidate_pane_t1_ParamLimits

0x22d1,	// (0x000155ab) aid_touch_navi_pane

0xb853,	// (0x0001eb2d) status_dt_navi_pane_ParamLimits

0xb853,	// (0x0001eb2d) status_dt_navi_pane

0xb86b,	// (0x0001eb45) status_dt_sta_pane_ParamLimits

0xb86b,	// (0x0001eb45) status_dt_sta_pane

0xd95d,	// (0x00020c37) dt_sta_controll_pane

0xd96a,	// (0x00020c44) dt_sta_indi_pane

0xd977,	// (0x00020c51) dt_sta_title_pane

0xc88e,	// (0x0001fb68) bg_dt_sta_indi_pane_ParamLimits

0xc88e,	// (0x0001fb68) bg_dt_sta_indi_pane

0xd989,	// (0x00020c63) dt_sta_battery_pane

0xd991,	// (0x00020c6b) dt_sta_indi_pane_g1

0xd99a,	// (0x00020c74) dt_sta_indi_pane_g2

0xd9a3,	// (0x00020c7d) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x0002315e) dt_sta_indi_pane_g

0xd9ac,	// (0x00020c86) dt_sta_signal_pane

0xe46a,	// (0x00021744) bg_dt_sta_title_pane_ParamLimits

0xe46a,	// (0x00021744) bg_dt_sta_title_pane

0xd9b5,	// (0x00020c8f) dt_sta_title_pane_g1

0xd9bd,	// (0x00020c97) dt_sta_title_pane_t1_ParamLimits

0xd9bd,	// (0x00020c97) dt_sta_title_pane_t1

0xc6d1,	// (0x0001f9ab) bg_dt_sta_control_pane

0xd9d2,	// (0x00020cac) dt_sta_controll_pane_g1

0xd9db,	// (0x00020cb5) bg_dt_sta_title_pane_g1

0xd9e4,	// (0x00020cbe) bg_dt_sta_title_pane_g2

0xd9ed,	// (0x00020cc7) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x00023165) bg_dt_sta_title_pane_g

0x5327,	// (0x00018601) bg_dt_sta_indi_pane_g1

0x81ac,	// (0x0001b486) dt_sta_signal_pane_g1

0x81b4,	// (0x0001b48e) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x0002316c) dt_sta_signal_pane_g

0x81bc,	// (0x0001b496) dt_sta_battery_pane_g1

0x81c5,	// (0x0001b49f) dt_sta_battery_pane_t1

0x5327,	// (0x00018601) bg_dt_sta_control_pane_g1

0x1979,	// (0x00014c53) fep_china_uni_eep_pane

0x1981,	// (0x00014c5b) fep_china_uni_entry_pane_ParamLimits

0x1991,	// (0x00014c6b) popup_fep_china_uni_window_g1_ParamLimits

0x19a1,	// (0x00014c7b) popup_fep_china_uni_window_g2_ParamLimits

0x19a1,	// (0x00014c7b) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x000229cb) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x000229cb) popup_fep_china_uni_window_g

0x81d4,	// (0x0001b4ae) fep_china_uni_eep_pane_g1

0x81dc,	// (0x0001b4b6) fep_china_uni_eep_pane_t1

0x7bec,	// (0x0001aec6) aid_touch_area_size_smil_player

0x2423,	// (0x000156fd) lc0_clock_pane

0x2618,	// (0x000158f2) status_pane_g5_ParamLimits

0x2618,	// (0x000158f2) status_pane_g5

0x9ab9,	// (0x0001cd93) popup_keymap_window

0x25de,	// (0x000158b8) status_icon_pane

0xd7b1,	// (0x00020a8b) cell_ai5_widget_pane_g3_ParamLimits

0xd7cb,	// (0x00020aa5) cell_ai5_widget_pane_g4_ParamLimits

0xd7db,	// (0x00020ab5) cell_ai5_widget_pane_g5_ParamLimits

0x7e24,	// (0x0001b0fe) cell_ai5_widget_pane_g8_ParamLimits

0x7e24,	// (0x0001b0fe) cell_ai5_widget_pane_g8

0x7e38,	// (0x0001b112) cell_ai5_widget_pane_g9_ParamLimits

0x7e38,	// (0x0001b112) cell_ai5_widget_pane_g9

0x7e4c,	// (0x0001b126) cell_ai5_widget_pane_g10_ParamLimits

0x7e4c,	// (0x0001b126) cell_ai5_widget_pane_g10

0x81eb,	// (0x0001b4c5) status_icon_pane_g1

0xc6d1,	// (0x0001f9ab) bg_popup_sub_pane_cp13

0x81f3,	// (0x0001b4cd) popup_keymap_window_t1

0x21f4,	// (0x000154ce) control_pane_g6_ParamLimits

0x21f4,	// (0x000154ce) control_pane_g6

0x2201,	// (0x000154db) control_pane_g7_ParamLimits

0x2201,	// (0x000154db) control_pane_g7

0x220e,	// (0x000154e8) control_pane_g8_ParamLimits

0x220e,	// (0x000154e8) control_pane_g8

0xd95d,	// (0x00020c37) dt_sta_controll_pane_ParamLimits

0xd96a,	// (0x00020c44) dt_sta_indi_pane_ParamLimits

0xd977,	// (0x00020c51) dt_sta_title_pane_ParamLimits

0xe325,	// (0x000215ff) aid_size_touch_scroll_bar_cale

0xde89,	// (0x00021163) popup_discreet_window_ParamLimits

0xde89,	// (0x00021163) popup_discreet_window

0x96fc,	// (0x0001c9d6) popup_sk_window

0x2f06,	// (0x000161e0) bg_popup_sub_pane_cp28_ParamLimits

0x2f06,	// (0x000161e0) bg_popup_sub_pane_cp28

0x8201,	// (0x0001b4db) popup_discreet_window_g1_ParamLimits

0x8201,	// (0x0001b4db) popup_discreet_window_g1

0x8221,	// (0x0001b4fb) popup_discreet_window_t1_ParamLimits

0x8221,	// (0x0001b4fb) popup_discreet_window_t1

0x823f,	// (0x0001b519) popup_discreet_window_t2_ParamLimits

0x823f,	// (0x0001b519) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x00023171) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x00023171) popup_discreet_window_t

0x0476,	// (0x00013750) popup_sk_window_g1

0x0480,	// (0x0001375a) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x00023178) popup_sk_window_g

0x0488,	// (0x00013762) popup_sk_window_t1

0x0496,	// (0x00013770) popup_sk_window_t1_copy1

0xd79d,	// (0x00020a77) cell_ai5_widget_pane_g2_ParamLimits

0xd872,	// (0x00020b4c) cell_ai5_widget_pane_t9_ParamLimits

0xd872,	// (0x00020b4c) cell_ai5_widget_pane_t9

0xc6d1,	// (0x0001f9ab) main_fep_fshwr2_pane

0xa5fe,	// (0x0001d8d8) aid_fshwr2_btn_pane

0xa612,	// (0x0001d8ec) aid_fshwr2_syb_pane

0xa626,	// (0x0001d900) aid_fshwr2_txt_pane

0xa636,	// (0x0001d910) fshwr2_func_candi_pane

0xa658,	// (0x0001d932) fshwr2_hwr_syb_pane

0xa67c,	// (0x0001d956) fshwr2_icf_pane

0xddac,	// (0x00021086) fshwr2_icf_bg_pane

0x0542,	// (0x0001381c) fshwr2_icf_pane_t1_ParamLimits

0x0542,	// (0x0001381c) fshwr2_icf_pane_t1

0x1852,	// (0x00014b2c) fshwr2_func_candi_pane_g1

0xd9f6,	// (0x00020cd0) fshwr2_func_candi_row_pane_ParamLimits

0xd9f6,	// (0x00020cd0) fshwr2_func_candi_row_pane

0xa6ac,	// (0x0001d986) cell_fshwr2_syb_pane_ParamLimits

0xa6ac,	// (0x0001d986) cell_fshwr2_syb_pane

0x057b,	// (0x00013855) fshwr2_hwr_syb_pane_g1_ParamLimits

0x057b,	// (0x00013855) fshwr2_hwr_syb_pane_g1

0xddac,	// (0x00021086) bg_popup_call_pane_cp01

0xa6d4,	// (0x0001d9ae) fshwr2_func_candi_cell_pane_ParamLimits

0xa6d4,	// (0x0001d9ae) fshwr2_func_candi_cell_pane

0x2ce6,	// (0x00015fc0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2ce6,	// (0x00015fc0) fshwr2_func_candi_cell_bg_pane

0xa71f,	// (0x0001d9f9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa71f,	// (0x0001d9f9) fshwr2_func_candi_cell_pane_g1

0xa756,	// (0x0001da30) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa756,	// (0x0001da30) fshwr2_func_candi_cell_pane_t1

0xddac,	// (0x00021086) bg_button_pane_cp08

0x224b,	// (0x00015525) cell_fshwr2_syb_bg_pane

0xa771,	// (0x0001da4b) cell_fshwr2_syb_bg_pane_g1

0xa785,	// (0x0001da5f) cell_fshwr2_syb_bg_pane_t1

0xe46a,	// (0x00021744) main_tmo_pane

0xbbb7,	// (0x0001ee91) uni_indicator_pane_g1_ParamLimits

0xbbcd,	// (0x0001eea7) uni_indicator_pane_g2_ParamLimits

0xbbe3,	// (0x0001eebd) uni_indicator_pane_g3_ParamLimits

0xbbf6,	// (0x0001eed0) uni_indicator_pane_g4_ParamLimits

0xbbf6,	// (0x0001eed0) uni_indicator_pane_g4

0x3a7d,	// (0x00016d57) uni_indicator_pane_g5_ParamLimits

0x3a7d,	// (0x00016d57) uni_indicator_pane_g5

0x3a7d,	// (0x00016d57) uni_indicator_pane_g6_ParamLimits

0x3a7d,	// (0x00016d57) uni_indicator_pane_g6

0xf8f0,	// (0x00022bca) uni_indicator_pane_g_ParamLimits

0xcb47,	// (0x0001fe21) popup_tmo_note_window_ParamLimits

0xcb47,	// (0x0001fe21) popup_tmo_note_window

0xf44a,	// (0x00022724) fshwr2_bg_pane

0xa747,	// (0x0001da21) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa747,	// (0x0001da21) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0002317d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0002317d) fshwr2_func_candi_cell_pane_g

0xf248,	// (0x00022522) bg_popup_window_pane_cp01

0x0642,	// (0x0001391c) bg_popup_window_pane_g1_cp01

0x82b4,	// (0x0001b58e) bg_popup_window_pane_cp22_ParamLimits

0x82b4,	// (0x0001b58e) bg_popup_window_pane_cp22

0x82c2,	// (0x0001b59c) listscroll_tmo_link_pane_ParamLimits

0x82c2,	// (0x0001b59c) listscroll_tmo_link_pane

0x8302,	// (0x0001b5dc) popup_tmo_note_window_g1_ParamLimits

0x8302,	// (0x0001b5dc) popup_tmo_note_window_g1

0x830f,	// (0x0001b5e9) tmo_note_info_pane_ParamLimits

0x830f,	// (0x0001b5e9) tmo_note_info_pane

0xda1d,	// (0x00020cf7) list_tmo_note_info_pane_g1_ParamLimits

0xda1d,	// (0x00020cf7) list_tmo_note_info_pane_g1

0x8340,	// (0x0001b61a) list_tmo_note_info_pane_g2_ParamLimits

0x8340,	// (0x0001b61a) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x00023182) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x00023182) list_tmo_note_info_pane_g

0x835c,	// (0x0001b636) list_tmo_note_info_text_pane_ParamLimits

0x835c,	// (0x0001b636) list_tmo_note_info_text_pane

0x83e1,	// (0x0001b6bb) list_tmo_link_pane

0x83ee,	// (0x0001b6c8) scroll_pane_cp20

0x83fb,	// (0x0001b6d5) list_single_tmo_link_pane_ParamLimits

0x83fb,	// (0x0001b6d5) list_single_tmo_link_pane

0x840b,	// (0x0001b6e5) list_single_tmo_link_pane_t1

0x8419,	// (0x0001b6f3) list_tmo_note_info_text_pane_t1_ParamLimits

0x8419,	// (0x0001b6f3) list_tmo_note_info_text_pane_t1

0xb140,	// (0x0001e41a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb140,	// (0x0001e41a) aid_size_touch_scroll_bar_cp01

0xb080,	// (0x0001e35a) aid_size_touch_slider_marker

0x96ec,	// (0x0001c9c6) popup_settings_window_ParamLimits

0x96ec,	// (0x0001c9c6) popup_settings_window

0x227f,	// (0x00015559) popup_candi_list_indi_window

0x22d1,	// (0x000155ab) aid_touch_navi_pane_ParamLimits

0xf3c4,	// (0x0002269e) rs_clock_indi_pane

0xf3cd,	// (0x000226a7) sctrl_sk_bottom_pane_ParamLimits

0xf3de,	// (0x000226b8) sctrl_sk_top_pane_ParamLimits

0xf472,	// (0x0002274c) popup_fep_tooltip_window

0xd767,	// (0x00020a41) aid_size_cell_widget_grid_ParamLimits

0xd786,	// (0x00020a60) cell_ai5_widget_pane_g1_ParamLimits

0xd786,	// (0x00020a60) cell_ai5_widget_pane_g1

0x7e0b,	// (0x0001b0e5) cell_ai5_widget_pane_g6_ParamLimits

0xd7eb,	// (0x00020ac5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x000230f6) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x000230f6) cell_ai5_widget_pane_g

0xd8a1,	// (0x00020b7b) cell_ai5_widget_pane_t10_ParamLimits

0xd8a1,	// (0x00020b7b) cell_ai5_widget_pane_t10

0xd8e4,	// (0x00020bbe) grid_ai5_widget_pane_ParamLimits

0xd916,	// (0x00020bf0) cell_contacts_ai5_widget_pane_ParamLimits

0xd916,	// (0x00020bf0) cell_contacts_ai5_widget_pane

0x8254,	// (0x0001b52e) popup_discreet_window_t3_ParamLimits

0x8254,	// (0x0001b52e) popup_discreet_window_t3

0xa698,	// (0x0001d972) popup_fshwr2_char_preview_window_ParamLimits

0xa698,	// (0x0001d972) popup_fshwr2_char_preview_window

0xda34,	// (0x00020d0e) tmo_note_info_pane_t1

0xda49,	// (0x00020d23) tmo_note_info_pane_t2

0xda62,	// (0x00020d3c) tmo_note_info_pane_t3

0x83bd,	// (0x0001b697) tmo_note_info_pane_t4

0x83cf,	// (0x0001b6a9) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x00023187) tmo_note_info_pane_t

0x83e1,	// (0x0001b6bb) list_tmo_link_pane_ParamLimits

0x83ee,	// (0x0001b6c8) scroll_pane_cp20_ParamLimits

0xddac,	// (0x00021086) bg_popup_fep_char_preview_window_cp01

0x8432,	// (0x0001b70c) popup_fshwr2_char_preview_window_t1

0x8440,	// (0x0001b71a) popup_candi_list_indi_window_g1

0x8449,	// (0x0001b723) bg_cell_contacts_ai5_widget_pane

0xda77,	// (0x00020d51) cell_contacts_ai5_widget_pane_g1

0x846a,	// (0x0001b744) cell_contacts_ai5_widget_pane_g2

0x8476,	// (0x0001b750) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x00023192) cell_contacts_ai5_widget_pane_g

0x8482,	// (0x0001b75c) cell_contacts_ai5_widget_pane_t1

0xe46a,	// (0x00021744) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84f9,	// (0x0001b7d3) settings_container_pane

0x1f1c,	// (0x000151f6) listscroll_set_pane_copy1

0x4725,	// (0x000179ff) scroll_pane_cp121_copy1

0x8505,	// (0x0001b7df) set_content_pane_copy1

0x850d,	// (0x0001b7e7) aid_height_set_list_copy1_ParamLimits

0x850d,	// (0x0001b7e7) aid_height_set_list_copy1

0x3c95,	// (0x00016f6f) aid_size_parent_copy1_ParamLimits

0x3c95,	// (0x00016f6f) aid_size_parent_copy1

0x8519,	// (0x0001b7f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8519,	// (0x0001b7f3) button_value_adjust_pane_cp6_copy1

0x224b,	// (0x00015525) list_highlight_pane_cp2_copy1_ParamLimits

0x224b,	// (0x00015525) list_highlight_pane_cp2_copy1

0x852d,	// (0x0001b807) list_set_pane_copy1_ParamLimits

0x852d,	// (0x0001b807) list_set_pane_copy1

0x8494,	// (0x0001b76e) main_pane_set_t1_copy1_ParamLimits

0x8494,	// (0x0001b76e) main_pane_set_t1_copy1

0x84ce,	// (0x0001b7a8) main_pane_set_t2_copy1_ParamLimits

0x84ce,	// (0x0001b7a8) main_pane_set_t2_copy1

0x85ee,	// (0x0001b8c8) main_pane_set_t3_copy1

0x85fc,	// (0x0001b8d6) main_pane_set_t4_copy1

0x84ed,	// (0x0001b7c7) set_content_pane_g1_copy1_ParamLimits

0x84ed,	// (0x0001b7c7) set_content_pane_g1_copy1

0x860a,	// (0x0001b8e4) setting_code_pane_copy1

0x8612,	// (0x0001b8ec) setting_slider_graphic_pane_copy1

0x8612,	// (0x0001b8ec) setting_slider_pane_copy1

0x861a,	// (0x0001b8f4) setting_text_pane_copy1

0x861a,	// (0x0001b8f4) setting_volume_pane_copy1

0x860a,	// (0x0001b8e4) settings_code_pane_cp2_copy1

0x8622,	// (0x0001b8fc) settings_code_pane_cp_copy1_ParamLimits

0x8622,	// (0x0001b8fc) settings_code_pane_cp_copy1

0x064b,	// (0x00013925) volume_set_pane_copy1

0x8636,	// (0x0001b910) volume_set_pane_g10_copy1

0x8642,	// (0x0001b91c) volume_set_pane_g1_copy1

0x864c,	// (0x0001b926) volume_set_pane_g2_copy1

0x8656,	// (0x0001b930) volume_set_pane_g3_copy1

0x8660,	// (0x0001b93a) volume_set_pane_g4_copy1

0x866a,	// (0x0001b944) volume_set_pane_g5_copy1

0x8674,	// (0x0001b94e) volume_set_pane_g6_copy1

0x867e,	// (0x0001b958) volume_set_pane_g7_copy1

0x8688,	// (0x0001b962) volume_set_pane_g8_copy1

0x8692,	// (0x0001b96c) volume_set_pane_g9_copy1

0xc741,	// (0x0001fa1b) bg_set_opt_pane_cp_copy1_ParamLimits

0xc741,	// (0x0001fa1b) bg_set_opt_pane_cp_copy1

0x0657,	// (0x00013931) setting_slider_pane_t1_copy1_ParamLimits

0x0657,	// (0x00013931) setting_slider_pane_t1_copy1

0x0676,	// (0x00013950) setting_slider_pane_t2_copy1_ParamLimits

0x0676,	// (0x00013950) setting_slider_pane_t2_copy1

0x0690,	// (0x0001396a) setting_slider_pane_t3_copy1_ParamLimits

0x0690,	// (0x0001396a) setting_slider_pane_t3_copy1

0x06a8,	// (0x00013982) slider_set_pane_copy1_ParamLimits

0x06a8,	// (0x00013982) slider_set_pane_copy1

0xe525,	// (0x000217ff) set_opt_bg_pane_g1_copy2

0xe52d,	// (0x00021807) set_opt_bg_pane_g2_copy2

0x869e,	// (0x0001b978) set_opt_bg_pane_g3_copy2

0xe53d,	// (0x00021817) set_opt_bg_pane_g4_copy2

0xe545,	// (0x0002181f) set_opt_bg_pane_g5_copy2

0xe54d,	// (0x00021827) set_opt_bg_pane_g6_copy2

0x86a8,	// (0x0001b982) set_opt_bg_pane_g7_copy2

0x86b2,	// (0x0001b98c) set_opt_bg_pane_g8_copy2

0x86bc,	// (0x0001b996) set_opt_bg_pane_g9_copy2

0x06be,	// (0x00013998) aid_size_touch_slider_mark_copy1_ParamLimits

0x06be,	// (0x00013998) aid_size_touch_slider_mark_copy1

0x86c6,	// (0x0001b9a0) slider_set_pane_g1_copy1

0x06d2,	// (0x000139ac) slider_set_pane_g2_copy1

0xee9d,	// (0x00022177) slider_set_pane_g3_copy1_ParamLimits

0xee9d,	// (0x00022177) slider_set_pane_g3_copy1

0xef10,	// (0x000221ea) slider_set_pane_g4_copy1_ParamLimits

0xef10,	// (0x000221ea) slider_set_pane_g4_copy1

0xef28,	// (0x00022202) slider_set_pane_g5_copy1_ParamLimits

0xef28,	// (0x00022202) slider_set_pane_g5_copy1

0xee9d,	// (0x00022177) slider_set_pane_g6_copy1_ParamLimits

0xee9d,	// (0x00022177) slider_set_pane_g6_copy1

0x06da,	// (0x000139b4) slider_set_pane_g7_copy1_ParamLimits

0x06da,	// (0x000139b4) slider_set_pane_g7_copy1

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp2_copy1

0x86cf,	// (0x0001b9a9) setting_slider_graphic_pane_g1_copy1

0x86d8,	// (0x0001b9b2) setting_slider_graphic_pane_t1_copy1

0x86e8,	// (0x0001b9c2) setting_slider_graphic_pane_t2_copy1

0x86f8,	// (0x0001b9d2) slider_set_pane_cp_copy1

0x8708,	// (0x0001b9e2) input_focus_pane_cp1_copy1

0x8711,	// (0x0001b9eb) list_set_text_pane_copy1

0x8719,	// (0x0001b9f3) setting_text_pane_g1_copy1

0xc766,	// (0x0001fa40) set_text_pane_t1_copy1

0x8708,	// (0x0001b9e2) input_focus_pane_cp2_copy1

0x8719,	// (0x0001b9f3) setting_code_pane_g1_copy1

0x8722,	// (0x0001b9fc) setting_code_pane_t1_copy1

0x452a,	// (0x00017804) list_set_graphic_pane_copy1

0xc6e5,	// (0x0001f9bf) bg_set_opt_pane_cp4_copy1

0x1c07,	// (0x00014ee1) list_set_graphic_pane_g1_copy1_ParamLimits

0x1c07,	// (0x00014ee1) list_set_graphic_pane_g1_copy1

0x8730,	// (0x0001ba0a) list_set_graphic_pane_g2_copy1

0x1c1f,	// (0x00014ef9) list_set_graphic_pane_t1_copy1_ParamLimits

0x1c1f,	// (0x00014ef9) list_set_graphic_pane_t1_copy1

0x5327,	// (0x00018601) rs_clock_indi_pane_g1

0x8738,	// (0x0001ba12) rs_clock_indi_pane_t1

0x8746,	// (0x0001ba20) rs_indi_pane

0x874e,	// (0x0001ba28) rs_indi_pane_g1

0x8757,	// (0x0001ba31) rs_indi_pane_g2

0x8440,	// (0x0001b71a) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x00023199) rs_indi_pane_g

0x1f1c,	// (0x000151f6) bg_popup_preview_window_pane_cp03

0x8760,	// (0x0001ba3a) popup_fep_tooltip_window_t1

0x6218,	// (0x000194f2) popup_note2_window_g2_ParamLimits

0x6218,	// (0x000194f2) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x00022f26) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x00022f26) popup_note2_window_g

0x681b,	// (0x00019af5) bg_popup_sub_pane_cp11_ParamLimits

0x6828,	// (0x00019b02) cell_ai3_links_pane_g1_ParamLimits

0x683f,	// (0x00019b19) cell_ai3_links_pane_t1

0xc766,	// (0x0001fa40) set_text_pane_t1_copy1_ParamLimits

0x1e1a,	// (0x000150f4) cell_graphic_popup_pane_cp2_ParamLimits

0x1e1a,	// (0x000150f4) cell_graphic_popup_pane_cp2

0x876e,	// (0x0001ba48) cell_graphic_popup_pane_g1_cp2

0xe138,	// (0x00021412) cell_graphic_popup_pane_g2_cp2

0x8776,	// (0x0001ba50) cell_graphic_popup_pane_g3_cp2

0x877e,	// (0x0001ba58) cell_graphic_popup_pane_t2_cp2

0xe149,	// (0x00021423) grid_highlight_pane_cp3_cp2

0x157a,	// (0x00014854) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe46a,	// (0x00021744) main_tmo_pane_ParamLimits

0xcb3b,	// (0x0001fe15) popup_tmo_big_image_note_window

0xd775,	// (0x00020a4f) cell_ai5_widget_list_pane

0xd77d,	// (0x00020a57) cell_ai5_widget_lrg_icon_pane

0xda34,	// (0x00020d0e) tmo_note_info_pane_t1_ParamLimits

0xda49,	// (0x00020d23) tmo_note_info_pane_t2_ParamLimits

0xda62,	// (0x00020d3c) tmo_note_info_pane_t3_ParamLimits

0x83bd,	// (0x0001b697) tmo_note_info_pane_t4_ParamLimits

0x83cf,	// (0x0001b6a9) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x00023187) tmo_note_info_pane_t_ParamLimits

0x84f9,	// (0x0001b7d3) settings_container_pane_ParamLimits

0x8700,	// (0x0001b9da) indicator_popup_pane_cp5

0x8700,	// (0x0001b9da) indicator_popup_pane_cp6

0x452a,	// (0x00017804) list_set_graphic_pane_copy1_ParamLimits

0xc6d1,	// (0x0001f9ab) bg_popup_window_pane_cp23

0x878c,	// (0x0001ba66) popup_tmo_big_image_note_window_g1

0x8798,	// (0x0001ba72) popup_tmo_big_image_note_window_t1

0x87a8,	// (0x0001ba82) popup_tmo_big_image_note_window_t2

0x87b8,	// (0x0001ba92) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x000231a0) popup_tmo_big_image_note_window_t

0x5327,	// (0x00018601) cell_ai5_widget_lrg_icon_pane_g1

0xda8c,	// (0x00020d66) cell_ai5_widget_lrg_icon_pane_t1

0xda9a,	// (0x00020d74) cell_ai5_widget_list_row_pane_ParamLimits

0xda9a,	// (0x00020d74) cell_ai5_widget_list_row_pane

0xdab2,	// (0x00020d8c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdab2,	// (0x00020d8c) cell_ai5_widget_list_row_pane_g1

0xdabf,	// (0x00020d99) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdabf,	// (0x00020d99) cell_ai5_widget_list_row_pane_t1

0xdaea,	// (0x00020dc4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdaea,	// (0x00020dc4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x000231a7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x000231a7) cell_ai5_widget_list_row_pane_t

0xddac,	// (0x00021086) main_fep_vtchi_ss_pane

0x8876,	// (0x0001bb50) popup_fep_char_pre_window

0x887e,	// (0x0001bb58) popup_fep_ituss_window

0xdb21,	// (0x00020dfb) popup_fep_vkbss_window

0x224b,	// (0x00015525) grid_vkbss_keypad_pane_ParamLimits

0x224b,	// (0x00015525) grid_vkbss_keypad_pane

0x88f8,	// (0x0001bbd2) ituss_keypad_pane

0x071b,	// (0x000139f5) aid_vkbss_key_offset_ParamLimits

0x071b,	// (0x000139f5) aid_vkbss_key_offset

0xa7af,	// (0x0001da89) cell_vkbss_key_pane_ParamLimits

0xa7af,	// (0x0001da89) cell_vkbss_key_pane

0x8904,	// (0x0001bbde) bg_cell_vkbss_key_g1_ParamLimits

0x8904,	// (0x0001bbde) bg_cell_vkbss_key_g1

0xdb30,	// (0x00020e0a) cell_vkbss_key_3p_pane_ParamLimits

0xdb30,	// (0x00020e0a) cell_vkbss_key_3p_pane

0xdb66,	// (0x00020e40) cell_vkbss_key_g1_ParamLimits

0xdb66,	// (0x00020e40) cell_vkbss_key_g1

0xdb9c,	// (0x00020e76) cell_vkbss_key_t1_ParamLimits

0xdb9c,	// (0x00020e76) cell_vkbss_key_t1

0x0789,	// (0x00013a63) cell_ituss_key_pane_ParamLimits

0x0789,	// (0x00013a63) cell_ituss_key_pane

0x89d8,	// (0x0001bcb2) bg_cell_ituss_key_g1_ParamLimits

0x89d8,	// (0x0001bcb2) bg_cell_ituss_key_g1

0x89e4,	// (0x0001bcbe) cell_ituss_key_pane_g1_ParamLimits

0x89e4,	// (0x0001bcbe) cell_ituss_key_pane_g1

0x079a,	// (0x00013a74) cell_ituss_key_pane_g2_ParamLimits

0x079a,	// (0x00013a74) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x000231ae) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x000231ae) cell_ituss_key_pane_g

0x081e,	// (0x00013af8) cell_ituss_key_t1_ParamLimits

0x081e,	// (0x00013af8) cell_ituss_key_t1

0x0858,	// (0x00013b32) cell_ituss_key_t2_ParamLimits

0x0858,	// (0x00013b32) cell_ituss_key_t2

0x088a,	// (0x00013b64) cell_ituss_key_t3_ParamLimits

0x088a,	// (0x00013b64) cell_ituss_key_t3

0x08bb,	// (0x00013b95) cell_ituss_key_t4_ParamLimits

0x08bb,	// (0x00013b95) cell_ituss_key_t4

0x0005,

0xfee1,	// (0x000231bb) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x000231bb) cell_ituss_key_t

0xdbf8,	// (0x00020ed2) cell_vkbss_key_3p_pane_g1

0xdc00,	// (0x00020eda) cell_vkbss_key_3p_pane_g2

0xdc08,	// (0x00020ee2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x000231c8) cell_vkbss_key_3p_pane_g

0x1f1c,	// (0x000151f6) bg_popup_fep_char_preview_window_cp02

0x8a22,	// (0x0001bcfc) popup_fep_char_pre_window_t1

0xd754,	// (0x00020a2e) main_ai5_sk_pane

0x8449,	// (0x0001b723) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xda77,	// (0x00020d51) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x846a,	// (0x0001b744) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8476,	// (0x0001b750) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x00023192) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8482,	// (0x0001b75c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe46a,	// (0x00021744) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdc10,	// (0x00020eea) main_ai5_sk_pane_g1

0x2d3e,	// (0x00016018) popup_query_code_window_g1

0xdb12,	// (0x00020dec) popup_fep_vkb_icf_pane

0x88cc,	// (0x0001bba6) popup_fep_vtchi_icf_pane

0x8a39,	// (0x0001bd13) bg_icf_pane

0x8a39,	// (0x0001bd13) list_vkb_icf_pane

0x8a45,	// (0x0001bd1f) bg_icf_pane_cp01

0x8a58,	// (0x0001bd32) vtchi_icf_list_pane

0xdc65,	// (0x00020f3f) list_vkb_icf_pane_t1_ParamLimits

0xdc65,	// (0x00020f3f) list_vkb_icf_pane_t1

0x8ad1,	// (0x0001bdab) vtchi_icf_list_pane_t1_ParamLimits

0x8ad1,	// (0x0001bdab) vtchi_icf_list_pane_t1

0x887e,	// (0x0001bb58) popup_fep_ituss_window_ParamLimits

0x88cc,	// (0x0001bba6) popup_fep_vtchi_icf_pane_ParamLimits

0x88f8,	// (0x0001bbd2) ituss_keypad_pane_ParamLimits

0x0711,	// (0x000139eb) ituss_sks_pane

0x8a39,	// (0x0001bd13) bg_icf_pane_ParamLimits

0x884e,	// (0x0001bb28) icf_edit_indi_pane_ParamLimits

0x884e,	// (0x0001bb28) icf_edit_indi_pane

0x8a39,	// (0x0001bd13) list_vkb_icf_pane_ParamLimits

0x8a45,	// (0x0001bd1f) bg_icf_pane_cp01_ParamLimits

0x8869,	// (0x0001bb43) icf_edit_indi_pane_cp01_ParamLimits

0x8869,	// (0x0001bb43) icf_edit_indi_pane_cp01

0x8a58,	// (0x0001bd32) vtchi_query_pane

0x7bbc,	// (0x0001ae96) icf_edit_indi_pane_g1_ParamLimits

0x7bbc,	// (0x0001ae96) icf_edit_indi_pane_g1

0xdc7c,	// (0x00020f56) icf_edit_indi_pane_g2_ParamLimits

0xdc7c,	// (0x00020f56) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x000231f3) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x000231f3) icf_edit_indi_pane_g

0xdc90,	// (0x00020f6a) icf_edit_indi_pane_t1

0x8aea,	// (0x0001bdc4) bg_input_focus_pane_cp042

0xe31c,	// (0x000215f6) vtchi_button_pane

0x8af3,	// (0x0001bdcd) vtchi_query_pane_t1

0x8b01,	// (0x0001bddb) vtchi_query_pane_t2

0x8b0f,	// (0x0001bde9) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000231e2) vtchi_query_pane_t

0xddac,	// (0x00021086) bg_button_pane_cp13

0x8b1d,	// (0x0001bdf7) vtchi_button_pane_g1

0x093c,	// (0x00013c16) ituss_sks_pane_g1

0x0947,	// (0x00013c21) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000231e9) ituss_sks_pane_g

0x8b25,	// (0x0001bdff) ituss_sks_pane_t1

0x8b33,	// (0x0001be0d) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000231ee) ituss_sks_pane_t

0x4daf,	// (0x00018089) indicator_nsta_pane_cp_g1

0x4db8,	// (0x00018092) indicator_nsta_pane_cp_g2

0x4dc0,	// (0x0001809a) indicator_nsta_pane_cp_g3

0x4dc8,	// (0x000180a2) indicator_nsta_pane_cp_g4

0x4db8,	// (0x00018092) indicator_nsta_pane_cp_g5

0x4dc0,	// (0x0001809a) indicator_nsta_pane_cp_g6

0x0005,

0xfa8a,	// (0x00022d64) indicator_nsta_pane_cp_g

0xd554,	// (0x0002082e) cell_graphic2_pane_t2_ParamLimits

0xd554,	// (0x0002082e) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x0002307d) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x0002307d) cell_graphic2_pane_t

0xd58c,	// (0x00020866) cell_graphic2_control_pane_t1

0xb3b1,	// (0x0001e68b) signal_pane_g3_ParamLimits

0xb3b1,	// (0x0001e68b) signal_pane_g3

0xb3c5,	// (0x0001e69f) signal_pane_g4_ParamLimits

0xb3c5,	// (0x0001e69f) signal_pane_g4

0xdafc,	// (0x00020dd6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xdafc,	// (0x00020dd6) cell_ai5_widget_list_row_pane_t3

0x89f8,	// (0x0001bcd2) cell_ituss_key_pane_t1_ParamLimits

0x89f8,	// (0x0001bcd2) cell_ituss_key_pane_t1

0x2976,	// (0x00015c50) form_field_data_wide_pane_vc_t2_ParamLimits

0x2976,	// (0x00015c50) form_field_data_wide_pane_vc_t2

0x298a,	// (0x00015c64) form_field_data_wide_pane_vc_t3_ParamLimits

0x298a,	// (0x00015c64) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x00022ab2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x00022ab2) form_field_data_wide_pane_vc_t

0x4a4c,	// (0x00017d26) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4a4c,	// (0x00017d26) form_field_slider_wide_pane_vc_t3

0x4b22,	// (0x00017dfc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4b22,	// (0x00017dfc) form_field_popup_wide_pane_vc_t2

0x4b39,	// (0x00017e13) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4b39,	// (0x00017e13) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa79,	// (0x00022d53) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x00022d53) form_field_popup_wide_pane_vc_t

0xa5fe,	// (0x0001d8d8) aid_fshwr2_btn_pane_ParamLimits

0xa612,	// (0x0001d8ec) aid_fshwr2_syb_pane_ParamLimits

0xa626,	// (0x0001d900) aid_fshwr2_txt_pane_ParamLimits

0xf44a,	// (0x00022724) fshwr2_bg_pane_ParamLimits

0xa636,	// (0x0001d910) fshwr2_func_candi_pane_ParamLimits

0xa658,	// (0x0001d932) fshwr2_hwr_syb_pane_ParamLimits

0xa67c,	// (0x0001d956) fshwr2_icf_pane_ParamLimits

0x49bb,	// (0x00017c95) list_double_graphic_pane_vc_g4_ParamLimits

0x49bb,	// (0x00017c95) list_double_graphic_pane_vc_g4

0x07ba,	// (0x00013a94) cell_ituss_key_pane_g3_ParamLimits

0x07ba,	// (0x00013a94) cell_ituss_key_pane_g3

0x08ec,	// (0x00013bc6) cell_ituss_key_t5_ParamLimits

0x08ec,	// (0x00013bc6) cell_ituss_key_t5

0xdb21,	// (0x00020dfb) popup_fep_vkbss_window_ParamLimits

0xd75e,	// (0x00020a38) aid_cell_ai5_quarter

0xdc90,	// (0x00020f6a) icf_edit_indi_pane_t1_ParamLimits

0xdf7c,	// (0x00021256) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xdf7c,	// (0x00021256) aid_tch_indicator_popup_pane_cp2

0xdf8f,	// (0x00021269) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xdf8f,	// (0x00021269) aid_tch_query_popup_data_pane_cp2

0x2ce6,	// (0x00015fc0) aid_tch_query_popup_pane_ParamLimits

0x2ce6,	// (0x00015fc0) aid_tch_query_popup_pane

0x2ce6,	// (0x00015fc0) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2ce6,	// (0x00015fc0) aid_tch_query_popup_data_pane_cp1

0x224b,	// (0x00015525) cell_fshwr2_syb_bg_pane_ParamLimits

0xa771,	// (0x0001da4b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa785,	// (0x0001da5f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdb12,	// (0x00020dec) popup_fep_vkb_icf_pane_ParamLimits

0xa592,	// (0x0001d86c) bg_popup_fep_char_preview_window_g10

0xd7f7,	// (0x00020ad1) cell_ai5_widget_pane_g11_ParamLimits

0xd7f7,	// (0x00020ad1) cell_ai5_widget_pane_g11

0x7e6c,	// (0x0001b146) cell_ai5_widget_pane_g12_ParamLimits

0x7e6c,	// (0x0001b146) cell_ai5_widget_pane_g12

0xd803,	// (0x00020add) cell_ai5_widget_pane_g13_ParamLimits

0xd803,	// (0x00020add) cell_ai5_widget_pane_g13

0xd8c0,	// (0x00020b9a) cell_ai5_widget_pane_t11_ParamLimits

0xd8c0,	// (0x00020b9a) cell_ai5_widget_pane_t11

0xd8d2,	// (0x00020bac) cell_ai5_widget_pane_t12_ParamLimits

0xd8d2,	// (0x00020bac) cell_ai5_widget_pane_t12

0x07c6,	// (0x00013aa0) cell_ituss_key_pane_g4_ParamLimits

0x07c6,	// (0x00013aa0) cell_ituss_key_pane_g4

0x07e2,	// (0x00013abc) cell_ituss_key_pane_g5_ParamLimits

0x07e2,	// (0x00013abc) cell_ituss_key_pane_g5

0x07fe,	// (0x00013ad8) cell_ituss_key_pane_g6_ParamLimits

0x07fe,	// (0x00013ad8) cell_ituss_key_pane_g6

0x27bd,	// (0x00015a97) bg_icf_pane_g1

0xdc19,	// (0x00020ef3) bg_icf_pane_g2

0xdc23,	// (0x00020efd) bg_icf_pane_g3

0xdc2b,	// (0x00020f05) bg_icf_pane_g4

0xdc35,	// (0x00020f0f) bg_icf_pane_g5

0xdc3f,	// (0x00020f19) bg_icf_pane_g6

0xdc49,	// (0x00020f23) bg_icf_pane_g7

0xdc51,	// (0x00020f2b) bg_icf_pane_g8

0xdc5b,	// (0x00020f35) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x000231cf) bg_icf_pane_g

0x88e5,	// (0x0001bbbf) popup_hyb_candi_window_ParamLimits

0x88e5,	// (0x0001bbbf) popup_hyb_candi_window

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp01_ParamLimits

0x28e5,	// (0x00015bbf) bg_popup_sub_pane_cp01

0x8b6e,	// (0x0001be48) entry_hyb_candi_pane_ParamLimits

0x8b6e,	// (0x0001be48) entry_hyb_candi_pane

0x8b7d,	// (0x0001be57) grid_hyb_candi_pane_ParamLimits

0x8b7d,	// (0x0001be57) grid_hyb_candi_pane

0x8b92,	// (0x0001be6c) grid_hyb_phrase_pane_ParamLimits

0x8b92,	// (0x0001be6c) grid_hyb_phrase_pane

0x8ba1,	// (0x0001be7b) cell_hyb_candi_pane_ParamLimits

0x8ba1,	// (0x0001be7b) cell_hyb_candi_pane

0xe325,	// (0x000215ff) cell_hyb_candi_scroll_pane

0x1852,	// (0x00014b2c) cell_hyb_candi_pane_g1

0x8bbd,	// (0x0001be97) cell_hyb_candi_pane_t1

0x8bcb,	// (0x0001bea5) cell_hyb_phrase_pane

0x1852,	// (0x00014b2c) cell_hyb_phrase_pane_g1

0x8bd4,	// (0x0001beae) cell_hyb_phrase_pane_t1

0x8be2,	// (0x0001bebc) entry_hyb_candi_pane_t1

0x1f1c,	// (0x000151f6) input_focus_pane_cp06

0x8bf0,	// (0x0001beca) cell_hyb_candi_scroll_pane_g1

0x8bf8,	// (0x0001bed2) cell_hyb_candi_scroll_pane_g1_aid

0x8c00,	// (0x0001beda) cell_hyb_candi_scroll_pane_g2

0x8c08,	// (0x0001bee2) cell_hyb_candi_scroll_pane_g2_aid

0x8c10,	// (0x0001beea) cell_hyb_candi_scroll_pane_g3

0x8c18,	// (0x0001bef2) cell_hyb_candi_scroll_pane_g4

0xd6e0,	// (0x000209ba) ai5_page_g1

0x08fe,	// (0x00013bd8) cell_ituss_key_t6_ParamLimits

0x08fe,	// (0x00013bd8) cell_ituss_key_t6

0xa79b,	// (0x0001da75) icf_edit_indi_pane_cp02_ParamLimits

0xa79b,	// (0x0001da75) icf_edit_indi_pane_cp02

0x0704,	// (0x000139de) icf_edit_indi_pane_cp03_ParamLimits

0x0704,	// (0x000139de) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

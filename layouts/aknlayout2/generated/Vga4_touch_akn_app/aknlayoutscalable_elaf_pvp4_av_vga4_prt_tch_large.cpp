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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041e23 };

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
0x6027,	// (0x00047e4a) Screen

0x6033,	// (0x00047e56) application_window_ParamLimits

0x6033,	// (0x00047e56) application_window

0xdc02,	// (0x0004fa25) screen_g1

0x608f,	// (0x00047eb2) area_bottom_pane_ParamLimits

0x608f,	// (0x00047eb2) area_bottom_pane

0x614f,	// (0x00047f72) area_top_pane_ParamLimits

0x614f,	// (0x00047f72) area_top_pane

0x61e3,	// (0x00048006) main_pane_ParamLimits

0x61e3,	// (0x00048006) main_pane

0xdc0c,	// (0x0004fa2f) misc_graphics

0x91b9,	// (0x0004afdc) battery_pane_ParamLimits

0x91b9,	// (0x0004afdc) battery_pane

0x9e73,	// (0x0004bc96) bg_status_flat_pane_g8

0x9e7b,	// (0x0004bc9e) bg_status_flat_pane_g9

0x927b,	// (0x0004b09e) context_pane_ParamLimits

0x927b,	// (0x0004b09e) context_pane

0x939f,	// (0x0004b1c2) navi_pane_ParamLimits

0x939f,	// (0x0004b1c2) navi_pane

0x942f,	// (0x0004b252) signal_pane_ParamLimits

0x942f,	// (0x0004b252) signal_pane

0x0008,

0xf87e,	// (0x000516a1) bg_status_flat_pane_g

0x949c,	// (0x0004b2bf) status_pane_g1_ParamLimits

0x949c,	// (0x0004b2bf) status_pane_g1

0x94a8,	// (0x0004b2cb) status_pane_g2_ParamLimits

0x94a8,	// (0x0004b2cb) status_pane_g2

0x94b4,	// (0x0004b2d7) status_pane_g3_ParamLimits

0x94b4,	// (0x0004b2d7) status_pane_g3

0x0004,

0xf7a5,	// (0x000515c8) status_pane_g_ParamLimits

0xf7a5,	// (0x000515c8) status_pane_g

0x94e8,	// (0x0004b30b) title_pane_ParamLimits

0x94e8,	// (0x0004b30b) title_pane

0x9527,	// (0x0004b34a) uni_indicator_pane_ParamLimits

0x9527,	// (0x0004b34a) uni_indicator_pane

0x90e3,	// (0x0004af06) bg_list_pane_ParamLimits

0x90e3,	// (0x0004af06) bg_list_pane

0x9103,	// (0x0004af26) find_pane

0x910b,	// (0x0004af2e) listscroll_app_pane_ParamLimits

0x910b,	// (0x0004af2e) listscroll_app_pane

0x9117,	// (0x0004af3a) listscroll_form_pane

0x70df,	// (0x00048f02) listscroll_gen_pane_ParamLimits

0x70df,	// (0x00048f02) listscroll_gen_pane

0x70f3,	// (0x00048f16) listscroll_set_pane

0x68d7,	// (0x000486fa) main_idle_act_pane

0x8ddc,	// (0x0004abff) main_idle_trad_pane

0x8ddc,	// (0x0004abff) main_list_empty_pane

0x910b,	// (0x0004af2e) main_midp_pane

0x9131,	// (0x0004af54) main_pane_g1_ParamLimits

0x9131,	// (0x0004af54) main_pane_g1

0x70fb,	// (0x00048f1e) popup_ai_message_window_ParamLimits

0x70fb,	// (0x00048f1e) popup_ai_message_window

0x71af,	// (0x00048fd2) popup_fep_china_uni_window_ParamLimits

0x71af,	// (0x00048fd2) popup_fep_china_uni_window

0x720f,	// (0x00049032) popup_fep_japan_candidate_window_ParamLimits

0x720f,	// (0x00049032) popup_fep_japan_candidate_window

0x7239,	// (0x0004905c) popup_fep_japan_predictive_window_ParamLimits

0x7239,	// (0x0004905c) popup_fep_japan_predictive_window

0x726f,	// (0x00049092) popup_find_window

0x727c,	// (0x0004909f) popup_grid_graphic_window_ParamLimits

0x727c,	// (0x0004909f) popup_grid_graphic_window

0x72aa,	// (0x000490cd) popup_large_graphic_colour_window

0x72d0,	// (0x000490f3) popup_menu_window_ParamLimits

0x72d0,	// (0x000490f3) popup_menu_window

0x749a,	// (0x000492bd) popup_note_image_window

0x7484,	// (0x000492a7) popup_note_wait_window_ParamLimits

0x7484,	// (0x000492a7) popup_note_wait_window

0x7484,	// (0x000492a7) popup_note_window_ParamLimits

0x7484,	// (0x000492a7) popup_note_window

0x7500,	// (0x00049323) popup_query_code_window_ParamLimits

0x7500,	// (0x00049323) popup_query_code_window

0x7516,	// (0x00049339) popup_query_data_code_window_ParamLimits

0x7516,	// (0x00049339) popup_query_data_code_window

0x7539,	// (0x0004935c) popup_query_data_window_ParamLimits

0x7539,	// (0x0004935c) popup_query_data_window

0x755b,	// (0x0004937e) popup_query_sat_info_window_ParamLimits

0x755b,	// (0x0004937e) popup_query_sat_info_window

0x759a,	// (0x000493bd) popup_snote_single_graphic_window_ParamLimits

0x759a,	// (0x000493bd) popup_snote_single_graphic_window

0x759a,	// (0x000493bd) popup_snote_single_text_window_ParamLimits

0x759a,	// (0x000493bd) popup_snote_single_text_window

0x75b1,	// (0x000493d4) popup_sub_window_general

0x76f7,	// (0x0004951a) popup_window_general_ParamLimits

0x76f7,	// (0x0004951a) popup_window_general

0x913f,	// (0x0004af62) power_save_pane

0x6f69,	// (0x00048d8c) control_pane_g1_ParamLimits

0x6f69,	// (0x00048d8c) control_pane_g1

0x6f92,	// (0x00048db5) control_pane_g2_ParamLimits

0x6f92,	// (0x00048db5) control_pane_g2

0x90a6,	// (0x0004aec9) control_pane_g3_ParamLimits

0x90a6,	// (0x0004aec9) control_pane_g3

0x0007,

0xf78d,	// (0x000515b0) control_pane_g_ParamLimits

0xf78d,	// (0x000515b0) control_pane_g

0x6fde,	// (0x00048e01) control_pane_t1_ParamLimits

0x6fde,	// (0x00048e01) control_pane_t1

0x7038,	// (0x00048e5b) control_pane_t2_ParamLimits

0x7038,	// (0x00048e5b) control_pane_t2

0x0002,

0xf79e,	// (0x000515c1) control_pane_t_ParamLimits

0xf79e,	// (0x000515c1) control_pane_t

0x8fcb,	// (0x0004adee) navi_navi_volume_pane_cp1

0x8fd3,	// (0x0004adf6) status_small_icon_pane

0x8fdb,	// (0x0004adfe) status_small_pane_g1_ParamLimits

0x8fdb,	// (0x0004adfe) status_small_pane_g1

0x900f,	// (0x0004ae32) status_small_pane_g2_ParamLimits

0x900f,	// (0x0004ae32) status_small_pane_g2

0x901b,	// (0x0004ae3e) status_small_pane_g3_ParamLimits

0x901b,	// (0x0004ae3e) status_small_pane_g3

0x9027,	// (0x0004ae4a) status_small_pane_g4_ParamLimits

0x9027,	// (0x0004ae4a) status_small_pane_g4

0x9033,	// (0x0004ae56) status_small_pane_g5_ParamLimits

0x9033,	// (0x0004ae56) status_small_pane_g5

0x9041,	// (0x0004ae64) status_small_pane_g6_ParamLimits

0x9041,	// (0x0004ae64) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005159f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005159f) status_small_pane_g

0x9070,	// (0x0004ae93) status_small_pane_t1

0x9092,	// (0x0004aeb5) status_small_wait_pane_ParamLimits

0x9092,	// (0x0004aeb5) status_small_wait_pane

0x6c63,	// (0x00048a86) aid_levels_signal_ParamLimits

0x6c63,	// (0x00048a86) aid_levels_signal

0x6c72,	// (0x00048a95) signal_pane_g1_ParamLimits

0x6c72,	// (0x00048a95) signal_pane_g1

0x6c87,	// (0x00048aaa) signal_pane_g2_ParamLimits

0x6c87,	// (0x00048aaa) signal_pane_g2

0x0003,

0xf70d,	// (0x00051530) signal_pane_g_ParamLimits

0xf70d,	// (0x00051530) signal_pane_g

0x416e,	// (0x00045f91) context_pane_g1

0x6442,	// (0x00048265) title_pane_g1

0x6474,	// (0x00048297) title_pane_t1

0xdc22,	// (0x0004fa45) title_pane_t2

0xdc48,	// (0x0004fa6b) title_pane_t3

0x0002,

0xf557,	// (0x0005137a) title_pane_t

0x953f,	// (0x0004b362) aid_levels_battery_ParamLimits

0x953f,	// (0x0004b362) aid_levels_battery

0x9550,	// (0x0004b373) battery_pane_g1_ParamLimits

0x9550,	// (0x0004b373) battery_pane_g1

0x9566,	// (0x0004b389) battery_pane_g2_ParamLimits

0x9566,	// (0x0004b389) battery_pane_g2

0x0001,

0xf7b0,	// (0x000515d3) battery_pane_g_ParamLimits

0xf7b0,	// (0x000515d3) battery_pane_g

0xa7bd,	// (0x0004c5e0) uni_indicator_pane_g1

0xa7d0,	// (0x0004c5f3) uni_indicator_pane_g2

0xa7e2,	// (0x0004c605) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00051749) uni_indicator_pane_g

0x465b,	// (0x0004647e) navi_icon_pane_ParamLimits

0x465b,	// (0x0004647e) navi_icon_pane

0x45a2,	// (0x000463c5) navi_midp_pane

0x4677,	// (0x0004649a) navi_navi_pane

0x4681,	// (0x000464a4) navi_text_pane_ParamLimits

0x4681,	// (0x000464a4) navi_text_pane

0xdc02,	// (0x0004fa25) status_small_wait_pane_g1

0x080a,	// (0x0004262d) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00051744) status_small_wait_pane_g

0xa4d0,	// (0x0004c2f3) navi_navi_icon_text_pane

0xa4d8,	// (0x0004c2fb) navi_navi_pane_g1_ParamLimits

0xa4d8,	// (0x0004c2fb) navi_navi_pane_g1

0xa4ea,	// (0x0004c30d) navi_navi_pane_g2_ParamLimits

0xa4ea,	// (0x0004c30d) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00051712) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00051712) navi_navi_pane_g

0xa4fc,	// (0x0004c31f) navi_navi_tabs_pane

0xa505,	// (0x0004c328) navi_navi_text_pane

0xa4d0,	// (0x0004c2f3) navi_navi_volume_pane

0xa4ac,	// (0x0004c2cf) navi_text_pane_t1

0xa4a0,	// (0x0004c2c3) navi_icon_pane_g1

0xa3f3,	// (0x0004c216) navi_navi_text_pane_t1

0x79c4,	// (0x000497e7) navi_navi_volume_pane_g1

0x79cc,	// (0x000497ef) volume_small_pane

0xa359,	// (0x0004c17c) navi_navi_icon_text_pane_g1

0xa361,	// (0x0004c184) navi_navi_icon_text_pane_t1

0x4677,	// (0x0004649a) navi_tabs_2_long_pane

0x4677,	// (0x0004649a) navi_tabs_2_pane

0x4677,	// (0x0004649a) navi_tabs_3_long_pane

0x4677,	// (0x0004649a) navi_tabs_3_pane

0x4677,	// (0x0004649a) navi_tabs_4_pane

0x79a4,	// (0x000497c7) tabs_2_active_pane_ParamLimits

0x79a4,	// (0x000497c7) tabs_2_active_pane

0x79b4,	// (0x000497d7) tabs_2_passive_pane_ParamLimits

0x79b4,	// (0x000497d7) tabs_2_passive_pane

0x7972,	// (0x00049795) tabs_3_active_pane_ParamLimits

0x7972,	// (0x00049795) tabs_3_active_pane

0x7982,	// (0x000497a5) tabs_3_passive_pane_ParamLimits

0x7982,	// (0x000497a5) tabs_3_passive_pane

0x7993,	// (0x000497b6) tabs_3_passive_pane_cp_ParamLimits

0x7993,	// (0x000497b6) tabs_3_passive_pane_cp

0x7926,	// (0x00049749) tabs_4_active_pane_ParamLimits

0x7926,	// (0x00049749) tabs_4_active_pane

0x7939,	// (0x0004975c) tabs_4_passive_pane_ParamLimits

0x7939,	// (0x0004975c) tabs_4_passive_pane

0x794a,	// (0x0004976d) tabs_4_passive_pane_cp_ParamLimits

0x794a,	// (0x0004976d) tabs_4_passive_pane_cp

0x795b,	// (0x0004977e) tabs_4_passive_pane_cp2_ParamLimits

0x795b,	// (0x0004977e) tabs_4_passive_pane_cp2

0x7902,	// (0x00049725) tabs_2_long_active_pane_ParamLimits

0x7902,	// (0x00049725) tabs_2_long_active_pane

0x7914,	// (0x00049737) tabs_2_long_passive_pane_ParamLimits

0x7914,	// (0x00049737) tabs_2_long_passive_pane

0x78c3,	// (0x000496e6) tabs_3_long_active_pane_ParamLimits

0x78c3,	// (0x000496e6) tabs_3_long_active_pane

0x78d6,	// (0x000496f9) tabs_3_long_passive_pane_ParamLimits

0x78d6,	// (0x000496f9) tabs_3_long_passive_pane

0x78ef,	// (0x00049712) tabs_3_long_passive_pane_cp_ParamLimits

0x78ef,	// (0x00049712) tabs_3_long_passive_pane_cp

0x7869,	// (0x0004968c) volume_small_pane_g1

0x7872,	// (0x00049695) volume_small_pane_g2

0x787b,	// (0x0004969e) volume_small_pane_g3

0x7884,	// (0x000496a7) volume_small_pane_g4

0x788d,	// (0x000496b0) volume_small_pane_g5

0x7896,	// (0x000496b9) volume_small_pane_g6

0x789f,	// (0x000496c2) volume_small_pane_g7

0x78a8,	// (0x000496cb) volume_small_pane_g8

0x78b1,	// (0x000496d4) volume_small_pane_g9

0x78ba,	// (0x000496dd) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000516de) volume_small_pane_g

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp2_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp2

0x64dc,	// (0x000482ff) tabs_3_active_pane_g1

0x64e4,	// (0x00048307) tabs_3_active_pane_t1

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp2_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp2

0x64dc,	// (0x000482ff) tabs_3_passive_pane_g1

0x64e4,	// (0x00048307) tabs_3_passive_pane_t1

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp3_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp3

0x64f6,	// (0x00048319) tabs_4_active_pane_g1

0x64fe,	// (0x00048321) tabs_4_active_pane_t1

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp3_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp3

0x64f6,	// (0x00048319) tabs_4_1_passive_pane_g1

0x64fe,	// (0x00048321) tabs_4_1_passive_pane_t1

0x910b,	// (0x0004af2e) list_highlight_pane_cp2

0xaa2b,	// (0x0004c84e) list_set_pane_ParamLimits

0xaa2b,	// (0x0004c84e) list_set_pane

0xaaed,	// (0x0004c910) main_pane_set_t1_ParamLimits

0xaaed,	// (0x0004c910) main_pane_set_t1

0xab0d,	// (0x0004c930) main_pane_set_t2_ParamLimits

0xab0d,	// (0x0004c930) main_pane_set_t2

0xab21,	// (0x0004c944) main_pane_set_t3_ParamLimits

0xab21,	// (0x0004c944) main_pane_set_t3

0xab35,	// (0x0004c958) main_pane_set_t4_ParamLimits

0xab35,	// (0x0004c958) main_pane_set_t4

0x0003,

0xf98b,	// (0x000517ae) main_pane_set_t_ParamLimits

0xf98b,	// (0x000517ae) main_pane_set_t

0xab49,	// (0x0004c96c) setting_code_pane

0xab53,	// (0x0004c976) setting_slider_graphic_pane

0xab53,	// (0x0004c976) setting_slider_pane

0xab53,	// (0x0004c976) setting_text_pane

0xab53,	// (0x0004c976) setting_volume_pane

0x6510,	// (0x00048333) volume_set_pane

0xdc5a,	// (0x0004fa7d) bg_set_opt_pane_cp

0x651a,	// (0x0004833d) setting_slider_pane_t1

0x6533,	// (0x00048356) setting_slider_pane_t2

0x654d,	// (0x00048370) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00051381) setting_slider_pane_t

0x6565,	// (0x00048388) slider_set_pane

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp2

0xdc68,	// (0x0004fa8b) setting_slider_graphic_pane_g1

0x657b,	// (0x0004839e) setting_slider_graphic_pane_t1

0x658b,	// (0x000483ae) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00051388) setting_slider_graphic_pane_t

0x659b,	// (0x000483be) slider_set_pane_cp

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp1

0xa9ec,	// (0x0004c80f) list_set_text_pane

0xdc02,	// (0x0004fa25) setting_text_pane_g1

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp2

0xdc02,	// (0x0004fa25) setting_code_pane_g1

0xdc71,	// (0x0004fa94) setting_code_pane_t1

0x5119,	// (0x00046f3c) set_text_pane_t1_ParamLimits

0x5119,	// (0x00046f3c) set_text_pane_t1

0x0b9f,	// (0x000429c2) set_opt_bg_pane_g1

0x0ba7,	// (0x000429ca) set_opt_bg_pane_g2

0xa9c4,	// (0x0004c7e7) set_opt_bg_pane_g3

0x0bb7,	// (0x000429da) set_opt_bg_pane_g4

0x0bbf,	// (0x000429e2) set_opt_bg_pane_g5

0x0bc7,	// (0x000429ea) set_opt_bg_pane_g6

0xa9ce,	// (0x0004c7f1) set_opt_bg_pane_g7

0xa9d8,	// (0x0004c7fb) set_opt_bg_pane_g8

0xa9e2,	// (0x0004c805) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0005179b) set_opt_bg_pane_g

0xa9b7,	// (0x0004c7da) slider_set_pane_g1

0x7a4d,	// (0x00049870) slider_set_pane_g2

0x0006,

0xf969,	// (0x0005178c) slider_set_pane_g

0x79d5,	// (0x000497f8) volume_set_pane_g1

0x79df,	// (0x00049802) volume_set_pane_g2

0x79e9,	// (0x0004980c) volume_set_pane_g3

0x79f3,	// (0x00049816) volume_set_pane_g4

0x79fd,	// (0x00049820) volume_set_pane_g5

0x7a07,	// (0x0004982a) volume_set_pane_g6

0x7a11,	// (0x00049834) volume_set_pane_g7

0x7a1b,	// (0x0004983e) volume_set_pane_g8

0x7a25,	// (0x00049848) volume_set_pane_g9

0x7a2f,	// (0x00049852) volume_set_pane_g10

0x0009,

0xf941,	// (0x00051764) volume_set_pane_g

0x65a3,	// (0x000483c6) indicator_pane_ParamLimits

0x65a3,	// (0x000483c6) indicator_pane

0x65af,	// (0x000483d2) main_idle_pane_g2_ParamLimits

0x65af,	// (0x000483d2) main_idle_pane_g2

0x65d7,	// (0x000483fa) main_pane_idle_g1_ParamLimits

0x65d7,	// (0x000483fa) main_pane_idle_g1

0xdc7f,	// (0x0004faa2) popup_clock_digital_analogue_window_ParamLimits

0xdc7f,	// (0x0004faa2) popup_clock_digital_analogue_window

0x65e5,	// (0x00048408) soft_indicator_pane_ParamLimits

0x65e5,	// (0x00048408) soft_indicator_pane

0x65f3,	// (0x00048416) wallpaper_pane_ParamLimits

0x65f3,	// (0x00048416) wallpaper_pane

0xdc02,	// (0x0004fa25) wallpaper_pane_g1

0x65ff,	// (0x00048422) indicator_pane_g1_ParamLimits

0x65ff,	// (0x00048422) indicator_pane_g1

0xae2e,	// (0x0004cc51) navi_navi_icon_text_pane_srt_g1

0x055c,	// (0x0004237f) soft_indicator_pane_t1

0x0576,	// (0x00042399) aid_ps_area_pane

0x660b,	// (0x0004842e) aid_ps_clock_pane

0x0587,	// (0x000423aa) aid_ps_indicator_pane

0x0593,	// (0x000423b6) indicator_ps_pane_ParamLimits

0x0593,	// (0x000423b6) indicator_ps_pane

0x05a2,	// (0x000423c5) power_save_pane_g1_ParamLimits

0x05a2,	// (0x000423c5) power_save_pane_g1

0x05ae,	// (0x000423d1) power_save_pane_g2_ParamLimits

0x05ae,	// (0x000423d1) power_save_pane_g2

0x6043,	// (0x00047e66) aid_navinavi_width_pane

0x0576,	// (0x00042399) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005138d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005138d) power_save_pane_g

0x05bc,	// (0x000423df) power_save_pane_t1_ParamLimits

0x05bc,	// (0x000423df) power_save_pane_t1

0x660b,	// (0x0004842e) aid_ps_clock_pane_ParamLimits

0x0587,	// (0x000423aa) aid_ps_indicator_pane_ParamLimits

0x05ce,	// (0x000423f1) power_save_pane_t4_ParamLimits

0x05ce,	// (0x000423f1) power_save_pane_t4

0x0001,

0xf56f,	// (0x00051392) power_save_pane_t_ParamLimits

0xf56f,	// (0x00051392) power_save_pane_t

0x05f8,	// (0x0004241b) power_save_t3_ParamLimits

0x05f8,	// (0x0004241b) power_save_t3

0x05e3,	// (0x00042406) power_save_t2_ParamLimits

0x05e3,	// (0x00042406) power_save_t2

0x060d,	// (0x00042430) indicator_ps_pane_g1

0x6619,	// (0x0004843c) ai_gene_pane_ParamLimits

0x6619,	// (0x0004843c) ai_gene_pane

0x6625,	// (0x00048448) ai_links_pane_ParamLimits

0x6625,	// (0x00048448) ai_links_pane

0x6631,	// (0x00048454) indicator_pane_cp1_ParamLimits

0x6631,	// (0x00048454) indicator_pane_cp1

0x663d,	// (0x00048460) main_pane_idle_g1_cp_ParamLimits

0x663d,	// (0x00048460) main_pane_idle_g1_cp

0x0616,	// (0x00042439) popup_ai_links_title_window

0x6649,	// (0x0004846c) soft_indicator_pane_cp1_ParamLimits

0x6649,	// (0x0004846c) soft_indicator_pane_cp1

0xa7ab,	// (0x0004c5ce) ai_links_pane_g1

0xa7b4,	// (0x0004c5d7) grid_ai_links_pane

0xa790,	// (0x0004c5b3) ai_gene_pane_1

0xa799,	// (0x0004c5bc) ai_gene_pane_2

0xa7a2,	// (0x0004c5c5) list_highlight_pane_cp4

0xa770,	// (0x0004c593) cell_ai_link_pane_ParamLimits

0xa770,	// (0x0004c593) cell_ai_link_pane

0xa768,	// (0x0004c58b) cell_ai_link_pane_g1

0x080a,	// (0x0004262d) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0005173f) cell_ai_link_pane_g

0xdc0c,	// (0x0004fa2f) grid_highlight_cp2

0xdc0c,	// (0x0004fa2f) bg_popup_sub_pane_cp1

0x062d,	// (0x00042450) popup_ai_links_title_window_t1

0xa6b4,	// (0x0004c4d7) ai_gene_pane_1_g1_ParamLimits

0xa6b4,	// (0x0004c4d7) ai_gene_pane_1_g1

0xa6c0,	// (0x0004c4e3) ai_gene_pane_1_g2_ParamLimits

0xa6c0,	// (0x0004c4e3) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00051735) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00051735) ai_gene_pane_1_g

0xa6cd,	// (0x0004c4f0) ai_gene_pane_1_t1_ParamLimits

0xa6cd,	// (0x0004c4f0) ai_gene_pane_1_t1

0xa701,	// (0x0004c524) grid_ai_soft_ind_pane

0xa69f,	// (0x0004c4c2) ai_gene_pane_2_t1_ParamLimits

0xa69f,	// (0x0004c4c2) ai_gene_pane_2_t1

0x6655,	// (0x00048478) main_pane_empty_t1_ParamLimits

0x6655,	// (0x00048478) main_pane_empty_t1

0x666d,	// (0x00048490) main_pane_empty_t2_ParamLimits

0x666d,	// (0x00048490) main_pane_empty_t2

0x6682,	// (0x000484a5) main_pane_empty_t3_ParamLimits

0x6682,	// (0x000484a5) main_pane_empty_t3

0x6694,	// (0x000484b7) main_pane_empty_t4_ParamLimits

0x6694,	// (0x000484b7) main_pane_empty_t4

0x66a6,	// (0x000484c9) main_pane_empty_t5_ParamLimits

0x66a6,	// (0x000484c9) main_pane_empty_t5

0x0004,

0xf574,	// (0x00051397) main_pane_empty_t_ParamLimits

0xf574,	// (0x00051397) main_pane_empty_t

0x0bf0,	// (0x00042a13) bg_popup_window_pane_ParamLimits

0x0bf0,	// (0x00042a13) bg_popup_window_pane

0xa401,	// (0x0004c224) find_popup_pane_cp2_ParamLimits

0xa401,	// (0x0004c224) find_popup_pane_cp2

0xa40d,	// (0x0004c230) heading_pane_ParamLimits

0xa40d,	// (0x0004c230) heading_pane

0xdc0c,	// (0x0004fa2f) bg_popup_sub_pane

0xa37b,	// (0x0004c19e) bg_popup_window_pane_g1_ParamLimits

0xa37b,	// (0x0004c19e) bg_popup_window_pane_g1

0xa387,	// (0x0004c1aa) bg_popup_window_pane_g2_ParamLimits

0xa387,	// (0x0004c1aa) bg_popup_window_pane_g2

0xa393,	// (0x0004c1b6) bg_popup_window_pane_g3_ParamLimits

0xa393,	// (0x0004c1b6) bg_popup_window_pane_g3

0xa39f,	// (0x0004c1c2) bg_popup_window_pane_g4_ParamLimits

0xa39f,	// (0x0004c1c2) bg_popup_window_pane_g4

0xa3ab,	// (0x0004c1ce) bg_popup_window_pane_g5_ParamLimits

0xa3ab,	// (0x0004c1ce) bg_popup_window_pane_g5

0xa3b7,	// (0x0004c1da) bg_popup_window_pane_g6_ParamLimits

0xa3b7,	// (0x0004c1da) bg_popup_window_pane_g6

0xa3c3,	// (0x0004c1e6) bg_popup_window_pane_g7_ParamLimits

0xa3c3,	// (0x0004c1e6) bg_popup_window_pane_g7

0xa3cf,	// (0x0004c1f2) bg_popup_window_pane_g8_ParamLimits

0xa3cf,	// (0x0004c1f2) bg_popup_window_pane_g8

0xa3db,	// (0x0004c1fe) bg_popup_window_pane_g9_ParamLimits

0xa3db,	// (0x0004c1fe) bg_popup_window_pane_g9

0xa3e7,	// (0x0004c20a) bg_popup_window_pane_g10_ParamLimits

0xa3e7,	// (0x0004c20a) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000516fd) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000516fd) bg_popup_window_pane_g

0xa310,	// (0x0004c133) bg_popup_heading_pane_ParamLimits

0xa310,	// (0x0004c133) bg_popup_heading_pane

0x7b15,	// (0x00049938) tabs_4_passive_pane_cp_srt_ParamLimits

0x7b15,	// (0x00049938) tabs_4_passive_pane_cp_srt

0x7b27,	// (0x0004994a) tabs_4_passive_pane_srt_ParamLimits

0xa324,	// (0x0004c147) heading_pane_g2

0x7b27,	// (0x0004994a) tabs_4_passive_pane_srt

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp3_srt

0xa32c,	// (0x0004c14f) heading_pane_t1_ParamLimits

0xa32c,	// (0x0004c14f) heading_pane_t1

0xa343,	// (0x0004c166) heading_pane_t2_ParamLimits

0xa343,	// (0x0004c166) heading_pane_t2

0x0001,

0xf8d5,	// (0x000516f8) heading_pane_t_ParamLimits

0xf8d5,	// (0x000516f8) heading_pane_t

0x9e3b,	// (0x0004bc5e) bg_popup_heading_pane_g1

0x9eea,	// (0x0004bd0d) bg_popup_heading_pane_g2

0x9ef4,	// (0x0004bd17) bg_popup_heading_pane_g3

0x9efe,	// (0x0004bd21) bg_popup_heading_pane_g4

0x9f08,	// (0x0004bd2b) bg_popup_heading_pane_g5

0x9f12,	// (0x0004bd35) bg_popup_heading_pane_g6

0x9f1a,	// (0x0004bd3d) bg_popup_heading_pane_g7

0x9f22,	// (0x0004bd45) bg_popup_heading_pane_g8

0x9f2c,	// (0x0004bd4f) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000516b4) bg_popup_heading_pane_g

0x963b,	// (0x0004b45e) bg_popup_sub_pane_g1

0x9643,	// (0x0004b466) bg_popup_sub_pane_g2

0x964b,	// (0x0004b46e) bg_popup_sub_pane_g3

0x9653,	// (0x0004b476) bg_popup_sub_pane_g4

0x965b,	// (0x0004b47e) bg_popup_sub_pane_g5

0x9663,	// (0x0004b486) bg_popup_sub_pane_g6

0x966b,	// (0x0004b48e) bg_popup_sub_pane_g7

0x9673,	// (0x0004b496) bg_popup_sub_pane_g8

0x967b,	// (0x0004b49e) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0005168e) bg_popup_sub_pane_g

0xdc96,	// (0x0004fab9) bg_popup_window_pane_cp5_ParamLimits

0xdc96,	// (0x0004fab9) bg_popup_window_pane_cp5

0x064a,	// (0x0004246d) popup_note_window_g1_ParamLimits

0x064a,	// (0x0004246d) popup_note_window_g1

0x0656,	// (0x00042479) popup_note_window_t1_ParamLimits

0x0656,	// (0x00042479) popup_note_window_t1

0x066c,	// (0x0004248f) popup_note_window_t2_ParamLimits

0x066c,	// (0x0004248f) popup_note_window_t2

0x0682,	// (0x000424a5) popup_note_window_t3_ParamLimits

0x0682,	// (0x000424a5) popup_note_window_t3

0x0698,	// (0x000424bb) popup_note_window_t4_ParamLimits

0x0698,	// (0x000424bb) popup_note_window_t4

0x06c0,	// (0x000424e3) popup_note_window_t5_ParamLimits

0x06c0,	// (0x000424e3) popup_note_window_t5

0x0004,

0xf57f,	// (0x000513a2) popup_note_window_t_ParamLimits

0xf57f,	// (0x000513a2) popup_note_window_t

0x070a,	// (0x0004252d) bg_popup_window_pane_cp6_ParamLimits

0x070a,	// (0x0004252d) bg_popup_window_pane_cp6

0x9db7,	// (0x0004bbda) popup_note_image_window_g1_ParamLimits

0x9db7,	// (0x0004bbda) popup_note_image_window_g1

0x9dc3,	// (0x0004bbe6) popup_note_image_window_g2_ParamLimits

0x9dc3,	// (0x0004bbe6) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00051682) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00051682) popup_note_image_window_g

0x9ddc,	// (0x0004bbff) popup_note_image_window_t1_ParamLimits

0x9ddc,	// (0x0004bbff) popup_note_image_window_t1

0x9df5,	// (0x0004bc18) popup_note_image_window_t2_ParamLimits

0x9df5,	// (0x0004bc18) popup_note_image_window_t2

0x9e0e,	// (0x0004bc31) popup_note_image_window_t3_ParamLimits

0x9e0e,	// (0x0004bc31) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00051687) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00051687) popup_note_image_window_t

0x9c77,	// (0x0004ba9a) bg_popup_window_pane_cp7_ParamLimits

0x9c77,	// (0x0004ba9a) bg_popup_window_pane_cp7

0x9ca7,	// (0x0004baca) popup_note_wait_window_g1_ParamLimits

0x9ca7,	// (0x0004baca) popup_note_wait_window_g1

0x9cb3,	// (0x0004bad6) popup_note_wait_window_g2_ParamLimits

0x9cb3,	// (0x0004bad6) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00051670) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00051670) popup_note_wait_window_g

0x9ccb,	// (0x0004baee) popup_note_wait_window_t1_ParamLimits

0x9ccb,	// (0x0004baee) popup_note_wait_window_t1

0x9cf2,	// (0x0004bb15) popup_note_wait_window_t2_ParamLimits

0x9cf2,	// (0x0004bb15) popup_note_wait_window_t2

0x9d10,	// (0x0004bb33) popup_note_wait_window_t3_ParamLimits

0x9d10,	// (0x0004bb33) popup_note_wait_window_t3

0x9d23,	// (0x0004bb46) popup_note_wait_window_t4_ParamLimits

0x9d23,	// (0x0004bb46) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00051677) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00051677) popup_note_wait_window_t

0x9d48,	// (0x0004bb6b) wait_bar_pane_ParamLimits

0x9d48,	// (0x0004bb6b) wait_bar_pane

0xdc0c,	// (0x0004fa2f) wait_anim_pane

0xdc0c,	// (0x0004fa2f) wait_border_pane

0xdc02,	// (0x0004fa25) wait_anim_pane_g1

0xdc02,	// (0x0004fa25) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005152b) wait_anim_pane_g

0x9c1b,	// (0x0004ba3e) wait_border_pane_g1

0x9c26,	// (0x0004ba49) wait_border_pane_g2

0x9c2f,	// (0x0004ba52) wait_border_pane_g3

0x0002,

0xf846,	// (0x00051669) wait_border_pane_g

0x9a85,	// (0x0004b8a8) bg_popup_window_pane_cp16_ParamLimits

0x9a85,	// (0x0004b8a8) bg_popup_window_pane_cp16

0x9b85,	// (0x0004b9a8) indicator_popup_pane_cp4_ParamLimits

0x9b85,	// (0x0004b9a8) indicator_popup_pane_cp4

0x9b99,	// (0x0004b9bc) popup_query_data_window_t1_ParamLimits

0x9b99,	// (0x0004b9bc) popup_query_data_window_t1

0x9bab,	// (0x0004b9ce) popup_query_data_window_t2_ParamLimits

0x9bab,	// (0x0004b9ce) popup_query_data_window_t2

0x9bc4,	// (0x0004b9e7) popup_query_data_window_t3_ParamLimits

0x9bc4,	// (0x0004b9e7) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00051662) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00051662) popup_query_data_window_t

0x9bde,	// (0x0004ba01) query_popup_data_pane_ParamLimits

0x9bde,	// (0x0004ba01) query_popup_data_pane

0x9bf2,	// (0x0004ba15) query_popup_data_pane_cp1_ParamLimits

0x9bf2,	// (0x0004ba15) query_popup_data_pane_cp1

0x9a85,	// (0x0004b8a8) bg_popup_window_pane_cp10_ParamLimits

0x9a85,	// (0x0004b8a8) bg_popup_window_pane_cp10

0x9ab7,	// (0x0004b8da) indicator_popup_pane_ParamLimits

0x9ab7,	// (0x0004b8da) indicator_popup_pane

0x9ad9,	// (0x0004b8fc) popup_query_code_window_t1_ParamLimits

0x9ad9,	// (0x0004b8fc) popup_query_code_window_t1

0x9af3,	// (0x0004b916) popup_query_code_window_t2_ParamLimits

0x9af3,	// (0x0004b916) popup_query_code_window_t2

0x9b3c,	// (0x0004b95f) popup_query_code_window_t3_ParamLimits

0x9b3c,	// (0x0004b95f) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005165b) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005165b) popup_query_code_window_t

0x9b6b,	// (0x0004b98e) query_popup_pane_ParamLimits

0x9b6b,	// (0x0004b98e) query_popup_pane

0x070a,	// (0x0004252d) bg_popup_window_pane_cp15_ParamLimits

0x070a,	// (0x0004252d) bg_popup_window_pane_cp15

0x072a,	// (0x0004254d) indicator_popup_pane_cp1_ParamLimits

0x072a,	// (0x0004254d) indicator_popup_pane_cp1

0x073d,	// (0x00042560) indicator_popup_pane_cp2_ParamLimits

0x073d,	// (0x00042560) indicator_popup_pane_cp2

0x0758,	// (0x0004257b) popup_query_data_code_window_g1_ParamLimits

0x0758,	// (0x0004257b) popup_query_data_code_window_g1

0x076b,	// (0x0004258e) popup_query_data_code_window_t1_ParamLimits

0x076b,	// (0x0004258e) popup_query_data_code_window_t1

0x077d,	// (0x000425a0) popup_query_data_code_window_t2_ParamLimits

0x077d,	// (0x000425a0) popup_query_data_code_window_t2

0x078f,	// (0x000425b2) popup_query_data_code_window_t3_ParamLimits

0x078f,	// (0x000425b2) popup_query_data_code_window_t3

0x07a5,	// (0x000425c8) popup_query_data_code_window_t4_ParamLimits

0x07a5,	// (0x000425c8) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000513ad) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000513ad) popup_query_data_code_window_t

0x4617,	// (0x0004643a) list_single_midp_graphic_pane_g3

0x07bf,	// (0x000425e2) query_popup_data_pane_cp2_ParamLimits

0x07d2,	// (0x000425f5) query_popup_pane_cp2_ParamLimits

0x07d2,	// (0x000425f5) query_popup_pane_cp2

0xdc0c,	// (0x0004fa2f) bg_popup_window_pane_cp11

0x9a71,	// (0x0004b894) heading_pane_cp5

0x086b,	// (0x0004268e) listscroll_popup_info_pane

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp3

0x07ed,	// (0x00042610) query_popup_pane_t1

0x07fb,	// (0x0004261e) list_popup_info_pane_ParamLimits

0x07fb,	// (0x0004261e) list_popup_info_pane

0x080a,	// (0x0004262d) listscroll_popup_info_pane_g1

0x0812,	// (0x00042635) scroll_pane_cp7

0x081c,	// (0x0004263f) popup_info_list_pane_t1_ParamLimits

0x081c,	// (0x0004263f) popup_info_list_pane_t1

0x0836,	// (0x00042659) popup_info_list_pane_t2_ParamLimits

0x0836,	// (0x00042659) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000513b6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000513b6) popup_info_list_pane_t

0xdc0c,	// (0x0004fa2f) bg_popup_window_pane_cp12

0xae48,	// (0x0004cc6b) find_popup_pane

0xdc5a,	// (0x0004fa7d) bg_popup_window_pane_cp3

0x0850,	// (0x00042673) heading_pane_cp3

0x085c,	// (0x0004267f) listscroll_popup_graphic_pane

0xdc0c,	// (0x0004fa2f) bg_popup_window_pane_cp4

0x6708,	// (0x0004852b) heading_pane_cp4

0x086b,	// (0x0004268e) listscroll_popup_colour_pane

0x6712,	// (0x00048535) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6712,	// (0x00048535) cell_large_graphic_colour_none_popup_pane

0x6726,	// (0x00048549) grid_large_graphic_colour_popup_pane_ParamLimits

0x6726,	// (0x00048549) grid_large_graphic_colour_popup_pane

0x6752,	// (0x00048575) listscroll_popup_colour_pane_g1_ParamLimits

0x6752,	// (0x00048575) listscroll_popup_colour_pane_g1

0x6769,	// (0x0004858c) listscroll_popup_colour_pane_g2_ParamLimits

0x6769,	// (0x0004858c) listscroll_popup_colour_pane_g2

0x6780,	// (0x000485a3) listscroll_popup_colour_pane_g3_ParamLimits

0x6780,	// (0x000485a3) listscroll_popup_colour_pane_g3

0x6790,	// (0x000485b3) listscroll_popup_colour_pane_g4_ParamLimits

0x6790,	// (0x000485b3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000513bb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000513bb) listscroll_popup_colour_pane_g

0x0873,	// (0x00042696) scroll_pane_cp6_ParamLimits

0x0873,	// (0x00042696) scroll_pane_cp6

0x67a4,	// (0x000485c7) cell_large_graphic_colour_popup_pane_ParamLimits

0x67a4,	// (0x000485c7) cell_large_graphic_colour_popup_pane

0x0885,	// (0x000426a8) cell_large_graphic_colour_none_popup_pane_t1

0xdc0c,	// (0x0004fa2f) grid_highlight_pane_cp5

0x0894,	// (0x000426b7) cell_large_graphic_colour_popup_pane_g1

0x089c,	// (0x000426bf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000513c4) cell_large_graphic_colour_popup_pane_g

0x08a4,	// (0x000426c7) cell_large_graphic_colour_popup_pane_g2_copy1

0x08ad,	// (0x000426d0) grid_highlight_pane_cp4

0x08b5,	// (0x000426d8) bg_popup_window_pane_cp8_ParamLimits

0x08b5,	// (0x000426d8) bg_popup_window_pane_cp8

0x08d0,	// (0x000426f3) popup_snote_single_text_window_g1_ParamLimits

0x08d0,	// (0x000426f3) popup_snote_single_text_window_g1

0x08e2,	// (0x00042705) popup_snote_single_text_window_t1_ParamLimits

0x08e2,	// (0x00042705) popup_snote_single_text_window_t1

0x08f5,	// (0x00042718) popup_snote_single_text_window_t2_ParamLimits

0x08f5,	// (0x00042718) popup_snote_single_text_window_t2

0x0908,	// (0x0004272b) popup_snote_single_text_window_t3_ParamLimits

0x0908,	// (0x0004272b) popup_snote_single_text_window_t3

0x0941,	// (0x00042764) popup_snote_single_text_window_t4_ParamLimits

0x0941,	// (0x00042764) popup_snote_single_text_window_t4

0x0975,	// (0x00042798) popup_snote_single_text_window_t5_ParamLimits

0x0975,	// (0x00042798) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000513c9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000513c9) popup_snote_single_text_window_t

0x09a4,	// (0x000427c7) bg_popup_window_pane_cp9_ParamLimits

0x09a4,	// (0x000427c7) bg_popup_window_pane_cp9

0x08d0,	// (0x000426f3) popup_snote_single_graphic_window_g1_ParamLimits

0x08d0,	// (0x000426f3) popup_snote_single_graphic_window_g1

0x09b2,	// (0x000427d5) popup_snote_single_graphic_window_g2_ParamLimits

0x09b2,	// (0x000427d5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000513d4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000513d4) popup_snote_single_graphic_window_g

0x09be,	// (0x000427e1) popup_snote_single_graphic_window_t1_ParamLimits

0x09be,	// (0x000427e1) popup_snote_single_graphic_window_t1

0x09d1,	// (0x000427f4) popup_snote_single_graphic_window_t2_ParamLimits

0x09d1,	// (0x000427f4) popup_snote_single_graphic_window_t2

0x09e4,	// (0x00042807) popup_snote_single_graphic_window_t3_ParamLimits

0x09e4,	// (0x00042807) popup_snote_single_graphic_window_t3

0x0a1d,	// (0x00042840) popup_snote_single_graphic_window_t4_ParamLimits

0x0a1d,	// (0x00042840) popup_snote_single_graphic_window_t4

0x0a51,	// (0x00042874) popup_snote_single_graphic_window_t5_ParamLimits

0x0a51,	// (0x00042874) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000513d9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000513d9) popup_snote_single_graphic_window_t

0xad86,	// (0x0004cba9) grid_graphic_popup_pane_ParamLimits

0xad86,	// (0x0004cba9) grid_graphic_popup_pane

0xadb4,	// (0x0004cbd7) listscroll_popup_graphic_pane_g1_ParamLimits

0xadb4,	// (0x0004cbd7) listscroll_popup_graphic_pane_g1

0xadc8,	// (0x0004cbeb) listscroll_popup_graphic_pane_g2_ParamLimits

0xadc8,	// (0x0004cbeb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x000517d8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x000517d8) listscroll_popup_graphic_pane_g

0xaddc,	// (0x0004cbff) scroll_pane_cp5

0xad1b,	// (0x0004cb3e) cell_graphic_popup_pane_ParamLimits

0xad1b,	// (0x0004cb3e) cell_graphic_popup_pane

0xacfc,	// (0x0004cb1f) cell_graphic_popup_pane_g1

0xad04,	// (0x0004cb27) cell_graphic_popup_pane_g2

0x08a4,	// (0x000426c7) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x000517d1) cell_graphic_popup_pane_g

0xad0d,	// (0x0004cb30) cell_graphic_popup_pane_t2

0x08ad,	// (0x000426d0) grid_highlight_pane_cp3

0x0a92,	// (0x000428b5) list_gen_pane_ParamLimits

0x0a92,	// (0x000428b5) list_gen_pane

0x0aba,	// (0x000428dd) scroll_pane

0xac54,	// (0x0004ca77) bg_list_pane_g1_ParamLimits

0xac54,	// (0x0004ca77) bg_list_pane_g1

0xac71,	// (0x0004ca94) bg_list_pane_g2_ParamLimits

0xac71,	// (0x0004ca94) bg_list_pane_g2

0xac86,	// (0x0004caa9) bg_list_pane_g3_ParamLimits

0xac86,	// (0x0004caa9) bg_list_pane_g3

0xac9a,	// (0x0004cabd) bg_list_pane_g4_ParamLimits

0xac9a,	// (0x0004cabd) bg_list_pane_g4

0xacae,	// (0x0004cad1) bg_list_pane_g5_ParamLimits

0xacae,	// (0x0004cad1) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x000517c6) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x000517c6) bg_list_pane_g

0x7ab1,	// (0x000498d4) list_double2_graphic_large_graphic_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double2_graphic_large_graphic_pane

0x7ab1,	// (0x000498d4) list_double2_graphic_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double2_graphic_pane

0x7ab1,	// (0x000498d4) list_double2_large_graphic_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double2_large_graphic_pane

0x7ab1,	// (0x000498d4) list_double2_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double2_pane

0x7ab1,	// (0x000498d4) list_double_graphic_heading_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_graphic_heading_pane

0x7ab1,	// (0x000498d4) list_double_graphic_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_graphic_pane

0x7ab1,	// (0x000498d4) list_double_heading_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_heading_pane

0x7ab1,	// (0x000498d4) list_double_large_graphic_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_large_graphic_pane

0x7ab1,	// (0x000498d4) list_double_number_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_number_pane

0x7ab1,	// (0x000498d4) list_double_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_pane

0x7ab1,	// (0x000498d4) list_double_time_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_double_time_pane

0x7ab1,	// (0x000498d4) list_setting_number_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_setting_number_pane

0x7ab1,	// (0x000498d4) list_setting_pane_ParamLimits

0x7ab1,	// (0x000498d4) list_setting_pane

0xac24,	// (0x0004ca47) list_single_2graphic_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_2graphic_pane

0xac24,	// (0x0004ca47) list_single_graphic_heading_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_graphic_heading_pane

0xac24,	// (0x0004ca47) list_single_graphic_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_graphic_pane

0xac24,	// (0x0004ca47) list_single_heading_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_heading_pane

0x7ad9,	// (0x000498fc) list_single_large_graphic_pane_ParamLimits

0x7ad9,	// (0x000498fc) list_single_large_graphic_pane

0xac24,	// (0x0004ca47) list_single_number_heading_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_number_heading_pane

0xac24,	// (0x0004ca47) list_single_number_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_number_pane

0xac24,	// (0x0004ca47) list_single_pane_ParamLimits

0xac24,	// (0x0004ca47) list_single_pane

0xdc0c,	// (0x0004fa2f) list_highlight_pane_cp1

0x231a,	// (0x0004413d) list_single_pane_g1_ParamLimits

0x231a,	// (0x0004413d) list_single_pane_g1

0x67d3,	// (0x000485f6) list_single_pane_g2_ParamLimits

0x67d3,	// (0x000485f6) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000513f5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000513f5) list_single_pane_g

0x5a97,	// (0x000478ba) list_single_pane_t1_ParamLimits

0x5a97,	// (0x000478ba) list_single_pane_t1

0x231a,	// (0x0004413d) list_single_number_pane_g1_ParamLimits

0x231a,	// (0x0004413d) list_single_number_pane_g1

0x67d3,	// (0x000485f6) list_single_number_pane_g2_ParamLimits

0x67d3,	// (0x000485f6) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000513f5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000513f5) list_single_number_pane_g

0x5a39,	// (0x0004785c) list_single_number_pane_t1_ParamLimits

0x5a39,	// (0x0004785c) list_single_number_pane_t1

0x5a4f,	// (0x00047872) list_single_number_pane_t2_ParamLimits

0x5a4f,	// (0x00047872) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00051787) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00051787) list_single_number_pane_t

0x5132,	// (0x00046f55) list_single_graphic_pane_g1_ParamLimits

0x5132,	// (0x00046f55) list_single_graphic_pane_g1

0x231a,	// (0x0004413d) list_single_graphic_pane_g2_ParamLimits

0x231a,	// (0x0004413d) list_single_graphic_pane_g2

0x67d3,	// (0x000485f6) list_single_graphic_pane_g3_ParamLimits

0x67d3,	// (0x000485f6) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000513e4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000513e4) list_single_graphic_pane_g

0x513e,	// (0x00046f61) list_single_graphic_pane_t1_ParamLimits

0x513e,	// (0x00046f61) list_single_graphic_pane_t1

0x5154,	// (0x00046f77) list_single_heading_pane_g1_ParamLimits

0x5154,	// (0x00046f77) list_single_heading_pane_g1

0x67d3,	// (0x000485f6) list_single_heading_pane_g2_ParamLimits

0x67d3,	// (0x000485f6) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000513eb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000513eb) list_single_heading_pane_g

0x5167,	// (0x00046f8a) list_single_heading_pane_t1_ParamLimits

0x5167,	// (0x00046f8a) list_single_heading_pane_t1

0x67df,	// (0x00048602) list_single_heading_pane_t2_ParamLimits

0x67df,	// (0x00048602) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000513f0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000513f0) list_single_heading_pane_t

0x231a,	// (0x0004413d) list_single_number_heading_pane_g1_ParamLimits

0x231a,	// (0x0004413d) list_single_number_heading_pane_g1

0x67d3,	// (0x000485f6) list_single_number_heading_pane_g2_ParamLimits

0x67d3,	// (0x000485f6) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000513f5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000513f5) list_single_number_heading_pane_g

0x517d,	// (0x00046fa0) list_single_number_heading_pane_t1_ParamLimits

0x517d,	// (0x00046fa0) list_single_number_heading_pane_t1

0x5193,	// (0x00046fb6) list_single_number_heading_pane_t2_ParamLimits

0x5193,	// (0x00046fb6) list_single_number_heading_pane_t2

0x51a5,	// (0x00046fc8) list_single_number_heading_pane_t3_ParamLimits

0x51a5,	// (0x00046fc8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000513fa) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000513fa) list_single_number_heading_pane_t

0x51b7,	// (0x00046fda) list_single_graphic_heading_pane_g1_ParamLimits

0x51b7,	// (0x00046fda) list_single_graphic_heading_pane_g1

0x67f1,	// (0x00048614) list_single_graphic_heading_pane_g4_ParamLimits

0x67f1,	// (0x00048614) list_single_graphic_heading_pane_g4

0x67d3,	// (0x000485f6) list_single_graphic_heading_pane_g5_ParamLimits

0x67d3,	// (0x000485f6) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00051401) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00051401) list_single_graphic_heading_pane_g

0x517d,	// (0x00046fa0) list_single_graphic_heading_pane_t1_ParamLimits

0x517d,	// (0x00046fa0) list_single_graphic_heading_pane_t1

0x51cf,	// (0x00046ff2) list_single_graphic_heading_pane_t2_ParamLimits

0x51cf,	// (0x00046ff2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051408) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051408) list_single_graphic_heading_pane_t

0x6802,	// (0x00048625) list_single_large_graphic_pane_g1_ParamLimits

0x6802,	// (0x00048625) list_single_large_graphic_pane_g1

0x680e,	// (0x00048631) list_single_large_graphic_pane_g2_ParamLimits

0x680e,	// (0x00048631) list_single_large_graphic_pane_g2

0x681a,	// (0x0004863d) list_single_large_graphic_pane_g3_ParamLimits

0x681a,	// (0x0004863d) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005140d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005140d) list_single_large_graphic_pane_g

0x9c26,	// (0x0004ba49) wait_border_pane_g2_copy1

0x6826,	// (0x00048649) list_single_large_graphic_pane_g4_cp2

0x51e7,	// (0x0004700a) list_single_large_graphic_pane_t1_ParamLimits

0x51e7,	// (0x0004700a) list_single_large_graphic_pane_t1

0x51fd,	// (0x00047020) list_double_pane_g1_ParamLimits

0x51fd,	// (0x00047020) list_double_pane_g1

0x5209,	// (0x0004702c) list_double_pane_g2_ParamLimits

0x5209,	// (0x0004702c) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00051414) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00051414) list_double_pane_g

0x5215,	// (0x00047038) list_double_pane_t1_ParamLimits

0x5215,	// (0x00047038) list_double_pane_t1

0x522b,	// (0x0004704e) list_double_pane_t2_ParamLimits

0x522b,	// (0x0004704e) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051419) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051419) list_double_pane_t

0x523d,	// (0x00047060) list_double2_pane_g1_ParamLimits

0x523d,	// (0x00047060) list_double2_pane_g1

0x524e,	// (0x00047071) list_double2_pane_g2_ParamLimits

0x524e,	// (0x00047071) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005141e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005141e) list_double2_pane_g

0x525a,	// (0x0004707d) list_double2_pane_t1_ParamLimits

0x525a,	// (0x0004707d) list_double2_pane_t1

0x5270,	// (0x00047093) list_double2_pane_t2_ParamLimits

0x5270,	// (0x00047093) list_double2_pane_t2

0x0001,

0xf600,	// (0x00051423) list_double2_pane_t_ParamLimits

0xf600,	// (0x00051423) list_double2_pane_t

0x51fd,	// (0x00047020) list_double_number_pane_g1_ParamLimits

0x51fd,	// (0x00047020) list_double_number_pane_g1

0x5209,	// (0x0004702c) list_double_number_pane_g2_ParamLimits

0x5209,	// (0x0004702c) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00051414) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00051414) list_double_number_pane_g

0x5282,	// (0x000470a5) list_double_number_pane_t1_ParamLimits

0x5282,	// (0x000470a5) list_double_number_pane_t1

0x5294,	// (0x000470b7) list_double_number_pane_t2_ParamLimits

0x5294,	// (0x000470b7) list_double_number_pane_t2

0x52aa,	// (0x000470cd) list_double_number_pane_t3_ParamLimits

0x52aa,	// (0x000470cd) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051428) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051428) list_double_number_pane_t

0x52bc,	// (0x000470df) list_double_graphic_pane_g1_ParamLimits

0x52bc,	// (0x000470df) list_double_graphic_pane_g1

0x52c8,	// (0x000470eb) list_double_graphic_pane_g2_ParamLimits

0x52c8,	// (0x000470eb) list_double_graphic_pane_g2

0x52d7,	// (0x000470fa) list_double_graphic_pane_g3_ParamLimits

0x52d7,	// (0x000470fa) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005142f) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005142f) list_double_graphic_pane_g

0x52ef,	// (0x00047112) list_double_graphic_pane_t1_ParamLimits

0x52ef,	// (0x00047112) list_double_graphic_pane_t1

0x5305,	// (0x00047128) list_double_graphic_pane_t2_ParamLimits

0x5305,	// (0x00047128) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051438) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051438) list_double_graphic_pane_t

0x5317,	// (0x0004713a) list_double2_graphic_pane_g1_ParamLimits

0x5317,	// (0x0004713a) list_double2_graphic_pane_g1

0x5323,	// (0x00047146) list_double2_graphic_pane_g2_ParamLimits

0x5323,	// (0x00047146) list_double2_graphic_pane_g2

0x682e,	// (0x00048651) list_double2_graphic_pane_g3_ParamLimits

0x682e,	// (0x00048651) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005143d) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005143d) list_double2_graphic_pane_g

0x532f,	// (0x00047152) list_double2_graphic_pane_t1_ParamLimits

0x532f,	// (0x00047152) list_double2_graphic_pane_t1

0x5345,	// (0x00047168) list_double2_graphic_pane_t2_ParamLimits

0x5345,	// (0x00047168) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00051444) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00051444) list_double2_graphic_pane_t

0x5357,	// (0x0004717a) list_double_large_graphic_pane_g1_ParamLimits

0x5357,	// (0x0004717a) list_double_large_graphic_pane_g1

0x5376,	// (0x00047199) list_double_large_graphic_pane_g2_ParamLimits

0x5376,	// (0x00047199) list_double_large_graphic_pane_g2

0x5209,	// (0x0004702c) list_double_large_graphic_pane_g3_ParamLimits

0x5209,	// (0x0004702c) list_double_large_graphic_pane_g3

0x538c,	// (0x000471af) list_double_large_graphic_pane_g4_ParamLimits

0x538c,	// (0x000471af) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051449) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051449) list_double_large_graphic_pane_g

0x539f,	// (0x000471c2) list_double_large_graphic_pane_t1_ParamLimits

0x539f,	// (0x000471c2) list_double_large_graphic_pane_t1

0x53b8,	// (0x000471db) list_double_large_graphic_pane_t2_ParamLimits

0x53b8,	// (0x000471db) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00051454) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00051454) list_double_large_graphic_pane_t

0x53ca,	// (0x000471ed) list_double2_large_graphic_pane_g1_ParamLimits

0x53ca,	// (0x000471ed) list_double2_large_graphic_pane_g1

0x684f,	// (0x00048672) list_double2_large_graphic_pane_g2_ParamLimits

0x684f,	// (0x00048672) list_double2_large_graphic_pane_g2

0x682e,	// (0x00048651) list_double2_large_graphic_pane_g3_ParamLimits

0x682e,	// (0x00048651) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00051459) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00051459) list_double2_large_graphic_pane_g

0x53d6,	// (0x000471f9) list_double2_large_graphic_pane_t1_ParamLimits

0x53d6,	// (0x000471f9) list_double2_large_graphic_pane_t1

0x53ec,	// (0x0004720f) list_double2_large_graphic_pane_t2_ParamLimits

0x53ec,	// (0x0004720f) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00051460) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00051460) list_double2_large_graphic_pane_t

0x53fe,	// (0x00047221) list_double_heading_pane_g1_ParamLimits

0x53fe,	// (0x00047221) list_double_heading_pane_g1

0x540f,	// (0x00047232) list_double_heading_pane_g2_ParamLimits

0x540f,	// (0x00047232) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00051465) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00051465) list_double_heading_pane_g

0x541b,	// (0x0004723e) list_double_heading_pane_t1_ParamLimits

0x541b,	// (0x0004723e) list_double_heading_pane_t1

0x5431,	// (0x00047254) list_double_heading_pane_t2_ParamLimits

0x5431,	// (0x00047254) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005146a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005146a) list_double_heading_pane_t

0x5317,	// (0x0004713a) list_double_graphic_heading_pane_g1_ParamLimits

0x5317,	// (0x0004713a) list_double_graphic_heading_pane_g1

0x53fe,	// (0x00047221) list_double_graphic_heading_pane_g2_ParamLimits

0x53fe,	// (0x00047221) list_double_graphic_heading_pane_g2

0x540f,	// (0x00047232) list_double_graphic_heading_pane_g3_ParamLimits

0x540f,	// (0x00047232) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005146f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005146f) list_double_graphic_heading_pane_g

0x5443,	// (0x00047266) list_double_graphic_heading_pane_t1_ParamLimits

0x5443,	// (0x00047266) list_double_graphic_heading_pane_t1

0x5459,	// (0x0004727c) list_double_graphic_heading_pane_t2_ParamLimits

0x5459,	// (0x0004727c) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00051476) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00051476) list_double_graphic_heading_pane_t

0x546b,	// (0x0004728e) list_double_time_pane_g1_ParamLimits

0x546b,	// (0x0004728e) list_double_time_pane_g1

0x547c,	// (0x0004729f) list_double_time_pane_g2_ParamLimits

0x547c,	// (0x0004729f) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005147b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005147b) list_double_time_pane_g

0x5488,	// (0x000472ab) list_double_time_pane_t1_ParamLimits

0x5488,	// (0x000472ab) list_double_time_pane_t1

0x549e,	// (0x000472c1) list_double_time_pane_t2_ParamLimits

0x549e,	// (0x000472c1) list_double_time_pane_t2

0x54b0,	// (0x000472d3) list_double_time_pane_t3_ParamLimits

0x54b0,	// (0x000472d3) list_double_time_pane_t3

0x54c2,	// (0x000472e5) list_double_time_pane_t4_ParamLimits

0x54c2,	// (0x000472e5) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00051480) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00051480) list_double_time_pane_t

0x54d4,	// (0x000472f7) list_setting_pane_g1_ParamLimits

0x54d4,	// (0x000472f7) list_setting_pane_g1

0x54e0,	// (0x00047303) list_setting_pane_g2_ParamLimits

0x54e0,	// (0x00047303) list_setting_pane_g2

0x0001,

0xf666,	// (0x00051489) list_setting_pane_g_ParamLimits

0xf666,	// (0x00051489) list_setting_pane_g

0x54ec,	// (0x0004730f) list_setting_pane_t1_ParamLimits

0x54ec,	// (0x0004730f) list_setting_pane_t1

0x5506,	// (0x00047329) list_setting_pane_t2_ParamLimits

0x5506,	// (0x00047329) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005148e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005148e) list_setting_pane_t

0x5545,	// (0x00047368) set_value_pane_cp_ParamLimits

0x5545,	// (0x00047368) set_value_pane_cp

0x5553,	// (0x00047376) list_setting_number_pane_g1_ParamLimits

0x5553,	// (0x00047376) list_setting_number_pane_g1

0x555f,	// (0x00047382) list_setting_number_pane_g2_ParamLimits

0x555f,	// (0x00047382) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00051495) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00051495) list_setting_number_pane_g

0x556b,	// (0x0004738e) list_setting_number_pane_t1_ParamLimits

0x556b,	// (0x0004738e) list_setting_number_pane_t1

0x5584,	// (0x000473a7) list_setting_number_pane_t2_ParamLimits

0x5584,	// (0x000473a7) list_setting_number_pane_t2

0x559e,	// (0x000473c1) list_setting_number_pane_t3_ParamLimits

0x559e,	// (0x000473c1) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005149a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005149a) list_setting_number_pane_t

0x5545,	// (0x00047368) set_value_pane_ParamLimits

0x5545,	// (0x00047368) set_value_pane

0x0aee,	// (0x00042911) bg_set_opt_pane_ParamLimits

0x0aee,	// (0x00042911) bg_set_opt_pane

0x55e1,	// (0x00047404) set_value_pane_t1

0x0b0f,	// (0x00042932) slider_set_pane_cp3

0x0b18,	// (0x0004293b) volume_small_pane_cp

0x0b21,	// (0x00042944) list_form_gen_pane

0x0b2a,	// (0x0004294d) scroll_pane_cp8

0x55f7,	// (0x0004741a) form_field_data_pane_ParamLimits

0x55f7,	// (0x0004741a) form_field_data_pane

0x561f,	// (0x00047442) form_field_data_wide_pane_ParamLimits

0x561f,	// (0x00047442) form_field_data_wide_pane

0x5646,	// (0x00047469) form_field_popup_pane_ParamLimits

0x5646,	// (0x00047469) form_field_popup_pane

0x5668,	// (0x0004748b) form_field_popup_wide_pane_ParamLimits

0x5668,	// (0x0004748b) form_field_popup_wide_pane

0x5689,	// (0x000474ac) form_field_slider_pane_ParamLimits

0x5689,	// (0x000474ac) form_field_slider_pane

0x569c,	// (0x000474bf) form_field_slider_wide_pane_ParamLimits

0x569c,	// (0x000474bf) form_field_slider_wide_pane

0x0b3b,	// (0x0004295e) data_form_pane

0x56b9,	// (0x000474dc) form_field_data_pane_t1

0x0b47,	// (0x0004296a) input_focus_pane

0x56d3,	// (0x000474f6) data_form_wide_pane

0x56f0,	// (0x00047513) form_field_data_wide_pane_t1

0x08c2,	// (0x000426e5) input_focus_pane_cp6

0x5712,	// (0x00047535) form_field_popup_pane_t1

0x0b47,	// (0x0004296a) input_focus_pane_cp7

0x0b75,	// (0x00042998) list_form_pane

0x5734,	// (0x00047557) form_field_popup_wide_pane_t1

0x0b47,	// (0x0004296a) input_focus_pane_cp8

0x0b81,	// (0x000429a4) list_form_wide_pane

0x5751,	// (0x00047574) form_field_slider_pane_t1_ParamLimits

0x5751,	// (0x00047574) form_field_slider_pane_t1

0x5769,	// (0x0004758c) form_field_slider_pane_t2_ParamLimits

0x5769,	// (0x0004758c) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000514aa) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000514aa) form_field_slider_pane_t

0xdc96,	// (0x0004fab9) input_focus_pane_cp9_ParamLimits

0xdc96,	// (0x0004fab9) input_focus_pane_cp9

0x577e,	// (0x000475a1) slider_cont_pane_ParamLimits

0x577e,	// (0x000475a1) slider_cont_pane

0x0b8d,	// (0x000429b0) form_field_slider_wide_pane_t1_ParamLimits

0x0b8d,	// (0x000429b0) form_field_slider_wide_pane_t1

0x5792,	// (0x000475b5) form_field_slider_wide_pane_t2_ParamLimits

0x5792,	// (0x000475b5) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000514af) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000514af) form_field_slider_wide_pane_t

0xdc96,	// (0x0004fab9) input_focus_pane_cp10_ParamLimits

0xdc96,	// (0x0004fab9) input_focus_pane_cp10

0x57a4,	// (0x000475c7) slider_cont_pane_cp1_ParamLimits

0x57a4,	// (0x000475c7) slider_cont_pane_cp1

0x57b8,	// (0x000475db) slider_form_pane_cp

0x0b9f,	// (0x000429c2) input_focus_pane_g1

0x0ba7,	// (0x000429ca) input_focus_pane_g2

0x0baf,	// (0x000429d2) input_focus_pane_g3

0x0bb7,	// (0x000429da) input_focus_pane_g4

0x0bbf,	// (0x000429e2) input_focus_pane_g5

0x0bc7,	// (0x000429ea) input_focus_pane_g6

0x0bcf,	// (0x000429f2) input_focus_pane_g7

0x0bd7,	// (0x000429fa) input_focus_pane_g8

0x0bdf,	// (0x00042a02) input_focus_pane_g9

0xdc02,	// (0x0004fa25) input_focus_pane_g10

0x0009,

0xf691,	// (0x000514b4) input_focus_pane_g

0x9c2f,	// (0x0004ba52) wait_border_pane_g3_copy1

0x57c0,	// (0x000475e3) data_form_pane_t1

0xdc02,	// (0x0004fa25) wait_anim_pane_g1_copy1

0x5a61,	// (0x00047884) data_form_wide_pane_t1

0x57df,	// (0x00047602) list_form_graphic_pane_cp_ParamLimits

0x57df,	// (0x00047602) list_form_graphic_pane_cp

0xab7b,	// (0x0004c99e) slider_form_pane_g1

0xab84,	// (0x0004c9a7) slider_form_pane_g2

0x0006,

0xf994,	// (0x000517b7) slider_form_pane_g

0x57df,	// (0x00047602) list_form_graphic_pane_ParamLimits

0x57df,	// (0x00047602) list_form_graphic_pane

0x57f1,	// (0x00047614) list_form_graphic_pane_g1

0x57f9,	// (0x0004761c) list_form_graphic_pane_t1_ParamLimits

0x57f9,	// (0x0004761c) list_form_graphic_pane_t1

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp5_ParamLimits

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp5

0x580e,	// (0x00047631) find_pane_g1

0x0be7,	// (0x00042a0a) input_find_pane

0x5817,	// (0x0004763a) input_find_pane_g1_ParamLimits

0x5817,	// (0x0004763a) input_find_pane_g1

0x5823,	// (0x00047646) input_find_pane_t1_ParamLimits

0x5823,	// (0x00047646) input_find_pane_t1

0x5838,	// (0x0004765b) input_find_pane_t2_ParamLimits

0x5838,	// (0x0004765b) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000514c9) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000514c9) input_find_pane_t

0x0bf0,	// (0x00042a13) input_focus_pane_cp5_ParamLimits

0x0bf0,	// (0x00042a13) input_focus_pane_cp5

0x0bfe,	// (0x00042a21) bg_popup_window_pane_cp2_ParamLimits

0x0bfe,	// (0x00042a21) bg_popup_window_pane_cp2

0x0c0b,	// (0x00042a2e) listscroll_menu_pane_ParamLimits

0x0c0b,	// (0x00042a2e) listscroll_menu_pane

0x686c,	// (0x0004868f) popup_submenu_window_ParamLimits

0x686c,	// (0x0004868f) popup_submenu_window

0x0c17,	// (0x00042a3a) find_popup_pane_g1

0x0c1f,	// (0x00042a42) input_popup_find_pane_cp

0x0bf0,	// (0x00042a13) input_focus_pane_cp4_ParamLimits

0x0bf0,	// (0x00042a13) input_focus_pane_cp4

0x0c29,	// (0x00042a4c) input_popup_find_pane_t1_ParamLimits

0x0c29,	// (0x00042a4c) input_popup_find_pane_t1

0xdc0c,	// (0x0004fa2f) bg_popup_sub_pane_cp

0x0c57,	// (0x00042a7a) listscroll_popup_sub_pane

0x0c5f,	// (0x00042a82) list_submenu_pane_ParamLimits

0x0c5f,	// (0x00042a82) list_submenu_pane

0x0c70,	// (0x00042a93) scroll_pane_cp4

0x0c78,	// (0x00042a9b) list_single_popup_submenu_pane_ParamLimits

0x0c78,	// (0x00042a9b) list_single_popup_submenu_pane

0x0c8d,	// (0x00042ab0) list_single_popup_submenu_pane_g1

0x0c95,	// (0x00042ab8) list_single_popup_submenu_pane_t1_ParamLimits

0x0c95,	// (0x00042ab8) list_single_popup_submenu_pane_t1

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp1_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp1

0x68aa,	// (0x000486cd) tabs_2_active_pane_g1

0x68b2,	// (0x000486d5) tabs_2_active_pane_t1

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp1_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_passive_tab_pane_cp1

0x68aa,	// (0x000486cd) tabs_2_passive_pane_g1

0x68b2,	// (0x000486d5) tabs_2_passive_pane_t1

0x270d,	// (0x00044530) bg_active_tab_pane_cp4

0x68c4,	// (0x000486e7) tabs_2_long_active_pane_t1

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp4

0x7771,	// (0x00049594) list_single_midp_graphic_pane_g4_ParamLimits

0x270d,	// (0x00044530) bg_active_tab_pane_cp5

0x68e3,	// (0x00048706) tabs_3_long_active_pane_t1

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp5

0x7771,	// (0x00049594) list_single_midp_graphic_pane_g4

0xdc5a,	// (0x0004fa7d) bg_popup_window_pane_cp13_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_popup_window_pane_cp13

0x0cb3,	// (0x00042ad6) listscroll_popup_fast_pane_ParamLimits

0x0cb3,	// (0x00042ad6) listscroll_popup_fast_pane

0x0cc2,	// (0x00042ae5) grid_popup_fast_pane_ParamLimits

0x0cc2,	// (0x00042ae5) grid_popup_fast_pane

0x0cd4,	// (0x00042af7) scroll_pane_cp9_ParamLimits

0x0cd4,	// (0x00042af7) scroll_pane_cp9

0xc4ab,	// (0x0004e2ce) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc4ab,	// (0x0004e2ce) list_single_graphic_hl_pane_t1_cp2

0x0cf8,	// (0x00042b1b) input_focus_pane_cp20_ParamLimits

0x0cf8,	// (0x00042b1b) input_focus_pane_cp20

0x0d06,	// (0x00042b29) query_popup_data_pane_t1_ParamLimits

0x0d06,	// (0x00042b29) query_popup_data_pane_t1

0x0d19,	// (0x00042b3c) query_popup_data_pane_t2_ParamLimits

0x0d19,	// (0x00042b3c) query_popup_data_pane_t2

0x0d5f,	// (0x00042b82) query_popup_data_pane_t3_ParamLimits

0x0d5f,	// (0x00042b82) query_popup_data_pane_t3

0x0da0,	// (0x00042bc3) query_popup_data_pane_t4_ParamLimits

0x0da0,	// (0x00042bc3) query_popup_data_pane_t4

0x0ddc,	// (0x00042bff) query_popup_data_pane_t5_ParamLimits

0x0ddc,	// (0x00042bff) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000514ce) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000514ce) query_popup_data_pane_t

0x0b9f,	// (0x000429c2) bg_set_opt_pane_g1

0x0ba7,	// (0x000429ca) bg_set_opt_pane_g2

0x0baf,	// (0x000429d2) bg_set_opt_pane_g3

0x0bb7,	// (0x000429da) bg_set_opt_pane_g4

0x0bbf,	// (0x000429e2) bg_set_opt_pane_g5

0x0bc7,	// (0x000429ea) bg_set_opt_pane_g6

0x0bcf,	// (0x000429f2) bg_set_opt_pane_g7

0x0bd7,	// (0x000429fa) bg_set_opt_pane_g8

0x0bdf,	// (0x00042a02) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000514d9) bg_set_opt_pane_g

0x6d74,	// (0x00048b97) control_top_pane_stacon_ParamLimits

0x6d74,	// (0x00048b97) control_top_pane_stacon

0x6dc7,	// (0x00048bea) signal_pane_stacon_ParamLimits

0x6dc7,	// (0x00048bea) signal_pane_stacon

0x43bb,	// (0x000461de) stacon_top_pane_g1_ParamLimits

0x43bb,	// (0x000461de) stacon_top_pane_g1

0x6dec,	// (0x00048c0f) title_pane_stacon_ParamLimits

0x6dec,	// (0x00048c0f) title_pane_stacon

0x6e16,	// (0x00048c39) uni_indicator_pane_stacon_ParamLimits

0x6e16,	// (0x00048c39) uni_indicator_pane_stacon

0x6e2b,	// (0x00048c4e) battery_pane_stacon_ParamLimits

0x6e2b,	// (0x00048c4e) battery_pane_stacon

0x6e6f,	// (0x00048c92) control_bottom_pane_stacon_ParamLimits

0x6e6f,	// (0x00048c92) control_bottom_pane_stacon

0x6e92,	// (0x00048cb5) navi_pane_stacon_ParamLimits

0x6e92,	// (0x00048cb5) navi_pane_stacon

0x44a6,	// (0x000462c9) stacon_bottom_pane_g1_ParamLimits

0x44a6,	// (0x000462c9) stacon_bottom_pane_g1

0x68f5,	// (0x00048718) aid_levels_signal_lsc_ParamLimits

0x68f5,	// (0x00048718) aid_levels_signal_lsc

0x690c,	// (0x0004872f) signal_pane_stacon_g1_ParamLimits

0x690c,	// (0x0004872f) signal_pane_stacon_g1

0x6920,	// (0x00048743) signal_pane_stacon_g2_ParamLimits

0x6920,	// (0x00048743) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000514ec) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000514ec) signal_pane_stacon_g

0x6955,	// (0x00048778) title_pane_stacon_t1_ParamLimits

0x6955,	// (0x00048778) title_pane_stacon_t1

0x0e34,	// (0x00042c57) uni_indicator_pane_stacon_g1

0x0e3e,	// (0x00042c61) uni_indicator_pane_stacon_g2

0x0e20,	// (0x00042c43) uni_indicator_pane_stacon_g3

0x0e2a,	// (0x00042c4d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000514f8) uni_indicator_pane_stacon_g

0x697a,	// (0x0004879d) control_top_pane_stacon_g1

0x6982,	// (0x000487a5) control_top_pane_stacon_t1_ParamLimits

0x6982,	// (0x000487a5) control_top_pane_stacon_t1

0x69b9,	// (0x000487dc) aid_levels_battery_lsc_ParamLimits

0x69b9,	// (0x000487dc) aid_levels_battery_lsc

0x69d1,	// (0x000487f4) battery_pane_stacon_g1_ParamLimits

0x69d1,	// (0x000487f4) battery_pane_stacon_g1

0x69e4,	// (0x00048807) battery_pane_stacon_g2_ParamLimits

0x69e4,	// (0x00048807) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00051501) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00051501) battery_pane_stacon_g

0x6a22,	// (0x00048845) navi_icon_pane_stacon

0x6a36,	// (0x00048859) navi_navi_pane_stacon

0x6a22,	// (0x00048845) navi_text_pane_stacon

0x697a,	// (0x0004879d) control_bottom_pane_stacon_g1

0x6a4c,	// (0x0004886f) control_bottom_pane_stacon_t1_ParamLimits

0x6a4c,	// (0x0004886f) control_bottom_pane_stacon_t1

0x6a83,	// (0x000488a6) grid_app_pane_ParamLimits

0x6a83,	// (0x000488a6) grid_app_pane

0x6aa5,	// (0x000488c8) scroll_pane_cp15_ParamLimits

0x6aa5,	// (0x000488c8) scroll_pane_cp15

0x6ab8,	// (0x000488db) cell_app_pane_ParamLimits

0x6ab8,	// (0x000488db) cell_app_pane

0x6ae4,	// (0x00048907) cell_app_pane_g1_ParamLimits

0x6ae4,	// (0x00048907) cell_app_pane_g1

0x0e62,	// (0x00042c85) cell_app_pane_g2_ParamLimits

0x0e62,	// (0x00042c85) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00051506) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00051506) cell_app_pane_g

0x6b08,	// (0x0004892b) cell_app_pane_t1_ParamLimits

0x6b08,	// (0x0004892b) cell_app_pane_t1

0x0e6e,	// (0x00042c91) grid_highlight_pane_ParamLimits

0x0e6e,	// (0x00042c91) grid_highlight_pane

0x0b9f,	// (0x000429c2) cell_highlight_pane_g1

0x0ba7,	// (0x000429ca) cell_highlight_pane_g2

0x0baf,	// (0x000429d2) cell_highlight_pane_g3

0x0bb7,	// (0x000429da) cell_highlight_pane_g4

0x0bbf,	// (0x000429e2) cell_highlight_pane_g5

0x0bc7,	// (0x000429ea) cell_highlight_pane_g6

0x0bcf,	// (0x000429f2) cell_highlight_pane_g7

0x0bd7,	// (0x000429fa) cell_highlight_pane_g8

0x0bdf,	// (0x00042a02) cell_highlight_pane_g9

0xdc02,	// (0x0004fa25) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000514b4) cell_highlight_pane_g

0x0e7f,	// (0x00042ca2) bg_scroll_pane

0x6b32,	// (0x00048955) scroll_handle_pane

0x0ec6,	// (0x00042ce9) scroll_bg_pane_g1

0x0edb,	// (0x00042cfe) scroll_bg_pane_g2

0x0ef3,	// (0x00042d16) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005150b) scroll_bg_pane_g

0x0f08,	// (0x00042d2b) scroll_handle_focus_pane_ParamLimits

0x0f08,	// (0x00042d2b) scroll_handle_focus_pane

0x0ec6,	// (0x00042ce9) scroll_handle_pane_g1

0x0f15,	// (0x00042d38) scroll_handle_pane_g2

0x0ef3,	// (0x00042d16) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00051512) scroll_handle_pane_g

0x0bf0,	// (0x00042a13) bg_popup_sub_pane_cp21_ParamLimits

0x0bf0,	// (0x00042a13) bg_popup_sub_pane_cp21

0x0f29,	// (0x00042d4c) popup_fep_japan_predictive_window_t1_ParamLimits

0x0f29,	// (0x00042d4c) popup_fep_japan_predictive_window_t1

0x0f40,	// (0x00042d63) popup_fep_japan_predictive_window_t2_ParamLimits

0x0f40,	// (0x00042d63) popup_fep_japan_predictive_window_t2

0x228e,	// (0x000440b1) popup_fep_japan_predictive_window_t3_ParamLimits

0x228e,	// (0x000440b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00051519) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00051519) popup_fep_japan_predictive_window_t

0xdc0c,	// (0x0004fa2f) bg_popup_sub_pane_cp23

0x22c5,	// (0x000440e8) listscroll_japin_cand_pane

0x22cd,	// (0x000440f0) popup_fep_japan_candidate_window_t1

0x22db,	// (0x000440fe) candidate_pane_ParamLimits

0x22db,	// (0x000440fe) candidate_pane

0x22ed,	// (0x00044110) scroll_pane_cp30

0x22f7,	// (0x0004411a) list_single_popup_jap_candidate_pane_ParamLimits

0x22f7,	// (0x0004411a) list_single_popup_jap_candidate_pane

0xdc0c,	// (0x0004fa2f) list_highlight_pane_cp30

0x230b,	// (0x0004412e) list_single_popup_jap_candidate_pane_t1

0x6b5b,	// (0x0004897e) level_1_signal

0x6b68,	// (0x0004898b) level_2_signal

0x6b75,	// (0x00048998) level_3_signal

0x6b82,	// (0x000489a5) level_4_signal

0x6b8f,	// (0x000489b2) level_5_signal

0x6b9c,	// (0x000489bf) level_6_signal

0x6ba9,	// (0x000489cc) level_7_signal

0x6b5b,	// (0x0004897e) level_1_battery

0x6b68,	// (0x0004898b) level_2_battery

0x6b75,	// (0x00048998) level_3_battery

0x6b82,	// (0x000489a5) level_4_battery

0x6b8f,	// (0x000489b2) level_5_battery

0x6b9c,	// (0x000489bf) level_6_battery

0x6ba9,	// (0x000489cc) level_7_battery

0x40c4,	// (0x00045ee7) list_menu_pane_ParamLimits

0x40c4,	// (0x00045ee7) list_menu_pane

0x40da,	// (0x00045efd) scroll_pane_cp25_ParamLimits

0x40da,	// (0x00045efd) scroll_pane_cp25

0x40f3,	// (0x00045f16) list_double2_graphic_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double2_graphic_pane_cp2

0x40f3,	// (0x00045f16) list_double2_large_graphic_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double2_large_graphic_pane_cp2

0x40f3,	// (0x00045f16) list_double2_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double2_pane_cp2

0x40f3,	// (0x00045f16) list_double_graphic_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double_graphic_pane_cp2

0x40f3,	// (0x00045f16) list_double_large_graphic_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double_large_graphic_pane_cp2

0x40f3,	// (0x00045f16) list_double_number_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double_number_pane_cp2

0x40f3,	// (0x00045f16) list_double_pane_cp2_ParamLimits

0x40f3,	// (0x00045f16) list_double_pane_cp2

0x6beb,	// (0x00048a0e) list_single_2graphic_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_2graphic_pane_cp2

0x6beb,	// (0x00048a0e) list_single_graphic_heading_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_graphic_heading_pane_cp2

0x6beb,	// (0x00048a0e) list_single_graphic_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_graphic_pane_cp2

0x6beb,	// (0x00048a0e) list_single_heading_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_heading_pane_cp2

0x4103,	// (0x00045f26) list_single_large_graphic_pane_cp2_ParamLimits

0x4103,	// (0x00045f26) list_single_large_graphic_pane_cp2

0x6beb,	// (0x00048a0e) list_single_number_heading_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_number_heading_pane_cp2

0x6beb,	// (0x00048a0e) list_single_number_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_number_pane_cp2

0x6beb,	// (0x00048a0e) list_single_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_pane_cp2

0x4177,	// (0x00045f9a) bg_popup_sub_pane_cp22

0x6cc7,	// (0x00048aea) popup_side_volume_key_window_g1

0x6cf1,	// (0x00048b14) popup_side_volume_key_window_t1

0x6d0f,	// (0x00048b32) volume_small_pane_cp1

0xdc96,	// (0x0004fab9) bg_popup_sub_pane_cp24_ParamLimits

0xdc96,	// (0x0004fab9) bg_popup_sub_pane_cp24

0x41ec,	// (0x0004600f) fep_china_uni_candidate_pane_ParamLimits

0x41ec,	// (0x0004600f) fep_china_uni_candidate_pane

0x4200,	// (0x00046023) fep_china_uni_entry_pane

0x4210,	// (0x00046033) popup_fep_china_uni_window_g1

0x422c,	// (0x0004604f) fep_china_uni_entry_pane_g1

0x4236,	// (0x00046059) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005154a) fep_china_uni_entry_pane_g

0x4240,	// (0x00046063) fep_entry_item_pane

0x424a,	// (0x0004606d) fep_candidate_item_pane

0x4252,	// (0x00046075) fep_china_uni_candidate_pane_g1

0x425c,	// (0x0004607f) fep_china_uni_candidate_pane_g2

0x4264,	// (0x00046087) fep_china_uni_candidate_pane_g3

0x426c,	// (0x0004608f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005154f) fep_china_uni_candidate_pane_g

0xdc02,	// (0x0004fa25) fep_entry_item_pane_g1

0x4276,	// (0x00046099) fep_entry_item_pane_t1_ParamLimits

0x4276,	// (0x00046099) fep_entry_item_pane_t1

0x428c,	// (0x000460af) fep_candidate_item_pane_t1_ParamLimits

0x428c,	// (0x000460af) fep_candidate_item_pane_t1

0x42a1,	// (0x000460c4) fep_candidate_item_pane_t2_ParamLimits

0x42a1,	// (0x000460c4) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00051558) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00051558) fep_candidate_item_pane_t

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp31_ParamLimits

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp31

0x42b3,	// (0x000460d6) level_1_signal_lsc

0x42bc,	// (0x000460df) level_2_signal_lsc

0x42c5,	// (0x000460e8) level_3_signal_lsc

0x42ce,	// (0x000460f1) level_4_signal_lsc

0x42d7,	// (0x000460fa) level_5_signal_lsc

0x42e0,	// (0x00046103) level_6_signal_lsc

0x42e9,	// (0x0004610c) level_7_signal_lsc

0x42e9,	// (0x0004610c) level_1_battery_lsc

0x42f2,	// (0x00046115) level_2_battery_lsc

0x42fb,	// (0x0004611e) level_3_battery_lsc

0x4304,	// (0x00046127) level_4_battery_lsc

0x430d,	// (0x00046130) level_5_battery_lsc

0x4316,	// (0x00046139) level_6_battery_lsc

0x42b3,	// (0x000460d6) level_7_battery_lsc

0x431f,	// (0x00046142) scroll_handle_focus_pane_g1

0x4328,	// (0x0004614b) scroll_handle_focus_pane_g2

0x4331,	// (0x00046154) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005155d) scroll_handle_focus_pane_g

0x584d,	// (0x00047670) list_single_2graphic_pane_g1_ParamLimits

0x584d,	// (0x00047670) list_single_2graphic_pane_g1

0x67f1,	// (0x00048614) list_single_2graphic_pane_g2_ParamLimits

0x67f1,	// (0x00048614) list_single_2graphic_pane_g2

0x67d3,	// (0x000485f6) list_single_2graphic_pane_g3_ParamLimits

0x67d3,	// (0x000485f6) list_single_2graphic_pane_g3

0x6d17,	// (0x00048b3a) list_single_2graphic_pane_g4_ParamLimits

0x6d17,	// (0x00048b3a) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00051564) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00051564) list_single_2graphic_pane_g

0x5859,	// (0x0004767c) list_single_2graphic_pane_t1_ParamLimits

0x5859,	// (0x0004767c) list_single_2graphic_pane_t1

0x5887,	// (0x000476aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5887,	// (0x000476aa) list_double2_graphic_large_graphic_pane_g1

0x684f,	// (0x00048672) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x684f,	// (0x00048672) list_double2_graphic_large_graphic_pane_g2

0x682e,	// (0x00048651) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x682e,	// (0x00048651) list_double2_graphic_large_graphic_pane_g3

0x5899,	// (0x000476bc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5899,	// (0x000476bc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005156d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005156d) list_double2_graphic_large_graphic_pane_g

0x58a5,	// (0x000476c8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x58a5,	// (0x000476c8) list_double2_graphic_large_graphic_pane_t1

0x58bb,	// (0x000476de) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x58bb,	// (0x000476de) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00051576) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00051576) list_double2_graphic_large_graphic_pane_t

0x4566,	// (0x00046389) popup_fast_swap_window_ParamLimits

0x4566,	// (0x00046389) popup_fast_swap_window

0x4584,	// (0x000463a7) popup_side_volume_key_window

0x45a2,	// (0x000463c5) stacon_top_pane

0x45ac,	// (0x000463cf) status_pane_ParamLimits

0x45ac,	// (0x000463cf) status_pane

0x6eb5,	// (0x00048cd8) status_small_pane

0xdc0c,	// (0x0004fa2f) control_pane

0xdc0c,	// (0x0004fa2f) stacon_bottom_pane

0x0b2a,	// (0x0004294d) scroll_pane_cp121

0x0b21,	// (0x00042944) set_content_pane

0x6d28,	// (0x00048b4b) bg_active_tab_pane_g1_cp1

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp1

0x6d31,	// (0x00048b54) bg_active_tab_pane_g3_cp1

0x6d28,	// (0x00048b4b) bg_passive_tab_pane_g1_cp1

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp1

0x6d31,	// (0x00048b54) bg_passive_tab_pane_g3_cp1

0x6d3a,	// (0x00048b5d) bg_active_tab_pane_g1_cp2

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp2

0x6d43,	// (0x00048b66) bg_active_tab_pane_g3_cp2

0x6d3a,	// (0x00048b5d) bg_passive_tab_pane_g1_cp2

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp2

0x6d43,	// (0x00048b66) bg_passive_tab_pane_g3_cp2

0x6d4c,	// (0x00048b6f) bg_active_tab_pane_g1_cp3

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp3

0x6d55,	// (0x00048b78) bg_active_tab_pane_g3_cp3

0x6d4c,	// (0x00048b6f) bg_passive_tab_pane_g1_cp3

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp3

0x6d55,	// (0x00048b78) bg_passive_tab_pane_g3_cp3

0x6d5e,	// (0x00048b81) bg_active_tab_pane_g1_cp4

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp4

0x6d69,	// (0x00048b8c) bg_active_tab_pane_g3_cp4

0x6d5e,	// (0x00048b81) bg_passive_tab_pane_g1_cp4

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp4

0x6d69,	// (0x00048b8c) bg_passive_tab_pane_g3_cp4

0x44cb,	// (0x000462ee) bg_active_tab_pane_g1_cp5

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp5

0x44c2,	// (0x000462e5) bg_active_tab_pane_g3_cp5

0x44cb,	// (0x000462ee) bg_passive_tab_pane_g1_cp5

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp5

0x44c2,	// (0x000462e5) bg_passive_tab_pane_g3_cp5

0x44d4,	// (0x000462f7) list_set_graphic_pane_ParamLimits

0x44d4,	// (0x000462f7) list_set_graphic_pane

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp4

0x44e7,	// (0x0004630a) list_set_graphic_pane_g1_ParamLimits

0x44e7,	// (0x0004630a) list_set_graphic_pane_g1

0x44f3,	// (0x00046316) list_set_graphic_pane_g2_ParamLimits

0x44f3,	// (0x00046316) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005157b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005157b) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x000518fc) volume_small_pane_cp_g

0x4517,	// (0x0004633a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4517,	// (0x0004633a) list_double2_large_graphic_pane_g1_cp2

0x4525,	// (0x00046348) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4525,	// (0x00046348) list_double2_large_graphic_pane_g2_cp2

0x4536,	// (0x00046359) list_double2_large_graphic_pane_g3_cp2

0x453e,	// (0x00046361) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x453e,	// (0x00046361) list_double2_large_graphic_pane_t1_cp2

0x4554,	// (0x00046377) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4554,	// (0x00046377) list_double2_large_graphic_pane_t2_cp2

0xa713,	// (0x0004c536) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa713,	// (0x0004c536) list_double_large_graphic_pane_g1_cp2

0xa726,	// (0x0004c549) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa726,	// (0x0004c549) list_double_large_graphic_pane_g2_cp2

0x8cc5,	// (0x0004aae8) list_double_large_graphic_pane_g3_cp2

0xa737,	// (0x0004c55a) list_double_large_graphic_pane_g4_cp

0xa73f,	// (0x0004c562) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa73f,	// (0x0004c562) list_double_large_graphic_pane_t1_cp2

0xa756,	// (0x0004c579) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa756,	// (0x0004c579) list_double_large_graphic_pane_t2_cp2

0x45ba,	// (0x000463dd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x45ba,	// (0x000463dd) list_double2_graphic_pane_g1_cp2

0x45c8,	// (0x000463eb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x45c8,	// (0x000463eb) list_double2_graphic_pane_g2_cp2

0x45d9,	// (0x000463fc) list_double2_graphic_pane_g3_cp2

0x45e3,	// (0x00046406) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45e3,	// (0x00046406) list_double2_graphic_pane_t1_cp2

0x45f9,	// (0x0004641c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45f9,	// (0x0004641c) list_double2_graphic_pane_t2_cp2

0x460b,	// (0x0004642e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x460b,	// (0x0004642e) list_single_number_heading_pane_g1_cp2

0x4617,	// (0x0004643a) list_single_number_heading_pane_g2_cp2

0x461f,	// (0x00046442) list_single_number_heading_pane_t1_cp2_ParamLimits

0x461f,	// (0x00046442) list_single_number_heading_pane_t1_cp2

0x4635,	// (0x00046458) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4635,	// (0x00046458) list_single_number_heading_pane_t2_cp2

0x4649,	// (0x0004646c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4649,	// (0x0004646c) list_single_number_heading_pane_t3_cp2

0x460b,	// (0x0004642e) list_single_heading_pane_g1_cp2_ParamLimits

0x460b,	// (0x0004642e) list_single_heading_pane_g1_cp2

0x4617,	// (0x0004643a) list_single_heading_pane_g2_cp2

0x461f,	// (0x00046442) list_single_heading_pane_t1_cp2_ParamLimits

0x461f,	// (0x00046442) list_single_heading_pane_t1_cp2

0xa50d,	// (0x0004c330) list_single_heading_pane_t2_cp2_ParamLimits

0xa50d,	// (0x0004c330) list_single_heading_pane_t2_cp2

0xa455,	// (0x0004c278) list_double_graphic_pane_g1_cp2_ParamLimits

0xa455,	// (0x0004c278) list_double_graphic_pane_g1_cp2

0xa461,	// (0x0004c284) list_double_graphic_pane_g2_cp2_ParamLimits

0xa461,	// (0x0004c284) list_double_graphic_pane_g2_cp2

0xa470,	// (0x0004c293) list_double_graphic_pane_g3_cp2

0xa478,	// (0x0004c29b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa478,	// (0x0004c29b) list_double_graphic_pane_t1_cp2

0xa48e,	// (0x0004c2b1) list_double_graphic_pane_t2_cp2_ParamLimits

0xa48e,	// (0x0004c2b1) list_double_graphic_pane_t2_cp2

0x8cb9,	// (0x0004aadc) list_double_number_pane_g1_cp2_ParamLimits

0x8cb9,	// (0x0004aadc) list_double_number_pane_g1_cp2

0x8cc5,	// (0x0004aae8) list_double_number_pane_g2_cp2

0xa419,	// (0x0004c23c) list_double_number_pane_t1_cp2_ParamLimits

0xa419,	// (0x0004c23c) list_double_number_pane_t1_cp2

0xa42d,	// (0x0004c250) list_double_number_pane_t2_cp2_ParamLimits

0xa42d,	// (0x0004c250) list_double_number_pane_t2_cp2

0xa443,	// (0x0004c266) list_double_number_pane_t3_cp2_ParamLimits

0xa443,	// (0x0004c266) list_double_number_pane_t3_cp2

0xa302,	// (0x0004c125) list_single_graphic_pane_g1_cp2_ParamLimits

0xa302,	// (0x0004c125) list_single_graphic_pane_g1_cp2

0x231a,	// (0x0004413d) list_single_graphic_pane_g2_cp2_ParamLimits

0x231a,	// (0x0004413d) list_single_graphic_pane_g2_cp2

0x8d1f,	// (0x0004ab42) list_single_graphic_pane_g3_cp2

0xa2d8,	// (0x0004c0fb) list_single_graphic_pane_t1_cp2_ParamLimits

0xa2d8,	// (0x0004c0fb) list_single_graphic_pane_t1_cp2

0x231a,	// (0x0004413d) list_single_number_pane_g1_cp2_ParamLimits

0x231a,	// (0x0004413d) list_single_number_pane_g1_cp2

0x8d1f,	// (0x0004ab42) list_single_number_pane_g2_cp2

0xa2d8,	// (0x0004c0fb) list_single_number_pane_t1_cp2_ParamLimits

0xa2d8,	// (0x0004c0fb) list_single_number_pane_t1_cp2

0xa2ee,	// (0x0004c111) list_single_number_pane_t2_cp2_ParamLimits

0xa2ee,	// (0x0004c111) list_single_number_pane_t2_cp2

0x4525,	// (0x00046348) list_double2_pane_g1_cp2_ParamLimits

0x4525,	// (0x00046348) list_double2_pane_g1_cp2

0x4536,	// (0x00046359) list_double2_pane_g2_cp2

0x8c91,	// (0x0004aab4) list_double2_pane_t1_cp2_ParamLimits

0x8c91,	// (0x0004aab4) list_double2_pane_t1_cp2

0x8ca7,	// (0x0004aaca) list_double2_pane_t2_cp2_ParamLimits

0x8ca7,	// (0x0004aaca) list_double2_pane_t2_cp2

0x8cb9,	// (0x0004aadc) list_double_pane_g1_cp2_ParamLimits

0x8cb9,	// (0x0004aadc) list_double_pane_g1_cp2

0x8cc5,	// (0x0004aae8) list_double_pane_g2_cp2

0x8ccd,	// (0x0004aaf0) list_double_pane_t1_cp2_ParamLimits

0x8ccd,	// (0x0004aaf0) list_double_pane_t1_cp2

0x8ce3,	// (0x0004ab06) list_double_pane_t2_cp2_ParamLimits

0x8ce3,	// (0x0004ab06) list_double_pane_t2_cp2

0x8d0f,	// (0x0004ab32) list_single_pane_cp2_g3

0x231a,	// (0x0004413d) list_single_pane_g1_cp2_ParamLimits

0x231a,	// (0x0004413d) list_single_pane_g1_cp2

0x8d1f,	// (0x0004ab42) list_single_pane_g2_cp2

0x8d27,	// (0x0004ab4a) list_single_pane_t1_cp2_ParamLimits

0x8d27,	// (0x0004ab4a) list_single_pane_t1_cp2

0x8d3f,	// (0x0004ab62) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8d3f,	// (0x0004ab62) list_single_large_graphic_pane_g1_cp2

0x8d4d,	// (0x0004ab70) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8d4d,	// (0x0004ab70) list_single_large_graphic_pane_g2_cp2

0x8d59,	// (0x0004ab7c) list_single_large_graphic_pane_g3_cp2

0x8d61,	// (0x0004ab84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8d61,	// (0x0004ab84) list_single_large_graphic_pane_g4_cp1

0x8d7b,	// (0x0004ab9e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8d7b,	// (0x0004ab9e) list_single_large_graphic_pane_t1_cp2

0xa2a2,	// (0x0004c0c5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa2a2,	// (0x0004c0c5) list_single_graphic_heading_pane_g1_cp2

0xa26f,	// (0x0004c092) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa26f,	// (0x0004c092) list_single_graphic_heading_pane_g4_cp2

0x8d1f,	// (0x0004ab42) list_single_graphic_heading_pane_g5_cp2

0xa2ae,	// (0x0004c0d1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa2ae,	// (0x0004c0d1) list_single_graphic_heading_pane_t1_cp2

0xa2c4,	// (0x0004c0e7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa2c4,	// (0x0004c0e7) list_single_graphic_heading_pane_t2_cp2

0xa263,	// (0x0004c086) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa263,	// (0x0004c086) list_single_2graphic_pane_g1_cp2

0xa26f,	// (0x0004c092) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa26f,	// (0x0004c092) list_single_2graphic_pane_g2_cp2

0x8d1f,	// (0x0004ab42) list_single_2graphic_pane_g3_cp2

0xa280,	// (0x0004c0a3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa280,	// (0x0004c0a3) list_single_2graphic_pane_g4_cp2

0xa28c,	// (0x0004c0af) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa28c,	// (0x0004c0af) list_single_2graphic_pane_t1_cp2

0xdc02,	// (0x0004fa25) list_highlight_pane_g10_cp1

0x9e3b,	// (0x0004bc5e) list_highlight_pane_g1_cp1

0x9e43,	// (0x0004bc66) list_highlight_pane_g2_cp1

0x9e4b,	// (0x0004bc6e) list_highlight_pane_g3_cp1

0x9e53,	// (0x0004bc76) list_highlight_pane_g4_cp1

0x9e5b,	// (0x0004bc7e) list_highlight_pane_g5_cp1

0x9e63,	// (0x0004bc86) list_highlight_pane_g6_cp1

0x9e6b,	// (0x0004bc8e) list_highlight_pane_g7_cp1

0x9e73,	// (0x0004bc96) list_highlight_pane_g8_cp1

0x9e7b,	// (0x0004bc9e) list_highlight_pane_g9_cp1

0x9d5b,	// (0x0004bb7e) form_field_slider_pane_t3

0x9d69,	// (0x0004bb8c) form_field_slider_pane_t4

0x9d77,	// (0x0004bb9a) slider_form_pane_ParamLimits

0x9d77,	// (0x0004bb9a) slider_form_pane

0xdc0c,	// (0x0004fa2f) control_abbreviations

0xdc0c,	// (0x0004fa2f) control_conventions

0xdc0c,	// (0x0004fa2f) control_definitions

0xdc0c,	// (0x0004fa2f) format_table_attribute

0xa563,	// (0x0004c386) bg_popup_preview_window_pane_g9

0xdc0c,	// (0x0004fa2f) format_table_data2

0xdc0c,	// (0x0004fa2f) format_table_data3

0xdc0c,	// (0x0004fa2f) format_table_data_example

0x0008,

0xdc0c,	// (0x0004fa2f) intro_purpose

0xf8f4,	// (0x00051717) bg_popup_preview_window_pane_g

0xdc0c,	// (0x0004fa2f) texts_category

0xdc0c,	// (0x0004fa2f) texts_graphics

0x8d91,	// (0x0004abb4) text_digital

0x8da0,	// (0x0004abc3) text_primary

0x8daf,	// (0x0004abd2) text_primary_small

0x8dbe,	// (0x0004abe1) text_secondary

0x8dcd,	// (0x0004abf0) text_title

0xacd0,	// (0x0004caf3) bg_passive_tab_pane_g1_cp3_srt

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp3_srt

0xacd9,	// (0x0004cafc) bg_passive_tab_pane_g3_cp3_srt

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp3_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp3_srt

0xace2,	// (0x0004cb05) tabs_4_active_pane_srt_g1

0xacea,	// (0x0004cb0d) tabs_4_active_pane_srt_t1_ParamLimits

0xacea,	// (0x0004cb0d) tabs_4_active_pane_srt_t1

0xacd0,	// (0x0004caf3) bg_active_tab_pane_g1_cp3_copy1

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp3_copy1

0xacd9,	// (0x0004cafc) bg_active_tab_pane_g3_cp3_copy1

0xdc5a,	// (0x0004fa7d) tabs_2_long_active_pane_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) tabs_2_long_active_pane_srt

0xdc5a,	// (0x0004fa7d) tabs_2_long_passive_pane_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) tabs_2_long_passive_pane_srt

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp4_srt

0xa992,	// (0x0004c7b5) bg_passive_tab_pane_g1_cp4_srt

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp4_srt

0xa99b,	// (0x0004c7be) bg_passive_tab_pane_g3_cp4_srt

0x270d,	// (0x00044530) bg_active_tab_pane_cp4_srt_ParamLimits

0x270d,	// (0x00044530) bg_active_tab_pane_cp4_srt

0xa9a4,	// (0x0004c7c7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa9a4,	// (0x0004c7c7) tabs_2_long_active_pane_srt_t1

0xa992,	// (0x0004c7b5) bg_active_tab_pane_g1_cp4_srt

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp4_srt

0xa99b,	// (0x0004c7be) bg_active_tab_pane_g3_cp4_srt

0xdc96,	// (0x0004fab9) tabs_3_long_active_pane_srt_ParamLimits

0xdc96,	// (0x0004fab9) tabs_3_long_active_pane_srt

0xdc96,	// (0x0004fab9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdc96,	// (0x0004fab9) tabs_3_long_passive_pane_cp_srt

0xdc96,	// (0x0004fab9) tabs_3_long_passive_pane_srt_ParamLimits

0xdc96,	// (0x0004fab9) tabs_3_long_passive_pane_srt

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp5_srt

0x44cb,	// (0x000462ee) bg_passive_tab_pane_g1_cp5_srt

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp5_srt

0x44c2,	// (0x000462e5) bg_passive_tab_pane_g3_cp5_srt

0x270d,	// (0x00044530) bg_active_tab_pane_cp5_srt_ParamLimits

0x270d,	// (0x00044530) bg_active_tab_pane_cp5_srt

0xa980,	// (0x0004c7a3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa980,	// (0x0004c7a3) tabs_3_long_active_pane_srt_t1

0x44cb,	// (0x000462ee) bg_active_tab_pane_g1_cp5_srt

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp5_srt

0x44c2,	// (0x000462e5) bg_active_tab_pane_g3_cp5_srt

0xa972,	// (0x0004c795) navi_text_pane_srt_t1

0xa96a,	// (0x0004c78d) navi_icon_pane_srt_g1

0x8fa5,	// (0x0004adc8) midp_editing_number_pane_srt

0x8ddc,	// (0x0004abff) midp_ticker_pane_srt

0x8fad,	// (0x0004add0) midp_ticker_pane_srt_g1

0x8fb5,	// (0x0004add8) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005159a) midp_ticker_pane_srt_g

0x8fbd,	// (0x0004ade0) midp_ticker_pane_srt_t1

0xa95b,	// (0x0004c77e) midp_editing_number_pane_t1_copy1

0x8de4,	// (0x0004ac07) listscroll_midp_pane

0x8de4,	// (0x0004ac07) midp_form_pane

0x8e53,	// (0x0004ac76) midp_info_popup_window_ParamLimits

0x8e53,	// (0x0004ac76) midp_info_popup_window

0x0bf0,	// (0x00042a13) bg_popup_sub_pane_cp50_ParamLimits

0x0bf0,	// (0x00042a13) bg_popup_sub_pane_cp50

0x9a65,	// (0x0004b888) listscroll_midp_info_pane_ParamLimits

0x9a65,	// (0x0004b888) listscroll_midp_info_pane

0x9a45,	// (0x0004b868) listscroll_form_midp_pane_ParamLimits

0x9a45,	// (0x0004b868) listscroll_form_midp_pane

0x9a51,	// (0x0004b874) scroll_bar_cp050

0x9a25,	// (0x0004b848) list_midp_pane

0xb748,	// (0x0004d56b) signal_pane_g2_cp

0x995f,	// (0x0004b782) listscroll_midp_info_pane_t1_ParamLimits

0x995f,	// (0x0004b782) listscroll_midp_info_pane_t1

0x9977,	// (0x0004b79a) listscroll_midp_info_pane_t2_ParamLimits

0x9977,	// (0x0004b79a) listscroll_midp_info_pane_t2

0x99b5,	// (0x0004b7d8) listscroll_midp_info_pane_t3_ParamLimits

0x99b5,	// (0x0004b7d8) listscroll_midp_info_pane_t3

0x99ef,	// (0x0004b812) listscroll_midp_info_pane_t4_ParamLimits

0x99ef,	// (0x0004b812) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00051652) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00051652) listscroll_midp_info_pane_t

0x0c70,	// (0x00042a93) scroll_pane_cp21

0x98f9,	// (0x0004b71c) form_midp_field_choice_group_pane

0x9902,	// (0x0004b725) form_midp_field_text_pane

0x9945,	// (0x0004b768) form_midp_field_time_pane

0x994d,	// (0x0004b770) form_midp_gauge_slider_pane

0x9956,	// (0x0004b779) form_midp_gauge_wait_pane

0xdc0c,	// (0x0004fa2f) form_midp_image_pane

0x5a1a,	// (0x0004783d) list_single_midp_pane_ParamLimits

0x5a1a,	// (0x0004783d) list_single_midp_pane

0x98bd,	// (0x0004b6e0) form_midp_field_text_pane_t1

0x96af,	// (0x0004b4d2) input_focus_pane_cp050

0x98e8,	// (0x0004b70b) list_midp_form_text_pane

0x988c,	// (0x0004b6af) form_midp_field_choice_group_pane_t1

0x989a,	// (0x0004b6bd) input_focus_pane_cp051

0x98ae,	// (0x0004b6d1) list_midp_choice_pane

0xdc0c,	// (0x0004fa2f) status_idle_pane

0x9870,	// (0x0004b693) form_midp_field_time_pane_t1

0xdc02,	// (0x0004fa25) wait_anim_pane_g2_copy1

0x987e,	// (0x0004b6a1) form_midp_field_time_pane_t2

0x0001,

0x8f03,	// (0x0004ad26) aid_navinavi_width_2_pane

0xf82a,	// (0x0005164d) form_midp_field_time_pane_t

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp052

0xdc0c,	// (0x0004fa2f) bg_input_focus_pane_cp040

0x9830,	// (0x0004b653) form_midp_gauge_slider_pane_t1

0x983e,	// (0x0004b661) form_midp_gauge_slider_pane_t2

0x984c,	// (0x0004b66f) form_midp_gauge_slider_pane_t3

0x985a,	// (0x0004b67d) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00051644) form_midp_gauge_slider_pane_t

0x9868,	// (0x0004b68b) form_midp_slider_pane

0xdc5a,	// (0x0004fa7d) bg_input_focus_pane_cp041_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_input_focus_pane_cp041

0x97fd,	// (0x0004b620) form_midp_gauge_wait_pane_t1_ParamLimits

0x97fd,	// (0x0004b620) form_midp_gauge_wait_pane_t1

0x980f,	// (0x0004b632) form_midp_gauge_wait_pane_t2_ParamLimits

0x980f,	// (0x0004b632) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0005163f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0005163f) form_midp_gauge_wait_pane_t

0x9821,	// (0x0004b644) form_midp_wait_pane_ParamLimits

0x9821,	// (0x0004b644) form_midp_wait_pane

0x97c5,	// (0x0004b5e8) form_midp_image_pane_g1

0x97ce,	// (0x0004b5f1) form_midp_image_pane_t1

0x97dd,	// (0x0004b600) form_midp_image_pane_t2

0x97ec,	// (0x0004b60f) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00051638) form_midp_image_pane_t

0x97bc,	// (0x0004b5df) list_single_midp_pane_g1

0x5a0b,	// (0x0004782e) list_single_midp_pane_t1

0x97a2,	// (0x0004b5c5) list_midp_form_item_pane_ParamLimits

0x97a2,	// (0x0004b5c5) list_midp_form_item_pane

0x8eab,	// (0x0004acce) list_midp_form_item_pane_t1

0x8eba,	// (0x0004acdd) midp_ticker_pane_g1

0x8ec6,	// (0x0004ace9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00051580) midp_ticker_pane_g

0x8ed2,	// (0x0004acf5) midp_ticker_pane_t1

0xabc8,	// (0x0004c9eb) midp_editing_number_pane_t1

0xaba6,	// (0x0004c9c9) midp_editing_number_pane

0xabb5,	// (0x0004c9d8) midp_ticker_pane

0xa94b,	// (0x0004c76e) ai_message_heading_pane

0xdc0c,	// (0x0004fa2f) bg_popup_window_pane_cp14

0xa953,	// (0x0004c776) listscroll_ai_message_pane

0xa8d1,	// (0x0004c6f4) ai_message_heading_pane_g1_ParamLimits

0xa8d1,	// (0x0004c6f4) ai_message_heading_pane_g1

0xa8dd,	// (0x0004c700) ai_message_heading_pane_g2_ParamLimits

0xa8dd,	// (0x0004c700) ai_message_heading_pane_g2

0xa8eb,	// (0x0004c70e) ai_message_heading_pane_g3_ParamLimits

0xa8eb,	// (0x0004c70e) ai_message_heading_pane_g3

0xa8f7,	// (0x0004c71a) ai_message_heading_pane_g4_ParamLimits

0xa8f7,	// (0x0004c71a) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00051779) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00051779) ai_message_heading_pane_g

0xa903,	// (0x0004c726) ai_message_heading_pane_t1_ParamLimits

0xa903,	// (0x0004c726) ai_message_heading_pane_t1

0xa91d,	// (0x0004c740) ai_message_heading_pane_t2_ParamLimits

0xa91d,	// (0x0004c740) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00051782) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00051782) ai_message_heading_pane_t

0xa931,	// (0x0004c754) bg_popup_heading_pane_cp1_ParamLimits

0xa931,	// (0x0004c754) bg_popup_heading_pane_cp1

0xa8bf,	// (0x0004c6e2) list_ai_message_pane_ParamLimits

0xa8bf,	// (0x0004c6e2) list_ai_message_pane

0x0c70,	// (0x00042a93) scroll_pane_cp10

0xa85b,	// (0x0004c67e) list_ai_message_pane_g1

0xa863,	// (0x0004c686) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00051756) list_ai_message_pane_g

0xa86b,	// (0x0004c68e) list_ai_message_pane_t1_ParamLimits

0xa86b,	// (0x0004c68e) list_ai_message_pane_t1

0xa880,	// (0x0004c6a3) list_ai_message_pane_t2_ParamLimits

0xa880,	// (0x0004c6a3) list_ai_message_pane_t2

0xa895,	// (0x0004c6b8) list_ai_message_pane_t3_ParamLimits

0xa895,	// (0x0004c6b8) list_ai_message_pane_t3

0xa8aa,	// (0x0004c6cd) list_ai_message_pane_t4_ParamLimits

0xa8aa,	// (0x0004c6cd) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005175b) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005175b) list_ai_message_pane_t

0xa844,	// (0x0004c667) cell_ai_soft_ind_pane_ParamLimits

0xa844,	// (0x0004c667) cell_ai_soft_ind_pane

0x8ee4,	// (0x0004ad07) cell_ai_soft_ind_pane_g1_ParamLimits

0x8ee4,	// (0x0004ad07) cell_ai_soft_ind_pane_g1

0xdc0c,	// (0x0004fa2f) grid_highlight_cp1

0x8ef1,	// (0x0004ad14) text_secondary_cp56_ParamLimits

0x8ef1,	// (0x0004ad14) text_secondary_cp56

0xa819,	// (0x0004c63c) example_general_pane_ParamLimits

0xa819,	// (0x0004c63c) example_general_pane

0xa825,	// (0x0004c648) example_parent_pane_g1_ParamLimits

0xa825,	// (0x0004c648) example_parent_pane_g1

0xa831,	// (0x0004c654) example_parent_pane_t1_ParamLimits

0xa831,	// (0x0004c654) example_parent_pane_t1

0x74a8,	// (0x000492cb) popup_preview_text_window_ParamLimits

0x74a8,	// (0x000492cb) popup_preview_text_window

0x8d17,	// (0x0004ab3a) list_single_pane_cp2_g4

0x070a,	// (0x0004252d) bg_popup_preview_window_pane_ParamLimits

0x070a,	// (0x0004252d) bg_popup_preview_window_pane

0xa56d,	// (0x0004c390) popup_preview_text_window_t1_ParamLimits

0xa56d,	// (0x0004c390) popup_preview_text_window_t1

0xa58b,	// (0x0004c3ae) popup_preview_text_window_t2_ParamLimits

0xa58b,	// (0x0004c3ae) popup_preview_text_window_t2

0xa5d4,	// (0x0004c3f7) popup_preview_text_window_t3_ParamLimits

0xa5d4,	// (0x0004c3f7) popup_preview_text_window_t3

0xa619,	// (0x0004c43c) popup_preview_text_window_t4_ParamLimits

0xa619,	// (0x0004c43c) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005172a) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005172a) popup_preview_text_window_t

0xa697,	// (0x0004c4ba) scroll_pane_cp11

0x963b,	// (0x0004b45e) bg_popup_preview_window_pane_g1

0xa521,	// (0x0004c344) bg_popup_preview_window_pane_g2

0xa52b,	// (0x0004c34e) bg_popup_preview_window_pane_g3

0xa535,	// (0x0004c358) bg_popup_preview_window_pane_g4

0xa53f,	// (0x0004c362) bg_popup_preview_window_pane_g5

0xa549,	// (0x0004c36c) bg_popup_preview_window_pane_g6

0xa551,	// (0x0004c374) bg_popup_preview_window_pane_g7

0xa559,	// (0x0004c37c) bg_popup_preview_window_pane_g8

0x604f,	// (0x00047e72) aid_popup_width_pane

0x7484,	// (0x000492a7) popup_midp_note_alarm_window_ParamLimits

0x7484,	// (0x000492a7) popup_midp_note_alarm_window

0x0b3b,	// (0x0004295e) data_form_pane_ParamLimits

0x56af,	// (0x000474d2) form_field_data_pane_g1

0x56b9,	// (0x000474dc) form_field_data_pane_t1_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_ParamLimits

0x56d3,	// (0x000474f6) data_form_wide_pane_ParamLimits

0x56e4,	// (0x00047507) form_field_data_wide_pane_g1

0x56f0,	// (0x00047513) form_field_data_wide_pane_t1_ParamLimits

0x08c2,	// (0x000426e5) input_focus_pane_cp6_ParamLimits

0x689c,	// (0x000486bf) input_popup_find_pane_g1_ParamLimits

0x689c,	// (0x000486bf) input_popup_find_pane_g1

0x69f5,	// (0x00048818) aid_navi_side_left_pane

0x6a0a,	// (0x0004882d) aid_navi_side_right_pane

0x9f36,	// (0x0004bd59) bg_popup_window_pane_cp30_ParamLimits

0x9f36,	// (0x0004bd59) bg_popup_window_pane_cp30

0x9fb0,	// (0x0004bdd3) popup_midp_note_alarm_window_g1_ParamLimits

0x9fb0,	// (0x0004bdd3) popup_midp_note_alarm_window_g1

0x9fe0,	// (0x0004be03) popup_midp_note_alarm_window_t1_ParamLimits

0x9fe0,	// (0x0004be03) popup_midp_note_alarm_window_t1

0xa081,	// (0x0004bea4) popup_midp_note_alarm_window_t2_ParamLimits

0xa081,	// (0x0004bea4) popup_midp_note_alarm_window_t2

0xa12f,	// (0x0004bf52) popup_midp_note_alarm_window_t3_ParamLimits

0xa12f,	// (0x0004bf52) popup_midp_note_alarm_window_t3

0xa161,	// (0x0004bf84) popup_midp_note_alarm_window_t4_ParamLimits

0xa161,	// (0x0004bf84) popup_midp_note_alarm_window_t4

0xa187,	// (0x0004bfaa) popup_midp_note_alarm_window_t5_ParamLimits

0xa187,	// (0x0004bfaa) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x000516c7) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x000516c7) popup_midp_note_alarm_window_t

0xa233,	// (0x0004c056) wait_bar_pane_cp1_ParamLimits

0xa233,	// (0x0004c056) wait_bar_pane_cp1

0xdc0c,	// (0x0004fa2f) wait_anim_pane_copy1

0xdc0c,	// (0x0004fa2f) wait_border_pane_copy1

0x9c1b,	// (0x0004ba3e) wait_border_pane_g1_copy1

0x570a,	// (0x0004752d) form_field_popup_pane_g1

0x5712,	// (0x00047535) form_field_popup_pane_t1_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_cp7_ParamLimits

0x0b75,	// (0x00042998) list_form_pane_ParamLimits

0x572c,	// (0x0004754f) form_field_popup_wide_pane_g1

0x5734,	// (0x00047557) form_field_popup_wide_pane_t1_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_cp8_ParamLimits

0x0b81,	// (0x000429a4) list_form_wide_pane_ParamLimits

0xad6e,	// (0x0004cb91) aid_size_cell_graphic_pane

0x57c0,	// (0x000475e3) data_form_pane_t1_ParamLimits

0x5a61,	// (0x00047884) data_form_wide_pane_t1_ParamLimits

0x91fa,	// (0x0004b01d) bg_status_flat_pane

0x6474,	// (0x00048297) title_pane_t1_ParamLimits

0xdc22,	// (0x0004fa45) title_pane_t2_ParamLimits

0xdc48,	// (0x0004fa6b) title_pane_t3_ParamLimits

0xf557,	// (0x0005137a) title_pane_t_ParamLimits

0x6b5b,	// (0x0004897e) level_1_signal_ParamLimits

0x6b68,	// (0x0004898b) level_2_signal_ParamLimits

0x6b75,	// (0x00048998) level_3_signal_ParamLimits

0x6b82,	// (0x000489a5) level_4_signal_ParamLimits

0x6b8f,	// (0x000489b2) level_5_signal_ParamLimits

0x6b9c,	// (0x000489bf) level_6_signal_ParamLimits

0x6ba9,	// (0x000489cc) level_7_signal_ParamLimits

0x6b5b,	// (0x0004897e) level_1_battery_ParamLimits

0x6b68,	// (0x0004898b) level_2_battery_ParamLimits

0x6b75,	// (0x00048998) level_3_battery_ParamLimits

0x6b82,	// (0x000489a5) level_4_battery_ParamLimits

0x6b8f,	// (0x000489b2) level_5_battery_ParamLimits

0x6b9c,	// (0x000489bf) level_6_battery_ParamLimits

0x6ba9,	// (0x000489cc) level_7_battery_ParamLimits

0x9e3b,	// (0x0004bc5e) bg_status_flat_pane_g1

0x9e43,	// (0x0004bc66) bg_status_flat_pane_g2

0x9e4b,	// (0x0004bc6e) bg_status_flat_pane_g3

0x9e53,	// (0x0004bc76) bg_status_flat_pane_g4

0x9e5b,	// (0x0004bc7e) bg_status_flat_pane_g5

0x9e63,	// (0x0004bc86) bg_status_flat_pane_g6

0x9e6b,	// (0x0004bc8e) bg_status_flat_pane_g7

0x64e4,	// (0x00048307) tabs_3_active_pane_t1_ParamLimits

0x64e4,	// (0x00048307) tabs_3_passive_pane_t1_ParamLimits

0x64fe,	// (0x00048321) tabs_4_active_pane_t1_ParamLimits

0x64fe,	// (0x00048321) tabs_4_1_passive_pane_t1_ParamLimits

0x68b2,	// (0x000486d5) tabs_2_active_pane_t1_ParamLimits

0x68b2,	// (0x000486d5) tabs_2_passive_pane_t1_ParamLimits

0x270d,	// (0x00044530) bg_active_tab_pane_cp4_ParamLimits

0x68c4,	// (0x000486e7) tabs_2_long_active_pane_t1_ParamLimits

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp4_ParamLimits

0x7798,	// (0x000495bb) list_single_midp_graphic_pane_t1_ParamLimits

0x270d,	// (0x00044530) bg_active_tab_pane_cp5_ParamLimits

0x68e3,	// (0x00048706) tabs_3_long_active_pane_t1_ParamLimits

0x68d7,	// (0x000486fa) bg_passive_tab_pane_cp5_ParamLimits

0x7798,	// (0x000495bb) list_single_midp_graphic_pane_t1

0x91fa,	// (0x0004b01d) bg_status_flat_pane_ParamLimits

0x92bf,	// (0x0004b0e2) indicator_pane_cp2_ParamLimits

0x92bf,	// (0x0004b0e2) indicator_pane_cp2

0x9402,	// (0x0004b225) navi_pane_srt_ParamLimits

0x9402,	// (0x0004b225) navi_pane_srt

0x9426,	// (0x0004b249) popup_clock_digital_analogue_window_cp1

0x054d,	// (0x00042370) indicator_pane_t1

0x8ddc,	// (0x0004abff) copy_highlight_pane

0x8ddc,	// (0x0004abff) cursor_graphics_pane

0x8ddc,	// (0x0004abff) graphic_within_text_pane

0x8ddc,	// (0x0004abff) link_highlight_pane

0xa65a,	// (0x0004c47d) popup_preview_text_window_t5_ParamLimits

0xa65a,	// (0x0004c47d) popup_preview_text_window_t5

0x8f0d,	// (0x0004ad30) cursor_digital_pane

0x8f0d,	// (0x0004ad30) cursor_primary_pane

0x8f1e,	// (0x0004ad41) cursor_primary_small_pane

0x8f26,	// (0x0004ad49) cursor_secondary_pane

0x8f2e,	// (0x0004ad51) cursor_title_pane

0x8f0d,	// (0x0004ad30) link_highlight_digital_pane

0x8f15,	// (0x0004ad38) link_highlight_primary_pane

0x8f1e,	// (0x0004ad41) link_highlight_primary_small_pane

0x8f26,	// (0x0004ad49) link_highlight_secondary_pane

0x8f2e,	// (0x0004ad51) link_highlight_title_pane

0x8f0d,	// (0x0004ad30) copy_highlight_digital_pane

0x8f0d,	// (0x0004ad30) copy_highlight_primary_pane

0x8f1e,	// (0x0004ad41) copy_highlight_primary_small_pane

0x8f26,	// (0x0004ad49) copy_highlight_secondary_pane

0x8f2e,	// (0x0004ad51) copy_highlight_title_pane

0x8f26,	// (0x0004ad49) graphic_text_digital_pane

0x9ed9,	// (0x0004bcfc) graphic_text_primary_pane

0x9ee2,	// (0x0004bd05) graphic_text_primary_small_pane

0x8f1e,	// (0x0004ad41) graphic_text_secondary_pane

0x8f0d,	// (0x0004ad30) graphic_text_title_pane

0x8f36,	// (0x0004ad59) cursor_primary_pane_g1

0x9ecb,	// (0x0004bcee) cursor_text_primary_t1

0x9eb3,	// (0x0004bcd6) cursor_primary_small_pane_g1

0x9ebd,	// (0x0004bce0) cursor_text_primary_small_t1

0x9e9b,	// (0x0004bcbe) cursor_primary_small_pane_g1_copy1

0x9ea5,	// (0x0004bcc8) cursor_text_primary_small_t1_copy1

0x9e83,	// (0x0004bca6) cursor_text_title_t1

0x9e91,	// (0x0004bcb4) cursor_title_pane_g1

0x8f36,	// (0x0004ad59) cursor_digital_pane_g1

0x8f40,	// (0x0004ad63) cursor_text_digital_t1

0x8f4e,	// (0x0004ad71) link_highlight_primary_pane_g1

0x9e2c,	// (0x0004bc4f) link_highlight_primary_pane_t1

0x8f4e,	// (0x0004ad71) link_highlight_primary_small_pane_g1

0x8f56,	// (0x0004ad79) link_highlight_primary_small_pane_t1

0x8f65,	// (0x0004ad88) link_highlight_secondary_pane_g1

0x8f6d,	// (0x0004ad90) link_highlight_secondary_pane_t1

0x9da0,	// (0x0004bbc3) link_highlight_title_pane_g1

0x9da8,	// (0x0004bbcb) link_highlight_title_pane_t1

0x9d89,	// (0x0004bbac) link_highlight_digital_pane_g1

0x9d91,	// (0x0004bbb4) link_highlight_digital_pane_t1

0x9c51,	// (0x0004ba74) copy_highlight_primary_pane_g1

0x9c68,	// (0x0004ba8b) copy_highlight_primary_pane_t1

0x9c51,	// (0x0004ba74) copy_highlight_primary_small_pane_g1

0x9c59,	// (0x0004ba7c) copy_highlight_primary_small_pane_t1

0x8f7c,	// (0x0004ad9f) copy_highlight_secondary_pane_g1

0x8f84,	// (0x0004ada7) copy_highlight_secondary_pane_t1

0x9c3a,	// (0x0004ba5d) copy_highlight_title_pane_g1

0x9c42,	// (0x0004ba65) copy_highlight_title_pane_t1

0x9c51,	// (0x0004ba74) copy_highlight_digital_pane_g1

0xaf40,	// (0x0004cd63) copy_highlight_digital_pane_t1

0xae94,	// (0x0004ccb7) graphic_text_primary_pane_g1

0xaf24,	// (0x0004cd47) graphic_text_primary_pane_t1

0xaf32,	// (0x0004cd55) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000517f6) graphic_text_primary_pane_t

0xaf00,	// (0x0004cd23) graphic_text_primary_small_pane_g1

0xaf08,	// (0x0004cd2b) graphic_text_primary_small_pane_t1

0xaf16,	// (0x0004cd39) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000517f1) graphic_text_primary_small_pane_t

0xaedc,	// (0x0004ccff) graphic_text_secondary_pane_g1

0xaee4,	// (0x0004cd07) graphic_text_secondary_pane_t1

0xaef2,	// (0x0004cd15) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000517ec) graphic_text_secondary_pane_t

0xaeb8,	// (0x0004ccdb) graphic_text_title_pane_g1

0xaec0,	// (0x0004cce3) graphic_text_title_pane_t1

0xaece,	// (0x0004ccf1) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000517e7) graphic_text_title_pane_t

0xae94,	// (0x0004ccb7) graphic_text_digital_pane_g1

0xae9c,	// (0x0004ccbf) graphic_text_digital_pane_t1

0xaeaa,	// (0x0004cccd) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000517e2) graphic_text_digital_pane_t

0xdc5a,	// (0x0004fa7d) navi_icon_pane_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) navi_icon_pane_srt

0xdc0c,	// (0x0004fa2f) navi_midp_pane_srt

0xdc0c,	// (0x0004fa2f) navi_navi_pane_srt

0xdc5a,	// (0x0004fa7d) navi_text_pane_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) navi_text_pane_srt

0xae5f,	// (0x0004cc82) navi_navi_icon_text_pane_srt

0xae67,	// (0x0004cc8a) navi_navi_pane_srt_g1_ParamLimits

0xae67,	// (0x0004cc8a) navi_navi_pane_srt_g1

0xae79,	// (0x0004cc9c) navi_navi_pane_srt_g2_ParamLimits

0xae79,	// (0x0004cc9c) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x000517dd) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x000517dd) navi_navi_pane_srt_g

0xae8b,	// (0x0004ccae) navi_navi_tabs_pane_srt

0xae5f,	// (0x0004cc82) navi_navi_text_pane_srt

0xae5f,	// (0x0004cc82) navi_navi_volume_pane_srt

0xae50,	// (0x0004cc73) navi_navi_text_pane_srt_t1

0x7b8c,	// (0x000499af) navi_navi_volume_pane_srt_g1

0x7b94,	// (0x000499b7) volume_small_pane_srt_ParamLimits

0x7b94,	// (0x000499b7) volume_small_pane_srt

0x6ec0,	// (0x00048ce3) volume_small_pane_srt_g1_ParamLimits

0x6ec0,	// (0x00048ce3) volume_small_pane_srt_g1

0x6ed0,	// (0x00048cf3) volume_small_pane_srt_g2_ParamLimits

0x6ed0,	// (0x00048cf3) volume_small_pane_srt_g2

0x6ee1,	// (0x00048d04) volume_small_pane_srt_g3_ParamLimits

0x6ee1,	// (0x00048d04) volume_small_pane_srt_g3

0x6ef2,	// (0x00048d15) volume_small_pane_srt_g4_ParamLimits

0x6ef2,	// (0x00048d15) volume_small_pane_srt_g4

0x6f03,	// (0x00048d26) volume_small_pane_srt_g5_ParamLimits

0x6f03,	// (0x00048d26) volume_small_pane_srt_g5

0x6f14,	// (0x00048d37) volume_small_pane_srt_g6_ParamLimits

0x6f14,	// (0x00048d37) volume_small_pane_srt_g6

0x6f25,	// (0x00048d48) volume_small_pane_srt_g7_ParamLimits

0x6f25,	// (0x00048d48) volume_small_pane_srt_g7

0x6f36,	// (0x00048d59) volume_small_pane_srt_g8_ParamLimits

0x6f36,	// (0x00048d59) volume_small_pane_srt_g8

0x6f47,	// (0x00048d6a) volume_small_pane_srt_g9_ParamLimits

0x6f47,	// (0x00048d6a) volume_small_pane_srt_g9

0x6f58,	// (0x00048d7b) volume_small_pane_srt_g10_ParamLimits

0x6f58,	// (0x00048d7b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00051585) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00051585) volume_small_pane_srt_g

0x07bf,	// (0x000425e2) query_popup_data_pane_cp2

0xae36,	// (0x0004cc59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae36,	// (0x0004cc59) navi_navi_icon_text_pane_srt_t1

0x9ed9,	// (0x0004bcfc) navi_tabs_2_long_pane_srt

0x9ed9,	// (0x0004bcfc) navi_tabs_2_pane_srt

0x9ed9,	// (0x0004bcfc) navi_tabs_3_long_pane_srt

0x9ed9,	// (0x0004bcfc) navi_tabs_3_pane_srt

0x9ed9,	// (0x0004bcfc) navi_tabs_4_pane_srt

0x7b6c,	// (0x0004998f) tabs_2_active_pane_srt_ParamLimits

0x7b6c,	// (0x0004998f) tabs_2_active_pane_srt

0x7b7c,	// (0x0004999f) tabs_2_passive_pane_srt_ParamLimits

0x7b7c,	// (0x0004999f) tabs_2_passive_pane_srt

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp1_srt

0xae02,	// (0x0004cc25) bg_passive_tab_pane_g1_cp1_srt

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp1_srt

0xae0b,	// (0x0004cc2e) bg_passive_tab_pane_g3_cp1_srt

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp1_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp1_srt

0xae14,	// (0x0004cc37) tabs_2_active_pane_srt_g1

0xae1c,	// (0x0004cc3f) tabs_2_active_pane_srt_t1_ParamLimits

0xae1c,	// (0x0004cc3f) tabs_2_active_pane_srt_t1

0xae02,	// (0x0004cc25) bg_active_tab_pane_g1_cp1_srt

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp1_srt

0xae0b,	// (0x0004cc2e) bg_active_tab_pane_g3_cp1_srt

0x7b39,	// (0x0004995c) tabs_3_active_pane_srt_ParamLimits

0x7b39,	// (0x0004995c) tabs_3_active_pane_srt

0x7b4a,	// (0x0004996d) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b4a,	// (0x0004996d) tabs_3_passive_pane_cp_srt

0x7b5b,	// (0x0004997e) tabs_3_passive_pane_srt_ParamLimits

0x7b5b,	// (0x0004997e) tabs_3_passive_pane_srt

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x910b,	// (0x0004af2e) bg_passive_tab_pane_cp2_srt

0x8f93,	// (0x0004adb6) bg_passive_tab_pane_g1_cp2_srt

0x433a,	// (0x0004615d) bg_passive_tab_pane_g2_cp2_srt

0x8f9c,	// (0x0004adbf) bg_passive_tab_pane_g3_cp2_srt

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp2_srt_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_active_tab_pane_cp2_srt

0xade8,	// (0x0004cc0b) tabs_3_active_pane_srt_g1

0xadf0,	// (0x0004cc13) tabs_3_active_pane_srt_t1_ParamLimits

0xadf0,	// (0x0004cc13) tabs_3_active_pane_srt_t1

0x8f93,	// (0x0004adb6) bg_active_tab_pane_g1_cp2_srt

0x433a,	// (0x0004615d) bg_active_tab_pane_g2_cp2_srt

0x8f9c,	// (0x0004adbf) bg_active_tab_pane_g3_cp2_srt

0x7af1,	// (0x00049914) tabs_4_active_pane_srt_ParamLimits

0x7af1,	// (0x00049914) tabs_4_active_pane_srt

0x7b03,	// (0x00049926) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7b03,	// (0x00049926) tabs_4_passive_pane_cp2_srt

0x70d7,	// (0x00048efa) aid_size_cell_toolbar

0x68d7,	// (0x000486fa) main_idle_act_pane_ParamLimits

0x72aa,	// (0x000490cd) popup_large_graphic_colour_window_ParamLimits

0x7651,	// (0x00049474) popup_toolbar_window_ParamLimits

0x7651,	// (0x00049474) popup_toolbar_window

0xabd7,	// (0x0004c9fa) list_single_graphic_2heading_pane_ParamLimits

0xabd7,	// (0x0004c9fa) list_single_graphic_2heading_pane

0x0e48,	// (0x00042c6b) aid_size_cell_apps_grid_lsc_pane

0x0e5a,	// (0x00042c7d) aid_size_cell_apps_grid_prt_pane

0x910b,	// (0x0004af2e) bg_wml_button_pane_cp1_ParamLimits

0x910b,	// (0x0004af2e) bg_wml_button_pane_cp1

0x98bd,	// (0x0004b6e0) form_midp_field_text_pane_t1_ParamLimits

0x96af,	// (0x0004b4d2) input_focus_pane_cp050_ParamLimits

0x98e8,	// (0x0004b70b) list_midp_form_text_pane_ParamLimits

0x989a,	// (0x0004b6bd) input_focus_pane_cp051_ParamLimits

0x98ae,	// (0x0004b6d1) list_midp_choice_pane_ParamLimits

0x9768,	// (0x0004b58b) list_single_2graphic_pane_cp3_ParamLimits

0x9768,	// (0x0004b58b) list_single_2graphic_pane_cp3

0x977e,	// (0x0004b5a1) list_single_midp_graphic_pane_ParamLimits

0x977e,	// (0x0004b5a1) list_single_midp_graphic_pane

0x58e5,	// (0x00047708) list_single_graphic_2heading_pane_g1_ParamLimits

0x58e5,	// (0x00047708) list_single_graphic_2heading_pane_g1

0x58f1,	// (0x00047714) list_single_graphic_2heading_pane_g4_ParamLimits

0x58f1,	// (0x00047714) list_single_graphic_2heading_pane_g4

0x58fd,	// (0x00047720) list_single_graphic_2heading_pane_g5_ParamLimits

0x58fd,	// (0x00047720) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000515d8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000515d8) list_single_graphic_2heading_pane_g

0x5909,	// (0x0004772c) list_single_graphic_2heading_pane_t1_ParamLimits

0x5909,	// (0x0004772c) list_single_graphic_2heading_pane_t1

0x591d,	// (0x00047740) list_single_graphic_2heading_pane_t2_ParamLimits

0x591d,	// (0x00047740) list_single_graphic_2heading_pane_t2

0x5939,	// (0x0004775c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5939,	// (0x0004775c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000515df) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000515df) list_single_graphic_2heading_pane_t

0x9579,	// (0x0004b39c) bg_popup_sub_pane_cp2

0x95a3,	// (0x0004b3c6) grid_toobar_pane

0x7710,	// (0x00049533) cell_toolbar_pane_ParamLimits

0x7710,	// (0x00049533) cell_toolbar_pane

0x95df,	// (0x0004b402) cell_toolbar_pane_g1_ParamLimits

0x95df,	// (0x0004b402) cell_toolbar_pane_g1

0x95f3,	// (0x0004b416) cell_toolbar_pane_g2_ParamLimits

0x95f3,	// (0x0004b416) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000515ed) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000515ed) cell_toolbar_pane_g

0x9615,	// (0x0004b438) grid_highlight_pane_cp2_ParamLimits

0x9615,	// (0x0004b438) grid_highlight_pane_cp2

0x962f,	// (0x0004b452) toolbar_button_pane

0x963b,	// (0x0004b45e) toolbar_button_pane_g1

0x9643,	// (0x0004b466) toolbar_button_pane_g2

0x964b,	// (0x0004b46e) toolbar_button_pane_g3

0x9653,	// (0x0004b476) toolbar_button_pane_g4

0x965b,	// (0x0004b47e) toolbar_button_pane_g5

0x9663,	// (0x0004b486) toolbar_button_pane_g6

0x966b,	// (0x0004b48e) toolbar_button_pane_g7

0x9673,	// (0x0004b496) toolbar_button_pane_g8

0x967b,	// (0x0004b49e) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000515f2) toolbar_button_pane_g

0x7754,	// (0x00049577) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7754,	// (0x00049577) list_single_2graphic_pane_g1_cp3

0x7760,	// (0x00049583) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7760,	// (0x00049583) list_single_2graphic_pane_g2_cp3

0x4617,	// (0x0004643a) list_single_2graphic_pane_g3_cp3

0x7771,	// (0x00049594) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7771,	// (0x00049594) list_single_2graphic_pane_g4_cp3

0x777d,	// (0x000495a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x777d,	// (0x000495a0) list_single_2graphic_pane_t1_cp3

0x460b,	// (0x0004642e) list_single_midp_graphic_pane_g2_ParamLimits

0x460b,	// (0x0004642e) list_single_midp_graphic_pane_g2

0x58cd,	// (0x000476f0) aid_zoom_text_primary

0x58d5,	// (0x000476f8) aid_zoom_text_secondary

0x904d,	// (0x0004ae70) status_small_pane_g7_ParamLimits

0x904d,	// (0x0004ae70) status_small_pane_g7

0x9070,	// (0x0004ae93) status_small_pane_t1_ParamLimits

0x644f,	// (0x00048272) title_pane_g2

0x0003,

0xf54e,	// (0x00051371) title_pane_g

0x66b8,	// (0x000484db) aid_size_cell_colour_1_pane_ParamLimits

0x66b8,	// (0x000484db) aid_size_cell_colour_1_pane

0x66cc,	// (0x000484ef) aid_size_cell_colour_2_pane_ParamLimits

0x66cc,	// (0x000484ef) aid_size_cell_colour_2_pane

0x66e0,	// (0x00048503) aid_size_cell_colour_3_pane_ParamLimits

0x66e0,	// (0x00048503) aid_size_cell_colour_3_pane

0x66f4,	// (0x00048517) aid_size_cell_colour_4_pane_ParamLimits

0x66f4,	// (0x00048517) aid_size_cell_colour_4_pane

0x6931,	// (0x00048754) title_pane_stacon_g1_ParamLimits

0x6931,	// (0x00048754) title_pane_stacon_g1

0x9cbf,	// (0x0004bae2) popup_note_wait_window_g3_ParamLimits

0x9cbf,	// (0x0004bae2) popup_note_wait_window_g3

0x9d36,	// (0x0004bb59) popup_note_wait_window_t5_ParamLimits

0x9d36,	// (0x0004bb59) popup_note_wait_window_t5

0xdc0c,	// (0x0004fa2f) main_feb_china_hwr_fs_writing_pane

0x7171,	// (0x00048f94) popup_feb_china_hwr_fs_window_ParamLimits

0x7171,	// (0x00048f94) popup_feb_china_hwr_fs_window

0x77c6,	// (0x000495e9) aid_size_cell_hwr_fs_ParamLimits

0x77c6,	// (0x000495e9) aid_size_cell_hwr_fs

0x96af,	// (0x0004b4d2) bg_popup_sub_pane_cp3_ParamLimits

0x96af,	// (0x0004b4d2) bg_popup_sub_pane_cp3

0x77db,	// (0x000495fe) grid_hwr_fs_pane_ParamLimits

0x77db,	// (0x000495fe) grid_hwr_fs_pane

0x77f3,	// (0x00049616) linegrid_hwr_fs_pane_ParamLimits

0x77f3,	// (0x00049616) linegrid_hwr_fs_pane

0x7803,	// (0x00049626) cell_hwr_fs_pane_ParamLimits

0x7803,	// (0x00049626) cell_hwr_fs_pane

0x96bb,	// (0x0004b4de) linegrid_hwr_fs_pane_g1_ParamLimits

0x96bb,	// (0x0004b4de) linegrid_hwr_fs_pane_g1

0x96c7,	// (0x0004b4ea) linegrid_hwr_fs_pane_g2_ParamLimits

0x96c7,	// (0x0004b4ea) linegrid_hwr_fs_pane_g2

0x96d9,	// (0x0004b4fc) linegrid_hwr_fs_pane_g3_ParamLimits

0x96d9,	// (0x0004b4fc) linegrid_hwr_fs_pane_g3

0x7827,	// (0x0004964a) linegrid_hwr_fs_pane_g4_ParamLimits

0x7827,	// (0x0004964a) linegrid_hwr_fs_pane_g4

0x7845,	// (0x00049668) linegrid_hwr_fs_pane_g5_ParamLimits

0x7845,	// (0x00049668) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0005161d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0005161d) linegrid_hwr_fs_pane_g

0x96e5,	// (0x0004b508) cell_hwr_fs_pane_g1_ParamLimits

0x96e5,	// (0x0004b508) cell_hwr_fs_pane_g1

0x94b4,	// (0x0004b2d7) cell_hwr_fs_pane_g2_ParamLimits

0x94b4,	// (0x0004b2d7) cell_hwr_fs_pane_g2

0x96fb,	// (0x0004b51e) cell_hwr_fs_pane_g3_ParamLimits

0x96fb,	// (0x0004b51e) cell_hwr_fs_pane_g3

0x9708,	// (0x0004b52b) cell_hwr_fs_pane_g4_ParamLimits

0x9708,	// (0x0004b52b) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00051628) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00051628) cell_hwr_fs_pane_g

0x785b,	// (0x0004967e) cell_hwr_fs_pane_t1

0xdc0c,	// (0x0004fa2f) grid_highlight_pane_cp6

0xdc0c,	// (0x0004fa2f) main_idle_act2_pane

0x0c57,	// (0x00042a7a) aid_inside_area_popup_secondary

0xa36f,	// (0x0004c192) aid_inside_area_window_primary_ParamLimits

0xa36f,	// (0x0004c192) aid_inside_area_window_primary

0xaf4f,	// (0x0004cd72) ai2_news_ticker_pane

0xaf57,	// (0x0004cd7a) aid_size_cell_ai1_link_ParamLimits

0xaf57,	// (0x0004cd7a) aid_size_cell_ai1_link

0xaf71,	// (0x0004cd94) popup_ai2_data_window_ParamLimits

0xaf71,	// (0x0004cd94) popup_ai2_data_window

0xaf8f,	// (0x0004cdb2) popup_ai2_link_window_ParamLimits

0xaf8f,	// (0x0004cdb2) popup_ai2_link_window

0x96af,	// (0x0004b4d2) bg_popup_sub_pane_cp4_ParamLimits

0x96af,	// (0x0004b4d2) bg_popup_sub_pane_cp4

0xafa5,	// (0x0004cdc8) grid_ai2_link_pane_ParamLimits

0xafa5,	// (0x0004cdc8) grid_ai2_link_pane

0xafbc,	// (0x0004cddf) popup_ai2_link_window_g1_ParamLimits

0xafbc,	// (0x0004cddf) popup_ai2_link_window_g1

0xafc8,	// (0x0004cdeb) popup_ai2_link_window_g2_ParamLimits

0xafc8,	// (0x0004cdeb) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000517fb) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000517fb) popup_ai2_link_window_g

0xafd9,	// (0x0004cdfc) ai2_mp_button_pane

0xafe1,	// (0x0004ce04) ai2_mp_volume_pane

0x989a,	// (0x0004b6bd) bg_popup_sub_pane_cp5_ParamLimits

0x989a,	// (0x0004b6bd) bg_popup_sub_pane_cp5

0xafe9,	// (0x0004ce0c) heading_ai2_gene_pane_ParamLimits

0xafe9,	// (0x0004ce0c) heading_ai2_gene_pane

0xaff5,	// (0x0004ce18) list_ai2_gene_pane_ParamLimits

0xaff5,	// (0x0004ce18) list_ai2_gene_pane

0xb03d,	// (0x0004ce60) cell_ai2_link_pane_ParamLimits

0xb03d,	// (0x0004ce60) cell_ai2_link_pane

0xb053,	// (0x0004ce76) cell_ai2_link_pane_g1

0xdc0c,	// (0x0004fa2f) grid_highlight_pane_cp7

0x7ba9,	// (0x000499cc) ai2_mp_volume_pane_g1

0xb126,	// (0x0004cf49) ai2_mp_volume_pane_g2

0xb09b,	// (0x0004cebe) list_ai2_gene_pane_t1

0xb12e,	// (0x0004cf51) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00051814) ai2_mp_volume_pane_g

0x7bb1,	// (0x000499d4) volume_small_pane_cp3

0xb136,	// (0x0004cf59) aid_size_cell_ai2_button

0xb13e,	// (0x0004cf61) grid_ai2_button_pane

0xb147,	// (0x0004cf6a) cell_ai2_button_pane_ParamLimits

0xb147,	// (0x0004cf6a) cell_ai2_button_pane

0xdc02,	// (0x0004fa25) cell_ai2_button_pane_g1

0xdc0c,	// (0x0004fa2f) grid_highlight_pane_cp8

0xb0e6,	// (0x0004cf09) ai2_gene_pane_t1_ParamLimits

0xb0e6,	// (0x0004cf09) ai2_gene_pane_t1

0x70cd,	// (0x00048ef0) aid_height_parent_landscape

0xa9f4,	// (0x0004c817) aid_height_set_list

0xaa05,	// (0x0004c828) aid_size_parent

0xad6e,	// (0x0004cb91) aid_size_cell_graphic_pane_ParamLimits

0xb005,	// (0x0004ce28) popup_ai2_data_window_g1_ParamLimits

0xb005,	// (0x0004ce28) popup_ai2_data_window_g1

0xb011,	// (0x0004ce34) ai2_news_ticker_pane_g1

0xb019,	// (0x0004ce3c) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00051800) ai2_news_ticker_pane_g

0xb021,	// (0x0004ce44) ai2_news_ticker_pane_t1

0xb02f,	// (0x0004ce52) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00051805) ai2_news_ticker_pane_t

0xb05c,	// (0x0004ce7f) heading_ai2_gene_pane_g1

0xb064,	// (0x0004ce87) heading_ai2_gene_pane_t1_ParamLimits

0xb064,	// (0x0004ce87) heading_ai2_gene_pane_t1

0xb079,	// (0x0004ce9c) list_highlight_pane_cp6

0xb081,	// (0x0004cea4) ai2_gene_pane_ParamLimits

0xb081,	// (0x0004cea4) ai2_gene_pane

0xb0a9,	// (0x0004cecc) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0005180a) list_ai2_gene_pane_t

0xb0b7,	// (0x0004ceda) list_highlight_pane_cp8_ParamLimits

0xb0b7,	// (0x0004ceda) list_highlight_pane_cp8

0xb0c8,	// (0x0004ceeb) ai2_gene_pane_g1_ParamLimits

0xb0c8,	// (0x0004ceeb) ai2_gene_pane_g1

0xb0da,	// (0x0004cefd) ai2_gene_pane_g2_ParamLimits

0xb0da,	// (0x0004cefd) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0005180f) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0005180f) ai2_gene_pane_g

0x0add,	// (0x00042900) scroll_pane_cp12

0x708a,	// (0x00048ead) control_pane_t3_ParamLimits

0x708a,	// (0x00048ead) control_pane_t3

0x9061,	// (0x0004ae84) status_small_pane_g8_ParamLimits

0x9061,	// (0x0004ae84) status_small_pane_g8

0x726f,	// (0x00049092) popup_find_window_ParamLimits

0x749a,	// (0x000492bd) popup_note_image_window_ParamLimits

0x5951,	// (0x00047774) list_double2_graphic_pane_vc_g1_ParamLimits

0x5951,	// (0x00047774) list_double2_graphic_pane_vc_g1

0x8d4d,	// (0x0004ab70) list_double2_graphic_pane_vc_g2_ParamLimits

0x8d4d,	// (0x0004ab70) list_double2_graphic_pane_vc_g2

0x7740,	// (0x00049563) list_double2_graphic_pane_vc_g3_ParamLimits

0x7740,	// (0x00049563) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000515e6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000515e6) list_double2_graphic_pane_vc_g

0x595d,	// (0x00047780) list_double2_graphic_pane_vc_t1_ParamLimits

0x595d,	// (0x00047780) list_double2_graphic_pane_vc_t1

0x8d4d,	// (0x0004ab70) list_single_heading_pane_vc_g1_ParamLimits

0x8d4d,	// (0x0004ab70) list_single_heading_pane_vc_g1

0x7740,	// (0x00049563) list_single_heading_pane_vc_g2_ParamLimits

0x7740,	// (0x00049563) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051607) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051607) list_single_heading_pane_vc_g

0x5973,	// (0x00047796) list_single_heading_pane_vc_t1_ParamLimits

0x5973,	// (0x00047796) list_single_heading_pane_vc_t1

0x5989,	// (0x000477ac) list_single_heading_pane_vc_t2_ParamLimits

0x5989,	// (0x000477ac) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0005160c) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005160c) list_single_heading_pane_vc_t

0x77ae,	// (0x000495d1) list_setting_number_pane_vc_g1_ParamLimits

0x77ae,	// (0x000495d1) list_setting_number_pane_vc_g1

0x77ba,	// (0x000495dd) list_setting_number_pane_vc_g2_ParamLimits

0x77ba,	// (0x000495dd) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051611) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051611) list_setting_number_pane_vc_g

0x599b,	// (0x000477be) list_setting_number_pane_vc_t1_ParamLimits

0x599b,	// (0x000477be) list_setting_number_pane_vc_t1

0x59af,	// (0x000477d2) list_setting_number_pane_vc_t2_ParamLimits

0x59af,	// (0x000477d2) list_setting_number_pane_vc_t2

0x59cb,	// (0x000477ee) list_setting_number_pane_vc_t3_ParamLimits

0x59cb,	// (0x000477ee) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00051616) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00051616) list_setting_number_pane_vc_t

0x59f9,	// (0x0004781c) set_value_pane_vc_ParamLimits

0x59f9,	// (0x0004781c) set_value_pane_vc

0xabd7,	// (0x0004c9fa) list_double2_graphic_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double2_graphic_pane_vc

0xabd7,	// (0x0004c9fa) list_double2_large_graphic_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double2_large_graphic_pane_vc

0xabd7,	// (0x0004c9fa) list_double2_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double2_pane_vc

0xabd7,	// (0x0004c9fa) list_double_graphic_heading_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_graphic_heading_pane_vc

0xabd7,	// (0x0004c9fa) list_double_graphic_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_graphic_pane_vc

0xabd7,	// (0x0004c9fa) list_double_heading_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_heading_pane_vc

0xabeb,	// (0x0004ca0e) list_double_large_graphic_pane_vc_ParamLimits

0xabeb,	// (0x0004ca0e) list_double_large_graphic_pane_vc

0xabd7,	// (0x0004c9fa) list_double_number_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_number_pane_vc

0xabd7,	// (0x0004c9fa) list_double_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_pane_vc

0xabd7,	// (0x0004c9fa) list_double_time_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_double_time_pane_vc

0xabd7,	// (0x0004c9fa) list_setting_number_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_setting_number_pane_vc

0xabd7,	// (0x0004c9fa) list_setting_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_setting_pane_vc

0xabd7,	// (0x0004c9fa) list_single_graphic_heading_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_single_graphic_heading_pane_vc

0xabd7,	// (0x0004c9fa) list_single_heading_pane_vc_ParamLimits

0xabd7,	// (0x0004c9fa) list_single_heading_pane_vc

0xac0d,	// (0x0004ca30) list_single_number_heading_pane_vc_ParamLimits

0xac0d,	// (0x0004ca30) list_single_number_heading_pane_vc

0x5951,	// (0x00047774) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5951,	// (0x00047774) list_double_graphic_heading_pane_vc_g1

0x7bba,	// (0x000499dd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7bba,	// (0x000499dd) list_double_graphic_heading_pane_vc_g2

0x7bc6,	// (0x000499e9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7bc6,	// (0x000499e9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x0005181b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005181b) list_double_graphic_heading_pane_vc_g

0x5aad,	// (0x000478d0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5aad,	// (0x000478d0) list_double_graphic_heading_pane_vc_t1

0x5ac3,	// (0x000478e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ac3,	// (0x000478e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00051822) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00051822) list_double_graphic_heading_pane_vc_t

0x77ae,	// (0x000495d1) list_setting_pane_vc_g1_ParamLimits

0x77ae,	// (0x000495d1) list_setting_pane_vc_g1

0x77ba,	// (0x000495dd) list_setting_pane_vc_g2_ParamLimits

0x77ba,	// (0x000495dd) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00051611) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00051611) list_setting_pane_vc_g

0x5ae1,	// (0x00047904) list_setting_pane_vc_t1_ParamLimits

0x5ae1,	// (0x00047904) list_setting_pane_vc_t1

0x5afd,	// (0x00047920) list_setting_pane_vc_t2_ParamLimits

0x5afd,	// (0x00047920) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00051850) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00051850) list_setting_pane_vc_t

0x59f9,	// (0x0004781c) set_value_pane_cp_vc_ParamLimits

0x59f9,	// (0x0004781c) set_value_pane_cp_vc

0x8d4d,	// (0x0004ab70) list_single_number_heading_pane_vc_g1_ParamLimits

0x8d4d,	// (0x0004ab70) list_single_number_heading_pane_vc_g1

0x7740,	// (0x00049563) list_single_number_heading_pane_vc_g2_ParamLimits

0x7740,	// (0x00049563) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051607) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051607) list_single_number_heading_pane_vc_g

0x5b19,	// (0x0004793c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5b19,	// (0x0004793c) list_single_number_heading_pane_vc_t1

0x5b2f,	// (0x00047952) list_single_number_heading_pane_vc_t2_ParamLimits

0x5b2f,	// (0x00047952) list_single_number_heading_pane_vc_t2

0x5b41,	// (0x00047964) list_single_number_heading_pane_vc_t3_ParamLimits

0x5b41,	// (0x00047964) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00051855) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00051855) list_single_number_heading_pane_vc_t

0x5951,	// (0x00047774) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5951,	// (0x00047774) list_single_graphic_heading_pane_vc_g1

0x8d4d,	// (0x0004ab70) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8d4d,	// (0x0004ab70) list_single_graphic_heading_pane_vc_g4

0x7740,	// (0x00049563) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7740,	// (0x00049563) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000515e6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000515e6) list_single_graphic_heading_pane_vc_g

0x5b53,	// (0x00047976) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5b53,	// (0x00047976) list_single_graphic_heading_pane_vc_t1

0x5b69,	// (0x0004798c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5b69,	// (0x0004798c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x0005185c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0005185c) list_single_graphic_heading_pane_vc_t

0x8d4d,	// (0x0004ab70) list_double2_pane_vc_g1_ParamLimits

0x8d4d,	// (0x0004ab70) list_double2_pane_vc_g1

0x7740,	// (0x00049563) list_double2_pane_vc_g2_ParamLimits

0x7740,	// (0x00049563) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051607) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051607) list_double2_pane_vc_g

0x5b7b,	// (0x0004799e) list_double2_pane_vc_t1_ParamLimits

0x5b7b,	// (0x0004799e) list_double2_pane_vc_t1

0x7bd2,	// (0x000499f5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7bd2,	// (0x000499f5) list_double2_large_graphic_pane_vc_g1

0x8d4d,	// (0x0004ab70) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8d4d,	// (0x0004ab70) list_double2_large_graphic_pane_vc_g2

0x7740,	// (0x00049563) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7740,	// (0x00049563) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00051861) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00051861) list_double2_large_graphic_pane_vc_g

0x5b91,	// (0x000479b4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b91,	// (0x000479b4) list_double2_large_graphic_pane_vc_t1

0x7bde,	// (0x00049a01) list_double_time_pane_vc_g1_ParamLimits

0x7bde,	// (0x00049a01) list_double_time_pane_vc_g1

0x7bea,	// (0x00049a0d) list_double_time_pane_vc_g2_ParamLimits

0x7bea,	// (0x00049a0d) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00051868) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00051868) list_double_time_pane_vc_g

0x5ba7,	// (0x000479ca) list_double_time_pane_vc_t1_ParamLimits

0x5ba7,	// (0x000479ca) list_double_time_pane_vc_t1

0x5bd1,	// (0x000479f4) list_double_time_pane_vc_t2_ParamLimits

0x5bd1,	// (0x000479f4) list_double_time_pane_vc_t2

0x5c1a,	// (0x00047a3d) list_double_time_pane_vc_t3_ParamLimits

0x5c1a,	// (0x00047a3d) list_double_time_pane_vc_t3

0x5c2c,	// (0x00047a4f) list_double_time_pane_vc_t4_ParamLimits

0x5c2c,	// (0x00047a4f) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x0005186d) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005186d) list_double_time_pane_vc_t

0x8d4d,	// (0x0004ab70) list_double_pane_vc_g1_ParamLimits

0x8d4d,	// (0x0004ab70) list_double_pane_vc_g1

0x7740,	// (0x00049563) list_double_pane_vc_g2_ParamLimits

0x7740,	// (0x00049563) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051607) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051607) list_double_pane_vc_g

0x5c40,	// (0x00047a63) list_double_pane_vc_t1_ParamLimits

0x5c40,	// (0x00047a63) list_double_pane_vc_t1

0x5c54,	// (0x00047a77) list_double_pane_vc_t2_ParamLimits

0x5c54,	// (0x00047a77) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00051876) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00051876) list_double_pane_vc_t

0x8d4d,	// (0x0004ab70) list_double_number_pane_vc_g1_ParamLimits

0x8d4d,	// (0x0004ab70) list_double_number_pane_vc_g1

0x7740,	// (0x00049563) list_double_number_pane_vc_g2_ParamLimits

0x7740,	// (0x00049563) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051607) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051607) list_double_number_pane_vc_g

0x5c6a,	// (0x00047a8d) list_double_number_pane_vc_t1_ParamLimits

0x5c6a,	// (0x00047a8d) list_double_number_pane_vc_t1

0x5c7c,	// (0x00047a9f) list_double_number_pane_vc_t2_ParamLimits

0x5c7c,	// (0x00047a9f) list_double_number_pane_vc_t2

0x5c54,	// (0x00047a77) list_double_number_pane_vc_t3_ParamLimits

0x5c54,	// (0x00047a77) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x0005187b) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x0005187b) list_double_number_pane_vc_t

0x7bf6,	// (0x00049a19) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7bf6,	// (0x00049a19) list_double_large_graphic_pane_vc_g1

0x7c18,	// (0x00049a3b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7c18,	// (0x00049a3b) list_double_large_graphic_pane_vc_g2

0x7c2c,	// (0x00049a4f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7c2c,	// (0x00049a4f) list_double_large_graphic_pane_vc_g3

0x5c90,	// (0x00047ab3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c90,	// (0x00047ab3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00051882) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00051882) list_double_large_graphic_pane_vc_g

0x5c9f,	// (0x00047ac2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c9f,	// (0x00047ac2) list_double_large_graphic_pane_vc_t1

0x5cbb,	// (0x00047ade) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5cbb,	// (0x00047ade) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005188b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005188b) list_double_large_graphic_pane_vc_t

0x7bba,	// (0x000499dd) list_double_heading_pane_vc_g1_ParamLimits

0x7bba,	// (0x000499dd) list_double_heading_pane_vc_g1

0x7bc6,	// (0x000499e9) list_double_heading_pane_vc_g2_ParamLimits

0x7bc6,	// (0x000499e9) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00051890) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00051890) list_double_heading_pane_vc_g

0x5cdb,	// (0x00047afe) list_double_heading_pane_vc_t1_ParamLimits

0x5cdb,	// (0x00047afe) list_double_heading_pane_vc_t1

0x5ced,	// (0x00047b10) list_double_heading_pane_vc_t2_ParamLimits

0x5ced,	// (0x00047b10) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00051895) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00051895) list_double_heading_pane_vc_t

0x5d05,	// (0x00047b28) list_double_graphic_pane_vc_g1_ParamLimits

0x5d05,	// (0x00047b28) list_double_graphic_pane_vc_g1

0x7c3b,	// (0x00049a5e) list_double_graphic_pane_vc_g2_ParamLimits

0x7c3b,	// (0x00049a5e) list_double_graphic_pane_vc_g2

0x8d4d,	// (0x0004ab70) list_double_graphic_pane_vc_g3_ParamLimits

0x8d4d,	// (0x0004ab70) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x0005189a) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0005189a) list_double_graphic_pane_vc_g

0x5d11,	// (0x00047b34) list_double_graphic_pane_vc_t1_ParamLimits

0x5d11,	// (0x00047b34) list_double_graphic_pane_vc_t1

0x5d3b,	// (0x00047b5e) list_double_graphic_pane_vc_t2_ParamLimits

0x5d3b,	// (0x00047b5e) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x000518a3) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x000518a3) list_double_graphic_pane_vc_t

0x605b,	// (0x00047e7e) aid_size_cell_fastswap

0x6063,	// (0x00047e86) aid_size_cell_touch_ParamLimits

0x6063,	// (0x00047e86) aid_size_cell_touch

0x62c4,	// (0x000480e7) popup_fast_swap_wide_window_ParamLimits

0x62c4,	// (0x000480e7) popup_fast_swap_wide_window

0x63e2,	// (0x00048205) touch_pane_ParamLimits

0x63e2,	// (0x00048205) touch_pane

0x0b33,	// (0x00042956) button_value_adjust_pane_cp2

0x55ef,	// (0x00047412) button_value_adjust_pane_cp4

0x5617,	// (0x0004743a) form_field_data_pane_cp2

0x563c,	// (0x0004745f) form_field_data_wide_pane_cp2

0x0e7f,	// (0x00042ca2) bg_scroll_pane_ParamLimits

0x6b32,	// (0x00048955) scroll_handle_pane_ParamLimits

0x6b46,	// (0x00048969) scroll_sc2_down_pane_ParamLimits

0x6b46,	// (0x00048969) scroll_sc2_down_pane

0x0eb0,	// (0x00042cd3) scroll_sc2_up_pane_ParamLimits

0x0eb0,	// (0x00042cd3) scroll_sc2_up_pane

0xb830,	// (0x0004d653) grid_wheel_folder_pane_g1_ParamLimits

0xb830,	// (0x0004d653) grid_wheel_folder_pane_g1

0x6e4d,	// (0x00048c70) clock_nsta_pane_cp2_ParamLimits

0x6e4d,	// (0x00048c70) clock_nsta_pane_cp2

0x8de4,	// (0x0004ac07) listscroll_midp_pane_ParamLimits

0x8df0,	// (0x0004ac13) midp_canvas_pane

0x90db,	// (0x0004aefe) nsta_clock_indic_pane

0x9117,	// (0x0004af3a) listscroll_form_pane_vc

0x911f,	// (0x0004af42) listscroll_set_pane_vc_ParamLimits

0x911f,	// (0x0004af42) listscroll_set_pane_vc

0x9216,	// (0x0004b039) clock_nsta_pane

0x928d,	// (0x0004b0b0) indicator_nsta_pane

0x9579,	// (0x0004b39c) bg_popup_sub_pane_cp2_ParamLimits

0x958d,	// (0x0004b3b0) find_pane_cp2_ParamLimits

0x958d,	// (0x0004b3b0) find_pane_cp2

0x95a3,	// (0x0004b3c6) grid_toobar_pane_ParamLimits

0x9683,	// (0x0004b4a6) list_form_gen_pane_vc_ParamLimits

0x9683,	// (0x0004b4a6) list_form_gen_pane_vc

0x9699,	// (0x0004b4bc) scroll_pane_cp8_vc_ParamLimits

0x9699,	// (0x0004b4bc) scroll_pane_cp8_vc

0x9715,	// (0x0004b538) data_form_wide_pane_vc_ParamLimits

0x9715,	// (0x0004b538) data_form_wide_pane_vc

0x9721,	// (0x0004b544) form_field_data_wide_pane_vc_g1

0x9729,	// (0x0004b54c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9729,	// (0x0004b54c) form_field_data_wide_pane_vc_t1

0x0b47,	// (0x0004296a) input_focus_pane_cp6_vc_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_cp6_vc

0x9a25,	// (0x0004b848) list_midp_pane_ParamLimits

0x9a31,	// (0x0004b854) scroll_pane_cp16_ParamLimits

0x9a31,	// (0x0004b854) scroll_pane_cp16

0x9a93,	// (0x0004b8b6) button_value_adjust_pane_ParamLimits

0x9a93,	// (0x0004b8b6) button_value_adjust_pane

0xaa17,	// (0x0004c83a) button_value_adjust_pane_cp6_ParamLimits

0xaa17,	// (0x0004c83a) button_value_adjust_pane_cp6

0xab5f,	// (0x0004c982) settings_code_pane_cp_ParamLimits

0xab5f,	// (0x0004c982) settings_code_pane_cp

0xdc02,	// (0x0004fa25) cell_touch_pane_g1

0xdc02,	// (0x0004fa25) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005152b) cell_touch_pane_g

0xb159,	// (0x0004cf7c) cell_touch_pane_cp_ParamLimits

0xb159,	// (0x0004cf7c) cell_touch_pane_cp

0xb169,	// (0x0004cf8c) cell_touch_pane_ParamLimits

0xb169,	// (0x0004cf8c) cell_touch_pane

0xdc02,	// (0x0004fa25) scroll_sc2_down_pane_g1

0xdc02,	// (0x0004fa25) scroll_sc2_up_pane_g1

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp4_vc

0xb17a,	// (0x0004cf9d) list_set_graphic_pane_vc_g1_ParamLimits

0xb17a,	// (0x0004cf9d) list_set_graphic_pane_vc_g1

0xb186,	// (0x0004cfa9) list_set_graphic_pane_vc_g2_ParamLimits

0xb186,	// (0x0004cfa9) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00051827) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00051827) list_set_graphic_pane_vc_g

0xb192,	// (0x0004cfb5) text_primary_small_cp13_vc_ParamLimits

0xb192,	// (0x0004cfb5) text_primary_small_cp13_vc

0x44d4,	// (0x000462f7) list_set_graphic_pane_vc_ParamLimits

0x44d4,	// (0x000462f7) list_set_graphic_pane_vc

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp2_vc

0xdc02,	// (0x0004fa25) setting_code_pane_vc_g1

0xdc71,	// (0x0004fa94) setting_code_pane_vc_t1

0xb1aa,	// (0x0004cfcd) set_text_pane_vc_t1_ParamLimits

0xb1aa,	// (0x0004cfcd) set_text_pane_vc_t1

0xdc0c,	// (0x0004fa2f) input_focus_pane_cp1_vc

0xb1c8,	// (0x0004cfeb) list_set_text_pane_vc

0xdc02,	// (0x0004fa25) setting_text_pane_vc_g1

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp2_vc

0xdc68,	// (0x0004fa8b) setting_slider_graphic_pane_vc_g1

0xb1d2,	// (0x0004cff5) setting_slider_graphic_pane_vc_t1

0xb1e4,	// (0x0004d007) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x0005182c) setting_slider_graphic_pane_vc_t

0xb1f6,	// (0x0004d019) slider_set_pane_cp_vc

0xb200,	// (0x0004d023) slider_set_pane_vc_g1

0xb209,	// (0x0004d02c) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00051831) slider_set_pane_vc_g

0x0b9f,	// (0x000429c2) set_opt_bg_pane_g1_copy1

0x0ba7,	// (0x000429ca) set_opt_bg_pane_g2_copy1

0xb235,	// (0x0004d058) set_opt_bg_pane_g3_copy1

0x0bb7,	// (0x000429da) set_opt_bg_pane_g4_copy1

0x0bbf,	// (0x000429e2) set_opt_bg_pane_g5_copy1

0x0bc7,	// (0x000429ea) set_opt_bg_pane_g6_copy1

0xb23f,	// (0x0004d062) set_opt_bg_pane_g7_copy1

0xb249,	// (0x0004d06c) set_opt_bg_pane_g8_copy1

0xb253,	// (0x0004d076) set_opt_bg_pane_g9_copy1

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp_vc

0xb25d,	// (0x0004d080) setting_slider_pane_vc_t1

0xb26c,	// (0x0004d08f) setting_slider_pane_vc_t2

0xb27e,	// (0x0004d0a1) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00051840) setting_slider_pane_vc_t

0xb290,	// (0x0004d0b3) slider_set_pane_vc

0x7869,	// (0x0004968c) volume_set_pane_vc_g1

0x7872,	// (0x00049695) volume_set_pane_vc_g2

0x787b,	// (0x0004969e) volume_set_pane_vc_g3

0x7884,	// (0x000496a7) volume_set_pane_vc_g4

0x788d,	// (0x000496b0) volume_set_pane_vc_g5

0x7896,	// (0x000496b9) volume_set_pane_vc_g6

0x789f,	// (0x000496c2) volume_set_pane_vc_g7

0x78a8,	// (0x000496cb) volume_set_pane_vc_g8

0x78b1,	// (0x000496d4) volume_set_pane_vc_g9

0x78ba,	// (0x000496dd) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x000516de) volume_set_pane_vc_g

0xb298,	// (0x0004d0bb) volume_set_pane_vc

0xb2a2,	// (0x0004d0c5) button_value_adjust_pane_cp1_vc

0xb2ac,	// (0x0004d0cf) list_highlight_pane_cp2_vc

0xb2b5,	// (0x0004d0d8) list_set_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0d8) list_set_pane_vc

0xb323,	// (0x0004d146) main_pane_set_vc_t1_ParamLimits

0xb323,	// (0x0004d146) main_pane_set_vc_t1

0xb338,	// (0x0004d15b) main_pane_set_vc_t2_ParamLimits

0xb338,	// (0x0004d15b) main_pane_set_vc_t2

0xb34a,	// (0x0004d16d) main_pane_set_vc_t3_ParamLimits

0xb34a,	// (0x0004d16d) main_pane_set_vc_t3

0xb35e,	// (0x0004d181) main_pane_set_vc_t4_ParamLimits

0xb35e,	// (0x0004d181) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00051847) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00051847) main_pane_set_vc_t

0xb372,	// (0x0004d195) setting_code_pane_vc_ParamLimits

0xb372,	// (0x0004d195) setting_code_pane_vc

0xb383,	// (0x0004d1a6) setting_slider_graphic_pane_vc

0xb383,	// (0x0004d1a6) setting_slider_pane_vc

0xb383,	// (0x0004d1a6) setting_text_pane_vc

0xb383,	// (0x0004d1a6) setting_volume_pane_vc

0xb38d,	// (0x0004d1b0) scroll_pane_cp121_vc

0x0b21,	// (0x00042944) set_content_pane_vc

0xb395,	// (0x0004d1b8) button_value_adjust_pane_g1

0xb39e,	// (0x0004d1c1) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x000518a8) button_value_adjust_pane_g

0xb3a7,	// (0x0004d1ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb3a7,	// (0x0004d1ca) form_field_slider_wide_pane_vc_t1

0xb3b9,	// (0x0004d1dc) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3b9,	// (0x0004d1dc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x000518ad) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x000518ad) form_field_slider_wide_pane_vc_t

0xdc96,	// (0x0004fab9) input_focus_pane_cp10_vc_ParamLimits

0xdc96,	// (0x0004fab9) input_focus_pane_cp10_vc

0xb3e5,	// (0x0004d208) slider_cont_pane_cp1_vc_ParamLimits

0xb3e5,	// (0x0004d208) slider_cont_pane_cp1_vc

0xb3f7,	// (0x0004d21a) slider_form_pane_g1_cp2

0xb209,	// (0x0004d02c) slider_form_pane_g2_cp2

0xb424,	// (0x0004d247) form_field_slider_pane_vc_t3

0xb432,	// (0x0004d255) form_field_slider_pane_vc_t4

0xb440,	// (0x0004d263) slider_form_pane_vc_ParamLimits

0xb440,	// (0x0004d263) slider_form_pane_vc

0xb44d,	// (0x0004d270) form_field_slider_pane_vc_t1_ParamLimits

0xb44d,	// (0x0004d270) form_field_slider_pane_vc_t1

0xb3b9,	// (0x0004d1dc) form_field_slider_pane_vc_t2_ParamLimits

0xb3b9,	// (0x0004d1dc) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x000518bf) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x000518bf) form_field_slider_pane_vc_t

0xdc96,	// (0x0004fab9) input_focus_pane_cp9_vc_ParamLimits

0xdc96,	// (0x0004fab9) input_focus_pane_cp9_vc

0xb463,	// (0x0004d286) slider_cont_pane_vc_ParamLimits

0xb463,	// (0x0004d286) slider_cont_pane_vc

0xb477,	// (0x0004d29a) list_form_graphic_pane_cp_vc_ParamLimits

0xb477,	// (0x0004d29a) list_form_graphic_pane_cp_vc

0x9721,	// (0x0004b544) form_field_popup_wide_pane_vc_g1

0xb48c,	// (0x0004d2af) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb48c,	// (0x0004d2af) form_field_popup_wide_pane_vc_t1

0x0b47,	// (0x0004296a) input_focus_pane_cp8_vc_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_cp8_vc

0xb4d1,	// (0x0004d2f4) list_form_wide_pane_vc_ParamLimits

0xb4d1,	// (0x0004d2f4) list_form_wide_pane_vc

0xb4dd,	// (0x0004d300) list_form_graphic_pane_vc_g1

0xb4e5,	// (0x0004d308) list_form_graphic_pane_vc_t1_ParamLimits

0xb4e5,	// (0x0004d308) list_form_graphic_pane_vc_t1

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp5_vc_ParamLimits

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp5_vc

0xb501,	// (0x0004d324) list_form_graphic_pane_vc_ParamLimits

0xb501,	// (0x0004d324) list_form_graphic_pane_vc

0x9721,	// (0x0004b544) form_field_popup_pane_vc_g1

0xb517,	// (0x0004d33a) form_field_popup_pane_vc_t1_ParamLimits

0xb517,	// (0x0004d33a) form_field_popup_pane_vc_t1

0x0b47,	// (0x0004296a) input_focus_pane_cp7_vc_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_cp7_vc

0xb52e,	// (0x0004d351) list_form_pane_vc_ParamLimits

0xb52e,	// (0x0004d351) list_form_pane_vc

0xb53a,	// (0x0004d35d) data_form_pane_vc_t1_ParamLimits

0xb53a,	// (0x0004d35d) data_form_pane_vc_t1

0x0b9f,	// (0x000429c2) input_focus_pane_vc_g1

0x0ba7,	// (0x000429ca) input_focus_pane_vc_g2

0x0baf,	// (0x000429d2) input_focus_pane_vc_g3

0x0bb7,	// (0x000429da) input_focus_pane_vc_g4

0x0bbf,	// (0x000429e2) input_focus_pane_vc_g5

0x0bc7,	// (0x000429ea) input_focus_pane_vc_g6

0x0bcf,	// (0x000429f2) input_focus_pane_vc_g7

0x0bd7,	// (0x000429fa) input_focus_pane_vc_g8

0x0bdf,	// (0x00042a02) input_focus_pane_vc_g9

0xdc02,	// (0x0004fa25) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000514b4) input_focus_pane_vc_g

0x9715,	// (0x0004b538) data_form_pane_vc_ParamLimits

0x9715,	// (0x0004b538) data_form_pane_vc

0x9721,	// (0x0004b544) form_field_data_pane_vc_g1

0xb557,	// (0x0004d37a) form_field_data_pane_vc_t1_ParamLimits

0xb557,	// (0x0004d37a) form_field_data_pane_vc_t1

0x0b47,	// (0x0004296a) input_focus_pane_vc_ParamLimits

0x0b47,	// (0x0004296a) input_focus_pane_vc

0xb571,	// (0x0004d394) button_value_adjust_pane_cp3_vc

0xb579,	// (0x0004d39c) button_value_adjust_pane_cp5_vc

0xb581,	// (0x0004d3a4) form_field_data_pane_vc_ParamLimits

0xb581,	// (0x0004d3a4) form_field_data_pane_vc

0xb59c,	// (0x0004d3bf) form_field_data_pane_vc_cp2

0xb5a4,	// (0x0004d3c7) form_field_data_wide_pane_vc_ParamLimits

0xb5a4,	// (0x0004d3c7) form_field_data_wide_pane_vc

0xb5be,	// (0x0004d3e1) form_field_data_wide_pane_vc_cp2

0xb5c6,	// (0x0004d3e9) form_field_popup_pane_vc_ParamLimits

0xb5c6,	// (0x0004d3e9) form_field_popup_pane_vc

0xb5e1,	// (0x0004d404) form_field_popup_wide_pane_vc_ParamLimits

0xb5e1,	// (0x0004d404) form_field_popup_wide_pane_vc

0xb5fb,	// (0x0004d41e) form_field_slider_pane_vc_ParamLimits

0xb5fb,	// (0x0004d41e) form_field_slider_pane_vc

0xb60e,	// (0x0004d431) form_field_slider_wide_pane_vc_ParamLimits

0xb60e,	// (0x0004d431) form_field_slider_wide_pane_vc

0xb621,	// (0x0004d444) grid_touch_1_pane_ParamLimits

0xb621,	// (0x0004d444) grid_touch_1_pane

0xb62d,	// (0x0004d450) grid_touch_2_pane_ParamLimits

0xb62d,	// (0x0004d450) grid_touch_2_pane

0x90a6,	// (0x0004aec9) touch_pane_g1_ParamLimits

0x90a6,	// (0x0004aec9) touch_pane_g1

0xb647,	// (0x0004d46a) cell_app_pane_cp_wide_ParamLimits

0xb647,	// (0x0004d46a) cell_app_pane_cp_wide

0xb658,	// (0x0004d47b) grid_popup_fast_wide_pane_ParamLimits

0xb658,	// (0x0004d47b) grid_popup_fast_wide_pane

0xb66c,	// (0x0004d48f) scroll_pane_cp19_ParamLimits

0xb66c,	// (0x0004d48f) scroll_pane_cp19

0xdc0c,	// (0x0004fa2f) bg_popup_window_pane_cp20

0xb680,	// (0x0004d4a3) listscroll_popup_fast_wide_pane

0xdc5a,	// (0x0004fa7d) grid_indicator_nsta_pane

0xb688,	// (0x0004d4ab) clock_nsta_pane_g1

0xb691,	// (0x0004d4b4) clock_nsta_pane_t1

0xb6ad,	// (0x0004d4d0) cell_indicator_nsta_pane_ParamLimits

0xb6ad,	// (0x0004d4d0) cell_indicator_nsta_pane

0xb6de,	// (0x0004d501) cell_indicator_nsta_pane_g1

0xb6ec,	// (0x0004d50f) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x000518d0) cell_indicator_nsta_pane_g

0xb6f9,	// (0x0004d51c) clock_nsta_pane_cp

0xb702,	// (0x0004d525) indicator_nsta_pane_cp

0xb70a,	// (0x0004d52d) nsta_clock_indic_pane_g1

0x0545,	// (0x00042368) grid_indicator_pane

0x22bd,	// (0x000440e0) scroll_pane_cp29

0x6d9c,	// (0x00048bbf) indicator_nsta_pane_cp2_ParamLimits

0x6d9c,	// (0x00048bbf) indicator_nsta_pane_cp2

0xdc5a,	// (0x0004fa7d) main_apps_wheel_pane

0x9902,	// (0x0004b725) form_midp_field_text_pane_ParamLimits

0x9a51,	// (0x0004b874) scroll_bar_cp050_ParamLimits

0xb75a,	// (0x0004d57d) cell_indicator_pane_ParamLimits

0xb75a,	// (0x0004d57d) cell_indicator_pane

0xb772,	// (0x0004d595) cell_indicator_pane_g1

0xb77c,	// (0x0004d59f) grid_wheel_folder_pane_ParamLimits

0xb77c,	// (0x0004d59f) grid_wheel_folder_pane

0xb790,	// (0x0004d5b3) list_wheel_apps_pane_ParamLimits

0xb790,	// (0x0004d5b3) list_wheel_apps_pane

0xb7a3,	// (0x0004d5c6) main_apps_wheel_pane_g1_ParamLimits

0xb7a3,	// (0x0004d5c6) main_apps_wheel_pane_g1

0xb7bf,	// (0x0004d5e2) main_apps_wheel_pane_g2_ParamLimits

0xb7bf,	// (0x0004d5e2) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x000518ec) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x000518ec) main_apps_wheel_pane_g

0xb7db,	// (0x0004d5fe) main_apps_wheel_pane_t1_ParamLimits

0xb7db,	// (0x0004d5fe) main_apps_wheel_pane_t1

0xb804,	// (0x0004d627) list_wheel_apps_pane_g1

0xb80c,	// (0x0004d62f) list_wheel_apps_pane_g2

0xb814,	// (0x0004d637) list_wheel_apps_pane_g3

0xb81c,	// (0x0004d63f) list_wheel_apps_pane_g4

0xb826,	// (0x0004d649) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x000518f1) list_wheel_apps_pane_g

0x4669,	// (0x0004648c) navi_icon_text_pane

0x9147,	// (0x0004af6a) aid_fill_nsta

0xb847,	// (0x0004d66a) navi_icon_text_pane_g1

0xb853,	// (0x0004d676) navi_icon_text_pane_t1

0x44ff,	// (0x00046322) list_set_graphic_pane_t1_ParamLimits

0x44ff,	// (0x00046322) list_set_graphic_pane_t1

0xa1b6,	// (0x0004bfd9) popup_midp_note_alarm_window_t6_ParamLimits

0xa1b6,	// (0x0004bfd9) popup_midp_note_alarm_window_t6

0xa1c8,	// (0x0004bfeb) popup_midp_note_alarm_window_t7_ParamLimits

0xa1c8,	// (0x0004bfeb) popup_midp_note_alarm_window_t7

0xa1da,	// (0x0004bffd) popup_midp_note_alarm_window_t8_ParamLimits

0xa1da,	// (0x0004bffd) popup_midp_note_alarm_window_t8

0xa1ec,	// (0x0004c00f) popup_midp_note_alarm_window_t9_ParamLimits

0xa1ec,	// (0x0004c00f) popup_midp_note_alarm_window_t9

0xa1fe,	// (0x0004c021) popup_midp_note_alarm_window_t10_ParamLimits

0xa1fe,	// (0x0004c021) popup_midp_note_alarm_window_t10

0xa210,	// (0x0004c033) popup_midp_note_alarm_window_t11_ParamLimits

0xa210,	// (0x0004c033) popup_midp_note_alarm_window_t11

0xa222,	// (0x0004c045) scroll_pane_cp17_ParamLimits

0xa222,	// (0x0004c045) scroll_pane_cp17

0x7869,	// (0x0004968c) volume_small_pane_cp_g1

0x7c58,	// (0x00049a7b) volume_small_pane_cp_g2

0x7c61,	// (0x00049a84) volume_small_pane_cp_g3

0x7c6a,	// (0x00049a8d) volume_small_pane_cp_g4

0x7c73,	// (0x00049a96) volume_small_pane_cp_g5

0x7c7c,	// (0x00049a9f) volume_small_pane_cp_g6

0x7c85,	// (0x00049aa8) volume_small_pane_cp_g7

0x7c8e,	// (0x00049ab1) volume_small_pane_cp_g8

0x7c97,	// (0x00049aba) volume_small_pane_cp_g9

0x7ca0,	// (0x00049ac3) volume_small_pane_cp_g10

0x8eba,	// (0x0004acdd) midp_ticker_pane_g1_ParamLimits

0x8ec6,	// (0x0004ace9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00051580) midp_ticker_pane_g_ParamLimits

0x8ed2,	// (0x0004acf5) midp_ticker_pane_t1_ParamLimits

0x915d,	// (0x0004af80) aid_fill_nsta_2

0x9a3d,	// (0x0004b860) list_form2_midp_pane

0xaba6,	// (0x0004c9c9) midp_editing_number_pane_ParamLimits

0xabb5,	// (0x0004c9d8) midp_ticker_pane_ParamLimits

0xb865,	// (0x0004d688) form2_midp_field_pane

0xb889,	// (0x0004d6ac) scroll_pane_cp51

0xb8a9,	// (0x0004d6cc) form2_midp_button_pane_ParamLimits

0xb8a9,	// (0x0004d6cc) form2_midp_button_pane

0xb8bb,	// (0x0004d6de) form2_midp_content_pane_ParamLimits

0xb8bb,	// (0x0004d6de) form2_midp_content_pane

0xb8d5,	// (0x0004d6f8) form2_midp_field_choice_group_pane

0xb8dd,	// (0x0004d700) form2_midp_field_pane_g1

0xb8e5,	// (0x0004d708) form2_midp_field_pane_g2

0xb8ed,	// (0x0004d710) form2_midp_field_pane_g3

0xb8f5,	// (0x0004d718) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00051916) form2_midp_field_pane_g

0xb8fd,	// (0x0004d720) form2_midp_gauge_slider_pane

0xb905,	// (0x0004d728) form2_midp_gauge_wait_pane

0xb90d,	// (0x0004d730) form2_midp_image_pane_ParamLimits

0xb90d,	// (0x0004d730) form2_midp_image_pane

0xb928,	// (0x0004d74b) form2_midp_label_pane_ParamLimits

0xb928,	// (0x0004d74b) form2_midp_label_pane

0xb947,	// (0x0004d76a) form2_midp_label_pane_cp_ParamLimits

0xb947,	// (0x0004d76a) form2_midp_label_pane_cp

0xb968,	// (0x0004d78b) form2_midp_string_pane_ParamLimits

0xb968,	// (0x0004d78b) form2_midp_string_pane

0x5d59,	// (0x00047b7c) form2_midp_text_pane_ParamLimits

0x5d59,	// (0x00047b7c) form2_midp_text_pane

0xb97a,	// (0x0004d79d) form2_midp_time_pane

0xb98a,	// (0x0004d7ad) input_focus_pane_cp51_ParamLimits

0xb98a,	// (0x0004d7ad) input_focus_pane_cp51

0xb9a2,	// (0x0004d7c5) form2_midp_label_pane_t1_ParamLimits

0xb9a2,	// (0x0004d7c5) form2_midp_label_pane_t1

0x5d7c,	// (0x00047b9f) form2_mdip_text_pane_t1_ParamLimits

0x5d7c,	// (0x00047b9f) form2_mdip_text_pane_t1

0x5d9b,	// (0x00047bbe) form2_midp_time_pane_t1

0xb9f0,	// (0x0004d813) form2_midp_gauge_slider_pane_t1

0xba02,	// (0x0004d825) form2_midp_gauge_slider_pane_t2

0xba14,	// (0x0004d837) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0005191f) form2_midp_gauge_slider_pane_t

0xba26,	// (0x0004d849) form2_midp_slider_pane

0xba32,	// (0x0004d855) form2_midp_gauge_wait_pane_t1

0xba40,	// (0x0004d863) form2_midp_wait_pane_ParamLimits

0xba40,	// (0x0004d863) form2_midp_wait_pane

0xba6b,	// (0x0004d88e) list_single_2graphic_pane_cp4_ParamLimits

0xba6b,	// (0x0004d88e) list_single_2graphic_pane_cp4

0x977e,	// (0x0004b5a1) list_single_midp_graphic_pane_cp_ParamLimits

0x977e,	// (0x0004b5a1) list_single_midp_graphic_pane_cp

0xdc0c,	// (0x0004fa2f) list_highlight_pane_cp20

0xba84,	// (0x0004d8a7) list_single_2graphic_pane_g1_cp4

0xb05c,	// (0x0004ce7f) list_single_2graphic_pane_g2_cp4

0xba8c,	// (0x0004d8af) list_single_2graphic_pane_t1_cp4

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp21

0xba9b,	// (0x0004d8be) list_single_midp_graphic_pane_g4_cp

0xbaaa,	// (0x0004d8cd) list_single_midp_graphic_pane_t1_cp

0xbabf,	// (0x0004d8e2) form2_mdip_string_pane_t1_ParamLimits

0xbabf,	// (0x0004d8e2) form2_mdip_string_pane_t1

0xdc0c,	// (0x0004fa2f) bg_wml_button_pane_cp2

0xdc02,	// (0x0004fa25) form2_midp_image_pane_g1

0x683a,	// (0x0004865d) list_double_large_graphic_pane_g5_ParamLimits

0x683a,	// (0x0004865d) list_double_large_graphic_pane_g5

0x8de4,	// (0x0004ac07) midp_form_pane_ParamLimits

0xdc5a,	// (0x0004fa7d) main_apps_wheel_pane_ParamLimits

0x74c2,	// (0x000492e5) popup_preview_window_ParamLimits

0x74c2,	// (0x000492e5) popup_preview_window

0x76a9,	// (0x000494cc) popup_touch_info_window_ParamLimits

0x76a9,	// (0x000494cc) popup_touch_info_window

0x76cb,	// (0x000494ee) popup_touch_menu_window_ParamLimits

0x76cb,	// (0x000494ee) popup_touch_menu_window

0xdbf8,	// (0x0004fa1b) bg_popup_sub_pane_cp6

0xbb5b,	// (0x0004d97e) list_touch_menu_pane

0xbb63,	// (0x0004d986) list_single_touch_menu_pane_ParamLimits

0xbb63,	// (0x0004d986) list_single_touch_menu_pane

0xbb7b,	// (0x0004d99e) list_single_touch_menu_pane_t1

0xdc5a,	// (0x0004fa7d) bg_popup_sub_pane_cp7_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_popup_sub_pane_cp7

0xbb89,	// (0x0004d9ac) heading_sub_pane

0xbb91,	// (0x0004d9b4) list_touch_info_pane_ParamLimits

0xbb91,	// (0x0004d9b4) list_touch_info_pane

0xbba0,	// (0x0004d9c3) list_single_touch_info_pane_ParamLimits

0xbba0,	// (0x0004d9c3) list_single_touch_info_pane

0xbbb2,	// (0x0004d9d5) list_single_touch_info_pane_t1

0xbbc0,	// (0x0004d9e3) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0005192d) list_single_touch_info_pane_t

0x8ddc,	// (0x0004abff) bg_popup_heading_pane_cp

0xbbce,	// (0x0004d9f1) heading_sub_pane_t1

0x96af,	// (0x0004b4d2) bg_popup_preview_window_pane_cp_ParamLimits

0x96af,	// (0x0004b4d2) bg_popup_preview_window_pane_cp

0xbb89,	// (0x0004d9ac) heading_preview_pane

0xbb91,	// (0x0004d9b4) list_preview_pane_ParamLimits

0xbb91,	// (0x0004d9b4) list_preview_pane

0xbbdc,	// (0x0004d9ff) popup_preview_window_g1

0xbba0,	// (0x0004d9c3) list_single_preview_pane_ParamLimits

0xbba0,	// (0x0004d9c3) list_single_preview_pane

0xbbe4,	// (0x0004da07) list_single_preview_pane_g1

0xbbec,	// (0x0004da0f) list_single_preview_pane_t1

0xbbb2,	// (0x0004d9d5) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00051932) list_single_preview_pane_t

0xbbfa,	// (0x0004da1d) bg_popup_heading_pane_cp2_ParamLimits

0xbbfa,	// (0x0004da1d) bg_popup_heading_pane_cp2

0xbc10,	// (0x0004da33) heading_preview_pane_g1

0xbc18,	// (0x0004da3b) heading_preview_pane_t1_ParamLimits

0xbc18,	// (0x0004da3b) heading_preview_pane_t1

0x055c,	// (0x0004237f) soft_indicator_pane_t1_ParamLimits

0x0aba,	// (0x000428dd) scroll_pane_ParamLimits

0x0ea7,	// (0x00042cca) scroll_sc2_left_pane

0x0e9e,	// (0x00042cc1) scroll_sc2_right_pane

0x0ec6,	// (0x00042ce9) scroll_bg_pane_g1_ParamLimits

0x0edb,	// (0x00042cfe) scroll_bg_pane_g2_ParamLimits

0x0ef3,	// (0x00042d16) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005150b) scroll_bg_pane_g_ParamLimits

0x0ec6,	// (0x00042ce9) scroll_handle_pane_g1_ParamLimits

0x0f15,	// (0x00042d38) scroll_handle_pane_g2_ParamLimits

0x0ef3,	// (0x00042d16) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00051512) scroll_handle_pane_g_ParamLimits

0x7109,	// (0x00048f2c) popup_choice_list_window_ParamLimits

0x7109,	// (0x00048f2c) popup_choice_list_window

0x9585,	// (0x0004b3a8) choice_list_pane

0x9607,	// (0x0004b42a) cell_toolbar_pane_t1

0x962f,	// (0x0004b452) toolbar_button_pane_ParamLimits

0xa6ec,	// (0x0004c50f) ai_gene_pane_1_t2_ParamLimits

0xa6ec,	// (0x0004c50f) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005173a) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005173a) ai_gene_pane_1_t

0xbc35,	// (0x0004da58) scroll_sc2_left_pane_g1

0xbc35,	// (0x0004da58) scroll_sc2_right_pane_g1

0x910b,	// (0x0004af2e) bg_popup_sub_pane_cp10

0xbc3f,	// (0x0004da62) list_choice_list_pane

0xac3c,	// (0x0004ca5f) list_single_choice_list_pane_ParamLimits

0xac3c,	// (0x0004ca5f) list_single_choice_list_pane

0xbc58,	// (0x0004da7b) list_single_choice_list_pane_g1

0x0c95,	// (0x00042ab8) list_single_choice_list_pane_t1_ParamLimits

0x0c95,	// (0x00042ab8) list_single_choice_list_pane_t1

0xbc60,	// (0x0004da83) choice_list_pane_g1

0xbc68,	// (0x0004da8b) choice_list_pane_t1

0xdbf8,	// (0x0004fa1b) input_focus_pane_cp11

0x0e13,	// (0x00042c36) title_pane_stacon_g2_ParamLimits

0x0e13,	// (0x00042c36) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000514f1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000514f1) title_pane_stacon_g

0x8ddc,	// (0x0004abff) cursor_press_pane

0x71c3,	// (0x00048fe6) popup_fep_hwr_window_ParamLimits

0x71c3,	// (0x00048fe6) popup_fep_hwr_window

0x724d,	// (0x00049070) popup_fep_vkb_window_ParamLimits

0x724d,	// (0x00049070) popup_fep_vkb_window

0xbc76,	// (0x0004da99) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0005195b) fep_vkb_side_pane_g_ParamLimits

0x7ce2,	// (0x00049b05) fep_hwr_candidate_pane_ParamLimits

0x7ce2,	// (0x00049b05) fep_hwr_candidate_pane

0x7d0c,	// (0x00049b2f) fep_hwr_side_pane_ParamLimits

0x7d0c,	// (0x00049b2f) fep_hwr_side_pane

0x7d2e,	// (0x00049b51) fep_hwr_top_pane_ParamLimits

0x7d2e,	// (0x00049b51) fep_hwr_top_pane

0x7d46,	// (0x00049b69) fep_hwr_write_pane_ParamLimits

0x7d46,	// (0x00049b69) fep_hwr_write_pane

0xfb38,	// (0x0005195b) fep_vkb_side_pane_g

0xbc7e,	// (0x0004daa1) fep_hwr_top_pane_g1

0xbc90,	// (0x0004dab3) fep_hwr_top_pane_g2

0x7d72,	// (0x00049b95) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00051937) fep_hwr_top_pane_g

0x7d87,	// (0x00049baa) fep_hwr_top_text_pane

0x409d,	// (0x00045ec0) fep_hwr_top_text_pane_g1

0xbcc6,	// (0x0004dae9) fep_hwr_top_text_pane_t1

0x7e91,	// (0x00049cb4) fep_hwr_candidate_pane_g1

0xbf11,	// (0x0004dd34) fep_vkb_keypad_pane_g3_ParamLimits

0xbf11,	// (0x0004dd34) fep_vkb_keypad_pane_g3

0xbf3d,	// (0x0004dd60) fep_vkb_keypad_pane_g4_ParamLimits

0xbf3d,	// (0x0004dd60) fep_vkb_keypad_pane_g4

0xbfb4,	// (0x0004ddd7) fep_vkb_bottom_pane_g2_ParamLimits

0xbfb4,	// (0x0004ddd7) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00051962) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00051962) fep_vkb_bottom_pane_g

0xbc35,	// (0x0004da58) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0005196c) cell_vkb_side_pane_g

0xc03f,	// (0x0004de62) cell_vkb_side_pane_t1

0xc04d,	// (0x0004de70) cell_vkb_side_pane_t1_copy1

0xbc35,	// (0x0004da58) bg_fep_vkb_candidate_pane_g2

0xc191,	// (0x0004dfb4) cell_vkb_candidate_pane_ParamLimits

0xbcd4,	// (0x0004daf7) aid_size_cell_vkb_ParamLimits

0xbcd4,	// (0x0004daf7) aid_size_cell_vkb

0xc191,	// (0x0004dfb4) cell_vkb_candidate_pane

0x7eab,	// (0x00049cce) bg_popup_fep_shadow_pane_g1

0xbd66,	// (0x0004db89) fep_vkb_bottom_pane_ParamLimits

0xbd66,	// (0x0004db89) fep_vkb_bottom_pane

0xbda3,	// (0x0004dbc6) fep_vkb_candidate_pane_ParamLimits

0xbda3,	// (0x0004dbc6) fep_vkb_candidate_pane

0xbdbf,	// (0x0004dbe2) fep_vkb_keypad_pane_ParamLimits

0xbdbf,	// (0x0004dbe2) fep_vkb_keypad_pane

0xbdf2,	// (0x0004dc15) fep_vkb_side_pane_ParamLimits

0xbdf2,	// (0x0004dc15) fep_vkb_side_pane

0xbe2e,	// (0x0004dc51) fep_vkb_top_pane_ParamLimits

0xbe2e,	// (0x0004dc51) fep_vkb_top_pane

0xbe6a,	// (0x0004dc8d) fep_vkb_top_pane_g1_ParamLimits

0xbe6a,	// (0x0004dc8d) fep_vkb_top_pane_g1

0xbe79,	// (0x0004dc9c) fep_vkb_top_pane_g2_ParamLimits

0xbe79,	// (0x0004dc9c) fep_vkb_top_pane_g2

0xbe88,	// (0x0004dcab) fep_vkb_top_pane_g3_ParamLimits

0xbe88,	// (0x0004dcab) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00051952) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00051952) fep_vkb_top_pane_g

0xbea6,	// (0x0004dcc9) fep_vkb_top_text_pane_ParamLimits

0xbea6,	// (0x0004dcc9) fep_vkb_top_text_pane

0xbeb7,	// (0x0004dcda) fep_vkb_side_pane_g1_ParamLimits

0xbeb7,	// (0x0004dcda) fep_vkb_side_pane_g1

0xbf00,	// (0x0004dd23) grid_vkb_side_pane_ParamLimits

0xbf00,	// (0x0004dd23) grid_vkb_side_pane

0x7eb3,	// (0x00049cd6) bg_popup_fep_shadow_pane_g2

0x7ebc,	// (0x00049cdf) bg_popup_fep_shadow_pane_g3

0x7ec4,	// (0x00049ce7) bg_popup_fep_shadow_pane_g4

0x7ecd,	// (0x00049cf0) bg_popup_fep_shadow_pane_g5

0x7ed7,	// (0x00049cfa) bg_popup_fep_shadow_pane_g6

0x7edf,	// (0x00049d02) bg_popup_fep_shadow_pane_g7

0x0bbf,	// (0x000429e2) bg_popup_fep_shadow_pane_g8

0xbf5f,	// (0x0004dd82) grid_vkb_keypad_number_pane_ParamLimits

0xbf5f,	// (0x0004dd82) grid_vkb_keypad_number_pane

0xbf73,	// (0x0004dd96) grid_vkb_keypad_pane_ParamLimits

0xbf73,	// (0x0004dd96) grid_vkb_keypad_pane

0xbf99,	// (0x0004ddbc) fep_vkb_bottom_pane_g1_ParamLimits

0xbf99,	// (0x0004ddbc) fep_vkb_bottom_pane_g1

0xbfc2,	// (0x0004dde5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbfc2,	// (0x0004dde5) grid_vkb_keypad_bottom_left_pane

0xbfd7,	// (0x0004ddfa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbfd7,	// (0x0004ddfa) grid_vkb_keypad_bottom_right_pane

0xbfec,	// (0x0004de0f) fep_vkb_top_text_pane_g1

0xc007,	// (0x0004de2a) fep_vkb_top_text_pane_t1

0xc01c,	// (0x0004de3f) cell_vkb_side_pane_ParamLimits

0xc01c,	// (0x0004de3f) cell_vkb_side_pane

0xbc35,	// (0x0004da58) cell_vkb_side_pane_g1

0xc05b,	// (0x0004de7e) cell_vkb_keypad_pane_ParamLimits

0xc05b,	// (0x0004de7e) cell_vkb_keypad_pane

0xc0e8,	// (0x0004df0b) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0005197f) bg_popup_fep_shadow_pane_g

0xbc35,	// (0x0004da58) cell_hwr_side_pane_g1

0xbc35,	// (0x0004da58) cell_hwr_side_pane_g2

0xc0f2,	// (0x0004df15) cell_vkb_keypad_pane_t1

0xc100,	// (0x0004df23) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc100,	// (0x0004df23) cell_vkb_keypad_bottom_left_pane

0xc11d,	// (0x0004df40) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc11d,	// (0x0004df40) cell_vkb_keypad_bottom_right_pane

0xbc35,	// (0x0004da58) cell_vkb_keypad_bottom_left_pane_g1

0xbc35,	// (0x0004da58) cell_vkb_keypad_bottom_right_pane_g1

0xc156,	// (0x0004df79) cell_vkb_keypad_number_pane_ParamLimits

0xc156,	// (0x0004df79) cell_vkb_keypad_number_pane

0xc175,	// (0x0004df98) cell_vkb_keypad_number_pane_g1

0xc17f,	// (0x0004dfa2) cell_vkb_keypad_number_pane_g2

0xc188,	// (0x0004dfab) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00051971) cell_vkb_keypad_number_pane_g

0xc0f2,	// (0x0004df15) cell_vkb_keypad_number_pane_t1

0xc1b2,	// (0x0004dfd5) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x0005196c) cell_hwr_side_pane_g

0xc1cb,	// (0x0004dfee) cell_hwr_side_pane_t1

0x7ef1,	// (0x00049d14) cell_hwr_side_pane_t1_copy1

0xbe98,	// (0x0004dcbb) cell_hwr_candidate_pane_g1

0x7eff,	// (0x00049d22) cell_hwr_candidate_pane_t1

0xbc35,	// (0x0004da58) cell_vkb_candidate_pane_g2

0xc251,	// (0x0004e074) cell_vkb_candidate_pane_t1

0x7ca9,	// (0x00049acc) bg_popup_fep_shadow_pane_ParamLimits

0x7ca9,	// (0x00049acc) bg_popup_fep_shadow_pane

0x2081,	// (0x00043ea4) bg_fep_hwr_top_pane_g4

0xbca2,	// (0x0004dac5) bg_hwr_side_pane_g1_ParamLimits

0xbca2,	// (0x0004dac5) bg_hwr_side_pane_g1

0x7dc5,	// (0x00049be8) cell_hwr_side_pane_ParamLimits

0x7dc5,	// (0x00049be8) cell_hwr_side_pane

0x7e02,	// (0x00049c25) fep_hwr_write_pane_g1_ParamLimits

0x7e02,	// (0x00049c25) fep_hwr_write_pane_g1

0x7e0f,	// (0x00049c32) fep_hwr_write_pane_g2_ParamLimits

0x7e0f,	// (0x00049c32) fep_hwr_write_pane_g2

0x7e1c,	// (0x00049c3f) fep_hwr_write_pane_g3_ParamLimits

0x7e1c,	// (0x00049c3f) fep_hwr_write_pane_g3

0x7e2a,	// (0x00049c4d) fep_hwr_write_pane_g4_ParamLimits

0x7e2a,	// (0x00049c4d) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0005193e) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0005193e) fep_hwr_write_pane_g

0x2081,	// (0x00043ea4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2081,	// (0x00043ea4) bg_fep_hwr_candidate_pane_g2

0x7e3f,	// (0x00049c62) cell_hwr_candidate_pane_ParamLimits

0x7e3f,	// (0x00049c62) cell_hwr_candidate_pane

0x7e91,	// (0x00049cb4) fep_hwr_candidate_pane_g1_ParamLimits

0xbd02,	// (0x0004db25) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd02,	// (0x0004db25) bg_popup_fep_shadow_pane_cp2

0xbe98,	// (0x0004dcbb) fep_vkb_top_pane_g4_ParamLimits

0xbe98,	// (0x0004dcbb) fep_vkb_top_pane_g4

0xbede,	// (0x0004dd01) fep_vkb_side_pane_g2_ParamLimits

0xbede,	// (0x0004dd01) fep_vkb_side_pane_g2

0x551a,	// (0x0004733d) list_setting_pane_t4_ParamLimits

0x551a,	// (0x0004733d) list_setting_pane_t4

0x55b6,	// (0x000473d9) list_setting_number_pane_t5_ParamLimits

0x55b6,	// (0x000473d9) list_setting_number_pane_t5

0x6bd5,	// (0x000489f8) list_double_heading_pane_cp2_ParamLimits

0x6bd5,	// (0x000489f8) list_double_heading_pane_cp2

0xc25f,	// (0x0004e082) list_double_heading_pane_g1_cp2_ParamLimits

0xc25f,	// (0x0004e082) list_double_heading_pane_g1_cp2

0xc26b,	// (0x0004e08e) list_double_heading_pane_g2_cp2_ParamLimits

0xc26b,	// (0x0004e08e) list_double_heading_pane_g2_cp2

0xc27f,	// (0x0004e0a2) list_double_heading_pane_t1_cp2_ParamLimits

0xc27f,	// (0x0004e0a2) list_double_heading_pane_t1_cp2

0xc295,	// (0x0004e0b8) list_double_heading_pane_t2_cp2_ParamLimits

0xc295,	// (0x0004e0b8) list_double_heading_pane_t2_cp2

0xdbf0,	// (0x0004fa13) aid_value_unit2

0x6322,	// (0x00048145) popup_preview_fixed_window

0x063c,	// (0x0004245f) bg_popup_preview_window_pane_cp02

0xc2a7,	// (0x0004e0ca) list_preview_fixed_pane

0xc2ed,	// (0x0004e110) list_empty_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_empty_pane_fp

0xc2ed,	// (0x0004e110) list_single_cale_day_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_cale_day_pane_fp

0xc2ed,	// (0x0004e110) list_single_graphic_heading_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_graphic_heading_pane_fp

0xc2ed,	// (0x0004e110) list_single_graphic_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_graphic_pane_fp

0xc2ed,	// (0x0004e110) list_single_heading_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_heading_pane_fp

0xc2ed,	// (0x0004e110) list_single_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_pane_fp

0xc306,	// (0x0004e129) list_single_pane_fp_g1_ParamLimits

0xc306,	// (0x0004e129) list_single_pane_fp_g1

0xc25f,	// (0x0004e082) list_single_pane_fp_g2_ParamLimits

0xc25f,	// (0x0004e082) list_single_pane_fp_g2

0xc26b,	// (0x0004e08e) list_single_pane_fp_g3_ParamLimits

0xc26b,	// (0x0004e08e) list_single_pane_fp_g3

0xc312,	// (0x0004e135) list_single_pane_fp_g4_ParamLimits

0xc312,	// (0x0004e135) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x000519a0) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x000519a0) list_single_pane_fp_g

0x5dae,	// (0x00047bd1) list_single_pane_fp_t1_ParamLimits

0x5dae,	// (0x00047bd1) list_single_pane_fp_t1

0x5dc5,	// (0x00047be8) list_single_graphic_pane_fp_g1_ParamLimits

0x5dc5,	// (0x00047be8) list_single_graphic_pane_fp_g1

0xc306,	// (0x0004e129) list_single_graphic_pane_fp_g2_ParamLimits

0xc306,	// (0x0004e129) list_single_graphic_pane_fp_g2

0xc25f,	// (0x0004e082) list_single_graphic_pane_fp_g3_ParamLimits

0xc25f,	// (0x0004e082) list_single_graphic_pane_fp_g3

0xc26b,	// (0x0004e08e) list_single_graphic_pane_fp_g4_ParamLimits

0xc26b,	// (0x0004e08e) list_single_graphic_pane_fp_g4

0xc312,	// (0x0004e135) list_single_graphic_pane_fp_g5_ParamLimits

0xc312,	// (0x0004e135) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x000519a9) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x000519a9) list_single_graphic_pane_fp_g

0x5dd1,	// (0x00047bf4) list_single_graphic_pane_fp_t1_ParamLimits

0x5dd1,	// (0x00047bf4) list_single_graphic_pane_fp_t1

0x5dc5,	// (0x00047be8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5dc5,	// (0x00047be8) list_single_graphic_heading_pane_fp_g1

0xc306,	// (0x0004e129) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc306,	// (0x0004e129) list_single_graphic_heading_pane_fp_g2

0xc25f,	// (0x0004e082) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc25f,	// (0x0004e082) list_single_graphic_heading_pane_fp_g3

0xc26b,	// (0x0004e08e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc26b,	// (0x0004e08e) list_single_graphic_heading_pane_fp_g4

0xc312,	// (0x0004e135) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc312,	// (0x0004e135) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x000519a9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x000519a9) list_single_graphic_heading_pane_fp_g

0x5de7,	// (0x00047c0a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5de7,	// (0x00047c0a) list_single_graphic_heading_pane_fp_t1

0x5dfd,	// (0x00047c20) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5dfd,	// (0x00047c20) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x000519b4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x000519b4) list_single_graphic_heading_pane_fp_t

0x5e0f,	// (0x00047c32) list_single_cale_day_pane_fp_g1_ParamLimits

0x5e0f,	// (0x00047c32) list_single_cale_day_pane_fp_g1

0xc31e,	// (0x0004e141) list_single_cale_day_pane_fp_g2_ParamLimits

0xc31e,	// (0x0004e141) list_single_cale_day_pane_fp_g2

0x7f1d,	// (0x00049d40) list_single_cale_day_pane_fp_g3_ParamLimits

0x7f1d,	// (0x00049d40) list_single_cale_day_pane_fp_g3

0x7f45,	// (0x00049d68) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f45,	// (0x00049d68) list_single_cale_day_pane_fp_g4

0x7f69,	// (0x00049d8c) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f69,	// (0x00049d8c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x000519b9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x000519b9) list_single_cale_day_pane_fp_g

0x5e47,	// (0x00047c6a) list_single_cale_day_pane_fp_t1_ParamLimits

0x5e47,	// (0x00047c6a) list_single_cale_day_pane_fp_t1

0x5e6d,	// (0x00047c90) list_single_cale_day_pane_fp_t2_ParamLimits

0x5e6d,	// (0x00047c90) list_single_cale_day_pane_fp_t2

0x5e86,	// (0x00047ca9) list_single_cale_day_pane_fp_t3_ParamLimits

0x5e86,	// (0x00047ca9) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x000519c4) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x000519c4) list_single_cale_day_pane_fp_t

0xc306,	// (0x0004e129) list_empty_pane_fp_g1_ParamLimits

0xc306,	// (0x0004e129) list_empty_pane_fp_g1

0x5e9f,	// (0x00047cc2) list_empty_pane_fp_t1

0x5ead,	// (0x00047cd0) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x000519cb) list_empty_pane_fp_t

0xc306,	// (0x0004e129) list_single_heading_pane_fp_g1_ParamLimits

0xc306,	// (0x0004e129) list_single_heading_pane_fp_g1

0xc25f,	// (0x0004e082) list_single_heading_pane_fp_g2_ParamLimits

0xc25f,	// (0x0004e082) list_single_heading_pane_fp_g2

0xc26b,	// (0x0004e08e) list_single_heading_pane_fp_g3_ParamLimits

0xc26b,	// (0x0004e08e) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x000519d0) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x000519d0) list_single_heading_pane_fp_g

0x5ebb,	// (0x00047cde) list_single_heading_pane_fp_t1_ParamLimits

0x5ebb,	// (0x00047cde) list_single_heading_pane_fp_t1

0x5ecd,	// (0x00047cf0) list_single_heading_pane_fp_t2_ParamLimits

0x5ecd,	// (0x00047cf0) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x000519d7) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x000519d7) list_single_heading_pane_fp_t

0x0caa,	// (0x00042acd) aid_size_cell_fast

0x061f,	// (0x00042442) soft_indicator_pane_cp1_t1

0x0ce7,	// (0x00042b0a) cell_app_pane_cp2_ParamLimits

0x0ce7,	// (0x00042b0a) cell_app_pane_cp2

0x7ccb,	// (0x00049aee) fep_hwr_candidate_drop_down_list_pane

0x208f,	// (0x00043eb2) fep_hwr_candidate_pane_g3_ParamLimits

0x208f,	// (0x00043eb2) fep_hwr_candidate_pane_g3

0x209c,	// (0x00043ebf) fep_hwr_candidate_pane_g4_ParamLimits

0x209c,	// (0x00043ebf) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0005194b) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0005194b) fep_hwr_candidate_pane_g

0xbd92,	// (0x0004dbb5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbd92,	// (0x0004dbb5) fep_vkb_candidate_drop_down_list_pane

0xc1ba,	// (0x0004dfdd) fep_vkb_candidate_pane_g3

0xc1c2,	// (0x0004dfe5) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00051978) fep_vkb_candidate_pane_g

0xbe98,	// (0x0004dcbb) cell_hwr_candidate_pane_g1_ParamLimits

0xc1d9,	// (0x0004dffc) cell_hwr_candidate_pane_g3_ParamLimits

0xc1d9,	// (0x0004dffc) cell_hwr_candidate_pane_g3

0xc1fa,	// (0x0004e01d) cell_hwr_candidate_pane_g4_ParamLimits

0xc1fa,	// (0x0004e01d) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00051992) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00051992) cell_hwr_candidate_pane_g

0xc21b,	// (0x0004e03e) cell_vkb_candidate_pane_g3_ParamLimits

0xc21b,	// (0x0004e03e) cell_vkb_candidate_pane_g3

0xc236,	// (0x0004e059) cell_vkb_candidate_pane_g4_ParamLimits

0xc236,	// (0x0004e059) cell_vkb_candidate_pane_g4

0xc32a,	// (0x0004e14d) cell_app_pane_cp2_g1_ParamLimits

0xc32a,	// (0x0004e14d) cell_app_pane_cp2_g1

0xc348,	// (0x0004e16b) cell_app_pane_cp2_g2_ParamLimits

0xc348,	// (0x0004e16b) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x000519dc) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x000519dc) cell_app_pane_cp2_g

0xc354,	// (0x0004e177) cell_app_pane_cp2_t1_ParamLimits

0xc354,	// (0x0004e177) cell_app_pane_cp2_t1

0x0b47,	// (0x0004296a) grid_highlight_pane_cp1_ParamLimits

0x0b47,	// (0x0004296a) grid_highlight_pane_cp1

0x7f8d,	// (0x00049db0) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f8d,	// (0x00049db0) cell_hwr_candidate_pane_cp1

0xbe98,	// (0x0004dcbb) fep_hwr_candidate_drop_down_list_pane_g1

0xc366,	// (0x0004e189) fep_hwr_candidate_drop_down_list_pane_g2

0xc373,	// (0x0004e196) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x000519e1) fep_hwr_candidate_drop_down_list_pane_g

0x7fb1,	// (0x00049dd4) fep_hwr_candidate_drop_down_list_scroll_pane

0x7fba,	// (0x00049ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7fba,	// (0x00049ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7fc7,	// (0x00049dea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fc7,	// (0x00049dea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7fd4,	// (0x00049df7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fd4,	// (0x00049df7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc21b,	// (0x0004e03e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc21b,	// (0x0004e03e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc236,	// (0x0004e059) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc236,	// (0x0004e059) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7fe1,	// (0x00049e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7fe1,	// (0x00049e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7ffc,	// (0x00049e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ffc,	// (0x00049e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8017,	// (0x00049e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8017,	// (0x00049e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x000519e8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x000519e8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc380,	// (0x0004e1a3) cell_vkb_candidate_pane_cp1_ParamLimits

0xc380,	// (0x0004e1a3) cell_vkb_candidate_pane_cp1

0xbe98,	// (0x0004dcbb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) fep_vkb_candidate_drop_down_list_pane_g1

0xc366,	// (0x0004e189) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc366,	// (0x0004e189) fep_vkb_candidate_drop_down_list_pane_g2

0xc373,	// (0x0004e196) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc373,	// (0x0004e196) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x000519e1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x000519e1) fep_vkb_candidate_drop_down_list_pane_g

0xc3a6,	// (0x0004e1c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc3a6,	// (0x0004e1c9) fep_vkb_candidate_drop_down_list_scroll_pane

0xc3b3,	// (0x0004e1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc3b3,	// (0x0004e1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc3c0,	// (0x0004e1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc3c0,	// (0x0004e1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc3cc,	// (0x0004e1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc3cc,	// (0x0004e1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc1d9,	// (0x0004dffc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc1d9,	// (0x0004dffc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc1fa,	// (0x0004e01d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1fa,	// (0x0004e01d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc3d8,	// (0x0004e1fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc3d8,	// (0x0004e1fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc3f9,	// (0x0004e21c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3f9,	// (0x0004e21c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc41a,	// (0x0004e23d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc41a,	// (0x0004e23d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x000519f9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x000519f9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6442,	// (0x00048265) title_pane_g1_ParamLimits

0x644f,	// (0x00048272) title_pane_g2_ParamLimits

0xf54e,	// (0x00051371) title_pane_g_ParamLimits

0x4095,	// (0x00045eb8) aid_call2_pane

0x408d,	// (0x00045eb0) aid_call_pane

0x409d,	// (0x00045ec0) popup_clock_analogue_window_g1

0x409d,	// (0x00045ec0) popup_clock_analogue_window_g2

0x6bb6,	// (0x000489d9) popup_clock_analogue_window_g3

0x6bbf,	// (0x000489e2) popup_clock_analogue_window_g4

0xdc02,	// (0x0004fa25) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00051520) popup_clock_analogue_window_g

0x6bc7,	// (0x000489ea) popup_clock_analogue_window_t1

0x6c08,	// (0x00048a2b) clock_digital_number_pane_ParamLimits

0x6c08,	// (0x00048a2b) clock_digital_number_pane

0x6c14,	// (0x00048a37) clock_digital_number_pane_cp02_ParamLimits

0x6c14,	// (0x00048a37) clock_digital_number_pane_cp02

0x6c20,	// (0x00048a43) clock_digital_number_pane_cp03_ParamLimits

0x6c20,	// (0x00048a43) clock_digital_number_pane_cp03

0x6c2c,	// (0x00048a4f) clock_digital_number_pane_cp04_ParamLimits

0x6c2c,	// (0x00048a4f) clock_digital_number_pane_cp04

0x6c38,	// (0x00048a5b) clock_digital_separator_pane_ParamLimits

0x6c38,	// (0x00048a5b) clock_digital_separator_pane

0x6c44,	// (0x00048a67) popup_clock_digital_window_t1_ParamLimits

0x6c44,	// (0x00048a67) popup_clock_digital_window_t1

0xdc02,	// (0x0004fa25) clock_digital_number_pane_g1

0xdc02,	// (0x0004fa25) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005152b) clock_digital_number_pane_g

0xdc02,	// (0x0004fa25) clock_digital_separator_pane_g1

0xdc02,	// (0x0004fa25) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005152b) clock_digital_separator_pane_g

0x9147,	// (0x0004af6a) aid_fill_nsta_ParamLimits

0x928d,	// (0x0004b0b0) indicator_nsta_pane_ParamLimits

0x941e,	// (0x0004b241) popup_clock_analogue_window

0x941e,	// (0x0004b241) popup_clock_digital_window

0xdc5a,	// (0x0004fa7d) grid_indicator_nsta_pane_ParamLimits

0xb69f,	// (0x0004d4c2) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x000518cb) clock_nsta_pane_t

0x6b1f,	// (0x00048942) aid_size_max_handle

0x6b29,	// (0x0004894c) aid_size_min_handle

0x8ddc,	// (0x0004abff) editor_scroll_pane

0xc435,	// (0x0004e258) ex_editor_pane

0x0c70,	// (0x00042a93) scroll_pane_cp13

0x0ae6,	// (0x00042909) scroll_pane_cp14

0x40eb,	// (0x00045f0e) scroll_pane_cp36

0x6beb,	// (0x00048a0e) list_single_graphic_hl_pane_cp2_ParamLimits

0x6beb,	// (0x00048a0e) list_single_graphic_hl_pane_cp2

0xabd7,	// (0x0004c9fa) list_single_graphic_hl_pane_ParamLimits

0xabd7,	// (0x0004c9fa) list_single_graphic_hl_pane

0x5ee3,	// (0x00047d06) aid_size_min_hl_cp1

0xc43d,	// (0x0004e260) list_highlight_pane_cp34_ParamLimits

0xc43d,	// (0x0004e260) list_highlight_pane_cp34

0xc44e,	// (0x0004e271) list_single_graphic_hl_pane_g1_ParamLimits

0xc44e,	// (0x0004e271) list_single_graphic_hl_pane_g1

0x5eec,	// (0x00047d0f) list_single_graphic_hl_pane_g2_ParamLimits

0x5eec,	// (0x00047d0f) list_single_graphic_hl_pane_g2

0x5eec,	// (0x00047d0f) list_single_graphic_hl_pane_g3_ParamLimits

0x5eec,	// (0x00047d0f) list_single_graphic_hl_pane_g3

0x7bba,	// (0x000499dd) list_single_graphic_hl_pane_g4_ParamLimits

0x7bba,	// (0x000499dd) list_single_graphic_hl_pane_g4

0x8032,	// (0x00049e55) list_single_graphic_hl_pane_g5_ParamLimits

0x8032,	// (0x00049e55) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00051a0a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00051a0a) list_single_graphic_hl_pane_g

0x5ef8,	// (0x00047d1b) list_single_graphic_hl_pane_t1_ParamLimits

0x5ef8,	// (0x00047d1b) list_single_graphic_hl_pane_t1

0xc45b,	// (0x0004e27e) aid_size_min_hl_cp2

0xc464,	// (0x0004e287) list_highlight_pane_cp34_cp2_ParamLimits

0xc464,	// (0x0004e287) list_highlight_pane_cp34_cp2

0xc44e,	// (0x0004e271) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc44e,	// (0x0004e271) list_single_graphic_hl_pane_g1_cp2

0xc471,	// (0x0004e294) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc471,	// (0x0004e294) list_single_graphic_hl_pane_g2_cp2

0xc47d,	// (0x0004e2a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc47d,	// (0x0004e2a0) list_single_graphic_hl_pane_g3_cp2

0xc48b,	// (0x0004e2ae) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc48b,	// (0x0004e2ae) list_single_graphic_hl_pane_g4_cp2

0xc497,	// (0x0004e2ba) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc497,	// (0x0004e2ba) list_single_graphic_hl_pane_g5_cp2

0x6fbb,	// (0x00048dde) control_pane_g4_ParamLimits

0x6fbb,	// (0x00048dde) control_pane_g4

0x910b,	// (0x0004af2e) bg_popup_sub_pane_cp10_ParamLimits

0xbc3f,	// (0x0004da62) list_choice_list_pane_ParamLimits

0xbc4e,	// (0x0004da71) scroll_pane_cp23

0x063c,	// (0x0004245f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2a7,	// (0x0004e0ca) list_preview_fixed_pane_ParamLimits

0xc2bd,	// (0x0004e0e0) list_preview_fixed_pane_cp_ParamLimits

0xc2bd,	// (0x0004e0e0) list_preview_fixed_pane_cp

0xc2c9,	// (0x0004e0ec) popup_preview_fixed_window_g1_ParamLimits

0xc2c9,	// (0x0004e0ec) popup_preview_fixed_window_g1

0xc2d5,	// (0x0004e0f8) popup_preview_fixed_window_g2_ParamLimits

0xc2d5,	// (0x0004e0f8) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00051999) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00051999) popup_preview_fixed_window_g

0x69f5,	// (0x00048818) aid_navi_side_left_pane_ParamLimits

0x6a0a,	// (0x0004882d) aid_navi_side_right_pane_ParamLimits

0x6a22,	// (0x00048845) navi_icon_pane_stacon_ParamLimits

0x6a36,	// (0x00048859) navi_navi_pane_stacon_ParamLimits

0x6a22,	// (0x00048845) navi_text_pane_stacon_ParamLimits

0xdbf8,	// (0x0004fa1b) main_text_info_pane

0xc4c1,	// (0x0004e2e4) listscroll_text_info_pane

0xc4c9,	// (0x0004e2ec) list_text_info_pane_ParamLimits

0xc4c9,	// (0x0004e2ec) list_text_info_pane

0xc4d8,	// (0x0004e2fb) scroll_pane_cp24_ParamLimits

0xc4d8,	// (0x0004e2fb) scroll_pane_cp24

0xc4f6,	// (0x0004e319) list_text_info_pane_t1_ParamLimits

0xc4f6,	// (0x0004e319) list_text_info_pane_t1

0x712b,	// (0x00048f4e) popup_fast_swap2_window_ParamLimits

0x712b,	// (0x00048f4e) popup_fast_swap2_window

0xc51b,	// (0x0004e33e) aid_size_cell_fast2

0xdbf8,	// (0x0004fa1b) bg_popup_window_pane_cp17

0x9a71,	// (0x0004b894) heading_pane_cp2

0x086b,	// (0x0004268e) listscroll_fast2_pane

0xc525,	// (0x0004e348) grid_fast2_pane

0xc52f,	// (0x0004e352) listscroll_fast2_pane_g1

0xc539,	// (0x0004e35c) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00051a15) listscroll_fast2_pane_g

0x0c70,	// (0x00042a93) scroll_pane_cp26

0xc543,	// (0x0004e366) cell_fast2_pane_ParamLimits

0xc543,	// (0x0004e366) cell_fast2_pane

0xc55a,	// (0x0004e37d) cell_fast2_pane_g1

0xc563,	// (0x0004e386) cell_fast2_pane_g2

0xc56c,	// (0x0004e38f) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00051a1a) cell_fast2_pane_g

0x08ad,	// (0x000426d0) grid_highlight_pane_cp9

0x08c2,	// (0x000426e5) main_eswt_pane_ParamLimits

0x08c2,	// (0x000426e5) main_eswt_pane

0xc4ed,	// (0x0004e310) list_single_text_info_pane

0xc574,	// (0x0004e397) eswt_ctrl_button_pane

0xc574,	// (0x0004e397) eswt_ctrl_canvas_pane

0xc57c,	// (0x0004e39f) eswt_ctrl_combo_pane

0xc574,	// (0x0004e397) eswt_ctrl_default_pane

0xc574,	// (0x0004e397) eswt_ctrl_label_pane

0xc584,	// (0x0004e3a7) eswt_ctrl_wait_pane

0xc58c,	// (0x0004e3af) eswt_shell_pane

0xdbf8,	// (0x0004fa1b) listscroll_eswt_app_pane

0xc5ac,	// (0x0004e3cf) popup_eswt_tasktip_window_ParamLimits

0xc5ac,	// (0x0004e3cf) popup_eswt_tasktip_window

0x96af,	// (0x0004b4d2) bg_popup_window_pane_cp18

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_ParamLimits

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_ParamLimits

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_ParamLimits

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_ParamLimits

0xc5e4,	// (0x0004e407) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00051a21) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00051a21) eswt_control_pane_g

0x0b47,	// (0x0004296a) bg_button_pane_ParamLimits

0x0b47,	// (0x0004296a) bg_button_pane

0x08c2,	// (0x000426e5) common_borders_pane_copy2_ParamLimits

0x08c2,	// (0x000426e5) common_borders_pane_copy2

0xc5f1,	// (0x0004e414) control_button_pane_g1_ParamLimits

0xc5f1,	// (0x0004e414) control_button_pane_g1

0xc5fd,	// (0x0004e420) control_button_pane_g2_ParamLimits

0xc5fd,	// (0x0004e420) control_button_pane_g2

0xc609,	// (0x0004e42c) control_button_pane_g3_ParamLimits

0xc609,	// (0x0004e42c) control_button_pane_g3

0x0002,

0xfc07,	// (0x00051a2a) control_button_pane_g_ParamLimits

0xfc07,	// (0x00051a2a) control_button_pane_g

0xc61d,	// (0x0004e440) control_button_pane_t1

0xc62b,	// (0x0004e44e) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00051a31) control_button_pane_t

0x963b,	// (0x0004b45e) bg_button_pane_g1

0x9643,	// (0x0004b466) bg_button_pane_g2

0x964b,	// (0x0004b46e) bg_button_pane_g3

0x9653,	// (0x0004b476) bg_button_pane_g4

0x965b,	// (0x0004b47e) bg_button_pane_g5

0x9663,	// (0x0004b486) bg_button_pane_g6

0x966b,	// (0x0004b48e) bg_button_pane_g7

0x9673,	// (0x0004b496) bg_button_pane_g8

0x967b,	// (0x0004b49e) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0005168e) bg_button_pane_g

0xbbfa,	// (0x0004da1d) common_borders_pane_ParamLimits

0xbbfa,	// (0x0004da1d) common_borders_pane

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy1_ParamLimits

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy1

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy1_ParamLimits

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy1

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy1_ParamLimits

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy1

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy1_ParamLimits

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy1

0xbc35,	// (0x0004da58) bg_eswt_ctrl_canvas_pane_g1

0xbbfa,	// (0x0004da1d) common_borders_pane_cp2_ParamLimits

0xbbfa,	// (0x0004da1d) common_borders_pane_cp2

0xbbfa,	// (0x0004da1d) common_borders_pane_cp3_ParamLimits

0xbbfa,	// (0x0004da1d) common_borders_pane_cp3

0xc639,	// (0x0004e45c) separator_horizontal_pane

0xc641,	// (0x0004e464) separator_vertical_pane

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy2_ParamLimits

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy2

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy2_ParamLimits

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy2

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy2_ParamLimits

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy2

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy2_ParamLimits

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy2

0xdbf8,	// (0x0004fa1b) common_borders_pane_cp4

0xc64a,	// (0x0004e46d) separator_horizontal_pane_g1

0xc653,	// (0x0004e476) separator_horizontal_pane_g2

0xc65c,	// (0x0004e47f) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00051a36) separator_horizontal_pane_g

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy3_ParamLimits

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy3

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy3_ParamLimits

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy3

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy3_ParamLimits

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy3

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy3_ParamLimits

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy3

0xdbf8,	// (0x0004fa1b) common_borders_pane_cp5

0xc665,	// (0x0004e488) separator_vertical_pane_g1

0xc66e,	// (0x0004e491) separator_vertical_pane_g2

0xc677,	// (0x0004e49a) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00051a3d) separator_vertical_pane_g

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy4_ParamLimits

0xc5bd,	// (0x0004e3e0) eswt_control_pane_g1_copy4

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy4_ParamLimits

0xc5ca,	// (0x0004e3ed) eswt_control_pane_g2_copy4

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy4_ParamLimits

0xc5d7,	// (0x0004e3fa) eswt_control_pane_g3_copy4

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy4_ParamLimits

0xc5e4,	// (0x0004e407) eswt_control_pane_g4_copy4

0xc680,	// (0x0004e4a3) eswt_ctrl_combo_button_pane

0xc688,	// (0x0004e4ab) eswt_ctrl_input_pane

0xc690,	// (0x0004e4b3) popup_choice_list_window_cp70

0xc698,	// (0x0004e4bb) eswt_ctrl_input_pane_t1

0xdbf8,	// (0x0004fa1b) input_focus_pane_cp70

0xbbfa,	// (0x0004da1d) bg_button_pane_cp70_ParamLimits

0xbbfa,	// (0x0004da1d) bg_button_pane_cp70

0xc6a6,	// (0x0004e4c9) eswt_ctrl_combo_button_pane_g1

0xc6ae,	// (0x0004e4d1) wait_bar_pane_cp70

0x96af,	// (0x0004b4d2) bg_popup_window_pane_cp70_ParamLimits

0x96af,	// (0x0004b4d2) bg_popup_window_pane_cp70

0xc6b6,	// (0x0004e4d9) popup_eswt_tasktip_window_t1

0xc6cc,	// (0x0004e4ef) wait_bar_pane_cp71_ParamLimits

0xc6cc,	// (0x0004e4ef) wait_bar_pane_cp71

0xc6d8,	// (0x0004e4fb) grid_eswt_app_pane

0x0e9e,	// (0x00042cc1) scroll_pane_cp70

0xc6e1,	// (0x0004e504) cell_eswt_app_pane_ParamLimits

0xc6e1,	// (0x0004e504) cell_eswt_app_pane

0xc713,	// (0x0004e536) cell_eswt_app_pane_g1_ParamLimits

0xc713,	// (0x0004e536) cell_eswt_app_pane_g1

0xc742,	// (0x0004e565) cell_eswt_app_pane_g2_ParamLimits

0xc742,	// (0x0004e565) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00051a44) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00051a44) cell_eswt_app_pane_g

0xc76b,	// (0x0004e58e) cell_eswt_app_pane_t1_ParamLimits

0xc76b,	// (0x0004e58e) cell_eswt_app_pane_t1

0xc79d,	// (0x0004e5c0) grid_highlight_pane_cp70_ParamLimits

0xc79d,	// (0x0004e5c0) grid_highlight_pane_cp70

0x8cb9,	// (0x0004aadc) set_content_pane_g1

0x908a,	// (0x0004aead) status_small_volume_pane

0x8046,	// (0x00049e69) status_small_volume_pane_g1

0x804e,	// (0x00049e71) volume_small2_pane

0x8057,	// (0x00049e7a) volume_small2_pane_g1

0x8060,	// (0x00049e83) volume_small2_pane_g2

0x8069,	// (0x00049e8c) volume_small2_pane_g3

0x8072,	// (0x00049e95) volume_small2_pane_g4

0x807b,	// (0x00049e9e) volume_small2_pane_g5

0x8084,	// (0x00049ea7) volume_small2_pane_g6

0x808d,	// (0x00049eb0) volume_small2_pane_g7

0x8096,	// (0x00049eb9) volume_small2_pane_g8

0x809f,	// (0x00049ec2) volume_small2_pane_g9

0x80a8,	// (0x00049ecb) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00051a49) volume_small2_pane_g

0xbfec,	// (0x0004de0f) fep_vkb_top_text_pane_g1_ParamLimits

0xc007,	// (0x0004de2a) fep_vkb_top_text_pane_t1_ParamLimits

0xc2e1,	// (0x0004e104) popup_preview_fixed_window_g3_ParamLimits

0xc2e1,	// (0x0004e104) popup_preview_fixed_window_g3

0x763c,	// (0x0004945f) popup_toolbar_trans_pane

0xa9f4,	// (0x0004c817) aid_height_set_list_ParamLimits

0xaa05,	// (0x0004c828) aid_size_parent_ParamLimits

0x910b,	// (0x0004af2e) list_highlight_pane_cp2_ParamLimits

0x8cb9,	// (0x0004aadc) set_content_pane_g1_ParamLimits

0x7ac5,	// (0x000498e8) list_single_image_pane_ParamLimits

0x7ac5,	// (0x000498e8) list_single_image_pane

0xc7a9,	// (0x0004e5cc) aid_size_cell_image_ParamLimits

0xc7a9,	// (0x0004e5cc) aid_size_cell_image

0xc7b6,	// (0x0004e5d9) grid_single_image_pane_ParamLimits

0xc7b6,	// (0x0004e5d9) grid_single_image_pane

0x0b55,	// (0x00042978) list_single_image_pane_g1_ParamLimits

0x0b55,	// (0x00042978) list_single_image_pane_g1

0x0b61,	// (0x00042984) list_single_image_pane_g2_ParamLimits

0x0b61,	// (0x00042984) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00051a5e) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00051a5e) list_single_image_pane_g

0xc7c4,	// (0x0004e5e7) list_single_image_pane_t1_ParamLimits

0xc7c4,	// (0x0004e5e7) list_single_image_pane_t1

0xc7da,	// (0x0004e5fd) cell_image_list_pane_ParamLimits

0xc7da,	// (0x0004e5fd) cell_image_list_pane

0xc7f0,	// (0x0004e613) cell_image_list_pane_g1

0xc7f9,	// (0x0004e61c) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00051a63) cell_image_list_pane_g

0xc802,	// (0x0004e625) aid_size_cell_tb_trans_pane

0x0b47,	// (0x0004296a) bg_tb_trans_pane

0xc814,	// (0x0004e637) grid_tb_trans_pane

0x963b,	// (0x0004b45e) bg_tb_trans_pane_g1

0x9643,	// (0x0004b466) bg_tb_trans_pane_g2

0x964b,	// (0x0004b46e) bg_tb_trans_pane_g3

0x9653,	// (0x0004b476) bg_tb_trans_pane_g4

0x965b,	// (0x0004b47e) bg_tb_trans_pane_g5

0x9673,	// (0x0004b496) bg_tb_trans_pane_g6

0x967b,	// (0x0004b49e) bg_tb_trans_pane_g7

0x9663,	// (0x0004b486) bg_tb_trans_pane_g8

0x966b,	// (0x0004b48e) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00051a68) bg_tb_trans_pane_g

0xc828,	// (0x0004e64b) cell_toolbar_trans_pane_ParamLimits

0xc828,	// (0x0004e64b) cell_toolbar_trans_pane

0xbc35,	// (0x0004da58) cell_toolbar_trans_pane_g1

0xb86d,	// (0x0004d690) list_form2_midp_pane_t1

0xb87b,	// (0x0004d69e) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00051911) list_form2_midp_pane_t

0xb889,	// (0x0004d6ac) scroll_pane_cp51_ParamLimits

0xba50,	// (0x0004d873) form2_midp_wait_pane_g1

0xba59,	// (0x0004d87c) form2_midp_wait_pane_g2

0xba62,	// (0x0004d885) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00051926) form2_midp_wait_pane_g

0xdc5a,	// (0x0004fa7d) list_highlight_pane_cp21_ParamLimits

0xba9b,	// (0x0004d8be) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbaaa,	// (0x0004d8cd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac0d,	// (0x0004ca30) list_single_2graphic_im_pane_ParamLimits

0xac0d,	// (0x0004ca30) list_single_2graphic_im_pane

0xc84e,	// (0x0004e671) list_single_2graphic_im_pane_g1_ParamLimits

0xc84e,	// (0x0004e671) list_single_2graphic_im_pane_g1

0xc85f,	// (0x0004e682) list_single_2graphic_im_pane_g2_ParamLimits

0xc85f,	// (0x0004e682) list_single_2graphic_im_pane_g2

0xc86b,	// (0x0004e68e) list_single_2graphic_im_pane_g3_ParamLimits

0xc86b,	// (0x0004e68e) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00051a7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00051a7b) list_single_2graphic_im_pane_g

0xc88b,	// (0x0004e6ae) list_single_2graphic_im_pane_t1_ParamLimits

0xc88b,	// (0x0004e6ae) list_single_2graphic_im_pane_t1

0xc2ed,	// (0x0004e110) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2ed,	// (0x0004e110) list_single_graphic_2heading_pane_fp

0x5dc5,	// (0x00047be8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5dc5,	// (0x00047be8) list_single_graphic_2heading_pane_fp_g1

0xc306,	// (0x0004e129) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc306,	// (0x0004e129) list_single_graphic_2heading_pane_fp_g2

0xc25f,	// (0x0004e082) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc25f,	// (0x0004e082) list_single_graphic_2heading_pane_fp_g3

0xc26b,	// (0x0004e08e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc26b,	// (0x0004e08e) list_single_graphic_2heading_pane_fp_g4

0xc312,	// (0x0004e135) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc312,	// (0x0004e135) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x000519a9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x000519a9) list_single_graphic_2heading_pane_fp_g

0x5f0e,	// (0x00047d31) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5f0e,	// (0x00047d31) list_single_graphic_2heading_pane_fp_t1

0x5dfd,	// (0x00047c20) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5dfd,	// (0x00047c20) list_single_graphic_2heading_pane_fp_t2

0x5f24,	// (0x00047d47) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5f24,	// (0x00047d47) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00051a84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00051a84) list_single_graphic_2heading_pane_fp_t

0xbcae,	// (0x0004dad1) fep_hwr_write_pane_g5_ParamLimits

0xbcae,	// (0x0004dad1) fep_hwr_write_pane_g5

0xbcba,	// (0x0004dadd) fep_hwr_write_pane_g6_ParamLimits

0xbcba,	// (0x0004dadd) fep_hwr_write_pane_g6

0xc58c,	// (0x0004e3af) eswt_shell_pane_ParamLimits

0x96af,	// (0x0004b4d2) bg_popup_window_pane_cp18_ParamLimits

0xa94b,	// (0x0004c76e) heading_pane_cp70

0xc6b6,	// (0x0004e4d9) popup_eswt_tasktip_window_t1_ParamLimits

0x919e,	// (0x0004afc1) aid_touch_tab_arrow_left

0x91aa,	// (0x0004afcd) aid_touch_tab_arrow_right

0x6468,	// (0x0004828b) title_pane_g3_ParamLimits

0x6468,	// (0x0004828b) title_pane_g3

0x0b06,	// (0x00042929) set_value_pane_g1

0x763c,	// (0x0004945f) popup_toolbar_trans_pane_ParamLimits

0xc802,	// (0x0004e625) aid_size_cell_tb_trans_pane_ParamLimits

0x0b47,	// (0x0004296a) bg_tb_trans_pane_ParamLimits

0xc814,	// (0x0004e637) grid_tb_trans_pane_ParamLimits

0x063c,	// (0x0004245f) cont_note_pane_ParamLimits

0x063c,	// (0x0004245f) cont_note_pane

0x08c2,	// (0x000426e5) cont_snote2_single_text_pane_ParamLimits

0x08c2,	// (0x000426e5) cont_snote2_single_text_pane

0x08c2,	// (0x000426e5) cont_snote2_single_graphic_pane_ParamLimits

0x08c2,	// (0x000426e5) cont_snote2_single_graphic_pane

0x9c99,	// (0x0004babc) cont_note_wait_pane_ParamLimits

0x9c99,	// (0x0004babc) cont_note_wait_pane

0x9c99,	// (0x0004babc) cont_note_image_pane_ParamLimits

0x9c99,	// (0x0004babc) cont_note_image_pane

0xc8bc,	// (0x0004e6df) popup_note2_window_g1_ParamLimits

0xc8bc,	// (0x0004e6df) popup_note2_window_g1

0xc8ed,	// (0x0004e710) popup_note2_window_t1_ParamLimits

0xc8ed,	// (0x0004e710) popup_note2_window_t1

0xc932,	// (0x0004e755) popup_note2_window_t2_ParamLimits

0xc932,	// (0x0004e755) popup_note2_window_t2

0xc977,	// (0x0004e79a) popup_note2_window_t3_ParamLimits

0xc977,	// (0x0004e79a) popup_note2_window_t3

0xc9bc,	// (0x0004e7df) popup_note2_window_t4_ParamLimits

0xc9bc,	// (0x0004e7df) popup_note2_window_t4

0x06c0,	// (0x000424e3) popup_note2_window_t5_ParamLimits

0x06c0,	// (0x000424e3) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00051a90) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00051a90) popup_note2_window_t

0xc9eb,	// (0x0004e80e) popup_note2_image_window_g1_ParamLimits

0xc9eb,	// (0x0004e80e) popup_note2_image_window_g1

0xc9f7,	// (0x0004e81a) popup_note2_image_window_g2_ParamLimits

0xc9f7,	// (0x0004e81a) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00051a9b) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00051a9b) popup_note2_image_window_g

0xca09,	// (0x0004e82c) popup_note2_image_window_t1_ParamLimits

0xca09,	// (0x0004e82c) popup_note2_image_window_t1

0xca21,	// (0x0004e844) popup_note2_image_window_t2_ParamLimits

0xca21,	// (0x0004e844) popup_note2_image_window_t2

0xca39,	// (0x0004e85c) popup_note2_image_window_t3_ParamLimits

0xca39,	// (0x0004e85c) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00051aa0) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00051aa0) popup_note2_image_window_t

0x9ca7,	// (0x0004baca) popup_note2_wait_window_g1_ParamLimits

0x9ca7,	// (0x0004baca) popup_note2_wait_window_g1

0xca55,	// (0x0004e878) popup_note2_wait_window_g2_ParamLimits

0xca55,	// (0x0004e878) popup_note2_wait_window_g2

0x9cbf,	// (0x0004bae2) popup_note2_wait_window_g3_ParamLimits

0x9cbf,	// (0x0004bae2) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00051aa7) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00051aa7) popup_note2_wait_window_g

0xca61,	// (0x0004e884) popup_note2_wait_window_t1_ParamLimits

0xca61,	// (0x0004e884) popup_note2_wait_window_t1

0xca7f,	// (0x0004e8a2) popup_note2_wait_window_t2_ParamLimits

0xca7f,	// (0x0004e8a2) popup_note2_wait_window_t2

0xca9d,	// (0x0004e8c0) popup_note2_wait_window_t3_ParamLimits

0xca9d,	// (0x0004e8c0) popup_note2_wait_window_t3

0xcaaf,	// (0x0004e8d2) popup_note2_wait_window_t4_ParamLimits

0xcaaf,	// (0x0004e8d2) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00051aae) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00051aae) popup_note2_wait_window_t

0xcac1,	// (0x0004e8e4) wait_bar2_pane_ParamLimits

0xcac1,	// (0x0004e8e4) wait_bar2_pane

0xcad9,	// (0x0004e8fc) popup_snote2_single_text_window_g1_ParamLimits

0xcad9,	// (0x0004e8fc) popup_snote2_single_text_window_g1

0xcb01,	// (0x0004e924) popup_snote2_single_text_window_t1_ParamLimits

0xcb01,	// (0x0004e924) popup_snote2_single_text_window_t1

0xcb4d,	// (0x0004e970) popup_snote2_single_text_window_t2_ParamLimits

0xcb4d,	// (0x0004e970) popup_snote2_single_text_window_t2

0xcb99,	// (0x0004e9bc) popup_snote2_single_text_window_t3_ParamLimits

0xcb99,	// (0x0004e9bc) popup_snote2_single_text_window_t3

0xcbda,	// (0x0004e9fd) popup_snote2_single_text_window_t4_ParamLimits

0xcbda,	// (0x0004e9fd) popup_snote2_single_text_window_t4

0xcc10,	// (0x0004ea33) popup_snote2_single_text_window_t5_ParamLimits

0xcc10,	// (0x0004ea33) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00051ab7) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00051ab7) popup_snote2_single_text_window_t

0xcc3b,	// (0x0004ea5e) popup_snote2_single_graphic_window_g1_ParamLimits

0xcc3b,	// (0x0004ea5e) popup_snote2_single_graphic_window_g1

0xcc63,	// (0x0004ea86) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc63,	// (0x0004ea86) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00051ac2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00051ac2) popup_snote2_single_graphic_window_g

0xcc8b,	// (0x0004eaae) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc8b,	// (0x0004eaae) popup_snote2_single_graphic_window_t1

0xccd7,	// (0x0004eafa) popup_snote2_single_graphic_window_t2_ParamLimits

0xccd7,	// (0x0004eafa) popup_snote2_single_graphic_window_t2

0xcb99,	// (0x0004e9bc) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb99,	// (0x0004e9bc) popup_snote2_single_graphic_window_t3

0xcbda,	// (0x0004e9fd) popup_snote2_single_graphic_window_t4_ParamLimits

0xcbda,	// (0x0004e9fd) popup_snote2_single_graphic_window_t4

0xcc10,	// (0x0004ea33) popup_snote2_single_graphic_window_t5_ParamLimits

0xcc10,	// (0x0004ea33) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00051ac7) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00051ac7) popup_snote2_single_graphic_window_t

0xb739,	// (0x0004d55c) clock_nsta_pane_cp2_t1

0xb739,	// (0x0004d55c) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x000518e7) clock_nsta_pane_cp2_t

0x56e4,	// (0x00047507) form_field_data_wide_pane_g1_ParamLimits

0x0b55,	// (0x00042978) form_field_data_wide_pane_g2_ParamLimits

0x0b55,	// (0x00042978) form_field_data_wide_pane_g2

0x0b61,	// (0x00042984) form_field_data_wide_pane_g3_ParamLimits

0x0b61,	// (0x00042984) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000514a3) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000514a3) form_field_data_wide_pane_g

0xb63b,	// (0x0004d45e) grid_touch_3_pane_ParamLimits

0xb63b,	// (0x0004d45e) grid_touch_3_pane

0xcd23,	// (0x0004eb46) cell_touch_3_pane_ParamLimits

0xcd23,	// (0x0004eb46) cell_touch_3_pane

0xbc35,	// (0x0004da58) cell_touch_3_pane_g1

0xbc35,	// (0x0004da58) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0005196c) cell_touch_3_pane_g

0x0718,	// (0x0004253b) cont_query_data_pane

0x0720,	// (0x00042543) cont_query_data_pane_cp1

0xcd56,	// (0x0004eb79) button_value_adjust_pane_cp7

0xcd5e,	// (0x0004eb81) query_popup_pane_cp3

0x4177,	// (0x00045f9a) bg_popup_sub_pane_cp22_ParamLimits

0x6cb8,	// (0x00048adb) navi_navi_volume_pane_cp2

0x6cd3,	// (0x00048af6) popup_side_volume_key_window_g2

0x6ce2,	// (0x00048b05) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00051539) popup_side_volume_key_window_g

0x6cff,	// (0x00048b22) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00051540) popup_side_volume_key_window_t

0x4584,	// (0x000463a7) popup_side_volume_key_window_ParamLimits

0x52e3,	// (0x00047106) list_double_graphic_pane_g4_ParamLimits

0x52e3,	// (0x00047106) list_double_graphic_pane_g4

0xac3c,	// (0x0004ca5f) list_single_2heading_msg_pane_ParamLimits

0xac3c,	// (0x0004ca5f) list_single_2heading_msg_pane

0x80b1,	// (0x00049ed4) list_single_2heading_msg_pane_g1_ParamLimits

0x80b1,	// (0x00049ed4) list_single_2heading_msg_pane_g1

0xc48b,	// (0x0004e2ae) list_single_2heading_msg_pane_g2_ParamLimits

0xc48b,	// (0x0004e2ae) list_single_2heading_msg_pane_g2

0x80bd,	// (0x00049ee0) list_single_2heading_msg_pane_g3_ParamLimits

0x80bd,	// (0x00049ee0) list_single_2heading_msg_pane_g3

0x80c9,	// (0x00049eec) list_single_2heading_msg_pane_g4_ParamLimits

0x80c9,	// (0x00049eec) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00051ad2) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00051ad2) list_single_2heading_msg_pane_g

0x5f44,	// (0x00047d67) list_single_2heading_msg_pane_t1_ParamLimits

0x5f44,	// (0x00047d67) list_single_2heading_msg_pane_t1

0x5f6c,	// (0x00047d8f) list_single_2heading_msg_pane_t2_ParamLimits

0x5f6c,	// (0x00047d8f) list_single_2heading_msg_pane_t2

0x5f9b,	// (0x00047dbe) list_single_2heading_msg_pane_t3_ParamLimits

0x5f9b,	// (0x00047dbe) list_single_2heading_msg_pane_t3

0x5fd4,	// (0x00047df7) list_single_2heading_msg_pane_t4_ParamLimits

0x5fd4,	// (0x00047df7) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00051adb) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00051adb) list_single_2heading_msg_pane_t

0xdc16,	// (0x0004fa39) title_pane_g4_ParamLimits

0xdc16,	// (0x0004fa39) title_pane_g4

0x6945,	// (0x00048768) title_pane_stacon_g3_ParamLimits

0x6945,	// (0x00048768) title_pane_stacon_g3

0xc87f,	// (0x0004e6a2) list_single_2graphic_im_pane_g4_ParamLimits

0xc87f,	// (0x0004e6a2) list_single_2graphic_im_pane_g4

0xa709,	// (0x0004c52c) popup_side_volume_key_window_cp

0xaf63,	// (0x0004cd86) main_idle_act2_pane_t1

0x774c,	// (0x0004956f) toolbar_button_pane_g10

0x67c9,	// (0x000485ec) popup_toolbar_window_cp1

0xb72a,	// (0x0004d54d) clock_nsta_pane_cp_t1

0xb72a,	// (0x0004d54d) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x000518e2) clock_nsta_pane_cp_t

0x6cb8,	// (0x00048adb) navi_navi_volume_pane_cp2_ParamLimits

0x6cc7,	// (0x00048aea) popup_side_volume_key_window_g1_ParamLimits

0x6cd3,	// (0x00048af6) popup_side_volume_key_window_g2_ParamLimits

0x6ce2,	// (0x00048b05) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00051539) popup_side_volume_key_window_g_ParamLimits

0x7cb7,	// (0x00049ada) fep_hwr_aid_pane

0x2081,	// (0x00043ea4) bg_fep_hwr_top_pane_g4_ParamLimits

0xbc7e,	// (0x0004daa1) fep_hwr_top_pane_g1_ParamLimits

0xbc90,	// (0x0004dab3) fep_hwr_top_pane_g2_ParamLimits

0x7d72,	// (0x00049b95) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00051937) fep_hwr_top_pane_g_ParamLimits

0x7d87,	// (0x00049baa) fep_hwr_top_text_pane_ParamLimits

0xa4be,	// (0x0004c2e1) aid_touch_tab_arrow_arrow_2

0xa4c7,	// (0x0004c2ea) aid_touch_tab_arrow_left_2

0x7ccb,	// (0x00049aee) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7d02,	// (0x00049b25) fep_hwr_prediction_pane

0xbde6,	// (0x0004dc09) fep_vkb_prediction_pane

0xbeec,	// (0x0004dd0f) fep_vkb_side_pane_g3_ParamLimits

0xbeec,	// (0x0004dd0f) fep_vkb_side_pane_g3

0xbe98,	// (0x0004dcbb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc366,	// (0x0004e189) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc373,	// (0x0004e196) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x000519e1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcd85,	// (0x0004eba8) fep_hwr_prediction_pane_g1

0x80e1,	// (0x00049f04) fep_hwr_prediction_pane_g2

0x80e9,	// (0x00049f0c) fep_hwr_prediction_pane_g3

0x80f1,	// (0x00049f14) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00051ae4) fep_hwr_prediction_pane_g

0xcd85,	// (0x0004eba8) fep_vkb_prediction_pane_g1

0xcd8f,	// (0x0004ebb2) fep_vkb_prediction_pane_g2

0xcd97,	// (0x0004ebba) fep_vkb_prediction_pane_g3

0xcd9f,	// (0x0004ebc2) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00051aed) fep_vkb_prediction_pane_g

0x7a59,	// (0x0004987c) slider_set_pane_g3

0x7a6d,	// (0x00049890) slider_set_pane_g4

0x7a85,	// (0x000498a8) slider_set_pane_g5

0x7a59,	// (0x0004987c) slider_set_pane_g6

0x7a9b,	// (0x000498be) slider_set_pane_g7

0xab84,	// (0x0004c9a7) slider_form_pane_g3

0xab8d,	// (0x0004c9b0) slider_form_pane_g4

0xab95,	// (0x0004c9b8) slider_form_pane_g5

0xab84,	// (0x0004c9a7) slider_form_pane_g6

0xab9d,	// (0x0004c9c0) slider_form_pane_g7

0xb211,	// (0x0004d034) slider_set_pane_vc_g3

0xb21a,	// (0x0004d03d) slider_set_pane_vc_g4

0xb223,	// (0x0004d046) slider_set_pane_vc_g5

0xb211,	// (0x0004d034) slider_set_pane_vc_g6

0xb22c,	// (0x0004d04f) slider_set_pane_vc_g7

0xb400,	// (0x0004d223) slider_form_pane_vc_g1

0xb409,	// (0x0004d22c) slider_form_pane_vc_g2

0xb412,	// (0x0004d235) slider_form_pane_vc_g3

0xb400,	// (0x0004d223) slider_form_pane_vc_g4

0xb41b,	// (0x0004d23e) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x000518b4) slider_form_pane_vc_g

0xdbf8,	// (0x0004fa1b) main_idle_act3_pane

0xcda7,	// (0x0004ebca) ai3_links_pane

0xcdb0,	// (0x0004ebd3) popup_ai3_data_window_ParamLimits

0xcdb0,	// (0x0004ebd3) popup_ai3_data_window

0xdbf8,	// (0x0004fa1b) grid_ai3_links_pane

0xcdce,	// (0x0004ebf1) cell_ai3_links_pane_ParamLimits

0xcdce,	// (0x0004ebf1) cell_ai3_links_pane

0xcde8,	// (0x0004ec0b) bg_popup_sub_pane_cp11

0xcdf5,	// (0x0004ec18) cell_ai3_links_pane_g1

0xdbf8,	// (0x0004fa1b) bg_popup_sub_pane_cp12

0xce1a,	// (0x0004ec3d) heading_ai3_data_pane

0xce22,	// (0x0004ec45) list_ai3_gene_pane

0xce2e,	// (0x0004ec51) popup_ai3_data_window_g1

0xce36,	// (0x0004ec59) heading_ai3_data_pane_g1

0xce3e,	// (0x0004ec61) heading_ai3_data_pane_t1

0xce4c,	// (0x0004ec6f) list_double_ai3_gene_pane_ParamLimits

0xce4c,	// (0x0004ec6f) list_double_ai3_gene_pane

0xce59,	// (0x0004ec7c) list_single_ai3_gene_pane_ParamLimits

0xce59,	// (0x0004ec7c) list_single_ai3_gene_pane

0xbbfa,	// (0x0004da1d) list_highlight_pane_cp7_ParamLimits

0xbbfa,	// (0x0004da1d) list_highlight_pane_cp7

0xce66,	// (0x0004ec89) list_single_a13_gene_pane_t1_ParamLimits

0xce66,	// (0x0004ec89) list_single_a13_gene_pane_t1

0xce7d,	// (0x0004eca0) list_single_ai3_gene_pane_g1

0xce86,	// (0x0004eca9) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00051af6) list_single_ai3_gene_pane_g

0xce8e,	// (0x0004ecb1) list_double_ai3_gene_pane_g1_ParamLimits

0xce8e,	// (0x0004ecb1) list_double_ai3_gene_pane_g1

0xce9a,	// (0x0004ecbd) list_double_ai3_gene_pane_t1_ParamLimits

0xce9a,	// (0x0004ecbd) list_double_ai3_gene_pane_t1

0xceb6,	// (0x0004ecd9) list_double_ai3_gene_pane_t2_ParamLimits

0xceb6,	// (0x0004ecd9) list_double_ai3_gene_pane_t2

0xcecb,	// (0x0004ecee) list_double_ai3_gene_pane_t3_ParamLimits

0xcecb,	// (0x0004ecee) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00051afb) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00051afb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5f3a,	// (0x00047d5d) aid_size_min_col_2

0xcd6f,	// (0x0004eb92) aid_size_min_msg_ParamLimits

0xcd6f,	// (0x0004eb92) aid_size_min_msg

0xbff8,	// (0x0004de1b) fep_vkb_top_text_pane_g2_ParamLimits

0xbff8,	// (0x0004de1b) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00051967) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00051967) fep_vkb_top_text_pane_g

0xdbf8,	// (0x0004fa1b) main_hc_apps_shell_pane

0xcee8,	// (0x0004ed0b) grid_hc_apps_pane_ParamLimits

0xcee8,	// (0x0004ed0b) grid_hc_apps_pane

0xcef7,	// (0x0004ed1a) list_hc_apps_pane

0xceff,	// (0x0004ed22) scroll_pane_cp37_ParamLimits

0xceff,	// (0x0004ed22) scroll_pane_cp37

0xcf0b,	// (0x0004ed2e) cell_hc_apps_pane_ParamLimits

0xcf0b,	// (0x0004ed2e) cell_hc_apps_pane

0xcfc3,	// (0x0004ede6) cell_hc_apps_pane_g1_ParamLimits

0xcfc3,	// (0x0004ede6) cell_hc_apps_pane_g1

0xcff4,	// (0x0004ee17) cell_hc_apps_pane_g2_ParamLimits

0xcff4,	// (0x0004ee17) cell_hc_apps_pane_g2

0xd010,	// (0x0004ee33) cell_hc_apps_pane_g3_ParamLimits

0xd010,	// (0x0004ee33) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00051b02) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00051b02) cell_hc_apps_pane_g

0xd032,	// (0x0004ee55) cell_hc_apps_pane_t1_ParamLimits

0xd032,	// (0x0004ee55) cell_hc_apps_pane_t1

0x063c,	// (0x0004245f) grid_highlight_pane_cp10_ParamLimits

0x063c,	// (0x0004245f) grid_highlight_pane_cp10

0xd072,	// (0x0004ee95) list_single_hc_apps_pane_ParamLimits

0xd072,	// (0x0004ee95) list_single_hc_apps_pane

0xd0b1,	// (0x0004eed4) list_single_hc_apps_pane_g1

0x80f9,	// (0x00049f1c) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00051b09) list_single_hc_apps_pane_g

0x8112,	// (0x00049f35) list_single_hc_apps_pane_g2_copy1

0x5ff9,	// (0x00047e1c) list_single_hc_apps_pane_t1

0xdc5a,	// (0x0004fa7d) bg_set_opt_pane_cp_ParamLimits

0x651a,	// (0x0004833d) setting_slider_pane_t1_ParamLimits

0x6533,	// (0x00048356) setting_slider_pane_t2_ParamLimits

0x654d,	// (0x00048370) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00051381) setting_slider_pane_t_ParamLimits

0x6565,	// (0x00048388) slider_set_pane_ParamLimits

0x6fcf,	// (0x00048df2) control_pane_g5_ParamLimits

0x6fcf,	// (0x00048df2) control_pane_g5

0xa9b7,	// (0x0004c7da) slider_set_pane_g1_ParamLimits

0x7a4d,	// (0x00049870) slider_set_pane_g2_ParamLimits

0x7a59,	// (0x0004987c) slider_set_pane_g3_ParamLimits

0x7a6d,	// (0x00049890) slider_set_pane_g4_ParamLimits

0x7a85,	// (0x000498a8) slider_set_pane_g5_ParamLimits

0x7a59,	// (0x0004987c) slider_set_pane_g6_ParamLimits

0x7a9b,	// (0x000498be) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0005178c) slider_set_pane_g_ParamLimits

0x4669,	// (0x0004648c) navi_icon_text_pane_ParamLimits

0x915d,	// (0x0004af80) aid_fill_nsta_2_ParamLimits

0x919e,	// (0x0004afc1) aid_touch_tab_arrow_left_ParamLimits

0x91aa,	// (0x0004afcd) aid_touch_tab_arrow_right_ParamLimits

0x9216,	// (0x0004b039) clock_nsta_pane_ParamLimits

0xa4a0,	// (0x0004c2c3) navi_icon_pane_g1_ParamLimits

0xa4ac,	// (0x0004c2cf) navi_text_pane_t1_ParamLimits

0xb847,	// (0x0004d66a) navi_icon_text_pane_g1_ParamLimits

0xb853,	// (0x0004d676) navi_icon_text_pane_t1_ParamLimits

0xd0b1,	// (0x0004eed4) list_single_hc_apps_pane_g1_ParamLimits

0x80f9,	// (0x00049f1c) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00051b09) list_single_hc_apps_pane_g_ParamLimits

0x8112,	// (0x00049f35) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ff9,	// (0x00047e1c) list_single_hc_apps_pane_t1_ParamLimits

0x634e,	// (0x00048171) popup_toolbar2_fixed_window_ParamLimits

0x634e,	// (0x00048171) popup_toolbar2_fixed_window

0x7632,	// (0x00049455) popup_toolbar2_float_window

0xdbf8,	// (0x0004fa1b) bg_popup_sub_pane_cp27

0xd0ca,	// (0x0004eeed) grid_toolbar2_float_pane

0xdbf8,	// (0x0004fa1b) bg_popup_sub_pane_cp26

0xd0ca,	// (0x0004eeed) grid_toolbar2_fixed_pane

0xd0d2,	// (0x0004eef5) cell_toolbar2_fixed_pane_ParamLimits

0xd0d2,	// (0x0004eef5) cell_toolbar2_fixed_pane

0xd0e2,	// (0x0004ef05) cell_toolbar2_fixed_pane_g1

0xd0eb,	// (0x0004ef0e) toolbar2_fixed_button_pane

0x963b,	// (0x0004b45e) toolbar2_fixed_button_pane_g1

0x9643,	// (0x0004b466) toolbar2_fixed_button_pane_g2

0x964b,	// (0x0004b46e) toolbar2_fixed_button_pane_g3

0x9653,	// (0x0004b476) toolbar2_fixed_button_pane_g4

0x965b,	// (0x0004b47e) toolbar2_fixed_button_pane_g5

0x9663,	// (0x0004b486) toolbar2_fixed_button_pane_g6

0x966b,	// (0x0004b48e) toolbar2_fixed_button_pane_g7

0x9673,	// (0x0004b496) toolbar2_fixed_button_pane_g8

0x967b,	// (0x0004b49e) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0005168e) toolbar2_fixed_button_pane_g

0xd0f3,	// (0x0004ef16) cell_toolbar2_float_pane_ParamLimits

0xd0f3,	// (0x0004ef16) cell_toolbar2_float_pane

0xd104,	// (0x0004ef27) cell_toolbar2_float_pane_g1

0xd0eb,	// (0x0004ef0e) toolbar2_fixed_button_pane_cp

0xbd54,	// (0x0004db77) fep_vkb_accented_list_pane_ParamLimits

0xbd54,	// (0x0004db77) fep_vkb_accented_list_pane

0x7ee9,	// (0x00049d0c) bg_popup_fep_shadow_pane_g9

0x8ddc,	// (0x0004abff) bg_popup_fep_shadow_pane_cp3

0x0c57,	// (0x00042a7a) list_accented_list_pane

0xd10d,	// (0x0004ef30) list_single_accented_list_pane_ParamLimits

0xd10d,	// (0x0004ef30) list_single_accented_list_pane

0x8ddc,	// (0x0004abff) list_highlight_pane_cp10

0xd11e,	// (0x0004ef41) list_single_accented_list_pane_t1

0x7578,	// (0x0004939b) popup_slider_window_ParamLimits

0x7578,	// (0x0004939b) popup_slider_window

0xcd66,	// (0x0004eb89) aid_indentation_list_msg

0xd1ee,	// (0x0004f011) bg_popup_window_pane_cp19

0xd25a,	// (0x0004f07d) popup_slider_window_g1

0xd276,	// (0x0004f099) popup_slider_window_g2

0xd292,	// (0x0004f0b5) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00051b0e) popup_slider_window_g

0xd2f8,	// (0x0004f11b) popup_slider_window_t1

0xd36c,	// (0x0004f18f) small_volume_slider_vertical_pane

0xbc35,	// (0x0004da58) small_volume_slider_vertical_pane_g1

0xbc35,	// (0x0004da58) small_volume_slider_vertical_pane_g2

0xd388,	// (0x0004f1ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00051b20) small_volume_slider_vertical_pane_g

0x6106,	// (0x00047f29) area_side_right_pane_ParamLimits

0x6106,	// (0x00047f29) area_side_right_pane

0x812e,	// (0x00049f51) aid_size_side_button_ParamLimits

0x812e,	// (0x00049f51) aid_size_side_button

0x8142,	// (0x00049f65) grid_sctrl_middle_pane_ParamLimits

0x8142,	// (0x00049f65) grid_sctrl_middle_pane

0x8161,	// (0x00049f84) sctrl_sk_bottom_pane

0x8172,	// (0x00049f95) sctrl_sk_top_pane

0x8184,	// (0x00049fa7) aid_touch_sctrl_top

0x063c,	// (0x0004245f) bg_sctrl_sk_pane_ParamLimits

0x063c,	// (0x0004245f) bg_sctrl_sk_pane

0x8191,	// (0x00049fb4) sctrl_sk_top_pane_g1

0x819e,	// (0x00049fc1) sctrl_sk_top_pane_t1

0x8184,	// (0x00049fa7) aid_touch_sctrl_bottom

0x063c,	// (0x0004245f) bg_sctrl_sk_pane_cp_ParamLimits

0x063c,	// (0x0004245f) bg_sctrl_sk_pane_cp

0x81b9,	// (0x00049fdc) sctrl_sk_bottom_pane_g1

0x819e,	// (0x00049fc1) sctrl_sk_bottom_pane_t1

0x81c2,	// (0x00049fe5) cell_sctrl_middle_pane_ParamLimits

0x81c2,	// (0x00049fe5) cell_sctrl_middle_pane

0x81df,	// (0x0004a002) aid_touch_sctrl_middle_ParamLimits

0x81df,	// (0x0004a002) aid_touch_sctrl_middle

0x0b47,	// (0x0004296a) bg_sctrl_middle_pane_ParamLimits

0x0b47,	// (0x0004296a) bg_sctrl_middle_pane

0xbe98,	// (0x0004dcbb) cell_sctrl_middle_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) cell_sctrl_middle_pane_g1

0x81f1,	// (0x0004a014) cell_sctrl_middle_pane_g2_ParamLimits

0x81f1,	// (0x0004a014) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00051b2c) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00051b2c) cell_sctrl_middle_pane_g

0x963b,	// (0x0004b45e) bg_sctrl_middle_pane_g1

0x9643,	// (0x0004b466) bg_sctrl_middle_pane_g2

0x964b,	// (0x0004b46e) bg_sctrl_middle_pane_g3

0x9653,	// (0x0004b476) bg_sctrl_middle_pane_g4

0x965b,	// (0x0004b47e) bg_sctrl_middle_pane_g5

0x9663,	// (0x0004b486) bg_sctrl_middle_pane_g6

0x966b,	// (0x0004b48e) bg_sctrl_middle_pane_g7

0x9673,	// (0x0004b496) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00051b31) bg_sctrl_middle_pane_g

0x967b,	// (0x0004b49e) bg_sctrl_middle_pane_g8_copy1

0x963b,	// (0x0004b45e) bg_sctrl_sk_pane_g1

0x9643,	// (0x0004b466) bg_sctrl_sk_pane_g2

0x964b,	// (0x0004b46e) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0005168e) bg_sctrl_sk_pane_g

0x0a80,	// (0x000428a3) aid_size_touch_scroll_bar

0x9653,	// (0x0004b476) bg_sctrl_sk_pane_g4

0x965b,	// (0x0004b47e) bg_sctrl_sk_pane_g5

0x9663,	// (0x0004b486) bg_sctrl_sk_pane_g6

0x966b,	// (0x0004b48e) bg_sctrl_sk_pane_g7

0x9673,	// (0x0004b496) bg_sctrl_sk_pane_g8

0x967b,	// (0x0004b49e) bg_sctrl_sk_pane_g9

0x718f,	// (0x00048fb2) popup_fep_china_hwr2_fs_candidate_window

0x7199,	// (0x00048fbc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7199,	// (0x00048fbc) popup_fep_china_hwr2_fs_control_window

0xbe98,	// (0x0004dcbb) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00051b27) sctrl_sk_top_pane_g

0xd391,	// (0x0004f1b4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd391,	// (0x0004f1b4) aid_fep_china_hwr2_fs_cell

0xd3a4,	// (0x0004f1c7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3a4,	// (0x0004f1c7) bg_popup_fep_shadow_pane_cp4

0xd3bd,	// (0x0004f1e0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd3bd,	// (0x0004f1e0) bg_popup_fep_shadow_pane_cp5

0xd3cf,	// (0x0004f1f2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd3cf,	// (0x0004f1f2) popup_fep_china_hwr2_fs_control_bar_grid

0xd3df,	// (0x0004f202) popup_fep_china_hwr2_fs_control_funtion_grid

0xd3e7,	// (0x0004f20a) aid_fep_china_hwr2_fs_candi_cell

0xdbf8,	// (0x0004fa1b) bg_popup_fep_shadow_pane_cp6

0xd3f1,	// (0x0004f214) popup_fep_china_hwr2_fs_candidate_grid

0xd3fb,	// (0x0004f21e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3fb,	// (0x0004f21e) cell_fep_china_hwr2_fs_funtion_grid

0xbc35,	// (0x0004da58) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd413,	// (0x0004f236) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd413,	// (0x0004f236) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd421,	// (0x0004f244) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd421,	// (0x0004f244) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00051b42) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00051b42) cell_fep_china_hwr2_fs_funtion_grid_g

0xd437,	// (0x0004f25a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd437,	// (0x0004f25a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd44c,	// (0x0004f26f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd44c,	// (0x0004f26f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00051b47) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00051b47) cell_fep_china_hwr2_fs_funtion_grid_t

0xd468,	// (0x0004f28b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd470,	// (0x0004f293) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd478,	// (0x0004f29b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00051b4c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd480,	// (0x0004f2a3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd480,	// (0x0004f2a3) cell_fep_china_hwr2_fs_candidate_grid

0xd49f,	// (0x0004f2c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd4a7,	// (0x0004f2ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc35,	// (0x0004da58) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc35,	// (0x0004da58) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0005196c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd4af,	// (0x0004f2d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9223,	// (0x0004b046) clock_nsta_pane_cp_24_ParamLimits

0x9223,	// (0x0004b046) clock_nsta_pane_cp_24

0x92a3,	// (0x0004b0c6) indicator_nsta_pane_cp_24_ParamLimits

0x92a3,	// (0x0004b0c6) indicator_nsta_pane_cp_24

0xa31c,	// (0x0004c13f) heading_pane_g1

0x0001,

0xf8d0,	// (0x000516f3) heading_pane_g

0xadaa,	// (0x0004cbcd) grid_sct_catagory_button_pane

0xaddc,	// (0x0004cbff) scroll_pane_cp5_ParamLimits

0xb895,	// (0x0004d6b8) button_value_adjust_pane_cp5_ParamLimits

0xb895,	// (0x0004d6b8) button_value_adjust_pane_cp5

0xb97a,	// (0x0004d79d) form2_midp_time_pane_ParamLimits

0xd4bd,	// (0x0004f2e0) cell_sct_catagory_button_pane_ParamLimits

0xd4bd,	// (0x0004f2e0) cell_sct_catagory_button_pane

0xbbfa,	// (0x0004da1d) bg_button_pane_cp01_ParamLimits

0xbbfa,	// (0x0004da1d) bg_button_pane_cp01

0xbc35,	// (0x0004da58) cell_sct_catagory_button_pane_g1

0x75b9,	// (0x000493dc) popup_tb_extension_window

0xd4cf,	// (0x0004f2f2) aid_size_cell_ext_ParamLimits

0xd4cf,	// (0x0004f2f2) aid_size_cell_ext

0x063c,	// (0x0004245f) bg_tb_trans_pane_cp1_ParamLimits

0x063c,	// (0x0004245f) bg_tb_trans_pane_cp1

0xd4ef,	// (0x0004f312) grid_tb_ext_pane_ParamLimits

0xd4ef,	// (0x0004f312) grid_tb_ext_pane

0xd51d,	// (0x0004f340) cell_tb_ext_pane_ParamLimits

0xd51d,	// (0x0004f340) cell_tb_ext_pane

0xd534,	// (0x0004f357) cell_tb_ext_pane_g1_ParamLimits

0xd534,	// (0x0004f357) cell_tb_ext_pane_g1

0xd551,	// (0x0004f374) cell_tb_ext_pane_t1

0x063c,	// (0x0004245f) list_highlight_pane_cp11_ParamLimits

0x063c,	// (0x0004245f) list_highlight_pane_cp11

0x636d,	// (0x00048190) popup_uni_indicator_window_ParamLimits

0x636d,	// (0x00048190) popup_uni_indicator_window

0x0b47,	// (0x0004296a) bg_popup_sub_pane_cp14

0xd56c,	// (0x0004f38f) list_uniindi_pane

0xd578,	// (0x0004f39b) uniindi_top_pane

0x063c,	// (0x0004245f) bg_uniindi_top_pane

0xd599,	// (0x0004f3bc) uniindi_top_pane_g1

0xd5af,	// (0x0004f3d2) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00051b53) uniindi_top_pane_g

0xd5d9,	// (0x0004f3fc) uniindi_top_pane_t1

0xd605,	// (0x0004f428) list_single_uniindi_pane_ParamLimits

0xd605,	// (0x0004f428) list_single_uniindi_pane

0xbc35,	// (0x0004da58) bg_uniindi_top_pane_g1

0xd617,	// (0x0004f43a) list_single_uniindi_pane_g1

0xd62a,	// (0x0004f44d) list_single_uniindi_pane_t1

0xdbf8,	// (0x0004fa1b) control_bg_pane

0xd64f,	// (0x0004f472) bg_sctrl_sk_pane_cp1

0xd658,	// (0x0004f47b) bg_sctrl_sk_pane_cp2

0xd661,	// (0x0004f484) control_bg_pane_g1

0xd66a,	// (0x0004f48d) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00051b5c) control_bg_pane_g

0xb6de,	// (0x0004d501) cell_indicator_nsta_pane_g1_ParamLimits

0xb6ec,	// (0x0004d50f) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x000518d0) cell_indicator_nsta_pane_g_ParamLimits

0x5d9b,	// (0x00047bbe) form2_midp_time_pane_t1_ParamLimits

0x08c2,	// (0x000426e5) main_idle_act4_pane_ParamLimits

0x08c2,	// (0x000426e5) main_idle_act4_pane

0x75b9,	// (0x000493dc) popup_tb_extension_window_ParamLimits

0xd50f,	// (0x0004f332) tb_ext_find_pane_ParamLimits

0xd50f,	// (0x0004f332) tb_ext_find_pane

0xd673,	// (0x0004f496) ai_gene_pane_1_cp1

0x8f26,	// (0x0004ad49) ai_gene_pane_2_cp1

0xd67b,	// (0x0004f49e) list_single_idle_plugin_calendar_pane

0xd684,	// (0x0004f4a7) list_single_idle_plugin_notification_pane

0xd68d,	// (0x0004f4b0) list_single_idle_plugin_player_pane

0xd696,	// (0x0004f4b9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd696,	// (0x0004f4b9) list_single_idle_plugin_shortcut_pane

0xd6b8,	// (0x0004f4db) main_idle_act4_pane_t1

0xd6ca,	// (0x0004f4ed) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00051b61) main_idle_act4_pane_t

0xd6dc,	// (0x0004f4ff) middle_sk_idle_act4_pane_ParamLimits

0xd6dc,	// (0x0004f4ff) middle_sk_idle_act4_pane

0xd6f2,	// (0x0004f515) popup_clock_digital_analogue_window_cp2

0xd70c,	// (0x0004f52f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd70c,	// (0x0004f52f) shortcut_wheel_idle_act4_pane

0xbc35,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g1

0xbc35,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g2

0xbc35,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g3

0xbc35,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g4

0xbc35,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g5

0xd720,	// (0x0004f543) shortcut_wheel_idle_act4_pane_g6

0xd728,	// (0x0004f54b) shortcut_wheel_idle_act4_pane_g7

0xd730,	// (0x0004f553) shortcut_wheel_idle_act4_pane_g8

0xd738,	// (0x0004f55b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00051b66) shortcut_wheel_idle_act4_pane_g

0xbe98,	// (0x0004dcbb) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) middle_sk_idle_act4_pane_g1

0xd79c,	// (0x0004f5bf) middle_sk_idle_act4_pane_g2_ParamLimits

0xd79c,	// (0x0004f5bf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00051b89) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00051b89) middle_sk_idle_act4_pane_g

0xd7a8,	// (0x0004f5cb) middle_sk_idle_act4_pane_t1_ParamLimits

0xd7a8,	// (0x0004f5cb) middle_sk_idle_act4_pane_t1

0xd7c5,	// (0x0004f5e8) grid_ai_shortcut_pane_ParamLimits

0xd7c5,	// (0x0004f5e8) grid_ai_shortcut_pane

0xd7de,	// (0x0004f601) list_highlight_pane_cp16_ParamLimits

0xd7de,	// (0x0004f601) list_highlight_pane_cp16

0xd7eb,	// (0x0004f60e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7eb,	// (0x0004f60e) list_single_idle_plugin_shortcut_pane_g1

0xd7f7,	// (0x0004f61a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7f7,	// (0x0004f61a) list_single_idle_plugin_shortcut_pane_g2

0xd811,	// (0x0004f634) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd811,	// (0x0004f634) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00051b8e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00051b8e) list_single_idle_plugin_shortcut_pane_g

0xd824,	// (0x0004f647) cell_ai_shortcut_pane_ParamLimits

0xd824,	// (0x0004f647) cell_ai_shortcut_pane

0xd847,	// (0x0004f66a) cell_ai_shortcut_pane_g1_ParamLimits

0xd847,	// (0x0004f66a) cell_ai_shortcut_pane_g1

0xd673,	// (0x0004f496) ai_gene_pane_1_cp2

0xd869,	// (0x0004f68c) ai_gene_pane_2_cp2

0xd871,	// (0x0004f694) list_highlight_pane_cp15

0xd87a,	// (0x0004f69d) list_single_idle_plugin_calendar_pane_g1

0xd871,	// (0x0004f694) list_highlight_pane_cp17

0xd882,	// (0x0004f6a5) list_single_idle_plugin_calendar_pane_g1_copy1

0xd88a,	// (0x0004f6ad) list_single_idle_plugin_player_pane_g1

0xb011,	// (0x0004ce34) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00051b95) list_single_idle_plugin_player_pane_g

0xd892,	// (0x0004f6b5) list_single_idle_plugin_player_pane_t1

0xd8a0,	// (0x0004f6c3) list_single_idle_plugin_player_pane_t2

0xd8ae,	// (0x0004f6d1) list_single_idle_plugin_player_pane_t3

0xd8bc,	// (0x0004f6df) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00051b9a) list_single_idle_plugin_player_pane_t

0xd8ca,	// (0x0004f6ed) wait_bar_pane_cp15

0xd8d2,	// (0x0004f6f5) grid_ai_notification_pane

0xb011,	// (0x0004ce34) list_single_idle_plugin_notification_pane_g1

0xd8db,	// (0x0004f6fe) cell_ai_notification_pane_ParamLimits

0xd8db,	// (0x0004f6fe) cell_ai_notification_pane

0xd8e8,	// (0x0004f70b) cell_ai_notification_pane_g1

0xd8f0,	// (0x0004f713) cell_ai_notification_pane_t1

0xd8fe,	// (0x0004f721) tb_ext_find_button_pane

0xd906,	// (0x0004f729) tb_ext_find_pane_g1

0xd90e,	// (0x0004f731) tb_ext_find_pane_t1

0x409d,	// (0x00045ec0) tb_ext_find_button_pane_g1

0xd91c,	// (0x0004f73f) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00051ba3) tb_ext_find_button_pane_g

0xd6b8,	// (0x0004f4db) main_idle_act4_pane_t1_ParamLimits

0xd6ca,	// (0x0004f4ed) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00051b61) main_idle_act4_pane_t_ParamLimits

0xd6f2,	// (0x0004f515) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd700,	// (0x0004f523) sat_plugin_idle_act4_pane_ParamLimits

0xd700,	// (0x0004f523) sat_plugin_idle_act4_pane

0xd925,	// (0x0004f748) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd925,	// (0x0004f748) sat_plugin_idle_act4_pane_t1

0xd938,	// (0x0004f75b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd938,	// (0x0004f75b) sat_plugin_idle_act4_pane_t2

0xd94b,	// (0x0004f76e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd94b,	// (0x0004f76e) sat_plugin_idle_act4_pane_t3

0xd95e,	// (0x0004f781) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd95e,	// (0x0004f781) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00051ba8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00051ba8) sat_plugin_idle_act4_pane_t

0x629e,	// (0x000480c1) popup_battery_window_ParamLimits

0x629e,	// (0x000480c1) popup_battery_window

0x063c,	// (0x0004245f) bg_popup_sub_pane_cp25_ParamLimits

0x063c,	// (0x0004245f) bg_popup_sub_pane_cp25

0xd971,	// (0x0004f794) popup_battery_window_g1_ParamLimits

0xd971,	// (0x0004f794) popup_battery_window_g1

0xd97d,	// (0x0004f7a0) popup_battery_window_t1_ParamLimits

0xd97d,	// (0x0004f7a0) popup_battery_window_t1

0xd98f,	// (0x0004f7b2) popup_battery_window_t2_ParamLimits

0xd98f,	// (0x0004f7b2) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00051bb1) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00051bb1) popup_battery_window_t

0x8df0,	// (0x0004ac13) midp_canvas_pane_ParamLimits

0x8e68,	// (0x0004ac8b) midp_keypad_pane_ParamLimits

0x8e68,	// (0x0004ac8b) midp_keypad_pane

0x910b,	// (0x0004af2e) main_midp_pane_ParamLimits

0xb748,	// (0x0004d56b) signal_pane_g2_cp_ParamLimits

0xd9ac,	// (0x0004f7cf) aid_size_cell_midp_keypad_ParamLimits

0xd9ac,	// (0x0004f7cf) aid_size_cell_midp_keypad

0xd9c6,	// (0x0004f7e9) midp_keyp_game_grid_pane_ParamLimits

0xd9c6,	// (0x0004f7e9) midp_keyp_game_grid_pane

0xd9e6,	// (0x0004f809) midp_keyp_rocker_pane_ParamLimits

0xd9e6,	// (0x0004f809) midp_keyp_rocker_pane

0xda15,	// (0x0004f838) midp_keyp_sk_left_pane_ParamLimits

0xda15,	// (0x0004f838) midp_keyp_sk_left_pane

0xda71,	// (0x0004f894) midp_keyp_sk_right_pane_ParamLimits

0xda71,	// (0x0004f894) midp_keyp_sk_right_pane

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp03

0xdacd,	// (0x0004f8f0) midp_keyp_sk_left_pane_g1

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp04

0xdacd,	// (0x0004f8f0) midp_keyp_sk_right_pane_g1

0xbc35,	// (0x0004da58) midp_keyp_rocker_pane_g1

0xdad5,	// (0x0004f8f8) keyp_game_cell_pane_ParamLimits

0xdad5,	// (0x0004f8f8) keyp_game_cell_pane

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp02

0xdae8,	// (0x0004f90b) keyp_game_cell_pane_g1

0x62e8,	// (0x0004810b) popup_fep_vkb2_window_ParamLimits

0x62e8,	// (0x0004810b) popup_fep_vkb2_window

0x820f,	// (0x0004a032) aid_size_cell_vkb2_ParamLimits

0x820f,	// (0x0004a032) aid_size_cell_vkb2

0x8263,	// (0x0004a086) popup_fep_vkb2_window_g1_ParamLimits

0x8263,	// (0x0004a086) popup_fep_vkb2_window_g1

0x82ab,	// (0x0004a0ce) vkb2_area_bottom_pane_ParamLimits

0x82ab,	// (0x0004a0ce) vkb2_area_bottom_pane

0x82ff,	// (0x0004a122) vkb2_area_keypad_pane_ParamLimits

0x82ff,	// (0x0004a122) vkb2_area_keypad_pane

0x8345,	// (0x0004a168) vkb2_area_top_pane_ParamLimits

0x8345,	// (0x0004a168) vkb2_area_top_pane

0x83bf,	// (0x0004a1e2) vkb2_top_entry_pane_ParamLimits

0x83bf,	// (0x0004a1e2) vkb2_top_entry_pane

0x83e9,	// (0x0004a20c) vkb2_top_grid_left_pane_ParamLimits

0x83e9,	// (0x0004a20c) vkb2_top_grid_left_pane

0x8407,	// (0x0004a22a) vkb2_top_grid_right_pane_ParamLimits

0x8407,	// (0x0004a22a) vkb2_top_grid_right_pane

0x8425,	// (0x0004a248) vkb2_cell_keypad_pane_ParamLimits

0x8425,	// (0x0004a248) vkb2_cell_keypad_pane

0x84f6,	// (0x0004a319) vkb2_area_bottom_grid_pane_ParamLimits

0x84f6,	// (0x0004a319) vkb2_area_bottom_grid_pane

0x851c,	// (0x0004a33f) vkb2_area_bottom_pane_g1_ParamLimits

0x851c,	// (0x0004a33f) vkb2_area_bottom_pane_g1

0x8540,	// (0x0004a363) vkb2_area_bottom_pane_g2_ParamLimits

0x8540,	// (0x0004a363) vkb2_area_bottom_pane_g2

0x856e,	// (0x0004a391) vkb2_area_bottom_pane_g3_ParamLimits

0x856e,	// (0x0004a391) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00051bb6) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00051bb6) vkb2_area_bottom_pane_g

0x85cf,	// (0x0004a3f2) vkb2_top_cell_left_pane_ParamLimits

0x85cf,	// (0x0004a3f2) vkb2_top_cell_left_pane

0xdaf9,	// (0x0004f91c) vkb2_top_entry_pane_g1_ParamLimits

0xdaf9,	// (0x0004f91c) vkb2_top_entry_pane_g1

0xdb07,	// (0x0004f92a) vkb2_top_entry_pane_t1_ParamLimits

0xdb07,	// (0x0004f92a) vkb2_top_entry_pane_t1

0xdb39,	// (0x0004f95c) vkb2_top_entry_pane_t2_ParamLimits

0xdb39,	// (0x0004f95c) vkb2_top_entry_pane_t2

0xdb6b,	// (0x0004f98e) vkb2_top_entry_pane_t3_ParamLimits

0xdb6b,	// (0x0004f98e) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00051bbd) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00051bbd) vkb2_top_entry_pane_t

0x861c,	// (0x0004a43f) vkb2_top_grid_right_pane_g1_ParamLimits

0x861c,	// (0x0004a43f) vkb2_top_grid_right_pane_g1

0x8632,	// (0x0004a455) vkb2_top_grid_right_pane_g2_ParamLimits

0x8632,	// (0x0004a455) vkb2_top_grid_right_pane_g2

0x864a,	// (0x0004a46d) vkb2_top_grid_right_pane_g3_ParamLimits

0x864a,	// (0x0004a46d) vkb2_top_grid_right_pane_g3

0x8662,	// (0x0004a485) vkb2_top_grid_right_pane_g4_ParamLimits

0x8662,	// (0x0004a485) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00051bc4) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00051bc4) vkb2_top_grid_right_pane_g

0x8678,	// (0x0004a49b) vkb2_top_cell_left_pane_g1

0x868f,	// (0x0004a4b2) vkb2_cell_keypad_pane_g1_ParamLimits

0x868f,	// (0x0004a4b2) vkb2_cell_keypad_pane_g1

0xdb8f,	// (0x0004f9b2) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb8f,	// (0x0004f9b2) vkb2_cell_keypad_pane_t1

0x869d,	// (0x0004a4c0) vkb2_cell_bottom_grid_pane_ParamLimits

0x869d,	// (0x0004a4c0) vkb2_cell_bottom_grid_pane

0x86d6,	// (0x0004a4f9) vkb2_cell_bottom_grid_pane_g1

0xd740,	// (0x0004f563) aid_call2_pane_cp02

0xd748,	// (0x0004f56b) aid_call_pane_cp02

0xd750,	// (0x0004f573) clock_digital_number_pane_cp10

0xd758,	// (0x0004f57b) clock_digital_number_pane_cp11

0xd760,	// (0x0004f583) clock_digital_number_pane_cp12

0xd768,	// (0x0004f58b) clock_digital_number_pane_cp13

0xd770,	// (0x0004f593) clock_digital_separator_pane_cp10

0x409d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g1

0x409d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g2

0xd778,	// (0x0004f59b) popup_clock_digital_analogue_window_cp2_g3

0x409d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g4

0xd778,	// (0x0004f59b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00051b79) popup_clock_digital_analogue_window_cp2_g

0xd780,	// (0x0004f5a3) popup_clock_digital_analogue_window_cp2_t1

0xd78e,	// (0x0004f5b1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00051b84) popup_clock_digital_analogue_window_cp2_t

0xbc35,	// (0x0004da58) clock_digital_number_pane_cp10_g1

0xbc35,	// (0x0004da58) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0005196c) clock_digital_number_pane_cp10_g

0xbc35,	// (0x0004da58) clock_digital_separator_pane_cp10_g1

0xbc35,	// (0x0004da58) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0005196c) clock_digital_separator_pane_cp10_g

0xd5bb,	// (0x0004f3de) uniindi_top_pane_g3

0xd5cc,	// (0x0004f3ef) uniindi_top_pane_g4

0x84b0,	// (0x0004a2d3) vkb2_row_keypad_pane_ParamLimits

0x84b0,	// (0x0004a2d3) vkb2_row_keypad_pane

0x86f2,	// (0x0004a515) vkb2_cell_t_keypad_pane_ParamLimits

0x86f2,	// (0x0004a515) vkb2_cell_t_keypad_pane

0x8702,	// (0x0004a525) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8702,	// (0x0004a525) vkb2_cell_t_keypad_pane_cp08

0x8717,	// (0x0004a53a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8717,	// (0x0004a53a) vkb2_cell_t_keypad_pane_cp09

0x872b,	// (0x0004a54e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x872b,	// (0x0004a54e) vkb2_cell_t_keypad_pane_cp01

0x873c,	// (0x0004a55f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x873c,	// (0x0004a55f) vkb2_cell_t_keypad_pane_cp02

0x874d,	// (0x0004a570) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x874d,	// (0x0004a570) vkb2_cell_t_keypad_pane_cp03

0x875e,	// (0x0004a581) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x875e,	// (0x0004a581) vkb2_cell_t_keypad_pane_cp04

0x876f,	// (0x0004a592) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x876f,	// (0x0004a592) vkb2_cell_t_keypad_pane_cp05

0x8780,	// (0x0004a5a3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8780,	// (0x0004a5a3) vkb2_cell_t_keypad_pane_cp06

0x8793,	// (0x0004a5b6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8793,	// (0x0004a5b6) vkb2_cell_t_keypad_pane_cp07

0x87a8,	// (0x0004a5cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x87a8,	// (0x0004a5cb) vkb2_cell_t_keypad_pane_cp10

0xbe98,	// (0x0004dcbb) vkb2_cell_t_keypad_pane_g1

0xdba6,	// (0x0004f9c9) vkb2_cell_t_keypad_pane_t1

0xdbf8,	// (0x0004fa1b) popup_grid_graphic2_window

0xdbb8,	// (0x0004f9db) aid_size_cell_graphic2_ParamLimits

0xdbb8,	// (0x0004f9db) aid_size_cell_graphic2

0xdca4,	// (0x0004fac7) bg_popup_window_pane_cp21_ParamLimits

0xdca4,	// (0x0004fac7) bg_popup_window_pane_cp21

0xdcb2,	// (0x0004fad5) graphic2_pages_pane_ParamLimits

0xdcb2,	// (0x0004fad5) graphic2_pages_pane

0xdcf8,	// (0x0004fb1b) grid_graphic2_control_pane_ParamLimits

0xdcf8,	// (0x0004fb1b) grid_graphic2_control_pane

0xdd36,	// (0x0004fb59) grid_graphic2_pane_ParamLimits

0xdd36,	// (0x0004fb59) grid_graphic2_pane

0xddac,	// (0x0004fbcf) cell_graphic2_pane

0xdbf8,	// (0x0004fa1b) main_comp_mode_pane

0xce22,	// (0x0004ec45) list_ai3_gene_pane_ParamLimits

0xd1ee,	// (0x0004f011) bg_popup_window_pane_cp19_ParamLimits

0xd1fa,	// (0x0004f01d) bg_touch_area_indi_pane_ParamLimits

0xd1fa,	// (0x0004f01d) bg_touch_area_indi_pane

0xd210,	// (0x0004f033) bg_touch_area_indi_pane_cp01_ParamLimits

0xd210,	// (0x0004f033) bg_touch_area_indi_pane_cp01

0xd226,	// (0x0004f049) bg_touch_area_indi_pane_cp02_ParamLimits

0xd226,	// (0x0004f049) bg_touch_area_indi_pane_cp02

0xd240,	// (0x0004f063) bg_touch_area_indi_pane_cp03_ParamLimits

0xd240,	// (0x0004f063) bg_touch_area_indi_pane_cp03

0xd25a,	// (0x0004f07d) popup_slider_window_g1_ParamLimits

0xd276,	// (0x0004f099) popup_slider_window_g2_ParamLimits

0xd292,	// (0x0004f0b5) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00051b0e) popup_slider_window_g_ParamLimits

0xd2f8,	// (0x0004f11b) popup_slider_window_t1_ParamLimits

0xd36c,	// (0x0004f18f) small_volume_slider_vertical_pane_ParamLimits

0xddac,	// (0x0004fbcf) cell_graphic2_pane_ParamLimits

0xde01,	// (0x0004fc24) bg_button_pane_cp10_ParamLimits

0xde01,	// (0x0004fc24) bg_button_pane_cp10

0xde16,	// (0x0004fc39) bg_button_pane_cp11_ParamLimits

0xde16,	// (0x0004fc39) bg_button_pane_cp11

0xde2b,	// (0x0004fc4e) graphic2_pages_pane_g1_ParamLimits

0xde2b,	// (0x0004fc4e) graphic2_pages_pane_g1

0xde46,	// (0x0004fc69) graphic2_pages_pane_g2_ParamLimits

0xde46,	// (0x0004fc69) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00051bd2) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00051bd2) graphic2_pages_pane_g

0xde5e,	// (0x0004fc81) graphic2_pages_pane_t1_ParamLimits

0xde5e,	// (0x0004fc81) graphic2_pages_pane_t1

0xde74,	// (0x0004fc97) cell_graphic2_control_pane_ParamLimits

0xde74,	// (0x0004fc97) cell_graphic2_control_pane

0xde94,	// (0x0004fcb7) cell_graphic2_pane_g1_ParamLimits

0xde94,	// (0x0004fcb7) cell_graphic2_pane_g1

0xdea1,	// (0x0004fcc4) cell_graphic2_pane_g2_ParamLimits

0xdea1,	// (0x0004fcc4) cell_graphic2_pane_g2

0xdeae,	// (0x0004fcd1) cell_graphic2_pane_g3_ParamLimits

0xdeae,	// (0x0004fcd1) cell_graphic2_pane_g3

0xdebb,	// (0x0004fcde) cell_graphic2_pane_g4_ParamLimits

0xdebb,	// (0x0004fcde) cell_graphic2_pane_g4

0xdec8,	// (0x0004fceb) cell_graphic2_pane_g5_ParamLimits

0xdec8,	// (0x0004fceb) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00051bd7) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00051bd7) cell_graphic2_pane_g

0xdee3,	// (0x0004fd06) cell_graphic2_pane_t1_ParamLimits

0xdee3,	// (0x0004fd06) cell_graphic2_pane_t1

0x96af,	// (0x0004b4d2) grid_highlight_pane_cp11_ParamLimits

0x96af,	// (0x0004b4d2) grid_highlight_pane_cp11

0x063c,	// (0x0004245f) bg_button_pane_cp05

0xdf1a,	// (0x0004fd3d) cell_graphic2_control_pane_g1

0xbc35,	// (0x0004da58) bg_touch_area_indi_pane_g1

0xdf42,	// (0x0004fd65) aid_cmod_rocker_key_size

0xdf4c,	// (0x0004fd6f) aid_cmode_itu_key_size

0xdf56,	// (0x0004fd79) main_cmode_video_pane

0xdf60,	// (0x0004fd83) main_comp_mode_itu_pane

0xdf6c,	// (0x0004fd8f) main_comp_mode_rocker_pane

0xdf78,	// (0x0004fd9b) cell_cmode_rocker_pane_ParamLimits

0xdf78,	// (0x0004fd9b) cell_cmode_rocker_pane

0xdf8c,	// (0x0004fdaf) cell_cmode_itu_pane_ParamLimits

0xdf8c,	// (0x0004fdaf) cell_cmode_itu_pane

0x0b47,	// (0x0004296a) bg_button_pane_cp06_ParamLimits

0x0b47,	// (0x0004296a) bg_button_pane_cp06

0xbe98,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) cell_cmode_rocker_pane_g1

0xd413,	// (0x0004f236) cell_cmode_rocker_pane_g2_ParamLimits

0xd413,	// (0x0004f236) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00051be7) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00051be7) cell_cmode_rocker_pane_g

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp07

0xdfa3,	// (0x0004fdc6) cell_cmode_itu_pane_g1

0xdfac,	// (0x0004fdcf) cell_cmode_itu_pane_t1

0xdfba,	// (0x0004fddd) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00051bec) cell_cmode_itu_pane_t

0xd63f,	// (0x0004f462) aid_touch_ctrl_left

0xd647,	// (0x0004f46a) aid_touch_ctrl_right

0xdbf8,	// (0x0004fa1b) compa_mode_pane

0xdfc8,	// (0x0004fdeb) aid_cmod_rocker_key_size_cp

0xdfd2,	// (0x0004fdf5) aid_cmode_itu_key_size_cp

0xdfdc,	// (0x0004fdff) compa_mode_pane_g1

0xdfe4,	// (0x0004fe07) compa_mode_pane_g2

0xdfec,	// (0x0004fe0f) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00051bf1) compa_mode_pane_g

0xdff4,	// (0x0004fe17) main_comp_mode_itu_pane_cp

0xdffc,	// (0x0004fe1f) main_comp_mode_rocker_pane_cp

0xe004,	// (0x0004fe27) cell_cmode_itu_pane_cp_ParamLimits

0xe004,	// (0x0004fe27) cell_cmode_itu_pane_cp

0xe019,	// (0x0004fe3c) cell_cmode_rocker_pane_cp_ParamLimits

0xe019,	// (0x0004fe3c) cell_cmode_rocker_pane_cp

0x0b47,	// (0x0004296a) bg_button_pane_cp06_cp_ParamLimits

0x0b47,	// (0x0004296a) bg_button_pane_cp06_cp

0xbe98,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbe98,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_cp

0xbc35,	// (0x0004da58) cell_cmode_rocker_pane_g2_cp

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp07_cp

0xe02b,	// (0x0004fe4e) cell_cmode_itu_pane_g1_cp

0xe034,	// (0x0004fe57) cell_cmode_itu_pane_t1_cp

0xe034,	// (0x0004fe57) cell_cmode_itu_pane_t2_cp

0xab73,	// (0x0004c996) settings_code_pane_cp2

0xdc5a,	// (0x0004fa7d) bg_popup_window_pane_cp3_ParamLimits

0x0850,	// (0x00042673) heading_pane_cp3_ParamLimits

0x085c,	// (0x0004267f) listscroll_popup_graphic_pane_ParamLimits

0x7cb7,	// (0x00049ada) fep_hwr_aid_pane_ParamLimits

0x8184,	// (0x00049fa7) aid_touch_sctrl_top_ParamLimits

0x8191,	// (0x00049fb4) sctrl_sk_top_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00051b27) sctrl_sk_top_pane_g_ParamLimits

0x819e,	// (0x00049fc1) sctrl_sk_top_pane_t1_ParamLimits

0x8184,	// (0x00049fa7) aid_touch_sctrl_bottom_ParamLimits

0x819e,	// (0x00049fc1) sctrl_sk_bottom_pane_t1_ParamLimits

0xd585,	// (0x0004f3a8) aid_area_touch_clock

0x8387,	// (0x0004a1aa) aid_vkb2_area_top_pane_cell_ParamLimits

0x8387,	// (0x0004a1aa) aid_vkb2_area_top_pane_cell

0x84d2,	// (0x0004a2f5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x84d2,	// (0x0004a2f5) aid_vkb2_area_bottom_pane_cell

0xdaf1,	// (0x0004f914) popup_char_count_window

0xe042,	// (0x0004fe65) popup_char_count_window_g1

0xe04b,	// (0x0004fe6e) popup_char_count_window_g2

0xe054,	// (0x0004fe77) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00051bf8) popup_char_count_window_g

0xe05d,	// (0x0004fe80) popup_char_count_window_t1

0x8241,	// (0x0004a064) popup_fep_char_preview_window_ParamLimits

0x8241,	// (0x0004a064) popup_fep_char_preview_window

0x83a5,	// (0x0004a1c8) vkb2_top_candi_pane_ParamLimits

0x83a5,	// (0x0004a1c8) vkb2_top_candi_pane

0xe06b,	// (0x0004fe8e) cell_vkb2_top_candi_pane_ParamLimits

0xe06b,	// (0x0004fe8e) cell_vkb2_top_candi_pane

0x9c99,	// (0x0004babc) bg_popup_fep_char_preview_window_ParamLimits

0x9c99,	// (0x0004babc) bg_popup_fep_char_preview_window

0x87bd,	// (0x0004a5e0) popup_fep_char_preview_window_t1_ParamLimits

0x87bd,	// (0x0004a5e0) popup_fep_char_preview_window_t1

0xe0bc,	// (0x0004fedf) bg_popup_fep_char_preview_window_g1

0xe0c4,	// (0x0004fee7) bg_popup_fep_char_preview_window_g2

0xe0cc,	// (0x0004feef) bg_popup_fep_char_preview_window_g3

0xe0d4,	// (0x0004fef7) bg_popup_fep_char_preview_window_g4

0xe0dc,	// (0x0004feff) bg_popup_fep_char_preview_window_g5

0x87f7,	// (0x0004a61a) bg_popup_fep_char_preview_window_g6

0xe0e4,	// (0x0004ff07) bg_popup_fep_char_preview_window_g7

0xe0ec,	// (0x0004ff0f) bg_popup_fep_char_preview_window_g8

0xe0f4,	// (0x0004ff17) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00051bff) bg_popup_fep_char_preview_window_g

0xbe98,	// (0x0004dcbb) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) cell_vkb2_top_candi_pane_g1

0xc1d9,	// (0x0004dffc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc1d9,	// (0x0004dffc) cell_vkb2_top_candi_pane_g2

0xc1fa,	// (0x0004e01d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc1fa,	// (0x0004e01d) cell_vkb2_top_candi_pane_g3

0x87ff,	// (0x0004a622) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87ff,	// (0x0004a622) cell_vkb2_top_candi_pane_g4

0xe0fc,	// (0x0004ff1f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe0fc,	// (0x0004ff1f) cell_vkb2_top_candi_pane_g5

0xd413,	// (0x0004f236) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd413,	// (0x0004f236) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00051c12) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00051c12) cell_vkb2_top_candi_pane_g

0x8820,	// (0x0004a643) cell_vkb2_top_candi_pane_t1

0x7a39,	// (0x0004985c) aid_size_touch_slider_mark_ParamLimits

0x7a39,	// (0x0004985c) aid_size_touch_slider_mark

0xdce8,	// (0x0004fb0b) grid_graphic2_catg_pane_ParamLimits

0xdce8,	// (0x0004fb0b) grid_graphic2_catg_pane

0xdd86,	// (0x0004fba9) popup_grid_graphic2_window_t1_ParamLimits

0xdd86,	// (0x0004fba9) popup_grid_graphic2_window_t1

0xdd98,	// (0x0004fbbb) popup_grid_graphic2_window_t2_ParamLimits

0xdd98,	// (0x0004fbbb) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00051bcd) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00051bcd) popup_grid_graphic2_window_t

0x063c,	// (0x0004245f) bg_button_pane_cp05_ParamLimits

0xdf1a,	// (0x0004fd3d) cell_graphic2_control_pane_g1_ParamLimits

0xe11d,	// (0x0004ff40) cell_graphic2_catg_pane_ParamLimits

0xe11d,	// (0x0004ff40) cell_graphic2_catg_pane

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp12

0xe12f,	// (0x0004ff52) cell_graphic2_catg_pane_g1

0xd551,	// (0x0004f374) cell_tb_ext_pane_t1_ParamLimits

0x85ef,	// (0x0004a412) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85ef,	// (0x0004a412) vkb2_top_cell_right_narrow_pane

0x8607,	// (0x0004a42a) vkb2_top_cell_right_wide_pane_ParamLimits

0x8607,	// (0x0004a42a) vkb2_top_cell_right_wide_pane

0x7ca9,	// (0x00049acc) bg_vkb2_func_pane_ParamLimits

0x7ca9,	// (0x00049acc) bg_vkb2_func_pane

0x8678,	// (0x0004a49b) vkb2_top_cell_left_pane_g1_ParamLimits

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp03

0x86d6,	// (0x0004a4f9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9643,	// (0x0004b466) bg_vkb2_func_pane_g1

0x964b,	// (0x0004b46e) bg_vkb2_func_pane_g2

0x965b,	// (0x0004b47e) bg_vkb2_func_pane_g3

0x9653,	// (0x0004b476) bg_vkb2_func_pane_g4

0x9663,	// (0x0004b486) bg_vkb2_func_pane_g5

0x966b,	// (0x0004b48e) bg_vkb2_func_pane_g6

0x9673,	// (0x0004b496) bg_vkb2_func_pane_g7

0x967b,	// (0x0004b49e) bg_vkb2_func_pane_g8

0x963b,	// (0x0004b45e) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00051c1f) bg_vkb2_func_pane_g

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp01

0x8678,	// (0x0004a49b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8678,	// (0x0004a49b) vkb2_top_cell_right_wide_pane_g1

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7ca9,	// (0x00049acc) bg_vkb2_fuc_pane_cp02

0x86d6,	// (0x0004a4f9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86d6,	// (0x0004a4f9) vkb2_top_cell_right_narrow_pane_g1

0xd168,	// (0x0004ef8b) aid_touch_area_decrease_ParamLimits

0xd168,	// (0x0004ef8b) aid_touch_area_decrease

0xd18c,	// (0x0004efaf) aid_touch_area_increase_ParamLimits

0xd18c,	// (0x0004efaf) aid_touch_area_increase

0xd1a4,	// (0x0004efc7) aid_touch_area_mute_ParamLimits

0xd1a4,	// (0x0004efc7) aid_touch_area_mute

0xd1c0,	// (0x0004efe3) aid_touch_area_slider_ParamLimits

0xd1c0,	// (0x0004efe3) aid_touch_area_slider

0xd2ae,	// (0x0004f0d1) popup_slider_window_g4_ParamLimits

0xd2ae,	// (0x0004f0d1) popup_slider_window_g4

0xd2c6,	// (0x0004f0e9) popup_slider_window_g5_ParamLimits

0xd2c6,	// (0x0004f0e9) popup_slider_window_g5

0xd2e8,	// (0x0004f10b) popup_slider_window_g6_ParamLimits

0xd2e8,	// (0x0004f10b) popup_slider_window_g6

0xd326,	// (0x0004f149) popup_slider_window_t2_ParamLimits

0xd326,	// (0x0004f149) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00051b1b) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00051b1b) popup_slider_window_t

0xd33e,	// (0x0004f161) slider_pane_ParamLimits

0xd33e,	// (0x0004f161) slider_pane

0xe138,	// (0x0004ff5b) slider_pane_g1_ParamLimits

0xe138,	// (0x0004ff5b) slider_pane_g1

0xe14c,	// (0x0004ff6f) slider_pane_g2_ParamLimits

0xe14c,	// (0x0004ff6f) slider_pane_g2

0xe162,	// (0x0004ff85) slider_pane_g3_ParamLimits

0xe162,	// (0x0004ff85) slider_pane_g3

0x0003,

0xfe0f,	// (0x00051c32) slider_pane_g_ParamLimits

0xfe0f,	// (0x00051c32) slider_pane_g

0x761b,	// (0x0004943e) popup_tb_float_extension_window_ParamLimits

0x761b,	// (0x0004943e) popup_tb_float_extension_window

0xe18e,	// (0x0004ffb1) aid_size_cell_tb_float_ext

0xdbf8,	// (0x0004fa1b) bg_popup_sub_window_cp28

0xe19a,	// (0x0004ffbd) grid_tb_float_ext_pane

0xe1a6,	// (0x0004ffc9) cell_tb_float_ext_pane_ParamLimits

0xe1a6,	// (0x0004ffc9) cell_tb_float_ext_pane

0xe1c2,	// (0x0004ffe5) cell_tb_float_ext_pane_g1

0xe1cb,	// (0x0004ffee) grid_highlight_pane_cp12

0x7df0,	// (0x00049c13) cell_last_hwr_side_pane_ParamLimits

0x7df0,	// (0x00049c13) cell_last_hwr_side_pane

0xbc35,	// (0x0004da58) cell_last_hwr_side_pane_g1

0xe1d4,	// (0x0004fff7) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00051c3b) cell_last_hwr_side_pane_g

0x859e,	// (0x0004a3c1) vkb2_area_bottom_space_btn_pane_ParamLimits

0x859e,	// (0x0004a3c1) vkb2_area_bottom_space_btn_pane

0xbe98,	// (0x0004dcbb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdba6,	// (0x0004f9c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8820,	// (0x0004a643) cell_vkb2_top_candi_pane_t1_ParamLimits

0x883e,	// (0x0004a661) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x883e,	// (0x0004a661) vkb2_area_bottom_space_btn_pane_g1

0x8878,	// (0x0004a69b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8878,	// (0x0004a69b) vkb2_area_bottom_space_btn_pane_g2

0x88ae,	// (0x0004a6d1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88ae,	// (0x0004a6d1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00051c40) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00051c40) vkb2_area_bottom_space_btn_pane_g

0x7d60,	// (0x00049b83) cel_fep_hwr_func_pane_ParamLimits

0x7d60,	// (0x00049b83) cel_fep_hwr_func_pane

0x7d9c,	// (0x00049bbf) cell_hwr_side_button_pane_ParamLimits

0x7d9c,	// (0x00049bbf) cell_hwr_side_button_pane

0xd585,	// (0x0004f3a8) aid_area_touch_clock_ParamLimits

0x063c,	// (0x0004245f) bg_uniindi_top_pane_ParamLimits

0xd599,	// (0x0004f3bc) uniindi_top_pane_g1_ParamLimits

0xd5af,	// (0x0004f3d2) uniindi_top_pane_g2_ParamLimits

0xd5bb,	// (0x0004f3de) uniindi_top_pane_g3_ParamLimits

0xd5cc,	// (0x0004f3ef) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00051b53) uniindi_top_pane_g_ParamLimits

0xd5d9,	// (0x0004f3fc) uniindi_top_pane_t1_ParamLimits

0x063c,	// (0x0004245f) bg_vkb2_func_pane_cp01_ParamLimits

0x063c,	// (0x0004245f) bg_vkb2_func_pane_cp01

0xe1dd,	// (0x00050000) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1dd,	// (0x00050000) cel_fep_hwr_func_pane_g1

0x063c,	// (0x0004245f) bg_vkb2_func_pane_cp02_ParamLimits

0x063c,	// (0x0004245f) bg_vkb2_func_pane_cp02

0xe1dd,	// (0x00050000) cell_hwr_side_button_pane_g1_ParamLimits

0xe1dd,	// (0x00050000) cell_hwr_side_button_pane_g1

0x94c0,	// (0x0004b2e3) status_pane_g4_ParamLimits

0x94c0,	// (0x0004b2e3) status_pane_g4

0x94da,	// (0x0004b2fd) status_pane_t1

0xb9e8,	// (0x0004d80b) form2_midp_gauge_slider_cont_pane

0xb9f0,	// (0x0004d813) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba02,	// (0x0004d825) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba14,	// (0x0004d837) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0005191f) form2_midp_gauge_slider_pane_t_ParamLimits

0xba26,	// (0x0004d849) form2_midp_slider_pane_ParamLimits

0x8201,	// (0x0004a024) aid_size_cell_func_vkb2_ParamLimits

0x8201,	// (0x0004a024) aid_size_cell_func_vkb2

0xe17a,	// (0x0004ff9d) slider_pane_g4_ParamLimits

0xe17a,	// (0x0004ff9d) slider_pane_g4

0x88f8,	// (0x0004a71b) form2_midp_gauge_slider_pane_t2_cp01

0x8906,	// (0x0004a729) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8906,	// (0x0004a729) form2_midp_gauge_slider_pane_t3_cp01

0x8923,	// (0x0004a746) form2_midp_slider_pane_cp01

0xdbf8,	// (0x0004fa1b) navi_smil_pane

0xe216,	// (0x00050039) navi_smil_pane_g1

0xe21e,	// (0x00050041) navi_smil_pane_t1

0xe1eb,	// (0x0005000e) form2_midp_slider_pane_g1

0xe1f4,	// (0x00050017) form2_midp_slider_pane_g2

0xe1fc,	// (0x0005001f) form2_midp_slider_pane_g3

0xe1eb,	// (0x0005000e) form2_midp_slider_pane_g4

0xe204,	// (0x00050027) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00051c49) form2_midp_slider_pane_g

0x88e8,	// (0x0004a70b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88e8,	// (0x0004a70b) vkb2_area_bottom_space_btn_pane_g4

0x92df,	// (0x0004b102) lc0_navi_pane_ParamLimits

0x92df,	// (0x0004b102) lc0_navi_pane

0x935b,	// (0x0004b17e) lc0_stat_indi_pane_ParamLimits

0x935b,	// (0x0004b17e) lc0_stat_indi_pane

0x9372,	// (0x0004b195) ls0_title_pane_ParamLimits

0x9372,	// (0x0004b195) ls0_title_pane

0x0b47,	// (0x0004296a) bg_popup_sub_pane_cp14_ParamLimits

0xd56c,	// (0x0004f38f) list_uniindi_pane_ParamLimits

0xd578,	// (0x0004f39b) uniindi_top_pane_ParamLimits

0xd617,	// (0x0004f43a) list_single_uniindi_pane_g1_ParamLimits

0xd62a,	// (0x0004f44d) list_single_uniindi_pane_t1_ParamLimits

0x892c,	// (0x0004a74f) lc0_stat_clock_pane_ParamLimits

0x892c,	// (0x0004a74f) lc0_stat_clock_pane

0xe22c,	// (0x0005004f) lc0_stat_indi_pane_g1_ParamLimits

0xe22c,	// (0x0005004f) lc0_stat_indi_pane_g1

0xe239,	// (0x0005005c) lc0_stat_indi_pane_g2_ParamLimits

0xe239,	// (0x0005005c) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00051c54) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00051c54) lc0_stat_indi_pane_g

0x8939,	// (0x0004a75c) lc0_uni_indicator_pane_ParamLimits

0x8939,	// (0x0004a75c) lc0_uni_indicator_pane

0xe246,	// (0x00050069) ls0_title_pane_g1_ParamLimits

0xe246,	// (0x00050069) ls0_title_pane_g1

0xe25a,	// (0x0005007d) ls0_title_pane_t1_ParamLimits

0xe25a,	// (0x0005007d) ls0_title_pane_t1

0x8946,	// (0x0004a769) lc0_uni_indicator_pane_g1_ParamLimits

0x8946,	// (0x0004a769) lc0_uni_indicator_pane_g1

0xe290,	// (0x000500b3) lc0_stat_clock_pane_t1

0xdbf8,	// (0x0004fa1b) main_ai5_pane

0xe29e,	// (0x000500c1) ai5_sk_pane_ParamLimits

0xe29e,	// (0x000500c1) ai5_sk_pane

0xe2ab,	// (0x000500ce) cell_ai5_widget_pane_ParamLimits

0xe2ab,	// (0x000500ce) cell_ai5_widget_pane

0xe84d,	// (0x00050670) aid_size_cell_widget_grid

0xe85b,	// (0x0005067e) bg_ai5_widget_pane_ParamLimits

0xe85b,	// (0x0005067e) bg_ai5_widget_pane

0xe8d3,	// (0x000506f6) cell_ai5_widget_pane_g2

0xe8e7,	// (0x0005070a) cell_ai5_widget_pane_g3

0xe901,	// (0x00050724) cell_ai5_widget_pane_g4

0xe911,	// (0x00050734) cell_ai5_widget_pane_g5

0xe921,	// (0x00050744) cell_ai5_widget_pane_g6

0xe92d,	// (0x00050750) cell_ai5_widget_pane_g7

0xe975,	// (0x00050798) cell_ai5_widget_pane_t1_ParamLimits

0xe975,	// (0x00050798) cell_ai5_widget_pane_t1

0xe992,	// (0x000507b5) cell_ai5_widget_pane_t2_ParamLimits

0xe992,	// (0x000507b5) cell_ai5_widget_pane_t2

0xe9aa,	// (0x000507cd) cell_ai5_widget_pane_t3_ParamLimits

0xe9aa,	// (0x000507cd) cell_ai5_widget_pane_t3

0xe9c2,	// (0x000507e5) cell_ai5_widget_pane_t4_ParamLimits

0xe9c2,	// (0x000507e5) cell_ai5_widget_pane_t4

0xe9e8,	// (0x0005080b) cell_ai5_widget_pane_t5_ParamLimits

0xe9e8,	// (0x0005080b) cell_ai5_widget_pane_t5

0xea08,	// (0x0005082b) cell_ai5_widget_pane_t6_ParamLimits

0xea08,	// (0x0005082b) cell_ai5_widget_pane_t6

0xea1a,	// (0x0005083d) cell_ai5_widget_pane_t7_ParamLimits

0xea1a,	// (0x0005083d) cell_ai5_widget_pane_t7

0xea33,	// (0x00050856) cell_ai5_widget_pane_t8_ParamLimits

0xea33,	// (0x00050856) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00051c6e) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00051c6e) cell_ai5_widget_pane_t

0xea92,	// (0x000508b5) grid_ai5_widget_pane

0x0b47,	// (0x0004296a) highlight_cell_ai5_widget_pane_ParamLimits

0x0b47,	// (0x0004296a) highlight_cell_ai5_widget_pane

0xeaa0,	// (0x000508c3) ai5_sk_left_pane

0xeaaa,	// (0x000508cd) ai5_sk_middle_pane

0xeab4,	// (0x000508d7) ai5_sk_right_pane

0xeabe,	// (0x000508e1) bg_ai5_widget_pane_g1_ParamLimits

0xeabe,	// (0x000508e1) bg_ai5_widget_pane_g1

0xeaca,	// (0x000508ed) bg_ai5_widget_pane_g2_ParamLimits

0xeaca,	// (0x000508ed) bg_ai5_widget_pane_g2

0xead6,	// (0x000508f9) bg_ai5_widget_pane_g3_ParamLimits

0xead6,	// (0x000508f9) bg_ai5_widget_pane_g3

0xeae2,	// (0x00050905) bg_ai5_widget_pane_g4_ParamLimits

0xeae2,	// (0x00050905) bg_ai5_widget_pane_g4

0xeaee,	// (0x00050911) bg_ai5_widget_pane_g5_ParamLimits

0xeaee,	// (0x00050911) bg_ai5_widget_pane_g5

0xeafa,	// (0x0005091d) bg_ai5_widget_pane_g6_ParamLimits

0xeafa,	// (0x0005091d) bg_ai5_widget_pane_g6

0xeb06,	// (0x00050929) bg_ai5_widget_pane_g7_ParamLimits

0xeb06,	// (0x00050929) bg_ai5_widget_pane_g7

0xeb12,	// (0x00050935) bg_ai5_widget_pane_g8_ParamLimits

0xeb12,	// (0x00050935) bg_ai5_widget_pane_g8

0xeb1e,	// (0x00050941) bg_ai5_widget_pane_g9_ParamLimits

0xeb1e,	// (0x00050941) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00051c83) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00051c83) bg_ai5_widget_pane_g

0xeb56,	// (0x00050979) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb56,	// (0x00050979) cell_shortcut_ai5_widget_pane

0x8ddc,	// (0x0004abff) bg_cell_shortcut_ai5_widget_pane

0xeb69,	// (0x0005098c) cell_grid_ai5_widget_pane_g1

0x8ddc,	// (0x0004abff) highlight_cell_shortcut_ai5_widget_pane

0x964b,	// (0x0004b46e) ai5_sk_left_pane_g1

0xeb72,	// (0x00050995) ai5_sk_left_pane_g2

0xeb7a,	// (0x0005099d) ai5_sk_left_pane_g3

0xeb82,	// (0x000509a5) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00051c96) ai5_sk_left_pane_g

0xeb8a,	// (0x000509ad) ai5_sk_left_pane_t1

0x9643,	// (0x0004b466) ai5_sk_right_pane_g1

0xeb98,	// (0x000509bb) ai5_sk_right_pane_g2

0xeba0,	// (0x000509c3) ai5_sk_right_pane_g3

0xeba8,	// (0x000509cb) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00051c9f) ai5_sk_right_pane_g

0xebb0,	// (0x000509d3) ai5_sk_right_pane_t1

0x9643,	// (0x0004b466) ai5_sk_middle_pane_g1

0x964b,	// (0x0004b46e) ai5_sk_middle_pane_g2

0x9663,	// (0x0004b486) ai5_sk_middle_pane_g3

0xeba0,	// (0x000509c3) ai5_sk_middle_pane_g4

0xeb7a,	// (0x0005099d) ai5_sk_middle_pane_g5

0xebbe,	// (0x000509e1) ai5_sk_middle_pane_g6

0xebc6,	// (0x000509e9) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00051ca8) ai5_sk_middle_pane_g

0x916b,	// (0x0004af8e) aid_touch_area_size_lc0_ParamLimits

0x916b,	// (0x0004af8e) aid_touch_area_size_lc0

0x7eff,	// (0x00049d22) cell_hwr_candidate_pane_t1_ParamLimits

0x9189,	// (0x0004afac) aid_touch_navi_pane

0x9472,	// (0x0004b295) status_dt_navi_pane_ParamLimits

0x9472,	// (0x0004b295) status_dt_navi_pane

0x947f,	// (0x0004b2a2) status_dt_sta_pane_ParamLimits

0x947f,	// (0x0004b2a2) status_dt_sta_pane

0xebce,	// (0x000509f1) dt_sta_controll_pane

0xebdb,	// (0x000509fe) dt_sta_indi_pane

0xebec,	// (0x00050a0f) dt_sta_title_pane

0x063c,	// (0x0004245f) bg_dt_sta_indi_pane_ParamLimits

0x063c,	// (0x0004245f) bg_dt_sta_indi_pane

0xebff,	// (0x00050a22) dt_sta_battery_pane

0xec07,	// (0x00050a2a) dt_sta_indi_pane_g1

0xec10,	// (0x00050a33) dt_sta_indi_pane_g2

0xec19,	// (0x00050a3c) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00051cb7) dt_sta_indi_pane_g

0xec22,	// (0x00050a45) dt_sta_signal_pane

0x0b47,	// (0x0004296a) bg_dt_sta_title_pane_ParamLimits

0x0b47,	// (0x0004296a) bg_dt_sta_title_pane

0xec2b,	// (0x00050a4e) dt_sta_title_pane_g1

0xec33,	// (0x00050a56) dt_sta_title_pane_t1_ParamLimits

0xec33,	// (0x00050a56) dt_sta_title_pane_t1

0xdbf8,	// (0x0004fa1b) bg_dt_sta_control_pane

0xec48,	// (0x00050a6b) dt_sta_controll_pane_g1

0xec51,	// (0x00050a74) bg_dt_sta_title_pane_g1

0xec5a,	// (0x00050a7d) bg_dt_sta_title_pane_g2

0xec63,	// (0x00050a86) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00051cbe) bg_dt_sta_title_pane_g

0xbc35,	// (0x0004da58) bg_dt_sta_indi_pane_g1

0xec6c,	// (0x00050a8f) dt_sta_signal_pane_g1

0xec74,	// (0x00050a97) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00051cc5) dt_sta_signal_pane_g

0xec7c,	// (0x00050a9f) dt_sta_battery_pane_g1

0xec85,	// (0x00050aa8) dt_sta_battery_pane_t1

0xbc35,	// (0x0004da58) bg_dt_sta_control_pane_g1

0x41f8,	// (0x0004601b) fep_china_uni_eep_pane

0x4200,	// (0x00046023) fep_china_uni_entry_pane_ParamLimits

0x4210,	// (0x00046033) popup_fep_china_uni_window_g1_ParamLimits

0x4220,	// (0x00046043) popup_fep_china_uni_window_g2_ParamLimits

0x4220,	// (0x00046043) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00051545) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00051545) popup_fep_china_uni_window_g

0xec94,	// (0x00050ab7) fep_china_uni_eep_pane_g1

0xec9c,	// (0x00050abf) fep_china_uni_eep_pane_t1

0xe20d,	// (0x00050030) aid_touch_area_size_smil_player

0x92d7,	// (0x0004b0fa) lc0_clock_pane

0x94ce,	// (0x0004b2f1) status_pane_g5_ParamLimits

0x94ce,	// (0x0004b2f1) status_pane_g5

0x72a0,	// (0x000490c3) popup_keymap_window

0x9494,	// (0x0004b2b7) status_icon_pane

0xe8e7,	// (0x0005070a) cell_ai5_widget_pane_g3_ParamLimits

0xe901,	// (0x00050724) cell_ai5_widget_pane_g4_ParamLimits

0xe911,	// (0x00050734) cell_ai5_widget_pane_g5_ParamLimits

0xe939,	// (0x0005075c) cell_ai5_widget_pane_g8_ParamLimits

0xe939,	// (0x0005075c) cell_ai5_widget_pane_g8

0xe94d,	// (0x00050770) cell_ai5_widget_pane_g9_ParamLimits

0xe94d,	// (0x00050770) cell_ai5_widget_pane_g9

0xe961,	// (0x00050784) cell_ai5_widget_pane_g10_ParamLimits

0xe961,	// (0x00050784) cell_ai5_widget_pane_g10

0xecab,	// (0x00050ace) status_icon_pane_g1

0xdbf8,	// (0x0004fa1b) bg_popup_sub_pane_cp13

0xecb3,	// (0x00050ad6) popup_keymap_window_t1

0x90b4,	// (0x0004aed7) control_pane_g6_ParamLimits

0x90b4,	// (0x0004aed7) control_pane_g6

0x90c1,	// (0x0004aee4) control_pane_g7_ParamLimits

0x90c1,	// (0x0004aee4) control_pane_g7

0x90ce,	// (0x0004aef1) control_pane_g8_ParamLimits

0x90ce,	// (0x0004aef1) control_pane_g8

0xebce,	// (0x000509f1) dt_sta_controll_pane_ParamLimits

0xebdb,	// (0x000509fe) dt_sta_indi_pane_ParamLimits

0xebec,	// (0x00050a0f) dt_sta_title_pane_ParamLimits

0x0a89,	// (0x000428ac) aid_size_touch_scroll_bar_cale

0x62b6,	// (0x000480d9) popup_discreet_window_ParamLimits

0x62b6,	// (0x000480d9) popup_discreet_window

0x6344,	// (0x00048167) popup_sk_window

0x9c99,	// (0x0004babc) bg_popup_sub_pane_cp28_ParamLimits

0x9c99,	// (0x0004babc) bg_popup_sub_pane_cp28

0xecc1,	// (0x00050ae4) popup_discreet_window_g1_ParamLimits

0xecc1,	// (0x00050ae4) popup_discreet_window_g1

0xece1,	// (0x00050b04) popup_discreet_window_t1_ParamLimits

0xece1,	// (0x00050b04) popup_discreet_window_t1

0xecff,	// (0x00050b22) popup_discreet_window_t2_ParamLimits

0xecff,	// (0x00050b22) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00051cca) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00051cca) popup_discreet_window_t

0x8959,	// (0x0004a77c) popup_sk_window_g1

0x8963,	// (0x0004a786) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00051cd1) popup_sk_window_g

0x896b,	// (0x0004a78e) popup_sk_window_t1

0x8979,	// (0x0004a79c) popup_sk_window_t1_copy1

0xe8d3,	// (0x000506f6) cell_ai5_widget_pane_g2_ParamLimits

0xea45,	// (0x00050868) cell_ai5_widget_pane_t9_ParamLimits

0xea45,	// (0x00050868) cell_ai5_widget_pane_t9

0xdbf8,	// (0x0004fa1b) main_fep_fshwr2_pane

0x8987,	// (0x0004a7aa) aid_fshwr2_btn_pane

0x8993,	// (0x0004a7b6) aid_fshwr2_syb_pane

0x8993,	// (0x0004a7b6) aid_fshwr2_txt_pane

0x899f,	// (0x0004a7c2) fshwr2_func_candi_pane

0x89b2,	// (0x0004a7d5) fshwr2_hwr_syb_pane

0x89c0,	// (0x0004a7e3) fshwr2_icf_pane

0xdbf8,	// (0x0004fa1b) fshwr2_icf_bg_pane

0x89ef,	// (0x0004a812) fshwr2_icf_pane_t1_ParamLimits

0x89ef,	// (0x0004a812) fshwr2_icf_pane_t1

0x409d,	// (0x00045ec0) fshwr2_func_candi_pane_g1

0xed51,	// (0x00050b74) fshwr2_func_candi_row_pane_ParamLimits

0xed51,	// (0x00050b74) fshwr2_func_candi_row_pane

0x8a07,	// (0x0004a82a) cell_fshwr2_syb_pane_ParamLimits

0x8a07,	// (0x0004a82a) cell_fshwr2_syb_pane

0xbe98,	// (0x0004dcbb) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbe98,	// (0x0004dcbb) fshwr2_hwr_syb_pane_g1

0xdbf8,	// (0x0004fa1b) bg_popup_call_pane_cp01

0x8a1d,	// (0x0004a840) fshwr2_func_candi_cell_pane_ParamLimits

0x8a1d,	// (0x0004a840) fshwr2_func_candi_cell_pane

0xed61,	// (0x00050b84) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed61,	// (0x00050b84) fshwr2_func_candi_cell_bg_pane

0x8a6e,	// (0x0004a891) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a6e,	// (0x0004a891) fshwr2_func_candi_cell_pane_g1

0x8a8e,	// (0x0004a8b1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8a8e,	// (0x0004a8b1) fshwr2_func_candi_cell_pane_t1

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp08

0xed6d,	// (0x00050b90) cell_fshwr2_syb_bg_pane

0x8aa1,	// (0x0004a8c4) cell_fshwr2_syb_bg_pane_g1

0x8aa9,	// (0x0004a8cc) cell_fshwr2_syb_bg_pane_t1

0x0b47,	// (0x0004296a) main_tmo_pane

0xa7bd,	// (0x0004c5e0) uni_indicator_pane_g1_ParamLimits

0xa7d0,	// (0x0004c5f3) uni_indicator_pane_g2_ParamLimits

0xa7e2,	// (0x0004c605) uni_indicator_pane_g3_ParamLimits

0xa7f1,	// (0x0004c614) uni_indicator_pane_g4_ParamLimits

0xa7f1,	// (0x0004c614) uni_indicator_pane_g4

0xa805,	// (0x0004c628) uni_indicator_pane_g5_ParamLimits

0xa805,	// (0x0004c628) uni_indicator_pane_g5

0xa805,	// (0x0004c628) uni_indicator_pane_g6_ParamLimits

0xa805,	// (0x0004c628) uni_indicator_pane_g6

0xf926,	// (0x00051749) uni_indicator_pane_g_ParamLimits

0xd138,	// (0x0004ef5b) popup_tmo_note_window_ParamLimits

0xd138,	// (0x0004ef5b) popup_tmo_note_window

0x0b47,	// (0x0004296a) fshwr2_bg_pane

0x8a7f,	// (0x0004a8a2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8a7f,	// (0x0004a8a2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00051cd6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00051cd6) fshwr2_func_candi_cell_pane_g

0xbc35,	// (0x0004da58) bg_popup_window_pane_cp01

0x8ab8,	// (0x0004a8db) bg_popup_window_pane_g1_cp01

0xed75,	// (0x00050b98) bg_popup_window_pane_cp22_ParamLimits

0xed75,	// (0x00050b98) bg_popup_window_pane_cp22

0xed83,	// (0x00050ba6) listscroll_tmo_link_pane_ParamLimits

0xed83,	// (0x00050ba6) listscroll_tmo_link_pane

0xedc3,	// (0x00050be6) popup_tmo_note_window_g1_ParamLimits

0xedc3,	// (0x00050be6) popup_tmo_note_window_g1

0xedd0,	// (0x00050bf3) tmo_note_info_pane_ParamLimits

0xedd0,	// (0x00050bf3) tmo_note_info_pane

0xedea,	// (0x00050c0d) list_tmo_note_info_pane_g1_ParamLimits

0xedea,	// (0x00050c0d) list_tmo_note_info_pane_g1

0xee01,	// (0x00050c24) list_tmo_note_info_pane_g2_ParamLimits

0xee01,	// (0x00050c24) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00051cdb) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00051cdb) list_tmo_note_info_pane_g

0xee1d,	// (0x00050c40) list_tmo_note_info_text_pane_ParamLimits

0xee1d,	// (0x00050c40) list_tmo_note_info_text_pane

0xeea2,	// (0x00050cc5) list_tmo_link_pane

0xeeaf,	// (0x00050cd2) scroll_pane_cp20

0xeebc,	// (0x00050cdf) list_single_tmo_link_pane_ParamLimits

0xeebc,	// (0x00050cdf) list_single_tmo_link_pane

0xeecc,	// (0x00050cef) list_single_tmo_link_pane_t1

0xeeda,	// (0x00050cfd) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeda,	// (0x00050cfd) list_tmo_note_info_text_pane_t1

0x6860,	// (0x00048683) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6860,	// (0x00048683) aid_size_touch_scroll_bar_cp01

0x5749,	// (0x0004756c) aid_size_touch_slider_marker

0x632c,	// (0x0004814f) popup_settings_window_ParamLimits

0x632c,	// (0x0004814f) popup_settings_window

0x58dd,	// (0x00047700) popup_candi_list_indi_window

0x9189,	// (0x0004afac) aid_touch_navi_pane_ParamLimits

0x8158,	// (0x00049f7b) rs_clock_indi_pane

0x8161,	// (0x00049f84) sctrl_sk_bottom_pane_ParamLimits

0x8172,	// (0x00049f95) sctrl_sk_top_pane_ParamLimits

0x825b,	// (0x0004a07e) popup_fep_tooltip_window

0xe84d,	// (0x00050670) aid_size_cell_widget_grid_ParamLimits

0xe8be,	// (0x000506e1) cell_ai5_widget_pane_g1_ParamLimits

0xe8be,	// (0x000506e1) cell_ai5_widget_pane_g1

0xe921,	// (0x00050744) cell_ai5_widget_pane_g6_ParamLimits

0xe92d,	// (0x00050750) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00051c59) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00051c59) cell_ai5_widget_pane_g

0xea74,	// (0x00050897) cell_ai5_widget_pane_t10_ParamLimits

0xea74,	// (0x00050897) cell_ai5_widget_pane_t10

0xea92,	// (0x000508b5) grid_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0005094d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0005094d) cell_contacts_ai5_widget_pane

0xed14,	// (0x00050b37) popup_discreet_window_t3_ParamLimits

0xed14,	// (0x00050b37) popup_discreet_window_t3

0x89d7,	// (0x0004a7fa) popup_fshwr2_char_preview_window_ParamLimits

0x89d7,	// (0x0004a7fa) popup_fshwr2_char_preview_window

0xee3b,	// (0x00050c5e) tmo_note_info_pane_t1

0xee50,	// (0x00050c73) tmo_note_info_pane_t2

0xee69,	// (0x00050c8c) tmo_note_info_pane_t3

0xee7e,	// (0x00050ca1) tmo_note_info_pane_t4

0xee90,	// (0x00050cb3) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00051ce0) tmo_note_info_pane_t

0xeea2,	// (0x00050cc5) list_tmo_link_pane_ParamLimits

0xeeaf,	// (0x00050cd2) scroll_pane_cp20_ParamLimits

0xdbf8,	// (0x0004fa1b) bg_popup_fep_char_preview_window_cp01

0xeef3,	// (0x00050d16) popup_fshwr2_char_preview_window_t1

0xef01,	// (0x00050d24) popup_candi_list_indi_window_g1

0xef0a,	// (0x00050d2d) bg_cell_contacts_ai5_widget_pane

0xef16,	// (0x00050d39) cell_contacts_ai5_widget_pane_g1

0xef2b,	// (0x00050d4e) cell_contacts_ai5_widget_pane_g2

0xef37,	// (0x00050d5a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00051ceb) cell_contacts_ai5_widget_pane_g

0xef43,	// (0x00050d66) cell_contacts_ai5_widget_pane_t1

0x0b47,	// (0x0004296a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefba,	// (0x00050ddd) settings_container_pane

0x8ddc,	// (0x0004abff) listscroll_set_pane_copy1

0xb38d,	// (0x0004d1b0) scroll_pane_cp121_copy1

0xefc6,	// (0x00050de9) set_content_pane_copy1

0xefce,	// (0x00050df1) aid_height_set_list_copy1_ParamLimits

0xefce,	// (0x00050df1) aid_height_set_list_copy1

0xaa05,	// (0x0004c828) aid_size_parent_copy1_ParamLimits

0xaa05,	// (0x0004c828) aid_size_parent_copy1

0xefda,	// (0x00050dfd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefda,	// (0x00050dfd) button_value_adjust_pane_cp6_copy1

0x910b,	// (0x0004af2e) list_highlight_pane_cp2_copy1_ParamLimits

0x910b,	// (0x0004af2e) list_highlight_pane_cp2_copy1

0xefee,	// (0x00050e11) list_set_pane_copy1_ParamLimits

0xefee,	// (0x00050e11) list_set_pane_copy1

0xef55,	// (0x00050d78) main_pane_set_t1_copy1_ParamLimits

0xef55,	// (0x00050d78) main_pane_set_t1_copy1

0xef8f,	// (0x00050db2) main_pane_set_t2_copy1_ParamLimits

0xef8f,	// (0x00050db2) main_pane_set_t2_copy1

0xf0af,	// (0x00050ed2) main_pane_set_t3_copy1

0xf0bd,	// (0x00050ee0) main_pane_set_t4_copy1

0xefae,	// (0x00050dd1) set_content_pane_g1_copy1_ParamLimits

0xefae,	// (0x00050dd1) set_content_pane_g1_copy1

0xf0cb,	// (0x00050eee) setting_code_pane_copy1

0xf0d3,	// (0x00050ef6) setting_slider_graphic_pane_copy1

0xf0d3,	// (0x00050ef6) setting_slider_pane_copy1

0xf0d3,	// (0x00050ef6) setting_text_pane_copy1

0xf0d3,	// (0x00050ef6) setting_volume_pane_copy1

0xf0cb,	// (0x00050eee) settings_code_pane_cp2_copy1

0xf0db,	// (0x00050efe) settings_code_pane_cp_copy1_ParamLimits

0xf0db,	// (0x00050efe) settings_code_pane_cp_copy1

0x8ac1,	// (0x0004a8e4) volume_set_pane_copy1

0xf0ef,	// (0x00050f12) volume_set_pane_g10_copy1

0xf0fb,	// (0x00050f1e) volume_set_pane_g1_copy1

0xf105,	// (0x00050f28) volume_set_pane_g2_copy1

0xf10f,	// (0x00050f32) volume_set_pane_g3_copy1

0xf119,	// (0x00050f3c) volume_set_pane_g4_copy1

0xf123,	// (0x00050f46) volume_set_pane_g5_copy1

0xf12d,	// (0x00050f50) volume_set_pane_g6_copy1

0xf137,	// (0x00050f5a) volume_set_pane_g7_copy1

0xf141,	// (0x00050f64) volume_set_pane_g8_copy1

0xf14b,	// (0x00050f6e) volume_set_pane_g9_copy1

0xdc5a,	// (0x0004fa7d) bg_set_opt_pane_cp_copy1_ParamLimits

0xdc5a,	// (0x0004fa7d) bg_set_opt_pane_cp_copy1

0x8acd,	// (0x0004a8f0) setting_slider_pane_t1_copy1_ParamLimits

0x8acd,	// (0x0004a8f0) setting_slider_pane_t1_copy1

0x8aeb,	// (0x0004a90e) setting_slider_pane_t2_copy1_ParamLimits

0x8aeb,	// (0x0004a90e) setting_slider_pane_t2_copy1

0x8b05,	// (0x0004a928) setting_slider_pane_t3_copy1_ParamLimits

0x8b05,	// (0x0004a928) setting_slider_pane_t3_copy1

0x8b1d,	// (0x0004a940) slider_set_pane_copy1_ParamLimits

0x8b1d,	// (0x0004a940) slider_set_pane_copy1

0x0b9f,	// (0x000429c2) set_opt_bg_pane_g1_copy2

0x0ba7,	// (0x000429ca) set_opt_bg_pane_g2_copy2

0xf155,	// (0x00050f78) set_opt_bg_pane_g3_copy2

0x0bb7,	// (0x000429da) set_opt_bg_pane_g4_copy2

0x0bbf,	// (0x000429e2) set_opt_bg_pane_g5_copy2

0x0bc7,	// (0x000429ea) set_opt_bg_pane_g6_copy2

0xf15f,	// (0x00050f82) set_opt_bg_pane_g7_copy2

0xf169,	// (0x00050f8c) set_opt_bg_pane_g8_copy2

0xf173,	// (0x00050f96) set_opt_bg_pane_g9_copy2

0x8b33,	// (0x0004a956) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b33,	// (0x0004a956) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x00050fa0) slider_set_pane_g1_copy1

0x8b47,	// (0x0004a96a) slider_set_pane_g2_copy1

0x7a59,	// (0x0004987c) slider_set_pane_g3_copy1_ParamLimits

0x7a59,	// (0x0004987c) slider_set_pane_g3_copy1

0x7a6d,	// (0x00049890) slider_set_pane_g4_copy1_ParamLimits

0x7a6d,	// (0x00049890) slider_set_pane_g4_copy1

0x7a85,	// (0x000498a8) slider_set_pane_g5_copy1_ParamLimits

0x7a85,	// (0x000498a8) slider_set_pane_g5_copy1

0x7a59,	// (0x0004987c) slider_set_pane_g6_copy1_ParamLimits

0x7a59,	// (0x0004987c) slider_set_pane_g6_copy1

0x8b4f,	// (0x0004a972) slider_set_pane_g7_copy1_ParamLimits

0x8b4f,	// (0x0004a972) slider_set_pane_g7_copy1

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x00050fa9) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x00050fb2) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x00050fc2) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x00050fd2) slider_set_pane_cp_copy1

0xf1bf,	// (0x00050fe2) input_focus_pane_cp1_copy1

0xf1c8,	// (0x00050feb) list_set_text_pane_copy1

0xf1d0,	// (0x00050ff3) setting_text_pane_g1_copy1

0x5119,	// (0x00046f3c) set_text_pane_t1_copy1

0xf1bf,	// (0x00050fe2) input_focus_pane_cp2_copy1

0xf1d0,	// (0x00050ff3) setting_code_pane_g1_copy1

0xf1d9,	// (0x00050ffc) setting_code_pane_t1_copy1

0x44d4,	// (0x000462f7) list_set_graphic_pane_copy1

0xdc0c,	// (0x0004fa2f) bg_set_opt_pane_cp4_copy1

0x44e7,	// (0x0004630a) list_set_graphic_pane_g1_copy1_ParamLimits

0x44e7,	// (0x0004630a) list_set_graphic_pane_g1_copy1

0xf1e7,	// (0x0005100a) list_set_graphic_pane_g2_copy1

0x44ff,	// (0x00046322) list_set_graphic_pane_t1_copy1_ParamLimits

0x44ff,	// (0x00046322) list_set_graphic_pane_t1_copy1

0xbc35,	// (0x0004da58) rs_clock_indi_pane_g1

0xf1ef,	// (0x00051012) rs_clock_indi_pane_t1

0xf1fd,	// (0x00051020) rs_indi_pane

0xf205,	// (0x00051028) rs_indi_pane_g1

0xf20e,	// (0x00051031) rs_indi_pane_g2

0xf217,	// (0x0005103a) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00051cf2) rs_indi_pane_g

0x8ddc,	// (0x0004abff) bg_popup_preview_window_pane_cp03

0xf220,	// (0x00051043) popup_fep_tooltip_window_t1

0xc8e0,	// (0x0004e703) popup_note2_window_g2_ParamLimits

0xc8e0,	// (0x0004e703) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00051a8b) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00051a8b) popup_note2_window_g

0xcde8,	// (0x0004ec0b) bg_popup_sub_pane_cp11_ParamLimits

0xcdf5,	// (0x0004ec18) cell_ai3_links_pane_g1_ParamLimits

0xce0c,	// (0x0004ec2f) cell_ai3_links_pane_t1

0x5119,	// (0x00046f3c) set_text_pane_t1_copy1_ParamLimits

0x8cf5,	// (0x0004ab18) cell_graphic_popup_pane_cp2_ParamLimits

0x8cf5,	// (0x0004ab18) cell_graphic_popup_pane_cp2

0xf22e,	// (0x00051051) cell_graphic_popup_pane_g1_cp2

0x089c,	// (0x000426bf) cell_graphic_popup_pane_g2_cp2

0xf236,	// (0x00051059) cell_graphic_popup_pane_g3_cp2

0xf23e,	// (0x00051061) cell_graphic_popup_pane_t2_cp2

0x08ad,	// (0x000426d0) grid_highlight_pane_cp3_cp2

0x0e48,	// (0x00042c6b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0b47,	// (0x0004296a) main_tmo_pane_ParamLimits

0xd12c,	// (0x0004ef4f) popup_tmo_big_image_note_window

0xe8ad,	// (0x000506d0) cell_ai5_widget_list_pane

0xe8b5,	// (0x000506d8) cell_ai5_widget_lrg_icon_pane

0xee3b,	// (0x00050c5e) tmo_note_info_pane_t1_ParamLimits

0xee50,	// (0x00050c73) tmo_note_info_pane_t2_ParamLimits

0xee69,	// (0x00050c8c) tmo_note_info_pane_t3_ParamLimits

0xee7e,	// (0x00050ca1) tmo_note_info_pane_t4_ParamLimits

0xee90,	// (0x00050cb3) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00051ce0) tmo_note_info_pane_t_ParamLimits

0xefba,	// (0x00050ddd) settings_container_pane_ParamLimits

0xf1b7,	// (0x00050fda) indicator_popup_pane_cp5

0xf1b7,	// (0x00050fda) indicator_popup_pane_cp6

0x44d4,	// (0x000462f7) list_set_graphic_pane_copy1_ParamLimits

0xdbf8,	// (0x0004fa1b) bg_popup_window_pane_cp23

0xf24c,	// (0x0005106f) popup_tmo_big_image_note_window_g1

0xf258,	// (0x0005107b) popup_tmo_big_image_note_window_t1

0xf268,	// (0x0005108b) popup_tmo_big_image_note_window_t2

0xf278,	// (0x0005109b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00051cf9) popup_tmo_big_image_note_window_t

0xbc35,	// (0x0004da58) cell_ai5_widget_lrg_icon_pane_g1

0xf288,	// (0x000510ab) cell_ai5_widget_lrg_icon_pane_t1

0xf296,	// (0x000510b9) cell_ai5_widget_list_row_pane_ParamLimits

0xf296,	// (0x000510b9) cell_ai5_widget_list_row_pane

0xf2ae,	// (0x000510d1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2ae,	// (0x000510d1) cell_ai5_widget_list_row_pane_g1

0xf2bb,	// (0x000510de) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2bb,	// (0x000510de) cell_ai5_widget_list_row_pane_t1

0xf2e6,	// (0x00051109) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e6,	// (0x00051109) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x00051d00) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00051d00) cell_ai5_widget_list_row_pane_t

0xdbf8,	// (0x0004fa1b) main_fep_vtchi_ss_pane

0xf32e,	// (0x00051151) popup_fep_char_pre_window

0xf336,	// (0x00051159) popup_fep_ituss_window

0xf357,	// (0x0005117a) popup_fep_vkbss_window

0xf383,	// (0x000511a6) grid_vkbss_keypad_pane_ParamLimits

0xf383,	// (0x000511a6) grid_vkbss_keypad_pane

0xf393,	// (0x000511b6) ituss_keypad_pane

0x8b71,	// (0x0004a994) aid_vkbss_key_offset_ParamLimits

0x8b71,	// (0x0004a994) aid_vkbss_key_offset

0x8b7d,	// (0x0004a9a0) cell_vkbss_key_pane_ParamLimits

0x8b7d,	// (0x0004a9a0) cell_vkbss_key_pane

0xf3a2,	// (0x000511c5) bg_cell_vkbss_key_g1_ParamLimits

0xf3a2,	// (0x000511c5) bg_cell_vkbss_key_g1

0xf3ae,	// (0x000511d1) cell_vkbss_key_3p_pane_ParamLimits

0xf3ae,	// (0x000511d1) cell_vkbss_key_3p_pane

0xf3c2,	// (0x000511e5) cell_vkbss_key_g1_ParamLimits

0xf3c2,	// (0x000511e5) cell_vkbss_key_g1

0xf3d6,	// (0x000511f9) cell_vkbss_key_t1_ParamLimits

0xf3d6,	// (0x000511f9) cell_vkbss_key_t1

0x8b93,	// (0x0004a9b6) cell_ituss_key_pane_ParamLimits

0x8b93,	// (0x0004a9b6) cell_ituss_key_pane

0xf401,	// (0x00051224) bg_cell_ituss_key_g1_ParamLimits

0xf401,	// (0x00051224) bg_cell_ituss_key_g1

0xf40d,	// (0x00051230) cell_ituss_key_pane_g1_ParamLimits

0xf40d,	// (0x00051230) cell_ituss_key_pane_g1

0x8ba4,	// (0x0004a9c7) cell_ituss_key_pane_g2_ParamLimits

0x8ba4,	// (0x0004a9c7) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x00051d07) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x00051d07) cell_ituss_key_pane_g

0x8bd0,	// (0x0004a9f3) cell_ituss_key_t1_ParamLimits

0x8bd0,	// (0x0004a9f3) cell_ituss_key_t1

0x8c0a,	// (0x0004aa2d) cell_ituss_key_t2_ParamLimits

0x8c0a,	// (0x0004aa2d) cell_ituss_key_t2

0x8c3b,	// (0x0004aa5e) cell_ituss_key_t3_ParamLimits

0x8c3b,	// (0x0004aa5e) cell_ituss_key_t3

0x8c0a,	// (0x0004aa2d) cell_ituss_key_t4_ParamLimits

0x8c0a,	// (0x0004aa2d) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x00051d0e) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x00051d0e) cell_ituss_key_t

0xf433,	// (0x00051256) cell_vkbss_key_3p_pane_g1

0xf43b,	// (0x0005125e) cell_vkbss_key_3p_pane_g2

0xf443,	// (0x00051266) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00051d19) cell_vkbss_key_3p_pane_g

0x8ddc,	// (0x0004abff) bg_popup_fep_char_preview_window_cp02

0xf44b,	// (0x0005126e) popup_fep_char_pre_window_t1

0xe83a,	// (0x0005065d) main_ai5_sk_pane

0xef0a,	// (0x00050d2d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef16,	// (0x00050d39) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef2b,	// (0x00050d4e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef37,	// (0x00050d5a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00051ceb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef43,	// (0x00050d66) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0b47,	// (0x0004296a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x0005127c) main_ai5_sk_pane_g1

0x9ad1,	// (0x0004b8f4) popup_query_code_window_g1

0xf34c,	// (0x0005116f) popup_fep_vkb_icf_pane

0xf36d,	// (0x00051190) popup_fep_vtchi_icf_pane

0xf462,	// (0x00051285) bg_icf_pane

0xf46e,	// (0x00051291) list_vkb_icf_pane

0xf47d,	// (0x000512a0) bg_icf_pane_cp01

0xf490,	// (0x000512b3) vtchi_icf_list_pane

0xf4a0,	// (0x000512c3) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x000512c3) list_vkb_icf_pane_t1

0xf4b6,	// (0x000512d9) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x000512d9) vtchi_icf_list_pane_t1

0xf336,	// (0x00051159) popup_fep_ituss_window_ParamLimits

0xf36d,	// (0x00051190) popup_fep_vtchi_icf_pane_ParamLimits

0xf393,	// (0x000511b6) ituss_keypad_pane_ParamLimits

0x8b65,	// (0x0004a988) ituss_sks_pane

0xf462,	// (0x00051285) bg_icf_pane_ParamLimits

0xf30e,	// (0x00051131) icf_edit_indi_pane_ParamLimits

0xf30e,	// (0x00051131) icf_edit_indi_pane

0xf46e,	// (0x00051291) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x000512a0) bg_icf_pane_cp01_ParamLimits

0xf321,	// (0x00051144) icf_edit_indi_pane_cp01_ParamLimits

0xf321,	// (0x00051144) icf_edit_indi_pane_cp01

0xf498,	// (0x000512bb) vtchi_query_pane

0xe1dd,	// (0x00050000) icf_edit_indi_pane_g1_ParamLimits

0xe1dd,	// (0x00050000) icf_edit_indi_pane_g1

0xf525,	// (0x00051348) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00051348) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00051d31) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00051d31) icf_edit_indi_pane_g

0xf537,	// (0x0005135a) icf_edit_indi_pane_t1

0xf4ce,	// (0x000512f1) bg_input_focus_pane_cp042

0x0a80,	// (0x000428a3) vtchi_button_pane

0xf4d7,	// (0x000512fa) vtchi_query_pane_t1

0xf4e5,	// (0x00051308) vtchi_query_pane_t2

0xf4f3,	// (0x00051316) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00051d20) vtchi_query_pane_t

0xdbf8,	// (0x0004fa1b) bg_button_pane_cp13

0xf501,	// (0x00051324) vtchi_button_pane_g1

0x8c7e,	// (0x0004aaa1) ituss_sks_pane_g1

0x8c89,	// (0x0004aaac) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00051d27) ituss_sks_pane_g

0xf509,	// (0x0005132c) ituss_sks_pane_t1

0xf517,	// (0x0005133a) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00051d2c) ituss_sks_pane_t

0xb712,	// (0x0004d535) indicator_nsta_pane_cp_g1

0xb71a,	// (0x0004d53d) indicator_nsta_pane_cp_g2

0xb722,	// (0x0004d545) indicator_nsta_pane_cp_g3

0xb712,	// (0x0004d535) indicator_nsta_pane_cp_g4

0xb71a,	// (0x0004d53d) indicator_nsta_pane_cp_g5

0xb722,	// (0x0004d545) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x000518d5) indicator_nsta_pane_cp_g

0xdf07,	// (0x0004fd2a) cell_graphic2_pane_t2_ParamLimits

0xdf07,	// (0x0004fd2a) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00051be2) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00051be2) cell_graphic2_pane_t

0xdf34,	// (0x0004fd57) cell_graphic2_control_pane_t1

0x6c99,	// (0x00048abc) signal_pane_g3_ParamLimits

0x6c99,	// (0x00048abc) signal_pane_g3

0x6ca8,	// (0x00048acb) signal_pane_g4_ParamLimits

0x6ca8,	// (0x00048acb) signal_pane_g4

0xf2f8,	// (0x0005111b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f8,	// (0x0005111b) cell_ai5_widget_list_row_pane_t3

0xf421,	// (0x00051244) cell_ituss_key_pane_t1_ParamLimits

0xf421,	// (0x00051244) cell_ituss_key_pane_t1

0x9740,	// (0x0004b563) form_field_data_wide_pane_vc_t2_ParamLimits

0x9740,	// (0x0004b563) form_field_data_wide_pane_vc_t2

0x9754,	// (0x0004b577) form_field_data_wide_pane_vc_t3_ParamLimits

0x9754,	// (0x0004b577) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00051631) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00051631) form_field_data_wide_pane_vc_t

0xb3cd,	// (0x0004d1f0) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3cd,	// (0x0004d1f0) form_field_slider_wide_pane_vc_t3

0xb4a3,	// (0x0004d2c6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb4a3,	// (0x0004d2c6) form_field_popup_wide_pane_vc_t2

0xb4ba,	// (0x0004d2dd) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4ba,	// (0x0004d2dd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x000518c4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x000518c4) form_field_popup_wide_pane_vc_t

0x8987,	// (0x0004a7aa) aid_fshwr2_btn_pane_ParamLimits

0x8993,	// (0x0004a7b6) aid_fshwr2_syb_pane_ParamLimits

0x8993,	// (0x0004a7b6) aid_fshwr2_txt_pane_ParamLimits

0x0b47,	// (0x0004296a) fshwr2_bg_pane_ParamLimits

0x899f,	// (0x0004a7c2) fshwr2_func_candi_pane_ParamLimits

0x89b2,	// (0x0004a7d5) fshwr2_hwr_syb_pane_ParamLimits

0x89c0,	// (0x0004a7e3) fshwr2_icf_pane_ParamLimits

0x7c4c,	// (0x00049a6f) list_double_graphic_pane_vc_g4_ParamLimits

0x7c4c,	// (0x00049a6f) list_double_graphic_pane_vc_g4

0x8bc4,	// (0x0004a9e7) cell_ituss_key_pane_g3_ParamLimits

0x8bc4,	// (0x0004a9e7) cell_ituss_key_pane_g3

0x8c6c,	// (0x0004aa8f) cell_ituss_key_t5_ParamLimits

0x8c6c,	// (0x0004aa8f) cell_ituss_key_t5

0xf357,	// (0x0005117a) popup_fep_vkbss_window_ParamLimits

0xe844,	// (0x00050667) aid_cell_ai5_quarter

0xf537,	// (0x0005135a) icf_edit_indi_pane_t1_ParamLimits

0x06e4,	// (0x00042507) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x06e4,	// (0x00042507) aid_tch_indicator_popup_pane_cp2

0x06f7,	// (0x0004251a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x06f7,	// (0x0004251a) aid_tch_query_popup_data_pane_cp2

0x9a79,	// (0x0004b89c) aid_tch_query_popup_pane_ParamLimits

0x9a79,	// (0x0004b89c) aid_tch_query_popup_pane

0x9a79,	// (0x0004b89c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9a79,	// (0x0004b89c) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

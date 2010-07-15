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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000ea59 };

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
0x21f4,	// (0x00010c4d) Screen

0x2206,	// (0x00010c5f) application_window_ParamLimits

0x2206,	// (0x00010c5f) application_window

0x221e,	// (0x00010c77) screen_g1

0x2228,	// (0x00010c81) area_bottom_pane_ParamLimits

0x2228,	// (0x00010c81) area_bottom_pane

0x228d,	// (0x00010ce6) area_top_pane_ParamLimits

0x228d,	// (0x00010ce6) area_top_pane

0xcc7c,	// (0x0001b6d5) main_pane_ParamLimits

0xcc7c,	// (0x0001b6d5) main_pane

0x2305,	// (0x00010d5e) misc_graphics

0x428b,	// (0x00012ce4) battery_pane_ParamLimits

0x428b,	// (0x00012ce4) battery_pane

0x4f7e,	// (0x000139d7) bg_status_flat_pane_g8

0x4f86,	// (0x000139df) bg_status_flat_pane_g9

0x4340,	// (0x00012d99) context_pane_ParamLimits

0x4340,	// (0x00012d99) context_pane

0x4457,	// (0x00012eb0) navi_pane_ParamLimits

0x4457,	// (0x00012eb0) navi_pane

0x44d4,	// (0x00012f2d) signal_pane_ParamLimits

0x44d4,	// (0x00012f2d) signal_pane

0x0008,

0xf86d,	// (0x0001e2c6) bg_status_flat_pane_g

0x453d,	// (0x00012f96) status_pane_g1_ParamLimits

0x453d,	// (0x00012f96) status_pane_g1

0x4549,	// (0x00012fa2) status_pane_g2_ParamLimits

0x4549,	// (0x00012fa2) status_pane_g2

0x4555,	// (0x00012fae) status_pane_g3_ParamLimits

0x4555,	// (0x00012fae) status_pane_g3

0x0004,

0xf79b,	// (0x0001e1f4) status_pane_g_ParamLimits

0xf79b,	// (0x0001e1f4) status_pane_g

0x4587,	// (0x00012fe0) title_pane_ParamLimits

0x4587,	// (0x00012fe0) title_pane

0x45c4,	// (0x0001301d) uni_indicator_pane_ParamLimits

0x45c4,	// (0x0001301d) uni_indicator_pane

0x41a1,	// (0x00012bfa) bg_list_pane_ParamLimits

0x41a1,	// (0x00012bfa) bg_list_pane

0xc346,	// (0x0001ad9f) find_pane

0x41c9,	// (0x00012c22) listscroll_app_pane_ParamLimits

0x41c9,	// (0x00012c22) listscroll_app_pane

0x41d5,	// (0x00012c2e) listscroll_form_pane

0xc34e,	// (0x0001ada7) listscroll_gen_pane_ParamLimits

0xc34e,	// (0x0001ada7) listscroll_gen_pane

0xd473,	// (0x0001becc) listscroll_set_pane

0x342b,	// (0x00011e84) main_idle_act_pane

0x3eb5,	// (0x0001290e) main_idle_trad_pane

0x3eb5,	// (0x0001290e) main_list_empty_pane

0x4204,	// (0x00012c5d) main_midp_pane

0x4210,	// (0x00012c69) main_pane_g1_ParamLimits

0x4210,	// (0x00012c69) main_pane_g1

0xd47b,	// (0x0001bed4) popup_ai_message_window_ParamLimits

0xd47b,	// (0x0001bed4) popup_ai_message_window

0xd511,	// (0x0001bf6a) popup_fep_china_uni_window_ParamLimits

0xd511,	// (0x0001bf6a) popup_fep_china_uni_window

0xd54f,	// (0x0001bfa8) popup_fep_japan_candidate_window_ParamLimits

0xd54f,	// (0x0001bfa8) popup_fep_japan_candidate_window

0xd56d,	// (0x0001bfc6) popup_fep_japan_predictive_window_ParamLimits

0xd56d,	// (0x0001bfc6) popup_fep_japan_predictive_window

0xd599,	// (0x0001bff2) popup_find_window

0xd5a6,	// (0x0001bfff) popup_grid_graphic_window_ParamLimits

0xd5a6,	// (0x0001bfff) popup_grid_graphic_window

0xd5c4,	// (0x0001c01d) popup_large_graphic_colour_window

0xd5e3,	// (0x0001c03c) popup_menu_window_ParamLimits

0xd5e3,	// (0x0001c03c) popup_menu_window

0xd71b,	// (0x0001c174) popup_note_image_window

0xd709,	// (0x0001c162) popup_note_wait_window_ParamLimits

0xd709,	// (0x0001c162) popup_note_wait_window

0xd709,	// (0x0001c162) popup_note_window_ParamLimits

0xd709,	// (0x0001c162) popup_note_window

0xd76f,	// (0x0001c1c8) popup_query_code_window_ParamLimits

0xd76f,	// (0x0001c1c8) popup_query_code_window

0xd781,	// (0x0001c1da) popup_query_data_code_window_ParamLimits

0xd781,	// (0x0001c1da) popup_query_data_code_window

0xd796,	// (0x0001c1ef) popup_query_data_window_ParamLimits

0xd796,	// (0x0001c1ef) popup_query_data_window

0xd7ac,	// (0x0001c205) popup_query_sat_info_window_ParamLimits

0xd7ac,	// (0x0001c205) popup_query_sat_info_window

0xd7dd,	// (0x0001c236) popup_snote_single_graphic_window_ParamLimits

0xd7dd,	// (0x0001c236) popup_snote_single_graphic_window

0xd7dd,	// (0x0001c236) popup_snote_single_text_window_ParamLimits

0xd7dd,	// (0x0001c236) popup_snote_single_text_window

0xd7f0,	// (0x0001c249) popup_sub_window_general

0xd8f4,	// (0x0001c34d) popup_window_general_ParamLimits

0xd8f4,	// (0x0001c34d) popup_window_general

0x4226,	// (0x00012c7f) power_save_pane

0xd30f,	// (0x0001bd68) control_pane_g1_ParamLimits

0xd30f,	// (0x0001bd68) control_pane_g1

0xd330,	// (0x0001bd89) control_pane_g2_ParamLimits

0xd330,	// (0x0001bd89) control_pane_g2

0x416c,	// (0x00012bc5) control_pane_g3_ParamLimits

0x416c,	// (0x00012bc5) control_pane_g3

0x0007,

0xf783,	// (0x0001e1dc) control_pane_g_ParamLimits

0xf783,	// (0x0001e1dc) control_pane_g

0xd372,	// (0x0001bdcb) control_pane_t1_ParamLimits

0xd372,	// (0x0001bdcb) control_pane_t1

0xd3c4,	// (0x0001be1d) control_pane_t2_ParamLimits

0xd3c4,	// (0x0001be1d) control_pane_t2

0x0002,

0xf794,	// (0x0001e1ed) control_pane_t_ParamLimits

0xf794,	// (0x0001e1ed) control_pane_t

0x4093,	// (0x00012aec) navi_navi_volume_pane_cp1

0x409b,	// (0x00012af4) status_small_icon_pane

0x40a3,	// (0x00012afc) status_small_pane_g1_ParamLimits

0x40a3,	// (0x00012afc) status_small_pane_g1

0x40d7,	// (0x00012b30) status_small_pane_g2_ParamLimits

0x40d7,	// (0x00012b30) status_small_pane_g2

0x40e3,	// (0x00012b3c) status_small_pane_g3_ParamLimits

0x40e3,	// (0x00012b3c) status_small_pane_g3

0x40ef,	// (0x00012b48) status_small_pane_g4_ParamLimits

0x40ef,	// (0x00012b48) status_small_pane_g4

0x40fb,	// (0x00012b54) status_small_pane_g5_ParamLimits

0x40fb,	// (0x00012b54) status_small_pane_g5

0x4107,	// (0x00012b60) status_small_pane_g6_ParamLimits

0x4107,	// (0x00012b60) status_small_pane_g6

0x0007,

0xf772,	// (0x0001e1cb) status_small_pane_g_ParamLimits

0xf772,	// (0x0001e1cb) status_small_pane_g

0x4136,	// (0x00012b8f) status_small_pane_t1

0x4158,	// (0x00012bb1) status_small_wait_pane_ParamLimits

0x4158,	// (0x00012bb1) status_small_wait_pane

0x391d,	// (0x00012376) aid_levels_signal_ParamLimits

0x391d,	// (0x00012376) aid_levels_signal

0x392e,	// (0x00012387) signal_pane_g1_ParamLimits

0x392e,	// (0x00012387) signal_pane_g1

0x3944,	// (0x0001239d) signal_pane_g2_ParamLimits

0x3944,	// (0x0001239d) signal_pane_g2

0x0003,

0xf703,	// (0x0001e15c) signal_pane_g_ParamLimits

0xf703,	// (0x0001e15c) signal_pane_g

0x397f,	// (0x000123d8) context_pane_g1

0x230f,	// (0x00010d68) title_pane_g1

0x2345,	// (0x00010d9e) title_pane_t1

0x23ad,	// (0x00010e06) title_pane_t2

0x23d3,	// (0x00010e2c) title_pane_t3

0x0002,

0xf557,	// (0x0001dfb0) title_pane_t

0x45da,	// (0x00013033) aid_levels_battery_ParamLimits

0x45da,	// (0x00013033) aid_levels_battery

0x45ed,	// (0x00013046) battery_pane_g1_ParamLimits

0x45ed,	// (0x00013046) battery_pane_g1

0x4602,	// (0x0001305b) battery_pane_g2_ParamLimits

0x4602,	// (0x0001305b) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001e1ff) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001e1ff) battery_pane_g

0x585b,	// (0x000142b4) uni_indicator_pane_g1

0x5871,	// (0x000142ca) uni_indicator_pane_g2

0x5887,	// (0x000142e0) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0001e36e) uni_indicator_pane_g

0x330a,	// (0x00011d63) navi_icon_pane_ParamLimits

0x330a,	// (0x00011d63) navi_icon_pane

0x2305,	// (0x00010d5e) navi_midp_pane

0x2305,	// (0x00010d5e) navi_navi_pane

0x330a,	// (0x00011d63) navi_text_pane_ParamLimits

0x330a,	// (0x00011d63) navi_text_pane

0x221e,	// (0x00010c77) status_small_wait_pane_g1

0x2846,	// (0x0001129f) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0001e369) status_small_wait_pane_g

0x558e,	// (0x00013fe7) navi_navi_icon_text_pane

0x55a8,	// (0x00014001) navi_navi_pane_g1_ParamLimits

0x55a8,	// (0x00014001) navi_navi_pane_g1

0x5596,	// (0x00013fef) navi_navi_pane_g2_ParamLimits

0x5596,	// (0x00013fef) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0001e337) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0001e337) navi_navi_pane_g

0x55ba,	// (0x00014013) navi_navi_tabs_pane

0x558e,	// (0x00013fe7) navi_navi_text_pane

0x558e,	// (0x00013fe7) navi_navi_volume_pane

0x556a,	// (0x00013fc3) navi_text_pane_t1

0x555e,	// (0x00013fb7) navi_icon_pane_g1

0x54b2,	// (0x00013f0b) navi_navi_text_pane_t1

0xdb5b,	// (0x0001c5b4) navi_navi_volume_pane_g1

0xdb63,	// (0x0001c5bc) volume_small_pane

0x5418,	// (0x00013e71) navi_navi_icon_text_pane_g1

0x5420,	// (0x00013e79) navi_navi_icon_text_pane_t1

0x4fde,	// (0x00013a37) navi_tabs_2_long_pane

0x4fde,	// (0x00013a37) navi_tabs_2_pane

0x4fde,	// (0x00013a37) navi_tabs_3_long_pane

0x4fde,	// (0x00013a37) navi_tabs_3_pane

0x4fde,	// (0x00013a37) navi_tabs_4_pane

0xdb3b,	// (0x0001c594) tabs_2_active_pane_ParamLimits

0xdb3b,	// (0x0001c594) tabs_2_active_pane

0xdb4b,	// (0x0001c5a4) tabs_2_passive_pane_ParamLimits

0xdb4b,	// (0x0001c5a4) tabs_2_passive_pane

0xdb09,	// (0x0001c562) tabs_3_active_pane_ParamLimits

0xdb09,	// (0x0001c562) tabs_3_active_pane

0xdb19,	// (0x0001c572) tabs_3_passive_pane_ParamLimits

0xdb19,	// (0x0001c572) tabs_3_passive_pane

0xdb2a,	// (0x0001c583) tabs_3_passive_pane_cp_ParamLimits

0xdb2a,	// (0x0001c583) tabs_3_passive_pane_cp

0xdac5,	// (0x0001c51e) tabs_4_active_pane_ParamLimits

0xdac5,	// (0x0001c51e) tabs_4_active_pane

0xdad6,	// (0x0001c52f) tabs_4_passive_pane_ParamLimits

0xdad6,	// (0x0001c52f) tabs_4_passive_pane

0xdae7,	// (0x0001c540) tabs_4_passive_pane_cp_ParamLimits

0xdae7,	// (0x0001c540) tabs_4_passive_pane_cp

0xdaf8,	// (0x0001c551) tabs_4_passive_pane_cp2_ParamLimits

0xdaf8,	// (0x0001c551) tabs_4_passive_pane_cp2

0xdaa5,	// (0x0001c4fe) tabs_2_long_active_pane_ParamLimits

0xdaa5,	// (0x0001c4fe) tabs_2_long_active_pane

0xdab5,	// (0x0001c50e) tabs_2_long_passive_pane_ParamLimits

0xdab5,	// (0x0001c50e) tabs_2_long_passive_pane

0xda70,	// (0x0001c4c9) tabs_3_long_active_pane_ParamLimits

0xda70,	// (0x0001c4c9) tabs_3_long_active_pane

0xda81,	// (0x0001c4da) tabs_3_long_passive_pane_ParamLimits

0xda81,	// (0x0001c4da) tabs_3_long_passive_pane

0xda94,	// (0x0001c4ed) tabs_3_long_passive_pane_cp_ParamLimits

0xda94,	// (0x0001c4ed) tabs_3_long_passive_pane_cp

0xda16,	// (0x0001c46f) volume_small_pane_g1

0xda1f,	// (0x0001c478) volume_small_pane_g2

0xda28,	// (0x0001c481) volume_small_pane_g3

0xda31,	// (0x0001c48a) volume_small_pane_g4

0xda3a,	// (0x0001c493) volume_small_pane_g5

0xda43,	// (0x0001c49c) volume_small_pane_g6

0xda4c,	// (0x0001c4a5) volume_small_pane_g7

0xda55,	// (0x0001c4ae) volume_small_pane_g8

0xda5e,	// (0x0001c4b7) volume_small_pane_g9

0xda67,	// (0x0001c4c0) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0001e303) volume_small_pane_g

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp2_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp2

0x23f3,	// (0x00010e4c) tabs_3_active_pane_g1

0x23fb,	// (0x00010e54) tabs_3_active_pane_t1

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp2_ParamLimits

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp2

0x23f3,	// (0x00010e4c) tabs_3_passive_pane_g1

0x23fb,	// (0x00010e54) tabs_3_passive_pane_t1

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp3_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp3

0x240d,	// (0x00010e66) tabs_4_active_pane_g1

0x2415,	// (0x00010e6e) tabs_4_active_pane_t1

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp3_ParamLimits

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp3

0x240d,	// (0x00010e66) tabs_4_1_passive_pane_g1

0x2415,	// (0x00010e6e) tabs_4_1_passive_pane_t1

0x4204,	// (0x00012c5d) list_highlight_pane_cp2

0x5aad,	// (0x00014506) list_set_pane_ParamLimits

0x5aad,	// (0x00014506) list_set_pane

0x5b3b,	// (0x00014594) main_pane_set_t1_ParamLimits

0x5b3b,	// (0x00014594) main_pane_set_t1

0x5b5b,	// (0x000145b4) main_pane_set_t2_ParamLimits

0x5b5b,	// (0x000145b4) main_pane_set_t2

0x5b6d,	// (0x000145c6) main_pane_set_t3_ParamLimits

0x5b6d,	// (0x000145c6) main_pane_set_t3

0x5b7f,	// (0x000145d8) main_pane_set_t4_ParamLimits

0x5b7f,	// (0x000145d8) main_pane_set_t4

0x0003,

0xf97a,	// (0x0001e3d3) main_pane_set_t_ParamLimits

0xf97a,	// (0x0001e3d3) main_pane_set_t

0x5b91,	// (0x000145ea) setting_code_pane

0x5b99,	// (0x000145f2) setting_slider_graphic_pane

0x5b99,	// (0x000145f2) setting_slider_pane

0x5b99,	// (0x000145f2) setting_text_pane

0x5b99,	// (0x000145f2) setting_volume_pane

0xce7b,	// (0x0001b8d4) volume_set_pane

0x23e5,	// (0x00010e3e) bg_set_opt_pane_cp

0xce83,	// (0x0001b8dc) setting_slider_pane_t1

0xce99,	// (0x0001b8f2) setting_slider_pane_t2

0xceb2,	// (0x0001b90b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001dfb7) setting_slider_pane_t

0xcec9,	// (0x0001b922) slider_set_pane

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp2

0x2427,	// (0x00010e80) setting_slider_graphic_pane_g1

0xcedf,	// (0x0001b938) setting_slider_graphic_pane_t1

0xceee,	// (0x0001b947) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001dfbe) setting_slider_graphic_pane_t

0xcefd,	// (0x0001b956) slider_set_pane_cp

0x2305,	// (0x00010d5e) input_focus_pane_cp1

0x5a73,	// (0x000144cc) list_set_text_pane

0x221e,	// (0x00010c77) setting_text_pane_g1

0x2305,	// (0x00010d5e) input_focus_pane_cp2

0x221e,	// (0x00010c77) setting_code_pane_g1

0x2430,	// (0x00010e89) setting_code_pane_t1

0xbc24,	// (0x0001a67d) set_text_pane_t1_ParamLimits

0xbc24,	// (0x0001a67d) set_text_pane_t1

0x3218,	// (0x00011c71) set_opt_bg_pane_g1

0x3220,	// (0x00011c79) set_opt_bg_pane_g2

0x5a53,	// (0x000144ac) set_opt_bg_pane_g3

0x3230,	// (0x00011c89) set_opt_bg_pane_g4

0x3238,	// (0x00011c91) set_opt_bg_pane_g5

0x3240,	// (0x00011c99) set_opt_bg_pane_g6

0x5a5b,	// (0x000144b4) set_opt_bg_pane_g7

0x5a63,	// (0x000144bc) set_opt_bg_pane_g8

0x5a6b,	// (0x000144c4) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0001e3c0) set_opt_bg_pane_g

0x5a46,	// (0x0001449f) slider_set_pane_g1

0xdbd0,	// (0x0001c629) slider_set_pane_g2

0x0006,

0xf958,	// (0x0001e3b1) slider_set_pane_g

0xdb6c,	// (0x0001c5c5) volume_set_pane_g1

0xdb74,	// (0x0001c5cd) volume_set_pane_g2

0xdb7c,	// (0x0001c5d5) volume_set_pane_g3

0xdb84,	// (0x0001c5dd) volume_set_pane_g4

0xdb8c,	// (0x0001c5e5) volume_set_pane_g5

0xdb94,	// (0x0001c5ed) volume_set_pane_g6

0xdb9c,	// (0x0001c5f5) volume_set_pane_g7

0xdba4,	// (0x0001c5fd) volume_set_pane_g8

0xdbac,	// (0x0001c605) volume_set_pane_g9

0xdbb4,	// (0x0001c60d) volume_set_pane_g10

0x0009,

0xf930,	// (0x0001e389) volume_set_pane_g

0x2459,	// (0x00010eb2) indicator_pane_ParamLimits

0x2459,	// (0x00010eb2) indicator_pane

0x2465,	// (0x00010ebe) main_idle_pane_g2_ParamLimits

0x2465,	// (0x00010ebe) main_idle_pane_g2

0x2489,	// (0x00010ee2) main_pane_idle_g1_ParamLimits

0x2489,	// (0x00010ee2) main_pane_idle_g1

0x2496,	// (0x00010eef) popup_clock_digital_analogue_window_ParamLimits

0x2496,	// (0x00010eef) popup_clock_digital_analogue_window

0x24ad,	// (0x00010f06) soft_indicator_pane_ParamLimits

0x24ad,	// (0x00010f06) soft_indicator_pane

0x24b9,	// (0x00010f12) wallpaper_pane_ParamLimits

0x24b9,	// (0x00010f12) wallpaper_pane

0x221e,	// (0x00010c77) wallpaper_pane_g1

0x24cd,	// (0x00010f26) indicator_pane_g1_ParamLimits

0x24cd,	// (0x00010f26) indicator_pane_g1

0x5e85,	// (0x000148de) navi_navi_icon_text_pane_srt_g1

0x24e8,	// (0x00010f41) soft_indicator_pane_t1

0x2502,	// (0x00010f5b) aid_ps_area_pane

0x2513,	// (0x00010f6c) aid_ps_clock_pane

0x251f,	// (0x00010f78) aid_ps_indicator_pane

0x252b,	// (0x00010f84) indicator_ps_pane_ParamLimits

0x252b,	// (0x00010f84) indicator_ps_pane

0x253a,	// (0x00010f93) power_save_pane_g1_ParamLimits

0x253a,	// (0x00010f93) power_save_pane_g1

0x2546,	// (0x00010f9f) power_save_pane_g2_ParamLimits

0x2546,	// (0x00010f9f) power_save_pane_g2

0xcbf8,	// (0x0001b651) aid_navinavi_width_pane

0x2502,	// (0x00010f5b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001dfc3) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001dfc3) power_save_pane_g

0x2554,	// (0x00010fad) power_save_pane_t1_ParamLimits

0x2554,	// (0x00010fad) power_save_pane_t1

0x2513,	// (0x00010f6c) aid_ps_clock_pane_ParamLimits

0x251f,	// (0x00010f78) aid_ps_indicator_pane_ParamLimits

0x2566,	// (0x00010fbf) power_save_pane_t4_ParamLimits

0x2566,	// (0x00010fbf) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001dfc8) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001dfc8) power_save_pane_t

0x2590,	// (0x00010fe9) power_save_t3_ParamLimits

0x2590,	// (0x00010fe9) power_save_t3

0x257b,	// (0x00010fd4) power_save_t2_ParamLimits

0x257b,	// (0x00010fd4) power_save_t2

0x25a5,	// (0x00010ffe) indicator_ps_pane_g1

0x25ae,	// (0x00011007) ai_gene_pane_ParamLimits

0x25ae,	// (0x00011007) ai_gene_pane

0x25ba,	// (0x00011013) ai_links_pane_ParamLimits

0x25ba,	// (0x00011013) ai_links_pane

0x25c6,	// (0x0001101f) indicator_pane_cp1_ParamLimits

0x25c6,	// (0x0001101f) indicator_pane_cp1

0x25d2,	// (0x0001102b) main_pane_idle_g1_cp_ParamLimits

0x25d2,	// (0x0001102b) main_pane_idle_g1_cp

0x25de,	// (0x00011037) popup_ai_links_title_window

0x25e7,	// (0x00011040) soft_indicator_pane_cp1_ParamLimits

0x25e7,	// (0x00011040) soft_indicator_pane_cp1

0x5849,	// (0x000142a2) ai_links_pane_g1

0x5852,	// (0x000142ab) grid_ai_links_pane

0x582e,	// (0x00014287) ai_gene_pane_1

0x5837,	// (0x00014290) ai_gene_pane_2

0x5840,	// (0x00014299) list_highlight_pane_cp4

0x5812,	// (0x0001426b) cell_ai_link_pane_ParamLimits

0x5812,	// (0x0001426b) cell_ai_link_pane

0x580a,	// (0x00014263) cell_ai_link_pane_g1

0x2846,	// (0x0001129f) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0001e364) cell_ai_link_pane_g

0x2305,	// (0x00010d5e) grid_highlight_cp2

0x2305,	// (0x00010d5e) bg_popup_sub_pane_cp1

0x2601,	// (0x0001105a) popup_ai_links_title_window_t1

0x575c,	// (0x000141b5) ai_gene_pane_1_g1_ParamLimits

0x575c,	// (0x000141b5) ai_gene_pane_1_g1

0x5768,	// (0x000141c1) ai_gene_pane_1_g2_ParamLimits

0x5768,	// (0x000141c1) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0001e35a) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0001e35a) ai_gene_pane_1_g

0x5775,	// (0x000141ce) ai_gene_pane_1_t1_ParamLimits

0x5775,	// (0x000141ce) ai_gene_pane_1_t1

0x57a9,	// (0x00014202) grid_ai_soft_ind_pane

0x5747,	// (0x000141a0) ai_gene_pane_2_t1_ParamLimits

0x5747,	// (0x000141a0) ai_gene_pane_2_t1

0x2610,	// (0x00011069) main_pane_empty_t1_ParamLimits

0x2610,	// (0x00011069) main_pane_empty_t1

0x262d,	// (0x00011086) main_pane_empty_t2_ParamLimits

0x262d,	// (0x00011086) main_pane_empty_t2

0x2645,	// (0x0001109e) main_pane_empty_t3_ParamLimits

0x2645,	// (0x0001109e) main_pane_empty_t3

0x2658,	// (0x000110b1) main_pane_empty_t4_ParamLimits

0x2658,	// (0x000110b1) main_pane_empty_t4

0x266b,	// (0x000110c4) main_pane_empty_t5_ParamLimits

0x266b,	// (0x000110c4) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001dfcd) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001dfcd) main_pane_empty_t

0x330a,	// (0x00011d63) bg_popup_window_pane_ParamLimits

0x330a,	// (0x00011d63) bg_popup_window_pane

0x54c1,	// (0x00013f1a) find_popup_pane_cp2_ParamLimits

0x54c1,	// (0x00013f1a) find_popup_pane_cp2

0x54cd,	// (0x00013f26) heading_pane_ParamLimits

0x54cd,	// (0x00013f26) heading_pane

0x2305,	// (0x00010d5e) bg_popup_sub_pane

0x543a,	// (0x00013e93) bg_popup_window_pane_g1_ParamLimits

0x543a,	// (0x00013e93) bg_popup_window_pane_g1

0x5446,	// (0x00013e9f) bg_popup_window_pane_g2_ParamLimits

0x5446,	// (0x00013e9f) bg_popup_window_pane_g2

0x5452,	// (0x00013eab) bg_popup_window_pane_g3_ParamLimits

0x5452,	// (0x00013eab) bg_popup_window_pane_g3

0x545e,	// (0x00013eb7) bg_popup_window_pane_g4_ParamLimits

0x545e,	// (0x00013eb7) bg_popup_window_pane_g4

0x546a,	// (0x00013ec3) bg_popup_window_pane_g5_ParamLimits

0x546a,	// (0x00013ec3) bg_popup_window_pane_g5

0x5476,	// (0x00013ecf) bg_popup_window_pane_g6_ParamLimits

0x5476,	// (0x00013ecf) bg_popup_window_pane_g6

0x5482,	// (0x00013edb) bg_popup_window_pane_g7_ParamLimits

0x5482,	// (0x00013edb) bg_popup_window_pane_g7

0x548e,	// (0x00013ee7) bg_popup_window_pane_g8_ParamLimits

0x548e,	// (0x00013ee7) bg_popup_window_pane_g8

0x549a,	// (0x00013ef3) bg_popup_window_pane_g9_ParamLimits

0x549a,	// (0x00013ef3) bg_popup_window_pane_g9

0x54a6,	// (0x00013eff) bg_popup_window_pane_g10_ParamLimits

0x54a6,	// (0x00013eff) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0001e322) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0001e322) bg_popup_window_pane_g

0x53cf,	// (0x00013e28) bg_popup_heading_pane_ParamLimits

0x53cf,	// (0x00013e28) bg_popup_heading_pane

0xdc58,	// (0x0001c6b1) tabs_4_passive_pane_cp_srt_ParamLimits

0xdc58,	// (0x0001c6b1) tabs_4_passive_pane_cp_srt

0xdc6a,	// (0x0001c6c3) tabs_4_passive_pane_srt_ParamLimits

0x53e3,	// (0x00013e3c) heading_pane_g2

0xdc6a,	// (0x0001c6c3) tabs_4_passive_pane_srt

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp3_srt

0x53eb,	// (0x00013e44) heading_pane_t1_ParamLimits

0x53eb,	// (0x00013e44) heading_pane_t1

0x5402,	// (0x00013e5b) heading_pane_t2_ParamLimits

0x5402,	// (0x00013e5b) heading_pane_t2

0x0001,

0xf8c4,	// (0x0001e31d) heading_pane_t_ParamLimits

0xf8c4,	// (0x0001e31d) heading_pane_t

0x4f46,	// (0x0001399f) bg_popup_heading_pane_g1

0x4fef,	// (0x00013a48) bg_popup_heading_pane_g2

0x4ff7,	// (0x00013a50) bg_popup_heading_pane_g3

0x4fff,	// (0x00013a58) bg_popup_heading_pane_g4

0x5007,	// (0x00013a60) bg_popup_heading_pane_g5

0x500f,	// (0x00013a68) bg_popup_heading_pane_g6

0x5017,	// (0x00013a70) bg_popup_heading_pane_g7

0x501f,	// (0x00013a78) bg_popup_heading_pane_g8

0x5027,	// (0x00013a80) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0001e2d9) bg_popup_heading_pane_g

0x46cd,	// (0x00013126) bg_popup_sub_pane_g1

0x46dd,	// (0x00013136) bg_popup_sub_pane_g2

0x46d5,	// (0x0001312e) bg_popup_sub_pane_g3

0x46ed,	// (0x00013146) bg_popup_sub_pane_g4

0x46e5,	// (0x0001313e) bg_popup_sub_pane_g5

0x46f5,	// (0x0001314e) bg_popup_sub_pane_g6

0x46fd,	// (0x00013156) bg_popup_sub_pane_g7

0x470d,	// (0x00013166) bg_popup_sub_pane_g8

0x4705,	// (0x0001315e) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0001e2b3) bg_popup_sub_pane_g

0x267e,	// (0x000110d7) bg_popup_window_pane_cp5_ParamLimits

0x267e,	// (0x000110d7) bg_popup_window_pane_cp5

0x269a,	// (0x000110f3) popup_note_window_g1_ParamLimits

0x269a,	// (0x000110f3) popup_note_window_g1

0x26a6,	// (0x000110ff) popup_note_window_t1_ParamLimits

0x26a6,	// (0x000110ff) popup_note_window_t1

0x26bc,	// (0x00011115) popup_note_window_t2_ParamLimits

0x26bc,	// (0x00011115) popup_note_window_t2

0x26d2,	// (0x0001112b) popup_note_window_t3_ParamLimits

0x26d2,	// (0x0001112b) popup_note_window_t3

0x26e8,	// (0x00011141) popup_note_window_t4_ParamLimits

0x26e8,	// (0x00011141) popup_note_window_t4

0x2710,	// (0x00011169) popup_note_window_t5_ParamLimits

0x2710,	// (0x00011169) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001dfd8) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001dfd8) popup_note_window_t

0x275a,	// (0x000111b3) bg_popup_window_pane_cp6_ParamLimits

0x275a,	// (0x000111b3) bg_popup_window_pane_cp6

0x4ec2,	// (0x0001391b) popup_note_image_window_g1_ParamLimits

0x4ec2,	// (0x0001391b) popup_note_image_window_g1

0x4ece,	// (0x00013927) popup_note_image_window_g2_ParamLimits

0x4ece,	// (0x00013927) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0001e2a7) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0001e2a7) popup_note_image_window_g

0x4ee7,	// (0x00013940) popup_note_image_window_t1_ParamLimits

0x4ee7,	// (0x00013940) popup_note_image_window_t1

0x4f00,	// (0x00013959) popup_note_image_window_t2_ParamLimits

0x4f00,	// (0x00013959) popup_note_image_window_t2

0x4f19,	// (0x00013972) popup_note_image_window_t3_ParamLimits

0x4f19,	// (0x00013972) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0001e2ac) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0001e2ac) popup_note_image_window_t

0x4d91,	// (0x000137ea) bg_popup_window_pane_cp7_ParamLimits

0x4d91,	// (0x000137ea) bg_popup_window_pane_cp7

0x4dc1,	// (0x0001381a) popup_note_wait_window_g1_ParamLimits

0x4dc1,	// (0x0001381a) popup_note_wait_window_g1

0x4dcd,	// (0x00013826) popup_note_wait_window_g2_ParamLimits

0x4dcd,	// (0x00013826) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0001e295) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0001e295) popup_note_wait_window_g

0x4de5,	// (0x0001383e) popup_note_wait_window_t1_ParamLimits

0x4de5,	// (0x0001383e) popup_note_wait_window_t1

0x4e0c,	// (0x00013865) popup_note_wait_window_t2_ParamLimits

0x4e0c,	// (0x00013865) popup_note_wait_window_t2

0x4e29,	// (0x00013882) popup_note_wait_window_t3_ParamLimits

0x4e29,	// (0x00013882) popup_note_wait_window_t3

0x4e3c,	// (0x00013895) popup_note_wait_window_t4_ParamLimits

0x4e3c,	// (0x00013895) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0001e29c) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0001e29c) popup_note_wait_window_t

0x4e61,	// (0x000138ba) wait_bar_pane_ParamLimits

0x4e61,	// (0x000138ba) wait_bar_pane

0x2305,	// (0x00010d5e) wait_anim_pane

0x2305,	// (0x00010d5e) wait_border_pane

0x221e,	// (0x00010c77) wait_anim_pane_g1

0x221e,	// (0x00010c77) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001e157) wait_anim_pane_g

0x4d41,	// (0x0001379a) wait_border_pane_g1

0x4d4a,	// (0x000137a3) wait_border_pane_g2

0x4d53,	// (0x000137ac) wait_border_pane_g3

0x0002,

0xf835,	// (0x0001e28e) wait_border_pane_g

0x4bb1,	// (0x0001360a) bg_popup_window_pane_cp16_ParamLimits

0x4bb1,	// (0x0001360a) bg_popup_window_pane_cp16

0x4cb1,	// (0x0001370a) indicator_popup_pane_cp4_ParamLimits

0x4cb1,	// (0x0001370a) indicator_popup_pane_cp4

0x4cc5,	// (0x0001371e) popup_query_data_window_t1_ParamLimits

0x4cc5,	// (0x0001371e) popup_query_data_window_t1

0x4cd7,	// (0x00013730) popup_query_data_window_t2_ParamLimits

0x4cd7,	// (0x00013730) popup_query_data_window_t2

0x4cf0,	// (0x00013749) popup_query_data_window_t3_ParamLimits

0x4cf0,	// (0x00013749) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0001e287) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0001e287) popup_query_data_window_t

0x4d0a,	// (0x00013763) query_popup_data_pane_ParamLimits

0x4d0a,	// (0x00013763) query_popup_data_pane

0x4d1e,	// (0x00013777) query_popup_data_pane_cp1_ParamLimits

0x4d1e,	// (0x00013777) query_popup_data_pane_cp1

0x4bb1,	// (0x0001360a) bg_popup_window_pane_cp10_ParamLimits

0x4bb1,	// (0x0001360a) bg_popup_window_pane_cp10

0x4be3,	// (0x0001363c) indicator_popup_pane_ParamLimits

0x4be3,	// (0x0001363c) indicator_popup_pane

0x4c05,	// (0x0001365e) popup_query_code_window_t1_ParamLimits

0x4c05,	// (0x0001365e) popup_query_code_window_t1

0x4c1f,	// (0x00013678) popup_query_code_window_t2_ParamLimits

0x4c1f,	// (0x00013678) popup_query_code_window_t2

0x4c68,	// (0x000136c1) popup_query_code_window_t3_ParamLimits

0x4c68,	// (0x000136c1) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0001e280) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0001e280) popup_query_code_window_t

0x4c97,	// (0x000136f0) query_popup_pane_ParamLimits

0x4c97,	// (0x000136f0) query_popup_pane

0x275a,	// (0x000111b3) bg_popup_window_pane_cp15_ParamLimits

0x275a,	// (0x000111b3) bg_popup_window_pane_cp15

0x2778,	// (0x000111d1) indicator_popup_pane_cp1_ParamLimits

0x2778,	// (0x000111d1) indicator_popup_pane_cp1

0x278b,	// (0x000111e4) indicator_popup_pane_cp2_ParamLimits

0x278b,	// (0x000111e4) indicator_popup_pane_cp2

0x279e,	// (0x000111f7) popup_query_data_code_window_g1_ParamLimits

0x279e,	// (0x000111f7) popup_query_data_code_window_g1

0x27b1,	// (0x0001120a) popup_query_data_code_window_t1_ParamLimits

0x27b1,	// (0x0001120a) popup_query_data_code_window_t1

0x27c3,	// (0x0001121c) popup_query_data_code_window_t2_ParamLimits

0x27c3,	// (0x0001121c) popup_query_data_code_window_t2

0x27d5,	// (0x0001122e) popup_query_data_code_window_t3_ParamLimits

0x27d5,	// (0x0001122e) popup_query_data_code_window_t3

0x27eb,	// (0x00011244) popup_query_data_code_window_t4_ParamLimits

0x27eb,	// (0x00011244) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001dfe3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001dfe3) popup_query_data_code_window_t

0x3d36,	// (0x0001278f) list_single_midp_graphic_pane_g3

0x2803,	// (0x0001125c) query_popup_data_pane_cp2_ParamLimits

0x2816,	// (0x0001126f) query_popup_pane_cp2_ParamLimits

0x2816,	// (0x0001126f) query_popup_pane_cp2

0x2305,	// (0x00010d5e) bg_popup_window_pane_cp11

0x4b9d,	// (0x000135f6) heading_pane_cp5

0x28fa,	// (0x00011353) listscroll_popup_info_pane

0x2305,	// (0x00010d5e) input_focus_pane_cp3

0x2829,	// (0x00011282) query_popup_pane_t1

0x2837,	// (0x00011290) list_popup_info_pane_ParamLimits

0x2837,	// (0x00011290) list_popup_info_pane

0x2846,	// (0x0001129f) listscroll_popup_info_pane_g1

0x284e,	// (0x000112a7) scroll_pane_cp7

0x2856,	// (0x000112af) popup_info_list_pane_t1_ParamLimits

0x2856,	// (0x000112af) popup_info_list_pane_t1

0x2870,	// (0x000112c9) popup_info_list_pane_t2_ParamLimits

0x2870,	// (0x000112c9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001dfec) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001dfec) popup_info_list_pane_t

0x2305,	// (0x00010d5e) bg_popup_window_pane_cp12

0x5e9f,	// (0x000148f8) find_popup_pane

0x23e5,	// (0x00010e3e) bg_popup_window_pane_cp3

0x288a,	// (0x000112e3) heading_pane_cp3

0x2896,	// (0x000112ef) listscroll_popup_graphic_pane

0x2305,	// (0x00010d5e) bg_popup_window_pane_cp4

0x28f2,	// (0x0001134b) heading_pane_cp4

0x28fa,	// (0x00011353) listscroll_popup_colour_pane

0x2902,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2902,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane

0x2912,	// (0x0001136b) grid_large_graphic_colour_popup_pane_ParamLimits

0x2912,	// (0x0001136b) grid_large_graphic_colour_popup_pane

0x292e,	// (0x00011387) listscroll_popup_colour_pane_g1_ParamLimits

0x292e,	// (0x00011387) listscroll_popup_colour_pane_g1

0x2945,	// (0x0001139e) listscroll_popup_colour_pane_g2_ParamLimits

0x2945,	// (0x0001139e) listscroll_popup_colour_pane_g2

0x2959,	// (0x000113b2) listscroll_popup_colour_pane_g3_ParamLimits

0x2959,	// (0x000113b2) listscroll_popup_colour_pane_g3

0x2969,	// (0x000113c2) listscroll_popup_colour_pane_g4_ParamLimits

0x2969,	// (0x000113c2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001dff1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001dff1) listscroll_popup_colour_pane_g

0x2978,	// (0x000113d1) scroll_pane_cp6_ParamLimits

0x2978,	// (0x000113d1) scroll_pane_cp6

0x298a,	// (0x000113e3) cell_large_graphic_colour_popup_pane_ParamLimits

0x298a,	// (0x000113e3) cell_large_graphic_colour_popup_pane

0x29a9,	// (0x00011402) cell_large_graphic_colour_none_popup_pane_t1

0x2305,	// (0x00010d5e) grid_highlight_pane_cp5

0x29b8,	// (0x00011411) cell_large_graphic_colour_popup_pane_g1

0x29c0,	// (0x00011419) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001dffa) cell_large_graphic_colour_popup_pane_g

0x29c8,	// (0x00011421) cell_large_graphic_colour_popup_pane_g2_copy1

0x29d1,	// (0x0001142a) grid_highlight_pane_cp4

0x29d9,	// (0x00011432) bg_popup_window_pane_cp8_ParamLimits

0x29d9,	// (0x00011432) bg_popup_window_pane_cp8

0x29f4,	// (0x0001144d) popup_snote_single_text_window_g1_ParamLimits

0x29f4,	// (0x0001144d) popup_snote_single_text_window_g1

0x2a06,	// (0x0001145f) popup_snote_single_text_window_t1_ParamLimits

0x2a06,	// (0x0001145f) popup_snote_single_text_window_t1

0x2a19,	// (0x00011472) popup_snote_single_text_window_t2_ParamLimits

0x2a19,	// (0x00011472) popup_snote_single_text_window_t2

0x2a2c,	// (0x00011485) popup_snote_single_text_window_t3_ParamLimits

0x2a2c,	// (0x00011485) popup_snote_single_text_window_t3

0x2a65,	// (0x000114be) popup_snote_single_text_window_t4_ParamLimits

0x2a65,	// (0x000114be) popup_snote_single_text_window_t4

0x2a99,	// (0x000114f2) popup_snote_single_text_window_t5_ParamLimits

0x2a99,	// (0x000114f2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001dfff) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001dfff) popup_snote_single_text_window_t

0x2ac8,	// (0x00011521) bg_popup_window_pane_cp9_ParamLimits

0x2ac8,	// (0x00011521) bg_popup_window_pane_cp9

0x29f4,	// (0x0001144d) popup_snote_single_graphic_window_g1_ParamLimits

0x29f4,	// (0x0001144d) popup_snote_single_graphic_window_g1

0x2ad6,	// (0x0001152f) popup_snote_single_graphic_window_g2_ParamLimits

0x2ad6,	// (0x0001152f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001e00a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001e00a) popup_snote_single_graphic_window_g

0x2ae2,	// (0x0001153b) popup_snote_single_graphic_window_t1_ParamLimits

0x2ae2,	// (0x0001153b) popup_snote_single_graphic_window_t1

0x2af5,	// (0x0001154e) popup_snote_single_graphic_window_t2_ParamLimits

0x2af5,	// (0x0001154e) popup_snote_single_graphic_window_t2

0x2a2c,	// (0x00011485) popup_snote_single_graphic_window_t3_ParamLimits

0x2a2c,	// (0x00011485) popup_snote_single_graphic_window_t3

0x2a65,	// (0x000114be) popup_snote_single_graphic_window_t4_ParamLimits

0x2a65,	// (0x000114be) popup_snote_single_graphic_window_t4

0x2a99,	// (0x000114f2) popup_snote_single_graphic_window_t5_ParamLimits

0x2a99,	// (0x000114f2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001e00f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001e00f) popup_snote_single_graphic_window_t

0x5e0c,	// (0x00014865) grid_graphic_popup_pane_ParamLimits

0x5e0c,	// (0x00014865) grid_graphic_popup_pane

0x5e2f,	// (0x00014888) listscroll_popup_graphic_pane_g1_ParamLimits

0x5e2f,	// (0x00014888) listscroll_popup_graphic_pane_g1

0x5e43,	// (0x0001489c) listscroll_popup_graphic_pane_g2_ParamLimits

0x5e43,	// (0x0001489c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0001e3fd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0001e3fd) listscroll_popup_graphic_pane_g

0x5e57,	// (0x000148b0) scroll_pane_cp5

0x5daf,	// (0x00014808) cell_graphic_popup_pane_ParamLimits

0x5daf,	// (0x00014808) cell_graphic_popup_pane

0x5d90,	// (0x000147e9) cell_graphic_popup_pane_g1

0x5d98,	// (0x000147f1) cell_graphic_popup_pane_g2

0x29c8,	// (0x00011421) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0001e3f6) cell_graphic_popup_pane_g

0x5da1,	// (0x000147fa) cell_graphic_popup_pane_t2

0x29d1,	// (0x0001142a) grid_highlight_pane_cp3

0x2b1a,	// (0x00011573) list_gen_pane_ParamLimits

0x2b1a,	// (0x00011573) list_gen_pane

0x2b4b,	// (0x000115a4) scroll_pane

0x5d10,	// (0x00014769) bg_list_pane_g1_ParamLimits

0x5d10,	// (0x00014769) bg_list_pane_g1

0x5d27,	// (0x00014780) bg_list_pane_g2_ParamLimits

0x5d27,	// (0x00014780) bg_list_pane_g2

0x5d3a,	// (0x00014793) bg_list_pane_g3_ParamLimits

0x5d3a,	// (0x00014793) bg_list_pane_g3

0x5d4c,	// (0x000147a5) bg_list_pane_g4_ParamLimits

0x5d4c,	// (0x000147a5) bg_list_pane_g4

0x5d5e,	// (0x000147b7) bg_list_pane_g5_ParamLimits

0x5d5e,	// (0x000147b7) bg_list_pane_g5

0x0004,

0xf992,	// (0x0001e3eb) bg_list_pane_g_ParamLimits

0xf992,	// (0x0001e3eb) bg_list_pane_g

0x5c3f,	// (0x00014698) list_double2_graphic_large_graphic_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double2_graphic_large_graphic_pane

0x5c3f,	// (0x00014698) list_double2_graphic_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double2_graphic_pane

0x5c3f,	// (0x00014698) list_double2_large_graphic_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double2_large_graphic_pane

0x5c3f,	// (0x00014698) list_double2_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double2_pane

0x5c3f,	// (0x00014698) list_double_graphic_heading_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_graphic_heading_pane

0x5c3f,	// (0x00014698) list_double_graphic_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_graphic_pane

0x5c3f,	// (0x00014698) list_double_heading_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_heading_pane

0x5c3f,	// (0x00014698) list_double_large_graphic_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_large_graphic_pane

0x5c3f,	// (0x00014698) list_double_number_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_number_pane

0x5c3f,	// (0x00014698) list_double_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_pane

0x5c3f,	// (0x00014698) list_double_time_pane_ParamLimits

0x5c3f,	// (0x00014698) list_double_time_pane

0x5c3f,	// (0x00014698) list_setting_number_pane_ParamLimits

0x5c3f,	// (0x00014698) list_setting_number_pane

0x5c3f,	// (0x00014698) list_setting_pane_ParamLimits

0x5c3f,	// (0x00014698) list_setting_pane

0xc528,	// (0x0001af81) list_single_2graphic_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_2graphic_pane

0xc528,	// (0x0001af81) list_single_graphic_heading_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_graphic_heading_pane

0xc528,	// (0x0001af81) list_single_graphic_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_graphic_pane

0xc528,	// (0x0001af81) list_single_heading_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_heading_pane

0xc53f,	// (0x0001af98) list_single_large_graphic_pane_ParamLimits

0xc53f,	// (0x0001af98) list_single_large_graphic_pane

0xc528,	// (0x0001af81) list_single_number_heading_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_number_heading_pane

0xc528,	// (0x0001af81) list_single_number_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_number_pane

0xc528,	// (0x0001af81) list_single_pane_ParamLimits

0xc528,	// (0x0001af81) list_single_pane

0x2305,	// (0x00010d5e) list_highlight_pane_cp1

0xbc4c,	// (0x0001a6a5) list_single_pane_g1_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_pane_g1

0xbc58,	// (0x0001a6b1) list_single_pane_g2_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001e021) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001e021) list_single_pane_g

0xc4d7,	// (0x0001af30) list_single_pane_t1_ParamLimits

0xc4d7,	// (0x0001af30) list_single_pane_t1

0xbc4c,	// (0x0001a6a5) list_single_number_pane_g1_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_number_pane_g1

0xbc58,	// (0x0001a6b1) list_single_number_pane_g2_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001e021) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001e021) list_single_number_pane_g

0xbc64,	// (0x0001a6bd) list_single_number_pane_t1_ParamLimits

0xbc64,	// (0x0001a6bd) list_single_number_pane_t1

0xc498,	// (0x0001aef1) list_single_number_pane_t2_ParamLimits

0xc498,	// (0x0001aef1) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0001e3ac) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0001e3ac) list_single_number_pane_t

0xbc40,	// (0x0001a699) list_single_graphic_pane_g1_ParamLimits

0xbc40,	// (0x0001a699) list_single_graphic_pane_g1

0xbc4c,	// (0x0001a6a5) list_single_graphic_pane_g2_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_graphic_pane_g2

0xbc58,	// (0x0001a6b1) list_single_graphic_pane_g3_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001e01a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001e01a) list_single_graphic_pane_g

0xbc64,	// (0x0001a6bd) list_single_graphic_pane_t1_ParamLimits

0xbc64,	// (0x0001a6bd) list_single_graphic_pane_t1

0xbc4c,	// (0x0001a6a5) list_single_heading_pane_g1_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_heading_pane_g1

0xbc58,	// (0x0001a6b1) list_single_heading_pane_g2_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e021) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e021) list_single_heading_pane_g

0xbc7a,	// (0x0001a6d3) list_single_heading_pane_t1_ParamLimits

0xbc7a,	// (0x0001a6d3) list_single_heading_pane_t1

0xbc90,	// (0x0001a6e9) list_single_heading_pane_t2_ParamLimits

0xbc90,	// (0x0001a6e9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001e026) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001e026) list_single_heading_pane_t

0xbc4c,	// (0x0001a6a5) list_single_number_heading_pane_g1_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_number_heading_pane_g1

0xbc58,	// (0x0001a6b1) list_single_number_heading_pane_g2_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e021) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e021) list_single_number_heading_pane_g

0xbc7a,	// (0x0001a6d3) list_single_number_heading_pane_t1_ParamLimits

0xbc7a,	// (0x0001a6d3) list_single_number_heading_pane_t1

0xbca2,	// (0x0001a6fb) list_single_number_heading_pane_t2_ParamLimits

0xbca2,	// (0x0001a6fb) list_single_number_heading_pane_t2

0xbcb4,	// (0x0001a70d) list_single_number_heading_pane_t3_ParamLimits

0xbcb4,	// (0x0001a70d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001e02b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001e02b) list_single_number_heading_pane_t

0xbc40,	// (0x0001a699) list_single_graphic_heading_pane_g1_ParamLimits

0xbc40,	// (0x0001a699) list_single_graphic_heading_pane_g1

0xbcc6,	// (0x0001a71f) list_single_graphic_heading_pane_g4_ParamLimits

0xbcc6,	// (0x0001a71f) list_single_graphic_heading_pane_g4

0xbc58,	// (0x0001a6b1) list_single_graphic_heading_pane_g5_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001e032) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001e032) list_single_graphic_heading_pane_g

0xbc7a,	// (0x0001a6d3) list_single_graphic_heading_pane_t1_ParamLimits

0xbc7a,	// (0x0001a6d3) list_single_graphic_heading_pane_t1

0xbcd5,	// (0x0001a72e) list_single_graphic_heading_pane_t2_ParamLimits

0xbcd5,	// (0x0001a72e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001e039) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001e039) list_single_graphic_heading_pane_t

0xbce7,	// (0x0001a740) list_single_large_graphic_pane_g1_ParamLimits

0xbce7,	// (0x0001a740) list_single_large_graphic_pane_g1

0xbcf3,	// (0x0001a74c) list_single_large_graphic_pane_g2_ParamLimits

0xbcf3,	// (0x0001a74c) list_single_large_graphic_pane_g2

0xbcff,	// (0x0001a758) list_single_large_graphic_pane_g3_ParamLimits

0xbcff,	// (0x0001a758) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001e03e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001e03e) list_single_large_graphic_pane_g

0x4d4a,	// (0x000137a3) wait_border_pane_g2_copy1

0xbd0b,	// (0x0001a764) list_single_large_graphic_pane_g4_cp2

0xbd13,	// (0x0001a76c) list_single_large_graphic_pane_t1_ParamLimits

0xbd13,	// (0x0001a76c) list_single_large_graphic_pane_t1

0xbd29,	// (0x0001a782) list_double_pane_g1_ParamLimits

0xbd29,	// (0x0001a782) list_double_pane_g1

0xbd35,	// (0x0001a78e) list_double_pane_g2_ParamLimits

0xbd35,	// (0x0001a78e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001e045) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001e045) list_double_pane_g

0xbd41,	// (0x0001a79a) list_double_pane_t1_ParamLimits

0xbd41,	// (0x0001a79a) list_double_pane_t1

0xbd57,	// (0x0001a7b0) list_double_pane_t2_ParamLimits

0xbd57,	// (0x0001a7b0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001e04a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001e04a) list_double_pane_t

0xbd69,	// (0x0001a7c2) list_double2_pane_g1_ParamLimits

0xbd69,	// (0x0001a7c2) list_double2_pane_g1

0xbd35,	// (0x0001a78e) list_double2_pane_g2_ParamLimits

0xbd35,	// (0x0001a78e) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001e04f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001e04f) list_double2_pane_g

0xbd41,	// (0x0001a79a) list_double2_pane_t1_ParamLimits

0xbd41,	// (0x0001a79a) list_double2_pane_t1

0xbd78,	// (0x0001a7d1) list_double2_pane_t2_ParamLimits

0xbd78,	// (0x0001a7d1) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001e054) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001e054) list_double2_pane_t

0xbd29,	// (0x0001a782) list_double_number_pane_g1_ParamLimits

0xbd29,	// (0x0001a782) list_double_number_pane_g1

0xbd35,	// (0x0001a78e) list_double_number_pane_g2_ParamLimits

0xbd35,	// (0x0001a78e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001e045) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001e045) list_double_number_pane_g

0xbd8a,	// (0x0001a7e3) list_double_number_pane_t1_ParamLimits

0xbd8a,	// (0x0001a7e3) list_double_number_pane_t1

0xbd9c,	// (0x0001a7f5) list_double_number_pane_t2_ParamLimits

0xbd9c,	// (0x0001a7f5) list_double_number_pane_t2

0xbdb2,	// (0x0001a80b) list_double_number_pane_t3_ParamLimits

0xbdb2,	// (0x0001a80b) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001e059) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001e059) list_double_number_pane_t

0xbdc4,	// (0x0001a81d) list_double_graphic_pane_g1_ParamLimits

0xbdc4,	// (0x0001a81d) list_double_graphic_pane_g1

0xbdd0,	// (0x0001a829) list_double_graphic_pane_g2_ParamLimits

0xbdd0,	// (0x0001a829) list_double_graphic_pane_g2

0xbddf,	// (0x0001a838) list_double_graphic_pane_g3_ParamLimits

0xbddf,	// (0x0001a838) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001e060) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001e060) list_double_graphic_pane_g

0xbdf7,	// (0x0001a850) list_double_graphic_pane_t1_ParamLimits

0xbdf7,	// (0x0001a850) list_double_graphic_pane_t1

0xbe0d,	// (0x0001a866) list_double_graphic_pane_t2_ParamLimits

0xbe0d,	// (0x0001a866) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001e069) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001e069) list_double_graphic_pane_t

0xbdc4,	// (0x0001a81d) list_double2_graphic_pane_g1_ParamLimits

0xbdc4,	// (0x0001a81d) list_double2_graphic_pane_g1

0xbe1f,	// (0x0001a878) list_double2_graphic_pane_g2_ParamLimits

0xbe1f,	// (0x0001a878) list_double2_graphic_pane_g2

0xbe2b,	// (0x0001a884) list_double2_graphic_pane_g3_ParamLimits

0xbe2b,	// (0x0001a884) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001e06e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001e06e) list_double2_graphic_pane_g

0xbd9c,	// (0x0001a7f5) list_double2_graphic_pane_t1_ParamLimits

0xbd9c,	// (0x0001a7f5) list_double2_graphic_pane_t1

0xbe37,	// (0x0001a890) list_double2_graphic_pane_t2_ParamLimits

0xbe37,	// (0x0001a890) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001e075) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001e075) list_double2_graphic_pane_t

0xbe49,	// (0x0001a8a2) list_double_large_graphic_pane_g1_ParamLimits

0xbe49,	// (0x0001a8a2) list_double_large_graphic_pane_g1

0xbd69,	// (0x0001a7c2) list_double_large_graphic_pane_g2_ParamLimits

0xbd69,	// (0x0001a7c2) list_double_large_graphic_pane_g2

0xbd35,	// (0x0001a78e) list_double_large_graphic_pane_g3_ParamLimits

0xbd35,	// (0x0001a78e) list_double_large_graphic_pane_g3

0xbe72,	// (0x0001a8cb) list_double_large_graphic_pane_g4_ParamLimits

0xbe72,	// (0x0001a8cb) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001e07a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001e07a) list_double_large_graphic_pane_g

0xbe98,	// (0x0001a8f1) list_double_large_graphic_pane_t1_ParamLimits

0xbe98,	// (0x0001a8f1) list_double_large_graphic_pane_t1

0xbeb1,	// (0x0001a90a) list_double_large_graphic_pane_t2_ParamLimits

0xbeb1,	// (0x0001a90a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e085) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e085) list_double_large_graphic_pane_t

0xbec3,	// (0x0001a91c) list_double2_large_graphic_pane_g1_ParamLimits

0xbec3,	// (0x0001a91c) list_double2_large_graphic_pane_g1

0xbd69,	// (0x0001a7c2) list_double2_large_graphic_pane_g2_ParamLimits

0xbd69,	// (0x0001a7c2) list_double2_large_graphic_pane_g2

0xbd35,	// (0x0001a78e) list_double2_large_graphic_pane_g3_ParamLimits

0xbd35,	// (0x0001a78e) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e08a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e08a) list_double2_large_graphic_pane_g

0xbecf,	// (0x0001a928) list_double2_large_graphic_pane_t1_ParamLimits

0xbecf,	// (0x0001a928) list_double2_large_graphic_pane_t1

0xbee5,	// (0x0001a93e) list_double2_large_graphic_pane_t2_ParamLimits

0xbee5,	// (0x0001a93e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e091) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e091) list_double2_large_graphic_pane_t

0xbef7,	// (0x0001a950) list_double_heading_pane_g1_ParamLimits

0xbef7,	// (0x0001a950) list_double_heading_pane_g1

0xbf06,	// (0x0001a95f) list_double_heading_pane_g2_ParamLimits

0xbf06,	// (0x0001a95f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001e096) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001e096) list_double_heading_pane_g

0xbf12,	// (0x0001a96b) list_double_heading_pane_t1_ParamLimits

0xbf12,	// (0x0001a96b) list_double_heading_pane_t1

0xbf28,	// (0x0001a981) list_double_heading_pane_t2_ParamLimits

0xbf28,	// (0x0001a981) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001e09b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001e09b) list_double_heading_pane_t

0xbf3a,	// (0x0001a993) list_double_graphic_heading_pane_g1_ParamLimits

0xbf3a,	// (0x0001a993) list_double_graphic_heading_pane_g1

0xbef7,	// (0x0001a950) list_double_graphic_heading_pane_g2_ParamLimits

0xbef7,	// (0x0001a950) list_double_graphic_heading_pane_g2

0xbf06,	// (0x0001a95f) list_double_graphic_heading_pane_g3_ParamLimits

0xbf06,	// (0x0001a95f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001e0a0) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001e0a0) list_double_graphic_heading_pane_g

0xbf46,	// (0x0001a99f) list_double_graphic_heading_pane_t1_ParamLimits

0xbf46,	// (0x0001a99f) list_double_graphic_heading_pane_t1

0xbf5c,	// (0x0001a9b5) list_double_graphic_heading_pane_t2_ParamLimits

0xbf5c,	// (0x0001a9b5) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001e0a7) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001e0a7) list_double_graphic_heading_pane_t

0xbd69,	// (0x0001a7c2) list_double_time_pane_g1_ParamLimits

0xbd69,	// (0x0001a7c2) list_double_time_pane_g1

0xbd35,	// (0x0001a78e) list_double_time_pane_g2_ParamLimits

0xbd35,	// (0x0001a78e) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0001e04f) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0001e04f) list_double_time_pane_g

0xbecf,	// (0x0001a928) list_double_time_pane_t1_ParamLimits

0xbecf,	// (0x0001a928) list_double_time_pane_t1

0xbf6e,	// (0x0001a9c7) list_double_time_pane_t2_ParamLimits

0xbf6e,	// (0x0001a9c7) list_double_time_pane_t2

0xbf80,	// (0x0001a9d9) list_double_time_pane_t3_ParamLimits

0xbf80,	// (0x0001a9d9) list_double_time_pane_t3

0xbf92,	// (0x0001a9eb) list_double_time_pane_t4_ParamLimits

0xbf92,	// (0x0001a9eb) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0001e0ac) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0001e0ac) list_double_time_pane_t

0xbfa4,	// (0x0001a9fd) list_setting_pane_g1_ParamLimits

0xbfa4,	// (0x0001a9fd) list_setting_pane_g1

0xbfb0,	// (0x0001aa09) list_setting_pane_g2_ParamLimits

0xbfb0,	// (0x0001aa09) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0001e0b5) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0001e0b5) list_setting_pane_g

0xbfbc,	// (0x0001aa15) list_setting_pane_t1_ParamLimits

0xbfbc,	// (0x0001aa15) list_setting_pane_t1

0xbfd3,	// (0x0001aa2c) list_setting_pane_t2_ParamLimits

0xbfd3,	// (0x0001aa2c) list_setting_pane_t2

0x0002,

0xf661,	// (0x0001e0ba) list_setting_pane_t_ParamLimits

0xf661,	// (0x0001e0ba) list_setting_pane_t

0xc010,	// (0x0001aa69) set_value_pane_cp_ParamLimits

0xc010,	// (0x0001aa69) set_value_pane_cp

0xc01c,	// (0x0001aa75) list_setting_number_pane_g1_ParamLimits

0xc01c,	// (0x0001aa75) list_setting_number_pane_g1

0xc028,	// (0x0001aa81) list_setting_number_pane_g2_ParamLimits

0xc028,	// (0x0001aa81) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0001e0c1) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0001e0c1) list_setting_number_pane_g

0xc034,	// (0x0001aa8d) list_setting_number_pane_t1_ParamLimits

0xc034,	// (0x0001aa8d) list_setting_number_pane_t1

0xc046,	// (0x0001aa9f) list_setting_number_pane_t2_ParamLimits

0xc046,	// (0x0001aa9f) list_setting_number_pane_t2

0xc05d,	// (0x0001aab6) list_setting_number_pane_t3_ParamLimits

0xc05d,	// (0x0001aab6) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001e0c6) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001e0c6) list_setting_number_pane_t

0xc010,	// (0x0001aa69) set_value_pane_ParamLimits

0xc010,	// (0x0001aa69) set_value_pane

0x2fdb,	// (0x00011a34) bg_set_opt_pane_ParamLimits

0x2fdb,	// (0x00011a34) bg_set_opt_pane

0xc09e,	// (0x0001aaf7) set_value_pane_t1

0x300a,	// (0x00011a63) slider_set_pane_cp3

0x3013,	// (0x00011a6c) volume_small_pane_cp

0x301c,	// (0x00011a75) list_form_gen_pane

0x2b6f,	// (0x000115c8) scroll_pane_cp8

0xc0b4,	// (0x0001ab0d) form_field_data_pane_ParamLimits

0xc0b4,	// (0x0001ab0d) form_field_data_pane

0xc0d4,	// (0x0001ab2d) form_field_data_wide_pane_ParamLimits

0xc0d4,	// (0x0001ab2d) form_field_data_wide_pane

0xc0f3,	// (0x0001ab4c) form_field_popup_pane_ParamLimits

0xc0f3,	// (0x0001ab4c) form_field_popup_pane

0xc10b,	// (0x0001ab64) form_field_popup_wide_pane_ParamLimits

0xc10b,	// (0x0001ab64) form_field_popup_wide_pane

0xc122,	// (0x0001ab7b) form_field_slider_pane_ParamLimits

0xc122,	// (0x0001ab7b) form_field_slider_pane

0xc135,	// (0x0001ab8e) form_field_slider_wide_pane_ParamLimits

0xc135,	// (0x0001ab8e) form_field_slider_wide_pane

0x30c9,	// (0x00011b22) data_form_pane

0x314e,	// (0x00011ba7) form_field_data_pane_t1

0x30f5,	// (0x00011b4e) input_focus_pane

0x3103,	// (0x00011b5c) data_form_wide_pane

0xc15c,	// (0x0001abb5) form_field_data_wide_pane_t1

0x29e6,	// (0x0001143f) input_focus_pane_cp6

0xc17e,	// (0x0001abd7) form_field_popup_pane_t1

0x30f5,	// (0x00011b4e) input_focus_pane_cp7

0x30c9,	// (0x00011b22) list_form_pane

0xc19e,	// (0x0001abf7) form_field_popup_wide_pane_t1

0x30f5,	// (0x00011b4e) input_focus_pane_cp8

0x3183,	// (0x00011bdc) list_form_wide_pane

0xc1bb,	// (0x0001ac14) form_field_slider_pane_t1_ParamLimits

0xc1bb,	// (0x0001ac14) form_field_slider_pane_t1

0xc1cd,	// (0x0001ac26) form_field_slider_pane_t2_ParamLimits

0xc1cd,	// (0x0001ac26) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001e0d6) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001e0d6) form_field_slider_pane_t

0x267e,	// (0x000110d7) input_focus_pane_cp9_ParamLimits

0x267e,	// (0x000110d7) input_focus_pane_cp9

0xc1df,	// (0x0001ac38) slider_cont_pane_ParamLimits

0xc1df,	// (0x0001ac38) slider_cont_pane

0x31d6,	// (0x00011c2f) form_field_slider_wide_pane_t1_ParamLimits

0x31d6,	// (0x00011c2f) form_field_slider_wide_pane_t1

0xc1f3,	// (0x0001ac4c) form_field_slider_wide_pane_t2_ParamLimits

0xc1f3,	// (0x0001ac4c) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001e0db) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001e0db) form_field_slider_wide_pane_t

0x267e,	// (0x000110d7) input_focus_pane_cp10_ParamLimits

0x267e,	// (0x000110d7) input_focus_pane_cp10

0xc205,	// (0x0001ac5e) slider_cont_pane_cp1_ParamLimits

0xc205,	// (0x0001ac5e) slider_cont_pane_cp1

0xc21b,	// (0x0001ac74) slider_form_pane_cp

0x3218,	// (0x00011c71) input_focus_pane_g1

0x3220,	// (0x00011c79) input_focus_pane_g2

0x3228,	// (0x00011c81) input_focus_pane_g3

0x3230,	// (0x00011c89) input_focus_pane_g4

0x3238,	// (0x00011c91) input_focus_pane_g5

0x3240,	// (0x00011c99) input_focus_pane_g6

0x3248,	// (0x00011ca1) input_focus_pane_g7

0x3250,	// (0x00011ca9) input_focus_pane_g8

0x3258,	// (0x00011cb1) input_focus_pane_g9

0x221e,	// (0x00010c77) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001e0e0) input_focus_pane_g

0x4d53,	// (0x000137ac) wait_border_pane_g3_copy1

0xc223,	// (0x0001ac7c) data_form_pane_t1

0x221e,	// (0x00010c77) wait_anim_pane_g1_copy1

0xc4aa,	// (0x0001af03) data_form_wide_pane_t1

0xc23d,	// (0x0001ac96) list_form_graphic_pane_cp_ParamLimits

0xc23d,	// (0x0001ac96) list_form_graphic_pane_cp

0x5bbd,	// (0x00014616) slider_form_pane_g1

0x5bc6,	// (0x0001461f) slider_form_pane_g2

0x0006,

0xf983,	// (0x0001e3dc) slider_form_pane_g

0xc23d,	// (0x0001ac96) list_form_graphic_pane_ParamLimits

0xc23d,	// (0x0001ac96) list_form_graphic_pane

0xc253,	// (0x0001acac) list_form_graphic_pane_g1

0xc25b,	// (0x0001acb4) list_form_graphic_pane_t1_ParamLimits

0xc25b,	// (0x0001acb4) list_form_graphic_pane_t1

0x23e5,	// (0x00010e3e) list_highlight_pane_cp5_ParamLimits

0x23e5,	// (0x00010e3e) list_highlight_pane_cp5

0xc270,	// (0x0001acc9) find_pane_g1

0x32cb,	// (0x00011d24) input_find_pane

0xc279,	// (0x0001acd2) input_find_pane_g1_ParamLimits

0xc279,	// (0x0001acd2) input_find_pane_g1

0xc285,	// (0x0001acde) input_find_pane_t1_ParamLimits

0xc285,	// (0x0001acde) input_find_pane_t1

0xc29a,	// (0x0001acf3) input_find_pane_t2_ParamLimits

0xc29a,	// (0x0001acf3) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001e0f5) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001e0f5) input_find_pane_t

0x330a,	// (0x00011d63) input_focus_pane_cp5_ParamLimits

0x330a,	// (0x00011d63) input_focus_pane_cp5

0x267e,	// (0x000110d7) bg_popup_window_pane_cp2_ParamLimits

0x267e,	// (0x000110d7) bg_popup_window_pane_cp2

0x3324,	// (0x00011d7d) listscroll_menu_pane_ParamLimits

0x3324,	// (0x00011d7d) listscroll_menu_pane

0x3330,	// (0x00011d89) popup_submenu_window_ParamLimits

0x3330,	// (0x00011d89) popup_submenu_window

0x3354,	// (0x00011dad) find_popup_pane_g1

0x335c,	// (0x00011db5) input_popup_find_pane_cp

0x330a,	// (0x00011d63) input_focus_pane_cp4_ParamLimits

0x330a,	// (0x00011d63) input_focus_pane_cp4

0x3372,	// (0x00011dcb) input_popup_find_pane_t1_ParamLimits

0x3372,	// (0x00011dcb) input_popup_find_pane_t1

0x2305,	// (0x00010d5e) bg_popup_sub_pane_cp

0x33a0,	// (0x00011df9) listscroll_popup_sub_pane

0x33a8,	// (0x00011e01) list_submenu_pane_ParamLimits

0x33a8,	// (0x00011e01) list_submenu_pane

0x33b9,	// (0x00011e12) scroll_pane_cp4

0x33c1,	// (0x00011e1a) list_single_popup_submenu_pane_ParamLimits

0x33c1,	// (0x00011e1a) list_single_popup_submenu_pane

0x33d3,	// (0x00011e2c) list_single_popup_submenu_pane_g1

0x33db,	// (0x00011e34) list_single_popup_submenu_pane_t1_ParamLimits

0x33db,	// (0x00011e34) list_single_popup_submenu_pane_t1

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp1_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp1

0x33f0,	// (0x00011e49) tabs_2_active_pane_g1

0x33f8,	// (0x00011e51) tabs_2_active_pane_t1

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp1_ParamLimits

0x23e5,	// (0x00010e3e) bg_passive_tab_pane_cp1

0x33f0,	// (0x00011e49) tabs_2_passive_pane_g1

0x33f8,	// (0x00011e51) tabs_2_passive_pane_t1

0x340a,	// (0x00011e63) bg_active_tab_pane_cp4

0x3418,	// (0x00011e71) tabs_2_long_active_pane_t1

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp4

0x4add,	// (0x00013536) list_single_midp_graphic_pane_g4_ParamLimits

0x340a,	// (0x00011e63) bg_active_tab_pane_cp5

0x3437,	// (0x00011e90) tabs_3_long_active_pane_t1

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp5

0x4add,	// (0x00013536) list_single_midp_graphic_pane_g4

0x23e5,	// (0x00010e3e) bg_popup_window_pane_cp13_ParamLimits

0x23e5,	// (0x00010e3e) bg_popup_window_pane_cp13

0x3452,	// (0x00011eab) listscroll_popup_fast_pane_ParamLimits

0x3452,	// (0x00011eab) listscroll_popup_fast_pane

0x3461,	// (0x00011eba) grid_popup_fast_pane_ParamLimits

0x3461,	// (0x00011eba) grid_popup_fast_pane

0x3473,	// (0x00011ecc) scroll_pane_cp9_ParamLimits

0x3473,	// (0x00011ecc) scroll_pane_cp9

0x77e8,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x77e8,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2

0x3497,	// (0x00011ef0) input_focus_pane_cp20_ParamLimits

0x3497,	// (0x00011ef0) input_focus_pane_cp20

0x34a5,	// (0x00011efe) query_popup_data_pane_t1_ParamLimits

0x34a5,	// (0x00011efe) query_popup_data_pane_t1

0x34b8,	// (0x00011f11) query_popup_data_pane_t2_ParamLimits

0x34b8,	// (0x00011f11) query_popup_data_pane_t2

0x34fe,	// (0x00011f57) query_popup_data_pane_t3_ParamLimits

0x34fe,	// (0x00011f57) query_popup_data_pane_t3

0x353f,	// (0x00011f98) query_popup_data_pane_t4_ParamLimits

0x353f,	// (0x00011f98) query_popup_data_pane_t4

0x357b,	// (0x00011fd4) query_popup_data_pane_t5_ParamLimits

0x357b,	// (0x00011fd4) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001e0fa) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001e0fa) query_popup_data_pane_t

0x3218,	// (0x00011c71) bg_set_opt_pane_g1

0x3220,	// (0x00011c79) bg_set_opt_pane_g2

0x3228,	// (0x00011c81) bg_set_opt_pane_g3

0x3230,	// (0x00011c89) bg_set_opt_pane_g4

0x3238,	// (0x00011c91) bg_set_opt_pane_g5

0x3240,	// (0x00011c99) bg_set_opt_pane_g6

0x3248,	// (0x00011ca1) bg_set_opt_pane_g7

0x3250,	// (0x00011ca9) bg_set_opt_pane_g8

0x3258,	// (0x00011cb1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001e105) bg_set_opt_pane_g

0xd139,	// (0x0001bb92) control_top_pane_stacon_ParamLimits

0xd139,	// (0x0001bb92) control_top_pane_stacon

0xd18c,	// (0x0001bbe5) signal_pane_stacon_ParamLimits

0xd18c,	// (0x0001bbe5) signal_pane_stacon

0x3bbf,	// (0x00012618) stacon_top_pane_g1_ParamLimits

0x3bbf,	// (0x00012618) stacon_top_pane_g1

0xd1b1,	// (0x0001bc0a) title_pane_stacon_ParamLimits

0xd1b1,	// (0x0001bc0a) title_pane_stacon

0xd1d3,	// (0x0001bc2c) uni_indicator_pane_stacon_ParamLimits

0xd1d3,	// (0x0001bc2c) uni_indicator_pane_stacon

0xd1e8,	// (0x0001bc41) battery_pane_stacon_ParamLimits

0xd1e8,	// (0x0001bc41) battery_pane_stacon

0xd228,	// (0x0001bc81) control_bottom_pane_stacon_ParamLimits

0xd228,	// (0x0001bc81) control_bottom_pane_stacon

0xd247,	// (0x0001bca0) navi_pane_stacon_ParamLimits

0xd247,	// (0x0001bca0) navi_pane_stacon

0x3be1,	// (0x0001263a) stacon_bottom_pane_g1_ParamLimits

0x3be1,	// (0x0001263a) stacon_bottom_pane_g1

0x35b2,	// (0x0001200b) aid_levels_signal_lsc_ParamLimits

0x35b2,	// (0x0001200b) aid_levels_signal_lsc

0xcf05,	// (0x0001b95e) signal_pane_stacon_g1_ParamLimits

0xcf05,	// (0x0001b95e) signal_pane_stacon_g1

0xcf11,	// (0x0001b96a) signal_pane_stacon_g2_ParamLimits

0xcf11,	// (0x0001b96a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001e118) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001e118) signal_pane_stacon_g

0xcf45,	// (0x0001b99e) title_pane_stacon_t1_ParamLimits

0xcf45,	// (0x0001b99e) title_pane_stacon_t1

0x35e0,	// (0x00012039) uni_indicator_pane_stacon_g1

0x35ea,	// (0x00012043) uni_indicator_pane_stacon_g2

0x35cc,	// (0x00012025) uni_indicator_pane_stacon_g3

0x35d6,	// (0x0001202f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001e124) uni_indicator_pane_stacon_g

0xcf6a,	// (0x0001b9c3) control_top_pane_stacon_g1

0xcf72,	// (0x0001b9cb) control_top_pane_stacon_t1_ParamLimits

0xcf72,	// (0x0001b9cb) control_top_pane_stacon_t1

0x35f4,	// (0x0001204d) aid_levels_battery_lsc_ParamLimits

0x35f4,	// (0x0001204d) aid_levels_battery_lsc

0xcfa3,	// (0x0001b9fc) battery_pane_stacon_g1_ParamLimits

0xcfa3,	// (0x0001b9fc) battery_pane_stacon_g1

0xcfaf,	// (0x0001ba08) battery_pane_stacon_g2_ParamLimits

0xcfaf,	// (0x0001ba08) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001e12d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001e12d) battery_pane_stacon_g

0xcfde,	// (0x0001ba37) navi_icon_pane_stacon

0xcfee,	// (0x0001ba47) navi_navi_pane_stacon

0xcfde,	// (0x0001ba37) navi_text_pane_stacon

0xcf6a,	// (0x0001b9c3) control_bottom_pane_stacon_g1

0xcffe,	// (0x0001ba57) control_bottom_pane_stacon_t1_ParamLimits

0xcffe,	// (0x0001ba57) control_bottom_pane_stacon_t1

0x361c,	// (0x00012075) grid_app_pane_ParamLimits

0x361c,	// (0x00012075) grid_app_pane

0x3638,	// (0x00012091) scroll_pane_cp15_ParamLimits

0x3638,	// (0x00012091) scroll_pane_cp15

0x3649,	// (0x000120a2) cell_app_pane_ParamLimits

0x3649,	// (0x000120a2) cell_app_pane

0x366d,	// (0x000120c6) cell_app_pane_g1_ParamLimits

0x366d,	// (0x000120c6) cell_app_pane_g1

0x3691,	// (0x000120ea) cell_app_pane_g2_ParamLimits

0x3691,	// (0x000120ea) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001e132) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001e132) cell_app_pane_g

0x369d,	// (0x000120f6) cell_app_pane_t1_ParamLimits

0x369d,	// (0x000120f6) cell_app_pane_t1

0x36b4,	// (0x0001210d) grid_highlight_pane_ParamLimits

0x36b4,	// (0x0001210d) grid_highlight_pane

0x3218,	// (0x00011c71) cell_highlight_pane_g1

0x3220,	// (0x00011c79) cell_highlight_pane_g2

0x3228,	// (0x00011c81) cell_highlight_pane_g3

0x3230,	// (0x00011c89) cell_highlight_pane_g4

0x3238,	// (0x00011c91) cell_highlight_pane_g5

0x3240,	// (0x00011c99) cell_highlight_pane_g6

0x3248,	// (0x00011ca1) cell_highlight_pane_g7

0x3250,	// (0x00011ca9) cell_highlight_pane_g8

0x3258,	// (0x00011cb1) cell_highlight_pane_g9

0x221e,	// (0x00010c77) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001e0e0) cell_highlight_pane_g

0x36c5,	// (0x0001211e) bg_scroll_pane

0xd042,	// (0x0001ba9b) scroll_handle_pane

0x370c,	// (0x00012165) scroll_bg_pane_g1

0x3721,	// (0x0001217a) scroll_bg_pane_g2

0x3739,	// (0x00012192) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001e137) scroll_bg_pane_g

0x374e,	// (0x000121a7) scroll_handle_focus_pane_ParamLimits

0x374e,	// (0x000121a7) scroll_handle_focus_pane

0x370c,	// (0x00012165) scroll_handle_pane_g1

0x375b,	// (0x000121b4) scroll_handle_pane_g2

0x3739,	// (0x00012192) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001e13e) scroll_handle_pane_g

0x330a,	// (0x00011d63) bg_popup_sub_pane_cp21_ParamLimits

0x330a,	// (0x00011d63) bg_popup_sub_pane_cp21

0x376f,	// (0x000121c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x376f,	// (0x000121c8) popup_fep_japan_predictive_window_t1

0x3786,	// (0x000121df) popup_fep_japan_predictive_window_t2_ParamLimits

0x3786,	// (0x000121df) popup_fep_japan_predictive_window_t2

0x37b9,	// (0x00012212) popup_fep_japan_predictive_window_t3_ParamLimits

0x37b9,	// (0x00012212) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001e145) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001e145) popup_fep_japan_predictive_window_t

0x2305,	// (0x00010d5e) bg_popup_sub_pane_cp23

0x37f0,	// (0x00012249) listscroll_japin_cand_pane

0x37f8,	// (0x00012251) popup_fep_japan_candidate_window_t1

0x3806,	// (0x0001225f) candidate_pane_ParamLimits

0x3806,	// (0x0001225f) candidate_pane

0x3819,	// (0x00012272) scroll_pane_cp30

0x3821,	// (0x0001227a) list_single_popup_jap_candidate_pane_ParamLimits

0x3821,	// (0x0001227a) list_single_popup_jap_candidate_pane

0x2305,	// (0x00010d5e) list_highlight_pane_cp30

0x3836,	// (0x0001228f) list_single_popup_jap_candidate_pane_t1

0x3845,	// (0x0001229e) level_1_signal

0x3852,	// (0x000122ab) level_2_signal

0x385f,	// (0x000122b8) level_3_signal

0x386c,	// (0x000122c5) level_4_signal

0x3879,	// (0x000122d2) level_5_signal

0x3886,	// (0x000122df) level_6_signal

0x3893,	// (0x000122ec) level_7_signal

0x3845,	// (0x0001229e) level_1_battery

0x3852,	// (0x000122ab) level_2_battery

0x385f,	// (0x000122b8) level_3_battery

0x386c,	// (0x000122c5) level_4_battery

0x3879,	// (0x000122d2) level_5_battery

0x3886,	// (0x000122df) level_6_battery

0x3893,	// (0x000122ec) level_7_battery

0x38b8,	// (0x00012311) list_menu_pane_ParamLimits

0x38b8,	// (0x00012311) list_menu_pane

0x38ce,	// (0x00012327) scroll_pane_cp25_ParamLimits

0x38ce,	// (0x00012327) scroll_pane_cp25

0x38e7,	// (0x00012340) list_double2_graphic_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double2_graphic_pane_cp2

0x38e7,	// (0x00012340) list_double2_large_graphic_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double2_large_graphic_pane_cp2

0x38e7,	// (0x00012340) list_double2_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double2_pane_cp2

0x38e7,	// (0x00012340) list_double_graphic_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double_graphic_pane_cp2

0x38e7,	// (0x00012340) list_double_large_graphic_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double_large_graphic_pane_cp2

0x38e7,	// (0x00012340) list_double_number_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double_number_pane_cp2

0x38e7,	// (0x00012340) list_double_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double_pane_cp2

0x38f7,	// (0x00012350) list_single_2graphic_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_2graphic_pane_cp2

0x38f7,	// (0x00012350) list_single_graphic_heading_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_graphic_heading_pane_cp2

0x38f7,	// (0x00012350) list_single_graphic_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_graphic_pane_cp2

0x38f7,	// (0x00012350) list_single_heading_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_heading_pane_cp2

0x390c,	// (0x00012365) list_single_large_graphic_pane_cp2_ParamLimits

0x390c,	// (0x00012365) list_single_large_graphic_pane_cp2

0x38f7,	// (0x00012350) list_single_number_heading_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_number_heading_pane_cp2

0x38f7,	// (0x00012350) list_single_number_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_number_pane_cp2

0x38f7,	// (0x00012350) list_single_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_pane_cp2

0x3988,	// (0x000123e1) bg_popup_sub_pane_cp22

0xd0f1,	// (0x0001bb4a) popup_side_volume_key_window_g1

0xd115,	// (0x0001bb6e) popup_side_volume_key_window_t1

0xd131,	// (0x0001bb8a) volume_small_pane_cp1

0x267e,	// (0x000110d7) bg_popup_sub_pane_cp24_ParamLimits

0x267e,	// (0x000110d7) bg_popup_sub_pane_cp24

0x399e,	// (0x000123f7) fep_china_uni_candidate_pane_ParamLimits

0x399e,	// (0x000123f7) fep_china_uni_candidate_pane

0x39b2,	// (0x0001240b) fep_china_uni_entry_pane

0x39c2,	// (0x0001241b) popup_fep_china_uni_window_g1

0x39de,	// (0x00012437) fep_china_uni_entry_pane_g1

0x39e6,	// (0x0001243f) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001e176) fep_china_uni_entry_pane_g

0x39ee,	// (0x00012447) fep_entry_item_pane

0x39f8,	// (0x00012451) fep_candidate_item_pane

0x3a00,	// (0x00012459) fep_china_uni_candidate_pane_g1

0x3a08,	// (0x00012461) fep_china_uni_candidate_pane_g2

0x3a10,	// (0x00012469) fep_china_uni_candidate_pane_g3

0x3a18,	// (0x00012471) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001e17b) fep_china_uni_candidate_pane_g

0x221e,	// (0x00010c77) fep_entry_item_pane_g1

0x3a20,	// (0x00012479) fep_entry_item_pane_t1_ParamLimits

0x3a20,	// (0x00012479) fep_entry_item_pane_t1

0x3a36,	// (0x0001248f) fep_candidate_item_pane_t1_ParamLimits

0x3a36,	// (0x0001248f) fep_candidate_item_pane_t1

0x3a4b,	// (0x000124a4) fep_candidate_item_pane_t2_ParamLimits

0x3a4b,	// (0x000124a4) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001e184) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001e184) fep_candidate_item_pane_t

0x23e5,	// (0x00010e3e) list_highlight_pane_cp31_ParamLimits

0x23e5,	// (0x00010e3e) list_highlight_pane_cp31

0x3a5d,	// (0x000124b6) level_1_signal_lsc

0x3a66,	// (0x000124bf) level_2_signal_lsc

0x3a6f,	// (0x000124c8) level_3_signal_lsc

0x3a78,	// (0x000124d1) level_4_signal_lsc

0x3a81,	// (0x000124da) level_5_signal_lsc

0x3a8a,	// (0x000124e3) level_6_signal_lsc

0x3a93,	// (0x000124ec) level_7_signal_lsc

0x3a93,	// (0x000124ec) level_1_battery_lsc

0x3a9c,	// (0x000124f5) level_2_battery_lsc

0x3aa5,	// (0x000124fe) level_3_battery_lsc

0x3aae,	// (0x00012507) level_4_battery_lsc

0x3ab7,	// (0x00012510) level_5_battery_lsc

0x3ac0,	// (0x00012519) level_6_battery_lsc

0x3a5d,	// (0x000124b6) level_7_battery_lsc

0x3ac9,	// (0x00012522) scroll_handle_focus_pane_g1

0x3ad2,	// (0x0001252b) scroll_handle_focus_pane_g2

0x3adb,	// (0x00012534) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001e189) scroll_handle_focus_pane_g

0xc2af,	// (0x0001ad08) list_single_2graphic_pane_g1_ParamLimits

0xc2af,	// (0x0001ad08) list_single_2graphic_pane_g1

0xbcc6,	// (0x0001a71f) list_single_2graphic_pane_g2_ParamLimits

0xbcc6,	// (0x0001a71f) list_single_2graphic_pane_g2

0xbc58,	// (0x0001a6b1) list_single_2graphic_pane_g3_ParamLimits

0xbc58,	// (0x0001a6b1) list_single_2graphic_pane_g3

0xc2bb,	// (0x0001ad14) list_single_2graphic_pane_g4_ParamLimits

0xc2bb,	// (0x0001ad14) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001e190) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001e190) list_single_2graphic_pane_g

0xc2cc,	// (0x0001ad25) list_single_2graphic_pane_t1_ParamLimits

0xc2cc,	// (0x0001ad25) list_single_2graphic_pane_t1

0xc2fa,	// (0x0001ad53) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc2fa,	// (0x0001ad53) list_double2_graphic_large_graphic_pane_g1

0xbd69,	// (0x0001a7c2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbd69,	// (0x0001a7c2) list_double2_graphic_large_graphic_pane_g2

0xbd35,	// (0x0001a78e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbd35,	// (0x0001a78e) list_double2_graphic_large_graphic_pane_g3

0xc30a,	// (0x0001ad63) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc30a,	// (0x0001ad63) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001e199) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001e199) list_double2_graphic_large_graphic_pane_g

0xc316,	// (0x0001ad6f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc316,	// (0x0001ad6f) list_double2_graphic_large_graphic_pane_t1

0xc32c,	// (0x0001ad85) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc32c,	// (0x0001ad85) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001e1a2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001e1a2) list_double2_graphic_large_graphic_pane_t

0x3c88,	// (0x000126e1) popup_fast_swap_window_ParamLimits

0x3c88,	// (0x000126e1) popup_fast_swap_window

0x3ca4,	// (0x000126fd) popup_side_volume_key_window

0x3cbe,	// (0x00012717) stacon_top_pane

0x3cc8,	// (0x00012721) status_pane_ParamLimits

0x3cc8,	// (0x00012721) status_pane

0x3cd6,	// (0x0001272f) status_small_pane

0x2305,	// (0x00010d5e) control_pane

0x2305,	// (0x00010d5e) stacon_bottom_pane

0x2b6f,	// (0x000115c8) scroll_pane_cp121

0x301c,	// (0x00011a75) set_content_pane

0x3b80,	// (0x000125d9) bg_active_tab_pane_g1_cp1

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp1

0x3b6e,	// (0x000125c7) bg_active_tab_pane_g3_cp1

0x3b80,	// (0x000125d9) bg_passive_tab_pane_g1_cp1

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp1

0x3b6e,	// (0x000125c7) bg_passive_tab_pane_g3_cp1

0x3b92,	// (0x000125eb) bg_active_tab_pane_g1_cp2

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp2

0x3b89,	// (0x000125e2) bg_active_tab_pane_g3_cp2

0x3b92,	// (0x000125eb) bg_passive_tab_pane_g1_cp2

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp2

0x3b89,	// (0x000125e2) bg_passive_tab_pane_g3_cp2

0x3ba4,	// (0x000125fd) bg_active_tab_pane_g1_cp3

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp3

0x3b9b,	// (0x000125f4) bg_active_tab_pane_g3_cp3

0x3ba4,	// (0x000125fd) bg_passive_tab_pane_g1_cp3

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp3

0x3b9b,	// (0x000125f4) bg_passive_tab_pane_g3_cp3

0x3bb6,	// (0x0001260f) bg_active_tab_pane_g1_cp4

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp4

0x3bad,	// (0x00012606) bg_active_tab_pane_g3_cp4

0x3bb6,	// (0x0001260f) bg_passive_tab_pane_g1_cp4

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp4

0x3bad,	// (0x00012606) bg_passive_tab_pane_g3_cp4

0x3c06,	// (0x0001265f) bg_active_tab_pane_g1_cp5

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp5

0x3bfd,	// (0x00012656) bg_active_tab_pane_g3_cp5

0x3c06,	// (0x0001265f) bg_passive_tab_pane_g1_cp5

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp5

0x3bfd,	// (0x00012656) bg_passive_tab_pane_g3_cp5

0x328f,	// (0x00011ce8) list_set_graphic_pane_ParamLimits

0x328f,	// (0x00011ce8) list_set_graphic_pane

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp4

0x3c0f,	// (0x00012668) list_set_graphic_pane_g1_ParamLimits

0x3c0f,	// (0x00012668) list_set_graphic_pane_g1

0x3c1b,	// (0x00012674) list_set_graphic_pane_g2_ParamLimits

0x3c1b,	// (0x00012674) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001e1a7) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001e1a7) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001e52c) volume_small_pane_cp_g

0x3c3d,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3c3d,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2

0x3c49,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3c49,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2

0x3c58,	// (0x000126b1) list_double2_large_graphic_pane_g3_cp2

0x3c60,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3c60,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2

0x3c76,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3c76,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2

0x57b9,	// (0x00014212) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x57b9,	// (0x00014212) list_double_large_graphic_pane_g1_cp2

0x57ca,	// (0x00014223) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x57ca,	// (0x00014223) list_double_large_graphic_pane_g2_cp2

0x3dac,	// (0x00012805) list_double_large_graphic_pane_g3_cp2

0x57d9,	// (0x00014232) list_double_large_graphic_pane_g4_cp

0x57e1,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x57e1,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2

0x57f8,	// (0x00014251) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x57f8,	// (0x00014251) list_double_large_graphic_pane_t2_cp2

0x3cdf,	// (0x00012738) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3cdf,	// (0x00012738) list_double2_graphic_pane_g1_cp2

0x3ceb,	// (0x00012744) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3ceb,	// (0x00012744) list_double2_graphic_pane_g2_cp2

0x3cfa,	// (0x00012753) list_double2_graphic_pane_g3_cp2

0x3d02,	// (0x0001275b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3d02,	// (0x0001275b) list_double2_graphic_pane_t1_cp2

0x3d18,	// (0x00012771) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3d18,	// (0x00012771) list_double2_graphic_pane_t2_cp2

0x3d2a,	// (0x00012783) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_number_heading_pane_g1_cp2

0x3d36,	// (0x0001278f) list_single_number_heading_pane_g2_cp2

0x3d3e,	// (0x00012797) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3d3e,	// (0x00012797) list_single_number_heading_pane_t1_cp2

0x3d54,	// (0x000127ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3d54,	// (0x000127ad) list_single_number_heading_pane_t2_cp2

0x3d66,	// (0x000127bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3d66,	// (0x000127bf) list_single_number_heading_pane_t3_cp2

0x3d2a,	// (0x00012783) list_single_heading_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_heading_pane_g1_cp2

0x3d36,	// (0x0001278f) list_single_heading_pane_g2_cp2

0x3d3e,	// (0x00012797) list_single_heading_pane_t1_cp2_ParamLimits

0x3d3e,	// (0x00012797) list_single_heading_pane_t1_cp2

0x55c3,	// (0x0001401c) list_single_heading_pane_t2_cp2_ParamLimits

0x55c3,	// (0x0001401c) list_single_heading_pane_t2_cp2

0x5513,	// (0x00013f6c) list_double_graphic_pane_g1_cp2_ParamLimits

0x5513,	// (0x00013f6c) list_double_graphic_pane_g1_cp2

0x551f,	// (0x00013f78) list_double_graphic_pane_g2_cp2_ParamLimits

0x551f,	// (0x00013f78) list_double_graphic_pane_g2_cp2

0x552e,	// (0x00013f87) list_double_graphic_pane_g3_cp2

0x5536,	// (0x00013f8f) list_double_graphic_pane_t1_cp2_ParamLimits

0x5536,	// (0x00013f8f) list_double_graphic_pane_t1_cp2

0x554c,	// (0x00013fa5) list_double_graphic_pane_t2_cp2_ParamLimits

0x554c,	// (0x00013fa5) list_double_graphic_pane_t2_cp2

0x3da0,	// (0x000127f9) list_double_number_pane_g1_cp2_ParamLimits

0x3da0,	// (0x000127f9) list_double_number_pane_g1_cp2

0x3dac,	// (0x00012805) list_double_number_pane_g2_cp2

0x54d9,	// (0x00013f32) list_double_number_pane_t1_cp2_ParamLimits

0x54d9,	// (0x00013f32) list_double_number_pane_t1_cp2

0x54eb,	// (0x00013f44) list_double_number_pane_t2_cp2_ParamLimits

0x54eb,	// (0x00013f44) list_double_number_pane_t2_cp2

0x5501,	// (0x00013f5a) list_double_number_pane_t3_cp2_ParamLimits

0x5501,	// (0x00013f5a) list_double_number_pane_t3_cp2

0x53c3,	// (0x00013e1c) list_single_graphic_pane_g1_cp2_ParamLimits

0x53c3,	// (0x00013e1c) list_single_graphic_pane_g1_cp2

0x3d2a,	// (0x00012783) list_single_graphic_pane_g2_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_graphic_pane_g2_cp2

0x3d36,	// (0x0001278f) list_single_graphic_pane_g3_cp2

0x539b,	// (0x00013df4) list_single_graphic_pane_t1_cp2_ParamLimits

0x539b,	// (0x00013df4) list_single_graphic_pane_t1_cp2

0x3d2a,	// (0x00012783) list_single_number_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_number_pane_g1_cp2

0x3d36,	// (0x0001278f) list_single_number_pane_g2_cp2

0x539b,	// (0x00013df4) list_single_number_pane_t1_cp2_ParamLimits

0x539b,	// (0x00013df4) list_single_number_pane_t1_cp2

0x53b1,	// (0x00013e0a) list_single_number_pane_t2_cp2_ParamLimits

0x53b1,	// (0x00013e0a) list_single_number_pane_t2_cp2

0x3c49,	// (0x000126a2) list_double2_pane_g1_cp2_ParamLimits

0x3c49,	// (0x000126a2) list_double2_pane_g1_cp2

0x3c58,	// (0x000126b1) list_double2_pane_g2_cp2

0x3d78,	// (0x000127d1) list_double2_pane_t1_cp2_ParamLimits

0x3d78,	// (0x000127d1) list_double2_pane_t1_cp2

0x3d8e,	// (0x000127e7) list_double2_pane_t2_cp2_ParamLimits

0x3d8e,	// (0x000127e7) list_double2_pane_t2_cp2

0x3da0,	// (0x000127f9) list_double_pane_g1_cp2_ParamLimits

0x3da0,	// (0x000127f9) list_double_pane_g1_cp2

0x3dac,	// (0x00012805) list_double_pane_g2_cp2

0x3db4,	// (0x0001280d) list_double_pane_t1_cp2_ParamLimits

0x3db4,	// (0x0001280d) list_double_pane_t1_cp2

0x3dca,	// (0x00012823) list_double_pane_t2_cp2_ParamLimits

0x3dca,	// (0x00012823) list_double_pane_t2_cp2

0x3df2,	// (0x0001284b) list_single_pane_cp2_g3

0x3d2a,	// (0x00012783) list_single_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_pane_g1_cp2

0x3d36,	// (0x0001278f) list_single_pane_g2_cp2

0x3e02,	// (0x0001285b) list_single_pane_t1_cp2_ParamLimits

0x3e02,	// (0x0001285b) list_single_pane_t1_cp2

0x3e1a,	// (0x00012873) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3e1a,	// (0x00012873) list_single_large_graphic_pane_g1_cp2

0x3e26,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3e26,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2

0x3e32,	// (0x0001288b) list_single_large_graphic_pane_g3_cp2

0x3e3a,	// (0x00012893) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3e3a,	// (0x00012893) list_single_large_graphic_pane_g4_cp1

0x3e54,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3e54,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2

0x537d,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x537d,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2

0x5358,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5358,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2

0x3d36,	// (0x0001278f) list_single_graphic_heading_pane_g5_cp2

0x3d3e,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3d3e,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2

0x5389,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5389,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2

0x534c,	// (0x00013da5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x534c,	// (0x00013da5) list_single_2graphic_pane_g1_cp2

0x5358,	// (0x00013db1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5358,	// (0x00013db1) list_single_2graphic_pane_g2_cp2

0x3d36,	// (0x0001278f) list_single_2graphic_pane_g3_cp2

0x4add,	// (0x00013536) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4add,	// (0x00013536) list_single_2graphic_pane_g4_cp2

0x5367,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5367,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2

0x221e,	// (0x00010c77) list_highlight_pane_g10_cp1

0x4f46,	// (0x0001399f) list_highlight_pane_g1_cp1

0x4f4e,	// (0x000139a7) list_highlight_pane_g2_cp1

0x4f56,	// (0x000139af) list_highlight_pane_g3_cp1

0x4f5e,	// (0x000139b7) list_highlight_pane_g4_cp1

0x4f66,	// (0x000139bf) list_highlight_pane_g5_cp1

0x4f6e,	// (0x000139c7) list_highlight_pane_g6_cp1

0x4f76,	// (0x000139cf) list_highlight_pane_g7_cp1

0x4f7e,	// (0x000139d7) list_highlight_pane_g8_cp1

0x4f86,	// (0x000139df) list_highlight_pane_g9_cp1

0x4e74,	// (0x000138cd) form_field_slider_pane_t3

0x4e82,	// (0x000138db) form_field_slider_pane_t4

0x4e90,	// (0x000138e9) slider_form_pane_ParamLimits

0x4e90,	// (0x000138e9) slider_form_pane

0x2305,	// (0x00010d5e) control_abbreviations

0x2305,	// (0x00010d5e) control_conventions

0x2305,	// (0x00010d5e) control_definitions

0x2305,	// (0x00010d5e) format_table_attribute

0x560d,	// (0x00014066) bg_popup_preview_window_pane_g9

0x2305,	// (0x00010d5e) format_table_data2

0x2305,	// (0x00010d5e) format_table_data3

0x2305,	// (0x00010d5e) format_table_data_example

0x0008,

0x2305,	// (0x00010d5e) intro_purpose

0xf8e3,	// (0x0001e33c) bg_popup_preview_window_pane_g

0x2305,	// (0x00010d5e) texts_category

0x2305,	// (0x00010d5e) texts_graphics

0x3e6a,	// (0x000128c3) text_digital

0x3e79,	// (0x000128d2) text_primary

0x3e88,	// (0x000128e1) text_primary_small

0x3e97,	// (0x000128f0) text_secondary

0x3ea6,	// (0x000128ff) text_title

0x5d7f,	// (0x000147d8) bg_passive_tab_pane_g1_cp3_srt

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp3_srt

0x5d76,	// (0x000147cf) bg_passive_tab_pane_g3_cp3_srt

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp3_srt_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp3_srt

0x5d88,	// (0x000147e1) tabs_4_active_pane_srt_g1

0x2415,	// (0x00010e6e) tabs_4_active_pane_srt_t1_ParamLimits

0x2415,	// (0x00010e6e) tabs_4_active_pane_srt_t1

0x5d7f,	// (0x000147d8) bg_active_tab_pane_g1_cp3_copy1

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp3_copy1

0x5d76,	// (0x000147cf) bg_active_tab_pane_g3_cp3_copy1

0x23e5,	// (0x00010e3e) tabs_2_long_active_pane_srt_ParamLimits

0x23e5,	// (0x00010e3e) tabs_2_long_active_pane_srt

0x23e5,	// (0x00010e3e) tabs_2_long_passive_pane_srt_ParamLimits

0x23e5,	// (0x00010e3e) tabs_2_long_passive_pane_srt

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp4_srt_ParamLimits

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp4_srt

0x5a3d,	// (0x00014496) bg_passive_tab_pane_g1_cp4_srt

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp4_srt

0x5a34,	// (0x0001448d) bg_passive_tab_pane_g3_cp4_srt

0x340a,	// (0x00011e63) bg_active_tab_pane_cp4_srt_ParamLimits

0x340a,	// (0x00011e63) bg_active_tab_pane_cp4_srt

0x3418,	// (0x00011e71) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3418,	// (0x00011e71) tabs_2_long_active_pane_srt_t1

0x5a3d,	// (0x00014496) bg_active_tab_pane_g1_cp4_srt

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp4_srt

0x5a34,	// (0x0001448d) bg_active_tab_pane_g3_cp4_srt

0x267e,	// (0x000110d7) tabs_3_long_active_pane_srt_ParamLimits

0x267e,	// (0x000110d7) tabs_3_long_active_pane_srt

0x267e,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x267e,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt

0x267e,	// (0x000110d7) tabs_3_long_passive_pane_srt_ParamLimits

0x267e,	// (0x000110d7) tabs_3_long_passive_pane_srt

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp5_srt_ParamLimits

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp5_srt

0x3c06,	// (0x0001265f) bg_passive_tab_pane_g1_cp5_srt

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp5_srt

0x3bfd,	// (0x00012656) bg_passive_tab_pane_g3_cp5_srt

0x340a,	// (0x00011e63) bg_active_tab_pane_cp5_srt_ParamLimits

0x340a,	// (0x00011e63) bg_active_tab_pane_cp5_srt

0x3437,	// (0x00011e90) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3437,	// (0x00011e90) tabs_3_long_active_pane_srt_t1

0x3c06,	// (0x0001265f) bg_active_tab_pane_g1_cp5_srt

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp5_srt

0x3bfd,	// (0x00012656) bg_active_tab_pane_g3_cp5_srt

0x5a26,	// (0x0001447f) navi_text_pane_srt_t1

0x5a1e,	// (0x00014477) navi_icon_pane_srt_g1

0x406d,	// (0x00012ac6) midp_editing_number_pane_srt

0x3eb5,	// (0x0001290e) midp_ticker_pane_srt

0x4075,	// (0x00012ace) midp_ticker_pane_srt_g1

0x407d,	// (0x00012ad6) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001e1c6) midp_ticker_pane_srt_g

0x4085,	// (0x00012ade) midp_ticker_pane_srt_t1

0x5a0f,	// (0x00014468) midp_editing_number_pane_t1_copy1

0x3ebd,	// (0x00012916) listscroll_midp_pane

0x3ebd,	// (0x00012916) midp_form_pane

0x3f25,	// (0x0001297e) midp_info_popup_window_ParamLimits

0x3f25,	// (0x0001297e) midp_info_popup_window

0x330a,	// (0x00011d63) bg_popup_sub_pane_cp50_ParamLimits

0x330a,	// (0x00011d63) bg_popup_sub_pane_cp50

0x4b91,	// (0x000135ea) listscroll_midp_info_pane_ParamLimits

0x4b91,	// (0x000135ea) listscroll_midp_info_pane

0x4b79,	// (0x000135d2) listscroll_form_midp_pane_ParamLimits

0x4b79,	// (0x000135d2) listscroll_form_midp_pane

0x4b85,	// (0x000135de) scroll_bar_cp050

0x4b59,	// (0x000135b2) list_midp_pane

0x6973,	// (0x000153cc) signal_pane_g2_cp

0x4a87,	// (0x000134e0) listscroll_midp_info_pane_t1_ParamLimits

0x4a87,	// (0x000134e0) listscroll_midp_info_pane_t1

0x4a9f,	// (0x000134f8) listscroll_midp_info_pane_t2_ParamLimits

0x4a9f,	// (0x000134f8) listscroll_midp_info_pane_t2

0x4ae9,	// (0x00013542) listscroll_midp_info_pane_t3_ParamLimits

0x4ae9,	// (0x00013542) listscroll_midp_info_pane_t3

0x4b23,	// (0x0001357c) listscroll_midp_info_pane_t4_ParamLimits

0x4b23,	// (0x0001357c) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0001e277) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0001e277) listscroll_midp_info_pane_t

0x33b9,	// (0x00011e12) scroll_pane_cp21

0x4a2b,	// (0x00013484) form_midp_field_choice_group_pane

0x4a34,	// (0x0001348d) form_midp_field_text_pane

0x4a6d,	// (0x000134c6) form_midp_field_time_pane

0x4a75,	// (0x000134ce) form_midp_gauge_slider_pane

0x4a7e,	// (0x000134d7) form_midp_gauge_wait_pane

0x2305,	// (0x00010d5e) form_midp_image_pane

0xc482,	// (0x0001aedb) list_single_midp_pane_ParamLimits

0xc482,	// (0x0001aedb) list_single_midp_pane

0x49e4,	// (0x0001343d) form_midp_field_text_pane_t1

0x47e3,	// (0x0001323c) input_focus_pane_cp050

0x4a05,	// (0x0001345e) list_midp_form_text_pane

0x49b3,	// (0x0001340c) form_midp_field_choice_group_pane_t1

0x49c1,	// (0x0001341a) input_focus_pane_cp051

0x49d5,	// (0x0001342e) list_midp_choice_pane

0x2305,	// (0x00010d5e) status_idle_pane

0x4997,	// (0x000133f0) form_midp_field_time_pane_t1

0x221e,	// (0x00010c77) wait_anim_pane_g2_copy1

0x49a5,	// (0x000133fe) form_midp_field_time_pane_t2

0x0001,

0x3fcf,	// (0x00012a28) aid_navinavi_width_2_pane

0xf819,	// (0x0001e272) form_midp_field_time_pane_t

0x2305,	// (0x00010d5e) input_focus_pane_cp052

0x2305,	// (0x00010d5e) bg_input_focus_pane_cp040

0x4957,	// (0x000133b0) form_midp_gauge_slider_pane_t1

0x4965,	// (0x000133be) form_midp_gauge_slider_pane_t2

0x4973,	// (0x000133cc) form_midp_gauge_slider_pane_t3

0x4981,	// (0x000133da) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0001e269) form_midp_gauge_slider_pane_t

0x498f,	// (0x000133e8) form_midp_slider_pane

0x23e5,	// (0x00010e3e) bg_input_focus_pane_cp041_ParamLimits

0x23e5,	// (0x00010e3e) bg_input_focus_pane_cp041

0x4927,	// (0x00013380) form_midp_gauge_wait_pane_t1_ParamLimits

0x4927,	// (0x00013380) form_midp_gauge_wait_pane_t1

0x4939,	// (0x00013392) form_midp_gauge_wait_pane_t2_ParamLimits

0x4939,	// (0x00013392) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0001e264) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0001e264) form_midp_gauge_wait_pane_t

0x494b,	// (0x000133a4) form_midp_wait_pane_ParamLimits

0x494b,	// (0x000133a4) form_midp_wait_pane

0x48f1,	// (0x0001334a) form_midp_image_pane_g1

0x48fa,	// (0x00013353) form_midp_image_pane_t1

0x4909,	// (0x00013362) form_midp_image_pane_t2

0x4918,	// (0x00013371) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0001e25d) form_midp_image_pane_t

0x48d9,	// (0x00013332) list_single_midp_pane_g1

0xc473,	// (0x0001aecc) list_single_midp_pane_t1

0x48c5,	// (0x0001331e) list_midp_form_item_pane_ParamLimits

0x48c5,	// (0x0001331e) list_midp_form_item_pane

0x3f77,	// (0x000129d0) list_midp_form_item_pane_t1

0x3f86,	// (0x000129df) midp_ticker_pane_g1

0x3f92,	// (0x000129eb) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001e1ac) midp_ticker_pane_g

0x3f9e,	// (0x000129f7) midp_ticker_pane_t1

0x5a0f,	// (0x00014468) midp_editing_number_pane_t1

0x5c20,	// (0x00014679) midp_editing_number_pane

0x5c2c,	// (0x00014685) midp_ticker_pane

0x59ed,	// (0x00014446) ai_message_heading_pane

0x2305,	// (0x00010d5e) bg_popup_window_pane_cp14

0x59f5,	// (0x0001444e) listscroll_ai_message_pane

0x5977,	// (0x000143d0) ai_message_heading_pane_g1_ParamLimits

0x5977,	// (0x000143d0) ai_message_heading_pane_g1

0x5983,	// (0x000143dc) ai_message_heading_pane_g2_ParamLimits

0x5983,	// (0x000143dc) ai_message_heading_pane_g2

0x598f,	// (0x000143e8) ai_message_heading_pane_g3_ParamLimits

0x598f,	// (0x000143e8) ai_message_heading_pane_g3

0x599b,	// (0x000143f4) ai_message_heading_pane_g4_ParamLimits

0x599b,	// (0x000143f4) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0001e39e) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0001e39e) ai_message_heading_pane_g

0x59a7,	// (0x00014400) ai_message_heading_pane_t1_ParamLimits

0x59a7,	// (0x00014400) ai_message_heading_pane_t1

0x59c1,	// (0x0001441a) ai_message_heading_pane_t2_ParamLimits

0x59c1,	// (0x0001441a) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0001e3a7) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0001e3a7) ai_message_heading_pane_t

0x59d3,	// (0x0001442c) bg_popup_heading_pane_cp1_ParamLimits

0x59d3,	// (0x0001442c) bg_popup_heading_pane_cp1

0x5965,	// (0x000143be) list_ai_message_pane_ParamLimits

0x5965,	// (0x000143be) list_ai_message_pane

0x33b9,	// (0x00011e12) scroll_pane_cp10

0x5901,	// (0x0001435a) list_ai_message_pane_g1

0x5909,	// (0x00014362) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0001e37b) list_ai_message_pane_g

0x5911,	// (0x0001436a) list_ai_message_pane_t1_ParamLimits

0x5911,	// (0x0001436a) list_ai_message_pane_t1

0x5926,	// (0x0001437f) list_ai_message_pane_t2_ParamLimits

0x5926,	// (0x0001437f) list_ai_message_pane_t2

0x593b,	// (0x00014394) list_ai_message_pane_t3_ParamLimits

0x593b,	// (0x00014394) list_ai_message_pane_t3

0x5950,	// (0x000143a9) list_ai_message_pane_t4_ParamLimits

0x5950,	// (0x000143a9) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0001e380) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0001e380) list_ai_message_pane_t

0x58ef,	// (0x00014348) cell_ai_soft_ind_pane_ParamLimits

0x58ef,	// (0x00014348) cell_ai_soft_ind_pane

0x3fb0,	// (0x00012a09) cell_ai_soft_ind_pane_g1_ParamLimits

0x3fb0,	// (0x00012a09) cell_ai_soft_ind_pane_g1

0x2305,	// (0x00010d5e) grid_highlight_cp1

0x3fbd,	// (0x00012a16) text_secondary_cp56_ParamLimits

0x3fbd,	// (0x00012a16) text_secondary_cp56

0x58c4,	// (0x0001431d) example_general_pane_ParamLimits

0x58c4,	// (0x0001431d) example_general_pane

0x58d0,	// (0x00014329) example_parent_pane_g1_ParamLimits

0x58d0,	// (0x00014329) example_parent_pane_g1

0x58dc,	// (0x00014335) example_parent_pane_t1_ParamLimits

0x58dc,	// (0x00014335) example_parent_pane_t1

0xd727,	// (0x0001c180) popup_preview_text_window_ParamLimits

0xd727,	// (0x0001c180) popup_preview_text_window

0x3dfa,	// (0x00012853) list_single_pane_cp2_g4

0x275a,	// (0x000111b3) bg_popup_preview_window_pane_ParamLimits

0x275a,	// (0x000111b3) bg_popup_preview_window_pane

0x5615,	// (0x0001406e) popup_preview_text_window_t1_ParamLimits

0x5615,	// (0x0001406e) popup_preview_text_window_t1

0x5633,	// (0x0001408c) popup_preview_text_window_t2_ParamLimits

0x5633,	// (0x0001408c) popup_preview_text_window_t2

0x567c,	// (0x000140d5) popup_preview_text_window_t3_ParamLimits

0x567c,	// (0x000140d5) popup_preview_text_window_t3

0x56c1,	// (0x0001411a) popup_preview_text_window_t4_ParamLimits

0x56c1,	// (0x0001411a) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0001e34f) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0001e34f) popup_preview_text_window_t

0x573f,	// (0x00014198) scroll_pane_cp11

0x46cd,	// (0x00013126) bg_popup_preview_window_pane_g1

0x55d5,	// (0x0001402e) bg_popup_preview_window_pane_g2

0x55dd,	// (0x00014036) bg_popup_preview_window_pane_g3

0x55e5,	// (0x0001403e) bg_popup_preview_window_pane_g4

0x55ed,	// (0x00014046) bg_popup_preview_window_pane_g5

0x55f5,	// (0x0001404e) bg_popup_preview_window_pane_g6

0x55fd,	// (0x00014056) bg_popup_preview_window_pane_g7

0x5605,	// (0x0001405e) bg_popup_preview_window_pane_g8

0xcc00,	// (0x0001b659) aid_popup_width_pane

0xd709,	// (0x0001c162) popup_midp_note_alarm_window_ParamLimits

0xd709,	// (0x0001c162) popup_midp_note_alarm_window

0x30c9,	// (0x00011b22) data_form_pane_ParamLimits

0xc148,	// (0x0001aba1) form_field_data_pane_g1

0x314e,	// (0x00011ba7) form_field_data_pane_t1_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_ParamLimits

0x3103,	// (0x00011b5c) data_form_wide_pane_ParamLimits

0xc150,	// (0x0001aba9) form_field_data_wide_pane_g1

0xc15c,	// (0x0001abb5) form_field_data_wide_pane_t1_ParamLimits

0x29e6,	// (0x0001143f) input_focus_pane_cp6_ParamLimits

0x3366,	// (0x00011dbf) input_popup_find_pane_g1_ParamLimits

0x3366,	// (0x00011dbf) input_popup_find_pane_g1

0xcfbf,	// (0x0001ba18) aid_navi_side_left_pane

0xcfcf,	// (0x0001ba28) aid_navi_side_right_pane

0x502f,	// (0x00013a88) bg_popup_window_pane_cp30_ParamLimits

0x502f,	// (0x00013a88) bg_popup_window_pane_cp30

0x50a9,	// (0x00013b02) popup_midp_note_alarm_window_g1_ParamLimits

0x50a9,	// (0x00013b02) popup_midp_note_alarm_window_g1

0x50d9,	// (0x00013b32) popup_midp_note_alarm_window_t1_ParamLimits

0x50d9,	// (0x00013b32) popup_midp_note_alarm_window_t1

0x517a,	// (0x00013bd3) popup_midp_note_alarm_window_t2_ParamLimits

0x517a,	// (0x00013bd3) popup_midp_note_alarm_window_t2

0x5228,	// (0x00013c81) popup_midp_note_alarm_window_t3_ParamLimits

0x5228,	// (0x00013c81) popup_midp_note_alarm_window_t3

0x5250,	// (0x00013ca9) popup_midp_note_alarm_window_t4_ParamLimits

0x5250,	// (0x00013ca9) popup_midp_note_alarm_window_t4

0x5270,	// (0x00013cc9) popup_midp_note_alarm_window_t5_ParamLimits

0x5270,	// (0x00013cc9) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0001e2ec) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0001e2ec) popup_midp_note_alarm_window_t

0x531c,	// (0x00013d75) wait_bar_pane_cp1_ParamLimits

0x531c,	// (0x00013d75) wait_bar_pane_cp1

0x2305,	// (0x00010d5e) wait_anim_pane_copy1

0x2305,	// (0x00010d5e) wait_border_pane_copy1

0x4d41,	// (0x0001379a) wait_border_pane_g1_copy1

0xc176,	// (0x0001abcf) form_field_popup_pane_g1

0xc17e,	// (0x0001abd7) form_field_popup_pane_t1_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_cp7_ParamLimits

0x30c9,	// (0x00011b22) list_form_pane_ParamLimits

0xc196,	// (0x0001abef) form_field_popup_wide_pane_g1

0xc19e,	// (0x0001abf7) form_field_popup_wide_pane_t1_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_cp8_ParamLimits

0x3183,	// (0x00011bdc) list_form_wide_pane_ParamLimits

0x5df6,	// (0x0001484f) aid_size_cell_graphic_pane

0xc223,	// (0x0001ac7c) data_form_pane_t1_ParamLimits

0xc4aa,	// (0x0001af03) data_form_wide_pane_t1_ParamLimits

0x42ca,	// (0x00012d23) bg_status_flat_pane

0x2345,	// (0x00010d9e) title_pane_t1_ParamLimits

0x23ad,	// (0x00010e06) title_pane_t2_ParamLimits

0x23d3,	// (0x00010e2c) title_pane_t3_ParamLimits

0xf557,	// (0x0001dfb0) title_pane_t_ParamLimits

0x3845,	// (0x0001229e) level_1_signal_ParamLimits

0x3852,	// (0x000122ab) level_2_signal_ParamLimits

0x385f,	// (0x000122b8) level_3_signal_ParamLimits

0x386c,	// (0x000122c5) level_4_signal_ParamLimits

0x3879,	// (0x000122d2) level_5_signal_ParamLimits

0x3886,	// (0x000122df) level_6_signal_ParamLimits

0x3893,	// (0x000122ec) level_7_signal_ParamLimits

0x3845,	// (0x0001229e) level_1_battery_ParamLimits

0x3852,	// (0x000122ab) level_2_battery_ParamLimits

0x385f,	// (0x000122b8) level_3_battery_ParamLimits

0x386c,	// (0x000122c5) level_4_battery_ParamLimits

0x3879,	// (0x000122d2) level_5_battery_ParamLimits

0x3886,	// (0x000122df) level_6_battery_ParamLimits

0x3893,	// (0x000122ec) level_7_battery_ParamLimits

0x4f46,	// (0x0001399f) bg_status_flat_pane_g1

0x4f4e,	// (0x000139a7) bg_status_flat_pane_g2

0x4f56,	// (0x000139af) bg_status_flat_pane_g3

0x4f5e,	// (0x000139b7) bg_status_flat_pane_g4

0x4f66,	// (0x000139bf) bg_status_flat_pane_g5

0x4f6e,	// (0x000139c7) bg_status_flat_pane_g6

0x4f76,	// (0x000139cf) bg_status_flat_pane_g7

0x23fb,	// (0x00010e54) tabs_3_active_pane_t1_ParamLimits

0x23fb,	// (0x00010e54) tabs_3_passive_pane_t1_ParamLimits

0x2415,	// (0x00010e6e) tabs_4_active_pane_t1_ParamLimits

0x2415,	// (0x00010e6e) tabs_4_1_passive_pane_t1_ParamLimits

0x33f8,	// (0x00011e51) tabs_2_active_pane_t1_ParamLimits

0x33f8,	// (0x00011e51) tabs_2_passive_pane_t1_ParamLimits

0x340a,	// (0x00011e63) bg_active_tab_pane_cp4_ParamLimits

0x3418,	// (0x00011e71) tabs_2_long_active_pane_t1_ParamLimits

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp4_ParamLimits

0xd96b,	// (0x0001c3c4) list_single_midp_graphic_pane_t1_ParamLimits

0x340a,	// (0x00011e63) bg_active_tab_pane_cp5_ParamLimits

0x3437,	// (0x00011e90) tabs_3_long_active_pane_t1_ParamLimits

0x342b,	// (0x00011e84) bg_passive_tab_pane_cp5_ParamLimits

0xd96b,	// (0x0001c3c4) list_single_midp_graphic_pane_t1

0x42ca,	// (0x00012d23) bg_status_flat_pane_ParamLimits

0x4383,	// (0x00012ddc) indicator_pane_cp2_ParamLimits

0x4383,	// (0x00012ddc) indicator_pane_cp2

0x44a7,	// (0x00012f00) navi_pane_srt_ParamLimits

0x44a7,	// (0x00012f00) navi_pane_srt

0x44cb,	// (0x00012f24) popup_clock_digital_analogue_window_cp1

0x24d9,	// (0x00010f32) indicator_pane_t1

0x3eb5,	// (0x0001290e) copy_highlight_pane

0x3eb5,	// (0x0001290e) cursor_graphics_pane

0x3eb5,	// (0x0001290e) graphic_within_text_pane

0x3eb5,	// (0x0001290e) link_highlight_pane

0x5702,	// (0x0001415b) popup_preview_text_window_t5_ParamLimits

0x5702,	// (0x0001415b) popup_preview_text_window_t5

0x3fd7,	// (0x00012a30) cursor_digital_pane

0x3fd7,	// (0x00012a30) cursor_primary_pane

0x3fe8,	// (0x00012a41) cursor_primary_small_pane

0x3ff0,	// (0x00012a49) cursor_secondary_pane

0x3ff8,	// (0x00012a51) cursor_title_pane

0x3fd7,	// (0x00012a30) link_highlight_digital_pane

0x3fdf,	// (0x00012a38) link_highlight_primary_pane

0x3fe8,	// (0x00012a41) link_highlight_primary_small_pane

0x3ff0,	// (0x00012a49) link_highlight_secondary_pane

0x3ff8,	// (0x00012a51) link_highlight_title_pane

0x3fd7,	// (0x00012a30) copy_highlight_digital_pane

0x3fd7,	// (0x00012a30) copy_highlight_primary_pane

0x3fe8,	// (0x00012a41) copy_highlight_primary_small_pane

0x3ff0,	// (0x00012a49) copy_highlight_secondary_pane

0x3ff8,	// (0x00012a51) copy_highlight_title_pane

0x3ff0,	// (0x00012a49) graphic_text_digital_pane

0x4fde,	// (0x00013a37) graphic_text_primary_pane

0x4fe7,	// (0x00013a40) graphic_text_primary_small_pane

0x3fe8,	// (0x00012a41) graphic_text_secondary_pane

0x3fd7,	// (0x00012a30) graphic_text_title_pane

0x4000,	// (0x00012a59) cursor_primary_pane_g1

0x4fd0,	// (0x00013a29) cursor_text_primary_t1

0x4fba,	// (0x00013a13) cursor_primary_small_pane_g1

0x4fc2,	// (0x00013a1b) cursor_text_primary_small_t1

0x4fa4,	// (0x000139fd) cursor_primary_small_pane_g1_copy1

0x4fac,	// (0x00013a05) cursor_text_primary_small_t1_copy1

0x4f8e,	// (0x000139e7) cursor_text_title_t1

0x4f9c,	// (0x000139f5) cursor_title_pane_g1

0x4000,	// (0x00012a59) cursor_digital_pane_g1

0x4008,	// (0x00012a61) cursor_text_digital_t1

0x4016,	// (0x00012a6f) link_highlight_primary_pane_g1

0x4f37,	// (0x00013990) link_highlight_primary_pane_t1

0x4016,	// (0x00012a6f) link_highlight_primary_small_pane_g1

0x401e,	// (0x00012a77) link_highlight_primary_small_pane_t1

0x402d,	// (0x00012a86) link_highlight_secondary_pane_g1

0x4035,	// (0x00012a8e) link_highlight_secondary_pane_t1

0x4e9c,	// (0x000138f5) link_highlight_title_pane_g1

0x4eb3,	// (0x0001390c) link_highlight_title_pane_t1

0x4e9c,	// (0x000138f5) link_highlight_digital_pane_g1

0x4ea4,	// (0x000138fd) link_highlight_digital_pane_t1

0x4d5c,	// (0x000137b5) copy_highlight_primary_pane_g1

0x4d82,	// (0x000137db) copy_highlight_primary_pane_t1

0x4d5c,	// (0x000137b5) copy_highlight_primary_small_pane_g1

0x4d73,	// (0x000137cc) copy_highlight_primary_small_pane_t1

0x4044,	// (0x00012a9d) copy_highlight_secondary_pane_g1

0x404c,	// (0x00012aa5) copy_highlight_secondary_pane_t1

0x4d5c,	// (0x000137b5) copy_highlight_title_pane_g1

0x4d64,	// (0x000137bd) copy_highlight_title_pane_t1

0x4d5c,	// (0x000137b5) copy_highlight_digital_pane_g1

0x5f62,	// (0x000149bb) copy_highlight_digital_pane_t1

0x5eb6,	// (0x0001490f) graphic_text_primary_pane_g1

0x5f46,	// (0x0001499f) graphic_text_primary_pane_t1

0x5f54,	// (0x000149ad) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x0001e416) graphic_text_primary_pane_t

0x5f22,	// (0x0001497b) graphic_text_primary_small_pane_g1

0x5f2a,	// (0x00014983) graphic_text_primary_small_pane_t1

0x5f38,	// (0x00014991) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x0001e411) graphic_text_primary_small_pane_t

0x5efe,	// (0x00014957) graphic_text_secondary_pane_g1

0x5f06,	// (0x0001495f) graphic_text_secondary_pane_t1

0x5f14,	// (0x0001496d) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0001e40c) graphic_text_secondary_pane_t

0x5eda,	// (0x00014933) graphic_text_title_pane_g1

0x5ee2,	// (0x0001493b) graphic_text_title_pane_t1

0x5ef0,	// (0x00014949) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0001e407) graphic_text_title_pane_t

0x5eb6,	// (0x0001490f) graphic_text_digital_pane_g1

0x5ebe,	// (0x00014917) graphic_text_digital_pane_t1

0x5ecc,	// (0x00014925) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x0001e402) graphic_text_digital_pane_t

0x23e5,	// (0x00010e3e) navi_icon_pane_srt_ParamLimits

0x23e5,	// (0x00010e3e) navi_icon_pane_srt

0x2305,	// (0x00010d5e) navi_midp_pane_srt

0x2305,	// (0x00010d5e) navi_navi_pane_srt

0x23e5,	// (0x00010e3e) navi_text_pane_srt_ParamLimits

0x23e5,	// (0x00010e3e) navi_text_pane_srt

0x558e,	// (0x00013fe7) navi_navi_icon_text_pane_srt

0x55a8,	// (0x00014001) navi_navi_pane_srt_g1_ParamLimits

0x55a8,	// (0x00014001) navi_navi_pane_srt_g1

0x5596,	// (0x00013fef) navi_navi_pane_srt_g2_ParamLimits

0x5596,	// (0x00013fef) navi_navi_pane_srt_g2

0x0001,

0xf8de,	// (0x0001e337) navi_navi_pane_srt_g_ParamLimits

0xf8de,	// (0x0001e337) navi_navi_pane_srt_g

0x55ba,	// (0x00014013) navi_navi_tabs_pane_srt

0x558e,	// (0x00013fe7) navi_navi_text_pane_srt

0x558e,	// (0x00013fe7) navi_navi_volume_pane_srt

0x5ea7,	// (0x00014900) navi_navi_text_pane_srt_t1

0xdccf,	// (0x0001c728) navi_navi_volume_pane_srt_g1

0xdcd7,	// (0x0001c730) volume_small_pane_srt_ParamLimits

0xdcd7,	// (0x0001c730) volume_small_pane_srt

0xd266,	// (0x0001bcbf) volume_small_pane_srt_g1_ParamLimits

0xd266,	// (0x0001bcbf) volume_small_pane_srt_g1

0xd276,	// (0x0001bccf) volume_small_pane_srt_g2_ParamLimits

0xd276,	// (0x0001bccf) volume_small_pane_srt_g2

0xd287,	// (0x0001bce0) volume_small_pane_srt_g3_ParamLimits

0xd287,	// (0x0001bce0) volume_small_pane_srt_g3

0xd298,	// (0x0001bcf1) volume_small_pane_srt_g4_ParamLimits

0xd298,	// (0x0001bcf1) volume_small_pane_srt_g4

0xd2a9,	// (0x0001bd02) volume_small_pane_srt_g5_ParamLimits

0xd2a9,	// (0x0001bd02) volume_small_pane_srt_g5

0xd2ba,	// (0x0001bd13) volume_small_pane_srt_g6_ParamLimits

0xd2ba,	// (0x0001bd13) volume_small_pane_srt_g6

0xd2cb,	// (0x0001bd24) volume_small_pane_srt_g7_ParamLimits

0xd2cb,	// (0x0001bd24) volume_small_pane_srt_g7

0xd2dc,	// (0x0001bd35) volume_small_pane_srt_g8_ParamLimits

0xd2dc,	// (0x0001bd35) volume_small_pane_srt_g8

0xd2ed,	// (0x0001bd46) volume_small_pane_srt_g9_ParamLimits

0xd2ed,	// (0x0001bd46) volume_small_pane_srt_g9

0xd2fe,	// (0x0001bd57) volume_small_pane_srt_g10_ParamLimits

0xd2fe,	// (0x0001bd57) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001e1b1) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001e1b1) volume_small_pane_srt_g

0x2803,	// (0x0001125c) query_popup_data_pane_cp2

0x5e8d,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5e8d,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1

0x4fde,	// (0x00013a37) navi_tabs_2_long_pane_srt

0x4fde,	// (0x00013a37) navi_tabs_2_pane_srt

0x4fde,	// (0x00013a37) navi_tabs_3_long_pane_srt

0x4fde,	// (0x00013a37) navi_tabs_3_pane_srt

0x4fde,	// (0x00013a37) navi_tabs_4_pane_srt

0xdcaf,	// (0x0001c708) tabs_2_active_pane_srt_ParamLimits

0xdcaf,	// (0x0001c708) tabs_2_active_pane_srt

0xdcbf,	// (0x0001c718) tabs_2_passive_pane_srt_ParamLimits

0xdcbf,	// (0x0001c718) tabs_2_passive_pane_srt

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp1_srt

0x5e74,	// (0x000148cd) bg_passive_tab_pane_g1_cp1_srt

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp1_srt

0x5e6b,	// (0x000148c4) bg_passive_tab_pane_g3_cp1_srt

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp1_srt_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp1_srt

0x5e7d,	// (0x000148d6) tabs_2_active_pane_srt_g1

0x33f8,	// (0x00011e51) tabs_2_active_pane_srt_t1_ParamLimits

0x33f8,	// (0x00011e51) tabs_2_active_pane_srt_t1

0x5e74,	// (0x000148cd) bg_active_tab_pane_g1_cp1_srt

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp1_srt

0x5e6b,	// (0x000148c4) bg_active_tab_pane_g3_cp1_srt

0xdc7c,	// (0x0001c6d5) tabs_3_active_pane_srt_ParamLimits

0xdc7c,	// (0x0001c6d5) tabs_3_active_pane_srt

0xdc8d,	// (0x0001c6e6) tabs_3_passive_pane_cp_srt_ParamLimits

0xdc8d,	// (0x0001c6e6) tabs_3_passive_pane_cp_srt

0xdc9e,	// (0x0001c6f7) tabs_3_passive_pane_srt_ParamLimits

0xdc9e,	// (0x0001c6f7) tabs_3_passive_pane_srt

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4204,	// (0x00012c5d) bg_passive_tab_pane_cp2_srt

0x4064,	// (0x00012abd) bg_passive_tab_pane_g1_cp2_srt

0x3b77,	// (0x000125d0) bg_passive_tab_pane_g2_cp2_srt

0x405b,	// (0x00012ab4) bg_passive_tab_pane_g3_cp2_srt

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp2_srt_ParamLimits

0x23e5,	// (0x00010e3e) bg_active_tab_pane_cp2_srt

0x5e63,	// (0x000148bc) tabs_3_active_pane_srt_g1

0x23fb,	// (0x00010e54) tabs_3_active_pane_srt_t1_ParamLimits

0x23fb,	// (0x00010e54) tabs_3_active_pane_srt_t1

0x4064,	// (0x00012abd) bg_active_tab_pane_g1_cp2_srt

0x3b77,	// (0x000125d0) bg_active_tab_pane_g2_cp2_srt

0x405b,	// (0x00012ab4) bg_active_tab_pane_g3_cp2_srt

0xdc34,	// (0x0001c68d) tabs_4_active_pane_srt_ParamLimits

0xdc34,	// (0x0001c68d) tabs_4_active_pane_srt

0xdc46,	// (0x0001c69f) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdc46,	// (0x0001c69f) tabs_4_passive_pane_cp2_srt

0xd463,	// (0x0001bebc) aid_size_cell_toolbar

0x342b,	// (0x00011e84) main_idle_act_pane_ParamLimits

0xd5c4,	// (0x0001c01d) popup_large_graphic_colour_window_ParamLimits

0xd878,	// (0x0001c2d1) popup_toolbar_window_ParamLimits

0xd878,	// (0x0001c2d1) popup_toolbar_window

0xc4ed,	// (0x0001af46) list_single_graphic_2heading_pane_ParamLimits

0xc4ed,	// (0x0001af46) list_single_graphic_2heading_pane

0x3602,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane

0x3614,	// (0x0001206d) aid_size_cell_apps_grid_prt_pane

0x4204,	// (0x00012c5d) bg_wml_button_pane_cp1_ParamLimits

0x4204,	// (0x00012c5d) bg_wml_button_pane_cp1

0x49e4,	// (0x0001343d) form_midp_field_text_pane_t1_ParamLimits

0x47e3,	// (0x0001323c) input_focus_pane_cp050_ParamLimits

0x4a05,	// (0x0001345e) list_midp_form_text_pane_ParamLimits

0x49c1,	// (0x0001341a) input_focus_pane_cp051_ParamLimits

0x49d5,	// (0x0001342e) list_midp_choice_pane_ParamLimits

0x4893,	// (0x000132ec) list_single_2graphic_pane_cp3_ParamLimits

0x4893,	// (0x000132ec) list_single_2graphic_pane_cp3

0x48a6,	// (0x000132ff) list_single_midp_graphic_pane_ParamLimits

0x48a6,	// (0x000132ff) list_single_midp_graphic_pane

0xbc40,	// (0x0001a699) list_single_graphic_2heading_pane_g1_ParamLimits

0xbc40,	// (0x0001a699) list_single_graphic_2heading_pane_g1

0xc36b,	// (0x0001adc4) list_single_graphic_2heading_pane_g4_ParamLimits

0xc36b,	// (0x0001adc4) list_single_graphic_2heading_pane_g4

0xc377,	// (0x0001add0) list_single_graphic_2heading_pane_g5_ParamLimits

0xc377,	// (0x0001add0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001e204) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001e204) list_single_graphic_2heading_pane_g

0xc383,	// (0x0001addc) list_single_graphic_2heading_pane_t1_ParamLimits

0xc383,	// (0x0001addc) list_single_graphic_2heading_pane_t1

0xc397,	// (0x0001adf0) list_single_graphic_2heading_pane_t2_ParamLimits

0xc397,	// (0x0001adf0) list_single_graphic_2heading_pane_t2

0xc3b1,	// (0x0001ae0a) list_single_graphic_2heading_pane_t3_ParamLimits

0xc3b1,	// (0x0001ae0a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001e20b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001e20b) list_single_graphic_2heading_pane_t

0x4617,	// (0x00013070) bg_popup_sub_pane_cp2

0x463d,	// (0x00013096) grid_toobar_pane

0xd907,	// (0x0001c360) cell_toolbar_pane_ParamLimits

0xd907,	// (0x0001c360) cell_toolbar_pane

0x4673,	// (0x000130cc) cell_toolbar_pane_g1_ParamLimits

0x4673,	// (0x000130cc) cell_toolbar_pane_g1

0x4685,	// (0x000130de) cell_toolbar_pane_g2_ParamLimits

0x4685,	// (0x000130de) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x0001e212) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x0001e212) cell_toolbar_pane_g

0x46a7,	// (0x00013100) grid_highlight_pane_cp2_ParamLimits

0x46a7,	// (0x00013100) grid_highlight_pane_cp2

0x46c1,	// (0x0001311a) toolbar_button_pane

0x46cd,	// (0x00013126) toolbar_button_pane_g1

0x46dd,	// (0x00013136) toolbar_button_pane_g2

0x46d5,	// (0x0001312e) toolbar_button_pane_g3

0x46ed,	// (0x00013146) toolbar_button_pane_g4

0x46e5,	// (0x0001313e) toolbar_button_pane_g5

0x46f5,	// (0x0001314e) toolbar_button_pane_g6

0x46fd,	// (0x00013156) toolbar_button_pane_g7

0x470d,	// (0x00013166) toolbar_button_pane_g8

0x4705,	// (0x0001315e) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0001e217) toolbar_button_pane_g

0xd936,	// (0x0001c38f) list_single_2graphic_pane_g1_cp3_ParamLimits

0xd936,	// (0x0001c38f) list_single_2graphic_pane_g1_cp3

0xd942,	// (0x0001c39b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd942,	// (0x0001c39b) list_single_2graphic_pane_g2_cp3

0x3d36,	// (0x0001278f) list_single_2graphic_pane_g3_cp3

0x4add,	// (0x00013536) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4add,	// (0x00013536) list_single_2graphic_pane_g4_cp3

0xd951,	// (0x0001c3aa) list_single_2graphic_pane_t1_cp3_ParamLimits

0xd951,	// (0x0001c3aa) list_single_2graphic_pane_t1_cp3

0x3d2a,	// (0x00012783) list_single_midp_graphic_pane_g2_ParamLimits

0x3d2a,	// (0x00012783) list_single_midp_graphic_pane_g2

0xd46b,	// (0x0001bec4) aid_zoom_text_primary

0xc33e,	// (0x0001ad97) aid_zoom_text_secondary

0x4113,	// (0x00012b6c) status_small_pane_g7_ParamLimits

0x4113,	// (0x00012b6c) status_small_pane_g7

0x4136,	// (0x00012b8f) status_small_pane_t1_ParamLimits

0x231c,	// (0x00010d75) title_pane_g2

0x0003,

0xf54e,	// (0x0001dfa7) title_pane_g

0x28a2,	// (0x000112fb) aid_size_cell_colour_1_pane_ParamLimits

0x28a2,	// (0x000112fb) aid_size_cell_colour_1_pane

0x28b6,	// (0x0001130f) aid_size_cell_colour_2_pane_ParamLimits

0x28b6,	// (0x0001130f) aid_size_cell_colour_2_pane

0x28ca,	// (0x00011323) aid_size_cell_colour_3_pane_ParamLimits

0x28ca,	// (0x00011323) aid_size_cell_colour_3_pane

0x28de,	// (0x00011337) aid_size_cell_colour_4_pane_ParamLimits

0x28de,	// (0x00011337) aid_size_cell_colour_4_pane

0xcf21,	// (0x0001b97a) title_pane_stacon_g1_ParamLimits

0xcf21,	// (0x0001b97a) title_pane_stacon_g1

0x4dd9,	// (0x00013832) popup_note_wait_window_g3_ParamLimits

0x4dd9,	// (0x00013832) popup_note_wait_window_g3

0x4e4f,	// (0x000138a8) popup_note_wait_window_t5_ParamLimits

0x4e4f,	// (0x000138a8) popup_note_wait_window_t5

0x2305,	// (0x00010d5e) main_feb_china_hwr_fs_writing_pane

0xd4d9,	// (0x0001bf32) popup_feb_china_hwr_fs_window_ParamLimits

0xd4d9,	// (0x0001bf32) popup_feb_china_hwr_fs_window

0xd981,	// (0x0001c3da) aid_size_cell_hwr_fs_ParamLimits

0xd981,	// (0x0001c3da) aid_size_cell_hwr_fs

0x47e3,	// (0x0001323c) bg_popup_sub_pane_cp3_ParamLimits

0x47e3,	// (0x0001323c) bg_popup_sub_pane_cp3

0xd996,	// (0x0001c3ef) grid_hwr_fs_pane_ParamLimits

0xd996,	// (0x0001c3ef) grid_hwr_fs_pane

0xd9aa,	// (0x0001c403) linegrid_hwr_fs_pane_ParamLimits

0xd9aa,	// (0x0001c403) linegrid_hwr_fs_pane

0xd9ba,	// (0x0001c413) cell_hwr_fs_pane_ParamLimits

0xd9ba,	// (0x0001c413) cell_hwr_fs_pane

0x47ef,	// (0x00013248) linegrid_hwr_fs_pane_g1_ParamLimits

0x47ef,	// (0x00013248) linegrid_hwr_fs_pane_g1

0x47fb,	// (0x00013254) linegrid_hwr_fs_pane_g2_ParamLimits

0x47fb,	// (0x00013254) linegrid_hwr_fs_pane_g2

0x480d,	// (0x00013266) linegrid_hwr_fs_pane_g3_ParamLimits

0x480d,	// (0x00013266) linegrid_hwr_fs_pane_g3

0xd9d8,	// (0x0001c431) linegrid_hwr_fs_pane_g4_ParamLimits

0xd9d8,	// (0x0001c431) linegrid_hwr_fs_pane_g4

0xd9f2,	// (0x0001c44b) linegrid_hwr_fs_pane_g5_ParamLimits

0xd9f2,	// (0x0001c44b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0001e242) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0001e242) linegrid_hwr_fs_pane_g

0x4819,	// (0x00013272) cell_hwr_fs_pane_g1_ParamLimits

0x4819,	// (0x00013272) cell_hwr_fs_pane_g1

0x4555,	// (0x00012fae) cell_hwr_fs_pane_g2_ParamLimits

0x4555,	// (0x00012fae) cell_hwr_fs_pane_g2

0x482f,	// (0x00013288) cell_hwr_fs_pane_g3_ParamLimits

0x482f,	// (0x00013288) cell_hwr_fs_pane_g3

0x483c,	// (0x00013295) cell_hwr_fs_pane_g4_ParamLimits

0x483c,	// (0x00013295) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0001e24d) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0001e24d) cell_hwr_fs_pane_g

0xda08,	// (0x0001c461) cell_hwr_fs_pane_t1

0x2305,	// (0x00010d5e) grid_highlight_pane_cp6

0x2305,	// (0x00010d5e) main_idle_act2_pane

0x33a0,	// (0x00011df9) aid_inside_area_popup_secondary

0x542e,	// (0x00013e87) aid_inside_area_window_primary_ParamLimits

0x542e,	// (0x00013e87) aid_inside_area_window_primary

0x5f71,	// (0x000149ca) ai2_news_ticker_pane

0x5f79,	// (0x000149d2) aid_size_cell_ai1_link_ParamLimits

0x5f79,	// (0x000149d2) aid_size_cell_ai1_link

0x5f93,	// (0x000149ec) popup_ai2_data_window_ParamLimits

0x5f93,	// (0x000149ec) popup_ai2_data_window

0x5fa7,	// (0x00014a00) popup_ai2_link_window_ParamLimits

0x5fa7,	// (0x00014a00) popup_ai2_link_window

0x47e3,	// (0x0001323c) bg_popup_sub_pane_cp4_ParamLimits

0x47e3,	// (0x0001323c) bg_popup_sub_pane_cp4

0x5fbb,	// (0x00014a14) grid_ai2_link_pane_ParamLimits

0x5fbb,	// (0x00014a14) grid_ai2_link_pane

0x5fd2,	// (0x00014a2b) popup_ai2_link_window_g1_ParamLimits

0x5fd2,	// (0x00014a2b) popup_ai2_link_window_g1

0x5fde,	// (0x00014a37) popup_ai2_link_window_g2_ParamLimits

0x5fde,	// (0x00014a37) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0001e41b) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0001e41b) popup_ai2_link_window_g

0x5fed,	// (0x00014a46) ai2_mp_button_pane

0x5ff5,	// (0x00014a4e) ai2_mp_volume_pane

0x49c1,	// (0x0001341a) bg_popup_sub_pane_cp5_ParamLimits

0x49c1,	// (0x0001341a) bg_popup_sub_pane_cp5

0x5ffd,	// (0x00014a56) heading_ai2_gene_pane_ParamLimits

0x5ffd,	// (0x00014a56) heading_ai2_gene_pane

0x6009,	// (0x00014a62) list_ai2_gene_pane_ParamLimits

0x6009,	// (0x00014a62) list_ai2_gene_pane

0x6051,	// (0x00014aaa) cell_ai2_link_pane_ParamLimits

0x6051,	// (0x00014aaa) cell_ai2_link_pane

0x6067,	// (0x00014ac0) cell_ai2_link_pane_g1

0x2305,	// (0x00010d5e) grid_highlight_pane_cp7

0xdcec,	// (0x0001c745) ai2_mp_volume_pane_g1

0x6137,	// (0x00014b90) ai2_mp_volume_pane_g2

0x60a4,	// (0x00014afd) list_ai2_gene_pane_t1

0x612f,	// (0x00014b88) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x0001e434) ai2_mp_volume_pane_g

0xdcf4,	// (0x0001c74d) volume_small_pane_cp3

0x613f,	// (0x00014b98) aid_size_cell_ai2_button

0x6147,	// (0x00014ba0) grid_ai2_button_pane

0x6150,	// (0x00014ba9) cell_ai2_button_pane_ParamLimits

0x6150,	// (0x00014ba9) cell_ai2_button_pane

0x221e,	// (0x00010c77) cell_ai2_button_pane_g1

0x2305,	// (0x00010d5e) grid_highlight_pane_cp8

0x60ef,	// (0x00014b48) ai2_gene_pane_t1_ParamLimits

0x60ef,	// (0x00014b48) ai2_gene_pane_t1

0xd459,	// (0x0001beb2) aid_height_parent_landscape

0x5a7b,	// (0x000144d4) aid_height_set_list

0x5a87,	// (0x000144e0) aid_size_parent

0x5df6,	// (0x0001484f) aid_size_cell_graphic_pane_ParamLimits

0x6019,	// (0x00014a72) popup_ai2_data_window_g1_ParamLimits

0x6019,	// (0x00014a72) popup_ai2_data_window_g1

0x6025,	// (0x00014a7e) ai2_news_ticker_pane_g1

0x602d,	// (0x00014a86) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x0001e420) ai2_news_ticker_pane_g

0x6035,	// (0x00014a8e) ai2_news_ticker_pane_t1

0x6043,	// (0x00014a9c) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x0001e425) ai2_news_ticker_pane_t

0x5d90,	// (0x000147e9) heading_ai2_gene_pane_g1

0x6070,	// (0x00014ac9) heading_ai2_gene_pane_t1_ParamLimits

0x6070,	// (0x00014ac9) heading_ai2_gene_pane_t1

0x6085,	// (0x00014ade) list_highlight_pane_cp6

0x608d,	// (0x00014ae6) ai2_gene_pane_ParamLimits

0x608d,	// (0x00014ae6) ai2_gene_pane

0x60b2,	// (0x00014b0b) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0001e42a) list_ai2_gene_pane_t

0x60c0,	// (0x00014b19) list_highlight_pane_cp8_ParamLimits

0x60c0,	// (0x00014b19) list_highlight_pane_cp8

0x60d1,	// (0x00014b2a) ai2_gene_pane_g1_ParamLimits

0x60d1,	// (0x00014b2a) ai2_gene_pane_g1

0x60e3,	// (0x00014b3c) ai2_gene_pane_g2_ParamLimits

0x60e3,	// (0x00014b3c) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x0001e42f) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x0001e42f) ai2_gene_pane_g

0x2b6f,	// (0x000115c8) scroll_pane_cp12

0xd410,	// (0x0001be69) control_pane_t3_ParamLimits

0xd410,	// (0x0001be69) control_pane_t3

0x4127,	// (0x00012b80) status_small_pane_g8_ParamLimits

0x4127,	// (0x00012b80) status_small_pane_g8

0xd599,	// (0x0001bff2) popup_find_window_ParamLimits

0xd71b,	// (0x0001c174) popup_note_image_window_ParamLimits

0xbc40,	// (0x0001a699) list_double2_graphic_pane_vc_g1_ParamLimits

0xbc40,	// (0x0001a699) list_double2_graphic_pane_vc_g1

0xc36b,	// (0x0001adc4) list_double2_graphic_pane_vc_g2_ParamLimits

0xc36b,	// (0x0001adc4) list_double2_graphic_pane_vc_g2

0xc377,	// (0x0001add0) list_double2_graphic_pane_vc_g3_ParamLimits

0xc377,	// (0x0001add0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x0001e204) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001e204) list_double2_graphic_pane_vc_g

0xc3c9,	// (0x0001ae22) list_double2_graphic_pane_vc_t1_ParamLimits

0xc3c9,	// (0x0001ae22) list_double2_graphic_pane_vc_t1

0xc36b,	// (0x0001adc4) list_single_heading_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_single_heading_pane_vc_g1

0xc377,	// (0x0001add0) list_single_heading_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_single_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_single_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_single_heading_pane_vc_g

0xc3df,	// (0x0001ae38) list_single_heading_pane_vc_t1_ParamLimits

0xc3df,	// (0x0001ae38) list_single_heading_pane_vc_t1

0xc3f5,	// (0x0001ae4e) list_single_heading_pane_vc_t2_ParamLimits

0xc3f5,	// (0x0001ae4e) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0001e231) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0001e231) list_single_heading_pane_vc_t

0xc407,	// (0x0001ae60) list_setting_number_pane_vc_g1_ParamLimits

0xc407,	// (0x0001ae60) list_setting_number_pane_vc_g1

0xc413,	// (0x0001ae6c) list_setting_number_pane_vc_g2_ParamLimits

0xc413,	// (0x0001ae6c) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0001e236) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0001e236) list_setting_number_pane_vc_g

0xc41f,	// (0x0001ae78) list_setting_number_pane_vc_t1_ParamLimits

0xc41f,	// (0x0001ae78) list_setting_number_pane_vc_t1

0xc433,	// (0x0001ae8c) list_setting_number_pane_vc_t2_ParamLimits

0xc433,	// (0x0001ae8c) list_setting_number_pane_vc_t2

0xc44f,	// (0x0001aea8) list_setting_number_pane_vc_t3_ParamLimits

0xc44f,	// (0x0001aea8) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0001e23b) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0001e23b) list_setting_number_pane_vc_t

0xc467,	// (0x0001aec0) set_value_pane_vc_ParamLimits

0xc467,	// (0x0001aec0) set_value_pane_vc

0xc4ed,	// (0x0001af46) list_double2_graphic_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double2_graphic_pane_vc

0x5c64,	// (0x000146bd) list_double2_large_graphic_pane_vc_ParamLimits

0x5c64,	// (0x000146bd) list_double2_large_graphic_pane_vc

0xc4ed,	// (0x0001af46) list_double2_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double2_pane_vc

0xc4ed,	// (0x0001af46) list_double_graphic_heading_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_graphic_heading_pane_vc

0xc4ed,	// (0x0001af46) list_double_graphic_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_graphic_pane_vc

0xc4ed,	// (0x0001af46) list_double_heading_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_heading_pane_vc

0xc501,	// (0x0001af5a) list_double_large_graphic_pane_vc_ParamLimits

0xc501,	// (0x0001af5a) list_double_large_graphic_pane_vc

0xc4ed,	// (0x0001af46) list_double_number_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_number_pane_vc

0xc4ed,	// (0x0001af46) list_double_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_pane_vc

0xc4ed,	// (0x0001af46) list_double_time_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_double_time_pane_vc

0xc4ed,	// (0x0001af46) list_setting_number_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_setting_number_pane_vc

0xc4ed,	// (0x0001af46) list_setting_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_setting_pane_vc

0xc4ed,	// (0x0001af46) list_single_graphic_heading_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_single_graphic_heading_pane_vc

0xc4ed,	// (0x0001af46) list_single_heading_pane_vc_ParamLimits

0xc4ed,	// (0x0001af46) list_single_heading_pane_vc

0xc512,	// (0x0001af6b) list_single_number_heading_pane_vc_ParamLimits

0xc512,	// (0x0001af6b) list_single_number_heading_pane_vc

0xc556,	// (0x0001afaf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc556,	// (0x0001afaf) list_double_graphic_heading_pane_vc_g1

0xc36b,	// (0x0001adc4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc36b,	// (0x0001adc4) list_double_graphic_heading_pane_vc_g2

0xc377,	// (0x0001add0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc377,	// (0x0001add0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0001e43b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0001e43b) list_double_graphic_heading_pane_vc_g

0xc562,	// (0x0001afbb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc562,	// (0x0001afbb) list_double_graphic_heading_pane_vc_t1

0xc578,	// (0x0001afd1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc578,	// (0x0001afd1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x0001e442) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x0001e442) list_double_graphic_heading_pane_vc_t

0xc407,	// (0x0001ae60) list_setting_pane_vc_g1_ParamLimits

0xc407,	// (0x0001ae60) list_setting_pane_vc_g1

0xc413,	// (0x0001ae6c) list_setting_pane_vc_g2_ParamLimits

0xc413,	// (0x0001ae6c) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0001e236) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0001e236) list_setting_pane_vc_g

0xc590,	// (0x0001afe9) list_setting_pane_vc_t1_ParamLimits

0xc590,	// (0x0001afe9) list_setting_pane_vc_t1

0xc5a4,	// (0x0001affd) list_setting_pane_vc_t2_ParamLimits

0xc5a4,	// (0x0001affd) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001e485) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0001e485) list_setting_pane_vc_t

0xc467,	// (0x0001aec0) set_value_pane_cp_vc_ParamLimits

0xc467,	// (0x0001aec0) set_value_pane_cp_vc

0xc36b,	// (0x0001adc4) list_single_number_heading_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_single_number_heading_pane_vc_g1

0xc377,	// (0x0001add0) list_single_number_heading_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_single_number_heading_pane_vc_g

0xc3df,	// (0x0001ae38) list_single_number_heading_pane_vc_t1_ParamLimits

0xc3df,	// (0x0001ae38) list_single_number_heading_pane_vc_t1

0xc5b8,	// (0x0001b011) list_single_number_heading_pane_vc_t2_ParamLimits

0xc5b8,	// (0x0001b011) list_single_number_heading_pane_vc_t2

0xc5ca,	// (0x0001b023) list_single_number_heading_pane_vc_t3_ParamLimits

0xc5ca,	// (0x0001b023) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0001e48a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0001e48a) list_single_number_heading_pane_vc_t

0xbc40,	// (0x0001a699) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xbc40,	// (0x0001a699) list_single_graphic_heading_pane_vc_g1

0xc36b,	// (0x0001adc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc36b,	// (0x0001adc4) list_single_graphic_heading_pane_vc_g4

0xc377,	// (0x0001add0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc377,	// (0x0001add0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x0001e204) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001e204) list_single_graphic_heading_pane_vc_g

0xc3df,	// (0x0001ae38) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xc3df,	// (0x0001ae38) list_single_graphic_heading_pane_vc_t1

0xc5dc,	// (0x0001b035) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc5dc,	// (0x0001b035) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0001e491) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001e491) list_single_graphic_heading_pane_vc_t

0xc36b,	// (0x0001adc4) list_double2_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_double2_pane_vc_g1

0xc377,	// (0x0001add0) list_double2_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_double2_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_double2_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_double2_pane_vc_g

0xc5ee,	// (0x0001b047) list_double2_pane_vc_t1_ParamLimits

0xc5ee,	// (0x0001b047) list_double2_pane_vc_t1

0xc604,	// (0x0001b05d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc604,	// (0x0001b05d) list_double2_large_graphic_pane_vc_g1

0xc610,	// (0x0001b069) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc610,	// (0x0001b069) list_double2_large_graphic_pane_vc_g2

0xc61c,	// (0x0001b075) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc61c,	// (0x0001b075) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0001e496) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0001e496) list_double2_large_graphic_pane_vc_g

0xc628,	// (0x0001b081) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc628,	// (0x0001b081) list_double2_large_graphic_pane_vc_t1

0xc63e,	// (0x0001b097) list_double_time_pane_vc_g1_ParamLimits

0xc63e,	// (0x0001b097) list_double_time_pane_vc_g1

0xc64a,	// (0x0001b0a3) list_double_time_pane_vc_g2_ParamLimits

0xc64a,	// (0x0001b0a3) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0001e49d) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0001e49d) list_double_time_pane_vc_g

0xc656,	// (0x0001b0af) list_double_time_pane_vc_t1_ParamLimits

0xc656,	// (0x0001b0af) list_double_time_pane_vc_t1

0xc674,	// (0x0001b0cd) list_double_time_pane_vc_t2_ParamLimits

0xc674,	// (0x0001b0cd) list_double_time_pane_vc_t2

0xc6b8,	// (0x0001b111) list_double_time_pane_vc_t3_ParamLimits

0xc6b8,	// (0x0001b111) list_double_time_pane_vc_t3

0xc6ca,	// (0x0001b123) list_double_time_pane_vc_t4_ParamLimits

0xc6ca,	// (0x0001b123) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0001e4a2) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0001e4a2) list_double_time_pane_vc_t

0xc36b,	// (0x0001adc4) list_double_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_double_pane_vc_g1

0xc377,	// (0x0001add0) list_double_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_double_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_double_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_double_pane_vc_g

0xc6dc,	// (0x0001b135) list_double_pane_vc_t1_ParamLimits

0xc6dc,	// (0x0001b135) list_double_pane_vc_t1

0xc6ee,	// (0x0001b147) list_double_pane_vc_t2_ParamLimits

0xc6ee,	// (0x0001b147) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0001e4ab) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0001e4ab) list_double_pane_vc_t

0xc36b,	// (0x0001adc4) list_double_number_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_double_number_pane_vc_g1

0xc377,	// (0x0001add0) list_double_number_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_double_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_double_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_double_number_pane_vc_g

0xc704,	// (0x0001b15d) list_double_number_pane_vc_t1_ParamLimits

0xc704,	// (0x0001b15d) list_double_number_pane_vc_t1

0xc718,	// (0x0001b171) list_double_number_pane_vc_t2_ParamLimits

0xc718,	// (0x0001b171) list_double_number_pane_vc_t2

0xc72a,	// (0x0001b183) list_double_number_pane_vc_t3_ParamLimits

0xc72a,	// (0x0001b183) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0001e4b0) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0001e4b0) list_double_number_pane_vc_t

0xc740,	// (0x0001b199) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc740,	// (0x0001b199) list_double_large_graphic_pane_vc_g1

0xc74c,	// (0x0001b1a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc74c,	// (0x0001b1a5) list_double_large_graphic_pane_vc_g2

0xc75d,	// (0x0001b1b6) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc75d,	// (0x0001b1b6) list_double_large_graphic_pane_vc_g3

0xc769,	// (0x0001b1c2) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc769,	// (0x0001b1c2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0001e4b7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0001e4b7) list_double_large_graphic_pane_vc_g

0xc775,	// (0x0001b1ce) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc775,	// (0x0001b1ce) list_double_large_graphic_pane_vc_t1

0xc787,	// (0x0001b1e0) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc787,	// (0x0001b1e0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0001e4c0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0001e4c0) list_double_large_graphic_pane_vc_t

0xc36b,	// (0x0001adc4) list_double_heading_pane_vc_g1_ParamLimits

0xc36b,	// (0x0001adc4) list_double_heading_pane_vc_g1

0xc377,	// (0x0001add0) list_double_heading_pane_vc_g2_ParamLimits

0xc377,	// (0x0001add0) list_double_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0001e22c) list_double_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0001e22c) list_double_heading_pane_vc_g

0xc7a1,	// (0x0001b1fa) list_double_heading_pane_vc_t1_ParamLimits

0xc7a1,	// (0x0001b1fa) list_double_heading_pane_vc_t1

0xc3df,	// (0x0001ae38) list_double_heading_pane_vc_t2_ParamLimits

0xc3df,	// (0x0001ae38) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001e4c5) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001e4c5) list_double_heading_pane_vc_t

0xc7b3,	// (0x0001b20c) list_double_graphic_pane_vc_g1_ParamLimits

0xc7b3,	// (0x0001b20c) list_double_graphic_pane_vc_g1

0xc7c6,	// (0x0001b21f) list_double_graphic_pane_vc_g2_ParamLimits

0xc7c6,	// (0x0001b21f) list_double_graphic_pane_vc_g2

0xc36b,	// (0x0001adc4) list_double_graphic_pane_vc_g3_ParamLimits

0xc36b,	// (0x0001adc4) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0001e4ca) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0001e4ca) list_double_graphic_pane_vc_g

0xc7e3,	// (0x0001b23c) list_double_graphic_pane_vc_t1_ParamLimits

0xc7e3,	// (0x0001b23c) list_double_graphic_pane_vc_t1

0xc801,	// (0x0001b25a) list_double_graphic_pane_vc_t2_ParamLimits

0xc801,	// (0x0001b25a) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001e4d3) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001e4d3) list_double_graphic_pane_vc_t

0xcc08,	// (0x0001b661) aid_size_cell_fastswap

0xcc10,	// (0x0001b669) aid_size_cell_touch_ParamLimits

0xcc10,	// (0x0001b669) aid_size_cell_touch

0xcd55,	// (0x0001b7ae) popup_fast_swap_wide_window_ParamLimits

0xcd55,	// (0x0001b7ae) popup_fast_swap_wide_window

0xce1b,	// (0x0001b874) touch_pane_ParamLimits

0xce1b,	// (0x0001b874) touch_pane

0xc0ac,	// (0x0001ab05) button_value_adjust_pane_cp2

0x67a6,	// (0x000151ff) button_value_adjust_pane_cp4

0xc0cc,	// (0x0001ab25) form_field_data_pane_cp2

0xc0eb,	// (0x0001ab44) form_field_data_wide_pane_cp2

0x36c5,	// (0x0001211e) bg_scroll_pane_ParamLimits

0xd042,	// (0x0001ba9b) scroll_handle_pane_ParamLimits

0xd056,	// (0x0001baaf) scroll_sc2_down_pane_ParamLimits

0xd056,	// (0x0001baaf) scroll_sc2_down_pane

0x36f6,	// (0x0001214f) scroll_sc2_up_pane_ParamLimits

0x36f6,	// (0x0001214f) scroll_sc2_up_pane

0x6a35,	// (0x0001548e) grid_wheel_folder_pane_g1_ParamLimits

0x6a35,	// (0x0001548e) grid_wheel_folder_pane_g1

0xd20a,	// (0x0001bc63) clock_nsta_pane_cp2_ParamLimits

0xd20a,	// (0x0001bc63) clock_nsta_pane_cp2

0x3ebd,	// (0x00012916) listscroll_midp_pane_ParamLimits

0x3ec9,	// (0x00012922) midp_canvas_pane

0xd451,	// (0x0001beaa) nsta_clock_indic_pane

0x41d5,	// (0x00012c2e) listscroll_form_pane_vc

0x41f2,	// (0x00012c4b) listscroll_set_pane_vc_ParamLimits

0x41f2,	// (0x00012c4b) listscroll_set_pane_vc

0x42e6,	// (0x00012d3f) clock_nsta_pane

0x4350,	// (0x00012da9) indicator_nsta_pane

0x4617,	// (0x00013070) bg_popup_sub_pane_cp2_ParamLimits

0x462b,	// (0x00013084) find_pane_cp2_ParamLimits

0x462b,	// (0x00013084) find_pane_cp2

0x463d,	// (0x00013096) grid_toobar_pane_ParamLimits

0x47b7,	// (0x00013210) list_form_gen_pane_vc_ParamLimits

0x47b7,	// (0x00013210) list_form_gen_pane_vc

0x47cd,	// (0x00013226) scroll_pane_cp8_vc_ParamLimits

0x47cd,	// (0x00013226) scroll_pane_cp8_vc

0x4849,	// (0x000132a2) data_form_wide_pane_vc_ParamLimits

0x4849,	// (0x000132a2) data_form_wide_pane_vc

0x4855,	// (0x000132ae) form_field_data_wide_pane_vc_g1

0x485d,	// (0x000132b6) form_field_data_wide_pane_vc_t1_ParamLimits

0x485d,	// (0x000132b6) form_field_data_wide_pane_vc_t1

0x30f5,	// (0x00011b4e) input_focus_pane_cp6_vc_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_cp6_vc

0x4b59,	// (0x000135b2) list_midp_pane_ParamLimits

0x4b65,	// (0x000135be) scroll_pane_cp16_ParamLimits

0x4b65,	// (0x000135be) scroll_pane_cp16

0x4bbf,	// (0x00013618) button_value_adjust_pane_ParamLimits

0x4bbf,	// (0x00013618) button_value_adjust_pane

0x5a99,	// (0x000144f2) button_value_adjust_pane_cp6_ParamLimits

0x5a99,	// (0x000144f2) button_value_adjust_pane_cp6

0x5ba1,	// (0x000145fa) settings_code_pane_cp_ParamLimits

0x5ba1,	// (0x000145fa) settings_code_pane_cp

0x221e,	// (0x00010c77) cell_touch_pane_g1

0x221e,	// (0x00010c77) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001e157) cell_touch_pane_g

0x6162,	// (0x00014bbb) cell_touch_pane_cp_ParamLimits

0x6162,	// (0x00014bbb) cell_touch_pane_cp

0x6172,	// (0x00014bcb) cell_touch_pane_ParamLimits

0x6172,	// (0x00014bcb) cell_touch_pane

0x221e,	// (0x00010c77) scroll_sc2_down_pane_g1

0x221e,	// (0x00010c77) scroll_sc2_up_pane_g1

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp4_vc

0x61b2,	// (0x00014c0b) list_set_graphic_pane_vc_g1_ParamLimits

0x61b2,	// (0x00014c0b) list_set_graphic_pane_vc_g1

0x61be,	// (0x00014c17) list_set_graphic_pane_vc_g2_ParamLimits

0x61be,	// (0x00014c17) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x0001e447) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001e447) list_set_graphic_pane_vc_g

0x61ca,	// (0x00014c23) text_primary_small_cp13_vc_ParamLimits

0x61ca,	// (0x00014c23) text_primary_small_cp13_vc

0x61e2,	// (0x00014c3b) list_set_graphic_pane_vc_ParamLimits

0x61e2,	// (0x00014c3b) list_set_graphic_pane_vc

0x2305,	// (0x00010d5e) input_focus_pane_cp2_vc

0x221e,	// (0x00010c77) setting_code_pane_vc_g1

0x61f5,	// (0x00014c4e) setting_code_pane_vc_t1

0x6203,	// (0x00014c5c) set_text_pane_vc_t1_ParamLimits

0x6203,	// (0x00014c5c) set_text_pane_vc_t1

0x2305,	// (0x00010d5e) input_focus_pane_cp1_vc

0x621e,	// (0x00014c77) list_set_text_pane_vc

0x221e,	// (0x00010c77) setting_text_pane_vc_g1

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp2_vc

0x6228,	// (0x00014c81) setting_slider_graphic_pane_vc_g1

0x6230,	// (0x00014c89) setting_slider_graphic_pane_vc_t1

0x623e,	// (0x00014c97) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e44c) setting_slider_graphic_pane_vc_t

0x624c,	// (0x00014ca5) slider_set_pane_cp_vc

0x6254,	// (0x00014cad) slider_set_pane_vc_g1

0x625d,	// (0x00014cb6) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x0001e451) slider_set_pane_vc_g

0x3218,	// (0x00011c71) set_opt_bg_pane_g1_copy1

0x3220,	// (0x00011c79) set_opt_bg_pane_g2_copy1

0x6289,	// (0x00014ce2) set_opt_bg_pane_g3_copy1

0x3230,	// (0x00011c89) set_opt_bg_pane_g4_copy1

0x3238,	// (0x00011c91) set_opt_bg_pane_g5_copy1

0x3240,	// (0x00011c99) set_opt_bg_pane_g6_copy1

0x6291,	// (0x00014cea) set_opt_bg_pane_g7_copy1

0x6299,	// (0x00014cf2) set_opt_bg_pane_g8_copy1

0x62a1,	// (0x00014cfa) set_opt_bg_pane_g9_copy1

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp_vc

0x62a9,	// (0x00014d02) setting_slider_pane_vc_t1

0x6230,	// (0x00014c89) setting_slider_pane_vc_t2

0x623e,	// (0x00014c97) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x0001e460) setting_slider_pane_vc_t

0x624c,	// (0x00014ca5) slider_set_pane_vc

0xda16,	// (0x0001c46f) volume_set_pane_vc_g1

0xdcfd,	// (0x0001c756) volume_set_pane_vc_g2

0xdd06,	// (0x0001c75f) volume_set_pane_vc_g3

0xdd0f,	// (0x0001c768) volume_set_pane_vc_g4

0xdd18,	// (0x0001c771) volume_set_pane_vc_g5

0xdd21,	// (0x0001c77a) volume_set_pane_vc_g6

0xdd2a,	// (0x0001c783) volume_set_pane_vc_g7

0xdd33,	// (0x0001c78c) volume_set_pane_vc_g8

0xdd3c,	// (0x0001c795) volume_set_pane_vc_g9

0xdd45,	// (0x0001c79e) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x0001e467) volume_set_pane_vc_g

0x62b8,	// (0x00014d11) volume_set_pane_vc

0x62c0,	// (0x00014d19) button_value_adjust_pane_cp1_vc

0x62ca,	// (0x00014d23) list_highlight_pane_cp2_vc

0x62d3,	// (0x00014d2c) list_set_pane_vc_ParamLimits

0x62d3,	// (0x00014d2c) list_set_pane_vc

0x6325,	// (0x00014d7e) main_pane_set_vc_t1_ParamLimits

0x6325,	// (0x00014d7e) main_pane_set_vc_t1

0x633a,	// (0x00014d93) main_pane_set_vc_t2_ParamLimits

0x633a,	// (0x00014d93) main_pane_set_vc_t2

0x634c,	// (0x00014da5) main_pane_set_vc_t3_ParamLimits

0x634c,	// (0x00014da5) main_pane_set_vc_t3

0x635e,	// (0x00014db7) main_pane_set_vc_t4_ParamLimits

0x635e,	// (0x00014db7) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0001e47c) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0001e47c) main_pane_set_vc_t

0x6370,	// (0x00014dc9) setting_code_pane_vc_ParamLimits

0x6370,	// (0x00014dc9) setting_code_pane_vc

0x637f,	// (0x00014dd8) setting_slider_graphic_pane_vc

0x637f,	// (0x00014dd8) setting_slider_pane_vc

0x637f,	// (0x00014dd8) setting_text_pane_vc

0x637f,	// (0x00014dd8) setting_volume_pane_vc

0x6387,	// (0x00014de0) scroll_pane_cp121_vc

0x301c,	// (0x00011a75) set_content_pane_vc

0x65e9,	// (0x00015042) button_value_adjust_pane_g1

0x65f2,	// (0x0001504b) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001e4d8) button_value_adjust_pane_g

0x65fb,	// (0x00015054) form_field_slider_wide_pane_vc_t1_ParamLimits

0x65fb,	// (0x00015054) form_field_slider_wide_pane_vc_t1

0x6611,	// (0x0001506a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6611,	// (0x0001506a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001e4dd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001e4dd) form_field_slider_wide_pane_vc_t

0x267e,	// (0x000110d7) input_focus_pane_cp10_vc_ParamLimits

0x267e,	// (0x000110d7) input_focus_pane_cp10_vc

0x663c,	// (0x00015095) slider_cont_pane_cp1_vc_ParamLimits

0x663c,	// (0x00015095) slider_cont_pane_cp1_vc

0x6254,	// (0x00014cad) slider_form_pane_g1_cp2

0x625d,	// (0x00014cb6) slider_form_pane_g2_cp2

0x6657,	// (0x000150b0) form_field_slider_pane_vc_t3

0x6665,	// (0x000150be) form_field_slider_pane_vc_t4

0x6673,	// (0x000150cc) slider_form_pane_vc_ParamLimits

0x6673,	// (0x000150cc) slider_form_pane_vc

0x6680,	// (0x000150d9) form_field_slider_pane_vc_t1_ParamLimits

0x6680,	// (0x000150d9) form_field_slider_pane_vc_t1

0x6696,	// (0x000150ef) form_field_slider_pane_vc_t2_ParamLimits

0x6696,	// (0x000150ef) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001e4ef) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001e4ef) form_field_slider_pane_vc_t

0x267e,	// (0x000110d7) input_focus_pane_cp9_vc_ParamLimits

0x267e,	// (0x000110d7) input_focus_pane_cp9_vc

0x66a8,	// (0x00015101) slider_cont_pane_vc_ParamLimits

0x66a8,	// (0x00015101) slider_cont_pane_vc

0x66ba,	// (0x00015113) list_form_graphic_pane_cp_vc_ParamLimits

0x66ba,	// (0x00015113) list_form_graphic_pane_cp_vc

0x4855,	// (0x000132ae) form_field_popup_wide_pane_vc_g1

0x66cf,	// (0x00015128) form_field_popup_wide_pane_vc_t1_ParamLimits

0x66cf,	// (0x00015128) form_field_popup_wide_pane_vc_t1

0x30f5,	// (0x00011b4e) input_focus_pane_cp8_vc_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_cp8_vc

0x670e,	// (0x00015167) list_form_wide_pane_vc_ParamLimits

0x670e,	// (0x00015167) list_form_wide_pane_vc

0x671a,	// (0x00015173) list_form_graphic_pane_vc_g1

0x6722,	// (0x0001517b) list_form_graphic_pane_vc_t1_ParamLimits

0x6722,	// (0x0001517b) list_form_graphic_pane_vc_t1

0x23e5,	// (0x00010e3e) list_highlight_pane_cp5_vc_ParamLimits

0x23e5,	// (0x00010e3e) list_highlight_pane_cp5_vc

0x673e,	// (0x00015197) list_form_graphic_pane_vc_ParamLimits

0x673e,	// (0x00015197) list_form_graphic_pane_vc

0x4855,	// (0x000132ae) form_field_popup_pane_vc_g1

0x6754,	// (0x000151ad) form_field_popup_pane_vc_t1_ParamLimits

0x6754,	// (0x000151ad) form_field_popup_pane_vc_t1

0x30f5,	// (0x00011b4e) input_focus_pane_cp7_vc_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_cp7_vc

0x6769,	// (0x000151c2) list_form_pane_vc_ParamLimits

0x6769,	// (0x000151c2) list_form_pane_vc

0x6775,	// (0x000151ce) data_form_pane_vc_t1_ParamLimits

0x6775,	// (0x000151ce) data_form_pane_vc_t1

0x3218,	// (0x00011c71) input_focus_pane_vc_g1

0x3220,	// (0x00011c79) input_focus_pane_vc_g2

0x3228,	// (0x00011c81) input_focus_pane_vc_g3

0x3230,	// (0x00011c89) input_focus_pane_vc_g4

0x3238,	// (0x00011c91) input_focus_pane_vc_g5

0x3240,	// (0x00011c99) input_focus_pane_vc_g6

0x3248,	// (0x00011ca1) input_focus_pane_vc_g7

0x3250,	// (0x00011ca9) input_focus_pane_vc_g8

0x3258,	// (0x00011cb1) input_focus_pane_vc_g9

0x221e,	// (0x00010c77) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001e0e0) input_focus_pane_vc_g

0x4849,	// (0x000132a2) data_form_pane_vc_ParamLimits

0x4849,	// (0x000132a2) data_form_pane_vc

0x4855,	// (0x000132ae) form_field_data_pane_vc_g1

0x6790,	// (0x000151e9) form_field_data_pane_vc_t1_ParamLimits

0x6790,	// (0x000151e9) form_field_data_pane_vc_t1

0x30f5,	// (0x00011b4e) input_focus_pane_vc_ParamLimits

0x30f5,	// (0x00011b4e) input_focus_pane_vc

0x3025,	// (0x00011a7e) button_value_adjust_pane_cp3_vc

0x67a6,	// (0x000151ff) button_value_adjust_pane_cp5_vc

0x67ae,	// (0x00015207) form_field_data_pane_vc_ParamLimits

0x67ae,	// (0x00015207) form_field_data_pane_vc

0x304d,	// (0x00011aa6) form_field_data_pane_vc_cp2

0x67c5,	// (0x0001521e) form_field_data_wide_pane_vc_ParamLimits

0x67c5,	// (0x0001521e) form_field_data_wide_pane_vc

0x67db,	// (0x00015234) form_field_data_wide_pane_vc_cp2

0x67e3,	// (0x0001523c) form_field_popup_pane_vc_ParamLimits

0x67e3,	// (0x0001523c) form_field_popup_pane_vc

0x67fa,	// (0x00015253) form_field_popup_wide_pane_vc_ParamLimits

0x67fa,	// (0x00015253) form_field_popup_wide_pane_vc

0x6810,	// (0x00015269) form_field_slider_pane_vc_ParamLimits

0x6810,	// (0x00015269) form_field_slider_pane_vc

0x6823,	// (0x0001527c) form_field_slider_wide_pane_vc_ParamLimits

0x6823,	// (0x0001527c) form_field_slider_wide_pane_vc

0x6836,	// (0x0001528f) grid_touch_1_pane_ParamLimits

0x6836,	// (0x0001528f) grid_touch_1_pane

0x6842,	// (0x0001529b) grid_touch_2_pane_ParamLimits

0x6842,	// (0x0001529b) grid_touch_2_pane

0x416c,	// (0x00012bc5) touch_pane_g1_ParamLimits

0x416c,	// (0x00012bc5) touch_pane_g1

0x685a,	// (0x000152b3) cell_app_pane_cp_wide_ParamLimits

0x685a,	// (0x000152b3) cell_app_pane_cp_wide

0x686a,	// (0x000152c3) grid_popup_fast_wide_pane_ParamLimits

0x686a,	// (0x000152c3) grid_popup_fast_wide_pane

0x687e,	// (0x000152d7) scroll_pane_cp19_ParamLimits

0x687e,	// (0x000152d7) scroll_pane_cp19

0x2305,	// (0x00010d5e) bg_popup_window_pane_cp20

0x6892,	// (0x000152eb) listscroll_popup_fast_wide_pane

0x23e5,	// (0x00010e3e) grid_indicator_nsta_pane

0x689a,	// (0x000152f3) clock_nsta_pane_g1

0x68a3,	// (0x000152fc) clock_nsta_pane_t1

0x68bf,	// (0x00015318) cell_indicator_nsta_pane_ParamLimits

0x68bf,	// (0x00015318) cell_indicator_nsta_pane

0x68f0,	// (0x00015349) cell_indicator_nsta_pane_g1

0x68fe,	// (0x00015357) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001e500) cell_indicator_nsta_pane_g

0x690b,	// (0x00015364) clock_nsta_pane_cp

0x6913,	// (0x0001536c) indicator_nsta_pane_cp

0x691c,	// (0x00015375) nsta_clock_indic_pane_g1

0x24c5,	// (0x00010f1e) grid_indicator_pane

0x37e8,	// (0x00012241) scroll_pane_cp29

0xd161,	// (0x0001bbba) indicator_nsta_pane_cp2_ParamLimits

0xd161,	// (0x0001bbba) indicator_nsta_pane_cp2

0x23e5,	// (0x00010e3e) main_apps_wheel_pane

0x4a34,	// (0x0001348d) form_midp_field_text_pane_ParamLimits

0x4b85,	// (0x000135de) scroll_bar_cp050_ParamLimits

0x6985,	// (0x000153de) cell_indicator_pane_ParamLimits

0x6985,	// (0x000153de) cell_indicator_pane

0x699b,	// (0x000153f4) cell_indicator_pane_g1

0x69a5,	// (0x000153fe) grid_wheel_folder_pane_ParamLimits

0x69a5,	// (0x000153fe) grid_wheel_folder_pane

0x69b7,	// (0x00015410) list_wheel_apps_pane_ParamLimits

0x69b7,	// (0x00015410) list_wheel_apps_pane

0x69c6,	// (0x0001541f) main_apps_wheel_pane_g1_ParamLimits

0x69c6,	// (0x0001541f) main_apps_wheel_pane_g1

0x69da,	// (0x00015433) main_apps_wheel_pane_g2_ParamLimits

0x69da,	// (0x00015433) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001e51c) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001e51c) main_apps_wheel_pane_g

0x69ee,	// (0x00015447) main_apps_wheel_pane_t1_ParamLimits

0x69ee,	// (0x00015447) main_apps_wheel_pane_t1

0x6a0d,	// (0x00015466) list_wheel_apps_pane_g1

0x6a15,	// (0x0001546e) list_wheel_apps_pane_g2

0x6a1d,	// (0x00015476) list_wheel_apps_pane_g3

0x6a25,	// (0x0001547e) list_wheel_apps_pane_g4

0x6a2d,	// (0x00015486) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001e521) list_wheel_apps_pane_g

0x23e5,	// (0x00010e3e) navi_icon_text_pane

0x422e,	// (0x00012c87) aid_fill_nsta

0x6a4c,	// (0x000154a5) navi_icon_text_pane_g1

0x6a58,	// (0x000154b1) navi_icon_text_pane_t1

0x3c27,	// (0x00012680) list_set_graphic_pane_t1_ParamLimits

0x3c27,	// (0x00012680) list_set_graphic_pane_t1

0x529f,	// (0x00013cf8) popup_midp_note_alarm_window_t6_ParamLimits

0x529f,	// (0x00013cf8) popup_midp_note_alarm_window_t6

0x52b1,	// (0x00013d0a) popup_midp_note_alarm_window_t7_ParamLimits

0x52b1,	// (0x00013d0a) popup_midp_note_alarm_window_t7

0x52c3,	// (0x00013d1c) popup_midp_note_alarm_window_t8_ParamLimits

0x52c3,	// (0x00013d1c) popup_midp_note_alarm_window_t8

0x52d5,	// (0x00013d2e) popup_midp_note_alarm_window_t9_ParamLimits

0x52d5,	// (0x00013d2e) popup_midp_note_alarm_window_t9

0x52e7,	// (0x00013d40) popup_midp_note_alarm_window_t10_ParamLimits

0x52e7,	// (0x00013d40) popup_midp_note_alarm_window_t10

0x52f9,	// (0x00013d52) popup_midp_note_alarm_window_t11_ParamLimits

0x52f9,	// (0x00013d52) popup_midp_note_alarm_window_t11

0x530b,	// (0x00013d64) scroll_pane_cp17_ParamLimits

0x530b,	// (0x00013d64) scroll_pane_cp17

0xda16,	// (0x0001c46f) volume_small_pane_cp_g1

0xdd4e,	// (0x0001c7a7) volume_small_pane_cp_g2

0xdd57,	// (0x0001c7b0) volume_small_pane_cp_g3

0xdd60,	// (0x0001c7b9) volume_small_pane_cp_g4

0xda43,	// (0x0001c49c) volume_small_pane_cp_g5

0xdd69,	// (0x0001c7c2) volume_small_pane_cp_g6

0xdd72,	// (0x0001c7cb) volume_small_pane_cp_g7

0xdd7b,	// (0x0001c7d4) volume_small_pane_cp_g8

0xdd84,	// (0x0001c7dd) volume_small_pane_cp_g9

0xdd8d,	// (0x0001c7e6) volume_small_pane_cp_g10

0x3f86,	// (0x000129df) midp_ticker_pane_g1_ParamLimits

0x3f92,	// (0x000129eb) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001e1ac) midp_ticker_pane_g_ParamLimits

0x3f9e,	// (0x000129f7) midp_ticker_pane_t1_ParamLimits

0x423e,	// (0x00012c97) aid_fill_nsta_2

0x4b71,	// (0x000135ca) list_form2_midp_pane

0x5c20,	// (0x00014679) midp_editing_number_pane_ParamLimits

0x5c2c,	// (0x00014685) midp_ticker_pane_ParamLimits

0x6a6a,	// (0x000154c3) form2_midp_field_pane

0x6a8e,	// (0x000154e7) scroll_pane_cp51

0x6aae,	// (0x00015507) form2_midp_button_pane_ParamLimits

0x6aae,	// (0x00015507) form2_midp_button_pane

0x6ac0,	// (0x00015519) form2_midp_content_pane_ParamLimits

0x6ac0,	// (0x00015519) form2_midp_content_pane

0x6ada,	// (0x00015533) form2_midp_field_choice_group_pane

0x6ae2,	// (0x0001553b) form2_midp_field_pane_g1

0x6aea,	// (0x00015543) form2_midp_field_pane_g2

0x6af2,	// (0x0001554b) form2_midp_field_pane_g3

0x6afa,	// (0x00015553) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001e546) form2_midp_field_pane_g

0x6b02,	// (0x0001555b) form2_midp_gauge_slider_pane

0x6b0a,	// (0x00015563) form2_midp_gauge_wait_pane

0x6b12,	// (0x0001556b) form2_midp_image_pane_ParamLimits

0x6b12,	// (0x0001556b) form2_midp_image_pane

0x6b2d,	// (0x00015586) form2_midp_label_pane_ParamLimits

0x6b2d,	// (0x00015586) form2_midp_label_pane

0x6b46,	// (0x0001559f) form2_midp_label_pane_cp_ParamLimits

0x6b46,	// (0x0001559f) form2_midp_label_pane_cp

0x6b65,	// (0x000155be) form2_midp_string_pane_ParamLimits

0x6b65,	// (0x000155be) form2_midp_string_pane

0xc81f,	// (0x0001b278) form2_midp_text_pane_ParamLimits

0xc81f,	// (0x0001b278) form2_midp_text_pane

0x6b90,	// (0x000155e9) form2_midp_time_pane

0x6ba0,	// (0x000155f9) input_focus_pane_cp51_ParamLimits

0x6ba0,	// (0x000155f9) input_focus_pane_cp51

0x6bb8,	// (0x00015611) form2_midp_label_pane_t1_ParamLimits

0x6bb8,	// (0x00015611) form2_midp_label_pane_t1

0xc838,	// (0x0001b291) form2_mdip_text_pane_t1_ParamLimits

0xc838,	// (0x0001b291) form2_mdip_text_pane_t1

0xc853,	// (0x0001b2ac) form2_midp_time_pane_t1

0x6c13,	// (0x0001566c) form2_midp_gauge_slider_pane_t1

0x6c25,	// (0x0001567e) form2_midp_gauge_slider_pane_t2

0x6c37,	// (0x00015690) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001e54f) form2_midp_gauge_slider_pane_t

0x6c49,	// (0x000156a2) form2_midp_slider_pane

0x6c55,	// (0x000156ae) form2_midp_gauge_wait_pane_t1

0x6c63,	// (0x000156bc) form2_midp_wait_pane_ParamLimits

0x6c63,	// (0x000156bc) form2_midp_wait_pane

0x4893,	// (0x000132ec) list_single_2graphic_pane_cp4_ParamLimits

0x4893,	// (0x000132ec) list_single_2graphic_pane_cp4

0x6c8e,	// (0x000156e7) list_single_midp_graphic_pane_cp_ParamLimits

0x6c8e,	// (0x000156e7) list_single_midp_graphic_pane_cp

0x2305,	// (0x00010d5e) list_highlight_pane_cp20

0x6cac,	// (0x00015705) list_single_2graphic_pane_g1_cp4

0x5d90,	// (0x000147e9) list_single_2graphic_pane_g2_cp4

0x6cb4,	// (0x0001570d) list_single_2graphic_pane_t1_cp4

0x23e5,	// (0x00010e3e) list_highlight_pane_cp21

0x6cc3,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp

0x6cd2,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp

0x6ce7,	// (0x00015740) form2_mdip_string_pane_t1_ParamLimits

0x6ce7,	// (0x00015740) form2_mdip_string_pane_t1

0x2305,	// (0x00010d5e) bg_wml_button_pane_cp2

0x221e,	// (0x00010c77) form2_midp_image_pane_g1

0xbe83,	// (0x0001a8dc) list_double_large_graphic_pane_g5_ParamLimits

0xbe83,	// (0x0001a8dc) list_double_large_graphic_pane_g5

0x3ebd,	// (0x00012916) midp_form_pane_ParamLimits

0x23e5,	// (0x00010e3e) main_apps_wheel_pane_ParamLimits

0xd73f,	// (0x0001c198) popup_preview_window_ParamLimits

0xd73f,	// (0x0001c198) popup_preview_window

0xd8ba,	// (0x0001c313) popup_touch_info_window_ParamLimits

0xd8ba,	// (0x0001c313) popup_touch_info_window

0xd8d8,	// (0x0001c331) popup_touch_menu_window_ParamLimits

0xd8d8,	// (0x0001c331) popup_touch_menu_window

0x2214,	// (0x00010c6d) bg_popup_sub_pane_cp6

0x6d51,	// (0x000157aa) list_touch_menu_pane

0x6d59,	// (0x000157b2) list_single_touch_menu_pane_ParamLimits

0x6d59,	// (0x000157b2) list_single_touch_menu_pane

0x6d70,	// (0x000157c9) list_single_touch_menu_pane_t1

0x23e5,	// (0x00010e3e) bg_popup_sub_pane_cp7_ParamLimits

0x23e5,	// (0x00010e3e) bg_popup_sub_pane_cp7

0x6d7e,	// (0x000157d7) heading_sub_pane

0x6d86,	// (0x000157df) list_touch_info_pane_ParamLimits

0x6d86,	// (0x000157df) list_touch_info_pane

0x6d95,	// (0x000157ee) list_single_touch_info_pane_ParamLimits

0x6d95,	// (0x000157ee) list_single_touch_info_pane

0x6da6,	// (0x000157ff) list_single_touch_info_pane_t1

0x6db4,	// (0x0001580d) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001e55d) list_single_touch_info_pane_t

0x3eb5,	// (0x0001290e) bg_popup_heading_pane_cp

0x6dc2,	// (0x0001581b) heading_sub_pane_t1

0x47e3,	// (0x0001323c) bg_popup_preview_window_pane_cp_ParamLimits

0x47e3,	// (0x0001323c) bg_popup_preview_window_pane_cp

0x6d7e,	// (0x000157d7) heading_preview_pane

0x6d86,	// (0x000157df) list_preview_pane_ParamLimits

0x6d86,	// (0x000157df) list_preview_pane

0x6dd0,	// (0x00015829) popup_preview_window_g1

0x6d95,	// (0x000157ee) list_single_preview_pane_ParamLimits

0x6d95,	// (0x000157ee) list_single_preview_pane

0x6dd8,	// (0x00015831) list_single_preview_pane_g1

0x6de0,	// (0x00015839) list_single_preview_pane_t1

0x6da6,	// (0x000157ff) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001e562) list_single_preview_pane_t

0x6dee,	// (0x00015847) bg_popup_heading_pane_cp2_ParamLimits

0x6dee,	// (0x00015847) bg_popup_heading_pane_cp2

0x6e04,	// (0x0001585d) heading_preview_pane_g1

0x6e0c,	// (0x00015865) heading_preview_pane_t1_ParamLimits

0x6e0c,	// (0x00015865) heading_preview_pane_t1

0x24e8,	// (0x00010f41) soft_indicator_pane_t1_ParamLimits

0x2b4b,	// (0x000115a4) scroll_pane_ParamLimits

0x36ed,	// (0x00012146) scroll_sc2_left_pane

0x36e4,	// (0x0001213d) scroll_sc2_right_pane

0x370c,	// (0x00012165) scroll_bg_pane_g1_ParamLimits

0x3721,	// (0x0001217a) scroll_bg_pane_g2_ParamLimits

0x3739,	// (0x00012192) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001e137) scroll_bg_pane_g_ParamLimits

0x370c,	// (0x00012165) scroll_handle_pane_g1_ParamLimits

0x375b,	// (0x000121b4) scroll_handle_pane_g2_ParamLimits

0x3739,	// (0x00012192) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001e13e) scroll_handle_pane_g_ParamLimits

0xd487,	// (0x0001bee0) popup_choice_list_window_ParamLimits

0xd487,	// (0x0001bee0) popup_choice_list_window

0x4623,	// (0x0001307c) choice_list_pane

0x4699,	// (0x000130f2) cell_toolbar_pane_t1

0x46c1,	// (0x0001311a) toolbar_button_pane_ParamLimits

0x5794,	// (0x000141ed) ai_gene_pane_1_t2_ParamLimits

0x5794,	// (0x000141ed) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0001e35f) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0001e35f) ai_gene_pane_1_t

0x6e29,	// (0x00015882) scroll_sc2_left_pane_g1

0x6e29,	// (0x00015882) scroll_sc2_right_pane_g1

0x4204,	// (0x00012c5d) bg_popup_sub_pane_cp10

0x6e33,	// (0x0001588c) list_choice_list_pane

0x6e4a,	// (0x000158a3) list_single_choice_list_pane_ParamLimits

0x6e4a,	// (0x000158a3) list_single_choice_list_pane

0x6e5c,	// (0x000158b5) list_single_choice_list_pane_g1

0x33db,	// (0x00011e34) list_single_choice_list_pane_t1_ParamLimits

0x33db,	// (0x00011e34) list_single_choice_list_pane_t1

0x6e64,	// (0x000158bd) choice_list_pane_g1

0x6e6c,	// (0x000158c5) choice_list_pane_t1

0x2214,	// (0x00010c6d) input_focus_pane_cp11

0x35bf,	// (0x00012018) title_pane_stacon_g2_ParamLimits

0x35bf,	// (0x00012018) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001e11d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001e11d) title_pane_stacon_g

0x3eb5,	// (0x0001290e) cursor_press_pane

0xd523,	// (0x0001bf7c) popup_fep_hwr_window_ParamLimits

0xd523,	// (0x0001bf7c) popup_fep_hwr_window

0xd57f,	// (0x0001bfd8) popup_fep_vkb_window_ParamLimits

0xd57f,	// (0x0001bfd8) popup_fep_vkb_window

0x6e7a,	// (0x000158d3) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001e58b) fep_vkb_side_pane_g_ParamLimits

0xddcb,	// (0x0001c824) fep_hwr_candidate_pane_ParamLimits

0xddcb,	// (0x0001c824) fep_hwr_candidate_pane

0xddf3,	// (0x0001c84c) fep_hwr_side_pane_ParamLimits

0xddf3,	// (0x0001c84c) fep_hwr_side_pane

0xde13,	// (0x0001c86c) fep_hwr_top_pane_ParamLimits

0xde13,	// (0x0001c86c) fep_hwr_top_pane

0xde2b,	// (0x0001c884) fep_hwr_write_pane_ParamLimits

0xde2b,	// (0x0001c884) fep_hwr_write_pane

0xfb32,	// (0x0001e58b) fep_vkb_side_pane_g

0x6e94,	// (0x000158ed) fep_hwr_top_pane_g1

0x6e82,	// (0x000158db) fep_hwr_top_pane_g2

0xde57,	// (0x0001c8b0) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001e567) fep_hwr_top_pane_g

0xde6c,	// (0x0001c8c5) fep_hwr_top_text_pane

0x38b0,	// (0x00012309) fep_hwr_top_text_pane_g1

0x6eca,	// (0x00015923) fep_hwr_top_text_pane_t1

0xdf5a,	// (0x0001c9b3) fep_hwr_candidate_pane_g1

0x70da,	// (0x00015b33) fep_vkb_keypad_pane_g3_ParamLimits

0x70da,	// (0x00015b33) fep_vkb_keypad_pane_g3

0x70fc,	// (0x00015b55) fep_vkb_keypad_pane_g4_ParamLimits

0x70fc,	// (0x00015b55) fep_vkb_keypad_pane_g4

0x716b,	// (0x00015bc4) fep_vkb_bottom_pane_g2_ParamLimits

0x716b,	// (0x00015bc4) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001e592) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001e592) fep_vkb_bottom_pane_g

0x6e29,	// (0x00015882) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001e59c) cell_vkb_side_pane_g

0x71f6,	// (0x00015c4f) cell_vkb_side_pane_t1

0x7204,	// (0x00015c5d) cell_vkb_side_pane_t1_copy1

0x6e29,	// (0x00015882) bg_fep_vkb_candidate_pane_g2

0x7328,	// (0x00015d81) cell_vkb_candidate_pane_ParamLimits

0x6ed8,	// (0x00015931) aid_size_cell_vkb_ParamLimits

0x6ed8,	// (0x00015931) aid_size_cell_vkb

0x7328,	// (0x00015d81) cell_vkb_candidate_pane

0xdf74,	// (0x0001c9cd) bg_popup_fep_shadow_pane_g1

0x6f4e,	// (0x000159a7) fep_vkb_bottom_pane_ParamLimits

0x6f4e,	// (0x000159a7) fep_vkb_bottom_pane

0x6f8b,	// (0x000159e4) fep_vkb_candidate_pane_ParamLimits

0x6f8b,	// (0x000159e4) fep_vkb_candidate_pane

0x6fa7,	// (0x00015a00) fep_vkb_keypad_pane_ParamLimits

0x6fa7,	// (0x00015a00) fep_vkb_keypad_pane

0x6fdb,	// (0x00015a34) fep_vkb_side_pane_ParamLimits

0x6fdb,	// (0x00015a34) fep_vkb_side_pane

0x7007,	// (0x00015a60) fep_vkb_top_pane_ParamLimits

0x7007,	// (0x00015a60) fep_vkb_top_pane

0x7033,	// (0x00015a8c) fep_vkb_top_pane_g1_ParamLimits

0x7033,	// (0x00015a8c) fep_vkb_top_pane_g1

0x7042,	// (0x00015a9b) fep_vkb_top_pane_g2_ParamLimits

0x7042,	// (0x00015a9b) fep_vkb_top_pane_g2

0x7051,	// (0x00015aaa) fep_vkb_top_pane_g3_ParamLimits

0x7051,	// (0x00015aaa) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001e582) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001e582) fep_vkb_top_pane_g

0x706f,	// (0x00015ac8) fep_vkb_top_text_pane_ParamLimits

0x706f,	// (0x00015ac8) fep_vkb_top_text_pane

0x7080,	// (0x00015ad9) fep_vkb_side_pane_g1_ParamLimits

0x7080,	// (0x00015ad9) fep_vkb_side_pane_g1

0x70c9,	// (0x00015b22) grid_vkb_side_pane_ParamLimits

0x70c9,	// (0x00015b22) grid_vkb_side_pane

0xdf7c,	// (0x0001c9d5) bg_popup_fep_shadow_pane_g2

0xdf85,	// (0x0001c9de) bg_popup_fep_shadow_pane_g3

0xdf8d,	// (0x0001c9e6) bg_popup_fep_shadow_pane_g4

0xdf96,	// (0x0001c9ef) bg_popup_fep_shadow_pane_g5

0xdf9e,	// (0x0001c9f7) bg_popup_fep_shadow_pane_g6

0xdfa6,	// (0x0001c9ff) bg_popup_fep_shadow_pane_g7

0x3238,	// (0x00011c91) bg_popup_fep_shadow_pane_g8

0x711a,	// (0x00015b73) grid_vkb_keypad_number_pane_ParamLimits

0x711a,	// (0x00015b73) grid_vkb_keypad_number_pane

0x712a,	// (0x00015b83) grid_vkb_keypad_pane_ParamLimits

0x712a,	// (0x00015b83) grid_vkb_keypad_pane

0x7150,	// (0x00015ba9) fep_vkb_bottom_pane_g1_ParamLimits

0x7150,	// (0x00015ba9) fep_vkb_bottom_pane_g1

0x7179,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7179,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane

0x718e,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x718e,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane

0x71a3,	// (0x00015bfc) fep_vkb_top_text_pane_g1

0x71be,	// (0x00015c17) fep_vkb_top_text_pane_t1

0x71d3,	// (0x00015c2c) cell_vkb_side_pane_ParamLimits

0x71d3,	// (0x00015c2c) cell_vkb_side_pane

0x6e29,	// (0x00015882) cell_vkb_side_pane_g1

0x7212,	// (0x00015c6b) cell_vkb_keypad_pane_ParamLimits

0x7212,	// (0x00015c6b) cell_vkb_keypad_pane

0x727f,	// (0x00015cd8) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001e5af) bg_popup_fep_shadow_pane_g

0x6e29,	// (0x00015882) cell_hwr_side_pane_g1

0x6e29,	// (0x00015882) cell_hwr_side_pane_g2

0x7289,	// (0x00015ce2) cell_vkb_keypad_pane_t1

0x7297,	// (0x00015cf0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7297,	// (0x00015cf0) cell_vkb_keypad_bottom_left_pane

0x72b4,	// (0x00015d0d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x72b4,	// (0x00015d0d) cell_vkb_keypad_bottom_right_pane

0x6e29,	// (0x00015882) cell_vkb_keypad_bottom_left_pane_g1

0x6e29,	// (0x00015882) cell_vkb_keypad_bottom_right_pane_g1

0x72ed,	// (0x00015d46) cell_vkb_keypad_number_pane_ParamLimits

0x72ed,	// (0x00015d46) cell_vkb_keypad_number_pane

0x730c,	// (0x00015d65) cell_vkb_keypad_number_pane_g1

0x7316,	// (0x00015d6f) cell_vkb_keypad_number_pane_g2

0x731f,	// (0x00015d78) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001e5a1) cell_vkb_keypad_number_pane_g

0x7289,	// (0x00015ce2) cell_vkb_keypad_number_pane_t1

0x7341,	// (0x00015d9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0001e59c) cell_hwr_side_pane_g

0x735a,	// (0x00015db3) cell_hwr_side_pane_t1

0xdfb6,	// (0x0001ca0f) cell_hwr_side_pane_t1_copy1

0x7061,	// (0x00015aba) cell_hwr_candidate_pane_g1

0xdfc4,	// (0x0001ca1d) cell_hwr_candidate_pane_t1

0x6e29,	// (0x00015882) cell_vkb_candidate_pane_g2

0x739e,	// (0x00015df7) cell_vkb_candidate_pane_t1

0xdd96,	// (0x0001c7ef) bg_popup_fep_shadow_pane_ParamLimits

0xdd96,	// (0x0001c7ef) bg_popup_fep_shadow_pane

0xa8ca,	// (0x00019323) bg_fep_hwr_top_pane_g4

0x6ea6,	// (0x000158ff) bg_hwr_side_pane_g1_ParamLimits

0x6ea6,	// (0x000158ff) bg_hwr_side_pane_g1

0xdea8,	// (0x0001c901) cell_hwr_side_pane_ParamLimits

0xdea8,	// (0x0001c901) cell_hwr_side_pane

0xdee3,	// (0x0001c93c) fep_hwr_write_pane_g1_ParamLimits

0xdee3,	// (0x0001c93c) fep_hwr_write_pane_g1

0xdef0,	// (0x0001c949) fep_hwr_write_pane_g2_ParamLimits

0xdef0,	// (0x0001c949) fep_hwr_write_pane_g2

0xdefd,	// (0x0001c956) fep_hwr_write_pane_g3_ParamLimits

0xdefd,	// (0x0001c956) fep_hwr_write_pane_g3

0xdf0b,	// (0x0001c964) fep_hwr_write_pane_g4_ParamLimits

0xdf0b,	// (0x0001c964) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001e56e) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001e56e) fep_hwr_write_pane_g

0xa8ca,	// (0x00019323) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa8ca,	// (0x00019323) bg_fep_hwr_candidate_pane_g2

0xdf20,	// (0x0001c979) cell_hwr_candidate_pane_ParamLimits

0xdf20,	// (0x0001c979) cell_hwr_candidate_pane

0xdf5a,	// (0x0001c9b3) fep_hwr_candidate_pane_g1_ParamLimits

0x6f06,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6f06,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2

0x7061,	// (0x00015aba) fep_vkb_top_pane_g4_ParamLimits

0x7061,	// (0x00015aba) fep_vkb_top_pane_g4

0x70a7,	// (0x00015b00) fep_vkb_side_pane_g2_ParamLimits

0x70a7,	// (0x00015b00) fep_vkb_side_pane_g2

0xbfe5,	// (0x0001aa3e) list_setting_pane_t4_ParamLimits

0xbfe5,	// (0x0001aa3e) list_setting_pane_t4

0xc073,	// (0x0001aacc) list_setting_number_pane_t5_ParamLimits

0xc073,	// (0x0001aacc) list_setting_number_pane_t5

0x38e7,	// (0x00012340) list_double_heading_pane_cp2_ParamLimits

0x38e7,	// (0x00012340) list_double_heading_pane_cp2

0x3d2a,	// (0x00012783) list_double_heading_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_double_heading_pane_g1_cp2

0x73ac,	// (0x00015e05) list_double_heading_pane_g2_cp2_ParamLimits

0x73ac,	// (0x00015e05) list_double_heading_pane_g2_cp2

0x73c0,	// (0x00015e19) list_double_heading_pane_t1_cp2_ParamLimits

0x73c0,	// (0x00015e19) list_double_heading_pane_t1_cp2

0x73d6,	// (0x00015e2f) list_double_heading_pane_t2_cp2_ParamLimits

0x73d6,	// (0x00015e2f) list_double_heading_pane_t2_cp2

0x21fe,	// (0x00010c57) aid_value_unit2

0xcd91,	// (0x0001b7ea) popup_preview_fixed_window

0x268c,	// (0x000110e5) bg_popup_preview_window_pane_cp02

0x73e8,	// (0x00015e41) list_preview_fixed_pane

0x7470,	// (0x00015ec9) list_empty_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_empty_pane_fp

0x7470,	// (0x00015ec9) list_single_cale_day_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_cale_day_pane_fp

0x7470,	// (0x00015ec9) list_single_graphic_heading_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_graphic_heading_pane_fp

0x7470,	// (0x00015ec9) list_single_graphic_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_graphic_pane_fp

0x7470,	// (0x00015ec9) list_single_heading_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_heading_pane_fp

0x7470,	// (0x00015ec9) list_single_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_pane_fp

0x7484,	// (0x00015edd) list_single_pane_fp_g1_ParamLimits

0x7484,	// (0x00015edd) list_single_pane_fp_g1

0xbfa4,	// (0x0001a9fd) list_single_pane_fp_g2_ParamLimits

0xbfa4,	// (0x0001a9fd) list_single_pane_fp_g2

0xc866,	// (0x0001b2bf) list_single_pane_fp_g3_ParamLimits

0xc866,	// (0x0001b2bf) list_single_pane_fp_g3

0x74a4,	// (0x00015efd) list_single_pane_fp_g4_ParamLimits

0x74a4,	// (0x00015efd) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0001e5d0) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0001e5d0) list_single_pane_fp_g

0xc87a,	// (0x0001b2d3) list_single_pane_fp_t1_ParamLimits

0xc87a,	// (0x0001b2d3) list_single_pane_fp_t1

0xc891,	// (0x0001b2ea) list_single_graphic_pane_fp_g1_ParamLimits

0xc891,	// (0x0001b2ea) list_single_graphic_pane_fp_g1

0x7484,	// (0x00015edd) list_single_graphic_pane_fp_g2_ParamLimits

0x7484,	// (0x00015edd) list_single_graphic_pane_fp_g2

0xbfa4,	// (0x0001a9fd) list_single_graphic_pane_fp_g3_ParamLimits

0xbfa4,	// (0x0001a9fd) list_single_graphic_pane_fp_g3

0xc866,	// (0x0001b2bf) list_single_graphic_pane_fp_g4_ParamLimits

0xc866,	// (0x0001b2bf) list_single_graphic_pane_fp_g4

0x74a4,	// (0x00015efd) list_single_graphic_pane_fp_g5_ParamLimits

0x74a4,	// (0x00015efd) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e5d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e5d9) list_single_graphic_pane_fp_g

0xc89d,	// (0x0001b2f6) list_single_graphic_pane_fp_t1_ParamLimits

0xc89d,	// (0x0001b2f6) list_single_graphic_pane_fp_t1

0xc891,	// (0x0001b2ea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc891,	// (0x0001b2ea) list_single_graphic_heading_pane_fp_g1

0x7484,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7484,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2

0xbfa4,	// (0x0001a9fd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbfa4,	// (0x0001a9fd) list_single_graphic_heading_pane_fp_g3

0xc866,	// (0x0001b2bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc866,	// (0x0001b2bf) list_single_graphic_heading_pane_fp_g4

0x74a4,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x74a4,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e5d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e5d9) list_single_graphic_heading_pane_fp_g

0xc8b3,	// (0x0001b30c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc8b3,	// (0x0001b30c) list_single_graphic_heading_pane_fp_t1

0xc8c9,	// (0x0001b322) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc8c9,	// (0x0001b322) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001e5e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0001e5e4) list_single_graphic_heading_pane_fp_t

0xc8db,	// (0x0001b334) list_single_cale_day_pane_fp_g1_ParamLimits

0xc8db,	// (0x0001b334) list_single_cale_day_pane_fp_g1

0x7549,	// (0x00015fa2) list_single_cale_day_pane_fp_g2_ParamLimits

0x7549,	// (0x00015fa2) list_single_cale_day_pane_fp_g2

0xc913,	// (0x0001b36c) list_single_cale_day_pane_fp_g3_ParamLimits

0xc913,	// (0x0001b36c) list_single_cale_day_pane_fp_g3

0xc93b,	// (0x0001b394) list_single_cale_day_pane_fp_g4_ParamLimits

0xc93b,	// (0x0001b394) list_single_cale_day_pane_fp_g4

0xc95f,	// (0x0001b3b8) list_single_cale_day_pane_fp_g5_ParamLimits

0xc95f,	// (0x0001b3b8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0001e5e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0001e5e9) list_single_cale_day_pane_fp_g

0xc983,	// (0x0001b3dc) list_single_cale_day_pane_fp_t1_ParamLimits

0xc983,	// (0x0001b3dc) list_single_cale_day_pane_fp_t1

0xc9a9,	// (0x0001b402) list_single_cale_day_pane_fp_t2_ParamLimits

0xc9a9,	// (0x0001b402) list_single_cale_day_pane_fp_t2

0xc9c2,	// (0x0001b41b) list_single_cale_day_pane_fp_t3_ParamLimits

0xc9c2,	// (0x0001b41b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0001e5f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0001e5f4) list_single_cale_day_pane_fp_t

0x7484,	// (0x00015edd) list_empty_pane_fp_g1_ParamLimits

0x7484,	// (0x00015edd) list_empty_pane_fp_g1

0xc9db,	// (0x0001b434) list_empty_pane_fp_t1

0xc9e9,	// (0x0001b442) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0001e5fb) list_empty_pane_fp_t

0x7484,	// (0x00015edd) list_single_heading_pane_fp_g1_ParamLimits

0x7484,	// (0x00015edd) list_single_heading_pane_fp_g1

0xbfa4,	// (0x0001a9fd) list_single_heading_pane_fp_g2_ParamLimits

0xbfa4,	// (0x0001a9fd) list_single_heading_pane_fp_g2

0xc866,	// (0x0001b2bf) list_single_heading_pane_fp_g3_ParamLimits

0xc866,	// (0x0001b2bf) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0001e600) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0001e600) list_single_heading_pane_fp_g

0xc9f7,	// (0x0001b450) list_single_heading_pane_fp_t1_ParamLimits

0xc9f7,	// (0x0001b450) list_single_heading_pane_fp_t1

0xca09,	// (0x0001b462) list_single_heading_pane_fp_t2_ParamLimits

0xca09,	// (0x0001b462) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0001e607) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0001e607) list_single_heading_pane_fp_t

0x3449,	// (0x00011ea2) aid_size_cell_fast

0x25f3,	// (0x0001104c) soft_indicator_pane_cp1_t1

0x3486,	// (0x00011edf) cell_app_pane_cp2_ParamLimits

0x3486,	// (0x00011edf) cell_app_pane_cp2

0xddb8,	// (0x0001c811) fep_hwr_candidate_drop_down_list_pane

0xa951,	// (0x000193aa) fep_hwr_candidate_pane_g3_ParamLimits

0xa951,	// (0x000193aa) fep_hwr_candidate_pane_g3

0xa95e,	// (0x000193b7) fep_hwr_candidate_pane_g4_ParamLimits

0xa95e,	// (0x000193b7) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001e57b) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001e57b) fep_hwr_candidate_pane_g

0x6f7a,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6f7a,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane

0x7349,	// (0x00015da2) fep_vkb_candidate_pane_g3

0x7351,	// (0x00015daa) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001e5a8) fep_vkb_candidate_pane_g

0x7061,	// (0x00015aba) cell_hwr_candidate_pane_g1_ParamLimits

0x740a,	// (0x00015e63) cell_hwr_candidate_pane_g3_ParamLimits

0x740a,	// (0x00015e63) cell_hwr_candidate_pane_g3

0x742b,	// (0x00015e84) cell_hwr_candidate_pane_g4_ParamLimits

0x742b,	// (0x00015e84) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001e5c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0001e5c2) cell_hwr_candidate_pane_g

0x7368,	// (0x00015dc1) cell_vkb_candidate_pane_g3_ParamLimits

0x7368,	// (0x00015dc1) cell_vkb_candidate_pane_g3

0x7383,	// (0x00015ddc) cell_vkb_candidate_pane_g4_ParamLimits

0x7383,	// (0x00015ddc) cell_vkb_candidate_pane_g4

0x7661,	// (0x000160ba) cell_app_pane_cp2_g1_ParamLimits

0x7661,	// (0x000160ba) cell_app_pane_cp2_g1

0x767f,	// (0x000160d8) cell_app_pane_cp2_g2_ParamLimits

0x767f,	// (0x000160d8) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0001e60c) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0001e60c) cell_app_pane_cp2_g

0x768b,	// (0x000160e4) cell_app_pane_cp2_t1_ParamLimits

0x768b,	// (0x000160e4) cell_app_pane_cp2_t1

0x30f5,	// (0x00011b4e) grid_highlight_pane_cp1_ParamLimits

0x30f5,	// (0x00011b4e) grid_highlight_pane_cp1

0xdfe1,	// (0x0001ca3a) cell_hwr_candidate_pane_cp1_ParamLimits

0xdfe1,	// (0x0001ca3a) cell_hwr_candidate_pane_cp1

0x7061,	// (0x00015aba) fep_hwr_candidate_drop_down_list_pane_g1

0x769d,	// (0x000160f6) fep_hwr_candidate_drop_down_list_pane_g2

0x76aa,	// (0x00016103) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0001e611) fep_hwr_candidate_drop_down_list_pane_g

0xdfff,	// (0x0001ca58) fep_hwr_candidate_drop_down_list_scroll_pane

0xe008,	// (0x0001ca61) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe008,	// (0x0001ca61) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe015,	// (0x0001ca6e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe015,	// (0x0001ca6e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe022,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe022,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7368,	// (0x00015dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7368,	// (0x00015dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7383,	// (0x00015ddc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7383,	// (0x00015ddc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe02f,	// (0x0001ca88) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe02f,	// (0x0001ca88) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe04a,	// (0x0001caa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe04a,	// (0x0001caa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe065,	// (0x0001cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe065,	// (0x0001cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0001e618) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0001e618) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x76b7,	// (0x00016110) cell_vkb_candidate_pane_cp1_ParamLimits

0x76b7,	// (0x00016110) cell_vkb_candidate_pane_cp1

0x7061,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7061,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1

0x769d,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x769d,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2

0x76aa,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x76aa,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0001e611) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0001e611) fep_vkb_candidate_drop_down_list_pane_g

0x76da,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x76da,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane

0x76e7,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x76e7,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x76f4,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x76f4,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7700,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7700,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x740a,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x740a,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x742b,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x742b,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x770c,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x770c,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x772d,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x772d,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x774e,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x774e,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0001e629) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0001e629) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x230f,	// (0x00010d68) title_pane_g1_ParamLimits

0x231c,	// (0x00010d75) title_pane_g2_ParamLimits

0xf54e,	// (0x0001dfa7) title_pane_g_ParamLimits

0x38a8,	// (0x00012301) aid_call2_pane

0x38a0,	// (0x000122f9) aid_call_pane

0x38b0,	// (0x00012309) popup_clock_analogue_window_g1

0x38b0,	// (0x00012309) popup_clock_analogue_window_g2

0xd06b,	// (0x0001bac4) popup_clock_analogue_window_g3

0xd074,	// (0x0001bacd) popup_clock_analogue_window_g4

0x221e,	// (0x00010c77) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001e14c) popup_clock_analogue_window_g

0xd07c,	// (0x0001bad5) popup_clock_analogue_window_t1

0xd08a,	// (0x0001bae3) clock_digital_number_pane_ParamLimits

0xd08a,	// (0x0001bae3) clock_digital_number_pane

0xd096,	// (0x0001baef) clock_digital_number_pane_cp02_ParamLimits

0xd096,	// (0x0001baef) clock_digital_number_pane_cp02

0xd0a2,	// (0x0001bafb) clock_digital_number_pane_cp03_ParamLimits

0xd0a2,	// (0x0001bafb) clock_digital_number_pane_cp03

0xd0ae,	// (0x0001bb07) clock_digital_number_pane_cp04_ParamLimits

0xd0ae,	// (0x0001bb07) clock_digital_number_pane_cp04

0xd0ba,	// (0x0001bb13) clock_digital_separator_pane_ParamLimits

0xd0ba,	// (0x0001bb13) clock_digital_separator_pane

0xd0c6,	// (0x0001bb1f) popup_clock_digital_window_t1_ParamLimits

0xd0c6,	// (0x0001bb1f) popup_clock_digital_window_t1

0x221e,	// (0x00010c77) clock_digital_number_pane_g1

0x221e,	// (0x00010c77) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001e157) clock_digital_number_pane_g

0x221e,	// (0x00010c77) clock_digital_separator_pane_g1

0x221e,	// (0x00010c77) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001e157) clock_digital_separator_pane_g

0x422e,	// (0x00012c87) aid_fill_nsta_ParamLimits

0x4350,	// (0x00012da9) indicator_nsta_pane_ParamLimits

0x44c3,	// (0x00012f1c) popup_clock_analogue_window

0x44c3,	// (0x00012f1c) popup_clock_digital_window

0x23e5,	// (0x00010e3e) grid_indicator_nsta_pane_ParamLimits

0x68b1,	// (0x0001530a) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001e4fb) clock_nsta_pane_t

0xd02f,	// (0x0001ba88) aid_size_max_handle

0xd039,	// (0x0001ba92) aid_size_min_handle

0x3eb5,	// (0x0001290e) editor_scroll_pane

0x7769,	// (0x000161c2) ex_editor_pane

0x33b9,	// (0x00011e12) scroll_pane_cp13

0x2b78,	// (0x000115d1) scroll_pane_cp14

0x38df,	// (0x00012338) scroll_pane_cp36

0x38f7,	// (0x00012350) list_single_graphic_hl_pane_cp2_ParamLimits

0x38f7,	// (0x00012350) list_single_graphic_hl_pane_cp2

0x5cd3,	// (0x0001472c) list_single_graphic_hl_pane_ParamLimits

0x5cd3,	// (0x0001472c) list_single_graphic_hl_pane

0xca1f,	// (0x0001b478) aid_size_min_hl_cp1

0x777a,	// (0x000161d3) list_highlight_pane_cp34_ParamLimits

0x777a,	// (0x000161d3) list_highlight_pane_cp34

0x778b,	// (0x000161e4) list_single_graphic_hl_pane_g1_ParamLimits

0x778b,	// (0x000161e4) list_single_graphic_hl_pane_g1

0xca28,	// (0x0001b481) list_single_graphic_hl_pane_g2_ParamLimits

0xca28,	// (0x0001b481) list_single_graphic_hl_pane_g2

0xca28,	// (0x0001b481) list_single_graphic_hl_pane_g3_ParamLimits

0xca28,	// (0x0001b481) list_single_graphic_hl_pane_g3

0xc36b,	// (0x0001adc4) list_single_graphic_hl_pane_g4_ParamLimits

0xc36b,	// (0x0001adc4) list_single_graphic_hl_pane_g4

0xca34,	// (0x0001b48d) list_single_graphic_hl_pane_g5_ParamLimits

0xca34,	// (0x0001b48d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0001e63a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0001e63a) list_single_graphic_hl_pane_g

0xca48,	// (0x0001b4a1) list_single_graphic_hl_pane_t1_ParamLimits

0xca48,	// (0x0001b4a1) list_single_graphic_hl_pane_t1

0x77ba,	// (0x00016213) aid_size_min_hl_cp2

0x77c3,	// (0x0001621c) list_highlight_pane_cp34_cp2_ParamLimits

0x77c3,	// (0x0001621c) list_highlight_pane_cp34_cp2

0x778b,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x778b,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2

0x77d0,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x77d0,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2

0x77dc,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x77dc,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2

0x3d2a,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3d2a,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2

0x73ac,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x73ac,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2

0xd351,	// (0x0001bdaa) control_pane_g4_ParamLimits

0xd351,	// (0x0001bdaa) control_pane_g4

0x4204,	// (0x00012c5d) bg_popup_sub_pane_cp10_ParamLimits

0x6e33,	// (0x0001588c) list_choice_list_pane_ParamLimits

0x6e42,	// (0x0001589b) scroll_pane_cp23

0x268c,	// (0x000110e5) bg_popup_preview_window_pane_cp02_ParamLimits

0x73e8,	// (0x00015e41) list_preview_fixed_pane_ParamLimits

0x73fe,	// (0x00015e57) list_preview_fixed_pane_cp_ParamLimits

0x73fe,	// (0x00015e57) list_preview_fixed_pane_cp

0x744c,	// (0x00015ea5) popup_preview_fixed_window_g1_ParamLimits

0x744c,	// (0x00015ea5) popup_preview_fixed_window_g1

0x7458,	// (0x00015eb1) popup_preview_fixed_window_g2_ParamLimits

0x7458,	// (0x00015eb1) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0001e5c9) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0001e5c9) popup_preview_fixed_window_g

0xcfbf,	// (0x0001ba18) aid_navi_side_left_pane_ParamLimits

0xcfcf,	// (0x0001ba28) aid_navi_side_right_pane_ParamLimits

0xcfde,	// (0x0001ba37) navi_icon_pane_stacon_ParamLimits

0xcfee,	// (0x0001ba47) navi_navi_pane_stacon_ParamLimits

0xcfde,	// (0x0001ba37) navi_text_pane_stacon_ParamLimits

0x2214,	// (0x00010c6d) main_text_info_pane

0x77fe,	// (0x00016257) listscroll_text_info_pane

0x7806,	// (0x0001625f) list_text_info_pane_ParamLimits

0x7806,	// (0x0001625f) list_text_info_pane

0x7815,	// (0x0001626e) scroll_pane_cp24_ParamLimits

0x7815,	// (0x0001626e) scroll_pane_cp24

0x7833,	// (0x0001628c) list_text_info_pane_t1_ParamLimits

0x7833,	// (0x0001628c) list_text_info_pane_t1

0xd4a1,	// (0x0001befa) popup_fast_swap2_window_ParamLimits

0xd4a1,	// (0x0001befa) popup_fast_swap2_window

0x7850,	// (0x000162a9) aid_size_cell_fast2

0x2214,	// (0x00010c6d) bg_popup_window_pane_cp17

0x4b9d,	// (0x000135f6) heading_pane_cp2

0x28fa,	// (0x00011353) listscroll_fast2_pane

0x785a,	// (0x000162b3) grid_fast2_pane

0x7862,	// (0x000162bb) listscroll_fast2_pane_g1

0x786a,	// (0x000162c3) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0001e645) listscroll_fast2_pane_g

0x33b9,	// (0x00011e12) scroll_pane_cp26

0x7872,	// (0x000162cb) cell_fast2_pane_ParamLimits

0x7872,	// (0x000162cb) cell_fast2_pane

0x7888,	// (0x000162e1) cell_fast2_pane_g1

0x7891,	// (0x000162ea) cell_fast2_pane_g2

0x789a,	// (0x000162f3) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0001e64a) cell_fast2_pane_g

0x29d1,	// (0x0001142a) grid_highlight_pane_cp9

0x29e6,	// (0x0001143f) main_eswt_pane_ParamLimits

0x29e6,	// (0x0001143f) main_eswt_pane

0x782a,	// (0x00016283) list_single_text_info_pane

0x78a2,	// (0x000162fb) eswt_ctrl_button_pane

0x78a2,	// (0x000162fb) eswt_ctrl_canvas_pane

0x78aa,	// (0x00016303) eswt_ctrl_combo_pane

0x78a2,	// (0x000162fb) eswt_ctrl_default_pane

0x78a2,	// (0x000162fb) eswt_ctrl_label_pane

0x78b2,	// (0x0001630b) eswt_ctrl_wait_pane

0x78ba,	// (0x00016313) eswt_shell_pane

0x2214,	// (0x00010c6d) listscroll_eswt_app_pane

0x78d6,	// (0x0001632f) popup_eswt_tasktip_window_ParamLimits

0x78d6,	// (0x0001632f) popup_eswt_tasktip_window

0x47e3,	// (0x0001323c) bg_popup_window_pane_cp18

0x78e7,	// (0x00016340) eswt_control_pane_g1_ParamLimits

0x78e7,	// (0x00016340) eswt_control_pane_g1

0x78f4,	// (0x0001634d) eswt_control_pane_g2_ParamLimits

0x78f4,	// (0x0001634d) eswt_control_pane_g2

0x7901,	// (0x0001635a) eswt_control_pane_g3_ParamLimits

0x7901,	// (0x0001635a) eswt_control_pane_g3

0x790e,	// (0x00016367) eswt_control_pane_g4_ParamLimits

0x790e,	// (0x00016367) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0001e651) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0001e651) eswt_control_pane_g

0x30f5,	// (0x00011b4e) bg_button_pane_ParamLimits

0x30f5,	// (0x00011b4e) bg_button_pane

0x29e6,	// (0x0001143f) common_borders_pane_copy2_ParamLimits

0x29e6,	// (0x0001143f) common_borders_pane_copy2

0x791b,	// (0x00016374) control_button_pane_g1_ParamLimits

0x791b,	// (0x00016374) control_button_pane_g1

0x7927,	// (0x00016380) control_button_pane_g2_ParamLimits

0x7927,	// (0x00016380) control_button_pane_g2

0x7933,	// (0x0001638c) control_button_pane_g3_ParamLimits

0x7933,	// (0x0001638c) control_button_pane_g3

0x0002,

0xfc01,	// (0x0001e65a) control_button_pane_g_ParamLimits

0xfc01,	// (0x0001e65a) control_button_pane_g

0x7947,	// (0x000163a0) control_button_pane_t1

0x7955,	// (0x000163ae) control_button_pane_t2

0x0001,

0xfc08,	// (0x0001e661) control_button_pane_t

0x46cd,	// (0x00013126) bg_button_pane_g1

0x46dd,	// (0x00013136) bg_button_pane_g2

0x46d5,	// (0x0001312e) bg_button_pane_g3

0x46ed,	// (0x00013146) bg_button_pane_g4

0x46e5,	// (0x0001313e) bg_button_pane_g5

0x46f5,	// (0x0001314e) bg_button_pane_g6

0x46fd,	// (0x00013156) bg_button_pane_g7

0x470d,	// (0x00013166) bg_button_pane_g8

0x4705,	// (0x0001315e) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0001e2b3) bg_button_pane_g

0x6dee,	// (0x00015847) common_borders_pane_ParamLimits

0x6dee,	// (0x00015847) common_borders_pane

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy1_ParamLimits

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy1

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy1_ParamLimits

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy1

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy1_ParamLimits

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy1

0x790e,	// (0x00016367) eswt_control_pane_g4_copy1_ParamLimits

0x790e,	// (0x00016367) eswt_control_pane_g4_copy1

0x6e29,	// (0x00015882) bg_eswt_ctrl_canvas_pane_g1

0x6dee,	// (0x00015847) common_borders_pane_cp2_ParamLimits

0x6dee,	// (0x00015847) common_borders_pane_cp2

0x6dee,	// (0x00015847) common_borders_pane_cp3_ParamLimits

0x6dee,	// (0x00015847) common_borders_pane_cp3

0x7963,	// (0x000163bc) separator_horizontal_pane

0x36ed,	// (0x00012146) separator_vertical_pane

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy2_ParamLimits

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy2

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy2_ParamLimits

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy2

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy2_ParamLimits

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy2

0x790e,	// (0x00016367) eswt_control_pane_g4_copy2_ParamLimits

0x790e,	// (0x00016367) eswt_control_pane_g4_copy2

0x2214,	// (0x00010c6d) common_borders_pane_cp4

0x796b,	// (0x000163c4) separator_horizontal_pane_g1

0x7974,	// (0x000163cd) separator_horizontal_pane_g2

0x797d,	// (0x000163d6) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0001e666) separator_horizontal_pane_g

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy3_ParamLimits

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy3

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy3_ParamLimits

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy3

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy3_ParamLimits

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy3

0x790e,	// (0x00016367) eswt_control_pane_g4_copy3_ParamLimits

0x790e,	// (0x00016367) eswt_control_pane_g4_copy3

0x2214,	// (0x00010c6d) common_borders_pane_cp5

0x7986,	// (0x000163df) separator_vertical_pane_g1

0x798f,	// (0x000163e8) separator_vertical_pane_g2

0x7998,	// (0x000163f1) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0001e66d) separator_vertical_pane_g

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy4_ParamLimits

0x78e7,	// (0x00016340) eswt_control_pane_g1_copy4

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy4_ParamLimits

0x78f4,	// (0x0001634d) eswt_control_pane_g2_copy4

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy4_ParamLimits

0x7901,	// (0x0001635a) eswt_control_pane_g3_copy4

0x790e,	// (0x00016367) eswt_control_pane_g4_copy4_ParamLimits

0x790e,	// (0x00016367) eswt_control_pane_g4_copy4

0x79a1,	// (0x000163fa) eswt_ctrl_combo_button_pane

0x79a9,	// (0x00016402) eswt_ctrl_input_pane

0x79b1,	// (0x0001640a) popup_choice_list_window_cp70

0x79b9,	// (0x00016412) eswt_ctrl_input_pane_t1

0x2214,	// (0x00010c6d) input_focus_pane_cp70

0x6dee,	// (0x00015847) bg_button_pane_cp70_ParamLimits

0x6dee,	// (0x00015847) bg_button_pane_cp70

0x79c7,	// (0x00016420) eswt_ctrl_combo_button_pane_g1

0x79cf,	// (0x00016428) wait_bar_pane_cp70

0x47e3,	// (0x0001323c) bg_popup_window_pane_cp70_ParamLimits

0x47e3,	// (0x0001323c) bg_popup_window_pane_cp70

0x79d7,	// (0x00016430) popup_eswt_tasktip_window_t1

0x79ed,	// (0x00016446) wait_bar_pane_cp71_ParamLimits

0x79ed,	// (0x00016446) wait_bar_pane_cp71

0x79f9,	// (0x00016452) grid_eswt_app_pane

0x36e4,	// (0x0001213d) scroll_pane_cp70

0x7a02,	// (0x0001645b) cell_eswt_app_pane_ParamLimits

0x7a02,	// (0x0001645b) cell_eswt_app_pane

0x7a2a,	// (0x00016483) cell_eswt_app_pane_g1_ParamLimits

0x7a2a,	// (0x00016483) cell_eswt_app_pane_g1

0x7a59,	// (0x000164b2) cell_eswt_app_pane_g2_ParamLimits

0x7a59,	// (0x000164b2) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0001e674) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0001e674) cell_eswt_app_pane_g

0x7a82,	// (0x000164db) cell_eswt_app_pane_t1_ParamLimits

0x7a82,	// (0x000164db) cell_eswt_app_pane_t1

0x7ab4,	// (0x0001650d) grid_highlight_pane_cp70_ParamLimits

0x7ab4,	// (0x0001650d) grid_highlight_pane_cp70

0x2b8c,	// (0x000115e5) set_content_pane_g1

0x4150,	// (0x00012ba9) status_small_volume_pane

0xe080,	// (0x0001cad9) status_small_volume_pane_g1

0xe088,	// (0x0001cae1) volume_small2_pane

0xe091,	// (0x0001caea) volume_small2_pane_g1

0xe09a,	// (0x0001caf3) volume_small2_pane_g2

0xe0a3,	// (0x0001cafc) volume_small2_pane_g3

0xe0ac,	// (0x0001cb05) volume_small2_pane_g4

0xe0b5,	// (0x0001cb0e) volume_small2_pane_g5

0xe0be,	// (0x0001cb17) volume_small2_pane_g6

0xe0c7,	// (0x0001cb20) volume_small2_pane_g7

0xe0d0,	// (0x0001cb29) volume_small2_pane_g8

0xe0d9,	// (0x0001cb32) volume_small2_pane_g9

0xe0e2,	// (0x0001cb3b) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0001e679) volume_small2_pane_g

0x71a3,	// (0x00015bfc) fep_vkb_top_text_pane_g1_ParamLimits

0x71be,	// (0x00015c17) fep_vkb_top_text_pane_t1_ParamLimits

0x7464,	// (0x00015ebd) popup_preview_fixed_window_g3_ParamLimits

0x7464,	// (0x00015ebd) popup_preview_fixed_window_g3

0xd863,	// (0x0001c2bc) popup_toolbar_trans_pane

0x5a7b,	// (0x000144d4) aid_height_set_list_ParamLimits

0x5a87,	// (0x000144e0) aid_size_parent_ParamLimits

0x4204,	// (0x00012c5d) list_highlight_pane_cp2_ParamLimits

0x2b8c,	// (0x000115e5) set_content_pane_g1_ParamLimits

0x5ce8,	// (0x00014741) list_single_image_pane_ParamLimits

0x5ce8,	// (0x00014741) list_single_image_pane

0x7ac0,	// (0x00016519) aid_size_cell_image_ParamLimits

0x7ac0,	// (0x00016519) aid_size_cell_image

0x7acd,	// (0x00016526) grid_single_image_pane_ParamLimits

0x7acd,	// (0x00016526) grid_single_image_pane

0x2b8c,	// (0x000115e5) list_single_image_pane_g1_ParamLimits

0x2b8c,	// (0x000115e5) list_single_image_pane_g1

0x311b,	// (0x00011b74) list_single_image_pane_g2_ParamLimits

0x311b,	// (0x00011b74) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0001e68e) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0001e68e) list_single_image_pane_g

0x5c0a,	// (0x00014663) list_single_image_pane_t1_ParamLimits

0x5c0a,	// (0x00014663) list_single_image_pane_t1

0x7ad9,	// (0x00016532) cell_image_list_pane_ParamLimits

0x7ad9,	// (0x00016532) cell_image_list_pane

0x7aec,	// (0x00016545) cell_image_list_pane_g1

0x7af5,	// (0x0001654e) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0001e693) cell_image_list_pane_g

0x7afe,	// (0x00016557) aid_size_cell_tb_trans_pane

0x30f5,	// (0x00011b4e) bg_tb_trans_pane

0x7b10,	// (0x00016569) grid_tb_trans_pane

0x46cd,	// (0x00013126) bg_tb_trans_pane_g1

0x46dd,	// (0x00013136) bg_tb_trans_pane_g2

0x46d5,	// (0x0001312e) bg_tb_trans_pane_g3

0x46ed,	// (0x00013146) bg_tb_trans_pane_g4

0x46e5,	// (0x0001313e) bg_tb_trans_pane_g5

0x470d,	// (0x00013166) bg_tb_trans_pane_g6

0x4705,	// (0x0001315e) bg_tb_trans_pane_g7

0x46f5,	// (0x0001314e) bg_tb_trans_pane_g8

0x46fd,	// (0x00013156) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0001e698) bg_tb_trans_pane_g

0x7b24,	// (0x0001657d) cell_toolbar_trans_pane_ParamLimits

0x7b24,	// (0x0001657d) cell_toolbar_trans_pane

0x6e29,	// (0x00015882) cell_toolbar_trans_pane_g1

0x6a72,	// (0x000154cb) list_form2_midp_pane_t1

0x6a80,	// (0x000154d9) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001e541) list_form2_midp_pane_t

0x6a8e,	// (0x000154e7) scroll_pane_cp51_ParamLimits

0x6c73,	// (0x000156cc) form2_midp_wait_pane_g1

0x6c7c,	// (0x000156d5) form2_midp_wait_pane_g2

0x6c85,	// (0x000156de) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001e556) form2_midp_wait_pane_g

0x23e5,	// (0x00010e3e) list_highlight_pane_cp21_ParamLimits

0x6cc3,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6cd2,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc512,	// (0x0001af6b) list_single_2graphic_im_pane_ParamLimits

0xc512,	// (0x0001af6b) list_single_2graphic_im_pane

0x7b4a,	// (0x000165a3) list_single_2graphic_im_pane_g1_ParamLimits

0x7b4a,	// (0x000165a3) list_single_2graphic_im_pane_g1

0x7b5b,	// (0x000165b4) list_single_2graphic_im_pane_g2_ParamLimits

0x7b5b,	// (0x000165b4) list_single_2graphic_im_pane_g2

0x7b67,	// (0x000165c0) list_single_2graphic_im_pane_g3_ParamLimits

0x7b67,	// (0x000165c0) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0001e6ab) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0001e6ab) list_single_2graphic_im_pane_g

0x7b87,	// (0x000165e0) list_single_2graphic_im_pane_t1_ParamLimits

0x7b87,	// (0x000165e0) list_single_2graphic_im_pane_t1

0x7470,	// (0x00015ec9) list_single_graphic_2heading_pane_fp_ParamLimits

0x7470,	// (0x00015ec9) list_single_graphic_2heading_pane_fp

0xc891,	// (0x0001b2ea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc891,	// (0x0001b2ea) list_single_graphic_2heading_pane_fp_g1

0x7484,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7484,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2

0xbfa4,	// (0x0001a9fd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbfa4,	// (0x0001a9fd) list_single_graphic_2heading_pane_fp_g3

0xc866,	// (0x0001b2bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc866,	// (0x0001b2bf) list_single_graphic_2heading_pane_fp_g4

0x74a4,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x74a4,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0001e5d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e5d9) list_single_graphic_2heading_pane_fp_g

0xca5e,	// (0x0001b4b7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xca5e,	// (0x0001b4b7) list_single_graphic_2heading_pane_fp_t1

0xc8c9,	// (0x0001b322) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc8c9,	// (0x0001b322) list_single_graphic_2heading_pane_fp_t2

0xca74,	// (0x0001b4cd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xca74,	// (0x0001b4cd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0001e6b4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0001e6b4) list_single_graphic_2heading_pane_fp_t

0x6eb2,	// (0x0001590b) fep_hwr_write_pane_g5_ParamLimits

0x6eb2,	// (0x0001590b) fep_hwr_write_pane_g5

0x6ebe,	// (0x00015917) fep_hwr_write_pane_g6_ParamLimits

0x6ebe,	// (0x00015917) fep_hwr_write_pane_g6

0x78ba,	// (0x00016313) eswt_shell_pane_ParamLimits

0x47e3,	// (0x0001323c) bg_popup_window_pane_cp18_ParamLimits

0x59ed,	// (0x00014446) heading_pane_cp70

0x79d7,	// (0x00016430) popup_eswt_tasktip_window_t1_ParamLimits

0x4270,	// (0x00012cc9) aid_touch_tab_arrow_left

0x427c,	// (0x00012cd5) aid_touch_tab_arrow_right

0x232d,	// (0x00010d86) title_pane_g3_ParamLimits

0x232d,	// (0x00010d86) title_pane_g3

0x2ff3,	// (0x00011a4c) set_value_pane_g1

0xd863,	// (0x0001c2bc) popup_toolbar_trans_pane_ParamLimits

0x7afe,	// (0x00016557) aid_size_cell_tb_trans_pane_ParamLimits

0x30f5,	// (0x00011b4e) bg_tb_trans_pane_ParamLimits

0x7b10,	// (0x00016569) grid_tb_trans_pane_ParamLimits

0x268c,	// (0x000110e5) cont_note_pane_ParamLimits

0x268c,	// (0x000110e5) cont_note_pane

0x29e6,	// (0x0001143f) cont_snote2_single_text_pane_ParamLimits

0x29e6,	// (0x0001143f) cont_snote2_single_text_pane

0x29e6,	// (0x0001143f) cont_snote2_single_graphic_pane_ParamLimits

0x29e6,	// (0x0001143f) cont_snote2_single_graphic_pane

0x4db3,	// (0x0001380c) cont_note_wait_pane_ParamLimits

0x4db3,	// (0x0001380c) cont_note_wait_pane

0x4db3,	// (0x0001380c) cont_note_image_pane_ParamLimits

0x4db3,	// (0x0001380c) cont_note_image_pane

0x7be4,	// (0x0001663d) popup_note2_window_g1_ParamLimits

0x7be4,	// (0x0001663d) popup_note2_window_g1

0x7c15,	// (0x0001666e) popup_note2_window_t1_ParamLimits

0x7c15,	// (0x0001666e) popup_note2_window_t1

0x7c5a,	// (0x000166b3) popup_note2_window_t2_ParamLimits

0x7c5a,	// (0x000166b3) popup_note2_window_t2

0x7c9f,	// (0x000166f8) popup_note2_window_t3_ParamLimits

0x7c9f,	// (0x000166f8) popup_note2_window_t3

0x7ce4,	// (0x0001673d) popup_note2_window_t4_ParamLimits

0x7ce4,	// (0x0001673d) popup_note2_window_t4

0x2710,	// (0x00011169) popup_note2_window_t5_ParamLimits

0x2710,	// (0x00011169) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0001e6c0) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0001e6c0) popup_note2_window_t

0x7d13,	// (0x0001676c) popup_note2_image_window_g1_ParamLimits

0x7d13,	// (0x0001676c) popup_note2_image_window_g1

0x7d1f,	// (0x00016778) popup_note2_image_window_g2_ParamLimits

0x7d1f,	// (0x00016778) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0001e6cb) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0001e6cb) popup_note2_image_window_g

0x7d31,	// (0x0001678a) popup_note2_image_window_t1_ParamLimits

0x7d31,	// (0x0001678a) popup_note2_image_window_t1

0x7d49,	// (0x000167a2) popup_note2_image_window_t2_ParamLimits

0x7d49,	// (0x000167a2) popup_note2_image_window_t2

0x7d61,	// (0x000167ba) popup_note2_image_window_t3_ParamLimits

0x7d61,	// (0x000167ba) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0001e6d0) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0001e6d0) popup_note2_image_window_t

0x4dc1,	// (0x0001381a) popup_note2_wait_window_g1_ParamLimits

0x4dc1,	// (0x0001381a) popup_note2_wait_window_g1

0x4dcd,	// (0x00013826) popup_note2_wait_window_g2_ParamLimits

0x4dcd,	// (0x00013826) popup_note2_wait_window_g2

0x4dd9,	// (0x00013832) popup_note2_wait_window_g3_ParamLimits

0x4dd9,	// (0x00013832) popup_note2_wait_window_g3

0x0002,

0xf83c,	// (0x0001e295) popup_note2_wait_window_g_ParamLimits

0xf83c,	// (0x0001e295) popup_note2_wait_window_g

0x7d7d,	// (0x000167d6) popup_note2_wait_window_t1_ParamLimits

0x7d7d,	// (0x000167d6) popup_note2_wait_window_t1

0x7d9b,	// (0x000167f4) popup_note2_wait_window_t2_ParamLimits

0x7d9b,	// (0x000167f4) popup_note2_wait_window_t2

0x7db9,	// (0x00016812) popup_note2_wait_window_t3_ParamLimits

0x7db9,	// (0x00016812) popup_note2_wait_window_t3

0x7dcb,	// (0x00016824) popup_note2_wait_window_t4_ParamLimits

0x7dcb,	// (0x00016824) popup_note2_wait_window_t4

0x0003,

0xfc7e,	// (0x0001e6d7) popup_note2_wait_window_t_ParamLimits

0xfc7e,	// (0x0001e6d7) popup_note2_wait_window_t

0x7ddd,	// (0x00016836) wait_bar2_pane_ParamLimits

0x7ddd,	// (0x00016836) wait_bar2_pane

0x7df5,	// (0x0001684e) popup_snote2_single_text_window_g1_ParamLimits

0x7df5,	// (0x0001684e) popup_snote2_single_text_window_g1

0x7e1d,	// (0x00016876) popup_snote2_single_text_window_t1_ParamLimits

0x7e1d,	// (0x00016876) popup_snote2_single_text_window_t1

0x7e69,	// (0x000168c2) popup_snote2_single_text_window_t2_ParamLimits

0x7e69,	// (0x000168c2) popup_snote2_single_text_window_t2

0x7eb5,	// (0x0001690e) popup_snote2_single_text_window_t3_ParamLimits

0x7eb5,	// (0x0001690e) popup_snote2_single_text_window_t3

0x7ef6,	// (0x0001694f) popup_snote2_single_text_window_t4_ParamLimits

0x7ef6,	// (0x0001694f) popup_snote2_single_text_window_t4

0x7f2c,	// (0x00016985) popup_snote2_single_text_window_t5_ParamLimits

0x7f2c,	// (0x00016985) popup_snote2_single_text_window_t5

0x0004,

0xfc87,	// (0x0001e6e0) popup_snote2_single_text_window_t_ParamLimits

0xfc87,	// (0x0001e6e0) popup_snote2_single_text_window_t

0x7f57,	// (0x000169b0) popup_snote2_single_graphic_window_g1_ParamLimits

0x7f57,	// (0x000169b0) popup_snote2_single_graphic_window_g1

0x7f7f,	// (0x000169d8) popup_snote2_single_graphic_window_g2_ParamLimits

0x7f7f,	// (0x000169d8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc92,	// (0x0001e6eb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc92,	// (0x0001e6eb) popup_snote2_single_graphic_window_g

0x7fa7,	// (0x00016a00) popup_snote2_single_graphic_window_t1_ParamLimits

0x7fa7,	// (0x00016a00) popup_snote2_single_graphic_window_t1

0x7ff3,	// (0x00016a4c) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ff3,	// (0x00016a4c) popup_snote2_single_graphic_window_t2

0x7eb5,	// (0x0001690e) popup_snote2_single_graphic_window_t3_ParamLimits

0x7eb5,	// (0x0001690e) popup_snote2_single_graphic_window_t3

0x7ef6,	// (0x0001694f) popup_snote2_single_graphic_window_t4_ParamLimits

0x7ef6,	// (0x0001694f) popup_snote2_single_graphic_window_t4

0x7f2c,	// (0x00016985) popup_snote2_single_graphic_window_t5_ParamLimits

0x7f2c,	// (0x00016985) popup_snote2_single_graphic_window_t5

0x0004,

0xfc97,	// (0x0001e6f0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc97,	// (0x0001e6f0) popup_snote2_single_graphic_window_t

0x6964,	// (0x000153bd) clock_nsta_pane_cp2_t1

0x6964,	// (0x000153bd) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001e517) clock_nsta_pane_cp2_t

0xc150,	// (0x0001aba9) form_field_data_wide_pane_g1_ParamLimits

0x2b8c,	// (0x000115e5) form_field_data_wide_pane_g2_ParamLimits

0x2b8c,	// (0x000115e5) form_field_data_wide_pane_g2

0x311b,	// (0x00011b74) form_field_data_wide_pane_g3_ParamLimits

0x311b,	// (0x00011b74) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001e0cf) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001e0cf) form_field_data_wide_pane_g

0x684e,	// (0x000152a7) grid_touch_3_pane_ParamLimits

0x684e,	// (0x000152a7) grid_touch_3_pane

0x803f,	// (0x00016a98) cell_touch_3_pane_ParamLimits

0x803f,	// (0x00016a98) cell_touch_3_pane

0x6e29,	// (0x00015882) cell_touch_3_pane_g1

0x6e29,	// (0x00015882) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001e59c) cell_touch_3_pane_g

0x2768,	// (0x000111c1) cont_query_data_pane

0x2770,	// (0x000111c9) cont_query_data_pane_cp1

0x806c,	// (0x00016ac5) button_value_adjust_pane_cp7

0x8074,	// (0x00016acd) query_popup_pane_cp3

0x3988,	// (0x000123e1) bg_popup_sub_pane_cp22_ParamLimits

0xd0e5,	// (0x0001bb3e) navi_navi_volume_pane_cp2

0xd0fd,	// (0x0001bb56) popup_side_volume_key_window_g2

0xd109,	// (0x0001bb62) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001e165) popup_side_volume_key_window_g

0xd123,	// (0x0001bb7c) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001e16c) popup_side_volume_key_window_t

0x3ca4,	// (0x000126fd) popup_side_volume_key_window_ParamLimits

0xbdeb,	// (0x0001a844) list_double_graphic_pane_g4_ParamLimits

0xbdeb,	// (0x0001a844) list_double_graphic_pane_g4

0x5cbc,	// (0x00014715) list_single_2heading_msg_pane_ParamLimits

0x5cbc,	// (0x00014715) list_single_2heading_msg_pane

0xca92,	// (0x0001b4eb) list_single_2heading_msg_pane_g1_ParamLimits

0xca92,	// (0x0001b4eb) list_single_2heading_msg_pane_g1

0xbc4c,	// (0x0001a6a5) list_single_2heading_msg_pane_g2_ParamLimits

0xbc4c,	// (0x0001a6a5) list_single_2heading_msg_pane_g2

0xca9e,	// (0x0001b4f7) list_single_2heading_msg_pane_g3_ParamLimits

0xca9e,	// (0x0001b4f7) list_single_2heading_msg_pane_g3

0xcaaa,	// (0x0001b503) list_single_2heading_msg_pane_g4_ParamLimits

0xcaaa,	// (0x0001b503) list_single_2heading_msg_pane_g4

0x0003,

0xfca2,	// (0x0001e6fb) list_single_2heading_msg_pane_g_ParamLimits

0xfca2,	// (0x0001e6fb) list_single_2heading_msg_pane_g

0xcac2,	// (0x0001b51b) list_single_2heading_msg_pane_t1_ParamLimits

0xcac2,	// (0x0001b51b) list_single_2heading_msg_pane_t1

0xcaea,	// (0x0001b543) list_single_2heading_msg_pane_t2_ParamLimits

0xcaea,	// (0x0001b543) list_single_2heading_msg_pane_t2

0xcb1e,	// (0x0001b577) list_single_2heading_msg_pane_t3_ParamLimits

0xcb1e,	// (0x0001b577) list_single_2heading_msg_pane_t3

0xcb57,	// (0x0001b5b0) list_single_2heading_msg_pane_t4_ParamLimits

0xcb57,	// (0x0001b5b0) list_single_2heading_msg_pane_t4

0x0003,

0xfcab,	// (0x0001e704) list_single_2heading_msg_pane_t_ParamLimits

0xfcab,	// (0x0001e704) list_single_2heading_msg_pane_t

0x2339,	// (0x00010d92) title_pane_g4_ParamLimits

0x2339,	// (0x00010d92) title_pane_g4

0xcf35,	// (0x0001b98e) title_pane_stacon_g3_ParamLimits

0xcf35,	// (0x0001b98e) title_pane_stacon_g3

0x7b7b,	// (0x000165d4) list_single_2graphic_im_pane_g4_ParamLimits

0x7b7b,	// (0x000165d4) list_single_2graphic_im_pane_g4

0x57b1,	// (0x0001420a) popup_side_volume_key_window_cp

0x5f85,	// (0x000149de) main_idle_act2_pane_t1

0xd92e,	// (0x0001c387) toolbar_button_pane_g10

0x2b43,	// (0x0001159c) popup_toolbar_window_cp1

0x6955,	// (0x000153ae) clock_nsta_pane_cp_t1

0x6955,	// (0x000153ae) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001e512) clock_nsta_pane_cp_t

0xd0e5,	// (0x0001bb3e) navi_navi_volume_pane_cp2_ParamLimits

0xd0f1,	// (0x0001bb4a) popup_side_volume_key_window_g1_ParamLimits

0xd0fd,	// (0x0001bb56) popup_side_volume_key_window_g2_ParamLimits

0xd109,	// (0x0001bb62) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001e165) popup_side_volume_key_window_g_ParamLimits

0xdda4,	// (0x0001c7fd) fep_hwr_aid_pane

0xa8ca,	// (0x00019323) bg_fep_hwr_top_pane_g4_ParamLimits

0x6e94,	// (0x000158ed) fep_hwr_top_pane_g1_ParamLimits

0x6e82,	// (0x000158db) fep_hwr_top_pane_g2_ParamLimits

0xde57,	// (0x0001c8b0) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001e567) fep_hwr_top_pane_g_ParamLimits

0xde6c,	// (0x0001c8c5) fep_hwr_top_text_pane_ParamLimits

0x5585,	// (0x00013fde) aid_touch_tab_arrow_arrow_2

0x557c,	// (0x00013fd5) aid_touch_tab_arrow_left_2

0xddb8,	// (0x0001c811) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xddeb,	// (0x0001c844) fep_hwr_prediction_pane

0x6fd3,	// (0x00015a2c) fep_vkb_prediction_pane

0x70b5,	// (0x00015b0e) fep_vkb_side_pane_g3_ParamLimits

0x70b5,	// (0x00015b0e) fep_vkb_side_pane_g3

0x7061,	// (0x00015aba) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x769d,	// (0x000160f6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x76aa,	// (0x00016103) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0001e611) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8192,	// (0x00016beb) fep_hwr_prediction_pane_g1

0xe0eb,	// (0x0001cb44) fep_hwr_prediction_pane_g2

0xe0f3,	// (0x0001cb4c) fep_hwr_prediction_pane_g3

0xe0fb,	// (0x0001cb54) fep_hwr_prediction_pane_g4

0x0003,

0xfcb4,	// (0x0001e70d) fep_hwr_prediction_pane_g

0x8192,	// (0x00016beb) fep_vkb_prediction_pane_g1

0x819c,	// (0x00016bf5) fep_vkb_prediction_pane_g2

0x81a4,	// (0x00016bfd) fep_vkb_prediction_pane_g3

0x81ac,	// (0x00016c05) fep_vkb_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0001e716) fep_vkb_prediction_pane_g

0xdbdc,	// (0x0001c635) slider_set_pane_g3

0xdbf0,	// (0x0001c649) slider_set_pane_g4

0xdc08,	// (0x0001c661) slider_set_pane_g5

0xdbdc,	// (0x0001c635) slider_set_pane_g6

0xdc1e,	// (0x0001c677) slider_set_pane_g7

0x5bce,	// (0x00014627) slider_form_pane_g3

0x5bd7,	// (0x00014630) slider_form_pane_g4

0x5bdf,	// (0x00014638) slider_form_pane_g5

0x5bce,	// (0x00014627) slider_form_pane_g6

0x5be7,	// (0x00014640) slider_form_pane_g7

0x6265,	// (0x00014cbe) slider_set_pane_vc_g3

0x626e,	// (0x00014cc7) slider_set_pane_vc_g4

0x6277,	// (0x00014cd0) slider_set_pane_vc_g5

0x6265,	// (0x00014cbe) slider_set_pane_vc_g6

0x6280,	// (0x00014cd9) slider_set_pane_vc_g7

0x6265,	// (0x00014cbe) slider_form_pane_vc_g1

0x626e,	// (0x00014cc7) slider_form_pane_vc_g2

0x6277,	// (0x00014cd0) slider_form_pane_vc_g3

0x6265,	// (0x00014cbe) slider_form_pane_vc_g4

0x664e,	// (0x000150a7) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001e4e4) slider_form_pane_vc_g

0x2214,	// (0x00010c6d) main_idle_act3_pane

0x81b4,	// (0x00016c0d) ai3_links_pane

0x81bd,	// (0x00016c16) popup_ai3_data_window_ParamLimits

0x81bd,	// (0x00016c16) popup_ai3_data_window

0x2214,	// (0x00010c6d) grid_ai3_links_pane

0x81d5,	// (0x00016c2e) cell_ai3_links_pane_ParamLimits

0x81d5,	// (0x00016c2e) cell_ai3_links_pane

0x81e9,	// (0x00016c42) bg_popup_sub_pane_cp11

0x81f6,	// (0x00016c4f) cell_ai3_links_pane_g1

0x2214,	// (0x00010c6d) bg_popup_sub_pane_cp12

0x821b,	// (0x00016c74) heading_ai3_data_pane

0x8223,	// (0x00016c7c) list_ai3_gene_pane

0x822f,	// (0x00016c88) popup_ai3_data_window_g1

0x8237,	// (0x00016c90) heading_ai3_data_pane_g1

0x823f,	// (0x00016c98) heading_ai3_data_pane_t1

0x824d,	// (0x00016ca6) list_double_ai3_gene_pane_ParamLimits

0x824d,	// (0x00016ca6) list_double_ai3_gene_pane

0x825a,	// (0x00016cb3) list_single_ai3_gene_pane_ParamLimits

0x825a,	// (0x00016cb3) list_single_ai3_gene_pane

0x6dee,	// (0x00015847) list_highlight_pane_cp7_ParamLimits

0x6dee,	// (0x00015847) list_highlight_pane_cp7

0x8267,	// (0x00016cc0) list_single_a13_gene_pane_t1_ParamLimits

0x8267,	// (0x00016cc0) list_single_a13_gene_pane_t1

0x827e,	// (0x00016cd7) list_single_ai3_gene_pane_g1

0x8287,	// (0x00016ce0) list_single_ai3_gene_pane_g2

0x0001,

0xfcc6,	// (0x0001e71f) list_single_ai3_gene_pane_g

0x828f,	// (0x00016ce8) list_double_ai3_gene_pane_g1_ParamLimits

0x828f,	// (0x00016ce8) list_double_ai3_gene_pane_g1

0x829b,	// (0x00016cf4) list_double_ai3_gene_pane_t1_ParamLimits

0x829b,	// (0x00016cf4) list_double_ai3_gene_pane_t1

0x82b7,	// (0x00016d10) list_double_ai3_gene_pane_t2_ParamLimits

0x82b7,	// (0x00016d10) list_double_ai3_gene_pane_t2

0x82cc,	// (0x00016d25) list_double_ai3_gene_pane_t3_ParamLimits

0x82cc,	// (0x00016d25) list_double_ai3_gene_pane_t3

0x0002,

0xfccb,	// (0x0001e724) list_double_ai3_gene_pane_t_ParamLimits

0xfccb,	// (0x0001e724) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xca8a,	// (0x0001b4e3) aid_size_min_col_2

0x808d,	// (0x00016ae6) aid_size_min_msg_ParamLimits

0x808d,	// (0x00016ae6) aid_size_min_msg

0x71af,	// (0x00015c08) fep_vkb_top_text_pane_g2_ParamLimits

0x71af,	// (0x00015c08) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001e597) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001e597) fep_vkb_top_text_pane_g

0x2214,	// (0x00010c6d) main_hc_apps_shell_pane

0x82e9,	// (0x00016d42) grid_hc_apps_pane_ParamLimits

0x82e9,	// (0x00016d42) grid_hc_apps_pane

0x82f8,	// (0x00016d51) list_hc_apps_pane

0x8300,	// (0x00016d59) scroll_pane_cp37_ParamLimits

0x8300,	// (0x00016d59) scroll_pane_cp37

0x830c,	// (0x00016d65) cell_hc_apps_pane_ParamLimits

0x830c,	// (0x00016d65) cell_hc_apps_pane

0x839a,	// (0x00016df3) cell_hc_apps_pane_g1_ParamLimits

0x839a,	// (0x00016df3) cell_hc_apps_pane_g1

0x83c7,	// (0x00016e20) cell_hc_apps_pane_g2_ParamLimits

0x83c7,	// (0x00016e20) cell_hc_apps_pane_g2

0x83e3,	// (0x00016e3c) cell_hc_apps_pane_g3_ParamLimits

0x83e3,	// (0x00016e3c) cell_hc_apps_pane_g3

0x0002,

0xfcd2,	// (0x0001e72b) cell_hc_apps_pane_g_ParamLimits

0xfcd2,	// (0x0001e72b) cell_hc_apps_pane_g

0x8405,	// (0x00016e5e) cell_hc_apps_pane_t1_ParamLimits

0x8405,	// (0x00016e5e) cell_hc_apps_pane_t1

0x268c,	// (0x000110e5) grid_highlight_pane_cp10_ParamLimits

0x268c,	// (0x000110e5) grid_highlight_pane_cp10

0x8443,	// (0x00016e9c) list_single_hc_apps_pane_ParamLimits

0x8443,	// (0x00016e9c) list_single_hc_apps_pane

0x8473,	// (0x00016ecc) list_single_hc_apps_pane_g1

0xcb7c,	// (0x0001b5d5) list_single_hc_apps_pane_g2

0x0001,

0xfcd9,	// (0x0001e732) list_single_hc_apps_pane_g

0xcb95,	// (0x0001b5ee) list_single_hc_apps_pane_g2_copy1

0xcbb1,	// (0x0001b60a) list_single_hc_apps_pane_t1

0x23e5,	// (0x00010e3e) bg_set_opt_pane_cp_ParamLimits

0xce83,	// (0x0001b8dc) setting_slider_pane_t1_ParamLimits

0xce99,	// (0x0001b8f2) setting_slider_pane_t2_ParamLimits

0xceb2,	// (0x0001b90b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001dfb7) setting_slider_pane_t_ParamLimits

0xcec9,	// (0x0001b922) slider_set_pane_ParamLimits

0xd365,	// (0x0001bdbe) control_pane_g5_ParamLimits

0xd365,	// (0x0001bdbe) control_pane_g5

0x5a46,	// (0x0001449f) slider_set_pane_g1_ParamLimits

0xdbd0,	// (0x0001c629) slider_set_pane_g2_ParamLimits

0xdbdc,	// (0x0001c635) slider_set_pane_g3_ParamLimits

0xdbf0,	// (0x0001c649) slider_set_pane_g4_ParamLimits

0xdc08,	// (0x0001c661) slider_set_pane_g5_ParamLimits

0xdbdc,	// (0x0001c635) slider_set_pane_g6_ParamLimits

0xdc1e,	// (0x0001c677) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0001e3b1) slider_set_pane_g_ParamLimits

0x23e5,	// (0x00010e3e) navi_icon_text_pane_ParamLimits

0x423e,	// (0x00012c97) aid_fill_nsta_2_ParamLimits

0x4270,	// (0x00012cc9) aid_touch_tab_arrow_left_ParamLimits

0x427c,	// (0x00012cd5) aid_touch_tab_arrow_right_ParamLimits

0x42e6,	// (0x00012d3f) clock_nsta_pane_ParamLimits

0x555e,	// (0x00013fb7) navi_icon_pane_g1_ParamLimits

0x556a,	// (0x00013fc3) navi_text_pane_t1_ParamLimits

0x6a4c,	// (0x000154a5) navi_icon_text_pane_g1_ParamLimits

0x6a58,	// (0x000154b1) navi_icon_text_pane_t1_ParamLimits

0x8473,	// (0x00016ecc) list_single_hc_apps_pane_g1_ParamLimits

0xcb7c,	// (0x0001b5d5) list_single_hc_apps_pane_g2_ParamLimits

0xfcd9,	// (0x0001e732) list_single_hc_apps_pane_g_ParamLimits

0xcb95,	// (0x0001b5ee) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbb1,	// (0x0001b60a) list_single_hc_apps_pane_t1_ParamLimits

0xcdb5,	// (0x0001b80e) popup_toolbar2_fixed_window_ParamLimits

0xcdb5,	// (0x0001b80e) popup_toolbar2_fixed_window

0xd85b,	// (0x0001c2b4) popup_toolbar2_float_window

0x2214,	// (0x00010c6d) bg_popup_sub_pane_cp27

0x84ef,	// (0x00016f48) grid_toolbar2_float_pane

0x2214,	// (0x00010c6d) bg_popup_sub_pane_cp26

0x84ef,	// (0x00016f48) grid_toolbar2_fixed_pane

0x84f7,	// (0x00016f50) cell_toolbar2_fixed_pane_ParamLimits

0x84f7,	// (0x00016f50) cell_toolbar2_fixed_pane

0x8508,	// (0x00016f61) cell_toolbar2_fixed_pane_g1

0x8511,	// (0x00016f6a) toolbar2_fixed_button_pane

0x46cd,	// (0x00013126) toolbar2_fixed_button_pane_g1

0x46dd,	// (0x00013136) toolbar2_fixed_button_pane_g2

0x46d5,	// (0x0001312e) toolbar2_fixed_button_pane_g3

0x46ed,	// (0x00013146) toolbar2_fixed_button_pane_g4

0x46e5,	// (0x0001313e) toolbar2_fixed_button_pane_g5

0x46f5,	// (0x0001314e) toolbar2_fixed_button_pane_g6

0x46fd,	// (0x00013156) toolbar2_fixed_button_pane_g7

0x470d,	// (0x00013166) toolbar2_fixed_button_pane_g8

0x4705,	// (0x0001315e) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0001e2b3) toolbar2_fixed_button_pane_g

0x8519,	// (0x00016f72) cell_toolbar2_float_pane_ParamLimits

0x8519,	// (0x00016f72) cell_toolbar2_float_pane

0x852a,	// (0x00016f83) cell_toolbar2_float_pane_g1

0x8511,	// (0x00016f6a) toolbar2_fixed_button_pane_cp

0x6f42,	// (0x0001599b) fep_vkb_accented_list_pane_ParamLimits

0x6f42,	// (0x0001599b) fep_vkb_accented_list_pane

0xdfae,	// (0x0001ca07) bg_popup_fep_shadow_pane_g9

0x3eb5,	// (0x0001290e) bg_popup_fep_shadow_pane_cp3

0x33a0,	// (0x00011df9) list_accented_list_pane

0x8533,	// (0x00016f8c) list_single_accented_list_pane_ParamLimits

0x8533,	// (0x00016f8c) list_single_accented_list_pane

0x3eb5,	// (0x0001290e) list_highlight_pane_cp10

0x8544,	// (0x00016f9d) list_single_accented_list_pane_t1

0xd7c1,	// (0x0001c21a) popup_slider_window_ParamLimits

0xd7c1,	// (0x0001c21a) popup_slider_window

0x807c,	// (0x00016ad5) aid_indentation_list_msg

0x85e4,	// (0x0001703d) bg_popup_window_pane_cp19

0x8648,	// (0x000170a1) popup_slider_window_g1

0x8664,	// (0x000170bd) popup_slider_window_g2

0x8680,	// (0x000170d9) popup_slider_window_g3

0x0005,

0xfcde,	// (0x0001e737) popup_slider_window_g

0x86dc,	// (0x00017135) popup_slider_window_t1

0x874e,	// (0x000171a7) small_volume_slider_vertical_pane

0x6e29,	// (0x00015882) small_volume_slider_vertical_pane_g1

0x6e29,	// (0x00015882) small_volume_slider_vertical_pane_g2

0x876a,	// (0x000171c3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf0,	// (0x0001e749) small_volume_slider_vertical_pane_g

0xcc33,	// (0x0001b68c) area_side_right_pane_ParamLimits

0xcc33,	// (0x0001b68c) area_side_right_pane

0xe103,	// (0x0001cb5c) aid_size_side_button_ParamLimits

0xe103,	// (0x0001cb5c) aid_size_side_button

0xe117,	// (0x0001cb70) grid_sctrl_middle_pane_ParamLimits

0xe117,	// (0x0001cb70) grid_sctrl_middle_pane

0xe133,	// (0x0001cb8c) sctrl_sk_bottom_pane

0xe144,	// (0x0001cb9d) sctrl_sk_top_pane

0xe156,	// (0x0001cbaf) aid_touch_sctrl_top

0x268c,	// (0x000110e5) bg_sctrl_sk_pane_ParamLimits

0x268c,	// (0x000110e5) bg_sctrl_sk_pane

0xe163,	// (0x0001cbbc) sctrl_sk_top_pane_g1

0xe170,	// (0x0001cbc9) sctrl_sk_top_pane_t1

0xe156,	// (0x0001cbaf) aid_touch_sctrl_bottom

0x268c,	// (0x000110e5) bg_sctrl_sk_pane_cp_ParamLimits

0x268c,	// (0x000110e5) bg_sctrl_sk_pane_cp

0xe18b,	// (0x0001cbe4) sctrl_sk_bottom_pane_g1

0xe170,	// (0x0001cbc9) sctrl_sk_bottom_pane_t1

0xe194,	// (0x0001cbed) cell_sctrl_middle_pane_ParamLimits

0xe194,	// (0x0001cbed) cell_sctrl_middle_pane

0xe1af,	// (0x0001cc08) aid_touch_sctrl_middle_ParamLimits

0xe1af,	// (0x0001cc08) aid_touch_sctrl_middle

0x30f5,	// (0x00011b4e) bg_sctrl_middle_pane_ParamLimits

0x30f5,	// (0x00011b4e) bg_sctrl_middle_pane

0x7061,	// (0x00015aba) cell_sctrl_middle_pane_g1_ParamLimits

0x7061,	// (0x00015aba) cell_sctrl_middle_pane_g1

0xe1c0,	// (0x0001cc19) cell_sctrl_middle_pane_g2_ParamLimits

0xe1c0,	// (0x0001cc19) cell_sctrl_middle_pane_g2

0x0001,

0xfcfc,	// (0x0001e755) cell_sctrl_middle_pane_g_ParamLimits

0xfcfc,	// (0x0001e755) cell_sctrl_middle_pane_g

0x46cd,	// (0x00013126) bg_sctrl_middle_pane_g1

0x46dd,	// (0x00013136) bg_sctrl_middle_pane_g2

0x46d5,	// (0x0001312e) bg_sctrl_middle_pane_g3

0x46ed,	// (0x00013146) bg_sctrl_middle_pane_g4

0x46e5,	// (0x0001313e) bg_sctrl_middle_pane_g5

0x46f5,	// (0x0001314e) bg_sctrl_middle_pane_g6

0x46fd,	// (0x00013156) bg_sctrl_middle_pane_g7

0x470d,	// (0x00013166) bg_sctrl_middle_pane_g8

0x0007,

0xfd01,	// (0x0001e75a) bg_sctrl_middle_pane_g

0x4705,	// (0x0001315e) bg_sctrl_middle_pane_g8_copy1

0x46cd,	// (0x00013126) bg_sctrl_sk_pane_g1

0x46dd,	// (0x00013136) bg_sctrl_sk_pane_g2

0x46d5,	// (0x0001312e) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0001e2b3) bg_sctrl_sk_pane_g

0x2b08,	// (0x00011561) aid_size_touch_scroll_bar

0x46ed,	// (0x00013146) bg_sctrl_sk_pane_g4

0x46e5,	// (0x0001313e) bg_sctrl_sk_pane_g5

0x46f5,	// (0x0001314e) bg_sctrl_sk_pane_g6

0x46fd,	// (0x00013156) bg_sctrl_sk_pane_g7

0x470d,	// (0x00013166) bg_sctrl_sk_pane_g8

0x4705,	// (0x0001315e) bg_sctrl_sk_pane_g9

0xd4f7,	// (0x0001bf50) popup_fep_china_hwr2_fs_candidate_window

0xd4ff,	// (0x0001bf58) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd4ff,	// (0x0001bf58) popup_fep_china_hwr2_fs_control_window

0x7061,	// (0x00015aba) sctrl_sk_top_pane_g2

0x0001,

0xfcf7,	// (0x0001e750) sctrl_sk_top_pane_g

0x8773,	// (0x000171cc) aid_fep_china_hwr2_fs_cell_ParamLimits

0x8773,	// (0x000171cc) aid_fep_china_hwr2_fs_cell

0x8784,	// (0x000171dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x8784,	// (0x000171dd) bg_popup_fep_shadow_pane_cp4

0x879b,	// (0x000171f4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x879b,	// (0x000171f4) bg_popup_fep_shadow_pane_cp5

0x87ad,	// (0x00017206) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x87ad,	// (0x00017206) popup_fep_china_hwr2_fs_control_bar_grid

0x87bd,	// (0x00017216) popup_fep_china_hwr2_fs_control_funtion_grid

0x87c5,	// (0x0001721e) aid_fep_china_hwr2_fs_candi_cell

0x2214,	// (0x00010c6d) bg_popup_fep_shadow_pane_cp6

0x87cf,	// (0x00017228) popup_fep_china_hwr2_fs_candidate_grid

0x87d7,	// (0x00017230) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x87d7,	// (0x00017230) cell_fep_china_hwr2_fs_funtion_grid

0x6e29,	// (0x00015882) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x87ef,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x87ef,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1

0x87fd,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x87fd,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd12,	// (0x0001e76b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd12,	// (0x0001e76b) cell_fep_china_hwr2_fs_funtion_grid_g

0x8813,	// (0x0001726c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x8813,	// (0x0001726c) cell_fep_china_hwr2_fs_funtion_grid_t1

0x8828,	// (0x00017281) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x8828,	// (0x00017281) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd17,	// (0x0001e770) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd17,	// (0x0001e770) cell_fep_china_hwr2_fs_funtion_grid_t

0x8844,	// (0x0001729d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x884c,	// (0x000172a5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8854,	// (0x000172ad) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1c,	// (0x0001e775) popup_fep_china_hwr2_fs_control_bar_grid_g

0x885c,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x885c,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid

0x8875,	// (0x000172ce) popup_fep_china_hwr2_fs_candidate_grid_g20

0x887d,	// (0x000172d6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6e29,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6e29,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001e59c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8885,	// (0x000172de) cell_fep_china_hwr2_fs_candidate_grid_t1

0x42f3,	// (0x00012d4c) clock_nsta_pane_cp_24_ParamLimits

0x42f3,	// (0x00012d4c) clock_nsta_pane_cp_24

0x4366,	// (0x00012dbf) indicator_nsta_pane_cp_24_ParamLimits

0x4366,	// (0x00012dbf) indicator_nsta_pane_cp_24

0x53db,	// (0x00013e34) heading_pane_g1

0x0001,

0xf8bf,	// (0x0001e318) heading_pane_g

0x5e27,	// (0x00014880) grid_sct_catagory_button_pane

0x5e57,	// (0x000148b0) scroll_pane_cp5_ParamLimits

0x6a9a,	// (0x000154f3) button_value_adjust_pane_cp5_ParamLimits

0x6a9a,	// (0x000154f3) button_value_adjust_pane_cp5

0x6b90,	// (0x000155e9) form2_midp_time_pane_ParamLimits

0x8893,	// (0x000172ec) cell_sct_catagory_button_pane_ParamLimits

0x8893,	// (0x000172ec) cell_sct_catagory_button_pane

0x6dee,	// (0x00015847) bg_button_pane_cp01_ParamLimits

0x6dee,	// (0x00015847) bg_button_pane_cp01

0x6e29,	// (0x00015882) cell_sct_catagory_button_pane_g1

0xd7f8,	// (0x0001c251) popup_tb_extension_window

0x88a5,	// (0x000172fe) aid_size_cell_ext_ParamLimits

0x88a5,	// (0x000172fe) aid_size_cell_ext

0x268c,	// (0x000110e5) bg_tb_trans_pane_cp1_ParamLimits

0x268c,	// (0x000110e5) bg_tb_trans_pane_cp1

0x88c5,	// (0x0001731e) grid_tb_ext_pane_ParamLimits

0x88c5,	// (0x0001731e) grid_tb_ext_pane

0x88eb,	// (0x00017344) cell_tb_ext_pane_ParamLimits

0x88eb,	// (0x00017344) cell_tb_ext_pane

0x8900,	// (0x00017359) cell_tb_ext_pane_g1_ParamLimits

0x8900,	// (0x00017359) cell_tb_ext_pane_g1

0x891d,	// (0x00017376) cell_tb_ext_pane_t1

0x268c,	// (0x000110e5) list_highlight_pane_cp11_ParamLimits

0x268c,	// (0x000110e5) list_highlight_pane_cp11

0xcdd4,	// (0x0001b82d) popup_uni_indicator_window_ParamLimits

0xcdd4,	// (0x0001b82d) popup_uni_indicator_window

0x30f5,	// (0x00011b4e) bg_popup_sub_pane_cp14

0x8938,	// (0x00017391) list_uniindi_pane

0x8944,	// (0x0001739d) uniindi_top_pane

0x268c,	// (0x000110e5) bg_uniindi_top_pane

0x8963,	// (0x000173bc) uniindi_top_pane_g1

0x8979,	// (0x000173d2) uniindi_top_pane_g2

0x0003,

0xfd23,	// (0x0001e77c) uniindi_top_pane_g

0x89a3,	// (0x000173fc) uniindi_top_pane_t1

0x89cd,	// (0x00017426) list_single_uniindi_pane_ParamLimits

0x89cd,	// (0x00017426) list_single_uniindi_pane

0x6e29,	// (0x00015882) bg_uniindi_top_pane_g1

0x89df,	// (0x00017438) list_single_uniindi_pane_g1

0x89f2,	// (0x0001744b) list_single_uniindi_pane_t1

0x2214,	// (0x00010c6d) control_bg_pane

0x8a17,	// (0x00017470) bg_sctrl_sk_pane_cp1

0x8a20,	// (0x00017479) bg_sctrl_sk_pane_cp2

0x8a29,	// (0x00017482) control_bg_pane_g1

0x8a32,	// (0x0001748b) control_bg_pane_g2

0x0001,

0xfd2c,	// (0x0001e785) control_bg_pane_g

0x68f0,	// (0x00015349) cell_indicator_nsta_pane_g1_ParamLimits

0x68fe,	// (0x00015357) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001e500) cell_indicator_nsta_pane_g_ParamLimits

0xc853,	// (0x0001b2ac) form2_midp_time_pane_t1_ParamLimits

0x29e6,	// (0x0001143f) main_idle_act4_pane_ParamLimits

0x29e6,	// (0x0001143f) main_idle_act4_pane

0xd7f8,	// (0x0001c251) popup_tb_extension_window_ParamLimits

0x88df,	// (0x00017338) tb_ext_find_pane_ParamLimits

0x88df,	// (0x00017338) tb_ext_find_pane

0x8a3b,	// (0x00017494) ai_gene_pane_1_cp1

0x3ff0,	// (0x00012a49) ai_gene_pane_2_cp1

0x8a43,	// (0x0001749c) list_single_idle_plugin_calendar_pane

0x8a4c,	// (0x000174a5) list_single_idle_plugin_notification_pane

0x8a55,	// (0x000174ae) list_single_idle_plugin_player_pane

0x8a5e,	// (0x000174b7) list_single_idle_plugin_shortcut_pane_ParamLimits

0x8a5e,	// (0x000174b7) list_single_idle_plugin_shortcut_pane

0x8a80,	// (0x000174d9) main_idle_act4_pane_t1

0x8a92,	// (0x000174eb) main_idle_act4_pane_t2

0x0001,

0xfd31,	// (0x0001e78a) main_idle_act4_pane_t

0x8aa4,	// (0x000174fd) middle_sk_idle_act4_pane_ParamLimits

0x8aa4,	// (0x000174fd) middle_sk_idle_act4_pane

0x8aba,	// (0x00017513) popup_clock_digital_analogue_window_cp2

0x8ad4,	// (0x0001752d) shortcut_wheel_idle_act4_pane_ParamLimits

0x8ad4,	// (0x0001752d) shortcut_wheel_idle_act4_pane

0x6e29,	// (0x00015882) shortcut_wheel_idle_act4_pane_g1

0x6e29,	// (0x00015882) shortcut_wheel_idle_act4_pane_g2

0x6e29,	// (0x00015882) shortcut_wheel_idle_act4_pane_g3

0x6e29,	// (0x00015882) shortcut_wheel_idle_act4_pane_g4

0x6e29,	// (0x00015882) shortcut_wheel_idle_act4_pane_g5

0x8ae8,	// (0x00017541) shortcut_wheel_idle_act4_pane_g6

0x8af0,	// (0x00017549) shortcut_wheel_idle_act4_pane_g7

0x8af8,	// (0x00017551) shortcut_wheel_idle_act4_pane_g8

0x8b00,	// (0x00017559) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd36,	// (0x0001e78f) shortcut_wheel_idle_act4_pane_g

0x7061,	// (0x00015aba) middle_sk_idle_act4_pane_g1_ParamLimits

0x7061,	// (0x00015aba) middle_sk_idle_act4_pane_g1

0x8b64,	// (0x000175bd) middle_sk_idle_act4_pane_g2_ParamLimits

0x8b64,	// (0x000175bd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd59,	// (0x0001e7b2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd59,	// (0x0001e7b2) middle_sk_idle_act4_pane_g

0x8b70,	// (0x000175c9) middle_sk_idle_act4_pane_t1_ParamLimits

0x8b70,	// (0x000175c9) middle_sk_idle_act4_pane_t1

0x8b8d,	// (0x000175e6) grid_ai_shortcut_pane_ParamLimits

0x8b8d,	// (0x000175e6) grid_ai_shortcut_pane

0x8ba6,	// (0x000175ff) list_highlight_pane_cp16_ParamLimits

0x8ba6,	// (0x000175ff) list_highlight_pane_cp16

0x8bb3,	// (0x0001760c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x8bb3,	// (0x0001760c) list_single_idle_plugin_shortcut_pane_g1

0x8bbf,	// (0x00017618) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x8bbf,	// (0x00017618) list_single_idle_plugin_shortcut_pane_g2

0x8bd7,	// (0x00017630) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x8bd7,	// (0x00017630) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5e,	// (0x0001e7b7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5e,	// (0x0001e7b7) list_single_idle_plugin_shortcut_pane_g

0x8bea,	// (0x00017643) cell_ai_shortcut_pane_ParamLimits

0x8bea,	// (0x00017643) cell_ai_shortcut_pane

0x8c0b,	// (0x00017664) cell_ai_shortcut_pane_g1_ParamLimits

0x8c0b,	// (0x00017664) cell_ai_shortcut_pane_g1

0x8a3b,	// (0x00017494) ai_gene_pane_1_cp2

0x8c2d,	// (0x00017686) ai_gene_pane_2_cp2

0x8c35,	// (0x0001768e) list_highlight_pane_cp15

0x8c3e,	// (0x00017697) list_single_idle_plugin_calendar_pane_g1

0x8c35,	// (0x0001768e) list_highlight_pane_cp17

0x8c46,	// (0x0001769f) list_single_idle_plugin_calendar_pane_g1_copy1

0x8c4e,	// (0x000176a7) list_single_idle_plugin_player_pane_g1

0x6025,	// (0x00014a7e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd65,	// (0x0001e7be) list_single_idle_plugin_player_pane_g

0x8c56,	// (0x000176af) list_single_idle_plugin_player_pane_t1

0x8c64,	// (0x000176bd) list_single_idle_plugin_player_pane_t2

0x8c72,	// (0x000176cb) list_single_idle_plugin_player_pane_t3

0x8c80,	// (0x000176d9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6a,	// (0x0001e7c3) list_single_idle_plugin_player_pane_t

0x8c8e,	// (0x000176e7) wait_bar_pane_cp15

0x8c96,	// (0x000176ef) grid_ai_notification_pane

0x6025,	// (0x00014a7e) list_single_idle_plugin_notification_pane_g1

0x8c9f,	// (0x000176f8) cell_ai_notification_pane_ParamLimits

0x8c9f,	// (0x000176f8) cell_ai_notification_pane

0x8cac,	// (0x00017705) cell_ai_notification_pane_g1

0x8cb4,	// (0x0001770d) cell_ai_notification_pane_t1

0x8cc2,	// (0x0001771b) tb_ext_find_button_pane

0x8cca,	// (0x00017723) tb_ext_find_pane_g1

0x8cd2,	// (0x0001772b) tb_ext_find_pane_t1

0x38b0,	// (0x00012309) tb_ext_find_button_pane_g1

0x8ce0,	// (0x00017739) tb_ext_find_button_pane_g2

0x0001,

0xfd73,	// (0x0001e7cc) tb_ext_find_button_pane_g

0x8a80,	// (0x000174d9) main_idle_act4_pane_t1_ParamLimits

0x8a92,	// (0x000174eb) main_idle_act4_pane_t2_ParamLimits

0xfd31,	// (0x0001e78a) main_idle_act4_pane_t_ParamLimits

0x8aba,	// (0x00017513) popup_clock_digital_analogue_window_cp2_ParamLimits

0x8ac8,	// (0x00017521) sat_plugin_idle_act4_pane_ParamLimits

0x8ac8,	// (0x00017521) sat_plugin_idle_act4_pane

0x8ce9,	// (0x00017742) sat_plugin_idle_act4_pane_t1_ParamLimits

0x8ce9,	// (0x00017742) sat_plugin_idle_act4_pane_t1

0x8cfc,	// (0x00017755) sat_plugin_idle_act4_pane_t2_ParamLimits

0x8cfc,	// (0x00017755) sat_plugin_idle_act4_pane_t2

0x8d0f,	// (0x00017768) sat_plugin_idle_act4_pane_t3_ParamLimits

0x8d0f,	// (0x00017768) sat_plugin_idle_act4_pane_t3

0x8d22,	// (0x0001777b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x8d22,	// (0x0001777b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd78,	// (0x0001e7d1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd78,	// (0x0001e7d1) sat_plugin_idle_act4_pane_t

0xcd35,	// (0x0001b78e) popup_battery_window_ParamLimits

0xcd35,	// (0x0001b78e) popup_battery_window

0x268c,	// (0x000110e5) bg_popup_sub_pane_cp25_ParamLimits

0x268c,	// (0x000110e5) bg_popup_sub_pane_cp25

0x8d35,	// (0x0001778e) popup_battery_window_g1_ParamLimits

0x8d35,	// (0x0001778e) popup_battery_window_g1

0x8d41,	// (0x0001779a) popup_battery_window_t1_ParamLimits

0x8d41,	// (0x0001779a) popup_battery_window_t1

0x8d53,	// (0x000177ac) popup_battery_window_t2_ParamLimits

0x8d53,	// (0x000177ac) popup_battery_window_t2

0x0001,

0xfd81,	// (0x0001e7da) popup_battery_window_t_ParamLimits

0xfd81,	// (0x0001e7da) popup_battery_window_t

0x3ec9,	// (0x00012922) midp_canvas_pane_ParamLimits

0x3f38,	// (0x00012991) midp_keypad_pane_ParamLimits

0x3f38,	// (0x00012991) midp_keypad_pane

0x4204,	// (0x00012c5d) main_midp_pane_ParamLimits

0x6973,	// (0x000153cc) signal_pane_g2_cp_ParamLimits

0x8d70,	// (0x000177c9) aid_size_cell_midp_keypad_ParamLimits

0x8d70,	// (0x000177c9) aid_size_cell_midp_keypad

0x8d8a,	// (0x000177e3) midp_keyp_game_grid_pane_ParamLimits

0x8d8a,	// (0x000177e3) midp_keyp_game_grid_pane

0x8da4,	// (0x000177fd) midp_keyp_rocker_pane_ParamLimits

0x8da4,	// (0x000177fd) midp_keyp_rocker_pane

0x8dd1,	// (0x0001782a) midp_keyp_sk_left_pane_ParamLimits

0x8dd1,	// (0x0001782a) midp_keyp_sk_left_pane

0x8e29,	// (0x00017882) midp_keyp_sk_right_pane_ParamLimits

0x8e29,	// (0x00017882) midp_keyp_sk_right_pane

0x2214,	// (0x00010c6d) bg_button_pane_cp03

0x8e7b,	// (0x000178d4) midp_keyp_sk_left_pane_g1

0x2214,	// (0x00010c6d) bg_button_pane_cp04

0x8e7b,	// (0x000178d4) midp_keyp_sk_right_pane_g1

0x6e29,	// (0x00015882) midp_keyp_rocker_pane_g1

0x8e84,	// (0x000178dd) keyp_game_cell_pane_ParamLimits

0x8e84,	// (0x000178dd) keyp_game_cell_pane

0x2214,	// (0x00010c6d) bg_button_pane_cp02

0x8e95,	// (0x000178ee) keyp_game_cell_pane_g1

0xcd6b,	// (0x0001b7c4) popup_fep_vkb2_window_ParamLimits

0xcd6b,	// (0x0001b7c4) popup_fep_vkb2_window

0xe1e4,	// (0x0001cc3d) aid_size_cell_vkb2_ParamLimits

0xe1e4,	// (0x0001cc3d) aid_size_cell_vkb2

0xe238,	// (0x0001cc91) popup_fep_vkb2_window_g1_ParamLimits

0xe238,	// (0x0001cc91) popup_fep_vkb2_window_g1

0xe280,	// (0x0001ccd9) vkb2_area_bottom_pane_ParamLimits

0xe280,	// (0x0001ccd9) vkb2_area_bottom_pane

0xe2b8,	// (0x0001cd11) vkb2_area_keypad_pane_ParamLimits

0xe2b8,	// (0x0001cd11) vkb2_area_keypad_pane

0xe2f0,	// (0x0001cd49) vkb2_area_top_pane_ParamLimits

0xe2f0,	// (0x0001cd49) vkb2_area_top_pane

0xe360,	// (0x0001cdb9) vkb2_top_entry_pane_ParamLimits

0xe360,	// (0x0001cdb9) vkb2_top_entry_pane

0xe38a,	// (0x0001cde3) vkb2_top_grid_left_pane_ParamLimits

0xe38a,	// (0x0001cde3) vkb2_top_grid_left_pane

0xe3a8,	// (0x0001ce01) vkb2_top_grid_right_pane_ParamLimits

0xe3a8,	// (0x0001ce01) vkb2_top_grid_right_pane

0xe3c6,	// (0x0001ce1f) vkb2_cell_keypad_pane_ParamLimits

0xe3c6,	// (0x0001ce1f) vkb2_cell_keypad_pane

0xe477,	// (0x0001ced0) vkb2_area_bottom_grid_pane_ParamLimits

0xe477,	// (0x0001ced0) vkb2_area_bottom_grid_pane

0xe49b,	// (0x0001cef4) vkb2_area_bottom_pane_g1_ParamLimits

0xe49b,	// (0x0001cef4) vkb2_area_bottom_pane_g1

0xe4bf,	// (0x0001cf18) vkb2_area_bottom_pane_g2_ParamLimits

0xe4bf,	// (0x0001cf18) vkb2_area_bottom_pane_g2

0xe4ed,	// (0x0001cf46) vkb2_area_bottom_pane_g3_ParamLimits

0xe4ed,	// (0x0001cf46) vkb2_area_bottom_pane_g3

0x0002,

0xfd86,	// (0x0001e7df) vkb2_area_bottom_pane_g_ParamLimits

0xfd86,	// (0x0001e7df) vkb2_area_bottom_pane_g

0xe53e,	// (0x0001cf97) vkb2_top_cell_left_pane_ParamLimits

0xe53e,	// (0x0001cf97) vkb2_top_cell_left_pane

0xe55e,	// (0x0001cfb7) vkb2_top_entry_pane_g1_ParamLimits

0xe55e,	// (0x0001cfb7) vkb2_top_entry_pane_g1

0xe56c,	// (0x0001cfc5) vkb2_top_entry_pane_t1_ParamLimits

0xe56c,	// (0x0001cfc5) vkb2_top_entry_pane_t1

0xa8e0,	// (0x00019339) vkb2_top_entry_pane_t2_ParamLimits

0xa8e0,	// (0x00019339) vkb2_top_entry_pane_t2

0xa912,	// (0x0001936b) vkb2_top_entry_pane_t3_ParamLimits

0xa912,	// (0x0001936b) vkb2_top_entry_pane_t3

0x0002,

0xfd8d,	// (0x0001e7e6) vkb2_top_entry_pane_t_ParamLimits

0xfd8d,	// (0x0001e7e6) vkb2_top_entry_pane_t

0xe5cb,	// (0x0001d024) vkb2_top_grid_right_pane_g1_ParamLimits

0xe5cb,	// (0x0001d024) vkb2_top_grid_right_pane_g1

0xe5e1,	// (0x0001d03a) vkb2_top_grid_right_pane_g2_ParamLimits

0xe5e1,	// (0x0001d03a) vkb2_top_grid_right_pane_g2

0xe5f9,	// (0x0001d052) vkb2_top_grid_right_pane_g3_ParamLimits

0xe5f9,	// (0x0001d052) vkb2_top_grid_right_pane_g3

0xe611,	// (0x0001d06a) vkb2_top_grid_right_pane_g4_ParamLimits

0xe611,	// (0x0001d06a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd94,	// (0x0001e7ed) vkb2_top_grid_right_pane_g_ParamLimits

0xfd94,	// (0x0001e7ed) vkb2_top_grid_right_pane_g

0xe627,	// (0x0001d080) vkb2_top_cell_left_pane_g1

0xe63e,	// (0x0001d097) vkb2_cell_keypad_pane_g1_ParamLimits

0xe63e,	// (0x0001d097) vkb2_cell_keypad_pane_g1

0xa928,	// (0x00019381) vkb2_cell_keypad_pane_t1_ParamLimits

0xa928,	// (0x00019381) vkb2_cell_keypad_pane_t1

0xe64c,	// (0x0001d0a5) vkb2_cell_bottom_grid_pane_ParamLimits

0xe64c,	// (0x0001d0a5) vkb2_cell_bottom_grid_pane

0xe685,	// (0x0001d0de) vkb2_cell_bottom_grid_pane_g1

0x8b08,	// (0x00017561) aid_call2_pane_cp02

0x8b10,	// (0x00017569) aid_call_pane_cp02

0x8b18,	// (0x00017571) clock_digital_number_pane_cp10

0x8b20,	// (0x00017579) clock_digital_number_pane_cp11

0x8b28,	// (0x00017581) clock_digital_number_pane_cp12

0x8b30,	// (0x00017589) clock_digital_number_pane_cp13

0x8b38,	// (0x00017591) clock_digital_separator_pane_cp10

0x38b0,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g1

0x38b0,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g2

0x8b40,	// (0x00017599) popup_clock_digital_analogue_window_cp2_g3

0x38b0,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g4

0x8b40,	// (0x00017599) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd49,	// (0x0001e7a2) popup_clock_digital_analogue_window_cp2_g

0x8b48,	// (0x000175a1) popup_clock_digital_analogue_window_cp2_t1

0x8b56,	// (0x000175af) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd54,	// (0x0001e7ad) popup_clock_digital_analogue_window_cp2_t

0x6e29,	// (0x00015882) clock_digital_number_pane_cp10_g1

0x6e29,	// (0x00015882) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001e59c) clock_digital_number_pane_cp10_g

0x6e29,	// (0x00015882) clock_digital_separator_pane_cp10_g1

0x6e29,	// (0x00015882) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001e59c) clock_digital_separator_pane_cp10_g

0x8985,	// (0x000173de) uniindi_top_pane_g3

0x8996,	// (0x000173ef) uniindi_top_pane_g4

0xe431,	// (0x0001ce8a) vkb2_row_keypad_pane_ParamLimits

0xe431,	// (0x0001ce8a) vkb2_row_keypad_pane

0xe6a1,	// (0x0001d0fa) vkb2_cell_t_keypad_pane_ParamLimits

0xe6a1,	// (0x0001d0fa) vkb2_cell_t_keypad_pane

0xe6ae,	// (0x0001d107) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe6ae,	// (0x0001d107) vkb2_cell_t_keypad_pane_cp08

0xe6be,	// (0x0001d117) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe6be,	// (0x0001d117) vkb2_cell_t_keypad_pane_cp09

0xe6cf,	// (0x0001d128) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe6cf,	// (0x0001d128) vkb2_cell_t_keypad_pane_cp01

0xe6df,	// (0x0001d138) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe6df,	// (0x0001d138) vkb2_cell_t_keypad_pane_cp02

0xe6ef,	// (0x0001d148) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe6ef,	// (0x0001d148) vkb2_cell_t_keypad_pane_cp03

0xe6ff,	// (0x0001d158) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe6ff,	// (0x0001d158) vkb2_cell_t_keypad_pane_cp04

0xe70f,	// (0x0001d168) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe70f,	// (0x0001d168) vkb2_cell_t_keypad_pane_cp05

0xe71f,	// (0x0001d178) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe71f,	// (0x0001d178) vkb2_cell_t_keypad_pane_cp06

0xe72f,	// (0x0001d188) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe72f,	// (0x0001d188) vkb2_cell_t_keypad_pane_cp07

0xe73f,	// (0x0001d198) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe73f,	// (0x0001d198) vkb2_cell_t_keypad_pane_cp10

0x7061,	// (0x00015aba) vkb2_cell_t_keypad_pane_g1

0xa93f,	// (0x00019398) vkb2_cell_t_keypad_pane_t1

0x2214,	// (0x00010c6d) popup_grid_graphic2_window

0xe754,	// (0x0001d1ad) aid_size_cell_graphic2_ParamLimits

0xe754,	// (0x0001d1ad) aid_size_cell_graphic2

0xe78c,	// (0x0001d1e5) bg_popup_window_pane_cp21_ParamLimits

0xe78c,	// (0x0001d1e5) bg_popup_window_pane_cp21

0xe79a,	// (0x0001d1f3) graphic2_pages_pane_ParamLimits

0xe79a,	// (0x0001d1f3) graphic2_pages_pane

0xe7d4,	// (0x0001d22d) grid_graphic2_control_pane_ParamLimits

0xe7d4,	// (0x0001d22d) grid_graphic2_control_pane

0xe80a,	// (0x0001d263) grid_graphic2_pane_ParamLimits

0xe80a,	// (0x0001d263) grid_graphic2_pane

0xe86a,	// (0x0001d2c3) cell_graphic2_pane

0x2214,	// (0x00010c6d) main_comp_mode_pane

0x8223,	// (0x00016c7c) list_ai3_gene_pane_ParamLimits

0x85e4,	// (0x0001703d) bg_popup_window_pane_cp19_ParamLimits

0x85f0,	// (0x00017049) bg_touch_area_indi_pane_ParamLimits

0x85f0,	// (0x00017049) bg_touch_area_indi_pane

0x8606,	// (0x0001705f) bg_touch_area_indi_pane_cp01_ParamLimits

0x8606,	// (0x0001705f) bg_touch_area_indi_pane_cp01

0x861c,	// (0x00017075) bg_touch_area_indi_pane_cp02_ParamLimits

0x861c,	// (0x00017075) bg_touch_area_indi_pane_cp02

0x8632,	// (0x0001708b) bg_touch_area_indi_pane_cp03_ParamLimits

0x8632,	// (0x0001708b) bg_touch_area_indi_pane_cp03

0x8648,	// (0x000170a1) popup_slider_window_g1_ParamLimits

0x8664,	// (0x000170bd) popup_slider_window_g2_ParamLimits

0x8680,	// (0x000170d9) popup_slider_window_g3_ParamLimits

0xfcde,	// (0x0001e737) popup_slider_window_g_ParamLimits

0x86dc,	// (0x00017135) popup_slider_window_t1_ParamLimits

0x874e,	// (0x000171a7) small_volume_slider_vertical_pane_ParamLimits

0xe86a,	// (0x0001d2c3) cell_graphic2_pane_ParamLimits

0xe8a6,	// (0x0001d2ff) bg_button_pane_cp10_ParamLimits

0xe8a6,	// (0x0001d2ff) bg_button_pane_cp10

0xe8b7,	// (0x0001d310) bg_button_pane_cp11_ParamLimits

0xe8b7,	// (0x0001d310) bg_button_pane_cp11

0xe8c8,	// (0x0001d321) graphic2_pages_pane_g1_ParamLimits

0xe8c8,	// (0x0001d321) graphic2_pages_pane_g1

0xe8db,	// (0x0001d334) graphic2_pages_pane_g2_ParamLimits

0xe8db,	// (0x0001d334) graphic2_pages_pane_g2

0x0001,

0xfda2,	// (0x0001e7fb) graphic2_pages_pane_g_ParamLimits

0xfda2,	// (0x0001e7fb) graphic2_pages_pane_g

0xe8f1,	// (0x0001d34a) graphic2_pages_pane_t1_ParamLimits

0xe8f1,	// (0x0001d34a) graphic2_pages_pane_t1

0xe907,	// (0x0001d360) cell_graphic2_control_pane_ParamLimits

0xe907,	// (0x0001d360) cell_graphic2_control_pane

0xe926,	// (0x0001d37f) cell_graphic2_pane_g1_ParamLimits

0xe926,	// (0x0001d37f) cell_graphic2_pane_g1

0xe933,	// (0x0001d38c) cell_graphic2_pane_g2_ParamLimits

0xe933,	// (0x0001d38c) cell_graphic2_pane_g2

0xe940,	// (0x0001d399) cell_graphic2_pane_g3_ParamLimits

0xe940,	// (0x0001d399) cell_graphic2_pane_g3

0xe94d,	// (0x0001d3a6) cell_graphic2_pane_g4_ParamLimits

0xe94d,	// (0x0001d3a6) cell_graphic2_pane_g4

0xe95a,	// (0x0001d3b3) cell_graphic2_pane_g5_ParamLimits

0xe95a,	// (0x0001d3b3) cell_graphic2_pane_g5

0x0004,

0xfda7,	// (0x0001e800) cell_graphic2_pane_g_ParamLimits

0xfda7,	// (0x0001e800) cell_graphic2_pane_g

0xe975,	// (0x0001d3ce) cell_graphic2_pane_t1_ParamLimits

0xe975,	// (0x0001d3ce) cell_graphic2_pane_t1

0x47e3,	// (0x0001323c) grid_highlight_pane_cp11_ParamLimits

0x47e3,	// (0x0001323c) grid_highlight_pane_cp11

0x268c,	// (0x000110e5) bg_button_pane_cp05

0xe99e,	// (0x0001d3f7) cell_graphic2_control_pane_g1

0x6e29,	// (0x00015882) bg_touch_area_indi_pane_g1

0xa96b,	// (0x000193c4) aid_cmod_rocker_key_size

0xa975,	// (0x000193ce) aid_cmode_itu_key_size

0xa97f,	// (0x000193d8) main_cmode_video_pane

0xa987,	// (0x000193e0) main_comp_mode_itu_pane

0xa991,	// (0x000193ea) main_comp_mode_rocker_pane

0xa999,	// (0x000193f2) cell_cmode_rocker_pane_ParamLimits

0xa999,	// (0x000193f2) cell_cmode_rocker_pane

0xa9ab,	// (0x00019404) cell_cmode_itu_pane_ParamLimits

0xa9ab,	// (0x00019404) cell_cmode_itu_pane

0x30f5,	// (0x00011b4e) bg_button_pane_cp06_ParamLimits

0x30f5,	// (0x00011b4e) bg_button_pane_cp06

0x7061,	// (0x00015aba) cell_cmode_rocker_pane_g1_ParamLimits

0x7061,	// (0x00015aba) cell_cmode_rocker_pane_g1

0x87ef,	// (0x00017248) cell_cmode_rocker_pane_g2_ParamLimits

0x87ef,	// (0x00017248) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0001e810) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0001e810) cell_cmode_rocker_pane_g

0x2214,	// (0x00010c6d) bg_button_pane_cp07

0xa9c0,	// (0x00019419) cell_cmode_itu_pane_g1

0xa9c9,	// (0x00019422) cell_cmode_itu_pane_t1

0xa9d7,	// (0x00019430) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0001e815) cell_cmode_itu_pane_t

0x8a07,	// (0x00017460) aid_touch_ctrl_left

0x8a0f,	// (0x00017468) aid_touch_ctrl_right

0x2214,	// (0x00010c6d) compa_mode_pane

0xe9c6,	// (0x0001d41f) aid_cmod_rocker_key_size_cp

0xe9d0,	// (0x0001d429) aid_cmode_itu_key_size_cp

0xa9e5,	// (0x0001943e) compa_mode_pane_g1

0xa9ed,	// (0x00019446) compa_mode_pane_g2

0xa9f5,	// (0x0001944e) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0001e81a) compa_mode_pane_g

0xe9da,	// (0x0001d433) main_comp_mode_itu_pane_cp

0xe9e2,	// (0x0001d43b) main_comp_mode_rocker_pane_cp

0xe9ea,	// (0x0001d443) cell_cmode_itu_pane_cp_ParamLimits

0xe9ea,	// (0x0001d443) cell_cmode_itu_pane_cp

0xe9ff,	// (0x0001d458) cell_cmode_rocker_pane_cp_ParamLimits

0xe9ff,	// (0x0001d458) cell_cmode_rocker_pane_cp

0x30f5,	// (0x00011b4e) bg_button_pane_cp06_cp_ParamLimits

0x30f5,	// (0x00011b4e) bg_button_pane_cp06_cp

0x7061,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7061,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp

0x6e29,	// (0x00015882) cell_cmode_rocker_pane_g2_cp

0x2214,	// (0x00010c6d) bg_button_pane_cp07_cp

0xea11,	// (0x0001d46a) cell_cmode_itu_pane_g1_cp

0xea1a,	// (0x0001d473) cell_cmode_itu_pane_t1_cp

0xea28,	// (0x0001d481) cell_cmode_itu_pane_t2_cp

0x5bb5,	// (0x0001460e) settings_code_pane_cp2

0x23e5,	// (0x00010e3e) bg_popup_window_pane_cp3_ParamLimits

0x288a,	// (0x000112e3) heading_pane_cp3_ParamLimits

0x2896,	// (0x000112ef) listscroll_popup_graphic_pane_ParamLimits

0xdda4,	// (0x0001c7fd) fep_hwr_aid_pane_ParamLimits

0xe156,	// (0x0001cbaf) aid_touch_sctrl_top_ParamLimits

0xe163,	// (0x0001cbbc) sctrl_sk_top_pane_g1_ParamLimits

0x7061,	// (0x00015aba) sctrl_sk_top_pane_g2_ParamLimits

0xfcf7,	// (0x0001e750) sctrl_sk_top_pane_g_ParamLimits

0xe170,	// (0x0001cbc9) sctrl_sk_top_pane_t1_ParamLimits

0xe156,	// (0x0001cbaf) aid_touch_sctrl_bottom_ParamLimits

0xe170,	// (0x0001cbc9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8951,	// (0x000173aa) aid_area_touch_clock

0xe328,	// (0x0001cd81) aid_vkb2_area_top_pane_cell_ParamLimits

0xe328,	// (0x0001cd81) aid_vkb2_area_top_pane_cell

0xe453,	// (0x0001ceac) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe453,	// (0x0001ceac) aid_vkb2_area_bottom_pane_cell

0xa8d8,	// (0x00019331) popup_char_count_window

0xa9fd,	// (0x00019456) popup_char_count_window_g1

0xaa06,	// (0x0001945f) popup_char_count_window_g2

0xaa0f,	// (0x00019468) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0001e821) popup_char_count_window_g

0xaa18,	// (0x00019471) popup_char_count_window_t1

0xe216,	// (0x0001cc6f) popup_fep_char_preview_window_ParamLimits

0xe216,	// (0x0001cc6f) popup_fep_char_preview_window

0xe346,	// (0x0001cd9f) vkb2_top_candi_pane_ParamLimits

0xe346,	// (0x0001cd9f) vkb2_top_candi_pane

0xea36,	// (0x0001d48f) cell_vkb2_top_candi_pane_ParamLimits

0xea36,	// (0x0001d48f) cell_vkb2_top_candi_pane

0x4db3,	// (0x0001380c) bg_popup_fep_char_preview_window_ParamLimits

0x4db3,	// (0x0001380c) bg_popup_fep_char_preview_window

0xea6f,	// (0x0001d4c8) popup_fep_char_preview_window_t1_ParamLimits

0xea6f,	// (0x0001d4c8) popup_fep_char_preview_window_t1

0xaa36,	// (0x0001948f) bg_popup_fep_char_preview_window_g1

0xaa2e,	// (0x00019487) bg_popup_fep_char_preview_window_g2

0xaa26,	// (0x0001947f) bg_popup_fep_char_preview_window_g3

0xaa56,	// (0x000194af) bg_popup_fep_char_preview_window_g4

0xaa4e,	// (0x000194a7) bg_popup_fep_char_preview_window_g5

0xeaa9,	// (0x0001d502) bg_popup_fep_char_preview_window_g6

0xaa46,	// (0x0001949f) bg_popup_fep_char_preview_window_g7

0xaa3e,	// (0x00019497) bg_popup_fep_char_preview_window_g8

0xaa5e,	// (0x000194b7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0001e828) bg_popup_fep_char_preview_window_g

0x7061,	// (0x00015aba) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7061,	// (0x00015aba) cell_vkb2_top_candi_pane_g1

0x740a,	// (0x00015e63) cell_vkb2_top_candi_pane_g2_ParamLimits

0x740a,	// (0x00015e63) cell_vkb2_top_candi_pane_g2

0x742b,	// (0x00015e84) cell_vkb2_top_candi_pane_g3_ParamLimits

0x742b,	// (0x00015e84) cell_vkb2_top_candi_pane_g3

0xeab1,	// (0x0001d50a) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeab1,	// (0x0001d50a) cell_vkb2_top_candi_pane_g4

0xa8a9,	// (0x00019302) cell_vkb2_top_candi_pane_g5_ParamLimits

0xa8a9,	// (0x00019302) cell_vkb2_top_candi_pane_g5

0x87ef,	// (0x00017248) cell_vkb2_top_candi_pane_g6_ParamLimits

0x87ef,	// (0x00017248) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0001e83b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0001e83b) cell_vkb2_top_candi_pane_g

0xead2,	// (0x0001d52b) cell_vkb2_top_candi_pane_t1

0xdbbc,	// (0x0001c615) aid_size_touch_slider_mark_ParamLimits

0xdbbc,	// (0x0001c615) aid_size_touch_slider_mark

0xe7c8,	// (0x0001d221) grid_graphic2_catg_pane_ParamLimits

0xe7c8,	// (0x0001d221) grid_graphic2_catg_pane

0xe846,	// (0x0001d29f) popup_grid_graphic2_window_t1_ParamLimits

0xe846,	// (0x0001d29f) popup_grid_graphic2_window_t1

0xe858,	// (0x0001d2b1) popup_grid_graphic2_window_t2_ParamLimits

0xe858,	// (0x0001d2b1) popup_grid_graphic2_window_t2

0x0001,

0xfd9d,	// (0x0001e7f6) popup_grid_graphic2_window_t_ParamLimits

0xfd9d,	// (0x0001e7f6) popup_grid_graphic2_window_t

0x268c,	// (0x000110e5) bg_button_pane_cp05_ParamLimits

0xe99e,	// (0x0001d3f7) cell_graphic2_control_pane_g1_ParamLimits

0xeae8,	// (0x0001d541) cell_graphic2_catg_pane_ParamLimits

0xeae8,	// (0x0001d541) cell_graphic2_catg_pane

0x2214,	// (0x00010c6d) bg_button_pane_cp12

0xeafa,	// (0x0001d553) cell_graphic2_catg_pane_g1

0x891d,	// (0x00017376) cell_tb_ext_pane_t1_ParamLimits

0xe59e,	// (0x0001cff7) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe59e,	// (0x0001cff7) vkb2_top_cell_right_narrow_pane

0xe5b6,	// (0x0001d00f) vkb2_top_cell_right_wide_pane_ParamLimits

0xe5b6,	// (0x0001d00f) vkb2_top_cell_right_wide_pane

0xdd96,	// (0x0001c7ef) bg_vkb2_func_pane_ParamLimits

0xdd96,	// (0x0001c7ef) bg_vkb2_func_pane

0xe627,	// (0x0001d080) vkb2_top_cell_left_pane_g1_ParamLimits

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp03_ParamLimits

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp03

0xe685,	// (0x0001d0de) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x46dd,	// (0x00013136) bg_vkb2_func_pane_g1

0x46d5,	// (0x0001312e) bg_vkb2_func_pane_g2

0x46e5,	// (0x0001313e) bg_vkb2_func_pane_g3

0x46ed,	// (0x00013146) bg_vkb2_func_pane_g4

0x46f5,	// (0x0001314e) bg_vkb2_func_pane_g5

0x46fd,	// (0x00013156) bg_vkb2_func_pane_g6

0x470d,	// (0x00013166) bg_vkb2_func_pane_g7

0x4705,	// (0x0001315e) bg_vkb2_func_pane_g8

0x46cd,	// (0x00013126) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0001e848) bg_vkb2_func_pane_g

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp01_ParamLimits

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp01

0xe627,	// (0x0001d080) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe627,	// (0x0001d080) vkb2_top_cell_right_wide_pane_g1

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp02_ParamLimits

0xdd96,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp02

0xe685,	// (0x0001d0de) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe685,	// (0x0001d0de) vkb2_top_cell_right_narrow_pane_g1

0x8576,	// (0x00016fcf) aid_touch_area_decrease_ParamLimits

0x8576,	// (0x00016fcf) aid_touch_area_decrease

0x858e,	// (0x00016fe7) aid_touch_area_increase_ParamLimits

0x858e,	// (0x00016fe7) aid_touch_area_increase

0x859a,	// (0x00016ff3) aid_touch_area_mute_ParamLimits

0x859a,	// (0x00016ff3) aid_touch_area_mute

0x85b6,	// (0x0001700f) aid_touch_area_slider_ParamLimits

0x85b6,	// (0x0001700f) aid_touch_area_slider

0x869c,	// (0x000170f5) popup_slider_window_g4_ParamLimits

0x869c,	// (0x000170f5) popup_slider_window_g4

0x86a8,	// (0x00017101) popup_slider_window_g5_ParamLimits

0x86a8,	// (0x00017101) popup_slider_window_g5

0x86ca,	// (0x00017123) popup_slider_window_g6_ParamLimits

0x86ca,	// (0x00017123) popup_slider_window_g6

0x8708,	// (0x00017161) popup_slider_window_t2_ParamLimits

0x8708,	// (0x00017161) popup_slider_window_t2

0x0001,

0xfceb,	// (0x0001e744) popup_slider_window_t_ParamLimits

0xfceb,	// (0x0001e744) popup_slider_window_t

0x8720,	// (0x00017179) slider_pane_ParamLimits

0x8720,	// (0x00017179) slider_pane

0xaa66,	// (0x000194bf) slider_pane_g1_ParamLimits

0xaa66,	// (0x000194bf) slider_pane_g1

0xaa7a,	// (0x000194d3) slider_pane_g2_ParamLimits

0xaa7a,	// (0x000194d3) slider_pane_g2

0xaa90,	// (0x000194e9) slider_pane_g3_ParamLimits

0xaa90,	// (0x000194e9) slider_pane_g3

0x0003,

0xfe02,	// (0x0001e85b) slider_pane_g_ParamLimits

0xfe02,	// (0x0001e85b) slider_pane_g

0xd848,	// (0x0001c2a1) popup_tb_float_extension_window_ParamLimits

0xd848,	// (0x0001c2a1) popup_tb_float_extension_window

0xaabc,	// (0x00019515) aid_size_cell_tb_float_ext

0x2214,	// (0x00010c6d) bg_popup_sub_window_cp28

0xaac7,	// (0x00019520) grid_tb_float_ext_pane

0xaacf,	// (0x00019528) cell_tb_float_ext_pane_ParamLimits

0xaacf,	// (0x00019528) cell_tb_float_ext_pane

0xaae7,	// (0x00019540) cell_tb_float_ext_pane_g1

0xaaf0,	// (0x00019549) grid_highlight_pane_cp12

0xded1,	// (0x0001c92a) cell_last_hwr_side_pane_ParamLimits

0xded1,	// (0x0001c92a) cell_last_hwr_side_pane

0x6e29,	// (0x00015882) cell_last_hwr_side_pane_g1

0xaaf9,	// (0x00019552) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0001e864) cell_last_hwr_side_pane_g

0xe51b,	// (0x0001cf74) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe51b,	// (0x0001cf74) vkb2_area_bottom_space_btn_pane

0x7061,	// (0x00015aba) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa93f,	// (0x00019398) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xead2,	// (0x0001d52b) cell_vkb2_top_candi_pane_t1_ParamLimits

0xeb03,	// (0x0001d55c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xeb03,	// (0x0001d55c) vkb2_area_bottom_space_btn_pane_g1

0xeb39,	// (0x0001d592) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xeb39,	// (0x0001d592) vkb2_area_bottom_space_btn_pane_g2

0xeb6f,	// (0x0001d5c8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xeb6f,	// (0x0001d5c8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0001e869) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0001e869) vkb2_area_bottom_space_btn_pane_g

0xde45,	// (0x0001c89e) cel_fep_hwr_func_pane_ParamLimits

0xde45,	// (0x0001c89e) cel_fep_hwr_func_pane

0xde81,	// (0x0001c8da) cell_hwr_side_button_pane_ParamLimits

0xde81,	// (0x0001c8da) cell_hwr_side_button_pane

0x8951,	// (0x000173aa) aid_area_touch_clock_ParamLimits

0x268c,	// (0x000110e5) bg_uniindi_top_pane_ParamLimits

0x8963,	// (0x000173bc) uniindi_top_pane_g1_ParamLimits

0x8979,	// (0x000173d2) uniindi_top_pane_g2_ParamLimits

0x8985,	// (0x000173de) uniindi_top_pane_g3_ParamLimits

0x8996,	// (0x000173ef) uniindi_top_pane_g4_ParamLimits

0xfd23,	// (0x0001e77c) uniindi_top_pane_g_ParamLimits

0x89a3,	// (0x000173fc) uniindi_top_pane_t1_ParamLimits

0x268c,	// (0x000110e5) bg_vkb2_func_pane_cp01_ParamLimits

0x268c,	// (0x000110e5) bg_vkb2_func_pane_cp01

0xab02,	// (0x0001955b) cel_fep_hwr_func_pane_g1_ParamLimits

0xab02,	// (0x0001955b) cel_fep_hwr_func_pane_g1

0x268c,	// (0x000110e5) bg_vkb2_func_pane_cp02_ParamLimits

0x268c,	// (0x000110e5) bg_vkb2_func_pane_cp02

0xab02,	// (0x0001955b) cell_hwr_side_button_pane_g1_ParamLimits

0xab02,	// (0x0001955b) cell_hwr_side_button_pane_g1

0x4561,	// (0x00012fba) status_pane_g4_ParamLimits

0x4561,	// (0x00012fba) status_pane_g4

0x4579,	// (0x00012fd2) status_pane_t1

0x6c0b,	// (0x00015664) form2_midp_gauge_slider_cont_pane

0x6c13,	// (0x0001566c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x6c25,	// (0x0001567e) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6c37,	// (0x00015690) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001e54f) form2_midp_gauge_slider_pane_t_ParamLimits

0x6c49,	// (0x000156a2) form2_midp_slider_pane_ParamLimits

0xe1d6,	// (0x0001cc2f) aid_size_cell_func_vkb2_ParamLimits

0xe1d6,	// (0x0001cc2f) aid_size_cell_func_vkb2

0xaaa8,	// (0x00019501) slider_pane_g4_ParamLimits

0xaaa8,	// (0x00019501) slider_pane_g4

0xebb5,	// (0x0001d60e) form2_midp_gauge_slider_pane_t2_cp01

0xebc3,	// (0x0001d61c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xebc3,	// (0x0001d61c) form2_midp_gauge_slider_pane_t3_cp01

0xebe0,	// (0x0001d639) form2_midp_slider_pane_cp01

0x2214,	// (0x00010c6d) navi_smil_pane

0xab32,	// (0x0001958b) navi_smil_pane_g1

0xab3a,	// (0x00019593) navi_smil_pane_t1

0xab10,	// (0x00019569) form2_midp_slider_pane_g1

0xab19,	// (0x00019572) form2_midp_slider_pane_g2

0xab21,	// (0x0001957a) form2_midp_slider_pane_g3

0xab10,	// (0x00019569) form2_midp_slider_pane_g4

0xebe9,	// (0x0001d642) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0001e872) form2_midp_slider_pane_g

0xeba5,	// (0x0001d5fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xeba5,	// (0x0001d5fe) vkb2_area_bottom_space_btn_pane_g4

0x43a3,	// (0x00012dfc) lc0_navi_pane_ParamLimits

0x43a3,	// (0x00012dfc) lc0_navi_pane

0x4419,	// (0x00012e72) lc0_stat_indi_pane_ParamLimits

0x4419,	// (0x00012e72) lc0_stat_indi_pane

0x4430,	// (0x00012e89) ls0_title_pane_ParamLimits

0x4430,	// (0x00012e89) ls0_title_pane

0x30f5,	// (0x00011b4e) bg_popup_sub_pane_cp14_ParamLimits

0x8938,	// (0x00017391) list_uniindi_pane_ParamLimits

0x8944,	// (0x0001739d) uniindi_top_pane_ParamLimits

0x89df,	// (0x00017438) list_single_uniindi_pane_g1_ParamLimits

0x89f2,	// (0x0001744b) list_single_uniindi_pane_t1_ParamLimits

0xebf2,	// (0x0001d64b) lc0_stat_clock_pane_ParamLimits

0xebf2,	// (0x0001d64b) lc0_stat_clock_pane

0xebff,	// (0x0001d658) lc0_stat_indi_pane_g1_ParamLimits

0xebff,	// (0x0001d658) lc0_stat_indi_pane_g1

0xec0c,	// (0x0001d665) lc0_stat_indi_pane_g2_ParamLimits

0xec0c,	// (0x0001d665) lc0_stat_indi_pane_g2

0x0001,

0xfe24,	// (0x0001e87d) lc0_stat_indi_pane_g_ParamLimits

0xfe24,	// (0x0001e87d) lc0_stat_indi_pane_g

0xec19,	// (0x0001d672) lc0_uni_indicator_pane_ParamLimits

0xec19,	// (0x0001d672) lc0_uni_indicator_pane

0xab48,	// (0x000195a1) ls0_title_pane_g1_ParamLimits

0xab48,	// (0x000195a1) ls0_title_pane_g1

0xec26,	// (0x0001d67f) ls0_title_pane_t1_ParamLimits

0xec26,	// (0x0001d67f) ls0_title_pane_t1

0xec5c,	// (0x0001d6b5) lc0_uni_indicator_pane_g1_ParamLimits

0xec5c,	// (0x0001d6b5) lc0_uni_indicator_pane_g1

0xab5c,	// (0x000195b5) lc0_stat_clock_pane_t1

0x2214,	// (0x00010c6d) main_ai5_pane

0xab6a,	// (0x000195c3) ai5_sk_pane_ParamLimits

0xab6a,	// (0x000195c3) ai5_sk_pane

0xec6e,	// (0x0001d6c7) cell_ai5_widget_pane_ParamLimits

0xec6e,	// (0x0001d6c7) cell_ai5_widget_pane

0xab77,	// (0x000195d0) aid_size_cell_widget_grid

0xab84,	// (0x000195dd) bg_ai5_widget_pane_ParamLimits

0xab84,	// (0x000195dd) bg_ai5_widget_pane

0xed01,	// (0x0001d75a) cell_ai5_widget_pane_g2

0xed15,	// (0x0001d76e) cell_ai5_widget_pane_g3

0xed2f,	// (0x0001d788) cell_ai5_widget_pane_g4

0xed3f,	// (0x0001d798) cell_ai5_widget_pane_g5

0xed4f,	// (0x0001d7a8) cell_ai5_widget_pane_g6

0xed5b,	// (0x0001d7b4) cell_ai5_widget_pane_g7

0xeda3,	// (0x0001d7fc) cell_ai5_widget_pane_t1_ParamLimits

0xeda3,	// (0x0001d7fc) cell_ai5_widget_pane_t1

0xedc0,	// (0x0001d819) cell_ai5_widget_pane_t2_ParamLimits

0xedc0,	// (0x0001d819) cell_ai5_widget_pane_t2

0xedd8,	// (0x0001d831) cell_ai5_widget_pane_t3_ParamLimits

0xedd8,	// (0x0001d831) cell_ai5_widget_pane_t3

0xedf0,	// (0x0001d849) cell_ai5_widget_pane_t4_ParamLimits

0xedf0,	// (0x0001d849) cell_ai5_widget_pane_t4

0xee16,	// (0x0001d86f) cell_ai5_widget_pane_t5_ParamLimits

0xee16,	// (0x0001d86f) cell_ai5_widget_pane_t5

0xabbc,	// (0x00019615) cell_ai5_widget_pane_t6_ParamLimits

0xabbc,	// (0x00019615) cell_ai5_widget_pane_t6

0xabce,	// (0x00019627) cell_ai5_widget_pane_t7_ParamLimits

0xabce,	// (0x00019627) cell_ai5_widget_pane_t7

0xee35,	// (0x0001d88e) cell_ai5_widget_pane_t8_ParamLimits

0xee35,	// (0x0001d88e) cell_ai5_widget_pane_t8

0x0009,

0xfe3e,	// (0x0001e897) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x0001e897) cell_ai5_widget_pane_t

0xee94,	// (0x0001d8ed) grid_ai5_widget_pane

0x30f5,	// (0x00011b4e) highlight_cell_ai5_widget_pane_ParamLimits

0x30f5,	// (0x00011b4e) highlight_cell_ai5_widget_pane

0xeea0,	// (0x0001d8f9) ai5_sk_left_pane

0xeeaa,	// (0x0001d903) ai5_sk_middle_pane

0xeeb4,	// (0x0001d90d) ai5_sk_right_pane

0xabe7,	// (0x00019640) bg_ai5_widget_pane_g1_ParamLimits

0xabe7,	// (0x00019640) bg_ai5_widget_pane_g1

0xabf3,	// (0x0001964c) bg_ai5_widget_pane_g2_ParamLimits

0xabf3,	// (0x0001964c) bg_ai5_widget_pane_g2

0xabff,	// (0x00019658) bg_ai5_widget_pane_g3_ParamLimits

0xabff,	// (0x00019658) bg_ai5_widget_pane_g3

0xac0b,	// (0x00019664) bg_ai5_widget_pane_g4_ParamLimits

0xac0b,	// (0x00019664) bg_ai5_widget_pane_g4

0xac17,	// (0x00019670) bg_ai5_widget_pane_g5_ParamLimits

0xac17,	// (0x00019670) bg_ai5_widget_pane_g5

0xac23,	// (0x0001967c) bg_ai5_widget_pane_g6_ParamLimits

0xac23,	// (0x0001967c) bg_ai5_widget_pane_g6

0xac2f,	// (0x00019688) bg_ai5_widget_pane_g7_ParamLimits

0xac2f,	// (0x00019688) bg_ai5_widget_pane_g7

0xac3b,	// (0x00019694) bg_ai5_widget_pane_g8_ParamLimits

0xac3b,	// (0x00019694) bg_ai5_widget_pane_g8

0xac47,	// (0x000196a0) bg_ai5_widget_pane_g9_ParamLimits

0xac47,	// (0x000196a0) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x0001e8ac) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x0001e8ac) bg_ai5_widget_pane_g

0xac77,	// (0x000196d0) cell_shortcut_ai5_widget_pane_ParamLimits

0xac77,	// (0x000196d0) cell_shortcut_ai5_widget_pane

0xac88,	// (0x000196e1) bg_cell_shortcut_ai5_widget_pane

0x2846,	// (0x0001129f) cell_grid_ai5_widget_pane_g1

0x3eb5,	// (0x0001290e) highlight_cell_shortcut_ai5_widget_pane

0x46d5,	// (0x0001312e) ai5_sk_left_pane_g1

0xac90,	// (0x000196e9) ai5_sk_left_pane_g2

0xac98,	// (0x000196f1) ai5_sk_left_pane_g3

0xaca0,	// (0x000196f9) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x0001e8bf) ai5_sk_left_pane_g

0xaca8,	// (0x00019701) ai5_sk_left_pane_t1

0x46dd,	// (0x00013136) ai5_sk_right_pane_g1

0xacb6,	// (0x0001970f) ai5_sk_right_pane_g2

0xacbe,	// (0x00019717) ai5_sk_right_pane_g3

0xacc6,	// (0x0001971f) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x0001e8c8) ai5_sk_right_pane_g

0xacce,	// (0x00019727) ai5_sk_right_pane_t1

0x46dd,	// (0x00013136) ai5_sk_middle_pane_g1

0x46d5,	// (0x0001312e) ai5_sk_middle_pane_g2

0x46f5,	// (0x0001314e) ai5_sk_middle_pane_g3

0xacbe,	// (0x00019717) ai5_sk_middle_pane_g4

0xac98,	// (0x000196f1) ai5_sk_middle_pane_g5

0xacdc,	// (0x00019735) ai5_sk_middle_pane_g6

0xeebe,	// (0x0001d917) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x0001e8d1) ai5_sk_middle_pane_g

0x424a,	// (0x00012ca3) aid_touch_area_size_lc0_ParamLimits

0x424a,	// (0x00012ca3) aid_touch_area_size_lc0

0xdfc4,	// (0x0001ca1d) cell_hwr_candidate_pane_t1_ParamLimits

0x4264,	// (0x00012cbd) aid_touch_navi_pane

0x4513,	// (0x00012f6c) status_dt_navi_pane_ParamLimits

0x4513,	// (0x00012f6c) status_dt_navi_pane

0x4520,	// (0x00012f79) status_dt_sta_pane_ParamLimits

0x4520,	// (0x00012f79) status_dt_sta_pane

0xeec6,	// (0x0001d91f) dt_sta_controll_pane

0xeed3,	// (0x0001d92c) dt_sta_indi_pane

0xeee4,	// (0x0001d93d) dt_sta_title_pane

0x268c,	// (0x000110e5) bg_dt_sta_indi_pane_ParamLimits

0x268c,	// (0x000110e5) bg_dt_sta_indi_pane

0xeef7,	// (0x0001d950) dt_sta_battery_pane

0xeeff,	// (0x0001d958) dt_sta_indi_pane_g1

0xef08,	// (0x0001d961) dt_sta_indi_pane_g2

0xef11,	// (0x0001d96a) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x0001e8e0) dt_sta_indi_pane_g

0xef1a,	// (0x0001d973) dt_sta_signal_pane

0x30f5,	// (0x00011b4e) bg_dt_sta_title_pane_ParamLimits

0x30f5,	// (0x00011b4e) bg_dt_sta_title_pane

0xef23,	// (0x0001d97c) dt_sta_title_pane_g1

0xef2b,	// (0x0001d984) dt_sta_title_pane_t1_ParamLimits

0xef2b,	// (0x0001d984) dt_sta_title_pane_t1

0x2214,	// (0x00010c6d) bg_dt_sta_control_pane

0xef40,	// (0x0001d999) dt_sta_controll_pane_g1

0xef49,	// (0x0001d9a2) bg_dt_sta_title_pane_g1

0xef52,	// (0x0001d9ab) bg_dt_sta_title_pane_g2

0xef5b,	// (0x0001d9b4) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x0001e8e7) bg_dt_sta_title_pane_g

0x6e29,	// (0x00015882) bg_dt_sta_indi_pane_g1

0xef64,	// (0x0001d9bd) dt_sta_signal_pane_g1

0xef6c,	// (0x0001d9c5) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x0001e8ee) dt_sta_signal_pane_g

0xace4,	// (0x0001973d) dt_sta_battery_pane_g1

0xaced,	// (0x00019746) dt_sta_battery_pane_t1

0x6e29,	// (0x00015882) bg_dt_sta_control_pane_g1

0x39aa,	// (0x00012403) fep_china_uni_eep_pane

0x39b2,	// (0x0001240b) fep_china_uni_entry_pane_ParamLimits

0x39c2,	// (0x0001241b) popup_fep_china_uni_window_g1_ParamLimits

0x39d2,	// (0x0001242b) popup_fep_china_uni_window_g2_ParamLimits

0x39d2,	// (0x0001242b) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001e171) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001e171) popup_fep_china_uni_window_g

0xacfc,	// (0x00019755) fep_china_uni_eep_pane_g1

0xad04,	// (0x0001975d) fep_china_uni_eep_pane_t1

0xab29,	// (0x00019582) aid_touch_area_size_smil_player

0x439b,	// (0x00012df4) lc0_clock_pane

0x456d,	// (0x00012fc6) status_pane_g5_ParamLimits

0x456d,	// (0x00012fc6) status_pane_g5

0xd5bc,	// (0x0001c015) popup_keymap_window

0x4535,	// (0x00012f8e) status_icon_pane

0xed15,	// (0x0001d76e) cell_ai5_widget_pane_g3_ParamLimits

0xed2f,	// (0x0001d788) cell_ai5_widget_pane_g4_ParamLimits

0xed3f,	// (0x0001d798) cell_ai5_widget_pane_g5_ParamLimits

0xed67,	// (0x0001d7c0) cell_ai5_widget_pane_g8_ParamLimits

0xed67,	// (0x0001d7c0) cell_ai5_widget_pane_g8

0xed7b,	// (0x0001d7d4) cell_ai5_widget_pane_g9_ParamLimits

0xed7b,	// (0x0001d7d4) cell_ai5_widget_pane_g9

0xed8f,	// (0x0001d7e8) cell_ai5_widget_pane_g10_ParamLimits

0xed8f,	// (0x0001d7e8) cell_ai5_widget_pane_g10

0xad13,	// (0x0001976c) status_icon_pane_g1

0x2214,	// (0x00010c6d) bg_popup_sub_pane_cp13

0xad1b,	// (0x00019774) popup_keymap_window_t1

0x4194,	// (0x00012bed) control_pane_g6_ParamLimits

0x4194,	// (0x00012bed) control_pane_g6

0x4187,	// (0x00012be0) control_pane_g7_ParamLimits

0x4187,	// (0x00012be0) control_pane_g7

0x417a,	// (0x00012bd3) control_pane_g8_ParamLimits

0x417a,	// (0x00012bd3) control_pane_g8

0xeec6,	// (0x0001d91f) dt_sta_controll_pane_ParamLimits

0xeed3,	// (0x0001d92c) dt_sta_indi_pane_ParamLimits

0xeee4,	// (0x0001d93d) dt_sta_title_pane_ParamLimits

0x2b11,	// (0x0001156a) aid_size_touch_scroll_bar_cale

0xcd49,	// (0x0001b7a2) popup_discreet_window_ParamLimits

0xcd49,	// (0x0001b7a2) popup_discreet_window

0xcdad,	// (0x0001b806) popup_sk_window

0x4db3,	// (0x0001380c) bg_popup_sub_pane_cp28_ParamLimits

0x4db3,	// (0x0001380c) bg_popup_sub_pane_cp28

0xad29,	// (0x00019782) popup_discreet_window_g1_ParamLimits

0xad29,	// (0x00019782) popup_discreet_window_g1

0xad49,	// (0x000197a2) popup_discreet_window_t1_ParamLimits

0xad49,	// (0x000197a2) popup_discreet_window_t1

0xad67,	// (0x000197c0) popup_discreet_window_t2_ParamLimits

0xad67,	// (0x000197c0) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x0001e8f3) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x0001e8f3) popup_discreet_window_t

0xef74,	// (0x0001d9cd) popup_sk_window_g1

0xef7d,	// (0x0001d9d6) popup_sk_window_g2

0x0001,

0xfea1,	// (0x0001e8fa) popup_sk_window_g

0xef86,	// (0x0001d9df) popup_sk_window_t1

0xef94,	// (0x0001d9ed) popup_sk_window_t1_copy1

0xed01,	// (0x0001d75a) cell_ai5_widget_pane_g2_ParamLimits

0xee47,	// (0x0001d8a0) cell_ai5_widget_pane_t9_ParamLimits

0xee47,	// (0x0001d8a0) cell_ai5_widget_pane_t9

0x2214,	// (0x00010c6d) main_fep_fshwr2_pane

0xefa2,	// (0x0001d9fb) aid_fshwr2_btn_pane

0xefae,	// (0x0001da07) aid_fshwr2_syb_pane

0xefc0,	// (0x0001da19) aid_fshwr2_txt_pane

0xefcc,	// (0x0001da25) fshwr2_func_candi_pane

0xefe0,	// (0x0001da39) fshwr2_hwr_syb_pane

0xeff2,	// (0x0001da4b) fshwr2_icf_pane

0x2214,	// (0x00010c6d) fshwr2_icf_bg_pane

0xf01a,	// (0x0001da73) fshwr2_icf_pane_t1_ParamLimits

0xf01a,	// (0x0001da73) fshwr2_icf_pane_t1

0x38b0,	// (0x00012309) fshwr2_func_candi_pane_g1

0xf032,	// (0x0001da8b) fshwr2_func_candi_row_pane_ParamLimits

0xf032,	// (0x0001da8b) fshwr2_func_candi_row_pane

0xf055,	// (0x0001daae) cell_fshwr2_syb_pane_ParamLimits

0xf055,	// (0x0001daae) cell_fshwr2_syb_pane

0xab02,	// (0x0001955b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xab02,	// (0x0001955b) fshwr2_hwr_syb_pane_g1

0x2214,	// (0x00010c6d) bg_popup_call_pane_cp01

0xf074,	// (0x0001dacd) fshwr2_func_candi_cell_pane_ParamLimits

0xf074,	// (0x0001dacd) fshwr2_func_candi_cell_pane

0x53cf,	// (0x00013e28) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x53cf,	// (0x00013e28) fshwr2_func_candi_cell_bg_pane

0xf0b3,	// (0x0001db0c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0b3,	// (0x0001db0c) fshwr2_func_candi_cell_pane_g1

0xf0d3,	// (0x0001db2c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf0d3,	// (0x0001db2c) fshwr2_func_candi_cell_pane_t1

0x2214,	// (0x00010c6d) bg_button_pane_cp08

0x4204,	// (0x00012c5d) cell_fshwr2_syb_bg_pane

0xf0e6,	// (0x0001db3f) cell_fshwr2_syb_bg_pane_g1

0xf0fa,	// (0x0001db53) cell_fshwr2_syb_bg_pane_t1

0x30f5,	// (0x00011b4e) main_tmo_pane

0x585b,	// (0x000142b4) uni_indicator_pane_g1_ParamLimits

0x5871,	// (0x000142ca) uni_indicator_pane_g2_ParamLimits

0x5887,	// (0x000142e0) uni_indicator_pane_g3_ParamLimits

0x589c,	// (0x000142f5) uni_indicator_pane_g4_ParamLimits

0x589c,	// (0x000142f5) uni_indicator_pane_g4

0x58b0,	// (0x00014309) uni_indicator_pane_g5_ParamLimits

0x58b0,	// (0x00014309) uni_indicator_pane_g5

0x58b0,	// (0x00014309) uni_indicator_pane_g6_ParamLimits

0x58b0,	// (0x00014309) uni_indicator_pane_g6

0xf915,	// (0x0001e36e) uni_indicator_pane_g_ParamLimits

0x855a,	// (0x00016fb3) popup_tmo_note_window_ParamLimits

0x855a,	// (0x00016fb3) popup_tmo_note_window

0x30f5,	// (0x00011b4e) fshwr2_bg_pane

0xf0c4,	// (0x0001db1d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf0c4,	// (0x0001db1d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x0001e8ff) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x0001e8ff) fshwr2_func_candi_cell_pane_g

0x6e29,	// (0x00015882) bg_popup_window_pane_cp01

0xf110,	// (0x0001db69) bg_popup_window_pane_g1_cp01

0xadb9,	// (0x00019812) bg_popup_window_pane_cp22_ParamLimits

0xadb9,	// (0x00019812) bg_popup_window_pane_cp22

0xadc7,	// (0x00019820) listscroll_tmo_link_pane_ParamLimits

0xadc7,	// (0x00019820) listscroll_tmo_link_pane

0xae07,	// (0x00019860) popup_tmo_note_window_g1_ParamLimits

0xae07,	// (0x00019860) popup_tmo_note_window_g1

0xae14,	// (0x0001986d) tmo_note_info_pane_ParamLimits

0xae14,	// (0x0001986d) tmo_note_info_pane

0xf119,	// (0x0001db72) list_tmo_note_info_pane_g1_ParamLimits

0xf119,	// (0x0001db72) list_tmo_note_info_pane_g1

0xae2e,	// (0x00019887) list_tmo_note_info_pane_g2_ParamLimits

0xae2e,	// (0x00019887) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x0001e904) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x0001e904) list_tmo_note_info_pane_g

0xae4a,	// (0x000198a3) list_tmo_note_info_text_pane_ParamLimits

0xae4a,	// (0x000198a3) list_tmo_note_info_text_pane

0xae8c,	// (0x000198e5) list_tmo_link_pane

0xae99,	// (0x000198f2) scroll_pane_cp20

0xaea6,	// (0x000198ff) list_single_tmo_link_pane_ParamLimits

0xaea6,	// (0x000198ff) list_single_tmo_link_pane

0xaeb6,	// (0x0001990f) list_single_tmo_link_pane_t1

0xaec4,	// (0x0001991d) list_tmo_note_info_text_pane_t1_ParamLimits

0xaec4,	// (0x0001991d) list_tmo_note_info_text_pane_t1

0x3318,	// (0x00011d71) aid_size_touch_scroll_bar_cp01_ParamLimits

0x3318,	// (0x00011d71) aid_size_touch_scroll_bar_cp01

0xc1b3,	// (0x0001ac0c) aid_size_touch_slider_marker

0xcd99,	// (0x0001b7f2) popup_settings_window_ParamLimits

0xcd99,	// (0x0001b7f2) popup_settings_window

0xc363,	// (0x0001adbc) popup_candi_list_indi_window

0x4264,	// (0x00012cbd) aid_touch_navi_pane_ParamLimits

0xe12a,	// (0x0001cb83) rs_clock_indi_pane

0xe133,	// (0x0001cb8c) sctrl_sk_bottom_pane_ParamLimits

0xe144,	// (0x0001cb9d) sctrl_sk_top_pane_ParamLimits

0xe230,	// (0x0001cc89) popup_fep_tooltip_window

0xab77,	// (0x000195d0) aid_size_cell_widget_grid_ParamLimits

0xeced,	// (0x0001d746) cell_ai5_widget_pane_g1_ParamLimits

0xeced,	// (0x0001d746) cell_ai5_widget_pane_g1

0xed4f,	// (0x0001d7a8) cell_ai5_widget_pane_g6_ParamLimits

0xed5b,	// (0x0001d7b4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe29,	// (0x0001e882) cell_ai5_widget_pane_g_ParamLimits

0xfe29,	// (0x0001e882) cell_ai5_widget_pane_g

0xee76,	// (0x0001d8cf) cell_ai5_widget_pane_t10_ParamLimits

0xee76,	// (0x0001d8cf) cell_ai5_widget_pane_t10

0xee94,	// (0x0001d8ed) grid_ai5_widget_pane_ParamLimits

0xac53,	// (0x000196ac) cell_contacts_ai5_widget_pane_ParamLimits

0xac53,	// (0x000196ac) cell_contacts_ai5_widget_pane

0xad7c,	// (0x000197d5) popup_discreet_window_t3_ParamLimits

0xad7c,	// (0x000197d5) popup_discreet_window_t3

0xf008,	// (0x0001da61) popup_fshwr2_char_preview_window_ParamLimits

0xf008,	// (0x0001da61) popup_fshwr2_char_preview_window

0xf130,	// (0x0001db89) tmo_note_info_pane_t1

0xf145,	// (0x0001db9e) tmo_note_info_pane_t2

0xf15a,	// (0x0001dbb3) tmo_note_info_pane_t3

0xae68,	// (0x000198c1) tmo_note_info_pane_t4

0xae7a,	// (0x000198d3) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x0001e909) tmo_note_info_pane_t

0xae8c,	// (0x000198e5) list_tmo_link_pane_ParamLimits

0xae99,	// (0x000198f2) scroll_pane_cp20_ParamLimits

0x2214,	// (0x00010c6d) bg_popup_fep_char_preview_window_cp01

0xaedd,	// (0x00019936) popup_fshwr2_char_preview_window_t1

0xaeeb,	// (0x00019944) popup_candi_list_indi_window_g1

0xaef4,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane

0xaf00,	// (0x00019959) cell_contacts_ai5_widget_pane_g1

0xaf15,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2

0xaf21,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x0001e914) cell_contacts_ai5_widget_pane_g

0xaf2d,	// (0x00019986) cell_contacts_ai5_widget_pane_t1

0x30f5,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf1d2,	// (0x0001dc2b) settings_container_pane

0x3eb5,	// (0x0001290e) listscroll_set_pane_copy1

0x6387,	// (0x00014de0) scroll_pane_cp121_copy1

0xaf3f,	// (0x00019998) set_content_pane_copy1

0xaf47,	// (0x000199a0) aid_height_set_list_copy1_ParamLimits

0xaf47,	// (0x000199a0) aid_height_set_list_copy1

0x5a87,	// (0x000144e0) aid_size_parent_copy1_ParamLimits

0x5a87,	// (0x000144e0) aid_size_parent_copy1

0xaf53,	// (0x000199ac) button_value_adjust_pane_cp6_copy1_ParamLimits

0xaf53,	// (0x000199ac) button_value_adjust_pane_cp6_copy1

0x4204,	// (0x00012c5d) list_highlight_pane_cp2_copy1_ParamLimits

0x4204,	// (0x00012c5d) list_highlight_pane_cp2_copy1

0xf1de,	// (0x0001dc37) list_set_pane_copy1_ParamLimits

0xf1de,	// (0x0001dc37) list_set_pane_copy1

0xf16f,	// (0x0001dbc8) main_pane_set_t1_copy1_ParamLimits

0xf16f,	// (0x0001dbc8) main_pane_set_t1_copy1

0xf1a9,	// (0x0001dc02) main_pane_set_t2_copy1_ParamLimits

0xf1a9,	// (0x0001dc02) main_pane_set_t2_copy1

0xaf67,	// (0x000199c0) main_pane_set_t3_copy1

0xaf75,	// (0x000199ce) main_pane_set_t4_copy1

0xf1c6,	// (0x0001dc1f) set_content_pane_g1_copy1_ParamLimits

0xf1c6,	// (0x0001dc1f) set_content_pane_g1_copy1

0xaf83,	// (0x000199dc) setting_code_pane_copy1

0xaf8b,	// (0x000199e4) setting_slider_graphic_pane_copy1

0xaf8b,	// (0x000199e4) setting_slider_pane_copy1

0xaf8b,	// (0x000199e4) setting_text_pane_copy1

0xaf8b,	// (0x000199e4) setting_volume_pane_copy1

0xaf93,	// (0x000199ec) settings_code_pane_cp2_copy1

0xaf9b,	// (0x000199f4) settings_code_pane_cp_copy1_ParamLimits

0xaf9b,	// (0x000199f4) settings_code_pane_cp_copy1

0xf26c,	// (0x0001dcc5) volume_set_pane_copy1

0xf274,	// (0x0001dccd) volume_set_pane_g10_copy1

0xf27c,	// (0x0001dcd5) volume_set_pane_g1_copy1

0xf284,	// (0x0001dcdd) volume_set_pane_g2_copy1

0xf28c,	// (0x0001dce5) volume_set_pane_g3_copy1

0xf294,	// (0x0001dced) volume_set_pane_g4_copy1

0xf29c,	// (0x0001dcf5) volume_set_pane_g5_copy1

0xf2a4,	// (0x0001dcfd) volume_set_pane_g6_copy1

0xf2ac,	// (0x0001dd05) volume_set_pane_g7_copy1

0xf2b4,	// (0x0001dd0d) volume_set_pane_g8_copy1

0xf2bc,	// (0x0001dd15) volume_set_pane_g9_copy1

0x23e5,	// (0x00010e3e) bg_set_opt_pane_cp_copy1_ParamLimits

0x23e5,	// (0x00010e3e) bg_set_opt_pane_cp_copy1

0xce83,	// (0x0001b8dc) setting_slider_pane_t1_copy1_ParamLimits

0xce83,	// (0x0001b8dc) setting_slider_pane_t1_copy1

0xf2c4,	// (0x0001dd1d) setting_slider_pane_t2_copy1_ParamLimits

0xf2c4,	// (0x0001dd1d) setting_slider_pane_t2_copy1

0xf2dd,	// (0x0001dd36) setting_slider_pane_t3_copy1_ParamLimits

0xf2dd,	// (0x0001dd36) setting_slider_pane_t3_copy1

0xcec9,	// (0x0001b922) slider_set_pane_copy1_ParamLimits

0xcec9,	// (0x0001b922) slider_set_pane_copy1

0x3218,	// (0x00011c71) set_opt_bg_pane_g1_copy2

0x3220,	// (0x00011c79) set_opt_bg_pane_g2_copy2

0xafaf,	// (0x00019a08) set_opt_bg_pane_g3_copy2

0x3230,	// (0x00011c89) set_opt_bg_pane_g4_copy2

0x3238,	// (0x00011c91) set_opt_bg_pane_g5_copy2

0x3240,	// (0x00011c99) set_opt_bg_pane_g6_copy2

0xf2f4,	// (0x0001dd4d) set_opt_bg_pane_g7_copy2

0xafb7,	// (0x00019a10) set_opt_bg_pane_g8_copy2

0xafbf,	// (0x00019a18) set_opt_bg_pane_g9_copy2

0xdbbc,	// (0x0001c615) aid_size_touch_slider_mark_copy1_ParamLimits

0xdbbc,	// (0x0001c615) aid_size_touch_slider_mark_copy1

0x5bbd,	// (0x00014616) slider_set_pane_g1_copy1

0x5bc6,	// (0x0001461f) slider_set_pane_g2_copy1

0xdbdc,	// (0x0001c635) slider_set_pane_g3_copy1_ParamLimits

0xdbdc,	// (0x0001c635) slider_set_pane_g3_copy1

0xdbf0,	// (0x0001c649) slider_set_pane_g4_copy1_ParamLimits

0xdbf0,	// (0x0001c649) slider_set_pane_g4_copy1

0xdc08,	// (0x0001c661) slider_set_pane_g5_copy1_ParamLimits

0xdc08,	// (0x0001c661) slider_set_pane_g5_copy1

0xdbdc,	// (0x0001c635) slider_set_pane_g6_copy1_ParamLimits

0xdbdc,	// (0x0001c635) slider_set_pane_g6_copy1

0xf2fc,	// (0x0001dd55) slider_set_pane_g7_copy1_ParamLimits

0xf2fc,	// (0x0001dd55) slider_set_pane_g7_copy1

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp2_copy1

0x2427,	// (0x00010e80) setting_slider_graphic_pane_g1_copy1

0xf312,	// (0x0001dd6b) setting_slider_graphic_pane_t1_copy1

0xf321,	// (0x0001dd7a) setting_slider_graphic_pane_t2_copy1

0xf330,	// (0x0001dd89) slider_set_pane_cp_copy1

0xafcf,	// (0x00019a28) input_focus_pane_cp1_copy1

0xafd8,	// (0x00019a31) list_set_text_pane_copy1

0xafe0,	// (0x00019a39) setting_text_pane_g1_copy1

0xcbdf,	// (0x0001b638) set_text_pane_t1_copy1

0xafcf,	// (0x00019a28) input_focus_pane_cp2_copy1

0xafe0,	// (0x00019a39) setting_code_pane_g1_copy1

0xafe9,	// (0x00019a42) setting_code_pane_t1_copy1

0xf338,	// (0x0001dd91) list_set_graphic_pane_copy1

0x2305,	// (0x00010d5e) bg_set_opt_pane_cp4_copy1

0xaff7,	// (0x00019a50) list_set_graphic_pane_g1_copy1_ParamLimits

0xaff7,	// (0x00019a50) list_set_graphic_pane_g1_copy1

0xb003,	// (0x00019a5c) list_set_graphic_pane_g2_copy1

0x3c27,	// (0x00012680) list_set_graphic_pane_t1_copy1_ParamLimits

0x3c27,	// (0x00012680) list_set_graphic_pane_t1_copy1

0x6e29,	// (0x00015882) rs_clock_indi_pane_g1

0xb00b,	// (0x00019a64) rs_clock_indi_pane_t1

0xb019,	// (0x00019a72) rs_indi_pane

0xb021,	// (0x00019a7a) rs_indi_pane_g1

0xb02a,	// (0x00019a83) rs_indi_pane_g2

0xaeeb,	// (0x00019944) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x0001e91b) rs_indi_pane_g

0x3eb5,	// (0x0001290e) bg_popup_preview_window_pane_cp03

0xb033,	// (0x00019a8c) popup_fep_tooltip_window_t1

0x7c08,	// (0x00016661) popup_note2_window_g2_ParamLimits

0x7c08,	// (0x00016661) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0001e6bb) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0001e6bb) popup_note2_window_g

0x81e9,	// (0x00016c42) bg_popup_sub_pane_cp11_ParamLimits

0x81f6,	// (0x00016c4f) cell_ai3_links_pane_g1_ParamLimits

0x820d,	// (0x00016c66) cell_ai3_links_pane_t1

0xcbdf,	// (0x0001b638) set_text_pane_t1_copy1_ParamLimits

0x3ddc,	// (0x00012835) cell_graphic_popup_pane_cp2_ParamLimits

0x3ddc,	// (0x00012835) cell_graphic_popup_pane_cp2

0xb041,	// (0x00019a9a) cell_graphic_popup_pane_g1_cp2

0x29c0,	// (0x00011419) cell_graphic_popup_pane_g2_cp2

0xb049,	// (0x00019aa2) cell_graphic_popup_pane_g3_cp2

0xb051,	// (0x00019aaa) cell_graphic_popup_pane_t2_cp2

0x29d1,	// (0x0001142a) grid_highlight_pane_cp3_cp2

0x3602,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x30f5,	// (0x00011b4e) main_tmo_pane_ParamLimits

0x8552,	// (0x00016fab) popup_tmo_big_image_note_window

0xabb4,	// (0x0001960d) cell_ai5_widget_list_pane

0xece4,	// (0x0001d73d) cell_ai5_widget_lrg_icon_pane

0xf130,	// (0x0001db89) tmo_note_info_pane_t1_ParamLimits

0xf145,	// (0x0001db9e) tmo_note_info_pane_t2_ParamLimits

0xf15a,	// (0x0001dbb3) tmo_note_info_pane_t3_ParamLimits

0xae68,	// (0x000198c1) tmo_note_info_pane_t4_ParamLimits

0xae7a,	// (0x000198d3) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x0001e909) tmo_note_info_pane_t_ParamLimits

0xf1d2,	// (0x0001dc2b) settings_container_pane_ParamLimits

0xafc7,	// (0x00019a20) indicator_popup_pane_cp5

0xafc7,	// (0x00019a20) indicator_popup_pane_cp6

0xf338,	// (0x0001dd91) list_set_graphic_pane_copy1_ParamLimits

0x2214,	// (0x00010c6d) bg_popup_window_pane_cp23

0xb05f,	// (0x00019ab8) popup_tmo_big_image_note_window_g1

0xb068,	// (0x00019ac1) popup_tmo_big_image_note_window_t1

0xb076,	// (0x00019acf) popup_tmo_big_image_note_window_t2

0xb084,	// (0x00019add) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x0001e922) popup_tmo_big_image_note_window_t

0x6e29,	// (0x00015882) cell_ai5_widget_lrg_icon_pane_g1

0xb092,	// (0x00019aeb) cell_ai5_widget_lrg_icon_pane_t1

0xf34c,	// (0x0001dda5) cell_ai5_widget_list_row_pane_ParamLimits

0xf34c,	// (0x0001dda5) cell_ai5_widget_list_row_pane

0xf363,	// (0x0001ddbc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf363,	// (0x0001ddbc) cell_ai5_widget_list_row_pane_g1

0xf370,	// (0x0001ddc9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf370,	// (0x0001ddc9) cell_ai5_widget_list_row_pane_t1

0xf39e,	// (0x0001ddf7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39e,	// (0x0001ddf7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x0001e929) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x0001e929) cell_ai5_widget_list_row_pane_t

0x2214,	// (0x00010c6d) main_fep_vtchi_ss_pane

0xb0c0,	// (0x00019b19) popup_fep_char_pre_window

0xb0c8,	// (0x00019b21) popup_fep_ituss_window

0xf3d5,	// (0x0001de2e) popup_fep_vkbss_window

0xb0f0,	// (0x00019b49) grid_vkbss_keypad_pane_ParamLimits

0xb0f0,	// (0x00019b49) grid_vkbss_keypad_pane

0xb100,	// (0x00019b59) ituss_keypad_pane

0xf3ec,	// (0x0001de45) aid_vkbss_key_offset_ParamLimits

0xf3ec,	// (0x0001de45) aid_vkbss_key_offset

0xf3f8,	// (0x0001de51) cell_vkbss_key_pane_ParamLimits

0xf3f8,	// (0x0001de51) cell_vkbss_key_pane

0x4549,	// (0x00012fa2) bg_cell_vkbss_key_g1_ParamLimits

0x4549,	// (0x00012fa2) bg_cell_vkbss_key_g1

0xb10f,	// (0x00019b68) cell_vkbss_key_3p_pane_ParamLimits

0xb10f,	// (0x00019b68) cell_vkbss_key_3p_pane

0xb129,	// (0x00019b82) cell_vkbss_key_g1_ParamLimits

0xb129,	// (0x00019b82) cell_vkbss_key_g1

0xb143,	// (0x00019b9c) cell_vkbss_key_t1_ParamLimits

0xb143,	// (0x00019b9c) cell_vkbss_key_t1

0xf40e,	// (0x0001de67) cell_ituss_key_pane_ParamLimits

0xf40e,	// (0x0001de67) cell_ituss_key_pane

0xb16e,	// (0x00019bc7) bg_cell_ituss_key_g1_ParamLimits

0xb16e,	// (0x00019bc7) bg_cell_ituss_key_g1

0xb17a,	// (0x00019bd3) cell_ituss_key_pane_g1_ParamLimits

0xb17a,	// (0x00019bd3) cell_ituss_key_pane_g1

0xf41f,	// (0x0001de78) cell_ituss_key_pane_g2_ParamLimits

0xf41f,	// (0x0001de78) cell_ituss_key_pane_g2

0x0002,

0xfed7,	// (0x0001e930) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x0001e930) cell_ituss_key_pane_g

0xf44b,	// (0x0001dea4) cell_ituss_key_t1_ParamLimits

0xf44b,	// (0x0001dea4) cell_ituss_key_t1

0xf481,	// (0x0001deda) cell_ituss_key_t2_ParamLimits

0xf481,	// (0x0001deda) cell_ituss_key_t2

0xf4b2,	// (0x0001df0b) cell_ituss_key_t3_ParamLimits

0xf4b2,	// (0x0001df0b) cell_ituss_key_t3

0xf481,	// (0x0001deda) cell_ituss_key_t4_ParamLimits

0xf481,	// (0x0001deda) cell_ituss_key_t4

0x0004,

0xfede,	// (0x0001e937) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0001e937) cell_ituss_key_t

0xb1b0,	// (0x00019c09) cell_vkbss_key_3p_pane_g1

0xb1a8,	// (0x00019c01) cell_vkbss_key_3p_pane_g2

0xb1a0,	// (0x00019bf9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0001e942) cell_vkbss_key_3p_pane_g

0x3eb5,	// (0x0001290e) bg_popup_fep_char_preview_window_cp02

0xb1b8,	// (0x00019c11) popup_fep_char_pre_window_t1

0xecd1,	// (0x0001d72a) main_ai5_sk_pane

0xaef4,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xaf00,	// (0x00019959) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xaf15,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xaf21,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x0001e914) cell_contacts_ai5_widget_pane_g_ParamLimits

0xaf2d,	// (0x00019986) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x30f5,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4f5,	// (0x0001df4e) main_ai5_sk_pane_g1

0x4bfd,	// (0x00013656) popup_query_code_window_g1

0xf3c6,	// (0x0001de1f) popup_fep_vkb_icf_pane

0xb0da,	// (0x00019b33) popup_fep_vtchi_icf_pane

0xb1c6,	// (0x00019c1f) bg_icf_pane

0xb1d2,	// (0x00019c2b) list_vkb_icf_pane

0xb1de,	// (0x00019c37) bg_icf_pane_cp01

0xb1f1,	// (0x00019c4a) vtchi_icf_list_pane

0xf4fe,	// (0x0001df57) list_vkb_icf_pane_t1_ParamLimits

0xf4fe,	// (0x0001df57) list_vkb_icf_pane_t1

0xb201,	// (0x00019c5a) vtchi_icf_list_pane_t1_ParamLimits

0xb201,	// (0x00019c5a) vtchi_icf_list_pane_t1

0xb0c8,	// (0x00019b21) popup_fep_ituss_window_ParamLimits

0xb0da,	// (0x00019b33) popup_fep_vtchi_icf_pane_ParamLimits

0xb100,	// (0x00019b59) ituss_keypad_pane_ParamLimits

0xf3e2,	// (0x0001de3b) ituss_sks_pane

0xb1c6,	// (0x00019c1f) bg_icf_pane_ParamLimits

0xb0a0,	// (0x00019af9) icf_edit_indi_pane_ParamLimits

0xb0a0,	// (0x00019af9) icf_edit_indi_pane

0xb1d2,	// (0x00019c2b) list_vkb_icf_pane_ParamLimits

0xb1de,	// (0x00019c37) bg_icf_pane_cp01_ParamLimits

0xb0b3,	// (0x00019b0c) icf_edit_indi_pane_cp01_ParamLimits

0xb0b3,	// (0x00019b0c) icf_edit_indi_pane_cp01

0xb1f9,	// (0x00019c52) vtchi_query_pane

0xab02,	// (0x0001955b) icf_edit_indi_pane_g1_ParamLimits

0xab02,	// (0x0001955b) icf_edit_indi_pane_g1

0xf522,	// (0x0001df7b) icf_edit_indi_pane_g2_ParamLimits

0xf522,	// (0x0001df7b) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x0001e95a) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x0001e95a) icf_edit_indi_pane_g

0xf532,	// (0x0001df8b) icf_edit_indi_pane_t1

0xb218,	// (0x00019c71) bg_input_focus_pane_cp042

0xb221,	// (0x00019c7a) vtchi_button_pane

0xb22a,	// (0x00019c83) vtchi_query_pane_t1

0xb238,	// (0x00019c91) vtchi_query_pane_t2

0xb246,	// (0x00019c9f) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x0001e949) vtchi_query_pane_t

0x2214,	// (0x00010c6d) bg_button_pane_cp13

0xb254,	// (0x00019cad) vtchi_button_pane_g1

0xf510,	// (0x0001df69) ituss_sks_pane_g1

0xf519,	// (0x0001df72) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x0001e950) ituss_sks_pane_g

0xb26a,	// (0x00019cc3) ituss_sks_pane_t1

0xb25c,	// (0x00019cb5) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x0001e955) ituss_sks_pane_t

0x6924,	// (0x0001537d) indicator_nsta_pane_cp_g1

0x692d,	// (0x00015386) indicator_nsta_pane_cp_g2

0x6935,	// (0x0001538e) indicator_nsta_pane_cp_g3

0x693d,	// (0x00015396) indicator_nsta_pane_cp_g4

0x6945,	// (0x0001539e) indicator_nsta_pane_cp_g5

0x694d,	// (0x000153a6) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001e505) indicator_nsta_pane_cp_g

0xe98b,	// (0x0001d3e4) cell_graphic2_pane_t2_ParamLimits

0xe98b,	// (0x0001d3e4) cell_graphic2_pane_t2

0x0001,

0xfdb2,	// (0x0001e80b) cell_graphic2_pane_t_ParamLimits

0xfdb2,	// (0x0001e80b) cell_graphic2_pane_t

0xe9b8,	// (0x0001d411) cell_graphic2_control_pane_t1

0x395a,	// (0x000123b3) signal_pane_g3_ParamLimits

0x395a,	// (0x000123b3) signal_pane_g3

0x396b,	// (0x000123c4) signal_pane_g4_ParamLimits

0x396b,	// (0x000123c4) signal_pane_g4

0xf3b0,	// (0x0001de09) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3b0,	// (0x0001de09) cell_ai5_widget_list_row_pane_t3

0xb18e,	// (0x00019be7) cell_ituss_key_pane_t1_ParamLimits

0xb18e,	// (0x00019be7) cell_ituss_key_pane_t1

0x486f,	// (0x000132c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x486f,	// (0x000132c8) form_field_data_wide_pane_vc_t2

0x4881,	// (0x000132da) form_field_data_wide_pane_vc_t3_ParamLimits

0x4881,	// (0x000132da) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0001e256) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0001e256) form_field_data_wide_pane_vc_t

0x6626,	// (0x0001507f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6626,	// (0x0001507f) form_field_slider_wide_pane_vc_t3

0x66e4,	// (0x0001513d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x66e4,	// (0x0001513d) form_field_popup_wide_pane_vc_t2

0x66f9,	// (0x00015152) form_field_popup_wide_pane_vc_t3_ParamLimits

0x66f9,	// (0x00015152) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001e4f4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001e4f4) form_field_popup_wide_pane_vc_t

0xefa2,	// (0x0001d9fb) aid_fshwr2_btn_pane_ParamLimits

0xefae,	// (0x0001da07) aid_fshwr2_syb_pane_ParamLimits

0xefc0,	// (0x0001da19) aid_fshwr2_txt_pane_ParamLimits

0x30f5,	// (0x00011b4e) fshwr2_bg_pane_ParamLimits

0xefcc,	// (0x0001da25) fshwr2_func_candi_pane_ParamLimits

0xefe0,	// (0x0001da39) fshwr2_hwr_syb_pane_ParamLimits

0xeff2,	// (0x0001da4b) fshwr2_icf_pane_ParamLimits

0xc7d7,	// (0x0001b230) list_double_graphic_pane_vc_g4_ParamLimits

0xc7d7,	// (0x0001b230) list_double_graphic_pane_vc_g4

0xf43f,	// (0x0001de98) cell_ituss_key_pane_g3_ParamLimits

0xf43f,	// (0x0001de98) cell_ituss_key_pane_g3

0xf4e3,	// (0x0001df3c) cell_ituss_key_t5_ParamLimits

0xf4e3,	// (0x0001df3c) cell_ituss_key_t5

0xf3d5,	// (0x0001de2e) popup_fep_vkbss_window_ParamLimits

0xecdb,	// (0x0001d734) aid_cell_ai5_quarter

0xf532,	// (0x0001df8b) icf_edit_indi_pane_t1_ParamLimits

0x2734,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2734,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2

0x2747,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2747,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2

0x4ba5,	// (0x000135fe) aid_tch_query_popup_pane_ParamLimits

0x4ba5,	// (0x000135fe) aid_tch_query_popup_pane

0x4ba5,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x4ba5,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1

0x4204,	// (0x00012c5d) cell_fshwr2_syb_bg_pane_ParamLimits

0xf0e6,	// (0x0001db3f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf0fa,	// (0x0001db53) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf3c6,	// (0x0001de1f) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

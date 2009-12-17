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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000057fe };

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
0x4cc5,	// (0x0000a4c3) Screen

0x4ccf,	// (0x0000a4cd) application_window_ParamLimits

0x4ccf,	// (0x0000a4cd) application_window

0xa54c,	// (0x0000fd4a) screen_g1

0x4cfd,	// (0x0000a4fb) area_bottom_pane_ParamLimits

0x4cfd,	// (0x0000a4fb) area_bottom_pane

0xa5bb,	// (0x0000fdb9) area_top_pane_ParamLimits

0xa5bb,	// (0x0000fdb9) area_top_pane

0x8c33,	// (0x0000e431) main_pane_ParamLimits

0x8c33,	// (0x0000e431) main_pane

0xa633,	// (0x0000fe31) misc_graphics

0x61c7,	// (0x0000b9c5) battery_pane_ParamLimits

0x61c7,	// (0x0000b9c5) battery_pane

0xe0f5,	// (0x000138f3) bg_status_flat_pane_g8

0xe0fd,	// (0x000138fb) bg_status_flat_pane_g9

0xd84f,	// (0x0001304d) context_pane_ParamLimits

0xd84f,	// (0x0001304d) context_pane

0x6321,	// (0x0000bb1f) navi_pane_ParamLimits

0x6321,	// (0x0000bb1f) navi_pane

0x6396,	// (0x0000bb94) signal_pane_ParamLimits

0x6396,	// (0x0000bb94) signal_pane

0x0008,

0xf897,	// (0x00015095) bg_status_flat_pane_g

0x6422,	// (0x0000bc20) status_pane_g1_ParamLimits

0x6422,	// (0x0000bc20) status_pane_g1

0x642e,	// (0x0000bc2c) status_pane_g2_ParamLimits

0x642e,	// (0x0000bc2c) status_pane_g2

0xd8b5,	// (0x000130b3) status_pane_g3_ParamLimits

0xd8b5,	// (0x000130b3) status_pane_g3

0x0004,

0xf7d1,	// (0x00014fcf) status_pane_g_ParamLimits

0xf7d1,	// (0x00014fcf) status_pane_g

0x643a,	// (0x0000bc38) title_pane_ParamLimits

0x643a,	// (0x0000bc38) title_pane

0x6495,	// (0x0000bc93) uni_indicator_pane_ParamLimits

0x6495,	// (0x0000bc93) uni_indicator_pane

0xd6a9,	// (0x00012ea7) bg_list_pane_ParamLimits

0xd6a9,	// (0x00012ea7) bg_list_pane

0x5b8f,	// (0x0000b38d) find_pane

0x5b97,	// (0x0000b395) listscroll_app_pane_ParamLimits

0x5b97,	// (0x0000b395) listscroll_app_pane

0xd6c9,	// (0x00012ec7) listscroll_form_pane

0x5ba3,	// (0x0000b3a1) listscroll_gen_pane_ParamLimits

0x5ba3,	// (0x0000b3a1) listscroll_gen_pane

0xd6c9,	// (0x00012ec7) listscroll_set_pane

0x5bb8,	// (0x0000b3b6) main_idle_act_pane

0xc1b6,	// (0x000119b4) main_idle_trad_pane

0xc1b6,	// (0x000119b4) main_list_empty_pane

0xd685,	// (0x00012e83) main_midp_pane

0xd6e3,	// (0x00012ee1) main_pane_g1_ParamLimits

0xd6e3,	// (0x00012ee1) main_pane_g1

0x5bcb,	// (0x0000b3c9) popup_ai_message_window_ParamLimits

0x5bcb,	// (0x0000b3c9) popup_ai_message_window

0x5c4f,	// (0x0000b44d) popup_fep_china_uni_window_ParamLimits

0x5c4f,	// (0x0000b44d) popup_fep_china_uni_window

0xd71b,	// (0x00012f19) popup_fep_japan_candidate_window_ParamLimits

0xd71b,	// (0x00012f19) popup_fep_japan_candidate_window

0xd739,	// (0x00012f37) popup_fep_japan_predictive_window_ParamLimits

0xd739,	// (0x00012f37) popup_fep_japan_predictive_window

0x5c8d,	// (0x0000b48b) popup_find_window

0x5ca6,	// (0x0000b4a4) popup_grid_graphic_window_ParamLimits

0x5ca6,	// (0x0000b4a4) popup_grid_graphic_window

0xd765,	// (0x00012f63) popup_large_graphic_colour_window

0x5d22,	// (0x0000b520) popup_menu_window_ParamLimits

0x5d22,	// (0x0000b520) popup_menu_window

0x5e80,	// (0x0000b67e) popup_note_image_window

0x5e48,	// (0x0000b646) popup_note_wait_window_ParamLimits

0x5e48,	// (0x0000b646) popup_note_wait_window

0x5e96,	// (0x0000b694) popup_note_window_ParamLimits

0x5e96,	// (0x0000b694) popup_note_window

0x5f2a,	// (0x0000b728) popup_query_code_window_ParamLimits

0x5f2a,	// (0x0000b728) popup_query_code_window

0xd784,	// (0x00012f82) popup_query_data_code_window_ParamLimits

0xd784,	// (0x00012f82) popup_query_data_code_window

0x5f62,	// (0x0000b760) popup_query_data_window_ParamLimits

0x5f62,	// (0x0000b760) popup_query_data_window

0x5fd6,	// (0x0000b7d4) popup_query_sat_info_window_ParamLimits

0x5fd6,	// (0x0000b7d4) popup_query_sat_info_window

0x6063,	// (0x0000b861) popup_snote_single_graphic_window_ParamLimits

0x6063,	// (0x0000b861) popup_snote_single_graphic_window

0x6063,	// (0x0000b861) popup_snote_single_text_window_ParamLimits

0x6063,	// (0x0000b861) popup_snote_single_text_window

0xd799,	// (0x00012f97) popup_sub_window_general

0xd7db,	// (0x00012fd9) popup_window_general_ParamLimits

0xd7db,	// (0x00012fd9) popup_window_general

0xd7ee,	// (0x00012fec) power_save_pane

0xcf7f,	// (0x0001277d) control_pane_g1_ParamLimits

0xcf7f,	// (0x0001277d) control_pane_g1

0x92e7,	// (0x0000eae5) control_pane_g2_ParamLimits

0x92e7,	// (0x0000eae5) control_pane_g2

0xc46f,	// (0x00011c6d) control_pane_g3_ParamLimits

0xc46f,	// (0x00011c6d) control_pane_g3

0x0007,

0xf7b9,	// (0x00014fb7) control_pane_g_ParamLimits

0xf7b9,	// (0x00014fb7) control_pane_g

0xcfac,	// (0x000127aa) control_pane_t1_ParamLimits

0xcfac,	// (0x000127aa) control_pane_t1

0xd008,	// (0x00012806) control_pane_t2_ParamLimits

0xd008,	// (0x00012806) control_pane_t2

0x0002,

0xf7ca,	// (0x00014fc8) control_pane_t_ParamLimits

0xf7ca,	// (0x00014fc8) control_pane_t

0xc392,	// (0x00011b90) navi_navi_volume_pane_cp1

0xc39b,	// (0x00011b99) status_small_icon_pane

0xc3a3,	// (0x00011ba1) status_small_pane_g1_ParamLimits

0xc3a3,	// (0x00011ba1) status_small_pane_g1

0xc3d7,	// (0x00011bd5) status_small_pane_g2_ParamLimits

0xc3d7,	// (0x00011bd5) status_small_pane_g2

0xc3e3,	// (0x00011be1) status_small_pane_g3_ParamLimits

0xc3e3,	// (0x00011be1) status_small_pane_g3

0xc3ef,	// (0x00011bed) status_small_pane_g4_ParamLimits

0xc3ef,	// (0x00011bed) status_small_pane_g4

0xc3fb,	// (0x00011bf9) status_small_pane_g5_ParamLimits

0xc3fb,	// (0x00011bf9) status_small_pane_g5

0xc408,	// (0x00011c06) status_small_pane_g6_ParamLimits

0xc408,	// (0x00011c06) status_small_pane_g6

0x0007,

0xf7a8,	// (0x00014fa6) status_small_pane_g_ParamLimits

0xf7a8,	// (0x00014fa6) status_small_pane_g

0xc438,	// (0x00011c36) status_small_pane_t1

0xc45b,	// (0x00011c59) status_small_wait_pane_ParamLimits

0xc45b,	// (0x00011c59) status_small_wait_pane

0x587d,	// (0x0000b07b) aid_levels_signal_ParamLimits

0x587d,	// (0x0000b07b) aid_levels_signal

0x5891,	// (0x0000b08f) signal_pane_g1_ParamLimits

0x5891,	// (0x0000b08f) signal_pane_g1

0x58ab,	// (0x0000b0a9) signal_pane_g2_ParamLimits

0x58ab,	// (0x0000b0a9) signal_pane_g2

0x0001,

0xf73d,	// (0x00014f3b) signal_pane_g_ParamLimits

0xf73d,	// (0x00014f3b) signal_pane_g

0xbc89,	// (0x00011487) context_pane_g1

0x4e4d,	// (0x0000a64b) title_pane_g1

0x4e8f,	// (0x0000a68d) title_pane_t1

0xa6db,	// (0x0000fed9) title_pane_t2

0xa701,	// (0x0000feff) title_pane_t3

0x0002,

0xf59b,	// (0x00014d99) title_pane_t

0x64bb,	// (0x0000bcb9) aid_levels_battery_ParamLimits

0x64bb,	// (0x0000bcb9) aid_levels_battery

0x64d3,	// (0x0000bcd1) battery_pane_g1_ParamLimits

0x64d3,	// (0x0000bcd1) battery_pane_g1

0x64ee,	// (0x0000bcec) battery_pane_g2_ParamLimits

0x64ee,	// (0x0000bcec) battery_pane_g2

0x0001,

0xf7dc,	// (0x00014fda) battery_pane_g_ParamLimits

0xf7dc,	// (0x00014fda) battery_pane_g

0x6873,	// (0x0000c071) uni_indicator_pane_g1

0x6888,	// (0x0000c086) uni_indicator_pane_g2

0x689e,	// (0x0000c09c) uni_indicator_pane_g3

0x0005,

0xf93f,	// (0x0001513d) uni_indicator_pane_g

0xb641,	// (0x00010e3f) navi_icon_pane_ParamLimits

0xb641,	// (0x00010e3f) navi_icon_pane

0xa633,	// (0x0000fe31) navi_midp_pane

0xa633,	// (0x0000fe31) navi_navi_pane

0xb641,	// (0x00010e3f) navi_text_pane_ParamLimits

0xb641,	// (0x00010e3f) navi_text_pane

0xa54c,	// (0x0000fd4a) status_small_wait_pane_g1

0xab7a,	// (0x00010378) status_small_wait_pane_g2

0x0001,

0xf93a,	// (0x00015138) status_small_wait_pane_g

0x6819,	// (0x0000c017) navi_navi_icon_text_pane

0x6833,	// (0x0000c031) navi_navi_pane_g1_ParamLimits

0x6833,	// (0x0000c031) navi_navi_pane_g1

0x6821,	// (0x0000c01f) navi_navi_pane_g2_ParamLimits

0x6821,	// (0x0000c01f) navi_navi_pane_g2

0x0001,

0xf908,	// (0x00015106) navi_navi_pane_g_ParamLimits

0xf908,	// (0x00015106) navi_navi_pane_g

0x6845,	// (0x0000c043) navi_navi_tabs_pane

0x6819,	// (0x0000c017) navi_navi_text_pane

0x6819,	// (0x0000c017) navi_navi_volume_pane

0xe63b,	// (0x00013e39) navi_text_pane_t1

0xe62f,	// (0x00013e2d) navi_icon_pane_g1

0xe583,	// (0x00013d81) navi_navi_text_pane_t1

0x96e6,	// (0x0000eee4) navi_navi_volume_pane_g1

0xd1f7,	// (0x000129f5) volume_small_pane

0x676c,	// (0x0000bf6a) navi_navi_icon_text_pane_g1

0x6774,	// (0x0000bf72) navi_navi_icon_text_pane_t1

0xe13d,	// (0x0001393b) navi_tabs_2_long_pane

0xe13d,	// (0x0001393b) navi_tabs_2_pane

0xe13d,	// (0x0001393b) navi_tabs_3_long_pane

0xe13d,	// (0x0001393b) navi_tabs_3_pane

0xe13d,	// (0x0001393b) navi_tabs_4_pane

0xd1d7,	// (0x000129d5) tabs_2_active_pane_ParamLimits

0xd1d7,	// (0x000129d5) tabs_2_active_pane

0xd1e7,	// (0x000129e5) tabs_2_passive_pane_ParamLimits

0xd1e7,	// (0x000129e5) tabs_2_passive_pane

0xd1a5,	// (0x000129a3) tabs_3_active_pane_ParamLimits

0xd1a5,	// (0x000129a3) tabs_3_active_pane

0xd1b5,	// (0x000129b3) tabs_3_passive_pane_ParamLimits

0xd1b5,	// (0x000129b3) tabs_3_passive_pane

0xd1c6,	// (0x000129c4) tabs_3_passive_pane_cp_ParamLimits

0xd1c6,	// (0x000129c4) tabs_3_passive_pane_cp

0xd161,	// (0x0001295f) tabs_4_active_pane_ParamLimits

0xd161,	// (0x0001295f) tabs_4_active_pane

0xd172,	// (0x00012970) tabs_4_passive_pane_ParamLimits

0xd172,	// (0x00012970) tabs_4_passive_pane

0xd183,	// (0x00012981) tabs_4_passive_pane_cp_ParamLimits

0xd183,	// (0x00012981) tabs_4_passive_pane_cp

0xd194,	// (0x00012992) tabs_4_passive_pane_cp2_ParamLimits

0xd194,	// (0x00012992) tabs_4_passive_pane_cp2

0xd141,	// (0x0001293f) tabs_2_long_active_pane_ParamLimits

0xd141,	// (0x0001293f) tabs_2_long_active_pane

0xd151,	// (0x0001294f) tabs_2_long_passive_pane_ParamLimits

0xd151,	// (0x0001294f) tabs_2_long_passive_pane

0xd10a,	// (0x00012908) tabs_3_long_active_pane_ParamLimits

0xd10a,	// (0x00012908) tabs_3_long_active_pane

0xd11d,	// (0x0001291b) tabs_3_long_passive_pane_ParamLimits

0xd11d,	// (0x0001291b) tabs_3_long_passive_pane

0xd12e,	// (0x0001292c) tabs_3_long_passive_pane_cp_ParamLimits

0xd12e,	// (0x0001292c) tabs_3_long_passive_pane_cp

0x95a1,	// (0x0000ed9f) volume_small_pane_g1

0x95aa,	// (0x0000eda8) volume_small_pane_g2

0x95b3,	// (0x0000edb1) volume_small_pane_g3

0x95bc,	// (0x0000edba) volume_small_pane_g4

0x95c5,	// (0x0000edc3) volume_small_pane_g5

0x95ce,	// (0x0000edcc) volume_small_pane_g6

0x95d7,	// (0x0000edd5) volume_small_pane_g7

0x95e0,	// (0x0000edde) volume_small_pane_g8

0x95e9,	// (0x0000ede7) volume_small_pane_g9

0x95f2,	// (0x0000edf0) volume_small_pane_g10

0x0009,

0xf8d4,	// (0x000150d2) volume_small_pane_g

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp2_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp2

0xa721,	// (0x0000ff1f) tabs_3_active_pane_g1

0x4f1c,	// (0x0000a71a) tabs_3_active_pane_t1

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp2_ParamLimits

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp2

0xa721,	// (0x0000ff1f) tabs_3_passive_pane_g1

0x4f1c,	// (0x0000a71a) tabs_3_passive_pane_t1

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp3_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp3

0xead4,	// (0x000142d2) tabs_4_active_pane_g1

0x4f32,	// (0x0000a730) tabs_4_active_pane_t1

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp3_ParamLimits

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp3

0xead4,	// (0x000142d2) tabs_4_1_passive_pane_g1

0x4f32,	// (0x0000a730) tabs_4_1_passive_pane_t1

0xd685,	// (0x00012e83) list_highlight_pane_cp2

0x696c,	// (0x0000c16a) list_set_pane_ParamLimits

0x696c,	// (0x0000c16a) list_set_pane

0x69fa,	// (0x0000c1f8) main_pane_set_t1_ParamLimits

0x69fa,	// (0x0000c1f8) main_pane_set_t1

0x6a1a,	// (0x0000c218) main_pane_set_t2_ParamLimits

0x6a1a,	// (0x0000c218) main_pane_set_t2

0x6a2e,	// (0x0000c22c) main_pane_set_t3_ParamLimits

0x6a2e,	// (0x0000c22c) main_pane_set_t3

0x6a40,	// (0x0000c23e) main_pane_set_t4_ParamLimits

0x6a40,	// (0x0000c23e) main_pane_set_t4

0x0003,

0xf9a4,	// (0x000151a2) main_pane_set_t_ParamLimits

0xf9a4,	// (0x000151a2) main_pane_set_t

0x6a52,	// (0x0000c250) setting_code_pane

0x6a5a,	// (0x0000c258) setting_slider_graphic_pane

0x6a5a,	// (0x0000c258) setting_slider_pane

0x6a5a,	// (0x0000c258) setting_text_pane

0x6a5a,	// (0x0000c258) setting_volume_pane

0xcf18,	// (0x00012716) volume_set_pane

0xa713,	// (0x0000ff11) bg_set_opt_pane_cp

0x8e3a,	// (0x0000e638) setting_slider_pane_t1

0xcf20,	// (0x0001271e) setting_slider_pane_t2

0xcf39,	// (0x00012737) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00014da0) setting_slider_pane_t

0x8e80,	// (0x0000e67e) slider_set_pane

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp2

0xa755,	// (0x0000ff53) setting_slider_graphic_pane_g1

0xcf50,	// (0x0001274e) setting_slider_graphic_pane_t1

0xcf5f,	// (0x0001275d) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00014da7) setting_slider_graphic_pane_t

0xcf6e,	// (0x0001276c) slider_set_pane_cp

0xa633,	// (0x0000fe31) input_focus_pane_cp1

0xeb02,	// (0x00014300) list_set_text_pane

0xa54c,	// (0x0000fd4a) setting_text_pane_g1

0xa633,	// (0x0000fe31) input_focus_pane_cp2

0xa54c,	// (0x0000fd4a) setting_code_pane_g1

0xa75e,	// (0x0000ff5c) setting_code_pane_t1

0x4092,	// (0x00009890) set_text_pane_t1_ParamLimits

0x4092,	// (0x00009890) set_text_pane_t1

0xb54f,	// (0x00010d4d) set_opt_bg_pane_g1

0xb557,	// (0x00010d55) set_opt_bg_pane_g2

0x692c,	// (0x0000c12a) set_opt_bg_pane_g3

0xb567,	// (0x00010d65) set_opt_bg_pane_g4

0xb56f,	// (0x00010d6d) set_opt_bg_pane_g5

0xb577,	// (0x00010d75) set_opt_bg_pane_g6

0x6934,	// (0x0000c132) set_opt_bg_pane_g7

0x693c,	// (0x0000c13a) set_opt_bg_pane_g8

0x6944,	// (0x0000c142) set_opt_bg_pane_g9

0x0008,

0xf991,	// (0x0001518f) set_opt_bg_pane_g

0xea7e,	// (0x0001427c) slider_set_pane_g1

0x975b,	// (0x0000ef59) slider_set_pane_g2

0x0006,

0xf982,	// (0x00015180) slider_set_pane_g

0xd200,	// (0x000129fe) volume_set_pane_g1

0xd208,	// (0x00012a06) volume_set_pane_g2

0xd210,	// (0x00012a0e) volume_set_pane_g3

0xd218,	// (0x00012a16) volume_set_pane_g4

0xd220,	// (0x00012a1e) volume_set_pane_g5

0xd228,	// (0x00012a26) volume_set_pane_g6

0xd230,	// (0x00012a2e) volume_set_pane_g7

0xd238,	// (0x00012a36) volume_set_pane_g8

0xd240,	// (0x00012a3e) volume_set_pane_g9

0xd248,	// (0x00012a46) volume_set_pane_g10

0x0009,

0xf95a,	// (0x00015158) volume_set_pane_g

0x4fa6,	// (0x0000a7a4) indicator_pane_ParamLimits

0x4fa6,	// (0x0000a7a4) indicator_pane

0x4fce,	// (0x0000a7cc) main_idle_pane_g2_ParamLimits

0x4fce,	// (0x0000a7cc) main_idle_pane_g2

0x4ffe,	// (0x0000a7fc) main_pane_idle_g1_ParamLimits

0x4ffe,	// (0x0000a7fc) main_pane_idle_g1

0xa7c4,	// (0x0000ffc2) popup_clock_digital_analogue_window_ParamLimits

0xa7c4,	// (0x0000ffc2) popup_clock_digital_analogue_window

0x5023,	// (0x0000a821) soft_indicator_pane_ParamLimits

0x5023,	// (0x0000a821) soft_indicator_pane

0x503d,	// (0x0000a83b) wallpaper_pane_ParamLimits

0x503d,	// (0x0000a83b) wallpaper_pane

0xa54c,	// (0x0000fd4a) wallpaper_pane_g1

0x504f,	// (0x0000a84d) indicator_pane_g1_ParamLimits

0x504f,	// (0x0000a84d) indicator_pane_g1

0xec0f,	// (0x0001440d) navi_navi_icon_text_pane_srt_g1

0xa816,	// (0x00010014) soft_indicator_pane_t1

0xa830,	// (0x0001002e) aid_ps_area_pane

0x5068,	// (0x0000a866) aid_ps_clock_pane

0xa84d,	// (0x0001004b) aid_ps_indicator_pane

0xa859,	// (0x00010057) indicator_ps_pane_ParamLimits

0xa859,	// (0x00010057) indicator_ps_pane

0xa868,	// (0x00010066) power_save_pane_g1_ParamLimits

0xa868,	// (0x00010066) power_save_pane_g1

0xa874,	// (0x00010072) power_save_pane_g2_ParamLimits

0xa874,	// (0x00010072) power_save_pane_g2

0x8ba5,	// (0x0000e3a3) aid_navinavi_width_pane

0xa830,	// (0x0001002e) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00014dac) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00014dac) power_save_pane_g

0xa882,	// (0x00010080) power_save_pane_t1_ParamLimits

0xa882,	// (0x00010080) power_save_pane_t1

0x5068,	// (0x0000a866) aid_ps_clock_pane_ParamLimits

0xa84d,	// (0x0001004b) aid_ps_indicator_pane_ParamLimits

0xa894,	// (0x00010092) power_save_pane_t4_ParamLimits

0xa894,	// (0x00010092) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00014db1) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00014db1) power_save_pane_t

0xa8be,	// (0x000100bc) power_save_t3_ParamLimits

0xa8be,	// (0x000100bc) power_save_t3

0xa8a9,	// (0x000100a7) power_save_t2_ParamLimits

0xa8a9,	// (0x000100a7) power_save_t2

0xa8d3,	// (0x000100d1) indicator_ps_pane_g1

0x5074,	// (0x0000a872) ai_gene_pane_ParamLimits

0x5074,	// (0x0000a872) ai_gene_pane

0x508b,	// (0x0000a889) ai_links_pane_ParamLimits

0x508b,	// (0x0000a889) ai_links_pane

0x509d,	// (0x0000a89b) indicator_pane_cp1_ParamLimits

0x509d,	// (0x0000a89b) indicator_pane_cp1

0x50ac,	// (0x0000a8aa) main_pane_idle_g1_cp_ParamLimits

0x50ac,	// (0x0000a8aa) main_pane_idle_g1_cp

0xa90c,	// (0x0001010a) popup_ai_links_title_window

0x50c4,	// (0x0000a8c2) soft_indicator_pane_cp1_ParamLimits

0x50c4,	// (0x0000a8c2) soft_indicator_pane_cp1

0xe8c0,	// (0x000140be) ai_links_pane_g1

0xe8c9,	// (0x000140c7) grid_ai_links_pane

0x686a,	// (0x0000c068) ai_gene_pane_1

0xe8ae,	// (0x000140ac) ai_gene_pane_2

0xe8b7,	// (0x000140b5) list_highlight_pane_cp4

0x684e,	// (0x0000c04c) cell_ai_link_pane_ParamLimits

0x684e,	// (0x0000c04c) cell_ai_link_pane

0xe8a6,	// (0x000140a4) cell_ai_link_pane_g1

0xab7a,	// (0x00010378) cell_ai_link_pane_g2

0x0001,

0xf935,	// (0x00015133) cell_ai_link_pane_g

0xa633,	// (0x0000fe31) grid_highlight_cp2

0xa633,	// (0x0000fe31) bg_popup_sub_pane_cp1

0xa92f,	// (0x0001012d) popup_ai_links_title_window_t1

0xe7f8,	// (0x00013ff6) ai_gene_pane_1_g1_ParamLimits

0xe7f8,	// (0x00013ff6) ai_gene_pane_1_g1

0xe804,	// (0x00014002) ai_gene_pane_1_g2_ParamLimits

0xe804,	// (0x00014002) ai_gene_pane_1_g2

0x0001,

0xf92b,	// (0x00015129) ai_gene_pane_1_g_ParamLimits

0xf92b,	// (0x00015129) ai_gene_pane_1_g

0xe811,	// (0x0001400f) ai_gene_pane_1_t1_ParamLimits

0xe811,	// (0x0001400f) ai_gene_pane_1_t1

0xe845,	// (0x00014043) grid_ai_soft_ind_pane

0xe7e3,	// (0x00013fe1) ai_gene_pane_2_t1_ParamLimits

0xe7e3,	// (0x00013fe1) ai_gene_pane_2_t1

0x50d8,	// (0x0000a8d6) main_pane_empty_t1_ParamLimits

0x50d8,	// (0x0000a8d6) main_pane_empty_t1

0x50f5,	// (0x0000a8f3) main_pane_empty_t2_ParamLimits

0x50f5,	// (0x0000a8f3) main_pane_empty_t2

0x510d,	// (0x0000a90b) main_pane_empty_t3_ParamLimits

0x510d,	// (0x0000a90b) main_pane_empty_t3

0x5120,	// (0x0000a91e) main_pane_empty_t4_ParamLimits

0x5120,	// (0x0000a91e) main_pane_empty_t4

0x5133,	// (0x0000a931) main_pane_empty_t5_ParamLimits

0x5133,	// (0x0000a931) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00014db6) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00014db6) main_pane_empty_t

0xb641,	// (0x00010e3f) bg_popup_window_pane_ParamLimits

0xb641,	// (0x00010e3f) bg_popup_window_pane

0xe592,	// (0x00013d90) find_popup_pane_cp2_ParamLimits

0xe592,	// (0x00013d90) find_popup_pane_cp2

0xe59e,	// (0x00013d9c) heading_pane_ParamLimits

0xe59e,	// (0x00013d9c) heading_pane

0xa633,	// (0x0000fe31) bg_popup_sub_pane

0x6791,	// (0x0000bf8f) bg_popup_window_pane_g1_ParamLimits

0x6791,	// (0x0000bf8f) bg_popup_window_pane_g1

0x67a0,	// (0x0000bf9e) bg_popup_window_pane_g2_ParamLimits

0x67a0,	// (0x0000bf9e) bg_popup_window_pane_g2

0x67ac,	// (0x0000bfaa) bg_popup_window_pane_g3_ParamLimits

0x67ac,	// (0x0000bfaa) bg_popup_window_pane_g3

0x67b8,	// (0x0000bfb6) bg_popup_window_pane_g4_ParamLimits

0x67b8,	// (0x0000bfb6) bg_popup_window_pane_g4

0x67c7,	// (0x0000bfc5) bg_popup_window_pane_g5_ParamLimits

0x67c7,	// (0x0000bfc5) bg_popup_window_pane_g5

0x67d7,	// (0x0000bfd5) bg_popup_window_pane_g6_ParamLimits

0x67d7,	// (0x0000bfd5) bg_popup_window_pane_g6

0x67e3,	// (0x0000bfe1) bg_popup_window_pane_g7_ParamLimits

0x67e3,	// (0x0000bfe1) bg_popup_window_pane_g7

0x67f2,	// (0x0000bff0) bg_popup_window_pane_g8_ParamLimits

0x67f2,	// (0x0000bff0) bg_popup_window_pane_g8

0x6801,	// (0x0000bfff) bg_popup_window_pane_g9_ParamLimits

0x6801,	// (0x0000bfff) bg_popup_window_pane_g9

0xe577,	// (0x00013d75) bg_popup_window_pane_g10_ParamLimits

0xe577,	// (0x00013d75) bg_popup_window_pane_g10

0x0009,

0xf8f3,	// (0x000150f1) bg_popup_window_pane_g_ParamLimits

0xf8f3,	// (0x000150f1) bg_popup_window_pane_g

0xe52e,	// (0x00013d2c) bg_popup_heading_pane_ParamLimits

0xe52e,	// (0x00013d2c) bg_popup_heading_pane

0x97e3,	// (0x0000efe1) tabs_4_passive_pane_cp_srt_ParamLimits

0x97e3,	// (0x0000efe1) tabs_4_passive_pane_cp_srt

0x97f5,	// (0x0000eff3) tabs_4_passive_pane_srt_ParamLimits

0xe542,	// (0x00013d40) heading_pane_g2

0x97f5,	// (0x0000eff3) tabs_4_passive_pane_srt

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp3_srt_ParamLimits

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp3_srt

0xe54a,	// (0x00013d48) heading_pane_t1_ParamLimits

0xe54a,	// (0x00013d48) heading_pane_t1

0xe561,	// (0x00013d5f) heading_pane_t2_ParamLimits

0xe561,	// (0x00013d5f) heading_pane_t2

0x0001,

0xf8ee,	// (0x000150ec) heading_pane_t_ParamLimits

0xf8ee,	// (0x000150ec) heading_pane_t

0xe0bd,	// (0x000138bb) bg_popup_heading_pane_g1

0xe14e,	// (0x0001394c) bg_popup_heading_pane_g2

0xe156,	// (0x00013954) bg_popup_heading_pane_g3

0xe15e,	// (0x0001395c) bg_popup_heading_pane_g4

0xe166,	// (0x00013964) bg_popup_heading_pane_g5

0xe16e,	// (0x0001396c) bg_popup_heading_pane_g6

0xe176,	// (0x00013974) bg_popup_heading_pane_g7

0xe17e,	// (0x0001397c) bg_popup_heading_pane_g8

0xe186,	// (0x00013984) bg_popup_heading_pane_g9

0x0008,

0xf8aa,	// (0x000150a8) bg_popup_heading_pane_g

0xd99d,	// (0x0001319b) bg_popup_sub_pane_g1

0xd9ad,	// (0x000131ab) bg_popup_sub_pane_g2

0xd9a5,	// (0x000131a3) bg_popup_sub_pane_g3

0xd9bd,	// (0x000131bb) bg_popup_sub_pane_g4

0xd9b5,	// (0x000131b3) bg_popup_sub_pane_g5

0xd9c5,	// (0x000131c3) bg_popup_sub_pane_g6

0xd9cd,	// (0x000131cb) bg_popup_sub_pane_g7

0xd9dd,	// (0x000131db) bg_popup_sub_pane_g8

0xd9d5,	// (0x000131d3) bg_popup_sub_pane_g9

0x0008,

0xf884,	// (0x00015082) bg_popup_sub_pane_g

0xa9d8,	// (0x000101d6) bg_popup_window_pane_cp5_ParamLimits

0xa9d8,	// (0x000101d6) bg_popup_window_pane_cp5

0xa9f4,	// (0x000101f2) popup_note_window_g1_ParamLimits

0xa9f4,	// (0x000101f2) popup_note_window_g1

0xaa00,	// (0x000101fe) popup_note_window_t1_ParamLimits

0xaa00,	// (0x000101fe) popup_note_window_t1

0xaa16,	// (0x00010214) popup_note_window_t2_ParamLimits

0xaa16,	// (0x00010214) popup_note_window_t2

0xaa2c,	// (0x0001022a) popup_note_window_t3_ParamLimits

0xaa2c,	// (0x0001022a) popup_note_window_t3

0xaa42,	// (0x00010240) popup_note_window_t4_ParamLimits

0xaa42,	// (0x00010240) popup_note_window_t4

0xaa6a,	// (0x00010268) popup_note_window_t5_ParamLimits

0xaa6a,	// (0x00010268) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00014dc1) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00014dc1) popup_note_window_t

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp6_ParamLimits

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp6

0xe039,	// (0x00013837) popup_note_image_window_g1_ParamLimits

0xe039,	// (0x00013837) popup_note_image_window_g1

0xe045,	// (0x00013843) popup_note_image_window_g2_ParamLimits

0xe045,	// (0x00013843) popup_note_image_window_g2

0x0001,

0xf878,	// (0x00015076) popup_note_image_window_g_ParamLimits

0xf878,	// (0x00015076) popup_note_image_window_g

0xe05e,	// (0x0001385c) popup_note_image_window_t1_ParamLimits

0xe05e,	// (0x0001385c) popup_note_image_window_t1

0xe077,	// (0x00013875) popup_note_image_window_t2_ParamLimits

0xe077,	// (0x00013875) popup_note_image_window_t2

0xe090,	// (0x0001388e) popup_note_image_window_t3_ParamLimits

0xe090,	// (0x0001388e) popup_note_image_window_t3

0x0002,

0xf87d,	// (0x0001507b) popup_note_image_window_t_ParamLimits

0xf87d,	// (0x0001507b) popup_note_image_window_t

0xdf24,	// (0x00013722) bg_popup_window_pane_cp7_ParamLimits

0xdf24,	// (0x00013722) bg_popup_window_pane_cp7

0xdf54,	// (0x00013752) popup_note_wait_window_g1_ParamLimits

0xdf54,	// (0x00013752) popup_note_wait_window_g1

0xdf60,	// (0x0001375e) popup_note_wait_window_g2_ParamLimits

0xdf60,	// (0x0001375e) popup_note_wait_window_g2

0x0002,

0xf866,	// (0x00015064) popup_note_wait_window_g_ParamLimits

0xf866,	// (0x00015064) popup_note_wait_window_g

0xdf78,	// (0x00013776) popup_note_wait_window_t1_ParamLimits

0xdf78,	// (0x00013776) popup_note_wait_window_t1

0xdf9f,	// (0x0001379d) popup_note_wait_window_t2_ParamLimits

0xdf9f,	// (0x0001379d) popup_note_wait_window_t2

0xdfbc,	// (0x000137ba) popup_note_wait_window_t3_ParamLimits

0xdfbc,	// (0x000137ba) popup_note_wait_window_t3

0xdfcf,	// (0x000137cd) popup_note_wait_window_t4_ParamLimits

0xdfcf,	// (0x000137cd) popup_note_wait_window_t4

0x0004,

0xf86d,	// (0x0001506b) popup_note_wait_window_t_ParamLimits

0xf86d,	// (0x0001506b) popup_note_wait_window_t

0xdff4,	// (0x000137f2) wait_bar_pane_ParamLimits

0xdff4,	// (0x000137f2) wait_bar_pane

0xa633,	// (0x0000fe31) wait_anim_pane

0xa633,	// (0x0000fe31) wait_border_pane

0xa54c,	// (0x0000fd4a) wait_anim_pane_g1

0xa54c,	// (0x0000fd4a) wait_anim_pane_g2

0x0001,

0xf738,	// (0x00014f36) wait_anim_pane_g

0xded4,	// (0x000136d2) wait_border_pane_g1

0xdedd,	// (0x000136db) wait_border_pane_g2

0xdee6,	// (0x000136e4) wait_border_pane_g3

0x0002,

0xf85f,	// (0x0001505d) wait_border_pane_g

0xde2a,	// (0x00013628) bg_popup_window_pane_cp16_ParamLimits

0xde2a,	// (0x00013628) bg_popup_window_pane_cp16

0xde38,	// (0x00013636) indicator_popup_pane_cp4_ParamLimits

0xde38,	// (0x00013636) indicator_popup_pane_cp4

0xde4c,	// (0x0001364a) popup_query_data_window_t1_ParamLimits

0xde4c,	// (0x0001364a) popup_query_data_window_t1

0xde5e,	// (0x0001365c) popup_query_data_window_t2_ParamLimits

0xde5e,	// (0x0001365c) popup_query_data_window_t2

0xde77,	// (0x00013675) popup_query_data_window_t3_ParamLimits

0xde77,	// (0x00013675) popup_query_data_window_t3

0x0002,

0xf858,	// (0x00015056) popup_query_data_window_t_ParamLimits

0xf858,	// (0x00015056) popup_query_data_window_t

0xde91,	// (0x0001368f) query_popup_data_pane_ParamLimits

0xde91,	// (0x0001368f) query_popup_data_pane

0xdea5,	// (0x000136a3) query_popup_data_pane_cp1_ParamLimits

0xdea5,	// (0x000136a3) query_popup_data_pane_cp1

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp10_ParamLimits

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp10

0xdd8d,	// (0x0001358b) indicator_popup_pane_ParamLimits

0xdd8d,	// (0x0001358b) indicator_popup_pane

0xaae5,	// (0x000102e3) popup_query_code_window_t1_ParamLimits

0xaae5,	// (0x000102e3) popup_query_code_window_t1

0xdda5,	// (0x000135a3) popup_query_code_window_t2_ParamLimits

0xdda5,	// (0x000135a3) popup_query_code_window_t2

0xdde3,	// (0x000135e1) popup_query_code_window_t3_ParamLimits

0xdde3,	// (0x000135e1) popup_query_code_window_t3

0x0002,

0xf851,	// (0x0001504f) popup_query_code_window_t_ParamLimits

0xf851,	// (0x0001504f) popup_query_code_window_t

0xde12,	// (0x00013610) query_popup_pane_ParamLimits

0xde12,	// (0x00013610) query_popup_pane

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp15_ParamLimits

0xaa8e,	// (0x0001028c) bg_popup_window_pane_cp15

0xaaac,	// (0x000102aa) indicator_popup_pane_cp1_ParamLimits

0xaaac,	// (0x000102aa) indicator_popup_pane_cp1

0xaabf,	// (0x000102bd) indicator_popup_pane_cp2_ParamLimits

0xaabf,	// (0x000102bd) indicator_popup_pane_cp2

0xaad2,	// (0x000102d0) popup_query_data_code_window_g1_ParamLimits

0xaad2,	// (0x000102d0) popup_query_data_code_window_g1

0xaae5,	// (0x000102e3) popup_query_data_code_window_t1_ParamLimits

0xaae5,	// (0x000102e3) popup_query_data_code_window_t1

0xaaf7,	// (0x000102f5) popup_query_data_code_window_t2_ParamLimits

0xaaf7,	// (0x000102f5) popup_query_data_code_window_t2

0xab09,	// (0x00010307) popup_query_data_code_window_t3_ParamLimits

0xab09,	// (0x00010307) popup_query_data_code_window_t3

0xab1f,	// (0x0001031d) popup_query_data_code_window_t4_ParamLimits

0xab1f,	// (0x0001031d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00014dcc) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00014dcc) popup_query_data_code_window_t

0x94bc,	// (0x0000ecba) list_single_midp_graphic_pane_g3

0xab37,	// (0x00010335) query_popup_data_pane_cp2_ParamLimits

0xab4a,	// (0x00010348) query_popup_pane_cp2_ParamLimits

0xab4a,	// (0x00010348) query_popup_pane_cp2

0xa633,	// (0x0000fe31) bg_popup_window_pane_cp11

0xdd61,	// (0x0001355f) heading_pane_cp5

0xac2e,	// (0x0001042c) listscroll_popup_info_pane

0xa633,	// (0x0000fe31) input_focus_pane_cp3

0xab5d,	// (0x0001035b) query_popup_pane_t1

0xab6b,	// (0x00010369) list_popup_info_pane_ParamLimits

0xab6b,	// (0x00010369) list_popup_info_pane

0xab7a,	// (0x00010378) listscroll_popup_info_pane_g1

0xab82,	// (0x00010380) scroll_pane_cp7

0xab8a,	// (0x00010388) popup_info_list_pane_t1_ParamLimits

0xab8a,	// (0x00010388) popup_info_list_pane_t1

0xaba4,	// (0x000103a2) popup_info_list_pane_t2_ParamLimits

0xaba4,	// (0x000103a2) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00014dd5) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00014dd5) popup_info_list_pane_t

0xa633,	// (0x0000fe31) bg_popup_window_pane_cp12

0xec29,	// (0x00014427) find_popup_pane

0xa713,	// (0x0000ff11) bg_popup_window_pane_cp3

0xabbe,	// (0x000103bc) heading_pane_cp3

0xabca,	// (0x000103c8) listscroll_popup_graphic_pane

0xa633,	// (0x0000fe31) bg_popup_window_pane_cp4

0x5196,	// (0x0000a994) heading_pane_cp4

0xac2e,	// (0x0001042c) listscroll_popup_colour_pane

0xac36,	// (0x00010434) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xac36,	// (0x00010434) cell_large_graphic_colour_none_popup_pane

0x519e,	// (0x0000a99c) grid_large_graphic_colour_popup_pane_ParamLimits

0x519e,	// (0x0000a99c) grid_large_graphic_colour_popup_pane

0x51ba,	// (0x0000a9b8) listscroll_popup_colour_pane_g1_ParamLimits

0x51ba,	// (0x0000a9b8) listscroll_popup_colour_pane_g1

0x51d1,	// (0x0000a9cf) listscroll_popup_colour_pane_g2_ParamLimits

0x51d1,	// (0x0000a9cf) listscroll_popup_colour_pane_g2

0xac8d,	// (0x0001048b) listscroll_popup_colour_pane_g3_ParamLimits

0xac8d,	// (0x0001048b) listscroll_popup_colour_pane_g3

0x51e5,	// (0x0000a9e3) listscroll_popup_colour_pane_g4_ParamLimits

0x51e5,	// (0x0000a9e3) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00014dda) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00014dda) listscroll_popup_colour_pane_g

0xacac,	// (0x000104aa) scroll_pane_cp6_ParamLimits

0xacac,	// (0x000104aa) scroll_pane_cp6

0x51f4,	// (0x0000a9f2) cell_large_graphic_colour_popup_pane_ParamLimits

0x51f4,	// (0x0000a9f2) cell_large_graphic_colour_popup_pane

0xacdd,	// (0x000104db) cell_large_graphic_colour_none_popup_pane_t1

0xa633,	// (0x0000fe31) grid_highlight_pane_cp5

0xacec,	// (0x000104ea) cell_large_graphic_colour_popup_pane_g1

0xacf4,	// (0x000104f2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00014de3) cell_large_graphic_colour_popup_pane_g

0xacfc,	// (0x000104fa) cell_large_graphic_colour_popup_pane_g2_copy1

0xad05,	// (0x00010503) grid_highlight_pane_cp4

0xad0d,	// (0x0001050b) bg_popup_window_pane_cp8_ParamLimits

0xad0d,	// (0x0001050b) bg_popup_window_pane_cp8

0xad28,	// (0x00010526) popup_snote_single_text_window_g1_ParamLimits

0xad28,	// (0x00010526) popup_snote_single_text_window_g1

0xad3a,	// (0x00010538) popup_snote_single_text_window_t1_ParamLimits

0xad3a,	// (0x00010538) popup_snote_single_text_window_t1

0xad4d,	// (0x0001054b) popup_snote_single_text_window_t2_ParamLimits

0xad4d,	// (0x0001054b) popup_snote_single_text_window_t2

0xad60,	// (0x0001055e) popup_snote_single_text_window_t3_ParamLimits

0xad60,	// (0x0001055e) popup_snote_single_text_window_t3

0xad99,	// (0x00010597) popup_snote_single_text_window_t4_ParamLimits

0xad99,	// (0x00010597) popup_snote_single_text_window_t4

0xadcd,	// (0x000105cb) popup_snote_single_text_window_t5_ParamLimits

0xadcd,	// (0x000105cb) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00014de8) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00014de8) popup_snote_single_text_window_t

0xadfc,	// (0x000105fa) bg_popup_window_pane_cp9_ParamLimits

0xadfc,	// (0x000105fa) bg_popup_window_pane_cp9

0xad28,	// (0x00010526) popup_snote_single_graphic_window_g1_ParamLimits

0xad28,	// (0x00010526) popup_snote_single_graphic_window_g1

0xae0a,	// (0x00010608) popup_snote_single_graphic_window_g2_ParamLimits

0xae0a,	// (0x00010608) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00014df3) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00014df3) popup_snote_single_graphic_window_g

0xae16,	// (0x00010614) popup_snote_single_graphic_window_t1_ParamLimits

0xae16,	// (0x00010614) popup_snote_single_graphic_window_t1

0xae29,	// (0x00010627) popup_snote_single_graphic_window_t2_ParamLimits

0xae29,	// (0x00010627) popup_snote_single_graphic_window_t2

0xad60,	// (0x0001055e) popup_snote_single_graphic_window_t3_ParamLimits

0xad60,	// (0x0001055e) popup_snote_single_graphic_window_t3

0xad99,	// (0x00010597) popup_snote_single_graphic_window_t4_ParamLimits

0xad99,	// (0x00010597) popup_snote_single_graphic_window_t4

0xadcd,	// (0x000105cb) popup_snote_single_graphic_window_t5_ParamLimits

0xadcd,	// (0x000105cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00014df8) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00014df8) popup_snote_single_graphic_window_t

0x6b82,	// (0x0000c380) grid_graphic_popup_pane_ParamLimits

0x6b82,	// (0x0000c380) grid_graphic_popup_pane

0x6ba5,	// (0x0000c3a3) listscroll_popup_graphic_pane_g1_ParamLimits

0x6ba5,	// (0x0000c3a3) listscroll_popup_graphic_pane_g1

0x6bb9,	// (0x0000c3b7) listscroll_popup_graphic_pane_g2_ParamLimits

0x6bb9,	// (0x0000c3b7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ce,	// (0x000151cc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ce,	// (0x000151cc) listscroll_popup_graphic_pane_g

0xeaf6,	// (0x000142f4) scroll_pane_cp5

0x6b3d,	// (0x0000c33b) cell_graphic_popup_pane_ParamLimits

0x6b3d,	// (0x0000c33b) cell_graphic_popup_pane

0xebd2,	// (0x000143d0) cell_graphic_popup_pane_g1

0xebda,	// (0x000143d8) cell_graphic_popup_pane_g2

0xacfc,	// (0x000104fa) cell_graphic_popup_pane_g3

0x0002,

0xf9c7,	// (0x000151c5) cell_graphic_popup_pane_g

0xebe3,	// (0x000143e1) cell_graphic_popup_pane_t2

0xad05,	// (0x00010503) grid_highlight_pane_cp3

0xae4e,	// (0x0001064c) list_gen_pane_ParamLimits

0xae4e,	// (0x0001064c) list_gen_pane

0xae7f,	// (0x0001067d) scroll_pane

0x6b10,	// (0x0000c30e) bg_list_pane_g1_ParamLimits

0x6b10,	// (0x0000c30e) bg_list_pane_g1

0xeb89,	// (0x00014387) bg_list_pane_g2_ParamLimits

0xeb89,	// (0x00014387) bg_list_pane_g2

0xeb9c,	// (0x0001439a) bg_list_pane_g3_ParamLimits

0xeb9c,	// (0x0001439a) bg_list_pane_g3

0xebae,	// (0x000143ac) bg_list_pane_g4_ParamLimits

0xebae,	// (0x000143ac) bg_list_pane_g4

0x6b2b,	// (0x0000c329) bg_list_pane_g5_ParamLimits

0x6b2b,	// (0x0000c329) bg_list_pane_g5

0x0004,

0xf9bc,	// (0x000151ba) bg_list_pane_g_ParamLimits

0xf9bc,	// (0x000151ba) bg_list_pane_g

0x6aa0,	// (0x0000c29e) list_double2_graphic_large_graphic_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double2_graphic_large_graphic_pane

0x6aa0,	// (0x0000c29e) list_double2_graphic_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double2_graphic_pane

0x6aa0,	// (0x0000c29e) list_double2_large_graphic_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double2_large_graphic_pane

0x6aa0,	// (0x0000c29e) list_double2_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double2_pane

0x6aa0,	// (0x0000c29e) list_double_graphic_heading_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_graphic_heading_pane

0x6aa0,	// (0x0000c29e) list_double_graphic_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_graphic_pane

0x6aa0,	// (0x0000c29e) list_double_heading_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_heading_pane

0x6aa0,	// (0x0000c29e) list_double_large_graphic_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_large_graphic_pane

0x6aa0,	// (0x0000c29e) list_double_number_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_number_pane

0x6aa0,	// (0x0000c29e) list_double_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_pane

0x6aa0,	// (0x0000c29e) list_double_time_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_double_time_pane

0x6aa0,	// (0x0000c29e) list_setting_number_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_setting_number_pane

0x6aa0,	// (0x0000c29e) list_setting_pane_ParamLimits

0x6aa0,	// (0x0000c29e) list_setting_pane

0x6ab1,	// (0x0000c2af) list_single_2graphic_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_2graphic_pane

0x6ab1,	// (0x0000c2af) list_single_graphic_heading_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_graphic_heading_pane

0x6ab1,	// (0x0000c2af) list_single_graphic_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_graphic_pane

0x6ab1,	// (0x0000c2af) list_single_heading_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_heading_pane

0x6afe,	// (0x0000c2fc) list_single_large_graphic_pane_ParamLimits

0x6afe,	// (0x0000c2fc) list_single_large_graphic_pane

0x6ab1,	// (0x0000c2af) list_single_number_heading_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_number_heading_pane

0x6ab1,	// (0x0000c2af) list_single_number_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_number_pane

0x6ab1,	// (0x0000c2af) list_single_pane_ParamLimits

0x6ab1,	// (0x0000c2af) list_single_pane

0xa633,	// (0x0000fe31) list_highlight_pane_cp1

0xb0c1,	// (0x000108bf) list_single_pane_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_pane_g1

0xafec,	// (0x000107ea) list_single_pane_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_pane_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_pane_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_pane_g

0xaff8,	// (0x000107f6) list_single_pane_t1_ParamLimits

0xaff8,	// (0x000107f6) list_single_pane_t1

0xb0c1,	// (0x000108bf) list_single_number_pane_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_number_pane_g1

0xafec,	// (0x000107ea) list_single_number_pane_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_number_pane_g

0xb0cd,	// (0x000108cb) list_single_number_pane_t1_ParamLimits

0xb0cd,	// (0x000108cb) list_single_number_pane_t1

0x6904,	// (0x0000c102) list_single_number_pane_t2_ParamLimits

0x6904,	// (0x0000c102) list_single_number_pane_t2

0x0001,

0xf97d,	// (0x0001517b) list_single_number_pane_t_ParamLimits

0xf97d,	// (0x0001517b) list_single_number_pane_t

0xb0b5,	// (0x000108b3) list_single_graphic_pane_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_single_graphic_pane_g1

0xb0c1,	// (0x000108bf) list_single_graphic_pane_g2_ParamLimits

0xb0c1,	// (0x000108bf) list_single_graphic_pane_g2

0xafec,	// (0x000107ea) list_single_graphic_pane_g3_ParamLimits

0xafec,	// (0x000107ea) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00014e03) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00014e03) list_single_graphic_pane_g

0xb0cd,	// (0x000108cb) list_single_graphic_pane_t1_ParamLimits

0xb0cd,	// (0x000108cb) list_single_graphic_pane_t1

0xb0c1,	// (0x000108bf) list_single_heading_pane_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_heading_pane_g1

0xafec,	// (0x000107ea) list_single_heading_pane_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_heading_pane_g

0xb18a,	// (0x00010988) list_single_heading_pane_t1_ParamLimits

0xb18a,	// (0x00010988) list_single_heading_pane_t1

0x521b,	// (0x0000aa19) list_single_heading_pane_t2_ParamLimits

0x521b,	// (0x0000aa19) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00014e0f) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00014e0f) list_single_heading_pane_t

0xb0c1,	// (0x000108bf) list_single_number_heading_pane_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_number_heading_pane_g1

0xafec,	// (0x000107ea) list_single_number_heading_pane_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_number_heading_pane_g

0xb18a,	// (0x00010988) list_single_number_heading_pane_t1_ParamLimits

0xb18a,	// (0x00010988) list_single_number_heading_pane_t1

0x522d,	// (0x0000aa2b) list_single_number_heading_pane_t2_ParamLimits

0x522d,	// (0x0000aa2b) list_single_number_heading_pane_t2

0xf097,	// (0x00014895) list_single_number_heading_pane_t3_ParamLimits

0xf097,	// (0x00014895) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00014e14) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00014e14) list_single_number_heading_pane_t

0xb0b5,	// (0x000108b3) list_single_graphic_heading_pane_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_single_graphic_heading_pane_g1

0x523f,	// (0x0000aa3d) list_single_graphic_heading_pane_g4_ParamLimits

0x523f,	// (0x0000aa3d) list_single_graphic_heading_pane_g4

0xafec,	// (0x000107ea) list_single_graphic_heading_pane_g5_ParamLimits

0xafec,	// (0x000107ea) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00014e1b) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00014e1b) list_single_graphic_heading_pane_g

0xb18a,	// (0x00010988) list_single_graphic_heading_pane_t1_ParamLimits

0xb18a,	// (0x00010988) list_single_graphic_heading_pane_t1

0x5250,	// (0x0000aa4e) list_single_graphic_heading_pane_t2_ParamLimits

0x5250,	// (0x0000aa4e) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00014e22) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00014e22) list_single_graphic_heading_pane_t

0xaf5b,	// (0x00010759) list_single_large_graphic_pane_g1_ParamLimits

0xaf5b,	// (0x00010759) list_single_large_graphic_pane_g1

0xaf67,	// (0x00010765) list_single_large_graphic_pane_g2_ParamLimits

0xaf67,	// (0x00010765) list_single_large_graphic_pane_g2

0xaf73,	// (0x00010771) list_single_large_graphic_pane_g3_ParamLimits

0xaf73,	// (0x00010771) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00014e27) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00014e27) list_single_large_graphic_pane_g

0xdedd,	// (0x000136db) wait_border_pane_g2_copy1

0xaf7f,	// (0x0001077d) list_single_large_graphic_pane_g4_cp2

0xaf87,	// (0x00010785) list_single_large_graphic_pane_t1_ParamLimits

0xaf87,	// (0x00010785) list_single_large_graphic_pane_t1

0x5262,	// (0x0000aa60) list_double_pane_g1_ParamLimits

0x5262,	// (0x0000aa60) list_double_pane_g1

0x526e,	// (0x0000aa6c) list_double_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_double_pane_g2

0x0001,

0xf630,	// (0x00014e2e) list_double_pane_g_ParamLimits

0xf630,	// (0x00014e2e) list_double_pane_g

0x527a,	// (0x0000aa78) list_double_pane_t1_ParamLimits

0x527a,	// (0x0000aa78) list_double_pane_t1

0x5290,	// (0x0000aa8e) list_double_pane_t2_ParamLimits

0x5290,	// (0x0000aa8e) list_double_pane_t2

0x0001,

0xf635,	// (0x00014e33) list_double_pane_t_ParamLimits

0xf635,	// (0x00014e33) list_double_pane_t

0x52a2,	// (0x0000aaa0) list_double2_pane_g1_ParamLimits

0x52a2,	// (0x0000aaa0) list_double2_pane_g1

0x526e,	// (0x0000aa6c) list_double2_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00014e38) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00014e38) list_double2_pane_g

0x527a,	// (0x0000aa78) list_double2_pane_t1_ParamLimits

0x527a,	// (0x0000aa78) list_double2_pane_t1

0x52b3,	// (0x0000aab1) list_double2_pane_t2_ParamLimits

0x52b3,	// (0x0000aab1) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00014e3d) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00014e3d) list_double2_pane_t

0x5262,	// (0x0000aa60) list_double_number_pane_g1_ParamLimits

0x5262,	// (0x0000aa60) list_double_number_pane_g1

0x526e,	// (0x0000aa6c) list_double_number_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00014e2e) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00014e2e) list_double_number_pane_g

0x52c5,	// (0x0000aac3) list_double_number_pane_t1_ParamLimits

0x52c5,	// (0x0000aac3) list_double_number_pane_t1

0x52d7,	// (0x0000aad5) list_double_number_pane_t2_ParamLimits

0x52d7,	// (0x0000aad5) list_double_number_pane_t2

0x52ed,	// (0x0000aaeb) list_double_number_pane_t3_ParamLimits

0x52ed,	// (0x0000aaeb) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00014e42) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00014e42) list_double_number_pane_t

0x52ff,	// (0x0000aafd) list_double_graphic_pane_g1_ParamLimits

0x52ff,	// (0x0000aafd) list_double_graphic_pane_g1

0x530b,	// (0x0000ab09) list_double_graphic_pane_g2_ParamLimits

0x530b,	// (0x0000ab09) list_double_graphic_pane_g2

0x531a,	// (0x0000ab18) list_double_graphic_pane_g3_ParamLimits

0x531a,	// (0x0000ab18) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00014e49) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00014e49) list_double_graphic_pane_g

0x5332,	// (0x0000ab30) list_double_graphic_pane_t1_ParamLimits

0x5332,	// (0x0000ab30) list_double_graphic_pane_t1

0x5348,	// (0x0000ab46) list_double_graphic_pane_t2_ParamLimits

0x5348,	// (0x0000ab46) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00014e52) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00014e52) list_double_graphic_pane_t

0x52ff,	// (0x0000aafd) list_double2_graphic_pane_g1_ParamLimits

0x52ff,	// (0x0000aafd) list_double2_graphic_pane_g1

0x5262,	// (0x0000aa60) list_double2_graphic_pane_g2_ParamLimits

0x5262,	// (0x0000aa60) list_double2_graphic_pane_g2

0x526e,	// (0x0000aa6c) list_double2_graphic_pane_g3_ParamLimits

0x526e,	// (0x0000aa6c) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00014e57) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00014e57) list_double2_graphic_pane_g

0x52d7,	// (0x0000aad5) list_double2_graphic_pane_t1_ParamLimits

0x52d7,	// (0x0000aad5) list_double2_graphic_pane_t1

0x535a,	// (0x0000ab58) list_double2_graphic_pane_t2_ParamLimits

0x535a,	// (0x0000ab58) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00014e5e) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00014e5e) list_double2_graphic_pane_t

0x536c,	// (0x0000ab6a) list_double_large_graphic_pane_g1_ParamLimits

0x536c,	// (0x0000ab6a) list_double_large_graphic_pane_g1

0x52a2,	// (0x0000aaa0) list_double_large_graphic_pane_g2_ParamLimits

0x52a2,	// (0x0000aaa0) list_double_large_graphic_pane_g2

0x526e,	// (0x0000aa6c) list_double_large_graphic_pane_g3_ParamLimits

0x526e,	// (0x0000aa6c) list_double_large_graphic_pane_g3

0x5395,	// (0x0000ab93) list_double_large_graphic_pane_g4_ParamLimits

0x5395,	// (0x0000ab93) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00014e63) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00014e63) list_double_large_graphic_pane_g

0x53a6,	// (0x0000aba4) list_double_large_graphic_pane_t1_ParamLimits

0x53a6,	// (0x0000aba4) list_double_large_graphic_pane_t1

0x53bf,	// (0x0000abbd) list_double_large_graphic_pane_t2_ParamLimits

0x53bf,	// (0x0000abbd) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00014e6e) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00014e6e) list_double_large_graphic_pane_t

0x53d1,	// (0x0000abcf) list_double2_large_graphic_pane_g1_ParamLimits

0x53d1,	// (0x0000abcf) list_double2_large_graphic_pane_g1

0x52a2,	// (0x0000aaa0) list_double2_large_graphic_pane_g2_ParamLimits

0x52a2,	// (0x0000aaa0) list_double2_large_graphic_pane_g2

0x526e,	// (0x0000aa6c) list_double2_large_graphic_pane_g3_ParamLimits

0x526e,	// (0x0000aa6c) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00014e73) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00014e73) list_double2_large_graphic_pane_g

0x53dd,	// (0x0000abdb) list_double2_large_graphic_pane_t1_ParamLimits

0x53dd,	// (0x0000abdb) list_double2_large_graphic_pane_t1

0x53f3,	// (0x0000abf1) list_double2_large_graphic_pane_t2_ParamLimits

0x53f3,	// (0x0000abf1) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00014e7a) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00014e7a) list_double2_large_graphic_pane_t

0x5405,	// (0x0000ac03) list_double_heading_pane_g1_ParamLimits

0x5405,	// (0x0000ac03) list_double_heading_pane_g1

0xaecc,	// (0x000106ca) list_double_heading_pane_g2_ParamLimits

0xaecc,	// (0x000106ca) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00014e7f) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00014e7f) list_double_heading_pane_g

0x5416,	// (0x0000ac14) list_double_heading_pane_t1_ParamLimits

0x5416,	// (0x0000ac14) list_double_heading_pane_t1

0x542c,	// (0x0000ac2a) list_double_heading_pane_t2_ParamLimits

0x542c,	// (0x0000ac2a) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00014e84) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00014e84) list_double_heading_pane_t

0xb05a,	// (0x00010858) list_double_graphic_heading_pane_g1_ParamLimits

0xb05a,	// (0x00010858) list_double_graphic_heading_pane_g1

0x5405,	// (0x0000ac03) list_double_graphic_heading_pane_g2_ParamLimits

0x5405,	// (0x0000ac03) list_double_graphic_heading_pane_g2

0xaecc,	// (0x000106ca) list_double_graphic_heading_pane_g3_ParamLimits

0xaecc,	// (0x000106ca) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00014e89) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00014e89) list_double_graphic_heading_pane_g

0x543e,	// (0x0000ac3c) list_double_graphic_heading_pane_t1_ParamLimits

0x543e,	// (0x0000ac3c) list_double_graphic_heading_pane_t1

0x5454,	// (0x0000ac52) list_double_graphic_heading_pane_t2_ParamLimits

0x5454,	// (0x0000ac52) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00014e90) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00014e90) list_double_graphic_heading_pane_t

0x52a2,	// (0x0000aaa0) list_double_time_pane_g1_ParamLimits

0x52a2,	// (0x0000aaa0) list_double_time_pane_g1

0x526e,	// (0x0000aa6c) list_double_time_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00014e38) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00014e38) list_double_time_pane_g

0x53dd,	// (0x0000abdb) list_double_time_pane_t1_ParamLimits

0x53dd,	// (0x0000abdb) list_double_time_pane_t1

0x5466,	// (0x0000ac64) list_double_time_pane_t2_ParamLimits

0x5466,	// (0x0000ac64) list_double_time_pane_t2

0x5478,	// (0x0000ac76) list_double_time_pane_t3_ParamLimits

0x5478,	// (0x0000ac76) list_double_time_pane_t3

0x548a,	// (0x0000ac88) list_double_time_pane_t4_ParamLimits

0x548a,	// (0x0000ac88) list_double_time_pane_t4

0x0003,

0xf697,	// (0x00014e95) list_double_time_pane_t_ParamLimits

0xf697,	// (0x00014e95) list_double_time_pane_t

0x5262,	// (0x0000aa60) list_setting_pane_g1_ParamLimits

0x5262,	// (0x0000aa60) list_setting_pane_g1

0x526e,	// (0x0000aa6c) list_setting_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_setting_pane_g2

0x0001,

0xf630,	// (0x00014e2e) list_setting_pane_g_ParamLimits

0xf630,	// (0x00014e2e) list_setting_pane_g

0x549c,	// (0x0000ac9a) list_setting_pane_t1_ParamLimits

0x549c,	// (0x0000ac9a) list_setting_pane_t1

0x54b6,	// (0x0000acb4) list_setting_pane_t2_ParamLimits

0x54b6,	// (0x0000acb4) list_setting_pane_t2

0x0002,

0xf6a0,	// (0x00014e9e) list_setting_pane_t_ParamLimits

0xf6a0,	// (0x00014e9e) list_setting_pane_t

0x54f3,	// (0x0000acf1) set_value_pane_cp_ParamLimits

0x54f3,	// (0x0000acf1) set_value_pane_cp

0x5262,	// (0x0000aa60) list_setting_number_pane_g1_ParamLimits

0x5262,	// (0x0000aa60) list_setting_number_pane_g1

0x526e,	// (0x0000aa6c) list_setting_number_pane_g2_ParamLimits

0x526e,	// (0x0000aa6c) list_setting_number_pane_g2

0x0001,

0xf630,	// (0x00014e2e) list_setting_number_pane_g_ParamLimits

0xf630,	// (0x00014e2e) list_setting_number_pane_g

0x54ff,	// (0x0000acfd) list_setting_number_pane_t1_ParamLimits

0x54ff,	// (0x0000acfd) list_setting_number_pane_t1

0x5518,	// (0x0000ad16) list_setting_number_pane_t2_ParamLimits

0x5518,	// (0x0000ad16) list_setting_number_pane_t2

0x5532,	// (0x0000ad30) list_setting_number_pane_t3_ParamLimits

0x5532,	// (0x0000ad30) list_setting_number_pane_t3

0x0003,

0xf6a7,	// (0x00014ea5) list_setting_number_pane_t_ParamLimits

0xf6a7,	// (0x00014ea5) list_setting_number_pane_t

0x54f3,	// (0x0000acf1) set_value_pane_ParamLimits

0x54f3,	// (0x0000acf1) set_value_pane

0xb30f,	// (0x00010b0d) bg_set_opt_pane_ParamLimits

0xb30f,	// (0x00010b0d) bg_set_opt_pane

0xb330,	// (0x00010b2e) set_value_pane_t1

0xb33e,	// (0x00010b3c) slider_set_pane_cp3

0xb347,	// (0x00010b45) volume_small_pane_cp

0xb350,	// (0x00010b4e) list_form_gen_pane

0xaea3,	// (0x000106a1) scroll_pane_cp8

0xf379,	// (0x00014b77) form_field_data_pane_ParamLimits

0xf379,	// (0x00014b77) form_field_data_pane

0x5575,	// (0x0000ad73) form_field_data_wide_pane_ParamLimits

0x5575,	// (0x0000ad73) form_field_data_wide_pane

0x5595,	// (0x0000ad93) form_field_popup_pane_ParamLimits

0x5595,	// (0x0000ad93) form_field_popup_pane

0x55ad,	// (0x0000adab) form_field_popup_wide_pane_ParamLimits

0x55ad,	// (0x0000adab) form_field_popup_wide_pane

0xb3d7,	// (0x00010bd5) form_field_slider_pane_ParamLimits

0xb3d7,	// (0x00010bd5) form_field_slider_pane

0xb3ea,	// (0x00010be8) form_field_slider_wide_pane_ParamLimits

0xb3ea,	// (0x00010be8) form_field_slider_wide_pane

0xb3fd,	// (0x00010bfb) data_form_pane

0x55ce,	// (0x0000adcc) form_field_data_pane_t1

0xb429,	// (0x00010c27) input_focus_pane

0xb437,	// (0x00010c35) data_form_wide_pane

0xb463,	// (0x00010c61) form_field_data_wide_pane_t1

0xad1a,	// (0x00010518) input_focus_pane_cp6

0x55e6,	// (0x0000ade4) form_field_popup_pane_t1

0xb429,	// (0x00010c27) input_focus_pane_cp7

0xb3fd,	// (0x00010bfb) list_form_pane

0xb4a5,	// (0x00010ca3) form_field_popup_wide_pane_t1

0xb429,	// (0x00010c27) input_focus_pane_cp8

0xb4ba,	// (0x00010cb8) list_form_wide_pane

0x5606,	// (0x0000ae04) form_field_slider_pane_t1_ParamLimits

0x5606,	// (0x0000ae04) form_field_slider_pane_t1

0x561c,	// (0x0000ae1a) form_field_slider_pane_t2_ParamLimits

0x561c,	// (0x0000ae1a) form_field_slider_pane_t2

0x0001,

0xf6b7,	// (0x00014eb5) form_field_slider_pane_t_ParamLimits

0xf6b7,	// (0x00014eb5) form_field_slider_pane_t

0xa9d8,	// (0x000101d6) input_focus_pane_cp9_ParamLimits

0xa9d8,	// (0x000101d6) input_focus_pane_cp9

0x5631,	// (0x0000ae2f) slider_cont_pane_ParamLimits

0x5631,	// (0x0000ae2f) slider_cont_pane

0xb50d,	// (0x00010d0b) form_field_slider_wide_pane_t1_ParamLimits

0xb50d,	// (0x00010d0b) form_field_slider_wide_pane_t1

0xb51f,	// (0x00010d1d) form_field_slider_wide_pane_t2_ParamLimits

0xb51f,	// (0x00010d1d) form_field_slider_wide_pane_t2

0x0001,

0xf6bc,	// (0x00014eba) form_field_slider_wide_pane_t_ParamLimits

0xf6bc,	// (0x00014eba) form_field_slider_wide_pane_t

0xa9d8,	// (0x000101d6) input_focus_pane_cp10_ParamLimits

0xa9d8,	// (0x000101d6) input_focus_pane_cp10

0x5645,	// (0x0000ae43) slider_cont_pane_cp1_ParamLimits

0x5645,	// (0x0000ae43) slider_cont_pane_cp1

0x565b,	// (0x0000ae59) slider_form_pane_cp

0xb54f,	// (0x00010d4d) input_focus_pane_g1

0xb557,	// (0x00010d55) input_focus_pane_g2

0xb55f,	// (0x00010d5d) input_focus_pane_g3

0xb567,	// (0x00010d65) input_focus_pane_g4

0xb56f,	// (0x00010d6d) input_focus_pane_g5

0xb577,	// (0x00010d75) input_focus_pane_g6

0xb57f,	// (0x00010d7d) input_focus_pane_g7

0xb587,	// (0x00010d85) input_focus_pane_g8

0xb58f,	// (0x00010d8d) input_focus_pane_g9

0xa54c,	// (0x0000fd4a) input_focus_pane_g10

0x0009,

0xf6c1,	// (0x00014ebf) input_focus_pane_g

0xdee6,	// (0x000136e4) wait_border_pane_g3_copy1

0x5663,	// (0x0000ae61) data_form_pane_t1

0xa54c,	// (0x0000fd4a) wait_anim_pane_g1_copy1

0x6a87,	// (0x0000c285) data_form_wide_pane_t1

0xee53,	// (0x00014651) list_form_graphic_pane_cp_ParamLimits

0xee53,	// (0x00014651) list_form_graphic_pane_cp

0xeb1c,	// (0x0001431a) slider_form_pane_g1

0xeb25,	// (0x00014323) slider_form_pane_g2

0x0006,

0xf9ad,	// (0x000151ab) slider_form_pane_g

0xb5b1,	// (0x00010daf) list_form_graphic_pane_ParamLimits

0xb5b1,	// (0x00010daf) list_form_graphic_pane

0xb5dc,	// (0x00010dda) list_form_graphic_pane_g1

0xb5e4,	// (0x00010de2) list_form_graphic_pane_t1_ParamLimits

0xb5e4,	// (0x00010de2) list_form_graphic_pane_t1

0xa713,	// (0x0000ff11) list_highlight_pane_cp5_ParamLimits

0xa713,	// (0x0000ff11) list_highlight_pane_cp5

0x567c,	// (0x0000ae7a) find_pane_g1

0xb602,	// (0x00010e00) input_find_pane

0x5687,	// (0x0000ae85) input_find_pane_g1_ParamLimits

0x5687,	// (0x0000ae85) input_find_pane_g1

0x5693,	// (0x0000ae91) input_find_pane_t1_ParamLimits

0x5693,	// (0x0000ae91) input_find_pane_t1

0x56a8,	// (0x0000aea6) input_find_pane_t2_ParamLimits

0x56a8,	// (0x0000aea6) input_find_pane_t2

0x0001,

0xf6d6,	// (0x00014ed4) input_find_pane_t_ParamLimits

0xf6d6,	// (0x00014ed4) input_find_pane_t

0xb641,	// (0x00010e3f) input_focus_pane_cp5_ParamLimits

0xb641,	// (0x00010e3f) input_focus_pane_cp5

0xa9d8,	// (0x000101d6) bg_popup_window_pane_cp2_ParamLimits

0xa9d8,	// (0x000101d6) bg_popup_window_pane_cp2

0xb65b,	// (0x00010e59) listscroll_menu_pane_ParamLimits

0xb65b,	// (0x00010e59) listscroll_menu_pane

0xb667,	// (0x00010e65) popup_submenu_window_ParamLimits

0xb667,	// (0x00010e65) popup_submenu_window

0xb68b,	// (0x00010e89) find_popup_pane_g1

0xb693,	// (0x00010e91) input_popup_find_pane_cp

0xb641,	// (0x00010e3f) input_focus_pane_cp4_ParamLimits

0xb641,	// (0x00010e3f) input_focus_pane_cp4

0xb6a9,	// (0x00010ea7) input_popup_find_pane_t1_ParamLimits

0xb6a9,	// (0x00010ea7) input_popup_find_pane_t1

0xa633,	// (0x0000fe31) bg_popup_sub_pane_cp

0xb6d7,	// (0x00010ed5) listscroll_popup_sub_pane

0xb6df,	// (0x00010edd) list_submenu_pane_ParamLimits

0xb6df,	// (0x00010edd) list_submenu_pane

0xb6f0,	// (0x00010eee) scroll_pane_cp4

0xb6f8,	// (0x00010ef6) list_single_popup_submenu_pane_ParamLimits

0xb6f8,	// (0x00010ef6) list_single_popup_submenu_pane

0xb70c,	// (0x00010f0a) list_single_popup_submenu_pane_g1

0xb714,	// (0x00010f12) list_single_popup_submenu_pane_t1_ParamLimits

0xb714,	// (0x00010f12) list_single_popup_submenu_pane_t1

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp1_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp1

0xeadc,	// (0x000142da) tabs_2_active_pane_g1

0x56c9,	// (0x0000aec7) tabs_2_active_pane_t1

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp1_ParamLimits

0xa9d8,	// (0x000101d6) bg_passive_tab_pane_cp1

0xeadc,	// (0x000142da) tabs_2_passive_pane_g1

0x56c9,	// (0x0000aec7) tabs_2_passive_pane_t1

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp4

0x56df,	// (0x0000aedd) tabs_2_long_active_pane_t1

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp4

0x94c4,	// (0x0000ecc2) list_single_midp_graphic_pane_g4_ParamLimits

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp5

0x56f6,	// (0x0000aef4) tabs_3_long_active_pane_t1

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp5

0x94c4,	// (0x0000ecc2) list_single_midp_graphic_pane_g4

0xa713,	// (0x0000ff11) bg_popup_window_pane_cp13_ParamLimits

0xa713,	// (0x0000ff11) bg_popup_window_pane_cp13

0xb78b,	// (0x00010f89) listscroll_popup_fast_pane_ParamLimits

0xb78b,	// (0x00010f89) listscroll_popup_fast_pane

0xb79a,	// (0x00010f98) grid_popup_fast_pane_ParamLimits

0xb79a,	// (0x00010f98) grid_popup_fast_pane

0xb7ac,	// (0x00010faa) scroll_pane_cp9_ParamLimits

0xb7ac,	// (0x00010faa) scroll_pane_cp9

0x112c,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x112c,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2

0xb7d0,	// (0x00010fce) input_focus_pane_cp20_ParamLimits

0xb7d0,	// (0x00010fce) input_focus_pane_cp20

0xb7de,	// (0x00010fdc) query_popup_data_pane_t1_ParamLimits

0xb7de,	// (0x00010fdc) query_popup_data_pane_t1

0xb7f1,	// (0x00010fef) query_popup_data_pane_t2_ParamLimits

0xb7f1,	// (0x00010fef) query_popup_data_pane_t2

0xb837,	// (0x00011035) query_popup_data_pane_t3_ParamLimits

0xb837,	// (0x00011035) query_popup_data_pane_t3

0xb878,	// (0x00011076) query_popup_data_pane_t4_ParamLimits

0xb878,	// (0x00011076) query_popup_data_pane_t4

0xb8b4,	// (0x000110b2) query_popup_data_pane_t5_ParamLimits

0xb8b4,	// (0x000110b2) query_popup_data_pane_t5

0x0004,

0xf6db,	// (0x00014ed9) query_popup_data_pane_t_ParamLimits

0xf6db,	// (0x00014ed9) query_popup_data_pane_t

0xb54f,	// (0x00010d4d) bg_set_opt_pane_g1

0xb557,	// (0x00010d55) bg_set_opt_pane_g2

0xb55f,	// (0x00010d5d) bg_set_opt_pane_g3

0xb567,	// (0x00010d65) bg_set_opt_pane_g4

0xb56f,	// (0x00010d6d) bg_set_opt_pane_g5

0xb577,	// (0x00010d75) bg_set_opt_pane_g6

0xb57f,	// (0x00010d7d) bg_set_opt_pane_g7

0xb587,	// (0x00010d85) bg_set_opt_pane_g8

0xb58f,	// (0x00010d8d) bg_set_opt_pane_g9

0x0008,

0xf6e6,	// (0x00014ee4) bg_set_opt_pane_g

0x90f0,	// (0x0000e8ee) control_top_pane_stacon_ParamLimits

0x90f0,	// (0x0000e8ee) control_top_pane_stacon

0x9143,	// (0x0000e941) signal_pane_stacon_ParamLimits

0x9143,	// (0x0000e941) signal_pane_stacon

0xbec9,	// (0x000116c7) stacon_top_pane_g1_ParamLimits

0xbec9,	// (0x000116c7) stacon_top_pane_g1

0x9168,	// (0x0000e966) title_pane_stacon_ParamLimits

0x9168,	// (0x0000e966) title_pane_stacon

0x918a,	// (0x0000e988) uni_indicator_pane_stacon_ParamLimits

0x918a,	// (0x0000e988) uni_indicator_pane_stacon

0x919f,	// (0x0000e99d) battery_pane_stacon_ParamLimits

0x919f,	// (0x0000e99d) battery_pane_stacon

0x91df,	// (0x0000e9dd) control_bottom_pane_stacon_ParamLimits

0x91df,	// (0x0000e9dd) control_bottom_pane_stacon

0x91fe,	// (0x0000e9fc) navi_pane_stacon_ParamLimits

0x91fe,	// (0x0000e9fc) navi_pane_stacon

0xbeeb,	// (0x000116e9) stacon_bottom_pane_g1_ParamLimits

0xbeeb,	// (0x000116e9) stacon_bottom_pane_g1

0xb8eb,	// (0x000110e9) aid_levels_signal_lsc_ParamLimits

0xb8eb,	// (0x000110e9) aid_levels_signal_lsc

0x8ebc,	// (0x0000e6ba) signal_pane_stacon_g1_ParamLimits

0x8ebc,	// (0x0000e6ba) signal_pane_stacon_g1

0x8ec8,	// (0x0000e6c6) signal_pane_stacon_g2_ParamLimits

0x8ec8,	// (0x0000e6c6) signal_pane_stacon_g2

0x0001,

0xf6f9,	// (0x00014ef7) signal_pane_stacon_g_ParamLimits

0xf6f9,	// (0x00014ef7) signal_pane_stacon_g

0x8efc,	// (0x0000e6fa) title_pane_stacon_t1_ParamLimits

0x8efc,	// (0x0000e6fa) title_pane_stacon_t1

0xb905,	// (0x00011103) uni_indicator_pane_stacon_g1

0xb90f,	// (0x0001110d) uni_indicator_pane_stacon_g2

0xb919,	// (0x00011117) uni_indicator_pane_stacon_g3

0xb923,	// (0x00011121) uni_indicator_pane_stacon_g4

0x0003,

0xf705,	// (0x00014f03) uni_indicator_pane_stacon_g

0x8f21,	// (0x0000e71f) control_top_pane_stacon_g1

0x8f29,	// (0x0000e727) control_top_pane_stacon_t1_ParamLimits

0x8f29,	// (0x0000e727) control_top_pane_stacon_t1

0xb92d,	// (0x0001112b) aid_levels_battery_lsc_ParamLimits

0xb92d,	// (0x0001112b) aid_levels_battery_lsc

0x8f5a,	// (0x0000e758) battery_pane_stacon_g1_ParamLimits

0x8f5a,	// (0x0000e758) battery_pane_stacon_g1

0x8f66,	// (0x0000e764) battery_pane_stacon_g2_ParamLimits

0x8f66,	// (0x0000e764) battery_pane_stacon_g2

0x0001,

0xf70e,	// (0x00014f0c) battery_pane_stacon_g_ParamLimits

0xf70e,	// (0x00014f0c) battery_pane_stacon_g

0x8f95,	// (0x0000e793) navi_icon_pane_stacon

0x8fa5,	// (0x0000e7a3) navi_navi_pane_stacon

0x8f95,	// (0x0000e793) navi_text_pane_stacon

0x8f21,	// (0x0000e71f) control_bottom_pane_stacon_g1

0x8fb5,	// (0x0000e7b3) control_bottom_pane_stacon_t1_ParamLimits

0x8fb5,	// (0x0000e7b3) control_bottom_pane_stacon_t1

0x570c,	// (0x0000af0a) grid_app_pane_ParamLimits

0x570c,	// (0x0000af0a) grid_app_pane

0x573a,	// (0x0000af38) scroll_pane_cp15_ParamLimits

0x573a,	// (0x0000af38) scroll_pane_cp15

0x5751,	// (0x0000af4f) cell_app_pane_ParamLimits

0x5751,	// (0x0000af4f) cell_app_pane

0x5790,	// (0x0000af8e) cell_app_pane_g1_ParamLimits

0x5790,	// (0x0000af8e) cell_app_pane_g1

0xb9ca,	// (0x000111c8) cell_app_pane_g2_ParamLimits

0xb9ca,	// (0x000111c8) cell_app_pane_g2

0x0001,

0xf713,	// (0x00014f11) cell_app_pane_g_ParamLimits

0xf713,	// (0x00014f11) cell_app_pane_g

0xb9d6,	// (0x000111d4) cell_app_pane_t1_ParamLimits

0xb9d6,	// (0x000111d4) cell_app_pane_t1

0xb9e8,	// (0x000111e6) grid_highlight_pane_ParamLimits

0xb9e8,	// (0x000111e6) grid_highlight_pane

0xb54f,	// (0x00010d4d) cell_highlight_pane_g1

0xb557,	// (0x00010d55) cell_highlight_pane_g2

0xb55f,	// (0x00010d5d) cell_highlight_pane_g3

0xb567,	// (0x00010d65) cell_highlight_pane_g4

0xb56f,	// (0x00010d6d) cell_highlight_pane_g5

0xb577,	// (0x00010d75) cell_highlight_pane_g6

0xb57f,	// (0x00010d7d) cell_highlight_pane_g7

0xb587,	// (0x00010d85) cell_highlight_pane_g8

0xb58f,	// (0x00010d8d) cell_highlight_pane_g9

0xa54c,	// (0x0000fd4a) cell_highlight_pane_g10

0x0009,

0xf6c1,	// (0x00014ebf) cell_highlight_pane_g

0xb9f9,	// (0x000111f7) bg_scroll_pane

0x8ff9,	// (0x0000e7f7) scroll_handle_pane

0xba40,	// (0x0001123e) scroll_bg_pane_g1

0xba55,	// (0x00011253) scroll_bg_pane_g2

0xba6d,	// (0x0001126b) scroll_bg_pane_g3

0x0002,

0xf718,	// (0x00014f16) scroll_bg_pane_g

0xba82,	// (0x00011280) scroll_handle_focus_pane_ParamLimits

0xba82,	// (0x00011280) scroll_handle_focus_pane

0xba40,	// (0x0001123e) scroll_handle_pane_g1

0xba8f,	// (0x0001128d) scroll_handle_pane_g2

0xba6d,	// (0x0001126b) scroll_handle_pane_g3

0x0002,

0xf71f,	// (0x00014f1d) scroll_handle_pane_g

0xb641,	// (0x00010e3f) bg_popup_sub_pane_cp21_ParamLimits

0xb641,	// (0x00010e3f) bg_popup_sub_pane_cp21

0xbaa3,	// (0x000112a1) popup_fep_japan_predictive_window_t1_ParamLimits

0xbaa3,	// (0x000112a1) popup_fep_japan_predictive_window_t1

0xbaba,	// (0x000112b8) popup_fep_japan_predictive_window_t2_ParamLimits

0xbaba,	// (0x000112b8) popup_fep_japan_predictive_window_t2

0xbaed,	// (0x000112eb) popup_fep_japan_predictive_window_t3_ParamLimits

0xbaed,	// (0x000112eb) popup_fep_japan_predictive_window_t3

0x0002,

0xf726,	// (0x00014f24) popup_fep_japan_predictive_window_t_ParamLimits

0xf726,	// (0x00014f24) popup_fep_japan_predictive_window_t

0xa633,	// (0x0000fe31) bg_popup_sub_pane_cp23

0xbb24,	// (0x00011322) listscroll_japin_cand_pane

0xbb2c,	// (0x0001132a) popup_fep_japan_candidate_window_t1

0xbb3a,	// (0x00011338) candidate_pane_ParamLimits

0xbb3a,	// (0x00011338) candidate_pane

0xbb4d,	// (0x0001134b) scroll_pane_cp30

0xbb55,	// (0x00011353) list_single_popup_jap_candidate_pane_ParamLimits

0xbb55,	// (0x00011353) list_single_popup_jap_candidate_pane

0xa633,	// (0x0000fe31) list_highlight_pane_cp30

0xbb6a,	// (0x00011368) list_single_popup_jap_candidate_pane_t1

0x57bd,	// (0x0000afbb) level_1_signal

0x57cf,	// (0x0000afcd) level_2_signal

0x57e2,	// (0x0000afe0) level_3_signal

0x57f5,	// (0x0000aff3) level_4_signal

0x5808,	// (0x0000b006) level_5_signal

0x581b,	// (0x0000b019) level_6_signal

0x582e,	// (0x0000b02c) level_7_signal

0x57bd,	// (0x0000afbb) level_1_battery

0x57cf,	// (0x0000afcd) level_2_battery

0x57e2,	// (0x0000afe0) level_3_battery

0x57f5,	// (0x0000aff3) level_4_battery

0x5808,	// (0x0000b006) level_5_battery

0x581b,	// (0x0000b019) level_6_battery

0x582e,	// (0x0000b02c) level_7_battery

0xbbec,	// (0x000113ea) list_menu_pane_ParamLimits

0xbbec,	// (0x000113ea) list_menu_pane

0xbbfd,	// (0x000113fb) scroll_pane_cp25_ParamLimits

0xbbfd,	// (0x000113fb) scroll_pane_cp25

0x5841,	// (0x0000b03f) list_double2_graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double2_graphic_pane_cp2

0x5841,	// (0x0000b03f) list_double2_large_graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double2_large_graphic_pane_cp2

0x5841,	// (0x0000b03f) list_double2_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double2_pane_cp2

0x5841,	// (0x0000b03f) list_double_graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double_graphic_pane_cp2

0x5841,	// (0x0000b03f) list_double_large_graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double_large_graphic_pane_cp2

0x5841,	// (0x0000b03f) list_double_number_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double_number_pane_cp2

0x5841,	// (0x0000b03f) list_double_pane_cp2_ParamLimits

0x5841,	// (0x0000b03f) list_double_pane_cp2

0x585c,	// (0x0000b05a) list_single_2graphic_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_2graphic_pane_cp2

0x585c,	// (0x0000b05a) list_single_graphic_heading_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_graphic_heading_pane_cp2

0x585c,	// (0x0000b05a) list_single_graphic_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_graphic_pane_cp2

0x585c,	// (0x0000b05a) list_single_heading_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_heading_pane_cp2

0x586d,	// (0x0000b06b) list_single_large_graphic_pane_cp2_ParamLimits

0x586d,	// (0x0000b06b) list_single_large_graphic_pane_cp2

0x585c,	// (0x0000b05a) list_single_number_heading_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_number_heading_pane_cp2

0x585c,	// (0x0000b05a) list_single_number_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_number_pane_cp2

0x585c,	// (0x0000b05a) list_single_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_pane_cp2

0xbc92,	// (0x00011490) bg_popup_sub_pane_cp22

0x90a8,	// (0x0000e8a6) popup_side_volume_key_window_g1

0x90cc,	// (0x0000e8ca) popup_side_volume_key_window_t1

0x90e8,	// (0x0000e8e6) volume_small_pane_cp1

0xa9d8,	// (0x000101d6) bg_popup_sub_pane_cp24_ParamLimits

0xa9d8,	// (0x000101d6) bg_popup_sub_pane_cp24

0xbca8,	// (0x000114a6) fep_china_uni_candidate_pane_ParamLimits

0xbca8,	// (0x000114a6) fep_china_uni_candidate_pane

0xbcbc,	// (0x000114ba) fep_china_uni_entry_pane

0xbccc,	// (0x000114ca) popup_fep_china_uni_window_g1

0xbce8,	// (0x000114e6) fep_china_uni_entry_pane_g1

0xbcf0,	// (0x000114ee) fep_china_uni_entry_pane_g2

0x0001,

0xf753,	// (0x00014f51) fep_china_uni_entry_pane_g

0xbcf8,	// (0x000114f6) fep_entry_item_pane

0xbd02,	// (0x00011500) fep_candidate_item_pane

0xbd0a,	// (0x00011508) fep_china_uni_candidate_pane_g1

0xbd12,	// (0x00011510) fep_china_uni_candidate_pane_g2

0xbd1a,	// (0x00011518) fep_china_uni_candidate_pane_g3

0xbd22,	// (0x00011520) fep_china_uni_candidate_pane_g4

0x0003,

0xf758,	// (0x00014f56) fep_china_uni_candidate_pane_g

0xa54c,	// (0x0000fd4a) fep_entry_item_pane_g1

0xbd2a,	// (0x00011528) fep_entry_item_pane_t1_ParamLimits

0xbd2a,	// (0x00011528) fep_entry_item_pane_t1

0xbd40,	// (0x0001153e) fep_candidate_item_pane_t1_ParamLimits

0xbd40,	// (0x0001153e) fep_candidate_item_pane_t1

0xbd55,	// (0x00011553) fep_candidate_item_pane_t2_ParamLimits

0xbd55,	// (0x00011553) fep_candidate_item_pane_t2

0x0001,

0xf761,	// (0x00014f5f) fep_candidate_item_pane_t_ParamLimits

0xf761,	// (0x00014f5f) fep_candidate_item_pane_t

0xa713,	// (0x0000ff11) list_highlight_pane_cp31_ParamLimits

0xa713,	// (0x0000ff11) list_highlight_pane_cp31

0xbd67,	// (0x00011565) level_1_signal_lsc

0xbd70,	// (0x0001156e) level_2_signal_lsc

0xbd79,	// (0x00011577) level_3_signal_lsc

0xbd82,	// (0x00011580) level_4_signal_lsc

0xbd8b,	// (0x00011589) level_5_signal_lsc

0xbd94,	// (0x00011592) level_6_signal_lsc

0xbd9d,	// (0x0001159b) level_7_signal_lsc

0xbd9d,	// (0x0001159b) level_1_battery_lsc

0xbda6,	// (0x000115a4) level_2_battery_lsc

0xbdaf,	// (0x000115ad) level_3_battery_lsc

0xbdb8,	// (0x000115b6) level_4_battery_lsc

0xbdc1,	// (0x000115bf) level_5_battery_lsc

0xbdca,	// (0x000115c8) level_6_battery_lsc

0xbd67,	// (0x00011565) level_7_battery_lsc

0xbdd3,	// (0x000115d1) scroll_handle_focus_pane_g1

0xbddc,	// (0x000115da) scroll_handle_focus_pane_g2

0xbde5,	// (0x000115e3) scroll_handle_focus_pane_g3

0x0002,

0xf766,	// (0x00014f64) scroll_handle_focus_pane_g

0x58c6,	// (0x0000b0c4) list_single_2graphic_pane_g1_ParamLimits

0x58c6,	// (0x0000b0c4) list_single_2graphic_pane_g1

0x523f,	// (0x0000aa3d) list_single_2graphic_pane_g2_ParamLimits

0x523f,	// (0x0000aa3d) list_single_2graphic_pane_g2

0xafec,	// (0x000107ea) list_single_2graphic_pane_g3_ParamLimits

0xafec,	// (0x000107ea) list_single_2graphic_pane_g3

0x58d2,	// (0x0000b0d0) list_single_2graphic_pane_g4_ParamLimits

0x58d2,	// (0x0000b0d0) list_single_2graphic_pane_g4

0x0003,

0xf76d,	// (0x00014f6b) list_single_2graphic_pane_g_ParamLimits

0xf76d,	// (0x00014f6b) list_single_2graphic_pane_g

0x58de,	// (0x0000b0dc) list_single_2graphic_pane_t1_ParamLimits

0x58de,	// (0x0000b0dc) list_single_2graphic_pane_t1

0x590c,	// (0x0000b10a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x590c,	// (0x0000b10a) list_double2_graphic_large_graphic_pane_g1

0x52a2,	// (0x0000aaa0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x52a2,	// (0x0000aaa0) list_double2_graphic_large_graphic_pane_g2

0x526e,	// (0x0000aa6c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x526e,	// (0x0000aa6c) list_double2_graphic_large_graphic_pane_g3

0x591c,	// (0x0000b11a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x591c,	// (0x0000b11a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf776,	// (0x00014f74) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf776,	// (0x00014f74) list_double2_graphic_large_graphic_pane_g

0x5928,	// (0x0000b126) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5928,	// (0x0000b126) list_double2_graphic_large_graphic_pane_t1

0x593e,	// (0x0000b13c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x593e,	// (0x0000b13c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf77f,	// (0x00014f7d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf77f,	// (0x00014f7d) list_double2_graphic_large_graphic_pane_t

0xbf92,	// (0x00011790) popup_fast_swap_window_ParamLimits

0xbf92,	// (0x00011790) popup_fast_swap_window

0xbfae,	// (0x000117ac) popup_side_volume_key_window

0xbfc8,	// (0x000117c6) stacon_top_pane

0xbfd2,	// (0x000117d0) status_pane_ParamLimits

0xbfd2,	// (0x000117d0) status_pane

0xbfc8,	// (0x000117c6) status_small_pane

0xa633,	// (0x0000fe31) control_pane

0xa633,	// (0x0000fe31) stacon_bottom_pane

0xaea3,	// (0x000106a1) scroll_pane_cp121

0xb350,	// (0x00010b4e) set_content_pane

0xeae4,	// (0x000142e2) bg_active_tab_pane_g1_cp1

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp1

0xeaed,	// (0x000142eb) bg_active_tab_pane_g3_cp1

0xeae4,	// (0x000142e2) bg_passive_tab_pane_g1_cp1

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp1

0xeaed,	// (0x000142eb) bg_passive_tab_pane_g3_cp1

0x5959,	// (0x0000b157) bg_active_tab_pane_g1_cp2

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp2

0x5950,	// (0x0000b14e) bg_active_tab_pane_g3_cp2

0x5959,	// (0x0000b157) bg_passive_tab_pane_g1_cp2

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp2

0x5950,	// (0x0000b14e) bg_passive_tab_pane_g3_cp2

0x596b,	// (0x0000b169) bg_active_tab_pane_g1_cp3

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp3

0x5962,	// (0x0000b160) bg_active_tab_pane_g3_cp3

0x596b,	// (0x0000b169) bg_passive_tab_pane_g1_cp3

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp3

0x5962,	// (0x0000b160) bg_passive_tab_pane_g3_cp3

0x597d,	// (0x0000b17b) bg_active_tab_pane_g1_cp4

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp4

0x5974,	// (0x0000b172) bg_active_tab_pane_g3_cp4

0x597d,	// (0x0000b17b) bg_passive_tab_pane_g1_cp4

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp4

0x5974,	// (0x0000b172) bg_passive_tab_pane_g3_cp4

0xbf07,	// (0x00011705) bg_active_tab_pane_g1_cp5

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp5

0xbf10,	// (0x0001170e) bg_active_tab_pane_g3_cp5

0xbf07,	// (0x00011705) bg_passive_tab_pane_g1_cp5

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp5

0xbf10,	// (0x0001170e) bg_passive_tab_pane_g3_cp5

0x5986,	// (0x0000b184) list_set_graphic_pane_ParamLimits

0x5986,	// (0x0000b184) list_set_graphic_pane

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp4

0xbf19,	// (0x00011717) list_set_graphic_pane_g1_ParamLimits

0xbf19,	// (0x00011717) list_set_graphic_pane_g1

0xbf25,	// (0x00011723) list_set_graphic_pane_g2_ParamLimits

0xbf25,	// (0x00011723) list_set_graphic_pane_g2

0x0001,

0xf784,	// (0x00014f82) list_set_graphic_pane_g_ParamLimits

0xf784,	// (0x00014f82) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x000152da) volume_small_pane_cp_g

0xbf47,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbf47,	// (0x00011745) list_double2_large_graphic_pane_g1_cp2

0xbf53,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf53,	// (0x00011751) list_double2_large_graphic_pane_g2_cp2

0xbf62,	// (0x00011760) list_double2_large_graphic_pane_g3_cp2

0xbf6a,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf6a,	// (0x00011768) list_double2_large_graphic_pane_t1_cp2

0xbf80,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf80,	// (0x0001177e) list_double2_large_graphic_pane_t2_cp2

0xe855,	// (0x00014053) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe855,	// (0x00014053) list_double_large_graphic_pane_g1_cp2

0xe866,	// (0x00014064) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe866,	// (0x00014064) list_double_large_graphic_pane_g2_cp2

0xc0ad,	// (0x000118ab) list_double_large_graphic_pane_g3_cp2

0xe875,	// (0x00014073) list_double_large_graphic_pane_g4_cp

0xe87d,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe87d,	// (0x0001407b) list_double_large_graphic_pane_t1_cp2

0xe894,	// (0x00014092) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe894,	// (0x00014092) list_double_large_graphic_pane_t2_cp2

0xbfe0,	// (0x000117de) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbfe0,	// (0x000117de) list_double2_graphic_pane_g1_cp2

0xbfec,	// (0x000117ea) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfec,	// (0x000117ea) list_double2_graphic_pane_g2_cp2

0xbffb,	// (0x000117f9) list_double2_graphic_pane_g3_cp2

0xc003,	// (0x00011801) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc003,	// (0x00011801) list_double2_graphic_pane_t1_cp2

0xc019,	// (0x00011817) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc019,	// (0x00011817) list_double2_graphic_pane_t2_cp2

0xc02b,	// (0x00011829) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_number_heading_pane_g1_cp2

0xc037,	// (0x00011835) list_single_number_heading_pane_g2_cp2

0xc03f,	// (0x0001183d) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc03f,	// (0x0001183d) list_single_number_heading_pane_t1_cp2

0xc055,	// (0x00011853) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc055,	// (0x00011853) list_single_number_heading_pane_t2_cp2

0xc067,	// (0x00011865) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc067,	// (0x00011865) list_single_number_heading_pane_t3_cp2

0xc02b,	// (0x00011829) list_single_heading_pane_g1_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_heading_pane_g1_cp2

0xc037,	// (0x00011835) list_single_heading_pane_g2_cp2

0xc03f,	// (0x0001183d) list_single_heading_pane_t1_cp2_ParamLimits

0xc03f,	// (0x0001183d) list_single_heading_pane_t1_cp2

0xe65f,	// (0x00013e5d) list_single_heading_pane_t2_cp2_ParamLimits

0xe65f,	// (0x00013e5d) list_single_heading_pane_t2_cp2

0xe5e4,	// (0x00013de2) list_double_graphic_pane_g1_cp2_ParamLimits

0xe5e4,	// (0x00013de2) list_double_graphic_pane_g1_cp2

0xe5f0,	// (0x00013dee) list_double_graphic_pane_g2_cp2_ParamLimits

0xe5f0,	// (0x00013dee) list_double_graphic_pane_g2_cp2

0xe5ff,	// (0x00013dfd) list_double_graphic_pane_g3_cp2

0xe607,	// (0x00013e05) list_double_graphic_pane_t1_cp2_ParamLimits

0xe607,	// (0x00013e05) list_double_graphic_pane_t1_cp2

0xe61d,	// (0x00013e1b) list_double_graphic_pane_t2_cp2_ParamLimits

0xe61d,	// (0x00013e1b) list_double_graphic_pane_t2_cp2

0xc0a1,	// (0x0001189f) list_double_number_pane_g1_cp2_ParamLimits

0xc0a1,	// (0x0001189f) list_double_number_pane_g1_cp2

0xc0ad,	// (0x000118ab) list_double_number_pane_g2_cp2

0xe5aa,	// (0x00013da8) list_double_number_pane_t1_cp2_ParamLimits

0xe5aa,	// (0x00013da8) list_double_number_pane_t1_cp2

0xe5bc,	// (0x00013dba) list_double_number_pane_t2_cp2_ParamLimits

0xe5bc,	// (0x00013dba) list_double_number_pane_t2_cp2

0xe5d2,	// (0x00013dd0) list_double_number_pane_t3_cp2_ParamLimits

0xe5d2,	// (0x00013dd0) list_double_number_pane_t3_cp2

0xe522,	// (0x00013d20) list_single_graphic_pane_g1_cp2_ParamLimits

0xe522,	// (0x00013d20) list_single_graphic_pane_g1_cp2

0xc02b,	// (0x00011829) list_single_graphic_pane_g2_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_graphic_pane_g2_cp2

0xc037,	// (0x00011835) list_single_graphic_pane_g3_cp2

0xe4fa,	// (0x00013cf8) list_single_graphic_pane_t1_cp2_ParamLimits

0xe4fa,	// (0x00013cf8) list_single_graphic_pane_t1_cp2

0xc02b,	// (0x00011829) list_single_number_pane_g1_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_number_pane_g1_cp2

0xc037,	// (0x00011835) list_single_number_pane_g2_cp2

0xe4fa,	// (0x00013cf8) list_single_number_pane_t1_cp2_ParamLimits

0xe4fa,	// (0x00013cf8) list_single_number_pane_t1_cp2

0xe510,	// (0x00013d0e) list_single_number_pane_t2_cp2_ParamLimits

0xe510,	// (0x00013d0e) list_single_number_pane_t2_cp2

0xbf53,	// (0x00011751) list_double2_pane_g1_cp2_ParamLimits

0xbf53,	// (0x00011751) list_double2_pane_g1_cp2

0xbf62,	// (0x00011760) list_double2_pane_g2_cp2

0xc079,	// (0x00011877) list_double2_pane_t1_cp2_ParamLimits

0xc079,	// (0x00011877) list_double2_pane_t1_cp2

0xc08f,	// (0x0001188d) list_double2_pane_t2_cp2_ParamLimits

0xc08f,	// (0x0001188d) list_double2_pane_t2_cp2

0xc0a1,	// (0x0001189f) list_double_pane_g1_cp2_ParamLimits

0xc0a1,	// (0x0001189f) list_double_pane_g1_cp2

0xc0ad,	// (0x000118ab) list_double_pane_g2_cp2

0xc0b5,	// (0x000118b3) list_double_pane_t1_cp2_ParamLimits

0xc0b5,	// (0x000118b3) list_double_pane_t1_cp2

0xc0cb,	// (0x000118c9) list_double_pane_t2_cp2_ParamLimits

0xc0cb,	// (0x000118c9) list_double_pane_t2_cp2

0xc0f3,	// (0x000118f1) list_single_pane_cp2_g3

0xc02b,	// (0x00011829) list_single_pane_g1_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_pane_g1_cp2

0xc037,	// (0x00011835) list_single_pane_g2_cp2

0xc103,	// (0x00011901) list_single_pane_t1_cp2_ParamLimits

0xc103,	// (0x00011901) list_single_pane_t1_cp2

0xc11b,	// (0x00011919) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc11b,	// (0x00011919) list_single_large_graphic_pane_g1_cp2

0xc127,	// (0x00011925) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc127,	// (0x00011925) list_single_large_graphic_pane_g2_cp2

0xc133,	// (0x00011931) list_single_large_graphic_pane_g3_cp2

0xc13b,	// (0x00011939) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc13b,	// (0x00011939) list_single_large_graphic_pane_g4_cp1

0xc155,	// (0x00011953) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc155,	// (0x00011953) list_single_large_graphic_pane_t1_cp2

0xe4dc,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe4dc,	// (0x00013cda) list_single_graphic_heading_pane_g1_cp2

0xe4b7,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe4b7,	// (0x00013cb5) list_single_graphic_heading_pane_g4_cp2

0xc037,	// (0x00011835) list_single_graphic_heading_pane_g5_cp2

0xc03f,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc03f,	// (0x0001183d) list_single_graphic_heading_pane_t1_cp2

0xe4e8,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe4e8,	// (0x00013ce6) list_single_graphic_heading_pane_t2_cp2

0xe4ab,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe4ab,	// (0x00013ca9) list_single_2graphic_pane_g1_cp2

0xe4b7,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe4b7,	// (0x00013cb5) list_single_2graphic_pane_g2_cp2

0xc037,	// (0x00011835) list_single_2graphic_pane_g3_cp2

0xdec8,	// (0x000136c6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdec8,	// (0x000136c6) list_single_2graphic_pane_g4_cp2

0xe4c6,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe4c6,	// (0x00013cc4) list_single_2graphic_pane_t1_cp2

0xa54c,	// (0x0000fd4a) list_highlight_pane_g10_cp1

0xe0bd,	// (0x000138bb) list_highlight_pane_g1_cp1

0xe0c5,	// (0x000138c3) list_highlight_pane_g2_cp1

0xe0cd,	// (0x000138cb) list_highlight_pane_g3_cp1

0xe0d5,	// (0x000138d3) list_highlight_pane_g4_cp1

0xe0dd,	// (0x000138db) list_highlight_pane_g5_cp1

0xe0e5,	// (0x000138e3) list_highlight_pane_g6_cp1

0xe0ed,	// (0x000138eb) list_highlight_pane_g7_cp1

0xe0f5,	// (0x000138f3) list_highlight_pane_g8_cp1

0xe0fd,	// (0x000138fb) list_highlight_pane_g9_cp1

0x6645,	// (0x0000be43) form_field_slider_pane_t3

0x6653,	// (0x0000be51) form_field_slider_pane_t4

0xe007,	// (0x00013805) slider_form_pane_ParamLimits

0xe007,	// (0x00013805) slider_form_pane

0xa633,	// (0x0000fe31) control_abbreviations

0xa633,	// (0x0000fe31) control_conventions

0xa633,	// (0x0000fe31) control_definitions

0xa633,	// (0x0000fe31) format_table_attribute

0xe6a9,	// (0x00013ea7) bg_popup_preview_window_pane_g9

0xa633,	// (0x0000fe31) format_table_data2

0xa633,	// (0x0000fe31) format_table_data3

0xa633,	// (0x0000fe31) format_table_data_example

0x0008,

0xa633,	// (0x0000fe31) intro_purpose

0xf90d,	// (0x0001510b) bg_popup_preview_window_pane_g

0xa633,	// (0x0000fe31) texts_category

0xa633,	// (0x0000fe31) texts_graphics

0xc16b,	// (0x00011969) text_digital

0xc17a,	// (0x00011978) text_primary

0xc189,	// (0x00011987) text_primary_small

0xc198,	// (0x00011996) text_secondary

0xc1a7,	// (0x000119a5) text_title

0xebc0,	// (0x000143be) bg_passive_tab_pane_g1_cp3_srt

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp3_srt

0xebc9,	// (0x000143c7) bg_passive_tab_pane_g3_cp3_srt

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp3_srt_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp3_srt

0xead4,	// (0x000142d2) tabs_4_active_pane_srt_g1

0x4f32,	// (0x0000a730) tabs_4_active_pane_srt_t1_ParamLimits

0x4f32,	// (0x0000a730) tabs_4_active_pane_srt_t1

0xebc0,	// (0x000143be) bg_active_tab_pane_g1_cp3_copy1

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp3_copy1

0xebc9,	// (0x000143c7) bg_active_tab_pane_g3_cp3_copy1

0xa713,	// (0x0000ff11) tabs_2_long_active_pane_srt_ParamLimits

0xa713,	// (0x0000ff11) tabs_2_long_active_pane_srt

0xa713,	// (0x0000ff11) tabs_2_long_passive_pane_srt_ParamLimits

0xa713,	// (0x0000ff11) tabs_2_long_passive_pane_srt

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp4_srt

0xea6c,	// (0x0001426a) bg_passive_tab_pane_g1_cp4_srt

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp4_srt

0xea75,	// (0x00014273) bg_passive_tab_pane_g3_cp4_srt

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp4_srt_ParamLimits

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp4_srt

0x56df,	// (0x0000aedd) tabs_2_long_active_pane_srt_t1_ParamLimits

0x56df,	// (0x0000aedd) tabs_2_long_active_pane_srt_t1

0xea6c,	// (0x0001426a) bg_active_tab_pane_g1_cp4_srt

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp4_srt

0xea75,	// (0x00014273) bg_active_tab_pane_g3_cp4_srt

0xa9d8,	// (0x000101d6) tabs_3_long_active_pane_srt_ParamLimits

0xa9d8,	// (0x000101d6) tabs_3_long_active_pane_srt

0xa9d8,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa9d8,	// (0x000101d6) tabs_3_long_passive_pane_cp_srt

0xa9d8,	// (0x000101d6) tabs_3_long_passive_pane_srt_ParamLimits

0xa9d8,	// (0x000101d6) tabs_3_long_passive_pane_srt

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp5_srt

0xbf07,	// (0x00011705) bg_passive_tab_pane_g1_cp5_srt

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp5_srt

0xbf10,	// (0x0001170e) bg_passive_tab_pane_g3_cp5_srt

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp5_srt_ParamLimits

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp5_srt

0x56f6,	// (0x0000aef4) tabs_3_long_active_pane_srt_t1_ParamLimits

0x56f6,	// (0x0000aef4) tabs_3_long_active_pane_srt_t1

0xbf07,	// (0x00011705) bg_active_tab_pane_g1_cp5_srt

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp5_srt

0xbf10,	// (0x0001170e) bg_active_tab_pane_g3_cp5_srt

0xea5e,	// (0x0001425c) navi_text_pane_srt_t1

0xea56,	// (0x00014254) navi_icon_pane_srt_g1

0xc36c,	// (0x00011b6a) midp_editing_number_pane_srt

0xc1b6,	// (0x000119b4) midp_ticker_pane_srt

0xc374,	// (0x00011b72) midp_ticker_pane_srt_g1

0xc37c,	// (0x00011b7a) midp_ticker_pane_srt_g2

0x0001,

0xf7a3,	// (0x00014fa1) midp_ticker_pane_srt_g

0xc384,	// (0x00011b82) midp_ticker_pane_srt_t1

0xea47,	// (0x00014245) midp_editing_number_pane_t1_copy1

0x599a,	// (0x0000b198) listscroll_midp_pane

0x599a,	// (0x0000b198) midp_form_pane

0xc226,	// (0x00011a24) midp_info_popup_window_ParamLimits

0xc226,	// (0x00011a24) midp_info_popup_window

0xb641,	// (0x00010e3f) bg_popup_sub_pane_cp50_ParamLimits

0xb641,	// (0x00010e3f) bg_popup_sub_pane_cp50

0xdd55,	// (0x00013553) listscroll_midp_info_pane_ParamLimits

0xdd55,	// (0x00013553) listscroll_midp_info_pane

0xdd3d,	// (0x0001353b) listscroll_form_midp_pane_ParamLimits

0xdd3d,	// (0x0001353b) listscroll_form_midp_pane

0xdd49,	// (0x00013547) scroll_bar_cp050

0x6639,	// (0x0000be37) list_midp_pane

0xf560,	// (0x00014d5e) signal_pane_g2_cp

0xdc6f,	// (0x0001346d) listscroll_midp_info_pane_t1_ParamLimits

0xdc6f,	// (0x0001346d) listscroll_midp_info_pane_t1

0xdc87,	// (0x00013485) listscroll_midp_info_pane_t2_ParamLimits

0xdc87,	// (0x00013485) listscroll_midp_info_pane_t2

0xdcc5,	// (0x000134c3) listscroll_midp_info_pane_t3_ParamLimits

0xdcc5,	// (0x000134c3) listscroll_midp_info_pane_t3

0xdcff,	// (0x000134fd) listscroll_midp_info_pane_t4_ParamLimits

0xdcff,	// (0x000134fd) listscroll_midp_info_pane_t4

0x0003,

0xf848,	// (0x00015046) listscroll_midp_info_pane_t_ParamLimits

0xf848,	// (0x00015046) listscroll_midp_info_pane_t

0xb6f0,	// (0x00010eee) scroll_pane_cp21

0xdc13,	// (0x00013411) form_midp_field_choice_group_pane

0xdc1c,	// (0x0001341a) form_midp_field_text_pane

0xdc55,	// (0x00013453) form_midp_field_time_pane

0xdc5d,	// (0x0001345b) form_midp_gauge_slider_pane

0xdc66,	// (0x00013464) form_midp_gauge_wait_pane

0xa633,	// (0x0000fe31) form_midp_image_pane

0x6623,	// (0x0000be21) list_single_midp_pane_ParamLimits

0x6623,	// (0x0000be21) list_single_midp_pane

0x6602,	// (0x0000be00) form_midp_field_text_pane_t1

0xdab3,	// (0x000132b1) input_focus_pane_cp050

0xdc02,	// (0x00013400) list_midp_form_text_pane

0xdbd1,	// (0x000133cf) form_midp_field_choice_group_pane_t1

0xdbdf,	// (0x000133dd) input_focus_pane_cp051

0xdbf3,	// (0x000133f1) list_midp_choice_pane

0xa633,	// (0x0000fe31) status_idle_pane

0xdbb5,	// (0x000133b3) form_midp_field_time_pane_t1

0xa54c,	// (0x0000fd4a) wait_anim_pane_g2_copy1

0xdbc3,	// (0x000133c1) form_midp_field_time_pane_t2

0x0001,

0xc2ce,	// (0x00011acc) aid_navinavi_width_2_pane

0xf843,	// (0x00015041) form_midp_field_time_pane_t

0xa633,	// (0x0000fe31) input_focus_pane_cp052

0xa633,	// (0x0000fe31) bg_input_focus_pane_cp040

0xdb91,	// (0x0001338f) form_midp_gauge_slider_pane_t1

0xdb9f,	// (0x0001339d) form_midp_gauge_slider_pane_t2

0x65e6,	// (0x0000bde4) form_midp_gauge_slider_pane_t3

0x65f4,	// (0x0000bdf2) form_midp_gauge_slider_pane_t4

0x0003,

0xf83a,	// (0x00015038) form_midp_gauge_slider_pane_t

0xdbad,	// (0x000133ab) form_midp_slider_pane

0xa713,	// (0x0000ff11) bg_input_focus_pane_cp041_ParamLimits

0xa713,	// (0x0000ff11) bg_input_focus_pane_cp041

0xdb61,	// (0x0001335f) form_midp_gauge_wait_pane_t1_ParamLimits

0xdb61,	// (0x0001335f) form_midp_gauge_wait_pane_t1

0xdb73,	// (0x00013371) form_midp_gauge_wait_pane_t2_ParamLimits

0xdb73,	// (0x00013371) form_midp_gauge_wait_pane_t2

0x0001,

0xf835,	// (0x00015033) form_midp_gauge_wait_pane_t_ParamLimits

0xf835,	// (0x00015033) form_midp_gauge_wait_pane_t

0xdb85,	// (0x00013383) form_midp_wait_pane_ParamLimits

0xdb85,	// (0x00013383) form_midp_wait_pane

0xdb2b,	// (0x00013329) form_midp_image_pane_g1

0xdb34,	// (0x00013332) form_midp_image_pane_t1

0xdb43,	// (0x00013341) form_midp_image_pane_t2

0xdb52,	// (0x00013350) form_midp_image_pane_t3

0x0002,

0xf82e,	// (0x0001502c) form_midp_image_pane_t

0xdb13,	// (0x00013311) list_single_midp_pane_g1

0xdb1c,	// (0x0001331a) list_single_midp_pane_t1

0x65d2,	// (0x0000bdd0) list_midp_form_item_pane_ParamLimits

0x65d2,	// (0x0000bdd0) list_midp_form_item_pane

0xc276,	// (0x00011a74) list_midp_form_item_pane_t1

0xc285,	// (0x00011a83) midp_ticker_pane_g1

0xc291,	// (0x00011a8f) midp_ticker_pane_g2

0x0001,

0xf789,	// (0x00014f87) midp_ticker_pane_g

0xc29d,	// (0x00011a9b) midp_ticker_pane_t1

0xea47,	// (0x00014245) midp_editing_number_pane_t1

0xeb46,	// (0x00014344) midp_editing_number_pane

0xeb52,	// (0x00014350) midp_ticker_pane

0xea37,	// (0x00014235) ai_message_heading_pane

0xa633,	// (0x0000fe31) bg_popup_window_pane_cp14

0xea3f,	// (0x0001423d) listscroll_ai_message_pane

0xe9c1,	// (0x000141bf) ai_message_heading_pane_g1_ParamLimits

0xe9c1,	// (0x000141bf) ai_message_heading_pane_g1

0xe9cd,	// (0x000141cb) ai_message_heading_pane_g2_ParamLimits

0xe9cd,	// (0x000141cb) ai_message_heading_pane_g2

0xe9d9,	// (0x000141d7) ai_message_heading_pane_g3_ParamLimits

0xe9d9,	// (0x000141d7) ai_message_heading_pane_g3

0xe9e5,	// (0x000141e3) ai_message_heading_pane_g4_ParamLimits

0xe9e5,	// (0x000141e3) ai_message_heading_pane_g4

0x0003,

0xf96f,	// (0x0001516d) ai_message_heading_pane_g_ParamLimits

0xf96f,	// (0x0001516d) ai_message_heading_pane_g

0xe9f1,	// (0x000141ef) ai_message_heading_pane_t1_ParamLimits

0xe9f1,	// (0x000141ef) ai_message_heading_pane_t1

0xea0b,	// (0x00014209) ai_message_heading_pane_t2_ParamLimits

0xea0b,	// (0x00014209) ai_message_heading_pane_t2

0x0001,

0xf978,	// (0x00015176) ai_message_heading_pane_t_ParamLimits

0xf978,	// (0x00015176) ai_message_heading_pane_t

0xea1d,	// (0x0001421b) bg_popup_heading_pane_cp1_ParamLimits

0xea1d,	// (0x0001421b) bg_popup_heading_pane_cp1

0xe9af,	// (0x000141ad) list_ai_message_pane_ParamLimits

0xe9af,	// (0x000141ad) list_ai_message_pane

0xb6f0,	// (0x00010eee) scroll_pane_cp10

0xe94b,	// (0x00014149) list_ai_message_pane_g1

0xe953,	// (0x00014151) list_ai_message_pane_g2

0x0001,

0xf94c,	// (0x0001514a) list_ai_message_pane_g

0xe95b,	// (0x00014159) list_ai_message_pane_t1_ParamLimits

0xe95b,	// (0x00014159) list_ai_message_pane_t1

0xe970,	// (0x0001416e) list_ai_message_pane_t2_ParamLimits

0xe970,	// (0x0001416e) list_ai_message_pane_t2

0xe985,	// (0x00014183) list_ai_message_pane_t3_ParamLimits

0xe985,	// (0x00014183) list_ai_message_pane_t3

0xe99a,	// (0x00014198) list_ai_message_pane_t4_ParamLimits

0xe99a,	// (0x00014198) list_ai_message_pane_t4

0x0003,

0xf951,	// (0x0001514f) list_ai_message_pane_t_ParamLimits

0xf951,	// (0x0001514f) list_ai_message_pane_t

0xe939,	// (0x00014137) cell_ai_soft_ind_pane_ParamLimits

0xe939,	// (0x00014137) cell_ai_soft_ind_pane

0xc2af,	// (0x00011aad) cell_ai_soft_ind_pane_g1_ParamLimits

0xc2af,	// (0x00011aad) cell_ai_soft_ind_pane_g1

0xa633,	// (0x0000fe31) grid_highlight_cp1

0xc2bc,	// (0x00011aba) text_secondary_cp56_ParamLimits

0xc2bc,	// (0x00011aba) text_secondary_cp56

0xe90e,	// (0x0001410c) example_general_pane_ParamLimits

0xe90e,	// (0x0001410c) example_general_pane

0xe91a,	// (0x00014118) example_parent_pane_g1_ParamLimits

0xe91a,	// (0x00014118) example_parent_pane_g1

0xe926,	// (0x00014124) example_parent_pane_t1_ParamLimits

0xe926,	// (0x00014124) example_parent_pane_t1

0x5ec6,	// (0x0000b6c4) popup_preview_text_window_ParamLimits

0x5ec6,	// (0x0000b6c4) popup_preview_text_window

0xc0fb,	// (0x000118f9) list_single_pane_cp2_g4

0xaa8e,	// (0x0001028c) bg_popup_preview_window_pane_ParamLimits

0xaa8e,	// (0x0001028c) bg_popup_preview_window_pane

0xe6b1,	// (0x00013eaf) popup_preview_text_window_t1_ParamLimits

0xe6b1,	// (0x00013eaf) popup_preview_text_window_t1

0xe6cf,	// (0x00013ecd) popup_preview_text_window_t2_ParamLimits

0xe6cf,	// (0x00013ecd) popup_preview_text_window_t2

0xe718,	// (0x00013f16) popup_preview_text_window_t3_ParamLimits

0xe718,	// (0x00013f16) popup_preview_text_window_t3

0xe75d,	// (0x00013f5b) popup_preview_text_window_t4_ParamLimits

0xe75d,	// (0x00013f5b) popup_preview_text_window_t4

0x0004,

0xf920,	// (0x0001511e) popup_preview_text_window_t_ParamLimits

0xf920,	// (0x0001511e) popup_preview_text_window_t

0xe7db,	// (0x00013fd9) scroll_pane_cp11

0xd99d,	// (0x0001319b) bg_popup_preview_window_pane_g1

0xe671,	// (0x00013e6f) bg_popup_preview_window_pane_g2

0xe679,	// (0x00013e77) bg_popup_preview_window_pane_g3

0xe681,	// (0x00013e7f) bg_popup_preview_window_pane_g4

0xe689,	// (0x00013e87) bg_popup_preview_window_pane_g5

0xe691,	// (0x00013e8f) bg_popup_preview_window_pane_g6

0xe699,	// (0x00013e97) bg_popup_preview_window_pane_g7

0xe6a1,	// (0x00013e9f) bg_popup_preview_window_pane_g8

0x8bad,	// (0x0000e3ab) aid_popup_width_pane

0x5e48,	// (0x0000b646) popup_midp_note_alarm_window_ParamLimits

0x5e48,	// (0x0000b646) popup_midp_note_alarm_window

0xb3fd,	// (0x00010bfb) data_form_pane_ParamLimits

0x55c4,	// (0x0000adc2) form_field_data_pane_g1

0x55ce,	// (0x0000adcc) form_field_data_pane_t1_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_ParamLimits

0xb437,	// (0x00010c35) data_form_wide_pane_ParamLimits

0xb443,	// (0x00010c41) form_field_data_wide_pane_g1

0xb463,	// (0x00010c61) form_field_data_wide_pane_t1_ParamLimits

0xad1a,	// (0x00010518) input_focus_pane_cp6_ParamLimits

0x56bd,	// (0x0000aebb) input_popup_find_pane_g1_ParamLimits

0x56bd,	// (0x0000aebb) input_popup_find_pane_g1

0x8f76,	// (0x0000e774) aid_navi_side_left_pane

0x8f86,	// (0x0000e784) aid_navi_side_right_pane

0xe18e,	// (0x0001398c) bg_popup_window_pane_cp30_ParamLimits

0xe18e,	// (0x0001398c) bg_popup_window_pane_cp30

0xe208,	// (0x00013a06) popup_midp_note_alarm_window_g1_ParamLimits

0xe208,	// (0x00013a06) popup_midp_note_alarm_window_g1

0xe238,	// (0x00013a36) popup_midp_note_alarm_window_t1_ParamLimits

0xe238,	// (0x00013a36) popup_midp_note_alarm_window_t1

0xe2d9,	// (0x00013ad7) popup_midp_note_alarm_window_t2_ParamLimits

0xe2d9,	// (0x00013ad7) popup_midp_note_alarm_window_t2

0xe387,	// (0x00013b85) popup_midp_note_alarm_window_t3_ParamLimits

0xe387,	// (0x00013b85) popup_midp_note_alarm_window_t3

0xe3af,	// (0x00013bad) popup_midp_note_alarm_window_t4_ParamLimits

0xe3af,	// (0x00013bad) popup_midp_note_alarm_window_t4

0xe3cf,	// (0x00013bcd) popup_midp_note_alarm_window_t5_ParamLimits

0xe3cf,	// (0x00013bcd) popup_midp_note_alarm_window_t5

0x000a,

0xf8bd,	// (0x000150bb) popup_midp_note_alarm_window_t_ParamLimits

0xf8bd,	// (0x000150bb) popup_midp_note_alarm_window_t

0xe47b,	// (0x00013c79) wait_bar_pane_cp1_ParamLimits

0xe47b,	// (0x00013c79) wait_bar_pane_cp1

0xa633,	// (0x0000fe31) wait_anim_pane_copy1

0xa633,	// (0x0000fe31) wait_border_pane_copy1

0xded4,	// (0x000136d2) wait_border_pane_g1_copy1

0xb47d,	// (0x00010c7b) form_field_popup_pane_g1

0x55e6,	// (0x0000ade4) form_field_popup_pane_t1_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_cp7_ParamLimits

0xb3fd,	// (0x00010bfb) list_form_pane_ParamLimits

0xb49d,	// (0x00010c9b) form_field_popup_wide_pane_g1

0xb4a5,	// (0x00010ca3) form_field_popup_wide_pane_t1_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_cp8_ParamLimits

0xb4ba,	// (0x00010cb8) list_form_wide_pane_ParamLimits

0xebf1,	// (0x000143ef) aid_size_cell_graphic_pane

0x5663,	// (0x0000ae61) data_form_pane_t1_ParamLimits

0x6a87,	// (0x0000c285) data_form_wide_pane_t1_ParamLimits

0x6224,	// (0x0000ba22) bg_status_flat_pane

0x4e8f,	// (0x0000a68d) title_pane_t1_ParamLimits

0xa6db,	// (0x0000fed9) title_pane_t2_ParamLimits

0xa701,	// (0x0000feff) title_pane_t3_ParamLimits

0xf59b,	// (0x00014d99) title_pane_t_ParamLimits

0x57bd,	// (0x0000afbb) level_1_signal_ParamLimits

0x57cf,	// (0x0000afcd) level_2_signal_ParamLimits

0x57e2,	// (0x0000afe0) level_3_signal_ParamLimits

0x57f5,	// (0x0000aff3) level_4_signal_ParamLimits

0x5808,	// (0x0000b006) level_5_signal_ParamLimits

0x581b,	// (0x0000b019) level_6_signal_ParamLimits

0x582e,	// (0x0000b02c) level_7_signal_ParamLimits

0x57bd,	// (0x0000afbb) level_1_battery_ParamLimits

0x57cf,	// (0x0000afcd) level_2_battery_ParamLimits

0x57e2,	// (0x0000afe0) level_3_battery_ParamLimits

0x57f5,	// (0x0000aff3) level_4_battery_ParamLimits

0x5808,	// (0x0000b006) level_5_battery_ParamLimits

0x581b,	// (0x0000b019) level_6_battery_ParamLimits

0x582e,	// (0x0000b02c) level_7_battery_ParamLimits

0xe0bd,	// (0x000138bb) bg_status_flat_pane_g1

0xe0c5,	// (0x000138c3) bg_status_flat_pane_g2

0xe0cd,	// (0x000138cb) bg_status_flat_pane_g3

0xe0d5,	// (0x000138d3) bg_status_flat_pane_g4

0xe0dd,	// (0x000138db) bg_status_flat_pane_g5

0xe0e5,	// (0x000138e3) bg_status_flat_pane_g6

0xe0ed,	// (0x000138eb) bg_status_flat_pane_g7

0x4f1c,	// (0x0000a71a) tabs_3_active_pane_t1_ParamLimits

0x4f1c,	// (0x0000a71a) tabs_3_passive_pane_t1_ParamLimits

0x4f32,	// (0x0000a730) tabs_4_active_pane_t1_ParamLimits

0x4f32,	// (0x0000a730) tabs_4_1_passive_pane_t1_ParamLimits

0x56c9,	// (0x0000aec7) tabs_2_active_pane_t1_ParamLimits

0x56c9,	// (0x0000aec7) tabs_2_passive_pane_t1_ParamLimits

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp4_ParamLimits

0x56df,	// (0x0000aedd) tabs_2_long_active_pane_t1_ParamLimits

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp4_ParamLimits

0x94f6,	// (0x0000ecf4) list_single_midp_graphic_pane_t1_ParamLimits

0xa713,	// (0x0000ff11) bg_active_tab_pane_cp5_ParamLimits

0x56f6,	// (0x0000aef4) tabs_3_long_active_pane_t1_ParamLimits

0xd685,	// (0x00012e83) bg_passive_tab_pane_cp5_ParamLimits

0x94f6,	// (0x0000ecf4) list_single_midp_graphic_pane_t1

0x6224,	// (0x0000ba22) bg_status_flat_pane_ParamLimits

0xd87c,	// (0x0001307a) indicator_pane_cp2_ParamLimits

0xd87c,	// (0x0001307a) indicator_pane_cp2

0x638a,	// (0x0000bb88) navi_pane_srt_ParamLimits

0x638a,	// (0x0000bb88) navi_pane_srt

0xd8a4,	// (0x000130a2) popup_clock_digital_analogue_window_cp1

0xa807,	// (0x00010005) indicator_pane_t1

0xc1b6,	// (0x000119b4) copy_highlight_pane

0xc1b6,	// (0x000119b4) cursor_graphics_pane

0xc1b6,	// (0x000119b4) graphic_within_text_pane

0xc1b6,	// (0x000119b4) link_highlight_pane

0xe79e,	// (0x00013f9c) popup_preview_text_window_t5_ParamLimits

0xe79e,	// (0x00013f9c) popup_preview_text_window_t5

0xc2d6,	// (0x00011ad4) cursor_digital_pane

0xc2d6,	// (0x00011ad4) cursor_primary_pane

0xc2e7,	// (0x00011ae5) cursor_primary_small_pane

0xc2ef,	// (0x00011aed) cursor_secondary_pane

0xc2f7,	// (0x00011af5) cursor_title_pane

0xc2d6,	// (0x00011ad4) link_highlight_digital_pane

0xc2de,	// (0x00011adc) link_highlight_primary_pane

0xc2e7,	// (0x00011ae5) link_highlight_primary_small_pane

0xc2ef,	// (0x00011aed) link_highlight_secondary_pane

0xc2f7,	// (0x00011af5) link_highlight_title_pane

0xc2d6,	// (0x00011ad4) copy_highlight_digital_pane

0xc2d6,	// (0x00011ad4) copy_highlight_primary_pane

0xc2e7,	// (0x00011ae5) copy_highlight_primary_small_pane

0xc2ef,	// (0x00011aed) copy_highlight_secondary_pane

0xc2f7,	// (0x00011af5) copy_highlight_title_pane

0xc2ef,	// (0x00011aed) graphic_text_digital_pane

0xe13d,	// (0x0001393b) graphic_text_primary_pane

0xe146,	// (0x00013944) graphic_text_primary_small_pane

0xc2e7,	// (0x00011ae5) graphic_text_secondary_pane

0xc2d6,	// (0x00011ad4) graphic_text_title_pane

0x5a37,	// (0x0000b235) cursor_primary_pane_g1

0xe12f,	// (0x0001392d) cursor_text_primary_t1

0x6675,	// (0x0000be73) cursor_primary_small_pane_g1

0xe121,	// (0x0001391f) cursor_text_primary_small_t1

0x666b,	// (0x0000be69) cursor_primary_small_pane_g1_copy1

0xe113,	// (0x00013911) cursor_text_primary_small_t1_copy1

0xe105,	// (0x00013903) cursor_text_title_t1

0x6661,	// (0x0000be5f) cursor_title_pane_g1

0x5a37,	// (0x0000b235) cursor_digital_pane_g1

0xc307,	// (0x00011b05) cursor_text_digital_t1

0xc315,	// (0x00011b13) link_highlight_primary_pane_g1

0xe0ae,	// (0x000138ac) link_highlight_primary_pane_t1

0xc315,	// (0x00011b13) link_highlight_primary_small_pane_g1

0xc31d,	// (0x00011b1b) link_highlight_primary_small_pane_t1

0xc32c,	// (0x00011b2a) link_highlight_secondary_pane_g1

0xc334,	// (0x00011b32) link_highlight_secondary_pane_t1

0xe013,	// (0x00013811) link_highlight_title_pane_g1

0xe02a,	// (0x00013828) link_highlight_title_pane_t1

0xe013,	// (0x00013811) link_highlight_digital_pane_g1

0xe01b,	// (0x00013819) link_highlight_digital_pane_t1

0xdeef,	// (0x000136ed) copy_highlight_primary_pane_g1

0xdf15,	// (0x00013713) copy_highlight_primary_pane_t1

0xdeef,	// (0x000136ed) copy_highlight_primary_small_pane_g1

0xdf06,	// (0x00013704) copy_highlight_primary_small_pane_t1

0xc343,	// (0x00011b41) copy_highlight_secondary_pane_g1

0xc34b,	// (0x00011b49) copy_highlight_secondary_pane_t1

0xdeef,	// (0x000136ed) copy_highlight_title_pane_g1

0xdef7,	// (0x000136f5) copy_highlight_title_pane_t1

0xdeef,	// (0x000136ed) copy_highlight_digital_pane_g1

0xed44,	// (0x00014542) copy_highlight_digital_pane_t1

0xec98,	// (0x00014496) graphic_text_primary_pane_g1

0xed28,	// (0x00014526) graphic_text_primary_pane_t1

0xed36,	// (0x00014534) graphic_text_primary_pane_t2

0x0001,

0xf9ec,	// (0x000151ea) graphic_text_primary_pane_t

0xed04,	// (0x00014502) graphic_text_primary_small_pane_g1

0xed0c,	// (0x0001450a) graphic_text_primary_small_pane_t1

0xed1a,	// (0x00014518) graphic_text_primary_small_pane_t2

0x0001,

0xf9e7,	// (0x000151e5) graphic_text_primary_small_pane_t

0xece0,	// (0x000144de) graphic_text_secondary_pane_g1

0xece8,	// (0x000144e6) graphic_text_secondary_pane_t1

0xecf6,	// (0x000144f4) graphic_text_secondary_pane_t2

0x0001,

0xf9e2,	// (0x000151e0) graphic_text_secondary_pane_t

0xecbc,	// (0x000144ba) graphic_text_title_pane_g1

0xecc4,	// (0x000144c2) graphic_text_title_pane_t1

0xecd2,	// (0x000144d0) graphic_text_title_pane_t2

0x0001,

0xf9dd,	// (0x000151db) graphic_text_title_pane_t

0xec98,	// (0x00014496) graphic_text_digital_pane_g1

0xeca0,	// (0x0001449e) graphic_text_digital_pane_t1

0xecae,	// (0x000144ac) graphic_text_digital_pane_t2

0x0001,

0xf9d8,	// (0x000151d6) graphic_text_digital_pane_t

0xa713,	// (0x0000ff11) navi_icon_pane_srt_ParamLimits

0xa713,	// (0x0000ff11) navi_icon_pane_srt

0xa633,	// (0x0000fe31) navi_midp_pane_srt

0xa633,	// (0x0000fe31) navi_navi_pane_srt

0xa713,	// (0x0000ff11) navi_text_pane_srt_ParamLimits

0xa713,	// (0x0000ff11) navi_text_pane_srt

0xea8b,	// (0x00014289) navi_navi_icon_text_pane_srt

0xea93,	// (0x00014291) navi_navi_pane_srt_g1_ParamLimits

0xea93,	// (0x00014291) navi_navi_pane_srt_g1

0xeaa5,	// (0x000142a3) navi_navi_pane_srt_g2_ParamLimits

0xeaa5,	// (0x000142a3) navi_navi_pane_srt_g2

0x0001,

0xf9d3,	// (0x000151d1) navi_navi_pane_srt_g_ParamLimits

0xf9d3,	// (0x000151d1) navi_navi_pane_srt_g

0xeab7,	// (0x000142b5) navi_navi_tabs_pane_srt

0xea8b,	// (0x00014289) navi_navi_text_pane_srt

0xea8b,	// (0x00014289) navi_navi_volume_pane_srt

0xec31,	// (0x0001442f) navi_navi_text_pane_srt_t1

0x985a,	// (0x0000f058) navi_navi_volume_pane_srt_g1

0x9862,	// (0x0000f060) volume_small_pane_srt_ParamLimits

0x9862,	// (0x0000f060) volume_small_pane_srt

0x921d,	// (0x0000ea1b) volume_small_pane_srt_g1_ParamLimits

0x921d,	// (0x0000ea1b) volume_small_pane_srt_g1

0x922d,	// (0x0000ea2b) volume_small_pane_srt_g2_ParamLimits

0x922d,	// (0x0000ea2b) volume_small_pane_srt_g2

0x923e,	// (0x0000ea3c) volume_small_pane_srt_g3_ParamLimits

0x923e,	// (0x0000ea3c) volume_small_pane_srt_g3

0x924f,	// (0x0000ea4d) volume_small_pane_srt_g4_ParamLimits

0x924f,	// (0x0000ea4d) volume_small_pane_srt_g4

0x9260,	// (0x0000ea5e) volume_small_pane_srt_g5_ParamLimits

0x9260,	// (0x0000ea5e) volume_small_pane_srt_g5

0x9271,	// (0x0000ea6f) volume_small_pane_srt_g6_ParamLimits

0x9271,	// (0x0000ea6f) volume_small_pane_srt_g6

0x9282,	// (0x0000ea80) volume_small_pane_srt_g7_ParamLimits

0x9282,	// (0x0000ea80) volume_small_pane_srt_g7

0x9293,	// (0x0000ea91) volume_small_pane_srt_g8_ParamLimits

0x9293,	// (0x0000ea91) volume_small_pane_srt_g8

0x92a4,	// (0x0000eaa2) volume_small_pane_srt_g9_ParamLimits

0x92a4,	// (0x0000eaa2) volume_small_pane_srt_g9

0x92b5,	// (0x0000eab3) volume_small_pane_srt_g10_ParamLimits

0x92b5,	// (0x0000eab3) volume_small_pane_srt_g10

0x0009,

0xf78e,	// (0x00014f8c) volume_small_pane_srt_g_ParamLimits

0xf78e,	// (0x00014f8c) volume_small_pane_srt_g

0xab37,	// (0x00010335) query_popup_data_pane_cp2

0xec17,	// (0x00014415) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xec17,	// (0x00014415) navi_navi_icon_text_pane_srt_t1

0xe13d,	// (0x0001393b) navi_tabs_2_long_pane_srt

0xe13d,	// (0x0001393b) navi_tabs_2_pane_srt

0xe13d,	// (0x0001393b) navi_tabs_3_long_pane_srt

0xe13d,	// (0x0001393b) navi_tabs_3_pane_srt

0xe13d,	// (0x0001393b) navi_tabs_4_pane_srt

0x983a,	// (0x0000f038) tabs_2_active_pane_srt_ParamLimits

0x983a,	// (0x0000f038) tabs_2_active_pane_srt

0x984a,	// (0x0000f048) tabs_2_passive_pane_srt_ParamLimits

0x984a,	// (0x0000f048) tabs_2_passive_pane_srt

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp1_srt_ParamLimits

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp1_srt

0xeae4,	// (0x000142e2) bg_passive_tab_pane_g1_cp1_srt

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp1_srt

0xeaed,	// (0x000142eb) bg_passive_tab_pane_g3_cp1_srt

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp1_srt_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp1_srt

0xeadc,	// (0x000142da) tabs_2_active_pane_srt_g1

0x56c9,	// (0x0000aec7) tabs_2_active_pane_srt_t1_ParamLimits

0x56c9,	// (0x0000aec7) tabs_2_active_pane_srt_t1

0xeae4,	// (0x000142e2) bg_active_tab_pane_g1_cp1_srt

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp1_srt

0xeaed,	// (0x000142eb) bg_active_tab_pane_g3_cp1_srt

0x9807,	// (0x0000f005) tabs_3_active_pane_srt_ParamLimits

0x9807,	// (0x0000f005) tabs_3_active_pane_srt

0x9818,	// (0x0000f016) tabs_3_passive_pane_cp_srt_ParamLimits

0x9818,	// (0x0000f016) tabs_3_passive_pane_cp_srt

0x9829,	// (0x0000f027) tabs_3_passive_pane_srt_ParamLimits

0x9829,	// (0x0000f027) tabs_3_passive_pane_srt

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp2_srt_ParamLimits

0xdab3,	// (0x000132b1) bg_passive_tab_pane_cp2_srt

0xc35a,	// (0x00011b58) bg_passive_tab_pane_g1_cp2_srt

0xbe81,	// (0x0001167f) bg_passive_tab_pane_g2_cp2_srt

0xc363,	// (0x00011b61) bg_passive_tab_pane_g3_cp2_srt

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp2_srt_ParamLimits

0xa9d8,	// (0x000101d6) bg_active_tab_pane_cp2_srt

0xec07,	// (0x00014405) tabs_3_active_pane_srt_g1

0x4f1c,	// (0x0000a71a) tabs_3_active_pane_srt_t1_ParamLimits

0x4f1c,	// (0x0000a71a) tabs_3_active_pane_srt_t1

0xc35a,	// (0x00011b58) bg_active_tab_pane_g1_cp2_srt

0xbe81,	// (0x0001167f) bg_active_tab_pane_g2_cp2_srt

0xc363,	// (0x00011b61) bg_active_tab_pane_g3_cp2_srt

0x97bf,	// (0x0000efbd) tabs_4_active_pane_srt_ParamLimits

0x97bf,	// (0x0000efbd) tabs_4_active_pane_srt

0x97d1,	// (0x0000efcf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x97d1,	// (0x0000efcf) tabs_4_passive_pane_cp2_srt

0xd691,	// (0x00012e8f) aid_size_cell_toolbar

0x5bb8,	// (0x0000b3b6) main_idle_act_pane_ParamLimits

0xd765,	// (0x00012f63) popup_large_graphic_colour_window_ParamLimits

0x6116,	// (0x0000b914) popup_toolbar_window_ParamLimits

0x6116,	// (0x0000b914) popup_toolbar_window

0xeb65,	// (0x00014363) list_single_graphic_2heading_pane_ParamLimits

0xeb65,	// (0x00014363) list_single_graphic_2heading_pane

0xb93b,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane

0xb94d,	// (0x0001114b) aid_size_cell_apps_grid_prt_pane

0xd685,	// (0x00012e83) bg_wml_button_pane_cp1_ParamLimits

0xd685,	// (0x00012e83) bg_wml_button_pane_cp1

0x6602,	// (0x0000be00) form_midp_field_text_pane_t1_ParamLimits

0xdab3,	// (0x000132b1) input_focus_pane_cp050_ParamLimits

0xdc02,	// (0x00013400) list_midp_form_text_pane_ParamLimits

0xdbdf,	// (0x000133dd) input_focus_pane_cp051_ParamLimits

0xdbf3,	// (0x000133f1) list_midp_choice_pane_ParamLimits

0x65a0,	// (0x0000bd9e) list_single_2graphic_pane_cp3_ParamLimits

0x65a0,	// (0x0000bd9e) list_single_2graphic_pane_cp3

0x65b3,	// (0x0000bdb1) list_single_midp_graphic_pane_ParamLimits

0x65b3,	// (0x0000bdb1) list_single_midp_graphic_pane

0x9408,	// (0x0000ec06) list_single_graphic_2heading_pane_g1_ParamLimits

0x9408,	// (0x0000ec06) list_single_graphic_2heading_pane_g1

0x9414,	// (0x0000ec12) list_single_graphic_2heading_pane_g4_ParamLimits

0x9414,	// (0x0000ec12) list_single_graphic_2heading_pane_g4

0x9420,	// (0x0000ec1e) list_single_graphic_2heading_pane_g5_ParamLimits

0x9420,	// (0x0000ec1e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7e1,	// (0x00014fdf) list_single_graphic_2heading_pane_g_ParamLimits

0xf7e1,	// (0x00014fdf) list_single_graphic_2heading_pane_g

0x942c,	// (0x0000ec2a) list_single_graphic_2heading_pane_t1_ParamLimits

0x942c,	// (0x0000ec2a) list_single_graphic_2heading_pane_t1

0x9440,	// (0x0000ec3e) list_single_graphic_2heading_pane_t2_ParamLimits

0x9440,	// (0x0000ec3e) list_single_graphic_2heading_pane_t2

0x945a,	// (0x0000ec58) list_single_graphic_2heading_pane_t3_ParamLimits

0x945a,	// (0x0000ec58) list_single_graphic_2heading_pane_t3

0x0002,

0xf7e8,	// (0x00014fe6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7e8,	// (0x00014fe6) list_single_graphic_2heading_pane_t

0xd8e7,	// (0x000130e5) bg_popup_sub_pane_cp2

0xd90d,	// (0x0001310b) grid_toobar_pane

0x9472,	// (0x0000ec70) cell_toolbar_pane_ParamLimits

0x9472,	// (0x0000ec70) cell_toolbar_pane

0xd943,	// (0x00013141) cell_toolbar_pane_g1_ParamLimits

0xd943,	// (0x00013141) cell_toolbar_pane_g1

0xd955,	// (0x00013153) cell_toolbar_pane_g2_ParamLimits

0xd955,	// (0x00013153) cell_toolbar_pane_g2

0x0001,

0xf7ef,	// (0x00014fed) cell_toolbar_pane_g_ParamLimits

0xf7ef,	// (0x00014fed) cell_toolbar_pane_g

0xd977,	// (0x00013175) grid_highlight_pane_cp2_ParamLimits

0xd977,	// (0x00013175) grid_highlight_pane_cp2

0xd991,	// (0x0001318f) toolbar_button_pane

0xd99d,	// (0x0001319b) toolbar_button_pane_g1

0xd9a5,	// (0x000131a3) toolbar_button_pane_g2

0xd9ad,	// (0x000131ab) toolbar_button_pane_g3

0xd9b5,	// (0x000131b3) toolbar_button_pane_g4

0xd9bd,	// (0x000131bb) toolbar_button_pane_g5

0xd9c5,	// (0x000131c3) toolbar_button_pane_g6

0xd9cd,	// (0x000131cb) toolbar_button_pane_g7

0xd9d5,	// (0x000131d3) toolbar_button_pane_g8

0xd9dd,	// (0x000131db) toolbar_button_pane_g9

0x0009,

0xf7f4,	// (0x00014ff2) toolbar_button_pane_g

0x94a1,	// (0x0000ec9f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x94a1,	// (0x0000ec9f) list_single_2graphic_pane_g1_cp3

0xd09e,	// (0x0001289c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd09e,	// (0x0001289c) list_single_2graphic_pane_g2_cp3

0x94bc,	// (0x0000ecba) list_single_2graphic_pane_g3_cp3

0x94c4,	// (0x0000ecc2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x94c4,	// (0x0000ecc2) list_single_2graphic_pane_g4_cp3

0x94d0,	// (0x0000ecce) list_single_2graphic_pane_t1_cp3_ParamLimits

0x94d0,	// (0x0000ecce) list_single_2graphic_pane_t1_cp3

0x94ea,	// (0x0000ece8) list_single_midp_graphic_pane_g2_ParamLimits

0x94ea,	// (0x0000ece8) list_single_midp_graphic_pane_g2

0xd699,	// (0x00012e97) aid_zoom_text_primary

0xd6a1,	// (0x00012e9f) aid_zoom_text_secondary

0xc415,	// (0x00011c13) status_small_pane_g7_ParamLimits

0xc415,	// (0x00011c13) status_small_pane_g7

0xc438,	// (0x00011c36) status_small_pane_t1_ParamLimits

0x4e64,	// (0x0000a662) title_pane_g2

0x0003,

0xf592,	// (0x00014d90) title_pane_g

0x5146,	// (0x0000a944) aid_size_cell_colour_1_pane_ParamLimits

0x5146,	// (0x0000a944) aid_size_cell_colour_1_pane

0x515a,	// (0x0000a958) aid_size_cell_colour_2_pane_ParamLimits

0x515a,	// (0x0000a958) aid_size_cell_colour_2_pane

0x516e,	// (0x0000a96c) aid_size_cell_colour_3_pane_ParamLimits

0x516e,	// (0x0000a96c) aid_size_cell_colour_3_pane

0x5182,	// (0x0000a980) aid_size_cell_colour_4_pane_ParamLimits

0x5182,	// (0x0000a980) aid_size_cell_colour_4_pane

0x8ed8,	// (0x0000e6d6) title_pane_stacon_g1_ParamLimits

0x8ed8,	// (0x0000e6d6) title_pane_stacon_g1

0xdf6c,	// (0x0001376a) popup_note_wait_window_g3_ParamLimits

0xdf6c,	// (0x0001376a) popup_note_wait_window_g3

0xdfe2,	// (0x000137e0) popup_note_wait_window_t5_ParamLimits

0xdfe2,	// (0x000137e0) popup_note_wait_window_t5

0xa633,	// (0x0000fe31) main_feb_china_hwr_fs_writing_pane

0x5c19,	// (0x0000b417) popup_feb_china_hwr_fs_window_ParamLimits

0x5c19,	// (0x0000b417) popup_feb_china_hwr_fs_window

0xd0af,	// (0x000128ad) aid_size_cell_hwr_fs_ParamLimits

0xd0af,	// (0x000128ad) aid_size_cell_hwr_fs

0xdab3,	// (0x000132b1) bg_popup_sub_pane_cp3_ParamLimits

0xdab3,	// (0x000132b1) bg_popup_sub_pane_cp3

0xd0c4,	// (0x000128c2) grid_hwr_fs_pane_ParamLimits

0xd0c4,	// (0x000128c2) grid_hwr_fs_pane

0x9535,	// (0x0000ed33) linegrid_hwr_fs_pane_ParamLimits

0x9535,	// (0x0000ed33) linegrid_hwr_fs_pane

0xd0dc,	// (0x000128da) cell_hwr_fs_pane_ParamLimits

0xd0dc,	// (0x000128da) cell_hwr_fs_pane

0xdabf,	// (0x000132bd) linegrid_hwr_fs_pane_g1_ParamLimits

0xdabf,	// (0x000132bd) linegrid_hwr_fs_pane_g1

0x6566,	// (0x0000bd64) linegrid_hwr_fs_pane_g2_ParamLimits

0x6566,	// (0x0000bd64) linegrid_hwr_fs_pane_g2

0xdacb,	// (0x000132c9) linegrid_hwr_fs_pane_g3_ParamLimits

0xdacb,	// (0x000132c9) linegrid_hwr_fs_pane_g3

0x9563,	// (0x0000ed61) linegrid_hwr_fs_pane_g4_ParamLimits

0x9563,	// (0x0000ed61) linegrid_hwr_fs_pane_g4

0x957d,	// (0x0000ed7b) linegrid_hwr_fs_pane_g5_ParamLimits

0x957d,	// (0x0000ed7b) linegrid_hwr_fs_pane_g5

0x0004,

0xf81a,	// (0x00015018) linegrid_hwr_fs_pane_g_ParamLimits

0xf81a,	// (0x00015018) linegrid_hwr_fs_pane_g

0xdad7,	// (0x000132d5) cell_hwr_fs_pane_g1_ParamLimits

0xdad7,	// (0x000132d5) cell_hwr_fs_pane_g1

0xd8b5,	// (0x000130b3) cell_hwr_fs_pane_g2_ParamLimits

0xd8b5,	// (0x000130b3) cell_hwr_fs_pane_g2

0x6578,	// (0x0000bd76) cell_hwr_fs_pane_g3_ParamLimits

0x6578,	// (0x0000bd76) cell_hwr_fs_pane_g3

0x6585,	// (0x0000bd83) cell_hwr_fs_pane_g4_ParamLimits

0x6585,	// (0x0000bd83) cell_hwr_fs_pane_g4

0x0003,

0xf825,	// (0x00015023) cell_hwr_fs_pane_g_ParamLimits

0xf825,	// (0x00015023) cell_hwr_fs_pane_g

0xd0fc,	// (0x000128fa) cell_hwr_fs_pane_t1

0xa633,	// (0x0000fe31) grid_highlight_pane_cp6

0xa633,	// (0x0000fe31) main_idle_act2_pane

0xb6d7,	// (0x00010ed5) aid_inside_area_popup_secondary

0x6782,	// (0x0000bf80) aid_inside_area_window_primary_ParamLimits

0x6782,	// (0x0000bf80) aid_inside_area_window_primary

0xed53,	// (0x00014551) ai2_news_ticker_pane

0xed5b,	// (0x00014559) aid_size_cell_ai1_link_ParamLimits

0xed5b,	// (0x00014559) aid_size_cell_ai1_link

0x6bcd,	// (0x0000c3cb) popup_ai2_data_window_ParamLimits

0x6bcd,	// (0x0000c3cb) popup_ai2_data_window

0xed75,	// (0x00014573) popup_ai2_link_window_ParamLimits

0xed75,	// (0x00014573) popup_ai2_link_window

0xdab3,	// (0x000132b1) bg_popup_sub_pane_cp4_ParamLimits

0xdab3,	// (0x000132b1) bg_popup_sub_pane_cp4

0xed89,	// (0x00014587) grid_ai2_link_pane_ParamLimits

0xed89,	// (0x00014587) grid_ai2_link_pane

0xeda0,	// (0x0001459e) popup_ai2_link_window_g1_ParamLimits

0xeda0,	// (0x0001459e) popup_ai2_link_window_g1

0xedac,	// (0x000145aa) popup_ai2_link_window_g2_ParamLimits

0xedac,	// (0x000145aa) popup_ai2_link_window_g2

0x0001,

0xf9f1,	// (0x000151ef) popup_ai2_link_window_g_ParamLimits

0xf9f1,	// (0x000151ef) popup_ai2_link_window_g

0xedbb,	// (0x000145b9) ai2_mp_button_pane

0xedc3,	// (0x000145c1) ai2_mp_volume_pane

0xdbdf,	// (0x000133dd) bg_popup_sub_pane_cp5_ParamLimits

0xdbdf,	// (0x000133dd) bg_popup_sub_pane_cp5

0xedcb,	// (0x000145c9) heading_ai2_gene_pane_ParamLimits

0xedcb,	// (0x000145c9) heading_ai2_gene_pane

0xedd7,	// (0x000145d5) list_ai2_gene_pane_ParamLimits

0xedd7,	// (0x000145d5) list_ai2_gene_pane

0xee1f,	// (0x0001461d) cell_ai2_link_pane_ParamLimits

0xee1f,	// (0x0001461d) cell_ai2_link_pane

0xee35,	// (0x00014633) cell_ai2_link_pane_g1

0xa633,	// (0x0000fe31) grid_highlight_pane_cp7

0x9877,	// (0x0000f075) ai2_mp_volume_pane_g1

0xeedd,	// (0x000146db) ai2_mp_volume_pane_g2

0x6bf7,	// (0x0000c3f5) list_ai2_gene_pane_t1

0xeee5,	// (0x000146e3) ai2_mp_volume_pane_g3

0x0002,

0xfa0a,	// (0x00015208) ai2_mp_volume_pane_g

0x987f,	// (0x0000f07d) volume_small_pane_cp3

0xeeed,	// (0x000146eb) aid_size_cell_ai2_button

0xeef5,	// (0x000146f3) grid_ai2_button_pane

0xeefe,	// (0x000146fc) cell_ai2_button_pane_ParamLimits

0xeefe,	// (0x000146fc) cell_ai2_button_pane

0xa54c,	// (0x0000fd4a) cell_ai2_button_pane_g1

0xa633,	// (0x0000fe31) grid_highlight_pane_cp8

0xee9d,	// (0x0001469b) ai2_gene_pane_t1_ParamLimits

0xee9d,	// (0x0001469b) ai2_gene_pane_t1

0x5b87,	// (0x0000b385) aid_height_parent_landscape

0x694c,	// (0x0000c14a) aid_height_set_list

0xeb0a,	// (0x00014308) aid_size_parent

0xebf1,	// (0x000143ef) aid_size_cell_graphic_pane_ParamLimits

0xede7,	// (0x000145e5) popup_ai2_data_window_g1_ParamLimits

0xede7,	// (0x000145e5) popup_ai2_data_window_g1

0xedf3,	// (0x000145f1) ai2_news_ticker_pane_g1

0xedfb,	// (0x000145f9) ai2_news_ticker_pane_g2

0x0001,

0xf9f6,	// (0x000151f4) ai2_news_ticker_pane_g

0xee03,	// (0x00014601) ai2_news_ticker_pane_t1

0xee11,	// (0x0001460f) ai2_news_ticker_pane_t2

0x0001,

0xf9fb,	// (0x000151f9) ai2_news_ticker_pane_t

0xebd2,	// (0x000143d0) heading_ai2_gene_pane_g1

0xee3e,	// (0x0001463c) heading_ai2_gene_pane_t1_ParamLimits

0xee3e,	// (0x0001463c) heading_ai2_gene_pane_t1

0xee66,	// (0x00014664) list_highlight_pane_cp6

0x6be1,	// (0x0000c3df) ai2_gene_pane_ParamLimits

0x6be1,	// (0x0000c3df) ai2_gene_pane

0x6c05,	// (0x0000c403) list_ai2_gene_pane_t2

0x0001,

0xfa00,	// (0x000151fe) list_ai2_gene_pane_t

0xee6e,	// (0x0001466c) list_highlight_pane_cp8_ParamLimits

0xee6e,	// (0x0001466c) list_highlight_pane_cp8

0xee7f,	// (0x0001467d) ai2_gene_pane_g1_ParamLimits

0xee7f,	// (0x0001467d) ai2_gene_pane_g1

0xee91,	// (0x0001468f) ai2_gene_pane_g2_ParamLimits

0xee91,	// (0x0001468f) ai2_gene_pane_g2

0x0001,

0xfa05,	// (0x00015203) ai2_gene_pane_g_ParamLimits

0xfa05,	// (0x00015203) ai2_gene_pane_g

0xaea3,	// (0x000106a1) scroll_pane_cp12

0xd05d,	// (0x0001285b) control_pane_t3_ParamLimits

0xd05d,	// (0x0001285b) control_pane_t3

0xc429,	// (0x00011c27) status_small_pane_g8_ParamLimits

0xc429,	// (0x00011c27) status_small_pane_g8

0x5c8d,	// (0x0000b48b) popup_find_window_ParamLimits

0x5e80,	// (0x0000b67e) popup_note_image_window_ParamLimits

0xb0b5,	// (0x000108b3) list_double2_graphic_pane_vc_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_double2_graphic_pane_vc_g1

0xb0c1,	// (0x000108bf) list_double2_graphic_pane_vc_g2_ParamLimits

0xb0c1,	// (0x000108bf) list_double2_graphic_pane_vc_g2

0xafec,	// (0x000107ea) list_double2_graphic_pane_vc_g3_ParamLimits

0xafec,	// (0x000107ea) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x00014e03) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x00014e03) list_double2_graphic_pane_vc_g

0xb0cd,	// (0x000108cb) list_double2_graphic_pane_vc_t1_ParamLimits

0xb0cd,	// (0x000108cb) list_double2_graphic_pane_vc_t1

0xb0c1,	// (0x000108bf) list_single_heading_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_heading_pane_vc_g1

0xafec,	// (0x000107ea) list_single_heading_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_heading_pane_vc_g

0xd9e5,	// (0x000131e3) list_single_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x000131e3) list_single_heading_pane_vc_t1

0xd9fb,	// (0x000131f9) list_single_heading_pane_vc_t2_ParamLimits

0xd9fb,	// (0x000131f9) list_single_heading_pane_vc_t2

0x0001,

0xf809,	// (0x00015007) list_single_heading_pane_vc_t_ParamLimits

0xf809,	// (0x00015007) list_single_heading_pane_vc_t

0xda0d,	// (0x0001320b) list_setting_number_pane_vc_g1_ParamLimits

0xda0d,	// (0x0001320b) list_setting_number_pane_vc_g1

0xda19,	// (0x00013217) list_setting_number_pane_vc_g2_ParamLimits

0xda19,	// (0x00013217) list_setting_number_pane_vc_g2

0x0001,

0xf80e,	// (0x0001500c) list_setting_number_pane_vc_g_ParamLimits

0xf80e,	// (0x0001500c) list_setting_number_pane_vc_g

0xda25,	// (0x00013223) list_setting_number_pane_vc_t1_ParamLimits

0xda25,	// (0x00013223) list_setting_number_pane_vc_t1

0xda39,	// (0x00013237) list_setting_number_pane_vc_t2_ParamLimits

0xda39,	// (0x00013237) list_setting_number_pane_vc_t2

0xda55,	// (0x00013253) list_setting_number_pane_vc_t3_ParamLimits

0xda55,	// (0x00013253) list_setting_number_pane_vc_t3

0x0002,

0xf813,	// (0x00015011) list_setting_number_pane_vc_t_ParamLimits

0xf813,	// (0x00015011) list_setting_number_pane_vc_t

0xda7b,	// (0x00013279) set_value_pane_vc_ParamLimits

0xda7b,	// (0x00013279) set_value_pane_vc

0xeb65,	// (0x00014363) list_double2_graphic_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double2_graphic_pane_vc

0xeb78,	// (0x00014376) list_double2_large_graphic_pane_vc_ParamLimits

0xeb78,	// (0x00014376) list_double2_large_graphic_pane_vc

0xeb65,	// (0x00014363) list_double2_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double2_pane_vc

0xeb65,	// (0x00014363) list_double_graphic_heading_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_graphic_heading_pane_vc

0xeb65,	// (0x00014363) list_double_graphic_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_graphic_pane_vc

0xeb65,	// (0x00014363) list_double_heading_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_heading_pane_vc

0xeb78,	// (0x00014376) list_double_large_graphic_pane_vc_ParamLimits

0xeb78,	// (0x00014376) list_double_large_graphic_pane_vc

0xeb65,	// (0x00014363) list_double_number_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_number_pane_vc

0xeb65,	// (0x00014363) list_double_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_pane_vc

0xeb65,	// (0x00014363) list_double_time_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_double_time_pane_vc

0xeb65,	// (0x00014363) list_setting_number_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_setting_number_pane_vc

0xeb65,	// (0x00014363) list_setting_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_setting_pane_vc

0xeb65,	// (0x00014363) list_single_graphic_heading_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_single_graphic_heading_pane_vc

0xeb65,	// (0x00014363) list_single_heading_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_single_heading_pane_vc

0xeb65,	// (0x00014363) list_single_number_heading_pane_vc_ParamLimits

0xeb65,	// (0x00014363) list_single_number_heading_pane_vc

0xb0b5,	// (0x000108b3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_double_graphic_heading_pane_vc_g1

0xb0c1,	// (0x000108bf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0c1,	// (0x000108bf) list_double_graphic_heading_pane_vc_g2

0xafec,	// (0x000107ea) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xafec,	// (0x000107ea) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x00014e03) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x00014e03) list_double_graphic_heading_pane_vc_g

0xef10,	// (0x0001470e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef10,	// (0x0001470e) list_double_graphic_heading_pane_vc_t1

0xd9e5,	// (0x000131e3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd9e5,	// (0x000131e3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x0001520f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x0001520f) list_double_graphic_heading_pane_vc_t

0xda0d,	// (0x0001320b) list_setting_pane_vc_g1_ParamLimits

0xda0d,	// (0x0001320b) list_setting_pane_vc_g1

0xda19,	// (0x00013217) list_setting_pane_vc_g2_ParamLimits

0xda19,	// (0x00013217) list_setting_pane_vc_g2

0x0001,

0xf80e,	// (0x0001500c) list_setting_pane_vc_g_ParamLimits

0xf80e,	// (0x0001500c) list_setting_pane_vc_g

0xf0fe,	// (0x000148fc) list_setting_pane_vc_t1_ParamLimits

0xf0fe,	// (0x000148fc) list_setting_pane_vc_t1

0xf112,	// (0x00014910) list_setting_pane_vc_t2_ParamLimits

0xf112,	// (0x00014910) list_setting_pane_vc_t2

0x0001,

0xfa54,	// (0x00015252) list_setting_pane_vc_t_ParamLimits

0xfa54,	// (0x00015252) list_setting_pane_vc_t

0xda7b,	// (0x00013279) set_value_pane_cp_vc_ParamLimits

0xda7b,	// (0x00013279) set_value_pane_cp_vc

0xb0c1,	// (0x000108bf) list_single_number_heading_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_single_number_heading_pane_vc_g1

0xafec,	// (0x000107ea) list_single_number_heading_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_single_number_heading_pane_vc_g

0xd9e5,	// (0x000131e3) list_single_number_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x000131e3) list_single_number_heading_pane_vc_t1

0xf134,	// (0x00014932) list_single_number_heading_pane_vc_t2_ParamLimits

0xf134,	// (0x00014932) list_single_number_heading_pane_vc_t2

0xf097,	// (0x00014895) list_single_number_heading_pane_vc_t3_ParamLimits

0xf097,	// (0x00014895) list_single_number_heading_pane_vc_t3

0x0002,

0xfa59,	// (0x00015257) list_single_number_heading_pane_vc_t_ParamLimits

0xfa59,	// (0x00015257) list_single_number_heading_pane_vc_t

0xb0b5,	// (0x000108b3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_single_graphic_heading_pane_vc_g1

0xb0c1,	// (0x000108bf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb0c1,	// (0x000108bf) list_single_graphic_heading_pane_vc_g4

0xafec,	// (0x000107ea) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xafec,	// (0x000107ea) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x00014e03) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x00014e03) list_single_graphic_heading_pane_vc_g

0xd9e5,	// (0x000131e3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x000131e3) list_single_graphic_heading_pane_vc_t1

0xf146,	// (0x00014944) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf146,	// (0x00014944) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x0001525e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x0001525e) list_single_graphic_heading_pane_vc_t

0xb0c1,	// (0x000108bf) list_double2_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_double2_pane_vc_g1

0xafec,	// (0x000107ea) list_double2_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_double2_pane_vc_g

0xaff8,	// (0x000107f6) list_double2_pane_vc_t1_ParamLimits

0xaff8,	// (0x000107f6) list_double2_pane_vc_t1

0xaf5b,	// (0x00010759) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xaf5b,	// (0x00010759) list_double2_large_graphic_pane_vc_g1

0xaf67,	// (0x00010765) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xaf67,	// (0x00010765) list_double2_large_graphic_pane_vc_g2

0xaf73,	// (0x00010771) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xaf73,	// (0x00010771) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00014e27) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00014e27) list_double2_large_graphic_pane_vc_g

0xaf87,	// (0x00010785) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xaf87,	// (0x00010785) list_double2_large_graphic_pane_vc_t1

0xf158,	// (0x00014956) list_double_time_pane_vc_g1_ParamLimits

0xf158,	// (0x00014956) list_double_time_pane_vc_g1

0xf164,	// (0x00014962) list_double_time_pane_vc_g2_ParamLimits

0xf164,	// (0x00014962) list_double_time_pane_vc_g2

0x0001,

0xfa65,	// (0x00015263) list_double_time_pane_vc_g_ParamLimits

0xfa65,	// (0x00015263) list_double_time_pane_vc_g

0xf170,	// (0x0001496e) list_double_time_pane_vc_t1_ParamLimits

0xf170,	// (0x0001496e) list_double_time_pane_vc_t1

0xf189,	// (0x00014987) list_double_time_pane_vc_t2_ParamLimits

0xf189,	// (0x00014987) list_double_time_pane_vc_t2

0xf1a2,	// (0x000149a0) list_double_time_pane_vc_t3_ParamLimits

0xf1a2,	// (0x000149a0) list_double_time_pane_vc_t3

0xf1ba,	// (0x000149b8) list_double_time_pane_vc_t4_ParamLimits

0xf1ba,	// (0x000149b8) list_double_time_pane_vc_t4

0x0003,

0xfa6a,	// (0x00015268) list_double_time_pane_vc_t_ParamLimits

0xfa6a,	// (0x00015268) list_double_time_pane_vc_t

0xb0c1,	// (0x000108bf) list_double_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_double_pane_vc_g1

0xafec,	// (0x000107ea) list_double_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_double_pane_vc_g

0xf1cc,	// (0x000149ca) list_double_pane_vc_t1_ParamLimits

0xf1cc,	// (0x000149ca) list_double_pane_vc_t1

0xf1de,	// (0x000149dc) list_double_pane_vc_t2_ParamLimits

0xf1de,	// (0x000149dc) list_double_pane_vc_t2

0x0001,

0xfa73,	// (0x00015271) list_double_pane_vc_t_ParamLimits

0xfa73,	// (0x00015271) list_double_pane_vc_t

0xb0c1,	// (0x000108bf) list_double_number_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_double_number_pane_vc_g1

0xafec,	// (0x000107ea) list_double_number_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_double_number_pane_vc_g

0xf1f4,	// (0x000149f2) list_double_number_pane_vc_t1_ParamLimits

0xf1f4,	// (0x000149f2) list_double_number_pane_vc_t1

0xf208,	// (0x00014a06) list_double_number_pane_vc_t2_ParamLimits

0xf208,	// (0x00014a06) list_double_number_pane_vc_t2

0xf1de,	// (0x000149dc) list_double_number_pane_vc_t3_ParamLimits

0xf1de,	// (0x000149dc) list_double_number_pane_vc_t3

0x0002,

0xfa78,	// (0x00015276) list_double_number_pane_vc_t_ParamLimits

0xfa78,	// (0x00015276) list_double_number_pane_vc_t

0xf21a,	// (0x00014a18) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf21a,	// (0x00014a18) list_double_large_graphic_pane_vc_g1

0xf226,	// (0x00014a24) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf226,	// (0x00014a24) list_double_large_graphic_pane_vc_g2

0xaf73,	// (0x00010771) list_double_large_graphic_pane_vc_g3_ParamLimits

0xaf73,	// (0x00010771) list_double_large_graphic_pane_vc_g3

0xf235,	// (0x00014a33) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf235,	// (0x00014a33) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7f,	// (0x0001527d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7f,	// (0x0001527d) list_double_large_graphic_pane_vc_g

0xf241,	// (0x00014a3f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf241,	// (0x00014a3f) list_double_large_graphic_pane_vc_t1

0xf253,	// (0x00014a51) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf253,	// (0x00014a51) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x00015286) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x00015286) list_double_large_graphic_pane_vc_t

0xb0c1,	// (0x000108bf) list_double_heading_pane_vc_g1_ParamLimits

0xb0c1,	// (0x000108bf) list_double_heading_pane_vc_g1

0xafec,	// (0x000107ea) list_double_heading_pane_vc_g2_ParamLimits

0xafec,	// (0x000107ea) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e0a) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e0a) list_double_heading_pane_vc_g

0xf26a,	// (0x00014a68) list_double_heading_pane_vc_t1_ParamLimits

0xf26a,	// (0x00014a68) list_double_heading_pane_vc_t1

0xd9e5,	// (0x000131e3) list_double_heading_pane_vc_t2_ParamLimits

0xd9e5,	// (0x000131e3) list_double_heading_pane_vc_t2

0x0001,

0xfa8d,	// (0x0001528b) list_double_heading_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001528b) list_double_heading_pane_vc_t

0xb0b5,	// (0x000108b3) list_double_graphic_pane_vc_g1_ParamLimits

0xb0b5,	// (0x000108b3) list_double_graphic_pane_vc_g1

0xf27c,	// (0x00014a7a) list_double_graphic_pane_vc_g2_ParamLimits

0xf27c,	// (0x00014a7a) list_double_graphic_pane_vc_g2

0xf28b,	// (0x00014a89) list_double_graphic_pane_vc_g3_ParamLimits

0xf28b,	// (0x00014a89) list_double_graphic_pane_vc_g3

0x0002,

0xfa92,	// (0x00015290) list_double_graphic_pane_vc_g_ParamLimits

0xfa92,	// (0x00015290) list_double_graphic_pane_vc_g

0xf297,	// (0x00014a95) list_double_graphic_pane_vc_t1_ParamLimits

0xf297,	// (0x00014a95) list_double_graphic_pane_vc_t1

0xf1de,	// (0x000149dc) list_double_graphic_pane_vc_t2_ParamLimits

0xf1de,	// (0x000149dc) list_double_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x00015297) list_double_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x00015297) list_double_graphic_pane_vc_t

0x8bb5,	// (0x0000e3b3) aid_size_cell_fastswap

0xce11,	// (0x0001260f) aid_size_cell_touch_ParamLimits

0xce11,	// (0x0001260f) aid_size_cell_touch

0x8d0c,	// (0x0000e50a) popup_fast_swap_wide_window_ParamLimits

0x8d0c,	// (0x0000e50a) popup_fast_swap_wide_window

0xcec2,	// (0x000126c0) touch_pane_ParamLimits

0xcec2,	// (0x000126c0) touch_pane

0xb359,	// (0x00010b57) button_value_adjust_pane_cp2

0xb361,	// (0x00010b5f) button_value_adjust_pane_cp4

0xb381,	// (0x00010b7f) form_field_data_pane_cp2

0x558b,	// (0x0000ad89) form_field_data_wide_pane_cp2

0xb9f9,	// (0x000111f7) bg_scroll_pane_ParamLimits

0x8ff9,	// (0x0000e7f7) scroll_handle_pane_ParamLimits

0x900d,	// (0x0000e80b) scroll_sc2_down_pane_ParamLimits

0x900d,	// (0x0000e80b) scroll_sc2_down_pane

0xba2a,	// (0x00011228) scroll_sc2_up_pane_ParamLimits

0xba2a,	// (0x00011228) scroll_sc2_up_pane

0x6d29,	// (0x0000c527) grid_wheel_folder_pane_g1_ParamLimits

0x6d29,	// (0x0000c527) grid_wheel_folder_pane_g1

0x91c1,	// (0x0000e9bf) clock_nsta_pane_cp2_ParamLimits

0x91c1,	// (0x0000e9bf) clock_nsta_pane_cp2

0x599a,	// (0x0000b198) listscroll_midp_pane_ParamLimits

0x59aa,	// (0x0000b1a8) midp_canvas_pane

0x9400,	// (0x0000ebfe) nsta_clock_indic_pane

0xd6c9,	// (0x00012ec7) listscroll_form_pane_vc

0xd6d1,	// (0x00012ecf) listscroll_set_pane_vc_ParamLimits

0xd6d1,	// (0x00012ecf) listscroll_set_pane_vc

0x624c,	// (0x0000ba4a) clock_nsta_pane

0x626f,	// (0x0000ba6d) indicator_nsta_pane

0xd8e7,	// (0x000130e5) bg_popup_sub_pane_cp2_ParamLimits

0xd8fb,	// (0x000130f9) find_pane_cp2_ParamLimits

0xd8fb,	// (0x000130f9) find_pane_cp2

0xd90d,	// (0x0001310b) grid_toobar_pane_ParamLimits

0xda87,	// (0x00013285) list_form_gen_pane_vc_ParamLimits

0xda87,	// (0x00013285) list_form_gen_pane_vc

0xda9d,	// (0x0001329b) scroll_pane_cp8_vc_ParamLimits

0xda9d,	// (0x0001329b) scroll_pane_cp8_vc

0xdaed,	// (0x000132eb) data_form_wide_pane_vc_ParamLimits

0xdaed,	// (0x000132eb) data_form_wide_pane_vc

0xdaf9,	// (0x000132f7) form_field_data_wide_pane_vc_g1

0xdb01,	// (0x000132ff) form_field_data_wide_pane_vc_t1_ParamLimits

0xdb01,	// (0x000132ff) form_field_data_wide_pane_vc_t1

0xb429,	// (0x00010c27) input_focus_pane_cp6_vc_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_cp6_vc

0x6639,	// (0x0000be37) list_midp_pane_ParamLimits

0xeaf6,	// (0x000142f4) scroll_pane_cp16_ParamLimits

0xeaf6,	// (0x000142f4) scroll_pane_cp16

0xdd69,	// (0x00013567) button_value_adjust_pane_ParamLimits

0xdd69,	// (0x00013567) button_value_adjust_pane

0x6958,	// (0x0000c156) button_value_adjust_pane_cp6_ParamLimits

0x6958,	// (0x0000c156) button_value_adjust_pane_cp6

0x6a62,	// (0x0000c260) settings_code_pane_cp_ParamLimits

0x6a62,	// (0x0000c260) settings_code_pane_cp

0xa54c,	// (0x0000fd4a) cell_touch_pane_g1

0xa54c,	// (0x0000fd4a) cell_touch_pane_g2

0x0001,

0xf738,	// (0x00014f36) cell_touch_pane_g

0x6c13,	// (0x0000c411) cell_touch_pane_cp_ParamLimits

0x6c13,	// (0x0000c411) cell_touch_pane_cp

0x6c2f,	// (0x0000c42d) cell_touch_pane_ParamLimits

0x6c2f,	// (0x0000c42d) cell_touch_pane

0xa54c,	// (0x0000fd4a) scroll_sc2_down_pane_g1

0xa54c,	// (0x0000fd4a) scroll_sc2_up_pane_g1

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp4_vc

0xef22,	// (0x00014720) list_set_graphic_pane_vc_g1_ParamLimits

0xef22,	// (0x00014720) list_set_graphic_pane_vc_g1

0xef2e,	// (0x0001472c) list_set_graphic_pane_vc_g2_ParamLimits

0xef2e,	// (0x0001472c) list_set_graphic_pane_vc_g2

0x0001,

0xfa16,	// (0x00015214) list_set_graphic_pane_vc_g_ParamLimits

0xfa16,	// (0x00015214) list_set_graphic_pane_vc_g

0xef3a,	// (0x00014738) text_primary_small_cp13_vc_ParamLimits

0xef3a,	// (0x00014738) text_primary_small_cp13_vc

0xee53,	// (0x00014651) list_set_graphic_pane_vc_ParamLimits

0xee53,	// (0x00014651) list_set_graphic_pane_vc

0xa633,	// (0x0000fe31) input_focus_pane_cp2_vc

0xa54c,	// (0x0000fd4a) setting_code_pane_vc_g1

0xef52,	// (0x00014750) setting_code_pane_vc_t1

0xef60,	// (0x0001475e) set_text_pane_vc_t1_ParamLimits

0xef60,	// (0x0001475e) set_text_pane_vc_t1

0xa633,	// (0x0000fe31) input_focus_pane_cp1_vc

0xef7b,	// (0x00014779) list_set_text_pane_vc

0xa54c,	// (0x0000fd4a) setting_text_pane_vc_g1

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp2_vc

0xef85,	// (0x00014783) setting_slider_graphic_pane_vc_g1

0xef8d,	// (0x0001478b) setting_slider_graphic_pane_vc_t1

0xef9b,	// (0x00014799) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1b,	// (0x00015219) setting_slider_graphic_pane_vc_t

0xefa9,	// (0x000147a7) slider_set_pane_cp_vc

0xefb1,	// (0x000147af) slider_set_pane_vc_g1

0xefba,	// (0x000147b8) slider_set_pane_vc_g2

0x0006,

0xfa20,	// (0x0001521e) slider_set_pane_vc_g

0xb54f,	// (0x00010d4d) set_opt_bg_pane_g1_copy1

0xb557,	// (0x00010d55) set_opt_bg_pane_g2_copy1

0xefe6,	// (0x000147e4) set_opt_bg_pane_g3_copy1

0xb567,	// (0x00010d65) set_opt_bg_pane_g4_copy1

0xb56f,	// (0x00010d6d) set_opt_bg_pane_g5_copy1

0xb577,	// (0x00010d75) set_opt_bg_pane_g6_copy1

0xefee,	// (0x000147ec) set_opt_bg_pane_g7_copy1

0xeff6,	// (0x000147f4) set_opt_bg_pane_g8_copy1

0xeffe,	// (0x000147fc) set_opt_bg_pane_g9_copy1

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp_vc

0xf006,	// (0x00014804) setting_slider_pane_vc_t1

0xef8d,	// (0x0001478b) setting_slider_pane_vc_t2

0xef9b,	// (0x00014799) setting_slider_pane_vc_t3

0x0002,

0xfa2f,	// (0x0001522d) setting_slider_pane_vc_t

0xefa9,	// (0x000147a7) slider_set_pane_vc

0x95a1,	// (0x0000ed9f) volume_set_pane_vc_g1

0x9888,	// (0x0000f086) volume_set_pane_vc_g2

0x9891,	// (0x0000f08f) volume_set_pane_vc_g3

0x989a,	// (0x0000f098) volume_set_pane_vc_g4

0x98a3,	// (0x0000f0a1) volume_set_pane_vc_g5

0x98ac,	// (0x0000f0aa) volume_set_pane_vc_g6

0x98b5,	// (0x0000f0b3) volume_set_pane_vc_g7

0x98be,	// (0x0000f0bc) volume_set_pane_vc_g8

0x98c7,	// (0x0000f0c5) volume_set_pane_vc_g9

0x98d0,	// (0x0000f0ce) volume_set_pane_vc_g10

0x0009,

0xfa36,	// (0x00015234) volume_set_pane_vc_g

0xf015,	// (0x00014813) volume_set_pane_vc

0xf01d,	// (0x0001481b) button_value_adjust_pane_cp1_vc

0xf027,	// (0x00014825) list_highlight_pane_cp2_vc

0xf030,	// (0x0001482e) list_set_pane_vc_ParamLimits

0xf030,	// (0x0001482e) list_set_pane_vc

0xf082,	// (0x00014880) main_pane_set_vc_t1_ParamLimits

0xf082,	// (0x00014880) main_pane_set_vc_t1

0xf0a9,	// (0x000148a7) main_pane_set_vc_t2_ParamLimits

0xf0a9,	// (0x000148a7) main_pane_set_vc_t2

0xf0bb,	// (0x000148b9) main_pane_set_vc_t3_ParamLimits

0xf0bb,	// (0x000148b9) main_pane_set_vc_t3

0xf0cd,	// (0x000148cb) main_pane_set_vc_t4_ParamLimits

0xf0cd,	// (0x000148cb) main_pane_set_vc_t4

0x0003,

0xfa4b,	// (0x00015249) main_pane_set_vc_t_ParamLimits

0xfa4b,	// (0x00015249) main_pane_set_vc_t

0xf0df,	// (0x000148dd) setting_code_pane_vc_ParamLimits

0xf0df,	// (0x000148dd) setting_code_pane_vc

0xf0ee,	// (0x000148ec) setting_slider_graphic_pane_vc

0xf0ee,	// (0x000148ec) setting_slider_pane_vc

0xf0ee,	// (0x000148ec) setting_text_pane_vc

0xf0ee,	// (0x000148ec) setting_volume_pane_vc

0xf0f6,	// (0x000148f4) scroll_pane_cp121_vc

0xb350,	// (0x00010b4e) set_content_pane_vc

0xf2a9,	// (0x00014aa7) button_value_adjust_pane_g1

0xf2b2,	// (0x00014ab0) button_value_adjust_pane_g2

0x0001,

0xfa9e,	// (0x0001529c) button_value_adjust_pane_g

0xf2bb,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf2bb,	// (0x00014ab9) form_field_slider_wide_pane_vc_t1

0xf2d1,	// (0x00014acf) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf2d1,	// (0x00014acf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa3,	// (0x000152a1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa3,	// (0x000152a1) form_field_slider_wide_pane_vc_t

0xa9d8,	// (0x000101d6) input_focus_pane_cp10_vc_ParamLimits

0xa9d8,	// (0x000101d6) input_focus_pane_cp10_vc

0xf2e6,	// (0x00014ae4) slider_cont_pane_cp1_vc_ParamLimits

0xf2e6,	// (0x00014ae4) slider_cont_pane_cp1_vc

0xefb1,	// (0x000147af) slider_form_pane_g1_cp2

0xefba,	// (0x000147b8) slider_form_pane_g2_cp2

0xf301,	// (0x00014aff) form_field_slider_pane_vc_t3

0xf30f,	// (0x00014b0d) form_field_slider_pane_vc_t4

0xf31d,	// (0x00014b1b) slider_form_pane_vc_ParamLimits

0xf31d,	// (0x00014b1b) slider_form_pane_vc

0xf32a,	// (0x00014b28) form_field_slider_pane_vc_t1_ParamLimits

0xf32a,	// (0x00014b28) form_field_slider_pane_vc_t1

0xf340,	// (0x00014b3e) form_field_slider_pane_vc_t2_ParamLimits

0xf340,	// (0x00014b3e) form_field_slider_pane_vc_t2

0x0001,

0xfab3,	// (0x000152b1) form_field_slider_pane_vc_t_ParamLimits

0xfab3,	// (0x000152b1) form_field_slider_pane_vc_t

0xa9d8,	// (0x000101d6) input_focus_pane_cp9_vc_ParamLimits

0xa9d8,	// (0x000101d6) input_focus_pane_cp9_vc

0xf352,	// (0x00014b50) slider_cont_pane_vc_ParamLimits

0xf352,	// (0x00014b50) slider_cont_pane_vc

0xf364,	// (0x00014b62) list_form_graphic_pane_cp_vc_ParamLimits

0xf364,	// (0x00014b62) list_form_graphic_pane_cp_vc

0xdaf9,	// (0x000132f7) form_field_popup_wide_pane_vc_g1

0xf390,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf390,	// (0x00014b8e) form_field_popup_wide_pane_vc_t1

0xb429,	// (0x00010c27) input_focus_pane_cp8_vc_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_cp8_vc

0xf3a5,	// (0x00014ba3) list_form_wide_pane_vc_ParamLimits

0xf3a5,	// (0x00014ba3) list_form_wide_pane_vc

0xf3b1,	// (0x00014baf) list_form_graphic_pane_vc_g1

0xf3b9,	// (0x00014bb7) list_form_graphic_pane_vc_t1_ParamLimits

0xf3b9,	// (0x00014bb7) list_form_graphic_pane_vc_t1

0xa713,	// (0x0000ff11) list_highlight_pane_cp5_vc_ParamLimits

0xa713,	// (0x0000ff11) list_highlight_pane_cp5_vc

0xf3d5,	// (0x00014bd3) list_form_graphic_pane_vc_ParamLimits

0xf3d5,	// (0x00014bd3) list_form_graphic_pane_vc

0xdaf9,	// (0x000132f7) form_field_popup_pane_vc_g1

0xf3eb,	// (0x00014be9) form_field_popup_pane_vc_t1_ParamLimits

0xf3eb,	// (0x00014be9) form_field_popup_pane_vc_t1

0xb429,	// (0x00010c27) input_focus_pane_cp7_vc_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_cp7_vc

0xf400,	// (0x00014bfe) list_form_pane_vc_ParamLimits

0xf400,	// (0x00014bfe) list_form_pane_vc

0xf40c,	// (0x00014c0a) data_form_pane_vc_t1_ParamLimits

0xf40c,	// (0x00014c0a) data_form_pane_vc_t1

0xb54f,	// (0x00010d4d) input_focus_pane_vc_g1

0xb557,	// (0x00010d55) input_focus_pane_vc_g2

0xb55f,	// (0x00010d5d) input_focus_pane_vc_g3

0xb567,	// (0x00010d65) input_focus_pane_vc_g4

0xb56f,	// (0x00010d6d) input_focus_pane_vc_g5

0xb577,	// (0x00010d75) input_focus_pane_vc_g6

0xb57f,	// (0x00010d7d) input_focus_pane_vc_g7

0xb587,	// (0x00010d85) input_focus_pane_vc_g8

0xb58f,	// (0x00010d8d) input_focus_pane_vc_g9

0xa54c,	// (0x0000fd4a) input_focus_pane_vc_g10

0x0009,

0xf6c1,	// (0x00014ebf) input_focus_pane_vc_g

0xdaed,	// (0x000132eb) data_form_pane_vc_ParamLimits

0xdaed,	// (0x000132eb) data_form_pane_vc

0xdaf9,	// (0x000132f7) form_field_data_pane_vc_g1

0xf427,	// (0x00014c25) form_field_data_pane_vc_t1_ParamLimits

0xf427,	// (0x00014c25) form_field_data_pane_vc_t1

0xb429,	// (0x00010c27) input_focus_pane_vc_ParamLimits

0xb429,	// (0x00010c27) input_focus_pane_vc

0xb359,	// (0x00010b57) button_value_adjust_pane_cp3_vc

0xf43d,	// (0x00014c3b) button_value_adjust_pane_cp5_vc

0xf379,	// (0x00014b77) form_field_data_pane_vc_ParamLimits

0xf379,	// (0x00014b77) form_field_data_pane_vc

0xb381,	// (0x00010b7f) form_field_data_pane_vc_cp2

0xf445,	// (0x00014c43) form_field_data_wide_pane_vc_ParamLimits

0xf445,	// (0x00014c43) form_field_data_wide_pane_vc

0xf45b,	// (0x00014c59) form_field_data_wide_pane_vc_cp2

0xf463,	// (0x00014c61) form_field_popup_pane_vc_ParamLimits

0xf463,	// (0x00014c61) form_field_popup_pane_vc

0xf47a,	// (0x00014c78) form_field_popup_wide_pane_vc_ParamLimits

0xf47a,	// (0x00014c78) form_field_popup_wide_pane_vc

0xf490,	// (0x00014c8e) form_field_slider_pane_vc_ParamLimits

0xf490,	// (0x00014c8e) form_field_slider_pane_vc

0xf4a3,	// (0x00014ca1) form_field_slider_wide_pane_vc_ParamLimits

0xf4a3,	// (0x00014ca1) form_field_slider_wide_pane_vc

0x6c4d,	// (0x0000c44b) grid_touch_1_pane_ParamLimits

0x6c4d,	// (0x0000c44b) grid_touch_1_pane

0x6c61,	// (0x0000c45f) grid_touch_2_pane_ParamLimits

0x6c61,	// (0x0000c45f) grid_touch_2_pane

0xf51b,	// (0x00014d19) touch_pane_g1_ParamLimits

0xf51b,	// (0x00014d19) touch_pane_g1

0xf4b6,	// (0x00014cb4) cell_app_pane_cp_wide_ParamLimits

0xf4b6,	// (0x00014cb4) cell_app_pane_cp_wide

0xf4c6,	// (0x00014cc4) grid_popup_fast_wide_pane_ParamLimits

0xf4c6,	// (0x00014cc4) grid_popup_fast_wide_pane

0xf4da,	// (0x00014cd8) scroll_pane_cp19_ParamLimits

0xf4da,	// (0x00014cd8) scroll_pane_cp19

0xa633,	// (0x0000fe31) bg_popup_window_pane_cp20

0xf4ee,	// (0x00014cec) listscroll_popup_fast_wide_pane

0xb743,	// (0x00010f41) grid_indicator_nsta_pane

0xf4f6,	// (0x00014cf4) clock_nsta_pane_g1

0xf4ff,	// (0x00014cfd) clock_nsta_pane_t1

0x6c8b,	// (0x0000c489) cell_indicator_nsta_pane_ParamLimits

0x6c8b,	// (0x0000c489) cell_indicator_nsta_pane

0xf51b,	// (0x00014d19) cell_indicator_nsta_pane_g1

0x6ca8,	// (0x0000c4a6) cell_indicator_nsta_pane_g2

0x0001,

0xfabd,	// (0x000152bb) cell_indicator_nsta_pane_g

0xf529,	// (0x00014d27) clock_nsta_pane_cp

0xf531,	// (0x00014d2f) indicator_nsta_pane_cp

0xf53a,	// (0x00014d38) nsta_clock_indic_pane_g1

0xa7f3,	// (0x0000fff1) grid_indicator_pane

0xbb1c,	// (0x0001131a) scroll_pane_cp29

0x9118,	// (0x0000e916) indicator_nsta_pane_cp2_ParamLimits

0x9118,	// (0x0000e916) indicator_nsta_pane_cp2

0xa713,	// (0x0000ff11) main_apps_wheel_pane

0xdc1c,	// (0x0001341a) form_midp_field_text_pane_ParamLimits

0xdd49,	// (0x00013547) scroll_bar_cp050_ParamLimits

0xf572,	// (0x00014d70) cell_indicator_pane_ParamLimits

0xf572,	// (0x00014d70) cell_indicator_pane

0xf588,	// (0x00014d86) cell_indicator_pane_g1

0x6cbd,	// (0x0000c4bb) grid_wheel_folder_pane_ParamLimits

0x6cbd,	// (0x0000c4bb) grid_wheel_folder_pane

0x6ccb,	// (0x0000c4c9) list_wheel_apps_pane_ParamLimits

0x6ccb,	// (0x0000c4c9) list_wheel_apps_pane

0x6cd7,	// (0x0000c4d5) main_apps_wheel_pane_g1_ParamLimits

0x6cd7,	// (0x0000c4d5) main_apps_wheel_pane_g1

0x6ce3,	// (0x0000c4e1) main_apps_wheel_pane_g2_ParamLimits

0x6ce3,	// (0x0000c4e1) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x000152ca) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x000152ca) main_apps_wheel_pane_g

0x6cef,	// (0x0000c4ed) main_apps_wheel_pane_t1_ParamLimits

0x6cef,	// (0x0000c4ed) main_apps_wheel_pane_t1

0x6d01,	// (0x0000c4ff) list_wheel_apps_pane_g1

0x6d09,	// (0x0000c507) list_wheel_apps_pane_g2

0x6d11,	// (0x0000c50f) list_wheel_apps_pane_g3

0x6d19,	// (0x0000c517) list_wheel_apps_pane_g4

0x6d21,	// (0x0000c51f) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x000152cf) list_wheel_apps_pane_g

0xa713,	// (0x0000ff11) navi_icon_text_pane

0x6158,	// (0x0000b956) aid_fill_nsta

0x0028,	// (0x00005826) navi_icon_text_pane_g1

0x0034,	// (0x00005832) navi_icon_text_pane_t1

0xbf31,	// (0x0001172f) list_set_graphic_pane_t1_ParamLimits

0xbf31,	// (0x0001172f) list_set_graphic_pane_t1

0xe3fe,	// (0x00013bfc) popup_midp_note_alarm_window_t6_ParamLimits

0xe3fe,	// (0x00013bfc) popup_midp_note_alarm_window_t6

0xe410,	// (0x00013c0e) popup_midp_note_alarm_window_t7_ParamLimits

0xe410,	// (0x00013c0e) popup_midp_note_alarm_window_t7

0xe422,	// (0x00013c20) popup_midp_note_alarm_window_t8_ParamLimits

0xe422,	// (0x00013c20) popup_midp_note_alarm_window_t8

0xe434,	// (0x00013c32) popup_midp_note_alarm_window_t9_ParamLimits

0xe434,	// (0x00013c32) popup_midp_note_alarm_window_t9

0xe446,	// (0x00013c44) popup_midp_note_alarm_window_t10_ParamLimits

0xe446,	// (0x00013c44) popup_midp_note_alarm_window_t10

0xe458,	// (0x00013c56) popup_midp_note_alarm_window_t11_ParamLimits

0xe458,	// (0x00013c56) popup_midp_note_alarm_window_t11

0xe46a,	// (0x00013c68) scroll_pane_cp17_ParamLimits

0xe46a,	// (0x00013c68) scroll_pane_cp17

0x95a1,	// (0x0000ed9f) volume_small_pane_cp_g1

0x98d9,	// (0x0000f0d7) volume_small_pane_cp_g2

0x98e2,	// (0x0000f0e0) volume_small_pane_cp_g3

0x98eb,	// (0x0000f0e9) volume_small_pane_cp_g4

0x95ce,	// (0x0000edcc) volume_small_pane_cp_g5

0x98f4,	// (0x0000f0f2) volume_small_pane_cp_g6

0x98fd,	// (0x0000f0fb) volume_small_pane_cp_g7

0x9906,	// (0x0000f104) volume_small_pane_cp_g8

0x990f,	// (0x0000f10d) volume_small_pane_cp_g9

0x9918,	// (0x0000f116) volume_small_pane_cp_g10

0xc285,	// (0x00011a83) midp_ticker_pane_g1_ParamLimits

0xc291,	// (0x00011a8f) midp_ticker_pane_g2_ParamLimits

0xf789,	// (0x00014f87) midp_ticker_pane_g_ParamLimits

0xc29d,	// (0x00011a9b) midp_ticker_pane_t1_ParamLimits

0x616e,	// (0x0000b96c) aid_fill_nsta_2

0xdd35,	// (0x00013533) list_form2_midp_pane

0xeb46,	// (0x00014344) midp_editing_number_pane_ParamLimits

0xeb52,	// (0x00014350) midp_ticker_pane_ParamLimits

0x008e,	// (0x0000588c) form2_midp_field_pane

0x00b2,	// (0x000058b0) scroll_pane_cp51

0x00d2,	// (0x000058d0) form2_midp_button_pane_ParamLimits

0x00d2,	// (0x000058d0) form2_midp_button_pane

0x00e4,	// (0x000058e2) form2_midp_content_pane_ParamLimits

0x00e4,	// (0x000058e2) form2_midp_content_pane

0x00fe,	// (0x000058fc) form2_midp_field_choice_group_pane

0x0106,	// (0x00005904) form2_midp_field_pane_g1

0x010e,	// (0x0000590c) form2_midp_field_pane_g2

0x0116,	// (0x00005914) form2_midp_field_pane_g3

0x011e,	// (0x0000591c) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000152f4) form2_midp_field_pane_g

0x0126,	// (0x00005924) form2_midp_gauge_slider_pane

0x012e,	// (0x0000592c) form2_midp_gauge_wait_pane

0x0136,	// (0x00005934) form2_midp_image_pane_ParamLimits

0x0136,	// (0x00005934) form2_midp_image_pane

0x0151,	// (0x0000594f) form2_midp_label_pane_ParamLimits

0x0151,	// (0x0000594f) form2_midp_label_pane

0x6d56,	// (0x0000c554) form2_midp_label_pane_cp_ParamLimits

0x6d56,	// (0x0000c554) form2_midp_label_pane_cp

0x0189,	// (0x00005987) form2_midp_string_pane_ParamLimits

0x0189,	// (0x00005987) form2_midp_string_pane

0x6d75,	// (0x0000c573) form2_midp_text_pane_ParamLimits

0x6d75,	// (0x0000c573) form2_midp_text_pane

0x01b4,	// (0x000059b2) form2_midp_time_pane

0x01c4,	// (0x000059c2) input_focus_pane_cp51_ParamLimits

0x01c4,	// (0x000059c2) input_focus_pane_cp51

0x01dc,	// (0x000059da) form2_midp_label_pane_t1_ParamLimits

0x01dc,	// (0x000059da) form2_midp_label_pane_t1

0xb597,	// (0x00010d95) form2_mdip_text_pane_t1_ParamLimits

0xb597,	// (0x00010d95) form2_mdip_text_pane_t1

0x0238,	// (0x00005a36) form2_midp_time_pane_t1

0x0253,	// (0x00005a51) form2_midp_gauge_slider_pane_t1

0x6d8e,	// (0x0000c58c) form2_midp_gauge_slider_pane_t2

0x6da0,	// (0x0000c59e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000152fd) form2_midp_gauge_slider_pane_t

0x0289,	// (0x00005a87) form2_midp_slider_pane

0x0295,	// (0x00005a93) form2_midp_gauge_wait_pane_t1

0x02a3,	// (0x00005aa1) form2_midp_wait_pane_ParamLimits

0x02a3,	// (0x00005aa1) form2_midp_wait_pane

0x65a0,	// (0x0000bd9e) list_single_2graphic_pane_cp4_ParamLimits

0x65a0,	// (0x0000bd9e) list_single_2graphic_pane_cp4

0x6db2,	// (0x0000c5b0) list_single_midp_graphic_pane_cp_ParamLimits

0x6db2,	// (0x0000c5b0) list_single_midp_graphic_pane_cp

0xa633,	// (0x0000fe31) list_highlight_pane_cp20

0x02ce,	// (0x00005acc) list_single_2graphic_pane_g1_cp4

0xebd2,	// (0x000143d0) list_single_2graphic_pane_g2_cp4

0x02d6,	// (0x00005ad4) list_single_2graphic_pane_t1_cp4

0xa713,	// (0x0000ff11) list_highlight_pane_cp21

0x02e5,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp

0x02f4,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp

0x6dd0,	// (0x0000c5ce) form2_mdip_string_pane_t1_ParamLimits

0x6dd0,	// (0x0000c5ce) form2_mdip_string_pane_t1

0xa633,	// (0x0000fe31) bg_wml_button_pane_cp2

0xa54c,	// (0x0000fd4a) form2_midp_image_pane_g1

0xb13e,	// (0x0001093c) list_double_large_graphic_pane_g5_ParamLimits

0xb13e,	// (0x0001093c) list_double_large_graphic_pane_g5

0x599a,	// (0x0000b198) midp_form_pane_ParamLimits

0xa713,	// (0x0000ff11) main_apps_wheel_pane_ParamLimits

0x5efa,	// (0x0000b6f8) popup_preview_window_ParamLimits

0x5efa,	// (0x0000b6f8) popup_preview_window

0xd7a1,	// (0x00012f9f) popup_touch_info_window_ParamLimits

0xd7a1,	// (0x00012f9f) popup_touch_info_window

0xd7bf,	// (0x00012fbd) popup_touch_menu_window_ParamLimits

0xd7bf,	// (0x00012fbd) popup_touch_menu_window

0xa542,	// (0x0000fd40) bg_popup_sub_pane_cp6

0x0381,	// (0x00005b7f) list_touch_menu_pane

0x0389,	// (0x00005b87) list_single_touch_menu_pane_ParamLimits

0x0389,	// (0x00005b87) list_single_touch_menu_pane

0x03a0,	// (0x00005b9e) list_single_touch_menu_pane_t1

0xa713,	// (0x0000ff11) bg_popup_sub_pane_cp7_ParamLimits

0xa713,	// (0x0000ff11) bg_popup_sub_pane_cp7

0x03ae,	// (0x00005bac) heading_sub_pane

0x03b6,	// (0x00005bb4) list_touch_info_pane_ParamLimits

0x03b6,	// (0x00005bb4) list_touch_info_pane

0x03c5,	// (0x00005bc3) list_single_touch_info_pane_ParamLimits

0x03c5,	// (0x00005bc3) list_single_touch_info_pane

0x03d6,	// (0x00005bd4) list_single_touch_info_pane_t1

0x03e4,	// (0x00005be2) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001530b) list_single_touch_info_pane_t

0xc1b6,	// (0x000119b4) bg_popup_heading_pane_cp

0x03f2,	// (0x00005bf0) heading_sub_pane_t1

0xdab3,	// (0x000132b1) bg_popup_preview_window_pane_cp_ParamLimits

0xdab3,	// (0x000132b1) bg_popup_preview_window_pane_cp

0x03ae,	// (0x00005bac) heading_preview_pane

0x03b6,	// (0x00005bb4) list_preview_pane_ParamLimits

0x03b6,	// (0x00005bb4) list_preview_pane

0x0400,	// (0x00005bfe) popup_preview_window_g1

0x03c5,	// (0x00005bc3) list_single_preview_pane_ParamLimits

0x03c5,	// (0x00005bc3) list_single_preview_pane

0x0408,	// (0x00005c06) list_single_preview_pane_g1

0x0410,	// (0x00005c0e) list_single_preview_pane_t1

0x03d6,	// (0x00005bd4) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00015310) list_single_preview_pane_t

0x041e,	// (0x00005c1c) bg_popup_heading_pane_cp2_ParamLimits

0x041e,	// (0x00005c1c) bg_popup_heading_pane_cp2

0x0434,	// (0x00005c32) heading_preview_pane_g1

0x043c,	// (0x00005c3a) heading_preview_pane_t1_ParamLimits

0x043c,	// (0x00005c3a) heading_preview_pane_t1

0xa816,	// (0x00010014) soft_indicator_pane_t1_ParamLimits

0xae7f,	// (0x0001067d) scroll_pane_ParamLimits

0xba18,	// (0x00011216) scroll_sc2_left_pane

0xba21,	// (0x0001121f) scroll_sc2_right_pane

0xba40,	// (0x0001123e) scroll_bg_pane_g1_ParamLimits

0xba55,	// (0x00011253) scroll_bg_pane_g2_ParamLimits

0xba6d,	// (0x0001126b) scroll_bg_pane_g3_ParamLimits

0xf718,	// (0x00014f16) scroll_bg_pane_g_ParamLimits

0xba40,	// (0x0001123e) scroll_handle_pane_g1_ParamLimits

0xba8f,	// (0x0001128d) scroll_handle_pane_g2_ParamLimits

0xba6d,	// (0x0001126b) scroll_handle_pane_g3_ParamLimits

0xf71f,	// (0x00014f1d) scroll_handle_pane_g_ParamLimits

0xd6f9,	// (0x00012ef7) popup_choice_list_window_ParamLimits

0xd6f9,	// (0x00012ef7) popup_choice_list_window

0xd8f3,	// (0x000130f1) choice_list_pane

0xd969,	// (0x00013167) cell_toolbar_pane_t1

0xd991,	// (0x0001318f) toolbar_button_pane_ParamLimits

0xe830,	// (0x0001402e) ai_gene_pane_1_t2_ParamLimits

0xe830,	// (0x0001402e) ai_gene_pane_1_t2

0x0001,

0xf930,	// (0x0001512e) ai_gene_pane_1_t_ParamLimits

0xf930,	// (0x0001512e) ai_gene_pane_1_t

0x0459,	// (0x00005c57) scroll_sc2_left_pane_g1

0x0459,	// (0x00005c57) scroll_sc2_right_pane_g1

0xd685,	// (0x00012e83) bg_popup_sub_pane_cp10

0x0463,	// (0x00005c61) list_choice_list_pane

0x047a,	// (0x00005c78) list_single_choice_list_pane_ParamLimits

0x047a,	// (0x00005c78) list_single_choice_list_pane

0x048e,	// (0x00005c8c) list_single_choice_list_pane_g1

0xb714,	// (0x00010f12) list_single_choice_list_pane_t1_ParamLimits

0xb714,	// (0x00010f12) list_single_choice_list_pane_t1

0x0496,	// (0x00005c94) choice_list_pane_g1

0x049e,	// (0x00005c9c) choice_list_pane_t1

0xa542,	// (0x0000fd40) input_focus_pane_cp11

0xb8f8,	// (0x000110f6) title_pane_stacon_g2_ParamLimits

0xb8f8,	// (0x000110f6) title_pane_stacon_g2

0x0002,

0xf6fe,	// (0x00014efc) title_pane_stacon_g_ParamLimits

0xf6fe,	// (0x00014efc) title_pane_stacon_g

0xc1b6,	// (0x000119b4) cursor_press_pane

0x5c61,	// (0x0000b45f) popup_fep_hwr_window_ParamLimits

0x5c61,	// (0x0000b45f) popup_fep_hwr_window

0xd74b,	// (0x00012f49) popup_fep_vkb_window_ParamLimits

0xd74b,	// (0x00012f49) popup_fep_vkb_window

0x04ac,	// (0x00005caa) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00015339) fep_vkb_side_pane_g_ParamLimits

0x9956,	// (0x0000f154) fep_hwr_candidate_pane_ParamLimits

0x9956,	// (0x0000f154) fep_hwr_candidate_pane

0x997e,	// (0x0000f17c) fep_hwr_side_pane_ParamLimits

0x997e,	// (0x0000f17c) fep_hwr_side_pane

0x999e,	// (0x0000f19c) fep_hwr_top_pane_ParamLimits

0x999e,	// (0x0000f19c) fep_hwr_top_pane

0x99b6,	// (0x0000f1b4) fep_hwr_write_pane_ParamLimits

0x99b6,	// (0x0000f1b4) fep_hwr_write_pane

0xfb3b,	// (0x00015339) fep_vkb_side_pane_g

0x0595,	// (0x00005d93) fep_hwr_top_pane_g1

0x0583,	// (0x00005d81) fep_hwr_top_pane_g2

0x99f0,	// (0x0000f1ee) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00015315) fep_hwr_top_pane_g

0x9a05,	// (0x0000f203) fep_hwr_top_text_pane

0xbbe4,	// (0x000113e2) fep_hwr_top_text_pane_g1

0x0694,	// (0x00005e92) fep_hwr_top_text_pane_t1

0x9af3,	// (0x0000f2f1) fep_hwr_candidate_pane_g1

0x0912,	// (0x00006110) fep_vkb_keypad_pane_g3_ParamLimits

0x0912,	// (0x00006110) fep_vkb_keypad_pane_g3

0x0934,	// (0x00006132) fep_vkb_keypad_pane_g4_ParamLimits

0x0934,	// (0x00006132) fep_vkb_keypad_pane_g4

0x09a3,	// (0x000061a1) fep_vkb_bottom_pane_g2_ParamLimits

0x09a3,	// (0x000061a1) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00015340) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00015340) fep_vkb_bottom_pane_g

0x0459,	// (0x00005c57) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001534a) cell_vkb_side_pane_g

0x0a2e,	// (0x0000622c) cell_vkb_side_pane_t1

0x0a3c,	// (0x0000623a) cell_vkb_side_pane_t1_copy1

0x0459,	// (0x00005c57) bg_fep_vkb_candidate_pane_g2

0x0b60,	// (0x0000635e) cell_vkb_candidate_pane_ParamLimits

0x0710,	// (0x00005f0e) aid_size_cell_vkb_ParamLimits

0x0710,	// (0x00005f0e) aid_size_cell_vkb

0x0b60,	// (0x0000635e) cell_vkb_candidate_pane

0x9b1a,	// (0x0000f318) bg_popup_fep_shadow_pane_g1

0x0786,	// (0x00005f84) fep_vkb_bottom_pane_ParamLimits

0x0786,	// (0x00005f84) fep_vkb_bottom_pane

0x07c3,	// (0x00005fc1) fep_vkb_candidate_pane_ParamLimits

0x07c3,	// (0x00005fc1) fep_vkb_candidate_pane

0x07df,	// (0x00005fdd) fep_vkb_keypad_pane_ParamLimits

0x07df,	// (0x00005fdd) fep_vkb_keypad_pane

0x0813,	// (0x00006011) fep_vkb_side_pane_ParamLimits

0x0813,	// (0x00006011) fep_vkb_side_pane

0x083f,	// (0x0000603d) fep_vkb_top_pane_ParamLimits

0x083f,	// (0x0000603d) fep_vkb_top_pane

0x086b,	// (0x00006069) fep_vkb_top_pane_g1_ParamLimits

0x086b,	// (0x00006069) fep_vkb_top_pane_g1

0x087a,	// (0x00006078) fep_vkb_top_pane_g2_ParamLimits

0x087a,	// (0x00006078) fep_vkb_top_pane_g2

0x0889,	// (0x00006087) fep_vkb_top_pane_g3_ParamLimits

0x0889,	// (0x00006087) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00015330) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00015330) fep_vkb_top_pane_g

0x08a7,	// (0x000060a5) fep_vkb_top_text_pane_ParamLimits

0x08a7,	// (0x000060a5) fep_vkb_top_text_pane

0x6e97,	// (0x0000c695) fep_vkb_side_pane_g1_ParamLimits

0x6e97,	// (0x0000c695) fep_vkb_side_pane_g1

0x0901,	// (0x000060ff) grid_vkb_side_pane_ParamLimits

0x0901,	// (0x000060ff) grid_vkb_side_pane

0x9b22,	// (0x0000f320) bg_popup_fep_shadow_pane_g2

0x9b2b,	// (0x0000f329) bg_popup_fep_shadow_pane_g3

0x9b33,	// (0x0000f331) bg_popup_fep_shadow_pane_g4

0x9b3c,	// (0x0000f33a) bg_popup_fep_shadow_pane_g5

0x9b44,	// (0x0000f342) bg_popup_fep_shadow_pane_g6

0x9b4c,	// (0x0000f34a) bg_popup_fep_shadow_pane_g7

0xb567,	// (0x00010d65) bg_popup_fep_shadow_pane_g8

0x0952,	// (0x00006150) grid_vkb_keypad_number_pane_ParamLimits

0x0952,	// (0x00006150) grid_vkb_keypad_number_pane

0x0962,	// (0x00006160) grid_vkb_keypad_pane_ParamLimits

0x0962,	// (0x00006160) grid_vkb_keypad_pane

0x0988,	// (0x00006186) fep_vkb_bottom_pane_g1_ParamLimits

0x0988,	// (0x00006186) fep_vkb_bottom_pane_g1

0x09b1,	// (0x000061af) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x09b1,	// (0x000061af) grid_vkb_keypad_bottom_left_pane

0x09c6,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x09c6,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane

0x09db,	// (0x000061d9) fep_vkb_top_text_pane_g1

0x6ede,	// (0x0000c6dc) fep_vkb_top_text_pane_t1

0x6ef0,	// (0x0000c6ee) cell_vkb_side_pane_ParamLimits

0x6ef0,	// (0x0000c6ee) cell_vkb_side_pane

0x0459,	// (0x00005c57) cell_vkb_side_pane_g1

0x0a4a,	// (0x00006248) cell_vkb_keypad_pane_ParamLimits

0x0a4a,	// (0x00006248) cell_vkb_keypad_pane

0x0ab7,	// (0x000062b5) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001535d) bg_popup_fep_shadow_pane_g

0x9b5c,	// (0x0000f35a) cell_hwr_side_pane_g1

0x9b5c,	// (0x0000f35a) cell_hwr_side_pane_g2

0x0ac1,	// (0x000062bf) cell_vkb_keypad_pane_t1

0x6f06,	// (0x0000c704) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x6f06,	// (0x0000c704) cell_vkb_keypad_bottom_left_pane

0x6f1b,	// (0x0000c719) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x6f1b,	// (0x0000c719) cell_vkb_keypad_bottom_right_pane

0x0459,	// (0x00005c57) cell_vkb_keypad_bottom_left_pane_g1

0x0459,	// (0x00005c57) cell_vkb_keypad_bottom_right_pane_g1

0x0b25,	// (0x00006323) cell_vkb_keypad_number_pane_ParamLimits

0x0b25,	// (0x00006323) cell_vkb_keypad_number_pane

0x0b44,	// (0x00006342) cell_vkb_keypad_number_pane_g1

0x0b4e,	// (0x0000634c) cell_vkb_keypad_number_pane_g2

0x0b57,	// (0x00006355) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001534f) cell_vkb_keypad_number_pane_g

0x0ac1,	// (0x000062bf) cell_vkb_keypad_number_pane_t1

0x0b79,	// (0x00006377) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00015370) cell_hwr_side_pane_g

0x0bd4,	// (0x000063d2) cell_hwr_side_pane_t1

0x9b66,	// (0x0000f364) cell_hwr_side_pane_t1_copy1

0x9b74,	// (0x0000f372) cell_hwr_candidate_pane_g1

0x9ba3,	// (0x0000f3a1) cell_hwr_candidate_pane_t1

0x0459,	// (0x00005c57) cell_vkb_candidate_pane_g2

0x0c85,	// (0x00006483) cell_vkb_candidate_pane_t1

0x9921,	// (0x0000f11f) bg_popup_fep_shadow_pane_ParamLimits

0x9921,	// (0x0000f11f) bg_popup_fep_shadow_pane

0x99d0,	// (0x0000f1ce) bg_fep_hwr_top_pane_g4

0x05d1,	// (0x00005dcf) bg_hwr_side_pane_g1_ParamLimits

0x05d1,	// (0x00005dcf) bg_hwr_side_pane_g1

0xd27e,	// (0x00012a7c) cell_hwr_side_pane_ParamLimits

0xd27e,	// (0x00012a7c) cell_hwr_side_pane

0x9a7c,	// (0x0000f27a) fep_hwr_write_pane_g1_ParamLimits

0x9a7c,	// (0x0000f27a) fep_hwr_write_pane_g1

0x9a89,	// (0x0000f287) fep_hwr_write_pane_g2_ParamLimits

0x9a89,	// (0x0000f287) fep_hwr_write_pane_g2

0x9a96,	// (0x0000f294) fep_hwr_write_pane_g3_ParamLimits

0x9a96,	// (0x0000f294) fep_hwr_write_pane_g3

0xd29e,	// (0x00012a9c) fep_hwr_write_pane_g4_ParamLimits

0xd29e,	// (0x00012a9c) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001531c) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001531c) fep_hwr_write_pane_g

0x99d0,	// (0x0000f1ce) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x99d0,	// (0x0000f1ce) bg_fep_hwr_candidate_pane_g2

0x9ab9,	// (0x0000f2b7) cell_hwr_candidate_pane_ParamLimits

0x9ab9,	// (0x0000f2b7) cell_hwr_candidate_pane

0x9af3,	// (0x0000f2f1) fep_hwr_candidate_pane_g1_ParamLimits

0x073e,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x073e,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2

0x0899,	// (0x00006097) fep_vkb_top_pane_g4_ParamLimits

0x0899,	// (0x00006097) fep_vkb_top_pane_g4

0x08df,	// (0x000060dd) fep_vkb_side_pane_g2_ParamLimits

0x08df,	// (0x000060dd) fep_vkb_side_pane_g2

0x54c8,	// (0x0000acc6) list_setting_pane_t4_ParamLimits

0x54c8,	// (0x0000acc6) list_setting_pane_t4

0x554a,	// (0x0000ad48) list_setting_number_pane_t5_ParamLimits

0x554a,	// (0x0000ad48) list_setting_number_pane_t5

0x5850,	// (0x0000b04e) list_double_heading_pane_cp2_ParamLimits

0x5850,	// (0x0000b04e) list_double_heading_pane_cp2

0xc02b,	// (0x00011829) list_double_heading_pane_g1_cp2_ParamLimits

0xc02b,	// (0x00011829) list_double_heading_pane_g1_cp2

0x0c93,	// (0x00006491) list_double_heading_pane_g2_cp2_ParamLimits

0x0c93,	// (0x00006491) list_double_heading_pane_g2_cp2

0x0ca7,	// (0x000064a5) list_double_heading_pane_t1_cp2_ParamLimits

0x0ca7,	// (0x000064a5) list_double_heading_pane_t1_cp2

0x0cbd,	// (0x000064bb) list_double_heading_pane_t2_cp2_ParamLimits

0x0cbd,	// (0x000064bb) list_double_heading_pane_t2_cp2

0xa52c,	// (0x0000fd2a) aid_value_unit2

0x8d48,	// (0x0000e546) popup_preview_fixed_window

0xa9e6,	// (0x000101e4) bg_popup_preview_window_pane_cp02

0x0ccf,	// (0x000064cd) list_preview_fixed_pane

0x0d15,	// (0x00006513) list_empty_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_empty_pane_fp

0x0d15,	// (0x00006513) list_single_cale_day_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_cale_day_pane_fp

0x0d15,	// (0x00006513) list_single_graphic_heading_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_graphic_heading_pane_fp

0x0d15,	// (0x00006513) list_single_graphic_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_graphic_pane_fp

0x0d15,	// (0x00006513) list_single_heading_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_heading_pane_fp

0x0d15,	// (0x00006513) list_single_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_pane_fp

0x0d29,	// (0x00006527) list_single_pane_fp_g1_ParamLimits

0x0d29,	// (0x00006527) list_single_pane_fp_g1

0xb0c1,	// (0x000108bf) list_single_pane_fp_g2_ParamLimits

0xb0c1,	// (0x000108bf) list_single_pane_fp_g2

0x0d35,	// (0x00006533) list_single_pane_fp_g3_ParamLimits

0x0d35,	// (0x00006533) list_single_pane_fp_g3

0x0d49,	// (0x00006547) list_single_pane_fp_g4_ParamLimits

0x0d49,	// (0x00006547) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00015383) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00015383) list_single_pane_fp_g

0x0d55,	// (0x00006553) list_single_pane_fp_t1_ParamLimits

0x0d55,	// (0x00006553) list_single_pane_fp_t1

0x0d6c,	// (0x0000656a) list_single_graphic_pane_fp_g1_ParamLimits

0x0d6c,	// (0x0000656a) list_single_graphic_pane_fp_g1

0x0d29,	// (0x00006527) list_single_graphic_pane_fp_g2_ParamLimits

0x0d29,	// (0x00006527) list_single_graphic_pane_fp_g2

0xb0c1,	// (0x000108bf) list_single_graphic_pane_fp_g3_ParamLimits

0xb0c1,	// (0x000108bf) list_single_graphic_pane_fp_g3

0x0d35,	// (0x00006533) list_single_graphic_pane_fp_g4_ParamLimits

0x0d35,	// (0x00006533) list_single_graphic_pane_fp_g4

0x0d49,	// (0x00006547) list_single_graphic_pane_fp_g5_ParamLimits

0x0d49,	// (0x00006547) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001538c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001538c) list_single_graphic_pane_fp_g

0x0d78,	// (0x00006576) list_single_graphic_pane_fp_t1_ParamLimits

0x0d78,	// (0x00006576) list_single_graphic_pane_fp_t1

0x0d6c,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0d6c,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1

0x0d29,	// (0x00006527) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x0d29,	// (0x00006527) list_single_graphic_heading_pane_fp_g2

0xb0c1,	// (0x000108bf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb0c1,	// (0x000108bf) list_single_graphic_heading_pane_fp_g3

0x0d35,	// (0x00006533) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0d35,	// (0x00006533) list_single_graphic_heading_pane_fp_g4

0x0d49,	// (0x00006547) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x0d49,	// (0x00006547) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001538c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001538c) list_single_graphic_heading_pane_fp_g

0x0d8e,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0d8e,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1

0x0da4,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0da4,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00015397) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00015397) list_single_graphic_heading_pane_fp_t

0x0db6,	// (0x000065b4) list_single_cale_day_pane_fp_g1_ParamLimits

0x0db6,	// (0x000065b4) list_single_cale_day_pane_fp_g1

0x0dee,	// (0x000065ec) list_single_cale_day_pane_fp_g2_ParamLimits

0x0dee,	// (0x000065ec) list_single_cale_day_pane_fp_g2

0x0dfa,	// (0x000065f8) list_single_cale_day_pane_fp_g3_ParamLimits

0x0dfa,	// (0x000065f8) list_single_cale_day_pane_fp_g3

0x0e22,	// (0x00006620) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e22,	// (0x00006620) list_single_cale_day_pane_fp_g4

0x0e46,	// (0x00006644) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e46,	// (0x00006644) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001539c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001539c) list_single_cale_day_pane_fp_g

0x0e6a,	// (0x00006668) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e6a,	// (0x00006668) list_single_cale_day_pane_fp_t1

0x0e90,	// (0x0000668e) list_single_cale_day_pane_fp_t2_ParamLimits

0x0e90,	// (0x0000668e) list_single_cale_day_pane_fp_t2

0x0ea9,	// (0x000066a7) list_single_cale_day_pane_fp_t3_ParamLimits

0x0ea9,	// (0x000066a7) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x000153a7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x000153a7) list_single_cale_day_pane_fp_t

0x0d29,	// (0x00006527) list_empty_pane_fp_g1_ParamLimits

0x0d29,	// (0x00006527) list_empty_pane_fp_g1

0x0ec2,	// (0x000066c0) list_empty_pane_fp_t1

0x0ed0,	// (0x000066ce) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x000153ae) list_empty_pane_fp_t

0x0d29,	// (0x00006527) list_single_heading_pane_fp_g1_ParamLimits

0x0d29,	// (0x00006527) list_single_heading_pane_fp_g1

0xb0c1,	// (0x000108bf) list_single_heading_pane_fp_g2_ParamLimits

0xb0c1,	// (0x000108bf) list_single_heading_pane_fp_g2

0x0d35,	// (0x00006533) list_single_heading_pane_fp_g3_ParamLimits

0x0d35,	// (0x00006533) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x000153b3) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x000153b3) list_single_heading_pane_fp_g

0x0ede,	// (0x000066dc) list_single_heading_pane_fp_t1_ParamLimits

0x0ede,	// (0x000066dc) list_single_heading_pane_fp_t1

0x0ef0,	// (0x000066ee) list_single_heading_pane_fp_t2_ParamLimits

0x0ef0,	// (0x000066ee) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x000153ba) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x000153ba) list_single_heading_pane_fp_t

0xb782,	// (0x00010f80) aid_size_cell_fast

0xa921,	// (0x0001011f) soft_indicator_pane_cp1_t1

0xb7bf,	// (0x00010fbd) cell_app_pane_cp2_ParamLimits

0xb7bf,	// (0x00010fbd) cell_app_pane_cp2

0x9943,	// (0x0000f141) fep_hwr_candidate_drop_down_list_pane

0x9b0d,	// (0x0000f30b) fep_hwr_candidate_pane_g3_ParamLimits

0x9b0d,	// (0x0000f30b) fep_hwr_candidate_pane_g3

0x80c9,	// (0x0000d8c7) fep_hwr_candidate_pane_g4_ParamLimits

0x80c9,	// (0x0000d8c7) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00015329) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00015329) fep_hwr_candidate_pane_g

0x07b2,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x07b2,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane

0x0b81,	// (0x0000637f) fep_vkb_candidate_pane_g3

0x0b89,	// (0x00006387) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00015356) fep_vkb_candidate_pane_g

0x9b74,	// (0x0000f372) cell_hwr_candidate_pane_g1_ParamLimits

0x9b82,	// (0x0000f380) cell_hwr_candidate_pane_g3_ParamLimits

0x9b82,	// (0x0000f380) cell_hwr_candidate_pane_g3

0x333e,	// (0x00008b3c) cell_hwr_candidate_pane_g4_ParamLimits

0x333e,	// (0x00008b3c) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00015375) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00015375) cell_hwr_candidate_pane_g

0x0c4f,	// (0x0000644d) cell_vkb_candidate_pane_g3_ParamLimits

0x0c4f,	// (0x0000644d) cell_vkb_candidate_pane_g3

0x0c6a,	// (0x00006468) cell_vkb_candidate_pane_g4_ParamLimits

0x0c6a,	// (0x00006468) cell_vkb_candidate_pane_g4

0x0f06,	// (0x00006704) cell_app_pane_cp2_g1_ParamLimits

0x0f06,	// (0x00006704) cell_app_pane_cp2_g1

0x0f24,	// (0x00006722) cell_app_pane_cp2_g2_ParamLimits

0x0f24,	// (0x00006722) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x000153bf) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x000153bf) cell_app_pane_cp2_g

0x0f30,	// (0x0000672e) cell_app_pane_cp2_t1_ParamLimits

0x0f30,	// (0x0000672e) cell_app_pane_cp2_t1

0xb429,	// (0x00010c27) grid_highlight_pane_cp1_ParamLimits

0xb429,	// (0x00010c27) grid_highlight_pane_cp1

0x9bc0,	// (0x0000f3be) cell_hwr_candidate_pane_cp1_ParamLimits

0x9bc0,	// (0x0000f3be) cell_hwr_candidate_pane_cp1

0x9b74,	// (0x0000f372) fep_hwr_candidate_drop_down_list_pane_g1

0x9bde,	// (0x0000f3dc) fep_hwr_candidate_drop_down_list_pane_g2

0x9beb,	// (0x0000f3e9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x000153c4) fep_hwr_candidate_drop_down_list_pane_g

0x9bf8,	// (0x0000f3f6) fep_hwr_candidate_drop_down_list_scroll_pane

0x9c01,	// (0x0000f3ff) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9c01,	// (0x0000f3ff) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9c0e,	// (0x0000f40c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9c0e,	// (0x0000f40c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9c1b,	// (0x0000f419) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9c1b,	// (0x0000f419) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9c28,	// (0x0000f426) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9c28,	// (0x0000f426) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9c43,	// (0x0000f441) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c43,	// (0x0000f441) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9c5e,	// (0x0000f45c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9c5e,	// (0x0000f45c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9c79,	// (0x0000f477) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9c79,	// (0x0000f477) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9c94,	// (0x0000f492) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9c94,	// (0x0000f492) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000153cb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000153cb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6f36,	// (0x0000c734) cell_vkb_candidate_pane_cp1_ParamLimits

0x6f36,	// (0x0000c734) cell_vkb_candidate_pane_cp1

0x0899,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0899,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1

0x0f60,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x0f60,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2

0x0f6d,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0f6d,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000153dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x000153dc) fep_vkb_candidate_drop_down_list_pane_g

0x101e,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x101e,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane

0x102b,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x102b,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x1038,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1038,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x1044,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1044,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x0bf0,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0bf0,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x0c11,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0c11,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x1050,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1050,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x1071,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1071,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x1092,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1092,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000153e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000153e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4e4d,	// (0x0000a64b) title_pane_g1_ParamLimits

0x4e64,	// (0x0000a662) title_pane_g2_ParamLimits

0xf592,	// (0x00014d90) title_pane_g_ParamLimits

0xbbd4,	// (0x000113d2) aid_call2_pane

0xbbdc,	// (0x000113da) aid_call_pane

0xbbe4,	// (0x000113e2) popup_clock_analogue_window_g1

0xbbe4,	// (0x000113e2) popup_clock_analogue_window_g2

0x9022,	// (0x0000e820) popup_clock_analogue_window_g3

0x902b,	// (0x0000e829) popup_clock_analogue_window_g4

0xa54c,	// (0x0000fd4a) popup_clock_analogue_window_g5

0x0004,

0xf72d,	// (0x00014f2b) popup_clock_analogue_window_g

0x9033,	// (0x0000e831) popup_clock_analogue_window_t1

0x9041,	// (0x0000e83f) clock_digital_number_pane_ParamLimits

0x9041,	// (0x0000e83f) clock_digital_number_pane

0x904d,	// (0x0000e84b) clock_digital_number_pane_cp02_ParamLimits

0x904d,	// (0x0000e84b) clock_digital_number_pane_cp02

0x9059,	// (0x0000e857) clock_digital_number_pane_cp03_ParamLimits

0x9059,	// (0x0000e857) clock_digital_number_pane_cp03

0x9065,	// (0x0000e863) clock_digital_number_pane_cp04_ParamLimits

0x9065,	// (0x0000e863) clock_digital_number_pane_cp04

0x9071,	// (0x0000e86f) clock_digital_separator_pane_ParamLimits

0x9071,	// (0x0000e86f) clock_digital_separator_pane

0x907d,	// (0x0000e87b) popup_clock_digital_window_t1_ParamLimits

0x907d,	// (0x0000e87b) popup_clock_digital_window_t1

0xa54c,	// (0x0000fd4a) clock_digital_number_pane_g1

0xa54c,	// (0x0000fd4a) clock_digital_number_pane_g2

0x0001,

0xf738,	// (0x00014f36) clock_digital_number_pane_g

0xa54c,	// (0x0000fd4a) clock_digital_separator_pane_g1

0xa54c,	// (0x0000fd4a) clock_digital_separator_pane_g2

0x0001,

0xf738,	// (0x00014f36) clock_digital_separator_pane_g

0x6158,	// (0x0000b956) aid_fill_nsta_ParamLimits

0x626f,	// (0x0000ba6d) indicator_nsta_pane_ParamLimits

0xd89c,	// (0x0001309a) popup_clock_analogue_window

0xd89c,	// (0x0001309a) popup_clock_digital_window

0xb743,	// (0x00010f41) grid_indicator_nsta_pane_ParamLimits

0xf50d,	// (0x00014d0b) clock_nsta_pane_t2

0x0001,

0xfab8,	// (0x000152b6) clock_nsta_pane_t

0x8fe6,	// (0x0000e7e4) aid_size_max_handle

0xcf76,	// (0x00012774) aid_size_min_handle

0xc1b6,	// (0x000119b4) editor_scroll_pane

0x10ad,	// (0x000068ab) ex_editor_pane

0xb6f0,	// (0x00010eee) scroll_pane_cp13

0xaeac,	// (0x000106aa) scroll_pane_cp14

0xbc0e,	// (0x0001140c) scroll_pane_cp36

0x585c,	// (0x0000b05a) list_single_graphic_hl_pane_cp2_ParamLimits

0x585c,	// (0x0000b05a) list_single_graphic_hl_pane_cp2

0x6ada,	// (0x0000c2d8) list_single_graphic_hl_pane_ParamLimits

0x6ada,	// (0x0000c2d8) list_single_graphic_hl_pane

0x10b5,	// (0x000068b3) aid_size_min_hl_cp1

0x10be,	// (0x000068bc) list_highlight_pane_cp34_ParamLimits

0x10be,	// (0x000068bc) list_highlight_pane_cp34

0x10cf,	// (0x000068cd) list_single_graphic_hl_pane_g1_ParamLimits

0x10cf,	// (0x000068cd) list_single_graphic_hl_pane_g1

0x6f56,	// (0x0000c754) list_single_graphic_hl_pane_g2_ParamLimits

0x6f56,	// (0x0000c754) list_single_graphic_hl_pane_g2

0x6f56,	// (0x0000c754) list_single_graphic_hl_pane_g3_ParamLimits

0x6f56,	// (0x0000c754) list_single_graphic_hl_pane_g3

0xaec0,	// (0x000106be) list_single_graphic_hl_pane_g4_ParamLimits

0xaec0,	// (0x000106be) list_single_graphic_hl_pane_g4

0xb44f,	// (0x00010c4d) list_single_graphic_hl_pane_g5_ParamLimits

0xb44f,	// (0x00010c4d) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x000153f4) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x000153f4) list_single_graphic_hl_pane_g

0x6f62,	// (0x0000c760) list_single_graphic_hl_pane_t1_ParamLimits

0x6f62,	// (0x0000c760) list_single_graphic_hl_pane_t1

0x10fe,	// (0x000068fc) aid_size_min_hl_cp2

0x1107,	// (0x00006905) list_highlight_pane_cp34_cp2_ParamLimits

0x1107,	// (0x00006905) list_highlight_pane_cp34_cp2

0x10cf,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x10cf,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2

0x1114,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x1114,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2

0x1120,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1120,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2

0xc02b,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc02b,	// (0x00011829) list_single_graphic_hl_pane_g4_cp2

0x0c93,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0c93,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2

0xcfa0,	// (0x0001279e) control_pane_g4_ParamLimits

0xcfa0,	// (0x0001279e) control_pane_g4

0xd685,	// (0x00012e83) bg_popup_sub_pane_cp10_ParamLimits

0x0463,	// (0x00005c61) list_choice_list_pane_ParamLimits

0x0472,	// (0x00005c70) scroll_pane_cp23

0xa9e6,	// (0x000101e4) bg_popup_preview_window_pane_cp02_ParamLimits

0x0ccf,	// (0x000064cd) list_preview_fixed_pane_ParamLimits

0x0ce5,	// (0x000064e3) list_preview_fixed_pane_cp_ParamLimits

0x0ce5,	// (0x000064e3) list_preview_fixed_pane_cp

0x0cf1,	// (0x000064ef) popup_preview_fixed_window_g1_ParamLimits

0x0cf1,	// (0x000064ef) popup_preview_fixed_window_g1

0x0cfd,	// (0x000064fb) popup_preview_fixed_window_g2_ParamLimits

0x0cfd,	// (0x000064fb) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001537c) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001537c) popup_preview_fixed_window_g

0x8f76,	// (0x0000e774) aid_navi_side_left_pane_ParamLimits

0x8f86,	// (0x0000e784) aid_navi_side_right_pane_ParamLimits

0x8f95,	// (0x0000e793) navi_icon_pane_stacon_ParamLimits

0x8fa5,	// (0x0000e7a3) navi_navi_pane_stacon_ParamLimits

0x8f95,	// (0x0000e793) navi_text_pane_stacon_ParamLimits

0xa542,	// (0x0000fd40) main_text_info_pane

0x1142,	// (0x00006940) listscroll_text_info_pane

0x114a,	// (0x00006948) list_text_info_pane_ParamLimits

0x114a,	// (0x00006948) list_text_info_pane

0x1159,	// (0x00006957) scroll_pane_cp24_ParamLimits

0x1159,	// (0x00006957) scroll_pane_cp24

0x6f78,	// (0x0000c776) list_text_info_pane_t1_ParamLimits

0x6f78,	// (0x0000c776) list_text_info_pane_t1

0x5be1,	// (0x0000b3df) popup_fast_swap2_window_ParamLimits

0x5be1,	// (0x0000b3df) popup_fast_swap2_window

0x1194,	// (0x00006992) aid_size_cell_fast2

0xa542,	// (0x0000fd40) bg_popup_window_pane_cp17

0xdd61,	// (0x0001355f) heading_pane_cp2

0xac2e,	// (0x0001042c) listscroll_fast2_pane

0x119e,	// (0x0000699c) grid_fast2_pane

0x11a6,	// (0x000069a4) listscroll_fast2_pane_g1

0x11ae,	// (0x000069ac) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x000153ff) listscroll_fast2_pane_g

0xb6f0,	// (0x00010eee) scroll_pane_cp26

0x11b6,	// (0x000069b4) cell_fast2_pane_ParamLimits

0x11b6,	// (0x000069b4) cell_fast2_pane

0x11cc,	// (0x000069ca) cell_fast2_pane_g1

0x11d5,	// (0x000069d3) cell_fast2_pane_g2

0x11de,	// (0x000069dc) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00015404) cell_fast2_pane_g

0xad05,	// (0x00010503) grid_highlight_pane_cp9

0xad1a,	// (0x00010518) main_eswt_pane_ParamLimits

0xad1a,	// (0x00010518) main_eswt_pane

0x116e,	// (0x0000696c) list_single_text_info_pane

0x11e6,	// (0x000069e4) eswt_ctrl_button_pane

0x11e6,	// (0x000069e4) eswt_ctrl_canvas_pane

0x11ee,	// (0x000069ec) eswt_ctrl_combo_pane

0x11e6,	// (0x000069e4) eswt_ctrl_default_pane

0x11e6,	// (0x000069e4) eswt_ctrl_label_pane

0x11f6,	// (0x000069f4) eswt_ctrl_wait_pane

0x11fe,	// (0x000069fc) eswt_shell_pane

0xa542,	// (0x0000fd40) listscroll_eswt_app_pane

0x121a,	// (0x00006a18) popup_eswt_tasktip_window_ParamLimits

0x121a,	// (0x00006a18) popup_eswt_tasktip_window

0xdab3,	// (0x000132b1) bg_popup_window_pane_cp18

0x122b,	// (0x00006a29) eswt_control_pane_g1_ParamLimits

0x122b,	// (0x00006a29) eswt_control_pane_g1

0x1238,	// (0x00006a36) eswt_control_pane_g2_ParamLimits

0x1238,	// (0x00006a36) eswt_control_pane_g2

0x1245,	// (0x00006a43) eswt_control_pane_g3_ParamLimits

0x1245,	// (0x00006a43) eswt_control_pane_g3

0x1252,	// (0x00006a50) eswt_control_pane_g4_ParamLimits

0x1252,	// (0x00006a50) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001540b) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001540b) eswt_control_pane_g

0xb429,	// (0x00010c27) bg_button_pane_ParamLimits

0xb429,	// (0x00010c27) bg_button_pane

0xad1a,	// (0x00010518) common_borders_pane_copy2_ParamLimits

0xad1a,	// (0x00010518) common_borders_pane_copy2

0x125f,	// (0x00006a5d) control_button_pane_g1_ParamLimits

0x125f,	// (0x00006a5d) control_button_pane_g1

0x126b,	// (0x00006a69) control_button_pane_g2_ParamLimits

0x126b,	// (0x00006a69) control_button_pane_g2

0x1277,	// (0x00006a75) control_button_pane_g3_ParamLimits

0x1277,	// (0x00006a75) control_button_pane_g3

0x0002,

0xfc16,	// (0x00015414) control_button_pane_g_ParamLimits

0xfc16,	// (0x00015414) control_button_pane_g

0x128b,	// (0x00006a89) control_button_pane_t1

0x1299,	// (0x00006a97) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001541b) control_button_pane_t

0xd99d,	// (0x0001319b) bg_button_pane_g1

0xd9ad,	// (0x000131ab) bg_button_pane_g2

0xd9a5,	// (0x000131a3) bg_button_pane_g3

0xd9bd,	// (0x000131bb) bg_button_pane_g4

0xd9b5,	// (0x000131b3) bg_button_pane_g5

0xd9c5,	// (0x000131c3) bg_button_pane_g6

0xd9cd,	// (0x000131cb) bg_button_pane_g7

0xd9dd,	// (0x000131db) bg_button_pane_g8

0xd9d5,	// (0x000131d3) bg_button_pane_g9

0x0008,

0xf884,	// (0x00015082) bg_button_pane_g

0x041e,	// (0x00005c1c) common_borders_pane_ParamLimits

0x041e,	// (0x00005c1c) common_borders_pane

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy1_ParamLimits

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy1

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy1_ParamLimits

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy1

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy1_ParamLimits

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy1

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy1_ParamLimits

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy1

0x0459,	// (0x00005c57) bg_eswt_ctrl_canvas_pane_g1

0x041e,	// (0x00005c1c) common_borders_pane_cp2_ParamLimits

0x041e,	// (0x00005c1c) common_borders_pane_cp2

0x041e,	// (0x00005c1c) common_borders_pane_cp3_ParamLimits

0x041e,	// (0x00005c1c) common_borders_pane_cp3

0x12a7,	// (0x00006aa5) separator_horizontal_pane

0xba21,	// (0x0001121f) separator_vertical_pane

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy2_ParamLimits

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy2

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy2_ParamLimits

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy2

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy2_ParamLimits

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy2

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy2_ParamLimits

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy2

0xa542,	// (0x0000fd40) common_borders_pane_cp4

0x12af,	// (0x00006aad) separator_horizontal_pane_g1

0x12b8,	// (0x00006ab6) separator_horizontal_pane_g2

0x12c1,	// (0x00006abf) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00015420) separator_horizontal_pane_g

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy3_ParamLimits

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy3

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy3_ParamLimits

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy3

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy3_ParamLimits

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy3

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy3_ParamLimits

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy3

0xa542,	// (0x0000fd40) common_borders_pane_cp5

0x12ca,	// (0x00006ac8) separator_vertical_pane_g1

0x12d3,	// (0x00006ad1) separator_vertical_pane_g2

0x12dc,	// (0x00006ada) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00015427) separator_vertical_pane_g

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy4_ParamLimits

0x122b,	// (0x00006a29) eswt_control_pane_g1_copy4

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy4_ParamLimits

0x1238,	// (0x00006a36) eswt_control_pane_g2_copy4

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy4_ParamLimits

0x1245,	// (0x00006a43) eswt_control_pane_g3_copy4

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy4_ParamLimits

0x1252,	// (0x00006a50) eswt_control_pane_g4_copy4

0x6f93,	// (0x0000c791) eswt_ctrl_combo_button_pane

0x6f9b,	// (0x0000c799) eswt_ctrl_input_pane

0x6fa3,	// (0x0000c7a1) popup_choice_list_window_cp70

0x6fab,	// (0x0000c7a9) eswt_ctrl_input_pane_t1

0xa542,	// (0x0000fd40) input_focus_pane_cp70

0x041e,	// (0x00005c1c) bg_button_pane_cp70_ParamLimits

0x041e,	// (0x00005c1c) bg_button_pane_cp70

0x6fb9,	// (0x0000c7b7) eswt_ctrl_combo_button_pane_g1

0x1313,	// (0x00006b11) wait_bar_pane_cp70

0xdab3,	// (0x000132b1) bg_popup_window_pane_cp70_ParamLimits

0xdab3,	// (0x000132b1) bg_popup_window_pane_cp70

0x131b,	// (0x00006b19) popup_eswt_tasktip_window_t1

0x1331,	// (0x00006b2f) wait_bar_pane_cp71_ParamLimits

0x1331,	// (0x00006b2f) wait_bar_pane_cp71

0x133d,	// (0x00006b3b) grid_eswt_app_pane

0xba18,	// (0x00011216) scroll_pane_cp70

0x6fc1,	// (0x0000c7bf) cell_eswt_app_pane_ParamLimits

0x6fc1,	// (0x0000c7bf) cell_eswt_app_pane

0x6fe9,	// (0x0000c7e7) cell_eswt_app_pane_g1_ParamLimits

0x6fe9,	// (0x0000c7e7) cell_eswt_app_pane_g1

0x7018,	// (0x0000c816) cell_eswt_app_pane_g2_ParamLimits

0x7018,	// (0x0000c816) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001542e) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001542e) cell_eswt_app_pane_g

0x7041,	// (0x0000c83f) cell_eswt_app_pane_t1_ParamLimits

0x7041,	// (0x0000c83f) cell_eswt_app_pane_t1

0x13f8,	// (0x00006bf6) grid_highlight_pane_cp70_ParamLimits

0x13f8,	// (0x00006bf6) grid_highlight_pane_cp70

0xaec0,	// (0x000106be) set_content_pane_g1

0xc452,	// (0x00011c50) status_small_volume_pane

0x9caf,	// (0x0000f4ad) status_small_volume_pane_g1

0x9cb7,	// (0x0000f4b5) volume_small2_pane

0x9cc0,	// (0x0000f4be) volume_small2_pane_g1

0x9cc9,	// (0x0000f4c7) volume_small2_pane_g2

0x9cd2,	// (0x0000f4d0) volume_small2_pane_g3

0x9cdb,	// (0x0000f4d9) volume_small2_pane_g4

0x9ce4,	// (0x0000f4e2) volume_small2_pane_g5

0x9ced,	// (0x0000f4eb) volume_small2_pane_g6

0x9cf6,	// (0x0000f4f4) volume_small2_pane_g7

0x9cff,	// (0x0000f4fd) volume_small2_pane_g8

0x9d08,	// (0x0000f506) volume_small2_pane_g9

0x9d11,	// (0x0000f50f) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00015433) volume_small2_pane_g

0x09db,	// (0x000061d9) fep_vkb_top_text_pane_g1_ParamLimits

0x6ede,	// (0x0000c6dc) fep_vkb_top_text_pane_t1_ParamLimits

0x0d09,	// (0x00006507) popup_preview_fixed_window_g3_ParamLimits

0x0d09,	// (0x00006507) popup_preview_fixed_window_g3

0x6101,	// (0x0000b8ff) popup_toolbar_trans_pane

0x694c,	// (0x0000c14a) aid_height_set_list_ParamLimits

0xeb0a,	// (0x00014308) aid_size_parent_ParamLimits

0xd685,	// (0x00012e83) list_highlight_pane_cp2_ParamLimits

0xaec0,	// (0x000106be) set_content_pane_g1_ParamLimits

0x6aed,	// (0x0000c2eb) list_single_image_pane_ParamLimits

0x6aed,	// (0x0000c2eb) list_single_image_pane

0x7073,	// (0x0000c871) aid_size_cell_image_ParamLimits

0x7073,	// (0x0000c871) aid_size_cell_image

0x7080,	// (0x0000c87e) grid_single_image_pane_ParamLimits

0x7080,	// (0x0000c87e) grid_single_image_pane

0xaec0,	// (0x000106be) list_single_image_pane_g1_ParamLimits

0xaec0,	// (0x000106be) list_single_image_pane_g1

0xb44f,	// (0x00010c4d) list_single_image_pane_g2_ParamLimits

0xb44f,	// (0x00010c4d) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00015448) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00015448) list_single_image_pane_g

0xec40,	// (0x0001443e) list_single_image_pane_t1_ParamLimits

0xec40,	// (0x0001443e) list_single_image_pane_t1

0x708c,	// (0x0000c88a) cell_image_list_pane_ParamLimits

0x708c,	// (0x0000c88a) cell_image_list_pane

0x70a0,	// (0x0000c89e) cell_image_list_pane_g1

0x70a9,	// (0x0000c8a7) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001544d) cell_image_list_pane_g

0x14ad,	// (0x00006cab) aid_size_cell_tb_trans_pane

0xb429,	// (0x00010c27) bg_tb_trans_pane

0x14bf,	// (0x00006cbd) grid_tb_trans_pane

0xd99d,	// (0x0001319b) bg_tb_trans_pane_g1

0xd9ad,	// (0x000131ab) bg_tb_trans_pane_g2

0xd9a5,	// (0x000131a3) bg_tb_trans_pane_g3

0xd9bd,	// (0x000131bb) bg_tb_trans_pane_g4

0xd9b5,	// (0x000131b3) bg_tb_trans_pane_g5

0xd9dd,	// (0x000131db) bg_tb_trans_pane_g6

0xd9d5,	// (0x000131d3) bg_tb_trans_pane_g7

0xd9c5,	// (0x000131c3) bg_tb_trans_pane_g8

0xd9cd,	// (0x000131cb) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00015452) bg_tb_trans_pane_g

0x14d3,	// (0x00006cd1) cell_toolbar_trans_pane_ParamLimits

0x14d3,	// (0x00006cd1) cell_toolbar_trans_pane

0x0459,	// (0x00005c57) cell_toolbar_trans_pane_g1

0x6d3a,	// (0x0000c538) list_form2_midp_pane_t1

0x6d48,	// (0x0000c546) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000152ef) list_form2_midp_pane_t

0x00b2,	// (0x000058b0) scroll_pane_cp51_ParamLimits

0x02b3,	// (0x00005ab1) form2_midp_wait_pane_g1

0x02bc,	// (0x00005aba) form2_midp_wait_pane_g2

0x02c5,	// (0x00005ac3) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00015304) form2_midp_wait_pane_g

0xa713,	// (0x0000ff11) list_highlight_pane_cp21_ParamLimits

0x02e5,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x02f4,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeb65,	// (0x00014363) list_single_2graphic_im_pane_ParamLimits

0xeb65,	// (0x00014363) list_single_2graphic_im_pane

0x70b2,	// (0x0000c8b0) list_single_2graphic_im_pane_g1_ParamLimits

0x70b2,	// (0x0000c8b0) list_single_2graphic_im_pane_g1

0x70c3,	// (0x0000c8c1) list_single_2graphic_im_pane_g2_ParamLimits

0x70c3,	// (0x0000c8c1) list_single_2graphic_im_pane_g2

0x70cf,	// (0x0000c8cd) list_single_2graphic_im_pane_g3_ParamLimits

0x70cf,	// (0x0000c8cd) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00015465) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00015465) list_single_2graphic_im_pane_g

0x70e3,	// (0x0000c8e1) list_single_2graphic_im_pane_t1_ParamLimits

0x70e3,	// (0x0000c8e1) list_single_2graphic_im_pane_t1

0x0d15,	// (0x00006513) list_single_graphic_2heading_pane_fp_ParamLimits

0x0d15,	// (0x00006513) list_single_graphic_2heading_pane_fp

0x0d6c,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0d6c,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1

0x0d29,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x0d29,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2

0xb0c1,	// (0x000108bf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb0c1,	// (0x000108bf) list_single_graphic_2heading_pane_fp_g3

0x0d35,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0d35,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4

0x0d49,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x0d49,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001538c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001538c) list_single_graphic_2heading_pane_fp_g

0x1567,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1567,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1

0x0da4,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0da4,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2

0x157d,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x157d,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001546e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001546e) list_single_graphic_2heading_pane_fp_t

0x067c,	// (0x00005e7a) fep_hwr_write_pane_g5_ParamLimits

0x067c,	// (0x00005e7a) fep_hwr_write_pane_g5

0x0688,	// (0x00005e86) fep_hwr_write_pane_g6_ParamLimits

0x0688,	// (0x00005e86) fep_hwr_write_pane_g6

0x11fe,	// (0x000069fc) eswt_shell_pane_ParamLimits

0xdab3,	// (0x000132b1) bg_popup_window_pane_cp18_ParamLimits

0xea37,	// (0x00014235) heading_pane_cp70

0x131b,	// (0x00006b19) popup_eswt_tasktip_window_t1_ParamLimits

0x619c,	// (0x0000b99a) aid_touch_tab_arrow_left

0x61b0,	// (0x0000b9ae) aid_touch_tab_arrow_right

0x4e83,	// (0x0000a681) title_pane_g3_ParamLimits

0x4e83,	// (0x0000a681) title_pane_g3

0xb327,	// (0x00010b25) set_value_pane_g1

0x6101,	// (0x0000b8ff) popup_toolbar_trans_pane_ParamLimits

0x14ad,	// (0x00006cab) aid_size_cell_tb_trans_pane_ParamLimits

0xb429,	// (0x00010c27) bg_tb_trans_pane_ParamLimits

0x14bf,	// (0x00006cbd) grid_tb_trans_pane_ParamLimits

0xa9e6,	// (0x000101e4) cont_note_pane_ParamLimits

0xa9e6,	// (0x000101e4) cont_note_pane

0xad1a,	// (0x00010518) cont_snote2_single_text_pane_ParamLimits

0xad1a,	// (0x00010518) cont_snote2_single_text_pane

0xad1a,	// (0x00010518) cont_snote2_single_graphic_pane_ParamLimits

0xad1a,	// (0x00010518) cont_snote2_single_graphic_pane

0xdf46,	// (0x00013744) cont_note_wait_pane_ParamLimits

0xdf46,	// (0x00013744) cont_note_wait_pane

0xdf46,	// (0x00013744) cont_note_image_pane_ParamLimits

0xdf46,	// (0x00013744) cont_note_image_pane

0x1593,	// (0x00006d91) popup_note2_window_g1_ParamLimits

0x1593,	// (0x00006d91) popup_note2_window_g1

0x15c4,	// (0x00006dc2) popup_note2_window_t1_ParamLimits

0x15c4,	// (0x00006dc2) popup_note2_window_t1

0x1609,	// (0x00006e07) popup_note2_window_t2_ParamLimits

0x1609,	// (0x00006e07) popup_note2_window_t2

0x164e,	// (0x00006e4c) popup_note2_window_t3_ParamLimits

0x164e,	// (0x00006e4c) popup_note2_window_t3

0x1693,	// (0x00006e91) popup_note2_window_t4_ParamLimits

0x1693,	// (0x00006e91) popup_note2_window_t4

0xaa6a,	// (0x00010268) popup_note2_window_t5_ParamLimits

0xaa6a,	// (0x00010268) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001547a) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001547a) popup_note2_window_t

0x16c2,	// (0x00006ec0) popup_note2_image_window_g1_ParamLimits

0x16c2,	// (0x00006ec0) popup_note2_image_window_g1

0x16ce,	// (0x00006ecc) popup_note2_image_window_g2_ParamLimits

0x16ce,	// (0x00006ecc) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00015485) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00015485) popup_note2_image_window_g

0x16e0,	// (0x00006ede) popup_note2_image_window_t1_ParamLimits

0x16e0,	// (0x00006ede) popup_note2_image_window_t1

0x16f8,	// (0x00006ef6) popup_note2_image_window_t2_ParamLimits

0x16f8,	// (0x00006ef6) popup_note2_image_window_t2

0x1710,	// (0x00006f0e) popup_note2_image_window_t3_ParamLimits

0x1710,	// (0x00006f0e) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001548a) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001548a) popup_note2_image_window_t

0xdf54,	// (0x00013752) popup_note2_wait_window_g1_ParamLimits

0xdf54,	// (0x00013752) popup_note2_wait_window_g1

0xdf60,	// (0x0001375e) popup_note2_wait_window_g2_ParamLimits

0xdf60,	// (0x0001375e) popup_note2_wait_window_g2

0xdf6c,	// (0x0001376a) popup_note2_wait_window_g3_ParamLimits

0xdf6c,	// (0x0001376a) popup_note2_wait_window_g3

0x0002,

0xf866,	// (0x00015064) popup_note2_wait_window_g_ParamLimits

0xf866,	// (0x00015064) popup_note2_wait_window_g

0x172c,	// (0x00006f2a) popup_note2_wait_window_t1_ParamLimits

0x172c,	// (0x00006f2a) popup_note2_wait_window_t1

0x174a,	// (0x00006f48) popup_note2_wait_window_t2_ParamLimits

0x174a,	// (0x00006f48) popup_note2_wait_window_t2

0x1768,	// (0x00006f66) popup_note2_wait_window_t3_ParamLimits

0x1768,	// (0x00006f66) popup_note2_wait_window_t3

0x177a,	// (0x00006f78) popup_note2_wait_window_t4_ParamLimits

0x177a,	// (0x00006f78) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x00015491) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x00015491) popup_note2_wait_window_t

0x178c,	// (0x00006f8a) wait_bar2_pane_ParamLimits

0x178c,	// (0x00006f8a) wait_bar2_pane

0x17a4,	// (0x00006fa2) popup_snote2_single_text_window_g1_ParamLimits

0x17a4,	// (0x00006fa2) popup_snote2_single_text_window_g1

0x17cc,	// (0x00006fca) popup_snote2_single_text_window_t1_ParamLimits

0x17cc,	// (0x00006fca) popup_snote2_single_text_window_t1

0x1818,	// (0x00007016) popup_snote2_single_text_window_t2_ParamLimits

0x1818,	// (0x00007016) popup_snote2_single_text_window_t2

0x1864,	// (0x00007062) popup_snote2_single_text_window_t3_ParamLimits

0x1864,	// (0x00007062) popup_snote2_single_text_window_t3

0x18a5,	// (0x000070a3) popup_snote2_single_text_window_t4_ParamLimits

0x18a5,	// (0x000070a3) popup_snote2_single_text_window_t4

0x18db,	// (0x000070d9) popup_snote2_single_text_window_t5_ParamLimits

0x18db,	// (0x000070d9) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001549a) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001549a) popup_snote2_single_text_window_t

0x1906,	// (0x00007104) popup_snote2_single_graphic_window_g1_ParamLimits

0x1906,	// (0x00007104) popup_snote2_single_graphic_window_g1

0x192e,	// (0x0000712c) popup_snote2_single_graphic_window_g2_ParamLimits

0x192e,	// (0x0000712c) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x000154a5) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x000154a5) popup_snote2_single_graphic_window_g

0x1956,	// (0x00007154) popup_snote2_single_graphic_window_t1_ParamLimits

0x1956,	// (0x00007154) popup_snote2_single_graphic_window_t1

0x19a2,	// (0x000071a0) popup_snote2_single_graphic_window_t2_ParamLimits

0x19a2,	// (0x000071a0) popup_snote2_single_graphic_window_t2

0x1864,	// (0x00007062) popup_snote2_single_graphic_window_t3_ParamLimits

0x1864,	// (0x00007062) popup_snote2_single_graphic_window_t3

0x18a5,	// (0x000070a3) popup_snote2_single_graphic_window_t4_ParamLimits

0x18a5,	// (0x000070a3) popup_snote2_single_graphic_window_t4

0x18db,	// (0x000070d9) popup_snote2_single_graphic_window_t5_ParamLimits

0x18db,	// (0x000070d9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x000154aa) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x000154aa) popup_snote2_single_graphic_window_t

0xf551,	// (0x00014d4f) clock_nsta_pane_cp2_t1

0xf551,	// (0x00014d4f) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x000152c5) clock_nsta_pane_cp2_t

0xb443,	// (0x00010c41) form_field_data_wide_pane_g1_ParamLimits

0xaec0,	// (0x000106be) form_field_data_wide_pane_g2_ParamLimits

0xaec0,	// (0x000106be) form_field_data_wide_pane_g2

0xb44f,	// (0x00010c4d) form_field_data_wide_pane_g3_ParamLimits

0xb44f,	// (0x00010c4d) form_field_data_wide_pane_g3

0x0002,

0xf6b0,	// (0x00014eae) form_field_data_wide_pane_g_ParamLimits

0xf6b0,	// (0x00014eae) form_field_data_wide_pane_g

0x6c75,	// (0x0000c473) grid_touch_3_pane_ParamLimits

0x6c75,	// (0x0000c473) grid_touch_3_pane

0x7114,	// (0x0000c912) cell_touch_3_pane_ParamLimits

0x7114,	// (0x0000c912) cell_touch_3_pane

0x0459,	// (0x00005c57) cell_touch_3_pane_g1

0x0459,	// (0x00005c57) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001534a) cell_touch_3_pane_g

0xaa9c,	// (0x0001029a) cont_query_data_pane

0xaaa4,	// (0x000102a2) cont_query_data_pane_cp1

0x1a1b,	// (0x00007219) button_value_adjust_pane_cp7

0x1a23,	// (0x00007221) query_popup_pane_cp3

0xbc92,	// (0x00011490) bg_popup_sub_pane_cp22_ParamLimits

0x909c,	// (0x0000e89a) navi_navi_volume_pane_cp2

0x90b4,	// (0x0000e8b2) popup_side_volume_key_window_g2

0x90c0,	// (0x0000e8be) popup_side_volume_key_window_g3

0x0002,

0xf742,	// (0x00014f40) popup_side_volume_key_window_g

0x90da,	// (0x0000e8d8) popup_side_volume_key_window_t2

0x0001,

0xf749,	// (0x00014f47) popup_side_volume_key_window_t

0xbfae,	// (0x000117ac) popup_side_volume_key_window_ParamLimits

0x5326,	// (0x0000ab24) list_double_graphic_pane_g4_ParamLimits

0x5326,	// (0x0000ab24) list_double_graphic_pane_g4

0x6ac5,	// (0x0000c2c3) list_single_2heading_msg_pane_ParamLimits

0x6ac5,	// (0x0000c2c3) list_single_2heading_msg_pane

0x715b,	// (0x0000c959) list_single_2heading_msg_pane_g1_ParamLimits

0x715b,	// (0x0000c959) list_single_2heading_msg_pane_g1

0x7167,	// (0x0000c965) list_single_2heading_msg_pane_g2_ParamLimits

0x7167,	// (0x0000c965) list_single_2heading_msg_pane_g2

0x717a,	// (0x0000c978) list_single_2heading_msg_pane_g3_ParamLimits

0x717a,	// (0x0000c978) list_single_2heading_msg_pane_g3

0x1a74,	// (0x00007272) list_single_2heading_msg_pane_g4_ParamLimits

0x1a74,	// (0x00007272) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x000154b5) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x000154b5) list_single_2heading_msg_pane_g

0x7186,	// (0x0000c984) list_single_2heading_msg_pane_t1_ParamLimits

0x7186,	// (0x0000c984) list_single_2heading_msg_pane_t1

0x71ae,	// (0x0000c9ac) list_single_2heading_msg_pane_t2_ParamLimits

0x71ae,	// (0x0000c9ac) list_single_2heading_msg_pane_t2

0x7219,	// (0x0000ca17) list_single_2heading_msg_pane_t3_ParamLimits

0x7219,	// (0x0000ca17) list_single_2heading_msg_pane_t3

0x1b1c,	// (0x0000731a) list_single_2heading_msg_pane_t4_ParamLimits

0x1b1c,	// (0x0000731a) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x000154be) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x000154be) list_single_2heading_msg_pane_t

0xa667,	// (0x0000fe65) title_pane_g4_ParamLimits

0xa667,	// (0x0000fe65) title_pane_g4

0x8eec,	// (0x0000e6ea) title_pane_stacon_g3_ParamLimits

0x8eec,	// (0x0000e6ea) title_pane_stacon_g3

0x152a,	// (0x00006d28) list_single_2graphic_im_pane_g4_ParamLimits

0x152a,	// (0x00006d28) list_single_2graphic_im_pane_g4

0xe84d,	// (0x0001404b) popup_side_volume_key_window_cp

0xed67,	// (0x00014565) main_idle_act2_pane_t1

0x9499,	// (0x0000ec97) toolbar_button_pane_g10

0x5213,	// (0x0000aa11) popup_toolbar_window_cp1

0xf542,	// (0x00014d40) clock_nsta_pane_cp_t1

0xf542,	// (0x00014d40) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x000152c0) clock_nsta_pane_cp_t

0x909c,	// (0x0000e89a) navi_navi_volume_pane_cp2_ParamLimits

0x90a8,	// (0x0000e8a6) popup_side_volume_key_window_g1_ParamLimits

0x90b4,	// (0x0000e8b2) popup_side_volume_key_window_g2_ParamLimits

0x90c0,	// (0x0000e8be) popup_side_volume_key_window_g3_ParamLimits

0xf742,	// (0x00014f40) popup_side_volume_key_window_g_ParamLimits

0x992f,	// (0x0000f12d) fep_hwr_aid_pane

0x99d0,	// (0x0000f1ce) bg_fep_hwr_top_pane_g4_ParamLimits

0x0595,	// (0x00005d93) fep_hwr_top_pane_g1_ParamLimits

0x0583,	// (0x00005d81) fep_hwr_top_pane_g2_ParamLimits

0x99f0,	// (0x0000f1ee) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00015315) fep_hwr_top_pane_g_ParamLimits

0x9a05,	// (0x0000f203) fep_hwr_top_text_pane_ParamLimits

0xe64d,	// (0x00013e4b) aid_touch_tab_arrow_arrow_2

0xe656,	// (0x00013e54) aid_touch_tab_arrow_left_2

0x9943,	// (0x0000f141) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9976,	// (0x0000f174) fep_hwr_prediction_pane

0x080b,	// (0x00006009) fep_vkb_prediction_pane

0x6ebe,	// (0x0000c6bc) fep_vkb_side_pane_g3_ParamLimits

0x6ebe,	// (0x0000c6bc) fep_vkb_side_pane_g3

0x9b74,	// (0x0000f372) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9bde,	// (0x0000f3dc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9beb,	// (0x0000f3e9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x000153c4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9d1a,	// (0x0000f518) fep_hwr_prediction_pane_g1

0x9d24,	// (0x0000f522) fep_hwr_prediction_pane_g2

0x9d2c,	// (0x0000f52a) fep_hwr_prediction_pane_g3

0x9d34,	// (0x0000f532) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x000154c7) fep_hwr_prediction_pane_g

0x1b41,	// (0x0000733f) fep_vkb_prediction_pane_g1

0x1b63,	// (0x00007361) fep_vkb_prediction_pane_g2

0x1b6b,	// (0x00007369) fep_vkb_prediction_pane_g3

0x1b73,	// (0x00007371) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x000154d0) fep_vkb_prediction_pane_g

0x9767,	// (0x0000ef65) slider_set_pane_g3

0x977b,	// (0x0000ef79) slider_set_pane_g4

0x9793,	// (0x0000ef91) slider_set_pane_g5

0x9767,	// (0x0000ef65) slider_set_pane_g6

0xd250,	// (0x00012a4e) slider_set_pane_g7

0xeb2d,	// (0x0001432b) slider_form_pane_g3

0xeb36,	// (0x00014334) slider_form_pane_g4

0xeb3e,	// (0x0001433c) slider_form_pane_g5

0xeb2d,	// (0x0001432b) slider_form_pane_g6

0x6a7e,	// (0x0000c27c) slider_form_pane_g7

0xefc2,	// (0x000147c0) slider_set_pane_vc_g3

0xefcb,	// (0x000147c9) slider_set_pane_vc_g4

0xefd4,	// (0x000147d2) slider_set_pane_vc_g5

0xefc2,	// (0x000147c0) slider_set_pane_vc_g6

0xefdd,	// (0x000147db) slider_set_pane_vc_g7

0xefc2,	// (0x000147c0) slider_form_pane_vc_g1

0xefcb,	// (0x000147c9) slider_form_pane_vc_g2

0xefd4,	// (0x000147d2) slider_form_pane_vc_g3

0xefc2,	// (0x000147c0) slider_form_pane_vc_g4

0xf2f8,	// (0x00014af6) slider_form_pane_vc_g5

0x0004,

0xfaa8,	// (0x000152a6) slider_form_pane_vc_g

0xa542,	// (0x0000fd40) main_idle_act3_pane

0x1b7b,	// (0x00007379) ai3_links_pane

0x7287,	// (0x0000ca85) popup_ai3_data_window_ParamLimits

0x7287,	// (0x0000ca85) popup_ai3_data_window

0xa542,	// (0x0000fd40) grid_ai3_links_pane

0x729f,	// (0x0000ca9d) cell_ai3_links_pane_ParamLimits

0x729f,	// (0x0000ca9d) cell_ai3_links_pane

0x1bb0,	// (0x000073ae) bg_popup_sub_pane_cp11

0x1bbd,	// (0x000073bb) cell_ai3_links_pane_g1

0xa542,	// (0x0000fd40) bg_popup_sub_pane_cp12

0x1be2,	// (0x000073e0) heading_ai3_data_pane

0x1bea,	// (0x000073e8) list_ai3_gene_pane

0x1bf6,	// (0x000073f4) popup_ai3_data_window_g1

0x1bfe,	// (0x000073fc) heading_ai3_data_pane_g1

0x1c06,	// (0x00007404) heading_ai3_data_pane_t1

0x1c14,	// (0x00007412) list_double_ai3_gene_pane_ParamLimits

0x1c14,	// (0x00007412) list_double_ai3_gene_pane

0x1c21,	// (0x0000741f) list_single_ai3_gene_pane_ParamLimits

0x1c21,	// (0x0000741f) list_single_ai3_gene_pane

0x041e,	// (0x00005c1c) list_highlight_pane_cp7_ParamLimits

0x041e,	// (0x00005c1c) list_highlight_pane_cp7

0x1c2e,	// (0x0000742c) list_single_a13_gene_pane_t1_ParamLimits

0x1c2e,	// (0x0000742c) list_single_a13_gene_pane_t1

0x1c45,	// (0x00007443) list_single_ai3_gene_pane_g1

0x1c4e,	// (0x0000744c) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x000154d9) list_single_ai3_gene_pane_g

0x1c56,	// (0x00007454) list_double_ai3_gene_pane_g1_ParamLimits

0x1c56,	// (0x00007454) list_double_ai3_gene_pane_g1

0x1c62,	// (0x00007460) list_double_ai3_gene_pane_t1_ParamLimits

0x1c62,	// (0x00007460) list_double_ai3_gene_pane_t1

0x1c7e,	// (0x0000747c) list_double_ai3_gene_pane_t2_ParamLimits

0x1c7e,	// (0x0000747c) list_double_ai3_gene_pane_t2

0x1c93,	// (0x00007491) list_double_ai3_gene_pane_t3_ParamLimits

0x1c93,	// (0x00007491) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x000154de) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x000154de) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a34,	// (0x00007232) aid_size_min_col_2

0x7147,	// (0x0000c945) aid_size_min_msg_ParamLimits

0x7147,	// (0x0000c945) aid_size_min_msg

0x6ed2,	// (0x0000c6d0) fep_vkb_top_text_pane_g2_ParamLimits

0x6ed2,	// (0x0000c6d0) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00015345) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00015345) fep_vkb_top_text_pane_g

0xa542,	// (0x0000fd40) main_hc_apps_shell_pane

0x1cb0,	// (0x000074ae) grid_hc_apps_pane_ParamLimits

0x1cb0,	// (0x000074ae) grid_hc_apps_pane

0x1cbf,	// (0x000074bd) list_hc_apps_pane

0x1cc7,	// (0x000074c5) scroll_pane_cp37_ParamLimits

0x1cc7,	// (0x000074c5) scroll_pane_cp37

0x72b5,	// (0x0000cab3) cell_hc_apps_pane_ParamLimits

0x72b5,	// (0x0000cab3) cell_hc_apps_pane

0x734f,	// (0x0000cb4d) cell_hc_apps_pane_g1_ParamLimits

0x734f,	// (0x0000cb4d) cell_hc_apps_pane_g1

0x1d8e,	// (0x0000758c) cell_hc_apps_pane_g2_ParamLimits

0x1d8e,	// (0x0000758c) cell_hc_apps_pane_g2

0x1daa,	// (0x000075a8) cell_hc_apps_pane_g3_ParamLimits

0x1daa,	// (0x000075a8) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x000154e5) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x000154e5) cell_hc_apps_pane_g

0x737c,	// (0x0000cb7a) cell_hc_apps_pane_t1_ParamLimits

0x737c,	// (0x0000cb7a) cell_hc_apps_pane_t1

0xa9e6,	// (0x000101e4) grid_highlight_pane_cp10_ParamLimits

0xa9e6,	// (0x000101e4) grid_highlight_pane_cp10

0x73ba,	// (0x0000cbb8) list_single_hc_apps_pane_ParamLimits

0x73ba,	// (0x0000cbb8) list_single_hc_apps_pane

0x73e6,	// (0x0000cbe4) list_single_hc_apps_pane_g1

0x73ff,	// (0x0000cbfd) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x000154ec) list_single_hc_apps_pane_g

0x7418,	// (0x0000cc16) list_single_hc_apps_pane_g2_copy1

0x7434,	// (0x0000cc32) list_single_hc_apps_pane_t1

0xa713,	// (0x0000ff11) bg_set_opt_pane_cp_ParamLimits

0x8e3a,	// (0x0000e638) setting_slider_pane_t1_ParamLimits

0xcf20,	// (0x0001271e) setting_slider_pane_t2_ParamLimits

0xcf39,	// (0x00012737) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00014da0) setting_slider_pane_t_ParamLimits

0x8e80,	// (0x0000e67e) slider_set_pane_ParamLimits

0x9314,	// (0x0000eb12) control_pane_g5_ParamLimits

0x9314,	// (0x0000eb12) control_pane_g5

0xea7e,	// (0x0001427c) slider_set_pane_g1_ParamLimits

0x975b,	// (0x0000ef59) slider_set_pane_g2_ParamLimits

0x9767,	// (0x0000ef65) slider_set_pane_g3_ParamLimits

0x977b,	// (0x0000ef79) slider_set_pane_g4_ParamLimits

0x9793,	// (0x0000ef91) slider_set_pane_g5_ParamLimits

0x9767,	// (0x0000ef65) slider_set_pane_g6_ParamLimits

0xd250,	// (0x00012a4e) slider_set_pane_g7_ParamLimits

0xf982,	// (0x00015180) slider_set_pane_g_ParamLimits

0xa713,	// (0x0000ff11) navi_icon_text_pane_ParamLimits

0x616e,	// (0x0000b96c) aid_fill_nsta_2_ParamLimits

0x619c,	// (0x0000b99a) aid_touch_tab_arrow_left_ParamLimits

0x61b0,	// (0x0000b9ae) aid_touch_tab_arrow_right_ParamLimits

0x624c,	// (0x0000ba4a) clock_nsta_pane_ParamLimits

0xe62f,	// (0x00013e2d) navi_icon_pane_g1_ParamLimits

0xe63b,	// (0x00013e39) navi_text_pane_t1_ParamLimits

0x0028,	// (0x00005826) navi_icon_text_pane_g1_ParamLimits

0x0034,	// (0x00005832) navi_icon_text_pane_t1_ParamLimits

0x73e6,	// (0x0000cbe4) list_single_hc_apps_pane_g1_ParamLimits

0x73ff,	// (0x0000cbfd) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x000154ec) list_single_hc_apps_pane_g_ParamLimits

0x7418,	// (0x0000cc16) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7434,	// (0x0000cc32) list_single_hc_apps_pane_t1_ParamLimits

0xcead,	// (0x000126ab) popup_toolbar2_fixed_window_ParamLimits

0xcead,	// (0x000126ab) popup_toolbar2_fixed_window

0x60f9,	// (0x0000b8f7) popup_toolbar2_float_window

0xa542,	// (0x0000fd40) bg_popup_sub_pane_cp27

0x1eb6,	// (0x000076b4) grid_toolbar2_float_pane

0xa542,	// (0x0000fd40) bg_popup_sub_pane_cp26

0x1eb6,	// (0x000076b4) grid_toolbar2_fixed_pane

0x7462,	// (0x0000cc60) cell_toolbar2_fixed_pane_ParamLimits

0x7462,	// (0x0000cc60) cell_toolbar2_fixed_pane

0x747d,	// (0x0000cc7b) cell_toolbar2_fixed_pane_g1

0x1ed8,	// (0x000076d6) toolbar2_fixed_button_pane

0xd99d,	// (0x0001319b) toolbar2_fixed_button_pane_g1

0xd9ad,	// (0x000131ab) toolbar2_fixed_button_pane_g2

0xd9a5,	// (0x000131a3) toolbar2_fixed_button_pane_g3

0xd9bd,	// (0x000131bb) toolbar2_fixed_button_pane_g4

0xd9b5,	// (0x000131b3) toolbar2_fixed_button_pane_g5

0xd9c5,	// (0x000131c3) toolbar2_fixed_button_pane_g6

0xd9cd,	// (0x000131cb) toolbar2_fixed_button_pane_g7

0xd9dd,	// (0x000131db) toolbar2_fixed_button_pane_g8

0xd9d5,	// (0x000131d3) toolbar2_fixed_button_pane_g9

0x0008,

0xf884,	// (0x00015082) toolbar2_fixed_button_pane_g

0x1ee0,	// (0x000076de) cell_toolbar2_float_pane_ParamLimits

0x1ee0,	// (0x000076de) cell_toolbar2_float_pane

0x1ef1,	// (0x000076ef) cell_toolbar2_float_pane_g1

0x1ed8,	// (0x000076d6) toolbar2_fixed_button_pane_cp

0x6e87,	// (0x0000c685) fep_vkb_accented_list_pane_ParamLimits

0x6e87,	// (0x0000c685) fep_vkb_accented_list_pane

0x9b54,	// (0x0000f352) bg_popup_fep_shadow_pane_g9

0xc1b6,	// (0x000119b4) bg_popup_fep_shadow_pane_cp3

0xb6d7,	// (0x00010ed5) list_accented_list_pane

0x1efa,	// (0x000076f8) list_single_accented_list_pane_ParamLimits

0x1efa,	// (0x000076f8) list_single_accented_list_pane

0xc1b6,	// (0x000119b4) list_highlight_pane_cp10

0x1f0b,	// (0x00007709) list_single_accented_list_pane_t1

0x603b,	// (0x0000b839) popup_slider_window_ParamLimits

0x603b,	// (0x0000b839) popup_slider_window

0x1a2b,	// (0x00007229) aid_indentation_list_msg

0x755c,	// (0x0000cd5a) bg_popup_window_pane_cp19

0x200f,	// (0x0000780d) popup_slider_window_g1

0x202b,	// (0x00007829) popup_slider_window_g2

0x2047,	// (0x00007845) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x000154f1) popup_slider_window_g

0x20a3,	// (0x000078a1) popup_slider_window_t1

0x2115,	// (0x00007913) small_volume_slider_vertical_pane

0x0459,	// (0x00005c57) small_volume_slider_vertical_pane_g1

0x0459,	// (0x00005c57) small_volume_slider_vertical_pane_g2

0x2131,	// (0x0000792f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x00015503) small_volume_slider_vertical_pane_g

0xce31,	// (0x0001262f) area_side_right_pane_ParamLimits

0xce31,	// (0x0001262f) area_side_right_pane

0xd2b3,	// (0x00012ab1) aid_size_side_button_ParamLimits

0xd2b3,	// (0x00012ab1) aid_size_side_button

0xd2cc,	// (0x00012aca) grid_sctrl_middle_pane_ParamLimits

0xd2cc,	// (0x00012aca) grid_sctrl_middle_pane

0x9d6c,	// (0x0000f56a) sctrl_sk_bottom_pane

0x9d7d,	// (0x0000f57b) sctrl_sk_top_pane

0x9d8f,	// (0x0000f58d) aid_touch_sctrl_top

0x9d9c,	// (0x0000f59a) bg_sctrl_sk_pane_ParamLimits

0x9d9c,	// (0x0000f59a) bg_sctrl_sk_pane

0x9daa,	// (0x0000f5a8) sctrl_sk_top_pane_g1

0x9db7,	// (0x0000f5b5) sctrl_sk_top_pane_t1

0x9d8f,	// (0x0000f58d) aid_touch_sctrl_bottom

0x9d9c,	// (0x0000f59a) bg_sctrl_sk_pane_cp_ParamLimits

0x9d9c,	// (0x0000f59a) bg_sctrl_sk_pane_cp

0x9dd2,	// (0x0000f5d0) sctrl_sk_bottom_pane_g1

0x9db7,	// (0x0000f5b5) sctrl_sk_bottom_pane_t1

0xd2e2,	// (0x00012ae0) cell_sctrl_middle_pane_ParamLimits

0xd2e2,	// (0x00012ae0) cell_sctrl_middle_pane

0xd2f3,	// (0x00012af1) aid_touch_sctrl_middle_ParamLimits

0xd2f3,	// (0x00012af1) aid_touch_sctrl_middle

0xd300,	// (0x00012afe) bg_sctrl_middle_pane_ParamLimits

0xd300,	// (0x00012afe) bg_sctrl_middle_pane

0xa3da,	// (0x0000fbd8) cell_sctrl_middle_pane_g1_ParamLimits

0xa3da,	// (0x0000fbd8) cell_sctrl_middle_pane_g1

0xd30e,	// (0x00012b0c) cell_sctrl_middle_pane_g2_ParamLimits

0xd30e,	// (0x00012b0c) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001550f) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001550f) cell_sctrl_middle_pane_g

0xd99d,	// (0x0001319b) bg_sctrl_middle_pane_g1

0xd9a5,	// (0x000131a3) bg_sctrl_middle_pane_g2

0xd9ad,	// (0x000131ab) bg_sctrl_middle_pane_g3

0xd9b5,	// (0x000131b3) bg_sctrl_middle_pane_g4

0xd9bd,	// (0x000131bb) bg_sctrl_middle_pane_g5

0xd9c5,	// (0x000131c3) bg_sctrl_middle_pane_g6

0xd9cd,	// (0x000131cb) bg_sctrl_middle_pane_g7

0xd9d5,	// (0x000131d3) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x00015514) bg_sctrl_middle_pane_g

0xd9dd,	// (0x000131db) bg_sctrl_middle_pane_g8_copy1

0xd99d,	// (0x0001319b) bg_sctrl_sk_pane_g1

0xd9ad,	// (0x000131ab) bg_sctrl_sk_pane_g2

0xd9a5,	// (0x000131a3) bg_sctrl_sk_pane_g3

0x0008,

0xf884,	// (0x00015082) bg_sctrl_sk_pane_g

0xae3c,	// (0x0001063a) aid_size_touch_scroll_bar

0xd9bd,	// (0x000131bb) bg_sctrl_sk_pane_g4

0xd9b5,	// (0x000131b3) bg_sctrl_sk_pane_g5

0xd9c5,	// (0x000131c3) bg_sctrl_sk_pane_g6

0xd9cd,	// (0x000131cb) bg_sctrl_sk_pane_g7

0xd9dd,	// (0x000131db) bg_sctrl_sk_pane_g8

0xd9d5,	// (0x000131d3) bg_sctrl_sk_pane_g9

0xd713,	// (0x00012f11) popup_fep_china_hwr2_fs_candidate_window

0x5c36,	// (0x0000b434) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c36,	// (0x0000b434) popup_fep_china_hwr2_fs_control_window

0x9b74,	// (0x0000f372) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001550a) sctrl_sk_top_pane_g

0x767c,	// (0x0000ce7a) aid_fep_china_hwr2_fs_cell_ParamLimits

0x767c,	// (0x0000ce7a) aid_fep_china_hwr2_fs_cell

0x7690,	// (0x0000ce8e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x7690,	// (0x0000ce8e) bg_popup_fep_shadow_pane_cp4

0x76a7,	// (0x0000cea5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x76a7,	// (0x0000cea5) bg_popup_fep_shadow_pane_cp5

0x76b9,	// (0x0000ceb7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x76b9,	// (0x0000ceb7) popup_fep_china_hwr2_fs_control_bar_grid

0x76cd,	// (0x0000cecb) popup_fep_china_hwr2_fs_control_funtion_grid

0x225f,	// (0x00007a5d) aid_fep_china_hwr2_fs_candi_cell

0xa542,	// (0x0000fd40) bg_popup_fep_shadow_pane_cp6

0x2269,	// (0x00007a67) popup_fep_china_hwr2_fs_candidate_grid

0x76d5,	// (0x0000ced3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x76d5,	// (0x0000ced3) cell_fep_china_hwr2_fs_funtion_grid

0x0459,	// (0x00005c57) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x2289,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x2289,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1

0x2297,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x2297,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x00015525) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x00015525) cell_fep_china_hwr2_fs_funtion_grid_g

0x76ed,	// (0x0000ceeb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x76ed,	// (0x0000ceeb) cell_fep_china_hwr2_fs_funtion_grid_t1

0x7702,	// (0x0000cf00) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x7702,	// (0x0000cf00) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001552a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001552a) cell_fep_china_hwr2_fs_funtion_grid_t

0x22de,	// (0x00007adc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x22e6,	// (0x00007ae4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x22ee,	// (0x00007aec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001552f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x22f6,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x22f6,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid

0x230f,	// (0x00007b0d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x2317,	// (0x00007b15) popup_fep_china_hwr2_fs_candidate_grid_g21

0x0459,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g1

0x0459,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001534a) cell_fep_china_hwr2_fs_candidate_grid_g

0x231f,	// (0x00007b1d) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd802,	// (0x00013000) clock_nsta_pane_cp_24_ParamLimits

0xd802,	// (0x00013000) clock_nsta_pane_cp_24

0xd85f,	// (0x0001305d) indicator_nsta_pane_cp_24_ParamLimits

0xd85f,	// (0x0001305d) indicator_nsta_pane_cp_24

0xe53a,	// (0x00013d38) heading_pane_g1

0x0001,

0xf8e9,	// (0x000150e7) heading_pane_g

0x6b9d,	// (0x0000c39b) grid_sct_catagory_button_pane

0xeaf6,	// (0x000142f4) scroll_pane_cp5_ParamLimits

0x00be,	// (0x000058bc) button_value_adjust_pane_cp5_ParamLimits

0x00be,	// (0x000058bc) button_value_adjust_pane_cp5

0x01b4,	// (0x000059b2) form2_midp_time_pane_ParamLimits

0x232d,	// (0x00007b2b) cell_sct_catagory_button_pane_ParamLimits

0x232d,	// (0x00007b2b) cell_sct_catagory_button_pane

0x041e,	// (0x00005c1c) bg_button_pane_cp01_ParamLimits

0x041e,	// (0x00005c1c) bg_button_pane_cp01

0x0459,	// (0x00005c57) cell_sct_catagory_button_pane_g1

0x60aa,	// (0x0000b8a8) popup_tb_extension_window

0x771e,	// (0x0000cf1c) aid_size_cell_ext_ParamLimits

0x771e,	// (0x0000cf1c) aid_size_cell_ext

0xad1a,	// (0x00010518) bg_tb_trans_pane_cp1_ParamLimits

0xad1a,	// (0x00010518) bg_tb_trans_pane_cp1

0x7744,	// (0x0000cf42) grid_tb_ext_pane_ParamLimits

0x7744,	// (0x0000cf42) grid_tb_ext_pane

0x777a,	// (0x0000cf78) cell_tb_ext_pane_ParamLimits

0x777a,	// (0x0000cf78) cell_tb_ext_pane

0x779e,	// (0x0000cf9c) cell_tb_ext_pane_g1_ParamLimits

0x779e,	// (0x0000cf9c) cell_tb_ext_pane_g1

0x23b7,	// (0x00007bb5) cell_tb_ext_pane_t1

0xa9e6,	// (0x000101e4) list_highlight_pane_cp11_ParamLimits

0xa9e6,	// (0x000101e4) list_highlight_pane_cp11

0x8d8b,	// (0x0000e589) popup_uni_indicator_window_ParamLimits

0x8d8b,	// (0x0000e589) popup_uni_indicator_window

0xb429,	// (0x00010c27) bg_popup_sub_pane_cp14

0x23d2,	// (0x00007bd0) list_uniindi_pane

0x23de,	// (0x00007bdc) uniindi_top_pane

0xa9e6,	// (0x000101e4) bg_uniindi_top_pane

0x23fd,	// (0x00007bfb) uniindi_top_pane_g1

0x2413,	// (0x00007c11) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x00015536) uniindi_top_pane_g

0x243d,	// (0x00007c3b) uniindi_top_pane_t1

0x2467,	// (0x00007c65) list_single_uniindi_pane_ParamLimits

0x2467,	// (0x00007c65) list_single_uniindi_pane

0x0459,	// (0x00005c57) bg_uniindi_top_pane_g1

0x2479,	// (0x00007c77) list_single_uniindi_pane_g1

0x248c,	// (0x00007c8a) list_single_uniindi_pane_t1

0x8c29,	// (0x0000e427) control_bg_pane

0x24b1,	// (0x00007caf) bg_sctrl_sk_pane_cp1

0x24ba,	// (0x00007cb8) bg_sctrl_sk_pane_cp2

0x24c3,	// (0x00007cc1) control_bg_pane_g1

0x24cc,	// (0x00007cca) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001553f) control_bg_pane_g

0xf51b,	// (0x00014d19) cell_indicator_nsta_pane_g1_ParamLimits

0x6ca8,	// (0x0000c4a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfabd,	// (0x000152bb) cell_indicator_nsta_pane_g_ParamLimits

0x0238,	// (0x00005a36) form2_midp_time_pane_t1_ParamLimits

0x04b4,	// (0x00005cb2) main_idle_act4_pane_ParamLimits

0x04b4,	// (0x00005cb2) main_idle_act4_pane

0x60aa,	// (0x0000b8a8) popup_tb_extension_window_ParamLimits

0x7764,	// (0x0000cf62) tb_ext_find_pane_ParamLimits

0x7764,	// (0x0000cf62) tb_ext_find_pane

0x24d5,	// (0x00007cd3) ai_gene_pane_1_cp1

0xc2ef,	// (0x00011aed) ai_gene_pane_2_cp1

0x24dd,	// (0x00007cdb) list_single_idle_plugin_calendar_pane

0x24e6,	// (0x00007ce4) list_single_idle_plugin_notification_pane

0x24ef,	// (0x00007ced) list_single_idle_plugin_player_pane

0x77bb,	// (0x0000cfb9) list_single_idle_plugin_shortcut_pane_ParamLimits

0x77bb,	// (0x0000cfb9) list_single_idle_plugin_shortcut_pane

0x77e3,	// (0x0000cfe1) main_idle_act4_pane_t1

0x77f9,	// (0x0000cff7) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x00015544) main_idle_act4_pane_t

0x780f,	// (0x0000d00d) middle_sk_idle_act4_pane_ParamLimits

0x780f,	// (0x0000d00d) middle_sk_idle_act4_pane

0x782b,	// (0x0000d029) popup_clock_digital_analogue_window_cp2

0x7851,	// (0x0000d04f) shortcut_wheel_idle_act4_pane_ParamLimits

0x7851,	// (0x0000d04f) shortcut_wheel_idle_act4_pane

0x0459,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g1

0x0459,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g2

0x0459,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g3

0x0459,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g4

0x0459,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g5

0x2582,	// (0x00007d80) shortcut_wheel_idle_act4_pane_g6

0x258a,	// (0x00007d88) shortcut_wheel_idle_act4_pane_g7

0x2592,	// (0x00007d90) shortcut_wheel_idle_act4_pane_g8

0x259a,	// (0x00007d98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x00015549) shortcut_wheel_idle_act4_pane_g

0x0563,	// (0x00005d61) middle_sk_idle_act4_pane_g1_ParamLimits

0x0563,	// (0x00005d61) middle_sk_idle_act4_pane_g1

0x78cc,	// (0x0000d0ca) middle_sk_idle_act4_pane_g2_ParamLimits

0x78cc,	// (0x0000d0ca) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001556c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001556c) middle_sk_idle_act4_pane_g

0x78e4,	// (0x0000d0e2) middle_sk_idle_act4_pane_t1_ParamLimits

0x78e4,	// (0x0000d0e2) middle_sk_idle_act4_pane_t1

0x7913,	// (0x0000d111) grid_ai_shortcut_pane_ParamLimits

0x7913,	// (0x0000d111) grid_ai_shortcut_pane

0x7930,	// (0x0000d12e) list_highlight_pane_cp16_ParamLimits

0x7930,	// (0x0000d12e) list_highlight_pane_cp16

0x793d,	// (0x0000d13b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x793d,	// (0x0000d13b) list_single_idle_plugin_shortcut_pane_g1

0x7949,	// (0x0000d147) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x7949,	// (0x0000d147) list_single_idle_plugin_shortcut_pane_g2

0x7965,	// (0x0000d163) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x7965,	// (0x0000d163) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x00015571) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x00015571) list_single_idle_plugin_shortcut_pane_g

0x797a,	// (0x0000d178) cell_ai_shortcut_pane_ParamLimits

0x797a,	// (0x0000d178) cell_ai_shortcut_pane

0x7990,	// (0x0000d18e) cell_ai_shortcut_pane_g1_ParamLimits

0x7990,	// (0x0000d18e) cell_ai_shortcut_pane_g1

0x24d5,	// (0x00007cd3) ai_gene_pane_1_cp2

0x26c7,	// (0x00007ec5) ai_gene_pane_2_cp2

0x26cf,	// (0x00007ecd) list_highlight_pane_cp15

0x26d8,	// (0x00007ed6) list_single_idle_plugin_calendar_pane_g1

0x26cf,	// (0x00007ecd) list_highlight_pane_cp17

0x26e0,	// (0x00007ede) list_single_idle_plugin_calendar_pane_g1_copy1

0x26e8,	// (0x00007ee6) list_single_idle_plugin_player_pane_g1

0xedf3,	// (0x000145f1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x00015578) list_single_idle_plugin_player_pane_g

0x26f0,	// (0x00007eee) list_single_idle_plugin_player_pane_t1

0x26fe,	// (0x00007efc) list_single_idle_plugin_player_pane_t2

0x270c,	// (0x00007f0a) list_single_idle_plugin_player_pane_t3

0x271a,	// (0x00007f18) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001557d) list_single_idle_plugin_player_pane_t

0x2728,	// (0x00007f26) wait_bar_pane_cp15

0x2730,	// (0x00007f2e) grid_ai_notification_pane

0xedf3,	// (0x000145f1) list_single_idle_plugin_notification_pane_g1

0x79b2,	// (0x0000d1b0) cell_ai_notification_pane_ParamLimits

0x79b2,	// (0x0000d1b0) cell_ai_notification_pane

0x2746,	// (0x00007f44) cell_ai_notification_pane_g1

0x274e,	// (0x00007f4c) cell_ai_notification_pane_t1

0x79bf,	// (0x0000d1bd) tb_ext_find_button_pane

0x79c7,	// (0x0000d1c5) tb_ext_find_pane_g1

0x79cf,	// (0x0000d1cd) tb_ext_find_pane_t1

0xbbe4,	// (0x000113e2) tb_ext_find_button_pane_g1

0x277a,	// (0x00007f78) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x00015586) tb_ext_find_button_pane_g

0x77e3,	// (0x0000cfe1) main_idle_act4_pane_t1_ParamLimits

0x77f9,	// (0x0000cff7) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x00015544) main_idle_act4_pane_t_ParamLimits

0x782b,	// (0x0000d029) popup_clock_digital_analogue_window_cp2_ParamLimits

0x7841,	// (0x0000d03f) sat_plugin_idle_act4_pane_ParamLimits

0x7841,	// (0x0000d03f) sat_plugin_idle_act4_pane

0x79dd,	// (0x0000d1db) sat_plugin_idle_act4_pane_t1_ParamLimits

0x79dd,	// (0x0000d1db) sat_plugin_idle_act4_pane_t1

0x79f5,	// (0x0000d1f3) sat_plugin_idle_act4_pane_t2_ParamLimits

0x79f5,	// (0x0000d1f3) sat_plugin_idle_act4_pane_t2

0x7a0d,	// (0x0000d20b) sat_plugin_idle_act4_pane_t3_ParamLimits

0x7a0d,	// (0x0000d20b) sat_plugin_idle_act4_pane_t3

0x7a25,	// (0x0000d223) sat_plugin_idle_act4_pane_t4_ParamLimits

0x7a25,	// (0x0000d223) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001558b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001558b) sat_plugin_idle_act4_pane_t

0x8cec,	// (0x0000e4ea) popup_battery_window_ParamLimits

0x8cec,	// (0x0000e4ea) popup_battery_window

0xa9e6,	// (0x000101e4) bg_popup_sub_pane_cp25_ParamLimits

0xa9e6,	// (0x000101e4) bg_popup_sub_pane_cp25

0x27cf,	// (0x00007fcd) popup_battery_window_g1_ParamLimits

0x27cf,	// (0x00007fcd) popup_battery_window_g1

0x27db,	// (0x00007fd9) popup_battery_window_t1_ParamLimits

0x27db,	// (0x00007fd9) popup_battery_window_t1

0x27ed,	// (0x00007feb) popup_battery_window_t2_ParamLimits

0x27ed,	// (0x00007feb) popup_battery_window_t2

0x0001,

0xfd96,	// (0x00015594) popup_battery_window_t_ParamLimits

0xfd96,	// (0x00015594) popup_battery_window_t

0x59aa,	// (0x0000b1a8) midp_canvas_pane_ParamLimits

0x59ff,	// (0x0000b1fd) midp_keypad_pane_ParamLimits

0x59ff,	// (0x0000b1fd) midp_keypad_pane

0xd685,	// (0x00012e83) main_midp_pane_ParamLimits

0xf560,	// (0x00014d5e) signal_pane_g2_cp_ParamLimits

0x7a3d,	// (0x0000d23b) aid_size_cell_midp_keypad_ParamLimits

0x7a3d,	// (0x0000d23b) aid_size_cell_midp_keypad

0x7a5b,	// (0x0000d259) midp_keyp_game_grid_pane_ParamLimits

0x7a5b,	// (0x0000d259) midp_keyp_game_grid_pane

0x7a7a,	// (0x0000d278) midp_keyp_rocker_pane_ParamLimits

0x7a7a,	// (0x0000d278) midp_keyp_rocker_pane

0x7abb,	// (0x0000d2b9) midp_keyp_sk_left_pane_ParamLimits

0x7abb,	// (0x0000d2b9) midp_keyp_sk_left_pane

0x7b0d,	// (0x0000d30b) midp_keyp_sk_right_pane_ParamLimits

0x7b0d,	// (0x0000d30b) midp_keyp_sk_right_pane

0xa542,	// (0x0000fd40) bg_button_pane_cp03

0x7b59,	// (0x0000d357) midp_keyp_sk_left_pane_g1

0xa542,	// (0x0000fd40) bg_button_pane_cp04

0x7b59,	// (0x0000d357) midp_keyp_sk_right_pane_g1

0x0459,	// (0x00005c57) midp_keyp_rocker_pane_g1

0x7b62,	// (0x0000d360) keyp_game_cell_pane_ParamLimits

0x7b62,	// (0x0000d360) keyp_game_cell_pane

0xa542,	// (0x0000fd40) bg_button_pane_cp02

0x7b84,	// (0x0000d382) keyp_game_cell_pane_g1

0xce73,	// (0x00012671) popup_fep_vkb2_window_ParamLimits

0xce73,	// (0x00012671) popup_fep_vkb2_window

0xd31b,	// (0x00012b19) aid_size_cell_vkb2_ParamLimits

0xd31b,	// (0x00012b19) aid_size_cell_vkb2

0xd351,	// (0x00012b4f) popup_fep_vkb2_window_g1_ParamLimits

0xd351,	// (0x00012b4f) popup_fep_vkb2_window_g1

0xd3a1,	// (0x00012b9f) vkb2_area_bottom_pane_ParamLimits

0xd3a1,	// (0x00012b9f) vkb2_area_bottom_pane

0xd3df,	// (0x00012bdd) vkb2_area_keypad_pane_ParamLimits

0xd3df,	// (0x00012bdd) vkb2_area_keypad_pane

0xd41d,	// (0x00012c1b) vkb2_area_top_pane_ParamLimits

0xd41d,	// (0x00012c1b) vkb2_area_top_pane

0xd499,	// (0x00012c97) vkb2_top_entry_pane_ParamLimits

0xd499,	// (0x00012c97) vkb2_top_entry_pane

0xd4c6,	// (0x00012cc4) vkb2_top_grid_left_pane_ParamLimits

0xd4c6,	// (0x00012cc4) vkb2_top_grid_left_pane

0xd4e6,	// (0x00012ce4) vkb2_top_grid_right_pane_ParamLimits

0xd4e6,	// (0x00012ce4) vkb2_top_grid_right_pane

0xa01b,	// (0x0000f819) vkb2_cell_keypad_pane_ParamLimits

0xa01b,	// (0x0000f819) vkb2_cell_keypad_pane

0xd52c,	// (0x00012d2a) vkb2_area_bottom_grid_pane_ParamLimits

0xd52c,	// (0x00012d2a) vkb2_area_bottom_grid_pane

0xd552,	// (0x00012d50) vkb2_area_bottom_pane_g1_ParamLimits

0xd552,	// (0x00012d50) vkb2_area_bottom_pane_g1

0xd578,	// (0x00012d76) vkb2_area_bottom_pane_g2_ParamLimits

0xd578,	// (0x00012d76) vkb2_area_bottom_pane_g2

0xd5a9,	// (0x00012da7) vkb2_area_bottom_pane_g3_ParamLimits

0xd5a9,	// (0x00012da7) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x00015599) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x00015599) vkb2_area_bottom_pane_g

0xa193,	// (0x0000f991) vkb2_top_cell_left_pane_ParamLimits

0xa193,	// (0x0000f991) vkb2_top_cell_left_pane

0x7e71,	// (0x0000d66f) vkb2_top_entry_pane_g1_ParamLimits

0x7e71,	// (0x0000d66f) vkb2_top_entry_pane_g1

0x7e7f,	// (0x0000d67d) vkb2_top_entry_pane_t1_ParamLimits

0x7e7f,	// (0x0000d67d) vkb2_top_entry_pane_t1

0x2d08,	// (0x00008506) vkb2_top_entry_pane_t2_ParamLimits

0x2d08,	// (0x00008506) vkb2_top_entry_pane_t2

0x2d3a,	// (0x00008538) vkb2_top_entry_pane_t3_ParamLimits

0x2d3a,	// (0x00008538) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x000155a0) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x000155a0) vkb2_top_entry_pane_t

0xd5ff,	// (0x00012dfd) vkb2_top_grid_right_pane_g1_ParamLimits

0xd5ff,	// (0x00012dfd) vkb2_top_grid_right_pane_g1

0xa1f6,	// (0x0000f9f4) vkb2_top_grid_right_pane_g2_ParamLimits

0xa1f6,	// (0x0000f9f4) vkb2_top_grid_right_pane_g2

0xa20e,	// (0x0000fa0c) vkb2_top_grid_right_pane_g3_ParamLimits

0xa20e,	// (0x0000fa0c) vkb2_top_grid_right_pane_g3

0xd615,	// (0x00012e13) vkb2_top_grid_right_pane_g4_ParamLimits

0xd615,	// (0x00012e13) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x000155a7) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x000155a7) vkb2_top_grid_right_pane_g

0xa23c,	// (0x0000fa3a) vkb2_top_cell_left_pane_g1

0xa253,	// (0x0000fa51) vkb2_cell_keypad_pane_g1_ParamLimits

0xa253,	// (0x0000fa51) vkb2_cell_keypad_pane_g1

0x2dfe,	// (0x000085fc) vkb2_cell_keypad_pane_t1_ParamLimits

0x2dfe,	// (0x000085fc) vkb2_cell_keypad_pane_t1

0xa261,	// (0x0000fa5f) vkb2_cell_bottom_grid_pane_ParamLimits

0xa261,	// (0x0000fa5f) vkb2_cell_bottom_grid_pane

0xa29a,	// (0x0000fa98) vkb2_cell_bottom_grid_pane_g1

0x7870,	// (0x0000d06e) aid_call2_pane_cp02

0x7878,	// (0x0000d076) aid_call_pane_cp02

0x7880,	// (0x0000d07e) clock_digital_number_pane_cp10

0x7888,	// (0x0000d086) clock_digital_number_pane_cp11

0x7890,	// (0x0000d08e) clock_digital_number_pane_cp12

0x7898,	// (0x0000d096) clock_digital_number_pane_cp13

0x78a0,	// (0x0000d09e) clock_digital_separator_pane_cp10

0xbbe4,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g1

0xbbe4,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g2

0x78a8,	// (0x0000d0a6) popup_clock_digital_analogue_window_cp2_g3

0xbbe4,	// (0x000113e2) popup_clock_digital_analogue_window_cp2_g4

0x78a8,	// (0x0000d0a6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001555c) popup_clock_digital_analogue_window_cp2_g

0x78b0,	// (0x0000d0ae) popup_clock_digital_analogue_window_cp2_t1

0x78be,	// (0x0000d0bc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x00015567) popup_clock_digital_analogue_window_cp2_t

0x0459,	// (0x00005c57) clock_digital_number_pane_cp10_g1

0x0459,	// (0x00005c57) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001534a) clock_digital_number_pane_cp10_g

0x0459,	// (0x00005c57) clock_digital_separator_pane_cp10_g1

0x0459,	// (0x00005c57) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001534a) clock_digital_separator_pane_cp10_g

0x241f,	// (0x00007c1d) uniindi_top_pane_g3

0x2430,	// (0x00007c2e) uniindi_top_pane_g4

0xa086,	// (0x0000f884) vkb2_row_keypad_pane_ParamLimits

0xa086,	// (0x0000f884) vkb2_row_keypad_pane

0xa2b6,	// (0x0000fab4) vkb2_cell_t_keypad_pane_ParamLimits

0xa2b6,	// (0x0000fab4) vkb2_cell_t_keypad_pane

0xa2c3,	// (0x0000fac1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa2c3,	// (0x0000fac1) vkb2_cell_t_keypad_pane_cp08

0xa2d3,	// (0x0000fad1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa2d3,	// (0x0000fad1) vkb2_cell_t_keypad_pane_cp09

0xa2e4,	// (0x0000fae2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa2e4,	// (0x0000fae2) vkb2_cell_t_keypad_pane_cp01

0xa2f4,	// (0x0000faf2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa2f4,	// (0x0000faf2) vkb2_cell_t_keypad_pane_cp02

0xa304,	// (0x0000fb02) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa304,	// (0x0000fb02) vkb2_cell_t_keypad_pane_cp03

0xa314,	// (0x0000fb12) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa314,	// (0x0000fb12) vkb2_cell_t_keypad_pane_cp04

0xa324,	// (0x0000fb22) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa324,	// (0x0000fb22) vkb2_cell_t_keypad_pane_cp05

0xa334,	// (0x0000fb32) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa334,	// (0x0000fb32) vkb2_cell_t_keypad_pane_cp06

0xa344,	// (0x0000fb42) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa344,	// (0x0000fb42) vkb2_cell_t_keypad_pane_cp07

0xa354,	// (0x0000fb52) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa354,	// (0x0000fb52) vkb2_cell_t_keypad_pane_cp10

0x9b74,	// (0x0000f372) vkb2_cell_t_keypad_pane_g1

0x2f1d,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1

0x8c29,	// (0x0000e427) popup_grid_graphic2_window

0x7ee4,	// (0x0000d6e2) aid_size_cell_graphic2_ParamLimits

0x7ee4,	// (0x0000d6e2) aid_size_cell_graphic2

0xdf46,	// (0x00013744) bg_popup_window_pane_cp21_ParamLimits

0xdf46,	// (0x00013744) bg_popup_window_pane_cp21

0x7f16,	// (0x0000d714) graphic2_pages_pane_ParamLimits

0x7f16,	// (0x0000d714) graphic2_pages_pane

0x7f5f,	// (0x0000d75d) grid_graphic2_control_pane_ParamLimits

0x7f5f,	// (0x0000d75d) grid_graphic2_control_pane

0x7f8d,	// (0x0000d78b) grid_graphic2_pane_ParamLimits

0x7f8d,	// (0x0000d78b) grid_graphic2_pane

0x7fec,	// (0x0000d7ea) cell_graphic2_pane

0xa542,	// (0x0000fd40) main_comp_mode_pane

0x1bea,	// (0x000073e8) list_ai3_gene_pane_ParamLimits

0x755c,	// (0x0000cd5a) bg_popup_window_pane_cp19_ParamLimits

0x1fb7,	// (0x000077b5) bg_touch_area_indi_pane_ParamLimits

0x1fb7,	// (0x000077b5) bg_touch_area_indi_pane

0x1fcd,	// (0x000077cb) bg_touch_area_indi_pane_cp01_ParamLimits

0x1fcd,	// (0x000077cb) bg_touch_area_indi_pane_cp01

0x1fe3,	// (0x000077e1) bg_touch_area_indi_pane_cp02_ParamLimits

0x1fe3,	// (0x000077e1) bg_touch_area_indi_pane_cp02

0x1ff9,	// (0x000077f7) bg_touch_area_indi_pane_cp03_ParamLimits

0x1ff9,	// (0x000077f7) bg_touch_area_indi_pane_cp03

0x200f,	// (0x0000780d) popup_slider_window_g1_ParamLimits

0x202b,	// (0x00007829) popup_slider_window_g2_ParamLimits

0x2047,	// (0x00007845) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x000154f1) popup_slider_window_g_ParamLimits

0x20a3,	// (0x000078a1) popup_slider_window_t1_ParamLimits

0x2115,	// (0x00007913) small_volume_slider_vertical_pane_ParamLimits

0x7fec,	// (0x0000d7ea) cell_graphic2_pane_ParamLimits

0x8035,	// (0x0000d833) bg_button_pane_cp10_ParamLimits

0x8035,	// (0x0000d833) bg_button_pane_cp10

0x8046,	// (0x0000d844) bg_button_pane_cp11_ParamLimits

0x8046,	// (0x0000d844) bg_button_pane_cp11

0x8057,	// (0x0000d855) graphic2_pages_pane_g1_ParamLimits

0x8057,	// (0x0000d855) graphic2_pages_pane_g1

0x8072,	// (0x0000d870) graphic2_pages_pane_g2_ParamLimits

0x8072,	// (0x0000d870) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x000155b5) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x000155b5) graphic2_pages_pane_g

0x808a,	// (0x0000d888) graphic2_pages_pane_t1_ParamLimits

0x808a,	// (0x0000d888) graphic2_pages_pane_t1

0x80a2,	// (0x0000d8a0) cell_graphic2_control_pane_ParamLimits

0x80a2,	// (0x0000d8a0) cell_graphic2_control_pane

0x80bc,	// (0x0000d8ba) cell_graphic2_pane_g1_ParamLimits

0x80bc,	// (0x0000d8ba) cell_graphic2_pane_g1

0x06f6,	// (0x00005ef4) cell_graphic2_pane_g2_ParamLimits

0x06f6,	// (0x00005ef4) cell_graphic2_pane_g2

0x80c9,	// (0x0000d8c7) cell_graphic2_pane_g3_ParamLimits

0x80c9,	// (0x0000d8c7) cell_graphic2_pane_g3

0x0703,	// (0x00005f01) cell_graphic2_pane_g4_ParamLimits

0x0703,	// (0x00005f01) cell_graphic2_pane_g4

0x80d6,	// (0x0000d8d4) cell_graphic2_pane_g5_ParamLimits

0x80d6,	// (0x0000d8d4) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x000155ba) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x000155ba) cell_graphic2_pane_g

0x80f6,	// (0x0000d8f4) cell_graphic2_pane_t1_ParamLimits

0x80f6,	// (0x0000d8f4) cell_graphic2_pane_t1

0xe52e,	// (0x00013d2c) grid_highlight_pane_cp11_ParamLimits

0xe52e,	// (0x00013d2c) grid_highlight_pane_cp11

0xb429,	// (0x00010c27) bg_button_pane_cp05

0x810d,	// (0x0000d90b) cell_graphic2_control_pane_g1

0x0459,	// (0x00005c57) bg_touch_area_indi_pane_g1

0x3137,	// (0x00008935) aid_cmod_rocker_key_size

0x3141,	// (0x0000893f) aid_cmode_itu_key_size

0x314b,	// (0x00008949) main_cmode_video_pane

0x3153,	// (0x00008951) main_comp_mode_itu_pane

0x315d,	// (0x0000895b) main_comp_mode_rocker_pane

0x3165,	// (0x00008963) cell_cmode_rocker_pane_ParamLimits

0x3165,	// (0x00008963) cell_cmode_rocker_pane

0x3177,	// (0x00008975) cell_cmode_itu_pane_ParamLimits

0x3177,	// (0x00008975) cell_cmode_itu_pane

0xb429,	// (0x00010c27) bg_button_pane_cp06_ParamLimits

0xb429,	// (0x00010c27) bg_button_pane_cp06

0x0899,	// (0x00006097) cell_cmode_rocker_pane_g1_ParamLimits

0x0899,	// (0x00006097) cell_cmode_rocker_pane_g1

0x2289,	// (0x00007a87) cell_cmode_rocker_pane_g2_ParamLimits

0x2289,	// (0x00007a87) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x000155c5) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x000155c5) cell_cmode_rocker_pane_g

0xa542,	// (0x0000fd40) bg_button_pane_cp07

0x318c,	// (0x0000898a) cell_cmode_itu_pane_g1

0x3195,	// (0x00008993) cell_cmode_itu_pane_t1

0x31a3,	// (0x000089a1) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x000155ca) cell_cmode_itu_pane_t

0x24a1,	// (0x00007c9f) aid_touch_ctrl_left

0x24a9,	// (0x00007ca7) aid_touch_ctrl_right

0xa542,	// (0x0000fd40) compa_mode_pane

0x811a,	// (0x0000d918) aid_cmod_rocker_key_size_cp

0x8124,	// (0x0000d922) aid_cmode_itu_key_size_cp

0x31c5,	// (0x000089c3) compa_mode_pane_g1

0x31cd,	// (0x000089cb) compa_mode_pane_g2

0x31d5,	// (0x000089d3) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x000155cf) compa_mode_pane_g

0x812e,	// (0x0000d92c) main_comp_mode_itu_pane_cp

0x8138,	// (0x0000d936) main_comp_mode_rocker_pane_cp

0x8142,	// (0x0000d940) cell_cmode_itu_pane_cp_ParamLimits

0x8142,	// (0x0000d940) cell_cmode_itu_pane_cp

0x8157,	// (0x0000d955) cell_cmode_rocker_pane_cp_ParamLimits

0x8157,	// (0x0000d955) cell_cmode_rocker_pane_cp

0xb429,	// (0x00010c27) bg_button_pane_cp06_cp_ParamLimits

0xb429,	// (0x00010c27) bg_button_pane_cp06_cp

0x0899,	// (0x00006097) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0899,	// (0x00006097) cell_cmode_rocker_pane_g1_cp

0x0459,	// (0x00005c57) cell_cmode_rocker_pane_g2_cp

0xa542,	// (0x0000fd40) bg_button_pane_cp07_cp

0x8169,	// (0x0000d967) cell_cmode_itu_pane_g1_cp

0x8172,	// (0x0000d970) cell_cmode_itu_pane_t1_cp

0x8180,	// (0x0000d97e) cell_cmode_itu_pane_t2_cp

0x6a76,	// (0x0000c274) settings_code_pane_cp2

0xa713,	// (0x0000ff11) bg_popup_window_pane_cp3_ParamLimits

0xabbe,	// (0x000103bc) heading_pane_cp3_ParamLimits

0xabca,	// (0x000103c8) listscroll_popup_graphic_pane_ParamLimits

0x992f,	// (0x0000f12d) fep_hwr_aid_pane_ParamLimits

0x9d8f,	// (0x0000f58d) aid_touch_sctrl_top_ParamLimits

0x9daa,	// (0x0000f5a8) sctrl_sk_top_pane_g1_ParamLimits

0x9b74,	// (0x0000f372) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001550a) sctrl_sk_top_pane_g_ParamLimits

0x9db7,	// (0x0000f5b5) sctrl_sk_top_pane_t1_ParamLimits

0x9d8f,	// (0x0000f58d) aid_touch_sctrl_bottom_ParamLimits

0x9db7,	// (0x0000f5b5) sctrl_sk_bottom_pane_t1_ParamLimits

0x23eb,	// (0x00007be9) aid_area_touch_clock

0xd45b,	// (0x00012c59) aid_vkb2_area_top_pane_cell_ParamLimits

0xd45b,	// (0x00012c59) aid_vkb2_area_top_pane_cell

0xd506,	// (0x00012d04) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd506,	// (0x00012d04) aid_vkb2_area_bottom_pane_cell

0x2cc0,	// (0x000084be) popup_char_count_window

0x3239,	// (0x00008a37) popup_char_count_window_g1

0x3242,	// (0x00008a40) popup_char_count_window_g2

0x324b,	// (0x00008a49) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x000155d6) popup_char_count_window_g

0x3254,	// (0x00008a52) popup_char_count_window_t1

0x9e6b,	// (0x0000f669) popup_fep_char_preview_window_ParamLimits

0x9e6b,	// (0x0000f669) popup_fep_char_preview_window

0xd47b,	// (0x00012c79) vkb2_top_candi_pane_ParamLimits

0xd47b,	// (0x00012c79) vkb2_top_candi_pane

0x818e,	// (0x0000d98c) cell_vkb2_top_candi_pane_ParamLimits

0x818e,	// (0x0000d98c) cell_vkb2_top_candi_pane

0xa369,	// (0x0000fb67) bg_popup_fep_char_preview_window_ParamLimits

0xa369,	// (0x0000fb67) bg_popup_fep_char_preview_window

0xa377,	// (0x0000fb75) popup_fep_char_preview_window_t1_ParamLimits

0xa377,	// (0x0000fb75) popup_fep_char_preview_window_t1

0x32e5,	// (0x00008ae3) bg_popup_fep_char_preview_window_g1

0x32dd,	// (0x00008adb) bg_popup_fep_char_preview_window_g2

0x32d5,	// (0x00008ad3) bg_popup_fep_char_preview_window_g3

0x330d,	// (0x00008b0b) bg_popup_fep_char_preview_window_g4

0x3305,	// (0x00008b03) bg_popup_fep_char_preview_window_g5

0xa3b1,	// (0x0000fbaf) bg_popup_fep_char_preview_window_g6

0x32f5,	// (0x00008af3) bg_popup_fep_char_preview_window_g7

0x32ed,	// (0x00008aeb) bg_popup_fep_char_preview_window_g8

0x3315,	// (0x00008b13) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x000155dd) bg_popup_fep_char_preview_window_g

0x9b74,	// (0x0000f372) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9b74,	// (0x0000f372) cell_vkb2_top_candi_pane_g1

0x9b82,	// (0x0000f380) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9b82,	// (0x0000f380) cell_vkb2_top_candi_pane_g2

0x333e,	// (0x00008b3c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x333e,	// (0x00008b3c) cell_vkb2_top_candi_pane_g3

0xa3b9,	// (0x0000fbb7) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa3b9,	// (0x0000fbb7) cell_vkb2_top_candi_pane_g4

0x0c11,	// (0x0000640f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x0c11,	// (0x0000640f) cell_vkb2_top_candi_pane_g5

0xa3da,	// (0x0000fbd8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa3da,	// (0x0000fbd8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x000155f0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x000155f0) cell_vkb2_top_candi_pane_g

0xa3e8,	// (0x0000fbe6) cell_vkb2_top_candi_pane_t1

0x9747,	// (0x0000ef45) aid_size_touch_slider_mark_ParamLimits

0x9747,	// (0x0000ef45) aid_size_touch_slider_mark

0x7f4a,	// (0x0000d748) grid_graphic2_catg_pane_ParamLimits

0x7f4a,	// (0x0000d748) grid_graphic2_catg_pane

0x7fc1,	// (0x0000d7bf) popup_grid_graphic2_window_t1_ParamLimits

0x7fc1,	// (0x0000d7bf) popup_grid_graphic2_window_t1

0x7fd6,	// (0x0000d7d4) popup_grid_graphic2_window_t2_ParamLimits

0x7fd6,	// (0x0000d7d4) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x000155b0) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x000155b0) popup_grid_graphic2_window_t

0xb429,	// (0x00010c27) bg_button_pane_cp05_ParamLimits

0x810d,	// (0x0000d90b) cell_graphic2_control_pane_g1_ParamLimits

0x2467,	// (0x00007c65) cell_graphic2_catg_pane_ParamLimits

0x2467,	// (0x00007c65) cell_graphic2_catg_pane

0xa542,	// (0x0000fd40) bg_button_pane_cp12

0x81d8,	// (0x0000d9d6) cell_graphic2_catg_pane_g1

0x23b7,	// (0x00007bb5) cell_tb_ext_pane_t1_ParamLimits

0xa1b3,	// (0x0000f9b1) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa1b3,	// (0x0000f9b1) vkb2_top_cell_right_narrow_pane

0xa1cb,	// (0x0000f9c9) vkb2_top_cell_right_wide_pane_ParamLimits

0xa1cb,	// (0x0000f9c9) vkb2_top_cell_right_wide_pane

0x9921,	// (0x0000f11f) bg_vkb2_func_pane_ParamLimits

0x9921,	// (0x0000f11f) bg_vkb2_func_pane

0xa23c,	// (0x0000fa3a) vkb2_top_cell_left_pane_g1_ParamLimits

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp03

0xa29a,	// (0x0000fa98) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd9a5,	// (0x000131a3) bg_vkb2_func_pane_g1

0xd9ad,	// (0x000131ab) bg_vkb2_func_pane_g2

0xd9bd,	// (0x000131bb) bg_vkb2_func_pane_g3

0xd9b5,	// (0x000131b3) bg_vkb2_func_pane_g4

0xd9c5,	// (0x000131c3) bg_vkb2_func_pane_g5

0xd9cd,	// (0x000131cb) bg_vkb2_func_pane_g6

0xd9d5,	// (0x000131d3) bg_vkb2_func_pane_g7

0xd9dd,	// (0x000131db) bg_vkb2_func_pane_g8

0xd99d,	// (0x0001319b) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x000155fd) bg_vkb2_func_pane_g

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp01

0xa23c,	// (0x0000fa3a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa23c,	// (0x0000fa3a) vkb2_top_cell_right_wide_pane_g1

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9921,	// (0x0000f11f) bg_vkb2_fuc_pane_cp02

0xa29a,	// (0x0000fa98) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa29a,	// (0x0000fa98) vkb2_top_cell_right_narrow_pane_g1

0x74aa,	// (0x0000cca8) aid_touch_area_decrease_ParamLimits

0x74aa,	// (0x0000cca8) aid_touch_area_decrease

0x74d8,	// (0x0000ccd6) aid_touch_area_increase_ParamLimits

0x74d8,	// (0x0000ccd6) aid_touch_area_increase

0x7500,	// (0x0000ccfe) aid_touch_area_mute_ParamLimits

0x7500,	// (0x0000ccfe) aid_touch_area_mute

0x7528,	// (0x0000cd26) aid_touch_area_slider_ParamLimits

0x7528,	// (0x0000cd26) aid_touch_area_slider

0x7568,	// (0x0000cd66) popup_slider_window_g4_ParamLimits

0x7568,	// (0x0000cd66) popup_slider_window_g4

0x7590,	// (0x0000cd8e) popup_slider_window_g5_ParamLimits

0x7590,	// (0x0000cd8e) popup_slider_window_g5

0x75c4,	// (0x0000cdc2) popup_slider_window_g6_ParamLimits

0x75c4,	// (0x0000cdc2) popup_slider_window_g6

0x20cf,	// (0x000078cd) popup_slider_window_t2_ParamLimits

0x20cf,	// (0x000078cd) popup_slider_window_t2

0x0001,

0xfd00,	// (0x000154fe) popup_slider_window_t_ParamLimits

0xfd00,	// (0x000154fe) popup_slider_window_t

0x75e0,	// (0x0000cdde) slider_pane_ParamLimits

0x75e0,	// (0x0000cdde) slider_pane

0x3390,	// (0x00008b8e) slider_pane_g1_ParamLimits

0x3390,	// (0x00008b8e) slider_pane_g1

0x33a4,	// (0x00008ba2) slider_pane_g2_ParamLimits

0x33a4,	// (0x00008ba2) slider_pane_g2

0x33ba,	// (0x00008bb8) slider_pane_g3_ParamLimits

0x33ba,	// (0x00008bb8) slider_pane_g3

0x0003,

0xfe12,	// (0x00015610) slider_pane_g_ParamLimits

0xfe12,	// (0x00015610) slider_pane_g

0x60e6,	// (0x0000b8e4) popup_tb_float_extension_window_ParamLimits

0x60e6,	// (0x0000b8e4) popup_tb_float_extension_window

0x33e6,	// (0x00008be4) aid_size_cell_tb_float_ext

0xa542,	// (0x0000fd40) bg_popup_sub_window_cp28

0x33f1,	// (0x00008bef) grid_tb_float_ext_pane

0x33f9,	// (0x00008bf7) cell_tb_float_ext_pane_ParamLimits

0x33f9,	// (0x00008bf7) cell_tb_float_ext_pane

0x3411,	// (0x00008c0f) cell_tb_float_ext_pane_g1

0x341a,	// (0x00008c18) grid_highlight_pane_cp12

0xd291,	// (0x00012a8f) cell_last_hwr_side_pane_ParamLimits

0xd291,	// (0x00012a8f) cell_last_hwr_side_pane

0x0459,	// (0x00005c57) cell_last_hwr_side_pane_g1

0x3423,	// (0x00008c21) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x00015619) cell_last_hwr_side_pane_g

0xd5da,	// (0x00012dd8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd5da,	// (0x00012dd8) vkb2_area_bottom_space_btn_pane

0x9b74,	// (0x0000f372) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2f1d,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa3e8,	// (0x0000fbe6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa3fe,	// (0x0000fbfc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa3fe,	// (0x0000fbfc) vkb2_area_bottom_space_btn_pane_g1

0xa434,	// (0x0000fc32) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa434,	// (0x0000fc32) vkb2_area_bottom_space_btn_pane_g2

0xa46a,	// (0x0000fc68) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa46a,	// (0x0000fc68) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0001561e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0001561e) vkb2_area_bottom_space_btn_pane_g

0x99de,	// (0x0000f1dc) cel_fep_hwr_func_pane_ParamLimits

0x99de,	// (0x0000f1dc) cel_fep_hwr_func_pane

0xd266,	// (0x00012a64) cell_hwr_side_button_pane_ParamLimits

0xd266,	// (0x00012a64) cell_hwr_side_button_pane

0x23eb,	// (0x00007be9) aid_area_touch_clock_ParamLimits

0xa9e6,	// (0x000101e4) bg_uniindi_top_pane_ParamLimits

0x23fd,	// (0x00007bfb) uniindi_top_pane_g1_ParamLimits

0x2413,	// (0x00007c11) uniindi_top_pane_g2_ParamLimits

0x241f,	// (0x00007c1d) uniindi_top_pane_g3_ParamLimits

0x2430,	// (0x00007c2e) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x00015536) uniindi_top_pane_g_ParamLimits

0x243d,	// (0x00007c3b) uniindi_top_pane_t1_ParamLimits

0xa9e6,	// (0x000101e4) bg_vkb2_func_pane_cp01_ParamLimits

0xa9e6,	// (0x000101e4) bg_vkb2_func_pane_cp01

0x34de,	// (0x00008cdc) cel_fep_hwr_func_pane_g1_ParamLimits

0x34de,	// (0x00008cdc) cel_fep_hwr_func_pane_g1

0xa9e6,	// (0x000101e4) bg_vkb2_func_pane_cp02_ParamLimits

0xa9e6,	// (0x000101e4) bg_vkb2_func_pane_cp02

0x34de,	// (0x00008cdc) cell_hwr_side_button_pane_g1_ParamLimits

0x34de,	// (0x00008cdc) cell_hwr_side_button_pane_g1

0xd8c1,	// (0x000130bf) status_pane_g4_ParamLimits

0xd8c1,	// (0x000130bf) status_pane_g4

0xd8d9,	// (0x000130d7) status_pane_t1

0x024b,	// (0x00005a49) form2_midp_gauge_slider_cont_pane

0x0253,	// (0x00005a51) form2_midp_gauge_slider_pane_t1_ParamLimits

0x6d8e,	// (0x0000c58c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6da0,	// (0x0000c59e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000152fd) form2_midp_gauge_slider_pane_t_ParamLimits

0x0289,	// (0x00005a87) form2_midp_slider_pane_ParamLimits

0x9e2b,	// (0x0000f629) aid_size_cell_func_vkb2_ParamLimits

0x9e2b,	// (0x0000f629) aid_size_cell_func_vkb2

0x33d2,	// (0x00008bd0) slider_pane_g4_ParamLimits

0x33d2,	// (0x00008bd0) slider_pane_g4

0xd62b,	// (0x00012e29) form2_midp_gauge_slider_pane_t2_cp01

0xd639,	// (0x00012e37) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd639,	// (0x00012e37) form2_midp_gauge_slider_pane_t3_cp01

0xa4db,	// (0x0000fcd9) form2_midp_slider_pane_cp01

0xa542,	// (0x0000fd40) navi_smil_pane

0x354b,	// (0x00008d49) navi_smil_pane_g1

0x3553,	// (0x00008d51) navi_smil_pane_t1

0x3520,	// (0x00008d1e) form2_midp_slider_pane_g1

0x3529,	// (0x00008d27) form2_midp_slider_pane_g2

0x3531,	// (0x00008d2f) form2_midp_slider_pane_g3

0x3520,	// (0x00008d1e) form2_midp_slider_pane_g4

0x820c,	// (0x0000da0a) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x00015627) form2_midp_slider_pane_g

0xa4a0,	// (0x0000fc9e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa4a0,	// (0x0000fc9e) vkb2_area_bottom_space_btn_pane_g4

0x6288,	// (0x0000ba86) lc0_navi_pane_ParamLimits

0x6288,	// (0x0000ba86) lc0_navi_pane

0x62f2,	// (0x0000baf0) lc0_stat_indi_pane_ParamLimits

0x62f2,	// (0x0000baf0) lc0_stat_indi_pane

0x6307,	// (0x0000bb05) ls0_title_pane_ParamLimits

0x6307,	// (0x0000bb05) ls0_title_pane

0xb429,	// (0x00010c27) bg_popup_sub_pane_cp14_ParamLimits

0x23d2,	// (0x00007bd0) list_uniindi_pane_ParamLimits

0x23de,	// (0x00007bdc) uniindi_top_pane_ParamLimits

0x2479,	// (0x00007c77) list_single_uniindi_pane_g1_ParamLimits

0x248c,	// (0x00007c8a) list_single_uniindi_pane_t1_ParamLimits

0xd656,	// (0x00012e54) lc0_stat_clock_pane_ParamLimits

0xd656,	// (0x00012e54) lc0_stat_clock_pane

0x822f,	// (0x0000da2d) lc0_stat_indi_pane_g1_ParamLimits

0x822f,	// (0x0000da2d) lc0_stat_indi_pane_g1

0x8222,	// (0x0000da20) lc0_stat_indi_pane_g2_ParamLimits

0x8222,	// (0x0000da20) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x00015632) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x00015632) lc0_stat_indi_pane_g

0xd663,	// (0x00012e61) lc0_uni_indicator_pane_ParamLimits

0xd663,	// (0x00012e61) lc0_uni_indicator_pane

0x3595,	// (0x00008d93) ls0_title_pane_g1_ParamLimits

0x3595,	// (0x00008d93) ls0_title_pane_g1

0x8249,	// (0x0000da47) ls0_title_pane_t1_ParamLimits

0x8249,	// (0x0000da47) ls0_title_pane_t1

0xd670,	// (0x00012e6e) lc0_uni_indicator_pane_g1_ParamLimits

0xd670,	// (0x00012e6e) lc0_uni_indicator_pane_g1

0x35f1,	// (0x00008def) lc0_stat_clock_pane_t1

0xa542,	// (0x0000fd40) main_ai5_pane

0x35ff,	// (0x00008dfd) ai5_sk_pane_ParamLimits

0x35ff,	// (0x00008dfd) ai5_sk_pane

0x828c,	// (0x0000da8a) cell_ai5_widget_pane_ParamLimits

0x828c,	// (0x0000da8a) cell_ai5_widget_pane

0x82f3,	// (0x0000daf1) aid_size_cell_widget_grid

0x3679,	// (0x00008e77) bg_ai5_widget_pane_ParamLimits

0x3679,	// (0x00008e77) bg_ai5_widget_pane

0x8321,	// (0x0000db1f) cell_ai5_widget_pane_g2

0x8331,	// (0x0000db2f) cell_ai5_widget_pane_g3

0x8345,	// (0x0000db43) cell_ai5_widget_pane_g4

0x8351,	// (0x0000db4f) cell_ai5_widget_pane_g5

0x835d,	// (0x0000db5b) cell_ai5_widget_pane_g6

0x8369,	// (0x0000db67) cell_ai5_widget_pane_g7

0x83b1,	// (0x0000dbaf) cell_ai5_widget_pane_t1_ParamLimits

0x83b1,	// (0x0000dbaf) cell_ai5_widget_pane_t1

0x83ce,	// (0x0000dbcc) cell_ai5_widget_pane_t2_ParamLimits

0x83ce,	// (0x0000dbcc) cell_ai5_widget_pane_t2

0x83e6,	// (0x0000dbe4) cell_ai5_widget_pane_t3_ParamLimits

0x83e6,	// (0x0000dbe4) cell_ai5_widget_pane_t3

0x83fe,	// (0x0000dbfc) cell_ai5_widget_pane_t4_ParamLimits

0x83fe,	// (0x0000dbfc) cell_ai5_widget_pane_t4

0x8418,	// (0x0000dc16) cell_ai5_widget_pane_t5_ParamLimits

0x8418,	// (0x0000dc16) cell_ai5_widget_pane_t5

0x37b7,	// (0x00008fb5) cell_ai5_widget_pane_t6_ParamLimits

0x37b7,	// (0x00008fb5) cell_ai5_widget_pane_t6

0x37c9,	// (0x00008fc7) cell_ai5_widget_pane_t7_ParamLimits

0x37c9,	// (0x00008fc7) cell_ai5_widget_pane_t7

0x8437,	// (0x0000dc35) cell_ai5_widget_pane_t8_ParamLimits

0x8437,	// (0x0000dc35) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0001564c) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0001564c) cell_ai5_widget_pane_t

0x847f,	// (0x0000dc7d) grid_ai5_widget_pane

0xb429,	// (0x00010c27) highlight_cell_ai5_widget_pane_ParamLimits

0xb429,	// (0x00010c27) highlight_cell_ai5_widget_pane

0x8493,	// (0x0000dc91) ai5_sk_left_pane

0x849d,	// (0x0000dc9b) ai5_sk_middle_pane

0x84a7,	// (0x0000dca5) ai5_sk_right_pane

0x385e,	// (0x0000905c) bg_ai5_widget_pane_g1_ParamLimits

0x385e,	// (0x0000905c) bg_ai5_widget_pane_g1

0x386a,	// (0x00009068) bg_ai5_widget_pane_g2_ParamLimits

0x386a,	// (0x00009068) bg_ai5_widget_pane_g2

0x3876,	// (0x00009074) bg_ai5_widget_pane_g3_ParamLimits

0x3876,	// (0x00009074) bg_ai5_widget_pane_g3

0x3882,	// (0x00009080) bg_ai5_widget_pane_g4_ParamLimits

0x3882,	// (0x00009080) bg_ai5_widget_pane_g4

0x388e,	// (0x0000908c) bg_ai5_widget_pane_g5_ParamLimits

0x388e,	// (0x0000908c) bg_ai5_widget_pane_g5

0x389a,	// (0x00009098) bg_ai5_widget_pane_g6_ParamLimits

0x389a,	// (0x00009098) bg_ai5_widget_pane_g6

0x38a6,	// (0x000090a4) bg_ai5_widget_pane_g7_ParamLimits

0x38a6,	// (0x000090a4) bg_ai5_widget_pane_g7

0x38b2,	// (0x000090b0) bg_ai5_widget_pane_g8_ParamLimits

0x38b2,	// (0x000090b0) bg_ai5_widget_pane_g8

0x38be,	// (0x000090bc) bg_ai5_widget_pane_g9_ParamLimits

0x38be,	// (0x000090bc) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x00015661) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x00015661) bg_ai5_widget_pane_g

0x84b1,	// (0x0000dcaf) cell_shortcut_ai5_widget_pane_ParamLimits

0x84b1,	// (0x0000dcaf) cell_shortcut_ai5_widget_pane

0xa7f3,	// (0x0000fff1) bg_cell_shortcut_ai5_widget_pane

0x84c3,	// (0x0000dcc1) cell_grid_ai5_widget_pane_g1

0x3901,	// (0x000090ff) highlight_cell_shortcut_ai5_widget_pane

0xd9a5,	// (0x000131a3) ai5_sk_left_pane_g1

0x3909,	// (0x00009107) ai5_sk_left_pane_g2

0x3911,	// (0x0000910f) ai5_sk_left_pane_g3

0x3919,	// (0x00009117) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x00015674) ai5_sk_left_pane_g

0x3921,	// (0x0000911f) ai5_sk_left_pane_t1

0xd9ad,	// (0x000131ab) ai5_sk_right_pane_g1

0x392f,	// (0x0000912d) ai5_sk_right_pane_g2

0x3937,	// (0x00009135) ai5_sk_right_pane_g3

0x393f,	// (0x0000913d) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0001567d) ai5_sk_right_pane_g

0x3947,	// (0x00009145) ai5_sk_right_pane_t1

0xd9ad,	// (0x000131ab) ai5_sk_middle_pane_g1

0xd9a5,	// (0x000131a3) ai5_sk_middle_pane_g2

0xd9c5,	// (0x000131c3) ai5_sk_middle_pane_g3

0x3937,	// (0x00009135) ai5_sk_middle_pane_g4

0x3911,	// (0x0000910f) ai5_sk_middle_pane_g5

0x3955,	// (0x00009153) ai5_sk_middle_pane_g6

0x84cc,	// (0x0000dcca) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x00015686) ai5_sk_middle_pane_g

0x6186,	// (0x0000b984) aid_touch_area_size_lc0_ParamLimits

0x6186,	// (0x0000b984) aid_touch_area_size_lc0

0x9ba3,	// (0x0000f3a1) cell_hwr_candidate_pane_t1_ParamLimits

0xd7f6,	// (0x00012ff4) aid_touch_navi_pane

0x63f3,	// (0x0000bbf1) status_dt_navi_pane_ParamLimits

0x63f3,	// (0x0000bbf1) status_dt_navi_pane

0x640b,	// (0x0000bc09) status_dt_sta_pane_ParamLimits

0x640b,	// (0x0000bc09) status_dt_sta_pane

0x84d4,	// (0x0000dcd2) dt_sta_controll_pane

0x84e1,	// (0x0000dcdf) dt_sta_indi_pane

0x84ee,	// (0x0000dcec) dt_sta_title_pane

0xa9e6,	// (0x000101e4) bg_dt_sta_indi_pane_ParamLimits

0xa9e6,	// (0x000101e4) bg_dt_sta_indi_pane

0x8500,	// (0x0000dcfe) dt_sta_battery_pane

0x8508,	// (0x0000dd06) dt_sta_indi_pane_g1

0x8511,	// (0x0000dd0f) dt_sta_indi_pane_g2

0x851a,	// (0x0000dd18) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x00015695) dt_sta_indi_pane_g

0x8523,	// (0x0000dd21) dt_sta_signal_pane

0xb429,	// (0x00010c27) bg_dt_sta_title_pane_ParamLimits

0xb429,	// (0x00010c27) bg_dt_sta_title_pane

0x852c,	// (0x0000dd2a) dt_sta_title_pane_g1

0x8534,	// (0x0000dd32) dt_sta_title_pane_t1_ParamLimits

0x8534,	// (0x0000dd32) dt_sta_title_pane_t1

0xa542,	// (0x0000fd40) bg_dt_sta_control_pane

0x8549,	// (0x0000dd47) dt_sta_controll_pane_g1

0x8552,	// (0x0000dd50) bg_dt_sta_title_pane_g1

0x855b,	// (0x0000dd59) bg_dt_sta_title_pane_g2

0x8564,	// (0x0000dd62) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0001569c) bg_dt_sta_title_pane_g

0x0459,	// (0x00005c57) bg_dt_sta_indi_pane_g1

0x856d,	// (0x0000dd6b) dt_sta_signal_pane_g1

0x8575,	// (0x0000dd73) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x000156a3) dt_sta_signal_pane_g

0x3a13,	// (0x00009211) dt_sta_battery_pane_g1

0x3a1c,	// (0x0000921a) dt_sta_battery_pane_t1

0x0459,	// (0x00005c57) bg_dt_sta_control_pane_g1

0xbcb4,	// (0x000114b2) fep_china_uni_eep_pane

0xbcbc,	// (0x000114ba) fep_china_uni_entry_pane_ParamLimits

0xbccc,	// (0x000114ca) popup_fep_china_uni_window_g1_ParamLimits

0xbcdc,	// (0x000114da) popup_fep_china_uni_window_g2_ParamLimits

0xbcdc,	// (0x000114da) popup_fep_china_uni_window_g2

0x0001,

0xf74e,	// (0x00014f4c) popup_fep_china_uni_window_g_ParamLimits

0xf74e,	// (0x00014f4c) popup_fep_china_uni_window_g

0x3a2b,	// (0x00009229) fep_china_uni_eep_pane_g1

0x3a33,	// (0x00009231) fep_china_uni_eep_pane_t1

0x3542,	// (0x00008d40) aid_touch_area_size_smil_player

0xd894,	// (0x00013092) lc0_clock_pane

0xd8cd,	// (0x000130cb) status_pane_g5_ParamLimits

0xd8cd,	// (0x000130cb) status_pane_g5

0x5d1a,	// (0x0000b518) popup_keymap_window

0xd8ad,	// (0x000130ab) status_icon_pane

0x8331,	// (0x0000db2f) cell_ai5_widget_pane_g3_ParamLimits

0x8345,	// (0x0000db43) cell_ai5_widget_pane_g4_ParamLimits

0x8351,	// (0x0000db4f) cell_ai5_widget_pane_g5_ParamLimits

0x8375,	// (0x0000db73) cell_ai5_widget_pane_g8_ParamLimits

0x8375,	// (0x0000db73) cell_ai5_widget_pane_g8

0x8389,	// (0x0000db87) cell_ai5_widget_pane_g9_ParamLimits

0x8389,	// (0x0000db87) cell_ai5_widget_pane_g9

0x839d,	// (0x0000db9b) cell_ai5_widget_pane_g10_ParamLimits

0x839d,	// (0x0000db9b) cell_ai5_widget_pane_g10

0x3a42,	// (0x00009240) status_icon_pane_g1

0xa542,	// (0x0000fd40) bg_popup_sub_pane_cp13

0x3a4a,	// (0x00009248) popup_keymap_window_t1

0x5a88,	// (0x0000b286) control_pane_g6_ParamLimits

0x5a88,	// (0x0000b286) control_pane_g6

0x5a7b,	// (0x0000b279) control_pane_g7_ParamLimits

0x5a7b,	// (0x0000b279) control_pane_g7

0x5a6e,	// (0x0000b26c) control_pane_g8_ParamLimits

0x5a6e,	// (0x0000b26c) control_pane_g8

0x84d4,	// (0x0000dcd2) dt_sta_controll_pane_ParamLimits

0x84e1,	// (0x0000dcdf) dt_sta_indi_pane_ParamLimits

0x84ee,	// (0x0000dcec) dt_sta_title_pane_ParamLimits

0xae45,	// (0x00010643) aid_size_touch_scroll_bar_cale

0x8d00,	// (0x0000e4fe) popup_discreet_window_ParamLimits

0x8d00,	// (0x0000e4fe) popup_discreet_window

0xcea5,	// (0x000126a3) popup_sk_window

0xdf46,	// (0x00013744) bg_popup_sub_pane_cp28_ParamLimits

0xdf46,	// (0x00013744) bg_popup_sub_pane_cp28

0x3a58,	// (0x00009256) popup_discreet_window_g1_ParamLimits

0x3a58,	// (0x00009256) popup_discreet_window_g1

0x3a78,	// (0x00009276) popup_discreet_window_t1_ParamLimits

0x3a78,	// (0x00009276) popup_discreet_window_t1

0x3a96,	// (0x00009294) popup_discreet_window_t2_ParamLimits

0x3a96,	// (0x00009294) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x000156a8) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x000156a8) popup_discreet_window_t

0xa510,	// (0x0000fd0e) popup_sk_window_g1

0xa519,	// (0x0000fd17) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x000156af) popup_sk_window_g

0x3b08,	// (0x00009306) popup_sk_window_t1

0x3afa,	// (0x000092f8) popup_sk_window_t1_copy1

0x8321,	// (0x0000db1f) cell_ai5_widget_pane_g2_ParamLimits

0x8449,	// (0x0000dc47) cell_ai5_widget_pane_t9_ParamLimits

0x8449,	// (0x0000dc47) cell_ai5_widget_pane_t9

0xa542,	// (0x0000fd40) main_fep_fshwr2_pane

0x857d,	// (0x0000dd7b) aid_fshwr2_btn_pane

0x8585,	// (0x0000dd83) aid_fshwr2_syb_pane

0x858d,	// (0x0000dd8b) aid_fshwr2_txt_pane

0x8595,	// (0x0000dd93) fshwr2_func_candi_pane

0x859d,	// (0x0000dd9b) fshwr2_hwr_syb_pane

0x85a5,	// (0x0000dda3) fshwr2_icf_pane

0xa542,	// (0x0000fd40) fshwr2_icf_bg_pane

0x85ad,	// (0x0000ddab) fshwr2_icf_pane_t1_ParamLimits

0x85ad,	// (0x0000ddab) fshwr2_icf_pane_t1

0x0459,	// (0x00005c57) fshwr2_func_candi_pane_g1

0x3b6f,	// (0x0000936d) fshwr2_func_candi_row_pane_ParamLimits

0x3b6f,	// (0x0000936d) fshwr2_func_candi_row_pane

0x85c5,	// (0x0000ddc3) cell_fshwr2_syb_pane_ParamLimits

0x85c5,	// (0x0000ddc3) cell_fshwr2_syb_pane

0x0899,	// (0x00006097) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0899,	// (0x00006097) fshwr2_hwr_syb_pane_g1

0xa542,	// (0x0000fd40) bg_popup_call_pane_cp01

0x3b97,	// (0x00009395) fshwr2_func_candi_cell_pane_ParamLimits

0x3b97,	// (0x00009395) fshwr2_func_candi_cell_pane

0x3bc2,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3bc2,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane

0x3bdc,	// (0x000093da) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x3bdc,	// (0x000093da) fshwr2_func_candi_cell_pane_g1

0x3bfc,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x3bfc,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1

0xa542,	// (0x0000fd40) bg_button_pane_cp08

0xc1b6,	// (0x000119b4) cell_fshwr2_syb_bg_pane

0x85dc,	// (0x0000ddda) cell_fshwr2_syb_bg_pane_g1

0x85e4,	// (0x0000dde2) cell_fshwr2_syb_bg_pane_t1

0xb429,	// (0x00010c27) main_tmo_pane

0x6873,	// (0x0000c071) uni_indicator_pane_g1_ParamLimits

0x6888,	// (0x0000c086) uni_indicator_pane_g2_ParamLimits

0x689e,	// (0x0000c09c) uni_indicator_pane_g3_ParamLimits

0xe8d2,	// (0x000140d0) uni_indicator_pane_g4_ParamLimits

0xe8d2,	// (0x000140d0) uni_indicator_pane_g4

0xe8e6,	// (0x000140e4) uni_indicator_pane_g5_ParamLimits

0xe8e6,	// (0x000140e4) uni_indicator_pane_g5

0xe8fa,	// (0x000140f8) uni_indicator_pane_g6_ParamLimits

0xe8fa,	// (0x000140f8) uni_indicator_pane_g6

0xf93f,	// (0x0001513d) uni_indicator_pane_g_ParamLimits

0x748e,	// (0x0000cc8c) popup_tmo_note_window_ParamLimits

0x748e,	// (0x0000cc8c) popup_tmo_note_window

0xa542,	// (0x0000fd40) fshwr2_bg_pane

0x3bed,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x3bed,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x000156b4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x000156b4) fshwr2_func_candi_cell_pane_g

0x0459,	// (0x00005c57) bg_popup_window_pane_cp01

0x3c26,	// (0x00009424) bg_popup_window_pane_g1_cp01

0x3c2f,	// (0x0000942d) bg_popup_window_pane_cp22_ParamLimits

0x3c2f,	// (0x0000942d) bg_popup_window_pane_cp22

0x3c3d,	// (0x0000943b) listscroll_tmo_link_pane_ParamLimits

0x3c3d,	// (0x0000943b) listscroll_tmo_link_pane

0x3c7d,	// (0x0000947b) popup_tmo_note_window_g1_ParamLimits

0x3c7d,	// (0x0000947b) popup_tmo_note_window_g1

0x3c8a,	// (0x00009488) tmo_note_info_pane_ParamLimits

0x3c8a,	// (0x00009488) tmo_note_info_pane

0x85f3,	// (0x0000ddf1) list_tmo_note_info_pane_g1_ParamLimits

0x85f3,	// (0x0000ddf1) list_tmo_note_info_pane_g1

0x3cbb,	// (0x000094b9) list_tmo_note_info_pane_g2_ParamLimits

0x3cbb,	// (0x000094b9) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x000156b9) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x000156b9) list_tmo_note_info_pane_g

0x3cd7,	// (0x000094d5) list_tmo_note_info_text_pane_ParamLimits

0x3cd7,	// (0x000094d5) list_tmo_note_info_text_pane

0x3d58,	// (0x00009556) list_tmo_link_pane

0x3d65,	// (0x00009563) scroll_pane_cp20

0x3d72,	// (0x00009570) list_single_tmo_link_pane_ParamLimits

0x3d72,	// (0x00009570) list_single_tmo_link_pane

0x3d82,	// (0x00009580) list_single_tmo_link_pane_t1

0x3d90,	// (0x0000958e) list_tmo_note_info_text_pane_t1_ParamLimits

0x3d90,	// (0x0000958e) list_tmo_note_info_text_pane_t1

0xb64f,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb64f,	// (0x00010e4d) aid_size_touch_scroll_bar_cp01

0x55fe,	// (0x0000adfc) aid_size_touch_slider_marker

0xce99,	// (0x00012697) popup_settings_window_ParamLimits

0xce99,	// (0x00012697) popup_settings_window

0xd6f1,	// (0x00012eef) popup_candi_list_indi_window

0xd7f6,	// (0x00012ff4) aid_touch_navi_pane_ParamLimits

0x9d63,	// (0x0000f561) rs_clock_indi_pane

0x9d6c,	// (0x0000f56a) sctrl_sk_bottom_pane_ParamLimits

0x9d7d,	// (0x0000f57b) sctrl_sk_top_pane_ParamLimits

0x9e85,	// (0x0000f683) popup_fep_tooltip_window

0x82f3,	// (0x0000daf1) aid_size_cell_widget_grid_ParamLimits

0x8315,	// (0x0000db13) cell_ai5_widget_pane_g1_ParamLimits

0x8315,	// (0x0000db13) cell_ai5_widget_pane_g1

0x835d,	// (0x0000db5b) cell_ai5_widget_pane_g6_ParamLimits

0x8369,	// (0x0000db67) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x00015637) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x00015637) cell_ai5_widget_pane_g

0x846d,	// (0x0000dc6b) cell_ai5_widget_pane_t10_ParamLimits

0x846d,	// (0x0000dc6b) cell_ai5_widget_pane_t10

0x847f,	// (0x0000dc7d) grid_ai5_widget_pane_ParamLimits

0x38ca,	// (0x000090c8) cell_contacts_ai5_widget_pane_ParamLimits

0x38ca,	// (0x000090c8) cell_contacts_ai5_widget_pane

0x3aab,	// (0x000092a9) popup_discreet_window_t3_ParamLimits

0x3aab,	// (0x000092a9) popup_discreet_window_t3

0x3b46,	// (0x00009344) popup_fshwr2_char_preview_window_ParamLimits

0x3b46,	// (0x00009344) popup_fshwr2_char_preview_window

0x860a,	// (0x0000de08) tmo_note_info_pane_t1

0x861f,	// (0x0000de1d) tmo_note_info_pane_t2

0x8634,	// (0x0000de32) tmo_note_info_pane_t3

0x3d34,	// (0x00009532) tmo_note_info_pane_t4

0x3d46,	// (0x00009544) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x000156be) tmo_note_info_pane_t

0x3d58,	// (0x00009556) list_tmo_link_pane_ParamLimits

0x3d65,	// (0x00009563) scroll_pane_cp20_ParamLimits

0xa542,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp01

0x3da9,	// (0x000095a7) popup_fshwr2_char_preview_window_t1

0x3db7,	// (0x000095b5) popup_candi_list_indi_window_g1

0x3dc0,	// (0x000095be) bg_cell_contacts_ai5_widget_pane

0x3dcc,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1

0x3de0,	// (0x000095de) cell_contacts_ai5_widget_pane_g2

0x3def,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x000156c9) cell_contacts_ai5_widget_pane_g

0x3e02,	// (0x00009600) cell_contacts_ai5_widget_pane_t1

0xb429,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01

0x86ac,	// (0x0000deaa) settings_container_pane

0xc1b6,	// (0x000119b4) listscroll_set_pane_copy1

0xf0f6,	// (0x000148f4) scroll_pane_cp121_copy1

0x3e86,	// (0x00009684) set_content_pane_copy1

0x3e8e,	// (0x0000968c) aid_height_set_list_copy1_ParamLimits

0x3e8e,	// (0x0000968c) aid_height_set_list_copy1

0xeb0a,	// (0x00014308) aid_size_parent_copy1_ParamLimits

0xeb0a,	// (0x00014308) aid_size_parent_copy1

0x86b8,	// (0x0000deb6) button_value_adjust_pane_cp6_copy1_ParamLimits

0x86b8,	// (0x0000deb6) button_value_adjust_pane_cp6_copy1

0xd685,	// (0x00012e83) list_highlight_pane_cp2_copy1_ParamLimits

0xd685,	// (0x00012e83) list_highlight_pane_cp2_copy1

0x86cc,	// (0x0000deca) list_set_pane_copy1_ParamLimits

0x86cc,	// (0x0000deca) list_set_pane_copy1

0x8649,	// (0x0000de47) main_pane_set_t1_copy1_ParamLimits

0x8649,	// (0x0000de47) main_pane_set_t1_copy1

0x8683,	// (0x0000de81) main_pane_set_t2_copy1_ParamLimits

0x8683,	// (0x0000de81) main_pane_set_t2_copy1

0x3f3c,	// (0x0000973a) main_pane_set_t3_copy1

0x3f4a,	// (0x00009748) main_pane_set_t4_copy1

0x86a0,	// (0x0000de9e) set_content_pane_g1_copy1_ParamLimits

0x86a0,	// (0x0000de9e) set_content_pane_g1_copy1

0x875a,	// (0x0000df58) setting_code_pane_copy1

0x3f60,	// (0x0000975e) setting_slider_graphic_pane_copy1

0x3f60,	// (0x0000975e) setting_slider_pane_copy1

0x3f68,	// (0x00009766) setting_text_pane_copy1

0x3f60,	// (0x0000975e) setting_volume_pane_copy1

0x8762,	// (0x0000df60) settings_code_pane_cp2_copy1

0x876a,	// (0x0000df68) settings_code_pane_cp_copy1_ParamLimits

0x876a,	// (0x0000df68) settings_code_pane_cp_copy1

0x877e,	// (0x0000df7c) volume_set_pane_copy1

0x8786,	// (0x0000df84) volume_set_pane_g10_copy1

0x878e,	// (0x0000df8c) volume_set_pane_g1_copy1

0x8796,	// (0x0000df94) volume_set_pane_g2_copy1

0x879e,	// (0x0000df9c) volume_set_pane_g3_copy1

0x87a6,	// (0x0000dfa4) volume_set_pane_g4_copy1

0x87ae,	// (0x0000dfac) volume_set_pane_g5_copy1

0x87b6,	// (0x0000dfb4) volume_set_pane_g6_copy1

0x87be,	// (0x0000dfbc) volume_set_pane_g7_copy1

0x87c6,	// (0x0000dfc4) volume_set_pane_g8_copy1

0x87ce,	// (0x0000dfcc) volume_set_pane_g9_copy1

0xa713,	// (0x0000ff11) bg_set_opt_pane_cp_copy1_ParamLimits

0xa713,	// (0x0000ff11) bg_set_opt_pane_cp_copy1

0xa9ac,	// (0x000101aa) setting_slider_pane_t1_copy1_ParamLimits

0xa9ac,	// (0x000101aa) setting_slider_pane_t1_copy1

0x3fe4,	// (0x000097e2) setting_slider_pane_t2_copy1_ParamLimits

0x3fe4,	// (0x000097e2) setting_slider_pane_t2_copy1

0x3ffd,	// (0x000097fb) setting_slider_pane_t3_copy1_ParamLimits

0x3ffd,	// (0x000097fb) setting_slider_pane_t3_copy1

0xa9c2,	// (0x000101c0) slider_set_pane_copy1_ParamLimits

0xa9c2,	// (0x000101c0) slider_set_pane_copy1

0xb54f,	// (0x00010d4d) set_opt_bg_pane_g1_copy2

0xb557,	// (0x00010d55) set_opt_bg_pane_g2_copy2

0x4014,	// (0x00009812) set_opt_bg_pane_g3_copy2

0xb567,	// (0x00010d65) set_opt_bg_pane_g4_copy2

0xb56f,	// (0x00010d6d) set_opt_bg_pane_g5_copy2

0xb577,	// (0x00010d75) set_opt_bg_pane_g6_copy2

0x87d6,	// (0x0000dfd4) set_opt_bg_pane_g7_copy2

0x4024,	// (0x00009822) set_opt_bg_pane_g8_copy2

0x402c,	// (0x0000982a) set_opt_bg_pane_g9_copy2

0xeac0,	// (0x000142be) aid_size_touch_slider_mark_copy1_ParamLimits

0xeac0,	// (0x000142be) aid_size_touch_slider_mark_copy1

0xeb1c,	// (0x0001431a) slider_set_pane_g1_copy1

0xeb25,	// (0x00014323) slider_set_pane_g2_copy1

0xec56,	// (0x00014454) slider_set_pane_g3_copy1_ParamLimits

0xec56,	// (0x00014454) slider_set_pane_g3_copy1

0xec6a,	// (0x00014468) slider_set_pane_g4_copy1_ParamLimits

0xec6a,	// (0x00014468) slider_set_pane_g4_copy1

0xec82,	// (0x00014480) slider_set_pane_g5_copy1_ParamLimits

0xec82,	// (0x00014480) slider_set_pane_g5_copy1

0xec56,	// (0x00014454) slider_set_pane_g6_copy1_ParamLimits

0xec56,	// (0x00014454) slider_set_pane_g6_copy1

0x87de,	// (0x0000dfdc) slider_set_pane_g7_copy1_ParamLimits

0x87de,	// (0x0000dfdc) slider_set_pane_g7_copy1

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp2_copy1

0xa755,	// (0x0000ff53) setting_slider_graphic_pane_g1_copy1

0x87f4,	// (0x0000dff2) setting_slider_graphic_pane_t1_copy1

0x8803,	// (0x0000e001) setting_slider_graphic_pane_t2_copy1

0x8812,	// (0x0000e010) slider_set_pane_cp_copy1

0x4078,	// (0x00009876) input_focus_pane_cp1_copy1

0x4081,	// (0x0000987f) list_set_text_pane_copy1

0x4089,	// (0x00009887) setting_text_pane_g1_copy1

0x4092,	// (0x00009890) set_text_pane_t1_copy1

0x4078,	// (0x00009876) input_focus_pane_cp2_copy1

0x4089,	// (0x00009887) setting_code_pane_g1_copy1

0x40ab,	// (0x000098a9) setting_code_pane_t1_copy1

0x5986,	// (0x0000b184) list_set_graphic_pane_copy1

0xa633,	// (0x0000fe31) bg_set_opt_pane_cp4_copy1

0x40cd,	// (0x000098cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x40cd,	// (0x000098cb) list_set_graphic_pane_g1_copy1

0x40d9,	// (0x000098d7) list_set_graphic_pane_g2_copy1

0xbf31,	// (0x0001172f) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf31,	// (0x0001172f) list_set_graphic_pane_t1_copy1

0x0459,	// (0x00005c57) rs_clock_indi_pane_g1

0x40e1,	// (0x000098df) rs_clock_indi_pane_t1

0x40ef,	// (0x000098ed) rs_indi_pane

0x40f7,	// (0x000098f5) rs_indi_pane_g1

0x4100,	// (0x000098fe) rs_indi_pane_g2

0x3db7,	// (0x000095b5) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x000156d0) rs_indi_pane_g

0xc1b6,	// (0x000119b4) bg_popup_preview_window_pane_cp03

0x4109,	// (0x00009907) popup_fep_tooltip_window_t1

0x15b7,	// (0x00006db5) popup_note2_window_g2_ParamLimits

0x15b7,	// (0x00006db5) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00015475) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00015475) popup_note2_window_g

0x1bb0,	// (0x000073ae) bg_popup_sub_pane_cp11_ParamLimits

0x1bbd,	// (0x000073bb) cell_ai3_links_pane_g1_ParamLimits

0x1bd4,	// (0x000073d2) cell_ai3_links_pane_t1

0x4092,	// (0x00009890) set_text_pane_t1_copy1_ParamLimits

0xc0dd,	// (0x000118db) cell_graphic_popup_pane_cp2_ParamLimits

0xc0dd,	// (0x000118db) cell_graphic_popup_pane_cp2

0x4117,	// (0x00009915) cell_graphic_popup_pane_g1_cp2

0xacf4,	// (0x000104f2) cell_graphic_popup_pane_g2_cp2

0x411f,	// (0x0000991d) cell_graphic_popup_pane_g3_cp2

0x4127,	// (0x00009925) cell_graphic_popup_pane_t2_cp2

0xad05,	// (0x00010503) grid_highlight_pane_cp3_cp2

0xb93b,	// (0x00011139) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb429,	// (0x00010c27) main_tmo_pane_ParamLimits

0x7486,	// (0x0000cc84) popup_tmo_big_image_note_window

0x8305,	// (0x0000db03) cell_ai5_widget_list_pane

0x830d,	// (0x0000db0b) cell_ai5_widget_lrg_icon_pane

0x860a,	// (0x0000de08) tmo_note_info_pane_t1_ParamLimits

0x861f,	// (0x0000de1d) tmo_note_info_pane_t2_ParamLimits

0x8634,	// (0x0000de32) tmo_note_info_pane_t3_ParamLimits

0x3d34,	// (0x00009532) tmo_note_info_pane_t4_ParamLimits

0x3d46,	// (0x00009544) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x000156be) tmo_note_info_pane_t_ParamLimits

0x86ac,	// (0x0000deaa) settings_container_pane_ParamLimits

0x4070,	// (0x0000986e) indicator_popup_pane_cp5

0x4070,	// (0x0000986e) indicator_popup_pane_cp6

0x5986,	// (0x0000b184) list_set_graphic_pane_copy1_ParamLimits

0xa542,	// (0x0000fd40) bg_popup_window_pane_cp23

0x4135,	// (0x00009933) popup_tmo_big_image_note_window_g1

0x413e,	// (0x0000993c) popup_tmo_big_image_note_window_t1

0x414c,	// (0x0000994a) popup_tmo_big_image_note_window_t2

0x415a,	// (0x00009958) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x000156d7) popup_tmo_big_image_note_window_t

0x881a,	// (0x0000e018) cell_ai5_widget_lrg_icon_pane_g1

0x8822,	// (0x0000e020) cell_ai5_widget_lrg_icon_pane_t1

0x8830,	// (0x0000e02e) cell_ai5_widget_list_row_pane_ParamLimits

0x8830,	// (0x0000e02e) cell_ai5_widget_list_row_pane

0x8849,	// (0x0000e047) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8849,	// (0x0000e047) cell_ai5_widget_list_row_pane_g1

0x8856,	// (0x0000e054) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8856,	// (0x0000e054) cell_ai5_widget_list_row_pane_t1

0x886e,	// (0x0000e06c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x886e,	// (0x0000e06c) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x000156de) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x000156de) cell_ai5_widget_list_row_pane_t

0x8c29,	// (0x0000e427) main_fep_vtchi_ss_pane

0x41ce,	// (0x000099cc) popup_fep_char_pre_window

0x41d6,	// (0x000099d4) popup_fep_ituss_window

0x41df,	// (0x000099dd) popup_fep_vkbss_window

0x41e8,	// (0x000099e6) grid_vkbss_keypad_pane_ParamLimits

0x41e8,	// (0x000099e6) grid_vkbss_keypad_pane

0x41f8,	// (0x000099f6) ituss_keypad_pane

0x4200,	// (0x000099fe) aid_vkbss_key_offset_ParamLimits

0x4200,	// (0x000099fe) aid_vkbss_key_offset

0x420f,	// (0x00009a0d) cell_vkbss_key_pane_ParamLimits

0x420f,	// (0x00009a0d) cell_vkbss_key_pane

0x4225,	// (0x00009a23) bg_cell_vkbss_key_g1_ParamLimits

0x4225,	// (0x00009a23) bg_cell_vkbss_key_g1

0x4231,	// (0x00009a2f) cell_vkbss_key_3p_pane_ParamLimits

0x4231,	// (0x00009a2f) cell_vkbss_key_3p_pane

0x4245,	// (0x00009a43) cell_vkbss_key_g1_ParamLimits

0x4245,	// (0x00009a43) cell_vkbss_key_g1

0x4259,	// (0x00009a57) cell_vkbss_key_t1_ParamLimits

0x4259,	// (0x00009a57) cell_vkbss_key_t1

0x4284,	// (0x00009a82) cell_ituss_key_pane_ParamLimits

0x4284,	// (0x00009a82) cell_ituss_key_pane

0x4293,	// (0x00009a91) bg_cell_ituss_key_g1_ParamLimits

0x4293,	// (0x00009a91) bg_cell_ituss_key_g1

0x429f,	// (0x00009a9d) cell_ituss_key_pane_g1_ParamLimits

0x429f,	// (0x00009a9d) cell_ituss_key_pane_g1

0x42ab,	// (0x00009aa9) cell_ituss_key_pane_g2_ParamLimits

0x42ab,	// (0x00009aa9) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x000156e3) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x000156e3) cell_ituss_key_pane_g

0x42be,	// (0x00009abc) cell_ituss_key_t1_ParamLimits

0x42be,	// (0x00009abc) cell_ituss_key_t1

0x42dc,	// (0x00009ada) cell_ituss_key_t2_ParamLimits

0x42dc,	// (0x00009ada) cell_ituss_key_t2

0x42fb,	// (0x00009af9) cell_ituss_key_t3_ParamLimits

0x42fb,	// (0x00009af9) cell_ituss_key_t3

0x431a,	// (0x00009b18) cell_ituss_key_t4_ParamLimits

0x431a,	// (0x00009b18) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x000156e8) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000156e8) cell_ituss_key_t

0x4339,	// (0x00009b37) cell_vkbss_key_3p_pane_g1

0x4341,	// (0x00009b3f) cell_vkbss_key_3p_pane_g2

0x4349,	// (0x00009b47) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x000156f1) cell_vkbss_key_3p_pane_g

0xa542,	// (0x0000fd40) bg_popup_fep_char_preview_window_cp02

0x4351,	// (0x00009b4f) popup_fep_char_pre_window_t1

0x82e9,	// (0x0000dae7) main_ai5_sk_pane

0x3dc0,	// (0x000095be) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3dcc,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3de0,	// (0x000095de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3def,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x000156c9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3e02,	// (0x00009600) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb429,	// (0x00010c27) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x8880,	// (0x0000e07e) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal

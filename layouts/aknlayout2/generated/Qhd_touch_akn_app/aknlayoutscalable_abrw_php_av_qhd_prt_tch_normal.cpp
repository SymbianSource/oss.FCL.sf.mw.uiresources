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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000aeda };

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
0x6cf8,	// (0x00011bd2) Screen

0x6d0c,	// (0x00011be6) application_window_ParamLimits

0x6d0c,	// (0x00011be6) application_window

0x6d26,	// (0x00011c00) screen_g1

0x47fc,	// (0x0000f6d6) area_bottom_pane_ParamLimits

0x47fc,	// (0x0000f6d6) area_bottom_pane

0x48bc,	// (0x0000f796) area_top_pane_ParamLimits

0x48bc,	// (0x0000f796) area_top_pane

0x495a,	// (0x0000f834) main_pane_ParamLimits

0x495a,	// (0x0000f834) main_pane

0x6d30,	// (0x00011c0a) misc_graphics

0x8eb9,	// (0x00013d93) battery_pane_ParamLimits

0x8eb9,	// (0x00013d93) battery_pane

0x9ca6,	// (0x00014b80) bg_status_flat_pane_g8

0x9cae,	// (0x00014b88) bg_status_flat_pane_g9

0x8f7b,	// (0x00013e55) context_pane_ParamLimits

0x8f7b,	// (0x00013e55) context_pane

0x9091,	// (0x00013f6b) navi_pane_ParamLimits

0x9091,	// (0x00013f6b) navi_pane

0x9115,	// (0x00013fef) signal_pane_ParamLimits

0x9115,	// (0x00013fef) signal_pane

0x0008,

0xf874,	// (0x0001a74e) bg_status_flat_pane_g

0x9182,	// (0x0001405c) status_pane_g1_ParamLimits

0x9182,	// (0x0001405c) status_pane_g1

0x9196,	// (0x00014070) status_pane_g2_ParamLimits

0x9196,	// (0x00014070) status_pane_g2

0x91a2,	// (0x0001407c) status_pane_g3_ParamLimits

0x91a2,	// (0x0001407c) status_pane_g3

0x0004,

0xf79b,	// (0x0001a675) status_pane_g_ParamLimits

0xf79b,	// (0x0001a675) status_pane_g

0x91d6,	// (0x000140b0) title_pane_ParamLimits

0x91d6,	// (0x000140b0) title_pane

0x9213,	// (0x000140ed) uni_indicator_pane_ParamLimits

0x9213,	// (0x000140ed) uni_indicator_pane

0x8dd9,	// (0x00013cb3) bg_list_pane_ParamLimits

0x8dd9,	// (0x00013cb3) bg_list_pane

0x8df9,	// (0x00013cd3) find_pane

0x8e01,	// (0x00013cdb) listscroll_app_pane_ParamLimits

0x8e01,	// (0x00013cdb) listscroll_app_pane

0x8e0d,	// (0x00013ce7) listscroll_form_pane

0x5237,	// (0x00010111) listscroll_gen_pane_ParamLimits

0x5237,	// (0x00010111) listscroll_gen_pane

0x524b,	// (0x00010125) listscroll_set_pane

0x7f92,	// (0x00012e6c) main_idle_act_pane

0x8ad5,	// (0x000139af) main_idle_trad_pane

0x8ad5,	// (0x000139af) main_list_empty_pane

0x8e01,	// (0x00013cdb) main_midp_pane

0x8e27,	// (0x00013d01) main_pane_g1_ParamLimits

0x8e27,	// (0x00013d01) main_pane_g1

0x5261,	// (0x0001013b) popup_ai_message_window_ParamLimits

0x5261,	// (0x0001013b) popup_ai_message_window

0x5307,	// (0x000101e1) popup_fep_china_uni_window_ParamLimits

0x5307,	// (0x000101e1) popup_fep_china_uni_window

0x5363,	// (0x0001023d) popup_fep_japan_candidate_window_ParamLimits

0x5363,	// (0x0001023d) popup_fep_japan_candidate_window

0x5383,	// (0x0001025d) popup_fep_japan_predictive_window_ParamLimits

0x5383,	// (0x0001025d) popup_fep_japan_predictive_window

0x53b3,	// (0x0001028d) popup_find_window

0x53c0,	// (0x0001029a) popup_grid_graphic_window_ParamLimits

0x53c0,	// (0x0001029a) popup_grid_graphic_window

0x53ea,	// (0x000102c4) popup_large_graphic_colour_window

0x5410,	// (0x000102ea) popup_menu_window_ParamLimits

0x5410,	// (0x000102ea) popup_menu_window

0x55c8,	// (0x000104a2) popup_note_image_window

0x55b4,	// (0x0001048e) popup_note_wait_window_ParamLimits

0x55b4,	// (0x0001048e) popup_note_wait_window

0x55b4,	// (0x0001048e) popup_note_window_ParamLimits

0x55b4,	// (0x0001048e) popup_note_window

0x561e,	// (0x000104f8) popup_query_code_window_ParamLimits

0x561e,	// (0x000104f8) popup_query_code_window

0x5632,	// (0x0001050c) popup_query_data_code_window_ParamLimits

0x5632,	// (0x0001050c) popup_query_data_code_window

0x564f,	// (0x00010529) popup_query_data_window_ParamLimits

0x564f,	// (0x00010529) popup_query_data_window

0x566b,	// (0x00010545) popup_query_sat_info_window_ParamLimits

0x566b,	// (0x00010545) popup_query_sat_info_window

0x56a4,	// (0x0001057e) popup_snote_single_graphic_window_ParamLimits

0x56a4,	// (0x0001057e) popup_snote_single_graphic_window

0x56a4,	// (0x0001057e) popup_snote_single_text_window_ParamLimits

0x56a4,	// (0x0001057e) popup_snote_single_text_window

0x56b9,	// (0x00010593) popup_sub_window_general

0x57e9,	// (0x000106c3) popup_window_general_ParamLimits

0x57e9,	// (0x000106c3) popup_window_general

0x8e3d,	// (0x00013d17) power_save_pane

0x50c1,	// (0x0000ff9b) control_pane_g1_ParamLimits

0x50c1,	// (0x0000ff9b) control_pane_g1

0x50e8,	// (0x0000ffc2) control_pane_g2_ParamLimits

0x50e8,	// (0x0000ffc2) control_pane_g2

0x8d9c,	// (0x00013c76) control_pane_g3_ParamLimits

0x8d9c,	// (0x00013c76) control_pane_g3

0x0007,

0xf783,	// (0x0001a65d) control_pane_g_ParamLimits

0xf783,	// (0x0001a65d) control_pane_g

0x5132,	// (0x0001000c) control_pane_t1_ParamLimits

0x5132,	// (0x0001000c) control_pane_t1

0x5186,	// (0x00010060) control_pane_t2_ParamLimits

0x5186,	// (0x00010060) control_pane_t2

0x0002,

0xf794,	// (0x0001a66e) control_pane_t_ParamLimits

0xf794,	// (0x0001a66e) control_pane_t

0x8cc1,	// (0x00013b9b) navi_navi_volume_pane_cp1

0x8cc9,	// (0x00013ba3) status_small_icon_pane

0x8cd1,	// (0x00013bab) status_small_pane_g1_ParamLimits

0x8cd1,	// (0x00013bab) status_small_pane_g1

0x8d05,	// (0x00013bdf) status_small_pane_g2_ParamLimits

0x8d05,	// (0x00013bdf) status_small_pane_g2

0x8d11,	// (0x00013beb) status_small_pane_g3_ParamLimits

0x8d11,	// (0x00013beb) status_small_pane_g3

0x8d1d,	// (0x00013bf7) status_small_pane_g4_ParamLimits

0x8d1d,	// (0x00013bf7) status_small_pane_g4

0x8d29,	// (0x00013c03) status_small_pane_g5_ParamLimits

0x8d29,	// (0x00013c03) status_small_pane_g5

0x8d37,	// (0x00013c11) status_small_pane_g6_ParamLimits

0x8d37,	// (0x00013c11) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a64c) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a64c) status_small_pane_g

0x8d66,	// (0x00013c40) status_small_pane_t1

0x8d88,	// (0x00013c62) status_small_wait_pane_ParamLimits

0x8d88,	// (0x00013c62) status_small_wait_pane

0x84b8,	// (0x00013392) aid_levels_signal_ParamLimits

0x84b8,	// (0x00013392) aid_levels_signal

0x84ca,	// (0x000133a4) signal_pane_g1_ParamLimits

0x84ca,	// (0x000133a4) signal_pane_g1

0x84df,	// (0x000133b9) signal_pane_g2_ParamLimits

0x84df,	// (0x000133b9) signal_pane_g2

0x0003,

0xf703,	// (0x0001a5dd) signal_pane_g_ParamLimits

0xf703,	// (0x0001a5dd) signal_pane_g

0x851a,	// (0x000133f4) context_pane_g1

0x6d3a,	// (0x00011c14) title_pane_g1

0x6d70,	// (0x00011c4a) title_pane_t1

0x6dd8,	// (0x00011cb2) title_pane_t2

0x6dfe,	// (0x00011cd8) title_pane_t3

0x0002,

0xf557,	// (0x0001a431) title_pane_t

0x922b,	// (0x00014105) aid_levels_battery_ParamLimits

0x922b,	// (0x00014105) aid_levels_battery

0x923f,	// (0x00014119) battery_pane_g1_ParamLimits

0x923f,	// (0x00014119) battery_pane_g1

0x9255,	// (0x0001412f) battery_pane_g2_ParamLimits

0x9255,	// (0x0001412f) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a680) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a680) battery_pane_g

0xa5e8,	// (0x000154c2) uni_indicator_pane_g1

0xa5fb,	// (0x000154d5) uni_indicator_pane_g2

0xa60d,	// (0x000154e7) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a7f6) uni_indicator_pane_g

0x8947,	// (0x00013821) navi_icon_pane_ParamLimits

0x8947,	// (0x00013821) navi_icon_pane

0x8885,	// (0x0001375f) navi_midp_pane

0x8963,	// (0x0001383d) navi_navi_pane

0x896d,	// (0x00013847) navi_text_pane_ParamLimits

0x896d,	// (0x00013847) navi_text_pane

0x6d26,	// (0x00011c00) status_small_wait_pane_g1

0x726d,	// (0x00012147) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a7f1) status_small_wait_pane_g

0xa30d,	// (0x000151e7) navi_navi_icon_text_pane

0xa315,	// (0x000151ef) navi_navi_pane_g1_ParamLimits

0xa315,	// (0x000151ef) navi_navi_pane_g1

0xa327,	// (0x00015201) navi_navi_pane_g2_ParamLimits

0xa327,	// (0x00015201) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a7bf) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a7bf) navi_navi_pane_g

0xa339,	// (0x00015213) navi_navi_tabs_pane

0xa342,	// (0x0001521c) navi_navi_text_pane

0xa30d,	// (0x000151e7) navi_navi_volume_pane

0xa2e9,	// (0x000151c3) navi_text_pane_t1

0xa2dd,	// (0x000151b7) navi_icon_pane_g1

0xa230,	// (0x0001510a) navi_navi_text_pane_t1

0x5b01,	// (0x000109db) navi_navi_volume_pane_g1

0x5b09,	// (0x000109e3) volume_small_pane

0xa196,	// (0x00015070) navi_navi_icon_text_pane_g1

0xa19e,	// (0x00015078) navi_navi_icon_text_pane_t1

0x8963,	// (0x0001383d) navi_tabs_2_long_pane

0x8963,	// (0x0001383d) navi_tabs_2_pane

0x8963,	// (0x0001383d) navi_tabs_3_long_pane

0x8963,	// (0x0001383d) navi_tabs_3_pane

0x8963,	// (0x0001383d) navi_tabs_4_pane

0x5ae1,	// (0x000109bb) tabs_2_active_pane_ParamLimits

0x5ae1,	// (0x000109bb) tabs_2_active_pane

0x5af1,	// (0x000109cb) tabs_2_passive_pane_ParamLimits

0x5af1,	// (0x000109cb) tabs_2_passive_pane

0x5aaf,	// (0x00010989) tabs_3_active_pane_ParamLimits

0x5aaf,	// (0x00010989) tabs_3_active_pane

0x5abf,	// (0x00010999) tabs_3_passive_pane_ParamLimits

0x5abf,	// (0x00010999) tabs_3_passive_pane

0x5ad0,	// (0x000109aa) tabs_3_passive_pane_cp_ParamLimits

0x5ad0,	// (0x000109aa) tabs_3_passive_pane_cp

0x5a6b,	// (0x00010945) tabs_4_active_pane_ParamLimits

0x5a6b,	// (0x00010945) tabs_4_active_pane

0x5a7c,	// (0x00010956) tabs_4_passive_pane_ParamLimits

0x5a7c,	// (0x00010956) tabs_4_passive_pane

0x5a8d,	// (0x00010967) tabs_4_passive_pane_cp_ParamLimits

0x5a8d,	// (0x00010967) tabs_4_passive_pane_cp

0x5a9e,	// (0x00010978) tabs_4_passive_pane_cp2_ParamLimits

0x5a9e,	// (0x00010978) tabs_4_passive_pane_cp2

0x5a47,	// (0x00010921) tabs_2_long_active_pane_ParamLimits

0x5a47,	// (0x00010921) tabs_2_long_active_pane

0x5a59,	// (0x00010933) tabs_2_long_passive_pane_ParamLimits

0x5a59,	// (0x00010933) tabs_2_long_passive_pane

0x5a08,	// (0x000108e2) tabs_3_long_active_pane_ParamLimits

0x5a08,	// (0x000108e2) tabs_3_long_active_pane

0x5a1b,	// (0x000108f5) tabs_3_long_passive_pane_ParamLimits

0x5a1b,	// (0x000108f5) tabs_3_long_passive_pane

0x5a34,	// (0x0001090e) tabs_3_long_passive_pane_cp_ParamLimits

0x5a34,	// (0x0001090e) tabs_3_long_passive_pane_cp

0x59ae,	// (0x00010888) volume_small_pane_g1

0x59b7,	// (0x00010891) volume_small_pane_g2

0x59c0,	// (0x0001089a) volume_small_pane_g3

0x59c9,	// (0x000108a3) volume_small_pane_g4

0x59d2,	// (0x000108ac) volume_small_pane_g5

0x59db,	// (0x000108b5) volume_small_pane_g6

0x59e4,	// (0x000108be) volume_small_pane_g7

0x59ed,	// (0x000108c7) volume_small_pane_g8

0x59f6,	// (0x000108d0) volume_small_pane_g9

0x59ff,	// (0x000108d9) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a78b) volume_small_pane_g

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp2_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp2

0x6e1e,	// (0x00011cf8) tabs_3_active_pane_g1

0x6e26,	// (0x00011d00) tabs_3_active_pane_t1

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp2_ParamLimits

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp2

0x6e1e,	// (0x00011cf8) tabs_3_passive_pane_g1

0x6e26,	// (0x00011d00) tabs_3_passive_pane_t1

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp3_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp3

0x6e38,	// (0x00011d12) tabs_4_active_pane_g1

0x6e40,	// (0x00011d1a) tabs_4_active_pane_t1

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp3_ParamLimits

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp3

0x6e38,	// (0x00011d12) tabs_4_1_passive_pane_g1

0x6e40,	// (0x00011d1a) tabs_4_1_passive_pane_t1

0x8e01,	// (0x00013cdb) list_highlight_pane_cp2

0xa878,	// (0x00015752) list_set_pane_ParamLimits

0xa878,	// (0x00015752) list_set_pane

0xa91e,	// (0x000157f8) main_pane_set_t1_ParamLimits

0xa91e,	// (0x000157f8) main_pane_set_t1

0xa93e,	// (0x00015818) main_pane_set_t2_ParamLimits

0xa93e,	// (0x00015818) main_pane_set_t2

0xa952,	// (0x0001582c) main_pane_set_t3_ParamLimits

0xa952,	// (0x0001582c) main_pane_set_t3

0xa964,	// (0x0001583e) main_pane_set_t4_ParamLimits

0xa964,	// (0x0001583e) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a85b) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a85b) main_pane_set_t

0xa976,	// (0x00015850) setting_code_pane

0xa982,	// (0x0001585c) setting_slider_graphic_pane

0xa982,	// (0x0001585c) setting_slider_pane

0xa982,	// (0x0001585c) setting_text_pane

0xa982,	// (0x0001585c) setting_volume_pane

0x4ba9,	// (0x0000fa83) volume_set_pane

0x6e10,	// (0x00011cea) bg_set_opt_pane_cp

0x4bb1,	// (0x0000fa8b) setting_slider_pane_t1

0x4bca,	// (0x0000faa4) setting_slider_pane_t2

0x4be4,	// (0x0000fabe) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a438) setting_slider_pane_t

0x4bfc,	// (0x0000fad6) slider_set_pane

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp2

0x6e52,	// (0x00011d2c) setting_slider_graphic_pane_g1

0x4c12,	// (0x0000faec) setting_slider_graphic_pane_t1

0x4c22,	// (0x0000fafc) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a43f) setting_slider_graphic_pane_t

0x4c32,	// (0x0000fb0c) slider_set_pane_cp

0x6d30,	// (0x00011c0a) input_focus_pane_cp1

0xa837,	// (0x00015711) list_set_text_pane

0x6d26,	// (0x00011c00) setting_text_pane_g1

0x6d30,	// (0x00011c0a) input_focus_pane_cp2

0x6d26,	// (0x00011c00) setting_code_pane_g1

0x6e5b,	// (0x00011d35) setting_code_pane_t1

0x6e69,	// (0x00011d43) set_text_pane_t1_ParamLimits

0x6e69,	// (0x00011d43) set_text_pane_t1

0x7d5d,	// (0x00012c37) set_opt_bg_pane_g1

0x7d65,	// (0x00012c3f) set_opt_bg_pane_g2

0xa811,	// (0x000156eb) set_opt_bg_pane_g3

0x7d75,	// (0x00012c4f) set_opt_bg_pane_g4

0x7d7d,	// (0x00012c57) set_opt_bg_pane_g5

0x7d85,	// (0x00012c5f) set_opt_bg_pane_g6

0xa81b,	// (0x000156f5) set_opt_bg_pane_g7

0xa823,	// (0x000156fd) set_opt_bg_pane_g8

0xa82d,	// (0x00015707) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a848) set_opt_bg_pane_g

0xa804,	// (0x000156de) slider_set_pane_g1

0x5b76,	// (0x00010a50) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a839) slider_set_pane_g

0x5b12,	// (0x000109ec) volume_set_pane_g1

0x5b1a,	// (0x000109f4) volume_set_pane_g2

0x5b22,	// (0x000109fc) volume_set_pane_g3

0x5b2a,	// (0x00010a04) volume_set_pane_g4

0x5b32,	// (0x00010a0c) volume_set_pane_g5

0x5b3a,	// (0x00010a14) volume_set_pane_g6

0x5b42,	// (0x00010a1c) volume_set_pane_g7

0x5b4a,	// (0x00010a24) volume_set_pane_g8

0x5b52,	// (0x00010a2c) volume_set_pane_g9

0x5b5a,	// (0x00010a34) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a811) volume_set_pane_g

0x6e83,	// (0x00011d5d) indicator_pane_ParamLimits

0x6e83,	// (0x00011d5d) indicator_pane

0x6e8f,	// (0x00011d69) main_idle_pane_g2_ParamLimits

0x6e8f,	// (0x00011d69) main_idle_pane_g2

0x6eb7,	// (0x00011d91) main_pane_idle_g1_ParamLimits

0x6eb7,	// (0x00011d91) main_pane_idle_g1

0x6ec4,	// (0x00011d9e) popup_clock_digital_analogue_window_ParamLimits

0x6ec4,	// (0x00011d9e) popup_clock_digital_analogue_window

0x6edb,	// (0x00011db5) soft_indicator_pane_ParamLimits

0x6edb,	// (0x00011db5) soft_indicator_pane

0x6ee7,	// (0x00011dc1) wallpaper_pane_ParamLimits

0x6ee7,	// (0x00011dc1) wallpaper_pane

0x6d26,	// (0x00011c00) wallpaper_pane_g1

0x6efb,	// (0x00011dd5) indicator_pane_g1_ParamLimits

0x6efb,	// (0x00011dd5) indicator_pane_g1

0xad04,	// (0x00015bde) navi_navi_icon_text_pane_srt_g1

0x6f16,	// (0x00011df0) soft_indicator_pane_t1

0x6f30,	// (0x00011e0a) aid_ps_area_pane

0x6f41,	// (0x00011e1b) aid_ps_clock_pane

0x6f4f,	// (0x00011e29) aid_ps_indicator_pane

0x6f5b,	// (0x00011e35) indicator_ps_pane_ParamLimits

0x6f5b,	// (0x00011e35) indicator_ps_pane

0x6f6a,	// (0x00011e44) power_save_pane_g1_ParamLimits

0x6f6a,	// (0x00011e44) power_save_pane_g1

0x6f76,	// (0x00011e50) power_save_pane_g2_ParamLimits

0x6f76,	// (0x00011e50) power_save_pane_g2

0x47b0,	// (0x0000f68a) aid_navinavi_width_pane

0x6f30,	// (0x00011e0a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a444) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a444) power_save_pane_g

0x6f84,	// (0x00011e5e) power_save_pane_t1_ParamLimits

0x6f84,	// (0x00011e5e) power_save_pane_t1

0x6f41,	// (0x00011e1b) aid_ps_clock_pane_ParamLimits

0x6f4f,	// (0x00011e29) aid_ps_indicator_pane_ParamLimits

0x6f96,	// (0x00011e70) power_save_pane_t4_ParamLimits

0x6f96,	// (0x00011e70) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a449) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a449) power_save_pane_t

0x6fc0,	// (0x00011e9a) power_save_t3_ParamLimits

0x6fc0,	// (0x00011e9a) power_save_t3

0x6fab,	// (0x00011e85) power_save_t2_ParamLimits

0x6fab,	// (0x00011e85) power_save_t2

0x6fd5,	// (0x00011eaf) indicator_ps_pane_g1

0x6fde,	// (0x00011eb8) ai_gene_pane_ParamLimits

0x6fde,	// (0x00011eb8) ai_gene_pane

0x6fea,	// (0x00011ec4) ai_links_pane_ParamLimits

0x6fea,	// (0x00011ec4) ai_links_pane

0x6ff6,	// (0x00011ed0) indicator_pane_cp1_ParamLimits

0x6ff6,	// (0x00011ed0) indicator_pane_cp1

0x7002,	// (0x00011edc) main_pane_idle_g1_cp_ParamLimits

0x7002,	// (0x00011edc) main_pane_idle_g1_cp

0x700e,	// (0x00011ee8) popup_ai_links_title_window

0x7017,	// (0x00011ef1) soft_indicator_pane_cp1_ParamLimits

0x7017,	// (0x00011ef1) soft_indicator_pane_cp1

0xa5d6,	// (0x000154b0) ai_links_pane_g1

0xa5df,	// (0x000154b9) grid_ai_links_pane

0xa5b9,	// (0x00015493) ai_gene_pane_1

0xa5c4,	// (0x0001549e) ai_gene_pane_2

0xa5cd,	// (0x000154a7) list_highlight_pane_cp4

0xa59d,	// (0x00015477) cell_ai_link_pane_ParamLimits

0xa59d,	// (0x00015477) cell_ai_link_pane

0xa595,	// (0x0001546f) cell_ai_link_pane_g1

0x726d,	// (0x00012147) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a7ec) cell_ai_link_pane_g

0x6d30,	// (0x00011c0a) grid_highlight_cp2

0x6d30,	// (0x00011c0a) bg_popup_sub_pane_cp1

0x7031,	// (0x00011f0b) popup_ai_links_title_window_t1

0xa4e3,	// (0x000153bd) ai_gene_pane_1_g1_ParamLimits

0xa4e3,	// (0x000153bd) ai_gene_pane_1_g1

0xa4ef,	// (0x000153c9) ai_gene_pane_1_g2_ParamLimits

0xa4ef,	// (0x000153c9) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a7e2) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a7e2) ai_gene_pane_1_g

0xa4fc,	// (0x000153d6) ai_gene_pane_1_t1_ParamLimits

0xa4fc,	// (0x000153d6) ai_gene_pane_1_t1

0xa530,	// (0x0001540a) grid_ai_soft_ind_pane

0xa4ce,	// (0x000153a8) ai_gene_pane_2_t1_ParamLimits

0xa4ce,	// (0x000153a8) ai_gene_pane_2_t1

0x7040,	// (0x00011f1a) main_pane_empty_t1_ParamLimits

0x7040,	// (0x00011f1a) main_pane_empty_t1

0x7058,	// (0x00011f32) main_pane_empty_t2_ParamLimits

0x7058,	// (0x00011f32) main_pane_empty_t2

0x706d,	// (0x00011f47) main_pane_empty_t3_ParamLimits

0x706d,	// (0x00011f47) main_pane_empty_t3

0x707f,	// (0x00011f59) main_pane_empty_t4_ParamLimits

0x707f,	// (0x00011f59) main_pane_empty_t4

0x7091,	// (0x00011f6b) main_pane_empty_t5_ParamLimits

0x7091,	// (0x00011f6b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a44e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a44e) main_pane_empty_t

0x7e5a,	// (0x00012d34) bg_popup_window_pane_ParamLimits

0x7e5a,	// (0x00012d34) bg_popup_window_pane

0xa23e,	// (0x00015118) find_popup_pane_cp2_ParamLimits

0xa23e,	// (0x00015118) find_popup_pane_cp2

0xa24a,	// (0x00015124) heading_pane_ParamLimits

0xa24a,	// (0x00015124) heading_pane

0x6d30,	// (0x00011c0a) bg_popup_sub_pane

0xa1b8,	// (0x00015092) bg_popup_window_pane_g1_ParamLimits

0xa1b8,	// (0x00015092) bg_popup_window_pane_g1

0xa1c4,	// (0x0001509e) bg_popup_window_pane_g2_ParamLimits

0xa1c4,	// (0x0001509e) bg_popup_window_pane_g2

0xa1d0,	// (0x000150aa) bg_popup_window_pane_g3_ParamLimits

0xa1d0,	// (0x000150aa) bg_popup_window_pane_g3

0xa1dc,	// (0x000150b6) bg_popup_window_pane_g4_ParamLimits

0xa1dc,	// (0x000150b6) bg_popup_window_pane_g4

0xa1e8,	// (0x000150c2) bg_popup_window_pane_g5_ParamLimits

0xa1e8,	// (0x000150c2) bg_popup_window_pane_g5

0xa1f4,	// (0x000150ce) bg_popup_window_pane_g6_ParamLimits

0xa1f4,	// (0x000150ce) bg_popup_window_pane_g6

0xa200,	// (0x000150da) bg_popup_window_pane_g7_ParamLimits

0xa200,	// (0x000150da) bg_popup_window_pane_g7

0xa20c,	// (0x000150e6) bg_popup_window_pane_g8_ParamLimits

0xa20c,	// (0x000150e6) bg_popup_window_pane_g8

0xa218,	// (0x000150f2) bg_popup_window_pane_g9_ParamLimits

0xa218,	// (0x000150f2) bg_popup_window_pane_g9

0xa224,	// (0x000150fe) bg_popup_window_pane_g10_ParamLimits

0xa224,	// (0x000150fe) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a7aa) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a7aa) bg_popup_window_pane_g

0xa14d,	// (0x00015027) bg_popup_heading_pane_ParamLimits

0xa14d,	// (0x00015027) bg_popup_heading_pane

0x5bfe,	// (0x00010ad8) tabs_4_passive_pane_cp_srt_ParamLimits

0x5bfe,	// (0x00010ad8) tabs_4_passive_pane_cp_srt

0x5c10,	// (0x00010aea) tabs_4_passive_pane_srt_ParamLimits

0xa161,	// (0x0001503b) heading_pane_g2

0x5c10,	// (0x00010aea) tabs_4_passive_pane_srt

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp3_srt

0xa169,	// (0x00015043) heading_pane_t1_ParamLimits

0xa169,	// (0x00015043) heading_pane_t1

0xa180,	// (0x0001505a) heading_pane_t2_ParamLimits

0xa180,	// (0x0001505a) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a7a5) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a7a5) heading_pane_t

0x9c6e,	// (0x00014b48) bg_popup_heading_pane_g1

0x9d1d,	// (0x00014bf7) bg_popup_heading_pane_g2

0x9d27,	// (0x00014c01) bg_popup_heading_pane_g3

0x9d31,	// (0x00014c0b) bg_popup_heading_pane_g4

0x9d3b,	// (0x00014c15) bg_popup_heading_pane_g5

0x9d45,	// (0x00014c1f) bg_popup_heading_pane_g6

0x9d4d,	// (0x00014c27) bg_popup_heading_pane_g7

0x9d55,	// (0x00014c2f) bg_popup_heading_pane_g8

0x9d5f,	// (0x00014c39) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a761) bg_popup_heading_pane_g

0x935b,	// (0x00014235) bg_popup_sub_pane_g1

0x936b,	// (0x00014245) bg_popup_sub_pane_g2

0x9363,	// (0x0001423d) bg_popup_sub_pane_g3

0x937b,	// (0x00014255) bg_popup_sub_pane_g4

0x9373,	// (0x0001424d) bg_popup_sub_pane_g5

0x9383,	// (0x0001425d) bg_popup_sub_pane_g6

0x938b,	// (0x00014265) bg_popup_sub_pane_g7

0x939b,	// (0x00014275) bg_popup_sub_pane_g8

0x9393,	// (0x0001426d) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a73b) bg_popup_sub_pane_g

0x70a5,	// (0x00011f7f) bg_popup_window_pane_cp5_ParamLimits

0x70a5,	// (0x00011f7f) bg_popup_window_pane_cp5

0x70c1,	// (0x00011f9b) popup_note_window_g1_ParamLimits

0x70c1,	// (0x00011f9b) popup_note_window_g1

0x70cd,	// (0x00011fa7) popup_note_window_t1_ParamLimits

0x70cd,	// (0x00011fa7) popup_note_window_t1

0x70e3,	// (0x00011fbd) popup_note_window_t2_ParamLimits

0x70e3,	// (0x00011fbd) popup_note_window_t2

0x70f9,	// (0x00011fd3) popup_note_window_t3_ParamLimits

0x70f9,	// (0x00011fd3) popup_note_window_t3

0x710f,	// (0x00011fe9) popup_note_window_t4_ParamLimits

0x710f,	// (0x00011fe9) popup_note_window_t4

0x7137,	// (0x00012011) popup_note_window_t5_ParamLimits

0x7137,	// (0x00012011) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a459) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a459) popup_note_window_t

0x7181,	// (0x0001205b) bg_popup_window_pane_cp6_ParamLimits

0x7181,	// (0x0001205b) bg_popup_window_pane_cp6

0x9bea,	// (0x00014ac4) popup_note_image_window_g1_ParamLimits

0x9bea,	// (0x00014ac4) popup_note_image_window_g1

0x9bf6,	// (0x00014ad0) popup_note_image_window_g2_ParamLimits

0x9bf6,	// (0x00014ad0) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a72f) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a72f) popup_note_image_window_g

0x9c0f,	// (0x00014ae9) popup_note_image_window_t1_ParamLimits

0x9c0f,	// (0x00014ae9) popup_note_image_window_t1

0x9c28,	// (0x00014b02) popup_note_image_window_t2_ParamLimits

0x9c28,	// (0x00014b02) popup_note_image_window_t2

0x9c41,	// (0x00014b1b) popup_note_image_window_t3_ParamLimits

0x9c41,	// (0x00014b1b) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a734) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a734) popup_note_image_window_t

0x9aab,	// (0x00014985) bg_popup_window_pane_cp7_ParamLimits

0x9aab,	// (0x00014985) bg_popup_window_pane_cp7

0x9adb,	// (0x000149b5) popup_note_wait_window_g1_ParamLimits

0x9adb,	// (0x000149b5) popup_note_wait_window_g1

0x9ae7,	// (0x000149c1) popup_note_wait_window_g2_ParamLimits

0x9ae7,	// (0x000149c1) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a71d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a71d) popup_note_wait_window_g

0x9aff,	// (0x000149d9) popup_note_wait_window_t1_ParamLimits

0x9aff,	// (0x000149d9) popup_note_wait_window_t1

0x9b26,	// (0x00014a00) popup_note_wait_window_t2_ParamLimits

0x9b26,	// (0x00014a00) popup_note_wait_window_t2

0x9b43,	// (0x00014a1d) popup_note_wait_window_t3_ParamLimits

0x9b43,	// (0x00014a1d) popup_note_wait_window_t3

0x9b56,	// (0x00014a30) popup_note_wait_window_t4_ParamLimits

0x9b56,	// (0x00014a30) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a724) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a724) popup_note_wait_window_t

0x9b7b,	// (0x00014a55) wait_bar_pane_ParamLimits

0x9b7b,	// (0x00014a55) wait_bar_pane

0x6d30,	// (0x00011c0a) wait_anim_pane

0x6d30,	// (0x00011c0a) wait_border_pane

0x6d26,	// (0x00011c00) wait_anim_pane_g1

0x6d26,	// (0x00011c00) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a5d8) wait_anim_pane_g

0x9a4f,	// (0x00014929) wait_border_pane_g1

0x9a5a,	// (0x00014934) wait_border_pane_g2

0x9a63,	// (0x0001493d) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a716) wait_border_pane_g

0x98ba,	// (0x00014794) bg_popup_window_pane_cp16_ParamLimits

0x98ba,	// (0x00014794) bg_popup_window_pane_cp16

0x99ba,	// (0x00014894) indicator_popup_pane_cp4_ParamLimits

0x99ba,	// (0x00014894) indicator_popup_pane_cp4

0x99ce,	// (0x000148a8) popup_query_data_window_t1_ParamLimits

0x99ce,	// (0x000148a8) popup_query_data_window_t1

0x99e0,	// (0x000148ba) popup_query_data_window_t2_ParamLimits

0x99e0,	// (0x000148ba) popup_query_data_window_t2

0x99f9,	// (0x000148d3) popup_query_data_window_t3_ParamLimits

0x99f9,	// (0x000148d3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a70f) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a70f) popup_query_data_window_t

0x9a13,	// (0x000148ed) query_popup_data_pane_ParamLimits

0x9a13,	// (0x000148ed) query_popup_data_pane

0x9a27,	// (0x00014901) query_popup_data_pane_cp1_ParamLimits

0x9a27,	// (0x00014901) query_popup_data_pane_cp1

0x98ba,	// (0x00014794) bg_popup_window_pane_cp10_ParamLimits

0x98ba,	// (0x00014794) bg_popup_window_pane_cp10

0x98ec,	// (0x000147c6) indicator_popup_pane_ParamLimits

0x98ec,	// (0x000147c6) indicator_popup_pane

0x990e,	// (0x000147e8) popup_query_code_window_t1_ParamLimits

0x990e,	// (0x000147e8) popup_query_code_window_t1

0x9928,	// (0x00014802) popup_query_code_window_t2_ParamLimits

0x9928,	// (0x00014802) popup_query_code_window_t2

0x9971,	// (0x0001484b) popup_query_code_window_t3_ParamLimits

0x9971,	// (0x0001484b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a708) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a708) popup_query_code_window_t

0x99a0,	// (0x0001487a) query_popup_pane_ParamLimits

0x99a0,	// (0x0001487a) query_popup_pane

0x7181,	// (0x0001205b) bg_popup_window_pane_cp15_ParamLimits

0x7181,	// (0x0001205b) bg_popup_window_pane_cp15

0x719f,	// (0x00012079) indicator_popup_pane_cp1_ParamLimits

0x719f,	// (0x00012079) indicator_popup_pane_cp1

0x71b2,	// (0x0001208c) indicator_popup_pane_cp2_ParamLimits

0x71b2,	// (0x0001208c) indicator_popup_pane_cp2

0x71c5,	// (0x0001209f) popup_query_data_code_window_g1_ParamLimits

0x71c5,	// (0x0001209f) popup_query_data_code_window_g1

0x71d8,	// (0x000120b2) popup_query_data_code_window_t1_ParamLimits

0x71d8,	// (0x000120b2) popup_query_data_code_window_t1

0x71ea,	// (0x000120c4) popup_query_data_code_window_t2_ParamLimits

0x71ea,	// (0x000120c4) popup_query_data_code_window_t2

0x71fc,	// (0x000120d6) popup_query_data_code_window_t3_ParamLimits

0x71fc,	// (0x000120d6) popup_query_data_code_window_t3

0x7212,	// (0x000120ec) popup_query_data_code_window_t4_ParamLimits

0x7212,	// (0x000120ec) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a464) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a464) popup_query_data_code_window_t

0x58bf,	// (0x00010799) list_single_midp_graphic_pane_g3

0x722a,	// (0x00012104) query_popup_data_pane_cp2_ParamLimits

0x723d,	// (0x00012117) query_popup_pane_cp2_ParamLimits

0x723d,	// (0x00012117) query_popup_pane_cp2

0x6d30,	// (0x00011c0a) bg_popup_window_pane_cp11

0x98a6,	// (0x00014780) heading_pane_cp5

0x7328,	// (0x00012202) listscroll_popup_info_pane

0x6d30,	// (0x00011c0a) input_focus_pane_cp3

0x7250,	// (0x0001212a) query_popup_pane_t1

0x725e,	// (0x00012138) list_popup_info_pane_ParamLimits

0x725e,	// (0x00012138) list_popup_info_pane

0x726d,	// (0x00012147) listscroll_popup_info_pane_g1

0x7275,	// (0x0001214f) scroll_pane_cp7

0x727f,	// (0x00012159) popup_info_list_pane_t1_ParamLimits

0x727f,	// (0x00012159) popup_info_list_pane_t1

0x7299,	// (0x00012173) popup_info_list_pane_t2_ParamLimits

0x7299,	// (0x00012173) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a46d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a46d) popup_info_list_pane_t

0x6d30,	// (0x00011c0a) bg_popup_window_pane_cp12

0xad1e,	// (0x00015bf8) find_popup_pane

0x6e10,	// (0x00011cea) bg_popup_window_pane_cp3

0x72b3,	// (0x0001218d) heading_pane_cp3

0x72bf,	// (0x00012199) listscroll_popup_graphic_pane

0x6d30,	// (0x00011c0a) bg_popup_window_pane_cp4

0x731e,	// (0x000121f8) heading_pane_cp4

0x7328,	// (0x00012202) listscroll_popup_colour_pane

0x7330,	// (0x0001220a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7330,	// (0x0001220a) cell_large_graphic_colour_none_popup_pane

0x7344,	// (0x0001221e) grid_large_graphic_colour_popup_pane_ParamLimits

0x7344,	// (0x0001221e) grid_large_graphic_colour_popup_pane

0x7370,	// (0x0001224a) listscroll_popup_colour_pane_g1_ParamLimits

0x7370,	// (0x0001224a) listscroll_popup_colour_pane_g1

0x7387,	// (0x00012261) listscroll_popup_colour_pane_g2_ParamLimits

0x7387,	// (0x00012261) listscroll_popup_colour_pane_g2

0x739e,	// (0x00012278) listscroll_popup_colour_pane_g3_ParamLimits

0x739e,	// (0x00012278) listscroll_popup_colour_pane_g3

0x73ae,	// (0x00012288) listscroll_popup_colour_pane_g4_ParamLimits

0x73ae,	// (0x00012288) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a472) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a472) listscroll_popup_colour_pane_g

0x73c2,	// (0x0001229c) scroll_pane_cp6_ParamLimits

0x73c2,	// (0x0001229c) scroll_pane_cp6

0x73d4,	// (0x000122ae) cell_large_graphic_colour_popup_pane_ParamLimits

0x73d4,	// (0x000122ae) cell_large_graphic_colour_popup_pane

0x73f3,	// (0x000122cd) cell_large_graphic_colour_none_popup_pane_t1

0x6d30,	// (0x00011c0a) grid_highlight_pane_cp5

0x7402,	// (0x000122dc) cell_large_graphic_colour_popup_pane_g1

0x740a,	// (0x000122e4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a47b) cell_large_graphic_colour_popup_pane_g

0x7412,	// (0x000122ec) cell_large_graphic_colour_popup_pane_g2_copy1

0x741b,	// (0x000122f5) grid_highlight_pane_cp4

0x7423,	// (0x000122fd) bg_popup_window_pane_cp8_ParamLimits

0x7423,	// (0x000122fd) bg_popup_window_pane_cp8

0x743e,	// (0x00012318) popup_snote_single_text_window_g1_ParamLimits

0x743e,	// (0x00012318) popup_snote_single_text_window_g1

0x7450,	// (0x0001232a) popup_snote_single_text_window_t1_ParamLimits

0x7450,	// (0x0001232a) popup_snote_single_text_window_t1

0x7463,	// (0x0001233d) popup_snote_single_text_window_t2_ParamLimits

0x7463,	// (0x0001233d) popup_snote_single_text_window_t2

0x7476,	// (0x00012350) popup_snote_single_text_window_t3_ParamLimits

0x7476,	// (0x00012350) popup_snote_single_text_window_t3

0x74af,	// (0x00012389) popup_snote_single_text_window_t4_ParamLimits

0x74af,	// (0x00012389) popup_snote_single_text_window_t4

0x74e3,	// (0x000123bd) popup_snote_single_text_window_t5_ParamLimits

0x74e3,	// (0x000123bd) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a480) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a480) popup_snote_single_text_window_t

0x7512,	// (0x000123ec) bg_popup_window_pane_cp9_ParamLimits

0x7512,	// (0x000123ec) bg_popup_window_pane_cp9

0x743e,	// (0x00012318) popup_snote_single_graphic_window_g1_ParamLimits

0x743e,	// (0x00012318) popup_snote_single_graphic_window_g1

0x7520,	// (0x000123fa) popup_snote_single_graphic_window_g2_ParamLimits

0x7520,	// (0x000123fa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a48b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a48b) popup_snote_single_graphic_window_g

0x752c,	// (0x00012406) popup_snote_single_graphic_window_t1_ParamLimits

0x752c,	// (0x00012406) popup_snote_single_graphic_window_t1

0x753f,	// (0x00012419) popup_snote_single_graphic_window_t2_ParamLimits

0x753f,	// (0x00012419) popup_snote_single_graphic_window_t2

0x7552,	// (0x0001242c) popup_snote_single_graphic_window_t3_ParamLimits

0x7552,	// (0x0001242c) popup_snote_single_graphic_window_t3

0x758b,	// (0x00012465) popup_snote_single_graphic_window_t4_ParamLimits

0x758b,	// (0x00012465) popup_snote_single_graphic_window_t4

0x75bf,	// (0x00012499) popup_snote_single_graphic_window_t5_ParamLimits

0x75bf,	// (0x00012499) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a490) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a490) popup_snote_single_graphic_window_t

0xac60,	// (0x00015b3a) grid_graphic_popup_pane_ParamLimits

0xac60,	// (0x00015b3a) grid_graphic_popup_pane

0xac8a,	// (0x00015b64) listscroll_popup_graphic_pane_g1_ParamLimits

0xac8a,	// (0x00015b64) listscroll_popup_graphic_pane_g1

0xac9e,	// (0x00015b78) listscroll_popup_graphic_pane_g2_ParamLimits

0xac9e,	// (0x00015b78) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a885) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a885) listscroll_popup_graphic_pane_g

0xacb2,	// (0x00015b8c) scroll_pane_cp5

0xabff,	// (0x00015ad9) cell_graphic_popup_pane_ParamLimits

0xabff,	// (0x00015ad9) cell_graphic_popup_pane

0xabe0,	// (0x00015aba) cell_graphic_popup_pane_g1

0xabe8,	// (0x00015ac2) cell_graphic_popup_pane_g2

0x7412,	// (0x000122ec) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a87e) cell_graphic_popup_pane_g

0xabf1,	// (0x00015acb) cell_graphic_popup_pane_t2

0x741b,	// (0x000122f5) grid_highlight_pane_cp3

0x7600,	// (0x000124da) list_gen_pane_ParamLimits

0x7600,	// (0x000124da) list_gen_pane

0x7632,	// (0x0001250c) scroll_pane

0xab38,	// (0x00015a12) bg_list_pane_g1_ParamLimits

0xab38,	// (0x00015a12) bg_list_pane_g1

0xab55,	// (0x00015a2f) bg_list_pane_g2_ParamLimits

0xab55,	// (0x00015a2f) bg_list_pane_g2

0xab6a,	// (0x00015a44) bg_list_pane_g3_ParamLimits

0xab6a,	// (0x00015a44) bg_list_pane_g3

0xab7e,	// (0x00015a58) bg_list_pane_g4_ParamLimits

0xab7e,	// (0x00015a58) bg_list_pane_g4

0xab92,	// (0x00015a6c) bg_list_pane_g5_ParamLimits

0xab92,	// (0x00015a6c) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a873) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a873) bg_list_pane_g

0xaa3b,	// (0x00015915) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double2_graphic_large_graphic_pane

0xaa3b,	// (0x00015915) list_double2_graphic_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double2_graphic_pane

0xaa3b,	// (0x00015915) list_double2_large_graphic_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double2_large_graphic_pane

0xaa3b,	// (0x00015915) list_double2_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double2_pane

0xaa3b,	// (0x00015915) list_double_graphic_heading_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_graphic_heading_pane

0xaa3b,	// (0x00015915) list_double_graphic_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_graphic_pane

0xaa3b,	// (0x00015915) list_double_heading_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_heading_pane

0xaa3b,	// (0x00015915) list_double_large_graphic_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_large_graphic_pane

0xaa3b,	// (0x00015915) list_double_number_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_number_pane

0xaa3b,	// (0x00015915) list_double_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_pane

0xaa3b,	// (0x00015915) list_double_time_pane_ParamLimits

0xaa3b,	// (0x00015915) list_double_time_pane

0xaa3b,	// (0x00015915) list_setting_number_pane_ParamLimits

0xaa3b,	// (0x00015915) list_setting_number_pane

0xaa3b,	// (0x00015915) list_setting_pane_ParamLimits

0xaa3b,	// (0x00015915) list_setting_pane

0xaaa4,	// (0x0001597e) list_single_2graphic_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_2graphic_pane

0xaaa4,	// (0x0001597e) list_single_graphic_heading_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_graphic_heading_pane

0xaaa4,	// (0x0001597e) list_single_graphic_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_graphic_pane

0xaaa4,	// (0x0001597e) list_single_heading_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_heading_pane

0xab19,	// (0x000159f3) list_single_large_graphic_pane_ParamLimits

0xab19,	// (0x000159f3) list_single_large_graphic_pane

0xaaa4,	// (0x0001597e) list_single_number_heading_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_number_heading_pane

0xaaa4,	// (0x0001597e) list_single_number_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_number_pane

0xaaa4,	// (0x0001597e) list_single_pane_ParamLimits

0xaaa4,	// (0x0001597e) list_single_pane

0x6d30,	// (0x00011c0a) list_highlight_pane_cp1

0x7672,	// (0x0001254c) list_single_pane_g1_ParamLimits

0x7672,	// (0x0001254c) list_single_pane_g1

0x767e,	// (0x00012558) list_single_pane_g2_ParamLimits

0x767e,	// (0x00012558) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a4a2) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a4a2) list_single_pane_g

0xa9f4,	// (0x000158ce) list_single_pane_t1_ParamLimits

0xa9f4,	// (0x000158ce) list_single_pane_t1

0x7672,	// (0x0001254c) list_single_number_pane_g1_ParamLimits

0x7672,	// (0x0001254c) list_single_number_pane_g1

0x767e,	// (0x00012558) list_single_number_pane_g2_ParamLimits

0x767e,	// (0x00012558) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a4a2) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a4a2) list_single_number_pane_g

0xa780,	// (0x0001565a) list_single_number_pane_t1_ParamLimits

0xa780,	// (0x0001565a) list_single_number_pane_t1

0xa796,	// (0x00015670) list_single_number_pane_t2_ParamLimits

0xa796,	// (0x00015670) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a834) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a834) list_single_number_pane_t

0x7666,	// (0x00012540) list_single_graphic_pane_g1_ParamLimits

0x7666,	// (0x00012540) list_single_graphic_pane_g1

0x7672,	// (0x0001254c) list_single_graphic_pane_g2_ParamLimits

0x7672,	// (0x0001254c) list_single_graphic_pane_g2

0x767e,	// (0x00012558) list_single_graphic_pane_g3_ParamLimits

0x767e,	// (0x00012558) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a49b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a49b) list_single_graphic_pane_g

0x768a,	// (0x00012564) list_single_graphic_pane_t1_ParamLimits

0x768a,	// (0x00012564) list_single_graphic_pane_t1

0x7672,	// (0x0001254c) list_single_heading_pane_g1_ParamLimits

0x7672,	// (0x0001254c) list_single_heading_pane_g1

0x767e,	// (0x00012558) list_single_heading_pane_g2_ParamLimits

0x767e,	// (0x00012558) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a4a2) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a4a2) list_single_heading_pane_g

0x76a0,	// (0x0001257a) list_single_heading_pane_t1_ParamLimits

0x76a0,	// (0x0001257a) list_single_heading_pane_t1

0x76b6,	// (0x00012590) list_single_heading_pane_t2_ParamLimits

0x76b6,	// (0x00012590) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a4a7) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a4a7) list_single_heading_pane_t

0x7672,	// (0x0001254c) list_single_number_heading_pane_g1_ParamLimits

0x7672,	// (0x0001254c) list_single_number_heading_pane_g1

0x767e,	// (0x00012558) list_single_number_heading_pane_g2_ParamLimits

0x767e,	// (0x00012558) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a4a2) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a4a2) list_single_number_heading_pane_g

0x76a0,	// (0x0001257a) list_single_number_heading_pane_t1_ParamLimits

0x76a0,	// (0x0001257a) list_single_number_heading_pane_t1

0x76c8,	// (0x000125a2) list_single_number_heading_pane_t2_ParamLimits

0x76c8,	// (0x000125a2) list_single_number_heading_pane_t2

0x76da,	// (0x000125b4) list_single_number_heading_pane_t3_ParamLimits

0x76da,	// (0x000125b4) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a4ac) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a4ac) list_single_number_heading_pane_t

0x76ec,	// (0x000125c6) list_single_graphic_heading_pane_g1_ParamLimits

0x76ec,	// (0x000125c6) list_single_graphic_heading_pane_g1

0x76f8,	// (0x000125d2) list_single_graphic_heading_pane_g4_ParamLimits

0x76f8,	// (0x000125d2) list_single_graphic_heading_pane_g4

0x767e,	// (0x00012558) list_single_graphic_heading_pane_g5_ParamLimits

0x767e,	// (0x00012558) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a4b3) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a4b3) list_single_graphic_heading_pane_g

0x76a0,	// (0x0001257a) list_single_graphic_heading_pane_t1_ParamLimits

0x76a0,	// (0x0001257a) list_single_graphic_heading_pane_t1

0x7709,	// (0x000125e3) list_single_graphic_heading_pane_t2_ParamLimits

0x7709,	// (0x000125e3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a4ba) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a4ba) list_single_graphic_heading_pane_t

0x771b,	// (0x000125f5) list_single_large_graphic_pane_g1_ParamLimits

0x771b,	// (0x000125f5) list_single_large_graphic_pane_g1

0x7727,	// (0x00012601) list_single_large_graphic_pane_g2_ParamLimits

0x7727,	// (0x00012601) list_single_large_graphic_pane_g2

0x7733,	// (0x0001260d) list_single_large_graphic_pane_g3_ParamLimits

0x7733,	// (0x0001260d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a4bf) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a4bf) list_single_large_graphic_pane_g

0x9a5a,	// (0x00014934) wait_border_pane_g2_copy1

0x773f,	// (0x00012619) list_single_large_graphic_pane_g4_cp2

0x7747,	// (0x00012621) list_single_large_graphic_pane_t1_ParamLimits

0x7747,	// (0x00012621) list_single_large_graphic_pane_t1

0x775d,	// (0x00012637) list_double_pane_g1_ParamLimits

0x775d,	// (0x00012637) list_double_pane_g1

0x7769,	// (0x00012643) list_double_pane_g2_ParamLimits

0x7769,	// (0x00012643) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a4c6) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a4c6) list_double_pane_g

0x7775,	// (0x0001264f) list_double_pane_t1_ParamLimits

0x7775,	// (0x0001264f) list_double_pane_t1

0x778b,	// (0x00012665) list_double_pane_t2_ParamLimits

0x778b,	// (0x00012665) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a4cb) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a4cb) list_double_pane_t

0x779d,	// (0x00012677) list_double2_pane_g1_ParamLimits

0x779d,	// (0x00012677) list_double2_pane_g1

0x77ae,	// (0x00012688) list_double2_pane_g2_ParamLimits

0x77ae,	// (0x00012688) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a4d0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a4d0) list_double2_pane_g

0x77ba,	// (0x00012694) list_double2_pane_t1_ParamLimits

0x77ba,	// (0x00012694) list_double2_pane_t1

0x77d0,	// (0x000126aa) list_double2_pane_t2_ParamLimits

0x77d0,	// (0x000126aa) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a4d5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a4d5) list_double2_pane_t

0x775d,	// (0x00012637) list_double_number_pane_g1_ParamLimits

0x775d,	// (0x00012637) list_double_number_pane_g1

0x7769,	// (0x00012643) list_double_number_pane_g2_ParamLimits

0x7769,	// (0x00012643) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a4c6) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a4c6) list_double_number_pane_g

0x77e2,	// (0x000126bc) list_double_number_pane_t1_ParamLimits

0x77e2,	// (0x000126bc) list_double_number_pane_t1

0x77f4,	// (0x000126ce) list_double_number_pane_t2_ParamLimits

0x77f4,	// (0x000126ce) list_double_number_pane_t2

0x780a,	// (0x000126e4) list_double_number_pane_t3_ParamLimits

0x780a,	// (0x000126e4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a4da) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a4da) list_double_number_pane_t

0x781c,	// (0x000126f6) list_double_graphic_pane_g1_ParamLimits

0x781c,	// (0x000126f6) list_double_graphic_pane_g1

0x7828,	// (0x00012702) list_double_graphic_pane_g2_ParamLimits

0x7828,	// (0x00012702) list_double_graphic_pane_g2

0x7837,	// (0x00012711) list_double_graphic_pane_g3_ParamLimits

0x7837,	// (0x00012711) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a4e1) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a4e1) list_double_graphic_pane_g

0x784f,	// (0x00012729) list_double_graphic_pane_t1_ParamLimits

0x784f,	// (0x00012729) list_double_graphic_pane_t1

0x7865,	// (0x0001273f) list_double_graphic_pane_t2_ParamLimits

0x7865,	// (0x0001273f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a4ea) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a4ea) list_double_graphic_pane_t

0x7877,	// (0x00012751) list_double2_graphic_pane_g1_ParamLimits

0x7877,	// (0x00012751) list_double2_graphic_pane_g1

0x7883,	// (0x0001275d) list_double2_graphic_pane_g2_ParamLimits

0x7883,	// (0x0001275d) list_double2_graphic_pane_g2

0x77ae,	// (0x00012688) list_double2_graphic_pane_g3_ParamLimits

0x77ae,	// (0x00012688) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a4ef) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a4ef) list_double2_graphic_pane_g

0x788f,	// (0x00012769) list_double2_graphic_pane_t1_ParamLimits

0x788f,	// (0x00012769) list_double2_graphic_pane_t1

0x78a5,	// (0x0001277f) list_double2_graphic_pane_t2_ParamLimits

0x78a5,	// (0x0001277f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a4f6) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a4f6) list_double2_graphic_pane_t

0x78b7,	// (0x00012791) list_double_large_graphic_pane_g1_ParamLimits

0x78b7,	// (0x00012791) list_double_large_graphic_pane_g1

0x78d6,	// (0x000127b0) list_double_large_graphic_pane_g2_ParamLimits

0x78d6,	// (0x000127b0) list_double_large_graphic_pane_g2

0x7769,	// (0x00012643) list_double_large_graphic_pane_g3_ParamLimits

0x7769,	// (0x00012643) list_double_large_graphic_pane_g3

0x78e7,	// (0x000127c1) list_double_large_graphic_pane_g4_ParamLimits

0x78e7,	// (0x000127c1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a4fb) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a4fb) list_double_large_graphic_pane_g

0x790d,	// (0x000127e7) list_double_large_graphic_pane_t1_ParamLimits

0x790d,	// (0x000127e7) list_double_large_graphic_pane_t1

0x7926,	// (0x00012800) list_double_large_graphic_pane_t2_ParamLimits

0x7926,	// (0x00012800) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a506) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a506) list_double_large_graphic_pane_t

0x7938,	// (0x00012812) list_double2_large_graphic_pane_g1_ParamLimits

0x7938,	// (0x00012812) list_double2_large_graphic_pane_g1

0x779d,	// (0x00012677) list_double2_large_graphic_pane_g2_ParamLimits

0x779d,	// (0x00012677) list_double2_large_graphic_pane_g2

0x77ae,	// (0x00012688) list_double2_large_graphic_pane_g3_ParamLimits

0x77ae,	// (0x00012688) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a50b) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a50b) list_double2_large_graphic_pane_g

0x7944,	// (0x0001281e) list_double2_large_graphic_pane_t1_ParamLimits

0x7944,	// (0x0001281e) list_double2_large_graphic_pane_t1

0x795a,	// (0x00012834) list_double2_large_graphic_pane_t2_ParamLimits

0x795a,	// (0x00012834) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a512) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a512) list_double2_large_graphic_pane_t

0x796c,	// (0x00012846) list_double_heading_pane_g1_ParamLimits

0x796c,	// (0x00012846) list_double_heading_pane_g1

0x797d,	// (0x00012857) list_double_heading_pane_g2_ParamLimits

0x797d,	// (0x00012857) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a517) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a517) list_double_heading_pane_g

0x7989,	// (0x00012863) list_double_heading_pane_t1_ParamLimits

0x7989,	// (0x00012863) list_double_heading_pane_t1

0x799f,	// (0x00012879) list_double_heading_pane_t2_ParamLimits

0x799f,	// (0x00012879) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a51c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a51c) list_double_heading_pane_t

0x79b1,	// (0x0001288b) list_double_graphic_heading_pane_g1_ParamLimits

0x79b1,	// (0x0001288b) list_double_graphic_heading_pane_g1

0x796c,	// (0x00012846) list_double_graphic_heading_pane_g2_ParamLimits

0x796c,	// (0x00012846) list_double_graphic_heading_pane_g2

0x797d,	// (0x00012857) list_double_graphic_heading_pane_g3_ParamLimits

0x797d,	// (0x00012857) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a521) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a521) list_double_graphic_heading_pane_g

0x79bd,	// (0x00012897) list_double_graphic_heading_pane_t1_ParamLimits

0x79bd,	// (0x00012897) list_double_graphic_heading_pane_t1

0x79d3,	// (0x000128ad) list_double_graphic_heading_pane_t2_ParamLimits

0x79d3,	// (0x000128ad) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a528) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a528) list_double_graphic_heading_pane_t

0x78d6,	// (0x000127b0) list_double_time_pane_g1_ParamLimits

0x78d6,	// (0x000127b0) list_double_time_pane_g1

0x7769,	// (0x00012643) list_double_time_pane_g2_ParamLimits

0x7769,	// (0x00012643) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a52d) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a52d) list_double_time_pane_g

0x79e5,	// (0x000128bf) list_double_time_pane_t1_ParamLimits

0x79e5,	// (0x000128bf) list_double_time_pane_t1

0x79fb,	// (0x000128d5) list_double_time_pane_t2_ParamLimits

0x79fb,	// (0x000128d5) list_double_time_pane_t2

0x7a0d,	// (0x000128e7) list_double_time_pane_t3_ParamLimits

0x7a0d,	// (0x000128e7) list_double_time_pane_t3

0x7a1f,	// (0x000128f9) list_double_time_pane_t4_ParamLimits

0x7a1f,	// (0x000128f9) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a532) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a532) list_double_time_pane_t

0x7883,	// (0x0001275d) list_setting_pane_g1_ParamLimits

0x7883,	// (0x0001275d) list_setting_pane_g1

0x77ae,	// (0x00012688) list_setting_pane_g2_ParamLimits

0x77ae,	// (0x00012688) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a53b) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a53b) list_setting_pane_g

0x7a31,	// (0x0001290b) list_setting_pane_t1_ParamLimits

0x7a31,	// (0x0001290b) list_setting_pane_t1

0x7a48,	// (0x00012922) list_setting_pane_t2_ParamLimits

0x7a48,	// (0x00012922) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a540) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a540) list_setting_pane_t

0x7a87,	// (0x00012961) set_value_pane_cp_ParamLimits

0x7a87,	// (0x00012961) set_value_pane_cp

0x7883,	// (0x0001275d) list_setting_number_pane_g1_ParamLimits

0x7883,	// (0x0001275d) list_setting_number_pane_g1

0x77ae,	// (0x00012688) list_setting_number_pane_g2_ParamLimits

0x77ae,	// (0x00012688) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a53b) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a53b) list_setting_number_pane_g

0x7a93,	// (0x0001296d) list_setting_number_pane_t1_ParamLimits

0x7a93,	// (0x0001296d) list_setting_number_pane_t1

0x7aa7,	// (0x00012981) list_setting_number_pane_t2_ParamLimits

0x7aa7,	// (0x00012981) list_setting_number_pane_t2

0x7abe,	// (0x00012998) list_setting_number_pane_t3_ParamLimits

0x7abe,	// (0x00012998) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a547) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a547) list_setting_number_pane_t

0x7a87,	// (0x00012961) set_value_pane_ParamLimits

0x7a87,	// (0x00012961) set_value_pane

0x7b01,	// (0x000129db) bg_set_opt_pane_ParamLimits

0x7b01,	// (0x000129db) bg_set_opt_pane

0x7b22,	// (0x000129fc) set_value_pane_t1

0x7b30,	// (0x00012a0a) slider_set_pane_cp3

0x7b39,	// (0x00012a13) volume_small_pane_cp

0x7b42,	// (0x00012a1c) list_form_gen_pane

0x7b4b,	// (0x00012a25) scroll_pane_cp8

0x7b64,	// (0x00012a3e) form_field_data_pane_ParamLimits

0x7b64,	// (0x00012a3e) form_field_data_pane

0x7b86,	// (0x00012a60) form_field_data_wide_pane_ParamLimits

0x7b86,	// (0x00012a60) form_field_data_wide_pane

0x7ba9,	// (0x00012a83) form_field_popup_pane_ParamLimits

0x7ba9,	// (0x00012a83) form_field_popup_pane

0x7bc9,	// (0x00012aa3) form_field_popup_wide_pane_ParamLimits

0x7bc9,	// (0x00012aa3) form_field_popup_wide_pane

0x7be6,	// (0x00012ac0) form_field_slider_pane_ParamLimits

0x7be6,	// (0x00012ac0) form_field_slider_pane

0x7bf9,	// (0x00012ad3) form_field_slider_wide_pane_ParamLimits

0x7bf9,	// (0x00012ad3) form_field_slider_wide_pane

0x7c0c,	// (0x00012ae6) data_form_pane

0x7c22,	// (0x00012afc) form_field_data_pane_t1

0x7c3a,	// (0x00012b14) input_focus_pane

0x7c48,	// (0x00012b22) data_form_wide_pane

0x7c74,	// (0x00012b4e) form_field_data_wide_pane_t1

0x7430,	// (0x0001230a) input_focus_pane_cp6

0x7c93,	// (0x00012b6d) form_field_popup_pane_t1

0x7c3a,	// (0x00012b14) input_focus_pane_cp7

0x7cab,	// (0x00012b85) list_form_pane

0x7cbf,	// (0x00012b99) form_field_popup_wide_pane_t1

0x7c3a,	// (0x00012b14) input_focus_pane_cp8

0x7cd1,	// (0x00012bab) list_form_wide_pane

0x7ce5,	// (0x00012bbf) form_field_slider_pane_t1_ParamLimits

0x7ce5,	// (0x00012bbf) form_field_slider_pane_t1

0x7cf7,	// (0x00012bd1) form_field_slider_pane_t2_ParamLimits

0x7cf7,	// (0x00012bd1) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a557) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a557) form_field_slider_pane_t

0x70a5,	// (0x00011f7f) input_focus_pane_cp9_ParamLimits

0x70a5,	// (0x00011f7f) input_focus_pane_cp9

0x7d09,	// (0x00012be3) slider_cont_pane_ParamLimits

0x7d09,	// (0x00012be3) slider_cont_pane

0x7d1d,	// (0x00012bf7) form_field_slider_wide_pane_t1_ParamLimits

0x7d1d,	// (0x00012bf7) form_field_slider_wide_pane_t1

0x7d2f,	// (0x00012c09) form_field_slider_wide_pane_t2_ParamLimits

0x7d2f,	// (0x00012c09) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a55c) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a55c) form_field_slider_wide_pane_t

0x70a5,	// (0x00011f7f) input_focus_pane_cp10_ParamLimits

0x70a5,	// (0x00011f7f) input_focus_pane_cp10

0x7d41,	// (0x00012c1b) slider_cont_pane_cp1_ParamLimits

0x7d41,	// (0x00012c1b) slider_cont_pane_cp1

0x7d55,	// (0x00012c2f) slider_form_pane_cp

0x7d5d,	// (0x00012c37) input_focus_pane_g1

0x7d65,	// (0x00012c3f) input_focus_pane_g2

0x7d6d,	// (0x00012c47) input_focus_pane_g3

0x7d75,	// (0x00012c4f) input_focus_pane_g4

0x7d7d,	// (0x00012c57) input_focus_pane_g5

0x7d85,	// (0x00012c5f) input_focus_pane_g6

0x7d8d,	// (0x00012c67) input_focus_pane_g7

0x7d95,	// (0x00012c6f) input_focus_pane_g8

0x7d9d,	// (0x00012c77) input_focus_pane_g9

0x6d26,	// (0x00011c00) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a561) input_focus_pane_g

0x9a63,	// (0x0001493d) wait_border_pane_g3_copy1

0x7da5,	// (0x00012c7f) data_form_pane_t1

0x6d26,	// (0x00011c00) wait_anim_pane_g1_copy1

0xa9d7,	// (0x000158b1) data_form_wide_pane_t1

0x7dc0,	// (0x00012c9a) list_form_graphic_pane_cp_ParamLimits

0x7dc0,	// (0x00012c9a) list_form_graphic_pane_cp

0xa9ac,	// (0x00015886) slider_form_pane_g1

0xa9b5,	// (0x0001588f) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a864) slider_form_pane_g

0x7dd9,	// (0x00012cb3) list_form_graphic_pane_ParamLimits

0x7dd9,	// (0x00012cb3) list_form_graphic_pane

0x7df5,	// (0x00012ccf) list_form_graphic_pane_g1

0x7dfd,	// (0x00012cd7) list_form_graphic_pane_t1_ParamLimits

0x7dfd,	// (0x00012cd7) list_form_graphic_pane_t1

0x6e10,	// (0x00011cea) list_highlight_pane_cp5_ParamLimits

0x6e10,	// (0x00011cea) list_highlight_pane_cp5

0x7e12,	// (0x00012cec) find_pane_g1

0x7e1b,	// (0x00012cf5) input_find_pane

0x7e24,	// (0x00012cfe) input_find_pane_g1_ParamLimits

0x7e24,	// (0x00012cfe) input_find_pane_g1

0x7e30,	// (0x00012d0a) input_find_pane_t1_ParamLimits

0x7e30,	// (0x00012d0a) input_find_pane_t1

0x7e45,	// (0x00012d1f) input_find_pane_t2_ParamLimits

0x7e45,	// (0x00012d1f) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a576) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a576) input_find_pane_t

0x7e5a,	// (0x00012d34) input_focus_pane_cp5_ParamLimits

0x7e5a,	// (0x00012d34) input_focus_pane_cp5

0x7e74,	// (0x00012d4e) bg_popup_window_pane_cp2_ParamLimits

0x7e74,	// (0x00012d4e) bg_popup_window_pane_cp2

0x7e81,	// (0x00012d5b) listscroll_menu_pane_ParamLimits

0x7e81,	// (0x00012d5b) listscroll_menu_pane

0x7e8d,	// (0x00012d67) popup_submenu_window_ParamLimits

0x7e8d,	// (0x00012d67) popup_submenu_window

0x7eb9,	// (0x00012d93) find_popup_pane_g1

0x7ec1,	// (0x00012d9b) input_popup_find_pane_cp

0x7e5a,	// (0x00012d34) input_focus_pane_cp4_ParamLimits

0x7e5a,	// (0x00012d34) input_focus_pane_cp4

0x7ed7,	// (0x00012db1) input_popup_find_pane_t1_ParamLimits

0x7ed7,	// (0x00012db1) input_popup_find_pane_t1

0x6d30,	// (0x00011c0a) bg_popup_sub_pane_cp

0x7f05,	// (0x00012ddf) listscroll_popup_sub_pane

0x7f0d,	// (0x00012de7) list_submenu_pane_ParamLimits

0x7f0d,	// (0x00012de7) list_submenu_pane

0x7f1e,	// (0x00012df8) scroll_pane_cp4

0x7f26,	// (0x00012e00) list_single_popup_submenu_pane_ParamLimits

0x7f26,	// (0x00012e00) list_single_popup_submenu_pane

0x7f3a,	// (0x00012e14) list_single_popup_submenu_pane_g1

0x7f42,	// (0x00012e1c) list_single_popup_submenu_pane_t1_ParamLimits

0x7f42,	// (0x00012e1c) list_single_popup_submenu_pane_t1

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp1_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp1

0x7f57,	// (0x00012e31) tabs_2_active_pane_g1

0x7f5f,	// (0x00012e39) tabs_2_active_pane_t1

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp1_ParamLimits

0x6e10,	// (0x00011cea) bg_passive_tab_pane_cp1

0x7f57,	// (0x00012e31) tabs_2_passive_pane_g1

0x7f5f,	// (0x00012e39) tabs_2_passive_pane_t1

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp4

0x7f7f,	// (0x00012e59) tabs_2_long_active_pane_t1

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp4

0x58c7,	// (0x000107a1) list_single_midp_graphic_pane_g4_ParamLimits

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp5

0x7f9e,	// (0x00012e78) tabs_3_long_active_pane_t1

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp5

0x58c7,	// (0x000107a1) list_single_midp_graphic_pane_g4

0x6e10,	// (0x00011cea) bg_popup_window_pane_cp13_ParamLimits

0x6e10,	// (0x00011cea) bg_popup_window_pane_cp13

0x7fb9,	// (0x00012e93) listscroll_popup_fast_pane_ParamLimits

0x7fb9,	// (0x00012e93) listscroll_popup_fast_pane

0x7fc8,	// (0x00012ea2) grid_popup_fast_pane_ParamLimits

0x7fc8,	// (0x00012ea2) grid_popup_fast_pane

0x7fda,	// (0x00012eb4) scroll_pane_cp9_ParamLimits

0x7fda,	// (0x00012eb4) scroll_pane_cp9

0xc8de,	// (0x000177b8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8de,	// (0x000177b8) list_single_graphic_hl_pane_t1_cp2

0x7ffe,	// (0x00012ed8) input_focus_pane_cp20_ParamLimits

0x7ffe,	// (0x00012ed8) input_focus_pane_cp20

0x800c,	// (0x00012ee6) query_popup_data_pane_t1_ParamLimits

0x800c,	// (0x00012ee6) query_popup_data_pane_t1

0x801f,	// (0x00012ef9) query_popup_data_pane_t2_ParamLimits

0x801f,	// (0x00012ef9) query_popup_data_pane_t2

0x8065,	// (0x00012f3f) query_popup_data_pane_t3_ParamLimits

0x8065,	// (0x00012f3f) query_popup_data_pane_t3

0x80a6,	// (0x00012f80) query_popup_data_pane_t4_ParamLimits

0x80a6,	// (0x00012f80) query_popup_data_pane_t4

0x80e2,	// (0x00012fbc) query_popup_data_pane_t5_ParamLimits

0x80e2,	// (0x00012fbc) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a57b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a57b) query_popup_data_pane_t

0x7d5d,	// (0x00012c37) bg_set_opt_pane_g1

0x7d65,	// (0x00012c3f) bg_set_opt_pane_g2

0x7d6d,	// (0x00012c47) bg_set_opt_pane_g3

0x7d75,	// (0x00012c4f) bg_set_opt_pane_g4

0x7d7d,	// (0x00012c57) bg_set_opt_pane_g5

0x7d85,	// (0x00012c5f) bg_set_opt_pane_g6

0x7d8d,	// (0x00012c67) bg_set_opt_pane_g7

0x7d95,	// (0x00012c6f) bg_set_opt_pane_g8

0x7d9d,	// (0x00012c77) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a586) bg_set_opt_pane_g

0x4ed7,	// (0x0000fdb1) control_top_pane_stacon_ParamLimits

0x4ed7,	// (0x0000fdb1) control_top_pane_stacon

0x4f2a,	// (0x0000fe04) signal_pane_stacon_ParamLimits

0x4f2a,	// (0x0000fe04) signal_pane_stacon

0x8763,	// (0x0001363d) stacon_top_pane_g1_ParamLimits

0x8763,	// (0x0001363d) stacon_top_pane_g1

0x4f4f,	// (0x0000fe29) title_pane_stacon_ParamLimits

0x4f4f,	// (0x0000fe29) title_pane_stacon

0x4f79,	// (0x0000fe53) uni_indicator_pane_stacon_ParamLimits

0x4f79,	// (0x0000fe53) uni_indicator_pane_stacon

0x4f8e,	// (0x0000fe68) battery_pane_stacon_ParamLimits

0x4f8e,	// (0x0000fe68) battery_pane_stacon

0x4fd2,	// (0x0000feac) control_bottom_pane_stacon_ParamLimits

0x4fd2,	// (0x0000feac) control_bottom_pane_stacon

0x4ff5,	// (0x0000fecf) navi_pane_stacon_ParamLimits

0x4ff5,	// (0x0000fecf) navi_pane_stacon

0x8785,	// (0x0001365f) stacon_bottom_pane_g1_ParamLimits

0x8785,	// (0x0001365f) stacon_bottom_pane_g1

0x4c3a,	// (0x0000fb14) aid_levels_signal_lsc_ParamLimits

0x4c3a,	// (0x0000fb14) aid_levels_signal_lsc

0x4c50,	// (0x0000fb2a) signal_pane_stacon_g1_ParamLimits

0x4c50,	// (0x0000fb2a) signal_pane_stacon_g1

0x4c64,	// (0x0000fb3e) signal_pane_stacon_g2_ParamLimits

0x4c64,	// (0x0000fb3e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a599) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a599) signal_pane_stacon_g

0x4c99,	// (0x0000fb73) title_pane_stacon_t1_ParamLimits

0x4c99,	// (0x0000fb73) title_pane_stacon_t1

0x8126,	// (0x00013000) uni_indicator_pane_stacon_g1

0x8130,	// (0x0001300a) uni_indicator_pane_stacon_g2

0x813a,	// (0x00013014) uni_indicator_pane_stacon_g3

0x8144,	// (0x0001301e) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a5a5) uni_indicator_pane_stacon_g

0x4cbe,	// (0x0000fb98) control_top_pane_stacon_g1

0x4cc6,	// (0x0000fba0) control_top_pane_stacon_t1_ParamLimits

0x4cc6,	// (0x0000fba0) control_top_pane_stacon_t1

0x4cfd,	// (0x0000fbd7) aid_levels_battery_lsc_ParamLimits

0x4cfd,	// (0x0000fbd7) aid_levels_battery_lsc

0x4d14,	// (0x0000fbee) battery_pane_stacon_g1_ParamLimits

0x4d14,	// (0x0000fbee) battery_pane_stacon_g1

0x4d27,	// (0x0000fc01) battery_pane_stacon_g2_ParamLimits

0x4d27,	// (0x0000fc01) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a5ae) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a5ae) battery_pane_stacon_g

0x4d65,	// (0x0000fc3f) navi_icon_pane_stacon

0x4d79,	// (0x0000fc53) navi_navi_pane_stacon

0x4d65,	// (0x0000fc3f) navi_text_pane_stacon

0x4cbe,	// (0x0000fb98) control_bottom_pane_stacon_g1

0x4d8d,	// (0x0000fc67) control_bottom_pane_stacon_t1_ParamLimits

0x4d8d,	// (0x0000fc67) control_bottom_pane_stacon_t1

0x8168,	// (0x00013042) grid_app_pane_ParamLimits

0x8168,	// (0x00013042) grid_app_pane

0x818a,	// (0x00013064) scroll_pane_cp15_ParamLimits

0x818a,	// (0x00013064) scroll_pane_cp15

0x819d,	// (0x00013077) cell_app_pane_ParamLimits

0x819d,	// (0x00013077) cell_app_pane

0x81c5,	// (0x0001309f) cell_app_pane_g1_ParamLimits

0x81c5,	// (0x0001309f) cell_app_pane_g1

0x81e9,	// (0x000130c3) cell_app_pane_g2_ParamLimits

0x81e9,	// (0x000130c3) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a5b3) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a5b3) cell_app_pane_g

0x81f5,	// (0x000130cf) cell_app_pane_t1_ParamLimits

0x81f5,	// (0x000130cf) cell_app_pane_t1

0x820c,	// (0x000130e6) grid_highlight_pane_ParamLimits

0x820c,	// (0x000130e6) grid_highlight_pane

0x7d5d,	// (0x00012c37) cell_highlight_pane_g1

0x7d65,	// (0x00012c3f) cell_highlight_pane_g2

0x7d6d,	// (0x00012c47) cell_highlight_pane_g3

0x7d75,	// (0x00012c4f) cell_highlight_pane_g4

0x7d7d,	// (0x00012c57) cell_highlight_pane_g5

0x7d85,	// (0x00012c5f) cell_highlight_pane_g6

0x7d8d,	// (0x00012c67) cell_highlight_pane_g7

0x7d95,	// (0x00012c6f) cell_highlight_pane_g8

0x7d9d,	// (0x00012c77) cell_highlight_pane_g9

0x6d26,	// (0x00011c00) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a561) cell_highlight_pane_g

0x821d,	// (0x000130f7) bg_scroll_pane

0x4dd7,	// (0x0000fcb1) scroll_handle_pane

0x8264,	// (0x0001313e) scroll_bg_pane_g1

0x8279,	// (0x00013153) scroll_bg_pane_g2

0x8291,	// (0x0001316b) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a5b8) scroll_bg_pane_g

0x82a6,	// (0x00013180) scroll_handle_focus_pane_ParamLimits

0x82a6,	// (0x00013180) scroll_handle_focus_pane

0x8264,	// (0x0001313e) scroll_handle_pane_g1

0x82b3,	// (0x0001318d) scroll_handle_pane_g2

0x8291,	// (0x0001316b) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a5bf) scroll_handle_pane_g

0x7e5a,	// (0x00012d34) bg_popup_sub_pane_cp21_ParamLimits

0x7e5a,	// (0x00012d34) bg_popup_sub_pane_cp21

0x82c7,	// (0x000131a1) popup_fep_japan_predictive_window_t1_ParamLimits

0x82c7,	// (0x000131a1) popup_fep_japan_predictive_window_t1

0x82e1,	// (0x000131bb) popup_fep_japan_predictive_window_t2_ParamLimits

0x82e1,	// (0x000131bb) popup_fep_japan_predictive_window_t2

0x8314,	// (0x000131ee) popup_fep_japan_predictive_window_t3_ParamLimits

0x8314,	// (0x000131ee) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a5c6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a5c6) popup_fep_japan_predictive_window_t

0x6d30,	// (0x00011c0a) bg_popup_sub_pane_cp23

0x834b,	// (0x00013225) listscroll_japin_cand_pane

0x8353,	// (0x0001322d) popup_fep_japan_candidate_window_t1

0x8361,	// (0x0001323b) candidate_pane_ParamLimits

0x8361,	// (0x0001323b) candidate_pane

0x8373,	// (0x0001324d) scroll_pane_cp30

0x837b,	// (0x00013255) list_single_popup_jap_candidate_pane_ParamLimits

0x837b,	// (0x00013255) list_single_popup_jap_candidate_pane

0x6d30,	// (0x00011c0a) list_highlight_pane_cp30

0x8390,	// (0x0001326a) list_single_popup_jap_candidate_pane_t1

0x839f,	// (0x00013279) level_1_signal

0x83b1,	// (0x0001328b) level_2_signal

0x83c4,	// (0x0001329e) level_3_signal

0x83d7,	// (0x000132b1) level_4_signal

0x83ea,	// (0x000132c4) level_5_signal

0x83fd,	// (0x000132d7) level_6_signal

0x8410,	// (0x000132ea) level_7_signal

0x839f,	// (0x00013279) level_1_battery

0x83b1,	// (0x0001328b) level_2_battery

0x83c4,	// (0x0001329e) level_3_battery

0x83d7,	// (0x000132b1) level_4_battery

0x83ea,	// (0x000132c4) level_5_battery

0x83fd,	// (0x000132d7) level_6_battery

0x8410,	// (0x000132ea) level_7_battery

0x843b,	// (0x00013315) list_menu_pane_ParamLimits

0x843b,	// (0x00013315) list_menu_pane

0x8451,	// (0x0001332b) scroll_pane_cp25_ParamLimits

0x8451,	// (0x0001332b) scroll_pane_cp25

0x846a,	// (0x00013344) list_double2_graphic_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double2_graphic_pane_cp2

0x846a,	// (0x00013344) list_double2_large_graphic_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double2_large_graphic_pane_cp2

0x846a,	// (0x00013344) list_double2_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double2_pane_cp2

0x846a,	// (0x00013344) list_double_graphic_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double_graphic_pane_cp2

0x846a,	// (0x00013344) list_double_large_graphic_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double_large_graphic_pane_cp2

0x846a,	// (0x00013344) list_double_number_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double_number_pane_cp2

0x846a,	// (0x00013344) list_double_pane_cp2_ParamLimits

0x846a,	// (0x00013344) list_double_pane_cp2

0x848e,	// (0x00013368) list_single_2graphic_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_2graphic_pane_cp2

0x848e,	// (0x00013368) list_single_graphic_heading_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_graphic_heading_pane_cp2

0x848e,	// (0x00013368) list_single_graphic_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_graphic_pane_cp2

0x848e,	// (0x00013368) list_single_heading_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_heading_pane_cp2

0x84a7,	// (0x00013381) list_single_large_graphic_pane_cp2_ParamLimits

0x84a7,	// (0x00013381) list_single_large_graphic_pane_cp2

0x848e,	// (0x00013368) list_single_number_heading_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_number_heading_pane_cp2

0x848e,	// (0x00013368) list_single_number_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_number_pane_cp2

0x848e,	// (0x00013368) list_single_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_pane_cp2

0x8523,	// (0x000133fd) bg_popup_sub_pane_cp22

0x4e89,	// (0x0000fd63) popup_side_volume_key_window_g1

0x4eb3,	// (0x0000fd8d) popup_side_volume_key_window_t1

0x4ecf,	// (0x0000fda9) volume_small_pane_cp1

0x70a5,	// (0x00011f7f) bg_popup_sub_pane_cp24_ParamLimits

0x70a5,	// (0x00011f7f) bg_popup_sub_pane_cp24

0x8539,	// (0x00013413) fep_china_uni_candidate_pane_ParamLimits

0x8539,	// (0x00013413) fep_china_uni_candidate_pane

0x854d,	// (0x00013427) fep_china_uni_entry_pane

0x855d,	// (0x00013437) popup_fep_china_uni_window_g1

0x8579,	// (0x00013453) fep_china_uni_entry_pane_g1

0x8581,	// (0x0001345b) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a5f7) fep_china_uni_entry_pane_g

0x8589,	// (0x00013463) fep_entry_item_pane

0x8593,	// (0x0001346d) fep_candidate_item_pane

0x859b,	// (0x00013475) fep_china_uni_candidate_pane_g1

0x85a3,	// (0x0001347d) fep_china_uni_candidate_pane_g2

0x85ab,	// (0x00013485) fep_china_uni_candidate_pane_g3

0x85b3,	// (0x0001348d) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a5fc) fep_china_uni_candidate_pane_g

0x6d26,	// (0x00011c00) fep_entry_item_pane_g1

0x85bb,	// (0x00013495) fep_entry_item_pane_t1_ParamLimits

0x85bb,	// (0x00013495) fep_entry_item_pane_t1

0x85d1,	// (0x000134ab) fep_candidate_item_pane_t1_ParamLimits

0x85d1,	// (0x000134ab) fep_candidate_item_pane_t1

0x85e6,	// (0x000134c0) fep_candidate_item_pane_t2_ParamLimits

0x85e6,	// (0x000134c0) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a605) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a605) fep_candidate_item_pane_t

0x6e10,	// (0x00011cea) list_highlight_pane_cp31_ParamLimits

0x6e10,	// (0x00011cea) list_highlight_pane_cp31

0x85f8,	// (0x000134d2) level_1_signal_lsc

0x8601,	// (0x000134db) level_2_signal_lsc

0x860a,	// (0x000134e4) level_3_signal_lsc

0x8613,	// (0x000134ed) level_4_signal_lsc

0x861c,	// (0x000134f6) level_5_signal_lsc

0x8625,	// (0x000134ff) level_6_signal_lsc

0x862e,	// (0x00013508) level_7_signal_lsc

0x862e,	// (0x00013508) level_1_battery_lsc

0x8637,	// (0x00013511) level_2_battery_lsc

0x8640,	// (0x0001351a) level_3_battery_lsc

0x8649,	// (0x00013523) level_4_battery_lsc

0x8652,	// (0x0001352c) level_5_battery_lsc

0x865b,	// (0x00013535) level_6_battery_lsc

0x85f8,	// (0x000134d2) level_7_battery_lsc

0x8664,	// (0x0001353e) scroll_handle_focus_pane_g1

0x866d,	// (0x00013547) scroll_handle_focus_pane_g2

0x8676,	// (0x00013550) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a60a) scroll_handle_focus_pane_g

0x867f,	// (0x00013559) list_single_2graphic_pane_g1_ParamLimits

0x867f,	// (0x00013559) list_single_2graphic_pane_g1

0x76f8,	// (0x000125d2) list_single_2graphic_pane_g2_ParamLimits

0x76f8,	// (0x000125d2) list_single_2graphic_pane_g2

0x767e,	// (0x00012558) list_single_2graphic_pane_g3_ParamLimits

0x767e,	// (0x00012558) list_single_2graphic_pane_g3

0x868b,	// (0x00013565) list_single_2graphic_pane_g4_ParamLimits

0x868b,	// (0x00013565) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a611) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a611) list_single_2graphic_pane_g

0x869c,	// (0x00013576) list_single_2graphic_pane_t1_ParamLimits

0x869c,	// (0x00013576) list_single_2graphic_pane_t1

0x86ca,	// (0x000135a4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x86ca,	// (0x000135a4) list_double2_graphic_large_graphic_pane_g1

0x779d,	// (0x00012677) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x779d,	// (0x00012677) list_double2_graphic_large_graphic_pane_g2

0x77ae,	// (0x00012688) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x77ae,	// (0x00012688) list_double2_graphic_large_graphic_pane_g3

0x86da,	// (0x000135b4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x86da,	// (0x000135b4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a61a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a61a) list_double2_graphic_large_graphic_pane_g

0x86e6,	// (0x000135c0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x86e6,	// (0x000135c0) list_double2_graphic_large_graphic_pane_t1

0x86fc,	// (0x000135d6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x86fc,	// (0x000135d6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a623) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a623) list_double2_graphic_large_graphic_pane_t

0x884d,	// (0x00013727) popup_fast_swap_window_ParamLimits

0x884d,	// (0x00013727) popup_fast_swap_window

0x8869,	// (0x00013743) popup_side_volume_key_window

0x8885,	// (0x0001375f) stacon_top_pane

0x888f,	// (0x00013769) status_pane_ParamLimits

0x888f,	// (0x00013769) status_pane

0x889d,	// (0x00013777) status_small_pane

0x6d30,	// (0x00011c0a) control_pane

0x6d30,	// (0x00011c0a) stacon_bottom_pane

0x7b4b,	// (0x00012a25) scroll_pane_cp121

0x7b42,	// (0x00012a1c) set_content_pane

0x870e,	// (0x000135e8) bg_active_tab_pane_g1_cp1

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp1

0x8720,	// (0x000135fa) bg_active_tab_pane_g3_cp1

0x870e,	// (0x000135e8) bg_passive_tab_pane_g1_cp1

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp1

0x8720,	// (0x000135fa) bg_passive_tab_pane_g3_cp1

0x8729,	// (0x00013603) bg_active_tab_pane_g1_cp2

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp2

0x8732,	// (0x0001360c) bg_active_tab_pane_g3_cp2

0x8729,	// (0x00013603) bg_passive_tab_pane_g1_cp2

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp2

0x8732,	// (0x0001360c) bg_passive_tab_pane_g3_cp2

0x873b,	// (0x00013615) bg_active_tab_pane_g1_cp3

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp3

0x8744,	// (0x0001361e) bg_active_tab_pane_g3_cp3

0x873b,	// (0x00013615) bg_passive_tab_pane_g1_cp3

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp3

0x8744,	// (0x0001361e) bg_passive_tab_pane_g3_cp3

0x874d,	// (0x00013627) bg_active_tab_pane_g1_cp4

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp4

0x8758,	// (0x00013632) bg_active_tab_pane_g3_cp4

0x874d,	// (0x00013627) bg_passive_tab_pane_g1_cp4

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp4

0x8758,	// (0x00013632) bg_passive_tab_pane_g3_cp4

0x87a1,	// (0x0001367b) bg_active_tab_pane_g1_cp5

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp5

0x87aa,	// (0x00013684) bg_active_tab_pane_g3_cp5

0x87a1,	// (0x0001367b) bg_passive_tab_pane_g1_cp5

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp5

0x87aa,	// (0x00013684) bg_passive_tab_pane_g3_cp5

0x87b3,	// (0x0001368d) list_set_graphic_pane_ParamLimits

0x87b3,	// (0x0001368d) list_set_graphic_pane

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp4

0x87d0,	// (0x000136aa) list_set_graphic_pane_g1_ParamLimits

0x87d0,	// (0x000136aa) list_set_graphic_pane_g1

0x87dc,	// (0x000136b6) list_set_graphic_pane_g2_ParamLimits

0x87dc,	// (0x000136b6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a628) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a628) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a9a9) volume_small_pane_cp_g

0x8800,	// (0x000136da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8800,	// (0x000136da) list_double2_large_graphic_pane_g1_cp2

0x880c,	// (0x000136e6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x880c,	// (0x000136e6) list_double2_large_graphic_pane_g2_cp2

0x881d,	// (0x000136f7) list_double2_large_graphic_pane_g3_cp2

0x8825,	// (0x000136ff) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8825,	// (0x000136ff) list_double2_large_graphic_pane_t1_cp2

0x883b,	// (0x00013715) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x883b,	// (0x00013715) list_double2_large_graphic_pane_t2_cp2

0xa542,	// (0x0001541c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa542,	// (0x0001541c) list_double_large_graphic_pane_g1_cp2

0xa553,	// (0x0001542d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa553,	// (0x0001542d) list_double_large_graphic_pane_g2_cp2

0x89b6,	// (0x00013890) list_double_large_graphic_pane_g3_cp2

0xa564,	// (0x0001543e) list_double_large_graphic_pane_g4_cp

0xa56c,	// (0x00015446) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa56c,	// (0x00015446) list_double_large_graphic_pane_t1_cp2

0xa583,	// (0x0001545d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa583,	// (0x0001545d) list_double_large_graphic_pane_t2_cp2

0x88a8,	// (0x00013782) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88a8,	// (0x00013782) list_double2_graphic_pane_g1_cp2

0x88b6,	// (0x00013790) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88b6,	// (0x00013790) list_double2_graphic_pane_g2_cp2

0x88c7,	// (0x000137a1) list_double2_graphic_pane_g3_cp2

0x88d1,	// (0x000137ab) list_double2_graphic_pane_t1_cp2_ParamLimits

0x88d1,	// (0x000137ab) list_double2_graphic_pane_t1_cp2

0x88e7,	// (0x000137c1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x88e7,	// (0x000137c1) list_double2_graphic_pane_t2_cp2

0x88f9,	// (0x000137d3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x88f9,	// (0x000137d3) list_single_number_heading_pane_g1_cp2

0x8905,	// (0x000137df) list_single_number_heading_pane_g2_cp2

0x890d,	// (0x000137e7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x890d,	// (0x000137e7) list_single_number_heading_pane_t1_cp2

0x8923,	// (0x000137fd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8923,	// (0x000137fd) list_single_number_heading_pane_t2_cp2

0x8935,	// (0x0001380f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8935,	// (0x0001380f) list_single_number_heading_pane_t3_cp2

0x88f9,	// (0x000137d3) list_single_heading_pane_g1_cp2_ParamLimits

0x88f9,	// (0x000137d3) list_single_heading_pane_g1_cp2

0x8905,	// (0x000137df) list_single_heading_pane_g2_cp2

0x890d,	// (0x000137e7) list_single_heading_pane_t1_cp2_ParamLimits

0x890d,	// (0x000137e7) list_single_heading_pane_t1_cp2

0xa34a,	// (0x00015224) list_single_heading_pane_t2_cp2_ParamLimits

0xa34a,	// (0x00015224) list_single_heading_pane_t2_cp2

0xa292,	// (0x0001516c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa292,	// (0x0001516c) list_double_graphic_pane_g1_cp2

0xa29e,	// (0x00015178) list_double_graphic_pane_g2_cp2_ParamLimits

0xa29e,	// (0x00015178) list_double_graphic_pane_g2_cp2

0xa2ad,	// (0x00015187) list_double_graphic_pane_g3_cp2

0xa2b5,	// (0x0001518f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2b5,	// (0x0001518f) list_double_graphic_pane_t1_cp2

0xa2cb,	// (0x000151a5) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2cb,	// (0x000151a5) list_double_graphic_pane_t2_cp2

0x89aa,	// (0x00013884) list_double_number_pane_g1_cp2_ParamLimits

0x89aa,	// (0x00013884) list_double_number_pane_g1_cp2

0x89b6,	// (0x00013890) list_double_number_pane_g2_cp2

0xa256,	// (0x00015130) list_double_number_pane_t1_cp2_ParamLimits

0xa256,	// (0x00015130) list_double_number_pane_t1_cp2

0xa26a,	// (0x00015144) list_double_number_pane_t2_cp2_ParamLimits

0xa26a,	// (0x00015144) list_double_number_pane_t2_cp2

0xa280,	// (0x0001515a) list_double_number_pane_t3_cp2_ParamLimits

0xa280,	// (0x0001515a) list_double_number_pane_t3_cp2

0xa13f,	// (0x00015019) list_single_graphic_pane_g1_cp2_ParamLimits

0xa13f,	// (0x00015019) list_single_graphic_pane_g1_cp2

0x8a0e,	// (0x000138e8) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a0e,	// (0x000138e8) list_single_graphic_pane_g2_cp2

0x8a1a,	// (0x000138f4) list_single_graphic_pane_g3_cp2

0xa115,	// (0x00014fef) list_single_graphic_pane_t1_cp2_ParamLimits

0xa115,	// (0x00014fef) list_single_graphic_pane_t1_cp2

0x8a0e,	// (0x000138e8) list_single_number_pane_g1_cp2_ParamLimits

0x8a0e,	// (0x000138e8) list_single_number_pane_g1_cp2

0x8a1a,	// (0x000138f4) list_single_number_pane_g2_cp2

0xa115,	// (0x00014fef) list_single_number_pane_t1_cp2_ParamLimits

0xa115,	// (0x00014fef) list_single_number_pane_t1_cp2

0xa12b,	// (0x00015005) list_single_number_pane_t2_cp2_ParamLimits

0xa12b,	// (0x00015005) list_single_number_pane_t2_cp2

0x880c,	// (0x000136e6) list_double2_pane_g1_cp2_ParamLimits

0x880c,	// (0x000136e6) list_double2_pane_g1_cp2

0x881d,	// (0x000136f7) list_double2_pane_g2_cp2

0x8982,	// (0x0001385c) list_double2_pane_t1_cp2_ParamLimits

0x8982,	// (0x0001385c) list_double2_pane_t1_cp2

0x8998,	// (0x00013872) list_double2_pane_t2_cp2_ParamLimits

0x8998,	// (0x00013872) list_double2_pane_t2_cp2

0x89aa,	// (0x00013884) list_double_pane_g1_cp2_ParamLimits

0x89aa,	// (0x00013884) list_double_pane_g1_cp2

0x89b6,	// (0x00013890) list_double_pane_g2_cp2

0x89be,	// (0x00013898) list_double_pane_t1_cp2_ParamLimits

0x89be,	// (0x00013898) list_double_pane_t1_cp2

0x89d4,	// (0x000138ae) list_double_pane_t2_cp2_ParamLimits

0x89d4,	// (0x000138ae) list_double_pane_t2_cp2

0x89fe,	// (0x000138d8) list_single_pane_cp2_g3

0x8a0e,	// (0x000138e8) list_single_pane_g1_cp2_ParamLimits

0x8a0e,	// (0x000138e8) list_single_pane_g1_cp2

0x8a1a,	// (0x000138f4) list_single_pane_g2_cp2

0x8a22,	// (0x000138fc) list_single_pane_t1_cp2_ParamLimits

0x8a22,	// (0x000138fc) list_single_pane_t1_cp2

0x8a3a,	// (0x00013914) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a3a,	// (0x00013914) list_single_large_graphic_pane_g1_cp2

0x8a46,	// (0x00013920) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a46,	// (0x00013920) list_single_large_graphic_pane_g2_cp2

0x8a52,	// (0x0001392c) list_single_large_graphic_pane_g3_cp2

0x8a5a,	// (0x00013934) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a5a,	// (0x00013934) list_single_large_graphic_pane_g4_cp1

0x8a74,	// (0x0001394e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a74,	// (0x0001394e) list_single_large_graphic_pane_t1_cp2

0xa0e1,	// (0x00014fbb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0e1,	// (0x00014fbb) list_single_graphic_heading_pane_g1_cp2

0xa0ae,	// (0x00014f88) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0ae,	// (0x00014f88) list_single_graphic_heading_pane_g4_cp2

0x8a1a,	// (0x000138f4) list_single_graphic_heading_pane_g5_cp2

0xa0ed,	// (0x00014fc7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa0ed,	// (0x00014fc7) list_single_graphic_heading_pane_t1_cp2

0xa103,	// (0x00014fdd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa103,	// (0x00014fdd) list_single_graphic_heading_pane_t2_cp2

0xa0a2,	// (0x00014f7c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0a2,	// (0x00014f7c) list_single_2graphic_pane_g1_cp2

0xa0ae,	// (0x00014f88) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0ae,	// (0x00014f88) list_single_2graphic_pane_g2_cp2

0x8a1a,	// (0x000138f4) list_single_2graphic_pane_g3_cp2

0xa0bf,	// (0x00014f99) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0bf,	// (0x00014f99) list_single_2graphic_pane_g4_cp2

0xa0cb,	// (0x00014fa5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0cb,	// (0x00014fa5) list_single_2graphic_pane_t1_cp2

0x6d26,	// (0x00011c00) list_highlight_pane_g10_cp1

0x9c6e,	// (0x00014b48) list_highlight_pane_g1_cp1

0x9c76,	// (0x00014b50) list_highlight_pane_g2_cp1

0x9c7e,	// (0x00014b58) list_highlight_pane_g3_cp1

0x9c86,	// (0x00014b60) list_highlight_pane_g4_cp1

0x9c8e,	// (0x00014b68) list_highlight_pane_g5_cp1

0x9c96,	// (0x00014b70) list_highlight_pane_g6_cp1

0x9c9e,	// (0x00014b78) list_highlight_pane_g7_cp1

0x9ca6,	// (0x00014b80) list_highlight_pane_g8_cp1

0x9cae,	// (0x00014b88) list_highlight_pane_g9_cp1

0x9b8e,	// (0x00014a68) form_field_slider_pane_t3

0x9b9c,	// (0x00014a76) form_field_slider_pane_t4

0x9baa,	// (0x00014a84) slider_form_pane_ParamLimits

0x9baa,	// (0x00014a84) slider_form_pane

0x6d30,	// (0x00011c0a) control_abbreviations

0x6d30,	// (0x00011c0a) control_conventions

0x6d30,	// (0x00011c0a) control_definitions

0x6d30,	// (0x00011c0a) format_table_attribute

0xa394,	// (0x0001526e) bg_popup_preview_window_pane_g9

0x6d30,	// (0x00011c0a) format_table_data2

0x6d30,	// (0x00011c0a) format_table_data3

0x6d30,	// (0x00011c0a) format_table_data_example

0x0008,

0x6d30,	// (0x00011c0a) intro_purpose

0xf8ea,	// (0x0001a7c4) bg_popup_preview_window_pane_g

0x6d30,	// (0x00011c0a) texts_category

0x6d30,	// (0x00011c0a) texts_graphics

0x8a8a,	// (0x00013964) text_digital

0x8a99,	// (0x00013973) text_primary

0x8aa8,	// (0x00013982) text_primary_small

0x8ab7,	// (0x00013991) text_secondary

0x8ac6,	// (0x000139a0) text_title

0xabb4,	// (0x00015a8e) bg_passive_tab_pane_g1_cp3_srt

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp3_srt

0xabbd,	// (0x00015a97) bg_passive_tab_pane_g3_cp3_srt

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp3_srt_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp3_srt

0xabc6,	// (0x00015aa0) tabs_4_active_pane_srt_g1

0xabce,	// (0x00015aa8) tabs_4_active_pane_srt_t1_ParamLimits

0xabce,	// (0x00015aa8) tabs_4_active_pane_srt_t1

0xabb4,	// (0x00015a8e) bg_active_tab_pane_g1_cp3_copy1

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp3_copy1

0xabbd,	// (0x00015a97) bg_active_tab_pane_g3_cp3_copy1

0x6e10,	// (0x00011cea) tabs_2_long_active_pane_srt_ParamLimits

0x6e10,	// (0x00011cea) tabs_2_long_active_pane_srt

0x6e10,	// (0x00011cea) tabs_2_long_passive_pane_srt_ParamLimits

0x6e10,	// (0x00011cea) tabs_2_long_passive_pane_srt

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp4_srt

0xa7df,	// (0x000156b9) bg_passive_tab_pane_g1_cp4_srt

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp4_srt

0xa7e8,	// (0x000156c2) bg_passive_tab_pane_g3_cp4_srt

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp4_srt

0xa7f1,	// (0x000156cb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa7f1,	// (0x000156cb) tabs_2_long_active_pane_srt_t1

0xa7df,	// (0x000156b9) bg_active_tab_pane_g1_cp4_srt

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp4_srt

0xa7e8,	// (0x000156c2) bg_active_tab_pane_g3_cp4_srt

0x70a5,	// (0x00011f7f) tabs_3_long_active_pane_srt_ParamLimits

0x70a5,	// (0x00011f7f) tabs_3_long_active_pane_srt

0x70a5,	// (0x00011f7f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x70a5,	// (0x00011f7f) tabs_3_long_passive_pane_cp_srt

0x70a5,	// (0x00011f7f) tabs_3_long_passive_pane_srt_ParamLimits

0x70a5,	// (0x00011f7f) tabs_3_long_passive_pane_srt

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp5_srt

0x87a1,	// (0x0001367b) bg_passive_tab_pane_g1_cp5_srt

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp5_srt

0x87aa,	// (0x00013684) bg_passive_tab_pane_g3_cp5_srt

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp5_srt

0xa7cd,	// (0x000156a7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7cd,	// (0x000156a7) tabs_3_long_active_pane_srt_t1

0x87a1,	// (0x0001367b) bg_active_tab_pane_g1_cp5_srt

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp5_srt

0x87aa,	// (0x00013684) bg_active_tab_pane_g3_cp5_srt

0xa7bf,	// (0x00015699) navi_text_pane_srt_t1

0xa7b7,	// (0x00015691) navi_icon_pane_srt_g1

0x8c9b,	// (0x00013b75) midp_editing_number_pane_srt

0x8ad5,	// (0x000139af) midp_ticker_pane_srt

0x8ca3,	// (0x00013b7d) midp_ticker_pane_srt_g1

0x8cab,	// (0x00013b85) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a647) midp_ticker_pane_srt_g

0x8cb3,	// (0x00013b8d) midp_ticker_pane_srt_t1

0xa7a8,	// (0x00015682) midp_editing_number_pane_t1_copy1

0x8add,	// (0x000139b7) listscroll_midp_pane

0x8add,	// (0x000139b7) midp_form_pane

0x8b4d,	// (0x00013a27) midp_info_popup_window_ParamLimits

0x8b4d,	// (0x00013a27) midp_info_popup_window

0x7e5a,	// (0x00012d34) bg_popup_sub_pane_cp50_ParamLimits

0x7e5a,	// (0x00012d34) bg_popup_sub_pane_cp50

0x989a,	// (0x00014774) listscroll_midp_info_pane_ParamLimits

0x989a,	// (0x00014774) listscroll_midp_info_pane

0x987a,	// (0x00014754) listscroll_form_midp_pane_ParamLimits

0x987a,	// (0x00014754) listscroll_form_midp_pane

0x9886,	// (0x00014760) scroll_bar_cp050

0x985a,	// (0x00014734) list_midp_pane

0xb94f,	// (0x00016829) signal_pane_g2_cp

0x9794,	// (0x0001466e) listscroll_midp_info_pane_t1_ParamLimits

0x9794,	// (0x0001466e) listscroll_midp_info_pane_t1

0x97ac,	// (0x00014686) listscroll_midp_info_pane_t2_ParamLimits

0x97ac,	// (0x00014686) listscroll_midp_info_pane_t2

0x97ea,	// (0x000146c4) listscroll_midp_info_pane_t3_ParamLimits

0x97ea,	// (0x000146c4) listscroll_midp_info_pane_t3

0x9824,	// (0x000146fe) listscroll_midp_info_pane_t4_ParamLimits

0x9824,	// (0x000146fe) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a6ff) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a6ff) listscroll_midp_info_pane_t

0x7f1e,	// (0x00012df8) scroll_pane_cp21

0x9732,	// (0x0001460c) form_midp_field_choice_group_pane

0x973b,	// (0x00014615) form_midp_field_text_pane

0x977a,	// (0x00014654) form_midp_field_time_pane

0x9782,	// (0x0001465c) form_midp_gauge_slider_pane

0x978b,	// (0x00014665) form_midp_gauge_wait_pane

0x6d30,	// (0x00011c0a) form_midp_image_pane

0x9704,	// (0x000145de) list_single_midp_pane_ParamLimits

0x9704,	// (0x000145de) list_single_midp_pane

0x96bc,	// (0x00014596) form_midp_field_text_pane_t1

0x947d,	// (0x00014357) input_focus_pane_cp050

0x96f3,	// (0x000145cd) list_midp_form_text_pane

0x968b,	// (0x00014565) form_midp_field_choice_group_pane_t1

0x9699,	// (0x00014573) input_focus_pane_cp051

0x96ad,	// (0x00014587) list_midp_choice_pane

0x6d30,	// (0x00011c0a) status_idle_pane

0x966f,	// (0x00014549) form_midp_field_time_pane_t1

0x6d26,	// (0x00011c00) wait_anim_pane_g2_copy1

0x967d,	// (0x00014557) form_midp_field_time_pane_t2

0x0001,

0x8bfb,	// (0x00013ad5) aid_navinavi_width_2_pane

0xf820,	// (0x0001a6fa) form_midp_field_time_pane_t

0x6d30,	// (0x00011c0a) input_focus_pane_cp052

0x6d30,	// (0x00011c0a) bg_input_focus_pane_cp040

0x962f,	// (0x00014509) form_midp_gauge_slider_pane_t1

0x963d,	// (0x00014517) form_midp_gauge_slider_pane_t2

0x964b,	// (0x00014525) form_midp_gauge_slider_pane_t3

0x9659,	// (0x00014533) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a6f1) form_midp_gauge_slider_pane_t

0x9667,	// (0x00014541) form_midp_slider_pane

0x6e10,	// (0x00011cea) bg_input_focus_pane_cp041_ParamLimits

0x6e10,	// (0x00011cea) bg_input_focus_pane_cp041

0x95fc,	// (0x000144d6) form_midp_gauge_wait_pane_t1_ParamLimits

0x95fc,	// (0x000144d6) form_midp_gauge_wait_pane_t1

0x960e,	// (0x000144e8) form_midp_gauge_wait_pane_t2_ParamLimits

0x960e,	// (0x000144e8) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a6ec) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a6ec) form_midp_gauge_wait_pane_t

0x9620,	// (0x000144fa) form_midp_wait_pane_ParamLimits

0x9620,	// (0x000144fa) form_midp_wait_pane

0x95c6,	// (0x000144a0) form_midp_image_pane_g1

0x95cf,	// (0x000144a9) form_midp_image_pane_t1

0x95de,	// (0x000144b8) form_midp_image_pane_t2

0x95ed,	// (0x000144c7) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a6e5) form_midp_image_pane_t

0x95ae,	// (0x00014488) list_single_midp_pane_g1

0x95b7,	// (0x00014491) list_single_midp_pane_t1

0x9586,	// (0x00014460) list_midp_form_item_pane_ParamLimits

0x9586,	// (0x00014460) list_midp_form_item_pane

0x8ba3,	// (0x00013a7d) list_midp_form_item_pane_t1

0x8bb2,	// (0x00013a8c) midp_ticker_pane_g1

0x8bbe,	// (0x00013a98) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a62d) midp_ticker_pane_g

0x8bca,	// (0x00013aa4) midp_ticker_pane_t1

0xaa2c,	// (0x00015906) midp_editing_number_pane_t1

0xaa0a,	// (0x000158e4) midp_editing_number_pane

0xaa19,	// (0x000158f3) midp_ticker_pane

0xa770,	// (0x0001564a) ai_message_heading_pane

0x6d30,	// (0x00011c0a) bg_popup_window_pane_cp14

0xa778,	// (0x00015652) listscroll_ai_message_pane

0xa6fa,	// (0x000155d4) ai_message_heading_pane_g1_ParamLimits

0xa6fa,	// (0x000155d4) ai_message_heading_pane_g1

0xa706,	// (0x000155e0) ai_message_heading_pane_g2_ParamLimits

0xa706,	// (0x000155e0) ai_message_heading_pane_g2

0xa712,	// (0x000155ec) ai_message_heading_pane_g3_ParamLimits

0xa712,	// (0x000155ec) ai_message_heading_pane_g3

0xa71e,	// (0x000155f8) ai_message_heading_pane_g4_ParamLimits

0xa71e,	// (0x000155f8) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a826) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a826) ai_message_heading_pane_g

0xa72a,	// (0x00015604) ai_message_heading_pane_t1_ParamLimits

0xa72a,	// (0x00015604) ai_message_heading_pane_t1

0xa744,	// (0x0001561e) ai_message_heading_pane_t2_ParamLimits

0xa744,	// (0x0001561e) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a82f) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a82f) ai_message_heading_pane_t

0xa756,	// (0x00015630) bg_popup_heading_pane_cp1_ParamLimits

0xa756,	// (0x00015630) bg_popup_heading_pane_cp1

0xa6e8,	// (0x000155c2) list_ai_message_pane_ParamLimits

0xa6e8,	// (0x000155c2) list_ai_message_pane

0x7f1e,	// (0x00012df8) scroll_pane_cp10

0xa684,	// (0x0001555e) list_ai_message_pane_g1

0xa68c,	// (0x00015566) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a803) list_ai_message_pane_g

0xa694,	// (0x0001556e) list_ai_message_pane_t1_ParamLimits

0xa694,	// (0x0001556e) list_ai_message_pane_t1

0xa6a9,	// (0x00015583) list_ai_message_pane_t2_ParamLimits

0xa6a9,	// (0x00015583) list_ai_message_pane_t2

0xa6be,	// (0x00015598) list_ai_message_pane_t3_ParamLimits

0xa6be,	// (0x00015598) list_ai_message_pane_t3

0xa6d3,	// (0x000155ad) list_ai_message_pane_t4_ParamLimits

0xa6d3,	// (0x000155ad) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a808) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a808) list_ai_message_pane_t

0xa66f,	// (0x00015549) cell_ai_soft_ind_pane_ParamLimits

0xa66f,	// (0x00015549) cell_ai_soft_ind_pane

0x8bdc,	// (0x00013ab6) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bdc,	// (0x00013ab6) cell_ai_soft_ind_pane_g1

0x6d30,	// (0x00011c0a) grid_highlight_cp1

0x8be9,	// (0x00013ac3) text_secondary_cp56_ParamLimits

0x8be9,	// (0x00013ac3) text_secondary_cp56

0xa644,	// (0x0001551e) example_general_pane_ParamLimits

0xa644,	// (0x0001551e) example_general_pane

0xa650,	// (0x0001552a) example_parent_pane_g1_ParamLimits

0xa650,	// (0x0001552a) example_parent_pane_g1

0xa65c,	// (0x00015536) example_parent_pane_t1_ParamLimits

0xa65c,	// (0x00015536) example_parent_pane_t1

0x55d6,	// (0x000104b0) popup_preview_text_window_ParamLimits

0x55d6,	// (0x000104b0) popup_preview_text_window

0x8a06,	// (0x000138e0) list_single_pane_cp2_g4

0x7181,	// (0x0001205b) bg_popup_preview_window_pane_ParamLimits

0x7181,	// (0x0001205b) bg_popup_preview_window_pane

0xa39c,	// (0x00015276) popup_preview_text_window_t1_ParamLimits

0xa39c,	// (0x00015276) popup_preview_text_window_t1

0xa3ba,	// (0x00015294) popup_preview_text_window_t2_ParamLimits

0xa3ba,	// (0x00015294) popup_preview_text_window_t2

0xa403,	// (0x000152dd) popup_preview_text_window_t3_ParamLimits

0xa403,	// (0x000152dd) popup_preview_text_window_t3

0xa448,	// (0x00015322) popup_preview_text_window_t4_ParamLimits

0xa448,	// (0x00015322) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a7d7) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a7d7) popup_preview_text_window_t

0xa4c6,	// (0x000153a0) scroll_pane_cp11

0x935b,	// (0x00014235) bg_popup_preview_window_pane_g1

0xa35c,	// (0x00015236) bg_popup_preview_window_pane_g2

0xa364,	// (0x0001523e) bg_popup_preview_window_pane_g3

0xa36c,	// (0x00015246) bg_popup_preview_window_pane_g4

0xa374,	// (0x0001524e) bg_popup_preview_window_pane_g5

0xa37c,	// (0x00015256) bg_popup_preview_window_pane_g6

0xa384,	// (0x0001525e) bg_popup_preview_window_pane_g7

0xa38c,	// (0x00015266) bg_popup_preview_window_pane_g8

0x47bc,	// (0x0000f696) aid_popup_width_pane

0x55b4,	// (0x0001048e) popup_midp_note_alarm_window_ParamLimits

0x55b4,	// (0x0001048e) popup_midp_note_alarm_window

0x7c0c,	// (0x00012ae6) data_form_pane_ParamLimits

0x7c18,	// (0x00012af2) form_field_data_pane_g1

0x7c22,	// (0x00012afc) form_field_data_pane_t1_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_ParamLimits

0x7c48,	// (0x00012b22) data_form_wide_pane_ParamLimits

0x7c54,	// (0x00012b2e) form_field_data_wide_pane_g1

0x7c74,	// (0x00012b4e) form_field_data_wide_pane_t1_ParamLimits

0x7430,	// (0x0001230a) input_focus_pane_cp6_ParamLimits

0x7ecb,	// (0x00012da5) input_popup_find_pane_g1_ParamLimits

0x7ecb,	// (0x00012da5) input_popup_find_pane_g1

0x4d38,	// (0x0000fc12) aid_navi_side_left_pane

0x4d4d,	// (0x0000fc27) aid_navi_side_right_pane

0x9d69,	// (0x00014c43) bg_popup_window_pane_cp30_ParamLimits

0x9d69,	// (0x00014c43) bg_popup_window_pane_cp30

0x9de3,	// (0x00014cbd) popup_midp_note_alarm_window_g1_ParamLimits

0x9de3,	// (0x00014cbd) popup_midp_note_alarm_window_g1

0x9e13,	// (0x00014ced) popup_midp_note_alarm_window_t1_ParamLimits

0x9e13,	// (0x00014ced) popup_midp_note_alarm_window_t1

0x9eb4,	// (0x00014d8e) popup_midp_note_alarm_window_t2_ParamLimits

0x9eb4,	// (0x00014d8e) popup_midp_note_alarm_window_t2

0x9f62,	// (0x00014e3c) popup_midp_note_alarm_window_t3_ParamLimits

0x9f62,	// (0x00014e3c) popup_midp_note_alarm_window_t3

0x9f94,	// (0x00014e6e) popup_midp_note_alarm_window_t4_ParamLimits

0x9f94,	// (0x00014e6e) popup_midp_note_alarm_window_t4

0x9fba,	// (0x00014e94) popup_midp_note_alarm_window_t5_ParamLimits

0x9fba,	// (0x00014e94) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a774) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a774) popup_midp_note_alarm_window_t

0xa072,	// (0x00014f4c) wait_bar_pane_cp1_ParamLimits

0xa072,	// (0x00014f4c) wait_bar_pane_cp1

0x6d30,	// (0x00011c0a) wait_anim_pane_copy1

0x6d30,	// (0x00011c0a) wait_border_pane_copy1

0x9a4f,	// (0x00014929) wait_border_pane_g1_copy1

0x7c8b,	// (0x00012b65) form_field_popup_pane_g1

0x7c93,	// (0x00012b6d) form_field_popup_pane_t1_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_cp7_ParamLimits

0x7cab,	// (0x00012b85) list_form_pane_ParamLimits

0x7cb7,	// (0x00012b91) form_field_popup_wide_pane_g1

0x7cbf,	// (0x00012b99) form_field_popup_wide_pane_t1_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_cp8_ParamLimits

0x7cd1,	// (0x00012bab) list_form_wide_pane_ParamLimits

0xac48,	// (0x00015b22) aid_size_cell_graphic_pane

0x7da5,	// (0x00012c7f) data_form_pane_t1_ParamLimits

0xa9d7,	// (0x000158b1) data_form_wide_pane_t1_ParamLimits

0x8efa,	// (0x00013dd4) bg_status_flat_pane

0x6d70,	// (0x00011c4a) title_pane_t1_ParamLimits

0x6dd8,	// (0x00011cb2) title_pane_t2_ParamLimits

0x6dfe,	// (0x00011cd8) title_pane_t3_ParamLimits

0xf557,	// (0x0001a431) title_pane_t_ParamLimits

0x839f,	// (0x00013279) level_1_signal_ParamLimits

0x83b1,	// (0x0001328b) level_2_signal_ParamLimits

0x83c4,	// (0x0001329e) level_3_signal_ParamLimits

0x83d7,	// (0x000132b1) level_4_signal_ParamLimits

0x83ea,	// (0x000132c4) level_5_signal_ParamLimits

0x83fd,	// (0x000132d7) level_6_signal_ParamLimits

0x8410,	// (0x000132ea) level_7_signal_ParamLimits

0x839f,	// (0x00013279) level_1_battery_ParamLimits

0x83b1,	// (0x0001328b) level_2_battery_ParamLimits

0x83c4,	// (0x0001329e) level_3_battery_ParamLimits

0x83d7,	// (0x000132b1) level_4_battery_ParamLimits

0x83ea,	// (0x000132c4) level_5_battery_ParamLimits

0x83fd,	// (0x000132d7) level_6_battery_ParamLimits

0x8410,	// (0x000132ea) level_7_battery_ParamLimits

0x9c6e,	// (0x00014b48) bg_status_flat_pane_g1

0x9c76,	// (0x00014b50) bg_status_flat_pane_g2

0x9c7e,	// (0x00014b58) bg_status_flat_pane_g3

0x9c86,	// (0x00014b60) bg_status_flat_pane_g4

0x9c8e,	// (0x00014b68) bg_status_flat_pane_g5

0x9c96,	// (0x00014b70) bg_status_flat_pane_g6

0x9c9e,	// (0x00014b78) bg_status_flat_pane_g7

0x6e26,	// (0x00011d00) tabs_3_active_pane_t1_ParamLimits

0x6e26,	// (0x00011d00) tabs_3_passive_pane_t1_ParamLimits

0x6e40,	// (0x00011d1a) tabs_4_active_pane_t1_ParamLimits

0x6e40,	// (0x00011d1a) tabs_4_1_passive_pane_t1_ParamLimits

0x7f5f,	// (0x00012e39) tabs_2_active_pane_t1_ParamLimits

0x7f5f,	// (0x00012e39) tabs_2_passive_pane_t1_ParamLimits

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp4_ParamLimits

0x7f7f,	// (0x00012e59) tabs_2_long_active_pane_t1_ParamLimits

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp4_ParamLimits

0x58fb,	// (0x000107d5) list_single_midp_graphic_pane_t1_ParamLimits

0x7f71,	// (0x00012e4b) bg_active_tab_pane_cp5_ParamLimits

0x7f9e,	// (0x00012e78) tabs_3_long_active_pane_t1_ParamLimits

0x7f92,	// (0x00012e6c) bg_passive_tab_pane_cp5_ParamLimits

0x58fb,	// (0x000107d5) list_single_midp_graphic_pane_t1

0x8efa,	// (0x00013dd4) bg_status_flat_pane_ParamLimits

0x8fbd,	// (0x00013e97) indicator_pane_cp2_ParamLimits

0x8fbd,	// (0x00013e97) indicator_pane_cp2

0x90e8,	// (0x00013fc2) navi_pane_srt_ParamLimits

0x90e8,	// (0x00013fc2) navi_pane_srt

0x910c,	// (0x00013fe6) popup_clock_digital_analogue_window_cp1

0x6f07,	// (0x00011de1) indicator_pane_t1

0x8ad5,	// (0x000139af) copy_highlight_pane

0x8ad5,	// (0x000139af) cursor_graphics_pane

0x8ad5,	// (0x000139af) graphic_within_text_pane

0x8ad5,	// (0x000139af) link_highlight_pane

0xa489,	// (0x00015363) popup_preview_text_window_t5_ParamLimits

0xa489,	// (0x00015363) popup_preview_text_window_t5

0x8c03,	// (0x00013add) cursor_digital_pane

0x8c03,	// (0x00013add) cursor_primary_pane

0x8c14,	// (0x00013aee) cursor_primary_small_pane

0x8c1c,	// (0x00013af6) cursor_secondary_pane

0x8c24,	// (0x00013afe) cursor_title_pane

0x8c03,	// (0x00013add) link_highlight_digital_pane

0x8c0b,	// (0x00013ae5) link_highlight_primary_pane

0x8c14,	// (0x00013aee) link_highlight_primary_small_pane

0x8c1c,	// (0x00013af6) link_highlight_secondary_pane

0x8c24,	// (0x00013afe) link_highlight_title_pane

0x8c03,	// (0x00013add) copy_highlight_digital_pane

0x8c03,	// (0x00013add) copy_highlight_primary_pane

0x8c14,	// (0x00013aee) copy_highlight_primary_small_pane

0x8c1c,	// (0x00013af6) copy_highlight_secondary_pane

0x8c24,	// (0x00013afe) copy_highlight_title_pane

0x8c1c,	// (0x00013af6) graphic_text_digital_pane

0x9d0c,	// (0x00014be6) graphic_text_primary_pane

0x9d15,	// (0x00014bef) graphic_text_primary_small_pane

0x8c14,	// (0x00013aee) graphic_text_secondary_pane

0x8c03,	// (0x00013add) graphic_text_title_pane

0x8c2c,	// (0x00013b06) cursor_primary_pane_g1

0x9cfe,	// (0x00014bd8) cursor_text_primary_t1

0x9ce6,	// (0x00014bc0) cursor_primary_small_pane_g1

0x9cf0,	// (0x00014bca) cursor_text_primary_small_t1

0x9cce,	// (0x00014ba8) cursor_primary_small_pane_g1_copy1

0x9cd8,	// (0x00014bb2) cursor_text_primary_small_t1_copy1

0x9cb6,	// (0x00014b90) cursor_text_title_t1

0x9cc4,	// (0x00014b9e) cursor_title_pane_g1

0x8c2c,	// (0x00013b06) cursor_digital_pane_g1

0x8c36,	// (0x00013b10) cursor_text_digital_t1

0x8c5b,	// (0x00013b35) link_highlight_primary_pane_g1

0x9c5f,	// (0x00014b39) link_highlight_primary_pane_t1

0x8c44,	// (0x00013b1e) link_highlight_primary_small_pane_g1

0x8c4c,	// (0x00013b26) link_highlight_primary_small_pane_t1

0x8c5b,	// (0x00013b35) link_highlight_secondary_pane_g1

0x8c63,	// (0x00013b3d) link_highlight_secondary_pane_t1

0x9bd3,	// (0x00014aad) link_highlight_title_pane_g1

0x9bdb,	// (0x00014ab5) link_highlight_title_pane_t1

0x9bbc,	// (0x00014a96) link_highlight_digital_pane_g1

0x9bc4,	// (0x00014a9e) link_highlight_digital_pane_t1

0x9a94,	// (0x0001496e) copy_highlight_primary_pane_g1

0x9a9c,	// (0x00014976) copy_highlight_primary_pane_t1

0x9a6e,	// (0x00014948) copy_highlight_primary_small_pane_g1

0x9a85,	// (0x0001495f) copy_highlight_primary_small_pane_t1

0x8c72,	// (0x00013b4c) copy_highlight_secondary_pane_g1

0x8c7a,	// (0x00013b54) copy_highlight_secondary_pane_t1

0x9a6e,	// (0x00014948) copy_highlight_title_pane_g1

0x9a76,	// (0x00014950) copy_highlight_title_pane_t1

0x9a94,	// (0x0001496e) copy_highlight_digital_pane_g1

0xae16,	// (0x00015cf0) copy_highlight_digital_pane_t1

0xad6a,	// (0x00015c44) graphic_text_primary_pane_g1

0xadfa,	// (0x00015cd4) graphic_text_primary_pane_t1

0xae08,	// (0x00015ce2) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a8a3) graphic_text_primary_pane_t

0xadd6,	// (0x00015cb0) graphic_text_primary_small_pane_g1

0xadde,	// (0x00015cb8) graphic_text_primary_small_pane_t1

0xadec,	// (0x00015cc6) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a89e) graphic_text_primary_small_pane_t

0xadb2,	// (0x00015c8c) graphic_text_secondary_pane_g1

0xadba,	// (0x00015c94) graphic_text_secondary_pane_t1

0xadc8,	// (0x00015ca2) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a899) graphic_text_secondary_pane_t

0xad8e,	// (0x00015c68) graphic_text_title_pane_g1

0xad96,	// (0x00015c70) graphic_text_title_pane_t1

0xada4,	// (0x00015c7e) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a894) graphic_text_title_pane_t

0xad6a,	// (0x00015c44) graphic_text_digital_pane_g1

0xad72,	// (0x00015c4c) graphic_text_digital_pane_t1

0xad80,	// (0x00015c5a) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a88f) graphic_text_digital_pane_t

0x6e10,	// (0x00011cea) navi_icon_pane_srt_ParamLimits

0x6e10,	// (0x00011cea) navi_icon_pane_srt

0x6d30,	// (0x00011c0a) navi_midp_pane_srt

0x6d30,	// (0x00011c0a) navi_navi_pane_srt

0x6e10,	// (0x00011cea) navi_text_pane_srt_ParamLimits

0x6e10,	// (0x00011cea) navi_text_pane_srt

0xad35,	// (0x00015c0f) navi_navi_icon_text_pane_srt

0xad3d,	// (0x00015c17) navi_navi_pane_srt_g1_ParamLimits

0xad3d,	// (0x00015c17) navi_navi_pane_srt_g1

0xad4f,	// (0x00015c29) navi_navi_pane_srt_g2_ParamLimits

0xad4f,	// (0x00015c29) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a88a) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a88a) navi_navi_pane_srt_g

0xad61,	// (0x00015c3b) navi_navi_tabs_pane_srt

0xad35,	// (0x00015c0f) navi_navi_text_pane_srt

0xad35,	// (0x00015c0f) navi_navi_volume_pane_srt

0xad26,	// (0x00015c00) navi_navi_text_pane_srt_t1

0x5c75,	// (0x00010b4f) navi_navi_volume_pane_srt_g1

0x5c7d,	// (0x00010b57) volume_small_pane_srt_ParamLimits

0x5c7d,	// (0x00010b57) volume_small_pane_srt

0x5018,	// (0x0000fef2) volume_small_pane_srt_g1_ParamLimits

0x5018,	// (0x0000fef2) volume_small_pane_srt_g1

0x5028,	// (0x0000ff02) volume_small_pane_srt_g2_ParamLimits

0x5028,	// (0x0000ff02) volume_small_pane_srt_g2

0x5039,	// (0x0000ff13) volume_small_pane_srt_g3_ParamLimits

0x5039,	// (0x0000ff13) volume_small_pane_srt_g3

0x504a,	// (0x0000ff24) volume_small_pane_srt_g4_ParamLimits

0x504a,	// (0x0000ff24) volume_small_pane_srt_g4

0x505b,	// (0x0000ff35) volume_small_pane_srt_g5_ParamLimits

0x505b,	// (0x0000ff35) volume_small_pane_srt_g5

0x506c,	// (0x0000ff46) volume_small_pane_srt_g6_ParamLimits

0x506c,	// (0x0000ff46) volume_small_pane_srt_g6

0x507d,	// (0x0000ff57) volume_small_pane_srt_g7_ParamLimits

0x507d,	// (0x0000ff57) volume_small_pane_srt_g7

0x508e,	// (0x0000ff68) volume_small_pane_srt_g8_ParamLimits

0x508e,	// (0x0000ff68) volume_small_pane_srt_g8

0x509f,	// (0x0000ff79) volume_small_pane_srt_g9_ParamLimits

0x509f,	// (0x0000ff79) volume_small_pane_srt_g9

0x50b0,	// (0x0000ff8a) volume_small_pane_srt_g10_ParamLimits

0x50b0,	// (0x0000ff8a) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a632) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a632) volume_small_pane_srt_g

0x722a,	// (0x00012104) query_popup_data_pane_cp2

0xad0c,	// (0x00015be6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad0c,	// (0x00015be6) navi_navi_icon_text_pane_srt_t1

0x9d0c,	// (0x00014be6) navi_tabs_2_long_pane_srt

0x9d0c,	// (0x00014be6) navi_tabs_2_pane_srt

0x9d0c,	// (0x00014be6) navi_tabs_3_long_pane_srt

0x9d0c,	// (0x00014be6) navi_tabs_3_pane_srt

0x9d0c,	// (0x00014be6) navi_tabs_4_pane_srt

0x5c55,	// (0x00010b2f) tabs_2_active_pane_srt_ParamLimits

0x5c55,	// (0x00010b2f) tabs_2_active_pane_srt

0x5c65,	// (0x00010b3f) tabs_2_passive_pane_srt_ParamLimits

0x5c65,	// (0x00010b3f) tabs_2_passive_pane_srt

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp1_srt

0xacd8,	// (0x00015bb2) bg_passive_tab_pane_g1_cp1_srt

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp1_srt

0xace1,	// (0x00015bbb) bg_passive_tab_pane_g3_cp1_srt

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp1_srt_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp1_srt

0xacea,	// (0x00015bc4) tabs_2_active_pane_srt_g1

0xacf2,	// (0x00015bcc) tabs_2_active_pane_srt_t1_ParamLimits

0xacf2,	// (0x00015bcc) tabs_2_active_pane_srt_t1

0xacd8,	// (0x00015bb2) bg_active_tab_pane_g1_cp1_srt

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp1_srt

0xace1,	// (0x00015bbb) bg_active_tab_pane_g3_cp1_srt

0x5c22,	// (0x00010afc) tabs_3_active_pane_srt_ParamLimits

0x5c22,	// (0x00010afc) tabs_3_active_pane_srt

0x5c33,	// (0x00010b0d) tabs_3_passive_pane_cp_srt_ParamLimits

0x5c33,	// (0x00010b0d) tabs_3_passive_pane_cp_srt

0x5c44,	// (0x00010b1e) tabs_3_passive_pane_srt_ParamLimits

0x5c44,	// (0x00010b1e) tabs_3_passive_pane_srt

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e01,	// (0x00013cdb) bg_passive_tab_pane_cp2_srt

0x8c89,	// (0x00013b63) bg_passive_tab_pane_g1_cp2_srt

0x8717,	// (0x000135f1) bg_passive_tab_pane_g2_cp2_srt

0x8c92,	// (0x00013b6c) bg_passive_tab_pane_g3_cp2_srt

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp2_srt_ParamLimits

0x6e10,	// (0x00011cea) bg_active_tab_pane_cp2_srt

0xacbe,	// (0x00015b98) tabs_3_active_pane_srt_g1

0xacc6,	// (0x00015ba0) tabs_3_active_pane_srt_t1_ParamLimits

0xacc6,	// (0x00015ba0) tabs_3_active_pane_srt_t1

0x8c89,	// (0x00013b63) bg_active_tab_pane_g1_cp2_srt

0x8717,	// (0x000135f1) bg_active_tab_pane_g2_cp2_srt

0x8c92,	// (0x00013b6c) bg_active_tab_pane_g3_cp2_srt

0x5bda,	// (0x00010ab4) tabs_4_active_pane_srt_ParamLimits

0x5bda,	// (0x00010ab4) tabs_4_active_pane_srt

0x5bec,	// (0x00010ac6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5bec,	// (0x00010ac6) tabs_4_passive_pane_cp2_srt

0x521f,	// (0x000100f9) aid_size_cell_toolbar

0x7f92,	// (0x00012e6c) main_idle_act_pane_ParamLimits

0x53ea,	// (0x000102c4) popup_large_graphic_colour_window_ParamLimits

0x5751,	// (0x0001062b) popup_toolbar_window_ParamLimits

0x5751,	// (0x0001062b) popup_toolbar_window

0xaa56,	// (0x00015930) list_single_graphic_2heading_pane_ParamLimits

0xaa56,	// (0x00015930) list_single_graphic_2heading_pane

0x814e,	// (0x00013028) aid_size_cell_apps_grid_lsc_pane

0x8160,	// (0x0001303a) aid_size_cell_apps_grid_prt_pane

0x8e01,	// (0x00013cdb) bg_wml_button_pane_cp1_ParamLimits

0x8e01,	// (0x00013cdb) bg_wml_button_pane_cp1

0x96bc,	// (0x00014596) form_midp_field_text_pane_t1_ParamLimits

0x947d,	// (0x00014357) input_focus_pane_cp050_ParamLimits

0x96f3,	// (0x000145cd) list_midp_form_text_pane_ParamLimits

0x9699,	// (0x00014573) input_focus_pane_cp051_ParamLimits

0x96ad,	// (0x00014587) list_midp_choice_pane_ParamLimits

0x9536,	// (0x00014410) list_single_2graphic_pane_cp3_ParamLimits

0x9536,	// (0x00014410) list_single_2graphic_pane_cp3

0x9557,	// (0x00014431) list_single_midp_graphic_pane_ParamLimits

0x9557,	// (0x00014431) list_single_midp_graphic_pane

0x57fe,	// (0x000106d8) list_single_graphic_2heading_pane_g1_ParamLimits

0x57fe,	// (0x000106d8) list_single_graphic_2heading_pane_g1

0x580a,	// (0x000106e4) list_single_graphic_2heading_pane_g4_ParamLimits

0x580a,	// (0x000106e4) list_single_graphic_2heading_pane_g4

0x5816,	// (0x000106f0) list_single_graphic_2heading_pane_g5_ParamLimits

0x5816,	// (0x000106f0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a685) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a685) list_single_graphic_2heading_pane_g

0x5822,	// (0x000106fc) list_single_graphic_2heading_pane_t1_ParamLimits

0x5822,	// (0x000106fc) list_single_graphic_2heading_pane_t1

0x5836,	// (0x00010710) list_single_graphic_2heading_pane_t2_ParamLimits

0x5836,	// (0x00010710) list_single_graphic_2heading_pane_t2

0x5852,	// (0x0001072c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5852,	// (0x0001072c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a68c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a68c) list_single_graphic_2heading_pane_t

0x926b,	// (0x00014145) bg_popup_sub_pane_cp2

0x9295,	// (0x0001416f) grid_toobar_pane

0x586a,	// (0x00010744) cell_toolbar_pane_ParamLimits

0x586a,	// (0x00010744) cell_toolbar_pane

0x92ff,	// (0x000141d9) cell_toolbar_pane_g1_ParamLimits

0x92ff,	// (0x000141d9) cell_toolbar_pane_g1

0x9313,	// (0x000141ed) cell_toolbar_pane_g2_ParamLimits

0x9313,	// (0x000141ed) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a69a) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a69a) cell_toolbar_pane_g

0x9335,	// (0x0001420f) grid_highlight_pane_cp2_ParamLimits

0x9335,	// (0x0001420f) grid_highlight_pane_cp2

0x934f,	// (0x00014229) toolbar_button_pane

0x935b,	// (0x00014235) toolbar_button_pane_g1

0x9363,	// (0x0001423d) toolbar_button_pane_g2

0x936b,	// (0x00014245) toolbar_button_pane_g3

0x9373,	// (0x0001424d) toolbar_button_pane_g4

0x937b,	// (0x00014255) toolbar_button_pane_g5

0x9383,	// (0x0001425d) toolbar_button_pane_g6

0x938b,	// (0x00014265) toolbar_button_pane_g7

0x9393,	// (0x0001426d) toolbar_button_pane_g8

0x939b,	// (0x00014275) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a69f) toolbar_button_pane_g

0x58a2,	// (0x0001077c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x58a2,	// (0x0001077c) list_single_2graphic_pane_g1_cp3

0x58ae,	// (0x00010788) list_single_2graphic_pane_g2_cp3_ParamLimits

0x58ae,	// (0x00010788) list_single_2graphic_pane_g2_cp3

0x58bf,	// (0x00010799) list_single_2graphic_pane_g3_cp3

0x58c7,	// (0x000107a1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x58c7,	// (0x000107a1) list_single_2graphic_pane_g4_cp3

0x58d3,	// (0x000107ad) list_single_2graphic_pane_t1_cp3_ParamLimits

0x58d3,	// (0x000107ad) list_single_2graphic_pane_t1_cp3

0x58ef,	// (0x000107c9) list_single_midp_graphic_pane_g2_ParamLimits

0x58ef,	// (0x000107c9) list_single_midp_graphic_pane_g2

0x5227,	// (0x00010101) aid_zoom_text_primary

0x522f,	// (0x00010109) aid_zoom_text_secondary

0x8d43,	// (0x00013c1d) status_small_pane_g7_ParamLimits

0x8d43,	// (0x00013c1d) status_small_pane_g7

0x8d66,	// (0x00013c40) status_small_pane_t1_ParamLimits

0x6d47,	// (0x00011c21) title_pane_g2

0x0003,

0xf54e,	// (0x0001a428) title_pane_g

0x72ce,	// (0x000121a8) aid_size_cell_colour_1_pane_ParamLimits

0x72ce,	// (0x000121a8) aid_size_cell_colour_1_pane

0x72e2,	// (0x000121bc) aid_size_cell_colour_2_pane_ParamLimits

0x72e2,	// (0x000121bc) aid_size_cell_colour_2_pane

0x72f6,	// (0x000121d0) aid_size_cell_colour_3_pane_ParamLimits

0x72f6,	// (0x000121d0) aid_size_cell_colour_3_pane

0x730a,	// (0x000121e4) aid_size_cell_colour_4_pane_ParamLimits

0x730a,	// (0x000121e4) aid_size_cell_colour_4_pane

0x4c75,	// (0x0000fb4f) title_pane_stacon_g1_ParamLimits

0x4c75,	// (0x0000fb4f) title_pane_stacon_g1

0x9af3,	// (0x000149cd) popup_note_wait_window_g3_ParamLimits

0x9af3,	// (0x000149cd) popup_note_wait_window_g3

0x9b69,	// (0x00014a43) popup_note_wait_window_t5_ParamLimits

0x9b69,	// (0x00014a43) popup_note_wait_window_t5

0x6d30,	// (0x00011c0a) main_feb_china_hwr_fs_writing_pane

0x52cd,	// (0x000101a7) popup_feb_china_hwr_fs_window_ParamLimits

0x52cd,	// (0x000101a7) popup_feb_china_hwr_fs_window

0x5911,	// (0x000107eb) aid_size_cell_hwr_fs_ParamLimits

0x5911,	// (0x000107eb) aid_size_cell_hwr_fs

0x947d,	// (0x00014357) bg_popup_sub_pane_cp3_ParamLimits

0x947d,	// (0x00014357) bg_popup_sub_pane_cp3

0x5926,	// (0x00010800) grid_hwr_fs_pane_ParamLimits

0x5926,	// (0x00010800) grid_hwr_fs_pane

0x593e,	// (0x00010818) linegrid_hwr_fs_pane_ParamLimits

0x593e,	// (0x00010818) linegrid_hwr_fs_pane

0x594e,	// (0x00010828) cell_hwr_fs_pane_ParamLimits

0x594e,	// (0x00010828) cell_hwr_fs_pane

0x9489,	// (0x00014363) linegrid_hwr_fs_pane_g1_ParamLimits

0x9489,	// (0x00014363) linegrid_hwr_fs_pane_g1

0x9495,	// (0x0001436f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9495,	// (0x0001436f) linegrid_hwr_fs_pane_g2

0x94a7,	// (0x00014381) linegrid_hwr_fs_pane_g3_ParamLimits

0x94a7,	// (0x00014381) linegrid_hwr_fs_pane_g3

0x5970,	// (0x0001084a) linegrid_hwr_fs_pane_g4_ParamLimits

0x5970,	// (0x0001084a) linegrid_hwr_fs_pane_g4

0x598a,	// (0x00010864) linegrid_hwr_fs_pane_g5_ParamLimits

0x598a,	// (0x00010864) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a6ca) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a6ca) linegrid_hwr_fs_pane_g

0x94b3,	// (0x0001438d) cell_hwr_fs_pane_g1_ParamLimits

0x94b3,	// (0x0001438d) cell_hwr_fs_pane_g1

0x91a2,	// (0x0001407c) cell_hwr_fs_pane_g2_ParamLimits

0x91a2,	// (0x0001407c) cell_hwr_fs_pane_g2

0x94c9,	// (0x000143a3) cell_hwr_fs_pane_g3_ParamLimits

0x94c9,	// (0x000143a3) cell_hwr_fs_pane_g3

0x94d6,	// (0x000143b0) cell_hwr_fs_pane_g4_ParamLimits

0x94d6,	// (0x000143b0) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a6d5) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a6d5) cell_hwr_fs_pane_g

0x59a0,	// (0x0001087a) cell_hwr_fs_pane_t1

0x6d30,	// (0x00011c0a) grid_highlight_pane_cp6

0x6d30,	// (0x00011c0a) main_idle_act2_pane

0x7f05,	// (0x00012ddf) aid_inside_area_popup_secondary

0xa1ac,	// (0x00015086) aid_inside_area_window_primary_ParamLimits

0xa1ac,	// (0x00015086) aid_inside_area_window_primary

0xae25,	// (0x00015cff) ai2_news_ticker_pane

0xae2d,	// (0x00015d07) aid_size_cell_ai1_link_ParamLimits

0xae2d,	// (0x00015d07) aid_size_cell_ai1_link

0xae47,	// (0x00015d21) popup_ai2_data_window_ParamLimits

0xae47,	// (0x00015d21) popup_ai2_data_window

0xae5d,	// (0x00015d37) popup_ai2_link_window_ParamLimits

0xae5d,	// (0x00015d37) popup_ai2_link_window

0x947d,	// (0x00014357) bg_popup_sub_pane_cp4_ParamLimits

0x947d,	// (0x00014357) bg_popup_sub_pane_cp4

0xae71,	// (0x00015d4b) grid_ai2_link_pane_ParamLimits

0xae71,	// (0x00015d4b) grid_ai2_link_pane

0xae88,	// (0x00015d62) popup_ai2_link_window_g1_ParamLimits

0xae88,	// (0x00015d62) popup_ai2_link_window_g1

0xae94,	// (0x00015d6e) popup_ai2_link_window_g2_ParamLimits

0xae94,	// (0x00015d6e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a8a8) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a8a8) popup_ai2_link_window_g

0xaea3,	// (0x00015d7d) ai2_mp_button_pane

0xaeab,	// (0x00015d85) ai2_mp_volume_pane

0x9699,	// (0x00014573) bg_popup_sub_pane_cp5_ParamLimits

0x9699,	// (0x00014573) bg_popup_sub_pane_cp5

0xaeb3,	// (0x00015d8d) heading_ai2_gene_pane_ParamLimits

0xaeb3,	// (0x00015d8d) heading_ai2_gene_pane

0xaebf,	// (0x00015d99) list_ai2_gene_pane_ParamLimits

0xaebf,	// (0x00015d99) list_ai2_gene_pane

0xaf07,	// (0x00015de1) cell_ai2_link_pane_ParamLimits

0xaf07,	// (0x00015de1) cell_ai2_link_pane

0xaf1d,	// (0x00015df7) cell_ai2_link_pane_g1

0x6d30,	// (0x00011c0a) grid_highlight_pane_cp7

0x5c92,	// (0x00010b6c) ai2_mp_volume_pane_g1

0xafed,	// (0x00015ec7) ai2_mp_volume_pane_g2

0xaf62,	// (0x00015e3c) list_ai2_gene_pane_t1

0xaff5,	// (0x00015ecf) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a8c1) ai2_mp_volume_pane_g

0x5c9a,	// (0x00010b74) volume_small_pane_cp3

0xaffd,	// (0x00015ed7) aid_size_cell_ai2_button

0xb005,	// (0x00015edf) grid_ai2_button_pane

0xb00e,	// (0x00015ee8) cell_ai2_button_pane_ParamLimits

0xb00e,	// (0x00015ee8) cell_ai2_button_pane

0x6d26,	// (0x00011c00) cell_ai2_button_pane_g1

0x6d30,	// (0x00011c0a) grid_highlight_pane_cp8

0xafad,	// (0x00015e87) ai2_gene_pane_t1_ParamLimits

0xafad,	// (0x00015e87) ai2_gene_pane_t1

0x5215,	// (0x000100ef) aid_height_parent_landscape

0xa83f,	// (0x00015719) aid_height_set_list

0xa850,	// (0x0001572a) aid_size_parent

0xac48,	// (0x00015b22) aid_size_cell_graphic_pane_ParamLimits

0xaecf,	// (0x00015da9) popup_ai2_data_window_g1_ParamLimits

0xaecf,	// (0x00015da9) popup_ai2_data_window_g1

0xaedb,	// (0x00015db5) ai2_news_ticker_pane_g1

0xaee3,	// (0x00015dbd) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a8ad) ai2_news_ticker_pane_g

0xaeeb,	// (0x00015dc5) ai2_news_ticker_pane_t1

0xaef9,	// (0x00015dd3) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a8b2) ai2_news_ticker_pane_t

0xaf26,	// (0x00015e00) heading_ai2_gene_pane_g1

0xaf2e,	// (0x00015e08) heading_ai2_gene_pane_t1_ParamLimits

0xaf2e,	// (0x00015e08) heading_ai2_gene_pane_t1

0xaf43,	// (0x00015e1d) list_highlight_pane_cp6

0xaf4b,	// (0x00015e25) ai2_gene_pane_ParamLimits

0xaf4b,	// (0x00015e25) ai2_gene_pane

0xaf70,	// (0x00015e4a) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a8b7) list_ai2_gene_pane_t

0xaf7e,	// (0x00015e58) list_highlight_pane_cp8_ParamLimits

0xaf7e,	// (0x00015e58) list_highlight_pane_cp8

0xaf8f,	// (0x00015e69) ai2_gene_pane_g1_ParamLimits

0xaf8f,	// (0x00015e69) ai2_gene_pane_g1

0xafa1,	// (0x00015e7b) ai2_gene_pane_g2_ParamLimits

0xafa1,	// (0x00015e7b) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a8bc) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a8bc) ai2_gene_pane_g

0x7655,	// (0x0001252f) scroll_pane_cp12

0x51d2,	// (0x000100ac) control_pane_t3_ParamLimits

0x51d2,	// (0x000100ac) control_pane_t3

0x8d57,	// (0x00013c31) status_small_pane_g8_ParamLimits

0x8d57,	// (0x00013c31) status_small_pane_g8

0x53b3,	// (0x0001028d) popup_find_window_ParamLimits

0x55c8,	// (0x000104a2) popup_note_image_window_ParamLimits

0x92d1,	// (0x000141ab) list_double2_graphic_pane_vc_g1_ParamLimits

0x92d1,	// (0x000141ab) list_double2_graphic_pane_vc_g1

0x8a0e,	// (0x000138e8) list_double2_graphic_pane_vc_g2_ParamLimits

0x8a0e,	// (0x000138e8) list_double2_graphic_pane_vc_g2

0x92dd,	// (0x000141b7) list_double2_graphic_pane_vc_g3_ParamLimits

0x92dd,	// (0x000141b7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a693) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a693) list_double2_graphic_pane_vc_g

0x92e9,	// (0x000141c3) list_double2_graphic_pane_vc_t1_ParamLimits

0x92e9,	// (0x000141c3) list_double2_graphic_pane_vc_t1

0x8a0e,	// (0x000138e8) list_single_heading_pane_vc_g1_ParamLimits

0x8a0e,	// (0x000138e8) list_single_heading_pane_vc_g1

0x92dd,	// (0x000141b7) list_single_heading_pane_vc_g2_ParamLimits

0x92dd,	// (0x000141b7) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a6b4) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a6b4) list_single_heading_pane_vc_g

0x93a3,	// (0x0001427d) list_single_heading_pane_vc_t1_ParamLimits

0x93a3,	// (0x0001427d) list_single_heading_pane_vc_t1

0x93b9,	// (0x00014293) list_single_heading_pane_vc_t2_ParamLimits

0x93b9,	// (0x00014293) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a6b9) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a6b9) list_single_heading_pane_vc_t

0x93cb,	// (0x000142a5) list_setting_number_pane_vc_g1_ParamLimits

0x93cb,	// (0x000142a5) list_setting_number_pane_vc_g1

0x93d7,	// (0x000142b1) list_setting_number_pane_vc_g2_ParamLimits

0x93d7,	// (0x000142b1) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a6be) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a6be) list_setting_number_pane_vc_g

0x93e3,	// (0x000142bd) list_setting_number_pane_vc_t1_ParamLimits

0x93e3,	// (0x000142bd) list_setting_number_pane_vc_t1

0x93f7,	// (0x000142d1) list_setting_number_pane_vc_t2_ParamLimits

0x93f7,	// (0x000142d1) list_setting_number_pane_vc_t2

0x9413,	// (0x000142ed) list_setting_number_pane_vc_t3_ParamLimits

0x9413,	// (0x000142ed) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a6c3) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a6c3) list_setting_number_pane_vc_t

0x9441,	// (0x0001431b) set_value_pane_vc_ParamLimits

0x9441,	// (0x0001431b) set_value_pane_vc

0xaa56,	// (0x00015930) list_double2_graphic_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double2_graphic_pane_vc

0xaa56,	// (0x00015930) list_double2_large_graphic_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double2_large_graphic_pane_vc

0xaa56,	// (0x00015930) list_double2_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double2_pane_vc

0xaa56,	// (0x00015930) list_double_graphic_heading_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_graphic_heading_pane_vc

0xaa56,	// (0x00015930) list_double_graphic_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_graphic_pane_vc

0xaa56,	// (0x00015930) list_double_heading_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_heading_pane_vc

0xaa68,	// (0x00015942) list_double_large_graphic_pane_vc_ParamLimits

0xaa68,	// (0x00015942) list_double_large_graphic_pane_vc

0xaa56,	// (0x00015930) list_double_number_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_number_pane_vc

0xaa56,	// (0x00015930) list_double_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_pane_vc

0xaa56,	// (0x00015930) list_double_time_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_double_time_pane_vc

0xaa56,	// (0x00015930) list_setting_number_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_setting_number_pane_vc

0xaa56,	// (0x00015930) list_setting_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_setting_pane_vc

0xaa56,	// (0x00015930) list_single_graphic_heading_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_single_graphic_heading_pane_vc

0xaa56,	// (0x00015930) list_single_heading_pane_vc_ParamLimits

0xaa56,	// (0x00015930) list_single_heading_pane_vc

0xaa86,	// (0x00015960) list_single_number_heading_pane_vc_ParamLimits

0xaa86,	// (0x00015960) list_single_number_heading_pane_vc

0x92d1,	// (0x000141ab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x92d1,	// (0x000141ab) list_double_graphic_heading_pane_vc_g1

0xb042,	// (0x00015f1c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb042,	// (0x00015f1c) list_double_graphic_heading_pane_vc_g2

0xb04e,	// (0x00015f28) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb04e,	// (0x00015f28) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a8c8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a8c8) list_double_graphic_heading_pane_vc_g

0xb05a,	// (0x00015f34) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb05a,	// (0x00015f34) list_double_graphic_heading_pane_vc_t1

0xb076,	// (0x00015f50) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb076,	// (0x00015f50) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a8cf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a8cf) list_double_graphic_heading_pane_vc_t

0x93cb,	// (0x000142a5) list_setting_pane_vc_g1_ParamLimits

0x93cb,	// (0x000142a5) list_setting_pane_vc_g1

0x93d7,	// (0x000142b1) list_setting_pane_vc_g2_ParamLimits

0x93d7,	// (0x000142b1) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a6be) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a6be) list_setting_pane_vc_g

0xb2a1,	// (0x0001617b) list_setting_pane_vc_t1_ParamLimits

0xb2a1,	// (0x0001617b) list_setting_pane_vc_t1

0xb2bd,	// (0x00016197) list_setting_pane_vc_t2_ParamLimits

0xb2bd,	// (0x00016197) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a8fd) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a8fd) list_setting_pane_vc_t

0x9441,	// (0x0001431b) set_value_pane_cp_vc_ParamLimits

0x9441,	// (0x0001431b) set_value_pane_cp_vc

0x8a0e,	// (0x000138e8) list_single_number_heading_pane_vc_g1_ParamLimits

0x8a0e,	// (0x000138e8) list_single_number_heading_pane_vc_g1

0x92dd,	// (0x000141b7) list_single_number_heading_pane_vc_g2_ParamLimits

0x92dd,	// (0x000141b7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a6b4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a6b4) list_single_number_heading_pane_vc_g

0xb2d9,	// (0x000161b3) list_single_number_heading_pane_vc_t1_ParamLimits

0xb2d9,	// (0x000161b3) list_single_number_heading_pane_vc_t1

0xb2ef,	// (0x000161c9) list_single_number_heading_pane_vc_t2_ParamLimits

0xb2ef,	// (0x000161c9) list_single_number_heading_pane_vc_t2

0xb301,	// (0x000161db) list_single_number_heading_pane_vc_t3_ParamLimits

0xb301,	// (0x000161db) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a902) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a902) list_single_number_heading_pane_vc_t

0x92d1,	// (0x000141ab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x92d1,	// (0x000141ab) list_single_graphic_heading_pane_vc_g1

0x8a0e,	// (0x000138e8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8a0e,	// (0x000138e8) list_single_graphic_heading_pane_vc_g4

0x92dd,	// (0x000141b7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x92dd,	// (0x000141b7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a693) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a693) list_single_graphic_heading_pane_vc_g

0xb313,	// (0x000161ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb313,	// (0x000161ed) list_single_graphic_heading_pane_vc_t1

0xb329,	// (0x00016203) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb329,	// (0x00016203) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a909) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a909) list_single_graphic_heading_pane_vc_t

0x8a0e,	// (0x000138e8) list_double2_pane_vc_g1_ParamLimits

0x8a0e,	// (0x000138e8) list_double2_pane_vc_g1

0x92dd,	// (0x000141b7) list_double2_pane_vc_g2_ParamLimits

0x92dd,	// (0x000141b7) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a6b4) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a6b4) list_double2_pane_vc_g

0xb33b,	// (0x00016215) list_double2_pane_vc_t1_ParamLimits

0xb33b,	// (0x00016215) list_double2_pane_vc_t1

0xb351,	// (0x0001622b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb351,	// (0x0001622b) list_double2_large_graphic_pane_vc_g1

0x8a0e,	// (0x000138e8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a0e,	// (0x000138e8) list_double2_large_graphic_pane_vc_g2

0x92dd,	// (0x000141b7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x92dd,	// (0x000141b7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a90e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a90e) list_double2_large_graphic_pane_vc_g

0xb35d,	// (0x00016237) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb35d,	// (0x00016237) list_double2_large_graphic_pane_vc_t1

0xb373,	// (0x0001624d) list_double_time_pane_vc_g1_ParamLimits

0xb373,	// (0x0001624d) list_double_time_pane_vc_g1

0xb37f,	// (0x00016259) list_double_time_pane_vc_g2_ParamLimits

0xb37f,	// (0x00016259) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a915) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a915) list_double_time_pane_vc_g

0xb38b,	// (0x00016265) list_double_time_pane_vc_t1_ParamLimits

0xb38b,	// (0x00016265) list_double_time_pane_vc_t1

0xb3af,	// (0x00016289) list_double_time_pane_vc_t2_ParamLimits

0xb3af,	// (0x00016289) list_double_time_pane_vc_t2

0xb3de,	// (0x000162b8) list_double_time_pane_vc_t3_ParamLimits

0xb3de,	// (0x000162b8) list_double_time_pane_vc_t3

0xb3f0,	// (0x000162ca) list_double_time_pane_vc_t4_ParamLimits

0xb3f0,	// (0x000162ca) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a91a) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a91a) list_double_time_pane_vc_t

0x8a0e,	// (0x000138e8) list_double_pane_vc_g1_ParamLimits

0x8a0e,	// (0x000138e8) list_double_pane_vc_g1

0x92dd,	// (0x000141b7) list_double_pane_vc_g2_ParamLimits

0x92dd,	// (0x000141b7) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a6b4) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a6b4) list_double_pane_vc_g

0xb404,	// (0x000162de) list_double_pane_vc_t1_ParamLimits

0xb404,	// (0x000162de) list_double_pane_vc_t1

0xb418,	// (0x000162f2) list_double_pane_vc_t2_ParamLimits

0xb418,	// (0x000162f2) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a923) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a923) list_double_pane_vc_t

0x8a0e,	// (0x000138e8) list_double_number_pane_vc_g1_ParamLimits

0x8a0e,	// (0x000138e8) list_double_number_pane_vc_g1

0x92dd,	// (0x000141b7) list_double_number_pane_vc_g2_ParamLimits

0x92dd,	// (0x000141b7) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a6b4) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a6b4) list_double_number_pane_vc_g

0xb430,	// (0x0001630a) list_double_number_pane_vc_t1_ParamLimits

0xb430,	// (0x0001630a) list_double_number_pane_vc_t1

0xb442,	// (0x0001631c) list_double_number_pane_vc_t2_ParamLimits

0xb442,	// (0x0001631c) list_double_number_pane_vc_t2

0xb456,	// (0x00016330) list_double_number_pane_vc_t3_ParamLimits

0xb456,	// (0x00016330) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a928) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a928) list_double_number_pane_vc_t

0xb46e,	// (0x00016348) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb46e,	// (0x00016348) list_double_large_graphic_pane_vc_g1

0xb490,	// (0x0001636a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb490,	// (0x0001636a) list_double_large_graphic_pane_vc_g2

0xb4a4,	// (0x0001637e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb4a4,	// (0x0001637e) list_double_large_graphic_pane_vc_g3

0xb4b3,	// (0x0001638d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb4b3,	// (0x0001638d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a92f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a92f) list_double_large_graphic_pane_vc_g

0xb4bf,	// (0x00016399) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb4bf,	// (0x00016399) list_double_large_graphic_pane_vc_t1

0xb4db,	// (0x000163b5) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb4db,	// (0x000163b5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a938) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a938) list_double_large_graphic_pane_vc_t

0xb042,	// (0x00015f1c) list_double_heading_pane_vc_g1_ParamLimits

0xb042,	// (0x00015f1c) list_double_heading_pane_vc_g1

0xb04e,	// (0x00015f28) list_double_heading_pane_vc_g2_ParamLimits

0xb04e,	// (0x00015f28) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a93d) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a93d) list_double_heading_pane_vc_g

0xb4fd,	// (0x000163d7) list_double_heading_pane_vc_t1_ParamLimits

0xb4fd,	// (0x000163d7) list_double_heading_pane_vc_t1

0xb511,	// (0x000163eb) list_double_heading_pane_vc_t2_ParamLimits

0xb511,	// (0x000163eb) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a942) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a942) list_double_heading_pane_vc_t

0xb529,	// (0x00016403) list_double_graphic_pane_vc_g1_ParamLimits

0xb529,	// (0x00016403) list_double_graphic_pane_vc_g1

0xb535,	// (0x0001640f) list_double_graphic_pane_vc_g2_ParamLimits

0xb535,	// (0x0001640f) list_double_graphic_pane_vc_g2

0x8a0e,	// (0x000138e8) list_double_graphic_pane_vc_g3_ParamLimits

0x8a0e,	// (0x000138e8) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a947) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a947) list_double_graphic_pane_vc_g

0xb552,	// (0x0001642c) list_double_graphic_pane_vc_t1_ParamLimits

0xb552,	// (0x0001642c) list_double_graphic_pane_vc_t1

0xb57c,	// (0x00016456) list_double_graphic_pane_vc_t2_ParamLimits

0xb57c,	// (0x00016456) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a950) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a950) list_double_graphic_pane_vc_t

0x47c8,	// (0x0000f6a2) aid_size_cell_fastswap

0x47d0,	// (0x0000f6aa) aid_size_cell_touch_ParamLimits

0x47d0,	// (0x0000f6aa) aid_size_cell_touch

0x4a35,	// (0x0000f90f) popup_fast_swap_wide_window_ParamLimits

0x4a35,	// (0x0000f90f) popup_fast_swap_wide_window

0x4b49,	// (0x0000fa23) touch_pane_ParamLimits

0x4b49,	// (0x0000fa23) touch_pane

0x7b54,	// (0x00012a2e) button_value_adjust_pane_cp2

0x7b5c,	// (0x00012a36) button_value_adjust_pane_cp4

0x7b7e,	// (0x00012a58) form_field_data_pane_cp2

0x7b9f,	// (0x00012a79) form_field_data_wide_pane_cp2

0x821d,	// (0x000130f7) bg_scroll_pane_ParamLimits

0x4dd7,	// (0x0000fcb1) scroll_handle_pane_ParamLimits

0x4deb,	// (0x0000fcc5) scroll_sc2_down_pane_ParamLimits

0x4deb,	// (0x0000fcc5) scroll_sc2_down_pane

0x824e,	// (0x00013128) scroll_sc2_up_pane_ParamLimits

0x824e,	// (0x00013128) scroll_sc2_up_pane

0xba24,	// (0x000168fe) grid_wheel_folder_pane_g1_ParamLimits

0xba24,	// (0x000168fe) grid_wheel_folder_pane_g1

0x4fb0,	// (0x0000fe8a) clock_nsta_pane_cp2_ParamLimits

0x4fb0,	// (0x0000fe8a) clock_nsta_pane_cp2

0x8add,	// (0x000139b7) listscroll_midp_pane_ParamLimits

0x8ae9,	// (0x000139c3) midp_canvas_pane

0x8dd1,	// (0x00013cab) nsta_clock_indic_pane

0x8e0d,	// (0x00013ce7) listscroll_form_pane_vc

0x8e15,	// (0x00013cef) listscroll_set_pane_vc_ParamLimits

0x8e15,	// (0x00013cef) listscroll_set_pane_vc

0x8f16,	// (0x00013df0) clock_nsta_pane

0x8f8b,	// (0x00013e65) indicator_nsta_pane

0x926b,	// (0x00014145) bg_popup_sub_pane_cp2_ParamLimits

0x927f,	// (0x00014159) find_pane_cp2_ParamLimits

0x927f,	// (0x00014159) find_pane_cp2

0x9295,	// (0x0001416f) grid_toobar_pane_ParamLimits

0x9451,	// (0x0001432b) list_form_gen_pane_vc_ParamLimits

0x9451,	// (0x0001432b) list_form_gen_pane_vc

0x9467,	// (0x00014341) scroll_pane_cp8_vc_ParamLimits

0x9467,	// (0x00014341) scroll_pane_cp8_vc

0x94e3,	// (0x000143bd) data_form_wide_pane_vc_ParamLimits

0x94e3,	// (0x000143bd) data_form_wide_pane_vc

0x94ef,	// (0x000143c9) form_field_data_wide_pane_vc_g1

0x94f7,	// (0x000143d1) form_field_data_wide_pane_vc_t1_ParamLimits

0x94f7,	// (0x000143d1) form_field_data_wide_pane_vc_t1

0x7c3a,	// (0x00012b14) input_focus_pane_cp6_vc_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_cp6_vc

0x985a,	// (0x00014734) list_midp_pane_ParamLimits

0x9866,	// (0x00014740) scroll_pane_cp16_ParamLimits

0x9866,	// (0x00014740) scroll_pane_cp16

0x98c8,	// (0x000147a2) button_value_adjust_pane_ParamLimits

0x98c8,	// (0x000147a2) button_value_adjust_pane

0xa862,	// (0x0001573c) button_value_adjust_pane_cp6_ParamLimits

0xa862,	// (0x0001573c) button_value_adjust_pane_cp6

0xa98c,	// (0x00015866) settings_code_pane_cp_ParamLimits

0xa98c,	// (0x00015866) settings_code_pane_cp

0x6d26,	// (0x00011c00) cell_touch_pane_g1

0x6d26,	// (0x00011c00) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a5d8) cell_touch_pane_g

0xb020,	// (0x00015efa) cell_touch_pane_cp_ParamLimits

0xb020,	// (0x00015efa) cell_touch_pane_cp

0xb030,	// (0x00015f0a) cell_touch_pane_ParamLimits

0xb030,	// (0x00015f0a) cell_touch_pane

0x6d26,	// (0x00011c00) scroll_sc2_down_pane_g1

0x6d26,	// (0x00011c00) scroll_sc2_up_pane_g1

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp4_vc

0xb094,	// (0x00015f6e) list_set_graphic_pane_vc_g1_ParamLimits

0xb094,	// (0x00015f6e) list_set_graphic_pane_vc_g1

0xb0a0,	// (0x00015f7a) list_set_graphic_pane_vc_g2_ParamLimits

0xb0a0,	// (0x00015f7a) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a8d4) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a8d4) list_set_graphic_pane_vc_g

0xb0ac,	// (0x00015f86) text_primary_small_cp13_vc_ParamLimits

0xb0ac,	// (0x00015f86) text_primary_small_cp13_vc

0xb0c4,	// (0x00015f9e) list_set_graphic_pane_vc_ParamLimits

0xb0c4,	// (0x00015f9e) list_set_graphic_pane_vc

0x6d30,	// (0x00011c0a) input_focus_pane_cp2_vc

0x6d26,	// (0x00011c00) setting_code_pane_vc_g1

0x6e5b,	// (0x00011d35) setting_code_pane_vc_t1

0xb0d6,	// (0x00015fb0) set_text_pane_vc_t1_ParamLimits

0xb0d6,	// (0x00015fb0) set_text_pane_vc_t1

0x6d30,	// (0x00011c0a) input_focus_pane_cp1_vc

0xb0f2,	// (0x00015fcc) list_set_text_pane_vc

0x6d26,	// (0x00011c00) setting_text_pane_vc_g1

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp2_vc

0x6e52,	// (0x00011d2c) setting_slider_graphic_pane_vc_g1

0xb0fc,	// (0x00015fd6) setting_slider_graphic_pane_vc_t1

0xb10c,	// (0x00015fe6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a8d9) setting_slider_graphic_pane_vc_t

0xb11c,	// (0x00015ff6) slider_set_pane_cp_vc

0xb124,	// (0x00015ffe) slider_set_pane_vc_g1

0xb12d,	// (0x00016007) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a8de) slider_set_pane_vc_g

0x7d5d,	// (0x00012c37) set_opt_bg_pane_g1_copy1

0x7d65,	// (0x00012c3f) set_opt_bg_pane_g2_copy1

0xb159,	// (0x00016033) set_opt_bg_pane_g3_copy1

0x7d75,	// (0x00012c4f) set_opt_bg_pane_g4_copy1

0x7d7d,	// (0x00012c57) set_opt_bg_pane_g5_copy1

0x7d85,	// (0x00012c5f) set_opt_bg_pane_g6_copy1

0xb163,	// (0x0001603d) set_opt_bg_pane_g7_copy1

0xb16b,	// (0x00016045) set_opt_bg_pane_g8_copy1

0xb175,	// (0x0001604f) set_opt_bg_pane_g9_copy1

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp_vc

0xb17f,	// (0x00016059) setting_slider_pane_vc_t1

0xb18e,	// (0x00016068) setting_slider_pane_vc_t2

0xb19e,	// (0x00016078) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a8ed) setting_slider_pane_vc_t

0xb1ae,	// (0x00016088) slider_set_pane_vc

0x59ae,	// (0x00010888) volume_set_pane_vc_g1

0x59b7,	// (0x00010891) volume_set_pane_vc_g2

0x59c0,	// (0x0001089a) volume_set_pane_vc_g3

0x59c9,	// (0x000108a3) volume_set_pane_vc_g4

0x59d2,	// (0x000108ac) volume_set_pane_vc_g5

0x59db,	// (0x000108b5) volume_set_pane_vc_g6

0x59e4,	// (0x000108be) volume_set_pane_vc_g7

0x59ed,	// (0x000108c7) volume_set_pane_vc_g8

0x59f6,	// (0x000108d0) volume_set_pane_vc_g9

0x59ff,	// (0x000108d9) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a78b) volume_set_pane_vc_g

0xb1b6,	// (0x00016090) volume_set_pane_vc

0xb1be,	// (0x00016098) button_value_adjust_pane_cp1_vc

0xb1c8,	// (0x000160a2) list_highlight_pane_cp2_vc

0xb1d1,	// (0x000160ab) list_set_pane_vc_ParamLimits

0xb1d1,	// (0x000160ab) list_set_pane_vc

0xb22f,	// (0x00016109) main_pane_set_vc_t1_ParamLimits

0xb22f,	// (0x00016109) main_pane_set_vc_t1

0xb244,	// (0x0001611e) main_pane_set_vc_t2_ParamLimits

0xb244,	// (0x0001611e) main_pane_set_vc_t2

0xb256,	// (0x00016130) main_pane_set_vc_t3_ParamLimits

0xb256,	// (0x00016130) main_pane_set_vc_t3

0xb26a,	// (0x00016144) main_pane_set_vc_t4_ParamLimits

0xb26a,	// (0x00016144) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a8f4) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a8f4) main_pane_set_vc_t

0xb27e,	// (0x00016158) setting_code_pane_vc_ParamLimits

0xb27e,	// (0x00016158) setting_code_pane_vc

0xb28f,	// (0x00016169) setting_slider_graphic_pane_vc

0xb28f,	// (0x00016169) setting_slider_pane_vc

0xb28f,	// (0x00016169) setting_text_pane_vc

0xb28f,	// (0x00016169) setting_volume_pane_vc

0xb299,	// (0x00016173) scroll_pane_cp121_vc

0x7b42,	// (0x00012a1c) set_content_pane_vc

0xb5a6,	// (0x00016480) button_value_adjust_pane_g1

0xb5af,	// (0x00016489) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a955) button_value_adjust_pane_g

0xb5b8,	// (0x00016492) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb5b8,	// (0x00016492) form_field_slider_wide_pane_vc_t1

0xb5cc,	// (0x000164a6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb5cc,	// (0x000164a6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a95a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a95a) form_field_slider_wide_pane_vc_t

0x70a5,	// (0x00011f7f) input_focus_pane_cp10_vc_ParamLimits

0x70a5,	// (0x00011f7f) input_focus_pane_cp10_vc

0xb5fa,	// (0x000164d4) slider_cont_pane_cp1_vc_ParamLimits

0xb5fa,	// (0x000164d4) slider_cont_pane_cp1_vc

0xb60c,	// (0x000164e6) slider_form_pane_g1_cp2

0xb12d,	// (0x00016007) slider_form_pane_g2_cp2

0xb639,	// (0x00016513) form_field_slider_pane_vc_t3

0xb647,	// (0x00016521) form_field_slider_pane_vc_t4

0xb655,	// (0x0001652f) slider_form_pane_vc_ParamLimits

0xb655,	// (0x0001652f) slider_form_pane_vc

0xb662,	// (0x0001653c) form_field_slider_pane_vc_t1_ParamLimits

0xb662,	// (0x0001653c) form_field_slider_pane_vc_t1

0xb5cc,	// (0x000164a6) form_field_slider_pane_vc_t2_ParamLimits

0xb5cc,	// (0x000164a6) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a96c) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a96c) form_field_slider_pane_vc_t

0x70a5,	// (0x00011f7f) input_focus_pane_cp9_vc_ParamLimits

0x70a5,	// (0x00011f7f) input_focus_pane_cp9_vc

0xb67e,	// (0x00016558) slider_cont_pane_vc_ParamLimits

0xb67e,	// (0x00016558) slider_cont_pane_vc

0xb692,	// (0x0001656c) list_form_graphic_pane_cp_vc_ParamLimits

0xb692,	// (0x0001656c) list_form_graphic_pane_cp_vc

0x94ef,	// (0x000143c9) form_field_popup_wide_pane_vc_g1

0xb6a7,	// (0x00016581) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6a7,	// (0x00016581) form_field_popup_wide_pane_vc_t1

0x7c3a,	// (0x00012b14) input_focus_pane_cp8_vc_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_cp8_vc

0xb6ec,	// (0x000165c6) list_form_wide_pane_vc_ParamLimits

0xb6ec,	// (0x000165c6) list_form_wide_pane_vc

0xb6f8,	// (0x000165d2) list_form_graphic_pane_vc_g1

0xb700,	// (0x000165da) list_form_graphic_pane_vc_t1_ParamLimits

0xb700,	// (0x000165da) list_form_graphic_pane_vc_t1

0x6e10,	// (0x00011cea) list_highlight_pane_cp5_vc_ParamLimits

0x6e10,	// (0x00011cea) list_highlight_pane_cp5_vc

0xb71c,	// (0x000165f6) list_form_graphic_pane_vc_ParamLimits

0xb71c,	// (0x000165f6) list_form_graphic_pane_vc

0x94ef,	// (0x000143c9) form_field_popup_pane_vc_g1

0xb732,	// (0x0001660c) form_field_popup_pane_vc_t1_ParamLimits

0xb732,	// (0x0001660c) form_field_popup_pane_vc_t1

0x7c3a,	// (0x00012b14) input_focus_pane_cp7_vc_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_cp7_vc

0xb749,	// (0x00016623) list_form_pane_vc_ParamLimits

0xb749,	// (0x00016623) list_form_pane_vc

0xb755,	// (0x0001662f) data_form_pane_vc_t1_ParamLimits

0xb755,	// (0x0001662f) data_form_pane_vc_t1

0x7d5d,	// (0x00012c37) input_focus_pane_vc_g1

0x7d65,	// (0x00012c3f) input_focus_pane_vc_g2

0x7d6d,	// (0x00012c47) input_focus_pane_vc_g3

0x7d75,	// (0x00012c4f) input_focus_pane_vc_g4

0x7d7d,	// (0x00012c57) input_focus_pane_vc_g5

0x7d85,	// (0x00012c5f) input_focus_pane_vc_g6

0x7d8d,	// (0x00012c67) input_focus_pane_vc_g7

0x7d95,	// (0x00012c6f) input_focus_pane_vc_g8

0x7d9d,	// (0x00012c77) input_focus_pane_vc_g9

0x6d26,	// (0x00011c00) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a561) input_focus_pane_vc_g

0x94e3,	// (0x000143bd) data_form_pane_vc_ParamLimits

0x94e3,	// (0x000143bd) data_form_pane_vc

0x94ef,	// (0x000143c9) form_field_data_pane_vc_g1

0xb770,	// (0x0001664a) form_field_data_pane_vc_t1_ParamLimits

0xb770,	// (0x0001664a) form_field_data_pane_vc_t1

0x7c3a,	// (0x00012b14) input_focus_pane_vc_ParamLimits

0x7c3a,	// (0x00012b14) input_focus_pane_vc

0xb78a,	// (0x00016664) button_value_adjust_pane_cp3_vc

0xb792,	// (0x0001666c) button_value_adjust_pane_cp5_vc

0xb79a,	// (0x00016674) form_field_data_pane_vc_ParamLimits

0xb79a,	// (0x00016674) form_field_data_pane_vc

0xb7b1,	// (0x0001668b) form_field_data_pane_vc_cp2

0xb7b9,	// (0x00016693) form_field_data_wide_pane_vc_ParamLimits

0xb7b9,	// (0x00016693) form_field_data_wide_pane_vc

0xb7cf,	// (0x000166a9) form_field_data_wide_pane_vc_cp2

0xb7d7,	// (0x000166b1) form_field_popup_pane_vc_ParamLimits

0xb7d7,	// (0x000166b1) form_field_popup_pane_vc

0xb7ee,	// (0x000166c8) form_field_popup_wide_pane_vc_ParamLimits

0xb7ee,	// (0x000166c8) form_field_popup_wide_pane_vc

0xb804,	// (0x000166de) form_field_slider_pane_vc_ParamLimits

0xb804,	// (0x000166de) form_field_slider_pane_vc

0xb817,	// (0x000166f1) form_field_slider_wide_pane_vc_ParamLimits

0xb817,	// (0x000166f1) form_field_slider_wide_pane_vc

0xb82a,	// (0x00016704) grid_touch_1_pane_ParamLimits

0xb82a,	// (0x00016704) grid_touch_1_pane

0xb836,	// (0x00016710) grid_touch_2_pane_ParamLimits

0xb836,	// (0x00016710) grid_touch_2_pane

0x8d9c,	// (0x00013c76) touch_pane_g1_ParamLimits

0x8d9c,	// (0x00013c76) touch_pane_g1

0xb84e,	// (0x00016728) cell_app_pane_cp_wide_ParamLimits

0xb84e,	// (0x00016728) cell_app_pane_cp_wide

0xb85f,	// (0x00016739) grid_popup_fast_wide_pane_ParamLimits

0xb85f,	// (0x00016739) grid_popup_fast_wide_pane

0xb873,	// (0x0001674d) scroll_pane_cp19_ParamLimits

0xb873,	// (0x0001674d) scroll_pane_cp19

0x6d30,	// (0x00011c0a) bg_popup_window_pane_cp20

0xb887,	// (0x00016761) listscroll_popup_fast_wide_pane

0x6e10,	// (0x00011cea) grid_indicator_nsta_pane

0xb88f,	// (0x00016769) clock_nsta_pane_g1

0xb898,	// (0x00016772) clock_nsta_pane_t1

0xb8b4,	// (0x0001678e) cell_indicator_nsta_pane_ParamLimits

0xb8b4,	// (0x0001678e) cell_indicator_nsta_pane

0xb8e5,	// (0x000167bf) cell_indicator_nsta_pane_g1

0xb8f3,	// (0x000167cd) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a97d) cell_indicator_nsta_pane_g

0xb900,	// (0x000167da) clock_nsta_pane_cp

0xb909,	// (0x000167e3) indicator_nsta_pane_cp

0xb911,	// (0x000167eb) nsta_clock_indic_pane_g1

0x6ef3,	// (0x00011dcd) grid_indicator_pane

0x8343,	// (0x0001321d) scroll_pane_cp29

0x4eff,	// (0x0000fdd9) indicator_nsta_pane_cp2_ParamLimits

0x4eff,	// (0x0000fdd9) indicator_nsta_pane_cp2

0x6e10,	// (0x00011cea) main_apps_wheel_pane

0x973b,	// (0x00014615) form_midp_field_text_pane_ParamLimits

0x9886,	// (0x00014760) scroll_bar_cp050_ParamLimits

0xb961,	// (0x0001683b) cell_indicator_pane_ParamLimits

0xb961,	// (0x0001683b) cell_indicator_pane

0xb978,	// (0x00016852) cell_indicator_pane_g1

0xb982,	// (0x0001685c) grid_wheel_folder_pane_ParamLimits

0xb982,	// (0x0001685c) grid_wheel_folder_pane

0xb998,	// (0x00016872) list_wheel_apps_pane_ParamLimits

0xb998,	// (0x00016872) list_wheel_apps_pane

0xb9a9,	// (0x00016883) main_apps_wheel_pane_g1_ParamLimits

0xb9a9,	// (0x00016883) main_apps_wheel_pane_g1

0xb9bd,	// (0x00016897) main_apps_wheel_pane_g2_ParamLimits

0xb9bd,	// (0x00016897) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a999) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a999) main_apps_wheel_pane_g

0xb9d5,	// (0x000168af) main_apps_wheel_pane_t1_ParamLimits

0xb9d5,	// (0x000168af) main_apps_wheel_pane_t1

0xb9f8,	// (0x000168d2) list_wheel_apps_pane_g1

0xba00,	// (0x000168da) list_wheel_apps_pane_g2

0xba08,	// (0x000168e2) list_wheel_apps_pane_g3

0xba10,	// (0x000168ea) list_wheel_apps_pane_g4

0xba1a,	// (0x000168f4) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a99e) list_wheel_apps_pane_g

0x8955,	// (0x0001382f) navi_icon_text_pane

0x8e45,	// (0x00013d1f) aid_fill_nsta

0xba3d,	// (0x00016917) navi_icon_text_pane_g1

0xba49,	// (0x00016923) navi_icon_text_pane_t1

0x87e8,	// (0x000136c2) list_set_graphic_pane_t1_ParamLimits

0x87e8,	// (0x000136c2) list_set_graphic_pane_t1

0x9fe9,	// (0x00014ec3) popup_midp_note_alarm_window_t6_ParamLimits

0x9fe9,	// (0x00014ec3) popup_midp_note_alarm_window_t6

0x9ffb,	// (0x00014ed5) popup_midp_note_alarm_window_t7_ParamLimits

0x9ffb,	// (0x00014ed5) popup_midp_note_alarm_window_t7

0xa00d,	// (0x00014ee7) popup_midp_note_alarm_window_t8_ParamLimits

0xa00d,	// (0x00014ee7) popup_midp_note_alarm_window_t8

0xa02b,	// (0x00014f05) popup_midp_note_alarm_window_t9_ParamLimits

0xa02b,	// (0x00014f05) popup_midp_note_alarm_window_t9

0xa03d,	// (0x00014f17) popup_midp_note_alarm_window_t10_ParamLimits

0xa03d,	// (0x00014f17) popup_midp_note_alarm_window_t10

0xa04f,	// (0x00014f29) popup_midp_note_alarm_window_t11_ParamLimits

0xa04f,	// (0x00014f29) popup_midp_note_alarm_window_t11

0xa061,	// (0x00014f3b) scroll_pane_cp17_ParamLimits

0xa061,	// (0x00014f3b) scroll_pane_cp17

0x59ae,	// (0x00010888) volume_small_pane_cp_g1

0x5ca3,	// (0x00010b7d) volume_small_pane_cp_g2

0x5cac,	// (0x00010b86) volume_small_pane_cp_g3

0x5cb5,	// (0x00010b8f) volume_small_pane_cp_g4

0x5cbe,	// (0x00010b98) volume_small_pane_cp_g5

0x5cc7,	// (0x00010ba1) volume_small_pane_cp_g6

0x5cd0,	// (0x00010baa) volume_small_pane_cp_g7

0x5cd9,	// (0x00010bb3) volume_small_pane_cp_g8

0x5ce2,	// (0x00010bbc) volume_small_pane_cp_g9

0x5ceb,	// (0x00010bc5) volume_small_pane_cp_g10

0x8bb2,	// (0x00013a8c) midp_ticker_pane_g1_ParamLimits

0x8bbe,	// (0x00013a98) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a62d) midp_ticker_pane_g_ParamLimits

0x8bca,	// (0x00013aa4) midp_ticker_pane_t1_ParamLimits

0x8e5b,	// (0x00013d35) aid_fill_nsta_2

0x9872,	// (0x0001474c) list_form2_midp_pane

0xaa0a,	// (0x000158e4) midp_editing_number_pane_ParamLimits

0xaa19,	// (0x000158f3) midp_ticker_pane_ParamLimits

0xba5b,	// (0x00016935) form2_midp_field_pane

0xba7f,	// (0x00016959) scroll_pane_cp51

0xba9f,	// (0x00016979) form2_midp_button_pane_ParamLimits

0xba9f,	// (0x00016979) form2_midp_button_pane

0xbab1,	// (0x0001698b) form2_midp_content_pane_ParamLimits

0xbab1,	// (0x0001698b) form2_midp_content_pane

0xbacb,	// (0x000169a5) form2_midp_field_choice_group_pane

0xbad3,	// (0x000169ad) form2_midp_field_pane_g1

0xbadb,	// (0x000169b5) form2_midp_field_pane_g2

0xbae3,	// (0x000169bd) form2_midp_field_pane_g3

0xbaeb,	// (0x000169c5) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a9c3) form2_midp_field_pane_g

0xbaf3,	// (0x000169cd) form2_midp_gauge_slider_pane

0xbafb,	// (0x000169d5) form2_midp_gauge_wait_pane

0xbb03,	// (0x000169dd) form2_midp_image_pane_ParamLimits

0xbb03,	// (0x000169dd) form2_midp_image_pane

0xbb1e,	// (0x000169f8) form2_midp_label_pane_ParamLimits

0xbb1e,	// (0x000169f8) form2_midp_label_pane

0xbb37,	// (0x00016a11) form2_midp_label_pane_cp_ParamLimits

0xbb37,	// (0x00016a11) form2_midp_label_pane_cp

0xbb58,	// (0x00016a32) form2_midp_string_pane_ParamLimits

0xbb58,	// (0x00016a32) form2_midp_string_pane

0xbb6a,	// (0x00016a44) form2_midp_text_pane_ParamLimits

0xbb6a,	// (0x00016a44) form2_midp_text_pane

0xbb87,	// (0x00016a61) form2_midp_time_pane

0xbb97,	// (0x00016a71) input_focus_pane_cp51_ParamLimits

0xbb97,	// (0x00016a71) input_focus_pane_cp51

0xbbaf,	// (0x00016a89) form2_midp_label_pane_t1_ParamLimits

0xbbaf,	// (0x00016a89) form2_midp_label_pane_t1

0xbbf0,	// (0x00016aca) form2_mdip_text_pane_t1_ParamLimits

0xbbf0,	// (0x00016aca) form2_mdip_text_pane_t1

0xbc0f,	// (0x00016ae9) form2_midp_time_pane_t1

0xbc2a,	// (0x00016b04) form2_midp_gauge_slider_pane_t1

0xbc3c,	// (0x00016b16) form2_midp_gauge_slider_pane_t2

0xbc4e,	// (0x00016b28) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a9cc) form2_midp_gauge_slider_pane_t

0xbc60,	// (0x00016b3a) form2_midp_slider_pane

0xbc6c,	// (0x00016b46) form2_midp_gauge_wait_pane_t1

0xbc7a,	// (0x00016b54) form2_midp_wait_pane_ParamLimits

0xbc7a,	// (0x00016b54) form2_midp_wait_pane

0xbca5,	// (0x00016b7f) list_single_2graphic_pane_cp4_ParamLimits

0xbca5,	// (0x00016b7f) list_single_2graphic_pane_cp4

0x9557,	// (0x00014431) list_single_midp_graphic_pane_cp_ParamLimits

0x9557,	// (0x00014431) list_single_midp_graphic_pane_cp

0x6d30,	// (0x00011c0a) list_highlight_pane_cp20

0xbcc9,	// (0x00016ba3) list_single_2graphic_pane_g1_cp4

0xbcd1,	// (0x00016bab) list_single_2graphic_pane_g2_cp4

0xbcd9,	// (0x00016bb3) list_single_2graphic_pane_t1_cp4

0x6e10,	// (0x00011cea) list_highlight_pane_cp21

0xbce8,	// (0x00016bc2) list_single_midp_graphic_pane_g4_cp

0xbcf7,	// (0x00016bd1) list_single_midp_graphic_pane_t1_cp

0xbd0c,	// (0x00016be6) form2_mdip_string_pane_t1_ParamLimits

0xbd0c,	// (0x00016be6) form2_mdip_string_pane_t1

0x6d30,	// (0x00011c0a) bg_wml_button_pane_cp2

0x6d26,	// (0x00011c00) form2_midp_image_pane_g1

0x78f8,	// (0x000127d2) list_double_large_graphic_pane_g5_ParamLimits

0x78f8,	// (0x000127d2) list_double_large_graphic_pane_g5

0x8add,	// (0x000139b7) midp_form_pane_ParamLimits

0x6e10,	// (0x00011cea) main_apps_wheel_pane_ParamLimits

0x55ee,	// (0x000104c8) popup_preview_window_ParamLimits

0x55ee,	// (0x000104c8) popup_preview_window

0x57a9,	// (0x00010683) popup_touch_info_window_ParamLimits

0x57a9,	// (0x00010683) popup_touch_info_window

0x57c7,	// (0x000106a1) popup_touch_menu_window_ParamLimits

0x57c7,	// (0x000106a1) popup_touch_menu_window

0x6d1c,	// (0x00011bf6) bg_popup_sub_pane_cp6

0xbe05,	// (0x00016cdf) list_touch_menu_pane

0xbe0d,	// (0x00016ce7) list_single_touch_menu_pane_ParamLimits

0xbe0d,	// (0x00016ce7) list_single_touch_menu_pane

0xbe23,	// (0x00016cfd) list_single_touch_menu_pane_t1

0x6e10,	// (0x00011cea) bg_popup_sub_pane_cp7_ParamLimits

0x6e10,	// (0x00011cea) bg_popup_sub_pane_cp7

0xbe31,	// (0x00016d0b) heading_sub_pane

0xbe39,	// (0x00016d13) list_touch_info_pane_ParamLimits

0xbe39,	// (0x00016d13) list_touch_info_pane

0xbe48,	// (0x00016d22) list_single_touch_info_pane_ParamLimits

0xbe48,	// (0x00016d22) list_single_touch_info_pane

0xbe5a,	// (0x00016d34) list_single_touch_info_pane_t1

0xbe68,	// (0x00016d42) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a9da) list_single_touch_info_pane_t

0x8ad5,	// (0x000139af) bg_popup_heading_pane_cp

0xbe76,	// (0x00016d50) heading_sub_pane_t1

0x947d,	// (0x00014357) bg_popup_preview_window_pane_cp_ParamLimits

0x947d,	// (0x00014357) bg_popup_preview_window_pane_cp

0xbe31,	// (0x00016d0b) heading_preview_pane

0xbe39,	// (0x00016d13) list_preview_pane_ParamLimits

0xbe39,	// (0x00016d13) list_preview_pane

0xbe84,	// (0x00016d5e) popup_preview_window_g1

0xbe48,	// (0x00016d22) list_single_preview_pane_ParamLimits

0xbe48,	// (0x00016d22) list_single_preview_pane

0xbe8c,	// (0x00016d66) list_single_preview_pane_g1

0xbe94,	// (0x00016d6e) list_single_preview_pane_t1

0xbe5a,	// (0x00016d34) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a9df) list_single_preview_pane_t

0xbea2,	// (0x00016d7c) bg_popup_heading_pane_cp2_ParamLimits

0xbea2,	// (0x00016d7c) bg_popup_heading_pane_cp2

0xbeb8,	// (0x00016d92) heading_preview_pane_g1

0xbec0,	// (0x00016d9a) heading_preview_pane_t1_ParamLimits

0xbec0,	// (0x00016d9a) heading_preview_pane_t1

0x6f16,	// (0x00011df0) soft_indicator_pane_t1_ParamLimits

0x7632,	// (0x0001250c) scroll_pane_ParamLimits

0x823c,	// (0x00013116) scroll_sc2_left_pane

0x8245,	// (0x0001311f) scroll_sc2_right_pane

0x8264,	// (0x0001313e) scroll_bg_pane_g1_ParamLimits

0x8279,	// (0x00013153) scroll_bg_pane_g2_ParamLimits

0x8291,	// (0x0001316b) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a5b8) scroll_bg_pane_g_ParamLimits

0x8264,	// (0x0001313e) scroll_handle_pane_g1_ParamLimits

0x82b3,	// (0x0001318d) scroll_handle_pane_g2_ParamLimits

0x8291,	// (0x0001316b) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a5bf) scroll_handle_pane_g_ParamLimits

0x526f,	// (0x00010149) popup_choice_list_window_ParamLimits

0x526f,	// (0x00010149) popup_choice_list_window

0x9277,	// (0x00014151) choice_list_pane

0x9327,	// (0x00014201) cell_toolbar_pane_t1

0x934f,	// (0x00014229) toolbar_button_pane_ParamLimits

0xa51b,	// (0x000153f5) ai_gene_pane_1_t2_ParamLimits

0xa51b,	// (0x000153f5) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a7e7) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a7e7) ai_gene_pane_1_t

0xbedd,	// (0x00016db7) scroll_sc2_left_pane_g1

0xbedd,	// (0x00016db7) scroll_sc2_right_pane_g1

0x8e01,	// (0x00013cdb) bg_popup_sub_pane_cp10

0xbee7,	// (0x00016dc1) list_choice_list_pane

0xbf00,	// (0x00016dda) list_single_choice_list_pane_ParamLimits

0xbf00,	// (0x00016dda) list_single_choice_list_pane

0xbf13,	// (0x00016ded) list_single_choice_list_pane_g1

0x7f42,	// (0x00012e1c) list_single_choice_list_pane_t1_ParamLimits

0x7f42,	// (0x00012e1c) list_single_choice_list_pane_t1

0xbf1b,	// (0x00016df5) choice_list_pane_g1

0xbf23,	// (0x00016dfd) choice_list_pane_t1

0x6d1c,	// (0x00011bf6) input_focus_pane_cp11

0x8119,	// (0x00012ff3) title_pane_stacon_g2_ParamLimits

0x8119,	// (0x00012ff3) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a59e) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a59e) title_pane_stacon_g

0x8ad5,	// (0x000139af) cursor_press_pane

0x531b,	// (0x000101f5) popup_fep_hwr_window_ParamLimits

0x531b,	// (0x000101f5) popup_fep_hwr_window

0x5395,	// (0x0001026f) popup_fep_vkb_window_ParamLimits

0x5395,	// (0x0001026f) popup_fep_vkb_window

0xbf31,	// (0x00016e0b) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001aa08) fep_vkb_side_pane_g_ParamLimits

0x5d2d,	// (0x00010c07) fep_hwr_candidate_pane_ParamLimits

0x5d2d,	// (0x00010c07) fep_hwr_candidate_pane

0x5d57,	// (0x00010c31) fep_hwr_side_pane_ParamLimits

0x5d57,	// (0x00010c31) fep_hwr_side_pane

0x5d77,	// (0x00010c51) fep_hwr_top_pane_ParamLimits

0x5d77,	// (0x00010c51) fep_hwr_top_pane

0x5d8f,	// (0x00010c69) fep_hwr_write_pane_ParamLimits

0x5d8f,	// (0x00010c69) fep_hwr_write_pane

0xfb2e,	// (0x0001aa08) fep_vkb_side_pane_g

0xbf39,	// (0x00016e13) fep_hwr_top_pane_g1

0xbf4b,	// (0x00016e25) fep_hwr_top_pane_g2

0x5dc9,	// (0x00010ca3) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a9e4) fep_hwr_top_pane_g

0x5dde,	// (0x00010cb8) fep_hwr_top_text_pane

0x8433,	// (0x0001330d) fep_hwr_top_text_pane_g1

0xbf81,	// (0x00016e5b) fep_hwr_top_text_pane_t1

0x5ed4,	// (0x00010dae) fep_hwr_candidate_pane_g1

0xc1d4,	// (0x000170ae) fep_vkb_keypad_pane_g3_ParamLimits

0xc1d4,	// (0x000170ae) fep_vkb_keypad_pane_g3

0xc1fc,	// (0x000170d6) fep_vkb_keypad_pane_g4_ParamLimits

0xc1fc,	// (0x000170d6) fep_vkb_keypad_pane_g4

0xc26b,	// (0x00017145) fep_vkb_bottom_pane_g2_ParamLimits

0xc26b,	// (0x00017145) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001aa0f) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001aa0f) fep_vkb_bottom_pane_g

0xbedd,	// (0x00016db7) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001aa19) cell_vkb_side_pane_g

0xc2f6,	// (0x000171d0) cell_vkb_side_pane_t1

0xc304,	// (0x000171de) cell_vkb_side_pane_t1_copy1

0xbedd,	// (0x00016db7) bg_fep_vkb_candidate_pane_g2

0xc430,	// (0x0001730a) cell_vkb_candidate_pane_ParamLimits

0xbf8f,	// (0x00016e69) aid_size_cell_vkb_ParamLimits

0xbf8f,	// (0x00016e69) aid_size_cell_vkb

0xc430,	// (0x0001730a) cell_vkb_candidate_pane

0x5efb,	// (0x00010dd5) bg_popup_fep_shadow_pane_g1

0xc01d,	// (0x00016ef7) fep_vkb_bottom_pane_ParamLimits

0xc01d,	// (0x00016ef7) fep_vkb_bottom_pane

0xc053,	// (0x00016f2d) fep_vkb_candidate_pane_ParamLimits

0xc053,	// (0x00016f2d) fep_vkb_candidate_pane

0xc06f,	// (0x00016f49) fep_vkb_keypad_pane_ParamLimits

0xc06f,	// (0x00016f49) fep_vkb_keypad_pane

0xc0b5,	// (0x00016f8f) fep_vkb_side_pane_ParamLimits

0xc0b5,	// (0x00016f8f) fep_vkb_side_pane

0xc0f1,	// (0x00016fcb) fep_vkb_top_pane_ParamLimits

0xc0f1,	// (0x00016fcb) fep_vkb_top_pane

0xc12d,	// (0x00017007) fep_vkb_top_pane_g1_ParamLimits

0xc12d,	// (0x00017007) fep_vkb_top_pane_g1

0xc13c,	// (0x00017016) fep_vkb_top_pane_g2_ParamLimits

0xc13c,	// (0x00017016) fep_vkb_top_pane_g2

0xc14b,	// (0x00017025) fep_vkb_top_pane_g3_ParamLimits

0xc14b,	// (0x00017025) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a9ff) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a9ff) fep_vkb_top_pane_g

0xc169,	// (0x00017043) fep_vkb_top_text_pane_ParamLimits

0xc169,	// (0x00017043) fep_vkb_top_text_pane

0xc17a,	// (0x00017054) fep_vkb_side_pane_g1_ParamLimits

0xc17a,	// (0x00017054) fep_vkb_side_pane_g1

0xc1c3,	// (0x0001709d) grid_vkb_side_pane_ParamLimits

0xc1c3,	// (0x0001709d) grid_vkb_side_pane

0x5f03,	// (0x00010ddd) bg_popup_fep_shadow_pane_g2

0x5f0c,	// (0x00010de6) bg_popup_fep_shadow_pane_g3

0x5f14,	// (0x00010dee) bg_popup_fep_shadow_pane_g4

0x5f1d,	// (0x00010df7) bg_popup_fep_shadow_pane_g5

0x5f27,	// (0x00010e01) bg_popup_fep_shadow_pane_g6

0x5f2f,	// (0x00010e09) bg_popup_fep_shadow_pane_g7

0x7d75,	// (0x00012c4f) bg_popup_fep_shadow_pane_g8

0xc21a,	// (0x000170f4) grid_vkb_keypad_number_pane_ParamLimits

0xc21a,	// (0x000170f4) grid_vkb_keypad_number_pane

0xc22a,	// (0x00017104) grid_vkb_keypad_pane_ParamLimits

0xc22a,	// (0x00017104) grid_vkb_keypad_pane

0xc250,	// (0x0001712a) fep_vkb_bottom_pane_g1_ParamLimits

0xc250,	// (0x0001712a) fep_vkb_bottom_pane_g1

0xc279,	// (0x00017153) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc279,	// (0x00017153) grid_vkb_keypad_bottom_left_pane

0xc28e,	// (0x00017168) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc28e,	// (0x00017168) grid_vkb_keypad_bottom_right_pane

0xc2a3,	// (0x0001717d) fep_vkb_top_text_pane_g1

0xc2be,	// (0x00017198) fep_vkb_top_text_pane_t1

0xc2d3,	// (0x000171ad) cell_vkb_side_pane_ParamLimits

0xc2d3,	// (0x000171ad) cell_vkb_side_pane

0xbedd,	// (0x00016db7) cell_vkb_side_pane_g1

0xc312,	// (0x000171ec) cell_vkb_keypad_pane_ParamLimits

0xc312,	// (0x000171ec) cell_vkb_keypad_pane

0xc387,	// (0x00017261) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001aa2c) bg_popup_fep_shadow_pane_g

0x5f41,	// (0x00010e1b) cell_hwr_side_pane_g1

0x5f41,	// (0x00010e1b) cell_hwr_side_pane_g2

0xc391,	// (0x0001726b) cell_vkb_keypad_pane_t1

0xc39f,	// (0x00017279) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc39f,	// (0x00017279) cell_vkb_keypad_bottom_left_pane

0xc3bc,	// (0x00017296) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3bc,	// (0x00017296) cell_vkb_keypad_bottom_right_pane

0xbedd,	// (0x00016db7) cell_vkb_keypad_bottom_left_pane_g1

0xbedd,	// (0x00016db7) cell_vkb_keypad_bottom_right_pane_g1

0xc3f5,	// (0x000172cf) cell_vkb_keypad_number_pane_ParamLimits

0xc3f5,	// (0x000172cf) cell_vkb_keypad_number_pane

0xc414,	// (0x000172ee) cell_vkb_keypad_number_pane_g1

0xc41e,	// (0x000172f8) cell_vkb_keypad_number_pane_g2

0xc427,	// (0x00017301) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001aa1e) cell_vkb_keypad_number_pane_g

0xc391,	// (0x0001726b) cell_vkb_keypad_number_pane_t1

0xc44b,	// (0x00017325) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001aa3f) cell_hwr_side_pane_g

0xc464,	// (0x0001733e) cell_hwr_side_pane_t1

0x5f4b,	// (0x00010e25) cell_hwr_side_pane_t1_copy1

0x5f59,	// (0x00010e33) cell_hwr_candidate_pane_g1

0x5f88,	// (0x00010e62) cell_hwr_candidate_pane_t1

0xbedd,	// (0x00016db7) cell_vkb_candidate_pane_g2

0xc4a8,	// (0x00017382) cell_vkb_candidate_pane_t1

0x5cf4,	// (0x00010bce) bg_popup_fep_shadow_pane_ParamLimits

0x5cf4,	// (0x00010bce) bg_popup_fep_shadow_pane

0x5da9,	// (0x00010c83) bg_fep_hwr_top_pane_g4

0xbf5d,	// (0x00016e37) bg_hwr_side_pane_g1_ParamLimits

0xbf5d,	// (0x00016e37) bg_hwr_side_pane_g1

0x5e1a,	// (0x00010cf4) cell_hwr_side_pane_ParamLimits

0x5e1a,	// (0x00010cf4) cell_hwr_side_pane

0x5e55,	// (0x00010d2f) fep_hwr_write_pane_g1_ParamLimits

0x5e55,	// (0x00010d2f) fep_hwr_write_pane_g1

0x5e62,	// (0x00010d3c) fep_hwr_write_pane_g2_ParamLimits

0x5e62,	// (0x00010d3c) fep_hwr_write_pane_g2

0x5e6f,	// (0x00010d49) fep_hwr_write_pane_g3_ParamLimits

0x5e6f,	// (0x00010d49) fep_hwr_write_pane_g3

0x5e7d,	// (0x00010d57) fep_hwr_write_pane_g4_ParamLimits

0x5e7d,	// (0x00010d57) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a9eb) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a9eb) fep_hwr_write_pane_g

0x5da9,	// (0x00010c83) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5da9,	// (0x00010c83) bg_fep_hwr_candidate_pane_g2

0x5e92,	// (0x00010d6c) cell_hwr_candidate_pane_ParamLimits

0x5e92,	// (0x00010d6c) cell_hwr_candidate_pane

0x5ed4,	// (0x00010dae) fep_hwr_candidate_pane_g1_ParamLimits

0xbfbd,	// (0x00016e97) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfbd,	// (0x00016e97) bg_popup_fep_shadow_pane_cp2

0xc15b,	// (0x00017035) fep_vkb_top_pane_g4_ParamLimits

0xc15b,	// (0x00017035) fep_vkb_top_pane_g4

0xc1a1,	// (0x0001707b) fep_vkb_side_pane_g2_ParamLimits

0xc1a1,	// (0x0001707b) fep_vkb_side_pane_g2

0x7a5c,	// (0x00012936) list_setting_pane_t4_ParamLimits

0x7a5c,	// (0x00012936) list_setting_pane_t4

0x7ad6,	// (0x000129b0) list_setting_number_pane_t5_ParamLimits

0x7ad6,	// (0x000129b0) list_setting_number_pane_t5

0x847a,	// (0x00013354) list_double_heading_pane_cp2_ParamLimits

0x847a,	// (0x00013354) list_double_heading_pane_cp2

0x7883,	// (0x0001275d) list_double_heading_pane_g1_cp2_ParamLimits

0x7883,	// (0x0001275d) list_double_heading_pane_g1_cp2

0x7c60,	// (0x00012b3a) list_double_heading_pane_g2_cp2_ParamLimits

0x7c60,	// (0x00012b3a) list_double_heading_pane_g2_cp2

0xc4b6,	// (0x00017390) list_double_heading_pane_t1_cp2_ParamLimits

0xc4b6,	// (0x00017390) list_double_heading_pane_t1_cp2

0xc4cc,	// (0x000173a6) list_double_heading_pane_t2_cp2_ParamLimits

0xc4cc,	// (0x000173a6) list_double_heading_pane_t2_cp2

0x6d04,	// (0x00011bde) aid_value_unit2

0x4a8f,	// (0x0000f969) popup_preview_fixed_window

0x70b3,	// (0x00011f8d) bg_popup_preview_window_pane_cp02

0xc4de,	// (0x000173b8) list_preview_fixed_pane

0xc524,	// (0x000173fe) list_empty_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_empty_pane_fp

0xc524,	// (0x000173fe) list_single_cale_day_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_cale_day_pane_fp

0xc524,	// (0x000173fe) list_single_graphic_heading_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_graphic_heading_pane_fp

0xc524,	// (0x000173fe) list_single_graphic_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_graphic_pane_fp

0xc524,	// (0x000173fe) list_single_heading_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_heading_pane_fp

0xc524,	// (0x000173fe) list_single_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_pane_fp

0xc539,	// (0x00017413) list_single_pane_fp_g1_ParamLimits

0xc539,	// (0x00017413) list_single_pane_fp_g1

0x7883,	// (0x0001275d) list_single_pane_fp_g2_ParamLimits

0x7883,	// (0x0001275d) list_single_pane_fp_g2

0x7c60,	// (0x00012b3a) list_single_pane_fp_g3_ParamLimits

0x7c60,	// (0x00012b3a) list_single_pane_fp_g3

0xc545,	// (0x0001741f) list_single_pane_fp_g4_ParamLimits

0xc545,	// (0x0001741f) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001aa52) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001aa52) list_single_pane_fp_g

0xc551,	// (0x0001742b) list_single_pane_fp_t1_ParamLimits

0xc551,	// (0x0001742b) list_single_pane_fp_t1

0xc568,	// (0x00017442) list_single_graphic_pane_fp_g1_ParamLimits

0xc568,	// (0x00017442) list_single_graphic_pane_fp_g1

0xc539,	// (0x00017413) list_single_graphic_pane_fp_g2_ParamLimits

0xc539,	// (0x00017413) list_single_graphic_pane_fp_g2

0x7883,	// (0x0001275d) list_single_graphic_pane_fp_g3_ParamLimits

0x7883,	// (0x0001275d) list_single_graphic_pane_fp_g3

0x7c60,	// (0x00012b3a) list_single_graphic_pane_fp_g4_ParamLimits

0x7c60,	// (0x00012b3a) list_single_graphic_pane_fp_g4

0xc545,	// (0x0001741f) list_single_graphic_pane_fp_g5_ParamLimits

0xc545,	// (0x0001741f) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001aa5b) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001aa5b) list_single_graphic_pane_fp_g

0xc574,	// (0x0001744e) list_single_graphic_pane_fp_t1_ParamLimits

0xc574,	// (0x0001744e) list_single_graphic_pane_fp_t1

0xc568,	// (0x00017442) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc568,	// (0x00017442) list_single_graphic_heading_pane_fp_g1

0xc539,	// (0x00017413) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc539,	// (0x00017413) list_single_graphic_heading_pane_fp_g2

0x7883,	// (0x0001275d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7883,	// (0x0001275d) list_single_graphic_heading_pane_fp_g3

0x7c60,	// (0x00012b3a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7c60,	// (0x00012b3a) list_single_graphic_heading_pane_fp_g4

0xc545,	// (0x0001741f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc545,	// (0x0001741f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001aa5b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001aa5b) list_single_graphic_heading_pane_fp_g

0xc58a,	// (0x00017464) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc58a,	// (0x00017464) list_single_graphic_heading_pane_fp_t1

0xc5a0,	// (0x0001747a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5a0,	// (0x0001747a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001aa66) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001aa66) list_single_graphic_heading_pane_fp_t

0xc5b2,	// (0x0001748c) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5b2,	// (0x0001748c) list_single_cale_day_pane_fp_g1

0xc5ea,	// (0x000174c4) list_single_cale_day_pane_fp_g2_ParamLimits

0xc5ea,	// (0x000174c4) list_single_cale_day_pane_fp_g2

0xc5f6,	// (0x000174d0) list_single_cale_day_pane_fp_g3_ParamLimits

0xc5f6,	// (0x000174d0) list_single_cale_day_pane_fp_g3

0xc61e,	// (0x000174f8) list_single_cale_day_pane_fp_g4_ParamLimits

0xc61e,	// (0x000174f8) list_single_cale_day_pane_fp_g4

0xc642,	// (0x0001751c) list_single_cale_day_pane_fp_g5_ParamLimits

0xc642,	// (0x0001751c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001aa6b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001aa6b) list_single_cale_day_pane_fp_g

0xc666,	// (0x00017540) list_single_cale_day_pane_fp_t1_ParamLimits

0xc666,	// (0x00017540) list_single_cale_day_pane_fp_t1

0xc68c,	// (0x00017566) list_single_cale_day_pane_fp_t2_ParamLimits

0xc68c,	// (0x00017566) list_single_cale_day_pane_fp_t2

0xc6a5,	// (0x0001757f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6a5,	// (0x0001757f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001aa76) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001aa76) list_single_cale_day_pane_fp_t

0xc539,	// (0x00017413) list_empty_pane_fp_g1_ParamLimits

0xc539,	// (0x00017413) list_empty_pane_fp_g1

0xc6be,	// (0x00017598) list_empty_pane_fp_t1

0xc6cc,	// (0x000175a6) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001aa7d) list_empty_pane_fp_t

0xc539,	// (0x00017413) list_single_heading_pane_fp_g1_ParamLimits

0xc539,	// (0x00017413) list_single_heading_pane_fp_g1

0x7883,	// (0x0001275d) list_single_heading_pane_fp_g2_ParamLimits

0x7883,	// (0x0001275d) list_single_heading_pane_fp_g2

0x7c60,	// (0x00012b3a) list_single_heading_pane_fp_g3_ParamLimits

0x7c60,	// (0x00012b3a) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001aa82) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001aa82) list_single_heading_pane_fp_g

0xc6da,	// (0x000175b4) list_single_heading_pane_fp_t1_ParamLimits

0xc6da,	// (0x000175b4) list_single_heading_pane_fp_t1

0xc6ec,	// (0x000175c6) list_single_heading_pane_fp_t2_ParamLimits

0xc6ec,	// (0x000175c6) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001aa89) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001aa89) list_single_heading_pane_fp_t

0x7fb0,	// (0x00012e8a) aid_size_cell_fast

0x7023,	// (0x00011efd) soft_indicator_pane_cp1_t1

0x7fed,	// (0x00012ec7) cell_app_pane_cp2_ParamLimits

0x7fed,	// (0x00012ec7) cell_app_pane_cp2

0x5d16,	// (0x00010bf0) fep_hwr_candidate_drop_down_list_pane

0x5eee,	// (0x00010dc8) fep_hwr_candidate_pane_g3_ParamLimits

0x5eee,	// (0x00010dc8) fep_hwr_candidate_pane_g3

0x3eba,	// (0x0000ed94) fep_hwr_candidate_pane_g4_ParamLimits

0x3eba,	// (0x0000ed94) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a9f8) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a9f8) fep_hwr_candidate_pane_g

0xc042,	// (0x00016f1c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc042,	// (0x00016f1c) fep_vkb_candidate_drop_down_list_pane

0xc453,	// (0x0001732d) fep_vkb_candidate_pane_g3

0xc45b,	// (0x00017335) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001aa25) fep_vkb_candidate_pane_g

0x5f59,	// (0x00010e33) cell_hwr_candidate_pane_g1_ParamLimits

0x5f67,	// (0x00010e41) cell_hwr_candidate_pane_g3_ParamLimits

0x5f67,	// (0x00010e41) cell_hwr_candidate_pane_g3

0xe442,	// (0x0001931c) cell_hwr_candidate_pane_g4_ParamLimits

0xe442,	// (0x0001931c) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001aa44) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001aa44) cell_hwr_candidate_pane_g

0xc472,	// (0x0001734c) cell_vkb_candidate_pane_g3_ParamLimits

0xc472,	// (0x0001734c) cell_vkb_candidate_pane_g3

0xc48d,	// (0x00017367) cell_vkb_candidate_pane_g4_ParamLimits

0xc48d,	// (0x00017367) cell_vkb_candidate_pane_g4

0xc702,	// (0x000175dc) cell_app_pane_cp2_g1_ParamLimits

0xc702,	// (0x000175dc) cell_app_pane_cp2_g1

0xc720,	// (0x000175fa) cell_app_pane_cp2_g2_ParamLimits

0xc720,	// (0x000175fa) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001aa8e) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001aa8e) cell_app_pane_cp2_g

0xc72c,	// (0x00017606) cell_app_pane_cp2_t1_ParamLimits

0xc72c,	// (0x00017606) cell_app_pane_cp2_t1

0x7c3a,	// (0x00012b14) grid_highlight_pane_cp1_ParamLimits

0x7c3a,	// (0x00012b14) grid_highlight_pane_cp1

0x5fa6,	// (0x00010e80) cell_hwr_candidate_pane_cp1_ParamLimits

0x5fa6,	// (0x00010e80) cell_hwr_candidate_pane_cp1

0x5f59,	// (0x00010e33) fep_hwr_candidate_drop_down_list_pane_g1

0x5fc5,	// (0x00010e9f) fep_hwr_candidate_drop_down_list_pane_g2

0x5fd2,	// (0x00010eac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001aa93) fep_hwr_candidate_drop_down_list_pane_g

0x5fdf,	// (0x00010eb9) fep_hwr_candidate_drop_down_list_scroll_pane

0x5fe8,	// (0x00010ec2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5fe8,	// (0x00010ec2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5ff5,	// (0x00010ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ff5,	// (0x00010ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6002,	// (0x00010edc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6002,	// (0x00010edc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x600f,	// (0x00010ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x600f,	// (0x00010ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x602a,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x602a,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6045,	// (0x00010f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6045,	// (0x00010f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6060,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6060,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x607b,	// (0x00010f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x607b,	// (0x00010f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001aa9a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001aa9a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc73e,	// (0x00017618) cell_vkb_candidate_pane_cp1_ParamLimits

0xc73e,	// (0x00017618) cell_vkb_candidate_pane_cp1

0xc15b,	// (0x00017035) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc15b,	// (0x00017035) fep_vkb_candidate_drop_down_list_pane_g1

0xc75e,	// (0x00017638) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc75e,	// (0x00017638) fep_vkb_candidate_drop_down_list_pane_g2

0xc76b,	// (0x00017645) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc76b,	// (0x00017645) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001aaab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001aaab) fep_vkb_candidate_drop_down_list_pane_g

0xc778,	// (0x00017652) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc778,	// (0x00017652) fep_vkb_candidate_drop_down_list_scroll_pane

0xc785,	// (0x0001765f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc785,	// (0x0001765f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc792,	// (0x0001766c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc792,	// (0x0001766c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc79e,	// (0x00017678) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc79e,	// (0x00017678) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7aa,	// (0x00017684) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7aa,	// (0x00017684) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7cb,	// (0x000176a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7cb,	// (0x000176a5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7ec,	// (0x000176c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7ec,	// (0x000176c6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc80d,	// (0x000176e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc80d,	// (0x000176e7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc82e,	// (0x00017708) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc82e,	// (0x00017708) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001aab2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001aab2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6d3a,	// (0x00011c14) title_pane_g1_ParamLimits

0x6d47,	// (0x00011c21) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a428) title_pane_g_ParamLimits

0x8423,	// (0x000132fd) aid_call2_pane

0x842b,	// (0x00013305) aid_call_pane

0x8433,	// (0x0001330d) popup_clock_analogue_window_g1

0x8433,	// (0x0001330d) popup_clock_analogue_window_g2

0x4e00,	// (0x0000fcda) popup_clock_analogue_window_g3

0x4e09,	// (0x0000fce3) popup_clock_analogue_window_g4

0x6d26,	// (0x00011c00) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a5cd) popup_clock_analogue_window_g

0x4e11,	// (0x0000fceb) popup_clock_analogue_window_t1

0x4e1f,	// (0x0000fcf9) clock_digital_number_pane_ParamLimits

0x4e1f,	// (0x0000fcf9) clock_digital_number_pane

0x4e2b,	// (0x0000fd05) clock_digital_number_pane_cp02_ParamLimits

0x4e2b,	// (0x0000fd05) clock_digital_number_pane_cp02

0x4e37,	// (0x0000fd11) clock_digital_number_pane_cp03_ParamLimits

0x4e37,	// (0x0000fd11) clock_digital_number_pane_cp03

0x4e43,	// (0x0000fd1d) clock_digital_number_pane_cp04_ParamLimits

0x4e43,	// (0x0000fd1d) clock_digital_number_pane_cp04

0x4e4f,	// (0x0000fd29) clock_digital_separator_pane_ParamLimits

0x4e4f,	// (0x0000fd29) clock_digital_separator_pane

0x4e5b,	// (0x0000fd35) popup_clock_digital_window_t1_ParamLimits

0x4e5b,	// (0x0000fd35) popup_clock_digital_window_t1

0x6d26,	// (0x00011c00) clock_digital_number_pane_g1

0x6d26,	// (0x00011c00) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a5d8) clock_digital_number_pane_g

0x6d26,	// (0x00011c00) clock_digital_separator_pane_g1

0x6d26,	// (0x00011c00) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a5d8) clock_digital_separator_pane_g

0x8e45,	// (0x00013d1f) aid_fill_nsta_ParamLimits

0x8f8b,	// (0x00013e65) indicator_nsta_pane_ParamLimits

0x9104,	// (0x00013fde) popup_clock_analogue_window

0x9104,	// (0x00013fde) popup_clock_digital_window

0x6e10,	// (0x00011cea) grid_indicator_nsta_pane_ParamLimits

0xb8a6,	// (0x00016780) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a978) clock_nsta_pane_t

0x4dc4,	// (0x0000fc9e) aid_size_max_handle

0x4dce,	// (0x0000fca8) aid_size_min_handle

0x8ad5,	// (0x000139af) editor_scroll_pane

0xc849,	// (0x00017723) ex_editor_pane

0x7f1e,	// (0x00012df8) scroll_pane_cp13

0x765e,	// (0x00012538) scroll_pane_cp14

0x8462,	// (0x0001333c) scroll_pane_cp36

0x848e,	// (0x00013368) list_single_graphic_hl_pane_cp2_ParamLimits

0x848e,	// (0x00013368) list_single_graphic_hl_pane_cp2

0xaae2,	// (0x000159bc) list_single_graphic_hl_pane_ParamLimits

0xaae2,	// (0x000159bc) list_single_graphic_hl_pane

0xc851,	// (0x0001772b) aid_size_min_hl_cp1

0xc85a,	// (0x00017734) list_highlight_pane_cp34_ParamLimits

0xc85a,	// (0x00017734) list_highlight_pane_cp34

0xc86b,	// (0x00017745) list_single_graphic_hl_pane_g1_ParamLimits

0xc86b,	// (0x00017745) list_single_graphic_hl_pane_g1

0xc878,	// (0x00017752) list_single_graphic_hl_pane_g2_ParamLimits

0xc878,	// (0x00017752) list_single_graphic_hl_pane_g2

0xc878,	// (0x00017752) list_single_graphic_hl_pane_g3_ParamLimits

0xc878,	// (0x00017752) list_single_graphic_hl_pane_g3

0xb042,	// (0x00015f1c) list_single_graphic_hl_pane_g4_ParamLimits

0xb042,	// (0x00015f1c) list_single_graphic_hl_pane_g4

0xc884,	// (0x0001775e) list_single_graphic_hl_pane_g5_ParamLimits

0xc884,	// (0x0001775e) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001aac3) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001aac3) list_single_graphic_hl_pane_g

0xc898,	// (0x00017772) list_single_graphic_hl_pane_t1_ParamLimits

0xc898,	// (0x00017772) list_single_graphic_hl_pane_t1

0xc8ae,	// (0x00017788) aid_size_min_hl_cp2

0xc8b7,	// (0x00017791) list_highlight_pane_cp34_cp2_ParamLimits

0xc8b7,	// (0x00017791) list_highlight_pane_cp34_cp2

0xc86b,	// (0x00017745) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc86b,	// (0x00017745) list_single_graphic_hl_pane_g1_cp2

0xc8c4,	// (0x0001779e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8c4,	// (0x0001779e) list_single_graphic_hl_pane_g2_cp2

0xc8d0,	// (0x000177aa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8d0,	// (0x000177aa) list_single_graphic_hl_pane_g3_cp2

0xb042,	// (0x00015f1c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb042,	// (0x00015f1c) list_single_graphic_hl_pane_g4_cp2

0xc884,	// (0x0001775e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc884,	// (0x0001775e) list_single_graphic_hl_pane_g5_cp2

0x510f,	// (0x0000ffe9) control_pane_g4_ParamLimits

0x510f,	// (0x0000ffe9) control_pane_g4

0x8e01,	// (0x00013cdb) bg_popup_sub_pane_cp10_ParamLimits

0xbee7,	// (0x00016dc1) list_choice_list_pane_ParamLimits

0xbef6,	// (0x00016dd0) scroll_pane_cp23

0x70b3,	// (0x00011f8d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4de,	// (0x000173b8) list_preview_fixed_pane_ParamLimits

0xc4f4,	// (0x000173ce) list_preview_fixed_pane_cp_ParamLimits

0xc4f4,	// (0x000173ce) list_preview_fixed_pane_cp

0xc500,	// (0x000173da) popup_preview_fixed_window_g1_ParamLimits

0xc500,	// (0x000173da) popup_preview_fixed_window_g1

0xc50c,	// (0x000173e6) popup_preview_fixed_window_g2_ParamLimits

0xc50c,	// (0x000173e6) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001aa4b) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001aa4b) popup_preview_fixed_window_g

0x4d38,	// (0x0000fc12) aid_navi_side_left_pane_ParamLimits

0x4d4d,	// (0x0000fc27) aid_navi_side_right_pane_ParamLimits

0x4d65,	// (0x0000fc3f) navi_icon_pane_stacon_ParamLimits

0x4d79,	// (0x0000fc53) navi_navi_pane_stacon_ParamLimits

0x4d65,	// (0x0000fc3f) navi_text_pane_stacon_ParamLimits

0x4950,	// (0x0000f82a) main_text_info_pane

0xc8f4,	// (0x000177ce) listscroll_text_info_pane

0xc8fc,	// (0x000177d6) list_text_info_pane_ParamLimits

0xc8fc,	// (0x000177d6) list_text_info_pane

0xc90b,	// (0x000177e5) scroll_pane_cp24_ParamLimits

0xc90b,	// (0x000177e5) scroll_pane_cp24

0xc929,	// (0x00017803) list_text_info_pane_t1_ParamLimits

0xc929,	// (0x00017803) list_text_info_pane_t1

0x528d,	// (0x00010167) popup_fast_swap2_window_ParamLimits

0x528d,	// (0x00010167) popup_fast_swap2_window

0xc95a,	// (0x00017834) aid_size_cell_fast2

0x6d1c,	// (0x00011bf6) bg_popup_window_pane_cp17

0x98a6,	// (0x00014780) heading_pane_cp2

0x7328,	// (0x00012202) listscroll_fast2_pane

0xc964,	// (0x0001783e) grid_fast2_pane

0xc96e,	// (0x00017848) listscroll_fast2_pane_g1

0xc976,	// (0x00017850) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001aace) listscroll_fast2_pane_g

0x7f1e,	// (0x00012df8) scroll_pane_cp26

0xc980,	// (0x0001785a) cell_fast2_pane_ParamLimits

0xc980,	// (0x0001785a) cell_fast2_pane

0xc995,	// (0x0001786f) cell_fast2_pane_g1

0xc99e,	// (0x00017878) cell_fast2_pane_g2

0xc9a7,	// (0x00017881) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001aad3) cell_fast2_pane_g

0x741b,	// (0x000122f5) grid_highlight_pane_cp9

0x5253,	// (0x0001012d) main_eswt_pane_ParamLimits

0x5253,	// (0x0001012d) main_eswt_pane

0xc920,	// (0x000177fa) list_single_text_info_pane

0xc9af,	// (0x00017889) eswt_ctrl_button_pane

0xc9af,	// (0x00017889) eswt_ctrl_canvas_pane

0xc9b7,	// (0x00017891) eswt_ctrl_combo_pane

0xc9af,	// (0x00017889) eswt_ctrl_default_pane

0xc9af,	// (0x00017889) eswt_ctrl_label_pane

0xc9bf,	// (0x00017899) eswt_ctrl_wait_pane

0xc9c7,	// (0x000178a1) eswt_shell_pane

0x6d1c,	// (0x00011bf6) listscroll_eswt_app_pane

0xc9e7,	// (0x000178c1) popup_eswt_tasktip_window_ParamLimits

0xc9e7,	// (0x000178c1) popup_eswt_tasktip_window

0x947d,	// (0x00014357) bg_popup_window_pane_cp18

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_ParamLimits

0xc9f8,	// (0x000178d2) eswt_control_pane_g1

0xca05,	// (0x000178df) eswt_control_pane_g2_ParamLimits

0xca05,	// (0x000178df) eswt_control_pane_g2

0xca12,	// (0x000178ec) eswt_control_pane_g3_ParamLimits

0xca12,	// (0x000178ec) eswt_control_pane_g3

0xca1f,	// (0x000178f9) eswt_control_pane_g4_ParamLimits

0xca1f,	// (0x000178f9) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001aada) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001aada) eswt_control_pane_g

0x7c3a,	// (0x00012b14) bg_button_pane_ParamLimits

0x7c3a,	// (0x00012b14) bg_button_pane

0x7430,	// (0x0001230a) common_borders_pane_copy2_ParamLimits

0x7430,	// (0x0001230a) common_borders_pane_copy2

0xca2c,	// (0x00017906) control_button_pane_g1_ParamLimits

0xca2c,	// (0x00017906) control_button_pane_g1

0xca38,	// (0x00017912) control_button_pane_g2_ParamLimits

0xca38,	// (0x00017912) control_button_pane_g2

0xca44,	// (0x0001791e) control_button_pane_g3_ParamLimits

0xca44,	// (0x0001791e) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001aae3) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001aae3) control_button_pane_g

0xca58,	// (0x00017932) control_button_pane_t1

0xca66,	// (0x00017940) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001aaea) control_button_pane_t

0x935b,	// (0x00014235) bg_button_pane_g1

0x936b,	// (0x00014245) bg_button_pane_g2

0x9363,	// (0x0001423d) bg_button_pane_g3

0x937b,	// (0x00014255) bg_button_pane_g4

0x9373,	// (0x0001424d) bg_button_pane_g5

0x9383,	// (0x0001425d) bg_button_pane_g6

0x938b,	// (0x00014265) bg_button_pane_g7

0x939b,	// (0x00014275) bg_button_pane_g8

0x9393,	// (0x0001426d) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a73b) bg_button_pane_g

0xbea2,	// (0x00016d7c) common_borders_pane_ParamLimits

0xbea2,	// (0x00016d7c) common_borders_pane

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy1_ParamLimits

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy1

0xca05,	// (0x000178df) eswt_control_pane_g2_copy1_ParamLimits

0xca05,	// (0x000178df) eswt_control_pane_g2_copy1

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy1_ParamLimits

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy1

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy1_ParamLimits

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy1

0xbedd,	// (0x00016db7) bg_eswt_ctrl_canvas_pane_g1

0xbea2,	// (0x00016d7c) common_borders_pane_cp2_ParamLimits

0xbea2,	// (0x00016d7c) common_borders_pane_cp2

0xbea2,	// (0x00016d7c) common_borders_pane_cp3_ParamLimits

0xbea2,	// (0x00016d7c) common_borders_pane_cp3

0xca74,	// (0x0001794e) separator_horizontal_pane

0xca7c,	// (0x00017956) separator_vertical_pane

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy2_ParamLimits

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy2

0xca05,	// (0x000178df) eswt_control_pane_g2_copy2_ParamLimits

0xca05,	// (0x000178df) eswt_control_pane_g2_copy2

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy2_ParamLimits

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy2

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy2_ParamLimits

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy2

0x6d1c,	// (0x00011bf6) common_borders_pane_cp4

0xca85,	// (0x0001795f) separator_horizontal_pane_g1

0xca8e,	// (0x00017968) separator_horizontal_pane_g2

0xca97,	// (0x00017971) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001aaef) separator_horizontal_pane_g

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy3_ParamLimits

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy3

0xca05,	// (0x000178df) eswt_control_pane_g2_copy3_ParamLimits

0xca05,	// (0x000178df) eswt_control_pane_g2_copy3

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy3_ParamLimits

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy3

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy3_ParamLimits

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy3

0x6d1c,	// (0x00011bf6) common_borders_pane_cp5

0xcaa0,	// (0x0001797a) separator_vertical_pane_g1

0xcaa9,	// (0x00017983) separator_vertical_pane_g2

0xcab2,	// (0x0001798c) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001aaf6) separator_vertical_pane_g

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy4_ParamLimits

0xc9f8,	// (0x000178d2) eswt_control_pane_g1_copy4

0xca05,	// (0x000178df) eswt_control_pane_g2_copy4_ParamLimits

0xca05,	// (0x000178df) eswt_control_pane_g2_copy4

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy4_ParamLimits

0xca12,	// (0x000178ec) eswt_control_pane_g3_copy4

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy4_ParamLimits

0xca1f,	// (0x000178f9) eswt_control_pane_g4_copy4

0xcabb,	// (0x00017995) eswt_ctrl_combo_button_pane

0xcac3,	// (0x0001799d) eswt_ctrl_input_pane

0xcacb,	// (0x000179a5) popup_choice_list_window_cp70

0xcad3,	// (0x000179ad) eswt_ctrl_input_pane_t1

0x6d1c,	// (0x00011bf6) input_focus_pane_cp70

0xbea2,	// (0x00016d7c) bg_button_pane_cp70_ParamLimits

0xbea2,	// (0x00016d7c) bg_button_pane_cp70

0xcae1,	// (0x000179bb) eswt_ctrl_combo_button_pane_g1

0xcae9,	// (0x000179c3) wait_bar_pane_cp70

0x947d,	// (0x00014357) bg_popup_window_pane_cp70_ParamLimits

0x947d,	// (0x00014357) bg_popup_window_pane_cp70

0xcaf1,	// (0x000179cb) popup_eswt_tasktip_window_t1

0xcb07,	// (0x000179e1) wait_bar_pane_cp71_ParamLimits

0xcb07,	// (0x000179e1) wait_bar_pane_cp71

0xcb13,	// (0x000179ed) grid_eswt_app_pane

0x823c,	// (0x00013116) scroll_pane_cp70

0xcb1c,	// (0x000179f6) cell_eswt_app_pane_ParamLimits

0xcb1c,	// (0x000179f6) cell_eswt_app_pane

0xcb4c,	// (0x00017a26) cell_eswt_app_pane_g1_ParamLimits

0xcb4c,	// (0x00017a26) cell_eswt_app_pane_g1

0xcb7b,	// (0x00017a55) cell_eswt_app_pane_g2_ParamLimits

0xcb7b,	// (0x00017a55) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001aafd) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001aafd) cell_eswt_app_pane_g

0xcba4,	// (0x00017a7e) cell_eswt_app_pane_t1_ParamLimits

0xcba4,	// (0x00017a7e) cell_eswt_app_pane_t1

0xcbd6,	// (0x00017ab0) grid_highlight_pane_cp70_ParamLimits

0xcbd6,	// (0x00017ab0) grid_highlight_pane_cp70

0x89aa,	// (0x00013884) set_content_pane_g1

0x8d80,	// (0x00013c5a) status_small_volume_pane

0x6096,	// (0x00010f70) status_small_volume_pane_g1

0x609e,	// (0x00010f78) volume_small2_pane

0x60a7,	// (0x00010f81) volume_small2_pane_g1

0x60b0,	// (0x00010f8a) volume_small2_pane_g2

0x60b9,	// (0x00010f93) volume_small2_pane_g3

0x60c2,	// (0x00010f9c) volume_small2_pane_g4

0x60cb,	// (0x00010fa5) volume_small2_pane_g5

0x60d4,	// (0x00010fae) volume_small2_pane_g6

0x60dd,	// (0x00010fb7) volume_small2_pane_g7

0x60e6,	// (0x00010fc0) volume_small2_pane_g8

0x60ef,	// (0x00010fc9) volume_small2_pane_g9

0x60f8,	// (0x00010fd2) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001ab02) volume_small2_pane_g

0xc2a3,	// (0x0001717d) fep_vkb_top_text_pane_g1_ParamLimits

0xc2be,	// (0x00017198) fep_vkb_top_text_pane_t1_ParamLimits

0xc518,	// (0x000173f2) popup_preview_fixed_window_g3_ParamLimits

0xc518,	// (0x000173f2) popup_preview_fixed_window_g3

0x573c,	// (0x00010616) popup_toolbar_trans_pane

0xa83f,	// (0x00015719) aid_height_set_list_ParamLimits

0xa850,	// (0x0001572a) aid_size_parent_ParamLimits

0x8e01,	// (0x00013cdb) list_highlight_pane_cp2_ParamLimits

0x89aa,	// (0x00013884) set_content_pane_g1_ParamLimits

0xaafe,	// (0x000159d8) list_single_image_pane_ParamLimits

0xaafe,	// (0x000159d8) list_single_image_pane

0xcbe2,	// (0x00017abc) aid_size_cell_image_ParamLimits

0xcbe2,	// (0x00017abc) aid_size_cell_image

0xcbef,	// (0x00017ac9) grid_single_image_pane_ParamLimits

0xcbef,	// (0x00017ac9) grid_single_image_pane

0xa01f,	// (0x00014ef9) list_single_image_pane_g1_ParamLimits

0xa01f,	// (0x00014ef9) list_single_image_pane_g1

0xcbfb,	// (0x00017ad5) list_single_image_pane_g2_ParamLimits

0xcbfb,	// (0x00017ad5) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001ab17) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001ab17) list_single_image_pane_g

0xcc0f,	// (0x00017ae9) list_single_image_pane_t1_ParamLimits

0xcc0f,	// (0x00017ae9) list_single_image_pane_t1

0xcc25,	// (0x00017aff) cell_image_list_pane_ParamLimits

0xcc25,	// (0x00017aff) cell_image_list_pane

0xcc39,	// (0x00017b13) cell_image_list_pane_g1

0xcc42,	// (0x00017b1c) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001ab1c) cell_image_list_pane_g

0xcc4b,	// (0x00017b25) aid_size_cell_tb_trans_pane

0x7c3a,	// (0x00012b14) bg_tb_trans_pane

0xcc5d,	// (0x00017b37) grid_tb_trans_pane

0x935b,	// (0x00014235) bg_tb_trans_pane_g1

0x936b,	// (0x00014245) bg_tb_trans_pane_g2

0x9363,	// (0x0001423d) bg_tb_trans_pane_g3

0x937b,	// (0x00014255) bg_tb_trans_pane_g4

0x9373,	// (0x0001424d) bg_tb_trans_pane_g5

0x939b,	// (0x00014275) bg_tb_trans_pane_g6

0x9393,	// (0x0001426d) bg_tb_trans_pane_g7

0x9383,	// (0x0001425d) bg_tb_trans_pane_g8

0x938b,	// (0x00014265) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001ab21) bg_tb_trans_pane_g

0xcc71,	// (0x00017b4b) cell_toolbar_trans_pane_ParamLimits

0xcc71,	// (0x00017b4b) cell_toolbar_trans_pane

0xbedd,	// (0x00016db7) cell_toolbar_trans_pane_g1

0xba63,	// (0x0001693d) list_form2_midp_pane_t1

0xba71,	// (0x0001694b) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a9be) list_form2_midp_pane_t

0xba7f,	// (0x00016959) scroll_pane_cp51_ParamLimits

0xbc8a,	// (0x00016b64) form2_midp_wait_pane_g1

0xbc93,	// (0x00016b6d) form2_midp_wait_pane_g2

0xbc9c,	// (0x00016b76) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a9d3) form2_midp_wait_pane_g

0x6e10,	// (0x00011cea) list_highlight_pane_cp21_ParamLimits

0xbce8,	// (0x00016bc2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbcf7,	// (0x00016bd1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa86,	// (0x00015960) list_single_2graphic_im_pane_ParamLimits

0xaa86,	// (0x00015960) list_single_2graphic_im_pane

0xcc97,	// (0x00017b71) list_single_2graphic_im_pane_g1_ParamLimits

0xcc97,	// (0x00017b71) list_single_2graphic_im_pane_g1

0xcca8,	// (0x00017b82) list_single_2graphic_im_pane_g2_ParamLimits

0xcca8,	// (0x00017b82) list_single_2graphic_im_pane_g2

0xccb4,	// (0x00017b8e) list_single_2graphic_im_pane_g3_ParamLimits

0xccb4,	// (0x00017b8e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001ab34) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001ab34) list_single_2graphic_im_pane_g

0xccd4,	// (0x00017bae) list_single_2graphic_im_pane_t1_ParamLimits

0xccd4,	// (0x00017bae) list_single_2graphic_im_pane_t1

0xc524,	// (0x000173fe) list_single_graphic_2heading_pane_fp_ParamLimits

0xc524,	// (0x000173fe) list_single_graphic_2heading_pane_fp

0xc568,	// (0x00017442) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc568,	// (0x00017442) list_single_graphic_2heading_pane_fp_g1

0xc539,	// (0x00017413) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc539,	// (0x00017413) list_single_graphic_2heading_pane_fp_g2

0x7883,	// (0x0001275d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7883,	// (0x0001275d) list_single_graphic_2heading_pane_fp_g3

0x7c60,	// (0x00012b3a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7c60,	// (0x00012b3a) list_single_graphic_2heading_pane_fp_g4

0xc545,	// (0x0001741f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc545,	// (0x0001741f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001aa5b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001aa5b) list_single_graphic_2heading_pane_fp_g

0xcd05,	// (0x00017bdf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd05,	// (0x00017bdf) list_single_graphic_2heading_pane_fp_t1

0xc5a0,	// (0x0001747a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5a0,	// (0x0001747a) list_single_graphic_2heading_pane_fp_t2

0xcd1b,	// (0x00017bf5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd1b,	// (0x00017bf5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001ab3d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001ab3d) list_single_graphic_2heading_pane_fp_t

0xbf69,	// (0x00016e43) fep_hwr_write_pane_g5_ParamLimits

0xbf69,	// (0x00016e43) fep_hwr_write_pane_g5

0xbf75,	// (0x00016e4f) fep_hwr_write_pane_g6_ParamLimits

0xbf75,	// (0x00016e4f) fep_hwr_write_pane_g6

0xc9c7,	// (0x000178a1) eswt_shell_pane_ParamLimits

0x947d,	// (0x00014357) bg_popup_window_pane_cp18_ParamLimits

0xa770,	// (0x0001564a) heading_pane_cp70

0xcaf1,	// (0x000179cb) popup_eswt_tasktip_window_t1_ParamLimits

0x8e9a,	// (0x00013d74) aid_touch_tab_arrow_left

0x8ea9,	// (0x00013d83) aid_touch_tab_arrow_right

0x6d58,	// (0x00011c32) title_pane_g3_ParamLimits

0x6d58,	// (0x00011c32) title_pane_g3

0x7b19,	// (0x000129f3) set_value_pane_g1

0x573c,	// (0x00010616) popup_toolbar_trans_pane_ParamLimits

0xcc4b,	// (0x00017b25) aid_size_cell_tb_trans_pane_ParamLimits

0x7c3a,	// (0x00012b14) bg_tb_trans_pane_ParamLimits

0xcc5d,	// (0x00017b37) grid_tb_trans_pane_ParamLimits

0x70b3,	// (0x00011f8d) cont_note_pane_ParamLimits

0x70b3,	// (0x00011f8d) cont_note_pane

0x7430,	// (0x0001230a) cont_snote2_single_text_pane_ParamLimits

0x7430,	// (0x0001230a) cont_snote2_single_text_pane

0x7430,	// (0x0001230a) cont_snote2_single_graphic_pane_ParamLimits

0x7430,	// (0x0001230a) cont_snote2_single_graphic_pane

0x9acd,	// (0x000149a7) cont_note_wait_pane_ParamLimits

0x9acd,	// (0x000149a7) cont_note_wait_pane

0x9acd,	// (0x000149a7) cont_note_image_pane_ParamLimits

0x9acd,	// (0x000149a7) cont_note_image_pane

0xcd31,	// (0x00017c0b) popup_note2_window_g1_ParamLimits

0xcd31,	// (0x00017c0b) popup_note2_window_g1

0xcd62,	// (0x00017c3c) popup_note2_window_t1_ParamLimits

0xcd62,	// (0x00017c3c) popup_note2_window_t1

0xcda7,	// (0x00017c81) popup_note2_window_t2_ParamLimits

0xcda7,	// (0x00017c81) popup_note2_window_t2

0xcdec,	// (0x00017cc6) popup_note2_window_t3_ParamLimits

0xcdec,	// (0x00017cc6) popup_note2_window_t3

0xce31,	// (0x00017d0b) popup_note2_window_t4_ParamLimits

0xce31,	// (0x00017d0b) popup_note2_window_t4

0x7137,	// (0x00012011) popup_note2_window_t5_ParamLimits

0x7137,	// (0x00012011) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001ab49) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001ab49) popup_note2_window_t

0xce60,	// (0x00017d3a) popup_note2_image_window_g1_ParamLimits

0xce60,	// (0x00017d3a) popup_note2_image_window_g1

0xce6c,	// (0x00017d46) popup_note2_image_window_g2_ParamLimits

0xce6c,	// (0x00017d46) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001ab54) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001ab54) popup_note2_image_window_g

0xce7e,	// (0x00017d58) popup_note2_image_window_t1_ParamLimits

0xce7e,	// (0x00017d58) popup_note2_image_window_t1

0xce96,	// (0x00017d70) popup_note2_image_window_t2_ParamLimits

0xce96,	// (0x00017d70) popup_note2_image_window_t2

0xceae,	// (0x00017d88) popup_note2_image_window_t3_ParamLimits

0xceae,	// (0x00017d88) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001ab59) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001ab59) popup_note2_image_window_t

0x9adb,	// (0x000149b5) popup_note2_wait_window_g1_ParamLimits

0x9adb,	// (0x000149b5) popup_note2_wait_window_g1

0xceca,	// (0x00017da4) popup_note2_wait_window_g2_ParamLimits

0xceca,	// (0x00017da4) popup_note2_wait_window_g2

0x9af3,	// (0x000149cd) popup_note2_wait_window_g3_ParamLimits

0x9af3,	// (0x000149cd) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001ab60) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001ab60) popup_note2_wait_window_g

0xced6,	// (0x00017db0) popup_note2_wait_window_t1_ParamLimits

0xced6,	// (0x00017db0) popup_note2_wait_window_t1

0xcef4,	// (0x00017dce) popup_note2_wait_window_t2_ParamLimits

0xcef4,	// (0x00017dce) popup_note2_wait_window_t2

0xcf12,	// (0x00017dec) popup_note2_wait_window_t3_ParamLimits

0xcf12,	// (0x00017dec) popup_note2_wait_window_t3

0xcf24,	// (0x00017dfe) popup_note2_wait_window_t4_ParamLimits

0xcf24,	// (0x00017dfe) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001ab67) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001ab67) popup_note2_wait_window_t

0xcf36,	// (0x00017e10) wait_bar2_pane_ParamLimits

0xcf36,	// (0x00017e10) wait_bar2_pane

0xcf4e,	// (0x00017e28) popup_snote2_single_text_window_g1_ParamLimits

0xcf4e,	// (0x00017e28) popup_snote2_single_text_window_g1

0xcf76,	// (0x00017e50) popup_snote2_single_text_window_t1_ParamLimits

0xcf76,	// (0x00017e50) popup_snote2_single_text_window_t1

0xcfc2,	// (0x00017e9c) popup_snote2_single_text_window_t2_ParamLimits

0xcfc2,	// (0x00017e9c) popup_snote2_single_text_window_t2

0xd00e,	// (0x00017ee8) popup_snote2_single_text_window_t3_ParamLimits

0xd00e,	// (0x00017ee8) popup_snote2_single_text_window_t3

0xd04f,	// (0x00017f29) popup_snote2_single_text_window_t4_ParamLimits

0xd04f,	// (0x00017f29) popup_snote2_single_text_window_t4

0xd085,	// (0x00017f5f) popup_snote2_single_text_window_t5_ParamLimits

0xd085,	// (0x00017f5f) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001ab70) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001ab70) popup_snote2_single_text_window_t

0xd0b0,	// (0x00017f8a) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0b0,	// (0x00017f8a) popup_snote2_single_graphic_window_g1

0xd0d8,	// (0x00017fb2) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0d8,	// (0x00017fb2) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001ab7b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001ab7b) popup_snote2_single_graphic_window_g

0xd100,	// (0x00017fda) popup_snote2_single_graphic_window_t1_ParamLimits

0xd100,	// (0x00017fda) popup_snote2_single_graphic_window_t1

0xd14c,	// (0x00018026) popup_snote2_single_graphic_window_t2_ParamLimits

0xd14c,	// (0x00018026) popup_snote2_single_graphic_window_t2

0xd00e,	// (0x00017ee8) popup_snote2_single_graphic_window_t3_ParamLimits

0xd00e,	// (0x00017ee8) popup_snote2_single_graphic_window_t3

0xd04f,	// (0x00017f29) popup_snote2_single_graphic_window_t4_ParamLimits

0xd04f,	// (0x00017f29) popup_snote2_single_graphic_window_t4

0xd085,	// (0x00017f5f) popup_snote2_single_graphic_window_t5_ParamLimits

0xd085,	// (0x00017f5f) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001ab80) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001ab80) popup_snote2_single_graphic_window_t

0xb940,	// (0x0001681a) clock_nsta_pane_cp2_t1

0xb940,	// (0x0001681a) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a994) clock_nsta_pane_cp2_t

0x7c54,	// (0x00012b2e) form_field_data_wide_pane_g1_ParamLimits

0x7883,	// (0x0001275d) form_field_data_wide_pane_g2_ParamLimits

0x7883,	// (0x0001275d) form_field_data_wide_pane_g2

0x7c60,	// (0x00012b3a) form_field_data_wide_pane_g3_ParamLimits

0x7c60,	// (0x00012b3a) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a550) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a550) form_field_data_wide_pane_g

0xb842,	// (0x0001671c) grid_touch_3_pane_ParamLimits

0xb842,	// (0x0001671c) grid_touch_3_pane

0xd198,	// (0x00018072) cell_touch_3_pane_ParamLimits

0xd198,	// (0x00018072) cell_touch_3_pane

0xbedd,	// (0x00016db7) cell_touch_3_pane_g1

0xbedd,	// (0x00016db7) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001aa19) cell_touch_3_pane_g

0x718f,	// (0x00012069) cont_query_data_pane

0x7197,	// (0x00012071) cont_query_data_pane_cp1

0xd1c6,	// (0x000180a0) button_value_adjust_pane_cp7

0xd1ce,	// (0x000180a8) query_popup_pane_cp3

0x8523,	// (0x000133fd) bg_popup_sub_pane_cp22_ParamLimits

0x4e7a,	// (0x0000fd54) navi_navi_volume_pane_cp2

0x4e95,	// (0x0000fd6f) popup_side_volume_key_window_g2

0x4ea4,	// (0x0000fd7e) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a5e6) popup_side_volume_key_window_g

0x4ec1,	// (0x0000fd9b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a5ed) popup_side_volume_key_window_t

0x8869,	// (0x00013743) popup_side_volume_key_window_ParamLimits

0x7843,	// (0x0001271d) list_double_graphic_pane_g4_ParamLimits

0x7843,	// (0x0001271d) list_double_graphic_pane_g4

0xaac3,	// (0x0001599d) list_single_2heading_msg_pane_ParamLimits

0xaac3,	// (0x0001599d) list_single_2heading_msg_pane

0xd1fd,	// (0x000180d7) list_single_2heading_msg_pane_g1_ParamLimits

0xd1fd,	// (0x000180d7) list_single_2heading_msg_pane_g1

0x8a0e,	// (0x000138e8) list_single_2heading_msg_pane_g2_ParamLimits

0x8a0e,	// (0x000138e8) list_single_2heading_msg_pane_g2

0xb373,	// (0x0001624d) list_single_2heading_msg_pane_g3_ParamLimits

0xb373,	// (0x0001624d) list_single_2heading_msg_pane_g3

0xd209,	// (0x000180e3) list_single_2heading_msg_pane_g4_ParamLimits

0xd209,	// (0x000180e3) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001ab8b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001ab8b) list_single_2heading_msg_pane_g

0xd221,	// (0x000180fb) list_single_2heading_msg_pane_t1_ParamLimits

0xd221,	// (0x000180fb) list_single_2heading_msg_pane_t1

0xd249,	// (0x00018123) list_single_2heading_msg_pane_t2_ParamLimits

0xd249,	// (0x00018123) list_single_2heading_msg_pane_t2

0xd278,	// (0x00018152) list_single_2heading_msg_pane_t3_ParamLimits

0xd278,	// (0x00018152) list_single_2heading_msg_pane_t3

0xd2b1,	// (0x0001818b) list_single_2heading_msg_pane_t4_ParamLimits

0xd2b1,	// (0x0001818b) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001ab94) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001ab94) list_single_2heading_msg_pane_t

0x6d64,	// (0x00011c3e) title_pane_g4_ParamLimits

0x6d64,	// (0x00011c3e) title_pane_g4

0x4c89,	// (0x0000fb63) title_pane_stacon_g3_ParamLimits

0x4c89,	// (0x0000fb63) title_pane_stacon_g3

0xccc8,	// (0x00017ba2) list_single_2graphic_im_pane_g4_ParamLimits

0xccc8,	// (0x00017ba2) list_single_2graphic_im_pane_g4

0xa538,	// (0x00015412) popup_side_volume_key_window_cp

0xae39,	// (0x00015d13) main_idle_act2_pane_t1

0x589a,	// (0x00010774) toolbar_button_pane_g10

0x7628,	// (0x00012502) popup_toolbar_window_cp1

0xb931,	// (0x0001680b) clock_nsta_pane_cp_t1

0xb931,	// (0x0001680b) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a98f) clock_nsta_pane_cp_t

0x4e7a,	// (0x0000fd54) navi_navi_volume_pane_cp2_ParamLimits

0x4e89,	// (0x0000fd63) popup_side_volume_key_window_g1_ParamLimits

0x4e95,	// (0x0000fd6f) popup_side_volume_key_window_g2_ParamLimits

0x4ea4,	// (0x0000fd7e) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a5e6) popup_side_volume_key_window_g_ParamLimits

0x5d02,	// (0x00010bdc) fep_hwr_aid_pane

0x5da9,	// (0x00010c83) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf39,	// (0x00016e13) fep_hwr_top_pane_g1_ParamLimits

0xbf4b,	// (0x00016e25) fep_hwr_top_pane_g2_ParamLimits

0x5dc9,	// (0x00010ca3) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a9e4) fep_hwr_top_pane_g_ParamLimits

0x5dde,	// (0x00010cb8) fep_hwr_top_text_pane_ParamLimits

0xa2fb,	// (0x000151d5) aid_touch_tab_arrow_arrow_2

0xa304,	// (0x000151de) aid_touch_tab_arrow_left_2

0x5d16,	// (0x00010bf0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5d4d,	// (0x00010c27) fep_hwr_prediction_pane

0xc0ab,	// (0x00016f85) fep_vkb_prediction_pane

0xc1af,	// (0x00017089) fep_vkb_side_pane_g3_ParamLimits

0xc1af,	// (0x00017089) fep_vkb_side_pane_g3

0x5f59,	// (0x00010e33) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5fc5,	// (0x00010e9f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5fd2,	// (0x00010eac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001aa93) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6101,	// (0x00010fdb) fep_hwr_prediction_pane_g1

0x610b,	// (0x00010fe5) fep_hwr_prediction_pane_g2

0x6113,	// (0x00010fed) fep_hwr_prediction_pane_g3

0x611b,	// (0x00010ff5) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001ab9d) fep_hwr_prediction_pane_g

0xd2d6,	// (0x000181b0) fep_vkb_prediction_pane_g1

0xd2e0,	// (0x000181ba) fep_vkb_prediction_pane_g2

0xd2e8,	// (0x000181c2) fep_vkb_prediction_pane_g3

0xd2f0,	// (0x000181ca) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001aba6) fep_vkb_prediction_pane_g

0x5b82,	// (0x00010a5c) slider_set_pane_g3

0x5b96,	// (0x00010a70) slider_set_pane_g4

0x5bae,	// (0x00010a88) slider_set_pane_g5

0x5b82,	// (0x00010a5c) slider_set_pane_g6

0x5bc4,	// (0x00010a9e) slider_set_pane_g7

0xa9b5,	// (0x0001588f) slider_form_pane_g3

0xa9be,	// (0x00015898) slider_form_pane_g4

0xa9c6,	// (0x000158a0) slider_form_pane_g5

0xa9b5,	// (0x0001588f) slider_form_pane_g6

0xa9ce,	// (0x000158a8) slider_form_pane_g7

0xb135,	// (0x0001600f) slider_set_pane_vc_g3

0xb13e,	// (0x00016018) slider_set_pane_vc_g4

0xb147,	// (0x00016021) slider_set_pane_vc_g5

0xb135,	// (0x0001600f) slider_set_pane_vc_g6

0xb150,	// (0x0001602a) slider_set_pane_vc_g7

0xb615,	// (0x000164ef) slider_form_pane_vc_g1

0xb61e,	// (0x000164f8) slider_form_pane_vc_g2

0xb627,	// (0x00016501) slider_form_pane_vc_g3

0xb615,	// (0x000164ef) slider_form_pane_vc_g4

0xb630,	// (0x0001650a) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a961) slider_form_pane_vc_g

0x4950,	// (0x0000f82a) main_idle_act3_pane

0xd2f8,	// (0x000181d2) ai3_links_pane

0xd301,	// (0x000181db) popup_ai3_data_window_ParamLimits

0xd301,	// (0x000181db) popup_ai3_data_window

0x6d1c,	// (0x00011bf6) grid_ai3_links_pane

0xd31b,	// (0x000181f5) cell_ai3_links_pane_ParamLimits

0xd31b,	// (0x000181f5) cell_ai3_links_pane

0xd333,	// (0x0001820d) bg_popup_sub_pane_cp11

0xd340,	// (0x0001821a) cell_ai3_links_pane_g1

0x6d1c,	// (0x00011bf6) bg_popup_sub_pane_cp12

0xd365,	// (0x0001823f) heading_ai3_data_pane

0xd36d,	// (0x00018247) list_ai3_gene_pane

0xd379,	// (0x00018253) popup_ai3_data_window_g1

0xd381,	// (0x0001825b) heading_ai3_data_pane_g1

0xd389,	// (0x00018263) heading_ai3_data_pane_t1

0xd397,	// (0x00018271) list_double_ai3_gene_pane_ParamLimits

0xd397,	// (0x00018271) list_double_ai3_gene_pane

0xd3a4,	// (0x0001827e) list_single_ai3_gene_pane_ParamLimits

0xd3a4,	// (0x0001827e) list_single_ai3_gene_pane

0xbea2,	// (0x00016d7c) list_highlight_pane_cp7_ParamLimits

0xbea2,	// (0x00016d7c) list_highlight_pane_cp7

0xd3b1,	// (0x0001828b) list_single_a13_gene_pane_t1_ParamLimits

0xd3b1,	// (0x0001828b) list_single_a13_gene_pane_t1

0xd3c8,	// (0x000182a2) list_single_ai3_gene_pane_g1

0xd3d1,	// (0x000182ab) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001abaf) list_single_ai3_gene_pane_g

0xd3d9,	// (0x000182b3) list_double_ai3_gene_pane_g1_ParamLimits

0xd3d9,	// (0x000182b3) list_double_ai3_gene_pane_g1

0xd3e5,	// (0x000182bf) list_double_ai3_gene_pane_t1_ParamLimits

0xd3e5,	// (0x000182bf) list_double_ai3_gene_pane_t1

0xd401,	// (0x000182db) list_double_ai3_gene_pane_t2_ParamLimits

0xd401,	// (0x000182db) list_double_ai3_gene_pane_t2

0xd417,	// (0x000182f1) list_double_ai3_gene_pane_t3_ParamLimits

0xd417,	// (0x000182f1) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001abb4) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001abb4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd1df,	// (0x000180b9) aid_size_min_col_2

0xd1e9,	// (0x000180c3) aid_size_min_msg_ParamLimits

0xd1e9,	// (0x000180c3) aid_size_min_msg

0xc2af,	// (0x00017189) fep_vkb_top_text_pane_g2_ParamLimits

0xc2af,	// (0x00017189) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001aa14) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001aa14) fep_vkb_top_text_pane_g

0x4950,	// (0x0000f82a) main_hc_apps_shell_pane

0xd434,	// (0x0001830e) grid_hc_apps_pane_ParamLimits

0xd434,	// (0x0001830e) grid_hc_apps_pane

0xd443,	// (0x0001831d) list_hc_apps_pane

0xd44b,	// (0x00018325) scroll_pane_cp37_ParamLimits

0xd44b,	// (0x00018325) scroll_pane_cp37

0xd457,	// (0x00018331) cell_hc_apps_pane_ParamLimits

0xd457,	// (0x00018331) cell_hc_apps_pane

0xd505,	// (0x000183df) cell_hc_apps_pane_g1_ParamLimits

0xd505,	// (0x000183df) cell_hc_apps_pane_g1

0xd536,	// (0x00018410) cell_hc_apps_pane_g2_ParamLimits

0xd536,	// (0x00018410) cell_hc_apps_pane_g2

0xd552,	// (0x0001842c) cell_hc_apps_pane_g3_ParamLimits

0xd552,	// (0x0001842c) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001abbb) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001abbb) cell_hc_apps_pane_g

0xd574,	// (0x0001844e) cell_hc_apps_pane_t1_ParamLimits

0xd574,	// (0x0001844e) cell_hc_apps_pane_t1

0x70b3,	// (0x00011f8d) grid_highlight_pane_cp10_ParamLimits

0x70b3,	// (0x00011f8d) grid_highlight_pane_cp10

0xd5b4,	// (0x0001848e) list_single_hc_apps_pane_ParamLimits

0xd5b4,	// (0x0001848e) list_single_hc_apps_pane

0xd610,	// (0x000184ea) list_single_hc_apps_pane_g1

0xd629,	// (0x00018503) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001abc2) list_single_hc_apps_pane_g

0xd642,	// (0x0001851c) list_single_hc_apps_pane_g2_copy1

0xd65e,	// (0x00018538) list_single_hc_apps_pane_t1

0x6e10,	// (0x00011cea) bg_set_opt_pane_cp_ParamLimits

0x4bb1,	// (0x0000fa8b) setting_slider_pane_t1_ParamLimits

0x4bca,	// (0x0000faa4) setting_slider_pane_t2_ParamLimits

0x4be4,	// (0x0000fabe) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a438) setting_slider_pane_t_ParamLimits

0x4bfc,	// (0x0000fad6) slider_set_pane_ParamLimits

0x5123,	// (0x0000fffd) control_pane_g5_ParamLimits

0x5123,	// (0x0000fffd) control_pane_g5

0xa804,	// (0x000156de) slider_set_pane_g1_ParamLimits

0x5b76,	// (0x00010a50) slider_set_pane_g2_ParamLimits

0x5b82,	// (0x00010a5c) slider_set_pane_g3_ParamLimits

0x5b96,	// (0x00010a70) slider_set_pane_g4_ParamLimits

0x5bae,	// (0x00010a88) slider_set_pane_g5_ParamLimits

0x5b82,	// (0x00010a5c) slider_set_pane_g6_ParamLimits

0x5bc4,	// (0x00010a9e) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a839) slider_set_pane_g_ParamLimits

0x8955,	// (0x0001382f) navi_icon_text_pane_ParamLimits

0x8e5b,	// (0x00013d35) aid_fill_nsta_2_ParamLimits

0x8e9a,	// (0x00013d74) aid_touch_tab_arrow_left_ParamLimits

0x8ea9,	// (0x00013d83) aid_touch_tab_arrow_right_ParamLimits

0x8f16,	// (0x00013df0) clock_nsta_pane_ParamLimits

0xa2dd,	// (0x000151b7) navi_icon_pane_g1_ParamLimits

0xa2e9,	// (0x000151c3) navi_text_pane_t1_ParamLimits

0xba3d,	// (0x00016917) navi_icon_text_pane_g1_ParamLimits

0xba49,	// (0x00016923) navi_icon_text_pane_t1_ParamLimits

0xd610,	// (0x000184ea) list_single_hc_apps_pane_g1_ParamLimits

0xd629,	// (0x00018503) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001abc2) list_single_hc_apps_pane_g_ParamLimits

0xd642,	// (0x0001851c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd65e,	// (0x00018538) list_single_hc_apps_pane_t1_ParamLimits

0x4abb,	// (0x0000f995) popup_toolbar2_fixed_window_ParamLimits

0x4abb,	// (0x0000f995) popup_toolbar2_fixed_window

0x5732,	// (0x0001060c) popup_toolbar2_float_window

0x6d1c,	// (0x00011bf6) bg_popup_sub_pane_cp27

0xd68c,	// (0x00018566) grid_toolbar2_float_pane

0x6d1c,	// (0x00011bf6) bg_popup_sub_pane_cp26

0xd68c,	// (0x00018566) grid_toolbar2_fixed_pane

0xd694,	// (0x0001856e) cell_toolbar2_fixed_pane_ParamLimits

0xd694,	// (0x0001856e) cell_toolbar2_fixed_pane

0xd6a4,	// (0x0001857e) cell_toolbar2_fixed_pane_g1

0xd6ad,	// (0x00018587) toolbar2_fixed_button_pane

0x935b,	// (0x00014235) toolbar2_fixed_button_pane_g1

0x936b,	// (0x00014245) toolbar2_fixed_button_pane_g2

0x9363,	// (0x0001423d) toolbar2_fixed_button_pane_g3

0x937b,	// (0x00014255) toolbar2_fixed_button_pane_g4

0x9373,	// (0x0001424d) toolbar2_fixed_button_pane_g5

0x9383,	// (0x0001425d) toolbar2_fixed_button_pane_g6

0x938b,	// (0x00014265) toolbar2_fixed_button_pane_g7

0x939b,	// (0x00014275) toolbar2_fixed_button_pane_g8

0x9393,	// (0x0001426d) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a73b) toolbar2_fixed_button_pane_g

0xd6b5,	// (0x0001858f) cell_toolbar2_float_pane_ParamLimits

0xd6b5,	// (0x0001858f) cell_toolbar2_float_pane

0xd6c6,	// (0x000185a0) cell_toolbar2_float_pane_g1

0xd6ad,	// (0x00018587) toolbar2_fixed_button_pane_cp

0xc00b,	// (0x00016ee5) fep_vkb_accented_list_pane_ParamLimits

0xc00b,	// (0x00016ee5) fep_vkb_accented_list_pane

0x5f39,	// (0x00010e13) bg_popup_fep_shadow_pane_g9

0x8ad5,	// (0x000139af) bg_popup_fep_shadow_pane_cp3

0x7f05,	// (0x00012ddf) list_accented_list_pane

0xd6cf,	// (0x000185a9) list_single_accented_list_pane_ParamLimits

0xd6cf,	// (0x000185a9) list_single_accented_list_pane

0x8ad5,	// (0x000139af) list_highlight_pane_cp10

0xd6e0,	// (0x000185ba) list_single_accented_list_pane_t1

0x5682,	// (0x0001055c) popup_slider_window_ParamLimits

0x5682,	// (0x0001055c) popup_slider_window

0xd1d6,	// (0x000180b0) aid_indentation_list_msg

0xd7a4,	// (0x0001867e) bg_popup_window_pane_cp19

0xd80c,	// (0x000186e6) popup_slider_window_g1

0xd828,	// (0x00018702) popup_slider_window_g2

0xd844,	// (0x0001871e) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001abc7) popup_slider_window_g

0xd8aa,	// (0x00018784) popup_slider_window_t1

0xd91e,	// (0x000187f8) small_volume_slider_vertical_pane

0xbedd,	// (0x00016db7) small_volume_slider_vertical_pane_g1

0xbedd,	// (0x00016db7) small_volume_slider_vertical_pane_g2

0xd93a,	// (0x00018814) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001abd9) small_volume_slider_vertical_pane_g

0x4873,	// (0x0000f74d) area_side_right_pane_ParamLimits

0x4873,	// (0x0000f74d) area_side_right_pane

0x6123,	// (0x00010ffd) aid_size_side_button_ParamLimits

0x6123,	// (0x00010ffd) aid_size_side_button

0x6137,	// (0x00011011) grid_sctrl_middle_pane_ParamLimits

0x6137,	// (0x00011011) grid_sctrl_middle_pane

0x6156,	// (0x00011030) sctrl_sk_bottom_pane

0x6167,	// (0x00011041) sctrl_sk_top_pane

0x6179,	// (0x00011053) aid_touch_sctrl_top

0x6186,	// (0x00011060) bg_sctrl_sk_pane_ParamLimits

0x6186,	// (0x00011060) bg_sctrl_sk_pane

0x6194,	// (0x0001106e) sctrl_sk_top_pane_g1

0x61a1,	// (0x0001107b) sctrl_sk_top_pane_t1

0x6179,	// (0x00011053) aid_touch_sctrl_bottom

0x6186,	// (0x00011060) bg_sctrl_sk_pane_cp_ParamLimits

0x6186,	// (0x00011060) bg_sctrl_sk_pane_cp

0x61bc,	// (0x00011096) sctrl_sk_bottom_pane_g1

0x61a1,	// (0x0001107b) sctrl_sk_bottom_pane_t1

0x61c5,	// (0x0001109f) cell_sctrl_middle_pane_ParamLimits

0x61c5,	// (0x0001109f) cell_sctrl_middle_pane

0x61e0,	// (0x000110ba) aid_touch_sctrl_middle_ParamLimits

0x61e0,	// (0x000110ba) aid_touch_sctrl_middle

0x61f2,	// (0x000110cc) bg_sctrl_middle_pane_ParamLimits

0x61f2,	// (0x000110cc) bg_sctrl_middle_pane

0x5f59,	// (0x00010e33) cell_sctrl_middle_pane_g1_ParamLimits

0x5f59,	// (0x00010e33) cell_sctrl_middle_pane_g1

0x6200,	// (0x000110da) cell_sctrl_middle_pane_g2_ParamLimits

0x6200,	// (0x000110da) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001abe5) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001abe5) cell_sctrl_middle_pane_g

0x935b,	// (0x00014235) bg_sctrl_middle_pane_g1

0x9363,	// (0x0001423d) bg_sctrl_middle_pane_g2

0x936b,	// (0x00014245) bg_sctrl_middle_pane_g3

0x9373,	// (0x0001424d) bg_sctrl_middle_pane_g4

0x937b,	// (0x00014255) bg_sctrl_middle_pane_g5

0x9383,	// (0x0001425d) bg_sctrl_middle_pane_g6

0x938b,	// (0x00014265) bg_sctrl_middle_pane_g7

0x9393,	// (0x0001426d) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001abea) bg_sctrl_middle_pane_g

0x939b,	// (0x00014275) bg_sctrl_middle_pane_g8_copy1

0x935b,	// (0x00014235) bg_sctrl_sk_pane_g1

0x936b,	// (0x00014245) bg_sctrl_sk_pane_g2

0x9363,	// (0x0001423d) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a73b) bg_sctrl_sk_pane_g

0x75ee,	// (0x000124c8) aid_size_touch_scroll_bar

0x937b,	// (0x00014255) bg_sctrl_sk_pane_g4

0x9373,	// (0x0001424d) bg_sctrl_sk_pane_g5

0x9383,	// (0x0001425d) bg_sctrl_sk_pane_g6

0x938b,	// (0x00014265) bg_sctrl_sk_pane_g7

0x939b,	// (0x00014275) bg_sctrl_sk_pane_g8

0x9393,	// (0x0001426d) bg_sctrl_sk_pane_g9

0x52eb,	// (0x000101c5) popup_fep_china_hwr2_fs_candidate_window

0x52f5,	// (0x000101cf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x52f5,	// (0x000101cf) popup_fep_china_hwr2_fs_control_window

0x5f59,	// (0x00010e33) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001abe0) sctrl_sk_top_pane_g

0xd943,	// (0x0001881d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x0001881d) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x0001882f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x0001882f) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x00018846) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x00018846) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x00018858) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x00018858) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x00018868) popup_fep_china_hwr2_fs_control_funtion_grid

0xd996,	// (0x00018870) aid_fep_china_hwr2_fs_candi_cell

0x6d1c,	// (0x00011bf6) bg_popup_fep_shadow_pane_cp6

0xd9a0,	// (0x0001887a) popup_fep_china_hwr2_fs_candidate_grid

0xd9aa,	// (0x00018884) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9aa,	// (0x00018884) cell_fep_china_hwr2_fs_funtion_grid

0xbedd,	// (0x00016db7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9c2,	// (0x0001889c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9c2,	// (0x0001889c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9d0,	// (0x000188aa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9d0,	// (0x000188aa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001abfb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001abfb) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9e6,	// (0x000188c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9e6,	// (0x000188c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9fb,	// (0x000188d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9fb,	// (0x000188d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001ac00) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001ac00) cell_fep_china_hwr2_fs_funtion_grid_t

0xda17,	// (0x000188f1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda1f,	// (0x000188f9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda27,	// (0x00018901) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001ac05) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda2f,	// (0x00018909) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda2f,	// (0x00018909) cell_fep_china_hwr2_fs_candidate_grid

0xda48,	// (0x00018922) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda50,	// (0x0001892a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbedd,	// (0x00016db7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbedd,	// (0x00016db7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001aa19) cell_fep_china_hwr2_fs_candidate_grid_g

0xda58,	// (0x00018932) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f23,	// (0x00013dfd) clock_nsta_pane_cp_24_ParamLimits

0x8f23,	// (0x00013dfd) clock_nsta_pane_cp_24

0x8fa1,	// (0x00013e7b) indicator_nsta_pane_cp_24_ParamLimits

0x8fa1,	// (0x00013e7b) indicator_nsta_pane_cp_24

0xa159,	// (0x00015033) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a7a0) heading_pane_g

0xac82,	// (0x00015b5c) grid_sct_catagory_button_pane

0xacb2,	// (0x00015b8c) scroll_pane_cp5_ParamLimits

0xba8b,	// (0x00016965) button_value_adjust_pane_cp5_ParamLimits

0xba8b,	// (0x00016965) button_value_adjust_pane_cp5

0xbb87,	// (0x00016a61) form2_midp_time_pane_ParamLimits

0xda66,	// (0x00018940) cell_sct_catagory_button_pane_ParamLimits

0xda66,	// (0x00018940) cell_sct_catagory_button_pane

0xbea2,	// (0x00016d7c) bg_button_pane_cp01_ParamLimits

0xbea2,	// (0x00016d7c) bg_button_pane_cp01

0xbedd,	// (0x00016db7) cell_sct_catagory_button_pane_g1

0x56c1,	// (0x0001059b) popup_tb_extension_window

0xda78,	// (0x00018952) aid_size_cell_ext_ParamLimits

0xda78,	// (0x00018952) aid_size_cell_ext

0x70b3,	// (0x00011f8d) bg_tb_trans_pane_cp1_ParamLimits

0x70b3,	// (0x00011f8d) bg_tb_trans_pane_cp1

0xda98,	// (0x00018972) grid_tb_ext_pane_ParamLimits

0xda98,	// (0x00018972) grid_tb_ext_pane

0xdac6,	// (0x000189a0) cell_tb_ext_pane_ParamLimits

0xdac6,	// (0x000189a0) cell_tb_ext_pane

0xdadd,	// (0x000189b7) cell_tb_ext_pane_g1_ParamLimits

0xdadd,	// (0x000189b7) cell_tb_ext_pane_g1

0xdafa,	// (0x000189d4) cell_tb_ext_pane_t1

0x70b3,	// (0x00011f8d) list_highlight_pane_cp11_ParamLimits

0x70b3,	// (0x00011f8d) list_highlight_pane_cp11

0x4ada,	// (0x0000f9b4) popup_uni_indicator_window_ParamLimits

0x4ada,	// (0x0000f9b4) popup_uni_indicator_window

0x7c3a,	// (0x00012b14) bg_popup_sub_pane_cp14

0xdb15,	// (0x000189ef) list_uniindi_pane

0xdb21,	// (0x000189fb) uniindi_top_pane

0x70b3,	// (0x00011f8d) bg_uniindi_top_pane

0xdb40,	// (0x00018a1a) uniindi_top_pane_g1

0xdb56,	// (0x00018a30) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ac0c) uniindi_top_pane_g

0xdb80,	// (0x00018a5a) uniindi_top_pane_t1

0xdbaa,	// (0x00018a84) list_single_uniindi_pane_ParamLimits

0xdbaa,	// (0x00018a84) list_single_uniindi_pane

0xbedd,	// (0x00016db7) bg_uniindi_top_pane_g1

0xdbbd,	// (0x00018a97) list_single_uniindi_pane_g1

0xdbd0,	// (0x00018aaa) list_single_uniindi_pane_t1

0x4950,	// (0x0000f82a) control_bg_pane

0xdbf5,	// (0x00018acf) bg_sctrl_sk_pane_cp1

0xdbfe,	// (0x00018ad8) bg_sctrl_sk_pane_cp2

0xdc07,	// (0x00018ae1) control_bg_pane_g1

0xdc10,	// (0x00018aea) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001ac15) control_bg_pane_g

0xb8e5,	// (0x000167bf) cell_indicator_nsta_pane_g1_ParamLimits

0xb8f3,	// (0x000167cd) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a97d) cell_indicator_nsta_pane_g_ParamLimits

0xbc0f,	// (0x00016ae9) form2_midp_time_pane_t1_ParamLimits

0x5253,	// (0x0001012d) main_idle_act4_pane_ParamLimits

0x5253,	// (0x0001012d) main_idle_act4_pane

0x56c1,	// (0x0001059b) popup_tb_extension_window_ParamLimits

0xdab6,	// (0x00018990) tb_ext_find_pane_ParamLimits

0xdab6,	// (0x00018990) tb_ext_find_pane

0xdc19,	// (0x00018af3) ai_gene_pane_1_cp1

0x8c1c,	// (0x00013af6) ai_gene_pane_2_cp1

0xdc21,	// (0x00018afb) list_single_idle_plugin_calendar_pane

0xdc2a,	// (0x00018b04) list_single_idle_plugin_notification_pane

0xdc33,	// (0x00018b0d) list_single_idle_plugin_player_pane

0xdc3c,	// (0x00018b16) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc3c,	// (0x00018b16) list_single_idle_plugin_shortcut_pane

0xdc5e,	// (0x00018b38) main_idle_act4_pane_t1

0xdc70,	// (0x00018b4a) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001ac1a) main_idle_act4_pane_t

0xdc82,	// (0x00018b5c) middle_sk_idle_act4_pane_ParamLimits

0xdc82,	// (0x00018b5c) middle_sk_idle_act4_pane

0xdc98,	// (0x00018b72) popup_clock_digital_analogue_window_cp2

0xdcb2,	// (0x00018b8c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb2,	// (0x00018b8c) shortcut_wheel_idle_act4_pane

0xbedd,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g1

0xbedd,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g2

0xbedd,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g3

0xbedd,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g4

0xbedd,	// (0x00016db7) shortcut_wheel_idle_act4_pane_g5

0xdcc6,	// (0x00018ba0) shortcut_wheel_idle_act4_pane_g6

0xdcce,	// (0x00018ba8) shortcut_wheel_idle_act4_pane_g7

0xdcd6,	// (0x00018bb0) shortcut_wheel_idle_act4_pane_g8

0xdcde,	// (0x00018bb8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001ac1f) shortcut_wheel_idle_act4_pane_g

0xc15b,	// (0x00017035) middle_sk_idle_act4_pane_g1_ParamLimits

0xc15b,	// (0x00017035) middle_sk_idle_act4_pane_g1

0xdd42,	// (0x00018c1c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd42,	// (0x00018c1c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001ac42) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001ac42) middle_sk_idle_act4_pane_g

0xdd4e,	// (0x00018c28) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4e,	// (0x00018c28) middle_sk_idle_act4_pane_t1

0xdd6b,	// (0x00018c45) grid_ai_shortcut_pane_ParamLimits

0xdd6b,	// (0x00018c45) grid_ai_shortcut_pane

0xdd84,	// (0x00018c5e) list_highlight_pane_cp16_ParamLimits

0xdd84,	// (0x00018c5e) list_highlight_pane_cp16

0xdd91,	// (0x00018c6b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd91,	// (0x00018c6b) list_single_idle_plugin_shortcut_pane_g1

0xdd9d,	// (0x00018c77) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd9d,	// (0x00018c77) list_single_idle_plugin_shortcut_pane_g2

0xddb5,	// (0x00018c8f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddb5,	// (0x00018c8f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001ac47) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001ac47) list_single_idle_plugin_shortcut_pane_g

0xddc8,	// (0x00018ca2) cell_ai_shortcut_pane_ParamLimits

0xddc8,	// (0x00018ca2) cell_ai_shortcut_pane

0xddec,	// (0x00018cc6) cell_ai_shortcut_pane_g1_ParamLimits

0xddec,	// (0x00018cc6) cell_ai_shortcut_pane_g1

0xdc19,	// (0x00018af3) ai_gene_pane_1_cp2

0xde0e,	// (0x00018ce8) ai_gene_pane_2_cp2

0xde16,	// (0x00018cf0) list_highlight_pane_cp15

0xde1f,	// (0x00018cf9) list_single_idle_plugin_calendar_pane_g1

0xde16,	// (0x00018cf0) list_highlight_pane_cp17

0xde27,	// (0x00018d01) list_single_idle_plugin_calendar_pane_g1_copy1

0xde2f,	// (0x00018d09) list_single_idle_plugin_player_pane_g1

0xaedb,	// (0x00015db5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001ac4e) list_single_idle_plugin_player_pane_g

0xde37,	// (0x00018d11) list_single_idle_plugin_player_pane_t1

0xde45,	// (0x00018d1f) list_single_idle_plugin_player_pane_t2

0xde53,	// (0x00018d2d) list_single_idle_plugin_player_pane_t3

0xde61,	// (0x00018d3b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001ac53) list_single_idle_plugin_player_pane_t

0xde6f,	// (0x00018d49) wait_bar_pane_cp15

0xde77,	// (0x00018d51) grid_ai_notification_pane

0xaedb,	// (0x00015db5) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x00018d5a) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x00018d5a) cell_ai_notification_pane

0xde8d,	// (0x00018d67) cell_ai_notification_pane_g1

0xde95,	// (0x00018d6f) cell_ai_notification_pane_t1

0xdea3,	// (0x00018d7d) tb_ext_find_button_pane

0xdeab,	// (0x00018d85) tb_ext_find_pane_g1

0xdeb3,	// (0x00018d8d) tb_ext_find_pane_t1

0x8433,	// (0x0001330d) tb_ext_find_button_pane_g1

0xdec1,	// (0x00018d9b) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001ac5c) tb_ext_find_button_pane_g

0xdc5e,	// (0x00018b38) main_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x00018b4a) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001ac1a) main_idle_act4_pane_t_ParamLimits

0xdc98,	// (0x00018b72) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca6,	// (0x00018b80) sat_plugin_idle_act4_pane_ParamLimits

0xdca6,	// (0x00018b80) sat_plugin_idle_act4_pane

0xdeca,	// (0x00018da4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeca,	// (0x00018da4) sat_plugin_idle_act4_pane_t1

0xdedd,	// (0x00018db7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdedd,	// (0x00018db7) sat_plugin_idle_act4_pane_t2

0xdef0,	// (0x00018dca) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdef0,	// (0x00018dca) sat_plugin_idle_act4_pane_t3

0xdf03,	// (0x00018ddd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf03,	// (0x00018ddd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001ac61) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001ac61) sat_plugin_idle_act4_pane_t

0x4a15,	// (0x0000f8ef) popup_battery_window_ParamLimits

0x4a15,	// (0x0000f8ef) popup_battery_window

0x70b3,	// (0x00011f8d) bg_popup_sub_pane_cp25_ParamLimits

0x70b3,	// (0x00011f8d) bg_popup_sub_pane_cp25

0xdf16,	// (0x00018df0) popup_battery_window_g1_ParamLimits

0xdf16,	// (0x00018df0) popup_battery_window_g1

0xdf22,	// (0x00018dfc) popup_battery_window_t1_ParamLimits

0xdf22,	// (0x00018dfc) popup_battery_window_t1

0xdf34,	// (0x00018e0e) popup_battery_window_t2_ParamLimits

0xdf34,	// (0x00018e0e) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001ac6a) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001ac6a) popup_battery_window_t

0x8ae9,	// (0x000139c3) midp_canvas_pane_ParamLimits

0x8b60,	// (0x00013a3a) midp_keypad_pane_ParamLimits

0x8b60,	// (0x00013a3a) midp_keypad_pane

0x8e01,	// (0x00013cdb) main_midp_pane_ParamLimits

0xb94f,	// (0x00016829) signal_pane_g2_cp_ParamLimits

0xdf51,	// (0x00018e2b) aid_size_cell_midp_keypad_ParamLimits

0xdf51,	// (0x00018e2b) aid_size_cell_midp_keypad

0xdf6b,	// (0x00018e45) midp_keyp_game_grid_pane_ParamLimits

0xdf6b,	// (0x00018e45) midp_keyp_game_grid_pane

0xdf8b,	// (0x00018e65) midp_keyp_rocker_pane_ParamLimits

0xdf8b,	// (0x00018e65) midp_keyp_rocker_pane

0xdfc4,	// (0x00018e9e) midp_keyp_sk_left_pane_ParamLimits

0xdfc4,	// (0x00018e9e) midp_keyp_sk_left_pane

0xe01e,	// (0x00018ef8) midp_keyp_sk_right_pane_ParamLimits

0xe01e,	// (0x00018ef8) midp_keyp_sk_right_pane

0x6d1c,	// (0x00011bf6) bg_button_pane_cp03

0xe078,	// (0x00018f52) midp_keyp_sk_left_pane_g1

0x6d1c,	// (0x00011bf6) bg_button_pane_cp04

0xe078,	// (0x00018f52) midp_keyp_sk_right_pane_g1

0xbedd,	// (0x00016db7) midp_keyp_rocker_pane_g1

0xe081,	// (0x00018f5b) keyp_game_cell_pane_ParamLimits

0xe081,	// (0x00018f5b) keyp_game_cell_pane

0x6d1c,	// (0x00011bf6) bg_button_pane_cp02

0xe094,	// (0x00018f6e) keyp_game_cell_pane_g1

0x4a59,	// (0x0000f933) popup_fep_vkb2_window_ParamLimits

0x4a59,	// (0x0000f933) popup_fep_vkb2_window

0x621e,	// (0x000110f8) aid_size_cell_vkb2_ParamLimits

0x621e,	// (0x000110f8) aid_size_cell_vkb2

0x6272,	// (0x0001114c) popup_fep_vkb2_window_g1_ParamLimits

0x6272,	// (0x0001114c) popup_fep_vkb2_window_g1

0x62ba,	// (0x00011194) vkb2_area_bottom_pane_ParamLimits

0x62ba,	// (0x00011194) vkb2_area_bottom_pane

0x6306,	// (0x000111e0) vkb2_area_keypad_pane_ParamLimits

0x6306,	// (0x000111e0) vkb2_area_keypad_pane

0x6348,	// (0x00011222) vkb2_area_top_pane_ParamLimits

0x6348,	// (0x00011222) vkb2_area_top_pane

0x63c2,	// (0x0001129c) vkb2_top_entry_pane_ParamLimits

0x63c2,	// (0x0001129c) vkb2_top_entry_pane

0x63ec,	// (0x000112c6) vkb2_top_grid_left_pane_ParamLimits

0x63ec,	// (0x000112c6) vkb2_top_grid_left_pane

0x640a,	// (0x000112e4) vkb2_top_grid_right_pane_ParamLimits

0x640a,	// (0x000112e4) vkb2_top_grid_right_pane

0x6428,	// (0x00011302) vkb2_cell_keypad_pane_ParamLimits

0x6428,	// (0x00011302) vkb2_cell_keypad_pane

0x64f9,	// (0x000113d3) vkb2_area_bottom_grid_pane_ParamLimits

0x64f9,	// (0x000113d3) vkb2_area_bottom_grid_pane

0x651f,	// (0x000113f9) vkb2_area_bottom_pane_g1_ParamLimits

0x651f,	// (0x000113f9) vkb2_area_bottom_pane_g1

0x6543,	// (0x0001141d) vkb2_area_bottom_pane_g2_ParamLimits

0x6543,	// (0x0001141d) vkb2_area_bottom_pane_g2

0x6571,	// (0x0001144b) vkb2_area_bottom_pane_g3_ParamLimits

0x6571,	// (0x0001144b) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001ac6f) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001ac6f) vkb2_area_bottom_pane_g

0x65d2,	// (0x000114ac) vkb2_top_cell_left_pane_ParamLimits

0x65d2,	// (0x000114ac) vkb2_top_cell_left_pane

0xe0a5,	// (0x00018f7f) vkb2_top_entry_pane_g1_ParamLimits

0xe0a5,	// (0x00018f7f) vkb2_top_entry_pane_g1

0xe0b3,	// (0x00018f8d) vkb2_top_entry_pane_t1_ParamLimits

0xe0b3,	// (0x00018f8d) vkb2_top_entry_pane_t1

0xe0e5,	// (0x00018fbf) vkb2_top_entry_pane_t2_ParamLimits

0xe0e5,	// (0x00018fbf) vkb2_top_entry_pane_t2

0xe117,	// (0x00018ff1) vkb2_top_entry_pane_t3_ParamLimits

0xe117,	// (0x00018ff1) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001ac76) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001ac76) vkb2_top_entry_pane_t

0x661f,	// (0x000114f9) vkb2_top_grid_right_pane_g1_ParamLimits

0x661f,	// (0x000114f9) vkb2_top_grid_right_pane_g1

0x6635,	// (0x0001150f) vkb2_top_grid_right_pane_g2_ParamLimits

0x6635,	// (0x0001150f) vkb2_top_grid_right_pane_g2

0x664d,	// (0x00011527) vkb2_top_grid_right_pane_g3_ParamLimits

0x664d,	// (0x00011527) vkb2_top_grid_right_pane_g3

0x6665,	// (0x0001153f) vkb2_top_grid_right_pane_g4_ParamLimits

0x6665,	// (0x0001153f) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001ac7d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001ac7d) vkb2_top_grid_right_pane_g

0x667b,	// (0x00011555) vkb2_top_cell_left_pane_g1

0x6692,	// (0x0001156c) vkb2_cell_keypad_pane_g1_ParamLimits

0x6692,	// (0x0001156c) vkb2_cell_keypad_pane_g1

0xe13b,	// (0x00019015) vkb2_cell_keypad_pane_t1_ParamLimits

0xe13b,	// (0x00019015) vkb2_cell_keypad_pane_t1

0x66a0,	// (0x0001157a) vkb2_cell_bottom_grid_pane_ParamLimits

0x66a0,	// (0x0001157a) vkb2_cell_bottom_grid_pane

0x66d9,	// (0x000115b3) vkb2_cell_bottom_grid_pane_g1

0xdce6,	// (0x00018bc0) aid_call2_pane_cp02

0xdcee,	// (0x00018bc8) aid_call_pane_cp02

0xdcf6,	// (0x00018bd0) clock_digital_number_pane_cp10

0xdcfe,	// (0x00018bd8) clock_digital_number_pane_cp11

0xdd06,	// (0x00018be0) clock_digital_number_pane_cp12

0xdd0e,	// (0x00018be8) clock_digital_number_pane_cp13

0xdd16,	// (0x00018bf0) clock_digital_separator_pane_cp10

0x8433,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g1

0x8433,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g2

0xdd1e,	// (0x00018bf8) popup_clock_digital_analogue_window_cp2_g3

0x8433,	// (0x0001330d) popup_clock_digital_analogue_window_cp2_g4

0xdd1e,	// (0x00018bf8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001ac32) popup_clock_digital_analogue_window_cp2_g

0xdd26,	// (0x00018c00) popup_clock_digital_analogue_window_cp2_t1

0xdd34,	// (0x00018c0e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001ac3d) popup_clock_digital_analogue_window_cp2_t

0xbedd,	// (0x00016db7) clock_digital_number_pane_cp10_g1

0xbedd,	// (0x00016db7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001aa19) clock_digital_number_pane_cp10_g

0xbedd,	// (0x00016db7) clock_digital_separator_pane_cp10_g1

0xbedd,	// (0x00016db7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001aa19) clock_digital_separator_pane_cp10_g

0xdb62,	// (0x00018a3c) uniindi_top_pane_g3

0xdb73,	// (0x00018a4d) uniindi_top_pane_g4

0x64b3,	// (0x0001138d) vkb2_row_keypad_pane_ParamLimits

0x64b3,	// (0x0001138d) vkb2_row_keypad_pane

0x66f5,	// (0x000115cf) vkb2_cell_t_keypad_pane_ParamLimits

0x66f5,	// (0x000115cf) vkb2_cell_t_keypad_pane

0x6705,	// (0x000115df) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6705,	// (0x000115df) vkb2_cell_t_keypad_pane_cp08

0x6718,	// (0x000115f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6718,	// (0x000115f2) vkb2_cell_t_keypad_pane_cp09

0x672c,	// (0x00011606) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x672c,	// (0x00011606) vkb2_cell_t_keypad_pane_cp01

0x673d,	// (0x00011617) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x673d,	// (0x00011617) vkb2_cell_t_keypad_pane_cp02

0x674e,	// (0x00011628) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x674e,	// (0x00011628) vkb2_cell_t_keypad_pane_cp03

0x675f,	// (0x00011639) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x675f,	// (0x00011639) vkb2_cell_t_keypad_pane_cp04

0x6770,	// (0x0001164a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6770,	// (0x0001164a) vkb2_cell_t_keypad_pane_cp05

0x6781,	// (0x0001165b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6781,	// (0x0001165b) vkb2_cell_t_keypad_pane_cp06

0x6792,	// (0x0001166c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6792,	// (0x0001166c) vkb2_cell_t_keypad_pane_cp07

0x67a3,	// (0x0001167d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x67a3,	// (0x0001167d) vkb2_cell_t_keypad_pane_cp10

0x5f59,	// (0x00010e33) vkb2_cell_t_keypad_pane_g1

0xe152,	// (0x0001902c) vkb2_cell_t_keypad_pane_t1

0x4950,	// (0x0000f82a) popup_grid_graphic2_window

0xe164,	// (0x0001903e) aid_size_cell_graphic2_ParamLimits

0xe164,	// (0x0001903e) aid_size_cell_graphic2

0xe19c,	// (0x00019076) bg_popup_window_pane_cp21_ParamLimits

0xe19c,	// (0x00019076) bg_popup_window_pane_cp21

0xe1aa,	// (0x00019084) graphic2_pages_pane_ParamLimits

0xe1aa,	// (0x00019084) graphic2_pages_pane

0xe1f0,	// (0x000190ca) grid_graphic2_control_pane_ParamLimits

0xe1f0,	// (0x000190ca) grid_graphic2_control_pane

0xe22e,	// (0x00019108) grid_graphic2_pane_ParamLimits

0xe22e,	// (0x00019108) grid_graphic2_pane

0xe2a2,	// (0x0001917c) cell_graphic2_pane

0x4950,	// (0x0000f82a) main_comp_mode_pane

0xd36d,	// (0x00018247) list_ai3_gene_pane_ParamLimits

0xd7a4,	// (0x0001867e) bg_popup_window_pane_cp19_ParamLimits

0xd7b0,	// (0x0001868a) bg_touch_area_indi_pane_ParamLimits

0xd7b0,	// (0x0001868a) bg_touch_area_indi_pane

0xd7c6,	// (0x000186a0) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7c6,	// (0x000186a0) bg_touch_area_indi_pane_cp01

0xd7dc,	// (0x000186b6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7dc,	// (0x000186b6) bg_touch_area_indi_pane_cp02

0xd7f2,	// (0x000186cc) bg_touch_area_indi_pane_cp03_ParamLimits

0xd7f2,	// (0x000186cc) bg_touch_area_indi_pane_cp03

0xd80c,	// (0x000186e6) popup_slider_window_g1_ParamLimits

0xd828,	// (0x00018702) popup_slider_window_g2_ParamLimits

0xd844,	// (0x0001871e) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001abc7) popup_slider_window_g_ParamLimits

0xd8aa,	// (0x00018784) popup_slider_window_t1_ParamLimits

0xd91e,	// (0x000187f8) small_volume_slider_vertical_pane_ParamLimits

0xe2a2,	// (0x0001917c) cell_graphic2_pane_ParamLimits

0xe2f1,	// (0x000191cb) bg_button_pane_cp10_ParamLimits

0xe2f1,	// (0x000191cb) bg_button_pane_cp10

0xe304,	// (0x000191de) bg_button_pane_cp11_ParamLimits

0xe304,	// (0x000191de) bg_button_pane_cp11

0xe317,	// (0x000191f1) graphic2_pages_pane_g1_ParamLimits

0xe317,	// (0x000191f1) graphic2_pages_pane_g1

0xe332,	// (0x0001920c) graphic2_pages_pane_g2_ParamLimits

0xe332,	// (0x0001920c) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001ac8b) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001ac8b) graphic2_pages_pane_g

0xe34a,	// (0x00019224) graphic2_pages_pane_t1_ParamLimits

0xe34a,	// (0x00019224) graphic2_pages_pane_t1

0xe362,	// (0x0001923c) cell_graphic2_control_pane_ParamLimits

0xe362,	// (0x0001923c) cell_graphic2_control_pane

0xe380,	// (0x0001925a) cell_graphic2_pane_g1_ParamLimits

0xe380,	// (0x0001925a) cell_graphic2_pane_g1

0xe38d,	// (0x00019267) cell_graphic2_pane_g2_ParamLimits

0xe38d,	// (0x00019267) cell_graphic2_pane_g2

0xe39a,	// (0x00019274) cell_graphic2_pane_g3_ParamLimits

0xe39a,	// (0x00019274) cell_graphic2_pane_g3

0xe3a7,	// (0x00019281) cell_graphic2_pane_g4_ParamLimits

0xe3a7,	// (0x00019281) cell_graphic2_pane_g4

0xe3b4,	// (0x0001928e) cell_graphic2_pane_g5_ParamLimits

0xe3b4,	// (0x0001928e) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001ac90) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001ac90) cell_graphic2_pane_g

0xe3cf,	// (0x000192a9) cell_graphic2_pane_t1_ParamLimits

0xe3cf,	// (0x000192a9) cell_graphic2_pane_t1

0x947d,	// (0x00014357) grid_highlight_pane_cp11_ParamLimits

0x947d,	// (0x00014357) grid_highlight_pane_cp11

0x70b3,	// (0x00011f8d) bg_button_pane_cp05

0xe406,	// (0x000192e0) cell_graphic2_control_pane_g1

0xbedd,	// (0x00016db7) bg_touch_area_indi_pane_g1

0xe42e,	// (0x00019308) aid_cmod_rocker_key_size

0xe438,	// (0x00019312) aid_cmode_itu_key_size

0xe463,	// (0x0001933d) main_cmode_video_pane

0xe46d,	// (0x00019347) main_comp_mode_itu_pane

0xe479,	// (0x00019353) main_comp_mode_rocker_pane

0xe485,	// (0x0001935f) cell_cmode_rocker_pane_ParamLimits

0xe485,	// (0x0001935f) cell_cmode_rocker_pane

0xe497,	// (0x00019371) cell_cmode_itu_pane_ParamLimits

0xe497,	// (0x00019371) cell_cmode_itu_pane

0x7c3a,	// (0x00012b14) bg_button_pane_cp06_ParamLimits

0x7c3a,	// (0x00012b14) bg_button_pane_cp06

0xc15b,	// (0x00017035) cell_cmode_rocker_pane_g1_ParamLimits

0xc15b,	// (0x00017035) cell_cmode_rocker_pane_g1

0xd9c2,	// (0x0001889c) cell_cmode_rocker_pane_g2_ParamLimits

0xd9c2,	// (0x0001889c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001aca0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001aca0) cell_cmode_rocker_pane_g

0x6d1c,	// (0x00011bf6) bg_button_pane_cp07

0xe4ac,	// (0x00019386) cell_cmode_itu_pane_g1

0xe4b5,	// (0x0001938f) cell_cmode_itu_pane_t1

0xe4c3,	// (0x0001939d) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001aca5) cell_cmode_itu_pane_t

0xdbe5,	// (0x00018abf) aid_touch_ctrl_left

0xdbed,	// (0x00018ac7) aid_touch_ctrl_right

0x6d1c,	// (0x00011bf6) compa_mode_pane

0xe4d1,	// (0x000193ab) aid_cmod_rocker_key_size_cp

0xe4db,	// (0x000193b5) aid_cmode_itu_key_size_cp

0xe4e5,	// (0x000193bf) compa_mode_pane_g1

0xe4ed,	// (0x000193c7) compa_mode_pane_g2

0xe4f5,	// (0x000193cf) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001acaa) compa_mode_pane_g

0xe4fd,	// (0x000193d7) main_comp_mode_itu_pane_cp

0xe505,	// (0x000193df) main_comp_mode_rocker_pane_cp

0xe50d,	// (0x000193e7) cell_cmode_itu_pane_cp_ParamLimits

0xe50d,	// (0x000193e7) cell_cmode_itu_pane_cp

0xe522,	// (0x000193fc) cell_cmode_rocker_pane_cp_ParamLimits

0xe522,	// (0x000193fc) cell_cmode_rocker_pane_cp

0x7c3a,	// (0x00012b14) bg_button_pane_cp06_cp_ParamLimits

0x7c3a,	// (0x00012b14) bg_button_pane_cp06_cp

0xc15b,	// (0x00017035) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc15b,	// (0x00017035) cell_cmode_rocker_pane_g1_cp

0xbedd,	// (0x00016db7) cell_cmode_rocker_pane_g2_cp

0x6d1c,	// (0x00011bf6) bg_button_pane_cp07_cp

0xa9b5,	// (0x0001588f) cell_cmode_itu_pane_g1_cp

0xe534,	// (0x0001940e) cell_cmode_itu_pane_t1_cp

0xe534,	// (0x0001940e) cell_cmode_itu_pane_t2_cp

0xa9a2,	// (0x0001587c) settings_code_pane_cp2

0x6e10,	// (0x00011cea) bg_popup_window_pane_cp3_ParamLimits

0x72b3,	// (0x0001218d) heading_pane_cp3_ParamLimits

0x72bf,	// (0x00012199) listscroll_popup_graphic_pane_ParamLimits

0x5d02,	// (0x00010bdc) fep_hwr_aid_pane_ParamLimits

0x6179,	// (0x00011053) aid_touch_sctrl_top_ParamLimits

0x6194,	// (0x0001106e) sctrl_sk_top_pane_g1_ParamLimits

0x5f59,	// (0x00010e33) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001abe0) sctrl_sk_top_pane_g_ParamLimits

0x61a1,	// (0x0001107b) sctrl_sk_top_pane_t1_ParamLimits

0x6179,	// (0x00011053) aid_touch_sctrl_bottom_ParamLimits

0x61a1,	// (0x0001107b) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb2e,	// (0x00018a08) aid_area_touch_clock

0x638a,	// (0x00011264) aid_vkb2_area_top_pane_cell_ParamLimits

0x638a,	// (0x00011264) aid_vkb2_area_top_pane_cell

0x64d5,	// (0x000113af) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x64d5,	// (0x000113af) aid_vkb2_area_bottom_pane_cell

0xe09d,	// (0x00018f77) popup_char_count_window

0xe542,	// (0x0001941c) popup_char_count_window_g1

0xe54b,	// (0x00019425) popup_char_count_window_g2

0xe554,	// (0x0001942e) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001acb1) popup_char_count_window_g

0xe55d,	// (0x00019437) popup_char_count_window_t1

0x6250,	// (0x0001112a) popup_fep_char_preview_window_ParamLimits

0x6250,	// (0x0001112a) popup_fep_char_preview_window

0x63a8,	// (0x00011282) vkb2_top_candi_pane_ParamLimits

0x63a8,	// (0x00011282) vkb2_top_candi_pane

0xe56b,	// (0x00019445) cell_vkb2_top_candi_pane_ParamLimits

0xe56b,	// (0x00019445) cell_vkb2_top_candi_pane

0x67b8,	// (0x00011692) bg_popup_fep_char_preview_window_ParamLimits

0x67b8,	// (0x00011692) bg_popup_fep_char_preview_window

0x67c6,	// (0x000116a0) popup_fep_char_preview_window_t1_ParamLimits

0x67c6,	// (0x000116a0) popup_fep_char_preview_window_t1

0xe5b8,	// (0x00019492) bg_popup_fep_char_preview_window_g1

0xe5c0,	// (0x0001949a) bg_popup_fep_char_preview_window_g2

0xe5c8,	// (0x000194a2) bg_popup_fep_char_preview_window_g3

0xe5d0,	// (0x000194aa) bg_popup_fep_char_preview_window_g4

0xe5d8,	// (0x000194b2) bg_popup_fep_char_preview_window_g5

0x6800,	// (0x000116da) bg_popup_fep_char_preview_window_g6

0xe5e0,	// (0x000194ba) bg_popup_fep_char_preview_window_g7

0xe5e8,	// (0x000194c2) bg_popup_fep_char_preview_window_g8

0xe5f0,	// (0x000194ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001acb8) bg_popup_fep_char_preview_window_g

0x5f59,	// (0x00010e33) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5f59,	// (0x00010e33) cell_vkb2_top_candi_pane_g1

0x5f67,	// (0x00010e41) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5f67,	// (0x00010e41) cell_vkb2_top_candi_pane_g2

0xe442,	// (0x0001931c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe442,	// (0x0001931c) cell_vkb2_top_candi_pane_g3

0x6808,	// (0x000116e2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6808,	// (0x000116e2) cell_vkb2_top_candi_pane_g4

0xc7cb,	// (0x000176a5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7cb,	// (0x000176a5) cell_vkb2_top_candi_pane_g5

0x6829,	// (0x00011703) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6829,	// (0x00011703) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001accb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001accb) cell_vkb2_top_candi_pane_g

0x6837,	// (0x00011711) cell_vkb2_top_candi_pane_t1

0x5b62,	// (0x00010a3c) aid_size_touch_slider_mark_ParamLimits

0x5b62,	// (0x00010a3c) aid_size_touch_slider_mark

0xe1e0,	// (0x000190ba) grid_graphic2_catg_pane_ParamLimits

0xe1e0,	// (0x000190ba) grid_graphic2_catg_pane

0xe27e,	// (0x00019158) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00019158) popup_grid_graphic2_window_t1

0xe290,	// (0x0001916a) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x0001916a) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001ac86) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001ac86) popup_grid_graphic2_window_t

0x70b3,	// (0x00011f8d) bg_button_pane_cp05_ParamLimits

0xe406,	// (0x000192e0) cell_graphic2_control_pane_g1_ParamLimits

0xe5f8,	// (0x000194d2) cell_graphic2_catg_pane_ParamLimits

0xe5f8,	// (0x000194d2) cell_graphic2_catg_pane

0x6d1c,	// (0x00011bf6) bg_button_pane_cp12

0xe60a,	// (0x000194e4) cell_graphic2_catg_pane_g1

0xdafa,	// (0x000189d4) cell_tb_ext_pane_t1_ParamLimits

0x65f2,	// (0x000114cc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x65f2,	// (0x000114cc) vkb2_top_cell_right_narrow_pane

0x660a,	// (0x000114e4) vkb2_top_cell_right_wide_pane_ParamLimits

0x660a,	// (0x000114e4) vkb2_top_cell_right_wide_pane

0x5cf4,	// (0x00010bce) bg_vkb2_func_pane_ParamLimits

0x5cf4,	// (0x00010bce) bg_vkb2_func_pane

0x667b,	// (0x00011555) vkb2_top_cell_left_pane_g1_ParamLimits

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp03

0x66d9,	// (0x000115b3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9363,	// (0x0001423d) bg_vkb2_func_pane_g1

0x936b,	// (0x00014245) bg_vkb2_func_pane_g2

0x937b,	// (0x00014255) bg_vkb2_func_pane_g3

0x9373,	// (0x0001424d) bg_vkb2_func_pane_g4

0x9383,	// (0x0001425d) bg_vkb2_func_pane_g5

0x938b,	// (0x00014265) bg_vkb2_func_pane_g6

0x9393,	// (0x0001426d) bg_vkb2_func_pane_g7

0x939b,	// (0x00014275) bg_vkb2_func_pane_g8

0x935b,	// (0x00014235) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001acd8) bg_vkb2_func_pane_g

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp01

0x667b,	// (0x00011555) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x667b,	// (0x00011555) vkb2_top_cell_right_wide_pane_g1

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5cf4,	// (0x00010bce) bg_vkb2_fuc_pane_cp02

0x66d9,	// (0x000115b3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x66d9,	// (0x000115b3) vkb2_top_cell_right_narrow_pane_g1

0xd71e,	// (0x000185f8) aid_touch_area_decrease_ParamLimits

0xd71e,	// (0x000185f8) aid_touch_area_decrease

0xd742,	// (0x0001861c) aid_touch_area_increase_ParamLimits

0xd742,	// (0x0001861c) aid_touch_area_increase

0xd75a,	// (0x00018634) aid_touch_area_mute_ParamLimits

0xd75a,	// (0x00018634) aid_touch_area_mute

0xd776,	// (0x00018650) aid_touch_area_slider_ParamLimits

0xd776,	// (0x00018650) aid_touch_area_slider

0xd860,	// (0x0001873a) popup_slider_window_g4_ParamLimits

0xd860,	// (0x0001873a) popup_slider_window_g4

0xd878,	// (0x00018752) popup_slider_window_g5_ParamLimits

0xd878,	// (0x00018752) popup_slider_window_g5

0xd89a,	// (0x00018774) popup_slider_window_g6_ParamLimits

0xd89a,	// (0x00018774) popup_slider_window_g6

0xd8d8,	// (0x000187b2) popup_slider_window_t2_ParamLimits

0xd8d8,	// (0x000187b2) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001abd4) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001abd4) popup_slider_window_t

0xd8f0,	// (0x000187ca) slider_pane_ParamLimits

0xd8f0,	// (0x000187ca) slider_pane

0xe613,	// (0x000194ed) slider_pane_g1_ParamLimits

0xe613,	// (0x000194ed) slider_pane_g1

0xe627,	// (0x00019501) slider_pane_g2_ParamLimits

0xe627,	// (0x00019501) slider_pane_g2

0xe63d,	// (0x00019517) slider_pane_g3_ParamLimits

0xe63d,	// (0x00019517) slider_pane_g3

0x0003,

0xfe11,	// (0x0001aceb) slider_pane_g_ParamLimits

0xfe11,	// (0x0001aceb) slider_pane_g

0x571d,	// (0x000105f7) popup_tb_float_extension_window_ParamLimits

0x571d,	// (0x000105f7) popup_tb_float_extension_window

0xe669,	// (0x00019543) aid_size_cell_tb_float_ext

0x6d1c,	// (0x00011bf6) bg_popup_sub_window_cp28

0xe675,	// (0x0001954f) grid_tb_float_ext_pane

0xe67f,	// (0x00019559) cell_tb_float_ext_pane_ParamLimits

0xe67f,	// (0x00019559) cell_tb_float_ext_pane

0xe699,	// (0x00019573) cell_tb_float_ext_pane_g1

0xe6a2,	// (0x0001957c) grid_highlight_pane_cp12

0x5e43,	// (0x00010d1d) cell_last_hwr_side_pane_ParamLimits

0x5e43,	// (0x00010d1d) cell_last_hwr_side_pane

0xbedd,	// (0x00016db7) cell_last_hwr_side_pane_g1

0xe6ab,	// (0x00019585) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001acf4) cell_last_hwr_side_pane_g

0x65a1,	// (0x0001147b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x65a1,	// (0x0001147b) vkb2_area_bottom_space_btn_pane

0x5f59,	// (0x00010e33) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe152,	// (0x0001902c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6837,	// (0x00011711) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6856,	// (0x00011730) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6856,	// (0x00011730) vkb2_area_bottom_space_btn_pane_g1

0x6890,	// (0x0001176a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6890,	// (0x0001176a) vkb2_area_bottom_space_btn_pane_g2

0x68c6,	// (0x000117a0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x68c6,	// (0x000117a0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001acf9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001acf9) vkb2_area_bottom_space_btn_pane_g

0x5db7,	// (0x00010c91) cel_fep_hwr_func_pane_ParamLimits

0x5db7,	// (0x00010c91) cel_fep_hwr_func_pane

0x5df3,	// (0x00010ccd) cell_hwr_side_button_pane_ParamLimits

0x5df3,	// (0x00010ccd) cell_hwr_side_button_pane

0xdb2e,	// (0x00018a08) aid_area_touch_clock_ParamLimits

0x70b3,	// (0x00011f8d) bg_uniindi_top_pane_ParamLimits

0xdb40,	// (0x00018a1a) uniindi_top_pane_g1_ParamLimits

0xdb56,	// (0x00018a30) uniindi_top_pane_g2_ParamLimits

0xdb62,	// (0x00018a3c) uniindi_top_pane_g3_ParamLimits

0xdb73,	// (0x00018a4d) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ac0c) uniindi_top_pane_g_ParamLimits

0xdb80,	// (0x00018a5a) uniindi_top_pane_t1_ParamLimits

0x70b3,	// (0x00011f8d) bg_vkb2_func_pane_cp01_ParamLimits

0x70b3,	// (0x00011f8d) bg_vkb2_func_pane_cp01

0xe6b4,	// (0x0001958e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6b4,	// (0x0001958e) cel_fep_hwr_func_pane_g1

0x70b3,	// (0x00011f8d) bg_vkb2_func_pane_cp02_ParamLimits

0x70b3,	// (0x00011f8d) bg_vkb2_func_pane_cp02

0xe6b4,	// (0x0001958e) cell_hwr_side_button_pane_g1_ParamLimits

0xe6b4,	// (0x0001958e) cell_hwr_side_button_pane_g1

0x91ae,	// (0x00014088) status_pane_g4_ParamLimits

0x91ae,	// (0x00014088) status_pane_g4

0x91c8,	// (0x000140a2) status_pane_t1

0xbc22,	// (0x00016afc) form2_midp_gauge_slider_cont_pane

0xbc2a,	// (0x00016b04) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc3c,	// (0x00016b16) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc4e,	// (0x00016b28) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a9cc) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc60,	// (0x00016b3a) form2_midp_slider_pane_ParamLimits

0x6210,	// (0x000110ea) aid_size_cell_func_vkb2_ParamLimits

0x6210,	// (0x000110ea) aid_size_cell_func_vkb2

0xe655,	// (0x0001952f) slider_pane_g4_ParamLimits

0xe655,	// (0x0001952f) slider_pane_g4

0x6910,	// (0x000117ea) form2_midp_gauge_slider_pane_t2_cp01

0x691e,	// (0x000117f8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x691e,	// (0x000117f8) form2_midp_gauge_slider_pane_t3_cp01

0x693b,	// (0x00011815) form2_midp_slider_pane_cp01

0x6d1c,	// (0x00011bf6) navi_smil_pane

0xe6ed,	// (0x000195c7) navi_smil_pane_g1

0xe6f5,	// (0x000195cf) navi_smil_pane_t1

0xe6c2,	// (0x0001959c) form2_midp_slider_pane_g1

0xe6cb,	// (0x000195a5) form2_midp_slider_pane_g2

0xe6d3,	// (0x000195ad) form2_midp_slider_pane_g3

0xe6c2,	// (0x0001959c) form2_midp_slider_pane_g4

0xe6db,	// (0x000195b5) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001ad02) form2_midp_slider_pane_g

0x6900,	// (0x000117da) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6900,	// (0x000117da) vkb2_area_bottom_space_btn_pane_g4

0x8fdd,	// (0x00013eb7) lc0_navi_pane_ParamLimits

0x8fdd,	// (0x00013eb7) lc0_navi_pane

0x9053,	// (0x00013f2d) lc0_stat_indi_pane_ParamLimits

0x9053,	// (0x00013f2d) lc0_stat_indi_pane

0x906a,	// (0x00013f44) ls0_title_pane_ParamLimits

0x906a,	// (0x00013f44) ls0_title_pane

0x7c3a,	// (0x00012b14) bg_popup_sub_pane_cp14_ParamLimits

0xdb15,	// (0x000189ef) list_uniindi_pane_ParamLimits

0xdb21,	// (0x000189fb) uniindi_top_pane_ParamLimits

0xdbbd,	// (0x00018a97) list_single_uniindi_pane_g1_ParamLimits

0xdbd0,	// (0x00018aaa) list_single_uniindi_pane_t1_ParamLimits

0x6944,	// (0x0001181e) lc0_stat_clock_pane_ParamLimits

0x6944,	// (0x0001181e) lc0_stat_clock_pane

0xe703,	// (0x000195dd) lc0_stat_indi_pane_g1_ParamLimits

0xe703,	// (0x000195dd) lc0_stat_indi_pane_g1

0xe710,	// (0x000195ea) lc0_stat_indi_pane_g2_ParamLimits

0xe710,	// (0x000195ea) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001ad0d) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001ad0d) lc0_stat_indi_pane_g

0x6951,	// (0x0001182b) lc0_uni_indicator_pane_ParamLimits

0x6951,	// (0x0001182b) lc0_uni_indicator_pane

0xe71d,	// (0x000195f7) ls0_title_pane_g1_ParamLimits

0xe71d,	// (0x000195f7) ls0_title_pane_g1

0xe731,	// (0x0001960b) ls0_title_pane_t1_ParamLimits

0xe731,	// (0x0001960b) ls0_title_pane_t1

0x695e,	// (0x00011838) lc0_uni_indicator_pane_g1_ParamLimits

0x695e,	// (0x00011838) lc0_uni_indicator_pane_g1

0xe767,	// (0x00019641) lc0_stat_clock_pane_t1

0x4950,	// (0x0000f82a) main_ai5_pane

0xe775,	// (0x0001964f) ai5_sk_pane_ParamLimits

0xe775,	// (0x0001964f) ai5_sk_pane

0xe782,	// (0x0001965c) cell_ai5_widget_pane_ParamLimits

0xe782,	// (0x0001965c) cell_ai5_widget_pane

0xe83d,	// (0x00019717) aid_size_cell_widget_grid

0xe853,	// (0x0001972d) bg_ai5_widget_pane_ParamLimits

0xe853,	// (0x0001972d) bg_ai5_widget_pane

0xe8cb,	// (0x000197a5) cell_ai5_widget_pane_g2

0xe8df,	// (0x000197b9) cell_ai5_widget_pane_g3

0xe8f9,	// (0x000197d3) cell_ai5_widget_pane_g4

0xe909,	// (0x000197e3) cell_ai5_widget_pane_g5

0xe919,	// (0x000197f3) cell_ai5_widget_pane_g6

0xe925,	// (0x000197ff) cell_ai5_widget_pane_g7

0xe96d,	// (0x00019847) cell_ai5_widget_pane_t1_ParamLimits

0xe96d,	// (0x00019847) cell_ai5_widget_pane_t1

0xe98a,	// (0x00019864) cell_ai5_widget_pane_t2_ParamLimits

0xe98a,	// (0x00019864) cell_ai5_widget_pane_t2

0xe9a2,	// (0x0001987c) cell_ai5_widget_pane_t3_ParamLimits

0xe9a2,	// (0x0001987c) cell_ai5_widget_pane_t3

0xe9ba,	// (0x00019894) cell_ai5_widget_pane_t4_ParamLimits

0xe9ba,	// (0x00019894) cell_ai5_widget_pane_t4

0xe9e0,	// (0x000198ba) cell_ai5_widget_pane_t5_ParamLimits

0xe9e0,	// (0x000198ba) cell_ai5_widget_pane_t5

0xea00,	// (0x000198da) cell_ai5_widget_pane_t6_ParamLimits

0xea00,	// (0x000198da) cell_ai5_widget_pane_t6

0xea12,	// (0x000198ec) cell_ai5_widget_pane_t7_ParamLimits

0xea12,	// (0x000198ec) cell_ai5_widget_pane_t7

0xea2b,	// (0x00019905) cell_ai5_widget_pane_t8_ParamLimits

0xea2b,	// (0x00019905) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001ad27) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001ad27) cell_ai5_widget_pane_t

0xea8a,	// (0x00019964) grid_ai5_widget_pane

0x7c3a,	// (0x00012b14) highlight_cell_ai5_widget_pane_ParamLimits

0x7c3a,	// (0x00012b14) highlight_cell_ai5_widget_pane

0xeaa1,	// (0x0001997b) ai5_sk_left_pane

0xeaab,	// (0x00019985) ai5_sk_middle_pane

0xeab5,	// (0x0001998f) ai5_sk_right_pane

0xeabf,	// (0x00019999) bg_ai5_widget_pane_g1_ParamLimits

0xeabf,	// (0x00019999) bg_ai5_widget_pane_g1

0xeacb,	// (0x000199a5) bg_ai5_widget_pane_g2_ParamLimits

0xeacb,	// (0x000199a5) bg_ai5_widget_pane_g2

0xead7,	// (0x000199b1) bg_ai5_widget_pane_g3_ParamLimits

0xead7,	// (0x000199b1) bg_ai5_widget_pane_g3

0xeae3,	// (0x000199bd) bg_ai5_widget_pane_g4_ParamLimits

0xeae3,	// (0x000199bd) bg_ai5_widget_pane_g4

0xeaef,	// (0x000199c9) bg_ai5_widget_pane_g5_ParamLimits

0xeaef,	// (0x000199c9) bg_ai5_widget_pane_g5

0xeafb,	// (0x000199d5) bg_ai5_widget_pane_g6_ParamLimits

0xeafb,	// (0x000199d5) bg_ai5_widget_pane_g6

0xeb07,	// (0x000199e1) bg_ai5_widget_pane_g7_ParamLimits

0xeb07,	// (0x000199e1) bg_ai5_widget_pane_g7

0xeb13,	// (0x000199ed) bg_ai5_widget_pane_g8_ParamLimits

0xeb13,	// (0x000199ed) bg_ai5_widget_pane_g8

0xeb1f,	// (0x000199f9) bg_ai5_widget_pane_g9_ParamLimits

0xeb1f,	// (0x000199f9) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ad3c) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ad3c) bg_ai5_widget_pane_g

0xeb51,	// (0x00019a2b) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb51,	// (0x00019a2b) cell_shortcut_ai5_widget_pane

0x8ad5,	// (0x000139af) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00019a3c) cell_grid_ai5_widget_pane_g1

0x8ad5,	// (0x000139af) highlight_cell_shortcut_ai5_widget_pane

0x9363,	// (0x0001423d) ai5_sk_left_pane_g1

0xeb6b,	// (0x00019a45) ai5_sk_left_pane_g2

0xeb73,	// (0x00019a4d) ai5_sk_left_pane_g3

0xeb7b,	// (0x00019a55) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ad4f) ai5_sk_left_pane_g

0xeb83,	// (0x00019a5d) ai5_sk_left_pane_t1

0x936b,	// (0x00014245) ai5_sk_right_pane_g1

0xeb91,	// (0x00019a6b) ai5_sk_right_pane_g2

0xeb99,	// (0x00019a73) ai5_sk_right_pane_g3

0xeba1,	// (0x00019a7b) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ad58) ai5_sk_right_pane_g

0xeba9,	// (0x00019a83) ai5_sk_right_pane_t1

0x936b,	// (0x00014245) ai5_sk_middle_pane_g1

0x9363,	// (0x0001423d) ai5_sk_middle_pane_g2

0x9383,	// (0x0001425d) ai5_sk_middle_pane_g3

0xeb99,	// (0x00019a73) ai5_sk_middle_pane_g4

0xeb73,	// (0x00019a4d) ai5_sk_middle_pane_g5

0xebb7,	// (0x00019a91) ai5_sk_middle_pane_g6

0xebbf,	// (0x00019a99) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ad61) ai5_sk_middle_pane_g

0x8e69,	// (0x00013d43) aid_touch_area_size_lc0_ParamLimits

0x8e69,	// (0x00013d43) aid_touch_area_size_lc0

0x5f88,	// (0x00010e62) cell_hwr_candidate_pane_t1_ParamLimits

0x8e85,	// (0x00013d5f) aid_touch_navi_pane

0x9158,	// (0x00014032) status_dt_navi_pane_ParamLimits

0x9158,	// (0x00014032) status_dt_navi_pane

0x9165,	// (0x0001403f) status_dt_sta_pane_ParamLimits

0x9165,	// (0x0001403f) status_dt_sta_pane

0xebc7,	// (0x00019aa1) dt_sta_controll_pane

0xebd4,	// (0x00019aae) dt_sta_indi_pane

0xebe5,	// (0x00019abf) dt_sta_title_pane

0x70b3,	// (0x00011f8d) bg_dt_sta_indi_pane_ParamLimits

0x70b3,	// (0x00011f8d) bg_dt_sta_indi_pane

0xebf8,	// (0x00019ad2) dt_sta_battery_pane

0xec00,	// (0x00019ada) dt_sta_indi_pane_g1

0xec09,	// (0x00019ae3) dt_sta_indi_pane_g2

0xec12,	// (0x00019aec) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ad70) dt_sta_indi_pane_g

0xec1b,	// (0x00019af5) dt_sta_signal_pane

0x7c3a,	// (0x00012b14) bg_dt_sta_title_pane_ParamLimits

0x7c3a,	// (0x00012b14) bg_dt_sta_title_pane

0xec24,	// (0x00019afe) dt_sta_title_pane_g1

0xec2c,	// (0x00019b06) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x00019b06) dt_sta_title_pane_t1

0x6d1c,	// (0x00011bf6) bg_dt_sta_control_pane

0xec41,	// (0x00019b1b) dt_sta_controll_pane_g1

0xec4a,	// (0x00019b24) bg_dt_sta_title_pane_g1

0xec53,	// (0x00019b2d) bg_dt_sta_title_pane_g2

0xec5c,	// (0x00019b36) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ad77) bg_dt_sta_title_pane_g

0xbedd,	// (0x00016db7) bg_dt_sta_indi_pane_g1

0xec65,	// (0x00019b3f) dt_sta_signal_pane_g1

0xec6d,	// (0x00019b47) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ad7e) dt_sta_signal_pane_g

0xec75,	// (0x00019b4f) dt_sta_battery_pane_g1

0xec7e,	// (0x00019b58) dt_sta_battery_pane_t1

0xbedd,	// (0x00016db7) bg_dt_sta_control_pane_g1

0x8545,	// (0x0001341f) fep_china_uni_eep_pane

0x854d,	// (0x00013427) fep_china_uni_entry_pane_ParamLimits

0x855d,	// (0x00013437) popup_fep_china_uni_window_g1_ParamLimits

0x856d,	// (0x00013447) popup_fep_china_uni_window_g2_ParamLimits

0x856d,	// (0x00013447) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a5f2) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a5f2) popup_fep_china_uni_window_g

0xec8d,	// (0x00019b67) fep_china_uni_eep_pane_g1

0xec95,	// (0x00019b6f) fep_china_uni_eep_pane_t1

0xe6e4,	// (0x000195be) aid_touch_area_size_smil_player

0x8fd5,	// (0x00013eaf) lc0_clock_pane

0x91bc,	// (0x00014096) status_pane_g5_ParamLimits

0x91bc,	// (0x00014096) status_pane_g5

0x53e2,	// (0x000102bc) popup_keymap_window

0x917a,	// (0x00014054) status_icon_pane

0xe8df,	// (0x000197b9) cell_ai5_widget_pane_g3_ParamLimits

0xe8f9,	// (0x000197d3) cell_ai5_widget_pane_g4_ParamLimits

0xe909,	// (0x000197e3) cell_ai5_widget_pane_g5_ParamLimits

0xe931,	// (0x0001980b) cell_ai5_widget_pane_g8_ParamLimits

0xe931,	// (0x0001980b) cell_ai5_widget_pane_g8

0xe945,	// (0x0001981f) cell_ai5_widget_pane_g9_ParamLimits

0xe945,	// (0x0001981f) cell_ai5_widget_pane_g9

0xe959,	// (0x00019833) cell_ai5_widget_pane_g10_ParamLimits

0xe959,	// (0x00019833) cell_ai5_widget_pane_g10

0xeca4,	// (0x00019b7e) status_icon_pane_g1

0x6d1c,	// (0x00011bf6) bg_popup_sub_pane_cp13

0xecac,	// (0x00019b86) popup_keymap_window_t1

0x8daa,	// (0x00013c84) control_pane_g6_ParamLimits

0x8daa,	// (0x00013c84) control_pane_g6

0x8db7,	// (0x00013c91) control_pane_g7_ParamLimits

0x8db7,	// (0x00013c91) control_pane_g7

0x8dc4,	// (0x00013c9e) control_pane_g8_ParamLimits

0x8dc4,	// (0x00013c9e) control_pane_g8

0xebc7,	// (0x00019aa1) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x00019aae) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x00019abf) dt_sta_title_pane_ParamLimits

0x75f7,	// (0x000124d1) aid_size_touch_scroll_bar_cale

0x4a29,	// (0x0000f903) popup_discreet_window_ParamLimits

0x4a29,	// (0x0000f903) popup_discreet_window

0x4ab1,	// (0x0000f98b) popup_sk_window

0x9acd,	// (0x000149a7) bg_popup_sub_pane_cp28_ParamLimits

0x9acd,	// (0x000149a7) bg_popup_sub_pane_cp28

0xecba,	// (0x00019b94) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x00019b94) popup_discreet_window_g1

0xecda,	// (0x00019bb4) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x00019bb4) popup_discreet_window_t1

0xecf8,	// (0x00019bd2) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x00019bd2) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ad83) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ad83) popup_discreet_window_t

0x6972,	// (0x0001184c) popup_sk_window_g1

0x697c,	// (0x00011856) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ad8a) popup_sk_window_g

0x6984,	// (0x0001185e) popup_sk_window_t1

0x6992,	// (0x0001186c) popup_sk_window_t1_copy1

0xe8cb,	// (0x000197a5) cell_ai5_widget_pane_g2_ParamLimits

0xea3d,	// (0x00019917) cell_ai5_widget_pane_t9_ParamLimits

0xea3d,	// (0x00019917) cell_ai5_widget_pane_t9

0x6d1c,	// (0x00011bf6) main_fep_fshwr2_pane

0x69a0,	// (0x0001187a) aid_fshwr2_btn_pane

0x69ac,	// (0x00011886) aid_fshwr2_syb_pane

0x69be,	// (0x00011898) aid_fshwr2_txt_pane

0x69ca,	// (0x000118a4) fshwr2_func_candi_pane

0x69e6,	// (0x000118c0) fshwr2_hwr_syb_pane

0x6a00,	// (0x000118da) fshwr2_icf_pane

0x4950,	// (0x0000f82a) fshwr2_icf_bg_pane

0x6a2c,	// (0x00011906) fshwr2_icf_pane_t1_ParamLimits

0x6a2c,	// (0x00011906) fshwr2_icf_pane_t1

0x8433,	// (0x0001330d) fshwr2_func_candi_pane_g1

0xed4a,	// (0x00019c24) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x00019c24) fshwr2_func_candi_row_pane

0x6a44,	// (0x0001191e) cell_fshwr2_syb_pane_ParamLimits

0x6a44,	// (0x0001191e) cell_fshwr2_syb_pane

0x6a65,	// (0x0001193f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a65,	// (0x0001193f) fshwr2_hwr_syb_pane_g1

0x4950,	// (0x0000f82a) bg_popup_call_pane_cp01

0x6a73,	// (0x0001194d) fshwr2_func_candi_cell_pane_ParamLimits

0x6a73,	// (0x0001194d) fshwr2_func_candi_cell_pane

0xed6f,	// (0x00019c49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed6f,	// (0x00019c49) fshwr2_func_candi_cell_bg_pane

0x6abe,	// (0x00011998) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6abe,	// (0x00011998) fshwr2_func_candi_cell_pane_g1

0x6ae6,	// (0x000119c0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6ae6,	// (0x000119c0) fshwr2_func_candi_cell_pane_t1

0x4950,	// (0x0000f82a) bg_button_pane_cp08

0xed7b,	// (0x00019c55) cell_fshwr2_syb_bg_pane

0x6af9,	// (0x000119d3) cell_fshwr2_syb_bg_pane_g1

0x6b0d,	// (0x000119e7) cell_fshwr2_syb_bg_pane_t1

0x7c3a,	// (0x00012b14) main_tmo_pane

0xa5e8,	// (0x000154c2) uni_indicator_pane_g1_ParamLimits

0xa5fb,	// (0x000154d5) uni_indicator_pane_g2_ParamLimits

0xa60d,	// (0x000154e7) uni_indicator_pane_g3_ParamLimits

0xa61c,	// (0x000154f6) uni_indicator_pane_g4_ParamLimits

0xa61c,	// (0x000154f6) uni_indicator_pane_g4

0xa630,	// (0x0001550a) uni_indicator_pane_g5_ParamLimits

0xa630,	// (0x0001550a) uni_indicator_pane_g5

0xa630,	// (0x0001550a) uni_indicator_pane_g6_ParamLimits

0xa630,	// (0x0001550a) uni_indicator_pane_g6

0xf91c,	// (0x0001a7f6) uni_indicator_pane_g_ParamLimits

0xd6fa,	// (0x000185d4) popup_tmo_note_window_ParamLimits

0xd6fa,	// (0x000185d4) popup_tmo_note_window

0x61f2,	// (0x000110cc) fshwr2_bg_pane

0x6ad7,	// (0x000119b1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6ad7,	// (0x000119b1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001ad8f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001ad8f) fshwr2_func_candi_cell_pane_g

0x5f41,	// (0x00010e1b) bg_popup_window_pane_cp01

0x6b23,	// (0x000119fd) bg_popup_window_pane_g1_cp01

0xed87,	// (0x00019c61) bg_popup_window_pane_cp22_ParamLimits

0xed87,	// (0x00019c61) bg_popup_window_pane_cp22

0xed95,	// (0x00019c6f) listscroll_tmo_link_pane_ParamLimits

0xed95,	// (0x00019c6f) listscroll_tmo_link_pane

0xedd5,	// (0x00019caf) popup_tmo_note_window_g1_ParamLimits

0xedd5,	// (0x00019caf) popup_tmo_note_window_g1

0xede2,	// (0x00019cbc) tmo_note_info_pane_ParamLimits

0xede2,	// (0x00019cbc) tmo_note_info_pane

0xedfc,	// (0x00019cd6) list_tmo_note_info_pane_g1_ParamLimits

0xedfc,	// (0x00019cd6) list_tmo_note_info_pane_g1

0xee13,	// (0x00019ced) list_tmo_note_info_pane_g2_ParamLimits

0xee13,	// (0x00019ced) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ad94) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ad94) list_tmo_note_info_pane_g

0xee2f,	// (0x00019d09) list_tmo_note_info_text_pane_ParamLimits

0xee2f,	// (0x00019d09) list_tmo_note_info_text_pane

0xeeb0,	// (0x00019d8a) list_tmo_link_pane

0xeebd,	// (0x00019d97) scroll_pane_cp20

0xeeca,	// (0x00019da4) list_single_tmo_link_pane_ParamLimits

0xeeca,	// (0x00019da4) list_single_tmo_link_pane

0xeeda,	// (0x00019db4) list_single_tmo_link_pane_t1

0xeee8,	// (0x00019dc2) list_tmo_note_info_text_pane_t1_ParamLimits

0xeee8,	// (0x00019dc2) list_tmo_note_info_text_pane_t1

0x7e68,	// (0x00012d42) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e68,	// (0x00012d42) aid_size_touch_scroll_bar_cp01

0x7cdd,	// (0x00012bb7) aid_size_touch_slider_marker

0x4a99,	// (0x0000f973) popup_settings_window_ParamLimits

0x4a99,	// (0x0000f973) popup_settings_window

0x8e35,	// (0x00013d0f) popup_candi_list_indi_window

0x8e85,	// (0x00013d5f) aid_touch_navi_pane_ParamLimits

0x614d,	// (0x00011027) rs_clock_indi_pane

0x6156,	// (0x00011030) sctrl_sk_bottom_pane_ParamLimits

0x6167,	// (0x00011041) sctrl_sk_top_pane_ParamLimits

0x626a,	// (0x00011144) popup_fep_tooltip_window

0xe83d,	// (0x00019717) aid_size_cell_widget_grid_ParamLimits

0xe8b6,	// (0x00019790) cell_ai5_widget_pane_g1_ParamLimits

0xe8b6,	// (0x00019790) cell_ai5_widget_pane_g1

0xe919,	// (0x000197f3) cell_ai5_widget_pane_g6_ParamLimits

0xe925,	// (0x000197ff) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001ad12) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ad12) cell_ai5_widget_pane_g

0xea6c,	// (0x00019946) cell_ai5_widget_pane_t10_ParamLimits

0xea6c,	// (0x00019946) cell_ai5_widget_pane_t10

0xea8a,	// (0x00019964) grid_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x00019a05) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x00019a05) cell_contacts_ai5_widget_pane

0xed0d,	// (0x00019be7) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x00019be7) popup_discreet_window_t3

0x6a18,	// (0x000118f2) popup_fshwr2_char_preview_window_ParamLimits

0x6a18,	// (0x000118f2) popup_fshwr2_char_preview_window

0xee4d,	// (0x00019d27) tmo_note_info_pane_t1

0xee62,	// (0x00019d3c) tmo_note_info_pane_t2

0xee77,	// (0x00019d51) tmo_note_info_pane_t3

0xee8c,	// (0x00019d66) tmo_note_info_pane_t4

0xee9e,	// (0x00019d78) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ad99) tmo_note_info_pane_t

0xeeb0,	// (0x00019d8a) list_tmo_link_pane_ParamLimits

0xeebd,	// (0x00019d97) scroll_pane_cp20_ParamLimits

0x4950,	// (0x0000f82a) bg_popup_fep_char_preview_window_cp01

0xef01,	// (0x00019ddb) popup_fshwr2_char_preview_window_t1

0xef0f,	// (0x00019de9) popup_candi_list_indi_window_g1

0xef18,	// (0x00019df2) bg_cell_contacts_ai5_widget_pane

0xef24,	// (0x00019dfe) cell_contacts_ai5_widget_pane_g1

0xc720,	// (0x000175fa) cell_contacts_ai5_widget_pane_g2

0xef39,	// (0x00019e13) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ada4) cell_contacts_ai5_widget_pane_g

0xef45,	// (0x00019e1f) cell_contacts_ai5_widget_pane_t1

0x7c3a,	// (0x00012b14) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbc,	// (0x00019e96) settings_container_pane

0x8ad5,	// (0x000139af) listscroll_set_pane_copy1

0xb299,	// (0x00016173) scroll_pane_cp121_copy1

0x9872,	// (0x0001474c) set_content_pane_copy1

0xefc8,	// (0x00019ea2) aid_height_set_list_copy1_ParamLimits

0xefc8,	// (0x00019ea2) aid_height_set_list_copy1

0xa850,	// (0x0001572a) aid_size_parent_copy1_ParamLimits

0xa850,	// (0x0001572a) aid_size_parent_copy1

0xefd4,	// (0x00019eae) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd4,	// (0x00019eae) button_value_adjust_pane_cp6_copy1

0x8e01,	// (0x00013cdb) list_highlight_pane_cp2_copy1_ParamLimits

0x8e01,	// (0x00013cdb) list_highlight_pane_cp2_copy1

0xefe8,	// (0x00019ec2) list_set_pane_copy1_ParamLimits

0xefe8,	// (0x00019ec2) list_set_pane_copy1

0xef57,	// (0x00019e31) main_pane_set_t1_copy1_ParamLimits

0xef57,	// (0x00019e31) main_pane_set_t1_copy1

0xef91,	// (0x00019e6b) main_pane_set_t2_copy1_ParamLimits

0xef91,	// (0x00019e6b) main_pane_set_t2_copy1

0xf095,	// (0x00019f6f) main_pane_set_t3_copy1

0xf0a3,	// (0x00019f7d) main_pane_set_t4_copy1

0xefb0,	// (0x00019e8a) set_content_pane_g1_copy1_ParamLimits

0xefb0,	// (0x00019e8a) set_content_pane_g1_copy1

0xf0b1,	// (0x00019f8b) setting_code_pane_copy1

0xf0b9,	// (0x00019f93) setting_slider_graphic_pane_copy1

0xf0b9,	// (0x00019f93) setting_slider_pane_copy1

0xf0b9,	// (0x00019f93) setting_text_pane_copy1

0xf0b9,	// (0x00019f93) setting_volume_pane_copy1

0xf0b1,	// (0x00019f8b) settings_code_pane_cp2_copy1

0xf0c1,	// (0x00019f9b) settings_code_pane_cp_copy1_ParamLimits

0xf0c1,	// (0x00019f9b) settings_code_pane_cp_copy1

0x6b2c,	// (0x00011a06) volume_set_pane_copy1

0xf0d5,	// (0x00019faf) volume_set_pane_g10_copy1

0xf0dd,	// (0x00019fb7) volume_set_pane_g1_copy1

0xf0e5,	// (0x00019fbf) volume_set_pane_g2_copy1

0xf0ed,	// (0x00019fc7) volume_set_pane_g3_copy1

0xf0f5,	// (0x00019fcf) volume_set_pane_g4_copy1

0xf0fd,	// (0x00019fd7) volume_set_pane_g5_copy1

0xf105,	// (0x00019fdf) volume_set_pane_g6_copy1

0xf10d,	// (0x00019fe7) volume_set_pane_g7_copy1

0xf115,	// (0x00019fef) volume_set_pane_g8_copy1

0xf11d,	// (0x00019ff7) volume_set_pane_g9_copy1

0x6e10,	// (0x00011cea) bg_set_opt_pane_cp_copy1_ParamLimits

0x6e10,	// (0x00011cea) bg_set_opt_pane_cp_copy1

0x6b34,	// (0x00011a0e) setting_slider_pane_t1_copy1_ParamLimits

0x6b34,	// (0x00011a0e) setting_slider_pane_t1_copy1

0x6b52,	// (0x00011a2c) setting_slider_pane_t2_copy1_ParamLimits

0x6b52,	// (0x00011a2c) setting_slider_pane_t2_copy1

0x6b6c,	// (0x00011a46) setting_slider_pane_t3_copy1_ParamLimits

0x6b6c,	// (0x00011a46) setting_slider_pane_t3_copy1

0x6b84,	// (0x00011a5e) slider_set_pane_copy1_ParamLimits

0x6b84,	// (0x00011a5e) slider_set_pane_copy1

0x7d5d,	// (0x00012c37) set_opt_bg_pane_g1_copy2

0x7d65,	// (0x00012c3f) set_opt_bg_pane_g2_copy2

0xf125,	// (0x00019fff) set_opt_bg_pane_g3_copy2

0x7d75,	// (0x00012c4f) set_opt_bg_pane_g4_copy2

0x7d7d,	// (0x00012c57) set_opt_bg_pane_g5_copy2

0x7d85,	// (0x00012c5f) set_opt_bg_pane_g6_copy2

0xf12f,	// (0x0001a009) set_opt_bg_pane_g7_copy2

0xf137,	// (0x0001a011) set_opt_bg_pane_g8_copy2

0xf141,	// (0x0001a01b) set_opt_bg_pane_g9_copy2

0x6b9a,	// (0x00011a74) aid_size_touch_slider_mark_copy1_ParamLimits

0x6b9a,	// (0x00011a74) aid_size_touch_slider_mark_copy1

0xf14b,	// (0x0001a025) slider_set_pane_g1_copy1

0x6bae,	// (0x00011a88) slider_set_pane_g2_copy1

0x5b82,	// (0x00010a5c) slider_set_pane_g3_copy1_ParamLimits

0x5b82,	// (0x00010a5c) slider_set_pane_g3_copy1

0x5b96,	// (0x00010a70) slider_set_pane_g4_copy1_ParamLimits

0x5b96,	// (0x00010a70) slider_set_pane_g4_copy1

0x5bae,	// (0x00010a88) slider_set_pane_g5_copy1_ParamLimits

0x5bae,	// (0x00010a88) slider_set_pane_g5_copy1

0x5b82,	// (0x00010a5c) slider_set_pane_g6_copy1_ParamLimits

0x5b82,	// (0x00010a5c) slider_set_pane_g6_copy1

0x6bb6,	// (0x00011a90) slider_set_pane_g7_copy1_ParamLimits

0x6bb6,	// (0x00011a90) slider_set_pane_g7_copy1

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp2_copy1

0xf154,	// (0x0001a02e) setting_slider_graphic_pane_g1_copy1

0xf15d,	// (0x0001a037) setting_slider_graphic_pane_t1_copy1

0xf16d,	// (0x0001a047) setting_slider_graphic_pane_t2_copy1

0xf17d,	// (0x0001a057) slider_set_pane_cp_copy1

0xf18d,	// (0x0001a067) input_focus_pane_cp1_copy1

0xf196,	// (0x0001a070) list_set_text_pane_copy1

0xf19e,	// (0x0001a078) setting_text_pane_g1_copy1

0x6e69,	// (0x00011d43) set_text_pane_t1_copy1

0xf18d,	// (0x0001a067) input_focus_pane_cp2_copy1

0xf19e,	// (0x0001a078) setting_code_pane_g1_copy1

0xf1a7,	// (0x0001a081) setting_code_pane_t1_copy1

0xf1b5,	// (0x0001a08f) list_set_graphic_pane_copy1

0x6d30,	// (0x00011c0a) bg_set_opt_pane_cp4_copy1

0x87d0,	// (0x000136aa) list_set_graphic_pane_g1_copy1_ParamLimits

0x87d0,	// (0x000136aa) list_set_graphic_pane_g1_copy1

0xf1c8,	// (0x0001a0a2) list_set_graphic_pane_g2_copy1

0x87e8,	// (0x000136c2) list_set_graphic_pane_t1_copy1_ParamLimits

0x87e8,	// (0x000136c2) list_set_graphic_pane_t1_copy1

0xbedd,	// (0x00016db7) rs_clock_indi_pane_g1

0xf1d0,	// (0x0001a0aa) rs_clock_indi_pane_t1

0xf1de,	// (0x0001a0b8) rs_indi_pane

0xf1e6,	// (0x0001a0c0) rs_indi_pane_g1

0xf1ef,	// (0x0001a0c9) rs_indi_pane_g2

0xf1f8,	// (0x0001a0d2) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001adab) rs_indi_pane_g

0x8ad5,	// (0x000139af) bg_popup_preview_window_pane_cp03

0xf201,	// (0x0001a0db) popup_fep_tooltip_window_t1

0xcd55,	// (0x00017c2f) popup_note2_window_g2_ParamLimits

0xcd55,	// (0x00017c2f) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001ab44) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001ab44) popup_note2_window_g

0xd333,	// (0x0001820d) bg_popup_sub_pane_cp11_ParamLimits

0xd340,	// (0x0001821a) cell_ai3_links_pane_g1_ParamLimits

0xd357,	// (0x00018231) cell_ai3_links_pane_t1

0x6e69,	// (0x00011d43) set_text_pane_t1_copy1_ParamLimits

0x89e6,	// (0x000138c0) cell_graphic_popup_pane_cp2_ParamLimits

0x89e6,	// (0x000138c0) cell_graphic_popup_pane_cp2

0xf20f,	// (0x0001a0e9) cell_graphic_popup_pane_g1_cp2

0x740a,	// (0x000122e4) cell_graphic_popup_pane_g2_cp2

0xf217,	// (0x0001a0f1) cell_graphic_popup_pane_g3_cp2

0xf21f,	// (0x0001a0f9) cell_graphic_popup_pane_t2_cp2

0x741b,	// (0x000122f5) grid_highlight_pane_cp3_cp2

0x814e,	// (0x00013028) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7c3a,	// (0x00012b14) main_tmo_pane_ParamLimits

0xd6ee,	// (0x000185c8) popup_tmo_big_image_note_window

0xe8a5,	// (0x0001977f) cell_ai5_widget_list_pane

0xe8ad,	// (0x00019787) cell_ai5_widget_lrg_icon_pane

0xee4d,	// (0x00019d27) tmo_note_info_pane_t1_ParamLimits

0xee62,	// (0x00019d3c) tmo_note_info_pane_t2_ParamLimits

0xee77,	// (0x00019d51) tmo_note_info_pane_t3_ParamLimits

0xee8c,	// (0x00019d66) tmo_note_info_pane_t4_ParamLimits

0xee9e,	// (0x00019d78) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ad99) tmo_note_info_pane_t_ParamLimits

0xefbc,	// (0x00019e96) settings_container_pane_ParamLimits

0xf185,	// (0x0001a05f) indicator_popup_pane_cp5

0xf185,	// (0x0001a05f) indicator_popup_pane_cp6

0xf1b5,	// (0x0001a08f) list_set_graphic_pane_copy1_ParamLimits

0x6d1c,	// (0x00011bf6) bg_popup_window_pane_cp23

0xf22d,	// (0x0001a107) popup_tmo_big_image_note_window_g1

0xf237,	// (0x0001a111) popup_tmo_big_image_note_window_t1

0xf247,	// (0x0001a121) popup_tmo_big_image_note_window_t2

0xf257,	// (0x0001a131) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001adb2) popup_tmo_big_image_note_window_t

0xbedd,	// (0x00016db7) cell_ai5_widget_lrg_icon_pane_g1

0xf267,	// (0x0001a141) cell_ai5_widget_lrg_icon_pane_t1

0xf275,	// (0x0001a14f) cell_ai5_widget_list_row_pane_ParamLimits

0xf275,	// (0x0001a14f) cell_ai5_widget_list_row_pane

0xf28c,	// (0x0001a166) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf28c,	// (0x0001a166) cell_ai5_widget_list_row_pane_g1

0xf299,	// (0x0001a173) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf299,	// (0x0001a173) cell_ai5_widget_list_row_pane_t1

0xf2ca,	// (0x0001a1a4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ca,	// (0x0001a1a4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001adb9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001adb9) cell_ai5_widget_list_row_pane_t

0x4950,	// (0x0000f82a) main_fep_vtchi_ss_pane

0xf312,	// (0x0001a1ec) popup_fep_char_pre_window

0xf31a,	// (0x0001a1f4) popup_fep_ituss_window

0xf346,	// (0x0001a220) popup_fep_vkbss_window

0xf370,	// (0x0001a24a) grid_vkbss_keypad_pane_ParamLimits

0xf370,	// (0x0001a24a) grid_vkbss_keypad_pane

0xf380,	// (0x0001a25a) ituss_keypad_pane

0x6bd8,	// (0x00011ab2) aid_vkbss_key_offset_ParamLimits

0x6bd8,	// (0x00011ab2) aid_vkbss_key_offset

0x6be4,	// (0x00011abe) cell_vkbss_key_pane_ParamLimits

0x6be4,	// (0x00011abe) cell_vkbss_key_pane

0xf38f,	// (0x0001a269) bg_cell_vkbss_key_g1_ParamLimits

0xf38f,	// (0x0001a269) bg_cell_vkbss_key_g1

0xf39b,	// (0x0001a275) cell_vkbss_key_3p_pane_ParamLimits

0xf39b,	// (0x0001a275) cell_vkbss_key_3p_pane

0xf3af,	// (0x0001a289) cell_vkbss_key_g1_ParamLimits

0xf3af,	// (0x0001a289) cell_vkbss_key_g1

0xf3c3,	// (0x0001a29d) cell_vkbss_key_t1_ParamLimits

0xf3c3,	// (0x0001a29d) cell_vkbss_key_t1

0x6bfa,	// (0x00011ad4) cell_ituss_key_pane_ParamLimits

0x6bfa,	// (0x00011ad4) cell_ituss_key_pane

0xf3ee,	// (0x0001a2c8) bg_cell_ituss_key_g1_ParamLimits

0xf3ee,	// (0x0001a2c8) bg_cell_ituss_key_g1

0xf3fa,	// (0x0001a2d4) cell_ituss_key_pane_g1_ParamLimits

0xf3fa,	// (0x0001a2d4) cell_ituss_key_pane_g1

0x6c0b,	// (0x00011ae5) cell_ituss_key_pane_g2_ParamLimits

0x6c0b,	// (0x00011ae5) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001adc0) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001adc0) cell_ituss_key_pane_g

0x6c37,	// (0x00011b11) cell_ituss_key_t1_ParamLimits

0x6c37,	// (0x00011b11) cell_ituss_key_t1

0x6c71,	// (0x00011b4b) cell_ituss_key_t2_ParamLimits

0x6c71,	// (0x00011b4b) cell_ituss_key_t2

0x6ca2,	// (0x00011b7c) cell_ituss_key_t3_ParamLimits

0x6ca2,	// (0x00011b7c) cell_ituss_key_t3

0x6c71,	// (0x00011b4b) cell_ituss_key_t4_ParamLimits

0x6c71,	// (0x00011b4b) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001adc7) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001adc7) cell_ituss_key_t

0xf426,	// (0x0001a300) cell_vkbss_key_3p_pane_g1

0xf42e,	// (0x0001a308) cell_vkbss_key_3p_pane_g2

0xf436,	// (0x0001a310) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001add2) cell_vkbss_key_3p_pane_g

0x8ad5,	// (0x000139af) bg_popup_fep_char_preview_window_cp02

0xf43e,	// (0x0001a318) popup_fep_char_pre_window_t1

0xe82a,	// (0x00019704) main_ai5_sk_pane

0xef18,	// (0x00019df2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef24,	// (0x00019dfe) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc720,	// (0x000175fa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef39,	// (0x00019e13) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ada4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef45,	// (0x00019e1f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7c3a,	// (0x00012b14) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf44c,	// (0x0001a326) main_ai5_sk_pane_g1

0x9906,	// (0x000147e0) popup_query_code_window_g1

0xf330,	// (0x0001a20a) popup_fep_vkb_icf_pane

0xf35a,	// (0x0001a234) popup_fep_vtchi_icf_pane

0xf455,	// (0x0001a32f) bg_icf_pane

0xf461,	// (0x0001a33b) list_vkb_icf_pane

0xf470,	// (0x0001a34a) bg_icf_pane_cp01

0xf483,	// (0x0001a35d) vtchi_icf_list_pane

0xf493,	// (0x0001a36d) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0001a36d) list_vkb_icf_pane_t1

0xf4b4,	// (0x0001a38e) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0001a38e) vtchi_icf_list_pane_t1

0xf31a,	// (0x0001a1f4) popup_fep_ituss_window_ParamLimits

0xf35a,	// (0x0001a234) popup_fep_vtchi_icf_pane_ParamLimits

0xf380,	// (0x0001a25a) ituss_keypad_pane_ParamLimits

0x6bcc,	// (0x00011aa6) ituss_sks_pane

0xf455,	// (0x0001a32f) bg_icf_pane_ParamLimits

0xf2f2,	// (0x0001a1cc) icf_edit_indi_pane_ParamLimits

0xf2f2,	// (0x0001a1cc) icf_edit_indi_pane

0xf461,	// (0x0001a33b) list_vkb_icf_pane_ParamLimits

0xf470,	// (0x0001a34a) bg_icf_pane_cp01_ParamLimits

0xf305,	// (0x0001a1df) icf_edit_indi_pane_cp01_ParamLimits

0xf305,	// (0x0001a1df) icf_edit_indi_pane_cp01

0xf48b,	// (0x0001a365) vtchi_query_pane

0xe6b4,	// (0x0001958e) icf_edit_indi_pane_g1_ParamLimits

0xe6b4,	// (0x0001958e) icf_edit_indi_pane_g1

0xf525,	// (0x0001a3ff) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001a3ff) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001adea) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001adea) icf_edit_indi_pane_g

0xf537,	// (0x0001a411) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001a3a8) bg_input_focus_pane_cp042

0x75ee,	// (0x000124c8) vtchi_button_pane

0xf4d7,	// (0x0001a3b1) vtchi_query_pane_t1

0xf4e5,	// (0x0001a3bf) vtchi_query_pane_t2

0xf4f3,	// (0x0001a3cd) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001add9) vtchi_query_pane_t

0x4950,	// (0x0000f82a) bg_button_pane_cp13

0xf501,	// (0x0001a3db) vtchi_button_pane_g1

0x6ce5,	// (0x00011bbf) ituss_sks_pane_g1

0x6cf0,	// (0x00011bca) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ade0) ituss_sks_pane_g

0xf509,	// (0x0001a3e3) ituss_sks_pane_t1

0xf517,	// (0x0001a3f1) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ade5) ituss_sks_pane_t

0xb919,	// (0x000167f3) indicator_nsta_pane_cp_g1

0xb921,	// (0x000167fb) indicator_nsta_pane_cp_g2

0xb929,	// (0x00016803) indicator_nsta_pane_cp_g3

0xb919,	// (0x000167f3) indicator_nsta_pane_cp_g4

0xb921,	// (0x000167fb) indicator_nsta_pane_cp_g5

0xb929,	// (0x00016803) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a982) indicator_nsta_pane_cp_g

0xe3f3,	// (0x000192cd) cell_graphic2_pane_t2_ParamLimits

0xe3f3,	// (0x000192cd) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001ac9b) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001ac9b) cell_graphic2_pane_t

0xe420,	// (0x000192fa) cell_graphic2_control_pane_t1

0x84f4,	// (0x000133ce) signal_pane_g3_ParamLimits

0x84f4,	// (0x000133ce) signal_pane_g3

0x8506,	// (0x000133e0) signal_pane_g4_ParamLimits

0x8506,	// (0x000133e0) signal_pane_g4

0xf2dc,	// (0x0001a1b6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2dc,	// (0x0001a1b6) cell_ai5_widget_list_row_pane_t3

0xf414,	// (0x0001a2ee) cell_ituss_key_pane_t1_ParamLimits

0xf414,	// (0x0001a2ee) cell_ituss_key_pane_t1

0x950e,	// (0x000143e8) form_field_data_wide_pane_vc_t2_ParamLimits

0x950e,	// (0x000143e8) form_field_data_wide_pane_vc_t2

0x9522,	// (0x000143fc) form_field_data_wide_pane_vc_t3_ParamLimits

0x9522,	// (0x000143fc) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a6de) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a6de) form_field_data_wide_pane_vc_t

0xb5e0,	// (0x000164ba) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb5e0,	// (0x000164ba) form_field_slider_wide_pane_vc_t3

0xb6be,	// (0x00016598) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb6be,	// (0x00016598) form_field_popup_wide_pane_vc_t2

0xb6d5,	// (0x000165af) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb6d5,	// (0x000165af) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a971) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a971) form_field_popup_wide_pane_vc_t

0x69a0,	// (0x0001187a) aid_fshwr2_btn_pane_ParamLimits

0x69ac,	// (0x00011886) aid_fshwr2_syb_pane_ParamLimits

0x69be,	// (0x00011898) aid_fshwr2_txt_pane_ParamLimits

0x61f2,	// (0x000110cc) fshwr2_bg_pane_ParamLimits

0x69ca,	// (0x000118a4) fshwr2_func_candi_pane_ParamLimits

0x69e6,	// (0x000118c0) fshwr2_hwr_syb_pane_ParamLimits

0x6a00,	// (0x000118da) fshwr2_icf_pane_ParamLimits

0xb546,	// (0x00016420) list_double_graphic_pane_vc_g4_ParamLimits

0xb546,	// (0x00016420) list_double_graphic_pane_vc_g4

0x6c2b,	// (0x00011b05) cell_ituss_key_pane_g3_ParamLimits

0x6c2b,	// (0x00011b05) cell_ituss_key_pane_g3

0x6cd3,	// (0x00011bad) cell_ituss_key_t5_ParamLimits

0x6cd3,	// (0x00011bad) cell_ituss_key_t5

0xf346,	// (0x0001a220) popup_fep_vkbss_window_ParamLimits

0xe834,	// (0x0001970e) aid_cell_ai5_quarter

0xf537,	// (0x0001a411) icf_edit_indi_pane_t1_ParamLimits

0x715b,	// (0x00012035) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x715b,	// (0x00012035) aid_tch_indicator_popup_pane_cp2

0x716e,	// (0x00012048) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x716e,	// (0x00012048) aid_tch_query_popup_data_pane_cp2

0x98ae,	// (0x00014788) aid_tch_query_popup_pane_ParamLimits

0x98ae,	// (0x00014788) aid_tch_query_popup_pane

0x98ae,	// (0x00014788) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x98ae,	// (0x00014788) aid_tch_query_popup_data_pane_cp1

0xed7b,	// (0x00019c55) cell_fshwr2_syb_bg_pane_ParamLimits

0x6af9,	// (0x000119d3) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x6b0d,	// (0x000119e7) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf330,	// (0x0001a20a) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f477 };

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
0xbd5c,	// (0x0002b1d3) Screen

0xbd68,	// (0x0002b1df) application_window_ParamLimits

0xbd68,	// (0x0002b1df) application_window

0x317f,	// (0x000225f6) screen_g1

0xbda0,	// (0x0002b217) area_bottom_pane_ParamLimits

0xbda0,	// (0x0002b217) area_bottom_pane

0x11ec,	// (0x00020663) area_top_pane_ParamLimits

0x11ec,	// (0x00020663) area_top_pane

0x1280,	// (0x000206f7) main_pane_ParamLimits

0x1280,	// (0x000206f7) main_pane

0x3189,	// (0x00022600) misc_graphics

0xd5c8,	// (0x0002ca3f) battery_pane_ParamLimits

0xd5c8,	// (0x0002ca3f) battery_pane

0x5880,	// (0x00024cf7) bg_status_flat_pane_g8

0x5888,	// (0x00024cff) bg_status_flat_pane_g9

0x4bf1,	// (0x00024068) context_pane_ParamLimits

0x4bf1,	// (0x00024068) context_pane

0xd733,	// (0x0002cbaa) navi_pane_ParamLimits

0xd733,	// (0x0002cbaa) navi_pane

0xd7ab,	// (0x0002cc22) signal_pane_ParamLimits

0xd7ab,	// (0x0002cc22) signal_pane

0x0008,

0xf87a,	// (0x0002ecf1) bg_status_flat_pane_g

0xd83b,	// (0x0002ccb2) status_pane_g1_ParamLimits

0xd83b,	// (0x0002ccb2) status_pane_g1

0xd851,	// (0x0002ccc8) status_pane_g2_ParamLimits

0xd851,	// (0x0002ccc8) status_pane_g2

0x4e0a,	// (0x00024281) status_pane_g3_ParamLimits

0x4e0a,	// (0x00024281) status_pane_g3

0x0004,

0xf7a6,	// (0x0002ec1d) status_pane_g_ParamLimits

0xf7a6,	// (0x0002ec1d) status_pane_g

0xd85d,	// (0x0002ccd4) title_pane_ParamLimits

0xd85d,	// (0x0002ccd4) title_pane

0xd8c0,	// (0x0002cd37) uni_indicator_pane_ParamLimits

0xd8c0,	// (0x0002cd37) uni_indicator_pane

0x4a57,	// (0x00023ece) bg_list_pane_ParamLimits

0x4a57,	// (0x00023ece) bg_list_pane

0xd52f,	// (0x0002c9a6) find_pane

0xd537,	// (0x0002c9ae) listscroll_app_pane_ParamLimits

0xd537,	// (0x0002c9ae) listscroll_app_pane

0x4a83,	// (0x00023efa) listscroll_form_pane

0xc152,	// (0x0002b5c9) listscroll_gen_pane_ParamLimits

0xc152,	// (0x0002b5c9) listscroll_gen_pane

0x4a83,	// (0x00023efa) listscroll_set_pane

0x6459,	// (0x000258d0) main_idle_act_pane

0x475d,	// (0x00023bd4) main_idle_trad_pane

0x475d,	// (0x00023bd4) main_list_empty_pane

0x4a9d,	// (0x00023f14) main_midp_pane

0x4aa9,	// (0x00023f20) main_pane_g1_ParamLimits

0x4aa9,	// (0x00023f20) main_pane_g1

0xc166,	// (0x0002b5dd) popup_ai_message_window_ParamLimits

0xc166,	// (0x0002b5dd) popup_ai_message_window

0xc1f7,	// (0x0002b66e) popup_fep_china_uni_window_ParamLimits

0xc1f7,	// (0x0002b66e) popup_fep_china_uni_window

0x1c41,	// (0x000210b8) popup_fep_japan_candidate_window_ParamLimits

0x1c41,	// (0x000210b8) popup_fep_japan_candidate_window

0x1c61,	// (0x000210d8) popup_fep_japan_predictive_window_ParamLimits

0x1c61,	// (0x000210d8) popup_fep_japan_predictive_window

0xc253,	// (0x0002b6ca) popup_find_window

0xc270,	// (0x0002b6e7) popup_grid_graphic_window_ParamLimits

0xc270,	// (0x0002b6e7) popup_grid_graphic_window

0x1cc6,	// (0x0002113d) popup_large_graphic_colour_window

0xc308,	// (0x0002b77f) popup_menu_window_ParamLimits

0xc308,	// (0x0002b77f) popup_menu_window

0xc4da,	// (0x0002b951) popup_note_image_window

0xc4a0,	// (0x0002b917) popup_note_wait_window_ParamLimits

0xc4a0,	// (0x0002b917) popup_note_wait_window

0xc4f2,	// (0x0002b969) popup_note_window_ParamLimits

0xc4f2,	// (0x0002b969) popup_note_window

0xc598,	// (0x0002ba0f) popup_query_code_window_ParamLimits

0xc598,	// (0x0002ba0f) popup_query_code_window

0x1f0e,	// (0x00021385) popup_query_data_code_window_ParamLimits

0x1f0e,	// (0x00021385) popup_query_data_code_window

0xc5d2,	// (0x0002ba49) popup_query_data_window_ParamLimits

0xc5d2,	// (0x0002ba49) popup_query_data_window

0xc654,	// (0x0002bacb) popup_query_sat_info_window_ParamLimits

0xc654,	// (0x0002bacb) popup_query_sat_info_window

0xc6eb,	// (0x0002bb62) popup_snote_single_graphic_window_ParamLimits

0xc6eb,	// (0x0002bb62) popup_snote_single_graphic_window

0xc6eb,	// (0x0002bb62) popup_snote_single_text_window_ParamLimits

0xc6eb,	// (0x0002bb62) popup_snote_single_text_window

0x1f95,	// (0x0002140c) popup_sub_window_general

0x20c5,	// (0x0002153c) popup_window_general_ParamLimits

0x20c5,	// (0x0002153c) popup_window_general

0x4ab7,	// (0x00023f2e) power_save_pane

0xbfe5,	// (0x0002b45c) control_pane_g1_ParamLimits

0xbfe5,	// (0x0002b45c) control_pane_g1

0xc00e,	// (0x0002b485) control_pane_g2_ParamLimits

0xc00e,	// (0x0002b485) control_pane_g2

0x4a1a,	// (0x00023e91) control_pane_g3_ParamLimits

0x4a1a,	// (0x00023e91) control_pane_g3

0x0007,

0xf78e,	// (0x0002ec05) control_pane_g_ParamLimits

0xf78e,	// (0x0002ec05) control_pane_g

0xc04b,	// (0x0002b4c2) control_pane_t1_ParamLimits

0xc04b,	// (0x0002b4c2) control_pane_t1

0xc0a9,	// (0x0002b520) control_pane_t2_ParamLimits

0xc0a9,	// (0x0002b520) control_pane_t2

0x0002,

0xf79f,	// (0x0002ec16) control_pane_t_ParamLimits

0xf79f,	// (0x0002ec16) control_pane_t

0x493b,	// (0x00023db2) navi_navi_volume_pane_cp1

0x4944,	// (0x00023dbb) status_small_icon_pane

0x494c,	// (0x00023dc3) status_small_pane_g1_ParamLimits

0x494c,	// (0x00023dc3) status_small_pane_g1

0x4980,	// (0x00023df7) status_small_pane_g2_ParamLimits

0x4980,	// (0x00023df7) status_small_pane_g2

0x498c,	// (0x00023e03) status_small_pane_g3_ParamLimits

0x498c,	// (0x00023e03) status_small_pane_g3

0x4998,	// (0x00023e0f) status_small_pane_g4_ParamLimits

0x4998,	// (0x00023e0f) status_small_pane_g4

0x49a4,	// (0x00023e1b) status_small_pane_g5_ParamLimits

0x49a4,	// (0x00023e1b) status_small_pane_g5

0x49b3,	// (0x00023e2a) status_small_pane_g6_ParamLimits

0x49b3,	// (0x00023e2a) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002ebf4) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002ebf4) status_small_pane_g

0x49e3,	// (0x00023e5a) status_small_pane_t1

0x4a06,	// (0x00023e7d) status_small_wait_pane_ParamLimits

0x4a06,	// (0x00023e7d) status_small_wait_pane

0xd304,	// (0x0002c77b) aid_levels_signal_ParamLimits

0xd304,	// (0x0002c77b) aid_levels_signal

0xd31c,	// (0x0002c793) signal_pane_g1_ParamLimits

0xd31c,	// (0x0002c793) signal_pane_g1

0xd337,	// (0x0002c7ae) signal_pane_g2_ParamLimits

0xd337,	// (0x0002c7ae) signal_pane_g2

0x0003,

0xf70e,	// (0x0002eb85) signal_pane_g_ParamLimits

0xf70e,	// (0x0002eb85) signal_pane_g

0x421a,	// (0x00023691) context_pane_g1

0xbf19,	// (0x0002b390) title_pane_g1

0xbf50,	// (0x0002b3c7) title_pane_t1

0x3231,	// (0x000226a8) title_pane_t2

0x3257,	// (0x000226ce) title_pane_t3

0x0002,

0xf55d,	// (0x0002e9d4) title_pane_t

0xd8e8,	// (0x0002cd5f) aid_levels_battery_ParamLimits

0xd8e8,	// (0x0002cd5f) aid_levels_battery

0xd904,	// (0x0002cd7b) battery_pane_g1_ParamLimits

0xd904,	// (0x0002cd7b) battery_pane_g1

0xd921,	// (0x0002cd98) battery_pane_g2_ParamLimits

0xd921,	// (0x0002cd98) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002ec28) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002ec28) battery_pane_g

0x61b6,	// (0x0002562d) uni_indicator_pane_g1

0x61cb,	// (0x00025642) uni_indicator_pane_g2

0x61e1,	// (0x00025658) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0002ed99) uni_indicator_pane_g

0x45cf,	// (0x00023a46) navi_icon_pane_ParamLimits

0x45cf,	// (0x00023a46) navi_icon_pane

0x4518,	// (0x0002398f) navi_midp_pane

0x45eb,	// (0x00023a62) navi_navi_pane

0x45f5,	// (0x00023a6c) navi_text_pane_ParamLimits

0x45f5,	// (0x00023a6c) navi_text_pane

0x317f,	// (0x000225f6) status_small_wait_pane_g1

0x3686,	// (0x00022afd) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0002ed94) status_small_wait_pane_g

0x5edb,	// (0x00025352) navi_navi_icon_text_pane

0x5ee3,	// (0x0002535a) navi_navi_pane_g1_ParamLimits

0x5ee3,	// (0x0002535a) navi_navi_pane_g1

0x5ef5,	// (0x0002536c) navi_navi_pane_g2_ParamLimits

0x5ef5,	// (0x0002536c) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0002ed62) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0002ed62) navi_navi_pane_g

0x5f07,	// (0x0002537e) navi_navi_tabs_pane

0x5f10,	// (0x00025387) navi_navi_text_pane

0x5edb,	// (0x00025352) navi_navi_volume_pane

0x5eb7,	// (0x0002532e) navi_text_pane_t1

0x5eab,	// (0x00025322) navi_icon_pane_g1

0x5dfe,	// (0x00025275) navi_navi_text_pane_t1

0xc9b4,	// (0x0002be2b) navi_navi_volume_pane_g1

0xc9bc,	// (0x0002be33) volume_small_pane

0xdaa4,	// (0x0002cf1b) navi_navi_icon_text_pane_g1

0xdaac,	// (0x0002cf23) navi_navi_icon_text_pane_t1

0x45eb,	// (0x00023a62) navi_tabs_2_long_pane

0x45eb,	// (0x00023a62) navi_tabs_2_pane

0x45eb,	// (0x00023a62) navi_tabs_3_long_pane

0x45eb,	// (0x00023a62) navi_tabs_3_pane

0x45eb,	// (0x00023a62) navi_tabs_4_pane

0xc994,	// (0x0002be0b) tabs_2_active_pane_ParamLimits

0xc994,	// (0x0002be0b) tabs_2_active_pane

0xc9a4,	// (0x0002be1b) tabs_2_passive_pane_ParamLimits

0xc9a4,	// (0x0002be1b) tabs_2_passive_pane

0xc962,	// (0x0002bdd9) tabs_3_active_pane_ParamLimits

0xc962,	// (0x0002bdd9) tabs_3_active_pane

0xc972,	// (0x0002bde9) tabs_3_passive_pane_ParamLimits

0xc972,	// (0x0002bde9) tabs_3_passive_pane

0xc983,	// (0x0002bdfa) tabs_3_passive_pane_cp_ParamLimits

0xc983,	// (0x0002bdfa) tabs_3_passive_pane_cp

0xc91e,	// (0x0002bd95) tabs_4_active_pane_ParamLimits

0xc91e,	// (0x0002bd95) tabs_4_active_pane

0xc92f,	// (0x0002bda6) tabs_4_passive_pane_ParamLimits

0xc92f,	// (0x0002bda6) tabs_4_passive_pane

0xc940,	// (0x0002bdb7) tabs_4_passive_pane_cp_ParamLimits

0xc940,	// (0x0002bdb7) tabs_4_passive_pane_cp

0xc951,	// (0x0002bdc8) tabs_4_passive_pane_cp2_ParamLimits

0xc951,	// (0x0002bdc8) tabs_4_passive_pane_cp2

0xc8fe,	// (0x0002bd75) tabs_2_long_active_pane_ParamLimits

0xc8fe,	// (0x0002bd75) tabs_2_long_active_pane

0xc90e,	// (0x0002bd85) tabs_2_long_passive_pane_ParamLimits

0xc90e,	// (0x0002bd85) tabs_2_long_passive_pane

0xc8cb,	// (0x0002bd42) tabs_3_long_active_pane_ParamLimits

0xc8cb,	// (0x0002bd42) tabs_3_long_active_pane

0xc8dc,	// (0x0002bd53) tabs_3_long_passive_pane_ParamLimits

0xc8dc,	// (0x0002bd53) tabs_3_long_passive_pane

0xc8ed,	// (0x0002bd64) tabs_3_long_passive_pane_cp_ParamLimits

0xc8ed,	// (0x0002bd64) tabs_3_long_passive_pane_cp

0x2206,	// (0x0002167d) volume_small_pane_g1

0xc87a,	// (0x0002bcf1) volume_small_pane_g2

0xc883,	// (0x0002bcfa) volume_small_pane_g3

0xc88c,	// (0x0002bd03) volume_small_pane_g4

0xc895,	// (0x0002bd0c) volume_small_pane_g5

0xc89e,	// (0x0002bd15) volume_small_pane_g6

0xc8a7,	// (0x0002bd1e) volume_small_pane_g7

0xc8b0,	// (0x0002bd27) volume_small_pane_g8

0xc8b9,	// (0x0002bd30) volume_small_pane_g9

0xc8c2,	// (0x0002bd39) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0002ed2e) volume_small_pane_g

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp2_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp2

0xceaf,	// (0x0002c326) tabs_3_active_pane_g1

0xceb7,	// (0x0002c32e) tabs_3_active_pane_t1

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp2_ParamLimits

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp2

0xceaf,	// (0x0002c326) tabs_3_passive_pane_g1

0xceb7,	// (0x0002c32e) tabs_3_passive_pane_t1

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp3_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp3

0xcec9,	// (0x0002c340) tabs_4_active_pane_g1

0xced1,	// (0x0002c348) tabs_4_active_pane_t1

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp3_ParamLimits

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp3

0xcec9,	// (0x0002c340) tabs_4_1_passive_pane_g1

0xced1,	// (0x0002c348) tabs_4_1_passive_pane_t1

0x4a9d,	// (0x00023f14) list_highlight_pane_cp2

0xdc34,	// (0x0002d0ab) list_set_pane_ParamLimits

0xdc34,	// (0x0002d0ab) list_set_pane

0xdcce,	// (0x0002d145) main_pane_set_t1_ParamLimits

0xdcce,	// (0x0002d145) main_pane_set_t1

0xdcee,	// (0x0002d165) main_pane_set_t2_ParamLimits

0xdcee,	// (0x0002d165) main_pane_set_t2

0xdd02,	// (0x0002d179) main_pane_set_t3_ParamLimits

0xdd02,	// (0x0002d179) main_pane_set_t3

0xdd14,	// (0x0002d18b) main_pane_set_t4_ParamLimits

0xdd14,	// (0x0002d18b) main_pane_set_t4

0x0003,

0xf987,	// (0x0002edfe) main_pane_set_t_ParamLimits

0xf987,	// (0x0002edfe) main_pane_set_t

0xdd26,	// (0x0002d19d) setting_code_pane

0xdd30,	// (0x0002d1a7) setting_slider_graphic_pane

0xdd30,	// (0x0002d1a7) setting_slider_pane

0xdd30,	// (0x0002d1a7) setting_text_pane

0xdd30,	// (0x0002d1a7) setting_volume_pane

0x14c5,	// (0x0002093c) volume_set_pane

0x3269,	// (0x000226e0) bg_set_opt_pane_cp

0x14cd,	// (0x00020944) setting_slider_pane_t1

0x14e6,	// (0x0002095d) setting_slider_pane_t2

0x1500,	// (0x00020977) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002e9db) setting_slider_pane_t

0x1518,	// (0x0002098f) slider_set_pane

0x3189,	// (0x00022600) bg_set_opt_pane_cp2

0x32ab,	// (0x00022722) setting_slider_graphic_pane_g1

0x152e,	// (0x000209a5) setting_slider_graphic_pane_t1

0x153e,	// (0x000209b5) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002e9e2) setting_slider_graphic_pane_t

0x154e,	// (0x000209c5) slider_set_pane_cp

0x3189,	// (0x00022600) input_focus_pane_cp1

0x6440,	// (0x000258b7) list_set_text_pane

0x317f,	// (0x000225f6) setting_text_pane_g1

0x3189,	// (0x00022600) input_focus_pane_cp2

0x317f,	// (0x000225f6) setting_code_pane_g1

0x32b4,	// (0x0002272b) setting_code_pane_t1

0x0097,	// (0x0001f50e) set_text_pane_t1_ParamLimits

0x0097,	// (0x0001f50e) set_text_pane_t1

0x3b3c,	// (0x00022fb3) set_opt_bg_pane_g1

0x3b44,	// (0x00022fbb) set_opt_bg_pane_g2

0x641a,	// (0x00025891) set_opt_bg_pane_g3

0x3b54,	// (0x00022fcb) set_opt_bg_pane_g4

0x3b5c,	// (0x00022fd3) set_opt_bg_pane_g5

0x3b64,	// (0x00022fdb) set_opt_bg_pane_g6

0x6424,	// (0x0002589b) set_opt_bg_pane_g7

0x642c,	// (0x000258a3) set_opt_bg_pane_g8

0x6436,	// (0x000258ad) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0002edeb) set_opt_bg_pane_g

0x63cb,	// (0x00025842) slider_set_pane_g1

0x23ce,	// (0x00021845) slider_set_pane_g2

0x0006,

0xf965,	// (0x0002eddc) slider_set_pane_g

0x236a,	// (0x000217e1) volume_set_pane_g1

0x2372,	// (0x000217e9) volume_set_pane_g2

0x237a,	// (0x000217f1) volume_set_pane_g3

0x2382,	// (0x000217f9) volume_set_pane_g4

0x238a,	// (0x00021801) volume_set_pane_g5

0x2392,	// (0x00021809) volume_set_pane_g6

0x239a,	// (0x00021811) volume_set_pane_g7

0x23a2,	// (0x00021819) volume_set_pane_g8

0x23aa,	// (0x00021821) volume_set_pane_g9

0x23b2,	// (0x00021829) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0002edb4) volume_set_pane_g

0xcee3,	// (0x0002c35a) indicator_pane_ParamLimits

0xcee3,	// (0x0002c35a) indicator_pane

0xcf0b,	// (0x0002c382) main_idle_pane_g2_ParamLimits

0xcf0b,	// (0x0002c382) main_idle_pane_g2

0xcf43,	// (0x0002c3ba) main_pane_idle_g1_ParamLimits

0xcf43,	// (0x0002c3ba) main_pane_idle_g1

0x3303,	// (0x0002277a) popup_clock_digital_analogue_window_ParamLimits

0x3303,	// (0x0002277a) popup_clock_digital_analogue_window

0xcf6a,	// (0x0002c3e1) soft_indicator_pane_ParamLimits

0xcf6a,	// (0x0002c3e1) soft_indicator_pane

0xcf84,	// (0x0002c3fb) wallpaper_pane_ParamLimits

0xcf84,	// (0x0002c3fb) wallpaper_pane

0x317f,	// (0x000225f6) wallpaper_pane_g1

0xcf96,	// (0x0002c40d) indicator_pane_g1_ParamLimits

0xcf96,	// (0x0002c40d) indicator_pane_g1

0x681a,	// (0x00025c91) navi_navi_icon_text_pane_srt_g1

0x3355,	// (0x000227cc) soft_indicator_pane_t1

0x336f,	// (0x000227e6) aid_ps_area_pane

0xcfac,	// (0x0002c423) aid_ps_clock_pane

0x338e,	// (0x00022805) aid_ps_indicator_pane

0x339a,	// (0x00022811) indicator_ps_pane_ParamLimits

0x339a,	// (0x00022811) indicator_ps_pane

0x33a9,	// (0x00022820) power_save_pane_g1_ParamLimits

0x33a9,	// (0x00022820) power_save_pane_g1

0x33b5,	// (0x0002282c) power_save_pane_g2_ParamLimits

0x33b5,	// (0x0002282c) power_save_pane_g2

0x10e0,	// (0x00020557) aid_navinavi_width_pane

0x336f,	// (0x000227e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002e9e7) power_save_pane_g_ParamLimits

0xf570,	// (0x0002e9e7) power_save_pane_g

0x33c3,	// (0x0002283a) power_save_pane_t1_ParamLimits

0x33c3,	// (0x0002283a) power_save_pane_t1

0xcfac,	// (0x0002c423) aid_ps_clock_pane_ParamLimits

0x338e,	// (0x00022805) aid_ps_indicator_pane_ParamLimits

0x33d5,	// (0x0002284c) power_save_pane_t4_ParamLimits

0x33d5,	// (0x0002284c) power_save_pane_t4

0x0001,

0xf575,	// (0x0002e9ec) power_save_pane_t_ParamLimits

0xf575,	// (0x0002e9ec) power_save_pane_t

0x33ff,	// (0x00022876) power_save_t3_ParamLimits

0x33ff,	// (0x00022876) power_save_t3

0x33ea,	// (0x00022861) power_save_t2_ParamLimits

0x33ea,	// (0x00022861) power_save_t2

0x3414,	// (0x0002288b) indicator_ps_pane_g1

0xcfba,	// (0x0002c431) ai_gene_pane_ParamLimits

0xcfba,	// (0x0002c431) ai_gene_pane

0xcfd1,	// (0x0002c448) ai_links_pane_ParamLimits

0xcfd1,	// (0x0002c448) ai_links_pane

0xcfe9,	// (0x0002c460) indicator_pane_cp1_ParamLimits

0xcfe9,	// (0x0002c460) indicator_pane_cp1

0xcff8,	// (0x0002c46f) main_pane_idle_g1_cp_ParamLimits

0xcff8,	// (0x0002c46f) main_pane_idle_g1_cp

0x344d,	// (0x000228c4) popup_ai_links_title_window

0xd010,	// (0x0002c487) soft_indicator_pane_cp1_ParamLimits

0xd010,	// (0x0002c487) soft_indicator_pane_cp1

0x61a4,	// (0x0002561b) ai_links_pane_g1

0x61ad,	// (0x00025624) grid_ai_links_pane

0xdbb8,	// (0x0002d02f) ai_gene_pane_1

0x6192,	// (0x00025609) ai_gene_pane_2

0x619b,	// (0x00025612) list_highlight_pane_cp4

0xdb94,	// (0x0002d00b) cell_ai_link_pane_ParamLimits

0xdb94,	// (0x0002d00b) cell_ai_link_pane

0x6163,	// (0x000255da) cell_ai_link_pane_g1

0x3686,	// (0x00022afd) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0002ed8f) cell_ai_link_pane_g

0x3189,	// (0x00022600) grid_highlight_cp2

0x3189,	// (0x00022600) bg_popup_sub_pane_cp1

0x3470,	// (0x000228e7) popup_ai_links_title_window_t1

0x60b1,	// (0x00025528) ai_gene_pane_1_g1_ParamLimits

0x60b1,	// (0x00025528) ai_gene_pane_1_g1

0x60bd,	// (0x00025534) ai_gene_pane_1_g2_ParamLimits

0x60bd,	// (0x00025534) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0002ed85) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0002ed85) ai_gene_pane_1_g

0x60ca,	// (0x00025541) ai_gene_pane_1_t1_ParamLimits

0x60ca,	// (0x00025541) ai_gene_pane_1_t1

0x60fe,	// (0x00025575) grid_ai_soft_ind_pane

0x609c,	// (0x00025513) ai_gene_pane_2_t1_ParamLimits

0x609c,	// (0x00025513) ai_gene_pane_2_t1

0xd024,	// (0x0002c49b) main_pane_empty_t1_ParamLimits

0xd024,	// (0x0002c49b) main_pane_empty_t1

0xd03c,	// (0x0002c4b3) main_pane_empty_t2_ParamLimits

0xd03c,	// (0x0002c4b3) main_pane_empty_t2

0xd051,	// (0x0002c4c8) main_pane_empty_t3_ParamLimits

0xd051,	// (0x0002c4c8) main_pane_empty_t3

0xd063,	// (0x0002c4da) main_pane_empty_t4_ParamLimits

0xd063,	// (0x0002c4da) main_pane_empty_t4

0xd075,	// (0x0002c4ec) main_pane_empty_t5_ParamLimits

0xd075,	// (0x0002c4ec) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002e9f1) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002e9f1) main_pane_empty_t

0x3b8d,	// (0x00023004) bg_popup_window_pane_ParamLimits

0x3b8d,	// (0x00023004) bg_popup_window_pane

0x5e0c,	// (0x00025283) find_popup_pane_cp2_ParamLimits

0x5e0c,	// (0x00025283) find_popup_pane_cp2

0x5e18,	// (0x0002528f) heading_pane_ParamLimits

0x5e18,	// (0x0002528f) heading_pane

0x3189,	// (0x00022600) bg_popup_sub_pane

0xdac9,	// (0x0002cf40) bg_popup_window_pane_g1_ParamLimits

0xdac9,	// (0x0002cf40) bg_popup_window_pane_g1

0xdad8,	// (0x0002cf4f) bg_popup_window_pane_g2_ParamLimits

0xdad8,	// (0x0002cf4f) bg_popup_window_pane_g2

0xdae4,	// (0x0002cf5b) bg_popup_window_pane_g3_ParamLimits

0xdae4,	// (0x0002cf5b) bg_popup_window_pane_g3

0xdaf0,	// (0x0002cf67) bg_popup_window_pane_g4_ParamLimits

0xdaf0,	// (0x0002cf67) bg_popup_window_pane_g4

0xdaff,	// (0x0002cf76) bg_popup_window_pane_g5_ParamLimits

0xdaff,	// (0x0002cf76) bg_popup_window_pane_g5

0xdb0f,	// (0x0002cf86) bg_popup_window_pane_g6_ParamLimits

0xdb0f,	// (0x0002cf86) bg_popup_window_pane_g6

0xdb1b,	// (0x0002cf92) bg_popup_window_pane_g7_ParamLimits

0xdb1b,	// (0x0002cf92) bg_popup_window_pane_g7

0xdb2a,	// (0x0002cfa1) bg_popup_window_pane_g8_ParamLimits

0xdb2a,	// (0x0002cfa1) bg_popup_window_pane_g8

0xdb39,	// (0x0002cfb0) bg_popup_window_pane_g9_ParamLimits

0xdb39,	// (0x0002cfb0) bg_popup_window_pane_g9

0x5df2,	// (0x00025269) bg_popup_window_pane_g10_ParamLimits

0x5df2,	// (0x00025269) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0002ed4d) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0002ed4d) bg_popup_window_pane_g

0x5d1b,	// (0x00025192) bg_popup_heading_pane_ParamLimits

0x5d1b,	// (0x00025192) bg_popup_heading_pane

0x2414,	// (0x0002188b) tabs_4_passive_pane_cp_srt_ParamLimits

0x2414,	// (0x0002188b) tabs_4_passive_pane_cp_srt

0x2426,	// (0x0002189d) tabs_4_passive_pane_srt_ParamLimits

0x5d2f,	// (0x000251a6) heading_pane_g2

0x2426,	// (0x0002189d) tabs_4_passive_pane_srt

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp3_srt

0x5d37,	// (0x000251ae) heading_pane_t1_ParamLimits

0x5d37,	// (0x000251ae) heading_pane_t1

0x5d4e,	// (0x000251c5) heading_pane_t2_ParamLimits

0x5d4e,	// (0x000251c5) heading_pane_t2

0x0001,

0xf8d1,	// (0x0002ed48) heading_pane_t_ParamLimits

0xf8d1,	// (0x0002ed48) heading_pane_t

0x5848,	// (0x00024cbf) bg_popup_heading_pane_g1

0x58f7,	// (0x00024d6e) bg_popup_heading_pane_g2

0x5901,	// (0x00024d78) bg_popup_heading_pane_g3

0x590b,	// (0x00024d82) bg_popup_heading_pane_g4

0x5915,	// (0x00024d8c) bg_popup_heading_pane_g5

0x591f,	// (0x00024d96) bg_popup_heading_pane_g6

0x5927,	// (0x00024d9e) bg_popup_heading_pane_g7

0x592f,	// (0x00024da6) bg_popup_heading_pane_g8

0x5939,	// (0x00024db0) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0002ed04) bg_popup_heading_pane_g

0x4f92,	// (0x00024409) bg_popup_sub_pane_g1

0x4f9a,	// (0x00024411) bg_popup_sub_pane_g2

0x4fa2,	// (0x00024419) bg_popup_sub_pane_g3

0x4faa,	// (0x00024421) bg_popup_sub_pane_g4

0x4fb2,	// (0x00024429) bg_popup_sub_pane_g5

0x4fba,	// (0x00024431) bg_popup_sub_pane_g6

0x4fc2,	// (0x00024439) bg_popup_sub_pane_g7

0x4fca,	// (0x00024441) bg_popup_sub_pane_g8

0x4fd2,	// (0x00024449) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0002ecde) bg_popup_sub_pane_g

0x34e4,	// (0x0002295b) bg_popup_window_pane_cp5_ParamLimits

0x34e4,	// (0x0002295b) bg_popup_window_pane_cp5

0x3500,	// (0x00022977) popup_note_window_g1_ParamLimits

0x3500,	// (0x00022977) popup_note_window_g1

0x350c,	// (0x00022983) popup_note_window_t1_ParamLimits

0x350c,	// (0x00022983) popup_note_window_t1

0x3522,	// (0x00022999) popup_note_window_t2_ParamLimits

0x3522,	// (0x00022999) popup_note_window_t2

0x3538,	// (0x000229af) popup_note_window_t3_ParamLimits

0x3538,	// (0x000229af) popup_note_window_t3

0x354e,	// (0x000229c5) popup_note_window_t4_ParamLimits

0x354e,	// (0x000229c5) popup_note_window_t4

0x3576,	// (0x000229ed) popup_note_window_t5_ParamLimits

0x3576,	// (0x000229ed) popup_note_window_t5

0x0004,

0xf585,	// (0x0002e9fc) popup_note_window_t_ParamLimits

0xf585,	// (0x0002e9fc) popup_note_window_t

0x359a,	// (0x00022a11) bg_popup_window_pane_cp6_ParamLimits

0x359a,	// (0x00022a11) bg_popup_window_pane_cp6

0x57c4,	// (0x00024c3b) popup_note_image_window_g1_ParamLimits

0x57c4,	// (0x00024c3b) popup_note_image_window_g1

0x57d0,	// (0x00024c47) popup_note_image_window_g2_ParamLimits

0x57d0,	// (0x00024c47) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0002ecd2) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0002ecd2) popup_note_image_window_g

0x57e9,	// (0x00024c60) popup_note_image_window_t1_ParamLimits

0x57e9,	// (0x00024c60) popup_note_image_window_t1

0x5802,	// (0x00024c79) popup_note_image_window_t2_ParamLimits

0x5802,	// (0x00024c79) popup_note_image_window_t2

0x581b,	// (0x00024c92) popup_note_image_window_t3_ParamLimits

0x581b,	// (0x00024c92) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0002ecd7) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0002ecd7) popup_note_image_window_t

0x5685,	// (0x00024afc) bg_popup_window_pane_cp7_ParamLimits

0x5685,	// (0x00024afc) bg_popup_window_pane_cp7

0x56b5,	// (0x00024b2c) popup_note_wait_window_g1_ParamLimits

0x56b5,	// (0x00024b2c) popup_note_wait_window_g1

0x56c1,	// (0x00024b38) popup_note_wait_window_g2_ParamLimits

0x56c1,	// (0x00024b38) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0002ecc0) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0002ecc0) popup_note_wait_window_g

0x56d9,	// (0x00024b50) popup_note_wait_window_t1_ParamLimits

0x56d9,	// (0x00024b50) popup_note_wait_window_t1

0x5700,	// (0x00024b77) popup_note_wait_window_t2_ParamLimits

0x5700,	// (0x00024b77) popup_note_wait_window_t2

0x571d,	// (0x00024b94) popup_note_wait_window_t3_ParamLimits

0x571d,	// (0x00024b94) popup_note_wait_window_t3

0x5730,	// (0x00024ba7) popup_note_wait_window_t4_ParamLimits

0x5730,	// (0x00024ba7) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0002ecc7) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0002ecc7) popup_note_wait_window_t

0x5755,	// (0x00024bcc) wait_bar_pane_ParamLimits

0x5755,	// (0x00024bcc) wait_bar_pane

0x3189,	// (0x00022600) wait_anim_pane

0x3189,	// (0x00022600) wait_border_pane

0x317f,	// (0x000225f6) wait_anim_pane_g1

0x317f,	// (0x000225f6) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002eb80) wait_anim_pane_g

0x5629,	// (0x00024aa0) wait_border_pane_g1

0x5634,	// (0x00024aab) wait_border_pane_g2

0x563d,	// (0x00024ab4) wait_border_pane_g3

0x0002,

0xf842,	// (0x0002ecb9) wait_border_pane_g

0x5494,	// (0x0002490b) bg_popup_window_pane_cp16_ParamLimits

0x5494,	// (0x0002490b) bg_popup_window_pane_cp16

0x5594,	// (0x00024a0b) indicator_popup_pane_cp4_ParamLimits

0x5594,	// (0x00024a0b) indicator_popup_pane_cp4

0x55a8,	// (0x00024a1f) popup_query_data_window_t1_ParamLimits

0x55a8,	// (0x00024a1f) popup_query_data_window_t1

0x55ba,	// (0x00024a31) popup_query_data_window_t2_ParamLimits

0x55ba,	// (0x00024a31) popup_query_data_window_t2

0x55d3,	// (0x00024a4a) popup_query_data_window_t3_ParamLimits

0x55d3,	// (0x00024a4a) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0002ecb2) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0002ecb2) popup_query_data_window_t

0x55ed,	// (0x00024a64) query_popup_data_pane_ParamLimits

0x55ed,	// (0x00024a64) query_popup_data_pane

0x5601,	// (0x00024a78) query_popup_data_pane_cp1_ParamLimits

0x5601,	// (0x00024a78) query_popup_data_pane_cp1

0x5494,	// (0x0002490b) bg_popup_window_pane_cp10_ParamLimits

0x5494,	// (0x0002490b) bg_popup_window_pane_cp10

0x54c6,	// (0x0002493d) indicator_popup_pane_ParamLimits

0x54c6,	// (0x0002493d) indicator_popup_pane

0x54e8,	// (0x0002495f) popup_query_code_window_t1_ParamLimits

0x54e8,	// (0x0002495f) popup_query_code_window_t1

0x5502,	// (0x00024979) popup_query_code_window_t2_ParamLimits

0x5502,	// (0x00024979) popup_query_code_window_t2

0x554b,	// (0x000249c2) popup_query_code_window_t3_ParamLimits

0x554b,	// (0x000249c2) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0002ecab) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0002ecab) popup_query_code_window_t

0x557a,	// (0x000249f1) query_popup_pane_ParamLimits

0x557a,	// (0x000249f1) query_popup_pane

0x359a,	// (0x00022a11) bg_popup_window_pane_cp15_ParamLimits

0x359a,	// (0x00022a11) bg_popup_window_pane_cp15

0x35b8,	// (0x00022a2f) indicator_popup_pane_cp1_ParamLimits

0x35b8,	// (0x00022a2f) indicator_popup_pane_cp1

0x35cb,	// (0x00022a42) indicator_popup_pane_cp2_ParamLimits

0x35cb,	// (0x00022a42) indicator_popup_pane_cp2

0x35de,	// (0x00022a55) popup_query_data_code_window_g1_ParamLimits

0x35de,	// (0x00022a55) popup_query_data_code_window_g1

0x35f1,	// (0x00022a68) popup_query_data_code_window_t1_ParamLimits

0x35f1,	// (0x00022a68) popup_query_data_code_window_t1

0x3603,	// (0x00022a7a) popup_query_data_code_window_t2_ParamLimits

0x3603,	// (0x00022a7a) popup_query_data_code_window_t2

0x3615,	// (0x00022a8c) popup_query_data_code_window_t3_ParamLimits

0x3615,	// (0x00022a8c) popup_query_data_code_window_t3

0x362b,	// (0x00022aa2) popup_query_data_code_window_t4_ParamLimits

0x362b,	// (0x00022aa2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002ea07) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002ea07) popup_query_data_code_window_t

0x212f,	// (0x000215a6) list_single_midp_graphic_pane_g3

0x3643,	// (0x00022aba) query_popup_data_pane_cp2_ParamLimits

0x3656,	// (0x00022acd) query_popup_pane_cp2_ParamLimits

0x3656,	// (0x00022acd) query_popup_pane_cp2

0x3189,	// (0x00022600) bg_popup_window_pane_cp11

0x548c,	// (0x00024903) heading_pane_cp5

0x373e,	// (0x00022bb5) listscroll_popup_info_pane

0x3189,	// (0x00022600) input_focus_pane_cp3

0x3669,	// (0x00022ae0) query_popup_pane_t1

0x3677,	// (0x00022aee) list_popup_info_pane_ParamLimits

0x3677,	// (0x00022aee) list_popup_info_pane

0x3686,	// (0x00022afd) listscroll_popup_info_pane_g1

0x368e,	// (0x00022b05) scroll_pane_cp7

0x3698,	// (0x00022b0f) popup_info_list_pane_t1_ParamLimits

0x3698,	// (0x00022b0f) popup_info_list_pane_t1

0x36b2,	// (0x00022b29) popup_info_list_pane_t2_ParamLimits

0x36b2,	// (0x00022b29) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002ea10) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002ea10) popup_info_list_pane_t

0x3189,	// (0x00022600) bg_popup_window_pane_cp12

0x6834,	// (0x00025cab) find_popup_pane

0x3269,	// (0x000226e0) bg_popup_window_pane_cp3

0x36cc,	// (0x00022b43) heading_pane_cp3

0x36d8,	// (0x00022b4f) listscroll_popup_graphic_pane

0x3189,	// (0x00022600) bg_popup_window_pane_cp4

0xd0d7,	// (0x0002c54e) heading_pane_cp4

0x373e,	// (0x00022bb5) listscroll_popup_colour_pane

0xd0df,	// (0x0002c556) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xd0df,	// (0x0002c556) cell_large_graphic_colour_none_popup_pane

0xd0f3,	// (0x0002c56a) grid_large_graphic_colour_popup_pane_ParamLimits

0xd0f3,	// (0x0002c56a) grid_large_graphic_colour_popup_pane

0xd117,	// (0x0002c58e) listscroll_popup_colour_pane_g1_ParamLimits

0xd117,	// (0x0002c58e) listscroll_popup_colour_pane_g1

0xd12e,	// (0x0002c5a5) listscroll_popup_colour_pane_g2_ParamLimits

0xd12e,	// (0x0002c5a5) listscroll_popup_colour_pane_g2

0xd145,	// (0x0002c5bc) listscroll_popup_colour_pane_g3_ParamLimits

0xd145,	// (0x0002c5bc) listscroll_popup_colour_pane_g3

0xd155,	// (0x0002c5cc) listscroll_popup_colour_pane_g4_ParamLimits

0xd155,	// (0x0002c5cc) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002ea15) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002ea15) listscroll_popup_colour_pane_g

0x37d8,	// (0x00022c4f) scroll_pane_cp6_ParamLimits

0x37d8,	// (0x00022c4f) scroll_pane_cp6

0xd165,	// (0x0002c5dc) cell_large_graphic_colour_popup_pane_ParamLimits

0xd165,	// (0x0002c5dc) cell_large_graphic_colour_popup_pane

0x3809,	// (0x00022c80) cell_large_graphic_colour_none_popup_pane_t1

0x3189,	// (0x00022600) grid_highlight_pane_cp5

0x3818,	// (0x00022c8f) cell_large_graphic_colour_popup_pane_g1

0x3820,	// (0x00022c97) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002ea1e) cell_large_graphic_colour_popup_pane_g

0x3828,	// (0x00022c9f) cell_large_graphic_colour_popup_pane_g2_copy1

0x3831,	// (0x00022ca8) grid_highlight_pane_cp4

0x3839,	// (0x00022cb0) bg_popup_window_pane_cp8_ParamLimits

0x3839,	// (0x00022cb0) bg_popup_window_pane_cp8

0x3854,	// (0x00022ccb) popup_snote_single_text_window_g1_ParamLimits

0x3854,	// (0x00022ccb) popup_snote_single_text_window_g1

0x3866,	// (0x00022cdd) popup_snote_single_text_window_t1_ParamLimits

0x3866,	// (0x00022cdd) popup_snote_single_text_window_t1

0x3879,	// (0x00022cf0) popup_snote_single_text_window_t2_ParamLimits

0x3879,	// (0x00022cf0) popup_snote_single_text_window_t2

0x388c,	// (0x00022d03) popup_snote_single_text_window_t3_ParamLimits

0x388c,	// (0x00022d03) popup_snote_single_text_window_t3

0x38c5,	// (0x00022d3c) popup_snote_single_text_window_t4_ParamLimits

0x38c5,	// (0x00022d3c) popup_snote_single_text_window_t4

0x38f9,	// (0x00022d70) popup_snote_single_text_window_t5_ParamLimits

0x38f9,	// (0x00022d70) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002ea23) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002ea23) popup_snote_single_text_window_t

0x3928,	// (0x00022d9f) bg_popup_window_pane_cp9_ParamLimits

0x3928,	// (0x00022d9f) bg_popup_window_pane_cp9

0x3854,	// (0x00022ccb) popup_snote_single_graphic_window_g1_ParamLimits

0x3854,	// (0x00022ccb) popup_snote_single_graphic_window_g1

0x3936,	// (0x00022dad) popup_snote_single_graphic_window_g2_ParamLimits

0x3936,	// (0x00022dad) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002ea2e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002ea2e) popup_snote_single_graphic_window_g

0x3942,	// (0x00022db9) popup_snote_single_graphic_window_t1_ParamLimits

0x3942,	// (0x00022db9) popup_snote_single_graphic_window_t1

0x3955,	// (0x00022dcc) popup_snote_single_graphic_window_t2_ParamLimits

0x3955,	// (0x00022dcc) popup_snote_single_graphic_window_t2

0x3968,	// (0x00022ddf) popup_snote_single_graphic_window_t3_ParamLimits

0x3968,	// (0x00022ddf) popup_snote_single_graphic_window_t3

0x39a1,	// (0x00022e18) popup_snote_single_graphic_window_t4_ParamLimits

0x39a1,	// (0x00022e18) popup_snote_single_graphic_window_t4

0x39d5,	// (0x00022e4c) popup_snote_single_graphic_window_t5_ParamLimits

0x39d5,	// (0x00022e4c) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002ea33) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002ea33) popup_snote_single_graphic_window_t

0x6778,	// (0x00025bef) grid_graphic_popup_pane_ParamLimits

0x6778,	// (0x00025bef) grid_graphic_popup_pane

0x67a0,	// (0x00025c17) listscroll_popup_graphic_pane_g1_ParamLimits

0x67a0,	// (0x00025c17) listscroll_popup_graphic_pane_g1

0xde21,	// (0x0002d298) listscroll_popup_graphic_pane_g2_ParamLimits

0xde21,	// (0x0002d298) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0002ee28) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0002ee28) listscroll_popup_graphic_pane_g

0x67c8,	// (0x00025c3f) scroll_pane_cp5

0xdde4,	// (0x0002d25b) cell_graphic_popup_pane_ParamLimits

0xdde4,	// (0x0002d25b) cell_graphic_popup_pane

0x6702,	// (0x00025b79) cell_graphic_popup_pane_g1

0x670a,	// (0x00025b81) cell_graphic_popup_pane_g2

0x3828,	// (0x00022c9f) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0002ee21) cell_graphic_popup_pane_g

0x6713,	// (0x00025b8a) cell_graphic_popup_pane_t2

0x3831,	// (0x00022ca8) grid_highlight_pane_cp3

0x3a16,	// (0x00022e8d) list_gen_pane_ParamLimits

0x3a16,	// (0x00022e8d) list_gen_pane

0x3a48,	// (0x00022ebf) scroll_pane

0xdd9b,	// (0x0002d212) bg_list_pane_g1_ParamLimits

0xdd9b,	// (0x0002d212) bg_list_pane_g1

0x6677,	// (0x00025aee) bg_list_pane_g2_ParamLimits

0x6677,	// (0x00025aee) bg_list_pane_g2

0x668c,	// (0x00025b03) bg_list_pane_g3_ParamLimits

0x668c,	// (0x00025b03) bg_list_pane_g3

0x66a0,	// (0x00025b17) bg_list_pane_g4_ParamLimits

0x66a0,	// (0x00025b17) bg_list_pane_g4

0xddb8,	// (0x0002d22f) bg_list_pane_g5_ParamLimits

0xddb8,	// (0x0002d22f) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0002ee16) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0002ee16) bg_list_pane_g

0xdd63,	// (0x0002d1da) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double2_graphic_large_graphic_pane

0xdd63,	// (0x0002d1da) list_double2_graphic_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double2_graphic_pane

0xdd63,	// (0x0002d1da) list_double2_large_graphic_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double2_large_graphic_pane

0xdd63,	// (0x0002d1da) list_double2_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double2_pane

0xdd63,	// (0x0002d1da) list_double_graphic_heading_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_graphic_heading_pane

0xdd63,	// (0x0002d1da) list_double_graphic_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_graphic_pane

0xdd63,	// (0x0002d1da) list_double_heading_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_heading_pane

0xdd63,	// (0x0002d1da) list_double_large_graphic_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_large_graphic_pane

0xdd63,	// (0x0002d1da) list_double_number_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_number_pane

0xdd63,	// (0x0002d1da) list_double_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_pane

0xdd63,	// (0x0002d1da) list_double_time_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_double_time_pane

0xdd63,	// (0x0002d1da) list_setting_number_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_setting_number_pane

0xdd63,	// (0x0002d1da) list_setting_pane_ParamLimits

0xdd63,	// (0x0002d1da) list_setting_pane

0xdd75,	// (0x0002d1ec) list_single_2graphic_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_2graphic_pane

0xdd75,	// (0x0002d1ec) list_single_graphic_heading_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_graphic_heading_pane

0xdd75,	// (0x0002d1ec) list_single_graphic_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_graphic_pane

0xdd75,	// (0x0002d1ec) list_single_heading_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_heading_pane

0xdd75,	// (0x0002d1ec) list_single_large_graphic_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_large_graphic_pane

0xdd75,	// (0x0002d1ec) list_single_number_heading_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_number_heading_pane

0xdd75,	// (0x0002d1ec) list_single_number_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_number_pane

0xdd75,	// (0x0002d1ec) list_single_pane_ParamLimits

0xdd75,	// (0x0002d1ec) list_single_pane

0x3189,	// (0x00022600) list_highlight_pane_cp1

0x089a,	// (0x0001fd11) list_single_pane_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_pane_g1

0x08a6,	// (0x0001fd1d) list_single_pane_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_pane_g

0x0b13,	// (0x0001ff8a) list_single_pane_t1_ParamLimits

0x0b13,	// (0x0001ff8a) list_single_pane_t1

0x089a,	// (0x0001fd11) list_single_number_pane_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_number_pane_g1

0x08a6,	// (0x0001fd1d) list_single_number_pane_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_number_pane_g

0x0912,	// (0x0001fd89) list_single_number_pane_t1_ParamLimits

0x0912,	// (0x0001fd89) list_single_number_pane_t1

0xbac1,	// (0x0002af38) list_single_number_pane_t2_ParamLimits

0xbac1,	// (0x0002af38) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0002edd7) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0002edd7) list_single_number_pane_t

0x0f27,	// (0x0002039e) list_single_graphic_pane_g1_ParamLimits

0x0f27,	// (0x0002039e) list_single_graphic_pane_g1

0x089a,	// (0x0001fd11) list_single_graphic_pane_g2_ParamLimits

0x089a,	// (0x0001fd11) list_single_graphic_pane_g2

0x08a6,	// (0x0001fd1d) list_single_graphic_pane_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002ea3e) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002ea3e) list_single_graphic_pane_g

0xb4e7,	// (0x0002a95e) list_single_graphic_pane_t1_ParamLimits

0xb4e7,	// (0x0002a95e) list_single_graphic_pane_t1

0x089a,	// (0x0001fd11) list_single_heading_pane_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_heading_pane_g1

0x08a6,	// (0x0001fd1d) list_single_heading_pane_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_heading_pane_g

0x0b35,	// (0x0001ffac) list_single_heading_pane_t1_ParamLimits

0x0b35,	// (0x0001ffac) list_single_heading_pane_t1

0xb4fd,	// (0x0002a974) list_single_heading_pane_t2_ParamLimits

0xb4fd,	// (0x0002a974) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002ea4a) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002ea4a) list_single_heading_pane_t

0x089a,	// (0x0001fd11) list_single_number_heading_pane_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_number_heading_pane_g1

0x08a6,	// (0x0001fd1d) list_single_number_heading_pane_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_number_heading_pane_g

0x0b35,	// (0x0001ffac) list_single_number_heading_pane_t1_ParamLimits

0x0b35,	// (0x0001ffac) list_single_number_heading_pane_t1

0xb50f,	// (0x0002a986) list_single_number_heading_pane_t2_ParamLimits

0xb50f,	// (0x0002a986) list_single_number_heading_pane_t2

0x0aed,	// (0x0001ff64) list_single_number_heading_pane_t3_ParamLimits

0x0aed,	// (0x0001ff64) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002ea4f) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002ea4f) list_single_number_heading_pane_t

0x088e,	// (0x0001fd05) list_single_graphic_heading_pane_g1_ParamLimits

0x088e,	// (0x0001fd05) list_single_graphic_heading_pane_g1

0xb521,	// (0x0002a998) list_single_graphic_heading_pane_g4_ParamLimits

0xb521,	// (0x0002a998) list_single_graphic_heading_pane_g4

0x08a6,	// (0x0001fd1d) list_single_graphic_heading_pane_g5_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002ea56) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002ea56) list_single_graphic_heading_pane_g

0x0b35,	// (0x0001ffac) list_single_graphic_heading_pane_t1_ParamLimits

0x0b35,	// (0x0001ffac) list_single_graphic_heading_pane_t1

0xb532,	// (0x0002a9a9) list_single_graphic_heading_pane_t2_ParamLimits

0xb532,	// (0x0002a9a9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002ea5d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002ea5d) list_single_graphic_heading_pane_t

0x0b29,	// (0x0001ffa0) list_single_large_graphic_pane_g1_ParamLimits

0x0b29,	// (0x0001ffa0) list_single_large_graphic_pane_g1

0x089a,	// (0x0001fd11) list_single_large_graphic_pane_g2_ParamLimits

0x089a,	// (0x0001fd11) list_single_large_graphic_pane_g2

0x08a6,	// (0x0001fd1d) list_single_large_graphic_pane_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002ea62) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002ea62) list_single_large_graphic_pane_g

0x5634,	// (0x00024aab) wait_border_pane_g2_copy1

0xb544,	// (0x0002a9bb) list_single_large_graphic_pane_g4_cp2

0x0b35,	// (0x0001ffac) list_single_large_graphic_pane_t1_ParamLimits

0x0b35,	// (0x0001ffac) list_single_large_graphic_pane_t1

0x0d59,	// (0x000201d0) list_double_pane_g1_ParamLimits

0x0d59,	// (0x000201d0) list_double_pane_g1

0xb54c,	// (0x0002a9c3) list_double_pane_g2_ParamLimits

0xb54c,	// (0x0002a9c3) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002ea69) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002ea69) list_double_pane_g

0xb558,	// (0x0002a9cf) list_double_pane_t1_ParamLimits

0xb558,	// (0x0002a9cf) list_double_pane_t1

0xb56e,	// (0x0002a9e5) list_double_pane_t2_ParamLimits

0xb56e,	// (0x0002a9e5) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002ea6e) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002ea6e) list_double_pane_t

0xb580,	// (0x0002a9f7) list_double2_pane_g1_ParamLimits

0xb580,	// (0x0002a9f7) list_double2_pane_g1

0x03ef,	// (0x0001f866) list_double2_pane_g2_ParamLimits

0x03ef,	// (0x0001f866) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002ea73) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002ea73) list_double2_pane_g

0xb591,	// (0x0002aa08) list_double2_pane_t1_ParamLimits

0xb591,	// (0x0002aa08) list_double2_pane_t1

0xb5a7,	// (0x0002aa1e) list_double2_pane_t2_ParamLimits

0xb5a7,	// (0x0002aa1e) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002ea78) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002ea78) list_double2_pane_t

0x0d59,	// (0x000201d0) list_double_number_pane_g1_ParamLimits

0x0d59,	// (0x000201d0) list_double_number_pane_g1

0xb54c,	// (0x0002a9c3) list_double_number_pane_g2_ParamLimits

0xb54c,	// (0x0002a9c3) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002ea69) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002ea69) list_double_number_pane_g

0xb5b9,	// (0x0002aa30) list_double_number_pane_t1_ParamLimits

0xb5b9,	// (0x0002aa30) list_double_number_pane_t1

0xb5cb,	// (0x0002aa42) list_double_number_pane_t2_ParamLimits

0xb5cb,	// (0x0002aa42) list_double_number_pane_t2

0xb5e1,	// (0x0002aa58) list_double_number_pane_t3_ParamLimits

0xb5e1,	// (0x0002aa58) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002ea7d) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002ea7d) list_double_number_pane_t

0xb5f3,	// (0x0002aa6a) list_double_graphic_pane_g1_ParamLimits

0xb5f3,	// (0x0002aa6a) list_double_graphic_pane_g1

0xb5ff,	// (0x0002aa76) list_double_graphic_pane_g2_ParamLimits

0xb5ff,	// (0x0002aa76) list_double_graphic_pane_g2

0xb60e,	// (0x0002aa85) list_double_graphic_pane_g3_ParamLimits

0xb60e,	// (0x0002aa85) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002ea84) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002ea84) list_double_graphic_pane_g

0xb626,	// (0x0002aa9d) list_double_graphic_pane_t1_ParamLimits

0xb626,	// (0x0002aa9d) list_double_graphic_pane_t1

0xb63c,	// (0x0002aab3) list_double_graphic_pane_t2_ParamLimits

0xb63c,	// (0x0002aab3) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002ea8d) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002ea8d) list_double_graphic_pane_t

0xb64e,	// (0x0002aac5) list_double2_graphic_pane_g1_ParamLimits

0xb64e,	// (0x0002aac5) list_double2_graphic_pane_g1

0xb65a,	// (0x0002aad1) list_double2_graphic_pane_g2_ParamLimits

0xb65a,	// (0x0002aad1) list_double2_graphic_pane_g2

0x03ef,	// (0x0001f866) list_double2_graphic_pane_g3_ParamLimits

0x03ef,	// (0x0001f866) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002ea92) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002ea92) list_double2_graphic_pane_g

0xb666,	// (0x0002aadd) list_double2_graphic_pane_t1_ParamLimits

0xb666,	// (0x0002aadd) list_double2_graphic_pane_t1

0xb67c,	// (0x0002aaf3) list_double2_graphic_pane_t2_ParamLimits

0xb67c,	// (0x0002aaf3) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002ea99) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002ea99) list_double2_graphic_pane_t

0xb68e,	// (0x0002ab05) list_double_large_graphic_pane_g1_ParamLimits

0xb68e,	// (0x0002ab05) list_double_large_graphic_pane_g1

0xb6b9,	// (0x0002ab30) list_double_large_graphic_pane_g2_ParamLimits

0xb6b9,	// (0x0002ab30) list_double_large_graphic_pane_g2

0xb54c,	// (0x0002a9c3) list_double_large_graphic_pane_g3_ParamLimits

0xb54c,	// (0x0002a9c3) list_double_large_graphic_pane_g3

0xb6ca,	// (0x0002ab41) list_double_large_graphic_pane_g4_ParamLimits

0xb6ca,	// (0x0002ab41) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002ea9e) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002ea9e) list_double_large_graphic_pane_g

0xb6dc,	// (0x0002ab53) list_double_large_graphic_pane_t1_ParamLimits

0xb6dc,	// (0x0002ab53) list_double_large_graphic_pane_t1

0xb6f5,	// (0x0002ab6c) list_double_large_graphic_pane_t2_ParamLimits

0xb6f5,	// (0x0002ab6c) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002eaa9) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002eaa9) list_double_large_graphic_pane_t

0xb707,	// (0x0002ab7e) list_double2_large_graphic_pane_g1_ParamLimits

0xb707,	// (0x0002ab7e) list_double2_large_graphic_pane_g1

0xb580,	// (0x0002a9f7) list_double2_large_graphic_pane_g2_ParamLimits

0xb580,	// (0x0002a9f7) list_double2_large_graphic_pane_g2

0x03ef,	// (0x0001f866) list_double2_large_graphic_pane_g3_ParamLimits

0x03ef,	// (0x0001f866) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002eaae) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002eaae) list_double2_large_graphic_pane_g

0xb713,	// (0x0002ab8a) list_double2_large_graphic_pane_t1_ParamLimits

0xb713,	// (0x0002ab8a) list_double2_large_graphic_pane_t1

0xb729,	// (0x0002aba0) list_double2_large_graphic_pane_t2_ParamLimits

0xb729,	// (0x0002aba0) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002eab5) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002eab5) list_double2_large_graphic_pane_t

0xb73b,	// (0x0002abb2) list_double_heading_pane_g1_ParamLimits

0xb73b,	// (0x0002abb2) list_double_heading_pane_g1

0x01fa,	// (0x0001f671) list_double_heading_pane_g2_ParamLimits

0x01fa,	// (0x0001f671) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002eaba) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002eaba) list_double_heading_pane_g

0xb74c,	// (0x0002abc3) list_double_heading_pane_t1_ParamLimits

0xb74c,	// (0x0002abc3) list_double_heading_pane_t1

0xb5a7,	// (0x0002aa1e) list_double_heading_pane_t2_ParamLimits

0xb5a7,	// (0x0002aa1e) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002eabf) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002eabf) list_double_heading_pane_t

0xb5f3,	// (0x0002aa6a) list_double_graphic_heading_pane_g1_ParamLimits

0xb5f3,	// (0x0002aa6a) list_double_graphic_heading_pane_g1

0xb73b,	// (0x0002abb2) list_double_graphic_heading_pane_g2_ParamLimits

0xb73b,	// (0x0002abb2) list_double_graphic_heading_pane_g2

0x01fa,	// (0x0001f671) list_double_graphic_heading_pane_g3_ParamLimits

0x01fa,	// (0x0001f671) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002eac4) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002eac4) list_double_graphic_heading_pane_g

0xb762,	// (0x0002abd9) list_double_graphic_heading_pane_t1_ParamLimits

0xb762,	// (0x0002abd9) list_double_graphic_heading_pane_t1

0xb67c,	// (0x0002aaf3) list_double_graphic_heading_pane_t2_ParamLimits

0xb67c,	// (0x0002aaf3) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002eacb) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002eacb) list_double_graphic_heading_pane_t

0xb6b9,	// (0x0002ab30) list_double_time_pane_g1_ParamLimits

0xb6b9,	// (0x0002ab30) list_double_time_pane_g1

0xb54c,	// (0x0002a9c3) list_double_time_pane_g2_ParamLimits

0xb54c,	// (0x0002a9c3) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002ead0) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002ead0) list_double_time_pane_g

0xb778,	// (0x0002abef) list_double_time_pane_t1_ParamLimits

0xb778,	// (0x0002abef) list_double_time_pane_t1

0xb78e,	// (0x0002ac05) list_double_time_pane_t2_ParamLimits

0xb78e,	// (0x0002ac05) list_double_time_pane_t2

0xb7a0,	// (0x0002ac17) list_double_time_pane_t3_ParamLimits

0xb7a0,	// (0x0002ac17) list_double_time_pane_t3

0xb7b2,	// (0x0002ac29) list_double_time_pane_t4_ParamLimits

0xb7b2,	// (0x0002ac29) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002ead5) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002ead5) list_double_time_pane_t

0xb65a,	// (0x0002aad1) list_setting_pane_g1_ParamLimits

0xb65a,	// (0x0002aad1) list_setting_pane_g1

0x03ef,	// (0x0001f866) list_setting_pane_g2_ParamLimits

0x03ef,	// (0x0001f866) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002eade) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002eade) list_setting_pane_g

0xb7c4,	// (0x0002ac3b) list_setting_pane_t1_ParamLimits

0xb7c4,	// (0x0002ac3b) list_setting_pane_t1

0xb7de,	// (0x0002ac55) list_setting_pane_t2_ParamLimits

0xb7de,	// (0x0002ac55) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002eae3) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002eae3) list_setting_pane_t

0xb81d,	// (0x0002ac94) set_value_pane_cp_ParamLimits

0xb81d,	// (0x0002ac94) set_value_pane_cp

0xb829,	// (0x0002aca0) list_setting_number_pane_g1_ParamLimits

0xb829,	// (0x0002aca0) list_setting_number_pane_g1

0xb835,	// (0x0002acac) list_setting_number_pane_g2_ParamLimits

0xb835,	// (0x0002acac) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002eaea) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002eaea) list_setting_number_pane_g

0xb841,	// (0x0002acb8) list_setting_number_pane_t1_ParamLimits

0xb841,	// (0x0002acb8) list_setting_number_pane_t1

0xb85a,	// (0x0002acd1) list_setting_number_pane_t2_ParamLimits

0xb85a,	// (0x0002acd1) list_setting_number_pane_t2

0xb874,	// (0x0002aceb) list_setting_number_pane_t3_ParamLimits

0xb874,	// (0x0002aceb) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002eaef) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002eaef) list_setting_number_pane_t

0xb81d,	// (0x0002ac94) set_value_pane_ParamLimits

0xb81d,	// (0x0002ac94) set_value_pane

0x3a7c,	// (0x00022ef3) bg_set_opt_pane_ParamLimits

0x3a7c,	// (0x00022ef3) bg_set_opt_pane

0x0578,	// (0x0001f9ef) set_value_pane_t1

0x3a9d,	// (0x00022f14) slider_set_pane_cp3

0x3aa6,	// (0x00022f1d) volume_small_pane_cp

0x3aaf,	// (0x00022f26) list_form_gen_pane

0x3ab8,	// (0x00022f2f) scroll_pane_cp8

0xb8b7,	// (0x0002ad2e) form_field_data_pane_ParamLimits

0xb8b7,	// (0x0002ad2e) form_field_data_pane

0xb8ce,	// (0x0002ad45) form_field_data_wide_pane_ParamLimits

0xb8ce,	// (0x0002ad45) form_field_data_wide_pane

0xb8ee,	// (0x0002ad65) form_field_popup_pane_ParamLimits

0xb8ee,	// (0x0002ad65) form_field_popup_pane

0xb906,	// (0x0002ad7d) form_field_popup_wide_pane_ParamLimits

0xb906,	// (0x0002ad7d) form_field_popup_wide_pane

0x060c,	// (0x0001fa83) form_field_slider_pane_ParamLimits

0x060c,	// (0x0001fa83) form_field_slider_pane

0x061f,	// (0x0001fa96) form_field_slider_wide_pane_ParamLimits

0x061f,	// (0x0001fa96) form_field_slider_wide_pane

0x3ac9,	// (0x00022f40) data_form_pane

0xb927,	// (0x0002ad9e) form_field_data_pane_t1

0x3ad5,	// (0x00022f4c) input_focus_pane

0x3ae3,	// (0x00022f5a) data_form_wide_pane

0x0660,	// (0x0001fad7) form_field_data_wide_pane_t1

0x3846,	// (0x00022cbd) input_focus_pane_cp6

0xb941,	// (0x0002adb8) form_field_popup_pane_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_cp7

0x3b0f,	// (0x00022f86) list_form_pane

0x06a2,	// (0x0001fb19) form_field_popup_wide_pane_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_cp8

0x3b1b,	// (0x00022f92) list_form_wide_pane

0xb963,	// (0x0002adda) form_field_slider_pane_t1_ParamLimits

0xb963,	// (0x0002adda) form_field_slider_pane_t1

0xb97b,	// (0x0002adf2) form_field_slider_pane_t2_ParamLimits

0xb97b,	// (0x0002adf2) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002eaff) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002eaff) form_field_slider_pane_t

0x34e4,	// (0x0002295b) input_focus_pane_cp9_ParamLimits

0x34e4,	// (0x0002295b) input_focus_pane_cp9

0xb990,	// (0x0002ae07) slider_cont_pane_ParamLimits

0xb990,	// (0x0002ae07) slider_cont_pane

0x3b2a,	// (0x00022fa1) form_field_slider_wide_pane_t1_ParamLimits

0x3b2a,	// (0x00022fa1) form_field_slider_wide_pane_t1

0x06fe,	// (0x0001fb75) form_field_slider_wide_pane_t2_ParamLimits

0x06fe,	// (0x0001fb75) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002eb04) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002eb04) form_field_slider_wide_pane_t

0x34e4,	// (0x0002295b) input_focus_pane_cp10_ParamLimits

0x34e4,	// (0x0002295b) input_focus_pane_cp10

0xb9a4,	// (0x0002ae1b) slider_cont_pane_cp1_ParamLimits

0xb9a4,	// (0x0002ae1b) slider_cont_pane_cp1

0xb9b8,	// (0x0002ae2f) slider_form_pane_cp

0x3b3c,	// (0x00022fb3) input_focus_pane_g1

0x3b44,	// (0x00022fbb) input_focus_pane_g2

0x3b4c,	// (0x00022fc3) input_focus_pane_g3

0x3b54,	// (0x00022fcb) input_focus_pane_g4

0x3b5c,	// (0x00022fd3) input_focus_pane_g5

0x3b64,	// (0x00022fdb) input_focus_pane_g6

0x3b6c,	// (0x00022fe3) input_focus_pane_g7

0x3b74,	// (0x00022feb) input_focus_pane_g8

0x3b7c,	// (0x00022ff3) input_focus_pane_g9

0x317f,	// (0x000225f6) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002eb09) input_focus_pane_g

0x563d,	// (0x00024ab4) wait_border_pane_g3_copy1

0xb9c0,	// (0x0002ae37) data_form_pane_t1

0x317f,	// (0x000225f6) wait_anim_pane_g1_copy1

0xbad3,	// (0x0002af4a) data_form_wide_pane_t1

0x6b88,	// (0x00025fff) list_form_graphic_pane_cp_ParamLimits

0x6b88,	// (0x00025fff) list_form_graphic_pane_cp

0x65b5,	// (0x00025a2c) slider_form_pane_g1

0x65be,	// (0x00025a35) slider_form_pane_g2

0x0006,

0xf990,	// (0x0002ee07) slider_form_pane_g

0x6b88,	// (0x00025fff) list_form_graphic_pane_ParamLimits

0x6b88,	// (0x00025fff) list_form_graphic_pane

0x077c,	// (0x0001fbf3) list_form_graphic_pane_g1

0x0784,	// (0x0001fbfb) list_form_graphic_pane_t1_ParamLimits

0x0784,	// (0x0001fbfb) list_form_graphic_pane_t1

0x3269,	// (0x000226e0) list_highlight_pane_cp5_ParamLimits

0x3269,	// (0x000226e0) list_highlight_pane_cp5

0xb9da,	// (0x0002ae51) find_pane_g1

0x3b84,	// (0x00022ffb) input_find_pane

0xb9e3,	// (0x0002ae5a) input_find_pane_g1_ParamLimits

0xb9e3,	// (0x0002ae5a) input_find_pane_g1

0xb9ef,	// (0x0002ae66) input_find_pane_t1_ParamLimits

0xb9ef,	// (0x0002ae66) input_find_pane_t1

0xba04,	// (0x0002ae7b) input_find_pane_t2_ParamLimits

0xba04,	// (0x0002ae7b) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002eb1e) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002eb1e) input_find_pane_t

0x3b8d,	// (0x00023004) input_focus_pane_cp5_ParamLimits

0x3b8d,	// (0x00023004) input_focus_pane_cp5

0x3ba7,	// (0x0002301e) bg_popup_window_pane_cp2_ParamLimits

0x3ba7,	// (0x0002301e) bg_popup_window_pane_cp2

0x3bb4,	// (0x0002302b) listscroll_menu_pane_ParamLimits

0x3bb4,	// (0x0002302b) listscroll_menu_pane

0xd19a,	// (0x0002c611) popup_submenu_window_ParamLimits

0xd19a,	// (0x0002c611) popup_submenu_window

0x3bec,	// (0x00023063) find_popup_pane_g1

0x3bf4,	// (0x0002306b) input_popup_find_pane_cp

0x3b8d,	// (0x00023004) input_focus_pane_cp4_ParamLimits

0x3b8d,	// (0x00023004) input_focus_pane_cp4

0x3c0a,	// (0x00023081) input_popup_find_pane_t1_ParamLimits

0x3c0a,	// (0x00023081) input_popup_find_pane_t1

0x3189,	// (0x00022600) bg_popup_sub_pane_cp

0x3c38,	// (0x000230af) listscroll_popup_sub_pane

0x3c40,	// (0x000230b7) list_submenu_pane_ParamLimits

0x3c40,	// (0x000230b7) list_submenu_pane

0x3c51,	// (0x000230c8) scroll_pane_cp4

0x3c59,	// (0x000230d0) list_single_popup_submenu_pane_ParamLimits

0x3c59,	// (0x000230d0) list_single_popup_submenu_pane

0x3c6d,	// (0x000230e4) list_single_popup_submenu_pane_g1

0x3c75,	// (0x000230ec) list_single_popup_submenu_pane_t1_ParamLimits

0x3c75,	// (0x000230ec) list_single_popup_submenu_pane_t1

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp1_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp1

0xd1d4,	// (0x0002c64b) tabs_2_active_pane_g1

0xd1dc,	// (0x0002c653) tabs_2_active_pane_t1

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp1_ParamLimits

0x34e4,	// (0x0002295b) bg_passive_tab_pane_cp1

0xd1d4,	// (0x0002c64b) tabs_2_passive_pane_g1

0xd1dc,	// (0x0002c653) tabs_2_passive_pane_t1

0x3269,	// (0x000226e0) bg_active_tab_pane_cp4

0xd1ee,	// (0x0002c665) tabs_2_long_active_pane_t1

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp4

0x4fda,	// (0x00024451) list_single_midp_graphic_pane_g4_ParamLimits

0x3269,	// (0x000226e0) bg_active_tab_pane_cp5

0xd201,	// (0x0002c678) tabs_3_long_active_pane_t1

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp5

0x4fda,	// (0x00024451) list_single_midp_graphic_pane_g4

0x3269,	// (0x000226e0) bg_popup_window_pane_cp13_ParamLimits

0x3269,	// (0x000226e0) bg_popup_window_pane_cp13

0x3cec,	// (0x00023163) listscroll_popup_fast_pane_ParamLimits

0x3cec,	// (0x00023163) listscroll_popup_fast_pane

0x3cfb,	// (0x00023172) grid_popup_fast_pane_ParamLimits

0x3cfb,	// (0x00023172) grid_popup_fast_pane

0x3d0d,	// (0x00023184) scroll_pane_cp9_ParamLimits

0x3d0d,	// (0x00023184) scroll_pane_cp9

0x7ee7,	// (0x0002735e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ee7,	// (0x0002735e) list_single_graphic_hl_pane_t1_cp2

0x3d31,	// (0x000231a8) input_focus_pane_cp20_ParamLimits

0x3d31,	// (0x000231a8) input_focus_pane_cp20

0x3d3f,	// (0x000231b6) query_popup_data_pane_t1_ParamLimits

0x3d3f,	// (0x000231b6) query_popup_data_pane_t1

0x3d52,	// (0x000231c9) query_popup_data_pane_t2_ParamLimits

0x3d52,	// (0x000231c9) query_popup_data_pane_t2

0x3d98,	// (0x0002320f) query_popup_data_pane_t3_ParamLimits

0x3d98,	// (0x0002320f) query_popup_data_pane_t3

0x3dd9,	// (0x00023250) query_popup_data_pane_t4_ParamLimits

0x3dd9,	// (0x00023250) query_popup_data_pane_t4

0x3e15,	// (0x0002328c) query_popup_data_pane_t5_ParamLimits

0x3e15,	// (0x0002328c) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002eb23) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002eb23) query_popup_data_pane_t

0x3b3c,	// (0x00022fb3) bg_set_opt_pane_g1

0x3b44,	// (0x00022fbb) bg_set_opt_pane_g2

0x3b4c,	// (0x00022fc3) bg_set_opt_pane_g3

0x3b54,	// (0x00022fcb) bg_set_opt_pane_g4

0x3b5c,	// (0x00022fd3) bg_set_opt_pane_g5

0x3b64,	// (0x00022fdb) bg_set_opt_pane_g6

0x3b6c,	// (0x00022fe3) bg_set_opt_pane_g7

0x3b74,	// (0x00022feb) bg_set_opt_pane_g8

0x3b7c,	// (0x00022ff3) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002eb2e) bg_set_opt_pane_g

0x17f5,	// (0x00020c6c) control_top_pane_stacon_ParamLimits

0x17f5,	// (0x00020c6c) control_top_pane_stacon

0x1848,	// (0x00020cbf) signal_pane_stacon_ParamLimits

0x1848,	// (0x00020cbf) signal_pane_stacon

0x43f6,	// (0x0002386d) stacon_top_pane_g1_ParamLimits

0x43f6,	// (0x0002386d) stacon_top_pane_g1

0x186d,	// (0x00020ce4) title_pane_stacon_ParamLimits

0x186d,	// (0x00020ce4) title_pane_stacon

0x1897,	// (0x00020d0e) uni_indicator_pane_stacon_ParamLimits

0x1897,	// (0x00020d0e) uni_indicator_pane_stacon

0x18ac,	// (0x00020d23) battery_pane_stacon_ParamLimits

0x18ac,	// (0x00020d23) battery_pane_stacon

0x18f0,	// (0x00020d67) control_bottom_pane_stacon_ParamLimits

0x18f0,	// (0x00020d67) control_bottom_pane_stacon

0x1913,	// (0x00020d8a) navi_pane_stacon_ParamLimits

0x1913,	// (0x00020d8a) navi_pane_stacon

0x4418,	// (0x0002388f) stacon_bottom_pane_g1_ParamLimits

0x4418,	// (0x0002388f) stacon_bottom_pane_g1

0x1556,	// (0x000209cd) aid_levels_signal_lsc_ParamLimits

0x1556,	// (0x000209cd) aid_levels_signal_lsc

0x156d,	// (0x000209e4) signal_pane_stacon_g1_ParamLimits

0x156d,	// (0x000209e4) signal_pane_stacon_g1

0x1581,	// (0x000209f8) signal_pane_stacon_g2_ParamLimits

0x1581,	// (0x000209f8) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002eb41) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002eb41) signal_pane_stacon_g

0x15b6,	// (0x00020a2d) title_pane_stacon_t1_ParamLimits

0x15b6,	// (0x00020a2d) title_pane_stacon_t1

0x3e59,	// (0x000232d0) uni_indicator_pane_stacon_g1

0x3e63,	// (0x000232da) uni_indicator_pane_stacon_g2

0x3e6d,	// (0x000232e4) uni_indicator_pane_stacon_g3

0x3e77,	// (0x000232ee) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002eb4d) uni_indicator_pane_stacon_g

0x15db,	// (0x00020a52) control_top_pane_stacon_g1

0x15e3,	// (0x00020a5a) control_top_pane_stacon_t1_ParamLimits

0x15e3,	// (0x00020a5a) control_top_pane_stacon_t1

0x161a,	// (0x00020a91) aid_levels_battery_lsc_ParamLimits

0x161a,	// (0x00020a91) aid_levels_battery_lsc

0x1632,	// (0x00020aa9) battery_pane_stacon_g1_ParamLimits

0x1632,	// (0x00020aa9) battery_pane_stacon_g1

0x1645,	// (0x00020abc) battery_pane_stacon_g2_ParamLimits

0x1645,	// (0x00020abc) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002eb56) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002eb56) battery_pane_stacon_g

0x1683,	// (0x00020afa) navi_icon_pane_stacon

0x1697,	// (0x00020b0e) navi_navi_pane_stacon

0x1683,	// (0x00020afa) navi_text_pane_stacon

0x15db,	// (0x00020a52) control_bottom_pane_stacon_g1

0x16ab,	// (0x00020b22) control_bottom_pane_stacon_t1_ParamLimits

0x16ab,	// (0x00020b22) control_bottom_pane_stacon_t1

0xd213,	// (0x0002c68a) grid_app_pane_ParamLimits

0xd213,	// (0x0002c68a) grid_app_pane

0xd24b,	// (0x0002c6c2) scroll_pane_cp15_ParamLimits

0xd24b,	// (0x0002c6c2) scroll_pane_cp15

0xd264,	// (0x0002c6db) cell_app_pane_ParamLimits

0xd264,	// (0x0002c6db) cell_app_pane

0xd2a9,	// (0x0002c720) cell_app_pane_g1_ParamLimits

0xd2a9,	// (0x0002c720) cell_app_pane_g1

0x3f18,	// (0x0002338f) cell_app_pane_g2_ParamLimits

0x3f18,	// (0x0002338f) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002eb5b) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002eb5b) cell_app_pane_g

0xd2c9,	// (0x0002c740) cell_app_pane_t1_ParamLimits

0xd2c9,	// (0x0002c740) cell_app_pane_t1

0x3f3b,	// (0x000233b2) grid_highlight_pane_ParamLimits

0x3f3b,	// (0x000233b2) grid_highlight_pane

0x3b3c,	// (0x00022fb3) cell_highlight_pane_g1

0x3b44,	// (0x00022fbb) cell_highlight_pane_g2

0x3b4c,	// (0x00022fc3) cell_highlight_pane_g3

0x3b54,	// (0x00022fcb) cell_highlight_pane_g4

0x3b5c,	// (0x00022fd3) cell_highlight_pane_g5

0x3b64,	// (0x00022fdb) cell_highlight_pane_g6

0x3b6c,	// (0x00022fe3) cell_highlight_pane_g7

0x3b74,	// (0x00022feb) cell_highlight_pane_g8

0x3b7c,	// (0x00022ff3) cell_highlight_pane_g9

0x317f,	// (0x000225f6) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002eb09) cell_highlight_pane_g

0x3f4c,	// (0x000233c3) bg_scroll_pane

0x16f5,	// (0x00020b6c) scroll_handle_pane

0x3f93,	// (0x0002340a) scroll_bg_pane_g1

0x3fa8,	// (0x0002341f) scroll_bg_pane_g2

0x3fc0,	// (0x00023437) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002eb60) scroll_bg_pane_g

0x3fd5,	// (0x0002344c) scroll_handle_focus_pane_ParamLimits

0x3fd5,	// (0x0002344c) scroll_handle_focus_pane

0x3f93,	// (0x0002340a) scroll_handle_pane_g1

0x3fe2,	// (0x00023459) scroll_handle_pane_g2

0x3fc0,	// (0x00023437) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002eb67) scroll_handle_pane_g

0x3b8d,	// (0x00023004) bg_popup_sub_pane_cp21_ParamLimits

0x3b8d,	// (0x00023004) bg_popup_sub_pane_cp21

0x3ff6,	// (0x0002346d) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ff6,	// (0x0002346d) popup_fep_japan_predictive_window_t1

0x4010,	// (0x00023487) popup_fep_japan_predictive_window_t2_ParamLimits

0x4010,	// (0x00023487) popup_fep_japan_predictive_window_t2

0x4043,	// (0x000234ba) popup_fep_japan_predictive_window_t3_ParamLimits

0x4043,	// (0x000234ba) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002eb6e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002eb6e) popup_fep_japan_predictive_window_t

0x3189,	// (0x00022600) bg_popup_sub_pane_cp23

0x407a,	// (0x000234f1) listscroll_japin_cand_pane

0x4082,	// (0x000234f9) popup_fep_japan_candidate_window_t1

0x4090,	// (0x00023507) candidate_pane_ParamLimits

0x4090,	// (0x00023507) candidate_pane

0x40a2,	// (0x00023519) scroll_pane_cp30

0x40aa,	// (0x00023521) list_single_popup_jap_candidate_pane_ParamLimits

0x40aa,	// (0x00023521) list_single_popup_jap_candidate_pane

0x3189,	// (0x00022600) list_highlight_pane_cp30

0x40bf,	// (0x00023536) list_single_popup_jap_candidate_pane_t1

0x40ce,	// (0x00023545) level_1_signal

0x40db,	// (0x00023552) level_2_signal

0x40e8,	// (0x0002355f) level_3_signal

0x40f5,	// (0x0002356c) level_4_signal

0x4102,	// (0x00023579) level_5_signal

0x410f,	// (0x00023586) level_6_signal

0x411c,	// (0x00023593) level_7_signal

0x40ce,	// (0x00023545) level_1_battery

0x40db,	// (0x00023552) level_2_battery

0x40e8,	// (0x0002355f) level_3_battery

0x40f5,	// (0x0002356c) level_4_battery

0x4102,	// (0x00023579) level_5_battery

0x410f,	// (0x00023586) level_6_battery

0x411c,	// (0x00023593) level_7_battery

0x4141,	// (0x000235b8) list_menu_pane_ParamLimits

0x4141,	// (0x000235b8) list_menu_pane

0x4157,	// (0x000235ce) scroll_pane_cp25_ParamLimits

0x4157,	// (0x000235ce) scroll_pane_cp25

0x4170,	// (0x000235e7) list_double2_graphic_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double2_graphic_pane_cp2

0x4170,	// (0x000235e7) list_double2_large_graphic_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double2_large_graphic_pane_cp2

0x4170,	// (0x000235e7) list_double2_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double2_pane_cp2

0x4170,	// (0x000235e7) list_double_graphic_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double_graphic_pane_cp2

0x4170,	// (0x000235e7) list_double_large_graphic_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double_large_graphic_pane_cp2

0x4170,	// (0x000235e7) list_double_number_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double_number_pane_cp2

0x4170,	// (0x000235e7) list_double_pane_cp2_ParamLimits

0x4170,	// (0x000235e7) list_double_pane_cp2

0xd2f1,	// (0x0002c768) list_single_2graphic_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_2graphic_pane_cp2

0xd2f1,	// (0x0002c768) list_single_graphic_heading_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_graphic_heading_pane_cp2

0xd2f1,	// (0x0002c768) list_single_graphic_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_graphic_pane_cp2

0xd2f1,	// (0x0002c768) list_single_heading_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_heading_pane_cp2

0x41ad,	// (0x00023624) list_single_large_graphic_pane_cp2_ParamLimits

0x41ad,	// (0x00023624) list_single_large_graphic_pane_cp2

0xd2f1,	// (0x0002c768) list_single_number_heading_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_number_heading_pane_cp2

0xd2f1,	// (0x0002c768) list_single_number_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_number_pane_cp2

0xd2f1,	// (0x0002c768) list_single_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_pane_cp2

0x4223,	// (0x0002369a) bg_popup_sub_pane_cp22

0x17a7,	// (0x00020c1e) popup_side_volume_key_window_g1

0x17d1,	// (0x00020c48) popup_side_volume_key_window_t1

0x17ed,	// (0x00020c64) volume_small_pane_cp1

0x34e4,	// (0x0002295b) bg_popup_sub_pane_cp24_ParamLimits

0x34e4,	// (0x0002295b) bg_popup_sub_pane_cp24

0x4239,	// (0x000236b0) fep_china_uni_candidate_pane_ParamLimits

0x4239,	// (0x000236b0) fep_china_uni_candidate_pane

0x426f,	// (0x000236e6) fep_china_uni_entry_pane

0x427f,	// (0x000236f6) popup_fep_china_uni_window_g1

0x429b,	// (0x00023712) fep_china_uni_entry_pane_g1

0x42a3,	// (0x0002371a) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002eb9f) fep_china_uni_entry_pane_g

0x42ab,	// (0x00023722) fep_entry_item_pane

0x42b5,	// (0x0002372c) fep_candidate_item_pane

0x42bd,	// (0x00023734) fep_china_uni_candidate_pane_g1

0x42c5,	// (0x0002373c) fep_china_uni_candidate_pane_g2

0x42cd,	// (0x00023744) fep_china_uni_candidate_pane_g3

0x42d5,	// (0x0002374c) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002eba4) fep_china_uni_candidate_pane_g

0x317f,	// (0x000225f6) fep_entry_item_pane_g1

0x42dd,	// (0x00023754) fep_entry_item_pane_t1_ParamLimits

0x42dd,	// (0x00023754) fep_entry_item_pane_t1

0x42f3,	// (0x0002376a) fep_candidate_item_pane_t1_ParamLimits

0x42f3,	// (0x0002376a) fep_candidate_item_pane_t1

0x4308,	// (0x0002377f) fep_candidate_item_pane_t2_ParamLimits

0x4308,	// (0x0002377f) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002ebad) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002ebad) fep_candidate_item_pane_t

0x3269,	// (0x000226e0) list_highlight_pane_cp31_ParamLimits

0x3269,	// (0x000226e0) list_highlight_pane_cp31

0x431a,	// (0x00023791) level_1_signal_lsc

0x4323,	// (0x0002379a) level_2_signal_lsc

0x432c,	// (0x000237a3) level_3_signal_lsc

0x4335,	// (0x000237ac) level_4_signal_lsc

0x433e,	// (0x000237b5) level_5_signal_lsc

0x4347,	// (0x000237be) level_6_signal_lsc

0x4350,	// (0x000237c7) level_7_signal_lsc

0x4350,	// (0x000237c7) level_1_battery_lsc

0x4359,	// (0x000237d0) level_2_battery_lsc

0x4362,	// (0x000237d9) level_3_battery_lsc

0x436b,	// (0x000237e2) level_4_battery_lsc

0x4374,	// (0x000237eb) level_5_battery_lsc

0x437d,	// (0x000237f4) level_6_battery_lsc

0x431a,	// (0x00023791) level_7_battery_lsc

0x4386,	// (0x000237fd) scroll_handle_focus_pane_g1

0x438f,	// (0x00023806) scroll_handle_focus_pane_g2

0x4398,	// (0x0002380f) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002ebb2) scroll_handle_focus_pane_g

0xba19,	// (0x0002ae90) list_single_2graphic_pane_g1_ParamLimits

0xba19,	// (0x0002ae90) list_single_2graphic_pane_g1

0xb521,	// (0x0002a998) list_single_2graphic_pane_g2_ParamLimits

0xb521,	// (0x0002a998) list_single_2graphic_pane_g2

0x08a6,	// (0x0001fd1d) list_single_2graphic_pane_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_2graphic_pane_g3

0xba25,	// (0x0002ae9c) list_single_2graphic_pane_g4_ParamLimits

0xba25,	// (0x0002ae9c) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002ebb9) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002ebb9) list_single_2graphic_pane_g

0xba36,	// (0x0002aead) list_single_2graphic_pane_t1_ParamLimits

0xba36,	// (0x0002aead) list_single_2graphic_pane_t1

0xba64,	// (0x0002aedb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba64,	// (0x0002aedb) list_double2_graphic_large_graphic_pane_g1

0xb580,	// (0x0002a9f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb580,	// (0x0002a9f7) list_double2_graphic_large_graphic_pane_g2

0x03ef,	// (0x0001f866) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x03ef,	// (0x0001f866) list_double2_graphic_large_graphic_pane_g3

0xba76,	// (0x0002aeed) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba76,	// (0x0002aeed) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002ebc2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002ebc2) list_double2_graphic_large_graphic_pane_g

0xba82,	// (0x0002aef9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba82,	// (0x0002aef9) list_double2_graphic_large_graphic_pane_t1

0xba98,	// (0x0002af0f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba98,	// (0x0002af0f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002ebcb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002ebcb) list_double2_graphic_large_graphic_pane_t

0x44e0,	// (0x00023957) popup_fast_swap_window_ParamLimits

0x44e0,	// (0x00023957) popup_fast_swap_window

0x44fc,	// (0x00023973) popup_side_volume_key_window

0x4518,	// (0x0002398f) stacon_top_pane

0x4522,	// (0x00023999) status_pane_ParamLimits

0x4522,	// (0x00023999) status_pane

0x4518,	// (0x0002398f) status_small_pane

0x3189,	// (0x00022600) control_pane

0x3189,	// (0x00022600) stacon_bottom_pane

0x3ab8,	// (0x00022f2f) scroll_pane_cp121

0x3aaf,	// (0x00022f26) set_content_pane

0x43bc,	// (0x00023833) bg_active_tab_pane_g1_cp1

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp1

0x43c5,	// (0x0002383c) bg_active_tab_pane_g3_cp1

0x43bc,	// (0x00023833) bg_passive_tab_pane_g1_cp1

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp1

0x43c5,	// (0x0002383c) bg_passive_tab_pane_g3_cp1

0xd37f,	// (0x0002c7f6) bg_active_tab_pane_g1_cp2

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp2

0xd388,	// (0x0002c7ff) bg_active_tab_pane_g3_cp2

0xd37f,	// (0x0002c7f6) bg_passive_tab_pane_g1_cp2

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp2

0xd388,	// (0x0002c7ff) bg_passive_tab_pane_g3_cp2

0xd391,	// (0x0002c808) bg_active_tab_pane_g1_cp3

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp3

0xd39a,	// (0x0002c811) bg_active_tab_pane_g3_cp3

0xd391,	// (0x0002c808) bg_passive_tab_pane_g1_cp3

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp3

0xd39a,	// (0x0002c811) bg_passive_tab_pane_g3_cp3

0xd3a3,	// (0x0002c81a) bg_active_tab_pane_g1_cp4

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp4

0xd3ac,	// (0x0002c823) bg_active_tab_pane_g3_cp4

0xd3a3,	// (0x0002c81a) bg_passive_tab_pane_g1_cp4

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp4

0xd3ac,	// (0x0002c823) bg_passive_tab_pane_g3_cp4

0x4434,	// (0x000238ab) bg_active_tab_pane_g1_cp5

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp5

0x443d,	// (0x000238b4) bg_active_tab_pane_g3_cp5

0x4434,	// (0x000238ab) bg_passive_tab_pane_g1_cp5

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp5

0x443d,	// (0x000238b4) bg_passive_tab_pane_g3_cp5

0x6b88,	// (0x00025fff) list_set_graphic_pane_ParamLimits

0x6b88,	// (0x00025fff) list_set_graphic_pane

0x3189,	// (0x00022600) bg_set_opt_pane_cp4

0xd3b5,	// (0x0002c82c) list_set_graphic_pane_g1_ParamLimits

0xd3b5,	// (0x0002c82c) list_set_graphic_pane_g1

0xd3c1,	// (0x0002c838) list_set_graphic_pane_g2_ParamLimits

0xd3c1,	// (0x0002c838) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002ebd0) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002ebd0) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002ef53) volume_small_pane_cp_g

0xd3e5,	// (0x0002c85c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd3e5,	// (0x0002c85c) list_double2_large_graphic_pane_g1_cp2

0xd3f3,	// (0x0002c86a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd3f3,	// (0x0002c86a) list_double2_large_graphic_pane_g2_cp2

0x44b0,	// (0x00023927) list_double2_large_graphic_pane_g3_cp2

0x44b8,	// (0x0002392f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x44b8,	// (0x0002392f) list_double2_large_graphic_pane_t1_cp2

0x44ce,	// (0x00023945) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x44ce,	// (0x00023945) list_double2_large_graphic_pane_t2_cp2

0xdb70,	// (0x0002cfe7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdb70,	// (0x0002cfe7) list_double_large_graphic_pane_g1_cp2

0xdb83,	// (0x0002cffa) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdb83,	// (0x0002cffa) list_double_large_graphic_pane_g2_cp2

0x463e,	// (0x00023ab5) list_double_large_graphic_pane_g3_cp2

0x6132,	// (0x000255a9) list_double_large_graphic_pane_g4_cp

0x613a,	// (0x000255b1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x613a,	// (0x000255b1) list_double_large_graphic_pane_t1_cp2

0x6151,	// (0x000255c8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6151,	// (0x000255c8) list_double_large_graphic_pane_t2_cp2

0xd404,	// (0x0002c87b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd404,	// (0x0002c87b) list_double2_graphic_pane_g1_cp2

0xd412,	// (0x0002c889) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd412,	// (0x0002c889) list_double2_graphic_pane_g2_cp2

0xd423,	// (0x0002c89a) list_double2_graphic_pane_g3_cp2

0x4559,	// (0x000239d0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4559,	// (0x000239d0) list_double2_graphic_pane_t1_cp2

0x456f,	// (0x000239e6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x456f,	// (0x000239e6) list_double2_graphic_pane_t2_cp2

0x4581,	// (0x000239f8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4581,	// (0x000239f8) list_single_number_heading_pane_g1_cp2

0x458d,	// (0x00023a04) list_single_number_heading_pane_g2_cp2

0x4595,	// (0x00023a0c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4595,	// (0x00023a0c) list_single_number_heading_pane_t1_cp2

0xd42d,	// (0x0002c8a4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd42d,	// (0x0002c8a4) list_single_number_heading_pane_t2_cp2

0x45bd,	// (0x00023a34) list_single_number_heading_pane_t3_cp2_ParamLimits

0x45bd,	// (0x00023a34) list_single_number_heading_pane_t3_cp2

0x4581,	// (0x000239f8) list_single_heading_pane_g1_cp2_ParamLimits

0x4581,	// (0x000239f8) list_single_heading_pane_g1_cp2

0x458d,	// (0x00023a04) list_single_heading_pane_g2_cp2

0x4595,	// (0x00023a0c) list_single_heading_pane_t1_cp2_ParamLimits

0x4595,	// (0x00023a0c) list_single_heading_pane_t1_cp2

0xdb5c,	// (0x0002cfd3) list_single_heading_pane_t2_cp2_ParamLimits

0xdb5c,	// (0x0002cfd3) list_single_heading_pane_t2_cp2

0x5e60,	// (0x000252d7) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e60,	// (0x000252d7) list_double_graphic_pane_g1_cp2

0x5e6c,	// (0x000252e3) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e6c,	// (0x000252e3) list_double_graphic_pane_g2_cp2

0x5e7b,	// (0x000252f2) list_double_graphic_pane_g3_cp2

0x5e83,	// (0x000252fa) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e83,	// (0x000252fa) list_double_graphic_pane_t1_cp2

0x5e99,	// (0x00025310) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e99,	// (0x00025310) list_double_graphic_pane_t2_cp2

0x4632,	// (0x00023aa9) list_double_number_pane_g1_cp2_ParamLimits

0x4632,	// (0x00023aa9) list_double_number_pane_g1_cp2

0x463e,	// (0x00023ab5) list_double_number_pane_g2_cp2

0xdb48,	// (0x0002cfbf) list_double_number_pane_t1_cp2_ParamLimits

0xdb48,	// (0x0002cfbf) list_double_number_pane_t1_cp2

0x5e38,	// (0x000252af) list_double_number_pane_t2_cp2_ParamLimits

0x5e38,	// (0x000252af) list_double_number_pane_t2_cp2

0x5e4e,	// (0x000252c5) list_double_number_pane_t3_cp2_ParamLimits

0x5e4e,	// (0x000252c5) list_double_number_pane_t3_cp2

0xda96,	// (0x0002cf0d) list_single_graphic_pane_g1_cp2_ParamLimits

0xda96,	// (0x0002cf0d) list_single_graphic_pane_g1_cp2

0x4696,	// (0x00023b0d) list_single_graphic_pane_g2_cp2_ParamLimits

0x4696,	// (0x00023b0d) list_single_graphic_pane_g2_cp2

0x46a2,	// (0x00023b19) list_single_graphic_pane_g3_cp2

0x5ce3,	// (0x0002515a) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ce3,	// (0x0002515a) list_single_graphic_pane_t1_cp2

0x4696,	// (0x00023b0d) list_single_number_pane_g1_cp2_ParamLimits

0x4696,	// (0x00023b0d) list_single_number_pane_g1_cp2

0x46a2,	// (0x00023b19) list_single_number_pane_g2_cp2

0x5ce3,	// (0x0002515a) list_single_number_pane_t1_cp2_ParamLimits

0x5ce3,	// (0x0002515a) list_single_number_pane_t1_cp2

0xda82,	// (0x0002cef9) list_single_number_pane_t2_cp2_ParamLimits

0xda82,	// (0x0002cef9) list_single_number_pane_t2_cp2

0xd3f3,	// (0x0002c86a) list_double2_pane_g1_cp2_ParamLimits

0xd3f3,	// (0x0002c86a) list_double2_pane_g1_cp2

0x44b0,	// (0x00023927) list_double2_pane_g2_cp2

0x460a,	// (0x00023a81) list_double2_pane_t1_cp2_ParamLimits

0x460a,	// (0x00023a81) list_double2_pane_t1_cp2

0x4620,	// (0x00023a97) list_double2_pane_t2_cp2_ParamLimits

0x4620,	// (0x00023a97) list_double2_pane_t2_cp2

0x4632,	// (0x00023aa9) list_double_pane_g1_cp2_ParamLimits

0x4632,	// (0x00023aa9) list_double_pane_g1_cp2

0x463e,	// (0x00023ab5) list_double_pane_g2_cp2

0x4646,	// (0x00023abd) list_double_pane_t1_cp2_ParamLimits

0x4646,	// (0x00023abd) list_double_pane_t1_cp2

0x465c,	// (0x00023ad3) list_double_pane_t2_cp2_ParamLimits

0x465c,	// (0x00023ad3) list_double_pane_t2_cp2

0x4686,	// (0x00023afd) list_single_pane_cp2_g3

0x4696,	// (0x00023b0d) list_single_pane_g1_cp2_ParamLimits

0x4696,	// (0x00023b0d) list_single_pane_g1_cp2

0x46a2,	// (0x00023b19) list_single_pane_g2_cp2

0x46aa,	// (0x00023b21) list_single_pane_t1_cp2_ParamLimits

0x46aa,	// (0x00023b21) list_single_pane_t1_cp2

0xd459,	// (0x0002c8d0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd459,	// (0x0002c8d0) list_single_large_graphic_pane_g1_cp2

0x46ce,	// (0x00023b45) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x46ce,	// (0x00023b45) list_single_large_graphic_pane_g2_cp2

0x46da,	// (0x00023b51) list_single_large_graphic_pane_g3_cp2

0x46e2,	// (0x00023b59) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x46e2,	// (0x00023b59) list_single_large_graphic_pane_g4_cp1

0x46fc,	// (0x00023b73) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x46fc,	// (0x00023b73) list_single_large_graphic_pane_t1_cp2

0x5caf,	// (0x00025126) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5caf,	// (0x00025126) list_single_graphic_heading_pane_g1_cp2

0xda5d,	// (0x0002ced4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xda5d,	// (0x0002ced4) list_single_graphic_heading_pane_g4_cp2

0x46a2,	// (0x00023b19) list_single_graphic_heading_pane_g5_cp2

0x5cbb,	// (0x00025132) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5cbb,	// (0x00025132) list_single_graphic_heading_pane_t1_cp2

0xda6e,	// (0x0002cee5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda6e,	// (0x0002cee5) list_single_graphic_heading_pane_t2_cp2

0x5c70,	// (0x000250e7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c70,	// (0x000250e7) list_single_2graphic_pane_g1_cp2

0xda5d,	// (0x0002ced4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xda5d,	// (0x0002ced4) list_single_2graphic_pane_g2_cp2

0x46a2,	// (0x00023b19) list_single_2graphic_pane_g3_cp2

0x5c8d,	// (0x00025104) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c8d,	// (0x00025104) list_single_2graphic_pane_g4_cp2

0x5c99,	// (0x00025110) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c99,	// (0x00025110) list_single_2graphic_pane_t1_cp2

0x317f,	// (0x000225f6) list_highlight_pane_g10_cp1

0x5848,	// (0x00024cbf) list_highlight_pane_g1_cp1

0x5850,	// (0x00024cc7) list_highlight_pane_g2_cp1

0x5858,	// (0x00024ccf) list_highlight_pane_g3_cp1

0x5860,	// (0x00024cd7) list_highlight_pane_g4_cp1

0x5868,	// (0x00024cdf) list_highlight_pane_g5_cp1

0x5870,	// (0x00024ce7) list_highlight_pane_g6_cp1

0x5878,	// (0x00024cef) list_highlight_pane_g7_cp1

0x5880,	// (0x00024cf7) list_highlight_pane_g8_cp1

0x5888,	// (0x00024cff) list_highlight_pane_g9_cp1

0xda23,	// (0x0002ce9a) form_field_slider_pane_t3

0xda31,	// (0x0002cea8) form_field_slider_pane_t4

0x5784,	// (0x00024bfb) slider_form_pane_ParamLimits

0x5784,	// (0x00024bfb) slider_form_pane

0x3189,	// (0x00022600) control_abbreviations

0x3189,	// (0x00022600) control_conventions

0x3189,	// (0x00022600) control_definitions

0x3189,	// (0x00022600) format_table_attribute

0x5f62,	// (0x000253d9) bg_popup_preview_window_pane_g9

0x3189,	// (0x00022600) format_table_data2

0x3189,	// (0x00022600) format_table_data3

0x3189,	// (0x00022600) format_table_data_example

0x0008,

0x3189,	// (0x00022600) intro_purpose

0xf8f0,	// (0x0002ed67) bg_popup_preview_window_pane_g

0x3189,	// (0x00022600) texts_category

0x3189,	// (0x00022600) texts_graphics

0x4712,	// (0x00023b89) text_digital

0x4721,	// (0x00023b98) text_primary

0x4730,	// (0x00023ba7) text_primary_small

0x473f,	// (0x00023bb6) text_secondary

0x474e,	// (0x00023bc5) text_title

0x66d6,	// (0x00025b4d) bg_passive_tab_pane_g1_cp3_srt

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp3_srt

0x66df,	// (0x00025b56) bg_passive_tab_pane_g3_cp3_srt

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp3_srt_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp3_srt

0x66e8,	// (0x00025b5f) tabs_4_active_pane_srt_g1

0xddce,	// (0x0002d245) tabs_4_active_pane_srt_t1_ParamLimits

0xddce,	// (0x0002d245) tabs_4_active_pane_srt_t1

0x66d6,	// (0x00025b4d) bg_active_tab_pane_g1_cp3_copy1

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp3_copy1

0x66df,	// (0x00025b56) bg_active_tab_pane_g3_cp3_copy1

0x3269,	// (0x000226e0) tabs_2_long_active_pane_srt_ParamLimits

0x3269,	// (0x000226e0) tabs_2_long_active_pane_srt

0x3269,	// (0x000226e0) tabs_2_long_passive_pane_srt_ParamLimits

0x3269,	// (0x000226e0) tabs_2_long_passive_pane_srt

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp4_srt

0x63a6,	// (0x0002581d) bg_passive_tab_pane_g1_cp4_srt

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp4_srt

0x63af,	// (0x00025826) bg_passive_tab_pane_g3_cp4_srt

0x3269,	// (0x000226e0) bg_active_tab_pane_cp4_srt_ParamLimits

0x3269,	// (0x000226e0) bg_active_tab_pane_cp4_srt

0xdbf8,	// (0x0002d06f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbf8,	// (0x0002d06f) tabs_2_long_active_pane_srt_t1

0x63a6,	// (0x0002581d) bg_active_tab_pane_g1_cp4_srt

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp4_srt

0x63af,	// (0x00025826) bg_active_tab_pane_g3_cp4_srt

0x34e4,	// (0x0002295b) tabs_3_long_active_pane_srt_ParamLimits

0x34e4,	// (0x0002295b) tabs_3_long_active_pane_srt

0x34e4,	// (0x0002295b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x34e4,	// (0x0002295b) tabs_3_long_passive_pane_cp_srt

0x34e4,	// (0x0002295b) tabs_3_long_passive_pane_srt_ParamLimits

0x34e4,	// (0x0002295b) tabs_3_long_passive_pane_srt

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp5_srt

0x4434,	// (0x000238ab) bg_passive_tab_pane_g1_cp5_srt

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp5_srt

0x443d,	// (0x000238b4) bg_passive_tab_pane_g3_cp5_srt

0x3269,	// (0x000226e0) bg_active_tab_pane_cp5_srt_ParamLimits

0x3269,	// (0x000226e0) bg_active_tab_pane_cp5_srt

0xdbe2,	// (0x0002d059) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbe2,	// (0x0002d059) tabs_3_long_active_pane_srt_t1

0x4434,	// (0x000238ab) bg_active_tab_pane_g1_cp5_srt

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp5_srt

0x443d,	// (0x000238b4) bg_active_tab_pane_g3_cp5_srt

0x6386,	// (0x000257fd) navi_text_pane_srt_t1

0x637e,	// (0x000257f5) navi_icon_pane_srt_g1

0x4915,	// (0x00023d8c) midp_editing_number_pane_srt

0x475d,	// (0x00023bd4) midp_ticker_pane_srt

0x491d,	// (0x00023d94) midp_ticker_pane_srt_g1

0x4925,	// (0x00023d9c) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002ebef) midp_ticker_pane_srt_g

0x492d,	// (0x00023da4) midp_ticker_pane_srt_t1

0x636f,	// (0x000257e6) midp_editing_number_pane_t1_copy1

0x4a9d,	// (0x00023f14) listscroll_midp_pane

0x4a9d,	// (0x00023f14) midp_form_pane

0x47c7,	// (0x00023c3e) midp_info_popup_window_ParamLimits

0x47c7,	// (0x00023c3e) midp_info_popup_window

0x3b8d,	// (0x00023004) bg_popup_sub_pane_cp50_ParamLimits

0x3b8d,	// (0x00023004) bg_popup_sub_pane_cp50

0x5480,	// (0x000248f7) listscroll_midp_info_pane_ParamLimits

0x5480,	// (0x000248f7) listscroll_midp_info_pane

0x5468,	// (0x000248df) listscroll_form_midp_pane_ParamLimits

0x5468,	// (0x000248df) listscroll_form_midp_pane

0x5474,	// (0x000248eb) scroll_bar_cp050

0xda17,	// (0x0002ce8e) list_midp_pane

0x716e,	// (0x000265e5) signal_pane_g2_cp

0x5382,	// (0x000247f9) listscroll_midp_info_pane_t1_ParamLimits

0x5382,	// (0x000247f9) listscroll_midp_info_pane_t1

0x539a,	// (0x00024811) listscroll_midp_info_pane_t2_ParamLimits

0x539a,	// (0x00024811) listscroll_midp_info_pane_t2

0x53d8,	// (0x0002484f) listscroll_midp_info_pane_t3_ParamLimits

0x53d8,	// (0x0002484f) listscroll_midp_info_pane_t3

0x5412,	// (0x00024889) listscroll_midp_info_pane_t4_ParamLimits

0x5412,	// (0x00024889) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0002eca2) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0002eca2) listscroll_midp_info_pane_t

0x3c51,	// (0x000230c8) scroll_pane_cp21

0x5320,	// (0x00024797) form_midp_field_choice_group_pane

0x5329,	// (0x000247a0) form_midp_field_text_pane

0x5368,	// (0x000247df) form_midp_field_time_pane

0x5370,	// (0x000247e7) form_midp_gauge_slider_pane

0x5379,	// (0x000247f0) form_midp_gauge_wait_pane

0x3189,	// (0x00022600) form_midp_image_pane

0xbaaa,	// (0x0002af21) list_single_midp_pane_ParamLimits

0xbaaa,	// (0x0002af21) list_single_midp_pane

0xd9cd,	// (0x0002ce44) form_midp_field_text_pane_t1

0x5096,	// (0x0002450d) input_focus_pane_cp050

0x530f,	// (0x00024786) list_midp_form_text_pane

0x52a7,	// (0x0002471e) form_midp_field_choice_group_pane_t1

0x52b5,	// (0x0002472c) input_focus_pane_cp051

0x52c9,	// (0x00024740) list_midp_choice_pane

0x3189,	// (0x00022600) status_idle_pane

0x528b,	// (0x00024702) form_midp_field_time_pane_t1

0x317f,	// (0x000225f6) wait_anim_pane_g2_copy1

0x5299,	// (0x00024710) form_midp_field_time_pane_t2

0x0001,

0x4875,	// (0x00023cec) aid_navinavi_width_2_pane

0xf826,	// (0x0002ec9d) form_midp_field_time_pane_t

0x3189,	// (0x00022600) input_focus_pane_cp052

0x3189,	// (0x00022600) bg_input_focus_pane_cp040

0x523f,	// (0x000246b6) form_midp_gauge_slider_pane_t1

0x524d,	// (0x000246c4) form_midp_gauge_slider_pane_t2

0xd9b1,	// (0x0002ce28) form_midp_gauge_slider_pane_t3

0xd9bf,	// (0x0002ce36) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0002ec94) form_midp_gauge_slider_pane_t

0x5283,	// (0x000246fa) form_midp_slider_pane

0x3269,	// (0x000226e0) bg_input_focus_pane_cp041_ParamLimits

0x3269,	// (0x000226e0) bg_input_focus_pane_cp041

0x520c,	// (0x00024683) form_midp_gauge_wait_pane_t1_ParamLimits

0x520c,	// (0x00024683) form_midp_gauge_wait_pane_t1

0x521e,	// (0x00024695) form_midp_gauge_wait_pane_t2_ParamLimits

0x521e,	// (0x00024695) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0002ec8f) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0002ec8f) form_midp_gauge_wait_pane_t

0x5230,	// (0x000246a7) form_midp_wait_pane_ParamLimits

0x5230,	// (0x000246a7) form_midp_wait_pane

0x51d6,	// (0x0002464d) form_midp_image_pane_g1

0x51df,	// (0x00024656) form_midp_image_pane_t1

0x51ee,	// (0x00024665) form_midp_image_pane_t2

0x51fd,	// (0x00024674) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0002ec88) form_midp_image_pane_t

0x51cd,	// (0x00024644) list_single_midp_pane_g1

0x0954,	// (0x0001fdcb) list_single_midp_pane_t1

0xd99c,	// (0x0002ce13) list_midp_form_item_pane_ParamLimits

0xd99c,	// (0x0002ce13) list_midp_form_item_pane

0x481d,	// (0x00023c94) list_midp_form_item_pane_t1

0x482c,	// (0x00023ca3) midp_ticker_pane_g1

0x4838,	// (0x00023caf) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002ebd5) midp_ticker_pane_g

0x4844,	// (0x00023cbb) midp_ticker_pane_t1

0x6602,	// (0x00025a79) midp_editing_number_pane_t1

0x65e0,	// (0x00025a57) midp_editing_number_pane

0x65ef,	// (0x00025a66) midp_ticker_pane

0x635f,	// (0x000257d6) ai_message_heading_pane

0x3189,	// (0x00022600) bg_popup_window_pane_cp14

0x6367,	// (0x000257de) listscroll_ai_message_pane

0x62e9,	// (0x00025760) ai_message_heading_pane_g1_ParamLimits

0x62e9,	// (0x00025760) ai_message_heading_pane_g1

0x62f5,	// (0x0002576c) ai_message_heading_pane_g2_ParamLimits

0x62f5,	// (0x0002576c) ai_message_heading_pane_g2

0x6301,	// (0x00025778) ai_message_heading_pane_g3_ParamLimits

0x6301,	// (0x00025778) ai_message_heading_pane_g3

0x630d,	// (0x00025784) ai_message_heading_pane_g4_ParamLimits

0x630d,	// (0x00025784) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0002edc9) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0002edc9) ai_message_heading_pane_g

0x6319,	// (0x00025790) ai_message_heading_pane_t1_ParamLimits

0x6319,	// (0x00025790) ai_message_heading_pane_t1

0x6333,	// (0x000257aa) ai_message_heading_pane_t2_ParamLimits

0x6333,	// (0x000257aa) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0002edd2) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0002edd2) ai_message_heading_pane_t

0x6345,	// (0x000257bc) bg_popup_heading_pane_cp1_ParamLimits

0x6345,	// (0x000257bc) bg_popup_heading_pane_cp1

0x62d7,	// (0x0002574e) list_ai_message_pane_ParamLimits

0x62d7,	// (0x0002574e) list_ai_message_pane

0x3c51,	// (0x000230c8) scroll_pane_cp10

0x6273,	// (0x000256ea) list_ai_message_pane_g1

0x627b,	// (0x000256f2) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0002eda6) list_ai_message_pane_g

0x6283,	// (0x000256fa) list_ai_message_pane_t1_ParamLimits

0x6283,	// (0x000256fa) list_ai_message_pane_t1

0x6298,	// (0x0002570f) list_ai_message_pane_t2_ParamLimits

0x6298,	// (0x0002570f) list_ai_message_pane_t2

0x62ad,	// (0x00025724) list_ai_message_pane_t3_ParamLimits

0x62ad,	// (0x00025724) list_ai_message_pane_t3

0x62c2,	// (0x00025739) list_ai_message_pane_t4_ParamLimits

0x62c2,	// (0x00025739) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0002edab) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0002edab) list_ai_message_pane_t

0xdbc1,	// (0x0002d038) cell_ai_soft_ind_pane_ParamLimits

0xdbc1,	// (0x0002d038) cell_ai_soft_ind_pane

0x4856,	// (0x00023ccd) cell_ai_soft_ind_pane_g1_ParamLimits

0x4856,	// (0x00023ccd) cell_ai_soft_ind_pane_g1

0x3189,	// (0x00022600) grid_highlight_cp1

0x4863,	// (0x00023cda) text_secondary_cp56_ParamLimits

0x4863,	// (0x00023cda) text_secondary_cp56

0x6233,	// (0x000256aa) example_general_pane_ParamLimits

0x6233,	// (0x000256aa) example_general_pane

0x623f,	// (0x000256b6) example_parent_pane_g1_ParamLimits

0x623f,	// (0x000256b6) example_parent_pane_g1

0x624b,	// (0x000256c2) example_parent_pane_t1_ParamLimits

0x624b,	// (0x000256c2) example_parent_pane_t1

0xc524,	// (0x0002b99b) popup_preview_text_window_ParamLimits

0xc524,	// (0x0002b99b) popup_preview_text_window

0x468e,	// (0x00023b05) list_single_pane_cp2_g4

0x359a,	// (0x00022a11) bg_popup_preview_window_pane_ParamLimits

0x359a,	// (0x00022a11) bg_popup_preview_window_pane

0x5f6a,	// (0x000253e1) popup_preview_text_window_t1_ParamLimits

0x5f6a,	// (0x000253e1) popup_preview_text_window_t1

0x5f88,	// (0x000253ff) popup_preview_text_window_t2_ParamLimits

0x5f88,	// (0x000253ff) popup_preview_text_window_t2

0x5fd1,	// (0x00025448) popup_preview_text_window_t3_ParamLimits

0x5fd1,	// (0x00025448) popup_preview_text_window_t3

0x6016,	// (0x0002548d) popup_preview_text_window_t4_ParamLimits

0x6016,	// (0x0002548d) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0002ed7a) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0002ed7a) popup_preview_text_window_t

0x6094,	// (0x0002550b) scroll_pane_cp11

0x4f92,	// (0x00024409) bg_popup_preview_window_pane_g1

0x5f2a,	// (0x000253a1) bg_popup_preview_window_pane_g2

0x5f32,	// (0x000253a9) bg_popup_preview_window_pane_g3

0x5f3a,	// (0x000253b1) bg_popup_preview_window_pane_g4

0x5f42,	// (0x000253b9) bg_popup_preview_window_pane_g5

0x5f4a,	// (0x000253c1) bg_popup_preview_window_pane_g6

0x5f52,	// (0x000253c9) bg_popup_preview_window_pane_g7

0x5f5a,	// (0x000253d1) bg_popup_preview_window_pane_g8

0x10ec,	// (0x00020563) aid_popup_width_pane

0xc4a0,	// (0x0002b917) popup_midp_note_alarm_window_ParamLimits

0xc4a0,	// (0x0002b917) popup_midp_note_alarm_window

0x3ac9,	// (0x00022f40) data_form_pane_ParamLimits

0xb91d,	// (0x0002ad94) form_field_data_pane_g1

0xb927,	// (0x0002ad9e) form_field_data_pane_t1_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_ParamLimits

0x3ae3,	// (0x00022f5a) data_form_wide_pane_ParamLimits

0x0654,	// (0x0001facb) form_field_data_wide_pane_g1

0x0660,	// (0x0001fad7) form_field_data_wide_pane_t1_ParamLimits

0x3846,	// (0x00022cbd) input_focus_pane_cp6_ParamLimits

0xd1c6,	// (0x0002c63d) input_popup_find_pane_g1_ParamLimits

0xd1c6,	// (0x0002c63d) input_popup_find_pane_g1

0x1656,	// (0x00020acd) aid_navi_side_left_pane

0x166b,	// (0x00020ae2) aid_navi_side_right_pane

0x5943,	// (0x00024dba) bg_popup_window_pane_cp30_ParamLimits

0x5943,	// (0x00024dba) bg_popup_window_pane_cp30

0x59bd,	// (0x00024e34) popup_midp_note_alarm_window_g1_ParamLimits

0x59bd,	// (0x00024e34) popup_midp_note_alarm_window_g1

0x59ed,	// (0x00024e64) popup_midp_note_alarm_window_t1_ParamLimits

0x59ed,	// (0x00024e64) popup_midp_note_alarm_window_t1

0x5a8e,	// (0x00024f05) popup_midp_note_alarm_window_t2_ParamLimits

0x5a8e,	// (0x00024f05) popup_midp_note_alarm_window_t2

0x5b3c,	// (0x00024fb3) popup_midp_note_alarm_window_t3_ParamLimits

0x5b3c,	// (0x00024fb3) popup_midp_note_alarm_window_t3

0x5b6e,	// (0x00024fe5) popup_midp_note_alarm_window_t4_ParamLimits

0x5b6e,	// (0x00024fe5) popup_midp_note_alarm_window_t4

0x5b94,	// (0x0002500b) popup_midp_note_alarm_window_t5_ParamLimits

0x5b94,	// (0x0002500b) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0002ed17) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0002ed17) popup_midp_note_alarm_window_t

0x5c40,	// (0x000250b7) wait_bar_pane_cp1_ParamLimits

0x5c40,	// (0x000250b7) wait_bar_pane_cp1

0x3189,	// (0x00022600) wait_anim_pane_copy1

0x3189,	// (0x00022600) wait_border_pane_copy1

0x5629,	// (0x00024aa0) wait_border_pane_g1_copy1

0x067a,	// (0x0001faf1) form_field_popup_pane_g1

0xb941,	// (0x0002adb8) form_field_popup_pane_t1_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_cp7_ParamLimits

0x3b0f,	// (0x00022f86) list_form_pane_ParamLimits

0x069a,	// (0x0001fb11) form_field_popup_wide_pane_g1

0x06a2,	// (0x0001fb19) form_field_popup_wide_pane_t1_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_cp8_ParamLimits

0x3b1b,	// (0x00022f92) list_form_wide_pane_ParamLimits

0x6762,	// (0x00025bd9) aid_size_cell_graphic_pane

0xb9c0,	// (0x0002ae37) data_form_pane_t1_ParamLimits

0xbad3,	// (0x0002af4a) data_form_wide_pane_t1_ParamLimits

0xd627,	// (0x0002ca9e) bg_status_flat_pane

0xbf50,	// (0x0002b3c7) title_pane_t1_ParamLimits

0x3231,	// (0x000226a8) title_pane_t2_ParamLimits

0x3257,	// (0x000226ce) title_pane_t3_ParamLimits

0xf55d,	// (0x0002e9d4) title_pane_t_ParamLimits

0x40ce,	// (0x00023545) level_1_signal_ParamLimits

0x40db,	// (0x00023552) level_2_signal_ParamLimits

0x40e8,	// (0x0002355f) level_3_signal_ParamLimits

0x40f5,	// (0x0002356c) level_4_signal_ParamLimits

0x4102,	// (0x00023579) level_5_signal_ParamLimits

0x410f,	// (0x00023586) level_6_signal_ParamLimits

0x411c,	// (0x00023593) level_7_signal_ParamLimits

0x40ce,	// (0x00023545) level_1_battery_ParamLimits

0x40db,	// (0x00023552) level_2_battery_ParamLimits

0x40e8,	// (0x0002355f) level_3_battery_ParamLimits

0x40f5,	// (0x0002356c) level_4_battery_ParamLimits

0x4102,	// (0x00023579) level_5_battery_ParamLimits

0x410f,	// (0x00023586) level_6_battery_ParamLimits

0x411c,	// (0x00023593) level_7_battery_ParamLimits

0x5848,	// (0x00024cbf) bg_status_flat_pane_g1

0x5850,	// (0x00024cc7) bg_status_flat_pane_g2

0x5858,	// (0x00024ccf) bg_status_flat_pane_g3

0x5860,	// (0x00024cd7) bg_status_flat_pane_g4

0x5868,	// (0x00024cdf) bg_status_flat_pane_g5

0x5870,	// (0x00024ce7) bg_status_flat_pane_g6

0x5878,	// (0x00024cef) bg_status_flat_pane_g7

0xceb7,	// (0x0002c32e) tabs_3_active_pane_t1_ParamLimits

0xceb7,	// (0x0002c32e) tabs_3_passive_pane_t1_ParamLimits

0xced1,	// (0x0002c348) tabs_4_active_pane_t1_ParamLimits

0xced1,	// (0x0002c348) tabs_4_1_passive_pane_t1_ParamLimits

0xd1dc,	// (0x0002c653) tabs_2_active_pane_t1_ParamLimits

0xd1dc,	// (0x0002c653) tabs_2_passive_pane_t1_ParamLimits

0x3269,	// (0x000226e0) bg_active_tab_pane_cp4_ParamLimits

0xd1ee,	// (0x0002c665) tabs_2_long_active_pane_t1_ParamLimits

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp4_ParamLimits

0x2153,	// (0x000215ca) list_single_midp_graphic_pane_t1_ParamLimits

0x3269,	// (0x000226e0) bg_active_tab_pane_cp5_ParamLimits

0xd201,	// (0x0002c678) tabs_3_long_active_pane_t1_ParamLimits

0x4a9d,	// (0x00023f14) bg_passive_tab_pane_cp5_ParamLimits

0x2153,	// (0x000215ca) list_single_midp_graphic_pane_t1

0xd627,	// (0x0002ca9e) bg_status_flat_pane_ParamLimits

0x4c33,	// (0x000240aa) indicator_pane_cp2_ParamLimits

0x4c33,	// (0x000240aa) indicator_pane_cp2

0xd79f,	// (0x0002cc16) navi_pane_srt_ParamLimits

0xd79f,	// (0x0002cc16) navi_pane_srt

0x4d7c,	// (0x000241f3) popup_clock_digital_analogue_window_cp1

0x3346,	// (0x000227bd) indicator_pane_t1

0x475d,	// (0x00023bd4) copy_highlight_pane

0x475d,	// (0x00023bd4) cursor_graphics_pane

0x475d,	// (0x00023bd4) graphic_within_text_pane

0x475d,	// (0x00023bd4) link_highlight_pane

0x6057,	// (0x000254ce) popup_preview_text_window_t5_ParamLimits

0x6057,	// (0x000254ce) popup_preview_text_window_t5

0x487d,	// (0x00023cf4) cursor_digital_pane

0x487d,	// (0x00023cf4) cursor_primary_pane

0x488e,	// (0x00023d05) cursor_primary_small_pane

0x4896,	// (0x00023d0d) cursor_secondary_pane

0x489e,	// (0x00023d15) cursor_title_pane

0x487d,	// (0x00023cf4) link_highlight_digital_pane

0x4885,	// (0x00023cfc) link_highlight_primary_pane

0x488e,	// (0x00023d05) link_highlight_primary_small_pane

0x4896,	// (0x00023d0d) link_highlight_secondary_pane

0x489e,	// (0x00023d15) link_highlight_title_pane

0x487d,	// (0x00023cf4) copy_highlight_digital_pane

0x487d,	// (0x00023cf4) copy_highlight_primary_pane

0x488e,	// (0x00023d05) copy_highlight_primary_small_pane

0x4896,	// (0x00023d0d) copy_highlight_secondary_pane

0x489e,	// (0x00023d15) copy_highlight_title_pane

0x4896,	// (0x00023d0d) graphic_text_digital_pane

0x58e6,	// (0x00024d5d) graphic_text_primary_pane

0x58ef,	// (0x00024d66) graphic_text_primary_small_pane

0x488e,	// (0x00023d05) graphic_text_secondary_pane

0x487d,	// (0x00023cf4) graphic_text_title_pane

0xd4fe,	// (0x0002c975) cursor_primary_pane_g1

0x58d8,	// (0x00024d4f) cursor_text_primary_t1

0xda53,	// (0x0002ceca) cursor_primary_small_pane_g1

0x58ca,	// (0x00024d41) cursor_text_primary_small_t1

0xda49,	// (0x0002cec0) cursor_primary_small_pane_g1_copy1

0x58b2,	// (0x00024d29) cursor_text_primary_small_t1_copy1

0x5890,	// (0x00024d07) cursor_text_title_t1

0xda3f,	// (0x0002ceb6) cursor_title_pane_g1

0xd4fe,	// (0x0002c975) cursor_digital_pane_g1

0x48b0,	// (0x00023d27) cursor_text_digital_t1

0x48d5,	// (0x00023d4c) link_highlight_primary_pane_g1

0x5839,	// (0x00024cb0) link_highlight_primary_pane_t1

0x48be,	// (0x00023d35) link_highlight_primary_small_pane_g1

0x48c6,	// (0x00023d3d) link_highlight_primary_small_pane_t1

0x48d5,	// (0x00023d4c) link_highlight_secondary_pane_g1

0x48dd,	// (0x00023d54) link_highlight_secondary_pane_t1

0x57ad,	// (0x00024c24) link_highlight_title_pane_g1

0x57b5,	// (0x00024c2c) link_highlight_title_pane_t1

0x5796,	// (0x00024c0d) link_highlight_digital_pane_g1

0x579e,	// (0x00024c15) link_highlight_digital_pane_t1

0x566e,	// (0x00024ae5) copy_highlight_primary_pane_g1

0x5676,	// (0x00024aed) copy_highlight_primary_pane_t1

0x5648,	// (0x00024abf) copy_highlight_primary_small_pane_g1

0x565f,	// (0x00024ad6) copy_highlight_primary_small_pane_t1

0x48ec,	// (0x00023d63) copy_highlight_secondary_pane_g1

0x48f4,	// (0x00023d6b) copy_highlight_secondary_pane_t1

0x5648,	// (0x00024abf) copy_highlight_title_pane_g1

0x5650,	// (0x00024ac7) copy_highlight_title_pane_t1

0x566e,	// (0x00024ae5) copy_highlight_digital_pane_g1

0x692c,	// (0x00025da3) copy_highlight_digital_pane_t1

0x6880,	// (0x00025cf7) graphic_text_primary_pane_g1

0x6910,	// (0x00025d87) graphic_text_primary_pane_t1

0x691e,	// (0x00025d95) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0002ee46) graphic_text_primary_pane_t

0x68ec,	// (0x00025d63) graphic_text_primary_small_pane_g1

0x68f4,	// (0x00025d6b) graphic_text_primary_small_pane_t1

0x6902,	// (0x00025d79) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0002ee41) graphic_text_primary_small_pane_t

0x68c8,	// (0x00025d3f) graphic_text_secondary_pane_g1

0x68d0,	// (0x00025d47) graphic_text_secondary_pane_t1

0x68de,	// (0x00025d55) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0002ee3c) graphic_text_secondary_pane_t

0x68a4,	// (0x00025d1b) graphic_text_title_pane_g1

0x68ac,	// (0x00025d23) graphic_text_title_pane_t1

0x68ba,	// (0x00025d31) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0002ee37) graphic_text_title_pane_t

0x6880,	// (0x00025cf7) graphic_text_digital_pane_g1

0x6888,	// (0x00025cff) graphic_text_digital_pane_t1

0x6896,	// (0x00025d0d) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0002ee32) graphic_text_digital_pane_t

0x3269,	// (0x000226e0) navi_icon_pane_srt_ParamLimits

0x3269,	// (0x000226e0) navi_icon_pane_srt

0x3189,	// (0x00022600) navi_midp_pane_srt

0x3189,	// (0x00022600) navi_navi_pane_srt

0x3269,	// (0x000226e0) navi_text_pane_srt_ParamLimits

0x3269,	// (0x000226e0) navi_text_pane_srt

0x684b,	// (0x00025cc2) navi_navi_icon_text_pane_srt

0x6853,	// (0x00025cca) navi_navi_pane_srt_g1_ParamLimits

0x6853,	// (0x00025cca) navi_navi_pane_srt_g1

0x6865,	// (0x00025cdc) navi_navi_pane_srt_g2_ParamLimits

0x6865,	// (0x00025cdc) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0002ee2d) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0002ee2d) navi_navi_pane_srt_g

0x6877,	// (0x00025cee) navi_navi_tabs_pane_srt

0x684b,	// (0x00025cc2) navi_navi_text_pane_srt

0x684b,	// (0x00025cc2) navi_navi_volume_pane_srt

0x683c,	// (0x00025cb3) navi_navi_text_pane_srt_t1

0x248b,	// (0x00021902) navi_navi_volume_pane_srt_g1

0x2493,	// (0x0002190a) volume_small_pane_srt_ParamLimits

0x2493,	// (0x0002190a) volume_small_pane_srt

0x1936,	// (0x00020dad) volume_small_pane_srt_g1_ParamLimits

0x1936,	// (0x00020dad) volume_small_pane_srt_g1

0x1946,	// (0x00020dbd) volume_small_pane_srt_g2_ParamLimits

0x1946,	// (0x00020dbd) volume_small_pane_srt_g2

0x1957,	// (0x00020dce) volume_small_pane_srt_g3_ParamLimits

0x1957,	// (0x00020dce) volume_small_pane_srt_g3

0x1968,	// (0x00020ddf) volume_small_pane_srt_g4_ParamLimits

0x1968,	// (0x00020ddf) volume_small_pane_srt_g4

0x1979,	// (0x00020df0) volume_small_pane_srt_g5_ParamLimits

0x1979,	// (0x00020df0) volume_small_pane_srt_g5

0x198a,	// (0x00020e01) volume_small_pane_srt_g6_ParamLimits

0x198a,	// (0x00020e01) volume_small_pane_srt_g6

0x199b,	// (0x00020e12) volume_small_pane_srt_g7_ParamLimits

0x199b,	// (0x00020e12) volume_small_pane_srt_g7

0x19ac,	// (0x00020e23) volume_small_pane_srt_g8_ParamLimits

0x19ac,	// (0x00020e23) volume_small_pane_srt_g8

0x19bd,	// (0x00020e34) volume_small_pane_srt_g9_ParamLimits

0x19bd,	// (0x00020e34) volume_small_pane_srt_g9

0x19ce,	// (0x00020e45) volume_small_pane_srt_g10_ParamLimits

0x19ce,	// (0x00020e45) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002ebda) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002ebda) volume_small_pane_srt_g

0x3643,	// (0x00022aba) query_popup_data_pane_cp2

0x6822,	// (0x00025c99) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6822,	// (0x00025c99) navi_navi_icon_text_pane_srt_t1

0x58e6,	// (0x00024d5d) navi_tabs_2_long_pane_srt

0x58e6,	// (0x00024d5d) navi_tabs_2_pane_srt

0x58e6,	// (0x00024d5d) navi_tabs_3_long_pane_srt

0x58e6,	// (0x00024d5d) navi_tabs_3_pane_srt

0x58e6,	// (0x00024d5d) navi_tabs_4_pane_srt

0x246b,	// (0x000218e2) tabs_2_active_pane_srt_ParamLimits

0x246b,	// (0x000218e2) tabs_2_active_pane_srt

0x247b,	// (0x000218f2) tabs_2_passive_pane_srt_ParamLimits

0x247b,	// (0x000218f2) tabs_2_passive_pane_srt

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp1_srt

0x67ee,	// (0x00025c65) bg_passive_tab_pane_g1_cp1_srt

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp1_srt

0x67f7,	// (0x00025c6e) bg_passive_tab_pane_g3_cp1_srt

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp1_srt_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp1_srt

0x6800,	// (0x00025c77) tabs_2_active_pane_srt_g1

0xde4b,	// (0x0002d2c2) tabs_2_active_pane_srt_t1_ParamLimits

0xde4b,	// (0x0002d2c2) tabs_2_active_pane_srt_t1

0x67ee,	// (0x00025c65) bg_active_tab_pane_g1_cp1_srt

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp1_srt

0x67f7,	// (0x00025c6e) bg_active_tab_pane_g3_cp1_srt

0x2438,	// (0x000218af) tabs_3_active_pane_srt_ParamLimits

0x2438,	// (0x000218af) tabs_3_active_pane_srt

0x2449,	// (0x000218c0) tabs_3_passive_pane_cp_srt_ParamLimits

0x2449,	// (0x000218c0) tabs_3_passive_pane_cp_srt

0x245a,	// (0x000218d1) tabs_3_passive_pane_srt_ParamLimits

0x245a,	// (0x000218d1) tabs_3_passive_pane_srt

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5096,	// (0x0002450d) bg_passive_tab_pane_cp2_srt

0x4903,	// (0x00023d7a) bg_passive_tab_pane_g1_cp2_srt

0x43aa,	// (0x00023821) bg_passive_tab_pane_g2_cp2_srt

0x490c,	// (0x00023d83) bg_passive_tab_pane_g3_cp2_srt

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp2_srt_ParamLimits

0x34e4,	// (0x0002295b) bg_active_tab_pane_cp2_srt

0x67d4,	// (0x00025c4b) tabs_3_active_pane_srt_g1

0xde35,	// (0x0002d2ac) tabs_3_active_pane_srt_t1_ParamLimits

0xde35,	// (0x0002d2ac) tabs_3_active_pane_srt_t1

0x4903,	// (0x00023d7a) bg_active_tab_pane_g1_cp2_srt

0x43aa,	// (0x00023821) bg_active_tab_pane_g2_cp2_srt

0x490c,	// (0x00023d83) bg_active_tab_pane_g3_cp2_srt

0x23f0,	// (0x00021867) tabs_4_active_pane_srt_ParamLimits

0x23f0,	// (0x00021867) tabs_4_active_pane_srt

0x2402,	// (0x00021879) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2402,	// (0x00021879) tabs_4_passive_pane_cp2_srt

0x1b2f,	// (0x00020fa6) aid_size_cell_toolbar

0x6459,	// (0x000258d0) main_idle_act_pane_ParamLimits

0x1cc6,	// (0x0002113d) popup_large_graphic_colour_window_ParamLimits

0xc7b0,	// (0x0002bc27) popup_toolbar_window_ParamLimits

0xc7b0,	// (0x0002bc27) popup_toolbar_window

0x662c,	// (0x00025aa3) list_single_graphic_2heading_pane_ParamLimits

0x662c,	// (0x00025aa3) list_single_graphic_2heading_pane

0x3e81,	// (0x000232f8) aid_size_cell_apps_grid_lsc_pane

0x3e93,	// (0x0002330a) aid_size_cell_apps_grid_prt_pane

0x4a9d,	// (0x00023f14) bg_wml_button_pane_cp1_ParamLimits

0x4a9d,	// (0x00023f14) bg_wml_button_pane_cp1

0xd9cd,	// (0x0002ce44) form_midp_field_text_pane_t1_ParamLimits

0x5096,	// (0x0002450d) input_focus_pane_cp050_ParamLimits

0x530f,	// (0x00024786) list_midp_form_text_pane_ParamLimits

0x52b5,	// (0x0002472c) input_focus_pane_cp051_ParamLimits

0x52c9,	// (0x00024740) list_midp_choice_pane_ParamLimits

0xd96a,	// (0x0002cde1) list_single_2graphic_pane_cp3_ParamLimits

0xd96a,	// (0x0002cde1) list_single_2graphic_pane_cp3

0xd97d,	// (0x0002cdf4) list_single_midp_graphic_pane_ParamLimits

0xd97d,	// (0x0002cdf4) list_single_midp_graphic_pane

0x088e,	// (0x0001fd05) list_single_graphic_2heading_pane_g1_ParamLimits

0x088e,	// (0x0001fd05) list_single_graphic_2heading_pane_g1

0x089a,	// (0x0001fd11) list_single_graphic_2heading_pane_g4_ParamLimits

0x089a,	// (0x0001fd11) list_single_graphic_2heading_pane_g4

0x08a6,	// (0x0001fd1d) list_single_graphic_2heading_pane_g5_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002ec2d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002ec2d) list_single_graphic_2heading_pane_g

0x08b2,	// (0x0001fd29) list_single_graphic_2heading_pane_t1_ParamLimits

0x08b2,	// (0x0001fd29) list_single_graphic_2heading_pane_t1

0x08c6,	// (0x0001fd3d) list_single_graphic_2heading_pane_t2_ParamLimits

0x08c6,	// (0x0001fd3d) list_single_graphic_2heading_pane_t2

0x08e2,	// (0x0001fd59) list_single_graphic_2heading_pane_t3_ParamLimits

0x08e2,	// (0x0001fd59) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002ec34) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002ec34) list_single_graphic_2heading_pane_t

0x4ed0,	// (0x00024347) bg_popup_sub_pane_cp2

0x4efa,	// (0x00024371) grid_toobar_pane

0x20da,	// (0x00021551) cell_toolbar_pane_ParamLimits

0x20da,	// (0x00021551) cell_toolbar_pane

0x4f36,	// (0x000243ad) cell_toolbar_pane_g1_ParamLimits

0x4f36,	// (0x000243ad) cell_toolbar_pane_g1

0x4f4a,	// (0x000243c1) cell_toolbar_pane_g2_ParamLimits

0x4f4a,	// (0x000243c1) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0002ec42) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0002ec42) cell_toolbar_pane_g

0x4f6c,	// (0x000243e3) grid_highlight_pane_cp2_ParamLimits

0x4f6c,	// (0x000243e3) grid_highlight_pane_cp2

0x4f86,	// (0x000243fd) toolbar_button_pane

0x4f92,	// (0x00024409) toolbar_button_pane_g1

0x4f9a,	// (0x00024411) toolbar_button_pane_g2

0x4fa2,	// (0x00024419) toolbar_button_pane_g3

0x4faa,	// (0x00024421) toolbar_button_pane_g4

0x4fb2,	// (0x00024429) toolbar_button_pane_g5

0x4fba,	// (0x00024431) toolbar_button_pane_g6

0x4fc2,	// (0x00024439) toolbar_button_pane_g7

0x4fca,	// (0x00024441) toolbar_button_pane_g8

0x4fd2,	// (0x00024449) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0002ec47) toolbar_button_pane_g

0x2112,	// (0x00021589) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2112,	// (0x00021589) list_single_2graphic_pane_g1_cp3

0xc808,	// (0x0002bc7f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc808,	// (0x0002bc7f) list_single_2graphic_pane_g2_cp3

0x212f,	// (0x000215a6) list_single_2graphic_pane_g3_cp3

0x4fda,	// (0x00024451) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4fda,	// (0x00024451) list_single_2graphic_pane_g4_cp3

0x2137,	// (0x000215ae) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2137,	// (0x000215ae) list_single_2graphic_pane_t1_cp3

0x4245,	// (0x000236bc) list_single_midp_graphic_pane_g2_ParamLimits

0x4245,	// (0x000236bc) list_single_midp_graphic_pane_g2

0x1b37,	// (0x00020fae) aid_zoom_text_primary

0x0862,	// (0x0001fcd9) aid_zoom_text_secondary

0x49c0,	// (0x00023e37) status_small_pane_g7_ParamLimits

0x49c0,	// (0x00023e37) status_small_pane_g7

0x49e3,	// (0x00023e5a) status_small_pane_t1_ParamLimits

0xbf2c,	// (0x0002b3a3) title_pane_g2

0x0003,

0xf554,	// (0x0002e9cb) title_pane_g

0xd087,	// (0x0002c4fe) aid_size_cell_colour_1_pane_ParamLimits

0xd087,	// (0x0002c4fe) aid_size_cell_colour_1_pane

0xd09b,	// (0x0002c512) aid_size_cell_colour_2_pane_ParamLimits

0xd09b,	// (0x0002c512) aid_size_cell_colour_2_pane

0xd0af,	// (0x0002c526) aid_size_cell_colour_3_pane_ParamLimits

0xd0af,	// (0x0002c526) aid_size_cell_colour_3_pane

0xd0c3,	// (0x0002c53a) aid_size_cell_colour_4_pane_ParamLimits

0xd0c3,	// (0x0002c53a) aid_size_cell_colour_4_pane

0x1592,	// (0x00020a09) title_pane_stacon_g1_ParamLimits

0x1592,	// (0x00020a09) title_pane_stacon_g1

0x56cd,	// (0x00024b44) popup_note_wait_window_g3_ParamLimits

0x56cd,	// (0x00024b44) popup_note_wait_window_g3

0x5743,	// (0x00024bba) popup_note_wait_window_t5_ParamLimits

0x5743,	// (0x00024bba) popup_note_wait_window_t5

0x3189,	// (0x00022600) main_feb_china_hwr_fs_writing_pane

0xc1be,	// (0x0002b635) popup_feb_china_hwr_fs_window_ParamLimits

0xc1be,	// (0x0002b635) popup_feb_china_hwr_fs_window

0xc819,	// (0x0002bc90) aid_size_cell_hwr_fs_ParamLimits

0xc819,	// (0x0002bc90) aid_size_cell_hwr_fs

0x5096,	// (0x0002450d) bg_popup_sub_pane_cp3_ParamLimits

0x5096,	// (0x0002450d) bg_popup_sub_pane_cp3

0xc82e,	// (0x0002bca5) grid_hwr_fs_pane_ParamLimits

0xc82e,	// (0x0002bca5) grid_hwr_fs_pane

0x2196,	// (0x0002160d) linegrid_hwr_fs_pane_ParamLimits

0x2196,	// (0x0002160d) linegrid_hwr_fs_pane

0xc846,	// (0x0002bcbd) cell_hwr_fs_pane_ParamLimits

0xc846,	// (0x0002bcbd) cell_hwr_fs_pane

0x50a2,	// (0x00024519) linegrid_hwr_fs_pane_g1_ParamLimits

0x50a2,	// (0x00024519) linegrid_hwr_fs_pane_g1

0xd93e,	// (0x0002cdb5) linegrid_hwr_fs_pane_g2_ParamLimits

0xd93e,	// (0x0002cdb5) linegrid_hwr_fs_pane_g2

0x50c0,	// (0x00024537) linegrid_hwr_fs_pane_g3_ParamLimits

0x50c0,	// (0x00024537) linegrid_hwr_fs_pane_g3

0x21c8,	// (0x0002163f) linegrid_hwr_fs_pane_g4_ParamLimits

0x21c8,	// (0x0002163f) linegrid_hwr_fs_pane_g4

0x21e2,	// (0x00021659) linegrid_hwr_fs_pane_g5_ParamLimits

0x21e2,	// (0x00021659) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0002ec6d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002ec6d) linegrid_hwr_fs_pane_g

0x50cc,	// (0x00024543) cell_hwr_fs_pane_g1_ParamLimits

0x50cc,	// (0x00024543) cell_hwr_fs_pane_g1

0x4e0a,	// (0x00024281) cell_hwr_fs_pane_g2_ParamLimits

0x4e0a,	// (0x00024281) cell_hwr_fs_pane_g2

0xd950,	// (0x0002cdc7) cell_hwr_fs_pane_g3_ParamLimits

0xd950,	// (0x0002cdc7) cell_hwr_fs_pane_g3

0xd95d,	// (0x0002cdd4) cell_hwr_fs_pane_g4_ParamLimits

0xd95d,	// (0x0002cdd4) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0002ec78) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0002ec78) cell_hwr_fs_pane_g

0xc86c,	// (0x0002bce3) cell_hwr_fs_pane_t1

0x3189,	// (0x00022600) grid_highlight_pane_cp6

0x3189,	// (0x00022600) main_idle_act2_pane

0x3c38,	// (0x000230af) aid_inside_area_popup_secondary

0xdaba,	// (0x0002cf31) aid_inside_area_window_primary_ParamLimits

0xdaba,	// (0x0002cf31) aid_inside_area_window_primary

0x693b,	// (0x00025db2) ai2_news_ticker_pane

0x6943,	// (0x00025dba) aid_size_cell_ai1_link_ParamLimits

0x6943,	// (0x00025dba) aid_size_cell_ai1_link

0xde61,	// (0x0002d2d8) popup_ai2_data_window_ParamLimits

0xde61,	// (0x0002d2d8) popup_ai2_data_window

0x6973,	// (0x00025dea) popup_ai2_link_window_ParamLimits

0x6973,	// (0x00025dea) popup_ai2_link_window

0x5096,	// (0x0002450d) bg_popup_sub_pane_cp4_ParamLimits

0x5096,	// (0x0002450d) bg_popup_sub_pane_cp4

0x6987,	// (0x00025dfe) grid_ai2_link_pane_ParamLimits

0x6987,	// (0x00025dfe) grid_ai2_link_pane

0x699e,	// (0x00025e15) popup_ai2_link_window_g1_ParamLimits

0x699e,	// (0x00025e15) popup_ai2_link_window_g1

0x69aa,	// (0x00025e21) popup_ai2_link_window_g2_ParamLimits

0x69aa,	// (0x00025e21) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0002ee4b) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0002ee4b) popup_ai2_link_window_g

0x69b9,	// (0x00025e30) ai2_mp_button_pane

0x69c1,	// (0x00025e38) ai2_mp_volume_pane

0x52b5,	// (0x0002472c) bg_popup_sub_pane_cp5_ParamLimits

0x52b5,	// (0x0002472c) bg_popup_sub_pane_cp5

0x69c9,	// (0x00025e40) heading_ai2_gene_pane_ParamLimits

0x69c9,	// (0x00025e40) heading_ai2_gene_pane

0x69d5,	// (0x00025e4c) list_ai2_gene_pane_ParamLimits

0x69d5,	// (0x00025e4c) list_ai2_gene_pane

0x6a1d,	// (0x00025e94) cell_ai2_link_pane_ParamLimits

0x6a1d,	// (0x00025e94) cell_ai2_link_pane

0x6a33,	// (0x00025eaa) cell_ai2_link_pane_g1

0x3189,	// (0x00022600) grid_highlight_pane_cp7

0x24a8,	// (0x0002191f) ai2_mp_volume_pane_g1

0x6b03,	// (0x00025f7a) ai2_mp_volume_pane_g2

0xde8b,	// (0x0002d302) list_ai2_gene_pane_t1

0x6b0b,	// (0x00025f82) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0002ee64) ai2_mp_volume_pane_g

0x24b0,	// (0x00021927) volume_small_pane_cp3

0x6b13,	// (0x00025f8a) aid_size_cell_ai2_button

0x6b1b,	// (0x00025f92) grid_ai2_button_pane

0x6b24,	// (0x00025f9b) cell_ai2_button_pane_ParamLimits

0x6b24,	// (0x00025f9b) cell_ai2_button_pane

0x317f,	// (0x000225f6) cell_ai2_button_pane_g1

0x3189,	// (0x00022600) grid_highlight_pane_cp8

0x6ac3,	// (0x00025f3a) ai2_gene_pane_t1_ParamLimits

0x6ac3,	// (0x00025f3a) ai2_gene_pane_t1

0xc148,	// (0x0002b5bf) aid_height_parent_landscape

0xdc0f,	// (0x0002d086) aid_height_set_list

0x6459,	// (0x000258d0) aid_size_parent

0x6762,	// (0x00025bd9) aid_size_cell_graphic_pane_ParamLimits

0x69e5,	// (0x00025e5c) popup_ai2_data_window_g1_ParamLimits

0x69e5,	// (0x00025e5c) popup_ai2_data_window_g1

0x69f1,	// (0x00025e68) ai2_news_ticker_pane_g1

0x69f9,	// (0x00025e70) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0002ee50) ai2_news_ticker_pane_g

0x6a01,	// (0x00025e78) ai2_news_ticker_pane_t1

0x6a0f,	// (0x00025e86) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0002ee55) ai2_news_ticker_pane_t

0x6a3c,	// (0x00025eb3) heading_ai2_gene_pane_g1

0x6a44,	// (0x00025ebb) heading_ai2_gene_pane_t1_ParamLimits

0x6a44,	// (0x00025ebb) heading_ai2_gene_pane_t1

0x6a59,	// (0x00025ed0) list_highlight_pane_cp6

0xde75,	// (0x0002d2ec) ai2_gene_pane_ParamLimits

0xde75,	// (0x0002d2ec) ai2_gene_pane

0xde99,	// (0x0002d310) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0002ee5a) list_ai2_gene_pane_t

0x6a94,	// (0x00025f0b) list_highlight_pane_cp8_ParamLimits

0x6a94,	// (0x00025f0b) list_highlight_pane_cp8

0x6aa5,	// (0x00025f1c) ai2_gene_pane_g1_ParamLimits

0x6aa5,	// (0x00025f1c) ai2_gene_pane_g1

0x6ab7,	// (0x00025f2e) ai2_gene_pane_g2_ParamLimits

0x6ab7,	// (0x00025f2e) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0002ee5f) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0002ee5f) ai2_gene_pane_g

0x3a6b,	// (0x00022ee2) scroll_pane_cp12

0xc107,	// (0x0002b57e) control_pane_t3_ParamLimits

0xc107,	// (0x0002b57e) control_pane_t3

0x49d4,	// (0x00023e4b) status_small_pane_g8_ParamLimits

0x49d4,	// (0x00023e4b) status_small_pane_g8

0xc253,	// (0x0002b6ca) popup_find_window_ParamLimits

0xc4da,	// (0x0002b951) popup_note_image_window_ParamLimits

0x088e,	// (0x0001fd05) list_double2_graphic_pane_vc_g1_ParamLimits

0x088e,	// (0x0001fd05) list_double2_graphic_pane_vc_g1

0x08fa,	// (0x0001fd71) list_double2_graphic_pane_vc_g2_ParamLimits

0x08fa,	// (0x0001fd71) list_double2_graphic_pane_vc_g2

0x0906,	// (0x0001fd7d) list_double2_graphic_pane_vc_g3_ParamLimits

0x0906,	// (0x0001fd7d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0002ec3b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002ec3b) list_double2_graphic_pane_vc_g

0x0912,	// (0x0001fd89) list_double2_graphic_pane_vc_t1_ParamLimits

0x0912,	// (0x0001fd89) list_double2_graphic_pane_vc_t1

0x089a,	// (0x0001fd11) list_single_heading_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_heading_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_single_heading_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_heading_pane_vc_g

0x0928,	// (0x0001fd9f) list_single_heading_pane_vc_t1_ParamLimits

0x0928,	// (0x0001fd9f) list_single_heading_pane_vc_t1

0x0940,	// (0x0001fdb7) list_single_heading_pane_vc_t2_ParamLimits

0x0940,	// (0x0001fdb7) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0002ec5c) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0002ec5c) list_single_heading_pane_vc_t

0x4fe6,	// (0x0002445d) list_setting_number_pane_vc_g1_ParamLimits

0x4fe6,	// (0x0002445d) list_setting_number_pane_vc_g1

0x4ff2,	// (0x00024469) list_setting_number_pane_vc_g2_ParamLimits

0x4ff2,	// (0x00024469) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002ec61) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002ec61) list_setting_number_pane_vc_g

0x4ffe,	// (0x00024475) list_setting_number_pane_vc_t1_ParamLimits

0x4ffe,	// (0x00024475) list_setting_number_pane_vc_t1

0x5012,	// (0x00024489) list_setting_number_pane_vc_t2_ParamLimits

0x5012,	// (0x00024489) list_setting_number_pane_vc_t2

0x502e,	// (0x000244a5) list_setting_number_pane_vc_t3_ParamLimits

0x502e,	// (0x000244a5) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0002ec66) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0002ec66) list_setting_number_pane_vc_t

0x505a,	// (0x000244d1) set_value_pane_vc_ParamLimits

0x505a,	// (0x000244d1) set_value_pane_vc

0x662c,	// (0x00025aa3) list_double2_graphic_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double2_graphic_pane_vc

0x662c,	// (0x00025aa3) list_double2_large_graphic_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double2_large_graphic_pane_vc

0x662c,	// (0x00025aa3) list_double2_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double2_pane_vc

0x662c,	// (0x00025aa3) list_double_graphic_heading_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_graphic_heading_pane_vc

0x662c,	// (0x00025aa3) list_double_graphic_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_graphic_pane_vc

0x662c,	// (0x00025aa3) list_double_heading_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_heading_pane_vc

0x662c,	// (0x00025aa3) list_double_large_graphic_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_large_graphic_pane_vc

0x662c,	// (0x00025aa3) list_double_number_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_number_pane_vc

0x662c,	// (0x00025aa3) list_double_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_pane_vc

0x662c,	// (0x00025aa3) list_double_time_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_double_time_pane_vc

0x662c,	// (0x00025aa3) list_setting_number_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_setting_number_pane_vc

0x662c,	// (0x00025aa3) list_setting_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_setting_pane_vc

0x662c,	// (0x00025aa3) list_single_graphic_heading_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_single_graphic_heading_pane_vc

0x662c,	// (0x00025aa3) list_single_heading_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_single_heading_pane_vc

0x662c,	// (0x00025aa3) list_single_number_heading_pane_vc_ParamLimits

0x662c,	// (0x00025aa3) list_single_number_heading_pane_vc

0x0ab9,	// (0x0001ff30) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ab9,	// (0x0001ff30) list_double_graphic_heading_pane_vc_g1

0x089a,	// (0x0001fd11) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x089a,	// (0x0001fd11) list_double_graphic_heading_pane_vc_g2

0x08a6,	// (0x0001fd1d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0002ee6b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002ee6b) list_double_graphic_heading_pane_vc_g

0x0ac5,	// (0x0001ff3c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0ac5,	// (0x0001ff3c) list_double_graphic_heading_pane_vc_t1

0x0928,	// (0x0001fd9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0928,	// (0x0001fd9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0002ee72) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0002ee72) list_double_graphic_heading_pane_vc_t

0x4fe6,	// (0x0002445d) list_setting_pane_vc_g1_ParamLimits

0x4fe6,	// (0x0002445d) list_setting_pane_vc_g1

0x4ff2,	// (0x00024469) list_setting_pane_vc_g2_ParamLimits

0x4ff2,	// (0x00024469) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002ec61) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002ec61) list_setting_pane_vc_g

0x6d64,	// (0x000261db) list_setting_pane_vc_t1_ParamLimits

0x6d64,	// (0x000261db) list_setting_pane_vc_t1

0x6d80,	// (0x000261f7) list_setting_pane_vc_t2_ParamLimits

0x6d80,	// (0x000261f7) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002eeb5) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002eeb5) list_setting_pane_vc_t

0x505a,	// (0x000244d1) set_value_pane_cp_vc_ParamLimits

0x505a,	// (0x000244d1) set_value_pane_cp_vc

0x089a,	// (0x0001fd11) list_single_number_heading_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_single_number_heading_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_single_number_heading_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_single_number_heading_pane_vc_g

0x0928,	// (0x0001fd9f) list_single_number_heading_pane_vc_t1_ParamLimits

0x0928,	// (0x0001fd9f) list_single_number_heading_pane_vc_t1

0x0ad9,	// (0x0001ff50) list_single_number_heading_pane_vc_t2_ParamLimits

0x0ad9,	// (0x0001ff50) list_single_number_heading_pane_vc_t2

0x0aed,	// (0x0001ff64) list_single_number_heading_pane_vc_t3_ParamLimits

0x0aed,	// (0x0001ff64) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0002eeba) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002eeba) list_single_number_heading_pane_vc_t

0x088e,	// (0x0001fd05) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x088e,	// (0x0001fd05) list_single_graphic_heading_pane_vc_g1

0x089a,	// (0x0001fd11) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x089a,	// (0x0001fd11) list_single_graphic_heading_pane_vc_g4

0x08a6,	// (0x0001fd1d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x08a6,	// (0x0001fd1d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002ec2d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002ec2d) list_single_graphic_heading_pane_vc_g

0x0928,	// (0x0001fd9f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0928,	// (0x0001fd9f) list_single_graphic_heading_pane_vc_t1

0x0aff,	// (0x0001ff76) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0aff,	// (0x0001ff76) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0002eec1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0002eec1) list_single_graphic_heading_pane_vc_t

0x089a,	// (0x0001fd11) list_double2_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_double2_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_double2_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_double2_pane_vc_g

0x0b13,	// (0x0001ff8a) list_double2_pane_vc_t1_ParamLimits

0x0b13,	// (0x0001ff8a) list_double2_pane_vc_t1

0x0b29,	// (0x0001ffa0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0b29,	// (0x0001ffa0) list_double2_large_graphic_pane_vc_g1

0x089a,	// (0x0001fd11) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x089a,	// (0x0001fd11) list_double2_large_graphic_pane_vc_g2

0x08a6,	// (0x0001fd1d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0002ea62) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0002ea62) list_double2_large_graphic_pane_vc_g

0x0b35,	// (0x0001ffac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0b35,	// (0x0001ffac) list_double2_large_graphic_pane_vc_t1

0x0b4b,	// (0x0001ffc2) list_double_time_pane_vc_g1_ParamLimits

0x0b4b,	// (0x0001ffc2) list_double_time_pane_vc_g1

0x0b57,	// (0x0001ffce) list_double_time_pane_vc_g2_ParamLimits

0x0b57,	// (0x0001ffce) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0002eec6) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0002eec6) list_double_time_pane_vc_g

0x0b63,	// (0x0001ffda) list_double_time_pane_vc_t1_ParamLimits

0x0b63,	// (0x0001ffda) list_double_time_pane_vc_t1

0x0b87,	// (0x0001fffe) list_double_time_pane_vc_t2_ParamLimits

0x0b87,	// (0x0001fffe) list_double_time_pane_vc_t2

0x0bd1,	// (0x00020048) list_double_time_pane_vc_t3_ParamLimits

0x0bd1,	// (0x00020048) list_double_time_pane_vc_t3

0x0be3,	// (0x0002005a) list_double_time_pane_vc_t4_ParamLimits

0x0be3,	// (0x0002005a) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0002eecb) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0002eecb) list_double_time_pane_vc_t

0x089a,	// (0x0001fd11) list_double_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_double_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_double_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_double_pane_vc_g

0x0c08,	// (0x0002007f) list_double_pane_vc_t1_ParamLimits

0x0c08,	// (0x0002007f) list_double_pane_vc_t1

0x0c1c,	// (0x00020093) list_double_pane_vc_t2_ParamLimits

0x0c1c,	// (0x00020093) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0002eed4) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002eed4) list_double_pane_vc_t

0x089a,	// (0x0001fd11) list_double_number_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_double_number_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_double_number_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_double_number_pane_vc_g

0x0c34,	// (0x000200ab) list_double_number_pane_vc_t1_ParamLimits

0x0c34,	// (0x000200ab) list_double_number_pane_vc_t1

0x0c48,	// (0x000200bf) list_double_number_pane_vc_t2_ParamLimits

0x0c48,	// (0x000200bf) list_double_number_pane_vc_t2

0x0c1c,	// (0x00020093) list_double_number_pane_vc_t3_ParamLimits

0x0c1c,	// (0x00020093) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0002eed9) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0002eed9) list_double_number_pane_vc_t

0x0c5c,	// (0x000200d3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0c5c,	// (0x000200d3) list_double_large_graphic_pane_vc_g1

0x0c6d,	// (0x000200e4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0c6d,	// (0x000200e4) list_double_large_graphic_pane_vc_g2

0x08a6,	// (0x0001fd1d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x08a6,	// (0x0001fd1d) list_double_large_graphic_pane_vc_g3

0x0c7c,	// (0x000200f3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0c7c,	// (0x000200f3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0002eee0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0002eee0) list_double_large_graphic_pane_vc_g

0x0c88,	// (0x000200ff) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0c88,	// (0x000200ff) list_double_large_graphic_pane_vc_t1

0x0ca1,	// (0x00020118) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0ca1,	// (0x00020118) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0002eee9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0002eee9) list_double_large_graphic_pane_vc_t

0x089a,	// (0x0001fd11) list_double_heading_pane_vc_g1_ParamLimits

0x089a,	// (0x0001fd11) list_double_heading_pane_vc_g1

0x08a6,	// (0x0001fd1d) list_double_heading_pane_vc_g2_ParamLimits

0x08a6,	// (0x0001fd1d) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002ea45) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002ea45) list_double_heading_pane_vc_g

0x0cba,	// (0x00020131) list_double_heading_pane_vc_t1_ParamLimits

0x0cba,	// (0x00020131) list_double_heading_pane_vc_t1

0x0928,	// (0x0001fd9f) list_double_heading_pane_vc_t2_ParamLimits

0x0928,	// (0x0001fd9f) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0002eeee) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0002eeee) list_double_heading_pane_vc_t

0x0cce,	// (0x00020145) list_double_graphic_pane_vc_g1_ParamLimits

0x0cce,	// (0x00020145) list_double_graphic_pane_vc_g1

0x0cde,	// (0x00020155) list_double_graphic_pane_vc_g2_ParamLimits

0x0cde,	// (0x00020155) list_double_graphic_pane_vc_g2

0x0ced,	// (0x00020164) list_double_graphic_pane_vc_g3_ParamLimits

0x0ced,	// (0x00020164) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0002eef3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0002eef3) list_double_graphic_pane_vc_g

0x0cf9,	// (0x00020170) list_double_graphic_pane_vc_t1_ParamLimits

0x0cf9,	// (0x00020170) list_double_graphic_pane_vc_t1

0x0c1c,	// (0x00020093) list_double_graphic_pane_vc_t2_ParamLimits

0x0c1c,	// (0x00020093) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0002eefa) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0002eefa) list_double_graphic_pane_vc_t

0x10f8,	// (0x0002056f) aid_size_cell_fastswap

0xbd78,	// (0x0002b1ef) aid_size_cell_touch_ParamLimits

0xbd78,	// (0x0002b1ef) aid_size_cell_touch

0x135b,	// (0x000207d2) popup_fast_swap_wide_window_ParamLimits

0x135b,	// (0x000207d2) popup_fast_swap_wide_window

0xbec3,	// (0x0002b33a) touch_pane_ParamLimits

0xbec3,	// (0x0002b33a) touch_pane

0x3ac1,	// (0x00022f38) button_value_adjust_pane_cp2

0x0586,	// (0x0001f9fd) button_value_adjust_pane_cp4

0x05a6,	// (0x0001fa1d) form_field_data_pane_cp2

0xb8e4,	// (0x0002ad5b) form_field_data_wide_pane_cp2

0x3f4c,	// (0x000233c3) bg_scroll_pane_ParamLimits

0x16f5,	// (0x00020b6c) scroll_handle_pane_ParamLimits

0x1709,	// (0x00020b80) scroll_sc2_down_pane_ParamLimits

0x1709,	// (0x00020b80) scroll_sc2_down_pane

0x3f7d,	// (0x000233f4) scroll_sc2_up_pane_ParamLimits

0x3f7d,	// (0x000233f4) scroll_sc2_up_pane

0xdfc3,	// (0x0002d43a) grid_wheel_folder_pane_g1_ParamLimits

0xdfc3,	// (0x0002d43a) grid_wheel_folder_pane_g1

0x18ce,	// (0x00020d45) clock_nsta_pane_cp2_ParamLimits

0x18ce,	// (0x00020d45) clock_nsta_pane_cp2

0x4a9d,	// (0x00023f14) listscroll_midp_pane_ParamLimits

0xd467,	// (0x0002c8de) midp_canvas_pane

0x4a4f,	// (0x00023ec6) nsta_clock_indic_pane

0x4a83,	// (0x00023efa) listscroll_form_pane_vc

0x4a8b,	// (0x00023f02) listscroll_set_pane_vc_ParamLimits

0x4a8b,	// (0x00023f02) listscroll_set_pane_vc

0xd64f,	// (0x0002cac6) clock_nsta_pane

0xd679,	// (0x0002caf0) indicator_nsta_pane

0x4ed0,	// (0x00024347) bg_popup_sub_pane_cp2_ParamLimits

0x4ee4,	// (0x0002435b) find_pane_cp2_ParamLimits

0x4ee4,	// (0x0002435b) find_pane_cp2

0x4efa,	// (0x00024371) grid_toobar_pane_ParamLimits

0x506a,	// (0x000244e1) list_form_gen_pane_vc_ParamLimits

0x506a,	// (0x000244e1) list_form_gen_pane_vc

0x5080,	// (0x000244f7) scroll_pane_cp8_vc_ParamLimits

0x5080,	// (0x000244f7) scroll_pane_cp8_vc

0x50fc,	// (0x00024573) data_form_wide_pane_vc_ParamLimits

0x50fc,	// (0x00024573) data_form_wide_pane_vc

0x5108,	// (0x0002457f) form_field_data_wide_pane_vc_g1

0x5110,	// (0x00024587) form_field_data_wide_pane_vc_t1_ParamLimits

0x5110,	// (0x00024587) form_field_data_wide_pane_vc_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_cp6_vc_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_cp6_vc

0xda17,	// (0x0002ce8e) list_midp_pane_ParamLimits

0x67c8,	// (0x00025c3f) scroll_pane_cp16_ParamLimits

0x67c8,	// (0x00025c3f) scroll_pane_cp16

0x54a2,	// (0x00024919) button_value_adjust_pane_ParamLimits

0x54a2,	// (0x00024919) button_value_adjust_pane

0xdc20,	// (0x0002d097) button_value_adjust_pane_cp6_ParamLimits

0xdc20,	// (0x0002d097) button_value_adjust_pane_cp6

0xdd3a,	// (0x0002d1b1) settings_code_pane_cp_ParamLimits

0xdd3a,	// (0x0002d1b1) settings_code_pane_cp

0x317f,	// (0x000225f6) cell_touch_pane_g1

0x317f,	// (0x000225f6) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002eb80) cell_touch_pane_g

0xdea7,	// (0x0002d31e) cell_touch_pane_cp_ParamLimits

0xdea7,	// (0x0002d31e) cell_touch_pane_cp

0xdec3,	// (0x0002d33a) cell_touch_pane_ParamLimits

0xdec3,	// (0x0002d33a) cell_touch_pane

0x317f,	// (0x000225f6) scroll_sc2_down_pane_g1

0x317f,	// (0x000225f6) scroll_sc2_up_pane_g1

0x3189,	// (0x00022600) bg_set_opt_pane_cp4_vc

0x6b58,	// (0x00025fcf) list_set_graphic_pane_vc_g1_ParamLimits

0x6b58,	// (0x00025fcf) list_set_graphic_pane_vc_g1

0x6b64,	// (0x00025fdb) list_set_graphic_pane_vc_g2_ParamLimits

0x6b64,	// (0x00025fdb) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0002ee77) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0002ee77) list_set_graphic_pane_vc_g

0x6b70,	// (0x00025fe7) text_primary_small_cp13_vc_ParamLimits

0x6b70,	// (0x00025fe7) text_primary_small_cp13_vc

0x6b88,	// (0x00025fff) list_set_graphic_pane_vc_ParamLimits

0x6b88,	// (0x00025fff) list_set_graphic_pane_vc

0x3189,	// (0x00022600) input_focus_pane_cp2_vc

0x317f,	// (0x000225f6) setting_code_pane_vc_g1

0x32b4,	// (0x0002272b) setting_code_pane_vc_t1

0x6b9a,	// (0x00026011) set_text_pane_vc_t1_ParamLimits

0x6b9a,	// (0x00026011) set_text_pane_vc_t1

0x3189,	// (0x00022600) input_focus_pane_cp1_vc

0x6bb5,	// (0x0002602c) list_set_text_pane_vc

0x317f,	// (0x000225f6) setting_text_pane_vc_g1

0x3189,	// (0x00022600) bg_set_opt_pane_cp2_vc

0x32ab,	// (0x00022722) setting_slider_graphic_pane_vc_g1

0x6bbf,	// (0x00026036) setting_slider_graphic_pane_vc_t1

0x6bcf,	// (0x00026046) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0002ee7c) setting_slider_graphic_pane_vc_t

0x6bdf,	// (0x00026056) slider_set_pane_cp_vc

0x6be7,	// (0x0002605e) slider_set_pane_vc_g1

0x6bf0,	// (0x00026067) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0002ee81) slider_set_pane_vc_g

0x3b3c,	// (0x00022fb3) set_opt_bg_pane_g1_copy1

0x3b44,	// (0x00022fbb) set_opt_bg_pane_g2_copy1

0x6c1c,	// (0x00026093) set_opt_bg_pane_g3_copy1

0x3b54,	// (0x00022fcb) set_opt_bg_pane_g4_copy1

0x3b5c,	// (0x00022fd3) set_opt_bg_pane_g5_copy1

0x3b64,	// (0x00022fdb) set_opt_bg_pane_g6_copy1

0x6c26,	// (0x0002609d) set_opt_bg_pane_g7_copy1

0x6c2e,	// (0x000260a5) set_opt_bg_pane_g8_copy1

0x6c38,	// (0x000260af) set_opt_bg_pane_g9_copy1

0x3189,	// (0x00022600) bg_set_opt_pane_cp_vc

0x6c42,	// (0x000260b9) setting_slider_pane_vc_t1

0x6c51,	// (0x000260c8) setting_slider_pane_vc_t2

0x6c61,	// (0x000260d8) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0002ee90) setting_slider_pane_vc_t

0x6c71,	// (0x000260e8) slider_set_pane_vc

0x2206,	// (0x0002167d) volume_set_pane_vc_g1

0x220f,	// (0x00021686) volume_set_pane_vc_g2

0x2218,	// (0x0002168f) volume_set_pane_vc_g3

0x2221,	// (0x00021698) volume_set_pane_vc_g4

0x222a,	// (0x000216a1) volume_set_pane_vc_g5

0x2233,	// (0x000216aa) volume_set_pane_vc_g6

0x223c,	// (0x000216b3) volume_set_pane_vc_g7

0x2245,	// (0x000216bc) volume_set_pane_vc_g8

0x224e,	// (0x000216c5) volume_set_pane_vc_g9

0x2257,	// (0x000216ce) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x0002ee97) volume_set_pane_vc_g

0x6c79,	// (0x000260f0) volume_set_pane_vc

0x6c81,	// (0x000260f8) button_value_adjust_pane_cp1_vc

0x6c8b,	// (0x00026102) list_highlight_pane_cp2_vc

0x6c94,	// (0x0002610b) list_set_pane_vc_ParamLimits

0x6c94,	// (0x0002610b) list_set_pane_vc

0x6cf2,	// (0x00026169) main_pane_set_vc_t1_ParamLimits

0x6cf2,	// (0x00026169) main_pane_set_vc_t1

0x6d07,	// (0x0002617e) main_pane_set_vc_t2_ParamLimits

0x6d07,	// (0x0002617e) main_pane_set_vc_t2

0x6d19,	// (0x00026190) main_pane_set_vc_t3_ParamLimits

0x6d19,	// (0x00026190) main_pane_set_vc_t3

0x6d2d,	// (0x000261a4) main_pane_set_vc_t4_ParamLimits

0x6d2d,	// (0x000261a4) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0002eeac) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0002eeac) main_pane_set_vc_t

0x6d41,	// (0x000261b8) setting_code_pane_vc_ParamLimits

0x6d41,	// (0x000261b8) setting_code_pane_vc

0x6d52,	// (0x000261c9) setting_slider_graphic_pane_vc

0x6d52,	// (0x000261c9) setting_slider_pane_vc

0x6d52,	// (0x000261c9) setting_text_pane_vc

0x6d52,	// (0x000261c9) setting_volume_pane_vc

0x6d5c,	// (0x000261d3) scroll_pane_cp121_vc

0x3aaf,	// (0x00022f26) set_content_pane_vc

0x6d9c,	// (0x00026213) button_value_adjust_pane_g1

0x6da5,	// (0x0002621c) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0002eeff) button_value_adjust_pane_g

0x6dae,	// (0x00026225) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6dae,	// (0x00026225) form_field_slider_wide_pane_vc_t1

0x6dc2,	// (0x00026239) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6dc2,	// (0x00026239) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002ef04) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002ef04) form_field_slider_wide_pane_vc_t

0x34e4,	// (0x0002295b) input_focus_pane_cp10_vc_ParamLimits

0x34e4,	// (0x0002295b) input_focus_pane_cp10_vc

0x6df0,	// (0x00026267) slider_cont_pane_cp1_vc_ParamLimits

0x6df0,	// (0x00026267) slider_cont_pane_cp1_vc

0x6e02,	// (0x00026279) slider_form_pane_g1_cp2

0x6bf0,	// (0x00026067) slider_form_pane_g2_cp2

0x6e2f,	// (0x000262a6) form_field_slider_pane_vc_t3

0x6e3d,	// (0x000262b4) form_field_slider_pane_vc_t4

0x6e4b,	// (0x000262c2) slider_form_pane_vc_ParamLimits

0x6e4b,	// (0x000262c2) slider_form_pane_vc

0x6e58,	// (0x000262cf) form_field_slider_pane_vc_t1_ParamLimits

0x6e58,	// (0x000262cf) form_field_slider_pane_vc_t1

0x6dc2,	// (0x00026239) form_field_slider_pane_vc_t2_ParamLimits

0x6dc2,	// (0x00026239) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002ef16) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002ef16) form_field_slider_pane_vc_t

0x34e4,	// (0x0002295b) input_focus_pane_cp9_vc_ParamLimits

0x34e4,	// (0x0002295b) input_focus_pane_cp9_vc

0x6e74,	// (0x000262eb) slider_cont_pane_vc_ParamLimits

0x6e74,	// (0x000262eb) slider_cont_pane_vc

0x6e88,	// (0x000262ff) list_form_graphic_pane_cp_vc_ParamLimits

0x6e88,	// (0x000262ff) list_form_graphic_pane_cp_vc

0x5108,	// (0x0002457f) form_field_popup_wide_pane_vc_g1

0x6e9d,	// (0x00026314) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e9d,	// (0x00026314) form_field_popup_wide_pane_vc_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_cp8_vc_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_cp8_vc

0x6ee2,	// (0x00026359) list_form_wide_pane_vc_ParamLimits

0x6ee2,	// (0x00026359) list_form_wide_pane_vc

0x6eee,	// (0x00026365) list_form_graphic_pane_vc_g1

0x6ef6,	// (0x0002636d) list_form_graphic_pane_vc_t1_ParamLimits

0x6ef6,	// (0x0002636d) list_form_graphic_pane_vc_t1

0x3269,	// (0x000226e0) list_highlight_pane_cp5_vc_ParamLimits

0x3269,	// (0x000226e0) list_highlight_pane_cp5_vc

0x6f12,	// (0x00026389) list_form_graphic_pane_vc_ParamLimits

0x6f12,	// (0x00026389) list_form_graphic_pane_vc

0x5108,	// (0x0002457f) form_field_popup_pane_vc_g1

0x6f28,	// (0x0002639f) form_field_popup_pane_vc_t1_ParamLimits

0x6f28,	// (0x0002639f) form_field_popup_pane_vc_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_cp7_vc_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_cp7_vc

0x6f3f,	// (0x000263b6) list_form_pane_vc_ParamLimits

0x6f3f,	// (0x000263b6) list_form_pane_vc

0x6f4b,	// (0x000263c2) data_form_pane_vc_t1_ParamLimits

0x6f4b,	// (0x000263c2) data_form_pane_vc_t1

0x3b3c,	// (0x00022fb3) input_focus_pane_vc_g1

0x3b44,	// (0x00022fbb) input_focus_pane_vc_g2

0x3b4c,	// (0x00022fc3) input_focus_pane_vc_g3

0x3b54,	// (0x00022fcb) input_focus_pane_vc_g4

0x3b5c,	// (0x00022fd3) input_focus_pane_vc_g5

0x3b64,	// (0x00022fdb) input_focus_pane_vc_g6

0x3b6c,	// (0x00022fe3) input_focus_pane_vc_g7

0x3b74,	// (0x00022feb) input_focus_pane_vc_g8

0x3b7c,	// (0x00022ff3) input_focus_pane_vc_g9

0x317f,	// (0x000225f6) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002eb09) input_focus_pane_vc_g

0x50fc,	// (0x00024573) data_form_pane_vc_ParamLimits

0x50fc,	// (0x00024573) data_form_pane_vc

0x5108,	// (0x0002457f) form_field_data_pane_vc_g1

0x6f66,	// (0x000263dd) form_field_data_pane_vc_t1_ParamLimits

0x6f66,	// (0x000263dd) form_field_data_pane_vc_t1

0x3ad5,	// (0x00022f4c) input_focus_pane_vc_ParamLimits

0x3ad5,	// (0x00022f4c) input_focus_pane_vc

0x6f80,	// (0x000263f7) button_value_adjust_pane_cp3_vc

0x6f88,	// (0x000263ff) button_value_adjust_pane_cp5_vc

0x6f90,	// (0x00026407) form_field_data_pane_vc_ParamLimits

0x6f90,	// (0x00026407) form_field_data_pane_vc

0x6fa7,	// (0x0002641e) form_field_data_pane_vc_cp2

0x6faf,	// (0x00026426) form_field_data_wide_pane_vc_ParamLimits

0x6faf,	// (0x00026426) form_field_data_wide_pane_vc

0x6fc5,	// (0x0002643c) form_field_data_wide_pane_vc_cp2

0x6fcd,	// (0x00026444) form_field_popup_pane_vc_ParamLimits

0x6fcd,	// (0x00026444) form_field_popup_pane_vc

0x6fe4,	// (0x0002645b) form_field_popup_wide_pane_vc_ParamLimits

0x6fe4,	// (0x0002645b) form_field_popup_wide_pane_vc

0x6ffa,	// (0x00026471) form_field_slider_pane_vc_ParamLimits

0x6ffa,	// (0x00026471) form_field_slider_pane_vc

0x700d,	// (0x00026484) form_field_slider_wide_pane_vc_ParamLimits

0x700d,	// (0x00026484) form_field_slider_wide_pane_vc

0xdee1,	// (0x0002d358) grid_touch_1_pane_ParamLimits

0xdee1,	// (0x0002d358) grid_touch_1_pane

0xdef5,	// (0x0002d36c) grid_touch_2_pane_ParamLimits

0xdef5,	// (0x0002d36c) grid_touch_2_pane

0x70e2,	// (0x00026559) touch_pane_g1_ParamLimits

0x70e2,	// (0x00026559) touch_pane_g1

0x7044,	// (0x000264bb) cell_app_pane_cp_wide_ParamLimits

0x7044,	// (0x000264bb) cell_app_pane_cp_wide

0x7055,	// (0x000264cc) grid_popup_fast_wide_pane_ParamLimits

0x7055,	// (0x000264cc) grid_popup_fast_wide_pane

0x7069,	// (0x000264e0) scroll_pane_cp19_ParamLimits

0x7069,	// (0x000264e0) scroll_pane_cp19

0x3189,	// (0x00022600) bg_popup_window_pane_cp20

0x707d,	// (0x000264f4) listscroll_popup_fast_wide_pane

0x3ca4,	// (0x0002311b) grid_indicator_nsta_pane

0x7085,	// (0x000264fc) clock_nsta_pane_g1

0x708e,	// (0x00026505) clock_nsta_pane_t1

0xdf1f,	// (0x0002d396) cell_indicator_nsta_pane_ParamLimits

0xdf1f,	// (0x0002d396) cell_indicator_nsta_pane

0x70e2,	// (0x00026559) cell_indicator_nsta_pane_g1

0xdf38,	// (0x0002d3af) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002ef27) cell_indicator_nsta_pane_g

0x7106,	// (0x0002657d) clock_nsta_pane_cp

0x710e,	// (0x00026585) indicator_nsta_pane_cp

0x7117,	// (0x0002658e) nsta_clock_indic_pane_g1

0x3332,	// (0x000227a9) grid_indicator_pane

0x4072,	// (0x000234e9) scroll_pane_cp29

0x181d,	// (0x00020c94) indicator_nsta_pane_cp2_ParamLimits

0x181d,	// (0x00020c94) indicator_nsta_pane_cp2

0x3269,	// (0x000226e0) main_apps_wheel_pane

0x5329,	// (0x000247a0) form_midp_field_text_pane_ParamLimits

0x5474,	// (0x000248eb) scroll_bar_cp050_ParamLimits

0x7180,	// (0x000265f7) cell_indicator_pane_ParamLimits

0x7180,	// (0x000265f7) cell_indicator_pane

0x7197,	// (0x0002660e) cell_indicator_pane_g1

0xdf4d,	// (0x0002d3c4) grid_wheel_folder_pane_ParamLimits

0xdf4d,	// (0x0002d3c4) grid_wheel_folder_pane

0xdf5b,	// (0x0002d3d2) list_wheel_apps_pane_ParamLimits

0xdf5b,	// (0x0002d3d2) list_wheel_apps_pane

0xdf69,	// (0x0002d3e0) main_apps_wheel_pane_g1_ParamLimits

0xdf69,	// (0x0002d3e0) main_apps_wheel_pane_g1

0xdf75,	// (0x0002d3ec) main_apps_wheel_pane_g2_ParamLimits

0xdf75,	// (0x0002d3ec) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002ef43) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002ef43) main_apps_wheel_pane_g

0xdf83,	// (0x0002d3fa) main_apps_wheel_pane_t1_ParamLimits

0xdf83,	// (0x0002d3fa) main_apps_wheel_pane_t1

0xdf97,	// (0x0002d40e) list_wheel_apps_pane_g1

0xdf9f,	// (0x0002d416) list_wheel_apps_pane_g2

0xdfa7,	// (0x0002d41e) list_wheel_apps_pane_g3

0xdfaf,	// (0x0002d426) list_wheel_apps_pane_g4

0xdfb9,	// (0x0002d430) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002ef48) list_wheel_apps_pane_g

0x45dd,	// (0x00023a54) navi_icon_text_pane

0xd543,	// (0x0002c9ba) aid_fill_nsta

0x725a,	// (0x000266d1) navi_icon_text_pane_g1

0x7266,	// (0x000266dd) navi_icon_text_pane_t1

0xd3cd,	// (0x0002c844) list_set_graphic_pane_t1_ParamLimits

0xd3cd,	// (0x0002c844) list_set_graphic_pane_t1

0x5bc3,	// (0x0002503a) popup_midp_note_alarm_window_t6_ParamLimits

0x5bc3,	// (0x0002503a) popup_midp_note_alarm_window_t6

0x5bd5,	// (0x0002504c) popup_midp_note_alarm_window_t7_ParamLimits

0x5bd5,	// (0x0002504c) popup_midp_note_alarm_window_t7

0x5be7,	// (0x0002505e) popup_midp_note_alarm_window_t8_ParamLimits

0x5be7,	// (0x0002505e) popup_midp_note_alarm_window_t8

0x5bf9,	// (0x00025070) popup_midp_note_alarm_window_t9_ParamLimits

0x5bf9,	// (0x00025070) popup_midp_note_alarm_window_t9

0x5c0b,	// (0x00025082) popup_midp_note_alarm_window_t10_ParamLimits

0x5c0b,	// (0x00025082) popup_midp_note_alarm_window_t10

0x5c1d,	// (0x00025094) popup_midp_note_alarm_window_t11_ParamLimits

0x5c1d,	// (0x00025094) popup_midp_note_alarm_window_t11

0x5c2f,	// (0x000250a6) scroll_pane_cp17_ParamLimits

0x5c2f,	// (0x000250a6) scroll_pane_cp17

0x2206,	// (0x0002167d) volume_small_pane_cp_g1

0x24b9,	// (0x00021930) volume_small_pane_cp_g2

0x24c2,	// (0x00021939) volume_small_pane_cp_g3

0x24cb,	// (0x00021942) volume_small_pane_cp_g4

0x24d4,	// (0x0002194b) volume_small_pane_cp_g5

0x24dd,	// (0x00021954) volume_small_pane_cp_g6

0x24e6,	// (0x0002195d) volume_small_pane_cp_g7

0x24ef,	// (0x00021966) volume_small_pane_cp_g8

0x24f8,	// (0x0002196f) volume_small_pane_cp_g9

0x2501,	// (0x00021978) volume_small_pane_cp_g10

0x482c,	// (0x00023ca3) midp_ticker_pane_g1_ParamLimits

0x4838,	// (0x00023caf) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002ebd5) midp_ticker_pane_g_ParamLimits

0x4844,	// (0x00023cbb) midp_ticker_pane_t1_ParamLimits

0xd567,	// (0x0002c9de) aid_fill_nsta_2

0x5460,	// (0x000248d7) list_form2_midp_pane

0x65e0,	// (0x00025a57) midp_editing_number_pane_ParamLimits

0x65ef,	// (0x00025a66) midp_ticker_pane_ParamLimits

0x7278,	// (0x000266ef) form2_midp_field_pane

0x729c,	// (0x00026713) scroll_pane_cp51

0x72bc,	// (0x00026733) form2_midp_button_pane_ParamLimits

0x72bc,	// (0x00026733) form2_midp_button_pane

0x72ce,	// (0x00026745) form2_midp_content_pane_ParamLimits

0x72ce,	// (0x00026745) form2_midp_content_pane

0x72e8,	// (0x0002675f) form2_midp_field_choice_group_pane

0x72f0,	// (0x00026767) form2_midp_field_pane_g1

0x72f8,	// (0x0002676f) form2_midp_field_pane_g2

0x7300,	// (0x00026777) form2_midp_field_pane_g3

0x7308,	// (0x0002677f) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002ef6d) form2_midp_field_pane_g

0x7310,	// (0x00026787) form2_midp_gauge_slider_pane

0x7318,	// (0x0002678f) form2_midp_gauge_wait_pane

0x7320,	// (0x00026797) form2_midp_image_pane_ParamLimits

0x7320,	// (0x00026797) form2_midp_image_pane

0x733b,	// (0x000267b2) form2_midp_label_pane_ParamLimits

0x733b,	// (0x000267b2) form2_midp_label_pane

0xdfec,	// (0x0002d463) form2_midp_label_pane_cp_ParamLimits

0xdfec,	// (0x0002d463) form2_midp_label_pane_cp

0x7375,	// (0x000267ec) form2_midp_string_pane_ParamLimits

0x7375,	// (0x000267ec) form2_midp_string_pane

0xbb23,	// (0x0002af9a) form2_midp_text_pane_ParamLimits

0xbb23,	// (0x0002af9a) form2_midp_text_pane

0x7387,	// (0x000267fe) form2_midp_time_pane

0x7397,	// (0x0002680e) input_focus_pane_cp51_ParamLimits

0x7397,	// (0x0002680e) input_focus_pane_cp51

0x73af,	// (0x00026826) form2_midp_label_pane_t1_ParamLimits

0x73af,	// (0x00026826) form2_midp_label_pane_t1

0xbb3c,	// (0x0002afb3) form2_mdip_text_pane_t1_ParamLimits

0xbb3c,	// (0x0002afb3) form2_mdip_text_pane_t1

0x0d46,	// (0x000201bd) form2_midp_time_pane_t1

0x73f8,	// (0x0002686f) form2_midp_gauge_slider_pane_t1

0xe00b,	// (0x0002d482) form2_midp_gauge_slider_pane_t2

0xe01d,	// (0x0002d494) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002ef76) form2_midp_gauge_slider_pane_t

0x742e,	// (0x000268a5) form2_midp_slider_pane

0x743a,	// (0x000268b1) form2_midp_gauge_wait_pane_t1

0x7448,	// (0x000268bf) form2_midp_wait_pane_ParamLimits

0x7448,	// (0x000268bf) form2_midp_wait_pane

0xe02f,	// (0x0002d4a6) list_single_2graphic_pane_cp4_ParamLimits

0xe02f,	// (0x0002d4a6) list_single_2graphic_pane_cp4

0xd97d,	// (0x0002cdf4) list_single_midp_graphic_pane_cp_ParamLimits

0xd97d,	// (0x0002cdf4) list_single_midp_graphic_pane_cp

0x3189,	// (0x00022600) list_highlight_pane_cp20

0x74a2,	// (0x00026919) list_single_2graphic_pane_g1_cp4

0x74aa,	// (0x00026921) list_single_2graphic_pane_g2_cp4

0x74b2,	// (0x00026929) list_single_2graphic_pane_t1_cp4

0x3269,	// (0x000226e0) list_highlight_pane_cp21

0x74c1,	// (0x00026938) list_single_midp_graphic_pane_g4_cp

0x74d0,	// (0x00026947) list_single_midp_graphic_pane_t1_cp

0xe043,	// (0x0002d4ba) form2_mdip_string_pane_t1_ParamLimits

0xe043,	// (0x0002d4ba) form2_mdip_string_pane_t1

0x3189,	// (0x00022600) bg_wml_button_pane_cp2

0x317f,	// (0x000225f6) form2_midp_image_pane_g1

0x0359,	// (0x0001f7d0) list_double_large_graphic_pane_g5_ParamLimits

0x0359,	// (0x0001f7d0) list_double_large_graphic_pane_g5

0x4a9d,	// (0x00023f14) midp_form_pane_ParamLimits

0x3269,	// (0x000226e0) main_apps_wheel_pane_ParamLimits

0xc558,	// (0x0002b9cf) popup_preview_window_ParamLimits

0xc558,	// (0x0002b9cf) popup_preview_window

0x2085,	// (0x000214fc) popup_touch_info_window_ParamLimits

0x2085,	// (0x000214fc) popup_touch_info_window

0x20a3,	// (0x0002151a) popup_touch_menu_window_ParamLimits

0x20a3,	// (0x0002151a) popup_touch_menu_window

0x3175,	// (0x000225ec) bg_popup_sub_pane_cp6

0x75de,	// (0x00026a55) list_touch_menu_pane

0x75e6,	// (0x00026a5d) list_single_touch_menu_pane_ParamLimits

0x75e6,	// (0x00026a5d) list_single_touch_menu_pane

0x75fc,	// (0x00026a73) list_single_touch_menu_pane_t1

0x3269,	// (0x000226e0) bg_popup_sub_pane_cp7_ParamLimits

0x3269,	// (0x000226e0) bg_popup_sub_pane_cp7

0x760a,	// (0x00026a81) heading_sub_pane

0x7612,	// (0x00026a89) list_touch_info_pane_ParamLimits

0x7612,	// (0x00026a89) list_touch_info_pane

0x7621,	// (0x00026a98) list_single_touch_info_pane_ParamLimits

0x7621,	// (0x00026a98) list_single_touch_info_pane

0x7633,	// (0x00026aaa) list_single_touch_info_pane_t1

0x7641,	// (0x00026ab8) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002ef84) list_single_touch_info_pane_t

0x475d,	// (0x00023bd4) bg_popup_heading_pane_cp

0x764f,	// (0x00026ac6) heading_sub_pane_t1

0x5096,	// (0x0002450d) bg_popup_preview_window_pane_cp_ParamLimits

0x5096,	// (0x0002450d) bg_popup_preview_window_pane_cp

0x760a,	// (0x00026a81) heading_preview_pane

0x7612,	// (0x00026a89) list_preview_pane_ParamLimits

0x7612,	// (0x00026a89) list_preview_pane

0x765d,	// (0x00026ad4) popup_preview_window_g1

0x7621,	// (0x00026a98) list_single_preview_pane_ParamLimits

0x7621,	// (0x00026a98) list_single_preview_pane

0x7665,	// (0x00026adc) list_single_preview_pane_g1

0x766d,	// (0x00026ae4) list_single_preview_pane_t1

0x7633,	// (0x00026aaa) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002ef89) list_single_preview_pane_t

0x767b,	// (0x00026af2) bg_popup_heading_pane_cp2_ParamLimits

0x767b,	// (0x00026af2) bg_popup_heading_pane_cp2

0x7691,	// (0x00026b08) heading_preview_pane_g1

0x7699,	// (0x00026b10) heading_preview_pane_t1_ParamLimits

0x7699,	// (0x00026b10) heading_preview_pane_t1

0x3355,	// (0x000227cc) soft_indicator_pane_t1_ParamLimits

0x3a48,	// (0x00022ebf) scroll_pane_ParamLimits

0x3f6b,	// (0x000233e2) scroll_sc2_left_pane

0x3f74,	// (0x000233eb) scroll_sc2_right_pane

0x3f93,	// (0x0002340a) scroll_bg_pane_g1_ParamLimits

0x3fa8,	// (0x0002341f) scroll_bg_pane_g2_ParamLimits

0x3fc0,	// (0x00023437) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002eb60) scroll_bg_pane_g_ParamLimits

0x3f93,	// (0x0002340a) scroll_handle_pane_g1_ParamLimits

0x3fe2,	// (0x00023459) scroll_handle_pane_g2_ParamLimits

0x3fc0,	// (0x00023437) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002eb67) scroll_handle_pane_g_ParamLimits

0x1b4d,	// (0x00020fc4) popup_choice_list_window_ParamLimits

0x1b4d,	// (0x00020fc4) popup_choice_list_window

0x4edc,	// (0x00024353) choice_list_pane

0x4f5e,	// (0x000243d5) cell_toolbar_pane_t1

0x4f86,	// (0x000243fd) toolbar_button_pane_ParamLimits

0x60e9,	// (0x00025560) ai_gene_pane_1_t2_ParamLimits

0x60e9,	// (0x00025560) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0002ed8a) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0002ed8a) ai_gene_pane_1_t

0x76b6,	// (0x00026b2d) scroll_sc2_left_pane_g1

0x76b6,	// (0x00026b2d) scroll_sc2_right_pane_g1

0x4a9d,	// (0x00023f14) bg_popup_sub_pane_cp10

0x76c0,	// (0x00026b37) list_choice_list_pane

0x76d9,	// (0x00026b50) list_single_choice_list_pane_ParamLimits

0x76d9,	// (0x00026b50) list_single_choice_list_pane

0x76ec,	// (0x00026b63) list_single_choice_list_pane_g1

0x3c75,	// (0x000230ec) list_single_choice_list_pane_t1_ParamLimits

0x3c75,	// (0x000230ec) list_single_choice_list_pane_t1

0x76f4,	// (0x00026b6b) choice_list_pane_g1

0x76fc,	// (0x00026b73) choice_list_pane_t1

0x3175,	// (0x000225ec) input_focus_pane_cp11

0x3e4c,	// (0x000232c3) title_pane_stacon_g2_ParamLimits

0x3e4c,	// (0x000232c3) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002eb46) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002eb46) title_pane_stacon_g

0x475d,	// (0x00023bd4) cursor_press_pane

0xc20b,	// (0x0002b682) popup_fep_hwr_window_ParamLimits

0xc20b,	// (0x0002b682) popup_fep_hwr_window

0x1c73,	// (0x000210ea) popup_fep_vkb_window_ParamLimits

0x1c73,	// (0x000210ea) popup_fep_vkb_window

0x770a,	// (0x00026b81) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002efb2) fep_vkb_side_pane_g_ParamLimits

0x2543,	// (0x000219ba) fep_hwr_candidate_pane_ParamLimits

0x2543,	// (0x000219ba) fep_hwr_candidate_pane

0x256d,	// (0x000219e4) fep_hwr_side_pane_ParamLimits

0x256d,	// (0x000219e4) fep_hwr_side_pane

0x258d,	// (0x00021a04) fep_hwr_top_pane_ParamLimits

0x258d,	// (0x00021a04) fep_hwr_top_pane

0x25a5,	// (0x00021a1c) fep_hwr_write_pane_ParamLimits

0x25a5,	// (0x00021a1c) fep_hwr_write_pane

0xfb3b,	// (0x0002efb2) fep_vkb_side_pane_g

0x7712,	// (0x00026b89) fep_hwr_top_pane_g1

0x7724,	// (0x00026b9b) fep_hwr_top_pane_g2

0x25d1,	// (0x00021a48) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002ef8e) fep_hwr_top_pane_g

0x25e6,	// (0x00021a5d) fep_hwr_top_text_pane

0x4139,	// (0x000235b0) fep_hwr_top_text_pane_g1

0x775a,	// (0x00026bd1) fep_hwr_top_text_pane_t1

0x26dc,	// (0x00021b53) fep_hwr_candidate_pane_g1

0x79ad,	// (0x00026e24) fep_vkb_keypad_pane_g3_ParamLimits

0x79ad,	// (0x00026e24) fep_vkb_keypad_pane_g3

0x79d5,	// (0x00026e4c) fep_vkb_keypad_pane_g4_ParamLimits

0x79d5,	// (0x00026e4c) fep_vkb_keypad_pane_g4

0x7a44,	// (0x00026ebb) fep_vkb_bottom_pane_g2_ParamLimits

0x7a44,	// (0x00026ebb) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002efb9) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002efb9) fep_vkb_bottom_pane_g

0x76b6,	// (0x00026b2d) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002efc3) cell_vkb_side_pane_g

0x7acf,	// (0x00026f46) cell_vkb_side_pane_t1

0x7add,	// (0x00026f54) cell_vkb_side_pane_t1_copy1

0x76b6,	// (0x00026b2d) bg_fep_vkb_candidate_pane_g2

0x7c09,	// (0x00027080) cell_vkb_candidate_pane_ParamLimits

0x7768,	// (0x00026bdf) aid_size_cell_vkb_ParamLimits

0x7768,	// (0x00026bdf) aid_size_cell_vkb

0x7c09,	// (0x00027080) cell_vkb_candidate_pane

0x26f6,	// (0x00021b6d) bg_popup_fep_shadow_pane_g1

0xe0c7,	// (0x0002d53e) fep_vkb_bottom_pane_ParamLimits

0xe0c7,	// (0x0002d53e) fep_vkb_bottom_pane

0x782c,	// (0x00026ca3) fep_vkb_candidate_pane_ParamLimits

0x782c,	// (0x00026ca3) fep_vkb_candidate_pane

0xe0ec,	// (0x0002d563) fep_vkb_keypad_pane_ParamLimits

0xe0ec,	// (0x0002d563) fep_vkb_keypad_pane

0xe128,	// (0x0002d59f) fep_vkb_side_pane_ParamLimits

0xe128,	// (0x0002d59f) fep_vkb_side_pane

0xe164,	// (0x0002d5db) fep_vkb_top_pane_ParamLimits

0xe164,	// (0x0002d5db) fep_vkb_top_pane

0x7906,	// (0x00026d7d) fep_vkb_top_pane_g1_ParamLimits

0x7906,	// (0x00026d7d) fep_vkb_top_pane_g1

0x7915,	// (0x00026d8c) fep_vkb_top_pane_g2_ParamLimits

0x7915,	// (0x00026d8c) fep_vkb_top_pane_g2

0x7924,	// (0x00026d9b) fep_vkb_top_pane_g3_ParamLimits

0x7924,	// (0x00026d9b) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002efa9) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002efa9) fep_vkb_top_pane_g

0x7942,	// (0x00026db9) fep_vkb_top_text_pane_ParamLimits

0x7942,	// (0x00026db9) fep_vkb_top_text_pane

0xe1a0,	// (0x0002d617) fep_vkb_side_pane_g1_ParamLimits

0xe1a0,	// (0x0002d617) fep_vkb_side_pane_g1

0x799c,	// (0x00026e13) grid_vkb_side_pane_ParamLimits

0x799c,	// (0x00026e13) grid_vkb_side_pane

0x26fe,	// (0x00021b75) bg_popup_fep_shadow_pane_g2

0x2707,	// (0x00021b7e) bg_popup_fep_shadow_pane_g3

0x270f,	// (0x00021b86) bg_popup_fep_shadow_pane_g4

0x2718,	// (0x00021b8f) bg_popup_fep_shadow_pane_g5

0x2722,	// (0x00021b99) bg_popup_fep_shadow_pane_g6

0x272a,	// (0x00021ba1) bg_popup_fep_shadow_pane_g7

0x3b5c,	// (0x00022fd3) bg_popup_fep_shadow_pane_g8

0x79f3,	// (0x00026e6a) grid_vkb_keypad_number_pane_ParamLimits

0x79f3,	// (0x00026e6a) grid_vkb_keypad_number_pane

0x7a03,	// (0x00026e7a) grid_vkb_keypad_pane_ParamLimits

0x7a03,	// (0x00026e7a) grid_vkb_keypad_pane

0x7a29,	// (0x00026ea0) fep_vkb_bottom_pane_g1_ParamLimits

0x7a29,	// (0x00026ea0) fep_vkb_bottom_pane_g1

0x7a52,	// (0x00026ec9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a52,	// (0x00026ec9) grid_vkb_keypad_bottom_left_pane

0x7a67,	// (0x00026ede) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a67,	// (0x00026ede) grid_vkb_keypad_bottom_right_pane

0x7a7c,	// (0x00026ef3) fep_vkb_top_text_pane_g1

0xe1e7,	// (0x0002d65e) fep_vkb_top_text_pane_t1

0xe1f9,	// (0x0002d670) cell_vkb_side_pane_ParamLimits

0xe1f9,	// (0x0002d670) cell_vkb_side_pane

0x76b6,	// (0x00026b2d) cell_vkb_side_pane_g1

0x7aeb,	// (0x00026f62) cell_vkb_keypad_pane_ParamLimits

0x7aeb,	// (0x00026f62) cell_vkb_keypad_pane

0x7b60,	// (0x00026fd7) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002efd6) bg_popup_fep_shadow_pane_g

0x76b6,	// (0x00026b2d) cell_hwr_side_pane_g1

0x76b6,	// (0x00026b2d) cell_hwr_side_pane_g2

0x7b6a,	// (0x00026fe1) cell_vkb_keypad_pane_t1

0xe20f,	// (0x0002d686) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe20f,	// (0x0002d686) cell_vkb_keypad_bottom_left_pane

0xe224,	// (0x0002d69b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe224,	// (0x0002d69b) cell_vkb_keypad_bottom_right_pane

0x76b6,	// (0x00026b2d) cell_vkb_keypad_bottom_left_pane_g1

0x76b6,	// (0x00026b2d) cell_vkb_keypad_bottom_right_pane_g1

0x7bce,	// (0x00027045) cell_vkb_keypad_number_pane_ParamLimits

0x7bce,	// (0x00027045) cell_vkb_keypad_number_pane

0x7bed,	// (0x00027064) cell_vkb_keypad_number_pane_g1

0x7bf7,	// (0x0002706e) cell_vkb_keypad_number_pane_g2

0x7c00,	// (0x00027077) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002efc8) cell_vkb_keypad_number_pane_g

0x7b6a,	// (0x00026fe1) cell_vkb_keypad_number_pane_t1

0x7c24,	// (0x0002709b) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0002efc3) cell_hwr_side_pane_g

0x7c3d,	// (0x000270b4) cell_hwr_side_pane_t1

0x273c,	// (0x00021bb3) cell_hwr_side_pane_t1_copy1

0x7934,	// (0x00026dab) cell_hwr_candidate_pane_g1

0x274a,	// (0x00021bc1) cell_hwr_candidate_pane_t1

0x76b6,	// (0x00026b2d) cell_vkb_candidate_pane_g2

0x7cc3,	// (0x0002713a) cell_vkb_candidate_pane_t1

0x250a,	// (0x00021981) bg_popup_fep_shadow_pane_ParamLimits

0x250a,	// (0x00021981) bg_popup_fep_shadow_pane

0xd9ef,	// (0x0002ce66) bg_fep_hwr_top_pane_g4

0x7736,	// (0x00026bad) bg_hwr_side_pane_g1_ParamLimits

0x7736,	// (0x00026bad) bg_hwr_side_pane_g1

0xc9dd,	// (0x0002be54) cell_hwr_side_pane_ParamLimits

0xc9dd,	// (0x0002be54) cell_hwr_side_pane

0x265d,	// (0x00021ad4) fep_hwr_write_pane_g1_ParamLimits

0x265d,	// (0x00021ad4) fep_hwr_write_pane_g1

0x266a,	// (0x00021ae1) fep_hwr_write_pane_g2_ParamLimits

0x266a,	// (0x00021ae1) fep_hwr_write_pane_g2

0x2677,	// (0x00021aee) fep_hwr_write_pane_g3_ParamLimits

0x2677,	// (0x00021aee) fep_hwr_write_pane_g3

0xc9fd,	// (0x0002be74) fep_hwr_write_pane_g4_ParamLimits

0xc9fd,	// (0x0002be74) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002ef95) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002ef95) fep_hwr_write_pane_g

0xd9ef,	// (0x0002ce66) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd9ef,	// (0x0002ce66) bg_fep_hwr_candidate_pane_g2

0x269a,	// (0x00021b11) cell_hwr_candidate_pane_ParamLimits

0x269a,	// (0x00021b11) cell_hwr_candidate_pane

0x26dc,	// (0x00021b53) fep_hwr_candidate_pane_g1_ParamLimits

0x7796,	// (0x00026c0d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7796,	// (0x00026c0d) bg_popup_fep_shadow_pane_cp2

0x7934,	// (0x00026dab) fep_vkb_top_pane_g4_ParamLimits

0x7934,	// (0x00026dab) fep_vkb_top_pane_g4

0x797a,	// (0x00026df1) fep_vkb_side_pane_g2_ParamLimits

0x797a,	// (0x00026df1) fep_vkb_side_pane_g2

0xb7f2,	// (0x0002ac69) list_setting_pane_t4_ParamLimits

0xb7f2,	// (0x0002ac69) list_setting_pane_t4

0xb88c,	// (0x0002ad03) list_setting_number_pane_t5_ParamLimits

0xb88c,	// (0x0002ad03) list_setting_number_pane_t5

0xd2e0,	// (0x0002c757) list_double_heading_pane_cp2_ParamLimits

0xd2e0,	// (0x0002c757) list_double_heading_pane_cp2

0x3aef,	// (0x00022f66) list_double_heading_pane_g1_cp2_ParamLimits

0x3aef,	// (0x00022f66) list_double_heading_pane_g1_cp2

0x3afb,	// (0x00022f72) list_double_heading_pane_g2_cp2_ParamLimits

0x3afb,	// (0x00022f72) list_double_heading_pane_g2_cp2

0x7cd1,	// (0x00027148) list_double_heading_pane_t1_cp2_ParamLimits

0x7cd1,	// (0x00027148) list_double_heading_pane_t1_cp2

0x7ce7,	// (0x0002715e) list_double_heading_pane_t2_cp2_ParamLimits

0x7ce7,	// (0x0002715e) list_double_heading_pane_t2_cp2

0x315d,	// (0x000225d4) aid_value_unit2

0x13b5,	// (0x0002082c) popup_preview_fixed_window

0x34f2,	// (0x00022969) bg_popup_preview_window_pane_cp02

0x7cf9,	// (0x00027170) list_preview_fixed_pane

0x7d3f,	// (0x000271b6) list_empty_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_empty_pane_fp

0x7d3f,	// (0x000271b6) list_single_cale_day_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_cale_day_pane_fp

0x7d3f,	// (0x000271b6) list_single_graphic_heading_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_graphic_heading_pane_fp

0x7d3f,	// (0x000271b6) list_single_graphic_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_graphic_pane_fp

0x7d3f,	// (0x000271b6) list_single_heading_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_heading_pane_fp

0x7d3f,	// (0x000271b6) list_single_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_pane_fp

0x7d54,	// (0x000271cb) list_single_pane_fp_g1_ParamLimits

0x7d54,	// (0x000271cb) list_single_pane_fp_g1

0x0d59,	// (0x000201d0) list_single_pane_fp_g2_ParamLimits

0x0d59,	// (0x000201d0) list_single_pane_fp_g2

0x0d65,	// (0x000201dc) list_single_pane_fp_g3_ParamLimits

0x0d65,	// (0x000201dc) list_single_pane_fp_g3

0x7d60,	// (0x000271d7) list_single_pane_fp_g4_ParamLimits

0x7d60,	// (0x000271d7) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002eff7) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002eff7) list_single_pane_fp_g

0x0d79,	// (0x000201f0) list_single_pane_fp_t1_ParamLimits

0x0d79,	// (0x000201f0) list_single_pane_fp_t1

0x0d90,	// (0x00020207) list_single_graphic_pane_fp_g1_ParamLimits

0x0d90,	// (0x00020207) list_single_graphic_pane_fp_g1

0x7d54,	// (0x000271cb) list_single_graphic_pane_fp_g2_ParamLimits

0x7d54,	// (0x000271cb) list_single_graphic_pane_fp_g2

0x0d59,	// (0x000201d0) list_single_graphic_pane_fp_g3_ParamLimits

0x0d59,	// (0x000201d0) list_single_graphic_pane_fp_g3

0x0d65,	// (0x000201dc) list_single_graphic_pane_fp_g4_ParamLimits

0x0d65,	// (0x000201dc) list_single_graphic_pane_fp_g4

0x7d60,	// (0x000271d7) list_single_graphic_pane_fp_g5_ParamLimits

0x7d60,	// (0x000271d7) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f000) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f000) list_single_graphic_pane_fp_g

0x0d9c,	// (0x00020213) list_single_graphic_pane_fp_t1_ParamLimits

0x0d9c,	// (0x00020213) list_single_graphic_pane_fp_t1

0x0d90,	// (0x00020207) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0d90,	// (0x00020207) list_single_graphic_heading_pane_fp_g1

0x7d54,	// (0x000271cb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d54,	// (0x000271cb) list_single_graphic_heading_pane_fp_g2

0x0d59,	// (0x000201d0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0d59,	// (0x000201d0) list_single_graphic_heading_pane_fp_g3

0x0d65,	// (0x000201dc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0d65,	// (0x000201dc) list_single_graphic_heading_pane_fp_g4

0x7d60,	// (0x000271d7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d60,	// (0x000271d7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f000) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f000) list_single_graphic_heading_pane_fp_g

0x0db2,	// (0x00020229) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0db2,	// (0x00020229) list_single_graphic_heading_pane_fp_t1

0x0dc8,	// (0x0002023f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0dc8,	// (0x0002023f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002f00b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002f00b) list_single_graphic_heading_pane_fp_t

0x0dda,	// (0x00020251) list_single_cale_day_pane_fp_g1_ParamLimits

0x0dda,	// (0x00020251) list_single_cale_day_pane_fp_g1

0x7d6c,	// (0x000271e3) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d6c,	// (0x000271e3) list_single_cale_day_pane_fp_g2

0x0e12,	// (0x00020289) list_single_cale_day_pane_fp_g3_ParamLimits

0x0e12,	// (0x00020289) list_single_cale_day_pane_fp_g3

0x0e3a,	// (0x000202b1) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e3a,	// (0x000202b1) list_single_cale_day_pane_fp_g4

0x0e5e,	// (0x000202d5) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e5e,	// (0x000202d5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002f010) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002f010) list_single_cale_day_pane_fp_g

0x0e82,	// (0x000202f9) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e82,	// (0x000202f9) list_single_cale_day_pane_fp_t1

0x0ea8,	// (0x0002031f) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ea8,	// (0x0002031f) list_single_cale_day_pane_fp_t2

0x0ec1,	// (0x00020338) list_single_cale_day_pane_fp_t3_ParamLimits

0x0ec1,	// (0x00020338) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002f01b) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002f01b) list_single_cale_day_pane_fp_t

0x7d54,	// (0x000271cb) list_empty_pane_fp_g1_ParamLimits

0x7d54,	// (0x000271cb) list_empty_pane_fp_g1

0x0eda,	// (0x00020351) list_empty_pane_fp_t1

0x0ee8,	// (0x0002035f) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002f022) list_empty_pane_fp_t

0x7d54,	// (0x000271cb) list_single_heading_pane_fp_g1_ParamLimits

0x7d54,	// (0x000271cb) list_single_heading_pane_fp_g1

0x0d59,	// (0x000201d0) list_single_heading_pane_fp_g2_ParamLimits

0x0d59,	// (0x000201d0) list_single_heading_pane_fp_g2

0x0d65,	// (0x000201dc) list_single_heading_pane_fp_g3_ParamLimits

0x0d65,	// (0x000201dc) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002f027) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002f027) list_single_heading_pane_fp_g

0x0ef6,	// (0x0002036d) list_single_heading_pane_fp_t1_ParamLimits

0x0ef6,	// (0x0002036d) list_single_heading_pane_fp_t1

0x0f08,	// (0x0002037f) list_single_heading_pane_fp_t2_ParamLimits

0x0f08,	// (0x0002037f) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002f02e) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002f02e) list_single_heading_pane_fp_t

0x3ce3,	// (0x0002315a) aid_size_cell_fast

0x3462,	// (0x000228d9) soft_indicator_pane_cp1_t1

0x3d20,	// (0x00023197) cell_app_pane_cp2_ParamLimits

0x3d20,	// (0x00023197) cell_app_pane_cp2

0x252c,	// (0x000219a3) fep_hwr_candidate_drop_down_list_pane

0xd9fd,	// (0x0002ce74) fep_hwr_candidate_pane_g3_ParamLimits

0xd9fd,	// (0x0002ce74) fep_hwr_candidate_pane_g3

0xda0a,	// (0x0002ce81) fep_hwr_candidate_pane_g4_ParamLimits

0xda0a,	// (0x0002ce81) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002efa2) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002efa2) fep_hwr_candidate_pane_g

0x781b,	// (0x00026c92) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x781b,	// (0x00026c92) fep_vkb_candidate_drop_down_list_pane

0x7c2c,	// (0x000270a3) fep_vkb_candidate_pane_g3

0x7c34,	// (0x000270ab) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002efcf) fep_vkb_candidate_pane_g

0x7934,	// (0x00026dab) cell_hwr_candidate_pane_g1_ParamLimits

0x7c4b,	// (0x000270c2) cell_hwr_candidate_pane_g3_ParamLimits

0x7c4b,	// (0x000270c2) cell_hwr_candidate_pane_g3

0x7c6c,	// (0x000270e3) cell_hwr_candidate_pane_g4_ParamLimits

0x7c6c,	// (0x000270e3) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002efe9) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002efe9) cell_hwr_candidate_pane_g

0x7c8d,	// (0x00027104) cell_vkb_candidate_pane_g3_ParamLimits

0x7c8d,	// (0x00027104) cell_vkb_candidate_pane_g3

0x7ca8,	// (0x0002711f) cell_vkb_candidate_pane_g4_ParamLimits

0x7ca8,	// (0x0002711f) cell_vkb_candidate_pane_g4

0x7d78,	// (0x000271ef) cell_app_pane_cp2_g1_ParamLimits

0x7d78,	// (0x000271ef) cell_app_pane_cp2_g1

0x7d96,	// (0x0002720d) cell_app_pane_cp2_g2_ParamLimits

0x7d96,	// (0x0002720d) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002f033) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002f033) cell_app_pane_cp2_g

0x7da2,	// (0x00027219) cell_app_pane_cp2_t1_ParamLimits

0x7da2,	// (0x00027219) cell_app_pane_cp2_t1

0x3ad5,	// (0x00022f4c) grid_highlight_pane_cp1_ParamLimits

0x3ad5,	// (0x00022f4c) grid_highlight_pane_cp1

0x2768,	// (0x00021bdf) cell_hwr_candidate_pane_cp1_ParamLimits

0x2768,	// (0x00021bdf) cell_hwr_candidate_pane_cp1

0x7934,	// (0x00026dab) fep_hwr_candidate_drop_down_list_pane_g1

0x7db4,	// (0x0002722b) fep_hwr_candidate_drop_down_list_pane_g2

0x7dc1,	// (0x00027238) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002f038) fep_hwr_candidate_drop_down_list_pane_g

0x2787,	// (0x00021bfe) fep_hwr_candidate_drop_down_list_scroll_pane

0x2790,	// (0x00021c07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2790,	// (0x00021c07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x279d,	// (0x00021c14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x279d,	// (0x00021c14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x27aa,	// (0x00021c21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x27aa,	// (0x00021c21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c8d,	// (0x00027104) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c8d,	// (0x00027104) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ca8,	// (0x0002711f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ca8,	// (0x0002711f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x27b7,	// (0x00021c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x27b7,	// (0x00021c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x27d2,	// (0x00021c49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x27d2,	// (0x00021c49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x27ed,	// (0x00021c64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x27ed,	// (0x00021c64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002f03f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002f03f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7dce,	// (0x00027245) cell_vkb_candidate_pane_cp1_ParamLimits

0x7dce,	// (0x00027245) cell_vkb_candidate_pane_cp1

0x7934,	// (0x00026dab) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7934,	// (0x00026dab) fep_vkb_candidate_drop_down_list_pane_g1

0x7db4,	// (0x0002722b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7db4,	// (0x0002722b) fep_vkb_candidate_drop_down_list_pane_g2

0x7dc1,	// (0x00027238) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7dc1,	// (0x00027238) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002f038) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0002f038) fep_vkb_candidate_drop_down_list_pane_g

0x7dee,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7dee,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane

0x7dfb,	// (0x00027272) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7dfb,	// (0x00027272) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e08,	// (0x0002727f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e08,	// (0x0002727f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7e14,	// (0x0002728b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e14,	// (0x0002728b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c4b,	// (0x000270c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c4b,	// (0x000270c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c6c,	// (0x000270e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c6c,	// (0x000270e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e20,	// (0x00027297) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e20,	// (0x00027297) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e41,	// (0x000272b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e41,	// (0x000272b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e62,	// (0x000272d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e62,	// (0x000272d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002f050) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002f050) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbf19,	// (0x0002b390) title_pane_g1_ParamLimits

0xbf2c,	// (0x0002b3a3) title_pane_g2_ParamLimits

0xf554,	// (0x0002e9cb) title_pane_g_ParamLimits

0x4129,	// (0x000235a0) aid_call2_pane

0x4131,	// (0x000235a8) aid_call_pane

0x4139,	// (0x000235b0) popup_clock_analogue_window_g1

0x4139,	// (0x000235b0) popup_clock_analogue_window_g2

0x171e,	// (0x00020b95) popup_clock_analogue_window_g3

0x1727,	// (0x00020b9e) popup_clock_analogue_window_g4

0x317f,	// (0x000225f6) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002eb75) popup_clock_analogue_window_g

0x172f,	// (0x00020ba6) popup_clock_analogue_window_t1

0x173d,	// (0x00020bb4) clock_digital_number_pane_ParamLimits

0x173d,	// (0x00020bb4) clock_digital_number_pane

0x1749,	// (0x00020bc0) clock_digital_number_pane_cp02_ParamLimits

0x1749,	// (0x00020bc0) clock_digital_number_pane_cp02

0x1755,	// (0x00020bcc) clock_digital_number_pane_cp03_ParamLimits

0x1755,	// (0x00020bcc) clock_digital_number_pane_cp03

0x1761,	// (0x00020bd8) clock_digital_number_pane_cp04_ParamLimits

0x1761,	// (0x00020bd8) clock_digital_number_pane_cp04

0x176d,	// (0x00020be4) clock_digital_separator_pane_ParamLimits

0x176d,	// (0x00020be4) clock_digital_separator_pane

0x1779,	// (0x00020bf0) popup_clock_digital_window_t1_ParamLimits

0x1779,	// (0x00020bf0) popup_clock_digital_window_t1

0x317f,	// (0x000225f6) clock_digital_number_pane_g1

0x317f,	// (0x000225f6) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002eb80) clock_digital_number_pane_g

0x317f,	// (0x000225f6) clock_digital_separator_pane_g1

0x317f,	// (0x000225f6) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002eb80) clock_digital_separator_pane_g

0xd543,	// (0x0002c9ba) aid_fill_nsta_ParamLimits

0xd679,	// (0x0002caf0) indicator_nsta_pane_ParamLimits

0x4d74,	// (0x000241eb) popup_clock_analogue_window

0x4d74,	// (0x000241eb) popup_clock_digital_window

0x3ca4,	// (0x0002311b) grid_indicator_nsta_pane_ParamLimits

0x709c,	// (0x00026513) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002ef22) clock_nsta_pane_t

0x16e2,	// (0x00020b59) aid_size_max_handle

0xbfdc,	// (0x0002b453) aid_size_min_handle

0x475d,	// (0x00023bd4) editor_scroll_pane

0x7e7d,	// (0x000272f4) ex_editor_pane

0x3c51,	// (0x000230c8) scroll_pane_cp13

0x3a74,	// (0x00022eeb) scroll_pane_cp14

0x4168,	// (0x000235df) scroll_pane_cp36

0xd2f1,	// (0x0002c768) list_single_graphic_hl_pane_cp2_ParamLimits

0xd2f1,	// (0x0002c768) list_single_graphic_hl_pane_cp2

0xbaff,	// (0x0002af76) list_single_graphic_hl_pane_ParamLimits

0xbaff,	// (0x0002af76) list_single_graphic_hl_pane

0x0f1e,	// (0x00020395) aid_size_min_hl_cp1

0x7e85,	// (0x000272fc) list_highlight_pane_cp34_ParamLimits

0x7e85,	// (0x000272fc) list_highlight_pane_cp34

0x7e96,	// (0x0002730d) list_single_graphic_hl_pane_g1_ParamLimits

0x7e96,	// (0x0002730d) list_single_graphic_hl_pane_g1

0xbb59,	// (0x0002afd0) list_single_graphic_hl_pane_g2_ParamLimits

0xbb59,	// (0x0002afd0) list_single_graphic_hl_pane_g2

0xbb59,	// (0x0002afd0) list_single_graphic_hl_pane_g3_ParamLimits

0xbb59,	// (0x0002afd0) list_single_graphic_hl_pane_g3

0xbb65,	// (0x0002afdc) list_single_graphic_hl_pane_g4_ParamLimits

0xbb65,	// (0x0002afdc) list_single_graphic_hl_pane_g4

0xbb71,	// (0x0002afe8) list_single_graphic_hl_pane_g5_ParamLimits

0xbb71,	// (0x0002afe8) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0002f061) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0002f061) list_single_graphic_hl_pane_g

0xbb85,	// (0x0002affc) list_single_graphic_hl_pane_t1_ParamLimits

0xbb85,	// (0x0002affc) list_single_graphic_hl_pane_t1

0x7ea3,	// (0x0002731a) aid_size_min_hl_cp2

0x7eac,	// (0x00027323) list_highlight_pane_cp34_cp2_ParamLimits

0x7eac,	// (0x00027323) list_highlight_pane_cp34_cp2

0x7e96,	// (0x0002730d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e96,	// (0x0002730d) list_single_graphic_hl_pane_g1_cp2

0x7eb9,	// (0x00027330) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7eb9,	// (0x00027330) list_single_graphic_hl_pane_g2_cp2

0xe23f,	// (0x0002d6b6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe23f,	// (0x0002d6b6) list_single_graphic_hl_pane_g3_cp2

0x5277,	// (0x000246ee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5277,	// (0x000246ee) list_single_graphic_hl_pane_g4_cp2

0x7ed3,	// (0x0002734a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ed3,	// (0x0002734a) list_single_graphic_hl_pane_g5_cp2

0xc033,	// (0x0002b4aa) control_pane_g4_ParamLimits

0xc033,	// (0x0002b4aa) control_pane_g4

0x4a9d,	// (0x00023f14) bg_popup_sub_pane_cp10_ParamLimits

0x76c0,	// (0x00026b37) list_choice_list_pane_ParamLimits

0x76cf,	// (0x00026b46) scroll_pane_cp23

0x34f2,	// (0x00022969) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cf9,	// (0x00027170) list_preview_fixed_pane_ParamLimits

0x7d0f,	// (0x00027186) list_preview_fixed_pane_cp_ParamLimits

0x7d0f,	// (0x00027186) list_preview_fixed_pane_cp

0x7d1b,	// (0x00027192) popup_preview_fixed_window_g1_ParamLimits

0x7d1b,	// (0x00027192) popup_preview_fixed_window_g1

0x7d27,	// (0x0002719e) popup_preview_fixed_window_g2_ParamLimits

0x7d27,	// (0x0002719e) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002eff0) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002eff0) popup_preview_fixed_window_g

0x1656,	// (0x00020acd) aid_navi_side_left_pane_ParamLimits

0x166b,	// (0x00020ae2) aid_navi_side_right_pane_ParamLimits

0x1683,	// (0x00020afa) navi_icon_pane_stacon_ParamLimits

0x1697,	// (0x00020b0e) navi_navi_pane_stacon_ParamLimits

0x1683,	// (0x00020afa) navi_text_pane_stacon_ParamLimits

0x3175,	// (0x000225ec) main_text_info_pane

0x7efd,	// (0x00027374) listscroll_text_info_pane

0x7f05,	// (0x0002737c) list_text_info_pane_ParamLimits

0x7f05,	// (0x0002737c) list_text_info_pane

0x7f14,	// (0x0002738b) scroll_pane_cp24_ParamLimits

0x7f14,	// (0x0002738b) scroll_pane_cp24

0xe24d,	// (0x0002d6c4) list_text_info_pane_t1_ParamLimits

0xe24d,	// (0x0002d6c4) list_text_info_pane_t1

0xc17e,	// (0x0002b5f5) popup_fast_swap2_window_ParamLimits

0xc17e,	// (0x0002b5f5) popup_fast_swap2_window

0x7f63,	// (0x000273da) aid_size_cell_fast2

0x3175,	// (0x000225ec) bg_popup_window_pane_cp17

0x548c,	// (0x00024903) heading_pane_cp2

0x373e,	// (0x00022bb5) listscroll_fast2_pane

0x7f6d,	// (0x000273e4) grid_fast2_pane

0x7f77,	// (0x000273ee) listscroll_fast2_pane_g1

0x7f7f,	// (0x000273f6) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0002f06c) listscroll_fast2_pane_g

0x3c51,	// (0x000230c8) scroll_pane_cp26

0x7f89,	// (0x00027400) cell_fast2_pane_ParamLimits

0x7f89,	// (0x00027400) cell_fast2_pane

0x7f9e,	// (0x00027415) cell_fast2_pane_g1

0x7fa7,	// (0x0002741e) cell_fast2_pane_g2

0x7fb0,	// (0x00027427) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0002f071) cell_fast2_pane_g

0x3831,	// (0x00022ca8) grid_highlight_pane_cp9

0x3846,	// (0x00022cbd) main_eswt_pane_ParamLimits

0x3846,	// (0x00022cbd) main_eswt_pane

0x7f29,	// (0x000273a0) list_single_text_info_pane

0x7fb8,	// (0x0002742f) eswt_ctrl_button_pane

0x7fb8,	// (0x0002742f) eswt_ctrl_canvas_pane

0x7fc0,	// (0x00027437) eswt_ctrl_combo_pane

0x7fb8,	// (0x0002742f) eswt_ctrl_default_pane

0x7fb8,	// (0x0002742f) eswt_ctrl_label_pane

0x7fc8,	// (0x0002743f) eswt_ctrl_wait_pane

0x7fd0,	// (0x00027447) eswt_shell_pane

0x3175,	// (0x000225ec) listscroll_eswt_app_pane

0x7ff0,	// (0x00027467) popup_eswt_tasktip_window_ParamLimits

0x7ff0,	// (0x00027467) popup_eswt_tasktip_window

0x5096,	// (0x0002450d) bg_popup_window_pane_cp18

0x8001,	// (0x00027478) eswt_control_pane_g1_ParamLimits

0x8001,	// (0x00027478) eswt_control_pane_g1

0x800e,	// (0x00027485) eswt_control_pane_g2_ParamLimits

0x800e,	// (0x00027485) eswt_control_pane_g2

0x801b,	// (0x00027492) eswt_control_pane_g3_ParamLimits

0x801b,	// (0x00027492) eswt_control_pane_g3

0x8028,	// (0x0002749f) eswt_control_pane_g4_ParamLimits

0x8028,	// (0x0002749f) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0002f078) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0002f078) eswt_control_pane_g

0x3ad5,	// (0x00022f4c) bg_button_pane_ParamLimits

0x3ad5,	// (0x00022f4c) bg_button_pane

0x3846,	// (0x00022cbd) common_borders_pane_copy2_ParamLimits

0x3846,	// (0x00022cbd) common_borders_pane_copy2

0x8035,	// (0x000274ac) control_button_pane_g1_ParamLimits

0x8035,	// (0x000274ac) control_button_pane_g1

0x8041,	// (0x000274b8) control_button_pane_g2_ParamLimits

0x8041,	// (0x000274b8) control_button_pane_g2

0x804d,	// (0x000274c4) control_button_pane_g3_ParamLimits

0x804d,	// (0x000274c4) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0002f081) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0002f081) control_button_pane_g

0x8061,	// (0x000274d8) control_button_pane_t1

0x806f,	// (0x000274e6) control_button_pane_t2

0x0001,

0xfc11,	// (0x0002f088) control_button_pane_t

0x4f92,	// (0x00024409) bg_button_pane_g1

0x4f9a,	// (0x00024411) bg_button_pane_g2

0x4fa2,	// (0x00024419) bg_button_pane_g3

0x4faa,	// (0x00024421) bg_button_pane_g4

0x4fb2,	// (0x00024429) bg_button_pane_g5

0x4fba,	// (0x00024431) bg_button_pane_g6

0x4fc2,	// (0x00024439) bg_button_pane_g7

0x4fca,	// (0x00024441) bg_button_pane_g8

0x4fd2,	// (0x00024449) bg_button_pane_g9

0x0008,

0xf867,	// (0x0002ecde) bg_button_pane_g

0x767b,	// (0x00026af2) common_borders_pane_ParamLimits

0x767b,	// (0x00026af2) common_borders_pane

0x8001,	// (0x00027478) eswt_control_pane_g1_copy1_ParamLimits

0x8001,	// (0x00027478) eswt_control_pane_g1_copy1

0x800e,	// (0x00027485) eswt_control_pane_g2_copy1_ParamLimits

0x800e,	// (0x00027485) eswt_control_pane_g2_copy1

0x801b,	// (0x00027492) eswt_control_pane_g3_copy1_ParamLimits

0x801b,	// (0x00027492) eswt_control_pane_g3_copy1

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy1_ParamLimits

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy1

0x76b6,	// (0x00026b2d) bg_eswt_ctrl_canvas_pane_g1

0x767b,	// (0x00026af2) common_borders_pane_cp2_ParamLimits

0x767b,	// (0x00026af2) common_borders_pane_cp2

0x767b,	// (0x00026af2) common_borders_pane_cp3_ParamLimits

0x767b,	// (0x00026af2) common_borders_pane_cp3

0x807d,	// (0x000274f4) separator_horizontal_pane

0x8085,	// (0x000274fc) separator_vertical_pane

0x8001,	// (0x00027478) eswt_control_pane_g1_copy2_ParamLimits

0x8001,	// (0x00027478) eswt_control_pane_g1_copy2

0x800e,	// (0x00027485) eswt_control_pane_g2_copy2_ParamLimits

0x800e,	// (0x00027485) eswt_control_pane_g2_copy2

0x801b,	// (0x00027492) eswt_control_pane_g3_copy2_ParamLimits

0x801b,	// (0x00027492) eswt_control_pane_g3_copy2

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy2_ParamLimits

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy2

0x3175,	// (0x000225ec) common_borders_pane_cp4

0x808e,	// (0x00027505) separator_horizontal_pane_g1

0x8097,	// (0x0002750e) separator_horizontal_pane_g2

0x80a0,	// (0x00027517) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0002f08d) separator_horizontal_pane_g

0x8001,	// (0x00027478) eswt_control_pane_g1_copy3_ParamLimits

0x8001,	// (0x00027478) eswt_control_pane_g1_copy3

0x800e,	// (0x00027485) eswt_control_pane_g2_copy3_ParamLimits

0x800e,	// (0x00027485) eswt_control_pane_g2_copy3

0x801b,	// (0x00027492) eswt_control_pane_g3_copy3_ParamLimits

0x801b,	// (0x00027492) eswt_control_pane_g3_copy3

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy3_ParamLimits

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy3

0x3175,	// (0x000225ec) common_borders_pane_cp5

0x80a9,	// (0x00027520) separator_vertical_pane_g1

0x80b2,	// (0x00027529) separator_vertical_pane_g2

0x80bb,	// (0x00027532) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0002f094) separator_vertical_pane_g

0x8001,	// (0x00027478) eswt_control_pane_g1_copy4_ParamLimits

0x8001,	// (0x00027478) eswt_control_pane_g1_copy4

0x800e,	// (0x00027485) eswt_control_pane_g2_copy4_ParamLimits

0x800e,	// (0x00027485) eswt_control_pane_g2_copy4

0x801b,	// (0x00027492) eswt_control_pane_g3_copy4_ParamLimits

0x801b,	// (0x00027492) eswt_control_pane_g3_copy4

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy4_ParamLimits

0x8028,	// (0x0002749f) eswt_control_pane_g4_copy4

0xe268,	// (0x0002d6df) eswt_ctrl_combo_button_pane

0xe270,	// (0x0002d6e7) eswt_ctrl_input_pane

0xe278,	// (0x0002d6ef) popup_choice_list_window_cp70

0xe280,	// (0x0002d6f7) eswt_ctrl_input_pane_t1

0x3175,	// (0x000225ec) input_focus_pane_cp70

0x767b,	// (0x00026af2) bg_button_pane_cp70_ParamLimits

0x767b,	// (0x00026af2) bg_button_pane_cp70

0xe28e,	// (0x0002d705) eswt_ctrl_combo_button_pane_g1

0x80f2,	// (0x00027569) wait_bar_pane_cp70

0x5096,	// (0x0002450d) bg_popup_window_pane_cp70_ParamLimits

0x5096,	// (0x0002450d) bg_popup_window_pane_cp70

0x80fa,	// (0x00027571) popup_eswt_tasktip_window_t1

0x8110,	// (0x00027587) wait_bar_pane_cp71_ParamLimits

0x8110,	// (0x00027587) wait_bar_pane_cp71

0x811c,	// (0x00027593) grid_eswt_app_pane

0x3f74,	// (0x000233eb) scroll_pane_cp70

0xe296,	// (0x0002d70d) cell_eswt_app_pane_ParamLimits

0xe296,	// (0x0002d70d) cell_eswt_app_pane

0xe2c0,	// (0x0002d737) cell_eswt_app_pane_g1_ParamLimits

0xe2c0,	// (0x0002d737) cell_eswt_app_pane_g1

0xe2ef,	// (0x0002d766) cell_eswt_app_pane_g2_ParamLimits

0xe2ef,	// (0x0002d766) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0002f09b) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0002f09b) cell_eswt_app_pane_g

0xe318,	// (0x0002d78f) cell_eswt_app_pane_t1_ParamLimits

0xe318,	// (0x0002d78f) cell_eswt_app_pane_t1

0x81df,	// (0x00027656) grid_highlight_pane_cp70_ParamLimits

0x81df,	// (0x00027656) grid_highlight_pane_cp70

0x4632,	// (0x00023aa9) set_content_pane_g1

0x49fd,	// (0x00023e74) status_small_volume_pane

0x2808,	// (0x00021c7f) status_small_volume_pane_g1

0x2810,	// (0x00021c87) volume_small2_pane

0x2819,	// (0x00021c90) volume_small2_pane_g1

0x2822,	// (0x00021c99) volume_small2_pane_g2

0x282b,	// (0x00021ca2) volume_small2_pane_g3

0x2834,	// (0x00021cab) volume_small2_pane_g4

0x283d,	// (0x00021cb4) volume_small2_pane_g5

0x2846,	// (0x00021cbd) volume_small2_pane_g6

0x284f,	// (0x00021cc6) volume_small2_pane_g7

0x2858,	// (0x00021ccf) volume_small2_pane_g8

0x2861,	// (0x00021cd8) volume_small2_pane_g9

0x286a,	// (0x00021ce1) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0002f0a0) volume_small2_pane_g

0x7a7c,	// (0x00026ef3) fep_vkb_top_text_pane_g1_ParamLimits

0xe1e7,	// (0x0002d65e) fep_vkb_top_text_pane_t1_ParamLimits

0x7d33,	// (0x000271aa) popup_preview_fixed_window_g3_ParamLimits

0x7d33,	// (0x000271aa) popup_preview_fixed_window_g3

0xc79b,	// (0x0002bc12) popup_toolbar_trans_pane

0xdc0f,	// (0x0002d086) aid_height_set_list_ParamLimits

0x6459,	// (0x000258d0) aid_size_parent_ParamLimits

0x4a9d,	// (0x00023f14) list_highlight_pane_cp2_ParamLimits

0x4632,	// (0x00023aa9) set_content_pane_g1_ParamLimits

0xbb11,	// (0x0002af88) list_single_image_pane_ParamLimits

0xbb11,	// (0x0002af88) list_single_image_pane

0xe34a,	// (0x0002d7c1) aid_size_cell_image_ParamLimits

0xe34a,	// (0x0002d7c1) aid_size_cell_image

0xe357,	// (0x0002d7ce) grid_single_image_pane_ParamLimits

0xe357,	// (0x0002d7ce) grid_single_image_pane

0x4245,	// (0x000236bc) list_single_image_pane_g1_ParamLimits

0x4245,	// (0x000236bc) list_single_image_pane_g1

0x8206,	// (0x0002767d) list_single_image_pane_g2_ParamLimits

0x8206,	// (0x0002767d) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0002f0b5) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0002f0b5) list_single_image_pane_g

0x4251,	// (0x000236c8) list_single_image_pane_t1_ParamLimits

0x4251,	// (0x000236c8) list_single_image_pane_t1

0xe365,	// (0x0002d7dc) cell_image_list_pane_ParamLimits

0xe365,	// (0x0002d7dc) cell_image_list_pane

0xe37b,	// (0x0002d7f2) cell_image_list_pane_g1

0xe384,	// (0x0002d7fb) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0002f0ba) cell_image_list_pane_g

0x823f,	// (0x000276b6) aid_size_cell_tb_trans_pane

0x3ad5,	// (0x00022f4c) bg_tb_trans_pane

0x8251,	// (0x000276c8) grid_tb_trans_pane

0x4f92,	// (0x00024409) bg_tb_trans_pane_g1

0x4f9a,	// (0x00024411) bg_tb_trans_pane_g2

0x4fa2,	// (0x00024419) bg_tb_trans_pane_g3

0x4faa,	// (0x00024421) bg_tb_trans_pane_g4

0x4fb2,	// (0x00024429) bg_tb_trans_pane_g5

0x4fca,	// (0x00024441) bg_tb_trans_pane_g6

0x4fd2,	// (0x00024449) bg_tb_trans_pane_g7

0x4fba,	// (0x00024431) bg_tb_trans_pane_g8

0x4fc2,	// (0x00024439) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0002f0bf) bg_tb_trans_pane_g

0x8265,	// (0x000276dc) cell_toolbar_trans_pane_ParamLimits

0x8265,	// (0x000276dc) cell_toolbar_trans_pane

0x76b6,	// (0x00026b2d) cell_toolbar_trans_pane_g1

0xdfd0,	// (0x0002d447) list_form2_midp_pane_t1

0xdfde,	// (0x0002d455) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002ef68) list_form2_midp_pane_t

0x729c,	// (0x00026713) scroll_pane_cp51_ParamLimits

0x7458,	// (0x000268cf) form2_midp_wait_pane_g1

0x7461,	// (0x000268d8) form2_midp_wait_pane_g2

0x746a,	// (0x000268e1) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002ef7d) form2_midp_wait_pane_g

0x3269,	// (0x000226e0) list_highlight_pane_cp21_ParamLimits

0x74c1,	// (0x00026938) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74d0,	// (0x00026947) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x662c,	// (0x00025aa3) list_single_2graphic_im_pane_ParamLimits

0x662c,	// (0x00025aa3) list_single_2graphic_im_pane

0xe38d,	// (0x0002d804) list_single_2graphic_im_pane_g1_ParamLimits

0xe38d,	// (0x0002d804) list_single_2graphic_im_pane_g1

0xe39e,	// (0x0002d815) list_single_2graphic_im_pane_g2_ParamLimits

0xe39e,	// (0x0002d815) list_single_2graphic_im_pane_g2

0xe3aa,	// (0x0002d821) list_single_2graphic_im_pane_g3_ParamLimits

0xe3aa,	// (0x0002d821) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0002f0d2) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0002f0d2) list_single_2graphic_im_pane_g

0xe3be,	// (0x0002d835) list_single_2graphic_im_pane_t1_ParamLimits

0xe3be,	// (0x0002d835) list_single_2graphic_im_pane_t1

0x7d3f,	// (0x000271b6) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d3f,	// (0x000271b6) list_single_graphic_2heading_pane_fp

0x0d90,	// (0x00020207) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0d90,	// (0x00020207) list_single_graphic_2heading_pane_fp_g1

0x7d54,	// (0x000271cb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d54,	// (0x000271cb) list_single_graphic_2heading_pane_fp_g2

0x0d59,	// (0x000201d0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0d59,	// (0x000201d0) list_single_graphic_2heading_pane_fp_g3

0x0d65,	// (0x000201dc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0d65,	// (0x000201dc) list_single_graphic_2heading_pane_fp_g4

0x7d60,	// (0x000271d7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d60,	// (0x000271d7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002f000) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f000) list_single_graphic_2heading_pane_fp_g

0x0f5d,	// (0x000203d4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0f5d,	// (0x000203d4) list_single_graphic_2heading_pane_fp_t1

0x0dc8,	// (0x0002023f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0dc8,	// (0x0002023f) list_single_graphic_2heading_pane_fp_t2

0x0f73,	// (0x000203ea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f73,	// (0x000203ea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0002f0db) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0002f0db) list_single_graphic_2heading_pane_fp_t

0x7742,	// (0x00026bb9) fep_hwr_write_pane_g5_ParamLimits

0x7742,	// (0x00026bb9) fep_hwr_write_pane_g5

0x774e,	// (0x00026bc5) fep_hwr_write_pane_g6_ParamLimits

0x774e,	// (0x00026bc5) fep_hwr_write_pane_g6

0x7fd0,	// (0x00027447) eswt_shell_pane_ParamLimits

0x5096,	// (0x0002450d) bg_popup_window_pane_cp18_ParamLimits

0x635f,	// (0x000257d6) heading_pane_cp70

0x80fa,	// (0x00027571) popup_eswt_tasktip_window_t1_ParamLimits

0xd59e,	// (0x0002ca15) aid_touch_tab_arrow_left

0xd5b4,	// (0x0002ca2b) aid_touch_tab_arrow_right

0xbf44,	// (0x0002b3bb) title_pane_g3_ParamLimits

0xbf44,	// (0x0002b3bb) title_pane_g3

0x3a94,	// (0x00022f0b) set_value_pane_g1

0xc79b,	// (0x0002bc12) popup_toolbar_trans_pane_ParamLimits

0x823f,	// (0x000276b6) aid_size_cell_tb_trans_pane_ParamLimits

0x3ad5,	// (0x00022f4c) bg_tb_trans_pane_ParamLimits

0x8251,	// (0x000276c8) grid_tb_trans_pane_ParamLimits

0x34f2,	// (0x00022969) cont_note_pane_ParamLimits

0x34f2,	// (0x00022969) cont_note_pane

0x3846,	// (0x00022cbd) cont_snote2_single_text_pane_ParamLimits

0x3846,	// (0x00022cbd) cont_snote2_single_text_pane

0x3846,	// (0x00022cbd) cont_snote2_single_graphic_pane_ParamLimits

0x3846,	// (0x00022cbd) cont_snote2_single_graphic_pane

0x56a7,	// (0x00024b1e) cont_note_wait_pane_ParamLimits

0x56a7,	// (0x00024b1e) cont_note_wait_pane

0x56a7,	// (0x00024b1e) cont_note_image_pane_ParamLimits

0x56a7,	// (0x00024b1e) cont_note_image_pane

0x82f9,	// (0x00027770) popup_note2_window_g1_ParamLimits

0x82f9,	// (0x00027770) popup_note2_window_g1

0x832a,	// (0x000277a1) popup_note2_window_t1_ParamLimits

0x832a,	// (0x000277a1) popup_note2_window_t1

0x836f,	// (0x000277e6) popup_note2_window_t2_ParamLimits

0x836f,	// (0x000277e6) popup_note2_window_t2

0x83b4,	// (0x0002782b) popup_note2_window_t3_ParamLimits

0x83b4,	// (0x0002782b) popup_note2_window_t3

0x83f9,	// (0x00027870) popup_note2_window_t4_ParamLimits

0x83f9,	// (0x00027870) popup_note2_window_t4

0x3576,	// (0x000229ed) popup_note2_window_t5_ParamLimits

0x3576,	// (0x000229ed) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0002f0e7) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0002f0e7) popup_note2_window_t

0x8428,	// (0x0002789f) popup_note2_image_window_g1_ParamLimits

0x8428,	// (0x0002789f) popup_note2_image_window_g1

0x8434,	// (0x000278ab) popup_note2_image_window_g2_ParamLimits

0x8434,	// (0x000278ab) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0002f0f2) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0002f0f2) popup_note2_image_window_g

0x8446,	// (0x000278bd) popup_note2_image_window_t1_ParamLimits

0x8446,	// (0x000278bd) popup_note2_image_window_t1

0x845e,	// (0x000278d5) popup_note2_image_window_t2_ParamLimits

0x845e,	// (0x000278d5) popup_note2_image_window_t2

0x8476,	// (0x000278ed) popup_note2_image_window_t3_ParamLimits

0x8476,	// (0x000278ed) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0002f0f7) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0002f0f7) popup_note2_image_window_t

0x56b5,	// (0x00024b2c) popup_note2_wait_window_g1_ParamLimits

0x56b5,	// (0x00024b2c) popup_note2_wait_window_g1

0x8492,	// (0x00027909) popup_note2_wait_window_g2_ParamLimits

0x8492,	// (0x00027909) popup_note2_wait_window_g2

0x56cd,	// (0x00024b44) popup_note2_wait_window_g3_ParamLimits

0x56cd,	// (0x00024b44) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x0002f0fe) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x0002f0fe) popup_note2_wait_window_g

0x849e,	// (0x00027915) popup_note2_wait_window_t1_ParamLimits

0x849e,	// (0x00027915) popup_note2_wait_window_t1

0x84bc,	// (0x00027933) popup_note2_wait_window_t2_ParamLimits

0x84bc,	// (0x00027933) popup_note2_wait_window_t2

0x84da,	// (0x00027951) popup_note2_wait_window_t3_ParamLimits

0x84da,	// (0x00027951) popup_note2_wait_window_t3

0x84ec,	// (0x00027963) popup_note2_wait_window_t4_ParamLimits

0x84ec,	// (0x00027963) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0002f105) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0002f105) popup_note2_wait_window_t

0x84fe,	// (0x00027975) wait_bar2_pane_ParamLimits

0x84fe,	// (0x00027975) wait_bar2_pane

0x8516,	// (0x0002798d) popup_snote2_single_text_window_g1_ParamLimits

0x8516,	// (0x0002798d) popup_snote2_single_text_window_g1

0x853e,	// (0x000279b5) popup_snote2_single_text_window_t1_ParamLimits

0x853e,	// (0x000279b5) popup_snote2_single_text_window_t1

0x858a,	// (0x00027a01) popup_snote2_single_text_window_t2_ParamLimits

0x858a,	// (0x00027a01) popup_snote2_single_text_window_t2

0x85d6,	// (0x00027a4d) popup_snote2_single_text_window_t3_ParamLimits

0x85d6,	// (0x00027a4d) popup_snote2_single_text_window_t3

0x8617,	// (0x00027a8e) popup_snote2_single_text_window_t4_ParamLimits

0x8617,	// (0x00027a8e) popup_snote2_single_text_window_t4

0x864d,	// (0x00027ac4) popup_snote2_single_text_window_t5_ParamLimits

0x864d,	// (0x00027ac4) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0002f10e) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0002f10e) popup_snote2_single_text_window_t

0x8678,	// (0x00027aef) popup_snote2_single_graphic_window_g1_ParamLimits

0x8678,	// (0x00027aef) popup_snote2_single_graphic_window_g1

0x86a0,	// (0x00027b17) popup_snote2_single_graphic_window_g2_ParamLimits

0x86a0,	// (0x00027b17) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0002f119) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0002f119) popup_snote2_single_graphic_window_g

0x86c8,	// (0x00027b3f) popup_snote2_single_graphic_window_t1_ParamLimits

0x86c8,	// (0x00027b3f) popup_snote2_single_graphic_window_t1

0x8714,	// (0x00027b8b) popup_snote2_single_graphic_window_t2_ParamLimits

0x8714,	// (0x00027b8b) popup_snote2_single_graphic_window_t2

0x85d6,	// (0x00027a4d) popup_snote2_single_graphic_window_t3_ParamLimits

0x85d6,	// (0x00027a4d) popup_snote2_single_graphic_window_t3

0x8617,	// (0x00027a8e) popup_snote2_single_graphic_window_t4_ParamLimits

0x8617,	// (0x00027a8e) popup_snote2_single_graphic_window_t4

0x864d,	// (0x00027ac4) popup_snote2_single_graphic_window_t5_ParamLimits

0x864d,	// (0x00027ac4) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0002f11e) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0002f11e) popup_snote2_single_graphic_window_t

0x715f,	// (0x000265d6) clock_nsta_pane_cp2_t1

0x715f,	// (0x000265d6) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002ef3e) clock_nsta_pane_cp2_t

0x0654,	// (0x0001facb) form_field_data_wide_pane_g1_ParamLimits

0x3aef,	// (0x00022f66) form_field_data_wide_pane_g2_ParamLimits

0x3aef,	// (0x00022f66) form_field_data_wide_pane_g2

0x3afb,	// (0x00022f72) form_field_data_wide_pane_g3_ParamLimits

0x3afb,	// (0x00022f72) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002eaf8) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002eaf8) form_field_data_wide_pane_g

0xdf09,	// (0x0002d380) grid_touch_3_pane_ParamLimits

0xdf09,	// (0x0002d380) grid_touch_3_pane

0xe3ef,	// (0x0002d866) cell_touch_3_pane_ParamLimits

0xe3ef,	// (0x0002d866) cell_touch_3_pane

0x76b6,	// (0x00026b2d) cell_touch_3_pane_g1

0x76b6,	// (0x00026b2d) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002efc3) cell_touch_3_pane_g

0x35a8,	// (0x00022a1f) cont_query_data_pane

0x35b0,	// (0x00022a27) cont_query_data_pane_cp1

0x878e,	// (0x00027c05) button_value_adjust_pane_cp7

0x8796,	// (0x00027c0d) query_popup_pane_cp3

0x4223,	// (0x0002369a) bg_popup_sub_pane_cp22_ParamLimits

0x1798,	// (0x00020c0f) navi_navi_volume_pane_cp2

0x17b3,	// (0x00020c2a) popup_side_volume_key_window_g2

0x17c2,	// (0x00020c39) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002eb8e) popup_side_volume_key_window_g

0x17df,	// (0x00020c56) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002eb95) popup_side_volume_key_window_t

0x44fc,	// (0x00023973) popup_side_volume_key_window_ParamLimits

0xb61a,	// (0x0002aa91) list_double_graphic_pane_g4_ParamLimits

0xb61a,	// (0x0002aa91) list_double_graphic_pane_g4

0xdd88,	// (0x0002d1ff) list_single_2heading_msg_pane_ParamLimits

0xdd88,	// (0x0002d1ff) list_single_2heading_msg_pane

0xbb9b,	// (0x0002b012) list_single_2heading_msg_pane_g1_ParamLimits

0xbb9b,	// (0x0002b012) list_single_2heading_msg_pane_g1

0xbba7,	// (0x0002b01e) list_single_2heading_msg_pane_g2_ParamLimits

0xbba7,	// (0x0002b01e) list_single_2heading_msg_pane_g2

0xbbba,	// (0x0002b031) list_single_2heading_msg_pane_g3_ParamLimits

0xbbba,	// (0x0002b031) list_single_2heading_msg_pane_g3

0xbbc6,	// (0x0002b03d) list_single_2heading_msg_pane_g4_ParamLimits

0xbbc6,	// (0x0002b03d) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0002f129) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0002f129) list_single_2heading_msg_pane_g

0xbbde,	// (0x0002b055) list_single_2heading_msg_pane_t1_ParamLimits

0xbbde,	// (0x0002b055) list_single_2heading_msg_pane_t1

0xbc06,	// (0x0002b07d) list_single_2heading_msg_pane_t2_ParamLimits

0xbc06,	// (0x0002b07d) list_single_2heading_msg_pane_t2

0xbc71,	// (0x0002b0e8) list_single_2heading_msg_pane_t3_ParamLimits

0xbc71,	// (0x0002b0e8) list_single_2heading_msg_pane_t3

0x1058,	// (0x000204cf) list_single_2heading_msg_pane_t4_ParamLimits

0x1058,	// (0x000204cf) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0002f132) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0002f132) list_single_2heading_msg_pane_t

0x31bd,	// (0x00022634) title_pane_g4_ParamLimits

0x31bd,	// (0x00022634) title_pane_g4

0x15a6,	// (0x00020a1d) title_pane_stacon_g3_ParamLimits

0x15a6,	// (0x00020a1d) title_pane_stacon_g3

0x82bc,	// (0x00027733) list_single_2graphic_im_pane_g4_ParamLimits

0x82bc,	// (0x00027733) list_single_2graphic_im_pane_g4

0x6106,	// (0x0002557d) popup_side_volume_key_window_cp

0x694f,	// (0x00025dc6) main_idle_act2_pane_t1

0x210a,	// (0x00021581) toolbar_button_pane_g10

0xd184,	// (0x0002c5fb) popup_toolbar_window_cp1

0x7150,	// (0x000265c7) clock_nsta_pane_cp_t1

0x7150,	// (0x000265c7) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002ef39) clock_nsta_pane_cp_t

0x1798,	// (0x00020c0f) navi_navi_volume_pane_cp2_ParamLimits

0x17a7,	// (0x00020c1e) popup_side_volume_key_window_g1_ParamLimits

0x17b3,	// (0x00020c2a) popup_side_volume_key_window_g2_ParamLimits

0x17c2,	// (0x00020c39) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002eb8e) popup_side_volume_key_window_g_ParamLimits

0x2518,	// (0x0002198f) fep_hwr_aid_pane

0xd9ef,	// (0x0002ce66) bg_fep_hwr_top_pane_g4_ParamLimits

0x7712,	// (0x00026b89) fep_hwr_top_pane_g1_ParamLimits

0x7724,	// (0x00026b9b) fep_hwr_top_pane_g2_ParamLimits

0x25d1,	// (0x00021a48) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002ef8e) fep_hwr_top_pane_g_ParamLimits

0x25e6,	// (0x00021a5d) fep_hwr_top_text_pane_ParamLimits

0x5ec9,	// (0x00025340) aid_touch_tab_arrow_arrow_2

0x5ed2,	// (0x00025349) aid_touch_tab_arrow_left_2

0x252c,	// (0x000219a3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2563,	// (0x000219da) fep_hwr_prediction_pane

0x7884,	// (0x00026cfb) fep_vkb_prediction_pane

0xe1c7,	// (0x0002d63e) fep_vkb_side_pane_g3_ParamLimits

0xe1c7,	// (0x0002d63e) fep_vkb_side_pane_g3

0x7934,	// (0x00026dab) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7db4,	// (0x0002722b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7dc1,	// (0x00027238) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002f038) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x87bb,	// (0x00027c32) fep_hwr_prediction_pane_g1

0x2873,	// (0x00021cea) fep_hwr_prediction_pane_g2

0x287b,	// (0x00021cf2) fep_hwr_prediction_pane_g3

0x2883,	// (0x00021cfa) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0002f13b) fep_hwr_prediction_pane_g

0x87bb,	// (0x00027c32) fep_vkb_prediction_pane_g1

0x87c5,	// (0x00027c3c) fep_vkb_prediction_pane_g2

0x87cd,	// (0x00027c44) fep_vkb_prediction_pane_g3

0x87d5,	// (0x00027c4c) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0002f144) fep_vkb_prediction_pane_g

0x63d8,	// (0x0002584f) slider_set_pane_g3

0x63ec,	// (0x00025863) slider_set_pane_g4

0x6404,	// (0x0002587b) slider_set_pane_g5

0x63d8,	// (0x0002584f) slider_set_pane_g6

0x23da,	// (0x00021851) slider_set_pane_g7

0x65be,	// (0x00025a35) slider_form_pane_g3

0x65c7,	// (0x00025a3e) slider_form_pane_g4

0x65cf,	// (0x00025a46) slider_form_pane_g5

0x65be,	// (0x00025a35) slider_form_pane_g6

0xdd5a,	// (0x0002d1d1) slider_form_pane_g7

0x6bf8,	// (0x0002606f) slider_set_pane_vc_g3

0x6c01,	// (0x00026078) slider_set_pane_vc_g4

0x6c0a,	// (0x00026081) slider_set_pane_vc_g5

0x6bf8,	// (0x0002606f) slider_set_pane_vc_g6

0x6c13,	// (0x0002608a) slider_set_pane_vc_g7

0x6e0b,	// (0x00026282) slider_form_pane_vc_g1

0x6e14,	// (0x0002628b) slider_form_pane_vc_g2

0x6e1d,	// (0x00026294) slider_form_pane_vc_g3

0x6e0b,	// (0x00026282) slider_form_pane_vc_g4

0x6e26,	// (0x0002629d) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002ef0b) slider_form_pane_vc_g

0x3175,	// (0x000225ec) main_idle_act3_pane

0x87dd,	// (0x00027c54) ai3_links_pane

0xe439,	// (0x0002d8b0) popup_ai3_data_window_ParamLimits

0xe439,	// (0x0002d8b0) popup_ai3_data_window

0x3175,	// (0x000225ec) grid_ai3_links_pane

0xe453,	// (0x0002d8ca) cell_ai3_links_pane_ParamLimits

0xe453,	// (0x0002d8ca) cell_ai3_links_pane

0x8818,	// (0x00027c8f) bg_popup_sub_pane_cp11

0x8825,	// (0x00027c9c) cell_ai3_links_pane_g1

0x3175,	// (0x000225ec) bg_popup_sub_pane_cp12

0x884a,	// (0x00027cc1) heading_ai3_data_pane

0x8852,	// (0x00027cc9) list_ai3_gene_pane

0x885e,	// (0x00027cd5) popup_ai3_data_window_g1

0x8866,	// (0x00027cdd) heading_ai3_data_pane_g1

0x886e,	// (0x00027ce5) heading_ai3_data_pane_t1

0x887c,	// (0x00027cf3) list_double_ai3_gene_pane_ParamLimits

0x887c,	// (0x00027cf3) list_double_ai3_gene_pane

0x8889,	// (0x00027d00) list_single_ai3_gene_pane_ParamLimits

0x8889,	// (0x00027d00) list_single_ai3_gene_pane

0x767b,	// (0x00026af2) list_highlight_pane_cp7_ParamLimits

0x767b,	// (0x00026af2) list_highlight_pane_cp7

0x8896,	// (0x00027d0d) list_single_a13_gene_pane_t1_ParamLimits

0x8896,	// (0x00027d0d) list_single_a13_gene_pane_t1

0x88ad,	// (0x00027d24) list_single_ai3_gene_pane_g1

0x88b6,	// (0x00027d2d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0002f14d) list_single_ai3_gene_pane_g

0x88be,	// (0x00027d35) list_double_ai3_gene_pane_g1_ParamLimits

0x88be,	// (0x00027d35) list_double_ai3_gene_pane_g1

0x88ca,	// (0x00027d41) list_double_ai3_gene_pane_t1_ParamLimits

0x88ca,	// (0x00027d41) list_double_ai3_gene_pane_t1

0x88e6,	// (0x00027d5d) list_double_ai3_gene_pane_t2_ParamLimits

0x88e6,	// (0x00027d5d) list_double_ai3_gene_pane_t2

0x88fc,	// (0x00027d73) list_double_ai3_gene_pane_t3_ParamLimits

0x88fc,	// (0x00027d73) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0002f152) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0002f152) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f89,	// (0x00020400) aid_size_min_col_2

0xe423,	// (0x0002d89a) aid_size_min_msg_ParamLimits

0xe423,	// (0x0002d89a) aid_size_min_msg

0xe1db,	// (0x0002d652) fep_vkb_top_text_pane_g2_ParamLimits

0xe1db,	// (0x0002d652) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002efbe) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002efbe) fep_vkb_top_text_pane_g

0x3175,	// (0x000225ec) main_hc_apps_shell_pane

0x8919,	// (0x00027d90) grid_hc_apps_pane_ParamLimits

0x8919,	// (0x00027d90) grid_hc_apps_pane

0x8928,	// (0x00027d9f) list_hc_apps_pane

0x8930,	// (0x00027da7) scroll_pane_cp37_ParamLimits

0x8930,	// (0x00027da7) scroll_pane_cp37

0xe46d,	// (0x0002d8e4) cell_hc_apps_pane_ParamLimits

0xe46d,	// (0x0002d8e4) cell_hc_apps_pane

0xe52b,	// (0x0002d9a2) cell_hc_apps_pane_g1_ParamLimits

0xe52b,	// (0x0002d9a2) cell_hc_apps_pane_g1

0x8a1b,	// (0x00027e92) cell_hc_apps_pane_g2_ParamLimits

0x8a1b,	// (0x00027e92) cell_hc_apps_pane_g2

0x8a37,	// (0x00027eae) cell_hc_apps_pane_g3_ParamLimits

0x8a37,	// (0x00027eae) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0002f159) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0002f159) cell_hc_apps_pane_g

0xe558,	// (0x0002d9cf) cell_hc_apps_pane_t1_ParamLimits

0xe558,	// (0x0002d9cf) cell_hc_apps_pane_t1

0x34f2,	// (0x00022969) grid_highlight_pane_cp10_ParamLimits

0x34f2,	// (0x00022969) grid_highlight_pane_cp10

0xe596,	// (0x0002da0d) list_single_hc_apps_pane_ParamLimits

0xe596,	// (0x0002da0d) list_single_hc_apps_pane

0xe5c3,	// (0x0002da3a) list_single_hc_apps_pane_g1

0xbcdf,	// (0x0002b156) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0002f160) list_single_hc_apps_pane_g

0xbcf8,	// (0x0002b16f) list_single_hc_apps_pane_g2_copy1

0xbd14,	// (0x0002b18b) list_single_hc_apps_pane_t1

0x3269,	// (0x000226e0) bg_set_opt_pane_cp_ParamLimits

0x14cd,	// (0x00020944) setting_slider_pane_t1_ParamLimits

0x14e6,	// (0x0002095d) setting_slider_pane_t2_ParamLimits

0x1500,	// (0x00020977) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002e9db) setting_slider_pane_t_ParamLimits

0x1518,	// (0x0002098f) slider_set_pane_ParamLimits

0x1a3d,	// (0x00020eb4) control_pane_g5_ParamLimits

0x1a3d,	// (0x00020eb4) control_pane_g5

0x63cb,	// (0x00025842) slider_set_pane_g1_ParamLimits

0x23ce,	// (0x00021845) slider_set_pane_g2_ParamLimits

0x63d8,	// (0x0002584f) slider_set_pane_g3_ParamLimits

0x63ec,	// (0x00025863) slider_set_pane_g4_ParamLimits

0x6404,	// (0x0002587b) slider_set_pane_g5_ParamLimits

0x63d8,	// (0x0002584f) slider_set_pane_g6_ParamLimits

0x23da,	// (0x00021851) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0002eddc) slider_set_pane_g_ParamLimits

0x45dd,	// (0x00023a54) navi_icon_text_pane_ParamLimits

0xd567,	// (0x0002c9de) aid_fill_nsta_2_ParamLimits

0xd59e,	// (0x0002ca15) aid_touch_tab_arrow_left_ParamLimits

0xd5b4,	// (0x0002ca2b) aid_touch_tab_arrow_right_ParamLimits

0xd64f,	// (0x0002cac6) clock_nsta_pane_ParamLimits

0x5eab,	// (0x00025322) navi_icon_pane_g1_ParamLimits

0x5eb7,	// (0x0002532e) navi_text_pane_t1_ParamLimits

0x725a,	// (0x000266d1) navi_icon_text_pane_g1_ParamLimits

0x7266,	// (0x000266dd) navi_icon_text_pane_t1_ParamLimits

0xe5c3,	// (0x0002da3a) list_single_hc_apps_pane_g1_ParamLimits

0xbcdf,	// (0x0002b156) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0002f160) list_single_hc_apps_pane_g_ParamLimits

0xbcf8,	// (0x0002b16f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbd14,	// (0x0002b18b) list_single_hc_apps_pane_t1_ParamLimits

0xbeae,	// (0x0002b325) popup_toolbar2_fixed_window_ParamLimits

0xbeae,	// (0x0002b325) popup_toolbar2_fixed_window

0xc791,	// (0x0002bc08) popup_toolbar2_float_window

0x3175,	// (0x000225ec) bg_popup_sub_pane_cp27

0x8b0e,	// (0x00027f85) grid_toolbar2_float_pane

0x3175,	// (0x000225ec) bg_popup_sub_pane_cp26

0x8b0e,	// (0x00027f85) grid_toolbar2_fixed_pane

0xe5dc,	// (0x0002da53) cell_toolbar2_fixed_pane_ParamLimits

0xe5dc,	// (0x0002da53) cell_toolbar2_fixed_pane

0xe5f7,	// (0x0002da6e) cell_toolbar2_fixed_pane_g1

0x8b2f,	// (0x00027fa6) toolbar2_fixed_button_pane

0x4f92,	// (0x00024409) toolbar2_fixed_button_pane_g1

0x4f9a,	// (0x00024411) toolbar2_fixed_button_pane_g2

0x4fa2,	// (0x00024419) toolbar2_fixed_button_pane_g3

0x4faa,	// (0x00024421) toolbar2_fixed_button_pane_g4

0x4fb2,	// (0x00024429) toolbar2_fixed_button_pane_g5

0x4fba,	// (0x00024431) toolbar2_fixed_button_pane_g6

0x4fc2,	// (0x00024439) toolbar2_fixed_button_pane_g7

0x4fca,	// (0x00024441) toolbar2_fixed_button_pane_g8

0x4fd2,	// (0x00024449) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0002ecde) toolbar2_fixed_button_pane_g

0x8b37,	// (0x00027fae) cell_toolbar2_float_pane_ParamLimits

0x8b37,	// (0x00027fae) cell_toolbar2_float_pane

0x8b48,	// (0x00027fbf) cell_toolbar2_float_pane_g1

0x8b2f,	// (0x00027fa6) toolbar2_fixed_button_pane_cp

0xe0b5,	// (0x0002d52c) fep_vkb_accented_list_pane_ParamLimits

0xe0b5,	// (0x0002d52c) fep_vkb_accented_list_pane

0x2734,	// (0x00021bab) bg_popup_fep_shadow_pane_g9

0x475d,	// (0x00023bd4) bg_popup_fep_shadow_pane_cp3

0x3c38,	// (0x000230af) list_accented_list_pane

0x8b51,	// (0x00027fc8) list_single_accented_list_pane_ParamLimits

0x8b51,	// (0x00027fc8) list_single_accented_list_pane

0x475d,	// (0x00023bd4) list_highlight_pane_cp10

0x8b62,	// (0x00027fd9) list_single_accented_list_pane_t1

0xc6bb,	// (0x0002bb32) popup_slider_window_ParamLimits

0xc6bb,	// (0x0002bb32) popup_slider_window

0x879e,	// (0x00027c15) aid_indentation_list_msg

0xe6f0,	// (0x0002db67) bg_popup_window_pane_cp19

0x8c86,	// (0x000280fd) popup_slider_window_g1

0x8ca2,	// (0x00028119) popup_slider_window_g2

0x8cbe,	// (0x00028135) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0002f165) popup_slider_window_g

0x8d1a,	// (0x00028191) popup_slider_window_t1

0x8d8e,	// (0x00028205) small_volume_slider_vertical_pane

0x76b6,	// (0x00026b2d) small_volume_slider_vertical_pane_g1

0x76b6,	// (0x00026b2d) small_volume_slider_vertical_pane_g2

0x8daa,	// (0x00028221) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0002f177) small_volume_slider_vertical_pane_g

0xbe1c,	// (0x0002b293) area_side_right_pane_ParamLimits

0xbe1c,	// (0x0002b293) area_side_right_pane

0xca12,	// (0x0002be89) aid_size_side_button_ParamLimits

0xca12,	// (0x0002be89) aid_size_side_button

0xca2b,	// (0x0002bea2) grid_sctrl_middle_pane_ParamLimits

0xca2b,	// (0x0002bea2) grid_sctrl_middle_pane

0x28bf,	// (0x00021d36) sctrl_sk_bottom_pane

0x28d0,	// (0x00021d47) sctrl_sk_top_pane

0x28e2,	// (0x00021d59) aid_touch_sctrl_top

0x34f2,	// (0x00022969) bg_sctrl_sk_pane_ParamLimits

0x34f2,	// (0x00022969) bg_sctrl_sk_pane

0x28ef,	// (0x00021d66) sctrl_sk_top_pane_g1

0x28fc,	// (0x00021d73) sctrl_sk_top_pane_t1

0x28e2,	// (0x00021d59) aid_touch_sctrl_bottom

0x34f2,	// (0x00022969) bg_sctrl_sk_pane_cp_ParamLimits

0x34f2,	// (0x00022969) bg_sctrl_sk_pane_cp

0x2917,	// (0x00021d8e) sctrl_sk_bottom_pane_g1

0x28fc,	// (0x00021d73) sctrl_sk_bottom_pane_t1

0xca45,	// (0x0002bebc) cell_sctrl_middle_pane_ParamLimits

0xca45,	// (0x0002bebc) cell_sctrl_middle_pane

0xca56,	// (0x0002becd) aid_touch_sctrl_middle_ParamLimits

0xca56,	// (0x0002becd) aid_touch_sctrl_middle

0xca63,	// (0x0002beda) bg_sctrl_middle_pane_ParamLimits

0xca63,	// (0x0002beda) bg_sctrl_middle_pane

0x8e32,	// (0x000282a9) cell_sctrl_middle_pane_g1_ParamLimits

0x8e32,	// (0x000282a9) cell_sctrl_middle_pane_g1

0xca71,	// (0x0002bee8) cell_sctrl_middle_pane_g2_ParamLimits

0xca71,	// (0x0002bee8) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0002f183) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0002f183) cell_sctrl_middle_pane_g

0x4f92,	// (0x00024409) bg_sctrl_middle_pane_g1

0x4f9a,	// (0x00024411) bg_sctrl_middle_pane_g2

0x4fa2,	// (0x00024419) bg_sctrl_middle_pane_g3

0x4faa,	// (0x00024421) bg_sctrl_middle_pane_g4

0x4fb2,	// (0x00024429) bg_sctrl_middle_pane_g5

0x4fba,	// (0x00024431) bg_sctrl_middle_pane_g6

0x4fc2,	// (0x00024439) bg_sctrl_middle_pane_g7

0x4fca,	// (0x00024441) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0002f188) bg_sctrl_middle_pane_g

0x4fd2,	// (0x00024449) bg_sctrl_middle_pane_g8_copy1

0x4f92,	// (0x00024409) bg_sctrl_sk_pane_g1

0x4f9a,	// (0x00024411) bg_sctrl_sk_pane_g2

0x4fa2,	// (0x00024419) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0002ecde) bg_sctrl_sk_pane_g

0x3a04,	// (0x00022e7b) aid_size_touch_scroll_bar

0x4faa,	// (0x00024421) bg_sctrl_sk_pane_g4

0x4fb2,	// (0x00024429) bg_sctrl_sk_pane_g5

0x4fba,	// (0x00024431) bg_sctrl_sk_pane_g6

0x4fc2,	// (0x00024439) bg_sctrl_sk_pane_g7

0x4fca,	// (0x00024441) bg_sctrl_sk_pane_g8

0x4fd2,	// (0x00024449) bg_sctrl_sk_pane_g9

0x1bc9,	// (0x00021040) popup_fep_china_hwr2_fs_candidate_window

0xc1db,	// (0x0002b652) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1db,	// (0x0002b652) popup_fep_china_hwr2_fs_control_window

0x7934,	// (0x00026dab) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0002f17e) sctrl_sk_top_pane_g

0xe7a8,	// (0x0002dc1f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7a8,	// (0x0002dc1f) aid_fep_china_hwr2_fs_cell

0xe7bc,	// (0x0002dc33) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7bc,	// (0x0002dc33) bg_popup_fep_shadow_pane_cp4

0xe7d3,	// (0x0002dc4a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7d3,	// (0x0002dc4a) bg_popup_fep_shadow_pane_cp5

0xe7e5,	// (0x0002dc5c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7e5,	// (0x0002dc5c) popup_fep_china_hwr2_fs_control_bar_grid

0xe7f9,	// (0x0002dc70) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e06,	// (0x0002827d) aid_fep_china_hwr2_fs_candi_cell

0x3175,	// (0x000225ec) bg_popup_fep_shadow_pane_cp6

0x8e10,	// (0x00028287) popup_fep_china_hwr2_fs_candidate_grid

0xe801,	// (0x0002dc78) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe801,	// (0x0002dc78) cell_fep_china_hwr2_fs_funtion_grid

0x76b6,	// (0x00026b2d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e32,	// (0x000282a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e32,	// (0x000282a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e40,	// (0x000282b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e40,	// (0x000282b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0002f199) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0002f199) cell_fep_china_hwr2_fs_funtion_grid_g

0xe819,	// (0x0002dc90) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe819,	// (0x0002dc90) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe82e,	// (0x0002dca5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe82e,	// (0x0002dca5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0002f19e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0002f19e) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e87,	// (0x000282fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e8f,	// (0x00028306) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e97,	// (0x0002830e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0002f1a3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e9f,	// (0x00028316) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e9f,	// (0x00028316) cell_fep_china_hwr2_fs_candidate_grid

0x8eb8,	// (0x0002832f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ec0,	// (0x00028337) popup_fep_china_hwr2_fs_candidate_grid_g21

0x76b6,	// (0x00026b2d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x76b6,	// (0x00026b2d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002efc3) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ec8,	// (0x0002833f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4b99,	// (0x00024010) clock_nsta_pane_cp_24_ParamLimits

0x4b99,	// (0x00024010) clock_nsta_pane_cp_24

0x4c17,	// (0x0002408e) indicator_nsta_pane_cp_24_ParamLimits

0x4c17,	// (0x0002408e) indicator_nsta_pane_cp_24

0x5d27,	// (0x0002519e) heading_pane_g1

0x0001,

0xf8cc,	// (0x0002ed43) heading_pane_g

0x6798,	// (0x00025c0f) grid_sct_catagory_button_pane

0x67c8,	// (0x00025c3f) scroll_pane_cp5_ParamLimits

0x72a8,	// (0x0002671f) button_value_adjust_pane_cp5_ParamLimits

0x72a8,	// (0x0002671f) button_value_adjust_pane_cp5

0x7387,	// (0x000267fe) form2_midp_time_pane_ParamLimits

0x8ed6,	// (0x0002834d) cell_sct_catagory_button_pane_ParamLimits

0x8ed6,	// (0x0002834d) cell_sct_catagory_button_pane

0x767b,	// (0x00026af2) bg_button_pane_cp01_ParamLimits

0x767b,	// (0x00026af2) bg_button_pane_cp01

0x76b6,	// (0x00026b2d) cell_sct_catagory_button_pane_g1

0xc734,	// (0x0002bbab) popup_tb_extension_window

0xe84a,	// (0x0002dcc1) aid_size_cell_ext_ParamLimits

0xe84a,	// (0x0002dcc1) aid_size_cell_ext

0x3846,	// (0x00022cbd) bg_tb_trans_pane_cp1_ParamLimits

0x3846,	// (0x00022cbd) bg_tb_trans_pane_cp1

0xe870,	// (0x0002dce7) grid_tb_ext_pane_ParamLimits

0xe870,	// (0x0002dce7) grid_tb_ext_pane

0xe8ae,	// (0x0002dd25) cell_tb_ext_pane_ParamLimits

0xe8ae,	// (0x0002dd25) cell_tb_ext_pane

0xe8d6,	// (0x0002dd4d) cell_tb_ext_pane_g1_ParamLimits

0xe8d6,	// (0x0002dd4d) cell_tb_ext_pane_g1

0x8f6c,	// (0x000283e3) cell_tb_ext_pane_t1

0x34f2,	// (0x00022969) list_highlight_pane_cp11_ParamLimits

0x34f2,	// (0x00022969) list_highlight_pane_cp11

0x1400,	// (0x00020877) popup_uni_indicator_window_ParamLimits

0x1400,	// (0x00020877) popup_uni_indicator_window

0x3ad5,	// (0x00022f4c) bg_popup_sub_pane_cp14

0x8f87,	// (0x000283fe) list_uniindi_pane

0x8f93,	// (0x0002840a) uniindi_top_pane

0x34f2,	// (0x00022969) bg_uniindi_top_pane

0x8fb2,	// (0x00028429) uniindi_top_pane_g1

0x8fc8,	// (0x0002843f) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0002f1aa) uniindi_top_pane_g

0x8ff2,	// (0x00028469) uniindi_top_pane_t1

0x901c,	// (0x00028493) list_single_uniindi_pane_ParamLimits

0x901c,	// (0x00028493) list_single_uniindi_pane

0x76b6,	// (0x00026b2d) bg_uniindi_top_pane_g1

0x902f,	// (0x000284a6) list_single_uniindi_pane_g1

0x9042,	// (0x000284b9) list_single_uniindi_pane_t1

0x3175,	// (0x000225ec) control_bg_pane

0x9067,	// (0x000284de) bg_sctrl_sk_pane_cp1

0x9070,	// (0x000284e7) bg_sctrl_sk_pane_cp2

0x9079,	// (0x000284f0) control_bg_pane_g1

0x9082,	// (0x000284f9) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0002f1b3) control_bg_pane_g

0x70e2,	// (0x00026559) cell_indicator_nsta_pane_g1_ParamLimits

0xdf38,	// (0x0002d3af) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002ef27) cell_indicator_nsta_pane_g_ParamLimits

0x0d46,	// (0x000201bd) form2_midp_time_pane_t1_ParamLimits

0x250a,	// (0x00021981) main_idle_act4_pane_ParamLimits

0x250a,	// (0x00021981) main_idle_act4_pane

0xc734,	// (0x0002bbab) popup_tb_extension_window_ParamLimits

0xe895,	// (0x0002dd0c) tb_ext_find_pane_ParamLimits

0xe895,	// (0x0002dd0c) tb_ext_find_pane

0x908b,	// (0x00028502) ai_gene_pane_1_cp1

0x4896,	// (0x00023d0d) ai_gene_pane_2_cp1

0x9093,	// (0x0002850a) list_single_idle_plugin_calendar_pane

0x909c,	// (0x00028513) list_single_idle_plugin_notification_pane

0x90a5,	// (0x0002851c) list_single_idle_plugin_player_pane

0xe8f3,	// (0x0002dd6a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8f3,	// (0x0002dd6a) list_single_idle_plugin_shortcut_pane

0xe91b,	// (0x0002dd92) main_idle_act4_pane_t1

0xe931,	// (0x0002dda8) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0002f1b8) main_idle_act4_pane_t

0xe947,	// (0x0002ddbe) middle_sk_idle_act4_pane_ParamLimits

0xe947,	// (0x0002ddbe) middle_sk_idle_act4_pane

0xe963,	// (0x0002ddda) popup_clock_digital_analogue_window_cp2

0xe98b,	// (0x0002de02) shortcut_wheel_idle_act4_pane_ParamLimits

0xe98b,	// (0x0002de02) shortcut_wheel_idle_act4_pane

0x76b6,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g1

0x76b6,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g2

0x76b6,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g3

0x76b6,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g4

0x76b6,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g5

0x9138,	// (0x000285af) shortcut_wheel_idle_act4_pane_g6

0x9140,	// (0x000285b7) shortcut_wheel_idle_act4_pane_g7

0x9148,	// (0x000285bf) shortcut_wheel_idle_act4_pane_g8

0x9150,	// (0x000285c7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0002f1bd) shortcut_wheel_idle_act4_pane_g

0xd9ef,	// (0x0002ce66) middle_sk_idle_act4_pane_g1_ParamLimits

0xd9ef,	// (0x0002ce66) middle_sk_idle_act4_pane_g1

0xea08,	// (0x0002de7f) middle_sk_idle_act4_pane_g2_ParamLimits

0xea08,	// (0x0002de7f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0002f1e0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0002f1e0) middle_sk_idle_act4_pane_g

0xea20,	// (0x0002de97) middle_sk_idle_act4_pane_t1_ParamLimits

0xea20,	// (0x0002de97) middle_sk_idle_act4_pane_t1

0xea4f,	// (0x0002dec6) grid_ai_shortcut_pane_ParamLimits

0xea4f,	// (0x0002dec6) grid_ai_shortcut_pane

0xea6c,	// (0x0002dee3) list_highlight_pane_cp16_ParamLimits

0xea6c,	// (0x0002dee3) list_highlight_pane_cp16

0xea79,	// (0x0002def0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea79,	// (0x0002def0) list_single_idle_plugin_shortcut_pane_g1

0xea85,	// (0x0002defc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea85,	// (0x0002defc) list_single_idle_plugin_shortcut_pane_g2

0xeaa1,	// (0x0002df18) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaa1,	// (0x0002df18) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0002f1e5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0002f1e5) list_single_idle_plugin_shortcut_pane_g

0xeab6,	// (0x0002df2d) cell_ai_shortcut_pane_ParamLimits

0xeab6,	// (0x0002df2d) cell_ai_shortcut_pane

0xeacc,	// (0x0002df43) cell_ai_shortcut_pane_g1_ParamLimits

0xeacc,	// (0x0002df43) cell_ai_shortcut_pane_g1

0x908b,	// (0x00028502) ai_gene_pane_1_cp2

0x9280,	// (0x000286f7) ai_gene_pane_2_cp2

0x9288,	// (0x000286ff) list_highlight_pane_cp15

0x9291,	// (0x00028708) list_single_idle_plugin_calendar_pane_g1

0x9288,	// (0x000286ff) list_highlight_pane_cp17

0x9299,	// (0x00028710) list_single_idle_plugin_calendar_pane_g1_copy1

0x92a1,	// (0x00028718) list_single_idle_plugin_player_pane_g1

0x69f1,	// (0x00025e68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0002f1ec) list_single_idle_plugin_player_pane_g

0x92a9,	// (0x00028720) list_single_idle_plugin_player_pane_t1

0x92b7,	// (0x0002872e) list_single_idle_plugin_player_pane_t2

0x92c5,	// (0x0002873c) list_single_idle_plugin_player_pane_t3

0x92d3,	// (0x0002874a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0002f1f1) list_single_idle_plugin_player_pane_t

0x92e1,	// (0x00028758) wait_bar_pane_cp15

0x92e9,	// (0x00028760) grid_ai_notification_pane

0x69f1,	// (0x00025e68) list_single_idle_plugin_notification_pane_g1

0xeaee,	// (0x0002df65) cell_ai_notification_pane_ParamLimits

0xeaee,	// (0x0002df65) cell_ai_notification_pane

0x92ff,	// (0x00028776) cell_ai_notification_pane_g1

0x9307,	// (0x0002877e) cell_ai_notification_pane_t1

0xeafb,	// (0x0002df72) tb_ext_find_button_pane

0xeb03,	// (0x0002df7a) tb_ext_find_pane_g1

0xeb0b,	// (0x0002df82) tb_ext_find_pane_t1

0x4139,	// (0x000235b0) tb_ext_find_button_pane_g1

0x9333,	// (0x000287aa) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0002f1fa) tb_ext_find_button_pane_g

0xe91b,	// (0x0002dd92) main_idle_act4_pane_t1_ParamLimits

0xe931,	// (0x0002dda8) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0002f1b8) main_idle_act4_pane_t_ParamLimits

0xe963,	// (0x0002ddda) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe97b,	// (0x0002ddf2) sat_plugin_idle_act4_pane_ParamLimits

0xe97b,	// (0x0002ddf2) sat_plugin_idle_act4_pane

0xeb19,	// (0x0002df90) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb19,	// (0x0002df90) sat_plugin_idle_act4_pane_t1

0xeb31,	// (0x0002dfa8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb31,	// (0x0002dfa8) sat_plugin_idle_act4_pane_t2

0xeb49,	// (0x0002dfc0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb49,	// (0x0002dfc0) sat_plugin_idle_act4_pane_t3

0xeb61,	// (0x0002dfd8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb61,	// (0x0002dfd8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0002f1ff) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0002f1ff) sat_plugin_idle_act4_pane_t

0x133b,	// (0x000207b2) popup_battery_window_ParamLimits

0x133b,	// (0x000207b2) popup_battery_window

0x34f2,	// (0x00022969) bg_popup_sub_pane_cp25_ParamLimits

0x34f2,	// (0x00022969) bg_popup_sub_pane_cp25

0x9388,	// (0x000287ff) popup_battery_window_g1_ParamLimits

0x9388,	// (0x000287ff) popup_battery_window_g1

0x9394,	// (0x0002880b) popup_battery_window_t1_ParamLimits

0x9394,	// (0x0002880b) popup_battery_window_t1

0x93a6,	// (0x0002881d) popup_battery_window_t2_ParamLimits

0x93a6,	// (0x0002881d) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0002f208) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0002f208) popup_battery_window_t

0xd467,	// (0x0002c8de) midp_canvas_pane_ParamLimits

0xd4c2,	// (0x0002c939) midp_keypad_pane_ParamLimits

0xd4c2,	// (0x0002c939) midp_keypad_pane

0x4a9d,	// (0x00023f14) main_midp_pane_ParamLimits

0x716e,	// (0x000265e5) signal_pane_g2_cp_ParamLimits

0xeb79,	// (0x0002dff0) aid_size_cell_midp_keypad_ParamLimits

0xeb79,	// (0x0002dff0) aid_size_cell_midp_keypad

0xeb97,	// (0x0002e00e) midp_keyp_game_grid_pane_ParamLimits

0xeb97,	// (0x0002e00e) midp_keyp_game_grid_pane

0xebbe,	// (0x0002e035) midp_keyp_rocker_pane_ParamLimits

0xebbe,	// (0x0002e035) midp_keyp_rocker_pane

0xebff,	// (0x0002e076) midp_keyp_sk_left_pane_ParamLimits

0xebff,	// (0x0002e076) midp_keyp_sk_left_pane

0xec53,	// (0x0002e0ca) midp_keyp_sk_right_pane_ParamLimits

0xec53,	// (0x0002e0ca) midp_keyp_sk_right_pane

0x3175,	// (0x000225ec) bg_button_pane_cp03

0xeca7,	// (0x0002e11e) midp_keyp_sk_left_pane_g1

0x3175,	// (0x000225ec) bg_button_pane_cp04

0xeca7,	// (0x0002e11e) midp_keyp_sk_right_pane_g1

0x76b6,	// (0x00026b2d) midp_keyp_rocker_pane_g1

0xecb0,	// (0x0002e127) keyp_game_cell_pane_ParamLimits

0xecb0,	// (0x0002e127) keyp_game_cell_pane

0x3175,	// (0x000225ec) bg_button_pane_cp02

0xecd4,	// (0x0002e14b) keyp_game_cell_pane_g1

0xbe5e,	// (0x0002b2d5) popup_fep_vkb2_window_ParamLimits

0xbe5e,	// (0x0002b2d5) popup_fep_vkb2_window

0xca7d,	// (0x0002bef4) aid_size_cell_vkb2_ParamLimits

0xca7d,	// (0x0002bef4) aid_size_cell_vkb2

0xcab3,	// (0x0002bf2a) popup_fep_vkb2_window_g1_ParamLimits

0xcab3,	// (0x0002bf2a) popup_fep_vkb2_window_g1

0xcb03,	// (0x0002bf7a) vkb2_area_bottom_pane_ParamLimits

0xcb03,	// (0x0002bf7a) vkb2_area_bottom_pane

0xcb57,	// (0x0002bfce) vkb2_area_keypad_pane_ParamLimits

0xcb57,	// (0x0002bfce) vkb2_area_keypad_pane

0xcb9f,	// (0x0002c016) vkb2_area_top_pane_ParamLimits

0xcb9f,	// (0x0002c016) vkb2_area_top_pane

0xcc25,	// (0x0002c09c) vkb2_top_entry_pane_ParamLimits

0xcc25,	// (0x0002c09c) vkb2_top_entry_pane

0xcc52,	// (0x0002c0c9) vkb2_top_grid_left_pane_ParamLimits

0xcc52,	// (0x0002c0c9) vkb2_top_grid_left_pane

0xcc72,	// (0x0002c0e9) vkb2_top_grid_right_pane_ParamLimits

0xcc72,	// (0x0002c0e9) vkb2_top_grid_right_pane

0x2b75,	// (0x00021fec) vkb2_cell_keypad_pane_ParamLimits

0x2b75,	// (0x00021fec) vkb2_cell_keypad_pane

0xccb8,	// (0x0002c12f) vkb2_area_bottom_grid_pane_ParamLimits

0xccb8,	// (0x0002c12f) vkb2_area_bottom_grid_pane

0xcce2,	// (0x0002c159) vkb2_area_bottom_pane_g1_ParamLimits

0xcce2,	// (0x0002c159) vkb2_area_bottom_pane_g1

0xcd08,	// (0x0002c17f) vkb2_area_bottom_pane_g2_ParamLimits

0xcd08,	// (0x0002c17f) vkb2_area_bottom_pane_g2

0xcd39,	// (0x0002c1b0) vkb2_area_bottom_pane_g3_ParamLimits

0xcd39,	// (0x0002c1b0) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0002f20d) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0002f20d) vkb2_area_bottom_pane_g

0x2d1f,	// (0x00022196) vkb2_top_cell_left_pane_ParamLimits

0x2d1f,	// (0x00022196) vkb2_top_cell_left_pane

0xecdd,	// (0x0002e154) vkb2_top_entry_pane_g1_ParamLimits

0xecdd,	// (0x0002e154) vkb2_top_entry_pane_g1

0xeceb,	// (0x0002e162) vkb2_top_entry_pane_t1_ParamLimits

0xeceb,	// (0x0002e162) vkb2_top_entry_pane_t1

0x9549,	// (0x000289c0) vkb2_top_entry_pane_t2_ParamLimits

0x9549,	// (0x000289c0) vkb2_top_entry_pane_t2

0x957b,	// (0x000289f2) vkb2_top_entry_pane_t3_ParamLimits

0x957b,	// (0x000289f2) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0002f214) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0002f214) vkb2_top_entry_pane_t

0xcda3,	// (0x0002c21a) vkb2_top_grid_right_pane_g1_ParamLimits

0xcda3,	// (0x0002c21a) vkb2_top_grid_right_pane_g1

0x2d82,	// (0x000221f9) vkb2_top_grid_right_pane_g2_ParamLimits

0x2d82,	// (0x000221f9) vkb2_top_grid_right_pane_g2

0x2d9a,	// (0x00022211) vkb2_top_grid_right_pane_g3_ParamLimits

0x2d9a,	// (0x00022211) vkb2_top_grid_right_pane_g3

0xcdb9,	// (0x0002c230) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdb9,	// (0x0002c230) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0002f21b) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0002f21b) vkb2_top_grid_right_pane_g

0x2dc8,	// (0x0002223f) vkb2_top_cell_left_pane_g1

0x2ddf,	// (0x00022256) vkb2_cell_keypad_pane_g1_ParamLimits

0x2ddf,	// (0x00022256) vkb2_cell_keypad_pane_g1

0x959f,	// (0x00028a16) vkb2_cell_keypad_pane_t1_ParamLimits

0x959f,	// (0x00028a16) vkb2_cell_keypad_pane_t1

0x2ded,	// (0x00022264) vkb2_cell_bottom_grid_pane_ParamLimits

0x2ded,	// (0x00022264) vkb2_cell_bottom_grid_pane

0x2e26,	// (0x0002229d) vkb2_cell_bottom_grid_pane_g1

0xe9ac,	// (0x0002de23) aid_call2_pane_cp02

0xe9b4,	// (0x0002de2b) aid_call_pane_cp02

0xe9bc,	// (0x0002de33) clock_digital_number_pane_cp10

0xe9c4,	// (0x0002de3b) clock_digital_number_pane_cp11

0xe9cc,	// (0x0002de43) clock_digital_number_pane_cp12

0xe9d4,	// (0x0002de4b) clock_digital_number_pane_cp13

0xe9dc,	// (0x0002de53) clock_digital_separator_pane_cp10

0x4139,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g1

0x4139,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g2

0xe9e4,	// (0x0002de5b) popup_clock_digital_analogue_window_cp2_g3

0x4139,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g4

0xe9e4,	// (0x0002de5b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0002f1d0) popup_clock_digital_analogue_window_cp2_g

0xe9ec,	// (0x0002de63) popup_clock_digital_analogue_window_cp2_t1

0xe9fa,	// (0x0002de71) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0002f1db) popup_clock_digital_analogue_window_cp2_t

0x76b6,	// (0x00026b2d) clock_digital_number_pane_cp10_g1

0x76b6,	// (0x00026b2d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002efc3) clock_digital_number_pane_cp10_g

0x76b6,	// (0x00026b2d) clock_digital_separator_pane_cp10_g1

0x76b6,	// (0x00026b2d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002efc3) clock_digital_separator_pane_cp10_g

0x8fd4,	// (0x0002844b) uniindi_top_pane_g3

0x8fe5,	// (0x0002845c) uniindi_top_pane_g4

0x2c00,	// (0x00022077) vkb2_row_keypad_pane_ParamLimits

0x2c00,	// (0x00022077) vkb2_row_keypad_pane

0x2e42,	// (0x000222b9) vkb2_cell_t_keypad_pane_ParamLimits

0x2e42,	// (0x000222b9) vkb2_cell_t_keypad_pane

0x2e52,	// (0x000222c9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2e52,	// (0x000222c9) vkb2_cell_t_keypad_pane_cp08

0x2e65,	// (0x000222dc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2e65,	// (0x000222dc) vkb2_cell_t_keypad_pane_cp09

0x2e79,	// (0x000222f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2e79,	// (0x000222f0) vkb2_cell_t_keypad_pane_cp01

0x2e8a,	// (0x00022301) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2e8a,	// (0x00022301) vkb2_cell_t_keypad_pane_cp02

0x2e9b,	// (0x00022312) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2e9b,	// (0x00022312) vkb2_cell_t_keypad_pane_cp03

0x2eac,	// (0x00022323) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2eac,	// (0x00022323) vkb2_cell_t_keypad_pane_cp04

0x2ebd,	// (0x00022334) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2ebd,	// (0x00022334) vkb2_cell_t_keypad_pane_cp05

0x2ece,	// (0x00022345) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2ece,	// (0x00022345) vkb2_cell_t_keypad_pane_cp06

0x2edf,	// (0x00022356) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2edf,	// (0x00022356) vkb2_cell_t_keypad_pane_cp07

0x2ef0,	// (0x00022367) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2ef0,	// (0x00022367) vkb2_cell_t_keypad_pane_cp10

0x7934,	// (0x00026dab) vkb2_cell_t_keypad_pane_g1

0x95b6,	// (0x00028a2d) vkb2_cell_t_keypad_pane_t1

0x3175,	// (0x000225ec) popup_grid_graphic2_window

0xed24,	// (0x0002e19b) aid_size_cell_graphic2_ParamLimits

0xed24,	// (0x0002e19b) aid_size_cell_graphic2

0xed6f,	// (0x0002e1e6) bg_popup_window_pane_cp21_ParamLimits

0xed6f,	// (0x0002e1e6) bg_popup_window_pane_cp21

0xed7d,	// (0x0002e1f4) graphic2_pages_pane_ParamLimits

0xed7d,	// (0x0002e1f4) graphic2_pages_pane

0xedd3,	// (0x0002e24a) grid_graphic2_control_pane_ParamLimits

0xedd3,	// (0x0002e24a) grid_graphic2_control_pane

0xee1b,	// (0x0002e292) grid_graphic2_pane_ParamLimits

0xee1b,	// (0x0002e292) grid_graphic2_pane

0xeea2,	// (0x0002e319) cell_graphic2_pane

0x3175,	// (0x000225ec) main_comp_mode_pane

0x8852,	// (0x00027cc9) list_ai3_gene_pane_ParamLimits

0xe6f0,	// (0x0002db67) bg_popup_window_pane_cp19_ParamLimits

0x8c28,	// (0x0002809f) bg_touch_area_indi_pane_ParamLimits

0x8c28,	// (0x0002809f) bg_touch_area_indi_pane

0x8c3e,	// (0x000280b5) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c3e,	// (0x000280b5) bg_touch_area_indi_pane_cp01

0x8c54,	// (0x000280cb) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c54,	// (0x000280cb) bg_touch_area_indi_pane_cp02

0x8c6c,	// (0x000280e3) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c6c,	// (0x000280e3) bg_touch_area_indi_pane_cp03

0x8c86,	// (0x000280fd) popup_slider_window_g1_ParamLimits

0x8ca2,	// (0x00028119) popup_slider_window_g2_ParamLimits

0x8cbe,	// (0x00028135) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0002f165) popup_slider_window_g_ParamLimits

0x8d1a,	// (0x00028191) popup_slider_window_t1_ParamLimits

0x8d8e,	// (0x00028205) small_volume_slider_vertical_pane_ParamLimits

0xeea2,	// (0x0002e319) cell_graphic2_pane_ParamLimits

0xeeff,	// (0x0002e376) bg_button_pane_cp10_ParamLimits

0xeeff,	// (0x0002e376) bg_button_pane_cp10

0xef12,	// (0x0002e389) bg_button_pane_cp11_ParamLimits

0xef12,	// (0x0002e389) bg_button_pane_cp11

0xef25,	// (0x0002e39c) graphic2_pages_pane_g1_ParamLimits

0xef25,	// (0x0002e39c) graphic2_pages_pane_g1

0xef40,	// (0x0002e3b7) graphic2_pages_pane_g2_ParamLimits

0xef40,	// (0x0002e3b7) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0002f229) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0002f229) graphic2_pages_pane_g

0xef58,	// (0x0002e3cf) graphic2_pages_pane_t1_ParamLimits

0xef58,	// (0x0002e3cf) graphic2_pages_pane_t1

0xef70,	// (0x0002e3e7) cell_graphic2_control_pane_ParamLimits

0xef70,	// (0x0002e3e7) cell_graphic2_control_pane

0xefa2,	// (0x0002e419) cell_graphic2_pane_g1_ParamLimits

0xefa2,	// (0x0002e419) cell_graphic2_pane_g1

0xd9fd,	// (0x0002ce74) cell_graphic2_pane_g2_ParamLimits

0xd9fd,	// (0x0002ce74) cell_graphic2_pane_g2

0xed62,	// (0x0002e1d9) cell_graphic2_pane_g3_ParamLimits

0xed62,	// (0x0002e1d9) cell_graphic2_pane_g3

0xda0a,	// (0x0002ce81) cell_graphic2_pane_g4_ParamLimits

0xda0a,	// (0x0002ce81) cell_graphic2_pane_g4

0xefaf,	// (0x0002e426) cell_graphic2_pane_g5_ParamLimits

0xefaf,	// (0x0002e426) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0002f22e) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0002f22e) cell_graphic2_pane_g

0xefcf,	// (0x0002e446) cell_graphic2_pane_t1_ParamLimits

0xefcf,	// (0x0002e446) cell_graphic2_pane_t1

0x5d1b,	// (0x00025192) grid_highlight_pane_cp11_ParamLimits

0x5d1b,	// (0x00025192) grid_highlight_pane_cp11

0x34f2,	// (0x00022969) bg_button_pane_cp05

0xf004,	// (0x0002e47b) cell_graphic2_control_pane_g1

0x76b6,	// (0x00026b2d) bg_touch_area_indi_pane_g1

0x9886,	// (0x00028cfd) aid_cmod_rocker_key_size

0x9890,	// (0x00028d07) aid_cmode_itu_key_size

0x989a,	// (0x00028d11) main_cmode_video_pane

0x98a4,	// (0x00028d1b) main_comp_mode_itu_pane

0x98b0,	// (0x00028d27) main_comp_mode_rocker_pane

0x98bc,	// (0x00028d33) cell_cmode_rocker_pane_ParamLimits

0x98bc,	// (0x00028d33) cell_cmode_rocker_pane

0x98ce,	// (0x00028d45) cell_cmode_itu_pane_ParamLimits

0x98ce,	// (0x00028d45) cell_cmode_itu_pane

0x3ad5,	// (0x00022f4c) bg_button_pane_cp06_ParamLimits

0x3ad5,	// (0x00022f4c) bg_button_pane_cp06

0x7934,	// (0x00026dab) cell_cmode_rocker_pane_g1_ParamLimits

0x7934,	// (0x00026dab) cell_cmode_rocker_pane_g1

0x8e32,	// (0x000282a9) cell_cmode_rocker_pane_g2_ParamLimits

0x8e32,	// (0x000282a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0002f23e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0002f23e) cell_cmode_rocker_pane_g

0x3175,	// (0x000225ec) bg_button_pane_cp07

0x98e3,	// (0x00028d5a) cell_cmode_itu_pane_g1

0x98ec,	// (0x00028d63) cell_cmode_itu_pane_t1

0x98fa,	// (0x00028d71) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0002f243) cell_cmode_itu_pane_t

0x9057,	// (0x000284ce) aid_touch_ctrl_left

0x905f,	// (0x000284d6) aid_touch_ctrl_right

0x3175,	// (0x000225ec) compa_mode_pane

0xf02a,	// (0x0002e4a1) aid_cmod_rocker_key_size_cp

0xf034,	// (0x0002e4ab) aid_cmode_itu_key_size_cp

0x991c,	// (0x00028d93) compa_mode_pane_g1

0x9924,	// (0x00028d9b) compa_mode_pane_g2

0x992c,	// (0x00028da3) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0002f248) compa_mode_pane_g

0xf03e,	// (0x0002e4b5) main_comp_mode_itu_pane_cp

0xf046,	// (0x0002e4bd) main_comp_mode_rocker_pane_cp

0xf04e,	// (0x0002e4c5) cell_cmode_itu_pane_cp_ParamLimits

0xf04e,	// (0x0002e4c5) cell_cmode_itu_pane_cp

0xf063,	// (0x0002e4da) cell_cmode_rocker_pane_cp_ParamLimits

0xf063,	// (0x0002e4da) cell_cmode_rocker_pane_cp

0x3ad5,	// (0x00022f4c) bg_button_pane_cp06_cp_ParamLimits

0x3ad5,	// (0x00022f4c) bg_button_pane_cp06_cp

0x7934,	// (0x00026dab) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7934,	// (0x00026dab) cell_cmode_rocker_pane_g1_cp

0x76b6,	// (0x00026b2d) cell_cmode_rocker_pane_g2_cp

0x3175,	// (0x000225ec) bg_button_pane_cp07_cp

0xf075,	// (0x0002e4ec) cell_cmode_itu_pane_g1_cp

0xf07e,	// (0x0002e4f5) cell_cmode_itu_pane_t1_cp

0xf07e,	// (0x0002e4f5) cell_cmode_itu_pane_t2_cp

0xdd50,	// (0x0002d1c7) settings_code_pane_cp2

0x3269,	// (0x000226e0) bg_popup_window_pane_cp3_ParamLimits

0x36cc,	// (0x00022b43) heading_pane_cp3_ParamLimits

0x36d8,	// (0x00022b4f) listscroll_popup_graphic_pane_ParamLimits

0x2518,	// (0x0002198f) fep_hwr_aid_pane_ParamLimits

0x28e2,	// (0x00021d59) aid_touch_sctrl_top_ParamLimits

0x28ef,	// (0x00021d66) sctrl_sk_top_pane_g1_ParamLimits

0x7934,	// (0x00026dab) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0002f17e) sctrl_sk_top_pane_g_ParamLimits

0x28fc,	// (0x00021d73) sctrl_sk_top_pane_t1_ParamLimits

0x28e2,	// (0x00021d59) aid_touch_sctrl_bottom_ParamLimits

0x28fc,	// (0x00021d73) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fa0,	// (0x00028417) aid_area_touch_clock

0xcbe7,	// (0x0002c05e) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbe7,	// (0x0002c05e) aid_vkb2_area_top_pane_cell

0xcc92,	// (0x0002c109) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc92,	// (0x0002c109) aid_vkb2_area_bottom_pane_cell

0x9501,	// (0x00028978) popup_char_count_window

0x9979,	// (0x00028df0) popup_char_count_window_g1

0x9982,	// (0x00028df9) popup_char_count_window_g2

0x998b,	// (0x00028e02) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0002f24f) popup_char_count_window_g

0x9994,	// (0x00028e0b) popup_char_count_window_t1

0x299d,	// (0x00021e14) popup_fep_char_preview_window_ParamLimits

0x299d,	// (0x00021e14) popup_fep_char_preview_window

0xcc07,	// (0x0002c07e) vkb2_top_candi_pane_ParamLimits

0xcc07,	// (0x0002c07e) vkb2_top_candi_pane

0xf08c,	// (0x0002e503) cell_vkb2_top_candi_pane_ParamLimits

0xf08c,	// (0x0002e503) cell_vkb2_top_candi_pane

0x56a7,	// (0x00024b1e) bg_popup_fep_char_preview_window_ParamLimits

0x56a7,	// (0x00024b1e) bg_popup_fep_char_preview_window

0x2f05,	// (0x0002237c) popup_fep_char_preview_window_t1_ParamLimits

0x2f05,	// (0x0002237c) popup_fep_char_preview_window_t1

0x99ef,	// (0x00028e66) bg_popup_fep_char_preview_window_g1

0x99f7,	// (0x00028e6e) bg_popup_fep_char_preview_window_g2

0x99ff,	// (0x00028e76) bg_popup_fep_char_preview_window_g3

0x9a07,	// (0x00028e7e) bg_popup_fep_char_preview_window_g4

0x9a0f,	// (0x00028e86) bg_popup_fep_char_preview_window_g5

0x2f3f,	// (0x000223b6) bg_popup_fep_char_preview_window_g6

0x9a17,	// (0x00028e8e) bg_popup_fep_char_preview_window_g7

0x9a1f,	// (0x00028e96) bg_popup_fep_char_preview_window_g8

0x9a27,	// (0x00028e9e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0002f256) bg_popup_fep_char_preview_window_g

0x7934,	// (0x00026dab) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7934,	// (0x00026dab) cell_vkb2_top_candi_pane_g1

0x7c4b,	// (0x000270c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c4b,	// (0x000270c2) cell_vkb2_top_candi_pane_g2

0x7c6c,	// (0x000270e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c6c,	// (0x000270e3) cell_vkb2_top_candi_pane_g3

0x2f47,	// (0x000223be) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2f47,	// (0x000223be) cell_vkb2_top_candi_pane_g4

0x9a2f,	// (0x00028ea6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9a2f,	// (0x00028ea6) cell_vkb2_top_candi_pane_g5

0x8e32,	// (0x000282a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8e32,	// (0x000282a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0002f269) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0002f269) cell_vkb2_top_candi_pane_g

0x2f68,	// (0x000223df) cell_vkb2_top_candi_pane_t1

0x23ba,	// (0x00021831) aid_size_touch_slider_mark_ParamLimits

0x23ba,	// (0x00021831) aid_size_touch_slider_mark

0xedb9,	// (0x0002e230) grid_graphic2_catg_pane_ParamLimits

0xedb9,	// (0x0002e230) grid_graphic2_catg_pane

0xee75,	// (0x0002e2ec) popup_grid_graphic2_window_t1_ParamLimits

0xee75,	// (0x0002e2ec) popup_grid_graphic2_window_t1

0xee8b,	// (0x0002e302) popup_grid_graphic2_window_t2_ParamLimits

0xee8b,	// (0x0002e302) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0002f224) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0002f224) popup_grid_graphic2_window_t

0x34f2,	// (0x00022969) bg_button_pane_cp05_ParamLimits

0xf004,	// (0x0002e47b) cell_graphic2_control_pane_g1_ParamLimits

0xf0f2,	// (0x0002e569) cell_graphic2_catg_pane_ParamLimits

0xf0f2,	// (0x0002e569) cell_graphic2_catg_pane

0x3175,	// (0x000225ec) bg_button_pane_cp12

0xf104,	// (0x0002e57b) cell_graphic2_catg_pane_g1

0x8f6c,	// (0x000283e3) cell_tb_ext_pane_t1_ParamLimits

0x2d3f,	// (0x000221b6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2d3f,	// (0x000221b6) vkb2_top_cell_right_narrow_pane

0x2d57,	// (0x000221ce) vkb2_top_cell_right_wide_pane_ParamLimits

0x2d57,	// (0x000221ce) vkb2_top_cell_right_wide_pane

0x250a,	// (0x00021981) bg_vkb2_func_pane_ParamLimits

0x250a,	// (0x00021981) bg_vkb2_func_pane

0x2dc8,	// (0x0002223f) vkb2_top_cell_left_pane_g1_ParamLimits

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp03_ParamLimits

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp03

0x2e26,	// (0x0002229d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f9a,	// (0x00024411) bg_vkb2_func_pane_g1

0x4fa2,	// (0x00024419) bg_vkb2_func_pane_g2

0x4fb2,	// (0x00024429) bg_vkb2_func_pane_g3

0x4faa,	// (0x00024421) bg_vkb2_func_pane_g4

0x4fba,	// (0x00024431) bg_vkb2_func_pane_g5

0x4fc2,	// (0x00024439) bg_vkb2_func_pane_g6

0x4fca,	// (0x00024441) bg_vkb2_func_pane_g7

0x4fd2,	// (0x00024449) bg_vkb2_func_pane_g8

0x4f92,	// (0x00024409) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0002f276) bg_vkb2_func_pane_g

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp01_ParamLimits

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp01

0x2dc8,	// (0x0002223f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2dc8,	// (0x0002223f) vkb2_top_cell_right_wide_pane_g1

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp02_ParamLimits

0x250a,	// (0x00021981) bg_vkb2_fuc_pane_cp02

0x2e26,	// (0x0002229d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2e26,	// (0x0002229d) vkb2_top_cell_right_narrow_pane_g1

0xe630,	// (0x0002daa7) aid_touch_area_decrease_ParamLimits

0xe630,	// (0x0002daa7) aid_touch_area_decrease

0xe664,	// (0x0002dadb) aid_touch_area_increase_ParamLimits

0xe664,	// (0x0002dadb) aid_touch_area_increase

0xe68c,	// (0x0002db03) aid_touch_area_mute_ParamLimits

0xe68c,	// (0x0002db03) aid_touch_area_mute

0xe6bc,	// (0x0002db33) aid_touch_area_slider_ParamLimits

0xe6bc,	// (0x0002db33) aid_touch_area_slider

0xe6fc,	// (0x0002db73) popup_slider_window_g4_ParamLimits

0xe6fc,	// (0x0002db73) popup_slider_window_g4

0xe724,	// (0x0002db9b) popup_slider_window_g5_ParamLimits

0xe724,	// (0x0002db9b) popup_slider_window_g5

0xe758,	// (0x0002dbcf) popup_slider_window_g6_ParamLimits

0xe758,	// (0x0002dbcf) popup_slider_window_g6

0x8d48,	// (0x000281bf) popup_slider_window_t2_ParamLimits

0x8d48,	// (0x000281bf) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0002f172) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0002f172) popup_slider_window_t

0xe774,	// (0x0002dbeb) slider_pane_ParamLimits

0xe774,	// (0x0002dbeb) slider_pane

0x9a6b,	// (0x00028ee2) slider_pane_g1_ParamLimits

0x9a6b,	// (0x00028ee2) slider_pane_g1

0x9a7f,	// (0x00028ef6) slider_pane_g2_ParamLimits

0x9a7f,	// (0x00028ef6) slider_pane_g2

0x9a95,	// (0x00028f0c) slider_pane_g3_ParamLimits

0x9a95,	// (0x00028f0c) slider_pane_g3

0x0003,

0xfe12,	// (0x0002f289) slider_pane_g_ParamLimits

0xfe12,	// (0x0002f289) slider_pane_g

0xc77c,	// (0x0002bbf3) popup_tb_float_extension_window_ParamLimits

0xc77c,	// (0x0002bbf3) popup_tb_float_extension_window

0x9ac1,	// (0x00028f38) aid_size_cell_tb_float_ext

0x3175,	// (0x000225ec) bg_popup_sub_window_cp28

0x9acd,	// (0x00028f44) grid_tb_float_ext_pane

0x9ad7,	// (0x00028f4e) cell_tb_float_ext_pane_ParamLimits

0x9ad7,	// (0x00028f4e) cell_tb_float_ext_pane

0x9af1,	// (0x00028f68) cell_tb_float_ext_pane_g1

0x9afa,	// (0x00028f71) grid_highlight_pane_cp12

0xc9f0,	// (0x0002be67) cell_last_hwr_side_pane_ParamLimits

0xc9f0,	// (0x0002be67) cell_last_hwr_side_pane

0x76b6,	// (0x00026b2d) cell_last_hwr_side_pane_g1

0x9b03,	// (0x00028f7a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0002f292) cell_last_hwr_side_pane_g

0xcd6e,	// (0x0002c1e5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd6e,	// (0x0002c1e5) vkb2_area_bottom_space_btn_pane

0x7934,	// (0x00026dab) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95b6,	// (0x00028a2d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2f68,	// (0x000223df) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2f87,	// (0x000223fe) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2f87,	// (0x000223fe) vkb2_area_bottom_space_btn_pane_g1

0x2fc1,	// (0x00022438) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2fc1,	// (0x00022438) vkb2_area_bottom_space_btn_pane_g2

0x2ff7,	// (0x0002246e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2ff7,	// (0x0002246e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0002f297) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0002f297) vkb2_area_bottom_space_btn_pane_g

0x25bf,	// (0x00021a36) cel_fep_hwr_func_pane_ParamLimits

0x25bf,	// (0x00021a36) cel_fep_hwr_func_pane

0xc9c5,	// (0x0002be3c) cell_hwr_side_button_pane_ParamLimits

0xc9c5,	// (0x0002be3c) cell_hwr_side_button_pane

0x8fa0,	// (0x00028417) aid_area_touch_clock_ParamLimits

0x34f2,	// (0x00022969) bg_uniindi_top_pane_ParamLimits

0x8fb2,	// (0x00028429) uniindi_top_pane_g1_ParamLimits

0x8fc8,	// (0x0002843f) uniindi_top_pane_g2_ParamLimits

0x8fd4,	// (0x0002844b) uniindi_top_pane_g3_ParamLimits

0x8fe5,	// (0x0002845c) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0002f1aa) uniindi_top_pane_g_ParamLimits

0x8ff2,	// (0x00028469) uniindi_top_pane_t1_ParamLimits

0x34f2,	// (0x00022969) bg_vkb2_func_pane_cp01_ParamLimits

0x34f2,	// (0x00022969) bg_vkb2_func_pane_cp01

0x9b0c,	// (0x00028f83) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b0c,	// (0x00028f83) cel_fep_hwr_func_pane_g1

0x34f2,	// (0x00022969) bg_vkb2_func_pane_cp02_ParamLimits

0x34f2,	// (0x00022969) bg_vkb2_func_pane_cp02

0x9b0c,	// (0x00028f83) cell_hwr_side_button_pane_g1_ParamLimits

0x9b0c,	// (0x00028f83) cell_hwr_side_button_pane_g1

0x4e16,	// (0x0002428d) status_pane_g4_ParamLimits

0x4e16,	// (0x0002428d) status_pane_g4

0x4e30,	// (0x000242a7) status_pane_t1

0x73f0,	// (0x00026867) form2_midp_gauge_slider_cont_pane

0x73f8,	// (0x0002686f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe00b,	// (0x0002d482) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe01d,	// (0x0002d494) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002ef76) form2_midp_gauge_slider_pane_t_ParamLimits

0x742e,	// (0x000268a5) form2_midp_slider_pane_ParamLimits

0x295d,	// (0x00021dd4) aid_size_cell_func_vkb2_ParamLimits

0x295d,	// (0x00021dd4) aid_size_cell_func_vkb2

0x9aad,	// (0x00028f24) slider_pane_g4_ParamLimits

0x9aad,	// (0x00028f24) slider_pane_g4

0xcdcf,	// (0x0002c246) form2_midp_gauge_slider_pane_t2_cp01

0xcddd,	// (0x0002c254) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcddd,	// (0x0002c254) form2_midp_gauge_slider_pane_t3_cp01

0x306c,	// (0x000224e3) form2_midp_slider_pane_cp01

0x3175,	// (0x000225ec) navi_smil_pane

0x9b45,	// (0x00028fbc) navi_smil_pane_g1

0x9b4d,	// (0x00028fc4) navi_smil_pane_t1

0x9b1a,	// (0x00028f91) form2_midp_slider_pane_g1

0x9b23,	// (0x00028f9a) form2_midp_slider_pane_g2

0x9b2b,	// (0x00028fa2) form2_midp_slider_pane_g3

0x9b1a,	// (0x00028f91) form2_midp_slider_pane_g4

0xf10d,	// (0x0002e584) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0002f2a0) form2_midp_slider_pane_g

0x3031,	// (0x000224a8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3031,	// (0x000224a8) vkb2_area_bottom_space_btn_pane_g4

0xd69a,	// (0x0002cb11) lc0_navi_pane_ParamLimits

0xd69a,	// (0x0002cb11) lc0_navi_pane

0xd704,	// (0x0002cb7b) lc0_stat_indi_pane_ParamLimits

0xd704,	// (0x0002cb7b) lc0_stat_indi_pane

0xd719,	// (0x0002cb90) ls0_title_pane_ParamLimits

0xd719,	// (0x0002cb90) ls0_title_pane

0x3ad5,	// (0x00022f4c) bg_popup_sub_pane_cp14_ParamLimits

0x8f87,	// (0x000283fe) list_uniindi_pane_ParamLimits

0x8f93,	// (0x0002840a) uniindi_top_pane_ParamLimits

0x902f,	// (0x000284a6) list_single_uniindi_pane_g1_ParamLimits

0x9042,	// (0x000284b9) list_single_uniindi_pane_t1_ParamLimits

0xcdfa,	// (0x0002c271) lc0_stat_clock_pane_ParamLimits

0xcdfa,	// (0x0002c271) lc0_stat_clock_pane

0xf118,	// (0x0002e58f) lc0_stat_indi_pane_g1_ParamLimits

0xf118,	// (0x0002e58f) lc0_stat_indi_pane_g1

0xf125,	// (0x0002e59c) lc0_stat_indi_pane_g2_ParamLimits

0xf125,	// (0x0002e59c) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0002f2ab) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0002f2ab) lc0_stat_indi_pane_g

0xce07,	// (0x0002c27e) lc0_uni_indicator_pane_ParamLimits

0xce07,	// (0x0002c27e) lc0_uni_indicator_pane

0xf132,	// (0x0002e5a9) ls0_title_pane_g1_ParamLimits

0xf132,	// (0x0002e5a9) ls0_title_pane_g1

0xf146,	// (0x0002e5bd) ls0_title_pane_t1_ParamLimits

0xf146,	// (0x0002e5bd) ls0_title_pane_t1

0xce14,	// (0x0002c28b) lc0_uni_indicator_pane_g1_ParamLimits

0xce14,	// (0x0002c28b) lc0_uni_indicator_pane_g1

0x9bbf,	// (0x00029036) lc0_stat_clock_pane_t1

0x3175,	// (0x000225ec) main_ai5_pane

0x9bcd,	// (0x00029044) ai5_sk_pane_ParamLimits

0x9bcd,	// (0x00029044) ai5_sk_pane

0xf174,	// (0x0002e5eb) cell_ai5_widget_pane_ParamLimits

0xf174,	// (0x0002e5eb) cell_ai5_widget_pane

0x9c90,	// (0x00029107) aid_size_cell_widget_grid

0x9ca6,	// (0x0002911d) bg_ai5_widget_pane_ParamLimits

0x9ca6,	// (0x0002911d) bg_ai5_widget_pane

0x9d10,	// (0x00029187) cell_ai5_widget_pane_g2

0x9d20,	// (0x00029197) cell_ai5_widget_pane_g3

0x9d3f,	// (0x000291b6) cell_ai5_widget_pane_g4

0x9d4b,	// (0x000291c2) cell_ai5_widget_pane_g5

0x9d57,	// (0x000291ce) cell_ai5_widget_pane_g6

0x9d63,	// (0x000291da) cell_ai5_widget_pane_g7

0x9dab,	// (0x00029222) cell_ai5_widget_pane_t1_ParamLimits

0x9dab,	// (0x00029222) cell_ai5_widget_pane_t1

0x9dc8,	// (0x0002923f) cell_ai5_widget_pane_t2_ParamLimits

0x9dc8,	// (0x0002923f) cell_ai5_widget_pane_t2

0x9de0,	// (0x00029257) cell_ai5_widget_pane_t3_ParamLimits

0x9de0,	// (0x00029257) cell_ai5_widget_pane_t3

0x9df8,	// (0x0002926f) cell_ai5_widget_pane_t4_ParamLimits

0x9df8,	// (0x0002926f) cell_ai5_widget_pane_t4

0x9e12,	// (0x00029289) cell_ai5_widget_pane_t5_ParamLimits

0x9e12,	// (0x00029289) cell_ai5_widget_pane_t5

0x9e31,	// (0x000292a8) cell_ai5_widget_pane_t6_ParamLimits

0x9e31,	// (0x000292a8) cell_ai5_widget_pane_t6

0x9e43,	// (0x000292ba) cell_ai5_widget_pane_t7_ParamLimits

0x9e43,	// (0x000292ba) cell_ai5_widget_pane_t7

0x9e5c,	// (0x000292d3) cell_ai5_widget_pane_t8_ParamLimits

0x9e5c,	// (0x000292d3) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0002f2c5) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0002f2c5) cell_ai5_widget_pane_t

0x9ea8,	// (0x0002931f) grid_ai5_widget_pane

0x3ad5,	// (0x00022f4c) highlight_cell_ai5_widget_pane_ParamLimits

0x3ad5,	// (0x00022f4c) highlight_cell_ai5_widget_pane

0xf1de,	// (0x0002e655) ai5_sk_left_pane

0xf1e8,	// (0x0002e65f) ai5_sk_middle_pane

0xf1f2,	// (0x0002e669) ai5_sk_right_pane

0x9ede,	// (0x00029355) bg_ai5_widget_pane_g1_ParamLimits

0x9ede,	// (0x00029355) bg_ai5_widget_pane_g1

0x9eea,	// (0x00029361) bg_ai5_widget_pane_g2_ParamLimits

0x9eea,	// (0x00029361) bg_ai5_widget_pane_g2

0x9ef6,	// (0x0002936d) bg_ai5_widget_pane_g3_ParamLimits

0x9ef6,	// (0x0002936d) bg_ai5_widget_pane_g3

0x9f02,	// (0x00029379) bg_ai5_widget_pane_g4_ParamLimits

0x9f02,	// (0x00029379) bg_ai5_widget_pane_g4

0x9f0e,	// (0x00029385) bg_ai5_widget_pane_g5_ParamLimits

0x9f0e,	// (0x00029385) bg_ai5_widget_pane_g5

0x9f1a,	// (0x00029391) bg_ai5_widget_pane_g6_ParamLimits

0x9f1a,	// (0x00029391) bg_ai5_widget_pane_g6

0x9f26,	// (0x0002939d) bg_ai5_widget_pane_g7_ParamLimits

0x9f26,	// (0x0002939d) bg_ai5_widget_pane_g7

0x9f32,	// (0x000293a9) bg_ai5_widget_pane_g8_ParamLimits

0x9f32,	// (0x000293a9) bg_ai5_widget_pane_g8

0x9f3e,	// (0x000293b5) bg_ai5_widget_pane_g9_ParamLimits

0x9f3e,	// (0x000293b5) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0002f2da) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0002f2da) bg_ai5_widget_pane_g

0x9f71,	// (0x000293e8) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f71,	// (0x000293e8) cell_shortcut_ai5_widget_pane

0x475d,	// (0x00023bd4) bg_cell_shortcut_ai5_widget_pane

0x9f82,	// (0x000293f9) cell_grid_ai5_widget_pane_g1

0x9f8b,	// (0x00029402) highlight_cell_shortcut_ai5_widget_pane

0x4fa2,	// (0x00024419) ai5_sk_left_pane_g1

0x9f93,	// (0x0002940a) ai5_sk_left_pane_g2

0x9f9b,	// (0x00029412) ai5_sk_left_pane_g3

0x9fa3,	// (0x0002941a) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0002f2ed) ai5_sk_left_pane_g

0x9fab,	// (0x00029422) ai5_sk_left_pane_t1

0x4f9a,	// (0x00024411) ai5_sk_right_pane_g1

0x9fb9,	// (0x00029430) ai5_sk_right_pane_g2

0x9fc1,	// (0x00029438) ai5_sk_right_pane_g3

0x9fc9,	// (0x00029440) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0002f2f6) ai5_sk_right_pane_g

0x9fd1,	// (0x00029448) ai5_sk_right_pane_t1

0x4f9a,	// (0x00024411) ai5_sk_middle_pane_g1

0x4fa2,	// (0x00024419) ai5_sk_middle_pane_g2

0x4fba,	// (0x00024431) ai5_sk_middle_pane_g3

0x9fc1,	// (0x00029438) ai5_sk_middle_pane_g4

0x9f9b,	// (0x00029412) ai5_sk_middle_pane_g5

0x9fdf,	// (0x00029456) ai5_sk_middle_pane_g6

0xf1fc,	// (0x0002e673) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0002f2ff) ai5_sk_middle_pane_g

0xd586,	// (0x0002c9fd) aid_touch_area_size_lc0_ParamLimits

0xd586,	// (0x0002c9fd) aid_touch_area_size_lc0

0x274a,	// (0x00021bc1) cell_hwr_candidate_pane_t1_ParamLimits

0x4aff,	// (0x00023f76) aid_touch_navi_pane

0xd80c,	// (0x0002cc83) status_dt_navi_pane_ParamLimits

0xd80c,	// (0x0002cc83) status_dt_navi_pane

0xd824,	// (0x0002cc9b) status_dt_sta_pane_ParamLimits

0xd824,	// (0x0002cc9b) status_dt_sta_pane

0xf204,	// (0x0002e67b) dt_sta_controll_pane

0xf211,	// (0x0002e688) dt_sta_indi_pane

0xf21e,	// (0x0002e695) dt_sta_title_pane

0x34f2,	// (0x00022969) bg_dt_sta_indi_pane_ParamLimits

0x34f2,	// (0x00022969) bg_dt_sta_indi_pane

0xa01a,	// (0x00029491) dt_sta_battery_pane

0xa022,	// (0x00029499) dt_sta_indi_pane_g1

0xa02b,	// (0x000294a2) dt_sta_indi_pane_g2

0xa034,	// (0x000294ab) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0002f30e) dt_sta_indi_pane_g

0xa03d,	// (0x000294b4) dt_sta_signal_pane

0x3ad5,	// (0x00022f4c) bg_dt_sta_title_pane_ParamLimits

0x3ad5,	// (0x00022f4c) bg_dt_sta_title_pane

0xa046,	// (0x000294bd) dt_sta_title_pane_g1

0xa04e,	// (0x000294c5) dt_sta_title_pane_t1_ParamLimits

0xa04e,	// (0x000294c5) dt_sta_title_pane_t1

0x3175,	// (0x000225ec) bg_dt_sta_control_pane

0xa063,	// (0x000294da) dt_sta_controll_pane_g1

0xa06c,	// (0x000294e3) bg_dt_sta_title_pane_g1

0xa075,	// (0x000294ec) bg_dt_sta_title_pane_g2

0xa07e,	// (0x000294f5) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0002f315) bg_dt_sta_title_pane_g

0x76b6,	// (0x00026b2d) bg_dt_sta_indi_pane_g1

0xa087,	// (0x000294fe) dt_sta_signal_pane_g1

0xa08f,	// (0x00029506) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0002f31c) dt_sta_signal_pane_g

0xa097,	// (0x0002950e) dt_sta_battery_pane_g1

0xa0a0,	// (0x00029517) dt_sta_battery_pane_t1

0x76b6,	// (0x00026b2d) bg_dt_sta_control_pane_g1

0x4267,	// (0x000236de) fep_china_uni_eep_pane

0x426f,	// (0x000236e6) fep_china_uni_entry_pane_ParamLimits

0x427f,	// (0x000236f6) popup_fep_china_uni_window_g1_ParamLimits

0x428f,	// (0x00023706) popup_fep_china_uni_window_g2_ParamLimits

0x428f,	// (0x00023706) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002eb9a) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002eb9a) popup_fep_china_uni_window_g

0xa0af,	// (0x00029526) fep_china_uni_eep_pane_g1

0xa0b7,	// (0x0002952e) fep_china_uni_eep_pane_t1

0x9b3c,	// (0x00028fb3) aid_touch_area_size_smil_player

0x4c4b,	// (0x000240c2) lc0_clock_pane

0x4e24,	// (0x0002429b) status_pane_g5_ParamLimits

0x4e24,	// (0x0002429b) status_pane_g5

0xc2fe,	// (0x0002b775) popup_keymap_window

0x4dea,	// (0x00024261) status_icon_pane

0x9d20,	// (0x00029197) cell_ai5_widget_pane_g3_ParamLimits

0x9d3f,	// (0x000291b6) cell_ai5_widget_pane_g4_ParamLimits

0x9d4b,	// (0x000291c2) cell_ai5_widget_pane_g5_ParamLimits

0x9d6f,	// (0x000291e6) cell_ai5_widget_pane_g8_ParamLimits

0x9d6f,	// (0x000291e6) cell_ai5_widget_pane_g8

0x9d83,	// (0x000291fa) cell_ai5_widget_pane_g9_ParamLimits

0x9d83,	// (0x000291fa) cell_ai5_widget_pane_g9

0x9d97,	// (0x0002920e) cell_ai5_widget_pane_g10_ParamLimits

0x9d97,	// (0x0002920e) cell_ai5_widget_pane_g10

0xa0c6,	// (0x0002953d) status_icon_pane_g1

0x3175,	// (0x000225ec) bg_popup_sub_pane_cp13

0xa0ce,	// (0x00029545) popup_keymap_window_t1

0xd508,	// (0x0002c97f) control_pane_g6_ParamLimits

0xd508,	// (0x0002c97f) control_pane_g6

0xd515,	// (0x0002c98c) control_pane_g7_ParamLimits

0xd515,	// (0x0002c98c) control_pane_g7

0xd522,	// (0x0002c999) control_pane_g8_ParamLimits

0xd522,	// (0x0002c999) control_pane_g8

0xf204,	// (0x0002e67b) dt_sta_controll_pane_ParamLimits

0xf211,	// (0x0002e688) dt_sta_indi_pane_ParamLimits

0xf21e,	// (0x0002e695) dt_sta_title_pane_ParamLimits

0x3a0d,	// (0x00022e84) aid_size_touch_scroll_bar_cale

0x134f,	// (0x000207c6) popup_discreet_window_ParamLimits

0x134f,	// (0x000207c6) popup_discreet_window

0xbea4,	// (0x0002b31b) popup_sk_window

0x56a7,	// (0x00024b1e) bg_popup_sub_pane_cp28_ParamLimits

0x56a7,	// (0x00024b1e) bg_popup_sub_pane_cp28

0xa0dc,	// (0x00029553) popup_discreet_window_g1_ParamLimits

0xa0dc,	// (0x00029553) popup_discreet_window_g1

0xa0fc,	// (0x00029573) popup_discreet_window_t1_ParamLimits

0xa0fc,	// (0x00029573) popup_discreet_window_t1

0xa11a,	// (0x00029591) popup_discreet_window_t2_ParamLimits

0xa11a,	// (0x00029591) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0002f321) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0002f321) popup_discreet_window_t

0x30a3,	// (0x0002251a) popup_sk_window_g1

0x30ad,	// (0x00022524) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0002f328) popup_sk_window_g

0x30b7,	// (0x0002252e) popup_sk_window_t1

0x30c5,	// (0x0002253c) popup_sk_window_t1_copy1

0x9d10,	// (0x00029187) cell_ai5_widget_pane_g2_ParamLimits

0x9e6e,	// (0x000292e5) cell_ai5_widget_pane_t9_ParamLimits

0x9e6e,	// (0x000292e5) cell_ai5_widget_pane_t9

0x3175,	// (0x000225ec) main_fep_fshwr2_pane

0xce3b,	// (0x0002c2b2) aid_fshwr2_btn_pane

0xce4a,	// (0x0002c2c1) aid_fshwr2_syb_pane

0xce5c,	// (0x0002c2d3) aid_fshwr2_txt_pane

0xce6b,	// (0x0002c2e2) fshwr2_func_candi_pane

0xce7c,	// (0x0002c2f3) fshwr2_hwr_syb_pane

0xce97,	// (0x0002c30e) fshwr2_icf_pane

0x3175,	// (0x000225ec) fshwr2_icf_bg_pane

0xf230,	// (0x0002e6a7) fshwr2_icf_pane_t1_ParamLimits

0xf230,	// (0x0002e6a7) fshwr2_icf_pane_t1

0x76b6,	// (0x00026b2d) fshwr2_func_candi_pane_g1

0xa183,	// (0x000295fa) fshwr2_func_candi_row_pane_ParamLimits

0xa183,	// (0x000295fa) fshwr2_func_candi_row_pane

0xf248,	// (0x0002e6bf) cell_fshwr2_syb_pane_ParamLimits

0xf248,	// (0x0002e6bf) cell_fshwr2_syb_pane

0x7934,	// (0x00026dab) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7934,	// (0x00026dab) fshwr2_hwr_syb_pane_g1

0x3175,	// (0x000225ec) bg_popup_call_pane_cp01

0xa1ae,	// (0x00029625) fshwr2_func_candi_cell_pane_ParamLimits

0xa1ae,	// (0x00029625) fshwr2_func_candi_cell_pane

0xa1df,	// (0x00029656) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1df,	// (0x00029656) fshwr2_func_candi_cell_bg_pane

0xa1f9,	// (0x00029670) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa1f9,	// (0x00029670) fshwr2_func_candi_cell_pane_g1

0xa221,	// (0x00029698) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa221,	// (0x00029698) fshwr2_func_candi_cell_pane_t1

0x3175,	// (0x000225ec) bg_button_pane_cp08

0x475d,	// (0x00023bd4) cell_fshwr2_syb_bg_pane

0xf262,	// (0x0002e6d9) cell_fshwr2_syb_bg_pane_g1

0xf26a,	// (0x0002e6e1) cell_fshwr2_syb_bg_pane_t1

0x3ad5,	// (0x00022f4c) main_tmo_pane

0x61b6,	// (0x0002562d) uni_indicator_pane_g1_ParamLimits

0x61cb,	// (0x00025642) uni_indicator_pane_g2_ParamLimits

0x61e1,	// (0x00025658) uni_indicator_pane_g3_ParamLimits

0x61f7,	// (0x0002566e) uni_indicator_pane_g4_ParamLimits

0x61f7,	// (0x0002566e) uni_indicator_pane_g4

0x620b,	// (0x00025682) uni_indicator_pane_g5_ParamLimits

0x620b,	// (0x00025682) uni_indicator_pane_g5

0x621f,	// (0x00025696) uni_indicator_pane_g6_ParamLimits

0x621f,	// (0x00025696) uni_indicator_pane_g6

0xf922,	// (0x0002ed99) uni_indicator_pane_g_ParamLimits

0xe60c,	// (0x0002da83) popup_tmo_note_window_ParamLimits

0xe60c,	// (0x0002da83) popup_tmo_note_window

0x3ad5,	// (0x00022f4c) fshwr2_bg_pane

0xa212,	// (0x00029689) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa212,	// (0x00029689) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0002f32d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0002f32d) fshwr2_func_candi_cell_pane_g

0x76b6,	// (0x00026b2d) bg_popup_window_pane_cp01

0xa24b,	// (0x000296c2) bg_popup_window_pane_g1_cp01

0xa254,	// (0x000296cb) bg_popup_window_pane_cp22_ParamLimits

0xa254,	// (0x000296cb) bg_popup_window_pane_cp22

0xa262,	// (0x000296d9) listscroll_tmo_link_pane_ParamLimits

0xa262,	// (0x000296d9) listscroll_tmo_link_pane

0xa2a2,	// (0x00029719) popup_tmo_note_window_g1_ParamLimits

0xa2a2,	// (0x00029719) popup_tmo_note_window_g1

0xa2af,	// (0x00029726) tmo_note_info_pane_ParamLimits

0xa2af,	// (0x00029726) tmo_note_info_pane

0xf279,	// (0x0002e6f0) list_tmo_note_info_pane_g1_ParamLimits

0xf279,	// (0x0002e6f0) list_tmo_note_info_pane_g1

0xa2e0,	// (0x00029757) list_tmo_note_info_pane_g2_ParamLimits

0xa2e0,	// (0x00029757) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0002f332) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0002f332) list_tmo_note_info_pane_g

0xa2fc,	// (0x00029773) list_tmo_note_info_text_pane_ParamLimits

0xa2fc,	// (0x00029773) list_tmo_note_info_text_pane

0xa37d,	// (0x000297f4) list_tmo_link_pane

0xa38a,	// (0x00029801) scroll_pane_cp20

0xa397,	// (0x0002980e) list_single_tmo_link_pane_ParamLimits

0xa397,	// (0x0002980e) list_single_tmo_link_pane

0xa3a7,	// (0x0002981e) list_single_tmo_link_pane_t1

0xa3b5,	// (0x0002982c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3b5,	// (0x0002982c) list_tmo_note_info_text_pane_t1

0xd18e,	// (0x0002c605) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd18e,	// (0x0002c605) aid_size_touch_scroll_bar_cp01

0xb95b,	// (0x0002add2) aid_size_touch_slider_marker

0xbe94,	// (0x0002b30b) popup_settings_window_ParamLimits

0xbe94,	// (0x0002b30b) popup_settings_window

0x0886,	// (0x0001fcfd) popup_candi_list_indi_window

0x4aff,	// (0x00023f76) aid_touch_navi_pane_ParamLimits

0x28b6,	// (0x00021d2d) rs_clock_indi_pane

0x28bf,	// (0x00021d36) sctrl_sk_bottom_pane_ParamLimits

0x28d0,	// (0x00021d47) sctrl_sk_top_pane_ParamLimits

0x29b7,	// (0x00021e2e) popup_fep_tooltip_window

0x9c90,	// (0x00029107) aid_size_cell_widget_grid_ParamLimits

0x9d04,	// (0x0002917b) cell_ai5_widget_pane_g1_ParamLimits

0x9d04,	// (0x0002917b) cell_ai5_widget_pane_g1

0x9d57,	// (0x000291ce) cell_ai5_widget_pane_g6_ParamLimits

0x9d63,	// (0x000291da) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0002f2b0) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0002f2b0) cell_ai5_widget_pane_g

0x9e92,	// (0x00029309) cell_ai5_widget_pane_t10_ParamLimits

0x9e92,	// (0x00029309) cell_ai5_widget_pane_t10

0x9ea8,	// (0x0002931f) grid_ai5_widget_pane_ParamLimits

0x9f4a,	// (0x000293c1) cell_contacts_ai5_widget_pane_ParamLimits

0x9f4a,	// (0x000293c1) cell_contacts_ai5_widget_pane

0xa12f,	// (0x000295a6) popup_discreet_window_t3_ParamLimits

0xa12f,	// (0x000295a6) popup_discreet_window_t3

0x313d,	// (0x000225b4) popup_fshwr2_char_preview_window_ParamLimits

0x313d,	// (0x000225b4) popup_fshwr2_char_preview_window

0xf290,	// (0x0002e707) tmo_note_info_pane_t1

0xf2a5,	// (0x0002e71c) tmo_note_info_pane_t2

0xf2bc,	// (0x0002e733) tmo_note_info_pane_t3

0xa359,	// (0x000297d0) tmo_note_info_pane_t4

0xa36b,	// (0x000297e2) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0002f337) tmo_note_info_pane_t

0xa37d,	// (0x000297f4) list_tmo_link_pane_ParamLimits

0xa38a,	// (0x00029801) scroll_pane_cp20_ParamLimits

0x3175,	// (0x000225ec) bg_popup_fep_char_preview_window_cp01

0xa3ce,	// (0x00029845) popup_fshwr2_char_preview_window_t1

0xa3dc,	// (0x00029853) popup_candi_list_indi_window_g1

0xa3e5,	// (0x0002985c) bg_cell_contacts_ai5_widget_pane

0xa3f1,	// (0x00029868) cell_contacts_ai5_widget_pane_g1

0xa405,	// (0x0002987c) cell_contacts_ai5_widget_pane_g2

0xa411,	// (0x00029888) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0002f342) cell_contacts_ai5_widget_pane_g

0xa424,	// (0x0002989b) cell_contacts_ai5_widget_pane_t1

0x3ad5,	// (0x00022f4c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf336,	// (0x0002e7ad) settings_container_pane

0x475d,	// (0x00023bd4) listscroll_set_pane_copy1

0x6d5c,	// (0x000261d3) scroll_pane_cp121_copy1

0xa4a7,	// (0x0002991e) set_content_pane_copy1

0xf342,	// (0x0002e7b9) aid_height_set_list_copy1_ParamLimits

0xf342,	// (0x0002e7b9) aid_height_set_list_copy1

0x6459,	// (0x000258d0) aid_size_parent_copy1_ParamLimits

0x6459,	// (0x000258d0) aid_size_parent_copy1

0xf34e,	// (0x0002e7c5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf34e,	// (0x0002e7c5) button_value_adjust_pane_cp6_copy1

0x4a9d,	// (0x00023f14) list_highlight_pane_cp2_copy1_ParamLimits

0x4a9d,	// (0x00023f14) list_highlight_pane_cp2_copy1

0xf362,	// (0x0002e7d9) list_set_pane_copy1_ParamLimits

0xf362,	// (0x0002e7d9) list_set_pane_copy1

0xf2d1,	// (0x0002e748) main_pane_set_t1_copy1_ParamLimits

0xf2d1,	// (0x0002e748) main_pane_set_t1_copy1

0xf30b,	// (0x0002e782) main_pane_set_t2_copy1_ParamLimits

0xf30b,	// (0x0002e782) main_pane_set_t2_copy1

0xf40f,	// (0x0002e886) main_pane_set_t3_copy1

0xf41d,	// (0x0002e894) main_pane_set_t4_copy1

0xf32a,	// (0x0002e7a1) set_content_pane_g1_copy1_ParamLimits

0xf32a,	// (0x0002e7a1) set_content_pane_g1_copy1

0xf42b,	// (0x0002e8a2) setting_code_pane_copy1

0xa5a0,	// (0x00029a17) setting_slider_graphic_pane_copy1

0xa5a0,	// (0x00029a17) setting_slider_pane_copy1

0xa5a0,	// (0x00029a17) setting_text_pane_copy1

0xa5a0,	// (0x00029a17) setting_volume_pane_copy1

0xf42b,	// (0x0002e8a2) settings_code_pane_cp2_copy1

0xf433,	// (0x0002e8aa) settings_code_pane_cp_copy1_ParamLimits

0xf433,	// (0x0002e8aa) settings_code_pane_cp_copy1

0xf447,	// (0x0002e8be) volume_set_pane_copy1

0xf44f,	// (0x0002e8c6) volume_set_pane_g10_copy1

0xf457,	// (0x0002e8ce) volume_set_pane_g1_copy1

0xf45f,	// (0x0002e8d6) volume_set_pane_g2_copy1

0xf467,	// (0x0002e8de) volume_set_pane_g3_copy1

0xf46f,	// (0x0002e8e6) volume_set_pane_g4_copy1

0xf477,	// (0x0002e8ee) volume_set_pane_g5_copy1

0xf47f,	// (0x0002e8f6) volume_set_pane_g6_copy1

0xf487,	// (0x0002e8fe) volume_set_pane_g7_copy1

0xf48f,	// (0x0002e906) volume_set_pane_g8_copy1

0xf497,	// (0x0002e90e) volume_set_pane_g9_copy1

0x3269,	// (0x000226e0) bg_set_opt_pane_cp_copy1_ParamLimits

0x3269,	// (0x000226e0) bg_set_opt_pane_cp_copy1

0xa614,	// (0x00029a8b) setting_slider_pane_t1_copy1_ParamLimits

0xa614,	// (0x00029a8b) setting_slider_pane_t1_copy1

0xf49f,	// (0x0002e916) setting_slider_pane_t2_copy1_ParamLimits

0xf49f,	// (0x0002e916) setting_slider_pane_t2_copy1

0xf4b9,	// (0x0002e930) setting_slider_pane_t3_copy1_ParamLimits

0xf4b9,	// (0x0002e930) setting_slider_pane_t3_copy1

0xf4d1,	// (0x0002e948) slider_set_pane_copy1_ParamLimits

0xf4d1,	// (0x0002e948) slider_set_pane_copy1

0x3b3c,	// (0x00022fb3) set_opt_bg_pane_g1_copy2

0x3b44,	// (0x00022fbb) set_opt_bg_pane_g2_copy2

0xa67a,	// (0x00029af1) set_opt_bg_pane_g3_copy2

0x3b54,	// (0x00022fcb) set_opt_bg_pane_g4_copy2

0x3b5c,	// (0x00022fd3) set_opt_bg_pane_g5_copy2

0x3b64,	// (0x00022fdb) set_opt_bg_pane_g6_copy2

0xf4e7,	// (0x0002e95e) set_opt_bg_pane_g7_copy2

0xa68c,	// (0x00029b03) set_opt_bg_pane_g8_copy2

0xa696,	// (0x00029b0d) set_opt_bg_pane_g9_copy2

0xa6a0,	// (0x00029b17) aid_size_touch_slider_mark_copy1_ParamLimits

0xa6a0,	// (0x00029b17) aid_size_touch_slider_mark_copy1

0xa6b4,	// (0x00029b2b) slider_set_pane_g1_copy1

0xa6bd,	// (0x00029b34) slider_set_pane_g2_copy1

0x63d8,	// (0x0002584f) slider_set_pane_g3_copy1_ParamLimits

0x63d8,	// (0x0002584f) slider_set_pane_g3_copy1

0x63ec,	// (0x00025863) slider_set_pane_g4_copy1_ParamLimits

0x63ec,	// (0x00025863) slider_set_pane_g4_copy1

0x6404,	// (0x0002587b) slider_set_pane_g5_copy1_ParamLimits

0x6404,	// (0x0002587b) slider_set_pane_g5_copy1

0x63d8,	// (0x0002584f) slider_set_pane_g6_copy1_ParamLimits

0x63d8,	// (0x0002584f) slider_set_pane_g6_copy1

0xf4ef,	// (0x0002e966) slider_set_pane_g7_copy1_ParamLimits

0xf4ef,	// (0x0002e966) slider_set_pane_g7_copy1

0x3189,	// (0x00022600) bg_set_opt_pane_cp2_copy1

0xa6db,	// (0x00029b52) setting_slider_graphic_pane_g1_copy1

0xf505,	// (0x0002e97c) setting_slider_graphic_pane_t1_copy1

0xf515,	// (0x0002e98c) setting_slider_graphic_pane_t2_copy1

0xf525,	// (0x0002e99c) slider_set_pane_cp_copy1

0xa714,	// (0x00029b8b) input_focus_pane_cp1_copy1

0xa71d,	// (0x00029b94) list_set_text_pane_copy1

0xa725,	// (0x00029b9c) setting_text_pane_g1_copy1

0xbd42,	// (0x0002b1b9) set_text_pane_t1_copy1

0xa714,	// (0x00029b8b) input_focus_pane_cp2_copy1

0xa725,	// (0x00029b9c) setting_code_pane_g1_copy1

0xf52d,	// (0x0002e9a4) setting_code_pane_t1_copy1

0x6b88,	// (0x00025fff) list_set_graphic_pane_copy1

0x3189,	// (0x00022600) bg_set_opt_pane_cp4_copy1

0xd3b5,	// (0x0002c82c) list_set_graphic_pane_g1_copy1_ParamLimits

0xd3b5,	// (0x0002c82c) list_set_graphic_pane_g1_copy1

0xf53b,	// (0x0002e9b2) list_set_graphic_pane_g2_copy1

0xd3cd,	// (0x0002c844) list_set_graphic_pane_t1_copy1_ParamLimits

0xd3cd,	// (0x0002c844) list_set_graphic_pane_t1_copy1

0x76b6,	// (0x00026b2d) rs_clock_indi_pane_g1

0xa756,	// (0x00029bcd) rs_clock_indi_pane_t1

0xa764,	// (0x00029bdb) rs_indi_pane

0xa76c,	// (0x00029be3) rs_indi_pane_g1

0xa775,	// (0x00029bec) rs_indi_pane_g2

0xa77e,	// (0x00029bf5) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0002f349) rs_indi_pane_g

0x475d,	// (0x00023bd4) bg_popup_preview_window_pane_cp03

0xa787,	// (0x00029bfe) popup_fep_tooltip_window_t1

0x831d,	// (0x00027794) popup_note2_window_g2_ParamLimits

0x831d,	// (0x00027794) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0002f0e2) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0002f0e2) popup_note2_window_g

0x8818,	// (0x00027c8f) bg_popup_sub_pane_cp11_ParamLimits

0x8825,	// (0x00027c9c) cell_ai3_links_pane_g1_ParamLimits

0x883c,	// (0x00027cb3) cell_ai3_links_pane_t1

0xbd42,	// (0x0002b1b9) set_text_pane_t1_copy1_ParamLimits

0xd441,	// (0x0002c8b8) cell_graphic_popup_pane_cp2_ParamLimits

0xd441,	// (0x0002c8b8) cell_graphic_popup_pane_cp2

0xf543,	// (0x0002e9ba) cell_graphic_popup_pane_g1_cp2

0x3820,	// (0x00022c97) cell_graphic_popup_pane_g2_cp2

0xa79d,	// (0x00029c14) cell_graphic_popup_pane_g3_cp2

0xa7a5,	// (0x00029c1c) cell_graphic_popup_pane_t2_cp2

0x3831,	// (0x00022ca8) grid_highlight_pane_cp3_cp2

0x3e81,	// (0x000232f8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ad5,	// (0x00022f4c) main_tmo_pane_ParamLimits

0xe600,	// (0x0002da77) popup_tmo_big_image_note_window

0x9cf4,	// (0x0002916b) cell_ai5_widget_list_pane

0x9cfc,	// (0x00029173) cell_ai5_widget_lrg_icon_pane

0xf290,	// (0x0002e707) tmo_note_info_pane_t1_ParamLimits

0xf2a5,	// (0x0002e71c) tmo_note_info_pane_t2_ParamLimits

0xf2bc,	// (0x0002e733) tmo_note_info_pane_t3_ParamLimits

0xa359,	// (0x000297d0) tmo_note_info_pane_t4_ParamLimits

0xa36b,	// (0x000297e2) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0002f337) tmo_note_info_pane_t_ParamLimits

0xf336,	// (0x0002e7ad) settings_container_pane_ParamLimits

0xa70c,	// (0x00029b83) indicator_popup_pane_cp5

0xa70c,	// (0x00029b83) indicator_popup_pane_cp6

0x6b88,	// (0x00025fff) list_set_graphic_pane_copy1_ParamLimits

0x3175,	// (0x000225ec) bg_popup_window_pane_cp23

0xa7b3,	// (0x00029c2a) popup_tmo_big_image_note_window_g1

0xa7bd,	// (0x00029c34) popup_tmo_big_image_note_window_t1

0xa7cd,	// (0x00029c44) popup_tmo_big_image_note_window_t2

0xa7dd,	// (0x00029c54) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0002f350) popup_tmo_big_image_note_window_t

0xa7ed,	// (0x00029c64) cell_ai5_widget_lrg_icon_pane_g1

0xa7f5,	// (0x00029c6c) cell_ai5_widget_lrg_icon_pane_t1

0xa803,	// (0x00029c7a) cell_ai5_widget_list_row_pane_ParamLimits

0xa803,	// (0x00029c7a) cell_ai5_widget_list_row_pane

0xa81c,	// (0x00029c93) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa81c,	// (0x00029c93) cell_ai5_widget_list_row_pane_g1

0xa829,	// (0x00029ca0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa829,	// (0x00029ca0) cell_ai5_widget_list_row_pane_t1

0xa841,	// (0x00029cb8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa841,	// (0x00029cb8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee0,	// (0x0002f357) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0002f357) cell_ai5_widget_list_row_pane_t

0x3175,	// (0x000225ec) main_fep_vtchi_ss_pane

0xa878,	// (0x00029cef) popup_fep_char_pre_window

0xa880,	// (0x00029cf7) popup_fep_ituss_window

0xa8a1,	// (0x00029d18) popup_fep_vkbss_window

0xa8c0,	// (0x00029d37) grid_vkbss_keypad_pane_ParamLimits

0xa8c0,	// (0x00029d37) grid_vkbss_keypad_pane

0xa8d0,	// (0x00029d47) ituss_keypad_pane

0xa8ec,	// (0x00029d63) aid_vkbss_key_offset_ParamLimits

0xa8ec,	// (0x00029d63) aid_vkbss_key_offset

0xa8f8,	// (0x00029d6f) cell_vkbss_key_pane_ParamLimits

0xa8f8,	// (0x00029d6f) cell_vkbss_key_pane

0xa90e,	// (0x00029d85) bg_cell_vkbss_key_g1_ParamLimits

0xa90e,	// (0x00029d85) bg_cell_vkbss_key_g1

0xa91a,	// (0x00029d91) cell_vkbss_key_3p_pane_ParamLimits

0xa91a,	// (0x00029d91) cell_vkbss_key_3p_pane

0xa934,	// (0x00029dab) cell_vkbss_key_g1_ParamLimits

0xa934,	// (0x00029dab) cell_vkbss_key_g1

0xa94e,	// (0x00029dc5) cell_vkbss_key_t1_ParamLimits

0xa94e,	// (0x00029dc5) cell_vkbss_key_t1

0xa979,	// (0x00029df0) cell_ituss_key_pane_ParamLimits

0xa979,	// (0x00029df0) cell_ituss_key_pane

0xa98a,	// (0x00029e01) bg_cell_ituss_key_g1_ParamLimits

0xa98a,	// (0x00029e01) bg_cell_ituss_key_g1

0xa996,	// (0x00029e0d) cell_ituss_key_pane_g1_ParamLimits

0xa996,	// (0x00029e0d) cell_ituss_key_pane_g1

0xa9b0,	// (0x00029e27) cell_ituss_key_pane_g2_ParamLimits

0xa9b0,	// (0x00029e27) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x0002f35e) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x0002f35e) cell_ituss_key_pane_g

0xa9db,	// (0x00029e52) cell_ituss_key_t1_ParamLimits

0xa9db,	// (0x00029e52) cell_ituss_key_t1

0xaa09,	// (0x00029e80) cell_ituss_key_t2_ParamLimits

0xaa09,	// (0x00029e80) cell_ituss_key_t2

0xaa3a,	// (0x00029eb1) cell_ituss_key_t3_ParamLimits

0xaa3a,	// (0x00029eb1) cell_ituss_key_t3

0xaa6b,	// (0x00029ee2) cell_ituss_key_t4_ParamLimits

0xaa6b,	// (0x00029ee2) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x0002f363) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x0002f363) cell_ituss_key_t

0xaa9c,	// (0x00029f13) cell_vkbss_key_3p_pane_g1

0xaaa4,	// (0x00029f1b) cell_vkbss_key_3p_pane_g2

0xaaac,	// (0x00029f23) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0002f36c) cell_vkbss_key_3p_pane_g

0x3175,	// (0x000225ec) bg_popup_fep_char_preview_window_cp02

0xaab4,	// (0x00029f2b) popup_fep_char_pre_window_t1

0xf1d4,	// (0x0002e64b) main_ai5_sk_pane

0xa3e5,	// (0x0002985c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3f1,	// (0x00029868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa405,	// (0x0002987c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa411,	// (0x00029888) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0002f342) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa424,	// (0x0002989b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ad5,	// (0x00022f4c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0002e9c2) main_ai5_sk_pane_g1

0x54e0,	// (0x00024957) popup_query_code_window_g1

0xa896,	// (0x00029d0d) popup_fep_vkb_icf_pane

0xa8aa,	// (0x00029d21) popup_fep_vtchi_icf_pane

0x3ad5,	// (0x00022f4c) bg_icf_pane

0xaacc,	// (0x00029f43) list_vkb_icf_pane

0x3ad5,	// (0x00022f4c) bg_icf_pane_cp01

0xaad8,	// (0x00029f4f) vtchi_icf_list_pane

0xaae9,	// (0x00029f60) list_vkb_icf_pane_t1_ParamLimits

0xaae9,	// (0x00029f60) list_vkb_icf_pane_t1

0xab00,	// (0x00029f77) vtchi_icf_list_pane_t1_ParamLimits

0xab00,	// (0x00029f77) vtchi_icf_list_pane_t1

0xa880,	// (0x00029cf7) popup_fep_ituss_window_ParamLimits

0xa8aa,	// (0x00029d21) popup_fep_vtchi_icf_pane_ParamLimits

0xa8d0,	// (0x00029d47) ituss_keypad_pane_ParamLimits

0xa8e0,	// (0x00029d57) ituss_sks_pane

0x3ad5,	// (0x00022f4c) bg_icf_pane_ParamLimits

0xa869,	// (0x00029ce0) icf_edit_indi_pane_ParamLimits

0xa869,	// (0x00029ce0) icf_edit_indi_pane

0xaacc,	// (0x00029f43) list_vkb_icf_pane_ParamLimits

0x3ad5,	// (0x00022f4c) bg_icf_pane_cp01_ParamLimits

0xa869,	// (0x00029ce0) icf_edit_indi_pane_cp01_ParamLimits

0xa869,	// (0x00029ce0) icf_edit_indi_pane_cp01

0xaae0,	// (0x00029f57) vtchi_query_pane

0x7934,	// (0x00026dab) icf_edit_indi_pane_g1_ParamLimits

0x7934,	// (0x00026dab) icf_edit_indi_pane_g1

0xab86,	// (0x00029ffd) icf_edit_indi_pane_g2_ParamLimits

0xab86,	// (0x00029ffd) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0002f384) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0002f384) icf_edit_indi_pane_g

0xab95,	// (0x0002a00c) icf_edit_indi_pane_t1

0xab1c,	// (0x00029f93) bg_input_focus_pane_cp042

0x3a04,	// (0x00022e7b) vtchi_button_pane

0xab25,	// (0x00029f9c) vtchi_query_pane_t1

0xab33,	// (0x00029faa) vtchi_query_pane_t2

0xab41,	// (0x00029fb8) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0002f373) vtchi_query_pane_t

0x3175,	// (0x000225ec) bg_button_pane_cp13

0xab4f,	// (0x00029fc6) vtchi_button_pane_g1

0xab57,	// (0x00029fce) ituss_sks_pane_g1

0xab62,	// (0x00029fd9) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0002f37a) ituss_sks_pane_g

0xab6a,	// (0x00029fe1) ituss_sks_pane_t1

0xab78,	// (0x00029fef) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0002f37f) ituss_sks_pane_t

0x711f,	// (0x00026596) indicator_nsta_pane_cp_g1

0x7128,	// (0x0002659f) indicator_nsta_pane_cp_g2

0x7130,	// (0x000265a7) indicator_nsta_pane_cp_g3

0x7138,	// (0x000265af) indicator_nsta_pane_cp_g4

0x7140,	// (0x000265b7) indicator_nsta_pane_cp_g5

0x7148,	// (0x000265bf) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002ef2c) indicator_nsta_pane_cp_g

0xefe6,	// (0x0002e45d) cell_graphic2_pane_t2_ParamLimits

0xefe6,	// (0x0002e45d) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0002f239) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0002f239) cell_graphic2_pane_t

0xf01c,	// (0x0002e493) cell_graphic2_control_pane_t1

0xd353,	// (0x0002c7ca) signal_pane_g3_ParamLimits

0xd353,	// (0x0002c7ca) signal_pane_g3

0xd367,	// (0x0002c7de) signal_pane_g4_ParamLimits

0xd367,	// (0x0002c7de) signal_pane_g4

0xa853,	// (0x00029cca) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa853,	// (0x00029cca) cell_ai5_widget_list_row_pane_t3

0xa9c9,	// (0x00029e40) cell_ituss_key_pane_t1_ParamLimits

0xa9c9,	// (0x00029e40) cell_ituss_key_pane_t1

0x5127,	// (0x0002459e) form_field_data_wide_pane_vc_t2_ParamLimits

0x5127,	// (0x0002459e) form_field_data_wide_pane_vc_t2

0x513b,	// (0x000245b2) form_field_data_wide_pane_vc_t3_ParamLimits

0x513b,	// (0x000245b2) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0002ec81) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0002ec81) form_field_data_wide_pane_vc_t

0x6dd6,	// (0x0002624d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6dd6,	// (0x0002624d) form_field_slider_wide_pane_vc_t3

0x6eb4,	// (0x0002632b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6eb4,	// (0x0002632b) form_field_popup_wide_pane_vc_t2

0x6ecb,	// (0x00026342) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6ecb,	// (0x00026342) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0002ef1b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0002ef1b) form_field_popup_wide_pane_vc_t

0xce3b,	// (0x0002c2b2) aid_fshwr2_btn_pane_ParamLimits

0xce4a,	// (0x0002c2c1) aid_fshwr2_syb_pane_ParamLimits

0xce5c,	// (0x0002c2d3) aid_fshwr2_txt_pane_ParamLimits

0x3ad5,	// (0x00022f4c) fshwr2_bg_pane_ParamLimits

0xce6b,	// (0x0002c2e2) fshwr2_func_candi_pane_ParamLimits

0xce7c,	// (0x0002c2f3) fshwr2_hwr_syb_pane_ParamLimits

0xce97,	// (0x0002c30e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

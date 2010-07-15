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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037882 };

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
0x8c7c,	// (0x000404fe) Screen

0x8c88,	// (0x0004050a) application_window_ParamLimits

0x8c88,	// (0x0004050a) application_window

0xb236,	// (0x00042ab8) screen_g1

0x8cc0,	// (0x00040542) area_bottom_pane_ParamLimits

0x8cc0,	// (0x00040542) area_bottom_pane

0xe94c,	// (0x000461ce) area_top_pane_ParamLimits

0xe94c,	// (0x000461ce) area_top_pane

0xe9ea,	// (0x0004626c) main_pane_ParamLimits

0xe9ea,	// (0x0004626c) main_pane

0xb240,	// (0x00042ac2) misc_graphics

0xa5cb,	// (0x00041e4d) battery_pane_ParamLimits

0xa5cb,	// (0x00041e4d) battery_pane

0x2c46,	// (0x0003a4c8) bg_status_flat_pane_g8

0x2c4e,	// (0x0003a4d0) bg_status_flat_pane_g9

0x204e,	// (0x000398d0) context_pane_ParamLimits

0x204e,	// (0x000398d0) context_pane

0xa742,	// (0x00041fc4) navi_pane_ParamLimits

0xa742,	// (0x00041fc4) navi_pane

0xbf72,	// (0x000437f4) signal_pane_ParamLimits

0xbf72,	// (0x000437f4) signal_pane

0x0008,

0xf874,	// (0x000470f6) bg_status_flat_pane_g

0xc002,	// (0x00043884) status_pane_g1_ParamLimits

0xc002,	// (0x00043884) status_pane_g1

0xc018,	// (0x0004389a) status_pane_g2_ParamLimits

0xc018,	// (0x0004389a) status_pane_g2

0x2287,	// (0x00039b09) status_pane_g3_ParamLimits

0x2287,	// (0x00039b09) status_pane_g3

0x0004,

0xf7a0,	// (0x00047022) status_pane_g_ParamLimits

0xf7a0,	// (0x00047022) status_pane_g

0xc024,	// (0x000438a6) title_pane_ParamLimits

0xc024,	// (0x000438a6) title_pane

0xc08b,	// (0x0004390d) uni_indicator_pane_ParamLimits

0xc08b,	// (0x0004390d) uni_indicator_pane

0x1eb6,	// (0x00039738) bg_list_pane_ParamLimits

0x1eb6,	// (0x00039738) bg_list_pane

0x9e1f,	// (0x000416a1) find_pane

0x2482,	// (0x00039d04) listscroll_app_pane_ParamLimits

0x2482,	// (0x00039d04) listscroll_app_pane

0x1eea,	// (0x0003976c) listscroll_form_pane

0x8c68,	// (0x000404ea) listscroll_gen_pane_ParamLimits

0x8c68,	// (0x000404ea) listscroll_gen_pane

0x00c1,	// (0x00037943) listscroll_set_pane

0x37d8,	// (0x0003b05a) main_idle_act_pane

0xf341,	// (0x00046bc3) main_idle_trad_pane

0xf341,	// (0x00046bc3) main_list_empty_pane

0x1ede,	// (0x00039760) main_midp_pane

0x1f04,	// (0x00039786) main_pane_g1_ParamLimits

0x1f04,	// (0x00039786) main_pane_g1

0x9e27,	// (0x000416a9) popup_ai_message_window_ParamLimits

0x9e27,	// (0x000416a9) popup_ai_message_window

0x9ec7,	// (0x00041749) popup_fep_china_uni_window_ParamLimits

0x9ec7,	// (0x00041749) popup_fep_china_uni_window

0x01eb,	// (0x00037a6d) popup_fep_japan_candidate_window_ParamLimits

0x01eb,	// (0x00037a6d) popup_fep_japan_candidate_window

0x0215,	// (0x00037a97) popup_fep_japan_predictive_window_ParamLimits

0x0215,	// (0x00037a97) popup_fep_japan_predictive_window

0x9f27,	// (0x000417a9) popup_find_window

0x9f44,	// (0x000417c6) popup_grid_graphic_window_ParamLimits

0x9f44,	// (0x000417c6) popup_grid_graphic_window

0x0286,	// (0x00037b08) popup_large_graphic_colour_window

0x9fe8,	// (0x0004186a) popup_menu_window_ParamLimits

0x9fe8,	// (0x0004186a) popup_menu_window

0xa1d8,	// (0x00041a5a) popup_note_image_window

0xa198,	// (0x00041a1a) popup_note_wait_window_ParamLimits

0xa198,	// (0x00041a1a) popup_note_wait_window

0xa1f0,	// (0x00041a72) popup_note_window_ParamLimits

0xa1f0,	// (0x00041a72) popup_note_window

0xa29e,	// (0x00041b20) popup_query_code_window_ParamLimits

0xa29e,	// (0x00041b20) popup_query_code_window

0x04f2,	// (0x00037d74) popup_query_data_code_window_ParamLimits

0x04f2,	// (0x00037d74) popup_query_data_code_window

0xa2de,	// (0x00041b60) popup_query_data_window_ParamLimits

0xa2de,	// (0x00041b60) popup_query_data_window

0xa372,	// (0x00041bf4) popup_query_sat_info_window_ParamLimits

0xa372,	// (0x00041bf4) popup_query_sat_info_window

0xa41b,	// (0x00041c9d) popup_snote_single_graphic_window_ParamLimits

0xa41b,	// (0x00041c9d) popup_snote_single_graphic_window

0xa41b,	// (0x00041c9d) popup_snote_single_text_window_ParamLimits

0xa41b,	// (0x00041c9d) popup_snote_single_text_window

0x058d,	// (0x00037e0f) popup_sub_window_general

0x06d3,	// (0x00037f55) popup_window_general_ParamLimits

0x06d3,	// (0x00037f55) popup_window_general

0x1f12,	// (0x00039794) power_save_pane

0x9c7f,	// (0x00041501) control_pane_g1_ParamLimits

0x9c7f,	// (0x00041501) control_pane_g1

0x9ca8,	// (0x0004152a) control_pane_g2_ParamLimits

0x9ca8,	// (0x0004152a) control_pane_g2

0x1e79,	// (0x000396fb) control_pane_g3_ParamLimits

0x1e79,	// (0x000396fb) control_pane_g3

0x0007,

0xf788,	// (0x0004700a) control_pane_g_ParamLimits

0xf788,	// (0x0004700a) control_pane_g

0x9d0e,	// (0x00041590) control_pane_t1_ParamLimits

0x9d0e,	// (0x00041590) control_pane_t1

0x9d74,	// (0x000415f6) control_pane_t2_ParamLimits

0x9d74,	// (0x000415f6) control_pane_t2

0x0002,

0xf799,	// (0x0004701b) control_pane_t_ParamLimits

0xf799,	// (0x0004701b) control_pane_t

0x9bd8,	// (0x0004145a) navi_navi_volume_pane_cp1

0x9be0,	// (0x00041462) status_small_icon_pane

0xf50b,	// (0x00046d8d) status_small_pane_g1_ParamLimits

0xf50b,	// (0x00046d8d) status_small_pane_g1

0x9be8,	// (0x0004146a) status_small_pane_g2_ParamLimits

0x9be8,	// (0x0004146a) status_small_pane_g2

0x9bf4,	// (0x00041476) status_small_pane_g3_ParamLimits

0x9bf4,	// (0x00041476) status_small_pane_g3

0x9c00,	// (0x00041482) status_small_pane_g4_ParamLimits

0x9c00,	// (0x00041482) status_small_pane_g4

0x9c0c,	// (0x0004148e) status_small_pane_g5_ParamLimits

0x9c0c,	// (0x0004148e) status_small_pane_g5

0x9c1a,	// (0x0004149c) status_small_pane_g6_ParamLimits

0x9c1a,	// (0x0004149c) status_small_pane_g6

0x0007,

0xf777,	// (0x00046ff9) status_small_pane_g_ParamLimits

0xf777,	// (0x00046ff9) status_small_pane_g

0x9c49,	// (0x000414cb) status_small_pane_t1

0x9c6b,	// (0x000414ed) status_small_wait_pane_ParamLimits

0x9c6b,	// (0x000414ed) status_small_wait_pane

0x99be,	// (0x00041240) aid_levels_signal_ParamLimits

0x99be,	// (0x00041240) aid_levels_signal

0x99d6,	// (0x00041258) signal_pane_g1_ParamLimits

0x99d6,	// (0x00041258) signal_pane_g1

0x99f1,	// (0x00041273) signal_pane_g2_ParamLimits

0x99f1,	// (0x00041273) signal_pane_g2

0x0003,

0xf708,	// (0x00046f8a) signal_pane_g_ParamLimits

0xf708,	// (0x00046f8a) signal_pane_g

0xbdf9,	// (0x0004367b) context_pane_g1

0x8eac,	// (0x0004072e) title_pane_g1

0x8eef,	// (0x00040771) title_pane_t1

0xb256,	// (0x00042ad8) title_pane_t2

0xb27c,	// (0x00042afe) title_pane_t3

0x0002,

0xf557,	// (0x00046dd9) title_pane_t

0xc0b3,	// (0x00043935) aid_levels_battery_ParamLimits

0xc0b3,	// (0x00043935) aid_levels_battery

0xc0cf,	// (0x00043951) battery_pane_g1_ParamLimits

0xc0cf,	// (0x00043951) battery_pane_g1

0xc0ec,	// (0x0004396e) battery_pane_g2_ParamLimits

0xc0ec,	// (0x0004396e) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004702d) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004702d) battery_pane_g

0xc2ed,	// (0x00043b6f) uni_indicator_pane_g1

0xc303,	// (0x00043b85) uni_indicator_pane_g2

0xc319,	// (0x00043b9b) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0004719e) uni_indicator_pane_g

0xf1bb,	// (0x00046a3d) navi_icon_pane_ParamLimits

0xf1bb,	// (0x00046a3d) navi_icon_pane

0xf102,	// (0x00046984) navi_midp_pane

0xf1d7,	// (0x00046a59) navi_navi_pane

0xf1e1,	// (0x00046a63) navi_text_pane_ParamLimits

0xf1e1,	// (0x00046a63) navi_text_pane

0xb236,	// (0x00042ab8) status_small_wait_pane_g1

0xb59d,	// (0x00042e1f) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00047199) status_small_wait_pane_g

0xc28c,	// (0x00043b0e) navi_navi_icon_text_pane

0xc294,	// (0x00043b16) navi_navi_pane_g1_ParamLimits

0xc294,	// (0x00043b16) navi_navi_pane_g1

0xc2a6,	// (0x00043b28) navi_navi_pane_g2_ParamLimits

0xc2a6,	// (0x00043b28) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00047167) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00047167) navi_navi_pane_g

0x32cf,	// (0x0003ab51) navi_navi_tabs_pane

0xc2b8,	// (0x00043b3a) navi_navi_text_pane

0xc28c,	// (0x00043b0e) navi_navi_volume_pane

0xc27a,	// (0x00043afc) navi_text_pane_t1

0xc26e,	// (0x00043af0) navi_icon_pane_g1

0x31c6,	// (0x0003aa48) navi_navi_text_pane_t1

0xa9a5,	// (0x00042227) navi_navi_volume_pane_g1

0xa9ad,	// (0x0004222f) volume_small_pane

0xc1ca,	// (0x00043a4c) navi_navi_icon_text_pane_g1

0xc1d2,	// (0x00043a54) navi_navi_icon_text_pane_t1

0xf1d7,	// (0x00046a59) navi_tabs_2_long_pane

0xf1d7,	// (0x00046a59) navi_tabs_2_pane

0xf1d7,	// (0x00046a59) navi_tabs_3_long_pane

0xf1d7,	// (0x00046a59) navi_tabs_3_pane

0xf1d7,	// (0x00046a59) navi_tabs_4_pane

0xa985,	// (0x00042207) tabs_2_active_pane_ParamLimits

0xa985,	// (0x00042207) tabs_2_active_pane

0xa995,	// (0x00042217) tabs_2_passive_pane_ParamLimits

0xa995,	// (0x00042217) tabs_2_passive_pane

0xa953,	// (0x000421d5) tabs_3_active_pane_ParamLimits

0xa953,	// (0x000421d5) tabs_3_active_pane

0xa963,	// (0x000421e5) tabs_3_passive_pane_ParamLimits

0xa963,	// (0x000421e5) tabs_3_passive_pane

0xa974,	// (0x000421f6) tabs_3_passive_pane_cp_ParamLimits

0xa974,	// (0x000421f6) tabs_3_passive_pane_cp

0xa90f,	// (0x00042191) tabs_4_active_pane_ParamLimits

0xa90f,	// (0x00042191) tabs_4_active_pane

0xa920,	// (0x000421a2) tabs_4_passive_pane_ParamLimits

0xa920,	// (0x000421a2) tabs_4_passive_pane

0xa931,	// (0x000421b3) tabs_4_passive_pane_cp_ParamLimits

0xa931,	// (0x000421b3) tabs_4_passive_pane_cp

0xa942,	// (0x000421c4) tabs_4_passive_pane_cp2_ParamLimits

0xa942,	// (0x000421c4) tabs_4_passive_pane_cp2

0xa8eb,	// (0x0004216d) tabs_2_long_active_pane_ParamLimits

0xa8eb,	// (0x0004216d) tabs_2_long_active_pane

0xa8fd,	// (0x0004217f) tabs_2_long_passive_pane_ParamLimits

0xa8fd,	// (0x0004217f) tabs_2_long_passive_pane

0xa8a0,	// (0x00042122) tabs_3_long_active_pane_ParamLimits

0xa8a0,	// (0x00042122) tabs_3_long_active_pane

0xa8b9,	// (0x0004213b) tabs_3_long_passive_pane_ParamLimits

0xa8b9,	// (0x0004213b) tabs_3_long_passive_pane

0xa8d2,	// (0x00042154) tabs_3_long_passive_pane_cp_ParamLimits

0xa8d2,	// (0x00042154) tabs_3_long_passive_pane_cp

0x0855,	// (0x000380d7) volume_small_pane_g1

0xa84f,	// (0x000420d1) volume_small_pane_g2

0xa858,	// (0x000420da) volume_small_pane_g3

0xa861,	// (0x000420e3) volume_small_pane_g4

0xa86a,	// (0x000420ec) volume_small_pane_g5

0xa873,	// (0x000420f5) volume_small_pane_g6

0xa87c,	// (0x000420fe) volume_small_pane_g7

0xa885,	// (0x00042107) volume_small_pane_g8

0xa88e,	// (0x00042110) volume_small_pane_g9

0xa897,	// (0x00042119) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00047133) volume_small_pane_g

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp2_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp2

0x8f7b,	// (0x000407fd) tabs_3_active_pane_g1

0x8f83,	// (0x00040805) tabs_3_active_pane_t1

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp2_ParamLimits

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp2

0x8f7b,	// (0x000407fd) tabs_3_passive_pane_g1

0x8f83,	// (0x00040805) tabs_3_passive_pane_t1

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp3_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp3

0x8f95,	// (0x00040817) tabs_4_active_pane_g1

0x8f9d,	// (0x0004081f) tabs_4_active_pane_t1

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp3_ParamLimits

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp3

0x8f95,	// (0x00040817) tabs_4_1_passive_pane_g1

0x8f9d,	// (0x0004081f) tabs_4_1_passive_pane_t1

0x1ede,	// (0x00039760) list_highlight_pane_cp2

0x37fe,	// (0x0003b080) list_set_pane_ParamLimits

0x37fe,	// (0x0003b080) list_set_pane

0xc3ac,	// (0x00043c2e) main_pane_set_t1_ParamLimits

0xc3ac,	// (0x00043c2e) main_pane_set_t1

0xc3cc,	// (0x00043c4e) main_pane_set_t2_ParamLimits

0xc3cc,	// (0x00043c4e) main_pane_set_t2

0xc3e0,	// (0x00043c62) main_pane_set_t3_ParamLimits

0xc3e0,	// (0x00043c62) main_pane_set_t3

0xc3f4,	// (0x00043c76) main_pane_set_t4_ParamLimits

0xc3f4,	// (0x00043c76) main_pane_set_t4

0x0003,

0xf981,	// (0x00047203) main_pane_set_t_ParamLimits

0xf981,	// (0x00047203) main_pane_set_t

0xc408,	// (0x00043c8a) setting_code_pane

0x3926,	// (0x0003b1a8) setting_slider_graphic_pane

0x3926,	// (0x0003b1a8) setting_slider_pane

0x3926,	// (0x0003b1a8) setting_text_pane

0x3926,	// (0x0003b1a8) setting_volume_pane

0xeaf9,	// (0x0004637b) volume_set_pane

0xb29c,	// (0x00042b1e) bg_set_opt_pane_cp

0xeb03,	// (0x00046385) setting_slider_pane_t1

0xeb1c,	// (0x0004639e) setting_slider_pane_t2

0xeb36,	// (0x000463b8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00046de0) setting_slider_pane_t

0xeb4e,	// (0x000463d0) slider_set_pane

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp2

0xb2aa,	// (0x00042b2c) setting_slider_graphic_pane_g1

0xeb64,	// (0x000463e6) setting_slider_graphic_pane_t1

0xeb74,	// (0x000463f6) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00046de7) setting_slider_graphic_pane_t

0xeb84,	// (0x00046406) slider_set_pane_cp

0xb240,	// (0x00042ac2) input_focus_pane_cp1

0x37bf,	// (0x0003b041) list_set_text_pane

0xb236,	// (0x00042ab8) setting_text_pane_g1

0xb240,	// (0x00042ac2) input_focus_pane_cp2

0xb236,	// (0x00042ab8) setting_code_pane_g1

0xb2b3,	// (0x00042b35) setting_code_pane_t1

0xcfc6,	// (0x00044848) set_text_pane_t1_ParamLimits

0xcfc6,	// (0x00044848) set_text_pane_t1

0xb932,	// (0x000431b4) set_opt_bg_pane_g1

0xb93a,	// (0x000431bc) set_opt_bg_pane_g2

0x3797,	// (0x0003b019) set_opt_bg_pane_g3

0xb94a,	// (0x000431cc) set_opt_bg_pane_g4

0xb952,	// (0x000431d4) set_opt_bg_pane_g5

0xb95a,	// (0x000431dc) set_opt_bg_pane_g6

0x37a1,	// (0x0003b023) set_opt_bg_pane_g7

0x37ab,	// (0x0003b02d) set_opt_bg_pane_g8

0x37b5,	// (0x0003b037) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x000471f0) set_opt_bg_pane_g

0x378a,	// (0x0003b00c) slider_set_pane_g1

0x0a61,	// (0x000382e3) slider_set_pane_g2

0x0006,

0xf95f,	// (0x000471e1) slider_set_pane_g

0x09c1,	// (0x00038243) volume_set_pane_g1

0x09cb,	// (0x0003824d) volume_set_pane_g2

0x09d5,	// (0x00038257) volume_set_pane_g3

0x09df,	// (0x00038261) volume_set_pane_g4

0x09e9,	// (0x0003826b) volume_set_pane_g5

0x09f3,	// (0x00038275) volume_set_pane_g6

0x09fd,	// (0x0003827f) volume_set_pane_g7

0x0a07,	// (0x00038289) volume_set_pane_g8

0x0a11,	// (0x00038293) volume_set_pane_g9

0x0a1b,	// (0x0003829d) volume_set_pane_g10

0x0009,

0xf937,	// (0x000471b9) volume_set_pane_g

0x8faf,	// (0x00040831) indicator_pane_ParamLimits

0x8faf,	// (0x00040831) indicator_pane

0x8fdb,	// (0x0004085d) main_idle_pane_g2_ParamLimits

0x8fdb,	// (0x0004085d) main_idle_pane_g2

0x9013,	// (0x00040895) main_pane_idle_g1_ParamLimits

0x9013,	// (0x00040895) main_pane_idle_g1

0xb2c1,	// (0x00042b43) popup_clock_digital_analogue_window_ParamLimits

0xb2c1,	// (0x00042b43) popup_clock_digital_analogue_window

0x903d,	// (0x000408bf) soft_indicator_pane_ParamLimits

0x903d,	// (0x000408bf) soft_indicator_pane

0x9059,	// (0x000408db) wallpaper_pane_ParamLimits

0x9059,	// (0x000408db) wallpaper_pane

0xb236,	// (0x00042ab8) wallpaper_pane_g1

0x906b,	// (0x000408ed) indicator_pane_g1_ParamLimits

0x906b,	// (0x000408ed) indicator_pane_g1

0x3c16,	// (0x0003b498) navi_navi_icon_text_pane_srt_g1

0xb2ef,	// (0x00042b71) soft_indicator_pane_t1

0xb309,	// (0x00042b8b) aid_ps_area_pane

0x9084,	// (0x00040906) aid_ps_clock_pane

0xb31a,	// (0x00042b9c) aid_ps_indicator_pane

0xb326,	// (0x00042ba8) indicator_ps_pane_ParamLimits

0xb326,	// (0x00042ba8) indicator_ps_pane

0xb335,	// (0x00042bb7) power_save_pane_g1_ParamLimits

0xb335,	// (0x00042bb7) power_save_pane_g1

0xb341,	// (0x00042bc3) power_save_pane_g2_ParamLimits

0xb341,	// (0x00042bc3) power_save_pane_g2

0xe92c,	// (0x000461ae) aid_navinavi_width_pane

0xb309,	// (0x00042b8b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00046dec) power_save_pane_g_ParamLimits

0xf56a,	// (0x00046dec) power_save_pane_g

0xb34f,	// (0x00042bd1) power_save_pane_t1_ParamLimits

0xb34f,	// (0x00042bd1) power_save_pane_t1

0x9084,	// (0x00040906) aid_ps_clock_pane_ParamLimits

0xb31a,	// (0x00042b9c) aid_ps_indicator_pane_ParamLimits

0xb361,	// (0x00042be3) power_save_pane_t4_ParamLimits

0xb361,	// (0x00042be3) power_save_pane_t4

0x0001,

0xf56f,	// (0x00046df1) power_save_pane_t_ParamLimits

0xf56f,	// (0x00046df1) power_save_pane_t

0xb38b,	// (0x00042c0d) power_save_t3_ParamLimits

0xb38b,	// (0x00042c0d) power_save_t3

0xb376,	// (0x00042bf8) power_save_t2_ParamLimits

0xb376,	// (0x00042bf8) power_save_t2

0xb3a0,	// (0x00042c22) indicator_ps_pane_g1

0x9092,	// (0x00040914) ai_gene_pane_ParamLimits

0x9092,	// (0x00040914) ai_gene_pane

0x90a9,	// (0x0004092b) ai_links_pane_ParamLimits

0x90a9,	// (0x0004092b) ai_links_pane

0x90c1,	// (0x00040943) indicator_pane_cp1_ParamLimits

0x90c1,	// (0x00040943) indicator_pane_cp1

0x90d0,	// (0x00040952) main_pane_idle_g1_cp_ParamLimits

0x90d0,	// (0x00040952) main_pane_idle_g1_cp

0xb3a9,	// (0x00042c2b) popup_ai_links_title_window

0x90e8,	// (0x0004096a) soft_indicator_pane_cp1_ParamLimits

0x90e8,	// (0x0004096a) soft_indicator_pane_cp1

0x357e,	// (0x0003ae00) ai_links_pane_g1

0x3587,	// (0x0003ae09) grid_ai_links_pane

0xc2e4,	// (0x00043b66) ai_gene_pane_1

0x356c,	// (0x0003adee) ai_gene_pane_2

0x3575,	// (0x0003adf7) list_highlight_pane_cp4

0xc2c0,	// (0x00043b42) cell_ai_link_pane_ParamLimits

0xc2c0,	// (0x00043b42) cell_ai_link_pane

0x353b,	// (0x0003adbd) cell_ai_link_pane_g1

0xb59d,	// (0x00042e1f) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00047194) cell_ai_link_pane_g

0xb240,	// (0x00042ac2) grid_highlight_cp2

0xb240,	// (0x00042ac2) bg_popup_sub_pane_cp1

0xb3c0,	// (0x00042c42) popup_ai_links_title_window_t1

0x3487,	// (0x0003ad09) ai_gene_pane_1_g1_ParamLimits

0x3487,	// (0x0003ad09) ai_gene_pane_1_g1

0x3493,	// (0x0003ad15) ai_gene_pane_1_g2_ParamLimits

0x3493,	// (0x0003ad15) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0004718a) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0004718a) ai_gene_pane_1_g

0x34a0,	// (0x0003ad22) ai_gene_pane_1_t1_ParamLimits

0x34a0,	// (0x0003ad22) ai_gene_pane_1_t1

0x34d4,	// (0x0003ad56) grid_ai_soft_ind_pane

0x3472,	// (0x0003acf4) ai_gene_pane_2_t1_ParamLimits

0x3472,	// (0x0003acf4) ai_gene_pane_2_t1

0x90fc,	// (0x0004097e) main_pane_empty_t1_ParamLimits

0x90fc,	// (0x0004097e) main_pane_empty_t1

0x9114,	// (0x00040996) main_pane_empty_t2_ParamLimits

0x9114,	// (0x00040996) main_pane_empty_t2

0x9129,	// (0x000409ab) main_pane_empty_t3_ParamLimits

0x9129,	// (0x000409ab) main_pane_empty_t3

0x913b,	// (0x000409bd) main_pane_empty_t4_ParamLimits

0x913b,	// (0x000409bd) main_pane_empty_t4

0x914d,	// (0x000409cf) main_pane_empty_t5_ParamLimits

0x914d,	// (0x000409cf) main_pane_empty_t5

0x0004,

0xf574,	// (0x00046df6) main_pane_empty_t_ParamLimits

0xf574,	// (0x00046df6) main_pane_empty_t

0xb983,	// (0x00043205) bg_popup_window_pane_ParamLimits

0xb983,	// (0x00043205) bg_popup_window_pane

0x31d4,	// (0x0003aa56) find_popup_pane_cp2_ParamLimits

0x31d4,	// (0x0003aa56) find_popup_pane_cp2

0x31e0,	// (0x0003aa62) heading_pane_ParamLimits

0x31e0,	// (0x0003aa62) heading_pane

0xb240,	// (0x00042ac2) bg_popup_sub_pane

0xc1ef,	// (0x00043a71) bg_popup_window_pane_g1_ParamLimits

0xc1ef,	// (0x00043a71) bg_popup_window_pane_g1

0xc1fe,	// (0x00043a80) bg_popup_window_pane_g2_ParamLimits

0xc1fe,	// (0x00043a80) bg_popup_window_pane_g2

0xc20a,	// (0x00043a8c) bg_popup_window_pane_g3_ParamLimits

0xc20a,	// (0x00043a8c) bg_popup_window_pane_g3

0xc216,	// (0x00043a98) bg_popup_window_pane_g4_ParamLimits

0xc216,	// (0x00043a98) bg_popup_window_pane_g4

0xc225,	// (0x00043aa7) bg_popup_window_pane_g5_ParamLimits

0xc225,	// (0x00043aa7) bg_popup_window_pane_g5

0xc235,	// (0x00043ab7) bg_popup_window_pane_g6_ParamLimits

0xc235,	// (0x00043ab7) bg_popup_window_pane_g6

0xc241,	// (0x00043ac3) bg_popup_window_pane_g7_ParamLimits

0xc241,	// (0x00043ac3) bg_popup_window_pane_g7

0xc250,	// (0x00043ad2) bg_popup_window_pane_g8_ParamLimits

0xc250,	// (0x00043ad2) bg_popup_window_pane_g8

0xc25f,	// (0x00043ae1) bg_popup_window_pane_g9_ParamLimits

0xc25f,	// (0x00043ae1) bg_popup_window_pane_g9

0x31ba,	// (0x0003aa3c) bg_popup_window_pane_g10_ParamLimits

0x31ba,	// (0x0003aa3c) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00047152) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00047152) bg_popup_window_pane_g

0x30e3,	// (0x0003a965) bg_popup_heading_pane_ParamLimits

0x30e3,	// (0x0003a965) bg_popup_heading_pane

0x0b5d,	// (0x000383df) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b5d,	// (0x000383df) tabs_4_passive_pane_cp_srt

0x0b6f,	// (0x000383f1) tabs_4_passive_pane_srt_ParamLimits

0x30f7,	// (0x0003a979) heading_pane_g2

0x0b6f,	// (0x000383f1) tabs_4_passive_pane_srt

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp3_srt

0x30ff,	// (0x0003a981) heading_pane_t1_ParamLimits

0x30ff,	// (0x0003a981) heading_pane_t1

0x3116,	// (0x0003a998) heading_pane_t2_ParamLimits

0x3116,	// (0x0003a998) heading_pane_t2

0x0001,

0xf8cb,	// (0x0004714d) heading_pane_t_ParamLimits

0xf8cb,	// (0x0004714d) heading_pane_t

0x2c0e,	// (0x0003a490) bg_popup_heading_pane_g1

0x2cbd,	// (0x0003a53f) bg_popup_heading_pane_g2

0x2cc7,	// (0x0003a549) bg_popup_heading_pane_g3

0x2cd1,	// (0x0003a553) bg_popup_heading_pane_g4

0x2cdb,	// (0x0003a55d) bg_popup_heading_pane_g5

0x2ce5,	// (0x0003a567) bg_popup_heading_pane_g6

0x2ced,	// (0x0003a56f) bg_popup_heading_pane_g7

0x2cf5,	// (0x0003a577) bg_popup_heading_pane_g8

0x2cff,	// (0x0003a581) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00047109) bg_popup_heading_pane_g

0x240e,	// (0x00039c90) bg_popup_sub_pane_g1

0x241e,	// (0x00039ca0) bg_popup_sub_pane_g2

0x2416,	// (0x00039c98) bg_popup_sub_pane_g3

0x242e,	// (0x00039cb0) bg_popup_sub_pane_g4

0x2426,	// (0x00039ca8) bg_popup_sub_pane_g5

0x2436,	// (0x00039cb8) bg_popup_sub_pane_g6

0x243e,	// (0x00039cc0) bg_popup_sub_pane_g7

0x244e,	// (0x00039cd0) bg_popup_sub_pane_g8

0x2446,	// (0x00039cc8) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x000470e3) bg_popup_sub_pane_g

0xb28e,	// (0x00042b10) bg_popup_window_pane_cp5_ParamLimits

0xb28e,	// (0x00042b10) bg_popup_window_pane_cp5

0xb3dd,	// (0x00042c5f) popup_note_window_g1_ParamLimits

0xb3dd,	// (0x00042c5f) popup_note_window_g1

0xb3e9,	// (0x00042c6b) popup_note_window_t1_ParamLimits

0xb3e9,	// (0x00042c6b) popup_note_window_t1

0xb3ff,	// (0x00042c81) popup_note_window_t2_ParamLimits

0xb3ff,	// (0x00042c81) popup_note_window_t2

0xb415,	// (0x00042c97) popup_note_window_t3_ParamLimits

0xb415,	// (0x00042c97) popup_note_window_t3

0xb42b,	// (0x00042cad) popup_note_window_t4_ParamLimits

0xb42b,	// (0x00042cad) popup_note_window_t4

0xb453,	// (0x00042cd5) popup_note_window_t5_ParamLimits

0xb453,	// (0x00042cd5) popup_note_window_t5

0x0004,

0xf57f,	// (0x00046e01) popup_note_window_t_ParamLimits

0xf57f,	// (0x00046e01) popup_note_window_t

0xb49d,	// (0x00042d1f) bg_popup_window_pane_cp6_ParamLimits

0xb49d,	// (0x00042d1f) bg_popup_window_pane_cp6

0x2b8a,	// (0x0003a40c) popup_note_image_window_g1_ParamLimits

0x2b8a,	// (0x0003a40c) popup_note_image_window_g1

0x2b96,	// (0x0003a418) popup_note_image_window_g2_ParamLimits

0x2b96,	// (0x0003a418) popup_note_image_window_g2

0x0001,

0xf855,	// (0x000470d7) popup_note_image_window_g_ParamLimits

0xf855,	// (0x000470d7) popup_note_image_window_g

0x2baf,	// (0x0003a431) popup_note_image_window_t1_ParamLimits

0x2baf,	// (0x0003a431) popup_note_image_window_t1

0x2bc8,	// (0x0003a44a) popup_note_image_window_t2_ParamLimits

0x2bc8,	// (0x0003a44a) popup_note_image_window_t2

0x2be1,	// (0x0003a463) popup_note_image_window_t3_ParamLimits

0x2be1,	// (0x0003a463) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x000470dc) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x000470dc) popup_note_image_window_t

0x2a4a,	// (0x0003a2cc) bg_popup_window_pane_cp7_ParamLimits

0x2a4a,	// (0x0003a2cc) bg_popup_window_pane_cp7

0x2a7a,	// (0x0003a2fc) popup_note_wait_window_g1_ParamLimits

0x2a7a,	// (0x0003a2fc) popup_note_wait_window_g1

0x2a86,	// (0x0003a308) popup_note_wait_window_g2_ParamLimits

0x2a86,	// (0x0003a308) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000470c5) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000470c5) popup_note_wait_window_g

0x2a9e,	// (0x0003a320) popup_note_wait_window_t1_ParamLimits

0x2a9e,	// (0x0003a320) popup_note_wait_window_t1

0x2ac5,	// (0x0003a347) popup_note_wait_window_t2_ParamLimits

0x2ac5,	// (0x0003a347) popup_note_wait_window_t2

0x2ae3,	// (0x0003a365) popup_note_wait_window_t3_ParamLimits

0x2ae3,	// (0x0003a365) popup_note_wait_window_t3

0x2af6,	// (0x0003a378) popup_note_wait_window_t4_ParamLimits

0x2af6,	// (0x0003a378) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x000470cc) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x000470cc) popup_note_wait_window_t

0x2b1b,	// (0x0003a39d) wait_bar_pane_ParamLimits

0x2b1b,	// (0x0003a39d) wait_bar_pane

0xb240,	// (0x00042ac2) wait_anim_pane

0xb240,	// (0x00042ac2) wait_border_pane

0xb236,	// (0x00042ab8) wait_anim_pane_g1

0xb236,	// (0x00042ab8) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00046f85) wait_anim_pane_g

0x29ee,	// (0x0003a270) wait_border_pane_g1

0x29f9,	// (0x0003a27b) wait_border_pane_g2

0x2a02,	// (0x0003a284) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000470be) wait_border_pane_g

0x2858,	// (0x0003a0da) bg_popup_window_pane_cp16_ParamLimits

0x2858,	// (0x0003a0da) bg_popup_window_pane_cp16

0x2958,	// (0x0003a1da) indicator_popup_pane_cp4_ParamLimits

0x2958,	// (0x0003a1da) indicator_popup_pane_cp4

0x296c,	// (0x0003a1ee) popup_query_data_window_t1_ParamLimits

0x296c,	// (0x0003a1ee) popup_query_data_window_t1

0x297e,	// (0x0003a200) popup_query_data_window_t2_ParamLimits

0x297e,	// (0x0003a200) popup_query_data_window_t2

0x2997,	// (0x0003a219) popup_query_data_window_t3_ParamLimits

0x2997,	// (0x0003a219) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000470b7) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000470b7) popup_query_data_window_t

0x29b1,	// (0x0003a233) query_popup_data_pane_ParamLimits

0x29b1,	// (0x0003a233) query_popup_data_pane

0x29c5,	// (0x0003a247) query_popup_data_pane_cp1_ParamLimits

0x29c5,	// (0x0003a247) query_popup_data_pane_cp1

0x2858,	// (0x0003a0da) bg_popup_window_pane_cp10_ParamLimits

0x2858,	// (0x0003a0da) bg_popup_window_pane_cp10

0x288a,	// (0x0003a10c) indicator_popup_pane_ParamLimits

0x288a,	// (0x0003a10c) indicator_popup_pane

0x28ac,	// (0x0003a12e) popup_query_code_window_t1_ParamLimits

0x28ac,	// (0x0003a12e) popup_query_code_window_t1

0x28c6,	// (0x0003a148) popup_query_code_window_t2_ParamLimits

0x28c6,	// (0x0003a148) popup_query_code_window_t2

0x290f,	// (0x0003a191) popup_query_code_window_t3_ParamLimits

0x290f,	// (0x0003a191) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x000470b0) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x000470b0) popup_query_code_window_t

0x293e,	// (0x0003a1c0) query_popup_pane_ParamLimits

0x293e,	// (0x0003a1c0) query_popup_pane

0xb49d,	// (0x00042d1f) bg_popup_window_pane_cp15_ParamLimits

0xb49d,	// (0x00042d1f) bg_popup_window_pane_cp15

0xb4bd,	// (0x00042d3f) indicator_popup_pane_cp1_ParamLimits

0xb4bd,	// (0x00042d3f) indicator_popup_pane_cp1

0xb4d0,	// (0x00042d52) indicator_popup_pane_cp2_ParamLimits

0xb4d0,	// (0x00042d52) indicator_popup_pane_cp2

0xb4eb,	// (0x00042d6d) popup_query_data_code_window_g1_ParamLimits

0xb4eb,	// (0x00042d6d) popup_query_data_code_window_g1

0xb4fe,	// (0x00042d80) popup_query_data_code_window_t1_ParamLimits

0xb4fe,	// (0x00042d80) popup_query_data_code_window_t1

0xb510,	// (0x00042d92) popup_query_data_code_window_t2_ParamLimits

0xb510,	// (0x00042d92) popup_query_data_code_window_t2

0xb522,	// (0x00042da4) popup_query_data_code_window_t3_ParamLimits

0xb522,	// (0x00042da4) popup_query_data_code_window_t3

0xb538,	// (0x00042dba) popup_query_data_code_window_t4_ParamLimits

0xb538,	// (0x00042dba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00046e0c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00046e0c) popup_query_data_code_window_t

0x0741,	// (0x00037fc3) list_single_midp_graphic_pane_g3

0xb552,	// (0x00042dd4) query_popup_data_pane_cp2_ParamLimits

0xb565,	// (0x00042de7) query_popup_pane_cp2_ParamLimits

0xb565,	// (0x00042de7) query_popup_pane_cp2

0xb240,	// (0x00042ac2) bg_popup_window_pane_cp11

0x2844,	// (0x0003a0c6) heading_pane_cp5

0xb5fe,	// (0x00042e80) listscroll_popup_info_pane

0xb240,	// (0x00042ac2) input_focus_pane_cp3

0xb580,	// (0x00042e02) query_popup_pane_t1

0xb58e,	// (0x00042e10) list_popup_info_pane_ParamLimits

0xb58e,	// (0x00042e10) list_popup_info_pane

0xb59d,	// (0x00042e1f) listscroll_popup_info_pane_g1

0xb5a5,	// (0x00042e27) scroll_pane_cp7

0xb5af,	// (0x00042e31) popup_info_list_pane_t1_ParamLimits

0xb5af,	// (0x00042e31) popup_info_list_pane_t1

0xb5c9,	// (0x00042e4b) popup_info_list_pane_t2_ParamLimits

0xb5c9,	// (0x00042e4b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00046e15) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00046e15) popup_info_list_pane_t

0xb240,	// (0x00042ac2) bg_popup_window_pane_cp12

0x3c30,	// (0x0003b4b2) find_popup_pane

0xb29c,	// (0x00042b1e) bg_popup_window_pane_cp3

0xb5e3,	// (0x00042e65) heading_pane_cp3

0xb5ef,	// (0x00042e71) listscroll_popup_graphic_pane

0xb240,	// (0x00042ac2) bg_popup_window_pane_cp4

0x91af,	// (0x00040a31) heading_pane_cp4

0xb5fe,	// (0x00042e80) listscroll_popup_colour_pane

0x91b9,	// (0x00040a3b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x91b9,	// (0x00040a3b) cell_large_graphic_colour_none_popup_pane

0x91cd,	// (0x00040a4f) grid_large_graphic_colour_popup_pane_ParamLimits

0x91cd,	// (0x00040a4f) grid_large_graphic_colour_popup_pane

0x91f1,	// (0x00040a73) listscroll_popup_colour_pane_g1_ParamLimits

0x91f1,	// (0x00040a73) listscroll_popup_colour_pane_g1

0x9208,	// (0x00040a8a) listscroll_popup_colour_pane_g2_ParamLimits

0x9208,	// (0x00040a8a) listscroll_popup_colour_pane_g2

0x921f,	// (0x00040aa1) listscroll_popup_colour_pane_g3_ParamLimits

0x921f,	// (0x00040aa1) listscroll_popup_colour_pane_g3

0x922f,	// (0x00040ab1) listscroll_popup_colour_pane_g4_ParamLimits

0x922f,	// (0x00040ab1) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00046e1a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00046e1a) listscroll_popup_colour_pane_g

0xb606,	// (0x00042e88) scroll_pane_cp6_ParamLimits

0xb606,	// (0x00042e88) scroll_pane_cp6

0x923f,	// (0x00040ac1) cell_large_graphic_colour_popup_pane_ParamLimits

0x923f,	// (0x00040ac1) cell_large_graphic_colour_popup_pane

0xb618,	// (0x00042e9a) cell_large_graphic_colour_none_popup_pane_t1

0xb240,	// (0x00042ac2) grid_highlight_pane_cp5

0xb627,	// (0x00042ea9) cell_large_graphic_colour_popup_pane_g1

0xb62f,	// (0x00042eb1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00046e23) cell_large_graphic_colour_popup_pane_g

0xb637,	// (0x00042eb9) cell_large_graphic_colour_popup_pane_g2_copy1

0xb640,	// (0x00042ec2) grid_highlight_pane_cp4

0xb648,	// (0x00042eca) bg_popup_window_pane_cp8_ParamLimits

0xb648,	// (0x00042eca) bg_popup_window_pane_cp8

0xb663,	// (0x00042ee5) popup_snote_single_text_window_g1_ParamLimits

0xb663,	// (0x00042ee5) popup_snote_single_text_window_g1

0xb675,	// (0x00042ef7) popup_snote_single_text_window_t1_ParamLimits

0xb675,	// (0x00042ef7) popup_snote_single_text_window_t1

0xb688,	// (0x00042f0a) popup_snote_single_text_window_t2_ParamLimits

0xb688,	// (0x00042f0a) popup_snote_single_text_window_t2

0xb69b,	// (0x00042f1d) popup_snote_single_text_window_t3_ParamLimits

0xb69b,	// (0x00042f1d) popup_snote_single_text_window_t3

0xb6d4,	// (0x00042f56) popup_snote_single_text_window_t4_ParamLimits

0xb6d4,	// (0x00042f56) popup_snote_single_text_window_t4

0xb708,	// (0x00042f8a) popup_snote_single_text_window_t5_ParamLimits

0xb708,	// (0x00042f8a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00046e28) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00046e28) popup_snote_single_text_window_t

0xb737,	// (0x00042fb9) bg_popup_window_pane_cp9_ParamLimits

0xb737,	// (0x00042fb9) bg_popup_window_pane_cp9

0xb663,	// (0x00042ee5) popup_snote_single_graphic_window_g1_ParamLimits

0xb663,	// (0x00042ee5) popup_snote_single_graphic_window_g1

0xb745,	// (0x00042fc7) popup_snote_single_graphic_window_g2_ParamLimits

0xb745,	// (0x00042fc7) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00046e33) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00046e33) popup_snote_single_graphic_window_g

0xb751,	// (0x00042fd3) popup_snote_single_graphic_window_t1_ParamLimits

0xb751,	// (0x00042fd3) popup_snote_single_graphic_window_t1

0xb764,	// (0x00042fe6) popup_snote_single_graphic_window_t2_ParamLimits

0xb764,	// (0x00042fe6) popup_snote_single_graphic_window_t2

0xb777,	// (0x00042ff9) popup_snote_single_graphic_window_t3_ParamLimits

0xb777,	// (0x00042ff9) popup_snote_single_graphic_window_t3

0xb7b0,	// (0x00043032) popup_snote_single_graphic_window_t4_ParamLimits

0xb7b0,	// (0x00043032) popup_snote_single_graphic_window_t4

0xb7e4,	// (0x00043066) popup_snote_single_graphic_window_t5_ParamLimits

0xb7e4,	// (0x00043066) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00046e38) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00046e38) popup_snote_single_graphic_window_t

0x3b6e,	// (0x0003b3f0) grid_graphic_popup_pane_ParamLimits

0x3b6e,	// (0x0003b3f0) grid_graphic_popup_pane

0x3b9c,	// (0x0003b41e) listscroll_popup_graphic_pane_g1_ParamLimits

0x3b9c,	// (0x0003b41e) listscroll_popup_graphic_pane_g1

0xc52d,	// (0x00043daf) listscroll_popup_graphic_pane_g2_ParamLimits

0xc52d,	// (0x00043daf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004722d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004722d) listscroll_popup_graphic_pane_g

0x3bc4,	// (0x0003b446) scroll_pane_cp5

0xc4cc,	// (0x00043d4e) cell_graphic_popup_pane_ParamLimits

0xc4cc,	// (0x00043d4e) cell_graphic_popup_pane

0x3ae4,	// (0x0003b366) cell_graphic_popup_pane_g1

0x3aec,	// (0x0003b36e) cell_graphic_popup_pane_g2

0xb637,	// (0x00042eb9) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00047226) cell_graphic_popup_pane_g

0x3af5,	// (0x0003b377) cell_graphic_popup_pane_t2

0xb640,	// (0x00042ec2) grid_highlight_pane_cp3

0xb825,	// (0x000430a7) list_gen_pane_ParamLimits

0xb825,	// (0x000430a7) list_gen_pane

0xb84d,	// (0x000430cf) scroll_pane

0xc483,	// (0x00043d05) bg_list_pane_g1_ParamLimits

0xc483,	// (0x00043d05) bg_list_pane_g1

0x3a59,	// (0x0003b2db) bg_list_pane_g2_ParamLimits

0x3a59,	// (0x0003b2db) bg_list_pane_g2

0x3a6e,	// (0x0003b2f0) bg_list_pane_g3_ParamLimits

0x3a6e,	// (0x0003b2f0) bg_list_pane_g3

0x3a82,	// (0x0003b304) bg_list_pane_g4_ParamLimits

0x3a82,	// (0x0003b304) bg_list_pane_g4

0xc4a0,	// (0x00043d22) bg_list_pane_g5_ParamLimits

0xc4a0,	// (0x00043d22) bg_list_pane_g5

0x0004,

0xf999,	// (0x0004721b) bg_list_pane_g_ParamLimits

0xf999,	// (0x0004721b) bg_list_pane_g

0xc446,	// (0x00043cc8) list_double2_graphic_large_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double2_graphic_large_graphic_pane

0xc446,	// (0x00043cc8) list_double2_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double2_graphic_pane

0xc446,	// (0x00043cc8) list_double2_large_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double2_large_graphic_pane

0xc446,	// (0x00043cc8) list_double2_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double2_pane

0xc446,	// (0x00043cc8) list_double_graphic_heading_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_graphic_heading_pane

0xc446,	// (0x00043cc8) list_double_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_graphic_pane

0xc446,	// (0x00043cc8) list_double_heading_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_heading_pane

0xc446,	// (0x00043cc8) list_double_large_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_large_graphic_pane

0xc446,	// (0x00043cc8) list_double_number_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_number_pane

0xc446,	// (0x00043cc8) list_double_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_pane

0xc446,	// (0x00043cc8) list_double_time_pane_ParamLimits

0xc446,	// (0x00043cc8) list_double_time_pane

0xc446,	// (0x00043cc8) list_setting_number_pane_ParamLimits

0xc446,	// (0x00043cc8) list_setting_number_pane

0xc446,	// (0x00043cc8) list_setting_pane_ParamLimits

0xc446,	// (0x00043cc8) list_setting_pane

0xa9f4,	// (0x00042276) list_single_2graphic_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_2graphic_pane

0xa9f4,	// (0x00042276) list_single_graphic_heading_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_graphic_heading_pane

0xa9f4,	// (0x00042276) list_single_graphic_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_graphic_pane

0xa9f4,	// (0x00042276) list_single_heading_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_heading_pane

0xc446,	// (0x00043cc8) list_single_large_graphic_pane_ParamLimits

0xc446,	// (0x00043cc8) list_single_large_graphic_pane

0xa9f4,	// (0x00042276) list_single_number_heading_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_number_heading_pane

0xa9f4,	// (0x00042276) list_single_number_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_number_pane

0xa9f4,	// (0x00042276) list_single_pane_ParamLimits

0xa9f4,	// (0x00042276) list_single_pane

0xb240,	// (0x00042ac2) list_highlight_pane_cp1

0xcfe1,	// (0x00044863) list_single_pane_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_pane_g1

0xcfed,	// (0x0004486f) list_single_pane_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_pane_g

0xd2ac,	// (0x00044b2e) list_single_pane_t1_ParamLimits

0xd2ac,	// (0x00044b2e) list_single_pane_t1

0xcfe1,	// (0x00044863) list_single_number_pane_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_number_pane_g1

0xcfed,	// (0x0004486f) list_single_number_pane_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_number_pane_g

0xd1d7,	// (0x00044a59) list_single_number_pane_t1_ParamLimits

0xd1d7,	// (0x00044a59) list_single_number_pane_t1

0xa9b6,	// (0x00042238) list_single_number_pane_t2_ParamLimits

0xa9b6,	// (0x00042238) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x000471dc) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x000471dc) list_single_number_pane_t

0x926a,	// (0x00040aec) list_single_graphic_pane_g1_ParamLimits

0x926a,	// (0x00040aec) list_single_graphic_pane_g1

0xcfe1,	// (0x00044863) list_single_graphic_pane_g2_ParamLimits

0xcfe1,	// (0x00044863) list_single_graphic_pane_g2

0xcfed,	// (0x0004486f) list_single_graphic_pane_g3_ParamLimits

0xcfed,	// (0x0004486f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00046e43) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00046e43) list_single_graphic_pane_g

0x9276,	// (0x00040af8) list_single_graphic_pane_t1_ParamLimits

0x9276,	// (0x00040af8) list_single_graphic_pane_t1

0xcfe1,	// (0x00044863) list_single_heading_pane_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_heading_pane_g1

0xcfed,	// (0x0004486f) list_single_heading_pane_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_heading_pane_g

0x928c,	// (0x00040b0e) list_single_heading_pane_t1_ParamLimits

0x928c,	// (0x00040b0e) list_single_heading_pane_t1

0x92a2,	// (0x00040b24) list_single_heading_pane_t2_ParamLimits

0x92a2,	// (0x00040b24) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00046e4f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00046e4f) list_single_heading_pane_t

0xcfe1,	// (0x00044863) list_single_number_heading_pane_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_number_heading_pane_g1

0xcfed,	// (0x0004486f) list_single_number_heading_pane_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_number_heading_pane_g

0x928c,	// (0x00040b0e) list_single_number_heading_pane_t1_ParamLimits

0x928c,	// (0x00040b0e) list_single_number_heading_pane_t1

0xcff9,	// (0x0004487b) list_single_number_heading_pane_t2_ParamLimits

0xcff9,	// (0x0004487b) list_single_number_heading_pane_t2

0xd00b,	// (0x0004488d) list_single_number_heading_pane_t3_ParamLimits

0xd00b,	// (0x0004488d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00046e54) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00046e54) list_single_number_heading_pane_t

0xd01d,	// (0x0004489f) list_single_graphic_heading_pane_g1_ParamLimits

0xd01d,	// (0x0004489f) list_single_graphic_heading_pane_g1

0x92b4,	// (0x00040b36) list_single_graphic_heading_pane_g4_ParamLimits

0x92b4,	// (0x00040b36) list_single_graphic_heading_pane_g4

0xcfed,	// (0x0004486f) list_single_graphic_heading_pane_g5_ParamLimits

0xcfed,	// (0x0004486f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00046e5b) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00046e5b) list_single_graphic_heading_pane_g

0x928c,	// (0x00040b0e) list_single_graphic_heading_pane_t1_ParamLimits

0x928c,	// (0x00040b0e) list_single_graphic_heading_pane_t1

0x92c5,	// (0x00040b47) list_single_graphic_heading_pane_t2_ParamLimits

0x92c5,	// (0x00040b47) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00046e62) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00046e62) list_single_graphic_heading_pane_t

0xd029,	// (0x000448ab) list_single_large_graphic_pane_g1_ParamLimits

0xd029,	// (0x000448ab) list_single_large_graphic_pane_g1

0xd035,	// (0x000448b7) list_single_large_graphic_pane_g2_ParamLimits

0xd035,	// (0x000448b7) list_single_large_graphic_pane_g2

0xd041,	// (0x000448c3) list_single_large_graphic_pane_g3_ParamLimits

0xd041,	// (0x000448c3) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00046e67) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00046e67) list_single_large_graphic_pane_g

0x29f9,	// (0x0003a27b) wait_border_pane_g2_copy1

0x92d7,	// (0x00040b59) list_single_large_graphic_pane_g4_cp2

0xd04d,	// (0x000448cf) list_single_large_graphic_pane_t1_ParamLimits

0xd04d,	// (0x000448cf) list_single_large_graphic_pane_t1

0x92df,	// (0x00040b61) list_double_pane_g1_ParamLimits

0x92df,	// (0x00040b61) list_double_pane_g1

0xd063,	// (0x000448e5) list_double_pane_g2_ParamLimits

0xd063,	// (0x000448e5) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00046e6e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00046e6e) list_double_pane_g

0x92eb,	// (0x00040b6d) list_double_pane_t1_ParamLimits

0x92eb,	// (0x00040b6d) list_double_pane_t1

0x9301,	// (0x00040b83) list_double_pane_t2_ParamLimits

0x9301,	// (0x00040b83) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00046e73) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00046e73) list_double_pane_t

0x9313,	// (0x00040b95) list_double2_pane_g1_ParamLimits

0x9313,	// (0x00040b95) list_double2_pane_g1

0x9324,	// (0x00040ba6) list_double2_pane_g2_ParamLimits

0x9324,	// (0x00040ba6) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00046e78) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00046e78) list_double2_pane_g

0x9330,	// (0x00040bb2) list_double2_pane_t1_ParamLimits

0x9330,	// (0x00040bb2) list_double2_pane_t1

0x9346,	// (0x00040bc8) list_double2_pane_t2_ParamLimits

0x9346,	// (0x00040bc8) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00046e7d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00046e7d) list_double2_pane_t

0x92df,	// (0x00040b61) list_double_number_pane_g1_ParamLimits

0x92df,	// (0x00040b61) list_double_number_pane_g1

0xd063,	// (0x000448e5) list_double_number_pane_g2_ParamLimits

0xd063,	// (0x000448e5) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00046e6e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00046e6e) list_double_number_pane_g

0x9358,	// (0x00040bda) list_double_number_pane_t1_ParamLimits

0x9358,	// (0x00040bda) list_double_number_pane_t1

0x936a,	// (0x00040bec) list_double_number_pane_t2_ParamLimits

0x936a,	// (0x00040bec) list_double_number_pane_t2

0x9380,	// (0x00040c02) list_double_number_pane_t3_ParamLimits

0x9380,	// (0x00040c02) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00046e82) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00046e82) list_double_number_pane_t

0x9392,	// (0x00040c14) list_double_graphic_pane_g1_ParamLimits

0x9392,	// (0x00040c14) list_double_graphic_pane_g1

0x939e,	// (0x00040c20) list_double_graphic_pane_g2_ParamLimits

0x939e,	// (0x00040c20) list_double_graphic_pane_g2

0x93ad,	// (0x00040c2f) list_double_graphic_pane_g3_ParamLimits

0x93ad,	// (0x00040c2f) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00046e89) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00046e89) list_double_graphic_pane_g

0x93c5,	// (0x00040c47) list_double_graphic_pane_t1_ParamLimits

0x93c5,	// (0x00040c47) list_double_graphic_pane_t1

0x93db,	// (0x00040c5d) list_double_graphic_pane_t2_ParamLimits

0x93db,	// (0x00040c5d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00046e92) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00046e92) list_double_graphic_pane_t

0x93ed,	// (0x00040c6f) list_double2_graphic_pane_g1_ParamLimits

0x93ed,	// (0x00040c6f) list_double2_graphic_pane_g1

0xd06f,	// (0x000448f1) list_double2_graphic_pane_g2_ParamLimits

0xd06f,	// (0x000448f1) list_double2_graphic_pane_g2

0xd07b,	// (0x000448fd) list_double2_graphic_pane_g3_ParamLimits

0xd07b,	// (0x000448fd) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00046e97) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00046e97) list_double2_graphic_pane_g

0x93f9,	// (0x00040c7b) list_double2_graphic_pane_t1_ParamLimits

0x93f9,	// (0x00040c7b) list_double2_graphic_pane_t1

0x940f,	// (0x00040c91) list_double2_graphic_pane_t2_ParamLimits

0x940f,	// (0x00040c91) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00046e9e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00046e9e) list_double2_graphic_pane_t

0x9421,	// (0x00040ca3) list_double_large_graphic_pane_g1_ParamLimits

0x9421,	// (0x00040ca3) list_double_large_graphic_pane_g1

0x9440,	// (0x00040cc2) list_double_large_graphic_pane_g2_ParamLimits

0x9440,	// (0x00040cc2) list_double_large_graphic_pane_g2

0xd063,	// (0x000448e5) list_double_large_graphic_pane_g3_ParamLimits

0xd063,	// (0x000448e5) list_double_large_graphic_pane_g3

0x9451,	// (0x00040cd3) list_double_large_graphic_pane_g4_ParamLimits

0x9451,	// (0x00040cd3) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00046ea3) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00046ea3) list_double_large_graphic_pane_g

0x9464,	// (0x00040ce6) list_double_large_graphic_pane_t1_ParamLimits

0x9464,	// (0x00040ce6) list_double_large_graphic_pane_t1

0x947d,	// (0x00040cff) list_double_large_graphic_pane_t2_ParamLimits

0x947d,	// (0x00040cff) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00046eae) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00046eae) list_double_large_graphic_pane_t

0x948f,	// (0x00040d11) list_double2_large_graphic_pane_g1_ParamLimits

0x948f,	// (0x00040d11) list_double2_large_graphic_pane_g1

0x9313,	// (0x00040b95) list_double2_large_graphic_pane_g2_ParamLimits

0x9313,	// (0x00040b95) list_double2_large_graphic_pane_g2

0x9324,	// (0x00040ba6) list_double2_large_graphic_pane_g3_ParamLimits

0x9324,	// (0x00040ba6) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00046eb3) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00046eb3) list_double2_large_graphic_pane_g

0x949b,	// (0x00040d1d) list_double2_large_graphic_pane_t1_ParamLimits

0x949b,	// (0x00040d1d) list_double2_large_graphic_pane_t1

0x94b1,	// (0x00040d33) list_double2_large_graphic_pane_t2_ParamLimits

0x94b1,	// (0x00040d33) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00046eba) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00046eba) list_double2_large_graphic_pane_t

0x94c3,	// (0x00040d45) list_double_heading_pane_g1_ParamLimits

0x94c3,	// (0x00040d45) list_double_heading_pane_g1

0x94d4,	// (0x00040d56) list_double_heading_pane_g2_ParamLimits

0x94d4,	// (0x00040d56) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00046ebf) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00046ebf) list_double_heading_pane_g

0x94e0,	// (0x00040d62) list_double_heading_pane_t1_ParamLimits

0x94e0,	// (0x00040d62) list_double_heading_pane_t1

0x9346,	// (0x00040bc8) list_double_heading_pane_t2_ParamLimits

0x9346,	// (0x00040bc8) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00046ec4) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00046ec4) list_double_heading_pane_t

0xd09c,	// (0x0004491e) list_double_graphic_heading_pane_g1_ParamLimits

0xd09c,	// (0x0004491e) list_double_graphic_heading_pane_g1

0x94c3,	// (0x00040d45) list_double_graphic_heading_pane_g2_ParamLimits

0x94c3,	// (0x00040d45) list_double_graphic_heading_pane_g2

0x94d4,	// (0x00040d56) list_double_graphic_heading_pane_g3_ParamLimits

0x94d4,	// (0x00040d56) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00046ec9) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00046ec9) list_double_graphic_heading_pane_g

0x94f6,	// (0x00040d78) list_double_graphic_heading_pane_t1_ParamLimits

0x94f6,	// (0x00040d78) list_double_graphic_heading_pane_t1

0x940f,	// (0x00040c91) list_double_graphic_heading_pane_t2_ParamLimits

0x940f,	// (0x00040c91) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00046ed0) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00046ed0) list_double_graphic_heading_pane_t

0x9440,	// (0x00040cc2) list_double_time_pane_g1_ParamLimits

0x9440,	// (0x00040cc2) list_double_time_pane_g1

0xd063,	// (0x000448e5) list_double_time_pane_g2_ParamLimits

0xd063,	// (0x000448e5) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00046ed5) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00046ed5) list_double_time_pane_g

0x950c,	// (0x00040d8e) list_double_time_pane_t1_ParamLimits

0x950c,	// (0x00040d8e) list_double_time_pane_t1

0x9522,	// (0x00040da4) list_double_time_pane_t2_ParamLimits

0x9522,	// (0x00040da4) list_double_time_pane_t2

0x9534,	// (0x00040db6) list_double_time_pane_t3_ParamLimits

0x9534,	// (0x00040db6) list_double_time_pane_t3

0x9546,	// (0x00040dc8) list_double_time_pane_t4_ParamLimits

0x9546,	// (0x00040dc8) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00046eda) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00046eda) list_double_time_pane_t

0x9558,	// (0x00040dda) list_setting_pane_g1_ParamLimits

0x9558,	// (0x00040dda) list_setting_pane_g1

0x9564,	// (0x00040de6) list_setting_pane_g2_ParamLimits

0x9564,	// (0x00040de6) list_setting_pane_g2

0x0001,

0xf661,	// (0x00046ee3) list_setting_pane_g_ParamLimits

0xf661,	// (0x00046ee3) list_setting_pane_g

0x9570,	// (0x00040df2) list_setting_pane_t1_ParamLimits

0x9570,	// (0x00040df2) list_setting_pane_t1

0x958a,	// (0x00040e0c) list_setting_pane_t2_ParamLimits

0x958a,	// (0x00040e0c) list_setting_pane_t2

0x0002,

0xf666,	// (0x00046ee8) list_setting_pane_t_ParamLimits

0xf666,	// (0x00046ee8) list_setting_pane_t

0x95c9,	// (0x00040e4b) set_value_pane_cp_ParamLimits

0x95c9,	// (0x00040e4b) set_value_pane_cp

0x95d7,	// (0x00040e59) list_setting_number_pane_g1_ParamLimits

0x95d7,	// (0x00040e59) list_setting_number_pane_g1

0x95e3,	// (0x00040e65) list_setting_number_pane_g2_ParamLimits

0x95e3,	// (0x00040e65) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00046eef) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00046eef) list_setting_number_pane_g

0x95ef,	// (0x00040e71) list_setting_number_pane_t1_ParamLimits

0x95ef,	// (0x00040e71) list_setting_number_pane_t1

0x9608,	// (0x00040e8a) list_setting_number_pane_t2_ParamLimits

0x9608,	// (0x00040e8a) list_setting_number_pane_t2

0x9622,	// (0x00040ea4) list_setting_number_pane_t3_ParamLimits

0x9622,	// (0x00040ea4) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00046ef4) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00046ef4) list_setting_number_pane_t

0x95c9,	// (0x00040e4b) set_value_pane_ParamLimits

0x95c9,	// (0x00040e4b) set_value_pane

0xb881,	// (0x00043103) bg_set_opt_pane_ParamLimits

0xb881,	// (0x00043103) bg_set_opt_pane

0xd0a8,	// (0x0004492a) set_value_pane_t1

0xb8a2,	// (0x00043124) slider_set_pane_cp3

0xb8ab,	// (0x0004312d) volume_small_pane_cp

0xb8b4,	// (0x00043136) list_form_gen_pane

0xb8bd,	// (0x0004313f) scroll_pane_cp8

0x9665,	// (0x00040ee7) form_field_data_pane_ParamLimits

0x9665,	// (0x00040ee7) form_field_data_pane

0x9680,	// (0x00040f02) form_field_data_wide_pane_ParamLimits

0x9680,	// (0x00040f02) form_field_data_wide_pane

0xd0c6,	// (0x00044948) form_field_popup_pane_ParamLimits

0xd0c6,	// (0x00044948) form_field_popup_pane

0x96a2,	// (0x00040f24) form_field_popup_wide_pane_ParamLimits

0x96a2,	// (0x00040f24) form_field_popup_wide_pane

0xd0e8,	// (0x0004496a) form_field_slider_pane_ParamLimits

0xd0e8,	// (0x0004496a) form_field_slider_pane

0xd0fb,	// (0x0004497d) form_field_slider_wide_pane_ParamLimits

0xd0fb,	// (0x0004497d) form_field_slider_wide_pane

0xb8ce,	// (0x00043150) data_form_pane

0x96cd,	// (0x00040f4f) form_field_data_pane_t1

0xb8da,	// (0x0004315c) input_focus_pane

0xd10e,	// (0x00044990) data_form_wide_pane

0xd12b,	// (0x000449ad) form_field_data_wide_pane_t1

0xb655,	// (0x00042ed7) input_focus_pane_cp6

0x96e7,	// (0x00040f69) form_field_popup_pane_t1

0xb8da,	// (0x0004315c) input_focus_pane_cp7

0xb908,	// (0x0004318a) list_form_pane

0xd155,	// (0x000449d7) form_field_popup_wide_pane_t1

0xb8da,	// (0x0004315c) input_focus_pane_cp8

0xb914,	// (0x00043196) list_form_wide_pane

0x9709,	// (0x00040f8b) form_field_slider_pane_t1_ParamLimits

0x9709,	// (0x00040f8b) form_field_slider_pane_t1

0x9721,	// (0x00040fa3) form_field_slider_pane_t2_ParamLimits

0x9721,	// (0x00040fa3) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00046f04) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00046f04) form_field_slider_pane_t

0xb28e,	// (0x00042b10) input_focus_pane_cp9_ParamLimits

0xb28e,	// (0x00042b10) input_focus_pane_cp9

0x9736,	// (0x00040fb8) slider_cont_pane_ParamLimits

0x9736,	// (0x00040fb8) slider_cont_pane

0xb920,	// (0x000431a2) form_field_slider_wide_pane_t1_ParamLimits

0xb920,	// (0x000431a2) form_field_slider_wide_pane_t1

0xd16a,	// (0x000449ec) form_field_slider_wide_pane_t2_ParamLimits

0xd16a,	// (0x000449ec) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00046f09) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00046f09) form_field_slider_wide_pane_t

0xb28e,	// (0x00042b10) input_focus_pane_cp10_ParamLimits

0xb28e,	// (0x00042b10) input_focus_pane_cp10

0x974a,	// (0x00040fcc) slider_cont_pane_cp1_ParamLimits

0x974a,	// (0x00040fcc) slider_cont_pane_cp1

0x975e,	// (0x00040fe0) slider_form_pane_cp

0xb932,	// (0x000431b4) input_focus_pane_g1

0xb93a,	// (0x000431bc) input_focus_pane_g2

0xb942,	// (0x000431c4) input_focus_pane_g3

0xb94a,	// (0x000431cc) input_focus_pane_g4

0xb952,	// (0x000431d4) input_focus_pane_g5

0xb95a,	// (0x000431dc) input_focus_pane_g6

0xb962,	// (0x000431e4) input_focus_pane_g7

0xb96a,	// (0x000431ec) input_focus_pane_g8

0xb972,	// (0x000431f4) input_focus_pane_g9

0xb236,	// (0x00042ab8) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00046f0e) input_focus_pane_g

0x2a02,	// (0x0003a284) wait_border_pane_g3_copy1

0x9766,	// (0x00040fe8) data_form_pane_t1

0xb236,	// (0x00042ab8) wait_anim_pane_g1_copy1

0xa9c8,	// (0x0004224a) data_form_wide_pane_t1

0xd17c,	// (0x000449fe) list_form_graphic_pane_cp_ParamLimits

0xd17c,	// (0x000449fe) list_form_graphic_pane_cp

0x394e,	// (0x0003b1d0) slider_form_pane_g1

0x3957,	// (0x0003b1d9) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0004720c) slider_form_pane_g

0xd17c,	// (0x000449fe) list_form_graphic_pane_ParamLimits

0xd17c,	// (0x000449fe) list_form_graphic_pane

0xd18e,	// (0x00044a10) list_form_graphic_pane_g1

0xd196,	// (0x00044a18) list_form_graphic_pane_t1_ParamLimits

0xd196,	// (0x00044a18) list_form_graphic_pane_t1

0xb29c,	// (0x00042b1e) list_highlight_pane_cp5_ParamLimits

0xb29c,	// (0x00042b1e) list_highlight_pane_cp5

0x9780,	// (0x00041002) find_pane_g1

0xb97a,	// (0x000431fc) input_find_pane

0x9789,	// (0x0004100b) input_find_pane_g1_ParamLimits

0x9789,	// (0x0004100b) input_find_pane_g1

0x9795,	// (0x00041017) input_find_pane_t1_ParamLimits

0x9795,	// (0x00041017) input_find_pane_t1

0x97aa,	// (0x0004102c) input_find_pane_t2_ParamLimits

0x97aa,	// (0x0004102c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00046f23) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00046f23) input_find_pane_t

0xb983,	// (0x00043205) input_focus_pane_cp5_ParamLimits

0xb983,	// (0x00043205) input_focus_pane_cp5

0xb991,	// (0x00043213) bg_popup_window_pane_cp2_ParamLimits

0xb991,	// (0x00043213) bg_popup_window_pane_cp2

0xb99e,	// (0x00043220) listscroll_menu_pane_ParamLimits

0xb99e,	// (0x00043220) listscroll_menu_pane

0x97cb,	// (0x0004104d) popup_submenu_window_ParamLimits

0x97cb,	// (0x0004104d) popup_submenu_window

0xb9aa,	// (0x0004322c) find_popup_pane_g1

0xb9b2,	// (0x00043234) input_popup_find_pane_cp

0xb983,	// (0x00043205) input_focus_pane_cp4_ParamLimits

0xb983,	// (0x00043205) input_focus_pane_cp4

0xb9bc,	// (0x0004323e) input_popup_find_pane_t1_ParamLimits

0xb9bc,	// (0x0004323e) input_popup_find_pane_t1

0xb240,	// (0x00042ac2) bg_popup_sub_pane_cp

0xb9ea,	// (0x0004326c) listscroll_popup_sub_pane

0xb9f2,	// (0x00043274) list_submenu_pane_ParamLimits

0xb9f2,	// (0x00043274) list_submenu_pane

0xba03,	// (0x00043285) scroll_pane_cp4

0xba0b,	// (0x0004328d) list_single_popup_submenu_pane_ParamLimits

0xba0b,	// (0x0004328d) list_single_popup_submenu_pane

0xba20,	// (0x000432a2) list_single_popup_submenu_pane_g1

0xba28,	// (0x000432aa) list_single_popup_submenu_pane_t1_ParamLimits

0xba28,	// (0x000432aa) list_single_popup_submenu_pane_t1

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp1_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp1

0x9809,	// (0x0004108b) tabs_2_active_pane_g1

0x9811,	// (0x00041093) tabs_2_active_pane_t1

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp1_ParamLimits

0xb28e,	// (0x00042b10) bg_passive_tab_pane_cp1

0x9809,	// (0x0004108b) tabs_2_passive_pane_g1

0x9811,	// (0x00041093) tabs_2_passive_pane_t1

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp4

0x9823,	// (0x000410a5) tabs_2_long_active_pane_t1

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp4

0x0749,	// (0x00037fcb) list_single_midp_graphic_pane_g4_ParamLimits

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp5

0x9836,	// (0x000410b8) tabs_3_long_active_pane_t1

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp5

0x0749,	// (0x00037fcb) list_single_midp_graphic_pane_g4

0xb29c,	// (0x00042b1e) bg_popup_window_pane_cp13_ParamLimits

0xb29c,	// (0x00042b1e) bg_popup_window_pane_cp13

0xba46,	// (0x000432c8) listscroll_popup_fast_pane_ParamLimits

0xba46,	// (0x000432c8) listscroll_popup_fast_pane

0xba55,	// (0x000432d7) grid_popup_fast_pane_ParamLimits

0xba55,	// (0x000432d7) grid_popup_fast_pane

0xba67,	// (0x000432e9) scroll_pane_cp9_ParamLimits

0xba67,	// (0x000432e9) scroll_pane_cp9

0x5293,	// (0x0003cb15) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5293,	// (0x0003cb15) list_single_graphic_hl_pane_t1_cp2

0xba8b,	// (0x0004330d) input_focus_pane_cp20_ParamLimits

0xba8b,	// (0x0004330d) input_focus_pane_cp20

0xba99,	// (0x0004331b) query_popup_data_pane_t1_ParamLimits

0xba99,	// (0x0004331b) query_popup_data_pane_t1

0xbaac,	// (0x0004332e) query_popup_data_pane_t2_ParamLimits

0xbaac,	// (0x0004332e) query_popup_data_pane_t2

0xbaf2,	// (0x00043374) query_popup_data_pane_t3_ParamLimits

0xbaf2,	// (0x00043374) query_popup_data_pane_t3

0xbb33,	// (0x000433b5) query_popup_data_pane_t4_ParamLimits

0xbb33,	// (0x000433b5) query_popup_data_pane_t4

0xbb6f,	// (0x000433f1) query_popup_data_pane_t5_ParamLimits

0xbb6f,	// (0x000433f1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00046f28) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00046f28) query_popup_data_pane_t

0xb932,	// (0x000431b4) bg_set_opt_pane_g1

0xb93a,	// (0x000431bc) bg_set_opt_pane_g2

0xb942,	// (0x000431c4) bg_set_opt_pane_g3

0xb94a,	// (0x000431cc) bg_set_opt_pane_g4

0xb952,	// (0x000431d4) bg_set_opt_pane_g5

0xb95a,	// (0x000431dc) bg_set_opt_pane_g6

0xb962,	// (0x000431e4) bg_set_opt_pane_g7

0xb96a,	// (0x000431ec) bg_set_opt_pane_g8

0xb972,	// (0x000431f4) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00046f33) bg_set_opt_pane_g

0xeea3,	// (0x00046725) control_top_pane_stacon_ParamLimits

0xeea3,	// (0x00046725) control_top_pane_stacon

0xeef6,	// (0x00046778) signal_pane_stacon_ParamLimits

0xeef6,	// (0x00046778) signal_pane_stacon

0xef1b,	// (0x0004679d) stacon_top_pane_g1_ParamLimits

0xef1b,	// (0x0004679d) stacon_top_pane_g1

0xef3d,	// (0x000467bf) title_pane_stacon_ParamLimits

0xef3d,	// (0x000467bf) title_pane_stacon

0xef67,	// (0x000467e9) uni_indicator_pane_stacon_ParamLimits

0xef67,	// (0x000467e9) uni_indicator_pane_stacon

0xef7c,	// (0x000467fe) battery_pane_stacon_ParamLimits

0xef7c,	// (0x000467fe) battery_pane_stacon

0xefc0,	// (0x00046842) control_bottom_pane_stacon_ParamLimits

0xefc0,	// (0x00046842) control_bottom_pane_stacon

0xefe3,	// (0x00046865) navi_pane_stacon_ParamLimits

0xefe3,	// (0x00046865) navi_pane_stacon

0xf006,	// (0x00046888) stacon_bottom_pane_g1_ParamLimits

0xf006,	// (0x00046888) stacon_bottom_pane_g1

0xeb8c,	// (0x0004640e) aid_levels_signal_lsc_ParamLimits

0xeb8c,	// (0x0004640e) aid_levels_signal_lsc

0xeba3,	// (0x00046425) signal_pane_stacon_g1_ParamLimits

0xeba3,	// (0x00046425) signal_pane_stacon_g1

0xebb7,	// (0x00046439) signal_pane_stacon_g2_ParamLimits

0xebb7,	// (0x00046439) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00046f46) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00046f46) signal_pane_stacon_g

0xebec,	// (0x0004646e) title_pane_stacon_t1_ParamLimits

0xebec,	// (0x0004646e) title_pane_stacon_t1

0xbbb3,	// (0x00043435) uni_indicator_pane_stacon_g1

0xbbbd,	// (0x0004343f) uni_indicator_pane_stacon_g2

0xbbc7,	// (0x00043449) uni_indicator_pane_stacon_g3

0xbbd1,	// (0x00043453) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00046f52) uni_indicator_pane_stacon_g

0xec11,	// (0x00046493) control_top_pane_stacon_g1

0xec19,	// (0x0004649b) control_top_pane_stacon_t1_ParamLimits

0xec19,	// (0x0004649b) control_top_pane_stacon_t1

0xec50,	// (0x000464d2) aid_levels_battery_lsc_ParamLimits

0xec50,	// (0x000464d2) aid_levels_battery_lsc

0xec68,	// (0x000464ea) battery_pane_stacon_g1_ParamLimits

0xec68,	// (0x000464ea) battery_pane_stacon_g1

0xec7b,	// (0x000464fd) battery_pane_stacon_g2_ParamLimits

0xec7b,	// (0x000464fd) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00046f5b) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00046f5b) battery_pane_stacon_g

0xecb9,	// (0x0004653b) navi_icon_pane_stacon

0xed41,	// (0x000465c3) navi_navi_pane_stacon

0xecb9,	// (0x0004653b) navi_text_pane_stacon

0xec11,	// (0x00046493) control_bottom_pane_stacon_g1

0xed57,	// (0x000465d9) control_bottom_pane_stacon_t1_ParamLimits

0xed57,	// (0x000465d9) control_bottom_pane_stacon_t1

0x9848,	// (0x000410ca) grid_app_pane_ParamLimits

0x9848,	// (0x000410ca) grid_app_pane

0x9880,	// (0x00041102) scroll_pane_cp15_ParamLimits

0x9880,	// (0x00041102) scroll_pane_cp15

0x9895,	// (0x00041117) cell_app_pane_ParamLimits

0x9895,	// (0x00041117) cell_app_pane

0x98e2,	// (0x00041164) cell_app_pane_g1_ParamLimits

0x98e2,	// (0x00041164) cell_app_pane_g1

0xbbf5,	// (0x00043477) cell_app_pane_g2_ParamLimits

0xbbf5,	// (0x00043477) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00046f60) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00046f60) cell_app_pane_g

0x9906,	// (0x00041188) cell_app_pane_t1_ParamLimits

0x9906,	// (0x00041188) cell_app_pane_t1

0xbc01,	// (0x00043483) grid_highlight_pane_ParamLimits

0xbc01,	// (0x00043483) grid_highlight_pane

0xb932,	// (0x000431b4) cell_highlight_pane_g1

0xb93a,	// (0x000431bc) cell_highlight_pane_g2

0xb942,	// (0x000431c4) cell_highlight_pane_g3

0xb94a,	// (0x000431cc) cell_highlight_pane_g4

0xb952,	// (0x000431d4) cell_highlight_pane_g5

0xb95a,	// (0x000431dc) cell_highlight_pane_g6

0xb962,	// (0x000431e4) cell_highlight_pane_g7

0xb96a,	// (0x000431ec) cell_highlight_pane_g8

0xb972,	// (0x000431f4) cell_highlight_pane_g9

0xb236,	// (0x00042ab8) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00046f0e) cell_highlight_pane_g

0xbc12,	// (0x00043494) bg_scroll_pane

0xed98,	// (0x0004661a) scroll_handle_pane

0xbc59,	// (0x000434db) scroll_bg_pane_g1

0xbc6e,	// (0x000434f0) scroll_bg_pane_g2

0xbc86,	// (0x00043508) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00046f65) scroll_bg_pane_g

0xbc9b,	// (0x0004351d) scroll_handle_focus_pane_ParamLimits

0xbc9b,	// (0x0004351d) scroll_handle_focus_pane

0xbc59,	// (0x000434db) scroll_handle_pane_g1

0xbca8,	// (0x0004352a) scroll_handle_pane_g2

0xbc86,	// (0x00043508) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00046f6c) scroll_handle_pane_g

0xb983,	// (0x00043205) bg_popup_sub_pane_cp21_ParamLimits

0xb983,	// (0x00043205) bg_popup_sub_pane_cp21

0xbcbc,	// (0x0004353e) popup_fep_japan_predictive_window_t1_ParamLimits

0xbcbc,	// (0x0004353e) popup_fep_japan_predictive_window_t1

0xbcd3,	// (0x00043555) popup_fep_japan_predictive_window_t2_ParamLimits

0xbcd3,	// (0x00043555) popup_fep_japan_predictive_window_t2

0xbd06,	// (0x00043588) popup_fep_japan_predictive_window_t3_ParamLimits

0xbd06,	// (0x00043588) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00046f73) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00046f73) popup_fep_japan_predictive_window_t

0xb240,	// (0x00042ac2) bg_popup_sub_pane_cp23

0xbd3d,	// (0x000435bf) listscroll_japin_cand_pane

0xbd45,	// (0x000435c7) popup_fep_japan_candidate_window_t1

0xbd53,	// (0x000435d5) candidate_pane_ParamLimits

0xbd53,	// (0x000435d5) candidate_pane

0xbd65,	// (0x000435e7) scroll_pane_cp30

0xbd6f,	// (0x000435f1) list_single_popup_jap_candidate_pane_ParamLimits

0xbd6f,	// (0x000435f1) list_single_popup_jap_candidate_pane

0xb240,	// (0x00042ac2) list_highlight_pane_cp30

0xbd83,	// (0x00043605) list_single_popup_jap_candidate_pane_t1

0x9926,	// (0x000411a8) level_1_signal

0x9938,	// (0x000411ba) level_2_signal

0x994b,	// (0x000411cd) level_3_signal

0x995e,	// (0x000411e0) level_4_signal

0x9971,	// (0x000411f3) level_5_signal

0x9984,	// (0x00041206) level_6_signal

0x9997,	// (0x00041219) level_7_signal

0x9926,	// (0x000411a8) level_1_battery

0x9938,	// (0x000411ba) level_2_battery

0x994b,	// (0x000411cd) level_3_battery

0x995e,	// (0x000411e0) level_4_battery

0x9971,	// (0x000411f3) level_5_battery

0x9984,	// (0x00041206) level_6_battery

0x9997,	// (0x00041219) level_7_battery

0xbdaa,	// (0x0004362c) list_menu_pane_ParamLimits

0xbdaa,	// (0x0004362c) list_menu_pane

0xbdc0,	// (0x00043642) scroll_pane_cp25_ParamLimits

0xbdc0,	// (0x00043642) scroll_pane_cp25

0xbdd9,	// (0x0004365b) list_double2_graphic_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double2_graphic_pane_cp2

0xbdd9,	// (0x0004365b) list_double2_large_graphic_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double2_large_graphic_pane_cp2

0xbdd9,	// (0x0004365b) list_double2_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double2_pane_cp2

0xbdd9,	// (0x0004365b) list_double_graphic_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double_graphic_pane_cp2

0xbdd9,	// (0x0004365b) list_double_large_graphic_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double_large_graphic_pane_cp2

0xbdd9,	// (0x0004365b) list_double_number_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double_number_pane_cp2

0xbdd9,	// (0x0004365b) list_double_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double_pane_cp2

0x99aa,	// (0x0004122c) list_single_2graphic_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_2graphic_pane_cp2

0x99aa,	// (0x0004122c) list_single_graphic_heading_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_graphic_heading_pane_cp2

0x99aa,	// (0x0004122c) list_single_graphic_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_graphic_pane_cp2

0x99aa,	// (0x0004122c) list_single_heading_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_heading_pane_cp2

0xbde9,	// (0x0004366b) list_single_large_graphic_pane_cp2_ParamLimits

0xbde9,	// (0x0004366b) list_single_large_graphic_pane_cp2

0x99aa,	// (0x0004122c) list_single_number_heading_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_number_heading_pane_cp2

0x99aa,	// (0x0004122c) list_single_number_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_number_pane_cp2

0x99aa,	// (0x0004122c) list_single_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_pane_cp2

0xbe02,	// (0x00043684) bg_popup_sub_pane_cp22

0xee4a,	// (0x000466cc) popup_side_volume_key_window_g1

0xee74,	// (0x000466f6) popup_side_volume_key_window_t1

0xee92,	// (0x00046714) volume_small_pane_cp1

0xb28e,	// (0x00042b10) bg_popup_sub_pane_cp24_ParamLimits

0xb28e,	// (0x00042b10) bg_popup_sub_pane_cp24

0xbe18,	// (0x0004369a) fep_china_uni_candidate_pane_ParamLimits

0xbe18,	// (0x0004369a) fep_china_uni_candidate_pane

0xbe2c,	// (0x000436ae) fep_china_uni_entry_pane

0xbe3c,	// (0x000436be) popup_fep_china_uni_window_g1

0xbe58,	// (0x000436da) fep_china_uni_entry_pane_g1

0xbe62,	// (0x000436e4) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00046fa4) fep_china_uni_entry_pane_g

0xbe6c,	// (0x000436ee) fep_entry_item_pane

0xbe76,	// (0x000436f8) fep_candidate_item_pane

0xbe7e,	// (0x00043700) fep_china_uni_candidate_pane_g1

0xbe88,	// (0x0004370a) fep_china_uni_candidate_pane_g2

0xbe90,	// (0x00043712) fep_china_uni_candidate_pane_g3

0xbe98,	// (0x0004371a) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00046fa9) fep_china_uni_candidate_pane_g

0xb236,	// (0x00042ab8) fep_entry_item_pane_g1

0xbea2,	// (0x00043724) fep_entry_item_pane_t1_ParamLimits

0xbea2,	// (0x00043724) fep_entry_item_pane_t1

0xbeb8,	// (0x0004373a) fep_candidate_item_pane_t1_ParamLimits

0xbeb8,	// (0x0004373a) fep_candidate_item_pane_t1

0xbecd,	// (0x0004374f) fep_candidate_item_pane_t2_ParamLimits

0xbecd,	// (0x0004374f) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00046fb2) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00046fb2) fep_candidate_item_pane_t

0xb29c,	// (0x00042b1e) list_highlight_pane_cp31_ParamLimits

0xb29c,	// (0x00042b1e) list_highlight_pane_cp31

0xbedf,	// (0x00043761) level_1_signal_lsc

0xbee8,	// (0x0004376a) level_2_signal_lsc

0xbef1,	// (0x00043773) level_3_signal_lsc

0xbefa,	// (0x0004377c) level_4_signal_lsc

0xbf03,	// (0x00043785) level_5_signal_lsc

0xbf0c,	// (0x0004378e) level_6_signal_lsc

0xbf15,	// (0x00043797) level_7_signal_lsc

0xbf15,	// (0x00043797) level_1_battery_lsc

0xbf1e,	// (0x000437a0) level_2_battery_lsc

0xbf27,	// (0x000437a9) level_3_battery_lsc

0xbf30,	// (0x000437b2) level_4_battery_lsc

0xbf39,	// (0x000437bb) level_5_battery_lsc

0xbf42,	// (0x000437c4) level_6_battery_lsc

0xbedf,	// (0x00043761) level_7_battery_lsc

0xbf4b,	// (0x000437cd) scroll_handle_focus_pane_g1

0xbf54,	// (0x000437d6) scroll_handle_focus_pane_g2

0xbf5d,	// (0x000437df) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00046fb7) scroll_handle_focus_pane_g

0x9a39,	// (0x000412bb) list_single_2graphic_pane_g1_ParamLimits

0x9a39,	// (0x000412bb) list_single_2graphic_pane_g1

0x92b4,	// (0x00040b36) list_single_2graphic_pane_g2_ParamLimits

0x92b4,	// (0x00040b36) list_single_2graphic_pane_g2

0xcfed,	// (0x0004486f) list_single_2graphic_pane_g3_ParamLimits

0xcfed,	// (0x0004486f) list_single_2graphic_pane_g3

0x9a45,	// (0x000412c7) list_single_2graphic_pane_g4_ParamLimits

0x9a45,	// (0x000412c7) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00046fbe) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00046fbe) list_single_2graphic_pane_g

0x9a51,	// (0x000412d3) list_single_2graphic_pane_t1_ParamLimits

0x9a51,	// (0x000412d3) list_single_2graphic_pane_t1

0x9a7f,	// (0x00041301) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9a7f,	// (0x00041301) list_double2_graphic_large_graphic_pane_g1

0x9313,	// (0x00040b95) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9313,	// (0x00040b95) list_double2_graphic_large_graphic_pane_g2

0x9324,	// (0x00040ba6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9324,	// (0x00040ba6) list_double2_graphic_large_graphic_pane_g3

0x9a91,	// (0x00041313) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9a91,	// (0x00041313) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00046fc7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00046fc7) list_double2_graphic_large_graphic_pane_g

0x9a9d,	// (0x0004131f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9a9d,	// (0x0004131f) list_double2_graphic_large_graphic_pane_t1

0x9ab3,	// (0x00041335) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ab3,	// (0x00041335) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00046fd0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00046fd0) list_double2_graphic_large_graphic_pane_t

0xf0c6,	// (0x00046948) popup_fast_swap_window_ParamLimits

0xf0c6,	// (0x00046948) popup_fast_swap_window

0xf0e4,	// (0x00046966) popup_side_volume_key_window

0xf102,	// (0x00046984) stacon_top_pane

0xf10c,	// (0x0004698e) status_pane_ParamLimits

0xf10c,	// (0x0004698e) status_pane

0x9b0d,	// (0x0004138f) status_small_pane

0xb240,	// (0x00042ac2) control_pane

0xb240,	// (0x00042ac2) stacon_bottom_pane

0xb8bd,	// (0x0004313f) scroll_pane_cp121

0xb8b4,	// (0x00043136) set_content_pane

0x9ac5,	// (0x00041347) bg_active_tab_pane_g1_cp1

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp1

0x9ace,	// (0x00041350) bg_active_tab_pane_g3_cp1

0x9ac5,	// (0x00041347) bg_passive_tab_pane_g1_cp1

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp1

0x9ace,	// (0x00041350) bg_passive_tab_pane_g3_cp1

0x9ad7,	// (0x00041359) bg_active_tab_pane_g1_cp2

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp2

0x9ae0,	// (0x00041362) bg_active_tab_pane_g3_cp2

0x9ad7,	// (0x00041359) bg_passive_tab_pane_g1_cp2

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp2

0x9ae0,	// (0x00041362) bg_passive_tab_pane_g3_cp2

0x9ae9,	// (0x0004136b) bg_active_tab_pane_g1_cp3

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp3

0x9af2,	// (0x00041374) bg_active_tab_pane_g3_cp3

0x9ae9,	// (0x0004136b) bg_passive_tab_pane_g1_cp3

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp3

0x9af2,	// (0x00041374) bg_passive_tab_pane_g3_cp3

0x9afb,	// (0x0004137d) bg_active_tab_pane_g1_cp4

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp4

0x9b04,	// (0x00041386) bg_active_tab_pane_g3_cp4

0x9afb,	// (0x0004137d) bg_passive_tab_pane_g1_cp4

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp4

0x9b04,	// (0x00041386) bg_passive_tab_pane_g3_cp4

0xf022,	// (0x000468a4) bg_active_tab_pane_g1_cp5

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp5

0xf02b,	// (0x000468ad) bg_active_tab_pane_g3_cp5

0xf022,	// (0x000468a4) bg_passive_tab_pane_g1_cp5

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp5

0xf02b,	// (0x000468ad) bg_passive_tab_pane_g3_cp5

0xf034,	// (0x000468b6) list_set_graphic_pane_ParamLimits

0xf034,	// (0x000468b6) list_set_graphic_pane

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp4

0xf047,	// (0x000468c9) list_set_graphic_pane_g1_ParamLimits

0xf047,	// (0x000468c9) list_set_graphic_pane_g1

0xf053,	// (0x000468d5) list_set_graphic_pane_g2_ParamLimits

0xf053,	// (0x000468d5) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00046fd5) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00046fd5) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0004735a) volume_small_pane_cp_g

0xf077,	// (0x000468f9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf077,	// (0x000468f9) list_double2_large_graphic_pane_g1_cp2

0xf085,	// (0x00046907) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf085,	// (0x00046907) list_double2_large_graphic_pane_g2_cp2

0xf096,	// (0x00046918) list_double2_large_graphic_pane_g3_cp2

0xf09e,	// (0x00046920) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf09e,	// (0x00046920) list_double2_large_graphic_pane_t1_cp2

0xf0b4,	// (0x00046936) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf0b4,	// (0x00046936) list_double2_large_graphic_pane_t2_cp2

0x34e6,	// (0x0003ad68) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x34e6,	// (0x0003ad68) list_double_large_graphic_pane_g1_cp2

0x34f9,	// (0x0003ad7b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x34f9,	// (0x0003ad7b) list_double_large_graphic_pane_g2_cp2

0xf22a,	// (0x00046aac) list_double_large_graphic_pane_g3_cp2

0x350a,	// (0x0003ad8c) list_double_large_graphic_pane_g4_cp

0x3512,	// (0x0003ad94) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3512,	// (0x0003ad94) list_double_large_graphic_pane_t1_cp2

0x3529,	// (0x0003adab) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3529,	// (0x0003adab) list_double_large_graphic_pane_t2_cp2

0xf11a,	// (0x0004699c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf11a,	// (0x0004699c) list_double2_graphic_pane_g1_cp2

0xf128,	// (0x000469aa) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf128,	// (0x000469aa) list_double2_graphic_pane_g2_cp2

0xf139,	// (0x000469bb) list_double2_graphic_pane_g3_cp2

0xf143,	// (0x000469c5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf143,	// (0x000469c5) list_double2_graphic_pane_t1_cp2

0xf159,	// (0x000469db) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf159,	// (0x000469db) list_double2_graphic_pane_t2_cp2

0xf16b,	// (0x000469ed) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf16b,	// (0x000469ed) list_single_number_heading_pane_g1_cp2

0xf177,	// (0x000469f9) list_single_number_heading_pane_g2_cp2

0xf17f,	// (0x00046a01) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf17f,	// (0x00046a01) list_single_number_heading_pane_t1_cp2

0xf195,	// (0x00046a17) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf195,	// (0x00046a17) list_single_number_heading_pane_t2_cp2

0xf1a9,	// (0x00046a2b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf1a9,	// (0x00046a2b) list_single_number_heading_pane_t3_cp2

0xf16b,	// (0x000469ed) list_single_heading_pane_g1_cp2_ParamLimits

0xf16b,	// (0x000469ed) list_single_heading_pane_g1_cp2

0xf177,	// (0x000469f9) list_single_heading_pane_g2_cp2

0xf17f,	// (0x00046a01) list_single_heading_pane_t1_cp2_ParamLimits

0xf17f,	// (0x00046a01) list_single_heading_pane_t1_cp2

0x32e0,	// (0x0003ab62) list_single_heading_pane_t2_cp2_ParamLimits

0x32e0,	// (0x0003ab62) list_single_heading_pane_t2_cp2

0x3228,	// (0x0003aaaa) list_double_graphic_pane_g1_cp2_ParamLimits

0x3228,	// (0x0003aaaa) list_double_graphic_pane_g1_cp2

0x3234,	// (0x0003aab6) list_double_graphic_pane_g2_cp2_ParamLimits

0x3234,	// (0x0003aab6) list_double_graphic_pane_g2_cp2

0x3243,	// (0x0003aac5) list_double_graphic_pane_g3_cp2

0x324b,	// (0x0003aacd) list_double_graphic_pane_t1_cp2_ParamLimits

0x324b,	// (0x0003aacd) list_double_graphic_pane_t1_cp2

0x3261,	// (0x0003aae3) list_double_graphic_pane_t2_cp2_ParamLimits

0x3261,	// (0x0003aae3) list_double_graphic_pane_t2_cp2

0xf21e,	// (0x00046aa0) list_double_number_pane_g1_cp2_ParamLimits

0xf21e,	// (0x00046aa0) list_double_number_pane_g1_cp2

0xf22a,	// (0x00046aac) list_double_number_pane_g2_cp2

0x31ec,	// (0x0003aa6e) list_double_number_pane_t1_cp2_ParamLimits

0x31ec,	// (0x0003aa6e) list_double_number_pane_t1_cp2

0x3200,	// (0x0003aa82) list_double_number_pane_t2_cp2_ParamLimits

0x3200,	// (0x0003aa82) list_double_number_pane_t2_cp2

0x3216,	// (0x0003aa98) list_double_number_pane_t3_cp2_ParamLimits

0x3216,	// (0x0003aa98) list_double_number_pane_t3_cp2

0x30d5,	// (0x0003a957) list_single_graphic_pane_g1_cp2_ParamLimits

0x30d5,	// (0x0003a957) list_single_graphic_pane_g1_cp2

0xd1ab,	// (0x00044a2d) list_single_graphic_pane_g2_cp2_ParamLimits

0xd1ab,	// (0x00044a2d) list_single_graphic_pane_g2_cp2

0xf284,	// (0x00046b06) list_single_graphic_pane_g3_cp2

0x30ab,	// (0x0003a92d) list_single_graphic_pane_t1_cp2_ParamLimits

0x30ab,	// (0x0003a92d) list_single_graphic_pane_t1_cp2

0xd1ab,	// (0x00044a2d) list_single_number_pane_g1_cp2_ParamLimits

0xd1ab,	// (0x00044a2d) list_single_number_pane_g1_cp2

0xf284,	// (0x00046b06) list_single_number_pane_g2_cp2

0x30ab,	// (0x0003a92d) list_single_number_pane_t1_cp2_ParamLimits

0x30ab,	// (0x0003a92d) list_single_number_pane_t1_cp2

0x30c1,	// (0x0003a943) list_single_number_pane_t2_cp2_ParamLimits

0x30c1,	// (0x0003a943) list_single_number_pane_t2_cp2

0xf085,	// (0x00046907) list_double2_pane_g1_cp2_ParamLimits

0xf085,	// (0x00046907) list_double2_pane_g1_cp2

0xf096,	// (0x00046918) list_double2_pane_g2_cp2

0xf1f6,	// (0x00046a78) list_double2_pane_t1_cp2_ParamLimits

0xf1f6,	// (0x00046a78) list_double2_pane_t1_cp2

0xf20c,	// (0x00046a8e) list_double2_pane_t2_cp2_ParamLimits

0xf20c,	// (0x00046a8e) list_double2_pane_t2_cp2

0xf21e,	// (0x00046aa0) list_double_pane_g1_cp2_ParamLimits

0xf21e,	// (0x00046aa0) list_double_pane_g1_cp2

0xf22a,	// (0x00046aac) list_double_pane_g2_cp2

0xf232,	// (0x00046ab4) list_double_pane_t1_cp2_ParamLimits

0xf232,	// (0x00046ab4) list_double_pane_t1_cp2

0xf248,	// (0x00046aca) list_double_pane_t2_cp2_ParamLimits

0xf248,	// (0x00046aca) list_double_pane_t2_cp2

0xf274,	// (0x00046af6) list_single_pane_cp2_g3

0xd1ab,	// (0x00044a2d) list_single_pane_g1_cp2_ParamLimits

0xd1ab,	// (0x00044a2d) list_single_pane_g1_cp2

0xf284,	// (0x00046b06) list_single_pane_g2_cp2

0xf28c,	// (0x00046b0e) list_single_pane_t1_cp2_ParamLimits

0xf28c,	// (0x00046b0e) list_single_pane_t1_cp2

0xf2a4,	// (0x00046b26) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xf2a4,	// (0x00046b26) list_single_large_graphic_pane_g1_cp2

0xf2b2,	// (0x00046b34) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2b2,	// (0x00046b34) list_single_large_graphic_pane_g2_cp2

0xf2be,	// (0x00046b40) list_single_large_graphic_pane_g3_cp2

0xf2c6,	// (0x00046b48) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf2c6,	// (0x00046b48) list_single_large_graphic_pane_g4_cp1

0xf2e0,	// (0x00046b62) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf2e0,	// (0x00046b62) list_single_large_graphic_pane_t1_cp2

0x3075,	// (0x0003a8f7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3075,	// (0x0003a8f7) list_single_graphic_heading_pane_g1_cp2

0x3042,	// (0x0003a8c4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3042,	// (0x0003a8c4) list_single_graphic_heading_pane_g4_cp2

0xf284,	// (0x00046b06) list_single_graphic_heading_pane_g5_cp2

0x3081,	// (0x0003a903) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3081,	// (0x0003a903) list_single_graphic_heading_pane_t1_cp2

0x3097,	// (0x0003a919) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3097,	// (0x0003a919) list_single_graphic_heading_pane_t2_cp2

0x3036,	// (0x0003a8b8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3036,	// (0x0003a8b8) list_single_2graphic_pane_g1_cp2

0x3042,	// (0x0003a8c4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3042,	// (0x0003a8c4) list_single_2graphic_pane_g2_cp2

0xf284,	// (0x00046b06) list_single_2graphic_pane_g3_cp2

0x3053,	// (0x0003a8d5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3053,	// (0x0003a8d5) list_single_2graphic_pane_g4_cp2

0x305f,	// (0x0003a8e1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x305f,	// (0x0003a8e1) list_single_2graphic_pane_t1_cp2

0xb236,	// (0x00042ab8) list_highlight_pane_g10_cp1

0x2c0e,	// (0x0003a490) list_highlight_pane_g1_cp1

0x2c16,	// (0x0003a498) list_highlight_pane_g2_cp1

0x2c1e,	// (0x0003a4a0) list_highlight_pane_g3_cp1

0x2c26,	// (0x0003a4a8) list_highlight_pane_g4_cp1

0x2c2e,	// (0x0003a4b0) list_highlight_pane_g5_cp1

0x2c36,	// (0x0003a4b8) list_highlight_pane_g6_cp1

0x2c3e,	// (0x0003a4c0) list_highlight_pane_g7_cp1

0x2c46,	// (0x0003a4c8) list_highlight_pane_g8_cp1

0x2c4e,	// (0x0003a4d0) list_highlight_pane_g9_cp1

0xc190,	// (0x00043a12) form_field_slider_pane_t3

0xc19e,	// (0x00043a20) form_field_slider_pane_t4

0x2b4a,	// (0x0003a3cc) slider_form_pane_ParamLimits

0x2b4a,	// (0x0003a3cc) slider_form_pane

0xb240,	// (0x00042ac2) control_abbreviations

0xb240,	// (0x00042ac2) control_conventions

0xb240,	// (0x00042ac2) control_definitions

0xb240,	// (0x00042ac2) format_table_attribute

0x3336,	// (0x0003abb8) bg_popup_preview_window_pane_g9

0xb240,	// (0x00042ac2) format_table_data2

0xb240,	// (0x00042ac2) format_table_data3

0xb240,	// (0x00042ac2) format_table_data_example

0x0008,

0xb240,	// (0x00042ac2) intro_purpose

0xf8ea,	// (0x0004716c) bg_popup_preview_window_pane_g

0xb240,	// (0x00042ac2) texts_category

0xb240,	// (0x00042ac2) texts_graphics

0xf2f6,	// (0x00046b78) text_digital

0xf305,	// (0x00046b87) text_primary

0xf314,	// (0x00046b96) text_primary_small

0xf323,	// (0x00046ba5) text_secondary

0xf332,	// (0x00046bb4) text_title

0x3ab8,	// (0x0003b33a) bg_passive_tab_pane_g1_cp3_srt

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp3_srt

0x3ac1,	// (0x0003b343) bg_passive_tab_pane_g3_cp3_srt

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp3_srt_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp3_srt

0x3aca,	// (0x0003b34c) tabs_4_active_pane_srt_g1

0xc4b6,	// (0x00043d38) tabs_4_active_pane_srt_t1_ParamLimits

0xc4b6,	// (0x00043d38) tabs_4_active_pane_srt_t1

0x3ab8,	// (0x0003b33a) bg_active_tab_pane_g1_cp3_copy1

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp3_copy1

0x3ac1,	// (0x0003b343) bg_active_tab_pane_g3_cp3_copy1

0xb29c,	// (0x00042b1e) tabs_2_long_active_pane_srt_ParamLimits

0xb29c,	// (0x00042b1e) tabs_2_long_active_pane_srt

0xb29c,	// (0x00042b1e) tabs_2_long_passive_pane_srt_ParamLimits

0xb29c,	// (0x00042b1e) tabs_2_long_passive_pane_srt

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp4_srt

0x3765,	// (0x0003afe7) bg_passive_tab_pane_g1_cp4_srt

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp4_srt

0x376e,	// (0x0003aff0) bg_passive_tab_pane_g3_cp4_srt

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp4_srt_ParamLimits

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp4_srt

0xc370,	// (0x00043bf2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc370,	// (0x00043bf2) tabs_2_long_active_pane_srt_t1

0x3765,	// (0x0003afe7) bg_active_tab_pane_g1_cp4_srt

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp4_srt

0x376e,	// (0x0003aff0) bg_active_tab_pane_g3_cp4_srt

0xb28e,	// (0x00042b10) tabs_3_long_active_pane_srt_ParamLimits

0xb28e,	// (0x00042b10) tabs_3_long_active_pane_srt

0xb28e,	// (0x00042b10) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb28e,	// (0x00042b10) tabs_3_long_passive_pane_cp_srt

0xb28e,	// (0x00042b10) tabs_3_long_passive_pane_srt_ParamLimits

0xb28e,	// (0x00042b10) tabs_3_long_passive_pane_srt

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp5_srt

0xf022,	// (0x000468a4) bg_passive_tab_pane_g1_cp5_srt

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp5_srt

0xf02b,	// (0x000468ad) bg_passive_tab_pane_g3_cp5_srt

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp5_srt_ParamLimits

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp5_srt

0xc35a,	// (0x00043bdc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc35a,	// (0x00043bdc) tabs_3_long_active_pane_srt_t1

0xf022,	// (0x000468a4) bg_active_tab_pane_g1_cp5_srt

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp5_srt

0xf02b,	// (0x000468ad) bg_active_tab_pane_g3_cp5_srt

0x3745,	// (0x0003afc7) navi_text_pane_srt_t1

0x373d,	// (0x0003afbf) navi_icon_pane_srt_g1

0xf4e5,	// (0x00046d67) midp_editing_number_pane_srt

0xf341,	// (0x00046bc3) midp_ticker_pane_srt

0xf4ed,	// (0x00046d6f) midp_ticker_pane_srt_g1

0xf4f5,	// (0x00046d77) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00046ff4) midp_ticker_pane_srt_g

0xf4fd,	// (0x00046d7f) midp_ticker_pane_srt_t1

0x372e,	// (0x0003afb0) midp_editing_number_pane_t1_copy1

0x9b18,	// (0x0004139a) listscroll_midp_pane

0x9b18,	// (0x0004139a) midp_form_pane

0xf349,	// (0x00046bcb) midp_info_popup_window_ParamLimits

0xf349,	// (0x00046bcb) midp_info_popup_window

0xb983,	// (0x00043205) bg_popup_sub_pane_cp50_ParamLimits

0xb983,	// (0x00043205) bg_popup_sub_pane_cp50

0x2838,	// (0x0003a0ba) listscroll_midp_info_pane_ParamLimits

0x2838,	// (0x0003a0ba) listscroll_midp_info_pane

0x2818,	// (0x0003a09a) listscroll_form_midp_pane_ParamLimits

0x2818,	// (0x0003a09a) listscroll_form_midp_pane

0x2824,	// (0x0003a0a6) scroll_bar_cp050

0x2818,	// (0x0003a09a) list_midp_pane

0x4530,	// (0x0003bdb2) signal_pane_g2_cp

0x2732,	// (0x00039fb4) listscroll_midp_info_pane_t1_ParamLimits

0x2732,	// (0x00039fb4) listscroll_midp_info_pane_t1

0x274a,	// (0x00039fcc) listscroll_midp_info_pane_t2_ParamLimits

0x274a,	// (0x00039fcc) listscroll_midp_info_pane_t2

0x2788,	// (0x0003a00a) listscroll_midp_info_pane_t3_ParamLimits

0x2788,	// (0x0003a00a) listscroll_midp_info_pane_t3

0x27c2,	// (0x0003a044) listscroll_midp_info_pane_t4_ParamLimits

0x27c2,	// (0x0003a044) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x000470a7) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x000470a7) listscroll_midp_info_pane_t

0xba03,	// (0x00043285) scroll_pane_cp21

0x26cc,	// (0x00039f4e) form_midp_field_choice_group_pane

0x26d5,	// (0x00039f57) form_midp_field_text_pane

0x2718,	// (0x00039f9a) form_midp_field_time_pane

0x2720,	// (0x00039fa2) form_midp_gauge_slider_pane

0x2729,	// (0x00039fab) form_midp_gauge_wait_pane

0xb240,	// (0x00042ac2) form_midp_image_pane

0xa832,	// (0x000420b4) list_single_midp_pane_ParamLimits

0xa832,	// (0x000420b4) list_single_midp_pane

0xc168,	// (0x000439ea) form_midp_field_text_pane_t1

0x2482,	// (0x00039d04) input_focus_pane_cp050

0x26bb,	// (0x00039f3d) list_midp_form_text_pane

0x265f,	// (0x00039ee1) form_midp_field_choice_group_pane_t1

0x266d,	// (0x00039eef) input_focus_pane_cp051

0x2681,	// (0x00039f03) list_midp_choice_pane

0xb240,	// (0x00042ac2) status_idle_pane

0x2643,	// (0x00039ec5) form_midp_field_time_pane_t1

0xb236,	// (0x00042ab8) wait_anim_pane_g2_copy1

0x2651,	// (0x00039ed3) form_midp_field_time_pane_t2

0x0001,

0xf3a4,	// (0x00046c26) aid_navinavi_width_2_pane

0xf820,	// (0x000470a2) form_midp_field_time_pane_t

0xb240,	// (0x00042ac2) input_focus_pane_cp052

0xb240,	// (0x00042ac2) bg_input_focus_pane_cp040

0x2603,	// (0x00039e85) form_midp_gauge_slider_pane_t1

0x2611,	// (0x00039e93) form_midp_gauge_slider_pane_t2

0xc14c,	// (0x000439ce) form_midp_gauge_slider_pane_t3

0xc15a,	// (0x000439dc) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00047099) form_midp_gauge_slider_pane_t

0x263b,	// (0x00039ebd) form_midp_slider_pane

0xb29c,	// (0x00042b1e) bg_input_focus_pane_cp041_ParamLimits

0xb29c,	// (0x00042b1e) bg_input_focus_pane_cp041

0x25d0,	// (0x00039e52) form_midp_gauge_wait_pane_t1_ParamLimits

0x25d0,	// (0x00039e52) form_midp_gauge_wait_pane_t1

0x25e2,	// (0x00039e64) form_midp_gauge_wait_pane_t2_ParamLimits

0x25e2,	// (0x00039e64) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00047094) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00047094) form_midp_gauge_wait_pane_t

0x25f4,	// (0x00039e76) form_midp_wait_pane_ParamLimits

0x25f4,	// (0x00039e76) form_midp_wait_pane

0x2598,	// (0x00039e1a) form_midp_image_pane_g1

0x25a1,	// (0x00039e23) form_midp_image_pane_t1

0x25b0,	// (0x00039e32) form_midp_image_pane_t2

0x25bf,	// (0x00039e41) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0004708d) form_midp_image_pane_t

0x258f,	// (0x00039e11) list_single_midp_pane_g1

0xd29d,	// (0x00044b1f) list_single_midp_pane_t1

0xc135,	// (0x000439b7) list_midp_form_item_pane_ParamLimits

0xc135,	// (0x000439b7) list_midp_form_item_pane

0xf35e,	// (0x00046be0) list_midp_form_item_pane_t1

0xf36d,	// (0x00046bef) midp_ticker_pane_g1

0xf379,	// (0x00046bfb) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00046fda) midp_ticker_pane_g

0x9bbc,	// (0x0004143e) midp_ticker_pane_t1

0xc437,	// (0x00043cb9) midp_editing_number_pane_t1

0x3979,	// (0x0003b1fb) midp_editing_number_pane

0x3988,	// (0x0003b20a) midp_ticker_pane

0x371e,	// (0x0003afa0) ai_message_heading_pane

0xb240,	// (0x00042ac2) bg_popup_window_pane_cp14

0x3726,	// (0x0003afa8) listscroll_ai_message_pane

0x36a4,	// (0x0003af26) ai_message_heading_pane_g1_ParamLimits

0x36a4,	// (0x0003af26) ai_message_heading_pane_g1

0x36b0,	// (0x0003af32) ai_message_heading_pane_g2_ParamLimits

0x36b0,	// (0x0003af32) ai_message_heading_pane_g2

0x36be,	// (0x0003af40) ai_message_heading_pane_g3_ParamLimits

0x36be,	// (0x0003af40) ai_message_heading_pane_g3

0x36ca,	// (0x0003af4c) ai_message_heading_pane_g4_ParamLimits

0x36ca,	// (0x0003af4c) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x000471ce) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x000471ce) ai_message_heading_pane_g

0x36d6,	// (0x0003af58) ai_message_heading_pane_t1_ParamLimits

0x36d6,	// (0x0003af58) ai_message_heading_pane_t1

0x36f0,	// (0x0003af72) ai_message_heading_pane_t2_ParamLimits

0x36f0,	// (0x0003af72) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x000471d7) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x000471d7) ai_message_heading_pane_t

0x3704,	// (0x0003af86) bg_popup_heading_pane_cp1_ParamLimits

0x3704,	// (0x0003af86) bg_popup_heading_pane_cp1

0x3692,	// (0x0003af14) list_ai_message_pane_ParamLimits

0x3692,	// (0x0003af14) list_ai_message_pane

0xba03,	// (0x00043285) scroll_pane_cp10

0x362e,	// (0x0003aeb0) list_ai_message_pane_g1

0x3636,	// (0x0003aeb8) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x000471ab) list_ai_message_pane_g

0x363e,	// (0x0003aec0) list_ai_message_pane_t1_ParamLimits

0x363e,	// (0x0003aec0) list_ai_message_pane_t1

0x3653,	// (0x0003aed5) list_ai_message_pane_t2_ParamLimits

0x3653,	// (0x0003aed5) list_ai_message_pane_t2

0x3668,	// (0x0003aeea) list_ai_message_pane_t3_ParamLimits

0x3668,	// (0x0003aeea) list_ai_message_pane_t3

0x367d,	// (0x0003aeff) list_ai_message_pane_t4_ParamLimits

0x367d,	// (0x0003aeff) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x000471b0) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x000471b0) list_ai_message_pane_t

0xc340,	// (0x00043bc2) cell_ai_soft_ind_pane_ParamLimits

0xc340,	// (0x00043bc2) cell_ai_soft_ind_pane

0xf385,	// (0x00046c07) cell_ai_soft_ind_pane_g1_ParamLimits

0xf385,	// (0x00046c07) cell_ai_soft_ind_pane_g1

0xb240,	// (0x00042ac2) grid_highlight_cp1

0xf392,	// (0x00046c14) text_secondary_cp56_ParamLimits

0xf392,	// (0x00046c14) text_secondary_cp56

0x35ec,	// (0x0003ae6e) example_general_pane_ParamLimits

0x35ec,	// (0x0003ae6e) example_general_pane

0x35f8,	// (0x0003ae7a) example_parent_pane_g1_ParamLimits

0x35f8,	// (0x0003ae7a) example_parent_pane_g1

0x3604,	// (0x0003ae86) example_parent_pane_t1_ParamLimits

0x3604,	// (0x0003ae86) example_parent_pane_t1

0xa228,	// (0x00041aaa) popup_preview_text_window_ParamLimits

0xa228,	// (0x00041aaa) popup_preview_text_window

0xf27c,	// (0x00046afe) list_single_pane_cp2_g4

0xb49d,	// (0x00042d1f) bg_popup_preview_window_pane_ParamLimits

0xb49d,	// (0x00042d1f) bg_popup_preview_window_pane

0x3340,	// (0x0003abc2) popup_preview_text_window_t1_ParamLimits

0x3340,	// (0x0003abc2) popup_preview_text_window_t1

0x335e,	// (0x0003abe0) popup_preview_text_window_t2_ParamLimits

0x335e,	// (0x0003abe0) popup_preview_text_window_t2

0x33a7,	// (0x0003ac29) popup_preview_text_window_t3_ParamLimits

0x33a7,	// (0x0003ac29) popup_preview_text_window_t3

0x33ec,	// (0x0003ac6e) popup_preview_text_window_t4_ParamLimits

0x33ec,	// (0x0003ac6e) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0004717f) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0004717f) popup_preview_text_window_t

0x346a,	// (0x0003acec) scroll_pane_cp11

0x240e,	// (0x00039c90) bg_popup_preview_window_pane_g1

0x32f4,	// (0x0003ab76) bg_popup_preview_window_pane_g2

0x32fe,	// (0x0003ab80) bg_popup_preview_window_pane_g3

0x3308,	// (0x0003ab8a) bg_popup_preview_window_pane_g4

0x3312,	// (0x0003ab94) bg_popup_preview_window_pane_g5

0x331c,	// (0x0003ab9e) bg_popup_preview_window_pane_g6

0x3324,	// (0x0003aba6) bg_popup_preview_window_pane_g7

0x332c,	// (0x0003abae) bg_popup_preview_window_pane_g8

0xe938,	// (0x000461ba) aid_popup_width_pane

0xa198,	// (0x00041a1a) popup_midp_note_alarm_window_ParamLimits

0xa198,	// (0x00041a1a) popup_midp_note_alarm_window

0xb8ce,	// (0x00043150) data_form_pane_ParamLimits

0x96c3,	// (0x00040f45) form_field_data_pane_g1

0x96cd,	// (0x00040f4f) form_field_data_pane_t1_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_ParamLimits

0xd10e,	// (0x00044990) data_form_wide_pane_ParamLimits

0xd11f,	// (0x000449a1) form_field_data_wide_pane_g1

0xd12b,	// (0x000449ad) form_field_data_wide_pane_t1_ParamLimits

0xb655,	// (0x00042ed7) input_focus_pane_cp6_ParamLimits

0x97fb,	// (0x0004107d) input_popup_find_pane_g1_ParamLimits

0x97fb,	// (0x0004107d) input_popup_find_pane_g1

0xec8c,	// (0x0004650e) aid_navi_side_left_pane

0xeca1,	// (0x00046523) aid_navi_side_right_pane

0x2d09,	// (0x0003a58b) bg_popup_window_pane_cp30_ParamLimits

0x2d09,	// (0x0003a58b) bg_popup_window_pane_cp30

0x2d83,	// (0x0003a605) popup_midp_note_alarm_window_g1_ParamLimits

0x2d83,	// (0x0003a605) popup_midp_note_alarm_window_g1

0x2db3,	// (0x0003a635) popup_midp_note_alarm_window_t1_ParamLimits

0x2db3,	// (0x0003a635) popup_midp_note_alarm_window_t1

0x2e54,	// (0x0003a6d6) popup_midp_note_alarm_window_t2_ParamLimits

0x2e54,	// (0x0003a6d6) popup_midp_note_alarm_window_t2

0x2f02,	// (0x0003a784) popup_midp_note_alarm_window_t3_ParamLimits

0x2f02,	// (0x0003a784) popup_midp_note_alarm_window_t3

0x2f34,	// (0x0003a7b6) popup_midp_note_alarm_window_t4_ParamLimits

0x2f34,	// (0x0003a7b6) popup_midp_note_alarm_window_t4

0x2f5a,	// (0x0003a7dc) popup_midp_note_alarm_window_t5_ParamLimits

0x2f5a,	// (0x0003a7dc) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0004711c) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0004711c) popup_midp_note_alarm_window_t

0x3006,	// (0x0003a888) wait_bar_pane_cp1_ParamLimits

0x3006,	// (0x0003a888) wait_bar_pane_cp1

0xb240,	// (0x00042ac2) wait_anim_pane_copy1

0xb240,	// (0x00042ac2) wait_border_pane_copy1

0x29ee,	// (0x0003a270) wait_border_pane_g1_copy1

0xd145,	// (0x000449c7) form_field_popup_pane_g1

0x96e7,	// (0x00040f69) form_field_popup_pane_t1_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_cp7_ParamLimits

0xb908,	// (0x0004318a) list_form_pane_ParamLimits

0xd14d,	// (0x000449cf) form_field_popup_wide_pane_g1

0xd155,	// (0x000449d7) form_field_popup_wide_pane_t1_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_cp8_ParamLimits

0xb914,	// (0x00043196) list_form_wide_pane_ParamLimits

0xc515,	// (0x00043d97) aid_size_cell_graphic_pane

0x9766,	// (0x00040fe8) data_form_pane_t1_ParamLimits

0xa9c8,	// (0x0004224a) data_form_wide_pane_t1_ParamLimits

0xa62a,	// (0x00041eac) bg_status_flat_pane

0x8eef,	// (0x00040771) title_pane_t1_ParamLimits

0xb256,	// (0x00042ad8) title_pane_t2_ParamLimits

0xb27c,	// (0x00042afe) title_pane_t3_ParamLimits

0xf557,	// (0x00046dd9) title_pane_t_ParamLimits

0x9926,	// (0x000411a8) level_1_signal_ParamLimits

0x9938,	// (0x000411ba) level_2_signal_ParamLimits

0x994b,	// (0x000411cd) level_3_signal_ParamLimits

0x995e,	// (0x000411e0) level_4_signal_ParamLimits

0x9971,	// (0x000411f3) level_5_signal_ParamLimits

0x9984,	// (0x00041206) level_6_signal_ParamLimits

0x9997,	// (0x00041219) level_7_signal_ParamLimits

0x9926,	// (0x000411a8) level_1_battery_ParamLimits

0x9938,	// (0x000411ba) level_2_battery_ParamLimits

0x994b,	// (0x000411cd) level_3_battery_ParamLimits

0x995e,	// (0x000411e0) level_4_battery_ParamLimits

0x9971,	// (0x000411f3) level_5_battery_ParamLimits

0x9984,	// (0x00041206) level_6_battery_ParamLimits

0x9997,	// (0x00041219) level_7_battery_ParamLimits

0x2c0e,	// (0x0003a490) bg_status_flat_pane_g1

0x2c16,	// (0x0003a498) bg_status_flat_pane_g2

0x2c1e,	// (0x0003a4a0) bg_status_flat_pane_g3

0x2c26,	// (0x0003a4a8) bg_status_flat_pane_g4

0x2c2e,	// (0x0003a4b0) bg_status_flat_pane_g5

0x2c36,	// (0x0003a4b8) bg_status_flat_pane_g6

0x2c3e,	// (0x0003a4c0) bg_status_flat_pane_g7

0x8f83,	// (0x00040805) tabs_3_active_pane_t1_ParamLimits

0x8f83,	// (0x00040805) tabs_3_passive_pane_t1_ParamLimits

0x8f9d,	// (0x0004081f) tabs_4_active_pane_t1_ParamLimits

0x8f9d,	// (0x0004081f) tabs_4_1_passive_pane_t1_ParamLimits

0x9811,	// (0x00041093) tabs_2_active_pane_t1_ParamLimits

0x9811,	// (0x00041093) tabs_2_passive_pane_t1_ParamLimits

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp4_ParamLimits

0x9823,	// (0x000410a5) tabs_2_long_active_pane_t1_ParamLimits

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp4_ParamLimits

0x077c,	// (0x00037ffe) list_single_midp_graphic_pane_t1_ParamLimits

0xb29c,	// (0x00042b1e) bg_active_tab_pane_cp5_ParamLimits

0x9836,	// (0x000410b8) tabs_3_long_active_pane_t1_ParamLimits

0x1ede,	// (0x00039760) bg_passive_tab_pane_cp5_ParamLimits

0x077c,	// (0x00037ffe) list_single_midp_graphic_pane_t1

0xa62a,	// (0x00041eac) bg_status_flat_pane_ParamLimits

0x2092,	// (0x00039914) indicator_pane_cp2_ParamLimits

0x2092,	// (0x00039914) indicator_pane_cp2

0xbf66,	// (0x000437e8) navi_pane_srt_ParamLimits

0xbf66,	// (0x000437e8) navi_pane_srt

0x21f9,	// (0x00039a7b) popup_clock_digital_analogue_window_cp1

0xb2e0,	// (0x00042b62) indicator_pane_t1

0xf341,	// (0x00046bc3) copy_highlight_pane

0xf341,	// (0x00046bc3) cursor_graphics_pane

0xf341,	// (0x00046bc3) graphic_within_text_pane

0xf341,	// (0x00046bc3) link_highlight_pane

0x342d,	// (0x0003acaf) popup_preview_text_window_t5_ParamLimits

0x342d,	// (0x0003acaf) popup_preview_text_window_t5

0xf3ae,	// (0x00046c30) cursor_digital_pane

0xf3ae,	// (0x00046c30) cursor_primary_pane

0xf3bf,	// (0x00046c41) cursor_primary_small_pane

0xf3c7,	// (0x00046c49) cursor_secondary_pane

0xf3cf,	// (0x00046c51) cursor_title_pane

0xf3ae,	// (0x00046c30) link_highlight_digital_pane

0xf3b6,	// (0x00046c38) link_highlight_primary_pane

0xf3bf,	// (0x00046c41) link_highlight_primary_small_pane

0xf3c7,	// (0x00046c49) link_highlight_secondary_pane

0xf3cf,	// (0x00046c51) link_highlight_title_pane

0xf3ae,	// (0x00046c30) copy_highlight_digital_pane

0xf3ae,	// (0x00046c30) copy_highlight_primary_pane

0xf3bf,	// (0x00046c41) copy_highlight_primary_small_pane

0xf3c7,	// (0x00046c49) copy_highlight_secondary_pane

0xf3cf,	// (0x00046c51) copy_highlight_title_pane

0xf3c7,	// (0x00046c49) graphic_text_digital_pane

0x2cac,	// (0x0003a52e) graphic_text_primary_pane

0x2cb5,	// (0x0003a537) graphic_text_primary_small_pane

0xf3bf,	// (0x00046c41) graphic_text_secondary_pane

0xf3ae,	// (0x00046c30) graphic_text_title_pane

0x9bce,	// (0x00041450) cursor_primary_pane_g1

0x2c9e,	// (0x0003a520) cursor_text_primary_t1

0xc1c0,	// (0x00043a42) cursor_primary_small_pane_g1

0x2c90,	// (0x0003a512) cursor_text_primary_small_t1

0xc1b6,	// (0x00043a38) cursor_primary_small_pane_g1_copy1

0x2c78,	// (0x0003a4fa) cursor_text_primary_small_t1_copy1

0x2c56,	// (0x0003a4d8) cursor_text_title_t1

0xc1ac,	// (0x00043a2e) cursor_title_pane_g1

0x9bce,	// (0x00041450) cursor_digital_pane_g1

0xf3d7,	// (0x00046c59) cursor_text_digital_t1

0xf3e5,	// (0x00046c67) link_highlight_primary_pane_g1

0x2bff,	// (0x0003a481) link_highlight_primary_pane_t1

0xf3e5,	// (0x00046c67) link_highlight_primary_small_pane_g1

0xf3ed,	// (0x00046c6f) link_highlight_primary_small_pane_t1

0xf3fc,	// (0x00046c7e) link_highlight_secondary_pane_g1

0xf404,	// (0x00046c86) link_highlight_secondary_pane_t1

0x2b73,	// (0x0003a3f5) link_highlight_title_pane_g1

0x2b7b,	// (0x0003a3fd) link_highlight_title_pane_t1

0x2b5c,	// (0x0003a3de) link_highlight_digital_pane_g1

0x2b64,	// (0x0003a3e6) link_highlight_digital_pane_t1

0x2a24,	// (0x0003a2a6) copy_highlight_primary_pane_g1

0x2a3b,	// (0x0003a2bd) copy_highlight_primary_pane_t1

0x2a24,	// (0x0003a2a6) copy_highlight_primary_small_pane_g1

0x2a2c,	// (0x0003a2ae) copy_highlight_primary_small_pane_t1

0xf413,	// (0x00046c95) copy_highlight_secondary_pane_g1

0xf41b,	// (0x00046c9d) copy_highlight_secondary_pane_t1

0x2a0d,	// (0x0003a28f) copy_highlight_title_pane_g1

0x2a15,	// (0x0003a297) copy_highlight_title_pane_t1

0x2a24,	// (0x0003a2a6) copy_highlight_digital_pane_g1

0x3d28,	// (0x0003b5aa) copy_highlight_digital_pane_t1

0x3c7c,	// (0x0003b4fe) graphic_text_primary_pane_g1

0x3d0c,	// (0x0003b58e) graphic_text_primary_pane_t1

0x3d1a,	// (0x0003b59c) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004724b) graphic_text_primary_pane_t

0x3ce8,	// (0x0003b56a) graphic_text_primary_small_pane_g1

0x3cf0,	// (0x0003b572) graphic_text_primary_small_pane_t1

0x3cfe,	// (0x0003b580) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00047246) graphic_text_primary_small_pane_t

0x3cc4,	// (0x0003b546) graphic_text_secondary_pane_g1

0x3ccc,	// (0x0003b54e) graphic_text_secondary_pane_t1

0x3cda,	// (0x0003b55c) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00047241) graphic_text_secondary_pane_t

0x3ca0,	// (0x0003b522) graphic_text_title_pane_g1

0x3ca8,	// (0x0003b52a) graphic_text_title_pane_t1

0x3cb6,	// (0x0003b538) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004723c) graphic_text_title_pane_t

0x3c7c,	// (0x0003b4fe) graphic_text_digital_pane_g1

0x3c84,	// (0x0003b506) graphic_text_digital_pane_t1

0x3c92,	// (0x0003b514) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00047237) graphic_text_digital_pane_t

0xb29c,	// (0x00042b1e) navi_icon_pane_srt_ParamLimits

0xb29c,	// (0x00042b1e) navi_icon_pane_srt

0xb240,	// (0x00042ac2) navi_midp_pane_srt

0xb240,	// (0x00042ac2) navi_navi_pane_srt

0xb29c,	// (0x00042b1e) navi_text_pane_srt_ParamLimits

0xb29c,	// (0x00042b1e) navi_text_pane_srt

0x3c47,	// (0x0003b4c9) navi_navi_icon_text_pane_srt

0x3c4f,	// (0x0003b4d1) navi_navi_pane_srt_g1_ParamLimits

0x3c4f,	// (0x0003b4d1) navi_navi_pane_srt_g1

0x3c61,	// (0x0003b4e3) navi_navi_pane_srt_g2_ParamLimits

0x3c61,	// (0x0003b4e3) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00047232) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00047232) navi_navi_pane_srt_g

0x3c73,	// (0x0003b4f5) navi_navi_tabs_pane_srt

0x3c47,	// (0x0003b4c9) navi_navi_text_pane_srt

0x3c47,	// (0x0003b4c9) navi_navi_volume_pane_srt

0x3c38,	// (0x0003b4ba) navi_navi_text_pane_srt_t1

0x0bd4,	// (0x00038456) navi_navi_volume_pane_srt_g1

0x0bdc,	// (0x0003845e) volume_small_pane_srt_ParamLimits

0x0bdc,	// (0x0003845e) volume_small_pane_srt

0xf42a,	// (0x00046cac) volume_small_pane_srt_g1_ParamLimits

0xf42a,	// (0x00046cac) volume_small_pane_srt_g1

0xf43a,	// (0x00046cbc) volume_small_pane_srt_g2_ParamLimits

0xf43a,	// (0x00046cbc) volume_small_pane_srt_g2

0xf44b,	// (0x00046ccd) volume_small_pane_srt_g3_ParamLimits

0xf44b,	// (0x00046ccd) volume_small_pane_srt_g3

0xf45c,	// (0x00046cde) volume_small_pane_srt_g4_ParamLimits

0xf45c,	// (0x00046cde) volume_small_pane_srt_g4

0xf46d,	// (0x00046cef) volume_small_pane_srt_g5_ParamLimits

0xf46d,	// (0x00046cef) volume_small_pane_srt_g5

0xf47e,	// (0x00046d00) volume_small_pane_srt_g6_ParamLimits

0xf47e,	// (0x00046d00) volume_small_pane_srt_g6

0xf48f,	// (0x00046d11) volume_small_pane_srt_g7_ParamLimits

0xf48f,	// (0x00046d11) volume_small_pane_srt_g7

0xf4a0,	// (0x00046d22) volume_small_pane_srt_g8_ParamLimits

0xf4a0,	// (0x00046d22) volume_small_pane_srt_g8

0xf4b1,	// (0x00046d33) volume_small_pane_srt_g9_ParamLimits

0xf4b1,	// (0x00046d33) volume_small_pane_srt_g9

0xf4c2,	// (0x00046d44) volume_small_pane_srt_g10_ParamLimits

0xf4c2,	// (0x00046d44) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00046fdf) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00046fdf) volume_small_pane_srt_g

0xb552,	// (0x00042dd4) query_popup_data_pane_cp2

0x3c1e,	// (0x0003b4a0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3c1e,	// (0x0003b4a0) navi_navi_icon_text_pane_srt_t1

0x2cac,	// (0x0003a52e) navi_tabs_2_long_pane_srt

0x2cac,	// (0x0003a52e) navi_tabs_2_pane_srt

0x2cac,	// (0x0003a52e) navi_tabs_3_long_pane_srt

0x2cac,	// (0x0003a52e) navi_tabs_3_pane_srt

0x2cac,	// (0x0003a52e) navi_tabs_4_pane_srt

0x0bb4,	// (0x00038436) tabs_2_active_pane_srt_ParamLimits

0x0bb4,	// (0x00038436) tabs_2_active_pane_srt

0x0bc4,	// (0x00038446) tabs_2_passive_pane_srt_ParamLimits

0x0bc4,	// (0x00038446) tabs_2_passive_pane_srt

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp1_srt

0x3bea,	// (0x0003b46c) bg_passive_tab_pane_g1_cp1_srt

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp1_srt

0x3bf3,	// (0x0003b475) bg_passive_tab_pane_g3_cp1_srt

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp1_srt_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp1_srt

0x3bfc,	// (0x0003b47e) tabs_2_active_pane_srt_g1

0xc557,	// (0x00043dd9) tabs_2_active_pane_srt_t1_ParamLimits

0xc557,	// (0x00043dd9) tabs_2_active_pane_srt_t1

0x3bea,	// (0x0003b46c) bg_active_tab_pane_g1_cp1_srt

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp1_srt

0x3bf3,	// (0x0003b475) bg_active_tab_pane_g3_cp1_srt

0x0b81,	// (0x00038403) tabs_3_active_pane_srt_ParamLimits

0x0b81,	// (0x00038403) tabs_3_active_pane_srt

0x0b92,	// (0x00038414) tabs_3_passive_pane_cp_srt_ParamLimits

0x0b92,	// (0x00038414) tabs_3_passive_pane_cp_srt

0x0ba3,	// (0x00038425) tabs_3_passive_pane_srt_ParamLimits

0x0ba3,	// (0x00038425) tabs_3_passive_pane_srt

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2482,	// (0x00039d04) bg_passive_tab_pane_cp2_srt

0xf4d3,	// (0x00046d55) bg_passive_tab_pane_g1_cp2_srt

0xee9a,	// (0x0004671c) bg_passive_tab_pane_g2_cp2_srt

0xf4dc,	// (0x00046d5e) bg_passive_tab_pane_g3_cp2_srt

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp2_srt_ParamLimits

0xb28e,	// (0x00042b10) bg_active_tab_pane_cp2_srt

0x3bd0,	// (0x0003b452) tabs_3_active_pane_srt_g1

0xc541,	// (0x00043dc3) tabs_3_active_pane_srt_t1_ParamLimits

0xc541,	// (0x00043dc3) tabs_3_active_pane_srt_t1

0xf4d3,	// (0x00046d55) bg_active_tab_pane_g1_cp2_srt

0xee9a,	// (0x0004671c) bg_active_tab_pane_g2_cp2_srt

0xf4dc,	// (0x00046d5e) bg_active_tab_pane_g3_cp2_srt

0x0b39,	// (0x000383bb) tabs_4_active_pane_srt_ParamLimits

0x0b39,	// (0x000383bb) tabs_4_active_pane_srt

0x0b4b,	// (0x000383cd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b4b,	// (0x000383cd) tabs_4_passive_pane_cp2_srt

0x009d,	// (0x0003791f) aid_size_cell_toolbar

0x37d8,	// (0x0003b05a) main_idle_act_pane_ParamLimits

0x0286,	// (0x00037b08) popup_large_graphic_colour_window_ParamLimits

0xa4ec,	// (0x00041d6e) popup_toolbar_window_ParamLimits

0xa4ec,	// (0x00041d6e) popup_toolbar_window

0xd2c2,	// (0x00044b44) list_single_graphic_2heading_pane_ParamLimits

0xd2c2,	// (0x00044b44) list_single_graphic_2heading_pane

0xbbdb,	// (0x0004345d) aid_size_cell_apps_grid_lsc_pane

0xbbed,	// (0x0004346f) aid_size_cell_apps_grid_prt_pane

0x1ede,	// (0x00039760) bg_wml_button_pane_cp1_ParamLimits

0x1ede,	// (0x00039760) bg_wml_button_pane_cp1

0xc168,	// (0x000439ea) form_midp_field_text_pane_t1_ParamLimits

0x2482,	// (0x00039d04) input_focus_pane_cp050_ParamLimits

0x26bb,	// (0x00039f3d) list_midp_form_text_pane_ParamLimits

0x266d,	// (0x00039eef) input_focus_pane_cp051_ParamLimits

0x2681,	// (0x00039f03) list_midp_choice_pane_ParamLimits

0x253b,	// (0x00039dbd) list_single_2graphic_pane_cp3_ParamLimits

0x253b,	// (0x00039dbd) list_single_2graphic_pane_cp3

0x2551,	// (0x00039dd3) list_single_midp_graphic_pane_ParamLimits

0x2551,	// (0x00039dd3) list_single_midp_graphic_pane

0xecd5,	// (0x00046557) list_single_graphic_2heading_pane_g1_ParamLimits

0xecd5,	// (0x00046557) list_single_graphic_2heading_pane_g1

0xece1,	// (0x00046563) list_single_graphic_2heading_pane_g4_ParamLimits

0xece1,	// (0x00046563) list_single_graphic_2heading_pane_g4

0xeced,	// (0x0004656f) list_single_graphic_2heading_pane_g5_ParamLimits

0xeced,	// (0x0004656f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00047032) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00047032) list_single_graphic_2heading_pane_g

0xecf9,	// (0x0004657b) list_single_graphic_2heading_pane_t1_ParamLimits

0xecf9,	// (0x0004657b) list_single_graphic_2heading_pane_t1

0xed0d,	// (0x0004658f) list_single_graphic_2heading_pane_t2_ParamLimits

0xed0d,	// (0x0004658f) list_single_graphic_2heading_pane_t2

0xed29,	// (0x000465ab) list_single_graphic_2heading_pane_t3_ParamLimits

0xed29,	// (0x000465ab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00047039) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00047039) list_single_graphic_2heading_pane_t

0x234c,	// (0x00039bce) bg_popup_sub_pane_cp2

0x2376,	// (0x00039bf8) grid_toobar_pane

0x06ec,	// (0x00037f6e) cell_toolbar_pane_ParamLimits

0x06ec,	// (0x00037f6e) cell_toolbar_pane

0x23b2,	// (0x00039c34) cell_toolbar_pane_g1_ParamLimits

0x23b2,	// (0x00039c34) cell_toolbar_pane_g1

0x23c6,	// (0x00039c48) cell_toolbar_pane_g2_ParamLimits

0x23c6,	// (0x00039c48) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00047047) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00047047) cell_toolbar_pane_g

0x23e8,	// (0x00039c6a) grid_highlight_pane_cp2_ParamLimits

0x23e8,	// (0x00039c6a) grid_highlight_pane_cp2

0x2402,	// (0x00039c84) toolbar_button_pane

0x240e,	// (0x00039c90) toolbar_button_pane_g1

0x2416,	// (0x00039c98) toolbar_button_pane_g2

0x241e,	// (0x00039ca0) toolbar_button_pane_g3

0x2426,	// (0x00039ca8) toolbar_button_pane_g4

0x242e,	// (0x00039cb0) toolbar_button_pane_g5

0x2436,	// (0x00039cb8) toolbar_button_pane_g6

0x243e,	// (0x00039cc0) toolbar_button_pane_g7

0x2446,	// (0x00039cc8) toolbar_button_pane_g8

0x244e,	// (0x00039cd0) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0004704c) toolbar_button_pane_g

0x0724,	// (0x00037fa6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0724,	// (0x00037fa6) list_single_2graphic_pane_g1_cp3

0xa7c0,	// (0x00042042) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa7c0,	// (0x00042042) list_single_2graphic_pane_g2_cp3

0x0741,	// (0x00037fc3) list_single_2graphic_pane_g3_cp3

0x0749,	// (0x00037fcb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0749,	// (0x00037fcb) list_single_2graphic_pane_g4_cp3

0x0755,	// (0x00037fd7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0755,	// (0x00037fd7) list_single_2graphic_pane_t1_cp3

0x0770,	// (0x00037ff2) list_single_midp_graphic_pane_g2_ParamLimits

0x0770,	// (0x00037ff2) list_single_midp_graphic_pane_g2

0x00a5,	// (0x00037927) aid_zoom_text_primary

0xeccd,	// (0x0004654f) aid_zoom_text_secondary

0x9c26,	// (0x000414a8) status_small_pane_g7_ParamLimits

0x9c26,	// (0x000414a8) status_small_pane_g7

0x9c49,	// (0x000414cb) status_small_pane_t1_ParamLimits

0x8ebf,	// (0x00040741) title_pane_g2

0x0003,

0xf54e,	// (0x00046dd0) title_pane_g

0x915f,	// (0x000409e1) aid_size_cell_colour_1_pane_ParamLimits

0x915f,	// (0x000409e1) aid_size_cell_colour_1_pane

0x9173,	// (0x000409f5) aid_size_cell_colour_2_pane_ParamLimits

0x9173,	// (0x000409f5) aid_size_cell_colour_2_pane

0x9187,	// (0x00040a09) aid_size_cell_colour_3_pane_ParamLimits

0x9187,	// (0x00040a09) aid_size_cell_colour_3_pane

0x919b,	// (0x00040a1d) aid_size_cell_colour_4_pane_ParamLimits

0x919b,	// (0x00040a1d) aid_size_cell_colour_4_pane

0xebc8,	// (0x0004644a) title_pane_stacon_g1_ParamLimits

0xebc8,	// (0x0004644a) title_pane_stacon_g1

0x2a92,	// (0x0003a314) popup_note_wait_window_g3_ParamLimits

0x2a92,	// (0x0003a314) popup_note_wait_window_g3

0x2b09,	// (0x0003a38b) popup_note_wait_window_t5_ParamLimits

0x2b09,	// (0x0003a38b) popup_note_wait_window_t5

0xb240,	// (0x00042ac2) main_feb_china_hwr_fs_writing_pane

0x9e85,	// (0x00041707) popup_feb_china_hwr_fs_window_ParamLimits

0x9e85,	// (0x00041707) popup_feb_china_hwr_fs_window

0xa7d1,	// (0x00042053) aid_size_cell_hwr_fs_ParamLimits

0xa7d1,	// (0x00042053) aid_size_cell_hwr_fs

0x2482,	// (0x00039d04) bg_popup_sub_pane_cp3_ParamLimits

0x2482,	// (0x00039d04) bg_popup_sub_pane_cp3

0xa7e6,	// (0x00042068) grid_hwr_fs_pane_ParamLimits

0xa7e6,	// (0x00042068) grid_hwr_fs_pane

0x07bf,	// (0x00038041) linegrid_hwr_fs_pane_ParamLimits

0x07bf,	// (0x00038041) linegrid_hwr_fs_pane

0xa7fe,	// (0x00042080) cell_hwr_fs_pane_ParamLimits

0xa7fe,	// (0x00042080) cell_hwr_fs_pane

0x248e,	// (0x00039d10) linegrid_hwr_fs_pane_g1_ParamLimits

0x248e,	// (0x00039d10) linegrid_hwr_fs_pane_g1

0xc109,	// (0x0004398b) linegrid_hwr_fs_pane_g2_ParamLimits

0xc109,	// (0x0004398b) linegrid_hwr_fs_pane_g2

0x24ac,	// (0x00039d2e) linegrid_hwr_fs_pane_g3_ParamLimits

0x24ac,	// (0x00039d2e) linegrid_hwr_fs_pane_g3

0x07f3,	// (0x00038075) linegrid_hwr_fs_pane_g4_ParamLimits

0x07f3,	// (0x00038075) linegrid_hwr_fs_pane_g4

0x0811,	// (0x00038093) linegrid_hwr_fs_pane_g5_ParamLimits

0x0811,	// (0x00038093) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00047072) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00047072) linegrid_hwr_fs_pane_g

0x24b8,	// (0x00039d3a) cell_hwr_fs_pane_g1_ParamLimits

0x24b8,	// (0x00039d3a) cell_hwr_fs_pane_g1

0x2287,	// (0x00039b09) cell_hwr_fs_pane_g2_ParamLimits

0x2287,	// (0x00039b09) cell_hwr_fs_pane_g2

0xc11b,	// (0x0004399d) cell_hwr_fs_pane_g3_ParamLimits

0xc11b,	// (0x0004399d) cell_hwr_fs_pane_g3

0xc128,	// (0x000439aa) cell_hwr_fs_pane_g4_ParamLimits

0xc128,	// (0x000439aa) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0004707d) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004707d) cell_hwr_fs_pane_g

0xa824,	// (0x000420a6) cell_hwr_fs_pane_t1

0xb240,	// (0x00042ac2) grid_highlight_pane_cp6

0xb240,	// (0x00042ac2) main_idle_act2_pane

0xb9ea,	// (0x0004326c) aid_inside_area_popup_secondary

0xc1e0,	// (0x00043a62) aid_inside_area_window_primary_ParamLimits

0xc1e0,	// (0x00043a62) aid_inside_area_window_primary

0x3d37,	// (0x0003b5b9) ai2_news_ticker_pane

0x3d3f,	// (0x0003b5c1) aid_size_cell_ai1_link_ParamLimits

0x3d3f,	// (0x0003b5c1) aid_size_cell_ai1_link

0x3d59,	// (0x0003b5db) popup_ai2_data_window_ParamLimits

0x3d59,	// (0x0003b5db) popup_ai2_data_window

0x3d77,	// (0x0003b5f9) popup_ai2_link_window_ParamLimits

0x3d77,	// (0x0003b5f9) popup_ai2_link_window

0x2482,	// (0x00039d04) bg_popup_sub_pane_cp4_ParamLimits

0x2482,	// (0x00039d04) bg_popup_sub_pane_cp4

0x3d8d,	// (0x0003b60f) grid_ai2_link_pane_ParamLimits

0x3d8d,	// (0x0003b60f) grid_ai2_link_pane

0x3da4,	// (0x0003b626) popup_ai2_link_window_g1_ParamLimits

0x3da4,	// (0x0003b626) popup_ai2_link_window_g1

0x3db0,	// (0x0003b632) popup_ai2_link_window_g2_ParamLimits

0x3db0,	// (0x0003b632) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00047250) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00047250) popup_ai2_link_window_g

0x3dc1,	// (0x0003b643) ai2_mp_button_pane

0x3dc9,	// (0x0003b64b) ai2_mp_volume_pane

0x266d,	// (0x00039eef) bg_popup_sub_pane_cp5_ParamLimits

0x266d,	// (0x00039eef) bg_popup_sub_pane_cp5

0x3dd1,	// (0x0003b653) heading_ai2_gene_pane_ParamLimits

0x3dd1,	// (0x0003b653) heading_ai2_gene_pane

0x3ddd,	// (0x0003b65f) list_ai2_gene_pane_ParamLimits

0x3ddd,	// (0x0003b65f) list_ai2_gene_pane

0x3e25,	// (0x0003b6a7) cell_ai2_link_pane_ParamLimits

0x3e25,	// (0x0003b6a7) cell_ai2_link_pane

0x3e3b,	// (0x0003b6bd) cell_ai2_link_pane_g1

0xb240,	// (0x00042ac2) grid_highlight_pane_cp7

0x0bf1,	// (0x00038473) ai2_mp_volume_pane_g1

0x3f0e,	// (0x0003b790) ai2_mp_volume_pane_g2

0x3e83,	// (0x0003b705) list_ai2_gene_pane_t1

0x3f16,	// (0x0003b798) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00047269) ai2_mp_volume_pane_g

0x0bf9,	// (0x0003847b) volume_small_pane_cp3

0x3f1e,	// (0x0003b7a0) aid_size_cell_ai2_button

0x3f26,	// (0x0003b7a8) grid_ai2_button_pane

0x3f2f,	// (0x0003b7b1) cell_ai2_button_pane_ParamLimits

0x3f2f,	// (0x0003b7b1) cell_ai2_button_pane

0xb236,	// (0x00042ab8) cell_ai2_button_pane_g1

0xb240,	// (0x00042ac2) grid_highlight_pane_cp8

0x3ece,	// (0x0003b750) ai2_gene_pane_t1_ParamLimits

0x3ece,	// (0x0003b750) ai2_gene_pane_t1

0x9e15,	// (0x00041697) aid_height_parent_landscape

0xc387,	// (0x00043c09) aid_height_set_list

0x37d8,	// (0x0003b05a) aid_size_parent

0xc515,	// (0x00043d97) aid_size_cell_graphic_pane_ParamLimits

0x3ded,	// (0x0003b66f) popup_ai2_data_window_g1_ParamLimits

0x3ded,	// (0x0003b66f) popup_ai2_data_window_g1

0x3df9,	// (0x0003b67b) ai2_news_ticker_pane_g1

0x3e01,	// (0x0003b683) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00047255) ai2_news_ticker_pane_g

0x3e09,	// (0x0003b68b) ai2_news_ticker_pane_t1

0x3e17,	// (0x0003b699) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004725a) ai2_news_ticker_pane_t

0x3e44,	// (0x0003b6c6) heading_ai2_gene_pane_g1

0x3e4c,	// (0x0003b6ce) heading_ai2_gene_pane_t1_ParamLimits

0x3e4c,	// (0x0003b6ce) heading_ai2_gene_pane_t1

0x3e61,	// (0x0003b6e3) list_highlight_pane_cp6

0x3e69,	// (0x0003b6eb) ai2_gene_pane_ParamLimits

0x3e69,	// (0x0003b6eb) ai2_gene_pane

0x3e91,	// (0x0003b713) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0004725f) list_ai2_gene_pane_t

0x3e9f,	// (0x0003b721) list_highlight_pane_cp8_ParamLimits

0x3e9f,	// (0x0003b721) list_highlight_pane_cp8

0x3eb0,	// (0x0003b732) ai2_gene_pane_g1_ParamLimits

0x3eb0,	// (0x0003b732) ai2_gene_pane_g1

0x3ec2,	// (0x0003b744) ai2_gene_pane_g2_ParamLimits

0x3ec2,	// (0x0003b744) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00047264) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00047264) ai2_gene_pane_g

0xb870,	// (0x000430f2) scroll_pane_cp12

0x9dd2,	// (0x00041654) control_pane_t3_ParamLimits

0x9dd2,	// (0x00041654) control_pane_t3

0x9c3a,	// (0x000414bc) status_small_pane_g8_ParamLimits

0x9c3a,	// (0x000414bc) status_small_pane_g8

0x9f27,	// (0x000417a9) popup_find_window_ParamLimits

0xa1d8,	// (0x00041a5a) popup_note_image_window_ParamLimits

0xd01d,	// (0x0004489f) list_double2_graphic_pane_vc_g1_ParamLimits

0xd01d,	// (0x0004489f) list_double2_graphic_pane_vc_g1

0xd1bf,	// (0x00044a41) list_double2_graphic_pane_vc_g2_ParamLimits

0xd1bf,	// (0x00044a41) list_double2_graphic_pane_vc_g2

0xd1cb,	// (0x00044a4d) list_double2_graphic_pane_vc_g3_ParamLimits

0xd1cb,	// (0x00044a4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00047040) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00047040) list_double2_graphic_pane_vc_g

0xd1d7,	// (0x00044a59) list_double2_graphic_pane_vc_t1_ParamLimits

0xd1d7,	// (0x00044a59) list_double2_graphic_pane_vc_t1

0xcfe1,	// (0x00044863) list_single_heading_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_heading_pane_vc_g1

0xcfed,	// (0x0004486f) list_single_heading_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_heading_pane_vc_g

0xd1ed,	// (0x00044a6f) list_single_heading_pane_vc_t1_ParamLimits

0xd1ed,	// (0x00044a6f) list_single_heading_pane_vc_t1

0xd203,	// (0x00044a85) list_single_heading_pane_vc_t2_ParamLimits

0xd203,	// (0x00044a85) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00047061) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00047061) list_single_heading_pane_vc_t

0xd215,	// (0x00044a97) list_setting_number_pane_vc_g1_ParamLimits

0xd215,	// (0x00044a97) list_setting_number_pane_vc_g1

0xd221,	// (0x00044aa3) list_setting_number_pane_vc_g2_ParamLimits

0xd221,	// (0x00044aa3) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00047066) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00047066) list_setting_number_pane_vc_g

0xd22d,	// (0x00044aaf) list_setting_number_pane_vc_t1_ParamLimits

0xd22d,	// (0x00044aaf) list_setting_number_pane_vc_t1

0xd241,	// (0x00044ac3) list_setting_number_pane_vc_t2_ParamLimits

0xd241,	// (0x00044ac3) list_setting_number_pane_vc_t2

0xd25d,	// (0x00044adf) list_setting_number_pane_vc_t3_ParamLimits

0xd25d,	// (0x00044adf) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0004706b) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004706b) list_setting_number_pane_vc_t

0xd28b,	// (0x00044b0d) set_value_pane_vc_ParamLimits

0xd28b,	// (0x00044b0d) set_value_pane_vc

0xd2c2,	// (0x00044b44) list_double2_graphic_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double2_graphic_pane_vc

0x39bf,	// (0x0003b241) list_double2_large_graphic_pane_vc_ParamLimits

0x39bf,	// (0x0003b241) list_double2_large_graphic_pane_vc

0xd2c2,	// (0x00044b44) list_double2_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double2_pane_vc

0xd2c2,	// (0x00044b44) list_double_graphic_heading_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_graphic_heading_pane_vc

0xd2c2,	// (0x00044b44) list_double_graphic_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_graphic_pane_vc

0xd2c2,	// (0x00044b44) list_double_heading_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_heading_pane_vc

0x39d3,	// (0x0003b255) list_double_large_graphic_pane_vc_ParamLimits

0x39d3,	// (0x0003b255) list_double_large_graphic_pane_vc

0xd2c2,	// (0x00044b44) list_double_number_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_number_pane_vc

0xd2c2,	// (0x00044b44) list_double_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_pane_vc

0xd2c2,	// (0x00044b44) list_double_time_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_double_time_pane_vc

0xd2c2,	// (0x00044b44) list_setting_number_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_setting_number_pane_vc

0xd2c2,	// (0x00044b44) list_setting_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_setting_pane_vc

0xd2c2,	// (0x00044b44) list_single_graphic_heading_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_single_graphic_heading_pane_vc

0xd2c2,	// (0x00044b44) list_single_heading_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_single_heading_pane_vc

0xd2c2,	// (0x00044b44) list_single_number_heading_pane_vc_ParamLimits

0xd2c2,	// (0x00044b44) list_single_number_heading_pane_vc

0xd01d,	// (0x0004489f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd01d,	// (0x0004489f) list_double_graphic_heading_pane_vc_g1

0xcfe1,	// (0x00044863) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xcfe1,	// (0x00044863) list_double_graphic_heading_pane_vc_g2

0xcfed,	// (0x0004486f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xcfed,	// (0x0004486f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00047270) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00047270) list_double_graphic_heading_pane_vc_g

0xd2d7,	// (0x00044b59) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd2d7,	// (0x00044b59) list_double_graphic_heading_pane_vc_t1

0xd2ed,	// (0x00044b6f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd2ed,	// (0x00044b6f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00047277) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00047277) list_double_graphic_heading_pane_vc_t

0xd215,	// (0x00044a97) list_setting_pane_vc_g1_ParamLimits

0xd215,	// (0x00044a97) list_setting_pane_vc_g1

0xd221,	// (0x00044aa3) list_setting_pane_vc_g2_ParamLimits

0xd221,	// (0x00044aa3) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00047066) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00047066) list_setting_pane_vc_g

0xd30b,	// (0x00044b8d) list_setting_pane_vc_t1_ParamLimits

0xd30b,	// (0x00044b8d) list_setting_pane_vc_t1

0xd327,	// (0x00044ba9) list_setting_pane_vc_t2_ParamLimits

0xd327,	// (0x00044ba9) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x000472ba) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x000472ba) list_setting_pane_vc_t

0xd28b,	// (0x00044b0d) set_value_pane_cp_vc_ParamLimits

0xd28b,	// (0x00044b0d) set_value_pane_cp_vc

0xcfe1,	// (0x00044863) list_single_number_heading_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_single_number_heading_pane_vc_g1

0xcfed,	// (0x0004486f) list_single_number_heading_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_single_number_heading_pane_vc_g

0xd343,	// (0x00044bc5) list_single_number_heading_pane_vc_t1_ParamLimits

0xd343,	// (0x00044bc5) list_single_number_heading_pane_vc_t1

0xcff9,	// (0x0004487b) list_single_number_heading_pane_vc_t2_ParamLimits

0xcff9,	// (0x0004487b) list_single_number_heading_pane_vc_t2

0xd00b,	// (0x0004488d) list_single_number_heading_pane_vc_t3_ParamLimits

0xd00b,	// (0x0004488d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x000472bf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000472bf) list_single_number_heading_pane_vc_t

0xd01d,	// (0x0004489f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd01d,	// (0x0004489f) list_single_graphic_heading_pane_vc_g1

0xcfe1,	// (0x00044863) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xcfe1,	// (0x00044863) list_single_graphic_heading_pane_vc_g4

0xcfed,	// (0x0004486f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xcfed,	// (0x0004486f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00047270) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00047270) list_single_graphic_heading_pane_vc_g

0xd343,	// (0x00044bc5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd343,	// (0x00044bc5) list_single_graphic_heading_pane_vc_t1

0xd359,	// (0x00044bdb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd359,	// (0x00044bdb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x000472c6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x000472c6) list_single_graphic_heading_pane_vc_t

0xcfe1,	// (0x00044863) list_double2_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_double2_pane_vc_g1

0xcfed,	// (0x0004486f) list_double2_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_double2_pane_vc_g

0xd2ac,	// (0x00044b2e) list_double2_pane_vc_t1_ParamLimits

0xd2ac,	// (0x00044b2e) list_double2_pane_vc_t1

0xd029,	// (0x000448ab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd029,	// (0x000448ab) list_double2_large_graphic_pane_vc_g1

0xd035,	// (0x000448b7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd035,	// (0x000448b7) list_double2_large_graphic_pane_vc_g2

0xd041,	// (0x000448c3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd041,	// (0x000448c3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00046e67) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00046e67) list_double2_large_graphic_pane_vc_g

0xd04d,	// (0x000448cf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd04d,	// (0x000448cf) list_double2_large_graphic_pane_vc_t1

0xd36b,	// (0x00044bed) list_double_time_pane_vc_g1_ParamLimits

0xd36b,	// (0x00044bed) list_double_time_pane_vc_g1

0xd377,	// (0x00044bf9) list_double_time_pane_vc_g2_ParamLimits

0xd377,	// (0x00044bf9) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x000472cb) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x000472cb) list_double_time_pane_vc_g

0xd383,	// (0x00044c05) list_double_time_pane_vc_t1_ParamLimits

0xd383,	// (0x00044c05) list_double_time_pane_vc_t1

0xd3ad,	// (0x00044c2f) list_double_time_pane_vc_t2_ParamLimits

0xd3ad,	// (0x00044c2f) list_double_time_pane_vc_t2

0xd3f6,	// (0x00044c78) list_double_time_pane_vc_t3_ParamLimits

0xd3f6,	// (0x00044c78) list_double_time_pane_vc_t3

0xd408,	// (0x00044c8a) list_double_time_pane_vc_t4_ParamLimits

0xd408,	// (0x00044c8a) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x000472d0) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x000472d0) list_double_time_pane_vc_t

0xcfe1,	// (0x00044863) list_double_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_double_pane_vc_g1

0xcfed,	// (0x0004486f) list_double_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_double_pane_vc_g

0xd41c,	// (0x00044c9e) list_double_pane_vc_t1_ParamLimits

0xd41c,	// (0x00044c9e) list_double_pane_vc_t1

0xd430,	// (0x00044cb2) list_double_pane_vc_t2_ParamLimits

0xd430,	// (0x00044cb2) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x000472d9) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x000472d9) list_double_pane_vc_t

0xcfe1,	// (0x00044863) list_double_number_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_double_number_pane_vc_g1

0xcfed,	// (0x0004486f) list_double_number_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_double_number_pane_vc_g

0xd446,	// (0x00044cc8) list_double_number_pane_vc_t1_ParamLimits

0xd446,	// (0x00044cc8) list_double_number_pane_vc_t1

0xd458,	// (0x00044cda) list_double_number_pane_vc_t2_ParamLimits

0xd458,	// (0x00044cda) list_double_number_pane_vc_t2

0xd430,	// (0x00044cb2) list_double_number_pane_vc_t3_ParamLimits

0xd430,	// (0x00044cb2) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x000472de) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x000472de) list_double_number_pane_vc_t

0xd46c,	// (0x00044cee) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd46c,	// (0x00044cee) list_double_large_graphic_pane_vc_g1

0xd48e,	// (0x00044d10) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd48e,	// (0x00044d10) list_double_large_graphic_pane_vc_g2

0xd4a2,	// (0x00044d24) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd4a2,	// (0x00044d24) list_double_large_graphic_pane_vc_g3

0xd4b1,	// (0x00044d33) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd4b1,	// (0x00044d33) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x000472e5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x000472e5) list_double_large_graphic_pane_vc_g

0xd4c0,	// (0x00044d42) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd4c0,	// (0x00044d42) list_double_large_graphic_pane_vc_t1

0xd4dc,	// (0x00044d5e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd4dc,	// (0x00044d5e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x000472ee) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x000472ee) list_double_large_graphic_pane_vc_t

0xcfe1,	// (0x00044863) list_double_heading_pane_vc_g1_ParamLimits

0xcfe1,	// (0x00044863) list_double_heading_pane_vc_g1

0xcfed,	// (0x0004486f) list_double_heading_pane_vc_g2_ParamLimits

0xcfed,	// (0x0004486f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00046e4a) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00046e4a) list_double_heading_pane_vc_g

0xd4fc,	// (0x00044d7e) list_double_heading_pane_vc_t1_ParamLimits

0xd4fc,	// (0x00044d7e) list_double_heading_pane_vc_t1

0xd50e,	// (0x00044d90) list_double_heading_pane_vc_t2_ParamLimits

0xd50e,	// (0x00044d90) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x000472f3) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x000472f3) list_double_heading_pane_vc_t

0xd526,	// (0x00044da8) list_double_graphic_pane_vc_g1_ParamLimits

0xd526,	// (0x00044da8) list_double_graphic_pane_vc_g1

0xd539,	// (0x00044dbb) list_double_graphic_pane_vc_g2_ParamLimits

0xd539,	// (0x00044dbb) list_double_graphic_pane_vc_g2

0xcfe1,	// (0x00044863) list_double_graphic_pane_vc_g3_ParamLimits

0xcfe1,	// (0x00044863) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x000472f8) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x000472f8) list_double_graphic_pane_vc_g

0xd556,	// (0x00044dd8) list_double_graphic_pane_vc_t1_ParamLimits

0xd556,	// (0x00044dd8) list_double_graphic_pane_vc_t1

0xd580,	// (0x00044e02) list_double_graphic_pane_vc_t2_ParamLimits

0xd580,	// (0x00044e02) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00047301) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00047301) list_double_graphic_pane_vc_t

0xe944,	// (0x000461c6) aid_size_cell_fastswap

0x8c98,	// (0x0004051a) aid_size_cell_touch_ParamLimits

0x8c98,	// (0x0004051a) aid_size_cell_touch

0xeacb,	// (0x0004634d) popup_fast_swap_wide_window_ParamLimits

0xeacb,	// (0x0004634d) popup_fast_swap_wide_window

0x8e56,	// (0x000406d8) touch_pane_ParamLimits

0x8e56,	// (0x000406d8) touch_pane

0xb8c6,	// (0x00043148) button_value_adjust_pane_cp2

0xd0b6,	// (0x00044938) button_value_adjust_pane_cp4

0xd0be,	// (0x00044940) form_field_data_pane_cp2

0x9698,	// (0x00040f1a) form_field_data_wide_pane_cp2

0xbc12,	// (0x00043494) bg_scroll_pane_ParamLimits

0xed98,	// (0x0004661a) scroll_handle_pane_ParamLimits

0xedac,	// (0x0004662e) scroll_sc2_down_pane_ParamLimits

0xedac,	// (0x0004662e) scroll_sc2_down_pane

0xbc43,	// (0x000434c5) scroll_sc2_up_pane_ParamLimits

0xbc43,	// (0x000434c5) scroll_sc2_up_pane

0xc689,	// (0x00043f0b) grid_wheel_folder_pane_g1_ParamLimits

0xc689,	// (0x00043f0b) grid_wheel_folder_pane_g1

0xef9e,	// (0x00046820) clock_nsta_pane_cp2_ParamLimits

0xef9e,	// (0x00046820) clock_nsta_pane_cp2

0x9b18,	// (0x0004139a) listscroll_midp_pane_ParamLimits

0x9b24,	// (0x000413a6) midp_canvas_pane

0x1eae,	// (0x00039730) nsta_clock_indic_pane

0x1eea,	// (0x0003976c) listscroll_form_pane_vc

0x1ef2,	// (0x00039774) listscroll_set_pane_vc_ParamLimits

0x1ef2,	// (0x00039774) listscroll_set_pane_vc

0xa652,	// (0x00041ed4) clock_nsta_pane

0xa67c,	// (0x00041efe) indicator_nsta_pane

0x234c,	// (0x00039bce) bg_popup_sub_pane_cp2_ParamLimits

0x2360,	// (0x00039be2) find_pane_cp2_ParamLimits

0x2360,	// (0x00039be2) find_pane_cp2

0x2376,	// (0x00039bf8) grid_toobar_pane_ParamLimits

0x2456,	// (0x00039cd8) list_form_gen_pane_vc_ParamLimits

0x2456,	// (0x00039cd8) list_form_gen_pane_vc

0x246c,	// (0x00039cee) scroll_pane_cp8_vc_ParamLimits

0x246c,	// (0x00039cee) scroll_pane_cp8_vc

0x24e8,	// (0x00039d6a) data_form_wide_pane_vc_ParamLimits

0x24e8,	// (0x00039d6a) data_form_wide_pane_vc

0x24f4,	// (0x00039d76) form_field_data_wide_pane_vc_g1

0x24fc,	// (0x00039d7e) form_field_data_wide_pane_vc_t1_ParamLimits

0x24fc,	// (0x00039d7e) form_field_data_wide_pane_vc_t1

0xb8da,	// (0x0004315c) input_focus_pane_cp6_vc_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_cp6_vc

0x2818,	// (0x0003a09a) list_midp_pane_ParamLimits

0x3bc4,	// (0x0003b446) scroll_pane_cp16_ParamLimits

0x3bc4,	// (0x0003b446) scroll_pane_cp16

0x2866,	// (0x0003a0e8) button_value_adjust_pane_ParamLimits

0x2866,	// (0x0003a0e8) button_value_adjust_pane

0xc398,	// (0x00043c1a) button_value_adjust_pane_cp6_ParamLimits

0xc398,	// (0x00043c1a) button_value_adjust_pane_cp6

0xc412,	// (0x00043c94) settings_code_pane_cp_ParamLimits

0xc412,	// (0x00043c94) settings_code_pane_cp

0xb236,	// (0x00042ab8) cell_touch_pane_g1

0xb236,	// (0x00042ab8) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00046f85) cell_touch_pane_g

0xc56d,	// (0x00043def) cell_touch_pane_cp_ParamLimits

0xc56d,	// (0x00043def) cell_touch_pane_cp

0xc589,	// (0x00043e0b) cell_touch_pane_ParamLimits

0xc589,	// (0x00043e0b) cell_touch_pane

0xb236,	// (0x00042ab8) scroll_sc2_down_pane_g1

0xb236,	// (0x00042ab8) scroll_sc2_up_pane_g1

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp4_vc

0x3f62,	// (0x0003b7e4) list_set_graphic_pane_vc_g1_ParamLimits

0x3f62,	// (0x0003b7e4) list_set_graphic_pane_vc_g1

0x3f6e,	// (0x0003b7f0) list_set_graphic_pane_vc_g2_ParamLimits

0x3f6e,	// (0x0003b7f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0004727c) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0004727c) list_set_graphic_pane_vc_g

0x3f7a,	// (0x0003b7fc) text_primary_small_cp13_vc_ParamLimits

0x3f7a,	// (0x0003b7fc) text_primary_small_cp13_vc

0xf034,	// (0x000468b6) list_set_graphic_pane_vc_ParamLimits

0xf034,	// (0x000468b6) list_set_graphic_pane_vc

0xb240,	// (0x00042ac2) input_focus_pane_cp2_vc

0xb236,	// (0x00042ab8) setting_code_pane_vc_g1

0xb2b3,	// (0x00042b35) setting_code_pane_vc_t1

0x3f92,	// (0x0003b814) set_text_pane_vc_t1_ParamLimits

0x3f92,	// (0x0003b814) set_text_pane_vc_t1

0xb240,	// (0x00042ac2) input_focus_pane_cp1_vc

0x3fb0,	// (0x0003b832) list_set_text_pane_vc

0xb236,	// (0x00042ab8) setting_text_pane_vc_g1

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp2_vc

0xb2aa,	// (0x00042b2c) setting_slider_graphic_pane_vc_g1

0x3fba,	// (0x0003b83c) setting_slider_graphic_pane_vc_t1

0x3fcc,	// (0x0003b84e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00047281) setting_slider_graphic_pane_vc_t

0x3fde,	// (0x0003b860) slider_set_pane_cp_vc

0x3fe8,	// (0x0003b86a) slider_set_pane_vc_g1

0x3ff1,	// (0x0003b873) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00047286) slider_set_pane_vc_g

0xb932,	// (0x000431b4) set_opt_bg_pane_g1_copy1

0xb93a,	// (0x000431bc) set_opt_bg_pane_g2_copy1

0x401d,	// (0x0003b89f) set_opt_bg_pane_g3_copy1

0xb94a,	// (0x000431cc) set_opt_bg_pane_g4_copy1

0xb952,	// (0x000431d4) set_opt_bg_pane_g5_copy1

0xb95a,	// (0x000431dc) set_opt_bg_pane_g6_copy1

0x4027,	// (0x0003b8a9) set_opt_bg_pane_g7_copy1

0x4031,	// (0x0003b8b3) set_opt_bg_pane_g8_copy1

0x403b,	// (0x0003b8bd) set_opt_bg_pane_g9_copy1

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp_vc

0x4045,	// (0x0003b8c7) setting_slider_pane_vc_t1

0x4054,	// (0x0003b8d6) setting_slider_pane_vc_t2

0x4066,	// (0x0003b8e8) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00047295) setting_slider_pane_vc_t

0x4078,	// (0x0003b8fa) slider_set_pane_vc

0x0855,	// (0x000380d7) volume_set_pane_vc_g1

0x085e,	// (0x000380e0) volume_set_pane_vc_g2

0x0867,	// (0x000380e9) volume_set_pane_vc_g3

0x0870,	// (0x000380f2) volume_set_pane_vc_g4

0x0879,	// (0x000380fb) volume_set_pane_vc_g5

0x0882,	// (0x00038104) volume_set_pane_vc_g6

0x088b,	// (0x0003810d) volume_set_pane_vc_g7

0x0894,	// (0x00038116) volume_set_pane_vc_g8

0x089d,	// (0x0003811f) volume_set_pane_vc_g9

0x08a6,	// (0x00038128) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0004729c) volume_set_pane_vc_g

0x4080,	// (0x0003b902) volume_set_pane_vc

0x408a,	// (0x0003b90c) button_value_adjust_pane_cp1_vc

0x4094,	// (0x0003b916) list_highlight_pane_cp2_vc

0x409d,	// (0x0003b91f) list_set_pane_vc_ParamLimits

0x409d,	// (0x0003b91f) list_set_pane_vc

0x410b,	// (0x0003b98d) main_pane_set_vc_t1_ParamLimits

0x410b,	// (0x0003b98d) main_pane_set_vc_t1

0x4120,	// (0x0003b9a2) main_pane_set_vc_t2_ParamLimits

0x4120,	// (0x0003b9a2) main_pane_set_vc_t2

0x4132,	// (0x0003b9b4) main_pane_set_vc_t3_ParamLimits

0x4132,	// (0x0003b9b4) main_pane_set_vc_t3

0x4146,	// (0x0003b9c8) main_pane_set_vc_t4_ParamLimits

0x4146,	// (0x0003b9c8) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x000472b1) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x000472b1) main_pane_set_vc_t

0x415a,	// (0x0003b9dc) setting_code_pane_vc_ParamLimits

0x415a,	// (0x0003b9dc) setting_code_pane_vc

0x416b,	// (0x0003b9ed) setting_slider_graphic_pane_vc

0x416b,	// (0x0003b9ed) setting_slider_pane_vc

0x416b,	// (0x0003b9ed) setting_text_pane_vc

0x416b,	// (0x0003b9ed) setting_volume_pane_vc

0x4175,	// (0x0003b9f7) scroll_pane_cp121_vc

0xb8b4,	// (0x00043136) set_content_pane_vc

0x417d,	// (0x0003b9ff) button_value_adjust_pane_g1

0x4186,	// (0x0003ba08) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00047306) button_value_adjust_pane_g

0x418f,	// (0x0003ba11) form_field_slider_wide_pane_vc_t1_ParamLimits

0x418f,	// (0x0003ba11) form_field_slider_wide_pane_vc_t1

0x41a1,	// (0x0003ba23) form_field_slider_wide_pane_vc_t2_ParamLimits

0x41a1,	// (0x0003ba23) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0004730b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004730b) form_field_slider_wide_pane_vc_t

0xb28e,	// (0x00042b10) input_focus_pane_cp10_vc_ParamLimits

0xb28e,	// (0x00042b10) input_focus_pane_cp10_vc

0x41cd,	// (0x0003ba4f) slider_cont_pane_cp1_vc_ParamLimits

0x41cd,	// (0x0003ba4f) slider_cont_pane_cp1_vc

0x41df,	// (0x0003ba61) slider_form_pane_g1_cp2

0x3ff1,	// (0x0003b873) slider_form_pane_g2_cp2

0x420c,	// (0x0003ba8e) form_field_slider_pane_vc_t3

0x421a,	// (0x0003ba9c) form_field_slider_pane_vc_t4

0x4228,	// (0x0003baaa) slider_form_pane_vc_ParamLimits

0x4228,	// (0x0003baaa) slider_form_pane_vc

0x4235,	// (0x0003bab7) form_field_slider_pane_vc_t1_ParamLimits

0x4235,	// (0x0003bab7) form_field_slider_pane_vc_t1

0x41a1,	// (0x0003ba23) form_field_slider_pane_vc_t2_ParamLimits

0x41a1,	// (0x0003ba23) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0004731d) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0004731d) form_field_slider_pane_vc_t

0xb28e,	// (0x00042b10) input_focus_pane_cp9_vc_ParamLimits

0xb28e,	// (0x00042b10) input_focus_pane_cp9_vc

0x424b,	// (0x0003bacd) slider_cont_pane_vc_ParamLimits

0x424b,	// (0x0003bacd) slider_cont_pane_vc

0x425f,	// (0x0003bae1) list_form_graphic_pane_cp_vc_ParamLimits

0x425f,	// (0x0003bae1) list_form_graphic_pane_cp_vc

0x24f4,	// (0x00039d76) form_field_popup_wide_pane_vc_g1

0x4274,	// (0x0003baf6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4274,	// (0x0003baf6) form_field_popup_wide_pane_vc_t1

0xb8da,	// (0x0004315c) input_focus_pane_cp8_vc_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_cp8_vc

0x42b9,	// (0x0003bb3b) list_form_wide_pane_vc_ParamLimits

0x42b9,	// (0x0003bb3b) list_form_wide_pane_vc

0x42c5,	// (0x0003bb47) list_form_graphic_pane_vc_g1

0x42cd,	// (0x0003bb4f) list_form_graphic_pane_vc_t1_ParamLimits

0x42cd,	// (0x0003bb4f) list_form_graphic_pane_vc_t1

0xb29c,	// (0x00042b1e) list_highlight_pane_cp5_vc_ParamLimits

0xb29c,	// (0x00042b1e) list_highlight_pane_cp5_vc

0x42e9,	// (0x0003bb6b) list_form_graphic_pane_vc_ParamLimits

0x42e9,	// (0x0003bb6b) list_form_graphic_pane_vc

0x24f4,	// (0x00039d76) form_field_popup_pane_vc_g1

0x42ff,	// (0x0003bb81) form_field_popup_pane_vc_t1_ParamLimits

0x42ff,	// (0x0003bb81) form_field_popup_pane_vc_t1

0xb8da,	// (0x0004315c) input_focus_pane_cp7_vc_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_cp7_vc

0x4316,	// (0x0003bb98) list_form_pane_vc_ParamLimits

0x4316,	// (0x0003bb98) list_form_pane_vc

0x4322,	// (0x0003bba4) data_form_pane_vc_t1_ParamLimits

0x4322,	// (0x0003bba4) data_form_pane_vc_t1

0xb932,	// (0x000431b4) input_focus_pane_vc_g1

0xb93a,	// (0x000431bc) input_focus_pane_vc_g2

0xb942,	// (0x000431c4) input_focus_pane_vc_g3

0xb94a,	// (0x000431cc) input_focus_pane_vc_g4

0xb952,	// (0x000431d4) input_focus_pane_vc_g5

0xb95a,	// (0x000431dc) input_focus_pane_vc_g6

0xb962,	// (0x000431e4) input_focus_pane_vc_g7

0xb96a,	// (0x000431ec) input_focus_pane_vc_g8

0xb972,	// (0x000431f4) input_focus_pane_vc_g9

0xb236,	// (0x00042ab8) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00046f0e) input_focus_pane_vc_g

0x24e8,	// (0x00039d6a) data_form_pane_vc_ParamLimits

0x24e8,	// (0x00039d6a) data_form_pane_vc

0x24f4,	// (0x00039d76) form_field_data_pane_vc_g1

0x433f,	// (0x0003bbc1) form_field_data_pane_vc_t1_ParamLimits

0x433f,	// (0x0003bbc1) form_field_data_pane_vc_t1

0xb8da,	// (0x0004315c) input_focus_pane_vc_ParamLimits

0xb8da,	// (0x0004315c) input_focus_pane_vc

0x4359,	// (0x0003bbdb) button_value_adjust_pane_cp3_vc

0x4361,	// (0x0003bbe3) button_value_adjust_pane_cp5_vc

0x4369,	// (0x0003bbeb) form_field_data_pane_vc_ParamLimits

0x4369,	// (0x0003bbeb) form_field_data_pane_vc

0x4384,	// (0x0003bc06) form_field_data_pane_vc_cp2

0x438c,	// (0x0003bc0e) form_field_data_wide_pane_vc_ParamLimits

0x438c,	// (0x0003bc0e) form_field_data_wide_pane_vc

0x43a6,	// (0x0003bc28) form_field_data_wide_pane_vc_cp2

0x43ae,	// (0x0003bc30) form_field_popup_pane_vc_ParamLimits

0x43ae,	// (0x0003bc30) form_field_popup_pane_vc

0x43c9,	// (0x0003bc4b) form_field_popup_wide_pane_vc_ParamLimits

0x43c9,	// (0x0003bc4b) form_field_popup_wide_pane_vc

0x43e3,	// (0x0003bc65) form_field_slider_pane_vc_ParamLimits

0x43e3,	// (0x0003bc65) form_field_slider_pane_vc

0x43f6,	// (0x0003bc78) form_field_slider_wide_pane_vc_ParamLimits

0x43f6,	// (0x0003bc78) form_field_slider_wide_pane_vc

0xc5a7,	// (0x00043e29) grid_touch_1_pane_ParamLimits

0xc5a7,	// (0x00043e29) grid_touch_1_pane

0xc5bb,	// (0x00043e3d) grid_touch_2_pane_ParamLimits

0xc5bb,	// (0x00043e3d) grid_touch_2_pane

0x44c6,	// (0x0003bd48) touch_pane_g1_ParamLimits

0x44c6,	// (0x0003bd48) touch_pane_g1

0x442f,	// (0x0003bcb1) cell_app_pane_cp_wide_ParamLimits

0x442f,	// (0x0003bcb1) cell_app_pane_cp_wide

0x4440,	// (0x0003bcc2) grid_popup_fast_wide_pane_ParamLimits

0x4440,	// (0x0003bcc2) grid_popup_fast_wide_pane

0x4454,	// (0x0003bcd6) scroll_pane_cp19_ParamLimits

0x4454,	// (0x0003bcd6) scroll_pane_cp19

0xb240,	// (0x00042ac2) bg_popup_window_pane_cp20

0x4468,	// (0x0003bcea) listscroll_popup_fast_wide_pane

0xd59e,	// (0x00044e20) grid_indicator_nsta_pane

0x4470,	// (0x0003bcf2) clock_nsta_pane_g1

0x4479,	// (0x0003bcfb) clock_nsta_pane_t1

0xc5e7,	// (0x00043e69) cell_indicator_nsta_pane_ParamLimits

0xc5e7,	// (0x00043e69) cell_indicator_nsta_pane

0x44c6,	// (0x0003bd48) cell_indicator_nsta_pane_g1

0xc5fe,	// (0x00043e80) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0004732e) cell_indicator_nsta_pane_g

0x44e1,	// (0x0003bd63) clock_nsta_pane_cp

0x44ea,	// (0x0003bd6c) indicator_nsta_pane_cp

0x44f2,	// (0x0003bd74) nsta_clock_indic_pane_g1

0xb2d8,	// (0x00042b5a) grid_indicator_pane

0xbd35,	// (0x000435b7) scroll_pane_cp29

0xeecb,	// (0x0004674d) indicator_nsta_pane_cp2_ParamLimits

0xeecb,	// (0x0004674d) indicator_nsta_pane_cp2

0xb29c,	// (0x00042b1e) main_apps_wheel_pane

0x26d5,	// (0x00039f57) form_midp_field_text_pane_ParamLimits

0x2824,	// (0x0003a0a6) scroll_bar_cp050_ParamLimits

0x4542,	// (0x0003bdc4) cell_indicator_pane_ParamLimits

0x4542,	// (0x0003bdc4) cell_indicator_pane

0x455a,	// (0x0003bddc) cell_indicator_pane_g1

0xc60b,	// (0x00043e8d) grid_wheel_folder_pane_ParamLimits

0xc60b,	// (0x00043e8d) grid_wheel_folder_pane

0xc619,	// (0x00043e9b) list_wheel_apps_pane_ParamLimits

0xc619,	// (0x00043e9b) list_wheel_apps_pane

0xc627,	// (0x00043ea9) main_apps_wheel_pane_g1_ParamLimits

0xc627,	// (0x00043ea9) main_apps_wheel_pane_g1

0xc637,	// (0x00043eb9) main_apps_wheel_pane_g2_ParamLimits

0xc637,	// (0x00043eb9) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0004734a) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0004734a) main_apps_wheel_pane_g

0xc647,	// (0x00043ec9) main_apps_wheel_pane_t1_ParamLimits

0xc647,	// (0x00043ec9) main_apps_wheel_pane_t1

0xc65f,	// (0x00043ee1) list_wheel_apps_pane_g1

0xc667,	// (0x00043ee9) list_wheel_apps_pane_g2

0xc66f,	// (0x00043ef1) list_wheel_apps_pane_g3

0xc677,	// (0x00043ef9) list_wheel_apps_pane_g4

0xc67f,	// (0x00043f01) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0004734f) list_wheel_apps_pane_g

0xf1c9,	// (0x00046a4b) navi_icon_text_pane

0xa544,	// (0x00041dc6) aid_fill_nsta

0xc69c,	// (0x00043f1e) navi_icon_text_pane_g1

0xc6a8,	// (0x00043f2a) navi_icon_text_pane_t1

0xf05f,	// (0x000468e1) list_set_graphic_pane_t1_ParamLimits

0xf05f,	// (0x000468e1) list_set_graphic_pane_t1

0x2f89,	// (0x0003a80b) popup_midp_note_alarm_window_t6_ParamLimits

0x2f89,	// (0x0003a80b) popup_midp_note_alarm_window_t6

0x2f9b,	// (0x0003a81d) popup_midp_note_alarm_window_t7_ParamLimits

0x2f9b,	// (0x0003a81d) popup_midp_note_alarm_window_t7

0x2fad,	// (0x0003a82f) popup_midp_note_alarm_window_t8_ParamLimits

0x2fad,	// (0x0003a82f) popup_midp_note_alarm_window_t8

0x2fbf,	// (0x0003a841) popup_midp_note_alarm_window_t9_ParamLimits

0x2fbf,	// (0x0003a841) popup_midp_note_alarm_window_t9

0x2fd1,	// (0x0003a853) popup_midp_note_alarm_window_t10_ParamLimits

0x2fd1,	// (0x0003a853) popup_midp_note_alarm_window_t10

0x2fe3,	// (0x0003a865) popup_midp_note_alarm_window_t11_ParamLimits

0x2fe3,	// (0x0003a865) popup_midp_note_alarm_window_t11

0x2ff5,	// (0x0003a877) scroll_pane_cp17_ParamLimits

0x2ff5,	// (0x0003a877) scroll_pane_cp17

0x0855,	// (0x000380d7) volume_small_pane_cp_g1

0x0c02,	// (0x00038484) volume_small_pane_cp_g2

0x0c0b,	// (0x0003848d) volume_small_pane_cp_g3

0x0c14,	// (0x00038496) volume_small_pane_cp_g4

0x0c1d,	// (0x0003849f) volume_small_pane_cp_g5

0x0c26,	// (0x000384a8) volume_small_pane_cp_g6

0x0c2f,	// (0x000384b1) volume_small_pane_cp_g7

0x0c38,	// (0x000384ba) volume_small_pane_cp_g8

0x0c41,	// (0x000384c3) volume_small_pane_cp_g9

0x0c4a,	// (0x000384cc) volume_small_pane_cp_g10

0xf36d,	// (0x00046bef) midp_ticker_pane_g1_ParamLimits

0xf379,	// (0x00046bfb) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00046fda) midp_ticker_pane_g_ParamLimits

0x9bbc,	// (0x0004143e) midp_ticker_pane_t1_ParamLimits

0xa568,	// (0x00041dea) aid_fill_nsta_2

0x2810,	// (0x0003a092) list_form2_midp_pane

0x3979,	// (0x0003b1fb) midp_editing_number_pane_ParamLimits

0x3988,	// (0x0003b20a) midp_ticker_pane_ParamLimits

0x464d,	// (0x0003becf) form2_midp_field_pane

0x4671,	// (0x0003bef3) scroll_pane_cp51

0x4691,	// (0x0003bf13) form2_midp_button_pane_ParamLimits

0x4691,	// (0x0003bf13) form2_midp_button_pane

0x46a3,	// (0x0003bf25) form2_midp_content_pane_ParamLimits

0x46a3,	// (0x0003bf25) form2_midp_content_pane

0x46bd,	// (0x0003bf3f) form2_midp_field_choice_group_pane

0x46c5,	// (0x0003bf47) form2_midp_field_pane_g1

0x46cd,	// (0x0003bf4f) form2_midp_field_pane_g2

0x46d5,	// (0x0003bf57) form2_midp_field_pane_g3

0x46dd,	// (0x0003bf5f) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00047374) form2_midp_field_pane_g

0x46e5,	// (0x0003bf67) form2_midp_gauge_slider_pane

0x46ed,	// (0x0003bf6f) form2_midp_gauge_wait_pane

0x46f5,	// (0x0003bf77) form2_midp_image_pane_ParamLimits

0x46f5,	// (0x0003bf77) form2_midp_image_pane

0x4710,	// (0x0003bf92) form2_midp_label_pane_ParamLimits

0x4710,	// (0x0003bf92) form2_midp_label_pane

0xc6d6,	// (0x00043f58) form2_midp_label_pane_cp_ParamLimits

0xc6d6,	// (0x00043f58) form2_midp_label_pane_cp

0x4750,	// (0x0003bfd2) form2_midp_string_pane_ParamLimits

0x4750,	// (0x0003bfd2) form2_midp_string_pane

0xd5ac,	// (0x00044e2e) form2_midp_text_pane_ParamLimits

0xd5ac,	// (0x00044e2e) form2_midp_text_pane

0x4762,	// (0x0003bfe4) form2_midp_time_pane

0x4772,	// (0x0003bff4) input_focus_pane_cp51_ParamLimits

0x4772,	// (0x0003bff4) input_focus_pane_cp51

0x478a,	// (0x0003c00c) form2_midp_label_pane_t1_ParamLimits

0x478a,	// (0x0003c00c) form2_midp_label_pane_t1

0xd5cd,	// (0x00044e4f) form2_mdip_text_pane_t1_ParamLimits

0xd5cd,	// (0x00044e4f) form2_mdip_text_pane_t1

0xd5f1,	// (0x00044e73) form2_midp_time_pane_t1

0x47d8,	// (0x0003c05a) form2_midp_gauge_slider_pane_t1

0xc6f7,	// (0x00043f79) form2_midp_gauge_slider_pane_t2

0xc709,	// (0x00043f8b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0004737d) form2_midp_gauge_slider_pane_t

0x480e,	// (0x0003c090) form2_midp_slider_pane

0x481a,	// (0x0003c09c) form2_midp_gauge_wait_pane_t1

0x4828,	// (0x0003c0aa) form2_midp_wait_pane_ParamLimits

0x4828,	// (0x0003c0aa) form2_midp_wait_pane

0x253b,	// (0x00039dbd) list_single_2graphic_pane_cp4_ParamLimits

0x253b,	// (0x00039dbd) list_single_2graphic_pane_cp4

0xc71b,	// (0x00043f9d) list_single_midp_graphic_pane_cp_ParamLimits

0xc71b,	// (0x00043f9d) list_single_midp_graphic_pane_cp

0xb240,	// (0x00042ac2) list_highlight_pane_cp20

0x486c,	// (0x0003c0ee) list_single_2graphic_pane_g1_cp4

0x3e44,	// (0x0003b6c6) list_single_2graphic_pane_g2_cp4

0x4874,	// (0x0003c0f6) list_single_2graphic_pane_t1_cp4

0xb29c,	// (0x00042b1e) list_highlight_pane_cp21

0x4883,	// (0x0003c105) list_single_midp_graphic_pane_g4_cp

0x4892,	// (0x0003c114) list_single_midp_graphic_pane_t1_cp

0xc73c,	// (0x00043fbe) form2_mdip_string_pane_t1_ParamLimits

0xc73c,	// (0x00043fbe) form2_mdip_string_pane_t1

0xb240,	// (0x00042ac2) bg_wml_button_pane_cp2

0xb236,	// (0x00042ab8) form2_midp_image_pane_g1

0xd087,	// (0x00044909) list_double_large_graphic_pane_g5_ParamLimits

0xd087,	// (0x00044909) list_double_large_graphic_pane_g5

0x9b18,	// (0x0004139a) midp_form_pane_ParamLimits

0xb29c,	// (0x00042b1e) main_apps_wheel_pane_ParamLimits

0xa25e,	// (0x00041ae0) popup_preview_window_ParamLimits

0xa25e,	// (0x00041ae0) popup_preview_window

0x0685,	// (0x00037f07) popup_touch_info_window_ParamLimits

0x0685,	// (0x00037f07) popup_touch_info_window

0x06a7,	// (0x00037f29) popup_touch_menu_window_ParamLimits

0x06a7,	// (0x00037f29) popup_touch_menu_window

0xb22c,	// (0x00042aae) bg_popup_sub_pane_cp6

0x4943,	// (0x0003c1c5) list_touch_menu_pane

0x494b,	// (0x0003c1cd) list_single_touch_menu_pane_ParamLimits

0x494b,	// (0x0003c1cd) list_single_touch_menu_pane

0x4963,	// (0x0003c1e5) list_single_touch_menu_pane_t1

0xb29c,	// (0x00042b1e) bg_popup_sub_pane_cp7_ParamLimits

0xb29c,	// (0x00042b1e) bg_popup_sub_pane_cp7

0x4971,	// (0x0003c1f3) heading_sub_pane

0x4979,	// (0x0003c1fb) list_touch_info_pane_ParamLimits

0x4979,	// (0x0003c1fb) list_touch_info_pane

0x4988,	// (0x0003c20a) list_single_touch_info_pane_ParamLimits

0x4988,	// (0x0003c20a) list_single_touch_info_pane

0x499a,	// (0x0003c21c) list_single_touch_info_pane_t1

0x49a8,	// (0x0003c22a) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0004738b) list_single_touch_info_pane_t

0xf341,	// (0x00046bc3) bg_popup_heading_pane_cp

0x49b6,	// (0x0003c238) heading_sub_pane_t1

0x2482,	// (0x00039d04) bg_popup_preview_window_pane_cp_ParamLimits

0x2482,	// (0x00039d04) bg_popup_preview_window_pane_cp

0x4971,	// (0x0003c1f3) heading_preview_pane

0x4979,	// (0x0003c1fb) list_preview_pane_ParamLimits

0x4979,	// (0x0003c1fb) list_preview_pane

0x49c4,	// (0x0003c246) popup_preview_window_g1

0x4988,	// (0x0003c20a) list_single_preview_pane_ParamLimits

0x4988,	// (0x0003c20a) list_single_preview_pane

0x49cc,	// (0x0003c24e) list_single_preview_pane_g1

0x49d4,	// (0x0003c256) list_single_preview_pane_t1

0x499a,	// (0x0003c21c) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00047390) list_single_preview_pane_t

0x49e2,	// (0x0003c264) bg_popup_heading_pane_cp2_ParamLimits

0x49e2,	// (0x0003c264) bg_popup_heading_pane_cp2

0x49f8,	// (0x0003c27a) heading_preview_pane_g1

0x4a00,	// (0x0003c282) heading_preview_pane_t1_ParamLimits

0x4a00,	// (0x0003c282) heading_preview_pane_t1

0xb2ef,	// (0x00042b71) soft_indicator_pane_t1_ParamLimits

0xb84d,	// (0x000430cf) scroll_pane_ParamLimits

0xbc31,	// (0x000434b3) scroll_sc2_left_pane

0xbc3a,	// (0x000434bc) scroll_sc2_right_pane

0xbc59,	// (0x000434db) scroll_bg_pane_g1_ParamLimits

0xbc6e,	// (0x000434f0) scroll_bg_pane_g2_ParamLimits

0xbc86,	// (0x00043508) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00046f65) scroll_bg_pane_g_ParamLimits

0xbc59,	// (0x000434db) scroll_handle_pane_g1_ParamLimits

0xbca8,	// (0x0004352a) scroll_handle_pane_g2_ParamLimits

0xbc86,	// (0x00043508) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00046f6c) scroll_handle_pane_g_ParamLimits

0x00e5,	// (0x00037967) popup_choice_list_window_ParamLimits

0x00e5,	// (0x00037967) popup_choice_list_window

0x2358,	// (0x00039bda) choice_list_pane

0x23da,	// (0x00039c5c) cell_toolbar_pane_t1

0x2402,	// (0x00039c84) toolbar_button_pane_ParamLimits

0x34bf,	// (0x0003ad41) ai_gene_pane_1_t2_ParamLimits

0x34bf,	// (0x0003ad41) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0004718f) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0004718f) ai_gene_pane_1_t

0x4a1d,	// (0x0003c29f) scroll_sc2_left_pane_g1

0x4a1d,	// (0x0003c29f) scroll_sc2_right_pane_g1

0x1ede,	// (0x00039760) bg_popup_sub_pane_cp10

0x4a27,	// (0x0003c2a9) list_choice_list_pane

0x3a24,	// (0x0003b2a6) list_single_choice_list_pane_ParamLimits

0x3a24,	// (0x0003b2a6) list_single_choice_list_pane

0x4a40,	// (0x0003c2c2) list_single_choice_list_pane_g1

0xba28,	// (0x000432aa) list_single_choice_list_pane_t1_ParamLimits

0xba28,	// (0x000432aa) list_single_choice_list_pane_t1

0x4a48,	// (0x0003c2ca) choice_list_pane_g1

0x4a50,	// (0x0003c2d2) choice_list_pane_t1

0xb22c,	// (0x00042aae) input_focus_pane_cp11

0xbba6,	// (0x00043428) title_pane_stacon_g2_ParamLimits

0xbba6,	// (0x00043428) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00046f4b) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00046f4b) title_pane_stacon_g

0xf341,	// (0x00046bc3) cursor_press_pane

0x9edb,	// (0x0004175d) popup_fep_hwr_window_ParamLimits

0x9edb,	// (0x0004175d) popup_fep_hwr_window

0x0229,	// (0x00037aab) popup_fep_vkb_window_ParamLimits

0x0229,	// (0x00037aab) popup_fep_vkb_window

0x4a5e,	// (0x0003c2e0) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x000473b9) fep_vkb_side_pane_g_ParamLimits

0x0c8c,	// (0x0003850e) fep_hwr_candidate_pane_ParamLimits

0x0c8c,	// (0x0003850e) fep_hwr_candidate_pane

0x0cb6,	// (0x00038538) fep_hwr_side_pane_ParamLimits

0x0cb6,	// (0x00038538) fep_hwr_side_pane

0x0cd8,	// (0x0003855a) fep_hwr_top_pane_ParamLimits

0x0cd8,	// (0x0003855a) fep_hwr_top_pane

0x0cf0,	// (0x00038572) fep_hwr_write_pane_ParamLimits

0x0cf0,	// (0x00038572) fep_hwr_write_pane

0xfb37,	// (0x000473b9) fep_vkb_side_pane_g

0x4a66,	// (0x0003c2e8) fep_hwr_top_pane_g1

0x4a78,	// (0x0003c2fa) fep_hwr_top_pane_g2

0x0d2a,	// (0x000385ac) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00047395) fep_hwr_top_pane_g

0x0d3f,	// (0x000385c1) fep_hwr_top_text_pane

0xbda2,	// (0x00043624) fep_hwr_top_text_pane_g1

0x4aae,	// (0x0003c330) fep_hwr_top_text_pane_t1

0x0e49,	// (0x000386cb) fep_hwr_candidate_pane_g1

0x4cf9,	// (0x0003c57b) fep_vkb_keypad_pane_g3_ParamLimits

0x4cf9,	// (0x0003c57b) fep_vkb_keypad_pane_g3

0x4d25,	// (0x0003c5a7) fep_vkb_keypad_pane_g4_ParamLimits

0x4d25,	// (0x0003c5a7) fep_vkb_keypad_pane_g4

0x4d9c,	// (0x0003c61e) fep_vkb_bottom_pane_g2_ParamLimits

0x4d9c,	// (0x0003c61e) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000473c0) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000473c0) fep_vkb_bottom_pane_g

0x4a1d,	// (0x0003c29f) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x000473ca) cell_vkb_side_pane_g

0x4e27,	// (0x0003c6a9) cell_vkb_side_pane_t1

0x4e35,	// (0x0003c6b7) cell_vkb_side_pane_t1_copy1

0x4a1d,	// (0x0003c29f) bg_fep_vkb_candidate_pane_g2

0x4f79,	// (0x0003c7fb) cell_vkb_candidate_pane_ParamLimits

0x4abc,	// (0x0003c33e) aid_size_cell_vkb_ParamLimits

0x4abc,	// (0x0003c33e) aid_size_cell_vkb

0x4f79,	// (0x0003c7fb) cell_vkb_candidate_pane

0x0e70,	// (0x000386f2) bg_popup_fep_shadow_pane_g1

0xc7d8,	// (0x0004405a) fep_vkb_bottom_pane_ParamLimits

0xc7d8,	// (0x0004405a) fep_vkb_bottom_pane

0x4b8b,	// (0x0003c40d) fep_vkb_candidate_pane_ParamLimits

0x4b8b,	// (0x0003c40d) fep_vkb_candidate_pane

0xc804,	// (0x00044086) fep_vkb_keypad_pane_ParamLimits

0xc804,	// (0x00044086) fep_vkb_keypad_pane

0xc82b,	// (0x000440ad) fep_vkb_side_pane_ParamLimits

0xc82b,	// (0x000440ad) fep_vkb_side_pane

0xc867,	// (0x000440e9) fep_vkb_top_pane_ParamLimits

0xc867,	// (0x000440e9) fep_vkb_top_pane

0x4c52,	// (0x0003c4d4) fep_vkb_top_pane_g1_ParamLimits

0x4c52,	// (0x0003c4d4) fep_vkb_top_pane_g1

0x4c61,	// (0x0003c4e3) fep_vkb_top_pane_g2_ParamLimits

0x4c61,	// (0x0003c4e3) fep_vkb_top_pane_g2

0x4c70,	// (0x0003c4f2) fep_vkb_top_pane_g3_ParamLimits

0x4c70,	// (0x0003c4f2) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x000473b0) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x000473b0) fep_vkb_top_pane_g

0x4c8e,	// (0x0003c510) fep_vkb_top_text_pane_ParamLimits

0x4c8e,	// (0x0003c510) fep_vkb_top_text_pane

0xc8a3,	// (0x00044125) fep_vkb_side_pane_g1_ParamLimits

0xc8a3,	// (0x00044125) fep_vkb_side_pane_g1

0x4ce8,	// (0x0003c56a) grid_vkb_side_pane_ParamLimits

0x4ce8,	// (0x0003c56a) grid_vkb_side_pane

0x0e78,	// (0x000386fa) bg_popup_fep_shadow_pane_g2

0x0e81,	// (0x00038703) bg_popup_fep_shadow_pane_g3

0x0e89,	// (0x0003870b) bg_popup_fep_shadow_pane_g4

0x0e92,	// (0x00038714) bg_popup_fep_shadow_pane_g5

0x0e9c,	// (0x0003871e) bg_popup_fep_shadow_pane_g6

0x0ea4,	// (0x00038726) bg_popup_fep_shadow_pane_g7

0xb94a,	// (0x000431cc) bg_popup_fep_shadow_pane_g8

0x4d47,	// (0x0003c5c9) grid_vkb_keypad_number_pane_ParamLimits

0x4d47,	// (0x0003c5c9) grid_vkb_keypad_number_pane

0x4d5b,	// (0x0003c5dd) grid_vkb_keypad_pane_ParamLimits

0x4d5b,	// (0x0003c5dd) grid_vkb_keypad_pane

0x4d81,	// (0x0003c603) fep_vkb_bottom_pane_g1_ParamLimits

0x4d81,	// (0x0003c603) fep_vkb_bottom_pane_g1

0x4daa,	// (0x0003c62c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4daa,	// (0x0003c62c) grid_vkb_keypad_bottom_left_pane

0x4dbf,	// (0x0003c641) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4dbf,	// (0x0003c641) grid_vkb_keypad_bottom_right_pane

0x4dd4,	// (0x0003c656) fep_vkb_top_text_pane_g1

0xc8ea,	// (0x0004416c) fep_vkb_top_text_pane_t1

0xc8fc,	// (0x0004417e) cell_vkb_side_pane_ParamLimits

0xc8fc,	// (0x0004417e) cell_vkb_side_pane

0x4a1d,	// (0x0003c29f) cell_vkb_side_pane_g1

0x4e43,	// (0x0003c6c5) cell_vkb_keypad_pane_ParamLimits

0x4e43,	// (0x0003c6c5) cell_vkb_keypad_pane

0x4ed0,	// (0x0003c752) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x000473dd) bg_popup_fep_shadow_pane_g

0x0eb6,	// (0x00038738) cell_hwr_side_pane_g1

0x0eb6,	// (0x00038738) cell_hwr_side_pane_g2

0x4eda,	// (0x0003c75c) cell_vkb_keypad_pane_t1

0xc912,	// (0x00044194) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc912,	// (0x00044194) cell_vkb_keypad_bottom_left_pane

0xc927,	// (0x000441a9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc927,	// (0x000441a9) cell_vkb_keypad_bottom_right_pane

0x4a1d,	// (0x0003c29f) cell_vkb_keypad_bottom_left_pane_g1

0x4a1d,	// (0x0003c29f) cell_vkb_keypad_bottom_right_pane_g1

0x4f3e,	// (0x0003c7c0) cell_vkb_keypad_number_pane_ParamLimits

0x4f3e,	// (0x0003c7c0) cell_vkb_keypad_number_pane

0x4f5d,	// (0x0003c7df) cell_vkb_keypad_number_pane_g1

0x4f67,	// (0x0003c7e9) cell_vkb_keypad_number_pane_g2

0x4f70,	// (0x0003c7f2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x000473cf) cell_vkb_keypad_number_pane_g

0x4eda,	// (0x0003c75c) cell_vkb_keypad_number_pane_t1

0x4f9a,	// (0x0003c81c) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x000473f0) cell_hwr_side_pane_g

0x4fb3,	// (0x0003c835) cell_hwr_side_pane_t1

0x0ec0,	// (0x00038742) cell_hwr_side_pane_t1_copy1

0x0ece,	// (0x00038750) cell_hwr_candidate_pane_g1

0x0efd,	// (0x0003877f) cell_hwr_candidate_pane_t1

0x4a1d,	// (0x0003c29f) cell_vkb_candidate_pane_g2

0x4ff7,	// (0x0003c879) cell_vkb_candidate_pane_t1

0x0c53,	// (0x000384d5) bg_popup_fep_shadow_pane_ParamLimits

0x0c53,	// (0x000384d5) bg_popup_fep_shadow_pane

0x0d0a,	// (0x0003858c) bg_fep_hwr_top_pane_g4

0x4a8a,	// (0x0003c30c) bg_hwr_side_pane_g1_ParamLimits

0x4a8a,	// (0x0003c30c) bg_hwr_side_pane_g1

0xaa38,	// (0x000422ba) cell_hwr_side_pane_ParamLimits

0xaa38,	// (0x000422ba) cell_hwr_side_pane

0x0dba,	// (0x0003863c) fep_hwr_write_pane_g1_ParamLimits

0x0dba,	// (0x0003863c) fep_hwr_write_pane_g1

0x0dc7,	// (0x00038649) fep_hwr_write_pane_g2_ParamLimits

0x0dc7,	// (0x00038649) fep_hwr_write_pane_g2

0x0dd4,	// (0x00038656) fep_hwr_write_pane_g3_ParamLimits

0x0dd4,	// (0x00038656) fep_hwr_write_pane_g3

0xaa58,	// (0x000422da) fep_hwr_write_pane_g4_ParamLimits

0xaa58,	// (0x000422da) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0004739c) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0004739c) fep_hwr_write_pane_g

0x0d0a,	// (0x0003858c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d0a,	// (0x0003858c) bg_fep_hwr_candidate_pane_g2

0x0df7,	// (0x00038679) cell_hwr_candidate_pane_ParamLimits

0x0df7,	// (0x00038679) cell_hwr_candidate_pane

0x0e49,	// (0x000386cb) fep_hwr_candidate_pane_g1_ParamLimits

0x4aea,	// (0x0003c36c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4aea,	// (0x0003c36c) bg_popup_fep_shadow_pane_cp2

0x4c80,	// (0x0003c502) fep_vkb_top_pane_g4_ParamLimits

0x4c80,	// (0x0003c502) fep_vkb_top_pane_g4

0x4cc6,	// (0x0003c548) fep_vkb_side_pane_g2_ParamLimits

0x4cc6,	// (0x0003c548) fep_vkb_side_pane_g2

0x959e,	// (0x00040e20) list_setting_pane_t4_ParamLimits

0x959e,	// (0x00040e20) list_setting_pane_t4

0x963a,	// (0x00040ebc) list_setting_number_pane_t5_ParamLimits

0x963a,	// (0x00040ebc) list_setting_number_pane_t5

0xbdd9,	// (0x0004365b) list_double_heading_pane_cp2_ParamLimits

0xbdd9,	// (0x0004365b) list_double_heading_pane_cp2

0x5005,	// (0x0003c887) list_double_heading_pane_g1_cp2_ParamLimits

0x5005,	// (0x0003c887) list_double_heading_pane_g1_cp2

0x5011,	// (0x0003c893) list_double_heading_pane_g2_cp2_ParamLimits

0x5011,	// (0x0003c893) list_double_heading_pane_g2_cp2

0x5025,	// (0x0003c8a7) list_double_heading_pane_t1_cp2_ParamLimits

0x5025,	// (0x0003c8a7) list_double_heading_pane_t1_cp2

0x503b,	// (0x0003c8bd) list_double_heading_pane_t2_cp2_ParamLimits

0x503b,	// (0x0003c8bd) list_double_heading_pane_t2_cp2

0x829e,	// (0x0003fb20) aid_value_unit2

0xeaef,	// (0x00046371) popup_preview_fixed_window

0xb3cf,	// (0x00042c51) bg_popup_preview_window_pane_cp02

0x504d,	// (0x0003c8cf) list_preview_fixed_pane

0x5093,	// (0x0003c915) list_empty_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_empty_pane_fp

0x5093,	// (0x0003c915) list_single_cale_day_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_cale_day_pane_fp

0x5093,	// (0x0003c915) list_single_graphic_heading_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_graphic_heading_pane_fp

0x5093,	// (0x0003c915) list_single_graphic_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_graphic_pane_fp

0x5093,	// (0x0003c915) list_single_heading_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_heading_pane_fp

0x5093,	// (0x0003c915) list_single_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_pane_fp

0x50ac,	// (0x0003c92e) list_single_pane_fp_g1_ParamLimits

0x50ac,	// (0x0003c92e) list_single_pane_fp_g1

0xd611,	// (0x00044e93) list_single_pane_fp_g2_ParamLimits

0xd611,	// (0x00044e93) list_single_pane_fp_g2

0xd61d,	// (0x00044e9f) list_single_pane_fp_g3_ParamLimits

0xd61d,	// (0x00044e9f) list_single_pane_fp_g3

0x50b8,	// (0x0003c93a) list_single_pane_fp_g4_ParamLimits

0x50b8,	// (0x0003c93a) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00047403) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00047403) list_single_pane_fp_g

0xd631,	// (0x00044eb3) list_single_pane_fp_t1_ParamLimits

0xd631,	// (0x00044eb3) list_single_pane_fp_t1

0xd648,	// (0x00044eca) list_single_graphic_pane_fp_g1_ParamLimits

0xd648,	// (0x00044eca) list_single_graphic_pane_fp_g1

0x50ac,	// (0x0003c92e) list_single_graphic_pane_fp_g2_ParamLimits

0x50ac,	// (0x0003c92e) list_single_graphic_pane_fp_g2

0xd611,	// (0x00044e93) list_single_graphic_pane_fp_g3_ParamLimits

0xd611,	// (0x00044e93) list_single_graphic_pane_fp_g3

0xd61d,	// (0x00044e9f) list_single_graphic_pane_fp_g4_ParamLimits

0xd61d,	// (0x00044e9f) list_single_graphic_pane_fp_g4

0x50b8,	// (0x0003c93a) list_single_graphic_pane_fp_g5_ParamLimits

0x50b8,	// (0x0003c93a) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004740c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004740c) list_single_graphic_pane_fp_g

0xd654,	// (0x00044ed6) list_single_graphic_pane_fp_t1_ParamLimits

0xd654,	// (0x00044ed6) list_single_graphic_pane_fp_t1

0xd648,	// (0x00044eca) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd648,	// (0x00044eca) list_single_graphic_heading_pane_fp_g1

0x50ac,	// (0x0003c92e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x50ac,	// (0x0003c92e) list_single_graphic_heading_pane_fp_g2

0xd611,	// (0x00044e93) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd611,	// (0x00044e93) list_single_graphic_heading_pane_fp_g3

0xd61d,	// (0x00044e9f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd61d,	// (0x00044e9f) list_single_graphic_heading_pane_fp_g4

0x50b8,	// (0x0003c93a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x50b8,	// (0x0003c93a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004740c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004740c) list_single_graphic_heading_pane_fp_g

0xd66a,	// (0x00044eec) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd66a,	// (0x00044eec) list_single_graphic_heading_pane_fp_t1

0xd680,	// (0x00044f02) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd680,	// (0x00044f02) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00047417) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00047417) list_single_graphic_heading_pane_fp_t

0xd692,	// (0x00044f14) list_single_cale_day_pane_fp_g1_ParamLimits

0xd692,	// (0x00044f14) list_single_cale_day_pane_fp_g1

0x50c4,	// (0x0003c946) list_single_cale_day_pane_fp_g2_ParamLimits

0x50c4,	// (0x0003c946) list_single_cale_day_pane_fp_g2

0xd6ca,	// (0x00044f4c) list_single_cale_day_pane_fp_g3_ParamLimits

0xd6ca,	// (0x00044f4c) list_single_cale_day_pane_fp_g3

0xd6f2,	// (0x00044f74) list_single_cale_day_pane_fp_g4_ParamLimits

0xd6f2,	// (0x00044f74) list_single_cale_day_pane_fp_g4

0xd716,	// (0x00044f98) list_single_cale_day_pane_fp_g5_ParamLimits

0xd716,	// (0x00044f98) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004741c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004741c) list_single_cale_day_pane_fp_g

0xd73a,	// (0x00044fbc) list_single_cale_day_pane_fp_t1_ParamLimits

0xd73a,	// (0x00044fbc) list_single_cale_day_pane_fp_t1

0xd760,	// (0x00044fe2) list_single_cale_day_pane_fp_t2_ParamLimits

0xd760,	// (0x00044fe2) list_single_cale_day_pane_fp_t2

0xd779,	// (0x00044ffb) list_single_cale_day_pane_fp_t3_ParamLimits

0xd779,	// (0x00044ffb) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00047427) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00047427) list_single_cale_day_pane_fp_t

0x50ac,	// (0x0003c92e) list_empty_pane_fp_g1_ParamLimits

0x50ac,	// (0x0003c92e) list_empty_pane_fp_g1

0xd792,	// (0x00045014) list_empty_pane_fp_t1

0xd7a0,	// (0x00045022) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0004742e) list_empty_pane_fp_t

0x50ac,	// (0x0003c92e) list_single_heading_pane_fp_g1_ParamLimits

0x50ac,	// (0x0003c92e) list_single_heading_pane_fp_g1

0xd611,	// (0x00044e93) list_single_heading_pane_fp_g2_ParamLimits

0xd611,	// (0x00044e93) list_single_heading_pane_fp_g2

0xd61d,	// (0x00044e9f) list_single_heading_pane_fp_g3_ParamLimits

0xd61d,	// (0x00044e9f) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00047433) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00047433) list_single_heading_pane_fp_g

0xd7ae,	// (0x00045030) list_single_heading_pane_fp_t1_ParamLimits

0xd7ae,	// (0x00045030) list_single_heading_pane_fp_t1

0xd7c0,	// (0x00045042) list_single_heading_pane_fp_t2_ParamLimits

0xd7c0,	// (0x00045042) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0004743a) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0004743a) list_single_heading_pane_fp_t

0xba3d,	// (0x000432bf) aid_size_cell_fast

0xb3b2,	// (0x00042c34) soft_indicator_pane_cp1_t1

0xba7a,	// (0x000432fc) cell_app_pane_cp2_ParamLimits

0xba7a,	// (0x000432fc) cell_app_pane_cp2

0x0c75,	// (0x000384f7) fep_hwr_candidate_drop_down_list_pane

0x0e63,	// (0x000386e5) fep_hwr_candidate_pane_g3_ParamLimits

0x0e63,	// (0x000386e5) fep_hwr_candidate_pane_g3

0xd604,	// (0x00044e86) fep_hwr_candidate_pane_g4_ParamLimits

0xd604,	// (0x00044e86) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x000473a9) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x000473a9) fep_hwr_candidate_pane_g

0x4b7a,	// (0x0003c3fc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4b7a,	// (0x0003c3fc) fep_vkb_candidate_drop_down_list_pane

0x4fa2,	// (0x0003c824) fep_vkb_candidate_pane_g3

0x4faa,	// (0x0003c82c) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x000473d6) fep_vkb_candidate_pane_g

0x0ece,	// (0x00038750) cell_hwr_candidate_pane_g1_ParamLimits

0x0edc,	// (0x0003875e) cell_hwr_candidate_pane_g3_ParamLimits

0x0edc,	// (0x0003875e) cell_hwr_candidate_pane_g3

0x5935,	// (0x0003d1b7) cell_hwr_candidate_pane_g4_ParamLimits

0x5935,	// (0x0003d1b7) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x000473f5) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x000473f5) cell_hwr_candidate_pane_g

0x4fc1,	// (0x0003c843) cell_vkb_candidate_pane_g3_ParamLimits

0x4fc1,	// (0x0003c843) cell_vkb_candidate_pane_g3

0x4fdc,	// (0x0003c85e) cell_vkb_candidate_pane_g4_ParamLimits

0x4fdc,	// (0x0003c85e) cell_vkb_candidate_pane_g4

0x50d0,	// (0x0003c952) cell_app_pane_cp2_g1_ParamLimits

0x50d0,	// (0x0003c952) cell_app_pane_cp2_g1

0x50ee,	// (0x0003c970) cell_app_pane_cp2_g2_ParamLimits

0x50ee,	// (0x0003c970) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0004743f) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0004743f) cell_app_pane_cp2_g

0x50fa,	// (0x0003c97c) cell_app_pane_cp2_t1_ParamLimits

0x50fa,	// (0x0003c97c) cell_app_pane_cp2_t1

0xb8da,	// (0x0004315c) grid_highlight_pane_cp1_ParamLimits

0xb8da,	// (0x0004315c) grid_highlight_pane_cp1

0x0f1b,	// (0x0003879d) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f1b,	// (0x0003879d) cell_hwr_candidate_pane_cp1

0x0ece,	// (0x00038750) fep_hwr_candidate_drop_down_list_pane_g1

0x0f3f,	// (0x000387c1) fep_hwr_candidate_drop_down_list_pane_g2

0x0f4c,	// (0x000387ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00047444) fep_hwr_candidate_drop_down_list_pane_g

0x0f59,	// (0x000387db) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f62,	// (0x000387e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f62,	// (0x000387e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f6f,	// (0x000387f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f6f,	// (0x000387f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f7c,	// (0x000387fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f7c,	// (0x000387fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f89,	// (0x0003880b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f89,	// (0x0003880b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0fa4,	// (0x00038826) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0fa4,	// (0x00038826) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fbf,	// (0x00038841) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fbf,	// (0x00038841) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fda,	// (0x0003885c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fda,	// (0x0003885c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0ff5,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0ff5,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0004744b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0004744b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x510c,	// (0x0003c98e) cell_vkb_candidate_pane_cp1_ParamLimits

0x510c,	// (0x0003c98e) cell_vkb_candidate_pane_cp1

0x4c80,	// (0x0003c502) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4c80,	// (0x0003c502) fep_vkb_candidate_drop_down_list_pane_g1

0x5132,	// (0x0003c9b4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5132,	// (0x0003c9b4) fep_vkb_candidate_drop_down_list_pane_g2

0x513f,	// (0x0003c9c1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x513f,	// (0x0003c9c1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0004745c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0004745c) fep_vkb_candidate_drop_down_list_pane_g

0x514c,	// (0x0003c9ce) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x514c,	// (0x0003c9ce) fep_vkb_candidate_drop_down_list_scroll_pane

0x5159,	// (0x0003c9db) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5159,	// (0x0003c9db) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5166,	// (0x0003c9e8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5166,	// (0x0003c9e8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5172,	// (0x0003c9f4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5172,	// (0x0003c9f4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x517e,	// (0x0003ca00) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x517e,	// (0x0003ca00) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x519f,	// (0x0003ca21) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x519f,	// (0x0003ca21) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x51c0,	// (0x0003ca42) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x51c0,	// (0x0003ca42) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x51e1,	// (0x0003ca63) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x51e1,	// (0x0003ca63) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5202,	// (0x0003ca84) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5202,	// (0x0003ca84) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00047463) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00047463) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8eac,	// (0x0004072e) title_pane_g1_ParamLimits

0x8ebf,	// (0x00040741) title_pane_g2_ParamLimits

0xf54e,	// (0x00046dd0) title_pane_g_ParamLimits

0xbd92,	// (0x00043614) aid_call2_pane

0xbd9a,	// (0x0004361c) aid_call_pane

0xbda2,	// (0x00043624) popup_clock_analogue_window_g1

0xbda2,	// (0x00043624) popup_clock_analogue_window_g2

0xedc1,	// (0x00046643) popup_clock_analogue_window_g3

0xedca,	// (0x0004664c) popup_clock_analogue_window_g4

0xb236,	// (0x00042ab8) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00046f7a) popup_clock_analogue_window_g

0xedd2,	// (0x00046654) popup_clock_analogue_window_t1

0xede0,	// (0x00046662) clock_digital_number_pane_ParamLimits

0xede0,	// (0x00046662) clock_digital_number_pane

0xedec,	// (0x0004666e) clock_digital_number_pane_cp02_ParamLimits

0xedec,	// (0x0004666e) clock_digital_number_pane_cp02

0xedf8,	// (0x0004667a) clock_digital_number_pane_cp03_ParamLimits

0xedf8,	// (0x0004667a) clock_digital_number_pane_cp03

0xee04,	// (0x00046686) clock_digital_number_pane_cp04_ParamLimits

0xee04,	// (0x00046686) clock_digital_number_pane_cp04

0xee10,	// (0x00046692) clock_digital_separator_pane_ParamLimits

0xee10,	// (0x00046692) clock_digital_separator_pane

0xee1c,	// (0x0004669e) popup_clock_digital_window_t1_ParamLimits

0xee1c,	// (0x0004669e) popup_clock_digital_window_t1

0xb236,	// (0x00042ab8) clock_digital_number_pane_g1

0xb236,	// (0x00042ab8) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00046f85) clock_digital_number_pane_g

0xb236,	// (0x00042ab8) clock_digital_separator_pane_g1

0xb236,	// (0x00042ab8) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00046f85) clock_digital_separator_pane_g

0xa544,	// (0x00041dc6) aid_fill_nsta_ParamLimits

0xa67c,	// (0x00041efe) indicator_nsta_pane_ParamLimits

0x21f1,	// (0x00039a73) popup_clock_analogue_window

0x21f1,	// (0x00039a73) popup_clock_digital_window

0xd59e,	// (0x00044e20) grid_indicator_nsta_pane_ParamLimits

0x4487,	// (0x0003bd09) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00047329) clock_nsta_pane_t

0xed8e,	// (0x00046610) aid_size_max_handle

0x991d,	// (0x0004119f) aid_size_min_handle

0xf341,	// (0x00046bc3) editor_scroll_pane

0x521d,	// (0x0003ca9f) ex_editor_pane

0xba03,	// (0x00043285) scroll_pane_cp13

0xb879,	// (0x000430fb) scroll_pane_cp14

0xbdd1,	// (0x00043653) scroll_pane_cp36

0x99aa,	// (0x0004122c) list_single_graphic_hl_pane_cp2_ParamLimits

0x99aa,	// (0x0004122c) list_single_graphic_hl_pane_cp2

0xc45b,	// (0x00043cdd) list_single_graphic_hl_pane_ParamLimits

0xc45b,	// (0x00043cdd) list_single_graphic_hl_pane

0xd7d6,	// (0x00045058) aid_size_min_hl_cp1

0x5225,	// (0x0003caa7) list_highlight_pane_cp34_ParamLimits

0x5225,	// (0x0003caa7) list_highlight_pane_cp34

0x5236,	// (0x0003cab8) list_single_graphic_hl_pane_g1_ParamLimits

0x5236,	// (0x0003cab8) list_single_graphic_hl_pane_g1

0xaa6d,	// (0x000422ef) list_single_graphic_hl_pane_g2_ParamLimits

0xaa6d,	// (0x000422ef) list_single_graphic_hl_pane_g2

0xaa6d,	// (0x000422ef) list_single_graphic_hl_pane_g3_ParamLimits

0xaa6d,	// (0x000422ef) list_single_graphic_hl_pane_g3

0xd7df,	// (0x00045061) list_single_graphic_hl_pane_g4_ParamLimits

0xd7df,	// (0x00045061) list_single_graphic_hl_pane_g4

0xaa79,	// (0x000422fb) list_single_graphic_hl_pane_g5_ParamLimits

0xaa79,	// (0x000422fb) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00047474) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00047474) list_single_graphic_hl_pane_g

0xaa8d,	// (0x0004230f) list_single_graphic_hl_pane_t1_ParamLimits

0xaa8d,	// (0x0004230f) list_single_graphic_hl_pane_t1

0x5243,	// (0x0003cac5) aid_size_min_hl_cp2

0x524c,	// (0x0003cace) list_highlight_pane_cp34_cp2_ParamLimits

0x524c,	// (0x0003cace) list_highlight_pane_cp34_cp2

0x5236,	// (0x0003cab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5236,	// (0x0003cab8) list_single_graphic_hl_pane_g1_cp2

0x5259,	// (0x0003cadb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5259,	// (0x0003cadb) list_single_graphic_hl_pane_g2_cp2

0x5265,	// (0x0003cae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5265,	// (0x0003cae7) list_single_graphic_hl_pane_g3_cp2

0x5273,	// (0x0003caf5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5273,	// (0x0003caf5) list_single_graphic_hl_pane_g4_cp2

0x527f,	// (0x0003cb01) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x527f,	// (0x0003cb01) list_single_graphic_hl_pane_g5_cp2

0x9cd1,	// (0x00041553) control_pane_g4_ParamLimits

0x9cd1,	// (0x00041553) control_pane_g4

0x1ede,	// (0x00039760) bg_popup_sub_pane_cp10_ParamLimits

0x4a27,	// (0x0003c2a9) list_choice_list_pane_ParamLimits

0x4a36,	// (0x0003c2b8) scroll_pane_cp23

0xb3cf,	// (0x00042c51) bg_popup_preview_window_pane_cp02_ParamLimits

0x504d,	// (0x0003c8cf) list_preview_fixed_pane_ParamLimits

0x5063,	// (0x0003c8e5) list_preview_fixed_pane_cp_ParamLimits

0x5063,	// (0x0003c8e5) list_preview_fixed_pane_cp

0x506f,	// (0x0003c8f1) popup_preview_fixed_window_g1_ParamLimits

0x506f,	// (0x0003c8f1) popup_preview_fixed_window_g1

0x507b,	// (0x0003c8fd) popup_preview_fixed_window_g2_ParamLimits

0x507b,	// (0x0003c8fd) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x000473fc) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x000473fc) popup_preview_fixed_window_g

0xec8c,	// (0x0004650e) aid_navi_side_left_pane_ParamLimits

0xeca1,	// (0x00046523) aid_navi_side_right_pane_ParamLimits

0xecb9,	// (0x0004653b) navi_icon_pane_stacon_ParamLimits

0xed41,	// (0x000465c3) navi_navi_pane_stacon_ParamLimits

0xecb9,	// (0x0004653b) navi_text_pane_stacon_ParamLimits

0xe9e0,	// (0x00046262) main_text_info_pane

0x52a9,	// (0x0003cb2b) listscroll_text_info_pane

0x52b1,	// (0x0003cb33) list_text_info_pane_ParamLimits

0x52b1,	// (0x0003cb33) list_text_info_pane

0x52c0,	// (0x0003cb42) scroll_pane_cp24_ParamLimits

0x52c0,	// (0x0003cb42) scroll_pane_cp24

0xc942,	// (0x000441c4) list_text_info_pane_t1_ParamLimits

0xc942,	// (0x000441c4) list_text_info_pane_t1

0x9e3f,	// (0x000416c1) popup_fast_swap2_window_ParamLimits

0x9e3f,	// (0x000416c1) popup_fast_swap2_window

0x5303,	// (0x0003cb85) aid_size_cell_fast2

0xb22c,	// (0x00042aae) bg_popup_window_pane_cp17

0x2844,	// (0x0003a0c6) heading_pane_cp2

0xb5fe,	// (0x00042e80) listscroll_fast2_pane

0x530d,	// (0x0003cb8f) grid_fast2_pane

0x5317,	// (0x0003cb99) listscroll_fast2_pane_g1

0x5321,	// (0x0003cba3) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0004747f) listscroll_fast2_pane_g

0xba03,	// (0x00043285) scroll_pane_cp26

0x532b,	// (0x0003cbad) cell_fast2_pane_ParamLimits

0x532b,	// (0x0003cbad) cell_fast2_pane

0x5342,	// (0x0003cbc4) cell_fast2_pane_g1

0x534b,	// (0x0003cbcd) cell_fast2_pane_g2

0x5354,	// (0x0003cbd6) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00047484) cell_fast2_pane_g

0xb640,	// (0x00042ec2) grid_highlight_pane_cp9

0x00c9,	// (0x0003794b) main_eswt_pane_ParamLimits

0x00c9,	// (0x0003794b) main_eswt_pane

0x52d5,	// (0x0003cb57) list_single_text_info_pane

0x535c,	// (0x0003cbde) eswt_ctrl_button_pane

0x535c,	// (0x0003cbde) eswt_ctrl_canvas_pane

0x5364,	// (0x0003cbe6) eswt_ctrl_combo_pane

0x535c,	// (0x0003cbde) eswt_ctrl_default_pane

0x535c,	// (0x0003cbde) eswt_ctrl_label_pane

0x536c,	// (0x0003cbee) eswt_ctrl_wait_pane

0x5374,	// (0x0003cbf6) eswt_shell_pane

0xb22c,	// (0x00042aae) listscroll_eswt_app_pane

0x5394,	// (0x0003cc16) popup_eswt_tasktip_window_ParamLimits

0x5394,	// (0x0003cc16) popup_eswt_tasktip_window

0x2482,	// (0x00039d04) bg_popup_window_pane_cp18

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_ParamLimits

0x53a5,	// (0x0003cc27) eswt_control_pane_g1

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_ParamLimits

0x53b2,	// (0x0003cc34) eswt_control_pane_g2

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_ParamLimits

0x53bf,	// (0x0003cc41) eswt_control_pane_g3

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_ParamLimits

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0004748b) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0004748b) eswt_control_pane_g

0xb8da,	// (0x0004315c) bg_button_pane_ParamLimits

0xb8da,	// (0x0004315c) bg_button_pane

0xb655,	// (0x00042ed7) common_borders_pane_copy2_ParamLimits

0xb655,	// (0x00042ed7) common_borders_pane_copy2

0x53d9,	// (0x0003cc5b) control_button_pane_g1_ParamLimits

0x53d9,	// (0x0003cc5b) control_button_pane_g1

0x53e5,	// (0x0003cc67) control_button_pane_g2_ParamLimits

0x53e5,	// (0x0003cc67) control_button_pane_g2

0x53f1,	// (0x0003cc73) control_button_pane_g3_ParamLimits

0x53f1,	// (0x0003cc73) control_button_pane_g3

0x0002,

0xfc12,	// (0x00047494) control_button_pane_g_ParamLimits

0xfc12,	// (0x00047494) control_button_pane_g

0x5405,	// (0x0003cc87) control_button_pane_t1

0x5413,	// (0x0003cc95) control_button_pane_t2

0x0001,

0xfc19,	// (0x0004749b) control_button_pane_t

0x240e,	// (0x00039c90) bg_button_pane_g1

0x241e,	// (0x00039ca0) bg_button_pane_g2

0x2416,	// (0x00039c98) bg_button_pane_g3

0x242e,	// (0x00039cb0) bg_button_pane_g4

0x2426,	// (0x00039ca8) bg_button_pane_g5

0x2436,	// (0x00039cb8) bg_button_pane_g6

0x243e,	// (0x00039cc0) bg_button_pane_g7

0x244e,	// (0x00039cd0) bg_button_pane_g8

0x2446,	// (0x00039cc8) bg_button_pane_g9

0x0008,

0xf861,	// (0x000470e3) bg_button_pane_g

0x49e2,	// (0x0003c264) common_borders_pane_ParamLimits

0x49e2,	// (0x0003c264) common_borders_pane

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy1_ParamLimits

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy1

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy1_ParamLimits

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy1

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy1_ParamLimits

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy1

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy1_ParamLimits

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy1

0x4a1d,	// (0x0003c29f) bg_eswt_ctrl_canvas_pane_g1

0x49e2,	// (0x0003c264) common_borders_pane_cp2_ParamLimits

0x49e2,	// (0x0003c264) common_borders_pane_cp2

0x49e2,	// (0x0003c264) common_borders_pane_cp3_ParamLimits

0x49e2,	// (0x0003c264) common_borders_pane_cp3

0x5421,	// (0x0003cca3) separator_horizontal_pane

0x5429,	// (0x0003ccab) separator_vertical_pane

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy2_ParamLimits

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy2

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy2_ParamLimits

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy2

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy2_ParamLimits

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy2

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy2_ParamLimits

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy2

0xb22c,	// (0x00042aae) common_borders_pane_cp4

0x5432,	// (0x0003ccb4) separator_horizontal_pane_g1

0x543b,	// (0x0003ccbd) separator_horizontal_pane_g2

0x5444,	// (0x0003ccc6) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x000474a0) separator_horizontal_pane_g

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy3_ParamLimits

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy3

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy3_ParamLimits

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy3

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy3_ParamLimits

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy3

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy3_ParamLimits

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy3

0xb22c,	// (0x00042aae) common_borders_pane_cp5

0x544d,	// (0x0003cccf) separator_vertical_pane_g1

0x5456,	// (0x0003ccd8) separator_vertical_pane_g2

0x545f,	// (0x0003cce1) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x000474a7) separator_vertical_pane_g

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy4_ParamLimits

0x53a5,	// (0x0003cc27) eswt_control_pane_g1_copy4

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy4_ParamLimits

0x53b2,	// (0x0003cc34) eswt_control_pane_g2_copy4

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy4_ParamLimits

0x53bf,	// (0x0003cc41) eswt_control_pane_g3_copy4

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy4_ParamLimits

0x53cc,	// (0x0003cc4e) eswt_control_pane_g4_copy4

0xc964,	// (0x000441e6) eswt_ctrl_combo_button_pane

0xc96c,	// (0x000441ee) eswt_ctrl_input_pane

0xc974,	// (0x000441f6) popup_choice_list_window_cp70

0xc97c,	// (0x000441fe) eswt_ctrl_input_pane_t1

0xb22c,	// (0x00042aae) input_focus_pane_cp70

0x49e2,	// (0x0003c264) bg_button_pane_cp70_ParamLimits

0x49e2,	// (0x0003c264) bg_button_pane_cp70

0xc98a,	// (0x0004420c) eswt_ctrl_combo_button_pane_g1

0x5496,	// (0x0003cd18) wait_bar_pane_cp70

0x2482,	// (0x00039d04) bg_popup_window_pane_cp70_ParamLimits

0x2482,	// (0x00039d04) bg_popup_window_pane_cp70

0x549e,	// (0x0003cd20) popup_eswt_tasktip_window_t1

0x54b4,	// (0x0003cd36) wait_bar_pane_cp71_ParamLimits

0x54b4,	// (0x0003cd36) wait_bar_pane_cp71

0x54c0,	// (0x0003cd42) grid_eswt_app_pane

0xbc31,	// (0x000434b3) scroll_pane_cp70

0xc992,	// (0x00044214) cell_eswt_app_pane_ParamLimits

0xc992,	// (0x00044214) cell_eswt_app_pane

0xc9c4,	// (0x00044246) cell_eswt_app_pane_g1_ParamLimits

0xc9c4,	// (0x00044246) cell_eswt_app_pane_g1

0xc9f3,	// (0x00044275) cell_eswt_app_pane_g2_ParamLimits

0xc9f3,	// (0x00044275) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x000474ae) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x000474ae) cell_eswt_app_pane_g

0xca1c,	// (0x0004429e) cell_eswt_app_pane_t1_ParamLimits

0xca1c,	// (0x0004429e) cell_eswt_app_pane_t1

0x5585,	// (0x0003ce07) grid_highlight_pane_cp70_ParamLimits

0x5585,	// (0x0003ce07) grid_highlight_pane_cp70

0xf21e,	// (0x00046aa0) set_content_pane_g1

0x9c63,	// (0x000414e5) status_small_volume_pane

0x1046,	// (0x000388c8) status_small_volume_pane_g1

0x104e,	// (0x000388d0) volume_small2_pane

0x1057,	// (0x000388d9) volume_small2_pane_g1

0x1060,	// (0x000388e2) volume_small2_pane_g2

0x1069,	// (0x000388eb) volume_small2_pane_g3

0x1072,	// (0x000388f4) volume_small2_pane_g4

0x107b,	// (0x000388fd) volume_small2_pane_g5

0x1084,	// (0x00038906) volume_small2_pane_g6

0x108d,	// (0x0003890f) volume_small2_pane_g7

0x1096,	// (0x00038918) volume_small2_pane_g8

0x109f,	// (0x00038921) volume_small2_pane_g9

0x10a8,	// (0x0003892a) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x000474b3) volume_small2_pane_g

0x4dd4,	// (0x0003c656) fep_vkb_top_text_pane_g1_ParamLimits

0xc8ea,	// (0x0004416c) fep_vkb_top_text_pane_t1_ParamLimits

0x5087,	// (0x0003c909) popup_preview_fixed_window_g3_ParamLimits

0x5087,	// (0x0003c909) popup_preview_fixed_window_g3

0xa4d7,	// (0x00041d59) popup_toolbar_trans_pane

0xc387,	// (0x00043c09) aid_height_set_list_ParamLimits

0x37d8,	// (0x0003b05a) aid_size_parent_ParamLimits

0x1ede,	// (0x00039760) list_highlight_pane_cp2_ParamLimits

0xf21e,	// (0x00046aa0) set_content_pane_g1_ParamLimits

0xc46f,	// (0x00043cf1) list_single_image_pane_ParamLimits

0xc46f,	// (0x00043cf1) list_single_image_pane

0xca4e,	// (0x000442d0) aid_size_cell_image_ParamLimits

0xca4e,	// (0x000442d0) aid_size_cell_image

0xca5b,	// (0x000442dd) grid_single_image_pane_ParamLimits

0xca5b,	// (0x000442dd) grid_single_image_pane

0xb8e8,	// (0x0004316a) list_single_image_pane_g1_ParamLimits

0xb8e8,	// (0x0004316a) list_single_image_pane_g1

0xb8f4,	// (0x00043176) list_single_image_pane_g2_ParamLimits

0xb8f4,	// (0x00043176) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x000474c8) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x000474c8) list_single_image_pane_g

0x55ac,	// (0x0003ce2e) list_single_image_pane_t1_ParamLimits

0x55ac,	// (0x0003ce2e) list_single_image_pane_t1

0xca69,	// (0x000442eb) cell_image_list_pane_ParamLimits

0xca69,	// (0x000442eb) cell_image_list_pane

0xca7d,	// (0x000442ff) cell_image_list_pane_g1

0xca86,	// (0x00044308) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x000474cd) cell_image_list_pane_g

0x55ea,	// (0x0003ce6c) aid_size_cell_tb_trans_pane

0xb8da,	// (0x0004315c) bg_tb_trans_pane

0x55fc,	// (0x0003ce7e) grid_tb_trans_pane

0x240e,	// (0x00039c90) bg_tb_trans_pane_g1

0x241e,	// (0x00039ca0) bg_tb_trans_pane_g2

0x2416,	// (0x00039c98) bg_tb_trans_pane_g3

0x242e,	// (0x00039cb0) bg_tb_trans_pane_g4

0x2426,	// (0x00039ca8) bg_tb_trans_pane_g5

0x244e,	// (0x00039cd0) bg_tb_trans_pane_g6

0x2446,	// (0x00039cc8) bg_tb_trans_pane_g7

0x2436,	// (0x00039cb8) bg_tb_trans_pane_g8

0x243e,	// (0x00039cc0) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x000474d2) bg_tb_trans_pane_g

0x5610,	// (0x0003ce92) cell_toolbar_trans_pane_ParamLimits

0x5610,	// (0x0003ce92) cell_toolbar_trans_pane

0x4a1d,	// (0x0003c29f) cell_toolbar_trans_pane_g1

0xc6ba,	// (0x00043f3c) list_form2_midp_pane_t1

0xc6c8,	// (0x00043f4a) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0004736f) list_form2_midp_pane_t

0x4671,	// (0x0003bef3) scroll_pane_cp51_ParamLimits

0x4838,	// (0x0003c0ba) form2_midp_wait_pane_g1

0x4841,	// (0x0003c0c3) form2_midp_wait_pane_g2

0x484a,	// (0x0003c0cc) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00047384) form2_midp_wait_pane_g

0xb29c,	// (0x00042b1e) list_highlight_pane_cp21_ParamLimits

0x4883,	// (0x0003c105) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4892,	// (0x0003c114) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd2c2,	// (0x00044b44) list_single_2graphic_im_pane_ParamLimits

0xd2c2,	// (0x00044b44) list_single_2graphic_im_pane

0xca8f,	// (0x00044311) list_single_2graphic_im_pane_g1_ParamLimits

0xca8f,	// (0x00044311) list_single_2graphic_im_pane_g1

0xcaa0,	// (0x00044322) list_single_2graphic_im_pane_g2_ParamLimits

0xcaa0,	// (0x00044322) list_single_2graphic_im_pane_g2

0xcaac,	// (0x0004432e) list_single_2graphic_im_pane_g3_ParamLimits

0xcaac,	// (0x0004432e) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x000474e5) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x000474e5) list_single_2graphic_im_pane_g

0xcac0,	// (0x00044342) list_single_2graphic_im_pane_t1_ParamLimits

0xcac0,	// (0x00044342) list_single_2graphic_im_pane_t1

0x5093,	// (0x0003c915) list_single_graphic_2heading_pane_fp_ParamLimits

0x5093,	// (0x0003c915) list_single_graphic_2heading_pane_fp

0xd648,	// (0x00044eca) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd648,	// (0x00044eca) list_single_graphic_2heading_pane_fp_g1

0x50ac,	// (0x0003c92e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x50ac,	// (0x0003c92e) list_single_graphic_2heading_pane_fp_g2

0xd611,	// (0x00044e93) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd611,	// (0x00044e93) list_single_graphic_2heading_pane_fp_g3

0xd61d,	// (0x00044e9f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd61d,	// (0x00044e9f) list_single_graphic_2heading_pane_fp_g4

0x50b8,	// (0x0003c93a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x50b8,	// (0x0003c93a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004740c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004740c) list_single_graphic_2heading_pane_fp_g

0xd7eb,	// (0x0004506d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd7eb,	// (0x0004506d) list_single_graphic_2heading_pane_fp_t1

0xd680,	// (0x00044f02) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd680,	// (0x00044f02) list_single_graphic_2heading_pane_fp_t2

0xd801,	// (0x00045083) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd801,	// (0x00045083) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x000474ee) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x000474ee) list_single_graphic_2heading_pane_fp_t

0x4a96,	// (0x0003c318) fep_hwr_write_pane_g5_ParamLimits

0x4a96,	// (0x0003c318) fep_hwr_write_pane_g5

0x4aa2,	// (0x0003c324) fep_hwr_write_pane_g6_ParamLimits

0x4aa2,	// (0x0003c324) fep_hwr_write_pane_g6

0x5374,	// (0x0003cbf6) eswt_shell_pane_ParamLimits

0x2482,	// (0x00039d04) bg_popup_window_pane_cp18_ParamLimits

0x371e,	// (0x0003afa0) heading_pane_cp70

0x549e,	// (0x0003cd20) popup_eswt_tasktip_window_t1_ParamLimits

0xa5a1,	// (0x00041e23) aid_touch_tab_arrow_left

0xa5b7,	// (0x00041e39) aid_touch_tab_arrow_right

0x8ee3,	// (0x00040765) title_pane_g3_ParamLimits

0x8ee3,	// (0x00040765) title_pane_g3

0xb899,	// (0x0004311b) set_value_pane_g1

0xa4d7,	// (0x00041d59) popup_toolbar_trans_pane_ParamLimits

0x55ea,	// (0x0003ce6c) aid_size_cell_tb_trans_pane_ParamLimits

0xb8da,	// (0x0004315c) bg_tb_trans_pane_ParamLimits

0x55fc,	// (0x0003ce7e) grid_tb_trans_pane_ParamLimits

0xb3cf,	// (0x00042c51) cont_note_pane_ParamLimits

0xb3cf,	// (0x00042c51) cont_note_pane

0xb655,	// (0x00042ed7) cont_snote2_single_text_pane_ParamLimits

0xb655,	// (0x00042ed7) cont_snote2_single_text_pane

0xb655,	// (0x00042ed7) cont_snote2_single_graphic_pane_ParamLimits

0xb655,	// (0x00042ed7) cont_snote2_single_graphic_pane

0x2a6c,	// (0x0003a2ee) cont_note_wait_pane_ParamLimits

0x2a6c,	// (0x0003a2ee) cont_note_wait_pane

0x2a6c,	// (0x0003a2ee) cont_note_image_pane_ParamLimits

0x2a6c,	// (0x0003a2ee) cont_note_image_pane

0x56a4,	// (0x0003cf26) popup_note2_window_g1_ParamLimits

0x56a4,	// (0x0003cf26) popup_note2_window_g1

0x56d5,	// (0x0003cf57) popup_note2_window_t1_ParamLimits

0x56d5,	// (0x0003cf57) popup_note2_window_t1

0x571a,	// (0x0003cf9c) popup_note2_window_t2_ParamLimits

0x571a,	// (0x0003cf9c) popup_note2_window_t2

0x575f,	// (0x0003cfe1) popup_note2_window_t3_ParamLimits

0x575f,	// (0x0003cfe1) popup_note2_window_t3

0x57a4,	// (0x0003d026) popup_note2_window_t4_ParamLimits

0x57a4,	// (0x0003d026) popup_note2_window_t4

0xb453,	// (0x00042cd5) popup_note2_window_t5_ParamLimits

0xb453,	// (0x00042cd5) popup_note2_window_t5

0x0004,

0xfc78,	// (0x000474fa) popup_note2_window_t_ParamLimits

0xfc78,	// (0x000474fa) popup_note2_window_t

0x57d3,	// (0x0003d055) popup_note2_image_window_g1_ParamLimits

0x57d3,	// (0x0003d055) popup_note2_image_window_g1

0x57df,	// (0x0003d061) popup_note2_image_window_g2_ParamLimits

0x57df,	// (0x0003d061) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00047505) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00047505) popup_note2_image_window_g

0x57f1,	// (0x0003d073) popup_note2_image_window_t1_ParamLimits

0x57f1,	// (0x0003d073) popup_note2_image_window_t1

0x5809,	// (0x0003d08b) popup_note2_image_window_t2_ParamLimits

0x5809,	// (0x0003d08b) popup_note2_image_window_t2

0x5821,	// (0x0003d0a3) popup_note2_image_window_t3_ParamLimits

0x5821,	// (0x0003d0a3) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0004750a) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0004750a) popup_note2_image_window_t

0x2a7a,	// (0x0003a2fc) popup_note2_wait_window_g1_ParamLimits

0x2a7a,	// (0x0003a2fc) popup_note2_wait_window_g1

0x583d,	// (0x0003d0bf) popup_note2_wait_window_g2_ParamLimits

0x583d,	// (0x0003d0bf) popup_note2_wait_window_g2

0x2a92,	// (0x0003a314) popup_note2_wait_window_g3_ParamLimits

0x2a92,	// (0x0003a314) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00047511) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00047511) popup_note2_wait_window_g

0x5849,	// (0x0003d0cb) popup_note2_wait_window_t1_ParamLimits

0x5849,	// (0x0003d0cb) popup_note2_wait_window_t1

0x5867,	// (0x0003d0e9) popup_note2_wait_window_t2_ParamLimits

0x5867,	// (0x0003d0e9) popup_note2_wait_window_t2

0x5885,	// (0x0003d107) popup_note2_wait_window_t3_ParamLimits

0x5885,	// (0x0003d107) popup_note2_wait_window_t3

0x5897,	// (0x0003d119) popup_note2_wait_window_t4_ParamLimits

0x5897,	// (0x0003d119) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00047518) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00047518) popup_note2_wait_window_t

0x58a9,	// (0x0003d12b) wait_bar2_pane_ParamLimits

0x58a9,	// (0x0003d12b) wait_bar2_pane

0x58c1,	// (0x0003d143) popup_snote2_single_text_window_g1_ParamLimits

0x58c1,	// (0x0003d143) popup_snote2_single_text_window_g1

0x58e9,	// (0x0003d16b) popup_snote2_single_text_window_t1_ParamLimits

0x58e9,	// (0x0003d16b) popup_snote2_single_text_window_t1

0x5956,	// (0x0003d1d8) popup_snote2_single_text_window_t2_ParamLimits

0x5956,	// (0x0003d1d8) popup_snote2_single_text_window_t2

0x59a2,	// (0x0003d224) popup_snote2_single_text_window_t3_ParamLimits

0x59a2,	// (0x0003d224) popup_snote2_single_text_window_t3

0x59e3,	// (0x0003d265) popup_snote2_single_text_window_t4_ParamLimits

0x59e3,	// (0x0003d265) popup_snote2_single_text_window_t4

0x5a19,	// (0x0003d29b) popup_snote2_single_text_window_t5_ParamLimits

0x5a19,	// (0x0003d29b) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00047521) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00047521) popup_snote2_single_text_window_t

0x5a44,	// (0x0003d2c6) popup_snote2_single_graphic_window_g1_ParamLimits

0x5a44,	// (0x0003d2c6) popup_snote2_single_graphic_window_g1

0x5a6c,	// (0x0003d2ee) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a6c,	// (0x0003d2ee) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x0004752c) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x0004752c) popup_snote2_single_graphic_window_g

0x5a94,	// (0x0003d316) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a94,	// (0x0003d316) popup_snote2_single_graphic_window_t1

0x5ae0,	// (0x0003d362) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ae0,	// (0x0003d362) popup_snote2_single_graphic_window_t2

0x59a2,	// (0x0003d224) popup_snote2_single_graphic_window_t3_ParamLimits

0x59a2,	// (0x0003d224) popup_snote2_single_graphic_window_t3

0x59e3,	// (0x0003d265) popup_snote2_single_graphic_window_t4_ParamLimits

0x59e3,	// (0x0003d265) popup_snote2_single_graphic_window_t4

0x5a19,	// (0x0003d29b) popup_snote2_single_graphic_window_t5_ParamLimits

0x5a19,	// (0x0003d29b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00047531) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00047531) popup_snote2_single_graphic_window_t

0x4521,	// (0x0003bda3) clock_nsta_pane_cp2_t1

0x4521,	// (0x0003bda3) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00047345) clock_nsta_pane_cp2_t

0xd11f,	// (0x000449a1) form_field_data_wide_pane_g1_ParamLimits

0xb8e8,	// (0x0004316a) form_field_data_wide_pane_g2_ParamLimits

0xb8e8,	// (0x0004316a) form_field_data_wide_pane_g2

0xb8f4,	// (0x00043176) form_field_data_wide_pane_g3_ParamLimits

0xb8f4,	// (0x00043176) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00046efd) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00046efd) form_field_data_wide_pane_g

0xc5d1,	// (0x00043e53) grid_touch_3_pane_ParamLimits

0xc5d1,	// (0x00043e53) grid_touch_3_pane

0xcaf1,	// (0x00044373) cell_touch_3_pane_ParamLimits

0xcaf1,	// (0x00044373) cell_touch_3_pane

0x4a1d,	// (0x0003c29f) cell_touch_3_pane_g1

0x4a1d,	// (0x0003c29f) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x000473ca) cell_touch_3_pane_g

0xb4ab,	// (0x00042d2d) cont_query_data_pane

0xb4b3,	// (0x00042d35) cont_query_data_pane_cp1

0x5b5f,	// (0x0003d3e1) button_value_adjust_pane_cp7

0x5b67,	// (0x0003d3e9) query_popup_pane_cp3

0xbe02,	// (0x00043684) bg_popup_sub_pane_cp22_ParamLimits

0xee3b,	// (0x000466bd) navi_navi_volume_pane_cp2

0xee56,	// (0x000466d8) popup_side_volume_key_window_g2

0xee65,	// (0x000466e7) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00046f93) popup_side_volume_key_window_g

0xee82,	// (0x00046704) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00046f9a) popup_side_volume_key_window_t

0xf0e4,	// (0x00046966) popup_side_volume_key_window_ParamLimits

0x93b9,	// (0x00040c3b) list_double_graphic_pane_g4_ParamLimits

0x93b9,	// (0x00040c3b) list_double_graphic_pane_g4

0xaa0a,	// (0x0004228c) list_single_2heading_msg_pane_ParamLimits

0xaa0a,	// (0x0004228c) list_single_2heading_msg_pane

0xaaa3,	// (0x00042325) list_single_2heading_msg_pane_g1_ParamLimits

0xaaa3,	// (0x00042325) list_single_2heading_msg_pane_g1

0xaaaf,	// (0x00042331) list_single_2heading_msg_pane_g2_ParamLimits

0xaaaf,	// (0x00042331) list_single_2heading_msg_pane_g2

0xaac2,	// (0x00042344) list_single_2heading_msg_pane_g3_ParamLimits

0xaac2,	// (0x00042344) list_single_2heading_msg_pane_g3

0xaace,	// (0x00042350) list_single_2heading_msg_pane_g4_ParamLimits

0xaace,	// (0x00042350) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x0004753c) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x0004753c) list_single_2heading_msg_pane_g

0xaae6,	// (0x00042368) list_single_2heading_msg_pane_t1_ParamLimits

0xaae6,	// (0x00042368) list_single_2heading_msg_pane_t1

0xab0e,	// (0x00042390) list_single_2heading_msg_pane_t2_ParamLimits

0xab0e,	// (0x00042390) list_single_2heading_msg_pane_t2

0xab79,	// (0x000423fb) list_single_2heading_msg_pane_t3_ParamLimits

0xab79,	// (0x000423fb) list_single_2heading_msg_pane_t3

0xd821,	// (0x000450a3) list_single_2heading_msg_pane_t4_ParamLimits

0xd821,	// (0x000450a3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00047545) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00047545) list_single_2heading_msg_pane_t

0xb24a,	// (0x00042acc) title_pane_g4_ParamLimits

0xb24a,	// (0x00042acc) title_pane_g4

0xebdc,	// (0x0004645e) title_pane_stacon_g3_ParamLimits

0xebdc,	// (0x0004645e) title_pane_stacon_g3

0x5667,	// (0x0003cee9) list_single_2graphic_im_pane_g4_ParamLimits

0x5667,	// (0x0003cee9) list_single_2graphic_im_pane_g4

0x34dc,	// (0x0003ad5e) popup_side_volume_key_window_cp

0x3d4b,	// (0x0003b5cd) main_idle_act2_pane_t1

0x071c,	// (0x00037f9e) toolbar_button_pane_g10

0x9260,	// (0x00040ae2) popup_toolbar_window_cp1

0x4512,	// (0x0003bd94) clock_nsta_pane_cp_t1

0x4512,	// (0x0003bd94) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00047340) clock_nsta_pane_cp_t

0xee3b,	// (0x000466bd) navi_navi_volume_pane_cp2_ParamLimits

0xee4a,	// (0x000466cc) popup_side_volume_key_window_g1_ParamLimits

0xee56,	// (0x000466d8) popup_side_volume_key_window_g2_ParamLimits

0xee65,	// (0x000466e7) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00046f93) popup_side_volume_key_window_g_ParamLimits

0x0c61,	// (0x000384e3) fep_hwr_aid_pane

0x0d0a,	// (0x0003858c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4a66,	// (0x0003c2e8) fep_hwr_top_pane_g1_ParamLimits

0x4a78,	// (0x0003c2fa) fep_hwr_top_pane_g2_ParamLimits

0x0d2a,	// (0x000385ac) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00047395) fep_hwr_top_pane_g_ParamLimits

0x0d3f,	// (0x000385c1) fep_hwr_top_text_pane_ParamLimits

0x3291,	// (0x0003ab13) aid_touch_tab_arrow_arrow_2

0x329a,	// (0x0003ab1c) aid_touch_tab_arrow_left_2

0x0c75,	// (0x000384f7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cac,	// (0x0003852e) fep_hwr_prediction_pane

0x4bce,	// (0x0003c450) fep_vkb_prediction_pane

0xc8ca,	// (0x0004414c) fep_vkb_side_pane_g3_ParamLimits

0xc8ca,	// (0x0004414c) fep_vkb_side_pane_g3

0x0ece,	// (0x00038750) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f3f,	// (0x000387c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f4c,	// (0x000387ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00047444) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1176,	// (0x000389f8) fep_hwr_prediction_pane_g1

0x1180,	// (0x00038a02) fep_hwr_prediction_pane_g2

0x1188,	// (0x00038a0a) fep_hwr_prediction_pane_g3

0x1190,	// (0x00038a12) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x0004754e) fep_hwr_prediction_pane_g

0x5b8e,	// (0x0003d410) fep_vkb_prediction_pane_g1

0x5b98,	// (0x0003d41a) fep_vkb_prediction_pane_g2

0x5ba0,	// (0x0003d422) fep_vkb_prediction_pane_g3

0x5ba8,	// (0x0003d42a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00047557) fep_vkb_prediction_pane_g

0x0a6d,	// (0x000382ef) slider_set_pane_g3

0x0a81,	// (0x00038303) slider_set_pane_g4

0x0a99,	// (0x0003831b) slider_set_pane_g5

0x0a6d,	// (0x000382ef) slider_set_pane_g6

0x0aaf,	// (0x00038331) slider_set_pane_g7

0x3957,	// (0x0003b1d9) slider_form_pane_g3

0x3960,	// (0x0003b1e2) slider_form_pane_g4

0x3968,	// (0x0003b1ea) slider_form_pane_g5

0x3957,	// (0x0003b1d9) slider_form_pane_g6

0xc42e,	// (0x00043cb0) slider_form_pane_g7

0x3ff9,	// (0x0003b87b) slider_set_pane_vc_g3

0x4002,	// (0x0003b884) slider_set_pane_vc_g4

0x400b,	// (0x0003b88d) slider_set_pane_vc_g5

0x3ff9,	// (0x0003b87b) slider_set_pane_vc_g6

0x4014,	// (0x0003b896) slider_set_pane_vc_g7

0x41e8,	// (0x0003ba6a) slider_form_pane_vc_g1

0x41f1,	// (0x0003ba73) slider_form_pane_vc_g2

0x41fa,	// (0x0003ba7c) slider_form_pane_vc_g3

0x41e8,	// (0x0003ba6a) slider_form_pane_vc_g4

0x4203,	// (0x0003ba85) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00047312) slider_form_pane_vc_g

0xe9e0,	// (0x00046262) main_idle_act3_pane

0x5bb0,	// (0x0003d432) ai3_links_pane

0xcb3d,	// (0x000443bf) popup_ai3_data_window_ParamLimits

0xcb3d,	// (0x000443bf) popup_ai3_data_window

0xb22c,	// (0x00042aae) grid_ai3_links_pane

0xcb5b,	// (0x000443dd) cell_ai3_links_pane_ParamLimits

0xcb5b,	// (0x000443dd) cell_ai3_links_pane

0x5bf1,	// (0x0003d473) bg_popup_sub_pane_cp11

0x5bfe,	// (0x0003d480) cell_ai3_links_pane_g1

0xb22c,	// (0x00042aae) bg_popup_sub_pane_cp12

0x5c23,	// (0x0003d4a5) heading_ai3_data_pane

0x5c2b,	// (0x0003d4ad) list_ai3_gene_pane

0x5c37,	// (0x0003d4b9) popup_ai3_data_window_g1

0x5c3f,	// (0x0003d4c1) heading_ai3_data_pane_g1

0x5c47,	// (0x0003d4c9) heading_ai3_data_pane_t1

0x5c55,	// (0x0003d4d7) list_double_ai3_gene_pane_ParamLimits

0x5c55,	// (0x0003d4d7) list_double_ai3_gene_pane

0x5c62,	// (0x0003d4e4) list_single_ai3_gene_pane_ParamLimits

0x5c62,	// (0x0003d4e4) list_single_ai3_gene_pane

0x49e2,	// (0x0003c264) list_highlight_pane_cp7_ParamLimits

0x49e2,	// (0x0003c264) list_highlight_pane_cp7

0x5c6f,	// (0x0003d4f1) list_single_a13_gene_pane_t1_ParamLimits

0x5c6f,	// (0x0003d4f1) list_single_a13_gene_pane_t1

0x5c86,	// (0x0003d508) list_single_ai3_gene_pane_g1

0x5c8f,	// (0x0003d511) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00047560) list_single_ai3_gene_pane_g

0x5c97,	// (0x0003d519) list_double_ai3_gene_pane_g1_ParamLimits

0x5c97,	// (0x0003d519) list_double_ai3_gene_pane_g1

0x5ca3,	// (0x0003d525) list_double_ai3_gene_pane_t1_ParamLimits

0x5ca3,	// (0x0003d525) list_double_ai3_gene_pane_t1

0x5cbf,	// (0x0003d541) list_double_ai3_gene_pane_t2_ParamLimits

0x5cbf,	// (0x0003d541) list_double_ai3_gene_pane_t2

0x5cd4,	// (0x0003d556) list_double_ai3_gene_pane_t3_ParamLimits

0x5cd4,	// (0x0003d556) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00047565) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00047565) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd817,	// (0x00045099) aid_size_min_col_2

0xcb27,	// (0x000443a9) aid_size_min_msg_ParamLimits

0xcb27,	// (0x000443a9) aid_size_min_msg

0xc8de,	// (0x00044160) fep_vkb_top_text_pane_g2_ParamLimits

0xc8de,	// (0x00044160) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000473c5) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000473c5) fep_vkb_top_text_pane_g

0xe9e0,	// (0x00046262) main_hc_apps_shell_pane

0x5cf1,	// (0x0003d573) grid_hc_apps_pane_ParamLimits

0x5cf1,	// (0x0003d573) grid_hc_apps_pane

0x5d00,	// (0x0003d582) list_hc_apps_pane

0x5d08,	// (0x0003d58a) scroll_pane_cp37_ParamLimits

0x5d08,	// (0x0003d58a) scroll_pane_cp37

0xcb75,	// (0x000443f7) cell_hc_apps_pane_ParamLimits

0xcb75,	// (0x000443f7) cell_hc_apps_pane

0xcc3f,	// (0x000444c1) cell_hc_apps_pane_g1_ParamLimits

0xcc3f,	// (0x000444c1) cell_hc_apps_pane_g1

0x5dfd,	// (0x0003d67f) cell_hc_apps_pane_g2_ParamLimits

0x5dfd,	// (0x0003d67f) cell_hc_apps_pane_g2

0x5e19,	// (0x0003d69b) cell_hc_apps_pane_g3_ParamLimits

0x5e19,	// (0x0003d69b) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x0004756c) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x0004756c) cell_hc_apps_pane_g

0xcc6c,	// (0x000444ee) cell_hc_apps_pane_t1_ParamLimits

0xcc6c,	// (0x000444ee) cell_hc_apps_pane_t1

0xb3cf,	// (0x00042c51) grid_highlight_pane_cp10_ParamLimits

0xb3cf,	// (0x00042c51) grid_highlight_pane_cp10

0xccac,	// (0x0004452e) list_single_hc_apps_pane_ParamLimits

0xccac,	// (0x0004452e) list_single_hc_apps_pane

0xcce6,	// (0x00044568) list_single_hc_apps_pane_g1

0xabe7,	// (0x00042469) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00047573) list_single_hc_apps_pane_g

0xac00,	// (0x00042482) list_single_hc_apps_pane_g2_copy1

0xac1c,	// (0x0004249e) list_single_hc_apps_pane_t1

0xb29c,	// (0x00042b1e) bg_set_opt_pane_cp_ParamLimits

0xeb03,	// (0x00046385) setting_slider_pane_t1_ParamLimits

0xeb1c,	// (0x0004639e) setting_slider_pane_t2_ParamLimits

0xeb36,	// (0x000463b8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00046de0) setting_slider_pane_t_ParamLimits

0xeb4e,	// (0x000463d0) slider_set_pane_ParamLimits

0xf53f,	// (0x00046dc1) control_pane_g5_ParamLimits

0xf53f,	// (0x00046dc1) control_pane_g5

0x378a,	// (0x0003b00c) slider_set_pane_g1_ParamLimits

0x0a61,	// (0x000382e3) slider_set_pane_g2_ParamLimits

0x0a6d,	// (0x000382ef) slider_set_pane_g3_ParamLimits

0x0a81,	// (0x00038303) slider_set_pane_g4_ParamLimits

0x0a99,	// (0x0003831b) slider_set_pane_g5_ParamLimits

0x0a6d,	// (0x000382ef) slider_set_pane_g6_ParamLimits

0x0aaf,	// (0x00038331) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x000471e1) slider_set_pane_g_ParamLimits

0xf1c9,	// (0x00046a4b) navi_icon_text_pane_ParamLimits

0xa568,	// (0x00041dea) aid_fill_nsta_2_ParamLimits

0xa5a1,	// (0x00041e23) aid_touch_tab_arrow_left_ParamLimits

0xa5b7,	// (0x00041e39) aid_touch_tab_arrow_right_ParamLimits

0xa652,	// (0x00041ed4) clock_nsta_pane_ParamLimits

0xc26e,	// (0x00043af0) navi_icon_pane_g1_ParamLimits

0xc27a,	// (0x00043afc) navi_text_pane_t1_ParamLimits

0xc69c,	// (0x00043f1e) navi_icon_text_pane_g1_ParamLimits

0xc6a8,	// (0x00043f2a) navi_icon_text_pane_t1_ParamLimits

0xcce6,	// (0x00044568) list_single_hc_apps_pane_g1_ParamLimits

0xabe7,	// (0x00042469) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00047573) list_single_hc_apps_pane_g_ParamLimits

0xac00,	// (0x00042482) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xac1c,	// (0x0004249e) list_single_hc_apps_pane_t1_ParamLimits

0x8dd2,	// (0x00040654) popup_toolbar2_fixed_window_ParamLimits

0x8dd2,	// (0x00040654) popup_toolbar2_fixed_window

0xa4cd,	// (0x00041d4f) popup_toolbar2_float_window

0xb22c,	// (0x00042aae) bg_popup_sub_pane_cp27

0x5ed3,	// (0x0003d755) grid_toolbar2_float_pane

0xb22c,	// (0x00042aae) bg_popup_sub_pane_cp26

0x5ed3,	// (0x0003d755) grid_toolbar2_fixed_pane

0xccff,	// (0x00044581) cell_toolbar2_fixed_pane_ParamLimits

0xccff,	// (0x00044581) cell_toolbar2_fixed_pane

0xcd19,	// (0x0004459b) cell_toolbar2_fixed_pane_g1

0x5ef4,	// (0x0003d776) toolbar2_fixed_button_pane

0x240e,	// (0x00039c90) toolbar2_fixed_button_pane_g1

0x241e,	// (0x00039ca0) toolbar2_fixed_button_pane_g2

0x2416,	// (0x00039c98) toolbar2_fixed_button_pane_g3

0x242e,	// (0x00039cb0) toolbar2_fixed_button_pane_g4

0x2426,	// (0x00039ca8) toolbar2_fixed_button_pane_g5

0x2436,	// (0x00039cb8) toolbar2_fixed_button_pane_g6

0x243e,	// (0x00039cc0) toolbar2_fixed_button_pane_g7

0x244e,	// (0x00039cd0) toolbar2_fixed_button_pane_g8

0x2446,	// (0x00039cc8) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x000470e3) toolbar2_fixed_button_pane_g

0x5efc,	// (0x0003d77e) cell_toolbar2_float_pane_ParamLimits

0x5efc,	// (0x0003d77e) cell_toolbar2_float_pane

0x5f0d,	// (0x0003d78f) cell_toolbar2_float_pane_g1

0x5ef4,	// (0x0003d776) toolbar2_fixed_button_pane_cp

0xc7c6,	// (0x00044048) fep_vkb_accented_list_pane_ParamLimits

0xc7c6,	// (0x00044048) fep_vkb_accented_list_pane

0x0eae,	// (0x00038730) bg_popup_fep_shadow_pane_g9

0xf341,	// (0x00046bc3) bg_popup_fep_shadow_pane_cp3

0xb9ea,	// (0x0004326c) list_accented_list_pane

0x5f16,	// (0x0003d798) list_single_accented_list_pane_ParamLimits

0x5f16,	// (0x0003d798) list_single_accented_list_pane

0xf341,	// (0x00046bc3) list_highlight_pane_cp10

0x5f27,	// (0x0003d7a9) list_single_accented_list_pane_t1

0xa3eb,	// (0x00041c6d) popup_slider_window_ParamLimits

0xa3eb,	// (0x00041c6d) popup_slider_window

0x5b6f,	// (0x0003d3f1) aid_indentation_list_msg

0xce1c,	// (0x0004469e) bg_popup_window_pane_cp19

0x6063,	// (0x0003d8e5) popup_slider_window_g1

0x607f,	// (0x0003d901) popup_slider_window_g2

0x609b,	// (0x0003d91d) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00047578) popup_slider_window_g

0x6101,	// (0x0003d983) popup_slider_window_t1

0x6175,	// (0x0003d9f7) small_volume_slider_vertical_pane

0x4a1d,	// (0x0003c29f) small_volume_slider_vertical_pane_g1

0x4a1d,	// (0x0003c29f) small_volume_slider_vertical_pane_g2

0x6191,	// (0x0003da13) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x0004758a) small_volume_slider_vertical_pane_g

0x8d3c,	// (0x000405be) area_side_right_pane_ParamLimits

0x8d3c,	// (0x000405be) area_side_right_pane

0xac4a,	// (0x000424cc) aid_size_side_button_ParamLimits

0xac4a,	// (0x000424cc) aid_size_side_button

0xac63,	// (0x000424e5) grid_sctrl_middle_pane_ParamLimits

0xac63,	// (0x000424e5) grid_sctrl_middle_pane

0x122e,	// (0x00038ab0) sctrl_sk_bottom_pane

0x123f,	// (0x00038ac1) sctrl_sk_top_pane

0x1251,	// (0x00038ad3) aid_touch_sctrl_top

0x125e,	// (0x00038ae0) bg_sctrl_sk_pane_ParamLimits

0x125e,	// (0x00038ae0) bg_sctrl_sk_pane

0x126c,	// (0x00038aee) sctrl_sk_top_pane_g1

0x1279,	// (0x00038afb) sctrl_sk_top_pane_t1

0x1251,	// (0x00038ad3) aid_touch_sctrl_bottom

0x125e,	// (0x00038ae0) bg_sctrl_sk_pane_cp_ParamLimits

0x125e,	// (0x00038ae0) bg_sctrl_sk_pane_cp

0x1294,	// (0x00038b16) sctrl_sk_bottom_pane_g1

0x1279,	// (0x00038afb) sctrl_sk_bottom_pane_t1

0xac7d,	// (0x000424ff) cell_sctrl_middle_pane_ParamLimits

0xac7d,	// (0x000424ff) cell_sctrl_middle_pane

0xac90,	// (0x00042512) aid_touch_sctrl_middle_ParamLimits

0xac90,	// (0x00042512) aid_touch_sctrl_middle

0xac9d,	// (0x0004251f) bg_sctrl_middle_pane_ParamLimits

0xac9d,	// (0x0004251f) bg_sctrl_middle_pane

0x1917,	// (0x00039199) cell_sctrl_middle_pane_g1_ParamLimits

0x1917,	// (0x00039199) cell_sctrl_middle_pane_g1

0xacab,	// (0x0004252d) cell_sctrl_middle_pane_g2_ParamLimits

0xacab,	// (0x0004252d) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00047596) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00047596) cell_sctrl_middle_pane_g

0x240e,	// (0x00039c90) bg_sctrl_middle_pane_g1

0x2416,	// (0x00039c98) bg_sctrl_middle_pane_g2

0x241e,	// (0x00039ca0) bg_sctrl_middle_pane_g3

0x2426,	// (0x00039ca8) bg_sctrl_middle_pane_g4

0x242e,	// (0x00039cb0) bg_sctrl_middle_pane_g5

0x2436,	// (0x00039cb8) bg_sctrl_middle_pane_g6

0x243e,	// (0x00039cc0) bg_sctrl_middle_pane_g7

0x2446,	// (0x00039cc8) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x0004759b) bg_sctrl_middle_pane_g

0x244e,	// (0x00039cd0) bg_sctrl_middle_pane_g8_copy1

0x240e,	// (0x00039c90) bg_sctrl_sk_pane_g1

0x241e,	// (0x00039ca0) bg_sctrl_sk_pane_g2

0x2416,	// (0x00039c98) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x000470e3) bg_sctrl_sk_pane_g

0xb813,	// (0x00043095) aid_size_touch_scroll_bar

0x242e,	// (0x00039cb0) bg_sctrl_sk_pane_g4

0x2426,	// (0x00039ca8) bg_sctrl_sk_pane_g5

0x2436,	// (0x00039cb8) bg_sctrl_sk_pane_g6

0x243e,	// (0x00039cc0) bg_sctrl_sk_pane_g7

0x244e,	// (0x00039cd0) bg_sctrl_sk_pane_g8

0x2446,	// (0x00039cc8) bg_sctrl_sk_pane_g9

0x016b,	// (0x000379ed) popup_fep_china_hwr2_fs_candidate_window

0x9ea3,	// (0x00041725) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9ea3,	// (0x00041725) popup_fep_china_hwr2_fs_control_window

0x0ece,	// (0x00038750) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00047591) sctrl_sk_top_pane_g

0xced4,	// (0x00044756) aid_fep_china_hwr2_fs_cell_ParamLimits

0xced4,	// (0x00044756) aid_fep_china_hwr2_fs_cell

0xceea,	// (0x0004476c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xceea,	// (0x0004476c) bg_popup_fep_shadow_pane_cp4

0xcf01,	// (0x00044783) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf01,	// (0x00044783) bg_popup_fep_shadow_pane_cp5

0xcf13,	// (0x00044795) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf13,	// (0x00044795) popup_fep_china_hwr2_fs_control_bar_grid

0xcf27,	// (0x000447a9) popup_fep_china_hwr2_fs_control_funtion_grid

0x61f0,	// (0x0003da72) aid_fep_china_hwr2_fs_candi_cell

0xb22c,	// (0x00042aae) bg_popup_fep_shadow_pane_cp6

0x61fa,	// (0x0003da7c) popup_fep_china_hwr2_fs_candidate_grid

0xcf2f,	// (0x000447b1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf2f,	// (0x000447b1) cell_fep_china_hwr2_fs_funtion_grid

0x4a1d,	// (0x0003c29f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x621c,	// (0x0003da9e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x621c,	// (0x0003da9e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x622a,	// (0x0003daac) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x622a,	// (0x0003daac) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x000475ac) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x000475ac) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf47,	// (0x000447c9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf47,	// (0x000447c9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf5c,	// (0x000447de) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf5c,	// (0x000447de) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x000475b1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x000475b1) cell_fep_china_hwr2_fs_funtion_grid_t

0x6271,	// (0x0003daf3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6279,	// (0x0003dafb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6281,	// (0x0003db03) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x000475b6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6289,	// (0x0003db0b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6289,	// (0x0003db0b) cell_fep_china_hwr2_fs_candidate_grid

0x62a8,	// (0x0003db2a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x62b0,	// (0x0003db32) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4a1d,	// (0x0003c29f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4a1d,	// (0x0003c29f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x000473ca) cell_fep_china_hwr2_fs_candidate_grid_g

0x62b8,	// (0x0003db3a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1ff6,	// (0x00039878) clock_nsta_pane_cp_24_ParamLimits

0x1ff6,	// (0x00039878) clock_nsta_pane_cp_24

0x2076,	// (0x000398f8) indicator_nsta_pane_cp_24_ParamLimits

0x2076,	// (0x000398f8) indicator_nsta_pane_cp_24

0x30ef,	// (0x0003a971) heading_pane_g1

0x0001,

0xf8c6,	// (0x00047148) heading_pane_g

0x3b92,	// (0x0003b414) grid_sct_catagory_button_pane

0x3bc4,	// (0x0003b446) scroll_pane_cp5_ParamLimits

0x467d,	// (0x0003beff) button_value_adjust_pane_cp5_ParamLimits

0x467d,	// (0x0003beff) button_value_adjust_pane_cp5

0x4762,	// (0x0003bfe4) form2_midp_time_pane_ParamLimits

0x62c6,	// (0x0003db48) cell_sct_catagory_button_pane_ParamLimits

0x62c6,	// (0x0003db48) cell_sct_catagory_button_pane

0x49e2,	// (0x0003c264) bg_button_pane_cp01_ParamLimits

0x49e2,	// (0x0003c264) bg_button_pane_cp01

0x4a1d,	// (0x0003c29f) cell_sct_catagory_button_pane_g1

0xa46a,	// (0x00041cec) popup_tb_extension_window

0xcf78,	// (0x000447fa) aid_size_cell_ext_ParamLimits

0xcf78,	// (0x000447fa) aid_size_cell_ext

0xb655,	// (0x00042ed7) bg_tb_trans_pane_cp1_ParamLimits

0xb655,	// (0x00042ed7) bg_tb_trans_pane_cp1

0xd846,	// (0x000450c8) grid_tb_ext_pane_ParamLimits

0xd846,	// (0x000450c8) grid_tb_ext_pane

0xd883,	// (0x00045105) cell_tb_ext_pane_ParamLimits

0xd883,	// (0x00045105) cell_tb_ext_pane

0xd8ab,	// (0x0004512d) cell_tb_ext_pane_g1_ParamLimits

0xd8ab,	// (0x0004512d) cell_tb_ext_pane_g1

0x635a,	// (0x0003dbdc) cell_tb_ext_pane_t1

0xb3cf,	// (0x00042c51) list_highlight_pane_cp11_ParamLimits

0xb3cf,	// (0x00042c51) list_highlight_pane_cp11

0x8de7,	// (0x00040669) popup_uni_indicator_window_ParamLimits

0x8de7,	// (0x00040669) popup_uni_indicator_window

0xb8da,	// (0x0004315c) bg_popup_sub_pane_cp14

0x6375,	// (0x0003dbf7) list_uniindi_pane

0x6381,	// (0x0003dc03) uniindi_top_pane

0xb3cf,	// (0x00042c51) bg_uniindi_top_pane

0x63a2,	// (0x0003dc24) uniindi_top_pane_g1

0x63b8,	// (0x0003dc3a) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x000475bd) uniindi_top_pane_g

0x63e2,	// (0x0003dc64) uniindi_top_pane_t1

0x640e,	// (0x0003dc90) list_single_uniindi_pane_ParamLimits

0x640e,	// (0x0003dc90) list_single_uniindi_pane

0x4a1d,	// (0x0003c29f) bg_uniindi_top_pane_g1

0x6420,	// (0x0003dca2) list_single_uniindi_pane_g1

0x6433,	// (0x0003dcb5) list_single_uniindi_pane_t1

0xe9e0,	// (0x00046262) control_bg_pane

0x6458,	// (0x0003dcda) bg_sctrl_sk_pane_cp1

0x6461,	// (0x0003dce3) bg_sctrl_sk_pane_cp2

0x646a,	// (0x0003dcec) control_bg_pane_g1

0x6473,	// (0x0003dcf5) control_bg_pane_g2

0x0001,

0xfd44,	// (0x000475c6) control_bg_pane_g

0x44c6,	// (0x0003bd48) cell_indicator_nsta_pane_g1_ParamLimits

0xc5fe,	// (0x00043e80) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0004732e) cell_indicator_nsta_pane_g_ParamLimits

0xd5f1,	// (0x00044e73) form2_midp_time_pane_t1_ParamLimits

0x0c53,	// (0x000384d5) main_idle_act4_pane_ParamLimits

0x0c53,	// (0x000384d5) main_idle_act4_pane

0xa46a,	// (0x00041cec) popup_tb_extension_window_ParamLimits

0xd86b,	// (0x000450ed) tb_ext_find_pane_ParamLimits

0xd86b,	// (0x000450ed) tb_ext_find_pane

0x647c,	// (0x0003dcfe) ai_gene_pane_1_cp1

0xf3c7,	// (0x00046c49) ai_gene_pane_2_cp1

0x6484,	// (0x0003dd06) list_single_idle_plugin_calendar_pane

0x648d,	// (0x0003dd0f) list_single_idle_plugin_notification_pane

0x6496,	// (0x0003dd18) list_single_idle_plugin_player_pane

0xd8c8,	// (0x0004514a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd8c8,	// (0x0004514a) list_single_idle_plugin_shortcut_pane

0xd8f0,	// (0x00045172) main_idle_act4_pane_t1

0xd908,	// (0x0004518a) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x000475cb) main_idle_act4_pane_t

0xd920,	// (0x000451a2) middle_sk_idle_act4_pane_ParamLimits

0xd920,	// (0x000451a2) middle_sk_idle_act4_pane

0xd93c,	// (0x000451be) popup_clock_digital_analogue_window_cp2

0xd963,	// (0x000451e5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd963,	// (0x000451e5) shortcut_wheel_idle_act4_pane

0x4a1d,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g1

0x4a1d,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g2

0x4a1d,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g3

0x4a1d,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g4

0x4a1d,	// (0x0003c29f) shortcut_wheel_idle_act4_pane_g5

0x6529,	// (0x0003ddab) shortcut_wheel_idle_act4_pane_g6

0x6531,	// (0x0003ddb3) shortcut_wheel_idle_act4_pane_g7

0x6539,	// (0x0003ddbb) shortcut_wheel_idle_act4_pane_g8

0x6541,	// (0x0003ddc3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x000475d0) shortcut_wheel_idle_act4_pane_g

0xcf9e,	// (0x00044820) middle_sk_idle_act4_pane_g1_ParamLimits

0xcf9e,	// (0x00044820) middle_sk_idle_act4_pane_g1

0xd9e0,	// (0x00045262) middle_sk_idle_act4_pane_g2_ParamLimits

0xd9e0,	// (0x00045262) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x000475f3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x000475f3) middle_sk_idle_act4_pane_g

0xd9f8,	// (0x0004527a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9f8,	// (0x0004527a) middle_sk_idle_act4_pane_t1

0xda27,	// (0x000452a9) grid_ai_shortcut_pane_ParamLimits

0xda27,	// (0x000452a9) grid_ai_shortcut_pane

0xda44,	// (0x000452c6) list_highlight_pane_cp16_ParamLimits

0xda44,	// (0x000452c6) list_highlight_pane_cp16

0xda51,	// (0x000452d3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda51,	// (0x000452d3) list_single_idle_plugin_shortcut_pane_g1

0xda5d,	// (0x000452df) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda5d,	// (0x000452df) list_single_idle_plugin_shortcut_pane_g2

0xda7b,	// (0x000452fd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda7b,	// (0x000452fd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x000475f8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x000475f8) list_single_idle_plugin_shortcut_pane_g

0xda90,	// (0x00045312) cell_ai_shortcut_pane_ParamLimits

0xda90,	// (0x00045312) cell_ai_shortcut_pane

0xdaa6,	// (0x00045328) cell_ai_shortcut_pane_g1_ParamLimits

0xdaa6,	// (0x00045328) cell_ai_shortcut_pane_g1

0x647c,	// (0x0003dcfe) ai_gene_pane_1_cp2

0x6672,	// (0x0003def4) ai_gene_pane_2_cp2

0x667a,	// (0x0003defc) list_highlight_pane_cp15

0x6683,	// (0x0003df05) list_single_idle_plugin_calendar_pane_g1

0x667a,	// (0x0003defc) list_highlight_pane_cp17

0x668b,	// (0x0003df0d) list_single_idle_plugin_calendar_pane_g1_copy1

0x6693,	// (0x0003df15) list_single_idle_plugin_player_pane_g1

0x3df9,	// (0x0003b67b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x000475ff) list_single_idle_plugin_player_pane_g

0x669b,	// (0x0003df1d) list_single_idle_plugin_player_pane_t1

0x66a9,	// (0x0003df2b) list_single_idle_plugin_player_pane_t2

0x66b7,	// (0x0003df39) list_single_idle_plugin_player_pane_t3

0x66c5,	// (0x0003df47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00047604) list_single_idle_plugin_player_pane_t

0x66d3,	// (0x0003df55) wait_bar_pane_cp15

0x66db,	// (0x0003df5d) grid_ai_notification_pane

0x3df9,	// (0x0003b67b) list_single_idle_plugin_notification_pane_g1

0xdac8,	// (0x0004534a) cell_ai_notification_pane_ParamLimits

0xdac8,	// (0x0004534a) cell_ai_notification_pane

0x66f1,	// (0x0003df73) cell_ai_notification_pane_g1

0x66f9,	// (0x0003df7b) cell_ai_notification_pane_t1

0xdad5,	// (0x00045357) tb_ext_find_button_pane

0xdadd,	// (0x0004535f) tb_ext_find_pane_g1

0xdae5,	// (0x00045367) tb_ext_find_pane_t1

0xbda2,	// (0x00043624) tb_ext_find_button_pane_g1

0x6725,	// (0x0003dfa7) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x0004760d) tb_ext_find_button_pane_g

0xd8f0,	// (0x00045172) main_idle_act4_pane_t1_ParamLimits

0xd908,	// (0x0004518a) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x000475cb) main_idle_act4_pane_t_ParamLimits

0xd93c,	// (0x000451be) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd953,	// (0x000451d5) sat_plugin_idle_act4_pane_ParamLimits

0xd953,	// (0x000451d5) sat_plugin_idle_act4_pane

0xdaf3,	// (0x00045375) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdaf3,	// (0x00045375) sat_plugin_idle_act4_pane_t1

0xdb0b,	// (0x0004538d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb0b,	// (0x0004538d) sat_plugin_idle_act4_pane_t2

0xdb23,	// (0x000453a5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb23,	// (0x000453a5) sat_plugin_idle_act4_pane_t3

0xdb3b,	// (0x000453bd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdb3b,	// (0x000453bd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00047612) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00047612) sat_plugin_idle_act4_pane_t

0xeaa5,	// (0x00046327) popup_battery_window_ParamLimits

0xeaa5,	// (0x00046327) popup_battery_window

0xb3cf,	// (0x00042c51) bg_popup_sub_pane_cp25_ParamLimits

0xb3cf,	// (0x00042c51) bg_popup_sub_pane_cp25

0x677a,	// (0x0003dffc) popup_battery_window_g1_ParamLimits

0x677a,	// (0x0003dffc) popup_battery_window_g1

0x6786,	// (0x0003e008) popup_battery_window_t1_ParamLimits

0x6786,	// (0x0003e008) popup_battery_window_t1

0x6798,	// (0x0003e01a) popup_battery_window_t2_ParamLimits

0x6798,	// (0x0003e01a) popup_battery_window_t2

0x0001,

0xfd99,	// (0x0004761b) popup_battery_window_t_ParamLimits

0xfd99,	// (0x0004761b) popup_battery_window_t

0x9b24,	// (0x000413a6) midp_canvas_pane_ParamLimits

0x9b80,	// (0x00041402) midp_keypad_pane_ParamLimits

0x9b80,	// (0x00041402) midp_keypad_pane

0x1ede,	// (0x00039760) main_midp_pane_ParamLimits

0x4530,	// (0x0003bdb2) signal_pane_g2_cp_ParamLimits

0xdb53,	// (0x000453d5) aid_size_cell_midp_keypad_ParamLimits

0xdb53,	// (0x000453d5) aid_size_cell_midp_keypad

0xdb71,	// (0x000453f3) midp_keyp_game_grid_pane_ParamLimits

0xdb71,	// (0x000453f3) midp_keyp_game_grid_pane

0xdb98,	// (0x0004541a) midp_keyp_rocker_pane_ParamLimits

0xdb98,	// (0x0004541a) midp_keyp_rocker_pane

0xdbe7,	// (0x00045469) midp_keyp_sk_left_pane_ParamLimits

0xdbe7,	// (0x00045469) midp_keyp_sk_left_pane

0xdc3d,	// (0x000454bf) midp_keyp_sk_right_pane_ParamLimits

0xdc3d,	// (0x000454bf) midp_keyp_sk_right_pane

0xb22c,	// (0x00042aae) bg_button_pane_cp03

0xdc93,	// (0x00045515) midp_keyp_sk_left_pane_g1

0xb22c,	// (0x00042aae) bg_button_pane_cp04

0xdc93,	// (0x00045515) midp_keyp_sk_right_pane_g1

0x4a1d,	// (0x0003c29f) midp_keyp_rocker_pane_g1

0xdc9b,	// (0x0004551d) keyp_game_cell_pane_ParamLimits

0xdc9b,	// (0x0004551d) keyp_game_cell_pane

0xb22c,	// (0x00042aae) bg_button_pane_cp02

0xdcc1,	// (0x00045543) keyp_game_cell_pane_g1

0x8d7e,	// (0x00040600) popup_fep_vkb2_window_ParamLimits

0x8d7e,	// (0x00040600) popup_fep_vkb2_window

0xacb7,	// (0x00042539) aid_size_cell_vkb2_ParamLimits

0xacb7,	// (0x00042539) aid_size_cell_vkb2

0xaced,	// (0x0004256f) popup_fep_vkb2_window_g1_ParamLimits

0xaced,	// (0x0004256f) popup_fep_vkb2_window_g1

0xad3d,	// (0x000425bf) vkb2_area_bottom_pane_ParamLimits

0xad3d,	// (0x000425bf) vkb2_area_bottom_pane

0xad99,	// (0x0004261b) vkb2_area_keypad_pane_ParamLimits

0xad99,	// (0x0004261b) vkb2_area_keypad_pane

0xade7,	// (0x00042669) vkb2_area_top_pane_ParamLimits

0xade7,	// (0x00042669) vkb2_area_top_pane

0xae6d,	// (0x000426ef) vkb2_top_entry_pane_ParamLimits

0xae6d,	// (0x000426ef) vkb2_top_entry_pane

0xae9a,	// (0x0004271c) vkb2_top_grid_left_pane_ParamLimits

0xae9a,	// (0x0004271c) vkb2_top_grid_left_pane

0xaeba,	// (0x0004273c) vkb2_top_grid_right_pane_ParamLimits

0xaeba,	// (0x0004273c) vkb2_top_grid_right_pane

0x150e,	// (0x00038d90) vkb2_cell_keypad_pane_ParamLimits

0x150e,	// (0x00038d90) vkb2_cell_keypad_pane

0xaf00,	// (0x00042782) vkb2_area_bottom_grid_pane_ParamLimits

0xaf00,	// (0x00042782) vkb2_area_bottom_grid_pane

0xaf2a,	// (0x000427ac) vkb2_area_bottom_pane_g1_ParamLimits

0xaf2a,	// (0x000427ac) vkb2_area_bottom_pane_g1

0xaf50,	// (0x000427d2) vkb2_area_bottom_pane_g2_ParamLimits

0xaf50,	// (0x000427d2) vkb2_area_bottom_pane_g2

0xaf81,	// (0x00042803) vkb2_area_bottom_pane_g3_ParamLimits

0xaf81,	// (0x00042803) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00047620) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00047620) vkb2_area_bottom_pane_g

0x16b8,	// (0x00038f3a) vkb2_top_cell_left_pane_ParamLimits

0x16b8,	// (0x00038f3a) vkb2_top_cell_left_pane

0xdcca,	// (0x0004554c) vkb2_top_entry_pane_g1_ParamLimits

0xdcca,	// (0x0004554c) vkb2_top_entry_pane_g1

0xdcd8,	// (0x0004555a) vkb2_top_entry_pane_t1_ParamLimits

0xdcd8,	// (0x0004555a) vkb2_top_entry_pane_t1

0x6942,	// (0x0003e1c4) vkb2_top_entry_pane_t2_ParamLimits

0x6942,	// (0x0003e1c4) vkb2_top_entry_pane_t2

0x6974,	// (0x0003e1f6) vkb2_top_entry_pane_t3_ParamLimits

0x6974,	// (0x0003e1f6) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00047627) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00047627) vkb2_top_entry_pane_t

0xafeb,	// (0x0004286d) vkb2_top_grid_right_pane_g1_ParamLimits

0xafeb,	// (0x0004286d) vkb2_top_grid_right_pane_g1

0x171b,	// (0x00038f9d) vkb2_top_grid_right_pane_g2_ParamLimits

0x171b,	// (0x00038f9d) vkb2_top_grid_right_pane_g2

0x1733,	// (0x00038fb5) vkb2_top_grid_right_pane_g3_ParamLimits

0x1733,	// (0x00038fb5) vkb2_top_grid_right_pane_g3

0xb001,	// (0x00042883) vkb2_top_grid_right_pane_g4_ParamLimits

0xb001,	// (0x00042883) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x0004762e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x0004762e) vkb2_top_grid_right_pane_g

0x1761,	// (0x00038fe3) vkb2_top_cell_left_pane_g1

0x1778,	// (0x00038ffa) vkb2_cell_keypad_pane_g1_ParamLimits

0x1778,	// (0x00038ffa) vkb2_cell_keypad_pane_g1

0x6998,	// (0x0003e21a) vkb2_cell_keypad_pane_t1_ParamLimits

0x6998,	// (0x0003e21a) vkb2_cell_keypad_pane_t1

0x1786,	// (0x00039008) vkb2_cell_bottom_grid_pane_ParamLimits

0x1786,	// (0x00039008) vkb2_cell_bottom_grid_pane

0x17bf,	// (0x00039041) vkb2_cell_bottom_grid_pane_g1

0xd984,	// (0x00045206) aid_call2_pane_cp02

0xd98c,	// (0x0004520e) aid_call_pane_cp02

0xd994,	// (0x00045216) clock_digital_number_pane_cp10

0xd99c,	// (0x0004521e) clock_digital_number_pane_cp11

0xd9a4,	// (0x00045226) clock_digital_number_pane_cp12

0xd9ac,	// (0x0004522e) clock_digital_number_pane_cp13

0xd9b4,	// (0x00045236) clock_digital_separator_pane_cp10

0xbda2,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g1

0xbda2,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g2

0xd9bc,	// (0x0004523e) popup_clock_digital_analogue_window_cp2_g3

0xbda2,	// (0x00043624) popup_clock_digital_analogue_window_cp2_g4

0xd9bc,	// (0x0004523e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x000475e3) popup_clock_digital_analogue_window_cp2_g

0xd9c4,	// (0x00045246) popup_clock_digital_analogue_window_cp2_t1

0xd9d2,	// (0x00045254) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x000475ee) popup_clock_digital_analogue_window_cp2_t

0x4a1d,	// (0x0003c29f) clock_digital_number_pane_cp10_g1

0x4a1d,	// (0x0003c29f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x000473ca) clock_digital_number_pane_cp10_g

0x4a1d,	// (0x0003c29f) clock_digital_separator_pane_cp10_g1

0x4a1d,	// (0x0003c29f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x000473ca) clock_digital_separator_pane_cp10_g

0x63c4,	// (0x0003dc46) uniindi_top_pane_g3

0x63d5,	// (0x0003dc57) uniindi_top_pane_g4

0x1599,	// (0x00038e1b) vkb2_row_keypad_pane_ParamLimits

0x1599,	// (0x00038e1b) vkb2_row_keypad_pane

0x17db,	// (0x0003905d) vkb2_cell_t_keypad_pane_ParamLimits

0x17db,	// (0x0003905d) vkb2_cell_t_keypad_pane

0x17eb,	// (0x0003906d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17eb,	// (0x0003906d) vkb2_cell_t_keypad_pane_cp08

0x1800,	// (0x00039082) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1800,	// (0x00039082) vkb2_cell_t_keypad_pane_cp09

0x1814,	// (0x00039096) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1814,	// (0x00039096) vkb2_cell_t_keypad_pane_cp01

0x1825,	// (0x000390a7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1825,	// (0x000390a7) vkb2_cell_t_keypad_pane_cp02

0x1836,	// (0x000390b8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1836,	// (0x000390b8) vkb2_cell_t_keypad_pane_cp03

0x1847,	// (0x000390c9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1847,	// (0x000390c9) vkb2_cell_t_keypad_pane_cp04

0x1858,	// (0x000390da) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1858,	// (0x000390da) vkb2_cell_t_keypad_pane_cp05

0x1869,	// (0x000390eb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1869,	// (0x000390eb) vkb2_cell_t_keypad_pane_cp06

0x187c,	// (0x000390fe) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x187c,	// (0x000390fe) vkb2_cell_t_keypad_pane_cp07

0x1891,	// (0x00039113) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1891,	// (0x00039113) vkb2_cell_t_keypad_pane_cp10

0x0ece,	// (0x00038750) vkb2_cell_t_keypad_pane_g1

0x69af,	// (0x0003e231) vkb2_cell_t_keypad_pane_t1

0xe9e0,	// (0x00046262) popup_grid_graphic2_window

0xdd11,	// (0x00045593) aid_size_cell_graphic2_ParamLimits

0xdd11,	// (0x00045593) aid_size_cell_graphic2

0xdd4f,	// (0x000455d1) bg_popup_window_pane_cp21_ParamLimits

0xdd4f,	// (0x000455d1) bg_popup_window_pane_cp21

0xdd5d,	// (0x000455df) graphic2_pages_pane_ParamLimits

0xdd5d,	// (0x000455df) graphic2_pages_pane

0xddb5,	// (0x00045637) grid_graphic2_control_pane_ParamLimits

0xddb5,	// (0x00045637) grid_graphic2_control_pane

0xddfd,	// (0x0004567f) grid_graphic2_pane_ParamLimits

0xddfd,	// (0x0004567f) grid_graphic2_pane

0xde88,	// (0x0004570a) cell_graphic2_pane

0xe9e0,	// (0x00046262) main_comp_mode_pane

0x5c2b,	// (0x0003d4ad) list_ai3_gene_pane_ParamLimits

0xce1c,	// (0x0004469e) bg_popup_window_pane_cp19_ParamLimits

0x6003,	// (0x0003d885) bg_touch_area_indi_pane_ParamLimits

0x6003,	// (0x0003d885) bg_touch_area_indi_pane

0x6019,	// (0x0003d89b) bg_touch_area_indi_pane_cp01_ParamLimits

0x6019,	// (0x0003d89b) bg_touch_area_indi_pane_cp01

0x602f,	// (0x0003d8b1) bg_touch_area_indi_pane_cp02_ParamLimits

0x602f,	// (0x0003d8b1) bg_touch_area_indi_pane_cp02

0x6049,	// (0x0003d8cb) bg_touch_area_indi_pane_cp03_ParamLimits

0x6049,	// (0x0003d8cb) bg_touch_area_indi_pane_cp03

0x6063,	// (0x0003d8e5) popup_slider_window_g1_ParamLimits

0x607f,	// (0x0003d901) popup_slider_window_g2_ParamLimits

0x609b,	// (0x0003d91d) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00047578) popup_slider_window_g_ParamLimits

0x6101,	// (0x0003d983) popup_slider_window_t1_ParamLimits

0x6175,	// (0x0003d9f7) small_volume_slider_vertical_pane_ParamLimits

0xde88,	// (0x0004570a) cell_graphic2_pane_ParamLimits

0xdeeb,	// (0x0004576d) bg_button_pane_cp10_ParamLimits

0xdeeb,	// (0x0004576d) bg_button_pane_cp10

0xdefe,	// (0x00045780) bg_button_pane_cp11_ParamLimits

0xdefe,	// (0x00045780) bg_button_pane_cp11

0xdf11,	// (0x00045793) graphic2_pages_pane_g1_ParamLimits

0xdf11,	// (0x00045793) graphic2_pages_pane_g1

0xdf2c,	// (0x000457ae) graphic2_pages_pane_g2_ParamLimits

0xdf2c,	// (0x000457ae) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x0004763c) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x0004763c) graphic2_pages_pane_g

0xdf44,	// (0x000457c6) graphic2_pages_pane_t1_ParamLimits

0xdf44,	// (0x000457c6) graphic2_pages_pane_t1

0xdf5c,	// (0x000457de) cell_graphic2_control_pane_ParamLimits

0xdf5c,	// (0x000457de) cell_graphic2_control_pane

0xdf90,	// (0x00045812) cell_graphic2_pane_g1_ParamLimits

0xdf90,	// (0x00045812) cell_graphic2_pane_g1

0xcfac,	// (0x0004482e) cell_graphic2_pane_g2_ParamLimits

0xcfac,	// (0x0004482e) cell_graphic2_pane_g2

0xd604,	// (0x00044e86) cell_graphic2_pane_g3_ParamLimits

0xd604,	// (0x00044e86) cell_graphic2_pane_g3

0xcfb9,	// (0x0004483b) cell_graphic2_pane_g4_ParamLimits

0xcfb9,	// (0x0004483b) cell_graphic2_pane_g4

0xdf9d,	// (0x0004581f) cell_graphic2_pane_g5_ParamLimits

0xdf9d,	// (0x0004581f) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00047641) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00047641) cell_graphic2_pane_g

0xdfbd,	// (0x0004583f) cell_graphic2_pane_t1_ParamLimits

0xdfbd,	// (0x0004583f) cell_graphic2_pane_t1

0x30e3,	// (0x0003a965) grid_highlight_pane_cp11_ParamLimits

0x30e3,	// (0x0003a965) grid_highlight_pane_cp11

0xb3cf,	// (0x00042c51) bg_button_pane_cp05

0xe006,	// (0x00045888) cell_graphic2_control_pane_g1

0x4a1d,	// (0x0003c29f) bg_touch_area_indi_pane_g1

0x6c97,	// (0x0003e519) aid_cmod_rocker_key_size

0x6ca1,	// (0x0003e523) aid_cmode_itu_key_size

0x6cab,	// (0x0003e52d) main_cmode_video_pane

0x6cb5,	// (0x0003e537) main_comp_mode_itu_pane

0x6cc1,	// (0x0003e543) main_comp_mode_rocker_pane

0x6ccd,	// (0x0003e54f) cell_cmode_rocker_pane_ParamLimits

0x6ccd,	// (0x0003e54f) cell_cmode_rocker_pane

0x6ce1,	// (0x0003e563) cell_cmode_itu_pane_ParamLimits

0x6ce1,	// (0x0003e563) cell_cmode_itu_pane

0xb8da,	// (0x0004315c) bg_button_pane_cp06_ParamLimits

0xb8da,	// (0x0004315c) bg_button_pane_cp06

0x4c80,	// (0x0003c502) cell_cmode_rocker_pane_g1_ParamLimits

0x4c80,	// (0x0003c502) cell_cmode_rocker_pane_g1

0x621c,	// (0x0003da9e) cell_cmode_rocker_pane_g2_ParamLimits

0x621c,	// (0x0003da9e) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00047651) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00047651) cell_cmode_rocker_pane_g

0xb22c,	// (0x00042aae) bg_button_pane_cp07

0x6cf8,	// (0x0003e57a) cell_cmode_itu_pane_g1

0x6d01,	// (0x0003e583) cell_cmode_itu_pane_t1

0x6d0f,	// (0x0003e591) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00047656) cell_cmode_itu_pane_t

0x6448,	// (0x0003dcca) aid_touch_ctrl_left

0x6450,	// (0x0003dcd2) aid_touch_ctrl_right

0xb22c,	// (0x00042aae) compa_mode_pane

0xe02e,	// (0x000458b0) aid_cmod_rocker_key_size_cp

0xe038,	// (0x000458ba) aid_cmode_itu_key_size_cp

0x6d31,	// (0x0003e5b3) compa_mode_pane_g1

0x6d39,	// (0x0003e5bb) compa_mode_pane_g2

0x6d41,	// (0x0003e5c3) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x0004765b) compa_mode_pane_g

0xe042,	// (0x000458c4) main_comp_mode_itu_pane_cp

0xe04a,	// (0x000458cc) main_comp_mode_rocker_pane_cp

0xe052,	// (0x000458d4) cell_cmode_itu_pane_cp_ParamLimits

0xe052,	// (0x000458d4) cell_cmode_itu_pane_cp

0xe067,	// (0x000458e9) cell_cmode_rocker_pane_cp_ParamLimits

0xe067,	// (0x000458e9) cell_cmode_rocker_pane_cp

0xb8da,	// (0x0004315c) bg_button_pane_cp06_cp_ParamLimits

0xb8da,	// (0x0004315c) bg_button_pane_cp06_cp

0x4c80,	// (0x0003c502) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4c80,	// (0x0003c502) cell_cmode_rocker_pane_g1_cp

0x4a1d,	// (0x0003c29f) cell_cmode_rocker_pane_g2_cp

0xb22c,	// (0x00042aae) bg_button_pane_cp07_cp

0xe079,	// (0x000458fb) cell_cmode_itu_pane_g1_cp

0xe082,	// (0x00045904) cell_cmode_itu_pane_t1_cp

0xe082,	// (0x00045904) cell_cmode_itu_pane_t2_cp

0xc426,	// (0x00043ca8) settings_code_pane_cp2

0xb29c,	// (0x00042b1e) bg_popup_window_pane_cp3_ParamLimits

0xb5e3,	// (0x00042e65) heading_pane_cp3_ParamLimits

0xb5ef,	// (0x00042e71) listscroll_popup_graphic_pane_ParamLimits

0x0c61,	// (0x000384e3) fep_hwr_aid_pane_ParamLimits

0x1251,	// (0x00038ad3) aid_touch_sctrl_top_ParamLimits

0x126c,	// (0x00038aee) sctrl_sk_top_pane_g1_ParamLimits

0x0ece,	// (0x00038750) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00047591) sctrl_sk_top_pane_g_ParamLimits

0x1279,	// (0x00038afb) sctrl_sk_top_pane_t1_ParamLimits

0x1251,	// (0x00038ad3) aid_touch_sctrl_bottom_ParamLimits

0x1279,	// (0x00038afb) sctrl_sk_bottom_pane_t1_ParamLimits

0x638e,	// (0x0003dc10) aid_area_touch_clock

0xae2f,	// (0x000426b1) aid_vkb2_area_top_pane_cell_ParamLimits

0xae2f,	// (0x000426b1) aid_vkb2_area_top_pane_cell

0xaeda,	// (0x0004275c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaeda,	// (0x0004275c) aid_vkb2_area_bottom_pane_cell

0x68fa,	// (0x0003e17c) popup_char_count_window

0x6d97,	// (0x0003e619) popup_char_count_window_g1

0x6da0,	// (0x0003e622) popup_char_count_window_g2

0x6da9,	// (0x0003e62b) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00047662) popup_char_count_window_g

0x6db2,	// (0x0003e634) popup_char_count_window_t1

0x132a,	// (0x00038bac) popup_fep_char_preview_window_ParamLimits

0x132a,	// (0x00038bac) popup_fep_char_preview_window

0xae4f,	// (0x000426d1) vkb2_top_candi_pane_ParamLimits

0xae4f,	// (0x000426d1) vkb2_top_candi_pane

0xe090,	// (0x00045912) cell_vkb2_top_candi_pane_ParamLimits

0xe090,	// (0x00045912) cell_vkb2_top_candi_pane

0x18a6,	// (0x00039128) bg_popup_fep_char_preview_window_ParamLimits

0x18a6,	// (0x00039128) bg_popup_fep_char_preview_window

0x18b4,	// (0x00039136) popup_fep_char_preview_window_t1_ParamLimits

0x18b4,	// (0x00039136) popup_fep_char_preview_window_t1

0x6e11,	// (0x0003e693) bg_popup_fep_char_preview_window_g1

0x6e19,	// (0x0003e69b) bg_popup_fep_char_preview_window_g2

0x6e21,	// (0x0003e6a3) bg_popup_fep_char_preview_window_g3

0x6e29,	// (0x0003e6ab) bg_popup_fep_char_preview_window_g4

0x6e31,	// (0x0003e6b3) bg_popup_fep_char_preview_window_g5

0x18ee,	// (0x00039170) bg_popup_fep_char_preview_window_g6

0x6e39,	// (0x0003e6bb) bg_popup_fep_char_preview_window_g7

0x6e41,	// (0x0003e6c3) bg_popup_fep_char_preview_window_g8

0x6e49,	// (0x0003e6cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00047669) bg_popup_fep_char_preview_window_g

0x0ece,	// (0x00038750) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ece,	// (0x00038750) cell_vkb2_top_candi_pane_g1

0x0edc,	// (0x0003875e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0edc,	// (0x0003875e) cell_vkb2_top_candi_pane_g2

0x5935,	// (0x0003d1b7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5935,	// (0x0003d1b7) cell_vkb2_top_candi_pane_g3

0x18f6,	// (0x00039178) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18f6,	// (0x00039178) cell_vkb2_top_candi_pane_g4

0x519f,	// (0x0003ca21) cell_vkb2_top_candi_pane_g5_ParamLimits

0x519f,	// (0x0003ca21) cell_vkb2_top_candi_pane_g5

0x1917,	// (0x00039199) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1917,	// (0x00039199) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x0004767c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x0004767c) cell_vkb2_top_candi_pane_g

0x1925,	// (0x000391a7) cell_vkb2_top_candi_pane_t1

0x0a4d,	// (0x000382cf) aid_size_touch_slider_mark_ParamLimits

0x0a4d,	// (0x000382cf) aid_size_touch_slider_mark

0xdd99,	// (0x0004561b) grid_graphic2_catg_pane_ParamLimits

0xdd99,	// (0x0004561b) grid_graphic2_catg_pane

0xde57,	// (0x000456d9) popup_grid_graphic2_window_t1_ParamLimits

0xde57,	// (0x000456d9) popup_grid_graphic2_window_t1

0xde6d,	// (0x000456ef) popup_grid_graphic2_window_t2_ParamLimits

0xde6d,	// (0x000456ef) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00047637) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00047637) popup_grid_graphic2_window_t

0xb3cf,	// (0x00042c51) bg_button_pane_cp05_ParamLimits

0xe006,	// (0x00045888) cell_graphic2_control_pane_g1_ParamLimits

0xe0fa,	// (0x0004597c) cell_graphic2_catg_pane_ParamLimits

0xe0fa,	// (0x0004597c) cell_graphic2_catg_pane

0xb22c,	// (0x00042aae) bg_button_pane_cp12

0xe10c,	// (0x0004598e) cell_graphic2_catg_pane_g1

0x635a,	// (0x0003dbdc) cell_tb_ext_pane_t1_ParamLimits

0x16d8,	// (0x00038f5a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16d8,	// (0x00038f5a) vkb2_top_cell_right_narrow_pane

0x16f0,	// (0x00038f72) vkb2_top_cell_right_wide_pane_ParamLimits

0x16f0,	// (0x00038f72) vkb2_top_cell_right_wide_pane

0x0c53,	// (0x000384d5) bg_vkb2_func_pane_ParamLimits

0x0c53,	// (0x000384d5) bg_vkb2_func_pane

0x1761,	// (0x00038fe3) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp03

0x17bf,	// (0x00039041) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2416,	// (0x00039c98) bg_vkb2_func_pane_g1

0x241e,	// (0x00039ca0) bg_vkb2_func_pane_g2

0x242e,	// (0x00039cb0) bg_vkb2_func_pane_g3

0x2426,	// (0x00039ca8) bg_vkb2_func_pane_g4

0x2436,	// (0x00039cb8) bg_vkb2_func_pane_g5

0x243e,	// (0x00039cc0) bg_vkb2_func_pane_g6

0x2446,	// (0x00039cc8) bg_vkb2_func_pane_g7

0x244e,	// (0x00039cd0) bg_vkb2_func_pane_g8

0x240e,	// (0x00039c90) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00047689) bg_vkb2_func_pane_g

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp01

0x1761,	// (0x00038fe3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1761,	// (0x00038fe3) vkb2_top_cell_right_wide_pane_g1

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c53,	// (0x000384d5) bg_vkb2_fuc_pane_cp02

0x17bf,	// (0x00039041) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17bf,	// (0x00039041) vkb2_top_cell_right_narrow_pane_g1

0xcd5e,	// (0x000445e0) aid_touch_area_decrease_ParamLimits

0xcd5e,	// (0x000445e0) aid_touch_area_decrease

0xcd98,	// (0x0004461a) aid_touch_area_increase_ParamLimits

0xcd98,	// (0x0004461a) aid_touch_area_increase

0xcdc0,	// (0x00044642) aid_touch_area_mute_ParamLimits

0xcdc0,	// (0x00044642) aid_touch_area_mute

0xcde8,	// (0x0004466a) aid_touch_area_slider_ParamLimits

0xcde8,	// (0x0004466a) aid_touch_area_slider

0xce28,	// (0x000446aa) popup_slider_window_g4_ParamLimits

0xce28,	// (0x000446aa) popup_slider_window_g4

0xce50,	// (0x000446d2) popup_slider_window_g5_ParamLimits

0xce50,	// (0x000446d2) popup_slider_window_g5

0xce84,	// (0x00044706) popup_slider_window_g6_ParamLimits

0xce84,	// (0x00044706) popup_slider_window_g6

0x612f,	// (0x0003d9b1) popup_slider_window_t2_ParamLimits

0x612f,	// (0x0003d9b1) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00047585) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00047585) popup_slider_window_t

0xcea0,	// (0x00044722) slider_pane_ParamLimits

0xcea0,	// (0x00044722) slider_pane

0x6e6c,	// (0x0003e6ee) slider_pane_g1_ParamLimits

0x6e6c,	// (0x0003e6ee) slider_pane_g1

0x6e80,	// (0x0003e702) slider_pane_g2_ParamLimits

0x6e80,	// (0x0003e702) slider_pane_g2

0x6e96,	// (0x0003e718) slider_pane_g3_ParamLimits

0x6e96,	// (0x0003e718) slider_pane_g3

0x0003,

0xfe1a,	// (0x0004769c) slider_pane_g_ParamLimits

0xfe1a,	// (0x0004769c) slider_pane_g

0xa4b6,	// (0x00041d38) popup_tb_float_extension_window_ParamLimits

0xa4b6,	// (0x00041d38) popup_tb_float_extension_window

0x6ec2,	// (0x0003e744) aid_size_cell_tb_float_ext

0xb22c,	// (0x00042aae) bg_popup_sub_window_cp28

0x6ece,	// (0x0003e750) grid_tb_float_ext_pane

0x6eda,	// (0x0003e75c) cell_tb_float_ext_pane_ParamLimits

0x6eda,	// (0x0003e75c) cell_tb_float_ext_pane

0x6ef6,	// (0x0003e778) cell_tb_float_ext_pane_g1

0x6eff,	// (0x0003e781) grid_highlight_pane_cp12

0xaa4b,	// (0x000422cd) cell_last_hwr_side_pane_ParamLimits

0xaa4b,	// (0x000422cd) cell_last_hwr_side_pane

0x4a1d,	// (0x0003c29f) cell_last_hwr_side_pane_g1

0x6f08,	// (0x0003e78a) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x000476a5) cell_last_hwr_side_pane_g

0xafb6,	// (0x00042838) vkb2_area_bottom_space_btn_pane_ParamLimits

0xafb6,	// (0x00042838) vkb2_area_bottom_space_btn_pane

0x0ece,	// (0x00038750) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x69af,	// (0x0003e231) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1925,	// (0x000391a7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1943,	// (0x000391c5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1943,	// (0x000391c5) vkb2_area_bottom_space_btn_pane_g1

0x197d,	// (0x000391ff) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x197d,	// (0x000391ff) vkb2_area_bottom_space_btn_pane_g2

0x19b3,	// (0x00039235) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19b3,	// (0x00039235) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x000476aa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x000476aa) vkb2_area_bottom_space_btn_pane_g

0x0d18,	// (0x0003859a) cel_fep_hwr_func_pane_ParamLimits

0x0d18,	// (0x0003859a) cel_fep_hwr_func_pane

0xaa20,	// (0x000422a2) cell_hwr_side_button_pane_ParamLimits

0xaa20,	// (0x000422a2) cell_hwr_side_button_pane

0x638e,	// (0x0003dc10) aid_area_touch_clock_ParamLimits

0xb3cf,	// (0x00042c51) bg_uniindi_top_pane_ParamLimits

0x63a2,	// (0x0003dc24) uniindi_top_pane_g1_ParamLimits

0x63b8,	// (0x0003dc3a) uniindi_top_pane_g2_ParamLimits

0x63c4,	// (0x0003dc46) uniindi_top_pane_g3_ParamLimits

0x63d5,	// (0x0003dc57) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x000475bd) uniindi_top_pane_g_ParamLimits

0x63e2,	// (0x0003dc64) uniindi_top_pane_t1_ParamLimits

0xb3cf,	// (0x00042c51) bg_vkb2_func_pane_cp01_ParamLimits

0xb3cf,	// (0x00042c51) bg_vkb2_func_pane_cp01

0x6f11,	// (0x0003e793) cel_fep_hwr_func_pane_g1_ParamLimits

0x6f11,	// (0x0003e793) cel_fep_hwr_func_pane_g1

0xb3cf,	// (0x00042c51) bg_vkb2_func_pane_cp02_ParamLimits

0xb3cf,	// (0x00042c51) bg_vkb2_func_pane_cp02

0x6f11,	// (0x0003e793) cell_hwr_side_button_pane_g1_ParamLimits

0x6f11,	// (0x0003e793) cell_hwr_side_button_pane_g1

0x2293,	// (0x00039b15) status_pane_g4_ParamLimits

0x2293,	// (0x00039b15) status_pane_g4

0x22ad,	// (0x00039b2f) status_pane_t1

0x47d0,	// (0x0003c052) form2_midp_gauge_slider_cont_pane

0x47d8,	// (0x0003c05a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc6f7,	// (0x00043f79) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc709,	// (0x00043f8b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0004737d) form2_midp_gauge_slider_pane_t_ParamLimits

0x480e,	// (0x0003c090) form2_midp_slider_pane_ParamLimits

0x12ea,	// (0x00038b6c) aid_size_cell_func_vkb2_ParamLimits

0x12ea,	// (0x00038b6c) aid_size_cell_func_vkb2

0x6eae,	// (0x0003e730) slider_pane_g4_ParamLimits

0x6eae,	// (0x0003e730) slider_pane_g4

0xb017,	// (0x00042899) form2_midp_gauge_slider_pane_t2_cp01

0xb025,	// (0x000428a7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb025,	// (0x000428a7) form2_midp_gauge_slider_pane_t3_cp01

0x1a28,	// (0x000392aa) form2_midp_slider_pane_cp01

0xb22c,	// (0x00042aae) navi_smil_pane

0x6f4a,	// (0x0003e7cc) navi_smil_pane_g1

0x6f52,	// (0x0003e7d4) navi_smil_pane_t1

0x6f1f,	// (0x0003e7a1) form2_midp_slider_pane_g1

0x6f28,	// (0x0003e7aa) form2_midp_slider_pane_g2

0x6f30,	// (0x0003e7b2) form2_midp_slider_pane_g3

0x6f1f,	// (0x0003e7a1) form2_midp_slider_pane_g4

0xe115,	// (0x00045997) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x000476b3) form2_midp_slider_pane_g

0x19ed,	// (0x0003926f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19ed,	// (0x0003926f) vkb2_area_bottom_space_btn_pane_g4

0xa69d,	// (0x00041f1f) lc0_navi_pane_ParamLimits

0xa69d,	// (0x00041f1f) lc0_navi_pane

0xa70d,	// (0x00041f8f) lc0_stat_indi_pane_ParamLimits

0xa70d,	// (0x00041f8f) lc0_stat_indi_pane

0xa722,	// (0x00041fa4) ls0_title_pane_ParamLimits

0xa722,	// (0x00041fa4) ls0_title_pane

0xb8da,	// (0x0004315c) bg_popup_sub_pane_cp14_ParamLimits

0x6375,	// (0x0003dbf7) list_uniindi_pane_ParamLimits

0x6381,	// (0x0003dc03) uniindi_top_pane_ParamLimits

0x6420,	// (0x0003dca2) list_single_uniindi_pane_g1_ParamLimits

0x6433,	// (0x0003dcb5) list_single_uniindi_pane_t1_ParamLimits

0xb042,	// (0x000428c4) lc0_stat_clock_pane_ParamLimits

0xb042,	// (0x000428c4) lc0_stat_clock_pane

0xe11e,	// (0x000459a0) lc0_stat_indi_pane_g1_ParamLimits

0xe11e,	// (0x000459a0) lc0_stat_indi_pane_g1

0xe12b,	// (0x000459ad) lc0_stat_indi_pane_g2_ParamLimits

0xe12b,	// (0x000459ad) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x000476be) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x000476be) lc0_stat_indi_pane_g

0xb04f,	// (0x000428d1) lc0_uni_indicator_pane_ParamLimits

0xb04f,	// (0x000428d1) lc0_uni_indicator_pane

0xe138,	// (0x000459ba) ls0_title_pane_g1_ParamLimits

0xe138,	// (0x000459ba) ls0_title_pane_g1

0xe14c,	// (0x000459ce) ls0_title_pane_t1_ParamLimits

0xe14c,	// (0x000459ce) ls0_title_pane_t1

0xb05c,	// (0x000428de) lc0_uni_indicator_pane_g1_ParamLimits

0xb05c,	// (0x000428de) lc0_uni_indicator_pane_g1

0x6fc4,	// (0x0003e846) lc0_stat_clock_pane_t1

0xe9e0,	// (0x00046262) main_ai5_pane

0x6fd2,	// (0x0003e854) ai5_sk_pane_ParamLimits

0x6fd2,	// (0x0003e854) ai5_sk_pane

0xe17a,	// (0x000459fc) cell_ai5_widget_pane_ParamLimits

0xe17a,	// (0x000459fc) cell_ai5_widget_pane

0xe4d4,	// (0x00045d56) aid_size_cell_widget_grid

0x758f,	// (0x0003ee11) bg_ai5_widget_pane_ParamLimits

0x758f,	// (0x0003ee11) bg_ai5_widget_pane

0xe508,	// (0x00045d8a) cell_ai5_widget_pane_g2

0xe51c,	// (0x00045d9e) cell_ai5_widget_pane_g3

0xe536,	// (0x00045db8) cell_ai5_widget_pane_g4

0xe546,	// (0x00045dc8) cell_ai5_widget_pane_g5

0xe556,	// (0x00045dd8) cell_ai5_widget_pane_g6

0xe562,	// (0x00045de4) cell_ai5_widget_pane_g7

0xe56e,	// (0x00045df0) cell_ai5_widget_pane_t1_ParamLimits

0xe56e,	// (0x00045df0) cell_ai5_widget_pane_t1

0x76c6,	// (0x0003ef48) cell_ai5_widget_pane_t2_ParamLimits

0x76c6,	// (0x0003ef48) cell_ai5_widget_pane_t2

0x76de,	// (0x0003ef60) cell_ai5_widget_pane_t3_ParamLimits

0x76de,	// (0x0003ef60) cell_ai5_widget_pane_t3

0xe58b,	// (0x00045e0d) cell_ai5_widget_pane_t4_ParamLimits

0xe58b,	// (0x00045e0d) cell_ai5_widget_pane_t4

0xe5b1,	// (0x00045e33) cell_ai5_widget_pane_t5_ParamLimits

0xe5b1,	// (0x00045e33) cell_ai5_widget_pane_t5

0x773c,	// (0x0003efbe) cell_ai5_widget_pane_t6_ParamLimits

0x773c,	// (0x0003efbe) cell_ai5_widget_pane_t6

0x774e,	// (0x0003efd0) cell_ai5_widget_pane_t7_ParamLimits

0x774e,	// (0x0003efd0) cell_ai5_widget_pane_t7

0x7767,	// (0x0003efe9) cell_ai5_widget_pane_t8_ParamLimits

0x7767,	// (0x0003efe9) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x000476d8) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x000476d8) cell_ai5_widget_pane_t

0xe61e,	// (0x00045ea0) grid_ai5_widget_pane

0xb8da,	// (0x0004315c) highlight_cell_ai5_widget_pane_ParamLimits

0xb8da,	// (0x0004315c) highlight_cell_ai5_widget_pane

0xe62c,	// (0x00045eae) ai5_sk_left_pane

0xe636,	// (0x00045eb8) ai5_sk_middle_pane

0xe640,	// (0x00045ec2) ai5_sk_right_pane

0x77f2,	// (0x0003f074) bg_ai5_widget_pane_g1_ParamLimits

0x77f2,	// (0x0003f074) bg_ai5_widget_pane_g1

0x77fe,	// (0x0003f080) bg_ai5_widget_pane_g2_ParamLimits

0x77fe,	// (0x0003f080) bg_ai5_widget_pane_g2

0x780a,	// (0x0003f08c) bg_ai5_widget_pane_g3_ParamLimits

0x780a,	// (0x0003f08c) bg_ai5_widget_pane_g3

0x7816,	// (0x0003f098) bg_ai5_widget_pane_g4_ParamLimits

0x7816,	// (0x0003f098) bg_ai5_widget_pane_g4

0x7822,	// (0x0003f0a4) bg_ai5_widget_pane_g5_ParamLimits

0x7822,	// (0x0003f0a4) bg_ai5_widget_pane_g5

0x782e,	// (0x0003f0b0) bg_ai5_widget_pane_g6_ParamLimits

0x782e,	// (0x0003f0b0) bg_ai5_widget_pane_g6

0x783a,	// (0x0003f0bc) bg_ai5_widget_pane_g7_ParamLimits

0x783a,	// (0x0003f0bc) bg_ai5_widget_pane_g7

0x7846,	// (0x0003f0c8) bg_ai5_widget_pane_g8_ParamLimits

0x7846,	// (0x0003f0c8) bg_ai5_widget_pane_g8

0x7852,	// (0x0003f0d4) bg_ai5_widget_pane_g9_ParamLimits

0x7852,	// (0x0003f0d4) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x000476ed) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x000476ed) bg_ai5_widget_pane_g

0xe676,	// (0x00045ef8) cell_shortcut_ai5_widget_pane_ParamLimits

0xe676,	// (0x00045ef8) cell_shortcut_ai5_widget_pane

0xf341,	// (0x00046bc3) bg_cell_shortcut_ai5_widget_pane

0x789d,	// (0x0003f11f) cell_grid_ai5_widget_pane_g1

0xf341,	// (0x00046bc3) highlight_cell_shortcut_ai5_widget_pane

0x2416,	// (0x00039c98) ai5_sk_left_pane_g1

0x78a6,	// (0x0003f128) ai5_sk_left_pane_g2

0x78ae,	// (0x0003f130) ai5_sk_left_pane_g3

0x78b6,	// (0x0003f138) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00047700) ai5_sk_left_pane_g

0x78be,	// (0x0003f140) ai5_sk_left_pane_t1

0x241e,	// (0x00039ca0) ai5_sk_right_pane_g1

0x78cc,	// (0x0003f14e) ai5_sk_right_pane_g2

0x78d4,	// (0x0003f156) ai5_sk_right_pane_g3

0x78dc,	// (0x0003f15e) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00047709) ai5_sk_right_pane_g

0x78e4,	// (0x0003f166) ai5_sk_right_pane_t1

0x241e,	// (0x00039ca0) ai5_sk_middle_pane_g1

0x2416,	// (0x00039c98) ai5_sk_middle_pane_g2

0x2436,	// (0x00039cb8) ai5_sk_middle_pane_g3

0x78d4,	// (0x0003f156) ai5_sk_middle_pane_g4

0x78ae,	// (0x0003f130) ai5_sk_middle_pane_g5

0x78f2,	// (0x0003f174) ai5_sk_middle_pane_g6

0xe689,	// (0x00045f0b) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00047712) ai5_sk_middle_pane_g

0xa587,	// (0x00041e09) aid_touch_area_size_lc0_ParamLimits

0xa587,	// (0x00041e09) aid_touch_area_size_lc0

0x0efd,	// (0x0003877f) cell_hwr_candidate_pane_t1_ParamLimits

0x1f5c,	// (0x000397de) aid_touch_navi_pane

0xbfd3,	// (0x00043855) status_dt_navi_pane_ParamLimits

0xbfd3,	// (0x00043855) status_dt_navi_pane

0xbfeb,	// (0x0004386d) status_dt_sta_pane_ParamLimits

0xbfeb,	// (0x0004386d) status_dt_sta_pane

0xe691,	// (0x00045f13) dt_sta_controll_pane

0xe69e,	// (0x00045f20) dt_sta_indi_pane

0xe6ab,	// (0x00045f2d) dt_sta_title_pane

0xb3cf,	// (0x00042c51) bg_dt_sta_indi_pane_ParamLimits

0xb3cf,	// (0x00042c51) bg_dt_sta_indi_pane

0xe6bd,	// (0x00045f3f) dt_sta_battery_pane

0xe6c5,	// (0x00045f47) dt_sta_indi_pane_g1

0xe6ce,	// (0x00045f50) dt_sta_indi_pane_g2

0xe6d7,	// (0x00045f59) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00047721) dt_sta_indi_pane_g

0xe6e0,	// (0x00045f62) dt_sta_signal_pane

0xb8da,	// (0x0004315c) bg_dt_sta_title_pane_ParamLimits

0xb8da,	// (0x0004315c) bg_dt_sta_title_pane

0xe6e9,	// (0x00045f6b) dt_sta_title_pane_g1

0xe6f1,	// (0x00045f73) dt_sta_title_pane_t1_ParamLimits

0xe6f1,	// (0x00045f73) dt_sta_title_pane_t1

0xb22c,	// (0x00042aae) bg_dt_sta_control_pane

0xe706,	// (0x00045f88) dt_sta_controll_pane_g1

0xe70f,	// (0x00045f91) bg_dt_sta_title_pane_g1

0xe718,	// (0x00045f9a) bg_dt_sta_title_pane_g2

0xe721,	// (0x00045fa3) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00047728) bg_dt_sta_title_pane_g

0x4a1d,	// (0x0003c29f) bg_dt_sta_indi_pane_g1

0x79a0,	// (0x0003f222) dt_sta_signal_pane_g1

0x79a8,	// (0x0003f22a) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x0004772f) dt_sta_signal_pane_g

0x79b0,	// (0x0003f232) dt_sta_battery_pane_g1

0x79b9,	// (0x0003f23b) dt_sta_battery_pane_t1

0x4a1d,	// (0x0003c29f) bg_dt_sta_control_pane_g1

0xbe24,	// (0x000436a6) fep_china_uni_eep_pane

0xbe2c,	// (0x000436ae) fep_china_uni_entry_pane_ParamLimits

0xbe3c,	// (0x000436be) popup_fep_china_uni_window_g1_ParamLimits

0xbe4c,	// (0x000436ce) popup_fep_china_uni_window_g2_ParamLimits

0xbe4c,	// (0x000436ce) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00046f9f) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00046f9f) popup_fep_china_uni_window_g

0x79c8,	// (0x0003f24a) fep_china_uni_eep_pane_g1

0x79d0,	// (0x0003f252) fep_china_uni_eep_pane_t1

0x6f41,	// (0x0003e7c3) aid_touch_area_size_smil_player

0x20aa,	// (0x0003992c) lc0_clock_pane

0x22a1,	// (0x00039b23) status_pane_g5_ParamLimits

0x22a1,	// (0x00039b23) status_pane_g5

0x9fde,	// (0x00041860) popup_keymap_window

0x2267,	// (0x00039ae9) status_icon_pane

0xe51c,	// (0x00045d9e) cell_ai5_widget_pane_g3_ParamLimits

0xe536,	// (0x00045db8) cell_ai5_widget_pane_g4_ParamLimits

0xe546,	// (0x00045dc8) cell_ai5_widget_pane_g5_ParamLimits

0x766d,	// (0x0003eeef) cell_ai5_widget_pane_g8_ParamLimits

0x766d,	// (0x0003eeef) cell_ai5_widget_pane_g8

0x7681,	// (0x0003ef03) cell_ai5_widget_pane_g9_ParamLimits

0x7681,	// (0x0003ef03) cell_ai5_widget_pane_g9

0x7695,	// (0x0003ef17) cell_ai5_widget_pane_g10_ParamLimits

0x7695,	// (0x0003ef17) cell_ai5_widget_pane_g10

0x79df,	// (0x0003f261) status_icon_pane_g1

0xb22c,	// (0x00042aae) bg_popup_sub_pane_cp13

0x79e7,	// (0x0003f269) popup_keymap_window_t1

0x9ce7,	// (0x00041569) control_pane_g6_ParamLimits

0x9ce7,	// (0x00041569) control_pane_g6

0x9cf4,	// (0x00041576) control_pane_g7_ParamLimits

0x9cf4,	// (0x00041576) control_pane_g7

0x9d01,	// (0x00041583) control_pane_g8_ParamLimits

0x9d01,	// (0x00041583) control_pane_g8

0xe691,	// (0x00045f13) dt_sta_controll_pane_ParamLimits

0xe69e,	// (0x00045f20) dt_sta_indi_pane_ParamLimits

0xe6ab,	// (0x00045f2d) dt_sta_title_pane_ParamLimits

0xb81c,	// (0x0004309e) aid_size_touch_scroll_bar_cale

0xeabd,	// (0x0004633f) popup_discreet_window_ParamLimits

0xeabd,	// (0x0004633f) popup_discreet_window

0x8dc8,	// (0x0004064a) popup_sk_window

0x2a6c,	// (0x0003a2ee) bg_popup_sub_pane_cp28_ParamLimits

0x2a6c,	// (0x0003a2ee) bg_popup_sub_pane_cp28

0x79f5,	// (0x0003f277) popup_discreet_window_g1_ParamLimits

0x79f5,	// (0x0003f277) popup_discreet_window_g1

0x7a15,	// (0x0003f297) popup_discreet_window_t1_ParamLimits

0x7a15,	// (0x0003f297) popup_discreet_window_t1

0x7a33,	// (0x0003f2b5) popup_discreet_window_t2_ParamLimits

0x7a33,	// (0x0003f2b5) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00047734) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00047734) popup_discreet_window_t

0x1a5e,	// (0x000392e0) popup_sk_window_g1

0x1a68,	// (0x000392ea) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x0004773b) popup_sk_window_g

0x1a70,	// (0x000392f2) popup_sk_window_t1

0x1a7e,	// (0x00039300) popup_sk_window_t1_copy1

0xe508,	// (0x00045d8a) cell_ai5_widget_pane_g2_ParamLimits

0xe5d1,	// (0x00045e53) cell_ai5_widget_pane_t9_ParamLimits

0xe5d1,	// (0x00045e53) cell_ai5_widget_pane_t9

0xb22c,	// (0x00042aae) main_fep_fshwr2_pane

0xb07b,	// (0x000428fd) aid_fshwr2_btn_pane

0xb08f,	// (0x00042911) aid_fshwr2_syb_pane

0xb0a3,	// (0x00042925) aid_fshwr2_txt_pane

0xb0b3,	// (0x00042935) fshwr2_func_candi_pane

0xb0d5,	// (0x00042957) fshwr2_hwr_syb_pane

0xb0f9,	// (0x0004297b) fshwr2_icf_pane

0xe9e0,	// (0x00046262) fshwr2_icf_bg_pane

0x1b14,	// (0x00039396) fshwr2_icf_pane_t1_ParamLimits

0x1b14,	// (0x00039396) fshwr2_icf_pane_t1

0xbda2,	// (0x00043624) fshwr2_func_candi_pane_g1

0xe72a,	// (0x00045fac) fshwr2_func_candi_row_pane_ParamLimits

0xe72a,	// (0x00045fac) fshwr2_func_candi_row_pane

0xb129,	// (0x000429ab) cell_fshwr2_syb_pane_ParamLimits

0xb129,	// (0x000429ab) cell_fshwr2_syb_pane

0x1b4d,	// (0x000393cf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b4d,	// (0x000393cf) fshwr2_hwr_syb_pane_g1

0xe9e0,	// (0x00046262) bg_popup_call_pane_cp01

0xb151,	// (0x000429d3) fshwr2_func_candi_cell_pane_ParamLimits

0xb151,	// (0x000429d3) fshwr2_func_candi_cell_pane

0xe751,	// (0x00045fd3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe751,	// (0x00045fd3) fshwr2_func_candi_cell_bg_pane

0xb19a,	// (0x00042a1c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb19a,	// (0x00042a1c) fshwr2_func_candi_cell_pane_g1

0xb1d1,	// (0x00042a53) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb1d1,	// (0x00042a53) fshwr2_func_candi_cell_pane_t1

0xe9e0,	// (0x00046262) bg_button_pane_cp08

0x7ab4,	// (0x0003f336) cell_fshwr2_syb_bg_pane

0xb1ec,	// (0x00042a6e) cell_fshwr2_syb_bg_pane_g1

0xb200,	// (0x00042a82) cell_fshwr2_syb_bg_pane_t1

0xb8da,	// (0x0004315c) main_tmo_pane

0xc2ed,	// (0x00043b6f) uni_indicator_pane_g1_ParamLimits

0xc303,	// (0x00043b85) uni_indicator_pane_g2_ParamLimits

0xc319,	// (0x00043b9b) uni_indicator_pane_g3_ParamLimits

0xc32c,	// (0x00043bae) uni_indicator_pane_g4_ParamLimits

0xc32c,	// (0x00043bae) uni_indicator_pane_g4

0x35d8,	// (0x0003ae5a) uni_indicator_pane_g5_ParamLimits

0x35d8,	// (0x0003ae5a) uni_indicator_pane_g5

0x35d8,	// (0x0003ae5a) uni_indicator_pane_g6_ParamLimits

0x35d8,	// (0x0003ae5a) uni_indicator_pane_g6

0xf91c,	// (0x0004719e) uni_indicator_pane_g_ParamLimits

0xcd2e,	// (0x000445b0) popup_tmo_note_window_ParamLimits

0xcd2e,	// (0x000445b0) popup_tmo_note_window

0x12cc,	// (0x00038b4e) fshwr2_bg_pane

0xb1c2,	// (0x00042a44) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb1c2,	// (0x00042a44) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00047740) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00047740) fshwr2_func_candi_cell_pane_g

0x0eb6,	// (0x00038738) bg_popup_window_pane_cp01

0x1c09,	// (0x0003948b) bg_popup_window_pane_g1_cp01

0x7ac0,	// (0x0003f342) bg_popup_window_pane_cp22_ParamLimits

0x7ac0,	// (0x0003f342) bg_popup_window_pane_cp22

0x7ace,	// (0x0003f350) listscroll_tmo_link_pane_ParamLimits

0x7ace,	// (0x0003f350) listscroll_tmo_link_pane

0x7b0e,	// (0x0003f390) popup_tmo_note_window_g1_ParamLimits

0x7b0e,	// (0x0003f390) popup_tmo_note_window_g1

0x7b1b,	// (0x0003f39d) tmo_note_info_pane_ParamLimits

0x7b1b,	// (0x0003f39d) tmo_note_info_pane

0xe75d,	// (0x00045fdf) list_tmo_note_info_pane_g1_ParamLimits

0xe75d,	// (0x00045fdf) list_tmo_note_info_pane_g1

0x7b4c,	// (0x0003f3ce) list_tmo_note_info_pane_g2_ParamLimits

0x7b4c,	// (0x0003f3ce) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00047745) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00047745) list_tmo_note_info_pane_g

0x7b68,	// (0x0003f3ea) list_tmo_note_info_text_pane_ParamLimits

0x7b68,	// (0x0003f3ea) list_tmo_note_info_text_pane

0x7bed,	// (0x0003f46f) list_tmo_link_pane

0x7bfa,	// (0x0003f47c) scroll_pane_cp20

0x7c07,	// (0x0003f489) list_single_tmo_link_pane_ParamLimits

0x7c07,	// (0x0003f489) list_single_tmo_link_pane

0x7c17,	// (0x0003f499) list_single_tmo_link_pane_t1

0x7c25,	// (0x0003f4a7) list_tmo_note_info_text_pane_t1_ParamLimits

0x7c25,	// (0x0003f4a7) list_tmo_note_info_text_pane_t1

0x97bf,	// (0x00041041) aid_size_touch_scroll_bar_cp01_ParamLimits

0x97bf,	// (0x00041041) aid_size_touch_scroll_bar_cp01

0x9701,	// (0x00040f83) aid_size_touch_slider_marker

0x8db8,	// (0x0004063a) popup_settings_window_ParamLimits

0x8db8,	// (0x0004063a) popup_settings_window

0xd1b7,	// (0x00044a39) popup_candi_list_indi_window

0x1f5c,	// (0x000397de) aid_touch_navi_pane_ParamLimits

0x1225,	// (0x00038aa7) rs_clock_indi_pane

0x122e,	// (0x00038ab0) sctrl_sk_bottom_pane_ParamLimits

0x123f,	// (0x00038ac1) sctrl_sk_top_pane_ParamLimits

0x1344,	// (0x00038bc6) popup_fep_tooltip_window

0xe4d4,	// (0x00045d56) aid_size_cell_widget_grid_ParamLimits

0xe4f3,	// (0x00045d75) cell_ai5_widget_pane_g1_ParamLimits

0xe4f3,	// (0x00045d75) cell_ai5_widget_pane_g1

0xe556,	// (0x00045dd8) cell_ai5_widget_pane_g6_ParamLimits

0xe562,	// (0x00045de4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x000476c3) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x000476c3) cell_ai5_widget_pane_g

0xe600,	// (0x00045e82) cell_ai5_widget_pane_t10_ParamLimits

0xe600,	// (0x00045e82) cell_ai5_widget_pane_t10

0xe61e,	// (0x00045ea0) grid_ai5_widget_pane_ParamLimits

0xe64a,	// (0x00045ecc) cell_contacts_ai5_widget_pane_ParamLimits

0xe64a,	// (0x00045ecc) cell_contacts_ai5_widget_pane

0x7a48,	// (0x0003f2ca) popup_discreet_window_t3_ParamLimits

0x7a48,	// (0x0003f2ca) popup_discreet_window_t3

0xb115,	// (0x00042997) popup_fshwr2_char_preview_window_ParamLimits

0xb115,	// (0x00042997) popup_fshwr2_char_preview_window

0xe774,	// (0x00045ff6) tmo_note_info_pane_t1

0xe789,	// (0x0004600b) tmo_note_info_pane_t2

0xe7a2,	// (0x00046024) tmo_note_info_pane_t3

0x7bc9,	// (0x0003f44b) tmo_note_info_pane_t4

0x7bdb,	// (0x0003f45d) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x0004774a) tmo_note_info_pane_t

0x7bed,	// (0x0003f46f) list_tmo_link_pane_ParamLimits

0x7bfa,	// (0x0003f47c) scroll_pane_cp20_ParamLimits

0xe9e0,	// (0x00046262) bg_popup_fep_char_preview_window_cp01

0x7c3e,	// (0x0003f4c0) popup_fshwr2_char_preview_window_t1

0x7c4c,	// (0x0003f4ce) popup_candi_list_indi_window_g1

0x7c55,	// (0x0003f4d7) bg_cell_contacts_ai5_widget_pane

0x7c61,	// (0x0003f4e3) cell_contacts_ai5_widget_pane_g1

0x7c76,	// (0x0003f4f8) cell_contacts_ai5_widget_pane_g2

0x7c82,	// (0x0003f504) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00047755) cell_contacts_ai5_widget_pane_g

0x7c8e,	// (0x0003f510) cell_contacts_ai5_widget_pane_t1

0xb8da,	// (0x0004315c) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7d05,	// (0x0003f587) settings_container_pane

0xf341,	// (0x00046bc3) listscroll_set_pane_copy1

0x4175,	// (0x0003b9f7) scroll_pane_cp121_copy1

0x7d11,	// (0x0003f593) set_content_pane_copy1

0x7d19,	// (0x0003f59b) aid_height_set_list_copy1_ParamLimits

0x7d19,	// (0x0003f59b) aid_height_set_list_copy1

0x37d8,	// (0x0003b05a) aid_size_parent_copy1_ParamLimits

0x37d8,	// (0x0003b05a) aid_size_parent_copy1

0x7d25,	// (0x0003f5a7) button_value_adjust_pane_cp6_copy1_ParamLimits

0x7d25,	// (0x0003f5a7) button_value_adjust_pane_cp6_copy1

0x1ede,	// (0x00039760) list_highlight_pane_cp2_copy1_ParamLimits

0x1ede,	// (0x00039760) list_highlight_pane_cp2_copy1

0x7d39,	// (0x0003f5bb) list_set_pane_copy1_ParamLimits

0x7d39,	// (0x0003f5bb) list_set_pane_copy1

0x7ca0,	// (0x0003f522) main_pane_set_t1_copy1_ParamLimits

0x7ca0,	// (0x0003f522) main_pane_set_t1_copy1

0x7cda,	// (0x0003f55c) main_pane_set_t2_copy1_ParamLimits

0x7cda,	// (0x0003f55c) main_pane_set_t2_copy1

0x7dfa,	// (0x0003f67c) main_pane_set_t3_copy1

0x7e08,	// (0x0003f68a) main_pane_set_t4_copy1

0x7cf9,	// (0x0003f57b) set_content_pane_g1_copy1_ParamLimits

0x7cf9,	// (0x0003f57b) set_content_pane_g1_copy1

0x7e16,	// (0x0003f698) setting_code_pane_copy1

0x7e1e,	// (0x0003f6a0) setting_slider_graphic_pane_copy1

0x7e1e,	// (0x0003f6a0) setting_slider_pane_copy1

0x7e1e,	// (0x0003f6a0) setting_text_pane_copy1

0x7e1e,	// (0x0003f6a0) setting_volume_pane_copy1

0x7e16,	// (0x0003f698) settings_code_pane_cp2_copy1

0x7e26,	// (0x0003f6a8) settings_code_pane_cp_copy1_ParamLimits

0x7e26,	// (0x0003f6a8) settings_code_pane_cp_copy1

0x1c12,	// (0x00039494) volume_set_pane_copy1

0x7e3a,	// (0x0003f6bc) volume_set_pane_g10_copy1

0x7e46,	// (0x0003f6c8) volume_set_pane_g1_copy1

0x7e50,	// (0x0003f6d2) volume_set_pane_g2_copy1

0x7e5a,	// (0x0003f6dc) volume_set_pane_g3_copy1

0x7e64,	// (0x0003f6e6) volume_set_pane_g4_copy1

0x7e6e,	// (0x0003f6f0) volume_set_pane_g5_copy1

0x7e78,	// (0x0003f6fa) volume_set_pane_g6_copy1

0x7e82,	// (0x0003f704) volume_set_pane_g7_copy1

0x7e8c,	// (0x0003f70e) volume_set_pane_g8_copy1

0x7e96,	// (0x0003f718) volume_set_pane_g9_copy1

0xb29c,	// (0x00042b1e) bg_set_opt_pane_cp_copy1_ParamLimits

0xb29c,	// (0x00042b1e) bg_set_opt_pane_cp_copy1

0x1c1e,	// (0x000394a0) setting_slider_pane_t1_copy1_ParamLimits

0x1c1e,	// (0x000394a0) setting_slider_pane_t1_copy1

0x1c3c,	// (0x000394be) setting_slider_pane_t2_copy1_ParamLimits

0x1c3c,	// (0x000394be) setting_slider_pane_t2_copy1

0x1c56,	// (0x000394d8) setting_slider_pane_t3_copy1_ParamLimits

0x1c56,	// (0x000394d8) setting_slider_pane_t3_copy1

0x1c6e,	// (0x000394f0) slider_set_pane_copy1_ParamLimits

0x1c6e,	// (0x000394f0) slider_set_pane_copy1

0xb932,	// (0x000431b4) set_opt_bg_pane_g1_copy2

0xb93a,	// (0x000431bc) set_opt_bg_pane_g2_copy2

0x7ea0,	// (0x0003f722) set_opt_bg_pane_g3_copy2

0xb94a,	// (0x000431cc) set_opt_bg_pane_g4_copy2

0xb952,	// (0x000431d4) set_opt_bg_pane_g5_copy2

0xb95a,	// (0x000431dc) set_opt_bg_pane_g6_copy2

0x7eaa,	// (0x0003f72c) set_opt_bg_pane_g7_copy2

0x7eb4,	// (0x0003f736) set_opt_bg_pane_g8_copy2

0x7ebe,	// (0x0003f740) set_opt_bg_pane_g9_copy2

0x1c84,	// (0x00039506) aid_size_touch_slider_mark_copy1_ParamLimits

0x1c84,	// (0x00039506) aid_size_touch_slider_mark_copy1

0x7ec8,	// (0x0003f74a) slider_set_pane_g1_copy1

0x1c98,	// (0x0003951a) slider_set_pane_g2_copy1

0x0a6d,	// (0x000382ef) slider_set_pane_g3_copy1_ParamLimits

0x0a6d,	// (0x000382ef) slider_set_pane_g3_copy1

0x0a81,	// (0x00038303) slider_set_pane_g4_copy1_ParamLimits

0x0a81,	// (0x00038303) slider_set_pane_g4_copy1

0x0a99,	// (0x0003831b) slider_set_pane_g5_copy1_ParamLimits

0x0a99,	// (0x0003831b) slider_set_pane_g5_copy1

0x0a6d,	// (0x000382ef) slider_set_pane_g6_copy1_ParamLimits

0x0a6d,	// (0x000382ef) slider_set_pane_g6_copy1

0x1ca0,	// (0x00039522) slider_set_pane_g7_copy1_ParamLimits

0x1ca0,	// (0x00039522) slider_set_pane_g7_copy1

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp2_copy1

0x7ed1,	// (0x0003f753) setting_slider_graphic_pane_g1_copy1

0x7eda,	// (0x0003f75c) setting_slider_graphic_pane_t1_copy1

0x7eea,	// (0x0003f76c) setting_slider_graphic_pane_t2_copy1

0x7efa,	// (0x0003f77c) slider_set_pane_cp_copy1

0x7f0a,	// (0x0003f78c) input_focus_pane_cp1_copy1

0x7f13,	// (0x0003f795) list_set_text_pane_copy1

0x7f1b,	// (0x0003f79d) setting_text_pane_g1_copy1

0xe7b7,	// (0x00046039) set_text_pane_t1_copy1

0x7f0a,	// (0x0003f78c) input_focus_pane_cp2_copy1

0x7f1b,	// (0x0003f79d) setting_code_pane_g1_copy1

0x7f24,	// (0x0003f7a6) setting_code_pane_t1_copy1

0xf034,	// (0x000468b6) list_set_graphic_pane_copy1

0xb240,	// (0x00042ac2) bg_set_opt_pane_cp4_copy1

0xf047,	// (0x000468c9) list_set_graphic_pane_g1_copy1_ParamLimits

0xf047,	// (0x000468c9) list_set_graphic_pane_g1_copy1

0x7f32,	// (0x0003f7b4) list_set_graphic_pane_g2_copy1

0xf05f,	// (0x000468e1) list_set_graphic_pane_t1_copy1_ParamLimits

0xf05f,	// (0x000468e1) list_set_graphic_pane_t1_copy1

0x4a1d,	// (0x0003c29f) rs_clock_indi_pane_g1

0x7f3a,	// (0x0003f7bc) rs_clock_indi_pane_t1

0x7f48,	// (0x0003f7ca) rs_indi_pane

0x7f50,	// (0x0003f7d2) rs_indi_pane_g1

0x7f59,	// (0x0003f7db) rs_indi_pane_g2

0x7f62,	// (0x0003f7e4) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x0004775c) rs_indi_pane_g

0xf341,	// (0x00046bc3) bg_popup_preview_window_pane_cp03

0x7f6b,	// (0x0003f7ed) popup_fep_tooltip_window_t1

0x56c8,	// (0x0003cf4a) popup_note2_window_g2_ParamLimits

0x56c8,	// (0x0003cf4a) popup_note2_window_g2

0x0001,

0xfc73,	// (0x000474f5) popup_note2_window_g_ParamLimits

0xfc73,	// (0x000474f5) popup_note2_window_g

0x5bf1,	// (0x0003d473) bg_popup_sub_pane_cp11_ParamLimits

0x5bfe,	// (0x0003d480) cell_ai3_links_pane_g1_ParamLimits

0x5c15,	// (0x0003d497) cell_ai3_links_pane_t1

0xe7b7,	// (0x00046039) set_text_pane_t1_copy1_ParamLimits

0xf25a,	// (0x00046adc) cell_graphic_popup_pane_cp2_ParamLimits

0xf25a,	// (0x00046adc) cell_graphic_popup_pane_cp2

0x7f79,	// (0x0003f7fb) cell_graphic_popup_pane_g1_cp2

0xb62f,	// (0x00042eb1) cell_graphic_popup_pane_g2_cp2

0x7f81,	// (0x0003f803) cell_graphic_popup_pane_g3_cp2

0x7f89,	// (0x0003f80b) cell_graphic_popup_pane_t2_cp2

0xb640,	// (0x00042ec2) grid_highlight_pane_cp3_cp2

0xbbdb,	// (0x0004345d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb8da,	// (0x0004315c) main_tmo_pane_ParamLimits

0xcd22,	// (0x000445a4) popup_tmo_big_image_note_window

0xe4e2,	// (0x00045d64) cell_ai5_widget_list_pane

0xe4ea,	// (0x00045d6c) cell_ai5_widget_lrg_icon_pane

0xe774,	// (0x00045ff6) tmo_note_info_pane_t1_ParamLimits

0xe789,	// (0x0004600b) tmo_note_info_pane_t2_ParamLimits

0xe7a2,	// (0x00046024) tmo_note_info_pane_t3_ParamLimits

0x7bc9,	// (0x0003f44b) tmo_note_info_pane_t4_ParamLimits

0x7bdb,	// (0x0003f45d) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x0004774a) tmo_note_info_pane_t_ParamLimits

0x7d05,	// (0x0003f587) settings_container_pane_ParamLimits

0x7f02,	// (0x0003f784) indicator_popup_pane_cp5

0x7f02,	// (0x0003f784) indicator_popup_pane_cp6

0xf034,	// (0x000468b6) list_set_graphic_pane_copy1_ParamLimits

0xb22c,	// (0x00042aae) bg_popup_window_pane_cp23

0x7f97,	// (0x0003f819) popup_tmo_big_image_note_window_g1

0x7fa3,	// (0x0003f825) popup_tmo_big_image_note_window_t1

0x7fb3,	// (0x0003f835) popup_tmo_big_image_note_window_t2

0x7fc3,	// (0x0003f845) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00047763) popup_tmo_big_image_note_window_t

0x4a1d,	// (0x0003c29f) cell_ai5_widget_lrg_icon_pane_g1

0xe7d1,	// (0x00046053) cell_ai5_widget_lrg_icon_pane_t1

0xe7df,	// (0x00046061) cell_ai5_widget_list_row_pane_ParamLimits

0xe7df,	// (0x00046061) cell_ai5_widget_list_row_pane

0xe7f7,	// (0x00046079) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7f7,	// (0x00046079) cell_ai5_widget_list_row_pane_g1

0xe804,	// (0x00046086) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe804,	// (0x00046086) cell_ai5_widget_list_row_pane_t1

0xe82f,	// (0x000460b1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe82f,	// (0x000460b1) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x0004776a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x0004776a) cell_ai5_widget_list_row_pane_t

0xe9e0,	// (0x00046262) main_fep_vtchi_ss_pane

0x8079,	// (0x0003f8fb) popup_fep_char_pre_window

0x8081,	// (0x0003f903) popup_fep_ituss_window

0xe866,	// (0x000460e8) popup_fep_vkbss_window

0xe875,	// (0x000460f7) grid_vkbss_keypad_pane_ParamLimits

0xe875,	// (0x000460f7) grid_vkbss_keypad_pane

0x80db,	// (0x0003f95d) ituss_keypad_pane

0x1cc2,	// (0x00039544) aid_vkbss_key_offset_ParamLimits

0x1cc2,	// (0x00039544) aid_vkbss_key_offset

0xb216,	// (0x00042a98) cell_vkbss_key_pane_ParamLimits

0xb216,	// (0x00042a98) cell_vkbss_key_pane

0x80ea,	// (0x0003f96c) bg_cell_vkbss_key_g1_ParamLimits

0x80ea,	// (0x0003f96c) bg_cell_vkbss_key_g1

0xe885,	// (0x00046107) cell_vkbss_key_3p_pane_ParamLimits

0xe885,	// (0x00046107) cell_vkbss_key_3p_pane

0xe89f,	// (0x00046121) cell_vkbss_key_g1_ParamLimits

0xe89f,	// (0x00046121) cell_vkbss_key_g1

0xe8b9,	// (0x0004613b) cell_vkbss_key_t1_ParamLimits

0xe8b9,	// (0x0004613b) cell_vkbss_key_t1

0x1ce4,	// (0x00039566) cell_ituss_key_pane_ParamLimits

0x1ce4,	// (0x00039566) cell_ituss_key_pane

0x8149,	// (0x0003f9cb) bg_cell_ituss_key_g1_ParamLimits

0x8149,	// (0x0003f9cb) bg_cell_ituss_key_g1

0x8155,	// (0x0003f9d7) cell_ituss_key_pane_g1_ParamLimits

0x8155,	// (0x0003f9d7) cell_ituss_key_pane_g1

0x1cf5,	// (0x00039577) cell_ituss_key_pane_g2_ParamLimits

0x1cf5,	// (0x00039577) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00047771) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00047771) cell_ituss_key_pane_g

0x1d21,	// (0x000395a3) cell_ituss_key_t1_ParamLimits

0x1d21,	// (0x000395a3) cell_ituss_key_t1

0x1d5b,	// (0x000395dd) cell_ituss_key_t2_ParamLimits

0x1d5b,	// (0x000395dd) cell_ituss_key_t2

0x1d8c,	// (0x0003960e) cell_ituss_key_t3_ParamLimits

0x1d8c,	// (0x0003960e) cell_ituss_key_t3

0x1d5b,	// (0x000395dd) cell_ituss_key_t4_ParamLimits

0x1d5b,	// (0x000395dd) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00047778) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00047778) cell_ituss_key_t

0x817b,	// (0x0003f9fd) cell_vkbss_key_3p_pane_g1

0x8183,	// (0x0003fa05) cell_vkbss_key_3p_pane_g2

0x818b,	// (0x0003fa0d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00047783) cell_vkbss_key_3p_pane_g

0xf341,	// (0x00046bc3) bg_popup_fep_char_preview_window_cp02

0x8193,	// (0x0003fa15) popup_fep_char_pre_window_t1

0xe4c1,	// (0x00045d43) main_ai5_sk_pane

0x7c55,	// (0x0003f4d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7c61,	// (0x0003f4e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7c76,	// (0x0003f4f8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7c82,	// (0x0003f504) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00047755) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7c8e,	// (0x0003f510) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb8da,	// (0x0004315c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe8e4,	// (0x00046166) main_ai5_sk_pane_g1

0x28a4,	// (0x0003a126) popup_query_code_window_g1

0xe857,	// (0x000460d9) popup_fep_vkb_icf_pane

0x80b5,	// (0x0003f937) popup_fep_vtchi_icf_pane

0x81aa,	// (0x0003fa2c) bg_icf_pane

0x81b6,	// (0x0003fa38) list_vkb_icf_pane

0x81c5,	// (0x0003fa47) bg_icf_pane_cp01

0x81d8,	// (0x0003fa5a) vtchi_icf_list_pane

0xe8ed,	// (0x0004616f) list_vkb_icf_pane_t1_ParamLimits

0xe8ed,	// (0x0004616f) list_vkb_icf_pane_t1

0x8206,	// (0x0003fa88) vtchi_icf_list_pane_t1_ParamLimits

0x8206,	// (0x0003fa88) vtchi_icf_list_pane_t1

0x8081,	// (0x0003f903) popup_fep_ituss_window_ParamLimits

0x80b5,	// (0x0003f937) popup_fep_vtchi_icf_pane_ParamLimits

0x80db,	// (0x0003f95d) ituss_keypad_pane_ParamLimits

0x1cb6,	// (0x00039538) ituss_sks_pane

0x81aa,	// (0x0003fa2c) bg_icf_pane_ParamLimits

0x8059,	// (0x0003f8db) icf_edit_indi_pane_ParamLimits

0x8059,	// (0x0003f8db) icf_edit_indi_pane

0x81b6,	// (0x0003fa38) list_vkb_icf_pane_ParamLimits

0x81c5,	// (0x0003fa47) bg_icf_pane_cp01_ParamLimits

0x806c,	// (0x0003f8ee) icf_edit_indi_pane_cp01_ParamLimits

0x806c,	// (0x0003f8ee) icf_edit_indi_pane_cp01

0x81e0,	// (0x0003fa62) vtchi_query_pane

0x6f11,	// (0x0003e793) icf_edit_indi_pane_g1_ParamLimits

0x6f11,	// (0x0003e793) icf_edit_indi_pane_g1

0xe903,	// (0x00046185) icf_edit_indi_pane_g2_ParamLimits

0xe903,	// (0x00046185) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0004779b) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0004779b) icf_edit_indi_pane_g

0xe915,	// (0x00046197) icf_edit_indi_pane_t1

0x821e,	// (0x0003faa0) bg_input_focus_pane_cp042

0xb813,	// (0x00043095) vtchi_button_pane

0x8227,	// (0x0003faa9) vtchi_query_pane_t1

0x8235,	// (0x0003fab7) vtchi_query_pane_t2

0x8243,	// (0x0003fac5) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0004778a) vtchi_query_pane_t

0xe9e0,	// (0x00046262) bg_button_pane_cp13

0x8251,	// (0x0003fad3) vtchi_button_pane_g1

0x1dcf,	// (0x00039651) ituss_sks_pane_g1

0x1dda,	// (0x0003965c) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00047791) ituss_sks_pane_g

0x8259,	// (0x0003fadb) ituss_sks_pane_t1

0x8267,	// (0x0003fae9) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047796) ituss_sks_pane_t

0x44fa,	// (0x0003bd7c) indicator_nsta_pane_cp_g1

0x4502,	// (0x0003bd84) indicator_nsta_pane_cp_g2

0x450a,	// (0x0003bd8c) indicator_nsta_pane_cp_g3

0x44fa,	// (0x0003bd7c) indicator_nsta_pane_cp_g4

0x4502,	// (0x0003bd84) indicator_nsta_pane_cp_g5

0x450a,	// (0x0003bd8c) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00047333) indicator_nsta_pane_cp_g

0xdfe8,	// (0x0004586a) cell_graphic2_pane_t2_ParamLimits

0xdfe8,	// (0x0004586a) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x0004764c) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x0004764c) cell_graphic2_pane_t

0xe020,	// (0x000458a2) cell_graphic2_control_pane_t1

0x9a0d,	// (0x0004128f) signal_pane_g3_ParamLimits

0x9a0d,	// (0x0004128f) signal_pane_g3

0x9a21,	// (0x000412a3) signal_pane_g4_ParamLimits

0x9a21,	// (0x000412a3) signal_pane_g4

0xe841,	// (0x000460c3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe841,	// (0x000460c3) cell_ai5_widget_list_row_pane_t3

0x8169,	// (0x0003f9eb) cell_ituss_key_pane_t1_ParamLimits

0x8169,	// (0x0003f9eb) cell_ituss_key_pane_t1

0x2513,	// (0x00039d95) form_field_data_wide_pane_vc_t2_ParamLimits

0x2513,	// (0x00039d95) form_field_data_wide_pane_vc_t2

0x2527,	// (0x00039da9) form_field_data_wide_pane_vc_t3_ParamLimits

0x2527,	// (0x00039da9) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00047086) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00047086) form_field_data_wide_pane_vc_t

0x41b5,	// (0x0003ba37) form_field_slider_wide_pane_vc_t3_ParamLimits

0x41b5,	// (0x0003ba37) form_field_slider_wide_pane_vc_t3

0x428b,	// (0x0003bb0d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x428b,	// (0x0003bb0d) form_field_popup_wide_pane_vc_t2

0x42a2,	// (0x0003bb24) form_field_popup_wide_pane_vc_t3_ParamLimits

0x42a2,	// (0x0003bb24) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00047322) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00047322) form_field_popup_wide_pane_vc_t

0xb07b,	// (0x000428fd) aid_fshwr2_btn_pane_ParamLimits

0xb08f,	// (0x00042911) aid_fshwr2_syb_pane_ParamLimits

0xb0a3,	// (0x00042925) aid_fshwr2_txt_pane_ParamLimits

0x12cc,	// (0x00038b4e) fshwr2_bg_pane_ParamLimits

0xb0b3,	// (0x00042935) fshwr2_func_candi_pane_ParamLimits

0xb0d5,	// (0x00042957) fshwr2_hwr_syb_pane_ParamLimits

0xb0f9,	// (0x0004297b) fshwr2_icf_pane_ParamLimits

0xd54a,	// (0x00044dcc) list_double_graphic_pane_vc_g4_ParamLimits

0xd54a,	// (0x00044dcc) list_double_graphic_pane_vc_g4

0x1d15,	// (0x00039597) cell_ituss_key_pane_g3_ParamLimits

0x1d15,	// (0x00039597) cell_ituss_key_pane_g3

0x1dbd,	// (0x0003963f) cell_ituss_key_t5_ParamLimits

0x1dbd,	// (0x0003963f) cell_ituss_key_t5

0xe866,	// (0x000460e8) popup_fep_vkbss_window_ParamLimits

0xe4cb,	// (0x00045d4d) aid_cell_ai5_quarter

0xe915,	// (0x00046197) icf_edit_indi_pane_t1_ParamLimits

0xb477,	// (0x00042cf9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb477,	// (0x00042cf9) aid_tch_indicator_popup_pane_cp2

0xb48a,	// (0x00042d0c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb48a,	// (0x00042d0c) aid_tch_query_popup_data_pane_cp2

0x284c,	// (0x0003a0ce) aid_tch_query_popup_pane_ParamLimits

0x284c,	// (0x0003a0ce) aid_tch_query_popup_pane

0x284c,	// (0x0003a0ce) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x284c,	// (0x0003a0ce) aid_tch_query_popup_data_pane_cp1

0x7ab4,	// (0x0003f336) cell_fshwr2_syb_bg_pane_ParamLimits

0xb1ec,	// (0x00042a6e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb200,	// (0x00042a82) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe857,	// (0x000460d9) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

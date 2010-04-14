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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037edf };

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
0x91ab,	// (0x0004108a) Screen

0x91b7,	// (0x00041096) application_window_ParamLimits

0x91b7,	// (0x00041096) application_window

0x77fa,	// (0x0003f6d9) screen_g1

0x91ef,	// (0x000410ce) area_bottom_pane_ParamLimits

0x91ef,	// (0x000410ce) area_bottom_pane

0xebde,	// (0x00046abd) area_top_pane_ParamLimits

0xebde,	// (0x00046abd) area_top_pane

0xec7c,	// (0x00046b5b) main_pane_ParamLimits

0xec7c,	// (0x00046b5b) main_pane

0x7804,	// (0x0003f6e3) misc_graphics

0xac14,	// (0x00042af3) battery_pane_ParamLimits

0xac14,	// (0x00042af3) battery_pane

0x2bf8,	// (0x0003aad7) bg_status_flat_pane_g8

0x2c00,	// (0x0003aadf) bg_status_flat_pane_g9

0x2002,	// (0x00039ee1) context_pane_ParamLimits

0x2002,	// (0x00039ee1) context_pane

0xad8b,	// (0x00042c6a) navi_pane_ParamLimits

0xad8b,	// (0x00042c6a) navi_pane

0xae15,	// (0x00042cf4) signal_pane_ParamLimits

0xae15,	// (0x00042cf4) signal_pane

0x0008,

0xf874,	// (0x00047753) bg_status_flat_pane_g

0xaea5,	// (0x00042d84) status_pane_g1_ParamLimits

0xaea5,	// (0x00042d84) status_pane_g1

0xc1f9,	// (0x000440d8) status_pane_g2_ParamLimits

0xc1f9,	// (0x000440d8) status_pane_g2

0x2243,	// (0x0003a122) status_pane_g3_ParamLimits

0x2243,	// (0x0003a122) status_pane_g3

0x0004,

0xf7a0,	// (0x0004767f) status_pane_g_ParamLimits

0xf7a0,	// (0x0004767f) status_pane_g

0xc205,	// (0x000440e4) title_pane_ParamLimits

0xc205,	// (0x000440e4) title_pane

0xc268,	// (0x00044147) uni_indicator_pane_ParamLimits

0xc268,	// (0x00044147) uni_indicator_pane

0x00da,	// (0x00037fb9) bg_list_pane_ParamLimits

0x00da,	// (0x00037fb9) bg_list_pane

0xa434,	// (0x00042313) find_pane

0xa43c,	// (0x0004231b) listscroll_app_pane_ParamLimits

0xa43c,	// (0x0004231b) listscroll_app_pane

0x010e,	// (0x00037fed) listscroll_form_pane

0xa44c,	// (0x0004232b) listscroll_gen_pane_ParamLimits

0xa44c,	// (0x0004232b) listscroll_gen_pane

0x012a,	// (0x00038009) listscroll_set_pane

0x3797,	// (0x0003b676) main_idle_act_pane

0xf333,	// (0x00047212) main_idle_trad_pane

0xf333,	// (0x00047212) main_list_empty_pane

0x0144,	// (0x00038023) main_midp_pane

0x0150,	// (0x0003802f) main_pane_g1_ParamLimits

0x0150,	// (0x0003802f) main_pane_g1

0xa46e,	// (0x0004234d) popup_ai_message_window_ParamLimits

0xa46e,	// (0x0004234d) popup_ai_message_window

0xa50e,	// (0x000423ed) popup_fep_china_uni_window_ParamLimits

0xa50e,	// (0x000423ed) popup_fep_china_uni_window

0x19bb,	// (0x0003989a) popup_fep_japan_candidate_window_ParamLimits

0x19bb,	// (0x0003989a) popup_fep_japan_candidate_window

0x19e5,	// (0x000398c4) popup_fep_japan_predictive_window_ParamLimits

0x19e5,	// (0x000398c4) popup_fep_japan_predictive_window

0xa56e,	// (0x0004244d) popup_find_window

0xa58b,	// (0x0004246a) popup_grid_graphic_window_ParamLimits

0xa58b,	// (0x0004246a) popup_grid_graphic_window

0x1a56,	// (0x00039935) popup_large_graphic_colour_window

0xa62f,	// (0x0004250e) popup_menu_window_ParamLimits

0xa62f,	// (0x0004250e) popup_menu_window

0xa81f,	// (0x000426fe) popup_note_image_window

0xa7df,	// (0x000426be) popup_note_wait_window_ParamLimits

0xa7df,	// (0x000426be) popup_note_wait_window

0xa837,	// (0x00042716) popup_note_window_ParamLimits

0xa837,	// (0x00042716) popup_note_window

0xa8e5,	// (0x000427c4) popup_query_code_window_ParamLimits

0xa8e5,	// (0x000427c4) popup_query_code_window

0x1cc2,	// (0x00039ba1) popup_query_data_code_window_ParamLimits

0x1cc2,	// (0x00039ba1) popup_query_data_code_window

0xa925,	// (0x00042804) popup_query_data_window_ParamLimits

0xa925,	// (0x00042804) popup_query_data_window

0xa9b9,	// (0x00042898) popup_query_sat_info_window_ParamLimits

0xa9b9,	// (0x00042898) popup_query_sat_info_window

0xaa64,	// (0x00042943) popup_snote_single_graphic_window_ParamLimits

0xaa64,	// (0x00042943) popup_snote_single_graphic_window

0xaa64,	// (0x00042943) popup_snote_single_text_window_ParamLimits

0xaa64,	// (0x00042943) popup_snote_single_text_window

0x1d5d,	// (0x00039c3c) popup_sub_window_general

0x1ea3,	// (0x00039d82) popup_window_general_ParamLimits

0x1ea3,	// (0x00039d82) popup_window_general

0x1ebc,	// (0x00039d9b) power_save_pane

0xa2a2,	// (0x00042181) control_pane_g1_ParamLimits

0xa2a2,	// (0x00042181) control_pane_g1

0xa2cb,	// (0x000421aa) control_pane_g2_ParamLimits

0xa2cb,	// (0x000421aa) control_pane_g2

0xf531,	// (0x00047410) control_pane_g3_ParamLimits

0xf531,	// (0x00047410) control_pane_g3

0x0007,

0xf788,	// (0x00047667) control_pane_g_ParamLimits

0xf788,	// (0x00047667) control_pane_g

0xa32d,	// (0x0004220c) control_pane_t1_ParamLimits

0xa32d,	// (0x0004220c) control_pane_t1

0xa38b,	// (0x0004226a) control_pane_t2_ParamLimits

0xa38b,	// (0x0004226a) control_pane_t2

0x0002,

0xf799,	// (0x00047678) control_pane_t_ParamLimits

0xf799,	// (0x00047678) control_pane_t

0xa1fb,	// (0x000420da) navi_navi_volume_pane_cp1

0xa203,	// (0x000420e2) status_small_icon_pane

0xf4fd,	// (0x000473dc) status_small_pane_g1_ParamLimits

0xf4fd,	// (0x000473dc) status_small_pane_g1

0xa20b,	// (0x000420ea) status_small_pane_g2_ParamLimits

0xa20b,	// (0x000420ea) status_small_pane_g2

0xa217,	// (0x000420f6) status_small_pane_g3_ParamLimits

0xa217,	// (0x000420f6) status_small_pane_g3

0xa223,	// (0x00042102) status_small_pane_g4_ParamLimits

0xa223,	// (0x00042102) status_small_pane_g4

0xa22f,	// (0x0004210e) status_small_pane_g5_ParamLimits

0xa22f,	// (0x0004210e) status_small_pane_g5

0xa23d,	// (0x0004211c) status_small_pane_g6_ParamLimits

0xa23d,	// (0x0004211c) status_small_pane_g6

0x0007,

0xf777,	// (0x00047656) status_small_pane_g_ParamLimits

0xf777,	// (0x00047656) status_small_pane_g

0xa26c,	// (0x0004214b) status_small_pane_t1

0xa28e,	// (0x0004216d) status_small_wait_pane_ParamLimits

0xa28e,	// (0x0004216d) status_small_wait_pane

0x9f3a,	// (0x00041e19) aid_levels_signal_ParamLimits

0x9f3a,	// (0x00041e19) aid_levels_signal

0x9f52,	// (0x00041e31) signal_pane_g1_ParamLimits

0x9f52,	// (0x00041e31) signal_pane_g1

0x9f6d,	// (0x00041e4c) signal_pane_g2_ParamLimits

0x9f6d,	// (0x00041e4c) signal_pane_g2

0x0003,

0xf708,	// (0x000475e7) signal_pane_g_ParamLimits

0xf708,	// (0x000475e7) signal_pane_g

0xbeac,	// (0x00043d8b) context_pane_g1

0x93db,	// (0x000412ba) title_pane_g1

0x9406,	// (0x000412e5) title_pane_t1

0x81e7,	// (0x000400c6) title_pane_t2

0x820d,	// (0x000400ec) title_pane_t3

0x0002,

0xf557,	// (0x00047436) title_pane_t

0xc290,	// (0x0004416f) aid_levels_battery_ParamLimits

0xc290,	// (0x0004416f) aid_levels_battery

0xc2ac,	// (0x0004418b) battery_pane_g1_ParamLimits

0xc2ac,	// (0x0004418b) battery_pane_g1

0xc2c9,	// (0x000441a8) battery_pane_g2_ParamLimits

0xc2c9,	// (0x000441a8) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004768a) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004768a) battery_pane_g

0xc57f,	// (0x0004445e) uni_indicator_pane_g1

0xc595,	// (0x00044474) uni_indicator_pane_g2

0xc5ab,	// (0x0004448a) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x000477fb) uni_indicator_pane_g

0xc15a,	// (0x00044039) navi_icon_pane_ParamLimits

0xc15a,	// (0x00044039) navi_icon_pane

0xc0de,	// (0x00043fbd) navi_midp_pane

0xc176,	// (0x00044055) navi_navi_pane

0xc180,	// (0x0004405f) navi_text_pane_ParamLimits

0xc180,	// (0x0004405f) navi_text_pane

0x77fa,	// (0x0003f6d9) status_small_wait_pane_g1

0x8508,	// (0x000403e7) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x000477f6) status_small_wait_pane_g

0xc4e6,	// (0x000443c5) navi_navi_icon_text_pane

0xc4ee,	// (0x000443cd) navi_navi_pane_g1_ParamLimits

0xc4ee,	// (0x000443cd) navi_navi_pane_g1

0xc500,	// (0x000443df) navi_navi_pane_g2_ParamLimits

0xc500,	// (0x000443df) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x000477c4) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x000477c4) navi_navi_pane_g

0x3281,	// (0x0003b160) navi_navi_tabs_pane

0xc512,	// (0x000443f1) navi_navi_text_pane

0xc4e6,	// (0x000443c5) navi_navi_volume_pane

0xc4d4,	// (0x000443b3) navi_text_pane_t1

0xc4c8,	// (0x000443a7) navi_icon_pane_g1

0x3178,	// (0x0003b057) navi_navi_text_pane_t1

0xb0a3,	// (0x00042f82) navi_navi_volume_pane_g1

0xb0ab,	// (0x00042f8a) volume_small_pane

0xc410,	// (0x000442ef) navi_navi_icon_text_pane_g1

0xc418,	// (0x000442f7) navi_navi_icon_text_pane_t1

0xc176,	// (0x00044055) navi_tabs_2_long_pane

0xc176,	// (0x00044055) navi_tabs_2_pane

0xc176,	// (0x00044055) navi_tabs_3_long_pane

0xc176,	// (0x00044055) navi_tabs_3_pane

0xc176,	// (0x00044055) navi_tabs_4_pane

0xb083,	// (0x00042f62) tabs_2_active_pane_ParamLimits

0xb083,	// (0x00042f62) tabs_2_active_pane

0xb093,	// (0x00042f72) tabs_2_passive_pane_ParamLimits

0xb093,	// (0x00042f72) tabs_2_passive_pane

0xb051,	// (0x00042f30) tabs_3_active_pane_ParamLimits

0xb051,	// (0x00042f30) tabs_3_active_pane

0xb061,	// (0x00042f40) tabs_3_passive_pane_ParamLimits

0xb061,	// (0x00042f40) tabs_3_passive_pane

0xb072,	// (0x00042f51) tabs_3_passive_pane_cp_ParamLimits

0xb072,	// (0x00042f51) tabs_3_passive_pane_cp

0xb00d,	// (0x00042eec) tabs_4_active_pane_ParamLimits

0xb00d,	// (0x00042eec) tabs_4_active_pane

0xb01e,	// (0x00042efd) tabs_4_passive_pane_ParamLimits

0xb01e,	// (0x00042efd) tabs_4_passive_pane

0xb02f,	// (0x00042f0e) tabs_4_passive_pane_cp_ParamLimits

0xb02f,	// (0x00042f0e) tabs_4_passive_pane_cp

0xb040,	// (0x00042f1f) tabs_4_passive_pane_cp2_ParamLimits

0xb040,	// (0x00042f1f) tabs_4_passive_pane_cp2

0xafe9,	// (0x00042ec8) tabs_2_long_active_pane_ParamLimits

0xafe9,	// (0x00042ec8) tabs_2_long_active_pane

0xaffb,	// (0x00042eda) tabs_2_long_passive_pane_ParamLimits

0xaffb,	// (0x00042eda) tabs_2_long_passive_pane

0xaf9e,	// (0x00042e7d) tabs_3_long_active_pane_ParamLimits

0xaf9e,	// (0x00042e7d) tabs_3_long_active_pane

0xafb7,	// (0x00042e96) tabs_3_long_passive_pane_ParamLimits

0xafb7,	// (0x00042e96) tabs_3_long_passive_pane

0xafd0,	// (0x00042eaf) tabs_3_long_passive_pane_cp_ParamLimits

0xafd0,	// (0x00042eaf) tabs_3_long_passive_pane_cp

0x03de,	// (0x000382bd) volume_small_pane_g1

0xaf4d,	// (0x00042e2c) volume_small_pane_g2

0xaf56,	// (0x00042e35) volume_small_pane_g3

0xaf5f,	// (0x00042e3e) volume_small_pane_g4

0xaf68,	// (0x00042e47) volume_small_pane_g5

0xaf71,	// (0x00042e50) volume_small_pane_g6

0xaf7a,	// (0x00042e59) volume_small_pane_g7

0xaf83,	// (0x00042e62) volume_small_pane_g8

0xaf8c,	// (0x00042e6b) volume_small_pane_g9

0xaf95,	// (0x00042e74) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00047790) volume_small_pane_g

0x8352,	// (0x00040231) bg_active_tab_pane_cp2_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp2

0x9492,	// (0x00041371) tabs_3_active_pane_g1

0x949a,	// (0x00041379) tabs_3_active_pane_t1

0x8352,	// (0x00040231) bg_passive_tab_pane_cp2_ParamLimits

0x8352,	// (0x00040231) bg_passive_tab_pane_cp2

0x9492,	// (0x00041371) tabs_3_passive_pane_g1

0x949a,	// (0x00041379) tabs_3_passive_pane_t1

0x8352,	// (0x00040231) bg_active_tab_pane_cp3_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp3

0x94ac,	// (0x0004138b) tabs_4_active_pane_g1

0x94b4,	// (0x00041393) tabs_4_active_pane_t1

0x8352,	// (0x00040231) bg_passive_tab_pane_cp3_ParamLimits

0x8352,	// (0x00040231) bg_passive_tab_pane_cp3

0x94ac,	// (0x0004138b) tabs_4_1_passive_pane_g1

0x94b4,	// (0x00041393) tabs_4_1_passive_pane_t1

0x0144,	// (0x00038023) list_highlight_pane_cp2

0xc640,	// (0x0004451f) list_set_pane_ParamLimits

0xc640,	// (0x0004451f) list_set_pane

0xc708,	// (0x000445e7) main_pane_set_t1_ParamLimits

0xc708,	// (0x000445e7) main_pane_set_t1

0xc728,	// (0x00044607) main_pane_set_t2_ParamLimits

0xc728,	// (0x00044607) main_pane_set_t2

0xc73c,	// (0x0004461b) main_pane_set_t3_ParamLimits

0xc73c,	// (0x0004461b) main_pane_set_t3

0xc750,	// (0x0004462f) main_pane_set_t4_ParamLimits

0xc750,	// (0x0004462f) main_pane_set_t4

0x0003,

0xf981,	// (0x00047860) main_pane_set_t_ParamLimits

0xf981,	// (0x00047860) main_pane_set_t

0xc764,	// (0x00044643) setting_code_pane

0x38eb,	// (0x0003b7ca) setting_slider_graphic_pane

0x38eb,	// (0x0003b7ca) setting_slider_pane

0x38eb,	// (0x0003b7ca) setting_text_pane

0x38eb,	// (0x0003b7ca) setting_volume_pane

0xed8b,	// (0x00046c6a) volume_set_pane

0x821f,	// (0x000400fe) bg_set_opt_pane_cp

0xed95,	// (0x00046c74) setting_slider_pane_t1

0xedae,	// (0x00046c8d) setting_slider_pane_t2

0xedc8,	// (0x00046ca7) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004743d) setting_slider_pane_t

0xede0,	// (0x00046cbf) slider_set_pane

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp2

0x822d,	// (0x0004010c) setting_slider_graphic_pane_g1

0xedf6,	// (0x00046cd5) setting_slider_graphic_pane_t1

0xee06,	// (0x00046ce5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00047444) setting_slider_graphic_pane_t

0xee16,	// (0x00046cf5) slider_set_pane_cp

0x7804,	// (0x0003f6e3) input_focus_pane_cp1

0x377e,	// (0x0003b65d) list_set_text_pane

0x77fa,	// (0x0003f6d9) setting_text_pane_g1

0x7804,	// (0x0003f6e3) input_focus_pane_cp2

0x77fa,	// (0x0003f6d9) setting_code_pane_g1

0x8236,	// (0x00040115) setting_code_pane_t1

0xd899,	// (0x00045778) set_text_pane_t1_ParamLimits

0xd899,	// (0x00045778) set_text_pane_t1

0xb9ce,	// (0x000438ad) set_opt_bg_pane_g1

0xb9d6,	// (0x000438b5) set_opt_bg_pane_g2

0x3756,	// (0x0003b635) set_opt_bg_pane_g3

0xb9e6,	// (0x000438c5) set_opt_bg_pane_g4

0xb9ee,	// (0x000438cd) set_opt_bg_pane_g5

0xb9f6,	// (0x000438d5) set_opt_bg_pane_g6

0x3760,	// (0x0003b63f) set_opt_bg_pane_g7

0x376a,	// (0x0003b649) set_opt_bg_pane_g8

0x3774,	// (0x0003b653) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0004784d) set_opt_bg_pane_g

0x3749,	// (0x0003b628) slider_set_pane_g1

0x05ea,	// (0x000384c9) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0004783e) slider_set_pane_g

0x054a,	// (0x00038429) volume_set_pane_g1

0x0554,	// (0x00038433) volume_set_pane_g2

0x055e,	// (0x0003843d) volume_set_pane_g3

0x0568,	// (0x00038447) volume_set_pane_g4

0x0572,	// (0x00038451) volume_set_pane_g5

0x057c,	// (0x0003845b) volume_set_pane_g6

0x0586,	// (0x00038465) volume_set_pane_g7

0x0590,	// (0x0003846f) volume_set_pane_g8

0x059a,	// (0x00038479) volume_set_pane_g9

0x05a4,	// (0x00038483) volume_set_pane_g10

0x0009,

0xf937,	// (0x00047816) volume_set_pane_g

0x94c6,	// (0x000413a5) indicator_pane_ParamLimits

0x94c6,	// (0x000413a5) indicator_pane

0x94f2,	// (0x000413d1) main_idle_pane_g2_ParamLimits

0x94f2,	// (0x000413d1) main_idle_pane_g2

0x952a,	// (0x00041409) main_pane_idle_g1_ParamLimits

0x952a,	// (0x00041409) main_pane_idle_g1

0x8244,	// (0x00040123) popup_clock_digital_analogue_window_ParamLimits

0x8244,	// (0x00040123) popup_clock_digital_analogue_window

0x9558,	// (0x00041437) soft_indicator_pane_ParamLimits

0x9558,	// (0x00041437) soft_indicator_pane

0x9574,	// (0x00041453) wallpaper_pane_ParamLimits

0x9574,	// (0x00041453) wallpaper_pane

0x77fa,	// (0x0003f6d9) wallpaper_pane_g1

0x9586,	// (0x00041465) indicator_pane_g1_ParamLimits

0x9586,	// (0x00041465) indicator_pane_g1

0x3bc7,	// (0x0003baa6) navi_navi_icon_text_pane_srt_g1

0x8272,	// (0x00040151) soft_indicator_pane_t1

0x828c,	// (0x0004016b) aid_ps_area_pane

0x959f,	// (0x0004147e) aid_ps_clock_pane

0x829d,	// (0x0004017c) aid_ps_indicator_pane

0x82a9,	// (0x00040188) indicator_ps_pane_ParamLimits

0x82a9,	// (0x00040188) indicator_ps_pane

0x82b8,	// (0x00040197) power_save_pane_g1_ParamLimits

0x82b8,	// (0x00040197) power_save_pane_g1

0x82c4,	// (0x000401a3) power_save_pane_g2_ParamLimits

0x82c4,	// (0x000401a3) power_save_pane_g2

0xebbe,	// (0x00046a9d) aid_navinavi_width_pane

0x828c,	// (0x0004016b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00047449) power_save_pane_g_ParamLimits

0xf56a,	// (0x00047449) power_save_pane_g

0x82d2,	// (0x000401b1) power_save_pane_t1_ParamLimits

0x82d2,	// (0x000401b1) power_save_pane_t1

0x959f,	// (0x0004147e) aid_ps_clock_pane_ParamLimits

0x829d,	// (0x0004017c) aid_ps_indicator_pane_ParamLimits

0x82e4,	// (0x000401c3) power_save_pane_t4_ParamLimits

0x82e4,	// (0x000401c3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004744e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004744e) power_save_pane_t

0x830e,	// (0x000401ed) power_save_t3_ParamLimits

0x830e,	// (0x000401ed) power_save_t3

0x82f9,	// (0x000401d8) power_save_t2_ParamLimits

0x82f9,	// (0x000401d8) power_save_t2

0x8323,	// (0x00040202) indicator_ps_pane_g1

0x95ad,	// (0x0004148c) ai_gene_pane_ParamLimits

0x95ad,	// (0x0004148c) ai_gene_pane

0x95c4,	// (0x000414a3) ai_links_pane_ParamLimits

0x95c4,	// (0x000414a3) ai_links_pane

0x95dc,	// (0x000414bb) indicator_pane_cp1_ParamLimits

0x95dc,	// (0x000414bb) indicator_pane_cp1

0x95eb,	// (0x000414ca) main_pane_idle_g1_cp_ParamLimits

0x95eb,	// (0x000414ca) main_pane_idle_g1_cp

0x832c,	// (0x0004020b) popup_ai_links_title_window

0x9603,	// (0x000414e2) soft_indicator_pane_cp1_ParamLimits

0x9603,	// (0x000414e2) soft_indicator_pane_cp1

0x3530,	// (0x0003b40f) ai_links_pane_g1

0x3539,	// (0x0003b418) grid_ai_links_pane

0xc576,	// (0x00044455) ai_gene_pane_1

0x351e,	// (0x0003b3fd) ai_gene_pane_2

0x3527,	// (0x0003b406) list_highlight_pane_cp4

0xc552,	// (0x00044431) cell_ai_link_pane_ParamLimits

0xc552,	// (0x00044431) cell_ai_link_pane

0x34ed,	// (0x0003b3cc) cell_ai_link_pane_g1

0x8508,	// (0x000403e7) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x000477f1) cell_ai_link_pane_g

0x7804,	// (0x0003f6e3) grid_highlight_cp2

0x7804,	// (0x0003f6e3) bg_popup_sub_pane_cp1

0x8343,	// (0x00040222) popup_ai_links_title_window_t1

0x3439,	// (0x0003b318) ai_gene_pane_1_g1_ParamLimits

0x3439,	// (0x0003b318) ai_gene_pane_1_g1

0x3445,	// (0x0003b324) ai_gene_pane_1_g2_ParamLimits

0x3445,	// (0x0003b324) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x000477e7) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x000477e7) ai_gene_pane_1_g

0x3452,	// (0x0003b331) ai_gene_pane_1_t1_ParamLimits

0x3452,	// (0x0003b331) ai_gene_pane_1_t1

0x3486,	// (0x0003b365) grid_ai_soft_ind_pane

0x3424,	// (0x0003b303) ai_gene_pane_2_t1_ParamLimits

0x3424,	// (0x0003b303) ai_gene_pane_2_t1

0x9617,	// (0x000414f6) main_pane_empty_t1_ParamLimits

0x9617,	// (0x000414f6) main_pane_empty_t1

0x962f,	// (0x0004150e) main_pane_empty_t2_ParamLimits

0x962f,	// (0x0004150e) main_pane_empty_t2

0x9644,	// (0x00041523) main_pane_empty_t3_ParamLimits

0x9644,	// (0x00041523) main_pane_empty_t3

0x9656,	// (0x00041535) main_pane_empty_t4_ParamLimits

0x9656,	// (0x00041535) main_pane_empty_t4

0x9668,	// (0x00041547) main_pane_empty_t5_ParamLimits

0x9668,	// (0x00041547) main_pane_empty_t5

0x0004,

0xf574,	// (0x00047453) main_pane_empty_t_ParamLimits

0xf574,	// (0x00047453) main_pane_empty_t

0xba1f,	// (0x000438fe) bg_popup_window_pane_ParamLimits

0xba1f,	// (0x000438fe) bg_popup_window_pane

0x3186,	// (0x0003b065) find_popup_pane_cp2_ParamLimits

0x3186,	// (0x0003b065) find_popup_pane_cp2

0x3192,	// (0x0003b071) heading_pane_ParamLimits

0x3192,	// (0x0003b071) heading_pane

0x7804,	// (0x0003f6e3) bg_popup_sub_pane

0xc435,	// (0x00044314) bg_popup_window_pane_g1_ParamLimits

0xc435,	// (0x00044314) bg_popup_window_pane_g1

0xc444,	// (0x00044323) bg_popup_window_pane_g2_ParamLimits

0xc444,	// (0x00044323) bg_popup_window_pane_g2

0xc450,	// (0x0004432f) bg_popup_window_pane_g3_ParamLimits

0xc450,	// (0x0004432f) bg_popup_window_pane_g3

0xc45c,	// (0x0004433b) bg_popup_window_pane_g4_ParamLimits

0xc45c,	// (0x0004433b) bg_popup_window_pane_g4

0xc46b,	// (0x0004434a) bg_popup_window_pane_g5_ParamLimits

0xc46b,	// (0x0004434a) bg_popup_window_pane_g5

0xc47b,	// (0x0004435a) bg_popup_window_pane_g6_ParamLimits

0xc47b,	// (0x0004435a) bg_popup_window_pane_g6

0xc487,	// (0x00044366) bg_popup_window_pane_g7_ParamLimits

0xc487,	// (0x00044366) bg_popup_window_pane_g7

0xc496,	// (0x00044375) bg_popup_window_pane_g8_ParamLimits

0xc496,	// (0x00044375) bg_popup_window_pane_g8

0xc4a5,	// (0x00044384) bg_popup_window_pane_g9_ParamLimits

0xc4a5,	// (0x00044384) bg_popup_window_pane_g9

0x316c,	// (0x0003b04b) bg_popup_window_pane_g10_ParamLimits

0x316c,	// (0x0003b04b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000477af) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000477af) bg_popup_window_pane_g

0x3095,	// (0x0003af74) bg_popup_heading_pane_ParamLimits

0x3095,	// (0x0003af74) bg_popup_heading_pane

0x06fb,	// (0x000385da) tabs_4_passive_pane_cp_srt_ParamLimits

0x06fb,	// (0x000385da) tabs_4_passive_pane_cp_srt

0x070d,	// (0x000385ec) tabs_4_passive_pane_srt_ParamLimits

0x30a9,	// (0x0003af88) heading_pane_g2

0x070d,	// (0x000385ec) tabs_4_passive_pane_srt

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp3_srt

0x30b1,	// (0x0003af90) heading_pane_t1_ParamLimits

0x30b1,	// (0x0003af90) heading_pane_t1

0x30c8,	// (0x0003afa7) heading_pane_t2_ParamLimits

0x30c8,	// (0x0003afa7) heading_pane_t2

0x0001,

0xf8cb,	// (0x000477aa) heading_pane_t_ParamLimits

0xf8cb,	// (0x000477aa) heading_pane_t

0x2bc0,	// (0x0003aa9f) bg_popup_heading_pane_g1

0x2c6f,	// (0x0003ab4e) bg_popup_heading_pane_g2

0x2c79,	// (0x0003ab58) bg_popup_heading_pane_g3

0x2c83,	// (0x0003ab62) bg_popup_heading_pane_g4

0x2c8d,	// (0x0003ab6c) bg_popup_heading_pane_g5

0x2c97,	// (0x0003ab76) bg_popup_heading_pane_g6

0x2c9f,	// (0x0003ab7e) bg_popup_heading_pane_g7

0x2ca7,	// (0x0003ab86) bg_popup_heading_pane_g8

0x2cb1,	// (0x0003ab90) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00047766) bg_popup_heading_pane_g

0x23ce,	// (0x0003a2ad) bg_popup_sub_pane_g1

0x23de,	// (0x0003a2bd) bg_popup_sub_pane_g2

0x23d6,	// (0x0003a2b5) bg_popup_sub_pane_g3

0x23ee,	// (0x0003a2cd) bg_popup_sub_pane_g4

0x23e6,	// (0x0003a2c5) bg_popup_sub_pane_g5

0x23f6,	// (0x0003a2d5) bg_popup_sub_pane_g6

0x23fe,	// (0x0003a2dd) bg_popup_sub_pane_g7

0x240e,	// (0x0003a2ed) bg_popup_sub_pane_g8

0x2406,	// (0x0003a2e5) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00047740) bg_popup_sub_pane_g

0x8352,	// (0x00040231) bg_popup_window_pane_cp5_ParamLimits

0x8352,	// (0x00040231) bg_popup_window_pane_cp5

0x836e,	// (0x0004024d) popup_note_window_g1_ParamLimits

0x836e,	// (0x0004024d) popup_note_window_g1

0x837a,	// (0x00040259) popup_note_window_t1_ParamLimits

0x837a,	// (0x00040259) popup_note_window_t1

0x8390,	// (0x0004026f) popup_note_window_t2_ParamLimits

0x8390,	// (0x0004026f) popup_note_window_t2

0x83a6,	// (0x00040285) popup_note_window_t3_ParamLimits

0x83a6,	// (0x00040285) popup_note_window_t3

0x83bc,	// (0x0004029b) popup_note_window_t4_ParamLimits

0x83bc,	// (0x0004029b) popup_note_window_t4

0x83e4,	// (0x000402c3) popup_note_window_t5_ParamLimits

0x83e4,	// (0x000402c3) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004745e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004745e) popup_note_window_t

0x8408,	// (0x000402e7) bg_popup_window_pane_cp6_ParamLimits

0x8408,	// (0x000402e7) bg_popup_window_pane_cp6

0x2b3c,	// (0x0003aa1b) popup_note_image_window_g1_ParamLimits

0x2b3c,	// (0x0003aa1b) popup_note_image_window_g1

0x2b48,	// (0x0003aa27) popup_note_image_window_g2_ParamLimits

0x2b48,	// (0x0003aa27) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00047734) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00047734) popup_note_image_window_g

0x2b61,	// (0x0003aa40) popup_note_image_window_t1_ParamLimits

0x2b61,	// (0x0003aa40) popup_note_image_window_t1

0x2b7a,	// (0x0003aa59) popup_note_image_window_t2_ParamLimits

0x2b7a,	// (0x0003aa59) popup_note_image_window_t2

0x2b93,	// (0x0003aa72) popup_note_image_window_t3_ParamLimits

0x2b93,	// (0x0003aa72) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00047739) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00047739) popup_note_image_window_t

0x29fc,	// (0x0003a8db) bg_popup_window_pane_cp7_ParamLimits

0x29fc,	// (0x0003a8db) bg_popup_window_pane_cp7

0x2a2c,	// (0x0003a90b) popup_note_wait_window_g1_ParamLimits

0x2a2c,	// (0x0003a90b) popup_note_wait_window_g1

0x2a38,	// (0x0003a917) popup_note_wait_window_g2_ParamLimits

0x2a38,	// (0x0003a917) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00047722) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00047722) popup_note_wait_window_g

0x2a50,	// (0x0003a92f) popup_note_wait_window_t1_ParamLimits

0x2a50,	// (0x0003a92f) popup_note_wait_window_t1

0x2a77,	// (0x0003a956) popup_note_wait_window_t2_ParamLimits

0x2a77,	// (0x0003a956) popup_note_wait_window_t2

0x2a95,	// (0x0003a974) popup_note_wait_window_t3_ParamLimits

0x2a95,	// (0x0003a974) popup_note_wait_window_t3

0x2aa8,	// (0x0003a987) popup_note_wait_window_t4_ParamLimits

0x2aa8,	// (0x0003a987) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00047729) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00047729) popup_note_wait_window_t

0x2acd,	// (0x0003a9ac) wait_bar_pane_ParamLimits

0x2acd,	// (0x0003a9ac) wait_bar_pane

0x7804,	// (0x0003f6e3) wait_anim_pane

0x7804,	// (0x0003f6e3) wait_border_pane

0x77fa,	// (0x0003f6d9) wait_anim_pane_g1

0x77fa,	// (0x0003f6d9) wait_anim_pane_g2

0x0001,

0xf703,	// (0x000475e2) wait_anim_pane_g

0x29a0,	// (0x0003a87f) wait_border_pane_g1

0x29ab,	// (0x0003a88a) wait_border_pane_g2

0x29b4,	// (0x0003a893) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004771b) wait_border_pane_g

0x280a,	// (0x0003a6e9) bg_popup_window_pane_cp16_ParamLimits

0x280a,	// (0x0003a6e9) bg_popup_window_pane_cp16

0x290a,	// (0x0003a7e9) indicator_popup_pane_cp4_ParamLimits

0x290a,	// (0x0003a7e9) indicator_popup_pane_cp4

0x291e,	// (0x0003a7fd) popup_query_data_window_t1_ParamLimits

0x291e,	// (0x0003a7fd) popup_query_data_window_t1

0x2930,	// (0x0003a80f) popup_query_data_window_t2_ParamLimits

0x2930,	// (0x0003a80f) popup_query_data_window_t2

0x2949,	// (0x0003a828) popup_query_data_window_t3_ParamLimits

0x2949,	// (0x0003a828) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00047714) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00047714) popup_query_data_window_t

0x2963,	// (0x0003a842) query_popup_data_pane_ParamLimits

0x2963,	// (0x0003a842) query_popup_data_pane

0x2977,	// (0x0003a856) query_popup_data_pane_cp1_ParamLimits

0x2977,	// (0x0003a856) query_popup_data_pane_cp1

0x280a,	// (0x0003a6e9) bg_popup_window_pane_cp10_ParamLimits

0x280a,	// (0x0003a6e9) bg_popup_window_pane_cp10

0x283c,	// (0x0003a71b) indicator_popup_pane_ParamLimits

0x283c,	// (0x0003a71b) indicator_popup_pane

0x285e,	// (0x0003a73d) popup_query_code_window_t1_ParamLimits

0x285e,	// (0x0003a73d) popup_query_code_window_t1

0x2878,	// (0x0003a757) popup_query_code_window_t2_ParamLimits

0x2878,	// (0x0003a757) popup_query_code_window_t2

0x28c1,	// (0x0003a7a0) popup_query_code_window_t3_ParamLimits

0x28c1,	// (0x0003a7a0) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0004770d) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0004770d) popup_query_code_window_t

0x28f0,	// (0x0003a7cf) query_popup_pane_ParamLimits

0x28f0,	// (0x0003a7cf) query_popup_pane

0x8408,	// (0x000402e7) bg_popup_window_pane_cp15_ParamLimits

0x8408,	// (0x000402e7) bg_popup_window_pane_cp15

0x8428,	// (0x00040307) indicator_popup_pane_cp1_ParamLimits

0x8428,	// (0x00040307) indicator_popup_pane_cp1

0x843b,	// (0x0004031a) indicator_popup_pane_cp2_ParamLimits

0x843b,	// (0x0004031a) indicator_popup_pane_cp2

0x8456,	// (0x00040335) popup_query_data_code_window_g1_ParamLimits

0x8456,	// (0x00040335) popup_query_data_code_window_g1

0x8469,	// (0x00040348) popup_query_data_code_window_t1_ParamLimits

0x8469,	// (0x00040348) popup_query_data_code_window_t1

0x847b,	// (0x0004035a) popup_query_data_code_window_t2_ParamLimits

0x847b,	// (0x0004035a) popup_query_data_code_window_t2

0x848d,	// (0x0004036c) popup_query_data_code_window_t3_ParamLimits

0x848d,	// (0x0004036c) popup_query_data_code_window_t3

0x84a3,	// (0x00040382) popup_query_data_code_window_t4_ParamLimits

0x84a3,	// (0x00040382) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00047469) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00047469) popup_query_data_code_window_t

0x02c7,	// (0x000381a6) list_single_midp_graphic_pane_g3

0x84bd,	// (0x0004039c) query_popup_data_pane_cp2_ParamLimits

0x84d0,	// (0x000403af) query_popup_pane_cp2_ParamLimits

0x84d0,	// (0x000403af) query_popup_pane_cp2

0x7804,	// (0x0003f6e3) bg_popup_window_pane_cp11

0x2802,	// (0x0003a6e1) heading_pane_cp5

0x8566,	// (0x00040445) listscroll_popup_info_pane

0x7804,	// (0x0003f6e3) input_focus_pane_cp3

0x84eb,	// (0x000403ca) query_popup_pane_t1

0x84f9,	// (0x000403d8) list_popup_info_pane_ParamLimits

0x84f9,	// (0x000403d8) list_popup_info_pane

0x8508,	// (0x000403e7) listscroll_popup_info_pane_g1

0x8510,	// (0x000403ef) scroll_pane_cp7

0x851a,	// (0x000403f9) popup_info_list_pane_t1_ParamLimits

0x851a,	// (0x000403f9) popup_info_list_pane_t1

0x8534,	// (0x00040413) popup_info_list_pane_t2_ParamLimits

0x8534,	// (0x00040413) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00047472) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00047472) popup_info_list_pane_t

0x7804,	// (0x0003f6e3) bg_popup_window_pane_cp12

0x3be1,	// (0x0003bac0) find_popup_pane

0x821f,	// (0x000400fe) bg_popup_window_pane_cp3

0x854e,	// (0x0004042d) heading_pane_cp3

0x855a,	// (0x00040439) listscroll_popup_graphic_pane

0x7804,	// (0x0003f6e3) bg_popup_window_pane_cp4

0x96ca,	// (0x000415a9) heading_pane_cp4

0x8566,	// (0x00040445) listscroll_popup_colour_pane

0x96d4,	// (0x000415b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x96d4,	// (0x000415b3) cell_large_graphic_colour_none_popup_pane

0x96e8,	// (0x000415c7) grid_large_graphic_colour_popup_pane_ParamLimits

0x96e8,	// (0x000415c7) grid_large_graphic_colour_popup_pane

0x970c,	// (0x000415eb) listscroll_popup_colour_pane_g1_ParamLimits

0x970c,	// (0x000415eb) listscroll_popup_colour_pane_g1

0x9723,	// (0x00041602) listscroll_popup_colour_pane_g2_ParamLimits

0x9723,	// (0x00041602) listscroll_popup_colour_pane_g2

0x973a,	// (0x00041619) listscroll_popup_colour_pane_g3_ParamLimits

0x973a,	// (0x00041619) listscroll_popup_colour_pane_g3

0x974a,	// (0x00041629) listscroll_popup_colour_pane_g4_ParamLimits

0x974a,	// (0x00041629) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00047477) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00047477) listscroll_popup_colour_pane_g

0x856e,	// (0x0004044d) scroll_pane_cp6_ParamLimits

0x856e,	// (0x0004044d) scroll_pane_cp6

0x975a,	// (0x00041639) cell_large_graphic_colour_popup_pane_ParamLimits

0x975a,	// (0x00041639) cell_large_graphic_colour_popup_pane

0x8580,	// (0x0004045f) cell_large_graphic_colour_none_popup_pane_t1

0x7804,	// (0x0003f6e3) grid_highlight_pane_cp5

0x858f,	// (0x0004046e) cell_large_graphic_colour_popup_pane_g1

0x8597,	// (0x00040476) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00047480) cell_large_graphic_colour_popup_pane_g

0x859f,	// (0x0004047e) cell_large_graphic_colour_popup_pane_g2_copy1

0x85a8,	// (0x00040487) grid_highlight_pane_cp4

0x85b0,	// (0x0004048f) bg_popup_window_pane_cp8_ParamLimits

0x85b0,	// (0x0004048f) bg_popup_window_pane_cp8

0x85cb,	// (0x000404aa) popup_snote_single_text_window_g1_ParamLimits

0x85cb,	// (0x000404aa) popup_snote_single_text_window_g1

0x85dd,	// (0x000404bc) popup_snote_single_text_window_t1_ParamLimits

0x85dd,	// (0x000404bc) popup_snote_single_text_window_t1

0x85f0,	// (0x000404cf) popup_snote_single_text_window_t2_ParamLimits

0x85f0,	// (0x000404cf) popup_snote_single_text_window_t2

0x8603,	// (0x000404e2) popup_snote_single_text_window_t3_ParamLimits

0x8603,	// (0x000404e2) popup_snote_single_text_window_t3

0x863c,	// (0x0004051b) popup_snote_single_text_window_t4_ParamLimits

0x863c,	// (0x0004051b) popup_snote_single_text_window_t4

0x8670,	// (0x0004054f) popup_snote_single_text_window_t5_ParamLimits

0x8670,	// (0x0004054f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00047485) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00047485) popup_snote_single_text_window_t

0x869f,	// (0x0004057e) bg_popup_window_pane_cp9_ParamLimits

0x869f,	// (0x0004057e) bg_popup_window_pane_cp9

0x85cb,	// (0x000404aa) popup_snote_single_graphic_window_g1_ParamLimits

0x85cb,	// (0x000404aa) popup_snote_single_graphic_window_g1

0x86ad,	// (0x0004058c) popup_snote_single_graphic_window_g2_ParamLimits

0x86ad,	// (0x0004058c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00047490) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00047490) popup_snote_single_graphic_window_g

0x86b9,	// (0x00040598) popup_snote_single_graphic_window_t1_ParamLimits

0x86b9,	// (0x00040598) popup_snote_single_graphic_window_t1

0x86cc,	// (0x000405ab) popup_snote_single_graphic_window_t2_ParamLimits

0x86cc,	// (0x000405ab) popup_snote_single_graphic_window_t2

0x86df,	// (0x000405be) popup_snote_single_graphic_window_t3_ParamLimits

0x86df,	// (0x000405be) popup_snote_single_graphic_window_t3

0x8718,	// (0x000405f7) popup_snote_single_graphic_window_t4_ParamLimits

0x8718,	// (0x000405f7) popup_snote_single_graphic_window_t4

0x874c,	// (0x0004062b) popup_snote_single_graphic_window_t5_ParamLimits

0x874c,	// (0x0004062b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00047495) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00047495) popup_snote_single_graphic_window_t

0x3b1f,	// (0x0003b9fe) grid_graphic_popup_pane_ParamLimits

0x3b1f,	// (0x0003b9fe) grid_graphic_popup_pane

0x3b4d,	// (0x0003ba2c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3b4d,	// (0x0003ba2c) listscroll_popup_graphic_pane_g1

0xc87d,	// (0x0004475c) listscroll_popup_graphic_pane_g2_ParamLimits

0xc87d,	// (0x0004475c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004788a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004788a) listscroll_popup_graphic_pane_g

0x3b75,	// (0x0003ba54) scroll_pane_cp5

0xc83c,	// (0x0004471b) cell_graphic_popup_pane_ParamLimits

0xc83c,	// (0x0004471b) cell_graphic_popup_pane

0x3aa8,	// (0x0003b987) cell_graphic_popup_pane_g1

0x3ab0,	// (0x0003b98f) cell_graphic_popup_pane_g2

0x859f,	// (0x0004047e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00047883) cell_graphic_popup_pane_g

0x3ab9,	// (0x0003b998) cell_graphic_popup_pane_t2

0x85a8,	// (0x00040487) grid_highlight_pane_cp3

0x878d,	// (0x0004066c) list_gen_pane_ParamLimits

0x878d,	// (0x0004066c) list_gen_pane

0x87b5,	// (0x00040694) scroll_pane

0xc7f3,	// (0x000446d2) bg_list_pane_g1_ParamLimits

0xc7f3,	// (0x000446d2) bg_list_pane_g1

0x3a1d,	// (0x0003b8fc) bg_list_pane_g2_ParamLimits

0x3a1d,	// (0x0003b8fc) bg_list_pane_g2

0x3a32,	// (0x0003b911) bg_list_pane_g3_ParamLimits

0x3a32,	// (0x0003b911) bg_list_pane_g3

0x3a46,	// (0x0003b925) bg_list_pane_g4_ParamLimits

0x3a46,	// (0x0003b925) bg_list_pane_g4

0xc810,	// (0x000446ef) bg_list_pane_g5_ParamLimits

0xc810,	// (0x000446ef) bg_list_pane_g5

0x0004,

0xf999,	// (0x00047878) bg_list_pane_g_ParamLimits

0xf999,	// (0x00047878) bg_list_pane_g

0xc7a2,	// (0x00044681) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double2_graphic_large_graphic_pane

0xc7a2,	// (0x00044681) list_double2_graphic_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double2_graphic_pane

0xc7a2,	// (0x00044681) list_double2_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double2_large_graphic_pane

0xc7b6,	// (0x00044695) list_double2_pane_ParamLimits

0xc7b6,	// (0x00044695) list_double2_pane

0xc7a2,	// (0x00044681) list_double_graphic_heading_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_graphic_heading_pane

0xc7a2,	// (0x00044681) list_double_graphic_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_graphic_pane

0xc7a2,	// (0x00044681) list_double_heading_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_heading_pane

0xc7a2,	// (0x00044681) list_double_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_large_graphic_pane

0xc7a2,	// (0x00044681) list_double_number_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_number_pane

0xc7a2,	// (0x00044681) list_double_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_pane

0xc7a2,	// (0x00044681) list_double_time_pane_ParamLimits

0xc7a2,	// (0x00044681) list_double_time_pane

0xc7a2,	// (0x00044681) list_setting_number_pane_ParamLimits

0xc7a2,	// (0x00044681) list_setting_number_pane

0xc7a2,	// (0x00044681) list_setting_pane_ParamLimits

0xc7a2,	// (0x00044681) list_setting_pane

0xb0f2,	// (0x00042fd1) list_single_2graphic_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_2graphic_pane

0xb0f2,	// (0x00042fd1) list_single_graphic_heading_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_graphic_heading_pane

0xb0f2,	// (0x00042fd1) list_single_graphic_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_graphic_pane

0xb0f2,	// (0x00042fd1) list_single_heading_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_heading_pane

0xc7b6,	// (0x00044695) list_single_large_graphic_pane_ParamLimits

0xc7b6,	// (0x00044695) list_single_large_graphic_pane

0xb0f2,	// (0x00042fd1) list_single_number_heading_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_number_heading_pane

0xb0f2,	// (0x00042fd1) list_single_number_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_number_pane

0xb0f2,	// (0x00042fd1) list_single_pane_ParamLimits

0xb0f2,	// (0x00042fd1) list_single_pane

0x7804,	// (0x0003f6e3) list_highlight_pane_cp1

0xd8b4,	// (0x00045793) list_single_pane_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_pane_g1

0xd8c0,	// (0x0004579f) list_single_pane_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_pane_g

0xdb3b,	// (0x00045a1a) list_single_pane_t1_ParamLimits

0xdb3b,	// (0x00045a1a) list_single_pane_t1

0xd8b4,	// (0x00045793) list_single_number_pane_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_number_pane_g1

0xd8c0,	// (0x0004579f) list_single_number_pane_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_number_pane_g

0xda64,	// (0x00045943) list_single_number_pane_t1_ParamLimits

0xda64,	// (0x00045943) list_single_number_pane_t1

0xb0b4,	// (0x00042f93) list_single_number_pane_t2_ParamLimits

0xb0b4,	// (0x00042f93) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00047839) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00047839) list_single_number_pane_t

0x9785,	// (0x00041664) list_single_graphic_pane_g1_ParamLimits

0x9785,	// (0x00041664) list_single_graphic_pane_g1

0xd8b4,	// (0x00045793) list_single_graphic_pane_g2_ParamLimits

0xd8b4,	// (0x00045793) list_single_graphic_pane_g2

0xd8c0,	// (0x0004579f) list_single_graphic_pane_g3_ParamLimits

0xd8c0,	// (0x0004579f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000474a0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000474a0) list_single_graphic_pane_g

0x9791,	// (0x00041670) list_single_graphic_pane_t1_ParamLimits

0x9791,	// (0x00041670) list_single_graphic_pane_t1

0xd8b4,	// (0x00045793) list_single_heading_pane_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_heading_pane_g1

0xd8c0,	// (0x0004579f) list_single_heading_pane_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_heading_pane_g

0x97a7,	// (0x00041686) list_single_heading_pane_t1_ParamLimits

0x97a7,	// (0x00041686) list_single_heading_pane_t1

0x97bd,	// (0x0004169c) list_single_heading_pane_t2_ParamLimits

0x97bd,	// (0x0004169c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000474ac) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000474ac) list_single_heading_pane_t

0xd8b4,	// (0x00045793) list_single_number_heading_pane_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_number_heading_pane_g1

0xd8c0,	// (0x0004579f) list_single_number_heading_pane_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_number_heading_pane_g

0x97a7,	// (0x00041686) list_single_number_heading_pane_t1_ParamLimits

0x97a7,	// (0x00041686) list_single_number_heading_pane_t1

0x97cf,	// (0x000416ae) list_single_number_heading_pane_t2_ParamLimits

0x97cf,	// (0x000416ae) list_single_number_heading_pane_t2

0xd8cc,	// (0x000457ab) list_single_number_heading_pane_t3_ParamLimits

0xd8cc,	// (0x000457ab) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000474b1) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000474b1) list_single_number_heading_pane_t

0xd8de,	// (0x000457bd) list_single_graphic_heading_pane_g1_ParamLimits

0xd8de,	// (0x000457bd) list_single_graphic_heading_pane_g1

0x97e1,	// (0x000416c0) list_single_graphic_heading_pane_g4_ParamLimits

0x97e1,	// (0x000416c0) list_single_graphic_heading_pane_g4

0xd8c0,	// (0x0004579f) list_single_graphic_heading_pane_g5_ParamLimits

0xd8c0,	// (0x0004579f) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000474b8) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000474b8) list_single_graphic_heading_pane_g

0x97a7,	// (0x00041686) list_single_graphic_heading_pane_t1_ParamLimits

0x97a7,	// (0x00041686) list_single_graphic_heading_pane_t1

0x97f2,	// (0x000416d1) list_single_graphic_heading_pane_t2_ParamLimits

0x97f2,	// (0x000416d1) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000474bf) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000474bf) list_single_graphic_heading_pane_t

0xd8ea,	// (0x000457c9) list_single_large_graphic_pane_g1_ParamLimits

0xd8ea,	// (0x000457c9) list_single_large_graphic_pane_g1

0xd8f6,	// (0x000457d5) list_single_large_graphic_pane_g2_ParamLimits

0xd8f6,	// (0x000457d5) list_single_large_graphic_pane_g2

0xd902,	// (0x000457e1) list_single_large_graphic_pane_g3_ParamLimits

0xd902,	// (0x000457e1) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000474c4) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000474c4) list_single_large_graphic_pane_g

0x29ab,	// (0x0003a88a) wait_border_pane_g2_copy1

0x9804,	// (0x000416e3) list_single_large_graphic_pane_g4_cp2

0xd90e,	// (0x000457ed) list_single_large_graphic_pane_t1_ParamLimits

0xd90e,	// (0x000457ed) list_single_large_graphic_pane_t1

0x980c,	// (0x000416eb) list_double_pane_g1_ParamLimits

0x980c,	// (0x000416eb) list_double_pane_g1

0x9818,	// (0x000416f7) list_double_pane_g2_ParamLimits

0x9818,	// (0x000416f7) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000474cb) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000474cb) list_double_pane_g

0x9824,	// (0x00041703) list_double_pane_t1_ParamLimits

0x9824,	// (0x00041703) list_double_pane_t1

0x983a,	// (0x00041719) list_double_pane_t2_ParamLimits

0x983a,	// (0x00041719) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000474d0) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000474d0) list_double_pane_t

0x984c,	// (0x0004172b) list_double2_pane_g1_ParamLimits

0x984c,	// (0x0004172b) list_double2_pane_g1

0x985d,	// (0x0004173c) list_double2_pane_g2_ParamLimits

0x985d,	// (0x0004173c) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000474d5) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000474d5) list_double2_pane_g

0x9869,	// (0x00041748) list_double2_pane_t1_ParamLimits

0x9869,	// (0x00041748) list_double2_pane_t1

0x987f,	// (0x0004175e) list_double2_pane_t2_ParamLimits

0x987f,	// (0x0004175e) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000474da) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000474da) list_double2_pane_t

0x980c,	// (0x000416eb) list_double_number_pane_g1_ParamLimits

0x980c,	// (0x000416eb) list_double_number_pane_g1

0x9818,	// (0x000416f7) list_double_number_pane_g2_ParamLimits

0x9818,	// (0x000416f7) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000474cb) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000474cb) list_double_number_pane_g

0x9891,	// (0x00041770) list_double_number_pane_t1_ParamLimits

0x9891,	// (0x00041770) list_double_number_pane_t1

0x98a3,	// (0x00041782) list_double_number_pane_t2_ParamLimits

0x98a3,	// (0x00041782) list_double_number_pane_t2

0x98b9,	// (0x00041798) list_double_number_pane_t3_ParamLimits

0x98b9,	// (0x00041798) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000474df) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000474df) list_double_number_pane_t

0x98cb,	// (0x000417aa) list_double_graphic_pane_g1_ParamLimits

0x98cb,	// (0x000417aa) list_double_graphic_pane_g1

0x98d7,	// (0x000417b6) list_double_graphic_pane_g2_ParamLimits

0x98d7,	// (0x000417b6) list_double_graphic_pane_g2

0x98e6,	// (0x000417c5) list_double_graphic_pane_g3_ParamLimits

0x98e6,	// (0x000417c5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000474e6) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000474e6) list_double_graphic_pane_g

0x98fe,	// (0x000417dd) list_double_graphic_pane_t1_ParamLimits

0x98fe,	// (0x000417dd) list_double_graphic_pane_t1

0x9914,	// (0x000417f3) list_double_graphic_pane_t2_ParamLimits

0x9914,	// (0x000417f3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000474ef) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000474ef) list_double_graphic_pane_t

0x9926,	// (0x00041805) list_double2_graphic_pane_g1_ParamLimits

0x9926,	// (0x00041805) list_double2_graphic_pane_g1

0x9932,	// (0x00041811) list_double2_graphic_pane_g2_ParamLimits

0x9932,	// (0x00041811) list_double2_graphic_pane_g2

0x993e,	// (0x0004181d) list_double2_graphic_pane_g3_ParamLimits

0x993e,	// (0x0004181d) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000474f4) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000474f4) list_double2_graphic_pane_g

0x994a,	// (0x00041829) list_double2_graphic_pane_t1_ParamLimits

0x994a,	// (0x00041829) list_double2_graphic_pane_t1

0x9960,	// (0x0004183f) list_double2_graphic_pane_t2_ParamLimits

0x9960,	// (0x0004183f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000474fb) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000474fb) list_double2_graphic_pane_t

0x9972,	// (0x00041851) list_double_large_graphic_pane_g1_ParamLimits

0x9972,	// (0x00041851) list_double_large_graphic_pane_g1

0x999d,	// (0x0004187c) list_double_large_graphic_pane_g2_ParamLimits

0x999d,	// (0x0004187c) list_double_large_graphic_pane_g2

0x9818,	// (0x000416f7) list_double_large_graphic_pane_g3_ParamLimits

0x9818,	// (0x000416f7) list_double_large_graphic_pane_g3

0x99ae,	// (0x0004188d) list_double_large_graphic_pane_g4_ParamLimits

0x99ae,	// (0x0004188d) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00047500) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00047500) list_double_large_graphic_pane_g

0x99c1,	// (0x000418a0) list_double_large_graphic_pane_t1_ParamLimits

0x99c1,	// (0x000418a0) list_double_large_graphic_pane_t1

0x99da,	// (0x000418b9) list_double_large_graphic_pane_t2_ParamLimits

0x99da,	// (0x000418b9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004750b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004750b) list_double_large_graphic_pane_t

0x99ec,	// (0x000418cb) list_double2_large_graphic_pane_g1_ParamLimits

0x99ec,	// (0x000418cb) list_double2_large_graphic_pane_g1

0x99f8,	// (0x000418d7) list_double2_large_graphic_pane_g2_ParamLimits

0x99f8,	// (0x000418d7) list_double2_large_graphic_pane_g2

0x9a09,	// (0x000418e8) list_double2_large_graphic_pane_g3_ParamLimits

0x9a09,	// (0x000418e8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00047510) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00047510) list_double2_large_graphic_pane_g

0x9a15,	// (0x000418f4) list_double2_large_graphic_pane_t1_ParamLimits

0x9a15,	// (0x000418f4) list_double2_large_graphic_pane_t1

0x9a2b,	// (0x0004190a) list_double2_large_graphic_pane_t2_ParamLimits

0x9a2b,	// (0x0004190a) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00047517) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00047517) list_double2_large_graphic_pane_t

0x9a3d,	// (0x0004191c) list_double_heading_pane_g1_ParamLimits

0x9a3d,	// (0x0004191c) list_double_heading_pane_g1

0x9a4e,	// (0x0004192d) list_double_heading_pane_g2_ParamLimits

0x9a4e,	// (0x0004192d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0004751c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0004751c) list_double_heading_pane_g

0x9a5a,	// (0x00041939) list_double_heading_pane_t1_ParamLimits

0x9a5a,	// (0x00041939) list_double_heading_pane_t1

0x9a70,	// (0x0004194f) list_double_heading_pane_t2_ParamLimits

0x9a70,	// (0x0004194f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00047521) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00047521) list_double_heading_pane_t

0x9a82,	// (0x00041961) list_double_graphic_heading_pane_g1_ParamLimits

0x9a82,	// (0x00041961) list_double_graphic_heading_pane_g1

0x9a3d,	// (0x0004191c) list_double_graphic_heading_pane_g2_ParamLimits

0x9a3d,	// (0x0004191c) list_double_graphic_heading_pane_g2

0x9a4e,	// (0x0004192d) list_double_graphic_heading_pane_g3_ParamLimits

0x9a4e,	// (0x0004192d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00047526) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00047526) list_double_graphic_heading_pane_g

0x9a8e,	// (0x0004196d) list_double_graphic_heading_pane_t1_ParamLimits

0x9a8e,	// (0x0004196d) list_double_graphic_heading_pane_t1

0x9960,	// (0x0004183f) list_double_graphic_heading_pane_t2_ParamLimits

0x9960,	// (0x0004183f) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0004752d) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0004752d) list_double_graphic_heading_pane_t

0x999d,	// (0x0004187c) list_double_time_pane_g1_ParamLimits

0x999d,	// (0x0004187c) list_double_time_pane_g1

0x9818,	// (0x000416f7) list_double_time_pane_g2_ParamLimits

0x9818,	// (0x000416f7) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00047532) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00047532) list_double_time_pane_g

0x9aa4,	// (0x00041983) list_double_time_pane_t1_ParamLimits

0x9aa4,	// (0x00041983) list_double_time_pane_t1

0x9aba,	// (0x00041999) list_double_time_pane_t2_ParamLimits

0x9aba,	// (0x00041999) list_double_time_pane_t2

0x9acc,	// (0x000419ab) list_double_time_pane_t3_ParamLimits

0x9acc,	// (0x000419ab) list_double_time_pane_t3

0x9ade,	// (0x000419bd) list_double_time_pane_t4_ParamLimits

0x9ade,	// (0x000419bd) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00047537) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00047537) list_double_time_pane_t

0x9af0,	// (0x000419cf) list_setting_pane_g1_ParamLimits

0x9af0,	// (0x000419cf) list_setting_pane_g1

0x9a4e,	// (0x0004192d) list_setting_pane_g2_ParamLimits

0x9a4e,	// (0x0004192d) list_setting_pane_g2

0x0001,

0xf661,	// (0x00047540) list_setting_pane_g_ParamLimits

0xf661,	// (0x00047540) list_setting_pane_g

0x9afc,	// (0x000419db) list_setting_pane_t1_ParamLimits

0x9afc,	// (0x000419db) list_setting_pane_t1

0x9b13,	// (0x000419f2) list_setting_pane_t2_ParamLimits

0x9b13,	// (0x000419f2) list_setting_pane_t2

0x0002,

0xf666,	// (0x00047545) list_setting_pane_t_ParamLimits

0xf666,	// (0x00047545) list_setting_pane_t

0x9b52,	// (0x00041a31) set_value_pane_cp_ParamLimits

0x9b52,	// (0x00041a31) set_value_pane_cp

0x9b60,	// (0x00041a3f) list_setting_number_pane_g1_ParamLimits

0x9b60,	// (0x00041a3f) list_setting_number_pane_g1

0x9b6c,	// (0x00041a4b) list_setting_number_pane_g2_ParamLimits

0x9b6c,	// (0x00041a4b) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0004754c) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0004754c) list_setting_number_pane_g

0x9b78,	// (0x00041a57) list_setting_number_pane_t1_ParamLimits

0x9b78,	// (0x00041a57) list_setting_number_pane_t1

0x9b8c,	// (0x00041a6b) list_setting_number_pane_t2_ParamLimits

0x9b8c,	// (0x00041a6b) list_setting_number_pane_t2

0x9ba3,	// (0x00041a82) list_setting_number_pane_t3_ParamLimits

0x9ba3,	// (0x00041a82) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00047551) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00047551) list_setting_number_pane_t

0x9b52,	// (0x00041a31) set_value_pane_ParamLimits

0x9b52,	// (0x00041a31) set_value_pane

0xb91a,	// (0x000437f9) bg_set_opt_pane_ParamLimits

0xb91a,	// (0x000437f9) bg_set_opt_pane

0xd939,	// (0x00045818) set_value_pane_t1

0xb93b,	// (0x0004381a) slider_set_pane_cp3

0xb944,	// (0x00043823) volume_small_pane_cp

0xb94d,	// (0x0004382c) list_form_gen_pane

0xb956,	// (0x00043835) scroll_pane_cp8

0x9be6,	// (0x00041ac5) form_field_data_pane_ParamLimits

0x9be6,	// (0x00041ac5) form_field_data_pane

0x9c01,	// (0x00041ae0) form_field_data_wide_pane_ParamLimits

0x9c01,	// (0x00041ae0) form_field_data_wide_pane

0xd957,	// (0x00045836) form_field_popup_pane_ParamLimits

0xd957,	// (0x00045836) form_field_popup_pane

0x9c23,	// (0x00041b02) form_field_popup_wide_pane_ParamLimits

0x9c23,	// (0x00041b02) form_field_popup_wide_pane

0xd979,	// (0x00045858) form_field_slider_pane_ParamLimits

0xd979,	// (0x00045858) form_field_slider_pane

0xd98c,	// (0x0004586b) form_field_slider_wide_pane_ParamLimits

0xd98c,	// (0x0004586b) form_field_slider_wide_pane

0xb967,	// (0x00043846) data_form_pane

0x9c4e,	// (0x00041b2d) form_field_data_pane_t1

0xb973,	// (0x00043852) input_focus_pane

0xd99f,	// (0x0004587e) data_form_wide_pane

0xd9bc,	// (0x0004589b) form_field_data_wide_pane_t1

0x85bd,	// (0x0004049c) input_focus_pane_cp6

0x9c68,	// (0x00041b47) form_field_popup_pane_t1

0xb973,	// (0x00043852) input_focus_pane_cp7

0xb9a1,	// (0x00043880) list_form_pane

0xd9e6,	// (0x000458c5) form_field_popup_wide_pane_t1

0xb973,	// (0x00043852) input_focus_pane_cp8

0xb9ad,	// (0x0004388c) list_form_wide_pane

0x9c8a,	// (0x00041b69) form_field_slider_pane_t1_ParamLimits

0x9c8a,	// (0x00041b69) form_field_slider_pane_t1

0x9ca2,	// (0x00041b81) form_field_slider_pane_t2_ParamLimits

0x9ca2,	// (0x00041b81) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00047561) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00047561) form_field_slider_pane_t

0x8352,	// (0x00040231) input_focus_pane_cp9_ParamLimits

0x8352,	// (0x00040231) input_focus_pane_cp9

0x9cb7,	// (0x00041b96) slider_cont_pane_ParamLimits

0x9cb7,	// (0x00041b96) slider_cont_pane

0xb9bc,	// (0x0004389b) form_field_slider_wide_pane_t1_ParamLimits

0xb9bc,	// (0x0004389b) form_field_slider_wide_pane_t1

0xd9fb,	// (0x000458da) form_field_slider_wide_pane_t2_ParamLimits

0xd9fb,	// (0x000458da) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00047566) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00047566) form_field_slider_wide_pane_t

0x8352,	// (0x00040231) input_focus_pane_cp10_ParamLimits

0x8352,	// (0x00040231) input_focus_pane_cp10

0x9ccb,	// (0x00041baa) slider_cont_pane_cp1_ParamLimits

0x9ccb,	// (0x00041baa) slider_cont_pane_cp1

0x9cdf,	// (0x00041bbe) slider_form_pane_cp

0xb9ce,	// (0x000438ad) input_focus_pane_g1

0xb9d6,	// (0x000438b5) input_focus_pane_g2

0xb9de,	// (0x000438bd) input_focus_pane_g3

0xb9e6,	// (0x000438c5) input_focus_pane_g4

0xb9ee,	// (0x000438cd) input_focus_pane_g5

0xb9f6,	// (0x000438d5) input_focus_pane_g6

0xb9fe,	// (0x000438dd) input_focus_pane_g7

0xba06,	// (0x000438e5) input_focus_pane_g8

0xba0e,	// (0x000438ed) input_focus_pane_g9

0x77fa,	// (0x0003f6d9) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0004756b) input_focus_pane_g

0x29b4,	// (0x0003a893) wait_border_pane_g3_copy1

0x9ce7,	// (0x00041bc6) data_form_pane_t1

0x77fa,	// (0x0003f6d9) wait_anim_pane_g1_copy1

0xb0c6,	// (0x00042fa5) data_form_wide_pane_t1

0xda0d,	// (0x000458ec) list_form_graphic_pane_cp_ParamLimits

0xda0d,	// (0x000458ec) list_form_graphic_pane_cp

0x3913,	// (0x0003b7f2) slider_form_pane_g1

0x391c,	// (0x0003b7fb) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00047869) slider_form_pane_g

0xda0d,	// (0x000458ec) list_form_graphic_pane_ParamLimits

0xda0d,	// (0x000458ec) list_form_graphic_pane

0xda1f,	// (0x000458fe) list_form_graphic_pane_g1

0xda27,	// (0x00045906) list_form_graphic_pane_t1_ParamLimits

0xda27,	// (0x00045906) list_form_graphic_pane_t1

0x821f,	// (0x000400fe) list_highlight_pane_cp5_ParamLimits

0x821f,	// (0x000400fe) list_highlight_pane_cp5

0x9d01,	// (0x00041be0) find_pane_g1

0xba16,	// (0x000438f5) input_find_pane

0x9d0a,	// (0x00041be9) input_find_pane_g1_ParamLimits

0x9d0a,	// (0x00041be9) input_find_pane_g1

0x9d16,	// (0x00041bf5) input_find_pane_t1_ParamLimits

0x9d16,	// (0x00041bf5) input_find_pane_t1

0x9d2b,	// (0x00041c0a) input_find_pane_t2_ParamLimits

0x9d2b,	// (0x00041c0a) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00047580) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00047580) input_find_pane_t

0xba1f,	// (0x000438fe) input_focus_pane_cp5_ParamLimits

0xba1f,	// (0x000438fe) input_focus_pane_cp5

0xba2d,	// (0x0004390c) bg_popup_window_pane_cp2_ParamLimits

0xba2d,	// (0x0004390c) bg_popup_window_pane_cp2

0xba3a,	// (0x00043919) listscroll_menu_pane_ParamLimits

0xba3a,	// (0x00043919) listscroll_menu_pane

0x9d4c,	// (0x00041c2b) popup_submenu_window_ParamLimits

0x9d4c,	// (0x00041c2b) popup_submenu_window

0xba46,	// (0x00043925) find_popup_pane_g1

0xba4e,	// (0x0004392d) input_popup_find_pane_cp

0xba1f,	// (0x000438fe) input_focus_pane_cp4_ParamLimits

0xba1f,	// (0x000438fe) input_focus_pane_cp4

0xba58,	// (0x00043937) input_popup_find_pane_t1_ParamLimits

0xba58,	// (0x00043937) input_popup_find_pane_t1

0x7804,	// (0x0003f6e3) bg_popup_sub_pane_cp

0xba86,	// (0x00043965) listscroll_popup_sub_pane

0xba8e,	// (0x0004396d) list_submenu_pane_ParamLimits

0xba8e,	// (0x0004396d) list_submenu_pane

0xba9f,	// (0x0004397e) scroll_pane_cp4

0xbaa7,	// (0x00043986) list_single_popup_submenu_pane_ParamLimits

0xbaa7,	// (0x00043986) list_single_popup_submenu_pane

0xbabc,	// (0x0004399b) list_single_popup_submenu_pane_g1

0xbac4,	// (0x000439a3) list_single_popup_submenu_pane_t1_ParamLimits

0xbac4,	// (0x000439a3) list_single_popup_submenu_pane_t1

0x8352,	// (0x00040231) bg_active_tab_pane_cp1_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp1

0x9d8a,	// (0x00041c69) tabs_2_active_pane_g1

0x9d92,	// (0x00041c71) tabs_2_active_pane_t1

0x8352,	// (0x00040231) bg_passive_tab_pane_cp1_ParamLimits

0x8352,	// (0x00040231) bg_passive_tab_pane_cp1

0x9d8a,	// (0x00041c69) tabs_2_passive_pane_g1

0x9d92,	// (0x00041c71) tabs_2_passive_pane_t1

0x821f,	// (0x000400fe) bg_active_tab_pane_cp4

0x9da4,	// (0x00041c83) tabs_2_long_active_pane_t1

0x0144,	// (0x00038023) bg_passive_tab_pane_cp4

0x02cf,	// (0x000381ae) list_single_midp_graphic_pane_g4_ParamLimits

0x821f,	// (0x000400fe) bg_active_tab_pane_cp5

0x9db7,	// (0x00041c96) tabs_3_long_active_pane_t1

0x0144,	// (0x00038023) bg_passive_tab_pane_cp5

0x02cf,	// (0x000381ae) list_single_midp_graphic_pane_g4

0x821f,	// (0x000400fe) bg_popup_window_pane_cp13_ParamLimits

0x821f,	// (0x000400fe) bg_popup_window_pane_cp13

0xbae2,	// (0x000439c1) listscroll_popup_fast_pane_ParamLimits

0xbae2,	// (0x000439c1) listscroll_popup_fast_pane

0xbaf1,	// (0x000439d0) grid_popup_fast_pane_ParamLimits

0xbaf1,	// (0x000439d0) grid_popup_fast_pane

0xbb03,	// (0x000439e2) scroll_pane_cp9_ParamLimits

0xbb03,	// (0x000439e2) scroll_pane_cp9

0x5294,	// (0x0003d173) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5294,	// (0x0003d173) list_single_graphic_hl_pane_t1_cp2

0xbb27,	// (0x00043a06) input_focus_pane_cp20_ParamLimits

0xbb27,	// (0x00043a06) input_focus_pane_cp20

0xbb35,	// (0x00043a14) query_popup_data_pane_t1_ParamLimits

0xbb35,	// (0x00043a14) query_popup_data_pane_t1

0xbb48,	// (0x00043a27) query_popup_data_pane_t2_ParamLimits

0xbb48,	// (0x00043a27) query_popup_data_pane_t2

0xbb8e,	// (0x00043a6d) query_popup_data_pane_t3_ParamLimits

0xbb8e,	// (0x00043a6d) query_popup_data_pane_t3

0xbbcf,	// (0x00043aae) query_popup_data_pane_t4_ParamLimits

0xbbcf,	// (0x00043aae) query_popup_data_pane_t4

0xbc0b,	// (0x00043aea) query_popup_data_pane_t5_ParamLimits

0xbc0b,	// (0x00043aea) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00047585) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00047585) query_popup_data_pane_t

0xb9ce,	// (0x000438ad) bg_set_opt_pane_g1

0xb9d6,	// (0x000438b5) bg_set_opt_pane_g2

0xb9de,	// (0x000438bd) bg_set_opt_pane_g3

0xb9e6,	// (0x000438c5) bg_set_opt_pane_g4

0xb9ee,	// (0x000438cd) bg_set_opt_pane_g5

0xb9f6,	// (0x000438d5) bg_set_opt_pane_g6

0xb9fe,	// (0x000438dd) bg_set_opt_pane_g7

0xba06,	// (0x000438e5) bg_set_opt_pane_g8

0xba0e,	// (0x000438ed) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00047590) bg_set_opt_pane_g

0xf124,	// (0x00047003) control_top_pane_stacon_ParamLimits

0xf124,	// (0x00047003) control_top_pane_stacon

0xf177,	// (0x00047056) signal_pane_stacon_ParamLimits

0xf177,	// (0x00047056) signal_pane_stacon

0xc022,	// (0x00043f01) stacon_top_pane_g1_ParamLimits

0xc022,	// (0x00043f01) stacon_top_pane_g1

0xf19c,	// (0x0004707b) title_pane_stacon_ParamLimits

0xf19c,	// (0x0004707b) title_pane_stacon

0xf1c6,	// (0x000470a5) uni_indicator_pane_stacon_ParamLimits

0xf1c6,	// (0x000470a5) uni_indicator_pane_stacon

0xf1de,	// (0x000470bd) battery_pane_stacon_ParamLimits

0xf1de,	// (0x000470bd) battery_pane_stacon

0xf222,	// (0x00047101) control_bottom_pane_stacon_ParamLimits

0xf222,	// (0x00047101) control_bottom_pane_stacon

0xf245,	// (0x00047124) navi_pane_stacon_ParamLimits

0xf245,	// (0x00047124) navi_pane_stacon

0xc044,	// (0x00043f23) stacon_bottom_pane_g1_ParamLimits

0xc044,	// (0x00043f23) stacon_bottom_pane_g1

0xee1e,	// (0x00046cfd) aid_levels_signal_lsc_ParamLimits

0xee1e,	// (0x00046cfd) aid_levels_signal_lsc

0xee35,	// (0x00046d14) signal_pane_stacon_g1_ParamLimits

0xee35,	// (0x00046d14) signal_pane_stacon_g1

0xee49,	// (0x00046d28) signal_pane_stacon_g2_ParamLimits

0xee49,	// (0x00046d28) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000475a3) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000475a3) signal_pane_stacon_g

0xee7e,	// (0x00046d5d) title_pane_stacon_t1_ParamLimits

0xee7e,	// (0x00046d5d) title_pane_stacon_t1

0xbc4f,	// (0x00043b2e) uni_indicator_pane_stacon_g1

0xbc59,	// (0x00043b38) uni_indicator_pane_stacon_g2

0xbc63,	// (0x00043b42) uni_indicator_pane_stacon_g3

0xbc6d,	// (0x00043b4c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000475af) uni_indicator_pane_stacon_g

0xeea3,	// (0x00046d82) control_top_pane_stacon_g1

0xeeab,	// (0x00046d8a) control_top_pane_stacon_t1_ParamLimits

0xeeab,	// (0x00046d8a) control_top_pane_stacon_t1

0xeee2,	// (0x00046dc1) aid_levels_battery_lsc_ParamLimits

0xeee2,	// (0x00046dc1) aid_levels_battery_lsc

0xeefa,	// (0x00046dd9) battery_pane_stacon_g1_ParamLimits

0xeefa,	// (0x00046dd9) battery_pane_stacon_g1

0xef0d,	// (0x00046dec) battery_pane_stacon_g2_ParamLimits

0xef0d,	// (0x00046dec) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000475b8) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000475b8) battery_pane_stacon_g

0xef4b,	// (0x00046e2a) navi_icon_pane_stacon

0xef5f,	// (0x00046e3e) navi_navi_pane_stacon

0xef4b,	// (0x00046e2a) navi_text_pane_stacon

0xeea3,	// (0x00046d82) control_bottom_pane_stacon_g1

0xef75,	// (0x00046e54) control_bottom_pane_stacon_t1_ParamLimits

0xef75,	// (0x00046e54) control_bottom_pane_stacon_t1

0x9dc9,	// (0x00041ca8) grid_app_pane_ParamLimits

0x9dc9,	// (0x00041ca8) grid_app_pane

0x9e01,	// (0x00041ce0) scroll_pane_cp15_ParamLimits

0x9e01,	// (0x00041ce0) scroll_pane_cp15

0x9e16,	// (0x00041cf5) cell_app_pane_ParamLimits

0x9e16,	// (0x00041cf5) cell_app_pane

0x9e63,	// (0x00041d42) cell_app_pane_g1_ParamLimits

0x9e63,	// (0x00041d42) cell_app_pane_g1

0xbc91,	// (0x00043b70) cell_app_pane_g2_ParamLimits

0xbc91,	// (0x00043b70) cell_app_pane_g2

0x0001,

0xf6de,	// (0x000475bd) cell_app_pane_g_ParamLimits

0xf6de,	// (0x000475bd) cell_app_pane_g

0xbc9d,	// (0x00043b7c) cell_app_pane_t1_ParamLimits

0xbc9d,	// (0x00043b7c) cell_app_pane_t1

0xbcb4,	// (0x00043b93) grid_highlight_pane_ParamLimits

0xbcb4,	// (0x00043b93) grid_highlight_pane

0xb9ce,	// (0x000438ad) cell_highlight_pane_g1

0xb9d6,	// (0x000438b5) cell_highlight_pane_g2

0xb9de,	// (0x000438bd) cell_highlight_pane_g3

0xb9e6,	// (0x000438c5) cell_highlight_pane_g4

0xb9ee,	// (0x000438cd) cell_highlight_pane_g5

0xb9f6,	// (0x000438d5) cell_highlight_pane_g6

0xb9fe,	// (0x000438dd) cell_highlight_pane_g7

0xba06,	// (0x000438e5) cell_highlight_pane_g8

0xba0e,	// (0x000438ed) cell_highlight_pane_g9

0x77fa,	// (0x0003f6d9) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0004756b) cell_highlight_pane_g

0xbcc5,	// (0x00043ba4) bg_scroll_pane

0xefb6,	// (0x00046e95) scroll_handle_pane

0xbd0c,	// (0x00043beb) scroll_bg_pane_g1

0xbd21,	// (0x00043c00) scroll_bg_pane_g2

0xbd39,	// (0x00043c18) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x000475c2) scroll_bg_pane_g

0xbd4e,	// (0x00043c2d) scroll_handle_focus_pane_ParamLimits

0xbd4e,	// (0x00043c2d) scroll_handle_focus_pane

0xbd0c,	// (0x00043beb) scroll_handle_pane_g1

0xbd5b,	// (0x00043c3a) scroll_handle_pane_g2

0xbd39,	// (0x00043c18) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000475c9) scroll_handle_pane_g

0xba1f,	// (0x000438fe) bg_popup_sub_pane_cp21_ParamLimits

0xba1f,	// (0x000438fe) bg_popup_sub_pane_cp21

0xbd6f,	// (0x00043c4e) popup_fep_japan_predictive_window_t1_ParamLimits

0xbd6f,	// (0x00043c4e) popup_fep_japan_predictive_window_t1

0xbd86,	// (0x00043c65) popup_fep_japan_predictive_window_t2_ParamLimits

0xbd86,	// (0x00043c65) popup_fep_japan_predictive_window_t2

0xbdb9,	// (0x00043c98) popup_fep_japan_predictive_window_t3_ParamLimits

0xbdb9,	// (0x00043c98) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000475d0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000475d0) popup_fep_japan_predictive_window_t

0x7804,	// (0x0003f6e3) bg_popup_sub_pane_cp23

0xbdf0,	// (0x00043ccf) listscroll_japin_cand_pane

0xbdf8,	// (0x00043cd7) popup_fep_japan_candidate_window_t1

0xbe06,	// (0x00043ce5) candidate_pane_ParamLimits

0xbe06,	// (0x00043ce5) candidate_pane

0xbe18,	// (0x00043cf7) scroll_pane_cp30

0xbe22,	// (0x00043d01) list_single_popup_jap_candidate_pane_ParamLimits

0xbe22,	// (0x00043d01) list_single_popup_jap_candidate_pane

0x7804,	// (0x0003f6e3) list_highlight_pane_cp30

0xbe36,	// (0x00043d15) list_single_popup_jap_candidate_pane_t1

0x9e8c,	// (0x00041d6b) level_1_signal

0x9e9e,	// (0x00041d7d) level_2_signal

0x9eb1,	// (0x00041d90) level_3_signal

0x9ec4,	// (0x00041da3) level_4_signal

0x9ed7,	// (0x00041db6) level_5_signal

0x9eea,	// (0x00041dc9) level_6_signal

0x9efd,	// (0x00041ddc) level_7_signal

0x9e8c,	// (0x00041d6b) level_1_battery

0x9e9e,	// (0x00041d7d) level_2_battery

0x9eb1,	// (0x00041d90) level_3_battery

0x9ec4,	// (0x00041da3) level_4_battery

0x9ed7,	// (0x00041db6) level_5_battery

0x9eea,	// (0x00041dc9) level_6_battery

0x9efd,	// (0x00041ddc) level_7_battery

0xbe5d,	// (0x00043d3c) list_menu_pane_ParamLimits

0xbe5d,	// (0x00043d3c) list_menu_pane

0xbe73,	// (0x00043d52) scroll_pane_cp25_ParamLimits

0xbe73,	// (0x00043d52) scroll_pane_cp25

0xbe8c,	// (0x00043d6b) list_double2_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double2_graphic_pane_cp2

0xbe8c,	// (0x00043d6b) list_double2_large_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double2_large_graphic_pane_cp2

0xbe8c,	// (0x00043d6b) list_double2_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double2_pane_cp2

0xbe8c,	// (0x00043d6b) list_double_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double_graphic_pane_cp2

0xbe8c,	// (0x00043d6b) list_double_large_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double_large_graphic_pane_cp2

0xbe8c,	// (0x00043d6b) list_double_number_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double_number_pane_cp2

0xbe8c,	// (0x00043d6b) list_double_pane_cp2_ParamLimits

0xbe8c,	// (0x00043d6b) list_double_pane_cp2

0x9f23,	// (0x00041e02) list_single_2graphic_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_2graphic_pane_cp2

0x9f23,	// (0x00041e02) list_single_graphic_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_graphic_heading_pane_cp2

0x9f23,	// (0x00041e02) list_single_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_graphic_pane_cp2

0x9f23,	// (0x00041e02) list_single_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_heading_pane_cp2

0xbe9c,	// (0x00043d7b) list_single_large_graphic_pane_cp2_ParamLimits

0xbe9c,	// (0x00043d7b) list_single_large_graphic_pane_cp2

0x9f23,	// (0x00041e02) list_single_number_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_number_heading_pane_cp2

0x9f23,	// (0x00041e02) list_single_number_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_number_pane_cp2

0x9f23,	// (0x00041e02) list_single_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_pane_cp2

0xbeb5,	// (0x00043d94) bg_popup_sub_pane_cp22

0xf0d4,	// (0x00046fb3) popup_side_volume_key_window_g1

0xf0fe,	// (0x00046fdd) popup_side_volume_key_window_t1

0xf11c,	// (0x00046ffb) volume_small_pane_cp1

0x8352,	// (0x00040231) bg_popup_sub_pane_cp24_ParamLimits

0x8352,	// (0x00040231) bg_popup_sub_pane_cp24

0xbecb,	// (0x00043daa) fep_china_uni_candidate_pane_ParamLimits

0xbecb,	// (0x00043daa) fep_china_uni_candidate_pane

0xbedf,	// (0x00043dbe) fep_china_uni_entry_pane

0xbeef,	// (0x00043dce) popup_fep_china_uni_window_g1

0xbf0b,	// (0x00043dea) fep_china_uni_entry_pane_g1

0xbf15,	// (0x00043df4) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00047601) fep_china_uni_entry_pane_g

0xbf1f,	// (0x00043dfe) fep_entry_item_pane

0xbf29,	// (0x00043e08) fep_candidate_item_pane

0xbf31,	// (0x00043e10) fep_china_uni_candidate_pane_g1

0xbf3b,	// (0x00043e1a) fep_china_uni_candidate_pane_g2

0xbf43,	// (0x00043e22) fep_china_uni_candidate_pane_g3

0xbf4b,	// (0x00043e2a) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00047606) fep_china_uni_candidate_pane_g

0x77fa,	// (0x0003f6d9) fep_entry_item_pane_g1

0xbf55,	// (0x00043e34) fep_entry_item_pane_t1_ParamLimits

0xbf55,	// (0x00043e34) fep_entry_item_pane_t1

0xbf6b,	// (0x00043e4a) fep_candidate_item_pane_t1_ParamLimits

0xbf6b,	// (0x00043e4a) fep_candidate_item_pane_t1

0xbf80,	// (0x00043e5f) fep_candidate_item_pane_t2_ParamLimits

0xbf80,	// (0x00043e5f) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0004760f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0004760f) fep_candidate_item_pane_t

0x821f,	// (0x000400fe) list_highlight_pane_cp31_ParamLimits

0x821f,	// (0x000400fe) list_highlight_pane_cp31

0xbf92,	// (0x00043e71) level_1_signal_lsc

0xbf9b,	// (0x00043e7a) level_2_signal_lsc

0xbfa4,	// (0x00043e83) level_3_signal_lsc

0xbfad,	// (0x00043e8c) level_4_signal_lsc

0xbfb6,	// (0x00043e95) level_5_signal_lsc

0xbfbf,	// (0x00043e9e) level_6_signal_lsc

0xbfc8,	// (0x00043ea7) level_7_signal_lsc

0xbfc8,	// (0x00043ea7) level_1_battery_lsc

0xbfd1,	// (0x00043eb0) level_2_battery_lsc

0xbfda,	// (0x00043eb9) level_3_battery_lsc

0xbfe3,	// (0x00043ec2) level_4_battery_lsc

0xbfec,	// (0x00043ecb) level_5_battery_lsc

0xbff5,	// (0x00043ed4) level_6_battery_lsc

0xbf92,	// (0x00043e71) level_7_battery_lsc

0xbffe,	// (0x00043edd) scroll_handle_focus_pane_g1

0xc007,	// (0x00043ee6) scroll_handle_focus_pane_g2

0xc010,	// (0x00043eef) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00047614) scroll_handle_focus_pane_g

0x9fb5,	// (0x00041e94) list_single_2graphic_pane_g1_ParamLimits

0x9fb5,	// (0x00041e94) list_single_2graphic_pane_g1

0x97e1,	// (0x000416c0) list_single_2graphic_pane_g2_ParamLimits

0x97e1,	// (0x000416c0) list_single_2graphic_pane_g2

0xd8c0,	// (0x0004579f) list_single_2graphic_pane_g3_ParamLimits

0xd8c0,	// (0x0004579f) list_single_2graphic_pane_g3

0x9fc1,	// (0x00041ea0) list_single_2graphic_pane_g4_ParamLimits

0x9fc1,	// (0x00041ea0) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004761b) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004761b) list_single_2graphic_pane_g

0x9fcd,	// (0x00041eac) list_single_2graphic_pane_t1_ParamLimits

0x9fcd,	// (0x00041eac) list_single_2graphic_pane_t1

0x9ffb,	// (0x00041eda) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9ffb,	// (0x00041eda) list_double2_graphic_large_graphic_pane_g1

0x99f8,	// (0x000418d7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99f8,	// (0x000418d7) list_double2_graphic_large_graphic_pane_g2

0x9a09,	// (0x000418e8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a09,	// (0x000418e8) list_double2_graphic_large_graphic_pane_g3

0xa00d,	// (0x00041eec) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa00d,	// (0x00041eec) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00047624) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00047624) list_double2_graphic_large_graphic_pane_g

0xa019,	// (0x00041ef8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa019,	// (0x00041ef8) list_double2_graphic_large_graphic_pane_t1

0xa02f,	// (0x00041f0e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa02f,	// (0x00041f0e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0004762d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0004762d) list_double2_graphic_large_graphic_pane_t

0xc0a2,	// (0x00043f81) popup_fast_swap_window_ParamLimits

0xc0a2,	// (0x00043f81) popup_fast_swap_window

0xc0c0,	// (0x00043f9f) popup_side_volume_key_window

0xc0de,	// (0x00043fbd) stacon_top_pane

0xc0e8,	// (0x00043fc7) status_pane_ParamLimits

0xc0e8,	// (0x00043fc7) status_pane

0xa0d8,	// (0x00041fb7) status_small_pane

0x7804,	// (0x0003f6e3) control_pane

0x7804,	// (0x0003f6e3) stacon_bottom_pane

0xb956,	// (0x00043835) scroll_pane_cp121

0xb94d,	// (0x0004382c) set_content_pane

0xa041,	// (0x00041f20) bg_active_tab_pane_g1_cp1

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp1

0xa04a,	// (0x00041f29) bg_active_tab_pane_g3_cp1

0xa041,	// (0x00041f20) bg_passive_tab_pane_g1_cp1

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp1

0xa04a,	// (0x00041f29) bg_passive_tab_pane_g3_cp1

0xa053,	// (0x00041f32) bg_active_tab_pane_g1_cp2

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp2

0xa05c,	// (0x00041f3b) bg_active_tab_pane_g3_cp2

0xa053,	// (0x00041f32) bg_passive_tab_pane_g1_cp2

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp2

0xa05c,	// (0x00041f3b) bg_passive_tab_pane_g3_cp2

0xa065,	// (0x00041f44) bg_active_tab_pane_g1_cp3

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp3

0xa06e,	// (0x00041f4d) bg_active_tab_pane_g3_cp3

0xa065,	// (0x00041f44) bg_passive_tab_pane_g1_cp3

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp3

0xa06e,	// (0x00041f4d) bg_passive_tab_pane_g3_cp3

0xa077,	// (0x00041f56) bg_active_tab_pane_g1_cp4

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp4

0xa080,	// (0x00041f5f) bg_active_tab_pane_g3_cp4

0xa077,	// (0x00041f56) bg_passive_tab_pane_g1_cp4

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp4

0xa080,	// (0x00041f5f) bg_passive_tab_pane_g3_cp4

0xc060,	// (0x00043f3f) bg_active_tab_pane_g1_cp5

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp5

0xc069,	// (0x00043f48) bg_active_tab_pane_g3_cp5

0xc060,	// (0x00043f3f) bg_passive_tab_pane_g1_cp5

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp5

0xc069,	// (0x00043f48) bg_passive_tab_pane_g3_cp5

0x3f37,	// (0x0003be16) list_set_graphic_pane_ParamLimits

0x3f37,	// (0x0003be16) list_set_graphic_pane

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp4

0xa089,	// (0x00041f68) list_set_graphic_pane_g1_ParamLimits

0xa089,	// (0x00041f68) list_set_graphic_pane_g1

0xa095,	// (0x00041f74) list_set_graphic_pane_g2_ParamLimits

0xa095,	// (0x00041f74) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00047632) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00047632) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x000479b7) volume_small_pane_cp_g

0xa0b9,	// (0x00041f98) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa0b9,	// (0x00041f98) list_double2_large_graphic_pane_g1_cp2

0xa0c7,	// (0x00041fa6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa0c7,	// (0x00041fa6) list_double2_large_graphic_pane_g2_cp2

0xc072,	// (0x00043f51) list_double2_large_graphic_pane_g3_cp2

0xc07a,	// (0x00043f59) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc07a,	// (0x00043f59) list_double2_large_graphic_pane_t1_cp2

0xc090,	// (0x00043f6f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc090,	// (0x00043f6f) list_double2_large_graphic_pane_t2_cp2

0xc52e,	// (0x0004440d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc52e,	// (0x0004440d) list_double_large_graphic_pane_g1_cp2

0xc541,	// (0x00044420) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc541,	// (0x00044420) list_double_large_graphic_pane_g2_cp2

0xc1c9,	// (0x000440a8) list_double_large_graphic_pane_g3_cp2

0x34bc,	// (0x0003b39b) list_double_large_graphic_pane_g4_cp

0x34c4,	// (0x0003b3a3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x34c4,	// (0x0003b3a3) list_double_large_graphic_pane_t1_cp2

0x34db,	// (0x0003b3ba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x34db,	// (0x0003b3ba) list_double_large_graphic_pane_t2_cp2

0xa0e3,	// (0x00041fc2) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa0e3,	// (0x00041fc2) list_double2_graphic_pane_g1_cp2

0xa0f1,	// (0x00041fd0) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa0f1,	// (0x00041fd0) list_double2_graphic_pane_g2_cp2

0xa102,	// (0x00041fe1) list_double2_graphic_pane_g3_cp2

0xc0f6,	// (0x00043fd5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc0f6,	// (0x00043fd5) list_double2_graphic_pane_t1_cp2

0xc10c,	// (0x00043feb) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc10c,	// (0x00043feb) list_double2_graphic_pane_t2_cp2

0xc11e,	// (0x00043ffd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc11e,	// (0x00043ffd) list_single_number_heading_pane_g1_cp2

0xc12a,	// (0x00044009) list_single_number_heading_pane_g2_cp2

0xc132,	// (0x00044011) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc132,	// (0x00044011) list_single_number_heading_pane_t1_cp2

0xa10c,	// (0x00041feb) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa10c,	// (0x00041feb) list_single_number_heading_pane_t2_cp2

0xc148,	// (0x00044027) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc148,	// (0x00044027) list_single_number_heading_pane_t3_cp2

0xc11e,	// (0x00043ffd) list_single_heading_pane_g1_cp2_ParamLimits

0xc11e,	// (0x00043ffd) list_single_heading_pane_g1_cp2

0xc12a,	// (0x00044009) list_single_heading_pane_g2_cp2

0xc132,	// (0x00044011) list_single_heading_pane_t1_cp2_ParamLimits

0xc132,	// (0x00044011) list_single_heading_pane_t1_cp2

0xc51a,	// (0x000443f9) list_single_heading_pane_t2_cp2_ParamLimits

0xc51a,	// (0x000443f9) list_single_heading_pane_t2_cp2

0x31da,	// (0x0003b0b9) list_double_graphic_pane_g1_cp2_ParamLimits

0x31da,	// (0x0003b0b9) list_double_graphic_pane_g1_cp2

0x31e6,	// (0x0003b0c5) list_double_graphic_pane_g2_cp2_ParamLimits

0x31e6,	// (0x0003b0c5) list_double_graphic_pane_g2_cp2

0x31f5,	// (0x0003b0d4) list_double_graphic_pane_g3_cp2

0x31fd,	// (0x0003b0dc) list_double_graphic_pane_t1_cp2_ParamLimits

0x31fd,	// (0x0003b0dc) list_double_graphic_pane_t1_cp2

0x3213,	// (0x0003b0f2) list_double_graphic_pane_t2_cp2_ParamLimits

0x3213,	// (0x0003b0f2) list_double_graphic_pane_t2_cp2

0xc1bd,	// (0x0004409c) list_double_number_pane_g1_cp2_ParamLimits

0xc1bd,	// (0x0004409c) list_double_number_pane_g1_cp2

0xc1c9,	// (0x000440a8) list_double_number_pane_g2_cp2

0xc4b4,	// (0x00044393) list_double_number_pane_t1_cp2_ParamLimits

0xc4b4,	// (0x00044393) list_double_number_pane_t1_cp2

0x31b2,	// (0x0003b091) list_double_number_pane_t2_cp2_ParamLimits

0x31b2,	// (0x0003b091) list_double_number_pane_t2_cp2

0x31c8,	// (0x0003b0a7) list_double_number_pane_t3_cp2_ParamLimits

0x31c8,	// (0x0003b0a7) list_double_number_pane_t3_cp2

0xc402,	// (0x000442e1) list_single_graphic_pane_g1_cp2_ParamLimits

0xc402,	// (0x000442e1) list_single_graphic_pane_g1_cp2

0xf278,	// (0x00047157) list_single_graphic_pane_g2_cp2_ParamLimits

0xf278,	// (0x00047157) list_single_graphic_pane_g2_cp2

0xf284,	// (0x00047163) list_single_graphic_pane_g3_cp2

0x305d,	// (0x0003af3c) list_single_graphic_pane_t1_cp2_ParamLimits

0x305d,	// (0x0003af3c) list_single_graphic_pane_t1_cp2

0xf278,	// (0x00047157) list_single_number_pane_g1_cp2_ParamLimits

0xf278,	// (0x00047157) list_single_number_pane_g1_cp2

0xf284,	// (0x00047163) list_single_number_pane_g2_cp2

0x305d,	// (0x0003af3c) list_single_number_pane_t1_cp2_ParamLimits

0x305d,	// (0x0003af3c) list_single_number_pane_t1_cp2

0xc3ee,	// (0x000442cd) list_single_number_pane_t2_cp2_ParamLimits

0xc3ee,	// (0x000442cd) list_single_number_pane_t2_cp2

0xa0c7,	// (0x00041fa6) list_double2_pane_g1_cp2_ParamLimits

0xa0c7,	// (0x00041fa6) list_double2_pane_g1_cp2

0xc072,	// (0x00043f51) list_double2_pane_g2_cp2

0xc195,	// (0x00044074) list_double2_pane_t1_cp2_ParamLimits

0xc195,	// (0x00044074) list_double2_pane_t1_cp2

0xc1ab,	// (0x0004408a) list_double2_pane_t2_cp2_ParamLimits

0xc1ab,	// (0x0004408a) list_double2_pane_t2_cp2

0xc1bd,	// (0x0004409c) list_double_pane_g1_cp2_ParamLimits

0xc1bd,	// (0x0004409c) list_double_pane_g1_cp2

0xc1c9,	// (0x000440a8) list_double_pane_g2_cp2

0xc1d1,	// (0x000440b0) list_double_pane_t1_cp2_ParamLimits

0xc1d1,	// (0x000440b0) list_double_pane_t1_cp2

0xc1e7,	// (0x000440c6) list_double_pane_t2_cp2_ParamLimits

0xc1e7,	// (0x000440c6) list_double_pane_t2_cp2

0xf268,	// (0x00047147) list_single_pane_cp2_g3

0xf278,	// (0x00047157) list_single_pane_g1_cp2_ParamLimits

0xf278,	// (0x00047157) list_single_pane_g1_cp2

0xf284,	// (0x00047163) list_single_pane_g2_cp2

0xf28c,	// (0x0004716b) list_single_pane_t1_cp2_ParamLimits

0xf28c,	// (0x0004716b) list_single_pane_t1_cp2

0xa13a,	// (0x00042019) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa13a,	// (0x00042019) list_single_large_graphic_pane_g1_cp2

0xf2a4,	// (0x00047183) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2a4,	// (0x00047183) list_single_large_graphic_pane_g2_cp2

0xf2b0,	// (0x0004718f) list_single_large_graphic_pane_g3_cp2

0xf2b8,	// (0x00047197) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf2b8,	// (0x00047197) list_single_large_graphic_pane_g4_cp1

0xf2d2,	// (0x000471b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf2d2,	// (0x000471b1) list_single_large_graphic_pane_t1_cp2

0x3027,	// (0x0003af06) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3027,	// (0x0003af06) list_single_graphic_heading_pane_g1_cp2

0xc3c9,	// (0x000442a8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc3c9,	// (0x000442a8) list_single_graphic_heading_pane_g4_cp2

0xf284,	// (0x00047163) list_single_graphic_heading_pane_g5_cp2

0x3033,	// (0x0003af12) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3033,	// (0x0003af12) list_single_graphic_heading_pane_t1_cp2

0xc3da,	// (0x000442b9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc3da,	// (0x000442b9) list_single_graphic_heading_pane_t2_cp2

0x2fe8,	// (0x0003aec7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2fe8,	// (0x0003aec7) list_single_2graphic_pane_g1_cp2

0xc3c9,	// (0x000442a8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc3c9,	// (0x000442a8) list_single_2graphic_pane_g2_cp2

0xf284,	// (0x00047163) list_single_2graphic_pane_g3_cp2

0x3005,	// (0x0003aee4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3005,	// (0x0003aee4) list_single_2graphic_pane_g4_cp2

0x3011,	// (0x0003aef0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3011,	// (0x0003aef0) list_single_2graphic_pane_t1_cp2

0x77fa,	// (0x0003f6d9) list_highlight_pane_g10_cp1

0x2bc0,	// (0x0003aa9f) list_highlight_pane_g1_cp1

0x2bc8,	// (0x0003aaa7) list_highlight_pane_g2_cp1

0x2bd0,	// (0x0003aaaf) list_highlight_pane_g3_cp1

0x2bd8,	// (0x0003aab7) list_highlight_pane_g4_cp1

0x2be0,	// (0x0003aabf) list_highlight_pane_g5_cp1

0x2be8,	// (0x0003aac7) list_highlight_pane_g6_cp1

0x2bf0,	// (0x0003aacf) list_highlight_pane_g7_cp1

0x2bf8,	// (0x0003aad7) list_highlight_pane_g8_cp1

0x2c00,	// (0x0003aadf) list_highlight_pane_g9_cp1

0xc38f,	// (0x0004426e) form_field_slider_pane_t3

0xc39d,	// (0x0004427c) form_field_slider_pane_t4

0x2afc,	// (0x0003a9db) slider_form_pane_ParamLimits

0x2afc,	// (0x0003a9db) slider_form_pane

0x7804,	// (0x0003f6e3) control_abbreviations

0x7804,	// (0x0003f6e3) control_conventions

0x7804,	// (0x0003f6e3) control_definitions

0x7804,	// (0x0003f6e3) format_table_attribute

0x32e8,	// (0x0003b1c7) bg_popup_preview_window_pane_g9

0x7804,	// (0x0003f6e3) format_table_data2

0x7804,	// (0x0003f6e3) format_table_data3

0x7804,	// (0x0003f6e3) format_table_data_example

0x0008,

0x7804,	// (0x0003f6e3) intro_purpose

0xf8ea,	// (0x000477c9) bg_popup_preview_window_pane_g

0x7804,	// (0x0003f6e3) texts_category

0x7804,	// (0x0003f6e3) texts_graphics

0xf2e8,	// (0x000471c7) text_digital

0xf2f7,	// (0x000471d6) text_primary

0xf306,	// (0x000471e5) text_primary_small

0xf315,	// (0x000471f4) text_secondary

0xf324,	// (0x00047203) text_title

0x3a7c,	// (0x0003b95b) bg_passive_tab_pane_g1_cp3_srt

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp3_srt

0x3a85,	// (0x0003b964) bg_passive_tab_pane_g3_cp3_srt

0x8352,	// (0x00040231) bg_active_tab_pane_cp3_srt_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp3_srt

0x3a8e,	// (0x0003b96d) tabs_4_active_pane_srt_g1

0xc826,	// (0x00044705) tabs_4_active_pane_srt_t1_ParamLimits

0xc826,	// (0x00044705) tabs_4_active_pane_srt_t1

0x3a7c,	// (0x0003b95b) bg_active_tab_pane_g1_cp3_copy1

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp3_copy1

0x3a85,	// (0x0003b964) bg_active_tab_pane_g3_cp3_copy1

0x821f,	// (0x000400fe) tabs_2_long_active_pane_srt_ParamLimits

0x821f,	// (0x000400fe) tabs_2_long_active_pane_srt

0x821f,	// (0x000400fe) tabs_2_long_passive_pane_srt_ParamLimits

0x821f,	// (0x000400fe) tabs_2_long_passive_pane_srt

0x0144,	// (0x00038023) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0144,	// (0x00038023) bg_passive_tab_pane_cp4_srt

0x3724,	// (0x0003b603) bg_passive_tab_pane_g1_cp4_srt

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp4_srt

0x372d,	// (0x0003b60c) bg_passive_tab_pane_g3_cp4_srt

0x821f,	// (0x000400fe) bg_active_tab_pane_cp4_srt_ParamLimits

0x821f,	// (0x000400fe) bg_active_tab_pane_cp4_srt

0xc604,	// (0x000444e3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc604,	// (0x000444e3) tabs_2_long_active_pane_srt_t1

0x3724,	// (0x0003b603) bg_active_tab_pane_g1_cp4_srt

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp4_srt

0x372d,	// (0x0003b60c) bg_active_tab_pane_g3_cp4_srt

0x8352,	// (0x00040231) tabs_3_long_active_pane_srt_ParamLimits

0x8352,	// (0x00040231) tabs_3_long_active_pane_srt

0x8352,	// (0x00040231) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8352,	// (0x00040231) tabs_3_long_passive_pane_cp_srt

0x8352,	// (0x00040231) tabs_3_long_passive_pane_srt_ParamLimits

0x8352,	// (0x00040231) tabs_3_long_passive_pane_srt

0x0144,	// (0x00038023) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0144,	// (0x00038023) bg_passive_tab_pane_cp5_srt

0xc060,	// (0x00043f3f) bg_passive_tab_pane_g1_cp5_srt

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp5_srt

0xc069,	// (0x00043f48) bg_passive_tab_pane_g3_cp5_srt

0x821f,	// (0x000400fe) bg_active_tab_pane_cp5_srt_ParamLimits

0x821f,	// (0x000400fe) bg_active_tab_pane_cp5_srt

0xc5ee,	// (0x000444cd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5ee,	// (0x000444cd) tabs_3_long_active_pane_srt_t1

0xc060,	// (0x00043f3f) bg_active_tab_pane_g1_cp5_srt

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp5_srt

0xc069,	// (0x00043f48) bg_active_tab_pane_g3_cp5_srt

0x3704,	// (0x0003b5e3) navi_text_pane_srt_t1

0x36fc,	// (0x0003b5db) navi_icon_pane_srt_g1

0xf4d7,	// (0x000473b6) midp_editing_number_pane_srt

0xf333,	// (0x00047212) midp_ticker_pane_srt

0xf4df,	// (0x000473be) midp_ticker_pane_srt_g1

0xf4e7,	// (0x000473c6) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00047651) midp_ticker_pane_srt_g

0xf4ef,	// (0x000473ce) midp_ticker_pane_srt_t1

0x36ed,	// (0x0003b5cc) midp_editing_number_pane_t1_copy1

0x0144,	// (0x00038023) listscroll_midp_pane

0x0144,	// (0x00038023) midp_form_pane

0xf33b,	// (0x0004721a) midp_info_popup_window_ParamLimits

0xf33b,	// (0x0004721a) midp_info_popup_window

0xba1f,	// (0x000438fe) bg_popup_sub_pane_cp50_ParamLimits

0xba1f,	// (0x000438fe) bg_popup_sub_pane_cp50

0x27f6,	// (0x0003a6d5) listscroll_midp_info_pane_ParamLimits

0x27f6,	// (0x0003a6d5) listscroll_midp_info_pane

0x27de,	// (0x0003a6bd) listscroll_form_midp_pane_ParamLimits

0x27de,	// (0x0003a6bd) listscroll_form_midp_pane

0x27ea,	// (0x0003a6c9) scroll_bar_cp050

0xc383,	// (0x00044262) list_midp_pane

0x4511,	// (0x0003c3f0) signal_pane_g2_cp

0x26f8,	// (0x0003a5d7) listscroll_midp_info_pane_t1_ParamLimits

0x26f8,	// (0x0003a5d7) listscroll_midp_info_pane_t1

0x2710,	// (0x0003a5ef) listscroll_midp_info_pane_t2_ParamLimits

0x2710,	// (0x0003a5ef) listscroll_midp_info_pane_t2

0x274e,	// (0x0003a62d) listscroll_midp_info_pane_t3_ParamLimits

0x274e,	// (0x0003a62d) listscroll_midp_info_pane_t3

0x2788,	// (0x0003a667) listscroll_midp_info_pane_t4_ParamLimits

0x2788,	// (0x0003a667) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00047704) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00047704) listscroll_midp_info_pane_t

0xba9f,	// (0x0004397e) scroll_pane_cp21

0x2692,	// (0x0003a571) form_midp_field_choice_group_pane

0x269b,	// (0x0003a57a) form_midp_field_text_pane

0x26de,	// (0x0003a5bd) form_midp_field_time_pane

0x26e6,	// (0x0003a5c5) form_midp_gauge_slider_pane

0x26ef,	// (0x0003a5ce) form_midp_gauge_wait_pane

0x7804,	// (0x0003f6e3) form_midp_image_pane

0xaf2d,	// (0x00042e0c) list_single_midp_pane_ParamLimits

0xaf2d,	// (0x00042e0c) list_single_midp_pane

0xc35b,	// (0x0004423a) form_midp_field_text_pane_t1

0x2442,	// (0x0003a321) input_focus_pane_cp050

0x2681,	// (0x0003a560) list_midp_form_text_pane

0x2625,	// (0x0003a504) form_midp_field_choice_group_pane_t1

0x2633,	// (0x0003a512) input_focus_pane_cp051

0x2647,	// (0x0003a526) list_midp_choice_pane

0x7804,	// (0x0003f6e3) status_idle_pane

0x2609,	// (0x0003a4e8) form_midp_field_time_pane_t1

0x77fa,	// (0x0003f6d9) wait_anim_pane_g2_copy1

0x2617,	// (0x0003a4f6) form_midp_field_time_pane_t2

0x0001,

0xf396,	// (0x00047275) aid_navinavi_width_2_pane

0xf820,	// (0x000476ff) form_midp_field_time_pane_t

0x7804,	// (0x0003f6e3) input_focus_pane_cp052

0x7804,	// (0x0003f6e3) bg_input_focus_pane_cp040

0x25c9,	// (0x0003a4a8) form_midp_gauge_slider_pane_t1

0x25d7,	// (0x0003a4b6) form_midp_gauge_slider_pane_t2

0xc33f,	// (0x0004421e) form_midp_gauge_slider_pane_t3

0xc34d,	// (0x0004422c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x000476f6) form_midp_gauge_slider_pane_t

0x2601,	// (0x0003a4e0) form_midp_slider_pane

0x821f,	// (0x000400fe) bg_input_focus_pane_cp041_ParamLimits

0x821f,	// (0x000400fe) bg_input_focus_pane_cp041

0x2596,	// (0x0003a475) form_midp_gauge_wait_pane_t1_ParamLimits

0x2596,	// (0x0003a475) form_midp_gauge_wait_pane_t1

0x25a8,	// (0x0003a487) form_midp_gauge_wait_pane_t2_ParamLimits

0x25a8,	// (0x0003a487) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x000476f1) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x000476f1) form_midp_gauge_wait_pane_t

0x25ba,	// (0x0003a499) form_midp_wait_pane_ParamLimits

0x25ba,	// (0x0003a499) form_midp_wait_pane

0x255e,	// (0x0003a43d) form_midp_image_pane_g1

0x2567,	// (0x0003a446) form_midp_image_pane_t1

0x2576,	// (0x0003a455) form_midp_image_pane_t2

0x2585,	// (0x0003a464) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x000476ea) form_midp_image_pane_t

0x2555,	// (0x0003a434) list_single_midp_pane_g1

0xdb2c,	// (0x00045a0b) list_single_midp_pane_t1

0xc328,	// (0x00044207) list_midp_form_item_pane_ParamLimits

0xc328,	// (0x00044207) list_midp_form_item_pane

0xf350,	// (0x0004722f) list_midp_form_item_pane_t1

0xf35f,	// (0x0004723e) midp_ticker_pane_g1

0xf36b,	// (0x0004724a) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00047637) midp_ticker_pane_g

0xa1df,	// (0x000420be) midp_ticker_pane_t1

0xc793,	// (0x00044672) midp_editing_number_pane_t1

0x393e,	// (0x0003b81d) midp_editing_number_pane

0x394d,	// (0x0003b82c) midp_ticker_pane

0x36dd,	// (0x0003b5bc) ai_message_heading_pane

0x7804,	// (0x0003f6e3) bg_popup_window_pane_cp14

0x36e5,	// (0x0003b5c4) listscroll_ai_message_pane

0x3663,	// (0x0003b542) ai_message_heading_pane_g1_ParamLimits

0x3663,	// (0x0003b542) ai_message_heading_pane_g1

0x366f,	// (0x0003b54e) ai_message_heading_pane_g2_ParamLimits

0x366f,	// (0x0003b54e) ai_message_heading_pane_g2

0x367d,	// (0x0003b55c) ai_message_heading_pane_g3_ParamLimits

0x367d,	// (0x0003b55c) ai_message_heading_pane_g3

0x3689,	// (0x0003b568) ai_message_heading_pane_g4_ParamLimits

0x3689,	// (0x0003b568) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0004782b) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0004782b) ai_message_heading_pane_g

0x3695,	// (0x0003b574) ai_message_heading_pane_t1_ParamLimits

0x3695,	// (0x0003b574) ai_message_heading_pane_t1

0x36af,	// (0x0003b58e) ai_message_heading_pane_t2_ParamLimits

0x36af,	// (0x0003b58e) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00047834) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00047834) ai_message_heading_pane_t

0x36c3,	// (0x0003b5a2) bg_popup_heading_pane_cp1_ParamLimits

0x36c3,	// (0x0003b5a2) bg_popup_heading_pane_cp1

0x3651,	// (0x0003b530) list_ai_message_pane_ParamLimits

0x3651,	// (0x0003b530) list_ai_message_pane

0xba9f,	// (0x0004397e) scroll_pane_cp10

0x35ed,	// (0x0003b4cc) list_ai_message_pane_g1

0x35f5,	// (0x0003b4d4) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00047808) list_ai_message_pane_g

0x35fd,	// (0x0003b4dc) list_ai_message_pane_t1_ParamLimits

0x35fd,	// (0x0003b4dc) list_ai_message_pane_t1

0x3612,	// (0x0003b4f1) list_ai_message_pane_t2_ParamLimits

0x3612,	// (0x0003b4f1) list_ai_message_pane_t2

0x3627,	// (0x0003b506) list_ai_message_pane_t3_ParamLimits

0x3627,	// (0x0003b506) list_ai_message_pane_t3

0x363c,	// (0x0003b51b) list_ai_message_pane_t4_ParamLimits

0x363c,	// (0x0003b51b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0004780d) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0004780d) list_ai_message_pane_t

0xc5d4,	// (0x000444b3) cell_ai_soft_ind_pane_ParamLimits

0xc5d4,	// (0x000444b3) cell_ai_soft_ind_pane

0xf377,	// (0x00047256) cell_ai_soft_ind_pane_g1_ParamLimits

0xf377,	// (0x00047256) cell_ai_soft_ind_pane_g1

0x7804,	// (0x0003f6e3) grid_highlight_cp1

0xf384,	// (0x00047263) text_secondary_cp56_ParamLimits

0xf384,	// (0x00047263) text_secondary_cp56

0x35ab,	// (0x0003b48a) example_general_pane_ParamLimits

0x35ab,	// (0x0003b48a) example_general_pane

0x35b7,	// (0x0003b496) example_parent_pane_g1_ParamLimits

0x35b7,	// (0x0003b496) example_parent_pane_g1

0x35c3,	// (0x0003b4a2) example_parent_pane_t1_ParamLimits

0x35c3,	// (0x0003b4a2) example_parent_pane_t1

0xa86f,	// (0x0004274e) popup_preview_text_window_ParamLimits

0xa86f,	// (0x0004274e) popup_preview_text_window

0xf270,	// (0x0004714f) list_single_pane_cp2_g4

0x8408,	// (0x000402e7) bg_popup_preview_window_pane_ParamLimits

0x8408,	// (0x000402e7) bg_popup_preview_window_pane

0x32f2,	// (0x0003b1d1) popup_preview_text_window_t1_ParamLimits

0x32f2,	// (0x0003b1d1) popup_preview_text_window_t1

0x3310,	// (0x0003b1ef) popup_preview_text_window_t2_ParamLimits

0x3310,	// (0x0003b1ef) popup_preview_text_window_t2

0x3359,	// (0x0003b238) popup_preview_text_window_t3_ParamLimits

0x3359,	// (0x0003b238) popup_preview_text_window_t3

0x339e,	// (0x0003b27d) popup_preview_text_window_t4_ParamLimits

0x339e,	// (0x0003b27d) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000477dc) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000477dc) popup_preview_text_window_t

0x341c,	// (0x0003b2fb) scroll_pane_cp11

0x23ce,	// (0x0003a2ad) bg_popup_preview_window_pane_g1

0x32a6,	// (0x0003b185) bg_popup_preview_window_pane_g2

0x32b0,	// (0x0003b18f) bg_popup_preview_window_pane_g3

0x32ba,	// (0x0003b199) bg_popup_preview_window_pane_g4

0x32c4,	// (0x0003b1a3) bg_popup_preview_window_pane_g5

0x32ce,	// (0x0003b1ad) bg_popup_preview_window_pane_g6

0x32d6,	// (0x0003b1b5) bg_popup_preview_window_pane_g7

0x32de,	// (0x0003b1bd) bg_popup_preview_window_pane_g8

0xebca,	// (0x00046aa9) aid_popup_width_pane

0xa7df,	// (0x000426be) popup_midp_note_alarm_window_ParamLimits

0xa7df,	// (0x000426be) popup_midp_note_alarm_window

0xb967,	// (0x00043846) data_form_pane_ParamLimits

0x9c44,	// (0x00041b23) form_field_data_pane_g1

0x9c4e,	// (0x00041b2d) form_field_data_pane_t1_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_ParamLimits

0xd99f,	// (0x0004587e) data_form_wide_pane_ParamLimits

0xd9b0,	// (0x0004588f) form_field_data_wide_pane_g1

0xd9bc,	// (0x0004589b) form_field_data_wide_pane_t1_ParamLimits

0x85bd,	// (0x0004049c) input_focus_pane_cp6_ParamLimits

0x9d7c,	// (0x00041c5b) input_popup_find_pane_g1_ParamLimits

0x9d7c,	// (0x00041c5b) input_popup_find_pane_g1

0xef1e,	// (0x00046dfd) aid_navi_side_left_pane

0xef33,	// (0x00046e12) aid_navi_side_right_pane

0x2cbb,	// (0x0003ab9a) bg_popup_window_pane_cp30_ParamLimits

0x2cbb,	// (0x0003ab9a) bg_popup_window_pane_cp30

0x2d35,	// (0x0003ac14) popup_midp_note_alarm_window_g1_ParamLimits

0x2d35,	// (0x0003ac14) popup_midp_note_alarm_window_g1

0x2d65,	// (0x0003ac44) popup_midp_note_alarm_window_t1_ParamLimits

0x2d65,	// (0x0003ac44) popup_midp_note_alarm_window_t1

0x2e06,	// (0x0003ace5) popup_midp_note_alarm_window_t2_ParamLimits

0x2e06,	// (0x0003ace5) popup_midp_note_alarm_window_t2

0x2eb4,	// (0x0003ad93) popup_midp_note_alarm_window_t3_ParamLimits

0x2eb4,	// (0x0003ad93) popup_midp_note_alarm_window_t3

0x2ee6,	// (0x0003adc5) popup_midp_note_alarm_window_t4_ParamLimits

0x2ee6,	// (0x0003adc5) popup_midp_note_alarm_window_t4

0x2f0c,	// (0x0003adeb) popup_midp_note_alarm_window_t5_ParamLimits

0x2f0c,	// (0x0003adeb) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00047779) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00047779) popup_midp_note_alarm_window_t

0x2fb8,	// (0x0003ae97) wait_bar_pane_cp1_ParamLimits

0x2fb8,	// (0x0003ae97) wait_bar_pane_cp1

0x7804,	// (0x0003f6e3) wait_anim_pane_copy1

0x7804,	// (0x0003f6e3) wait_border_pane_copy1

0x29a0,	// (0x0003a87f) wait_border_pane_g1_copy1

0xd9d6,	// (0x000458b5) form_field_popup_pane_g1

0x9c68,	// (0x00041b47) form_field_popup_pane_t1_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_cp7_ParamLimits

0xb9a1,	// (0x00043880) list_form_pane_ParamLimits

0xd9de,	// (0x000458bd) form_field_popup_wide_pane_g1

0xd9e6,	// (0x000458c5) form_field_popup_wide_pane_t1_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_cp8_ParamLimits

0xb9ad,	// (0x0004388c) list_form_wide_pane_ParamLimits

0x3b09,	// (0x0003b9e8) aid_size_cell_graphic_pane

0x9ce7,	// (0x00041bc6) data_form_pane_t1_ParamLimits

0xb0c6,	// (0x00042fa5) data_form_wide_pane_t1_ParamLimits

0xac73,	// (0x00042b52) bg_status_flat_pane

0x9406,	// (0x000412e5) title_pane_t1_ParamLimits

0x81e7,	// (0x000400c6) title_pane_t2_ParamLimits

0x820d,	// (0x000400ec) title_pane_t3_ParamLimits

0xf557,	// (0x00047436) title_pane_t_ParamLimits

0x9e8c,	// (0x00041d6b) level_1_signal_ParamLimits

0x9e9e,	// (0x00041d7d) level_2_signal_ParamLimits

0x9eb1,	// (0x00041d90) level_3_signal_ParamLimits

0x9ec4,	// (0x00041da3) level_4_signal_ParamLimits

0x9ed7,	// (0x00041db6) level_5_signal_ParamLimits

0x9eea,	// (0x00041dc9) level_6_signal_ParamLimits

0x9efd,	// (0x00041ddc) level_7_signal_ParamLimits

0x9e8c,	// (0x00041d6b) level_1_battery_ParamLimits

0x9e9e,	// (0x00041d7d) level_2_battery_ParamLimits

0x9eb1,	// (0x00041d90) level_3_battery_ParamLimits

0x9ec4,	// (0x00041da3) level_4_battery_ParamLimits

0x9ed7,	// (0x00041db6) level_5_battery_ParamLimits

0x9eea,	// (0x00041dc9) level_6_battery_ParamLimits

0x9efd,	// (0x00041ddc) level_7_battery_ParamLimits

0x2bc0,	// (0x0003aa9f) bg_status_flat_pane_g1

0x2bc8,	// (0x0003aaa7) bg_status_flat_pane_g2

0x2bd0,	// (0x0003aaaf) bg_status_flat_pane_g3

0x2bd8,	// (0x0003aab7) bg_status_flat_pane_g4

0x2be0,	// (0x0003aabf) bg_status_flat_pane_g5

0x2be8,	// (0x0003aac7) bg_status_flat_pane_g6

0x2bf0,	// (0x0003aacf) bg_status_flat_pane_g7

0x949a,	// (0x00041379) tabs_3_active_pane_t1_ParamLimits

0x949a,	// (0x00041379) tabs_3_passive_pane_t1_ParamLimits

0x94b4,	// (0x00041393) tabs_4_active_pane_t1_ParamLimits

0x94b4,	// (0x00041393) tabs_4_1_passive_pane_t1_ParamLimits

0x9d92,	// (0x00041c71) tabs_2_active_pane_t1_ParamLimits

0x9d92,	// (0x00041c71) tabs_2_passive_pane_t1_ParamLimits

0x821f,	// (0x000400fe) bg_active_tab_pane_cp4_ParamLimits

0x9da4,	// (0x00041c83) tabs_2_long_active_pane_t1_ParamLimits

0x0144,	// (0x00038023) bg_passive_tab_pane_cp4_ParamLimits

0x0302,	// (0x000381e1) list_single_midp_graphic_pane_t1_ParamLimits

0x821f,	// (0x000400fe) bg_active_tab_pane_cp5_ParamLimits

0x9db7,	// (0x00041c96) tabs_3_long_active_pane_t1_ParamLimits

0x0144,	// (0x00038023) bg_passive_tab_pane_cp5_ParamLimits

0x0302,	// (0x000381e1) list_single_midp_graphic_pane_t1

0xac73,	// (0x00042b52) bg_status_flat_pane_ParamLimits

0x2046,	// (0x00039f25) indicator_pane_cp2_ParamLimits

0x2046,	// (0x00039f25) indicator_pane_cp2

0xae09,	// (0x00042ce8) navi_pane_srt_ParamLimits

0xae09,	// (0x00042ce8) navi_pane_srt

0x21ad,	// (0x0003a08c) popup_clock_digital_analogue_window_cp1

0x8263,	// (0x00040142) indicator_pane_t1

0xf333,	// (0x00047212) copy_highlight_pane

0xf333,	// (0x00047212) cursor_graphics_pane

0xf333,	// (0x00047212) graphic_within_text_pane

0xf333,	// (0x00047212) link_highlight_pane

0x33df,	// (0x0003b2be) popup_preview_text_window_t5_ParamLimits

0x33df,	// (0x0003b2be) popup_preview_text_window_t5

0xf3a0,	// (0x0004727f) cursor_digital_pane

0xf3a0,	// (0x0004727f) cursor_primary_pane

0xf3b1,	// (0x00047290) cursor_primary_small_pane

0xf3b9,	// (0x00047298) cursor_secondary_pane

0xf3c1,	// (0x000472a0) cursor_title_pane

0xf3a0,	// (0x0004727f) link_highlight_digital_pane

0xf3a8,	// (0x00047287) link_highlight_primary_pane

0xf3b1,	// (0x00047290) link_highlight_primary_small_pane

0xf3b9,	// (0x00047298) link_highlight_secondary_pane

0xf3c1,	// (0x000472a0) link_highlight_title_pane

0xf3a0,	// (0x0004727f) copy_highlight_digital_pane

0xf3a0,	// (0x0004727f) copy_highlight_primary_pane

0xf3b1,	// (0x00047290) copy_highlight_primary_small_pane

0xf3b9,	// (0x00047298) copy_highlight_secondary_pane

0xf3c1,	// (0x000472a0) copy_highlight_title_pane

0xf3b9,	// (0x00047298) graphic_text_digital_pane

0x2c5e,	// (0x0003ab3d) graphic_text_primary_pane

0x2c67,	// (0x0003ab46) graphic_text_primary_small_pane

0xf3b1,	// (0x00047290) graphic_text_secondary_pane

0xf3a0,	// (0x0004727f) graphic_text_title_pane

0xa1f1,	// (0x000420d0) cursor_primary_pane_g1

0x2c50,	// (0x0003ab2f) cursor_text_primary_t1

0xc3bf,	// (0x0004429e) cursor_primary_small_pane_g1

0x2c42,	// (0x0003ab21) cursor_text_primary_small_t1

0xc3b5,	// (0x00044294) cursor_primary_small_pane_g1_copy1

0x2c2a,	// (0x0003ab09) cursor_text_primary_small_t1_copy1

0x2c08,	// (0x0003aae7) cursor_text_title_t1

0xc3ab,	// (0x0004428a) cursor_title_pane_g1

0xa1f1,	// (0x000420d0) cursor_digital_pane_g1

0xf3c9,	// (0x000472a8) cursor_text_digital_t1

0xf3d7,	// (0x000472b6) link_highlight_primary_pane_g1

0x2bb1,	// (0x0003aa90) link_highlight_primary_pane_t1

0xf3d7,	// (0x000472b6) link_highlight_primary_small_pane_g1

0xf3df,	// (0x000472be) link_highlight_primary_small_pane_t1

0xf3ee,	// (0x000472cd) link_highlight_secondary_pane_g1

0xf3f6,	// (0x000472d5) link_highlight_secondary_pane_t1

0x2b25,	// (0x0003aa04) link_highlight_title_pane_g1

0x2b2d,	// (0x0003aa0c) link_highlight_title_pane_t1

0x2b0e,	// (0x0003a9ed) link_highlight_digital_pane_g1

0x2b16,	// (0x0003a9f5) link_highlight_digital_pane_t1

0x29d6,	// (0x0003a8b5) copy_highlight_primary_pane_g1

0x29ed,	// (0x0003a8cc) copy_highlight_primary_pane_t1

0x29d6,	// (0x0003a8b5) copy_highlight_primary_small_pane_g1

0x29de,	// (0x0003a8bd) copy_highlight_primary_small_pane_t1

0xf405,	// (0x000472e4) copy_highlight_secondary_pane_g1

0xf40d,	// (0x000472ec) copy_highlight_secondary_pane_t1

0x29bf,	// (0x0003a89e) copy_highlight_title_pane_g1

0x29c7,	// (0x0003a8a6) copy_highlight_title_pane_t1

0x29d6,	// (0x0003a8b5) copy_highlight_digital_pane_g1

0x3cd9,	// (0x0003bbb8) copy_highlight_digital_pane_t1

0x3c2d,	// (0x0003bb0c) graphic_text_primary_pane_g1

0x3cbd,	// (0x0003bb9c) graphic_text_primary_pane_t1

0x3ccb,	// (0x0003bbaa) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000478a8) graphic_text_primary_pane_t

0x3c99,	// (0x0003bb78) graphic_text_primary_small_pane_g1

0x3ca1,	// (0x0003bb80) graphic_text_primary_small_pane_t1

0x3caf,	// (0x0003bb8e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000478a3) graphic_text_primary_small_pane_t

0x3c75,	// (0x0003bb54) graphic_text_secondary_pane_g1

0x3c7d,	// (0x0003bb5c) graphic_text_secondary_pane_t1

0x3c8b,	// (0x0003bb6a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0004789e) graphic_text_secondary_pane_t

0x3c51,	// (0x0003bb30) graphic_text_title_pane_g1

0x3c59,	// (0x0003bb38) graphic_text_title_pane_t1

0x3c67,	// (0x0003bb46) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00047899) graphic_text_title_pane_t

0x3c2d,	// (0x0003bb0c) graphic_text_digital_pane_g1

0x3c35,	// (0x0003bb14) graphic_text_digital_pane_t1

0x3c43,	// (0x0003bb22) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00047894) graphic_text_digital_pane_t

0x821f,	// (0x000400fe) navi_icon_pane_srt_ParamLimits

0x821f,	// (0x000400fe) navi_icon_pane_srt

0x7804,	// (0x0003f6e3) navi_midp_pane_srt

0x7804,	// (0x0003f6e3) navi_navi_pane_srt

0x821f,	// (0x000400fe) navi_text_pane_srt_ParamLimits

0x821f,	// (0x000400fe) navi_text_pane_srt

0x3bf8,	// (0x0003bad7) navi_navi_icon_text_pane_srt

0x3c00,	// (0x0003badf) navi_navi_pane_srt_g1_ParamLimits

0x3c00,	// (0x0003badf) navi_navi_pane_srt_g1

0x3c12,	// (0x0003baf1) navi_navi_pane_srt_g2_ParamLimits

0x3c12,	// (0x0003baf1) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0004788f) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0004788f) navi_navi_pane_srt_g

0x3c24,	// (0x0003bb03) navi_navi_tabs_pane_srt

0x3bf8,	// (0x0003bad7) navi_navi_text_pane_srt

0x3bf8,	// (0x0003bad7) navi_navi_volume_pane_srt

0x3be9,	// (0x0003bac8) navi_navi_text_pane_srt_t1

0x0772,	// (0x00038651) navi_navi_volume_pane_srt_g1

0x077a,	// (0x00038659) volume_small_pane_srt_ParamLimits

0x077a,	// (0x00038659) volume_small_pane_srt

0xf41c,	// (0x000472fb) volume_small_pane_srt_g1_ParamLimits

0xf41c,	// (0x000472fb) volume_small_pane_srt_g1

0xf42c,	// (0x0004730b) volume_small_pane_srt_g2_ParamLimits

0xf42c,	// (0x0004730b) volume_small_pane_srt_g2

0xf43d,	// (0x0004731c) volume_small_pane_srt_g3_ParamLimits

0xf43d,	// (0x0004731c) volume_small_pane_srt_g3

0xf44e,	// (0x0004732d) volume_small_pane_srt_g4_ParamLimits

0xf44e,	// (0x0004732d) volume_small_pane_srt_g4

0xf45f,	// (0x0004733e) volume_small_pane_srt_g5_ParamLimits

0xf45f,	// (0x0004733e) volume_small_pane_srt_g5

0xf470,	// (0x0004734f) volume_small_pane_srt_g6_ParamLimits

0xf470,	// (0x0004734f) volume_small_pane_srt_g6

0xf481,	// (0x00047360) volume_small_pane_srt_g7_ParamLimits

0xf481,	// (0x00047360) volume_small_pane_srt_g7

0xf492,	// (0x00047371) volume_small_pane_srt_g8_ParamLimits

0xf492,	// (0x00047371) volume_small_pane_srt_g8

0xf4a3,	// (0x00047382) volume_small_pane_srt_g9_ParamLimits

0xf4a3,	// (0x00047382) volume_small_pane_srt_g9

0xf4b4,	// (0x00047393) volume_small_pane_srt_g10_ParamLimits

0xf4b4,	// (0x00047393) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0004763c) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0004763c) volume_small_pane_srt_g

0x84bd,	// (0x0004039c) query_popup_data_pane_cp2

0x3bcf,	// (0x0003baae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3bcf,	// (0x0003baae) navi_navi_icon_text_pane_srt_t1

0x2c5e,	// (0x0003ab3d) navi_tabs_2_long_pane_srt

0x2c5e,	// (0x0003ab3d) navi_tabs_2_pane_srt

0x2c5e,	// (0x0003ab3d) navi_tabs_3_long_pane_srt

0x2c5e,	// (0x0003ab3d) navi_tabs_3_pane_srt

0x2c5e,	// (0x0003ab3d) navi_tabs_4_pane_srt

0x0752,	// (0x00038631) tabs_2_active_pane_srt_ParamLimits

0x0752,	// (0x00038631) tabs_2_active_pane_srt

0x0762,	// (0x00038641) tabs_2_passive_pane_srt_ParamLimits

0x0762,	// (0x00038641) tabs_2_passive_pane_srt

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp1_srt

0x3b9b,	// (0x0003ba7a) bg_passive_tab_pane_g1_cp1_srt

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp1_srt

0x3ba4,	// (0x0003ba83) bg_passive_tab_pane_g3_cp1_srt

0x8352,	// (0x00040231) bg_active_tab_pane_cp1_srt_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp1_srt

0x3bad,	// (0x0003ba8c) tabs_2_active_pane_srt_g1

0xc8a7,	// (0x00044786) tabs_2_active_pane_srt_t1_ParamLimits

0xc8a7,	// (0x00044786) tabs_2_active_pane_srt_t1

0x3b9b,	// (0x0003ba7a) bg_active_tab_pane_g1_cp1_srt

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp1_srt

0x3ba4,	// (0x0003ba83) bg_active_tab_pane_g3_cp1_srt

0x071f,	// (0x000385fe) tabs_3_active_pane_srt_ParamLimits

0x071f,	// (0x000385fe) tabs_3_active_pane_srt

0x0730,	// (0x0003860f) tabs_3_passive_pane_cp_srt_ParamLimits

0x0730,	// (0x0003860f) tabs_3_passive_pane_cp_srt

0x0741,	// (0x00038620) tabs_3_passive_pane_srt_ParamLimits

0x0741,	// (0x00038620) tabs_3_passive_pane_srt

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2442,	// (0x0003a321) bg_passive_tab_pane_cp2_srt

0xf4c5,	// (0x000473a4) bg_passive_tab_pane_g1_cp2_srt

0xc019,	// (0x00043ef8) bg_passive_tab_pane_g2_cp2_srt

0xf4ce,	// (0x000473ad) bg_passive_tab_pane_g3_cp2_srt

0x8352,	// (0x00040231) bg_active_tab_pane_cp2_srt_ParamLimits

0x8352,	// (0x00040231) bg_active_tab_pane_cp2_srt

0x3b81,	// (0x0003ba60) tabs_3_active_pane_srt_g1

0xc891,	// (0x00044770) tabs_3_active_pane_srt_t1_ParamLimits

0xc891,	// (0x00044770) tabs_3_active_pane_srt_t1

0xf4c5,	// (0x000473a4) bg_active_tab_pane_g1_cp2_srt

0xc019,	// (0x00043ef8) bg_active_tab_pane_g2_cp2_srt

0xf4ce,	// (0x000473ad) bg_active_tab_pane_g3_cp2_srt

0x06d7,	// (0x000385b6) tabs_4_active_pane_srt_ParamLimits

0x06d7,	// (0x000385b6) tabs_4_active_pane_srt

0x06e9,	// (0x000385c8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x06e9,	// (0x000385c8) tabs_4_passive_pane_cp2_srt

0x00ca,	// (0x00037fa9) aid_size_cell_toolbar

0x3797,	// (0x0003b676) main_idle_act_pane_ParamLimits

0x1a56,	// (0x00039935) popup_large_graphic_colour_window_ParamLimits

0xab35,	// (0x00042a14) popup_toolbar_window_ParamLimits

0xab35,	// (0x00042a14) popup_toolbar_window

0xdb51,	// (0x00045a30) list_single_graphic_2heading_pane_ParamLimits

0xdb51,	// (0x00045a30) list_single_graphic_2heading_pane

0xbc77,	// (0x00043b56) aid_size_cell_apps_grid_lsc_pane

0xbc89,	// (0x00043b68) aid_size_cell_apps_grid_prt_pane

0x0144,	// (0x00038023) bg_wml_button_pane_cp1_ParamLimits

0x0144,	// (0x00038023) bg_wml_button_pane_cp1

0xc35b,	// (0x0004423a) form_midp_field_text_pane_t1_ParamLimits

0x2442,	// (0x0003a321) input_focus_pane_cp050_ParamLimits

0x2681,	// (0x0003a560) list_midp_form_text_pane_ParamLimits

0x2633,	// (0x0003a512) input_focus_pane_cp051_ParamLimits

0x2647,	// (0x0003a526) list_midp_choice_pane_ParamLimits

0xc312,	// (0x000441f1) list_single_2graphic_pane_cp3_ParamLimits

0xc312,	// (0x000441f1) list_single_2graphic_pane_cp3

0x4834,	// (0x0003c713) list_single_midp_graphic_pane_ParamLimits

0x4834,	// (0x0003c713) list_single_midp_graphic_pane

0xefdf,	// (0x00046ebe) list_single_graphic_2heading_pane_g1_ParamLimits

0xefdf,	// (0x00046ebe) list_single_graphic_2heading_pane_g1

0xefeb,	// (0x00046eca) list_single_graphic_2heading_pane_g4_ParamLimits

0xefeb,	// (0x00046eca) list_single_graphic_2heading_pane_g4

0xeff7,	// (0x00046ed6) list_single_graphic_2heading_pane_g5_ParamLimits

0xeff7,	// (0x00046ed6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0004768f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0004768f) list_single_graphic_2heading_pane_g

0xf003,	// (0x00046ee2) list_single_graphic_2heading_pane_t1_ParamLimits

0xf003,	// (0x00046ee2) list_single_graphic_2heading_pane_t1

0xf017,	// (0x00046ef6) list_single_graphic_2heading_pane_t2_ParamLimits

0xf017,	// (0x00046ef6) list_single_graphic_2heading_pane_t2

0xf033,	// (0x00046f12) list_single_graphic_2heading_pane_t3_ParamLimits

0xf033,	// (0x00046f12) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00047696) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00047696) list_single_graphic_2heading_pane_t

0x230c,	// (0x0003a1eb) bg_popup_sub_pane_cp2

0x2336,	// (0x0003a215) grid_toobar_pane

0x0272,	// (0x00038151) cell_toolbar_pane_ParamLimits

0x0272,	// (0x00038151) cell_toolbar_pane

0x2372,	// (0x0003a251) cell_toolbar_pane_g1_ParamLimits

0x2372,	// (0x0003a251) cell_toolbar_pane_g1

0x2386,	// (0x0003a265) cell_toolbar_pane_g2_ParamLimits

0x2386,	// (0x0003a265) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x000476a4) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x000476a4) cell_toolbar_pane_g

0x23a8,	// (0x0003a287) grid_highlight_pane_cp2_ParamLimits

0x23a8,	// (0x0003a287) grid_highlight_pane_cp2

0x23c2,	// (0x0003a2a1) toolbar_button_pane

0x23ce,	// (0x0003a2ad) toolbar_button_pane_g1

0x23d6,	// (0x0003a2b5) toolbar_button_pane_g2

0x23de,	// (0x0003a2bd) toolbar_button_pane_g3

0x23e6,	// (0x0003a2c5) toolbar_button_pane_g4

0x23ee,	// (0x0003a2cd) toolbar_button_pane_g5

0x23f6,	// (0x0003a2d5) toolbar_button_pane_g6

0x23fe,	// (0x0003a2dd) toolbar_button_pane_g7

0x2406,	// (0x0003a2e5) toolbar_button_pane_g8

0x240e,	// (0x0003a2ed) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x000476a9) toolbar_button_pane_g

0x02aa,	// (0x00038189) list_single_2graphic_pane_g1_cp3_ParamLimits

0x02aa,	// (0x00038189) list_single_2graphic_pane_g1_cp3

0xaebb,	// (0x00042d9a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaebb,	// (0x00042d9a) list_single_2graphic_pane_g2_cp3

0x02c7,	// (0x000381a6) list_single_2graphic_pane_g3_cp3

0x02cf,	// (0x000381ae) list_single_2graphic_pane_g4_cp3_ParamLimits

0x02cf,	// (0x000381ae) list_single_2graphic_pane_g4_cp3

0x02db,	// (0x000381ba) list_single_2graphic_pane_t1_cp3_ParamLimits

0x02db,	// (0x000381ba) list_single_2graphic_pane_t1_cp3

0x02f6,	// (0x000381d5) list_single_midp_graphic_pane_g2_ParamLimits

0x02f6,	// (0x000381d5) list_single_midp_graphic_pane_g2

0x00d2,	// (0x00037fb1) aid_zoom_text_primary

0xda3c,	// (0x0004591b) aid_zoom_text_secondary

0xa249,	// (0x00042128) status_small_pane_g7_ParamLimits

0xa249,	// (0x00042128) status_small_pane_g7

0xa26c,	// (0x0004214b) status_small_pane_t1_ParamLimits

0x93ee,	// (0x000412cd) title_pane_g2

0x0003,

0xf54e,	// (0x0004742d) title_pane_g

0x967a,	// (0x00041559) aid_size_cell_colour_1_pane_ParamLimits

0x967a,	// (0x00041559) aid_size_cell_colour_1_pane

0x968e,	// (0x0004156d) aid_size_cell_colour_2_pane_ParamLimits

0x968e,	// (0x0004156d) aid_size_cell_colour_2_pane

0x96a2,	// (0x00041581) aid_size_cell_colour_3_pane_ParamLimits

0x96a2,	// (0x00041581) aid_size_cell_colour_3_pane

0x96b6,	// (0x00041595) aid_size_cell_colour_4_pane_ParamLimits

0x96b6,	// (0x00041595) aid_size_cell_colour_4_pane

0xee5a,	// (0x00046d39) title_pane_stacon_g1_ParamLimits

0xee5a,	// (0x00046d39) title_pane_stacon_g1

0x2a44,	// (0x0003a923) popup_note_wait_window_g3_ParamLimits

0x2a44,	// (0x0003a923) popup_note_wait_window_g3

0x2abb,	// (0x0003a99a) popup_note_wait_window_t5_ParamLimits

0x2abb,	// (0x0003a99a) popup_note_wait_window_t5

0x7804,	// (0x0003f6e3) main_feb_china_hwr_fs_writing_pane

0xa4cc,	// (0x000423ab) popup_feb_china_hwr_fs_window_ParamLimits

0xa4cc,	// (0x000423ab) popup_feb_china_hwr_fs_window

0xaecc,	// (0x00042dab) aid_size_cell_hwr_fs_ParamLimits

0xaecc,	// (0x00042dab) aid_size_cell_hwr_fs

0x2442,	// (0x0003a321) bg_popup_sub_pane_cp3_ParamLimits

0x2442,	// (0x0003a321) bg_popup_sub_pane_cp3

0xaee1,	// (0x00042dc0) grid_hwr_fs_pane_ParamLimits

0xaee1,	// (0x00042dc0) grid_hwr_fs_pane

0x0345,	// (0x00038224) linegrid_hwr_fs_pane_ParamLimits

0x0345,	// (0x00038224) linegrid_hwr_fs_pane

0xaef9,	// (0x00042dd8) cell_hwr_fs_pane_ParamLimits

0xaef9,	// (0x00042dd8) cell_hwr_fs_pane

0x244e,	// (0x0003a32d) linegrid_hwr_fs_pane_g1_ParamLimits

0x244e,	// (0x0003a32d) linegrid_hwr_fs_pane_g1

0xc2e6,	// (0x000441c5) linegrid_hwr_fs_pane_g2_ParamLimits

0xc2e6,	// (0x000441c5) linegrid_hwr_fs_pane_g2

0x246c,	// (0x0003a34b) linegrid_hwr_fs_pane_g3_ParamLimits

0x246c,	// (0x0003a34b) linegrid_hwr_fs_pane_g3

0x0379,	// (0x00038258) linegrid_hwr_fs_pane_g4_ParamLimits

0x0379,	// (0x00038258) linegrid_hwr_fs_pane_g4

0x0397,	// (0x00038276) linegrid_hwr_fs_pane_g5_ParamLimits

0x0397,	// (0x00038276) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000476cf) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000476cf) linegrid_hwr_fs_pane_g

0x2478,	// (0x0003a357) cell_hwr_fs_pane_g1_ParamLimits

0x2478,	// (0x0003a357) cell_hwr_fs_pane_g1

0x2243,	// (0x0003a122) cell_hwr_fs_pane_g2_ParamLimits

0x2243,	// (0x0003a122) cell_hwr_fs_pane_g2

0xc2f8,	// (0x000441d7) cell_hwr_fs_pane_g3_ParamLimits

0xc2f8,	// (0x000441d7) cell_hwr_fs_pane_g3

0xc305,	// (0x000441e4) cell_hwr_fs_pane_g4_ParamLimits

0xc305,	// (0x000441e4) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000476da) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000476da) cell_hwr_fs_pane_g

0xaf1f,	// (0x00042dfe) cell_hwr_fs_pane_t1

0x7804,	// (0x0003f6e3) grid_highlight_pane_cp6

0x7804,	// (0x0003f6e3) main_idle_act2_pane

0xba86,	// (0x00043965) aid_inside_area_popup_secondary

0xc426,	// (0x00044305) aid_inside_area_window_primary_ParamLimits

0xc426,	// (0x00044305) aid_inside_area_window_primary

0x3ce8,	// (0x0003bbc7) ai2_news_ticker_pane

0x3cf0,	// (0x0003bbcf) aid_size_cell_ai1_link_ParamLimits

0x3cf0,	// (0x0003bbcf) aid_size_cell_ai1_link

0x3d0a,	// (0x0003bbe9) popup_ai2_data_window_ParamLimits

0x3d0a,	// (0x0003bbe9) popup_ai2_data_window

0x3d28,	// (0x0003bc07) popup_ai2_link_window_ParamLimits

0x3d28,	// (0x0003bc07) popup_ai2_link_window

0x2442,	// (0x0003a321) bg_popup_sub_pane_cp4_ParamLimits

0x2442,	// (0x0003a321) bg_popup_sub_pane_cp4

0x3d3e,	// (0x0003bc1d) grid_ai2_link_pane_ParamLimits

0x3d3e,	// (0x0003bc1d) grid_ai2_link_pane

0x3d55,	// (0x0003bc34) popup_ai2_link_window_g1_ParamLimits

0x3d55,	// (0x0003bc34) popup_ai2_link_window_g1

0x3d61,	// (0x0003bc40) popup_ai2_link_window_g2_ParamLimits

0x3d61,	// (0x0003bc40) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000478ad) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000478ad) popup_ai2_link_window_g

0x3d72,	// (0x0003bc51) ai2_mp_button_pane

0x3d7a,	// (0x0003bc59) ai2_mp_volume_pane

0x2633,	// (0x0003a512) bg_popup_sub_pane_cp5_ParamLimits

0x2633,	// (0x0003a512) bg_popup_sub_pane_cp5

0x3d82,	// (0x0003bc61) heading_ai2_gene_pane_ParamLimits

0x3d82,	// (0x0003bc61) heading_ai2_gene_pane

0x3d8e,	// (0x0003bc6d) list_ai2_gene_pane_ParamLimits

0x3d8e,	// (0x0003bc6d) list_ai2_gene_pane

0x3dd6,	// (0x0003bcb5) cell_ai2_link_pane_ParamLimits

0x3dd6,	// (0x0003bcb5) cell_ai2_link_pane

0x3dec,	// (0x0003bccb) cell_ai2_link_pane_g1

0x7804,	// (0x0003f6e3) grid_highlight_pane_cp7

0x078f,	// (0x0003866e) ai2_mp_volume_pane_g1

0x3ebf,	// (0x0003bd9e) ai2_mp_volume_pane_g2

0x3e34,	// (0x0003bd13) list_ai2_gene_pane_t1

0x3ec7,	// (0x0003bda6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000478c6) ai2_mp_volume_pane_g

0x0797,	// (0x00038676) volume_small_pane_cp3

0x3ecf,	// (0x0003bdae) aid_size_cell_ai2_button

0x3ed7,	// (0x0003bdb6) grid_ai2_button_pane

0x3ee0,	// (0x0003bdbf) cell_ai2_button_pane_ParamLimits

0x3ee0,	// (0x0003bdbf) cell_ai2_button_pane

0x77fa,	// (0x0003f6d9) cell_ai2_button_pane_g1

0x7804,	// (0x0003f6e3) grid_highlight_pane_cp8

0x3e7f,	// (0x0003bd5e) ai2_gene_pane_t1_ParamLimits

0x3e7f,	// (0x0003bd5e) ai2_gene_pane_t1

0xa42a,	// (0x00042309) aid_height_parent_landscape

0xc61b,	// (0x000444fa) aid_height_set_list

0x3797,	// (0x0003b676) aid_size_parent

0x3b09,	// (0x0003b9e8) aid_size_cell_graphic_pane_ParamLimits

0x3d9e,	// (0x0003bc7d) popup_ai2_data_window_g1_ParamLimits

0x3d9e,	// (0x0003bc7d) popup_ai2_data_window_g1

0x3daa,	// (0x0003bc89) ai2_news_ticker_pane_g1

0x3db2,	// (0x0003bc91) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000478b2) ai2_news_ticker_pane_g

0x3dba,	// (0x0003bc99) ai2_news_ticker_pane_t1

0x3dc8,	// (0x0003bca7) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000478b7) ai2_news_ticker_pane_t

0x3df5,	// (0x0003bcd4) heading_ai2_gene_pane_g1

0x3dfd,	// (0x0003bcdc) heading_ai2_gene_pane_t1_ParamLimits

0x3dfd,	// (0x0003bcdc) heading_ai2_gene_pane_t1

0x3e12,	// (0x0003bcf1) list_highlight_pane_cp6

0x3e1a,	// (0x0003bcf9) ai2_gene_pane_ParamLimits

0x3e1a,	// (0x0003bcf9) ai2_gene_pane

0x3e42,	// (0x0003bd21) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000478bc) list_ai2_gene_pane_t

0x3e50,	// (0x0003bd2f) list_highlight_pane_cp8_ParamLimits

0x3e50,	// (0x0003bd2f) list_highlight_pane_cp8

0x3e61,	// (0x0003bd40) ai2_gene_pane_g1_ParamLimits

0x3e61,	// (0x0003bd40) ai2_gene_pane_g1

0x3e73,	// (0x0003bd52) ai2_gene_pane_g2_ParamLimits

0x3e73,	// (0x0003bd52) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000478c1) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000478c1) ai2_gene_pane_g

0x87d8,	// (0x000406b7) scroll_pane_cp12

0xa3e9,	// (0x000422c8) control_pane_t3_ParamLimits

0xa3e9,	// (0x000422c8) control_pane_t3

0xa25d,	// (0x0004213c) status_small_pane_g8_ParamLimits

0xa25d,	// (0x0004213c) status_small_pane_g8

0xa56e,	// (0x0004244d) popup_find_window_ParamLimits

0xa81f,	// (0x000426fe) popup_note_image_window_ParamLimits

0xd8de,	// (0x000457bd) list_double2_graphic_pane_vc_g1_ParamLimits

0xd8de,	// (0x000457bd) list_double2_graphic_pane_vc_g1

0xda4c,	// (0x0004592b) list_double2_graphic_pane_vc_g2_ParamLimits

0xda4c,	// (0x0004592b) list_double2_graphic_pane_vc_g2

0xda58,	// (0x00045937) list_double2_graphic_pane_vc_g3_ParamLimits

0xda58,	// (0x00045937) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0004769d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0004769d) list_double2_graphic_pane_vc_g

0xda64,	// (0x00045943) list_double2_graphic_pane_vc_t1_ParamLimits

0xda64,	// (0x00045943) list_double2_graphic_pane_vc_t1

0xd8b4,	// (0x00045793) list_single_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_heading_pane_vc_g1

0xd8c0,	// (0x0004579f) list_single_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_heading_pane_vc_g

0xda7a,	// (0x00045959) list_single_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x00045959) list_single_heading_pane_vc_t1

0xda92,	// (0x00045971) list_single_heading_pane_vc_t2_ParamLimits

0xda92,	// (0x00045971) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x000476be) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x000476be) list_single_heading_pane_vc_t

0xdaa4,	// (0x00045983) list_setting_number_pane_vc_g1_ParamLimits

0xdaa4,	// (0x00045983) list_setting_number_pane_vc_g1

0xdab0,	// (0x0004598f) list_setting_number_pane_vc_g2_ParamLimits

0xdab0,	// (0x0004598f) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000476c3) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000476c3) list_setting_number_pane_vc_g

0xdabc,	// (0x0004599b) list_setting_number_pane_vc_t1_ParamLimits

0xdabc,	// (0x0004599b) list_setting_number_pane_vc_t1

0xdad0,	// (0x000459af) list_setting_number_pane_vc_t2_ParamLimits

0xdad0,	// (0x000459af) list_setting_number_pane_vc_t2

0xdaec,	// (0x000459cb) list_setting_number_pane_vc_t3_ParamLimits

0xdaec,	// (0x000459cb) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000476c8) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000476c8) list_setting_number_pane_vc_t

0xdb1a,	// (0x000459f9) set_value_pane_vc_ParamLimits

0xdb1a,	// (0x000459f9) set_value_pane_vc

0xdb51,	// (0x00045a30) list_double2_graphic_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double2_graphic_pane_vc

0x396f,	// (0x0003b84e) list_double2_large_graphic_pane_vc_ParamLimits

0x396f,	// (0x0003b84e) list_double2_large_graphic_pane_vc

0xdb51,	// (0x00045a30) list_double2_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double2_pane_vc

0xdb51,	// (0x00045a30) list_double_graphic_heading_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_graphic_heading_pane_vc

0xdb51,	// (0x00045a30) list_double_graphic_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_graphic_pane_vc

0xdb51,	// (0x00045a30) list_double_heading_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_heading_pane_vc

0x3983,	// (0x0003b862) list_double_large_graphic_pane_vc_ParamLimits

0x3983,	// (0x0003b862) list_double_large_graphic_pane_vc

0xdb51,	// (0x00045a30) list_double_number_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_number_pane_vc

0xdb51,	// (0x00045a30) list_double_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_pane_vc

0xdb51,	// (0x00045a30) list_double_time_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_double_time_pane_vc

0xdb51,	// (0x00045a30) list_setting_number_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_setting_number_pane_vc

0xdb51,	// (0x00045a30) list_setting_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_setting_pane_vc

0xdb51,	// (0x00045a30) list_single_graphic_heading_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_single_graphic_heading_pane_vc

0xdb51,	// (0x00045a30) list_single_heading_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_single_heading_pane_vc

0xdb51,	// (0x00045a30) list_single_number_heading_pane_vc_ParamLimits

0xdb51,	// (0x00045a30) list_single_number_heading_pane_vc

0xd8de,	// (0x000457bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd8de,	// (0x000457bd) list_double_graphic_heading_pane_vc_g1

0xd8b4,	// (0x00045793) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd8b4,	// (0x00045793) list_double_graphic_heading_pane_vc_g2

0xd8c0,	// (0x0004579f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd8c0,	// (0x0004579f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000478cd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000478cd) list_double_graphic_heading_pane_vc_g

0xdb66,	// (0x00045a45) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdb66,	// (0x00045a45) list_double_graphic_heading_pane_vc_t1

0xdb7c,	// (0x00045a5b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdb7c,	// (0x00045a5b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000478d4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000478d4) list_double_graphic_heading_pane_vc_t

0xdaa4,	// (0x00045983) list_setting_pane_vc_g1_ParamLimits

0xdaa4,	// (0x00045983) list_setting_pane_vc_g1

0xdab0,	// (0x0004598f) list_setting_pane_vc_g2_ParamLimits

0xdab0,	// (0x0004598f) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x000476c3) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x000476c3) list_setting_pane_vc_g

0xdb9a,	// (0x00045a79) list_setting_pane_vc_t1_ParamLimits

0xdb9a,	// (0x00045a79) list_setting_pane_vc_t1

0xdbb6,	// (0x00045a95) list_setting_pane_vc_t2_ParamLimits

0xdbb6,	// (0x00045a95) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00047917) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00047917) list_setting_pane_vc_t

0xdb1a,	// (0x000459f9) set_value_pane_cp_vc_ParamLimits

0xdb1a,	// (0x000459f9) set_value_pane_cp_vc

0xd8b4,	// (0x00045793) list_single_number_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_single_number_heading_pane_vc_g1

0xd8c0,	// (0x0004579f) list_single_number_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_single_number_heading_pane_vc_g

0xda7a,	// (0x00045959) list_single_number_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x00045959) list_single_number_heading_pane_vc_t1

0xdbd2,	// (0x00045ab1) list_single_number_heading_pane_vc_t2_ParamLimits

0xdbd2,	// (0x00045ab1) list_single_number_heading_pane_vc_t2

0xd8cc,	// (0x000457ab) list_single_number_heading_pane_vc_t3_ParamLimits

0xd8cc,	// (0x000457ab) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0004791c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0004791c) list_single_number_heading_pane_vc_t

0xd8de,	// (0x000457bd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd8de,	// (0x000457bd) list_single_graphic_heading_pane_vc_g1

0xd8b4,	// (0x00045793) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd8b4,	// (0x00045793) list_single_graphic_heading_pane_vc_g4

0xd8c0,	// (0x0004579f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd8c0,	// (0x0004579f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x000478cd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000478cd) list_single_graphic_heading_pane_vc_g

0xda7a,	// (0x00045959) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x00045959) list_single_graphic_heading_pane_vc_t1

0xdbe4,	// (0x00045ac3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdbe4,	// (0x00045ac3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00047923) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00047923) list_single_graphic_heading_pane_vc_t

0xd8b4,	// (0x00045793) list_double2_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_double2_pane_vc_g1

0xd8c0,	// (0x0004579f) list_double2_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_double2_pane_vc_g

0xdb3b,	// (0x00045a1a) list_double2_pane_vc_t1_ParamLimits

0xdb3b,	// (0x00045a1a) list_double2_pane_vc_t1

0xd8ea,	// (0x000457c9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd8ea,	// (0x000457c9) list_double2_large_graphic_pane_vc_g1

0xd8f6,	// (0x000457d5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd8f6,	// (0x000457d5) list_double2_large_graphic_pane_vc_g2

0xd902,	// (0x000457e1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd902,	// (0x000457e1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000474c4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000474c4) list_double2_large_graphic_pane_vc_g

0xd90e,	// (0x000457ed) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd90e,	// (0x000457ed) list_double2_large_graphic_pane_vc_t1

0xdbf6,	// (0x00045ad5) list_double_time_pane_vc_g1_ParamLimits

0xdbf6,	// (0x00045ad5) list_double_time_pane_vc_g1

0xdc02,	// (0x00045ae1) list_double_time_pane_vc_g2_ParamLimits

0xdc02,	// (0x00045ae1) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00047928) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00047928) list_double_time_pane_vc_g

0xdc0e,	// (0x00045aed) list_double_time_pane_vc_t1_ParamLimits

0xdc0e,	// (0x00045aed) list_double_time_pane_vc_t1

0xdc38,	// (0x00045b17) list_double_time_pane_vc_t2_ParamLimits

0xdc38,	// (0x00045b17) list_double_time_pane_vc_t2

0xdc81,	// (0x00045b60) list_double_time_pane_vc_t3_ParamLimits

0xdc81,	// (0x00045b60) list_double_time_pane_vc_t3

0xdc93,	// (0x00045b72) list_double_time_pane_vc_t4_ParamLimits

0xdc93,	// (0x00045b72) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0004792d) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0004792d) list_double_time_pane_vc_t

0xd8b4,	// (0x00045793) list_double_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_double_pane_vc_g1

0xd8c0,	// (0x0004579f) list_double_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_double_pane_vc_g

0xdcb8,	// (0x00045b97) list_double_pane_vc_t1_ParamLimits

0xdcb8,	// (0x00045b97) list_double_pane_vc_t1

0xdccc,	// (0x00045bab) list_double_pane_vc_t2_ParamLimits

0xdccc,	// (0x00045bab) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00047936) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00047936) list_double_pane_vc_t

0xd8b4,	// (0x00045793) list_double_number_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_double_number_pane_vc_g1

0xd8c0,	// (0x0004579f) list_double_number_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_double_number_pane_vc_g

0xdce2,	// (0x00045bc1) list_double_number_pane_vc_t1_ParamLimits

0xdce2,	// (0x00045bc1) list_double_number_pane_vc_t1

0xdcf6,	// (0x00045bd5) list_double_number_pane_vc_t2_ParamLimits

0xdcf6,	// (0x00045bd5) list_double_number_pane_vc_t2

0xdd0a,	// (0x00045be9) list_double_number_pane_vc_t3_ParamLimits

0xdd0a,	// (0x00045be9) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0004793b) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0004793b) list_double_number_pane_vc_t

0xdd20,	// (0x00045bff) list_double_large_graphic_pane_vc_g1_ParamLimits

0xdd20,	// (0x00045bff) list_double_large_graphic_pane_vc_g1

0xdd48,	// (0x00045c27) list_double_large_graphic_pane_vc_g2_ParamLimits

0xdd48,	// (0x00045c27) list_double_large_graphic_pane_vc_g2

0xdd5c,	// (0x00045c3b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xdd5c,	// (0x00045c3b) list_double_large_graphic_pane_vc_g3

0xdd6b,	// (0x00045c4a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdd6b,	// (0x00045c4a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00047942) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00047942) list_double_large_graphic_pane_vc_g

0xdd7b,	// (0x00045c5a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdd7b,	// (0x00045c5a) list_double_large_graphic_pane_vc_t1

0xdd9d,	// (0x00045c7c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdd9d,	// (0x00045c7c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0004794b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0004794b) list_double_large_graphic_pane_vc_t

0xd8b4,	// (0x00045793) list_double_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045793) list_double_heading_pane_vc_g1

0xd8c0,	// (0x0004579f) list_double_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x0004579f) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000474a7) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000474a7) list_double_heading_pane_vc_g

0xddbd,	// (0x00045c9c) list_double_heading_pane_vc_t1_ParamLimits

0xddbd,	// (0x00045c9c) list_double_heading_pane_vc_t1

0xda7a,	// (0x00045959) list_double_heading_pane_vc_t2_ParamLimits

0xda7a,	// (0x00045959) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00047950) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00047950) list_double_heading_pane_vc_t

0xddcf,	// (0x00045cae) list_double_graphic_pane_vc_g1_ParamLimits

0xddcf,	// (0x00045cae) list_double_graphic_pane_vc_g1

0xdde2,	// (0x00045cc1) list_double_graphic_pane_vc_g2_ParamLimits

0xdde2,	// (0x00045cc1) list_double_graphic_pane_vc_g2

0xd8b4,	// (0x00045793) list_double_graphic_pane_vc_g3_ParamLimits

0xd8b4,	// (0x00045793) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00047955) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00047955) list_double_graphic_pane_vc_g

0xddff,	// (0x00045cde) list_double_graphic_pane_vc_t1_ParamLimits

0xddff,	// (0x00045cde) list_double_graphic_pane_vc_t1

0xde29,	// (0x00045d08) list_double_graphic_pane_vc_t2_ParamLimits

0xde29,	// (0x00045d08) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0004795e) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0004795e) list_double_graphic_pane_vc_t

0xebd6,	// (0x00046ab5) aid_size_cell_fastswap

0x91c7,	// (0x000410a6) aid_size_cell_touch_ParamLimits

0x91c7,	// (0x000410a6) aid_size_cell_touch

0xed5d,	// (0x00046c3c) popup_fast_swap_wide_window_ParamLimits

0xed5d,	// (0x00046c3c) popup_fast_swap_wide_window

0x9385,	// (0x00041264) touch_pane_ParamLimits

0x9385,	// (0x00041264) touch_pane

0xb95f,	// (0x0004383e) button_value_adjust_pane_cp2

0xd947,	// (0x00045826) button_value_adjust_pane_cp4

0xd94f,	// (0x0004582e) form_field_data_pane_cp2

0x9c19,	// (0x00041af8) form_field_data_wide_pane_cp2

0xbcc5,	// (0x00043ba4) bg_scroll_pane_ParamLimits

0xefb6,	// (0x00046e95) scroll_handle_pane_ParamLimits

0xefca,	// (0x00046ea9) scroll_sc2_down_pane_ParamLimits

0xefca,	// (0x00046ea9) scroll_sc2_down_pane

0xbcf6,	// (0x00043bd5) scroll_sc2_up_pane_ParamLimits

0xbcf6,	// (0x00043bd5) scroll_sc2_up_pane

0xc9fe,	// (0x000448dd) grid_wheel_folder_pane_g1_ParamLimits

0xc9fe,	// (0x000448dd) grid_wheel_folder_pane_g1

0xf200,	// (0x000470df) clock_nsta_pane_cp2_ParamLimits

0xf200,	// (0x000470df) clock_nsta_pane_cp2

0x0144,	// (0x00038023) listscroll_midp_pane_ParamLimits

0xa148,	// (0x00042027) midp_canvas_pane

0x00b8,	// (0x00037f97) nsta_clock_indic_pane

0x010e,	// (0x00037fed) listscroll_form_pane_vc

0x0132,	// (0x00038011) listscroll_set_pane_vc_ParamLimits

0x0132,	// (0x00038011) listscroll_set_pane_vc

0xac9b,	// (0x00042b7a) clock_nsta_pane

0xacc5,	// (0x00042ba4) indicator_nsta_pane

0x230c,	// (0x0003a1eb) bg_popup_sub_pane_cp2_ParamLimits

0x2320,	// (0x0003a1ff) find_pane_cp2_ParamLimits

0x2320,	// (0x0003a1ff) find_pane_cp2

0x2336,	// (0x0003a215) grid_toobar_pane_ParamLimits

0x2416,	// (0x0003a2f5) list_form_gen_pane_vc_ParamLimits

0x2416,	// (0x0003a2f5) list_form_gen_pane_vc

0x242c,	// (0x0003a30b) scroll_pane_cp8_vc_ParamLimits

0x242c,	// (0x0003a30b) scroll_pane_cp8_vc

0x24a8,	// (0x0003a387) data_form_wide_pane_vc_ParamLimits

0x24a8,	// (0x0003a387) data_form_wide_pane_vc

0x24b4,	// (0x0003a393) form_field_data_wide_pane_vc_g1

0x24bc,	// (0x0003a39b) form_field_data_wide_pane_vc_t1_ParamLimits

0x24bc,	// (0x0003a39b) form_field_data_wide_pane_vc_t1

0xb973,	// (0x00043852) input_focus_pane_cp6_vc_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_cp6_vc

0xc383,	// (0x00044262) list_midp_pane_ParamLimits

0x3b75,	// (0x0003ba54) scroll_pane_cp16_ParamLimits

0x3b75,	// (0x0003ba54) scroll_pane_cp16

0x2818,	// (0x0003a6f7) button_value_adjust_pane_ParamLimits

0x2818,	// (0x0003a6f7) button_value_adjust_pane

0xc62c,	// (0x0004450b) button_value_adjust_pane_cp6_ParamLimits

0xc62c,	// (0x0004450b) button_value_adjust_pane_cp6

0xc76e,	// (0x0004464d) settings_code_pane_cp_ParamLimits

0xc76e,	// (0x0004464d) settings_code_pane_cp

0x77fa,	// (0x0003f6d9) cell_touch_pane_g1

0x77fa,	// (0x0003f6d9) cell_touch_pane_g2

0x0001,

0xf703,	// (0x000475e2) cell_touch_pane_g

0xc8bd,	// (0x0004479c) cell_touch_pane_cp_ParamLimits

0xc8bd,	// (0x0004479c) cell_touch_pane_cp

0xc8d9,	// (0x000447b8) cell_touch_pane_ParamLimits

0xc8d9,	// (0x000447b8) cell_touch_pane

0x77fa,	// (0x0003f6d9) scroll_sc2_down_pane_g1

0x77fa,	// (0x0003f6d9) scroll_sc2_up_pane_g1

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp4_vc

0x3f13,	// (0x0003bdf2) list_set_graphic_pane_vc_g1_ParamLimits

0x3f13,	// (0x0003bdf2) list_set_graphic_pane_vc_g1

0xc8f7,	// (0x000447d6) list_set_graphic_pane_vc_g2_ParamLimits

0xc8f7,	// (0x000447d6) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000478d9) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000478d9) list_set_graphic_pane_vc_g

0x3f1f,	// (0x0003bdfe) text_primary_small_cp13_vc_ParamLimits

0x3f1f,	// (0x0003bdfe) text_primary_small_cp13_vc

0x3f37,	// (0x0003be16) list_set_graphic_pane_vc_ParamLimits

0x3f37,	// (0x0003be16) list_set_graphic_pane_vc

0x7804,	// (0x0003f6e3) input_focus_pane_cp2_vc

0x77fa,	// (0x0003f6d9) setting_code_pane_vc_g1

0x8236,	// (0x00040115) setting_code_pane_vc_t1

0x3f4c,	// (0x0003be2b) set_text_pane_vc_t1_ParamLimits

0x3f4c,	// (0x0003be2b) set_text_pane_vc_t1

0x7804,	// (0x0003f6e3) input_focus_pane_cp1_vc

0x3f6a,	// (0x0003be49) list_set_text_pane_vc

0x77fa,	// (0x0003f6d9) setting_text_pane_vc_g1

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp2_vc

0x822d,	// (0x0004010c) setting_slider_graphic_pane_vc_g1

0x3f74,	// (0x0003be53) setting_slider_graphic_pane_vc_t1

0x3f86,	// (0x0003be65) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000478de) setting_slider_graphic_pane_vc_t

0x3f98,	// (0x0003be77) slider_set_pane_cp_vc

0x3fa2,	// (0x0003be81) slider_set_pane_vc_g1

0x3fab,	// (0x0003be8a) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000478e3) slider_set_pane_vc_g

0xb9ce,	// (0x000438ad) set_opt_bg_pane_g1_copy1

0xb9d6,	// (0x000438b5) set_opt_bg_pane_g2_copy1

0x3fd7,	// (0x0003beb6) set_opt_bg_pane_g3_copy1

0xb9e6,	// (0x000438c5) set_opt_bg_pane_g4_copy1

0xb9ee,	// (0x000438cd) set_opt_bg_pane_g5_copy1

0xb9f6,	// (0x000438d5) set_opt_bg_pane_g6_copy1

0x3fe1,	// (0x0003bec0) set_opt_bg_pane_g7_copy1

0x3feb,	// (0x0003beca) set_opt_bg_pane_g8_copy1

0x3ff5,	// (0x0003bed4) set_opt_bg_pane_g9_copy1

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp_vc

0x3fff,	// (0x0003bede) setting_slider_pane_vc_t1

0x400e,	// (0x0003beed) setting_slider_pane_vc_t2

0x4020,	// (0x0003beff) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x000478f2) setting_slider_pane_vc_t

0x4032,	// (0x0003bf11) slider_set_pane_vc

0x03de,	// (0x000382bd) volume_set_pane_vc_g1

0x03e7,	// (0x000382c6) volume_set_pane_vc_g2

0x03f0,	// (0x000382cf) volume_set_pane_vc_g3

0x03f9,	// (0x000382d8) volume_set_pane_vc_g4

0x0402,	// (0x000382e1) volume_set_pane_vc_g5

0x040b,	// (0x000382ea) volume_set_pane_vc_g6

0x0414,	// (0x000382f3) volume_set_pane_vc_g7

0x041d,	// (0x000382fc) volume_set_pane_vc_g8

0x0426,	// (0x00038305) volume_set_pane_vc_g9

0x042f,	// (0x0003830e) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x000478f9) volume_set_pane_vc_g

0x403c,	// (0x0003bf1b) volume_set_pane_vc

0x4046,	// (0x0003bf25) button_value_adjust_pane_cp1_vc

0x4050,	// (0x0003bf2f) list_highlight_pane_cp2_vc

0x4059,	// (0x0003bf38) list_set_pane_vc_ParamLimits

0x4059,	// (0x0003bf38) list_set_pane_vc

0x40c9,	// (0x0003bfa8) main_pane_set_vc_t1_ParamLimits

0x40c9,	// (0x0003bfa8) main_pane_set_vc_t1

0x40de,	// (0x0003bfbd) main_pane_set_vc_t2_ParamLimits

0x40de,	// (0x0003bfbd) main_pane_set_vc_t2

0x40f0,	// (0x0003bfcf) main_pane_set_vc_t3_ParamLimits

0x40f0,	// (0x0003bfcf) main_pane_set_vc_t3

0x4104,	// (0x0003bfe3) main_pane_set_vc_t4_ParamLimits

0x4104,	// (0x0003bfe3) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0004790e) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0004790e) main_pane_set_vc_t

0x4118,	// (0x0003bff7) setting_code_pane_vc_ParamLimits

0x4118,	// (0x0003bff7) setting_code_pane_vc

0x4129,	// (0x0003c008) setting_slider_graphic_pane_vc

0x4129,	// (0x0003c008) setting_slider_pane_vc

0x4129,	// (0x0003c008) setting_text_pane_vc

0x4129,	// (0x0003c008) setting_volume_pane_vc

0x4133,	// (0x0003c012) scroll_pane_cp121_vc

0xb94d,	// (0x0004382c) set_content_pane_vc

0x413b,	// (0x0003c01a) button_value_adjust_pane_g1

0x4144,	// (0x0003c023) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00047963) button_value_adjust_pane_g

0x414d,	// (0x0003c02c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x414d,	// (0x0003c02c) form_field_slider_wide_pane_vc_t1

0x415f,	// (0x0003c03e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x415f,	// (0x0003c03e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00047968) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00047968) form_field_slider_wide_pane_vc_t

0x8352,	// (0x00040231) input_focus_pane_cp10_vc_ParamLimits

0x8352,	// (0x00040231) input_focus_pane_cp10_vc

0x418b,	// (0x0003c06a) slider_cont_pane_cp1_vc_ParamLimits

0x418b,	// (0x0003c06a) slider_cont_pane_cp1_vc

0x419d,	// (0x0003c07c) slider_form_pane_g1_cp2

0x3fab,	// (0x0003be8a) slider_form_pane_g2_cp2

0x41ca,	// (0x0003c0a9) form_field_slider_pane_vc_t3

0x41d8,	// (0x0003c0b7) form_field_slider_pane_vc_t4

0x41e6,	// (0x0003c0c5) slider_form_pane_vc_ParamLimits

0x41e6,	// (0x0003c0c5) slider_form_pane_vc

0x41f3,	// (0x0003c0d2) form_field_slider_pane_vc_t1_ParamLimits

0x41f3,	// (0x0003c0d2) form_field_slider_pane_vc_t1

0x415f,	// (0x0003c03e) form_field_slider_pane_vc_t2_ParamLimits

0x415f,	// (0x0003c03e) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0004797a) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0004797a) form_field_slider_pane_vc_t

0x8352,	// (0x00040231) input_focus_pane_cp9_vc_ParamLimits

0x8352,	// (0x00040231) input_focus_pane_cp9_vc

0x4209,	// (0x0003c0e8) slider_cont_pane_vc_ParamLimits

0x4209,	// (0x0003c0e8) slider_cont_pane_vc

0x421d,	// (0x0003c0fc) list_form_graphic_pane_cp_vc_ParamLimits

0x421d,	// (0x0003c0fc) list_form_graphic_pane_cp_vc

0x24b4,	// (0x0003a393) form_field_popup_wide_pane_vc_g1

0x4232,	// (0x0003c111) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4232,	// (0x0003c111) form_field_popup_wide_pane_vc_t1

0xb973,	// (0x00043852) input_focus_pane_cp8_vc_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_cp8_vc

0x4277,	// (0x0003c156) list_form_wide_pane_vc_ParamLimits

0x4277,	// (0x0003c156) list_form_wide_pane_vc

0x4283,	// (0x0003c162) list_form_graphic_pane_vc_g1

0x428b,	// (0x0003c16a) list_form_graphic_pane_vc_t1_ParamLimits

0x428b,	// (0x0003c16a) list_form_graphic_pane_vc_t1

0x821f,	// (0x000400fe) list_highlight_pane_cp5_vc_ParamLimits

0x821f,	// (0x000400fe) list_highlight_pane_cp5_vc

0x42a7,	// (0x0003c186) list_form_graphic_pane_vc_ParamLimits

0x42a7,	// (0x0003c186) list_form_graphic_pane_vc

0x24b4,	// (0x0003a393) form_field_popup_pane_vc_g1

0x42bd,	// (0x0003c19c) form_field_popup_pane_vc_t1_ParamLimits

0x42bd,	// (0x0003c19c) form_field_popup_pane_vc_t1

0xb973,	// (0x00043852) input_focus_pane_cp7_vc_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_cp7_vc

0x42d4,	// (0x0003c1b3) list_form_pane_vc_ParamLimits

0x42d4,	// (0x0003c1b3) list_form_pane_vc

0x42e0,	// (0x0003c1bf) data_form_pane_vc_t1_ParamLimits

0x42e0,	// (0x0003c1bf) data_form_pane_vc_t1

0xb9ce,	// (0x000438ad) input_focus_pane_vc_g1

0xb9d6,	// (0x000438b5) input_focus_pane_vc_g2

0xb9de,	// (0x000438bd) input_focus_pane_vc_g3

0xb9e6,	// (0x000438c5) input_focus_pane_vc_g4

0xb9ee,	// (0x000438cd) input_focus_pane_vc_g5

0xb9f6,	// (0x000438d5) input_focus_pane_vc_g6

0xb9fe,	// (0x000438dd) input_focus_pane_vc_g7

0xba06,	// (0x000438e5) input_focus_pane_vc_g8

0xba0e,	// (0x000438ed) input_focus_pane_vc_g9

0x77fa,	// (0x0003f6d9) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0004756b) input_focus_pane_vc_g

0x24a8,	// (0x0003a387) data_form_pane_vc_ParamLimits

0x24a8,	// (0x0003a387) data_form_pane_vc

0x24b4,	// (0x0003a393) form_field_data_pane_vc_g1

0x42fd,	// (0x0003c1dc) form_field_data_pane_vc_t1_ParamLimits

0x42fd,	// (0x0003c1dc) form_field_data_pane_vc_t1

0xb973,	// (0x00043852) input_focus_pane_vc_ParamLimits

0xb973,	// (0x00043852) input_focus_pane_vc

0x4317,	// (0x0003c1f6) button_value_adjust_pane_cp3_vc

0x431f,	// (0x0003c1fe) button_value_adjust_pane_cp5_vc

0x4327,	// (0x0003c206) form_field_data_pane_vc_ParamLimits

0x4327,	// (0x0003c206) form_field_data_pane_vc

0x4342,	// (0x0003c221) form_field_data_pane_vc_cp2

0x434a,	// (0x0003c229) form_field_data_wide_pane_vc_ParamLimits

0x434a,	// (0x0003c229) form_field_data_wide_pane_vc

0x4364,	// (0x0003c243) form_field_data_wide_pane_vc_cp2

0x436c,	// (0x0003c24b) form_field_popup_pane_vc_ParamLimits

0x436c,	// (0x0003c24b) form_field_popup_pane_vc

0x4387,	// (0x0003c266) form_field_popup_wide_pane_vc_ParamLimits

0x4387,	// (0x0003c266) form_field_popup_wide_pane_vc

0x43a1,	// (0x0003c280) form_field_slider_pane_vc_ParamLimits

0x43a1,	// (0x0003c280) form_field_slider_pane_vc

0x43b4,	// (0x0003c293) form_field_slider_wide_pane_vc_ParamLimits

0x43b4,	// (0x0003c293) form_field_slider_wide_pane_vc

0xc903,	// (0x000447e2) grid_touch_1_pane_ParamLimits

0xc903,	// (0x000447e2) grid_touch_1_pane

0xc917,	// (0x000447f6) grid_touch_2_pane_ParamLimits

0xc917,	// (0x000447f6) grid_touch_2_pane

0x4485,	// (0x0003c364) touch_pane_g1_ParamLimits

0x4485,	// (0x0003c364) touch_pane_g1

0x43ed,	// (0x0003c2cc) cell_app_pane_cp_wide_ParamLimits

0x43ed,	// (0x0003c2cc) cell_app_pane_cp_wide

0x43fe,	// (0x0003c2dd) grid_popup_fast_wide_pane_ParamLimits

0x43fe,	// (0x0003c2dd) grid_popup_fast_wide_pane

0x4412,	// (0x0003c2f1) scroll_pane_cp19_ParamLimits

0x4412,	// (0x0003c2f1) scroll_pane_cp19

0x7804,	// (0x0003f6e3) bg_popup_window_pane_cp20

0x4426,	// (0x0003c305) listscroll_popup_fast_wide_pane

0xc943,	// (0x00044822) grid_indicator_nsta_pane

0x442e,	// (0x0003c30d) clock_nsta_pane_g1

0x4437,	// (0x0003c316) clock_nsta_pane_t1

0xc951,	// (0x00044830) cell_indicator_nsta_pane_ParamLimits

0xc951,	// (0x00044830) cell_indicator_nsta_pane

0x4485,	// (0x0003c364) cell_indicator_nsta_pane_g1

0xc96a,	// (0x00044849) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0004798b) cell_indicator_nsta_pane_g

0x44a9,	// (0x0003c388) clock_nsta_pane_cp

0x44b1,	// (0x0003c390) indicator_nsta_pane_cp

0x44ba,	// (0x0003c399) nsta_clock_indic_pane_g1

0x825b,	// (0x0004013a) grid_indicator_pane

0xbde8,	// (0x00043cc7) scroll_pane_cp29

0xf14c,	// (0x0004702b) indicator_nsta_pane_cp2_ParamLimits

0xf14c,	// (0x0004702b) indicator_nsta_pane_cp2

0x821f,	// (0x000400fe) main_apps_wheel_pane

0x269b,	// (0x0003a57a) form_midp_field_text_pane_ParamLimits

0x27ea,	// (0x0003a6c9) scroll_bar_cp050_ParamLimits

0x4523,	// (0x0003c402) cell_indicator_pane_ParamLimits

0x4523,	// (0x0003c402) cell_indicator_pane

0x453b,	// (0x0003c41a) cell_indicator_pane_g1

0xc980,	// (0x0004485f) grid_wheel_folder_pane_ParamLimits

0xc980,	// (0x0004485f) grid_wheel_folder_pane

0xc98e,	// (0x0004486d) list_wheel_apps_pane_ParamLimits

0xc98e,	// (0x0004486d) list_wheel_apps_pane

0xc99c,	// (0x0004487b) main_apps_wheel_pane_g1_ParamLimits

0xc99c,	// (0x0004487b) main_apps_wheel_pane_g1

0xc9ac,	// (0x0004488b) main_apps_wheel_pane_g2_ParamLimits

0xc9ac,	// (0x0004488b) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x000479a7) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x000479a7) main_apps_wheel_pane_g

0xc9bc,	// (0x0004489b) main_apps_wheel_pane_t1_ParamLimits

0xc9bc,	// (0x0004489b) main_apps_wheel_pane_t1

0xc9d4,	// (0x000448b3) list_wheel_apps_pane_g1

0xc9dc,	// (0x000448bb) list_wheel_apps_pane_g2

0xc9e4,	// (0x000448c3) list_wheel_apps_pane_g3

0xc9ec,	// (0x000448cb) list_wheel_apps_pane_g4

0xc9f4,	// (0x000448d3) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x000479ac) list_wheel_apps_pane_g

0xc168,	// (0x00044047) navi_icon_text_pane

0xab8d,	// (0x00042a6c) aid_fill_nsta

0xca11,	// (0x000448f0) navi_icon_text_pane_g1

0xca1d,	// (0x000448fc) navi_icon_text_pane_t1

0xa0a1,	// (0x00041f80) list_set_graphic_pane_t1_ParamLimits

0xa0a1,	// (0x00041f80) list_set_graphic_pane_t1

0x2f3b,	// (0x0003ae1a) popup_midp_note_alarm_window_t6_ParamLimits

0x2f3b,	// (0x0003ae1a) popup_midp_note_alarm_window_t6

0x2f4d,	// (0x0003ae2c) popup_midp_note_alarm_window_t7_ParamLimits

0x2f4d,	// (0x0003ae2c) popup_midp_note_alarm_window_t7

0x2f5f,	// (0x0003ae3e) popup_midp_note_alarm_window_t8_ParamLimits

0x2f5f,	// (0x0003ae3e) popup_midp_note_alarm_window_t8

0x2f71,	// (0x0003ae50) popup_midp_note_alarm_window_t9_ParamLimits

0x2f71,	// (0x0003ae50) popup_midp_note_alarm_window_t9

0x2f83,	// (0x0003ae62) popup_midp_note_alarm_window_t10_ParamLimits

0x2f83,	// (0x0003ae62) popup_midp_note_alarm_window_t10

0x2f95,	// (0x0003ae74) popup_midp_note_alarm_window_t11_ParamLimits

0x2f95,	// (0x0003ae74) popup_midp_note_alarm_window_t11

0x2fa7,	// (0x0003ae86) scroll_pane_cp17_ParamLimits

0x2fa7,	// (0x0003ae86) scroll_pane_cp17

0x03de,	// (0x000382bd) volume_small_pane_cp_g1

0x07a0,	// (0x0003867f) volume_small_pane_cp_g2

0x07a9,	// (0x00038688) volume_small_pane_cp_g3

0x07b2,	// (0x00038691) volume_small_pane_cp_g4

0x07bb,	// (0x0003869a) volume_small_pane_cp_g5

0x07c4,	// (0x000386a3) volume_small_pane_cp_g6

0x07cd,	// (0x000386ac) volume_small_pane_cp_g7

0x07d6,	// (0x000386b5) volume_small_pane_cp_g8

0x07df,	// (0x000386be) volume_small_pane_cp_g9

0x07e8,	// (0x000386c7) volume_small_pane_cp_g10

0xf35f,	// (0x0004723e) midp_ticker_pane_g1_ParamLimits

0xf36b,	// (0x0004724a) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00047637) midp_ticker_pane_g_ParamLimits

0xa1df,	// (0x000420be) midp_ticker_pane_t1_ParamLimits

0xabb1,	// (0x00042a90) aid_fill_nsta_2

0x27d6,	// (0x0003a6b5) list_form2_midp_pane

0x393e,	// (0x0003b81d) midp_editing_number_pane_ParamLimits

0x394d,	// (0x0003b82c) midp_ticker_pane_ParamLimits

0x462e,	// (0x0003c50d) form2_midp_field_pane

0x4652,	// (0x0003c531) scroll_pane_cp51

0x4672,	// (0x0003c551) form2_midp_button_pane_ParamLimits

0x4672,	// (0x0003c551) form2_midp_button_pane

0x4684,	// (0x0003c563) form2_midp_content_pane_ParamLimits

0x4684,	// (0x0003c563) form2_midp_content_pane

0x469e,	// (0x0003c57d) form2_midp_field_choice_group_pane

0x46a6,	// (0x0003c585) form2_midp_field_pane_g1

0x46ae,	// (0x0003c58d) form2_midp_field_pane_g2

0x46b6,	// (0x0003c595) form2_midp_field_pane_g3

0x46be,	// (0x0003c59d) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x000479d1) form2_midp_field_pane_g

0x46c6,	// (0x0003c5a5) form2_midp_gauge_slider_pane

0x46ce,	// (0x0003c5ad) form2_midp_gauge_wait_pane

0x46d6,	// (0x0003c5b5) form2_midp_image_pane_ParamLimits

0x46d6,	// (0x0003c5b5) form2_midp_image_pane

0x46f1,	// (0x0003c5d0) form2_midp_label_pane_ParamLimits

0x46f1,	// (0x0003c5d0) form2_midp_label_pane

0xca4b,	// (0x0004492a) form2_midp_label_pane_cp_ParamLimits

0xca4b,	// (0x0004492a) form2_midp_label_pane_cp

0x4731,	// (0x0003c610) form2_midp_string_pane_ParamLimits

0x4731,	// (0x0003c610) form2_midp_string_pane

0xde47,	// (0x00045d26) form2_midp_text_pane_ParamLimits

0xde47,	// (0x00045d26) form2_midp_text_pane

0x4743,	// (0x0003c622) form2_midp_time_pane

0x4753,	// (0x0003c632) input_focus_pane_cp51_ParamLimits

0x4753,	// (0x0003c632) input_focus_pane_cp51

0x476b,	// (0x0003c64a) form2_midp_label_pane_t1_ParamLimits

0x476b,	// (0x0003c64a) form2_midp_label_pane_t1

0xde68,	// (0x00045d47) form2_mdip_text_pane_t1_ParamLimits

0xde68,	// (0x00045d47) form2_mdip_text_pane_t1

0xde8c,	// (0x00045d6b) form2_midp_time_pane_t1

0x47b9,	// (0x0003c698) form2_midp_gauge_slider_pane_t1

0xca6c,	// (0x0004494b) form2_midp_gauge_slider_pane_t2

0xca7e,	// (0x0004495d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x000479da) form2_midp_gauge_slider_pane_t

0x47ef,	// (0x0003c6ce) form2_midp_slider_pane

0x47fb,	// (0x0003c6da) form2_midp_gauge_wait_pane_t1

0x4809,	// (0x0003c6e8) form2_midp_wait_pane_ParamLimits

0x4809,	// (0x0003c6e8) form2_midp_wait_pane

0x24fb,	// (0x0003a3da) list_single_2graphic_pane_cp4_ParamLimits

0x24fb,	// (0x0003a3da) list_single_2graphic_pane_cp4

0x4834,	// (0x0003c713) list_single_midp_graphic_pane_cp_ParamLimits

0x4834,	// (0x0003c713) list_single_midp_graphic_pane_cp

0x7804,	// (0x0003f6e3) list_highlight_pane_cp20

0x4858,	// (0x0003c737) list_single_2graphic_pane_g1_cp4

0x3df5,	// (0x0003bcd4) list_single_2graphic_pane_g2_cp4

0x4860,	// (0x0003c73f) list_single_2graphic_pane_t1_cp4

0x821f,	// (0x000400fe) list_highlight_pane_cp21

0x486f,	// (0x0003c74e) list_single_midp_graphic_pane_g4_cp

0x487e,	// (0x0003c75d) list_single_midp_graphic_pane_t1_cp

0xca90,	// (0x0004496f) form2_mdip_string_pane_t1_ParamLimits

0xca90,	// (0x0004496f) form2_mdip_string_pane_t1

0x7804,	// (0x0003f6e3) bg_wml_button_pane_cp2

0x77fa,	// (0x0003f6d9) form2_midp_image_pane_g1

0xd924,	// (0x00045803) list_double_large_graphic_pane_g5_ParamLimits

0xd924,	// (0x00045803) list_double_large_graphic_pane_g5

0x0144,	// (0x00038023) midp_form_pane_ParamLimits

0x821f,	// (0x000400fe) main_apps_wheel_pane_ParamLimits

0xa8a5,	// (0x00042784) popup_preview_window_ParamLimits

0xa8a5,	// (0x00042784) popup_preview_window

0x1e55,	// (0x00039d34) popup_touch_info_window_ParamLimits

0x1e55,	// (0x00039d34) popup_touch_info_window

0x1e77,	// (0x00039d56) popup_touch_menu_window_ParamLimits

0x1e77,	// (0x00039d56) popup_touch_menu_window

0x77f0,	// (0x0003f6cf) bg_popup_sub_pane_cp6

0x4938,	// (0x0003c817) list_touch_menu_pane

0x4940,	// (0x0003c81f) list_single_touch_menu_pane_ParamLimits

0x4940,	// (0x0003c81f) list_single_touch_menu_pane

0x4958,	// (0x0003c837) list_single_touch_menu_pane_t1

0x821f,	// (0x000400fe) bg_popup_sub_pane_cp7_ParamLimits

0x821f,	// (0x000400fe) bg_popup_sub_pane_cp7

0x4966,	// (0x0003c845) heading_sub_pane

0x496e,	// (0x0003c84d) list_touch_info_pane_ParamLimits

0x496e,	// (0x0003c84d) list_touch_info_pane

0x497d,	// (0x0003c85c) list_single_touch_info_pane_ParamLimits

0x497d,	// (0x0003c85c) list_single_touch_info_pane

0x498f,	// (0x0003c86e) list_single_touch_info_pane_t1

0x499d,	// (0x0003c87c) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x000479e8) list_single_touch_info_pane_t

0xf333,	// (0x00047212) bg_popup_heading_pane_cp

0x49ab,	// (0x0003c88a) heading_sub_pane_t1

0x2442,	// (0x0003a321) bg_popup_preview_window_pane_cp_ParamLimits

0x2442,	// (0x0003a321) bg_popup_preview_window_pane_cp

0x4966,	// (0x0003c845) heading_preview_pane

0x496e,	// (0x0003c84d) list_preview_pane_ParamLimits

0x496e,	// (0x0003c84d) list_preview_pane

0x49b9,	// (0x0003c898) popup_preview_window_g1

0x497d,	// (0x0003c85c) list_single_preview_pane_ParamLimits

0x497d,	// (0x0003c85c) list_single_preview_pane

0x49c1,	// (0x0003c8a0) list_single_preview_pane_g1

0x49c9,	// (0x0003c8a8) list_single_preview_pane_t1

0x498f,	// (0x0003c86e) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x000479ed) list_single_preview_pane_t

0x49d7,	// (0x0003c8b6) bg_popup_heading_pane_cp2_ParamLimits

0x49d7,	// (0x0003c8b6) bg_popup_heading_pane_cp2

0x49ed,	// (0x0003c8cc) heading_preview_pane_g1

0x49f5,	// (0x0003c8d4) heading_preview_pane_t1_ParamLimits

0x49f5,	// (0x0003c8d4) heading_preview_pane_t1

0x8272,	// (0x00040151) soft_indicator_pane_t1_ParamLimits

0x87b5,	// (0x00040694) scroll_pane_ParamLimits

0xbce4,	// (0x00043bc3) scroll_sc2_left_pane

0xbced,	// (0x00043bcc) scroll_sc2_right_pane

0xbd0c,	// (0x00043beb) scroll_bg_pane_g1_ParamLimits

0xbd21,	// (0x00043c00) scroll_bg_pane_g2_ParamLimits

0xbd39,	// (0x00043c18) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x000475c2) scroll_bg_pane_g_ParamLimits

0xbd0c,	// (0x00043beb) scroll_handle_pane_g1_ParamLimits

0xbd5b,	// (0x00043c3a) scroll_handle_pane_g2_ParamLimits

0xbd39,	// (0x00043c18) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000475c9) scroll_handle_pane_g_ParamLimits

0x016c,	// (0x0003804b) popup_choice_list_window_ParamLimits

0x016c,	// (0x0003804b) popup_choice_list_window

0x2318,	// (0x0003a1f7) choice_list_pane

0x239a,	// (0x0003a279) cell_toolbar_pane_t1

0x23c2,	// (0x0003a2a1) toolbar_button_pane_ParamLimits

0x3471,	// (0x0003b350) ai_gene_pane_1_t2_ParamLimits

0x3471,	// (0x0003b350) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x000477ec) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x000477ec) ai_gene_pane_1_t

0x4a12,	// (0x0003c8f1) scroll_sc2_left_pane_g1

0x4a12,	// (0x0003c8f1) scroll_sc2_right_pane_g1

0x0144,	// (0x00038023) bg_popup_sub_pane_cp10

0x4a1c,	// (0x0003c8fb) list_choice_list_pane

0x4a35,	// (0x0003c914) list_single_choice_list_pane_ParamLimits

0x4a35,	// (0x0003c914) list_single_choice_list_pane

0x4a4d,	// (0x0003c92c) list_single_choice_list_pane_g1

0xbac4,	// (0x000439a3) list_single_choice_list_pane_t1_ParamLimits

0xbac4,	// (0x000439a3) list_single_choice_list_pane_t1

0x4a55,	// (0x0003c934) choice_list_pane_g1

0x4a5d,	// (0x0003c93c) choice_list_pane_t1

0x77f0,	// (0x0003f6cf) input_focus_pane_cp11

0xbc42,	// (0x00043b21) title_pane_stacon_g2_ParamLimits

0xbc42,	// (0x00043b21) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000475a8) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000475a8) title_pane_stacon_g

0xf333,	// (0x00047212) cursor_press_pane

0xa522,	// (0x00042401) popup_fep_hwr_window_ParamLimits

0xa522,	// (0x00042401) popup_fep_hwr_window

0x19f9,	// (0x000398d8) popup_fep_vkb_window_ParamLimits

0x19f9,	// (0x000398d8) popup_fep_vkb_window

0x4a6b,	// (0x0003c94a) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00047a16) fep_vkb_side_pane_g_ParamLimits

0x082a,	// (0x00038709) fep_hwr_candidate_pane_ParamLimits

0x082a,	// (0x00038709) fep_hwr_candidate_pane

0x0854,	// (0x00038733) fep_hwr_side_pane_ParamLimits

0x0854,	// (0x00038733) fep_hwr_side_pane

0x0876,	// (0x00038755) fep_hwr_top_pane_ParamLimits

0x0876,	// (0x00038755) fep_hwr_top_pane

0x088e,	// (0x0003876d) fep_hwr_write_pane_ParamLimits

0x088e,	// (0x0003876d) fep_hwr_write_pane

0xfb37,	// (0x00047a16) fep_vkb_side_pane_g

0x4a73,	// (0x0003c952) fep_hwr_top_pane_g1

0x4a85,	// (0x0003c964) fep_hwr_top_pane_g2

0x08c8,	// (0x000387a7) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x000479f2) fep_hwr_top_pane_g

0x08dd,	// (0x000387bc) fep_hwr_top_text_pane

0xbe55,	// (0x00043d34) fep_hwr_top_text_pane_g1

0x4abb,	// (0x0003c99a) fep_hwr_top_text_pane_t1

0x09e7,	// (0x000388c6) fep_hwr_candidate_pane_g1

0x4d06,	// (0x0003cbe5) fep_vkb_keypad_pane_g3_ParamLimits

0x4d06,	// (0x0003cbe5) fep_vkb_keypad_pane_g3

0x4d32,	// (0x0003cc11) fep_vkb_keypad_pane_g4_ParamLimits

0x4d32,	// (0x0003cc11) fep_vkb_keypad_pane_g4

0x4da9,	// (0x0003cc88) fep_vkb_bottom_pane_g2_ParamLimits

0x4da9,	// (0x0003cc88) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00047a1d) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00047a1d) fep_vkb_bottom_pane_g

0x4a12,	// (0x0003c8f1) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00047a27) cell_vkb_side_pane_g

0x4e34,	// (0x0003cd13) cell_vkb_side_pane_t1

0x4e42,	// (0x0003cd21) cell_vkb_side_pane_t1_copy1

0x4a12,	// (0x0003c8f1) bg_fep_vkb_candidate_pane_g2

0x4f86,	// (0x0003ce65) cell_vkb_candidate_pane_ParamLimits

0x4ac9,	// (0x0003c9a8) aid_size_cell_vkb_ParamLimits

0x4ac9,	// (0x0003c9a8) aid_size_cell_vkb

0x4f86,	// (0x0003ce65) cell_vkb_candidate_pane

0x0a0e,	// (0x000388ed) bg_popup_fep_shadow_pane_g1

0xcb45,	// (0x00044a24) fep_vkb_bottom_pane_ParamLimits

0xcb45,	// (0x00044a24) fep_vkb_bottom_pane

0x4b98,	// (0x0003ca77) fep_vkb_candidate_pane_ParamLimits

0x4b98,	// (0x0003ca77) fep_vkb_candidate_pane

0xcb71,	// (0x00044a50) fep_vkb_keypad_pane_ParamLimits

0xcb71,	// (0x00044a50) fep_vkb_keypad_pane

0xcb98,	// (0x00044a77) fep_vkb_side_pane_ParamLimits

0xcb98,	// (0x00044a77) fep_vkb_side_pane

0xcbd4,	// (0x00044ab3) fep_vkb_top_pane_ParamLimits

0xcbd4,	// (0x00044ab3) fep_vkb_top_pane

0x4c5f,	// (0x0003cb3e) fep_vkb_top_pane_g1_ParamLimits

0x4c5f,	// (0x0003cb3e) fep_vkb_top_pane_g1

0x4c6e,	// (0x0003cb4d) fep_vkb_top_pane_g2_ParamLimits

0x4c6e,	// (0x0003cb4d) fep_vkb_top_pane_g2

0x4c7d,	// (0x0003cb5c) fep_vkb_top_pane_g3_ParamLimits

0x4c7d,	// (0x0003cb5c) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00047a0d) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00047a0d) fep_vkb_top_pane_g

0x4c9b,	// (0x0003cb7a) fep_vkb_top_text_pane_ParamLimits

0x4c9b,	// (0x0003cb7a) fep_vkb_top_text_pane

0xcc10,	// (0x00044aef) fep_vkb_side_pane_g1_ParamLimits

0xcc10,	// (0x00044aef) fep_vkb_side_pane_g1

0x4cf5,	// (0x0003cbd4) grid_vkb_side_pane_ParamLimits

0x4cf5,	// (0x0003cbd4) grid_vkb_side_pane

0x0a16,	// (0x000388f5) bg_popup_fep_shadow_pane_g2

0x0a1f,	// (0x000388fe) bg_popup_fep_shadow_pane_g3

0x0a27,	// (0x00038906) bg_popup_fep_shadow_pane_g4

0x0a30,	// (0x0003890f) bg_popup_fep_shadow_pane_g5

0x0a3a,	// (0x00038919) bg_popup_fep_shadow_pane_g6

0x0a42,	// (0x00038921) bg_popup_fep_shadow_pane_g7

0xb9e6,	// (0x000438c5) bg_popup_fep_shadow_pane_g8

0x4d54,	// (0x0003cc33) grid_vkb_keypad_number_pane_ParamLimits

0x4d54,	// (0x0003cc33) grid_vkb_keypad_number_pane

0x4d68,	// (0x0003cc47) grid_vkb_keypad_pane_ParamLimits

0x4d68,	// (0x0003cc47) grid_vkb_keypad_pane

0x4d8e,	// (0x0003cc6d) fep_vkb_bottom_pane_g1_ParamLimits

0x4d8e,	// (0x0003cc6d) fep_vkb_bottom_pane_g1

0x4db7,	// (0x0003cc96) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4db7,	// (0x0003cc96) grid_vkb_keypad_bottom_left_pane

0x4dcc,	// (0x0003ccab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4dcc,	// (0x0003ccab) grid_vkb_keypad_bottom_right_pane

0x4de1,	// (0x0003ccc0) fep_vkb_top_text_pane_g1

0xcc57,	// (0x00044b36) fep_vkb_top_text_pane_t1

0xcc69,	// (0x00044b48) cell_vkb_side_pane_ParamLimits

0xcc69,	// (0x00044b48) cell_vkb_side_pane

0x4a12,	// (0x0003c8f1) cell_vkb_side_pane_g1

0x4e50,	// (0x0003cd2f) cell_vkb_keypad_pane_ParamLimits

0x4e50,	// (0x0003cd2f) cell_vkb_keypad_pane

0x4edd,	// (0x0003cdbc) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00047a3a) bg_popup_fep_shadow_pane_g

0x0a54,	// (0x00038933) cell_hwr_side_pane_g1

0x0a54,	// (0x00038933) cell_hwr_side_pane_g2

0x4ee7,	// (0x0003cdc6) cell_vkb_keypad_pane_t1

0xcc7f,	// (0x00044b5e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc7f,	// (0x00044b5e) cell_vkb_keypad_bottom_left_pane

0xcc94,	// (0x00044b73) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc94,	// (0x00044b73) cell_vkb_keypad_bottom_right_pane

0x4a12,	// (0x0003c8f1) cell_vkb_keypad_bottom_left_pane_g1

0x4a12,	// (0x0003c8f1) cell_vkb_keypad_bottom_right_pane_g1

0x4f4b,	// (0x0003ce2a) cell_vkb_keypad_number_pane_ParamLimits

0x4f4b,	// (0x0003ce2a) cell_vkb_keypad_number_pane

0x4f6a,	// (0x0003ce49) cell_vkb_keypad_number_pane_g1

0x4f74,	// (0x0003ce53) cell_vkb_keypad_number_pane_g2

0x4f7d,	// (0x0003ce5c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00047a2c) cell_vkb_keypad_number_pane_g

0x4ee7,	// (0x0003cdc6) cell_vkb_keypad_number_pane_t1

0x4fa7,	// (0x0003ce86) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00047a4d) cell_hwr_side_pane_g

0x4fc0,	// (0x0003ce9f) cell_hwr_side_pane_t1

0x0a5e,	// (0x0003893d) cell_hwr_side_pane_t1_copy1

0x0a6c,	// (0x0003894b) cell_hwr_candidate_pane_g1

0x0a9b,	// (0x0003897a) cell_hwr_candidate_pane_t1

0x4a12,	// (0x0003c8f1) cell_vkb_candidate_pane_g2

0x5004,	// (0x0003cee3) cell_vkb_candidate_pane_t1

0x07f1,	// (0x000386d0) bg_popup_fep_shadow_pane_ParamLimits

0x07f1,	// (0x000386d0) bg_popup_fep_shadow_pane

0x08a8,	// (0x00038787) bg_fep_hwr_top_pane_g4

0x4a97,	// (0x0003c976) bg_hwr_side_pane_g1_ParamLimits

0x4a97,	// (0x0003c976) bg_hwr_side_pane_g1

0xb136,	// (0x00043015) cell_hwr_side_pane_ParamLimits

0xb136,	// (0x00043015) cell_hwr_side_pane

0x0958,	// (0x00038837) fep_hwr_write_pane_g1_ParamLimits

0x0958,	// (0x00038837) fep_hwr_write_pane_g1

0x0965,	// (0x00038844) fep_hwr_write_pane_g2_ParamLimits

0x0965,	// (0x00038844) fep_hwr_write_pane_g2

0x0972,	// (0x00038851) fep_hwr_write_pane_g3_ParamLimits

0x0972,	// (0x00038851) fep_hwr_write_pane_g3

0xb156,	// (0x00043035) fep_hwr_write_pane_g4_ParamLimits

0xb156,	// (0x00043035) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x000479f9) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x000479f9) fep_hwr_write_pane_g

0x08a8,	// (0x00038787) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x08a8,	// (0x00038787) bg_fep_hwr_candidate_pane_g2

0x0995,	// (0x00038874) cell_hwr_candidate_pane_ParamLimits

0x0995,	// (0x00038874) cell_hwr_candidate_pane

0x09e7,	// (0x000388c6) fep_hwr_candidate_pane_g1_ParamLimits

0x4af7,	// (0x0003c9d6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4af7,	// (0x0003c9d6) bg_popup_fep_shadow_pane_cp2

0x4c8d,	// (0x0003cb6c) fep_vkb_top_pane_g4_ParamLimits

0x4c8d,	// (0x0003cb6c) fep_vkb_top_pane_g4

0x4cd3,	// (0x0003cbb2) fep_vkb_side_pane_g2_ParamLimits

0x4cd3,	// (0x0003cbb2) fep_vkb_side_pane_g2

0x9b27,	// (0x00041a06) list_setting_pane_t4_ParamLimits

0x9b27,	// (0x00041a06) list_setting_pane_t4

0x9bbb,	// (0x00041a9a) list_setting_number_pane_t5_ParamLimits

0x9bbb,	// (0x00041a9a) list_setting_number_pane_t5

0x9f10,	// (0x00041def) list_double_heading_pane_cp2_ParamLimits

0x9f10,	// (0x00041def) list_double_heading_pane_cp2

0x5012,	// (0x0003cef1) list_double_heading_pane_g1_cp2_ParamLimits

0x5012,	// (0x0003cef1) list_double_heading_pane_g1_cp2

0x501e,	// (0x0003cefd) list_double_heading_pane_g2_cp2_ParamLimits

0x501e,	// (0x0003cefd) list_double_heading_pane_g2_cp2

0x5032,	// (0x0003cf11) list_double_heading_pane_t1_cp2_ParamLimits

0x5032,	// (0x0003cf11) list_double_heading_pane_t1_cp2

0x5048,	// (0x0003cf27) list_double_heading_pane_t2_cp2_ParamLimits

0x5048,	// (0x0003cf27) list_double_heading_pane_t2_cp2

0x77e8,	// (0x0003f6c7) aid_value_unit2

0xed81,	// (0x00046c60) popup_preview_fixed_window

0x8360,	// (0x0004023f) bg_popup_preview_window_pane_cp02

0x505a,	// (0x0003cf39) list_preview_fixed_pane

0x50a0,	// (0x0003cf7f) list_empty_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_empty_pane_fp

0x50a0,	// (0x0003cf7f) list_single_cale_day_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_cale_day_pane_fp

0x50a0,	// (0x0003cf7f) list_single_graphic_heading_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_graphic_heading_pane_fp

0x50a0,	// (0x0003cf7f) list_single_graphic_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_graphic_pane_fp

0x50a0,	// (0x0003cf7f) list_single_heading_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_heading_pane_fp

0x50a0,	// (0x0003cf7f) list_single_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_pane_fp

0x50b9,	// (0x0003cf98) list_single_pane_fp_g1_ParamLimits

0x50b9,	// (0x0003cf98) list_single_pane_fp_g1

0xde9f,	// (0x00045d7e) list_single_pane_fp_g2_ParamLimits

0xde9f,	// (0x00045d7e) list_single_pane_fp_g2

0xdeab,	// (0x00045d8a) list_single_pane_fp_g3_ParamLimits

0xdeab,	// (0x00045d8a) list_single_pane_fp_g3

0x50c5,	// (0x0003cfa4) list_single_pane_fp_g4_ParamLimits

0x50c5,	// (0x0003cfa4) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00047a60) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00047a60) list_single_pane_fp_g

0xdebf,	// (0x00045d9e) list_single_pane_fp_t1_ParamLimits

0xdebf,	// (0x00045d9e) list_single_pane_fp_t1

0xded6,	// (0x00045db5) list_single_graphic_pane_fp_g1_ParamLimits

0xded6,	// (0x00045db5) list_single_graphic_pane_fp_g1

0x50b9,	// (0x0003cf98) list_single_graphic_pane_fp_g2_ParamLimits

0x50b9,	// (0x0003cf98) list_single_graphic_pane_fp_g2

0xde9f,	// (0x00045d7e) list_single_graphic_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d7e) list_single_graphic_pane_fp_g3

0xdeab,	// (0x00045d8a) list_single_graphic_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d8a) list_single_graphic_pane_fp_g4

0x50c5,	// (0x0003cfa4) list_single_graphic_pane_fp_g5_ParamLimits

0x50c5,	// (0x0003cfa4) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047a69) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047a69) list_single_graphic_pane_fp_g

0xdee2,	// (0x00045dc1) list_single_graphic_pane_fp_t1_ParamLimits

0xdee2,	// (0x00045dc1) list_single_graphic_pane_fp_t1

0xded6,	// (0x00045db5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xded6,	// (0x00045db5) list_single_graphic_heading_pane_fp_g1

0x50b9,	// (0x0003cf98) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x50b9,	// (0x0003cf98) list_single_graphic_heading_pane_fp_g2

0xde9f,	// (0x00045d7e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d7e) list_single_graphic_heading_pane_fp_g3

0xdeab,	// (0x00045d8a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d8a) list_single_graphic_heading_pane_fp_g4

0x50c5,	// (0x0003cfa4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x50c5,	// (0x0003cfa4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047a69) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047a69) list_single_graphic_heading_pane_fp_g

0xdef8,	// (0x00045dd7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdef8,	// (0x00045dd7) list_single_graphic_heading_pane_fp_t1

0xdf0e,	// (0x00045ded) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdf0e,	// (0x00045ded) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00047a74) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00047a74) list_single_graphic_heading_pane_fp_t

0xdf20,	// (0x00045dff) list_single_cale_day_pane_fp_g1_ParamLimits

0xdf20,	// (0x00045dff) list_single_cale_day_pane_fp_g1

0x50d1,	// (0x0003cfb0) list_single_cale_day_pane_fp_g2_ParamLimits

0x50d1,	// (0x0003cfb0) list_single_cale_day_pane_fp_g2

0xdf58,	// (0x00045e37) list_single_cale_day_pane_fp_g3_ParamLimits

0xdf58,	// (0x00045e37) list_single_cale_day_pane_fp_g3

0xdf80,	// (0x00045e5f) list_single_cale_day_pane_fp_g4_ParamLimits

0xdf80,	// (0x00045e5f) list_single_cale_day_pane_fp_g4

0xdfa4,	// (0x00045e83) list_single_cale_day_pane_fp_g5_ParamLimits

0xdfa4,	// (0x00045e83) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00047a79) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00047a79) list_single_cale_day_pane_fp_g

0xdfc8,	// (0x00045ea7) list_single_cale_day_pane_fp_t1_ParamLimits

0xdfc8,	// (0x00045ea7) list_single_cale_day_pane_fp_t1

0xdfee,	// (0x00045ecd) list_single_cale_day_pane_fp_t2_ParamLimits

0xdfee,	// (0x00045ecd) list_single_cale_day_pane_fp_t2

0xe007,	// (0x00045ee6) list_single_cale_day_pane_fp_t3_ParamLimits

0xe007,	// (0x00045ee6) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00047a84) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00047a84) list_single_cale_day_pane_fp_t

0x50b9,	// (0x0003cf98) list_empty_pane_fp_g1_ParamLimits

0x50b9,	// (0x0003cf98) list_empty_pane_fp_g1

0xe020,	// (0x00045eff) list_empty_pane_fp_t1

0xe02e,	// (0x00045f0d) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00047a8b) list_empty_pane_fp_t

0x50b9,	// (0x0003cf98) list_single_heading_pane_fp_g1_ParamLimits

0x50b9,	// (0x0003cf98) list_single_heading_pane_fp_g1

0xde9f,	// (0x00045d7e) list_single_heading_pane_fp_g2_ParamLimits

0xde9f,	// (0x00045d7e) list_single_heading_pane_fp_g2

0xdeab,	// (0x00045d8a) list_single_heading_pane_fp_g3_ParamLimits

0xdeab,	// (0x00045d8a) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00047a90) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00047a90) list_single_heading_pane_fp_g

0xe03c,	// (0x00045f1b) list_single_heading_pane_fp_t1_ParamLimits

0xe03c,	// (0x00045f1b) list_single_heading_pane_fp_t1

0xe04e,	// (0x00045f2d) list_single_heading_pane_fp_t2_ParamLimits

0xe04e,	// (0x00045f2d) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00047a97) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00047a97) list_single_heading_pane_fp_t

0xbad9,	// (0x000439b8) aid_size_cell_fast

0x8335,	// (0x00040214) soft_indicator_pane_cp1_t1

0xbb16,	// (0x000439f5) cell_app_pane_cp2_ParamLimits

0xbb16,	// (0x000439f5) cell_app_pane_cp2

0x0813,	// (0x000386f2) fep_hwr_candidate_drop_down_list_pane

0x0a01,	// (0x000388e0) fep_hwr_candidate_pane_g3_ParamLimits

0x0a01,	// (0x000388e0) fep_hwr_candidate_pane_g3

0xcb26,	// (0x00044a05) fep_hwr_candidate_pane_g4_ParamLimits

0xcb26,	// (0x00044a05) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00047a06) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00047a06) fep_hwr_candidate_pane_g

0x4b87,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4b87,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_pane

0x4faf,	// (0x0003ce8e) fep_vkb_candidate_pane_g3

0x4fb7,	// (0x0003ce96) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00047a33) fep_vkb_candidate_pane_g

0x0a6c,	// (0x0003894b) cell_hwr_candidate_pane_g1_ParamLimits

0x0a7a,	// (0x00038959) cell_hwr_candidate_pane_g3_ParamLimits

0x0a7a,	// (0x00038959) cell_hwr_candidate_pane_g3

0x5886,	// (0x0003d765) cell_hwr_candidate_pane_g4_ParamLimits

0x5886,	// (0x0003d765) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00047a52) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00047a52) cell_hwr_candidate_pane_g

0x4fce,	// (0x0003cead) cell_vkb_candidate_pane_g3_ParamLimits

0x4fce,	// (0x0003cead) cell_vkb_candidate_pane_g3

0x4fe9,	// (0x0003cec8) cell_vkb_candidate_pane_g4_ParamLimits

0x4fe9,	// (0x0003cec8) cell_vkb_candidate_pane_g4

0x50dd,	// (0x0003cfbc) cell_app_pane_cp2_g1_ParamLimits

0x50dd,	// (0x0003cfbc) cell_app_pane_cp2_g1

0x50fb,	// (0x0003cfda) cell_app_pane_cp2_g2_ParamLimits

0x50fb,	// (0x0003cfda) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00047a9c) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00047a9c) cell_app_pane_cp2_g

0x5107,	// (0x0003cfe6) cell_app_pane_cp2_t1_ParamLimits

0x5107,	// (0x0003cfe6) cell_app_pane_cp2_t1

0xb973,	// (0x00043852) grid_highlight_pane_cp1_ParamLimits

0xb973,	// (0x00043852) grid_highlight_pane_cp1

0x0ab9,	// (0x00038998) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ab9,	// (0x00038998) cell_hwr_candidate_pane_cp1

0x0a6c,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g1

0x0add,	// (0x000389bc) fep_hwr_candidate_drop_down_list_pane_g2

0x0aea,	// (0x000389c9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00047aa1) fep_hwr_candidate_drop_down_list_pane_g

0x0af7,	// (0x000389d6) fep_hwr_candidate_drop_down_list_scroll_pane

0x0b00,	// (0x000389df) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0b00,	// (0x000389df) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0b0d,	// (0x000389ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0b0d,	// (0x000389ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0b1a,	// (0x000389f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0b1a,	// (0x000389f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0b27,	// (0x00038a06) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0b27,	// (0x00038a06) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0b42,	// (0x00038a21) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0b42,	// (0x00038a21) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0b5d,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0b5d,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0b78,	// (0x00038a57) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0b78,	// (0x00038a57) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0b93,	// (0x00038a72) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0b93,	// (0x00038a72) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00047aa8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00047aa8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5119,	// (0x0003cff8) cell_vkb_candidate_pane_cp1_ParamLimits

0x5119,	// (0x0003cff8) cell_vkb_candidate_pane_cp1

0x4c8d,	// (0x0003cb6c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4c8d,	// (0x0003cb6c) fep_vkb_candidate_drop_down_list_pane_g1

0x513f,	// (0x0003d01e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x513f,	// (0x0003d01e) fep_vkb_candidate_drop_down_list_pane_g2

0x514c,	// (0x0003d02b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x514c,	// (0x0003d02b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00047ab9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00047ab9) fep_vkb_candidate_drop_down_list_pane_g

0x5159,	// (0x0003d038) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5159,	// (0x0003d038) fep_vkb_candidate_drop_down_list_scroll_pane

0x5166,	// (0x0003d045) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5166,	// (0x0003d045) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5173,	// (0x0003d052) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5173,	// (0x0003d052) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x517f,	// (0x0003d05e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x517f,	// (0x0003d05e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x518b,	// (0x0003d06a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x518b,	// (0x0003d06a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x51ac,	// (0x0003d08b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x51ac,	// (0x0003d08b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x51cd,	// (0x0003d0ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x51cd,	// (0x0003d0ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x51ee,	// (0x0003d0cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x51ee,	// (0x0003d0cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x520f,	// (0x0003d0ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x520f,	// (0x0003d0ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00047ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00047ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x93db,	// (0x000412ba) title_pane_g1_ParamLimits

0x93ee,	// (0x000412cd) title_pane_g2_ParamLimits

0xf54e,	// (0x0004742d) title_pane_g_ParamLimits

0xbe45,	// (0x00043d24) aid_call2_pane

0xbe4d,	// (0x00043d2c) aid_call_pane

0xbe55,	// (0x00043d34) popup_clock_analogue_window_g1

0xbe55,	// (0x00043d34) popup_clock_analogue_window_g2

0xf04b,	// (0x00046f2a) popup_clock_analogue_window_g3

0xf054,	// (0x00046f33) popup_clock_analogue_window_g4

0x77fa,	// (0x0003f6d9) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000475d7) popup_clock_analogue_window_g

0xf05c,	// (0x00046f3b) popup_clock_analogue_window_t1

0xf06a,	// (0x00046f49) clock_digital_number_pane_ParamLimits

0xf06a,	// (0x00046f49) clock_digital_number_pane

0xf076,	// (0x00046f55) clock_digital_number_pane_cp02_ParamLimits

0xf076,	// (0x00046f55) clock_digital_number_pane_cp02

0xf082,	// (0x00046f61) clock_digital_number_pane_cp03_ParamLimits

0xf082,	// (0x00046f61) clock_digital_number_pane_cp03

0xf08e,	// (0x00046f6d) clock_digital_number_pane_cp04_ParamLimits

0xf08e,	// (0x00046f6d) clock_digital_number_pane_cp04

0xf09a,	// (0x00046f79) clock_digital_separator_pane_ParamLimits

0xf09a,	// (0x00046f79) clock_digital_separator_pane

0xf0a6,	// (0x00046f85) popup_clock_digital_window_t1_ParamLimits

0xf0a6,	// (0x00046f85) popup_clock_digital_window_t1

0x77fa,	// (0x0003f6d9) clock_digital_number_pane_g1

0x77fa,	// (0x0003f6d9) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x000475e2) clock_digital_number_pane_g

0x77fa,	// (0x0003f6d9) clock_digital_separator_pane_g1

0x77fa,	// (0x0003f6d9) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x000475e2) clock_digital_separator_pane_g

0xab8d,	// (0x00042a6c) aid_fill_nsta_ParamLimits

0xacc5,	// (0x00042ba4) indicator_nsta_pane_ParamLimits

0x21a5,	// (0x0003a084) popup_clock_analogue_window

0x21a5,	// (0x0003a084) popup_clock_digital_window

0xc943,	// (0x00044822) grid_indicator_nsta_pane_ParamLimits

0x4445,	// (0x0003c324) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00047986) clock_nsta_pane_t

0xefac,	// (0x00046e8b) aid_size_max_handle

0x9e83,	// (0x00041d62) aid_size_min_handle

0xf333,	// (0x00047212) editor_scroll_pane

0x522a,	// (0x0003d109) ex_editor_pane

0xba9f,	// (0x0004397e) scroll_pane_cp13

0x87e1,	// (0x000406c0) scroll_pane_cp14

0xbe84,	// (0x00043d63) scroll_pane_cp36

0x9f23,	// (0x00041e02) list_single_graphic_hl_pane_cp2_ParamLimits

0x9f23,	// (0x00041e02) list_single_graphic_hl_pane_cp2

0xc7cb,	// (0x000446aa) list_single_graphic_hl_pane_ParamLimits

0xc7cb,	// (0x000446aa) list_single_graphic_hl_pane

0xe064,	// (0x00045f43) aid_size_min_hl_cp1

0x5232,	// (0x0003d111) list_highlight_pane_cp34_ParamLimits

0x5232,	// (0x0003d111) list_highlight_pane_cp34

0x5243,	// (0x0003d122) list_single_graphic_hl_pane_g1_ParamLimits

0x5243,	// (0x0003d122) list_single_graphic_hl_pane_g1

0xb16b,	// (0x0004304a) list_single_graphic_hl_pane_g2_ParamLimits

0xb16b,	// (0x0004304a) list_single_graphic_hl_pane_g2

0xb16b,	// (0x0004304a) list_single_graphic_hl_pane_g3_ParamLimits

0xb16b,	// (0x0004304a) list_single_graphic_hl_pane_g3

0xe06d,	// (0x00045f4c) list_single_graphic_hl_pane_g4_ParamLimits

0xe06d,	// (0x00045f4c) list_single_graphic_hl_pane_g4

0xb177,	// (0x00043056) list_single_graphic_hl_pane_g5_ParamLimits

0xb177,	// (0x00043056) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00047ad1) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00047ad1) list_single_graphic_hl_pane_g

0xb18b,	// (0x0004306a) list_single_graphic_hl_pane_t1_ParamLimits

0xb18b,	// (0x0004306a) list_single_graphic_hl_pane_t1

0x5250,	// (0x0003d12f) aid_size_min_hl_cp2

0x5259,	// (0x0003d138) list_highlight_pane_cp34_cp2_ParamLimits

0x5259,	// (0x0003d138) list_highlight_pane_cp34_cp2

0x5243,	// (0x0003d122) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5243,	// (0x0003d122) list_single_graphic_hl_pane_g1_cp2

0x5266,	// (0x0003d145) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5266,	// (0x0003d145) list_single_graphic_hl_pane_g2_cp2

0xccaf,	// (0x00044b8e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xccaf,	// (0x00044b8e) list_single_graphic_hl_pane_g3_cp2

0xccbd,	// (0x00044b9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xccbd,	// (0x00044b9c) list_single_graphic_hl_pane_g4_cp2

0x5280,	// (0x0003d15f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5280,	// (0x0003d15f) list_single_graphic_hl_pane_g5_cp2

0xa2f0,	// (0x000421cf) control_pane_g4_ParamLimits

0xa2f0,	// (0x000421cf) control_pane_g4

0x0144,	// (0x00038023) bg_popup_sub_pane_cp10_ParamLimits

0x4a1c,	// (0x0003c8fb) list_choice_list_pane_ParamLimits

0x4a2b,	// (0x0003c90a) scroll_pane_cp23

0x8360,	// (0x0004023f) bg_popup_preview_window_pane_cp02_ParamLimits

0x505a,	// (0x0003cf39) list_preview_fixed_pane_ParamLimits

0x5070,	// (0x0003cf4f) list_preview_fixed_pane_cp_ParamLimits

0x5070,	// (0x0003cf4f) list_preview_fixed_pane_cp

0x507c,	// (0x0003cf5b) popup_preview_fixed_window_g1_ParamLimits

0x507c,	// (0x0003cf5b) popup_preview_fixed_window_g1

0x5088,	// (0x0003cf67) popup_preview_fixed_window_g2_ParamLimits

0x5088,	// (0x0003cf67) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00047a59) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00047a59) popup_preview_fixed_window_g

0xef1e,	// (0x00046dfd) aid_navi_side_left_pane_ParamLimits

0xef33,	// (0x00046e12) aid_navi_side_right_pane_ParamLimits

0xef4b,	// (0x00046e2a) navi_icon_pane_stacon_ParamLimits

0xef5f,	// (0x00046e3e) navi_navi_pane_stacon_ParamLimits

0xef4b,	// (0x00046e2a) navi_text_pane_stacon_ParamLimits

0x77f0,	// (0x0003f6cf) main_text_info_pane

0x52aa,	// (0x0003d189) listscroll_text_info_pane

0x52b2,	// (0x0003d191) list_text_info_pane_ParamLimits

0x52b2,	// (0x0003d191) list_text_info_pane

0x52c1,	// (0x0003d1a0) scroll_pane_cp24_ParamLimits

0x52c1,	// (0x0003d1a0) scroll_pane_cp24

0xccc9,	// (0x00044ba8) list_text_info_pane_t1_ParamLimits

0xccc9,	// (0x00044ba8) list_text_info_pane_t1

0xa486,	// (0x00042365) popup_fast_swap2_window_ParamLimits

0xa486,	// (0x00042365) popup_fast_swap2_window

0x5304,	// (0x0003d1e3) aid_size_cell_fast2

0x77f0,	// (0x0003f6cf) bg_popup_window_pane_cp17

0x2802,	// (0x0003a6e1) heading_pane_cp2

0x8566,	// (0x00040445) listscroll_fast2_pane

0x530e,	// (0x0003d1ed) grid_fast2_pane

0x5318,	// (0x0003d1f7) listscroll_fast2_pane_g1

0x5322,	// (0x0003d201) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00047adc) listscroll_fast2_pane_g

0xba9f,	// (0x0004397e) scroll_pane_cp26

0x532c,	// (0x0003d20b) cell_fast2_pane_ParamLimits

0x532c,	// (0x0003d20b) cell_fast2_pane

0x5343,	// (0x0003d222) cell_fast2_pane_g1

0x534c,	// (0x0003d22b) cell_fast2_pane_g2

0x5355,	// (0x0003d234) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00047ae1) cell_fast2_pane_g

0x85a8,	// (0x00040487) grid_highlight_pane_cp9

0x85bd,	// (0x0004049c) main_eswt_pane_ParamLimits

0x85bd,	// (0x0004049c) main_eswt_pane

0x52d6,	// (0x0003d1b5) list_single_text_info_pane

0x535d,	// (0x0003d23c) eswt_ctrl_button_pane

0x535d,	// (0x0003d23c) eswt_ctrl_canvas_pane

0x5365,	// (0x0003d244) eswt_ctrl_combo_pane

0x535d,	// (0x0003d23c) eswt_ctrl_default_pane

0x535d,	// (0x0003d23c) eswt_ctrl_label_pane

0x536d,	// (0x0003d24c) eswt_ctrl_wait_pane

0x5375,	// (0x0003d254) eswt_shell_pane

0x77f0,	// (0x0003f6cf) listscroll_eswt_app_pane

0x5395,	// (0x0003d274) popup_eswt_tasktip_window_ParamLimits

0x5395,	// (0x0003d274) popup_eswt_tasktip_window

0x2442,	// (0x0003a321) bg_popup_window_pane_cp18

0x53a6,	// (0x0003d285) eswt_control_pane_g1_ParamLimits

0x53a6,	// (0x0003d285) eswt_control_pane_g1

0x53b3,	// (0x0003d292) eswt_control_pane_g2_ParamLimits

0x53b3,	// (0x0003d292) eswt_control_pane_g2

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_ParamLimits

0x53c0,	// (0x0003d29f) eswt_control_pane_g3

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_ParamLimits

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00047ae8) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00047ae8) eswt_control_pane_g

0xb973,	// (0x00043852) bg_button_pane_ParamLimits

0xb973,	// (0x00043852) bg_button_pane

0x85bd,	// (0x0004049c) common_borders_pane_copy2_ParamLimits

0x85bd,	// (0x0004049c) common_borders_pane_copy2

0x53da,	// (0x0003d2b9) control_button_pane_g1_ParamLimits

0x53da,	// (0x0003d2b9) control_button_pane_g1

0x53e6,	// (0x0003d2c5) control_button_pane_g2_ParamLimits

0x53e6,	// (0x0003d2c5) control_button_pane_g2

0x53f2,	// (0x0003d2d1) control_button_pane_g3_ParamLimits

0x53f2,	// (0x0003d2d1) control_button_pane_g3

0x0002,

0xfc12,	// (0x00047af1) control_button_pane_g_ParamLimits

0xfc12,	// (0x00047af1) control_button_pane_g

0x5406,	// (0x0003d2e5) control_button_pane_t1

0x5414,	// (0x0003d2f3) control_button_pane_t2

0x0001,

0xfc19,	// (0x00047af8) control_button_pane_t

0x23ce,	// (0x0003a2ad) bg_button_pane_g1

0x23de,	// (0x0003a2bd) bg_button_pane_g2

0x23d6,	// (0x0003a2b5) bg_button_pane_g3

0x23ee,	// (0x0003a2cd) bg_button_pane_g4

0x23e6,	// (0x0003a2c5) bg_button_pane_g5

0x23f6,	// (0x0003a2d5) bg_button_pane_g6

0x23fe,	// (0x0003a2dd) bg_button_pane_g7

0x240e,	// (0x0003a2ed) bg_button_pane_g8

0x2406,	// (0x0003a2e5) bg_button_pane_g9

0x0008,

0xf861,	// (0x00047740) bg_button_pane_g

0x49d7,	// (0x0003c8b6) common_borders_pane_ParamLimits

0x49d7,	// (0x0003c8b6) common_borders_pane

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy1_ParamLimits

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy1

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy1_ParamLimits

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy1

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy1_ParamLimits

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy1

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy1_ParamLimits

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy1

0x4a12,	// (0x0003c8f1) bg_eswt_ctrl_canvas_pane_g1

0x49d7,	// (0x0003c8b6) common_borders_pane_cp2_ParamLimits

0x49d7,	// (0x0003c8b6) common_borders_pane_cp2

0x49d7,	// (0x0003c8b6) common_borders_pane_cp3_ParamLimits

0x49d7,	// (0x0003c8b6) common_borders_pane_cp3

0x5422,	// (0x0003d301) separator_horizontal_pane

0x542a,	// (0x0003d309) separator_vertical_pane

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy2_ParamLimits

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy2

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy2_ParamLimits

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy2

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy2_ParamLimits

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy2

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy2_ParamLimits

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy2

0x77f0,	// (0x0003f6cf) common_borders_pane_cp4

0x5433,	// (0x0003d312) separator_horizontal_pane_g1

0x543c,	// (0x0003d31b) separator_horizontal_pane_g2

0x5445,	// (0x0003d324) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00047afd) separator_horizontal_pane_g

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy3_ParamLimits

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy3

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy3_ParamLimits

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy3

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy3_ParamLimits

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy3

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy3_ParamLimits

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy3

0x77f0,	// (0x0003f6cf) common_borders_pane_cp5

0x544e,	// (0x0003d32d) separator_vertical_pane_g1

0x5457,	// (0x0003d336) separator_vertical_pane_g2

0x5460,	// (0x0003d33f) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00047b04) separator_vertical_pane_g

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy4_ParamLimits

0x53a6,	// (0x0003d285) eswt_control_pane_g1_copy4

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy4_ParamLimits

0x53b3,	// (0x0003d292) eswt_control_pane_g2_copy4

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy4_ParamLimits

0x53c0,	// (0x0003d29f) eswt_control_pane_g3_copy4

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy4_ParamLimits

0x53cd,	// (0x0003d2ac) eswt_control_pane_g4_copy4

0xcceb,	// (0x00044bca) eswt_ctrl_combo_button_pane

0xccf3,	// (0x00044bd2) eswt_ctrl_input_pane

0xccfb,	// (0x00044bda) popup_choice_list_window_cp70

0xcd03,	// (0x00044be2) eswt_ctrl_input_pane_t1

0x77f0,	// (0x0003f6cf) input_focus_pane_cp70

0x49d7,	// (0x0003c8b6) bg_button_pane_cp70_ParamLimits

0x49d7,	// (0x0003c8b6) bg_button_pane_cp70

0xcd11,	// (0x00044bf0) eswt_ctrl_combo_button_pane_g1

0x5497,	// (0x0003d376) wait_bar_pane_cp70

0x2442,	// (0x0003a321) bg_popup_window_pane_cp70_ParamLimits

0x2442,	// (0x0003a321) bg_popup_window_pane_cp70

0x549f,	// (0x0003d37e) popup_eswt_tasktip_window_t1

0x54b5,	// (0x0003d394) wait_bar_pane_cp71_ParamLimits

0x54b5,	// (0x0003d394) wait_bar_pane_cp71

0x54c1,	// (0x0003d3a0) grid_eswt_app_pane

0xbce4,	// (0x00043bc3) scroll_pane_cp70

0xcd19,	// (0x00044bf8) cell_eswt_app_pane_ParamLimits

0xcd19,	// (0x00044bf8) cell_eswt_app_pane

0xcd4b,	// (0x00044c2a) cell_eswt_app_pane_g1_ParamLimits

0xcd4b,	// (0x00044c2a) cell_eswt_app_pane_g1

0xcd7a,	// (0x00044c59) cell_eswt_app_pane_g2_ParamLimits

0xcd7a,	// (0x00044c59) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00047b0b) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00047b0b) cell_eswt_app_pane_g

0xcda3,	// (0x00044c82) cell_eswt_app_pane_t1_ParamLimits

0xcda3,	// (0x00044c82) cell_eswt_app_pane_t1

0x5586,	// (0x0003d465) grid_highlight_pane_cp70_ParamLimits

0x5586,	// (0x0003d465) grid_highlight_pane_cp70

0xc1bd,	// (0x0004409c) set_content_pane_g1

0xa286,	// (0x00042165) status_small_volume_pane

0x0be4,	// (0x00038ac3) status_small_volume_pane_g1

0x0bec,	// (0x00038acb) volume_small2_pane

0x0bf5,	// (0x00038ad4) volume_small2_pane_g1

0x0bfe,	// (0x00038add) volume_small2_pane_g2

0x0c07,	// (0x00038ae6) volume_small2_pane_g3

0x0c10,	// (0x00038aef) volume_small2_pane_g4

0x0c19,	// (0x00038af8) volume_small2_pane_g5

0x0c22,	// (0x00038b01) volume_small2_pane_g6

0x0c2b,	// (0x00038b0a) volume_small2_pane_g7

0x0c34,	// (0x00038b13) volume_small2_pane_g8

0x0c3d,	// (0x00038b1c) volume_small2_pane_g9

0x0c46,	// (0x00038b25) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00047b10) volume_small2_pane_g

0x4de1,	// (0x0003ccc0) fep_vkb_top_text_pane_g1_ParamLimits

0xcc57,	// (0x00044b36) fep_vkb_top_text_pane_t1_ParamLimits

0x5094,	// (0x0003cf73) popup_preview_fixed_window_g3_ParamLimits

0x5094,	// (0x0003cf73) popup_preview_fixed_window_g3

0xab20,	// (0x000429ff) popup_toolbar_trans_pane

0xc61b,	// (0x000444fa) aid_height_set_list_ParamLimits

0x3797,	// (0x0003b676) aid_size_parent_ParamLimits

0x0144,	// (0x00038023) list_highlight_pane_cp2_ParamLimits

0xc1bd,	// (0x0004409c) set_content_pane_g1_ParamLimits

0xc7df,	// (0x000446be) list_single_image_pane_ParamLimits

0xc7df,	// (0x000446be) list_single_image_pane

0xcdd5,	// (0x00044cb4) aid_size_cell_image_ParamLimits

0xcdd5,	// (0x00044cb4) aid_size_cell_image

0xcde2,	// (0x00044cc1) grid_single_image_pane_ParamLimits

0xcde2,	// (0x00044cc1) grid_single_image_pane

0xb981,	// (0x00043860) list_single_image_pane_g1_ParamLimits

0xb981,	// (0x00043860) list_single_image_pane_g1

0xb98d,	// (0x0004386c) list_single_image_pane_g2_ParamLimits

0xb98d,	// (0x0004386c) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00047b25) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00047b25) list_single_image_pane_g

0x55ad,	// (0x0003d48c) list_single_image_pane_t1_ParamLimits

0x55ad,	// (0x0003d48c) list_single_image_pane_t1

0xcdf0,	// (0x00044ccf) cell_image_list_pane_ParamLimits

0xcdf0,	// (0x00044ccf) cell_image_list_pane

0xce04,	// (0x00044ce3) cell_image_list_pane_g1

0xce0d,	// (0x00044cec) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00047b2a) cell_image_list_pane_g

0x55eb,	// (0x0003d4ca) aid_size_cell_tb_trans_pane

0xb973,	// (0x00043852) bg_tb_trans_pane

0x55fd,	// (0x0003d4dc) grid_tb_trans_pane

0x23ce,	// (0x0003a2ad) bg_tb_trans_pane_g1

0x23de,	// (0x0003a2bd) bg_tb_trans_pane_g2

0x23d6,	// (0x0003a2b5) bg_tb_trans_pane_g3

0x23ee,	// (0x0003a2cd) bg_tb_trans_pane_g4

0x23e6,	// (0x0003a2c5) bg_tb_trans_pane_g5

0x240e,	// (0x0003a2ed) bg_tb_trans_pane_g6

0x2406,	// (0x0003a2e5) bg_tb_trans_pane_g7

0x23f6,	// (0x0003a2d5) bg_tb_trans_pane_g8

0x23fe,	// (0x0003a2dd) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00047b2f) bg_tb_trans_pane_g

0x5611,	// (0x0003d4f0) cell_toolbar_trans_pane_ParamLimits

0x5611,	// (0x0003d4f0) cell_toolbar_trans_pane

0x4a12,	// (0x0003c8f1) cell_toolbar_trans_pane_g1

0xca2f,	// (0x0004490e) list_form2_midp_pane_t1

0xca3d,	// (0x0004491c) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x000479cc) list_form2_midp_pane_t

0x4652,	// (0x0003c531) scroll_pane_cp51_ParamLimits

0x4819,	// (0x0003c6f8) form2_midp_wait_pane_g1

0x4822,	// (0x0003c701) form2_midp_wait_pane_g2

0x482b,	// (0x0003c70a) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x000479e1) form2_midp_wait_pane_g

0x821f,	// (0x000400fe) list_highlight_pane_cp21_ParamLimits

0x486f,	// (0x0003c74e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x487e,	// (0x0003c75d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdb51,	// (0x00045a30) list_single_2graphic_im_pane_ParamLimits

0xdb51,	// (0x00045a30) list_single_2graphic_im_pane

0xce16,	// (0x00044cf5) list_single_2graphic_im_pane_g1_ParamLimits

0xce16,	// (0x00044cf5) list_single_2graphic_im_pane_g1

0xce27,	// (0x00044d06) list_single_2graphic_im_pane_g2_ParamLimits

0xce27,	// (0x00044d06) list_single_2graphic_im_pane_g2

0xce33,	// (0x00044d12) list_single_2graphic_im_pane_g3_ParamLimits

0xce33,	// (0x00044d12) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x00047b42) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x00047b42) list_single_2graphic_im_pane_g

0xce47,	// (0x00044d26) list_single_2graphic_im_pane_t1_ParamLimits

0xce47,	// (0x00044d26) list_single_2graphic_im_pane_t1

0x50a0,	// (0x0003cf7f) list_single_graphic_2heading_pane_fp_ParamLimits

0x50a0,	// (0x0003cf7f) list_single_graphic_2heading_pane_fp

0xded6,	// (0x00045db5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xded6,	// (0x00045db5) list_single_graphic_2heading_pane_fp_g1

0x50b9,	// (0x0003cf98) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x50b9,	// (0x0003cf98) list_single_graphic_2heading_pane_fp_g2

0xde9f,	// (0x00045d7e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d7e) list_single_graphic_2heading_pane_fp_g3

0xdeab,	// (0x00045d8a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d8a) list_single_graphic_2heading_pane_fp_g4

0x50c5,	// (0x0003cfa4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x50c5,	// (0x0003cfa4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047a69) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047a69) list_single_graphic_2heading_pane_fp_g

0xe079,	// (0x00045f58) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe079,	// (0x00045f58) list_single_graphic_2heading_pane_fp_t1

0xdf0e,	// (0x00045ded) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdf0e,	// (0x00045ded) list_single_graphic_2heading_pane_fp_t2

0xe08f,	// (0x00045f6e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe08f,	// (0x00045f6e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00047b4b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00047b4b) list_single_graphic_2heading_pane_fp_t

0x4aa3,	// (0x0003c982) fep_hwr_write_pane_g5_ParamLimits

0x4aa3,	// (0x0003c982) fep_hwr_write_pane_g5

0x4aaf,	// (0x0003c98e) fep_hwr_write_pane_g6_ParamLimits

0x4aaf,	// (0x0003c98e) fep_hwr_write_pane_g6

0x5375,	// (0x0003d254) eswt_shell_pane_ParamLimits

0x2442,	// (0x0003a321) bg_popup_window_pane_cp18_ParamLimits

0x36dd,	// (0x0003b5bc) heading_pane_cp70

0x549f,	// (0x0003d37e) popup_eswt_tasktip_window_t1_ParamLimits

0xabea,	// (0x00042ac9) aid_touch_tab_arrow_left

0xac00,	// (0x00042adf) aid_touch_tab_arrow_right

0x780e,	// (0x0003f6ed) title_pane_g3_ParamLimits

0x780e,	// (0x0003f6ed) title_pane_g3

0xb932,	// (0x00043811) set_value_pane_g1

0xab20,	// (0x000429ff) popup_toolbar_trans_pane_ParamLimits

0x55eb,	// (0x0003d4ca) aid_size_cell_tb_trans_pane_ParamLimits

0xb973,	// (0x00043852) bg_tb_trans_pane_ParamLimits

0x55fd,	// (0x0003d4dc) grid_tb_trans_pane_ParamLimits

0x8360,	// (0x0004023f) cont_note_pane_ParamLimits

0x8360,	// (0x0004023f) cont_note_pane

0x85bd,	// (0x0004049c) cont_snote2_single_text_pane_ParamLimits

0x85bd,	// (0x0004049c) cont_snote2_single_text_pane

0x85bd,	// (0x0004049c) cont_snote2_single_graphic_pane_ParamLimits

0x85bd,	// (0x0004049c) cont_snote2_single_graphic_pane

0x2a1e,	// (0x0003a8fd) cont_note_wait_pane_ParamLimits

0x2a1e,	// (0x0003a8fd) cont_note_wait_pane

0x2a1e,	// (0x0003a8fd) cont_note_image_pane_ParamLimits

0x2a1e,	// (0x0003a8fd) cont_note_image_pane

0x56a5,	// (0x0003d584) popup_note2_window_g1_ParamLimits

0x56a5,	// (0x0003d584) popup_note2_window_g1

0x56d6,	// (0x0003d5b5) popup_note2_window_t1_ParamLimits

0x56d6,	// (0x0003d5b5) popup_note2_window_t1

0x571b,	// (0x0003d5fa) popup_note2_window_t2_ParamLimits

0x571b,	// (0x0003d5fa) popup_note2_window_t2

0x5760,	// (0x0003d63f) popup_note2_window_t3_ParamLimits

0x5760,	// (0x0003d63f) popup_note2_window_t3

0x57a5,	// (0x0003d684) popup_note2_window_t4_ParamLimits

0x57a5,	// (0x0003d684) popup_note2_window_t4

0x83e4,	// (0x000402c3) popup_note2_window_t5_ParamLimits

0x83e4,	// (0x000402c3) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00047b57) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00047b57) popup_note2_window_t

0x57d4,	// (0x0003d6b3) popup_note2_image_window_g1_ParamLimits

0x57d4,	// (0x0003d6b3) popup_note2_image_window_g1

0x57e0,	// (0x0003d6bf) popup_note2_image_window_g2_ParamLimits

0x57e0,	// (0x0003d6bf) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00047b62) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00047b62) popup_note2_image_window_g

0x57f2,	// (0x0003d6d1) popup_note2_image_window_t1_ParamLimits

0x57f2,	// (0x0003d6d1) popup_note2_image_window_t1

0x580a,	// (0x0003d6e9) popup_note2_image_window_t2_ParamLimits

0x580a,	// (0x0003d6e9) popup_note2_image_window_t2

0x5822,	// (0x0003d701) popup_note2_image_window_t3_ParamLimits

0x5822,	// (0x0003d701) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00047b67) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00047b67) popup_note2_image_window_t

0x2a2c,	// (0x0003a90b) popup_note2_wait_window_g1_ParamLimits

0x2a2c,	// (0x0003a90b) popup_note2_wait_window_g1

0x583e,	// (0x0003d71d) popup_note2_wait_window_g2_ParamLimits

0x583e,	// (0x0003d71d) popup_note2_wait_window_g2

0x2a44,	// (0x0003a923) popup_note2_wait_window_g3_ParamLimits

0x2a44,	// (0x0003a923) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00047b6e) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00047b6e) popup_note2_wait_window_g

0x584a,	// (0x0003d729) popup_note2_wait_window_t1_ParamLimits

0x584a,	// (0x0003d729) popup_note2_wait_window_t1

0x5868,	// (0x0003d747) popup_note2_wait_window_t2_ParamLimits

0x5868,	// (0x0003d747) popup_note2_wait_window_t2

0x58a7,	// (0x0003d786) popup_note2_wait_window_t3_ParamLimits

0x58a7,	// (0x0003d786) popup_note2_wait_window_t3

0x58b9,	// (0x0003d798) popup_note2_wait_window_t4_ParamLimits

0x58b9,	// (0x0003d798) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00047b75) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00047b75) popup_note2_wait_window_t

0x58cb,	// (0x0003d7aa) wait_bar2_pane_ParamLimits

0x58cb,	// (0x0003d7aa) wait_bar2_pane

0x58e3,	// (0x0003d7c2) popup_snote2_single_text_window_g1_ParamLimits

0x58e3,	// (0x0003d7c2) popup_snote2_single_text_window_g1

0x590b,	// (0x0003d7ea) popup_snote2_single_text_window_t1_ParamLimits

0x590b,	// (0x0003d7ea) popup_snote2_single_text_window_t1

0x5957,	// (0x0003d836) popup_snote2_single_text_window_t2_ParamLimits

0x5957,	// (0x0003d836) popup_snote2_single_text_window_t2

0x59a3,	// (0x0003d882) popup_snote2_single_text_window_t3_ParamLimits

0x59a3,	// (0x0003d882) popup_snote2_single_text_window_t3

0x59e4,	// (0x0003d8c3) popup_snote2_single_text_window_t4_ParamLimits

0x59e4,	// (0x0003d8c3) popup_snote2_single_text_window_t4

0x5a1a,	// (0x0003d8f9) popup_snote2_single_text_window_t5_ParamLimits

0x5a1a,	// (0x0003d8f9) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00047b7e) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00047b7e) popup_snote2_single_text_window_t

0x5a45,	// (0x0003d924) popup_snote2_single_graphic_window_g1_ParamLimits

0x5a45,	// (0x0003d924) popup_snote2_single_graphic_window_g1

0x5a6d,	// (0x0003d94c) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a6d,	// (0x0003d94c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00047b89) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00047b89) popup_snote2_single_graphic_window_g

0x5a95,	// (0x0003d974) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a95,	// (0x0003d974) popup_snote2_single_graphic_window_t1

0x5ae1,	// (0x0003d9c0) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ae1,	// (0x0003d9c0) popup_snote2_single_graphic_window_t2

0x59a3,	// (0x0003d882) popup_snote2_single_graphic_window_t3_ParamLimits

0x59a3,	// (0x0003d882) popup_snote2_single_graphic_window_t3

0x59e4,	// (0x0003d8c3) popup_snote2_single_graphic_window_t4_ParamLimits

0x59e4,	// (0x0003d8c3) popup_snote2_single_graphic_window_t4

0x5a1a,	// (0x0003d8f9) popup_snote2_single_graphic_window_t5_ParamLimits

0x5a1a,	// (0x0003d8f9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00047b8e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00047b8e) popup_snote2_single_graphic_window_t

0x4502,	// (0x0003c3e1) clock_nsta_pane_cp2_t1

0x4502,	// (0x0003c3e1) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x000479a2) clock_nsta_pane_cp2_t

0xd9b0,	// (0x0004588f) form_field_data_wide_pane_g1_ParamLimits

0xb981,	// (0x00043860) form_field_data_wide_pane_g2_ParamLimits

0xb981,	// (0x00043860) form_field_data_wide_pane_g2

0xb98d,	// (0x0004386c) form_field_data_wide_pane_g3_ParamLimits

0xb98d,	// (0x0004386c) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0004755a) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0004755a) form_field_data_wide_pane_g

0xc92d,	// (0x0004480c) grid_touch_3_pane_ParamLimits

0xc92d,	// (0x0004480c) grid_touch_3_pane

0xce78,	// (0x00044d57) cell_touch_3_pane_ParamLimits

0xce78,	// (0x00044d57) cell_touch_3_pane

0x4a12,	// (0x0003c8f1) cell_touch_3_pane_g1

0x4a12,	// (0x0003c8f1) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00047a27) cell_touch_3_pane_g

0x8416,	// (0x000402f5) cont_query_data_pane

0x841e,	// (0x000402fd) cont_query_data_pane_cp1

0x5b60,	// (0x0003da3f) button_value_adjust_pane_cp7

0x5b68,	// (0x0003da47) query_popup_pane_cp3

0xbeb5,	// (0x00043d94) bg_popup_sub_pane_cp22_ParamLimits

0xf0c5,	// (0x00046fa4) navi_navi_volume_pane_cp2

0xf0e0,	// (0x00046fbf) popup_side_volume_key_window_g2

0xf0ef,	// (0x00046fce) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x000475f0) popup_side_volume_key_window_g

0xf10c,	// (0x00046feb) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x000475f7) popup_side_volume_key_window_t

0xc0c0,	// (0x00043f9f) popup_side_volume_key_window_ParamLimits

0x98f2,	// (0x000417d1) list_double_graphic_pane_g4_ParamLimits

0x98f2,	// (0x000417d1) list_double_graphic_pane_g4

0xb108,	// (0x00042fe7) list_single_2heading_msg_pane_ParamLimits

0xb108,	// (0x00042fe7) list_single_2heading_msg_pane

0xb1a1,	// (0x00043080) list_single_2heading_msg_pane_g1_ParamLimits

0xb1a1,	// (0x00043080) list_single_2heading_msg_pane_g1

0xb1ad,	// (0x0004308c) list_single_2heading_msg_pane_g2_ParamLimits

0xb1ad,	// (0x0004308c) list_single_2heading_msg_pane_g2

0xb1c0,	// (0x0004309f) list_single_2heading_msg_pane_g3_ParamLimits

0xb1c0,	// (0x0004309f) list_single_2heading_msg_pane_g3

0xb1cc,	// (0x000430ab) list_single_2heading_msg_pane_g4_ParamLimits

0xb1cc,	// (0x000430ab) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00047b99) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00047b99) list_single_2heading_msg_pane_g

0xb1e4,	// (0x000430c3) list_single_2heading_msg_pane_t1_ParamLimits

0xb1e4,	// (0x000430c3) list_single_2heading_msg_pane_t1

0xb20c,	// (0x000430eb) list_single_2heading_msg_pane_t2_ParamLimits

0xb20c,	// (0x000430eb) list_single_2heading_msg_pane_t2

0xb277,	// (0x00043156) list_single_2heading_msg_pane_t3_ParamLimits

0xb277,	// (0x00043156) list_single_2heading_msg_pane_t3

0xe0af,	// (0x00045f8e) list_single_2heading_msg_pane_t4_ParamLimits

0xe0af,	// (0x00045f8e) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00047ba2) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00047ba2) list_single_2heading_msg_pane_t

0x781a,	// (0x0003f6f9) title_pane_g4_ParamLimits

0x781a,	// (0x0003f6f9) title_pane_g4

0xee6e,	// (0x00046d4d) title_pane_stacon_g3_ParamLimits

0xee6e,	// (0x00046d4d) title_pane_stacon_g3

0x5668,	// (0x0003d547) list_single_2graphic_im_pane_g4_ParamLimits

0x5668,	// (0x0003d547) list_single_2graphic_im_pane_g4

0x348e,	// (0x0003b36d) popup_side_volume_key_window_cp

0x3cfc,	// (0x0003bbdb) main_idle_act2_pane_t1

0x02a2,	// (0x00038181) toolbar_button_pane_g10

0x977b,	// (0x0004165a) popup_toolbar_window_cp1

0x44f3,	// (0x0003c3d2) clock_nsta_pane_cp_t1

0x44f3,	// (0x0003c3d2) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0004799d) clock_nsta_pane_cp_t

0xf0c5,	// (0x00046fa4) navi_navi_volume_pane_cp2_ParamLimits

0xf0d4,	// (0x00046fb3) popup_side_volume_key_window_g1_ParamLimits

0xf0e0,	// (0x00046fbf) popup_side_volume_key_window_g2_ParamLimits

0xf0ef,	// (0x00046fce) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x000475f0) popup_side_volume_key_window_g_ParamLimits

0x07ff,	// (0x000386de) fep_hwr_aid_pane

0x08a8,	// (0x00038787) bg_fep_hwr_top_pane_g4_ParamLimits

0x4a73,	// (0x0003c952) fep_hwr_top_pane_g1_ParamLimits

0x4a85,	// (0x0003c964) fep_hwr_top_pane_g2_ParamLimits

0x08c8,	// (0x000387a7) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x000479f2) fep_hwr_top_pane_g_ParamLimits

0x08dd,	// (0x000387bc) fep_hwr_top_text_pane_ParamLimits

0x3243,	// (0x0003b122) aid_touch_tab_arrow_arrow_2

0x324c,	// (0x0003b12b) aid_touch_tab_arrow_left_2

0x0813,	// (0x000386f2) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x084a,	// (0x00038729) fep_hwr_prediction_pane

0x4bdb,	// (0x0003caba) fep_vkb_prediction_pane

0xcc37,	// (0x00044b16) fep_vkb_side_pane_g3_ParamLimits

0xcc37,	// (0x00044b16) fep_vkb_side_pane_g3

0x0a6c,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0add,	// (0x000389bc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0aea,	// (0x000389c9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00047aa1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0d14,	// (0x00038bf3) fep_hwr_prediction_pane_g1

0x0d1e,	// (0x00038bfd) fep_hwr_prediction_pane_g2

0x0d26,	// (0x00038c05) fep_hwr_prediction_pane_g3

0x0d2e,	// (0x00038c0d) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00047bab) fep_hwr_prediction_pane_g

0x5b8f,	// (0x0003da6e) fep_vkb_prediction_pane_g1

0x5b99,	// (0x0003da78) fep_vkb_prediction_pane_g2

0x5ba1,	// (0x0003da80) fep_vkb_prediction_pane_g3

0x5ba9,	// (0x0003da88) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00047bb4) fep_vkb_prediction_pane_g

0x05f6,	// (0x000384d5) slider_set_pane_g3

0x060a,	// (0x000384e9) slider_set_pane_g4

0x0622,	// (0x00038501) slider_set_pane_g5

0x05f6,	// (0x000384d5) slider_set_pane_g6

0x0638,	// (0x00038517) slider_set_pane_g7

0x391c,	// (0x0003b7fb) slider_form_pane_g3

0x3925,	// (0x0003b804) slider_form_pane_g4

0x392d,	// (0x0003b80c) slider_form_pane_g5

0x391c,	// (0x0003b7fb) slider_form_pane_g6

0xc78a,	// (0x00044669) slider_form_pane_g7

0x3fb3,	// (0x0003be92) slider_set_pane_vc_g3

0x3fbc,	// (0x0003be9b) slider_set_pane_vc_g4

0x3fc5,	// (0x0003bea4) slider_set_pane_vc_g5

0x3fb3,	// (0x0003be92) slider_set_pane_vc_g6

0x3fce,	// (0x0003bead) slider_set_pane_vc_g7

0x41a6,	// (0x0003c085) slider_form_pane_vc_g1

0x41af,	// (0x0003c08e) slider_form_pane_vc_g2

0x41b8,	// (0x0003c097) slider_form_pane_vc_g3

0x41a6,	// (0x0003c085) slider_form_pane_vc_g4

0x41c1,	// (0x0003c0a0) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0004796f) slider_form_pane_vc_g

0x77f0,	// (0x0003f6cf) main_idle_act3_pane

0x5bb1,	// (0x0003da90) ai3_links_pane

0xcec2,	// (0x00044da1) popup_ai3_data_window_ParamLimits

0xcec2,	// (0x00044da1) popup_ai3_data_window

0x77f0,	// (0x0003f6cf) grid_ai3_links_pane

0xcee0,	// (0x00044dbf) cell_ai3_links_pane_ParamLimits

0xcee0,	// (0x00044dbf) cell_ai3_links_pane

0x5bf2,	// (0x0003dad1) bg_popup_sub_pane_cp11

0x5bff,	// (0x0003dade) cell_ai3_links_pane_g1

0x77f0,	// (0x0003f6cf) bg_popup_sub_pane_cp12

0x5c24,	// (0x0003db03) heading_ai3_data_pane

0x5c2c,	// (0x0003db0b) list_ai3_gene_pane

0x5c38,	// (0x0003db17) popup_ai3_data_window_g1

0x5c40,	// (0x0003db1f) heading_ai3_data_pane_g1

0x5c48,	// (0x0003db27) heading_ai3_data_pane_t1

0x5c56,	// (0x0003db35) list_double_ai3_gene_pane_ParamLimits

0x5c56,	// (0x0003db35) list_double_ai3_gene_pane

0x5c63,	// (0x0003db42) list_single_ai3_gene_pane_ParamLimits

0x5c63,	// (0x0003db42) list_single_ai3_gene_pane

0x49d7,	// (0x0003c8b6) list_highlight_pane_cp7_ParamLimits

0x49d7,	// (0x0003c8b6) list_highlight_pane_cp7

0x5c70,	// (0x0003db4f) list_single_a13_gene_pane_t1_ParamLimits

0x5c70,	// (0x0003db4f) list_single_a13_gene_pane_t1

0x5c87,	// (0x0003db66) list_single_ai3_gene_pane_g1

0x5c90,	// (0x0003db6f) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00047bbd) list_single_ai3_gene_pane_g

0x5c98,	// (0x0003db77) list_double_ai3_gene_pane_g1_ParamLimits

0x5c98,	// (0x0003db77) list_double_ai3_gene_pane_g1

0x5ca4,	// (0x0003db83) list_double_ai3_gene_pane_t1_ParamLimits

0x5ca4,	// (0x0003db83) list_double_ai3_gene_pane_t1

0x5cc0,	// (0x0003db9f) list_double_ai3_gene_pane_t2_ParamLimits

0x5cc0,	// (0x0003db9f) list_double_ai3_gene_pane_t2

0x5cd5,	// (0x0003dbb4) list_double_ai3_gene_pane_t3_ParamLimits

0x5cd5,	// (0x0003dbb4) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00047bc2) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00047bc2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe0a5,	// (0x00045f84) aid_size_min_col_2

0xceac,	// (0x00044d8b) aid_size_min_msg_ParamLimits

0xceac,	// (0x00044d8b) aid_size_min_msg

0xcc4b,	// (0x00044b2a) fep_vkb_top_text_pane_g2_ParamLimits

0xcc4b,	// (0x00044b2a) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00047a22) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00047a22) fep_vkb_top_text_pane_g

0x77f0,	// (0x0003f6cf) main_hc_apps_shell_pane

0x5cf2,	// (0x0003dbd1) grid_hc_apps_pane_ParamLimits

0x5cf2,	// (0x0003dbd1) grid_hc_apps_pane

0x5d01,	// (0x0003dbe0) list_hc_apps_pane

0x5d09,	// (0x0003dbe8) scroll_pane_cp37_ParamLimits

0x5d09,	// (0x0003dbe8) scroll_pane_cp37

0xcefa,	// (0x00044dd9) cell_hc_apps_pane_ParamLimits

0xcefa,	// (0x00044dd9) cell_hc_apps_pane

0xcfc4,	// (0x00044ea3) cell_hc_apps_pane_g1_ParamLimits

0xcfc4,	// (0x00044ea3) cell_hc_apps_pane_g1

0x5dfe,	// (0x0003dcdd) cell_hc_apps_pane_g2_ParamLimits

0x5dfe,	// (0x0003dcdd) cell_hc_apps_pane_g2

0x5e1a,	// (0x0003dcf9) cell_hc_apps_pane_g3_ParamLimits

0x5e1a,	// (0x0003dcf9) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00047bc9) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00047bc9) cell_hc_apps_pane_g

0xcff1,	// (0x00044ed0) cell_hc_apps_pane_t1_ParamLimits

0xcff1,	// (0x00044ed0) cell_hc_apps_pane_t1

0x8360,	// (0x0004023f) grid_highlight_pane_cp10_ParamLimits

0x8360,	// (0x0004023f) grid_highlight_pane_cp10

0xd031,	// (0x00044f10) list_single_hc_apps_pane_ParamLimits

0xd031,	// (0x00044f10) list_single_hc_apps_pane

0xd06b,	// (0x00044f4a) list_single_hc_apps_pane_g1

0xb2e5,	// (0x000431c4) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00047bd0) list_single_hc_apps_pane_g

0xb2fe,	// (0x000431dd) list_single_hc_apps_pane_g2_copy1

0xb31a,	// (0x000431f9) list_single_hc_apps_pane_t1

0x821f,	// (0x000400fe) bg_set_opt_pane_cp_ParamLimits

0xed95,	// (0x00046c74) setting_slider_pane_t1_ParamLimits

0xedae,	// (0x00046c8d) setting_slider_pane_t2_ParamLimits

0xedc8,	// (0x00046ca7) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004743d) setting_slider_pane_t_ParamLimits

0xede0,	// (0x00046cbf) slider_set_pane_ParamLimits

0xf53f,	// (0x0004741e) control_pane_g5_ParamLimits

0xf53f,	// (0x0004741e) control_pane_g5

0x3749,	// (0x0003b628) slider_set_pane_g1_ParamLimits

0x05ea,	// (0x000384c9) slider_set_pane_g2_ParamLimits

0x05f6,	// (0x000384d5) slider_set_pane_g3_ParamLimits

0x060a,	// (0x000384e9) slider_set_pane_g4_ParamLimits

0x0622,	// (0x00038501) slider_set_pane_g5_ParamLimits

0x05f6,	// (0x000384d5) slider_set_pane_g6_ParamLimits

0x0638,	// (0x00038517) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0004783e) slider_set_pane_g_ParamLimits

0xc168,	// (0x00044047) navi_icon_text_pane_ParamLimits

0xabb1,	// (0x00042a90) aid_fill_nsta_2_ParamLimits

0xabea,	// (0x00042ac9) aid_touch_tab_arrow_left_ParamLimits

0xac00,	// (0x00042adf) aid_touch_tab_arrow_right_ParamLimits

0xac9b,	// (0x00042b7a) clock_nsta_pane_ParamLimits

0xc4c8,	// (0x000443a7) navi_icon_pane_g1_ParamLimits

0xc4d4,	// (0x000443b3) navi_text_pane_t1_ParamLimits

0xca11,	// (0x000448f0) navi_icon_text_pane_g1_ParamLimits

0xca1d,	// (0x000448fc) navi_icon_text_pane_t1_ParamLimits

0xd06b,	// (0x00044f4a) list_single_hc_apps_pane_g1_ParamLimits

0xb2e5,	// (0x000431c4) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00047bd0) list_single_hc_apps_pane_g_ParamLimits

0xb2fe,	// (0x000431dd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb31a,	// (0x000431f9) list_single_hc_apps_pane_t1_ParamLimits

0x9301,	// (0x000411e0) popup_toolbar2_fixed_window_ParamLimits

0x9301,	// (0x000411e0) popup_toolbar2_fixed_window

0xab16,	// (0x000429f5) popup_toolbar2_float_window

0x77f0,	// (0x0003f6cf) bg_popup_sub_pane_cp27

0x5ed4,	// (0x0003ddb3) grid_toolbar2_float_pane

0x77f0,	// (0x0003f6cf) bg_popup_sub_pane_cp26

0x5ed4,	// (0x0003ddb3) grid_toolbar2_fixed_pane

0xd084,	// (0x00044f63) cell_toolbar2_fixed_pane_ParamLimits

0xd084,	// (0x00044f63) cell_toolbar2_fixed_pane

0xd0a1,	// (0x00044f80) cell_toolbar2_fixed_pane_g1

0x5ef5,	// (0x0003ddd4) toolbar2_fixed_button_pane

0x23ce,	// (0x0003a2ad) toolbar2_fixed_button_pane_g1

0x23de,	// (0x0003a2bd) toolbar2_fixed_button_pane_g2

0x23d6,	// (0x0003a2b5) toolbar2_fixed_button_pane_g3

0x23ee,	// (0x0003a2cd) toolbar2_fixed_button_pane_g4

0x23e6,	// (0x0003a2c5) toolbar2_fixed_button_pane_g5

0x23f6,	// (0x0003a2d5) toolbar2_fixed_button_pane_g6

0x23fe,	// (0x0003a2dd) toolbar2_fixed_button_pane_g7

0x240e,	// (0x0003a2ed) toolbar2_fixed_button_pane_g8

0x2406,	// (0x0003a2e5) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00047740) toolbar2_fixed_button_pane_g

0x5efd,	// (0x0003dddc) cell_toolbar2_float_pane_ParamLimits

0x5efd,	// (0x0003dddc) cell_toolbar2_float_pane

0x5f0e,	// (0x0003dded) cell_toolbar2_float_pane_g1

0x5ef5,	// (0x0003ddd4) toolbar2_fixed_button_pane_cp

0xcb33,	// (0x00044a12) fep_vkb_accented_list_pane_ParamLimits

0xcb33,	// (0x00044a12) fep_vkb_accented_list_pane

0x0a4c,	// (0x0003892b) bg_popup_fep_shadow_pane_g9

0xf333,	// (0x00047212) bg_popup_fep_shadow_pane_cp3

0xba86,	// (0x00043965) list_accented_list_pane

0x5f17,	// (0x0003ddf6) list_single_accented_list_pane_ParamLimits

0x5f17,	// (0x0003ddf6) list_single_accented_list_pane

0xf333,	// (0x00047212) list_highlight_pane_cp10

0x5f28,	// (0x0003de07) list_single_accented_list_pane_t1

0xaa32,	// (0x00042911) popup_slider_window_ParamLimits

0xaa32,	// (0x00042911) popup_slider_window

0x5b70,	// (0x0003da4f) aid_indentation_list_msg

0xd1ac,	// (0x0004508b) bg_popup_window_pane_cp19

0x6062,	// (0x0003df41) popup_slider_window_g1

0x607e,	// (0x0003df5d) popup_slider_window_g2

0x609a,	// (0x0003df79) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00047bd5) popup_slider_window_g

0x60f6,	// (0x0003dfd5) popup_slider_window_t1

0x616a,	// (0x0003e049) small_volume_slider_vertical_pane

0x4a12,	// (0x0003c8f1) small_volume_slider_vertical_pane_g1

0x4a12,	// (0x0003c8f1) small_volume_slider_vertical_pane_g2

0x6186,	// (0x0003e065) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00047be7) small_volume_slider_vertical_pane_g

0x926b,	// (0x0004114a) area_side_right_pane_ParamLimits

0x926b,	// (0x0004114a) area_side_right_pane

0xb348,	// (0x00043227) aid_size_side_button_ParamLimits

0xb348,	// (0x00043227) aid_size_side_button

0xb361,	// (0x00043240) grid_sctrl_middle_pane_ParamLimits

0xb361,	// (0x00043240) grid_sctrl_middle_pane

0x0dcd,	// (0x00038cac) sctrl_sk_bottom_pane

0x0dde,	// (0x00038cbd) sctrl_sk_top_pane

0x0df0,	// (0x00038ccf) aid_touch_sctrl_top

0x0dfd,	// (0x00038cdc) bg_sctrl_sk_pane_ParamLimits

0x0dfd,	// (0x00038cdc) bg_sctrl_sk_pane

0x0e0b,	// (0x00038cea) sctrl_sk_top_pane_g1

0x0e18,	// (0x00038cf7) sctrl_sk_top_pane_t1

0x0df0,	// (0x00038ccf) aid_touch_sctrl_bottom

0x0dfd,	// (0x00038cdc) bg_sctrl_sk_pane_cp_ParamLimits

0x0dfd,	// (0x00038cdc) bg_sctrl_sk_pane_cp

0x0e33,	// (0x00038d12) sctrl_sk_bottom_pane_g1

0x0e18,	// (0x00038cf7) sctrl_sk_bottom_pane_t1

0xb37b,	// (0x0004325a) cell_sctrl_middle_pane_ParamLimits

0xb37b,	// (0x0004325a) cell_sctrl_middle_pane

0xb38e,	// (0x0004326d) aid_touch_sctrl_middle_ParamLimits

0xb38e,	// (0x0004326d) aid_touch_sctrl_middle

0xb39b,	// (0x0004327a) bg_sctrl_middle_pane_ParamLimits

0xb39b,	// (0x0004327a) bg_sctrl_middle_pane

0x14b6,	// (0x00039395) cell_sctrl_middle_pane_g1_ParamLimits

0x14b6,	// (0x00039395) cell_sctrl_middle_pane_g1

0xb3a9,	// (0x00043288) cell_sctrl_middle_pane_g2_ParamLimits

0xb3a9,	// (0x00043288) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00047bf3) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00047bf3) cell_sctrl_middle_pane_g

0x23ce,	// (0x0003a2ad) bg_sctrl_middle_pane_g1

0x23d6,	// (0x0003a2b5) bg_sctrl_middle_pane_g2

0x23de,	// (0x0003a2bd) bg_sctrl_middle_pane_g3

0x23e6,	// (0x0003a2c5) bg_sctrl_middle_pane_g4

0x23ee,	// (0x0003a2cd) bg_sctrl_middle_pane_g5

0x23f6,	// (0x0003a2d5) bg_sctrl_middle_pane_g6

0x23fe,	// (0x0003a2dd) bg_sctrl_middle_pane_g7

0x2406,	// (0x0003a2e5) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00047bf8) bg_sctrl_middle_pane_g

0x240e,	// (0x0003a2ed) bg_sctrl_middle_pane_g8_copy1

0x23ce,	// (0x0003a2ad) bg_sctrl_sk_pane_g1

0x23de,	// (0x0003a2bd) bg_sctrl_sk_pane_g2

0x23d6,	// (0x0003a2b5) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00047740) bg_sctrl_sk_pane_g

0x877b,	// (0x0004065a) aid_size_touch_scroll_bar

0x23ee,	// (0x0003a2cd) bg_sctrl_sk_pane_g4

0x23e6,	// (0x0003a2c5) bg_sctrl_sk_pane_g5

0x23f6,	// (0x0003a2d5) bg_sctrl_sk_pane_g6

0x23fe,	// (0x0003a2dd) bg_sctrl_sk_pane_g7

0x240e,	// (0x0003a2ed) bg_sctrl_sk_pane_g8

0x2406,	// (0x0003a2e5) bg_sctrl_sk_pane_g9

0x01f2,	// (0x000380d1) popup_fep_china_hwr2_fs_candidate_window

0xa4ea,	// (0x000423c9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4ea,	// (0x000423c9) popup_fep_china_hwr2_fs_control_window

0x0a6c,	// (0x0003894b) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00047bee) sctrl_sk_top_pane_g

0xd264,	// (0x00045143) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd264,	// (0x00045143) aid_fep_china_hwr2_fs_cell

0xd27a,	// (0x00045159) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd27a,	// (0x00045159) bg_popup_fep_shadow_pane_cp4

0xd291,	// (0x00045170) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd291,	// (0x00045170) bg_popup_fep_shadow_pane_cp5

0xd2a3,	// (0x00045182) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd2a3,	// (0x00045182) popup_fep_china_hwr2_fs_control_bar_grid

0xd2b7,	// (0x00045196) popup_fep_china_hwr2_fs_control_funtion_grid

0x61e5,	// (0x0003e0c4) aid_fep_china_hwr2_fs_candi_cell

0x77f0,	// (0x0003f6cf) bg_popup_fep_shadow_pane_cp6

0x61ef,	// (0x0003e0ce) popup_fep_china_hwr2_fs_candidate_grid

0xd2bf,	// (0x0004519e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2bf,	// (0x0004519e) cell_fep_china_hwr2_fs_funtion_grid

0x4a12,	// (0x0003c8f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6211,	// (0x0003e0f0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6211,	// (0x0003e0f0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x621f,	// (0x0003e0fe) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x621f,	// (0x0003e0fe) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00047c09) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00047c09) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2d7,	// (0x000451b6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2d7,	// (0x000451b6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2ec,	// (0x000451cb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2ec,	// (0x000451cb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00047c0e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00047c0e) cell_fep_china_hwr2_fs_funtion_grid_t

0x6266,	// (0x0003e145) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x626e,	// (0x0003e14d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6276,	// (0x0003e155) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00047c13) popup_fep_china_hwr2_fs_control_bar_grid_g

0x627e,	// (0x0003e15d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x627e,	// (0x0003e15d) cell_fep_china_hwr2_fs_candidate_grid

0x629d,	// (0x0003e17c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x62a5,	// (0x0003e184) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4a12,	// (0x0003c8f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4a12,	// (0x0003c8f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00047a27) cell_fep_china_hwr2_fs_candidate_grid_g

0x62ad,	// (0x0003e18c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1faa,	// (0x00039e89) clock_nsta_pane_cp_24_ParamLimits

0x1faa,	// (0x00039e89) clock_nsta_pane_cp_24

0x202a,	// (0x00039f09) indicator_nsta_pane_cp_24_ParamLimits

0x202a,	// (0x00039f09) indicator_nsta_pane_cp_24

0x30a1,	// (0x0003af80) heading_pane_g1

0x0001,

0xf8c6,	// (0x000477a5) heading_pane_g

0x3b43,	// (0x0003ba22) grid_sct_catagory_button_pane

0x3b75,	// (0x0003ba54) scroll_pane_cp5_ParamLimits

0x465e,	// (0x0003c53d) button_value_adjust_pane_cp5_ParamLimits

0x465e,	// (0x0003c53d) button_value_adjust_pane_cp5

0x4743,	// (0x0003c622) form2_midp_time_pane_ParamLimits

0x62bb,	// (0x0003e19a) cell_sct_catagory_button_pane_ParamLimits

0x62bb,	// (0x0003e19a) cell_sct_catagory_button_pane

0x49d7,	// (0x0003c8b6) bg_button_pane_cp01_ParamLimits

0x49d7,	// (0x0003c8b6) bg_button_pane_cp01

0x4a12,	// (0x0003c8f1) cell_sct_catagory_button_pane_g1

0xaab3,	// (0x00042992) popup_tb_extension_window

0xd308,	// (0x000451e7) aid_size_cell_ext_ParamLimits

0xd308,	// (0x000451e7) aid_size_cell_ext

0x85bd,	// (0x0004049c) bg_tb_trans_pane_cp1_ParamLimits

0x85bd,	// (0x0004049c) bg_tb_trans_pane_cp1

0xd32e,	// (0x0004520d) grid_tb_ext_pane_ParamLimits

0xd32e,	// (0x0004520d) grid_tb_ext_pane

0xd36e,	// (0x0004524d) cell_tb_ext_pane_ParamLimits

0xd36e,	// (0x0004524d) cell_tb_ext_pane

0xd396,	// (0x00045275) cell_tb_ext_pane_g1_ParamLimits

0xd396,	// (0x00045275) cell_tb_ext_pane_g1

0x6351,	// (0x0003e230) cell_tb_ext_pane_t1

0x8360,	// (0x0004023f) list_highlight_pane_cp11_ParamLimits

0x8360,	// (0x0004023f) list_highlight_pane_cp11

0x9316,	// (0x000411f5) popup_uni_indicator_window_ParamLimits

0x9316,	// (0x000411f5) popup_uni_indicator_window

0xb973,	// (0x00043852) bg_popup_sub_pane_cp14

0x636c,	// (0x0003e24b) list_uniindi_pane

0x6378,	// (0x0003e257) uniindi_top_pane

0x8360,	// (0x0004023f) bg_uniindi_top_pane

0x6399,	// (0x0003e278) uniindi_top_pane_g1

0x63af,	// (0x0003e28e) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00047c1a) uniindi_top_pane_g

0x63d9,	// (0x0003e2b8) uniindi_top_pane_t1

0x6405,	// (0x0003e2e4) list_single_uniindi_pane_ParamLimits

0x6405,	// (0x0003e2e4) list_single_uniindi_pane

0x4a12,	// (0x0003c8f1) bg_uniindi_top_pane_g1

0x6417,	// (0x0003e2f6) list_single_uniindi_pane_g1

0x642a,	// (0x0003e309) list_single_uniindi_pane_t1

0xec72,	// (0x00046b51) control_bg_pane

0x644f,	// (0x0003e32e) bg_sctrl_sk_pane_cp1

0x6458,	// (0x0003e337) bg_sctrl_sk_pane_cp2

0x6461,	// (0x0003e340) control_bg_pane_g1

0x646a,	// (0x0003e349) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00047c23) control_bg_pane_g

0x4485,	// (0x0003c364) cell_indicator_nsta_pane_g1_ParamLimits

0xc96a,	// (0x00044849) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0004798b) cell_indicator_nsta_pane_g_ParamLimits

0xde8c,	// (0x00045d6b) form2_midp_time_pane_t1_ParamLimits

0xa460,	// (0x0004233f) main_idle_act4_pane_ParamLimits

0xa460,	// (0x0004233f) main_idle_act4_pane

0xaab3,	// (0x00042992) popup_tb_extension_window_ParamLimits

0xd356,	// (0x00045235) tb_ext_find_pane_ParamLimits

0xd356,	// (0x00045235) tb_ext_find_pane

0x6473,	// (0x0003e352) ai_gene_pane_1_cp1

0xf3b9,	// (0x00047298) ai_gene_pane_2_cp1

0x647b,	// (0x0003e35a) list_single_idle_plugin_calendar_pane

0x6484,	// (0x0003e363) list_single_idle_plugin_notification_pane

0x648d,	// (0x0003e36c) list_single_idle_plugin_player_pane

0xd3b3,	// (0x00045292) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd3b3,	// (0x00045292) list_single_idle_plugin_shortcut_pane

0xd3db,	// (0x000452ba) main_idle_act4_pane_t1

0xd3f3,	// (0x000452d2) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00047c28) main_idle_act4_pane_t

0xd40b,	// (0x000452ea) middle_sk_idle_act4_pane_ParamLimits

0xd40b,	// (0x000452ea) middle_sk_idle_act4_pane

0xd427,	// (0x00045306) popup_clock_digital_analogue_window_cp2

0xd44e,	// (0x0004532d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd44e,	// (0x0004532d) shortcut_wheel_idle_act4_pane

0x4a12,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g1

0x4a12,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g2

0x4a12,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g3

0x4a12,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g4

0x4a12,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g5

0x6520,	// (0x0003e3ff) shortcut_wheel_idle_act4_pane_g6

0x6528,	// (0x0003e407) shortcut_wheel_idle_act4_pane_g7

0x6530,	// (0x0003e40f) shortcut_wheel_idle_act4_pane_g8

0x6538,	// (0x0003e417) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00047c2d) shortcut_wheel_idle_act4_pane_g

0xd4cb,	// (0x000453aa) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4cb,	// (0x000453aa) middle_sk_idle_act4_pane_g1

0xd4d9,	// (0x000453b8) middle_sk_idle_act4_pane_g2_ParamLimits

0xd4d9,	// (0x000453b8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00047c50) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00047c50) middle_sk_idle_act4_pane_g

0xd4f1,	// (0x000453d0) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4f1,	// (0x000453d0) middle_sk_idle_act4_pane_t1

0xd520,	// (0x000453ff) grid_ai_shortcut_pane_ParamLimits

0xd520,	// (0x000453ff) grid_ai_shortcut_pane

0xd53d,	// (0x0004541c) list_highlight_pane_cp16_ParamLimits

0xd53d,	// (0x0004541c) list_highlight_pane_cp16

0xd54a,	// (0x00045429) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd54a,	// (0x00045429) list_single_idle_plugin_shortcut_pane_g1

0xd556,	// (0x00045435) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd556,	// (0x00045435) list_single_idle_plugin_shortcut_pane_g2

0xd574,	// (0x00045453) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd574,	// (0x00045453) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00047c55) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00047c55) list_single_idle_plugin_shortcut_pane_g

0xd589,	// (0x00045468) cell_ai_shortcut_pane_ParamLimits

0xd589,	// (0x00045468) cell_ai_shortcut_pane

0xd59f,	// (0x0004547e) cell_ai_shortcut_pane_g1_ParamLimits

0xd59f,	// (0x0004547e) cell_ai_shortcut_pane_g1

0x6473,	// (0x0003e352) ai_gene_pane_1_cp2

0x6669,	// (0x0003e548) ai_gene_pane_2_cp2

0x6671,	// (0x0003e550) list_highlight_pane_cp15

0x667a,	// (0x0003e559) list_single_idle_plugin_calendar_pane_g1

0x6671,	// (0x0003e550) list_highlight_pane_cp17

0x6682,	// (0x0003e561) list_single_idle_plugin_calendar_pane_g1_copy1

0x668a,	// (0x0003e569) list_single_idle_plugin_player_pane_g1

0x3daa,	// (0x0003bc89) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00047c5c) list_single_idle_plugin_player_pane_g

0x6692,	// (0x0003e571) list_single_idle_plugin_player_pane_t1

0x66a0,	// (0x0003e57f) list_single_idle_plugin_player_pane_t2

0x66ae,	// (0x0003e58d) list_single_idle_plugin_player_pane_t3

0x66bc,	// (0x0003e59b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00047c61) list_single_idle_plugin_player_pane_t

0x66ca,	// (0x0003e5a9) wait_bar_pane_cp15

0x66d2,	// (0x0003e5b1) grid_ai_notification_pane

0x3daa,	// (0x0003bc89) list_single_idle_plugin_notification_pane_g1

0xd5c1,	// (0x000454a0) cell_ai_notification_pane_ParamLimits

0xd5c1,	// (0x000454a0) cell_ai_notification_pane

0x66e8,	// (0x0003e5c7) cell_ai_notification_pane_g1

0x66f0,	// (0x0003e5cf) cell_ai_notification_pane_t1

0xd5ce,	// (0x000454ad) tb_ext_find_button_pane

0xd5d6,	// (0x000454b5) tb_ext_find_pane_g1

0xd5de,	// (0x000454bd) tb_ext_find_pane_t1

0xbe55,	// (0x00043d34) tb_ext_find_button_pane_g1

0x671c,	// (0x0003e5fb) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00047c6a) tb_ext_find_button_pane_g

0xd3db,	// (0x000452ba) main_idle_act4_pane_t1_ParamLimits

0xd3f3,	// (0x000452d2) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00047c28) main_idle_act4_pane_t_ParamLimits

0xd427,	// (0x00045306) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd43e,	// (0x0004531d) sat_plugin_idle_act4_pane_ParamLimits

0xd43e,	// (0x0004531d) sat_plugin_idle_act4_pane

0xd5ec,	// (0x000454cb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd5ec,	// (0x000454cb) sat_plugin_idle_act4_pane_t1

0xd604,	// (0x000454e3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd604,	// (0x000454e3) sat_plugin_idle_act4_pane_t2

0xd61c,	// (0x000454fb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd61c,	// (0x000454fb) sat_plugin_idle_act4_pane_t3

0xd634,	// (0x00045513) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd634,	// (0x00045513) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00047c6f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00047c6f) sat_plugin_idle_act4_pane_t

0xed37,	// (0x00046c16) popup_battery_window_ParamLimits

0xed37,	// (0x00046c16) popup_battery_window

0x8360,	// (0x0004023f) bg_popup_sub_pane_cp25_ParamLimits

0x8360,	// (0x0004023f) bg_popup_sub_pane_cp25

0x6771,	// (0x0003e650) popup_battery_window_g1_ParamLimits

0x6771,	// (0x0003e650) popup_battery_window_g1

0x677d,	// (0x0003e65c) popup_battery_window_t1_ParamLimits

0x677d,	// (0x0003e65c) popup_battery_window_t1

0x678f,	// (0x0003e66e) popup_battery_window_t2_ParamLimits

0x678f,	// (0x0003e66e) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00047c78) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00047c78) popup_battery_window_t

0xa148,	// (0x00042027) midp_canvas_pane_ParamLimits

0xa1a3,	// (0x00042082) midp_keypad_pane_ParamLimits

0xa1a3,	// (0x00042082) midp_keypad_pane

0x0144,	// (0x00038023) main_midp_pane_ParamLimits

0x4511,	// (0x0003c3f0) signal_pane_g2_cp_ParamLimits

0xd64c,	// (0x0004552b) aid_size_cell_midp_keypad_ParamLimits

0xd64c,	// (0x0004552b) aid_size_cell_midp_keypad

0xd66a,	// (0x00045549) midp_keyp_game_grid_pane_ParamLimits

0xd66a,	// (0x00045549) midp_keyp_game_grid_pane

0xd691,	// (0x00045570) midp_keyp_rocker_pane_ParamLimits

0xd691,	// (0x00045570) midp_keyp_rocker_pane

0xd6d0,	// (0x000455af) midp_keyp_sk_left_pane_ParamLimits

0xd6d0,	// (0x000455af) midp_keyp_sk_left_pane

0xd724,	// (0x00045603) midp_keyp_sk_right_pane_ParamLimits

0xd724,	// (0x00045603) midp_keyp_sk_right_pane

0x77f0,	// (0x0003f6cf) bg_button_pane_cp03

0xd778,	// (0x00045657) midp_keyp_sk_left_pane_g1

0x77f0,	// (0x0003f6cf) bg_button_pane_cp04

0xd778,	// (0x00045657) midp_keyp_sk_right_pane_g1

0x4a12,	// (0x0003c8f1) midp_keyp_rocker_pane_g1

0xd781,	// (0x00045660) keyp_game_cell_pane_ParamLimits

0xd781,	// (0x00045660) keyp_game_cell_pane

0x77f0,	// (0x0003f6cf) bg_button_pane_cp02

0xd7a7,	// (0x00045686) keyp_game_cell_pane_g1

0x92ad,	// (0x0004118c) popup_fep_vkb2_window_ParamLimits

0x92ad,	// (0x0004118c) popup_fep_vkb2_window

0xb3b5,	// (0x00043294) aid_size_cell_vkb2_ParamLimits

0xb3b5,	// (0x00043294) aid_size_cell_vkb2

0xb3eb,	// (0x000432ca) popup_fep_vkb2_window_g1_ParamLimits

0xb3eb,	// (0x000432ca) popup_fep_vkb2_window_g1

0xb43b,	// (0x0004331a) vkb2_area_bottom_pane_ParamLimits

0xb43b,	// (0x0004331a) vkb2_area_bottom_pane

0xb497,	// (0x00043376) vkb2_area_keypad_pane_ParamLimits

0xb497,	// (0x00043376) vkb2_area_keypad_pane

0xb4e5,	// (0x000433c4) vkb2_area_top_pane_ParamLimits

0xb4e5,	// (0x000433c4) vkb2_area_top_pane

0xb56b,	// (0x0004344a) vkb2_top_entry_pane_ParamLimits

0xb56b,	// (0x0004344a) vkb2_top_entry_pane

0xb598,	// (0x00043477) vkb2_top_grid_left_pane_ParamLimits

0xb598,	// (0x00043477) vkb2_top_grid_left_pane

0xb5b8,	// (0x00043497) vkb2_top_grid_right_pane_ParamLimits

0xb5b8,	// (0x00043497) vkb2_top_grid_right_pane

0x10ad,	// (0x00038f8c) vkb2_cell_keypad_pane_ParamLimits

0x10ad,	// (0x00038f8c) vkb2_cell_keypad_pane

0xb5fe,	// (0x000434dd) vkb2_area_bottom_grid_pane_ParamLimits

0xb5fe,	// (0x000434dd) vkb2_area_bottom_grid_pane

0xb628,	// (0x00043507) vkb2_area_bottom_pane_g1_ParamLimits

0xb628,	// (0x00043507) vkb2_area_bottom_pane_g1

0xb64e,	// (0x0004352d) vkb2_area_bottom_pane_g2_ParamLimits

0xb64e,	// (0x0004352d) vkb2_area_bottom_pane_g2

0xb67f,	// (0x0004355e) vkb2_area_bottom_pane_g3_ParamLimits

0xb67f,	// (0x0004355e) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00047c7d) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00047c7d) vkb2_area_bottom_pane_g

0x1257,	// (0x00039136) vkb2_top_cell_left_pane_ParamLimits

0x1257,	// (0x00039136) vkb2_top_cell_left_pane

0xd7b0,	// (0x0004568f) vkb2_top_entry_pane_g1_ParamLimits

0xd7b0,	// (0x0004568f) vkb2_top_entry_pane_g1

0xd7be,	// (0x0004569d) vkb2_top_entry_pane_t1_ParamLimits

0xd7be,	// (0x0004569d) vkb2_top_entry_pane_t1

0x6932,	// (0x0003e811) vkb2_top_entry_pane_t2_ParamLimits

0x6932,	// (0x0003e811) vkb2_top_entry_pane_t2

0x6964,	// (0x0003e843) vkb2_top_entry_pane_t3_ParamLimits

0x6964,	// (0x0003e843) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00047c84) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00047c84) vkb2_top_entry_pane_t

0xb6e9,	// (0x000435c8) vkb2_top_grid_right_pane_g1_ParamLimits

0xb6e9,	// (0x000435c8) vkb2_top_grid_right_pane_g1

0x12ba,	// (0x00039199) vkb2_top_grid_right_pane_g2_ParamLimits

0x12ba,	// (0x00039199) vkb2_top_grid_right_pane_g2

0x12d2,	// (0x000391b1) vkb2_top_grid_right_pane_g3_ParamLimits

0x12d2,	// (0x000391b1) vkb2_top_grid_right_pane_g3

0xb6ff,	// (0x000435de) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6ff,	// (0x000435de) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00047c8b) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00047c8b) vkb2_top_grid_right_pane_g

0x1300,	// (0x000391df) vkb2_top_cell_left_pane_g1

0x1317,	// (0x000391f6) vkb2_cell_keypad_pane_g1_ParamLimits

0x1317,	// (0x000391f6) vkb2_cell_keypad_pane_g1

0x6988,	// (0x0003e867) vkb2_cell_keypad_pane_t1_ParamLimits

0x6988,	// (0x0003e867) vkb2_cell_keypad_pane_t1

0x1325,	// (0x00039204) vkb2_cell_bottom_grid_pane_ParamLimits

0x1325,	// (0x00039204) vkb2_cell_bottom_grid_pane

0x135e,	// (0x0003923d) vkb2_cell_bottom_grid_pane_g1

0xd46f,	// (0x0004534e) aid_call2_pane_cp02

0xd477,	// (0x00045356) aid_call_pane_cp02

0xd47f,	// (0x0004535e) clock_digital_number_pane_cp10

0xd487,	// (0x00045366) clock_digital_number_pane_cp11

0xd48f,	// (0x0004536e) clock_digital_number_pane_cp12

0xd497,	// (0x00045376) clock_digital_number_pane_cp13

0xd49f,	// (0x0004537e) clock_digital_separator_pane_cp10

0xbe55,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g1

0xbe55,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g2

0xd4a7,	// (0x00045386) popup_clock_digital_analogue_window_cp2_g3

0xbe55,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g4

0xd4a7,	// (0x00045386) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00047c40) popup_clock_digital_analogue_window_cp2_g

0xd4af,	// (0x0004538e) popup_clock_digital_analogue_window_cp2_t1

0xd4bd,	// (0x0004539c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00047c4b) popup_clock_digital_analogue_window_cp2_t

0x4a12,	// (0x0003c8f1) clock_digital_number_pane_cp10_g1

0x4a12,	// (0x0003c8f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00047a27) clock_digital_number_pane_cp10_g

0x4a12,	// (0x0003c8f1) clock_digital_separator_pane_cp10_g1

0x4a12,	// (0x0003c8f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00047a27) clock_digital_separator_pane_cp10_g

0x63bb,	// (0x0003e29a) uniindi_top_pane_g3

0x63cc,	// (0x0003e2ab) uniindi_top_pane_g4

0x1138,	// (0x00039017) vkb2_row_keypad_pane_ParamLimits

0x1138,	// (0x00039017) vkb2_row_keypad_pane

0x137a,	// (0x00039259) vkb2_cell_t_keypad_pane_ParamLimits

0x137a,	// (0x00039259) vkb2_cell_t_keypad_pane

0x138a,	// (0x00039269) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x138a,	// (0x00039269) vkb2_cell_t_keypad_pane_cp08

0x139f,	// (0x0003927e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x139f,	// (0x0003927e) vkb2_cell_t_keypad_pane_cp09

0x13b3,	// (0x00039292) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x13b3,	// (0x00039292) vkb2_cell_t_keypad_pane_cp01

0x13c4,	// (0x000392a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x13c4,	// (0x000392a3) vkb2_cell_t_keypad_pane_cp02

0x13d5,	// (0x000392b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x13d5,	// (0x000392b4) vkb2_cell_t_keypad_pane_cp03

0x13e6,	// (0x000392c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x13e6,	// (0x000392c5) vkb2_cell_t_keypad_pane_cp04

0x13f7,	// (0x000392d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x13f7,	// (0x000392d6) vkb2_cell_t_keypad_pane_cp05

0x1408,	// (0x000392e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1408,	// (0x000392e7) vkb2_cell_t_keypad_pane_cp06

0x141b,	// (0x000392fa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x141b,	// (0x000392fa) vkb2_cell_t_keypad_pane_cp07

0x1430,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1430,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp10

0x0a6c,	// (0x0003894b) vkb2_cell_t_keypad_pane_g1

0x699f,	// (0x0003e87e) vkb2_cell_t_keypad_pane_t1

0xec72,	// (0x00046b51) popup_grid_graphic2_window

0xd7f7,	// (0x000456d6) aid_size_cell_graphic2_ParamLimits

0xd7f7,	// (0x000456d6) aid_size_cell_graphic2

0xd835,	// (0x00045714) bg_popup_window_pane_cp21_ParamLimits

0xd835,	// (0x00045714) bg_popup_window_pane_cp21

0xd843,	// (0x00045722) graphic2_pages_pane_ParamLimits

0xd843,	// (0x00045722) graphic2_pages_pane

0xe0f0,	// (0x00045fcf) grid_graphic2_control_pane_ParamLimits

0xe0f0,	// (0x00045fcf) grid_graphic2_control_pane

0xe138,	// (0x00046017) grid_graphic2_pane_ParamLimits

0xe138,	// (0x00046017) grid_graphic2_pane

0xe1c3,	// (0x000460a2) cell_graphic2_pane

0x77f0,	// (0x0003f6cf) main_comp_mode_pane

0x5c2c,	// (0x0003db0b) list_ai3_gene_pane_ParamLimits

0xd1ac,	// (0x0004508b) bg_popup_window_pane_cp19_ParamLimits

0x6000,	// (0x0003dedf) bg_touch_area_indi_pane_ParamLimits

0x6000,	// (0x0003dedf) bg_touch_area_indi_pane

0x6016,	// (0x0003def5) bg_touch_area_indi_pane_cp01_ParamLimits

0x6016,	// (0x0003def5) bg_touch_area_indi_pane_cp01

0x602e,	// (0x0003df0d) bg_touch_area_indi_pane_cp02_ParamLimits

0x602e,	// (0x0003df0d) bg_touch_area_indi_pane_cp02

0x6048,	// (0x0003df27) bg_touch_area_indi_pane_cp03_ParamLimits

0x6048,	// (0x0003df27) bg_touch_area_indi_pane_cp03

0x6062,	// (0x0003df41) popup_slider_window_g1_ParamLimits

0x607e,	// (0x0003df5d) popup_slider_window_g2_ParamLimits

0x609a,	// (0x0003df79) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00047bd5) popup_slider_window_g_ParamLimits

0x60f6,	// (0x0003dfd5) popup_slider_window_t1_ParamLimits

0x616a,	// (0x0003e049) small_volume_slider_vertical_pane_ParamLimits

0xe1c3,	// (0x000460a2) cell_graphic2_pane_ParamLimits

0xe226,	// (0x00046105) bg_button_pane_cp10_ParamLimits

0xe226,	// (0x00046105) bg_button_pane_cp10

0xe239,	// (0x00046118) bg_button_pane_cp11_ParamLimits

0xe239,	// (0x00046118) bg_button_pane_cp11

0xe24c,	// (0x0004612b) graphic2_pages_pane_g1_ParamLimits

0xe24c,	// (0x0004612b) graphic2_pages_pane_g1

0xe267,	// (0x00046146) graphic2_pages_pane_g2_ParamLimits

0xe267,	// (0x00046146) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00047c99) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00047c99) graphic2_pages_pane_g

0xe27f,	// (0x0004615e) graphic2_pages_pane_t1_ParamLimits

0xe27f,	// (0x0004615e) graphic2_pages_pane_t1

0xe297,	// (0x00046176) cell_graphic2_control_pane_ParamLimits

0xe297,	// (0x00046176) cell_graphic2_control_pane

0xe2cb,	// (0x000461aa) cell_graphic2_pane_g1_ParamLimits

0xe2cb,	// (0x000461aa) cell_graphic2_pane_g1

0xd87f,	// (0x0004575e) cell_graphic2_pane_g2_ParamLimits

0xd87f,	// (0x0004575e) cell_graphic2_pane_g2

0xcb26,	// (0x00044a05) cell_graphic2_pane_g3_ParamLimits

0xcb26,	// (0x00044a05) cell_graphic2_pane_g3

0xd88c,	// (0x0004576b) cell_graphic2_pane_g4_ParamLimits

0xd88c,	// (0x0004576b) cell_graphic2_pane_g4

0xe2d8,	// (0x000461b7) cell_graphic2_pane_g5_ParamLimits

0xe2d8,	// (0x000461b7) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00047c9e) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00047c9e) cell_graphic2_pane_g

0xe2f8,	// (0x000461d7) cell_graphic2_pane_t1_ParamLimits

0xe2f8,	// (0x000461d7) cell_graphic2_pane_t1

0x3095,	// (0x0003af74) grid_highlight_pane_cp11_ParamLimits

0x3095,	// (0x0003af74) grid_highlight_pane_cp11

0x8360,	// (0x0004023f) bg_button_pane_cp05

0xe32d,	// (0x0004620c) cell_graphic2_control_pane_g1

0x4a12,	// (0x0003c8f1) bg_touch_area_indi_pane_g1

0x6c79,	// (0x0003eb58) aid_cmod_rocker_key_size

0x6c83,	// (0x0003eb62) aid_cmode_itu_key_size

0x6c8d,	// (0x0003eb6c) main_cmode_video_pane

0x6c97,	// (0x0003eb76) main_comp_mode_itu_pane

0x6ca3,	// (0x0003eb82) main_comp_mode_rocker_pane

0x6caf,	// (0x0003eb8e) cell_cmode_rocker_pane_ParamLimits

0x6caf,	// (0x0003eb8e) cell_cmode_rocker_pane

0x6cc3,	// (0x0003eba2) cell_cmode_itu_pane_ParamLimits

0x6cc3,	// (0x0003eba2) cell_cmode_itu_pane

0xb973,	// (0x00043852) bg_button_pane_cp06_ParamLimits

0xb973,	// (0x00043852) bg_button_pane_cp06

0x4c8d,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_ParamLimits

0x4c8d,	// (0x0003cb6c) cell_cmode_rocker_pane_g1

0x6211,	// (0x0003e0f0) cell_cmode_rocker_pane_g2_ParamLimits

0x6211,	// (0x0003e0f0) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00047cae) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00047cae) cell_cmode_rocker_pane_g

0x77f0,	// (0x0003f6cf) bg_button_pane_cp07

0x6cda,	// (0x0003ebb9) cell_cmode_itu_pane_g1

0x6ce3,	// (0x0003ebc2) cell_cmode_itu_pane_t1

0x6cf1,	// (0x0003ebd0) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00047cb3) cell_cmode_itu_pane_t

0x643f,	// (0x0003e31e) aid_touch_ctrl_left

0x6447,	// (0x0003e326) aid_touch_ctrl_right

0x77f0,	// (0x0003f6cf) compa_mode_pane

0xe353,	// (0x00046232) aid_cmod_rocker_key_size_cp

0xe35d,	// (0x0004623c) aid_cmode_itu_key_size_cp

0x6d13,	// (0x0003ebf2) compa_mode_pane_g1

0x6d1b,	// (0x0003ebfa) compa_mode_pane_g2

0x6d23,	// (0x0003ec02) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00047cb8) compa_mode_pane_g

0xe367,	// (0x00046246) main_comp_mode_itu_pane_cp

0xe36f,	// (0x0004624e) main_comp_mode_rocker_pane_cp

0xe377,	// (0x00046256) cell_cmode_itu_pane_cp_ParamLimits

0xe377,	// (0x00046256) cell_cmode_itu_pane_cp

0xe38c,	// (0x0004626b) cell_cmode_rocker_pane_cp_ParamLimits

0xe38c,	// (0x0004626b) cell_cmode_rocker_pane_cp

0xb973,	// (0x00043852) bg_button_pane_cp06_cp_ParamLimits

0xb973,	// (0x00043852) bg_button_pane_cp06_cp

0x4c8d,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4c8d,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_cp

0x4a12,	// (0x0003c8f1) cell_cmode_rocker_pane_g2_cp

0x77f0,	// (0x0003f6cf) bg_button_pane_cp07_cp

0xe39e,	// (0x0004627d) cell_cmode_itu_pane_g1_cp

0xe3a7,	// (0x00046286) cell_cmode_itu_pane_t1_cp

0xe3a7,	// (0x00046286) cell_cmode_itu_pane_t2_cp

0xc782,	// (0x00044661) settings_code_pane_cp2

0x821f,	// (0x000400fe) bg_popup_window_pane_cp3_ParamLimits

0x854e,	// (0x0004042d) heading_pane_cp3_ParamLimits

0x855a,	// (0x00040439) listscroll_popup_graphic_pane_ParamLimits

0x07ff,	// (0x000386de) fep_hwr_aid_pane_ParamLimits

0x0df0,	// (0x00038ccf) aid_touch_sctrl_top_ParamLimits

0x0e0b,	// (0x00038cea) sctrl_sk_top_pane_g1_ParamLimits

0x0a6c,	// (0x0003894b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00047bee) sctrl_sk_top_pane_g_ParamLimits

0x0e18,	// (0x00038cf7) sctrl_sk_top_pane_t1_ParamLimits

0x0df0,	// (0x00038ccf) aid_touch_sctrl_bottom_ParamLimits

0x0e18,	// (0x00038cf7) sctrl_sk_bottom_pane_t1_ParamLimits

0x6385,	// (0x0003e264) aid_area_touch_clock

0xb52d,	// (0x0004340c) aid_vkb2_area_top_pane_cell_ParamLimits

0xb52d,	// (0x0004340c) aid_vkb2_area_top_pane_cell

0xb5d8,	// (0x000434b7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb5d8,	// (0x000434b7) aid_vkb2_area_bottom_pane_cell

0x68ea,	// (0x0003e7c9) popup_char_count_window

0x6d79,	// (0x0003ec58) popup_char_count_window_g1

0x6d82,	// (0x0003ec61) popup_char_count_window_g2

0x6d8b,	// (0x0003ec6a) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00047cbf) popup_char_count_window_g

0x6d94,	// (0x0003ec73) popup_char_count_window_t1

0x0ec9,	// (0x00038da8) popup_fep_char_preview_window_ParamLimits

0x0ec9,	// (0x00038da8) popup_fep_char_preview_window

0xb54d,	// (0x0004342c) vkb2_top_candi_pane_ParamLimits

0xb54d,	// (0x0004342c) vkb2_top_candi_pane

0xe3b5,	// (0x00046294) cell_vkb2_top_candi_pane_ParamLimits

0xe3b5,	// (0x00046294) cell_vkb2_top_candi_pane

0x1445,	// (0x00039324) bg_popup_fep_char_preview_window_ParamLimits

0x1445,	// (0x00039324) bg_popup_fep_char_preview_window

0x1453,	// (0x00039332) popup_fep_char_preview_window_t1_ParamLimits

0x1453,	// (0x00039332) popup_fep_char_preview_window_t1

0x6df3,	// (0x0003ecd2) bg_popup_fep_char_preview_window_g1

0x6dfb,	// (0x0003ecda) bg_popup_fep_char_preview_window_g2

0x6e03,	// (0x0003ece2) bg_popup_fep_char_preview_window_g3

0x6e0b,	// (0x0003ecea) bg_popup_fep_char_preview_window_g4

0x6e13,	// (0x0003ecf2) bg_popup_fep_char_preview_window_g5

0x148d,	// (0x0003936c) bg_popup_fep_char_preview_window_g6

0x6e1b,	// (0x0003ecfa) bg_popup_fep_char_preview_window_g7

0x6e23,	// (0x0003ed02) bg_popup_fep_char_preview_window_g8

0x6e2b,	// (0x0003ed0a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00047cc6) bg_popup_fep_char_preview_window_g

0x0a6c,	// (0x0003894b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0a6c,	// (0x0003894b) cell_vkb2_top_candi_pane_g1

0x0a7a,	// (0x00038959) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0a7a,	// (0x00038959) cell_vkb2_top_candi_pane_g2

0x5886,	// (0x0003d765) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5886,	// (0x0003d765) cell_vkb2_top_candi_pane_g3

0x1495,	// (0x00039374) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1495,	// (0x00039374) cell_vkb2_top_candi_pane_g4

0x51ac,	// (0x0003d08b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x51ac,	// (0x0003d08b) cell_vkb2_top_candi_pane_g5

0x14b6,	// (0x00039395) cell_vkb2_top_candi_pane_g6_ParamLimits

0x14b6,	// (0x00039395) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00047cd9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00047cd9) cell_vkb2_top_candi_pane_g

0x14c4,	// (0x000393a3) cell_vkb2_top_candi_pane_t1

0x05d6,	// (0x000384b5) aid_size_touch_slider_mark_ParamLimits

0x05d6,	// (0x000384b5) aid_size_touch_slider_mark

0xe0d4,	// (0x00045fb3) grid_graphic2_catg_pane_ParamLimits

0xe0d4,	// (0x00045fb3) grid_graphic2_catg_pane

0xe192,	// (0x00046071) popup_grid_graphic2_window_t1_ParamLimits

0xe192,	// (0x00046071) popup_grid_graphic2_window_t1

0xe1a8,	// (0x00046087) popup_grid_graphic2_window_t2_ParamLimits

0xe1a8,	// (0x00046087) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00047c94) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00047c94) popup_grid_graphic2_window_t

0x8360,	// (0x0004023f) bg_button_pane_cp05_ParamLimits

0xe32d,	// (0x0004620c) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x000462fe) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x000462fe) cell_graphic2_catg_pane

0x77f0,	// (0x0003f6cf) bg_button_pane_cp12

0xe431,	// (0x00046310) cell_graphic2_catg_pane_g1

0x6351,	// (0x0003e230) cell_tb_ext_pane_t1_ParamLimits

0x1277,	// (0x00039156) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1277,	// (0x00039156) vkb2_top_cell_right_narrow_pane

0x128f,	// (0x0003916e) vkb2_top_cell_right_wide_pane_ParamLimits

0x128f,	// (0x0003916e) vkb2_top_cell_right_wide_pane

0x07f1,	// (0x000386d0) bg_vkb2_func_pane_ParamLimits

0x07f1,	// (0x000386d0) bg_vkb2_func_pane

0x1300,	// (0x000391df) vkb2_top_cell_left_pane_g1_ParamLimits

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp03

0x135e,	// (0x0003923d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x23d6,	// (0x0003a2b5) bg_vkb2_func_pane_g1

0x23de,	// (0x0003a2bd) bg_vkb2_func_pane_g2

0x23ee,	// (0x0003a2cd) bg_vkb2_func_pane_g3

0x23e6,	// (0x0003a2c5) bg_vkb2_func_pane_g4

0x23f6,	// (0x0003a2d5) bg_vkb2_func_pane_g5

0x23fe,	// (0x0003a2dd) bg_vkb2_func_pane_g6

0x2406,	// (0x0003a2e5) bg_vkb2_func_pane_g7

0x240e,	// (0x0003a2ed) bg_vkb2_func_pane_g8

0x23ce,	// (0x0003a2ad) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00047ce6) bg_vkb2_func_pane_g

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp01

0x1300,	// (0x000391df) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1300,	// (0x000391df) vkb2_top_cell_right_wide_pane_g1

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x07f1,	// (0x000386d0) bg_vkb2_fuc_pane_cp02

0x135e,	// (0x0003923d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x135e,	// (0x0003923d) vkb2_top_cell_right_narrow_pane_g1

0xd0e6,	// (0x00044fc5) aid_touch_area_decrease_ParamLimits

0xd0e6,	// (0x00044fc5) aid_touch_area_decrease

0xd120,	// (0x00044fff) aid_touch_area_increase_ParamLimits

0xd120,	// (0x00044fff) aid_touch_area_increase

0xd148,	// (0x00045027) aid_touch_area_mute_ParamLimits

0xd148,	// (0x00045027) aid_touch_area_mute

0xd178,	// (0x00045057) aid_touch_area_slider_ParamLimits

0xd178,	// (0x00045057) aid_touch_area_slider

0xd1b8,	// (0x00045097) popup_slider_window_g4_ParamLimits

0xd1b8,	// (0x00045097) popup_slider_window_g4

0xd1e0,	// (0x000450bf) popup_slider_window_g5_ParamLimits

0xd1e0,	// (0x000450bf) popup_slider_window_g5

0xd214,	// (0x000450f3) popup_slider_window_g6_ParamLimits

0xd214,	// (0x000450f3) popup_slider_window_g6

0x6124,	// (0x0003e003) popup_slider_window_t2_ParamLimits

0x6124,	// (0x0003e003) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00047be2) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00047be2) popup_slider_window_t

0xd230,	// (0x0004510f) slider_pane_ParamLimits

0xd230,	// (0x0004510f) slider_pane

0x6e4e,	// (0x0003ed2d) slider_pane_g1_ParamLimits

0x6e4e,	// (0x0003ed2d) slider_pane_g1

0x6e62,	// (0x0003ed41) slider_pane_g2_ParamLimits

0x6e62,	// (0x0003ed41) slider_pane_g2

0x6e78,	// (0x0003ed57) slider_pane_g3_ParamLimits

0x6e78,	// (0x0003ed57) slider_pane_g3

0x0003,

0xfe1a,	// (0x00047cf9) slider_pane_g_ParamLimits

0xfe1a,	// (0x00047cf9) slider_pane_g

0xaaff,	// (0x000429de) popup_tb_float_extension_window_ParamLimits

0xaaff,	// (0x000429de) popup_tb_float_extension_window

0x6ea4,	// (0x0003ed83) aid_size_cell_tb_float_ext

0x77f0,	// (0x0003f6cf) bg_popup_sub_window_cp28

0x6eb0,	// (0x0003ed8f) grid_tb_float_ext_pane

0x6ebc,	// (0x0003ed9b) cell_tb_float_ext_pane_ParamLimits

0x6ebc,	// (0x0003ed9b) cell_tb_float_ext_pane

0x6ed8,	// (0x0003edb7) cell_tb_float_ext_pane_g1

0x6ee1,	// (0x0003edc0) grid_highlight_pane_cp12

0xb149,	// (0x00043028) cell_last_hwr_side_pane_ParamLimits

0xb149,	// (0x00043028) cell_last_hwr_side_pane

0x4a12,	// (0x0003c8f1) cell_last_hwr_side_pane_g1

0x6eea,	// (0x0003edc9) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00047d02) cell_last_hwr_side_pane_g

0xb6b4,	// (0x00043593) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb6b4,	// (0x00043593) vkb2_area_bottom_space_btn_pane

0x0a6c,	// (0x0003894b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x699f,	// (0x0003e87e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x14c4,	// (0x000393a3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x14e2,	// (0x000393c1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x14e2,	// (0x000393c1) vkb2_area_bottom_space_btn_pane_g1

0x151c,	// (0x000393fb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x151c,	// (0x000393fb) vkb2_area_bottom_space_btn_pane_g2

0x1552,	// (0x00039431) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1552,	// (0x00039431) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00047d07) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00047d07) vkb2_area_bottom_space_btn_pane_g

0x08b6,	// (0x00038795) cel_fep_hwr_func_pane_ParamLimits

0x08b6,	// (0x00038795) cel_fep_hwr_func_pane

0xb11e,	// (0x00042ffd) cell_hwr_side_button_pane_ParamLimits

0xb11e,	// (0x00042ffd) cell_hwr_side_button_pane

0x6385,	// (0x0003e264) aid_area_touch_clock_ParamLimits

0x8360,	// (0x0004023f) bg_uniindi_top_pane_ParamLimits

0x6399,	// (0x0003e278) uniindi_top_pane_g1_ParamLimits

0x63af,	// (0x0003e28e) uniindi_top_pane_g2_ParamLimits

0x63bb,	// (0x0003e29a) uniindi_top_pane_g3_ParamLimits

0x63cc,	// (0x0003e2ab) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00047c1a) uniindi_top_pane_g_ParamLimits

0x63d9,	// (0x0003e2b8) uniindi_top_pane_t1_ParamLimits

0x8360,	// (0x0004023f) bg_vkb2_func_pane_cp01_ParamLimits

0x8360,	// (0x0004023f) bg_vkb2_func_pane_cp01

0x6ef3,	// (0x0003edd2) cel_fep_hwr_func_pane_g1_ParamLimits

0x6ef3,	// (0x0003edd2) cel_fep_hwr_func_pane_g1

0x8360,	// (0x0004023f) bg_vkb2_func_pane_cp02_ParamLimits

0x8360,	// (0x0004023f) bg_vkb2_func_pane_cp02

0x6ef3,	// (0x0003edd2) cell_hwr_side_button_pane_g1_ParamLimits

0x6ef3,	// (0x0003edd2) cell_hwr_side_button_pane_g1

0x224f,	// (0x0003a12e) status_pane_g4_ParamLimits

0x224f,	// (0x0003a12e) status_pane_g4

0x2269,	// (0x0003a148) status_pane_t1

0x47b1,	// (0x0003c690) form2_midp_gauge_slider_cont_pane

0x47b9,	// (0x0003c698) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca6c,	// (0x0004494b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca7e,	// (0x0004495d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x000479da) form2_midp_gauge_slider_pane_t_ParamLimits

0x47ef,	// (0x0003c6ce) form2_midp_slider_pane_ParamLimits

0x0e89,	// (0x00038d68) aid_size_cell_func_vkb2_ParamLimits

0x0e89,	// (0x00038d68) aid_size_cell_func_vkb2

0x6e90,	// (0x0003ed6f) slider_pane_g4_ParamLimits

0x6e90,	// (0x0003ed6f) slider_pane_g4

0xb715,	// (0x000435f4) form2_midp_gauge_slider_pane_t2_cp01

0xb723,	// (0x00043602) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb723,	// (0x00043602) form2_midp_gauge_slider_pane_t3_cp01

0x15c7,	// (0x000394a6) form2_midp_slider_pane_cp01

0x77f0,	// (0x0003f6cf) navi_smil_pane

0x6f2c,	// (0x0003ee0b) navi_smil_pane_g1

0x6f34,	// (0x0003ee13) navi_smil_pane_t1

0x6f01,	// (0x0003ede0) form2_midp_slider_pane_g1

0x6f0a,	// (0x0003ede9) form2_midp_slider_pane_g2

0x6f12,	// (0x0003edf1) form2_midp_slider_pane_g3

0x6f01,	// (0x0003ede0) form2_midp_slider_pane_g4

0xe43a,	// (0x00046319) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00047d10) form2_midp_slider_pane_g

0x158c,	// (0x0003946b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x158c,	// (0x0003946b) vkb2_area_bottom_space_btn_pane_g4

0xace6,	// (0x00042bc5) lc0_navi_pane_ParamLimits

0xace6,	// (0x00042bc5) lc0_navi_pane

0xad56,	// (0x00042c35) lc0_stat_indi_pane_ParamLimits

0xad56,	// (0x00042c35) lc0_stat_indi_pane

0xad6b,	// (0x00042c4a) ls0_title_pane_ParamLimits

0xad6b,	// (0x00042c4a) ls0_title_pane

0xb973,	// (0x00043852) bg_popup_sub_pane_cp14_ParamLimits

0x636c,	// (0x0003e24b) list_uniindi_pane_ParamLimits

0x6378,	// (0x0003e257) uniindi_top_pane_ParamLimits

0x6417,	// (0x0003e2f6) list_single_uniindi_pane_g1_ParamLimits

0x642a,	// (0x0003e309) list_single_uniindi_pane_t1_ParamLimits

0xb740,	// (0x0004361f) lc0_stat_clock_pane_ParamLimits

0xb740,	// (0x0004361f) lc0_stat_clock_pane

0xe443,	// (0x00046322) lc0_stat_indi_pane_g1_ParamLimits

0xe443,	// (0x00046322) lc0_stat_indi_pane_g1

0xe450,	// (0x0004632f) lc0_stat_indi_pane_g2_ParamLimits

0xe450,	// (0x0004632f) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00047d1b) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00047d1b) lc0_stat_indi_pane_g

0xb74d,	// (0x0004362c) lc0_uni_indicator_pane_ParamLimits

0xb74d,	// (0x0004362c) lc0_uni_indicator_pane

0xe45d,	// (0x0004633c) ls0_title_pane_g1_ParamLimits

0xe45d,	// (0x0004633c) ls0_title_pane_g1

0xe471,	// (0x00046350) ls0_title_pane_t1_ParamLimits

0xe471,	// (0x00046350) ls0_title_pane_t1

0xb75a,	// (0x00043639) lc0_uni_indicator_pane_g1_ParamLimits

0xb75a,	// (0x00043639) lc0_uni_indicator_pane_g1

0x6fa6,	// (0x0003ee85) lc0_stat_clock_pane_t1

0x77f0,	// (0x0003f6cf) main_ai5_pane

0x6fb4,	// (0x0003ee93) ai5_sk_pane_ParamLimits

0x6fb4,	// (0x0003ee93) ai5_sk_pane

0xe49f,	// (0x0004637e) cell_ai5_widget_pane_ParamLimits

0xe49f,	// (0x0004637e) cell_ai5_widget_pane

0x755d,	// (0x0003f43c) aid_size_cell_widget_grid

0x756b,	// (0x0003f44a) bg_ai5_widget_pane_ParamLimits

0x756b,	// (0x0003f44a) bg_ai5_widget_pane

0x75df,	// (0x0003f4be) cell_ai5_widget_pane_g2

0x75ef,	// (0x0003f4ce) cell_ai5_widget_pane_g3

0x7606,	// (0x0003f4e5) cell_ai5_widget_pane_g4

0x7612,	// (0x0003f4f1) cell_ai5_widget_pane_g5

0xe7f6,	// (0x000466d5) cell_ai5_widget_pane_g6

0xe802,	// (0x000466e1) cell_ai5_widget_pane_g7

0x7672,	// (0x0003f551) cell_ai5_widget_pane_t1_ParamLimits

0x7672,	// (0x0003f551) cell_ai5_widget_pane_t1

0x768f,	// (0x0003f56e) cell_ai5_widget_pane_t2_ParamLimits

0x768f,	// (0x0003f56e) cell_ai5_widget_pane_t2

0x76a7,	// (0x0003f586) cell_ai5_widget_pane_t3_ParamLimits

0x76a7,	// (0x0003f586) cell_ai5_widget_pane_t3

0x76bf,	// (0x0003f59e) cell_ai5_widget_pane_t4_ParamLimits

0x76bf,	// (0x0003f59e) cell_ai5_widget_pane_t4

0x76dc,	// (0x0003f5bb) cell_ai5_widget_pane_t5_ParamLimits

0x76dc,	// (0x0003f5bb) cell_ai5_widget_pane_t5

0x76fb,	// (0x0003f5da) cell_ai5_widget_pane_t6_ParamLimits

0x76fb,	// (0x0003f5da) cell_ai5_widget_pane_t6

0x770d,	// (0x0003f5ec) cell_ai5_widget_pane_t7_ParamLimits

0x770d,	// (0x0003f5ec) cell_ai5_widget_pane_t7

0x7726,	// (0x0003f605) cell_ai5_widget_pane_t8_ParamLimits

0x7726,	// (0x0003f605) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00047d35) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00047d35) cell_ai5_widget_pane_t

0x777a,	// (0x0003f659) grid_ai5_widget_pane

0xb973,	// (0x00043852) highlight_cell_ai5_widget_pane_ParamLimits

0xb973,	// (0x00043852) highlight_cell_ai5_widget_pane

0xe80e,	// (0x000466ed) ai5_sk_left_pane

0xe818,	// (0x000466f7) ai5_sk_middle_pane

0xe822,	// (0x00046701) ai5_sk_right_pane

0x77ac,	// (0x0003f68b) bg_ai5_widget_pane_g1_ParamLimits

0x77ac,	// (0x0003f68b) bg_ai5_widget_pane_g1

0x77b8,	// (0x0003f697) bg_ai5_widget_pane_g2_ParamLimits

0x77b8,	// (0x0003f697) bg_ai5_widget_pane_g2

0x77c4,	// (0x0003f6a3) bg_ai5_widget_pane_g3_ParamLimits

0x77c4,	// (0x0003f6a3) bg_ai5_widget_pane_g3

0x77d0,	// (0x0003f6af) bg_ai5_widget_pane_g4_ParamLimits

0x77d0,	// (0x0003f6af) bg_ai5_widget_pane_g4

0x77dc,	// (0x0003f6bb) bg_ai5_widget_pane_g5_ParamLimits

0x77dc,	// (0x0003f6bb) bg_ai5_widget_pane_g5

0x7826,	// (0x0003f705) bg_ai5_widget_pane_g6_ParamLimits

0x7826,	// (0x0003f705) bg_ai5_widget_pane_g6

0x7832,	// (0x0003f711) bg_ai5_widget_pane_g7_ParamLimits

0x7832,	// (0x0003f711) bg_ai5_widget_pane_g7

0x783e,	// (0x0003f71d) bg_ai5_widget_pane_g8_ParamLimits

0x783e,	// (0x0003f71d) bg_ai5_widget_pane_g8

0x784a,	// (0x0003f729) bg_ai5_widget_pane_g9_ParamLimits

0x784a,	// (0x0003f729) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00047d4a) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00047d4a) bg_ai5_widget_pane_g

0x7880,	// (0x0003f75f) cell_shortcut_ai5_widget_pane_ParamLimits

0x7880,	// (0x0003f75f) cell_shortcut_ai5_widget_pane

0xf333,	// (0x00047212) bg_cell_shortcut_ai5_widget_pane

0x7893,	// (0x0003f772) cell_grid_ai5_widget_pane_g1

0xf333,	// (0x00047212) highlight_cell_shortcut_ai5_widget_pane

0x23d6,	// (0x0003a2b5) ai5_sk_left_pane_g1

0x789c,	// (0x0003f77b) ai5_sk_left_pane_g2

0x78a4,	// (0x0003f783) ai5_sk_left_pane_g3

0x78ac,	// (0x0003f78b) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00047d5d) ai5_sk_left_pane_g

0x78b4,	// (0x0003f793) ai5_sk_left_pane_t1

0x23de,	// (0x0003a2bd) ai5_sk_right_pane_g1

0x78c2,	// (0x0003f7a1) ai5_sk_right_pane_g2

0x78ca,	// (0x0003f7a9) ai5_sk_right_pane_g3

0x78d2,	// (0x0003f7b1) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00047d66) ai5_sk_right_pane_g

0x78da,	// (0x0003f7b9) ai5_sk_right_pane_t1

0x23de,	// (0x0003a2bd) ai5_sk_middle_pane_g1

0x23d6,	// (0x0003a2b5) ai5_sk_middle_pane_g2

0x23f6,	// (0x0003a2d5) ai5_sk_middle_pane_g3

0x78ca,	// (0x0003f7a9) ai5_sk_middle_pane_g4

0x78a4,	// (0x0003f783) ai5_sk_middle_pane_g5

0x78e8,	// (0x0003f7c7) ai5_sk_middle_pane_g6

0xe82c,	// (0x0004670b) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00047d6f) ai5_sk_middle_pane_g

0xabd0,	// (0x00042aaf) aid_touch_area_size_lc0_ParamLimits

0xabd0,	// (0x00042aaf) aid_touch_area_size_lc0

0x0a9b,	// (0x0003897a) cell_hwr_candidate_pane_t1_ParamLimits

0x1f06,	// (0x00039de5) aid_touch_navi_pane

0xae76,	// (0x00042d55) status_dt_navi_pane_ParamLimits

0xae76,	// (0x00042d55) status_dt_navi_pane

0xae8e,	// (0x00042d6d) status_dt_sta_pane_ParamLimits

0xae8e,	// (0x00042d6d) status_dt_sta_pane

0xe834,	// (0x00046713) dt_sta_controll_pane

0xe841,	// (0x00046720) dt_sta_indi_pane

0xe84e,	// (0x0004672d) dt_sta_title_pane

0x8360,	// (0x0004023f) bg_dt_sta_indi_pane_ParamLimits

0x8360,	// (0x0004023f) bg_dt_sta_indi_pane

0xe860,	// (0x0004673f) dt_sta_battery_pane

0xe868,	// (0x00046747) dt_sta_indi_pane_g1

0xe871,	// (0x00046750) dt_sta_indi_pane_g2

0xe87a,	// (0x00046759) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00047d7e) dt_sta_indi_pane_g

0xe883,	// (0x00046762) dt_sta_signal_pane

0xb973,	// (0x00043852) bg_dt_sta_title_pane_ParamLimits

0xb973,	// (0x00043852) bg_dt_sta_title_pane

0xe88c,	// (0x0004676b) dt_sta_title_pane_g1

0xe894,	// (0x00046773) dt_sta_title_pane_t1_ParamLimits

0xe894,	// (0x00046773) dt_sta_title_pane_t1

0x77f0,	// (0x0003f6cf) bg_dt_sta_control_pane

0xe8a9,	// (0x00046788) dt_sta_controll_pane_g1

0xe8b2,	// (0x00046791) bg_dt_sta_title_pane_g1

0xe8bb,	// (0x0004679a) bg_dt_sta_title_pane_g2

0xe8c4,	// (0x000467a3) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00047d85) bg_dt_sta_title_pane_g

0x4a12,	// (0x0003c8f1) bg_dt_sta_indi_pane_g1

0x7996,	// (0x0003f875) dt_sta_signal_pane_g1

0x799e,	// (0x0003f87d) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00047d8c) dt_sta_signal_pane_g

0x79a6,	// (0x0003f885) dt_sta_battery_pane_g1

0x79af,	// (0x0003f88e) dt_sta_battery_pane_t1

0x4a12,	// (0x0003c8f1) bg_dt_sta_control_pane_g1

0xbed7,	// (0x00043db6) fep_china_uni_eep_pane

0xbedf,	// (0x00043dbe) fep_china_uni_entry_pane_ParamLimits

0xbeef,	// (0x00043dce) popup_fep_china_uni_window_g1_ParamLimits

0xbeff,	// (0x00043dde) popup_fep_china_uni_window_g2_ParamLimits

0xbeff,	// (0x00043dde) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x000475fc) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x000475fc) popup_fep_china_uni_window_g

0x79be,	// (0x0003f89d) fep_china_uni_eep_pane_g1

0x79c6,	// (0x0003f8a5) fep_china_uni_eep_pane_t1

0x6f23,	// (0x0003ee02) aid_touch_area_size_smil_player

0x205e,	// (0x00039f3d) lc0_clock_pane

0x225d,	// (0x0003a13c) status_pane_g5_ParamLimits

0x225d,	// (0x0003a13c) status_pane_g5

0xa625,	// (0x00042504) popup_keymap_window

0x221b,	// (0x0003a0fa) status_icon_pane

0x75ef,	// (0x0003f4ce) cell_ai5_widget_pane_g3_ParamLimits

0x7606,	// (0x0003f4e5) cell_ai5_widget_pane_g4_ParamLimits

0x7612,	// (0x0003f4f1) cell_ai5_widget_pane_g5_ParamLimits

0x7636,	// (0x0003f515) cell_ai5_widget_pane_g8_ParamLimits

0x7636,	// (0x0003f515) cell_ai5_widget_pane_g8

0x764a,	// (0x0003f529) cell_ai5_widget_pane_g9_ParamLimits

0x764a,	// (0x0003f529) cell_ai5_widget_pane_g9

0x765e,	// (0x0003f53d) cell_ai5_widget_pane_g10_ParamLimits

0x765e,	// (0x0003f53d) cell_ai5_widget_pane_g10

0x79d5,	// (0x0003f8b4) status_icon_pane_g1

0x77f0,	// (0x0003f6cf) bg_popup_sub_pane_cp13

0x79dd,	// (0x0003f8bc) popup_keymap_window_t1

0xa306,	// (0x000421e5) control_pane_g6_ParamLimits

0xa306,	// (0x000421e5) control_pane_g6

0xa313,	// (0x000421f2) control_pane_g7_ParamLimits

0xa313,	// (0x000421f2) control_pane_g7

0xa320,	// (0x000421ff) control_pane_g8_ParamLimits

0xa320,	// (0x000421ff) control_pane_g8

0xe834,	// (0x00046713) dt_sta_controll_pane_ParamLimits

0xe841,	// (0x00046720) dt_sta_indi_pane_ParamLimits

0xe84e,	// (0x0004672d) dt_sta_title_pane_ParamLimits

0x8784,	// (0x00040663) aid_size_touch_scroll_bar_cale

0xed4f,	// (0x00046c2e) popup_discreet_window_ParamLimits

0xed4f,	// (0x00046c2e) popup_discreet_window

0x92f7,	// (0x000411d6) popup_sk_window

0x2a1e,	// (0x0003a8fd) bg_popup_sub_pane_cp28_ParamLimits

0x2a1e,	// (0x0003a8fd) bg_popup_sub_pane_cp28

0x79eb,	// (0x0003f8ca) popup_discreet_window_g1_ParamLimits

0x79eb,	// (0x0003f8ca) popup_discreet_window_g1

0x7a0b,	// (0x0003f8ea) popup_discreet_window_t1_ParamLimits

0x7a0b,	// (0x0003f8ea) popup_discreet_window_t1

0x7a29,	// (0x0003f908) popup_discreet_window_t2_ParamLimits

0x7a29,	// (0x0003f908) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00047d91) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00047d91) popup_discreet_window_t

0x15fd,	// (0x000394dc) popup_sk_window_g1

0x1607,	// (0x000394e6) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00047d98) popup_sk_window_g

0x1611,	// (0x000394f0) popup_sk_window_t1

0x1621,	// (0x00039500) popup_sk_window_t1_copy1

0x75df,	// (0x0003f4be) cell_ai5_widget_pane_g2_ParamLimits

0x7738,	// (0x0003f617) cell_ai5_widget_pane_t9_ParamLimits

0x7738,	// (0x0003f617) cell_ai5_widget_pane_t9

0x77f0,	// (0x0003f6cf) main_fep_fshwr2_pane

0xb779,	// (0x00043658) aid_fshwr2_btn_pane

0xb78a,	// (0x00043669) aid_fshwr2_syb_pane

0xb79b,	// (0x0004367a) aid_fshwr2_txt_pane

0xb7a7,	// (0x00043686) fshwr2_func_candi_pane

0xb7c8,	// (0x000436a7) fshwr2_hwr_syb_pane

0xb7e5,	// (0x000436c4) fshwr2_icf_pane

0xec72,	// (0x00046b51) fshwr2_icf_bg_pane

0x16a3,	// (0x00039582) fshwr2_icf_pane_t1_ParamLimits

0x16a3,	// (0x00039582) fshwr2_icf_pane_t1

0xbe55,	// (0x00043d34) fshwr2_func_candi_pane_g1

0xe8cd,	// (0x000467ac) fshwr2_func_candi_row_pane_ParamLimits

0xe8cd,	// (0x000467ac) fshwr2_func_candi_row_pane

0xb811,	// (0x000436f0) cell_fshwr2_syb_pane_ParamLimits

0xb811,	// (0x000436f0) cell_fshwr2_syb_pane

0x0a6c,	// (0x0003894b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0a6c,	// (0x0003894b) fshwr2_hwr_syb_pane_g1

0xec72,	// (0x00046b51) bg_popup_call_pane_cp01

0xb827,	// (0x00043706) fshwr2_func_candi_cell_pane_ParamLimits

0xb827,	// (0x00043706) fshwr2_func_candi_cell_pane

0xe8dd,	// (0x000467bc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe8dd,	// (0x000467bc) fshwr2_func_candi_cell_bg_pane

0xb857,	// (0x00043736) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb857,	// (0x00043736) fshwr2_func_candi_cell_pane_g1

0xb886,	// (0x00043765) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb886,	// (0x00043765) fshwr2_func_candi_cell_pane_t1

0xec72,	// (0x00046b51) bg_button_pane_cp08

0x7a97,	// (0x0003f976) cell_fshwr2_syb_bg_pane

0xb899,	// (0x00043778) cell_fshwr2_syb_bg_pane_g1

0xb8a1,	// (0x00043780) cell_fshwr2_syb_bg_pane_t1

0xb973,	// (0x00043852) main_tmo_pane

0xc57f,	// (0x0004445e) uni_indicator_pane_g1_ParamLimits

0xc595,	// (0x00044474) uni_indicator_pane_g2_ParamLimits

0xc5ab,	// (0x0004448a) uni_indicator_pane_g3_ParamLimits

0xc5c0,	// (0x0004449f) uni_indicator_pane_g4_ParamLimits

0xc5c0,	// (0x0004449f) uni_indicator_pane_g4

0x3597,	// (0x0003b476) uni_indicator_pane_g5_ParamLimits

0x3597,	// (0x0003b476) uni_indicator_pane_g5

0x3597,	// (0x0003b476) uni_indicator_pane_g6_ParamLimits

0x3597,	// (0x0003b476) uni_indicator_pane_g6

0xf91c,	// (0x000477fb) uni_indicator_pane_g_ParamLimits

0xd0b6,	// (0x00044f95) popup_tmo_note_window_ParamLimits

0xd0b6,	// (0x00044f95) popup_tmo_note_window

0x0e6b,	// (0x00038d4a) fshwr2_bg_pane

0xb877,	// (0x00043756) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb877,	// (0x00043756) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00047d9d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00047d9d) fshwr2_func_candi_cell_pane_g

0x0a54,	// (0x00038933) bg_popup_window_pane_cp01

0x174f,	// (0x0003962e) bg_popup_window_pane_g1_cp01

0x7a9f,	// (0x0003f97e) bg_popup_window_pane_cp22_ParamLimits

0x7a9f,	// (0x0003f97e) bg_popup_window_pane_cp22

0x7aad,	// (0x0003f98c) listscroll_tmo_link_pane_ParamLimits

0x7aad,	// (0x0003f98c) listscroll_tmo_link_pane

0x7aed,	// (0x0003f9cc) popup_tmo_note_window_g1_ParamLimits

0x7aed,	// (0x0003f9cc) popup_tmo_note_window_g1

0x7afa,	// (0x0003f9d9) tmo_note_info_pane_ParamLimits

0x7afa,	// (0x0003f9d9) tmo_note_info_pane

0xe8e9,	// (0x000467c8) list_tmo_note_info_pane_g1_ParamLimits

0xe8e9,	// (0x000467c8) list_tmo_note_info_pane_g1

0x7b2b,	// (0x0003fa0a) list_tmo_note_info_pane_g2_ParamLimits

0x7b2b,	// (0x0003fa0a) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00047da2) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00047da2) list_tmo_note_info_pane_g

0x7b47,	// (0x0003fa26) list_tmo_note_info_text_pane_ParamLimits

0x7b47,	// (0x0003fa26) list_tmo_note_info_text_pane

0x7bcc,	// (0x0003faab) list_tmo_link_pane

0x7bd9,	// (0x0003fab8) scroll_pane_cp20

0x7be6,	// (0x0003fac5) list_single_tmo_link_pane_ParamLimits

0x7be6,	// (0x0003fac5) list_single_tmo_link_pane

0x7bf6,	// (0x0003fad5) list_single_tmo_link_pane_t1

0x7c04,	// (0x0003fae3) list_tmo_note_info_text_pane_t1_ParamLimits

0x7c04,	// (0x0003fae3) list_tmo_note_info_text_pane_t1

0x9d40,	// (0x00041c1f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d40,	// (0x00041c1f) aid_size_touch_scroll_bar_cp01

0x9c82,	// (0x00041b61) aid_size_touch_slider_marker

0x92e7,	// (0x000411c6) popup_settings_window_ParamLimits

0x92e7,	// (0x000411c6) popup_settings_window

0xda44,	// (0x00045923) popup_candi_list_indi_window

0x1f06,	// (0x00039de5) aid_touch_navi_pane_ParamLimits

0x0dc4,	// (0x00038ca3) rs_clock_indi_pane

0x0dcd,	// (0x00038cac) sctrl_sk_bottom_pane_ParamLimits

0x0dde,	// (0x00038cbd) sctrl_sk_top_pane_ParamLimits

0x0ee3,	// (0x00038dc2) popup_fep_tooltip_window

0x755d,	// (0x0003f43c) aid_size_cell_widget_grid_ParamLimits

0x75ca,	// (0x0003f4a9) cell_ai5_widget_pane_g1_ParamLimits

0x75ca,	// (0x0003f4a9) cell_ai5_widget_pane_g1

0xe7f6,	// (0x000466d5) cell_ai5_widget_pane_g6_ParamLimits

0xe802,	// (0x000466e1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00047d20) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00047d20) cell_ai5_widget_pane_g

0x775c,	// (0x0003f63b) cell_ai5_widget_pane_t10_ParamLimits

0x775c,	// (0x0003f63b) cell_ai5_widget_pane_t10

0x777a,	// (0x0003f659) grid_ai5_widget_pane_ParamLimits

0x7856,	// (0x0003f735) cell_contacts_ai5_widget_pane_ParamLimits

0x7856,	// (0x0003f735) cell_contacts_ai5_widget_pane

0x7a3e,	// (0x0003f91d) popup_discreet_window_t3_ParamLimits

0x7a3e,	// (0x0003f91d) popup_discreet_window_t3

0xb7fd,	// (0x000436dc) popup_fshwr2_char_preview_window_ParamLimits

0xb7fd,	// (0x000436dc) popup_fshwr2_char_preview_window

0xe900,	// (0x000467df) tmo_note_info_pane_t1

0xe915,	// (0x000467f4) tmo_note_info_pane_t2

0xe92e,	// (0x0004680d) tmo_note_info_pane_t3

0x7ba8,	// (0x0003fa87) tmo_note_info_pane_t4

0x7bba,	// (0x0003fa99) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00047da7) tmo_note_info_pane_t

0x7bcc,	// (0x0003faab) list_tmo_link_pane_ParamLimits

0x7bd9,	// (0x0003fab8) scroll_pane_cp20_ParamLimits

0xec72,	// (0x00046b51) bg_popup_fep_char_preview_window_cp01

0x7c1d,	// (0x0003fafc) popup_fshwr2_char_preview_window_t1

0x7c2b,	// (0x0003fb0a) popup_candi_list_indi_window_g1

0x7c34,	// (0x0003fb13) bg_cell_contacts_ai5_widget_pane

0x7c40,	// (0x0003fb1f) cell_contacts_ai5_widget_pane_g1

0x7c55,	// (0x0003fb34) cell_contacts_ai5_widget_pane_g2

0x7c61,	// (0x0003fb40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00047db2) cell_contacts_ai5_widget_pane_g

0x7c6d,	// (0x0003fb4c) cell_contacts_ai5_widget_pane_t1

0xb973,	// (0x00043852) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9a8,	// (0x00046887) settings_container_pane

0xf333,	// (0x00047212) listscroll_set_pane_copy1

0x4133,	// (0x0003c012) scroll_pane_cp121_copy1

0x7cf0,	// (0x0003fbcf) set_content_pane_copy1

0xe9b4,	// (0x00046893) aid_height_set_list_copy1_ParamLimits

0xe9b4,	// (0x00046893) aid_height_set_list_copy1

0x3797,	// (0x0003b676) aid_size_parent_copy1_ParamLimits

0x3797,	// (0x0003b676) aid_size_parent_copy1

0xe9c0,	// (0x0004689f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9c0,	// (0x0004689f) button_value_adjust_pane_cp6_copy1

0x0144,	// (0x00038023) list_highlight_pane_cp2_copy1_ParamLimits

0x0144,	// (0x00038023) list_highlight_pane_cp2_copy1

0xe9d4,	// (0x000468b3) list_set_pane_copy1_ParamLimits

0xe9d4,	// (0x000468b3) list_set_pane_copy1

0xe943,	// (0x00046822) main_pane_set_t1_copy1_ParamLimits

0xe943,	// (0x00046822) main_pane_set_t1_copy1

0xe97d,	// (0x0004685c) main_pane_set_t2_copy1_ParamLimits

0xe97d,	// (0x0004685c) main_pane_set_t2_copy1

0xea9b,	// (0x0004697a) main_pane_set_t3_copy1

0xeaa9,	// (0x00046988) main_pane_set_t4_copy1

0xe99c,	// (0x0004687b) set_content_pane_g1_copy1_ParamLimits

0xe99c,	// (0x0004687b) set_content_pane_g1_copy1

0xeab7,	// (0x00046996) setting_code_pane_copy1

0x7e03,	// (0x0003fce2) setting_slider_graphic_pane_copy1

0x7e03,	// (0x0003fce2) setting_slider_pane_copy1

0x7e03,	// (0x0003fce2) setting_text_pane_copy1

0x7e03,	// (0x0003fce2) setting_volume_pane_copy1

0xeab7,	// (0x00046996) settings_code_pane_cp2_copy1

0xeabf,	// (0x0004699e) settings_code_pane_cp_copy1_ParamLimits

0xeabf,	// (0x0004699e) settings_code_pane_cp_copy1

0xb8b0,	// (0x0004378f) volume_set_pane_copy1

0xead3,	// (0x000469b2) volume_set_pane_g10_copy1

0xeadf,	// (0x000469be) volume_set_pane_g1_copy1

0xeae9,	// (0x000469c8) volume_set_pane_g2_copy1

0xeaf3,	// (0x000469d2) volume_set_pane_g3_copy1

0xeafd,	// (0x000469dc) volume_set_pane_g4_copy1

0xeb07,	// (0x000469e6) volume_set_pane_g5_copy1

0xeb11,	// (0x000469f0) volume_set_pane_g6_copy1

0xeb1b,	// (0x000469fa) volume_set_pane_g7_copy1

0xeb25,	// (0x00046a04) volume_set_pane_g8_copy1

0xeb2f,	// (0x00046a0e) volume_set_pane_g9_copy1

0x821f,	// (0x000400fe) bg_set_opt_pane_cp_copy1_ParamLimits

0x821f,	// (0x000400fe) bg_set_opt_pane_cp_copy1

0x1764,	// (0x00039643) setting_slider_pane_t1_copy1_ParamLimits

0x1764,	// (0x00039643) setting_slider_pane_t1_copy1

0xb8bc,	// (0x0004379b) setting_slider_pane_t2_copy1_ParamLimits

0xb8bc,	// (0x0004379b) setting_slider_pane_t2_copy1

0xb8d6,	// (0x000437b5) setting_slider_pane_t3_copy1_ParamLimits

0xb8d6,	// (0x000437b5) setting_slider_pane_t3_copy1

0xb8ee,	// (0x000437cd) slider_set_pane_copy1_ParamLimits

0xb8ee,	// (0x000437cd) slider_set_pane_copy1

0xb9ce,	// (0x000438ad) set_opt_bg_pane_g1_copy2

0xb9d6,	// (0x000438b5) set_opt_bg_pane_g2_copy2

0x7e85,	// (0x0003fd64) set_opt_bg_pane_g3_copy2

0xb9e6,	// (0x000438c5) set_opt_bg_pane_g4_copy2

0xb9ee,	// (0x000438cd) set_opt_bg_pane_g5_copy2

0xb9f6,	// (0x000438d5) set_opt_bg_pane_g6_copy2

0xeb39,	// (0x00046a18) set_opt_bg_pane_g7_copy2

0x7e99,	// (0x0003fd78) set_opt_bg_pane_g8_copy2

0x7ea3,	// (0x0003fd82) set_opt_bg_pane_g9_copy2

0x17ca,	// (0x000396a9) aid_size_touch_slider_mark_copy1_ParamLimits

0x17ca,	// (0x000396a9) aid_size_touch_slider_mark_copy1

0x7ead,	// (0x0003fd8c) slider_set_pane_g1_copy1

0x17de,	// (0x000396bd) slider_set_pane_g2_copy1

0x05f6,	// (0x000384d5) slider_set_pane_g3_copy1_ParamLimits

0x05f6,	// (0x000384d5) slider_set_pane_g3_copy1

0x060a,	// (0x000384e9) slider_set_pane_g4_copy1_ParamLimits

0x060a,	// (0x000384e9) slider_set_pane_g4_copy1

0x0622,	// (0x00038501) slider_set_pane_g5_copy1_ParamLimits

0x0622,	// (0x00038501) slider_set_pane_g5_copy1

0x05f6,	// (0x000384d5) slider_set_pane_g6_copy1_ParamLimits

0x05f6,	// (0x000384d5) slider_set_pane_g6_copy1

0xb904,	// (0x000437e3) slider_set_pane_g7_copy1_ParamLimits

0xb904,	// (0x000437e3) slider_set_pane_g7_copy1

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp2_copy1

0x7eb6,	// (0x0003fd95) setting_slider_graphic_pane_g1_copy1

0xeb43,	// (0x00046a22) setting_slider_graphic_pane_t1_copy1

0xeb53,	// (0x00046a32) setting_slider_graphic_pane_t2_copy1

0xeb63,	// (0x00046a42) slider_set_pane_cp_copy1

0x7eef,	// (0x0003fdce) input_focus_pane_cp1_copy1

0x7ef8,	// (0x0003fdd7) list_set_text_pane_copy1

0x7f00,	// (0x0003fddf) setting_text_pane_g1_copy1

0xeb6b,	// (0x00046a4a) set_text_pane_t1_copy1

0x7eef,	// (0x0003fdce) input_focus_pane_cp2_copy1

0x7f00,	// (0x0003fddf) setting_code_pane_g1_copy1

0xeb85,	// (0x00046a64) setting_code_pane_t1_copy1

0xeb93,	// (0x00046a72) list_set_graphic_pane_copy1

0x7804,	// (0x0003f6e3) bg_set_opt_pane_cp4_copy1

0xa089,	// (0x00041f68) list_set_graphic_pane_g1_copy1_ParamLimits

0xa089,	// (0x00041f68) list_set_graphic_pane_g1_copy1

0xeba5,	// (0x00046a84) list_set_graphic_pane_g2_copy1

0xa0a1,	// (0x00041f80) list_set_graphic_pane_t1_copy1_ParamLimits

0xa0a1,	// (0x00041f80) list_set_graphic_pane_t1_copy1

0x4a12,	// (0x0003c8f1) rs_clock_indi_pane_g1

0x7f31,	// (0x0003fe10) rs_clock_indi_pane_t1

0x7f3f,	// (0x0003fe1e) rs_indi_pane

0x7f47,	// (0x0003fe26) rs_indi_pane_g1

0x7f50,	// (0x0003fe2f) rs_indi_pane_g2

0x7f59,	// (0x0003fe38) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00047db9) rs_indi_pane_g

0xf333,	// (0x00047212) bg_popup_preview_window_pane_cp03

0x7f62,	// (0x0003fe41) popup_fep_tooltip_window_t1

0x56c9,	// (0x0003d5a8) popup_note2_window_g2_ParamLimits

0x56c9,	// (0x0003d5a8) popup_note2_window_g2

0x0001,

0xfc73,	// (0x00047b52) popup_note2_window_g_ParamLimits

0xfc73,	// (0x00047b52) popup_note2_window_g

0x5bf2,	// (0x0003dad1) bg_popup_sub_pane_cp11_ParamLimits

0x5bff,	// (0x0003dade) cell_ai3_links_pane_g1_ParamLimits

0x5c16,	// (0x0003daf5) cell_ai3_links_pane_t1

0xeb6b,	// (0x00046a4a) set_text_pane_t1_copy1_ParamLimits

0xa120,	// (0x00041fff) cell_graphic_popup_pane_cp2_ParamLimits

0xa120,	// (0x00041fff) cell_graphic_popup_pane_cp2

0xebad,	// (0x00046a8c) cell_graphic_popup_pane_g1_cp2

0x8597,	// (0x00040476) cell_graphic_popup_pane_g2_cp2

0x7f78,	// (0x0003fe57) cell_graphic_popup_pane_g3_cp2

0x7f80,	// (0x0003fe5f) cell_graphic_popup_pane_t2_cp2

0x85a8,	// (0x00040487) grid_highlight_pane_cp3_cp2

0xbc77,	// (0x00043b56) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb973,	// (0x00043852) main_tmo_pane_ParamLimits

0xd0aa,	// (0x00044f89) popup_tmo_big_image_note_window

0x75b9,	// (0x0003f498) cell_ai5_widget_list_pane

0x75c1,	// (0x0003f4a0) cell_ai5_widget_lrg_icon_pane

0xe900,	// (0x000467df) tmo_note_info_pane_t1_ParamLimits

0xe915,	// (0x000467f4) tmo_note_info_pane_t2_ParamLimits

0xe92e,	// (0x0004680d) tmo_note_info_pane_t3_ParamLimits

0x7ba8,	// (0x0003fa87) tmo_note_info_pane_t4_ParamLimits

0x7bba,	// (0x0003fa99) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00047da7) tmo_note_info_pane_t_ParamLimits

0xe9a8,	// (0x00046887) settings_container_pane_ParamLimits

0x7ee7,	// (0x0003fdc6) indicator_popup_pane_cp5

0x7ee7,	// (0x0003fdc6) indicator_popup_pane_cp6

0xeb93,	// (0x00046a72) list_set_graphic_pane_copy1_ParamLimits

0x77f0,	// (0x0003f6cf) bg_popup_window_pane_cp23

0x7f8e,	// (0x0003fe6d) popup_tmo_big_image_note_window_g1

0x7f9a,	// (0x0003fe79) popup_tmo_big_image_note_window_t1

0x7faa,	// (0x0003fe89) popup_tmo_big_image_note_window_t2

0x7fba,	// (0x0003fe99) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00047dc0) popup_tmo_big_image_note_window_t

0x4a12,	// (0x0003c8f1) cell_ai5_widget_lrg_icon_pane_g1

0x7fca,	// (0x0003fea9) cell_ai5_widget_lrg_icon_pane_t1

0x7fd8,	// (0x0003feb7) cell_ai5_widget_list_row_pane_ParamLimits

0x7fd8,	// (0x0003feb7) cell_ai5_widget_list_row_pane

0x7ff0,	// (0x0003fecf) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7ff0,	// (0x0003fecf) cell_ai5_widget_list_row_pane_g1

0x7ffd,	// (0x0003fedc) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7ffd,	// (0x0003fedc) cell_ai5_widget_list_row_pane_t1

0x8028,	// (0x0003ff07) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8028,	// (0x0003ff07) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00047dc7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00047dc7) cell_ai5_widget_list_row_pane_t

0xec72,	// (0x00046b51) main_fep_vtchi_ss_pane

0x1818,	// (0x000396f7) popup_fep_char_pre_window

0x1820,	// (0x000396ff) popup_fep_ituss_window

0x1841,	// (0x00039720) popup_fep_vkbss_window

0x8050,	// (0x0003ff2f) grid_vkbss_keypad_pane_ParamLimits

0x8050,	// (0x0003ff2f) grid_vkbss_keypad_pane

0x8060,	// (0x0003ff3f) ituss_keypad_pane

0x186f,	// (0x0003974e) aid_vkbss_key_offset_ParamLimits

0x186f,	// (0x0003974e) aid_vkbss_key_offset

0x187b,	// (0x0003975a) cell_vkbss_key_pane_ParamLimits

0x187b,	// (0x0003975a) cell_vkbss_key_pane

0x806f,	// (0x0003ff4e) bg_cell_vkbss_key_g1_ParamLimits

0x806f,	// (0x0003ff4e) bg_cell_vkbss_key_g1

0x807b,	// (0x0003ff5a) cell_vkbss_key_3p_pane_ParamLimits

0x807b,	// (0x0003ff5a) cell_vkbss_key_3p_pane

0x8095,	// (0x0003ff74) cell_vkbss_key_g1_ParamLimits

0x8095,	// (0x0003ff74) cell_vkbss_key_g1

0x80af,	// (0x0003ff8e) cell_vkbss_key_t1_ParamLimits

0x80af,	// (0x0003ff8e) cell_vkbss_key_t1

0x1891,	// (0x00039770) cell_ituss_key_pane_ParamLimits

0x1891,	// (0x00039770) cell_ituss_key_pane

0x80da,	// (0x0003ffb9) bg_cell_ituss_key_g1_ParamLimits

0x80da,	// (0x0003ffb9) bg_cell_ituss_key_g1

0x80e6,	// (0x0003ffc5) cell_ituss_key_pane_g1_ParamLimits

0x80e6,	// (0x0003ffc5) cell_ituss_key_pane_g1

0x18a2,	// (0x00039781) cell_ituss_key_pane_g2_ParamLimits

0x18a2,	// (0x00039781) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00047dce) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00047dce) cell_ituss_key_pane_g

0x18ce,	// (0x000397ad) cell_ituss_key_t1_ParamLimits

0x18ce,	// (0x000397ad) cell_ituss_key_t1

0x1908,	// (0x000397e7) cell_ituss_key_t2_ParamLimits

0x1908,	// (0x000397e7) cell_ituss_key_t2

0x1939,	// (0x00039818) cell_ituss_key_t3_ParamLimits

0x1939,	// (0x00039818) cell_ituss_key_t3

0x1908,	// (0x000397e7) cell_ituss_key_t4_ParamLimits

0x1908,	// (0x000397e7) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00047dd5) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00047dd5) cell_ituss_key_t

0x810c,	// (0x0003ffeb) cell_vkbss_key_3p_pane_g1

0x8114,	// (0x0003fff3) cell_vkbss_key_3p_pane_g2

0x811c,	// (0x0003fffb) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00047de0) cell_vkbss_key_3p_pane_g

0xec72,	// (0x00046b51) bg_popup_fep_char_preview_window_cp02

0x197c,	// (0x0003985b) popup_fep_char_pre_window_t1

0xe7ec,	// (0x000466cb) main_ai5_sk_pane

0x7c34,	// (0x0003fb13) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7c40,	// (0x0003fb1f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7c55,	// (0x0003fb34) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7c61,	// (0x0003fb40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00047db2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7c6d,	// (0x0003fb4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb973,	// (0x00043852) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebb5,	// (0x00046a94) main_ai5_sk_pane_g1

0x2856,	// (0x0003a735) popup_query_code_window_g1

0x1836,	// (0x00039715) popup_fep_vkb_icf_pane

0x184c,	// (0x0003972b) popup_fep_vtchi_icf_pane

0x812d,	// (0x0004000c) bg_icf_pane

0x8139,	// (0x00040018) list_vkb_icf_pane

0x8145,	// (0x00040024) bg_icf_pane_cp01

0x8151,	// (0x00040030) vtchi_icf_list_pane

0x8162,	// (0x00040041) list_vkb_icf_pane_t1_ParamLimits

0x8162,	// (0x00040041) list_vkb_icf_pane_t1

0x8178,	// (0x00040057) vtchi_icf_list_pane_t1_ParamLimits

0x8178,	// (0x00040057) vtchi_icf_list_pane_t1

0x1820,	// (0x000396ff) popup_fep_ituss_window_ParamLimits

0x184c,	// (0x0003972b) popup_fep_vtchi_icf_pane_ParamLimits

0x8060,	// (0x0003ff3f) ituss_keypad_pane_ParamLimits

0x1863,	// (0x00039742) ituss_sks_pane

0x812d,	// (0x0004000c) bg_icf_pane_ParamLimits

0x17fc,	// (0x000396db) icf_edit_indi_pane_ParamLimits

0x17fc,	// (0x000396db) icf_edit_indi_pane

0x8139,	// (0x00040018) list_vkb_icf_pane_ParamLimits

0x8145,	// (0x00040024) bg_icf_pane_cp01_ParamLimits

0x180b,	// (0x000396ea) icf_edit_indi_pane_cp01_ParamLimits

0x180b,	// (0x000396ea) icf_edit_indi_pane_cp01

0x8159,	// (0x00040038) vtchi_query_pane

0x0a6c,	// (0x0003894b) icf_edit_indi_pane_g1_ParamLimits

0x0a6c,	// (0x0003894b) icf_edit_indi_pane_g1

0x199e,	// (0x0003987d) icf_edit_indi_pane_g2_ParamLimits

0x199e,	// (0x0003987d) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00047df8) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00047df8) icf_edit_indi_pane_g

0x19ad,	// (0x0003988c) icf_edit_indi_pane_t1

0x8190,	// (0x0004006f) bg_input_focus_pane_cp042

0x877b,	// (0x0004065a) vtchi_button_pane

0x8199,	// (0x00040078) vtchi_query_pane_t1

0x81a7,	// (0x00040086) vtchi_query_pane_t2

0x81b5,	// (0x00040094) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00047de7) vtchi_query_pane_t

0xec72,	// (0x00046b51) bg_button_pane_cp13

0x81c3,	// (0x000400a2) vtchi_button_pane_g1

0x198b,	// (0x0003986a) ituss_sks_pane_g1

0x1996,	// (0x00039875) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00047dee) ituss_sks_pane_g

0x81cb,	// (0x000400aa) ituss_sks_pane_t1

0x81d9,	// (0x000400b8) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047df3) ituss_sks_pane_t

0x44c2,	// (0x0003c3a1) indicator_nsta_pane_cp_g1

0x44cb,	// (0x0003c3aa) indicator_nsta_pane_cp_g2

0x44d3,	// (0x0003c3b2) indicator_nsta_pane_cp_g3

0x44db,	// (0x0003c3ba) indicator_nsta_pane_cp_g4

0x44e3,	// (0x0003c3c2) indicator_nsta_pane_cp_g5

0x44eb,	// (0x0003c3ca) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00047990) indicator_nsta_pane_cp_g

0xe30f,	// (0x000461ee) cell_graphic2_pane_t2_ParamLimits

0xe30f,	// (0x000461ee) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00047ca9) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00047ca9) cell_graphic2_pane_t

0xe345,	// (0x00046224) cell_graphic2_control_pane_t1

0x9f89,	// (0x00041e68) signal_pane_g3_ParamLimits

0x9f89,	// (0x00041e68) signal_pane_g3

0x9f9d,	// (0x00041e7c) signal_pane_g4_ParamLimits

0x9f9d,	// (0x00041e7c) signal_pane_g4

0x803a,	// (0x0003ff19) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x803a,	// (0x0003ff19) cell_ai5_widget_list_row_pane_t3

0x80fa,	// (0x0003ffd9) cell_ituss_key_pane_t1_ParamLimits

0x80fa,	// (0x0003ffd9) cell_ituss_key_pane_t1

0x24d3,	// (0x0003a3b2) form_field_data_wide_pane_vc_t2_ParamLimits

0x24d3,	// (0x0003a3b2) form_field_data_wide_pane_vc_t2

0x24e7,	// (0x0003a3c6) form_field_data_wide_pane_vc_t3_ParamLimits

0x24e7,	// (0x0003a3c6) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x000476e3) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x000476e3) form_field_data_wide_pane_vc_t

0x4173,	// (0x0003c052) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4173,	// (0x0003c052) form_field_slider_wide_pane_vc_t3

0x4249,	// (0x0003c128) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4249,	// (0x0003c128) form_field_popup_wide_pane_vc_t2

0x4260,	// (0x0003c13f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4260,	// (0x0003c13f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0004797f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0004797f) form_field_popup_wide_pane_vc_t

0xb779,	// (0x00043658) aid_fshwr2_btn_pane_ParamLimits

0xb78a,	// (0x00043669) aid_fshwr2_syb_pane_ParamLimits

0xb79b,	// (0x0004367a) aid_fshwr2_txt_pane_ParamLimits

0x0e6b,	// (0x00038d4a) fshwr2_bg_pane_ParamLimits

0xb7a7,	// (0x00043686) fshwr2_func_candi_pane_ParamLimits

0xb7c8,	// (0x000436a7) fshwr2_hwr_syb_pane_ParamLimits

0xb7e5,	// (0x000436c4) fshwr2_icf_pane_ParamLimits

0xddf3,	// (0x00045cd2) list_double_graphic_pane_vc_g4_ParamLimits

0xddf3,	// (0x00045cd2) list_double_graphic_pane_vc_g4

0x18c2,	// (0x000397a1) cell_ituss_key_pane_g3_ParamLimits

0x18c2,	// (0x000397a1) cell_ituss_key_pane_g3

0x196a,	// (0x00039849) cell_ituss_key_t5_ParamLimits

0x196a,	// (0x00039849) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

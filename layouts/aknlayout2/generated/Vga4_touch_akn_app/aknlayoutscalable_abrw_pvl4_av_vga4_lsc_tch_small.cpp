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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037e63 };

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
0x91ab,	// (0x0004100e) Screen

0x91b7,	// (0x0004101a) application_window_ParamLimits

0x91b7,	// (0x0004101a) application_window

0x777a,	// (0x0003f5dd) screen_g1

0x91ef,	// (0x00041052) area_bottom_pane_ParamLimits

0x91ef,	// (0x00041052) area_bottom_pane

0xebde,	// (0x00046a41) area_top_pane_ParamLimits

0xebde,	// (0x00046a41) area_top_pane

0xec7c,	// (0x00046adf) main_pane_ParamLimits

0xec7c,	// (0x00046adf) main_pane

0x7784,	// (0x0003f5e7) misc_graphics

0xac14,	// (0x00042a77) battery_pane_ParamLimits

0xac14,	// (0x00042a77) battery_pane

0x2b72,	// (0x0003a9d5) bg_status_flat_pane_g8

0x2b7a,	// (0x0003a9dd) bg_status_flat_pane_g9

0x1f7c,	// (0x00039ddf) context_pane_ParamLimits

0x1f7c,	// (0x00039ddf) context_pane

0xad8b,	// (0x00042bee) navi_pane_ParamLimits

0xad8b,	// (0x00042bee) navi_pane

0xae15,	// (0x00042c78) signal_pane_ParamLimits

0xae15,	// (0x00042c78) signal_pane

0x0008,

0xf874,	// (0x000476d7) bg_status_flat_pane_g

0xaea5,	// (0x00042d08) status_pane_g1_ParamLimits

0xaea5,	// (0x00042d08) status_pane_g1

0xc1f9,	// (0x0004405c) status_pane_g2_ParamLimits

0xc1f9,	// (0x0004405c) status_pane_g2

0x21bd,	// (0x0003a020) status_pane_g3_ParamLimits

0x21bd,	// (0x0003a020) status_pane_g3

0x0004,

0xf7a0,	// (0x00047603) status_pane_g_ParamLimits

0xf7a0,	// (0x00047603) status_pane_g

0xc205,	// (0x00044068) title_pane_ParamLimits

0xc205,	// (0x00044068) title_pane

0xc268,	// (0x000440cb) uni_indicator_pane_ParamLimits

0xc268,	// (0x000440cb) uni_indicator_pane

0x00d8,	// (0x00037f3b) bg_list_pane_ParamLimits

0x00d8,	// (0x00037f3b) bg_list_pane

0xa434,	// (0x00042297) find_pane

0xa43c,	// (0x0004229f) listscroll_app_pane_ParamLimits

0xa43c,	// (0x0004229f) listscroll_app_pane

0x010c,	// (0x00037f6f) listscroll_form_pane

0xa44c,	// (0x000422af) listscroll_gen_pane_ParamLimits

0xa44c,	// (0x000422af) listscroll_gen_pane

0x0128,	// (0x00037f8b) listscroll_set_pane

0x3711,	// (0x0003b574) main_idle_act_pane

0xf333,	// (0x00047196) main_idle_trad_pane

0xf333,	// (0x00047196) main_list_empty_pane

0x0142,	// (0x00037fa5) main_midp_pane

0x014e,	// (0x00037fb1) main_pane_g1_ParamLimits

0x014e,	// (0x00037fb1) main_pane_g1

0xa46e,	// (0x000422d1) popup_ai_message_window_ParamLimits

0xa46e,	// (0x000422d1) popup_ai_message_window

0xa50e,	// (0x00042371) popup_fep_china_uni_window_ParamLimits

0xa50e,	// (0x00042371) popup_fep_china_uni_window

0x1935,	// (0x00039798) popup_fep_japan_candidate_window_ParamLimits

0x1935,	// (0x00039798) popup_fep_japan_candidate_window

0x195f,	// (0x000397c2) popup_fep_japan_predictive_window_ParamLimits

0x195f,	// (0x000397c2) popup_fep_japan_predictive_window

0xa56e,	// (0x000423d1) popup_find_window

0xa58b,	// (0x000423ee) popup_grid_graphic_window_ParamLimits

0xa58b,	// (0x000423ee) popup_grid_graphic_window

0x19d0,	// (0x00039833) popup_large_graphic_colour_window

0xa62f,	// (0x00042492) popup_menu_window_ParamLimits

0xa62f,	// (0x00042492) popup_menu_window

0xa81f,	// (0x00042682) popup_note_image_window

0xa7df,	// (0x00042642) popup_note_wait_window_ParamLimits

0xa7df,	// (0x00042642) popup_note_wait_window

0xa837,	// (0x0004269a) popup_note_window_ParamLimits

0xa837,	// (0x0004269a) popup_note_window

0xa8e5,	// (0x00042748) popup_query_code_window_ParamLimits

0xa8e5,	// (0x00042748) popup_query_code_window

0x1c3c,	// (0x00039a9f) popup_query_data_code_window_ParamLimits

0x1c3c,	// (0x00039a9f) popup_query_data_code_window

0xa925,	// (0x00042788) popup_query_data_window_ParamLimits

0xa925,	// (0x00042788) popup_query_data_window

0xa9b9,	// (0x0004281c) popup_query_sat_info_window_ParamLimits

0xa9b9,	// (0x0004281c) popup_query_sat_info_window

0xaa64,	// (0x000428c7) popup_snote_single_graphic_window_ParamLimits

0xaa64,	// (0x000428c7) popup_snote_single_graphic_window

0xaa64,	// (0x000428c7) popup_snote_single_text_window_ParamLimits

0xaa64,	// (0x000428c7) popup_snote_single_text_window

0x1cd7,	// (0x00039b3a) popup_sub_window_general

0x1e1d,	// (0x00039c80) popup_window_general_ParamLimits

0x1e1d,	// (0x00039c80) popup_window_general

0x1e36,	// (0x00039c99) power_save_pane

0xa2a2,	// (0x00042105) control_pane_g1_ParamLimits

0xa2a2,	// (0x00042105) control_pane_g1

0xa2cb,	// (0x0004212e) control_pane_g2_ParamLimits

0xa2cb,	// (0x0004212e) control_pane_g2

0xf531,	// (0x00047394) control_pane_g3_ParamLimits

0xf531,	// (0x00047394) control_pane_g3

0x0007,

0xf788,	// (0x000475eb) control_pane_g_ParamLimits

0xf788,	// (0x000475eb) control_pane_g

0xa32d,	// (0x00042190) control_pane_t1_ParamLimits

0xa32d,	// (0x00042190) control_pane_t1

0xa38b,	// (0x000421ee) control_pane_t2_ParamLimits

0xa38b,	// (0x000421ee) control_pane_t2

0x0002,

0xf799,	// (0x000475fc) control_pane_t_ParamLimits

0xf799,	// (0x000475fc) control_pane_t

0xa1fb,	// (0x0004205e) navi_navi_volume_pane_cp1

0xa203,	// (0x00042066) status_small_icon_pane

0xf4fd,	// (0x00047360) status_small_pane_g1_ParamLimits

0xf4fd,	// (0x00047360) status_small_pane_g1

0xa20b,	// (0x0004206e) status_small_pane_g2_ParamLimits

0xa20b,	// (0x0004206e) status_small_pane_g2

0xa217,	// (0x0004207a) status_small_pane_g3_ParamLimits

0xa217,	// (0x0004207a) status_small_pane_g3

0xa223,	// (0x00042086) status_small_pane_g4_ParamLimits

0xa223,	// (0x00042086) status_small_pane_g4

0xa22f,	// (0x00042092) status_small_pane_g5_ParamLimits

0xa22f,	// (0x00042092) status_small_pane_g5

0xa23d,	// (0x000420a0) status_small_pane_g6_ParamLimits

0xa23d,	// (0x000420a0) status_small_pane_g6

0x0007,

0xf777,	// (0x000475da) status_small_pane_g_ParamLimits

0xf777,	// (0x000475da) status_small_pane_g

0xa26c,	// (0x000420cf) status_small_pane_t1

0xa28e,	// (0x000420f1) status_small_wait_pane_ParamLimits

0xa28e,	// (0x000420f1) status_small_wait_pane

0x9f3a,	// (0x00041d9d) aid_levels_signal_ParamLimits

0x9f3a,	// (0x00041d9d) aid_levels_signal

0x9f52,	// (0x00041db5) signal_pane_g1_ParamLimits

0x9f52,	// (0x00041db5) signal_pane_g1

0x9f6d,	// (0x00041dd0) signal_pane_g2_ParamLimits

0x9f6d,	// (0x00041dd0) signal_pane_g2

0x0003,

0xf708,	// (0x0004756b) signal_pane_g_ParamLimits

0xf708,	// (0x0004756b) signal_pane_g

0xbeac,	// (0x00043d0f) context_pane_g1

0x93db,	// (0x0004123e) title_pane_g1

0x9406,	// (0x00041269) title_pane_t1

0x81e7,	// (0x0004004a) title_pane_t2

0x820d,	// (0x00040070) title_pane_t3

0x0002,

0xf557,	// (0x000473ba) title_pane_t

0xc290,	// (0x000440f3) aid_levels_battery_ParamLimits

0xc290,	// (0x000440f3) aid_levels_battery

0xc2ac,	// (0x0004410f) battery_pane_g1_ParamLimits

0xc2ac,	// (0x0004410f) battery_pane_g1

0xc2c9,	// (0x0004412c) battery_pane_g2_ParamLimits

0xc2c9,	// (0x0004412c) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004760e) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004760e) battery_pane_g

0xc57f,	// (0x000443e2) uni_indicator_pane_g1

0xc595,	// (0x000443f8) uni_indicator_pane_g2

0xc5ab,	// (0x0004440e) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0004777f) uni_indicator_pane_g

0xc15a,	// (0x00043fbd) navi_icon_pane_ParamLimits

0xc15a,	// (0x00043fbd) navi_icon_pane

0xc0de,	// (0x00043f41) navi_midp_pane

0xc176,	// (0x00043fd9) navi_navi_pane

0xc180,	// (0x00043fe3) navi_text_pane_ParamLimits

0xc180,	// (0x00043fe3) navi_text_pane

0x777a,	// (0x0003f5dd) status_small_wait_pane_g1

0x8508,	// (0x0004036b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0004777a) status_small_wait_pane_g

0xc4e6,	// (0x00044349) navi_navi_icon_text_pane

0xc4ee,	// (0x00044351) navi_navi_pane_g1_ParamLimits

0xc4ee,	// (0x00044351) navi_navi_pane_g1

0xc500,	// (0x00044363) navi_navi_pane_g2_ParamLimits

0xc500,	// (0x00044363) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00047748) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00047748) navi_navi_pane_g

0x31fb,	// (0x0003b05e) navi_navi_tabs_pane

0xc512,	// (0x00044375) navi_navi_text_pane

0xc4e6,	// (0x00044349) navi_navi_volume_pane

0xc4d4,	// (0x00044337) navi_text_pane_t1

0xc4c8,	// (0x0004432b) navi_icon_pane_g1

0x30f2,	// (0x0003af55) navi_navi_text_pane_t1

0xb0a3,	// (0x00042f06) navi_navi_volume_pane_g1

0xb0ab,	// (0x00042f0e) volume_small_pane

0xc410,	// (0x00044273) navi_navi_icon_text_pane_g1

0xc418,	// (0x0004427b) navi_navi_icon_text_pane_t1

0xc176,	// (0x00043fd9) navi_tabs_2_long_pane

0xc176,	// (0x00043fd9) navi_tabs_2_pane

0xc176,	// (0x00043fd9) navi_tabs_3_long_pane

0xc176,	// (0x00043fd9) navi_tabs_3_pane

0xc176,	// (0x00043fd9) navi_tabs_4_pane

0xb083,	// (0x00042ee6) tabs_2_active_pane_ParamLimits

0xb083,	// (0x00042ee6) tabs_2_active_pane

0xb093,	// (0x00042ef6) tabs_2_passive_pane_ParamLimits

0xb093,	// (0x00042ef6) tabs_2_passive_pane

0xb051,	// (0x00042eb4) tabs_3_active_pane_ParamLimits

0xb051,	// (0x00042eb4) tabs_3_active_pane

0xb061,	// (0x00042ec4) tabs_3_passive_pane_ParamLimits

0xb061,	// (0x00042ec4) tabs_3_passive_pane

0xb072,	// (0x00042ed5) tabs_3_passive_pane_cp_ParamLimits

0xb072,	// (0x00042ed5) tabs_3_passive_pane_cp

0xb00d,	// (0x00042e70) tabs_4_active_pane_ParamLimits

0xb00d,	// (0x00042e70) tabs_4_active_pane

0xb01e,	// (0x00042e81) tabs_4_passive_pane_ParamLimits

0xb01e,	// (0x00042e81) tabs_4_passive_pane

0xb02f,	// (0x00042e92) tabs_4_passive_pane_cp_ParamLimits

0xb02f,	// (0x00042e92) tabs_4_passive_pane_cp

0xb040,	// (0x00042ea3) tabs_4_passive_pane_cp2_ParamLimits

0xb040,	// (0x00042ea3) tabs_4_passive_pane_cp2

0xafe9,	// (0x00042e4c) tabs_2_long_active_pane_ParamLimits

0xafe9,	// (0x00042e4c) tabs_2_long_active_pane

0xaffb,	// (0x00042e5e) tabs_2_long_passive_pane_ParamLimits

0xaffb,	// (0x00042e5e) tabs_2_long_passive_pane

0xaf9e,	// (0x00042e01) tabs_3_long_active_pane_ParamLimits

0xaf9e,	// (0x00042e01) tabs_3_long_active_pane

0xafb7,	// (0x00042e1a) tabs_3_long_passive_pane_ParamLimits

0xafb7,	// (0x00042e1a) tabs_3_long_passive_pane

0xafd0,	// (0x00042e33) tabs_3_long_passive_pane_cp_ParamLimits

0xafd0,	// (0x00042e33) tabs_3_long_passive_pane_cp

0x03dc,	// (0x0003823f) volume_small_pane_g1

0xaf4d,	// (0x00042db0) volume_small_pane_g2

0xaf56,	// (0x00042db9) volume_small_pane_g3

0xaf5f,	// (0x00042dc2) volume_small_pane_g4

0xaf68,	// (0x00042dcb) volume_small_pane_g5

0xaf71,	// (0x00042dd4) volume_small_pane_g6

0xaf7a,	// (0x00042ddd) volume_small_pane_g7

0xaf83,	// (0x00042de6) volume_small_pane_g8

0xaf8c,	// (0x00042def) volume_small_pane_g9

0xaf95,	// (0x00042df8) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00047714) volume_small_pane_g

0x8352,	// (0x000401b5) bg_active_tab_pane_cp2_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp2

0x9492,	// (0x000412f5) tabs_3_active_pane_g1

0x949a,	// (0x000412fd) tabs_3_active_pane_t1

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp2_ParamLimits

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp2

0x9492,	// (0x000412f5) tabs_3_passive_pane_g1

0x949a,	// (0x000412fd) tabs_3_passive_pane_t1

0x8352,	// (0x000401b5) bg_active_tab_pane_cp3_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp3

0x94ac,	// (0x0004130f) tabs_4_active_pane_g1

0x94b4,	// (0x00041317) tabs_4_active_pane_t1

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp3_ParamLimits

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp3

0x94ac,	// (0x0004130f) tabs_4_1_passive_pane_g1

0x94b4,	// (0x00041317) tabs_4_1_passive_pane_t1

0x0142,	// (0x00037fa5) list_highlight_pane_cp2

0xc640,	// (0x000444a3) list_set_pane_ParamLimits

0xc640,	// (0x000444a3) list_set_pane

0xc708,	// (0x0004456b) main_pane_set_t1_ParamLimits

0xc708,	// (0x0004456b) main_pane_set_t1

0xc728,	// (0x0004458b) main_pane_set_t2_ParamLimits

0xc728,	// (0x0004458b) main_pane_set_t2

0xc73c,	// (0x0004459f) main_pane_set_t3_ParamLimits

0xc73c,	// (0x0004459f) main_pane_set_t3

0xc750,	// (0x000445b3) main_pane_set_t4_ParamLimits

0xc750,	// (0x000445b3) main_pane_set_t4

0x0003,

0xf981,	// (0x000477e4) main_pane_set_t_ParamLimits

0xf981,	// (0x000477e4) main_pane_set_t

0xc764,	// (0x000445c7) setting_code_pane

0x3865,	// (0x0003b6c8) setting_slider_graphic_pane

0x3865,	// (0x0003b6c8) setting_slider_pane

0x3865,	// (0x0003b6c8) setting_text_pane

0x3865,	// (0x0003b6c8) setting_volume_pane

0xed8b,	// (0x00046bee) volume_set_pane

0x821f,	// (0x00040082) bg_set_opt_pane_cp

0xed95,	// (0x00046bf8) setting_slider_pane_t1

0xedae,	// (0x00046c11) setting_slider_pane_t2

0xedc8,	// (0x00046c2b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000473c1) setting_slider_pane_t

0xede0,	// (0x00046c43) slider_set_pane

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp2

0x822d,	// (0x00040090) setting_slider_graphic_pane_g1

0xedf6,	// (0x00046c59) setting_slider_graphic_pane_t1

0xee06,	// (0x00046c69) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000473c8) setting_slider_graphic_pane_t

0xee16,	// (0x00046c79) slider_set_pane_cp

0x7784,	// (0x0003f5e7) input_focus_pane_cp1

0x36f8,	// (0x0003b55b) list_set_text_pane

0x777a,	// (0x0003f5dd) setting_text_pane_g1

0x7784,	// (0x0003f5e7) input_focus_pane_cp2

0x777a,	// (0x0003f5dd) setting_code_pane_g1

0x8236,	// (0x00040099) setting_code_pane_t1

0xd899,	// (0x000456fc) set_text_pane_t1_ParamLimits

0xd899,	// (0x000456fc) set_text_pane_t1

0xb9ce,	// (0x00043831) set_opt_bg_pane_g1

0xb9d6,	// (0x00043839) set_opt_bg_pane_g2

0x36d0,	// (0x0003b533) set_opt_bg_pane_g3

0xb9e6,	// (0x00043849) set_opt_bg_pane_g4

0xb9ee,	// (0x00043851) set_opt_bg_pane_g5

0xb9f6,	// (0x00043859) set_opt_bg_pane_g6

0x36da,	// (0x0003b53d) set_opt_bg_pane_g7

0x36e4,	// (0x0003b547) set_opt_bg_pane_g8

0x36ee,	// (0x0003b551) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x000477d1) set_opt_bg_pane_g

0x36c3,	// (0x0003b526) slider_set_pane_g1

0x05e8,	// (0x0003844b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x000477c2) slider_set_pane_g

0x0548,	// (0x000383ab) volume_set_pane_g1

0x0552,	// (0x000383b5) volume_set_pane_g2

0x055c,	// (0x000383bf) volume_set_pane_g3

0x0566,	// (0x000383c9) volume_set_pane_g4

0x0570,	// (0x000383d3) volume_set_pane_g5

0x057a,	// (0x000383dd) volume_set_pane_g6

0x0584,	// (0x000383e7) volume_set_pane_g7

0x058e,	// (0x000383f1) volume_set_pane_g8

0x0598,	// (0x000383fb) volume_set_pane_g9

0x05a2,	// (0x00038405) volume_set_pane_g10

0x0009,

0xf937,	// (0x0004779a) volume_set_pane_g

0x94c6,	// (0x00041329) indicator_pane_ParamLimits

0x94c6,	// (0x00041329) indicator_pane

0x94f2,	// (0x00041355) main_idle_pane_g2_ParamLimits

0x94f2,	// (0x00041355) main_idle_pane_g2

0x952a,	// (0x0004138d) main_pane_idle_g1_ParamLimits

0x952a,	// (0x0004138d) main_pane_idle_g1

0x8244,	// (0x000400a7) popup_clock_digital_analogue_window_ParamLimits

0x8244,	// (0x000400a7) popup_clock_digital_analogue_window

0x9558,	// (0x000413bb) soft_indicator_pane_ParamLimits

0x9558,	// (0x000413bb) soft_indicator_pane

0x9574,	// (0x000413d7) wallpaper_pane_ParamLimits

0x9574,	// (0x000413d7) wallpaper_pane

0x777a,	// (0x0003f5dd) wallpaper_pane_g1

0x9586,	// (0x000413e9) indicator_pane_g1_ParamLimits

0x9586,	// (0x000413e9) indicator_pane_g1

0x3b41,	// (0x0003b9a4) navi_navi_icon_text_pane_srt_g1

0x8272,	// (0x000400d5) soft_indicator_pane_t1

0x828c,	// (0x000400ef) aid_ps_area_pane

0x959f,	// (0x00041402) aid_ps_clock_pane

0x829d,	// (0x00040100) aid_ps_indicator_pane

0x82a9,	// (0x0004010c) indicator_ps_pane_ParamLimits

0x82a9,	// (0x0004010c) indicator_ps_pane

0x82b8,	// (0x0004011b) power_save_pane_g1_ParamLimits

0x82b8,	// (0x0004011b) power_save_pane_g1

0x82c4,	// (0x00040127) power_save_pane_g2_ParamLimits

0x82c4,	// (0x00040127) power_save_pane_g2

0xebbe,	// (0x00046a21) aid_navinavi_width_pane

0x828c,	// (0x000400ef) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000473cd) power_save_pane_g_ParamLimits

0xf56a,	// (0x000473cd) power_save_pane_g

0x82d2,	// (0x00040135) power_save_pane_t1_ParamLimits

0x82d2,	// (0x00040135) power_save_pane_t1

0x959f,	// (0x00041402) aid_ps_clock_pane_ParamLimits

0x829d,	// (0x00040100) aid_ps_indicator_pane_ParamLimits

0x82e4,	// (0x00040147) power_save_pane_t4_ParamLimits

0x82e4,	// (0x00040147) power_save_pane_t4

0x0001,

0xf56f,	// (0x000473d2) power_save_pane_t_ParamLimits

0xf56f,	// (0x000473d2) power_save_pane_t

0x830e,	// (0x00040171) power_save_t3_ParamLimits

0x830e,	// (0x00040171) power_save_t3

0x82f9,	// (0x0004015c) power_save_t2_ParamLimits

0x82f9,	// (0x0004015c) power_save_t2

0x8323,	// (0x00040186) indicator_ps_pane_g1

0x95ad,	// (0x00041410) ai_gene_pane_ParamLimits

0x95ad,	// (0x00041410) ai_gene_pane

0x95c4,	// (0x00041427) ai_links_pane_ParamLimits

0x95c4,	// (0x00041427) ai_links_pane

0x95dc,	// (0x0004143f) indicator_pane_cp1_ParamLimits

0x95dc,	// (0x0004143f) indicator_pane_cp1

0x95eb,	// (0x0004144e) main_pane_idle_g1_cp_ParamLimits

0x95eb,	// (0x0004144e) main_pane_idle_g1_cp

0x832c,	// (0x0004018f) popup_ai_links_title_window

0x9603,	// (0x00041466) soft_indicator_pane_cp1_ParamLimits

0x9603,	// (0x00041466) soft_indicator_pane_cp1

0x34aa,	// (0x0003b30d) ai_links_pane_g1

0x34b3,	// (0x0003b316) grid_ai_links_pane

0xc576,	// (0x000443d9) ai_gene_pane_1

0x3498,	// (0x0003b2fb) ai_gene_pane_2

0x34a1,	// (0x0003b304) list_highlight_pane_cp4

0xc552,	// (0x000443b5) cell_ai_link_pane_ParamLimits

0xc552,	// (0x000443b5) cell_ai_link_pane

0x3467,	// (0x0003b2ca) cell_ai_link_pane_g1

0x8508,	// (0x0004036b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00047775) cell_ai_link_pane_g

0x7784,	// (0x0003f5e7) grid_highlight_cp2

0x7784,	// (0x0003f5e7) bg_popup_sub_pane_cp1

0x8343,	// (0x000401a6) popup_ai_links_title_window_t1

0x33b3,	// (0x0003b216) ai_gene_pane_1_g1_ParamLimits

0x33b3,	// (0x0003b216) ai_gene_pane_1_g1

0x33bf,	// (0x0003b222) ai_gene_pane_1_g2_ParamLimits

0x33bf,	// (0x0003b222) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0004776b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0004776b) ai_gene_pane_1_g

0x33cc,	// (0x0003b22f) ai_gene_pane_1_t1_ParamLimits

0x33cc,	// (0x0003b22f) ai_gene_pane_1_t1

0x3400,	// (0x0003b263) grid_ai_soft_ind_pane

0x339e,	// (0x0003b201) ai_gene_pane_2_t1_ParamLimits

0x339e,	// (0x0003b201) ai_gene_pane_2_t1

0x9617,	// (0x0004147a) main_pane_empty_t1_ParamLimits

0x9617,	// (0x0004147a) main_pane_empty_t1

0x962f,	// (0x00041492) main_pane_empty_t2_ParamLimits

0x962f,	// (0x00041492) main_pane_empty_t2

0x9644,	// (0x000414a7) main_pane_empty_t3_ParamLimits

0x9644,	// (0x000414a7) main_pane_empty_t3

0x9656,	// (0x000414b9) main_pane_empty_t4_ParamLimits

0x9656,	// (0x000414b9) main_pane_empty_t4

0x9668,	// (0x000414cb) main_pane_empty_t5_ParamLimits

0x9668,	// (0x000414cb) main_pane_empty_t5

0x0004,

0xf574,	// (0x000473d7) main_pane_empty_t_ParamLimits

0xf574,	// (0x000473d7) main_pane_empty_t

0xba1f,	// (0x00043882) bg_popup_window_pane_ParamLimits

0xba1f,	// (0x00043882) bg_popup_window_pane

0x3100,	// (0x0003af63) find_popup_pane_cp2_ParamLimits

0x3100,	// (0x0003af63) find_popup_pane_cp2

0x310c,	// (0x0003af6f) heading_pane_ParamLimits

0x310c,	// (0x0003af6f) heading_pane

0x7784,	// (0x0003f5e7) bg_popup_sub_pane

0xc435,	// (0x00044298) bg_popup_window_pane_g1_ParamLimits

0xc435,	// (0x00044298) bg_popup_window_pane_g1

0xc444,	// (0x000442a7) bg_popup_window_pane_g2_ParamLimits

0xc444,	// (0x000442a7) bg_popup_window_pane_g2

0xc450,	// (0x000442b3) bg_popup_window_pane_g3_ParamLimits

0xc450,	// (0x000442b3) bg_popup_window_pane_g3

0xc45c,	// (0x000442bf) bg_popup_window_pane_g4_ParamLimits

0xc45c,	// (0x000442bf) bg_popup_window_pane_g4

0xc46b,	// (0x000442ce) bg_popup_window_pane_g5_ParamLimits

0xc46b,	// (0x000442ce) bg_popup_window_pane_g5

0xc47b,	// (0x000442de) bg_popup_window_pane_g6_ParamLimits

0xc47b,	// (0x000442de) bg_popup_window_pane_g6

0xc487,	// (0x000442ea) bg_popup_window_pane_g7_ParamLimits

0xc487,	// (0x000442ea) bg_popup_window_pane_g7

0xc496,	// (0x000442f9) bg_popup_window_pane_g8_ParamLimits

0xc496,	// (0x000442f9) bg_popup_window_pane_g8

0xc4a5,	// (0x00044308) bg_popup_window_pane_g9_ParamLimits

0xc4a5,	// (0x00044308) bg_popup_window_pane_g9

0x30e6,	// (0x0003af49) bg_popup_window_pane_g10_ParamLimits

0x30e6,	// (0x0003af49) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00047733) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00047733) bg_popup_window_pane_g

0x300f,	// (0x0003ae72) bg_popup_heading_pane_ParamLimits

0x300f,	// (0x0003ae72) bg_popup_heading_pane

0x06f9,	// (0x0003855c) tabs_4_passive_pane_cp_srt_ParamLimits

0x06f9,	// (0x0003855c) tabs_4_passive_pane_cp_srt

0x070b,	// (0x0003856e) tabs_4_passive_pane_srt_ParamLimits

0x3023,	// (0x0003ae86) heading_pane_g2

0x070b,	// (0x0003856e) tabs_4_passive_pane_srt

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp3_srt

0x302b,	// (0x0003ae8e) heading_pane_t1_ParamLimits

0x302b,	// (0x0003ae8e) heading_pane_t1

0x3042,	// (0x0003aea5) heading_pane_t2_ParamLimits

0x3042,	// (0x0003aea5) heading_pane_t2

0x0001,

0xf8cb,	// (0x0004772e) heading_pane_t_ParamLimits

0xf8cb,	// (0x0004772e) heading_pane_t

0x2b3a,	// (0x0003a99d) bg_popup_heading_pane_g1

0x2be9,	// (0x0003aa4c) bg_popup_heading_pane_g2

0x2bf3,	// (0x0003aa56) bg_popup_heading_pane_g3

0x2bfd,	// (0x0003aa60) bg_popup_heading_pane_g4

0x2c07,	// (0x0003aa6a) bg_popup_heading_pane_g5

0x2c11,	// (0x0003aa74) bg_popup_heading_pane_g6

0x2c19,	// (0x0003aa7c) bg_popup_heading_pane_g7

0x2c21,	// (0x0003aa84) bg_popup_heading_pane_g8

0x2c2b,	// (0x0003aa8e) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x000476ea) bg_popup_heading_pane_g

0x2348,	// (0x0003a1ab) bg_popup_sub_pane_g1

0x2358,	// (0x0003a1bb) bg_popup_sub_pane_g2

0x2350,	// (0x0003a1b3) bg_popup_sub_pane_g3

0x2368,	// (0x0003a1cb) bg_popup_sub_pane_g4

0x2360,	// (0x0003a1c3) bg_popup_sub_pane_g5

0x2370,	// (0x0003a1d3) bg_popup_sub_pane_g6

0x2378,	// (0x0003a1db) bg_popup_sub_pane_g7

0x2388,	// (0x0003a1eb) bg_popup_sub_pane_g8

0x2380,	// (0x0003a1e3) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x000476c4) bg_popup_sub_pane_g

0x8352,	// (0x000401b5) bg_popup_window_pane_cp5_ParamLimits

0x8352,	// (0x000401b5) bg_popup_window_pane_cp5

0x836e,	// (0x000401d1) popup_note_window_g1_ParamLimits

0x836e,	// (0x000401d1) popup_note_window_g1

0x837a,	// (0x000401dd) popup_note_window_t1_ParamLimits

0x837a,	// (0x000401dd) popup_note_window_t1

0x8390,	// (0x000401f3) popup_note_window_t2_ParamLimits

0x8390,	// (0x000401f3) popup_note_window_t2

0x83a6,	// (0x00040209) popup_note_window_t3_ParamLimits

0x83a6,	// (0x00040209) popup_note_window_t3

0x83bc,	// (0x0004021f) popup_note_window_t4_ParamLimits

0x83bc,	// (0x0004021f) popup_note_window_t4

0x83e4,	// (0x00040247) popup_note_window_t5_ParamLimits

0x83e4,	// (0x00040247) popup_note_window_t5

0x0004,

0xf57f,	// (0x000473e2) popup_note_window_t_ParamLimits

0xf57f,	// (0x000473e2) popup_note_window_t

0x8408,	// (0x0004026b) bg_popup_window_pane_cp6_ParamLimits

0x8408,	// (0x0004026b) bg_popup_window_pane_cp6

0x2ab6,	// (0x0003a919) popup_note_image_window_g1_ParamLimits

0x2ab6,	// (0x0003a919) popup_note_image_window_g1

0x2ac2,	// (0x0003a925) popup_note_image_window_g2_ParamLimits

0x2ac2,	// (0x0003a925) popup_note_image_window_g2

0x0001,

0xf855,	// (0x000476b8) popup_note_image_window_g_ParamLimits

0xf855,	// (0x000476b8) popup_note_image_window_g

0x2adb,	// (0x0003a93e) popup_note_image_window_t1_ParamLimits

0x2adb,	// (0x0003a93e) popup_note_image_window_t1

0x2af4,	// (0x0003a957) popup_note_image_window_t2_ParamLimits

0x2af4,	// (0x0003a957) popup_note_image_window_t2

0x2b0d,	// (0x0003a970) popup_note_image_window_t3_ParamLimits

0x2b0d,	// (0x0003a970) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x000476bd) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x000476bd) popup_note_image_window_t

0x2976,	// (0x0003a7d9) bg_popup_window_pane_cp7_ParamLimits

0x2976,	// (0x0003a7d9) bg_popup_window_pane_cp7

0x29a6,	// (0x0003a809) popup_note_wait_window_g1_ParamLimits

0x29a6,	// (0x0003a809) popup_note_wait_window_g1

0x29b2,	// (0x0003a815) popup_note_wait_window_g2_ParamLimits

0x29b2,	// (0x0003a815) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000476a6) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000476a6) popup_note_wait_window_g

0x29ca,	// (0x0003a82d) popup_note_wait_window_t1_ParamLimits

0x29ca,	// (0x0003a82d) popup_note_wait_window_t1

0x29f1,	// (0x0003a854) popup_note_wait_window_t2_ParamLimits

0x29f1,	// (0x0003a854) popup_note_wait_window_t2

0x2a0f,	// (0x0003a872) popup_note_wait_window_t3_ParamLimits

0x2a0f,	// (0x0003a872) popup_note_wait_window_t3

0x2a22,	// (0x0003a885) popup_note_wait_window_t4_ParamLimits

0x2a22,	// (0x0003a885) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x000476ad) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x000476ad) popup_note_wait_window_t

0x2a47,	// (0x0003a8aa) wait_bar_pane_ParamLimits

0x2a47,	// (0x0003a8aa) wait_bar_pane

0x7784,	// (0x0003f5e7) wait_anim_pane

0x7784,	// (0x0003f5e7) wait_border_pane

0x777a,	// (0x0003f5dd) wait_anim_pane_g1

0x777a,	// (0x0003f5dd) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00047566) wait_anim_pane_g

0x291a,	// (0x0003a77d) wait_border_pane_g1

0x2925,	// (0x0003a788) wait_border_pane_g2

0x292e,	// (0x0003a791) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004769f) wait_border_pane_g

0x2784,	// (0x0003a5e7) bg_popup_window_pane_cp16_ParamLimits

0x2784,	// (0x0003a5e7) bg_popup_window_pane_cp16

0x2884,	// (0x0003a6e7) indicator_popup_pane_cp4_ParamLimits

0x2884,	// (0x0003a6e7) indicator_popup_pane_cp4

0x2898,	// (0x0003a6fb) popup_query_data_window_t1_ParamLimits

0x2898,	// (0x0003a6fb) popup_query_data_window_t1

0x28aa,	// (0x0003a70d) popup_query_data_window_t2_ParamLimits

0x28aa,	// (0x0003a70d) popup_query_data_window_t2

0x28c3,	// (0x0003a726) popup_query_data_window_t3_ParamLimits

0x28c3,	// (0x0003a726) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00047698) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00047698) popup_query_data_window_t

0x28dd,	// (0x0003a740) query_popup_data_pane_ParamLimits

0x28dd,	// (0x0003a740) query_popup_data_pane

0x28f1,	// (0x0003a754) query_popup_data_pane_cp1_ParamLimits

0x28f1,	// (0x0003a754) query_popup_data_pane_cp1

0x2784,	// (0x0003a5e7) bg_popup_window_pane_cp10_ParamLimits

0x2784,	// (0x0003a5e7) bg_popup_window_pane_cp10

0x27b6,	// (0x0003a619) indicator_popup_pane_ParamLimits

0x27b6,	// (0x0003a619) indicator_popup_pane

0x27d8,	// (0x0003a63b) popup_query_code_window_t1_ParamLimits

0x27d8,	// (0x0003a63b) popup_query_code_window_t1

0x27f2,	// (0x0003a655) popup_query_code_window_t2_ParamLimits

0x27f2,	// (0x0003a655) popup_query_code_window_t2

0x283b,	// (0x0003a69e) popup_query_code_window_t3_ParamLimits

0x283b,	// (0x0003a69e) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00047691) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00047691) popup_query_code_window_t

0x286a,	// (0x0003a6cd) query_popup_pane_ParamLimits

0x286a,	// (0x0003a6cd) query_popup_pane

0x8408,	// (0x0004026b) bg_popup_window_pane_cp15_ParamLimits

0x8408,	// (0x0004026b) bg_popup_window_pane_cp15

0x8428,	// (0x0004028b) indicator_popup_pane_cp1_ParamLimits

0x8428,	// (0x0004028b) indicator_popup_pane_cp1

0x843b,	// (0x0004029e) indicator_popup_pane_cp2_ParamLimits

0x843b,	// (0x0004029e) indicator_popup_pane_cp2

0x8456,	// (0x000402b9) popup_query_data_code_window_g1_ParamLimits

0x8456,	// (0x000402b9) popup_query_data_code_window_g1

0x8469,	// (0x000402cc) popup_query_data_code_window_t1_ParamLimits

0x8469,	// (0x000402cc) popup_query_data_code_window_t1

0x847b,	// (0x000402de) popup_query_data_code_window_t2_ParamLimits

0x847b,	// (0x000402de) popup_query_data_code_window_t2

0x848d,	// (0x000402f0) popup_query_data_code_window_t3_ParamLimits

0x848d,	// (0x000402f0) popup_query_data_code_window_t3

0x84a3,	// (0x00040306) popup_query_data_code_window_t4_ParamLimits

0x84a3,	// (0x00040306) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000473ed) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000473ed) popup_query_data_code_window_t

0x02c5,	// (0x00038128) list_single_midp_graphic_pane_g3

0x84bd,	// (0x00040320) query_popup_data_pane_cp2_ParamLimits

0x84d0,	// (0x00040333) query_popup_pane_cp2_ParamLimits

0x84d0,	// (0x00040333) query_popup_pane_cp2

0x7784,	// (0x0003f5e7) bg_popup_window_pane_cp11

0x277c,	// (0x0003a5df) heading_pane_cp5

0x8566,	// (0x000403c9) listscroll_popup_info_pane

0x7784,	// (0x0003f5e7) input_focus_pane_cp3

0x84eb,	// (0x0004034e) query_popup_pane_t1

0x84f9,	// (0x0004035c) list_popup_info_pane_ParamLimits

0x84f9,	// (0x0004035c) list_popup_info_pane

0x8508,	// (0x0004036b) listscroll_popup_info_pane_g1

0x8510,	// (0x00040373) scroll_pane_cp7

0x851a,	// (0x0004037d) popup_info_list_pane_t1_ParamLimits

0x851a,	// (0x0004037d) popup_info_list_pane_t1

0x8534,	// (0x00040397) popup_info_list_pane_t2_ParamLimits

0x8534,	// (0x00040397) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000473f6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000473f6) popup_info_list_pane_t

0x7784,	// (0x0003f5e7) bg_popup_window_pane_cp12

0x3b5b,	// (0x0003b9be) find_popup_pane

0x821f,	// (0x00040082) bg_popup_window_pane_cp3

0x854e,	// (0x000403b1) heading_pane_cp3

0x855a,	// (0x000403bd) listscroll_popup_graphic_pane

0x7784,	// (0x0003f5e7) bg_popup_window_pane_cp4

0x96ca,	// (0x0004152d) heading_pane_cp4

0x8566,	// (0x000403c9) listscroll_popup_colour_pane

0x96d4,	// (0x00041537) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x96d4,	// (0x00041537) cell_large_graphic_colour_none_popup_pane

0x96e8,	// (0x0004154b) grid_large_graphic_colour_popup_pane_ParamLimits

0x96e8,	// (0x0004154b) grid_large_graphic_colour_popup_pane

0x970c,	// (0x0004156f) listscroll_popup_colour_pane_g1_ParamLimits

0x970c,	// (0x0004156f) listscroll_popup_colour_pane_g1

0x9723,	// (0x00041586) listscroll_popup_colour_pane_g2_ParamLimits

0x9723,	// (0x00041586) listscroll_popup_colour_pane_g2

0x973a,	// (0x0004159d) listscroll_popup_colour_pane_g3_ParamLimits

0x973a,	// (0x0004159d) listscroll_popup_colour_pane_g3

0x974a,	// (0x000415ad) listscroll_popup_colour_pane_g4_ParamLimits

0x974a,	// (0x000415ad) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000473fb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000473fb) listscroll_popup_colour_pane_g

0x856e,	// (0x000403d1) scroll_pane_cp6_ParamLimits

0x856e,	// (0x000403d1) scroll_pane_cp6

0x975a,	// (0x000415bd) cell_large_graphic_colour_popup_pane_ParamLimits

0x975a,	// (0x000415bd) cell_large_graphic_colour_popup_pane

0x8580,	// (0x000403e3) cell_large_graphic_colour_none_popup_pane_t1

0x7784,	// (0x0003f5e7) grid_highlight_pane_cp5

0x858f,	// (0x000403f2) cell_large_graphic_colour_popup_pane_g1

0x8597,	// (0x000403fa) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00047404) cell_large_graphic_colour_popup_pane_g

0x859f,	// (0x00040402) cell_large_graphic_colour_popup_pane_g2_copy1

0x85a8,	// (0x0004040b) grid_highlight_pane_cp4

0x85b0,	// (0x00040413) bg_popup_window_pane_cp8_ParamLimits

0x85b0,	// (0x00040413) bg_popup_window_pane_cp8

0x85cb,	// (0x0004042e) popup_snote_single_text_window_g1_ParamLimits

0x85cb,	// (0x0004042e) popup_snote_single_text_window_g1

0x85dd,	// (0x00040440) popup_snote_single_text_window_t1_ParamLimits

0x85dd,	// (0x00040440) popup_snote_single_text_window_t1

0x85f0,	// (0x00040453) popup_snote_single_text_window_t2_ParamLimits

0x85f0,	// (0x00040453) popup_snote_single_text_window_t2

0x8603,	// (0x00040466) popup_snote_single_text_window_t3_ParamLimits

0x8603,	// (0x00040466) popup_snote_single_text_window_t3

0x863c,	// (0x0004049f) popup_snote_single_text_window_t4_ParamLimits

0x863c,	// (0x0004049f) popup_snote_single_text_window_t4

0x8670,	// (0x000404d3) popup_snote_single_text_window_t5_ParamLimits

0x8670,	// (0x000404d3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00047409) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00047409) popup_snote_single_text_window_t

0x869f,	// (0x00040502) bg_popup_window_pane_cp9_ParamLimits

0x869f,	// (0x00040502) bg_popup_window_pane_cp9

0x85cb,	// (0x0004042e) popup_snote_single_graphic_window_g1_ParamLimits

0x85cb,	// (0x0004042e) popup_snote_single_graphic_window_g1

0x86ad,	// (0x00040510) popup_snote_single_graphic_window_g2_ParamLimits

0x86ad,	// (0x00040510) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00047414) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00047414) popup_snote_single_graphic_window_g

0x86b9,	// (0x0004051c) popup_snote_single_graphic_window_t1_ParamLimits

0x86b9,	// (0x0004051c) popup_snote_single_graphic_window_t1

0x86cc,	// (0x0004052f) popup_snote_single_graphic_window_t2_ParamLimits

0x86cc,	// (0x0004052f) popup_snote_single_graphic_window_t2

0x86df,	// (0x00040542) popup_snote_single_graphic_window_t3_ParamLimits

0x86df,	// (0x00040542) popup_snote_single_graphic_window_t3

0x8718,	// (0x0004057b) popup_snote_single_graphic_window_t4_ParamLimits

0x8718,	// (0x0004057b) popup_snote_single_graphic_window_t4

0x874c,	// (0x000405af) popup_snote_single_graphic_window_t5_ParamLimits

0x874c,	// (0x000405af) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00047419) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00047419) popup_snote_single_graphic_window_t

0x3a99,	// (0x0003b8fc) grid_graphic_popup_pane_ParamLimits

0x3a99,	// (0x0003b8fc) grid_graphic_popup_pane

0x3ac7,	// (0x0003b92a) listscroll_popup_graphic_pane_g1_ParamLimits

0x3ac7,	// (0x0003b92a) listscroll_popup_graphic_pane_g1

0xc87d,	// (0x000446e0) listscroll_popup_graphic_pane_g2_ParamLimits

0xc87d,	// (0x000446e0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004780e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004780e) listscroll_popup_graphic_pane_g

0x3aef,	// (0x0003b952) scroll_pane_cp5

0xc83c,	// (0x0004469f) cell_graphic_popup_pane_ParamLimits

0xc83c,	// (0x0004469f) cell_graphic_popup_pane

0x3a22,	// (0x0003b885) cell_graphic_popup_pane_g1

0x3a2a,	// (0x0003b88d) cell_graphic_popup_pane_g2

0x859f,	// (0x00040402) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00047807) cell_graphic_popup_pane_g

0x3a33,	// (0x0003b896) cell_graphic_popup_pane_t2

0x85a8,	// (0x0004040b) grid_highlight_pane_cp3

0x878d,	// (0x000405f0) list_gen_pane_ParamLimits

0x878d,	// (0x000405f0) list_gen_pane

0x87b5,	// (0x00040618) scroll_pane

0xc7f3,	// (0x00044656) bg_list_pane_g1_ParamLimits

0xc7f3,	// (0x00044656) bg_list_pane_g1

0x3997,	// (0x0003b7fa) bg_list_pane_g2_ParamLimits

0x3997,	// (0x0003b7fa) bg_list_pane_g2

0x39ac,	// (0x0003b80f) bg_list_pane_g3_ParamLimits

0x39ac,	// (0x0003b80f) bg_list_pane_g3

0x39c0,	// (0x0003b823) bg_list_pane_g4_ParamLimits

0x39c0,	// (0x0003b823) bg_list_pane_g4

0xc810,	// (0x00044673) bg_list_pane_g5_ParamLimits

0xc810,	// (0x00044673) bg_list_pane_g5

0x0004,

0xf999,	// (0x000477fc) bg_list_pane_g_ParamLimits

0xf999,	// (0x000477fc) bg_list_pane_g

0xc7a2,	// (0x00044605) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double2_graphic_large_graphic_pane

0xc7a2,	// (0x00044605) list_double2_graphic_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double2_graphic_pane

0xc7a2,	// (0x00044605) list_double2_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double2_large_graphic_pane

0xc7b6,	// (0x00044619) list_double2_pane_ParamLimits

0xc7b6,	// (0x00044619) list_double2_pane

0xc7a2,	// (0x00044605) list_double_graphic_heading_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_graphic_heading_pane

0xc7a2,	// (0x00044605) list_double_graphic_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_graphic_pane

0xc7a2,	// (0x00044605) list_double_heading_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_heading_pane

0xc7a2,	// (0x00044605) list_double_large_graphic_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_large_graphic_pane

0xc7a2,	// (0x00044605) list_double_number_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_number_pane

0xc7a2,	// (0x00044605) list_double_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_pane

0xc7a2,	// (0x00044605) list_double_time_pane_ParamLimits

0xc7a2,	// (0x00044605) list_double_time_pane

0xc7a2,	// (0x00044605) list_setting_number_pane_ParamLimits

0xc7a2,	// (0x00044605) list_setting_number_pane

0xc7a2,	// (0x00044605) list_setting_pane_ParamLimits

0xc7a2,	// (0x00044605) list_setting_pane

0xb0f2,	// (0x00042f55) list_single_2graphic_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_2graphic_pane

0xb0f2,	// (0x00042f55) list_single_graphic_heading_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_graphic_heading_pane

0xb0f2,	// (0x00042f55) list_single_graphic_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_graphic_pane

0xb0f2,	// (0x00042f55) list_single_heading_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_heading_pane

0xc7b6,	// (0x00044619) list_single_large_graphic_pane_ParamLimits

0xc7b6,	// (0x00044619) list_single_large_graphic_pane

0xb0f2,	// (0x00042f55) list_single_number_heading_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_number_heading_pane

0xb0f2,	// (0x00042f55) list_single_number_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_number_pane

0xb0f2,	// (0x00042f55) list_single_pane_ParamLimits

0xb0f2,	// (0x00042f55) list_single_pane

0x7784,	// (0x0003f5e7) list_highlight_pane_cp1

0xd8b4,	// (0x00045717) list_single_pane_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_pane_g1

0xd8c0,	// (0x00045723) list_single_pane_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_pane_g

0xdb3b,	// (0x0004599e) list_single_pane_t1_ParamLimits

0xdb3b,	// (0x0004599e) list_single_pane_t1

0xd8b4,	// (0x00045717) list_single_number_pane_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_number_pane_g1

0xd8c0,	// (0x00045723) list_single_number_pane_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_number_pane_g

0xda64,	// (0x000458c7) list_single_number_pane_t1_ParamLimits

0xda64,	// (0x000458c7) list_single_number_pane_t1

0xb0b4,	// (0x00042f17) list_single_number_pane_t2_ParamLimits

0xb0b4,	// (0x00042f17) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x000477bd) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x000477bd) list_single_number_pane_t

0x9785,	// (0x000415e8) list_single_graphic_pane_g1_ParamLimits

0x9785,	// (0x000415e8) list_single_graphic_pane_g1

0xd8b4,	// (0x00045717) list_single_graphic_pane_g2_ParamLimits

0xd8b4,	// (0x00045717) list_single_graphic_pane_g2

0xd8c0,	// (0x00045723) list_single_graphic_pane_g3_ParamLimits

0xd8c0,	// (0x00045723) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00047424) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00047424) list_single_graphic_pane_g

0x9791,	// (0x000415f4) list_single_graphic_pane_t1_ParamLimits

0x9791,	// (0x000415f4) list_single_graphic_pane_t1

0xd8b4,	// (0x00045717) list_single_heading_pane_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_heading_pane_g1

0xd8c0,	// (0x00045723) list_single_heading_pane_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_heading_pane_g

0x97a7,	// (0x0004160a) list_single_heading_pane_t1_ParamLimits

0x97a7,	// (0x0004160a) list_single_heading_pane_t1

0x97bd,	// (0x00041620) list_single_heading_pane_t2_ParamLimits

0x97bd,	// (0x00041620) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00047430) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00047430) list_single_heading_pane_t

0xd8b4,	// (0x00045717) list_single_number_heading_pane_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_number_heading_pane_g1

0xd8c0,	// (0x00045723) list_single_number_heading_pane_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_number_heading_pane_g

0x97a7,	// (0x0004160a) list_single_number_heading_pane_t1_ParamLimits

0x97a7,	// (0x0004160a) list_single_number_heading_pane_t1

0x97cf,	// (0x00041632) list_single_number_heading_pane_t2_ParamLimits

0x97cf,	// (0x00041632) list_single_number_heading_pane_t2

0xd8cc,	// (0x0004572f) list_single_number_heading_pane_t3_ParamLimits

0xd8cc,	// (0x0004572f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00047435) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00047435) list_single_number_heading_pane_t

0xd8de,	// (0x00045741) list_single_graphic_heading_pane_g1_ParamLimits

0xd8de,	// (0x00045741) list_single_graphic_heading_pane_g1

0x97e1,	// (0x00041644) list_single_graphic_heading_pane_g4_ParamLimits

0x97e1,	// (0x00041644) list_single_graphic_heading_pane_g4

0xd8c0,	// (0x00045723) list_single_graphic_heading_pane_g5_ParamLimits

0xd8c0,	// (0x00045723) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0004743c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0004743c) list_single_graphic_heading_pane_g

0x97a7,	// (0x0004160a) list_single_graphic_heading_pane_t1_ParamLimits

0x97a7,	// (0x0004160a) list_single_graphic_heading_pane_t1

0x97f2,	// (0x00041655) list_single_graphic_heading_pane_t2_ParamLimits

0x97f2,	// (0x00041655) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00047443) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00047443) list_single_graphic_heading_pane_t

0xd8ea,	// (0x0004574d) list_single_large_graphic_pane_g1_ParamLimits

0xd8ea,	// (0x0004574d) list_single_large_graphic_pane_g1

0xd8f6,	// (0x00045759) list_single_large_graphic_pane_g2_ParamLimits

0xd8f6,	// (0x00045759) list_single_large_graphic_pane_g2

0xd902,	// (0x00045765) list_single_large_graphic_pane_g3_ParamLimits

0xd902,	// (0x00045765) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00047448) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00047448) list_single_large_graphic_pane_g

0x2925,	// (0x0003a788) wait_border_pane_g2_copy1

0x9804,	// (0x00041667) list_single_large_graphic_pane_g4_cp2

0xd90e,	// (0x00045771) list_single_large_graphic_pane_t1_ParamLimits

0xd90e,	// (0x00045771) list_single_large_graphic_pane_t1

0x980c,	// (0x0004166f) list_double_pane_g1_ParamLimits

0x980c,	// (0x0004166f) list_double_pane_g1

0x9818,	// (0x0004167b) list_double_pane_g2_ParamLimits

0x9818,	// (0x0004167b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0004744f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0004744f) list_double_pane_g

0x9824,	// (0x00041687) list_double_pane_t1_ParamLimits

0x9824,	// (0x00041687) list_double_pane_t1

0x983a,	// (0x0004169d) list_double_pane_t2_ParamLimits

0x983a,	// (0x0004169d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00047454) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00047454) list_double_pane_t

0x984c,	// (0x000416af) list_double2_pane_g1_ParamLimits

0x984c,	// (0x000416af) list_double2_pane_g1

0x985d,	// (0x000416c0) list_double2_pane_g2_ParamLimits

0x985d,	// (0x000416c0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00047459) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00047459) list_double2_pane_g

0x9869,	// (0x000416cc) list_double2_pane_t1_ParamLimits

0x9869,	// (0x000416cc) list_double2_pane_t1

0x987f,	// (0x000416e2) list_double2_pane_t2_ParamLimits

0x987f,	// (0x000416e2) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0004745e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0004745e) list_double2_pane_t

0x980c,	// (0x0004166f) list_double_number_pane_g1_ParamLimits

0x980c,	// (0x0004166f) list_double_number_pane_g1

0x9818,	// (0x0004167b) list_double_number_pane_g2_ParamLimits

0x9818,	// (0x0004167b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0004744f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0004744f) list_double_number_pane_g

0x9891,	// (0x000416f4) list_double_number_pane_t1_ParamLimits

0x9891,	// (0x000416f4) list_double_number_pane_t1

0x98a3,	// (0x00041706) list_double_number_pane_t2_ParamLimits

0x98a3,	// (0x00041706) list_double_number_pane_t2

0x98b9,	// (0x0004171c) list_double_number_pane_t3_ParamLimits

0x98b9,	// (0x0004171c) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00047463) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00047463) list_double_number_pane_t

0x98cb,	// (0x0004172e) list_double_graphic_pane_g1_ParamLimits

0x98cb,	// (0x0004172e) list_double_graphic_pane_g1

0x98d7,	// (0x0004173a) list_double_graphic_pane_g2_ParamLimits

0x98d7,	// (0x0004173a) list_double_graphic_pane_g2

0x98e6,	// (0x00041749) list_double_graphic_pane_g3_ParamLimits

0x98e6,	// (0x00041749) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0004746a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0004746a) list_double_graphic_pane_g

0x98fe,	// (0x00041761) list_double_graphic_pane_t1_ParamLimits

0x98fe,	// (0x00041761) list_double_graphic_pane_t1

0x9914,	// (0x00041777) list_double_graphic_pane_t2_ParamLimits

0x9914,	// (0x00041777) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00047473) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00047473) list_double_graphic_pane_t

0x9926,	// (0x00041789) list_double2_graphic_pane_g1_ParamLimits

0x9926,	// (0x00041789) list_double2_graphic_pane_g1

0x9932,	// (0x00041795) list_double2_graphic_pane_g2_ParamLimits

0x9932,	// (0x00041795) list_double2_graphic_pane_g2

0x993e,	// (0x000417a1) list_double2_graphic_pane_g3_ParamLimits

0x993e,	// (0x000417a1) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00047478) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00047478) list_double2_graphic_pane_g

0x994a,	// (0x000417ad) list_double2_graphic_pane_t1_ParamLimits

0x994a,	// (0x000417ad) list_double2_graphic_pane_t1

0x9960,	// (0x000417c3) list_double2_graphic_pane_t2_ParamLimits

0x9960,	// (0x000417c3) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0004747f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0004747f) list_double2_graphic_pane_t

0x9972,	// (0x000417d5) list_double_large_graphic_pane_g1_ParamLimits

0x9972,	// (0x000417d5) list_double_large_graphic_pane_g1

0x999d,	// (0x00041800) list_double_large_graphic_pane_g2_ParamLimits

0x999d,	// (0x00041800) list_double_large_graphic_pane_g2

0x9818,	// (0x0004167b) list_double_large_graphic_pane_g3_ParamLimits

0x9818,	// (0x0004167b) list_double_large_graphic_pane_g3

0x99ae,	// (0x00041811) list_double_large_graphic_pane_g4_ParamLimits

0x99ae,	// (0x00041811) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00047484) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00047484) list_double_large_graphic_pane_g

0x99c1,	// (0x00041824) list_double_large_graphic_pane_t1_ParamLimits

0x99c1,	// (0x00041824) list_double_large_graphic_pane_t1

0x99da,	// (0x0004183d) list_double_large_graphic_pane_t2_ParamLimits

0x99da,	// (0x0004183d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004748f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004748f) list_double_large_graphic_pane_t

0x99ec,	// (0x0004184f) list_double2_large_graphic_pane_g1_ParamLimits

0x99ec,	// (0x0004184f) list_double2_large_graphic_pane_g1

0x99f8,	// (0x0004185b) list_double2_large_graphic_pane_g2_ParamLimits

0x99f8,	// (0x0004185b) list_double2_large_graphic_pane_g2

0x9a09,	// (0x0004186c) list_double2_large_graphic_pane_g3_ParamLimits

0x9a09,	// (0x0004186c) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00047494) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00047494) list_double2_large_graphic_pane_g

0x9a15,	// (0x00041878) list_double2_large_graphic_pane_t1_ParamLimits

0x9a15,	// (0x00041878) list_double2_large_graphic_pane_t1

0x9a2b,	// (0x0004188e) list_double2_large_graphic_pane_t2_ParamLimits

0x9a2b,	// (0x0004188e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0004749b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0004749b) list_double2_large_graphic_pane_t

0x9a3d,	// (0x000418a0) list_double_heading_pane_g1_ParamLimits

0x9a3d,	// (0x000418a0) list_double_heading_pane_g1

0x9a4e,	// (0x000418b1) list_double_heading_pane_g2_ParamLimits

0x9a4e,	// (0x000418b1) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000474a0) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000474a0) list_double_heading_pane_g

0x9a5a,	// (0x000418bd) list_double_heading_pane_t1_ParamLimits

0x9a5a,	// (0x000418bd) list_double_heading_pane_t1

0x9a70,	// (0x000418d3) list_double_heading_pane_t2_ParamLimits

0x9a70,	// (0x000418d3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000474a5) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000474a5) list_double_heading_pane_t

0x9a82,	// (0x000418e5) list_double_graphic_heading_pane_g1_ParamLimits

0x9a82,	// (0x000418e5) list_double_graphic_heading_pane_g1

0x9a3d,	// (0x000418a0) list_double_graphic_heading_pane_g2_ParamLimits

0x9a3d,	// (0x000418a0) list_double_graphic_heading_pane_g2

0x9a4e,	// (0x000418b1) list_double_graphic_heading_pane_g3_ParamLimits

0x9a4e,	// (0x000418b1) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000474aa) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000474aa) list_double_graphic_heading_pane_g

0x9a8e,	// (0x000418f1) list_double_graphic_heading_pane_t1_ParamLimits

0x9a8e,	// (0x000418f1) list_double_graphic_heading_pane_t1

0x9960,	// (0x000417c3) list_double_graphic_heading_pane_t2_ParamLimits

0x9960,	// (0x000417c3) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000474b1) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000474b1) list_double_graphic_heading_pane_t

0x999d,	// (0x00041800) list_double_time_pane_g1_ParamLimits

0x999d,	// (0x00041800) list_double_time_pane_g1

0x9818,	// (0x0004167b) list_double_time_pane_g2_ParamLimits

0x9818,	// (0x0004167b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000474b6) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000474b6) list_double_time_pane_g

0x9aa4,	// (0x00041907) list_double_time_pane_t1_ParamLimits

0x9aa4,	// (0x00041907) list_double_time_pane_t1

0x9aba,	// (0x0004191d) list_double_time_pane_t2_ParamLimits

0x9aba,	// (0x0004191d) list_double_time_pane_t2

0x9acc,	// (0x0004192f) list_double_time_pane_t3_ParamLimits

0x9acc,	// (0x0004192f) list_double_time_pane_t3

0x9ade,	// (0x00041941) list_double_time_pane_t4_ParamLimits

0x9ade,	// (0x00041941) list_double_time_pane_t4

0x0003,

0xf658,	// (0x000474bb) list_double_time_pane_t_ParamLimits

0xf658,	// (0x000474bb) list_double_time_pane_t

0x9af0,	// (0x00041953) list_setting_pane_g1_ParamLimits

0x9af0,	// (0x00041953) list_setting_pane_g1

0x9a4e,	// (0x000418b1) list_setting_pane_g2_ParamLimits

0x9a4e,	// (0x000418b1) list_setting_pane_g2

0x0001,

0xf661,	// (0x000474c4) list_setting_pane_g_ParamLimits

0xf661,	// (0x000474c4) list_setting_pane_g

0x9afc,	// (0x0004195f) list_setting_pane_t1_ParamLimits

0x9afc,	// (0x0004195f) list_setting_pane_t1

0x9b13,	// (0x00041976) list_setting_pane_t2_ParamLimits

0x9b13,	// (0x00041976) list_setting_pane_t2

0x0002,

0xf666,	// (0x000474c9) list_setting_pane_t_ParamLimits

0xf666,	// (0x000474c9) list_setting_pane_t

0x9b52,	// (0x000419b5) set_value_pane_cp_ParamLimits

0x9b52,	// (0x000419b5) set_value_pane_cp

0x9b60,	// (0x000419c3) list_setting_number_pane_g1_ParamLimits

0x9b60,	// (0x000419c3) list_setting_number_pane_g1

0x9b6c,	// (0x000419cf) list_setting_number_pane_g2_ParamLimits

0x9b6c,	// (0x000419cf) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x000474d0) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x000474d0) list_setting_number_pane_g

0x9b78,	// (0x000419db) list_setting_number_pane_t1_ParamLimits

0x9b78,	// (0x000419db) list_setting_number_pane_t1

0x9b8c,	// (0x000419ef) list_setting_number_pane_t2_ParamLimits

0x9b8c,	// (0x000419ef) list_setting_number_pane_t2

0x9ba3,	// (0x00041a06) list_setting_number_pane_t3_ParamLimits

0x9ba3,	// (0x00041a06) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x000474d5) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x000474d5) list_setting_number_pane_t

0x9b52,	// (0x000419b5) set_value_pane_ParamLimits

0x9b52,	// (0x000419b5) set_value_pane

0xb91a,	// (0x0004377d) bg_set_opt_pane_ParamLimits

0xb91a,	// (0x0004377d) bg_set_opt_pane

0xd939,	// (0x0004579c) set_value_pane_t1

0xb93b,	// (0x0004379e) slider_set_pane_cp3

0xb944,	// (0x000437a7) volume_small_pane_cp

0xb94d,	// (0x000437b0) list_form_gen_pane

0xb956,	// (0x000437b9) scroll_pane_cp8

0x9be6,	// (0x00041a49) form_field_data_pane_ParamLimits

0x9be6,	// (0x00041a49) form_field_data_pane

0x9c01,	// (0x00041a64) form_field_data_wide_pane_ParamLimits

0x9c01,	// (0x00041a64) form_field_data_wide_pane

0xd957,	// (0x000457ba) form_field_popup_pane_ParamLimits

0xd957,	// (0x000457ba) form_field_popup_pane

0x9c23,	// (0x00041a86) form_field_popup_wide_pane_ParamLimits

0x9c23,	// (0x00041a86) form_field_popup_wide_pane

0xd979,	// (0x000457dc) form_field_slider_pane_ParamLimits

0xd979,	// (0x000457dc) form_field_slider_pane

0xd98c,	// (0x000457ef) form_field_slider_wide_pane_ParamLimits

0xd98c,	// (0x000457ef) form_field_slider_wide_pane

0xb967,	// (0x000437ca) data_form_pane

0x9c4e,	// (0x00041ab1) form_field_data_pane_t1

0xb973,	// (0x000437d6) input_focus_pane

0xd99f,	// (0x00045802) data_form_wide_pane

0xd9bc,	// (0x0004581f) form_field_data_wide_pane_t1

0x85bd,	// (0x00040420) input_focus_pane_cp6

0x9c68,	// (0x00041acb) form_field_popup_pane_t1

0xb973,	// (0x000437d6) input_focus_pane_cp7

0xb9a1,	// (0x00043804) list_form_pane

0xd9e6,	// (0x00045849) form_field_popup_wide_pane_t1

0xb973,	// (0x000437d6) input_focus_pane_cp8

0xb9ad,	// (0x00043810) list_form_wide_pane

0x9c8a,	// (0x00041aed) form_field_slider_pane_t1_ParamLimits

0x9c8a,	// (0x00041aed) form_field_slider_pane_t1

0x9ca2,	// (0x00041b05) form_field_slider_pane_t2_ParamLimits

0x9ca2,	// (0x00041b05) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x000474e5) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x000474e5) form_field_slider_pane_t

0x8352,	// (0x000401b5) input_focus_pane_cp9_ParamLimits

0x8352,	// (0x000401b5) input_focus_pane_cp9

0x9cb7,	// (0x00041b1a) slider_cont_pane_ParamLimits

0x9cb7,	// (0x00041b1a) slider_cont_pane

0xb9bc,	// (0x0004381f) form_field_slider_wide_pane_t1_ParamLimits

0xb9bc,	// (0x0004381f) form_field_slider_wide_pane_t1

0xd9fb,	// (0x0004585e) form_field_slider_wide_pane_t2_ParamLimits

0xd9fb,	// (0x0004585e) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x000474ea) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x000474ea) form_field_slider_wide_pane_t

0x8352,	// (0x000401b5) input_focus_pane_cp10_ParamLimits

0x8352,	// (0x000401b5) input_focus_pane_cp10

0x9ccb,	// (0x00041b2e) slider_cont_pane_cp1_ParamLimits

0x9ccb,	// (0x00041b2e) slider_cont_pane_cp1

0x9cdf,	// (0x00041b42) slider_form_pane_cp

0xb9ce,	// (0x00043831) input_focus_pane_g1

0xb9d6,	// (0x00043839) input_focus_pane_g2

0xb9de,	// (0x00043841) input_focus_pane_g3

0xb9e6,	// (0x00043849) input_focus_pane_g4

0xb9ee,	// (0x00043851) input_focus_pane_g5

0xb9f6,	// (0x00043859) input_focus_pane_g6

0xb9fe,	// (0x00043861) input_focus_pane_g7

0xba06,	// (0x00043869) input_focus_pane_g8

0xba0e,	// (0x00043871) input_focus_pane_g9

0x777a,	// (0x0003f5dd) input_focus_pane_g10

0x0009,

0xf68c,	// (0x000474ef) input_focus_pane_g

0x292e,	// (0x0003a791) wait_border_pane_g3_copy1

0x9ce7,	// (0x00041b4a) data_form_pane_t1

0x777a,	// (0x0003f5dd) wait_anim_pane_g1_copy1

0xb0c6,	// (0x00042f29) data_form_wide_pane_t1

0xda0d,	// (0x00045870) list_form_graphic_pane_cp_ParamLimits

0xda0d,	// (0x00045870) list_form_graphic_pane_cp

0x388d,	// (0x0003b6f0) slider_form_pane_g1

0x3896,	// (0x0003b6f9) slider_form_pane_g2

0x0006,

0xf98a,	// (0x000477ed) slider_form_pane_g

0xda0d,	// (0x00045870) list_form_graphic_pane_ParamLimits

0xda0d,	// (0x00045870) list_form_graphic_pane

0xda1f,	// (0x00045882) list_form_graphic_pane_g1

0xda27,	// (0x0004588a) list_form_graphic_pane_t1_ParamLimits

0xda27,	// (0x0004588a) list_form_graphic_pane_t1

0x821f,	// (0x00040082) list_highlight_pane_cp5_ParamLimits

0x821f,	// (0x00040082) list_highlight_pane_cp5

0x9d01,	// (0x00041b64) find_pane_g1

0xba16,	// (0x00043879) input_find_pane

0x9d0a,	// (0x00041b6d) input_find_pane_g1_ParamLimits

0x9d0a,	// (0x00041b6d) input_find_pane_g1

0x9d16,	// (0x00041b79) input_find_pane_t1_ParamLimits

0x9d16,	// (0x00041b79) input_find_pane_t1

0x9d2b,	// (0x00041b8e) input_find_pane_t2_ParamLimits

0x9d2b,	// (0x00041b8e) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00047504) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00047504) input_find_pane_t

0xba1f,	// (0x00043882) input_focus_pane_cp5_ParamLimits

0xba1f,	// (0x00043882) input_focus_pane_cp5

0xba2d,	// (0x00043890) bg_popup_window_pane_cp2_ParamLimits

0xba2d,	// (0x00043890) bg_popup_window_pane_cp2

0xba3a,	// (0x0004389d) listscroll_menu_pane_ParamLimits

0xba3a,	// (0x0004389d) listscroll_menu_pane

0x9d4c,	// (0x00041baf) popup_submenu_window_ParamLimits

0x9d4c,	// (0x00041baf) popup_submenu_window

0xba46,	// (0x000438a9) find_popup_pane_g1

0xba4e,	// (0x000438b1) input_popup_find_pane_cp

0xba1f,	// (0x00043882) input_focus_pane_cp4_ParamLimits

0xba1f,	// (0x00043882) input_focus_pane_cp4

0xba58,	// (0x000438bb) input_popup_find_pane_t1_ParamLimits

0xba58,	// (0x000438bb) input_popup_find_pane_t1

0x7784,	// (0x0003f5e7) bg_popup_sub_pane_cp

0xba86,	// (0x000438e9) listscroll_popup_sub_pane

0xba8e,	// (0x000438f1) list_submenu_pane_ParamLimits

0xba8e,	// (0x000438f1) list_submenu_pane

0xba9f,	// (0x00043902) scroll_pane_cp4

0xbaa7,	// (0x0004390a) list_single_popup_submenu_pane_ParamLimits

0xbaa7,	// (0x0004390a) list_single_popup_submenu_pane

0xbabc,	// (0x0004391f) list_single_popup_submenu_pane_g1

0xbac4,	// (0x00043927) list_single_popup_submenu_pane_t1_ParamLimits

0xbac4,	// (0x00043927) list_single_popup_submenu_pane_t1

0x8352,	// (0x000401b5) bg_active_tab_pane_cp1_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp1

0x9d8a,	// (0x00041bed) tabs_2_active_pane_g1

0x9d92,	// (0x00041bf5) tabs_2_active_pane_t1

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp1_ParamLimits

0x8352,	// (0x000401b5) bg_passive_tab_pane_cp1

0x9d8a,	// (0x00041bed) tabs_2_passive_pane_g1

0x9d92,	// (0x00041bf5) tabs_2_passive_pane_t1

0x821f,	// (0x00040082) bg_active_tab_pane_cp4

0x9da4,	// (0x00041c07) tabs_2_long_active_pane_t1

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp4

0x02cd,	// (0x00038130) list_single_midp_graphic_pane_g4_ParamLimits

0x821f,	// (0x00040082) bg_active_tab_pane_cp5

0x9db7,	// (0x00041c1a) tabs_3_long_active_pane_t1

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp5

0x02cd,	// (0x00038130) list_single_midp_graphic_pane_g4

0x821f,	// (0x00040082) bg_popup_window_pane_cp13_ParamLimits

0x821f,	// (0x00040082) bg_popup_window_pane_cp13

0xbae2,	// (0x00043945) listscroll_popup_fast_pane_ParamLimits

0xbae2,	// (0x00043945) listscroll_popup_fast_pane

0xbaf1,	// (0x00043954) grid_popup_fast_pane_ParamLimits

0xbaf1,	// (0x00043954) grid_popup_fast_pane

0xbb03,	// (0x00043966) scroll_pane_cp9_ParamLimits

0xbb03,	// (0x00043966) scroll_pane_cp9

0x520e,	// (0x0003d071) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x520e,	// (0x0003d071) list_single_graphic_hl_pane_t1_cp2

0xbb27,	// (0x0004398a) input_focus_pane_cp20_ParamLimits

0xbb27,	// (0x0004398a) input_focus_pane_cp20

0xbb35,	// (0x00043998) query_popup_data_pane_t1_ParamLimits

0xbb35,	// (0x00043998) query_popup_data_pane_t1

0xbb48,	// (0x000439ab) query_popup_data_pane_t2_ParamLimits

0xbb48,	// (0x000439ab) query_popup_data_pane_t2

0xbb8e,	// (0x000439f1) query_popup_data_pane_t3_ParamLimits

0xbb8e,	// (0x000439f1) query_popup_data_pane_t3

0xbbcf,	// (0x00043a32) query_popup_data_pane_t4_ParamLimits

0xbbcf,	// (0x00043a32) query_popup_data_pane_t4

0xbc0b,	// (0x00043a6e) query_popup_data_pane_t5_ParamLimits

0xbc0b,	// (0x00043a6e) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00047509) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00047509) query_popup_data_pane_t

0xb9ce,	// (0x00043831) bg_set_opt_pane_g1

0xb9d6,	// (0x00043839) bg_set_opt_pane_g2

0xb9de,	// (0x00043841) bg_set_opt_pane_g3

0xb9e6,	// (0x00043849) bg_set_opt_pane_g4

0xb9ee,	// (0x00043851) bg_set_opt_pane_g5

0xb9f6,	// (0x00043859) bg_set_opt_pane_g6

0xb9fe,	// (0x00043861) bg_set_opt_pane_g7

0xba06,	// (0x00043869) bg_set_opt_pane_g8

0xba0e,	// (0x00043871) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00047514) bg_set_opt_pane_g

0xf124,	// (0x00046f87) control_top_pane_stacon_ParamLimits

0xf124,	// (0x00046f87) control_top_pane_stacon

0xf177,	// (0x00046fda) signal_pane_stacon_ParamLimits

0xf177,	// (0x00046fda) signal_pane_stacon

0xc022,	// (0x00043e85) stacon_top_pane_g1_ParamLimits

0xc022,	// (0x00043e85) stacon_top_pane_g1

0xf19c,	// (0x00046fff) title_pane_stacon_ParamLimits

0xf19c,	// (0x00046fff) title_pane_stacon

0xf1c6,	// (0x00047029) uni_indicator_pane_stacon_ParamLimits

0xf1c6,	// (0x00047029) uni_indicator_pane_stacon

0xf1de,	// (0x00047041) battery_pane_stacon_ParamLimits

0xf1de,	// (0x00047041) battery_pane_stacon

0xf222,	// (0x00047085) control_bottom_pane_stacon_ParamLimits

0xf222,	// (0x00047085) control_bottom_pane_stacon

0xf245,	// (0x000470a8) navi_pane_stacon_ParamLimits

0xf245,	// (0x000470a8) navi_pane_stacon

0xc044,	// (0x00043ea7) stacon_bottom_pane_g1_ParamLimits

0xc044,	// (0x00043ea7) stacon_bottom_pane_g1

0xee1e,	// (0x00046c81) aid_levels_signal_lsc_ParamLimits

0xee1e,	// (0x00046c81) aid_levels_signal_lsc

0xee35,	// (0x00046c98) signal_pane_stacon_g1_ParamLimits

0xee35,	// (0x00046c98) signal_pane_stacon_g1

0xee49,	// (0x00046cac) signal_pane_stacon_g2_ParamLimits

0xee49,	// (0x00046cac) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00047527) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00047527) signal_pane_stacon_g

0xee7e,	// (0x00046ce1) title_pane_stacon_t1_ParamLimits

0xee7e,	// (0x00046ce1) title_pane_stacon_t1

0xbc4f,	// (0x00043ab2) uni_indicator_pane_stacon_g1

0xbc59,	// (0x00043abc) uni_indicator_pane_stacon_g2

0xbc63,	// (0x00043ac6) uni_indicator_pane_stacon_g3

0xbc6d,	// (0x00043ad0) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00047533) uni_indicator_pane_stacon_g

0xeea3,	// (0x00046d06) control_top_pane_stacon_g1

0xeeab,	// (0x00046d0e) control_top_pane_stacon_t1_ParamLimits

0xeeab,	// (0x00046d0e) control_top_pane_stacon_t1

0xeee2,	// (0x00046d45) aid_levels_battery_lsc_ParamLimits

0xeee2,	// (0x00046d45) aid_levels_battery_lsc

0xeefa,	// (0x00046d5d) battery_pane_stacon_g1_ParamLimits

0xeefa,	// (0x00046d5d) battery_pane_stacon_g1

0xef0d,	// (0x00046d70) battery_pane_stacon_g2_ParamLimits

0xef0d,	// (0x00046d70) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0004753c) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0004753c) battery_pane_stacon_g

0xef4b,	// (0x00046dae) navi_icon_pane_stacon

0xef5f,	// (0x00046dc2) navi_navi_pane_stacon

0xef4b,	// (0x00046dae) navi_text_pane_stacon

0xeea3,	// (0x00046d06) control_bottom_pane_stacon_g1

0xef75,	// (0x00046dd8) control_bottom_pane_stacon_t1_ParamLimits

0xef75,	// (0x00046dd8) control_bottom_pane_stacon_t1

0x9dc9,	// (0x00041c2c) grid_app_pane_ParamLimits

0x9dc9,	// (0x00041c2c) grid_app_pane

0x9e01,	// (0x00041c64) scroll_pane_cp15_ParamLimits

0x9e01,	// (0x00041c64) scroll_pane_cp15

0x9e16,	// (0x00041c79) cell_app_pane_ParamLimits

0x9e16,	// (0x00041c79) cell_app_pane

0x9e63,	// (0x00041cc6) cell_app_pane_g1_ParamLimits

0x9e63,	// (0x00041cc6) cell_app_pane_g1

0xbc91,	// (0x00043af4) cell_app_pane_g2_ParamLimits

0xbc91,	// (0x00043af4) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00047541) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00047541) cell_app_pane_g

0xbc9d,	// (0x00043b00) cell_app_pane_t1_ParamLimits

0xbc9d,	// (0x00043b00) cell_app_pane_t1

0xbcb4,	// (0x00043b17) grid_highlight_pane_ParamLimits

0xbcb4,	// (0x00043b17) grid_highlight_pane

0xb9ce,	// (0x00043831) cell_highlight_pane_g1

0xb9d6,	// (0x00043839) cell_highlight_pane_g2

0xb9de,	// (0x00043841) cell_highlight_pane_g3

0xb9e6,	// (0x00043849) cell_highlight_pane_g4

0xb9ee,	// (0x00043851) cell_highlight_pane_g5

0xb9f6,	// (0x00043859) cell_highlight_pane_g6

0xb9fe,	// (0x00043861) cell_highlight_pane_g7

0xba06,	// (0x00043869) cell_highlight_pane_g8

0xba0e,	// (0x00043871) cell_highlight_pane_g9

0x777a,	// (0x0003f5dd) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x000474ef) cell_highlight_pane_g

0xbcc5,	// (0x00043b28) bg_scroll_pane

0xefb6,	// (0x00046e19) scroll_handle_pane

0xbd0c,	// (0x00043b6f) scroll_bg_pane_g1

0xbd21,	// (0x00043b84) scroll_bg_pane_g2

0xbd39,	// (0x00043b9c) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00047546) scroll_bg_pane_g

0xbd4e,	// (0x00043bb1) scroll_handle_focus_pane_ParamLimits

0xbd4e,	// (0x00043bb1) scroll_handle_focus_pane

0xbd0c,	// (0x00043b6f) scroll_handle_pane_g1

0xbd5b,	// (0x00043bbe) scroll_handle_pane_g2

0xbd39,	// (0x00043b9c) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0004754d) scroll_handle_pane_g

0xba1f,	// (0x00043882) bg_popup_sub_pane_cp21_ParamLimits

0xba1f,	// (0x00043882) bg_popup_sub_pane_cp21

0xbd6f,	// (0x00043bd2) popup_fep_japan_predictive_window_t1_ParamLimits

0xbd6f,	// (0x00043bd2) popup_fep_japan_predictive_window_t1

0xbd86,	// (0x00043be9) popup_fep_japan_predictive_window_t2_ParamLimits

0xbd86,	// (0x00043be9) popup_fep_japan_predictive_window_t2

0xbdb9,	// (0x00043c1c) popup_fep_japan_predictive_window_t3_ParamLimits

0xbdb9,	// (0x00043c1c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00047554) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00047554) popup_fep_japan_predictive_window_t

0x7784,	// (0x0003f5e7) bg_popup_sub_pane_cp23

0xbdf0,	// (0x00043c53) listscroll_japin_cand_pane

0xbdf8,	// (0x00043c5b) popup_fep_japan_candidate_window_t1

0xbe06,	// (0x00043c69) candidate_pane_ParamLimits

0xbe06,	// (0x00043c69) candidate_pane

0xbe18,	// (0x00043c7b) scroll_pane_cp30

0xbe22,	// (0x00043c85) list_single_popup_jap_candidate_pane_ParamLimits

0xbe22,	// (0x00043c85) list_single_popup_jap_candidate_pane

0x7784,	// (0x0003f5e7) list_highlight_pane_cp30

0xbe36,	// (0x00043c99) list_single_popup_jap_candidate_pane_t1

0x9e8c,	// (0x00041cef) level_1_signal

0x9e9e,	// (0x00041d01) level_2_signal

0x9eb1,	// (0x00041d14) level_3_signal

0x9ec4,	// (0x00041d27) level_4_signal

0x9ed7,	// (0x00041d3a) level_5_signal

0x9eea,	// (0x00041d4d) level_6_signal

0x9efd,	// (0x00041d60) level_7_signal

0x9e8c,	// (0x00041cef) level_1_battery

0x9e9e,	// (0x00041d01) level_2_battery

0x9eb1,	// (0x00041d14) level_3_battery

0x9ec4,	// (0x00041d27) level_4_battery

0x9ed7,	// (0x00041d3a) level_5_battery

0x9eea,	// (0x00041d4d) level_6_battery

0x9efd,	// (0x00041d60) level_7_battery

0xbe5d,	// (0x00043cc0) list_menu_pane_ParamLimits

0xbe5d,	// (0x00043cc0) list_menu_pane

0xbe73,	// (0x00043cd6) scroll_pane_cp25_ParamLimits

0xbe73,	// (0x00043cd6) scroll_pane_cp25

0xbe8c,	// (0x00043cef) list_double2_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double2_graphic_pane_cp2

0xbe8c,	// (0x00043cef) list_double2_large_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double2_large_graphic_pane_cp2

0xbe8c,	// (0x00043cef) list_double2_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double2_pane_cp2

0xbe8c,	// (0x00043cef) list_double_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double_graphic_pane_cp2

0xbe8c,	// (0x00043cef) list_double_large_graphic_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double_large_graphic_pane_cp2

0xbe8c,	// (0x00043cef) list_double_number_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double_number_pane_cp2

0xbe8c,	// (0x00043cef) list_double_pane_cp2_ParamLimits

0xbe8c,	// (0x00043cef) list_double_pane_cp2

0x9f23,	// (0x00041d86) list_single_2graphic_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_2graphic_pane_cp2

0x9f23,	// (0x00041d86) list_single_graphic_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_graphic_heading_pane_cp2

0x9f23,	// (0x00041d86) list_single_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_graphic_pane_cp2

0x9f23,	// (0x00041d86) list_single_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_heading_pane_cp2

0xbe9c,	// (0x00043cff) list_single_large_graphic_pane_cp2_ParamLimits

0xbe9c,	// (0x00043cff) list_single_large_graphic_pane_cp2

0x9f23,	// (0x00041d86) list_single_number_heading_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_number_heading_pane_cp2

0x9f23,	// (0x00041d86) list_single_number_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_number_pane_cp2

0x9f23,	// (0x00041d86) list_single_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_pane_cp2

0xbeb5,	// (0x00043d18) bg_popup_sub_pane_cp22

0xf0d4,	// (0x00046f37) popup_side_volume_key_window_g1

0xf0fe,	// (0x00046f61) popup_side_volume_key_window_t1

0xf11c,	// (0x00046f7f) volume_small_pane_cp1

0x8352,	// (0x000401b5) bg_popup_sub_pane_cp24_ParamLimits

0x8352,	// (0x000401b5) bg_popup_sub_pane_cp24

0xbecb,	// (0x00043d2e) fep_china_uni_candidate_pane_ParamLimits

0xbecb,	// (0x00043d2e) fep_china_uni_candidate_pane

0xbedf,	// (0x00043d42) fep_china_uni_entry_pane

0xbeef,	// (0x00043d52) popup_fep_china_uni_window_g1

0xbf0b,	// (0x00043d6e) fep_china_uni_entry_pane_g1

0xbf15,	// (0x00043d78) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00047585) fep_china_uni_entry_pane_g

0xbf1f,	// (0x00043d82) fep_entry_item_pane

0xbf29,	// (0x00043d8c) fep_candidate_item_pane

0xbf31,	// (0x00043d94) fep_china_uni_candidate_pane_g1

0xbf3b,	// (0x00043d9e) fep_china_uni_candidate_pane_g2

0xbf43,	// (0x00043da6) fep_china_uni_candidate_pane_g3

0xbf4b,	// (0x00043dae) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0004758a) fep_china_uni_candidate_pane_g

0x777a,	// (0x0003f5dd) fep_entry_item_pane_g1

0xbf55,	// (0x00043db8) fep_entry_item_pane_t1_ParamLimits

0xbf55,	// (0x00043db8) fep_entry_item_pane_t1

0xbf6b,	// (0x00043dce) fep_candidate_item_pane_t1_ParamLimits

0xbf6b,	// (0x00043dce) fep_candidate_item_pane_t1

0xbf80,	// (0x00043de3) fep_candidate_item_pane_t2_ParamLimits

0xbf80,	// (0x00043de3) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00047593) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00047593) fep_candidate_item_pane_t

0x821f,	// (0x00040082) list_highlight_pane_cp31_ParamLimits

0x821f,	// (0x00040082) list_highlight_pane_cp31

0xbf92,	// (0x00043df5) level_1_signal_lsc

0xbf9b,	// (0x00043dfe) level_2_signal_lsc

0xbfa4,	// (0x00043e07) level_3_signal_lsc

0xbfad,	// (0x00043e10) level_4_signal_lsc

0xbfb6,	// (0x00043e19) level_5_signal_lsc

0xbfbf,	// (0x00043e22) level_6_signal_lsc

0xbfc8,	// (0x00043e2b) level_7_signal_lsc

0xbfc8,	// (0x00043e2b) level_1_battery_lsc

0xbfd1,	// (0x00043e34) level_2_battery_lsc

0xbfda,	// (0x00043e3d) level_3_battery_lsc

0xbfe3,	// (0x00043e46) level_4_battery_lsc

0xbfec,	// (0x00043e4f) level_5_battery_lsc

0xbff5,	// (0x00043e58) level_6_battery_lsc

0xbf92,	// (0x00043df5) level_7_battery_lsc

0xbffe,	// (0x00043e61) scroll_handle_focus_pane_g1

0xc007,	// (0x00043e6a) scroll_handle_focus_pane_g2

0xc010,	// (0x00043e73) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00047598) scroll_handle_focus_pane_g

0x9fb5,	// (0x00041e18) list_single_2graphic_pane_g1_ParamLimits

0x9fb5,	// (0x00041e18) list_single_2graphic_pane_g1

0x97e1,	// (0x00041644) list_single_2graphic_pane_g2_ParamLimits

0x97e1,	// (0x00041644) list_single_2graphic_pane_g2

0xd8c0,	// (0x00045723) list_single_2graphic_pane_g3_ParamLimits

0xd8c0,	// (0x00045723) list_single_2graphic_pane_g3

0x9fc1,	// (0x00041e24) list_single_2graphic_pane_g4_ParamLimits

0x9fc1,	// (0x00041e24) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004759f) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004759f) list_single_2graphic_pane_g

0x9fcd,	// (0x00041e30) list_single_2graphic_pane_t1_ParamLimits

0x9fcd,	// (0x00041e30) list_single_2graphic_pane_t1

0x9ffb,	// (0x00041e5e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9ffb,	// (0x00041e5e) list_double2_graphic_large_graphic_pane_g1

0x99f8,	// (0x0004185b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99f8,	// (0x0004185b) list_double2_graphic_large_graphic_pane_g2

0x9a09,	// (0x0004186c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a09,	// (0x0004186c) list_double2_graphic_large_graphic_pane_g3

0xa00d,	// (0x00041e70) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa00d,	// (0x00041e70) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x000475a8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x000475a8) list_double2_graphic_large_graphic_pane_g

0xa019,	// (0x00041e7c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa019,	// (0x00041e7c) list_double2_graphic_large_graphic_pane_t1

0xa02f,	// (0x00041e92) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa02f,	// (0x00041e92) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x000475b1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x000475b1) list_double2_graphic_large_graphic_pane_t

0xc0a2,	// (0x00043f05) popup_fast_swap_window_ParamLimits

0xc0a2,	// (0x00043f05) popup_fast_swap_window

0xc0c0,	// (0x00043f23) popup_side_volume_key_window

0xc0de,	// (0x00043f41) stacon_top_pane

0xc0e8,	// (0x00043f4b) status_pane_ParamLimits

0xc0e8,	// (0x00043f4b) status_pane

0xa0d8,	// (0x00041f3b) status_small_pane

0x7784,	// (0x0003f5e7) control_pane

0x7784,	// (0x0003f5e7) stacon_bottom_pane

0xb956,	// (0x000437b9) scroll_pane_cp121

0xb94d,	// (0x000437b0) set_content_pane

0xa041,	// (0x00041ea4) bg_active_tab_pane_g1_cp1

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp1

0xa04a,	// (0x00041ead) bg_active_tab_pane_g3_cp1

0xa041,	// (0x00041ea4) bg_passive_tab_pane_g1_cp1

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp1

0xa04a,	// (0x00041ead) bg_passive_tab_pane_g3_cp1

0xa053,	// (0x00041eb6) bg_active_tab_pane_g1_cp2

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp2

0xa05c,	// (0x00041ebf) bg_active_tab_pane_g3_cp2

0xa053,	// (0x00041eb6) bg_passive_tab_pane_g1_cp2

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp2

0xa05c,	// (0x00041ebf) bg_passive_tab_pane_g3_cp2

0xa065,	// (0x00041ec8) bg_active_tab_pane_g1_cp3

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp3

0xa06e,	// (0x00041ed1) bg_active_tab_pane_g3_cp3

0xa065,	// (0x00041ec8) bg_passive_tab_pane_g1_cp3

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp3

0xa06e,	// (0x00041ed1) bg_passive_tab_pane_g3_cp3

0xa077,	// (0x00041eda) bg_active_tab_pane_g1_cp4

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp4

0xa080,	// (0x00041ee3) bg_active_tab_pane_g3_cp4

0xa077,	// (0x00041eda) bg_passive_tab_pane_g1_cp4

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp4

0xa080,	// (0x00041ee3) bg_passive_tab_pane_g3_cp4

0xc060,	// (0x00043ec3) bg_active_tab_pane_g1_cp5

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp5

0xc069,	// (0x00043ecc) bg_active_tab_pane_g3_cp5

0xc060,	// (0x00043ec3) bg_passive_tab_pane_g1_cp5

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp5

0xc069,	// (0x00043ecc) bg_passive_tab_pane_g3_cp5

0x3eb1,	// (0x0003bd14) list_set_graphic_pane_ParamLimits

0x3eb1,	// (0x0003bd14) list_set_graphic_pane

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp4

0xa089,	// (0x00041eec) list_set_graphic_pane_g1_ParamLimits

0xa089,	// (0x00041eec) list_set_graphic_pane_g1

0xa095,	// (0x00041ef8) list_set_graphic_pane_g2_ParamLimits

0xa095,	// (0x00041ef8) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x000475b6) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x000475b6) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0004793b) volume_small_pane_cp_g

0xa0b9,	// (0x00041f1c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa0b9,	// (0x00041f1c) list_double2_large_graphic_pane_g1_cp2

0xa0c7,	// (0x00041f2a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa0c7,	// (0x00041f2a) list_double2_large_graphic_pane_g2_cp2

0xc072,	// (0x00043ed5) list_double2_large_graphic_pane_g3_cp2

0xc07a,	// (0x00043edd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc07a,	// (0x00043edd) list_double2_large_graphic_pane_t1_cp2

0xc090,	// (0x00043ef3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc090,	// (0x00043ef3) list_double2_large_graphic_pane_t2_cp2

0xc52e,	// (0x00044391) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc52e,	// (0x00044391) list_double_large_graphic_pane_g1_cp2

0xc541,	// (0x000443a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc541,	// (0x000443a4) list_double_large_graphic_pane_g2_cp2

0xc1c9,	// (0x0004402c) list_double_large_graphic_pane_g3_cp2

0x3436,	// (0x0003b299) list_double_large_graphic_pane_g4_cp

0x343e,	// (0x0003b2a1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x343e,	// (0x0003b2a1) list_double_large_graphic_pane_t1_cp2

0x3455,	// (0x0003b2b8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3455,	// (0x0003b2b8) list_double_large_graphic_pane_t2_cp2

0xa0e3,	// (0x00041f46) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa0e3,	// (0x00041f46) list_double2_graphic_pane_g1_cp2

0xa0f1,	// (0x00041f54) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa0f1,	// (0x00041f54) list_double2_graphic_pane_g2_cp2

0xa102,	// (0x00041f65) list_double2_graphic_pane_g3_cp2

0xc0f6,	// (0x00043f59) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc0f6,	// (0x00043f59) list_double2_graphic_pane_t1_cp2

0xc10c,	// (0x00043f6f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc10c,	// (0x00043f6f) list_double2_graphic_pane_t2_cp2

0xc11e,	// (0x00043f81) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc11e,	// (0x00043f81) list_single_number_heading_pane_g1_cp2

0xc12a,	// (0x00043f8d) list_single_number_heading_pane_g2_cp2

0xc132,	// (0x00043f95) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc132,	// (0x00043f95) list_single_number_heading_pane_t1_cp2

0xa10c,	// (0x00041f6f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa10c,	// (0x00041f6f) list_single_number_heading_pane_t2_cp2

0xc148,	// (0x00043fab) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc148,	// (0x00043fab) list_single_number_heading_pane_t3_cp2

0xc11e,	// (0x00043f81) list_single_heading_pane_g1_cp2_ParamLimits

0xc11e,	// (0x00043f81) list_single_heading_pane_g1_cp2

0xc12a,	// (0x00043f8d) list_single_heading_pane_g2_cp2

0xc132,	// (0x00043f95) list_single_heading_pane_t1_cp2_ParamLimits

0xc132,	// (0x00043f95) list_single_heading_pane_t1_cp2

0xc51a,	// (0x0004437d) list_single_heading_pane_t2_cp2_ParamLimits

0xc51a,	// (0x0004437d) list_single_heading_pane_t2_cp2

0x3154,	// (0x0003afb7) list_double_graphic_pane_g1_cp2_ParamLimits

0x3154,	// (0x0003afb7) list_double_graphic_pane_g1_cp2

0x3160,	// (0x0003afc3) list_double_graphic_pane_g2_cp2_ParamLimits

0x3160,	// (0x0003afc3) list_double_graphic_pane_g2_cp2

0x316f,	// (0x0003afd2) list_double_graphic_pane_g3_cp2

0x3177,	// (0x0003afda) list_double_graphic_pane_t1_cp2_ParamLimits

0x3177,	// (0x0003afda) list_double_graphic_pane_t1_cp2

0x318d,	// (0x0003aff0) list_double_graphic_pane_t2_cp2_ParamLimits

0x318d,	// (0x0003aff0) list_double_graphic_pane_t2_cp2

0xc1bd,	// (0x00044020) list_double_number_pane_g1_cp2_ParamLimits

0xc1bd,	// (0x00044020) list_double_number_pane_g1_cp2

0xc1c9,	// (0x0004402c) list_double_number_pane_g2_cp2

0xc4b4,	// (0x00044317) list_double_number_pane_t1_cp2_ParamLimits

0xc4b4,	// (0x00044317) list_double_number_pane_t1_cp2

0x312c,	// (0x0003af8f) list_double_number_pane_t2_cp2_ParamLimits

0x312c,	// (0x0003af8f) list_double_number_pane_t2_cp2

0x3142,	// (0x0003afa5) list_double_number_pane_t3_cp2_ParamLimits

0x3142,	// (0x0003afa5) list_double_number_pane_t3_cp2

0xc402,	// (0x00044265) list_single_graphic_pane_g1_cp2_ParamLimits

0xc402,	// (0x00044265) list_single_graphic_pane_g1_cp2

0xf278,	// (0x000470db) list_single_graphic_pane_g2_cp2_ParamLimits

0xf278,	// (0x000470db) list_single_graphic_pane_g2_cp2

0xf284,	// (0x000470e7) list_single_graphic_pane_g3_cp2

0x2fd7,	// (0x0003ae3a) list_single_graphic_pane_t1_cp2_ParamLimits

0x2fd7,	// (0x0003ae3a) list_single_graphic_pane_t1_cp2

0xf278,	// (0x000470db) list_single_number_pane_g1_cp2_ParamLimits

0xf278,	// (0x000470db) list_single_number_pane_g1_cp2

0xf284,	// (0x000470e7) list_single_number_pane_g2_cp2

0x2fd7,	// (0x0003ae3a) list_single_number_pane_t1_cp2_ParamLimits

0x2fd7,	// (0x0003ae3a) list_single_number_pane_t1_cp2

0xc3ee,	// (0x00044251) list_single_number_pane_t2_cp2_ParamLimits

0xc3ee,	// (0x00044251) list_single_number_pane_t2_cp2

0xa0c7,	// (0x00041f2a) list_double2_pane_g1_cp2_ParamLimits

0xa0c7,	// (0x00041f2a) list_double2_pane_g1_cp2

0xc072,	// (0x00043ed5) list_double2_pane_g2_cp2

0xc195,	// (0x00043ff8) list_double2_pane_t1_cp2_ParamLimits

0xc195,	// (0x00043ff8) list_double2_pane_t1_cp2

0xc1ab,	// (0x0004400e) list_double2_pane_t2_cp2_ParamLimits

0xc1ab,	// (0x0004400e) list_double2_pane_t2_cp2

0xc1bd,	// (0x00044020) list_double_pane_g1_cp2_ParamLimits

0xc1bd,	// (0x00044020) list_double_pane_g1_cp2

0xc1c9,	// (0x0004402c) list_double_pane_g2_cp2

0xc1d1,	// (0x00044034) list_double_pane_t1_cp2_ParamLimits

0xc1d1,	// (0x00044034) list_double_pane_t1_cp2

0xc1e7,	// (0x0004404a) list_double_pane_t2_cp2_ParamLimits

0xc1e7,	// (0x0004404a) list_double_pane_t2_cp2

0xf268,	// (0x000470cb) list_single_pane_cp2_g3

0xf278,	// (0x000470db) list_single_pane_g1_cp2_ParamLimits

0xf278,	// (0x000470db) list_single_pane_g1_cp2

0xf284,	// (0x000470e7) list_single_pane_g2_cp2

0xf28c,	// (0x000470ef) list_single_pane_t1_cp2_ParamLimits

0xf28c,	// (0x000470ef) list_single_pane_t1_cp2

0xa13a,	// (0x00041f9d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa13a,	// (0x00041f9d) list_single_large_graphic_pane_g1_cp2

0xf2a4,	// (0x00047107) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2a4,	// (0x00047107) list_single_large_graphic_pane_g2_cp2

0xf2b0,	// (0x00047113) list_single_large_graphic_pane_g3_cp2

0xf2b8,	// (0x0004711b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf2b8,	// (0x0004711b) list_single_large_graphic_pane_g4_cp1

0xf2d2,	// (0x00047135) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf2d2,	// (0x00047135) list_single_large_graphic_pane_t1_cp2

0x2fa1,	// (0x0003ae04) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2fa1,	// (0x0003ae04) list_single_graphic_heading_pane_g1_cp2

0xc3c9,	// (0x0004422c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc3c9,	// (0x0004422c) list_single_graphic_heading_pane_g4_cp2

0xf284,	// (0x000470e7) list_single_graphic_heading_pane_g5_cp2

0x2fad,	// (0x0003ae10) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2fad,	// (0x0003ae10) list_single_graphic_heading_pane_t1_cp2

0xc3da,	// (0x0004423d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc3da,	// (0x0004423d) list_single_graphic_heading_pane_t2_cp2

0x2f62,	// (0x0003adc5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2f62,	// (0x0003adc5) list_single_2graphic_pane_g1_cp2

0xc3c9,	// (0x0004422c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc3c9,	// (0x0004422c) list_single_2graphic_pane_g2_cp2

0xf284,	// (0x000470e7) list_single_2graphic_pane_g3_cp2

0x2f7f,	// (0x0003ade2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2f7f,	// (0x0003ade2) list_single_2graphic_pane_g4_cp2

0x2f8b,	// (0x0003adee) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2f8b,	// (0x0003adee) list_single_2graphic_pane_t1_cp2

0x777a,	// (0x0003f5dd) list_highlight_pane_g10_cp1

0x2b3a,	// (0x0003a99d) list_highlight_pane_g1_cp1

0x2b42,	// (0x0003a9a5) list_highlight_pane_g2_cp1

0x2b4a,	// (0x0003a9ad) list_highlight_pane_g3_cp1

0x2b52,	// (0x0003a9b5) list_highlight_pane_g4_cp1

0x2b5a,	// (0x0003a9bd) list_highlight_pane_g5_cp1

0x2b62,	// (0x0003a9c5) list_highlight_pane_g6_cp1

0x2b6a,	// (0x0003a9cd) list_highlight_pane_g7_cp1

0x2b72,	// (0x0003a9d5) list_highlight_pane_g8_cp1

0x2b7a,	// (0x0003a9dd) list_highlight_pane_g9_cp1

0xc38f,	// (0x000441f2) form_field_slider_pane_t3

0xc39d,	// (0x00044200) form_field_slider_pane_t4

0x2a76,	// (0x0003a8d9) slider_form_pane_ParamLimits

0x2a76,	// (0x0003a8d9) slider_form_pane

0x7784,	// (0x0003f5e7) control_abbreviations

0x7784,	// (0x0003f5e7) control_conventions

0x7784,	// (0x0003f5e7) control_definitions

0x7784,	// (0x0003f5e7) format_table_attribute

0x3262,	// (0x0003b0c5) bg_popup_preview_window_pane_g9

0x7784,	// (0x0003f5e7) format_table_data2

0x7784,	// (0x0003f5e7) format_table_data3

0x7784,	// (0x0003f5e7) format_table_data_example

0x0008,

0x7784,	// (0x0003f5e7) intro_purpose

0xf8ea,	// (0x0004774d) bg_popup_preview_window_pane_g

0x7784,	// (0x0003f5e7) texts_category

0x7784,	// (0x0003f5e7) texts_graphics

0xf2e8,	// (0x0004714b) text_digital

0xf2f7,	// (0x0004715a) text_primary

0xf306,	// (0x00047169) text_primary_small

0xf315,	// (0x00047178) text_secondary

0xf324,	// (0x00047187) text_title

0x39f6,	// (0x0003b859) bg_passive_tab_pane_g1_cp3_srt

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp3_srt

0x39ff,	// (0x0003b862) bg_passive_tab_pane_g3_cp3_srt

0x8352,	// (0x000401b5) bg_active_tab_pane_cp3_srt_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp3_srt

0x3a08,	// (0x0003b86b) tabs_4_active_pane_srt_g1

0xc826,	// (0x00044689) tabs_4_active_pane_srt_t1_ParamLimits

0xc826,	// (0x00044689) tabs_4_active_pane_srt_t1

0x39f6,	// (0x0003b859) bg_active_tab_pane_g1_cp3_copy1

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp3_copy1

0x39ff,	// (0x0003b862) bg_active_tab_pane_g3_cp3_copy1

0x821f,	// (0x00040082) tabs_2_long_active_pane_srt_ParamLimits

0x821f,	// (0x00040082) tabs_2_long_active_pane_srt

0x821f,	// (0x00040082) tabs_2_long_passive_pane_srt_ParamLimits

0x821f,	// (0x00040082) tabs_2_long_passive_pane_srt

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp4_srt

0x369e,	// (0x0003b501) bg_passive_tab_pane_g1_cp4_srt

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp4_srt

0x36a7,	// (0x0003b50a) bg_passive_tab_pane_g3_cp4_srt

0x821f,	// (0x00040082) bg_active_tab_pane_cp4_srt_ParamLimits

0x821f,	// (0x00040082) bg_active_tab_pane_cp4_srt

0xc604,	// (0x00044467) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc604,	// (0x00044467) tabs_2_long_active_pane_srt_t1

0x369e,	// (0x0003b501) bg_active_tab_pane_g1_cp4_srt

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp4_srt

0x36a7,	// (0x0003b50a) bg_active_tab_pane_g3_cp4_srt

0x8352,	// (0x000401b5) tabs_3_long_active_pane_srt_ParamLimits

0x8352,	// (0x000401b5) tabs_3_long_active_pane_srt

0x8352,	// (0x000401b5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8352,	// (0x000401b5) tabs_3_long_passive_pane_cp_srt

0x8352,	// (0x000401b5) tabs_3_long_passive_pane_srt_ParamLimits

0x8352,	// (0x000401b5) tabs_3_long_passive_pane_srt

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp5_srt

0xc060,	// (0x00043ec3) bg_passive_tab_pane_g1_cp5_srt

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp5_srt

0xc069,	// (0x00043ecc) bg_passive_tab_pane_g3_cp5_srt

0x821f,	// (0x00040082) bg_active_tab_pane_cp5_srt_ParamLimits

0x821f,	// (0x00040082) bg_active_tab_pane_cp5_srt

0xc5ee,	// (0x00044451) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5ee,	// (0x00044451) tabs_3_long_active_pane_srt_t1

0xc060,	// (0x00043ec3) bg_active_tab_pane_g1_cp5_srt

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp5_srt

0xc069,	// (0x00043ecc) bg_active_tab_pane_g3_cp5_srt

0x367e,	// (0x0003b4e1) navi_text_pane_srt_t1

0x3676,	// (0x0003b4d9) navi_icon_pane_srt_g1

0xf4d7,	// (0x0004733a) midp_editing_number_pane_srt

0xf333,	// (0x00047196) midp_ticker_pane_srt

0xf4df,	// (0x00047342) midp_ticker_pane_srt_g1

0xf4e7,	// (0x0004734a) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x000475d5) midp_ticker_pane_srt_g

0xf4ef,	// (0x00047352) midp_ticker_pane_srt_t1

0x3667,	// (0x0003b4ca) midp_editing_number_pane_t1_copy1

0x0142,	// (0x00037fa5) listscroll_midp_pane

0x0142,	// (0x00037fa5) midp_form_pane

0xf33b,	// (0x0004719e) midp_info_popup_window_ParamLimits

0xf33b,	// (0x0004719e) midp_info_popup_window

0xba1f,	// (0x00043882) bg_popup_sub_pane_cp50_ParamLimits

0xba1f,	// (0x00043882) bg_popup_sub_pane_cp50

0x2770,	// (0x0003a5d3) listscroll_midp_info_pane_ParamLimits

0x2770,	// (0x0003a5d3) listscroll_midp_info_pane

0x2758,	// (0x0003a5bb) listscroll_form_midp_pane_ParamLimits

0x2758,	// (0x0003a5bb) listscroll_form_midp_pane

0x2764,	// (0x0003a5c7) scroll_bar_cp050

0xc383,	// (0x000441e6) list_midp_pane

0x448b,	// (0x0003c2ee) signal_pane_g2_cp

0x2672,	// (0x0003a4d5) listscroll_midp_info_pane_t1_ParamLimits

0x2672,	// (0x0003a4d5) listscroll_midp_info_pane_t1

0x268a,	// (0x0003a4ed) listscroll_midp_info_pane_t2_ParamLimits

0x268a,	// (0x0003a4ed) listscroll_midp_info_pane_t2

0x26c8,	// (0x0003a52b) listscroll_midp_info_pane_t3_ParamLimits

0x26c8,	// (0x0003a52b) listscroll_midp_info_pane_t3

0x2702,	// (0x0003a565) listscroll_midp_info_pane_t4_ParamLimits

0x2702,	// (0x0003a565) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00047688) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00047688) listscroll_midp_info_pane_t

0xba9f,	// (0x00043902) scroll_pane_cp21

0x260c,	// (0x0003a46f) form_midp_field_choice_group_pane

0x2615,	// (0x0003a478) form_midp_field_text_pane

0x2658,	// (0x0003a4bb) form_midp_field_time_pane

0x2660,	// (0x0003a4c3) form_midp_gauge_slider_pane

0x2669,	// (0x0003a4cc) form_midp_gauge_wait_pane

0x7784,	// (0x0003f5e7) form_midp_image_pane

0xaf2d,	// (0x00042d90) list_single_midp_pane_ParamLimits

0xaf2d,	// (0x00042d90) list_single_midp_pane

0xc35b,	// (0x000441be) form_midp_field_text_pane_t1

0x23bc,	// (0x0003a21f) input_focus_pane_cp050

0x25fb,	// (0x0003a45e) list_midp_form_text_pane

0x259f,	// (0x0003a402) form_midp_field_choice_group_pane_t1

0x25ad,	// (0x0003a410) input_focus_pane_cp051

0x25c1,	// (0x0003a424) list_midp_choice_pane

0x7784,	// (0x0003f5e7) status_idle_pane

0x2583,	// (0x0003a3e6) form_midp_field_time_pane_t1

0x777a,	// (0x0003f5dd) wait_anim_pane_g2_copy1

0x2591,	// (0x0003a3f4) form_midp_field_time_pane_t2

0x0001,

0xf396,	// (0x000471f9) aid_navinavi_width_2_pane

0xf820,	// (0x00047683) form_midp_field_time_pane_t

0x7784,	// (0x0003f5e7) input_focus_pane_cp052

0x7784,	// (0x0003f5e7) bg_input_focus_pane_cp040

0x2543,	// (0x0003a3a6) form_midp_gauge_slider_pane_t1

0x2551,	// (0x0003a3b4) form_midp_gauge_slider_pane_t2

0xc33f,	// (0x000441a2) form_midp_gauge_slider_pane_t3

0xc34d,	// (0x000441b0) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0004767a) form_midp_gauge_slider_pane_t

0x257b,	// (0x0003a3de) form_midp_slider_pane

0x821f,	// (0x00040082) bg_input_focus_pane_cp041_ParamLimits

0x821f,	// (0x00040082) bg_input_focus_pane_cp041

0x2510,	// (0x0003a373) form_midp_gauge_wait_pane_t1_ParamLimits

0x2510,	// (0x0003a373) form_midp_gauge_wait_pane_t1

0x2522,	// (0x0003a385) form_midp_gauge_wait_pane_t2_ParamLimits

0x2522,	// (0x0003a385) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00047675) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00047675) form_midp_gauge_wait_pane_t

0x2534,	// (0x0003a397) form_midp_wait_pane_ParamLimits

0x2534,	// (0x0003a397) form_midp_wait_pane

0x24d8,	// (0x0003a33b) form_midp_image_pane_g1

0x24e1,	// (0x0003a344) form_midp_image_pane_t1

0x24f0,	// (0x0003a353) form_midp_image_pane_t2

0x24ff,	// (0x0003a362) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0004766e) form_midp_image_pane_t

0x24cf,	// (0x0003a332) list_single_midp_pane_g1

0xdb2c,	// (0x0004598f) list_single_midp_pane_t1

0xc328,	// (0x0004418b) list_midp_form_item_pane_ParamLimits

0xc328,	// (0x0004418b) list_midp_form_item_pane

0xf350,	// (0x000471b3) list_midp_form_item_pane_t1

0xf35f,	// (0x000471c2) midp_ticker_pane_g1

0xf36b,	// (0x000471ce) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x000475bb) midp_ticker_pane_g

0xa1df,	// (0x00042042) midp_ticker_pane_t1

0xc793,	// (0x000445f6) midp_editing_number_pane_t1

0x38b8,	// (0x0003b71b) midp_editing_number_pane

0x38c7,	// (0x0003b72a) midp_ticker_pane

0x3657,	// (0x0003b4ba) ai_message_heading_pane

0x7784,	// (0x0003f5e7) bg_popup_window_pane_cp14

0x365f,	// (0x0003b4c2) listscroll_ai_message_pane

0x35dd,	// (0x0003b440) ai_message_heading_pane_g1_ParamLimits

0x35dd,	// (0x0003b440) ai_message_heading_pane_g1

0x35e9,	// (0x0003b44c) ai_message_heading_pane_g2_ParamLimits

0x35e9,	// (0x0003b44c) ai_message_heading_pane_g2

0x35f7,	// (0x0003b45a) ai_message_heading_pane_g3_ParamLimits

0x35f7,	// (0x0003b45a) ai_message_heading_pane_g3

0x3603,	// (0x0003b466) ai_message_heading_pane_g4_ParamLimits

0x3603,	// (0x0003b466) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x000477af) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x000477af) ai_message_heading_pane_g

0x360f,	// (0x0003b472) ai_message_heading_pane_t1_ParamLimits

0x360f,	// (0x0003b472) ai_message_heading_pane_t1

0x3629,	// (0x0003b48c) ai_message_heading_pane_t2_ParamLimits

0x3629,	// (0x0003b48c) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x000477b8) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x000477b8) ai_message_heading_pane_t

0x363d,	// (0x0003b4a0) bg_popup_heading_pane_cp1_ParamLimits

0x363d,	// (0x0003b4a0) bg_popup_heading_pane_cp1

0x35cb,	// (0x0003b42e) list_ai_message_pane_ParamLimits

0x35cb,	// (0x0003b42e) list_ai_message_pane

0xba9f,	// (0x00043902) scroll_pane_cp10

0x3567,	// (0x0003b3ca) list_ai_message_pane_g1

0x356f,	// (0x0003b3d2) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0004778c) list_ai_message_pane_g

0x3577,	// (0x0003b3da) list_ai_message_pane_t1_ParamLimits

0x3577,	// (0x0003b3da) list_ai_message_pane_t1

0x358c,	// (0x0003b3ef) list_ai_message_pane_t2_ParamLimits

0x358c,	// (0x0003b3ef) list_ai_message_pane_t2

0x35a1,	// (0x0003b404) list_ai_message_pane_t3_ParamLimits

0x35a1,	// (0x0003b404) list_ai_message_pane_t3

0x35b6,	// (0x0003b419) list_ai_message_pane_t4_ParamLimits

0x35b6,	// (0x0003b419) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00047791) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00047791) list_ai_message_pane_t

0xc5d4,	// (0x00044437) cell_ai_soft_ind_pane_ParamLimits

0xc5d4,	// (0x00044437) cell_ai_soft_ind_pane

0xf377,	// (0x000471da) cell_ai_soft_ind_pane_g1_ParamLimits

0xf377,	// (0x000471da) cell_ai_soft_ind_pane_g1

0x7784,	// (0x0003f5e7) grid_highlight_cp1

0xf384,	// (0x000471e7) text_secondary_cp56_ParamLimits

0xf384,	// (0x000471e7) text_secondary_cp56

0x3525,	// (0x0003b388) example_general_pane_ParamLimits

0x3525,	// (0x0003b388) example_general_pane

0x3531,	// (0x0003b394) example_parent_pane_g1_ParamLimits

0x3531,	// (0x0003b394) example_parent_pane_g1

0x353d,	// (0x0003b3a0) example_parent_pane_t1_ParamLimits

0x353d,	// (0x0003b3a0) example_parent_pane_t1

0xa86f,	// (0x000426d2) popup_preview_text_window_ParamLimits

0xa86f,	// (0x000426d2) popup_preview_text_window

0xf270,	// (0x000470d3) list_single_pane_cp2_g4

0x8408,	// (0x0004026b) bg_popup_preview_window_pane_ParamLimits

0x8408,	// (0x0004026b) bg_popup_preview_window_pane

0x326c,	// (0x0003b0cf) popup_preview_text_window_t1_ParamLimits

0x326c,	// (0x0003b0cf) popup_preview_text_window_t1

0x328a,	// (0x0003b0ed) popup_preview_text_window_t2_ParamLimits

0x328a,	// (0x0003b0ed) popup_preview_text_window_t2

0x32d3,	// (0x0003b136) popup_preview_text_window_t3_ParamLimits

0x32d3,	// (0x0003b136) popup_preview_text_window_t3

0x3318,	// (0x0003b17b) popup_preview_text_window_t4_ParamLimits

0x3318,	// (0x0003b17b) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00047760) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00047760) popup_preview_text_window_t

0x3396,	// (0x0003b1f9) scroll_pane_cp11

0x2348,	// (0x0003a1ab) bg_popup_preview_window_pane_g1

0x3220,	// (0x0003b083) bg_popup_preview_window_pane_g2

0x322a,	// (0x0003b08d) bg_popup_preview_window_pane_g3

0x3234,	// (0x0003b097) bg_popup_preview_window_pane_g4

0x323e,	// (0x0003b0a1) bg_popup_preview_window_pane_g5

0x3248,	// (0x0003b0ab) bg_popup_preview_window_pane_g6

0x3250,	// (0x0003b0b3) bg_popup_preview_window_pane_g7

0x3258,	// (0x0003b0bb) bg_popup_preview_window_pane_g8

0xebca,	// (0x00046a2d) aid_popup_width_pane

0xa7df,	// (0x00042642) popup_midp_note_alarm_window_ParamLimits

0xa7df,	// (0x00042642) popup_midp_note_alarm_window

0xb967,	// (0x000437ca) data_form_pane_ParamLimits

0x9c44,	// (0x00041aa7) form_field_data_pane_g1

0x9c4e,	// (0x00041ab1) form_field_data_pane_t1_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_ParamLimits

0xd99f,	// (0x00045802) data_form_wide_pane_ParamLimits

0xd9b0,	// (0x00045813) form_field_data_wide_pane_g1

0xd9bc,	// (0x0004581f) form_field_data_wide_pane_t1_ParamLimits

0x85bd,	// (0x00040420) input_focus_pane_cp6_ParamLimits

0x9d7c,	// (0x00041bdf) input_popup_find_pane_g1_ParamLimits

0x9d7c,	// (0x00041bdf) input_popup_find_pane_g1

0xef1e,	// (0x00046d81) aid_navi_side_left_pane

0xef33,	// (0x00046d96) aid_navi_side_right_pane

0x2c35,	// (0x0003aa98) bg_popup_window_pane_cp30_ParamLimits

0x2c35,	// (0x0003aa98) bg_popup_window_pane_cp30

0x2caf,	// (0x0003ab12) popup_midp_note_alarm_window_g1_ParamLimits

0x2caf,	// (0x0003ab12) popup_midp_note_alarm_window_g1

0x2cdf,	// (0x0003ab42) popup_midp_note_alarm_window_t1_ParamLimits

0x2cdf,	// (0x0003ab42) popup_midp_note_alarm_window_t1

0x2d80,	// (0x0003abe3) popup_midp_note_alarm_window_t2_ParamLimits

0x2d80,	// (0x0003abe3) popup_midp_note_alarm_window_t2

0x2e2e,	// (0x0003ac91) popup_midp_note_alarm_window_t3_ParamLimits

0x2e2e,	// (0x0003ac91) popup_midp_note_alarm_window_t3

0x2e60,	// (0x0003acc3) popup_midp_note_alarm_window_t4_ParamLimits

0x2e60,	// (0x0003acc3) popup_midp_note_alarm_window_t4

0x2e86,	// (0x0003ace9) popup_midp_note_alarm_window_t5_ParamLimits

0x2e86,	// (0x0003ace9) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x000476fd) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x000476fd) popup_midp_note_alarm_window_t

0x2f32,	// (0x0003ad95) wait_bar_pane_cp1_ParamLimits

0x2f32,	// (0x0003ad95) wait_bar_pane_cp1

0x7784,	// (0x0003f5e7) wait_anim_pane_copy1

0x7784,	// (0x0003f5e7) wait_border_pane_copy1

0x291a,	// (0x0003a77d) wait_border_pane_g1_copy1

0xd9d6,	// (0x00045839) form_field_popup_pane_g1

0x9c68,	// (0x00041acb) form_field_popup_pane_t1_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_cp7_ParamLimits

0xb9a1,	// (0x00043804) list_form_pane_ParamLimits

0xd9de,	// (0x00045841) form_field_popup_wide_pane_g1

0xd9e6,	// (0x00045849) form_field_popup_wide_pane_t1_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_cp8_ParamLimits

0xb9ad,	// (0x00043810) list_form_wide_pane_ParamLimits

0x3a83,	// (0x0003b8e6) aid_size_cell_graphic_pane

0x9ce7,	// (0x00041b4a) data_form_pane_t1_ParamLimits

0xb0c6,	// (0x00042f29) data_form_wide_pane_t1_ParamLimits

0xac73,	// (0x00042ad6) bg_status_flat_pane

0x9406,	// (0x00041269) title_pane_t1_ParamLimits

0x81e7,	// (0x0004004a) title_pane_t2_ParamLimits

0x820d,	// (0x00040070) title_pane_t3_ParamLimits

0xf557,	// (0x000473ba) title_pane_t_ParamLimits

0x9e8c,	// (0x00041cef) level_1_signal_ParamLimits

0x9e9e,	// (0x00041d01) level_2_signal_ParamLimits

0x9eb1,	// (0x00041d14) level_3_signal_ParamLimits

0x9ec4,	// (0x00041d27) level_4_signal_ParamLimits

0x9ed7,	// (0x00041d3a) level_5_signal_ParamLimits

0x9eea,	// (0x00041d4d) level_6_signal_ParamLimits

0x9efd,	// (0x00041d60) level_7_signal_ParamLimits

0x9e8c,	// (0x00041cef) level_1_battery_ParamLimits

0x9e9e,	// (0x00041d01) level_2_battery_ParamLimits

0x9eb1,	// (0x00041d14) level_3_battery_ParamLimits

0x9ec4,	// (0x00041d27) level_4_battery_ParamLimits

0x9ed7,	// (0x00041d3a) level_5_battery_ParamLimits

0x9eea,	// (0x00041d4d) level_6_battery_ParamLimits

0x9efd,	// (0x00041d60) level_7_battery_ParamLimits

0x2b3a,	// (0x0003a99d) bg_status_flat_pane_g1

0x2b42,	// (0x0003a9a5) bg_status_flat_pane_g2

0x2b4a,	// (0x0003a9ad) bg_status_flat_pane_g3

0x2b52,	// (0x0003a9b5) bg_status_flat_pane_g4

0x2b5a,	// (0x0003a9bd) bg_status_flat_pane_g5

0x2b62,	// (0x0003a9c5) bg_status_flat_pane_g6

0x2b6a,	// (0x0003a9cd) bg_status_flat_pane_g7

0x949a,	// (0x000412fd) tabs_3_active_pane_t1_ParamLimits

0x949a,	// (0x000412fd) tabs_3_passive_pane_t1_ParamLimits

0x94b4,	// (0x00041317) tabs_4_active_pane_t1_ParamLimits

0x94b4,	// (0x00041317) tabs_4_1_passive_pane_t1_ParamLimits

0x9d92,	// (0x00041bf5) tabs_2_active_pane_t1_ParamLimits

0x9d92,	// (0x00041bf5) tabs_2_passive_pane_t1_ParamLimits

0x821f,	// (0x00040082) bg_active_tab_pane_cp4_ParamLimits

0x9da4,	// (0x00041c07) tabs_2_long_active_pane_t1_ParamLimits

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp4_ParamLimits

0x0300,	// (0x00038163) list_single_midp_graphic_pane_t1_ParamLimits

0x821f,	// (0x00040082) bg_active_tab_pane_cp5_ParamLimits

0x9db7,	// (0x00041c1a) tabs_3_long_active_pane_t1_ParamLimits

0x0142,	// (0x00037fa5) bg_passive_tab_pane_cp5_ParamLimits

0x0300,	// (0x00038163) list_single_midp_graphic_pane_t1

0xac73,	// (0x00042ad6) bg_status_flat_pane_ParamLimits

0x1fc0,	// (0x00039e23) indicator_pane_cp2_ParamLimits

0x1fc0,	// (0x00039e23) indicator_pane_cp2

0xae09,	// (0x00042c6c) navi_pane_srt_ParamLimits

0xae09,	// (0x00042c6c) navi_pane_srt

0x2127,	// (0x00039f8a) popup_clock_digital_analogue_window_cp1

0x8263,	// (0x000400c6) indicator_pane_t1

0xf333,	// (0x00047196) copy_highlight_pane

0xf333,	// (0x00047196) cursor_graphics_pane

0xf333,	// (0x00047196) graphic_within_text_pane

0xf333,	// (0x00047196) link_highlight_pane

0x3359,	// (0x0003b1bc) popup_preview_text_window_t5_ParamLimits

0x3359,	// (0x0003b1bc) popup_preview_text_window_t5

0xf3a0,	// (0x00047203) cursor_digital_pane

0xf3a0,	// (0x00047203) cursor_primary_pane

0xf3b1,	// (0x00047214) cursor_primary_small_pane

0xf3b9,	// (0x0004721c) cursor_secondary_pane

0xf3c1,	// (0x00047224) cursor_title_pane

0xf3a0,	// (0x00047203) link_highlight_digital_pane

0xf3a8,	// (0x0004720b) link_highlight_primary_pane

0xf3b1,	// (0x00047214) link_highlight_primary_small_pane

0xf3b9,	// (0x0004721c) link_highlight_secondary_pane

0xf3c1,	// (0x00047224) link_highlight_title_pane

0xf3a0,	// (0x00047203) copy_highlight_digital_pane

0xf3a0,	// (0x00047203) copy_highlight_primary_pane

0xf3b1,	// (0x00047214) copy_highlight_primary_small_pane

0xf3b9,	// (0x0004721c) copy_highlight_secondary_pane

0xf3c1,	// (0x00047224) copy_highlight_title_pane

0xf3b9,	// (0x0004721c) graphic_text_digital_pane

0x2bd8,	// (0x0003aa3b) graphic_text_primary_pane

0x2be1,	// (0x0003aa44) graphic_text_primary_small_pane

0xf3b1,	// (0x00047214) graphic_text_secondary_pane

0xf3a0,	// (0x00047203) graphic_text_title_pane

0xa1f1,	// (0x00042054) cursor_primary_pane_g1

0x2bca,	// (0x0003aa2d) cursor_text_primary_t1

0xc3bf,	// (0x00044222) cursor_primary_small_pane_g1

0x2bbc,	// (0x0003aa1f) cursor_text_primary_small_t1

0xc3b5,	// (0x00044218) cursor_primary_small_pane_g1_copy1

0x2ba4,	// (0x0003aa07) cursor_text_primary_small_t1_copy1

0x2b82,	// (0x0003a9e5) cursor_text_title_t1

0xc3ab,	// (0x0004420e) cursor_title_pane_g1

0xa1f1,	// (0x00042054) cursor_digital_pane_g1

0xf3c9,	// (0x0004722c) cursor_text_digital_t1

0xf3d7,	// (0x0004723a) link_highlight_primary_pane_g1

0x2b2b,	// (0x0003a98e) link_highlight_primary_pane_t1

0xf3d7,	// (0x0004723a) link_highlight_primary_small_pane_g1

0xf3df,	// (0x00047242) link_highlight_primary_small_pane_t1

0xf3ee,	// (0x00047251) link_highlight_secondary_pane_g1

0xf3f6,	// (0x00047259) link_highlight_secondary_pane_t1

0x2a9f,	// (0x0003a902) link_highlight_title_pane_g1

0x2aa7,	// (0x0003a90a) link_highlight_title_pane_t1

0x2a88,	// (0x0003a8eb) link_highlight_digital_pane_g1

0x2a90,	// (0x0003a8f3) link_highlight_digital_pane_t1

0x2950,	// (0x0003a7b3) copy_highlight_primary_pane_g1

0x2967,	// (0x0003a7ca) copy_highlight_primary_pane_t1

0x2950,	// (0x0003a7b3) copy_highlight_primary_small_pane_g1

0x2958,	// (0x0003a7bb) copy_highlight_primary_small_pane_t1

0xf405,	// (0x00047268) copy_highlight_secondary_pane_g1

0xf40d,	// (0x00047270) copy_highlight_secondary_pane_t1

0x2939,	// (0x0003a79c) copy_highlight_title_pane_g1

0x2941,	// (0x0003a7a4) copy_highlight_title_pane_t1

0x2950,	// (0x0003a7b3) copy_highlight_digital_pane_g1

0x3c53,	// (0x0003bab6) copy_highlight_digital_pane_t1

0x3ba7,	// (0x0003ba0a) graphic_text_primary_pane_g1

0x3c37,	// (0x0003ba9a) graphic_text_primary_pane_t1

0x3c45,	// (0x0003baa8) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004782c) graphic_text_primary_pane_t

0x3c13,	// (0x0003ba76) graphic_text_primary_small_pane_g1

0x3c1b,	// (0x0003ba7e) graphic_text_primary_small_pane_t1

0x3c29,	// (0x0003ba8c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00047827) graphic_text_primary_small_pane_t

0x3bef,	// (0x0003ba52) graphic_text_secondary_pane_g1

0x3bf7,	// (0x0003ba5a) graphic_text_secondary_pane_t1

0x3c05,	// (0x0003ba68) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00047822) graphic_text_secondary_pane_t

0x3bcb,	// (0x0003ba2e) graphic_text_title_pane_g1

0x3bd3,	// (0x0003ba36) graphic_text_title_pane_t1

0x3be1,	// (0x0003ba44) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004781d) graphic_text_title_pane_t

0x3ba7,	// (0x0003ba0a) graphic_text_digital_pane_g1

0x3baf,	// (0x0003ba12) graphic_text_digital_pane_t1

0x3bbd,	// (0x0003ba20) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00047818) graphic_text_digital_pane_t

0x821f,	// (0x00040082) navi_icon_pane_srt_ParamLimits

0x821f,	// (0x00040082) navi_icon_pane_srt

0x7784,	// (0x0003f5e7) navi_midp_pane_srt

0x7784,	// (0x0003f5e7) navi_navi_pane_srt

0x821f,	// (0x00040082) navi_text_pane_srt_ParamLimits

0x821f,	// (0x00040082) navi_text_pane_srt

0x3b72,	// (0x0003b9d5) navi_navi_icon_text_pane_srt

0x3b7a,	// (0x0003b9dd) navi_navi_pane_srt_g1_ParamLimits

0x3b7a,	// (0x0003b9dd) navi_navi_pane_srt_g1

0x3b8c,	// (0x0003b9ef) navi_navi_pane_srt_g2_ParamLimits

0x3b8c,	// (0x0003b9ef) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00047813) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00047813) navi_navi_pane_srt_g

0x3b9e,	// (0x0003ba01) navi_navi_tabs_pane_srt

0x3b72,	// (0x0003b9d5) navi_navi_text_pane_srt

0x3b72,	// (0x0003b9d5) navi_navi_volume_pane_srt

0x3b63,	// (0x0003b9c6) navi_navi_text_pane_srt_t1

0x0770,	// (0x000385d3) navi_navi_volume_pane_srt_g1

0x0778,	// (0x000385db) volume_small_pane_srt_ParamLimits

0x0778,	// (0x000385db) volume_small_pane_srt

0xf41c,	// (0x0004727f) volume_small_pane_srt_g1_ParamLimits

0xf41c,	// (0x0004727f) volume_small_pane_srt_g1

0xf42c,	// (0x0004728f) volume_small_pane_srt_g2_ParamLimits

0xf42c,	// (0x0004728f) volume_small_pane_srt_g2

0xf43d,	// (0x000472a0) volume_small_pane_srt_g3_ParamLimits

0xf43d,	// (0x000472a0) volume_small_pane_srt_g3

0xf44e,	// (0x000472b1) volume_small_pane_srt_g4_ParamLimits

0xf44e,	// (0x000472b1) volume_small_pane_srt_g4

0xf45f,	// (0x000472c2) volume_small_pane_srt_g5_ParamLimits

0xf45f,	// (0x000472c2) volume_small_pane_srt_g5

0xf470,	// (0x000472d3) volume_small_pane_srt_g6_ParamLimits

0xf470,	// (0x000472d3) volume_small_pane_srt_g6

0xf481,	// (0x000472e4) volume_small_pane_srt_g7_ParamLimits

0xf481,	// (0x000472e4) volume_small_pane_srt_g7

0xf492,	// (0x000472f5) volume_small_pane_srt_g8_ParamLimits

0xf492,	// (0x000472f5) volume_small_pane_srt_g8

0xf4a3,	// (0x00047306) volume_small_pane_srt_g9_ParamLimits

0xf4a3,	// (0x00047306) volume_small_pane_srt_g9

0xf4b4,	// (0x00047317) volume_small_pane_srt_g10_ParamLimits

0xf4b4,	// (0x00047317) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x000475c0) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x000475c0) volume_small_pane_srt_g

0x84bd,	// (0x00040320) query_popup_data_pane_cp2

0x3b49,	// (0x0003b9ac) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3b49,	// (0x0003b9ac) navi_navi_icon_text_pane_srt_t1

0x2bd8,	// (0x0003aa3b) navi_tabs_2_long_pane_srt

0x2bd8,	// (0x0003aa3b) navi_tabs_2_pane_srt

0x2bd8,	// (0x0003aa3b) navi_tabs_3_long_pane_srt

0x2bd8,	// (0x0003aa3b) navi_tabs_3_pane_srt

0x2bd8,	// (0x0003aa3b) navi_tabs_4_pane_srt

0x0750,	// (0x000385b3) tabs_2_active_pane_srt_ParamLimits

0x0750,	// (0x000385b3) tabs_2_active_pane_srt

0x0760,	// (0x000385c3) tabs_2_passive_pane_srt_ParamLimits

0x0760,	// (0x000385c3) tabs_2_passive_pane_srt

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp1_srt

0x3b15,	// (0x0003b978) bg_passive_tab_pane_g1_cp1_srt

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp1_srt

0x3b1e,	// (0x0003b981) bg_passive_tab_pane_g3_cp1_srt

0x8352,	// (0x000401b5) bg_active_tab_pane_cp1_srt_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp1_srt

0x3b27,	// (0x0003b98a) tabs_2_active_pane_srt_g1

0xc8a7,	// (0x0004470a) tabs_2_active_pane_srt_t1_ParamLimits

0xc8a7,	// (0x0004470a) tabs_2_active_pane_srt_t1

0x3b15,	// (0x0003b978) bg_active_tab_pane_g1_cp1_srt

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp1_srt

0x3b1e,	// (0x0003b981) bg_active_tab_pane_g3_cp1_srt

0x071d,	// (0x00038580) tabs_3_active_pane_srt_ParamLimits

0x071d,	// (0x00038580) tabs_3_active_pane_srt

0x072e,	// (0x00038591) tabs_3_passive_pane_cp_srt_ParamLimits

0x072e,	// (0x00038591) tabs_3_passive_pane_cp_srt

0x073f,	// (0x000385a2) tabs_3_passive_pane_srt_ParamLimits

0x073f,	// (0x000385a2) tabs_3_passive_pane_srt

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x23bc,	// (0x0003a21f) bg_passive_tab_pane_cp2_srt

0xf4c5,	// (0x00047328) bg_passive_tab_pane_g1_cp2_srt

0xc019,	// (0x00043e7c) bg_passive_tab_pane_g2_cp2_srt

0xf4ce,	// (0x00047331) bg_passive_tab_pane_g3_cp2_srt

0x8352,	// (0x000401b5) bg_active_tab_pane_cp2_srt_ParamLimits

0x8352,	// (0x000401b5) bg_active_tab_pane_cp2_srt

0x3afb,	// (0x0003b95e) tabs_3_active_pane_srt_g1

0xc891,	// (0x000446f4) tabs_3_active_pane_srt_t1_ParamLimits

0xc891,	// (0x000446f4) tabs_3_active_pane_srt_t1

0xf4c5,	// (0x00047328) bg_active_tab_pane_g1_cp2_srt

0xc019,	// (0x00043e7c) bg_active_tab_pane_g2_cp2_srt

0xf4ce,	// (0x00047331) bg_active_tab_pane_g3_cp2_srt

0x06d5,	// (0x00038538) tabs_4_active_pane_srt_ParamLimits

0x06d5,	// (0x00038538) tabs_4_active_pane_srt

0x06e7,	// (0x0003854a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x06e7,	// (0x0003854a) tabs_4_passive_pane_cp2_srt

0x00c8,	// (0x00037f2b) aid_size_cell_toolbar

0x3711,	// (0x0003b574) main_idle_act_pane_ParamLimits

0x19d0,	// (0x00039833) popup_large_graphic_colour_window_ParamLimits

0xab35,	// (0x00042998) popup_toolbar_window_ParamLimits

0xab35,	// (0x00042998) popup_toolbar_window

0xdb51,	// (0x000459b4) list_single_graphic_2heading_pane_ParamLimits

0xdb51,	// (0x000459b4) list_single_graphic_2heading_pane

0xbc77,	// (0x00043ada) aid_size_cell_apps_grid_lsc_pane

0xbc89,	// (0x00043aec) aid_size_cell_apps_grid_prt_pane

0x0142,	// (0x00037fa5) bg_wml_button_pane_cp1_ParamLimits

0x0142,	// (0x00037fa5) bg_wml_button_pane_cp1

0xc35b,	// (0x000441be) form_midp_field_text_pane_t1_ParamLimits

0x23bc,	// (0x0003a21f) input_focus_pane_cp050_ParamLimits

0x25fb,	// (0x0003a45e) list_midp_form_text_pane_ParamLimits

0x25ad,	// (0x0003a410) input_focus_pane_cp051_ParamLimits

0x25c1,	// (0x0003a424) list_midp_choice_pane_ParamLimits

0xc312,	// (0x00044175) list_single_2graphic_pane_cp3_ParamLimits

0xc312,	// (0x00044175) list_single_2graphic_pane_cp3

0x47ae,	// (0x0003c611) list_single_midp_graphic_pane_ParamLimits

0x47ae,	// (0x0003c611) list_single_midp_graphic_pane

0xefdf,	// (0x00046e42) list_single_graphic_2heading_pane_g1_ParamLimits

0xefdf,	// (0x00046e42) list_single_graphic_2heading_pane_g1

0xefeb,	// (0x00046e4e) list_single_graphic_2heading_pane_g4_ParamLimits

0xefeb,	// (0x00046e4e) list_single_graphic_2heading_pane_g4

0xeff7,	// (0x00046e5a) list_single_graphic_2heading_pane_g5_ParamLimits

0xeff7,	// (0x00046e5a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00047613) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00047613) list_single_graphic_2heading_pane_g

0xf003,	// (0x00046e66) list_single_graphic_2heading_pane_t1_ParamLimits

0xf003,	// (0x00046e66) list_single_graphic_2heading_pane_t1

0xf017,	// (0x00046e7a) list_single_graphic_2heading_pane_t2_ParamLimits

0xf017,	// (0x00046e7a) list_single_graphic_2heading_pane_t2

0xf033,	// (0x00046e96) list_single_graphic_2heading_pane_t3_ParamLimits

0xf033,	// (0x00046e96) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0004761a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0004761a) list_single_graphic_2heading_pane_t

0x2286,	// (0x0003a0e9) bg_popup_sub_pane_cp2

0x22b0,	// (0x0003a113) grid_toobar_pane

0x0270,	// (0x000380d3) cell_toolbar_pane_ParamLimits

0x0270,	// (0x000380d3) cell_toolbar_pane

0x22ec,	// (0x0003a14f) cell_toolbar_pane_g1_ParamLimits

0x22ec,	// (0x0003a14f) cell_toolbar_pane_g1

0x2300,	// (0x0003a163) cell_toolbar_pane_g2_ParamLimits

0x2300,	// (0x0003a163) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00047628) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00047628) cell_toolbar_pane_g

0x2322,	// (0x0003a185) grid_highlight_pane_cp2_ParamLimits

0x2322,	// (0x0003a185) grid_highlight_pane_cp2

0x233c,	// (0x0003a19f) toolbar_button_pane

0x2348,	// (0x0003a1ab) toolbar_button_pane_g1

0x2350,	// (0x0003a1b3) toolbar_button_pane_g2

0x2358,	// (0x0003a1bb) toolbar_button_pane_g3

0x2360,	// (0x0003a1c3) toolbar_button_pane_g4

0x2368,	// (0x0003a1cb) toolbar_button_pane_g5

0x2370,	// (0x0003a1d3) toolbar_button_pane_g6

0x2378,	// (0x0003a1db) toolbar_button_pane_g7

0x2380,	// (0x0003a1e3) toolbar_button_pane_g8

0x2388,	// (0x0003a1eb) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0004762d) toolbar_button_pane_g

0x02a8,	// (0x0003810b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x02a8,	// (0x0003810b) list_single_2graphic_pane_g1_cp3

0xaebb,	// (0x00042d1e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaebb,	// (0x00042d1e) list_single_2graphic_pane_g2_cp3

0x02c5,	// (0x00038128) list_single_2graphic_pane_g3_cp3

0x02cd,	// (0x00038130) list_single_2graphic_pane_g4_cp3_ParamLimits

0x02cd,	// (0x00038130) list_single_2graphic_pane_g4_cp3

0x02d9,	// (0x0003813c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x02d9,	// (0x0003813c) list_single_2graphic_pane_t1_cp3

0x02f4,	// (0x00038157) list_single_midp_graphic_pane_g2_ParamLimits

0x02f4,	// (0x00038157) list_single_midp_graphic_pane_g2

0x00d0,	// (0x00037f33) aid_zoom_text_primary

0xda3c,	// (0x0004589f) aid_zoom_text_secondary

0xa249,	// (0x000420ac) status_small_pane_g7_ParamLimits

0xa249,	// (0x000420ac) status_small_pane_g7

0xa26c,	// (0x000420cf) status_small_pane_t1_ParamLimits

0x93ee,	// (0x00041251) title_pane_g2

0x0003,

0xf54e,	// (0x000473b1) title_pane_g

0x967a,	// (0x000414dd) aid_size_cell_colour_1_pane_ParamLimits

0x967a,	// (0x000414dd) aid_size_cell_colour_1_pane

0x968e,	// (0x000414f1) aid_size_cell_colour_2_pane_ParamLimits

0x968e,	// (0x000414f1) aid_size_cell_colour_2_pane

0x96a2,	// (0x00041505) aid_size_cell_colour_3_pane_ParamLimits

0x96a2,	// (0x00041505) aid_size_cell_colour_3_pane

0x96b6,	// (0x00041519) aid_size_cell_colour_4_pane_ParamLimits

0x96b6,	// (0x00041519) aid_size_cell_colour_4_pane

0xee5a,	// (0x00046cbd) title_pane_stacon_g1_ParamLimits

0xee5a,	// (0x00046cbd) title_pane_stacon_g1

0x29be,	// (0x0003a821) popup_note_wait_window_g3_ParamLimits

0x29be,	// (0x0003a821) popup_note_wait_window_g3

0x2a35,	// (0x0003a898) popup_note_wait_window_t5_ParamLimits

0x2a35,	// (0x0003a898) popup_note_wait_window_t5

0x7784,	// (0x0003f5e7) main_feb_china_hwr_fs_writing_pane

0xa4cc,	// (0x0004232f) popup_feb_china_hwr_fs_window_ParamLimits

0xa4cc,	// (0x0004232f) popup_feb_china_hwr_fs_window

0xaecc,	// (0x00042d2f) aid_size_cell_hwr_fs_ParamLimits

0xaecc,	// (0x00042d2f) aid_size_cell_hwr_fs

0x23bc,	// (0x0003a21f) bg_popup_sub_pane_cp3_ParamLimits

0x23bc,	// (0x0003a21f) bg_popup_sub_pane_cp3

0xaee1,	// (0x00042d44) grid_hwr_fs_pane_ParamLimits

0xaee1,	// (0x00042d44) grid_hwr_fs_pane

0x0343,	// (0x000381a6) linegrid_hwr_fs_pane_ParamLimits

0x0343,	// (0x000381a6) linegrid_hwr_fs_pane

0xaef9,	// (0x00042d5c) cell_hwr_fs_pane_ParamLimits

0xaef9,	// (0x00042d5c) cell_hwr_fs_pane

0x23c8,	// (0x0003a22b) linegrid_hwr_fs_pane_g1_ParamLimits

0x23c8,	// (0x0003a22b) linegrid_hwr_fs_pane_g1

0xc2e6,	// (0x00044149) linegrid_hwr_fs_pane_g2_ParamLimits

0xc2e6,	// (0x00044149) linegrid_hwr_fs_pane_g2

0x23e6,	// (0x0003a249) linegrid_hwr_fs_pane_g3_ParamLimits

0x23e6,	// (0x0003a249) linegrid_hwr_fs_pane_g3

0x0377,	// (0x000381da) linegrid_hwr_fs_pane_g4_ParamLimits

0x0377,	// (0x000381da) linegrid_hwr_fs_pane_g4

0x0395,	// (0x000381f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x0395,	// (0x000381f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00047653) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00047653) linegrid_hwr_fs_pane_g

0x23f2,	// (0x0003a255) cell_hwr_fs_pane_g1_ParamLimits

0x23f2,	// (0x0003a255) cell_hwr_fs_pane_g1

0x21bd,	// (0x0003a020) cell_hwr_fs_pane_g2_ParamLimits

0x21bd,	// (0x0003a020) cell_hwr_fs_pane_g2

0xc2f8,	// (0x0004415b) cell_hwr_fs_pane_g3_ParamLimits

0xc2f8,	// (0x0004415b) cell_hwr_fs_pane_g3

0xc305,	// (0x00044168) cell_hwr_fs_pane_g4_ParamLimits

0xc305,	// (0x00044168) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0004765e) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004765e) cell_hwr_fs_pane_g

0xaf1f,	// (0x00042d82) cell_hwr_fs_pane_t1

0x7784,	// (0x0003f5e7) grid_highlight_pane_cp6

0x7784,	// (0x0003f5e7) main_idle_act2_pane

0xba86,	// (0x000438e9) aid_inside_area_popup_secondary

0xc426,	// (0x00044289) aid_inside_area_window_primary_ParamLimits

0xc426,	// (0x00044289) aid_inside_area_window_primary

0x3c62,	// (0x0003bac5) ai2_news_ticker_pane

0x3c6a,	// (0x0003bacd) aid_size_cell_ai1_link_ParamLimits

0x3c6a,	// (0x0003bacd) aid_size_cell_ai1_link

0x3c84,	// (0x0003bae7) popup_ai2_data_window_ParamLimits

0x3c84,	// (0x0003bae7) popup_ai2_data_window

0x3ca2,	// (0x0003bb05) popup_ai2_link_window_ParamLimits

0x3ca2,	// (0x0003bb05) popup_ai2_link_window

0x23bc,	// (0x0003a21f) bg_popup_sub_pane_cp4_ParamLimits

0x23bc,	// (0x0003a21f) bg_popup_sub_pane_cp4

0x3cb8,	// (0x0003bb1b) grid_ai2_link_pane_ParamLimits

0x3cb8,	// (0x0003bb1b) grid_ai2_link_pane

0x3ccf,	// (0x0003bb32) popup_ai2_link_window_g1_ParamLimits

0x3ccf,	// (0x0003bb32) popup_ai2_link_window_g1

0x3cdb,	// (0x0003bb3e) popup_ai2_link_window_g2_ParamLimits

0x3cdb,	// (0x0003bb3e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00047831) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00047831) popup_ai2_link_window_g

0x3cec,	// (0x0003bb4f) ai2_mp_button_pane

0x3cf4,	// (0x0003bb57) ai2_mp_volume_pane

0x25ad,	// (0x0003a410) bg_popup_sub_pane_cp5_ParamLimits

0x25ad,	// (0x0003a410) bg_popup_sub_pane_cp5

0x3cfc,	// (0x0003bb5f) heading_ai2_gene_pane_ParamLimits

0x3cfc,	// (0x0003bb5f) heading_ai2_gene_pane

0x3d08,	// (0x0003bb6b) list_ai2_gene_pane_ParamLimits

0x3d08,	// (0x0003bb6b) list_ai2_gene_pane

0x3d50,	// (0x0003bbb3) cell_ai2_link_pane_ParamLimits

0x3d50,	// (0x0003bbb3) cell_ai2_link_pane

0x3d66,	// (0x0003bbc9) cell_ai2_link_pane_g1

0x7784,	// (0x0003f5e7) grid_highlight_pane_cp7

0x078d,	// (0x000385f0) ai2_mp_volume_pane_g1

0x3e39,	// (0x0003bc9c) ai2_mp_volume_pane_g2

0x3dae,	// (0x0003bc11) list_ai2_gene_pane_t1

0x3e41,	// (0x0003bca4) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0004784a) ai2_mp_volume_pane_g

0x0795,	// (0x000385f8) volume_small_pane_cp3

0x3e49,	// (0x0003bcac) aid_size_cell_ai2_button

0x3e51,	// (0x0003bcb4) grid_ai2_button_pane

0x3e5a,	// (0x0003bcbd) cell_ai2_button_pane_ParamLimits

0x3e5a,	// (0x0003bcbd) cell_ai2_button_pane

0x777a,	// (0x0003f5dd) cell_ai2_button_pane_g1

0x7784,	// (0x0003f5e7) grid_highlight_pane_cp8

0x3df9,	// (0x0003bc5c) ai2_gene_pane_t1_ParamLimits

0x3df9,	// (0x0003bc5c) ai2_gene_pane_t1

0xa42a,	// (0x0004228d) aid_height_parent_landscape

0xc61b,	// (0x0004447e) aid_height_set_list

0x3711,	// (0x0003b574) aid_size_parent

0x3a83,	// (0x0003b8e6) aid_size_cell_graphic_pane_ParamLimits

0x3d18,	// (0x0003bb7b) popup_ai2_data_window_g1_ParamLimits

0x3d18,	// (0x0003bb7b) popup_ai2_data_window_g1

0x3d24,	// (0x0003bb87) ai2_news_ticker_pane_g1

0x3d2c,	// (0x0003bb8f) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00047836) ai2_news_ticker_pane_g

0x3d34,	// (0x0003bb97) ai2_news_ticker_pane_t1

0x3d42,	// (0x0003bba5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004783b) ai2_news_ticker_pane_t

0x3d6f,	// (0x0003bbd2) heading_ai2_gene_pane_g1

0x3d77,	// (0x0003bbda) heading_ai2_gene_pane_t1_ParamLimits

0x3d77,	// (0x0003bbda) heading_ai2_gene_pane_t1

0x3d8c,	// (0x0003bbef) list_highlight_pane_cp6

0x3d94,	// (0x0003bbf7) ai2_gene_pane_ParamLimits

0x3d94,	// (0x0003bbf7) ai2_gene_pane

0x3dbc,	// (0x0003bc1f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00047840) list_ai2_gene_pane_t

0x3dca,	// (0x0003bc2d) list_highlight_pane_cp8_ParamLimits

0x3dca,	// (0x0003bc2d) list_highlight_pane_cp8

0x3ddb,	// (0x0003bc3e) ai2_gene_pane_g1_ParamLimits

0x3ddb,	// (0x0003bc3e) ai2_gene_pane_g1

0x3ded,	// (0x0003bc50) ai2_gene_pane_g2_ParamLimits

0x3ded,	// (0x0003bc50) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00047845) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00047845) ai2_gene_pane_g

0x87d8,	// (0x0004063b) scroll_pane_cp12

0xa3e9,	// (0x0004224c) control_pane_t3_ParamLimits

0xa3e9,	// (0x0004224c) control_pane_t3

0xa25d,	// (0x000420c0) status_small_pane_g8_ParamLimits

0xa25d,	// (0x000420c0) status_small_pane_g8

0xa56e,	// (0x000423d1) popup_find_window_ParamLimits

0xa81f,	// (0x00042682) popup_note_image_window_ParamLimits

0xd8de,	// (0x00045741) list_double2_graphic_pane_vc_g1_ParamLimits

0xd8de,	// (0x00045741) list_double2_graphic_pane_vc_g1

0xda4c,	// (0x000458af) list_double2_graphic_pane_vc_g2_ParamLimits

0xda4c,	// (0x000458af) list_double2_graphic_pane_vc_g2

0xda58,	// (0x000458bb) list_double2_graphic_pane_vc_g3_ParamLimits

0xda58,	// (0x000458bb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00047621) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00047621) list_double2_graphic_pane_vc_g

0xda64,	// (0x000458c7) list_double2_graphic_pane_vc_t1_ParamLimits

0xda64,	// (0x000458c7) list_double2_graphic_pane_vc_t1

0xd8b4,	// (0x00045717) list_single_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_heading_pane_vc_g1

0xd8c0,	// (0x00045723) list_single_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_heading_pane_vc_g

0xda7a,	// (0x000458dd) list_single_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x000458dd) list_single_heading_pane_vc_t1

0xda92,	// (0x000458f5) list_single_heading_pane_vc_t2_ParamLimits

0xda92,	// (0x000458f5) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00047642) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00047642) list_single_heading_pane_vc_t

0xdaa4,	// (0x00045907) list_setting_number_pane_vc_g1_ParamLimits

0xdaa4,	// (0x00045907) list_setting_number_pane_vc_g1

0xdab0,	// (0x00045913) list_setting_number_pane_vc_g2_ParamLimits

0xdab0,	// (0x00045913) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00047647) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00047647) list_setting_number_pane_vc_g

0xdabc,	// (0x0004591f) list_setting_number_pane_vc_t1_ParamLimits

0xdabc,	// (0x0004591f) list_setting_number_pane_vc_t1

0xdad0,	// (0x00045933) list_setting_number_pane_vc_t2_ParamLimits

0xdad0,	// (0x00045933) list_setting_number_pane_vc_t2

0xdaec,	// (0x0004594f) list_setting_number_pane_vc_t3_ParamLimits

0xdaec,	// (0x0004594f) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0004764c) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004764c) list_setting_number_pane_vc_t

0xdb1a,	// (0x0004597d) set_value_pane_vc_ParamLimits

0xdb1a,	// (0x0004597d) set_value_pane_vc

0xdb51,	// (0x000459b4) list_double2_graphic_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double2_graphic_pane_vc

0x38e9,	// (0x0003b74c) list_double2_large_graphic_pane_vc_ParamLimits

0x38e9,	// (0x0003b74c) list_double2_large_graphic_pane_vc

0xdb51,	// (0x000459b4) list_double2_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double2_pane_vc

0xdb51,	// (0x000459b4) list_double_graphic_heading_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_graphic_heading_pane_vc

0xdb51,	// (0x000459b4) list_double_graphic_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_graphic_pane_vc

0xdb51,	// (0x000459b4) list_double_heading_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_heading_pane_vc

0x38fd,	// (0x0003b760) list_double_large_graphic_pane_vc_ParamLimits

0x38fd,	// (0x0003b760) list_double_large_graphic_pane_vc

0xdb51,	// (0x000459b4) list_double_number_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_number_pane_vc

0xdb51,	// (0x000459b4) list_double_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_pane_vc

0xdb51,	// (0x000459b4) list_double_time_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_double_time_pane_vc

0xdb51,	// (0x000459b4) list_setting_number_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_setting_number_pane_vc

0xdb51,	// (0x000459b4) list_setting_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_setting_pane_vc

0xdb51,	// (0x000459b4) list_single_graphic_heading_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_single_graphic_heading_pane_vc

0xdb51,	// (0x000459b4) list_single_heading_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_single_heading_pane_vc

0xdb51,	// (0x000459b4) list_single_number_heading_pane_vc_ParamLimits

0xdb51,	// (0x000459b4) list_single_number_heading_pane_vc

0xd8de,	// (0x00045741) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd8de,	// (0x00045741) list_double_graphic_heading_pane_vc_g1

0xd8b4,	// (0x00045717) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd8b4,	// (0x00045717) list_double_graphic_heading_pane_vc_g2

0xd8c0,	// (0x00045723) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd8c0,	// (0x00045723) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00047851) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00047851) list_double_graphic_heading_pane_vc_g

0xdb66,	// (0x000459c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdb66,	// (0x000459c9) list_double_graphic_heading_pane_vc_t1

0xdb7c,	// (0x000459df) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdb7c,	// (0x000459df) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00047858) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00047858) list_double_graphic_heading_pane_vc_t

0xdaa4,	// (0x00045907) list_setting_pane_vc_g1_ParamLimits

0xdaa4,	// (0x00045907) list_setting_pane_vc_g1

0xdab0,	// (0x00045913) list_setting_pane_vc_g2_ParamLimits

0xdab0,	// (0x00045913) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00047647) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00047647) list_setting_pane_vc_g

0xdb9a,	// (0x000459fd) list_setting_pane_vc_t1_ParamLimits

0xdb9a,	// (0x000459fd) list_setting_pane_vc_t1

0xdbb6,	// (0x00045a19) list_setting_pane_vc_t2_ParamLimits

0xdbb6,	// (0x00045a19) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0004789b) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0004789b) list_setting_pane_vc_t

0xdb1a,	// (0x0004597d) set_value_pane_cp_vc_ParamLimits

0xdb1a,	// (0x0004597d) set_value_pane_cp_vc

0xd8b4,	// (0x00045717) list_single_number_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_single_number_heading_pane_vc_g1

0xd8c0,	// (0x00045723) list_single_number_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_single_number_heading_pane_vc_g

0xda7a,	// (0x000458dd) list_single_number_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x000458dd) list_single_number_heading_pane_vc_t1

0xdbd2,	// (0x00045a35) list_single_number_heading_pane_vc_t2_ParamLimits

0xdbd2,	// (0x00045a35) list_single_number_heading_pane_vc_t2

0xd8cc,	// (0x0004572f) list_single_number_heading_pane_vc_t3_ParamLimits

0xd8cc,	// (0x0004572f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x000478a0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000478a0) list_single_number_heading_pane_vc_t

0xd8de,	// (0x00045741) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd8de,	// (0x00045741) list_single_graphic_heading_pane_vc_g1

0xd8b4,	// (0x00045717) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd8b4,	// (0x00045717) list_single_graphic_heading_pane_vc_g4

0xd8c0,	// (0x00045723) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd8c0,	// (0x00045723) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00047851) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00047851) list_single_graphic_heading_pane_vc_g

0xda7a,	// (0x000458dd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xda7a,	// (0x000458dd) list_single_graphic_heading_pane_vc_t1

0xdbe4,	// (0x00045a47) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdbe4,	// (0x00045a47) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x000478a7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x000478a7) list_single_graphic_heading_pane_vc_t

0xd8b4,	// (0x00045717) list_double2_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_double2_pane_vc_g1

0xd8c0,	// (0x00045723) list_double2_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_double2_pane_vc_g

0xdb3b,	// (0x0004599e) list_double2_pane_vc_t1_ParamLimits

0xdb3b,	// (0x0004599e) list_double2_pane_vc_t1

0xd8ea,	// (0x0004574d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd8ea,	// (0x0004574d) list_double2_large_graphic_pane_vc_g1

0xd8f6,	// (0x00045759) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd8f6,	// (0x00045759) list_double2_large_graphic_pane_vc_g2

0xd902,	// (0x00045765) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd902,	// (0x00045765) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00047448) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00047448) list_double2_large_graphic_pane_vc_g

0xd90e,	// (0x00045771) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd90e,	// (0x00045771) list_double2_large_graphic_pane_vc_t1

0xdbf6,	// (0x00045a59) list_double_time_pane_vc_g1_ParamLimits

0xdbf6,	// (0x00045a59) list_double_time_pane_vc_g1

0xdc02,	// (0x00045a65) list_double_time_pane_vc_g2_ParamLimits

0xdc02,	// (0x00045a65) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x000478ac) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x000478ac) list_double_time_pane_vc_g

0xdc0e,	// (0x00045a71) list_double_time_pane_vc_t1_ParamLimits

0xdc0e,	// (0x00045a71) list_double_time_pane_vc_t1

0xdc38,	// (0x00045a9b) list_double_time_pane_vc_t2_ParamLimits

0xdc38,	// (0x00045a9b) list_double_time_pane_vc_t2

0xdc81,	// (0x00045ae4) list_double_time_pane_vc_t3_ParamLimits

0xdc81,	// (0x00045ae4) list_double_time_pane_vc_t3

0xdc93,	// (0x00045af6) list_double_time_pane_vc_t4_ParamLimits

0xdc93,	// (0x00045af6) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x000478b1) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x000478b1) list_double_time_pane_vc_t

0xd8b4,	// (0x00045717) list_double_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_double_pane_vc_g1

0xd8c0,	// (0x00045723) list_double_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_double_pane_vc_g

0xdcb8,	// (0x00045b1b) list_double_pane_vc_t1_ParamLimits

0xdcb8,	// (0x00045b1b) list_double_pane_vc_t1

0xdccc,	// (0x00045b2f) list_double_pane_vc_t2_ParamLimits

0xdccc,	// (0x00045b2f) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x000478ba) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x000478ba) list_double_pane_vc_t

0xd8b4,	// (0x00045717) list_double_number_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_double_number_pane_vc_g1

0xd8c0,	// (0x00045723) list_double_number_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_double_number_pane_vc_g

0xdce2,	// (0x00045b45) list_double_number_pane_vc_t1_ParamLimits

0xdce2,	// (0x00045b45) list_double_number_pane_vc_t1

0xdcf6,	// (0x00045b59) list_double_number_pane_vc_t2_ParamLimits

0xdcf6,	// (0x00045b59) list_double_number_pane_vc_t2

0xdd0a,	// (0x00045b6d) list_double_number_pane_vc_t3_ParamLimits

0xdd0a,	// (0x00045b6d) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x000478bf) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x000478bf) list_double_number_pane_vc_t

0xdd20,	// (0x00045b83) list_double_large_graphic_pane_vc_g1_ParamLimits

0xdd20,	// (0x00045b83) list_double_large_graphic_pane_vc_g1

0xdd48,	// (0x00045bab) list_double_large_graphic_pane_vc_g2_ParamLimits

0xdd48,	// (0x00045bab) list_double_large_graphic_pane_vc_g2

0xdd5c,	// (0x00045bbf) list_double_large_graphic_pane_vc_g3_ParamLimits

0xdd5c,	// (0x00045bbf) list_double_large_graphic_pane_vc_g3

0xdd6b,	// (0x00045bce) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdd6b,	// (0x00045bce) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x000478c6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x000478c6) list_double_large_graphic_pane_vc_g

0xdd7b,	// (0x00045bde) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdd7b,	// (0x00045bde) list_double_large_graphic_pane_vc_t1

0xdd9d,	// (0x00045c00) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdd9d,	// (0x00045c00) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x000478cf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x000478cf) list_double_large_graphic_pane_vc_t

0xd8b4,	// (0x00045717) list_double_heading_pane_vc_g1_ParamLimits

0xd8b4,	// (0x00045717) list_double_heading_pane_vc_g1

0xd8c0,	// (0x00045723) list_double_heading_pane_vc_g2_ParamLimits

0xd8c0,	// (0x00045723) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0004742b) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0004742b) list_double_heading_pane_vc_g

0xddbd,	// (0x00045c20) list_double_heading_pane_vc_t1_ParamLimits

0xddbd,	// (0x00045c20) list_double_heading_pane_vc_t1

0xda7a,	// (0x000458dd) list_double_heading_pane_vc_t2_ParamLimits

0xda7a,	// (0x000458dd) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x000478d4) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x000478d4) list_double_heading_pane_vc_t

0xddcf,	// (0x00045c32) list_double_graphic_pane_vc_g1_ParamLimits

0xddcf,	// (0x00045c32) list_double_graphic_pane_vc_g1

0xdde2,	// (0x00045c45) list_double_graphic_pane_vc_g2_ParamLimits

0xdde2,	// (0x00045c45) list_double_graphic_pane_vc_g2

0xd8b4,	// (0x00045717) list_double_graphic_pane_vc_g3_ParamLimits

0xd8b4,	// (0x00045717) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x000478d9) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x000478d9) list_double_graphic_pane_vc_g

0xddff,	// (0x00045c62) list_double_graphic_pane_vc_t1_ParamLimits

0xddff,	// (0x00045c62) list_double_graphic_pane_vc_t1

0xde29,	// (0x00045c8c) list_double_graphic_pane_vc_t2_ParamLimits

0xde29,	// (0x00045c8c) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x000478e2) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x000478e2) list_double_graphic_pane_vc_t

0xebd6,	// (0x00046a39) aid_size_cell_fastswap

0x91c7,	// (0x0004102a) aid_size_cell_touch_ParamLimits

0x91c7,	// (0x0004102a) aid_size_cell_touch

0xed5d,	// (0x00046bc0) popup_fast_swap_wide_window_ParamLimits

0xed5d,	// (0x00046bc0) popup_fast_swap_wide_window

0x9385,	// (0x000411e8) touch_pane_ParamLimits

0x9385,	// (0x000411e8) touch_pane

0xb95f,	// (0x000437c2) button_value_adjust_pane_cp2

0xd947,	// (0x000457aa) button_value_adjust_pane_cp4

0xd94f,	// (0x000457b2) form_field_data_pane_cp2

0x9c19,	// (0x00041a7c) form_field_data_wide_pane_cp2

0xbcc5,	// (0x00043b28) bg_scroll_pane_ParamLimits

0xefb6,	// (0x00046e19) scroll_handle_pane_ParamLimits

0xefca,	// (0x00046e2d) scroll_sc2_down_pane_ParamLimits

0xefca,	// (0x00046e2d) scroll_sc2_down_pane

0xbcf6,	// (0x00043b59) scroll_sc2_up_pane_ParamLimits

0xbcf6,	// (0x00043b59) scroll_sc2_up_pane

0xc9fe,	// (0x00044861) grid_wheel_folder_pane_g1_ParamLimits

0xc9fe,	// (0x00044861) grid_wheel_folder_pane_g1

0xf200,	// (0x00047063) clock_nsta_pane_cp2_ParamLimits

0xf200,	// (0x00047063) clock_nsta_pane_cp2

0x0142,	// (0x00037fa5) listscroll_midp_pane_ParamLimits

0xa148,	// (0x00041fab) midp_canvas_pane

0x00b6,	// (0x00037f19) nsta_clock_indic_pane

0x010c,	// (0x00037f6f) listscroll_form_pane_vc

0x0130,	// (0x00037f93) listscroll_set_pane_vc_ParamLimits

0x0130,	// (0x00037f93) listscroll_set_pane_vc

0xac9b,	// (0x00042afe) clock_nsta_pane

0xacc5,	// (0x00042b28) indicator_nsta_pane

0x2286,	// (0x0003a0e9) bg_popup_sub_pane_cp2_ParamLimits

0x229a,	// (0x0003a0fd) find_pane_cp2_ParamLimits

0x229a,	// (0x0003a0fd) find_pane_cp2

0x22b0,	// (0x0003a113) grid_toobar_pane_ParamLimits

0x2390,	// (0x0003a1f3) list_form_gen_pane_vc_ParamLimits

0x2390,	// (0x0003a1f3) list_form_gen_pane_vc

0x23a6,	// (0x0003a209) scroll_pane_cp8_vc_ParamLimits

0x23a6,	// (0x0003a209) scroll_pane_cp8_vc

0x2422,	// (0x0003a285) data_form_wide_pane_vc_ParamLimits

0x2422,	// (0x0003a285) data_form_wide_pane_vc

0x242e,	// (0x0003a291) form_field_data_wide_pane_vc_g1

0x2436,	// (0x0003a299) form_field_data_wide_pane_vc_t1_ParamLimits

0x2436,	// (0x0003a299) form_field_data_wide_pane_vc_t1

0xb973,	// (0x000437d6) input_focus_pane_cp6_vc_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_cp6_vc

0xc383,	// (0x000441e6) list_midp_pane_ParamLimits

0x3aef,	// (0x0003b952) scroll_pane_cp16_ParamLimits

0x3aef,	// (0x0003b952) scroll_pane_cp16

0x2792,	// (0x0003a5f5) button_value_adjust_pane_ParamLimits

0x2792,	// (0x0003a5f5) button_value_adjust_pane

0xc62c,	// (0x0004448f) button_value_adjust_pane_cp6_ParamLimits

0xc62c,	// (0x0004448f) button_value_adjust_pane_cp6

0xc76e,	// (0x000445d1) settings_code_pane_cp_ParamLimits

0xc76e,	// (0x000445d1) settings_code_pane_cp

0x777a,	// (0x0003f5dd) cell_touch_pane_g1

0x777a,	// (0x0003f5dd) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00047566) cell_touch_pane_g

0xc8bd,	// (0x00044720) cell_touch_pane_cp_ParamLimits

0xc8bd,	// (0x00044720) cell_touch_pane_cp

0xc8d9,	// (0x0004473c) cell_touch_pane_ParamLimits

0xc8d9,	// (0x0004473c) cell_touch_pane

0x777a,	// (0x0003f5dd) scroll_sc2_down_pane_g1

0x777a,	// (0x0003f5dd) scroll_sc2_up_pane_g1

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp4_vc

0x3e8d,	// (0x0003bcf0) list_set_graphic_pane_vc_g1_ParamLimits

0x3e8d,	// (0x0003bcf0) list_set_graphic_pane_vc_g1

0xc8f7,	// (0x0004475a) list_set_graphic_pane_vc_g2_ParamLimits

0xc8f7,	// (0x0004475a) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0004785d) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0004785d) list_set_graphic_pane_vc_g

0x3e99,	// (0x0003bcfc) text_primary_small_cp13_vc_ParamLimits

0x3e99,	// (0x0003bcfc) text_primary_small_cp13_vc

0x3eb1,	// (0x0003bd14) list_set_graphic_pane_vc_ParamLimits

0x3eb1,	// (0x0003bd14) list_set_graphic_pane_vc

0x7784,	// (0x0003f5e7) input_focus_pane_cp2_vc

0x777a,	// (0x0003f5dd) setting_code_pane_vc_g1

0x8236,	// (0x00040099) setting_code_pane_vc_t1

0x3ec6,	// (0x0003bd29) set_text_pane_vc_t1_ParamLimits

0x3ec6,	// (0x0003bd29) set_text_pane_vc_t1

0x7784,	// (0x0003f5e7) input_focus_pane_cp1_vc

0x3ee4,	// (0x0003bd47) list_set_text_pane_vc

0x777a,	// (0x0003f5dd) setting_text_pane_vc_g1

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp2_vc

0x822d,	// (0x00040090) setting_slider_graphic_pane_vc_g1

0x3eee,	// (0x0003bd51) setting_slider_graphic_pane_vc_t1

0x3f00,	// (0x0003bd63) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00047862) setting_slider_graphic_pane_vc_t

0x3f12,	// (0x0003bd75) slider_set_pane_cp_vc

0x3f1c,	// (0x0003bd7f) slider_set_pane_vc_g1

0x3f25,	// (0x0003bd88) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00047867) slider_set_pane_vc_g

0xb9ce,	// (0x00043831) set_opt_bg_pane_g1_copy1

0xb9d6,	// (0x00043839) set_opt_bg_pane_g2_copy1

0x3f51,	// (0x0003bdb4) set_opt_bg_pane_g3_copy1

0xb9e6,	// (0x00043849) set_opt_bg_pane_g4_copy1

0xb9ee,	// (0x00043851) set_opt_bg_pane_g5_copy1

0xb9f6,	// (0x00043859) set_opt_bg_pane_g6_copy1

0x3f5b,	// (0x0003bdbe) set_opt_bg_pane_g7_copy1

0x3f65,	// (0x0003bdc8) set_opt_bg_pane_g8_copy1

0x3f6f,	// (0x0003bdd2) set_opt_bg_pane_g9_copy1

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp_vc

0x3f79,	// (0x0003bddc) setting_slider_pane_vc_t1

0x3f88,	// (0x0003bdeb) setting_slider_pane_vc_t2

0x3f9a,	// (0x0003bdfd) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00047876) setting_slider_pane_vc_t

0x3fac,	// (0x0003be0f) slider_set_pane_vc

0x03dc,	// (0x0003823f) volume_set_pane_vc_g1

0x03e5,	// (0x00038248) volume_set_pane_vc_g2

0x03ee,	// (0x00038251) volume_set_pane_vc_g3

0x03f7,	// (0x0003825a) volume_set_pane_vc_g4

0x0400,	// (0x00038263) volume_set_pane_vc_g5

0x0409,	// (0x0003826c) volume_set_pane_vc_g6

0x0412,	// (0x00038275) volume_set_pane_vc_g7

0x041b,	// (0x0003827e) volume_set_pane_vc_g8

0x0424,	// (0x00038287) volume_set_pane_vc_g9

0x042d,	// (0x00038290) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0004787d) volume_set_pane_vc_g

0x3fb6,	// (0x0003be19) volume_set_pane_vc

0x3fc0,	// (0x0003be23) button_value_adjust_pane_cp1_vc

0x3fca,	// (0x0003be2d) list_highlight_pane_cp2_vc

0x3fd3,	// (0x0003be36) list_set_pane_vc_ParamLimits

0x3fd3,	// (0x0003be36) list_set_pane_vc

0x4043,	// (0x0003bea6) main_pane_set_vc_t1_ParamLimits

0x4043,	// (0x0003bea6) main_pane_set_vc_t1

0x4058,	// (0x0003bebb) main_pane_set_vc_t2_ParamLimits

0x4058,	// (0x0003bebb) main_pane_set_vc_t2

0x406a,	// (0x0003becd) main_pane_set_vc_t3_ParamLimits

0x406a,	// (0x0003becd) main_pane_set_vc_t3

0x407e,	// (0x0003bee1) main_pane_set_vc_t4_ParamLimits

0x407e,	// (0x0003bee1) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00047892) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00047892) main_pane_set_vc_t

0x4092,	// (0x0003bef5) setting_code_pane_vc_ParamLimits

0x4092,	// (0x0003bef5) setting_code_pane_vc

0x40a3,	// (0x0003bf06) setting_slider_graphic_pane_vc

0x40a3,	// (0x0003bf06) setting_slider_pane_vc

0x40a3,	// (0x0003bf06) setting_text_pane_vc

0x40a3,	// (0x0003bf06) setting_volume_pane_vc

0x40ad,	// (0x0003bf10) scroll_pane_cp121_vc

0xb94d,	// (0x000437b0) set_content_pane_vc

0x40b5,	// (0x0003bf18) button_value_adjust_pane_g1

0x40be,	// (0x0003bf21) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x000478e7) button_value_adjust_pane_g

0x40c7,	// (0x0003bf2a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x40c7,	// (0x0003bf2a) form_field_slider_wide_pane_vc_t1

0x40d9,	// (0x0003bf3c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x40d9,	// (0x0003bf3c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x000478ec) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x000478ec) form_field_slider_wide_pane_vc_t

0x8352,	// (0x000401b5) input_focus_pane_cp10_vc_ParamLimits

0x8352,	// (0x000401b5) input_focus_pane_cp10_vc

0x4105,	// (0x0003bf68) slider_cont_pane_cp1_vc_ParamLimits

0x4105,	// (0x0003bf68) slider_cont_pane_cp1_vc

0x4117,	// (0x0003bf7a) slider_form_pane_g1_cp2

0x3f25,	// (0x0003bd88) slider_form_pane_g2_cp2

0x4144,	// (0x0003bfa7) form_field_slider_pane_vc_t3

0x4152,	// (0x0003bfb5) form_field_slider_pane_vc_t4

0x4160,	// (0x0003bfc3) slider_form_pane_vc_ParamLimits

0x4160,	// (0x0003bfc3) slider_form_pane_vc

0x416d,	// (0x0003bfd0) form_field_slider_pane_vc_t1_ParamLimits

0x416d,	// (0x0003bfd0) form_field_slider_pane_vc_t1

0x40d9,	// (0x0003bf3c) form_field_slider_pane_vc_t2_ParamLimits

0x40d9,	// (0x0003bf3c) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x000478fe) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x000478fe) form_field_slider_pane_vc_t

0x8352,	// (0x000401b5) input_focus_pane_cp9_vc_ParamLimits

0x8352,	// (0x000401b5) input_focus_pane_cp9_vc

0x4183,	// (0x0003bfe6) slider_cont_pane_vc_ParamLimits

0x4183,	// (0x0003bfe6) slider_cont_pane_vc

0x4197,	// (0x0003bffa) list_form_graphic_pane_cp_vc_ParamLimits

0x4197,	// (0x0003bffa) list_form_graphic_pane_cp_vc

0x242e,	// (0x0003a291) form_field_popup_wide_pane_vc_g1

0x41ac,	// (0x0003c00f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x41ac,	// (0x0003c00f) form_field_popup_wide_pane_vc_t1

0xb973,	// (0x000437d6) input_focus_pane_cp8_vc_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_cp8_vc

0x41f1,	// (0x0003c054) list_form_wide_pane_vc_ParamLimits

0x41f1,	// (0x0003c054) list_form_wide_pane_vc

0x41fd,	// (0x0003c060) list_form_graphic_pane_vc_g1

0x4205,	// (0x0003c068) list_form_graphic_pane_vc_t1_ParamLimits

0x4205,	// (0x0003c068) list_form_graphic_pane_vc_t1

0x821f,	// (0x00040082) list_highlight_pane_cp5_vc_ParamLimits

0x821f,	// (0x00040082) list_highlight_pane_cp5_vc

0x4221,	// (0x0003c084) list_form_graphic_pane_vc_ParamLimits

0x4221,	// (0x0003c084) list_form_graphic_pane_vc

0x242e,	// (0x0003a291) form_field_popup_pane_vc_g1

0x4237,	// (0x0003c09a) form_field_popup_pane_vc_t1_ParamLimits

0x4237,	// (0x0003c09a) form_field_popup_pane_vc_t1

0xb973,	// (0x000437d6) input_focus_pane_cp7_vc_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_cp7_vc

0x424e,	// (0x0003c0b1) list_form_pane_vc_ParamLimits

0x424e,	// (0x0003c0b1) list_form_pane_vc

0x425a,	// (0x0003c0bd) data_form_pane_vc_t1_ParamLimits

0x425a,	// (0x0003c0bd) data_form_pane_vc_t1

0xb9ce,	// (0x00043831) input_focus_pane_vc_g1

0xb9d6,	// (0x00043839) input_focus_pane_vc_g2

0xb9de,	// (0x00043841) input_focus_pane_vc_g3

0xb9e6,	// (0x00043849) input_focus_pane_vc_g4

0xb9ee,	// (0x00043851) input_focus_pane_vc_g5

0xb9f6,	// (0x00043859) input_focus_pane_vc_g6

0xb9fe,	// (0x00043861) input_focus_pane_vc_g7

0xba06,	// (0x00043869) input_focus_pane_vc_g8

0xba0e,	// (0x00043871) input_focus_pane_vc_g9

0x777a,	// (0x0003f5dd) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x000474ef) input_focus_pane_vc_g

0x2422,	// (0x0003a285) data_form_pane_vc_ParamLimits

0x2422,	// (0x0003a285) data_form_pane_vc

0x242e,	// (0x0003a291) form_field_data_pane_vc_g1

0x4277,	// (0x0003c0da) form_field_data_pane_vc_t1_ParamLimits

0x4277,	// (0x0003c0da) form_field_data_pane_vc_t1

0xb973,	// (0x000437d6) input_focus_pane_vc_ParamLimits

0xb973,	// (0x000437d6) input_focus_pane_vc

0x4291,	// (0x0003c0f4) button_value_adjust_pane_cp3_vc

0x4299,	// (0x0003c0fc) button_value_adjust_pane_cp5_vc

0x42a1,	// (0x0003c104) form_field_data_pane_vc_ParamLimits

0x42a1,	// (0x0003c104) form_field_data_pane_vc

0x42bc,	// (0x0003c11f) form_field_data_pane_vc_cp2

0x42c4,	// (0x0003c127) form_field_data_wide_pane_vc_ParamLimits

0x42c4,	// (0x0003c127) form_field_data_wide_pane_vc

0x42de,	// (0x0003c141) form_field_data_wide_pane_vc_cp2

0x42e6,	// (0x0003c149) form_field_popup_pane_vc_ParamLimits

0x42e6,	// (0x0003c149) form_field_popup_pane_vc

0x4301,	// (0x0003c164) form_field_popup_wide_pane_vc_ParamLimits

0x4301,	// (0x0003c164) form_field_popup_wide_pane_vc

0x431b,	// (0x0003c17e) form_field_slider_pane_vc_ParamLimits

0x431b,	// (0x0003c17e) form_field_slider_pane_vc

0x432e,	// (0x0003c191) form_field_slider_wide_pane_vc_ParamLimits

0x432e,	// (0x0003c191) form_field_slider_wide_pane_vc

0xc903,	// (0x00044766) grid_touch_1_pane_ParamLimits

0xc903,	// (0x00044766) grid_touch_1_pane

0xc917,	// (0x0004477a) grid_touch_2_pane_ParamLimits

0xc917,	// (0x0004477a) grid_touch_2_pane

0x43ff,	// (0x0003c262) touch_pane_g1_ParamLimits

0x43ff,	// (0x0003c262) touch_pane_g1

0x4367,	// (0x0003c1ca) cell_app_pane_cp_wide_ParamLimits

0x4367,	// (0x0003c1ca) cell_app_pane_cp_wide

0x4378,	// (0x0003c1db) grid_popup_fast_wide_pane_ParamLimits

0x4378,	// (0x0003c1db) grid_popup_fast_wide_pane

0x438c,	// (0x0003c1ef) scroll_pane_cp19_ParamLimits

0x438c,	// (0x0003c1ef) scroll_pane_cp19

0x7784,	// (0x0003f5e7) bg_popup_window_pane_cp20

0x43a0,	// (0x0003c203) listscroll_popup_fast_wide_pane

0xc943,	// (0x000447a6) grid_indicator_nsta_pane

0x43a8,	// (0x0003c20b) clock_nsta_pane_g1

0x43b1,	// (0x0003c214) clock_nsta_pane_t1

0xc951,	// (0x000447b4) cell_indicator_nsta_pane_ParamLimits

0xc951,	// (0x000447b4) cell_indicator_nsta_pane

0x43ff,	// (0x0003c262) cell_indicator_nsta_pane_g1

0xc96a,	// (0x000447cd) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0004790f) cell_indicator_nsta_pane_g

0x4423,	// (0x0003c286) clock_nsta_pane_cp

0x442b,	// (0x0003c28e) indicator_nsta_pane_cp

0x4434,	// (0x0003c297) nsta_clock_indic_pane_g1

0x825b,	// (0x000400be) grid_indicator_pane

0xbde8,	// (0x00043c4b) scroll_pane_cp29

0xf14c,	// (0x00046faf) indicator_nsta_pane_cp2_ParamLimits

0xf14c,	// (0x00046faf) indicator_nsta_pane_cp2

0x821f,	// (0x00040082) main_apps_wheel_pane

0x2615,	// (0x0003a478) form_midp_field_text_pane_ParamLimits

0x2764,	// (0x0003a5c7) scroll_bar_cp050_ParamLimits

0x449d,	// (0x0003c300) cell_indicator_pane_ParamLimits

0x449d,	// (0x0003c300) cell_indicator_pane

0x44b5,	// (0x0003c318) cell_indicator_pane_g1

0xc980,	// (0x000447e3) grid_wheel_folder_pane_ParamLimits

0xc980,	// (0x000447e3) grid_wheel_folder_pane

0xc98e,	// (0x000447f1) list_wheel_apps_pane_ParamLimits

0xc98e,	// (0x000447f1) list_wheel_apps_pane

0xc99c,	// (0x000447ff) main_apps_wheel_pane_g1_ParamLimits

0xc99c,	// (0x000447ff) main_apps_wheel_pane_g1

0xc9ac,	// (0x0004480f) main_apps_wheel_pane_g2_ParamLimits

0xc9ac,	// (0x0004480f) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0004792b) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0004792b) main_apps_wheel_pane_g

0xc9bc,	// (0x0004481f) main_apps_wheel_pane_t1_ParamLimits

0xc9bc,	// (0x0004481f) main_apps_wheel_pane_t1

0xc9d4,	// (0x00044837) list_wheel_apps_pane_g1

0xc9dc,	// (0x0004483f) list_wheel_apps_pane_g2

0xc9e4,	// (0x00044847) list_wheel_apps_pane_g3

0xc9ec,	// (0x0004484f) list_wheel_apps_pane_g4

0xc9f4,	// (0x00044857) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00047930) list_wheel_apps_pane_g

0xc168,	// (0x00043fcb) navi_icon_text_pane

0xab8d,	// (0x000429f0) aid_fill_nsta

0xca11,	// (0x00044874) navi_icon_text_pane_g1

0xca1d,	// (0x00044880) navi_icon_text_pane_t1

0xa0a1,	// (0x00041f04) list_set_graphic_pane_t1_ParamLimits

0xa0a1,	// (0x00041f04) list_set_graphic_pane_t1

0x2eb5,	// (0x0003ad18) popup_midp_note_alarm_window_t6_ParamLimits

0x2eb5,	// (0x0003ad18) popup_midp_note_alarm_window_t6

0x2ec7,	// (0x0003ad2a) popup_midp_note_alarm_window_t7_ParamLimits

0x2ec7,	// (0x0003ad2a) popup_midp_note_alarm_window_t7

0x2ed9,	// (0x0003ad3c) popup_midp_note_alarm_window_t8_ParamLimits

0x2ed9,	// (0x0003ad3c) popup_midp_note_alarm_window_t8

0x2eeb,	// (0x0003ad4e) popup_midp_note_alarm_window_t9_ParamLimits

0x2eeb,	// (0x0003ad4e) popup_midp_note_alarm_window_t9

0x2efd,	// (0x0003ad60) popup_midp_note_alarm_window_t10_ParamLimits

0x2efd,	// (0x0003ad60) popup_midp_note_alarm_window_t10

0x2f0f,	// (0x0003ad72) popup_midp_note_alarm_window_t11_ParamLimits

0x2f0f,	// (0x0003ad72) popup_midp_note_alarm_window_t11

0x2f21,	// (0x0003ad84) scroll_pane_cp17_ParamLimits

0x2f21,	// (0x0003ad84) scroll_pane_cp17

0x03dc,	// (0x0003823f) volume_small_pane_cp_g1

0x079e,	// (0x00038601) volume_small_pane_cp_g2

0x07a7,	// (0x0003860a) volume_small_pane_cp_g3

0x07b0,	// (0x00038613) volume_small_pane_cp_g4

0x07b9,	// (0x0003861c) volume_small_pane_cp_g5

0x07c2,	// (0x00038625) volume_small_pane_cp_g6

0x07cb,	// (0x0003862e) volume_small_pane_cp_g7

0x07d4,	// (0x00038637) volume_small_pane_cp_g8

0x07dd,	// (0x00038640) volume_small_pane_cp_g9

0x07e6,	// (0x00038649) volume_small_pane_cp_g10

0xf35f,	// (0x000471c2) midp_ticker_pane_g1_ParamLimits

0xf36b,	// (0x000471ce) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x000475bb) midp_ticker_pane_g_ParamLimits

0xa1df,	// (0x00042042) midp_ticker_pane_t1_ParamLimits

0xabb1,	// (0x00042a14) aid_fill_nsta_2

0x2750,	// (0x0003a5b3) list_form2_midp_pane

0x38b8,	// (0x0003b71b) midp_editing_number_pane_ParamLimits

0x38c7,	// (0x0003b72a) midp_ticker_pane_ParamLimits

0x45a8,	// (0x0003c40b) form2_midp_field_pane

0x45cc,	// (0x0003c42f) scroll_pane_cp51

0x45ec,	// (0x0003c44f) form2_midp_button_pane_ParamLimits

0x45ec,	// (0x0003c44f) form2_midp_button_pane

0x45fe,	// (0x0003c461) form2_midp_content_pane_ParamLimits

0x45fe,	// (0x0003c461) form2_midp_content_pane

0x4618,	// (0x0003c47b) form2_midp_field_choice_group_pane

0x4620,	// (0x0003c483) form2_midp_field_pane_g1

0x4628,	// (0x0003c48b) form2_midp_field_pane_g2

0x4630,	// (0x0003c493) form2_midp_field_pane_g3

0x4638,	// (0x0003c49b) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00047955) form2_midp_field_pane_g

0x4640,	// (0x0003c4a3) form2_midp_gauge_slider_pane

0x4648,	// (0x0003c4ab) form2_midp_gauge_wait_pane

0x4650,	// (0x0003c4b3) form2_midp_image_pane_ParamLimits

0x4650,	// (0x0003c4b3) form2_midp_image_pane

0x466b,	// (0x0003c4ce) form2_midp_label_pane_ParamLimits

0x466b,	// (0x0003c4ce) form2_midp_label_pane

0xca4b,	// (0x000448ae) form2_midp_label_pane_cp_ParamLimits

0xca4b,	// (0x000448ae) form2_midp_label_pane_cp

0x46ab,	// (0x0003c50e) form2_midp_string_pane_ParamLimits

0x46ab,	// (0x0003c50e) form2_midp_string_pane

0xde47,	// (0x00045caa) form2_midp_text_pane_ParamLimits

0xde47,	// (0x00045caa) form2_midp_text_pane

0x46bd,	// (0x0003c520) form2_midp_time_pane

0x46cd,	// (0x0003c530) input_focus_pane_cp51_ParamLimits

0x46cd,	// (0x0003c530) input_focus_pane_cp51

0x46e5,	// (0x0003c548) form2_midp_label_pane_t1_ParamLimits

0x46e5,	// (0x0003c548) form2_midp_label_pane_t1

0xde68,	// (0x00045ccb) form2_mdip_text_pane_t1_ParamLimits

0xde68,	// (0x00045ccb) form2_mdip_text_pane_t1

0xde8c,	// (0x00045cef) form2_midp_time_pane_t1

0x4733,	// (0x0003c596) form2_midp_gauge_slider_pane_t1

0xca6c,	// (0x000448cf) form2_midp_gauge_slider_pane_t2

0xca7e,	// (0x000448e1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0004795e) form2_midp_gauge_slider_pane_t

0x4769,	// (0x0003c5cc) form2_midp_slider_pane

0x4775,	// (0x0003c5d8) form2_midp_gauge_wait_pane_t1

0x4783,	// (0x0003c5e6) form2_midp_wait_pane_ParamLimits

0x4783,	// (0x0003c5e6) form2_midp_wait_pane

0x2475,	// (0x0003a2d8) list_single_2graphic_pane_cp4_ParamLimits

0x2475,	// (0x0003a2d8) list_single_2graphic_pane_cp4

0x47ae,	// (0x0003c611) list_single_midp_graphic_pane_cp_ParamLimits

0x47ae,	// (0x0003c611) list_single_midp_graphic_pane_cp

0x7784,	// (0x0003f5e7) list_highlight_pane_cp20

0x47d2,	// (0x0003c635) list_single_2graphic_pane_g1_cp4

0x3d6f,	// (0x0003bbd2) list_single_2graphic_pane_g2_cp4

0x47da,	// (0x0003c63d) list_single_2graphic_pane_t1_cp4

0x821f,	// (0x00040082) list_highlight_pane_cp21

0x47e9,	// (0x0003c64c) list_single_midp_graphic_pane_g4_cp

0x47f8,	// (0x0003c65b) list_single_midp_graphic_pane_t1_cp

0xca90,	// (0x000448f3) form2_mdip_string_pane_t1_ParamLimits

0xca90,	// (0x000448f3) form2_mdip_string_pane_t1

0x7784,	// (0x0003f5e7) bg_wml_button_pane_cp2

0x777a,	// (0x0003f5dd) form2_midp_image_pane_g1

0xd924,	// (0x00045787) list_double_large_graphic_pane_g5_ParamLimits

0xd924,	// (0x00045787) list_double_large_graphic_pane_g5

0x0142,	// (0x00037fa5) midp_form_pane_ParamLimits

0x821f,	// (0x00040082) main_apps_wheel_pane_ParamLimits

0xa8a5,	// (0x00042708) popup_preview_window_ParamLimits

0xa8a5,	// (0x00042708) popup_preview_window

0x1dcf,	// (0x00039c32) popup_touch_info_window_ParamLimits

0x1dcf,	// (0x00039c32) popup_touch_info_window

0x1df1,	// (0x00039c54) popup_touch_menu_window_ParamLimits

0x1df1,	// (0x00039c54) popup_touch_menu_window

0x7770,	// (0x0003f5d3) bg_popup_sub_pane_cp6

0x48b2,	// (0x0003c715) list_touch_menu_pane

0x48ba,	// (0x0003c71d) list_single_touch_menu_pane_ParamLimits

0x48ba,	// (0x0003c71d) list_single_touch_menu_pane

0x48d2,	// (0x0003c735) list_single_touch_menu_pane_t1

0x821f,	// (0x00040082) bg_popup_sub_pane_cp7_ParamLimits

0x821f,	// (0x00040082) bg_popup_sub_pane_cp7

0x48e0,	// (0x0003c743) heading_sub_pane

0x48e8,	// (0x0003c74b) list_touch_info_pane_ParamLimits

0x48e8,	// (0x0003c74b) list_touch_info_pane

0x48f7,	// (0x0003c75a) list_single_touch_info_pane_ParamLimits

0x48f7,	// (0x0003c75a) list_single_touch_info_pane

0x4909,	// (0x0003c76c) list_single_touch_info_pane_t1

0x4917,	// (0x0003c77a) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0004796c) list_single_touch_info_pane_t

0xf333,	// (0x00047196) bg_popup_heading_pane_cp

0x4925,	// (0x0003c788) heading_sub_pane_t1

0x23bc,	// (0x0003a21f) bg_popup_preview_window_pane_cp_ParamLimits

0x23bc,	// (0x0003a21f) bg_popup_preview_window_pane_cp

0x48e0,	// (0x0003c743) heading_preview_pane

0x48e8,	// (0x0003c74b) list_preview_pane_ParamLimits

0x48e8,	// (0x0003c74b) list_preview_pane

0x4933,	// (0x0003c796) popup_preview_window_g1

0x48f7,	// (0x0003c75a) list_single_preview_pane_ParamLimits

0x48f7,	// (0x0003c75a) list_single_preview_pane

0x493b,	// (0x0003c79e) list_single_preview_pane_g1

0x4943,	// (0x0003c7a6) list_single_preview_pane_t1

0x4909,	// (0x0003c76c) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00047971) list_single_preview_pane_t

0x4951,	// (0x0003c7b4) bg_popup_heading_pane_cp2_ParamLimits

0x4951,	// (0x0003c7b4) bg_popup_heading_pane_cp2

0x4967,	// (0x0003c7ca) heading_preview_pane_g1

0x496f,	// (0x0003c7d2) heading_preview_pane_t1_ParamLimits

0x496f,	// (0x0003c7d2) heading_preview_pane_t1

0x8272,	// (0x000400d5) soft_indicator_pane_t1_ParamLimits

0x87b5,	// (0x00040618) scroll_pane_ParamLimits

0xbce4,	// (0x00043b47) scroll_sc2_left_pane

0xbced,	// (0x00043b50) scroll_sc2_right_pane

0xbd0c,	// (0x00043b6f) scroll_bg_pane_g1_ParamLimits

0xbd21,	// (0x00043b84) scroll_bg_pane_g2_ParamLimits

0xbd39,	// (0x00043b9c) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00047546) scroll_bg_pane_g_ParamLimits

0xbd0c,	// (0x00043b6f) scroll_handle_pane_g1_ParamLimits

0xbd5b,	// (0x00043bbe) scroll_handle_pane_g2_ParamLimits

0xbd39,	// (0x00043b9c) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0004754d) scroll_handle_pane_g_ParamLimits

0x016a,	// (0x00037fcd) popup_choice_list_window_ParamLimits

0x016a,	// (0x00037fcd) popup_choice_list_window

0x2292,	// (0x0003a0f5) choice_list_pane

0x2314,	// (0x0003a177) cell_toolbar_pane_t1

0x233c,	// (0x0003a19f) toolbar_button_pane_ParamLimits

0x33eb,	// (0x0003b24e) ai_gene_pane_1_t2_ParamLimits

0x33eb,	// (0x0003b24e) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00047770) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00047770) ai_gene_pane_1_t

0x498c,	// (0x0003c7ef) scroll_sc2_left_pane_g1

0x498c,	// (0x0003c7ef) scroll_sc2_right_pane_g1

0x0142,	// (0x00037fa5) bg_popup_sub_pane_cp10

0x4996,	// (0x0003c7f9) list_choice_list_pane

0x49af,	// (0x0003c812) list_single_choice_list_pane_ParamLimits

0x49af,	// (0x0003c812) list_single_choice_list_pane

0x49c7,	// (0x0003c82a) list_single_choice_list_pane_g1

0xbac4,	// (0x00043927) list_single_choice_list_pane_t1_ParamLimits

0xbac4,	// (0x00043927) list_single_choice_list_pane_t1

0x49cf,	// (0x0003c832) choice_list_pane_g1

0x49d7,	// (0x0003c83a) choice_list_pane_t1

0x7770,	// (0x0003f5d3) input_focus_pane_cp11

0xbc42,	// (0x00043aa5) title_pane_stacon_g2_ParamLimits

0xbc42,	// (0x00043aa5) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0004752c) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004752c) title_pane_stacon_g

0xf333,	// (0x00047196) cursor_press_pane

0xa522,	// (0x00042385) popup_fep_hwr_window_ParamLimits

0xa522,	// (0x00042385) popup_fep_hwr_window

0x1973,	// (0x000397d6) popup_fep_vkb_window_ParamLimits

0x1973,	// (0x000397d6) popup_fep_vkb_window

0x49e5,	// (0x0003c848) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0004799a) fep_vkb_side_pane_g_ParamLimits

0x0828,	// (0x0003868b) fep_hwr_candidate_pane_ParamLimits

0x0828,	// (0x0003868b) fep_hwr_candidate_pane

0x0852,	// (0x000386b5) fep_hwr_side_pane_ParamLimits

0x0852,	// (0x000386b5) fep_hwr_side_pane

0x0874,	// (0x000386d7) fep_hwr_top_pane_ParamLimits

0x0874,	// (0x000386d7) fep_hwr_top_pane

0x088c,	// (0x000386ef) fep_hwr_write_pane_ParamLimits

0x088c,	// (0x000386ef) fep_hwr_write_pane

0xfb37,	// (0x0004799a) fep_vkb_side_pane_g

0x49ed,	// (0x0003c850) fep_hwr_top_pane_g1

0x49ff,	// (0x0003c862) fep_hwr_top_pane_g2

0x08c6,	// (0x00038729) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00047976) fep_hwr_top_pane_g

0x08db,	// (0x0003873e) fep_hwr_top_text_pane

0xbe55,	// (0x00043cb8) fep_hwr_top_text_pane_g1

0x4a35,	// (0x0003c898) fep_hwr_top_text_pane_t1

0x09e5,	// (0x00038848) fep_hwr_candidate_pane_g1

0x4c80,	// (0x0003cae3) fep_vkb_keypad_pane_g3_ParamLimits

0x4c80,	// (0x0003cae3) fep_vkb_keypad_pane_g3

0x4cac,	// (0x0003cb0f) fep_vkb_keypad_pane_g4_ParamLimits

0x4cac,	// (0x0003cb0f) fep_vkb_keypad_pane_g4

0x4d23,	// (0x0003cb86) fep_vkb_bottom_pane_g2_ParamLimits

0x4d23,	// (0x0003cb86) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000479a1) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000479a1) fep_vkb_bottom_pane_g

0x498c,	// (0x0003c7ef) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x000479ab) cell_vkb_side_pane_g

0x4dae,	// (0x0003cc11) cell_vkb_side_pane_t1

0x4dbc,	// (0x0003cc1f) cell_vkb_side_pane_t1_copy1

0x498c,	// (0x0003c7ef) bg_fep_vkb_candidate_pane_g2

0x4f00,	// (0x0003cd63) cell_vkb_candidate_pane_ParamLimits

0x4a43,	// (0x0003c8a6) aid_size_cell_vkb_ParamLimits

0x4a43,	// (0x0003c8a6) aid_size_cell_vkb

0x4f00,	// (0x0003cd63) cell_vkb_candidate_pane

0x0a0c,	// (0x0003886f) bg_popup_fep_shadow_pane_g1

0xcb45,	// (0x000449a8) fep_vkb_bottom_pane_ParamLimits

0xcb45,	// (0x000449a8) fep_vkb_bottom_pane

0x4b12,	// (0x0003c975) fep_vkb_candidate_pane_ParamLimits

0x4b12,	// (0x0003c975) fep_vkb_candidate_pane

0xcb71,	// (0x000449d4) fep_vkb_keypad_pane_ParamLimits

0xcb71,	// (0x000449d4) fep_vkb_keypad_pane

0xcb98,	// (0x000449fb) fep_vkb_side_pane_ParamLimits

0xcb98,	// (0x000449fb) fep_vkb_side_pane

0xcbd4,	// (0x00044a37) fep_vkb_top_pane_ParamLimits

0xcbd4,	// (0x00044a37) fep_vkb_top_pane

0x4bd9,	// (0x0003ca3c) fep_vkb_top_pane_g1_ParamLimits

0x4bd9,	// (0x0003ca3c) fep_vkb_top_pane_g1

0x4be8,	// (0x0003ca4b) fep_vkb_top_pane_g2_ParamLimits

0x4be8,	// (0x0003ca4b) fep_vkb_top_pane_g2

0x4bf7,	// (0x0003ca5a) fep_vkb_top_pane_g3_ParamLimits

0x4bf7,	// (0x0003ca5a) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00047991) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00047991) fep_vkb_top_pane_g

0x4c15,	// (0x0003ca78) fep_vkb_top_text_pane_ParamLimits

0x4c15,	// (0x0003ca78) fep_vkb_top_text_pane

0xcc10,	// (0x00044a73) fep_vkb_side_pane_g1_ParamLimits

0xcc10,	// (0x00044a73) fep_vkb_side_pane_g1

0x4c6f,	// (0x0003cad2) grid_vkb_side_pane_ParamLimits

0x4c6f,	// (0x0003cad2) grid_vkb_side_pane

0x0a14,	// (0x00038877) bg_popup_fep_shadow_pane_g2

0x0a1d,	// (0x00038880) bg_popup_fep_shadow_pane_g3

0x0a25,	// (0x00038888) bg_popup_fep_shadow_pane_g4

0x0a2e,	// (0x00038891) bg_popup_fep_shadow_pane_g5

0x0a38,	// (0x0003889b) bg_popup_fep_shadow_pane_g6

0x0a40,	// (0x000388a3) bg_popup_fep_shadow_pane_g7

0xb9e6,	// (0x00043849) bg_popup_fep_shadow_pane_g8

0x4cce,	// (0x0003cb31) grid_vkb_keypad_number_pane_ParamLimits

0x4cce,	// (0x0003cb31) grid_vkb_keypad_number_pane

0x4ce2,	// (0x0003cb45) grid_vkb_keypad_pane_ParamLimits

0x4ce2,	// (0x0003cb45) grid_vkb_keypad_pane

0x4d08,	// (0x0003cb6b) fep_vkb_bottom_pane_g1_ParamLimits

0x4d08,	// (0x0003cb6b) fep_vkb_bottom_pane_g1

0x4d31,	// (0x0003cb94) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4d31,	// (0x0003cb94) grid_vkb_keypad_bottom_left_pane

0x4d46,	// (0x0003cba9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4d46,	// (0x0003cba9) grid_vkb_keypad_bottom_right_pane

0x4d5b,	// (0x0003cbbe) fep_vkb_top_text_pane_g1

0xcc57,	// (0x00044aba) fep_vkb_top_text_pane_t1

0xcc69,	// (0x00044acc) cell_vkb_side_pane_ParamLimits

0xcc69,	// (0x00044acc) cell_vkb_side_pane

0x498c,	// (0x0003c7ef) cell_vkb_side_pane_g1

0x4dca,	// (0x0003cc2d) cell_vkb_keypad_pane_ParamLimits

0x4dca,	// (0x0003cc2d) cell_vkb_keypad_pane

0x4e57,	// (0x0003ccba) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x000479be) bg_popup_fep_shadow_pane_g

0x0a52,	// (0x000388b5) cell_hwr_side_pane_g1

0x0a52,	// (0x000388b5) cell_hwr_side_pane_g2

0x4e61,	// (0x0003ccc4) cell_vkb_keypad_pane_t1

0xcc7f,	// (0x00044ae2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc7f,	// (0x00044ae2) cell_vkb_keypad_bottom_left_pane

0xcc94,	// (0x00044af7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc94,	// (0x00044af7) cell_vkb_keypad_bottom_right_pane

0x498c,	// (0x0003c7ef) cell_vkb_keypad_bottom_left_pane_g1

0x498c,	// (0x0003c7ef) cell_vkb_keypad_bottom_right_pane_g1

0x4ec5,	// (0x0003cd28) cell_vkb_keypad_number_pane_ParamLimits

0x4ec5,	// (0x0003cd28) cell_vkb_keypad_number_pane

0x4ee4,	// (0x0003cd47) cell_vkb_keypad_number_pane_g1

0x4eee,	// (0x0003cd51) cell_vkb_keypad_number_pane_g2

0x4ef7,	// (0x0003cd5a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x000479b0) cell_vkb_keypad_number_pane_g

0x4e61,	// (0x0003ccc4) cell_vkb_keypad_number_pane_t1

0x4f21,	// (0x0003cd84) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x000479d1) cell_hwr_side_pane_g

0x4f3a,	// (0x0003cd9d) cell_hwr_side_pane_t1

0x0a5c,	// (0x000388bf) cell_hwr_side_pane_t1_copy1

0x0a6a,	// (0x000388cd) cell_hwr_candidate_pane_g1

0x0a99,	// (0x000388fc) cell_hwr_candidate_pane_t1

0x498c,	// (0x0003c7ef) cell_vkb_candidate_pane_g2

0x4f7e,	// (0x0003cde1) cell_vkb_candidate_pane_t1

0x07ef,	// (0x00038652) bg_popup_fep_shadow_pane_ParamLimits

0x07ef,	// (0x00038652) bg_popup_fep_shadow_pane

0x08a6,	// (0x00038709) bg_fep_hwr_top_pane_g4

0x4a11,	// (0x0003c874) bg_hwr_side_pane_g1_ParamLimits

0x4a11,	// (0x0003c874) bg_hwr_side_pane_g1

0xb136,	// (0x00042f99) cell_hwr_side_pane_ParamLimits

0xb136,	// (0x00042f99) cell_hwr_side_pane

0x0956,	// (0x000387b9) fep_hwr_write_pane_g1_ParamLimits

0x0956,	// (0x000387b9) fep_hwr_write_pane_g1

0x0963,	// (0x000387c6) fep_hwr_write_pane_g2_ParamLimits

0x0963,	// (0x000387c6) fep_hwr_write_pane_g2

0x0970,	// (0x000387d3) fep_hwr_write_pane_g3_ParamLimits

0x0970,	// (0x000387d3) fep_hwr_write_pane_g3

0xb156,	// (0x00042fb9) fep_hwr_write_pane_g4_ParamLimits

0xb156,	// (0x00042fb9) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0004797d) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0004797d) fep_hwr_write_pane_g

0x08a6,	// (0x00038709) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x08a6,	// (0x00038709) bg_fep_hwr_candidate_pane_g2

0x0993,	// (0x000387f6) cell_hwr_candidate_pane_ParamLimits

0x0993,	// (0x000387f6) cell_hwr_candidate_pane

0x09e5,	// (0x00038848) fep_hwr_candidate_pane_g1_ParamLimits

0x4a71,	// (0x0003c8d4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4a71,	// (0x0003c8d4) bg_popup_fep_shadow_pane_cp2

0x4c07,	// (0x0003ca6a) fep_vkb_top_pane_g4_ParamLimits

0x4c07,	// (0x0003ca6a) fep_vkb_top_pane_g4

0x4c4d,	// (0x0003cab0) fep_vkb_side_pane_g2_ParamLimits

0x4c4d,	// (0x0003cab0) fep_vkb_side_pane_g2

0x9b27,	// (0x0004198a) list_setting_pane_t4_ParamLimits

0x9b27,	// (0x0004198a) list_setting_pane_t4

0x9bbb,	// (0x00041a1e) list_setting_number_pane_t5_ParamLimits

0x9bbb,	// (0x00041a1e) list_setting_number_pane_t5

0x9f10,	// (0x00041d73) list_double_heading_pane_cp2_ParamLimits

0x9f10,	// (0x00041d73) list_double_heading_pane_cp2

0x4f8c,	// (0x0003cdef) list_double_heading_pane_g1_cp2_ParamLimits

0x4f8c,	// (0x0003cdef) list_double_heading_pane_g1_cp2

0x4f98,	// (0x0003cdfb) list_double_heading_pane_g2_cp2_ParamLimits

0x4f98,	// (0x0003cdfb) list_double_heading_pane_g2_cp2

0x4fac,	// (0x0003ce0f) list_double_heading_pane_t1_cp2_ParamLimits

0x4fac,	// (0x0003ce0f) list_double_heading_pane_t1_cp2

0x4fc2,	// (0x0003ce25) list_double_heading_pane_t2_cp2_ParamLimits

0x4fc2,	// (0x0003ce25) list_double_heading_pane_t2_cp2

0x7768,	// (0x0003f5cb) aid_value_unit2

0xed81,	// (0x00046be4) popup_preview_fixed_window

0x8360,	// (0x000401c3) bg_popup_preview_window_pane_cp02

0x4fd4,	// (0x0003ce37) list_preview_fixed_pane

0x501a,	// (0x0003ce7d) list_empty_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_empty_pane_fp

0x501a,	// (0x0003ce7d) list_single_cale_day_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_cale_day_pane_fp

0x501a,	// (0x0003ce7d) list_single_graphic_heading_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_graphic_heading_pane_fp

0x501a,	// (0x0003ce7d) list_single_graphic_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_graphic_pane_fp

0x501a,	// (0x0003ce7d) list_single_heading_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_heading_pane_fp

0x501a,	// (0x0003ce7d) list_single_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_pane_fp

0x5033,	// (0x0003ce96) list_single_pane_fp_g1_ParamLimits

0x5033,	// (0x0003ce96) list_single_pane_fp_g1

0xde9f,	// (0x00045d02) list_single_pane_fp_g2_ParamLimits

0xde9f,	// (0x00045d02) list_single_pane_fp_g2

0xdeab,	// (0x00045d0e) list_single_pane_fp_g3_ParamLimits

0xdeab,	// (0x00045d0e) list_single_pane_fp_g3

0x503f,	// (0x0003cea2) list_single_pane_fp_g4_ParamLimits

0x503f,	// (0x0003cea2) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x000479e4) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x000479e4) list_single_pane_fp_g

0xdebf,	// (0x00045d22) list_single_pane_fp_t1_ParamLimits

0xdebf,	// (0x00045d22) list_single_pane_fp_t1

0xded6,	// (0x00045d39) list_single_graphic_pane_fp_g1_ParamLimits

0xded6,	// (0x00045d39) list_single_graphic_pane_fp_g1

0x5033,	// (0x0003ce96) list_single_graphic_pane_fp_g2_ParamLimits

0x5033,	// (0x0003ce96) list_single_graphic_pane_fp_g2

0xde9f,	// (0x00045d02) list_single_graphic_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d02) list_single_graphic_pane_fp_g3

0xdeab,	// (0x00045d0e) list_single_graphic_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d0e) list_single_graphic_pane_fp_g4

0x503f,	// (0x0003cea2) list_single_graphic_pane_fp_g5_ParamLimits

0x503f,	// (0x0003cea2) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x000479ed) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x000479ed) list_single_graphic_pane_fp_g

0xdee2,	// (0x00045d45) list_single_graphic_pane_fp_t1_ParamLimits

0xdee2,	// (0x00045d45) list_single_graphic_pane_fp_t1

0xded6,	// (0x00045d39) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xded6,	// (0x00045d39) list_single_graphic_heading_pane_fp_g1

0x5033,	// (0x0003ce96) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5033,	// (0x0003ce96) list_single_graphic_heading_pane_fp_g2

0xde9f,	// (0x00045d02) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d02) list_single_graphic_heading_pane_fp_g3

0xdeab,	// (0x00045d0e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d0e) list_single_graphic_heading_pane_fp_g4

0x503f,	// (0x0003cea2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x503f,	// (0x0003cea2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000479ed) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000479ed) list_single_graphic_heading_pane_fp_g

0xdef8,	// (0x00045d5b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdef8,	// (0x00045d5b) list_single_graphic_heading_pane_fp_t1

0xdf0e,	// (0x00045d71) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdf0e,	// (0x00045d71) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x000479f8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x000479f8) list_single_graphic_heading_pane_fp_t

0xdf20,	// (0x00045d83) list_single_cale_day_pane_fp_g1_ParamLimits

0xdf20,	// (0x00045d83) list_single_cale_day_pane_fp_g1

0x504b,	// (0x0003ceae) list_single_cale_day_pane_fp_g2_ParamLimits

0x504b,	// (0x0003ceae) list_single_cale_day_pane_fp_g2

0xdf58,	// (0x00045dbb) list_single_cale_day_pane_fp_g3_ParamLimits

0xdf58,	// (0x00045dbb) list_single_cale_day_pane_fp_g3

0xdf80,	// (0x00045de3) list_single_cale_day_pane_fp_g4_ParamLimits

0xdf80,	// (0x00045de3) list_single_cale_day_pane_fp_g4

0xdfa4,	// (0x00045e07) list_single_cale_day_pane_fp_g5_ParamLimits

0xdfa4,	// (0x00045e07) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x000479fd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x000479fd) list_single_cale_day_pane_fp_g

0xdfc8,	// (0x00045e2b) list_single_cale_day_pane_fp_t1_ParamLimits

0xdfc8,	// (0x00045e2b) list_single_cale_day_pane_fp_t1

0xdfee,	// (0x00045e51) list_single_cale_day_pane_fp_t2_ParamLimits

0xdfee,	// (0x00045e51) list_single_cale_day_pane_fp_t2

0xe007,	// (0x00045e6a) list_single_cale_day_pane_fp_t3_ParamLimits

0xe007,	// (0x00045e6a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00047a08) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00047a08) list_single_cale_day_pane_fp_t

0x5033,	// (0x0003ce96) list_empty_pane_fp_g1_ParamLimits

0x5033,	// (0x0003ce96) list_empty_pane_fp_g1

0xe020,	// (0x00045e83) list_empty_pane_fp_t1

0xe02e,	// (0x00045e91) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00047a0f) list_empty_pane_fp_t

0x5033,	// (0x0003ce96) list_single_heading_pane_fp_g1_ParamLimits

0x5033,	// (0x0003ce96) list_single_heading_pane_fp_g1

0xde9f,	// (0x00045d02) list_single_heading_pane_fp_g2_ParamLimits

0xde9f,	// (0x00045d02) list_single_heading_pane_fp_g2

0xdeab,	// (0x00045d0e) list_single_heading_pane_fp_g3_ParamLimits

0xdeab,	// (0x00045d0e) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00047a14) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00047a14) list_single_heading_pane_fp_g

0xe03c,	// (0x00045e9f) list_single_heading_pane_fp_t1_ParamLimits

0xe03c,	// (0x00045e9f) list_single_heading_pane_fp_t1

0xe04e,	// (0x00045eb1) list_single_heading_pane_fp_t2_ParamLimits

0xe04e,	// (0x00045eb1) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00047a1b) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00047a1b) list_single_heading_pane_fp_t

0xbad9,	// (0x0004393c) aid_size_cell_fast

0x8335,	// (0x00040198) soft_indicator_pane_cp1_t1

0xbb16,	// (0x00043979) cell_app_pane_cp2_ParamLimits

0xbb16,	// (0x00043979) cell_app_pane_cp2

0x0811,	// (0x00038674) fep_hwr_candidate_drop_down_list_pane

0x09ff,	// (0x00038862) fep_hwr_candidate_pane_g3_ParamLimits

0x09ff,	// (0x00038862) fep_hwr_candidate_pane_g3

0xcb26,	// (0x00044989) fep_hwr_candidate_pane_g4_ParamLimits

0xcb26,	// (0x00044989) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0004798a) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0004798a) fep_hwr_candidate_pane_g

0x4b01,	// (0x0003c964) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4b01,	// (0x0003c964) fep_vkb_candidate_drop_down_list_pane

0x4f29,	// (0x0003cd8c) fep_vkb_candidate_pane_g3

0x4f31,	// (0x0003cd94) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x000479b7) fep_vkb_candidate_pane_g

0x0a6a,	// (0x000388cd) cell_hwr_candidate_pane_g1_ParamLimits

0x0a78,	// (0x000388db) cell_hwr_candidate_pane_g3_ParamLimits

0x0a78,	// (0x000388db) cell_hwr_candidate_pane_g3

0x5800,	// (0x0003d663) cell_hwr_candidate_pane_g4_ParamLimits

0x5800,	// (0x0003d663) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x000479d6) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x000479d6) cell_hwr_candidate_pane_g

0x4f48,	// (0x0003cdab) cell_vkb_candidate_pane_g3_ParamLimits

0x4f48,	// (0x0003cdab) cell_vkb_candidate_pane_g3

0x4f63,	// (0x0003cdc6) cell_vkb_candidate_pane_g4_ParamLimits

0x4f63,	// (0x0003cdc6) cell_vkb_candidate_pane_g4

0x5057,	// (0x0003ceba) cell_app_pane_cp2_g1_ParamLimits

0x5057,	// (0x0003ceba) cell_app_pane_cp2_g1

0x5075,	// (0x0003ced8) cell_app_pane_cp2_g2_ParamLimits

0x5075,	// (0x0003ced8) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00047a20) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00047a20) cell_app_pane_cp2_g

0x5081,	// (0x0003cee4) cell_app_pane_cp2_t1_ParamLimits

0x5081,	// (0x0003cee4) cell_app_pane_cp2_t1

0xb973,	// (0x000437d6) grid_highlight_pane_cp1_ParamLimits

0xb973,	// (0x000437d6) grid_highlight_pane_cp1

0x0ab7,	// (0x0003891a) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ab7,	// (0x0003891a) cell_hwr_candidate_pane_cp1

0x0a6a,	// (0x000388cd) fep_hwr_candidate_drop_down_list_pane_g1

0x0adb,	// (0x0003893e) fep_hwr_candidate_drop_down_list_pane_g2

0x0ae8,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00047a25) fep_hwr_candidate_drop_down_list_pane_g

0x0af5,	// (0x00038958) fep_hwr_candidate_drop_down_list_scroll_pane

0x0afe,	// (0x00038961) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0afe,	// (0x00038961) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0b0b,	// (0x0003896e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0b0b,	// (0x0003896e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0b18,	// (0x0003897b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0b18,	// (0x0003897b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0b25,	// (0x00038988) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0b25,	// (0x00038988) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0b40,	// (0x000389a3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0b40,	// (0x000389a3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0b5b,	// (0x000389be) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0b5b,	// (0x000389be) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0b76,	// (0x000389d9) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0b76,	// (0x000389d9) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0b91,	// (0x000389f4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0b91,	// (0x000389f4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00047a2c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00047a2c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5093,	// (0x0003cef6) cell_vkb_candidate_pane_cp1_ParamLimits

0x5093,	// (0x0003cef6) cell_vkb_candidate_pane_cp1

0x4c07,	// (0x0003ca6a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4c07,	// (0x0003ca6a) fep_vkb_candidate_drop_down_list_pane_g1

0x50b9,	// (0x0003cf1c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x50b9,	// (0x0003cf1c) fep_vkb_candidate_drop_down_list_pane_g2

0x50c6,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x50c6,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00047a3d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00047a3d) fep_vkb_candidate_drop_down_list_pane_g

0x50d3,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x50d3,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_scroll_pane

0x50e0,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x50e0,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x50ed,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x50ed,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x50f9,	// (0x0003cf5c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x50f9,	// (0x0003cf5c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5105,	// (0x0003cf68) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5105,	// (0x0003cf68) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5126,	// (0x0003cf89) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5126,	// (0x0003cf89) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5147,	// (0x0003cfaa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5147,	// (0x0003cfaa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5168,	// (0x0003cfcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5168,	// (0x0003cfcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5189,	// (0x0003cfec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5189,	// (0x0003cfec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00047a44) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00047a44) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x93db,	// (0x0004123e) title_pane_g1_ParamLimits

0x93ee,	// (0x00041251) title_pane_g2_ParamLimits

0xf54e,	// (0x000473b1) title_pane_g_ParamLimits

0xbe45,	// (0x00043ca8) aid_call2_pane

0xbe4d,	// (0x00043cb0) aid_call_pane

0xbe55,	// (0x00043cb8) popup_clock_analogue_window_g1

0xbe55,	// (0x00043cb8) popup_clock_analogue_window_g2

0xf04b,	// (0x00046eae) popup_clock_analogue_window_g3

0xf054,	// (0x00046eb7) popup_clock_analogue_window_g4

0x777a,	// (0x0003f5dd) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0004755b) popup_clock_analogue_window_g

0xf05c,	// (0x00046ebf) popup_clock_analogue_window_t1

0xf06a,	// (0x00046ecd) clock_digital_number_pane_ParamLimits

0xf06a,	// (0x00046ecd) clock_digital_number_pane

0xf076,	// (0x00046ed9) clock_digital_number_pane_cp02_ParamLimits

0xf076,	// (0x00046ed9) clock_digital_number_pane_cp02

0xf082,	// (0x00046ee5) clock_digital_number_pane_cp03_ParamLimits

0xf082,	// (0x00046ee5) clock_digital_number_pane_cp03

0xf08e,	// (0x00046ef1) clock_digital_number_pane_cp04_ParamLimits

0xf08e,	// (0x00046ef1) clock_digital_number_pane_cp04

0xf09a,	// (0x00046efd) clock_digital_separator_pane_ParamLimits

0xf09a,	// (0x00046efd) clock_digital_separator_pane

0xf0a6,	// (0x00046f09) popup_clock_digital_window_t1_ParamLimits

0xf0a6,	// (0x00046f09) popup_clock_digital_window_t1

0x777a,	// (0x0003f5dd) clock_digital_number_pane_g1

0x777a,	// (0x0003f5dd) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00047566) clock_digital_number_pane_g

0x777a,	// (0x0003f5dd) clock_digital_separator_pane_g1

0x777a,	// (0x0003f5dd) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00047566) clock_digital_separator_pane_g

0xab8d,	// (0x000429f0) aid_fill_nsta_ParamLimits

0xacc5,	// (0x00042b28) indicator_nsta_pane_ParamLimits

0x211f,	// (0x00039f82) popup_clock_analogue_window

0x211f,	// (0x00039f82) popup_clock_digital_window

0xc943,	// (0x000447a6) grid_indicator_nsta_pane_ParamLimits

0x43bf,	// (0x0003c222) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0004790a) clock_nsta_pane_t

0xefac,	// (0x00046e0f) aid_size_max_handle

0x9e83,	// (0x00041ce6) aid_size_min_handle

0xf333,	// (0x00047196) editor_scroll_pane

0x51a4,	// (0x0003d007) ex_editor_pane

0xba9f,	// (0x00043902) scroll_pane_cp13

0x87e1,	// (0x00040644) scroll_pane_cp14

0xbe84,	// (0x00043ce7) scroll_pane_cp36

0x9f23,	// (0x00041d86) list_single_graphic_hl_pane_cp2_ParamLimits

0x9f23,	// (0x00041d86) list_single_graphic_hl_pane_cp2

0xc7cb,	// (0x0004462e) list_single_graphic_hl_pane_ParamLimits

0xc7cb,	// (0x0004462e) list_single_graphic_hl_pane

0xe064,	// (0x00045ec7) aid_size_min_hl_cp1

0x51ac,	// (0x0003d00f) list_highlight_pane_cp34_ParamLimits

0x51ac,	// (0x0003d00f) list_highlight_pane_cp34

0x51bd,	// (0x0003d020) list_single_graphic_hl_pane_g1_ParamLimits

0x51bd,	// (0x0003d020) list_single_graphic_hl_pane_g1

0xb16b,	// (0x00042fce) list_single_graphic_hl_pane_g2_ParamLimits

0xb16b,	// (0x00042fce) list_single_graphic_hl_pane_g2

0xb16b,	// (0x00042fce) list_single_graphic_hl_pane_g3_ParamLimits

0xb16b,	// (0x00042fce) list_single_graphic_hl_pane_g3

0xe06d,	// (0x00045ed0) list_single_graphic_hl_pane_g4_ParamLimits

0xe06d,	// (0x00045ed0) list_single_graphic_hl_pane_g4

0xb177,	// (0x00042fda) list_single_graphic_hl_pane_g5_ParamLimits

0xb177,	// (0x00042fda) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00047a55) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00047a55) list_single_graphic_hl_pane_g

0xb18b,	// (0x00042fee) list_single_graphic_hl_pane_t1_ParamLimits

0xb18b,	// (0x00042fee) list_single_graphic_hl_pane_t1

0x51ca,	// (0x0003d02d) aid_size_min_hl_cp2

0x51d3,	// (0x0003d036) list_highlight_pane_cp34_cp2_ParamLimits

0x51d3,	// (0x0003d036) list_highlight_pane_cp34_cp2

0x51bd,	// (0x0003d020) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x51bd,	// (0x0003d020) list_single_graphic_hl_pane_g1_cp2

0x51e0,	// (0x0003d043) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x51e0,	// (0x0003d043) list_single_graphic_hl_pane_g2_cp2

0xccaf,	// (0x00044b12) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xccaf,	// (0x00044b12) list_single_graphic_hl_pane_g3_cp2

0xccbd,	// (0x00044b20) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xccbd,	// (0x00044b20) list_single_graphic_hl_pane_g4_cp2

0x51fa,	// (0x0003d05d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x51fa,	// (0x0003d05d) list_single_graphic_hl_pane_g5_cp2

0xa2f0,	// (0x00042153) control_pane_g4_ParamLimits

0xa2f0,	// (0x00042153) control_pane_g4

0x0142,	// (0x00037fa5) bg_popup_sub_pane_cp10_ParamLimits

0x4996,	// (0x0003c7f9) list_choice_list_pane_ParamLimits

0x49a5,	// (0x0003c808) scroll_pane_cp23

0x8360,	// (0x000401c3) bg_popup_preview_window_pane_cp02_ParamLimits

0x4fd4,	// (0x0003ce37) list_preview_fixed_pane_ParamLimits

0x4fea,	// (0x0003ce4d) list_preview_fixed_pane_cp_ParamLimits

0x4fea,	// (0x0003ce4d) list_preview_fixed_pane_cp

0x4ff6,	// (0x0003ce59) popup_preview_fixed_window_g1_ParamLimits

0x4ff6,	// (0x0003ce59) popup_preview_fixed_window_g1

0x5002,	// (0x0003ce65) popup_preview_fixed_window_g2_ParamLimits

0x5002,	// (0x0003ce65) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x000479dd) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x000479dd) popup_preview_fixed_window_g

0xef1e,	// (0x00046d81) aid_navi_side_left_pane_ParamLimits

0xef33,	// (0x00046d96) aid_navi_side_right_pane_ParamLimits

0xef4b,	// (0x00046dae) navi_icon_pane_stacon_ParamLimits

0xef5f,	// (0x00046dc2) navi_navi_pane_stacon_ParamLimits

0xef4b,	// (0x00046dae) navi_text_pane_stacon_ParamLimits

0x7770,	// (0x0003f5d3) main_text_info_pane

0x5224,	// (0x0003d087) listscroll_text_info_pane

0x522c,	// (0x0003d08f) list_text_info_pane_ParamLimits

0x522c,	// (0x0003d08f) list_text_info_pane

0x523b,	// (0x0003d09e) scroll_pane_cp24_ParamLimits

0x523b,	// (0x0003d09e) scroll_pane_cp24

0xccc9,	// (0x00044b2c) list_text_info_pane_t1_ParamLimits

0xccc9,	// (0x00044b2c) list_text_info_pane_t1

0xa486,	// (0x000422e9) popup_fast_swap2_window_ParamLimits

0xa486,	// (0x000422e9) popup_fast_swap2_window

0x527e,	// (0x0003d0e1) aid_size_cell_fast2

0x7770,	// (0x0003f5d3) bg_popup_window_pane_cp17

0x277c,	// (0x0003a5df) heading_pane_cp2

0x8566,	// (0x000403c9) listscroll_fast2_pane

0x5288,	// (0x0003d0eb) grid_fast2_pane

0x5292,	// (0x0003d0f5) listscroll_fast2_pane_g1

0x529c,	// (0x0003d0ff) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00047a60) listscroll_fast2_pane_g

0xba9f,	// (0x00043902) scroll_pane_cp26

0x52a6,	// (0x0003d109) cell_fast2_pane_ParamLimits

0x52a6,	// (0x0003d109) cell_fast2_pane

0x52bd,	// (0x0003d120) cell_fast2_pane_g1

0x52c6,	// (0x0003d129) cell_fast2_pane_g2

0x52cf,	// (0x0003d132) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00047a65) cell_fast2_pane_g

0x85a8,	// (0x0004040b) grid_highlight_pane_cp9

0x85bd,	// (0x00040420) main_eswt_pane_ParamLimits

0x85bd,	// (0x00040420) main_eswt_pane

0x5250,	// (0x0003d0b3) list_single_text_info_pane

0x52d7,	// (0x0003d13a) eswt_ctrl_button_pane

0x52d7,	// (0x0003d13a) eswt_ctrl_canvas_pane

0x52df,	// (0x0003d142) eswt_ctrl_combo_pane

0x52d7,	// (0x0003d13a) eswt_ctrl_default_pane

0x52d7,	// (0x0003d13a) eswt_ctrl_label_pane

0x52e7,	// (0x0003d14a) eswt_ctrl_wait_pane

0x52ef,	// (0x0003d152) eswt_shell_pane

0x7770,	// (0x0003f5d3) listscroll_eswt_app_pane

0x530f,	// (0x0003d172) popup_eswt_tasktip_window_ParamLimits

0x530f,	// (0x0003d172) popup_eswt_tasktip_window

0x23bc,	// (0x0003a21f) bg_popup_window_pane_cp18

0x5320,	// (0x0003d183) eswt_control_pane_g1_ParamLimits

0x5320,	// (0x0003d183) eswt_control_pane_g1

0x532d,	// (0x0003d190) eswt_control_pane_g2_ParamLimits

0x532d,	// (0x0003d190) eswt_control_pane_g2

0x533a,	// (0x0003d19d) eswt_control_pane_g3_ParamLimits

0x533a,	// (0x0003d19d) eswt_control_pane_g3

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_ParamLimits

0x5347,	// (0x0003d1aa) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00047a6c) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00047a6c) eswt_control_pane_g

0xb973,	// (0x000437d6) bg_button_pane_ParamLimits

0xb973,	// (0x000437d6) bg_button_pane

0x85bd,	// (0x00040420) common_borders_pane_copy2_ParamLimits

0x85bd,	// (0x00040420) common_borders_pane_copy2

0x5354,	// (0x0003d1b7) control_button_pane_g1_ParamLimits

0x5354,	// (0x0003d1b7) control_button_pane_g1

0x5360,	// (0x0003d1c3) control_button_pane_g2_ParamLimits

0x5360,	// (0x0003d1c3) control_button_pane_g2

0x536c,	// (0x0003d1cf) control_button_pane_g3_ParamLimits

0x536c,	// (0x0003d1cf) control_button_pane_g3

0x0002,

0xfc12,	// (0x00047a75) control_button_pane_g_ParamLimits

0xfc12,	// (0x00047a75) control_button_pane_g

0x5380,	// (0x0003d1e3) control_button_pane_t1

0x538e,	// (0x0003d1f1) control_button_pane_t2

0x0001,

0xfc19,	// (0x00047a7c) control_button_pane_t

0x2348,	// (0x0003a1ab) bg_button_pane_g1

0x2358,	// (0x0003a1bb) bg_button_pane_g2

0x2350,	// (0x0003a1b3) bg_button_pane_g3

0x2368,	// (0x0003a1cb) bg_button_pane_g4

0x2360,	// (0x0003a1c3) bg_button_pane_g5

0x2370,	// (0x0003a1d3) bg_button_pane_g6

0x2378,	// (0x0003a1db) bg_button_pane_g7

0x2388,	// (0x0003a1eb) bg_button_pane_g8

0x2380,	// (0x0003a1e3) bg_button_pane_g9

0x0008,

0xf861,	// (0x000476c4) bg_button_pane_g

0x4951,	// (0x0003c7b4) common_borders_pane_ParamLimits

0x4951,	// (0x0003c7b4) common_borders_pane

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy1_ParamLimits

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy1

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy1_ParamLimits

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy1

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy1_ParamLimits

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy1

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy1_ParamLimits

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy1

0x498c,	// (0x0003c7ef) bg_eswt_ctrl_canvas_pane_g1

0x4951,	// (0x0003c7b4) common_borders_pane_cp2_ParamLimits

0x4951,	// (0x0003c7b4) common_borders_pane_cp2

0x4951,	// (0x0003c7b4) common_borders_pane_cp3_ParamLimits

0x4951,	// (0x0003c7b4) common_borders_pane_cp3

0x539c,	// (0x0003d1ff) separator_horizontal_pane

0x53a4,	// (0x0003d207) separator_vertical_pane

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy2_ParamLimits

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy2

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy2_ParamLimits

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy2

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy2_ParamLimits

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy2

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy2_ParamLimits

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy2

0x7770,	// (0x0003f5d3) common_borders_pane_cp4

0x53ad,	// (0x0003d210) separator_horizontal_pane_g1

0x53b6,	// (0x0003d219) separator_horizontal_pane_g2

0x53bf,	// (0x0003d222) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00047a81) separator_horizontal_pane_g

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy3_ParamLimits

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy3

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy3_ParamLimits

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy3

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy3_ParamLimits

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy3

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy3_ParamLimits

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy3

0x7770,	// (0x0003f5d3) common_borders_pane_cp5

0x53c8,	// (0x0003d22b) separator_vertical_pane_g1

0x53d1,	// (0x0003d234) separator_vertical_pane_g2

0x53da,	// (0x0003d23d) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00047a88) separator_vertical_pane_g

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy4_ParamLimits

0x5320,	// (0x0003d183) eswt_control_pane_g1_copy4

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy4_ParamLimits

0x532d,	// (0x0003d190) eswt_control_pane_g2_copy4

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy4_ParamLimits

0x533a,	// (0x0003d19d) eswt_control_pane_g3_copy4

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy4_ParamLimits

0x5347,	// (0x0003d1aa) eswt_control_pane_g4_copy4

0xcceb,	// (0x00044b4e) eswt_ctrl_combo_button_pane

0xccf3,	// (0x00044b56) eswt_ctrl_input_pane

0xccfb,	// (0x00044b5e) popup_choice_list_window_cp70

0xcd03,	// (0x00044b66) eswt_ctrl_input_pane_t1

0x7770,	// (0x0003f5d3) input_focus_pane_cp70

0x4951,	// (0x0003c7b4) bg_button_pane_cp70_ParamLimits

0x4951,	// (0x0003c7b4) bg_button_pane_cp70

0xcd11,	// (0x00044b74) eswt_ctrl_combo_button_pane_g1

0x5411,	// (0x0003d274) wait_bar_pane_cp70

0x23bc,	// (0x0003a21f) bg_popup_window_pane_cp70_ParamLimits

0x23bc,	// (0x0003a21f) bg_popup_window_pane_cp70

0x5419,	// (0x0003d27c) popup_eswt_tasktip_window_t1

0x542f,	// (0x0003d292) wait_bar_pane_cp71_ParamLimits

0x542f,	// (0x0003d292) wait_bar_pane_cp71

0x543b,	// (0x0003d29e) grid_eswt_app_pane

0xbce4,	// (0x00043b47) scroll_pane_cp70

0xcd19,	// (0x00044b7c) cell_eswt_app_pane_ParamLimits

0xcd19,	// (0x00044b7c) cell_eswt_app_pane

0xcd4b,	// (0x00044bae) cell_eswt_app_pane_g1_ParamLimits

0xcd4b,	// (0x00044bae) cell_eswt_app_pane_g1

0xcd7a,	// (0x00044bdd) cell_eswt_app_pane_g2_ParamLimits

0xcd7a,	// (0x00044bdd) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00047a8f) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00047a8f) cell_eswt_app_pane_g

0xcda3,	// (0x00044c06) cell_eswt_app_pane_t1_ParamLimits

0xcda3,	// (0x00044c06) cell_eswt_app_pane_t1

0x5500,	// (0x0003d363) grid_highlight_pane_cp70_ParamLimits

0x5500,	// (0x0003d363) grid_highlight_pane_cp70

0xc1bd,	// (0x00044020) set_content_pane_g1

0xa286,	// (0x000420e9) status_small_volume_pane

0x0be2,	// (0x00038a45) status_small_volume_pane_g1

0x0bea,	// (0x00038a4d) volume_small2_pane

0x0bf3,	// (0x00038a56) volume_small2_pane_g1

0x0bfc,	// (0x00038a5f) volume_small2_pane_g2

0x0c05,	// (0x00038a68) volume_small2_pane_g3

0x0c0e,	// (0x00038a71) volume_small2_pane_g4

0x0c17,	// (0x00038a7a) volume_small2_pane_g5

0x0c20,	// (0x00038a83) volume_small2_pane_g6

0x0c29,	// (0x00038a8c) volume_small2_pane_g7

0x0c32,	// (0x00038a95) volume_small2_pane_g8

0x0c3b,	// (0x00038a9e) volume_small2_pane_g9

0x0c44,	// (0x00038aa7) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00047a94) volume_small2_pane_g

0x4d5b,	// (0x0003cbbe) fep_vkb_top_text_pane_g1_ParamLimits

0xcc57,	// (0x00044aba) fep_vkb_top_text_pane_t1_ParamLimits

0x500e,	// (0x0003ce71) popup_preview_fixed_window_g3_ParamLimits

0x500e,	// (0x0003ce71) popup_preview_fixed_window_g3

0xab20,	// (0x00042983) popup_toolbar_trans_pane

0xc61b,	// (0x0004447e) aid_height_set_list_ParamLimits

0x3711,	// (0x0003b574) aid_size_parent_ParamLimits

0x0142,	// (0x00037fa5) list_highlight_pane_cp2_ParamLimits

0xc1bd,	// (0x00044020) set_content_pane_g1_ParamLimits

0xc7df,	// (0x00044642) list_single_image_pane_ParamLimits

0xc7df,	// (0x00044642) list_single_image_pane

0xcdd5,	// (0x00044c38) aid_size_cell_image_ParamLimits

0xcdd5,	// (0x00044c38) aid_size_cell_image

0xcde2,	// (0x00044c45) grid_single_image_pane_ParamLimits

0xcde2,	// (0x00044c45) grid_single_image_pane

0xb981,	// (0x000437e4) list_single_image_pane_g1_ParamLimits

0xb981,	// (0x000437e4) list_single_image_pane_g1

0xb98d,	// (0x000437f0) list_single_image_pane_g2_ParamLimits

0xb98d,	// (0x000437f0) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00047aa9) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00047aa9) list_single_image_pane_g

0x5527,	// (0x0003d38a) list_single_image_pane_t1_ParamLimits

0x5527,	// (0x0003d38a) list_single_image_pane_t1

0xcdf0,	// (0x00044c53) cell_image_list_pane_ParamLimits

0xcdf0,	// (0x00044c53) cell_image_list_pane

0xce04,	// (0x00044c67) cell_image_list_pane_g1

0xce0d,	// (0x00044c70) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00047aae) cell_image_list_pane_g

0x5565,	// (0x0003d3c8) aid_size_cell_tb_trans_pane

0xb973,	// (0x000437d6) bg_tb_trans_pane

0x5577,	// (0x0003d3da) grid_tb_trans_pane

0x2348,	// (0x0003a1ab) bg_tb_trans_pane_g1

0x2358,	// (0x0003a1bb) bg_tb_trans_pane_g2

0x2350,	// (0x0003a1b3) bg_tb_trans_pane_g3

0x2368,	// (0x0003a1cb) bg_tb_trans_pane_g4

0x2360,	// (0x0003a1c3) bg_tb_trans_pane_g5

0x2388,	// (0x0003a1eb) bg_tb_trans_pane_g6

0x2380,	// (0x0003a1e3) bg_tb_trans_pane_g7

0x2370,	// (0x0003a1d3) bg_tb_trans_pane_g8

0x2378,	// (0x0003a1db) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00047ab3) bg_tb_trans_pane_g

0x558b,	// (0x0003d3ee) cell_toolbar_trans_pane_ParamLimits

0x558b,	// (0x0003d3ee) cell_toolbar_trans_pane

0x498c,	// (0x0003c7ef) cell_toolbar_trans_pane_g1

0xca2f,	// (0x00044892) list_form2_midp_pane_t1

0xca3d,	// (0x000448a0) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00047950) list_form2_midp_pane_t

0x45cc,	// (0x0003c42f) scroll_pane_cp51_ParamLimits

0x4793,	// (0x0003c5f6) form2_midp_wait_pane_g1

0x479c,	// (0x0003c5ff) form2_midp_wait_pane_g2

0x47a5,	// (0x0003c608) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00047965) form2_midp_wait_pane_g

0x821f,	// (0x00040082) list_highlight_pane_cp21_ParamLimits

0x47e9,	// (0x0003c64c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x47f8,	// (0x0003c65b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdb51,	// (0x000459b4) list_single_2graphic_im_pane_ParamLimits

0xdb51,	// (0x000459b4) list_single_2graphic_im_pane

0xce16,	// (0x00044c79) list_single_2graphic_im_pane_g1_ParamLimits

0xce16,	// (0x00044c79) list_single_2graphic_im_pane_g1

0xce27,	// (0x00044c8a) list_single_2graphic_im_pane_g2_ParamLimits

0xce27,	// (0x00044c8a) list_single_2graphic_im_pane_g2

0xce33,	// (0x00044c96) list_single_2graphic_im_pane_g3_ParamLimits

0xce33,	// (0x00044c96) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x00047ac6) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x00047ac6) list_single_2graphic_im_pane_g

0xce47,	// (0x00044caa) list_single_2graphic_im_pane_t1_ParamLimits

0xce47,	// (0x00044caa) list_single_2graphic_im_pane_t1

0x501a,	// (0x0003ce7d) list_single_graphic_2heading_pane_fp_ParamLimits

0x501a,	// (0x0003ce7d) list_single_graphic_2heading_pane_fp

0xded6,	// (0x00045d39) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xded6,	// (0x00045d39) list_single_graphic_2heading_pane_fp_g1

0x5033,	// (0x0003ce96) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5033,	// (0x0003ce96) list_single_graphic_2heading_pane_fp_g2

0xde9f,	// (0x00045d02) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xde9f,	// (0x00045d02) list_single_graphic_2heading_pane_fp_g3

0xdeab,	// (0x00045d0e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xdeab,	// (0x00045d0e) list_single_graphic_2heading_pane_fp_g4

0x503f,	// (0x0003cea2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x503f,	// (0x0003cea2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000479ed) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000479ed) list_single_graphic_2heading_pane_fp_g

0xe079,	// (0x00045edc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe079,	// (0x00045edc) list_single_graphic_2heading_pane_fp_t1

0xdf0e,	// (0x00045d71) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdf0e,	// (0x00045d71) list_single_graphic_2heading_pane_fp_t2

0xe08f,	// (0x00045ef2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe08f,	// (0x00045ef2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00047acf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00047acf) list_single_graphic_2heading_pane_fp_t

0x4a1d,	// (0x0003c880) fep_hwr_write_pane_g5_ParamLimits

0x4a1d,	// (0x0003c880) fep_hwr_write_pane_g5

0x4a29,	// (0x0003c88c) fep_hwr_write_pane_g6_ParamLimits

0x4a29,	// (0x0003c88c) fep_hwr_write_pane_g6

0x52ef,	// (0x0003d152) eswt_shell_pane_ParamLimits

0x23bc,	// (0x0003a21f) bg_popup_window_pane_cp18_ParamLimits

0x3657,	// (0x0003b4ba) heading_pane_cp70

0x5419,	// (0x0003d27c) popup_eswt_tasktip_window_t1_ParamLimits

0xabea,	// (0x00042a4d) aid_touch_tab_arrow_left

0xac00,	// (0x00042a63) aid_touch_tab_arrow_right

0x778e,	// (0x0003f5f1) title_pane_g3_ParamLimits

0x778e,	// (0x0003f5f1) title_pane_g3

0xb932,	// (0x00043795) set_value_pane_g1

0xab20,	// (0x00042983) popup_toolbar_trans_pane_ParamLimits

0x5565,	// (0x0003d3c8) aid_size_cell_tb_trans_pane_ParamLimits

0xb973,	// (0x000437d6) bg_tb_trans_pane_ParamLimits

0x5577,	// (0x0003d3da) grid_tb_trans_pane_ParamLimits

0x8360,	// (0x000401c3) cont_note_pane_ParamLimits

0x8360,	// (0x000401c3) cont_note_pane

0x85bd,	// (0x00040420) cont_snote2_single_text_pane_ParamLimits

0x85bd,	// (0x00040420) cont_snote2_single_text_pane

0x85bd,	// (0x00040420) cont_snote2_single_graphic_pane_ParamLimits

0x85bd,	// (0x00040420) cont_snote2_single_graphic_pane

0x2998,	// (0x0003a7fb) cont_note_wait_pane_ParamLimits

0x2998,	// (0x0003a7fb) cont_note_wait_pane

0x2998,	// (0x0003a7fb) cont_note_image_pane_ParamLimits

0x2998,	// (0x0003a7fb) cont_note_image_pane

0x561f,	// (0x0003d482) popup_note2_window_g1_ParamLimits

0x561f,	// (0x0003d482) popup_note2_window_g1

0x5650,	// (0x0003d4b3) popup_note2_window_t1_ParamLimits

0x5650,	// (0x0003d4b3) popup_note2_window_t1

0x5695,	// (0x0003d4f8) popup_note2_window_t2_ParamLimits

0x5695,	// (0x0003d4f8) popup_note2_window_t2

0x56da,	// (0x0003d53d) popup_note2_window_t3_ParamLimits

0x56da,	// (0x0003d53d) popup_note2_window_t3

0x571f,	// (0x0003d582) popup_note2_window_t4_ParamLimits

0x571f,	// (0x0003d582) popup_note2_window_t4

0x83e4,	// (0x00040247) popup_note2_window_t5_ParamLimits

0x83e4,	// (0x00040247) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00047adb) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00047adb) popup_note2_window_t

0x574e,	// (0x0003d5b1) popup_note2_image_window_g1_ParamLimits

0x574e,	// (0x0003d5b1) popup_note2_image_window_g1

0x575a,	// (0x0003d5bd) popup_note2_image_window_g2_ParamLimits

0x575a,	// (0x0003d5bd) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00047ae6) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00047ae6) popup_note2_image_window_g

0x576c,	// (0x0003d5cf) popup_note2_image_window_t1_ParamLimits

0x576c,	// (0x0003d5cf) popup_note2_image_window_t1

0x5784,	// (0x0003d5e7) popup_note2_image_window_t2_ParamLimits

0x5784,	// (0x0003d5e7) popup_note2_image_window_t2

0x579c,	// (0x0003d5ff) popup_note2_image_window_t3_ParamLimits

0x579c,	// (0x0003d5ff) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00047aeb) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00047aeb) popup_note2_image_window_t

0x29a6,	// (0x0003a809) popup_note2_wait_window_g1_ParamLimits

0x29a6,	// (0x0003a809) popup_note2_wait_window_g1

0x57b8,	// (0x0003d61b) popup_note2_wait_window_g2_ParamLimits

0x57b8,	// (0x0003d61b) popup_note2_wait_window_g2

0x29be,	// (0x0003a821) popup_note2_wait_window_g3_ParamLimits

0x29be,	// (0x0003a821) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00047af2) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00047af2) popup_note2_wait_window_g

0x57c4,	// (0x0003d627) popup_note2_wait_window_t1_ParamLimits

0x57c4,	// (0x0003d627) popup_note2_wait_window_t1

0x57e2,	// (0x0003d645) popup_note2_wait_window_t2_ParamLimits

0x57e2,	// (0x0003d645) popup_note2_wait_window_t2

0x5821,	// (0x0003d684) popup_note2_wait_window_t3_ParamLimits

0x5821,	// (0x0003d684) popup_note2_wait_window_t3

0x5833,	// (0x0003d696) popup_note2_wait_window_t4_ParamLimits

0x5833,	// (0x0003d696) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00047af9) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00047af9) popup_note2_wait_window_t

0x5845,	// (0x0003d6a8) wait_bar2_pane_ParamLimits

0x5845,	// (0x0003d6a8) wait_bar2_pane

0x585d,	// (0x0003d6c0) popup_snote2_single_text_window_g1_ParamLimits

0x585d,	// (0x0003d6c0) popup_snote2_single_text_window_g1

0x5885,	// (0x0003d6e8) popup_snote2_single_text_window_t1_ParamLimits

0x5885,	// (0x0003d6e8) popup_snote2_single_text_window_t1

0x58d1,	// (0x0003d734) popup_snote2_single_text_window_t2_ParamLimits

0x58d1,	// (0x0003d734) popup_snote2_single_text_window_t2

0x591d,	// (0x0003d780) popup_snote2_single_text_window_t3_ParamLimits

0x591d,	// (0x0003d780) popup_snote2_single_text_window_t3

0x595e,	// (0x0003d7c1) popup_snote2_single_text_window_t4_ParamLimits

0x595e,	// (0x0003d7c1) popup_snote2_single_text_window_t4

0x5994,	// (0x0003d7f7) popup_snote2_single_text_window_t5_ParamLimits

0x5994,	// (0x0003d7f7) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00047b02) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00047b02) popup_snote2_single_text_window_t

0x59bf,	// (0x0003d822) popup_snote2_single_graphic_window_g1_ParamLimits

0x59bf,	// (0x0003d822) popup_snote2_single_graphic_window_g1

0x59e7,	// (0x0003d84a) popup_snote2_single_graphic_window_g2_ParamLimits

0x59e7,	// (0x0003d84a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00047b0d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00047b0d) popup_snote2_single_graphic_window_g

0x5a0f,	// (0x0003d872) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a0f,	// (0x0003d872) popup_snote2_single_graphic_window_t1

0x5a5b,	// (0x0003d8be) popup_snote2_single_graphic_window_t2_ParamLimits

0x5a5b,	// (0x0003d8be) popup_snote2_single_graphic_window_t2

0x591d,	// (0x0003d780) popup_snote2_single_graphic_window_t3_ParamLimits

0x591d,	// (0x0003d780) popup_snote2_single_graphic_window_t3

0x595e,	// (0x0003d7c1) popup_snote2_single_graphic_window_t4_ParamLimits

0x595e,	// (0x0003d7c1) popup_snote2_single_graphic_window_t4

0x5994,	// (0x0003d7f7) popup_snote2_single_graphic_window_t5_ParamLimits

0x5994,	// (0x0003d7f7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00047b12) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00047b12) popup_snote2_single_graphic_window_t

0x447c,	// (0x0003c2df) clock_nsta_pane_cp2_t1

0x447c,	// (0x0003c2df) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00047926) clock_nsta_pane_cp2_t

0xd9b0,	// (0x00045813) form_field_data_wide_pane_g1_ParamLimits

0xb981,	// (0x000437e4) form_field_data_wide_pane_g2_ParamLimits

0xb981,	// (0x000437e4) form_field_data_wide_pane_g2

0xb98d,	// (0x000437f0) form_field_data_wide_pane_g3_ParamLimits

0xb98d,	// (0x000437f0) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x000474de) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x000474de) form_field_data_wide_pane_g

0xc92d,	// (0x00044790) grid_touch_3_pane_ParamLimits

0xc92d,	// (0x00044790) grid_touch_3_pane

0xce78,	// (0x00044cdb) cell_touch_3_pane_ParamLimits

0xce78,	// (0x00044cdb) cell_touch_3_pane

0x498c,	// (0x0003c7ef) cell_touch_3_pane_g1

0x498c,	// (0x0003c7ef) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x000479ab) cell_touch_3_pane_g

0x8416,	// (0x00040279) cont_query_data_pane

0x841e,	// (0x00040281) cont_query_data_pane_cp1

0x5ada,	// (0x0003d93d) button_value_adjust_pane_cp7

0x5ae2,	// (0x0003d945) query_popup_pane_cp3

0xbeb5,	// (0x00043d18) bg_popup_sub_pane_cp22_ParamLimits

0xf0c5,	// (0x00046f28) navi_navi_volume_pane_cp2

0xf0e0,	// (0x00046f43) popup_side_volume_key_window_g2

0xf0ef,	// (0x00046f52) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00047574) popup_side_volume_key_window_g

0xf10c,	// (0x00046f6f) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0004757b) popup_side_volume_key_window_t

0xc0c0,	// (0x00043f23) popup_side_volume_key_window_ParamLimits

0x98f2,	// (0x00041755) list_double_graphic_pane_g4_ParamLimits

0x98f2,	// (0x00041755) list_double_graphic_pane_g4

0xb108,	// (0x00042f6b) list_single_2heading_msg_pane_ParamLimits

0xb108,	// (0x00042f6b) list_single_2heading_msg_pane

0xb1a1,	// (0x00043004) list_single_2heading_msg_pane_g1_ParamLimits

0xb1a1,	// (0x00043004) list_single_2heading_msg_pane_g1

0xb1ad,	// (0x00043010) list_single_2heading_msg_pane_g2_ParamLimits

0xb1ad,	// (0x00043010) list_single_2heading_msg_pane_g2

0xb1c0,	// (0x00043023) list_single_2heading_msg_pane_g3_ParamLimits

0xb1c0,	// (0x00043023) list_single_2heading_msg_pane_g3

0xb1cc,	// (0x0004302f) list_single_2heading_msg_pane_g4_ParamLimits

0xb1cc,	// (0x0004302f) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00047b1d) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00047b1d) list_single_2heading_msg_pane_g

0xb1e4,	// (0x00043047) list_single_2heading_msg_pane_t1_ParamLimits

0xb1e4,	// (0x00043047) list_single_2heading_msg_pane_t1

0xb20c,	// (0x0004306f) list_single_2heading_msg_pane_t2_ParamLimits

0xb20c,	// (0x0004306f) list_single_2heading_msg_pane_t2

0xb277,	// (0x000430da) list_single_2heading_msg_pane_t3_ParamLimits

0xb277,	// (0x000430da) list_single_2heading_msg_pane_t3

0xe0af,	// (0x00045f12) list_single_2heading_msg_pane_t4_ParamLimits

0xe0af,	// (0x00045f12) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00047b26) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00047b26) list_single_2heading_msg_pane_t

0x779a,	// (0x0003f5fd) title_pane_g4_ParamLimits

0x779a,	// (0x0003f5fd) title_pane_g4

0xee6e,	// (0x00046cd1) title_pane_stacon_g3_ParamLimits

0xee6e,	// (0x00046cd1) title_pane_stacon_g3

0x55e2,	// (0x0003d445) list_single_2graphic_im_pane_g4_ParamLimits

0x55e2,	// (0x0003d445) list_single_2graphic_im_pane_g4

0x3408,	// (0x0003b26b) popup_side_volume_key_window_cp

0x3c76,	// (0x0003bad9) main_idle_act2_pane_t1

0x02a0,	// (0x00038103) toolbar_button_pane_g10

0x977b,	// (0x000415de) popup_toolbar_window_cp1

0x446d,	// (0x0003c2d0) clock_nsta_pane_cp_t1

0x446d,	// (0x0003c2d0) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00047921) clock_nsta_pane_cp_t

0xf0c5,	// (0x00046f28) navi_navi_volume_pane_cp2_ParamLimits

0xf0d4,	// (0x00046f37) popup_side_volume_key_window_g1_ParamLimits

0xf0e0,	// (0x00046f43) popup_side_volume_key_window_g2_ParamLimits

0xf0ef,	// (0x00046f52) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00047574) popup_side_volume_key_window_g_ParamLimits

0x07fd,	// (0x00038660) fep_hwr_aid_pane

0x08a6,	// (0x00038709) bg_fep_hwr_top_pane_g4_ParamLimits

0x49ed,	// (0x0003c850) fep_hwr_top_pane_g1_ParamLimits

0x49ff,	// (0x0003c862) fep_hwr_top_pane_g2_ParamLimits

0x08c6,	// (0x00038729) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00047976) fep_hwr_top_pane_g_ParamLimits

0x08db,	// (0x0003873e) fep_hwr_top_text_pane_ParamLimits

0x31bd,	// (0x0003b020) aid_touch_tab_arrow_arrow_2

0x31c6,	// (0x0003b029) aid_touch_tab_arrow_left_2

0x0811,	// (0x00038674) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0848,	// (0x000386ab) fep_hwr_prediction_pane

0x4b55,	// (0x0003c9b8) fep_vkb_prediction_pane

0xcc37,	// (0x00044a9a) fep_vkb_side_pane_g3_ParamLimits

0xcc37,	// (0x00044a9a) fep_vkb_side_pane_g3

0x0a6a,	// (0x000388cd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0adb,	// (0x0003893e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0ae8,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00047a25) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0d12,	// (0x00038b75) fep_hwr_prediction_pane_g1

0x0d1c,	// (0x00038b7f) fep_hwr_prediction_pane_g2

0x0d24,	// (0x00038b87) fep_hwr_prediction_pane_g3

0x0d2c,	// (0x00038b8f) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00047b2f) fep_hwr_prediction_pane_g

0x5b09,	// (0x0003d96c) fep_vkb_prediction_pane_g1

0x5b13,	// (0x0003d976) fep_vkb_prediction_pane_g2

0x5b1b,	// (0x0003d97e) fep_vkb_prediction_pane_g3

0x5b23,	// (0x0003d986) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00047b38) fep_vkb_prediction_pane_g

0x05f4,	// (0x00038457) slider_set_pane_g3

0x0608,	// (0x0003846b) slider_set_pane_g4

0x0620,	// (0x00038483) slider_set_pane_g5

0x05f4,	// (0x00038457) slider_set_pane_g6

0x0636,	// (0x00038499) slider_set_pane_g7

0x3896,	// (0x0003b6f9) slider_form_pane_g3

0x389f,	// (0x0003b702) slider_form_pane_g4

0x38a7,	// (0x0003b70a) slider_form_pane_g5

0x3896,	// (0x0003b6f9) slider_form_pane_g6

0xc78a,	// (0x000445ed) slider_form_pane_g7

0x3f2d,	// (0x0003bd90) slider_set_pane_vc_g3

0x3f36,	// (0x0003bd99) slider_set_pane_vc_g4

0x3f3f,	// (0x0003bda2) slider_set_pane_vc_g5

0x3f2d,	// (0x0003bd90) slider_set_pane_vc_g6

0x3f48,	// (0x0003bdab) slider_set_pane_vc_g7

0x4120,	// (0x0003bf83) slider_form_pane_vc_g1

0x4129,	// (0x0003bf8c) slider_form_pane_vc_g2

0x4132,	// (0x0003bf95) slider_form_pane_vc_g3

0x4120,	// (0x0003bf83) slider_form_pane_vc_g4

0x413b,	// (0x0003bf9e) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x000478f3) slider_form_pane_vc_g

0x7770,	// (0x0003f5d3) main_idle_act3_pane

0x5b2b,	// (0x0003d98e) ai3_links_pane

0xcec2,	// (0x00044d25) popup_ai3_data_window_ParamLimits

0xcec2,	// (0x00044d25) popup_ai3_data_window

0x7770,	// (0x0003f5d3) grid_ai3_links_pane

0xcee0,	// (0x00044d43) cell_ai3_links_pane_ParamLimits

0xcee0,	// (0x00044d43) cell_ai3_links_pane

0x5b6c,	// (0x0003d9cf) bg_popup_sub_pane_cp11

0x5b79,	// (0x0003d9dc) cell_ai3_links_pane_g1

0x7770,	// (0x0003f5d3) bg_popup_sub_pane_cp12

0x5b9e,	// (0x0003da01) heading_ai3_data_pane

0x5ba6,	// (0x0003da09) list_ai3_gene_pane

0x5bb2,	// (0x0003da15) popup_ai3_data_window_g1

0x5bba,	// (0x0003da1d) heading_ai3_data_pane_g1

0x5bc2,	// (0x0003da25) heading_ai3_data_pane_t1

0x5bd0,	// (0x0003da33) list_double_ai3_gene_pane_ParamLimits

0x5bd0,	// (0x0003da33) list_double_ai3_gene_pane

0x5bdd,	// (0x0003da40) list_single_ai3_gene_pane_ParamLimits

0x5bdd,	// (0x0003da40) list_single_ai3_gene_pane

0x4951,	// (0x0003c7b4) list_highlight_pane_cp7_ParamLimits

0x4951,	// (0x0003c7b4) list_highlight_pane_cp7

0x5bea,	// (0x0003da4d) list_single_a13_gene_pane_t1_ParamLimits

0x5bea,	// (0x0003da4d) list_single_a13_gene_pane_t1

0x5c01,	// (0x0003da64) list_single_ai3_gene_pane_g1

0x5c0a,	// (0x0003da6d) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00047b41) list_single_ai3_gene_pane_g

0x5c12,	// (0x0003da75) list_double_ai3_gene_pane_g1_ParamLimits

0x5c12,	// (0x0003da75) list_double_ai3_gene_pane_g1

0x5c1e,	// (0x0003da81) list_double_ai3_gene_pane_t1_ParamLimits

0x5c1e,	// (0x0003da81) list_double_ai3_gene_pane_t1

0x5c3a,	// (0x0003da9d) list_double_ai3_gene_pane_t2_ParamLimits

0x5c3a,	// (0x0003da9d) list_double_ai3_gene_pane_t2

0x5c4f,	// (0x0003dab2) list_double_ai3_gene_pane_t3_ParamLimits

0x5c4f,	// (0x0003dab2) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00047b46) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00047b46) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe0a5,	// (0x00045f08) aid_size_min_col_2

0xceac,	// (0x00044d0f) aid_size_min_msg_ParamLimits

0xceac,	// (0x00044d0f) aid_size_min_msg

0xcc4b,	// (0x00044aae) fep_vkb_top_text_pane_g2_ParamLimits

0xcc4b,	// (0x00044aae) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000479a6) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000479a6) fep_vkb_top_text_pane_g

0x7770,	// (0x0003f5d3) main_hc_apps_shell_pane

0x5c6c,	// (0x0003dacf) grid_hc_apps_pane_ParamLimits

0x5c6c,	// (0x0003dacf) grid_hc_apps_pane

0x5c7b,	// (0x0003dade) list_hc_apps_pane

0x5c83,	// (0x0003dae6) scroll_pane_cp37_ParamLimits

0x5c83,	// (0x0003dae6) scroll_pane_cp37

0xcefa,	// (0x00044d5d) cell_hc_apps_pane_ParamLimits

0xcefa,	// (0x00044d5d) cell_hc_apps_pane

0xcfc4,	// (0x00044e27) cell_hc_apps_pane_g1_ParamLimits

0xcfc4,	// (0x00044e27) cell_hc_apps_pane_g1

0x5d78,	// (0x0003dbdb) cell_hc_apps_pane_g2_ParamLimits

0x5d78,	// (0x0003dbdb) cell_hc_apps_pane_g2

0x5d94,	// (0x0003dbf7) cell_hc_apps_pane_g3_ParamLimits

0x5d94,	// (0x0003dbf7) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00047b4d) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00047b4d) cell_hc_apps_pane_g

0xcff1,	// (0x00044e54) cell_hc_apps_pane_t1_ParamLimits

0xcff1,	// (0x00044e54) cell_hc_apps_pane_t1

0x8360,	// (0x000401c3) grid_highlight_pane_cp10_ParamLimits

0x8360,	// (0x000401c3) grid_highlight_pane_cp10

0xd031,	// (0x00044e94) list_single_hc_apps_pane_ParamLimits

0xd031,	// (0x00044e94) list_single_hc_apps_pane

0xd06b,	// (0x00044ece) list_single_hc_apps_pane_g1

0xb2e5,	// (0x00043148) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00047b54) list_single_hc_apps_pane_g

0xb2fe,	// (0x00043161) list_single_hc_apps_pane_g2_copy1

0xb31a,	// (0x0004317d) list_single_hc_apps_pane_t1

0x821f,	// (0x00040082) bg_set_opt_pane_cp_ParamLimits

0xed95,	// (0x00046bf8) setting_slider_pane_t1_ParamLimits

0xedae,	// (0x00046c11) setting_slider_pane_t2_ParamLimits

0xedc8,	// (0x00046c2b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000473c1) setting_slider_pane_t_ParamLimits

0xede0,	// (0x00046c43) slider_set_pane_ParamLimits

0xf53f,	// (0x000473a2) control_pane_g5_ParamLimits

0xf53f,	// (0x000473a2) control_pane_g5

0x36c3,	// (0x0003b526) slider_set_pane_g1_ParamLimits

0x05e8,	// (0x0003844b) slider_set_pane_g2_ParamLimits

0x05f4,	// (0x00038457) slider_set_pane_g3_ParamLimits

0x0608,	// (0x0003846b) slider_set_pane_g4_ParamLimits

0x0620,	// (0x00038483) slider_set_pane_g5_ParamLimits

0x05f4,	// (0x00038457) slider_set_pane_g6_ParamLimits

0x0636,	// (0x00038499) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x000477c2) slider_set_pane_g_ParamLimits

0xc168,	// (0x00043fcb) navi_icon_text_pane_ParamLimits

0xabb1,	// (0x00042a14) aid_fill_nsta_2_ParamLimits

0xabea,	// (0x00042a4d) aid_touch_tab_arrow_left_ParamLimits

0xac00,	// (0x00042a63) aid_touch_tab_arrow_right_ParamLimits

0xac9b,	// (0x00042afe) clock_nsta_pane_ParamLimits

0xc4c8,	// (0x0004432b) navi_icon_pane_g1_ParamLimits

0xc4d4,	// (0x00044337) navi_text_pane_t1_ParamLimits

0xca11,	// (0x00044874) navi_icon_text_pane_g1_ParamLimits

0xca1d,	// (0x00044880) navi_icon_text_pane_t1_ParamLimits

0xd06b,	// (0x00044ece) list_single_hc_apps_pane_g1_ParamLimits

0xb2e5,	// (0x00043148) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00047b54) list_single_hc_apps_pane_g_ParamLimits

0xb2fe,	// (0x00043161) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb31a,	// (0x0004317d) list_single_hc_apps_pane_t1_ParamLimits

0x9301,	// (0x00041164) popup_toolbar2_fixed_window_ParamLimits

0x9301,	// (0x00041164) popup_toolbar2_fixed_window

0xab16,	// (0x00042979) popup_toolbar2_float_window

0x7770,	// (0x0003f5d3) bg_popup_sub_pane_cp27

0x5e4e,	// (0x0003dcb1) grid_toolbar2_float_pane

0x7770,	// (0x0003f5d3) bg_popup_sub_pane_cp26

0x5e4e,	// (0x0003dcb1) grid_toolbar2_fixed_pane

0xd084,	// (0x00044ee7) cell_toolbar2_fixed_pane_ParamLimits

0xd084,	// (0x00044ee7) cell_toolbar2_fixed_pane

0xd0a1,	// (0x00044f04) cell_toolbar2_fixed_pane_g1

0x5e6f,	// (0x0003dcd2) toolbar2_fixed_button_pane

0x2348,	// (0x0003a1ab) toolbar2_fixed_button_pane_g1

0x2358,	// (0x0003a1bb) toolbar2_fixed_button_pane_g2

0x2350,	// (0x0003a1b3) toolbar2_fixed_button_pane_g3

0x2368,	// (0x0003a1cb) toolbar2_fixed_button_pane_g4

0x2360,	// (0x0003a1c3) toolbar2_fixed_button_pane_g5

0x2370,	// (0x0003a1d3) toolbar2_fixed_button_pane_g6

0x2378,	// (0x0003a1db) toolbar2_fixed_button_pane_g7

0x2388,	// (0x0003a1eb) toolbar2_fixed_button_pane_g8

0x2380,	// (0x0003a1e3) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x000476c4) toolbar2_fixed_button_pane_g

0x5e77,	// (0x0003dcda) cell_toolbar2_float_pane_ParamLimits

0x5e77,	// (0x0003dcda) cell_toolbar2_float_pane

0x5e88,	// (0x0003dceb) cell_toolbar2_float_pane_g1

0x5e6f,	// (0x0003dcd2) toolbar2_fixed_button_pane_cp

0xcb33,	// (0x00044996) fep_vkb_accented_list_pane_ParamLimits

0xcb33,	// (0x00044996) fep_vkb_accented_list_pane

0x0a4a,	// (0x000388ad) bg_popup_fep_shadow_pane_g9

0xf333,	// (0x00047196) bg_popup_fep_shadow_pane_cp3

0xba86,	// (0x000438e9) list_accented_list_pane

0x5e91,	// (0x0003dcf4) list_single_accented_list_pane_ParamLimits

0x5e91,	// (0x0003dcf4) list_single_accented_list_pane

0xf333,	// (0x00047196) list_highlight_pane_cp10

0x5ea2,	// (0x0003dd05) list_single_accented_list_pane_t1

0xaa32,	// (0x00042895) popup_slider_window_ParamLimits

0xaa32,	// (0x00042895) popup_slider_window

0x5aea,	// (0x0003d94d) aid_indentation_list_msg

0xd1ac,	// (0x0004500f) bg_popup_window_pane_cp19

0x5fdc,	// (0x0003de3f) popup_slider_window_g1

0x5ff8,	// (0x0003de5b) popup_slider_window_g2

0x6014,	// (0x0003de77) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00047b59) popup_slider_window_g

0x6070,	// (0x0003ded3) popup_slider_window_t1

0x60e4,	// (0x0003df47) small_volume_slider_vertical_pane

0x498c,	// (0x0003c7ef) small_volume_slider_vertical_pane_g1

0x498c,	// (0x0003c7ef) small_volume_slider_vertical_pane_g2

0x6100,	// (0x0003df63) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00047b6b) small_volume_slider_vertical_pane_g

0x926b,	// (0x000410ce) area_side_right_pane_ParamLimits

0x926b,	// (0x000410ce) area_side_right_pane

0xb348,	// (0x000431ab) aid_size_side_button_ParamLimits

0xb348,	// (0x000431ab) aid_size_side_button

0xb361,	// (0x000431c4) grid_sctrl_middle_pane_ParamLimits

0xb361,	// (0x000431c4) grid_sctrl_middle_pane

0x0dcb,	// (0x00038c2e) sctrl_sk_bottom_pane

0x0ddc,	// (0x00038c3f) sctrl_sk_top_pane

0x0dee,	// (0x00038c51) aid_touch_sctrl_top

0x0dfb,	// (0x00038c5e) bg_sctrl_sk_pane_ParamLimits

0x0dfb,	// (0x00038c5e) bg_sctrl_sk_pane

0x0e09,	// (0x00038c6c) sctrl_sk_top_pane_g1

0x0e16,	// (0x00038c79) sctrl_sk_top_pane_t1

0x0dee,	// (0x00038c51) aid_touch_sctrl_bottom

0x0dfb,	// (0x00038c5e) bg_sctrl_sk_pane_cp_ParamLimits

0x0dfb,	// (0x00038c5e) bg_sctrl_sk_pane_cp

0x0e31,	// (0x00038c94) sctrl_sk_bottom_pane_g1

0x0e16,	// (0x00038c79) sctrl_sk_bottom_pane_t1

0xb37b,	// (0x000431de) cell_sctrl_middle_pane_ParamLimits

0xb37b,	// (0x000431de) cell_sctrl_middle_pane

0xb38e,	// (0x000431f1) aid_touch_sctrl_middle_ParamLimits

0xb38e,	// (0x000431f1) aid_touch_sctrl_middle

0xb39b,	// (0x000431fe) bg_sctrl_middle_pane_ParamLimits

0xb39b,	// (0x000431fe) bg_sctrl_middle_pane

0x14b4,	// (0x00039317) cell_sctrl_middle_pane_g1_ParamLimits

0x14b4,	// (0x00039317) cell_sctrl_middle_pane_g1

0xb3a9,	// (0x0004320c) cell_sctrl_middle_pane_g2_ParamLimits

0xb3a9,	// (0x0004320c) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00047b77) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00047b77) cell_sctrl_middle_pane_g

0x2348,	// (0x0003a1ab) bg_sctrl_middle_pane_g1

0x2350,	// (0x0003a1b3) bg_sctrl_middle_pane_g2

0x2358,	// (0x0003a1bb) bg_sctrl_middle_pane_g3

0x2360,	// (0x0003a1c3) bg_sctrl_middle_pane_g4

0x2368,	// (0x0003a1cb) bg_sctrl_middle_pane_g5

0x2370,	// (0x0003a1d3) bg_sctrl_middle_pane_g6

0x2378,	// (0x0003a1db) bg_sctrl_middle_pane_g7

0x2380,	// (0x0003a1e3) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00047b7c) bg_sctrl_middle_pane_g

0x2388,	// (0x0003a1eb) bg_sctrl_middle_pane_g8_copy1

0x2348,	// (0x0003a1ab) bg_sctrl_sk_pane_g1

0x2358,	// (0x0003a1bb) bg_sctrl_sk_pane_g2

0x2350,	// (0x0003a1b3) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x000476c4) bg_sctrl_sk_pane_g

0x877b,	// (0x000405de) aid_size_touch_scroll_bar

0x2368,	// (0x0003a1cb) bg_sctrl_sk_pane_g4

0x2360,	// (0x0003a1c3) bg_sctrl_sk_pane_g5

0x2370,	// (0x0003a1d3) bg_sctrl_sk_pane_g6

0x2378,	// (0x0003a1db) bg_sctrl_sk_pane_g7

0x2388,	// (0x0003a1eb) bg_sctrl_sk_pane_g8

0x2380,	// (0x0003a1e3) bg_sctrl_sk_pane_g9

0x01f0,	// (0x00038053) popup_fep_china_hwr2_fs_candidate_window

0xa4ea,	// (0x0004234d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4ea,	// (0x0004234d) popup_fep_china_hwr2_fs_control_window

0x0a6a,	// (0x000388cd) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00047b72) sctrl_sk_top_pane_g

0xd264,	// (0x000450c7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd264,	// (0x000450c7) aid_fep_china_hwr2_fs_cell

0xd27a,	// (0x000450dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd27a,	// (0x000450dd) bg_popup_fep_shadow_pane_cp4

0xd291,	// (0x000450f4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd291,	// (0x000450f4) bg_popup_fep_shadow_pane_cp5

0xd2a3,	// (0x00045106) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd2a3,	// (0x00045106) popup_fep_china_hwr2_fs_control_bar_grid

0xd2b7,	// (0x0004511a) popup_fep_china_hwr2_fs_control_funtion_grid

0x615f,	// (0x0003dfc2) aid_fep_china_hwr2_fs_candi_cell

0x7770,	// (0x0003f5d3) bg_popup_fep_shadow_pane_cp6

0x6169,	// (0x0003dfcc) popup_fep_china_hwr2_fs_candidate_grid

0xd2bf,	// (0x00045122) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2bf,	// (0x00045122) cell_fep_china_hwr2_fs_funtion_grid

0x498c,	// (0x0003c7ef) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x618b,	// (0x0003dfee) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x618b,	// (0x0003dfee) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6199,	// (0x0003dffc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6199,	// (0x0003dffc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00047b8d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00047b8d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2d7,	// (0x0004513a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2d7,	// (0x0004513a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2ec,	// (0x0004514f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2ec,	// (0x0004514f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00047b92) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00047b92) cell_fep_china_hwr2_fs_funtion_grid_t

0x61e0,	// (0x0003e043) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x61e8,	// (0x0003e04b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x61f0,	// (0x0003e053) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00047b97) popup_fep_china_hwr2_fs_control_bar_grid_g

0x61f8,	// (0x0003e05b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x61f8,	// (0x0003e05b) cell_fep_china_hwr2_fs_candidate_grid

0x6217,	// (0x0003e07a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x621f,	// (0x0003e082) popup_fep_china_hwr2_fs_candidate_grid_g21

0x498c,	// (0x0003c7ef) cell_fep_china_hwr2_fs_candidate_grid_g1

0x498c,	// (0x0003c7ef) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x000479ab) cell_fep_china_hwr2_fs_candidate_grid_g

0x6227,	// (0x0003e08a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1f24,	// (0x00039d87) clock_nsta_pane_cp_24_ParamLimits

0x1f24,	// (0x00039d87) clock_nsta_pane_cp_24

0x1fa4,	// (0x00039e07) indicator_nsta_pane_cp_24_ParamLimits

0x1fa4,	// (0x00039e07) indicator_nsta_pane_cp_24

0x301b,	// (0x0003ae7e) heading_pane_g1

0x0001,

0xf8c6,	// (0x00047729) heading_pane_g

0x3abd,	// (0x0003b920) grid_sct_catagory_button_pane

0x3aef,	// (0x0003b952) scroll_pane_cp5_ParamLimits

0x45d8,	// (0x0003c43b) button_value_adjust_pane_cp5_ParamLimits

0x45d8,	// (0x0003c43b) button_value_adjust_pane_cp5

0x46bd,	// (0x0003c520) form2_midp_time_pane_ParamLimits

0x6235,	// (0x0003e098) cell_sct_catagory_button_pane_ParamLimits

0x6235,	// (0x0003e098) cell_sct_catagory_button_pane

0x4951,	// (0x0003c7b4) bg_button_pane_cp01_ParamLimits

0x4951,	// (0x0003c7b4) bg_button_pane_cp01

0x498c,	// (0x0003c7ef) cell_sct_catagory_button_pane_g1

0xaab3,	// (0x00042916) popup_tb_extension_window

0xd308,	// (0x0004516b) aid_size_cell_ext_ParamLimits

0xd308,	// (0x0004516b) aid_size_cell_ext

0x85bd,	// (0x00040420) bg_tb_trans_pane_cp1_ParamLimits

0x85bd,	// (0x00040420) bg_tb_trans_pane_cp1

0xd32e,	// (0x00045191) grid_tb_ext_pane_ParamLimits

0xd32e,	// (0x00045191) grid_tb_ext_pane

0xd36e,	// (0x000451d1) cell_tb_ext_pane_ParamLimits

0xd36e,	// (0x000451d1) cell_tb_ext_pane

0xd396,	// (0x000451f9) cell_tb_ext_pane_g1_ParamLimits

0xd396,	// (0x000451f9) cell_tb_ext_pane_g1

0x62cb,	// (0x0003e12e) cell_tb_ext_pane_t1

0x8360,	// (0x000401c3) list_highlight_pane_cp11_ParamLimits

0x8360,	// (0x000401c3) list_highlight_pane_cp11

0x9316,	// (0x00041179) popup_uni_indicator_window_ParamLimits

0x9316,	// (0x00041179) popup_uni_indicator_window

0xb973,	// (0x000437d6) bg_popup_sub_pane_cp14

0x62e6,	// (0x0003e149) list_uniindi_pane

0x62f2,	// (0x0003e155) uniindi_top_pane

0x8360,	// (0x000401c3) bg_uniindi_top_pane

0x6313,	// (0x0003e176) uniindi_top_pane_g1

0x6329,	// (0x0003e18c) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00047b9e) uniindi_top_pane_g

0x6353,	// (0x0003e1b6) uniindi_top_pane_t1

0x637f,	// (0x0003e1e2) list_single_uniindi_pane_ParamLimits

0x637f,	// (0x0003e1e2) list_single_uniindi_pane

0x498c,	// (0x0003c7ef) bg_uniindi_top_pane_g1

0x6391,	// (0x0003e1f4) list_single_uniindi_pane_g1

0x63a4,	// (0x0003e207) list_single_uniindi_pane_t1

0xec72,	// (0x00046ad5) control_bg_pane

0x63c9,	// (0x0003e22c) bg_sctrl_sk_pane_cp1

0x63d2,	// (0x0003e235) bg_sctrl_sk_pane_cp2

0x63db,	// (0x0003e23e) control_bg_pane_g1

0x63e4,	// (0x0003e247) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00047ba7) control_bg_pane_g

0x43ff,	// (0x0003c262) cell_indicator_nsta_pane_g1_ParamLimits

0xc96a,	// (0x000447cd) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0004790f) cell_indicator_nsta_pane_g_ParamLimits

0xde8c,	// (0x00045cef) form2_midp_time_pane_t1_ParamLimits

0xa460,	// (0x000422c3) main_idle_act4_pane_ParamLimits

0xa460,	// (0x000422c3) main_idle_act4_pane

0xaab3,	// (0x00042916) popup_tb_extension_window_ParamLimits

0xd356,	// (0x000451b9) tb_ext_find_pane_ParamLimits

0xd356,	// (0x000451b9) tb_ext_find_pane

0x63ed,	// (0x0003e250) ai_gene_pane_1_cp1

0xf3b9,	// (0x0004721c) ai_gene_pane_2_cp1

0x63f5,	// (0x0003e258) list_single_idle_plugin_calendar_pane

0x63fe,	// (0x0003e261) list_single_idle_plugin_notification_pane

0x6407,	// (0x0003e26a) list_single_idle_plugin_player_pane

0xd3b3,	// (0x00045216) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd3b3,	// (0x00045216) list_single_idle_plugin_shortcut_pane

0xd3db,	// (0x0004523e) main_idle_act4_pane_t1

0xd3f3,	// (0x00045256) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00047bac) main_idle_act4_pane_t

0xd40b,	// (0x0004526e) middle_sk_idle_act4_pane_ParamLimits

0xd40b,	// (0x0004526e) middle_sk_idle_act4_pane

0xd427,	// (0x0004528a) popup_clock_digital_analogue_window_cp2

0xd44e,	// (0x000452b1) shortcut_wheel_idle_act4_pane_ParamLimits

0xd44e,	// (0x000452b1) shortcut_wheel_idle_act4_pane

0x498c,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g1

0x498c,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g2

0x498c,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g3

0x498c,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g4

0x498c,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g5

0x649a,	// (0x0003e2fd) shortcut_wheel_idle_act4_pane_g6

0x64a2,	// (0x0003e305) shortcut_wheel_idle_act4_pane_g7

0x64aa,	// (0x0003e30d) shortcut_wheel_idle_act4_pane_g8

0x64b2,	// (0x0003e315) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00047bb1) shortcut_wheel_idle_act4_pane_g

0xd4cb,	// (0x0004532e) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4cb,	// (0x0004532e) middle_sk_idle_act4_pane_g1

0xd4d9,	// (0x0004533c) middle_sk_idle_act4_pane_g2_ParamLimits

0xd4d9,	// (0x0004533c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00047bd4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00047bd4) middle_sk_idle_act4_pane_g

0xd4f1,	// (0x00045354) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4f1,	// (0x00045354) middle_sk_idle_act4_pane_t1

0xd520,	// (0x00045383) grid_ai_shortcut_pane_ParamLimits

0xd520,	// (0x00045383) grid_ai_shortcut_pane

0xd53d,	// (0x000453a0) list_highlight_pane_cp16_ParamLimits

0xd53d,	// (0x000453a0) list_highlight_pane_cp16

0xd54a,	// (0x000453ad) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd54a,	// (0x000453ad) list_single_idle_plugin_shortcut_pane_g1

0xd556,	// (0x000453b9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd556,	// (0x000453b9) list_single_idle_plugin_shortcut_pane_g2

0xd574,	// (0x000453d7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd574,	// (0x000453d7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00047bd9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00047bd9) list_single_idle_plugin_shortcut_pane_g

0xd589,	// (0x000453ec) cell_ai_shortcut_pane_ParamLimits

0xd589,	// (0x000453ec) cell_ai_shortcut_pane

0xd59f,	// (0x00045402) cell_ai_shortcut_pane_g1_ParamLimits

0xd59f,	// (0x00045402) cell_ai_shortcut_pane_g1

0x63ed,	// (0x0003e250) ai_gene_pane_1_cp2

0x65e3,	// (0x0003e446) ai_gene_pane_2_cp2

0x65eb,	// (0x0003e44e) list_highlight_pane_cp15

0x65f4,	// (0x0003e457) list_single_idle_plugin_calendar_pane_g1

0x65eb,	// (0x0003e44e) list_highlight_pane_cp17

0x65fc,	// (0x0003e45f) list_single_idle_plugin_calendar_pane_g1_copy1

0x6604,	// (0x0003e467) list_single_idle_plugin_player_pane_g1

0x3d24,	// (0x0003bb87) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00047be0) list_single_idle_plugin_player_pane_g

0x660c,	// (0x0003e46f) list_single_idle_plugin_player_pane_t1

0x661a,	// (0x0003e47d) list_single_idle_plugin_player_pane_t2

0x6628,	// (0x0003e48b) list_single_idle_plugin_player_pane_t3

0x6636,	// (0x0003e499) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00047be5) list_single_idle_plugin_player_pane_t

0x6644,	// (0x0003e4a7) wait_bar_pane_cp15

0x664c,	// (0x0003e4af) grid_ai_notification_pane

0x3d24,	// (0x0003bb87) list_single_idle_plugin_notification_pane_g1

0xd5c1,	// (0x00045424) cell_ai_notification_pane_ParamLimits

0xd5c1,	// (0x00045424) cell_ai_notification_pane

0x6662,	// (0x0003e4c5) cell_ai_notification_pane_g1

0x666a,	// (0x0003e4cd) cell_ai_notification_pane_t1

0xd5ce,	// (0x00045431) tb_ext_find_button_pane

0xd5d6,	// (0x00045439) tb_ext_find_pane_g1

0xd5de,	// (0x00045441) tb_ext_find_pane_t1

0xbe55,	// (0x00043cb8) tb_ext_find_button_pane_g1

0x6696,	// (0x0003e4f9) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00047bee) tb_ext_find_button_pane_g

0xd3db,	// (0x0004523e) main_idle_act4_pane_t1_ParamLimits

0xd3f3,	// (0x00045256) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00047bac) main_idle_act4_pane_t_ParamLimits

0xd427,	// (0x0004528a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd43e,	// (0x000452a1) sat_plugin_idle_act4_pane_ParamLimits

0xd43e,	// (0x000452a1) sat_plugin_idle_act4_pane

0xd5ec,	// (0x0004544f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd5ec,	// (0x0004544f) sat_plugin_idle_act4_pane_t1

0xd604,	// (0x00045467) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd604,	// (0x00045467) sat_plugin_idle_act4_pane_t2

0xd61c,	// (0x0004547f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd61c,	// (0x0004547f) sat_plugin_idle_act4_pane_t3

0xd634,	// (0x00045497) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd634,	// (0x00045497) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00047bf3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00047bf3) sat_plugin_idle_act4_pane_t

0xed37,	// (0x00046b9a) popup_battery_window_ParamLimits

0xed37,	// (0x00046b9a) popup_battery_window

0x8360,	// (0x000401c3) bg_popup_sub_pane_cp25_ParamLimits

0x8360,	// (0x000401c3) bg_popup_sub_pane_cp25

0x66eb,	// (0x0003e54e) popup_battery_window_g1_ParamLimits

0x66eb,	// (0x0003e54e) popup_battery_window_g1

0x66f7,	// (0x0003e55a) popup_battery_window_t1_ParamLimits

0x66f7,	// (0x0003e55a) popup_battery_window_t1

0x6709,	// (0x0003e56c) popup_battery_window_t2_ParamLimits

0x6709,	// (0x0003e56c) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00047bfc) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00047bfc) popup_battery_window_t

0xa148,	// (0x00041fab) midp_canvas_pane_ParamLimits

0xa1a3,	// (0x00042006) midp_keypad_pane_ParamLimits

0xa1a3,	// (0x00042006) midp_keypad_pane

0x0142,	// (0x00037fa5) main_midp_pane_ParamLimits

0x448b,	// (0x0003c2ee) signal_pane_g2_cp_ParamLimits

0xd64c,	// (0x000454af) aid_size_cell_midp_keypad_ParamLimits

0xd64c,	// (0x000454af) aid_size_cell_midp_keypad

0xd66a,	// (0x000454cd) midp_keyp_game_grid_pane_ParamLimits

0xd66a,	// (0x000454cd) midp_keyp_game_grid_pane

0xd691,	// (0x000454f4) midp_keyp_rocker_pane_ParamLimits

0xd691,	// (0x000454f4) midp_keyp_rocker_pane

0xd6d0,	// (0x00045533) midp_keyp_sk_left_pane_ParamLimits

0xd6d0,	// (0x00045533) midp_keyp_sk_left_pane

0xd724,	// (0x00045587) midp_keyp_sk_right_pane_ParamLimits

0xd724,	// (0x00045587) midp_keyp_sk_right_pane

0x7770,	// (0x0003f5d3) bg_button_pane_cp03

0xd778,	// (0x000455db) midp_keyp_sk_left_pane_g1

0x7770,	// (0x0003f5d3) bg_button_pane_cp04

0xd778,	// (0x000455db) midp_keyp_sk_right_pane_g1

0x498c,	// (0x0003c7ef) midp_keyp_rocker_pane_g1

0xd781,	// (0x000455e4) keyp_game_cell_pane_ParamLimits

0xd781,	// (0x000455e4) keyp_game_cell_pane

0x7770,	// (0x0003f5d3) bg_button_pane_cp02

0xd7a7,	// (0x0004560a) keyp_game_cell_pane_g1

0x92ad,	// (0x00041110) popup_fep_vkb2_window_ParamLimits

0x92ad,	// (0x00041110) popup_fep_vkb2_window

0xb3b5,	// (0x00043218) aid_size_cell_vkb2_ParamLimits

0xb3b5,	// (0x00043218) aid_size_cell_vkb2

0xb3eb,	// (0x0004324e) popup_fep_vkb2_window_g1_ParamLimits

0xb3eb,	// (0x0004324e) popup_fep_vkb2_window_g1

0xb43b,	// (0x0004329e) vkb2_area_bottom_pane_ParamLimits

0xb43b,	// (0x0004329e) vkb2_area_bottom_pane

0xb497,	// (0x000432fa) vkb2_area_keypad_pane_ParamLimits

0xb497,	// (0x000432fa) vkb2_area_keypad_pane

0xb4e5,	// (0x00043348) vkb2_area_top_pane_ParamLimits

0xb4e5,	// (0x00043348) vkb2_area_top_pane

0xb56b,	// (0x000433ce) vkb2_top_entry_pane_ParamLimits

0xb56b,	// (0x000433ce) vkb2_top_entry_pane

0xb598,	// (0x000433fb) vkb2_top_grid_left_pane_ParamLimits

0xb598,	// (0x000433fb) vkb2_top_grid_left_pane

0xb5b8,	// (0x0004341b) vkb2_top_grid_right_pane_ParamLimits

0xb5b8,	// (0x0004341b) vkb2_top_grid_right_pane

0x10ab,	// (0x00038f0e) vkb2_cell_keypad_pane_ParamLimits

0x10ab,	// (0x00038f0e) vkb2_cell_keypad_pane

0xb5fe,	// (0x00043461) vkb2_area_bottom_grid_pane_ParamLimits

0xb5fe,	// (0x00043461) vkb2_area_bottom_grid_pane

0xb628,	// (0x0004348b) vkb2_area_bottom_pane_g1_ParamLimits

0xb628,	// (0x0004348b) vkb2_area_bottom_pane_g1

0xb64e,	// (0x000434b1) vkb2_area_bottom_pane_g2_ParamLimits

0xb64e,	// (0x000434b1) vkb2_area_bottom_pane_g2

0xb67f,	// (0x000434e2) vkb2_area_bottom_pane_g3_ParamLimits

0xb67f,	// (0x000434e2) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00047c01) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00047c01) vkb2_area_bottom_pane_g

0x1255,	// (0x000390b8) vkb2_top_cell_left_pane_ParamLimits

0x1255,	// (0x000390b8) vkb2_top_cell_left_pane

0xd7b0,	// (0x00045613) vkb2_top_entry_pane_g1_ParamLimits

0xd7b0,	// (0x00045613) vkb2_top_entry_pane_g1

0xd7be,	// (0x00045621) vkb2_top_entry_pane_t1_ParamLimits

0xd7be,	// (0x00045621) vkb2_top_entry_pane_t1

0x68ac,	// (0x0003e70f) vkb2_top_entry_pane_t2_ParamLimits

0x68ac,	// (0x0003e70f) vkb2_top_entry_pane_t2

0x68de,	// (0x0003e741) vkb2_top_entry_pane_t3_ParamLimits

0x68de,	// (0x0003e741) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00047c08) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00047c08) vkb2_top_entry_pane_t

0xb6e9,	// (0x0004354c) vkb2_top_grid_right_pane_g1_ParamLimits

0xb6e9,	// (0x0004354c) vkb2_top_grid_right_pane_g1

0x12b8,	// (0x0003911b) vkb2_top_grid_right_pane_g2_ParamLimits

0x12b8,	// (0x0003911b) vkb2_top_grid_right_pane_g2

0x12d0,	// (0x00039133) vkb2_top_grid_right_pane_g3_ParamLimits

0x12d0,	// (0x00039133) vkb2_top_grid_right_pane_g3

0xb6ff,	// (0x00043562) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6ff,	// (0x00043562) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00047c0f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00047c0f) vkb2_top_grid_right_pane_g

0x12fe,	// (0x00039161) vkb2_top_cell_left_pane_g1

0x1315,	// (0x00039178) vkb2_cell_keypad_pane_g1_ParamLimits

0x1315,	// (0x00039178) vkb2_cell_keypad_pane_g1

0x6902,	// (0x0003e765) vkb2_cell_keypad_pane_t1_ParamLimits

0x6902,	// (0x0003e765) vkb2_cell_keypad_pane_t1

0x1323,	// (0x00039186) vkb2_cell_bottom_grid_pane_ParamLimits

0x1323,	// (0x00039186) vkb2_cell_bottom_grid_pane

0x135c,	// (0x000391bf) vkb2_cell_bottom_grid_pane_g1

0xd46f,	// (0x000452d2) aid_call2_pane_cp02

0xd477,	// (0x000452da) aid_call_pane_cp02

0xd47f,	// (0x000452e2) clock_digital_number_pane_cp10

0xd487,	// (0x000452ea) clock_digital_number_pane_cp11

0xd48f,	// (0x000452f2) clock_digital_number_pane_cp12

0xd497,	// (0x000452fa) clock_digital_number_pane_cp13

0xd49f,	// (0x00045302) clock_digital_separator_pane_cp10

0xbe55,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g1

0xbe55,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g2

0xd4a7,	// (0x0004530a) popup_clock_digital_analogue_window_cp2_g3

0xbe55,	// (0x00043cb8) popup_clock_digital_analogue_window_cp2_g4

0xd4a7,	// (0x0004530a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00047bc4) popup_clock_digital_analogue_window_cp2_g

0xd4af,	// (0x00045312) popup_clock_digital_analogue_window_cp2_t1

0xd4bd,	// (0x00045320) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00047bcf) popup_clock_digital_analogue_window_cp2_t

0x498c,	// (0x0003c7ef) clock_digital_number_pane_cp10_g1

0x498c,	// (0x0003c7ef) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x000479ab) clock_digital_number_pane_cp10_g

0x498c,	// (0x0003c7ef) clock_digital_separator_pane_cp10_g1

0x498c,	// (0x0003c7ef) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x000479ab) clock_digital_separator_pane_cp10_g

0x6335,	// (0x0003e198) uniindi_top_pane_g3

0x6346,	// (0x0003e1a9) uniindi_top_pane_g4

0x1136,	// (0x00038f99) vkb2_row_keypad_pane_ParamLimits

0x1136,	// (0x00038f99) vkb2_row_keypad_pane

0x1378,	// (0x000391db) vkb2_cell_t_keypad_pane_ParamLimits

0x1378,	// (0x000391db) vkb2_cell_t_keypad_pane

0x1388,	// (0x000391eb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1388,	// (0x000391eb) vkb2_cell_t_keypad_pane_cp08

0x139d,	// (0x00039200) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x139d,	// (0x00039200) vkb2_cell_t_keypad_pane_cp09

0x13b1,	// (0x00039214) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x13b1,	// (0x00039214) vkb2_cell_t_keypad_pane_cp01

0x13c2,	// (0x00039225) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x13c2,	// (0x00039225) vkb2_cell_t_keypad_pane_cp02

0x13d3,	// (0x00039236) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x13d3,	// (0x00039236) vkb2_cell_t_keypad_pane_cp03

0x13e4,	// (0x00039247) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x13e4,	// (0x00039247) vkb2_cell_t_keypad_pane_cp04

0x13f5,	// (0x00039258) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x13f5,	// (0x00039258) vkb2_cell_t_keypad_pane_cp05

0x1406,	// (0x00039269) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1406,	// (0x00039269) vkb2_cell_t_keypad_pane_cp06

0x1419,	// (0x0003927c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1419,	// (0x0003927c) vkb2_cell_t_keypad_pane_cp07

0x142e,	// (0x00039291) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x142e,	// (0x00039291) vkb2_cell_t_keypad_pane_cp10

0x0a6a,	// (0x000388cd) vkb2_cell_t_keypad_pane_g1

0x6919,	// (0x0003e77c) vkb2_cell_t_keypad_pane_t1

0xec72,	// (0x00046ad5) popup_grid_graphic2_window

0xd7f7,	// (0x0004565a) aid_size_cell_graphic2_ParamLimits

0xd7f7,	// (0x0004565a) aid_size_cell_graphic2

0xd835,	// (0x00045698) bg_popup_window_pane_cp21_ParamLimits

0xd835,	// (0x00045698) bg_popup_window_pane_cp21

0xd843,	// (0x000456a6) graphic2_pages_pane_ParamLimits

0xd843,	// (0x000456a6) graphic2_pages_pane

0xe0f0,	// (0x00045f53) grid_graphic2_control_pane_ParamLimits

0xe0f0,	// (0x00045f53) grid_graphic2_control_pane

0xe138,	// (0x00045f9b) grid_graphic2_pane_ParamLimits

0xe138,	// (0x00045f9b) grid_graphic2_pane

0xe1c3,	// (0x00046026) cell_graphic2_pane

0x7770,	// (0x0003f5d3) main_comp_mode_pane

0x5ba6,	// (0x0003da09) list_ai3_gene_pane_ParamLimits

0xd1ac,	// (0x0004500f) bg_popup_window_pane_cp19_ParamLimits

0x5f7a,	// (0x0003dddd) bg_touch_area_indi_pane_ParamLimits

0x5f7a,	// (0x0003dddd) bg_touch_area_indi_pane

0x5f90,	// (0x0003ddf3) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f90,	// (0x0003ddf3) bg_touch_area_indi_pane_cp01

0x5fa8,	// (0x0003de0b) bg_touch_area_indi_pane_cp02_ParamLimits

0x5fa8,	// (0x0003de0b) bg_touch_area_indi_pane_cp02

0x5fc2,	// (0x0003de25) bg_touch_area_indi_pane_cp03_ParamLimits

0x5fc2,	// (0x0003de25) bg_touch_area_indi_pane_cp03

0x5fdc,	// (0x0003de3f) popup_slider_window_g1_ParamLimits

0x5ff8,	// (0x0003de5b) popup_slider_window_g2_ParamLimits

0x6014,	// (0x0003de77) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00047b59) popup_slider_window_g_ParamLimits

0x6070,	// (0x0003ded3) popup_slider_window_t1_ParamLimits

0x60e4,	// (0x0003df47) small_volume_slider_vertical_pane_ParamLimits

0xe1c3,	// (0x00046026) cell_graphic2_pane_ParamLimits

0xe226,	// (0x00046089) bg_button_pane_cp10_ParamLimits

0xe226,	// (0x00046089) bg_button_pane_cp10

0xe239,	// (0x0004609c) bg_button_pane_cp11_ParamLimits

0xe239,	// (0x0004609c) bg_button_pane_cp11

0xe24c,	// (0x000460af) graphic2_pages_pane_g1_ParamLimits

0xe24c,	// (0x000460af) graphic2_pages_pane_g1

0xe267,	// (0x000460ca) graphic2_pages_pane_g2_ParamLimits

0xe267,	// (0x000460ca) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00047c1d) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00047c1d) graphic2_pages_pane_g

0xe27f,	// (0x000460e2) graphic2_pages_pane_t1_ParamLimits

0xe27f,	// (0x000460e2) graphic2_pages_pane_t1

0xe297,	// (0x000460fa) cell_graphic2_control_pane_ParamLimits

0xe297,	// (0x000460fa) cell_graphic2_control_pane

0xe2cb,	// (0x0004612e) cell_graphic2_pane_g1_ParamLimits

0xe2cb,	// (0x0004612e) cell_graphic2_pane_g1

0xd87f,	// (0x000456e2) cell_graphic2_pane_g2_ParamLimits

0xd87f,	// (0x000456e2) cell_graphic2_pane_g2

0xcb26,	// (0x00044989) cell_graphic2_pane_g3_ParamLimits

0xcb26,	// (0x00044989) cell_graphic2_pane_g3

0xd88c,	// (0x000456ef) cell_graphic2_pane_g4_ParamLimits

0xd88c,	// (0x000456ef) cell_graphic2_pane_g4

0xe2d8,	// (0x0004613b) cell_graphic2_pane_g5_ParamLimits

0xe2d8,	// (0x0004613b) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00047c22) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00047c22) cell_graphic2_pane_g

0xe2f8,	// (0x0004615b) cell_graphic2_pane_t1_ParamLimits

0xe2f8,	// (0x0004615b) cell_graphic2_pane_t1

0x300f,	// (0x0003ae72) grid_highlight_pane_cp11_ParamLimits

0x300f,	// (0x0003ae72) grid_highlight_pane_cp11

0x8360,	// (0x000401c3) bg_button_pane_cp05

0xe32d,	// (0x00046190) cell_graphic2_control_pane_g1

0x498c,	// (0x0003c7ef) bg_touch_area_indi_pane_g1

0x6bf3,	// (0x0003ea56) aid_cmod_rocker_key_size

0x6bfd,	// (0x0003ea60) aid_cmode_itu_key_size

0x6c07,	// (0x0003ea6a) main_cmode_video_pane

0x6c11,	// (0x0003ea74) main_comp_mode_itu_pane

0x6c1d,	// (0x0003ea80) main_comp_mode_rocker_pane

0x6c29,	// (0x0003ea8c) cell_cmode_rocker_pane_ParamLimits

0x6c29,	// (0x0003ea8c) cell_cmode_rocker_pane

0x6c3d,	// (0x0003eaa0) cell_cmode_itu_pane_ParamLimits

0x6c3d,	// (0x0003eaa0) cell_cmode_itu_pane

0xb973,	// (0x000437d6) bg_button_pane_cp06_ParamLimits

0xb973,	// (0x000437d6) bg_button_pane_cp06

0x4c07,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_ParamLimits

0x4c07,	// (0x0003ca6a) cell_cmode_rocker_pane_g1

0x618b,	// (0x0003dfee) cell_cmode_rocker_pane_g2_ParamLimits

0x618b,	// (0x0003dfee) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00047c32) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00047c32) cell_cmode_rocker_pane_g

0x7770,	// (0x0003f5d3) bg_button_pane_cp07

0x6c54,	// (0x0003eab7) cell_cmode_itu_pane_g1

0x6c5d,	// (0x0003eac0) cell_cmode_itu_pane_t1

0x6c6b,	// (0x0003eace) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00047c37) cell_cmode_itu_pane_t

0x63b9,	// (0x0003e21c) aid_touch_ctrl_left

0x63c1,	// (0x0003e224) aid_touch_ctrl_right

0x7770,	// (0x0003f5d3) compa_mode_pane

0xe353,	// (0x000461b6) aid_cmod_rocker_key_size_cp

0xe35d,	// (0x000461c0) aid_cmode_itu_key_size_cp

0x6c8d,	// (0x0003eaf0) compa_mode_pane_g1

0x6c95,	// (0x0003eaf8) compa_mode_pane_g2

0x6c9d,	// (0x0003eb00) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00047c3c) compa_mode_pane_g

0xe367,	// (0x000461ca) main_comp_mode_itu_pane_cp

0xe36f,	// (0x000461d2) main_comp_mode_rocker_pane_cp

0xe377,	// (0x000461da) cell_cmode_itu_pane_cp_ParamLimits

0xe377,	// (0x000461da) cell_cmode_itu_pane_cp

0xe38c,	// (0x000461ef) cell_cmode_rocker_pane_cp_ParamLimits

0xe38c,	// (0x000461ef) cell_cmode_rocker_pane_cp

0xb973,	// (0x000437d6) bg_button_pane_cp06_cp_ParamLimits

0xb973,	// (0x000437d6) bg_button_pane_cp06_cp

0x4c07,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4c07,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_cp

0x498c,	// (0x0003c7ef) cell_cmode_rocker_pane_g2_cp

0x7770,	// (0x0003f5d3) bg_button_pane_cp07_cp

0xe39e,	// (0x00046201) cell_cmode_itu_pane_g1_cp

0xe3a7,	// (0x0004620a) cell_cmode_itu_pane_t1_cp

0xe3a7,	// (0x0004620a) cell_cmode_itu_pane_t2_cp

0xc782,	// (0x000445e5) settings_code_pane_cp2

0x821f,	// (0x00040082) bg_popup_window_pane_cp3_ParamLimits

0x854e,	// (0x000403b1) heading_pane_cp3_ParamLimits

0x855a,	// (0x000403bd) listscroll_popup_graphic_pane_ParamLimits

0x07fd,	// (0x00038660) fep_hwr_aid_pane_ParamLimits

0x0dee,	// (0x00038c51) aid_touch_sctrl_top_ParamLimits

0x0e09,	// (0x00038c6c) sctrl_sk_top_pane_g1_ParamLimits

0x0a6a,	// (0x000388cd) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00047b72) sctrl_sk_top_pane_g_ParamLimits

0x0e16,	// (0x00038c79) sctrl_sk_top_pane_t1_ParamLimits

0x0dee,	// (0x00038c51) aid_touch_sctrl_bottom_ParamLimits

0x0e16,	// (0x00038c79) sctrl_sk_bottom_pane_t1_ParamLimits

0x62ff,	// (0x0003e162) aid_area_touch_clock

0xb52d,	// (0x00043390) aid_vkb2_area_top_pane_cell_ParamLimits

0xb52d,	// (0x00043390) aid_vkb2_area_top_pane_cell

0xb5d8,	// (0x0004343b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb5d8,	// (0x0004343b) aid_vkb2_area_bottom_pane_cell

0x6864,	// (0x0003e6c7) popup_char_count_window

0x6cf3,	// (0x0003eb56) popup_char_count_window_g1

0x6cfc,	// (0x0003eb5f) popup_char_count_window_g2

0x6d05,	// (0x0003eb68) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00047c43) popup_char_count_window_g

0x6d0e,	// (0x0003eb71) popup_char_count_window_t1

0x0ec7,	// (0x00038d2a) popup_fep_char_preview_window_ParamLimits

0x0ec7,	// (0x00038d2a) popup_fep_char_preview_window

0xb54d,	// (0x000433b0) vkb2_top_candi_pane_ParamLimits

0xb54d,	// (0x000433b0) vkb2_top_candi_pane

0xe3b5,	// (0x00046218) cell_vkb2_top_candi_pane_ParamLimits

0xe3b5,	// (0x00046218) cell_vkb2_top_candi_pane

0x1443,	// (0x000392a6) bg_popup_fep_char_preview_window_ParamLimits

0x1443,	// (0x000392a6) bg_popup_fep_char_preview_window

0x1451,	// (0x000392b4) popup_fep_char_preview_window_t1_ParamLimits

0x1451,	// (0x000392b4) popup_fep_char_preview_window_t1

0x6d6d,	// (0x0003ebd0) bg_popup_fep_char_preview_window_g1

0x6d75,	// (0x0003ebd8) bg_popup_fep_char_preview_window_g2

0x6d7d,	// (0x0003ebe0) bg_popup_fep_char_preview_window_g3

0x6d85,	// (0x0003ebe8) bg_popup_fep_char_preview_window_g4

0x6d8d,	// (0x0003ebf0) bg_popup_fep_char_preview_window_g5

0x148b,	// (0x000392ee) bg_popup_fep_char_preview_window_g6

0x6d95,	// (0x0003ebf8) bg_popup_fep_char_preview_window_g7

0x6d9d,	// (0x0003ec00) bg_popup_fep_char_preview_window_g8

0x6da5,	// (0x0003ec08) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00047c4a) bg_popup_fep_char_preview_window_g

0x0a6a,	// (0x000388cd) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0a6a,	// (0x000388cd) cell_vkb2_top_candi_pane_g1

0x0a78,	// (0x000388db) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0a78,	// (0x000388db) cell_vkb2_top_candi_pane_g2

0x5800,	// (0x0003d663) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5800,	// (0x0003d663) cell_vkb2_top_candi_pane_g3

0x1493,	// (0x000392f6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1493,	// (0x000392f6) cell_vkb2_top_candi_pane_g4

0x5126,	// (0x0003cf89) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5126,	// (0x0003cf89) cell_vkb2_top_candi_pane_g5

0x14b4,	// (0x00039317) cell_vkb2_top_candi_pane_g6_ParamLimits

0x14b4,	// (0x00039317) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00047c5d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00047c5d) cell_vkb2_top_candi_pane_g

0x14c2,	// (0x00039325) cell_vkb2_top_candi_pane_t1

0x05d4,	// (0x00038437) aid_size_touch_slider_mark_ParamLimits

0x05d4,	// (0x00038437) aid_size_touch_slider_mark

0xe0d4,	// (0x00045f37) grid_graphic2_catg_pane_ParamLimits

0xe0d4,	// (0x00045f37) grid_graphic2_catg_pane

0xe192,	// (0x00045ff5) popup_grid_graphic2_window_t1_ParamLimits

0xe192,	// (0x00045ff5) popup_grid_graphic2_window_t1

0xe1a8,	// (0x0004600b) popup_grid_graphic2_window_t2_ParamLimits

0xe1a8,	// (0x0004600b) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00047c18) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00047c18) popup_grid_graphic2_window_t

0x8360,	// (0x000401c3) bg_button_pane_cp05_ParamLimits

0xe32d,	// (0x00046190) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x00046282) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x00046282) cell_graphic2_catg_pane

0x7770,	// (0x0003f5d3) bg_button_pane_cp12

0xe431,	// (0x00046294) cell_graphic2_catg_pane_g1

0x62cb,	// (0x0003e12e) cell_tb_ext_pane_t1_ParamLimits

0x1275,	// (0x000390d8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1275,	// (0x000390d8) vkb2_top_cell_right_narrow_pane

0x128d,	// (0x000390f0) vkb2_top_cell_right_wide_pane_ParamLimits

0x128d,	// (0x000390f0) vkb2_top_cell_right_wide_pane

0x07ef,	// (0x00038652) bg_vkb2_func_pane_ParamLimits

0x07ef,	// (0x00038652) bg_vkb2_func_pane

0x12fe,	// (0x00039161) vkb2_top_cell_left_pane_g1_ParamLimits

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp03_ParamLimits

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp03

0x135c,	// (0x000391bf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2350,	// (0x0003a1b3) bg_vkb2_func_pane_g1

0x2358,	// (0x0003a1bb) bg_vkb2_func_pane_g2

0x2368,	// (0x0003a1cb) bg_vkb2_func_pane_g3

0x2360,	// (0x0003a1c3) bg_vkb2_func_pane_g4

0x2370,	// (0x0003a1d3) bg_vkb2_func_pane_g5

0x2378,	// (0x0003a1db) bg_vkb2_func_pane_g6

0x2380,	// (0x0003a1e3) bg_vkb2_func_pane_g7

0x2388,	// (0x0003a1eb) bg_vkb2_func_pane_g8

0x2348,	// (0x0003a1ab) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00047c6a) bg_vkb2_func_pane_g

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp01_ParamLimits

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp01

0x12fe,	// (0x00039161) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x12fe,	// (0x00039161) vkb2_top_cell_right_wide_pane_g1

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp02_ParamLimits

0x07ef,	// (0x00038652) bg_vkb2_fuc_pane_cp02

0x135c,	// (0x000391bf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x135c,	// (0x000391bf) vkb2_top_cell_right_narrow_pane_g1

0xd0e6,	// (0x00044f49) aid_touch_area_decrease_ParamLimits

0xd0e6,	// (0x00044f49) aid_touch_area_decrease

0xd120,	// (0x00044f83) aid_touch_area_increase_ParamLimits

0xd120,	// (0x00044f83) aid_touch_area_increase

0xd148,	// (0x00044fab) aid_touch_area_mute_ParamLimits

0xd148,	// (0x00044fab) aid_touch_area_mute

0xd178,	// (0x00044fdb) aid_touch_area_slider_ParamLimits

0xd178,	// (0x00044fdb) aid_touch_area_slider

0xd1b8,	// (0x0004501b) popup_slider_window_g4_ParamLimits

0xd1b8,	// (0x0004501b) popup_slider_window_g4

0xd1e0,	// (0x00045043) popup_slider_window_g5_ParamLimits

0xd1e0,	// (0x00045043) popup_slider_window_g5

0xd214,	// (0x00045077) popup_slider_window_g6_ParamLimits

0xd214,	// (0x00045077) popup_slider_window_g6

0x609e,	// (0x0003df01) popup_slider_window_t2_ParamLimits

0x609e,	// (0x0003df01) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00047b66) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00047b66) popup_slider_window_t

0xd230,	// (0x00045093) slider_pane_ParamLimits

0xd230,	// (0x00045093) slider_pane

0x6dc8,	// (0x0003ec2b) slider_pane_g1_ParamLimits

0x6dc8,	// (0x0003ec2b) slider_pane_g1

0x6ddc,	// (0x0003ec3f) slider_pane_g2_ParamLimits

0x6ddc,	// (0x0003ec3f) slider_pane_g2

0x6df2,	// (0x0003ec55) slider_pane_g3_ParamLimits

0x6df2,	// (0x0003ec55) slider_pane_g3

0x0003,

0xfe1a,	// (0x00047c7d) slider_pane_g_ParamLimits

0xfe1a,	// (0x00047c7d) slider_pane_g

0xaaff,	// (0x00042962) popup_tb_float_extension_window_ParamLimits

0xaaff,	// (0x00042962) popup_tb_float_extension_window

0x6e1e,	// (0x0003ec81) aid_size_cell_tb_float_ext

0x7770,	// (0x0003f5d3) bg_popup_sub_window_cp28

0x6e2a,	// (0x0003ec8d) grid_tb_float_ext_pane

0x6e36,	// (0x0003ec99) cell_tb_float_ext_pane_ParamLimits

0x6e36,	// (0x0003ec99) cell_tb_float_ext_pane

0x6e52,	// (0x0003ecb5) cell_tb_float_ext_pane_g1

0x6e5b,	// (0x0003ecbe) grid_highlight_pane_cp12

0xb149,	// (0x00042fac) cell_last_hwr_side_pane_ParamLimits

0xb149,	// (0x00042fac) cell_last_hwr_side_pane

0x498c,	// (0x0003c7ef) cell_last_hwr_side_pane_g1

0x6e64,	// (0x0003ecc7) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00047c86) cell_last_hwr_side_pane_g

0xb6b4,	// (0x00043517) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb6b4,	// (0x00043517) vkb2_area_bottom_space_btn_pane

0x0a6a,	// (0x000388cd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6919,	// (0x0003e77c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x14c2,	// (0x00039325) cell_vkb2_top_candi_pane_t1_ParamLimits

0x14e0,	// (0x00039343) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x14e0,	// (0x00039343) vkb2_area_bottom_space_btn_pane_g1

0x151a,	// (0x0003937d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x151a,	// (0x0003937d) vkb2_area_bottom_space_btn_pane_g2

0x1550,	// (0x000393b3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1550,	// (0x000393b3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00047c8b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00047c8b) vkb2_area_bottom_space_btn_pane_g

0x08b4,	// (0x00038717) cel_fep_hwr_func_pane_ParamLimits

0x08b4,	// (0x00038717) cel_fep_hwr_func_pane

0xb11e,	// (0x00042f81) cell_hwr_side_button_pane_ParamLimits

0xb11e,	// (0x00042f81) cell_hwr_side_button_pane

0x62ff,	// (0x0003e162) aid_area_touch_clock_ParamLimits

0x8360,	// (0x000401c3) bg_uniindi_top_pane_ParamLimits

0x6313,	// (0x0003e176) uniindi_top_pane_g1_ParamLimits

0x6329,	// (0x0003e18c) uniindi_top_pane_g2_ParamLimits

0x6335,	// (0x0003e198) uniindi_top_pane_g3_ParamLimits

0x6346,	// (0x0003e1a9) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00047b9e) uniindi_top_pane_g_ParamLimits

0x6353,	// (0x0003e1b6) uniindi_top_pane_t1_ParamLimits

0x8360,	// (0x000401c3) bg_vkb2_func_pane_cp01_ParamLimits

0x8360,	// (0x000401c3) bg_vkb2_func_pane_cp01

0x6e6d,	// (0x0003ecd0) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e6d,	// (0x0003ecd0) cel_fep_hwr_func_pane_g1

0x8360,	// (0x000401c3) bg_vkb2_func_pane_cp02_ParamLimits

0x8360,	// (0x000401c3) bg_vkb2_func_pane_cp02

0x6e6d,	// (0x0003ecd0) cell_hwr_side_button_pane_g1_ParamLimits

0x6e6d,	// (0x0003ecd0) cell_hwr_side_button_pane_g1

0x21c9,	// (0x0003a02c) status_pane_g4_ParamLimits

0x21c9,	// (0x0003a02c) status_pane_g4

0x21e3,	// (0x0003a046) status_pane_t1

0x472b,	// (0x0003c58e) form2_midp_gauge_slider_cont_pane

0x4733,	// (0x0003c596) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca6c,	// (0x000448cf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca7e,	// (0x000448e1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0004795e) form2_midp_gauge_slider_pane_t_ParamLimits

0x4769,	// (0x0003c5cc) form2_midp_slider_pane_ParamLimits

0x0e87,	// (0x00038cea) aid_size_cell_func_vkb2_ParamLimits

0x0e87,	// (0x00038cea) aid_size_cell_func_vkb2

0x6e0a,	// (0x0003ec6d) slider_pane_g4_ParamLimits

0x6e0a,	// (0x0003ec6d) slider_pane_g4

0xb715,	// (0x00043578) form2_midp_gauge_slider_pane_t2_cp01

0xb723,	// (0x00043586) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb723,	// (0x00043586) form2_midp_gauge_slider_pane_t3_cp01

0x15c5,	// (0x00039428) form2_midp_slider_pane_cp01

0x7770,	// (0x0003f5d3) navi_smil_pane

0x6ea6,	// (0x0003ed09) navi_smil_pane_g1

0x6eae,	// (0x0003ed11) navi_smil_pane_t1

0x6e7b,	// (0x0003ecde) form2_midp_slider_pane_g1

0x6e84,	// (0x0003ece7) form2_midp_slider_pane_g2

0x6e8c,	// (0x0003ecef) form2_midp_slider_pane_g3

0x6e7b,	// (0x0003ecde) form2_midp_slider_pane_g4

0xe43a,	// (0x0004629d) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00047c94) form2_midp_slider_pane_g

0x158a,	// (0x000393ed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x158a,	// (0x000393ed) vkb2_area_bottom_space_btn_pane_g4

0xace6,	// (0x00042b49) lc0_navi_pane_ParamLimits

0xace6,	// (0x00042b49) lc0_navi_pane

0xad56,	// (0x00042bb9) lc0_stat_indi_pane_ParamLimits

0xad56,	// (0x00042bb9) lc0_stat_indi_pane

0xad6b,	// (0x00042bce) ls0_title_pane_ParamLimits

0xad6b,	// (0x00042bce) ls0_title_pane

0xb973,	// (0x000437d6) bg_popup_sub_pane_cp14_ParamLimits

0x62e6,	// (0x0003e149) list_uniindi_pane_ParamLimits

0x62f2,	// (0x0003e155) uniindi_top_pane_ParamLimits

0x6391,	// (0x0003e1f4) list_single_uniindi_pane_g1_ParamLimits

0x63a4,	// (0x0003e207) list_single_uniindi_pane_t1_ParamLimits

0xb740,	// (0x000435a3) lc0_stat_clock_pane_ParamLimits

0xb740,	// (0x000435a3) lc0_stat_clock_pane

0xe443,	// (0x000462a6) lc0_stat_indi_pane_g1_ParamLimits

0xe443,	// (0x000462a6) lc0_stat_indi_pane_g1

0xe450,	// (0x000462b3) lc0_stat_indi_pane_g2_ParamLimits

0xe450,	// (0x000462b3) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00047c9f) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00047c9f) lc0_stat_indi_pane_g

0xb74d,	// (0x000435b0) lc0_uni_indicator_pane_ParamLimits

0xb74d,	// (0x000435b0) lc0_uni_indicator_pane

0xe45d,	// (0x000462c0) ls0_title_pane_g1_ParamLimits

0xe45d,	// (0x000462c0) ls0_title_pane_g1

0xe471,	// (0x000462d4) ls0_title_pane_t1_ParamLimits

0xe471,	// (0x000462d4) ls0_title_pane_t1

0xb75a,	// (0x000435bd) lc0_uni_indicator_pane_g1_ParamLimits

0xb75a,	// (0x000435bd) lc0_uni_indicator_pane_g1

0x6f20,	// (0x0003ed83) lc0_stat_clock_pane_t1

0x7770,	// (0x0003f5d3) main_ai5_pane

0x6f2e,	// (0x0003ed91) ai5_sk_pane_ParamLimits

0x6f2e,	// (0x0003ed91) ai5_sk_pane

0xe49f,	// (0x00046302) cell_ai5_widget_pane_ParamLimits

0xe49f,	// (0x00046302) cell_ai5_widget_pane

0x74d7,	// (0x0003f33a) aid_size_cell_widget_grid

0x74e5,	// (0x0003f348) bg_ai5_widget_pane_ParamLimits

0x74e5,	// (0x0003f348) bg_ai5_widget_pane

0x7559,	// (0x0003f3bc) cell_ai5_widget_pane_g2

0x7569,	// (0x0003f3cc) cell_ai5_widget_pane_g3

0x7580,	// (0x0003f3e3) cell_ai5_widget_pane_g4

0x758c,	// (0x0003f3ef) cell_ai5_widget_pane_g5

0xe7f6,	// (0x00046659) cell_ai5_widget_pane_g6

0xe802,	// (0x00046665) cell_ai5_widget_pane_g7

0x75ec,	// (0x0003f44f) cell_ai5_widget_pane_t1_ParamLimits

0x75ec,	// (0x0003f44f) cell_ai5_widget_pane_t1

0x7609,	// (0x0003f46c) cell_ai5_widget_pane_t2_ParamLimits

0x7609,	// (0x0003f46c) cell_ai5_widget_pane_t2

0x7621,	// (0x0003f484) cell_ai5_widget_pane_t3_ParamLimits

0x7621,	// (0x0003f484) cell_ai5_widget_pane_t3

0x7639,	// (0x0003f49c) cell_ai5_widget_pane_t4_ParamLimits

0x7639,	// (0x0003f49c) cell_ai5_widget_pane_t4

0x7656,	// (0x0003f4b9) cell_ai5_widget_pane_t5_ParamLimits

0x7656,	// (0x0003f4b9) cell_ai5_widget_pane_t5

0x7675,	// (0x0003f4d8) cell_ai5_widget_pane_t6_ParamLimits

0x7675,	// (0x0003f4d8) cell_ai5_widget_pane_t6

0x7687,	// (0x0003f4ea) cell_ai5_widget_pane_t7_ParamLimits

0x7687,	// (0x0003f4ea) cell_ai5_widget_pane_t7

0x76a0,	// (0x0003f503) cell_ai5_widget_pane_t8_ParamLimits

0x76a0,	// (0x0003f503) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00047cb9) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00047cb9) cell_ai5_widget_pane_t

0x76f4,	// (0x0003f557) grid_ai5_widget_pane

0xb973,	// (0x000437d6) highlight_cell_ai5_widget_pane_ParamLimits

0xb973,	// (0x000437d6) highlight_cell_ai5_widget_pane

0xe80e,	// (0x00046671) ai5_sk_left_pane

0xe818,	// (0x0004667b) ai5_sk_middle_pane

0xe822,	// (0x00046685) ai5_sk_right_pane

0x7720,	// (0x0003f583) bg_ai5_widget_pane_g1_ParamLimits

0x7720,	// (0x0003f583) bg_ai5_widget_pane_g1

0x772c,	// (0x0003f58f) bg_ai5_widget_pane_g2_ParamLimits

0x772c,	// (0x0003f58f) bg_ai5_widget_pane_g2

0x7738,	// (0x0003f59b) bg_ai5_widget_pane_g3_ParamLimits

0x7738,	// (0x0003f59b) bg_ai5_widget_pane_g3

0x7744,	// (0x0003f5a7) bg_ai5_widget_pane_g4_ParamLimits

0x7744,	// (0x0003f5a7) bg_ai5_widget_pane_g4

0x7750,	// (0x0003f5b3) bg_ai5_widget_pane_g5_ParamLimits

0x7750,	// (0x0003f5b3) bg_ai5_widget_pane_g5

0x775c,	// (0x0003f5bf) bg_ai5_widget_pane_g6_ParamLimits

0x775c,	// (0x0003f5bf) bg_ai5_widget_pane_g6

0x77a6,	// (0x0003f609) bg_ai5_widget_pane_g7_ParamLimits

0x77a6,	// (0x0003f609) bg_ai5_widget_pane_g7

0x77b2,	// (0x0003f615) bg_ai5_widget_pane_g8_ParamLimits

0x77b2,	// (0x0003f615) bg_ai5_widget_pane_g8

0x77be,	// (0x0003f621) bg_ai5_widget_pane_g9_ParamLimits

0x77be,	// (0x0003f621) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00047cce) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00047cce) bg_ai5_widget_pane_g

0x77f6,	// (0x0003f659) cell_shortcut_ai5_widget_pane_ParamLimits

0x77f6,	// (0x0003f659) cell_shortcut_ai5_widget_pane

0xf333,	// (0x00047196) bg_cell_shortcut_ai5_widget_pane

0x7809,	// (0x0003f66c) cell_grid_ai5_widget_pane_g1

0xf333,	// (0x00047196) highlight_cell_shortcut_ai5_widget_pane

0x2350,	// (0x0003a1b3) ai5_sk_left_pane_g1

0x7812,	// (0x0003f675) ai5_sk_left_pane_g2

0x781a,	// (0x0003f67d) ai5_sk_left_pane_g3

0x7822,	// (0x0003f685) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00047ce1) ai5_sk_left_pane_g

0x782a,	// (0x0003f68d) ai5_sk_left_pane_t1

0x2358,	// (0x0003a1bb) ai5_sk_right_pane_g1

0x7838,	// (0x0003f69b) ai5_sk_right_pane_g2

0x7840,	// (0x0003f6a3) ai5_sk_right_pane_g3

0x7848,	// (0x0003f6ab) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00047cea) ai5_sk_right_pane_g

0x7850,	// (0x0003f6b3) ai5_sk_right_pane_t1

0x2358,	// (0x0003a1bb) ai5_sk_middle_pane_g1

0x2350,	// (0x0003a1b3) ai5_sk_middle_pane_g2

0x2370,	// (0x0003a1d3) ai5_sk_middle_pane_g3

0x7840,	// (0x0003f6a3) ai5_sk_middle_pane_g4

0x781a,	// (0x0003f67d) ai5_sk_middle_pane_g5

0x785e,	// (0x0003f6c1) ai5_sk_middle_pane_g6

0xe82c,	// (0x0004668f) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00047cf3) ai5_sk_middle_pane_g

0xabd0,	// (0x00042a33) aid_touch_area_size_lc0_ParamLimits

0xabd0,	// (0x00042a33) aid_touch_area_size_lc0

0x0a99,	// (0x000388fc) cell_hwr_candidate_pane_t1_ParamLimits

0x1e80,	// (0x00039ce3) aid_touch_navi_pane

0xae76,	// (0x00042cd9) status_dt_navi_pane_ParamLimits

0xae76,	// (0x00042cd9) status_dt_navi_pane

0xae8e,	// (0x00042cf1) status_dt_sta_pane_ParamLimits

0xae8e,	// (0x00042cf1) status_dt_sta_pane

0xe834,	// (0x00046697) dt_sta_controll_pane

0xe841,	// (0x000466a4) dt_sta_indi_pane

0xe84e,	// (0x000466b1) dt_sta_title_pane

0x8360,	// (0x000401c3) bg_dt_sta_indi_pane_ParamLimits

0x8360,	// (0x000401c3) bg_dt_sta_indi_pane

0xe860,	// (0x000466c3) dt_sta_battery_pane

0xe868,	// (0x000466cb) dt_sta_indi_pane_g1

0xe871,	// (0x000466d4) dt_sta_indi_pane_g2

0xe87a,	// (0x000466dd) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00047d02) dt_sta_indi_pane_g

0xe883,	// (0x000466e6) dt_sta_signal_pane

0xb973,	// (0x000437d6) bg_dt_sta_title_pane_ParamLimits

0xb973,	// (0x000437d6) bg_dt_sta_title_pane

0xe88c,	// (0x000466ef) dt_sta_title_pane_g1

0xe894,	// (0x000466f7) dt_sta_title_pane_t1_ParamLimits

0xe894,	// (0x000466f7) dt_sta_title_pane_t1

0x7770,	// (0x0003f5d3) bg_dt_sta_control_pane

0xe8a9,	// (0x0004670c) dt_sta_controll_pane_g1

0xe8b2,	// (0x00046715) bg_dt_sta_title_pane_g1

0xe8bb,	// (0x0004671e) bg_dt_sta_title_pane_g2

0xe8c4,	// (0x00046727) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00047d09) bg_dt_sta_title_pane_g

0x498c,	// (0x0003c7ef) bg_dt_sta_indi_pane_g1

0x790c,	// (0x0003f76f) dt_sta_signal_pane_g1

0x7914,	// (0x0003f777) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00047d10) dt_sta_signal_pane_g

0x791c,	// (0x0003f77f) dt_sta_battery_pane_g1

0x7925,	// (0x0003f788) dt_sta_battery_pane_t1

0x498c,	// (0x0003c7ef) bg_dt_sta_control_pane_g1

0xbed7,	// (0x00043d3a) fep_china_uni_eep_pane

0xbedf,	// (0x00043d42) fep_china_uni_entry_pane_ParamLimits

0xbeef,	// (0x00043d52) popup_fep_china_uni_window_g1_ParamLimits

0xbeff,	// (0x00043d62) popup_fep_china_uni_window_g2_ParamLimits

0xbeff,	// (0x00043d62) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00047580) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00047580) popup_fep_china_uni_window_g

0x7934,	// (0x0003f797) fep_china_uni_eep_pane_g1

0x793c,	// (0x0003f79f) fep_china_uni_eep_pane_t1

0x6e9d,	// (0x0003ed00) aid_touch_area_size_smil_player

0x1fd8,	// (0x00039e3b) lc0_clock_pane

0x21d7,	// (0x0003a03a) status_pane_g5_ParamLimits

0x21d7,	// (0x0003a03a) status_pane_g5

0xa625,	// (0x00042488) popup_keymap_window

0x2195,	// (0x00039ff8) status_icon_pane

0x7569,	// (0x0003f3cc) cell_ai5_widget_pane_g3_ParamLimits

0x7580,	// (0x0003f3e3) cell_ai5_widget_pane_g4_ParamLimits

0x758c,	// (0x0003f3ef) cell_ai5_widget_pane_g5_ParamLimits

0x75b0,	// (0x0003f413) cell_ai5_widget_pane_g8_ParamLimits

0x75b0,	// (0x0003f413) cell_ai5_widget_pane_g8

0x75c4,	// (0x0003f427) cell_ai5_widget_pane_g9_ParamLimits

0x75c4,	// (0x0003f427) cell_ai5_widget_pane_g9

0x75d8,	// (0x0003f43b) cell_ai5_widget_pane_g10_ParamLimits

0x75d8,	// (0x0003f43b) cell_ai5_widget_pane_g10

0x794b,	// (0x0003f7ae) status_icon_pane_g1

0x7770,	// (0x0003f5d3) bg_popup_sub_pane_cp13

0x7953,	// (0x0003f7b6) popup_keymap_window_t1

0xa306,	// (0x00042169) control_pane_g6_ParamLimits

0xa306,	// (0x00042169) control_pane_g6

0xa313,	// (0x00042176) control_pane_g7_ParamLimits

0xa313,	// (0x00042176) control_pane_g7

0xa320,	// (0x00042183) control_pane_g8_ParamLimits

0xa320,	// (0x00042183) control_pane_g8

0xe834,	// (0x00046697) dt_sta_controll_pane_ParamLimits

0xe841,	// (0x000466a4) dt_sta_indi_pane_ParamLimits

0xe84e,	// (0x000466b1) dt_sta_title_pane_ParamLimits

0x8784,	// (0x000405e7) aid_size_touch_scroll_bar_cale

0xed4f,	// (0x00046bb2) popup_discreet_window_ParamLimits

0xed4f,	// (0x00046bb2) popup_discreet_window

0x92f7,	// (0x0004115a) popup_sk_window

0x2998,	// (0x0003a7fb) bg_popup_sub_pane_cp28_ParamLimits

0x2998,	// (0x0003a7fb) bg_popup_sub_pane_cp28

0x7961,	// (0x0003f7c4) popup_discreet_window_g1_ParamLimits

0x7961,	// (0x0003f7c4) popup_discreet_window_g1

0x7981,	// (0x0003f7e4) popup_discreet_window_t1_ParamLimits

0x7981,	// (0x0003f7e4) popup_discreet_window_t1

0x799f,	// (0x0003f802) popup_discreet_window_t2_ParamLimits

0x799f,	// (0x0003f802) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00047d15) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00047d15) popup_discreet_window_t

0x15fb,	// (0x0003945e) popup_sk_window_g1

0x1605,	// (0x00039468) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00047d1c) popup_sk_window_g

0x160f,	// (0x00039472) popup_sk_window_t1

0x161f,	// (0x00039482) popup_sk_window_t1_copy1

0x7559,	// (0x0003f3bc) cell_ai5_widget_pane_g2_ParamLimits

0x76b2,	// (0x0003f515) cell_ai5_widget_pane_t9_ParamLimits

0x76b2,	// (0x0003f515) cell_ai5_widget_pane_t9

0x7770,	// (0x0003f5d3) main_fep_fshwr2_pane

0xb779,	// (0x000435dc) aid_fshwr2_btn_pane

0xb78a,	// (0x000435ed) aid_fshwr2_syb_pane

0xb79b,	// (0x000435fe) aid_fshwr2_txt_pane

0xb7a7,	// (0x0004360a) fshwr2_func_candi_pane

0xb7c8,	// (0x0004362b) fshwr2_hwr_syb_pane

0xb7e5,	// (0x00043648) fshwr2_icf_pane

0xec72,	// (0x00046ad5) fshwr2_icf_bg_pane

0x16a1,	// (0x00039504) fshwr2_icf_pane_t1_ParamLimits

0x16a1,	// (0x00039504) fshwr2_icf_pane_t1

0xbe55,	// (0x00043cb8) fshwr2_func_candi_pane_g1

0xe8cd,	// (0x00046730) fshwr2_func_candi_row_pane_ParamLimits

0xe8cd,	// (0x00046730) fshwr2_func_candi_row_pane

0xb811,	// (0x00043674) cell_fshwr2_syb_pane_ParamLimits

0xb811,	// (0x00043674) cell_fshwr2_syb_pane

0x0a6a,	// (0x000388cd) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0a6a,	// (0x000388cd) fshwr2_hwr_syb_pane_g1

0xec72,	// (0x00046ad5) bg_popup_call_pane_cp01

0xb827,	// (0x0004368a) fshwr2_func_candi_cell_pane_ParamLimits

0xb827,	// (0x0004368a) fshwr2_func_candi_cell_pane

0xe8dd,	// (0x00046740) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe8dd,	// (0x00046740) fshwr2_func_candi_cell_bg_pane

0xb857,	// (0x000436ba) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb857,	// (0x000436ba) fshwr2_func_candi_cell_pane_g1

0xb886,	// (0x000436e9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb886,	// (0x000436e9) fshwr2_func_candi_cell_pane_t1

0xec72,	// (0x00046ad5) bg_button_pane_cp08

0x7a0d,	// (0x0003f870) cell_fshwr2_syb_bg_pane

0xb899,	// (0x000436fc) cell_fshwr2_syb_bg_pane_g1

0xb8a1,	// (0x00043704) cell_fshwr2_syb_bg_pane_t1

0xb973,	// (0x000437d6) main_tmo_pane

0xc57f,	// (0x000443e2) uni_indicator_pane_g1_ParamLimits

0xc595,	// (0x000443f8) uni_indicator_pane_g2_ParamLimits

0xc5ab,	// (0x0004440e) uni_indicator_pane_g3_ParamLimits

0xc5c0,	// (0x00044423) uni_indicator_pane_g4_ParamLimits

0xc5c0,	// (0x00044423) uni_indicator_pane_g4

0x3511,	// (0x0003b374) uni_indicator_pane_g5_ParamLimits

0x3511,	// (0x0003b374) uni_indicator_pane_g5

0x3511,	// (0x0003b374) uni_indicator_pane_g6_ParamLimits

0x3511,	// (0x0003b374) uni_indicator_pane_g6

0xf91c,	// (0x0004777f) uni_indicator_pane_g_ParamLimits

0xd0b6,	// (0x00044f19) popup_tmo_note_window_ParamLimits

0xd0b6,	// (0x00044f19) popup_tmo_note_window

0x0e69,	// (0x00038ccc) fshwr2_bg_pane

0xb877,	// (0x000436da) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb877,	// (0x000436da) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00047d21) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00047d21) fshwr2_func_candi_cell_pane_g

0x0a52,	// (0x000388b5) bg_popup_window_pane_cp01

0x174d,	// (0x000395b0) bg_popup_window_pane_g1_cp01

0x7a15,	// (0x0003f878) bg_popup_window_pane_cp22_ParamLimits

0x7a15,	// (0x0003f878) bg_popup_window_pane_cp22

0x7a23,	// (0x0003f886) listscroll_tmo_link_pane_ParamLimits

0x7a23,	// (0x0003f886) listscroll_tmo_link_pane

0x7a63,	// (0x0003f8c6) popup_tmo_note_window_g1_ParamLimits

0x7a63,	// (0x0003f8c6) popup_tmo_note_window_g1

0x7a70,	// (0x0003f8d3) tmo_note_info_pane_ParamLimits

0x7a70,	// (0x0003f8d3) tmo_note_info_pane

0xe8e9,	// (0x0004674c) list_tmo_note_info_pane_g1_ParamLimits

0xe8e9,	// (0x0004674c) list_tmo_note_info_pane_g1

0x7aa1,	// (0x0003f904) list_tmo_note_info_pane_g2_ParamLimits

0x7aa1,	// (0x0003f904) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00047d26) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00047d26) list_tmo_note_info_pane_g

0x7abd,	// (0x0003f920) list_tmo_note_info_text_pane_ParamLimits

0x7abd,	// (0x0003f920) list_tmo_note_info_text_pane

0x7b42,	// (0x0003f9a5) list_tmo_link_pane

0x7b4f,	// (0x0003f9b2) scroll_pane_cp20

0x7b5c,	// (0x0003f9bf) list_single_tmo_link_pane_ParamLimits

0x7b5c,	// (0x0003f9bf) list_single_tmo_link_pane

0x7b6c,	// (0x0003f9cf) list_single_tmo_link_pane_t1

0x7b7a,	// (0x0003f9dd) list_tmo_note_info_text_pane_t1_ParamLimits

0x7b7a,	// (0x0003f9dd) list_tmo_note_info_text_pane_t1

0x9d40,	// (0x00041ba3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d40,	// (0x00041ba3) aid_size_touch_scroll_bar_cp01

0x9c82,	// (0x00041ae5) aid_size_touch_slider_marker

0x92e7,	// (0x0004114a) popup_settings_window_ParamLimits

0x92e7,	// (0x0004114a) popup_settings_window

0xda44,	// (0x000458a7) popup_candi_list_indi_window

0x1e80,	// (0x00039ce3) aid_touch_navi_pane_ParamLimits

0x0dc2,	// (0x00038c25) rs_clock_indi_pane

0x0dcb,	// (0x00038c2e) sctrl_sk_bottom_pane_ParamLimits

0x0ddc,	// (0x00038c3f) sctrl_sk_top_pane_ParamLimits

0x0ee1,	// (0x00038d44) popup_fep_tooltip_window

0x74d7,	// (0x0003f33a) aid_size_cell_widget_grid_ParamLimits

0x7544,	// (0x0003f3a7) cell_ai5_widget_pane_g1_ParamLimits

0x7544,	// (0x0003f3a7) cell_ai5_widget_pane_g1

0xe7f6,	// (0x00046659) cell_ai5_widget_pane_g6_ParamLimits

0xe802,	// (0x00046665) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00047ca4) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00047ca4) cell_ai5_widget_pane_g

0x76d6,	// (0x0003f539) cell_ai5_widget_pane_t10_ParamLimits

0x76d6,	// (0x0003f539) cell_ai5_widget_pane_t10

0x76f4,	// (0x0003f557) grid_ai5_widget_pane_ParamLimits

0x77ca,	// (0x0003f62d) cell_contacts_ai5_widget_pane_ParamLimits

0x77ca,	// (0x0003f62d) cell_contacts_ai5_widget_pane

0x79b4,	// (0x0003f817) popup_discreet_window_t3_ParamLimits

0x79b4,	// (0x0003f817) popup_discreet_window_t3

0xb7fd,	// (0x00043660) popup_fshwr2_char_preview_window_ParamLimits

0xb7fd,	// (0x00043660) popup_fshwr2_char_preview_window

0xe900,	// (0x00046763) tmo_note_info_pane_t1

0xe915,	// (0x00046778) tmo_note_info_pane_t2

0xe92e,	// (0x00046791) tmo_note_info_pane_t3

0x7b1e,	// (0x0003f981) tmo_note_info_pane_t4

0x7b30,	// (0x0003f993) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00047d2b) tmo_note_info_pane_t

0x7b42,	// (0x0003f9a5) list_tmo_link_pane_ParamLimits

0x7b4f,	// (0x0003f9b2) scroll_pane_cp20_ParamLimits

0xec72,	// (0x00046ad5) bg_popup_fep_char_preview_window_cp01

0x7b93,	// (0x0003f9f6) popup_fshwr2_char_preview_window_t1

0x7ba1,	// (0x0003fa04) popup_candi_list_indi_window_g1

0x7baa,	// (0x0003fa0d) bg_cell_contacts_ai5_widget_pane

0x7bb6,	// (0x0003fa19) cell_contacts_ai5_widget_pane_g1

0x7bcb,	// (0x0003fa2e) cell_contacts_ai5_widget_pane_g2

0x7bd7,	// (0x0003fa3a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00047d36) cell_contacts_ai5_widget_pane_g

0x7be3,	// (0x0003fa46) cell_contacts_ai5_widget_pane_t1

0xb973,	// (0x000437d6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9a8,	// (0x0004680b) settings_container_pane

0xf333,	// (0x00047196) listscroll_set_pane_copy1

0x40ad,	// (0x0003bf10) scroll_pane_cp121_copy1

0x7c66,	// (0x0003fac9) set_content_pane_copy1

0xe9b4,	// (0x00046817) aid_height_set_list_copy1_ParamLimits

0xe9b4,	// (0x00046817) aid_height_set_list_copy1

0x3711,	// (0x0003b574) aid_size_parent_copy1_ParamLimits

0x3711,	// (0x0003b574) aid_size_parent_copy1

0xe9c0,	// (0x00046823) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9c0,	// (0x00046823) button_value_adjust_pane_cp6_copy1

0x0142,	// (0x00037fa5) list_highlight_pane_cp2_copy1_ParamLimits

0x0142,	// (0x00037fa5) list_highlight_pane_cp2_copy1

0xe9d4,	// (0x00046837) list_set_pane_copy1_ParamLimits

0xe9d4,	// (0x00046837) list_set_pane_copy1

0xe943,	// (0x000467a6) main_pane_set_t1_copy1_ParamLimits

0xe943,	// (0x000467a6) main_pane_set_t1_copy1

0xe97d,	// (0x000467e0) main_pane_set_t2_copy1_ParamLimits

0xe97d,	// (0x000467e0) main_pane_set_t2_copy1

0xea9b,	// (0x000468fe) main_pane_set_t3_copy1

0xeaa9,	// (0x0004690c) main_pane_set_t4_copy1

0xe99c,	// (0x000467ff) set_content_pane_g1_copy1_ParamLimits

0xe99c,	// (0x000467ff) set_content_pane_g1_copy1

0xeab7,	// (0x0004691a) setting_code_pane_copy1

0x7d79,	// (0x0003fbdc) setting_slider_graphic_pane_copy1

0x7d79,	// (0x0003fbdc) setting_slider_pane_copy1

0x7d79,	// (0x0003fbdc) setting_text_pane_copy1

0x7d79,	// (0x0003fbdc) setting_volume_pane_copy1

0xeab7,	// (0x0004691a) settings_code_pane_cp2_copy1

0xeabf,	// (0x00046922) settings_code_pane_cp_copy1_ParamLimits

0xeabf,	// (0x00046922) settings_code_pane_cp_copy1

0xb8b0,	// (0x00043713) volume_set_pane_copy1

0xead3,	// (0x00046936) volume_set_pane_g10_copy1

0xeadf,	// (0x00046942) volume_set_pane_g1_copy1

0xeae9,	// (0x0004694c) volume_set_pane_g2_copy1

0xeaf3,	// (0x00046956) volume_set_pane_g3_copy1

0xeafd,	// (0x00046960) volume_set_pane_g4_copy1

0xeb07,	// (0x0004696a) volume_set_pane_g5_copy1

0xeb11,	// (0x00046974) volume_set_pane_g6_copy1

0xeb1b,	// (0x0004697e) volume_set_pane_g7_copy1

0xeb25,	// (0x00046988) volume_set_pane_g8_copy1

0xeb2f,	// (0x00046992) volume_set_pane_g9_copy1

0x821f,	// (0x00040082) bg_set_opt_pane_cp_copy1_ParamLimits

0x821f,	// (0x00040082) bg_set_opt_pane_cp_copy1

0x1762,	// (0x000395c5) setting_slider_pane_t1_copy1_ParamLimits

0x1762,	// (0x000395c5) setting_slider_pane_t1_copy1

0xb8bc,	// (0x0004371f) setting_slider_pane_t2_copy1_ParamLimits

0xb8bc,	// (0x0004371f) setting_slider_pane_t2_copy1

0xb8d6,	// (0x00043739) setting_slider_pane_t3_copy1_ParamLimits

0xb8d6,	// (0x00043739) setting_slider_pane_t3_copy1

0xb8ee,	// (0x00043751) slider_set_pane_copy1_ParamLimits

0xb8ee,	// (0x00043751) slider_set_pane_copy1

0xb9ce,	// (0x00043831) set_opt_bg_pane_g1_copy2

0xb9d6,	// (0x00043839) set_opt_bg_pane_g2_copy2

0x7dfb,	// (0x0003fc5e) set_opt_bg_pane_g3_copy2

0xb9e6,	// (0x00043849) set_opt_bg_pane_g4_copy2

0xb9ee,	// (0x00043851) set_opt_bg_pane_g5_copy2

0xb9f6,	// (0x00043859) set_opt_bg_pane_g6_copy2

0xeb39,	// (0x0004699c) set_opt_bg_pane_g7_copy2

0x7e0f,	// (0x0003fc72) set_opt_bg_pane_g8_copy2

0x7e19,	// (0x0003fc7c) set_opt_bg_pane_g9_copy2

0x17c8,	// (0x0003962b) aid_size_touch_slider_mark_copy1_ParamLimits

0x17c8,	// (0x0003962b) aid_size_touch_slider_mark_copy1

0x7e23,	// (0x0003fc86) slider_set_pane_g1_copy1

0x17dc,	// (0x0003963f) slider_set_pane_g2_copy1

0x05f4,	// (0x00038457) slider_set_pane_g3_copy1_ParamLimits

0x05f4,	// (0x00038457) slider_set_pane_g3_copy1

0x0608,	// (0x0003846b) slider_set_pane_g4_copy1_ParamLimits

0x0608,	// (0x0003846b) slider_set_pane_g4_copy1

0x0620,	// (0x00038483) slider_set_pane_g5_copy1_ParamLimits

0x0620,	// (0x00038483) slider_set_pane_g5_copy1

0x05f4,	// (0x00038457) slider_set_pane_g6_copy1_ParamLimits

0x05f4,	// (0x00038457) slider_set_pane_g6_copy1

0xb904,	// (0x00043767) slider_set_pane_g7_copy1_ParamLimits

0xb904,	// (0x00043767) slider_set_pane_g7_copy1

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp2_copy1

0x7e2c,	// (0x0003fc8f) setting_slider_graphic_pane_g1_copy1

0xeb43,	// (0x000469a6) setting_slider_graphic_pane_t1_copy1

0xeb53,	// (0x000469b6) setting_slider_graphic_pane_t2_copy1

0xeb63,	// (0x000469c6) slider_set_pane_cp_copy1

0x7e65,	// (0x0003fcc8) input_focus_pane_cp1_copy1

0x7e6e,	// (0x0003fcd1) list_set_text_pane_copy1

0x7e76,	// (0x0003fcd9) setting_text_pane_g1_copy1

0xeb6b,	// (0x000469ce) set_text_pane_t1_copy1

0x7e65,	// (0x0003fcc8) input_focus_pane_cp2_copy1

0x7e76,	// (0x0003fcd9) setting_code_pane_g1_copy1

0xeb85,	// (0x000469e8) setting_code_pane_t1_copy1

0xeb93,	// (0x000469f6) list_set_graphic_pane_copy1

0x7784,	// (0x0003f5e7) bg_set_opt_pane_cp4_copy1

0xa089,	// (0x00041eec) list_set_graphic_pane_g1_copy1_ParamLimits

0xa089,	// (0x00041eec) list_set_graphic_pane_g1_copy1

0xeba5,	// (0x00046a08) list_set_graphic_pane_g2_copy1

0xa0a1,	// (0x00041f04) list_set_graphic_pane_t1_copy1_ParamLimits

0xa0a1,	// (0x00041f04) list_set_graphic_pane_t1_copy1

0x498c,	// (0x0003c7ef) rs_clock_indi_pane_g1

0x7ea7,	// (0x0003fd0a) rs_clock_indi_pane_t1

0x7eb5,	// (0x0003fd18) rs_indi_pane

0x7ebd,	// (0x0003fd20) rs_indi_pane_g1

0x7ec6,	// (0x0003fd29) rs_indi_pane_g2

0x7ecf,	// (0x0003fd32) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00047d3d) rs_indi_pane_g

0xf333,	// (0x00047196) bg_popup_preview_window_pane_cp03

0x7ed8,	// (0x0003fd3b) popup_fep_tooltip_window_t1

0x5643,	// (0x0003d4a6) popup_note2_window_g2_ParamLimits

0x5643,	// (0x0003d4a6) popup_note2_window_g2

0x0001,

0xfc73,	// (0x00047ad6) popup_note2_window_g_ParamLimits

0xfc73,	// (0x00047ad6) popup_note2_window_g

0x5b6c,	// (0x0003d9cf) bg_popup_sub_pane_cp11_ParamLimits

0x5b79,	// (0x0003d9dc) cell_ai3_links_pane_g1_ParamLimits

0x5b90,	// (0x0003d9f3) cell_ai3_links_pane_t1

0xeb6b,	// (0x000469ce) set_text_pane_t1_copy1_ParamLimits

0xa120,	// (0x00041f83) cell_graphic_popup_pane_cp2_ParamLimits

0xa120,	// (0x00041f83) cell_graphic_popup_pane_cp2

0xebad,	// (0x00046a10) cell_graphic_popup_pane_g1_cp2

0x8597,	// (0x000403fa) cell_graphic_popup_pane_g2_cp2

0x7eee,	// (0x0003fd51) cell_graphic_popup_pane_g3_cp2

0x7ef6,	// (0x0003fd59) cell_graphic_popup_pane_t2_cp2

0x85a8,	// (0x0004040b) grid_highlight_pane_cp3_cp2

0xbc77,	// (0x00043ada) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb973,	// (0x000437d6) main_tmo_pane_ParamLimits

0xd0aa,	// (0x00044f0d) popup_tmo_big_image_note_window

0x7533,	// (0x0003f396) cell_ai5_widget_list_pane

0x753b,	// (0x0003f39e) cell_ai5_widget_lrg_icon_pane

0xe900,	// (0x00046763) tmo_note_info_pane_t1_ParamLimits

0xe915,	// (0x00046778) tmo_note_info_pane_t2_ParamLimits

0xe92e,	// (0x00046791) tmo_note_info_pane_t3_ParamLimits

0x7b1e,	// (0x0003f981) tmo_note_info_pane_t4_ParamLimits

0x7b30,	// (0x0003f993) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00047d2b) tmo_note_info_pane_t_ParamLimits

0xe9a8,	// (0x0004680b) settings_container_pane_ParamLimits

0x7e5d,	// (0x0003fcc0) indicator_popup_pane_cp5

0x7e5d,	// (0x0003fcc0) indicator_popup_pane_cp6

0xeb93,	// (0x000469f6) list_set_graphic_pane_copy1_ParamLimits

0x7770,	// (0x0003f5d3) bg_popup_window_pane_cp23

0x7f04,	// (0x0003fd67) popup_tmo_big_image_note_window_g1

0x7f10,	// (0x0003fd73) popup_tmo_big_image_note_window_t1

0x7f20,	// (0x0003fd83) popup_tmo_big_image_note_window_t2

0x7f30,	// (0x0003fd93) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00047d44) popup_tmo_big_image_note_window_t

0x498c,	// (0x0003c7ef) cell_ai5_widget_lrg_icon_pane_g1

0x7f40,	// (0x0003fda3) cell_ai5_widget_lrg_icon_pane_t1

0x7f4e,	// (0x0003fdb1) cell_ai5_widget_list_row_pane_ParamLimits

0x7f4e,	// (0x0003fdb1) cell_ai5_widget_list_row_pane

0x7f66,	// (0x0003fdc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7f66,	// (0x0003fdc9) cell_ai5_widget_list_row_pane_g1

0x7f73,	// (0x0003fdd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7f73,	// (0x0003fdd6) cell_ai5_widget_list_row_pane_t1

0x7f9e,	// (0x0003fe01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7f9e,	// (0x0003fe01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00047d4b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00047d4b) cell_ai5_widget_list_row_pane_t

0xec72,	// (0x00046ad5) main_fep_vtchi_ss_pane

0x7fe2,	// (0x0003fe45) popup_fep_char_pre_window

0x7fea,	// (0x0003fe4d) popup_fep_ituss_window

0x800b,	// (0x0003fe6e) popup_fep_vkbss_window

0x802c,	// (0x0003fe8f) grid_vkbss_keypad_pane_ParamLimits

0x802c,	// (0x0003fe8f) grid_vkbss_keypad_pane

0x803c,	// (0x0003fe9f) ituss_keypad_pane

0x1806,	// (0x00039669) aid_vkbss_key_offset_ParamLimits

0x1806,	// (0x00039669) aid_vkbss_key_offset

0x1812,	// (0x00039675) cell_vkbss_key_pane_ParamLimits

0x1812,	// (0x00039675) cell_vkbss_key_pane

0x804b,	// (0x0003feae) bg_cell_vkbss_key_g1_ParamLimits

0x804b,	// (0x0003feae) bg_cell_vkbss_key_g1

0x8057,	// (0x0003feba) cell_vkbss_key_3p_pane_ParamLimits

0x8057,	// (0x0003feba) cell_vkbss_key_3p_pane

0x8071,	// (0x0003fed4) cell_vkbss_key_g1_ParamLimits

0x8071,	// (0x0003fed4) cell_vkbss_key_g1

0x808b,	// (0x0003feee) cell_vkbss_key_t1_ParamLimits

0x808b,	// (0x0003feee) cell_vkbss_key_t1

0x1828,	// (0x0003968b) cell_ituss_key_pane_ParamLimits

0x1828,	// (0x0003968b) cell_ituss_key_pane

0x80b6,	// (0x0003ff19) bg_cell_ituss_key_g1_ParamLimits

0x80b6,	// (0x0003ff19) bg_cell_ituss_key_g1

0x80c2,	// (0x0003ff25) cell_ituss_key_pane_g1_ParamLimits

0x80c2,	// (0x0003ff25) cell_ituss_key_pane_g1

0x1839,	// (0x0003969c) cell_ituss_key_pane_g2_ParamLimits

0x1839,	// (0x0003969c) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00047d52) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00047d52) cell_ituss_key_pane_g

0x1865,	// (0x000396c8) cell_ituss_key_t1_ParamLimits

0x1865,	// (0x000396c8) cell_ituss_key_t1

0x189f,	// (0x00039702) cell_ituss_key_t2_ParamLimits

0x189f,	// (0x00039702) cell_ituss_key_t2

0x18d0,	// (0x00039733) cell_ituss_key_t3_ParamLimits

0x18d0,	// (0x00039733) cell_ituss_key_t3

0x189f,	// (0x00039702) cell_ituss_key_t4_ParamLimits

0x189f,	// (0x00039702) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00047d59) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00047d59) cell_ituss_key_t

0x80e8,	// (0x0003ff4b) cell_vkbss_key_3p_pane_g1

0x80f0,	// (0x0003ff53) cell_vkbss_key_3p_pane_g2

0x80f8,	// (0x0003ff5b) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00047d64) cell_vkbss_key_3p_pane_g

0xec72,	// (0x00046ad5) bg_popup_fep_char_preview_window_cp02

0x1913,	// (0x00039776) popup_fep_char_pre_window_t1

0xe7ec,	// (0x0004664f) main_ai5_sk_pane

0x7baa,	// (0x0003fa0d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7bb6,	// (0x0003fa19) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7bcb,	// (0x0003fa2e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7bd7,	// (0x0003fa3a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00047d36) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7be3,	// (0x0003fa46) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb973,	// (0x000437d6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebb5,	// (0x00046a18) main_ai5_sk_pane_g1

0x27d0,	// (0x0003a633) popup_query_code_window_g1

0x8000,	// (0x0003fe63) popup_fep_vkb_icf_pane

0x8016,	// (0x0003fe79) popup_fep_vtchi_icf_pane

0x8109,	// (0x0003ff6c) bg_icf_pane

0x8115,	// (0x0003ff78) list_vkb_icf_pane

0x8121,	// (0x0003ff84) bg_icf_pane_cp01

0x8134,	// (0x0003ff97) vtchi_icf_list_pane

0x8145,	// (0x0003ffa8) list_vkb_icf_pane_t1_ParamLimits

0x8145,	// (0x0003ffa8) list_vkb_icf_pane_t1

0x815b,	// (0x0003ffbe) vtchi_icf_list_pane_t1_ParamLimits

0x815b,	// (0x0003ffbe) vtchi_icf_list_pane_t1

0x7fea,	// (0x0003fe4d) popup_fep_ituss_window_ParamLimits

0x8016,	// (0x0003fe79) popup_fep_vtchi_icf_pane_ParamLimits

0x803c,	// (0x0003fe9f) ituss_keypad_pane_ParamLimits

0x17fa,	// (0x0003965d) ituss_sks_pane

0x8109,	// (0x0003ff6c) bg_icf_pane_ParamLimits

0x7fc6,	// (0x0003fe29) icf_edit_indi_pane_ParamLimits

0x7fc6,	// (0x0003fe29) icf_edit_indi_pane

0x8115,	// (0x0003ff78) list_vkb_icf_pane_ParamLimits

0x8121,	// (0x0003ff84) bg_icf_pane_cp01_ParamLimits

0x7fd5,	// (0x0003fe38) icf_edit_indi_pane_cp01_ParamLimits

0x7fd5,	// (0x0003fe38) icf_edit_indi_pane_cp01

0x813c,	// (0x0003ff9f) vtchi_query_pane

0x4c07,	// (0x0003ca6a) icf_edit_indi_pane_g1_ParamLimits

0x4c07,	// (0x0003ca6a) icf_edit_indi_pane_g1

0x81ca,	// (0x0004002d) icf_edit_indi_pane_g2_ParamLimits

0x81ca,	// (0x0004002d) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00047d7c) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00047d7c) icf_edit_indi_pane_g

0x81d9,	// (0x0004003c) icf_edit_indi_pane_t1

0x8173,	// (0x0003ffd6) bg_input_focus_pane_cp042

0x877b,	// (0x000405de) vtchi_button_pane

0x817c,	// (0x0003ffdf) vtchi_query_pane_t1

0x818a,	// (0x0003ffed) vtchi_query_pane_t2

0x8198,	// (0x0003fffb) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00047d6b) vtchi_query_pane_t

0xec72,	// (0x00046ad5) bg_button_pane_cp13

0x81a6,	// (0x00040009) vtchi_button_pane_g1

0x1922,	// (0x00039785) ituss_sks_pane_g1

0x192d,	// (0x00039790) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00047d72) ituss_sks_pane_g

0x81ae,	// (0x00040011) ituss_sks_pane_t1

0x81bc,	// (0x0004001f) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047d77) ituss_sks_pane_t

0x443c,	// (0x0003c29f) indicator_nsta_pane_cp_g1

0x4445,	// (0x0003c2a8) indicator_nsta_pane_cp_g2

0x444d,	// (0x0003c2b0) indicator_nsta_pane_cp_g3

0x4455,	// (0x0003c2b8) indicator_nsta_pane_cp_g4

0x445d,	// (0x0003c2c0) indicator_nsta_pane_cp_g5

0x4465,	// (0x0003c2c8) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00047914) indicator_nsta_pane_cp_g

0xe30f,	// (0x00046172) cell_graphic2_pane_t2_ParamLimits

0xe30f,	// (0x00046172) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00047c2d) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00047c2d) cell_graphic2_pane_t

0xe345,	// (0x000461a8) cell_graphic2_control_pane_t1

0x9f89,	// (0x00041dec) signal_pane_g3_ParamLimits

0x9f89,	// (0x00041dec) signal_pane_g3

0x9f9d,	// (0x00041e00) signal_pane_g4_ParamLimits

0x9f9d,	// (0x00041e00) signal_pane_g4

0x7fb0,	// (0x0003fe13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7fb0,	// (0x0003fe13) cell_ai5_widget_list_row_pane_t3

0x80d6,	// (0x0003ff39) cell_ituss_key_pane_t1_ParamLimits

0x80d6,	// (0x0003ff39) cell_ituss_key_pane_t1

0x244d,	// (0x0003a2b0) form_field_data_wide_pane_vc_t2_ParamLimits

0x244d,	// (0x0003a2b0) form_field_data_wide_pane_vc_t2

0x2461,	// (0x0003a2c4) form_field_data_wide_pane_vc_t3_ParamLimits

0x2461,	// (0x0003a2c4) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00047667) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00047667) form_field_data_wide_pane_vc_t

0x40ed,	// (0x0003bf50) form_field_slider_wide_pane_vc_t3_ParamLimits

0x40ed,	// (0x0003bf50) form_field_slider_wide_pane_vc_t3

0x41c3,	// (0x0003c026) form_field_popup_wide_pane_vc_t2_ParamLimits

0x41c3,	// (0x0003c026) form_field_popup_wide_pane_vc_t2

0x41da,	// (0x0003c03d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x41da,	// (0x0003c03d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00047903) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00047903) form_field_popup_wide_pane_vc_t

0xb779,	// (0x000435dc) aid_fshwr2_btn_pane_ParamLimits

0xb78a,	// (0x000435ed) aid_fshwr2_syb_pane_ParamLimits

0xb79b,	// (0x000435fe) aid_fshwr2_txt_pane_ParamLimits

0x0e69,	// (0x00038ccc) fshwr2_bg_pane_ParamLimits

0xb7a7,	// (0x0004360a) fshwr2_func_candi_pane_ParamLimits

0xb7c8,	// (0x0004362b) fshwr2_hwr_syb_pane_ParamLimits

0xb7e5,	// (0x00043648) fshwr2_icf_pane_ParamLimits

0xddf3,	// (0x00045c56) list_double_graphic_pane_vc_g4_ParamLimits

0xddf3,	// (0x00045c56) list_double_graphic_pane_vc_g4

0x1859,	// (0x000396bc) cell_ituss_key_pane_g3_ParamLimits

0x1859,	// (0x000396bc) cell_ituss_key_pane_g3

0x1901,	// (0x00039764) cell_ituss_key_t5_ParamLimits

0x1901,	// (0x00039764) cell_ituss_key_t5
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
